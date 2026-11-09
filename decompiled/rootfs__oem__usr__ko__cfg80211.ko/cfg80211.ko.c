// cfg80211.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== cfg80211_rfkill_poll @ 000113d8 size=12 ===== */

void cfg80211_rfkill_poll(undefined4 param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000113e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xd4))(param_2 + 0x68);
  return;
}



/* ===== cfg80211_dev_check_name @ 000113e4 size=136 ===== */

undefined4 cfg80211_dev_check_name(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  char *__s2;
  undefined4 *puVar5;
  int local_20;
  size_t local_1c;
  undefined4 uStack_18;
  
  local_1c = 0xffffffff;
  local_20 = param_1;
  uStack_18 = param_3;
  rtnl_is_locked();
  sVar2 = strlen(param_2);
  if (sVar2 < 0x41) {
    sscanf(param_2,DAT_0001146c,&local_20,&local_1c);
    sVar2 = strlen(param_2);
    puVar1 = DAT_00011470;
    if ((sVar2 == local_1c) && (*(int *)(param_1 + 0x38) != local_20)) {
      iVar4 = 1;
      while (local_20 = (int)((longlong)local_20 * (longlong)DAT_00011474 >> 0x22) -
                        (local_20 >> 0x1f), local_20 != 0) {
        iVar4 = iVar4 + 1;
      }
      local_20 = 0;
      if (local_1c == iVar4 + 3U) goto LAB_000113fe;
    }
    for (puVar5 = (undefined4 *)*DAT_00011470; puVar1 != puVar5; puVar5 = (undefined4 *)*puVar5) {
      __s2 = (char *)puVar5[0xae];
      if (__s2 == (char *)0x0) {
        __s2 = (char *)puVar5[0xa3];
      }
      iVar4 = strcmp(param_2,__s2);
      if (iVar4 == 0) goto LAB_000113fe;
    }
    uVar3 = 0;
  }
  else {
LAB_000113fe:
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



/* ===== cfg80211_event_work @ 00011478 size=24 ===== */

void cfg80211_event_work(int param_1)

{
  rtnl_lock();
  cfg80211_process_rdev_events(param_1 + -0xbc);
  rtnl_unlock();
  return;
}



/* ===== cfg80211_propagate_cac_done_wk @ 00011490 size=32 ===== */

void cfg80211_propagate_cac_done_wk(int param_1)

{
  rtnl_lock();
  regulatory_propagate_dfs_state(param_1 + 0x28,param_1 + -0x1c,2,1);
  rtnl_unlock();
  return;
}



/* ===== cfg80211_propagate_radar_detect_wk @ 000114b0 size=32 ===== */

void cfg80211_propagate_radar_detect_wk(int param_1)

{
  rtnl_lock();
  regulatory_propagate_dfs_state(param_1 + 0x54,param_1 + -0x1c,1,0);
  rtnl_unlock();
  return;
}



/* ===== cfg80211_sched_scan_stop_wk @ 000114d0 size=64 ===== */

void cfg80211_sched_scan_stop_wk(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  rtnl_lock();
  piVar3 = (int *)**(int **)(param_1 + -0x88);
  piVar2 = *(int **)(param_1 + -0x88);
  while (piVar1 = piVar3, piVar2 != (int *)(param_1 + -0x88)) {
    if (*(char *)(piVar2 + -1) != '\0') {
      cfg80211_stop_sched_scan_req(param_1 + -0x110,piVar2 + -0x1d,0);
    }
    piVar3 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  rtnl_unlock();
  return;
}



/* ===== wiphy_free @ 00011510 size=6 ===== */

void wiphy_free(int param_1)

{
  put_device(param_1 + 0xf0);
  return;
}



/* ===== wiphy_to_rdev @ 00011516 size=8 ===== */

int wiphy_to_rdev(int param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x11518);
    (*pcVar1)();
  }
  return param_1 + -0x1a0;
}



/* ===== wiphy_rfkill_start_polling @ 00011520 size=30 ===== */

void wiphy_rfkill_start_polling(void)

{
  int *piVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar2;
  
  uVar2 = wiphy_to_rdev();
  piVar1 = (int *)uVar2;
  if (*(int *)(*piVar1 + 0xd4) != 0) {
    piVar1[3] = DAT_00011540;
    rfkill_resume_polling(piVar1[6],(int)((ulonglong)uVar2 >> 0x20),extraout_r2,in_r3);
    return;
  }
  return;
}



/* ===== wiphy_rfkill_stop_polling @ 00011544 size=16 ===== */

void wiphy_rfkill_stop_polling(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  uVar1 = wiphy_to_rdev();
  rfkill_pause_polling
            (*(undefined4 *)((int)uVar1 + 0x18),(int)((ulonglong)uVar1 >> 0x20),extraout_r2,in_r3);
  return;
}



/* ===== wiphy_unregister @ 00011554 size=342 ===== */

void wiphy_unregister(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_2c [24];
  
  piVar1 = (int *)wiphy_to_rdev();
  _cond_resched();
  rtnl_lock();
  iVar4 = piVar1[0x11];
  rtnl_unlock();
  if (iVar4 != 0) {
    init_wait_entry(auStack_2c,0);
    while( true ) {
      prepare_to_wait_event(piVar1 + 0x12,auStack_2c,2);
      rtnl_lock();
      iVar4 = piVar1[0x11];
      rtnl_unlock();
      if (iVar4 == 0) break;
      schedule();
    }
    finish_wait(piVar1 + 0x12,auStack_2c);
  }
  if (piVar1[6] != 0) {
    rfkill_unregister();
  }
  rtnl_lock();
  nl80211_notify_wiphy(piVar1,4);
  *(undefined1 *)(piVar1 + 0x10a) = 0;
  debugfs_remove(piVar1[0x10b]);
  iVar4 = piVar1[1];
  piVar2 = (int *)piVar1[2];
  *(int **)(iVar4 + 4) = piVar2;
  *piVar2 = iVar4;
  piVar1[2] = 0x122;
  synchronize_rcu();
  wiphy_regulatory_deregister(param_1);
  *DAT_000116ac = *DAT_000116ac + 1;
  device_del(piVar1 + 0xa4);
  rtnl_unlock();
  flush_work(piVar1 + 0x26);
  cancel_work_sync(piVar1 + 0x2b);
  flush_work(piVar1 + 0x2f);
  cancel_delayed_work_sync(piVar1 + 0x33);
  flush_work(piVar1 + 0x40);
  flush_work(piVar1 + 0x44);
  flush_work(piVar1 + 0x53);
  flush_work(piVar1 + 0x5e);
  flush_work(piVar1 + 0x62);
  if ((piVar1[0x92] != 0) &&
     ((*(code **)(*piVar1 + 8) == (code *)0x0 ||
      ((**(code **)(*piVar1 + 8))(piVar1 + 0x68,0), piVar1[0x92] != 0)))) {
    iVar4 = 0;
    while( true ) {
      if (*(int *)(piVar1[0x92] + 0x10) <= iVar4) break;
      iVar3 = iVar4 * 0x10;
      iVar4 = iVar4 + 1;
      kfree(*(undefined4 *)(*(int *)(piVar1[0x92] + 8) + iVar3));
    }
    kfree();
    if ((*(int **)(piVar1[0x92] + 0xc) != (int *)0x0) && (**(int **)(piVar1[0x92] + 0xc) != 0)) {
      sock_release();
    }
    kfree(*(undefined4 *)(piVar1[0x92] + 0xc));
    kfree(*(undefined4 *)(piVar1[0x92] + 0x14));
    kfree(piVar1[0x92]);
  }
  cfg80211_rdev_free_coalesce(piVar1);
  return;
}



/* ===== wiphy_new_nm @ 000116b0 size=582 ===== */

undefined4 * wiphy_new_nm(undefined4 param_1,int param_2,char *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  puVar4 = (undefined4 *)__kmalloc(param_2 + 0x4a0,0xdc0,param_3,param_4,param_1,param_2,param_3);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar4 = param_1;
  piVar7 = (int *)(DAT_000118f8 + 4);
  HintPreloadData(piVar7);
  do {
    ExclusiveAccess(piVar7);
    iVar5 = *piVar7;
    iVar6 = iVar5 + 1;
    bVar1 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = iVar6;
  puVar4[0xe] = iVar6;
  if (iVar6 < 0) {
    HintPreloadData(piVar7);
    do {
      ExclusiveAccess(piVar7);
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = *piVar7 + -1;
LAB_000116fe:
    kfree(puVar4);
  }
  else {
    puVar8 = puVar4 + 0xa4;
    puVar4[0xe] = iVar5;
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
LAB_0001172c:
      iVar5 = dev_set_name(puVar8,DAT_000118fc,puVar4[0xe]);
      if (iVar5 < 0) goto LAB_000116fe;
    }
    else {
      rtnl_lock();
      iVar5 = cfg80211_dev_check_name(puVar4,param_3);
      if (iVar5 < 0) {
        rtnl_unlock();
        goto LAB_0001172c;
      }
      iVar5 = dev_set_name(puVar8,DAT_00011900,param_3);
      rtnl_unlock();
      if (iVar5 != 0) goto LAB_0001172c;
    }
    puVar4[0x10e] = puVar4 + 0x10e;
    puVar4[0x10f] = puVar4 + 0x10e;
    puVar4[0x14] = puVar4 + 0x14;
    puVar4[0x15] = puVar4 + 0x14;
    puVar4[0x1a] = puVar4 + 0x1a;
    puVar4[0x1b] = puVar4 + 0x1a;
    puVar4[0x22] = puVar4 + 0x22;
    puVar4[0x23] = puVar4 + 0x22;
    puVar4[0x27] = puVar4 + 0x27;
    puVar4[0x28] = puVar4 + 0x27;
    uVar2 = DAT_00011904;
    puVar4[0x26] = 0xffffffe0;
    puVar4[0x33] = 0xffffffe0;
    puVar4[0x29] = uVar2;
    puVar4[0x34] = puVar4 + 0x34;
    puVar4[0x35] = puVar4 + 0x34;
    uVar2 = DAT_0001190c;
    puVar4[0x36] = DAT_00011908;
    init_timer_key(puVar4 + 0x37,uVar2,0x200000,0,0);
    device_initialize(puVar8);
    iVar5 = puVar4[0xaf];
    puVar4[0x103] = DAT_00011910;
    if (-1 < (int)((uint)*(byte *)(puVar4 + 0xc1) << 0x1c)) {
      *(byte *)(puVar4 + 0xc1) = *(byte *)(puVar4 + 0xc1) | 2;
    }
    puVar4[0x41] = puVar4 + 0x41;
    puVar4[0x42] = puVar4 + 0x41;
    uVar2 = DAT_00011914;
    puVar4[100] = puVar4 + 99;
    puVar4[0xb3] = puVar4;
    puVar4[0x43] = uVar2;
    puVar4[0x44] = 0xffffffe0;
    puVar4[0x45] = puVar4 + 0x45;
    puVar4[0x46] = puVar4 + 0x45;
    uVar2 = DAT_00011918;
    puVar4[0x40] = 0xffffffe0;
    puVar4[0x53] = 0xffffffe0;
    puVar4[0x47] = uVar2;
    puVar4[0x48] = 0xffffffe0;
    puVar4[0x49] = puVar4 + 0x49;
    puVar4[0x4a] = puVar4 + 0x49;
    uVar2 = DAT_0001191c;
    puVar4[0x5e] = 0xffffffe0;
    puVar4[0x4b] = uVar2;
    puVar4[0x54] = puVar4 + 0x54;
    puVar4[0x55] = puVar4 + 0x54;
    puVar4[0x56] = DAT_00011920;
    puVar4[0x5f] = puVar4 + 0x5f;
    puVar4[99] = puVar4 + 99;
    uVar2 = DAT_00011924;
    puVar4[0x60] = puVar4 + 0x5f;
    uVar3 = DAT_00011928;
    puVar4[0x65] = uVar2;
    puVar4[0x61] = uVar3;
    puVar4[0x62] = 0xffffffe0;
    puVar4[0x71] = puVar4[0x71] | 0x10;
    puVar4[5] = DAT_0001192c;
    if (iVar5 == 0) {
      iVar5 = puVar4[0xa4];
    }
    iVar5 = rfkill_alloc(iVar5,puVar8,1,puVar4 + 3,puVar4);
    puVar4[6] = iVar5;
    if (iVar5 != 0) {
      puVar4[8] = puVar4 + 8;
      puVar4[9] = puVar4 + 8;
      uVar2 = DAT_00011930;
      puVar4[7] = 0xffffffe0;
      puVar4[0x2b] = 0xffffffe0;
      puVar4[10] = uVar2;
      puVar4[0x2c] = puVar4 + 0x2c;
      puVar4[0x2d] = puVar4 + 0x2c;
      uVar2 = DAT_00011938;
      puVar4[0x2e] = DAT_00011934;
      puVar4[0x2f] = 0xffffffe0;
      puVar4[0x30] = puVar4 + 0x30;
      puVar4[0x31] = puVar4 + 0x30;
      uVar3 = DAT_00011940;
      puVar4[0x32] = DAT_0001193c;
      __init_waitqueue_head(puVar4 + 0x12,uVar2,uVar3);
      *(undefined2 *)(puVar4 + 0x84) = 0x407;
      *(undefined1 *)(puVar4 + 0x87) = 0;
      puVar4[0x85] = 0xffffffff;
      puVar4[0x86] = 0xffffffff;
      *(undefined1 *)((int)puVar4 + 0x456) = 1;
      puVar4[0x7b] = 1;
      puVar4[0x7c] = 0xffffffff;
      return puVar4 + 0x68;
    }
    put_device(puVar8);
  }
  return (undefined4 *)0x0;
}



/* ===== wiphy_rfkill_set_hw_state @ 00011944 size=36 ===== */

void wiphy_rfkill_set_hw_state(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = wiphy_to_rdev();
  iVar2 = rfkill_set_hw_state(*(undefined4 *)(iVar1 + 0x18));
  if (iVar2 != 0) {
    queue_work_on(1,*DAT_00011968,iVar1 + 0x1c);
    return;
  }
  return;
}



/* ===== cfg80211_stop_iface @ 0001196c size=82 ===== */

void cfg80211_stop_iface(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int extraout_r2;
  int *piVar3;
  
  iVar1 = wiphy_to_rdev();
  piVar2 = (int *)kmem_cache_alloc(*(undefined4 *)
                                    (((extraout_r2 << 0x1b) >> 0x1f) * -0x38 + DAT_000119c0 + 4));
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 4;
    disableIRQinterrupts();
    piVar3 = *(int **)(param_2 + 0x88);
    *(int **)(param_2 + 0x88) = piVar2;
    *piVar2 = param_2 + 0x84;
    piVar2[1] = (int)piVar3;
    *piVar3 = (int)piVar2;
    queue_work_on(1,*(undefined4 *)(DAT_000119c4 + 8),iVar1 + 0xbc,param_4);
    return;
  }
  return;
}



/* ===== cfg80211_rdev_by_wiphy_idx @ 000119c8 size=34 ===== */

undefined4 * cfg80211_rdev_by_wiphy_idx(int param_1)

{
  undefined4 *puVar1;
  
  rtnl_is_locked();
  puVar1 = (undefined4 *)*DAT_000119ec;
  while( true ) {
    if (DAT_000119ec == puVar1) {
      return (undefined4 *)0x0;
    }
    if (puVar1[0xd] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + -1;
}



/* ===== get_wiphy_idx @ 000119f0 size=10 ===== */

undefined4 get_wiphy_idx(void)

{
  int iVar1;
  
  iVar1 = wiphy_to_rdev();
  return *(undefined4 *)(iVar1 + 0x38);
}



/* ===== wiphy_register @ 000119fa size=1084 ===== */

int wiphy_register(int *param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  int iVar17;
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_40;
  
  piVar4 = (int *)wiphy_to_rdev();
  puVar7 = (uint *)param_1[0x29];
  if ((((puVar7 == (uint *)0x0) ||
       (((*puVar7 & 0x18) != 0x10 && (((*puVar7 != 0 || (puVar7[1] != 0)) || (puVar7[6] != 0))))))
      && ((-1 < param_1[0xb] << 3 ||
          ((*(int *)(*piVar4 + 0x170) != 0 && (*(int *)(*piVar4 + 0x174) != 0)))))) &&
     ((((uVar12 = (uint)*(ushort *)(param_1 + 8), -1 < (int)(uVar12 << 0x13) ||
        (((iVar8 = *piVar4, *(int *)(iVar8 + 0x178) != 0 && (*(int *)(iVar8 + 0x17c) != 0)) &&
         ((*(int *)(iVar8 + 0x180) != 0 &&
          ((*(int *)(iVar8 + 0x184) != 0 && ((int)((uint)*(byte *)(param_1 + 0xaf) << 0x1f) < 0)))))
         ))) && (-1 < (int)(uVar12 << 0x1a))) &&
      ((iVar8 = param_1[0xb5], iVar8 == 0 ||
       ((((((bVar1 = *(byte *)(iVar8 + 0x12), (int)((uint)bVar1 << 0x1f) < 0 && ((bVar1 & 6) != 0))
           && (uVar6 = *(uint *)(iVar8 + 8), uVar6 != 0)) &&
          ((*(uint *)(iVar8 + 0xc) != 0 && ((uVar6 & 0xffffffe0) == 0)))) &&
         (((bVar1 & 0x60) == 0 || ((int)(uVar6 << 0x1b) < 0)))) &&
        ((*(uint *)(iVar8 + 0xc) & 0xffffff00) == 0)))))))) {
    if ((uVar12 & DAT_00011d58) != 0) {
      param_1[10] = param_1[10] | 0x40;
    }
    if ((((((-1 < param_1[10] << 0x18) || ((param_1[10] & 0x1bU) == 0)) &&
          ((((piVar9 = (int *)param_1[0xa8], piVar9 == (int *)0x0 ||
             ((*piVar9 != 0 && (piVar9[2] != 0)))) || ((piVar9[4] != 0 && (piVar9[4] <= piVar9[3])))
            ) && ((param_1[0xe] == 0 || (param_1[9] << 0xe < 0)))))) &&
         ((piVar9 = (int *)param_1[3], piVar9 == (int *)0x0 ||
          ((*(short *)((int)param_1 + 0x1e) != 0 &&
           ((*param_1 == 0 && (short)param_1[1] == 0 ||
            (iVar8 = memcmp(param_1,piVar9,6), iVar8 == 0)))))))) &&
        (((*(short *)((int)param_1 + 0x22) == 0 ||
          ((param_1[9] << 0xe < 0 && (*(int *)(*piVar4 + 0x140) != 0)))) &&
         ((param_1[0xae] == 0 || ((param_1[0xae] & 0xfffffff1U) == 0)))))) &&
       (((-1 < (int)((uint)*(byte *)((int)piVar4 + 0x1d2) << 0x1f) ||
         ((*(int *)(*piVar4 + 0x194) != 0 && (*(int *)(*piVar4 + 0x198) != 0)))) &&
        ((piVar4[0x71] << 0x12 < 0 || (*(int *)(*piVar4 + 0xb0) == 0)))))) {
      if (piVar9 != (int *)0x0) {
        *param_1 = *piVar9;
        *(short *)(param_1 + 1) = (short)piVar9[1];
      }
      if (uVar12 != (uVar12 & 0x1ffe)) {
        *(short *)(param_1 + 8) = (short)(uVar12 & 0x1ffe);
      }
      for (iVar8 = 0; iVar8 < param_1[6]; iVar8 = iVar8 + 1) {
        iVar17 = param_1[5] + iVar8 * 0x14;
        if ((*(ushort *)(iVar17 + 8) < 2) && (*(char *)(iVar17 + 0xc) == '\0')) {
          return -0x16;
        }
        if (9 < *(int *)(iVar17 + 4) - 1U) {
          return -0x16;
        }
        if ((*(char *)(iVar17 + 0xc) != '\0') && (*(int *)(iVar17 + 4) != 1)) {
          return -0x16;
        }
        if (*(byte *)(iVar17 + 10) == 0) {
          return -0x16;
        }
        iVar14 = *(int *)(param_1[5] + iVar8 * 0x14);
        uVar12 = 0;
        uVar6 = 0;
        iVar13 = 0;
        do {
          uVar16 = *(ushort *)(iVar14 + 2 + iVar13 * 4);
          uVar11 = (uint)uVar16;
          if ((uVar11 & uVar12) != 0) {
            return -0x16;
          }
          uVar15 = (uint)*(ushort *)(iVar14 + iVar13 * 4);
          if (uVar15 == 0) {
            return -0x16;
          }
          if ((uVar16 & *(ushort *)(param_1 + 7)) != 0) {
            return -0x16;
          }
          if (((int)(uVar11 << 0x15) < 0) && (1 < uVar15)) {
            return -0x16;
          }
          if (((int)(uVar11 << 0x13) < 0) && (1 < uVar15)) {
            return -0x16;
          }
          if (((int)(uVar11 << 0x1e) < 0) && (*(int *)(iVar17 + 0x10) != 0)) {
            return -0x16;
          }
          uVar6 = uVar6 + uVar15;
          if ((uVar11 & ~(uint)*(ushort *)(param_1 + 8)) != 0) {
            return -0x16;
          }
          iVar13 = iVar13 + 1;
          uVar12 = uVar12 | uVar11;
        } while (iVar13 < (int)(uint)*(byte *)(iVar17 + 10));
        if ((int)(uVar12 << 0x1a) < 0) {
          return -0x16;
        }
        if (uVar6 < *(ushort *)(iVar17 + 8)) {
          return -0x16;
        }
      }
      cVar5 = '\0';
      iVar8 = 0;
      piVar9 = param_1 + 0x35;
      do {
        piVar10 = (int *)*piVar9;
        if (piVar10 != (int *)0x0) {
          piVar10[2] = iVar8;
          if (piVar10[3] == 0) {
            return -0x16;
          }
          if ((iVar8 != 2) && (iVar8 != 4)) {
            if (piVar10[4] == 0) {
              return -0x16;
            }
            if (iVar8 == 3) {
              if (*(char *)((int)piVar10 + 0x16) != '\0') {
                return -0x16;
              }
              if ((char)piVar10[0xb] != '\0') {
                return -0x16;
              }
            }
          }
          if (((*(char *)(DAT_00011d5c + 0xc) != '\0') && (iVar8 == 0)) &&
             (*(char *)((int)piVar10 + 0x16) != '\0')) {
            *(ushort *)(piVar10 + 5) = *(ushort *)(piVar10 + 5) & 0xffbd;
          }
          if (0x20 < piVar10[4]) {
            return -0x16;
          }
          for (iVar17 = 0; iVar17 < piVar10[3]; iVar17 = iVar17 + 1) {
            iVar13 = iVar17 * 0x38;
            *(undefined4 *)(*piVar10 + iVar13 + 0x20) = *(undefined4 *)(*piVar10 + iVar13 + 0xc);
            *(undefined4 *)(*piVar10 + iVar13 + 0x24) = 0x7fffffff;
            *(undefined4 *)(*piVar10 + iVar13 + 0x28) = *(undefined4 *)(*piVar10 + iVar13 + 0x14);
            *(int *)(*piVar10 + iVar13) = iVar8;
            if (999 < *(ushort *)(*piVar10 + iVar13 + 8)) {
              return -0x16;
            }
          }
          uVar16 = 0;
          cVar5 = '\0';
          for (iVar17 = 0; iVar17 < (int)(uint)*(ushort *)(piVar10 + 0x15); iVar17 = iVar17 + 1) {
            uVar3 = *(ushort *)(piVar10[0x16] + iVar17 * 0x3c);
            if (uVar3 == 0) {
              return -0x16;
            }
            if ((uVar3 & uVar16) != 0) {
              return -0x16;
            }
            cVar2 = *(char *)(piVar10[0x16] + iVar17 * 0x3c + 2);
            if (cVar2 == '\0') {
              return -0x16;
            }
            if (iVar17 == 0) {
              cVar5 = cVar2;
            }
            uVar16 = uVar3 | uVar16;
          }
          if (cVar5 == '\0') {
            if (iVar8 == 3) {
              return -0x16;
            }
            cVar5 = '\x01';
          }
        }
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar8 != 5);
      if (cVar5 != '\0') {
        for (iVar8 = 0; iVar8 < piVar4[0x113]; iVar8 = iVar8 + 1) {
          iVar17 = iVar8 * 0x1c + piVar4[0x111];
          if (*(int *)(iVar17 + 0x14) == 0) {
            return -0x16;
          }
          if ((*(int *)(iVar17 + 0xc) == 0) && (*(int *)(iVar17 + 0x10) == 0)) {
            return -0x16;
          }
        }
        iVar8 = piVar4[0x91];
        if (((iVar8 == 0) || (*(int *)(iVar8 + 4) == 0)) ||
           ((*(int *)(iVar8 + 0xc) != 0 && (*(int *)(iVar8 + 0xc) <= *(int *)(iVar8 + 8))))) {
          ieee80211_set_bitrate_flags(param_1);
          piVar4[0x73] = piVar4[0x73] | 0x80;
          rtnl_lock();
          iVar8 = device_add(piVar4 + 0xa4);
          piVar9 = DAT_00011e40;
          if (iVar8 != 0) {
            rtnl_unlock();
            return iVar8;
          }
          iVar8 = *DAT_00011e40;
          piVar4[1] = iVar8;
          piVar4[2] = (int)piVar9;
          *piVar9 = (int)(piVar4 + 1);
          *(int **)(iVar8 + 4) = piVar4 + 1;
          piVar9 = DAT_00011e44;
          iVar8 = piVar4[0xaf];
          *DAT_00011e44 = *DAT_00011e44 + 1;
          if (iVar8 == 0) {
            iVar8 = piVar4[0xa4];
          }
          iVar8 = debugfs_create_dir(iVar8,piVar9[4]);
          piVar4[0x10b] = iVar8;
          nl80211_notify_wiphy(piVar4,3);
          wiphy_regulatory_register(param_1);
          if (param_1[10] << 0x1f < 0) {
            local_4c = get_wiphy_idx(param_1);
            local_48 = 2;
            local_40 = 0x3939;
            nl80211_common_reg_change_event(0x24,auStack_54);
          }
          *(undefined1 *)(piVar4 + 0x10a) = 1;
          rtnl_unlock();
          iVar8 = rfkill_register(piVar4[6]);
          if (iVar8 != 0) {
            rfkill_destroy(piVar4[6]);
            piVar4[6] = 0;
            wiphy_unregister(piVar4 + 0x68);
            return iVar8;
          }
          return 0;
        }
      }
    }
  }
  return -0x16;
}



/* ===== wiphy_idx_to_wiphy @ 00011e48 size=22 ===== */

int wiphy_idx_to_wiphy(undefined4 param_1)

{
  int iVar1;
  
  rtnl_is_locked();
  iVar1 = cfg80211_rdev_by_wiphy_idx(param_1);
  if (iVar1 != 0) {
    iVar1 = iVar1 + 0x1a0;
  }
  return iVar1;
}



/* ===== cfg80211_dev_rename @ 00011e5e size=90 ===== */

int cfg80211_dev_rename(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *__s2;
  uint uVar3;
  
  rtnl_is_locked();
  __s2 = *(char **)(param_1 + 700);
  if (__s2 == (char *)0x0) {
    __s2 = *(char **)(param_1 + 0x290);
  }
  iVar1 = strcmp(param_2,__s2);
  iVar2 = 0;
  if (((iVar1 != 0) && (iVar2 = cfg80211_dev_check_name(param_1,param_2), -1 < iVar2)) &&
     (iVar2 = device_rename(param_1 + 0x290,param_2), iVar2 == 0)) {
    uVar3 = *(uint *)(param_1 + 0x42c);
    if ((uVar3 != 0) && (uVar3 < 0xfffff001)) {
      debugfs_rename(*(undefined4 *)(uVar3 + 0x10),uVar3,*(undefined4 *)(uVar3 + 0x10),param_2);
    }
    nl80211_notify_wiphy(param_1,3);
  }
  return iVar2;
}



/* ===== cfg80211_switch_netns @ 00011eb8 size=246 ===== */

int cfg80211_switch_netns(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar1 = DAT_00011fb0;
  if (*(int *)(param_1 + 0x1c4) << 0x1c < 0) {
    puVar8 = (undefined4 *)(param_1 + 0x438);
    for (piVar6 = *(int **)(param_1 + 0x438); puVar8 != piVar6; piVar6 = (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0x70) = *(uint *)(iVar4 + 0x70) & 0xffffdfff;
        iVar4 = dev_change_net_namespace(piVar6[2],param_2,uVar1);
        uVar3 = DAT_00011fb4;
        uVar2 = DAT_00011fb0;
        if (iVar4 != 0) {
          for (puVar7 = (undefined4 *)piVar6[1]; puVar8 != puVar7; puVar7 = (undefined4 *)puVar7[1])
          {
            iVar5 = puVar7[2];
            if (iVar5 != 0) {
              *(uint *)(iVar5 + 0x70) = *(uint *)(iVar5 + 0x70) & 0xffffdfff;
              iVar4 = dev_change_net_namespace(puVar7[2],uVar3,uVar2);
              *(uint *)(puVar7[2] + 0x70) = *(uint *)(puVar7[2] + 0x70) | 0x2000;
            }
          }
          return iVar4;
        }
        *(uint *)(piVar6[2] + 0x70) = *(uint *)(piVar6[2] + 0x70) | 0x2000;
      }
    }
    for (puVar7 = *(undefined4 **)(param_1 + 0x438); puVar8 != puVar7;
        puVar7 = (undefined4 *)*puVar7) {
      if (puVar7[2] != 0) {
        nl80211_notify_iface(param_1,puVar7 + -2,8);
      }
    }
    nl80211_notify_wiphy(param_1,4);
    iVar4 = *(int *)(param_1 + 700);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x290);
    }
    device_rename(param_1 + 0x290,iVar4);
    nl80211_notify_wiphy(param_1,3);
    for (puVar7 = *(undefined4 **)(param_1 + 0x438); puVar8 != puVar7;
        puVar7 = (undefined4 *)*puVar7) {
      if (puVar7[2] != 0) {
        nl80211_notify_iface(param_1,puVar7 + -2,7);
      }
    }
    iVar4 = 0;
  }
  else {
    iVar4 = -0x5f;
  }
  return iVar4;
}



/* ===== cfg80211_stop_p2p_device @ 00011fb8 size=108 ===== */

void cfg80211_stop_p2p_device(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  rtnl_is_locked();
  if (*(int *)(param_2 + 4) == 10) {
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar2 = (uint)*(byte *)(param_2 + 0x31);
    }
    else {
      uVar2 = *(uint *)(*(int *)(param_2 + 0x10) + 0x28) & 1;
    }
    if (uVar2 != 0) {
      (**(code **)(*param_1 + 0x13c))(param_1 + 0x68,param_2);
      *(undefined1 *)(param_2 + 0x31) = 0;
      param_1[0x11] = param_1[0x11] + -1;
      iVar3 = param_1[0x1f];
      if ((iVar3 != 0) && (param_2 == *(int *)(iVar3 + 0x34))) {
        cVar1 = *(char *)(iVar3 + 0x68);
        if ((cVar1 == '\0') &&
           ((param_1[0x20] == 0 || (cVar1 = *(char *)(param_1[0x20] + 0x68), cVar1 == '\0')))) {
          cVar1 = '\x01';
          *(undefined1 *)(iVar3 + 0x66) = 1;
        }
        ___cfg80211_scan_done(param_1,0,cVar1,param_4);
        return;
      }
    }
  }
  return;
}



/* ===== cfg80211_stop_nan @ 00012024 size=62 ===== */

void cfg80211_stop_nan(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  uint uVar1;
  
  rtnl_is_locked();
  if (*(int *)(param_2 + 4) == 0xc) {
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar1 = (uint)*(byte *)(param_2 + 0x31);
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_2 + 0x10) + 0x28) & 1;
    }
    if (uVar1 != 0) {
      (**(code **)(*param_1 + 0x17c))
                (param_1 + 0x68,param_2,extraout_r2,*(code **)(*param_1 + 0x17c),param_4);
      *(undefined1 *)(param_2 + 0x31) = 0;
      param_1[0x11] = param_1[0x11] + -1;
    }
  }
  return;
}



/* ===== cfg80211_shutdown_all_interfaces @ 00012062 size=76 ===== */

void cfg80211_shutdown_all_interfaces(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = wiphy_to_rdev();
  rtnl_is_locked();
  for (piVar2 = *(int **)(iVar1 + 0x438); piVar2 != (int *)(iVar1 + 0x438); piVar2 = (int *)*piVar2)
  {
    if (piVar2[2] == 0) {
      if (piVar2[-1] == 10) {
        cfg80211_stop_p2p_device(iVar1,piVar2 + -2);
      }
      else if (piVar2[-1] == 0xc) {
        cfg80211_stop_nan(iVar1,piVar2 + -2);
      }
    }
    else {
      dev_close();
    }
  }
  return;
}



/* ===== cfg80211_rfkill_set_block @ 000120ae size=26 ===== */

undefined4 cfg80211_rfkill_set_block(int param_1,int param_2)

{
  if (param_2 != 0) {
    rtnl_lock();
    cfg80211_shutdown_all_interfaces(param_1 + 0x1a0);
    rtnl_unlock();
  }
  return 0;
}



/* ===== cfg80211_rfkill_block_work @ 000120c8 size=24 ===== */

void cfg80211_rfkill_block_work(int param_1)

{
  rtnl_lock();
  cfg80211_shutdown_all_interfaces(param_1 + 0x184);
  rtnl_unlock();
  return;
}



/* ===== cfg80211_destroy_ifaces @ 000120e0 size=60 ===== */

void cfg80211_destroy_ifaces(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  rtnl_is_locked();
  piVar3 = (int *)*(int *)param_1[0x10e];
  piVar2 = (int *)param_1[0x10e];
  while (piVar1 = piVar3, piVar2 != param_1 + 0x10e) {
    if (*(char *)(piVar2 + 0x35) != '\0') {
      (**(code **)(*param_1 + 0x10))(param_1 + 0x68);
    }
    piVar3 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  return;
}



/* ===== cfg80211_destroy_iface_wk @ 0001211c size=24 ===== */

void cfg80211_destroy_iface_wk(int param_1)

{
  rtnl_lock();
  cfg80211_destroy_ifaces(param_1 + -0x100);
  rtnl_unlock();
  return;
}



/* ===== cfg80211_dev_free @ 00012134 size=94 ===== */

void cfg80211_dev_free(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  rfkill_destroy(*(undefined4 *)(param_1 + 0x18));
  piVar1 = *(int **)(param_1 + 0x50);
  piVar5 = (int *)*piVar1;
  while (piVar1 != (int *)(param_1 + 0x50)) {
    iVar3 = *piVar1;
    piVar4 = (int *)piVar1[1];
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    *piVar1 = 0x100;
    piVar1[1] = 0x122;
    kfree();
    piVar1 = piVar5;
    piVar5 = (int *)*piVar5;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x68);
  puVar6 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)(param_1 + 0x68)) {
    cfg80211_put_bss(param_1 + 0x1a0,puVar2 + 0x12);
    puVar2 = puVar6;
    puVar6 = (undefined4 *)*puVar6;
  }
  kfree(param_1);
  return;
}



/* ===== cfg80211_cqm_config_free @ 00012192 size=20 ===== */

void cfg80211_cqm_config_free(int param_1)

{
  kfree(*(undefined4 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}



/* ===== __cfg80211_unregister_wdev @ 000121a6 size=122 ===== */

void __cfg80211_unregister_wdev(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = wiphy_to_rdev(*param_1);
  rtnl_is_locked();
  flush_work(param_1 + 0x3d);
  nl80211_notify_iface(iVar1,param_1,8);
  iVar2 = param_1[2];
  piVar3 = (int *)param_1[3];
  *(int **)(iVar2 + 4) = piVar3;
  *piVar3 = iVar2;
  param_1[3] = 0x122;
  if (param_2 != 0) {
    synchronize_rcu();
  }
  *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) + 1;
  cfg80211_mlme_purge_registrations(param_1);
  if (param_1[1] == 10) {
    cfg80211_stop_p2p_device(iVar1,param_1);
  }
  else if (param_1[1] == 0xc) {
    cfg80211_stop_nan(iVar1,param_1);
  }
  if (param_1[4] != 0) {
    flush_work(param_1 + 0x1b);
  }
  cfg80211_cqm_config_free(param_1);
  return;
}



/* ===== cfg80211_unregister_wdev @ 00012220 size=10 ===== */

void cfg80211_unregister_wdev(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    __cfg80211_unregister_wdev(param_1,1);
    return;
  }
  return;
}



/* ===== cfg80211_update_iface_num @ 0001222a size=32 ===== */

void cfg80211_update_iface_num(int param_1,int param_2,int param_3)

{
  int extraout_r3;
  int iVar1;
  
  rtnl_is_locked();
  iVar1 = extraout_r3;
  if (param_2 == 6) {
    iVar1 = *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_3;
  if (param_2 == 6) {
    *(int *)(param_1 + 0x5c) = iVar1 + param_3;
  }
  return;
}



/* ===== __cfg80211_leave @ 0001224a size=148 ===== */

void __cfg80211_leave(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x10);
  rtnl_is_locked();
  cfg80211_pmsr_wdev_down(param_2);
  switch(*(undefined4 *)(param_2 + 4)) {
  case 1:
    __cfg80211_leave_ibss(param_1,iVar4,1);
    return;
  case 2:
  case 8:
    piVar3 = *(int **)(param_1 + 0x88);
    piVar2 = (int *)*piVar3;
    break;
  case 3:
  case 9:
    __cfg80211_stop_ap(param_1,iVar4,1);
    return;
  default:
    return;
  case 7:
    __cfg80211_leave_mesh(param_1,iVar4);
    return;
  case 0xb:
    __cfg80211_leave_ocb(param_1,iVar4);
    return;
  }
  while (piVar1 = piVar2, piVar3 != (int *)(param_1 + 0x88)) {
    if (piVar3[-7] == iVar4) {
      cfg80211_stop_sched_scan_req(param_1,piVar3 + -0x1d,0);
    }
    piVar2 = (int *)*piVar1;
    piVar3 = piVar1;
  }
  cfg80211_disconnect(param_1,iVar4,3,1);
  return;
}



/* ===== cfg80211_leave @ 000122ea size=34 ===== */

void cfg80211_leave(undefined4 param_1,int param_2)

{
  mutex_lock(param_2 + 0x24);
  __cfg80211_leave(param_1,param_2);
  mutex_unlock(param_2 + 0x24);
  return;
}



/* ===== cfg80211_init_wdev @ 0001230c size=144 ===== */

void cfg80211_init_wdev(int *param_1)

{
  __mutex_init(param_1 + 9,DAT_000123a0,DAT_0001239c);
  param_1[0x21] = (int)(param_1 + 0x21);
  param_1[0x22] = (int)(param_1 + 0x21);
  param_1[6] = (int)(param_1 + 6);
  param_1[7] = (int)(param_1 + 6);
  param_1[0x3b] = (int)(param_1 + 0x3b);
  param_1[0x3c] = (int)(param_1 + 0x3b);
  param_1[0x3d] = -0x20;
  param_1[0x3e] = (int)(param_1 + 0x3e);
  param_1[0x3f] = (int)(param_1 + 0x3e);
  param_1[0x40] = DAT_000123a4;
  *(byte *)((int)param_1 + 0xca) = (byte)((uint)(*(int *)(*param_1 + 0x24) << 0x1b) >> 0x1f);
  param_1[0x33] = -1;
  if (((param_1[1] == 8) || (param_1[1] - 1U < 2)) && ((char)param_1[0xc] == '\0')) {
    *(uint *)(param_1[4] + 0x13c) = *(uint *)(param_1[4] + 0x13c) | 0x40;
  }
  param_1[0x1b] = -0x20;
  param_1[0x1c] = (int)(param_1 + 0x1c);
  param_1[0x1d] = (int)(param_1 + 0x1c);
  param_1[0x1e] = DAT_000123a8;
  return;
}



/* ===== cfg80211_register_wdev @ 000123ac size=50 ===== */

void cfg80211_register_wdev(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    iVar1 = *(int *)(param_1 + 0x40) + 1;
    *(int *)(param_1 + 0x40) = iVar1;
    *(int *)(param_2 + 0x14) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x438);
  *(int *)(param_2 + 0xc) = param_1 + 0x438;
  *(int *)(param_2 + 8) = iVar1;
  *(int *)(param_1 + 0x438) = param_2 + 8;
  *(int *)(iVar1 + 4) = param_2 + 8;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  nl80211_notify_iface(param_1,param_2,7);
  return;
}



/* ===== cfg80211_netdev_notifier_call @ 000123de size=474 ===== */

undefined4
cfg80211_netdev_notifier_call(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 extraout_r3;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar9 = *param_3;
  puVar7 = *(undefined4 **)(iVar9 + 0x1c4);
  if (puVar7 == (undefined4 *)0x0) {
switchD_00012402_caseD_3:
    uVar5 = 0;
  }
  else {
    uVar10 = *puVar7;
    piVar4 = (int *)wiphy_to_rdev(uVar10,param_2,param_3,param_2,param_4);
    uVar5 = puVar7[1];
    switch(extraout_r3) {
    case 1:
      cfg80211_update_iface_num(piVar4,uVar5,1);
      mutex_lock(puVar7 + 9);
      mutex_unlock(puVar7 + 9);
      piVar4[0x11] = piVar4[0x11] + 1;
      if ((((puVar7[1] == 2) || (puVar7[1] == 8)) && (*(code **)(*piVar4 + 0xfc) != (code *)0x0)) &&
         (iVar9 = (**(code **)(*piVar4 + 0xfc))
                            (piVar4 + 0x68,iVar9,*(undefined1 *)((int)puVar7 + 0xca),puVar7[0x33]),
         iVar9 != 0)) {
        *(undefined1 *)((int)puVar7 + 0xca) = 0;
      }
      break;
    case 2:
      cfg80211_update_iface_num(piVar4,uVar5,0xffffffff);
      iVar9 = piVar4[0x1f];
      if ((iVar9 != 0) && (*(undefined4 **)(iVar9 + 0x34) == puVar7)) {
        if ((*(char *)(iVar9 + 0x68) == '\0') &&
           ((piVar4[0x20] == 0 || (*(char *)(piVar4[0x20] + 0x68) == '\0')))) {
          *(undefined1 *)(iVar9 + 0x66) = 1;
        }
        ___cfg80211_scan_done(piVar4,0);
      }
      piVar6 = (int *)piVar4[0x22];
      piVar3 = (int *)*piVar6;
      while (piVar2 = piVar3, piVar6 != piVar4 + 0x22) {
        if (piVar6[-7] == puVar7[4]) {
          cfg80211_stop_sched_scan_req(piVar4,piVar6 + -0x1d,0);
        }
        piVar3 = (int *)*piVar2;
        piVar6 = piVar2;
      }
      piVar4[0x11] = piVar4[0x11] + -1;
      __wake_up(piVar4 + 0x12,3,1,0);
      break;
    default:
      goto switchD_00012402_caseD_3;
    case 5:
      iVar9 = sysfs_create_link(iVar9 + 0x280,piVar4 + 0xa4,DAT_000125e0);
      if (iVar9 != 0) {
        printk(DAT_000125e4);
      }
      cfg80211_register_wdev(piVar4,puVar7);
      break;
    case 6:
      puVar8 = puVar7 + 2;
      if (puVar8 != (undefined4 *)puVar7[2]) {
        __cfg80211_unregister_wdev(puVar7,0);
        sysfs_remove_link(iVar9 + 0x280,DAT_000125e0);
      }
      synchronize_rcu();
      puVar7[2] = puVar8;
      puVar7[3] = puVar8;
      cfg80211_process_wdev_events(puVar7);
      iVar9 = puVar7[0x23];
      if (iVar9 != 0) {
        piVar4 = (int *)(iVar9 + 0x30);
        HintPreloadData(piVar4);
        do {
          ExclusiveAccess(piVar4);
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = *piVar4 + -1;
        if (*(int *)(iVar9 + 0x60) != 0) {
          piVar4 = (int *)(*(int *)(iVar9 + 0x60) + -0x18);
          HintPreloadData(piVar4);
          do {
            ExclusiveAccess(piVar4);
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = *piVar4 + -1;
        }
        cfg80211_put_bss(*puVar7,puVar7[0x23] + 0x48);
        puVar7[0x23] = 0;
      }
      break;
    case 10:
      cfg80211_leave(piVar4,puVar7);
      break;
    case 0xe:
      iVar9 = cfg80211_iftype_allowed(uVar10,uVar5,*(undefined1 *)(puVar7 + 0xc),0);
      if (iVar9 == 0) {
        return 0x8060;
      }
      iVar9 = rfkill_blocked(piVar4[6]);
      if (iVar9 != 0) {
        return 0x8085;
      }
      break;
    case 0x11:
      *(undefined4 *)(iVar9 + 0x2b0) = DAT_000125dc;
      puVar7[4] = iVar9;
      *(uint *)(iVar9 + 0x70) = *(uint *)(iVar9 + 0x70) | 0x2000;
      cfg80211_init_wdev(puVar7,uVar5);
    }
    wireless_nlevent_flush();
    uVar5 = 1;
  }
  return uVar5;
}



/* ===== wiphy_uevent @ 000125e8 size=4 ===== */

undefined4 wiphy_uevent(void)

{
  return 0;
}



/* ===== wiphy_namespace @ 000125ec size=4 ===== */

undefined4 wiphy_namespace(void)

{
  return DAT_000125f0;
}



/* ===== wiphy_dev_release @ 000125f4 size=8 ===== */

void wiphy_dev_release(int param_1)

{
  cfg80211_dev_free(param_1 + -0x290);
  return;
}



/* ===== name_show @ 000125fc size=16 ===== */

void name_show(int *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = param_1[0xb];
  if (iVar1 == 0) {
    iVar1 = *param_1;
  }
  sprintf(param_3,DAT_0001260c,iVar1);
  return;
}



/* ===== address_mask_show @ 00012610 size=14 ===== */

void address_mask_show(int param_1,undefined4 param_2,char *param_3)

{
  sprintf(param_3,DAT_00012620,param_1 + -0xea);
  return;
}



/* ===== macaddress_show @ 00012624 size=14 ===== */

void macaddress_show(int param_1,undefined4 param_2,char *param_3)

{
  sprintf(param_3,DAT_00012634,param_1 + -0xf0);
  return;
}



/* ===== index_show @ 00012638 size=16 ===== */

void index_show(int param_1,undefined4 param_2,char *param_3)

{
  sprintf(param_3,DAT_00012648,*(undefined4 *)(param_1 + -600));
  return;
}



/* ===== addresses_show @ 0001264c size=78 ===== */

int addresses_show(int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  char *__format;
  int iVar1;
  int iVar2;
  char *__s;
  
  __format = DAT_0001269c;
  if (*(int *)(param_1 + -0xe4) == 0) {
    iVar1 = sprintf(param_3,DAT_0001269c,param_1 + -0xf0,param_4);
    return iVar1;
  }
  __s = param_3;
  for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)(param_1 + -0xd2); iVar1 = iVar1 + 1) {
    iVar2 = sprintf(__s,__format,iVar1 * 6 + *(int *)(param_1 + -0xe4));
    __s = __s + iVar2;
  }
  return (int)__s - (int)param_3;
}



/* ===== wiphy_sysfs_init @ 000126a0 size=8 ===== */

void wiphy_sysfs_init(void)

{
  __class_register(DAT_000126ac,DAT_000126a8);
  return;
}



/* ===== wiphy_sysfs_exit @ 000126b0 size=6 ===== */

void wiphy_sysfs_exit(void)

{
  class_unregister(DAT_000126b8);
  return;
}



/* ===== ieee80211_radiotap_iterator_init @ 000126bc size=96 ===== */

undefined4
ieee80211_radiotap_iterator_init(undefined4 *param_1,char *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if (((7 < param_3) && (*param_2 == '\0')) && ((int)(uint)*(ushort *)(param_2 + 2) <= (int)param_3)
     ) {
    *param_1 = param_2;
    uVar2 = (uint)*(ushort *)(param_2 + 2);
    param_1[10] = uVar2;
    param_1[0xb] = 0;
    iVar4 = *(int *)(param_2 + 4);
    param_1[1] = param_4;
    uVar1 = DAT_0001271c;
    param_1[0xc] = iVar4;
    param_1[3] = param_2 + 8;
    param_1[2] = uVar1;
    param_1[0xd] = 0;
    param_1[5] = param_2 + 8;
    param_1[9] = 1;
    if (-1 < iVar4) {
LAB_0001270a:
      param_1[6] = param_1[3];
      return 0;
    }
    if (0xb < uVar2) {
      do {
        piVar3 = (int *)param_1[3] + 1;
        iVar4 = *(int *)param_1[3];
        param_1[3] = piVar3;
        if (-1 < iVar4) goto LAB_0001270a;
      } while ((uint)((int)piVar3 + (4 - (int)param_2)) <= uVar2);
    }
  }
  return 0xffffffea;
}



/* ===== ieee80211_radiotap_iterator_next @ 00012720 size=378 ===== */

undefined4 ieee80211_radiotap_iterator_next(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  
LAB_0001272c:
  do {
    uVar6 = param_1[0xb];
    uVar11 = uVar6 & 0x1f;
    if (-1 < (int)-uVar6) {
      uVar11 = -(-uVar6 & 0x1f);
    }
    uVar8 = param_1[0xc] & 1;
    if (uVar11 == 0x1f) {
      if (uVar8 == 0) {
        return 0xfffffffe;
      }
LAB_0001274a:
      uVar8 = 0;
      uVar12 = 1;
LAB_0001274e:
      iVar16 = *param_1;
      uVar9 = param_1[3] - iVar16 & uVar12 - 1;
      if (uVar9 != 0) {
        param_1[3] = (uVar12 - uVar9) + param_1[3];
      }
      pbVar10 = (byte *)param_1[3];
      if (uVar11 == 0x1e) {
        if ((byte *)param_1[10] < pbVar10 + (uVar8 - iVar16)) {
          return 0xffffffea;
        }
        bVar1 = pbVar10[1];
        bVar2 = *pbVar10;
        piVar15 = (int *)param_1[1];
        bVar3 = pbVar10[2];
        bVar4 = pbVar10[3];
        param_1[2] = 0;
        if (piVar15 != (int *)0x0) {
          for (iVar14 = 0; iVar14 < piVar15[1]; iVar14 = iVar14 + 1) {
            iVar13 = *piVar15 + iVar14 * 0x10;
            if ((((uint)bVar1 << 8 | (uint)bVar2 << 0x10 | (uint)bVar3) == *(uint *)(iVar13 + 8)) &&
               (*(byte *)(iVar13 + 0xc) == bVar4)) {
              param_1[2] = iVar13;
              break;
            }
          }
        }
        uVar5 = *(ushort *)(pbVar10 + 4);
        param_1[4] = (int)(pbVar10 + uVar5 + uVar8);
        if (param_1[2] == 0) {
          uVar8 = uVar5 + uVar8;
        }
      }
      param_1[6] = (int)pbVar10;
      param_1[7] = uVar6;
      param_1[3] = (int)(pbVar10 + uVar8);
      param_1[8] = uVar8;
      piVar15 = DAT_0001289c;
      if ((byte *)param_1[10] < pbVar10 + uVar8 + -iVar16) {
        return 0xffffffea;
      }
      if (uVar11 == 0x1e) {
        param_1[0xd] = 1;
        param_1[9] = 0;
        param_1[7] = 0x1e;
        bVar7 = param_1[2] == 0;
      }
      else {
        if (uVar11 == 0x1f) {
          iVar16 = *(int *)param_1[5];
          param_1[5] = (int)((int *)param_1[5] + 1);
          param_1[0xc] = iVar16;
          if (param_1[0xd] == 0) {
            iVar16 = uVar6 + 1;
          }
          else {
            iVar16 = 0;
          }
          param_1[0xb] = iVar16;
          param_1[0xd] = 0;
          goto LAB_0001272c;
        }
        if (uVar11 == 0x1d) {
          param_1[0xd] = 1;
          param_1[9] = 1;
          param_1[2] = (int)piVar15;
          goto LAB_000127ba;
        }
        bVar7 = true;
      }
    }
    else {
      bVar7 = false;
      if (uVar8 != 0) {
        if (uVar11 == 0x1d) goto LAB_0001274a;
        if (uVar11 == 0x1e) {
          uVar8 = 6;
          uVar12 = 2;
          goto LAB_0001274e;
        }
        piVar15 = (int *)param_1[2];
        if (piVar15 != (int *)0x0) {
          if ((int)uVar6 < piVar15[1]) {
            bVar1 = *(byte *)(*piVar15 + uVar6);
            uVar8 = (uint)(bVar1 >> 4);
            uVar12 = bVar1 & 0xf;
            if ((bVar1 & 0xf) != 0) goto LAB_0001274e;
          }
          else if (piVar15 == DAT_0001289c) {
            return 0xfffffffe;
          }
        }
        param_1[2] = 0;
        param_1[3] = param_1[4];
LAB_000127ba:
        bVar7 = false;
      }
    }
    param_1[0xc] = (uint)param_1[0xc] >> 1;
    param_1[0xb] = uVar6 + 1;
    if (bVar7) {
      return 0;
    }
  } while( true );
}



/* ===== ether_addr_equal @ 000128a0 size=22 ===== */

bool ether_addr_equal(int *param_1,int *param_2)

{
  return (short)param_1[1] == (short)param_2[1] && *param_2 == *param_1;
}



/* ===== ieee80211_get_response_rate @ 000128b6 size=40 ===== */

int ieee80211_get_response_rate(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = iVar2;
  for (uVar1 = 0; (int)uVar1 < *(int *)(param_1 + 0x10); uVar1 = uVar1 + 1) {
    if (((int)((param_2 >> (uVar1 & 0xff)) << 0x1f) < 0) &&
       ((int)(uint)*(ushort *)(iVar3 + 4) <= param_3)) {
      iVar2 = iVar3;
    }
    iVar3 = iVar3 + 0xc;
  }
  return iVar2;
}



/* ===== ieee80211_mandatory_rates @ 000128de size=68 ===== */

uint ieee80211_mandatory_rates(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      if (param_2 - 1U < 2) {
        uVar2 = 8;
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 2;
    }
    uVar1 = 0;
    for (uVar3 = 0; (int)uVar3 < *(int *)(param_1 + 0x10); uVar3 = uVar3 + 1) {
      if ((uVar2 & *(uint *)(*(int *)(param_1 + 4) + uVar3 * 0xc)) != 0) {
        uVar1 = uVar1 | 1 << (uVar3 & 0xff);
      }
    }
  }
  return uVar1;
}



/* ===== ieee80211_freq_khz_to_channel @ 00012922 size=132 ===== */

uint ieee80211_freq_khz_to_channel
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)((ulonglong)param_1 * (ulonglong)DAT_000129a8 >> 0x26);
  if (uVar1 == 0x9b4) {
    return 0xe;
  }
  if (DAT_000129ac < param_1) {
    if (uVar1 - 0x132e < 0x47) {
      uVar1 = uVar1 - 4000;
    }
    else if (DAT_000129b4 < param_1) {
      if (uVar1 == 0x172f) {
        return 2;
      }
      if (DAT_000129b8 < param_1) {
        if (uVar1 - 0xe3d0 < 0x2e69) {
          uVar1 = __aeabi_idiv(uVar1 - 0xdb60,0x870,uVar1 - 0xe3d0,uVar1,param_4);
          return uVar1;
        }
        return 0;
      }
      uVar1 = uVar1 - 0x173e;
    }
    else {
      uVar1 = uVar1 - 5000;
    }
  }
  else {
    uVar1 = uVar1 - 0x967;
  }
  return (uint)((ulonglong)uVar1 * (ulonglong)DAT_000129b0 >> 0x22);
}



/* ===== ieee80211_get_channel_khz @ 000129bc size=68 ===== */

int ieee80211_get_channel_khz(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar5;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0xd4);
  do {
    puVar4 = puVar3 + 1;
    piVar5 = (int *)*puVar3;
    if (piVar5 != (int *)0x0) {
      for (iVar2 = 0; iVar2 < piVar5[3]; iVar2 = iVar2 + 1) {
        iVar1 = iVar2 * 0x38 + *piVar5;
        if (param_2 == *(int *)(iVar1 + 4) * 1000 + (uint)*(ushort *)(iVar1 + 8)) {
          return iVar1;
        }
      }
    }
    puVar3 = puVar4;
  } while ((undefined4 *)(param_1 + 0xe8) != puVar4);
  return 0;
}



/* ===== __ieee80211_get_mesh_hdrlen @ 00012a00 size=22 ===== */

undefined4 __ieee80211_get_mesh_hdrlen(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 3) == 1) {
    return 0xc;
  }
  if ((param_1 & 3) == 2) {
    uVar1 = 0x12;
  }
  else {
    uVar1 = 6;
  }
  return uVar1;
}



/* ===== ieee80211_get_mesh_hdrlen @ 00012a16 size=4 ===== */

void ieee80211_get_mesh_hdrlen(undefined1 *param_1)

{
  __ieee80211_get_mesh_hdrlen(*param_1);
  return;
}



/* ===== skip_ie @ 00012a1a size=36 ===== */

uint skip_ie(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + param_3 + 1);
  uVar1 = param_3 + 2 + uVar2;
  if (uVar2 == 0xff) {
    for (; (uVar1 < param_2 && (*(char *)(param_1 + uVar1) == -0xe));
        uVar1 = uVar1 + *(byte *)(param_1 + uVar1 + 1) + 2) {
    }
  }
  return uVar1;
}



/* ===== ieee80211_operating_class_to_band @ 00012a3e size=54 ===== */

undefined4 ieee80211_operating_class_to_band(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (0x82 < param_1) {
    if (param_1 < 0x88) {
      uVar1 = 3;
    }
    else {
      if (param_1 != 0xb4) {
        return 0;
      }
      uVar1 = 2;
    }
LAB_00012a6a:
    *param_2 = uVar1;
    return 1;
  }
  if (0x72 < param_1) {
LAB_00012a62:
    *param_2 = 1;
    return 1;
  }
  if (0x50 < param_1) {
    if (param_1 < 0x55) {
      uVar1 = 0;
      goto LAB_00012a6a;
    }
    if (param_1 == 0x70) goto LAB_00012a62;
  }
  return 0;
}



/* ===== ieee80211_chandef_to_operating_class @ 00012a74 size=264 ===== */

undefined4 ieee80211_chandef_to_operating_class(int *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  if (uVar2 - 0x96c < 0x3d) {
    if (2 < uVar3) {
      return 0;
    }
    if (uVar3 == 2) {
      if (*(uint *)(*param_1 + 4) < uVar2) {
        cVar1 = 'S';
      }
      else {
        cVar1 = 'T';
      }
    }
    else {
      cVar1 = 'Q';
    }
  }
  else {
    if (uVar2 == 0x9b4) {
      if (uVar3 != 0) {
        return 0;
      }
      cVar1 = 'R';
      goto LAB_00012a94;
    }
    switch(uVar3) {
    case 3:
      cVar1 = -0x80;
      break;
    case 4:
      cVar1 = -0x7e;
      break;
    case 5:
      cVar1 = -0x7f;
      break;
    case 6:
    case 7:
      goto LAB_00012ace;
    default:
      cVar1 = '\0';
    }
    if (uVar2 - 0x143c < 0x3d) {
      if (cVar1 != '\0') {
LAB_00012aca:
        *param_2 = cVar1;
        return 1;
      }
      if (uVar3 == 2) {
        if (*(uint *)(*param_1 + 4) < uVar2) {
          cVar1 = 't';
        }
        else {
          cVar1 = 'u';
        }
      }
      else {
        cVar1 = 's';
      }
    }
    else if (uVar2 - 0x148c < 0x3d) {
      if (cVar1 != '\0') goto LAB_00012aca;
      if (uVar3 == 2) {
        if (*(uint *)(*param_1 + 4) < uVar2) {
          cVar1 = 'w';
        }
        else {
          cVar1 = 'x';
        }
      }
      else {
        cVar1 = 'v';
      }
    }
    else if (uVar2 - 0x157c < 0xdd) {
      if (cVar1 != '\0') goto LAB_00012aca;
      if (uVar3 == 2) {
        if (*(uint *)(*param_1 + 4) < uVar2) {
          cVar1 = 'z';
        }
        else {
          cVar1 = '{';
        }
      }
      else {
        cVar1 = 'y';
      }
    }
    else if (uVar2 - 0x1671 < 0x65) {
      if (cVar1 != '\0') goto LAB_00012aca;
      if (uVar3 == 2) {
        if (*(uint *)(*param_1 + 4) < uVar2) {
          cVar1 = '~';
        }
        else {
          cVar1 = '\x7f';
        }
      }
      else if (uVar2 < 0x16ae) {
        cVar1 = '|';
      }
      else {
        cVar1 = '}';
      }
    }
    else {
      if ((0x2a30 < uVar2 - 0xe3d0) || (1 < uVar3)) {
LAB_00012ace:
        return 0;
      }
      cVar1 = -0x4c;
    }
  }
LAB_00012a94:
  *param_2 = cVar1;
  return 1;
}



/* ===== cfg80211_iter_sum_ifcombs @ 00012b82 size=8 ===== */

void cfg80211_iter_sum_ifcombs(undefined4 param_1,int *param_2)

{
  *param_2 = *param_2 + 1;
  return;
}



/* ===== ieee80211_get_num_supported_channels @ 00012b8a size=26 ===== */

int ieee80211_get_num_supported_channels(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0xd4);
  do {
    piVar3 = piVar2 + 1;
    if (*piVar2 != 0) {
      iVar1 = iVar1 + *(int *)(*piVar2 + 0xc);
    }
    piVar2 = piVar3;
  } while (piVar3 != (int *)(param_1 + 0xe8));
  return iVar1;
}



/* ===== ieee80211_get_vht_max_nss @ 00012ba4 size=194 ===== */

uint ieee80211_get_vht_max_nss
               (uint *param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if ((((ushort)param_1[1] == 0xffff) || (9 < param_3)) || (8 < param_5)) {
    return 0;
  }
  if (param_3 < 8) {
    uVar3 = 0;
  }
  else if (param_3 == 8) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  if (param_5 == 0) {
    uVar2 = 7;
    do {
      uVar1 = (int)(uint)(ushort)param_1[1] >> ((uVar2 & 0x7f) << 1) & 3;
      if ((uVar1 != 3) && (uVar3 <= uVar1)) {
        param_5 = uVar2 + 1;
        break;
      }
      bVar4 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar4);
  }
  if (-1 < (int)((uint)(ushort)param_1[2] << 0x12)) {
    return param_5;
  }
  uVar3 = (*param_1 & 0xf) >> 2;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_1 >> 0x1e;
  }
  if (uVar3 == 3) {
    return 0;
  }
  if ((uVar3 == 2) && (uVar2 - 1 < 2)) {
    return 0;
  }
  switch(param_2) {
  case 0:
  case 1:
    if (1 < uVar3 - 1) {
      return param_5;
    }
    break;
  case 2:
    if (uVar3 == 0) {
      if (1 < uVar2 - 1) {
LAB_00012c46:
        bVar4 = uVar2 == 3;
LAB_00012c48:
        if (bVar4) {
          return param_5 * 3 >> 2;
        }
        return param_5;
      }
      goto LAB_00012c32;
    }
    if (uVar3 != 1) {
      return param_5;
    }
    break;
  case 3:
    if (uVar3 == 0) {
      if (uVar2 == 1) {
        return 0;
      }
      if (uVar2 != 2) goto LAB_00012c46;
    }
    else {
      if (uVar3 != 1) {
        return param_5;
      }
      if (uVar2 == 0) {
        return 0;
      }
      if (uVar2 != 1) {
        bVar4 = uVar2 == 2;
        goto LAB_00012c48;
      }
    }
LAB_00012c32:
    param_5 = param_5 >> 1;
  default:
    goto switchD_00012c10_default;
  }
  if (uVar2 == 3) {
    param_5 = param_5 << 1;
  }
switchD_00012c10_default:
  return param_5;
}



/* ===== ieee80211_bss_get_elem @ 00012c6a size=30 ===== */

void ieee80211_bss_get_elem(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    cfg80211_find_elem_match(param_2,iVar1 + 0x15,*(undefined4 *)(iVar1 + 0x10),0,0,0);
  }
  return;
}



/* ===== cfg80211_calculate_bitrate_he @ 00012c88 size=348 ===== */

uint cfg80211_calculate_bitrate_he(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int extraout_r2;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_a4 [6];
  uint local_8c [3];
  uint local_80 [3];
  uint local_74 [3];
  uint local_68 [3];
  uint local_5c [3];
  uint local_50 [14];
  
  local_50[0] = *DAT_00012de4;
  local_50[1] = DAT_00012de4[1];
  local_50[2] = DAT_00012de4[2];
  local_50[3] = DAT_00012de4[3];
  local_50[4] = DAT_00012de4[4];
  local_50[5] = DAT_00012de4[5];
  local_50[6] = DAT_00012de4[6];
  local_50[7] = DAT_00012de4[7];
  local_50[8] = DAT_00012de4[8];
  local_50[9] = DAT_00012de4[9];
  local_50[10] = DAT_00012de4[10];
  local_50[0xb] = DAT_00012de4[0xb];
  local_50[0xc] = DAT_00012de4[0xc];
  local_50[0xd] = DAT_00012de4[0xd];
  local_a4[0] = DAT_00012de4[0xe];
  local_a4[1] = DAT_00012de4[0xf];
  local_a4[2] = DAT_00012de4[0x10];
  local_a4[3] = DAT_00012de4[0x11];
  local_a4[4] = DAT_00012de4[0x12];
  local_a4[5] = DAT_00012de4[0x13];
  local_8c[0] = DAT_00012de4[0x14];
  local_8c[1] = DAT_00012de4[0x15];
  local_8c[2] = DAT_00012de4[0x16];
  local_80[0] = DAT_00012de4[0x17];
  local_80[1] = DAT_00012de4[0x18];
  local_80[2] = DAT_00012de4[0x19];
  local_74[0] = DAT_00012de4[0x1a];
  local_74[1] = DAT_00012de4[0x1b];
  local_74[2] = DAT_00012de4[0x1c];
  local_68[0] = DAT_00012de4[0x1d];
  local_68[1] = DAT_00012de4[0x1e];
  local_68[2] = DAT_00012de4[0x1f];
  local_5c[0] = DAT_00012de4[0x20];
  local_5c[1] = DAT_00012de4[0x21];
  local_5c[2] = DAT_00012de4[0x22];
  if ((((0xd < *(byte *)(param_1 + 1)) || (uVar4 = (uint)*(byte *)(param_1 + 6), 2 < uVar4)) ||
      (bVar1 = *(byte *)(param_1 + 8), 6 < bVar1)) ||
     (bVar2 = *(byte *)(param_1 + 4), 7 < bVar2 - 1)) {
    return 0;
  }
  cVar3 = *(char *)(param_1 + 5);
  if (cVar3 == '\x05') {
    uVar4 = local_a4[uVar4];
    goto LAB_00012d26;
  }
  if (cVar3 == '\x04') {
LAB_00012d6c:
    uVar4 = local_a4[uVar4 + 3];
  }
  else {
    if (cVar3 == '\x06') {
      if (bVar1 == 5) goto LAB_00012d6c;
      if (bVar1 == 4) goto LAB_00012d7c;
      if (bVar1 != 3) {
        if (bVar1 == 2) {
          uVar4 = local_a4[uVar4 + 0xc];
        }
        else if (bVar1 == 1) {
          uVar4 = local_a4[uVar4 + 0xf];
        }
        else {
          if (bVar1 != 0) {
            return 0;
          }
          uVar4 = local_a4[uVar4 + 0x12];
        }
        goto LAB_00012d26;
      }
    }
    else {
      if (cVar3 == '\x03') {
LAB_00012d7c:
        uVar4 = local_a4[uVar4 + 6];
        goto LAB_00012d26;
      }
      if (cVar3 != '\0') {
        return 0;
      }
    }
    uVar4 = local_a4[uVar4 + 9];
  }
LAB_00012d26:
  uVar5 = (undefined4)((ulonglong)uVar4 * 0x1800);
  iVar6 = (int)((ulonglong)uVar4 * 0x1800 >> 0x20);
  if (iVar6 == 0) {
    iVar6 = __aeabi_uidiv(uVar5,local_a4[*(byte *)(param_1 + 1) + 0x15]);
  }
  else {
    __do_div64(uVar5,iVar6);
    iVar6 = extraout_r2;
  }
  uVar4 = iVar6 * (uint)bVar2;
  if (*(char *)(param_1 + 7) == '\0') {
    uVar4 = uVar4 >> 3;
  }
  else {
    uVar4 = uVar4 >> 4;
  }
  return (uint)((ulonglong)uVar4 * (ulonglong)DAT_00012de8 >> 0x2d);
}



/* ===== cfg80211_calculate_bitrate @ 00012dec size=238 ===== */

uint cfg80211_calculate_bitrate(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = *param_1;
  uVar4 = (uint)bVar1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 8) == 0) {
      if ((bVar1 & 0x20) == 0) {
        if (-1 < (int)(uVar4 << 0x1e)) {
          if (-1 < (int)(uVar4 << 0x1b)) {
            return (uint)*(ushort *)(param_1 + 2);
          }
          uVar4 = cfg80211_calculate_bitrate_he();
          return uVar4;
        }
        if (param_1[1] < 10) {
          switch(param_1[5]) {
          case 0:
            iVar3 = 0;
            break;
          default:
            goto switchD_00012e92_caseD_1;
          case 3:
            iVar3 = 1;
            break;
          case 4:
            iVar3 = 2;
            break;
          case 5:
            iVar3 = 3;
          }
          uVar5 = *(int *)(DAT_00012ef0 + (iVar3 * 10 + (uint)param_1[1]) * 4 + 0x160) *
                  (uint)param_1[4];
          if ((int)(uVar4 << 0x1d) < 0) {
            uVar5 = (uint)((ulonglong)uVar5 * (ulonglong)DAT_00012ee8 >> 0x21) * 10;
          }
          goto LAB_00012e2c;
        }
      }
      else if (param_1[1] < 0x15) {
        return (uint)param_1[9] * *(int *)(DAT_00012ef0 + (uint)param_1[1] * 4 + 0x10c);
      }
    }
    else if (param_1[1] < 0x20) {
      return *(uint *)(DAT_00012ef0 + (uint)param_1[1] * 4 + 0x8c);
    }
switchD_00012e92_caseD_1:
    uVar4 = 0;
  }
  else {
    uVar5 = (uint)param_1[1];
    if (0x1f < uVar5) goto switchD_00012e92_caseD_1;
    uVar2 = uVar5 & 7;
    iVar3 = DAT_00012ee4;
    if (param_1[5] == 3) {
      iVar3 = DAT_00012ee0;
    }
    if ((int)(uVar5 << 0x1d) < 0) {
      if (uVar2 == 4) {
        iVar3 = iVar3 * 6;
      }
      else {
        iVar3 = (uVar2 + 3) * iVar3;
      }
    }
    else {
      iVar3 = uVar2 * iVar3 + iVar3;
    }
    uVar5 = ((param_1[1] >> 3) + 1) * iVar3;
    if ((int)(uVar4 << 0x1d) < 0) {
      uVar5 = (uint)((ulonglong)uVar5 * (ulonglong)DAT_00012ee8 >> 0x21) * 10;
    }
LAB_00012e2c:
    uVar4 = (uint)((ulonglong)(uVar5 + 50000 >> 5) * (ulonglong)DAT_00012eec >> 0x27);
  }
  return uVar4;
}



/* ===== cfg80211_get_p2p_attr @ 00012ef4 size=306 ===== */

uint cfg80211_get_p2p_attr(char *param_1,uint param_2,uint param_3,void *param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar3 = 0;
  uVar5 = 0;
  bVar7 = false;
  for (; param_2 != 0; param_2 = param_2 + (-2 - (uint)*pbVar1)) {
    if ((param_2 < 2) || (uVar4 = (uint)(byte)param_1[1], param_2 < uVar4 + 2)) goto LAB_00012f1e;
    if ((*param_1 == -0x23) &&
       ((((3 < uVar4 && (param_1[2] == 'P')) && (param_1[3] == 'o')) &&
        ((param_1[4] == -0x66 && (param_1[5] == '\t')))))) {
      uVar4 = uVar4 - 4;
      uVar6 = uVar4;
      if (uVar5 <= uVar4) {
        uVar6 = uVar5;
      }
      if ((uVar6 != 0) && (bVar7)) {
        uVar3 = uVar3 + (uVar6 & 0xffff) & 0xffff;
        if (param_4 != (void *)0x0) {
          uVar2 = param_5;
          if (uVar6 <= param_5) {
            uVar2 = uVar6;
          }
          param_4 = memcpy(param_4,param_1 + 6,uVar2);
          param_4 = (void *)((int)param_4 + uVar2);
          param_5 = param_5 - uVar2;
        }
        if (uVar5 <= uVar4) {
          return uVar3;
        }
      }
      uVar5 = uVar5 - (uVar6 & 0xffff) & 0xffff;
      if (uVar5 == 0) {
        pbVar1 = (byte *)(param_1 + uVar6 + 6);
        for (uVar4 = uVar4 - uVar6; uVar4 != 0; uVar4 = uVar4 - uVar6) {
          if (uVar4 < 3) goto LAB_00012f1e;
          uVar4 = uVar4 - 3;
          uVar5 = (uint)*(ushort *)(pbVar1 + 1);
          bVar7 = *pbVar1 == param_3;
          uVar6 = uVar4;
          if (uVar5 <= uVar4) {
            uVar6 = uVar5;
          }
          if (*pbVar1 == param_3) {
            uVar3 = uVar3 + (uVar6 & 0xffff) & 0xffff;
            if (param_4 != (void *)0x0) {
              uVar2 = param_5;
              if (uVar6 <= param_5) {
                uVar2 = uVar6;
              }
              param_4 = memcpy(param_4,pbVar1 + 3,uVar2);
              param_4 = (void *)((int)param_4 + uVar2);
              param_5 = param_5 - uVar2;
            }
            if (uVar5 <= uVar4) {
              return uVar3;
            }
          }
          pbVar1 = pbVar1 + 3 + uVar6;
          uVar5 = uVar5 - (uVar6 & 0xffff) & 0xffff;
        }
      }
    }
    pbVar1 = (byte *)(param_1 + 1);
    param_1 = param_1 + *pbVar1 + 2;
  }
  if ((uVar5 == 0) || (!bVar7)) {
    uVar3 = 0xfffffffe;
  }
  else {
LAB_00012f1e:
    uVar3 = 0xffffffac;
  }
  return uVar3;
}



/* ===== ieee80211_channel_to_freq_khz @ 00013026 size=124 ===== */

int ieee80211_channel_to_freq_khz(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  switch(param_2) {
  case 0:
    if (param_1 == 0xe) {
      return DAT_000130b8;
    }
    iVar1 = DAT_000130a8;
    if (0xd < param_1) {
      return param_2;
    }
    break;
  case 1:
    if (0xe < param_1 - 0xb6U) {
      return DAT_000130ac + param_1 * 5000;
    }
    return param_1 * 5000 + 4000000;
  case 2:
    if (6 < param_1) {
      return 0;
    }
    return param_1 * DAT_000130b4 + 0x358ef00;
  case 3:
    if (param_1 == 2) {
      return DAT_000130bc;
    }
    iVar1 = DAT_000130b0;
    if (0xe9 < param_1) {
      return 0;
    }
    break;
  case 4:
    return param_1 * 500 + 0xdc370;
  default:
    return 0;
  }
  return param_1 * 5000 + iVar1;
}



/* ===== ieee80211_hdrlen @ 000130c0 size=86 ===== */

int ieee80211_hdrlen(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 & 0xc;
  if (uVar1 == 0xc) {
    iVar2 = 4;
  }
  else if (uVar1 == 8) {
    if ((param_1 & 0x300) == 0x300) {
      iVar2 = 0x1e;
    }
    else {
      iVar2 = 0x18;
    }
    if ((param_1 & 0x8c) == 0x88) {
      if ((int)(param_1 << 0x10) < 0) {
        iVar2 = iVar2 + 6;
      }
      else {
        iVar2 = iVar2 + 2;
      }
    }
  }
  else if (uVar1 == 0) {
    if ((param_1 & 0x8000) == 0) {
      iVar2 = 0x18;
    }
    else {
      iVar2 = 0x1c;
    }
  }
  else if (uVar1 == 4) {
    if ((param_1 & 0xe0) == 0xc0) {
      iVar2 = 10;
    }
    else {
      iVar2 = 0x10;
    }
  }
  else {
    iVar2 = 0x18;
  }
  return iVar2;
}



/* ===== ieee80211_get_hdrlen_from_skb @ 00013116 size=30 ===== */

uint ieee80211_get_hdrlen_from_skb(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(uint *)(param_1 + 0x50) < 10) {
    uVar1 = 0;
  }
  else {
    uVar2 = ieee80211_hdrlen(**(undefined2 **)(param_1 + 0xa4));
    uVar1 = (uint)uVar2;
    if ((uint)((ulonglong)uVar2 >> 0x20) < uVar1) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== ieee80211_data_to_8023_exthdr @ 00013134 size=524 ===== */

undefined4
ieee80211_data_to_8023_exthdr
          (int param_1,ushort *param_2,undefined4 param_3,int param_4,byte param_5,char param_6)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  byte bVar10;
  bool bVar11;
  undefined8 uVar12;
  byte local_3f;
  undefined1 auStack_3e [6];
  ushort local_38;
  int local_36;
  ushort local_32;
  int local_30;
  ushort local_2c;
  ushort local_2a [3];
  
  puVar8 = *(ushort **)(param_1 + 0xa4);
  local_3f = 0;
  if ((*puVar8 & 0x4c) != 8) {
    return 0xffffffff;
  }
  uVar12 = ieee80211_hdrlen(*puVar8);
  uVar6 = (uint)param_5 + (int)uVar12 & 0xffff;
  if (*(uint *)(param_1 + 0x50) < uVar6 + 8) {
    return 0xffffffff;
  }
  if ((int)((ulonglong)uVar12 >> 0x20) << 0x17 < 0) {
    puVar4 = puVar8 + 8;
    local_36 = *(int *)puVar4;
  }
  else {
    puVar4 = puVar8 + 2;
    local_36 = *(int *)puVar4;
  }
  local_32 = puVar4[2];
  if ((*puVar8 & 0x300) == 0x300) {
    puVar4 = puVar8 + 0xc;
    local_30 = *(int *)puVar4;
  }
  else if ((*puVar8 & 0x200) == 0) {
    puVar4 = puVar8 + 5;
    local_30 = *(int *)puVar4;
  }
  else {
    puVar4 = puVar8 + 8;
    local_30 = *(int *)puVar4;
  }
  local_2c = puVar4[2];
  if (param_4 == 7) {
    skb_copy_bits(param_1,uVar6,&local_3f);
  }
  bVar10 = local_3f & 3;
  uVar3 = *puVar8 & 0x300;
  local_3f = bVar10;
  if (uVar3 == 0x100) {
    if (param_4 - 3U < 2) goto LAB_000131e0;
    bVar11 = param_4 == 9;
  }
  else {
    if (0x100 < uVar3) {
      if (uVar3 == 0x200) {
        if ((param_4 != 2) && (1 < param_4 - 7U)) {
          return 0xffffffff;
        }
        if ((local_36 << 0x1f < 0) && (iVar1 = ether_addr_equal(&local_30,param_3), iVar1 != 0)) {
          return 0xffffffff;
        }
        if (param_4 != 7) goto LAB_000131e0;
        if (bVar10 == 2) {
          return 0xffffffff;
        }
        if (bVar10 == 1) {
          uVar5 = 6;
          piVar2 = &local_30;
LAB_000132c6:
          skb_copy_bits(param_1,uVar6 + 6,piVar2,uVar5);
        }
      }
      else {
        if ((uVar3 != 0x300) || (param_4 == 5)) goto LAB_000131e0;
        if (param_4 != 7) {
          if (param_4 == 4) goto LAB_000131e0;
          bVar11 = param_4 == 2;
          goto LAB_000132ac;
        }
        if (bVar10 == 1) {
          return 0xffffffff;
        }
        if (bVar10 == 2) {
          piVar2 = &local_36;
          uVar5 = 0xc;
          goto LAB_000132c6;
        }
      }
      iVar1 = __ieee80211_get_mesh_hdrlen(local_3f);
      uVar6 = uVar6 + iVar1 & 0xffff;
      goto LAB_000131e0;
    }
    if (((*puVar8 & 0x300) != 0) || (param_4 - 1U < 2)) goto LAB_000131e0;
    bVar11 = param_4 == 0xb;
  }
LAB_000132ac:
  if (!bVar11) {
    return 0xffffffff;
  }
LAB_000131e0:
  skb_copy_bits(param_1,uVar6,auStack_3e,8);
  uVar7 = *(uint *)(param_1 + 0x50);
  local_2a[0] = local_38;
  if (((((param_6 == '\0') && (iVar1 = ether_addr_equal(auStack_3e,DAT_00013340), iVar1 != 0)) &&
       (local_38 != 0xf380)) && (local_38 != 0x3781)) ||
     (iVar1 = ether_addr_equal(auStack_3e,DAT_00013344), iVar1 != 0)) {
    uVar6 = uVar6 + 8 & 0xffff;
  }
  else {
    local_2a[0] = (ushort)((uVar7 - uVar6 & 0xff) << 8) | (ushort)(uVar7 - uVar6 >> 8) & 0xff;
  }
  if ((uVar6 <= uVar7) &&
     ((uVar6 <= uVar7 - *(int *)(param_1 + 0x54) ||
      (iVar1 = __pskb_pull_tail(param_1,(*(int *)(param_1 + 0x54) - uVar7) + uVar6), iVar1 != 0))))
  {
    *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - uVar6;
    *(uint *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + uVar6;
  }
  if (param_2 == (ushort *)0x0) {
    param_2 = (ushort *)skb_push(param_1,0xe);
  }
  puVar8 = (ushort *)&local_36;
  do {
    puVar4 = puVar8 + 2;
    puVar9 = param_2 + 2;
    *(int *)param_2 = *(int *)puVar8;
    puVar8 = puVar4;
    param_2 = puVar9;
  } while (puVar4 != local_2a);
  *puVar9 = *puVar4;
  return 0;
}



/* ===== cfg80211_iftype_allowed.part.2 @ 00013348 size=36 ===== */

uint cfg80211_iftype_allowed_part_2(int param_1,uint param_2)

{
  if ((-1 < (int)((uint)(*(ushort *)(param_1 + 0x1c) >> (param_2 & 0xff)) << 0x1f)) &&
     (param_2 == 4)) {
    return (*(uint *)(param_1 + 0x24) & 0x3f) >> 5;
  }
  return (uint)((1 << (param_2 & 0xff) & (uint)*(ushort *)(param_1 + 0x1c)) != 0);
}



/* ===== cfg80211_iftype_allowed @ 0001336c size=52 ===== */

uint cfg80211_iftype_allowed(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    if ((param_2 == 4) && (param_3 != 0)) {
      uVar1 = (*(uint *)(param_1 + 0x24) & 0x3f) >> 5;
    }
    else {
      uVar1 = (uint)(((uint)*(ushort *)(param_1 + 0x20) & 1 << (param_2 & 0xff)) != 0);
    }
  }
  else {
    if (param_4 == 1) {
      uVar1 = cfg80211_iftype_allowed_part_2();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== cfg80211_iter_combinations @ 000133a0 size=414 ===== */

undefined4 cfg80211_iter_combinations(int param_1,uint *param_2,code *param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_50;
  int local_4c;
  
  bVar2 = false;
  uVar10 = param_2[0xf];
  uVar3 = 0;
  for (piVar9 = *(int **)(param_1 + 0x298); piVar9 != (int *)(param_1 + 0x298);
      piVar9 = (int *)*piVar9) {
    uVar12 = piVar9[0x32];
    uVar11 = uVar3;
    if (((uVar12 != 0) && (uVar11 = uVar12, uVar3 != 0)) && (uVar11 = uVar3, uVar12 != uVar3)) {
      bVar2 = true;
      uVar11 = gcd(uVar3);
    }
    uVar3 = uVar11;
  }
  if ((uVar10 != 0) && (uVar10 != uVar3)) {
    if (uVar3 != 0) {
      bVar2 = true;
    }
    uVar3 = gcd(uVar3,uVar10);
  }
  uVar10 = 0;
  if ((char)param_2[1] != '\0') {
    uVar10 = 0;
    if (*DAT_00013540 != 0) {
      uVar10 = *(uint *)(*DAT_00013540 + 0x10);
    }
  }
  uVar11 = 0;
  uVar12 = 0;
  local_4c = 0;
  puVar8 = param_2 + 2;
  do {
    local_4c = local_4c + *puVar8;
    if ((0 < (int)*puVar8) && (iVar4 = cfg80211_iftype_allowed_part_2(param_1,uVar12), iVar4 == 0))
    {
      uVar11 = uVar11 | 1 << (uVar12 & 0xff);
    }
    uVar12 = uVar12 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar12 != 0xd);
  local_50 = 0;
  do {
    if (*(int *)(param_1 + 0x18) <= local_50) {
      return 0;
    }
    iVar4 = *(int *)(param_1 + 0x14) + local_50 * 0x14;
    if ((local_4c <= (int)(uint)*(ushort *)(iVar4 + 8)) && (*param_2 <= *(uint *)(iVar4 + 4))) {
      iVar5 = kmemdup(*(undefined4 *)(*(int *)(param_1 + 0x14) + local_50 * 0x14),
                      (uint)*(byte *)(iVar4 + 10) << 2,0xcc0);
      if (iVar5 == 0) {
        return 0xfffffff4;
      }
      uVar12 = 0;
      uVar13 = 0;
      puVar8 = param_2 + 2;
      do {
        iVar6 = cfg80211_iftype_allowed_part_2(param_1,uVar13);
        if (iVar6 == 0) {
          for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(iVar4 + 10); iVar6 = iVar6 + 1) {
            uVar7 = (uint)*(ushort *)(iVar5 + 2 + iVar6 * 4);
            uVar12 = uVar12 | uVar7;
            if ((uVar7 & 1 << (uVar13 & 0xff)) != 0) {
              uVar1 = *(ushort *)(iVar5 + iVar6 * 4);
              if ((int)(uint)uVar1 < (int)*puVar8) goto LAB_000134f2;
              *(ushort *)(iVar5 + iVar6 * 4) = uVar1 - (short)*puVar8;
            }
          }
        }
        uVar13 = uVar13 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar13 != 0xd);
      if ((((byte)((byte)param_2[1] & ~*(byte *)(iVar4 + 0xc)) != 0) ||
          ((((byte)param_2[1] != 0 && (*(byte *)(iVar4 + 0xd) != 0)) &&
           (((uint)*(byte *)(iVar4 + 0xd) & 1 << (uVar10 & 0xff)) == 0)))) ||
         ((uVar11 & ~uVar12) != 0)) goto LAB_000134f2;
      if (uVar3 == 0) {
LAB_0001352e:
        (*param_3)(iVar4,param_4);
      }
      else if (*(uint *)(iVar4 + 0x10) == 0) {
        if (!bVar2) goto LAB_0001352e;
      }
      else if (*(uint *)(iVar4 + 0x10) <= uVar3) goto LAB_0001352e;
LAB_000134f2:
      kfree(iVar5);
    }
    local_50 = local_50 + 1;
  } while( true );
}



/* ===== cfg80211_check_combinations @ 00013544 size=32 ===== */

int cfg80211_check_combinations(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  iVar1 = cfg80211_iter_combinations(param_1,param_2,DAT_00013564,&local_c,param_1);
  if ((iVar1 == 0) && (local_c == 0)) {
    iVar1 = -0x10;
  }
  return iVar1;
}



/* ===== ieee80211_id_in_list.part.3 @ 00013568 size=48 ===== */

int ieee80211_id_in_list_part_3(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    while( true ) {
      if (param_2 <= iVar1) {
        return 0;
      }
      if (*(byte *)(param_1 + iVar1) != 0xff) break;
      if ((param_4 != 0) && (*(byte *)(param_1 + iVar1 + 1) == param_3)) {
        return param_4;
      }
      iVar1 = iVar1 + 2;
    }
    if ((*(byte *)(param_1 + iVar1) == param_3) && (param_4 == 0)) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}



/* ===== ieee80211_s1g_channel_width @ 00013598 size=74 ===== */

undefined4
ieee80211_s1g_channel_width(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 4) {
      iVar2 = param_1[3];
      if (-1 < iVar2 << 0x11) {
        if (iVar2 << 0x10 < 0) {
          return 9;
        }
        if (iVar2 << 0xf < 0) {
          return 10;
        }
        if (iVar2 << 0xe < 0) {
          return 0xb;
        }
        if (iVar2 << 0xd < 0) {
          return 0xc;
        }
        printk(DAT_000135e4,param_1[1] * 1000 + (uint)*(ushort *)(param_1 + 2),param_1[1],
               (uint)*(ushort *)(param_1 + 2),param_4);
      }
      uVar1 = 8;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== wiphy_to_rdev.part.5 @ 000135e8 size=1 ===== */

void wiphy_to_rdev_part_5(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(2,0x135e8);
  (*pcVar1)();
}



/* ===== cfg80211_free_nan_func @ 000135ea size=96 ===== */

void cfg80211_free_nan_func(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int iVar1;
  
  if (param_1 != 0) {
    kfree(*(undefined4 *)(param_1 + 0x1c));
    kfree(*(undefined4 *)(param_1 + 0x24));
    kfree(*(undefined4 *)(param_1 + 0x2c));
    for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_1 + 0x3d); iVar1 = iVar1 + 1) {
      kfree(*(undefined4 *)(*(int *)(param_1 + 0x34) + iVar1 * 8));
    }
    for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_1 + 0x3c); iVar1 = iVar1 + 1) {
      kfree(*(undefined4 *)(*(int *)(param_1 + 0x38) + iVar1 * 8));
    }
    kfree(*(undefined4 *)(param_1 + 0x34));
    kfree(*(undefined4 *)(param_1 + 0x38));
    kfree(param_1,extraout_r1,extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== cfg80211_classify8021d @ 0001364a size=240 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 cfg80211_classify8021d(int param_1,byte *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *local_14;
  
  if (*(int *)(param_1 + 0x68) - 0x100U < 8) {
    halt_baddata();
  }
  if (((int)((uint)*(byte *)(param_1 + 0x62) << 0x1f) < 0) &&
     (*(ushort *)(param_1 + 0x76) >> 0xd != 0)) {
    halt_baddata();
  }
  uVar1 = *(ushort *)(param_1 + 0x88);
  if (uVar1 == 0x4788) {
LAB_000136ec:
    if ((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x54)) + -0xe < 4) {
      if ((param_1 != 0) &&
         (local_14 = param_2, iVar4 = skb_copy_bits(param_1,0xe,&local_14,4,param_1), -1 < iVar4)) {
        halt_baddata();
      }
    }
    else if (*(int *)(param_1 + 0xa4) != -0xe) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 0;
  }
  if (uVar1 < 0x4789) {
    if (uVar1 != 8) {
      if (uVar1 == 0x1789) {
        return 7;
      }
      return 0;
    }
    uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0xa0) + (uint)*(ushort *)(param_1 + 0x8c) + 1);
  }
  else {
    if (uVar1 == 0x4888) goto LAB_000136ec;
    if (uVar1 != 0xdd86) {
      return 0;
    }
    uVar1 = *(ushort *)(*(int *)(param_1 + 0xa0) + (uint)*(ushort *)(param_1 + 0x8c));
    uVar2 = ((uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8)) >> 4;
  }
  if (param_2 == (byte *)0x0) {
    halt_baddata();
  }
  uVar2 = (uVar2 & 0xfc) >> 2;
  for (uVar3 = 0; uVar3 < *param_2; uVar3 = uVar3 + 1) {
    if (param_2[uVar3 * 2 + 1] == uVar2) {
      halt_baddata();
    }
  }
  iVar4 = 0;
  while ((uVar2 < param_2[0x2b] || (param_2[0x2c] < uVar2))) {
    iVar4 = iVar4 + 1;
    param_2 = param_2 + 2;
    if (iVar4 == 8) {
      halt_baddata();
    }
  }
  halt_baddata();
}



/* ===== __frame_add_frag @ 00013742 size=86 ===== */

void __frame_add_frag(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x9c);
  iVar2 = param_2;
  if (*(int *)(param_2 + 4) << 0x1f < 0) {
    iVar2 = *(int *)(param_2 + 4) + -1;
  }
  piVar3 = (int *)(iVar2 + 0x1c);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 1;
  skb_add_rx_frag(param_1,*(undefined1 *)(iVar4 + 2),param_2,
                  param_3 - ((*DAT_0001379c + (param_2 - *DAT_00013798 >> 5)) * 0x1000 + 0x7f000000)
                  ,param_4,param_5,param_3);
  return;
}



/* ===== cfg80211_get_station @ 000137a0 size=72 ===== */

undefined4 cfg80211_get_station(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *extraout_r3;
  int iVar3;
  
  if (*(int **)(param_1 + 0x1c4) != (int *)0x0) {
    iVar3 = **(int **)(param_1 + 0x1c4);
    if (iVar3 == 0) {
      wiphy_to_rdev_part_5();
      param_3 = extraout_r3;
    }
    if (*(int *)(*(int *)(iVar3 + -0x1a0) + 0x48) != 0) {
      pvVar1 = memset(param_3,0,0xd0);
                    /* WARNING: Could not recover jumptable at 0x000137de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(int *)(iVar3 + -0x1a0) + 0x48))(iVar3,param_1,param_2,pvVar1);
      return uVar2;
    }
  }
  return 0xffffffa1;
}



/* ===== skb_frag_address @ 000137e8 size=28 ===== */

int skb_frag_address(int *param_1)

{
  return param_1[2] + (*DAT_00013808 + (*param_1 - *DAT_00013804 >> 5)) * 0x1000 + 0x7f000000;
}



/* ===== ieee80211_amsdu_to_8023s @ 0001380c size=666 ===== */

void ieee80211_amsdu_to_8023s
               (undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
               int param_6,int param_7)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  int local_36;
  undefined1 auStack_30 [6];
  ushort local_2a [3];
  ushort *puVar15;
  
  bVar11 = *(byte *)((int)param_1 + 0x5e) & 0x20;
  if ((*(byte *)((int)param_1 + 0x5e) & 0x20) != 0) {
    bVar11 = *(int *)(param_1[0x27] + 8) == 0;
  }
  bVar3 = false;
  iVar19 = 0;
  do {
    skb_copy_bits(param_1,iVar19,&local_36,0xe);
    iVar18 = param_1[0x14];
    uVar20 = (local_2a[0] & 0xff) << 8 | (uint)(local_2a[0] >> 8);
    uVar21 = uVar20 + 0xe;
    uVar12 = -uVar21 & 3;
    uVar13 = iVar18 - iVar19;
    if ((uVar13 < uVar21) || (iVar4 = ether_addr_equal(&local_36,DAT_00013aa8), iVar4 != 0))
    goto LAB_00013a7a;
    iVar19 = iVar19 + 0xe;
    if (((param_6 == 0) ||
        ((local_36 << 0x1f < 0 || (iVar4 = ether_addr_equal(param_6,&local_36), iVar4 != 0)))) &&
       ((param_7 == 0 || (iVar4 = ether_addr_equal(param_7,auStack_30), iVar4 != 0)))) {
      if ((param_1[0x15] == 0 && bVar11 == 0) && (uVar13 <= uVar12 + uVar21)) {
        skb_pull(param_1,iVar19);
        bVar3 = true;
        puVar7 = param_1;
      }
      else {
        if ((uint)(iVar18 - iVar19) < uVar20) goto LAB_00013a7a;
        uVar22 = uVar20;
        if ((bVar11 != 0) && (0x1f < uVar20)) {
          uVar22 = 0x20;
        }
        iVar18 = (param_5 + 3U & 0xfffffffc) + 0x10;
        puVar7 = (undefined4 *)__netdev_alloc_skb(0,iVar18 + uVar22,0xa20);
        if (puVar7 == (undefined4 *)0x0) goto LAB_00013a7a;
        puVar7[0x29] = puVar7[0x29] + iVar18;
        puVar7[0x26] = puVar7[0x26] + iVar18;
        uVar8 = skb_put(puVar7,uVar22);
        skb_copy_bits(param_1,iVar19,uVar8,uVar22);
        iVar18 = uVar20 - uVar22;
        if (iVar18 != 0) {
          iVar4 = param_1[0x14] - param_1[0x15];
          iVar24 = *DAT_00013ab0 + (param_1[0x28] + 0x50000000 >> 0xc) * 0x20;
          piVar9 = (int *)(param_1[0x27] + 0x28);
          uVar25 = CONCAT44(iVar19 + uVar22,param_1[0x29]);
          if (*(int *)(iVar24 + 4) << 0x1f < 0) {
            iVar24 = *(int *)(iVar24 + 4) + -1;
            uVar25 = CONCAT44(iVar19 + uVar22,param_1[0x29]);
          }
          while( true ) {
            iVar10 = (int)((ulonglong)uVar25 >> 0x20);
            if (iVar10 < iVar4) break;
            uVar25 = skb_frag_address(piVar9,iVar10 - iVar4);
            iVar24 = *piVar9;
            iVar4 = piVar9[1];
            piVar9 = piVar9 + 3;
          }
          iVar23 = iVar4 - iVar10;
          if (iVar18 <= iVar4 - iVar10) {
            iVar23 = iVar18;
          }
          __frame_add_frag(puVar7,iVar24,(int)uVar25 + iVar10,iVar23,iVar4);
          for (iVar18 = iVar18 - iVar23; 0 < iVar18; iVar18 = iVar18 - iVar4) {
            iVar4 = piVar9[1];
            if (iVar18 <= piVar9[1]) {
              iVar4 = iVar18;
            }
            uVar25 = skb_frag_address(piVar9);
            __frame_add_frag(puVar7,*piVar9,(int)uVar25,iVar4,(int)((ulonglong)uVar25 >> 0x20));
            piVar9 = piVar9 + 3;
          }
        }
        iVar19 = uVar12 + iVar19 + uVar20;
      }
      uVar8 = DAT_00013aa8;
      iVar4 = puVar7[0x29];
      *(short *)(puVar7 + 0x23) = (short)iVar4 - (short)puVar7[0x28];
      puVar7[2] = param_1[2];
      puVar7[0x1a] = param_1[0x1a];
      bVar1 = *(byte *)(iVar4 + 6);
      sVar2 = CONCAT11(bVar1,*(undefined1 *)(iVar4 + 7));
      iVar18 = ether_addr_equal(iVar4,uVar8);
      if ((((iVar18 != 0) && (sVar2 != -0x7f0d)) && (sVar2 != -0x7ec9)) ||
         (iVar18 = ether_addr_equal(iVar4,DAT_00013aac), iVar18 != 0)) {
        local_2a[0] = sVar2 << 8 | (ushort)bVar1;
        skb_pull(puVar7,8);
      }
      puVar5 = (ushort *)skb_push(puVar7,0xe);
      puVar14 = (ushort *)&local_36;
      do {
        puVar15 = puVar14 + 2;
        puVar6 = puVar5 + 2;
        *(int *)puVar5 = *(int *)puVar14;
        puVar5 = puVar6;
        puVar14 = puVar15;
      } while (puVar15 != local_2a);
      *puVar6 = *puVar15;
      puVar16 = (undefined4 *)param_2[1];
      *puVar7 = param_2;
      puVar7[1] = puVar16;
      param_2[1] = (int)puVar7;
      *puVar16 = puVar7;
      param_2[2] = param_2[2] + 1;
    }
    else {
      iVar19 = uVar12 + iVar19 + uVar20;
    }
  } while (uVar12 + uVar21 < uVar13);
  if (bVar3) {
    return;
  }
LAB_000138c0:
  kfree_skb(param_1);
  return;
LAB_00013a7a:
  while ((piVar9 = (int *)*param_2, param_2 != piVar9 && (piVar9 != (int *)0x0))) {
    param_2[2] = param_2[2] + -1;
    iVar19 = *piVar9;
    piVar17 = (int *)piVar9[1];
    *piVar9 = 0;
    piVar9[1] = 0;
    *(int **)(iVar19 + 4) = piVar17;
    *piVar17 = iVar19;
    kfree_skb();
  }
  goto LAB_000138c0;
}



/* ===== cfg80211_send_layer2_update @ 00013ab4 size=110 ===== */

void cfg80211_send_layer2_update(undefined4 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = __netdev_alloc_skb(0,0x14,0xa20);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)skb_put(iVar2,0x14);
    *puVar3 = 0xffffffff;
    *(undefined2 *)(puVar3 + 1) = 0xffff;
    *(undefined4 *)((int)puVar3 + 6) = *param_2;
    uVar1 = *(undefined2 *)(param_2 + 1);
    *(undefined1 *)(puVar3 + 4) = 0xaf;
    *(undefined1 *)(puVar3 + 3) = 0;
    *(undefined2 *)((int)puVar3 + 10) = uVar1;
    *(undefined1 *)((int)puVar3 + 0xe) = 0;
    *(undefined1 *)((int)puVar3 + 0xd) = 6;
    *(undefined1 *)((int)puVar3 + 0x11) = 0x81;
    *(undefined1 *)((int)puVar3 + 0xf) = 1;
    *(undefined1 *)((int)puVar3 + 0x12) = 1;
    *(undefined1 *)((int)puVar3 + 0x13) = 0;
    *(undefined4 *)(iVar2 + 8) = param_1;
    uVar1 = eth_type_trans(iVar2,param_1);
    *(undefined2 *)(iVar2 + 0x88) = uVar1;
    memset((void *)(iVar2 + 0x18),0,0x30);
    func_0x00032190(iVar2);
    return;
  }
  return;
}



/* ===== ieee80211_ie_split_ric @ 00013b22 size=166 ===== */

uint ieee80211_ie_split_ric
               (int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
               uint param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4;
  do {
    while( true ) {
      if (param_2 <= param_7) {
        return param_7;
      }
      cVar1 = *(char *)(param_1 + param_7);
      if (cVar1 == -1) {
        iVar2 = 2;
      }
      else {
        iVar2 = 0;
      }
      if (param_2 <= iVar2 + param_7) {
        return param_7;
      }
      if (*(char *)(param_3 + param_4 + -1) == -1) {
        return param_7;
      }
      iVar2 = ieee80211_id_in_list_part_3
                        (param_3,param_4,*(undefined1 *)(param_1 + iVar2 + param_7),cVar1 == -1,
                         iVar3);
      if (iVar2 == 0) {
        return param_7;
      }
      if ((cVar1 == '9') && (param_6 != 0)) break;
      param_7 = skip_ie(param_1,param_2,param_7);
    }
    do {
      param_7 = skip_ie(param_1,param_2,param_7);
      if (param_2 <= param_7) break;
      if (*(char *)(param_1 + param_7) == -1) {
        iVar2 = 2;
      }
      else {
        iVar2 = 0;
      }
      if (param_2 <= iVar2 + param_7) break;
    } while ((*(char *)(param_5 + param_6 + -1) == -1) ||
            (iVar2 = ieee80211_id_in_list_part_3
                               (param_5,param_6,*(undefined1 *)(param_1 + iVar2 + param_7),
                                iVar2 != 0,iVar3), iVar2 == 0));
  } while( true );
}



/* ===== cfg80211_sinfo_alloc_tid_stats @ 00013bc8 size=42 ===== */

undefined4 cfg80211_sinfo_alloc_tid_stats(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)
                            (((param_2 << 0x1b) >> 0x1f) * -0x38 + DAT_00013bf4 + 0x2c));
  *(int *)(param_1 + 0xb4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== ieee80211_set_bitrate_flags @ 00013bf8 size=154 ===== */

void ieee80211_set_bitrate_flags(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar9;
  int *piVar8;
  
  piVar7 = (int *)(param_1 + 0xd4);
  do {
    piVar8 = piVar7 + 1;
    iVar6 = *piVar7;
    if (iVar6 != 0) {
      iVar5 = *(int *)(iVar6 + 8);
      if (iVar5 == 1) {
LAB_00013c16:
        for (iVar5 = 0; iVar5 < *(int *)(iVar6 + 0x10); iVar5 = iVar5 + 1) {
          iVar4 = iVar5 * 0xc;
          iVar3 = *(int *)(iVar6 + 4);
          sVar1 = *(short *)(iVar3 + iVar4 + 4);
          if (((sVar1 == 0x3c) || (sVar1 == 0x78)) || (sVar1 == 0xf0)) {
            *(uint *)(iVar3 + iVar4) = *(uint *)(iVar3 + iVar4) | 2;
          }
        }
      }
      else {
        iVar3 = 0;
        if (iVar5 == 0) {
          for (; iVar3 < *(int *)(iVar6 + 0x10); iVar3 = iVar3 + 1) {
            iVar5 = iVar3 * 0xc;
            iVar4 = *(int *)(iVar6 + 4);
            uVar2 = *(ushort *)(iVar4 + iVar5 + 4);
            if (uVar2 == 0x3c) {
LAB_00013c80:
              *(uint *)(iVar4 + iVar5) = *(uint *)(iVar4 + iVar5) | 8;
LAB_00013c86:
              *(uint *)(*(int *)(iVar6 + 4) + iVar5) = *(uint *)(*(int *)(iVar6 + 4) + iVar5) | 0x10
              ;
            }
            else {
              if (uVar2 < 0x3d) {
                if ((uVar2 != 0x14) && (uVar2 != 0x37)) {
                  bVar9 = uVar2 == 10;
                  goto LAB_00013c62;
                }
              }
              else {
                if ((uVar2 == 0x78) || (uVar2 == 0xf0)) goto LAB_00013c80;
                bVar9 = uVar2 == 0x6e;
LAB_00013c62:
                if (!bVar9) goto LAB_00013c86;
              }
              *(uint *)(iVar4 + iVar5) = *(uint *)(iVar4 + iVar5) | 0xc;
            }
          }
        }
        else if (iVar5 == 3) goto LAB_00013c16;
      }
    }
    piVar7 = piVar8;
    if (piVar8 == (int *)(param_1 + 0xe8)) {
      return;
    }
  } while( true );
}



/* ===== cfg80211_supported_cipher_suite @ 00013c92 size=32 ===== */

undefined4 cfg80211_supported_cipher_suite(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x58) <= iVar1) {
      return 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x5c) + iVar1 * 4) == param_2) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}



/* ===== cfg80211_valid_key_idx @ 00013cb2 size=84 ===== */

bool cfg80211_valid_key_idx(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    bVar1 = *(byte *)(param_1 + 0x1d5) >> 6 | *(byte *)(param_1 + 0x1d5) >> 1;
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      uVar3 = 7;
      goto LAB_00013cd2;
    }
    for (; (int)uVar3 < *(int *)(param_1 + 0x1f8); uVar3 = uVar3 + 1) {
      uVar2 = *(int *)(*(int *)(param_1 + 0x1fc) + uVar3 * 4) - 0xfac06;
      if ((uVar2 < 8) && ((1 << (uVar2 & 0xff) & 0xe1U) != 0)) {
        uVar3 = 5;
        goto LAB_00013cd2;
      }
    }
  }
  uVar3 = 3;
LAB_00013cd2:
  return param_2 <= uVar3;
}



/* ===== cfg80211_validate_key_settings @ 00013d06 size=246 ===== */

undefined4
cfg80211_validate_key_settings(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = cfg80211_valid_key_idx(param_1,param_3,param_4);
  if (iVar1 == 0) {
    return 0xffffffea;
  }
  if (param_4 == 0) {
    if ((param_5 != 0) && (-1 < *(int *)(param_1 + 0x1c4) << 0x17)) {
      return 0xffffffea;
    }
  }
  else if (param_5 == 0) {
    return 0xffffffea;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  switch(iVar1) {
  case 0xfac01:
  case 0xfac05:
    if (3 < (int)param_3) {
      return 0xffffffea;
    }
    break;
  case 0xfac02:
    if ((param_4 != 0) && (param_3 != 0)) {
      return 0xffffffea;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      return 0xffffffea;
    }
    goto switchD_00013d94_caseD_fac02;
  case 0xfac04:
  case 0xfac08:
  case 0xfac09:
  case 0xfac0a:
    if (*(int *)(param_2 + 0x18) == 1) {
      if (param_4 == 0) {
        return 0xffffffea;
      }
    }
    else if (*(int *)(param_2 + 0x18) == 2) {
      return 0xffffffea;
    }
    if ((int)((uint)*(byte *)(param_1 + 0x1d4) << 0x1b) < 0) {
      if ((param_4 != 0) && (1 < param_3)) {
        return 0xffffffea;
      }
    }
    else if ((param_4 != 0) && (param_3 != 0)) {
      return 0xffffffea;
    }
    break;
  case 0xfac06:
  case 0xfac0b:
  case 0xfac0c:
  case 0xfac0d:
    if (param_4 != 0) {
      return 0xffffffea;
    }
    if ((int)param_3 < 4) {
      return 0xffffffea;
    }
  }
  switch(iVar1) {
  case 0xfac01:
    bVar3 = *(int *)(param_2 + 8) == 5;
    break;
  case 0xfac02:
  case 0xfac09:
  case 0xfac0a:
  case 0xfac0c:
  case 0xfac0d:
switchD_00013d94_caseD_fac02:
    bVar3 = *(int *)(param_2 + 8) == 0x20;
    break;
  default:
    goto switchD_00013d94_caseD_fac03;
  case 0xfac04:
  case 0xfac06:
  case 0xfac08:
  case 0xfac0b:
    bVar3 = *(int *)(param_2 + 8) == 0x10;
    break;
  case 0xfac05:
    bVar3 = *(int *)(param_2 + 8) == 0xd;
  }
  if (!bVar3) {
    return 0xffffffea;
  }
switchD_00013d94_caseD_fac03:
  if ((*(int *)(param_2 + 4) != 0) && (iVar1 - 0xfac01U < 0xd)) {
    uVar2 = 1 << (iVar1 - 0xfac01U & 0xff);
    if ((uVar2 & 0x1faa) == 0) {
      if ((uVar2 & 0x11) != 0) {
        return 0xffffffea;
      }
    }
    else if (*(int *)(param_2 + 0xc) != 6) {
      return 0xffffffea;
    }
  }
  iVar1 = cfg80211_supported_cipher_suite(param_1 + 0x1a0);
  if (iVar1 != 0) {
    return 0;
  }
  return 0xffffffea;
}



/* ===== cfg80211_upload_connect_keys @ 00013e3e size=150 ===== */

void cfg80211_upload_connect_keys(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar4 = *param_1;
  piVar2 = param_1;
  if (iVar4 == 0) {
    piVar2 = (int *)wiphy_to_rdev_part_5();
  }
  uVar1 = DAT_00013ed8;
  if (piVar2[0x18] != 0) {
    iVar7 = piVar2[4];
    uVar6 = 0;
    do {
      iVar5 = uVar6 * 0x1c + param_1[0x18];
      if (*(int *)(iVar5 + 0x14) != 0) {
        iVar5 = (**(code **)(*(int *)(iVar4 + -0x1a0) + 0x18))(iVar4,iVar7,uVar6 & 0xff,0,0,iVar5);
        uVar3 = uVar1;
        if ((iVar5 != 0) ||
           ((uVar6 == *(uint *)(param_1[0x18] + 0xa4) &&
            (iVar5 = (**(code **)(*(int *)(iVar4 + -0x1a0) + 0x24))(iVar4,iVar7,uVar6 & 0xff,1,1),
            uVar3 = DAT_00013ed4, iVar5 != 0)))) {
          netdev_err(iVar7,uVar3,uVar6);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 4);
    kfree_sensitive(param_1[0x18]);
    param_1[0x18] = 0;
  }
  return;
}



/* ===== cfg80211_process_wdev_events @ 00013edc size=200 ===== */

void cfg80211_process_wdev_events(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  byte in_Q;
  byte bVar11;
  uint in_cpsr;
  uint uVar12;
  
  bVar1 = in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q;
  disableIRQinterrupts();
  piVar4 = param_1;
  while ((int *)param_1[0x21] != param_1 + 0x21) {
    piVar6 = (int *)param_1[0x21];
    iVar2 = *piVar6;
    piVar3 = (int *)piVar6[1];
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *piVar6 = 0x100;
    piVar6[1] = 0x122;
    uVar12 = in_cpsr & 0xffffff00;
    bVar11 = (in_cpsr >> 0x1b & 1) != 0;
    mutex_lock(param_1 + 9,iVar2,piVar3,(uint)bVar1 << 0x1b,piVar4,param_2,param_3);
    uVar5 = piVar6[2];
    cVar9 = 4 < uVar5;
    cVar10 = SBORROW4(uVar5,5);
    cVar7 = (int)(uVar5 - 5) < 0;
    cVar8 = uVar5 == 5;
    switch(uVar5) {
    case 0:
      iVar2 = piVar6[3];
      cVar9 = ((uint)LZCOUNT(iVar2) >> 4 & 1) != 0;
      cVar8 = iVar2 != 0;
      cVar7 = '\0';
      __cfg80211_connect_result(param_1[4],piVar6 + 3);
      break;
    case 1:
      __cfg80211_roamed(param_1,piVar6 + 3);
      break;
    case 2:
      piVar4 = (int *)(*(byte *)((int)piVar6 + 0x16) ^ 1);
      __cfg80211_disconnected(param_1[4],piVar6[3],piVar6[4],(short)piVar6[5]);
      break;
    case 3:
      __cfg80211_ibss_joined(param_1[4],piVar6 + 3,piVar6[5]);
      break;
    case 4:
      iVar2 = *param_1;
      if (iVar2 == 0) {
        iVar2 = wiphy_to_rdev_part_5();
      }
      __cfg80211_leave(iVar2 + -0x1a0,param_1);
      break;
    case 5:
      __cfg80211_port_authorized(param_1,piVar6 + 3);
    }
    mutex_unlock(param_1 + 9);
    kfree(piVar6);
    bVar1 = cVar7 << 4 | cVar8 << 3 | cVar9 << 2 | cVar10 << 1 | bVar11;
    disableIRQinterrupts();
    in_cpsr = uVar12;
  }
  return;
}



/* ===== cfg80211_process_rdev_events @ 00013faa size=40 ===== */

void cfg80211_process_rdev_events(int param_1)

{
  int *piVar1;
  
  rtnl_is_locked();
  for (piVar1 = *(int **)(param_1 + 0x438); piVar1 != (int *)(param_1 + 0x438);
      piVar1 = (int *)*piVar1) {
    cfg80211_process_wdev_events(piVar1 + -2);
  }
  return;
}



/* ===== cfg80211_change_iface @ 00013fd2 size=386 ===== */

int cfg80211_change_iface(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(*(int *)(param_2 + 0x1c4) + 4);
  iVar1 = param_4;
  rtnl_is_locked();
  if ((((uVar4 == 4) || (param_3 == 10)) || (param_3 == 0xc)) ||
     ((*(int *)(*param_1 + 0x14) == 0 ||
      (-1 < ((int)(uint)*(ushort *)(param_1 + 0x70) >> (param_3 & 0xff)) << 0x1f)))) {
    return -0x5f;
  }
  if (uVar4 != param_3) {
    if ((*(int *)(param_2 + 0x13c) << 0x16 < 0) && ((param_3 - 1 < 2 || (param_3 == 8)))) {
      return -0x10;
    }
    *(undefined1 *)(*(int *)(param_2 + 0x1c4) + 0x30) = 0;
    *(undefined1 *)(*(int *)(param_2 + 0x1c4) + 0x5a) = 0;
    mutex_lock(*(int *)(param_2 + 0x1c4) + 0x24);
    pcVar2 = *(code **)(*param_1 + 0x160);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1 + 0x68,param_2,0,pcVar2,iVar1);
    }
    mutex_unlock(*(int *)(param_2 + 0x1c4) + 0x24);
    switch(uVar4) {
    case 1:
      cfg80211_leave_ibss(param_1,param_2,0);
      break;
    case 2:
    case 8:
      mutex_lock(*(int *)(param_2 + 0x1c4) + 0x24);
      cfg80211_disconnect(param_1,param_2,3,1);
      mutex_unlock(*(int *)(param_2 + 0x1c4) + 0x24);
      break;
    case 3:
    case 9:
      cfg80211_stop_ap(param_1,param_2,1);
      break;
    case 0xb:
      cfg80211_leave_ocb(param_1,param_2);
    }
    cfg80211_process_rdev_events(param_1);
    cfg80211_mlme_purge_registrations(*(undefined4 *)(param_2 + 0x1c4));
  }
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1 + 0x68,param_2,param_3,param_4);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((param_4 != 0) && (*(int *)(param_4 + 4) != -1)) {
    *(bool *)(*(int *)(param_2 + 0x1c4) + 0x30) = *(int *)(param_4 + 4) != 0;
  }
  uVar3 = *(uint *)(param_2 + 0x13c) & 0xffffffbf;
  *(uint *)(param_2 + 0x13c) = uVar3;
  switch(param_3) {
  case 2:
    if (*(char *)(*(int *)(param_2 + 0x1c4) + 0x30) != '\0') goto switchD_000140da_caseD_3;
  case 1:
  case 8:
  case 0xb:
    *(uint *)(param_2 + 0x13c) = uVar3 | 0x40;
  default:
switchD_000140da_caseD_3:
    if ((uVar4 != param_3) && ((*(uint *)(param_2 + 0x28) & 1) != 0)) {
      cfg80211_update_iface_num(param_1,param_3,1);
      cfg80211_update_iface_num(param_1,uVar4,0xffffffff);
    }
    return 0;
  }
}



/* ===== cfg80211_validate_beacon_int @ 0001416c size=18 ===== */

undefined4 cfg80211_validate_beacon_int(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 - 10U < 0x2707) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== ieee80211_get_ratemask @ 0001417e size=86 ===== */

undefined4 ieee80211_get_ratemask(int param_1,byte *param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (0x1f < param_3 - 1U)) {
LAB_00014182:
    uVar1 = 0xffffffea;
  }
  else {
    *param_4 = 0;
    pbVar2 = param_2;
    while (pbVar2 != param_2 + param_3) {
      uVar3 = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x10) <= (int)uVar3) goto LAB_00014182;
        if (*(short *)(uVar3 * 0xc + *(int *)(param_1 + 4) + 4) == (ushort)((*pbVar2 & 0x7f) * 5))
        break;
        uVar3 = uVar3 + 1;
      }
      *param_4 = 1 << (uVar3 & 0xff) | *param_4;
      pbVar2 = pbVar2 + 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== cfg80211_does_bw_fit_range @ 000141d4 size=30 ===== */

undefined4 cfg80211_does_bw_fit_range(uint *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_2 - (param_3 >> 1) < *param_1) {
    uVar1 = 0;
  }
  else if (param_1[1] < (param_3 >> 1) + param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== IS_ERR_OR_NULL @ 000141f4 size=18 ===== */

bool IS_ERR_OR_NULL(uint param_1)

{
  if (param_1 == 0) {
    return true;
  }
  return 0xfffff000 < param_1;
}



/* ===== is_an_alpha2 @ 00014206 size=32 ===== */

byte is_an_alpha2(byte *param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 != (byte *)0x0) &&
     (bVar1 = *(byte *)(DAT_00014228 + (uint)*param_1) & 3,
     (*(byte *)(DAT_00014228 + (uint)*param_1) & 3) != 0)) {
    bVar1 = *(byte *)(DAT_00014228 + (uint)param_1[1]) & 3;
    if ((*(byte *)(DAT_00014228 + (uint)param_1[1]) & 3) != 0) {
      bVar1 = 1;
    }
    return bVar1;
  }
  return bVar1;
}



/* ===== valid_wmm @ 0001422c size=62 ===== */

undefined1 valid_wmm(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + iVar2 * 4);
    if (((1 << (bVar1 & 0xf)) - 1U & 0xffff) <= ((1 << (uint)(bVar1 >> 4)) - 1U & 0xffff)) {
      return 0;
    }
    if (*(char *)(param_1 + 1 + iVar2 * 4) == '\0') break;
    iVar2 = iVar2 + 1;
    if (iVar2 == 8) {
      return 1;
    }
  }
  return 0;
}



/* ===== reg_get_regdomain @ 0001426a size=32 ===== */

undefined4 reg_get_regdomain(int param_1)

{
  if (((*(uint *)(*DAT_0001428c + 0xc) & 0xfffffffd) != 1) && (*(int *)(param_1 + 0xec) != 0)) {
    return *(undefined4 *)(param_1 + 0xec);
  }
  return *DAT_00014290;
}



/* ===== is_valid_reg_rule @ 00014294 size=32 ===== */

bool is_valid_reg_rule(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 != 0) && (uVar2 = param_1[1], uVar2 != 0)) && (uVar1 < uVar2 || uVar1 == uVar2)) &&
     (uVar1 != uVar2)) {
    return param_1[2] <= uVar2 - uVar1;
  }
  return false;
}



/* ===== is_valid_rd @ 000142b4 size=38 ===== */

int is_valid_rd(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 - 1U < 0x80) {
    param_1 = param_1 + 0x14;
    iVar2 = 0;
    do {
      uVar4 = is_valid_reg_rule(param_1);
      iVar1 = (int)uVar4;
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      param_1 = (int)((ulonglong)uVar4 >> 0x20) + 0x60;
    } while (iVar3 != iVar2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== map_regdom_flags @ 000142da size=84 ===== */

uint map_regdom_flags(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x180) != 0) {
    uVar1 = 2;
  }
  if ((int)(param_1 << 0x1b) < 0) {
    uVar1 = uVar1 | 8;
  }
  if ((int)(param_1 << 0x1f) < 0) {
    uVar1 = uVar1 | 0x40;
  }
  if ((int)(param_1 << 0x1c) < 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((int)(param_1 << 0x13) < 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((int)(param_1 << 0x12) < 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((int)(param_1 << 0x11) < 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((int)(param_1 << 0x10) < 0) {
    uVar1 = uVar1 | 0x80;
  }
  if ((int)(param_1 << 0xf) < 0) {
    uVar1 = uVar1 | 0x100;
  }
  if ((int)(param_1 << 0xe) < 0) {
    uVar1 = uVar1 | 0x2000;
  }
  return uVar1;
}



/* ===== reg_initiator_name @ 0001432e size=14 ===== */

undefined4 reg_initiator_name(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00014340;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(DAT_0001433c + param_1 * 4);
  }
  return uVar1;
}



/* ===== is_ht40_allowed @ 00014344 size=24 ===== */

bool is_ht40_allowed(int param_1)

{
  if ((param_1 != 0) && (-1 < (int)(*(uint *)(param_1 + 0xc) << 0x1f))) {
    return (*(uint *)(param_1 + 0xc) & 0x30) != 0x30;
  }
  return false;
}



/* ===== reg_call_notifier @ 0001435c size=10 ===== */

void reg_call_notifier(int param_1)

{
  if (*(code **)(param_1 + 0xe8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xe8))();
    return;
  }
  return;
}



/* ===== notify_self_managed_wiphys @ 00014366 size=46 ===== */

void notify_self_managed_wiphys(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00014394;
  for (puVar2 = (undefined4 *)*DAT_00014394; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    if (((int)(puVar2[0x71] << 0x18) < 0) && (*(int *)(param_1 + 0xc) == 1)) {
      reg_call_notifier(puVar2 + 0x67,param_1);
    }
  }
  return;
}



/* ===== regulatory_pre_cac_allowed @ 00014398 size=30 ===== */

bool regulatory_pre_cac_allowed(int param_1)

{
  bool bVar1;
  
  if ((*(int *)(param_1 + 0xec) == 0) ||
     (*(int *)(*DAT_000143b8 + 0x10) == *(int *)(*(int *)(param_1 + 0xec) + 0x10))) {
    bVar1 = *(int *)(*DAT_000143b8 + 0x10) == 2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* ===== kzalloc @ 000143bc size=8 ===== */

void kzalloc(undefined4 param_1,uint param_2)

{
  __kmalloc(param_1,param_2 | 0x100);
  return;
}



/* ===== reg_copy_regd @ 000143c4 size=100 ===== */

undefined4 *
reg_copy_regd(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar3 = (uint)((ulonglong)(uint)param_1[2] * 0x60);
  iVar5 = (int)((ulonglong)(uint)param_1[2] * 0x60 >> 0x20);
  if (iVar5 == 0) {
    iVar5 = 0x14;
    iVar1 = uVar3 + 0x14;
    if (0xffffffeb < uVar3) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = -1;
  }
  puVar2 = (undefined4 *)kzalloc(iVar1,0xcc0,uVar3,iVar5,param_4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0xfffffff4;
  }
  else {
    puVar4 = puVar2;
    puVar6 = param_1;
    do {
      puVar7 = puVar6 + 1;
      *puVar4 = *puVar6;
      puVar4 = puVar4 + 1;
      puVar6 = puVar7;
    } while (puVar7 != param_1 + 5);
    iVar5 = 0x14;
    for (uVar3 = 0; uVar3 < (uint)param_1[2]; uVar3 = uVar3 + 1) {
      memcpy((void *)((int)puVar2 + iVar5),(void *)((int)param_1 + iVar5),0x60);
      iVar5 = iVar5 + 0x60;
    }
  }
  return puVar2;
}



/* ===== set_wmm_rule @ 00014428 size=194 ===== */

void set_wmm_rule(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  
  pbVar6 = (byte *)(param_1 +
                   ((*(ushort *)(param_3 + 0x12) & 0xff) << 8 |
                   (uint)(*(ushort *)(param_3 + 0x12) >> 8)) * 4);
  puVar8 = param_2;
  iVar4 = param_3;
  iVar1 = valid_wmm(pbVar6);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_3 + 4);
    uVar3 = *(uint *)(param_3 + 8);
    printk(DAT_000144ec,
           uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
           ,uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
            uVar3 >> 0x18,*param_2,param_2[1],puVar8,iVar4);
  }
  else {
    iVar4 = param_4;
    pbVar5 = pbVar6;
    iVar1 = 0;
    do {
      iVar7 = iVar1 + 1;
      *(short *)(iVar4 + 0x14) = (short)(1 << (*pbVar5 >> 4)) + -1;
      *(short *)(iVar4 + 0x16) = (short)(1 << (*pbVar5 & 0xf)) + -1;
      *(byte *)(iVar4 + 0x1a) = pbVar5[1];
      *(ushort *)(iVar4 + 0x18) =
           (*(ushort *)(pbVar6 + iVar1 * 4 + 2) << 8 | *(ushort *)(pbVar6 + iVar1 * 4 + 2) >> 8) *
           1000;
      *(short *)(iVar4 + 0x34) = (short)(1 << (pbVar5[0x10] >> 4)) + -1;
      *(short *)(iVar4 + 0x36) = (short)(1 << (pbVar5[0x10] & 0xf)) + -1;
      *(byte *)(iVar4 + 0x3a) = pbVar5[0x11];
      *(ushort *)(iVar4 + 0x38) =
           (*(ushort *)(pbVar6 + iVar1 * 4 + 0x12) << 8 |
           *(ushort *)(pbVar6 + iVar1 * 4 + 0x12) >> 8) * 1000;
      iVar4 = iVar4 + 8;
      pbVar5 = pbVar5 + 4;
      iVar1 = iVar7;
    } while (iVar7 != 4);
    *(undefined1 *)(param_4 + 0x5c) = 1;
  }
  return;
}



/* ===== is_wiphy_all_set_reg_flag @ 000144f0 size=86 ===== */

undefined4 is_wiphy_all_set_reg_flag(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = DAT_00014548;
  puVar2 = (undefined4 *)*DAT_00014548;
  do {
    if (puVar2 == puVar1) {
      return 1;
    }
    for (puVar3 = (undefined4 *)puVar2[0x10d]; puVar3 != puVar2 + 0x10d;
        puVar3 = (undefined4 *)*puVar3) {
      puVar4 = puVar3 + 7;
      mutex_lock(puVar4);
      if ((param_1 & *(uint *)(puVar3[-2] + 0x28)) == 0) {
        mutex_unlock(puVar4);
        return 0;
      }
      mutex_unlock(puVar4);
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}



/* ===== schedule_work @ 0001454c size=12 ===== */

void schedule_work(undefined4 param_1)

{
  queue_work_on(1,*DAT_00014558,param_1);
  return;
}



/* ===== reg_set_request_processed @ 0001455c size=38 ===== */

void reg_set_request_processed(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_00014584;
  *(undefined1 *)(*DAT_00014584 + 0x1d) = 1;
  piVar2 = (int *)piVar1[1];
  cancel_delayed_work(piVar1 + 3);
  if (piVar2 != piVar1 + 1) {
    schedule_work(piVar1 + 0xe);
    return;
  }
  return;
}



/* ===== alpha2_equal @ 00014588 size=32 ===== */

bool alpha2_equal(char *param_1,char *param_2)

{
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    if (*param_1 != *param_2) {
      return false;
    }
    return param_1[1] == param_2[1];
  }
  return false;
}



/* ===== regdom_changes @ 000145a8 size=28 ===== */

byte regdom_changes(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  if (*DAT_000145c4 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = alpha2_equal(*DAT_000145c4 + 0xc,param_1,param_3,DAT_000145c4,param_4);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



/* ===== reg_query_regdb_wmm @ 000145c8 size=154 ===== */

uint reg_query_regdb_wmm(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(DAT_00014664 + 4);
  if (uVar6 != 0) {
    if (0xfffff000 < uVar6) {
      return uVar6;
    }
    iVar7 = uVar6 + 8;
    while( true ) {
      uVar1 = *(ushort *)(iVar7 + 2);
      if (uVar1 == 0) break;
      iVar2 = alpha2_equal(param_1,iVar7);
      if (iVar2 != 0) {
        iVar2 = 0;
        pbVar5 = (byte *)(uVar6 + ((uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8)) * 4);
        while( true ) {
          if ((int)(uint)pbVar5[1] <= iVar2) {
            return 0xffffffc3;
          }
          uVar3 = (*(ushort *)(pbVar5 + (*pbVar5 + 1 & 0xfffffffe) + iVar2 * 2) & 0xff) << 8 |
                  (uint)(*(ushort *)(pbVar5 + (*pbVar5 + 1 & 0xfffffffe) + iVar2 * 2) >> 8);
          iVar4 = uVar6 + uVar3 * 4;
          if (((0x13 < *(byte *)(uVar6 + uVar3 * 4)) &&
              (uVar3 = *(uint *)(iVar4 + 4),
              (uint)((ulonglong)
                     (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                     uVar3 >> 0x18) * (ulonglong)DAT_00014668 >> 0x26) <= param_2)) &&
             (uVar3 = *(uint *)(iVar4 + 8),
             param_2 <=
             (uint)((ulonglong)
                    (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                    uVar3 >> 0x18) * (ulonglong)DAT_00014668 >> 0x26))) break;
          iVar2 = iVar2 + 1;
        }
        set_wmm_rule(uVar6,iVar7,iVar4,param_3,param_4);
        return 0;
      }
      iVar7 = iVar7 + 4;
    }
  }
  return 0xffffffc3;
}



/* ===== query_regdb @ 0001466c size=372 ===== */

uint query_regdb(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  
  iVar3 = DAT_000147e0;
  iVar11 = *(int *)(DAT_000147e0 + 4);
  rtnl_is_locked();
  uVar9 = *(uint *)(iVar3 + 4);
  if (0xfffff000 < uVar9) {
    return uVar9;
  }
  puVar12 = (undefined1 *)(iVar11 + 8);
  while( true ) {
    uVar2 = *(ushort *)(puVar12 + 2);
    if (uVar2 == 0) {
      return 0xffffffc3;
    }
    iVar3 = alpha2_equal(param_1,puVar12);
    if (iVar3 != 0) break;
    puVar12 = puVar12 + 4;
  }
  pbVar10 = (byte *)(uVar9 + ((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) * 4);
  iVar3 = kzalloc((uint)pbVar10[1] * 0x60 + 0x14,0xcc0,(uint)pbVar10[1],0x14,param_4);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 8) = (uint)pbVar10[1];
    *(undefined1 *)(iVar3 + 0xc) = *puVar12;
    *(undefined1 *)(iVar3 + 0xd) = puVar12[1];
    *(uint *)(iVar3 + 0x10) = (uint)pbVar10[2];
    iVar11 = iVar3;
    for (uVar13 = 0; uVar13 < *(uint *)(iVar3 + 8); uVar13 = uVar13 + 1) {
      uVar7 = (*(ushort *)(pbVar10 + (*pbVar10 + 1 & 0xfffffffe) + uVar13 * 2) & 0xff) << 8 |
              (uint)(*(ushort *)(pbVar10 + (*pbVar10 + 1 & 0xfffffffe) + uVar13 * 2) >> 8);
      iVar6 = uVar9 + uVar7 * 4;
      uVar5 = *(uint *)(iVar6 + 4);
      *(uint *)(iVar11 + 0x14) =
           uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
      ;
      uVar5 = *(uint *)(iVar6 + 8);
      *(uint *)(iVar11 + 0x18) =
           uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
      ;
      uVar5 = *(uint *)(iVar6 + 0xc);
      *(uint *)(iVar11 + 0x1c) =
           uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
      ;
      *(undefined4 *)(iVar11 + 0x20) = 0;
      uVar2 = *(ushort *)(iVar6 + 2);
      *(undefined4 *)(iVar11 + 0x68) = 0;
      *(uint *)(iVar11 + 0x24) = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
      if ((int)((uint)*(byte *)(iVar6 + 1) << 0x1f) < 0) {
        *(undefined4 *)(iVar11 + 0x68) = 1;
      }
      if ((int)((uint)*(byte *)(iVar6 + 1) << 0x1e) < 0) {
        *(uint *)(iVar11 + 0x68) = *(uint *)(iVar11 + 0x68) | 8;
      }
      if ((int)((uint)*(byte *)(iVar6 + 1) << 0x1d) < 0) {
        *(uint *)(iVar11 + 0x68) = *(uint *)(iVar11 + 0x68) | 0x10;
      }
      if ((int)((uint)*(byte *)(iVar6 + 1) << 0x1c) < 0) {
        *(uint *)(iVar11 + 0x68) = *(uint *)(iVar11 + 0x68) | 0x80;
      }
      bVar1 = *(byte *)(iVar6 + 1);
      *(undefined4 *)(iVar11 + 0x6c) = 0;
      if ((int)((uint)bVar1 << 0x1b) < 0) {
        *(uint *)(iVar11 + 0x68) = *(uint *)(iVar11 + 0x68) | 0x800;
      }
      if (0x11 < *(byte *)(uVar9 + uVar7 * 4)) {
        *(uint *)(iVar11 + 0x6c) =
             ((*(ushort *)(iVar6 + 0x10) & 0xff) << 8 | (uint)(*(ushort *)(iVar6 + 0x10) >> 8)) *
             1000;
      }
      if (0x13 < *(byte *)(uVar9 + uVar7 * 4)) {
        set_wmm_rule(uVar9,puVar12,iVar6,iVar11 + 0x14);
      }
      iVar11 = iVar11 + 0x60;
    }
    piVar4 = (int *)kzalloc(0xc,0xcc0);
    iVar11 = DAT_000147e4;
    if (piVar4 != (int *)0x0) {
      piVar4[2] = iVar3;
      mutex_lock(iVar11 + 0x48);
      piVar8 = *(int **)(iVar11 + 0x58);
      *(int **)(iVar11 + 0x58) = piVar4;
      *piVar4 = iVar11 + 0x54;
      piVar4[1] = (int)piVar8;
      *piVar8 = (int)piVar4;
      mutex_unlock(iVar11 + 0x48);
      schedule_work(iVar11 + 0x5c);
      return 0;
    }
    kfree(iVar3);
  }
  return 0xfffffff4;
}



/* ===== wiphy_to_rdev.part.2 @ 000147e8 size=1 ===== */

void wiphy_to_rdev_part_2(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(2,0x147e8);
  (*pcVar1)();
}



/* ===== valid_regdb @ 000147ea size=238 ===== */

undefined4 valid_regdb(int *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar11;
  undefined4 *local_2c [2];
  int *piVar10;
  
  iVar4 = DAT_000148dc;
  if ((((7 < param_2) && (*param_1 == DAT_000148d8)) && (param_1[1] == 0x14000000)) &&
     (iVar3 = request_firmware(local_2c,DAT_000148e0,*(int *)(DAT_000148dc + 8) + 0x10), iVar3 == 0)
     ) {
    iVar4 = verify_pkcs7_signature
                      (param_1,param_2,local_2c[0][1],*local_2c[0],*(undefined4 *)(iVar4 + 0xc),5,0,
                       0);
    release_firmware(local_2c[0]);
    if (iVar4 == 0) {
      piVar8 = (int *)((int)param_1 + param_2);
      piVar9 = param_1 + 2;
      while( true ) {
        piVar10 = piVar9 + 1;
        if (piVar8 < piVar10) {
          return 1;
        }
        uVar2 = *(ushort *)((int)piVar9 + 2);
        if (uVar2 == 0) {
          return 1;
        }
        uVar5 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
        if (piVar8 < (int *)((int)param_1 + uVar5 * 4 + 2)) {
          return 0;
        }
        bVar1 = *(byte *)((int)param_1 + uVar5 * 4 + 1);
        uVar6 = *(byte *)(param_1 + uVar5) + 1 & 0xfffffffe;
        if (piVar8 < (int *)((int)param_1 + (short)(ushort)bVar1 * 2 + uVar6 + uVar5 * 4)) break;
        if (*(byte *)(param_1 + uVar5) < 3) {
          return 0;
        }
        puVar7 = (ushort *)((int)param_1 + uVar6 + uVar5 * 4);
        for (uVar11 = 0; piVar9 = piVar10, uVar11 < bVar1; uVar11 = uVar11 + 1) {
          uVar5 = (*puVar7 & 0xff) << 8 | (uint)(*puVar7 >> 8);
          if (piVar8 < (int *)((int)param_1 + uVar5 * 4 + 1)) {
            return 0;
          }
          if (*(byte *)(param_1 + uVar5) < 0x10) {
            return 0;
          }
          if (0x13 < *(byte *)(param_1 + uVar5)) {
            uVar2 = *(ushort *)((int)param_1 + uVar5 * 4 + 0x12);
            uVar5 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
            if (param_2 < uVar5 * 4 + 0x20) {
              return 0;
            }
            iVar4 = valid_wmm(param_1 + uVar5);
            if (iVar4 == 0) {
              return 0;
            }
          }
          puVar7 = puVar7 + 1;
        }
      }
      return 0;
    }
  }
  return 0;
}



/* ===== freq_reg_info_regd.part.5 @ 000148e4 size=120 ===== */

int * freq_reg_info_regd_part_5(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  bVar1 = false;
  piVar5 = (int *)(param_2 + 0x14);
  uVar7 = 0;
  uVar6 = DAT_0001495c;
  if (param_1 <= DAT_00014960) {
    uVar6 = DAT_00014964;
  }
  while( true ) {
    uVar3 = *(uint *)(param_2 + 8);
    if (uVar3 <= uVar7) {
      if (bVar1) {
        piVar5 = (int *)0xffffffea;
      }
      else {
        piVar5 = (int *)0xffffffde;
      }
      return piVar5;
    }
    if (!bVar1) {
      uVar3 = param_1 - *piVar5;
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      if (uVar6 < uVar3) {
        uVar4 = param_1 - piVar5[1];
        if ((int)uVar4 < 0) {
          uVar4 = -uVar4;
        }
        if (uVar6 < uVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    iVar2 = cfg80211_does_bw_fit_range(piVar5,param_1,param_3,uVar3,param_4);
    if ((bVar1) && (iVar2 != 0)) break;
    uVar7 = uVar7 + 1;
    piVar5 = piVar5 + 0x18;
  }
  return piVar5;
}



/* ===== reg_process_ht_flags.part.6 @ 00014968 size=230 ===== */

void reg_process_ht_flags_part_6(int param_1)

{
  undefined4 uVar1;
  int extraout_r2;
  uint uVar2;
  uint extraout_r2_00;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 *puVar9;
  
  puVar8 = (undefined4 *)(param_1 + 0xd4);
  do {
    puVar9 = puVar8 + 1;
    piVar10 = (int *)*puVar8;
    if (piVar10 != (int *)0x0) {
      for (uVar7 = 0; uVar7 < (uint)piVar10[3]; uVar7 = uVar7 + 1) {
        iVar6 = *piVar10 + uVar7 * 0x38;
        uVar13 = is_ht40_allowed(iVar6);
        if ((int)uVar13 == 0) {
          *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) | 0x30;
        }
        else {
          piVar4 = *(int **)(param_1 + *(int *)((int)((ulonglong)uVar13 >> 0x20) + extraout_r2) * 4
                            + 0xd4);
          iVar5 = 0;
          iVar12 = 0;
          iVar11 = 0;
          while (iVar5 != piVar4[3]) {
            iVar3 = iVar5 * 0x38 + *piVar4;
            iVar5 = iVar5 + 1;
            if (*(int *)(iVar3 + 4) == *(int *)(iVar6 + 4) + -0x14) {
              iVar12 = iVar3;
            }
            if (*(int *)(iVar3 + 4) == *(int *)(iVar6 + 4) + 0x14) {
              iVar11 = iVar3;
            }
          }
          if ((*(int *)(param_1 + 0xec) == 0) ||
             (uVar2 = freq_reg_info_regd_part_5
                                (*(int *)(iVar6 + 4) * 1000,*(int *)(param_1 + 0xec),20000),
             0xfffff000 < uVar2)) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined4 *)(uVar2 + 0x54);
          }
          uVar13 = is_ht40_allowed(iVar12,uVar1);
          if (((int)uVar13 == 0) || ((int)((ulonglong)uVar13 >> 0x20) << 0x12 < 0)) {
            uVar2 = *(uint *)(iVar6 + 0xc) | 0x20;
          }
          else {
            uVar2 = *(uint *)(iVar6 + 0xc) & 0xffffffdf;
          }
          *(uint *)(iVar6 + 0xc) = uVar2;
          uVar13 = is_ht40_allowed(iVar11);
          if (((int)uVar13 == 0) || ((int)((ulonglong)uVar13 >> 0x20) << 0x11 < 0)) {
            uVar2 = extraout_r2_00 | 0x10;
          }
          else {
            uVar2 = extraout_r2_00 & 0xffffffef;
          }
          *(uint *)(iVar6 + 0xc) = uVar2;
        }
      }
    }
    puVar8 = puVar9;
  } while (puVar9 != (undefined4 *)(param_1 + 0xe8));
  return;
}



/* ===== reg_check_channels @ 00014a4e size=16 ===== */

void reg_check_channels(void)

{
  mod_delayed_work_on(1,*DAT_00014a60,DAT_00014a64,18000);
  return;
}



/* ===== reg_query_database @ 00014a68 size=168 ===== */

void reg_query_database(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *local_30;
  undefined4 local_2c;
  char acStack_28 [12];
  int local_1c;
  
  iVar5 = DAT_00014b14;
  piVar1 = DAT_00014b10;
  local_1c = *DAT_00014b10;
  rtnl_is_locked();
  if (*(int *)(iVar5 + 4) == 0) {
    iVar2 = kmemdup(param_1 + 0x14,2,0xcc0);
    if (iVar2 != 0) {
      iVar4 = request_firmware_nowait
                        (DAT_00014b1c,1,DAT_00014b20,*(int *)(iVar5 + 8) + 0x10,0xcc0,iVar2,
                         DAT_00014b18);
      if (iVar4 == 0) goto LAB_00014a8a;
      kfree(iVar2);
    }
LAB_00014acc:
    local_2c = 0;
    local_30 = acStack_28;
    snprintf(local_30,0xc,DAT_00014b24,(uint)*(byte *)(param_1 + 0x14),
             (uint)*(byte *)(param_1 + 0x15));
    if ((10 < *(uint *)(iVar5 + 0x10)) ||
       (iVar5 = kobject_uevent_env(*(int *)(iVar5 + 8) + 0x10,2,&local_30), iVar5 != 0)) {
      uVar3 = 0;
      goto LAB_00014a8c;
    }
    queue_delayed_work_on(1,*DAT_00014b28,DAT_00014b2c,0x3af);
  }
  else {
    iVar2 = query_regdb(param_1 + 0x14);
    if (iVar2 != 0) goto LAB_00014acc;
  }
LAB_00014a8a:
  uVar3 = 1;
LAB_00014a8c:
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== reg_update_last_request @ 00014b30 size=34 ===== */

void reg_update_last_request(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_00014b54;
  if (param_1 != *DAT_00014b54) {
    piVar2 = (int *)*DAT_00014b54;
    if ((piVar2 != DAT_00014b54 + 0x26) && (piVar2 != (int *)0x0)) {
      call_rcu(piVar2,0,param_3,DAT_00014b54 + 0x26,param_4);
    }
    *piVar1 = param_1;
  }
  return;
}



/* ===== list_del @ 00014b58 size=22 ===== */

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



/* ===== freq_reg_info @ 00014b6e size=94 ===== */

uint freq_reg_info(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_24 [2];
  
  iVar4 = DAT_00014bd0;
  if (DAT_00014bcc < param_2) {
    iVar6 = 0x14;
  }
  else {
    iVar6 = 1;
  }
  iVar1 = reg_get_regdomain();
  uVar3 = 20000;
  local_24[0] = *(int *)(iVar4 + 0x20);
  piVar5 = local_24;
  do {
    if (iVar1 == 0) {
      uVar2 = 0xffffffea;
    }
    else {
      uVar2 = freq_reg_info_regd_part_5(param_2,iVar1,uVar3);
      if (uVar2 < 0xfffff001) {
        return uVar2;
      }
    }
    iVar4 = *piVar5;
    uVar3 = iVar4 * 1000;
    piVar5 = piVar5 + -1;
  } while ((uint)(iVar6 * 1000) < uVar3 || iVar6 * 1000 + iVar4 * -1000 == 0);
  return uVar2;
}



/* ===== queue_regulatory_request @ 00014bd4 size=58 ===== */

void queue_regulatory_request(int param_1)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  
  iVar1 = DAT_00014c10;
  bVar3 = *(byte *)(param_1 + 0x14);
  if ((int)((uint)*(byte *)(DAT_00014c10 + (uint)bVar3) << 0x1e) < 0) {
    bVar3 = bVar3 - 0x20;
  }
  *(byte *)(param_1 + 0x14) = bVar3;
  bVar3 = *(byte *)(param_1 + 0x15);
  if ((int)((uint)*(byte *)(iVar1 + (uint)bVar3) << 0x1e) < 0) {
    bVar3 = bVar3 - 0x20;
  }
  *(byte *)(param_1 + 0x15) = bVar3;
  iVar1 = DAT_00014c14;
  iVar4 = DAT_00014c14 + 4;
  piVar2 = *(int **)(DAT_00014c14 + 8);
  *(int *)(DAT_00014c14 + 8) = param_1 + 0x24;
  *(int *)(param_1 + 0x24) = iVar4;
  *(int **)(param_1 + 0x28) = piVar2;
  *piVar2 = param_1 + 0x24;
  schedule_work(iVar1 + 0x38);
  return;
}



/* ===== regulatory_hint_core @ 00014c18 size=48 ===== */

undefined4 regulatory_hint_core(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = kzalloc(0x2c,0xcc0);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    *(undefined1 *)(iVar1 + 0x14) = *param_1;
    *(undefined1 *)(iVar1 + 0x15) = param_1[1];
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    queue_regulatory_request();
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== regulatory_hint @ 00014c48 size=80 ===== */

undefined4 regulatory_hint(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == (undefined1 *)0x0) || (param_1 == 0)) {
    uVar2 = 0xffffffea;
  }
  else {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffe;
    iVar1 = kzalloc(0x2c,0xcc0);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      uVar2 = get_wiphy_idx(param_1);
      *(undefined1 *)(iVar1 + 0x14) = *param_2;
      *(undefined1 *)(iVar1 + 0x15) = param_2[1];
      *(undefined4 *)(iVar1 + 0xc) = 2;
      *(undefined4 *)(DAT_00014c98 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 8) = uVar2;
      queue_regulatory_request(iVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== rcu_free_regdom @ 00014c9c size=10 ===== */

void rcu_free_regdom(int param_1)

{
  if (param_1 != 0) {
    call_rcu(param_1,0);
    return;
  }
  return;
}



/* ===== reset_regdomains @ 00014ca6 size=86 ===== */

void reset_regdomains(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_00014d00;
  piVar1 = DAT_00014cfc;
  rtnl_is_locked();
  iVar3 = DAT_00014d04;
  iVar4 = *piVar1;
  if (*(int *)(iVar2 + 0xc4) == iVar4) {
    if (iVar4 == DAT_00014d04) {
      iVar4 = 0;
      goto LAB_00014cc6;
    }
  }
  else {
    if (*(int *)(iVar2 + 0xc4) == DAT_00014d04) {
LAB_00014cc6:
      *(undefined4 *)(iVar2 + 0xc4) = 0;
    }
    if (iVar4 != iVar3) goto LAB_00014cd2;
  }
  iVar4 = 0;
LAB_00014cd2:
  rcu_free_regdom(iVar4);
  rcu_free_regdom(*(undefined4 *)(iVar2 + 0xc4));
  *(int *)(iVar2 + 0xc4) = iVar3;
  *piVar1 = param_2;
  if (param_1 != 0) {
    reg_update_last_request(DAT_00014d08);
    return;
  }
  return;
}



/* ===== reg_check_chans_work @ 00014d0c size=284 ===== */

void reg_check_chans_work(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar1 = DAT_00014e34;
  rtnl_lock();
  puVar6 = (undefined4 *)*puVar1;
  do {
    if (puVar6 == puVar1) {
      rtnl_unlock();
      return;
    }
    if (-1 < (int)(puVar6[0x71] << 0x19)) {
      puVar8 = puVar6 + 0x67;
      if (puVar8 == (undefined4 *)0x0) {
        wiphy_to_rdev_part_2();
      }
      rtnl_is_locked();
      for (piVar5 = (int *)puVar6[0x10d]; piVar5 != puVar6 + 0x10d; piVar5 = (int *)*piVar5) {
        iVar2 = (int)(piVar5 + 7);
        memset(&local_44,0,0x1c);
        mutex_lock(iVar2);
        if ((piVar5[2] == 0) || (-1 < *(int *)(piVar5[2] + 0x28) << 0x1f)) goto LAB_00014e26;
        iVar9 = piVar5[-1];
        switch(iVar9) {
        case 1:
          uVar7 = (uint)*(byte *)(piVar5 + 0x14);
          goto LAB_00014d96;
        case 2:
        case 8:
          if ((piVar5[0x21] == 0) || (*(int *)(piVar5[0x21] + 0x48) == 0)) goto LAB_00014e26;
          pcVar4 = *(code **)(puVar6[-1] + 0x134);
          if ((pcVar4 == (code *)0x0) ||
             (iVar3 = (*pcVar4)(puVar8,piVar5 + -2,&local_44), iVar3 != 0)) {
            cfg80211_chandef_create(&local_44,*(undefined4 *)(piVar5[0x21] + 0x48),0);
          }
          break;
        case 3:
        case 9:
          uVar7 = piVar5[0x32];
LAB_00014d96:
          if (uVar7 != 0) {
            local_44 = piVar5[0x29];
            uStack_40 = piVar5[0x2a];
            uStack_3c = piVar5[0x2b];
            uStack_38 = piVar5[0x2c];
            local_34 = piVar5[0x2d];
            uStack_30 = piVar5[0x2e];
            uStack_2c = piVar5[0x2f];
            break;
          }
LAB_00014e26:
          mutex_unlock(iVar2);
          goto LAB_00014e2c;
        }
        mutex_unlock(iVar2);
        if (iVar9 - 1U < 9) {
          uVar7 = 1 << (iVar9 - 1U & 0xff);
          if ((uVar7 & 0x105) == 0) {
            if ((uVar7 & 0x82) == 0) goto LAB_00014e2c;
            iVar2 = cfg80211_chandef_usable(puVar8,&local_44);
          }
          else {
            iVar2 = cfg80211_reg_can_beacon_relax(puVar8,&local_44,iVar9);
          }
          if (iVar2 == 0) {
            cfg80211_leave(puVar6 + -1,piVar5 + -2);
          }
        }
LAB_00014e2c:
      }
    }
    puVar6 = (undefined4 *)*puVar6;
  } while( true );
}



/* ===== get_wiphy_regdom @ 00014e38 size=6 ===== */

undefined4 get_wiphy_regdom(int param_1)

{
  return *(undefined4 *)(param_1 + 0xec);
}



/* ===== reg_get_dfs_region @ 00014e3e size=14 ===== */

undefined4 reg_get_dfs_region(void)

{
  return *(undefined4 *)(*DAT_00014e4c + 0x10);
}



/* ===== is_world_regdom @ 00014e50 size=24 ===== */

bool is_world_regdom(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*param_1 == '0')) {
    return param_1[1] == '0';
  }
  return false;
}



/* ===== handle_reg_beacon @ 00014e68 size=152 ===== */

void handle_reg_beacon(int param_1,int param_2,int param_3)

{
  int iVar1;
  int extraout_r2;
  int extraout_r2_00;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  puVar3 = (undefined4 *)(param_2 * 0x38 + **(int **)(param_1 + *(int *)(param_3 + 8) * 4 + 0xd4));
  if (((puVar3[1] == *(int *)(param_3 + 0xc)) &&
      (*(short *)(puVar3 + 2) == *(short *)(param_3 + 0x10))) && (*(char *)(puVar3 + 7) == '\0')) {
    *(undefined1 *)(puVar3 + 7) = 1;
    uVar4 = is_world_regdom(*DAT_00014f00 + 0xc,*(undefined4 *)(param_1 + 0xec),*DAT_00014f04);
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    if (((((int)uVar4 != 0) ||
         ((iVar2 = extraout_r2, iVar1 != 0 &&
          (iVar1 = is_world_regdom(iVar1 + 0xc), iVar2 = extraout_r2_00, iVar1 != 0)))) ||
        ((iVar2 != 0 && ((*(int *)(iVar2 + 0xc) != 3 && (*(int *)(param_1 + 0x28) << 0x1f < 0))))))
       && (-1 < *(int *)(param_1 + 0x28) << 0x1d)) {
      local_50 = *puVar3;
      uStack_4c = puVar3[1];
      uStack_48 = puVar3[2];
      uStack_44 = puVar3[3];
      local_40 = puVar3[4];
      uStack_3c = puVar3[5];
      uStack_38 = puVar3[6];
      uStack_34 = puVar3[7];
      local_30 = puVar3[8];
      uStack_2c = puVar3[9];
      uStack_28 = puVar3[10];
      uStack_24 = puVar3[0xb];
      local_20 = puVar3[0xc];
      uStack_1c = puVar3[0xd];
      if ((int)(puVar3[3] << 0x1e) < 0) {
        puVar3[3] = puVar3[3] & 0xfffffffd;
        nl80211_send_beacon_hint_event(param_1,&local_50,puVar3);
      }
    }
  }
  return;
}



/* ===== reg_reload_regdb @ 00014f08 size=100 ===== */

int reg_reload_regdb(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r3;
  undefined4 *local_14;
  
  iVar1 = DAT_00014f6c;
  local_14 = param_2;
  iVar2 = request_firmware(&local_14,DAT_00014f70,*(int *)(DAT_00014f6c + 8) + 0x10,param_4,param_1)
  ;
  if (iVar2 == 0) {
    iVar3 = valid_regdb(local_14[1],*local_14);
    if (iVar3 == 0) {
      iVar2 = -0x3d;
    }
    else {
      iVar3 = kmemdup(local_14[1],*local_14,0xcc0);
      if (iVar3 == 0) {
        iVar2 = -0xc;
      }
      else {
        rtnl_lock();
        iVar4 = IS_ERR_OR_NULL(*(undefined4 *)(iVar1 + 4));
        if (iVar4 == 0) {
          kfree(extraout_r3);
        }
        *(int *)(iVar1 + 4) = iVar3;
        rtnl_unlock();
      }
    }
    release_firmware(local_14);
  }
  return iVar2;
}



/* ===== reg_is_valid_request @ 00014f74 size=22 ===== */

undefined4 reg_is_valid_request(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *DAT_00014f8c;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1d) == '\0')) {
    uVar2 = alpha2_equal(iVar1 + 0x14,param_1);
    return uVar2;
  }
  return 0;
}



/* ===== reg_get_max_bandwidth @ 00014f90 size=148 ===== */

uint reg_get_max_bandwidth(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar3 = (uint *)(param_1 + 0x14);
  for (uVar2 = 0; uVar2 != *(uint *)(param_1 + 8); uVar2 = uVar2 + 1) {
    if (param_2 == puVar3) {
      puVar3 = (uint *)(uVar2 * 0x60 + -0x4c + param_1);
      uVar6 = uVar2;
      puVar7 = param_2;
      goto LAB_00014ff2;
    }
    puVar3 = puVar3 + 0x18;
  }
  uVar1 = 0;
  goto LAB_00014fa4;
  while( true ) {
    uVar6 = uVar6 - 1;
    puVar3 = puVar5 + -0x18;
    puVar7 = puVar5;
    if (puVar5[1] < uVar1) break;
LAB_00014ff2:
    puVar5 = puVar3;
    uVar1 = *puVar7;
    if (uVar6 == 0) break;
  }
  iVar4 = uVar2 * 0x60 + param_1;
  puVar3 = param_2;
  do {
    puVar7 = puVar3 + 1;
    if (*(uint *)(param_1 + 8) - 1 <= uVar2) break;
    puVar3 = (uint *)(iVar4 + 0x74);
    uVar2 = uVar2 + 1;
    puVar5 = (uint *)(iVar4 + 0x74);
    iVar4 = iVar4 + 0x60;
  } while (*puVar5 <= *puVar7);
  uVar1 = *puVar7 - uVar1;
LAB_00014fa4:
  uVar2 = param_2[0x15];
  if (((int)(uVar2 << 0xf) < 0) && (DAT_00015024 <= uVar1)) {
    uVar1 = DAT_00015024;
  }
  if (((int)(uVar2 << 0x10) < 0) && (39999 < uVar1)) {
    uVar1 = 40000;
  }
  if (((uVar2 & 0x6000) == 0x6000) && (19999 < uVar1)) {
    uVar1 = 20000;
  }
  return uVar1;
}



/* ===== print_rd_rules @ 00015028 size=144 ===== */

void print_rd_rules(int param_1)

{
  int *piVar1;
  char *__format;
  char *__format_00;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char acStack_6c [32];
  undefined1 auStack_4c [32];
  int local_2c;
  
  uVar2 = DAT_000150cc;
  __format_00 = DAT_000150c8;
  __format = DAT_000150c4;
  piVar1 = DAT_000150b8;
  iVar4 = param_1 + 0x14;
  local_2c = *DAT_000150b8;
  for (uVar5 = 0; uVar5 < *(uint *)(param_1 + 8); uVar5 = uVar5 + 1) {
    uVar6 = *(undefined4 *)(iVar4 + 8);
    if (*(int *)(iVar4 + 0x54) << 0x14 < 0) {
      uVar3 = reg_get_max_bandwidth(param_1,iVar4);
      snprintf(acStack_6c,0x20,__format_00,uVar6,uVar3);
    }
    else {
      snprintf(acStack_6c,0x20,__format,uVar6);
    }
    if (*(int *)(iVar4 + 0x54) << 0x1b < 0) {
      scnprintf(auStack_4c,0x20,DAT_000150bc,
                (uint)((ulonglong)*(uint *)(iVar4 + 0x58) * (ulonglong)uVar2 >> 0x26));
    }
    else {
      scnprintf(auStack_4c,0x20,DAT_000150c0);
    }
    iVar4 = iVar4 + 0x60;
  }
  if (local_2c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== print_regdomain @ 000150d0 size=46 ===== */

void print_regdomain(int param_1)

{
  if ((((param_1 != -0xc) && (*(char *)(param_1 + 0xc) == '9')) && (*(char *)(param_1 + 0xd) == '8')
      ) && (*(int *)(*DAT_00015100 + 0xc) == 3)) {
    cfg80211_rdev_by_wiphy_idx(*(undefined4 *)(*DAT_00015100 + 8));
  }
  print_rd_rules(param_1);
  return;
}



/* ===== __regulatory_set_wiphy_regd @ 00015104 size=72 ===== */

uint __regulatory_set_wiphy_regd(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (-1 < *(int *)(param_1 + 0x28) << 0x18) {
      return 0xffffffff;
    }
    iVar1 = is_valid_rd(param_2);
    if (iVar1 != 0) {
      uVar2 = reg_copy_regd(param_2);
      if (0xfffff000 < uVar2) {
        return uVar2;
      }
      uVar3 = *(undefined4 *)(param_1 + -0x170);
      *(uint *)(param_1 + -0x170) = uVar2;
      kfree(uVar3);
      return 0;
    }
    print_rd_rules(param_2);
  }
  return 0xffffffea;
}



/* ===== regulatory_set_wiphy_regd @ 0001514c size=20 ===== */

int regulatory_set_wiphy_regd(void)

{
  int iVar1;
  
  iVar1 = __regulatory_set_wiphy_regd();
  if (iVar1 == 0) {
    schedule_work(DAT_00015160);
  }
  return iVar1;
}



/* ===== reg_rule_to_chan_bw_flags @ 00015164 size=228 ===== */

uint reg_rule_to_chan_bw_flags(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *param_3;
  uVar3 = param_2[2];
  iVar6 = param_3[1] * 1000 + (uint)*(ushort *)(param_3 + 2);
  if (param_2[0x15] << 0x14 < 0) {
    uVar3 = reg_get_max_bandwidth();
  }
  iVar1 = cfg80211_does_bw_fit_range(param_2,iVar6,10000);
  if (iVar1 == 0) {
    uVar2 = 0x1000;
  }
  else {
    uVar2 = 0;
  }
  iVar1 = cfg80211_does_bw_fit_range(param_2,iVar6,20000);
  if (iVar1 == 0) {
    uVar2 = uVar2 | 0x800;
  }
  if (iVar5 == 4) {
    do {
      uVar4 = uVar3;
      if (uVar4 == 0) {
        return uVar2;
      }
      __aeabi_idivmod((iVar6 - *param_2) - (int)uVar4 / 2,uVar4);
      uVar3 = (int)uVar4 / 2;
    } while (extraout_r1 != 0);
    switch((int)((longlong)(int)uVar4 * (longlong)DAT_00015258 >> 0x26) + ((int)~uVar4 >> 0x1f)) {
    case 0:
      return uVar2 | 0x4000;
    case 1:
      return uVar2 | 0x8000;
    default:
      return uVar2 | 1;
    case 3:
      return uVar2 | 0x10000;
    case 7:
      return uVar2 | 0x20000;
    case 0xf:
      return uVar2 | 0x40000;
    }
  }
  if (uVar3 < 10000) {
    uVar2 = uVar2 | 0x1000;
LAB_00015228:
    uVar2 = uVar2 | 0x800;
LAB_0001522c:
    uVar2 = uVar2 | 0x30;
  }
  else {
    if (uVar3 < 20000) goto LAB_00015228;
    if (uVar3 < 40000) goto LAB_0001522c;
    if (DAT_0001525c < uVar3) {
      if (DAT_00015260 < uVar3) {
        return uVar2;
      }
      goto LAB_00015234;
    }
  }
  uVar2 = uVar2 | 0x80;
LAB_00015234:
  return uVar2 | 0x100;
}



/* ===== wiphy_update_regulatory @ 00015264 size=1080 ===== */

void wiphy_update_regulatory(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint extraout_r2;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  undefined8 uVar18;
  int *local_44;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  
  iVar10 = *DAT_0001546c;
  iVar9 = *DAT_0001546c;
  uVar11 = *(uint *)(param_1 + 0x28);
  if (((int)(uVar11 << 0x18) < 0) || (iVar9 == 0)) {
LAB_000152fc:
    if (param_2 != 0) {
      return;
    }
  }
  else if ((param_2 != 0) || (-1 < (int)(uVar11 << 0x1f))) {
    if ((((uVar11 & 3) == 2) && (*(int *)(param_1 + 0xec) == 0)) && (param_2 != 3)) {
      uVar18 = is_world_regdom(iVar9 + 0x14);
      iVar9 = (int)((ulonglong)uVar18 >> 0x20);
      uVar11 = extraout_r2;
      if ((int)uVar18 == 0) goto LAB_000152fc;
    }
    uVar1 = DAT_00015474;
    if ((*(int *)(iVar9 + 0xc) != 1) || (*(int *)(iVar9 + 0x10) != 1)) {
      *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(*DAT_00015470 + 0x10);
      local_44 = (int *)(param_1 + 0xd4);
      do {
        piVar12 = local_44 + 1;
        local_44 = (int *)*local_44;
        if (local_44 != (int *)0x0) {
          for (uVar11 = 0; uVar11 < (uint)local_44[3]; uVar11 = uVar11 + 1) {
            iVar15 = uVar11 * 0x38 + *local_44;
            iVar17 = *(int *)(iVar15 + 4) * 1000 + (uint)*(ushort *)(iVar15 + 8);
            iVar13 = *DAT_0001546c;
            iVar9 = wiphy_idx_to_wiphy(*(undefined4 *)(iVar13 + 8));
            uVar14 = *(uint *)(iVar15 + 0x20);
            uVar3 = freq_reg_info(param_1,iVar17);
            if (uVar3 < 0xfffff001) {
              uVar5 = reg_get_regdomain(param_1);
              uVar6 = reg_rule_to_chan_bw_flags(uVar5,uVar3,iVar15);
              puVar4 = DAT_000156ac;
              if (((*(int *)(iVar13 + 0xc) == 2) && (iVar9 != 0)) &&
                 ((param_1 == iVar9 && (*(int *)(param_1 + 0x28) << 0x1e < 0)))) {
                uVar14 = map_regdom_flags(*(undefined4 *)(uVar3 + 0x54));
                uVar6 = uVar6 | uVar14;
                *(uint *)(iVar15 + 0x20) = uVar6;
                *(uint *)(iVar15 + 0xc) = uVar6;
                uVar14 = (uint)((ulonglong)*(uint *)(uVar3 + 0xc) * (ulonglong)uVar1 >> 0x25);
                *(uint *)(iVar15 + 0x24) = uVar14;
                *(uint *)(iVar15 + 0x10) = uVar14;
                uVar14 = (uint)((ulonglong)*(uint *)(uVar3 + 0x10) * (ulonglong)uVar1 >> 0x25);
                *(uint *)(iVar15 + 0x28) = uVar14;
                *(uint *)(iVar15 + 0x14) = uVar14;
                *(uint *)(iVar15 + 0x18) = uVar14;
                if ((int)(uVar6 << 0x1c) < 0) {
                  *(undefined4 *)(iVar15 + 0x34) = 60000;
                  iVar9 = *(int *)(uVar3 + 0x58);
                  if (iVar9 == 0) {
                    iVar9 = 60000;
                  }
                  *(int *)(iVar15 + 0x34) = iVar9;
                }
              }
              else {
                *(undefined4 *)(iVar15 + 0x2c) = 0;
                *(undefined1 *)(iVar15 + 0x1c) = 0;
                *(undefined4 *)(iVar15 + 0x30) = *puVar4;
                uVar7 = map_regdom_flags(*(undefined4 *)(uVar3 + 0x54));
                uVar7 = uVar14 | uVar6 | uVar7;
                *(uint *)(iVar15 + 0xc) = uVar7;
                uVar14 = (uint)((ulonglong)*(uint *)(uVar3 + 0xc) * (ulonglong)uVar1 >> 0x25);
                if (*(int *)(iVar15 + 0x24) < (int)uVar14) {
                  *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x24);
                }
                else {
                  *(uint *)(iVar15 + 0x10) = uVar14;
                }
                uVar14 = (uint)((ulonglong)*(uint *)(uVar3 + 0x10) * (ulonglong)uVar1 >> 0x25);
                *(uint *)(iVar15 + 0x18) = uVar14;
                if ((int)(uVar7 << 0x1c) < 0) {
                  iVar9 = *(int *)(uVar3 + 0x58);
                  if (iVar9 == 0) {
                    iVar9 = 60000;
                  }
                  *(int *)(iVar15 + 0x34) = iVar9;
                }
                uVar3 = *(uint *)(iVar15 + 0x28);
                if ((uVar3 == 0) || ((param_2 == 3 && (*(int *)(param_1 + 0x28) << 0x1c < 0)))) {
                  *(uint *)(iVar15 + 0x14) = uVar14;
                }
                else {
LAB_00015664:
                  if ((int)uVar3 < (int)uVar14) {
                    *(uint *)(iVar15 + 0x14) = uVar3;
                  }
                  else {
                    *(uint *)(iVar15 + 0x14) = uVar14;
                  }
                }
              }
            }
            else {
              puVar4 = (undefined4 *)freq_reg_info(param_1,iVar17 + -20000);
              piVar16 = (int *)freq_reg_info(param_1,iVar17 + 20000);
              if (((puVar4 < (undefined4 *)0xfffff001) && (piVar16 < (int *)0xfffff001)) &&
                 (puVar4[1] == *piVar16)) {
                local_34 = *puVar4;
                local_2c = puVar4[2];
                local_30 = piVar16[1];
                if ((uint)piVar16[2] < local_2c) {
                  local_2c = piVar16[2];
                }
                iVar17 = cfg80211_does_bw_fit_range(&local_34,iVar17,20000);
                if (iVar17 != 0) {
                  uVar5 = reg_get_regdomain(param_1);
                  uVar3 = reg_rule_to_chan_bw_flags(uVar5,puVar4,iVar15);
                  uVar6 = reg_rule_to_chan_bw_flags(uVar5,piVar16,iVar15);
                  puVar2 = DAT_000156ac;
                  if (((*(int *)(iVar13 + 0xc) == 2) && (iVar9 != 0)) &&
                     ((param_1 == iVar9 && (*(int *)(param_1 + 0x28) << 0x1e < 0)))) {
                    uVar14 = map_regdom_flags(puVar4[0x15]);
                    uVar7 = map_regdom_flags(piVar16[0x15]);
                    uVar7 = uVar3 | uVar6 | uVar14 | uVar7;
                    *(uint *)(iVar15 + 0xc) = uVar7;
                    *(uint *)(iVar15 + 0x20) = uVar7;
                    uVar14 = (uint)((ulonglong)(uint)puVar4[3] * (ulonglong)uVar1 >> 0x25);
                    uVar3 = (uint)((ulonglong)(uint)piVar16[3] * (ulonglong)uVar1 >> 0x25);
                    if (uVar14 <= uVar3) {
                      uVar3 = uVar14;
                    }
                    *(uint *)(iVar15 + 0x10) = uVar3;
                    *(uint *)(iVar15 + 0x24) = uVar3;
                    uVar3 = (uint)((ulonglong)(uint)puVar4[4] * (ulonglong)uVar1 >> 0x25);
                    uVar14 = (uint)((ulonglong)(uint)piVar16[4] * (ulonglong)uVar1 >> 0x25);
                    if (uVar14 <= uVar3) {
                      uVar3 = uVar14;
                    }
                    *(uint *)(iVar15 + 0x14) = uVar3;
                    *(uint *)(iVar15 + 0x18) = uVar3;
                    *(uint *)(iVar15 + 0x28) = uVar3;
                    if ((int)(uVar7 << 0x1c) < 0) {
                      *(undefined4 *)(iVar15 + 0x34) = 60000;
                      uVar14 = puVar4[0x16];
                      uVar3 = piVar16[0x16];
                      if ((uVar14 != 0) || (uVar3 != 0)) {
                        if (uVar3 < uVar14) {
                          *(uint *)(iVar15 + 0x34) = uVar14;
                        }
                        else {
                          *(uint *)(iVar15 + 0x34) = uVar3;
                        }
                      }
                    }
                  }
                  else {
                    *(undefined4 *)(iVar15 + 0x2c) = 0;
                    *(undefined1 *)(iVar15 + 0x1c) = 0;
                    *(undefined4 *)(iVar15 + 0x30) = *puVar2;
                    uVar7 = map_regdom_flags(puVar4[0x15]);
                    uVar8 = map_regdom_flags(piVar16[0x15]);
                    *(uint *)(iVar15 + 0xc) = uVar3 | uVar6 | uVar14 | uVar7 | uVar8;
                    iVar9 = cfg80211_does_bw_fit_range
                                      (&local_34,
                                       *(int *)(iVar15 + 4) * 1000 + (uint)*(ushort *)(iVar15 + 8),
                                       10000);
                    if (iVar9 != 0) {
                      *(uint *)(iVar15 + 0xc) = *(uint *)(iVar15 + 0xc) & 0xffffefff;
                    }
                    iVar9 = cfg80211_does_bw_fit_range
                                      (&local_34,
                                       *(int *)(iVar15 + 4) * 1000 + (uint)*(ushort *)(iVar15 + 8),
                                       20000);
                    if (iVar9 != 0) {
                      *(uint *)(iVar15 + 0xc) = *(uint *)(iVar15 + 0xc) & 0xfffff7ff;
                    }
                    uVar3 = (uint)((ulonglong)(uint)puVar4[3] * (ulonglong)uVar1 >> 0x25);
                    uVar14 = (uint)((ulonglong)(uint)piVar16[3] * (ulonglong)uVar1 >> 0x25);
                    if (uVar14 <= uVar3) {
                      uVar3 = uVar14;
                    }
                    if (*(int *)(iVar15 + 0x24) < (int)uVar3) {
                      *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x24);
                    }
                    else {
                      *(uint *)(iVar15 + 0x10) = uVar3;
                    }
                    uVar14 = (uint)((ulonglong)(uint)puVar4[4] * (ulonglong)uVar1 >> 0x25);
                    uVar3 = (uint)((ulonglong)(uint)piVar16[4] * (ulonglong)uVar1 >> 0x25);
                    if (uVar14 <= uVar3) {
                      uVar3 = uVar14;
                    }
                    *(uint *)(iVar15 + 0x18) = uVar3;
                    if (*(int *)(iVar15 + 0xc) << 0x1c < 0) {
                      uVar14 = puVar4[0x16];
                      uVar6 = piVar16[0x16];
                      if (uVar14 == 0 && uVar6 == 0) {
                        *(undefined4 *)(iVar15 + 0x34) = 60000;
                      }
                      else if (uVar14 < uVar6) {
                        *(uint *)(iVar15 + 0x34) = uVar6;
                      }
                      else {
                        *(uint *)(iVar15 + 0x34) = uVar14;
                      }
                    }
                    uVar14 = *(uint *)(iVar15 + 0x28);
                    if ((uVar14 != 0) && ((param_2 != 3 || (-1 < *(int *)(param_1 + 0x28) << 0x1c)))
                       ) goto LAB_00015664;
                    *(uint *)(iVar15 + 0x14) = uVar3;
                  }
                  goto LAB_00015456;
                }
              }
              if ((param_2 != 3) || (uVar3 != 0xffffffde)) {
                if ((*(int *)(iVar13 + 0xc) == 2) &&
                   (((iVar9 != 0 && (param_1 == iVar9)) && (*(int *)(param_1 + 0x28) << 0x1e < 0))))
                {
                  uVar3 = *(uint *)(iVar15 + 0x20) | 1;
                  *(uint *)(iVar15 + 0x20) = uVar3;
                }
                else {
                  uVar3 = *(uint *)(iVar15 + 0xc) | 1;
                }
                *(uint *)(iVar15 + 0xc) = uVar3;
              }
            }
LAB_00015456:
          }
        }
        local_44 = piVar12;
      } while ((int *)(param_1 + 0xe8) != piVar12);
      if (*DAT_0001546c != 0) {
        piVar12 = DAT_0001546c + 0x32;
        for (piVar16 = (int *)*piVar12; piVar16 != piVar12; piVar16 = (int *)*piVar16) {
          iVar9 = *(int *)(param_1 + piVar16[2] * 4 + 0xd4);
          if (iVar9 != 0) {
            for (uVar11 = 0; uVar11 < *(uint *)(iVar9 + 0xc); uVar11 = uVar11 + 1) {
              handle_reg_beacon(param_1,uVar11,piVar16);
            }
          }
        }
      }
      if (param_1 != 0) {
        reg_process_ht_flags_part_6(param_1);
      }
      goto LAB_00015308;
    }
    goto LAB_000152fc;
  }
  if ((uVar11 & 0x81) != 1) {
    return;
  }
LAB_00015308:
  reg_call_notifier(param_1,iVar10);
  return;
}



/* ===== update_all_wiphy_regulatory @ 000156b0 size=42 ===== */

void update_all_wiphy_regulatory(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  rtnl_is_locked();
  puVar1 = DAT_000156dc;
  for (puVar2 = (undefined4 *)*DAT_000156dc; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    wiphy_update_regulatory(puVar2 + 0x67,param_1);
  }
  reg_check_channels();
  return;
}



/* ===== handle_channel_custom.constprop.16 @ 000156e0 size=182 ===== */

void handle_channel_custom_constprop_16(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_3 == 0) {
    iVar3 = -0x16;
  }
  else {
    iVar3 = freq_reg_info_regd_part_5
                      (*(int *)(param_2 + 4) * 1000 + (uint)*(ushort *)(param_2 + 8),param_3,20000,
                       *(int *)(param_2 + 4),param_4);
  }
  iVar4 = IS_ERR_OR_NULL(iVar3);
  if (iVar4 == 0) {
    uVar7 = reg_rule_to_chan_bw_flags(param_3,iVar3,param_2);
    puVar1 = DAT_00015798;
    *(undefined1 *)(param_2 + 0x1c) = 0;
    uVar8 = *puVar1;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 0x30) = uVar8;
    if (*(int *)(param_1 + 0x28) << 0x18 < 0) {
      uVar5 = *(uint *)(param_2 + 0x20);
      uVar6 = map_regdom_flags(*(undefined4 *)(iVar3 + 0x54));
    }
    else {
      uVar6 = map_regdom_flags(*(undefined4 *)(iVar3 + 0x54));
      uVar5 = *(uint *)(param_2 + 0xc);
    }
    uVar2 = DAT_0001579c;
    uVar6 = uVar6 | uVar7 | uVar5;
    *(uint *)(param_2 + 0xc) = uVar6;
    *(uint *)(param_2 + 0x10) = (uint)((ulonglong)*(uint *)(iVar3 + 0xc) * (ulonglong)uVar2 >> 0x25)
    ;
    uVar7 = (uint)((ulonglong)*(uint *)(iVar3 + 0x10) * (ulonglong)uVar2 >> 0x25);
    *(uint *)(param_2 + 0x14) = uVar7;
    *(uint *)(param_2 + 0x18) = uVar7;
    if ((int)(uVar6 << 0x1c) < 0) {
      iVar3 = *(int *)(iVar3 + 0x58);
      if (iVar3 == 0) {
        iVar3 = 60000;
      }
      *(int *)(param_2 + 0x34) = iVar3;
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) << 0x18 < 0) {
      uVar7 = *(uint *)(param_2 + 0xc) | 1;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0x20) | 1;
      *(uint *)(param_2 + 0x20) = uVar7;
    }
    *(uint *)(param_2 + 0xc) = uVar7;
  }
  return;
}



/* ===== wiphy_apply_custom_regulatory @ 000157a0 size=70 ===== */

void wiphy_apply_custom_regulatory(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar4;
  undefined4 *puVar3;
  
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
  puVar2 = (undefined4 *)(param_1 + 0xd4);
  do {
    puVar3 = puVar2 + 1;
    piVar4 = (int *)*puVar2;
    if (piVar4 != (int *)0x0) {
      for (uVar1 = 0; uVar1 < (uint)piVar4[3]; uVar1 = uVar1 + 1) {
        handle_channel_custom_constprop_16(param_1,uVar1 * 0x38 + *piVar4,param_2);
      }
    }
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)(param_1 + 0xe8));
  return;
}



/* ===== reg_process_self_managed_hints @ 000157e6 size=172 ===== */

void reg_process_self_managed_hints(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar9;
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 *puVar8;
  
  memset(auStack_54,0,0x2c);
  puVar1 = DAT_00015894;
  for (puVar3 = (undefined4 *)*DAT_00015894; puVar3 != puVar1; puVar3 = (undefined4 *)*puVar3) {
    iVar4 = puVar3[0xb];
    puVar3[0xb] = 0;
    if (iVar4 != 0) {
      puVar5 = puVar3 + 0x67;
      uVar2 = puVar3[0xa2];
      puVar3[0xa2] = iVar4;
      rcu_free_regdom(uVar2);
      puVar7 = puVar3 + 0x9c;
      do {
        puVar8 = puVar7 + 1;
        piVar9 = (int *)*puVar7;
        if (piVar9 != (int *)0x0) {
          for (uVar6 = 0; uVar6 < (uint)piVar9[3]; uVar6 = uVar6 + 1) {
            handle_channel_custom_constprop_16(puVar5,uVar6 * 0x38 + *piVar9,iVar4);
          }
        }
        puVar7 = puVar8;
      } while (puVar8 != puVar3 + 0xa1);
      if (puVar5 != (undefined4 *)0x0) {
        reg_process_ht_flags_part_6(puVar5);
      }
      local_4c = get_wiphy_idx(puVar5);
      local_40 = *(undefined1 *)(iVar4 + 0xc);
      local_3f = *(undefined1 *)(iVar4 + 0xd);
      local_48 = 2;
      nl80211_common_reg_change_event(0x71,auStack_54);
    }
  }
  reg_check_channels();
  return;
}



/* ===== regulatory_set_wiphy_regd_sync_rtnl @ 00015898 size=30 ===== */

int regulatory_set_wiphy_regd_sync_rtnl(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  rtnl_is_locked();
  iVar1 = __regulatory_set_wiphy_regd(param_1,param_2);
  if (iVar1 == 0) {
    reg_process_self_managed_hints();
  }
  return iVar1;
}



/* ===== reg_rules_intersect @ 000158b6 size=388 ===== */

undefined4
reg_rules_intersect(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar3 = *param_3;
  if (*param_3 < *param_4) {
    uVar3 = *param_4;
  }
  *param_5 = uVar3;
  uVar10 = param_3[1];
  if (param_4[1] <= param_3[1]) {
    uVar10 = param_4[1];
  }
  param_5[1] = uVar10;
  uVar11 = param_3[2];
  uVar12 = param_4[2];
  if ((int)(param_3[0x15] << 0x14) < 0) {
    uVar11 = reg_get_max_bandwidth(param_1,param_3,param_3,param_3[0x15] << 0x14,param_4);
  }
  if ((int)(param_4[0x15] << 0x14) < 0) {
    uVar12 = reg_get_max_bandwidth(param_2,param_4);
  }
  if (uVar12 <= uVar11) {
    uVar11 = uVar12;
  }
  param_5[2] = uVar11;
  uVar12 = param_3[0x15] | param_4[0x15];
  param_5[0x15] = uVar12;
  if (((int)(param_3[0x15] << 0x14) < 0) && ((int)(param_4[0x15] << 0x14) < 0)) {
    uVar12 = uVar12 | 0x800;
  }
  else {
    uVar12 = uVar12 & 0xfffff7ff;
  }
  param_5[0x15] = uVar12;
  if (uVar10 - uVar3 < uVar11) {
    param_5[2] = uVar10 - uVar3;
  }
  if (param_4[4] < param_3[4]) {
    param_5[4] = param_4[4];
  }
  else {
    param_5[4] = param_3[4];
  }
  if (param_4[3] < param_3[3]) {
    param_5[3] = param_4[3];
  }
  else {
    param_5[3] = param_3[3];
  }
  if (param_3[0x16] < param_4[0x16]) {
    param_5[0x16] = param_4[0x16];
  }
  else {
    param_5[0x16] = param_3[0x16];
  }
  if ((char)param_3[0x17] == '\0') {
    uVar6 = 0;
    if ((char)param_4[0x17] == '\0') goto LAB_000159dc;
    puVar9 = param_5 + 5;
    puVar4 = param_4 + 5;
    do {
      puVar8 = puVar4 + 2;
      uVar3 = puVar4[1];
      *puVar9 = *puVar4;
      puVar9[1] = uVar3;
      puVar9 = puVar9 + 2;
      puVar4 = puVar8;
    } while (puVar8 != param_4 + 0x15);
  }
  else if ((char)param_4[0x17] == '\0') {
    puVar9 = param_5 + 5;
    puVar4 = param_3 + 5;
    do {
      puVar8 = puVar4 + 2;
      uVar3 = puVar4[1];
      *puVar9 = *puVar4;
      puVar9[1] = uVar3;
      puVar9 = puVar9 + 2;
      puVar4 = puVar8;
    } while (puVar8 != param_3 + 0x15);
  }
  else {
    puVar4 = param_5;
    puVar9 = param_3;
    do {
      puVar8 = puVar9 + 2;
      uVar7 = (ushort)puVar9[5];
      if ((ushort)puVar9[5] < (ushort)param_4[5]) {
        uVar7 = (ushort)param_4[5];
      }
      *(ushort *)(puVar4 + 5) = uVar7;
      uVar7 = *(ushort *)((int)puVar9 + 0x16);
      if (*(ushort *)((int)puVar9 + 0x16) < *(ushort *)((int)param_4 + 0x16)) {
        uVar7 = *(ushort *)((int)param_4 + 0x16);
      }
      *(ushort *)((int)puVar4 + 0x16) = uVar7;
      uVar7 = (ushort)puVar9[6];
      if ((ushort)param_4[6] <= (ushort)puVar9[6]) {
        uVar7 = (ushort)param_4[6];
      }
      *(ushort *)(puVar4 + 6) = uVar7;
      bVar5 = *(byte *)((int)puVar9 + 0x1a);
      if (*(byte *)((int)puVar9 + 0x1a) < *(byte *)((int)param_4 + 0x1a)) {
        bVar5 = *(byte *)((int)param_4 + 0x1a);
      }
      *(byte *)((int)puVar4 + 0x1a) = bVar5;
      uVar7 = (ushort)puVar9[0xd];
      if ((ushort)puVar9[0xd] < (ushort)param_4[0xd]) {
        uVar7 = (ushort)param_4[0xd];
      }
      *(ushort *)(puVar4 + 0xd) = uVar7;
      uVar7 = *(ushort *)((int)puVar9 + 0x36);
      if (*(ushort *)((int)puVar9 + 0x36) < *(ushort *)((int)param_4 + 0x36)) {
        uVar7 = *(ushort *)((int)param_4 + 0x36);
      }
      *(ushort *)((int)puVar4 + 0x36) = uVar7;
      uVar7 = (ushort)puVar9[0xe];
      if ((ushort)param_4[0xe] <= (ushort)puVar9[0xe]) {
        uVar7 = (ushort)param_4[0xe];
      }
      *(ushort *)(puVar4 + 0xe) = uVar7;
      bVar5 = *(byte *)((int)puVar9 + 0x3a);
      if (*(byte *)((int)puVar9 + 0x3a) < *(byte *)((int)param_4 + 0x3a)) {
        bVar5 = *(byte *)((int)param_4 + 0x3a);
      }
      *(byte *)((int)puVar4 + 0x3a) = bVar5;
      puVar4 = puVar4 + 2;
      puVar9 = puVar8;
      param_4 = param_4 + 2;
    } while (puVar8 != param_3 + 8);
  }
  uVar6 = 1;
LAB_000159dc:
  *(undefined1 *)(param_5 + 0x17) = uVar6;
  iVar1 = is_valid_reg_rule(param_5);
  if (iVar1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== regdom_intersect.part.8 @ 00015a3a size=382 ===== */

int regdom_intersect_part_8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_88;
  uint local_84;
  uint uStack_80;
  uint local_7c;
  uint local_78;
  int local_34;
  
  iVar8 = param_1 + 0x14;
  uVar5 = 0;
  iVar1 = iVar8;
  for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 8); uVar6 = uVar6 + 1) {
    iVar3 = param_2 + 0x14;
    for (uVar7 = 0; uVar7 < *(uint *)(param_2 + 8); uVar7 = uVar7 + 1) {
      iVar2 = reg_rules_intersect(param_1,param_2,iVar1,iVar3,&local_88);
      if (iVar2 == 0) {
        uVar5 = uVar5 + 1;
      }
      iVar3 = iVar3 + 0x60;
    }
    iVar1 = iVar1 + 0x60;
  }
  if (uVar5 != 0) {
    uVar6 = (uint)((ulonglong)uVar5 * 0x60);
    if ((int)((ulonglong)uVar5 * 0x60 >> 0x20) == 0) {
      iVar1 = uVar6 + 0x14;
      if (0xffffffeb < uVar6) {
        iVar1 = -1;
      }
    }
    else {
      iVar1 = -1;
    }
    iVar1 = kzalloc(iVar1,0xcc0);
    if (iVar1 != 0) {
      uVar5 = 0;
      do {
        if (*(uint *)(param_1 + 8) <= uVar5) {
          iVar8 = *(int *)(param_1 + 0x10);
          *(undefined2 *)(iVar1 + 0xc) = 0x3839;
          iVar3 = *(int *)(param_2 + 0x10);
          if (iVar8 != iVar3) {
            iVar3 = 0;
          }
          *(int *)(iVar1 + 0x10) = iVar3;
          return iVar1;
        }
        iVar3 = param_2 + 0x14;
        for (uVar6 = 0; uVar6 < *(uint *)(param_2 + 8); uVar6 = uVar6 + 1) {
          iVar2 = reg_rules_intersect(param_1,param_2,iVar8,iVar3,&local_88);
          if (iVar2 == 0) {
            iVar4 = iVar1;
            for (iVar2 = 0; iVar2 != *(int *)(iVar1 + 8); iVar2 = iVar2 + 1) {
              if (*(int *)(iVar4 + 0x68) == local_34) {
                if (*(uint *)(iVar4 + 0x20) <= local_7c) {
                  if ((((*(uint *)(iVar4 + 0x24) <= local_78) &&
                       (*(uint *)(iVar4 + 0x14) <= local_88)) &&
                      (local_84 <= *(uint *)(iVar4 + 0x18))) &&
                     (uStack_80 <= *(uint *)(iVar4 + 0x1c))) goto LAB_00015ba8;
                  if (*(uint *)(iVar4 + 0x20) < local_7c) goto LAB_00015bb2;
                }
                if (((local_78 <= *(uint *)(iVar4 + 0x24)) && (local_88 <= *(uint *)(iVar4 + 0x14)))
                   && ((*(uint *)(iVar4 + 0x18) <= local_84 &&
                       (*(uint *)(iVar4 + 0x1c) <= uStack_80)))) {
                  memcpy((void *)(iVar4 + 0x14),&local_88,0x60);
                  goto LAB_00015ba8;
                }
              }
LAB_00015bb2:
              iVar4 = iVar4 + 0x60;
            }
            memcpy((void *)(iVar2 * 0x60 + iVar1 + 0x14),&local_88,0x60);
            *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
          }
LAB_00015ba8:
          iVar3 = iVar3 + 0x60;
        }
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + 0x60;
      } while( true );
    }
  }
  return 0;
}



/* ===== reg_last_request_cell_base @ 00015bb8 size=24 ===== */

bool reg_last_request_cell_base(void)

{
  if (*(int *)(*DAT_00015bd0 + 0xc) == 1) {
    return *(int *)(*DAT_00015bd0 + 0x10) == 1;
  }
  return false;
}



/* ===== reg_dfs_domain_same @ 00015bd4 size=38 ===== */

bool reg_dfs_domain_same(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xec);
  if (*(int *)(param_1 + 0xec) == 0) {
    iVar1 = *DAT_00015bfc;
  }
  iVar2 = *(int *)(param_2 + 0xec);
  if (*(int *)(param_2 + 0xec) == 0) {
    iVar2 = *DAT_00015bfc;
  }
  return *(int *)(iVar1 + 0x10) == *(int *)(iVar2 + 0x10);
}



/* ===== wiphy_all_share_dfs_chan_state @ 00015c00 size=186 ===== */

void wiphy_all_share_dfs_chan_state(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *local_30;
  
  rtnl_is_locked();
  puVar1 = DAT_00015cbc;
  for (puVar6 = (undefined4 *)*DAT_00015cbc; puVar6 != puVar1; puVar6 = (undefined4 *)*puVar6) {
    if ((puVar6 + 0x67 != param_1) && (iVar2 = reg_dfs_domain_same(param_1), iVar2 != 0)) {
      puVar10 = puVar6 + 0x9c;
      local_30 = param_1 + 0x35;
      do {
        piVar9 = (int *)*puVar10;
        puVar4 = local_30 + 1;
        piVar7 = (int *)*local_30;
        if ((piVar7 != (int *)0x0) && (piVar9 != (int *)0x0)) {
          for (iVar2 = 0; iVar2 < piVar7[3]; iVar2 = iVar2 + 1) {
            iVar5 = iVar2 * 0x38 + *piVar7;
            for (iVar8 = 0; iVar8 < piVar9[3]; iVar8 = iVar8 + 1) {
              if ((int)(*(uint *)(iVar5 + 0xc) << 0x1c) < 0) {
                iVar3 = iVar8 * 0x38 + *piVar9;
                if (((((*(uint *)(iVar3 + 0xc) & 8) != 0) &&
                     (-1 < (int)((*(uint *)(iVar5 + 0xc) | *(uint *)(iVar3 + 0xc)) << 0x1f))) &&
                    (*(int *)(iVar3 + 4) == *(int *)(iVar5 + 4))) && (*(int *)(iVar5 + 0x2c) == 0))
                {
                  *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
                  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar3 + 0x30);
                }
              }
            }
          }
        }
        puVar10 = puVar10 + 1;
        local_30 = puVar4;
      } while (puVar4 != param_1 + 0x3a);
    }
  }
  return;
}



/* ===== reg_todo @ 00015cc0 size=738 ===== */

void reg_todo(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uStack_30;
  int local_2c;
  undefined4 uStack_28;
  
  uStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  rtnl_lock();
  iVar5 = DAT_00015fb0;
  piVar2 = DAT_00015fac;
  if (((*DAT_00015fac != 0) && (*(char *)(*DAT_00015fac + 0x1d) == '\0')) ||
     (DAT_00015fac[1] == DAT_00015fb0)) goto LAB_00015cdc;
  piVar8 = (int *)DAT_00015fac[1];
  piVar11 = piVar8 + -9;
  iVar4 = *piVar8;
  piVar6 = (int *)piVar8[1];
  *(int **)(iVar4 + 4) = piVar6;
  *piVar6 = iVar4;
  *piVar8 = (int)piVar8;
  piVar8[1] = (int)piVar8;
  notify_self_managed_wiphys(piVar11);
  uVar10 = piVar8[-6];
  if (piVar8[-7] == -1) {
    if (uVar10 != 0) {
      if ((uVar10 == 1) && ((iVar4 = *piVar2, piVar8[-6] != 1 || (piVar8[-5] != 1)))) {
        uVar10 = *(uint *)(iVar4 + 0xc);
        if (uVar10 == 1) {
          if ((*(int *)(iVar4 + 0x10) != 1) && (*(char *)(iVar4 + 0x1c) == '\0')) {
LAB_00015dd4:
            iVar4 = regdom_changes(iVar4 + 0x14);
            if (iVar4 == 0) goto LAB_00015d7a;
          }
        }
        else {
          if (uVar10 == 3) {
            uVar1 = 1;
          }
          else {
            if (uVar10 < 3) goto LAB_00015dd4;
LAB_00015d7a:
            iVar4 = regdom_changes(piVar8 + -4);
            if (iVar4 == 0) goto switchD_00015d4c_default;
            uVar1 = 0;
          }
          *(undefined1 *)(piVar8 + -2) = uVar1;
          *(undefined1 *)((int)piVar8 + -7) = 0;
          iVar4 = reg_query_database(piVar11);
          if (iVar4 != 0) {
            reg_update_last_request(piVar11);
            iVar4 = DAT_00015fb8;
            *(char *)(DAT_00015fb8 + 0x14) = (char)piVar8[-4];
            *(undefined1 *)(iVar4 + 0x15) = *(undefined1 *)((int)piVar8 + -0xf);
            goto LAB_00015dba;
          }
        }
      }
      goto switchD_00015d4c_default;
    }
    iVar4 = reg_query_database(piVar11);
    if (iVar4 == 0) goto switchD_00015d4c_default;
    *(undefined1 *)(piVar8 + -2) = 0;
    *(undefined1 *)((int)piVar8 + -7) = 0;
    reg_update_last_request(piVar11);
  }
  else {
    wiphy_idx_to_wiphy();
    if (uVar10 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00015d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&switchD_00015d4c::switchdataD_00015d50 +
                (&switchD_00015d4c::switchdataD_00015d50)[uVar10]))();
      return;
    }
switchD_00015d4c_default:
    if ((piVar11 != DAT_00015fc0) && (piVar11 != (int *)*piVar2)) {
      kfree(piVar11);
    }
  }
LAB_00015dba:
  if (((piVar2[1] != iVar5) && (*piVar2 != 0)) && (*(char *)(*piVar2 + 0x1d) != '\0')) {
    schedule_work(DAT_00015fbc);
  }
LAB_00015cdc:
  *(int *)(((uint)&uStack_30 & 0xffffe000) + 4) =
       *(int *)(((uint)&uStack_30 & 0xffffe000) + 4) + 0x200;
  puVar3 = DAT_00015fcc;
  piVar6 = DAT_00015fc8;
  piVar8 = (int *)piVar2[0x34];
  piVar11 = *(int **)piVar2[0x34];
  while (piVar8 != piVar6) {
    iVar5 = *piVar8;
    piVar7 = (int *)piVar8[1];
    *(int **)(iVar5 + 4) = piVar7;
    *piVar7 = iVar5;
    *piVar8 = (int)piVar8;
    puVar9 = (undefined4 *)*puVar3;
    piVar8[1] = (int)piVar8;
    for (; iVar5 = DAT_00015fc4, puVar9 != puVar3; puVar9 = (undefined4 *)*puVar9) {
      if (puVar9[piVar8[2] + 0x9c] != 0) {
        iVar5 = puVar9[piVar8[2] + 0x9c];
        for (uVar10 = 0; uVar10 < *(uint *)(iVar5 + 0xc); uVar10 = uVar10 + 1) {
          local_2c = iVar5;
          handle_reg_beacon(puVar9 + 0x67,uVar10,piVar8);
          iVar5 = local_2c;
        }
      }
    }
    puVar9 = (undefined4 *)piVar2[0x33];
    piVar2[0x33] = (int)piVar8;
    *piVar8 = iVar5;
    piVar8[1] = (int)puVar9;
    *puVar9 = piVar8;
    piVar8 = piVar11;
    piVar11 = (int *)*piVar11;
  }
  __local_bh_enable_ip(DAT_00015fb4,0x200);
  reg_process_self_managed_hints();
  rtnl_unlock();
  return;
}



/* ===== regulatory_hint_user @ 00015fd0 size=80 ===== */

undefined4 regulatory_hint_user(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_1 == (undefined1 *)0x0) ||
     ((iVar3 = is_world_regdom(), iVar3 == 0 && (iVar3 = is_an_alpha2(param_1), iVar3 == 0)))) {
    uVar4 = 0xffffffea;
  }
  else {
    iVar3 = kzalloc(0x2c,0xcc0);
    if (iVar3 == 0) {
      uVar4 = 0xfffffff4;
    }
    else {
      *(undefined4 *)(iVar3 + 8) = 0xffffffff;
      iVar2 = DAT_00016020;
      *(undefined1 *)(iVar3 + 0x14) = *param_1;
      uVar1 = param_1[1];
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined1 *)(iVar3 + 0x15) = uVar1;
      *(undefined4 *)(iVar3 + 0xc) = 1;
      *(undefined4 *)(iVar3 + 0x10) = param_2;
      queue_regulatory_request();
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* ===== regulatory_hint_indoor @ 00016024 size=28 ===== */

undefined4 regulatory_hint_indoor(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00016040;
  *(char *)(DAT_00016040 + 0x16) = (char)param_1;
  if (param_1 == 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  else if (*(int *)(iVar1 + 0x18) == 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_2;
  }
  if (param_1 == 0) {
    reg_check_channels();
  }
  return 0;
}



/* ===== regulatory_netlink_notify @ 00016044 size=20 ===== */

void regulatory_netlink_notify(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00016058;
  if (*(int *)(DAT_00016058 + 0x18) != param_1) {
    return;
  }
  *(undefined1 *)(DAT_00016058 + 0x16) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  reg_check_channels();
  return;
}



/* ===== regulatory_hint_country_ie @ 0001605c size=116 ===== */

void regulatory_hint_country_ie
               (undefined4 param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (((-1 < (int)(param_4 << 0x1f)) && (5 < param_4)) && (iVar3 = kzalloc(0x2c,0xcc0), iVar3 != 0))
  {
    uVar2 = *param_3;
    uVar1 = param_3[1];
    if (param_3[2] == 'I') {
      uVar6 = 1;
    }
    else if (param_3[2] == 'O') {
      uVar6 = 2;
    }
    else {
      uVar6 = 0;
    }
    iVar5 = *DAT_000160d0;
    if ((iVar5 != 0) && ((*(int *)(iVar5 + 0xc) != 3 || (*(int *)(iVar5 + 8) == -1)))) {
      uVar4 = get_wiphy_idx(param_1);
      *(undefined4 *)(iVar3 + 0xc) = 3;
      iVar5 = DAT_000160d4;
      *(undefined4 *)(iVar3 + 0x20) = uVar6;
      *(undefined1 *)(iVar3 + 0x14) = uVar2;
      *(undefined1 *)(iVar3 + 0x15) = uVar1;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 8) = uVar4;
      queue_regulatory_request(iVar3);
      iVar3 = 0;
    }
    kfree(iVar3);
  }
  return;
}



/* ===== regulatory_hint_found_beacon @ 000160d8 size=246 ===== */

undefined4 regulatory_hint_found_beacon(undefined4 param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar11;
  int *piVar10;
  
  uVar5 = DAT_000161d0;
  if (((char)param_2[7] == '\0') && (-1 < param_2[3] << 0x1c)) {
    if (*param_2 == 0) {
      uVar11 = param_2[1];
      uVar3 = ieee80211_channel_to_freq_khz(0xc,0);
      if (((uVar11 != (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x26)) &&
          (uVar3 = ieee80211_channel_to_freq_khz(0xd,0),
          uVar11 != (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x26))) &&
         (uVar3 = ieee80211_channel_to_freq_khz(0xe,0),
         uVar11 != (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x26))) {
        return 0;
      }
    }
    uVar5 = (uint)&stack0xffffffe8 & 0xffffe000;
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 0x200;
    iVar2 = DAT_000161d4;
    iVar4 = DAT_000161d4 + 0xd0;
    for (piVar6 = *(int **)(DAT_000161d4 + 0xd0); bVar1 = false, piVar6 != (int *)iVar4;
        piVar6 = (int *)*piVar6) {
      if ((param_2[1] == piVar6[3]) && ((short)param_2[2] == *(short *)(piVar6 + 4))) {
        bVar1 = true;
        break;
      }
    }
    __local_bh_enable_ip(DAT_000161d8,0x200);
    if (!bVar1) {
      piVar6 = (int *)kzalloc(0x40,param_3);
      if (piVar6 == (int *)0x0) {
        return 0xfffffff4;
      }
      piVar7 = piVar6 + 2;
      piVar9 = param_2;
      do {
        piVar10 = piVar9 + 1;
        *piVar7 = *piVar9;
        piVar7 = piVar7 + 1;
        piVar9 = piVar10;
      } while (piVar10 != param_2 + 0xe);
      uVar5 = (uint)&stack0xffffffe8 & 0xffffe000;
      *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 0x200;
      puVar8 = *(undefined4 **)(iVar2 + 0xd4);
      *(int **)(iVar2 + 0xd4) = piVar6;
      *piVar6 = iVar4;
      piVar6[1] = (int)puVar8;
      *puVar8 = piVar6;
      __local_bh_enable_ip(DAT_000161dc,0x200);
      schedule_work(DAT_000161e0);
    }
  }
  return 0;
}



/* ===== reg_supported_dfs_region @ 000161e4 size=10 ===== */

bool reg_supported_dfs_region(uint param_1)

{
  return param_1 < 4;
}



/* ===== set_regdom @ 000161ee size=480 ===== */

undefined4 set_regdom(int param_1,int param_2)

{
  int iVar1;
  int extraout_r3;
  undefined4 uVar2;
  
  iVar1 = IS_ERR_OR_NULL();
  if (iVar1 == 0) {
    iVar1 = reg_is_valid_request(param_1 + 0xc);
    if (iVar1 != 0) {
      iVar1 = extraout_r3;
      if (param_2 == 1) {
        iVar1 = DAT_000163d4;
      }
      if (param_2 == 1) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      if (*(uint *)(*DAT_000163d8 + 0xc) < 4) {
                    /* WARNING: Could not recover jumptable at 0x0001622c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&switchD_0001622c::switchdataD_00016230 +
                          (uint)(&switchD_0001622c::switchdataD_00016230)
                                [*(uint *)(*DAT_000163d8 + 0xc)] * 2))();
        return uVar2;
      }
    }
    kfree(param_1);
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 0xffffffc3;
  }
  return uVar2;
}



/* ===== restore_regulatory_settings @ 000163e0 size=544 ===== */

void restore_regulatory_settings(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 extraout_r1;
  undefined1 extraout_r1_00;
  undefined1 uVar6;
  int ***pppiVar7;
  undefined1 *extraout_r2;
  int ***pppiVar8;
  int iVar9;
  int ****ppppiVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar15;
  int **local_40;
  int local_3c;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  int ***local_30;
  int ***local_2c;
  undefined4 *puVar14;
  
  local_3c = param_2;
  local_30 = (int ***)&local_30;
  local_2c = (int ***)&local_30;
  rtnl_is_locked();
  puVar1 = DAT_00016600;
  if ((*(char *)((int)DAT_00016600 + 0x16) != '\0') && (DAT_00016600[6] == 0)) {
    *(undefined1 *)((int)DAT_00016600 + 0x16) = 0;
    reg_check_channels();
  }
  reset_regdomains(1,DAT_00016604);
  iVar2 = DAT_00016608;
  local_34 = 0x39;
  local_33 = 0x37;
  if (((*(char *)(puVar1 + 5) != '9') || (*(char *)((int)puVar1 + 0x15) != '7')) &&
     ((iVar4 = is_world_regdom(DAT_0001660c), uVar6 = extraout_r1, iVar4 != 0 ||
      (iVar4 = is_an_alpha2(DAT_0001660c), uVar6 = extraout_r1_00, iVar4 != 0)))) {
    if (param_1 == 0) {
      local_33 = *(undefined1 *)((int)puVar1 + 0x15);
      local_34 = uVar6;
      goto LAB_00016462;
    }
    *(undefined1 *)(puVar1 + 5) = 0x39;
    *(undefined1 *)((int)puVar1 + 0x15) = 0x37;
  }
  iVar4 = is_world_regdom(*(undefined4 *)(iVar2 + 0xd8));
  if (iVar4 == 0) {
    local_33 = extraout_r2[1];
    local_34 = *extraout_r2;
  }
LAB_00016462:
  pppiVar8 = DAT_00016610;
  local_40 = (int **)DAT_00016610;
  if (*(int ****)(iVar2 + 4) != DAT_00016610) {
    pppiVar7 = *(int ****)(iVar2 + 4);
    ppppiVar10 = *(int *****)(iVar2 + 8);
    pppiVar7[1] = (int **)local_2c;
    *local_2c = (int **)pppiVar7;
    *ppppiVar10 = (int ***)&local_30;
    *(int ****)(iVar2 + 4) = pppiVar8;
    *(int ****)(iVar2 + 8) = pppiVar8;
    local_2c = (int ***)ppppiVar10;
  }
  *(int *)(((uint)&local_40 & 0xffffe000) + 4) =
       *(int *)(((uint)&local_40 & 0xffffe000) + 4) + 0x200;
  iVar4 = DAT_00016624;
  piVar15 = *(int **)(iVar2 + 0xd0);
  piVar12 = (int *)**(int **)(iVar2 + 0xd0);
  while (piVar15 != (int *)iVar4) {
    list_del(piVar15);
    kfree();
    piVar15 = piVar12;
    piVar12 = (int *)*piVar12;
  }
  __local_bh_enable_ip(DAT_00016614,0x200);
  iVar4 = DAT_00016628;
  piVar15 = *(int **)(iVar2 + 200);
  piVar12 = (int *)**(int **)(iVar2 + 200);
  while (puVar3 = DAT_00016618, piVar15 != (int *)iVar4) {
    list_del(piVar15);
    kfree();
    piVar15 = piVar12;
    piVar12 = (int *)*piVar12;
  }
  local_32 = *(undefined1 *)(*(int *)(iVar2 + 0xc4) + 0xc);
  local_31 = *(undefined1 *)(*(int *)(iVar2 + 0xc4) + 0xd);
  for (puVar11 = (undefined4 *)*DAT_00016618; puVar11 != puVar3; puVar11 = (undefined4 *)*puVar11) {
    if ((-1 < (int)(puVar11[0x71] << 0x18)) && ((int)(puVar11[0x71] << 0x1f) < 0)) {
      puVar13 = puVar11 + 0x9c;
      do {
        puVar14 = puVar13 + 1;
        piVar15 = (int *)*puVar13;
        if (piVar15 != (int *)0x0) {
          for (iVar4 = 0; iVar4 < piVar15[3]; iVar4 = iVar4 + 1) {
            iVar9 = iVar4 * 0x38 + *piVar15;
            *(undefined1 *)(iVar9 + 0x1c) = 0;
            *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar9 + 0x20);
            *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar9 + 0x24);
            *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar9 + 0x28);
          }
        }
        puVar13 = puVar14;
      } while (puVar11 + 0xa1 != puVar14);
    }
  }
  if ((local_3c == 0) ||
     ((iVar4 = is_an_alpha2(&local_34), iVar4 != 0 &&
      (iVar4 = IS_ERR_OR_NULL(puVar1[7]), iVar4 != 0)))) {
    regulatory_hint_core(&local_32);
    iVar4 = is_an_alpha2(&local_34);
    if (iVar4 != 0) {
      regulatory_hint_user(&local_34,0);
    }
  }
  else {
    reset_regdomains(0);
    update_all_wiphy_regulatory(0);
    print_regdomain(*puVar1);
    nl80211_common_reg_change_event(0x24,DAT_0001661c);
    reg_set_request_processed();
    iVar4 = is_an_alpha2(&local_34);
    if ((iVar4 != 0) && (iVar4 = regulatory_hint_user(&local_34,0), iVar4 == 0)) {
      iVar4 = *(int *)(iVar2 + 8) + -0x24;
      list_del();
      notify_self_managed_wiphys(iVar4);
      reg_update_last_request(iVar4);
      uVar5 = reg_copy_regd(puVar1[7]);
      set_regdom(uVar5,2);
    }
  }
  if ((int ****)local_30 != &local_30) {
    pppiVar8 = *(int ****)(iVar2 + 8);
    local_30[1] = (int **)pppiVar8;
    *pppiVar8 = (int **)local_30;
    *local_2c = local_40;
    *(int ****)(iVar2 + 8) = local_2c;
    local_30 = (int ***)&local_30;
    local_2c = (int ***)&local_30;
  }
  schedule_work(DAT_00016620);
  return;
}



/* ===== regdb_fw_cb @ 0001662c size=128 ===== */

void regdb_fw_cb(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = -0x3d;
    printk(DAT_000166ac);
  }
  else {
    iVar2 = valid_regdb(param_1[1],*param_1);
    if (iVar2 == 0) {
      iVar2 = -0x16;
      printk(DAT_000166b4);
    }
    else {
      iVar2 = 0;
    }
  }
  iVar1 = DAT_000166b0;
  rtnl_lock();
  if ((*(uint *)(iVar1 + 4) == 0) || (0xfffff000 < *(uint *)(iVar1 + 4))) {
    if (iVar2 == 0) {
      if (((param_1 != (undefined4 *)0x0) &&
          (iVar2 = kmemdup(param_1[1],*param_1,0xcc0), iVar2 != 0)) &&
         ((*(int *)(iVar1 + 4) = iVar2, param_2 == 0 || (iVar2 = query_regdb(param_2), iVar2 == 0)))
         ) goto LAB_00016698;
    }
    else {
      *(int *)(iVar1 + 4) = iVar2;
    }
  }
  restore_regulatory_settings(1,0);
LAB_00016698:
  rtnl_unlock();
  kfree(param_2);
  release_firmware(param_1);
  return;
}



/* ===== crda_timeout_work @ 000166b8 size=30 ===== */

void crda_timeout_work(void)

{
  rtnl_lock();
  *(int *)(DAT_000166d8 + 0x10) = *(int *)(DAT_000166d8 + 0x10) + 1;
  restore_regulatory_settings(1,0);
  rtnl_unlock();
  return;
}



/* ===== regulatory_hint_disconnect @ 000166dc size=116 ===== */

void regulatory_hint_disconnect(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = is_wiphy_all_set_reg_flag(0x10);
  if (iVar1 != 0) {
    iVar1 = is_wiphy_all_set_reg_flag(4);
    if (iVar1 == 0) {
      *(int *)(((uint)&stack0xfffffff0 & 0xffffe000) + 4) =
           *(int *)(((uint)&stack0xfffffff0 & 0xffffe000) + 4) + 0x200;
      iVar1 = DAT_00016750;
      iVar4 = DAT_00016750 + 0xd0;
      piVar2 = *(int **)(DAT_00016750 + 0xd0);
      piVar3 = (int *)**(int **)(DAT_00016750 + 0xd0);
      while (piVar2 != (int *)iVar4) {
        list_del(piVar2);
        kfree();
        piVar2 = piVar3;
        piVar3 = (int *)*piVar3;
      }
      __local_bh_enable_ip(DAT_00016754,0x200);
      iVar4 = DAT_00016758;
      piVar2 = *(int **)(iVar1 + 200);
      piVar3 = (int *)**(int **)(iVar1 + 200);
      while (piVar2 != (int *)iVar4) {
        list_del(piVar2);
        kfree();
        piVar2 = piVar3;
        piVar3 = (int *)*piVar3;
      }
    }
    return;
  }
  restore_regulatory_settings(0,1);
  return;
}



/* ===== reg_regdb_apply @ 0001675c size=62 ===== */

void reg_regdb_apply(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  rtnl_lock();
  mutex_lock(DAT_0001679c);
  iVar1 = DAT_000167a0;
  iVar3 = DAT_000167a0 + 0x54;
  while (*(int *)(iVar1 + 0x54) != iVar3) {
    iVar2 = *(int *)(iVar1 + 0x54);
    list_del(iVar2);
    set_regdom(*(undefined4 *)(iVar2 + 8),0);
    kfree(iVar2);
  }
  mutex_unlock(DAT_0001679c);
  rtnl_unlock();
  return;
}



/* ===== wiphy_regulatory_register @ 000167a4 size=54 ===== */

void wiphy_regulatory_register(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_000167dc;
  if ((int)(*(uint *)(param_1 + 0x28) << 0x18) < 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x14;
    if (*(int *)(iVar1 + 0xc) == 1) {
      reg_call_notifier(param_1,iVar1);
    }
  }
  wiphy_update_regulatory(param_1,*(undefined4 *)(iVar1 + 0xc));
  wiphy_all_share_dfs_chan_state(param_1);
  reg_process_self_managed_hints();
  return;
}



/* ===== wiphy_regulatory_deregister @ 000167e0 size=46 ===== */

void wiphy_regulatory_deregister(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_00016810;
  rcu_free_regdom(*(undefined4 *)(param_1 + 0xec));
  *(undefined4 *)(param_1 + 0xec) = 0;
  if ((iVar2 != 0) && (iVar1 = wiphy_idx_to_wiphy(*(undefined4 *)(iVar2 + 8)), iVar1 != 0)) {
    if (param_1 == iVar1) {
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 8) = 0xffffffff;
    }
  }
  return;
}



/* ===== cfg80211_get_unii @ 00016814 size=134 ===== */

undefined4 cfg80211_get_unii(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 0x141eU < 0x65) {
    return 0;
  }
  if (param_1 - 0x1483U < 100) {
    return 1;
  }
  if (param_1 - 0x14e7U < 0x78) {
    return 2;
  }
  if (param_1 - 0x155fU < 0xff) {
    return 3;
  }
  if (param_1 - 0x165eU < 100) {
    return 4;
  }
  if (param_1 - 0x1726U < 500) {
    return 5;
  }
  if (param_1 - 0x191aU < 100) {
    return 6;
  }
  if (param_1 - 0x197eU < 0x15e) {
    return 7;
  }
  if (param_1 - 0x1adcU < 0xfa) {
    uVar1 = 8;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== regulatory_indoor_allowed @ 0001689a size=6 ===== */

undefined1 regulatory_indoor_allowed(void)

{
  return *(undefined1 *)(DAT_000168a0 + 0x16);
}



/* ===== regulatory_propagate_dfs_state @ 000168a4 size=192 ===== */

void regulatory_propagate_dfs_state
               (undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  rtnl_is_locked();
  iVar2 = cfg80211_chandef_valid(param_2);
  puVar1 = DAT_00016964;
  if (iVar2 != 0) {
    for (puVar4 = (undefined4 *)*DAT_00016964; piVar5 = puVar4 + -1, puVar4 != puVar1;
        puVar4 = (undefined4 *)*puVar4) {
      puVar6 = puVar4 + 0x67;
      if (((puVar6 != param_1) && (iVar2 = reg_dfs_domain_same(param_1,puVar6), iVar2 != 0)) &&
         (iVar2 = ieee80211_get_channel_khz(puVar6,*(int *)(*param_2 + 4) * 1000), iVar2 != 0)) {
        cfg80211_set_dfs_state(puVar6,param_2,param_3);
        if (param_4 < 2) {
          cfg80211_sched_dfs_chan_update(piVar5);
          for (piVar3 = (int *)puVar4[0x10d]; piVar3 != puVar4 + 0x10d; piVar3 = (int *)*piVar3) {
            if (((*(char *)((int)piVar3 + 0xd5) != '\0') &&
                (iVar2 = cfg80211_chandef_dfs_usable(puVar6,piVar3 + 0x29), iVar2 == 0)) &&
               (*(code **)(*piVar5 + 0x148) != (code *)0x0)) {
              (**(code **)(*piVar5 + 0x148))(puVar6,piVar3[2]);
            }
          }
        }
        nl80211_radar_notify(piVar5,param_2,param_4,0,0xcc0);
      }
    }
  }
  return;
}



/* ===== regulatory_exit @ 00016968 size=202 ===== */

void regulatory_exit(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar7;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar2 = DAT_00016a38;
  iVar4 = DAT_00016a34;
  iVar9 = DAT_00016a34 + 0xd0;
  cancel_work_sync(DAT_00016a34 + 0x38);
  cancel_delayed_work_sync(iVar4 + 0xc);
  cancel_delayed_work_sync(iVar4 + 0x6c);
  rtnl_lock();
  reset_regdomains(1,0);
  rtnl_unlock();
  *(byte *)(*(int *)(iVar2 + 8) + 0x30) = *(byte *)(*(int *)(iVar2 + 8) + 0x30) | 0x10;
  platform_device_unregister();
  piVar5 = *(int **)(iVar4 + 0xd0);
  piVar8 = (int *)**(int **)(iVar4 + 0xd0);
  while (iVar3 = DAT_00016a3c, piVar5 != (int *)iVar9) {
    list_del(piVar5);
    kfree();
    piVar5 = piVar8;
    piVar8 = (int *)*piVar8;
  }
  piVar5 = *(int **)(iVar4 + 200);
  piVar8 = (int *)**(int **)(iVar4 + 200);
  while (iVar9 = DAT_00016a40, piVar5 != (int *)iVar3) {
    list_del(piVar5);
    kfree();
    piVar5 = piVar8;
    piVar8 = (int *)*piVar8;
  }
  piVar8 = (int *)**(int **)(iVar4 + 4);
  piVar5 = *(int **)(iVar4 + 4);
  while (piVar1 = piVar8, piVar5 != (int *)iVar9) {
    list_del();
    kfree(extraout_r1_00);
    piVar8 = (int *)*piVar1;
    piVar5 = piVar1;
  }
  iVar4 = IS_ERR_OR_NULL(*(undefined4 *)(iVar2 + 4));
  if (iVar4 == 0) {
    kfree(extraout_r3);
  }
  uVar10 = IS_ERR_OR_NULL(*(undefined4 *)(iVar2 + 0x1c));
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar7 = extraout_r2;
  if ((int)uVar10 == 0) {
    kfree(extraout_r3_00);
    uVar6 = extraout_r1;
    uVar7 = extraout_r2_00;
  }
  key_put(*(undefined4 *)(iVar2 + 0xc),uVar6,uVar7,in_r3);
  return;
}



/* ===== rdev_scan @ 00016a44 size=12 ===== */

void rdev_scan(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00016a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x94))(param_1 + 0x68);
  return;
}



/* ===== cfg80211_is_element_inherited @ 00016a50 size=80 ===== */

undefined4 cfg80211_is_element_inherited(char *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  cVar3 = *param_1;
  if (cVar3 == 'G') {
    return 0;
  }
  if ((param_2 != 0) && (uVar4 = (uint)*(byte *)(param_2 + 1), 1 < uVar4)) {
    uVar2 = (uint)*(byte *)(param_2 + 3);
    if ((uVar2 + 3 <= uVar4) &&
       (uVar1 = (uint)*(byte *)(param_2 + uVar2 + 4), uVar2 + 3 + uVar1 <= uVar4)) {
      if (cVar3 == -1) {
        if (uVar1 == 0) {
          return 1;
        }
        cVar3 = param_1[2];
        param_2 = param_2 + uVar2 + 5;
        uVar2 = uVar1;
      }
      else {
        if (uVar2 == 0) {
          return 1;
        }
        param_2 = param_2 + 4;
      }
      uVar4 = 0;
      do {
        if (*(char *)(param_2 + uVar4) == cVar3) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xff) < uVar2);
    }
  }
  return 1;
}



/* ===== cfg80211_bss_type_match @ 00016aa0 size=54 ===== */

bool cfg80211_bss_type_match(uint param_1,int param_2,uint param_3)

{
  if (param_3 == 4) {
    return true;
  }
  if (param_2 == 2) {
    if (2 < param_3) {
      return false;
    }
    param_3 = (uint)*(byte *)(DAT_00016ad8 + param_3);
  }
  else if (param_3 != 2) {
    if (param_3 == 3) {
      param_3 = 0;
    }
    else {
      if (param_3 != 0) {
        return false;
      }
      param_3 = 1;
    }
  }
  return (param_1 & 3) == param_3;
}



/* ===== cfg80211_find_elem_match @ 00016adc size=80 ===== */

byte * cfg80211_find_elem_match
                 (uint param_1,byte *param_2,int param_3,void *param_4,size_t param_5,int param_6)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = param_2;
  while( true ) {
    if (((int)(param_2 + (param_3 - (int)pbVar2)) < 2) ||
       (uVar3 = (uint)pbVar2[1], (int)(param_2 + (param_3 - (int)pbVar2)) < (int)(uVar3 + 2))) {
      return (byte *)0x0;
    }
    if ((*pbVar2 == param_1) &&
       ((param_6 + param_5 <= uVar3 &&
        (iVar1 = memcmp(pbVar2 + param_6 + 2,param_4,param_5), iVar1 == 0)))) break;
    pbVar2 = pbVar2 + uVar3 + 2;
  }
  return pbVar2;
}



/* ===== cfg80211_find_elem @ 00016b2c size=18 ===== */

void cfg80211_find_elem(void)

{
  cfg80211_find_elem_match();
  return;
}



/* ===== cfg80211_merge_profile @ 00016b3e size=144 ===== */

uint cfg80211_merge_profile
               (int param_1,int param_2,int param_3,int param_4,void *param_5,uint param_6)

{
  int iVar1;
  uint __n;
  int iVar2;
  uint __n_00;
  int iVar3;
  int iVar4;
  
  __n_00 = (uint)*(byte *)(param_4 + 1);
  if (param_6 < __n_00) {
    __n_00 = 0;
  }
  else {
    iVar3 = param_1;
    iVar4 = param_3;
    memcpy(param_5,(void *)(param_4 + 2),__n_00);
    while( true ) {
      iVar2 = (uint)*(byte *)(param_3 + 1) + param_3 + 2;
      iVar1 = cfg80211_find_elem(0x47,iVar2,param_2 - (iVar2 - param_1),iVar2,iVar3,iVar2,iVar4);
      if ((((uint)*(byte *)(param_4 + 1) + param_4 + 2 < iVar2 - 1U) || (iVar1 == 0)) ||
         (*(byte *)(iVar1 + 1) < 4)) break;
      __n = (uint)*(byte *)(iVar1 + 4);
      if (iVar1 + 2 + (uint)*(byte *)(iVar1 + 1) < iVar1 + 5 + __n) {
        return __n_00;
      }
      if (*(char *)(iVar1 + 3) != '\0') {
        return __n_00;
      }
      if (__n < 2) {
        return __n_00;
      }
      if (*(char *)(iVar1 + 5) == 'S') {
        return __n_00;
      }
      if (param_6 < __n_00 + __n) {
        return __n_00;
      }
      memcpy((void *)((int)param_5 + __n_00),(void *)(iVar1 + 5),__n);
      __n_00 = __n_00 + *(byte *)(iVar1 + 4);
    }
  }
  return __n_00;
}



/* ===== cfg80211_find_vendor_elem @ 00016bce size=78 ===== */

int cfg80211_find_vendor_elem(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  local_c = (param_1 & 0xff) << 0x10;
  local_c = CONCAT13((char)param_2,(undefined3)local_c);
  local_c._0_2_ = CONCAT11((char)(param_1 >> 8),(char)(param_1 >> 0x10));
  if (param_2 < 0) {
    uVar2 = 3;
  }
  else {
    if (0xff < param_2) {
      return 0;
    }
    uVar2 = 4;
  }
  iVar1 = cfg80211_find_elem_match(0xdd,param_3,param_4,&local_c,uVar2,0,param_3);
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 1) < 4)) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== cfg80211_find_ie @ 00016c1c size=18 ===== */

void cfg80211_find_ie(void)

{
  cfg80211_find_elem_match();
  return;
}



/* ===== cfg80211_get_bss_channel @ 00016c2e size=124 ===== */

int * cfg80211_get_bss_channel
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *param_4;
  if (iVar5 == 4) {
    iVar2 = cfg80211_find_ie(0xe8);
    if (iVar2 == 0) {
      return param_4;
    }
    if (*(byte *)(iVar2 + 1) < 6) {
      return param_4;
    }
    uVar1 = *(undefined1 *)(iVar2 + 4);
  }
  else {
    iVar2 = cfg80211_find_ie(3);
    if ((iVar2 == 0) || (*(char *)(iVar2 + 1) != '\x01')) {
      iVar2 = cfg80211_find_ie(0x3d,param_2,param_3);
      if (iVar2 == 0) {
        return param_4;
      }
      if (*(byte *)(iVar2 + 1) < 0x16) {
        return param_4;
      }
    }
    uVar1 = *(undefined1 *)(iVar2 + 2);
  }
  uVar3 = ieee80211_channel_to_freq_khz(uVar1,iVar5);
  piVar4 = (int *)ieee80211_get_channel_khz(param_1,uVar3);
  if (piVar4 == (int *)0x0) {
    if (*param_4 == 0) {
      return (int *)0x0;
    }
  }
  else if (1 < param_5 - 1U) {
    if ((piVar4[3] & 1U) != 0) {
      return (int *)0x0;
    }
    return piVar4;
  }
  return param_4;
}



/* ===== is_bss @ 00016caa size=78 ===== */

bool is_bss(int param_1,int *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if ((param_2 == (int *)0x0) ||
     (*param_2 == *(int *)(param_1 + 0x2c) && *(short *)(param_1 + 0x30) == (short)param_2[1])) {
    if (param_3 == (void *)0x0) {
      return true;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = cfg80211_find_ie(0,iVar1 + 0x15,*(undefined4 *)(iVar1 + 0x10));
    if (iVar1 == 0) {
      return false;
    }
    if (param_4 == *(byte *)(iVar1 + 1)) {
      iVar1 = memcmp((void *)(iVar1 + 2),param_3,param_4);
      return iVar1 == 0;
    }
  }
  return false;
}



/* ===== cmp_bss @ 00016cf8 size=302 ===== */

uint cmp_bss(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  size_t __n;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  
  if (*param_1 != *param_2) {
    uVar5 = *(uint *)(*param_2 + 4);
    __n = *(uint *)(*param_1 + 4);
LAB_00016d0e:
    return uVar5 - __n;
  }
  iVar6 = param_1[2];
  if (iVar6 == 0) {
LAB_00016e1c:
    uVar5 = 0xffffffff;
  }
  else {
    iVar7 = param_2[2];
    if (iVar7 != 0) {
      piVar9 = param_1;
      piVar10 = param_2;
      iVar2 = param_3;
      if ((*(ushort *)((int)param_1 + 0x2a) & 3) == 0) {
        iVar1 = cfg80211_find_ie(0x72,iVar6 + 0x15,*(undefined4 *)(iVar6 + 0x10),
                                 *(ushort *)((int)param_1 + 0x2a),param_1,param_2,param_3);
      }
      else {
        iVar1 = 0;
      }
      if ((*(ushort *)((int)param_2 + 0x2a) & 3) == 0) {
        uVar8 = *(undefined4 *)(iVar7 + 0x10);
        iVar2 = cfg80211_find_ie(0x72,iVar7 + 0x15,uVar8,0,piVar9,piVar10,iVar2);
        if ((iVar1 != 0) && (iVar2 != 0)) {
          uVar5 = (uint)*(byte *)(iVar1 + 1);
          if (uVar5 == *(byte *)(iVar2 + 1)) {
            uVar5 = memcmp((void *)(iVar1 + 2),(void *)(iVar2 + 2),uVar5);
          }
          else {
            uVar5 = *(byte *)(iVar2 + 1) - uVar5;
          }
          iVar2 = cfg80211_find_ie(0x71,iVar6 + 0x15,*(undefined4 *)(iVar6 + 0x10));
          uVar3 = cfg80211_find_ie(0x71,iVar7 + 0x15,uVar8);
          if ((iVar2 != 0) && (uVar3 != 0)) {
            if (uVar5 != 0) {
              return uVar5;
            }
            __n = (size_t)*(byte *)(iVar2 + 1);
            uVar5 = (uint)*(byte *)(uVar3 + 1);
            if (__n != uVar5) goto LAB_00016d0e;
            goto LAB_00016d96;
          }
        }
      }
      uVar5 = memcmp(param_1 + 0xb,param_2 + 0xb,6);
      if (uVar5 != 0) {
        return uVar5;
      }
      iVar2 = cfg80211_find_ie(0,iVar6 + 0x15,*(undefined4 *)(iVar6 + 0x10));
      uVar3 = cfg80211_find_ie(0,iVar7 + 0x15,*(undefined4 *)(iVar7 + 0x10));
      if (iVar2 == 0) {
        return -(uint)(uVar3 != 0);
      }
      if (uVar3 != 0) {
        __n = (size_t)*(byte *)(uVar3 + 1);
        if (param_3 == 1) {
          return __n;
        }
        uVar5 = (uint)*(byte *)(iVar2 + 1);
        if (param_3 != 2) {
          if (__n == uVar5) {
LAB_00016d96:
            uVar5 = memcmp((void *)(iVar2 + 2),(void *)(uVar3 + 2),__n);
            return uVar5;
          }
LAB_00016df6:
          return __n - uVar5;
        }
        if (__n != uVar5) goto LAB_00016df6;
        pcVar4 = (char *)(uVar3 + 1);
        do {
          if ((int)__n <= (int)(pcVar4 + ~uVar3)) {
            return 0;
          }
          pcVar4 = pcVar4 + 1;
        } while (*pcVar4 == '\0');
        goto LAB_00016e1c;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* ===== rb_find_bss @ 00016e26 size=50 ===== */

int rb_find_bss(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x70);
  iVar4 = param_4;
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    iVar2 = cmp_bss(param_2 + 0x48,iVar3 + 0x38,param_3,param_4,iVar4);
    if (iVar2 == 0) break;
    piVar1 = (int *)(iVar3 + 4);
    if (iVar2 < 0) {
      piVar1 = (int *)(iVar3 + 8);
    }
    param_4 = *piVar1;
    iVar3 = param_4;
  }
  return iVar3 + -0x10;
}



/* ===== rb_insert_bss @ 00016e58 size=76 ===== */

void rb_insert_bss(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0x70);
  while( true ) {
    iVar4 = *piVar3;
    if (iVar4 == 0) {
      *(int *)(param_2 + 0x10) = iVar2;
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *piVar3 = param_2 + 0x10;
      rb_insert_color(param_2 + 0x10,(int *)(param_1 + 0x70));
      return;
    }
    iVar1 = cmp_bss(param_2 + 0x48,iVar4 + 0x38,0);
    if (iVar1 == 0) break;
    iVar2 = iVar4;
    if (iVar1 < 0) {
      piVar3 = (int *)(*piVar3 + 8);
    }
    else {
      piVar3 = (int *)(*piVar3 + 4);
    }
  }
  return;
}



/* ===== get_order @ 00016ea4 size=16 ===== */

int get_order(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - 1U >> 0xc;
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = 0x20 - LZCOUNT(uVar1);
  }
  return iVar2;
}



/* ===== kzalloc @ 00016eb4 size=8 ===== */

void kzalloc(undefined4 param_1,uint param_2)

{
  __kmalloc(param_1,param_2 | 0x100);
  return;
}



/* ===== wiphy_to_rdev @ 00016ebc size=8 ===== */

int wiphy_to_rdev(int param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x16ebe);
    (*pcVar1)();
  }
  return param_1 + -0x1a0;
}



/* ===== cfg80211_scan_done @ 00016ec6 size=116 ===== */

void cfg80211_scan_done(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 extraout_r3;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined2 local_24;
  
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  uVar6 = *(undefined4 *)(param_1 + 0x60);
  uVar8 = *(undefined4 *)(param_1 + 100);
  iVar11 = *(int *)(param_1 + 0x58);
  iVar12 = *(int *)(param_1 + 0x5c);
  uVar10 = *(undefined4 *)(param_1 + 0x4c);
  iVar3 = wiphy_to_rdev(uVar10);
  if (*(int *)(iVar3 + 0x7c) != param_1) {
    wiphy_to_rdev(uVar10);
  }
  uVar5 = param_2[1];
  uVar7 = param_2[2];
  uVar9 = param_2[3];
  *(undefined4 *)(param_1 + 0x58) = *param_2;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  *(undefined4 *)(param_1 + 0x60) = uVar7;
  *(undefined4 *)(param_1 + 100) = uVar9;
  if ((*(char *)(param_1 + 0x6a) != '\0') && (iVar11 != 0 || iVar12 != 0)) {
    local_24 = (undefined2)uVar8;
    *(int *)(param_1 + 0x58) = iVar11;
    *(int *)(param_1 + 0x5c) = iVar12;
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    *(undefined2 *)(param_1 + 100) = local_24;
  }
  puVar1 = DAT_00016f3c;
  *(undefined1 *)(param_1 + 0x68) = 1;
  uVar13 = wiphy_to_rdev(uVar10,*puVar1,puVar1,1,uVar2,uVar4);
  queue_work_on(extraout_r3,(int)((ulonglong)uVar13 >> 0x20),(int)uVar13 + 0x98);
  return;
}



/* ===== cfg80211_bss_iter @ 00016f40 size=88 ===== */

void cfg80211_bss_iter(undefined4 param_1,int param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r2;
  int extraout_r2_00;
  int *piVar4;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  iVar1 = wiphy_to_rdev();
  iVar3 = *(int *)(((uint)&uStack_20 & 0xffffe000) + 4) + 0x200;
  *(int *)(((uint)&uStack_20 & 0xffffe000) + 4) = iVar3;
  for (piVar4 = *(int **)(iVar1 + 0x68); (int *)(iVar1 + 0x68) != piVar4; piVar4 = (int *)*piVar4) {
    if ((param_2 == 0) ||
       (iVar2 = cfg80211_is_sub_chan(param_2,piVar4[0x12]), iVar3 = extraout_r2_00, iVar2 != 0)) {
      (*param_3)(param_1,piVar4 + 0x12,param_4);
      iVar3 = extraout_r2;
    }
  }
  __local_bh_enable_ip(DAT_00016f98,0x200,iVar3,uStack_20);
  return;
}



/* ===== kvfree_call_rcu @ 00016f9c size=4 ===== */

void kvfree_call_rcu(void)

{
  call_rcu();
  return;
}



/* ===== bss_ref_get.constprop.10 @ 00016fa0 size=36 ===== */

void bss_ref_get_constprop_10(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0x1c) = *(int *)(iVar1 + -0x1c) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0x1c) = *(int *)(iVar1 + -0x1c) + 1;
  }
  return;
}



/* ===== cfg80211_ref_bss @ 00016fc4 size=50 ===== */

void cfg80211_ref_bss(void)

{
  int extraout_r1;
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  wiphy_to_rdev();
  if (extraout_r1 != 0) {
    *(int *)(((uint)&uStack_8 & 0xffffe000) + 4) =
         *(int *)(((uint)&uStack_8 & 0xffffe000) + 4) + 0x200;
    bss_ref_get_constprop_10(extraout_r1 + -0x48);
    __local_bh_enable_ip(DAT_00016ff8,0x200);
    return;
  }
  return;
}



/* ===== cfg80211_get_bss @ 00016ffc size=178 ===== */

int cfg80211_get_bss(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,int param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  iVar2 = wiphy_to_rdev();
  iVar5 = *DAT_000170b0;
  *(int *)(((uint)&uStack_28 & 0xffffe000) + 4) =
       *(int *)(((uint)&uStack_28 & 0xffffe000) + 4) + 0x200;
  piVar4 = *(int **)(iVar2 + 0x68);
  do {
    if ((int *)(iVar2 + 0x68) == piVar4) {
      piVar4 = (int *)0x0;
LAB_0001709a:
      __local_bh_enable_ip(DAT_000170b4,0x200);
      if (piVar4 != (int *)0x0) {
        piVar4 = (int *)((int)piVar4 + 0x48);
      }
      return (int)piVar4;
    }
    uVar1 = *(ushort *)((int)piVar4 + 0x72);
    puVar6 = (undefined4 *)piVar4[0x12];
    iVar3 = cfg80211_bss_type_match(uVar1,*puVar6,param_6);
    if (iVar3 != 0) {
      if (param_7 == 0) {
        if ((uVar1 & 0x10) != 0) {
LAB_00017062:
          if (((((param_2 == (undefined4 *)0x0) || (puVar6 == param_2)) &&
               (-1 < piVar4[0x1d] << 0x1f)) &&
              ((piVar4[0x1d] != 0 || *(short *)(piVar4 + 0x1e) != 0 &&
               ((-1 < (9000 - iVar5) + piVar4[10] || (piVar4[0xc] != 0)))))) &&
             (iVar3 = is_bss(piVar4 + 0x12,param_3,param_4,param_5), iVar3 != 0)) {
            bss_ref_get_constprop_10(piVar4);
            goto LAB_0001709a;
          }
        }
      }
      else if ((param_7 != 1) || ((uVar1 & 0x10) == 0)) goto LAB_00017062;
    }
    piVar4 = (int *)*piVar4;
  } while( true );
}



/* ===== cfg80211_free_coloc_ap_list @ 000170b8 size=44 ===== */

void cfg80211_free_coloc_ap_list(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)*param_1;
  piVar4 = *(int **)*param_1;
  while (piVar1 != param_1) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *piVar1 = 0x100;
    piVar1[1] = 0x122;
    kfree();
    piVar1 = piVar4;
    piVar4 = (int *)*piVar4;
  }
  return;
}



/* ===== cfg80211_find_ext_ie @ 000170e4 size=30 ===== */

void cfg80211_find_ext_ie
               (undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined3 param_4)

{
  cfg80211_find_elem_match
            (0xff,param_2,param_3,&stack0xfffffff7,1,0,param_3,CONCAT13(param_1,param_4));
  return;
}



/* ===== cfg80211_sched_scan_results @ 00017102 size=70 ===== */

void cfg80211_sched_scan_results(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_4;
  iVar1 = wiphy_to_rdev();
  puVar2 = *(undefined4 **)(iVar1 + 0x88);
  while( true ) {
    if (puVar2 == (undefined4 *)(iVar1 + 0x88)) {
      return;
    }
    if (param_4 == puVar2[-0x1c] && param_3 == puVar2[-0x1d]) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 + -0x1d == (int *)0x0) {
    return;
  }
  *(undefined1 *)(puVar2 + -5) = 1;
  queue_work_on(1,*DAT_00017148,iVar1 + 0x120,DAT_00017148,iVar3);
  return;
}



/* ===== bss_free @ 0001714c size=78 ===== */

void bss_free(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    if ((*(int *)(param_1 + 0x54) != 0) && (*(int *)(param_1 + 0x5c) == 0)) {
      kvfree_call_rcu(*(int *)(param_1 + 0x54) + 8);
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      kvfree_call_rcu(*(int *)(param_1 + 0x58) + 8);
    }
    if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
      iVar1 = *(int *)(param_1 + 8);
      piVar2 = *(int **)(param_1 + 0xc);
      *(int **)(iVar1 + 4) = piVar2;
      *piVar2 = iVar1;
      *(undefined4 *)(param_1 + 8) = 0x100;
      *(undefined4 *)(param_1 + 0xc) = 0x122;
    }
    kfree(param_1);
    return;
  }
  return;
}



/* ===== bss_ref_put.constprop.12 @ 0001719a size=66 ===== */

void bss_ref_put_constprop_12(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -0x1c) + -1;
    *(int *)(iVar1 + -0x1c) = iVar2;
    if (iVar2 == 0) {
      bss_free(iVar1 + -0x48);
    }
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -0x1c) + -1;
    *(int *)(iVar1 + -0x1c) = iVar2;
    if (iVar2 == 0) {
      bss_free(iVar1 + -0x48);
    }
  }
  iVar1 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    bss_free(param_1);
    return;
  }
  return;
}



/* ===== cfg80211_put_bss @ 000171dc size=50 ===== */

void cfg80211_put_bss(void)

{
  int extraout_r1;
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  wiphy_to_rdev();
  if (extraout_r1 != 0) {
    *(int *)(((uint)&uStack_8 & 0xffffe000) + 4) =
         *(int *)(((uint)&uStack_8 & 0xffffe000) + 4) + 0x200;
    bss_ref_put_constprop_12(extraout_r1 + -0x48);
    __local_bh_enable_ip(DAT_00017210,0x200);
    return;
  }
  return;
}



/* ===== __cfg80211_unlink_bss @ 00017214 size=90 ===== */

undefined4 __cfg80211_unlink_bss(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = param_2 + 2;
  if (piVar3 != (int *)param_2[2]) {
    if (param_2[0x17] == 0) {
      return 0;
    }
    iVar1 = param_2[2];
    piVar2 = (int *)param_2[3];
    *(int **)(iVar1 + 4) = piVar2;
    *piVar2 = iVar1;
    param_2[2] = (int)piVar3;
    param_2[3] = (int)piVar3;
  }
  iVar1 = *param_2;
  piVar3 = (int *)param_2[1];
  *(int **)(iVar1 + 4) = piVar3;
  *piVar3 = iVar1;
  piVar2 = param_2 + 0x19;
  iVar1 = param_2[0x19];
  piVar3 = (int *)param_2[0x1a];
  *param_2 = (int)param_2;
  param_2[1] = (int)param_2;
  *(int **)(iVar1 + 4) = piVar3;
  *piVar3 = iVar1;
  param_2[0x19] = (int)piVar2;
  param_2[0x1a] = (int)piVar2;
  rb_erase(param_2 + 4,param_1 + 0x70,piVar3,piVar2,param_4);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
  bss_ref_put_constprop_12(param_2);
  return 1;
}



/* ===== __cfg80211_bss_expire @ 0001726e size=66 ===== */

void __cfg80211_bss_expire(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x68);
  iVar3 = 0;
  puVar4 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)(param_1 + 0x68)) {
    if (((puVar2[0xc] == 0) && (puVar2[10] - param_2 < 0)) &&
       (iVar1 = __cfg80211_unlink_bss(param_1), iVar1 != 0)) {
      iVar3 = iVar1;
    }
    puVar2 = puVar4;
    puVar4 = (undefined4 *)*puVar4;
  }
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  return;
}



/* ===== cfg80211_bss_flush @ 000172b0 size=46 ===== */

void cfg80211_bss_flush(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  uVar1 = wiphy_to_rdev();
  *(int *)(((uint)&uStack_8 & 0xffffe000) + 4) =
       *(int *)(((uint)&uStack_8 & 0xffffe000) + 4) + 0x200;
  __cfg80211_bss_expire(uVar1,*DAT_000172e0);
  __local_bh_enable_ip(DAT_000172e4,0x200);
  return;
}



/* ===== cfg80211_unlink_bss @ 000172e8 size=112 ===== */

void cfg80211_unlink_bss(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  uVar7 = wiphy_to_rdev();
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  iVar4 = (int)uVar7;
  if (iVar5 != 0) {
    *(int *)(((uint)&uStack_18 & 0xffffe000) + 4) =
         *(int *)(((uint)&uStack_18 & 0xffffe000) + 4) + 0x200;
    if (*(int *)(iVar5 + -0x48) != iVar5 + -0x48) {
      piVar3 = (int *)**(int **)(iVar5 + 0x1c);
      piVar2 = *(int **)(iVar5 + 0x1c);
      while (piVar1 = piVar3, piVar2 + -7 != (int *)param_2) {
        iVar6 = __cfg80211_unlink_bss(iVar4,piVar2 + -0x19);
        if (iVar6 != 0) {
          *(int *)(iVar4 + 0x74) = *(int *)(iVar4 + 0x74) + 1;
        }
        piVar3 = (int *)*piVar1;
        piVar2 = piVar1;
      }
      iVar5 = __cfg80211_unlink_bss(iVar4,iVar5 + -0x48);
      if (iVar5 != 0) {
        *(int *)(iVar4 + 0x74) = *(int *)(iVar4 + 0x74) + 1;
      }
    }
    __local_bh_enable_ip(DAT_00017358,0x200);
    return;
  }
  return;
}



/* ===== cfg80211_scan_6ghz @ 0001735c size=1316 ===== */

/* WARNING: Type propagation algorithm not settling */

int cfg80211_scan_6ghz(int param_1)

{
  undefined4 *__dest;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int ******__n;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  byte bVar13;
  byte *pbVar14;
  int *******pppppppiVar15;
  void *__src;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  undefined1 auStack_70 [4];
  uint local_6c;
  undefined4 *local_68;
  uint local_64;
  byte *local_60;
  void *local_5c;
  uint local_58;
  uint local_54;
  void *local_50;
  undefined4 *local_4c;
  int ******local_48;
  int ******local_44;
  int local_3c;
  int *******local_38;
  int *******local_34;
  int *******local_30;
  int *******local_2c;
  
  __src = *(void **)(param_1 + 0x7c);
  local_38 = (int *******)&local_38;
  *(undefined1 *)((int)__src + 0x6a) = 1;
  iVar9 = *(int *)(param_1 + 0x280);
  if ((iVar9 != 0) && (uVar3 = (uint)*(byte *)(*(int *)((int)__src + 0x34) + 4), uVar3 < 0xc)) {
    for (iVar5 = 0; iVar5 < (int)(uint)*(ushort *)(iVar9 + 0x54); iVar5 = iVar5 + 1) {
      iVar12 = *(int *)(iVar9 + 0x58) + iVar5 * 0x3c;
      if (((uint)*(ushort *)(*(int *)(iVar9 + 0x58) + iVar5 * 0x3c) & 1 << uVar3) != 0) {
        if (iVar12 == 0) {
          return -0x5f;
        }
        local_6c = (uint)*(byte *)(iVar12 + 2);
        if (local_6c == 0) {
          return -0x5f;
        }
        local_64 = *(uint *)(iVar9 + 0xc);
        iVar9 = 0;
        local_34 = local_38;
        if ((*(uint *)((int)__src + 0x1c) & 0x4000) == 0) goto LAB_000173f4;
        local_4c = (undefined4 *)(param_1 + 0x68);
        *(int *)(((uint)auStack_70 & 0xffffe000) + 4) =
             *(int *)(((uint)auStack_70 & 0xffffe000) + 4) + 0x200;
        local_68 = *(undefined4 **)(param_1 + 0x68);
        iVar9 = 0;
        goto LAB_000173e2;
      }
    }
  }
  return -0x5f;
LAB_000173e2:
  if (local_4c == local_68) goto code_r0x000173ea;
  local_30 = (int *******)&local_30;
  iVar12 = local_68[0x14] + 0x15;
  uVar4 = *(undefined4 *)(local_68[0x14] + 0x10);
  local_2c = local_30;
  iVar5 = cfg80211_find_elem(0xc9,iVar12,uVar4);
  if ((iVar5 == 0) || (0x20 < *(byte *)(iVar5 + 1))) {
LAB_000175d4:
    iVar17 = 0;
  }
  else {
    local_60 = (byte *)(iVar5 + 2) + *(byte *)(iVar5 + 1);
    iVar12 = cfg80211_find_elem(0,iVar12,uVar4);
    if ((iVar12 == 0) || (0x20 < *(byte *)(iVar12 + 1))) {
      iVar17 = -0x16;
    }
    else {
      local_50 = (void *)(iVar12 + 2);
      iVar17 = 0;
      uVar3 = crc32_le(0xffffffff,local_50);
      local_48 = (int ******)~uVar3;
      pbVar19 = (byte *)(iVar5 + 2);
LAB_00017490:
      pbVar14 = pbVar19;
      pbVar19 = pbVar14 + 4;
      pbVar6 = pbVar14;
      if (pbVar19 <= local_60) {
        local_54 = (*pbVar14 >> 4) + 1;
        local_5c = (void *)(uint)pbVar14[1];
        iVar5 = ieee80211_operating_class_to_band(pbVar14[2],&local_3c);
        pbVar6 = pbVar19;
        if (iVar5 == 0) goto LAB_000175c8;
        uVar3 = ieee80211_channel_to_freq_khz(pbVar14[3],local_3c);
        iVar5 = (int)(short)(ushort)pbVar14[1] * (int)(short)local_54;
        if ((int)local_60 - (int)pbVar19 < iVar5) goto LAB_000175c8;
        if ((local_3c == 3) && ((local_5c == (void *)0x8 || ((void *)0xb < local_5c)))) {
          local_44 = (int ******)((ulonglong)uVar3 * (ulonglong)DAT_000176d8 >> 0x26);
          local_58 = 0;
          do {
            pppppppiVar15 = (int *******)kzalloc(0x60,0xa20);
            if (pppppppiVar15 == (int *******)0x0) break;
            pppppppiVar15[0xe] = local_44;
            pppppppiVar15[2] = *(int *******)(pbVar19 + 1);
            *(undefined2 *)(pppppppiVar15 + 3) = *(undefined2 *)(pbVar19 + 5);
            if (local_5c == (void *)0xc) {
              pppppppiVar15[0xd] = *(int *******)(pbVar19 + 7);
              *(byte *)(pppppppiVar15 + 0xf) = *(byte *)(pppppppiVar15 + 0xf) | 0x40;
              pbVar6 = pbVar19 + 0xb;
            }
            else {
              pbVar6 = pbVar19 + 7;
            }
            uVar18 = (uint)*pbVar6;
            uVar3 = *(byte *)(pppppppiVar15 + 0xf) & 0xffffffc0 | (uVar18 & 1) << 1 |
                    ((uVar18 & 3) >> 1) << 2 | ((uVar18 & 7) >> 2) << 3 | ((uVar18 & 0xf) >> 3) << 4
                    | (uVar18 & 0x3f) >> 5;
            bVar13 = (byte)uVar3 | (byte)(((uVar18 & 0x1f) >> 4) << 5);
            *(byte *)(pppppppiVar15 + 0xf) = bVar13;
            if ((int)(uVar18 << 0x19) < 0) {
              if ((int)(uVar3 << 0x1d) < 0) {
                *(byte *)(pppppppiVar15 + 0xf) = bVar13 | 0x40;
                pppppppiVar15[0xd] = local_48;
                memcpy((void *)((int)pppppppiVar15 + 0xe),local_50,(uint)*(byte *)(iVar12 + 1));
                pppppppiVar15[0xc] = (int ******)(uint)*(byte *)(iVar12 + 1);
              }
              iVar17 = iVar17 + 1;
              *pppppppiVar15 = (int ******)&local_30;
              pppppppiVar15[1] = (int ******)local_2c;
              *local_2c = (int ******)pppppppiVar15;
              local_2c = pppppppiVar15;
            }
            else {
              kfree(pppppppiVar15);
            }
            pbVar19 = pbVar19 + pbVar14[1];
            local_58 = local_58 + 1;
          } while ((local_58 & 0xff) < local_54);
        }
        else {
          pbVar19 = pbVar19 + iVar5;
        }
        goto LAB_00017490;
      }
LAB_000175c8:
      pppppppiVar15 = local_2c;
      if (local_60 != pbVar6) {
        cfg80211_free_coloc_ap_list(&local_30);
        goto LAB_000175d4;
      }
      if ((int ********)local_30 != &local_30) {
        local_30[1] = (int ******)local_34;
        *local_34 = (int ******)local_30;
        *pppppppiVar15 = (int ******)&local_38;
        local_34 = pppppppiVar15;
      }
    }
  }
  iVar9 = iVar9 + iVar17;
  local_68 = (undefined4 *)*local_68;
  goto LAB_000173e2;
code_r0x000173ea:
  __local_bh_enable_ip(DAT_000176d4,0x200);
LAB_000173f4:
  if (local_64 >> 0x1e == 0) {
    iVar5 = local_64 * 4 + 0x78;
    if (0xffffff87 < local_64 * 4) {
      iVar5 = -1;
    }
  }
  else {
    iVar5 = -1;
  }
  __dest = (undefined4 *)kzalloc(iVar9 * 0x14 + iVar5,0xcc0);
  if (__dest == (undefined4 *)0x0) {
    iVar9 = -0xc;
    cfg80211_free_coloc_ap_list(&local_38);
  }
  else {
    memcpy(__dest,__src,0x78);
    __dest[2] = 0;
    __dest[0x1c] = __dest + local_64 + 0x1d;
    uVar3 = local_6c;
    if (iVar9 != 0) {
      for (pppppppiVar15 = local_38; (int ********)pppppppiVar15 != &local_38;
          pppppppiVar15 = (int *******)*pppppppiVar15) {
        if (-1 < (int)((uint)*(byte *)(pppppppiVar15 + 0xf) << 0x1a)) goto LAB_00017630;
      }
      uVar3 = 0;
    }
LAB_00017630:
    for (bVar13 = 0; uVar18 = (uint)bVar13, uVar18 < *(uint *)((int)__src + 8); bVar13 = bVar13 + 1)
    {
      piVar1 = *(int **)((int)__src + uVar18 * 4 + 0x74);
      if (*piVar1 == 3) {
        if (uVar3 == 0) {
LAB_00017686:
          if (*(int *)((int)__src + 0x1c) << 0x11 < 0) goto LAB_0001768c;
        }
        else {
          uVar7 = ieee80211_freq_khz_to_channel(piVar1[1] * 1000);
          uVar2 = uVar7 & 0xf;
          if (-1 < (int)-uVar7) {
            uVar2 = -(-uVar7 & 0xf);
          }
          if (uVar2 != 5) goto LAB_00017686;
        }
        iVar9 = *(int *)((int)__src + uVar18 * 4 + 0x74);
        piVar1 = __dest + 0x1d;
        for (iVar5 = 0; iVar5 != __dest[2]; iVar5 = iVar5 + 1) {
          if (iVar9 == *piVar1) goto LAB_0001768c;
          piVar1 = piVar1 + 1;
        }
        __dest[iVar5 + 0x1d] = iVar9;
        __dest[2] = iVar5 + 1;
      }
LAB_0001768c:
    }
    if (*(int *)((int)__src + 0x1c) << 0x11 < 0) {
      local_58 = param_1 + 0x1a0;
      for (pppppppiVar15 = local_38; (int ********)pppppppiVar15 != &local_38;
          pppppppiVar15 = (int *******)*pppppppiVar15) {
        local_68 = (undefined4 *)__dest[0x1c];
        local_64 = __dest[0x1b];
        piVar1 = (int *)ieee80211_get_channel_khz(local_58,(int)pppppppiVar15[0xe] * 1000);
        if ((piVar1 != (int *)0x0) && ((piVar1[3] & 1U) == 0)) {
          uVar18 = 0;
          uVar2 = 0;
          while (uVar7 = uVar18 & 0xff, uVar7 < *(uint *)((int)__src + 8)) {
            uVar18 = uVar18 + 1;
            if (*(int **)((int)__src + uVar7 * 4 + 0x74) == piVar1) {
              uVar2 = local_6c;
            }
          }
          if (uVar2 != 0) {
            iVar9 = __dest[1];
            if (iVar9 < 1) {
              if ((iVar9 != 0) || (((uint)pppppppiVar15[0xf] & 0x18) != 8)) {
LAB_0001777e:
                uVar18 = local_64;
                puVar16 = local_68;
                iVar9 = __dest[0x1b] * 0x14 + __dest[0x1c];
                puVar10 = __dest + 0x1d;
                for (iVar5 = 0; iVar5 != __dest[2]; iVar5 = iVar5 + 1) {
                  if (piVar1 == (int *)*puVar10) {
                    *(int *)(iVar9 + 4) = iVar5;
                    goto LAB_000177dc;
                  }
                  puVar10 = puVar10 + 1;
                }
                __dest[iVar5 + 0x1d] = piVar1;
                *(int *)(iVar9 + 4) = iVar5;
                __dest[2] = __dest[2] + 1;
LAB_000177dc:
                local_68[local_64 * 5 + 2] = pppppppiVar15[2];
                *(undefined2 *)(local_68 + local_64 * 5 + 3) = *(undefined2 *)(pppppppiVar15 + 3);
                local_68[local_64 * 5] = pppppppiVar15[0xd];
                *(byte *)((int)local_68 + local_64 * 0x14 + 0xf) =
                     (byte)(((uint)*(byte *)(pppppppiVar15 + 0xf) << 0x19) >> 0x1f);
                *(byte *)((int)local_68 + local_64 * 0x14 + 0xe) =
                     (byte)(((uint)*(byte *)(pppppppiVar15 + 0xf) << 0x1f) >> 0x1f);
                if (*piVar1 == 3) {
                  uVar7 = ieee80211_freq_khz_to_channel(piVar1[1] * 1000);
                  uVar2 = uVar7 & 0xf;
                  if (-1 < (int)-uVar7) {
                    uVar2 = -(-uVar7 & 0xf);
                  }
                  if ((uVar2 == 5) && (uVar3 == 0)) {
                    *(undefined1 *)(puVar16 + uVar18 * 5 + 4) = 1;
                  }
                }
                __dest[0x1b] = __dest[0x1b] + 1;
              }
            }
            else {
              pbVar19 = (byte *)*__dest;
              local_60 = pbVar19 + iVar9 * 0x21;
              local_5c = (void *)((int)pppppppiVar15 + 0xe);
              do {
                if ((int ******)(uint)pbVar19[0x20] == (int ******)0x0) {
                  if (((uint)pppppppiVar15[0xf] & 0x18) != 8) goto LAB_0001777e;
                }
                else {
                  __n = pppppppiVar15[0xc];
                  if ((__n == (int ******)0x0) || (__n != (int ******)(uint)pbVar19[0x20])) {
                    if (((int)((uint)*(byte *)(pppppppiVar15 + 0xf) << 0x19) < 0) &&
                       (uVar18 = crc32_le(0xffffffff,pbVar19),
                       (int ******)~uVar18 == pppppppiVar15[0xd])) goto LAB_0001777e;
                  }
                  else {
                    iVar9 = memcmp(pbVar19,local_5c,(size_t)__n);
                    if (iVar9 == 0) goto LAB_0001777e;
                  }
                }
                pbVar19 = pbVar19 + 0x21;
              } while (local_60 != pbVar19);
            }
          }
        }
      }
    }
    cfg80211_free_coloc_ap_list(&local_38);
    if (__dest[2] == 0) {
      iVar9 = -0x16;
      kfree(__dest);
    }
    else {
      puVar16 = *(undefined4 **)(param_1 + 0x80);
      *(undefined4 **)(param_1 + 0x80) = __dest;
      if (puVar16 != (undefined4 *)0x0) {
        uVar4 = puVar16[0x17];
        uVar8 = puVar16[0x18];
        uVar11 = puVar16[0x19];
        __dest[0x16] = puVar16[0x16];
        __dest[0x17] = uVar4;
        __dest[0x18] = uVar8;
        __dest[0x19] = uVar11;
      }
      iVar9 = rdev_scan(param_1,__dest);
      if (iVar9 != 0) {
        *(undefined4 **)(param_1 + 0x80) = puVar16;
        puVar16 = __dest;
      }
      kfree(puVar16);
    }
  }
  return iVar9;
}



/* ===== cfg80211_update_known_bss.constprop.7 @ 00017888 size=194 ===== */

undefined4 cfg80211_update_known_bss_constprop_7(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (*(int *)(param_2 + 0x58) == 0) {
    if (*(int *)(param_2 + 0x54) == 0) goto LAB_000178aa;
    if ((*(int *)(param_1 + 0x5c) != 0) && (*(int **)(param_1 + 8) != (int *)(param_1 + 8))) {
      if (*(int *)(param_2 + 0x54) == 0) {
        return 0;
      }
      kvfree_call_rcu(*(int *)(param_2 + 0x54) + 8);
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    if (iVar1 == *(int *)(param_1 + 0x50)) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x54);
    }
    uVar2 = *(undefined4 *)(param_2 + 0x54);
    for (piVar3 = *(int **)(param_1 + 8); (int *)param_1 != piVar3 + -2; piVar3 = (int *)*piVar3) {
      piVar3[0x13] = uVar2;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x58);
  }
  if (iVar1 != 0) {
    kvfree_call_rcu(iVar1 + 8);
  }
LAB_000178aa:
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x70);
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  }
  *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)(param_2 + 0x72);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined1 *)(param_1 + 0x7a) = *(undefined1 *)(param_2 + 0x7a);
  *(undefined4 *)(param_1 + 0x7b) = *(undefined4 *)(param_2 + 0x7b);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x7f) = *(undefined1 *)(param_2 + 0x7f);
  return 1;
}



/* ===== cfg80211_scan @ 0001794a size=170 ===== */

undefined4 cfg80211_scan(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  void *__dest;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  void *__src;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  __src = *(void **)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x1c4) << 0x1d < 0) {
    iVar6 = 0;
    uVar8 = 0;
    puVar5 = (undefined4 *)((int)__src + 0x74);
    while (*(int *)((int)__src + 8) != iVar6) {
      puVar4 = puVar5 + 1;
      piVar2 = (int *)*puVar5;
      iVar6 = iVar6 + 1;
      puVar5 = puVar4;
      if (*piVar2 != 3) {
        uVar8 = uVar8 + 1;
      }
    }
    if (uVar8 == 0) {
      uVar1 = cfg80211_scan_6ghz(param_1);
      return uVar1;
    }
    if (uVar8 >> 0x1e == 0) {
      iVar6 = uVar8 * 4 + 0x78;
      if (0xffffff87 < uVar8 * 4) {
        iVar6 = -1;
      }
    }
    else {
      iVar6 = -1;
    }
    __dest = (void *)kzalloc(iVar6,0xcc0);
    if (__dest == (void *)0x0) {
      return 0xfffffff4;
    }
    memcpy(__dest,__src,0x78);
    uVar7 = 0;
    iVar6 = 0;
    *(uint *)((int)__dest + 8) = uVar8;
    puVar5 = (undefined4 *)((int)__src + 0x74);
    while (uVar7 < *(uint *)((int)__src + 8)) {
      puVar9 = puVar5 + 1;
      puVar4 = (undefined4 *)*puVar5;
      uVar7 = uVar7 + 1;
      pvVar3 = (void *)*puVar4;
      bVar10 = pvVar3 != (void *)0x3;
      if (bVar10) {
        pvVar3 = (void *)((int)__dest + iVar6 * 4);
        iVar6 = iVar6 + 1;
      }
      puVar5 = puVar9;
      if (bVar10) {
        *(undefined4 **)((int)pvVar3 + 0x74) = puVar4;
      }
    }
    *(undefined1 *)((int)__src + 0x6a) = 0;
    *(void **)(param_1 + 0x80) = __dest;
    __src = __dest;
  }
  uVar1 = rdev_scan(param_1,__src);
  return uVar1;
}



/* ===== ___cfg80211_scan_done @ 000179f4 size=246 ===== */

void ___cfg80211_scan_done(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte in_Q;
  undefined8 uVar10;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  rtnl_is_locked();
  if (*(int *)(param_1 + 0x84) == 0) {
    iVar3 = *(int *)(param_1 + 0x7c);
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + 0x34);
      iVar4 = *(int *)(param_1 + 0x80);
      if (*(int *)(param_1 + 0x80) == 0) {
        iVar4 = iVar3;
      }
      if (*(int *)(iVar5 + 0x10) == 0) {
        uVar1 = (uint)*(byte *)(iVar5 + 0x31);
      }
      else {
        uVar1 = *(uint *)(*(int *)(iVar5 + 0x10) + 0x28) & 1;
      }
      if ((((uVar1 == 0) || (-1 < *(int *)(param_1 + 0x1c4) << 0x1d)) ||
          (*(char *)(iVar3 + 0x6a) != '\0')) ||
         ((*(char *)(iVar4 + 0x66) != '\0' || (iVar3 = cfg80211_scan_6ghz(param_1), iVar3 != 0)))) {
        cVar8 = *(int *)(iVar5 + 0x10) < 0;
        cVar9 = *(int *)(iVar5 + 0x10) == 0;
        cVar6 = '\x01';
        cVar7 = '\0';
        if (!(bool)cVar9) {
          cfg80211_sme_scan_done();
        }
        if (*(char *)(iVar4 + 0x66) == '\0') {
          cVar6 = (*(uint *)(iVar4 + 0x1c) & 4) != 0;
          iVar3 = *(uint *)(iVar4 + 0x1c) << 0x1e;
          cVar8 = iVar3 < 0;
          cVar9 = iVar3 == 0;
          if ((bool)cVar8) {
            *(int *)(((uint)&uStack_18 & 0xffffe000) + 4) =
                 *(int *)(((uint)&uStack_18 & 0xffffe000) + 4) + 0x200;
            __cfg80211_bss_expire(param_1,*(undefined4 *)(iVar4 + 0x50));
            __local_bh_enable_ip(DAT_00017aec,0x200);
          }
        }
        uVar10 = nl80211_build_scan_msg(param_1,iVar5,*(undefined1 *)(iVar4 + 0x66));
        iVar3 = (int)((ulonglong)uVar10 >> 0x20);
        if (*(int *)(iVar5 + 0x10) != 0) {
          iVar3 = (uint)(byte)(cVar8 << 4 | cVar9 << 3 | cVar6 << 2 | cVar7 << 1 | in_Q) << 0x1b;
          disableIRQinterrupts();
          piVar2 = *(int **)(*(int *)(iVar5 + 0x10) + 600);
          *piVar2 = *piVar2 + -1;
        }
        kfree(*(undefined4 *)(param_1 + 0x80),iVar3);
        *(undefined4 *)(param_1 + 0x80) = 0;
        kfree(*(undefined4 *)(param_1 + 0x7c));
        *(undefined4 *)(param_1 + 0x7c) = 0;
        if (param_2 != 0) {
          nl80211_send_scan_msg(param_1,(int)uVar10);
          return;
        }
        *(int *)(param_1 + 0x84) = (int)uVar10;
      }
    }
  }
  else {
    nl80211_send_scan_msg(param_1);
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



/* ===== __cfg80211_scan_done @ 00017af0 size=26 ===== */

void __cfg80211_scan_done(int param_1)

{
  rtnl_lock();
  ___cfg80211_scan_done(param_1 + -0x98,1);
  rtnl_unlock();
  return;
}



/* ===== cfg80211_add_sched_scan_req @ 00017b0a size=32 ===== */

void cfg80211_add_sched_scan_req(int param_1,int param_2)

{
  int iVar1;
  
  rtnl_is_locked();
  iVar1 = *(int *)(param_1 + 0x88);
  *(int *)(param_2 + 0x74) = iVar1;
  *(int **)(param_2 + 0x78) = (int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = param_2 + 0x74;
  *(int *)(iVar1 + 4) = param_2 + 0x74;
  return;
}



/* ===== cfg80211_sched_scan_req_possible @ 00017b2a size=66 ===== */

undefined4 cfg80211_sched_scan_req_possible(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x88); puVar1 != (undefined4 *)(param_1 + 0x88);
      puVar1 = (undefined4 *)*puVar1) {
    if ((uVar2 == 0) && (puVar1[-0x1d] == 0 && puVar1[-0x1c] == 0)) goto LAB_00017b66;
    uVar2 = uVar2 + 1;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    if (param_2 == 0) {
LAB_00017b66:
      uVar3 = 0xffffff8d;
    }
    else if (*(byte *)(param_1 + 0x1e5) == uVar2) {
      uVar3 = 0xffffffe4;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== cfg80211_sched_scan_results_wk @ 00017b6c size=124 ===== */

void cfg80211_sched_scan_results_wk
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  rtnl_lock();
  puVar4 = DAT_00017bf0;
  uVar3 = DAT_00017bec;
  piVar5 = (int *)**(int **)(param_1 + -0x98);
  piVar2 = *(int **)(param_1 + -0x98);
  while (piVar1 = piVar5, piVar2 != (int *)(param_1 + -0x98)) {
    if (*(char *)(piVar2 + -5) != '\0') {
      *(undefined1 *)(piVar2 + -5) = 0;
      if (piVar2[-0x15] << 0x1e < 0) {
        *(int *)(((uint)&uStack_20 & uVar3) + 4) = *(int *)(((uint)&uStack_20 & uVar3) + 4) + 0x200;
        __cfg80211_bss_expire(param_1 + -0x120,piVar2[-6]);
        __local_bh_enable_ip(DAT_00017be8,0x200);
        piVar2[-6] = *puVar4;
      }
      nl80211_send_sched_scan(piVar2 + -0x1d,0x4d);
    }
    piVar5 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  rtnl_unlock();
  return;
}



/* ===== cfg80211_stop_sched_scan_req @ 00017bf4 size=80 ===== */

int cfg80211_stop_sched_scan_req(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  rtnl_is_locked();
  if ((param_3 != 0) ||
     (iVar1 = (**(code **)(*param_1 + 0x11c))(param_1 + 0x68,param_2[0x16],*param_2,param_2[1]),
     iVar1 == 0)) {
    nl80211_send_sched_scan(param_2,0x4e);
    rtnl_is_locked();
    iVar1 = param_2[0x1d];
    piVar2 = (int *)param_2[0x1e];
    *(int **)(iVar1 + 4) = piVar2;
    *piVar2 = iVar1;
    param_2[0x1e] = 0x122;
    if (param_2 != (undefined4 *)0x0) {
      kvfree_call_rcu(param_2 + 0x19);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== __cfg80211_stop_sched_scan @ 00017c44 size=74 ===== */

undefined4
__cfg80211_stop_sched_scan
          (int param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  rtnl_is_locked();
  puVar2 = *(undefined4 **)(param_1 + 0x88);
  while( true ) {
    piVar3 = puVar2 + -0x1d;
    if (puVar2 == (undefined4 *)(param_1 + 0x88)) {
      return 0xfffffffe;
    }
    if (param_4 == puVar2[-0x1c] && param_3 == *piVar3) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  if (piVar3 == (int *)0x0) {
    return 0xfffffffe;
  }
  uVar1 = cfg80211_stop_sched_scan_req(param_1,piVar3,param_5,param_4);
  return uVar1;
}



/* ===== cfg80211_sched_scan_stopped_rtnl @ 00017c8e size=34 ===== */

void cfg80211_sched_scan_stopped_rtnl
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  uVar1 = wiphy_to_rdev();
  rtnl_is_locked();
  __cfg80211_stop_sched_scan(uVar1,extraout_r1,param_3,param_4,1,param_2);
  return;
}



/* ===== cfg80211_sched_scan_stopped @ 00017cb0 size=30 ===== */

void cfg80211_sched_scan_stopped
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  
  rtnl_lock();
  cfg80211_sched_scan_stopped_rtnl(param_1,extraout_r1,param_3,param_4);
  rtnl_unlock();
  return;
}



/* ===== cfg80211_bss_age @ 00017cce size=66 ===== */

void cfg80211_bss_age(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = __msecs_to_jiffies(param_2 * 1000);
  *(int *)(((uint)&stack0xfffffff8 & 0xffffe000) + 4) =
       *(int *)(((uint)&stack0xfffffff8 & 0xffffe000) + 4) + 0x200;
  for (piVar2 = *(int **)(param_1 + 0x68); (int *)(param_1 + 0x68) != piVar2;
      piVar2 = (int *)*piVar2) {
    piVar2[10] = piVar2[10] - iVar1;
  }
  __local_bh_enable_ip(DAT_00017d10,0x200);
  return;
}



/* ===== cfg80211_bss_expire @ 00017d14 size=14 ===== */

void cfg80211_bss_expire(undefined4 param_1)

{
  __cfg80211_bss_expire(param_1,*DAT_00017d24 + -9000);
  return;
}



/* ===== cfg80211_bss_update @ 00017d28 size=572 ===== */

int * cfg80211_bss_update(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *__dest;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iStack_30;
  int *local_2c;
  undefined4 uStack_28;
  
  if (param_2[0x12] == 0) {
    return (int *)0x0;
  }
  param_2[10] = param_4;
  *(int *)(((uint)&iStack_30 & 0xffffe000) + 4) =
       *(int *)(((uint)&iStack_30 & 0xffffe000) + 4) + 0x200;
  iStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  if (param_2[0x14] == 0) {
    __dest = (int *)0x0;
    uVar1 = DAT_00017f64;
LAB_00017d54:
    __local_bh_enable_ip(uVar1,0x200);
  }
  else {
    __dest = (int *)rb_find_bss(param_1,param_2,0);
    if (__dest == (int *)0x0) {
      __dest = (int *)kzalloc(*(int *)(param_1 + 0x1e0) + 0x88,0xa20);
      if (__dest == (int *)0x0) {
        if (param_2[0x15] != 0) {
          kvfree_call_rcu(param_2[0x15] + 8);
        }
        if (param_2[0x16] != 0) {
          kvfree_call_rcu(param_2[0x16] + 8);
        }
        goto LAB_00017d76;
      }
      memcpy(__dest,param_2,0x88);
      piVar7 = __dest + 2;
      __dest[2] = (int)piVar7;
      __dest[0x1a] = (int)(__dest + 0x19);
      __dest[0x19] = (int)(__dest + 0x19);
      iVar11 = param_1 + 0x68;
      iVar2 = param_2[0x16];
      __dest[0xb] = 1;
      __dest[3] = (int)piVar7;
      __dest[0x18] = 0;
      if (iVar2 != 0) {
        iVar2 = rb_find_bss(param_1,param_2);
        if ((iVar2 != 0) || (iVar2 = rb_find_bss(param_1,param_2,2), iVar2 != 0)) {
          __dest[0x17] = iVar2 + 0x48;
          iVar6 = *(int *)(iVar2 + 8);
          *(int **)(iVar6 + 4) = piVar7;
          __dest[2] = iVar6;
          __dest[3] = iVar2 + 8;
          *(int **)(iVar2 + 8) = piVar7;
          *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + 1;
          __dest[0x15] = *(int *)(iVar2 + 0x54);
        }
LAB_00017e1c:
        if (*DAT_00017f6c <= *(uint *)(param_1 + 0x78)) {
          uVar3 = 0;
          for (piVar7 = *(int **)(param_1 + 0x68); (int *)iVar11 != piVar7; piVar7 = (int *)*piVar7)
          {
            piVar10 = (int *)uVar3;
            if ((piVar7[0xc] == 0) &&
               (((((int *)piVar7[2] == piVar7 + 2 || (piVar7[0x17] != 0)) &&
                 (piVar10 = piVar7, uVar3 != 0)) &&
                (piVar10 = (int *)(uVar3 & (int)(*(uint *)(uVar3 + 0x28) - piVar7[10]) >> 0x20),
                *(uint *)(uVar3 + 0x28) < (uint)piVar7[10])))) {
              piVar10 = piVar7;
            }
            uVar3 = (uint)piVar10;
          }
          if ((uVar3 == 0) || (iVar2 = __cfg80211_unlink_bss(param_1,uVar3), iVar2 == 0))
          goto LAB_00017e7a;
        }
        iVar2 = param_2[0x18];
        if (iVar2 != 0) {
          __dest[0x18] = iVar2;
          bss_ref_get_constprop_10(iVar2 + -0x48);
        }
        puVar8 = *(undefined4 **)(param_1 + 0x6c);
        *(int **)(param_1 + 0x6c) = __dest;
        *__dest = iVar11;
        __dest[1] = (int)puVar8;
        *puVar8 = __dest;
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        rb_insert_bss(param_1,__dest);
        goto LAB_00017e62;
      }
      iVar2 = __dest[0x15];
      if (iVar2 != 0) {
        uVar3 = cfg80211_find_ie(0,iVar2 + 0x15,*(undefined4 *)(iVar2 + 0x10));
        if (uVar3 != 0) {
          pbVar9 = (byte *)(uVar3 + 1);
          uVar12 = (uint)*pbVar9;
          bVar5 = 0;
          while ((int)(pbVar9 + ~uVar3) < (int)uVar12) {
            pbVar9 = pbVar9 + 1;
            bVar5 = bVar5 | *pbVar9;
          }
          if (bVar5 == 0) {
            local_2c = __dest + 0x12;
            for (piVar10 = *(int **)(param_1 + 0x68); (int *)iVar11 != piVar10;
                piVar10 = (int *)*piVar10) {
              if (((((*(short *)(piVar10 + 0x1e) == (short)__dest[0x1e] &&
                      __dest[0x1d] == piVar10[0x1d]) && (piVar10[0x12] == __dest[0x12])) &&
                   (piVar10[0x13] == __dest[0x13])) &&
                  (((piVar10[0x15] == 0 && (iVar2 = piVar10[0x14], iVar2 != 0)) &&
                   ((iVar2 = cfg80211_find_ie(0,iVar2 + 0x15,*(undefined4 *)(iVar2 + 0x10)),
                    iVar2 != 0 && ((uVar12 == 0 || (*(byte *)(iVar2 + 1) == uVar12)))))))) &&
                 (piVar10[0x17] == 0)) {
                iVar2 = (int)(piVar10 + 2);
                if (iVar2 != piVar10[2]) {
                  iVar6 = piVar10[2];
                  piVar4 = (int *)piVar10[3];
                  *(int **)(iVar6 + 4) = piVar4;
                  *piVar4 = iVar6;
                  piVar10[2] = 0x100;
                  piVar10[3] = 0x122;
                }
                iVar6 = __dest[2];
                *(int *)(iVar6 + 4) = iVar2;
                piVar10[2] = iVar6;
                piVar10[3] = (int)piVar7;
                __dest[2] = iVar2;
                piVar10[0x17] = (int)local_2c;
                __dest[0xb] = __dest[0xb] + piVar10[0xb];
                piVar10[0x15] = __dest[0x15];
              }
            }
          }
        }
        goto LAB_00017e1c;
      }
LAB_00017e7a:
      bss_ref_put_constprop_12(__dest);
    }
    else {
      iVar2 = cfg80211_update_known_bss_constprop_7(__dest,param_2,param_3);
      if (iVar2 != 0) {
LAB_00017e62:
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
        bss_ref_get_constprop_10(__dest);
        uVar1 = DAT_00017f70;
        goto LAB_00017d54;
      }
    }
LAB_00017d76:
    __local_bh_enable_ip(DAT_00017f68,0x200);
    __dest = (int *)0x0;
  }
  return __dest;
}



/* ===== cfg80211_inform_single_bss_data @ 00017f74 size=474 ===== */

void cfg80211_inform_single_bss_data
               (int param_1,int *param_2,int param_3,undefined4 *param_4,undefined4 param_5,
               undefined4 param_6,undefined2 param_7,undefined2 param_8,void *param_9,
               size_t param_10,int *param_11,undefined4 param_12)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c8 [3];
  undefined4 *local_bc;
  undefined1 auStack_b8 [32];
  int local_98;
  int iStack_94;
  int *local_70;
  int local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  int local_58;
  int local_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_39;
  undefined1 local_38;
  int local_2c;
  
  local_2c = *DAT_00018150;
  iVar2 = wiphy_to_rdev();
  memset(auStack_b8,0,0x88);
  if ((param_1 != 0) && ((*(int *)(param_1 + 0x3c) != 2 || ((uint)param_2[2] < 0x65)))) {
    local_c8[0] = param_2[1];
    piVar4 = (int *)cfg80211_get_bss_channel(param_1,param_9,param_10,*param_2);
    if (piVar4 != (int *)0x0) {
      local_40 = *(undefined2 *)(param_4 + 1);
      local_44 = *param_4;
      local_6c = param_2[1];
      local_4c = param_2[2];
      local_48 = param_8;
      local_46 = param_7;
      local_98 = param_2[4];
      iStack_94 = param_2[5];
      if (param_11 != (int *)0x0) {
        local_58 = *param_11;
        local_39 = *(undefined1 *)((int)param_11 + 5);
        local_38 = (undefined1)param_11[1];
      }
      local_70 = piVar4;
      puVar5 = (undefined4 *)kzalloc(param_10 + 0x18,param_12);
      if (puVar5 != (undefined4 *)0x0) {
        puVar5[4] = param_10;
        *(undefined1 *)(puVar5 + 5) = 0;
        *puVar5 = param_5;
        puVar5[1] = param_6;
        local_bc = puVar5;
        memcpy((void *)((int)puVar5 + 0x15),param_9,param_10);
        puVar5 = local_bc;
        if (param_3 == 1) {
          *(undefined1 *)(local_bc + 5) = 1;
        }
        else if ((param_3 != 0) && (puVar5 = local_64, param_3 == 2)) {
          local_60 = local_bc;
        }
        local_64 = puVar5;
        local_68 = local_bc;
        uVar6 = wiphy_to_rdev(param_1,*param_2 - (int)piVar4,*param_2 - (int)piVar4 == 0);
        iVar3 = cfg80211_bss_update(uVar6,auStack_b8);
        if (iVar3 != 0) {
          if (*piVar4 == 2) {
            if ((*(ushort *)(iVar3 + 0x72) & 3) - 2 < 2) {
LAB_00018094:
              regulatory_hint_found_beacon(param_1,piVar4,param_12);
            }
          }
          else if ((int)((uint)*(ushort *)(iVar3 + 0x72) << 0x1f) < 0) goto LAB_00018094;
          if (param_11 != (int *)0x0) {
            *(int *)(((uint)local_c8 & 0xffffe000) + 4) =
                 *(int *)(((uint)local_c8 & 0xffffe000) + 4) + 0x200;
            iVar9 = *param_11;
            iVar7 = ieee80211_bss_get_elem(iVar3 + 0x48,0);
            if (iVar7 == 0) {
LAB_000180dc:
              iVar7 = __cfg80211_unlink_bss(iVar2,iVar3);
              if (iVar7 != 0) {
                iVar3 = 0;
                *(int *)(iVar2 + 0x74) = *(int *)(iVar2 + 0x74) + 1;
              }
            }
            else {
              uVar1 = *(undefined1 *)(iVar7 + 1);
              for (piVar4 = *(int **)(iVar9 + 0x1c); (int *)iVar9 != piVar4 + -7;
                  piVar4 = (int *)*piVar4) {
                iVar8 = is_bss(piVar4 + -7,iVar3 + 0x74,iVar7 + 2,uVar1);
                if (iVar8 != 0) goto LAB_0001812c;
              }
              iVar7 = iVar3 + 100;
              if (iVar7 != *(int *)(iVar3 + 100)) goto LAB_000180dc;
              piVar4 = *(int **)(iVar9 + 0x20);
              *(int *)(iVar9 + 0x20) = iVar7;
              *(int *)(iVar3 + 100) = iVar9 + 0x1c;
              *(int **)(iVar3 + 0x68) = piVar4;
              *piVar4 = iVar7;
            }
LAB_0001812c:
            __local_bh_enable_ip(DAT_00018158,0x200);
            if (iVar3 == 0) goto LAB_00017fa0;
          }
          iVar3 = iVar3 + 0x48;
          goto LAB_00017fa2;
        }
      }
    }
  }
LAB_00017fa0:
  iVar3 = 0;
LAB_00017fa2:
  if (local_2c == *DAT_00018150) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}



/* ===== cfg80211_parse_mbssid_data @ 0001815c size=936 ===== */

void cfg80211_parse_mbssid_data
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
               undefined4 param_6,undefined2 param_7,char *param_8,char *param_9,int param_10,
               int param_11)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  void *__s;
  void *__s_00;
  uint uVar4;
  char *pcVar5;
  void *__src;
  undefined4 uVar6;
  undefined1 *__src_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *__dest;
  uint uVar10;
  char *__src_01;
  char *__src_02;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  iVar3 = cfg80211_find_ie(0x47,param_8,param_9);
  if ((((iVar3 != 0) && ((int)((uint)*(byte *)(param_1 + 0x2d0) << 0x1f) < 0)) &&
      ((-1 < (int)((uint)*(byte *)(param_1 + 0x2d0) << 0x1e) ||
       (iVar3 = cfg80211_find_ext_ie(0x23,param_8,param_9), iVar3 != 0)))) &&
     (__s = (void *)kmem_cache_alloc(*(undefined4 *)
                                      (((param_11 << 0x1b) >> 0x1f) * -0x38 + DAT_000184a0 + 0x30),
                                     param_11), __s != (void *)0x0)) {
    __s_00 = (void *)__kmalloc(param_9,param_11);
    pcVar15 = param_8;
    if (__s_00 != (void *)0x0) {
      for (; (1 < (int)(param_8 + ((int)param_9 - (int)pcVar15)) &&
             ((int)((byte)pcVar15[1] + 2) <= (int)(param_8 + ((int)param_9 - (int)pcVar15))));
          pcVar15 = pcVar15 + (byte)pcVar15[1] + 2) {
        if ((*pcVar15 == 'G') && ((3 < (byte)pcVar15[1] && ((byte)pcVar15[2] - 1 < 8)))) {
          pcVar14 = pcVar15 + 3;
          do {
            if (((int)(pcVar15 + (((byte)pcVar15[1] + 2) - (int)pcVar14)) < 2) ||
               ((int)(pcVar15 + (((byte)pcVar15[1] + 2) - (int)pcVar14)) <
                (int)((byte)pcVar14[1] + 2))) break;
            if ((*pcVar14 == '\0') &&
               (((3 < (byte)pcVar14[1] && (pcVar14[2] == 'S')) && (pcVar14[3] == '\x02')))) {
              memset(__s_00,0,(size_t)param_9);
              bVar2 = cfg80211_merge_profile(param_8,param_9,pcVar15,pcVar14,__s_00,param_9);
              pcVar13 = (char *)(uint)bVar2;
              iVar3 = cfg80211_find_ie(0x55,__s_00,pcVar13);
              if ((iVar3 != 0) && (*(char *)(iVar3 + 1) != '\0')) {
                uVar10 = (uint)*(byte *)(iVar3 + 2);
                if (uVar10 - 1 < 0x2e) {
                  *(byte *)(param_10 + 5) = *(byte *)(iVar3 + 2);
                  bVar2 = pcVar15[2];
                  *(byte *)(param_10 + 4) = bVar2;
                  pbVar11 = (byte *)(param_4 + -1);
                  uVar7 = 0;
                  uVar9 = 0;
                  do {
                    pbVar11 = pbVar11 + 1;
                    uVar9 = uVar9 << 8 | uVar7 >> 0x18;
                    uVar7 = (uint)*pbVar11 | uVar7 << 8;
                  } while ((byte *)(param_4 + 5) != pbVar11);
                  iVar3 = -(uint)bVar2;
                  uVar4 = iVar3 + 0x40;
                  uVar12 = 0xffffffffU >> (uVar4 & 0xff) | -1 << (0x20 - uVar4 & 0xff) |
                           0xffffffffU >> (iVar3 + 0x20U & 0xff);
                  uVar4 = 0xffffffff >> (uVar4 & 0xff);
                  uVar8 = uVar12 & uVar7;
                  uVar7 = uVar7 ^ uVar12 & (uVar8 + uVar10 ^ uVar7);
                  local_29 = (undefined1)uVar7;
                  uVar9 = uVar9 ^ uVar4 & ((uVar4 & uVar9) + (uint)CARRY4(uVar8,uVar10) ^ uVar9);
                  local_2a = (undefined1)(uVar7 >> 8);
                  local_2c = (undefined1)(uVar7 >> 0x18);
                  local_2b = (undefined1)(uVar7 >> 0x10);
                  local_2d = (undefined1)uVar9;
                  local_2e = (undefined1)(uVar9 >> 8);
                  memset(__s,0,0x900);
                  pcVar5 = (char *)kmemdup(__s_00,pcVar13,param_11);
                  if (pcVar5 != (char *)0x0) {
                    __src = (void *)cfg80211_find_ie(0,pcVar5,pcVar13);
                    __dest = __s;
                    if (__src != (void *)0x0) {
                      memcpy(__s,__src,*(byte *)((int)__src + 1) + 2);
                      __dest = (void *)(*(byte *)((int)__src + 1) + 2 + (int)__s);
                    }
                    local_2f = 0x38;
                    uVar6 = cfg80211_find_elem_match(0xff,pcVar5,pcVar13,&local_2f,1,0);
                    iVar3 = cfg80211_find_ie(0,param_8,param_9);
                    __src_01 = param_8;
                    if (iVar3 != 0) {
                      __src_01 = (char *)(iVar3 + *(byte *)(iVar3 + 1) + 2);
                    }
                    do {
                      while( true ) {
                        __src_02 = pcVar5;
                        if ((param_9 < __src_01 + (2 - (int)param_8)) ||
                           (uVar10 = (uint)(byte)__src_01[1],
                           param_9 < __src_01 + ((uVar10 + 2) - (int)param_8))) goto LAB_00018412;
                        cVar1 = *__src_01;
                        if (cVar1 != '\0') break;
                        __src_01 = __src_01 + 1;
                      }
                      if (cVar1 == -1) {
                        __src_00 = (undefined1 *)cfg80211_find_ext_ie(__src_01[2]);
                        if (__src_00 == (undefined1 *)0x0) {
LAB_000183e8:
                          iVar3 = cfg80211_is_element_inherited(__src_01,uVar6);
                          if (iVar3 != 0) goto LAB_000183f4;
                        }
                        else {
LAB_000184f2:
                          memcpy(__dest,__src_00,(byte)__src_00[1] + 2);
                          bVar2 = __src_00[1];
LAB_000184e8:
                          __dest = (void *)((int)__dest + bVar2 + 2);
                          *__src_00 = 0;
                        }
                      }
                      else {
                        __src_00 = (undefined1 *)cfg80211_find_ie(cVar1,pcVar5,pcVar13);
                        if (__src_00 == (undefined1 *)0x0) goto LAB_000183e8;
                        if (cVar1 != -0x23) goto LAB_000184f2;
                        if (((4 < uVar10) && (bVar2 = __src_00[1], 4 < bVar2)) &&
                           (iVar3 = memcmp(__src_01 + 2,__src_00 + 2,5), iVar3 == 0)) {
                          memcpy(__dest,__src_00,bVar2 + 2);
                          bVar2 = __src_00[1];
                          goto LAB_000184e8;
                        }
LAB_000183f4:
                        memcpy(__dest,__src_01,uVar10 + 2);
                        __dest = (void *)((int)__dest + (byte)__src_01[1] + 2);
                      }
                      __src_01 = __src_01 + (byte)__src_01[1] + 2;
                    } while (param_9 != __src_01 + -(int)param_8);
LAB_00018412:
                    do {
                      if ((pcVar13 < __src_02 + (2 - (int)pcVar5)) ||
                         (pcVar13 < __src_02 + (((byte)__src_02[1] + 2) - (int)pcVar5))) break;
                      if ((*__src_02 != 'S') && (*__src_02 != '\0')) {
                        memcpy(__dest,__src_02,(byte)__src_02[1] + 2);
                        __dest = (void *)((int)__dest + (byte)__src_02[1] + 2);
                      }
                      __src_02 = __src_02 + (byte)__src_02[1] + 2;
                    } while (pcVar13 != __src_02 + -(int)pcVar5);
                    kfree(pcVar5);
                    if ((int)__dest - (int)__s != 0) {
                      iVar3 = cfg80211_inform_single_bss_data
                                        (param_1,param_2,param_3,&local_2e,param_5,param_6,
                                         *(undefined2 *)((int)__s_00 + 2),param_7,__s,
                                         (int)__dest - (int)__s,param_10,param_11);
                      if (iVar3 == 0) break;
                      cfg80211_put_bss(param_1,iVar3);
                    }
                  }
                }
              }
            }
            pcVar14 = pcVar14 + (byte)pcVar14[1] + 2;
          } while( true );
        }
      }
    }
    kfree(__s);
    kfree(__s_00);
  }
  return;
}



/* ===== cfg80211_inform_bss_data @ 0001850a size=102 ===== */

int cfg80211_inform_bss_data
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 uVar2;
  int local_30 [3];
  
  uVar2 = param_11;
  iVar1 = cfg80211_inform_single_bss_data();
  if (iVar1 != 0) {
    local_30[0] = iVar1;
    cfg80211_parse_mbssid_data
              (param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10,local_30,
               param_11,uVar2);
  }
  return iVar1;
}



/* ===== cfg80211_inform_single_bss_frame_data @ 00018570 size=454 ===== */

void cfg80211_inform_single_bss_frame_data
               (int param_1,int *param_2,ushort *param_3,uint param_4,undefined4 param_5)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort *puVar9;
  ushort uVar10;
  size_t __n;
  ushort *__src;
  ushort uVar11;
  undefined1 auStack_b8 [32];
  int local_98;
  int iStack_94;
  int local_80;
  int iStack_7c;
  int local_78;
  undefined2 local_74;
  int *local_70;
  int local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  int local_4c;
  ushort local_48;
  ushort local_46;
  undefined4 local_44;
  ushort local_40;
  undefined1 local_3e;
  undefined4 local_3d;
  int local_2c;
  
  piVar2 = DAT_00018738;
  local_2c = *DAT_00018738;
  memset(auStack_b8,0,0x88);
  if (((param_3 != (ushort *)0x0) && (param_1 != 0)) &&
     ((*(int *)(param_1 + 0x3c) != 2 || ((uint)param_2[2] < 0x65)))) {
    uVar1 = *param_3;
    if ((uVar1 & 0xfc) == 0x1c) {
      puVar9 = param_3;
      if ((uVar1 & 0x1fc) == 0x11c) {
        uVar7 = 0x12;
      }
      else {
        uVar7 = 4;
      }
    }
    else {
      uVar7 = 0x24;
      puVar9 = (ushort *)0x0;
    }
    if (uVar7 <= param_4) {
      __n = param_4 - uVar7;
      if (puVar9 == (ushort *)0x0) {
        __src = param_3 + 0x12;
      }
      else if (((uVar1 & 0xfc) == 0x1c) && ((uVar1 & 0x1fc) == 0x11c)) {
        __src = puVar9 + 9;
      }
      else {
        __src = (ushort *)((int)puVar9 + 0xf);
      }
      piVar5 = (int *)cfg80211_get_bss_channel(param_1,__src,__n,*param_2,param_2[1]);
      if (piVar5 != (int *)0x0) {
        if (puVar9 == (ushort *)0x0) {
          uVar1 = param_3[0x11];
          puVar9 = param_3 + 8;
          uVar11 = param_3[0x10];
        }
        else {
          iVar4 = cfg80211_find_elem(0xd5,__src,__n);
          if ((iVar4 == 0) || (*(byte *)(iVar4 + 1) < 8)) goto LAB_00018592;
          uVar1 = *(ushort *)(iVar4 + 2);
          puVar9 = puVar9 + 2;
          uVar11 = *(ushort *)(iVar4 + 4);
        }
        puVar6 = (undefined4 *)kzalloc(__n + 0x18,param_5);
        if (puVar6 != (undefined4 *)0x0) {
          puVar6[4] = __n;
          uVar8 = *(undefined4 *)(param_3 + 0xe);
          uVar10 = *param_3 & 0xfc;
          *puVar6 = *(undefined4 *)(param_3 + 0xc);
          puVar6[1] = uVar8;
          *(bool *)(puVar6 + 5) = uVar10 == 0x80 || uVar10 == 0x1c;
          memcpy((void *)((int)puVar6 + 0x15),__src,__n);
          puVar3 = puVar6;
          if (uVar10 != 0x50) {
            local_64 = puVar6;
            puVar3 = local_60;
          }
          local_60 = puVar3;
          local_40 = puVar9[2];
          local_44 = *(undefined4 *)puVar9;
          local_6c = param_2[1];
          local_4c = param_2[2];
          local_98 = param_2[4];
          iStack_94 = param_2[5];
          local_80 = param_2[6];
          iStack_7c = param_2[7];
          local_3e = *(undefined1 *)((int)param_2 + 0x26);
          local_3d = *(undefined4 *)((int)param_2 + 0x27);
          local_78 = param_2[8];
          local_74 = (undefined2)param_2[9];
          local_70 = piVar5;
          local_68 = puVar6;
          local_48 = uVar11;
          local_46 = uVar1;
          uVar8 = wiphy_to_rdev(param_1,*param_2 - (int)piVar5,*param_2 - (int)piVar5 == 0);
          iVar4 = cfg80211_bss_update(uVar8,auStack_b8);
          if (iVar4 != 0) {
            if (*piVar5 == 2) {
              if ((*(ushort *)(iVar4 + 0x72) & 3) - 2 < 2) {
LAB_000186e8:
                regulatory_hint_found_beacon(param_1,piVar5,param_5);
              }
            }
            else if ((int)((uint)*(ushort *)(iVar4 + 0x72) << 0x1f) < 0) goto LAB_000186e8;
            iVar4 = iVar4 + 0x48;
            goto LAB_00018594;
          }
        }
      }
    }
  }
LAB_00018592:
  iVar4 = 0;
LAB_00018594:
  if (local_2c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}



/* ===== cfg80211_inform_bss_frame_data @ 00018740 size=512 ===== */

int cfg80211_inform_bss_frame_data
              (int param_1,undefined4 param_2,ushort *param_3,int param_4,undefined4 param_5)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  size_t sVar13;
  void *__dest;
  bool bVar14;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_60;
  ushort *local_5c;
  int local_58;
  int *local_54;
  undefined4 uStack_50;
  ushort *local_48;
  int local_44;
  int local_40;
  size_t local_3c;
  uint *local_38;
  void *local_34;
  int local_30 [3];
  
  local_30[1] = 0;
  local_30[0] = 0;
  local_68 = param_5;
  local_40 = param_1;
  local_44 = cfg80211_inform_single_bss_frame_data();
  uVar1 = *param_3;
  if ((((uVar1 & 0xfc) != 0x1c) && (local_44 != 0)) &&
     (bVar2 = *(byte *)(local_40 + 0x2d0), (bVar2 & 1) != 0)) {
    local_48 = param_3 + 0x12;
    param_4 = param_4 + -0x24;
    iVar4 = cfg80211_find_ie(0x47,local_48,param_4);
    if ((iVar4 != 0) &&
       (((bVar2 & 2) == 0 || (iVar4 = cfg80211_find_ext_ie(0x23,local_48,param_4), iVar4 != 0)))) {
      local_68 = *(undefined4 *)(param_3 + 0xc);
      uStack_50 = param_5;
      local_30[0] = local_44;
      local_5c = local_48;
      local_60 = (uint)param_3[0x10];
      uStack_64 = *(undefined4 *)(param_3 + 0xe);
      if ((uVar1 & 0xfc) == 0x80) {
        uVar10 = 1;
      }
      else {
        uVar10 = 2;
      }
      local_58 = param_4;
      local_54 = local_30;
      cfg80211_parse_mbssid_data(local_40,param_2,uVar10,param_3 + 8);
      wiphy_to_rdev(local_40);
      *(int *)(((uint)&local_68 & 0xffffe000) + 4) =
           *(int *)(((uint)&local_68 & 0xffffe000) + 4) + 0x200;
      local_38 = *(uint **)(local_44 + 8);
      for (piVar12 = *(int **)(local_44 + 0x1c); piVar12 + -7 != (int *)local_44;
          piVar12 = (int *)*piVar12) {
        uVar8 = ((uint *)piVar12[-5])[1];
        bVar14 = local_38[1] <= uVar8;
        if (uVar8 == local_38[1]) {
          bVar14 = *local_38 <= *(uint *)piVar12[-5];
        }
        if (!bVar14) {
          wiphy_to_rdev(local_40);
          uVar8 = cfg80211_find_ie(0,local_48,param_4);
          if (((uVar8 != 0) && (uVar5 = cfg80211_find_ie(0x47,local_48,param_4), uVar5 != 0)) &&
             (uVar8 <= uVar5)) {
            bVar2 = *(byte *)(uVar5 + 1);
            bVar3 = *(byte *)(uVar8 + 1);
            pvVar6 = (void *)ieee80211_bss_get_elem(piVar12 + -7,0);
            if (pvVar6 != (void *)0x0) {
              local_3c = (uint)*(byte *)((int)pvVar6 + 1) + ((param_4 - (uint)bVar3) - (uint)bVar2);
              local_34 = pvVar6;
              pvVar6 = (void *)kzalloc(local_3c,0xa20);
              if (pvVar6 != (void *)0x0) {
                puVar7 = (undefined4 *)kzalloc(local_3c + 0x18,0xa20);
                if (puVar7 != (undefined4 *)0x0) {
                  sVar13 = *(byte *)((int)local_34 + 1) + 2;
                  __dest = (void *)(sVar13 + (int)pvVar6);
                  memcpy(pvVar6,local_34,sVar13);
                  pvVar9 = (void *)(*(byte *)(uVar8 + 1) + 2 + uVar8);
                  sVar13 = uVar5 - (int)pvVar9;
                  memcpy(__dest,pvVar9,sVar13);
                  pvVar9 = (void *)(*(byte *)(uVar5 + 1) + 2 + uVar5);
                  memcpy((void *)((int)__dest + sVar13),pvVar9,
                         (int)local_48 + (param_4 - (int)pvVar9));
                  uVar1 = *param_3;
                  puVar7[4] = local_3c;
                  uVar10 = *(undefined4 *)(param_3 + 0xe);
                  *puVar7 = *(undefined4 *)(param_3 + 0xc);
                  puVar7[1] = uVar10;
                  *(bool *)(puVar7 + 5) = (uVar1 & 0xfc) == 0x80;
                  memcpy((void *)((int)puVar7 + 0x15),pvVar6,local_3c);
                  if ((uVar1 & 0xfc) == 0x50) {
                    iVar4 = piVar12[-3];
                    piVar12[-3] = (int)puVar7;
                  }
                  else {
                    iVar4 = piVar12[-4];
                    piVar11 = (int *)piVar12[-0x17];
                    piVar12[-4] = (int)puVar7;
                    for (; piVar12 + -0x19 != piVar11 + -2; piVar11 = (int *)*piVar11) {
                      piVar11[0x13] = (int)puVar7;
                    }
                  }
                  piVar12[-5] = (int)puVar7;
                  if (iVar4 != 0) {
                    kvfree_call_rcu(iVar4 + 8);
                  }
                }
                kfree(pvVar6);
              }
            }
          }
        }
      }
      wiphy_to_rdev(local_40);
      __local_bh_enable_ip(DAT_00018940,0x200);
    }
  }
  return local_44;
}



/* ===== cfg80211_update_assoc_bss_entry @ 00018944 size=298 ===== */

void cfg80211_update_assoc_bss_entry
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  uVar8 = wiphy_to_rdev(*param_1);
  iVar3 = (int)uVar8;
  iVar7 = param_1[0x23];
  *(int *)(((uint)&uStack_28 & 0xffffe000) + 4) =
       *(int *)(((uint)&uStack_28 & 0xffffe000) + 4) + 0x200;
  if (*(int *)(iVar7 + 0x48) != (int)((ulonglong)uVar8 >> 0x20)) {
    if (*(int *)(iVar7 + 0x60) != 0) {
      iVar7 = *(int *)(iVar7 + 0x60) + -0x48;
    }
    *(undefined4 *)(iVar7 + 0x48) = param_2;
    for (piVar6 = *(int **)(iVar3 + 0x68); (int *)(iVar3 + 0x68) != piVar6; piVar6 = (int *)*piVar6)
    {
      iVar4 = cfg80211_bss_type_match
                        (*(undefined2 *)((int)piVar6 + 0x72),*(undefined4 *)piVar6[0x12],
                         param_1[0x19]);
      if (((iVar4 != 0) && ((int *)iVar7 != piVar6)) &&
         (iVar4 = cmp_bss(piVar6 + 0x12,(undefined4 *)(iVar7 + 0x48),0), iVar4 == 0)) {
        if (piVar6 != (int *)0x0) {
          iVar4 = cfg80211_update_known_bss_constprop_7(iVar7,piVar6,0);
          if (iVar4 != 0) {
            piVar6[0x15] = 0;
            piVar6[0x16] = 0;
          }
          piVar5 = (int *)piVar6[0x19];
          piVar2 = (int *)*piVar5;
          while (piVar1 = piVar2, piVar5 != piVar6 + 0x19) {
            iVar4 = __cfg80211_unlink_bss(iVar3,piVar5 + -0x19);
            if (iVar4 != 0) {
              *(int *)(iVar3 + 0x74) = *(int *)(iVar3 + 0x74) + 1;
            }
            piVar2 = (int *)*piVar1;
            piVar5 = piVar1;
          }
          iVar4 = __cfg80211_unlink_bss(iVar3,piVar6);
          if (iVar4 != 0) {
            *(int *)(iVar3 + 0x74) = *(int *)(iVar3 + 0x74) + 1;
          }
        }
        break;
      }
    }
    rb_erase(iVar7 + 0x10,iVar3 + 0x70);
    rb_insert_bss(iVar3,iVar7);
    *(int *)(iVar3 + 0x74) = *(int *)(iVar3 + 0x74) + 1;
    piVar6 = *(int **)(iVar7 + 100);
    piVar5 = (int *)*piVar6;
    while (piVar2 = piVar5, piVar6 != (int *)(iVar7 + 100)) {
      piVar6[-7] = param_2;
      rb_erase(piVar6 + -0x15,iVar3 + 0x70);
      rb_insert_bss(iVar3,piVar6 + -0x19);
      *(int *)(iVar3 + 0x74) = *(int *)(iVar3 + 0x74) + 1;
      piVar5 = (int *)*piVar2;
      piVar6 = piVar2;
    }
  }
  __local_bh_enable_ip(DAT_00018a70,0x200);
  return;
}



/* ===== dev_put @ 00018a74 size=24 ===== */

void dev_put(int param_1)

{
  if (param_1 != 0) {
    disableIRQinterrupts();
    **(int **)(param_1 + 600) = **(int **)(param_1 + 600) + -1;
  }
  return;
}



/* ===== dev_hold @ 00018a8c size=24 ===== */

void dev_hold(int param_1)

{
  if (param_1 != 0) {
    disableIRQinterrupts();
    **(int **)(param_1 + 600) = **(int **)(param_1 + 600) + 1;
  }
  return;
}



/* ===== nla_ok @ 00018aa4 size=24 ===== */

bool nla_ok(ushort *param_1,int param_2)

{
  if ((3 < param_2) && (3 < *param_1)) {
    return (int)(uint)*param_1 <= param_2;
  }
  return false;
}



/* ===== nla_next @ 00018abc size=18 ===== */

int nla_next(ushort *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 + 3 & 0xfffffffc;
  *param_2 = *param_2 - uVar1;
  return (int)param_1 + uVar1;
}



/* ===== ieee80211_get_he_iftype_cap @ 00018ace size=62 ===== */

int ieee80211_get_he_iftype_cap(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0xc) {
    for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)(param_1 + 0x54); iVar1 = iVar1 + 1) {
      iVar2 = *(int *)(param_1 + 0x58) + iVar1 * 0x3c;
      if (((uint)*(ushort *)(*(int *)(param_1 + 0x58) + iVar1 * 0x3c) & 1 << (param_2 & 0xff)) != 0)
      {
        if (iVar2 == 0) {
          return 0;
        }
        if (*(char *)(iVar2 + 2) != '\0') {
          return iVar2 + 2;
        }
        return 0;
      }
    }
  }
  return 0;
}



/* ===== wdev_running @ 00018b0c size=18 ===== */

uint wdev_running(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(uint *)(*(int *)(param_1 + 0x10) + 0x28) & 1;
  }
  return (uint)*(byte *)(param_1 + 0x31);
}



/* ===== validate_ie_attr @ 00018b1e size=58 ===== */

undefined4 validate_ie_attr(ushort *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  
  puVar3 = param_1 + 2;
  puVar2 = (ushort *)((*param_1 - 4) + (int)puVar3);
  for (; (iVar4 = (int)puVar2 - (int)puVar3, 1 < iVar4 &&
         ((int)(*(byte *)((int)puVar3 + 1) + 2) <= iVar4));
      puVar3 = (ushort *)((int)puVar3 + *(byte *)((int)puVar3 + 1) + 2)) {
  }
  if (puVar2 == puVar3) {
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = DAT_00018b58;
      param_2[1] = param_1;
      param_2[2] = 0;
    }
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== nl80211_key_allowed @ 00018b5c size=50 ===== */

undefined4 nl80211_key_allowed(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 4) < 0xe) {
    uVar2 = 1 << (*(uint *)(param_1 + 4) & 0xff);
    if ((uVar2 & 0x3c61) != 0) {
      return 0xffffffea;
    }
    if ((uVar2 & 0x106) != 0) {
      if (*(int *)(param_1 + 0x8c) == 0) {
        uVar1 = 0xffffffbd;
      }
      else {
        uVar1 = 0;
      }
      return uVar1;
    }
  }
  return 0;
}



/* ===== nl80211_can_set_dev_channel @ 00018b8e size=28 ===== */

uint nl80211_can_set_dev_channel(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (*(uint *)(param_1 + 4) < 10) {
    return 0x2c8U >> (*(uint *)(param_1 + 4) & 0xff) & 1;
  }
  return 0;
}



/* ===== nl80211_set_wds_peer @ 00018baa size=70 ===== */

undefined4 nl80211_set_wds_peer(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar3 = *(int *)(param_2 + 0x1c);
  iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0xffffffea;
  }
  else if (*(int *)(iVar3 + 0x28) << 0x1f < 0) {
    uVar1 = 0xfffffff0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_2 + 0x18) + 0xd0);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) && (*(int *)(*(int *)(iVar3 + 0x1c4) + 4) == 5)) {
                    /* WARNING: Could not recover jumptable at 0x00018bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(int **)(param_2 + 0x18) + 0x68,iVar3,iVar2 + 4);
      return uVar1;
    }
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_del_interface @ 00018bf0 size=34 ===== */

undefined4 nl80211_del_interface(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_2 + 0x18);
  if (*(int *)(*piVar1 + 0x10) != 0) {
    if (*(int *)(*(int *)(param_2 + 0x1c) + 0x10) == 0) {
      *(undefined4 *)(param_2 + 0x1c) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00018c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1 + 0x68);
    return uVar2;
  }
  return 0xffffffa1;
}



/* ===== nl80211_set_noack_map @ 00018c12 size=42 ===== */

undefined4 nl80211_set_noack_map(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x254);
  if (iVar2 == 0) {
    return 0xffffffea;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_2 + 0x18) + 0x130);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(int **)(param_2 + 0x18) + 0x68,*(undefined4 *)(param_2 + 0x1c),
                       *(undefined2 *)(iVar2 + 4));
    return uVar1;
  }
  return 0xffffffa1;
}



/* ===== validate_acl_mac_addrs @ 00018c3c size=56 ===== */

int validate_acl_mac_addrs(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  int extraout_r2;
  short *extraout_r3;
  int iVar3;
  int local_c;
  
  iVar3 = 0;
  puVar1 = param_1 + 2;
  iVar2 = *param_1 - 4;
  local_c = iVar2;
  while( true ) {
    iVar2 = nla_ok(puVar1,local_c,iVar2,puVar1,param_1);
    if (iVar2 == 0) {
      return iVar3;
    }
    if (*extraout_r3 != 10) break;
    puVar1 = (ushort *)nla_next(extraout_r3,&local_c);
    iVar3 = iVar3 + 1;
    iVar2 = extraout_r2;
  }
  return -0x16;
}



/* ===== vht_build_mcs_mask @ 00018c74 size=36 ===== */

void vht_build_mcs_mask(uint param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  
  iVar1 = DAT_00018c98;
  puVar2 = (undefined2 *)(param_2 + -2);
  do {
    uVar4 = param_1 & 3;
    param_1 = param_1 >> 2;
    if (uVar4 == 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined2 *)(iVar1 + uVar4 * 2 + 0x20);
    }
    puVar2 = puVar2 + 1;
    *puVar2 = uVar3;
  } while (puVar2 != (undefined2 *)(param_2 + 0xe));
  return;
}



/* ===== he_build_mcs_mask @ 00018c9c size=36 ===== */

void he_build_mcs_mask(uint param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  
  iVar1 = DAT_00018cc0;
  puVar2 = (undefined2 *)(param_2 + -2);
  do {
    uVar4 = param_1 & 3;
    param_1 = param_1 >> 2;
    if (uVar4 == 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined2 *)(iVar1 + uVar4 * 2 + 0x26);
    }
    puVar2 = puVar2 + 1;
    *puVar2 = uVar3;
  } while (puVar2 != (undefined2 *)(param_2 + 0xe));
  return;
}



/* ===== cfg80211_check_station_change @ 00018cc4 size=286 ===== */

undefined4 cfg80211_check_station_change(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2[5] != -1) && (param_3 != 1)) {
    return 0xffffffea;
  }
  if ((param_2[0x14] != -1) && (param_3 != 1)) {
    return 0xffffffea;
  }
  if (((short)param_2[6] == 0) || (param_2[3] << 0x19 < 0)) {
    switch(param_3) {
    case 5:
    case 6:
      if (-1 < param_2[3] << 0x19) {
        return 0xffffffea;
      }
      param_2[2] = param_2[2] & 0xffffffbf;
      break;
    case 7:
    case 8:
      uVar1 = param_2[2] & 0xffffffcd;
      goto LAB_00018d14;
    default:
      goto switchD_00018d06_default;
    }
  }
  else {
    if (param_3 != 1) {
      return 0xffffffea;
    }
switchD_00018d06_default:
    if (*(char *)((int)param_2 + 0x1f) != '\0') {
      return 0xffffffea;
    }
    if (param_2[0xc] != 0) {
      return 0xffffffea;
    }
    uVar1 = param_2[4] & 4;
LAB_00018d14:
    if (uVar1 != 0) {
      return 0xffffffea;
    }
  }
  if (1 < param_3 - 5) {
    if (param_2[3] << 0x19 < 0) {
      return 0xffffffea;
    }
    param_2[2] = param_2[2] & 0xffffffbf;
    if (param_3 != 1) goto LAB_00018d3e;
switchD_00018d94_caseD_0:
    if ((param_2[2] & 0xffffff41U) != 0) {
      return 0xffffffea;
    }
    if (-1 < *(int *)(param_1 + 0x2c) << 0x10) {
      uVar1 = param_2[2] & 0xa0;
LAB_00018d78:
      if (uVar1 != 0) {
        return 0xffffffea;
      }
    }
    if ((param_3 == 1) || (param_3 == 5)) {
      return 0;
    }
    goto switchD_00018d94_default;
  }
  if (param_3 != 5) {
LAB_00018d3e:
    if ((param_2[4] & 3U) != 0) {
      return 0xffffffea;
    }
    if (*param_2 != 0) {
      return 0xffffffea;
    }
    if (param_2[0xe] != 0) {
      return 0xffffffea;
    }
    if (param_2[9] != 0) {
      return 0xffffffea;
    }
    if (param_2[10] != 0) {
      return 0xffffffea;
    }
    if (param_2[0x15] != 0) {
      return 0xffffffea;
    }
    if (param_3 < 2) goto switchD_00018d94_caseD_0;
  }
  if (param_2[1] != 0) {
    return 0xffffffea;
  }
  switch(param_3) {
  case 0:
  case 1:
    goto switchD_00018d94_caseD_0;
  case 2:
    if (-1 < param_2[2] << 0x1e) {
      return 0xffffffa1;
    }
    goto switchD_00018d94_default;
  case 3:
  case 4:
    uVar1 = param_2[2] & 0xfffffffd;
    goto LAB_00018d78;
  case 5:
    if ((param_2[2] & 0xfffffff5U) != 0) {
      return 0xffffffea;
    }
    if ((param_2[3] & 2U) == 0) {
      return 0;
    }
    if (*param_2 != 0) {
      return 0;
    }
    return 0xffffffea;
  case 6:
    goto switchD_00018d94_caseD_6;
  case 7:
    uVar1 = param_2[4] & 4;
    break;
  case 8:
    uVar1 = *(byte *)((int)param_2 + 0x1f) & 0xfd;
    break;
  default:
    goto switchD_00018d94_default;
  }
  if (uVar1 != 0) {
switchD_00018d94_caseD_6:
    return 0xffffffea;
  }
switchD_00018d94_default:
  *(undefined1 *)((int)param_2 + 0x4e) = 0;
  return 0;
}



/* ===== nl80211_parse_sta_channel_info @ 00018e0a size=70 ===== */

undefined4 nl80211_parse_sta_channel_info(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x2f4);
  if (iVar2 != 0) {
    *(int *)(param_2 + 0x40) = iVar2 + 4;
    uVar1 = **(ushort **)(*(int *)(param_1 + 0x14) + 0x2f4);
    *(char *)(param_2 + 0x44) = (char)uVar1 + -4;
    if ((int)((uint)uVar1 << 0x1f) < 0) {
      return 0xffffffea;
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x2f8);
  if (iVar2 != 0) {
    *(int *)(param_2 + 0x48) = iVar2 + 4;
    *(char *)(param_2 + 0x4c) = (char)**(undefined2 **)(*(int *)(param_1 + 0x14) + 0x2f8) + -4;
  }
  return 0;
}



/* ===== nl80211_parse_sta_txpower_setting @ 00018e50 size=76 ===== */

undefined4 nl80211_parse_sta_txpower_setting(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x44c);
  if (iVar1 != 0) {
    if ((*(int *)(**(int **)(param_1 + 0x18) + 200) == 0) ||
       (-1 < (int)((uint)*(byte *)(*(int **)(param_1 + 0x18) + 0x75) << 0x1a))) {
      return 0xffffffa1;
    }
    uVar2 = (uint)*(byte *)(iVar1 + 4);
    *(uint *)(param_2 + 0x60) = uVar2;
    if (uVar2 == 1) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x450);
      if (iVar1 == 0) {
        return 0xffffffea;
      }
      *(undefined2 *)(param_2 + 0x5c) = *(undefined2 *)(iVar1 + 4);
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  return 0;
}



/* ===== nl80211_set_mpath @ 00018e9c size=62 ===== */

undefined4 nl80211_set_mpath(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
  if ((iVar2 == 0) || (iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x68), iVar3 == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_2 + 0x18) + 0x58);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) &&
       (*(int *)(*(int *)(*(int *)(param_2 + 0x1c) + 0x1c4) + 4) == 7)) {
                    /* WARNING: Could not recover jumptable at 0x00018eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)
                        (*(int **)(param_2 + 0x18) + 0x68,*(int *)(param_2 + 0x1c),iVar2 + 4,
                         iVar3 + 4);
      return uVar1;
    }
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_new_mpath @ 00018eda size=62 ===== */

undefined4 nl80211_new_mpath(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
  if ((iVar2 == 0) || (iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x68), iVar3 == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_2 + 0x18) + 0x50);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) &&
       (*(int *)(*(int *)(*(int *)(param_2 + 0x1c) + 0x1c4) + 4) == 7)) {
                    /* WARNING: Could not recover jumptable at 0x00018f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)
                        (*(int **)(param_2 + 0x18) + 0x68,*(int *)(param_2 + 0x1c),iVar2 + 4,
                         iVar3 + 4);
      return uVar1;
    }
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_del_mpath @ 00018f18 size=48 ===== */

undefined4 nl80211_del_mpath(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
  if (iVar2 != 0) {
    iVar2 = iVar2 + 4;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_2 + 0x18) + 0x54);
  if ((UNRECOVERED_JUMPTABLE != (code *)0x0) &&
     (*(int *)(*(int *)(*(int *)(param_2 + 0x1c) + 0x1c4) + 4) == 7)) {
                    /* WARNING: Could not recover jumptable at 0x00018f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(int **)(param_2 + 0x18) + 0x68,*(int *)(param_2 + 0x1c),iVar2);
    return uVar1;
  }
  return 0xffffffa1;
}



/* ===== validate_scan_freqs @ 00018f48 size=128 ===== */

int validate_scan_freqs(ushort *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  short *extraout_r3;
  ushort *extraout_r3_00;
  ushort *puVar5;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  puVar5 = param_1 + 2;
  local_20 = *param_1 - 4;
  puVar3 = puVar5;
  local_1c = param_2;
  uStack_18 = param_3;
  while (iVar1 = nla_ok(puVar3,local_20), iVar1 != 0) {
    if (*extraout_r3 != 8) {
      return 0;
    }
    puVar3 = (ushort *)nla_next(extraout_r3,&local_20);
  }
  local_20 = *param_1 - 4;
  iVar1 = 0;
  puVar3 = puVar5;
  do {
    iVar2 = nla_ok(puVar3,local_20);
    if (iVar2 == 0) {
      return iVar1;
    }
    local_1c = *param_1 - 4;
    puVar4 = puVar5;
    while (iVar2 = nla_ok(puVar4,local_1c), iVar2 != 0) {
      if ((puVar3 != extraout_r3_00) && (*(int *)(extraout_r3_00 + 2) == *(int *)(puVar3 + 2))) {
        return 0;
      }
      puVar4 = (ushort *)nla_next(extraout_r3_00,&local_1c);
    }
    puVar3 = (ushort *)nla_next(puVar3,&local_20);
    iVar1 = iVar1 + 1;
  } while( true );
}



/* ===== nl80211_abort_scan @ 00018fc8 size=46 ===== */

undefined4 nl80211_abort_scan(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_2 + 0x18);
  if (*(code **)(*piVar1 + 0x98) == (code *)0x0) {
    uVar2 = 0xffffffa1;
  }
  else {
    if (piVar1[0x21] == 0) {
      if (piVar1[0x1f] == 0) {
        return 0xfffffffe;
      }
      (**(code **)(*piVar1 + 0x98))(piVar1 + 0x68,*(undefined4 *)(param_2 + 0x1c));
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== nl80211_parse_mcast_rate @ 00018ff6 size=58 ===== */

undefined4 nl80211_parse_mcast_rate(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar3 = 0;
  uVar2 = 0;
  piVar6 = (int *)(param_1 + 0x274);
  do {
    iVar5 = *piVar6;
    if (iVar5 != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar5 + 0x10) <= iVar4) goto LAB_00019028;
        iVar1 = iVar4 * 0xc;
        iVar4 = iVar4 + 1;
      } while (*(ushort *)(iVar1 + *(int *)(iVar5 + 4) + 4) != param_3);
      uVar2 = 1;
      *(int *)(param_2 + iVar3 * 4) = iVar4;
    }
LAB_00019028:
    iVar3 = iVar3 + 1;
    piVar6 = piVar6 + 1;
    if (iVar3 == 5) {
      return uVar2;
    }
  } while( true );
}



/* ===== nl80211_flush_pmksa @ 00019030 size=38 ===== */

undefined4 nl80211_flush_pmksa(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x1c) + 0x1c4) + 4);
  if (((iVar2 == 2) || (iVar2 == 8)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_2 + 0x18) + 0xe8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001904e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(int **)(param_2 + 0x18) + 0x68);
    return uVar1;
  }
  return 0xffffffa1;
}



/* ===== nl80211_tdls_mgmt @ 00019056 size=138 ===== */

undefined4 nl80211_tdls_mgmt(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  
  piVar1 = *(int **)(param_2 + 0x18);
  if ((piVar1[0x71] << 0x10 < 0) && (*(code **)(*piVar1 + 0x124) != (code *)0x0)) {
    iVar2 = *(int *)(param_2 + 0x14);
    if ((((*(int *)(iVar2 + 0x220) == 0) || (*(int *)(iVar2 + 0x120) == 0)) ||
        (*(int *)(iVar2 + 0x224) == 0)) ||
       ((puVar4 = *(ushort **)(iVar2 + 0xa8), puVar4 == (ushort *)0x0 ||
        (*(int *)(iVar2 + 0x18) == 0)))) {
      uVar3 = 0xffffffea;
    }
    else {
      uVar3 = 0;
      if (*(int *)(iVar2 + 0x32c) != 0) {
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x32c) + 4);
      }
      uVar3 = (**(code **)(*piVar1 + 0x124))
                        (piVar1 + 0x68,*(undefined4 *)(param_2 + 0x1c),*(int *)(iVar2 + 0x18) + 4,
                         *(undefined1 *)(*(int *)(iVar2 + 0x220) + 4),
                         *(undefined1 *)(*(int *)(iVar2 + 0x224) + 4),
                         *(undefined2 *)(*(int *)(iVar2 + 0x120) + 4),uVar3,
                         *(int *)(iVar2 + 0x33c) != 0,puVar4 + 2,*puVar4 - 4);
    }
  }
  else {
    uVar3 = 0xffffffa1;
  }
  return uVar3;
}



/* ===== nl80211_tdls_oper @ 000190e0 size=64 ===== */

undefined4 nl80211_tdls_oper(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_2 + 0x18);
  if ((piVar1[0x71] << 0x10 < 0) && (*(code **)(*piVar1 + 0x128) != (code *)0x0)) {
    iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x228);
    if ((iVar4 != 0) && (iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x18), iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00019110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar1 + 0x128))
                        (piVar1 + 0x68,*(undefined4 *)(param_2 + 0x1c),iVar3 + 4,
                         *(undefined1 *)(iVar4 + 4));
      return uVar2;
    }
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 0xffffffa1;
  }
  return uVar2;
}



/* ===== nl80211_set_power_save @ 00019120 size=80 ===== */

int nl80211_set_power_save(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x174);
  if (iVar1 == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 0x1c4);
    pcVar3 = *(code **)(**(int **)(param_2 + 0x18) + 0xfc);
    if (pcVar3 == (code *)0x0) {
      iVar1 = -0x5f;
    }
    else {
      bVar4 = *(char *)(iVar1 + 4) == '\x01';
      if ((bool)*(char *)(iVar2 + 0xca) == bVar4) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*pcVar3)(*(int **)(param_2 + 0x18) + 0x68,*(int *)(param_2 + 0x1c),bVar4,
                          *(undefined4 *)(iVar2 + 0xcc));
        if (iVar1 == 0) {
          *(bool *)(iVar2 + 0xca) = bVar4;
        }
      }
    }
  }
  return iVar1;
}



/* ===== nl80211_register_unexpected_frame @ 00019170 size=42 ===== */

undefined4 nl80211_register_unexpected_frame(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x1c) + 0x1c4);
  if ((*(int *)(iVar1 + 4) != 3) && (*(int *)(iVar1 + 4) != 9)) {
    return 0xffffffea;
  }
  if (*(int *)(iVar1 + 0xd4) == 0) {
    *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(param_2 + 4);
    return 0;
  }
  return 0xfffffff0;
}



/* ===== nl80211_nan_change_config @ 0001919a size=136 ===== */

undefined4 nl80211_nan_change_config(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_r2;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  piVar6 = *(int **)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x1c);
  if (*(int *)(iVar2 + 4) != 0xc) {
    return 0xffffffa1;
  }
  uVar8 = wdev_running(iVar2,iVar2,param_2,0xc,param_1,param_2 & 0xffff);
  piVar3 = (int *)((ulonglong)uVar8 >> 0x20);
  if ((int)uVar8 == 0) {
    return 0xffffff95;
  }
  iVar2 = *(int *)(*(int *)(extraout_r2 + 0x14) + 0x3b8);
  uVar5 = 0;
  if (iVar2 != 0) {
    if (0xfc < (byte)(*(char *)(iVar2 + 4) - 2U)) {
      return 0xffffffea;
    }
    uVar5 = 1;
  }
  iVar2 = *(int *)(*(int *)(extraout_r2 + 0x14) + 0x3bc);
  if (iVar2 == 0) {
    if (uVar5 != 0) goto LAB_000191fe;
  }
  else {
    uVar4 = *(uint *)(iVar2 + 4);
    if ((uVar4 & ~(uint)*(byte *)(*piVar3 + 700)) != 0) {
      return 0xffffffa1;
    }
    if ((uVar4 == 0) || ((int)(uVar4 << 0x1f) < 0)) {
      uVar5 = uVar5 | 2;
LAB_000191fe:
      pcVar7 = *(code **)(*piVar6 + 0x188);
      if (pcVar7 != (code *)0x0) {
        uVar1 = (*pcVar7)(piVar6 + 0x68,piVar3,&stack0xfffffff6,uVar5);
        return uVar1;
      }
      return DAT_00019224;
    }
  }
  return 0xffffffea;
}



/* ===== nl80211_crit_protocol_start @ 00019228 size=84 ===== */

int nl80211_crit_protocol_start(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar3 = *(int **)(param_2 + 0x18);
  pcVar4 = *(code **)(*piVar3 + 0x150);
  if (pcVar4 == (code *)0x0) {
    return -0x5f;
  }
  if (*(int *)(*piVar3 + 0x154) != 0) {
    if (piVar3[0x3e] != 0) {
      return -0x10;
    }
    iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x2cc);
    uVar2 = 0;
    if (((iVar1 == 0) || (uVar2 = *(ushort *)(iVar1 + 4), uVar2 < 4)) &&
       (iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x2d0), iVar1 != 0)) {
      iVar1 = (*pcVar4)(piVar3 + 0x68,*(undefined4 *)(param_2 + 0x1c),uVar2,
                        *(undefined2 *)(iVar1 + 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      piVar3[0x3e] = *(int *)(param_2 + 4);
      return 0;
    }
  }
  return -0x16;
}



/* ===== nl80211_set_multicast_to_unicast @ 0001927c size=60 ===== */

undefined4 nl80211_set_multicast_to_unicast(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_2 + 0x18) + 0x18c);
  if ((UNRECOVERED_JUMPTABLE != (code *)0x0) &&
     ((iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x1c) + 0x1c4) + 4), iVar2 == 3 || (iVar2 == 9))
     )) {
                    /* WARNING: Could not recover jumptable at 0x000192ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(int **)(param_2 + 0x18) + 0x68,*(int *)(param_2 + 0x1c),
                       *(int *)(*(int *)(param_2 + 0x14) + 0x3d0) != 0);
    return uVar1;
  }
  return 0xffffffa1;
}



/* ===== cfg80211_sinfo_release_content @ 000192b8 size=8 ===== */

void cfg80211_sinfo_release_content(int param_1)

{
  kfree(*(undefined4 *)(param_1 + 0xb4));
  return;
}



/* ===== nl80211_dump_wiphy_done @ 000192c0 size=12 ===== */

undefined4 nl80211_dump_wiphy_done(int param_1)

{
  kfree(*(undefined4 *)(param_1 + 0x30));
  return 0;
}



/* ===== validate_beacon_head @ 000192cc size=106 ===== */

undefined4 validate_beacon_head(ushort *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *param_1 - 4;
  if (1 < uVar3) {
    if ((param_1[2] & 0xfc) == 0x1c) {
      iVar5 = 4;
      uVar4 = 0xf;
    }
    else {
      iVar5 = 0x18;
      uVar4 = 0x24;
    }
    if ((uVar4 <= uVar3) && (iVar1 = ieee80211_hdrlen(), iVar1 == iVar5)) {
      iVar5 = uVar4 + 4 + (int)param_1;
      iVar1 = (uVar3 - uVar4) + iVar5;
      for (; (iVar2 = iVar1 - iVar5, 1 < iVar2 && ((int)(*(byte *)(iVar5 + 1) + 2) <= iVar2));
          iVar5 = iVar5 + 2 + (uint)*(byte *)(iVar5 + 1)) {
      }
      if (iVar1 == iVar5) {
        return 0;
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = DAT_00019338;
    param_2[1] = param_1;
    param_2[2] = 0;
  }
  return 0xffffffea;
}



/* ===== nla_parse_nested_deprecated @ 0001933c size=28 ===== */

void nla_parse_nested_deprecated
               (undefined4 param_1,undefined4 param_2,ushort *param_3,undefined4 param_4,
               undefined4 param_5)

{
  __nla_parse(param_1,param_2,param_3 + 2,*param_3 - 4,param_4,0,param_5);
  return;
}



/* ===== nl80211_parse_mesh_config @ 00019358 size=494 ===== */

undefined4 nl80211_parse_mesh_config(int param_1,undefined2 *param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_90 [4];
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x8c);
  if ((iVar2 == 0) ||
     (iVar2 = nla_parse_nested_deprecated
                        (auStack_90,0x1f,iVar2,DAT_00019548,*(undefined4 *)(param_1 + 0x20)),
     iVar2 != 0)) {
LAB_00019368:
    uVar1 = 0xffffffea;
  }
  else {
    if (local_8c != 0) {
      *param_2 = *(undefined2 *)(local_8c + 4);
    }
    uVar3 = (uint)(local_8c != 0);
    if (local_88 != 0) {
      uVar3 = uVar3 | 2;
      param_2[1] = *(undefined2 *)(local_88 + 4);
    }
    if (local_84 != 0) {
      uVar3 = uVar3 | 4;
      param_2[2] = *(undefined2 *)(local_84 + 4);
    }
    if (local_80 != 0) {
      uVar3 = uVar3 | 8;
      param_2[3] = *(undefined2 *)(local_80 + 4);
    }
    if (local_7c != 0) {
      uVar3 = uVar3 | 0x10;
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(local_7c + 4);
    }
    if (local_78 != 0) {
      uVar3 = uVar3 | 0x20;
      *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)(local_78 + 4);
    }
    if (local_54 != 0) {
      uVar3 = uVar3 | 0x4000;
      *(undefined1 *)(param_2 + 5) = *(undefined1 *)(local_54 + 4);
    }
    if (local_74 != 0) {
      uVar3 = uVar3 | 0x40;
      *(bool *)((int)param_2 + 0xb) = *(char *)(local_74 + 4) != '\0';
    }
    if (local_3c != 0) {
      uVar3 = uVar3 | 0x100000;
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(local_3c + 4);
    }
    if (local_70 != 0) {
      uVar3 = uVar3 | 0x80;
      *(undefined1 *)(param_2 + 8) = *(undefined1 *)(local_70 + 4);
    }
    if (local_6c != 0) {
      uVar3 = uVar3 | 0x100;
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(local_6c + 4);
    }
    if (local_68 != 0) {
      uVar3 = uVar3 | 0x200;
      param_2[0xc] = *(undefined2 *)(local_68 + 4);
    }
    if (local_64 != 0) {
      uVar3 = uVar3 | 0x400;
      *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(local_64 + 4);
    }
    if (local_60 != 0) {
      uVar3 = uVar3 | 0x800;
      param_2[0x10] = *(undefined2 *)(local_60 + 4);
    }
    if (local_48 != 0) {
      uVar3 = uVar3 | 0x20000;
      param_2[0x11] = *(undefined2 *)(local_48 + 4);
    }
    if (local_5c != 0) {
      uVar3 = uVar3 | 0x1000;
      param_2[0x12] = *(undefined2 *)(local_5c + 4);
    }
    if (local_58 != 0) {
      uVar3 = uVar3 | 0x2000;
      *(undefined1 *)(param_2 + 0x13) = *(undefined1 *)(local_58 + 4);
    }
    if (local_50 != 0) {
      uVar3 = uVar3 | 0x8000;
      param_2[0x15] = *(undefined2 *)(local_50 + 4);
    }
    if (local_4c != 0) {
      uVar3 = uVar3 | 0x10000;
      *(bool *)(param_2 + 0x16) = *(char *)(local_4c + 4) != '\0';
    }
    if (local_44 != 0) {
      uVar3 = uVar3 | 0x40000;
      *(bool *)((int)param_2 + 0x2d) = *(char *)(local_44 + 4) != '\0';
    }
    if (local_40 != 0) {
      uVar3 = uVar3 | 0x80000;
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(local_40 + 4);
    }
    if (local_1c != 0) {
      uVar3 = uVar3 | 0x10000000;
      *(bool *)((int)param_2 + 0x27) = *(char *)(local_1c + 4) != '\0';
    }
    if (local_14 != 0) {
      uVar3 = uVar3 | 0x40000000;
      *(bool *)(param_2 + 0x14) = *(char *)(local_14 + 4) != '\0';
    }
    if (local_38 != 0) {
      if ((*(ushort *)(local_38 + 4) & 0xffe8) != 0) goto LAB_00019368;
      uVar3 = uVar3 | 0x200000;
      param_2[0x1a] = *(ushort *)(local_38 + 4) & 0xffef;
    }
    if (local_34 != 0) {
      uVar3 = uVar3 | 0x400000;
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(local_34 + 4);
    }
    if (local_30 != 0) {
      uVar3 = uVar3 | 0x800000;
      param_2[0x1e] = *(undefined2 *)(local_30 + 4);
    }
    if (local_2c != 0) {
      uVar3 = uVar3 | 0x1000000;
      param_2[0x1f] = *(undefined2 *)(local_2c + 4);
    }
    if (local_28 != 0) {
      uVar3 = uVar3 | 0x2000000;
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(local_28 + 4);
    }
    if (local_24 != 0) {
      uVar3 = uVar3 | 0x4000000;
      param_2[0x22] = *(undefined2 *)(local_24 + 4);
    }
    if (local_20 != 0) {
      uVar3 = uVar3 | 0x8000000;
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(local_20 + 4);
    }
    if (local_18 != 0) {
      uVar3 = uVar3 | 0x20000000;
      *(bool *)(param_2 + 0x26) = *(char *)(local_18 + 4) != '\0';
    }
    uVar1 = 0;
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar3;
    }
  }
  return uVar1;
}



/* ===== nl80211_parse_key_new @ 0001954c size=212 ===== */

int nl80211_parse_key_new(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [4];
  int local_44;
  int local_40;
  undefined1 auStack_3c [4];
  ushort *local_38;
  int local_34;
  int local_30;
  ushort *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = nla_parse_nested_deprecated
                    (auStack_3c,10,param_2,DAT_00019620,*(undefined4 *)(param_1 + 0x20));
  if (iVar1 == 0) {
    *(bool *)(param_3 + 9) = local_28 != 0;
    *(bool *)((int)param_3 + 0x25) = local_24 != 0;
    *(bool *)((int)param_3 + 0x26) = local_14 != 0;
    if (local_28 != 0) {
      *(undefined1 *)((int)param_3 + 0x27) = 1;
      *(undefined1 *)(param_3 + 10) = 1;
    }
    if ((param_3[9] & 0xffff00) != 0) {
      *(undefined1 *)(param_3 + 10) = 1;
    }
    if (local_34 != 0) {
      param_3[7] = (uint)*(byte *)(local_34 + 4);
    }
    if (local_38 != (ushort *)0x0) {
      *param_3 = local_38 + 2;
      param_3[2] = *local_38 - 4;
    }
    if (local_2c != (ushort *)0x0) {
      param_3[1] = local_2c + 2;
      param_3[3] = *local_2c - 4;
    }
    if (local_30 != 0) {
      param_3[5] = *(undefined4 *)(local_30 + 4);
    }
    if (local_20 != 0) {
      param_3[8] = *(undefined4 *)(local_20 + 4);
    }
    if (local_1c != 0) {
      iVar2 = nla_parse_nested_deprecated
                        (auStack_48,2,local_1c,DAT_00019624,*(undefined4 *)(param_1 + 0x20));
      if (iVar2 != 0) {
        return iVar2;
      }
      *(bool *)((int)param_3 + 0x27) = local_44 != 0;
      *(bool *)(param_3 + 10) = local_40 != 0;
    }
    if (local_18 != 0) {
      param_3[6] = (uint)*(byte *)(local_18 + 4);
    }
  }
  return iVar1;
}



/* ===== parse_station_flags @ 00019628 size=136 ===== */

undefined4 parse_station_flags(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int aiStack_30 [8];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x10c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x44);
    if (iVar1 != 0) {
      iVar1 = nla_parse_nested_deprecated
                        (aiStack_30,7,iVar1,DAT_000196b0,*(undefined4 *)(param_1 + 0x20));
      if (iVar1 != 0) {
        return 0xffffffea;
      }
      if (9 < param_2) {
        return 0xffffffea;
      }
      uVar2 = 1 << (param_2 & 0xff);
      if ((uVar2 & 0x104) == 0) {
        if ((uVar2 & 0x218) == 0) {
          if (-1 < (int)(uVar2 << 0x18)) {
            return 0xffffffea;
          }
          uVar3 = 0x32;
        }
        else {
          uVar3 = 0x1e;
        }
      }
      else {
        uVar3 = 0x42;
      }
      *(undefined4 *)(param_3 + 8) = uVar3;
      uVar2 = 1;
      do {
        if ((aiStack_30[uVar2] != 0) &&
           (*(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) | 1 << (uVar2 & 0xff), uVar2 == 7))
        {
          return 0xffffffea;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != 8);
    }
  }
  else {
    uVar2 = *(uint *)(iVar1 + 4);
    *(uint *)(param_3 + 8) = uVar2;
    *(uint *)(param_3 + 0xc) = *(uint *)(iVar1 + 8) & uVar2;
    if ((int)(uVar2 << 0x1f) < 0) {
      return 0xffffffea;
    }
  }
  return 0;
}



/* ===== nl80211_parse_beacon @ 000196b4 size=240 ===== */

int nl80211_parse_beacon(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  int local_1c;
  ushort *local_18;
  ushort *local_14;
  
  memset(param_3,0,0x44);
  bVar1 = false;
  if (*(int *)(param_2 + 0x38) == 0) {
LAB_000196e4:
    if (*(int *)(param_2 + 0x3c) == 0) {
      if (!bVar1) goto LAB_000196da;
    }
    else {
      param_3[1] = *(int *)(param_2 + 0x3c) + 4;
      param_3[10] = **(ushort **)(param_2 + 0x3c) - 4;
    }
    if (*(int *)(param_2 + 0xa8) != 0) {
      param_3[2] = *(int *)(param_2 + 0xa8) + 4;
      param_3[0xb] = **(ushort **)(param_2 + 0xa8) - 4;
    }
    if (*(int *)(param_2 + 0x1fc) != 0) {
      param_3[3] = *(int *)(param_2 + 0x1fc) + 4;
      param_3[0xc] = **(ushort **)(param_2 + 0x1fc) - 4;
    }
    if (*(int *)(param_2 + 0x200) != 0) {
      param_3[4] = *(int *)(param_2 + 0x200) + 4;
      param_3[0xd] = **(ushort **)(param_2 + 0x200) - 4;
    }
    if (*(int *)(param_2 + 0x244) != 0) {
      param_3[5] = *(int *)(param_2 + 0x244) + 4;
      param_3[0xe] = **(ushort **)(param_2 + 0x244) - 4;
    }
    if (*(int *)(param_2 + 0x438) == 0) {
      *(undefined1 *)(param_3 + 8) = 0xff;
      iVar2 = 0;
    }
    else {
      iVar2 = nla_parse_nested_deprecated(auStack_20,3,*(int *)(param_2 + 0x438),0,0);
      if (iVar2 == 0) {
        if ((local_1c == 0) || (-1 < (int)((uint)*(byte *)(param_1 + 0x1d4) << 0x1f))) {
          iVar2 = -0x5f;
        }
        else {
          *(undefined1 *)(param_3 + 8) = 1;
          if (local_18 != (ushort *)0x0) {
            param_3[6] = (int)(local_18 + 2);
            param_3[0xf] = *local_18 - 4;
          }
          if (local_14 != (ushort *)0x0) {
            param_3[7] = (int)(local_14 + 2);
            param_3[0x10] = *local_14 - 4;
          }
        }
      }
    }
  }
  else {
    *param_3 = *(int *)(param_2 + 0x38) + 4;
    iVar2 = **(ushort **)(param_2 + 0x38) - 4;
    param_3[9] = iVar2;
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_000196e4;
    }
LAB_000196da:
    iVar2 = -0x16;
  }
  return iVar2;
}



/* ===== nl80211_update_ft_ies @ 000197a4 size=84 ===== */

undefined4 nl80211_update_ft_ies(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  uint local_14;
  ushort *local_10;
  int local_c;
  
  piVar1 = *(int **)(param_2 + 0x18);
  if (*(int *)(*piVar1 + 0x14c) == 0) {
    uVar2 = 0xffffffa1;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x2c4);
    if ((iVar4 == 0) ||
       (puVar3 = *(ushort **)(*(int *)(param_2 + 0x14) + 0xa8), puVar3 == (ushort *)0x0)) {
      uVar2 = 0xffffffea;
    }
    else {
      local_14 = (uint)*(ushort *)(iVar4 + 4);
      local_10 = puVar3 + 2;
      local_c = *puVar3 - 4;
      uVar2 = (**(code **)(*piVar1 + 0x14c))
                        (piVar1 + 0x68,*(undefined4 *)(param_2 + 0x1c),&local_14,
                         *(code **)(*piVar1 + 0x14c),param_1);
    }
  }
  return uVar2;
}



/* ===== nl80211_set_mcast_rate @ 000197f8 size=110 ===== */

undefined4 nl80211_set_mcast_rate(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_24 [20];
  
  piVar4 = *(int **)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  uVar2 = *(uint *)(*(int *)(iVar5 + 0x1c4) + 4);
  if (((uVar2 < 0xc) && ((~(0x882U >> (uVar2 & 0xff)) & 1) == 0)) && (*(int *)(*piVar4 + 0xc0) != 0)
     ) {
    memset(auStack_24,0,0x14);
    iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x1ac);
    if ((iVar3 == 0) ||
       (iVar3 = nl80211_parse_mcast_rate(piVar4,auStack_24,*(undefined4 *)(iVar3 + 4)), iVar3 == 0))
    {
      uVar1 = 0xffffffea;
    }
    else {
      uVar1 = DAT_00019868;
      if (*(code **)(*piVar4 + 0xc0) != (code *)0x0) {
        uVar1 = (**(code **)(*piVar4 + 0xc0))(piVar4 + 0x68,iVar5,auStack_24);
      }
    }
  }
  else {
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_setdel_pmksa @ 0001986c size=208 ===== */

undefined4 nl80211_setdel_pmksa(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int local_34;
  int local_30;
  ushort *local_2c;
  int local_28;
  ushort *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  piVar5 = *(int **)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x1c);
  memset(&local_34,0,0x24);
  iVar3 = *(int *)(param_2 + 0x14);
  if (*(int *)(iVar3 + 0x154) == 0) {
    return 0xffffffea;
  }
  local_30 = *(int *)(iVar3 + 0x154) + 4;
  if (*(int *)(iVar3 + 0x18) == 0) {
    puVar2 = *(ushort **)(iVar3 + 0xd0);
    if (puVar2 == (ushort *)0x0) {
      return 0xffffffea;
    }
    if (*(int *)(iVar3 + 0x3f4) == 0) {
      return 0xffffffea;
    }
    if ((**(char **)(param_2 + 0xc) != '5') && (*(int *)(iVar3 + 0x3f8) == 0)) {
      return 0xffffffea;
    }
    local_24 = puVar2 + 2;
    local_1c = *(int *)(iVar3 + 0x3f4) + 4;
    local_20 = *puVar2 - 4;
  }
  else {
    local_34 = *(int *)(iVar3 + 0x18) + 4;
  }
  puVar2 = *(ushort **)(iVar3 + 0x3f8);
  if (puVar2 != (ushort *)0x0) {
    local_2c = puVar2 + 2;
    local_28 = *puVar2 - 4;
  }
  if (*(int *)(iVar3 + 0x47c) != 0) {
    local_18 = *(undefined4 *)(*(int *)(iVar3 + 0x47c) + 4);
  }
  if (*(int *)(iVar3 + 0x480) != 0) {
    local_14 = *(undefined1 *)(*(int *)(iVar3 + 0x480) + 4);
  }
  iVar3 = *(int *)(*(int *)(iVar6 + 0x1c4) + 4);
  if (((iVar3 == 2) || (iVar3 == 8)) ||
     ((iVar3 == 3 && ((int)((uint)*(byte *)(piVar5 + 0x75) << 0x1d) < 0)))) {
    if (**(char **)(param_2 + 0xc) == '4') {
      pcVar4 = *(code **)(*piVar5 + 0xe0);
    }
    else {
      if (**(char **)(param_2 + 0xc) != '5') {
        return 0xffffffa1;
      }
      pcVar4 = *(code **)(*piVar5 + 0xe4);
    }
    if (pcVar4 != (code *)0x0) {
      uVar1 = (*pcVar4)(piVar5 + 0x68,iVar6,&local_34);
      return uVar1;
    }
  }
  return 0xffffffa1;
}



/* ===== nl80211_del_station @ 0001993c size=142 ===== */

undefined4 nl80211_del_station(undefined4 param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int local_10;
  ushort local_c;
  short local_a;
  
  local_10 = 0;
  iVar4 = *(int *)(param_2 + 0x14);
  piVar2 = *(int **)(param_2 + 0x18);
  if (*(int *)(iVar4 + 0x18) != 0) {
    local_10 = *(int *)(iVar4 + 0x18) + 4;
  }
  uVar5 = *(uint *)(*(int *)(*(int *)(param_2 + 0x1c) + 0x1c4) + 4);
  if ((uVar5 < 10) &&
     ((uVar5 = 1 << (uVar5 & 0xff), (uVar5 & 0x298) != 0 ||
      (((int)(uVar5 << 0x1e) < 0 && ((int)((uint)*(byte *)((int)piVar2 + 0x1d5) << 0x1b) < 0)))))) {
    if (*(int *)(*piVar2 + 0x40) == 0) {
      return 0xffffffa1;
    }
    if (*(int *)(iVar4 + 0xa4) == 0) {
      local_c = 0xc;
    }
    else {
      bVar1 = *(byte *)(*(int *)(iVar4 + 0xa4) + 4);
      local_c = (ushort)bVar1;
      if ((bVar1 != 10) && (bVar1 != 0xc)) goto LAB_0001995e;
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      local_a = 2;
    }
    else {
      local_a = *(short *)(*(int *)(iVar4 + 0xd8) + 4);
      if (local_a == 0) goto LAB_0001995e;
    }
    uVar3 = (**(code **)(*piVar2 + 0x40))(piVar2 + 0x68,*(int *)(param_2 + 0x1c),&local_10);
  }
  else {
LAB_0001995e:
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



/* ===== nl80211_external_auth @ 000199ca size=196 ===== */

void nl80211_external_auth(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint __n;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  undefined1 auStack_54 [4];
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 auStack_4a [32];
  undefined1 local_2a;
  undefined2 local_24;
  int local_20;
  int local_1c;
  
  piVar1 = DAT_00019a90;
  piVar5 = *(int **)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x1c);
  local_1c = *DAT_00019a90;
  if (*(int *)(*piVar5 + 0x19c) != 0) {
    iVar4 = *(int *)(param_2 + 0x14);
    puVar7 = *(ushort **)(iVar4 + 0xd0);
    if ((((puVar7 == (ushort *)0x0) && (iVar3 = *(int *)(*(int *)(iVar6 + 0x1c4) + 4), iVar3 != 3))
        && (iVar3 != 9)) || ((*(int *)(iVar4 + 0x3d4) == 0 || (*(int *)(iVar4 + 0x120) == 0)))) {
LAB_00019a0c:
      uVar2 = 0xffffffea;
      goto LAB_000199e6;
    }
    memset(auStack_54,0,0x38);
    if (puVar7 != (ushort *)0x0) {
      __n = *puVar7 - 4 & 0xff;
      local_2a = (undefined1)(*puVar7 - 4);
      if (__n == 0) goto LAB_00019a0c;
      memcpy(auStack_4a,puVar7 + 2,__n);
    }
    local_50 = *(undefined4 *)(*(int *)(iVar4 + 0x3d4) + 4);
    local_4c = *(undefined2 *)(*(int *)(iVar4 + 0x3d4) + 8);
    local_24 = *(undefined2 *)(*(int *)(iVar4 + 0x120) + 4);
    if (*(int *)(iVar4 + 0x154) != 0) {
      local_20 = *(int *)(iVar4 + 0x154) + 4;
    }
    if (*(code **)(*piVar5 + 0x19c) != (code *)0x0) {
      uVar2 = (**(code **)(*piVar5 + 0x19c))(piVar5 + 0x68,iVar6,auStack_54);
      goto LAB_000199e6;
    }
  }
  uVar2 = 0xffffffa1;
LAB_000199e6:
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== nl80211_update_owe_info @ 00019a94 size=112 ===== */

undefined4 nl80211_update_owe_info(undefined4 param_1,int param_2,ushort *param_3,int param_4)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ushort *local_20;
  int local_1c;
  
  piVar2 = *(int **)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  if (*(int *)(*piVar2 + 0x1b0) != 0) {
    iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x120);
    if ((iVar4 == 0) || (iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x18), iVar3 == 0)) {
      return 0xffffffea;
    }
    uStack_28 = param_1;
    uStack_24 = param_2;
    local_20 = param_3;
    local_1c = param_4;
    memset(&uStack_28,0,0x10);
    uStack_24 = CONCAT22(*(undefined2 *)(iVar4 + 4),(undefined2)uStack_24);
    nla_memcpy(&uStack_28,iVar3,6);
    puVar1 = *(ushort **)(*(int *)(param_2 + 0x14) + 0xa8);
    if (puVar1 != (ushort *)0x0) {
      local_20 = puVar1 + 2;
      local_1c = *puVar1 - 4;
    }
    if (*(code **)(*piVar2 + 0x1b0) != (code *)0x0) {
      uVar5 = (**(code **)(*piVar2 + 0x1b0))(piVar2 + 0x68,uVar5,&uStack_28);
      return uVar5;
    }
  }
  return 0xffffffa1;
}



/* ===== nla_get_u64 @ 00019b04 size=22 ===== */

undefined8 nla_get_u64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  nla_memcpy(&local_10,param_1,8);
  return CONCAT44(uStack_c,local_10);
}



/* ===== nl80211_nan_del_func @ 00019b1a size=72 ===== */

undefined4 nl80211_nan_del_func(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x1c);
  if (*(int *)(iVar2 + 4) == 0xc) {
    uVar4 = wdev_running(iVar2);
    if ((int)uVar4 == 0) {
      uVar1 = 0xffffff95;
    }
    else if (*(int *)(*(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x14) + 0x160) == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      uVar4 = nla_get_u64();
      (**(code **)(*piVar3 + 0x184))(piVar3 + 0x68,iVar2,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20))
      ;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_tx_mgmt_cancel_wait @ 00019b62 size=80 ===== */

undefined4 nl80211_tx_mgmt_cancel_wait(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x1c);
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x160) == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    if (((*(int *)(*piVar3 + 0xf8) != 0) && (uVar2 = *(uint *)(iVar4 + 4), uVar2 < 0xb)) &&
       ((1 << (uVar2 & 0xff) & 0x71eU) != 0)) {
      uVar5 = nla_get_u64();
                    /* WARNING: Could not recover jumptable at 0x00019ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*piVar3 + 0xf8))
                        (piVar3 + 0x68,iVar4,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      return uVar1;
    }
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_cancel_remain_on_channel @ 00019bb2 size=62 ===== */

undefined4 nl80211_cancel_remain_on_channel(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x160) == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    if (*(int *)(*piVar1 + 0xf0) != 0) {
      uVar3 = nla_get_u64();
                    /* WARNING: Could not recover jumptable at 0x00019be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar1 + 0xf0))
                        (piVar1 + 0x68,uVar2,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
      return uVar2;
    }
    uVar2 = 0xffffffa1;
  }
  return uVar2;
}



/* ===== alloc_skb @ 00019bf0 size=10 ===== */

void alloc_skb(undefined4 param_1,undefined4 param_2)

{
  __alloc_skb(param_1,param_2,0,0xffffffff);
  return;
}



/* ===== nlmsg_new @ 00019bfa size=8 ===== */

void nlmsg_new(int param_1)

{
  alloc_skb(param_1 + 0x13U & 0xfffffffc);
  return;
}



/* ===== nla_nest_start_noflag @ 00019c02 size=24 ===== */

undefined4 nla_nest_start_noflag(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x98);
  iVar1 = nla_put(param_1,param_2,0);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== nla_put_be32 @ 00019c1a size=18 ===== */

void nla_put_be32(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_3;
  uStack_8 = param_3;
  nla_put(param_1,param_2,4,&local_c,param_1);
  return;
}



/* ===== nl80211_put_txq_stats @ 00019c2c size=254 ===== */

undefined4 nl80211_put_txq_stats(int param_1,int *param_2,undefined4 param_3)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  
  psVar1 = (short *)nla_nest_start_noflag(param_1,param_3);
  if ((((((psVar1 == (short *)0x0) ||
         ((*param_2 << 0x1e < 0 && (iVar3 = nla_put_be32(param_1,1,param_2[1]), iVar3 != 0)))) ||
        ((*param_2 << 0x1d < 0 && (iVar3 = nla_put_be32(param_1,2,param_2[2]), iVar3 != 0)))) ||
       ((((*param_2 << 0x1c < 0 && (iVar3 = nla_put_be32(param_1,3,param_2[3]), iVar3 != 0)) ||
         ((*param_2 << 0x1b < 0 && (iVar3 = nla_put_be32(param_1,4,param_2[4]), iVar3 != 0)))) ||
        ((*param_2 << 0x1a < 0 && (iVar3 = nla_put_be32(param_1,5,param_2[5]), iVar3 != 0)))))) ||
      ((*param_2 << 0x19 < 0 && (iVar3 = nla_put_be32(param_1,6,param_2[6]), iVar3 != 0)))) ||
     ((((*param_2 << 0x18 < 0 && (iVar3 = nla_put_be32(param_1,7,param_2[7]), iVar3 != 0)) ||
       ((*param_2 << 0x17 < 0 && (iVar3 = nla_put_be32(param_1,8,param_2[8]), iVar3 != 0)))) ||
      ((((*param_2 << 0x16 < 0 && (iVar3 = nla_put_be32(param_1,9,param_2[9]), iVar3 != 0)) ||
        ((*param_2 << 0x15 < 0 && (iVar3 = nla_put_be32(param_1,10,param_2[10]), iVar3 != 0)))) ||
       ((*param_2 << 0x14 < 0 && (iVar3 = nla_put_be32(param_1,0xb,param_2[0xb]), iVar3 != 0))))))))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *psVar1 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar1;
  }
  return uVar2;
}



/* ===== nla_put_u8 @ 00019d2a size=22 ===== */

void nla_put_u8(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  nla_put(param_1,param_2,1,&stack0xfffffff7,param_1,CONCAT13(param_3,(int3)param_2));
  return;
}



/* ===== nla_put_flag @ 00019d40 size=8 ===== */

void nla_put_flag(undefined4 param_1,undefined4 param_2)

{
  nla_put(param_1,param_2,0);
  return;
}



/* ===== nl80211_put_iftypes @ 00019d48 size=62 ===== */

undefined4 nl80211_put_iftypes(int param_1,undefined4 param_2,uint param_3)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  psVar1 = (short *)nla_nest_start_noflag();
  if (psVar1 == (short *)0x0) {
LAB_00019d56:
    uVar2 = 0xffffff97;
  }
  else {
    iVar4 = 0;
    for (; param_3 != 0; param_3 = param_3 >> 1) {
      if (((int)(param_3 << 0x1f) < 0) && (iVar3 = nla_put_flag(param_1,iVar4), iVar3 != 0))
      goto LAB_00019d56;
      iVar4 = iVar4 + 1;
    }
    *psVar1 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== nla_put_u16 @ 00019d86 size=22 ===== */

void nla_put_u16(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  nla_put(param_1,param_2,2,&stack0xfffffff6,param_1,CONCAT22(param_3,(short)param_2));
  return;
}



/* ===== get_key_callback @ 00019d9c size=170 ===== */

void get_key_callback(int *param_1,int *param_2)

{
  short *psVar1;
  int iVar2;
  
  if ((((((*param_2 == 0) || (iVar2 = nla_put(*param_1,7,param_2[2]), iVar2 == 0)) &&
        ((param_2[1] == 0 || (iVar2 = nla_put(*param_1,10,param_2[3]), iVar2 == 0)))) &&
       ((((param_2[5] == 0 || (iVar2 = nla_put_be32(*param_1,9), iVar2 == 0)) &&
         (psVar1 = (short *)nla_nest_start_noflag(*param_1,0x50), psVar1 != (short *)0x0)) &&
        ((*param_2 == 0 || (iVar2 = nla_put(*param_1,1,param_2[2]), iVar2 == 0)))))) &&
      ((param_2[1] == 0 || (iVar2 = nla_put(*param_1,4,param_2[3]), iVar2 == 0)))) &&
     (((param_2[5] == 0 || (iVar2 = nla_put_be32(*param_1,3), iVar2 == 0)) &&
      (iVar2 = nla_put_u8(*param_1,2,(char)param_1[2]), iVar2 == 0)))) {
    *psVar1 = (short)*(undefined4 *)(*param_1 + 0x98) - (short)psVar1;
  }
  else {
    param_1[1] = 1;
  }
  return;
}



/* ===== nla_put_u64_64bit @ 00019e46 size=24 ===== */

void nla_put_u64_64bit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  nla_put_64bit(param_1,param_2,8,&local_10,param_5,param_2);
  return;
}



/* ===== nl80211_tx_control_port @ 00019e5e size=266 ===== */

int nl80211_tx_control_port(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  piVar5 = *(int **)(param_2 + 0x18);
  iVar7 = *(int *)(param_2 + 0x1c);
  iVar3 = *(int *)(param_2 + 0x14);
  local_30 = 0;
  uStack_2c = 0;
  iVar6 = *(int *)(iVar3 + 0x238);
  iVar8 = *(int *)(iVar7 + 0x1c4);
  if ((-1 < (int)((uint)*(byte *)((int)piVar5 + 0x1d3) << 0x1d)) || (*(int *)(*piVar5 + 0x1a0) == 0)
     ) {
    return -0x5f;
  }
  if (((*(int *)(iVar3 + 0xcc) == 0) || (*(int *)(iVar3 + 0x18) == 0)) ||
     (*(int *)(iVar3 + 0x198) == 0)) {
    if (*(undefined4 **)(param_2 + 0x20) != (undefined4 *)0x0) {
      **(undefined4 **)(param_2 + 0x20) = DAT_00019f68;
    }
    return -0x16;
  }
  iVar3 = iVar8 + 0x24;
  mutex_lock(iVar3);
  if (*(uint *)(iVar8 + 4) < 10) {
    uVar4 = 1 << (*(uint *)(iVar8 + 4) & 0xff);
    if ((uVar4 & 0x288) != 0) {
LAB_00019ed6:
      mutex_unlock(iVar3);
      iVar3 = *(int *)(param_2 + 0x14);
      uVar1 = *(ushort *)(*(int *)(iVar3 + 0x198) + 4);
      if (iVar6 == 0) {
        puVar2 = &local_30;
      }
      else {
        puVar2 = (undefined4 *)0x0;
      }
      iVar3 = (**(code **)(*piVar5 + 0x1a0))
                        (piVar5 + 0x68,iVar7,*(ushort **)(iVar3 + 0xcc) + 2,
                         **(ushort **)(iVar3 + 0xcc) - 4,*(int *)(iVar3 + 0x18) + 4,
                         uVar1 << 8 | uVar1 >> 8,*(int *)(iVar3 + 0x19c) != 0,puVar2);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (iVar6 != 0) {
        return 0;
      }
      iVar3 = *(int *)(param_2 + 0x20);
      if (iVar3 == 0) {
        return 0;
      }
      *(undefined1 *)(iVar3 + 0x20) = 8;
      *(undefined4 *)(iVar3 + 0xc) = local_30;
      *(undefined4 *)(iVar3 + 0x10) = uStack_2c;
      return 0;
    }
    if ((uVar4 & 0x106) != 0) {
      if (*(int *)(iVar8 + 0x8c) != 0) goto LAB_00019ed6;
      iVar6 = -0x6b;
      goto LAB_00019f54;
    }
  }
  iVar6 = -0x5f;
LAB_00019f54:
  mutex_unlock(iVar3);
  return iVar6;
}



/* ===== nl80211_del_pmk @ 00019f6c size=96 ===== */

undefined4 nl80211_del_pmk(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(iVar6 + 0x1c4);
  iVar2 = *(int *)(iVar4 + 4);
  if (((iVar2 == 2) || (iVar2 == 8)) && ((int)((uint)*(byte *)((int)piVar5 + 0x1d2) << 0x1f) < 0)) {
    if (*(int *)(*(int *)(param_2 + 0x14) + 0x18) == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      iVar4 = iVar4 + 0x24;
      mutex_lock(iVar4);
      pcVar3 = *(code **)(*piVar5 + 0x198);
      if (pcVar3 == (code *)0x0) {
        uVar1 = 0xffffffa1;
      }
      else {
        uVar1 = (*pcVar3)(piVar5 + 0x68,iVar6,*(int *)(*(int *)(param_2 + 0x14) + 0x18) + 4,pcVar3,
                          param_4);
      }
      mutex_unlock(iVar4);
    }
  }
  else {
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_tdls_cancel_channel_switch @ 00019fcc size=94 ===== */

undefined4
nl80211_tdls_cancel_channel_switch
          (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  iVar3 = *(int *)(iVar5 + 0x1c4);
  if ((((*(int *)(*piVar4 + 0x170) == 0) || (*(int *)(*piVar4 + 0x174) == 0)) ||
      (-1 < piVar4[0x73] << 3)) || ((iVar2 = *(int *)(iVar3 + 4), iVar2 != 2 && (iVar2 != 8)))) {
    uVar1 = 0xffffffa1;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
    if (iVar2 == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      iVar3 = iVar3 + 0x24;
      mutex_lock(iVar3);
      (**(code **)(*piVar4 + 0x174))
                (piVar4 + 0x68,iVar5,iVar2 + 4,*(code **)(*piVar4 + 0x174),param_4);
      mutex_unlock(iVar3);
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== nl80211_del_tx_ts @ 0001a02a size=84 ===== */

undefined4 nl80211_del_tx_ts(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  
  piVar6 = *(int **)(param_2 + 0x18);
  iVar8 = *(int *)(param_2 + 0x1c);
  iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x348);
  if ((iVar3 == 0) || (iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x18), iVar4 == 0)) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar5 = *(int *)(iVar8 + 0x1c4) + 0x24;
    uVar1 = *(undefined1 *)(iVar3 + 4);
    mutex_lock(iVar5);
    pcVar7 = *(code **)(*piVar6 + 0x16c);
    if (pcVar7 == (code *)0x0) {
      uVar2 = 0xffffffa1;
    }
    else {
      uVar2 = (*pcVar7)(piVar6 + 0x68,iVar8,uVar1,iVar4 + 4);
    }
    mutex_unlock(iVar5);
  }
  return uVar2;
}



/* ===== nl80211_add_tx_ts @ 0001a07e size=162 ===== */

undefined4 nl80211_add_tx_ts(undefined4 param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar6 = *(int **)(param_2 + 0x18);
  iVar8 = *(int *)(param_2 + 0x1c);
  iVar7 = *(int *)(iVar8 + 0x1c4);
  if (-1 < piVar6[0x73] << 5) {
    return 0xffffffa1;
  }
  iVar3 = *(int *)(param_2 + 0x14);
  if (((*(int *)(iVar3 + 0x348) == 0) || (iVar9 = *(int *)(iVar3 + 0x18), iVar9 == 0)) ||
     (*(int *)(iVar3 + 0x34c) == 0)) {
    return 0xffffffea;
  }
  bVar1 = *(byte *)(*(int *)(iVar3 + 0x348) + 4);
  uVar2 = *(undefined1 *)(*(int *)(iVar3 + 0x34c) + 4);
  if (7 < bVar1) {
    return 0xffffffea;
  }
  sVar5 = 0;
  if ((*(int *)(iVar3 + 0x350) != 0) &&
     (sVar5 = *(short *)(*(int *)(iVar3 + 0x350) + 4), sVar5 == 0)) {
    return 0xffffffea;
  }
  mutex_lock(iVar7 + 0x24);
  if ((*(int *)(iVar7 + 4) == 2) || (*(int *)(iVar7 + 4) == 8)) {
    if (*(int *)(iVar7 + 0x8c) == 0) {
      uVar4 = 0xffffff95;
      goto LAB_0001a0fa;
    }
    if (*(code **)(*piVar6 + 0x168) != (code *)0x0) {
      uVar4 = (**(code **)(*piVar6 + 0x168))
                        (piVar6 + 0x68,iVar8,bVar1,iVar9 + 4,uVar2,sVar5,param_3);
      goto LAB_0001a0fa;
    }
  }
  uVar4 = 0xffffffa1;
LAB_0001a0fa:
  mutex_unlock(iVar7 + 0x24);
  return uVar4;
}



/* ===== nl80211_set_rekey_data @ 0001a120 size=218 ===== */

int nl80211_set_rekey_data(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [4];
  short *local_3c;
  short *local_38;
  int local_34;
  int local_30;
  short *local_2c;
  short *local_28;
  int local_24;
  undefined4 local_20;
  char local_1c;
  char local_1b;
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x1c);
  iVar5 = *(int *)(iVar4 + 0x1c4);
  memset(&local_2c,0,0x14);
  iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x1e8);
  if (iVar2 != 0) {
    iVar2 = nla_parse_nested_deprecated
                      (auStack_40,4,iVar2,DAT_0001a1fc,*(undefined4 *)(param_2 + 0x20));
    if (iVar2 != 0) {
      return iVar2;
    }
    if (((local_34 != 0) && (local_3c != (short *)0x0)) && (local_38 != (short *)0x0)) {
      sVar1 = *local_3c;
      if (((sVar1 == 0x14) || ((piVar3[0x71] << 0x1f < 0 && (sVar1 == 0x24)))) &&
         ((*local_38 == 0x14 || ((piVar3[0x71] << 0x1f < 0 && (sVar1 == 0x1c)))))) {
        local_2c = local_3c + 2;
        local_24 = local_34 + 4;
        local_28 = local_38 + 2;
        local_1c = (char)*local_3c + -4;
        local_1b = (char)*local_38 + -4;
        if (local_30 != 0) {
          local_20 = *(undefined4 *)(local_30 + 4);
        }
        iVar2 = iVar5 + 0x24;
        mutex_lock(iVar2);
        if (*(int *)(iVar5 + 0x8c) == 0) {
          iVar4 = -0x6b;
        }
        else if (*(code **)(*piVar3 + 0x120) == (code *)0x0) {
          iVar4 = -0x5f;
        }
        else {
          iVar4 = (**(code **)(*piVar3 + 0x120))(piVar3 + 0x68,iVar4,&local_2c);
        }
        mutex_unlock(iVar2);
        return iVar4;
      }
      return -0x22;
    }
  }
  return -0x16;
}



/* ===== nl80211_update_mesh_config @ 0001a200 size=100 ===== */

int nl80211_update_mesh_config(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_6c;
  undefined1 auStack_68 [80];
  
  piVar2 = *(int **)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x1c);
  iVar3 = *(int *)(iVar4 + 0x1c4);
  if ((*(int *)(iVar3 + 4) == 7) && (*(int *)(*piVar2 + 0x70) != 0)) {
    iVar1 = nl80211_parse_mesh_config(param_2,auStack_68,&local_6c);
    if (iVar1 == 0) {
      mutex_lock(iVar3 + 0x24);
      if (*(char *)(iVar3 + 0x59) == '\0') {
        iVar1 = -0x43;
      }
      else {
        iVar1 = (**(code **)(*piVar2 + 0x70))(piVar2 + 0x68,iVar4,local_6c,auStack_68);
      }
      mutex_unlock(iVar3 + 0x24);
    }
  }
  else {
    iVar1 = -0x5f;
  }
  return iVar1;
}



/* ===== nl80211_set_bss @ 0001a264 size=248 ===== */

undefined4 nl80211_set_bss(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined2 *local_2c;
  char local_28;
  uint local_24;
  uint local_20;
  undefined2 local_1c;
  
  piVar6 = *(int **)(param_2 + 0x18);
  iVar7 = *(int *)(param_2 + 0x1c);
  iVar5 = *(int *)(iVar7 + 0x1c4);
  memset(&local_2c,0,0x14);
  local_38 = 0xffffffff;
  local_34 = 0xffffffff;
  local_30 = 0xffffffff;
  local_24 = 0xffffffff;
  local_20 = 0xffffffff;
  local_1c = 0xffff;
  iVar4 = *(int *)(param_2 + 0x14);
  if (*(int *)(iVar4 + 0x70) != 0) {
    local_38 = (uint)*(byte *)(*(int *)(iVar4 + 0x70) + 4);
  }
  if (*(int *)(iVar4 + 0x74) != 0) {
    local_34 = (uint)*(byte *)(*(int *)(iVar4 + 0x74) + 4);
  }
  if (*(int *)(iVar4 + 0x78) != 0) {
    local_30 = (uint)*(byte *)(*(int *)(iVar4 + 0x78) + 4);
  }
  puVar3 = *(undefined2 **)(iVar4 + 0x90);
  if (puVar3 != (undefined2 *)0x0) {
    local_2c = puVar3 + 2;
    local_28 = (char)*puVar3 + -4;
  }
  if (*(int *)(iVar4 + 0x180) != 0) {
    local_24 = (uint)(*(char *)(*(int *)(iVar4 + 0x180) + 4) != '\0');
  }
  if (*(int *)(iVar4 + 0x1b4) != 0) {
    local_20 = (uint)*(ushort *)(*(int *)(iVar4 + 0x1b4) + 4);
  }
  if ((*(int *)(iVar4 + 0x288) == 0) ||
     ((*(int *)(iVar5 + 4) == 9 &&
      ((cVar1 = *(char *)(*(int *)(iVar4 + 0x288) + 4), local_1c = CONCAT11(0xff,cVar1),
       cVar1 == '\0' || (piVar6[0x73] << 0x14 < 0)))))) {
    if (*(int *)(iVar4 + 0x28c) == 0) {
LAB_0001a2e0:
      if ((*(int *)(*piVar6 + 0x84) != 0) &&
         ((*(int *)(iVar5 + 4) == 3 || (*(int *)(iVar5 + 4) == 9)))) {
        mutex_lock(iVar5 + 0x24);
        uVar2 = (**(code **)(*piVar6 + 0x84))(piVar6 + 0x68,iVar7,&local_38);
        mutex_unlock(iVar5 + 0x24);
        return uVar2;
      }
      return 0xffffffa1;
    }
    if (*(int *)(iVar5 + 4) == 9) {
      cVar1 = *(char *)(*(int *)(iVar4 + 0x28c) + 4);
      local_1c = CONCAT11(cVar1,(undefined1)local_1c);
      if ((cVar1 == '\0') || (piVar6[0x73] << 0x13 < 0)) goto LAB_0001a2e0;
    }
  }
  return 0xffffffea;
}



/* ===== nl80211_set_beacon @ 0001a35c size=96 ===== */

int nl80211_set_beacon(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_5c [72];
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x1c);
  iVar2 = *(int *)(iVar4 + 0x1c4);
  if (((*(int *)(iVar2 + 4) == 3) || (*(int *)(iVar2 + 4) == 9)) && (*(int *)(*piVar3 + 0x34) != 0))
  {
    if (*(int *)(iVar2 + 0xd0) == 0) {
      iVar1 = -0x16;
    }
    else {
      iVar1 = nl80211_parse_beacon(piVar3,*(undefined4 *)(param_2 + 0x14),auStack_5c);
      if (iVar1 == 0) {
        mutex_lock(iVar2 + 0x24);
        iVar1 = (**(code **)(*piVar3 + 0x34))(piVar3 + 0x68,iVar4,auStack_5c);
        mutex_unlock(iVar2 + 0x24);
      }
    }
  }
  else {
    iVar1 = -0x5f;
  }
  return iVar1;
}



/* ===== nl80211_set_pmk @ 0001a3bc size=194 ===== */

undefined4 nl80211_set_pmk(void *param_1,int param_2,short *param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_28;
  int local_24;
  short *local_20;
  int local_1c;
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  iVar7 = *(int *)(iVar5 + 0x1c4);
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  memset(&local_28,0,0x10);
  if (((*(int *)(iVar7 + 4) != 2) && (*(int *)(iVar7 + 4) != 8)) ||
     (-1 < (int)((uint)*(byte *)((int)piVar3 + 0x1d2) << 0x1f))) {
    return 0xffffffa1;
  }
  if ((*(int *)(*(int *)(param_2 + 0x14) + 0x18) == 0) ||
     (*(int *)(*(int *)(param_2 + 0x14) + 0x3f8) == 0)) {
    return 0xffffffea;
  }
  mutex_lock(iVar7 + 0x24);
  if (*(int *)(iVar7 + 0x8c) == 0) {
    uVar4 = 0xffffff95;
  }
  else {
    iVar6 = *(int *)(param_2 + 0x14);
    local_28 = (void *)(*(int *)(iVar6 + 0x18) + 4);
    iVar1 = memcmp(local_28,(void *)(*(int *)(iVar7 + 0x8c) + 0x74),6);
    if (iVar1 == 0) {
      local_20 = *(short **)(iVar6 + 0x3f8) + 2;
      uVar2 = **(short **)(iVar6 + 0x3f8) - 4;
      local_24 = CONCAT31(local_24._1_3_,(char)uVar2);
      if ((uVar2 & 0xef) == 0x20) {
        if (*(int *)(iVar6 + 0x408) != 0) {
          local_1c = *(int *)(iVar6 + 0x408) + 4;
        }
        if (*(code **)(*piVar3 + 0x194) == (code *)0x0) {
          uVar4 = 0xffffffa1;
        }
        else {
          uVar4 = (**(code **)(*piVar3 + 0x194))(piVar3 + 0x68,iVar5,&local_28);
        }
        goto LAB_0001a41e;
      }
    }
    uVar4 = 0xffffffea;
  }
LAB_0001a41e:
  mutex_unlock(iVar7 + 0x24);
  return uVar4;
}



/* ===== nl80211_stop_nan @ 0001a47e size=26 ===== */

undefined4 nl80211_stop_nan(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x1c) + 4) == 0xc) {
    cfg80211_stop_nan(*(undefined4 *)(param_2 + 0x18));
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_start_nan @ 0001a498 size=142 ===== */

int nl80211_start_nan(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uStack_14;
  
  piVar4 = *(int **)(param_2 + 0x18);
  piVar5 = *(int **)(param_2 + 0x1c);
  uStack_14 = param_2 & 0xffff;
  if (piVar5[1] != 0xc) {
    return -0x5f;
  }
  iVar1 = wdev_running(piVar5);
  if (iVar1 != 0) {
    return -0x11;
  }
  iVar1 = rfkill_blocked(piVar4[6]);
  if (iVar1 != 0) {
    return -0x84;
  }
  iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x3b8);
  if (iVar1 == 0) {
LAB_0001a4cc:
    iVar1 = -0x16;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x3bc);
    uStack_14._0_3_ = CONCAT12(*(undefined1 *)(iVar1 + 4),(undefined2)uStack_14);
    if (iVar2 != 0) {
      uVar3 = *(uint *)(iVar2 + 4);
      if ((uVar3 & ~(uint)*(byte *)(*piVar5 + 700)) != 0) {
        return -0x5f;
      }
      if ((uVar3 != 0) && (-1 < (int)(uVar3 << 0x1f))) goto LAB_0001a4cc;
      uStack_14._3_1_ = (undefined1)uVar3;
    }
    iVar1 = (**(code **)(*piVar4 + 0x178))
                      (piVar4 + 0x68,piVar5,(int)&uStack_14 + 2,*(code **)(*piVar4 + 0x178),param_1)
    ;
    if (iVar1 == 0) {
      *(undefined1 *)((int)piVar5 + 0x31) = 1;
      piVar4[0x11] = piVar4[0x11] + 1;
    }
  }
  return iVar1;
}



/* ===== nl80211_start_p2p_device @ 0001a526 size=82 ===== */

int nl80211_start_p2p_device(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_2 + 0x18);
  iVar3 = *(int *)(param_2 + 0x1c);
  if ((*(int *)(*piVar2 + 0x138) == 0) || (*(int *)(iVar3 + 4) != 10)) {
    iVar1 = -0x5f;
  }
  else {
    iVar1 = wdev_running(iVar3);
    if (iVar1 == 0) {
      iVar1 = rfkill_blocked(piVar2[6]);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*piVar2 + 0x138))
                          (piVar2 + 0x68,iVar3,extraout_r2,*(code **)(*piVar2 + 0x138),param_4);
        if (iVar1 == 0) {
          *(undefined1 *)(iVar3 + 0x31) = 1;
          piVar2[0x11] = piVar2[0x11] + 1;
        }
      }
      else {
        iVar1 = -0x84;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== nl80211_stop_p2p_device @ 0001a578 size=34 ===== */

undefined4 nl80211_stop_p2p_device(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(*(int *)(param_2 + 0x1c) + 4) == 10) &&
     (*(int *)(**(int **)(param_2 + 0x18) + 0x13c) != 0)) {
    cfg80211_stop_p2p_device();
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_get_valid_chan @ 0001a59a size=20 ===== */

int nl80211_get_valid_chan(void)

{
  int iVar1;
  
  iVar1 = ieee80211_get_channel_khz();
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xc) & 1) != 0)) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== nl80211_leave_ocb @ 0001a5ae size=8 ===== */

void nl80211_leave_ocb(undefined4 param_1,int param_2)

{
  cfg80211_leave_ocb(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
  return;
}



/* ===== nl80211_leave_mesh @ 0001a5b6 size=8 ===== */

void nl80211_leave_mesh(undefined4 param_1,int param_2)

{
  cfg80211_leave_mesh(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
  return;
}



/* ===== validate_beacon_tx_rate @ 0001a5be size=190 ===== */

undefined4 validate_beacon_tx_rate(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  char *pcVar7;
  
  param_2 = param_2 * 0x3c;
  iVar6 = *(int *)(param_3 + param_2);
  uVar3 = __sw_hweight32(iVar6);
  if (1 < uVar3) {
    return 0xffffffea;
  }
  iVar4 = 10;
  bVar1 = false;
  pcVar7 = (char *)(param_2 + 4 + param_3);
  do {
    uVar3 = __sw_hweight8(*pcVar7);
    if (1 < uVar3) {
      return 0xffffffea;
    }
    if (*pcVar7 == '\0') {
      if (bVar1) goto LAB_0001a608;
    }
    else {
      if (bVar1) {
        return 0xffffffea;
      }
LAB_0001a608:
      if (iVar6 != 0) {
        return 0xffffffea;
      }
      bVar1 = true;
    }
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar7 + 1;
  } while (iVar4 != 0);
  iVar4 = 8;
  bVar2 = false;
  psVar5 = (short *)(param_3 + param_2 + 0xe);
  do {
    uVar3 = __sw_hweight16(*psVar5);
    if (1 < uVar3) {
      return 0xffffffea;
    }
    if (*psVar5 == 0) {
      if (bVar2) goto LAB_0001a630;
    }
    else {
      if (bVar2) {
        return 0xffffffea;
      }
LAB_0001a630:
      if (iVar6 != 0) {
        return 0xffffffea;
      }
      bVar2 = true;
    }
    iVar4 = iVar4 + -1;
    psVar5 = psVar5 + 1;
  } while (iVar4 != 0);
  if (bVar1) {
    if (bVar2) {
      return 0xffffffea;
    }
    if (iVar6 != 0) goto LAB_0001a64c;
  }
  else {
    if (iVar6 == 0 && !bVar2) {
      return 0xffffffea;
    }
    if (iVar6 == 0) goto LAB_0001a662;
LAB_0001a64c:
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x1d0) << 0x19)) {
      return 0xffffffea;
    }
    if (!bVar1) goto LAB_0001a662;
  }
  if (-1 < *(char *)(param_1 + 0x1d0)) {
    return 0xffffffea;
  }
LAB_0001a662:
  if ((bVar2) && (-1 < (int)((uint)*(byte *)(param_1 + 0x1d1) << 0x1f))) {
    return 0xffffffea;
  }
  return 0;
}



/* ===== nl80211_register_mgmt @ 0001a67c size=116 ===== */

undefined4 nl80211_register_mgmt(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar4 = *(int *)(param_2 + 0x14);
  puVar3 = *(ushort **)(iVar4 + 0x16c);
  if (puVar3 == (ushort *)0x0) {
    uVar1 = 0xffffffea;
  }
  else {
    if (*(int *)(iVar4 + 0x194) == 0) {
      uVar2 = 0xd0;
    }
    else {
      uVar2 = *(undefined2 *)(*(int *)(iVar4 + 0x194) + 4);
    }
    uVar6 = *(uint *)(*(int *)(param_2 + 0x1c) + 4);
    if (((uVar6 < 0xb) && ((1 << (uVar6 & 0xff) & 0x79eU) != 0)) &&
       (*(int *)(**(int **)(param_2 + 0x18) + 0xf4) != 0)) {
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      if ((*(int *)(iVar4 + 0x484) == 0) ||
         ((int)((uint)*(byte *)((int)*(int **)(param_2 + 0x18) + 0x1d5) << 0x1a) < 0)) {
        uVar1 = cfg80211_mlme_register_mgmt
                          (*(int *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 4),uVar2,puVar3 + 2,
                           *puVar3 - 4,*(int *)(iVar4 + 0x484) != 0,puVar5);
        return uVar1;
      }
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = DAT_0001a6f0;
      }
    }
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_wiphy_netns @ 0001a6f4 size=46 ===== */

uint nl80211_wiphy_netns(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x148);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x36c);
    if (iVar2 == 0) {
      return 0xffffffea;
    }
    uVar1 = get_net_ns_by_fd(*(undefined4 *)(iVar2 + 4));
  }
  else {
    uVar1 = get_net_ns_by_pid(*(undefined4 *)(iVar2 + 4));
  }
  if (uVar1 < 0xfffff001) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== nl80211_disconnect @ 0001a722 size=96 ===== */

undefined4 nl80211_disconnect(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x1c);
  iVar1 = *(int *)(iVar4 + 0x1c4);
  if ((*(int *)(iVar1 + 0x68) == 0) || (*(int *)(iVar1 + 0x68) == *(int *)(param_2 + 4))) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0xd8);
    if (iVar2 == 0) {
      sVar3 = 3;
    }
    else {
      sVar3 = *(short *)(iVar2 + 4);
      if (sVar3 == 0) {
        return 0xffffffea;
      }
    }
    if ((*(int *)(iVar1 + 4) == 2) || (*(int *)(iVar1 + 4) == 8)) {
      mutex_lock(iVar1 + 0x24);
      uVar5 = cfg80211_disconnect(uVar5,iVar4,sVar3,1);
      mutex_unlock(*(int *)(iVar4 + 0x1c4) + 0x24);
    }
    else {
      uVar5 = 0xffffffa1;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ===== nl80211_leave_ibss @ 0001a782 size=34 ===== */

undefined4 nl80211_leave_ibss(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(**(int **)(param_2 + 0x18) + 0xbc) != 0) &&
     (*(int *)(*(int *)(*(int *)(param_2 + 0x1c) + 0x1c4) + 4) == 1)) {
    uVar1 = cfg80211_leave_ibss(*(int **)(param_2 + 0x18),*(int *)(param_2 + 0x1c),0);
    return uVar1;
  }
  return 0xffffffa1;
}



/* ===== nl80211_disassociate @ 0001a7a4 size=160 ===== */

undefined4
nl80211_disassociate(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  piVar10 = *(int **)(param_2 + 0x18);
  iVar9 = *(int *)(param_2 + 0x1c);
  iVar2 = *(int *)(iVar9 + 0x1c4);
  if ((*(int *)(iVar2 + 0x68) != 0) && (*(int *)(iVar2 + 0x68) != *(int *)(param_2 + 4))) {
    return 0xffffffff;
  }
  iVar4 = *(int *)(param_2 + 0x14);
  iVar7 = *(int *)(iVar4 + 0x18);
  if ((iVar7 != 0) && (*(int *)(iVar4 + 0xd8) != 0)) {
    if ((*(int *)(*piVar10 + 0xa8) == 0) ||
       ((*(int *)(iVar2 + 4) != 2 && (*(int *)(iVar2 + 4) != 8)))) {
      return 0xffffffa1;
    }
    sVar1 = *(short *)(*(int *)(iVar4 + 0xd8) + 4);
    if (sVar1 != 0) {
      puVar5 = *(ushort **)(iVar4 + 0xa8);
      if (puVar5 == (ushort *)0x0) {
        puVar6 = (ushort *)0x0;
        iVar8 = 0;
      }
      else {
        puVar6 = puVar5 + 2;
        iVar8 = *puVar5 - 4;
      }
      iVar4 = *(int *)(iVar4 + 0x17c);
      mutex_lock(iVar2 + 0x24);
      uVar3 = cfg80211_mlme_disassoc(piVar10,iVar9,iVar7 + 4,puVar6,iVar8,sVar1,iVar4 != 0,param_4);
      mutex_unlock(*(int *)(iVar9 + 0x1c4) + 0x24);
      return uVar3;
    }
  }
  return 0xffffffea;
}



/* ===== nl80211_deauthenticate @ 0001a844 size=160 ===== */

undefined4
nl80211_deauthenticate(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  piVar10 = *(int **)(param_2 + 0x18);
  iVar9 = *(int *)(param_2 + 0x1c);
  iVar2 = *(int *)(iVar9 + 0x1c4);
  if ((*(int *)(iVar2 + 0x68) != 0) && (*(int *)(iVar2 + 0x68) != *(int *)(param_2 + 4))) {
    return 0xffffffff;
  }
  iVar4 = *(int *)(param_2 + 0x14);
  iVar7 = *(int *)(iVar4 + 0x18);
  if ((iVar7 != 0) && (*(int *)(iVar4 + 0xd8) != 0)) {
    if ((*(int *)(*piVar10 + 0xa4) == 0) ||
       ((*(int *)(iVar2 + 4) != 2 && (*(int *)(iVar2 + 4) != 8)))) {
      return 0xffffffa1;
    }
    sVar1 = *(short *)(*(int *)(iVar4 + 0xd8) + 4);
    if (sVar1 != 0) {
      puVar5 = *(ushort **)(iVar4 + 0xa8);
      if (puVar5 == (ushort *)0x0) {
        puVar6 = (ushort *)0x0;
        iVar8 = 0;
      }
      else {
        puVar6 = puVar5 + 2;
        iVar8 = *puVar5 - 4;
      }
      iVar4 = *(int *)(iVar4 + 0x17c);
      mutex_lock(iVar2 + 0x24);
      uVar3 = cfg80211_mlme_deauth(piVar10,iVar9,iVar7 + 4,puVar6,iVar8,sVar1,iVar4 != 0,param_4);
      mutex_unlock(*(int *)(iVar9 + 0x1c4) + 0x24);
      return uVar3;
    }
  }
  return 0xffffffea;
}



/* ===== nl80211_stop_sched_scan @ 0001a8e4 size=118 ===== */

undefined4
nl80211_stop_sched_scan(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = *(int **)(param_2 + 0x18);
  if ((*(char *)((int)piVar3 + 0x1e5) == '\0') || (*(int *)(*piVar3 + 0x11c) == 0)) {
    uVar1 = 0xffffffa1;
  }
  else if (*(int *)(*(int *)(param_2 + 0x14) + 0x160) == 0) {
    piVar2 = (int *)piVar3[0x22];
    if (piVar2 != piVar3 + 0x22) {
      if (((piVar2 + -0x1d != (int *)0x0) && (piVar2[-0x1d] == 0 && piVar2[-0x1c] == 0)) &&
         ((piVar2[-2] == 0 || (piVar2[-2] == *(int *)(param_2 + 4))))) {
        uVar1 = cfg80211_stop_sched_scan_req(piVar3,piVar2 + -0x1d,0);
        return uVar1;
      }
    }
    uVar1 = 0xfffffffe;
  }
  else {
    uVar4 = nla_get_u64();
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar1 = __cfg80211_stop_sched_scan(piVar3,uVar1,(int)uVar4,uVar1,0,param_2,param_3,param_4);
  }
  return uVar1;
}



/* ===== elapsed_jiffies_msecs @ 0001a95a size=10 ===== */

void elapsed_jiffies_msecs(int param_1)

{
  jiffies_to_msecs(*DAT_0001a964 - param_1);
  return;
}



/* ===== nl80211_reload_regdb @ 0001a968 size=4 ===== */

int nl80211_reload_regdb
              (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r3;
  undefined4 *puStack_14;
  
  iVar1 = DAT_00014f6c;
  puStack_14 = param_2;
  iVar2 = request_firmware(&puStack_14,DAT_00014f70,*(int *)(DAT_00014f6c + 8) + 0x10,param_4,
                           param_1);
  if (iVar2 == 0) {
    iVar3 = valid_regdb(puStack_14[1],*puStack_14);
    if (iVar3 == 0) {
      iVar2 = -0x3d;
    }
    else {
      iVar3 = kmemdup(puStack_14[1],*puStack_14,0xcc0);
      if (iVar3 == 0) {
        iVar2 = -0xc;
      }
      else {
        rtnl_lock();
        iVar4 = IS_ERR_OR_NULL(*(undefined4 *)(iVar1 + 4));
        if (iVar4 == 0) {
          kfree(extraout_r3);
        }
        *(int *)(iVar1 + 4) = iVar3;
        rtnl_unlock();
      }
    }
    release_firmware(puStack_14);
  }
  return iVar2;
}



/* ===== nl80211_req_set_reg @ 0001a96c size=78 ===== */

undefined4 nl80211_req_set_reg(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*DAT_0001a9bc == 0) {
    return 0xffffff8d;
  }
  iVar4 = *(int *)(param_2 + 0x14);
  if ((*(int *)(iVar4 + 0x268) == 0) || (uVar2 = *(uint *)(*(int *)(iVar4 + 0x268) + 4), uVar2 < 2))
  {
    if (*(int *)(iVar4 + 0x84) != 0) {
      uVar3 = regulatory_hint_user(*(int *)(iVar4 + 0x84) + 4);
      return uVar3;
    }
  }
  else if (uVar2 == 2) {
    if (*(int *)(iVar4 + 0x330) == 0) {
      uVar1 = 1;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
      uVar1 = 0;
      if (*(int *)(iVar4 + 0x374) != 0) {
        uVar1 = 1;
      }
    }
    uVar3 = regulatory_hint_indoor(uVar1,uVar3);
    return uVar3;
  }
  return 0xffffffea;
}



/* ===== nla_put_string @ 0001a9c0 size=30 ===== */

void nla_put_string(undefined4 param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
  nla_put(param_1,param_2,sVar1 + 1,param_3);
  return;
}



/* ===== nl80211_put_regdom @ 0001a9de size=244 ===== */

undefined4 nl80211_put_regdom(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar2 = nla_put_string(param_2,0x21,param_1 + 0xc,param_4,param_4);
  if ((iVar2 == 0) &&
     (((*(uint *)(param_1 + 0x10) == 0 ||
       (iVar2 = nla_put_u8(param_2,0x92,*(uint *)(param_1 + 0x10) & 0xff), iVar2 == 0)) &&
      (psVar3 = (short *)nla_nest_start_noflag(param_2,0x22), psVar3 != (short *)0x0)))) {
    iVar2 = param_1;
    for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 8); uVar6 = uVar6 + 1) {
      psVar4 = (short *)nla_nest_start_noflag(param_2,uVar6);
      if (psVar4 == (short *)0x0) goto LAB_0001a9f6;
      iVar8 = *(int *)(iVar2 + 0x1c);
      if (iVar8 == 0) {
        iVar8 = reg_get_max_bandwidth(param_1,iVar2 + 0x14);
      }
      iVar5 = nla_put_be32(param_2,1,*(undefined4 *)(iVar2 + 0x68));
      if ((((iVar5 != 0) ||
           (iVar5 = nla_put_be32(param_2,2,*(undefined4 *)(iVar2 + 0x14)), iVar5 != 0)) ||
          ((iVar5 = nla_put_be32(param_2,3,*(undefined4 *)(iVar2 + 0x18)), iVar5 != 0 ||
           ((iVar8 = nla_put_be32(param_2,4,iVar8), iVar8 != 0 ||
            (iVar8 = nla_put_be32(param_2,5,*(undefined4 *)(iVar2 + 0x20)), iVar8 != 0)))))) ||
         (iVar8 = nla_put_be32(param_2,6,*(undefined4 *)(iVar2 + 0x24)), iVar8 != 0))
      goto LAB_0001a9f6;
      puVar1 = (undefined4 *)(iVar2 + 0x6c);
      iVar2 = iVar2 + 0x60;
      iVar8 = nla_put_be32(param_2,7,*puVar1);
      if (iVar8 != 0) goto LAB_0001a9f6;
      *psVar4 = (short)*(undefined4 *)(param_2 + 0x98) - (short)psVar4;
    }
    *psVar3 = (short)*(undefined4 *)(param_2 + 0x98) - (short)psVar3;
    uVar7 = 0;
  }
  else {
LAB_0001a9f6:
    uVar7 = 0xffffffa6;
  }
  return uVar7;
}



/* ===== get_vlan @ 0001aad2 size=78 ===== */

int get_vlan(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x50);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = dev_get_by_index(DAT_0001ab20,*(undefined4 *)(iVar1 + 4));
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x1c4);
    if (((piVar2 == (int *)0x0) || (*piVar2 != param_2 + 0x1a0)) ||
       ((1 < piVar2[1] - 3U && (piVar2[1] != 9)))) {
      iVar1 = -0x16;
    }
    else {
      if (*(int *)(iVar1 + 0x28) << 0x1f < 0) {
        return iVar1;
      }
      iVar1 = -100;
    }
    dev_put();
    return iVar1;
  }
  return -0x13;
}



/* ===== nl80211_stop_ap @ 0001ab24 size=10 ===== */

void nl80211_stop_ap(undefined4 param_1,int param_2)

{
  cfg80211_stop_ap(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),0);
  return;
}



/* ===== cfg80211_find_ie @ 0001ab2e size=18 ===== */

void cfg80211_find_ie(void)

{
  cfg80211_find_elem_match();
  return;
}



/* ===== nl80211_send_chandef @ 0001ab40 size=150 ===== */

undefined4 nl80211_send_chandef(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = cfg80211_chandef_valid(param_2);
  if (iVar1 == 0) {
    return 0xffffffea;
  }
  iVar1 = nla_put_be32(param_1,0x26,*(undefined4 *)(*param_2 + 4));
  if ((iVar1 == 0) &&
     (iVar1 = nla_put_be32(param_1,0x122,*(undefined2 *)(*param_2 + 8)), iVar1 == 0)) {
    uVar2 = param_2[1];
    if (uVar2 < 3) {
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          if (*(uint *)(*param_2 + 4) < (uint)param_2[2]) {
            uVar2 = 3;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      iVar1 = nla_put_be32(param_1,0x27,uVar2);
      if (iVar1 != 0) {
        return 0xffffff97;
      }
    }
    iVar1 = nla_put_be32(param_1,0x9f,param_2[1]);
    if ((iVar1 == 0) && (iVar1 = nla_put_be32(param_1,0xa0,param_2[2]), iVar1 == 0)) {
      if (param_2[3] == 0) {
        return 0;
      }
      iVar1 = nla_put_be32(param_1,0xa1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 0xffffff97;
}



/* ===== nl80211_check_ap_rate_selectors.part.1 @ 0001abd6 size=52 ===== */

void nl80211_check_ap_rate_selectors_part_1(int param_1,uint param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_2 + 1);
  while ((int)(pcVar1 + ~param_2) < (int)(uint)*(byte *)(param_2 + 1)) {
    if (pcVar1[1] == '\x7f') {
      *(undefined1 *)(param_1 + 0x218) = 1;
    }
    if (pcVar1[1] == '~') {
      *(undefined1 *)(param_1 + 0x219) = 1;
    }
    pcVar1 = pcVar1 + 1;
    if (*pcVar1 == 'z') {
      *(undefined1 *)(param_1 + 0x21a) = 1;
    }
  }
  return;
}



/* ===== nl80211_valid_auth_type.part.2 @ 0001ac0a size=52 ===== */

bool nl80211_valid_auth_type_part_2(int param_1,int param_2)

{
  if ((((*(int *)(param_1 + 0x1cc) << 0x1a < 0) ||
       ((int)((uint)*(byte *)(param_1 + 0x1d4) << 0x19) < 0)) || (param_2 != 4)) &&
     (1 < param_2 - 6U)) {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x1d1) << 0x19)) {
      return param_2 != 5;
    }
    return true;
  }
  return false;
}



/* ===== nl80211_check_scan_feat @ 0001ac3e size=28 ===== */

byte nl80211_check_scan_feat(int param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  
  if ((param_2 & param_3) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + (param_4 >> 3) + 0x30) >> (param_4 & 7) & 1;
  }
  return bVar1;
}



/* ===== validate_pae_over_nl80211 @ 0001ac5a size=54 ===== */

undefined4 validate_pae_over_nl80211(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x330) == 0) {
    if (*(undefined4 **)(param_2 + 0x20) != (undefined4 *)0x0) {
      **(undefined4 **)(param_2 + 0x20) = DAT_0001ac90;
    }
    return 0xffffffea;
  }
  if (*(int *)(*param_1 + 0x1a0) == 0) {
    return 0xffffffa1;
  }
  if ((*(byte *)((int)param_1 + 0x1d3) & 4) == 0) {
    uVar1 = 0xffffffa1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== nl80211_crypto_settings @ 0001ac94 size=406 ===== */

int nl80211_crypto_settings(int param_1,int param_2,uint *param_3,int param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  
  memset(param_3,0,0x4c);
  *(bool *)(param_3 + 0xb) = *(int *)(*(int *)(param_2 + 0x14) + 0x110) != 0;
  iVar6 = *(int *)(*(int *)(param_2 + 0x14) + 0x198);
  if (iVar6 == 0) {
    *(undefined2 *)((int)param_3 + 0x2e) = 0x8e88;
  }
  else {
    uVar1 = *(ushort *)(iVar6 + 4);
    *(ushort *)((int)param_3 + 0x2e) = uVar1 << 8 | uVar1 >> 8;
    if ((-1 < *(int *)(param_1 + 0x1c4) << 0x18) && (uVar1 != 0x888e)) {
      return -0x16;
    }
    if (*(int *)(*(int *)(param_2 + 0x14) + 0x19c) != 0) {
      *(undefined1 *)(param_3 + 0xc) = 1;
    }
  }
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x420) != 0) {
    iVar6 = validate_pae_over_nl80211(param_1,param_2);
    if (iVar6 < 0) {
      return iVar6;
    }
    *(undefined1 *)((int)param_3 + 0x31) = 1;
    if (*(int *)(*(int *)(param_2 + 0x14) + 0x478) != 0) {
      *(undefined1 *)((int)param_3 + 0x32) = 1;
    }
  }
  puVar4 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x124);
  if (puVar4 != (ushort *)0x0) {
    uVar5 = *puVar4 - 4;
    param_3[2] = uVar5 >> 2;
    if ((uVar5 & 3) != 0) {
      return -0x16;
    }
    if (param_4 < (int)(uVar5 >> 2)) {
      return -0x16;
    }
    puVar2 = memcpy(param_3 + 3,puVar4 + 2,uVar5);
    for (iVar6 = 0; iVar6 < (int)param_3[2]; iVar6 = iVar6 + 1) {
      iVar3 = cfg80211_supported_cipher_suite(param_1 + 0x1a0,*puVar2);
      if (iVar3 == 0) {
        return -0x16;
      }
      puVar2 = puVar2 + 1;
    }
  }
  iVar6 = *(int *)(*(int *)(param_2 + 0x14) + 0x128);
  if (iVar6 != 0) {
    param_3[1] = *(uint *)(iVar6 + 4);
    iVar6 = cfg80211_supported_cipher_suite(param_1 + 0x1a0);
    if (iVar6 == 0) {
      return -0x16;
    }
  }
  iVar6 = *(int *)(*(int *)(param_2 + 0x14) + 300);
  if ((iVar6 != 0) && (uVar5 = *(uint *)(iVar6 + 4), *param_3 = uVar5, (uVar5 & 0xfffffff8) != 0)) {
    return -0x16;
  }
  puVar4 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x130);
  if (puVar4 != (ushort *)0x0) {
    uVar5 = *puVar4 - 4;
    param_3[8] = uVar5 >> 2;
    if ((uVar5 & 3) != 0) {
      return -0x16;
    }
    if (2 < uVar5 >> 2) {
      return -0x16;
    }
    memcpy(param_3 + 9,puVar4 + 2,uVar5);
  }
  psVar7 = *(short **)(*(int *)(param_2 + 0x14) + 0x3f8);
  if (psVar7 != (short *)0x0) {
    if (*psVar7 != 0x24) {
      return -0x16;
    }
    if ((-1 < *(char *)(param_1 + 0x1d1)) && (-1 < (int)((uint)*(byte *)(param_1 + 0x1d6) << 0x1d)))
    {
      return -0x16;
    }
    param_3[0xf] = (uint)(psVar7 + 2);
  }
  iVar6 = *(int *)(*(int *)(param_2 + 0x14) + 0x454);
  if (iVar6 != 0) {
    if ((-1 < (int)((uint)*(byte *)(param_1 + 0x1d4) << 0x19)) &&
       (-1 < (int)((uint)*(byte *)(param_1 + 0x1d6) << 0x1c))) {
      return -0x16;
    }
    param_3[0x10] = iVar6 + 4;
    *(char *)(param_3 + 0x11) = (char)**(undefined2 **)(*(int *)(param_2 + 0x14) + 0x454) + -4;
  }
  iVar6 = *(int *)(*(int *)(param_2 + 0x14) + 0x4a8);
  if (iVar6 == 0) {
    param_3[0x12] = 0;
    return 0;
  }
  param_3[0x12] = (uint)*(byte *)(iVar6 + 4);
  return 0;
}



/* ===== nl80211_associate @ 0001ae2a size=666 ===== */

void nl80211_associate(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  ushort *puVar17;
  undefined1 auStack_108 [4];
  ushort *local_104;
  int local_100;
  int local_fc;
  undefined1 auStack_f8 [76];
  undefined1 local_ac;
  uint local_a8;
  undefined4 local_a4 [2];
  undefined2 local_9c [9];
  undefined4 uStack_8a;
  undefined2 local_86 [11];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  ushort *local_58;
  int local_54;
  int local_50;
  undefined4 local_4c [3];
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 uStack_3d;
  undefined2 local_39;
  undefined1 local_37 [11];
  int local_2c;
  undefined4 *puVar8;
  
  piVar3 = DAT_0001b0c4;
  piVar15 = *(int **)(param_2 + 0x18);
  iVar16 = *(int *)(param_2 + 0x1c);
  local_2c = *DAT_0001b0c4;
  memset(auStack_108,0,0xdc);
  iVar11 = *(int *)(*(int *)(iVar16 + 0x1c4) + 0x68);
  if ((iVar11 != 0) && (iVar11 != *(int *)(param_2 + 4))) {
    iVar11 = -1;
    goto LAB_0001ae62;
  }
  iVar11 = *(int *)(param_2 + 0x14);
  iVar14 = *(int *)(iVar11 + 0x18);
  if (((iVar14 != 0) && (*(int *)(iVar11 + 0xd0) != 0)) && (*(int *)(iVar11 + 0x98) != 0)) {
    if ((*(int *)(*piVar15 + 0xa0) == 0) ||
       ((iVar6 = *(int *)(*(int *)(iVar16 + 0x1c4) + 4), iVar6 != 2 && (iVar6 != 8)))) {
      iVar11 = -0x5f;
      goto LAB_0001ae62;
    }
    iVar6 = *(int *)(*(int *)(iVar11 + 0x98) + 4) * 1000;
    if (*(int *)(iVar11 + 0x488) != 0) {
      iVar6 = iVar6 + *(int *)(*(int *)(iVar11 + 0x488) + 4);
    }
    iVar6 = nl80211_get_valid_chan(piVar15 + 0x68,iVar6);
    if (iVar6 != 0) {
      iVar11 = *(int *)(param_2 + 0x14);
      puVar17 = *(ushort **)(iVar11 + 0xd0);
      puVar12 = *(ushort **)(iVar11 + 0xa8);
      uVar2 = *puVar17;
      if (puVar12 != (ushort *)0x0) {
        local_104 = puVar12 + 2;
        local_fc = *puVar12 - 4;
      }
      if (*(int *)(iVar11 + 0x108) != 0) {
        iVar13 = *(int *)(*(int *)(iVar11 + 0x108) + 4);
        if (iVar13 == 1) {
          local_ac = 1;
        }
        else if (iVar13 != 0) goto LAB_0001ae5e;
      }
      if (*(int *)(iVar11 + 0x13c) != 0) {
        local_100 = *(int *)(iVar11 + 0x13c) + 4;
      }
      if (*(int *)(iVar11 + 0x24c) != 0) {
        local_a8 = local_a8 | 1;
      }
      iVar13 = *(int *)(iVar11 + 0x250);
      if (iVar13 != 0) {
        puVar4 = &uStack_8a;
        puVar7 = (undefined4 *)(iVar13 + 4);
        do {
          puVar8 = puVar7 + 1;
          puVar5 = puVar4 + 1;
          *puVar4 = *puVar7;
          puVar4 = puVar5;
          puVar7 = puVar8;
        } while (puVar8 != (undefined4 *)(iVar13 + 0x1c));
        *(undefined2 *)puVar5 = *(undefined2 *)puVar8;
      }
      iVar9 = *(int *)(iVar11 + 0x7c);
      if (iVar9 != 0) {
        if (iVar13 == 0) goto LAB_0001ae5e;
        puVar7 = local_a4;
        puVar4 = (undefined4 *)(iVar9 + 4);
        do {
          puVar5 = puVar4 + 2;
          uVar10 = puVar4[1];
          *puVar7 = *puVar4;
          puVar7[1] = uVar10;
          puVar7 = puVar7 + 2;
          puVar4 = puVar5;
        } while (puVar5 != (undefined4 *)(iVar9 + 0x1c));
        *(undefined2 *)puVar7 = *(undefined2 *)puVar5;
      }
      if (*(int *)(iVar11 + 700) != 0) {
        local_a8 = local_a8 | 2;
      }
      iVar13 = *(int *)(iVar11 + 0x2c0);
      if (iVar13 != 0) {
        local_64 = *(undefined4 *)(iVar13 + 4);
        uStack_60 = *(undefined4 *)(iVar13 + 8);
        local_5c = *(undefined4 *)(iVar13 + 0xc);
      }
      iVar9 = *(int *)(iVar11 + 0x274);
      if (iVar9 != 0) {
        if (iVar13 == 0) goto LAB_0001ae5e;
        local_70 = *(undefined4 *)(iVar9 + 4);
        uStack_6c = *(undefined4 *)(iVar9 + 8);
        local_68 = *(undefined4 *)(iVar9 + 0xc);
      }
      if (*(int *)(iVar11 + 0x340) != 0) {
        if (((piVar15[0x73] & 0x280000U) != 0x280000) &&
           (-1 < (int)((uint)*(byte *)(piVar15 + 0x74) << 0x1e))) goto LAB_0001ae5e;
        local_a8 = local_a8 | 4;
      }
      puVar12 = *(ushort **)(iVar11 + 0x3c8);
      if (puVar12 != (ushort *)0x0) {
        local_58 = puVar12 + 2;
        local_54 = *puVar12 - 4;
        if (*(int *)(iVar11 + 0x3cc) == 0) goto LAB_0001ae5e;
        local_50 = *(int *)(iVar11 + 0x3cc) + 4;
      }
      iVar13 = *(int *)(iVar11 + 0x4a4);
      iVar11 = *(int *)(iVar11 + 0x4a0);
      if (iVar13 == 0) {
        if (iVar11 == 0) goto LAB_0001b03a;
      }
      else if (iVar11 != 0) {
        puVar4 = &uStack_3d;
        puVar7 = (undefined4 *)(iVar13 + 4);
        do {
          puVar8 = puVar7;
          puVar5 = puVar4;
          puVar7 = puVar8 + 1;
          *puVar5 = *puVar8;
          puVar4 = puVar5 + 1;
        } while (puVar7 != (undefined4 *)(iVar13 + 0x10));
        *(undefined2 *)(puVar5 + 1) = *(undefined2 *)puVar7;
        *(undefined1 *)((int)puVar5 + 6) = *(undefined1 *)((int)puVar8 + 6);
        puVar4 = (undefined4 *)(iVar11 + 4);
        puVar7 = local_4c;
        do {
          puVar8 = puVar7;
          puVar5 = puVar4;
          puVar4 = puVar5 + 2;
          uVar10 = puVar5[1];
          *puVar8 = *puVar5;
          puVar8[1] = uVar10;
          puVar7 = puVar8 + 2;
        } while (puVar4 != (undefined4 *)(iVar11 + 0xc));
        puVar8[2] = *puVar4;
        uVar1 = *(undefined1 *)((int)puVar5 + 0xe);
        *(undefined2 *)(puVar8 + 3) = *(undefined2 *)(puVar5 + 3);
        *(undefined1 *)((int)puVar8 + 0xe) = uVar1;
LAB_0001b03a:
        iVar11 = nl80211_crypto_settings(piVar15,param_2,auStack_f8,1);
        if (iVar11 == 0) {
          mutex_lock(*(int *)(iVar16 + 0x1c4) + 0x24);
          iVar11 = cfg80211_mlme_assoc(piVar15,iVar16,iVar6,(undefined4 *)(iVar14 + 4),puVar17 + 2,
                                       uVar2 - 4,auStack_108);
          if ((iVar11 == 0) && (*(int *)(*(int *)(param_2 + 0x14) + 0x330) != 0)) {
            *(undefined4 *)(*(int *)(iVar16 + 0x1c4) + 0x68) = *(undefined4 *)(param_2 + 4);
            iVar6 = *(int *)(iVar16 + 0x1c4);
            *(undefined4 *)(iVar6 + 0x7c) = *(undefined4 *)(iVar14 + 4);
            *(undefined2 *)(iVar6 + 0x80) = *(undefined2 *)(iVar14 + 8);
          }
          mutex_unlock(*(int *)(iVar16 + 0x1c4) + 0x24);
        }
        goto LAB_0001ae62;
      }
    }
  }
LAB_0001ae5e:
  iVar11 = -0x16;
LAB_0001ae62:
  if (local_2c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar11);
}



/* ===== get_order @ 0001b0c8 size=16 ===== */

int get_order(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - 1U >> 0xc;
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = 0x20 - LZCOUNT(uVar1);
  }
  return iVar2;
}



/* ===== wiphy_to_rdev @ 0001b0d8 size=8 ===== */

int wiphy_to_rdev(int param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1b0da);
    (*pcVar1)();
  }
  return param_1 + -0x1a0;
}



/* ===== wdev_id @ 0001b0e2 size=16 ===== */

undefined8 wdev_id(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r3;
  
  iVar1 = wiphy_to_rdev(*param_1,param_2,param_3,param_1,param_4);
  return CONCAT44(*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(extraout_r3 + 0x14));
}



/* ===== cfg80211_vendor_cmd_get_sender @ 0001b0f2 size=16 ===== */

undefined4 cfg80211_vendor_cmd_get_sender(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = wiphy_to_rdev();
  uVar2 = 0;
  if (*(int *)(iVar1 + 0xa8) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 4);
  }
  return uVar2;
}



/* ===== nl80211_parse_sta_wme @ 0001b102 size=92 ===== */

uint nl80211_parse_sta_wme(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  int local_10;
  int local_c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x204);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = nla_parse_nested_deprecated
                      (auStack_14,2,iVar2,DAT_0001b160,*(undefined4 *)(param_1 + 0x20));
    if (uVar1 == 0) {
      if (local_10 != 0) {
        *(undefined1 *)(param_2 + 0x2c) = *(undefined1 *)(local_10 + 4);
      }
      if ((*(byte *)(param_2 + 0x2c) & 0xf0) == 0) {
        if (local_c != 0) {
          *(undefined1 *)(param_2 + 0x2d) = *(undefined1 *)(local_c + 4);
        }
        if ((*(byte *)(param_2 + 0x2d) & 0xfc) == 0) {
          *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
          return *(byte *)(param_2 + 0x2d) & 0xfffffffc;
        }
      }
      uVar1 = 0xffffffea;
    }
  }
  return uVar1;
}



/* ===== nl80211_set_station @ 0001b164 size=468 ===== */

uint nl80211_set_station(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined2 *local_80;
  uint local_7c;
  uint local_70;
  uint local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  char local_62;
  undefined1 local_61;
  undefined1 local_60;
  int local_5c;
  int local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 *local_48;
  char local_44;
  undefined1 local_33;
  undefined1 local_32;
  uint local_30;
  undefined2 *local_2c;
  char local_28;
  short local_26;
  int local_1c;
  
  piVar4 = *(int **)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  memset(&local_80,0,0x68);
  if (*(int *)(*piVar4 + 0x44) == 0) {
LAB_0001b180:
    uVar3 = 0xffffffa1;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x14);
    if (*(int *)(iVar2 + 0x40) != 0) {
      local_68 = *(undefined2 *)(*(int *)(iVar2 + 0x40) + 4);
    }
    if (*(int *)(iVar2 + 0x468) != 0) {
      local_66 = *(undefined2 *)(*(int *)(iVar2 + 0x468) + 4);
    }
    if (*(int *)(iVar2 + 0x48) == 0) {
      local_6c = 0xffffffff;
    }
    else {
      local_6c = (uint)*(ushort *)(*(int *)(iVar2 + 0x48) + 4);
    }
    if (*(int *)(iVar2 + 0x390) == 0) {
      local_30 = 0xffffffff;
    }
    else {
      local_30 = (uint)*(byte *)(*(int *)(iVar2 + 0x390) + 4);
    }
    iVar6 = *(int *)(iVar2 + 0x18);
    if (iVar6 != 0) {
      puVar1 = *(undefined2 **)(iVar2 + 0x4c);
      if (puVar1 != (undefined2 *)0x0) {
        local_80 = puVar1 + 2;
        local_62 = (char)*puVar1 + -4;
      }
      if (*(int *)(iVar2 + 0x2ac) != 0) {
        local_4c = *(undefined2 *)(*(int *)(iVar2 + 0x2ac) + 4);
        local_70 = 2;
      }
      puVar1 = *(undefined2 **)(iVar2 + 0x2b0);
      if (puVar1 != (undefined2 *)0x0) {
        local_48 = puVar1 + 2;
        local_44 = (char)*puVar1 + -4;
      }
      iVar2 = parse_station_flags(param_2,*(undefined4 *)(*(int *)(iVar5 + 0x1c4) + 4),&local_80);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_2 + 0x14);
        if (*(int *)(iVar2 + 100) != 0) {
          local_61 = *(undefined1 *)(*(int *)(iVar2 + 100) + 4);
        }
        if (*(int *)(iVar2 + 0x1d0) != 0) {
          local_60 = *(undefined1 *)(*(int *)(iVar2 + 0x1d0) + 4);
          if (*(int *)(iVar2 + 0x3b4) != 0) {
            local_64 = *(undefined2 *)(*(int *)(iVar2 + 0x3b4) + 4);
          }
          local_70 = local_70 | 4;
        }
        if (*(int *)(iVar2 + 0x290) != 0) {
          local_50 = *(undefined4 *)(*(int *)(iVar2 + 0x290) + 4);
        }
        if (*(int *)(iVar2 + 0x308) != 0) {
          local_32 = 1;
          local_33 = *(undefined1 *)(*(int *)(iVar2 + 0x308) + 4);
        }
        if (*(int *)(iVar2 + 0x494) != 0) {
          local_1c = *(int *)(iVar2 + 0x494) + 4;
        }
        if (*(int *)(iVar2 + 0x448) != 0) {
          local_26 = *(short *)(*(int *)(iVar2 + 0x448) + 4);
        }
        if ((local_26 == 0) || ((int)((uint)*(byte *)(piVar4 + 0x75) << 0x1e) < 0)) {
          uVar3 = nl80211_parse_sta_txpower_setting(param_2,&local_80);
          if (uVar3 != 0) {
            return uVar3;
          }
          iVar2 = *(int *)(param_2 + 0x14);
          if (*(int *)(iVar2 + 0x2d4) != 0) {
            local_68 = *(undefined2 *)(*(int *)(iVar2 + 0x2d4) + 4);
          }
          if (*(int *)(iVar2 + 0x7c) != 0) {
            local_5c = *(int *)(iVar2 + 0x7c) + 4;
          }
          if (*(int *)(iVar2 + 0x274) != 0) {
            local_58 = *(int *)(iVar2 + 0x274) + 4;
          }
          puVar1 = *(undefined2 **)(iVar2 + 0x434);
          if (puVar1 != (undefined2 *)0x0) {
            local_2c = puVar1 + 2;
            local_28 = (char)*puVar1 + -4;
          }
          uVar3 = nl80211_parse_sta_channel_info(param_2,&local_80);
          if (uVar3 != 0) {
            return uVar3;
          }
          uVar3 = nl80211_parse_sta_wme(param_2,&local_80);
          if (uVar3 != 0) {
            return uVar3;
          }
          local_7c = get_vlan(param_2,piVar4);
          if (0xfffff000 < local_7c) {
            return local_7c;
          }
          uVar3 = *(uint *)(*(int *)(iVar5 + 0x1c4) + 4);
          if ((uVar3 < 10) && ((1 << (uVar3 & 0xff) & 0x39eU) != 0)) {
            uVar3 = (**(code **)(*piVar4 + 0x44))(piVar4 + 0x68,iVar5,iVar6 + 4,&local_80);
          }
          else {
            uVar3 = 0xffffffa1;
          }
          if (local_7c == 0) {
            return uVar3;
          }
          dev_put();
          return uVar3;
        }
        goto LAB_0001b180;
      }
    }
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



/* ===== nl80211_new_station @ 0001b338 size=658 ===== */

uint nl80211_new_station(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined2 *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined2 local_68;
  undefined2 local_66;
  char local_62;
  undefined1 local_61;
  int local_5c;
  int local_58;
  undefined2 local_4c;
  undefined2 *local_48;
  char local_44;
  undefined1 local_33;
  undefined1 local_32;
  uint local_30;
  undefined2 *local_2c;
  char local_28;
  short local_26;
  int local_1c;
  
  piVar6 = *(int **)(param_2 + 0x18);
  iVar7 = *(int *)(param_2 + 0x1c);
  memset(&local_80,0,0x68);
  if (*(int *)(*piVar6 + 0x3c) == 0) {
    return 0xffffffa1;
  }
  iVar5 = *(int *)(param_2 + 0x14);
  iVar8 = *(int *)(iVar5 + 0x18);
  if (iVar8 == 0) {
    return 0xffffffea;
  }
  if (*(int *)(iVar5 + 0x48) == 0) {
    return 0xffffffea;
  }
  puVar3 = *(undefined2 **)(iVar5 + 0x4c);
  if (puVar3 == (undefined2 *)0x0) {
    return 0xffffffea;
  }
  iVar2 = *(int *)(iVar5 + 0x2d4);
  if ((*(int *)(iVar5 + 0x40) == 0) && (iVar2 == 0)) {
    return 0xffffffea;
  }
  local_80 = puVar3 + 2;
  local_62 = (char)*puVar3 + -4;
  local_6c = (uint)*(ushort *)(*(int *)(iVar5 + 0x48) + 4);
  if (*(int *)(iVar5 + 0x468) != 0) {
    local_66 = *(undefined2 *)(*(int *)(iVar5 + 0x468) + 4);
  }
  if (*(int *)(iVar5 + 0x390) == 0) {
    bVar9 = *(int *)(*(int *)(iVar7 + 0x1c4) + 4) == 9;
  }
  else {
    bVar9 = *(byte *)(*(int *)(iVar5 + 0x390) + 4);
  }
  local_30 = (uint)bVar9;
  if (iVar2 == 0) {
    local_68 = *(undefined2 *)(*(int *)(iVar5 + 0x40) + 4);
  }
  else {
    local_68 = *(undefined2 *)(iVar2 + 4);
  }
  if (*(int *)(iVar5 + 0x2ac) != 0) {
    local_4c = *(undefined2 *)(*(int *)(iVar5 + 0x2ac) + 4);
    local_70 = 2;
  }
  puVar3 = *(undefined2 **)(iVar5 + 0x2b0);
  if (puVar3 != (undefined2 *)0x0) {
    local_48 = puVar3 + 2;
    local_44 = (char)*puVar3 + -4;
  }
  if (*(int *)(iVar5 + 0x7c) != 0) {
    local_5c = *(int *)(iVar5 + 0x7c) + 4;
  }
  if (*(int *)(iVar5 + 0x274) != 0) {
    local_58 = *(int *)(iVar5 + 0x274) + 4;
  }
  puVar3 = *(undefined2 **)(iVar5 + 0x434);
  if (puVar3 != (undefined2 *)0x0) {
    local_2c = puVar3 + 2;
    local_28 = (char)*puVar3 + -4;
  }
  if (*(int *)(iVar5 + 0x494) != 0) {
    local_1c = *(int *)(iVar5 + 0x494) + 4;
  }
  if (*(int *)(iVar5 + 0x308) != 0) {
    local_32 = 1;
    local_33 = *(undefined1 *)(*(int *)(iVar5 + 0x308) + 4);
  }
  if (*(int *)(iVar5 + 100) != 0) {
    local_61 = *(undefined1 *)(*(int *)(iVar5 + 100) + 4);
  }
  if (*(int *)(iVar5 + 0x448) != 0) {
    local_26 = *(short *)(*(int *)(iVar5 + 0x448) + 4);
  }
  if ((local_26 != 0) && (-1 < (int)((uint)*(byte *)(piVar6 + 0x75) << 0x1e))) {
    return 0xffffffa1;
  }
  uVar1 = nl80211_parse_sta_txpower_setting(param_2,&local_80);
  if (uVar1 != 0) {
    return uVar1;
  }
  uVar1 = nl80211_parse_sta_channel_info(param_2,&local_80);
  if (uVar1 != 0) {
    return uVar1;
  }
  uVar1 = nl80211_parse_sta_wme(param_2,&local_80);
  if (uVar1 != 0) {
    return uVar1;
  }
  iVar5 = parse_station_flags(param_2,*(undefined4 *)(*(int *)(iVar7 + 0x1c4) + 4),&local_80);
  if (iVar5 != 0) {
    return 0xffffffea;
  }
  if ((local_74 & 8) == 0) {
    if (local_28 != '\0') {
      return 0xffffffea;
    }
    local_5c = 0;
    local_58 = 0;
    iVar5 = local_1c;
LAB_0001b4a0:
    if (iVar5 != 0) {
      return 0xffffffea;
    }
  }
  else if (local_1c != 0) {
    iVar5 = local_58;
    if (local_5c != 0) {
      return 0xffffffea;
    }
    goto LAB_0001b4a0;
  }
  uVar1 = *(uint *)(*(int *)(iVar7 + 0x1c4) + 4);
  if (9 < uVar1) {
    return 0xffffffa1;
  }
  uVar1 = 1 << (uVar1 & 0xff);
  if ((uVar1 & 0x104) != 0) {
    local_70 = local_70 & 0xfffffffe;
    if ((local_78 & 0xa0) != 0) {
      return 0xffffffea;
    }
    if (-1 < (int)(local_74 << 0x19)) {
      return 0xffffffea;
    }
    if ((piVar6[0x71] & 0x18000U) != 0x18000) {
      return 0xffffffa1;
    }
    local_78 = local_78 & 0xfffffffd;
    goto LAB_0001b4ec;
  }
  if ((uVar1 & 0x218) == 0) {
    if (-1 < (int)(uVar1 << 0x18)) {
      return 0xffffffa1;
    }
    local_70 = local_70 & 0xfffffffe;
    if (((local_74 & 0x40) != 0 || (local_78 & 0x80) != 0) ||
       (*(int *)(*(int *)(param_2 + 0x14) + 0x2d4) != 0)) {
      return 0xffffffea;
    }
    goto LAB_0001b4ec;
  }
  if ((-1 < piVar6[0x71] << 0x11) || ((local_74 & 8) == 0)) {
    local_70 = local_70 & 0xfffffffe;
  }
  if ((int)(local_74 << 0x19) < 0) {
    return 0xffffffea;
  }
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x2d4) != 0) {
    return 0xffffffea;
  }
  uVar1 = local_78 & 0xffffffbf;
  uVar4 = local_78 & 0xa0;
  if (piVar6[0x73] << 0x10 < 0) {
    local_78 = uVar1;
    if (uVar4 == 0) goto LAB_0001b574;
  }
  else {
    if (uVar4 != 0) {
      return 0xffffffea;
    }
LAB_0001b574:
    local_74 = local_74 | 0xa0;
    local_78 = uVar1 | 0xa0;
  }
  local_7c = get_vlan(param_2,piVar6);
  if (0xfffff000 < local_7c) {
    return local_7c;
  }
LAB_0001b4ec:
  uVar1 = (**(code **)(*piVar6 + 0x3c))(piVar6 + 0x68,iVar7,iVar8 + 4,&local_80);
  if (local_7c != 0) {
    dev_put();
    return uVar1;
  }
  return uVar1;
}



/* ===== nl80211_parse_key @ 0001b5ca size=366 ===== */

int nl80211_parse_key(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_1c [4];
  int local_18;
  int local_14;
  
  memset(param_2,0,0x2c);
  param_2[7] = -1;
  param_2[8] = -1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x140);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x1c);
    if (iVar2 != 0) {
      *param_2 = iVar2 + 4;
      param_2[2] = **(ushort **)(*(int *)(param_1 + 0x14) + 0x1c) - 4;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x28);
    if (iVar2 != 0) {
      param_2[1] = iVar2 + 4;
      param_2[3] = **(ushort **)(*(int *)(param_1 + 0x14) + 0x28) - 4;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x20);
    if (iVar2 != 0) {
      param_2[7] = (uint)*(byte *)(iVar2 + 4);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x24);
    if (iVar2 != 0) {
      param_2[5] = *(int *)(iVar2 + 4);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c);
    *(bool *)(param_2 + 9) = iVar2 != 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0xa0);
    *(bool *)((int)param_2 + 0x25) = iVar3 != 0;
    if (iVar2 != 0) {
      *(undefined1 *)((int)param_2 + 0x27) = 1;
      *(undefined1 *)(param_2 + 10) = 1;
    }
    if (iVar3 != 0) {
      *(undefined1 *)(param_2 + 10) = 1;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0xdc);
    if (iVar2 != 0) {
      param_2[8] = *(int *)(iVar2 + 4);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x1b8);
    if (iVar2 != 0) {
      iVar2 = nla_parse_nested_deprecated
                        (auStack_1c,2,iVar2,DAT_0001b738,*(undefined4 *)(param_1 + 0x20));
      if (iVar2 != 0) {
        return iVar2;
      }
      *(bool *)((int)param_2 + 0x27) = local_18 != 0;
      *(bool *)(param_2 + 10) = local_14 != 0;
    }
  }
  else {
    iVar2 = nl80211_parse_key_new(param_1,iVar2,param_2);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if ((uint)*(byte *)(param_2 + 9) + (uint)*(byte *)((int)param_2 + 0x25) +
      (uint)*(byte *)((int)param_2 + 0x26) < 2) {
    if (((param_2[9] & 0xffff00U) == 0) ||
       ((*(char *)((int)param_2 + 0x27) == '\0' && ((char)param_2[10] != '\0')))) {
      uVar5 = param_2[7];
      if (uVar5 == 0xffffffff) {
        return 0;
      }
      if (*(byte *)((int)param_2 + 0x25) == 0) {
        if (*(byte *)((int)param_2 + 0x26) == 0) {
          if (*(byte *)(param_2 + 9) == 0) {
            if (uVar5 < 8) {
              return 0;
            }
            puVar4 = *(undefined4 **)(param_1 + 0x20);
            uVar1 = DAT_0001b750;
          }
          else {
            if (uVar5 < 4) {
              return 0;
            }
            puVar4 = *(undefined4 **)(param_1 + 0x20);
            uVar1 = DAT_0001b74c;
          }
        }
        else {
          if (uVar5 - 6 < 2) {
            return 0;
          }
          puVar4 = *(undefined4 **)(param_1 + 0x20);
          uVar1 = DAT_0001b748;
        }
      }
      else {
        if (uVar5 - 4 < 2) {
          return 0;
        }
        puVar4 = *(undefined4 **)(param_1 + 0x20);
        uVar1 = DAT_0001b744;
      }
    }
    else {
      puVar4 = *(undefined4 **)(param_1 + 0x20);
      uVar1 = DAT_0001b740;
    }
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 0x20);
    uVar1 = DAT_0001b73c;
  }
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = uVar1;
  }
  return -0x16;
}



/* ===== nl80211_set_key @ 0001b754 size=288 ===== */

int nl80211_set_key(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 auStack_44 [24];
  int local_2c;
  uint local_28;
  char local_20;
  char local_1f;
  char local_1e;
  char local_1d;
  char local_1c;
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar1 = nl80211_parse_key(param_2,auStack_44);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (((int)local_28 < 0) ||
     ((((local_20 == '\0' && (local_1f == '\0')) && (local_1e == '\0')) && (local_2c != 2)))) {
    return -0x16;
  }
  mutex_lock(*(int *)(iVar2 + 0x1c4) + 0x24);
  if (local_20 == '\0') {
    if (local_1f == '\0') {
      if (local_1e == '\0') {
        if (((local_2c == 2) && ((int)((uint)*(byte *)(piVar3 + 0x75) << 0x1b) < 0)) &&
           ((iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x18), iVar1 != 0 &&
            ((iVar1 = iVar1 + 4, iVar1 != 0 && (local_28 < 2)))))) {
          iVar1 = (**(code **)(*piVar3 + 0x18))
                            (piVar3 + 0x68,iVar2,local_28 & 0xff,1,iVar1,auStack_44);
          goto LAB_0001b7ca;
        }
      }
      else if ((local_1d == '\0') && (local_1c != '\0')) {
        pcVar4 = *(code **)(*piVar3 + 0x2c);
        goto LAB_0001b7f6;
      }
    }
    else if ((local_1d == '\0') && (local_1c != '\0')) {
      pcVar4 = *(code **)(*piVar3 + 0x28);
LAB_0001b7f6:
      if (pcVar4 != (code *)0x0) {
        iVar1 = nl80211_key_allowed(*(undefined4 *)(iVar2 + 0x1c4));
        if (iVar1 == 0) {
          iVar1 = (*pcVar4)(piVar3 + 0x68,iVar2,local_28 & 0xff);
        }
        goto LAB_0001b7ca;
      }
      goto LAB_0001b862;
    }
    iVar1 = -0x16;
  }
  else {
    pcVar4 = *(code **)(*piVar3 + 0x24);
    if (pcVar4 != (code *)0x0) {
      iVar1 = nl80211_key_allowed(*(undefined4 *)(iVar2 + 0x1c4));
      if (iVar1 == 0) {
        iVar1 = (*pcVar4)(piVar3 + 0x68,iVar2,local_28 & 0xff,local_1d,local_1c);
      }
      goto LAB_0001b7ca;
    }
LAB_0001b862:
    iVar1 = -0x5f;
  }
LAB_0001b7ca:
  mutex_unlock(*(int *)(iVar2 + 0x1c4) + 0x24);
  return iVar1;
}



/* ===== nl80211_del_key @ 0001b874 size=170 ===== */

int nl80211_del_key(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_44 [28];
  uint local_28;
  uint local_24;
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x1c);
  iVar1 = nl80211_parse_key(param_2,auStack_44);
  if (iVar1 == 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
    if (iVar2 != 0) {
      iVar2 = iVar2 + 4;
    }
    if (local_24 == 0xffffffff) {
      if (iVar2 == 0) {
        local_24 = 0;
      }
      else {
        local_24 = 1;
      }
    }
    if ((local_24 < 2) && (iVar1 = cfg80211_valid_key_idx(piVar3,local_28,local_24 & 1), iVar1 != 0)
       ) {
      if (*(int *)(*piVar3 + 0x20) == 0) {
        iVar1 = -0x5f;
      }
      else {
        mutex_lock(*(int *)(iVar4 + 0x1c4) + 0x24);
        iVar1 = nl80211_key_allowed(*(undefined4 *)(iVar4 + 0x1c4));
        if (((local_24 == 0) && (iVar2 != 0)) && (-1 < piVar3[0x71] << 0x17)) {
          iVar1 = -2;
        }
        else if (iVar1 == 0) {
          iVar1 = (**(code **)(*piVar3 + 0x20))
                            (piVar3 + 0x68,iVar4,local_28 & 0xff,local_24 == 1,iVar2);
        }
        mutex_unlock(*(int *)(iVar4 + 0x1c4) + 0x24);
      }
    }
    else {
      iVar1 = -0x16;
    }
  }
  return iVar1;
}



/* ===== nl80211_put_signal.part.11 @ 0001b91e size=70 ===== */

undefined4 nl80211_put_signal_part_11(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  psVar1 = (short *)nla_nest_start_noflag(param_1,param_4);
  if (psVar1 == (short *)0x0) {
LAB_0001b932:
    uVar2 = 0;
  }
  else {
    uVar4 = 0;
    do {
      if (((int)((param_2 >> (uVar4 & 0xff)) << 0x1f) < 0) &&
         (iVar3 = nla_put_u8(param_1,uVar4,*(undefined1 *)(param_3 + uVar4)), iVar3 != 0))
      goto LAB_0001b932;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 4);
    uVar2 = 1;
    *psVar1 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar1;
  }
  return uVar2;
}



/* ===== nl80211_post_doit @ 0001b964 size=62 ===== */

void nl80211_post_doit(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_3 + 0x1c) != 0) {
    if ((-1 < (int)((uint)*(byte *)(param_1 + 0x19) << 0x1b)) ||
       (*(int *)(*(int *)(param_3 + 0x1c) + 0x10) != 0)) {
      dev_put();
    }
  }
  if ((int)((uint)*(byte *)(param_1 + 0x19) << 0x1d) < 0) {
    rtnl_unlock();
  }
  if ((int)((uint)*(byte *)(param_1 + 0x19) << 0x1a) < 0) {
    memset(*(int **)(param_2 + 0xa4) + 4,0,**(int **)(param_2 + 0xa4) - 0x10);
    return;
  }
  return;
}



/* ===== nlmsg_trim @ 0001b9a2 size=14 ===== */

void nlmsg_trim(int param_1,int param_2)

{
  if (param_2 != 0) {
    skb_trim(param_1,param_2 - *(int *)(param_1 + 0xa4));
    return;
  }
  return;
}



/* ===== genlmsg_cancel @ 0001b9b0 size=8 ===== */

void genlmsg_cancel(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    nlmsg_trim(param_1,param_2 + -0x14);
    return;
  }
  return;
}



/* ===== cfg80211_rdev_free_wowlan @ 0001b9b8 size=90 ===== */

void cfg80211_rdev_free_wowlan(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x248) != 0) {
    iVar3 = 0;
    while( true ) {
      if (*(int *)(*(int *)(param_1 + 0x248) + 0x10) <= iVar3) break;
      iVar2 = iVar3 * 0x10;
      iVar3 = iVar3 + 1;
      kfree(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x248) + 8) + iVar2));
    }
    kfree();
    piVar1 = *(int **)(*(int *)(param_1 + 0x248) + 0xc);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      sock_release();
    }
    kfree(*(undefined4 *)(*(int *)(param_1 + 0x248) + 0xc));
    kfree(*(undefined4 *)(*(int *)(param_1 + 0x248) + 0x14));
    kfree(*(undefined4 *)(param_1 + 0x248),extraout_r1,extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== cfg80211_off_channel_oper_allowed @ 0001ba12 size=34 ===== */

int cfg80211_off_channel_oper_allowed(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = cfg80211_beaconing_iface_active();
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else if (*(int *)(param_1[0x2b] + 0xc) << 0x1c < 0) {
    iVar1 = regulatory_pre_cac_allowed(*param_1);
    return iVar1;
  }
  return iVar1;
}



/* ===== nl80211_msg_put_channel @ 0001ba34 size=666 ===== */

undefined4 nl80211_msg_put_channel(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_4 == 0) {
    if ((*(uint *)(param_3 + 0xc) & 0x1800) != 0) {
      return 0;
    }
    if (*(short *)(param_3 + 8) != 0) {
      return 0;
    }
  }
  iVar1 = nla_put_be32(param_1,1,*(undefined4 *)(param_3 + 4));
  if (iVar1 != 0) {
    return 0xffffff97;
  }
  iVar1 = nla_put_be32(param_1,0x14,*(undefined2 *)(param_3 + 8));
  if (iVar1 != 0) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x1f < 0) && (iVar1 = nla_put_flag(param_1,2), iVar1 != 0)) {
    return 0xffffff97;
  }
  if (*(int *)(param_3 + 0xc) << 0x1e < 0) {
    iVar1 = nla_put_flag(param_1,3);
    if (iVar1 != 0) {
      return 0xffffff97;
    }
    iVar1 = nla_put_flag(param_1,4);
    if (iVar1 != 0) {
      return 0xffffff97;
    }
  }
  if (*(int *)(param_3 + 0xc) << 0x1c < 0) {
    iVar1 = nla_put_flag(param_1,5);
    if (iVar1 != 0) {
      return 0xffffff97;
    }
    if (param_4 == 0) goto LAB_0001bab0;
    uVar6 = elapsed_jiffies_msecs(*(undefined4 *)(param_3 + 0x30));
    iVar1 = nla_put_be32(param_1,7,*(undefined4 *)(param_3 + 0x2c));
    if (iVar1 != 0) {
      return 0xffffff97;
    }
    iVar1 = nla_put_be32(param_1,8,uVar6);
    if (iVar1 != 0) {
      return 0xffffff97;
    }
    iVar1 = nla_put_be32(param_1,0xd,*(undefined4 *)(param_3 + 0x34));
    if (iVar1 != 0) {
      return 0xffffff97;
    }
  }
  else if (param_4 == 0) goto LAB_0001bab0;
  if ((*(int *)(param_3 + 0xc) << 0x1a < 0) && (iVar1 = nla_put_flag(param_1,9), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x1b < 0) && (iVar1 = nla_put_flag(param_1,10), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x18 < 0) && (iVar1 = nla_put_flag(param_1,0xb), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x17 < 0) && (iVar1 = nla_put_flag(param_1,0xc), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x16 < 0) && (iVar1 = nla_put_flag(param_1,0xe), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x15 < 0) && (iVar1 = nla_put_flag(param_1,0xf), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x14 < 0) && (iVar1 = nla_put_flag(param_1,0x10), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x13 < 0) && (iVar1 = nla_put_flag(param_1,0x11), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x12 < 0) && (iVar1 = nla_put_flag(param_1,0x13), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x11 < 0) && (iVar1 = nla_put_flag(param_1,0x15), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0x10 < 0) && (iVar1 = nla_put_flag(param_1,0x16), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0xf < 0) && (iVar1 = nla_put_flag(param_1,0x17), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0xe < 0) && (iVar1 = nla_put_flag(param_1,0x18), iVar1 != 0)) {
    return 0xffffff97;
  }
  if ((*(int *)(param_3 + 0xc) << 0xd < 0) && (iVar1 = nla_put_flag(param_1,0x19), iVar1 != 0)) {
    return 0xffffff97;
  }
LAB_0001bab0:
  iVar1 = nla_put_be32(param_1,6,*(int *)(param_3 + 0x14) * 100);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      return 0;
    }
    uVar2 = freq_reg_info(param_2,*(int *)(param_3 + 4) * 1000);
    if (uVar2 == 0) {
      return 0;
    }
    if (0xfffff000 < uVar2) {
      return 0;
    }
    if (*(char *)(uVar2 + 0x5c) == '\0') {
      return 0;
    }
    psVar3 = (short *)nla_nest_start_noflag(param_1,0x12);
    iVar1 = 0;
    if (psVar3 != (short *)0x0) {
      while ((((psVar4 = (short *)nla_nest_start_noflag(param_1,iVar1), psVar4 != (short *)0x0 &&
               (iVar5 = nla_put_u16(param_1,1,*(undefined2 *)(uVar2 + 0x14)), iVar5 == 0)) &&
              (iVar5 = nla_put_u16(param_1,2,*(undefined2 *)(uVar2 + 0x16)), iVar5 == 0)) &&
             ((iVar5 = nla_put_u8(param_1,3,*(undefined1 *)(uVar2 + 0x1a)), iVar5 == 0 &&
              (iVar5 = nla_put_u16(param_1,4,*(undefined2 *)(uVar2 + 0x18)), iVar5 == 0))))) {
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 + 8;
        *psVar4 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar4;
        if (iVar1 == 4) {
          *psVar3 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar3;
          return 0;
        }
      }
    }
  }
  return 0xffffff97;
}



/* ===== __cfg80211_rdev_from_attrs.constprop.29 @ 0001bcce size=158 ===== */

int __cfg80211_rdev_from_attrs_constprop_29(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  
  rtnl_is_locked();
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
    if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x264) == 0)) {
      return -0x16;
    }
  }
  else {
    iVar2 = cfg80211_rdev_by_wiphy_idx(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  }
  iVar4 = iVar2;
  if (*(int *)(param_1 + 0x264) != 0) {
    uVar5 = nla_get_u64();
    iVar1 = cfg80211_rdev_by_wiphy_idx((int)((ulonglong)uVar5 >> 0x20));
    if (iVar1 != 0) {
      for (piVar3 = *(int **)(iVar1 + 0x438); piVar3 != (int *)(iVar1 + 0x438);
          piVar3 = (int *)*piVar3) {
        if (piVar3[3] == (int)uVar5) {
          iVar4 = iVar1;
          if ((iVar2 != 0) && (iVar4 = iVar2, iVar1 != iVar2)) {
            return -0x16;
          }
          goto LAB_0001bd32;
        }
      }
      if (iVar2 != 0) {
        return -0x16;
      }
    }
  }
LAB_0001bd32:
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (iVar2 = __dev_get_by_index(DAT_0001bd6c,*(undefined4 *)(*(int *)(param_1 + 0xc) + 4)),
     iVar2 == 0)) {
    if (iVar4 == 0) {
      return -0x13;
    }
    return iVar4;
  }
  if ((*(undefined4 **)(iVar2 + 0x1c4) != (undefined4 *)0x0) &&
     (iVar2 = wiphy_to_rdev(**(undefined4 **)(iVar2 + 0x1c4)), iVar2 != 0)) {
    if (iVar4 == 0) {
      return iVar2;
    }
    if (iVar2 == iVar4) {
      return iVar4;
    }
  }
  return -0x16;
}



/* ===== nl80211_crit_protocol_stop @ 0001bd70 size=46 ===== */

undefined4 nl80211_crit_protocol_stop(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 0x18);
  if (*(int *)(*piVar2 + 0x154) == 0) {
    uVar1 = 0xffffffa1;
  }
  else {
    uVar1 = 0;
    if (piVar2[0x3e] != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x1c);
      piVar2[0x3e] = 0;
      (**(code **)(*piVar2 + 0x154))(piVar2 + 0x68,uVar1);
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== genlmsg_unicast.constprop.36 @ 0001bd9e size=24 ===== */

uint genlmsg_unicast_constprop_36
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = netlink_unicast(*(undefined4 *)(DAT_0001bdb8 + 0x9c),param_1,param_2,0x40,param_4);
  return uVar1 & (int)uVar1 >> 0x1f;
}



/* ===== genlmsg_reply @ 0001bdbc size=4 ===== */

void genlmsg_reply(undefined4 param_1,int param_2)

{
  genlmsg_unicast_constprop_36(param_1,*(undefined4 *)(param_2 + 4));
  return;
}



/* ===== cfg80211_vendor_cmd_reply @ 0001bdc0 size=72 ===== */

undefined4
cfg80211_vendor_cmd_reply(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x1c);
  psVar5 = *(short **)(param_1 + 0x20);
  memset((void *)(param_1 + 0x18),0,0x30);
  if (*(int *)(iVar3 + 0xa8) != 0) {
    iVar2 = iVar4 + -0x14;
    *psVar5 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar5;
    *(int *)(iVar4 + -0x14) = *(int *)(param_1 + 0x98) - iVar2;
    uVar1 = genlmsg_reply(param_1,*(undefined4 *)(iVar3 + 0xa8),iVar2,param_4);
    return uVar1;
  }
  kfree_skb(param_1);
  return 0xffffffea;
}



/* ===== nl80211_vendor_check_policy @ 0001be08 size=78 ===== */

undefined4 nl80211_vendor_check_policy(int param_1,ushort *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) == -0x3d) {
    uVar1 = DAT_0001be58;
    if (-1 < (short)param_2[1]) {
      return 0;
    }
  }
  else {
    uVar1 = DAT_0001be5c;
    if ((short)param_2[1] < 0) {
      uVar1 = __nla_validate(param_2 + 2,*param_2 - 4,*(undefined4 *)(param_1 + 0x18),
                             *(int *)(param_1 + 0x14),0x1f,param_3);
      return uVar1;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar1;
    param_3[1] = param_2;
    param_3[2] = 0;
  }
  return 0xffffffea;
}



/* ===== genlmsg_multicast_netns.constprop.37 @ 0001be60 size=50 ===== */

uint genlmsg_multicast_netns_constprop_37(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 < *(byte *)(DAT_0001be94 + 0x27)) {
    iVar2 = *(int *)(DAT_0001be94 + 0x20) + param_2;
    uVar3 = *(undefined4 *)(DAT_0001be98 + 0x9c);
    *(int *)(param_1 + 0x28) = iVar2;
    uVar1 = netlink_broadcast(uVar3,param_1,0,iVar2,param_3,param_2);
    uVar1 = uVar1 & (int)uVar1 >> 0x1f;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== cfg80211_send_cqm @ 0001be9c size=54 ===== */

void cfg80211_send_cqm(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  **(short **)(param_1 + 0x1c) =
       (short)*(undefined4 *)(param_1 + 0x98) - (short)*(short **)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(iVar1 + -0x14) = *(int *)(param_1 + 0x98) - (iVar1 + -0x14);
  memset((int *)(param_1 + 0x18),0,0x30);
  genlmsg_multicast_netns_constprop_37(param_1,3,param_2,param_4);
  return;
}



/* ===== __cfg80211_send_event_skb @ 0001bed2 size=82 ===== */

void __cfg80211_send_event_skb(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  psVar2 = *(short **)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0xa4);
  memset((void *)(param_1 + 0x18),0,0x30);
  *psVar2 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar2;
  *(int *)(iVar3 + -0x14) = *(int *)(param_1 + 0x98) - (iVar3 + -0x14);
  if (*(int *)(iVar4 + 0xc) == 0) {
    if (psVar2[1] == 0xc5) {
      uVar1 = 4;
    }
    else {
      uVar1 = 6;
    }
    genlmsg_multicast_netns_constprop_37(param_1,uVar1,param_2);
    return;
  }
  genlmsg_unicast_constprop_36(param_1);
  return;
}



/* ===== nla_parse_nested.constprop.40 @ 0001bf24 size=44 ===== */

undefined4
nla_parse_nested_constprop_40
          (undefined4 param_1,undefined4 param_2,ushort *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((short)param_3[1] < 0) {
    uVar1 = __nla_parse(param_1,param_2,param_3 + 2,*param_3 - 4,param_4,0x1f,0);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== __cfg80211_wdev_from_attrs.constprop.43 @ 0001bf50 size=140 ===== */

int __cfg80211_wdev_from_attrs_constprop_43(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r8;
  undefined8 uVar7;
  
  iVar5 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x264);
  rtnl_is_locked();
  if (iVar5 == 0) {
    if (iVar4 == 0) {
      return -0x16;
    }
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    if (iVar4 == 0) {
      iVar2 = -1;
      goto LAB_0001bf74;
    }
  }
  uVar7 = nla_get_u64(*(undefined4 *)(param_1 + 0x264));
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  unaff_r8 = (int)uVar7;
LAB_0001bf74:
  puVar3 = (undefined4 *)*DAT_0001bfdc;
  do {
    if (puVar3 == DAT_0001bfdc) {
      return -0x13;
    }
    if ((iVar4 == 0) || (puVar3[0xd] == iVar2)) {
      for (piVar1 = (int *)puVar3[0x10d]; piVar1 != puVar3 + 0x10d; piVar1 = (int *)*piVar1) {
        if ((((iVar5 != 0) && (piVar1[2] != 0)) && (*(int *)(piVar1[2] + 0xa8) == iVar6)) ||
           ((iVar4 != 0 && (piVar1[3] == unaff_r8)))) {
          if (piVar1 + -2 != (int *)0x0) {
            return (int)(piVar1 + -2);
          }
          break;
        }
      }
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



/* ===== nl80211_vendor_cmd @ 0001bfe0 size=220 ===== */

int * nl80211_vendor_cmd(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  ushort *puVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_2 + 0x18);
  piVar2 = (int *)__cfg80211_wdev_from_attrs_constprop_43(*(undefined4 *)(param_2 + 0x14));
  piVar8 = *(int **)(iVar10 + 0x444);
  if (piVar8 == (int *)0x0) {
LAB_0001bff6:
    piVar2 = (int *)0xffffffa1;
  }
  else {
    if (piVar2 < (int *)0xfffff001) {
      if (*piVar2 == iVar10 + 0x1a0) goto LAB_0001c00c;
    }
    else {
      if (piVar2 != (int *)0xffffffea) {
        return piVar2;
      }
      piVar2 = (int *)0x0;
LAB_0001c00c:
      iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x30c);
      if ((iVar4 != 0) && (iVar5 = *(int *)(*(int *)(param_2 + 0x14) + 0x310), iVar5 != 0)) {
        for (iVar6 = 0; iVar6 < *(int *)(iVar10 + 0x44c); iVar6 = iVar6 + 1) {
          if ((*piVar8 == *(int *)(iVar4 + 4)) && (piVar8[1] == *(int *)(iVar5 + 4))) {
            uVar7 = piVar8[2];
            if ((uVar7 & 3) == 0) {
              piVar2 = (int *)0x0;
            }
            else {
              if ((piVar2 == (int *)0x0) || (((int)(uVar7 << 0x1e) < 0 && (piVar2[4] == 0))))
              goto LAB_0001c046;
              if (((int)(uVar7 << 0x1d) < 0) && (iVar4 = wdev_running(piVar2), iVar4 == 0)) {
                return (int *)0xffffff9c;
              }
            }
            if (piVar8[3] != 0) {
              puVar9 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x314);
              if (puVar9 == (ushort *)0x0) {
                iVar4 = 0;
                puVar9 = (ushort *)0x0;
              }
              else {
                uVar1 = *puVar9;
                piVar3 = (int *)nl80211_vendor_check_policy
                                          (piVar8,puVar9,*(undefined4 *)(param_2 + 0x20),
                                           *(int *)(param_2 + 0x14),param_4);
                if (piVar3 != (int *)0x0) {
                  return piVar3;
                }
                puVar9 = puVar9 + 2;
                iVar4 = uVar1 - 4;
              }
              *(int *)(iVar10 + 0xa8) = param_2;
              piVar2 = (int *)(*(code *)piVar8[3])(iVar10 + 0x1a0,piVar2,puVar9,iVar4);
              *(undefined4 *)(iVar10 + 0xa8) = 0;
              return piVar2;
            }
            break;
          }
          piVar8 = piVar8 + 7;
        }
        goto LAB_0001bff6;
      }
    }
LAB_0001c046:
    piVar2 = (int *)0xffffffea;
  }
  return piVar2;
}



/* ===== nl80211_pre_doit @ 0001c0bc size=158 ===== */

undefined4 * nl80211_pre_doit(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r2;
  int extraout_r2_00;
  int iVar6;
  undefined8 uVar7;
  
  bVar1 = *(byte *)(param_1 + 0x19);
  if ((bVar1 & 4) != 0) {
    rtnl_lock();
  }
  bVar2 = *(byte *)(param_1 + 0x19);
  if ((int)((uint)bVar2 << 0x1f) < 0) {
    puVar3 = (undefined4 *)__cfg80211_rdev_from_attrs_constprop_29(*(undefined4 *)(param_3 + 0x14));
    if (puVar3 < (undefined4 *)0xfffff001) {
      *(undefined4 **)(param_3 + 0x18) = puVar3;
      return (undefined4 *)0x0;
    }
  }
  else {
    if ((bVar2 & 0x12) == 0) {
      return (undefined4 *)(bVar2 & 0x12);
    }
    rtnl_is_locked();
    uVar7 = __cfg80211_wdev_from_attrs_constprop_43(*(undefined4 *)(param_3 + 0x14));
    puVar3 = (undefined4 *)uVar7;
    if (puVar3 < (undefined4 *)0xfffff001) {
      uVar4 = wiphy_to_rdev(*puVar3,(int)((ulonglong)uVar7 >> 0x20),puVar3[4]);
      if ((int)((uint)*(byte *)(param_1 + 0x19) << 0x1e) < 0) {
        if (extraout_r2 == 0) {
          if ((bVar1 & 4) != 0) {
            rtnl_unlock();
          }
          return (undefined4 *)0xffffffea;
        }
        *(int *)(param_3 + 0x1c) = extraout_r2;
      }
      else {
        *(undefined4 **)(param_3 + 0x1c) = puVar3;
      }
      iVar6 = extraout_r2;
      if (((int)((uint)*(byte *)(param_1 + 0x19) << 0x1c) < 0) &&
         (iVar5 = wdev_running(puVar3), iVar6 = extraout_r2_00, iVar5 == 0)) {
        if ((bVar1 & 4) != 0) {
          rtnl_unlock();
        }
        return (undefined4 *)0xffffff9c;
      }
      if (iVar6 != 0) {
        dev_hold(iVar6);
      }
      *(undefined4 *)(param_3 + 0x18) = uVar4;
      return (undefined4 *)0x0;
    }
  }
  if ((bVar1 & 4) != 0) {
    rtnl_unlock();
  }
  return puVar3;
}



/* ===== __nlmsg_parse.constprop.45 @ 0001c15a size=62 ===== */

undefined4
__nlmsg_parse_constprop_45(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*param_1 < param_2 + 0x10U) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar2 = param_2 + 3U & 0xfffffffc;
    uVar1 = __nla_parse(param_3,param_4,uVar2 + 0x10 + (int)param_1,(*param_1 - 0x10) - uVar2,
                        DAT_0001c198,0,0);
  }
  return uVar1;
}



/* ===== kmalloc_array.constprop.46 @ 0001c19c size=20 ===== */

undefined4 kmalloc_array_constprop_46(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) == 0) {
    uVar1 = __kmalloc((int)((ulonglong)param_1 * (ulonglong)param_2),0xdc0);
    return uVar1;
  }
  return 0;
}



/* ===== handle_nan_filter @ 0001c1b0 size=244 ===== */

int handle_nan_filter(ushort *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *extraout_r3;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  int local_2c;
  int iStack_28;
  
  puVar4 = param_1 + 2;
  iVar5 = 0;
  local_2c = *param_1 - 4;
  iVar7 = 0;
  puVar3 = puVar4;
  iStack_28 = param_3;
  while (iVar1 = nla_ok(puVar3,local_2c), iVar1 != 0) {
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + (*extraout_r3 - 4);
    puVar3 = (ushort *)nla_next(extraout_r3,&local_2c);
  }
  if (iVar7 < 0xff) {
    if (-1 < iVar5) {
      puVar2 = (undefined4 *)kmalloc_array_constprop_46(iVar5,8);
      if (puVar2 == (undefined4 *)0x0) {
LAB_0001c26a:
        iVar5 = -0xc;
      }
      else {
        local_2c = *param_1 - 4;
        puVar3 = puVar4;
        pcVar8 = (char *)(puVar2 + 1);
LAB_0001c216:
        iVar7 = nla_ok(puVar3,local_2c);
        if (iVar7 != 0) {
          iVar7 = kmemdup(puVar3 + 2,*puVar3 - 4,0xcc0);
          *(int *)(pcVar8 + -4) = iVar7;
          if (iVar7 != 0) goto LAB_0001c270;
          local_2c = *param_1 - 4;
          puVar6 = puVar2;
          while( true ) {
            iVar5 = nla_ok(puVar4,local_2c);
            if (iVar5 == 0) break;
            kfree(*puVar6);
            puVar4 = (ushort *)nla_next(puVar4,&local_2c);
            puVar6 = puVar6 + 2;
          }
          kfree(puVar2);
          goto LAB_0001c26a;
        }
        if (param_3 == 0) {
          *(char *)(param_2 + 0x3d) = (char)iVar5;
          *(undefined4 **)(param_2 + 0x34) = puVar2;
          iVar5 = 0;
        }
        else {
          *(char *)(param_2 + 0x3c) = (char)iVar5;
          *(undefined4 **)(param_2 + 0x38) = puVar2;
          iVar5 = 0;
        }
      }
    }
  }
  else {
    iVar5 = -0x16;
  }
  return iVar5;
LAB_0001c270:
  *pcVar8 = (char)*puVar3 + -4;
  puVar3 = (ushort *)nla_next(puVar3,&local_2c);
  pcVar8 = pcVar8 + 8;
  goto LAB_0001c216;
}



/* ===== kzalloc.constprop.47 @ 0001c2a4 size=8 ===== */

void kzalloc_constprop_47(undefined4 param_1)

{
  __kmalloc(param_1,0xdc0);
  return;
}



/* ===== nl80211_set_reg @ 0001c2ac size=304 ===== */

int nl80211_set_reg(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 extraout_r3;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int local_44;
  undefined1 auStack_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar3 = *(int *)(param_2 + 0x14);
  iVar6 = *(int *)(iVar3 + 0x84);
  if ((iVar6 != 0) && (puVar4 = *(ushort **)(iVar3 + 0x88), puVar4 != (ushort *)0x0)) {
    uVar5 = 0;
    if (*(int *)(iVar3 + 0x248) != 0) {
      uVar5 = (uint)*(byte *)(*(int *)(iVar3 + 0x248) + 4);
    }
    puVar7 = puVar4 + 2;
    iVar3 = 0;
    local_44 = *puVar4 - 4;
    while (iVar2 = nla_ok(puVar7,local_44), iVar2 != 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0x81) {
        return -0x16;
      }
      puVar7 = (ushort *)nla_next(extraout_r3,&local_44);
    }
    iVar2 = reg_is_valid_request(iVar6 + 4);
    if (iVar2 != 0) {
      iVar2 = kzalloc_constprop_47(iVar3 * 0x60 + 0x14);
      if (iVar2 == 0) {
        return -0xc;
      }
      *(int *)(iVar2 + 8) = iVar3;
      *(undefined1 *)(iVar2 + 0xc) = *(undefined1 *)(iVar6 + 4);
      *(undefined1 *)(iVar2 + 0xd) = *(undefined1 *)(iVar6 + 5);
      iVar3 = reg_supported_dfs_region(uVar5);
      if (iVar3 != 0) {
        *(uint *)(iVar2 + 0x10) = uVar5;
      }
      uVar1 = DAT_0001c3dc;
      puVar7 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x88);
      puVar4 = puVar7 + 2;
      local_44 = *puVar7 - 4;
      iVar3 = iVar2;
      while( true ) {
        iVar6 = nla_ok(puVar4,local_44);
        if (iVar6 == 0) {
          iVar3 = set_regdom(iVar2,1);
          return iVar3;
        }
        iVar6 = nla_parse_nested_deprecated
                          (auStack_40,7,puVar4,uVar1,*(undefined4 *)(param_2 + 0x20));
        if (iVar6 != 0) goto LAB_0001c380;
        if ((((local_3c == 0) || (local_38 == 0)) || (local_34 == 0)) ||
           ((local_30 == 0 || (local_28 == 0)))) break;
        *(undefined4 *)(iVar3 + 0x68) = *(undefined4 *)(local_3c + 4);
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(local_38 + 4);
        *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(local_34 + 4);
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(local_30 + 4);
        *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(local_28 + 4);
        if (local_2c != 0) {
          *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(local_2c + 4);
        }
        if (local_24 != 0) {
          *(undefined4 *)(iVar3 + 0x6c) = *(undefined4 *)(local_24 + 4);
        }
        iVar3 = iVar3 + 0x60;
        if (iVar3 == iVar2 + 0x3060) break;
        puVar4 = (ushort *)nla_next(puVar4,&local_44);
      }
      iVar6 = -0x16;
LAB_0001c380:
      kfree(iVar2);
      return iVar6;
    }
  }
  return -0x16;
}



/* ===== nl80211_parse_connkeys @ 0001c3e0 size=332 ===== */

int nl80211_parse_connkeys(undefined4 param_1,int param_2,undefined1 *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *__dest;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  int local_58;
  void *local_54 [2];
  size_t local_4c;
  uint local_40;
  uint local_38;
  char local_30;
  char local_2f;
  char local_2d;
  char local_2c;
  
  puVar8 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x144);
  puVar5 = puVar8 + 2;
  local_58 = *puVar8 - 4;
  iVar3 = nla_ok(puVar5);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar4 = kzalloc_constprop_47(0xa8);
    uVar2 = DAT_0001c53c;
    if (iVar4 == 0) {
      iVar3 = -0xc;
    }
    else {
      *(undefined4 *)(iVar4 + 0xa4) = 0xffffffff;
      bVar1 = false;
      local_58 = *puVar8 - 4;
      while (iVar3 = nla_ok(puVar5,local_58), iVar3 != 0) {
        memset(local_54,0,0x2c);
        local_38 = 0xffffffff;
        iVar3 = nl80211_parse_key_new(param_2,puVar5,local_54);
        if (iVar3 != 0) goto LAB_0001c46c;
        if (local_54[0] == (void *)0x0) goto LAB_0001c468;
        if (3 < local_38) {
          puVar7 = *(undefined4 **)(param_2 + 0x20);
          uVar6 = DAT_0001c530;
joined_r0x0001c486:
          if (puVar7 == (undefined4 *)0x0) goto LAB_0001c468;
          goto LAB_0001c48a;
        }
        if (local_30 == '\0') {
          if (local_2f != '\0') goto LAB_0001c468;
        }
        else {
          if (bVar1) {
            puVar7 = *(undefined4 **)(param_2 + 0x20);
            uVar6 = DAT_0001c534;
            goto joined_r0x0001c49e;
          }
          *(uint *)(iVar4 + 0xa4) = local_38;
          if ((local_2d == '\0') || (local_2c == '\0')) goto LAB_0001c468;
          bVar1 = true;
        }
        iVar3 = cfg80211_validate_key_settings(param_1,local_54,local_38,0,0);
        if (iVar3 != 0) goto LAB_0001c46c;
        if ((local_40 & 0xfffffffb) != uVar2) {
          puVar7 = *(undefined4 **)(param_2 + 0x20);
          uVar6 = DAT_0001c538;
          goto joined_r0x0001c486;
        }
        iVar3 = iVar4 + local_38 * 0x1c;
        *(uint *)(iVar3 + 0x14) = local_40;
        *(size_t *)(iVar3 + 8) = local_4c;
        __dest = (void *)(local_38 * 0xd + iVar4 + 0x70);
        *(void **)(iVar4 + local_38 * 0x1c) = __dest;
        memcpy(__dest,local_54[0],local_4c);
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        puVar5 = (ushort *)nla_next(puVar5,&local_58);
      }
      iVar3 = iVar4;
      if (*(int *)(iVar4 + 0xa4) < 0) {
        puVar7 = *(undefined4 **)(param_2 + 0x20);
        uVar6 = DAT_0001c52c;
joined_r0x0001c49e:
        if (puVar7 != (undefined4 *)0x0) {
LAB_0001c48a:
          *puVar7 = uVar6;
        }
LAB_0001c468:
        iVar3 = -0x16;
LAB_0001c46c:
        kfree(iVar4);
      }
    }
  }
  return iVar3;
}



/* ===== nl80211_set_qos_map @ 0001c540 size=220 ===== */

int nl80211_set_qos_map(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int *piVar10;
  ushort *__src;
  
  piVar10 = *(int **)(param_2 + 0x18);
  iVar9 = *(int *)(param_2 + 0x1c);
  if (*(int *)(*piVar10 + 0x160) == 0) {
    return -0x5f;
  }
  puVar8 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x31c);
  puVar2 = (undefined1 *)0x0;
  if (puVar8 == (ushort *)0x0) {
LAB_0001c5b2:
    mutex_lock(*(int *)(iVar9 + 0x1c4) + 0x24);
    iVar3 = nl80211_key_allowed(*(undefined4 *)(iVar9 + 0x1c4));
    if (iVar3 == 0) {
      if (*(code **)(*piVar10 + 0x160) == (code *)0x0) {
        iVar3 = -0x5f;
      }
      else {
        iVar3 = (**(code **)(*piVar10 + 0x160))(piVar10 + 0x68,iVar9,puVar2);
      }
    }
    mutex_unlock(*(int *)(iVar9 + 0x1c4) + 0x24);
    kfree(puVar2);
  }
  else {
    __src = puVar8 + 2;
    uVar1 = *puVar8;
    if ((uVar1 - 4 & 1) == 0) {
      puVar2 = (undefined1 *)kzalloc_constprop_47(0x3b);
      if (puVar2 == (undefined1 *)0x0) {
        return -0xc;
      }
      uVar6 = (uVar1 - 4 & 0xff) - 0x10;
      uVar7 = (uVar6 & 0x1ff) >> 1;
      if (uVar7 == 0) {
LAB_0001c59c:
        puVar8 = __src;
        puVar5 = (undefined4 *)(puVar2 + 0x2b);
        do {
          puVar4 = puVar8 + 2;
          *puVar5 = *(undefined4 *)puVar8;
          puVar8 = puVar4;
          puVar5 = puVar5 + 1;
        } while (puVar4 != __src + 8);
        goto LAB_0001c5b2;
      }
      memcpy(puVar2 + 1,__src,(uVar7 & 0x7f) * 2);
      *puVar2 = (char)(uVar6 * 0x800000 >> 0x18);
      uVar6 = 0;
      do {
        if (uVar7 <= (uVar6 & 0xff)) {
          __src = __src + (uVar7 & 0x7f);
          goto LAB_0001c59c;
        }
        uVar6 = uVar6 + 1;
      } while ((byte)puVar2[uVar6 * 2] < 8);
      kfree(puVar2);
    }
    iVar3 = -0x16;
  }
  return iVar3;
}



/* ===== parse_acl_data.part.10 @ 0001c61c size=142 ===== */

uint * parse_acl_data_part_10(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int extraout_r2;
  ushort *puVar6;
  int extraout_r3;
  uint *puVar7;
  uint uVar8;
  int local_1c;
  undefined4 uStack_18;
  
  iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x294);
  if (((iVar4 == 0) || (uVar8 = *(uint *)(iVar4 + 4), 1 < uVar8)) ||
     (*(int *)(*(int *)(param_2 + 0x14) + 0x298) == 0)) {
    puVar2 = (uint *)0xffffffea;
  }
  else {
    iVar4 = param_1;
    local_1c = param_2;
    uStack_18 = param_3;
    puVar1 = (uint *)validate_acl_mac_addrs();
    puVar2 = puVar1;
    if ((-1 < (int)puVar1) &&
       (puVar2 = DAT_0001c6ac, (int)puVar1 <= (int)(uint)*(ushort *)(param_1 + 0x22))) {
      puVar2 = (uint *)kzalloc_constprop_47((int)puVar1 * 6 + 8);
      if (puVar2 == (uint *)0x0) {
        puVar2 = (uint *)0xfffffff4;
      }
      else {
        puVar6 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x298);
        puVar3 = puVar6 + 2;
        iVar5 = *puVar6 - 4;
        puVar7 = puVar2 + 2;
        local_1c = iVar5;
        while (iVar5 = nla_ok(puVar3,local_1c,iVar5,puVar3,iVar4), iVar5 != 0) {
          *puVar7 = *(uint *)(extraout_r3 + 4);
          *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(extraout_r3 + 8);
          puVar3 = (ushort *)nla_next(extraout_r3,&local_1c);
          iVar5 = extraout_r2;
          puVar7 = (uint *)((int)puVar7 + 6);
        }
        *puVar2 = uVar8;
        puVar2[1] = (uint)puVar1;
      }
    }
  }
  return puVar2;
}



/* ===== nl80211_register_beacons @ 0001c6b0 size=124 ===== */

undefined4 nl80211_register_beacons(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x18);
  if (*(int *)(iVar5 + 0x1c4) << 0xd < 0) {
    piVar1 = (int *)kzalloc_constprop_47(0xc);
    if (piVar1 == (int *)0x0) {
      uVar2 = 0xfffffff4;
    }
    else {
      *(int *)(((uint)&stack0xfffffff0 & 0xffffe000) + 4) =
           *(int *)(((uint)&stack0xfffffff0 & 0xffffe000) + 4) + 0x200;
      for (puVar4 = *(undefined4 **)(iVar5 + 0x50); puVar4 != (undefined4 *)(iVar5 + 0x50);
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4[2] == *(int *)(param_2 + 4)) {
          __local_bh_enable_ip(DAT_0001c730,0x200);
          kfree(piVar1);
          return 0xffffff8e;
        }
      }
      piVar1[2] = *(int *)(param_2 + 4);
      uVar2 = DAT_0001c72c;
      iVar3 = *(int *)(iVar5 + 0x50);
      *(int **)(iVar3 + 4) = piVar1;
      *piVar1 = iVar3;
      piVar1[1] = (int)puVar4;
      *(int **)(iVar5 + 0x50) = piVar1;
      __local_bh_enable_ip(uVar2,0x200);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffa1;
  }
  return uVar2;
}



/* ===== nl80211_parse_mon_options @ 0001c734 size=186 ===== */

undefined4 nl80211_parse_mon_options(int param_1,int param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int aiStack_34 [7];
  
  iVar2 = *(int *)(*(int *)(param_3 + 0x14) + 0x5c);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 6) {
      return 0xffffffea;
    }
    *param_4 = 0;
    iVar2 = nla_parse_nested_deprecated(aiStack_34,6,iVar2,DAT_0001c7f0,0);
    if (iVar2 != 0) {
      return 0xffffffea;
    }
    uVar3 = 1;
    do {
      if (aiStack_34[uVar3] != 0) {
        *param_4 = *param_4 | 1 << (uVar3 & 0xff);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 7);
    uVar1 = 1;
    *param_4 = *param_4 | 1;
  }
  if ((-1 < (int)(*param_4 << 0x19)) || (*(int *)(param_1 + 0x1cc) << 0xe < 0)) {
    iVar2 = *(int *)(*(int *)(param_3 + 0x14) + 0x39c);
    if (iVar2 != 0) {
      if (param_2 != 6) {
        return 0xffffffea;
      }
      if (-1 < (int)((uint)*(byte *)(param_1 + 0x1d0) << 0x1d)) {
        return 0xffffffa1;
      }
      if ((int)((uint)*(byte *)(iVar2 + 4) << 0x1f) < 0) {
        return 0xffffffea;
      }
      if (*(char *)(iVar2 + 0x1b) < '\0') {
        return 0xffffffea;
      }
      uVar1 = 1;
      param_4[4] = iVar2 + 4;
    }
    iVar2 = *(int *)(*(int *)(param_3 + 0x14) + 0x3a0);
    if (iVar2 == 0) {
      return uVar1;
    }
    if (param_2 != 6) {
      return 0xffffffea;
    }
    if ((int)((uint)*(byte *)(param_1 + 0x1d0) << 0x1d) < 0) {
      param_4[5] = iVar2 + 4;
      return 1;
    }
  }
  return 0xffffffa1;
}



/* ===== schedule_work @ 0001c7f4 size=12 ===== */

void schedule_work(undefined4 param_1)

{
  queue_work_on(1,*DAT_0001c800,param_1);
  return;
}



/* ===== nl80211_netlink_notify @ 0001c804 size=252 ===== */

undefined4 nl80211_netlink_notify(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_28;
  
  uVar2 = DAT_0001c908;
  puVar1 = DAT_0001c900;
  if ((param_2 == 1) && (*(int *)(param_3 + 8) == 0x10)) {
    uStack_28 = param_4;
    for (puVar8 = (undefined4 *)*DAT_0001c900; puVar8 != puVar1; puVar8 = (undefined4 *)*puVar8) {
      for (puVar9 = (undefined4 *)puVar8[0x21]; puVar9 != puVar8 + 0x21;
          puVar9 = (undefined4 *)*puVar9) {
        if (puVar9[-2] == *(int *)(param_3 + 4)) {
          *(undefined1 *)(puVar9 + -1) = 1;
          schedule_work(puVar8 + 0x43);
        }
      }
      for (puVar9 = (undefined4 *)puVar8[0x10d]; puVar9 != puVar8 + 0x10d;
          puVar9 = (undefined4 *)*puVar9) {
        cfg80211_mlme_unregister_socket(puVar9 + -2,*(undefined4 *)(param_3 + 4));
        if (puVar9[0x34] == *(int *)(param_3 + 4)) {
          *(undefined1 *)(puVar9 + 0x35) = 1;
          puVar5 = puVar8 + 0x3f;
LAB_0001c8d8:
          schedule_work(puVar5);
        }
        else if (*(int *)(param_3 + 4) == puVar9[0x18]) {
          puVar5 = puVar9 + 0x19;
          goto LAB_0001c8d8;
        }
        cfg80211_release_pmsr(puVar9 + -2,*(undefined4 *)(param_3 + 4));
      }
      *(int *)(((uint)&uStack_28 & uVar2) + 4) = *(int *)(((uint)&uStack_28 & uVar2) + 4) + 0x200;
      piVar4 = (int *)puVar8[0x13];
      piVar7 = (int *)*piVar4;
      while (piVar4 != puVar8 + 0x13) {
        if (piVar4[2] == *(int *)(param_3 + 4)) {
          iVar6 = *piVar4;
          piVar7 = (int *)piVar4[1];
          *(int **)(iVar6 + 4) = piVar7;
          *piVar7 = iVar6;
          *piVar4 = 0x100;
          piVar4[1] = 0x122;
          kfree();
          break;
        }
        piVar4 = piVar7;
        piVar7 = (int *)*piVar7;
      }
      __local_bh_enable_ip(DAT_0001c904,0x200);
    }
    regulatory_netlink_notify(*(undefined4 *)(param_3 + 4));
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== nl80211_dump_wiphy_parse.constprop.27 @ 0001c90c size=144 ===== */

undefined4 nl80211_dump_wiphy_parse_constprop_27(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  
  iVar1 = kmalloc_array_constprop_46(299,4);
  if (iVar1 == 0) {
    return 0xfffffff4;
  }
  iVar2 = __nlmsg_parse_constprop_45
                    (*(undefined4 *)(param_1 + 4),*(int *)(DAT_0001c99c + 4) + 4,iVar1,
                     *(undefined4 *)(DAT_0001c99c + 0x1c));
  if (iVar2 == 0) {
    *(bool *)(param_2 + 7) = *(int *)(iVar1 + 0x2b8) != 0;
    if (*(int *)(iVar1 + 4) != 0) {
      *param_2 = *(int *)(*(int *)(iVar1 + 4) + 4);
      param_2[1] = 0;
    }
    if (*(int *)(iVar1 + 0x264) != 0) {
      nla_get_u64();
      param_2[1] = 0;
      *param_2 = extraout_r1;
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar2 = __dev_get_by_index(DAT_0001c9a0,*(undefined4 *)(*(int *)(iVar1 + 0xc) + 4));
      if (iVar2 == 0) {
        uVar3 = 0xffffffed;
        goto LAB_0001c938;
      }
      if (*(undefined4 **)(iVar2 + 0x1c4) != (undefined4 *)0x0) {
        iVar2 = wiphy_to_rdev(**(undefined4 **)(iVar2 + 0x1c4));
        iVar2 = *(int *)(iVar2 + 0x38);
        *param_2 = iVar2;
        param_2[1] = iVar2 >> 0x1f;
        uVar3 = 0;
        goto LAB_0001c938;
      }
    }
  }
  uVar3 = 0;
LAB_0001c938:
  kfree(iVar1);
  return uVar3;
}



/* ===== nl80211_probe_mesh_link @ 0001c9a4 size=182 ===== */

int nl80211_probe_mesh_link(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  undefined1 auStack_f0 [212];
  
  piVar5 = *(int **)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x1c);
  iVar7 = *(int *)(iVar4 + 0x1c4);
  memset(auStack_f0,0,0xd0);
  if ((*(int *)(*piVar5 + 0x1b4) == 0) ||
     (pcVar6 = *(code **)(*piVar5 + 0x48), pcVar6 == (code *)0x0)) {
LAB_0001ca54:
    iVar4 = -0x5f;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
    if ((iVar2 == 0) ||
       (puVar3 = *(ushort **)(*(int *)(param_2 + 0x14) + 0xcc), puVar3 == (ushort *)0x0)) {
      if (*(undefined4 **)(param_2 + 0x20) != (undefined4 *)0x0) {
        **(undefined4 **)(param_2 + 0x20) = DAT_0001ca5c;
      }
    }
    else {
      if (*(int *)(iVar7 + 4) != 7) goto LAB_0001ca54;
      uVar1 = *puVar3;
      if (((0xd < uVar1 - 4) &&
          ((*(uint *)(iVar2 + 4) == *(uint *)(puVar3 + 2) && (*(uint *)(puVar3 + 2) & 1) == 0) &&
           *(ushort *)(iVar2 + 8) == puVar3[4])) &&
         (puVar3[7] == *(ushort *)(*(int **)(iVar4 + 0x1cc) + 1) &&
          **(int **)(iVar4 + 0x1cc) == *(int *)(puVar3 + 5))) {
        iVar7 = (*pcVar6)(piVar5 + 0x68,iVar4,iVar2 + 4,auStack_f0);
        if (iVar7 != 0) {
          return iVar7;
        }
        cfg80211_sinfo_release_content(auStack_f0);
        iVar4 = (**(code **)(*piVar5 + 0x1b4))(piVar5 + 0x68,iVar4,puVar3 + 2,uVar1 - 4);
        return iVar4;
      }
    }
    iVar4 = -0x16;
  }
  return iVar4;
}



/* ===== cfg80211_cqm_rssi_update @ 0001ca60 size=186 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001caea) */

int cfg80211_cqm_rssi_update(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint local_e8 [44];
  char local_38;
  
  iVar4 = *(int *)(param_2 + 0x1c4);
  iVar3 = *param_1;
  piVar2 = param_1 + 0x68;
  if (*(int *)(iVar4 + 0xe8) == 0) {
    iVar3 = (**(code **)(iVar3 + 0x104))(piVar2,param_2,0);
  }
  else {
    if (((*(int *)(*(int *)(iVar4 + 0xe8) + 4) == 0) && (*(int *)(iVar4 + 0x8c) != 0)) &&
       (*(int *)(iVar3 + 0x48) != 0)) {
      memset(local_e8,0,0xd0);
      iVar3 = (**(code **)(iVar3 + 0x48))(piVar2,param_2,*(int *)(iVar4 + 0x8c) + 0x74,local_e8);
      if (iVar3 != 0) {
        return iVar3;
      }
      cfg80211_sinfo_release_content(local_e8);
      bVar5 = (local_e8[0] & 0x40000000) != 0;
      iVar1 = 0;
      iVar3 = 0;
      if (bVar5) {
        iVar3 = *(int *)(iVar4 + 0xe8);
        iVar1 = (int)local_38;
      }
      if (bVar5) {
        *(int *)(iVar3 + 4) = iVar1;
      }
    }
    iVar3 = *(int *)(*(int *)(iVar4 + 0xe8) + 8);
    if (0 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = (**(code **)(*param_1 + 0x104))(piVar2,param_2,0x80000000,0x7fffffff);
  }
  return iVar3;
}



/* ===== nl80211_set_mac_acl @ 0001cb52 size=98 ===== */

uint nl80211_set_mac_acl(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(iVar6 + 0x1c4);
  iVar3 = *(int *)(iVar4 + 4);
  if ((iVar3 == 3) || (iVar3 == 9)) {
    if (*(int *)(iVar4 + 0xd0) == 0) {
      uVar1 = 0xffffffea;
    }
    else if (*(short *)((int)piVar5 + 0x1c2) == 0) {
      uVar1 = 0xffffffa1;
    }
    else {
      uVar1 = parse_acl_data_part_10(piVar5 + 0x68);
      if (uVar1 < 0xfffff001) {
        uVar2 = (**(code **)(*piVar5 + 0x140))
                          (piVar5 + 0x68,iVar6,uVar1,*(code **)(*piVar5 + 0x140),param_4);
        kfree(uVar1);
        uVar1 = uVar2;
      }
    }
  }
  else {
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== nl80211_update_connect_params @ 0001cbb4 size=308 ===== */

void nl80211_update_connect_params(undefined4 param_1,int param_2)

{
  int *piVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_134 [24];
  uint local_11c;
  ushort *local_118;
  int local_114;
  ushort *local_4c;
  int local_48;
  ushort *local_44;
  int local_40;
  undefined2 local_3c;
  ushort *local_38;
  int local_34;
  int local_24;
  
  piVar1 = DAT_0001cce8;
  local_24 = *DAT_0001cce8;
  memset(auStack_134,0,0x110);
  piVar8 = *(int **)(param_2 + 0x18);
  iVar10 = *(int *)(param_2 + 0x1c);
  iVar11 = *(int *)(iVar10 + 0x1c4);
  if (*(int *)(*piVar8 + 0xb0) == 0) {
    uVar6 = 0xffffffa1;
    goto LAB_0001cc14;
  }
  iVar4 = *(int *)(param_2 + 0x14);
  puVar5 = *(ushort **)(iVar4 + 0xa8);
  if (puVar5 != (ushort *)0x0) {
    local_118 = puVar5 + 2;
    local_114 = *puVar5 - 4;
  }
  uVar7 = (uint)(puVar5 != (ushort *)0x0);
  puVar5 = *(ushort **)(iVar4 + 0x3e4);
  iVar12 = (uint)*(byte *)((int)piVar8 + 0x1d1) << 0x19;
  if (iVar12 < 0) {
    if (puVar5 == (ushort *)0x0) {
LAB_0001ccbc:
      if (((*(int *)(iVar4 + 1000) != 0) || (*(int *)(iVar4 + 0x3ec) != 0)) ||
         (*(int *)(iVar4 + 0x3f0) != 0)) goto LAB_0001cc10;
    }
    else {
      puVar2 = *(ushort **)(iVar4 + 1000);
      if (((puVar2 == (ushort *)0x0) || (*(int *)(iVar4 + 0x3ec) == 0)) ||
         (puVar3 = *(ushort **)(iVar4 + 0x3f0), puVar3 == (ushort *)0x0)) goto LAB_0001cc10;
      local_4c = puVar5 + 2;
      uVar7 = uVar7 | 2;
      local_48 = *puVar5 - 4;
      local_44 = puVar2 + 2;
      local_40 = *puVar2 - 4;
      local_3c = *(undefined2 *)(*(int *)(iVar4 + 0x3ec) + 4);
      local_38 = puVar3 + 2;
      local_34 = *puVar3 - 4;
    }
    if (*(int *)(iVar4 + 0xd4) != 0) {
      uVar9 = *(uint *)(*(int *)(iVar4 + 0xd4) + 4);
      if (((7 < uVar9) || (iVar4 = nl80211_valid_auth_type_part_2(piVar8,uVar9), iVar4 == 0)) ||
         ((uVar9 == 5 && ((iVar12 < 0 && (-1 < (int)(uVar7 << 0x1e))))))) goto LAB_0001cc10;
      uVar7 = uVar7 | 4;
      local_11c = uVar9;
    }
    mutex_lock(iVar11 + 0x24);
    if (*(int *)(iVar11 + 0x8c) == 0) {
      uVar6 = 0xffffffbd;
    }
    else {
      uVar6 = (**(code **)(*piVar8 + 0xb0))(piVar8 + 0x68,iVar10,auStack_134,uVar7);
    }
    mutex_unlock(*(int *)(iVar10 + 0x1c4) + 0x24);
  }
  else {
    if (puVar5 == (ushort *)0x0) goto LAB_0001ccbc;
LAB_0001cc10:
    uVar6 = 0xffffffea;
  }
LAB_0001cc14:
  if (local_24 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}



/* ===== nl80211_new_key @ 0001ccec size=238 ===== */

int nl80211_new_key(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int local_4c [4];
  undefined2 local_3c;
  uint local_30;
  uint local_2c;
  
  piVar6 = *(int **)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  iVar2 = nl80211_parse_key(param_2,local_4c);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (local_4c[0] == 0) {
    puVar4 = *(undefined4 **)(param_2 + 0x20);
    uVar1 = DAT_0001cddc;
joined_r0x0001cd76:
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = uVar1;
    }
    return -0x16;
  }
  iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
  if (iVar2 != 0) {
    iVar2 = iVar2 + 4;
  }
  if (local_2c == 0xffffffff) {
    if (iVar2 == 0) {
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  if (1 < local_2c) {
    puVar4 = *(undefined4 **)(param_2 + 0x20);
    uVar1 = DAT_0001cde0;
    goto joined_r0x0001cd76;
  }
  if ((local_2c == 0) && (iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x468), iVar3 != 0)) {
    local_3c = *(undefined2 *)(iVar3 + 4);
  }
  if (*(int *)(*piVar6 + 0x18) == 0) {
    return -0x5f;
  }
  iVar3 = cfg80211_validate_key_settings(piVar6,local_4c,local_30,local_2c & 1,iVar2);
  if (iVar3 != 0) {
    puVar4 = *(undefined4 **)(param_2 + 0x20);
    uVar1 = DAT_0001cde4;
    goto joined_r0x0001cd76;
  }
  mutex_lock(*(int *)(iVar5 + 0x1c4) + 0x24);
  iVar3 = nl80211_key_allowed(*(undefined4 *)(iVar5 + 0x1c4));
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*piVar6 + 0x18))
                      (piVar6 + 0x68,iVar5,local_30 & 0xff,local_2c == 1,iVar2,local_4c);
    if (iVar3 == 0) goto LAB_0001cd9a;
    puVar4 = *(undefined4 **)(param_2 + 0x20);
    uVar1 = DAT_0001cdec;
  }
  else {
    puVar4 = *(undefined4 **)(param_2 + 0x20);
    uVar1 = DAT_0001cde8;
  }
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = uVar1;
  }
LAB_0001cd9a:
  mutex_unlock(*(int *)(iVar5 + 0x1c4) + 0x24);
  return iVar3;
}



/* ===== nl80211_parse_tx_bitrate_mask @ 0001cdf0 size=892 ===== */

/* WARNING: Control flow encountered bad instruction data */

int nl80211_parse_tx_bitrate_mask(int param_1,int param_2,int param_3,void *param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  short *psVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  undefined4 *puVar20;
  ushort *puVar21;
  ushort uVar22;
  byte *pbVar23;
  int local_5c;
  ushort auStack_58 [8];
  undefined1 auStack_48 [4];
  short *local_44;
  short *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar15 = *(int *)(param_1 + 0x18);
  puVar20 = (undefined4 *)((int)param_4 + 4);
  iVar16 = *(int *)(param_5 + 0x1c4);
  memset(param_4,0,300);
  piVar18 = (int *)(iVar15 + 0x274);
  do {
    iVar9 = *piVar18;
    if (iVar9 != 0) {
      puVar20[-1] = (1 << (*(uint *)(iVar9 + 0x10) & 0xff)) + -1;
      *puVar20 = *(undefined4 *)(iVar9 + 0x19);
      puVar20[1] = *(undefined4 *)(iVar9 + 0x1d);
      *(undefined2 *)(puVar20 + 2) = *(undefined2 *)(iVar9 + 0x21);
      if (*(char *)(iVar9 + 0x2c) != '\0') {
        vht_build_mcs_mask(*(undefined2 *)(iVar9 + 0x38),(int)puVar20 + 10);
      }
      iVar9 = ieee80211_get_he_iftype_cap(iVar9,*(undefined1 *)(iVar16 + 4));
      if (iVar9 != 0) {
        iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c4) + 0xb0);
        if (iVar10 == 4) {
          uVar3 = *(undefined2 *)(iVar9 + 0x1c);
        }
        else if (iVar10 == 5) {
          uVar3 = *(undefined2 *)(iVar9 + 0x18);
        }
        else {
          uVar3 = *(undefined2 *)(iVar9 + 0x14);
        }
        he_build_mcs_mask(uVar3,(int)puVar20 + 0x1a);
        puVar20[0xc] = 0xff;
        puVar20[0xd] = 0xff;
      }
    }
    puVar20 = puVar20 + 0xf;
    piVar18 = piVar18 + 1;
  } while (puVar20 != (undefined4 *)((int)param_4 + 0x130));
  puVar21 = *(ushort **)(param_2 + param_3 * 4);
  if (puVar21 == (ushort *)0x0) {
    return 0;
  }
  puVar6 = puVar21 + 2;
  local_5c = *puVar21 - 4;
  do {
    iVar9 = nla_ok(puVar6,local_5c);
    if (iVar9 == 0) {
      return 0;
    }
    uVar19 = puVar6[1] & 0xffff3fff;
    if (4 < uVar19) {
      return -0x16;
    }
    iVar9 = *(int *)(iVar15 + uVar19 * 4 + 0x274);
    if (iVar9 == 0) {
      return -0x16;
    }
    iVar4 = nla_parse_nested_deprecated
                      (auStack_48,7,puVar6,DAT_0001d194,*(undefined4 *)(param_1 + 0x20));
    iVar10 = local_3c;
    if (iVar4 != 0) {
      return iVar4;
    }
    if (local_44 != (short *)0x0) {
      pbVar23 = (byte *)((int)local_44 + 3);
      uVar5 = 0;
      for (uVar22 = 0; (uVar22 & 0xff) < (*local_44 - 4U & 0xff); uVar22 = uVar22 + 1) {
        pbVar23 = pbVar23 + 1;
        for (uVar17 = 0; (int)uVar17 < (int)*(uint *)(iVar9 + 0x10); uVar17 = uVar17 + 1) {
          if ((ushort)((*pbVar23 & 0x7f) * 5) == *(short *)(uVar17 * 0xc + *(int *)(iVar9 + 4) + 4))
          {
            uVar5 = uVar5 | 1 << (uVar17 & 0xff);
            goto LAB_0001d01c;
          }
        }
        if (uVar17 == *(uint *)(iVar9 + 0x10)) {
          uVar5 = 0;
          break;
        }
LAB_0001d01c:
      }
      *(uint *)((int)param_4 + uVar19 * 0x3c) = uVar5;
      if ((uVar5 == 0) && (*local_44 != 4)) {
        return -0x16;
      }
    }
    if (local_40 != (short *)0x0) {
      sVar2 = *local_40;
      iVar4 = uVar19 * 0x3c;
      *(undefined4 *)((int)param_4 + iVar4 + 4) = 0;
      *(undefined4 *)((int)param_4 + iVar4 + 8) = 0;
      *(undefined2 *)((int)param_4 + iVar4 + 0xc) = 0;
      if ((sVar2 - 4U & 0xff) != 0) {
        if (0x4f < *(byte *)(local_40 + 2)) {
          return -0x16;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (local_3c != 0) {
      uVar3 = *(undefined2 *)(iVar9 + 0x38);
      memset(auStack_58,0,0x10);
      if (*(char *)(iVar9 + 0x2c) == '\0') {
        return -0x16;
      }
      puVar21 = (ushort *)((int)param_4 + uVar19 * 0x3c + 0xc);
      memset((void *)((int)param_4 + uVar19 * 0x3c + 0xe),0,0x10);
      vht_build_mcs_mask(uVar3,auStack_58);
      puVar7 = (ushort *)(iVar10 + 4);
      puVar13 = auStack_58;
      do {
        puVar8 = puVar7 + 1;
        if ((*puVar7 & ~*puVar13) != 0) {
          return -0x16;
        }
        puVar21 = puVar21 + 1;
        *puVar21 = *puVar7;
        puVar7 = puVar8;
        puVar13 = puVar13 + 1;
      } while (puVar8 != (ushort *)(iVar10 + 0x14));
    }
    iVar10 = local_34;
    if ((local_38 != 0) &&
       (bVar1 = *(byte *)(local_38 + 4),
       *(uint *)((int)param_4 + uVar19 * 0x3c + 0x30) = (uint)bVar1, 2 < bVar1)) {
      return -0x16;
    }
    if (local_34 != 0) {
      memset(auStack_58,0,0x10);
      iVar4 = ieee80211_get_he_iftype_cap(iVar9,*(undefined1 *)(iVar16 + 4));
      if (iVar4 == 0) {
        return -0x16;
      }
      memset((void *)((int)param_4 + uVar19 * 0x3c + 0x1e),0,0x10);
      iVar14 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c4) + 0xb0);
      if (iVar14 == 4) {
        uVar3 = *(undefined2 *)(iVar4 + 0x1c);
      }
      else if (iVar14 == 5) {
        uVar3 = *(undefined2 *)(iVar4 + 0x18);
      }
      else {
        uVar3 = *(undefined2 *)(iVar4 + 0x14);
      }
      puVar21 = (ushort *)((int)param_4 + uVar19 * 0x3c + 0x1c);
      he_build_mcs_mask(uVar3,auStack_58);
      puVar7 = (ushort *)(iVar10 + 4);
      puVar13 = auStack_58;
      do {
        puVar8 = puVar7 + 1;
        if ((*puVar7 & ~*puVar13) != 0) {
          return -0x16;
        }
        puVar21 = puVar21 + 1;
        *puVar21 = *puVar7;
        puVar7 = puVar8;
        puVar13 = puVar13 + 1;
      } while (puVar8 != (ushort *)(iVar10 + 0x14));
    }
    if (local_30 != 0) {
      *(uint *)((int)param_4 + uVar19 * 0x3c + 0x34) = (uint)*(byte *)(local_30 + 4);
    }
    if (local_2c != 0) {
      *(uint *)((int)param_4 + uVar19 * 0x3c + 0x38) = (uint)*(byte *)(local_2c + 4);
    }
    if (*(int *)((int)param_4 + uVar19 * 0x3c) == 0) {
      iVar15 = *(int *)(iVar15 + uVar19 * 4 + 0x274);
      if (((*(char *)(iVar15 + 0x16) == '\0') && (*(char *)(iVar15 + 0x2c) == '\0')) &&
         (iVar15 = ieee80211_get_he_iftype_cap(iVar9,*(undefined1 *)(iVar16 + 4)), iVar15 == 0)) {
        return -0x16;
      }
      iVar15 = 0;
      iVar16 = uVar19 * 0x3c;
      pcVar11 = (char *)(iVar16 + 4 + (int)param_4);
      do {
        if (*pcVar11 != '\0') {
          return 0;
        }
        iVar15 = iVar15 + 1;
        pcVar11 = pcVar11 + 1;
      } while (iVar15 != 10);
      iVar15 = 0;
      psVar12 = (short *)(iVar16 + 0xe + (int)param_4);
      do {
        if (*psVar12 != 0) {
          return 0;
        }
        iVar15 = iVar15 + 1;
        psVar12 = psVar12 + 1;
      } while (iVar15 != 8);
      iVar15 = 0;
      psVar12 = (short *)((int)param_4 + iVar16 + 0x1e);
      do {
        if (*psVar12 != 0) {
          return 0;
        }
        iVar15 = iVar15 + 1;
        psVar12 = psVar12 + 1;
      } while (iVar15 != 8);
      return -0x16;
    }
    puVar6 = (ushort *)nla_next(puVar6,&local_5c);
  } while( true );
}



/* ===== nl80211_set_tid_config @ 0001d198 size=542 ===== */

int nl80211_set_tid_config(undefined4 param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 extraout_r3;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  ushort *puVar13;
  undefined4 uVar14;
  int local_64;
  undefined1 auStack_60 [16];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  piVar12 = *(int **)(param_2 + 0x18);
  uVar14 = *(undefined4 *)(param_2 + 0x1c);
  puVar7 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x474);
  if (puVar7 == (ushort *)0x0) {
    iVar4 = -0x16;
  }
  else if (*(int *)(*piVar12 + 0x1b8) == 0) {
    iVar4 = -0x5f;
  }
  else {
    puVar13 = puVar7 + 2;
    uVar10 = 0;
    local_64 = *puVar7 - 4;
    while (iVar4 = nla_ok(puVar13,local_64), iVar4 != 0) {
      puVar13 = (ushort *)nla_next(extraout_r3,&local_64);
      uVar10 = uVar10 + 1;
    }
    uVar6 = (uint)((ulonglong)uVar10 * 0x158);
    if ((int)((ulonglong)uVar10 * 0x158 >> 0x20) == 0) {
      iVar4 = uVar6 + 8;
      if (0xfffffff7 < uVar6) {
        iVar4 = -1;
      }
    }
    else {
      iVar4 = -1;
    }
    piVar5 = (int *)kzalloc_constprop_47(iVar4);
    if (piVar5 == (int *)0x0) {
      iVar4 = -0xc;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x14);
      piVar5[1] = uVar10;
      iVar8 = *(int *)(iVar4 + 0x18);
      if (iVar8 != 0) {
        *piVar5 = iVar8 + 4;
      }
      puVar13 = *(ushort **)(iVar4 + 0x474);
      puVar7 = puVar13 + 2;
      local_64 = *puVar13 - 4;
      piVar11 = piVar5;
      while (iVar4 = nla_ok(puVar7,local_64), iVar4 != 0) {
        iVar4 = nla_parse_nested_constprop_40(auStack_60,0xd,puVar7,0);
        if (iVar4 != 0) goto LAB_0001d262;
        iVar8 = *piVar5;
        puVar9 = *(undefined4 **)(param_2 + 0x20);
        if (local_4c == 0) {
LAB_0001d25e:
          iVar4 = -0x16;
          goto LAB_0001d262;
        }
        *(bool *)(piVar11 + 2) = local_50 != 0;
        *(undefined1 *)((int)piVar11 + 9) = *(undefined1 *)(local_4c + 4);
        if (local_50 != 0) {
          if (*(code **)(*piVar12 + 0x1bc) == (code *)0x0) goto LAB_0001d25e;
          iVar4 = (**(code **)(*piVar12 + 0x1bc))(piVar12 + 0x68,uVar14,iVar8);
          if (iVar4 != 0) goto LAB_0001d262;
        }
        if (local_48 != 0) {
          piVar11[4] = piVar11[4] | 0x40;
          piVar11[6] = (uint)*(byte *)(local_48 + 4);
        }
        if (local_44 != 0) {
          piVar11[4] = piVar11[4] | 0x80;
          bVar2 = *(byte *)(local_44 + 4);
          *(byte *)((int)piVar11 + 0x1d) = bVar2;
          if (*(byte *)(piVar12 + 0x124) < bVar2) goto LAB_0001d25e;
        }
        if (local_40 != 0) {
          piVar11[4] = piVar11[4] | 0x100;
          bVar2 = *(byte *)(local_40 + 4);
          *(byte *)(piVar11 + 7) = bVar2;
          if (*(byte *)(piVar12 + 0x124) < bVar2) goto LAB_0001d25e;
        }
        if (local_3c != 0) {
          piVar11[4] = piVar11[4] | 0x200;
          piVar11[8] = (uint)*(byte *)(local_3c + 4);
        }
        if (local_38 != 0) {
          piVar11[4] = piVar11[4] | 0x400;
          piVar11[9] = (uint)*(byte *)(local_38 + 4);
        }
        if (local_34 != 0) {
          piVar11[4] = piVar11[4] | 0x800;
          piVar11[10] = (uint)*(byte *)(local_34 + 4);
        }
        if (local_30 != 0) {
          bVar2 = *(byte *)(local_30 + 4);
          piVar11[0xb] = (uint)bVar2;
          if (bVar2 != 0) {
            iVar4 = nl80211_parse_tx_bitrate_mask(param_2,auStack_60,0xd,piVar11 + 0xc,uVar14);
            if (iVar4 != 0) goto LAB_0001d262;
            piVar11[4] = piVar11[4] | 0x2000;
          }
          piVar11[4] = piVar11[4] | 0x1000;
        }
        if (iVar8 == 0) {
          uVar10 = piVar12[0x120];
          uVar6 = piVar12[0x121];
        }
        else {
          uVar10 = piVar12[0x11e];
          uVar6 = piVar12[0x11f];
        }
        puVar1 = (uint *)(piVar11 + 4);
        puVar3 = (uint *)(piVar11 + 5);
        piVar11 = piVar11 + 0x56;
        if ((*puVar3 & ~uVar6) != 0 || (*puVar1 & ~uVar10) != 0) {
          iVar4 = DAT_0001d3bc;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = DAT_0001d3b8;
            iVar4 = DAT_0001d3bc;
          }
          goto LAB_0001d262;
        }
        puVar7 = (ushort *)nla_next(puVar7,&local_64);
      }
      iVar4 = (**(code **)(*piVar12 + 0x1b8))(piVar12 + 0x68,uVar14,piVar5);
LAB_0001d262:
      kfree(piVar5);
    }
  }
  return iVar4;
}



/* ===== nl80211_set_tx_bitrate_mask @ 0001d3c0 size=90 ===== */

int nl80211_set_tx_bitrate_mask(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_144 [300];
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x1c);
  if (*(int *)(*piVar3 + 0xd8) == 0) {
    iVar1 = -0x5f;
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x1c4) + 0x24;
    mutex_lock(iVar2);
    iVar1 = nl80211_parse_tx_bitrate_mask
                      (param_2,*(undefined4 *)(param_2 + 0x14),0x5a,auStack_144,iVar4);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*piVar3 + 0xd8))(piVar3 + 0x68,iVar4,0,auStack_144);
    }
    mutex_unlock(iVar2);
  }
  return iVar1;
}



/* ===== nl80211_connect @ 0001d41a size=1084 ===== */

void nl80211_connect(undefined4 param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  undefined4 uVar9;
  ushort *puVar10;
  ushort *puVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int aiStack_144 [4];
  int local_134;
  int local_130;
  undefined4 *local_12c;
  int local_128;
  ushort *local_124;
  int local_120;
  uint local_11c;
  ushort *local_118;
  int local_114;
  char local_110;
  int local_10c;
  undefined1 auStack_108 [84];
  uint local_b4;
  uint local_b0;
  undefined4 local_ac [2];
  undefined2 local_a4 [9];
  undefined4 uStack_92;
  undefined2 local_8e [11];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined1 local_60;
  uint local_5c;
  uint local_58;
  undefined1 local_54;
  int local_50;
  ushort *local_4c;
  int local_48;
  ushort *local_44;
  int local_40;
  undefined2 local_3c;
  ushort *local_38;
  int local_34;
  undefined1 local_30;
  undefined1 local_2c;
  uint local_28;
  int local_24;
  undefined4 *puVar8;
  
  piVar2 = DAT_0001d6a8;
  iVar17 = *(int *)(param_2 + 0x18);
  iVar18 = *(int *)(param_2 + 0x1c);
  local_24 = *DAT_0001d6a8;
  memset(&local_134,0,0x110);
  iVar13 = *(int *)(param_2 + 0x14);
  if ((*(short **)(iVar13 + 0xd0) != (short *)0x0) && (**(short **)(iVar13 + 0xd0) != 4)) {
    if (*(int *)(iVar13 + 0xd4) == 0) {
      local_11c = 8;
    }
    else {
      local_11c = *(uint *)(*(int *)(iVar13 + 0xd4) + 4);
      if ((7 < local_11c) || (iVar3 = nl80211_valid_auth_type_part_2(iVar17), iVar3 == 0))
      goto LAB_0001d442;
    }
    local_110 = *(int *)(iVar13 + 0x118) != 0;
    if ((*(int *)(iVar13 + 0x404) == 0) || ((int)((uint)*(byte *)(iVar17 + 0x1d2) << 0x1f) < 0)) {
      local_30 = *(int *)(iVar13 + 0x404) != 0;
      uVar14 = nl80211_crypto_settings(iVar17,param_2,auStack_108,5);
      if (uVar14 != 0) goto LAB_0001d570;
      iVar13 = *(int *)(*(int *)(iVar18 + 0x1c4) + 4);
      if ((iVar13 != 2) && (iVar13 != 8)) {
LAB_0001d4ac:
        uVar14 = 0xffffffa1;
        goto LAB_0001d570;
      }
      local_b0 = 0xffffffff;
      iVar13 = *(int *)(param_2 + 0x14);
      if ((*(int *)(iVar13 + 0x260) != 0) && (*(int *)(iVar17 + 0x1c4) << 0x12 < 0)) {
        local_b0 = (uint)*(ushort *)(*(int *)(iVar13 + 0x260) + 4);
      }
      if (*(int *)(iVar13 + 0x18) == 0) {
        if (*(int *)(iVar13 + 800) != 0) {
          local_128 = *(int *)(iVar13 + 800) + 4;
        }
      }
      else {
        local_12c = (undefined4 *)(*(int *)(iVar13 + 0x18) + 4);
      }
      local_124 = *(ushort **)(iVar13 + 0xd0) + 2;
      local_120 = **(ushort **)(iVar13 + 0xd0) - 4;
      puVar11 = *(ushort **)(iVar13 + 0xa8);
      if (puVar11 != (ushort *)0x0) {
        local_118 = puVar11 + 2;
        local_114 = *puVar11 - 4;
      }
      if (*(int *)(iVar13 + 0x108) == 0) {
        local_10c = 0;
      }
      else {
        local_10c = *(int *)(*(int *)(iVar13 + 0x108) + 4);
        if ((local_10c == 2) && (-1 < (int)((uint)*(byte *)(iVar17 + 0x1d2) << 0x1a)))
        goto LAB_0001d4ac;
      }
      if (*(int *)(iVar13 + 0x13c) != 0) {
        local_50 = *(int *)(iVar13 + 0x13c) + 4;
      }
      iVar3 = 0;
      if (*(int *)(iVar13 + 0x98) != 0) {
        iVar3 = *(int *)(*(int *)(iVar13 + 0x98) + 4) * 1000;
      }
      if (*(int *)(iVar13 + 0x488) != 0) {
        iVar3 = iVar3 + *(int *)(*(int *)(iVar13 + 0x488) + 4);
      }
      if (iVar3 == 0) {
        if (*(int *)(iVar13 + 0x324) != 0) {
          iVar13 = nl80211_get_valid_chan
                             (iVar17 + 0x1a0,*(int *)(*(int *)(iVar13 + 0x324) + 4) * 1000);
          local_130 = iVar13;
          goto LAB_0001d540;
        }
      }
      else {
        iVar13 = nl80211_get_valid_chan(iVar17 + 0x1a0);
        local_134 = iVar13;
LAB_0001d540:
        if (iVar13 == 0) goto LAB_0001d442;
      }
      iVar13 = *(int *)(param_2 + 0x14);
      if (*(int *)(iVar13 + 0x460) != 0) {
        local_2c = *(undefined1 *)(*(int *)(iVar13 + 0x460) + 4);
        if (*(int *)(iVar13 + 0x464) != 0) {
          local_28 = (uint)*(byte *)(*(int *)(iVar13 + 0x464) + 4);
        }
      }
      uVar16 = 0;
      if (((local_110 != '\0') && (uVar16 = 0, *(int *)(iVar13 + 0x144) != 0)) &&
         (uVar14 = nl80211_parse_connkeys(iVar17,param_2,0), uVar16 = uVar14, 0xfffff000 < uVar14))
      goto LAB_0001d570;
      iVar13 = *(int *)(param_2 + 0x14);
      if (*(int *)(iVar13 + 0x24c) != 0) {
        local_b4 = local_b4 | 1;
      }
      iVar3 = *(int *)(iVar13 + 0x250);
      if (iVar3 != 0) {
        puVar4 = &uStack_92;
        puVar7 = (undefined4 *)(iVar3 + 4);
        do {
          puVar8 = puVar7 + 1;
          puVar5 = puVar4 + 1;
          *puVar4 = *puVar7;
          puVar4 = puVar5;
          puVar7 = puVar8;
        } while (puVar8 != (undefined4 *)(iVar3 + 0x1c));
        *(undefined2 *)puVar5 = *(undefined2 *)puVar8;
      }
      iVar15 = *(int *)(iVar13 + 0x7c);
      if (iVar15 == 0) {
LAB_0001d620:
        if (*(int *)(iVar13 + 700) != 0) {
          local_b4 = local_b4 | 2;
        }
        iVar3 = *(int *)(iVar13 + 0x2c0);
        if (iVar3 != 0) {
          local_6c = *(undefined4 *)(iVar3 + 4);
          uStack_68 = *(undefined4 *)(iVar3 + 8);
          local_64 = *(undefined4 *)(iVar3 + 0xc);
        }
        iVar15 = *(int *)(iVar13 + 0x274);
        if (iVar15 != 0) {
          if (iVar3 == 0) goto LAB_0001d5f6;
          local_78 = *(undefined4 *)(iVar15 + 4);
          uStack_74 = *(undefined4 *)(iVar15 + 8);
          local_70 = *(undefined4 *)(iVar15 + 0xc);
        }
        if (*(int *)(iVar13 + 0x340) != 0) {
          if (((*(uint *)(iVar17 + 0x1cc) & 0x280000) != 0x280000) &&
             (-1 < (int)((uint)*(byte *)(iVar17 + 0x1d0) << 0x1e))) goto LAB_0001d5f6;
          local_b4 = local_b4 | 4;
        }
        local_60 = *(int *)(iVar13 + 0x388) != 0;
        if (((bool)local_60) && (*(int *)(iVar17 + 0x27c) == 0)) {
          kfree_sensitive(uVar16);
          goto LAB_0001d4ac;
        }
        iVar13 = *(int *)(iVar13 + 0x38c);
        if (iVar13 != 0) {
          if (local_12c != (undefined4 *)0x0) goto LAB_0001d5f6;
          iVar13 = nla_ok(iVar13 + 4,*(ushort *)(iVar13 + 4) - 4);
          if (iVar13 == 0) {
LAB_0001d712:
            uVar14 = 0xffffffea;
          }
          else {
            uVar14 = nla_parse_nested_deprecated(aiStack_144,3);
            if (uVar14 == 0) {
              bVar1 = false;
              iVar13 = 0;
              piVar12 = aiStack_144;
              do {
                if (*piVar12 != 0) {
                  if (bVar1) goto LAB_0001d712;
                  bVar1 = true;
                }
                iVar13 = iVar13 + 1;
                piVar12 = piVar12 + 1;
              } while (iVar13 != 4);
              local_5c = (uint)(aiStack_144[1] != 0);
              if (aiStack_144[2] != 0) {
                local_5c = 2;
                local_58 = *(uint *)(aiStack_144[2] + 4);
                if ((4 < local_58) || (*(int *)(iVar17 + local_58 * 4 + 0x274) == 0))
                goto LAB_0001d712;
              }
              if (aiStack_144[3] != 0) {
                local_5c = 3;
                local_58 = (uint)*(byte *)(aiStack_144[3] + 4);
                local_54 = *(undefined1 *)(aiStack_144[3] + 5);
                if ((4 < local_58) || (*(int *)(iVar17 + local_58 * 4 + 0x274) == 0))
                goto LAB_0001d712;
              }
              if ((local_5c != 0) && ((int)((*(uint *)(iVar17 + 0x458) >> local_5c) << 0x1f) < 0))
              goto LAB_0001d752;
              goto LAB_0001d712;
            }
          }
          kfree_sensitive(uVar16);
          goto LAB_0001d570;
        }
LAB_0001d752:
        iVar13 = *(int *)(param_2 + 0x14);
        puVar11 = *(ushort **)(iVar13 + 0x3e4);
        if ((int)((uint)*(byte *)(iVar17 + 0x1d1) << 0x19) < 0) {
          if (puVar11 == (ushort *)0x0) goto LAB_0001d7d0;
          puVar6 = *(ushort **)(iVar13 + 1000);
          if (((puVar6 == (ushort *)0x0) || (*(int *)(iVar13 + 0x3ec) == 0)) ||
             (puVar10 = *(ushort **)(iVar13 + 0x3f0), puVar10 == (ushort *)0x0)) goto LAB_0001d5f6;
          local_4c = puVar11 + 2;
          local_48 = *puVar11 - 4;
          local_44 = puVar6 + 2;
          local_40 = *puVar6 - 4;
          local_3c = *(undefined2 *)(*(int *)(iVar13 + 0x3ec) + 4);
          local_38 = puVar10 + 2;
          local_34 = *puVar10 - 4;
        }
        else {
          if (puVar11 != (ushort *)0x0) goto LAB_0001d5f6;
LAB_0001d7d0:
          if (((*(int *)(iVar13 + 1000) != 0) || (*(int *)(iVar13 + 0x3ec) != 0)) ||
             (*(int *)(iVar13 + 0x3f0) != 0)) goto LAB_0001d5f6;
        }
        if (*(int *)(iVar13 + 0x414) != 0) {
          if (*(int *)(iVar13 + 0x330) == 0) {
            kfree_sensitive(uVar16);
            if (*(undefined4 **)(param_2 + 0x20) != (undefined4 *)0x0) {
              **(undefined4 **)(param_2 + 0x20) = DAT_0001d860;
            }
            goto LAB_0001d442;
          }
          local_b4 = local_b4 | 8;
        }
        mutex_lock(*(int *)(iVar18 + 0x1c4) + 0x24);
        uVar14 = cfg80211_connect(iVar17,iVar18,&local_134,uVar16,local_50);
        if (uVar14 == 0) {
          if (*(int *)(*(int *)(param_2 + 0x14) + 0x330) != 0) {
            *(undefined4 *)(*(int *)(iVar18 + 0x1c4) + 0x68) = *(undefined4 *)(param_2 + 4);
            iVar13 = *(int *)(iVar18 + 0x1c4);
            if (local_12c == (undefined4 *)0x0) {
              *(undefined4 *)(iVar13 + 0x7c) = 0;
              *(undefined2 *)(iVar13 + 0x80) = 0;
            }
            else {
              *(undefined4 *)(iVar13 + 0x7c) = *local_12c;
              *(undefined2 *)(iVar13 + 0x80) = *(undefined2 *)(local_12c + 1);
            }
          }
        }
        else {
          kfree_sensitive(uVar16);
        }
        mutex_unlock(*(int *)(iVar18 + 0x1c4) + 0x24);
        goto LAB_0001d570;
      }
      if (iVar3 != 0) {
        puVar7 = local_ac;
        puVar4 = (undefined4 *)(iVar15 + 4);
        do {
          puVar5 = puVar4 + 2;
          uVar9 = puVar4[1];
          *puVar7 = *puVar4;
          puVar7[1] = uVar9;
          puVar7 = puVar7 + 2;
          puVar4 = puVar5;
        } while (puVar5 != (undefined4 *)(iVar15 + 0x1c));
        *(undefined2 *)puVar7 = *(undefined2 *)puVar5;
        goto LAB_0001d620;
      }
LAB_0001d5f6:
      kfree_sensitive(uVar16);
    }
  }
LAB_0001d442:
  uVar14 = 0xffffffea;
LAB_0001d570:
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar14);
  }
  return;
}



/* ===== nl80211_set_cqm @ 0001d864 size=394 ===== */

int nl80211_set_cqm(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 auStack_50 [4];
  ushort *local_4c;
  int local_48;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x178);
  if (iVar2 == 0) {
    return -0x16;
  }
  iVar2 = nla_parse_nested_deprecated
                    (auStack_50,9,iVar2,DAT_0001d9f0,*(undefined4 *)(param_2 + 0x20));
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((local_4c == (ushort *)0x0) || (local_48 == 0)) {
    if (local_3c == 0) {
      return -0x16;
    }
    if (local_38 == 0) {
      return -0x16;
    }
    if (local_34 == 0) {
      return -0x16;
    }
    if (100 < *(uint *)(local_3c + 4)) {
      return -0x16;
    }
    if (0x708 < *(uint *)(local_34 + 4)) {
      return -0x16;
    }
    pcVar5 = *(code **)(**(int **)(param_2 + 0x18) + 0x108);
    if (pcVar5 == (code *)0x0) {
      return -0x5f;
    }
    iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x1c) + 0x1c4) + 4);
    if ((iVar2 != 2) && (iVar2 != 8)) {
      return -0x5f;
    }
    iVar2 = (*pcVar5)(*(int **)(param_2 + 0x18) + 0x68,*(int *)(param_2 + 0x1c),
                      *(uint *)(local_3c + 4),*(undefined4 *)(local_38 + 4),*(uint *)(local_34 + 4))
    ;
    return iVar2;
  }
  uVar12 = *local_4c - 4;
  if ((uVar12 & 3) != 0) {
    return -0x16;
  }
  uVar6 = uVar12;
  if ((int)uVar12 < 0) {
    uVar6 = *local_4c - 1;
  }
  iVar7 = (int)uVar6 >> 2;
  iVar10 = -0x80000000;
  puVar9 = local_4c;
  for (iVar2 = 0; iVar2 < iVar7; iVar2 = iVar2 + 1) {
    puVar9 = puVar9 + 2;
    iVar8 = *(int *)puVar9;
    if (0 < iVar8) {
      return -0x16;
    }
    if (iVar8 <= iVar10) {
      return -0x16;
    }
    iVar10 = iVar8;
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar10 = *(int *)(iVar2 + 0x1c4);
  if ((*(int *)(iVar10 + 4) != 2) && (*(int *)(iVar10 + 4) != 8)) {
    return -0x5f;
  }
  piVar4 = *(int **)(param_2 + 0x18);
  iVar8 = iVar10 + 0x24;
  uVar11 = *(undefined4 *)(local_48 + 4);
  mutex_lock(iVar8);
  cfg80211_cqm_config_free(iVar10);
  mutex_unlock(iVar8);
  if (((int)uVar12 < 8) && (*(code **)(*piVar4 + 0x100) != (code *)0x0)) {
    if ((iVar7 == 0) || (iVar7 = *(int *)(local_4c + 2), iVar7 == 0)) {
      uVar11 = 0;
      iVar7 = 0;
    }
    iVar2 = (**(code **)(*piVar4 + 0x100))(piVar4 + 0x68,iVar2,iVar7,uVar11);
    return iVar2;
  }
  if (-1 < (int)((uint)*(byte *)((int)piVar4 + 0x1d1) << 0x1a)) {
    return -0x5f;
  }
  if ((iVar7 == 1) && (iVar7 = 0, *(int *)(local_4c + 2) != 0)) {
    iVar7 = 1;
  }
  mutex_lock(iVar8);
  if (iVar7 != 0) {
    iVar3 = (iVar7 + 3) * 4;
    puVar1 = (undefined4 *)kzalloc_constprop_47(iVar3);
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = -0xc;
      goto LAB_0001d98c;
    }
    *puVar1 = uVar11;
    puVar1[2] = iVar7;
    memcpy(puVar1 + 3,local_4c + 2,iVar3 - 0xc);
    *(undefined4 **)(iVar10 + 0xe8) = puVar1;
  }
  iVar2 = cfg80211_cqm_rssi_update(piVar4,iVar2);
LAB_0001d98c:
  mutex_unlock(iVar8);
  return iVar2;
}



/* ===== nl80211_authenticate @ 0001d9f4 size=418 ===== */

int nl80211_authenticate(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_54 [2];
  int local_4c;
  int local_40;
  int local_38;
  int local_34;
  
  iVar3 = *(int *)(param_2 + 0x14);
  piVar9 = *(int **)(param_2 + 0x18);
  iVar11 = *(int *)(param_2 + 0x1c);
  if ((((*(int *)(iVar3 + 0x18) != 0) && (*(int *)(iVar3 + 0xd4) != 0)) &&
      (*(int *)(iVar3 + 0xd0) != 0)) && (*(int *)(iVar3 + 0x98) != 0)) {
    iVar3 = nl80211_parse_key(param_2,local_54);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_38 < 0) {
      local_54[0] = 0;
      local_4c = 0;
LAB_0001da8a:
      if ((*(int *)(*piVar9 + 0x9c) == 0) ||
         ((iVar3 = *(int *)(*(int *)(iVar11 + 0x1c4) + 4), iVar3 != 2 && (iVar3 != 8)))) {
        return -0x5f;
      }
      iVar4 = *(int *)(param_2 + 0x14);
      iVar2 = *(int *)(iVar4 + 0x18);
      iVar3 = *(int *)(*(int *)(iVar4 + 0x98) + 4) * 1000;
      if (*(int *)(iVar4 + 0x488) != 0) {
        iVar3 = iVar3 + *(int *)(*(int *)(iVar4 + 0x488) + 4);
      }
      iVar3 = nl80211_get_valid_chan(piVar9 + 0x68,iVar3);
      if (iVar3 != 0) {
        iVar4 = *(int *)(param_2 + 0x14);
        puVar7 = *(ushort **)(iVar4 + 0xa8);
        if (puVar7 == (ushort *)0x0) {
          iVar5 = 0;
          puVar8 = (ushort *)0x0;
        }
        else {
          puVar8 = puVar7 + 2;
          iVar5 = *puVar7 - 4;
        }
        uVar10 = *(uint *)(*(int *)(iVar4 + 0xd4) + 4);
        if (((uVar10 < 8) && ((piVar9[0x73] << 0x1a < 0 || (uVar10 != 4)))) &&
           (((int)((uint)*(byte *)((int)piVar9 + 0x1d1) << 0x1e) < 0 || (2 < uVar10 - 5)))) {
          puVar7 = *(ushort **)(iVar4 + 0x270);
          if (uVar10 - 4 < 4) {
            if (puVar7 != (ushort *)0x0) {
              puVar6 = puVar7 + 2;
              iVar12 = *puVar7 - 4;
LAB_0001db24:
              if (*(int *)(iVar4 + 0x17c) == 0) {
                puVar7 = *(ushort **)(iVar4 + 0xd0);
                uVar1 = *puVar7;
                mutex_lock(*(int *)(iVar11 + 0x1c4) + 0x24);
                iVar3 = cfg80211_mlme_auth(piVar9,iVar11,iVar3,uVar10,iVar2 + 4,puVar7 + 2,uVar1 - 4
                                           ,puVar8,iVar5,local_54[0],local_4c,local_38,puVar6,iVar12
                                          );
                mutex_unlock(*(int *)(iVar11 + 0x1c4) + 0x24);
                return iVar3;
              }
              return 0;
            }
          }
          else if (puVar7 == (ushort *)0x0) {
            puVar6 = (ushort *)0x0;
            iVar12 = 0;
            goto LAB_0001db24;
          }
        }
      }
    }
    else if (((local_34 + 1U < 2) && (local_54[0] != 0)) && (local_4c != 0)) {
      if (local_40 == DAT_0001db98) {
        bVar13 = local_4c == 5;
      }
      else {
        if (local_40 != DAT_0001db9c) {
          return -0x16;
        }
        bVar13 = local_4c == 0xd;
      }
      if ((bVar13) && (local_38 < 4)) {
        for (iVar3 = 0; iVar3 < piVar9[0x7e]; iVar3 = iVar3 + 1) {
          if (local_40 == *(int *)(piVar9[0x7f] + iVar3 * 4)) goto LAB_0001da8a;
        }
      }
    }
  }
  return -0x16;
}



/* ===== nl80211_prepare_wdev_dump @ 0001dba0 size=186 ===== */

undefined4 * nl80211_prepare_wdev_dump(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = kmalloc_array_constprop_46(299,4);
    if (iVar1 == 0) {
      puVar4 = (undefined4 *)0xfffffff4;
    }
    else {
      puVar2 = (undefined4 *)
               __nlmsg_parse_constprop_45
                         (*(undefined4 *)(param_1 + 4),*(int *)(DAT_0001dc5c + 4) + 4,iVar1,
                          *(undefined4 *)(DAT_0001dc5c + 0x1c));
      if (puVar2 == (undefined4 *)0x0) {
        iVar3 = __cfg80211_wdev_from_attrs_constprop_43(iVar1);
        *param_3 = iVar3;
        kfree(iVar1);
        puVar4 = (undefined4 *)*param_3;
        if (puVar4 < (undefined4 *)0xfffff001) {
          iVar1 = wiphy_to_rdev(*puVar4);
          *param_2 = iVar1;
          *(int *)(param_1 + 0x30) = *(int *)(iVar1 + 0x38) + 1;
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*param_3 + 0x14);
          puVar4 = puVar2;
        }
      }
      else {
        kfree();
        puVar4 = puVar2;
      }
    }
  }
  else {
    iVar1 = wiphy_idx_to_wiphy(*(int *)(param_1 + 0x30) + -1);
    if (iVar1 != 0) {
      iVar1 = wiphy_to_rdev();
      *param_2 = iVar1;
      *param_3 = 0;
      for (puVar4 = *(undefined4 **)(*param_2 + 0x438); puVar4 != (undefined4 *)(*param_2 + 0x438);
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4[3] == *(int *)(param_1 + 0x34)) {
          *param_3 = (int)(puVar4 + -2);
          if (puVar4 + -2 != (undefined4 *)0x0) {
            return (undefined4 *)0x0;
          }
          break;
        }
      }
    }
    puVar4 = (undefined4 *)0xffffffed;
  }
  return puVar4;
}



/* ===== nl80211hdr_put @ 0001dc60 size=20 ===== */

void nl80211hdr_put(void)

{
  genlmsg_put();
  return;
}



/* ===== nl80211_get_ftm_responder_stats @ 0001dc78 size=410 ===== */

int nl80211_get_ftm_responder_stats(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  piVar4 = (int *)param_2[6];
  iVar6 = param_2[7];
  iVar5 = *(int *)(iVar6 + 0x1c4);
  memset(&local_48,0,0x30);
  if ((*(int *)(iVar5 + 4) == 3) && (*(int *)(iVar5 + 0xd0) != 0)) {
    pcVar3 = *(code **)(*piVar4 + 0x1a4);
    if (pcVar3 != (code *)0x0) {
      iVar5 = (*pcVar3)(piVar4 + 0x68,iVar6,&local_48);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (local_48 == 0) {
        return -0x3d;
      }
      iVar5 = alloc_skb(0xf00,0xcc0);
      if (iVar5 == 0) {
        return -0xc;
      }
      iVar1 = nl80211hdr_put(iVar5,param_2[1],*param_2,0,0x82);
      if ((((((((iVar1 != 0) &&
               (iVar6 = nla_put_be32(iVar5,3,*(undefined4 *)(iVar6 + 0xa8)), iVar6 == 0)) &&
              (psVar2 = (short *)nla_nest_start_noflag(iVar5,0x10f), psVar2 != (short *)0x0)) &&
             ((-1 < local_48 << 0x1e || (iVar6 = nla_put_be32(iVar5,1,local_44), iVar6 == 0)))) &&
            ((-1 < local_48 << 0x1d || (iVar6 = nla_put_be32(iVar5,2,local_40), iVar6 == 0)))) &&
           ((-1 < local_48 << 0x1c || (iVar6 = nla_put_be32(iVar5,3,local_3c), iVar6 == 0)))) &&
          ((-1 < local_48 << 0x1b || (iVar6 = nla_put_be32(iVar5,4,local_38), iVar6 == 0)))) &&
         (((((-1 < local_48 << 0x1a || (iVar6 = nla_put_be32(iVar5,5,local_34), iVar6 == 0)) &&
            ((-1 < local_48 << 0x19 ||
             (iVar6 = nla_put_u64_64bit(iVar5,6,local_30,uStack_2c,10), iVar6 == 0)))) &&
           ((-1 < local_48 << 0x18 || (iVar6 = nla_put_be32(iVar5,7,local_28), iVar6 == 0)))) &&
          (((-1 < local_48 << 0x17 || (iVar6 = nla_put_be32(iVar5,8,local_24), iVar6 == 0)) &&
           ((-1 < local_48 << 0x16 || (iVar6 = nla_put_be32(iVar5,9,local_20), iVar6 == 0)))))))) {
        *psVar2 = (short)*(undefined4 *)(iVar5 + 0x98) - (short)psVar2;
        *(int *)(iVar1 + -0x14) = *(int *)(iVar5 + 0x98) - (iVar1 + -0x14);
        iVar5 = genlmsg_reply(iVar5,param_2);
        return iVar5;
      }
      kfree_skb(iVar5);
      return -0x69;
    }
  }
  return -0x5f;
}



/* ===== nl80211_vendor_cmd_dump @ 0001de12 size=612 ===== */

uint nl80211_vendor_cmd_dump(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  int extraout_r2;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r4;
  int *piVar9;
  uint unaff_r8;
  int iVar10;
  ushort *puVar11;
  undefined8 uVar12;
  
  rtnl_lock();
  if (param_2[0xc] == 0) {
    iVar6 = kmalloc_array_constprop_46(299,4);
    if (iVar6 == 0) {
      uVar8 = 0xfffffff4;
      goto LAB_0001df0e;
    }
    uVar3 = __nlmsg_parse_constprop_45
                      (param_2[1],*(int *)(DAT_0001e078 + 4) + 4,iVar6,
                       *(undefined4 *)(DAT_0001e078 + 0x1c));
    uVar8 = uVar3;
    if (uVar3 == 0) {
      if ((*(int *)(iVar6 + 0x30c) == 0) || (*(int *)(iVar6 + 0x310) == 0)) {
        uVar8 = 0xffffffea;
      }
      else {
        unaff_r4 = __cfg80211_wdev_from_attrs_constprop_43(iVar6);
        if (0xfffff000 < unaff_r4) {
          unaff_r4 = 0;
        }
        unaff_r8 = __cfg80211_rdev_from_attrs_constprop_29(iVar6);
        uVar8 = unaff_r8;
        if (unaff_r8 < 0xfffff001) {
          for (iVar7 = 0; iVar7 != *(int *)(unaff_r8 + 0x44c); iVar7 = iVar7 + 1) {
            iVar10 = *(int *)(unaff_r8 + 0x444) + iVar7 * 0x1c;
            if ((*(int *)(*(int *)(iVar6 + 0x30c) + 4) ==
                 *(int *)(*(int *)(unaff_r8 + 0x444) + iVar7 * 0x1c)) &&
               (*(int *)(*(int *)(iVar6 + 0x310) + 4) == *(int *)(iVar10 + 4))) {
              if ((*(int *)(iVar10 + 0x10) != 0) && (-1 < iVar7)) {
                puVar11 = *(ushort **)(iVar6 + 0x314);
                if (puVar11 == (ushort *)0x0) {
                  iVar10 = 0;
                  puVar11 = (ushort *)0x0;
                }
                else {
                  uVar1 = *puVar11;
                  uVar8 = nl80211_vendor_check_policy(iVar10,puVar11,param_2[6]);
                  if (uVar8 != 0) goto LAB_0001df04;
                  puVar11 = puVar11 + 2;
                  iVar10 = uVar1 - 4;
                }
                param_2[0xc] = *(int *)(unaff_r8 + 0x38) + 1;
                if (unaff_r4 == 0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = *(int *)(unaff_r4 + 0x14) + 1;
                }
                param_2[0xd] = iVar2;
                param_2[0xe] = iVar7;
                param_2[0xf] = (int)puVar11;
                param_2[0x10] = iVar10;
                uVar8 = uVar3;
                goto LAB_0001df04;
              }
              break;
            }
          }
          uVar8 = 0xffffffa1;
        }
      }
    }
LAB_0001df04:
    kfree(iVar6);
    if (uVar8 != 0) goto LAB_0001df0e;
  }
  else {
    uVar12 = wiphy_idx_to_wiphy(param_2[0xc] + -1);
    iVar6 = (int)uVar12;
    if (iVar6 == 0) {
      uVar8 = 0xffffffed;
      goto LAB_0001df0e;
    }
    unaff_r8 = wiphy_to_rdev(iVar6,(int)((ulonglong)uVar12 >> 0x20),iVar6);
    if (param_2[0xd] == 0) {
      unaff_r4 = 0;
    }
    else {
      for (piVar9 = *(int **)(extraout_r2 + 0x298); unaff_r4 = (uint)(piVar9 + -2),
          piVar9 != (int *)(extraout_r2 + 0x298); piVar9 = (int *)*piVar9) {
        if (piVar9[3] == param_2[0xd] + -1) goto LAB_0001de58;
      }
      unaff_r4 = 0;
    }
  }
LAB_0001de58:
  iVar6 = param_2[0xf];
  iVar7 = param_2[0x10];
  iVar10 = param_2[0xe] * 0x1c + *(int *)(unaff_r8 + 0x444);
  uVar8 = *(uint *)(iVar10 + 8);
  if ((uVar8 & 3) != 0) {
    if ((unaff_r4 == 0) || (((int)(uVar8 << 0x1e) < 0 && (*(int *)(unaff_r4 + 0x10) == 0)))) {
      uVar8 = 0xffffffea;
      goto LAB_0001df0e;
    }
    if (((int)(uVar8 << 0x1d) < 0) && (iVar2 = wdev_running(unaff_r4), iVar2 == 0)) {
      uVar8 = 0xffffff9c;
      goto LAB_0001df0e;
    }
  }
  while (iVar2 = nl80211hdr_put(param_1,*(undefined4 *)(*param_2 + 0x24),
                                *(undefined4 *)(param_2[1] + 8),2,0x67), iVar2 != 0) {
    iVar5 = nla_put_be32(param_1,1,*(undefined4 *)(unaff_r8 + 0x38));
    if (iVar5 != 0) {
LAB_0001e058:
      genlmsg_cancel(param_1,iVar2);
      break;
    }
    if (unaff_r4 != 0) {
      uVar12 = wdev_id(unaff_r4);
      iVar5 = nla_put_u64_64bit(param_1,0x99,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0xe5);
      if (iVar5 != 0) goto LAB_0001e058;
    }
    psVar4 = (short *)nla_nest_start_noflag(param_1,0xc5);
    if (psVar4 == (short *)0x0) goto LAB_0001e058;
    uVar8 = (**(code **)(iVar10 + 0x10))
                      (unaff_r8 + 0x1a0,unaff_r4,param_1,iVar6,iVar7,param_2 + 0x11);
    *psVar4 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar4;
    if ((uVar8 == 0xffffff97) || (uVar8 == 0xfffffffe)) goto LAB_0001e058;
    if ((int)uVar8 < 1) {
      genlmsg_cancel(param_1,iVar2);
      goto LAB_0001df0e;
    }
    *(int *)(iVar2 + -0x14) = *(int *)(param_1 + 0x98) - (iVar2 + -0x14);
  }
  uVar8 = *(uint *)(param_1 + 0x50);
LAB_0001df0e:
  rtnl_unlock();
  return uVar8;
}



/* ===== nl80211_get_coalesce @ 0001e07c size=376 ===== */

undefined4 nl80211_get_coalesce(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar13 = param_2[6];
  if (*(int *)(iVar13 + 0x440) == 0) {
    uVar4 = 0xffffffa1;
  }
  else {
    iVar1 = alloc_skb(0xf00,0xcc0);
    if (iVar1 == 0) {
      uVar4 = 0xfffffff4;
    }
    else {
      iVar2 = nl80211hdr_put(iVar1,param_2[1],*param_2,0,100);
      if (iVar2 != 0) {
        if ((*(int *)(iVar13 + 0xfc) == 0) || (*(int *)(*(int *)(iVar13 + 0xfc) + 4) == 0)) {
LAB_0001e0e8:
          *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
          uVar4 = genlmsg_reply(iVar1,param_2);
          return uVar4;
        }
        psVar3 = (short *)nla_nest_start_noflag(iVar1,0xb6);
        if (psVar3 != (short *)0x0) {
          iVar11 = 0;
          while (iVar11 < *(int *)(*(int *)(iVar13 + 0xfc) + 4)) {
            iVar11 = iVar11 + 1;
            psVar5 = (short *)nla_nest_start_noflag(iVar1,iVar11);
            if (psVar5 == (short *)0x0) goto LAB_0001e14e;
            iVar9 = iVar11 * 0x10 + -0x10;
            iVar12 = **(int **)(iVar13 + 0xfc) + iVar9;
            iVar9 = nla_put_be32(iVar1,1,*(undefined4 *)(**(int **)(iVar13 + 0xfc) + iVar9));
            if ((iVar9 != 0) ||
               (iVar9 = nla_put_be32(iVar1,2,*(undefined4 *)(iVar12 + 4)), iVar9 != 0))
            goto LAB_0001e14e;
            psVar6 = (short *)nla_nest_start_noflag(iVar1,3);
            iVar9 = 0;
            if (psVar6 == (short *)0x0) goto LAB_0001e14e;
            while (iVar9 < *(int *)(iVar12 + 0xc)) {
              iVar9 = iVar9 + 1;
              psVar7 = (short *)nla_nest_start_noflag(iVar1,iVar9);
              if (psVar7 == (short *)0x0) goto LAB_0001e14e;
              iVar10 = iVar9 * 0x10 + -0x10;
              iVar14 = *(int *)(*(int *)(iVar12 + 8) + iVar10 + 8);
              iVar8 = iVar14 + 7;
              if (iVar8 < 0) {
                iVar8 = iVar14 + 0xe;
              }
              iVar8 = nla_put(iVar1,1,iVar8 >> 3,*(undefined4 *)(*(int *)(iVar12 + 8) + iVar10));
              if (((iVar8 != 0) ||
                  (iVar8 = nla_put(iVar1,2,iVar14,*(undefined4 *)(*(int *)(iVar12 + 8) + iVar10 + 4)
                                  ), iVar8 != 0)) ||
                 (iVar8 = nla_put_be32(iVar1,3,*(undefined4 *)(iVar10 + *(int *)(iVar12 + 8) + 0xc))
                 , iVar8 != 0)) goto LAB_0001e14e;
              *psVar7 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar7;
            }
            *psVar6 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar6;
            *psVar5 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar5;
          }
          *psVar3 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar3;
          goto LAB_0001e0e8;
        }
      }
LAB_0001e14e:
      kfree_skb(iVar1);
      uVar4 = 0xffffff97;
    }
  }
  return uVar4;
}



/* ===== nl80211_get_protocol_features @ 0001e1f4 size=98 ===== */

undefined4
nl80211_get_protocol_features
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = alloc_skb(0xf00,0xcc0,param_3,param_4,param_1,param_2);
  if (iVar1 == 0) {
    uVar4 = 0xfffffff4;
  }
  else {
    iVar2 = nl80211hdr_put(iVar1,param_2[1],*param_2,0,0x5f);
    if ((iVar2 != 0) && (iVar3 = nla_put_be32(iVar1,0xad,1), iVar3 == 0)) {
      *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
      uVar4 = genlmsg_reply(iVar1,param_2);
      return uVar4;
    }
    kfree_skb(iVar1);
    uVar4 = 0xffffff97;
  }
  return uVar4;
}



/* ===== nl80211_nan_add_func @ 0001e256 size=744 ===== */

int nl80211_nan_add_func(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  short *psVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  int local_84;
  undefined1 auStack_80 [4];
  int local_7c;
  undefined2 *local_78;
  int local_74;
  ushort *local_70;
  undefined1 auStack_6c [4];
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined2 *local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  piVar11 = (int *)param_2[6];
  iVar12 = param_2[7];
  if (*(int *)(iVar12 + 4) != 0xc) {
    return -0x5f;
  }
  uVar13 = wdev_running(iVar12);
  iVar3 = (int)((ulonglong)uVar13 >> 0x20);
  if ((int)uVar13 == 0) {
    return -0x6b;
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x14) + 0x3c0);
  if (iVar8 == 0) {
    return -0x16;
  }
  iVar3 = nla_parse_nested_deprecated
                    (auStack_6c,0x10,iVar8,DAT_0001e540,*(undefined4 *)(iVar3 + 0x20));
  if (iVar3 != 0) {
    return iVar3;
  }
  puVar4 = (uint *)kzalloc_constprop_47(0x48);
  if (puVar4 == (uint *)0x0) {
    return -0xc;
  }
  uVar9 = piVar11[0x18] + 1;
  uVar10 = piVar11[0x19] + (uint)(0xfffffffe < (uint)piVar11[0x18]);
  piVar11[0x18] = uVar9;
  piVar11[0x19] = uVar10;
  if (uVar9 == 0 && uVar10 == 0) {
    uVar9 = 1;
    uVar10 = 0;
    piVar11[0x18] = 1;
    piVar11[0x19] = 0;
  }
  puVar4[0x10] = uVar9;
  puVar4[0x11] = uVar10;
  if ((local_68 == 0) || (*puVar4 = (uint)*(byte *)(local_68 + 4), local_64 == 0))
  goto LAB_0001e2d0;
  puVar4[1] = *(uint *)(local_64 + 4);
  *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(local_64 + 8);
  *(bool *)((int)puVar4 + 0xb) = local_48 != 0;
  if (local_40 == (undefined2 *)0x0) {
LAB_0001e2f8:
    if (local_44 != 0) {
      puVar4[6] = *(uint *)(local_44 + 4);
    }
    uVar9 = *puVar4;
    if (uVar9 == 1) {
      *(bool *)((int)puVar4 + 0xd) = local_58 != 0;
LAB_0001e394:
      if (local_3c == 0) {
LAB_0001e3f6:
        if (((local_34 != 0) && (iVar3 = handle_nan_filter(local_34,puVar4,1), iVar3 != 0)) ||
           ((local_38 != 0 && (iVar3 = handle_nan_filter(local_38,puVar4,0), iVar3 != 0))))
        goto LAB_0001e4e2;
        iVar8 = alloc_skb(0xf00,0xcc0);
        if (iVar8 == 0) goto LAB_0001e34e;
        iVar5 = nl80211hdr_put(iVar8,param_2[1],*param_2,0,0x75);
        if (iVar5 == 0) {
          iVar3 = -0xc;
          goto LAB_0001e354;
        }
        iVar3 = (**(code **)(*piVar11 + 0x180))(piVar11 + 0x68,iVar12,puVar4);
      }
      else {
        iVar3 = nla_parse_nested_deprecated(auStack_80,4,local_3c,DAT_0001e544,param_2[8]);
        if (iVar3 == 0) {
          *(bool *)((int)puVar4 + 0x21) = local_7c != 0;
          if (local_78 == (undefined2 *)0x0) {
            if ((local_70 != (ushort *)0x0) &&
               (uVar9 = validate_acl_mac_addrs(local_70), 0 < (int)uVar9)) {
              puVar4[0xc] = uVar9;
              uVar9 = kmalloc_array_constprop_46(uVar9,6);
              puVar4[0xb] = uVar9;
              if (uVar9 != 0) {
                puVar7 = local_70 + 2;
                local_84 = *local_70 - 4;
                iVar3 = 0;
                while (iVar8 = nla_ok(puVar7,local_84), iVar8 != 0) {
                  iVar8 = puVar4[0xb] + iVar3;
                  *(undefined4 *)(puVar4[0xb] + iVar3) = *(undefined4 *)(puVar7 + 2);
                  iVar3 = iVar3 + 6;
                  *(ushort *)(iVar8 + 4) = puVar7[4];
                  puVar7 = (ushort *)nla_next(puVar7,&local_84);
                }
                goto LAB_0001e3f6;
              }
              goto LAB_0001e4ea;
            }
          }
          else if ((local_70 == (ushort *)0x0) && (local_74 != 0)) {
            cVar2 = (char)*local_78 + -4;
            *(char *)(puVar4 + 10) = cVar2;
            uVar9 = kmemdup(local_78 + 2,cVar2,0xcc0);
            puVar4[9] = uVar9;
            if (uVar9 != 0) {
              *(undefined1 *)((int)puVar4 + 0x29) = *(undefined1 *)(local_74 + 4);
              goto LAB_0001e3f6;
            }
LAB_0001e4ea:
            iVar3 = -0xc;
            goto LAB_0001e4e2;
          }
          iVar3 = -0x16;
        }
LAB_0001e4e2:
        iVar5 = 0;
        iVar8 = 0;
      }
      if (-1 < iVar3) {
        iVar12 = nla_put_u64_64bit(iVar8,0x58,puVar4[0x10],puVar4[0x11],0xe5);
        if (((iVar12 == 0) &&
            (psVar6 = (short *)nla_nest_start_noflag(iVar8,0xf0), psVar6 != (short *)0x0)) &&
           (iVar12 = nla_put_u8(iVar8,0xf,*(undefined1 *)((int)puVar4 + 0x3e)), iVar12 == 0)) {
          *psVar6 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar6;
          *(int *)(iVar5 + -0x14) = *(int *)(iVar8 + 0x98) - (iVar5 + -0x14);
          iVar12 = genlmsg_reply(iVar8,param_2);
          return iVar12;
        }
        kfree_skb(iVar8);
        return -0x69;
      }
      goto LAB_0001e354;
    }
    if (uVar9 == 0) {
      if (local_60 != 0) {
        bVar1 = *(byte *)(local_60 + 4);
        *(byte *)((int)puVar4 + 10) = bVar1;
        *(bool *)(puVar4 + 3) = local_5c != 0;
        if (-1 < (int)((uint)bVar1 << 0x1f)) goto LAB_0001e386;
        goto LAB_0001e394;
      }
    }
    else if ((((uVar9 == 2) && (local_54 != 0)) && (local_50 != 0)) && (local_4c != 0)) {
      *(undefined1 *)((int)puVar4 + 0xe) = *(undefined1 *)(local_54 + 4);
      *(undefined1 *)((int)puVar4 + 0xf) = *(undefined1 *)(local_50 + 4);
      puVar4[4] = *(uint *)(local_4c + 4);
      *(undefined2 *)(puVar4 + 5) = *(undefined2 *)(local_4c + 8);
      local_5c = puVar4[6];
LAB_0001e386:
      if (local_5c == 0) goto LAB_0001e394;
    }
LAB_0001e2d0:
    iVar3 = -0x16;
  }
  else {
    cVar2 = (char)*local_40 + -4;
    *(char *)(puVar4 + 8) = cVar2;
    uVar9 = kmemdup(local_40 + 2,cVar2,0xcc0);
    puVar4[7] = uVar9;
    if (uVar9 != 0) goto LAB_0001e2f8;
LAB_0001e34e:
    iVar3 = -0xc;
  }
  iVar8 = 0;
LAB_0001e354:
  cfg80211_free_nan_func(puVar4);
  kfree_skb(iVar8);
  return iVar3;
}



/* ===== nl80211_probe_client @ 0001e548 size=186 ===== */

int nl80211_probe_client(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  
  piVar3 = (int *)param_2[6];
  iVar4 = param_2[7];
  iVar2 = *(int *)(*(int *)(iVar4 + 0x1c4) + 4);
  if ((iVar2 != 3) && (iVar2 != 9)) {
    return -0x5f;
  }
  if (*(int *)(param_2[5] + 0x18) == 0) {
    return -0x16;
  }
  if (*(int *)(*piVar3 + 300) == 0) {
    return -0x5f;
  }
  iVar2 = alloc_skb(0xf00,0xcc0);
  if (iVar2 == 0) {
    return -0xc;
  }
  iVar1 = nl80211hdr_put(iVar2,param_2[1],*param_2,0,0x54);
  if (iVar1 != 0) {
    iVar4 = (**(code **)(*piVar3 + 300))
                      (piVar3 + 0x68,iVar4,*(int *)(param_2[5] + 0x18) + 4,&local_28);
    if (iVar4 != 0) goto LAB_0001e5e8;
    iVar4 = nla_put_u64_64bit(iVar2,0x58,local_28,uStack_24,0xe5);
    if (iVar4 == 0) {
      *(int *)(iVar1 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar1 + -0x14);
      iVar2 = genlmsg_reply(iVar2,param_2);
      return iVar2;
    }
  }
  iVar4 = -0x69;
LAB_0001e5e8:
  kfree_skb(iVar2);
  return iVar4;
}



/* ===== nl80211_get_wowlan @ 0001e602 size=1178 ===== */

undefined4 nl80211_get_wowlan(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  undefined4 uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined1 local_2a;
  undefined1 local_29;
  
  iVar9 = param_2[6];
  if (*(int *)(iVar9 + 0x244) == 0) {
    return 0xffffffa1;
  }
  if ((*(int *)(iVar9 + 0x248) == 0) ||
     (iVar8 = *(int *)(*(int *)(iVar9 + 0x248) + 0xc), iVar8 == 0)) {
    iVar8 = 0xef0;
  }
  else {
    iVar8 = *(uint *)(iVar8 + 0x30) + *(int *)(iVar8 + 0x3c) + 0xef0 + *(int *)(iVar8 + 0x18) +
            (*(uint *)(iVar8 + 0x30) >> 3);
  }
  iVar8 = nlmsg_new(iVar8,0xcc0);
  if (iVar8 == 0) {
    return 0xfffffff4;
  }
  iVar1 = nl80211hdr_put(iVar8,param_2[1],*param_2,0,0x49);
  if (iVar1 == 0) goto LAB_0001e940;
  if (*(int *)(iVar9 + 0x248) != 0) {
    psVar2 = (short *)nla_nest_start_noflag(iVar8,0x75);
    if ((((((psVar2 == (short *)0x0) ||
           ((**(char **)(iVar9 + 0x248) != '\0' && (iVar3 = nla_put_flag(iVar8,1), iVar3 != 0)))) ||
          ((*(char *)(*(int *)(iVar9 + 0x248) + 1) != '\0' &&
           (iVar3 = nla_put_flag(iVar8,2), iVar3 != 0)))) ||
         ((((*(char *)(*(int *)(iVar9 + 0x248) + 2) != '\0' &&
            (iVar3 = nla_put_flag(iVar8,3), iVar3 != 0)) ||
           ((*(char *)(*(int *)(iVar9 + 0x248) + 3) != '\0' &&
            (iVar3 = nla_put_flag(iVar8,6), iVar3 != 0)))) ||
          ((*(char *)(*(int *)(iVar9 + 0x248) + 4) != '\0' &&
           (iVar3 = nla_put_flag(iVar8,7), iVar3 != 0)))))) ||
        ((*(char *)(*(int *)(iVar9 + 0x248) + 5) != '\0' &&
         (iVar3 = nla_put_flag(iVar8,8), iVar3 != 0)))) ||
       ((*(char *)(*(int *)(iVar9 + 0x248) + 6) != '\0' &&
        (iVar3 = nla_put_flag(iVar8,9), iVar3 != 0)))) goto LAB_0001e940;
    iVar3 = *(int *)(iVar9 + 0x248);
    if (*(int *)(iVar3 + 0x10) != 0) {
      psVar4 = (short *)nla_nest_start_noflag(iVar8,4);
      if (psVar4 == (short *)0x0) goto LAB_0001e940;
      iVar11 = 0;
      while (iVar11 < *(int *)(iVar3 + 0x10)) {
        iVar11 = iVar11 + 1;
        psVar5 = (short *)nla_nest_start_noflag(iVar8,iVar11);
        if (psVar5 == (short *)0x0) goto LAB_0001e940;
        iVar10 = iVar11 * 0x10 + -0x10;
        iVar14 = *(int *)(*(int *)(iVar3 + 8) + iVar10 + 8);
        iVar13 = iVar14 + 7;
        if (iVar13 < 0) {
          iVar13 = iVar14 + 0xe;
        }
        iVar13 = nla_put(iVar8,1,iVar13 >> 3,*(undefined4 *)(*(int *)(iVar3 + 8) + iVar10));
        if (((iVar13 != 0) ||
            (iVar13 = nla_put(iVar8,2,iVar14,*(undefined4 *)(*(int *)(iVar3 + 8) + iVar10 + 4)),
            iVar13 != 0)) ||
           (iVar13 = nla_put_be32(iVar8,3,*(undefined4 *)(iVar10 + *(int *)(iVar3 + 8) + 0xc)),
           iVar13 != 0)) goto LAB_0001e940;
        *psVar5 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar5;
      }
      *psVar4 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar4;
    }
    iVar3 = *(int *)(*(int *)(iVar9 + 0x248) + 0xc);
    if (iVar3 != 0) {
      psVar4 = (short *)nla_nest_start_noflag(iVar8,0xe);
      if ((((((psVar4 == (short *)0x0) ||
             (iVar11 = nla_put_be32(iVar8,1,*(undefined4 *)(iVar3 + 4)), iVar11 != 0)) ||
            ((iVar11 = nla_put_be32(iVar8,2,*(undefined4 *)(iVar3 + 8)), iVar11 != 0 ||
             ((iVar11 = nla_put(iVar8,3,6,iVar3 + 0x10), iVar11 != 0 ||
              (iVar11 = nla_put_u16(iVar8,4,*(undefined2 *)(iVar3 + 0xc)), iVar11 != 0)))))) ||
           (iVar11 = nla_put_u16(iVar8,5,*(undefined2 *)(iVar3 + 0xe)), iVar11 != 0)) ||
          (((((iVar11 = nla_put(iVar8,6,*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0x1c))
              , iVar11 != 0 ||
              (iVar11 = nla_put_be32(iVar8,9,*(undefined4 *)(iVar3 + 0x2c)), iVar11 != 0)) ||
             (iVar11 = nla_put(iVar8,10,*(undefined4 *)(iVar3 + 0x30),*(undefined4 *)(iVar3 + 0x34))
             , iVar11 != 0)) ||
            (iVar11 = nla_put(iVar8,0xb,*(int *)(iVar3 + 0x30) + 7U >> 3,
                              *(undefined4 *)(iVar3 + 0x38)), iVar11 != 0)) ||
           ((*(int *)(iVar3 + 0x28) != 0 &&
            (iVar11 = nla_put(iVar8,7,0xc,iVar3 + 0x20), iVar11 != 0)))))) ||
         ((*(int *)(iVar3 + 0x44) != 0 &&
          (iVar3 = nla_put(iVar8,8,*(int *)(iVar3 + 0x3c) + 8,iVar3 + 0x40), iVar3 != 0))))
      goto LAB_0001e940;
      *psVar4 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar4;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x248) + 0x14);
    if (iVar9 != 0) {
      psVar4 = (short *)nla_nest_start_noflag(iVar8,0x12);
      if (((psVar4 == (short *)0x0) ||
          ((*(int *)(iVar9 + 0x38) == 1 &&
           (iVar3 = nla_put_be32(iVar8,0x77,**(int **)(iVar9 + 0x34) * 1000), iVar3 != 0)))) ||
         (iVar3 = nla_put_be32(iVar8,0xdc,*(undefined4 *)(iVar9 + 0x30)), iVar3 != 0))
      goto LAB_0001e940;
      if (*(char *)(iVar9 + 0x48) != '\0') {
        local_2a = *(undefined1 *)(iVar9 + 0x49);
        iVar3 = nla_put(iVar8,0xf6,1,&local_2a);
        if (iVar3 != 0) goto LAB_0001e940;
        local_2a = (undefined1)*(undefined4 *)(iVar9 + 0x4c);
        local_29 = *(undefined1 *)(iVar9 + 0x50);
        iVar3 = nla_put(iVar8,0xf7,2,&local_2a);
        if (iVar3 != 0) goto LAB_0001e940;
      }
      psVar5 = (short *)nla_nest_start_noflag(iVar8,0x2c);
      if (psVar5 == (short *)0x0) {
LAB_0001e940:
        kfree_skb(iVar8);
        return 0xffffff97;
      }
      piVar15 = (int *)(iVar9 + 0x7c);
      for (uVar12 = 0; uVar12 < *(uint *)(iVar9 + 0x10); uVar12 = uVar12 + 1) {
        iVar3 = nla_put_be32(iVar8,uVar12,*(undefined4 *)(*piVar15 + 4));
        if (iVar3 != 0) goto LAB_0001e940;
        piVar15 = piVar15 + 1;
      }
      *psVar5 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar5;
      if (*(int *)(iVar9 + 0x28) != 0) {
        psVar5 = (short *)nla_nest_start_noflag(iVar8,0x84);
        if (psVar5 == (short *)0x0) goto LAB_0001e940;
        for (iVar3 = 0; iVar3 < *(int *)(iVar9 + 0x28); iVar3 = iVar3 + 1) {
          psVar7 = (short *)nla_nest_start_noflag(iVar8,iVar3);
          if ((psVar7 == (short *)0x0) ||
             (iVar11 = nla_put(iVar8,1,*(undefined1 *)(*(int *)(iVar9 + 0x24) + iVar3 * 0x40 + 0x20)
                              ), iVar11 != 0)) goto LAB_0001e940;
          *psVar7 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar7;
        }
        *psVar5 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar5;
      }
      psVar5 = (short *)nla_nest_start_noflag(iVar8,0xe1);
      iVar3 = 0;
      if (psVar5 == (short *)0x0) goto LAB_0001e940;
      while (iVar3 < *(int *)(iVar9 + 0x38)) {
        iVar3 = iVar3 + 1;
        psVar7 = (short *)nla_nest_start_noflag(iVar8,iVar3);
        if (psVar7 == (short *)0x0) goto LAB_0001e940;
        iVar13 = iVar3 * 8 + -8;
        iVar11 = nla_put_be32(iVar8,1,*(undefined4 *)(*(int *)(iVar9 + 0x34) + iVar13));
        if ((iVar11 != 0) ||
           ((*(int *)(iVar13 + *(int *)(iVar9 + 0x34) + 4) != 0 &&
            (iVar11 = nla_put_be32(iVar8,2), iVar11 != 0)))) goto LAB_0001e940;
        *psVar7 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar7;
      }
      *psVar5 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar5;
      *psVar4 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar4;
    }
    *psVar2 = (short)*(undefined4 *)(iVar8 + 0x98) - (short)psVar2;
  }
  *(int *)(iVar1 + -0x14) = *(int *)(iVar8 + 0x98) - (iVar1 + -0x14);
  uVar6 = genlmsg_reply(iVar8,param_2);
  return uVar6;
}



/* ===== nl80211_get_power_save @ 0001ea9c size=122 ===== */

undefined4 nl80211_get_power_save(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2[7] + 0x1c4);
  if (*(int *)(*(int *)param_2[6] + 0xfc) == 0) {
    uVar3 = 0xffffffa1;
  }
  else {
    iVar1 = alloc_skb(0xf00,0xcc0,param_3,*(int *)(*(int *)param_2[6] + 0xfc),param_1,param_2,
                      param_3);
    if (iVar1 == 0) {
      uVar3 = 0xfffffff4;
    }
    else {
      iVar2 = nl80211hdr_put(iVar1,param_2[1],*param_2,0,0x3e);
      if ((iVar2 != 0) &&
         (iVar4 = nla_put_be32(iVar1,0x5d,*(undefined1 *)(iVar4 + 0xca)), iVar4 == 0)) {
        *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
        uVar3 = genlmsg_reply(iVar1,param_2);
        return uVar3;
      }
      kfree_skb(iVar1);
      uVar3 = 0xffffff97;
    }
  }
  return uVar3;
}



/* ===== nl80211_get_mesh_config @ 0001eb16 size=746 ===== */

int nl80211_get_mesh_config(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  piVar3 = (int *)param_2[6];
  iVar5 = param_2[7];
  iVar4 = *(int *)(iVar5 + 0x1c4);
  if ((*(int *)(iVar4 + 4) == 7) && (*(int *)(*piVar3 + 0x6c) != 0)) {
    mutex_lock(iVar4 + 0x24);
    if (*(char *)(iVar4 + 0x59) == '\0') {
      memcpy(&local_68,DAT_0001ee00,0x50);
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*piVar3 + 0x6c))(piVar3 + 0x68,iVar5,&local_68);
    }
    mutex_unlock(iVar4 + 0x24);
    if (iVar1 == 0) {
      iVar4 = alloc_skb(0xf00,0xcc0);
      if (iVar4 == 0) {
        iVar1 = -0xc;
      }
      else {
        iVar1 = nl80211hdr_put(iVar4,param_2[1],*param_2,0,0x1c);
        if ((((((iVar1 != 0) &&
               (psVar2 = (short *)nla_nest_start_noflag(iVar4,0x23), psVar2 != (short *)0x0)) &&
              (iVar5 = nla_put_be32(iVar4,3,*(undefined4 *)(iVar5 + 0xa8)), iVar5 == 0)) &&
             (((iVar5 = nla_put_u16(iVar4,1,local_68), iVar5 == 0 &&
               (iVar5 = nla_put_u16(iVar4,2,local_66), iVar5 == 0)) &&
              ((iVar5 = nla_put_u16(iVar4,3,local_64), iVar5 == 0 &&
               ((iVar5 = nla_put_u16(iVar4,4,local_62), iVar5 == 0 &&
                (iVar5 = nla_put_u8(iVar4,5,local_60), iVar5 == 0)))))))) &&
            ((iVar5 = nla_put_u8(iVar4,6,local_5f), iVar5 == 0 &&
             (((((iVar5 = nla_put_u8(iVar4,0xf,local_5e), iVar5 == 0 &&
                 (iVar5 = nla_put_u8(iVar4,7,local_5d), iVar5 == 0)) &&
                (iVar5 = nla_put_be32(iVar4,0x15,local_5c), iVar5 == 0)) &&
               ((iVar5 = nla_put_u8(iVar4,8,local_58), iVar5 == 0 &&
                (iVar5 = nla_put_be32(iVar4,9,local_54), iVar5 == 0)))) &&
              (iVar5 = nla_put_u16(iVar4,10,local_50), iVar5 == 0)))))) &&
           (((iVar5 = nla_put_be32(iVar4,0xb,local_4c), iVar5 == 0 &&
             (iVar5 = nla_put_u16(iVar4,0xc,local_48), iVar5 == 0)) &&
            (((iVar5 = nla_put_u16(iVar4,0x12,local_46), iVar5 == 0 &&
              (((iVar5 = nla_put_u16(iVar4,0xd,local_44), iVar5 == 0 &&
                (iVar5 = nla_put_u8(iVar4,0xe,local_42), iVar5 == 0)) &&
               (iVar5 = nla_put_u16(iVar4,0x10,local_3e), iVar5 == 0)))) &&
             ((iVar5 = nla_put_u8(iVar4,0x11,local_3c), iVar5 == 0 &&
              (iVar5 = nla_put_u8(iVar4,0x13,local_3b), iVar5 == 0)))))))) {
          local_6c = local_38;
          iVar5 = nla_put(iVar4,0x14,4,&local_6c);
          if ((iVar5 == 0) &&
             (((((iVar5 = nla_put_be32(iVar4,0x16,local_34), iVar5 == 0 &&
                 (iVar5 = nla_put_be32(iVar4,0x17,local_30), iVar5 == 0)) &&
                ((iVar5 = nla_put_u16(iVar4,0x18,local_2c), iVar5 == 0 &&
                 (((iVar5 = nla_put_u16(iVar4,0x19,local_2a), iVar5 == 0 &&
                   (iVar5 = nla_put_be32(iVar4,0x1a,local_28), iVar5 == 0)) &&
                  (iVar5 = nla_put_u16(iVar4,0x1b,local_24), iVar5 == 0)))))) &&
               ((iVar5 = nla_put_be32(iVar4,0x1c,local_20), iVar5 == 0 &&
                (iVar5 = nla_put_u8(iVar4,0x1d,local_41), iVar5 == 0)))) &&
              ((iVar5 = nla_put_u8(iVar4,0x1e,local_1c), iVar5 == 0 &&
               (iVar5 = nla_put_u8(iVar4,0x1f,local_40), iVar5 == 0)))))) {
            *psVar2 = (short)*(undefined4 *)(iVar4 + 0x98) - (short)psVar2;
            *(int *)(iVar1 + -0x14) = *(int *)(iVar4 + 0x98) - (iVar1 + -0x14);
            iVar4 = genlmsg_reply(iVar4,param_2);
            return iVar4;
          }
        }
        iVar1 = -0x69;
        kfree_skb(iVar4);
      }
    }
  }
  else {
    iVar1 = -0x5f;
  }
  return iVar1;
}



/* ===== nl80211_get_reg_do @ 0001ee04 size=220 ===== */

uint nl80211_get_reg_do(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4
                       )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = alloc_skb(0xf00,0xcc0,param_3,param_4,param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0xffffff97;
  }
  iVar2 = nl80211hdr_put(iVar1,param_2[1],*param_2,0,0x1f);
  if (iVar2 == 0) goto LAB_0001eeb2;
  iVar4 = 0;
  if (*(int *)(param_2[5] + 4) == 0) {
LAB_0001ee6e:
    iVar7 = reg_last_request_cell_base();
    if ((iVar7 != 0) && (iVar7 = nla_put_be32(iVar1,0x9a,1), iVar7 != 0)) goto LAB_0001eeb2;
  }
  else {
    uVar3 = __cfg80211_rdev_from_attrs_constprop_29();
    if (0xfffff000 < uVar3) {
      kfree_skb(iVar1);
      return uVar3;
    }
    iVar7 = uVar3 + 0x1a0;
    uVar3 = *(uint *)(uVar3 + 0x1c8);
    iVar4 = get_wiphy_regdom(iVar7);
    if (iVar4 == 0) {
      if ((uVar3 & 0x80) != 0) {
        kfree_skb(iVar1);
        return 0xffffffea;
      }
    }
    else {
      uVar5 = get_wiphy_idx(iVar7);
      iVar6 = nla_put_be32(iVar1,1,uVar5);
      if (iVar6 != 0) goto LAB_0001eeb2;
    }
    if (iVar7 == 0) goto LAB_0001ee6e;
  }
  if (iVar4 == 0) {
    iVar4 = *DAT_0001eee0;
  }
  iVar4 = nl80211_put_regdom(iVar4,iVar1);
  if (iVar4 == 0) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    uVar3 = genlmsg_reply(iVar1,param_2);
    return uVar3;
  }
LAB_0001eeb2:
  kfree_skb(iVar1);
  return 0xffffffa6;
}



/* ===== nl80211_send_mpath @ 0001eee4 size=332 ===== */

undefined4
nl80211_send_mpath(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  
  uVar4 = 0x17;
  iVar1 = nl80211hdr_put();
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar2 = nla_put_be32(param_1,3,*(undefined4 *)(param_5 + 0xa8),param_5,uVar4,param_2);
    if ((((((((iVar2 == 0) && (iVar2 = nla_put(param_1,6,6,param_6), iVar2 == 0)) &&
            (iVar2 = nla_put(param_1,0x1a,6,param_7), iVar2 == 0)) &&
           ((iVar2 = nla_put_be32(param_1,0x2e,param_8[8]), iVar2 == 0 &&
            (psVar3 = (short *)nla_nest_start_noflag(param_1,0x1b), psVar3 != (short *)0x0)))) &&
          (((-1 < *param_8 << 0x1f || (iVar2 = nla_put_be32(param_1,1,param_8[1]), iVar2 == 0)) &&
           ((-1 < *param_8 << 0x1e || (iVar2 = nla_put_be32(param_1,2,param_8[2]), iVar2 == 0))))))
         && (((-1 < *param_8 << 0x1d || (iVar2 = nla_put_be32(param_1,3,param_8[3]), iVar2 == 0)) &&
             (((-1 < *param_8 << 0x1c || (iVar2 = nla_put_be32(param_1,4,param_8[4]), iVar2 == 0))
              && ((-1 < *param_8 << 0x19 ||
                  (iVar2 = nla_put_u8(param_1,5,*(undefined1 *)((int)param_8 + 0x19)), iVar2 == 0)))
              ))))) &&
        (((-1 < *param_8 << 0x1b || (iVar2 = nla_put_be32(param_1,6,param_8[5]), iVar2 == 0)) &&
         ((-1 < *param_8 << 0x1a || (iVar2 = nla_put_u8(param_1,7,(char)param_8[6]), iVar2 == 0)))))
        ) && (((-1 < *param_8 << 0x18 ||
               (iVar2 = nla_put_u8(param_1,8,*(undefined1 *)((int)param_8 + 0x1a)), iVar2 == 0)) &&
              ((-1 < *param_8 << 0x17 || (iVar2 = nla_put_be32(param_1,9,param_8[7]), iVar2 == 0))))
             )) {
      *psVar3 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar3;
      *(int *)(iVar1 + -0x14) = *(int *)(param_1 + 0x98) - (iVar1 + -0x14);
      uVar4 = 0;
    }
    else {
      genlmsg_cancel(param_1,iVar1);
      uVar4 = 0xffffffa6;
    }
  }
  return uVar4;
}



/* ===== nl80211_dump_mpp @ 0001f030 size=160 ===== */

int nl80211_dump_mpp(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *local_58;
  int local_54;
  undefined1 auStack_50 [6];
  undefined1 auStack_4a [6];
  undefined1 auStack_44 [36];
  
  iVar2 = param_2[0xe];
  rtnl_lock();
  iVar1 = nl80211_prepare_wdev_dump(param_2,&local_58,&local_54);
  if (iVar1 == 0) {
    if ((*(int *)(*local_58 + 0x68) == 0) || (*(int *)(local_54 + 4) != 7)) {
      iVar1 = -0x5f;
    }
    else {
      while( true ) {
        iVar1 = (**(code **)(*local_58 + 0x68))
                          (local_58 + 0x68,*(undefined4 *)(local_54 + 0x10),iVar2,auStack_50,
                           auStack_4a,auStack_44);
        if (iVar1 == -2) break;
        if (iVar1 != 0) goto LAB_0001f0be;
        iVar1 = nl80211_send_mpath(param_1,*(undefined4 *)(*param_2 + 0x24),
                                   *(undefined4 *)(param_2[1] + 8),2,
                                   *(undefined4 *)(local_54 + 0x10),auStack_50,auStack_4a,auStack_44
                                  );
        if (iVar1 < 0) break;
        iVar2 = iVar2 + 1;
      }
      param_2[0xe] = iVar2;
      iVar1 = *(int *)(param_1 + 0x50);
    }
  }
LAB_0001f0be:
  rtnl_unlock();
  return iVar1;
}



/* ===== nl80211_get_mpp @ 0001f0d0 size=158 ===== */

int nl80211_get_mpp(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_4a [6];
  undefined1 auStack_44 [36];
  
  piVar6 = (int *)param_2[6];
  iVar5 = param_2[7];
  memset(auStack_44,0,0x24);
  if (*(int *)(param_2[5] + 0x18) == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar4 = *(int *)(param_2[5] + 0x18) + 4;
    pcVar3 = *(code **)(*piVar6 + 100);
    if ((pcVar3 == (code *)0x0) || (*(int *)(*(int *)(iVar5 + 0x1c4) + 4) != 7)) {
      iVar1 = -0x5f;
    }
    else {
      iVar1 = (*pcVar3)(piVar6 + 0x68,iVar5,iVar4,auStack_4a,auStack_44);
      if (iVar1 == 0) {
        iVar2 = alloc_skb(0xf00,0xcc0);
        if (iVar2 == 0) {
          iVar1 = -0xc;
        }
        else {
          iVar5 = nl80211_send_mpath(iVar2,param_2[1],*param_2,0,iVar5,iVar4,auStack_4a,auStack_44);
          if (iVar5 < 0) {
            iVar1 = -0x69;
            kfree_skb(iVar2);
          }
          else {
            iVar1 = genlmsg_reply(iVar2,param_2);
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== nl80211_dump_mpath @ 0001f16e size=160 ===== */

int nl80211_dump_mpath(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *local_58;
  int local_54;
  undefined1 auStack_50 [6];
  undefined1 auStack_4a [6];
  undefined1 auStack_44 [36];
  
  iVar2 = param_2[0xe];
  rtnl_lock();
  iVar1 = nl80211_prepare_wdev_dump(param_2,&local_58,&local_54);
  if (iVar1 == 0) {
    if ((*(int *)(*local_58 + 0x60) == 0) || (*(int *)(local_54 + 4) != 7)) {
      iVar1 = -0x5f;
    }
    else {
      while( true ) {
        iVar1 = (**(code **)(*local_58 + 0x60))
                          (local_58 + 0x68,*(undefined4 *)(local_54 + 0x10),iVar2,auStack_50,
                           auStack_4a,auStack_44);
        if (iVar1 == -2) break;
        if (iVar1 != 0) goto LAB_0001f1fc;
        iVar1 = nl80211_send_mpath(param_1,*(undefined4 *)(*param_2 + 0x24),
                                   *(undefined4 *)(param_2[1] + 8),2,
                                   *(undefined4 *)(local_54 + 0x10),auStack_50,auStack_4a,auStack_44
                                  );
        if (iVar1 < 0) break;
        iVar2 = iVar2 + 1;
      }
      param_2[0xe] = iVar2;
      iVar1 = *(int *)(param_1 + 0x50);
    }
  }
LAB_0001f1fc:
  rtnl_unlock();
  return iVar1;
}



/* ===== nl80211_get_mpath @ 0001f20e size=158 ===== */

int nl80211_get_mpath(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_4a [6];
  undefined1 auStack_44 [36];
  
  piVar6 = (int *)param_2[6];
  iVar5 = param_2[7];
  memset(auStack_44,0,0x24);
  if (*(int *)(param_2[5] + 0x18) == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar4 = *(int *)(param_2[5] + 0x18) + 4;
    pcVar3 = *(code **)(*piVar6 + 0x5c);
    if ((pcVar3 == (code *)0x0) || (*(int *)(*(int *)(iVar5 + 0x1c4) + 4) != 7)) {
      iVar1 = -0x5f;
    }
    else {
      iVar1 = (*pcVar3)(piVar6 + 0x68,iVar5,iVar4,auStack_4a,auStack_44);
      if (iVar1 == 0) {
        iVar2 = alloc_skb(0xf00,0xcc0);
        if (iVar2 == 0) {
          iVar1 = -0xc;
        }
        else {
          iVar5 = nl80211_send_mpath(iVar2,param_2[1],*param_2,0,iVar5,iVar4,auStack_4a,auStack_44);
          if (iVar5 < 0) {
            iVar1 = -0x69;
            kfree_skb(iVar2);
          }
          else {
            iVar1 = genlmsg_reply(iVar2,param_2);
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== nl80211_get_key @ 0001f2ac size=328 ===== */

int nl80211_get_key(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_34;
  int local_30;
  uint local_2c;
  
  piVar7 = (int *)param_2[6];
  iVar8 = param_2[7];
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar3 = *(int *)(*(int *)(iVar8 + 0x1c4) + 4);
  uVar4 = (*(byte *)((int)piVar7 + 0x1d5) & 3) >> 1;
  if (((iVar3 == 2) || (iVar3 == 8)) && ((*(byte *)((int)piVar7 + 0x1d5) & 0x40) != 0)) {
    uVar4 = 1;
  }
  iVar3 = param_2[5];
  uVar5 = 0;
  if (((*(int *)(iVar3 + 0x20) != 0) &&
      (uVar5 = (uint)*(byte *)(*(int *)(iVar3 + 0x20) + 4), uVar5 - 6 < 2)) && (uVar4 == 0)) {
    if ((undefined4 *)param_2[8] != (undefined4 *)0x0) {
      *(undefined4 *)param_2[8] = DAT_0001f3f4;
    }
    return -0x16;
  }
  iVar6 = *(int *)(iVar3 + 0x18);
  if (iVar6 != 0) {
    iVar6 = iVar6 + 4;
  }
  if (*(int *)(iVar3 + 0xdc) == 0) {
    uVar4 = 0;
    if (iVar6 != 0) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = *(uint *)(*(int *)(iVar3 + 0xdc) + 4);
    if (1 < uVar4) {
      return -0x16;
    }
    uVar4 = uVar4 & 1;
  }
  if (*(int *)(*piVar7 + 0x1c) == 0) {
    return -0x5f;
  }
  if (((uVar4 == 0) && (iVar6 != 0)) && (-1 < piVar7[0x71] << 0x17)) {
    return -2;
  }
  iVar3 = alloc_skb(0xf00,0xcc0);
  if (iVar3 == 0) {
    return -0xc;
  }
  iVar1 = nl80211hdr_put(iVar3,param_2[1],*param_2,0,0xb);
  if ((((iVar1 != 0) &&
       (local_34 = iVar3, local_2c = uVar5,
       iVar2 = nla_put_be32(iVar3,3,*(undefined4 *)(iVar8 + 0xa8)), iVar2 == 0)) &&
      (iVar2 = nla_put_u8(iVar3,8,uVar5), iVar2 == 0)) &&
     ((iVar6 == 0 || (iVar2 = nla_put(iVar3,6,6,iVar6), iVar2 == 0)))) {
    iVar8 = (**(code **)(*piVar7 + 0x1c))
                      (piVar7 + 0x68,iVar8,uVar5,uVar4,iVar6,&local_34,DAT_0001f3f8);
    if (iVar8 != 0) goto LAB_0001f392;
    if (local_30 == 0) {
      *(int *)(iVar1 + -0x14) = *(int *)(iVar3 + 0x98) - (iVar1 + -0x14);
      iVar3 = genlmsg_reply(iVar3,param_2);
      return iVar3;
    }
  }
  iVar8 = -0x69;
LAB_0001f392:
  kfree_skb(iVar3);
  return iVar8;
}



/* ===== nl80211_send_iface @ 0001f3fc size=470 ===== */

undefined4 nl80211_send_iface(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  int *in_stack_00000000;
  int in_stack_00000004;
  int local_50 [13];
  
  iVar4 = *(int *)(in_stack_00000004 + 0x10);
  iVar1 = nl80211hdr_put();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if ((((iVar4 != 0) &&
       ((iVar2 = nla_put_be32(param_1,3,*(undefined4 *)(iVar4 + 0xa8)), iVar2 != 0 ||
        (iVar4 = nla_put_string(param_1,4,iVar4), iVar4 != 0)))) ||
      (iVar4 = nla_put_be32(param_1,1,in_stack_00000000[0xe]), iVar4 != 0)) ||
     (iVar4 = nla_put_be32(param_1,5,*(undefined4 *)(in_stack_00000004 + 4)), iVar4 != 0))
  goto LAB_0001f42c;
  uVar6 = wdev_id(in_stack_00000004);
  iVar4 = nla_put_u64_64bit(param_1,0x99,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0xe5);
  if (iVar4 != 0) goto LAB_0001f42c;
  if (*(int *)(in_stack_00000004 + 0x10) == 0) {
    iVar4 = in_stack_00000004 + 0x32;
  }
  else {
    iVar4 = *(int *)(*(int *)(in_stack_00000004 + 0x10) + 0x1cc);
  }
  iVar4 = nla_put(param_1,6,6,iVar4);
  if (((iVar4 != 0) ||
      (iVar4 = nla_put_be32(param_1,0x2e,in_stack_00000000[0xf] ^ *DAT_0001f5d4 << 2), iVar4 != 0))
     || (iVar4 = nla_put_u8(param_1,0x53,*(undefined1 *)(in_stack_00000004 + 0x30)), iVar4 != 0))
  goto LAB_0001f42c;
  pcVar5 = *(code **)(*in_stack_00000000 + 0x134);
  if (pcVar5 != (code *)0x0) {
    memset(local_50,0,0x1c);
    iVar4 = (*pcVar5)(in_stack_00000000 + 0x68,in_stack_00000004,local_50);
    if ((iVar4 == 0) && (iVar4 = nl80211_send_chandef(param_1,local_50), iVar4 != 0))
    goto LAB_0001f42c;
  }
  if ((*(code **)(*in_stack_00000000 + 0xcc) != (code *)0x0) &&
     ((iVar4 = (**(code **)(*in_stack_00000000 + 0xcc))
                         (in_stack_00000000 + 0x68,in_stack_00000004,local_50), iVar4 == 0 &&
      (iVar4 = nla_put_be32(param_1,0x62,local_50[0] * 100), iVar4 != 0)))) goto LAB_0001f42c;
  iVar4 = in_stack_00000004 + 0x24;
  mutex_lock(iVar4);
  if (*(uint *)(in_stack_00000004 + 4) < 10) {
    uVar3 = 1 << (*(uint *)(in_stack_00000004 + 4) & 0xff);
    if ((uVar3 & 0x106) == 0) {
      if (((uVar3 & 0x208) != 0) && (*(char *)(in_stack_00000004 + 0x58) != '\0')) {
        iVar2 = nla_put(param_1,0x34,*(char *)(in_stack_00000004 + 0x58),in_stack_00000004 + 0x38);
joined_r0x0001f578:
        if (iVar2 != 0) {
          mutex_unlock(iVar4);
          goto LAB_0001f42c;
        }
      }
    }
    else if ((*(int *)(in_stack_00000004 + 0x8c) != 0) &&
            (iVar2 = ieee80211_bss_get_elem(*(int *)(in_stack_00000004 + 0x8c) + 0x48,0), iVar2 != 0
            )) {
      iVar2 = nla_put(param_1,0x34,*(undefined1 *)(iVar2 + 1),iVar2 + 2);
      goto joined_r0x0001f578;
    }
  }
  mutex_unlock(iVar4);
  pcVar5 = *(code **)(*in_stack_00000000 + 400);
  if (pcVar5 != (code *)0x0) {
    memset(local_50,0,0x30);
    iVar4 = (*pcVar5)(in_stack_00000000 + 0x68,in_stack_00000004,local_50);
    if ((iVar4 == 0) && (iVar4 = nl80211_put_txq_stats(param_1,local_50,0x109), iVar4 == 0)) {
LAB_0001f42c:
      genlmsg_cancel(param_1,iVar1);
      return 0xffffffa6;
    }
  }
  *(int *)(iVar1 + -0x14) = *(int *)(param_1 + 0x98) - (iVar1 + -0x14);
  return 0;
}



/* ===== nl80211_new_interface @ 0001f5d8 size=428 ===== */

uint nl80211_new_interface(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined1 auStack_38 [4];
  uint local_34;
  int local_30;
  short local_2c;
  
  piVar5 = (int *)param_2[6];
  cfg80211_destroy_ifaces(piVar5);
  memset(auStack_38,0,0x18);
  iVar3 = param_2[5];
  if (*(int *)(iVar3 + 0x10) == 0) {
    return 0xffffffea;
  }
  iVar4 = 0;
  if (*(int *)(iVar3 + 0x14) != 0) {
    iVar4 = *(int *)(*(int *)(iVar3 + 0x14) + 4);
  }
  if (*(int *)(*piVar5 + 0xc) != 0) {
    if (((((iVar4 == 10) || (iVar4 == 0xc)) || (piVar5[0x73] << 4 < 0)) &&
        (*(int *)(iVar3 + 0x18) != 0)) &&
       ((nla_memcpy(&local_30,*(int *)(iVar3 + 0x18),6), local_30 << 0x1f < 0 ||
        (local_30 == 0 && local_2c == 0)))) {
      return 0xffffff9d;
    }
    if ((*(int *)(param_2[5] + 0x14c) != 0) &&
       (bVar6 = *(char *)(*(int *)(param_2[5] + 0x14c) + 4) != '\0', local_34 = (uint)bVar6, bVar6))
    {
      if (iVar4 == 2) {
        uVar2 = piVar5[0x71] & 0x40;
      }
      else {
        if (iVar4 != 4) {
          return 0xffffffa1;
        }
        uVar2 = piVar5[0x71] & 0x20;
      }
      if (uVar2 == 0) {
        return 0xffffffa1;
      }
    }
    iVar3 = cfg80211_iftype_allowed(piVar5 + 0x68,iVar4,local_34 != 0);
    if (iVar3 != 0) {
      uVar2 = nl80211_parse_mon_options(piVar5,iVar4,param_2,auStack_38);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      iVar3 = alloc_skb(0xf00,0xcc0);
      if (iVar3 == 0) {
        return 0xfffffff4;
      }
      uVar2 = (**(code **)(*piVar5 + 0xc))
                        (piVar5 + 0x68,*(int *)(param_2[5] + 0x10) + 4,3,iVar4,auStack_38);
      if (uVar2 == 0) {
        kfree_skb(iVar3);
        return 0xffffffb9;
      }
      if (uVar2 < 0xfffff001) {
        if (*(int *)(param_2[5] + 0x330) != 0) {
          *(undefined4 *)(uVar2 + 0xd8) = param_2[1];
        }
        if ((iVar4 == 10) || (iVar4 == 0xc)) {
          cfg80211_init_wdev(uVar2);
          cfg80211_register_wdev(piVar5,uVar2);
        }
        else if ((iVar4 == 7) && (*(int *)(param_2[5] + 0x60) != 0)) {
          mutex_lock(uVar2 + 0x24);
          bVar1 = (char)**(undefined2 **)(param_2[5] + 0x60) - 4;
          *(byte *)(uVar2 + 0x5a) = bVar1;
          memcpy((void *)(uVar2 + 0x38),(void *)(*(int *)(param_2[5] + 0x60) + 4),(uint)bVar1);
          mutex_unlock(uVar2 + 0x24);
        }
        iVar4 = nl80211_send_iface(iVar3,param_2[1],*param_2,0,piVar5,uVar2,7);
        if (-1 < iVar4) {
          uVar2 = genlmsg_reply(iVar3,param_2);
          return uVar2;
        }
        kfree_skb(iVar3);
        return 0xffffff97;
      }
      kfree_skb(iVar3);
      return uVar2;
    }
  }
  return 0xffffffa1;
}



/* ===== nl80211_dump_interface @ 0001f784 size=226 ===== */

int nl80211_dump_interface(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int local_48 [2];
  undefined1 auStack_40 [28];
  
  iVar4 = param_2[0xc];
  iVar5 = param_2[0xd];
  rtnl_lock();
  iVar3 = param_2[0xe];
  if (iVar3 == 0) {
    memset(auStack_40,0,0x18);
    local_48[0] = -1;
    local_48[1] = 0xffffffff;
    iVar3 = nl80211_dump_wiphy_parse_constprop_27(param_2,local_48);
    if (iVar3 != 0) goto LAB_0001f7ec;
    if (local_48[0] < 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = local_48[0] + 1;
    }
    param_2[0xe] = iVar3;
    iVar3 = local_48[0];
  }
  else if (iVar3 < 1) {
    iVar3 = -1;
  }
  else {
    iVar3 = iVar3 + -1;
  }
  puVar1 = DAT_0001f868;
  iVar9 = 0;
  iVar8 = 0;
  for (puVar6 = (undefined4 *)*DAT_0001f868; puVar6 != puVar1; puVar6 = (undefined4 *)*puVar6) {
    if (iVar8 < iVar4) {
LAB_0001f80a:
      iVar8 = iVar8 + 1;
    }
    else if ((iVar3 < 0) || (puVar6[0xd] == iVar3)) {
      iVar9 = 0;
      for (puVar7 = (undefined4 *)puVar6[0x10d]; puVar7 != puVar6 + 0x10d;
          puVar7 = (undefined4 *)*puVar7) {
        if ((iVar5 <= iVar9) &&
           (iVar2 = nl80211_send_iface(param_1,*(undefined4 *)(*param_2 + 0x24),
                                       *(undefined4 *)(param_2[1] + 8),2,puVar6 + -1,puVar7 + -2,7),
           iVar2 < 0)) goto LAB_0001f7e4;
        iVar9 = iVar9 + 1;
      }
      goto LAB_0001f80a;
    }
  }
LAB_0001f7e4:
  param_2[0xc] = iVar8;
  param_2[0xd] = iVar9;
  iVar3 = *(int *)(param_1 + 0x50);
LAB_0001f7ec:
  rtnl_unlock();
  return iVar3;
}



/* ===== nl80211_get_interface @ 0001f86c size=82 ===== */

undefined4 nl80211_get_interface(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  iVar1 = alloc_skb(0xf00,0xcc0);
  if (iVar1 == 0) {
    uVar3 = 0xfffffff4;
  }
  else {
    iVar2 = nl80211_send_iface(iVar1,param_2[1],*param_2,0,uVar3,uVar4,7);
    if (-1 < iVar2) {
      uVar3 = genlmsg_reply(iVar1,param_2);
      return uVar3;
    }
    kfree_skb(iVar1);
    uVar3 = 0xffffff97;
  }
  return uVar3;
}



/* ===== nl80211_send_wiphy @ 0001f8be size=5774 ===== */

undefined4
nl80211_send_wiphy(int *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,int param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_7c;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  iVar13 = param_1[0x6c];
  iVar2 = nl80211hdr_put(param_3,param_4,param_5,param_6,param_2 & 0xff);
  if (iVar2 == 0) {
    return 0xffffff97;
  }
  if (param_7 == 0) {
    return 0xffffffea;
  }
  iVar3 = nla_put_be32(param_3,1,param_1[0xe]);
  if (iVar3 != 0) goto LAB_0001fbf0;
  iVar3 = param_1[0xaf];
  if (iVar3 == 0) {
    iVar3 = param_1[0xa4];
  }
  iVar3 = nla_put_string(param_3,2,iVar3);
  if ((iVar3 != 0) || (iVar3 = nla_put_be32(param_3,0x2e,*DAT_0001fc14), iVar3 != 0))
  goto LAB_0001fbf0;
  if (param_2 != 3) goto switchD_0001f938_default;
  switch(*(undefined4 *)(param_7 + 0xc)) {
  case 0:
    iVar13 = nla_put_u8(param_3,0x3d,(char)param_1[0x84]);
    if ((((((((iVar13 != 0) ||
             (iVar13 = nla_put_u8(param_3,0x3e,*(undefined1 *)((int)param_1 + 0x211)), iVar13 != 0))
            || (iVar13 = nla_put_be32(param_3,0x3f,param_1[0x85]), iVar13 != 0)) ||
           ((iVar13 = nla_put_be32(param_3,0x40,param_1[0x86]), iVar13 != 0 ||
            (iVar13 = nla_put_u8(param_3,0x59,(char)param_1[0x87]), iVar13 != 0)))) ||
          (iVar13 = nla_put_u8(param_3,0x2b,(char)param_1[0x79]), iVar13 != 0)) ||
         (((iVar13 = nla_put_u8(param_3,0x7b,*(undefined1 *)((int)param_1 + 0x1e6)), iVar13 != 0 ||
           (iVar13 = nla_put_u16(param_3,0x38,(short)param_1[0x7a]), iVar13 != 0)) ||
          ((iVar13 = nla_put_u16(param_3,0x7c,*(undefined2 *)((int)param_1 + 0x1ea)), iVar13 != 0 ||
           (iVar13 = nla_put_u8(param_3,0x85,*(undefined1 *)((int)param_1 + 0x1e7)), iVar13 != 0))))
         )) || (((param_1[0x71] << 0x17 < 0 && (iVar13 = nla_put_flag(param_3,0x68), iVar13 != 0))
                || ((param_1[0x71] << 0x15 < 0 && (iVar13 = nla_put_flag(param_3,0x73), iVar13 != 0)
                    ))))) ||
       (((((param_1[0x71] << 0x11 < 0 && (iVar13 = nla_put_flag(param_3,0x82), iVar13 != 0)) ||
          ((param_1[0x71] << 0x12 < 0 && (iVar13 = nla_put_flag(param_3,0x83), iVar13 != 0)))) ||
         ((param_1[0x71] << 0x10 < 0 && (iVar13 = nla_put_flag(param_3,0x8b), iVar13 != 0)))) ||
        ((param_1[0x71] << 0xf < 0 && (iVar13 = nla_put_flag(param_3,0x8c), iVar13 != 0))))))
    goto LAB_0001fbf0;
    *(int *)(param_7 + 0xc) = *(int *)(param_7 + 0xc) + 1;
    if (*(char *)(param_7 + 0x1c) != '\0') goto switchD_0001f938_default;
  case 1:
    iVar13 = nla_put(param_3,0x39,param_1[0x7e] << 2,param_1[0x7f]);
    if (((((iVar13 != 0) ||
          (iVar13 = nla_put_u8(param_3,0x56,*(undefined1 *)((int)param_1 + 0x24e)), iVar13 != 0)) ||
         ((param_1[0x71] << 0x18 < 0 && (iVar13 = nla_put_flag(param_3,0x66), iVar13 != 0)))) ||
        ((iVar13 = nla_put_be32(param_3,0x71,param_1[0x94]), iVar13 != 0 ||
         (iVar13 = nla_put_be32(param_3,0x72,param_1[0x95]), iVar13 != 0)))) ||
       ((param_1[0x71] << 0xc < 0 &&
        (iVar13 = nla_put_be32(param_3,0x90,param_1[0x96]), iVar13 != 0)))) goto LAB_0001fbf0;
    if (((param_1[0x94] != 0) || (param_1[0x95] != 0)) &&
       (*(code **)(*param_1 + 0x114) != (code *)0x0)) {
      local_5c = 0;
      local_58 = 0;
      iVar13 = (**(code **)(*param_1 + 0x114))(param_1 + 0x68,&local_5c,&local_58);
      if ((iVar13 == 0) &&
         ((iVar13 = nla_put_be32(param_3,0x69,local_5c), iVar13 != 0 ||
          (iVar13 = nla_put_be32(param_3,0x6a,local_58), iVar13 != 0)))) goto LAB_0001fbf0;
    }
    *(int *)(param_7 + 0xc) = *(int *)(param_7 + 0xc) + 1;
    if (*(char *)(param_7 + 0x1c) != '\0') goto switchD_0001f938_default;
switchD_0001f938_caseD_2:
    iVar13 = nl80211_put_iftypes(param_3,0x20,(short)param_1[0x70]);
    if (iVar13 != 0) goto LAB_0001fbf0;
    *(int *)(param_7 + 0xc) = *(int *)(param_7 + 0xc) + 1;
    if (*(char *)(param_7 + 0x1c) != '\0') goto switchD_0001f938_default;
switchD_0001f938_caseD_3:
    psVar7 = (short *)nla_nest_start_noflag(param_3,0x16);
    if (psVar7 == (short *)0x0) goto LAB_0001fbf0;
    uVar12 = *(uint *)(param_7 + 0x10);
LAB_0001fb7a:
    if ((4 < uVar12) || ((1 < uVar12 && (*(char *)(param_7 + 0x1c) == '\0')))) goto LAB_0001fcb0;
    piVar9 = (int *)param_1[uVar12 + 0x9d];
    if (piVar9 == (int *)0x0) {
LAB_000205c6:
      uVar12 = uVar12 + 1;
      goto LAB_0001fb7a;
    }
    psVar8 = (short *)nla_nest_start_noflag(param_3,uVar12);
    if (psVar8 == (short *)0x0) goto LAB_0001fbf0;
    if (*(int *)(param_7 + 0x14) == 0) {
      cVar1 = *(char *)(param_7 + 0x1c);
      if (((*(char *)((int)piVar9 + 0x16) != '\0') &&
          ((((iVar13 = nla_put(param_3,3,0x10,(int)piVar9 + 0x19), iVar13 != 0 ||
             (iVar13 = nla_put_u16(param_3,4,(short)piVar9[5]), iVar13 != 0)) ||
            (iVar13 = nla_put_u8(param_3,5,*(undefined1 *)((int)piVar9 + 0x17)), iVar13 != 0)) ||
           (iVar13 = nla_put_u8(param_3,6,(char)piVar9[6]), iVar13 != 0)))) ||
         (((char)piVar9[0xb] != '\0' &&
          ((iVar13 = nla_put(param_3,7,8,piVar9 + 0xd), iVar13 != 0 ||
           (iVar13 = nla_put_be32(param_3,8,piVar9[0xc]), iVar13 != 0)))))) goto LAB_0001fbf0;
      if (cVar1 != '\0') {
        if ((short)piVar9[0x15] != 0) {
          psVar6 = (short *)nla_nest_start_noflag(param_3,9);
          if (psVar6 == (short *)0x0) goto LAB_0001fbf0;
          iVar13 = 0;
          while (iVar13 < (int)(uint)*(ushort *)(piVar9 + 0x15)) {
            iVar13 = iVar13 + 1;
            psVar4 = (short *)nla_nest_start_noflag(param_3,iVar13);
            if (psVar4 == (short *)0x0) goto LAB_0001fbf0;
            iVar3 = iVar13 * 0x3c + -0x3c;
            iVar5 = piVar9[0x16] + iVar3;
            iVar3 = nl80211_put_iftypes(param_3,1,*(undefined2 *)(piVar9[0x16] + iVar3));
            if (((iVar3 != 0) ||
                ((*(char *)(iVar5 + 2) != '\0' &&
                 (((iVar3 = nla_put(param_3,2,6,iVar5 + 3), iVar3 != 0 ||
                   (iVar3 = nla_put(param_3,3,0xb,iVar5 + 9), iVar3 != 0)) ||
                  ((iVar3 = nla_put(param_3,4,0xc,iVar5 + 0x14), iVar3 != 0 ||
                   (iVar3 = nla_put(param_3,5,0x19,iVar5 + 0x20), iVar3 != 0)))))))) ||
               ((piVar9[2] == 3 && (iVar3 = nla_put(param_3,6,2,iVar5 + 0x39), iVar3 != 0))))
            goto LAB_0001fbf0;
            *psVar4 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar4;
          }
          *psVar6 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar6;
        }
        if (((char)piVar9[0x13] != '\0') &&
           ((iVar13 = nla_put_u8(param_3,10), iVar13 != 0 ||
            (iVar13 = nla_put_u8(param_3,0xb,(char)piVar9[0x14]), iVar13 != 0)))) goto LAB_0001fbf0;
      }
      psVar6 = (short *)nla_nest_start_noflag(param_3,2);
      local_7c = 0;
      if (psVar6 == (short *)0x0) goto LAB_0001fbf0;
      for (; local_7c < piVar9[4]; local_7c = local_7c + 1) {
        psVar4 = (short *)nla_nest_start_noflag(param_3,local_7c);
        if (psVar4 == (short *)0x0) goto LAB_0001fbf0;
        iVar3 = piVar9[1];
        iVar13 = nla_put_be32(param_3,1,*(undefined2 *)(iVar3 + local_7c * 0xc + 4));
        if ((iVar13 != 0) ||
           ((*(int *)(iVar3 + local_7c * 0xc) << 0x1f < 0 &&
            (iVar13 = nla_put_flag(param_3,2), iVar13 != 0)))) goto LAB_0001fbf0;
        *psVar4 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar4;
      }
      *psVar6 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar6;
      *(int *)(param_7 + 0x14) = *(int *)(param_7 + 0x14) + 1;
      if (*(char *)(param_7 + 0x1c) == '\0') goto LAB_0001fbb0;
    }
    else {
LAB_0001fbb0:
      psVar6 = (short *)nla_nest_start_noflag(param_3,1);
      if (psVar6 == (short *)0x0) goto LAB_0001fbf0;
      for (iVar13 = *(int *)(param_7 + 0x14) + -1; iVar13 < piVar9[3]; iVar13 = iVar13 + 1) {
        psVar4 = (short *)nla_nest_start_noflag(param_3,iVar13);
        if ((psVar4 == (short *)0x0) ||
           (iVar3 = nl80211_msg_put_channel
                              (param_3,param_1 + 0x68,iVar13 * 0x38 + *piVar9,
                               *(undefined1 *)(param_7 + 0x1c)), iVar3 != 0)) goto LAB_0001fbf0;
        *psVar4 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar4;
        if (*(char *)(param_7 + 0x1c) != '\0') {
          if (iVar13 < piVar9[3]) {
            iVar13 = iVar13 + 2;
            goto LAB_0001fbd2;
          }
          break;
        }
      }
      iVar13 = 0;
LAB_0001fbd2:
      *(int *)(param_7 + 0x14) = iVar13;
      *psVar6 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar6;
    }
    *psVar8 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar8;
    if (*(char *)(param_7 + 0x1c) == '\0') goto LAB_000205c6;
    if (*(int *)(param_7 + 0x14) != 0) {
      uVar12 = uVar12 - 1;
    }
LAB_0001fcb0:
    *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
    if (uVar12 < 5) {
      *(uint *)(param_7 + 0x10) = uVar12 + 1;
    }
    else {
      *(undefined4 *)(param_7 + 0x10) = 0;
      if (*(int *)(param_7 + 0x14) == 0) {
        *(int *)(param_7 + 0xc) = *(int *)(param_7 + 0xc) + 1;
      }
    }
    if (*(char *)(param_7 + 0x1c) != '\0') goto switchD_0001f938_default;
switchD_0001f938_caseD_4:
    psVar7 = (short *)nla_nest_start_noflag(param_3,0x32);
    if (psVar7 == (short *)0x0) goto LAB_0001fbf0;
    iVar13 = 0;
    if (*(int *)(*param_1 + 0xc) != 0) {
      iVar13 = nla_put_be32(param_3,1,7);
      if (iVar13 != 0) goto LAB_0001fbf0;
      iVar13 = 1;
    }
    if (*(int *)(*param_1 + 0x14) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,6);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0x18) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0xb);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0x30) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0xf);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0x3c) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x13);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0x50) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x17);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0x70) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x1d);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0x84) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x19);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0x9c) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x25);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xa0) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x26);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xa4) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x27);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xa8) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x28);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xb8) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x2b);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0x74) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x44);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xe0) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x34);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xe4) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x35);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xe8) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x36);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if ((param_1[0x71] << 10 < 0) && (*(int *)(*param_1 + 0xec) != 0)) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x37);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xd8) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x39);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xf4) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x3b);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xf8) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x43);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (param_1[0x71] << 0x1c < 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x31);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    iVar3 = *param_1;
    if (((*(int *)(iVar3 + 0x90) != 0) || (*(int *)(iVar3 + 0x30) != 0)) ||
       (*(int *)(iVar3 + 0x74) != 0)) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x41);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xd0) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x42);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (param_1[0x71] << 0x10 < 0) {
      if (*(int *)(*param_1 + 0x124) != 0) {
        iVar13 = iVar13 + 1;
        iVar3 = nla_put_be32(param_3,iVar13,0x52);
        if (iVar3 != 0) goto LAB_0001fbf0;
      }
      if (*(int *)(*param_1 + 0x128) != 0) {
        iVar13 = iVar13 + 1;
        iVar3 = nla_put_be32(param_3,iVar13,0x51);
        if (iVar3 != 0) goto LAB_0001fbf0;
      }
    }
    if ((*(char *)((int)param_1 + 0x1e5) != '\0') && (*(int *)(*param_1 + 0x118) != 0)) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x4b);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 300) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x54);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0x130) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x57);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (param_1[0x71] << 0xd < 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x55);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0x138) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x59);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(int *)(*param_1 + 0xc0) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x5c);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if ((*(int *)(*param_1 + 0xac) != 0) || (*(int *)(*param_1 + 0x9c) != 0)) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x2e);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if ((*(int *)(*param_1 + 0xb4) != 0) || (*(int *)(*param_1 + 0xa4) != 0)) {
      iVar13 = iVar13 + 1;
      iVar3 = nla_put_be32(param_3,iVar13,0x30);
      if (iVar3 != 0) goto LAB_0001fbf0;
    }
    if (*(char *)(param_7 + 0x1c) != '\0') {
      if (*(int *)(*param_1 + 0x150) != 0) {
        iVar13 = iVar13 + 1;
        iVar3 = nla_put_be32(param_3,iVar13,0x62);
        if (iVar3 != 0) goto LAB_0001fbf0;
      }
      if (*(int *)(*param_1 + 0x154) != 0) {
        iVar13 = iVar13 + 1;
        iVar3 = nla_put_be32(param_3,iVar13,99);
        if (iVar3 != 0) goto LAB_0001fbf0;
      }
      if ((param_1[0x71] << 8 < 0) && (*(int *)(*param_1 + 0x15c) != 0)) {
        iVar13 = iVar13 + 1;
        iVar3 = nla_put_be32(param_3,iVar13,0x66);
        if (iVar3 != 0) goto LAB_0001fbf0;
      }
      if (*(int *)(*param_1 + 0x160) != 0) {
        iVar13 = iVar13 + 1;
        iVar3 = nla_put_be32(param_3,iVar13,0x68);
        if (iVar3 != 0) goto LAB_0001fbf0;
      }
      if ((param_1[0x73] << 5 < 0) && (*(int *)(*param_1 + 0x168) != 0)) {
        iVar13 = iVar13 + 1;
        iVar3 = nla_put_be32(param_3,iVar13,0x69);
        if (iVar3 != 0) goto LAB_0001fbf0;
      }
      if (*(int *)(*param_1 + 0x18c) != 0) {
        iVar13 = iVar13 + 1;
        iVar3 = nla_put_be32(param_3,iVar13,0x79);
        if (iVar3 != 0) goto LAB_0001fbf0;
      }
      if (*(int *)(*param_1 + 0xb0) != 0) {
        iVar13 = iVar13 + 1;
        iVar3 = nla_put_be32(param_3,iVar13,0x7a);
        if (iVar3 != 0) goto LAB_0001fbf0;
      }
      if ((*(int *)(*param_1 + 0x14c) != 0) &&
         (iVar13 = nla_put_be32(param_3,iVar13 + 1,0x60), iVar13 != 0)) goto LAB_0001fbf0;
    }
    *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
    *(int *)(param_7 + 0xc) = *(int *)(param_7 + 0xc) + 1;
    if (*(char *)(param_7 + 0x1c) != '\0') goto switchD_0001f938_default;
switchD_0001f938_caseD_5:
    if ((((*(int *)(*param_1 + 0xec) != 0) && (param_1[0x71] << 10 < 0)) &&
        (iVar13 = nla_put_be32(param_3,0x6f,(short)param_1[0x93]), iVar13 != 0)) ||
       ((param_1[0x71] << 0xb < 0 && (iVar13 = nla_put_flag(param_3,0x6c), iVar13 != 0))))
    goto LAB_0001fbf0;
    *(int *)(param_7 + 0xc) = *(int *)(param_7 + 0xc) + 1;
    if (*(char *)(param_7 + 0x1c) != '\0') goto switchD_0001f938_default;
switchD_0001f938_caseD_6:
    if (param_1[0x91] != 0) {
      cVar1 = *(char *)(param_7 + 0x1c);
      psVar7 = (short *)nla_nest_start_noflag(param_3,0x76);
      if (((((psVar7 == (short *)0x0) ||
            ((*(int *)param_1[0x91] << 0x1f < 0 && (iVar13 = nla_put_flag(param_3,1), iVar13 != 0)))
            ) || ((*(int *)param_1[0x91] << 0x1d < 0 &&
                  (iVar13 = nla_put_flag(param_3,2), iVar13 != 0)))) ||
          (((((*(int *)param_1[0x91] << 0x1e < 0 && (iVar13 = nla_put_flag(param_3,3), iVar13 != 0))
             || ((*(int *)param_1[0x91] << 0x1c < 0 &&
                 (iVar13 = nla_put_flag(param_3,5), iVar13 != 0)))) ||
            ((*(int *)param_1[0x91] << 0x1b < 0 && (iVar13 = nla_put_flag(param_3,6), iVar13 != 0)))
            ) || ((*(int *)param_1[0x91] << 0x1a < 0 &&
                  (iVar13 = nla_put_flag(param_3,7), iVar13 != 0)))))) ||
         (((*(int *)param_1[0x91] << 0x19 < 0 && (iVar13 = nla_put_flag(param_3,8), iVar13 != 0)) ||
          ((*(int *)param_1[0x91] << 0x18 < 0 && (iVar13 = nla_put_flag(param_3,9), iVar13 != 0)))))
         ) goto LAB_0001fbf0;
      iVar13 = param_1[0x91];
      if (*(int *)(iVar13 + 4) != 0) {
        local_54 = *(int *)(iVar13 + 0xc);
        local_50 = *(int *)(iVar13 + 8);
        local_4c = *(int *)(iVar13 + 0x10);
        local_58 = *(int *)(iVar13 + 4);
        iVar13 = nla_put(param_3,4,0x10,&local_58);
        if (iVar13 != 0) goto LAB_0001fbf0;
      }
      if ((*(int *)param_1[0x91] << 0x17 < 0) &&
         (iVar13 = nla_put_be32(param_3,0x12,((int *)param_1[0x91])[5]), iVar13 != 0))
      goto LAB_0001fbf0;
      if ((cVar1 != '\0') && (piVar9 = *(int **)(param_1[0x91] + 0x18), piVar9 != (int *)0x0)) {
        psVar8 = (short *)nla_nest_start_noflag(param_3,0xe);
        if (((((psVar8 == (short *)0x0) || (iVar13 = nla_put_be32(param_3,6,piVar9[1]), iVar13 != 0)
              ) || (iVar13 = nla_put_be32(param_3,6,piVar9[1]), iVar13 != 0)) ||
            ((((char)piVar9[4] != '\0' && (iVar13 = nla_put_flag(param_3,7), iVar13 != 0)) ||
             ((*piVar9 != 0 && (iVar13 = nla_put(param_3,8,0xc), iVar13 != 0)))))) ||
           ((iVar13 = nla_put_be32(param_3,9,piVar9[2]), iVar13 != 0 ||
            (iVar13 = nla_put_be32(param_3,10,piVar9[3]), iVar13 != 0)))) goto LAB_0001fbf0;
        *psVar8 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar8;
      }
      *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
    }
    *(int *)(param_7 + 0xc) = *(int *)(param_7 + 0xc) + 1;
    if (*(char *)(param_7 + 0x1c) != '\0') goto switchD_0001f938_default;
switchD_0001f938_caseD_7:
    iVar13 = nl80211_put_iftypes(param_3,0x79,(short)param_1[0x6f]);
    if (iVar13 != 0) {
LAB_0001fbf0:
      genlmsg_cancel(param_3,iVar2);
      return 0xffffffa6;
    }
    cVar1 = *(char *)(param_7 + 0x1c);
    psVar7 = (short *)nla_nest_start_noflag(param_3,0x78);
    if (psVar7 == (short *)0x0) goto LAB_0001fbf0;
    iVar13 = 0;
    while (iVar13 < param_1[0x6e]) {
      piVar9 = (int *)(iVar13 * 0x14 + param_1[0x6d]);
      iVar13 = iVar13 + 1;
      psVar8 = (short *)nla_nest_start_noflag(param_3,iVar13);
      if ((psVar8 == (short *)0x0) ||
         (psVar6 = (short *)nla_nest_start_noflag(param_3,1), psVar6 == (short *)0x0))
      goto LAB_0001fbf0;
      iVar3 = 0;
      while (iVar3 < (int)(uint)*(byte *)((int)piVar9 + 10)) {
        iVar3 = iVar3 + 1;
        psVar4 = (short *)nla_nest_start_noflag(param_3,iVar3);
        if (psVar4 == (short *)0x0) goto LAB_0001fbf0;
        iVar14 = iVar3 * 4 + -4;
        iVar5 = nla_put_be32(param_3,1,*(undefined2 *)(*piVar9 + iVar14));
        if ((iVar5 != 0) ||
           (iVar5 = nl80211_put_iftypes(param_3,2,*(undefined2 *)(*piVar9 + iVar14 + 2)), iVar5 != 0
           )) goto LAB_0001fbf0;
        *psVar4 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar4;
      }
      *psVar6 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar6;
      if ((((((*(char *)((int)piVar9 + 0xb) != '\0') &&
             (iVar3 = nla_put_flag(param_3,3), iVar3 != 0)) ||
            (iVar3 = nla_put_be32(param_3,4,piVar9[1]), iVar3 != 0)) ||
           (iVar3 = nla_put_be32(param_3,2,(short)piVar9[2]), iVar3 != 0)) ||
          ((cVar1 != '\0' &&
           ((iVar3 = nla_put_be32(param_3,5,(char)piVar9[3]), iVar3 != 0 ||
            (iVar3 = nla_put_be32(param_3,6,*(undefined1 *)((int)piVar9 + 0xd)), iVar3 != 0)))))) ||
         ((piVar9[4] != 0 && (iVar3 = nla_put_be32(param_3,7), iVar3 != 0)))) goto LAB_0001fbf0;
      *psVar8 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar8;
    }
    *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
    *(int *)(param_7 + 0xc) = *(int *)(param_7 + 0xc) + 1;
    if (*(char *)(param_7 + 0x1c) != '\0') goto switchD_0001f938_default;
switchD_0001f938_caseD_8:
    if ((param_1[0x71] << 0xe < 0) &&
       (iVar13 = nla_put_be32(param_3,0x8d,param_1[0x76]), iVar13 != 0)) goto LAB_0001fbf0;
    uVar12 = param_1[0x73];
    if (*(char *)(param_7 + 0x1c) != '\0') {
      uVar12 = uVar12 | 0x4000;
    }
    iVar13 = nla_put_be32(param_3,0x8f,uVar12);
    if (((iVar13 != 0) ||
        ((param_1[0x10c] != 0 && (iVar13 = nla_put(param_3,0x94,0x1a), iVar13 != 0)))) ||
       ((param_1[0x71] << 0xe < 0 &&
        ((*(short *)((int)param_1 + 0x1c2) != 0 &&
         (iVar13 = nla_put_be32(param_3,0xa7), iVar13 != 0)))))) goto LAB_0001fbf0;
    if (*(char *)(param_7 + 0x1c) != '\0') break;
LAB_000203ba:
    iVar13 = 0;
    goto LAB_000203bc;
  case 2:
    goto switchD_0001f938_caseD_2;
  case 3:
    goto switchD_0001f938_caseD_3;
  case 4:
    goto switchD_0001f938_caseD_4;
  case 5:
    goto switchD_0001f938_caseD_5;
  case 6:
    goto switchD_0001f938_caseD_6;
  case 7:
    goto switchD_0001f938_caseD_7;
  case 8:
    goto switchD_0001f938_caseD_8;
  case 9:
    if (iVar13 != 0) {
      psVar7 = (short *)nla_nest_start_noflag(param_3,99);
      if (psVar7 == (short *)0x0) goto LAB_0001fbf0;
      iVar3 = 0;
      do {
        psVar8 = (short *)nla_nest_start_noflag(param_3,iVar3);
        if (psVar8 == (short *)0x0) goto LAB_0001fbf0;
        uVar12 = 0;
        for (uVar11 = (uint)*(ushort *)(iVar13 + iVar3 * 4); uVar11 != 0; uVar11 = uVar11 >> 1) {
          if (((int)(uVar11 << 0x1f) < 0) &&
             (iVar5 = nla_put_u16(param_3,0x65,(uVar12 & 0xfff) << 4), iVar5 != 0))
          goto LAB_0001fbf0;
          uVar12 = uVar12 + 1;
        }
        iVar3 = iVar3 + 1;
        *psVar8 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar8;
      } while (iVar3 != 0xd);
      *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
      psVar7 = (short *)nla_nest_start_noflag(param_3,100);
      if (psVar7 == (short *)0x0) goto LAB_0001fbf0;
      iVar3 = 0;
      do {
        psVar8 = (short *)nla_nest_start_noflag(param_3,iVar3);
        if (psVar8 == (short *)0x0) goto LAB_0001fbf0;
        uVar12 = 0;
        for (uVar11 = (uint)*(ushort *)(iVar13 + 2 + iVar3 * 4); uVar11 != 0; uVar11 = uVar11 >> 1)
        {
          if (((uVar11 & 1) != 0) &&
             (iVar5 = nla_put_u16(param_3,0x65,(uVar12 & 0xfff) << 4), iVar5 != 0))
          goto LAB_0001fbf0;
          uVar12 = uVar12 + 1;
        }
        iVar3 = iVar3 + 1;
        *psVar8 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar8;
      } while (iVar3 != 0xd);
      *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
    }
    iVar13 = nla_put_be32(param_3,0xde,param_1[0x7b]);
    if ((((((iVar13 != 0) || (iVar13 = nla_put_be32(param_3,0xdf,param_1[0x7c]), iVar13 != 0)) ||
          (iVar13 = nla_put_be32(param_3,0xe0,param_1[0x7d]), iVar13 != 0)) ||
         ((param_1[0x97] != 0 &&
          ((iVar13 = nla_put(param_3,0xa9,(char)param_1[0x99]), iVar13 != 0 ||
           (iVar13 = nla_put(param_3,0xaa,(char)param_1[0x99],param_1[0x98]), iVar13 != 0)))))) ||
        ((param_1[0x10d] != 0 && (iVar13 = nla_put(param_3,0xb0,0xc), iVar13 != 0)))) ||
       ((iVar13 = nla_put(param_3,6,6,param_1 + 0x68), iVar13 != 0 ||
        ((*(int *)((int)param_1 + 0x1a6) != 0 || *(short *)((int)param_1 + 0x1aa) != 0 &&
         (iVar13 = nla_put(param_3,0xd7,6,(int)param_1 + 0x1a6), iVar13 != 0))))))
    goto LAB_0001fbf0;
    if (1 < *(ushort *)((int)param_1 + 0x1be)) {
      psVar7 = (short *)nla_nest_start_noflag(param_3,0x80a6);
      if (psVar7 != (short *)0x0) {
        iVar13 = 0;
        do {
          if ((int)(uint)*(ushort *)((int)param_1 + 0x1be) <= iVar13) goto LAB_000208f4;
          iVar13 = iVar13 + 1;
          iVar3 = nla_put(param_3,iVar13,6,iVar13 * 6 + -6 + param_1[0x6b]);
        } while (iVar3 == 0);
      }
      goto LAB_0001fbf0;
    }
    break;
  case 10:
    piVar9 = (int *)param_1[0x110];
    if (piVar9 != (int *)0x0) {
      local_58 = *piVar9;
      local_44 = piVar9[1];
      local_54 = piVar9[2];
      local_50 = piVar9[4];
      local_4c = piVar9[3];
      local_48 = piVar9[5];
      iVar13 = nla_put(param_3,0xb6,0x18,&local_58);
      if (iVar13 != 0) goto LAB_0001fbf0;
    }
    if ((param_1[0x71] << 9 < 0) &&
       ((iVar13 = nla_put_flag(param_3,0xc0), iVar13 != 0 ||
        (iVar13 = nla_put_flag(param_3,0xc1), iVar13 != 0)))) goto LAB_0001fbf0;
    if ((short)param_1[0x115] != 0) {
      iVar13 = nla_put_be32(param_3,0xca);
joined_r0x00020c70:
      if (iVar13 != 0) goto LAB_0001fbf0;
    }
    break;
  case 0xb:
    if (param_1[0x113] != 0) {
      psVar7 = (short *)nla_nest_start_noflag(param_3,0xc5);
      if (psVar7 != (short *)0x0) {
        iVar13 = 0;
        do {
          if (param_1[0x113] <= iVar13) {
            *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
            goto LAB_00020a5c;
          }
          iVar3 = iVar13 * 0x1c;
          iVar13 = iVar13 + 1;
          iVar3 = nla_put(param_3,iVar13,8,iVar3 + param_1[0x111]);
        } while (iVar3 == 0);
      }
      goto LAB_0001fbf0;
    }
LAB_00020a5c:
    if (param_1[0x114] != 0) {
      psVar7 = (short *)nla_nest_start_noflag(param_3,0xc6);
      if (psVar7 != (short *)0x0) {
        iVar13 = 0;
        do {
          if (param_1[0x114] <= iVar13) goto LAB_000208f4;
          iVar3 = iVar13 * 8;
          iVar13 = iVar13 + 1;
          iVar3 = nla_put(param_3,iVar13,8,param_1[0x112] + iVar3);
        } while (iVar3 == 0);
      }
      goto LAB_0001fbf0;
    }
    break;
  case 0xc:
    if (((param_1[0x71] << 8 < 0) &&
        (iVar13 = nla_put_u8(param_3,0xce,*(undefined1 *)((int)param_1 + 0x456)), iVar13 != 0)) ||
       (((param_1[0x72] << 0x18 < 0 && (iVar13 = nla_put_flag(param_3,0xd8), iVar13 != 0)) ||
        (((*(char *)((int)param_1 + 0x1e5) != '\0' &&
          (iVar13 = nla_put_be32(param_3,0x100), iVar13 != 0)) ||
         (iVar13 = nla_put(param_3,0xd9,7,param_1 + 0x74), iVar13 != 0)))))) goto LAB_0001fbf0;
    uVar12 = param_1[0x116];
    if (uVar12 != 0) {
      psVar7 = (short *)nla_nest_start_noflag(param_3,0xe3);
      iVar13 = 0;
      if (psVar7 == (short *)0x0) goto LAB_0001fbf0;
      do {
        if (((int)(uVar12 << 0x1f) < 0) && (iVar3 = nla_put_flag(param_3,iVar13), iVar3 != 0))
        goto LAB_0001fbf0;
        uVar12 = uVar12 >> 1;
        iVar13 = iVar13 + 1;
      } while (uVar12 != 0);
LAB_000208f4:
      *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
    }
    break;
  case 0xd:
    if ((param_1[0x9b] != 0) && (param_1[0x9a] != 0)) {
      psVar7 = (short *)nla_nest_start_noflag(param_3,0xe6);
      if (psVar7 == (short *)0x0) goto LAB_0001fbf0;
      for (uVar12 = *(uint *)(param_7 + 0x18); uVar12 < (uint)param_1[0x9b]; uVar12 = uVar12 + 1) {
        iVar13 = param_1[0x9a];
        iVar3 = iVar13 + uVar12 * 0x10;
        psVar8 = (short *)nla_nest_start_noflag(param_3,uVar12);
        if ((((psVar8 == (short *)0x0) ||
             (iVar13 = nla_put_be32(param_3,5,*(undefined4 *)(iVar13 + uVar12 * 0x10)), iVar13 != 0)
             ) || (iVar13 = nla_put(param_3,0xa9,*(undefined1 *)(iVar3 + 0xc),
                                    *(undefined4 *)(iVar3 + 4)), iVar13 != 0)) ||
           (iVar13 = nla_put(param_3,0xaa,*(undefined1 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 8)),
           iVar13 != 0)) goto LAB_0001fbf0;
        *psVar8 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar8;
        if (*(char *)(param_7 + 0x1c) != '\0') break;
      }
      *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
      if (uVar12 < (uint)param_1[0x9b]) {
        *(uint *)(param_7 + 0x18) = uVar12 + 1;
        goto switchD_0001f938_default;
      }
    }
    iVar13 = nla_put_be32(param_3,0xef,(char)param_1[0x117]);
    if (iVar13 != 0) goto LAB_0001fbf0;
    if ((int)((uint)*(byte *)((int)param_1 + 0x1d3) << 0x1b) < 0) {
      memset(&local_58,0,0x30);
      iVar13 = (**(code **)(*param_1 + 400))(param_1 + 0x68,0,&local_58);
      if (((iVar13 == 0) && (iVar13 = nl80211_put_txq_stats(param_3,&local_58,0x109), iVar13 == 0))
         || ((iVar13 = nla_put_be32(param_3,0x10a,param_1[0x118]), iVar13 != 0 ||
             (iVar13 = nla_put_be32(param_3,0x10b,param_1[0x119]), iVar13 != 0))))
      goto LAB_0001fbf0;
      iVar13 = nla_put_be32(param_3,0x10c,param_1[0x11a]);
      goto joined_r0x00020c70;
    }
    break;
  case 0xe:
    puVar10 = (undefined4 *)param_1[0x11d];
    if (puVar10 != (undefined4 *)0x0) {
      psVar7 = (short *)nla_nest_start_noflag(param_3,0x111);
      if ((((psVar7 == (short *)0x0) || (iVar13 = nla_put_be32(param_3,1,*puVar10), iVar13 != 0)) ||
          (((int)((uint)*(byte *)(puVar10 + 1) << 0x1f) < 0 &&
           (iVar13 = nla_put_flag(param_3,2), iVar13 != 0)))) ||
         ((((int)((uint)*(byte *)(puVar10 + 1) << 0x1e) < 0 &&
           (iVar13 = nla_put_flag(param_3,3), iVar13 != 0)) ||
          (psVar8 = (short *)nla_nest_start_noflag(param_3,4), psVar8 == (short *)0x0))))
      goto LAB_0001fbf0;
      if ((int)((uint)*(byte *)((int)puVar10 + 0x12) << 0x1f) < 0) {
        psVar6 = (short *)nla_nest_start_noflag(param_3,1);
        if (((((psVar6 == (short *)0x0) ||
              (((int)((uint)*(byte *)((int)puVar10 + 0x12) << 0x1e) < 0 &&
               (iVar13 = nla_put_flag(param_3,1), iVar13 != 0)))) ||
             (((int)((uint)*(byte *)((int)puVar10 + 0x12) << 0x1d) < 0 &&
              (iVar13 = nla_put_flag(param_3,2), iVar13 != 0)))) ||
            (((((int)((uint)*(byte *)((int)puVar10 + 0x12) << 0x1c) < 0 &&
               (iVar13 = nla_put_flag(param_3,3), iVar13 != 0)) ||
              (((int)((uint)*(byte *)((int)puVar10 + 0x12) << 0x1b) < 0 &&
               (iVar13 = nla_put_flag(param_3,4), iVar13 != 0)))) ||
             (((iVar13 = nla_put_be32(param_3,5,puVar10[2]), iVar13 != 0 ||
               (iVar13 = nla_put_be32(param_3,6,puVar10[3]), iVar13 != 0)) ||
              ((-1 < *(char *)(puVar10 + 4) && (iVar13 = nla_put_be32(param_3,7), iVar13 != 0)))))))
            ) || ((((*(char *)((int)puVar10 + 0x11) != '\0' &&
                    (iVar13 = nla_put_be32(param_3,8), iVar13 != 0)) ||
                   (((int)((uint)*(byte *)((int)puVar10 + 0x12) << 0x1a) < 0 &&
                    (iVar13 = nla_put_flag(param_3,9), iVar13 != 0)))) ||
                  (((int)((uint)*(byte *)((int)puVar10 + 0x12) << 0x19) < 0 &&
                   (iVar13 = nla_put_flag(param_3,10), iVar13 != 0)))))) goto LAB_0001fbf0;
        *psVar6 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar6;
      }
      *psVar8 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar8;
      *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
    }
    break;
  case 0xf:
    if ((param_1[0x81] != 0) && (iVar13 = nla_put(param_3,0x4c,param_1[0x80] << 2), iVar13 != 0))
    goto LAB_0001fbf0;
    if ((param_1[0x83] != 0) && (param_1[0x82] != 0)) {
      psVar7 = (short *)nla_nest_start_noflag(param_3,0x811c);
      if (psVar7 == (short *)0x0) goto LAB_0001fbf0;
      uVar12 = 0;
      while (uVar12 < (uint)param_1[0x83]) {
        uVar12 = uVar12 + 1;
        psVar8 = (short *)nla_nest_start_noflag(param_3,uVar12 | 0x8000);
        if (psVar8 == (short *)0x0) goto LAB_0001fbf0;
        iVar13 = uVar12 * 0xc + -0xc;
        iVar3 = param_1[0x82] + iVar13;
        iVar13 = nl80211_put_iftypes(param_3,1,*(undefined2 *)(param_1[0x82] + iVar13));
        if ((iVar13 != 0) ||
           (iVar13 = nla_put(param_3,2,*(int *)(iVar3 + 8) << 2,*(undefined4 *)(iVar3 + 4)),
           iVar13 != 0)) goto LAB_0001fbf0;
        *psVar8 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar8;
      }
      *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
    }
    if ((param_1[0x121] != 0 || param_1[0x120] != 0) || (param_1[0x11f] != 0 || param_1[0x11e] != 0)
       ) {
      psVar7 = (short *)nla_nest_start_noflag(param_3,0x811d);
      if (psVar7 == (short *)0x0) goto LAB_0001fbf0;
      iVar13 = param_1[0x120];
      if ((iVar13 == 0 && param_1[0x121] == 0) ||
         (iVar13 = nla_put_u64_64bit(param_3,2,iVar13,param_1[0x121],1), iVar13 == 0)) {
        if (((param_1[0x11e] == 0 && param_1[0x11f] == 0) ||
            (iVar13 = nla_put_u64_64bit(param_3,3,param_1[0x11e],param_1[0x11f],1), iVar13 == 0)) &&
           ((iVar13 = nla_put_u8(param_3,7,(char)param_1[0x122]), iVar13 == 0 &&
            (iVar13 = nla_put_u8(param_3,8,(char)param_1[0x122]), iVar13 == 0)))) {
          *psVar7 = (short)*(undefined4 *)(param_3 + 0x98) - (short)psVar7;
          goto LAB_000203ba;
        }
      }
      nlmsg_trim(param_3,psVar7);
      goto LAB_0001fbf0;
    }
    goto LAB_000203ba;
  default:
    goto switchD_0001f938_default;
  }
  iVar13 = *(int *)(param_7 + 0xc) + 1;
LAB_000203bc:
  *(int *)(param_7 + 0xc) = iVar13;
switchD_0001f938_default:
  *(int *)(iVar2 + -0x14) = *(int *)(param_3 + 0x98) - (iVar2 + -0x14);
  return 0;
}



/* ===== nl80211_dump_wiphy @ 00020f72 size=236 ===== */

int nl80211_dump_wiphy(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  piVar3 = (int *)param_2[0xc];
  iVar1 = param_1;
  piVar6 = param_2;
  rtnl_lock();
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)kzalloc_constprop_47(0x20);
    if (piVar3 == (int *)0x0) {
      rtnl_unlock();
      return -0xc;
    }
    *piVar3 = -1;
    piVar3[1] = -1;
    iVar1 = nl80211_dump_wiphy_parse_constprop_27
                      (param_2,piVar3,0xffffffff,0xffffffff,iVar1,piVar6,param_3,param_4);
    if (iVar1 != 0) {
      kfree(piVar3);
      rtnl_unlock();
      return iVar1;
    }
    param_2[0xc] = (int)piVar3;
  }
  iVar1 = 0;
  for (puVar4 = (undefined4 *)*DAT_00021060; iVar5 = iVar1, puVar4 != DAT_00021060;
      puVar4 = (undefined4 *)*puVar4) {
    iVar5 = iVar1 + 1;
    if (piVar3[2] < iVar5) {
      if ((piVar3[1] == -1 && *piVar3 == -1) ||
         (piVar3[1] == (int)puVar4[0xd] >> 0x1f && *piVar3 == puVar4[0xd])) goto LAB_00020ffa;
    }
    iVar1 = iVar5;
  }
  goto LAB_0002104a;
  while (0 < piVar3[3]) {
LAB_00020ffa:
    iVar2 = nl80211_send_wiphy(puVar4 + -1,3,param_1,*(undefined4 *)(*param_2 + 0x24),
                               *(undefined4 *)(param_2[1] + 8),2,piVar3);
    if (iVar2 < 0) {
      if ((((iVar2 == -0x69) || (iVar5 = iVar1, iVar2 == -0x5a)) &&
          (iVar5 = iVar1, *(int *)(param_1 + 0x50) == 0)) &&
         (((char)piVar3[7] == '\0' && ((uint)param_2[8] < 0x1000)))) {
        param_2[8] = 0x1000;
        piVar3[3] = 0;
        rtnl_unlock();
        return 1;
      }
      break;
    }
  }
LAB_0002104a:
  rtnl_unlock();
  piVar3[2] = iVar5;
  return *(int *)(param_1 + 0x50);
}



/* ===== nl80211_get_wiphy @ 00021064 size=92 ===== */

undefined4 nl80211_get_wiphy(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [36];
  
  uVar3 = param_2[6];
  memset(auStack_38,0,0x20);
  iVar1 = alloc_skb(0x1010,0xcc0);
  if (iVar1 == 0) {
    uVar3 = 0xfffffff4;
  }
  else {
    iVar2 = nl80211_send_wiphy(uVar3,3,iVar1,param_2[1],*param_2,0,auStack_38);
    if (iVar2 < 0) {
      kfree_skb(iVar1);
      uVar3 = 0xffffff97;
    }
    else {
      uVar3 = genlmsg_reply(iVar1,param_2);
    }
  }
  return uVar3;
}



/* ===== __cfg80211_alloc_vendor_skb @ 000210c0 size=182 ===== */

int __cfg80211_alloc_vendor_skb
              (int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
              undefined1 param_6,undefined4 param_7,undefined4 *param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = nlmsg_new(param_3 + 100,param_9,param_3,param_4,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = nl80211hdr_put(iVar1,param_4,param_5,0,param_6);
  if (((iVar2 != 0) && (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(param_1 + 0x38)), iVar3 == 0))
     && ((param_8 == (undefined4 *)0x0 ||
         ((iVar3 = nla_put_be32(iVar1,0xc3,*param_8), iVar3 == 0 &&
          (iVar3 = nla_put_be32(iVar1,0xc4,param_8[1]), iVar3 == 0)))))) {
    if (param_2 != 0) {
      uVar4 = wdev_id(param_2);
      iVar3 = nla_put_u64_64bit(iVar1,0x99,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xe5);
      if ((iVar3 != 0) ||
         ((*(int *)(param_2 + 0x10) != 0 &&
          (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(*(int *)(param_2 + 0x10) + 0xa8)),
          iVar3 != 0)))) goto LAB_000210ee;
    }
    iVar3 = nla_nest_start_noflag(iVar1,param_7);
    if (iVar3 != 0) {
      *(int *)(iVar1 + 0x18) = param_1;
      *(int *)(iVar1 + 0x1c) = iVar2;
      *(int *)(iVar1 + 0x20) = iVar3;
      return iVar1;
    }
  }
LAB_000210ee:
  kfree_skb(iVar1);
  return 0;
}



/* ===== __cfg80211_alloc_event_skb @ 00021176 size=78 ===== */

undefined4 __cfg80211_alloc_event_skb(int param_1)

{
  undefined4 uVar1;
  int extraout_r2;
  undefined4 extraout_r3;
  int iVar2;
  undefined8 uVar3;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar3 = wiphy_to_rdev();
  if (extraout_r2 == 0x2d) {
    if (in_stack_00000004 == -1) {
      iVar2 = 0;
      goto LAB_00021194;
    }
  }
  else if (((extraout_r2 == 0x67) && (-1 < in_stack_00000004)) &&
          (in_stack_00000004 < *(int *)(param_1 + 0x2b0))) {
    iVar2 = *(int *)(param_1 + 0x2a8) + in_stack_00000004 * 8;
LAB_00021194:
    uVar1 = __cfg80211_alloc_vendor_skb
                      ((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),in_stack_00000008,
                       in_stack_00000000,0,extraout_r2,extraout_r3,iVar2,in_stack_0000000c);
    return uVar1;
  }
  return 0;
}



/* ===== __cfg80211_alloc_reply_skb @ 000211c4 size=52 ===== */

undefined4
__cfg80211_alloc_reply_skb
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = wiphy_to_rdev(param_1,param_2,param_4);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0xa8) != 0) {
    uVar2 = __cfg80211_alloc_vendor_skb();
  }
  return uVar2;
}



/* ===== cfg80211_nan_match @ 000211f8 size=394 ===== */

void cfg80211_nan_match(undefined4 *param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  undefined4 extraout_r2;
  undefined8 uVar6;
  undefined1 *puVar7;
  
  puVar7 = param_2;
  uVar6 = wiphy_to_rdev(*param_1);
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  if ((((*(char *)(iVar1 + 4) == '\0') || (*(char *)(iVar1 + 5) == '\0')) ||
      (*(int *)(iVar1 + 8) == 0)) || (iVar1 = alloc_skb(0xf00,extraout_r2), iVar1 == 0)) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x78,puVar7);
  if (((iVar2 != 0) &&
      (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)((int)uVar6 + 0x38)), iVar3 == 0)) &&
     ((param_1[4] == 0 ||
      (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_1[4] + 0xa8)), iVar3 == 0)))) {
    uVar6 = wdev_id(param_1);
    iVar3 = nla_put_u64_64bit(iVar1,0x99,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0xe5);
    if (((iVar3 == 0) &&
        (iVar3 = nla_put_u64_64bit(iVar1,0x58,*(undefined4 *)(param_2 + 0x18),
                                   *(undefined4 *)(param_2 + 0x1c),0xe5), iVar3 == 0)) &&
       ((iVar3 = nla_put(iVar1,6,6,*(undefined4 *)(param_2 + 8)), iVar3 == 0 &&
        (((psVar4 = (short *)nla_nest_start_noflag(iVar1,0xf1), psVar4 != (short *)0x0 &&
          (psVar5 = (short *)nla_nest_start_noflag(iVar1,1), psVar5 != (short *)0x0)) &&
         (iVar3 = nla_put_u8(iVar1,0xf,param_2[4]), iVar3 == 0)))))) {
      *psVar5 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar5;
      psVar5 = (short *)nla_nest_start_noflag(iVar1,2);
      if ((((psVar5 != (short *)0x0) && (iVar3 = nla_put_u8(iVar1,1,*param_2), iVar3 == 0)) &&
          (iVar3 = nla_put_u8(iVar1,0xf,param_2[5]), iVar3 == 0)) &&
         (((*(int *)(param_2 + 0x10) == 0 || (param_2[0xc] == '\0')) ||
          (iVar3 = nla_put(iVar1,0xb), iVar3 == 0)))) {
        *psVar5 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar5;
        *psVar4 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar4;
        *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
        if (param_1[0x36] == 0) {
          genlmsg_multicast_netns_constprop_37(iVar1,5,param_3);
          return;
        }
        genlmsg_unicast_constprop_36(iVar1);
        return;
      }
    }
  }
  kfree_skb(iVar1);
  return;
}



/* ===== cfg80211_nan_func_terminated @ 00021382 size=278 ===== */

void cfg80211_nan_func_terminated
               (undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = param_2;
  uVar5 = wiphy_to_rdev(*param_1);
  if (((int)((ulonglong)uVar5 >> 0x20) == 0) || (iVar1 = alloc_skb(0xf00,param_7), iVar1 == 0)) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x76,uVar6);
  if (((iVar2 != 0) &&
      (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)((int)uVar5 + 0x38)), iVar3 == 0)) &&
     ((param_1[4] == 0 ||
      (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_1[4] + 0xa8)), iVar3 == 0)))) {
    uVar5 = wdev_id(param_1);
    iVar3 = nla_put_u64_64bit(iVar1,0x99,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xe5);
    if ((((iVar3 == 0) && (iVar3 = nla_put_u64_64bit(iVar1,0x58,param_5,param_6,0xe5), iVar3 == 0))
        && (psVar4 = (short *)nla_nest_start_noflag(iVar1,0xf0), psVar4 != (short *)0x0)) &&
       ((iVar3 = nla_put_u8(iVar1,0xf,param_2), iVar3 == 0 &&
        (iVar3 = nla_put_u8(iVar1,0x10,param_3), iVar3 == 0)))) {
      *psVar4 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar4;
      *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
      if (param_1[0x36] != 0) {
        genlmsg_unicast_constprop_36(iVar1);
        return;
      }
      genlmsg_multicast_netns_constprop_37(iVar1,5,param_7);
      return;
    }
  }
  kfree_skb(iVar1);
  return;
}



/* ===== nl80211_send_mlme_event @ 00021498 size=230 ===== */

void nl80211_send_mlme_event
               (int param_1,int param_2,undefined4 param_3,int param_4,undefined1 param_5,
               undefined4 param_6,uint param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  iVar1 = nlmsg_new(param_9 + 100 + param_4,param_6);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,param_5);
  if (((((iVar2 != 0) && (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(param_1 + 0x38)), iVar3 == 0)
        ) && (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_2 + 0xa8)), iVar3 == 0)) &&
      (iVar3 = nla_put(iVar1,0x33,param_4,param_3), iVar3 == 0)) &&
     ((param_8 == 0 || (iVar3 = nla_put(iVar1,0x4d,param_9,param_8), iVar3 == 0)))) {
    if (-1 < (int)param_7) {
      psVar4 = (short *)nla_nest_start_noflag(iVar1,0x81);
      if ((psVar4 == (short *)0x0) || (iVar3 = nla_put_u8(iVar1,1,param_7 & 0xff), iVar3 != 0))
      goto LAB_000214d6;
      *psVar4 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar4;
    }
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,param_6);
    return;
  }
LAB_000214d6:
  kfree_skb(iVar1);
  return;
}



/* ===== cfg80211_rx_unprot_mlme_mgmt @ 0002157e size=122 ===== */

void cfg80211_rx_unprot_mlme_mgmt(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint extraout_r2;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 0x1c4);
  uVar5 = wiphy_to_rdev(*puVar4);
  if (1 < extraout_r2) {
    uVar2 = *(ushort *)((ulonglong)uVar5 >> 0x20) & 0xfc;
    if (uVar2 == 0xc0) {
      uVar3 = 0x46;
    }
    else if (uVar2 == 0xa0) {
      uVar3 = 0x47;
    }
    else {
      if (uVar2 != 0x80) {
        return;
      }
      if ((puVar4[0x41] != 0) && (uVar1 = elapsed_jiffies_msecs(), uVar1 < 10000)) {
        return;
      }
      puVar4[0x41] = *DAT_000215f8;
      uVar3 = 0x8a;
    }
    nl80211_send_mlme_event((int)uVar5,param_1,param_2,param_3,uVar3,0xa20,0xffffffff,0,0);
  }
  return;
}



/* ===== nl80211_send_mlme_timeout @ 000215fc size=156 ===== */

void nl80211_send_mlme_timeout
               (int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = alloc_skb(0xf00,param_5,param_3,param_4,param_1,param_2,param_3);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,param_3 & 0xff);
  if ((((iVar2 != 0) && (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(param_1 + 0x38)), iVar3 == 0))
      && (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_2 + 0xa8)), iVar3 == 0)) &&
     ((iVar3 = nla_put_flag(iVar1,0x41), iVar3 == 0 &&
      (iVar3 = nla_put(iVar1,6,6,param_4), iVar3 == 0)))) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,param_5);
    return;
  }
  kfree_skb(iVar1);
  return;
}



/* ===== cfg80211_notify_new_peer_candidate @ 00021698 size=214 ===== */

void cfg80211_notify_new_peer_candidate
               (int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
               undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  
  iVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  if ((*(int *)(extraout_r3 + 4) != 7) || (iVar2 = nlmsg_new(param_4 + 100,param_6), iVar2 == 0)) {
    return;
  }
  iVar3 = nl80211hdr_put(iVar2,0,0,0,0x48);
  if (((((iVar3 != 0) && (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 == 0))
       && (iVar1 = nla_put_be32(iVar2,3,*(undefined4 *)(param_1 + 0xa8)), iVar1 == 0)) &&
      (iVar1 = nla_put(iVar2,6,6,param_2), iVar1 == 0)) &&
     ((((param_4 == 0 || (param_3 == 0)) ||
       (iVar1 = nla_put(iVar2,0x2a,param_4,param_3), iVar1 == 0)) &&
      ((param_5 == 0 || (iVar1 = nla_put_be32(iVar2,0x97,param_5), iVar1 == 0)))))) {
    *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar2,3,param_6);
    return;
  }
  kfree_skb(iVar2);
  return;
}



/* ===== nl80211_send_remain_on_chan_event @ 0002176e size=250 ===== */

void nl80211_send_remain_on_chan_event
               (uint param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = alloc_skb(0xf00,param_9);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,param_1 & 0xff);
  if (((iVar2 != 0) && (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(param_2 + 0x38)), iVar3 == 0))
     && ((*(int *)(param_3 + 0x10) == 0 ||
         (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(*(int *)(param_3 + 0x10) + 0xa8)), iVar3 == 0
         )))) {
    uVar4 = wdev_id(param_3);
    iVar3 = nla_put_u64_64bit(iVar1,0x99,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xe5);
    if (((((iVar3 == 0) &&
          (iVar3 = nla_put_be32(iVar1,0x26,*(undefined4 *)(param_7 + 4)), iVar3 == 0)) &&
         (iVar3 = nla_put_be32(iVar1,0x27,0), iVar3 == 0)) &&
        (iVar3 = nla_put_u64_64bit(iVar1,0x58,param_5,param_6,0xe5), iVar3 == 0)) &&
       ((param_1 != 0x37 || (iVar3 = nla_put_be32(iVar1,0x57,param_8), iVar3 == 0)))) {
      *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
      genlmsg_multicast_netns_constprop_37(iVar1,3,param_9);
      return;
    }
  }
  kfree_skb(iVar1);
  return;
}



/* ===== cfg80211_ready_on_channel @ 00021868 size=42 ===== */

void cfg80211_ready_on_channel(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = wiphy_to_rdev(*param_1,param_1);
  nl80211_send_remain_on_chan_event(0x37,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



/* ===== cfg80211_remain_on_channel_expired @ 00021892 size=42 ===== */

void cfg80211_remain_on_channel_expired(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = wiphy_to_rdev(*param_1,param_1);
  nl80211_send_remain_on_chan_event(0x38,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



/* ===== cfg80211_tx_mgmt_expired @ 000218bc size=42 ===== */

void cfg80211_tx_mgmt_expired(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = wiphy_to_rdev(*param_1,param_1);
  nl80211_send_remain_on_chan_event(0x43,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



/* ===== cfg80211_conn_failed @ 000218e6 size=148 ===== */

void cfg80211_conn_failed(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = param_2;
  uVar5 = param_3;
  wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  iVar1 = alloc_skb(0xf10,param_4);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x5b,uVar4,uVar5);
  if ((((iVar2 != 0) && (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_1 + 0xa8)), iVar3 == 0))
      && (iVar3 = nla_put(iVar1,6,6,param_2), iVar3 == 0)) &&
     (iVar3 = nla_put_be32(iVar1,0x9b,param_3), iVar3 == 0)) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,param_4);
    return;
  }
  kfree_skb(iVar1);
  return;
}



/* ===== __nl80211_unexpected_frame @ 0002197a size=146 ===== */

undefined4 __nl80211_unexpected_frame(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r2;
  undefined4 extraout_r3;
  int iVar5;
  undefined4 uVar6;
  
  uVar4 = param_2;
  uVar6 = param_3;
  iVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  iVar5 = *(int *)(extraout_r2 + 0xd4);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = alloc_skb(0x74,extraout_r3);
    if (iVar2 != 0) {
      iVar3 = nl80211hdr_put(iVar2,0,0,0,param_2,uVar4,uVar6);
      if ((((iVar3 == 0) ||
           (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 != 0)) ||
          (iVar1 = nla_put_be32(iVar2,3,*(undefined4 *)(param_1 + 0xa8)), iVar1 != 0)) ||
         (iVar1 = nla_put(iVar2,6,6,param_3), iVar1 != 0)) {
        kfree_skb(iVar2);
      }
      else {
        *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
        genlmsg_unicast_constprop_36(iVar2,iVar5);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== cfg80211_rx_spurious_frame @ 00021a0c size=32 ===== */

undefined4 cfg80211_rx_spurious_frame(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c4) + 4);
  if ((iVar2 != 3) && (iVar2 != 9)) {
    return 0;
  }
  uVar1 = __nl80211_unexpected_frame(param_1,0x53,param_2,param_3);
  return uVar1;
}



/* ===== cfg80211_rx_unexpected_4addr_frame @ 00021a2c size=34 ===== */

undefined4 cfg80211_rx_unexpected_4addr_frame(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c4) + 4);
  if ((1 < iVar2 - 3U) && (iVar2 != 9)) {
    return 0;
  }
  uVar1 = __nl80211_unexpected_frame(param_1,0x56,param_2,param_3);
  return uVar1;
}



/* ===== nl80211_frame_tx_status @ 00021a4e size=236 ===== */

void nl80211_frame_tx_status
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,int param_6,char param_7,undefined4 param_8,undefined1 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar1 = wiphy_to_rdev(*param_1);
  iVar4 = param_1[4];
  iVar2 = nlmsg_new(param_6 + 100,param_8);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = nl80211hdr_put(iVar2,0,0,0,param_9);
  if (((iVar3 != 0) && (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 == 0)) &&
     ((iVar4 == 0 || (iVar1 = nla_put_be32(iVar2,3,*(undefined4 *)(iVar4 + 0xa8)), iVar1 == 0)))) {
    uVar5 = wdev_id(param_1);
    iVar1 = nla_put_u64_64bit(iVar2,0x99,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xe5);
    if ((((iVar1 == 0) && (iVar1 = nla_put(iVar2,0x33,param_6,param_5), iVar1 == 0)) &&
        (iVar1 = nla_put_u64_64bit(iVar2,0x58,param_3,param_4,0xe5), iVar1 == 0)) &&
       ((param_7 == '\0' || (iVar1 = nla_put_flag(iVar2,0x5c), iVar1 == 0)))) {
      *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
      genlmsg_multicast_netns_constprop_37(iVar2,3,param_8);
      return;
    }
  }
  kfree_skb(iVar2);
  return;
}



/* ===== cfg80211_control_port_tx_status @ 00021b3a size=34 ===== */

void cfg80211_control_port_tx_status(void)

{
  nl80211_frame_tx_status();
  return;
}



/* ===== cfg80211_mgmt_tx_status @ 00021b5c size=34 ===== */

void cfg80211_mgmt_tx_status(void)

{
  nl80211_frame_tx_status();
  return;
}



/* ===== cfg80211_prepare_cqm @ 00021b7e size=136 ===== */

int cfg80211_prepare_cqm(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r2;
  
  iVar3 = param_2;
  iVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  iVar2 = alloc_skb(0xf00,extraout_r2);
  if (iVar2 != 0) {
    iVar3 = nl80211hdr_put(iVar2,0,0,0,0x40,iVar3);
    *(int *)(iVar2 + 0x18) = iVar3;
    if ((((iVar3 != 0) && (iVar3 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar3 == 0))
        && (iVar3 = nla_put_be32(iVar2,3,*(undefined4 *)(param_1 + 0xa8)), iVar3 == 0)) &&
       ((param_2 == 0 || (iVar3 = nla_put(iVar2,6,6,param_2), iVar3 == 0)))) {
      iVar3 = nla_nest_start_noflag(iVar2,0x5e);
      *(int *)(iVar2 + 0x1c) = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar2 + 0x20) = iVar1;
        return iVar2;
      }
    }
    kfree_skb(iVar2);
  }
  return 0;
}



/* ===== cfg80211_cqm_rssi_notify @ 00021c06 size=114 ===== */

void cfg80211_cqm_rssi_notify(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 *puVar4;
  ulonglong uVar5;
  int local_1c;
  
  puVar4 = *(undefined4 **)(param_1 + 0x1c4);
  iVar3 = param_1;
  local_1c = param_2;
  uVar5 = wiphy_to_rdev(*puVar4);
  if (0x1ffffffff < uVar5) {
    return;
  }
  if (puVar4[0x3a] != 0) {
    *(undefined4 *)(puVar4[0x3a] + 4) = extraout_r2;
    cfg80211_cqm_rssi_update((int)uVar5,param_1);
    if (param_3 == 0) {
      param_3 = *(int *)(puVar4[0x3a] + 4);
    }
  }
  iVar1 = cfg80211_prepare_cqm(param_1,0,param_4);
  if (iVar1 != 0) {
    iVar2 = nla_put_be32(iVar1,3,param_2);
    if ((iVar2 == 0) &&
       ((param_3 == 0 ||
        (local_1c = param_3, iVar3 = nla_put(iVar1,9,4,&local_1c,iVar3), iVar3 == 0)))) {
      cfg80211_send_cqm(iVar1,param_4);
    }
    else {
      kfree_skb(iVar1);
    }
    return;
  }
  return;
}



/* ===== cfg80211_cqm_txe_notify @ 00021c78 size=82 ===== */

void cfg80211_cqm_txe_notify
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = cfg80211_prepare_cqm(param_1,param_2,param_6);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nla_put_be32(iVar1,6,param_3);
  if (((iVar2 == 0) && (iVar2 = nla_put_be32(iVar1,5,param_4), iVar2 == 0)) &&
     (iVar2 = nla_put_be32(iVar1,7,param_5), iVar2 == 0)) {
    cfg80211_send_cqm(iVar1,param_6);
    return;
  }
  kfree_skb(iVar1);
  return;
}



/* ===== cfg80211_cqm_pktloss_notify @ 00021cca size=50 ===== */

void cfg80211_cqm_pktloss_notify
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = cfg80211_prepare_cqm(param_1,param_2,param_4);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nla_put_be32(iVar1,4,param_3);
  if (iVar2 != 0) {
    kfree_skb(iVar1);
    return;
  }
  cfg80211_send_cqm(iVar1,param_4);
  return;
}



/* ===== cfg80211_cqm_beacon_loss_notify @ 00021cfc size=48 ===== */

void cfg80211_cqm_beacon_loss_notify(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = cfg80211_prepare_cqm(param_1,0,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nla_put_flag(iVar1,8);
  if (iVar2 != 0) {
    kfree_skb(iVar1);
    return;
  }
  cfg80211_send_cqm(iVar1,param_2);
  return;
}



/* ===== cfg80211_gtk_rekey_notify @ 00021d2c size=192 ===== */

void cfg80211_gtk_rekey_notify(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  
  uVar5 = param_2;
  iVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  iVar2 = alloc_skb(0xf00,param_4);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = nl80211hdr_put(iVar2,0,0,0,0x4f,uVar5);
  if ((((iVar3 != 0) && (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 == 0))
      && (iVar1 = nla_put_be32(iVar2,3,*(undefined4 *)(param_1 + 0xa8)), iVar1 == 0)) &&
     (((iVar1 = nla_put(iVar2,6,6,param_2), iVar1 == 0 &&
       (psVar4 = (short *)nla_nest_start_noflag(iVar2,0x7a), psVar4 != (short *)0x0)) &&
      (iVar1 = nla_put(iVar2,3,8,param_3), iVar1 == 0)))) {
    *psVar4 = (short)*(undefined4 *)(iVar2 + 0x98) - (short)psVar4;
    *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar2,3,param_4);
    return;
  }
  kfree_skb(iVar2);
  return;
}



/* ===== cfg80211_pmksa_candidate_notify @ 00021dec size=212 ===== */

void cfg80211_pmksa_candidate_notify
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = param_2;
  uVar6 = param_3;
  iVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  iVar2 = alloc_skb(0xf00,param_5);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = nl80211hdr_put(iVar2,0,0,0,0x50,uVar5,uVar6);
  if (((((iVar3 != 0) && (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 == 0))
       && (iVar1 = nla_put_be32(iVar2,3,*(undefined4 *)(param_1 + 0xa8)), iVar1 == 0)) &&
      ((psVar4 = (short *)nla_nest_start_noflag(iVar2,0x86), psVar4 != (short *)0x0 &&
       (iVar1 = nla_put_be32(iVar2,1,param_2), iVar1 == 0)))) &&
     ((iVar1 = nla_put(iVar2,2,6,param_3), iVar1 == 0 &&
      ((param_4 == 0 || (iVar1 = nla_put_flag(iVar2,3), iVar1 == 0)))))) {
    *psVar4 = (short)*(undefined4 *)(iVar2 + 0x98) - (short)psVar4;
    *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar2,3,param_5);
    return;
  }
  kfree_skb(iVar2);
  return;
}



/* ===== cfg80211_sta_opmode_change_notify @ 00021ec0 size=224 ===== */

void cfg80211_sta_opmode_change_notify
               (int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = param_2;
  uVar4 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  if (((int)((ulonglong)uVar4 >> 0x20) == 0) || (iVar1 = alloc_skb(0xf00,param_4), iVar1 == 0)) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x80,uVar5);
  if ((((((iVar2 != 0) &&
         (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)((int)uVar4 + 0x38)), iVar3 == 0)) &&
        (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_1 + 0xa8)), iVar3 == 0)) &&
       (iVar3 = nla_put(iVar1,6,6,param_2), iVar3 == 0)) &&
      (((-1 < *param_3 << 0x1e || (iVar3 = nla_put_u8(iVar1,0xd5,(char)param_3[1]), iVar3 == 0)) &&
       ((-1 < *param_3 << 0x1f || (iVar3 = nla_put_be32(iVar1,0x9f,param_3[2]), iVar3 == 0)))))) &&
     ((-1 < *param_3 << 0x1d || (iVar3 = nla_put_u8(iVar1,0x106,(char)param_3[3]), iVar3 == 0)))) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,param_4);
    return;
  }
  kfree_skb(iVar1);
  return;
}



/* ===== cfg80211_probe_status @ 00021fa0 size=218 ===== */

void cfg80211_probe_status
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5,
               undefined4 param_6,char param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c [2];
  
  iVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  iVar2 = alloc_skb(0xf00,param_8);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = nl80211hdr_put(iVar2,0,0,0,0x54);
  if ((((iVar3 == 0) || (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 != 0))
      || (iVar1 = nla_put_be32(iVar2,3,*(undefined4 *)(param_1 + 0xa8)), iVar1 != 0)) ||
     (((iVar1 = nla_put(iVar2,6,6,param_2), iVar1 != 0 ||
       (iVar1 = nla_put_u64_64bit(iVar2,0x58,param_3,param_4,0xe5), iVar1 != 0)) ||
      ((param_5 != '\0' && (iVar1 = nla_put_flag(iVar2,0x5c), iVar1 != 0)))))) {
LAB_00021fe4:
    kfree_skb(iVar2);
  }
  else {
    if (param_7 != '\0') {
      local_2c[0] = param_6;
      iVar1 = nla_put(iVar2,0x107,4,local_2c);
      if (iVar1 != 0) goto LAB_00021fe4;
    }
    *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar2,3,param_8);
  }
  return;
}



/* ===== cfg80211_report_obss_beacon_khz @ 0002207a size=260 ===== */

void cfg80211_report_obss_beacon_khz
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_40 [2];
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  local_38 = param_5;
  local_30 = param_2;
  iVar1 = wiphy_to_rdev();
  *(int *)(((uint)local_40 & 0xffffe000) + 4) = *(int *)(((uint)local_40 & 0xffffe000) + 4) + 0x200;
  puVar6 = *(undefined4 **)(iVar1 + 0x50);
  iVar7 = (int)((longlong)param_4 * (longlong)DAT_00022180 >> 0x26) - (param_4 >> 0x1f);
  local_34 = param_4 + iVar7 * -1000;
  local_2c = param_3 + 100;
  while( true ) {
    uVar3 = DAT_00022184;
    if ((puVar6 == (undefined4 *)(iVar1 + 0x50)) ||
       (iVar2 = nlmsg_new(local_2c,0xa20), uVar3 = DAT_00022188, iVar2 == 0)) {
      __local_bh_enable_ip(uVar3,0x200);
      return;
    }
    local_40[0] = 0x3b;
    iVar4 = nl80211hdr_put(iVar2,0,0);
    if (((((iVar4 == 0) || (iVar5 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar5 != 0)
          ) || ((param_4 != 0 &&
                ((iVar5 = nla_put_be32(iVar2,0x26,iVar7), iVar5 != 0 ||
                 (iVar5 = nla_put_be32(iVar2,0x122,local_34), iVar5 != 0)))))) ||
        ((local_38 != 0 && (iVar5 = nla_put_be32(iVar2,0x97,local_38), iVar5 != 0)))) ||
       (iVar5 = nla_put(iVar2,0x33,param_3,local_30), iVar5 != 0)) break;
    *(int *)(iVar4 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar4 + -0x14);
    genlmsg_unicast_constprop_36(iVar2,puVar6[2]);
    puVar6 = (undefined4 *)*puVar6;
  }
  __local_bh_enable_ip(DAT_0002218c,0x200);
  kfree_skb(iVar2);
  return;
}



/* ===== cfg80211_report_wowlan_wakeup @ 00022190 size=610 ===== */

void cfg80211_report_wowlan_wakeup(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  int *local_38;
  
  uVar15 = wiphy_to_rdev(*param_1);
  iVar1 = (int)((ulonglong)uVar15 >> 0x20);
  if (iVar1 == 0) {
    iVar1 = 200;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x10) + 200;
  }
  iVar1 = nlmsg_new(iVar1,param_3);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x4a);
  if ((iVar2 != 0) &&
     (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)((int)uVar15 + 0x38)), iVar3 == 0)) {
    uVar15 = wdev_id(param_1);
    iVar3 = nla_put_u64_64bit(iVar1,0x99,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0xe5);
    if ((iVar3 == 0) &&
       ((param_1[4] == 0 ||
        (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_1[4] + 0xa8)), iVar3 == 0)))) {
      if (param_2 != (char *)0x0) {
        psVar4 = (short *)nla_nest_start_noflag(iVar1,0x75);
        if (((((psVar4 == (short *)0x0) ||
              ((*param_2 != '\0' && (iVar3 = nla_put_flag(iVar1,2), iVar3 != 0)))) ||
             ((param_2[1] != '\0' && (iVar3 = nla_put_flag(iVar1,3), iVar3 != 0)))) ||
            ((((param_2[2] != '\0' && (iVar3 = nla_put_flag(iVar1,6), iVar3 != 0)) ||
              ((param_2[3] != '\0' && (iVar3 = nla_put_flag(iVar1,7), iVar3 != 0)))) ||
             ((param_2[4] != '\0' && (iVar3 = nla_put_flag(iVar1,8), iVar3 != 0)))))) ||
           (((param_2[5] != '\0' && (iVar3 = nla_put_flag(iVar1,9), iVar3 != 0)) ||
            ((((-1 < *(int *)(param_2 + 0xc) && (iVar3 = nla_put_be32(iVar1,4), iVar3 != 0)) ||
              ((param_2[7] != '\0' && (iVar3 = nla_put_flag(iVar1,0xf), iVar3 != 0)))) ||
             (((param_2[8] != '\0' && (iVar3 = nla_put_flag(iVar1,0x10), iVar3 != 0)) ||
              ((param_2[9] != '\0' && (iVar3 = nla_put_flag(iVar1,0x11), iVar3 != 0))))))))))
        goto LAB_0002222e;
        if (*(int *)(param_2 + 0x18) != 0) {
          if (param_2[6] == '\0') {
            uVar10 = 0xd;
            uVar12 = 0xc;
          }
          else {
            uVar10 = 0xb;
            uVar12 = 10;
          }
          if (((*(int *)(param_2 + 0x14) != 0) && (iVar3 = nla_put_be32(iVar1,uVar10), iVar3 != 0))
             || (iVar3 = nla_put(iVar1,uVar12,*(undefined4 *)(param_2 + 0x10),
                                 *(undefined4 *)(param_2 + 0x18)), iVar3 != 0)) goto LAB_0002222e;
        }
        piVar14 = *(int **)(param_2 + 0x1c);
        if (piVar14 != (int *)0x0) {
          psVar5 = (short *)nla_nest_start_noflag(iVar1,0x13);
          if (psVar5 == (short *)0x0) goto LAB_0002222e;
          local_38 = piVar14;
          for (iVar3 = 0; local_38 = local_38 + 1, iVar3 < *piVar14; iVar3 = iVar3 + 1) {
            iVar13 = *local_38;
            psVar6 = (short *)nla_nest_start_noflag(iVar1,iVar3);
            if (psVar6 == (short *)0x0) break;
            iVar7 = nla_put(iVar1,0x34,*(undefined1 *)(iVar13 + 0x20),iVar13);
            if (iVar7 != 0) {
LAB_0002237c:
              nlmsg_trim(iVar1,psVar6);
              break;
            }
            if (*(int *)(iVar13 + 0x24) != 0) {
              psVar8 = (short *)nla_nest_start_noflag(iVar1,0x2c);
              if (psVar8 == (short *)0x0) goto LAB_0002237c;
              puVar11 = (undefined4 *)(iVar13 + 0x28);
              for (iVar7 = 0; iVar7 < *(int *)(iVar13 + 0x24); iVar7 = iVar7 + 1) {
                iVar9 = nla_put_be32(iVar1,iVar7,*puVar11);
                if (iVar9 != 0) {
                  nlmsg_trim(iVar1,psVar8);
                  goto LAB_0002237c;
                }
                puVar11 = puVar11 + 1;
              }
              *psVar8 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar8;
            }
            *psVar6 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar6;
          }
          *psVar5 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar5;
        }
        *psVar4 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar4;
      }
      *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
      genlmsg_multicast_netns_constprop_37(iVar1,3,param_3);
      return;
    }
  }
LAB_0002222e:
  kfree_skb(iVar1);
  return;
}



/* ===== cfg80211_tdls_oper_request @ 000223f2 size=188 ===== */

void cfg80211_tdls_oper_request
               (int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar4 = param_2;
  uVar5 = param_3;
  iVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  iVar2 = alloc_skb(0xf00,param_5);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = nl80211hdr_put(iVar2,0,0,0,0x51,uVar4,uVar5);
  if ((((iVar3 != 0) && (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 == 0))
      && (iVar1 = nla_put_be32(iVar2,3,*(undefined4 *)(param_1 + 0xa8)), iVar1 == 0)) &&
     (((iVar1 = nla_put_u8(iVar2,0x8a,param_3 & 0xff), iVar1 == 0 &&
       (iVar1 = nla_put(iVar2,6,6,param_2), iVar1 == 0)) &&
      ((param_4 == 0 || (iVar1 = nla_put_u16(iVar2,0x36,param_4), iVar1 == 0)))))) {
    *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar2,3,param_5);
    return;
  }
  kfree_skb(iVar2);
  return;
}



/* ===== cfg80211_ft_event @ 000224ae size=196 ===== */

void cfg80211_ft_event(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = param_2;
  uVar4 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  if ((*(int *)(iVar1 + 8) == 0) ||
     (iVar1 = nlmsg_new(*(int *)(iVar1 + 4) + *(int *)(iVar1 + 0x10) + 100,0xcc0), iVar1 == 0)) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x61,piVar5);
  if (((((iVar2 != 0) &&
        (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)((int)uVar4 + 0x38)), iVar3 == 0)) &&
       (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_1 + 0xa8)), iVar3 == 0)) &&
      ((iVar3 = nla_put(iVar1,6,6,param_2[2]), iVar3 == 0 &&
       ((*param_2 == 0 || (iVar3 = nla_put(iVar1,0x2a,param_2[1]), iVar3 == 0)))))) &&
     ((param_2[3] == 0 || (iVar3 = nla_put(iVar1,0xb2,param_2[4]), iVar3 == 0)))) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,0xcc0);
    return;
  }
  kfree_skb(iVar1);
  return;
}



/* ===== cfg80211_crit_proto_stopped @ 00022572 size=138 ===== */

void cfg80211_crit_proto_stopped(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar1 = wiphy_to_rdev(*param_1);
  iVar4 = *(int *)(iVar1 + 0xf8);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar1 + 0xf8) = 0;
    iVar2 = alloc_skb(0xf00);
    if (iVar2 != 0) {
      iVar3 = nl80211hdr_put(iVar2,0,0,0,99,param_2);
      if ((iVar3 != 0) && (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 == 0))
      {
        uVar5 = wdev_id(param_1);
        iVar1 = nla_put_u64_64bit(iVar2,0x99,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xe5);
        if (iVar1 == 0) {
          *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
          genlmsg_unicast_constprop_36(iVar2,iVar4);
          return;
        }
      }
      kfree_skb(iVar2);
      return;
    }
  }
  return;
}



/* ===== cfg80211_external_auth_request @ 000225fc size=202 ===== */

undefined4 cfg80211_external_auth_request(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = *(undefined4 **)(param_1 + 0x1c4);
  puVar6 = param_2;
  iVar1 = wiphy_to_rdev(*puVar5);
  if (puVar5[0x1a] == 0) {
    uVar4 = 0xffffffea;
  }
  else {
    iVar2 = alloc_skb(0xf00,extraout_r2);
    if (iVar2 == 0) {
      uVar4 = 0xfffffff4;
    }
    else {
      iVar3 = nl80211hdr_put(iVar2,0,0,0,0x7f,puVar6,param_3);
      if ((((iVar3 == 0) ||
           (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 != 0)) ||
          (iVar1 = nla_put_be32(iVar2,3,*(undefined4 *)(param_1 + 0xa8)), iVar1 != 0)) ||
         (((iVar1 = nla_put_be32(iVar2,0x4c,param_2[0xb]), iVar1 != 0 ||
           (iVar1 = nla_put_be32(iVar2,0x104,*param_2), iVar1 != 0)) ||
          ((iVar1 = nla_put(iVar2,0xf5,6,param_2 + 1), iVar1 != 0 ||
           (iVar1 = nla_put(iVar2,0x34,*(undefined1 *)((int)param_2 + 0x2a),(int)param_2 + 10),
           iVar1 != 0)))))) {
        uVar4 = 0xffffff97;
        kfree_skb(iVar2);
      }
      else {
        *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
        genlmsg_unicast_constprop_36(iVar2,puVar5[0x1a]);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



/* ===== cfg80211_update_owe_info_event @ 000226c6 size=170 ===== */

void cfg80211_update_owe_info_event(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  
  iVar3 = param_2;
  uVar4 = param_3;
  iVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  iVar2 = alloc_skb(0xf00,extraout_r2);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = nl80211hdr_put(iVar2,0,0,0,0x87,iVar3,uVar4);
  if ((((iVar3 != 0) && (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 == 0))
      && (iVar1 = nla_put_be32(iVar2,3,*(undefined4 *)(param_1 + 0xa8)), iVar1 == 0)) &&
     (((iVar1 = nla_put(iVar2,6,6,param_2), iVar1 == 0 && (*(int *)(param_2 + 0xc) != 0)) &&
      (iVar1 = nla_put(iVar2,0x2a,*(int *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8)), iVar1 == 0)
      ))) {
    *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar2,3,param_3);
    return;
  }
  genlmsg_cancel(iVar2,iVar3);
  kfree_skb(iVar2);
  return;
}



/* ===== nl80211_ch_switch_notify.constprop.20 @ 00022770 size=146 ===== */

void nl80211_ch_switch_notify_constprop_20
               (int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = alloc_skb(0xf00,0xcc0,param_3,param_4,param_1,param_2,param_3);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,param_3 & 0xff);
  if ((((iVar2 != 0) && (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_1 + 0xa8)), iVar3 == 0))
      && (iVar3 = nl80211_send_chandef(iVar1,param_2), iVar3 == 0)) &&
     ((param_3 != 0x6e || (iVar3 = nla_put_be32(iVar1,0xb7,param_4), iVar3 == 0)))) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,0xcc0);
    return;
  }
  kfree_skb(iVar1);
  return;
}



/* ===== cfg80211_ch_switch_started_notify @ 00022802 size=26 ===== */

void cfg80211_ch_switch_started_notify(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  
  wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4),param_2,*(undefined4 **)(param_1 + 0x1c4),param_3
               );
  nl80211_ch_switch_notify_constprop_20(param_1,extraout_r1,0x6e);
  return;
}



/* ===== cfg80211_ch_switch_notify @ 0002281c size=102 ===== */

void cfg80211_ch_switch_notify(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  puVar5 = *(undefined4 **)(param_1 + 0x1c4);
  uVar6 = wiphy_to_rdev(*puVar5);
  puVar1 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  puVar5[0x2b] = *puVar1;
  puVar5[0x2c] = uVar2;
  puVar5[0x2d] = uVar3;
  puVar5[0x2e] = uVar4;
  uVar2 = puVar1[5];
  uVar3 = puVar1[6];
  puVar5[0x2f] = puVar1[4];
  puVar5[0x30] = uVar2;
  puVar5[0x31] = uVar3;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  puVar5[0x24] = *param_2;
  puVar5[0x25] = uVar2;
  puVar5[0x26] = uVar3;
  puVar5[0x27] = uVar4;
  uVar2 = puVar1[5];
  uVar3 = puVar1[6];
  puVar5[0x28] = puVar1[4];
  puVar5[0x29] = uVar2;
  puVar5[0x2a] = uVar3;
  if (((puVar5[1] == 2) || (puVar5[1] == 8)) && (puVar5[0x23] != 0)) {
    cfg80211_update_assoc_bss_entry(puVar5,*param_2);
  }
  cfg80211_sched_dfs_chan_update((int)uVar6);
  nl80211_ch_switch_notify_constprop_20(param_1,param_2,0x58,0);
  return;
}



/* ===== cfg80211_rx_control_port @ 00022882 size=284 ===== */

bool cfg80211_rx_control_port(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  
  puVar7 = *(undefined4 **)(param_1 + 0x1c4);
  uVar9 = wiphy_to_rdev(*puVar7);
  iVar3 = (int)((ulonglong)uVar9 >> 0x20);
  iVar8 = puVar7[0x1a];
  uVar1 = *(ushort *)(iVar3 + 0x8e);
  iVar6 = *(int *)(iVar3 + 0xa0);
  uVar2 = *(ushort *)(iVar3 + 0x88);
  if (iVar8 == 0) {
    iVar3 = -2;
  }
  else {
    iVar3 = nlmsg_new(*(int *)(iVar3 + 0x50) + 100,0xa20);
    if (iVar3 == 0) {
      iVar3 = -0xc;
    }
    else {
      iVar4 = nl80211hdr_put(iVar3,0,0,0,0x81);
      if (((iVar4 != 0) &&
          (iVar5 = nla_put_be32(iVar3,1,*(undefined4 *)((int)uVar9 + 0x38)), iVar5 == 0)) &&
         (iVar5 = nla_put_be32(iVar3,3,*(undefined4 *)(param_1 + 0xa8)), iVar5 == 0)) {
        uVar9 = wdev_id(puVar7);
        iVar5 = nla_put_u64_64bit(iVar3,0x99,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xe5);
        if ((((iVar5 == 0) && (iVar6 = nla_put(iVar3,6,6,iVar6 + (uint)uVar1 + 6), iVar6 == 0)) &&
            ((iVar6 = nla_put_u16(iVar3,0x66,uVar2 << 8 | uVar2 >> 8), iVar6 == 0 &&
             ((param_3 == 0 || (iVar6 = nla_put_flag(iVar3,0x67), iVar6 == 0)))))) &&
           (iVar6 = nla_reserve(iVar3,0x33,*(undefined4 *)(param_2 + 0x50)), iVar6 != 0)) {
          skb_copy_bits(param_2,0,iVar6 + 4,*(undefined4 *)(param_2 + 0x50));
          *(int *)(iVar4 + -0x14) = *(int *)(iVar3 + 0x98) - (iVar4 + -0x14);
          iVar3 = genlmsg_unicast_constprop_36(iVar3,iVar8);
          goto LAB_00022978;
        }
      }
      kfree_skb(iVar3);
      iVar3 = -0x69;
    }
  }
LAB_00022978:
  return iVar3 == 0;
}



/* ===== nl80211_dump_survey @ 0002299e size=558 ===== */

int nl80211_dump_survey(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int *local_78;
  int local_74;
  int local_70 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  undefined1 local_2c;
  
  iVar5 = param_2[0xe];
  iVar1 = kmalloc_array_constprop_46(299,4);
  if (iVar1 == 0) {
    iVar2 = -0xc;
  }
  else {
    rtnl_lock();
    iVar2 = nl80211_prepare_wdev_dump(param_2,&local_78,&local_74);
    if (iVar2 == 0) {
      if (*(int *)(local_74 + 0x10) == 0) {
        iVar2 = -0x16;
      }
      else if (*(int *)(*local_78 + 0xdc) == 0) {
        iVar2 = -0x5f;
      }
      else {
        iVar6 = *(int *)(iVar1 + 0x368);
        while (iVar2 = (**(code **)(*local_78 + 0xdc))
                                 (local_78 + 0x68,*(undefined4 *)(local_74 + 0x10),iVar5,local_70),
              iVar2 != -2) {
          if (iVar2 != 0) goto LAB_00022b90;
          if ((local_70[0] == 0) || (-1 < *(int *)(local_70[0] + 0xc) << 0x1f)) {
            iVar2 = *(int *)(local_74 + 0x10);
            if ((local_70[0] != 0) || (iVar6 != 0)) {
              iVar3 = nl80211hdr_put(param_1,*(undefined4 *)(*param_2 + 0x24),
                                     *(undefined4 *)(param_2[1] + 8),2,0x33);
              if (iVar3 == 0) break;
              iVar2 = nla_put_be32(param_1,3,*(undefined4 *)(iVar2 + 0xa8));
              if (((((((iVar2 != 0) ||
                      (psVar4 = (short *)nla_nest_start_noflag(param_1,0x54), psVar4 == (short *)0x0
                      )) || ((local_70[0] != 0 &&
                             (iVar2 = nla_put_be32(param_1,1,*(undefined4 *)(local_70[0] + 4)),
                             iVar2 != 0)))) ||
                    (((((local_70[0] != 0 && (*(short *)(local_70[0] + 8) != 0)) &&
                       (iVar2 = nla_put_be32(param_1,0xc), iVar2 != 0)) ||
                      ((local_30 << 0x1f < 0 && (iVar2 = nla_put_u8(param_1,2,local_2c), iVar2 != 0)
                       ))) || ((local_30 << 0x1e < 0 &&
                               (iVar2 = nla_put_flag(param_1,3), iVar2 != 0)))))) ||
                   (((local_30 << 0x1d < 0 &&
                     (iVar2 = nla_put_u64_64bit(param_1,4,local_68,uStack_64,10), iVar2 != 0)) ||
                    (((local_30 << 0x1c < 0 &&
                      (iVar2 = nla_put_u64_64bit(param_1,5,local_60,uStack_5c,10), iVar2 != 0)) ||
                     ((local_30 << 0x1b < 0 &&
                      (iVar2 = nla_put_u64_64bit(param_1,6,local_58,uStack_54,10), iVar2 != 0)))))))
                   ) || ((local_30 << 0x1a < 0 &&
                         (iVar2 = nla_put_u64_64bit(param_1,7,local_50,uStack_4c,10), iVar2 != 0))))
                 || ((((local_30 << 0x19 < 0 &&
                       (iVar2 = nla_put_u64_64bit(param_1,8,local_48,uStack_44,10), iVar2 != 0)) ||
                      ((local_30 << 0x18 < 0 &&
                       (iVar2 = nla_put_u64_64bit(param_1,9,local_40,uStack_3c,10), iVar2 != 0))))
                     || ((local_30 << 0x17 < 0 &&
                         (iVar2 = nla_put_u64_64bit(param_1,0xb,local_38,uStack_34,10), iVar2 != 0))
                        )))) {
                genlmsg_cancel(param_1,iVar3);
                break;
              }
              *psVar4 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar4;
              *(int *)(iVar3 + -0x14) = *(int *)(param_1 + 0x98) - (iVar3 + -0x14);
            }
          }
          iVar5 = iVar5 + 1;
        }
        param_2[0xe] = iVar5;
        iVar2 = *(int *)(param_1 + 0x50);
      }
    }
LAB_00022b90:
    kfree(iVar1);
    rtnl_unlock();
  }
  return iVar2;
}



/* ===== nl80211_dump_scan @ 00022bcc size=824 ===== */

int nl80211_dump_scan(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 local_48 [2];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [2];
  
  local_3c = param_2[0xe];
  rtnl_lock();
  iVar1 = nl80211_prepare_wdev_dump(param_2,&local_30,local_2c);
  if (iVar1 == 0) {
    mutex_lock(local_2c[0] + 0x24);
    *(int *)(((uint)local_48 & 0xffffe000) + 4) =
         *(int *)(((uint)local_48 & 0xffffe000) + 4) + 0x200;
    if (local_3c == 0) {
      cfg80211_bss_expire(local_30);
    }
    param_2[10] = *(int *)(local_30 + 0x74);
    iVar1 = 0;
    for (piVar7 = *(int **)(local_30 + 0x68); iVar6 = local_2c[0], local_40 = local_30,
        piVar7 != (int *)(local_30 + 0x68); piVar7 = (int *)*piVar7) {
      local_38 = iVar1 + 1;
      if (local_3c < iVar1 + 1) {
        local_48[0] = 0x22;
        iVar2 = nl80211hdr_put(param_1,*(undefined4 *)(*param_2 + 0x24),
                               *(undefined4 *)(param_2[1] + 8),2);
        if (iVar2 != 0) {
          local_34 = iVar2 + -0x14;
          if ((param_2[9] != 0) && (param_2[9] != param_2[10])) {
            *(ushort *)(iVar2 + -0xe) = *(ushort *)(iVar2 + -0xe) | 0x10;
          }
          param_2[9] = param_2[10];
          iVar3 = nla_put_be32(param_1,0x2e,*(undefined4 *)(local_40 + 0x74));
          if ((iVar3 == 0) &&
             ((*(int *)(iVar6 + 0x10) == 0 ||
              (iVar3 = nla_put_be32(param_1,3,*(undefined4 *)(*(int *)(iVar6 + 0x10) + 0xa8)),
              iVar3 == 0)))) {
            uVar9 = wdev_id(iVar6);
            local_48[0] = 0xe5;
            iVar3 = nla_put_u64_64bit(param_1,0x99,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
            if (((iVar3 == 0) &&
                ((psVar4 = (short *)nla_nest_start_noflag(param_1,0x2f), psVar4 != (short *)0x0 &&
                 ((piVar7[0x1d] == 0 && *(short *)(piVar7 + 0x1e) == 0 ||
                  (iVar3 = nla_put(param_1,1,6,piVar7 + 0x1d), iVar3 == 0)))))) &&
               ((piVar7[0x16] == 0 || (iVar3 = nla_put_flag(param_1,0xe), iVar3 == 0)))) {
              puVar8 = (undefined4 *)piVar7[0x14];
              if (puVar8 != (undefined4 *)0x0) {
                local_48[0] = 0x10;
                iVar3 = nla_put_u64_64bit(param_1,3,*puVar8,puVar8[1]);
                if ((iVar3 != 0) ||
                   ((puVar8[4] != 0 &&
                    (iVar3 = nla_put(param_1,6,puVar8[4],(int)puVar8 + 0x15), iVar3 != 0))))
                goto LAB_00022ca4;
              }
              puVar8 = (undefined4 *)piVar7[0x15];
              if ((puVar8 != (undefined4 *)0x0) && (*(char *)(puVar8 + 5) != '\0')) {
                local_48[0] = 0x10;
                iVar3 = nla_put_u64_64bit(param_1,0xd,*puVar8,puVar8[1]);
                if ((iVar3 != 0) ||
                   ((puVar8[4] != 0 &&
                    (iVar3 = nla_put(param_1,0xb,puVar8[4],(int)puVar8 + 0x15), iVar3 != 0))))
                goto LAB_00022ca4;
              }
              if (((*(short *)(piVar7 + 0x1c) == 0) || (iVar3 = nla_put_u16(param_1,4), iVar3 == 0))
                 && ((((iVar3 = nla_put_u16(param_1,5,*(undefined2 *)((int)piVar7 + 0x72)),
                       iVar3 == 0 &&
                       (iVar3 = nla_put_be32(param_1,2,*(undefined4 *)(piVar7[0x12] + 4)),
                       iVar3 == 0)) &&
                      (iVar3 = nla_put_be32(param_1,0x14,*(undefined2 *)(piVar7[0x12] + 8)),
                      iVar3 == 0)) && (iVar3 = nla_put_be32(param_1,0xc,piVar7[0x13]), iVar3 == 0)))
                 ) {
                uVar5 = jiffies_to_msecs(*DAT_00022f08 - piVar7[10]);
                iVar3 = nla_put_be32(param_1,10,uVar5);
                if (iVar3 == 0) {
                  if (piVar7[0xe] != 0 || piVar7[0xf] != 0) {
                    local_48[0] = 0x10;
                    iVar3 = nla_put_u64_64bit(param_1,0x11);
                    if ((iVar3 != 0) || (iVar3 = nla_put(param_1,0x12,6,piVar7 + 0x10), iVar3 != 0))
                    goto LAB_00022ca4;
                  }
                  if (piVar7[8] != 0 || piVar7[9] != 0) {
                    local_48[0] = 0x10;
                    iVar3 = nla_put_u64_64bit(param_1,0xf);
                    if (iVar3 != 0) goto LAB_00022ca4;
                  }
                  if ((*(char *)((int)piVar7 + 0x7a) == '\0') ||
                     (iVar3 = nl80211_put_signal_part_11
                                        (param_1,*(char *)((int)piVar7 + 0x7a),(int)piVar7 + 0x7b,
                                         0x13), iVar3 != 0)) {
                    if (*(int *)(local_40 + 0x1dc) == 1) {
                      iVar3 = nla_put_be32(param_1,7,piVar7[0x1b]);
LAB_00022eb8:
                      if (iVar3 != 0) goto LAB_00022ca4;
                    }
                    else if (*(int *)(local_40 + 0x1dc) == 2) {
                      iVar3 = nla_put_u8(param_1,8,*(undefined1 *)(piVar7 + 0x1b));
                      goto LAB_00022eb8;
                    }
                    iVar3 = *(int *)(iVar6 + 4);
                    if ((iVar3 == 2) || (iVar3 == 8)) {
                      if (piVar7 == (int *)*(int *)(iVar6 + 0x8c)) {
                        uVar5 = 1;
                        goto LAB_00022ed8;
                      }
                    }
                    else if ((iVar3 == 1) && (piVar7 == (int *)*(int *)(iVar6 + 0x8c))) {
                      uVar5 = 2;
LAB_00022ed8:
                      iVar6 = nla_put_be32(param_1,9,uVar5);
                      if (iVar6 != 0) goto LAB_00022ca4;
                    }
                    *psVar4 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar4;
                    *(int *)(iVar2 + -0x14) = *(int *)(param_1 + 0x98) - local_34;
                    goto LAB_00022efe;
                  }
                }
              }
            }
          }
LAB_00022ca4:
          genlmsg_cancel(param_1,iVar2);
        }
        break;
      }
LAB_00022efe:
      iVar1 = local_38;
    }
    __local_bh_enable_ip(DAT_00022f04,0x200);
    mutex_unlock(local_2c[0] + 0x24);
    param_2[0xe] = iVar1;
    rtnl_unlock();
    iVar1 = *(int *)(param_1 + 0x50);
  }
  else {
    rtnl_unlock();
  }
  return iVar1;
}



/* ===== nl80211_prep_scan_msg.constprop.25 @ 00022f0c size=422 ===== */

undefined4
nl80211_prep_scan_msg_constprop_25(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  iVar1 = nl80211hdr_put(param_1,0,0,0,param_4,param_2,param_3);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar2 = nla_put_be32(param_1,1,*(undefined4 *)(param_2 + 0x38));
  if ((iVar2 == 0) &&
     ((*(int *)(param_3 + 0x10) == 0 ||
      (iVar2 = nla_put_be32(param_1,3,*(undefined4 *)(*(int *)(param_3 + 0x10) + 0xa8)), iVar2 == 0)
      ))) {
    uVar8 = wdev_id(param_3);
    iVar2 = nla_put_u64_64bit(param_1,0x99,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0xe5);
    if (iVar2 == 0) {
      piVar5 = *(int **)(param_2 + 0x7c);
      if ((piVar5 != (int *)0x0) &&
         (psVar3 = (short *)nla_nest_start_noflag(param_1,0x2d), psVar3 != (short *)0x0)) {
        for (iVar2 = 0; iVar2 < piVar5[1]; iVar2 = iVar2 + 1) {
          iVar4 = nla_put(param_1,iVar2,*(undefined1 *)(*piVar5 + iVar2 * 0x21 + 0x20));
          if (iVar4 != 0) goto LAB_0002309c;
        }
        *psVar3 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar3;
        if ((piVar5[7] & 0x2000U) == 0) {
          psVar3 = (short *)nla_nest_start_noflag(param_1,0x2c);
          if (psVar3 == (short *)0x0) goto LAB_0002309c;
          piVar7 = piVar5 + 0x1d;
          for (uVar6 = 0; uVar6 < (uint)piVar5[2]; uVar6 = uVar6 + 1) {
            iVar2 = nla_put_be32(param_1,uVar6,*(undefined4 *)(*piVar7 + 4));
            if (iVar2 != 0) goto LAB_0002309c;
            piVar7 = piVar7 + 1;
          }
        }
        else {
          psVar3 = (short *)nla_nest_start_noflag(param_1,0x8124);
          if (psVar3 == (short *)0x0) goto LAB_0002309c;
          piVar7 = piVar5 + 0x1d;
          for (uVar6 = 0; uVar6 < (uint)piVar5[2]; uVar6 = uVar6 + 1) {
            iVar2 = nla_put_be32(param_1,uVar6,
                                 *(int *)(*piVar7 + 4) * 1000 + (uint)*(ushort *)(*piVar7 + 8));
            if (iVar2 != 0) goto LAB_0002309c;
            piVar7 = piVar7 + 1;
          }
        }
        *psVar3 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar3;
        if (((piVar5[4] == 0) || (iVar2 = nla_put(param_1,0x2a,piVar5[5]), iVar2 == 0)) &&
           ((piVar5[7] == 0 || (iVar2 = nla_put_be32(param_1,0x9e), iVar2 == 0)))) {
          iVar2 = *(int *)(param_2 + 0x80);
          if (iVar2 == 0) {
            iVar2 = *(int *)(param_2 + 0x7c);
          }
          if ((*(int *)(iVar2 + 0x58) != 0 || *(int *)(iVar2 + 0x5c) != 0) &&
             (iVar4 = nla_put_u64_64bit(param_1,0xe9,*(int *)(iVar2 + 0x58),*(int *)(iVar2 + 0x5c),
                                        0x10), iVar4 == 0)) {
            nla_put(param_1,0xea,6,iVar2 + 0x60);
          }
        }
      }
LAB_0002309c:
      *(int *)(iVar1 + -0x14) = *(int *)(param_1 + 0x98) - (iVar1 + -0x14);
      return 0;
    }
  }
  genlmsg_cancel(param_1,iVar1);
  return 0xffffffa6;
}



/* ===== nl80211_send_regdom.constprop.26 @ 000230b2 size=168 ===== */

undefined4
nl80211_send_regdom_constprop_26
          (int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = nl80211hdr_put(param_1,*(undefined4 *)(*param_2 + 0x24),param_3,2,0x1f,param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if ((param_2[9] != 0) && (param_2[9] != param_2[10])) {
    *(ushort *)(iVar1 + -0xe) = *(ushort *)(iVar1 + -0xe) | 0x10;
  }
  param_2[9] = param_2[10];
  iVar2 = nl80211_put_regdom(param_5,param_1);
  if (iVar2 == 0) {
    if (param_4 == 0) {
      iVar2 = reg_last_request_cell_base();
      if (iVar2 != 0) {
        iVar2 = nla_put_be32(param_1,0x9a,1);
LAB_0002311e:
        if (iVar2 != 0) goto LAB_00023122;
      }
    }
    else {
      uVar3 = get_wiphy_idx(param_4);
      iVar2 = nla_put_be32(param_1,1,uVar3);
      if (iVar2 != 0) goto LAB_00023122;
      if (*(int *)(param_4 + 0x28) << 0x18 < 0) {
        iVar2 = nla_put_flag(param_1,0xd8);
        goto LAB_0002311e;
      }
    }
    *(int *)(iVar1 + -0x14) = *(int *)(param_1 + 0x98) - (iVar1 + -0x14);
    uVar3 = 0;
  }
  else {
LAB_00023122:
    genlmsg_cancel(param_1,iVar1);
    uVar3 = 0xffffffa6;
  }
  return uVar3;
}



/* ===== nl80211_get_reg_dump @ 0002315a size=132 ===== */

int nl80211_get_reg_dump(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_2 + 0x38);
  iVar7 = param_2;
  rtnl_lock();
  if (((*DAT_000231e0 == 0) || (iVar5 != 0)) ||
     (iVar4 = nl80211_send_regdom_constprop_26
                        (param_1,param_2,*(undefined4 *)(*(int *)(param_2 + 4) + 8),0,*DAT_000231e0,
                         iVar7,param_3), -1 < iVar4)) {
    puVar1 = DAT_000231e4;
    iVar4 = 1;
    for (puVar3 = (undefined4 *)*DAT_000231e4; puVar3 != puVar1; puVar3 = (undefined4 *)*puVar3) {
      iVar2 = get_wiphy_regdom(puVar3 + 0x67);
      iVar6 = iVar4;
      if (((iVar2 != 0) && (iVar6 = iVar4 + 1, iVar5 < iVar6)) &&
         (iVar2 = nl80211_send_regdom_constprop_26
                            (param_1,param_2,*(undefined4 *)(*(int *)(param_2 + 4) + 8),
                             puVar3 + 0x67,iVar2,iVar7,param_3), iVar2 < 0)) break;
      iVar4 = iVar6;
    }
    *(int *)(param_2 + 0x38) = iVar4;
    iVar4 = *(int *)(param_1 + 0x50);
  }
  rtnl_unlock();
  return iVar4;
}



/* ===== nl80211_parse_chandef @ 000231e8 size=410 ===== */

undefined4 nl80211_parse_chandef(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar7 = *(int *)(param_2 + 0x14);
  puVar6 = *(undefined4 **)(param_2 + 0x20);
  if (*(int *)(iVar7 + 0x98) == 0) {
    return 0xffffffea;
  }
  uVar8 = *(int *)(*(int *)(iVar7 + 0x98) + 4) * 1000;
  if (*(int *)(iVar7 + 0x488) != 0) {
    uVar8 = uVar8 + *(int *)(*(int *)(iVar7 + 0x488) + 4);
  }
  memset(param_3,0,0x1c);
  piVar1 = (int *)ieee80211_get_channel_khz(param_1 + 0x1a0,uVar8);
  uVar4 = DAT_00023384;
  param_3[1] = 0;
  param_3[3] = 0;
  uVar4 = (uint)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x26);
  param_3[2] = uVar4;
  *(short *)(param_3 + 6) = (short)uVar8 + (short)uVar4 * -1000;
  *param_3 = (int)piVar1;
  if ((piVar1 == (int *)0x0) || ((piVar1[3] & 1U) != 0)) {
    if (puVar6 == (undefined4 *)0x0) {
      return 0xffffffea;
    }
    *puVar6 = DAT_00023388;
    uVar5 = *(undefined4 *)(iVar7 + 0x98);
LAB_00023266:
    puVar6[1] = uVar5;
    puVar6[2] = 0;
    return 0xffffffea;
  }
  if (*(int *)(iVar7 + 0x9c) == 0) {
    if (*(int *)(iVar7 + 0x27c) != 0) {
      iVar9 = *(int *)(*(int *)(iVar7 + 0x27c) + 4);
      param_3[1] = iVar9;
      if ((*piVar1 == 4) &&
         (iVar2 = ieee80211_s1g_channel_width(piVar1,piVar1,1000,4,param_4), iVar2 != iVar9)) {
        if (puVar6 == (undefined4 *)0x0) {
          return 0xffffffea;
        }
        *puVar6 = DAT_00023398;
        puVar6[1] = *(undefined4 *)(iVar7 + 0x27c);
        puVar6[2] = 0;
        return 0xffffffea;
      }
      if (*(int *)(iVar7 + 0x280) != 0) {
        param_3[2] = *(int *)(*(int *)(iVar7 + 0x280) + 4);
        uVar3 = 0;
        if (*(int *)(iVar7 + 0x48c) != 0) {
          uVar3 = (undefined2)*(undefined4 *)(*(int *)(iVar7 + 0x48c) + 4);
        }
        *(undefined2 *)(param_3 + 6) = uVar3;
      }
      if (*(int *)(iVar7 + 0x284) != 0) {
        param_3[3] = *(int *)(*(int *)(iVar7 + 0x284) + 4);
      }
    }
LAB_00023318:
    iVar7 = *(int *)(*(int *)(param_2 + 0x14) + 0x460);
    if (iVar7 == 0) {
      param_3[5] = 0;
      *(undefined1 *)(param_3 + 4) = 0;
    }
    else {
      *(undefined1 *)(param_3 + 4) = *(undefined1 *)(iVar7 + 4);
      iVar7 = *(int *)(*(int *)(param_2 + 0x14) + 0x464);
      if (iVar7 != 0) {
        param_3[5] = (uint)*(byte *)(iVar7 + 4);
      }
    }
    iVar7 = cfg80211_chandef_valid(param_3);
    uVar5 = DAT_0002339c;
    if (((iVar7 != 0) &&
        (iVar7 = cfg80211_chandef_usable(param_1 + 0x1a0,param_3,1), uVar5 = DAT_000233a0,
        iVar7 != 0)) &&
       ((1 < param_3[1] - 6U || (uVar5 = DAT_000233a4, *(int *)(param_1 + 0x1c4) << 9 < 0)))) {
      return 0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = uVar5;
    }
  }
  else {
    if (*(uint *)(*(int *)(iVar7 + 0x9c) + 4) < 4) {
      cfg80211_chandef_create(param_3);
      if ((*(int *)(iVar7 + 0x280) == 0) || (param_3[2] == *(int *)(*(int *)(iVar7 + 0x280) + 4))) {
        if ((*(int *)(iVar7 + 0x284) != 0) && (*(int *)(*(int *)(iVar7 + 0x284) + 4) != 0)) {
          if (puVar6 == (undefined4 *)0x0) {
            return 0xffffffea;
          }
          *puVar6 = DAT_00023390;
          uVar5 = *(undefined4 *)(iVar7 + 0x284);
          goto LAB_00023266;
        }
        goto LAB_00023318;
      }
      if (puVar6 == (undefined4 *)0x0) {
        return 0xffffffea;
      }
      *puVar6 = DAT_0002338c;
      uVar5 = *(undefined4 *)(iVar7 + 0x280);
    }
    else {
      if (puVar6 == (undefined4 *)0x0) {
        return 0xffffffea;
      }
      *puVar6 = DAT_00023394;
      uVar5 = *(undefined4 *)(iVar7 + 0x9c);
    }
    puVar6[1] = uVar5;
    puVar6[2] = 0;
  }
  return 0xffffffea;
}



/* ===== nl80211_notify_radar_detection @ 000233a8 size=172 ===== */

int nl80211_notify_radar_detection(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar3 = *(int *)(param_2 + 0x18);
  puVar4 = *(undefined4 **)(*(int *)(param_2 + 0x1c) + 0x1c4);
  uVar2 = *puVar4;
  iVar1 = reg_get_dfs_region(uVar2);
  if (iVar1 == 0) {
    puVar4 = *(undefined4 **)(param_2 + 0x20);
    uVar2 = DAT_00023454;
  }
  else {
    iVar1 = nl80211_parse_chandef(iVar3,param_2,&local_34);
    if (iVar1 != 0) {
      if (*(undefined4 **)(param_2 + 0x20) == (undefined4 *)0x0) {
        return iVar1;
      }
      **(undefined4 **)(param_2 + 0x20) = DAT_00023458;
      return iVar1;
    }
    iVar1 = cfg80211_chandef_dfs_required(uVar2,&local_34,puVar4[1]);
    if (iVar1 < 0) {
      if (*(undefined4 **)(param_2 + 0x20) == (undefined4 *)0x0) {
        return iVar1;
      }
      **(undefined4 **)(param_2 + 0x20) = DAT_0002345c;
      return iVar1;
    }
    if (iVar1 != 0) {
      if (*(int *)(local_34 + 0x2c) == 1) {
        return 0;
      }
      cfg80211_set_dfs_state(uVar2,&local_34,1);
      cfg80211_sched_dfs_chan_update(iVar3);
      *(int *)(iVar3 + 0x130) = local_34;
      *(undefined4 *)(iVar3 + 0x134) = uStack_30;
      *(undefined4 *)(iVar3 + 0x138) = uStack_2c;
      *(undefined4 *)(iVar3 + 0x13c) = uStack_28;
      puVar4 = DAT_00023464;
      *(undefined4 *)(iVar3 + 0x140) = local_24;
      *(undefined4 *)(iVar3 + 0x144) = uStack_20;
      *(undefined4 *)(iVar3 + 0x148) = uStack_1c;
      queue_work_on(1,*puVar4,iVar3 + 0x14c);
      return 0;
    }
    puVar4 = *(undefined4 **)(param_2 + 0x20);
    uVar2 = DAT_00023460;
  }
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = uVar2;
  }
  return -0x16;
}



/* ===== nl80211_tdls_channel_switch @ 00023468 size=202 ===== */

int nl80211_tdls_channel_switch(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *local_44;
  uint local_40;
  
  piVar4 = *(int **)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  puVar3 = *(undefined4 **)(iVar5 + 0x1c4);
  memset(&local_44,0,0x1c);
  if (((*(int *)(*piVar4 + 0x170) == 0) || (-1 < piVar4[0x73] << 3)) ||
     ((puVar3[1] != 2 && (puVar3[1] != 8)))) {
    iVar5 = -0x5f;
  }
  else {
    if ((*(int *)(*(int *)(param_2 + 0x14) + 0x18) != 0) &&
       (*(int *)(*(int *)(param_2 + 0x14) + 0x358) != 0)) {
      iVar2 = nl80211_parse_chandef(piVar4,param_2,&local_44);
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((*local_44 != 0) || (local_40 < 2)) {
        iVar2 = cfg80211_reg_can_beacon_relax(piVar4 + 0x68,&local_44,puVar3[1]);
        if ((iVar2 != 0) &&
           (iVar2 = cfg80211_chandef_dfs_required(*puVar3,&local_44,puVar3[1]), iVar2 == 0)) {
          iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
          uVar1 = *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x358) + 4);
          mutex_lock(puVar3 + 9);
          iVar5 = (**(code **)(*piVar4 + 0x170))(piVar4 + 0x68,iVar5,iVar2 + 4,uVar1,&local_44);
          mutex_unlock(puVar3 + 9);
          return iVar5;
        }
      }
    }
    iVar5 = -0x16;
  }
  return iVar5;
}



/* ===== nl80211_channel_switch @ 00023532 size=512 ===== */

int nl80211_channel_switch(undefined4 param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_d8 [28];
  undefined1 auStack_bc [4];
  int local_b8;
  int local_a8;
  undefined1 local_9c;
  uint local_94;
  uint local_84;
  ushort *local_78;
  ushort *local_74;
  uint local_70;
  uint local_6c;
  undefined1 auStack_68 [68];
  undefined1 local_24;
  undefined1 local_23;
  char local_22;
  
  piVar10 = *(int **)(param_2 + 0x18);
  iVar11 = *(int *)(param_2 + 0x1c);
  puVar9 = *(undefined4 **)(iVar11 + 0x1c4);
  if ((*(int *)(*piVar10 + 0x15c) == 0) || (-1 < piVar10[0x71] << 8)) {
LAB_000235a4:
    return -0x5f;
  }
  switch(puVar9[1]) {
  case 1:
    cVar1 = *(char *)(puVar9 + 0x16);
    break;
  default:
    goto LAB_000235a4;
  case 3:
  case 9:
    if (puVar9[0x34] == 0) {
      return -0x6b;
    }
    bVar3 = false;
    bVar2 = true;
    goto LAB_00023588;
  case 7:
    cVar1 = *(char *)((int)puVar9 + 0x59);
  }
  if (cVar1 == '\0') {
    return -0x6b;
  }
  bVar3 = true;
  bVar2 = false;
LAB_00023588:
  memset(auStack_d8,0,0xb8);
  iVar5 = *(int *)(param_2 + 0x14);
  local_9c = 0xff;
  if (*(int *)(iVar5 + 0x98) == 0) {
    return -0x16;
  }
  if (*(int *)(iVar5 + 0x2dc) == 0) {
    return -0x16;
  }
  if ((bVar2) && (*(int *)(iVar5 + 0x2e4) == 0)) {
    return -0x16;
  }
  uVar7 = *(uint *)(*(int *)(iVar5 + 0x2dc) + 4);
  if (0xff < uVar7) {
    return -0x16;
  }
  local_22 = (char)uVar7;
  if (bVar2) {
    iVar4 = nl80211_parse_beacon(piVar10,iVar5,auStack_68);
    iVar5 = DAT_00023748;
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = nla_parse_nested_deprecated
                      (DAT_00023748,0x12a,*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x2e4),
                       DAT_00023744,*(undefined4 *)(param_2 + 0x20));
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = nl80211_parse_beacon(piVar10,iVar5,auStack_bc);
    if (iVar4 != 0) {
      return iVar4;
    }
    puVar6 = *(ushort **)(iVar5 + 0x2e8);
    if (puVar6 == (ushort *)0x0) {
      return -0x16;
    }
    local_70 = *puVar6 - 4;
    if (local_70 == 0) {
      return -0x16;
    }
    if ((int)((uint)*puVar6 * -0x80000000) < 0) {
      return -0x16;
    }
    uVar7 = (uint)*(byte *)((int)piVar10 + 0x456);
    local_70 = local_70 >> 1;
    if ((uVar7 != 0) && (uVar7 < local_70)) {
      return -0x16;
    }
    local_78 = puVar6 + 2;
    puVar6 = puVar6 + 1;
    puVar8 = puVar6 + local_70;
    while (puVar8 != puVar6) {
      puVar6 = puVar6 + 1;
      if (local_94 <= *puVar6) {
        return -0x16;
      }
      if (*(char *)(local_b8 + (uint)*puVar6) != local_22) {
        return -0x16;
      }
    }
    puVar6 = *(ushort **)(iVar5 + 0x2ec);
    if (puVar6 != (ushort *)0x0) {
      local_6c = *puVar6 - 4;
      if (local_6c == 0) {
        return -0x16;
      }
      if ((int)((uint)*puVar6 * -0x80000000) < 0) {
        return -0x16;
      }
      local_6c = local_6c >> 1;
      if ((uVar7 != 0) && (uVar7 < local_6c)) {
        return -0x16;
      }
      local_74 = puVar6 + 2;
      puVar6 = puVar6 + 1;
      puVar8 = puVar6 + local_6c;
      while (puVar6 != puVar8) {
        puVar6 = puVar6 + 1;
        if (local_84 <= *puVar6) {
          return -0x16;
        }
        if (*(char *)(local_a8 + (uint)*puVar6) != local_22) {
          return -0x16;
        }
      }
    }
  }
  iVar5 = nl80211_parse_chandef(piVar10,param_2,auStack_d8);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = cfg80211_reg_can_beacon_relax(piVar10 + 0x68,auStack_d8,puVar9[1]);
  if (iVar5 != 0) {
    iVar5 = cfg80211_chandef_dfs_required(*puVar9,auStack_d8,puVar9[1]);
    if (iVar5 < 0) {
      return iVar5;
    }
    if (((iVar5 == 0) || (local_24 = 1, !bVar3)) ||
       (*(int *)(*(int *)(param_2 + 0x14) + 0x2fc) != 0)) {
      if (*(int *)(*(int *)(param_2 + 0x14) + 0x2e0) != 0) {
        local_23 = 1;
      }
      mutex_lock(puVar9 + 9);
      iVar11 = (**(code **)(*piVar10 + 0x15c))(piVar10 + 0x68,iVar11,auStack_d8);
      mutex_unlock(puVar9 + 9);
      return iVar11;
    }
  }
  return -0x16;
}



/* ===== nl80211_start_radar_detection @ 0002374c size=210 ===== */

int nl80211_start_radar_detection(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  
  piVar2 = *(int **)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  piVar4 = *(int **)(iVar5 + 0x1c4);
  iVar3 = *piVar4;
  iVar1 = reg_get_dfs_region(iVar3);
  if (iVar1 != 0) {
    iVar1 = nl80211_parse_chandef(piVar2,param_2,&local_3c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((-1 < *(int *)(iVar5 + 0x28) << 0x1d) || (*(char *)((int)piVar4 + 0xdd) != '\0')) {
      return -0x10;
    }
    iVar1 = cfg80211_chandef_dfs_required(iVar3,&local_3c,piVar4[1]);
    if (iVar1 < 0) {
      return iVar1;
    }
    if ((iVar1 != 0) && (iVar1 = cfg80211_chandef_dfs_usable(iVar3,&local_3c), iVar1 != 0)) {
      if (((int)((uint)*(byte *)(iVar3 + 0x33) << 0x1e) < 0) || (*(int *)(*piVar2 + 0x144) == 0)) {
        return -0x5f;
      }
      iVar3 = cfg80211_chandef_dfs_cac_time(piVar2 + 0x68,&local_3c);
      iVar1 = 60000;
      if (iVar3 != 0) {
        iVar1 = iVar3;
      }
      if (*(code **)(*piVar2 + 0x144) == (code *)0x0) {
        return DAT_00023824;
      }
      iVar3 = (**(code **)(*piVar2 + 0x144))(piVar2 + 0x68,iVar5,&local_3c,iVar1);
      if (iVar3 != 0) {
        return iVar3;
      }
      piVar4[0x2b] = local_3c;
      piVar4[0x2c] = iStack_38;
      piVar4[0x2d] = iStack_34;
      piVar4[0x2e] = iStack_30;
      piVar4[0x2f] = local_2c;
      piVar4[0x30] = iStack_28;
      piVar4[0x31] = iStack_24;
      *(undefined1 *)((int)piVar4 + 0xdd) = 1;
      piVar4[0x38] = *DAT_00023820;
      piVar4[0x39] = iVar1;
      return 0;
    }
  }
  return -0x16;
}



/* ===== nl80211_join_ocb @ 00023828 size=46 ===== */

void nl80211_join_ocb(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [28];
  
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  memset(auStack_2c,0,0x1c);
  iVar1 = nl80211_parse_chandef(uVar2,param_2,auStack_2c);
  if (iVar1 == 0) {
    cfg80211_join_ocb(uVar2,uVar3,auStack_2c);
  }
  return;
}



/* ===== nl80211_join_mesh @ 00023856 size=618 ===== */

int nl80211_join_mesh(undefined4 param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_208 [4];
  int local_204;
  int local_200;
  undefined2 *local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  undefined1 auStack_1e4 [11];
  undefined1 local_1d9;
  int *local_194 [7];
  short *local_178;
  char local_174;
  undefined1 local_173;
  undefined1 local_172;
  undefined1 local_171;
  undefined1 local_170;
  undefined2 *local_16c;
  char local_168;
  undefined1 local_167;
  undefined1 local_166;
  bool local_165;
  byte local_164;
  undefined2 local_162;
  undefined1 auStack_160 [20];
  undefined1 auStack_14c [4];
  undefined1 auStack_148 [300];
  undefined1 local_1c;
  undefined1 local_1b;
  
  iVar6 = *(int *)(param_2 + 0x18);
  iVar7 = *(int *)(param_2 + 0x1c);
  memcpy(auStack_1e4,DAT_00023ac0,0x50);
  memcpy(local_194,DAT_00023ac4,0x17c);
  if ((*(int *)(*(int *)(param_2 + 0x14) + 0x8c) != 0) &&
     (iVar4 = nl80211_parse_mesh_config(param_2,auStack_1e4,0), iVar4 != 0)) {
    return iVar4;
  }
  psVar3 = *(short **)(*(int *)(param_2 + 0x14) + 0x60);
  if (psVar3 == (short *)0x0) {
    return -0x16;
  }
  if (*psVar3 == 4) {
    return -0x16;
  }
  local_178 = psVar3 + 2;
  local_174 = (char)*psVar3 + -4;
  iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x1ac);
  if ((iVar4 != 0) &&
     (iVar4 = nl80211_parse_mcast_rate(iVar6,auStack_160,*(undefined4 *)(iVar4 + 4)), iVar4 == 0)) {
    return -0x16;
  }
  iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x30);
  if (iVar4 != 0) {
    uVar2 = *(uint *)(iVar4 + 4);
    local_162 = (undefined2)uVar2;
    iVar4 = cfg80211_validate_beacon_int(iVar6,7,uVar2 & 0xffff);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x34);
  if ((iVar4 != 0) && (local_164 = *(byte *)(iVar4 + 4), 99 < local_164 - 1)) {
    return -0x16;
  }
  iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x1c0);
  if (iVar4 == 0) {
LAB_000238d2:
    if (local_165 == false) goto LAB_000238dc;
  }
  else {
    iVar5 = *(int *)(param_2 + 0x18);
    iVar4 = nla_parse_nested_deprecated
                      (auStack_208,8,iVar4,DAT_00023ac8,*(undefined4 *)(param_2 + 0x20));
    if (iVar4 != 0) {
      return -0x16;
    }
    if (local_1f0 != 0) {
      if (*(char *)(local_1f0 + 4) == '\0') {
        local_173 = 1;
      }
      else {
        local_173 = 0xff;
      }
    }
    if (local_204 != 0) {
      if (*(char *)(local_204 + 4) == '\0') {
        local_172 = 1;
      }
      else {
        local_172 = 0xff;
      }
    }
    if (local_200 != 0) {
      if (*(char *)(local_200 + 4) == '\0') {
        local_171 = 1;
      }
      else {
        local_171 = 0xff;
      }
    }
    if (local_1fc != (undefined2 *)0x0) {
      local_16c = local_1fc + 2;
      local_168 = (char)*local_1fc + -4;
    }
    if ((local_1ec != 0) && (-1 < *(int *)(iVar5 + 0x1cc) << 0xf)) {
      return -0x16;
    }
    local_167 = local_1f8 != 0;
    local_166 = local_1f4 != 0;
    local_165 = (bool)local_166 || local_1ec != 0;
    if (local_1e8 == 0) goto LAB_000238d2;
    if (!(bool)local_166 && local_1ec == 0) {
      return -0x16;
    }
    local_170 = *(undefined1 *)(local_1e8 + 4);
  }
  local_1d9 = 0;
LAB_000238dc:
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x98) == 0) {
    local_194[0] = (int *)0x0;
  }
  else {
    iVar4 = nl80211_parse_chandef(iVar6,param_2,local_194);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  puVar1 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x90);
  if (puVar1 != (ushort *)0x0) {
    if (local_194[0] == (int *)0x0) {
      return -0x16;
    }
    iVar4 = ieee80211_get_ratemask
                      (*(undefined4 *)(iVar6 + *local_194[0] * 4 + 0x274),puVar1 + 2,*puVar1 - 4,
                       auStack_14c);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x168) != 0) {
    iVar4 = nl80211_parse_tx_bitrate_mask(param_2,*(int *)(param_2 + 0x14),0x5a,auStack_148,iVar7);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (local_194[0] == (int *)0x0) {
      return -0x16;
    }
    iVar4 = validate_beacon_tx_rate(iVar6,*local_194[0],auStack_148);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  local_1c = *(int *)(*(int *)(param_2 + 0x14) + 0x2fc) != 0;
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x420) != 0) {
    iVar4 = validate_pae_over_nl80211(iVar6,param_2);
    if (iVar4 < 0) {
      return iVar4;
    }
    local_1b = 1;
  }
  mutex_lock(*(int *)(iVar7 + 0x1c4) + 0x24);
  iVar6 = __cfg80211_join_mesh(iVar6,iVar7,local_194,auStack_1e4);
  if ((iVar6 == 0) && (*(int *)(*(int *)(param_2 + 0x14) + 0x330) != 0)) {
    *(undefined4 *)(*(int *)(iVar7 + 0x1c4) + 0x68) = *(undefined4 *)(param_2 + 4);
  }
  mutex_unlock(*(int *)(iVar7 + 0x1c4) + 0x24);
  return iVar6;
}



/* ===== __nl80211_set_channel @ 00023acc size=200 ===== */

int __nl80211_set_channel(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1c4);
  }
  iVar1 = nl80211_can_set_dev_channel(iVar2);
  if (iVar1 == 0) {
    iVar1 = -0x5f;
  }
  else {
    if (iVar2 == 0) {
      uVar3 = 6;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 4);
    }
    iVar1 = nl80211_parse_chandef(param_1,param_3,&local_3c);
    if (iVar1 == 0) {
      switch(uVar3) {
      case 3:
      case 9:
        iVar1 = cfg80211_reg_can_beacon_relax(param_1 + 0x68,&local_3c,uVar3);
        if (iVar1 != 0) {
          if (*(int *)(iVar2 + 0xd0) != 0) {
            if ((((param_2 == 0) || (*(code **)(*param_1 + 0x164) == (code *)0x0)) ||
                (-1 < param_1[0x73] << 0xd)) || (local_3c != *(int *)(iVar2 + 0x90))) {
              return -0x10;
            }
            iVar1 = (**(code **)(*param_1 + 0x164))(param_1 + 0x68,param_2,&local_3c);
            if (iVar1 != 0) {
              return iVar1;
            }
          }
          *(int *)(iVar2 + 0x90) = local_3c;
          *(undefined4 *)(iVar2 + 0x94) = uStack_38;
          *(undefined4 *)(iVar2 + 0x98) = uStack_34;
          *(undefined4 *)(iVar2 + 0x9c) = uStack_30;
          *(undefined4 *)(iVar2 + 0xa0) = local_2c;
          *(undefined4 *)(iVar2 + 0xa4) = uStack_28;
          *(undefined4 *)(iVar2 + 0xa8) = uStack_24;
          return 0;
        }
      default:
        iVar1 = -0x16;
        break;
      case 6:
        iVar1 = cfg80211_set_monitor_channel(param_1,&local_3c);
        break;
      case 7:
        iVar1 = cfg80211_set_mesh_channel(param_1,iVar2,&local_3c);
      }
    }
  }
  return iVar1;
}



/* ===== nl80211_set_channel @ 00023b9c size=8 ===== */

void nl80211_set_channel(undefined4 param_1,int param_2)

{
  __nl80211_set_channel(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),param_2);
  return;
}



/* ===== nl80211_set_wiphy @ 00023ba4 size=918 ===== */

/* WARNING: Control flow encountered bad instruction data */

int * nl80211_set_wiphy(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 uVar20;
  int iVar21;
  undefined1 auStack_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  rtnl_is_locked();
  iVar10 = *(int *)(*(int *)(param_2 + 0x14) + 0xc);
  if (((iVar10 == 0) ||
      (iVar10 = __dev_get_by_index(DAT_00023eb0,*(undefined4 *)(iVar10 + 4)), iVar10 == 0)) ||
     (puVar16 = *(undefined4 **)(iVar10 + 0x1c4), puVar16 == (undefined4 *)0x0)) {
    piVar5 = (int *)__cfg80211_rdev_from_attrs_constprop_29(*(undefined4 *)(param_2 + 0x14));
    if ((int *)0xfffff000 < piVar5) {
      return piVar5;
    }
    puVar16 = (undefined4 *)0x0;
    iVar10 = 0;
  }
  else {
    piVar5 = (int *)wiphy_to_rdev(*puVar16);
  }
  iVar7 = *(int *)(*(int *)(param_2 + 0x14) + 8);
  if ((iVar7 != 0) && (piVar6 = (int *)cfg80211_dev_rename(piVar5,iVar7 + 4), piVar6 != (int *)0x0))
  {
    return piVar6;
  }
  uVar3 = DAT_00023eb4;
  puVar14 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x94);
  if (puVar14 != (ushort *)0x0) {
    if (*(int *)(*piVar5 + 0x88) == 0) {
      return (int *)0xffffffa1;
    }
    if (iVar10 == 0) {
      return (int *)0xffffffea;
    }
    iVar7 = *(int *)(*(int *)(iVar10 + 0x1c4) + 4);
    if ((iVar7 != 3) && (iVar7 != 9)) {
      return (int *)0xffffffea;
    }
    if (-1 < *(int *)(iVar10 + 0x28) << 0x1f) {
      return (int *)0xffffff9c;
    }
    iVar7 = nla_ok(puVar14 + 2,*puVar14 - 4);
    if (iVar7 != 0) {
      piVar5 = (int *)nla_parse_nested_deprecated
                                (auStack_40,5,puVar14 + 2,uVar3,*(undefined4 *)(param_2 + 0x20));
      if (piVar5 != (int *)0x0) {
        return piVar5;
      }
      if (local_3c == 0) {
        return (int *)0xffffffea;
      }
      if (local_38 == 0) {
        return (int *)0xffffffea;
      }
      if (local_34 == 0) {
        return (int *)0xffffffea;
      }
      if (local_30 == 0) {
        return (int *)0xffffffea;
      }
      if (local_2c == 0) {
        return (int *)0xffffffea;
      }
      if (3 < *(byte *)(local_3c + 4)) {
        return (int *)0xffffffea;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x98) != 0) {
    iVar7 = nl80211_can_set_dev_channel(puVar16);
    if (iVar7 == 0) {
      iVar10 = 0;
    }
    piVar6 = (int *)__nl80211_set_channel(piVar5,iVar10,param_2);
    if (piVar6 != (int *)0x0) {
      return piVar6;
    }
  }
  iVar10 = *(int *)(*(int *)(param_2 + 0x14) + 0x184);
  if (iVar10 != 0) {
    if ((piVar5[0x73] & 0x200U) == 0) {
      puVar16 = (undefined4 *)0x0;
    }
    if (*(code **)(*piVar5 + 200) == (code *)0x0) {
      return (int *)0xffffffa1;
    }
    iVar21 = *(int *)(*(int *)(param_2 + 0x14) + 0x188);
    iVar7 = *(int *)(iVar10 + 4);
    iVar10 = iVar7;
    if (iVar21 == 0) {
      if (iVar7 != 0) {
        return (int *)0xffffffea;
      }
    }
    else if (iVar7 != 0) {
      iVar10 = *(int *)(iVar21 + 4);
    }
    piVar6 = (int *)(**(code **)(*piVar5 + 200))(piVar5 + 0x68,puVar16,iVar7,iVar10);
    if (piVar6 != (int *)0x0) {
      return piVar6;
    }
  }
  iVar10 = *(int *)(*(int *)(param_2 + 0x14) + 0x1a4);
  if ((iVar10 != 0) && (iVar7 = *(int *)(*(int *)(param_2 + 0x14) + 0x1a8), iVar7 != 0)) {
    uVar8 = piVar5[0x94];
    if ((uVar8 == 0) && (piVar5[0x95] == 0)) {
      return (int *)0xffffffa1;
    }
    if (*(code **)(*piVar5 + 0x110) == (code *)0x0) {
      return (int *)0xffffffa1;
    }
    uVar13 = *(uint *)(iVar10 + 4);
    uVar11 = *(uint *)(iVar7 + 4);
    if ((uVar13 != 0xffffffff) && ((uVar13 & ~uVar8) != 0)) {
      return (int *)0xffffffea;
    }
    if ((uVar11 != 0xffffffff) && ((uVar11 & ~piVar5[0x95]) != 0)) {
      return (int *)0xffffffea;
    }
    piVar6 = (int *)(**(code **)(*piVar5 + 0x110))
                              (piVar5 + 0x68,uVar8 & uVar13,uVar11 & piVar5[0x95]);
    if (piVar6 != (int *)0x0) {
      return piVar6;
    }
  }
  iVar7 = *(int *)(param_2 + 0x14);
  iVar10 = *(int *)(iVar7 + 0xf4);
  if (iVar10 != 0) {
    uVar4 = *(undefined1 *)(iVar10 + 4);
  }
  else {
    uVar4 = 0;
  }
  uVar8 = (uint)(iVar10 != 0);
  if (*(int *)(iVar7 + 0xf8) == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(undefined1 *)(*(int *)(iVar7 + 0xf8) + 4);
    uVar8 = uVar8 | 2;
  }
  uVar11 = 0;
  if (*(int *)(iVar7 + 0xfc) != 0) {
    uVar11 = *(uint *)(*(int *)(iVar7 + 0xfc) + 4);
    if (uVar11 < 0x100) {
      return (int *)0xffffffea;
    }
    uVar8 = uVar8 | 4;
    if (uVar11 != 0xffffffff) {
      uVar11 = uVar11 & 0xfffffffe;
    }
  }
  if (*(int *)(iVar7 + 0x100) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar7 + 0x100) + 4);
    uVar8 = uVar8 | 8;
  }
  if (*(int *)(iVar7 + 0x164) == 0) {
    uVar9 = 0;
    if (*(int *)(iVar7 + 0x344) != 0) {
      if (-1 < piVar5[0x73] << 8) {
        return (int *)0xffffffa1;
      }
      uVar8 = uVar8 | 0x20;
      uVar9 = 0;
    }
  }
  else {
    if (*(int *)(iVar7 + 0x344) != 0) {
      return (int *)0xffffffea;
    }
    uVar9 = *(undefined1 *)(*(int *)(iVar7 + 0x164) + 4);
    uVar8 = uVar8 | 0x10;
  }
  if (*(int *)(iVar7 + 0x428) == 0) {
    iVar21 = 0;
  }
  else {
    if (-1 < (int)((uint)*(byte *)((int)piVar5 + 0x1d3) << 0x1b)) {
      return (int *)0xffffffa1;
    }
    iVar21 = *(int *)(*(int *)(iVar7 + 0x428) + 4);
    uVar8 = uVar8 | 0x40;
  }
  iVar15 = 0;
  if (*(int *)(iVar7 + 0x42c) != 0) {
    if (-1 < (int)((uint)*(byte *)((int)piVar5 + 0x1d3) << 0x1b)) {
      return (int *)0xffffffa1;
    }
    iVar15 = *(int *)(*(int *)(iVar7 + 0x42c) + 4);
    uVar8 = uVar8 | 0x80;
  }
  if (*(int *)(iVar7 + 0x430) == 0) {
    iVar7 = 0;
    if (uVar8 == 0) {
      return (int *)0x0;
    }
  }
  else {
    if (-1 < (int)((uint)*(byte *)((int)piVar5 + 0x1d3) << 0x1b)) {
      return (int *)0xffffffa1;
    }
    iVar7 = *(int *)(*(int *)(iVar7 + 0x430) + 4);
    uVar8 = uVar8 | 0x100;
  }
  if (*(int *)(*piVar5 + 0xc4) == 0) {
    return (int *)0xffffffa1;
  }
  iVar17 = piVar5[0x85];
  iVar1 = piVar5[0x84];
  iVar2 = piVar5[0x87];
  iVar18 = piVar5[0x86];
  if ((uVar8 & 1) != 0) {
    *(undefined1 *)(piVar5 + 0x84) = uVar4;
  }
  if ((int)(uVar8 << 0x1e) < 0) {
    *(undefined1 *)((int)piVar5 + 0x211) = uVar20;
  }
  iVar19 = piVar5[0x118];
  if ((int)(uVar8 << 0x1d) < 0) {
    piVar5[0x85] = uVar11;
  }
  if ((int)(uVar8 << 0x1c) < 0) {
    piVar5[0x86] = iVar10;
  }
  iVar10 = piVar5[0x119];
  if ((int)(uVar8 << 0x1b) < 0) {
    *(undefined1 *)(piVar5 + 0x87) = uVar9;
  }
  if ((int)(uVar8 << 0x19) < 0) {
    piVar5[0x118] = iVar21;
  }
  if ((int)(uVar8 << 0x18) < 0) {
    piVar5[0x119] = iVar15;
  }
  iVar21 = piVar5[0x11a];
  if ((int)(uVar8 << 0x17) < 0) {
    piVar5[0x11a] = iVar7;
  }
  pcVar12 = *(code **)(*piVar5 + 0xc4);
  if (pcVar12 == (code *)0x0) {
    piVar6 = (int *)0xffffffa1;
  }
  else {
    piVar6 = (int *)(*pcVar12)(piVar5 + 0x68);
    if (piVar6 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  *(short *)(piVar5 + 0x84) = (short)iVar1;
  *(char *)(piVar5 + 0x87) = (char)iVar2;
  piVar5[0x85] = iVar17;
  piVar5[0x11a] = iVar21;
  piVar5[0x86] = iVar18;
  piVar5[0x118] = iVar19;
  piVar5[0x119] = iVar10;
  return piVar6;
}



/* ===== nl80211_tx_mgmt @ 00023f6c size=468 ===== */

int nl80211_tx_mgmt(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_5c [7];
  int local_40;
  char local_3c;
  uint local_38;
  ushort *local_34;
  uint local_30;
  undefined1 local_2c;
  char local_2b;
  uint local_28;
  ushort *local_24;
  
  piVar6 = (int *)param_2[6];
  iVar7 = param_2[7];
  memset(&local_40,0,0x20);
  iVar5 = param_2[5];
  local_2b = *(int *)(iVar5 + 0x238) != 0;
  if (*(int *)(iVar5 + 0xcc) == 0) {
    return -0x16;
  }
  if ((*(int *)(*piVar6 + 0xf4) == 0) || (10 < *(uint *)(iVar7 + 4))) {
    return -0x5f;
  }
  uVar2 = 1 << (*(uint *)(iVar7 + 4) & 0xff);
  if ((uVar2 & 0x39e) == 0) {
    if (-1 < (int)(uVar2 << 0x15)) {
      return -0x5f;
    }
    if (*(int *)(iVar5 + 0x98) == 0) {
      return -0x16;
    }
  }
  if (*(int *)(iVar5 + 0x15c) != 0) {
    if (-1 < piVar6[0x71] << 0xb) {
      return -0x16;
    }
    local_38 = *(uint *)(*(int *)(iVar5 + 0x15c) + 4);
    if (local_38 < 10) {
      return -0x16;
    }
    if (*(ushort *)(piVar6 + 0x93) < local_38) {
      return -0x16;
    }
  }
  local_3c = *(int *)(iVar5 + 0x1b0) != 0;
  if (((bool)local_3c) && (-1 < piVar6[0x71] << 0xb)) {
    return -0x16;
  }
  local_2c = *(int *)(iVar5 + 0x21c) != 0;
  local_5c[0] = 0;
  if (*(int *)(iVar5 + 0x98) == 0) {
LAB_00024004:
    if (local_3c != '\0') {
      return -0x16;
    }
  }
  else {
    iVar5 = nl80211_parse_chandef(piVar6,param_2,local_5c);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (local_5c[0] == 0) goto LAB_00024004;
  }
  iVar5 = iVar7 + 0x24;
  mutex_lock(iVar5);
  if ((local_3c != '\0') && (iVar1 = cfg80211_off_channel_oper_allowed(iVar7), iVar1 == 0)) {
    mutex_unlock(iVar5);
    return -0x10;
  }
  mutex_unlock(iVar5);
  puVar3 = *(ushort **)(param_2[5] + 0xcc);
  local_34 = puVar3 + 2;
  puVar4 = *(ushort **)(param_2[5] + 0x334);
  local_30 = *puVar3 - 4;
  if (puVar4 != (ushort *)0x0) {
    if ((*puVar4 - 4 & 1) != 0) {
      return -0x16;
    }
    local_24 = puVar4 + 2;
    puVar3 = puVar4 + 1;
    local_28 = *puVar4 - 4 >> 1;
    for (iVar5 = 0; iVar5 < (int)local_28; iVar5 = iVar5 + 1) {
      puVar3 = puVar3 + 1;
      if (local_30 <= *puVar3) {
        return -0x16;
      }
    }
  }
  if (local_2b == '\0') {
    iVar5 = alloc_skb(0xf00,0xcc0);
    if (iVar5 == 0) {
      return -0xc;
    }
    iVar1 = nl80211hdr_put(iVar5,param_2[1],*param_2,0,0x3b);
    if (iVar1 != 0) goto LAB_000240ea;
  }
  else {
    iVar5 = 0;
    iVar1 = 0;
LAB_000240ea:
    local_40 = local_5c[0];
    iVar7 = cfg80211_mlme_mgmt_tx(piVar6,iVar7,&local_40,&local_68);
    if (iVar7 != 0) goto LAB_000240b6;
    if (iVar5 == 0) {
      return 0;
    }
    iVar7 = nla_put_u64_64bit(iVar5,0x58,local_68,uStack_64,0xe5);
    if (iVar7 == 0) {
      *(int *)(iVar1 + -0x14) = *(int *)(iVar5 + 0x98) - (iVar1 + -0x14);
      iVar5 = genlmsg_reply(iVar5,param_2);
      return iVar5;
    }
  }
  iVar7 = -0x69;
LAB_000240b6:
  kfree_skb(iVar5);
  return iVar7;
}



/* ===== nl80211_remain_on_channel @ 00024140 size=332 ===== */

int nl80211_remain_on_channel(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  short local_24;
  
  piVar5 = (int *)param_2[6];
  iVar4 = param_2[7];
  if ((*(int *)(param_2[5] + 0x98) == 0) || (iVar2 = *(int *)(param_2[5] + 0x15c), iVar2 == 0)) {
    return -0x16;
  }
  uVar6 = *(uint *)(iVar2 + 4);
  if ((*(int *)(*piVar5 + 0xec) == 0) || (-1 < piVar5[0x71] << 10)) {
    return -0x5f;
  }
  if (uVar6 < 10) {
    return -0x16;
  }
  if (*(ushort *)(piVar5 + 0x93) < uVar6) {
    return -0x16;
  }
  iVar2 = nl80211_parse_chandef(piVar5,param_2,&local_3c);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar3 = iVar4 + 0x24;
  mutex_lock(iVar3);
  iVar2 = cfg80211_off_channel_oper_allowed(iVar4);
  if (((iVar2 == 0) &&
      ((((*(int *)(iVar4 + 0xac) != local_3c || (*(int *)(iVar4 + 0xb0) != local_38)) ||
        (*(int *)(iVar4 + 0xb4) != local_34)) ||
       ((*(short *)(iVar4 + 0xc4) != local_24 || (*(int *)(iVar4 + 0xb8) != local_30)))))) &&
     (piVar1 = (int *)cfg80211_chandef_compatible(iVar4 + 0xac,&local_3c), &local_3c != piVar1)) {
    mutex_unlock(iVar3);
    return -0x10;
  }
  mutex_unlock(iVar3);
  iVar2 = alloc_skb(0xf00,0xcc0);
  if (iVar2 == 0) {
    return -0xc;
  }
  iVar3 = nl80211hdr_put(iVar2,param_2[1],*param_2,0,0x37);
  if (iVar3 != 0) {
    iVar4 = (**(code **)(*piVar5 + 0xec))(piVar5 + 0x68,iVar4,local_3c,uVar6,&local_48);
    if (iVar4 != 0) goto LAB_00024272;
    iVar4 = nla_put_u64_64bit(iVar2,0x58,local_48,uStack_44,0xe5);
    if (iVar4 == 0) {
      *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
      iVar4 = genlmsg_reply(iVar2,param_2);
      return iVar4;
    }
  }
  iVar4 = -0x69;
LAB_00024272:
  kfree_skb(iVar2);
  return iVar4;
}



/* ===== nl80211_join_ibss @ 0002428c size=666 ===== */

void nl80211_join_ibss(undefined4 param_1,int param_2)

{
  int *piVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  short *psVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  char local_ad;
  undefined2 *local_ac;
  int local_a8;
  int *local_a4;
  uint local_a0;
  undefined2 *local_88;
  char local_84;
  char local_83;
  undefined2 local_82;
  undefined1 auStack_80 [4];
  undefined1 local_7c;
  char local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 auStack_74 [20];
  undefined4 local_60 [2];
  undefined2 local_58 [9];
  undefined4 uStack_46;
  undefined2 local_42 [15];
  int local_24;
  undefined4 *puVar8;
  
  piVar1 = DAT_00024528;
  piVar14 = *(int **)(param_2 + 0x18);
  iVar16 = *(int *)(param_2 + 0x1c);
  local_24 = *DAT_00024528;
  memset(&local_ac,0,0x88);
  psVar5 = *(short **)(*(int *)(param_2 + 0x14) + 0xd0);
  if ((psVar5 != (short *)0x0) && (*psVar5 != 4)) {
    iVar9 = *(int *)(*(int *)(param_2 + 0x14) + 0x30);
    local_82 = 100;
    if (iVar9 != 0) {
      local_82 = (undefined2)*(undefined4 *)(iVar9 + 4);
    }
    uVar13 = cfg80211_validate_beacon_int(piVar14,1,local_82);
    if (uVar13 != 0) goto LAB_0002444c;
    if ((*(int *)(*piVar14 + 0xb8) == 0) || (*(int *)(*(int *)(iVar16 + 0x1c4) + 4) != 1)) {
      uVar13 = 0xffffffa1;
      goto LAB_0002444c;
    }
    iVar9 = *(int *)(param_2 + 0x14);
    iVar10 = *(int *)(iVar9 + 0x18);
    if (iVar10 != 0) {
      local_a8 = iVar10 + 4;
      if ((*(int *)(iVar10 + 4) << 0x1f < 0) ||
         (*(short *)(iVar10 + 8) == 0 && *(int *)(iVar10 + 4) == 0)) goto LAB_000242b2;
    }
    local_ac = *(undefined2 **)(iVar9 + 0xd0) + 2;
    local_84 = (char)**(undefined2 **)(iVar9 + 0xd0) + -4;
    puVar11 = *(undefined2 **)(iVar9 + 0xa8);
    if (puVar11 != (undefined2 *)0x0) {
      local_88 = puVar11 + 2;
      local_83 = (char)*puVar11 + -4;
    }
    uVar13 = nl80211_parse_chandef(piVar14,param_2,&local_a4);
    if (uVar13 != 0) goto LAB_0002444c;
    iVar9 = cfg80211_reg_can_beacon(piVar14 + 0x68,&local_a4,1);
    if ((iVar9 != 0) && (local_a0 < 8)) {
      uVar13 = 1 << (local_a0 & 0xff);
      if ((uVar13 & 0xc1) == 0) {
        if ((uVar13 & 0x38) == 0) {
          if ((uVar13 & 6) != 0) {
            uVar13 = piVar14[0x73] & 2;
LAB_00024360:
            if (uVar13 != 0) goto LAB_00024362;
          }
        }
        else if (piVar14[0x73] << 0x1e < 0) {
          uVar13 = *(byte *)(piVar14 + 0x74) & 1;
          goto LAB_00024360;
        }
      }
      else {
LAB_00024362:
        iVar9 = *(int *)(param_2 + 0x14);
        puVar2 = *(ushort **)(iVar9 + 0x90);
        local_7c = *(int *)(iVar9 + 0xf0) != 0;
        local_7b = *(int *)(iVar9 + 0x118) != 0;
        if ((puVar2 != (ushort *)0x0) &&
           (uVar13 = ieee80211_get_ratemask
                               (piVar14[*local_a4 + 0x9d],puVar2 + 2,*puVar2 - 4,auStack_80),
           uVar13 != 0)) goto LAB_0002444c;
        iVar10 = *(int *)(param_2 + 0x14);
        iVar9 = *(int *)(iVar10 + 0x250);
        if (iVar9 != 0) {
          puVar4 = &uStack_46;
          puVar7 = (undefined4 *)(iVar9 + 4);
          do {
            puVar8 = puVar7 + 1;
            puVar12 = puVar4 + 1;
            *puVar4 = *puVar7;
            puVar4 = puVar12;
            puVar7 = puVar8;
          } while (puVar8 != (undefined4 *)(iVar9 + 0x1c));
          *(undefined2 *)puVar12 = *(undefined2 *)puVar8;
        }
        iVar6 = *(int *)(iVar10 + 0x7c);
        if (iVar6 != 0) {
          if (iVar9 == 0) goto LAB_000242b2;
          puVar4 = local_60;
          puVar7 = (undefined4 *)(iVar6 + 4);
          do {
            puVar12 = puVar7 + 2;
            uVar3 = puVar7[1];
            *puVar4 = *puVar7;
            puVar4[1] = uVar3;
            puVar4 = puVar4 + 2;
            puVar7 = puVar12;
          } while (puVar12 != (undefined4 *)(iVar6 + 0x1c));
          *(undefined2 *)puVar4 = *(undefined2 *)puVar12;
        }
        if ((*(int *)(iVar10 + 0x1ac) == 0) ||
           (iVar9 = nl80211_parse_mcast_rate
                              (piVar14,auStack_74,*(undefined4 *)(*(int *)(iVar10 + 0x1ac) + 4)),
           iVar9 != 0)) {
          uVar15 = 0;
          if ((local_7b != '\0') && (uVar15 = 0, *(int *)(*(int *)(param_2 + 0x14) + 0x144) != 0)) {
            local_ad = '\0';
            uVar13 = nl80211_parse_connkeys(piVar14,param_2,&local_ad);
            if (0xfffff000 < uVar13) goto LAB_0002444c;
            uVar15 = uVar13;
            if ((local_a0 != 0) && (local_ad != '\0')) {
              kfree_sensitive();
              goto LAB_000242b2;
            }
          }
          local_7a = *(int *)(*(int *)(param_2 + 0x14) + 0x110) != 0;
          if (*(int *)(*(int *)(param_2 + 0x14) + 0x420) != 0) {
            uVar13 = validate_pae_over_nl80211(piVar14,param_2);
            if ((int)uVar13 < 0) {
              kfree_sensitive(uVar15);
              goto LAB_0002444c;
            }
            local_79 = 1;
          }
          local_78 = *(int *)(*(int *)(param_2 + 0x14) + 0x2fc) != 0;
          mutex_lock(*(int *)(iVar16 + 0x1c4) + 0x24);
          uVar13 = __cfg80211_join_ibss(piVar14,iVar16,&local_ac,uVar15);
          if (uVar13 == 0) {
            if (*(int *)(*(int *)(param_2 + 0x14) + 0x330) != 0) {
              *(undefined4 *)(*(int *)(iVar16 + 0x1c4) + 0x68) = *(undefined4 *)(param_2 + 4);
            }
          }
          else {
            kfree_sensitive(uVar15);
          }
          mutex_unlock(*(int *)(iVar16 + 0x1c4) + 0x24);
          goto LAB_0002444c;
        }
      }
    }
  }
LAB_000242b2:
  uVar13 = 0xffffffea;
LAB_0002444c:
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}



/* ===== nl80211_start_ap @ 0002452c size=1360 ===== */

void nl80211_start_ap(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 local_29c [4];
  int local_298;
  ushort *local_294;
  ushort *local_290;
  int local_28c;
  int local_288;
  int local_284;
  undefined4 *local_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int local_270;
  int iStack_26c;
  int iStack_268;
  undefined1 auStack_264 [4];
  undefined4 local_260;
  undefined4 local_23c;
  undefined4 local_220;
  undefined4 local_21c;
  ushort *local_218;
  uint local_214;
  undefined4 local_210;
  undefined1 auStack_20c [76];
  undefined1 local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  char local_1b0;
  undefined1 local_1af;
  uint local_1ac;
  undefined1 local_1a8;
  undefined1 auStack_1a4 [300];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_65;
  uint local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  byte local_5d;
  byte local_5c;
  undefined4 local_5b;
  undefined4 local_57;
  undefined4 local_53;
  undefined4 local_4f;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  ushort *puStack_3c;
  undefined4 local_38;
  int local_34;
  ushort *local_30;
  int local_2c;
  
  piVar1 = DAT_000247d8;
  piVar6 = *(int **)(param_2 + 0x18);
  iVar8 = *(int *)(param_2 + 0x1c);
  local_2c = *DAT_000247d8;
  iVar7 = *(int *)(iVar8 + 0x1c4);
  if (((*(int *)(iVar7 + 4) != 3) && (*(int *)(iVar7 + 4) != 9)) || (*(int *)(*piVar6 + 0x30) == 0))
  {
LAB_00024a74:
    uVar4 = 0xffffffa1;
    goto LAB_000246f4;
  }
  if (*(int *)(iVar7 + 0xd0) != 0) {
    uVar4 = 0xffffff8e;
    goto LAB_000246f4;
  }
  memset(&local_280,0,0x254);
  iVar2 = *(int *)(param_2 + 0x14);
  if (((*(int *)(iVar2 + 0x30) != 0) && (*(int *)(iVar2 + 0x34) != 0)) &&
     (*(int *)(iVar2 + 0x38) != 0)) {
    uVar4 = nl80211_parse_beacon(piVar6,iVar2,auStack_264);
    if (uVar4 != 0) goto LAB_000246f4;
    local_220 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x30) + 4);
    local_21c = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x34) + 4);
    uVar4 = cfg80211_validate_beacon_int(piVar6,*(undefined4 *)(*(int *)(iVar8 + 0x1c4) + 4));
    if (uVar4 != 0) goto LAB_000246f4;
    iVar2 = *(int *)(param_2 + 0x14);
    puVar3 = *(ushort **)(iVar2 + 0xd0);
    if (puVar3 != (ushort *)0x0) {
      local_218 = puVar3 + 2;
      local_214 = *puVar3 - 4;
      if (local_214 == 0) goto LAB_00024576;
    }
    if (*(int *)(iVar2 + 0x1f8) != 0) {
      local_210 = *(undefined4 *)(*(int *)(iVar2 + 0x1f8) + 4);
    }
    local_1c0 = *(int *)(iVar2 + 0x118) != 0;
    if (*(int *)(iVar2 + 0xd4) == 0) {
      local_1bc = 8;
    }
    else {
      local_1bc = *(uint *)(*(int *)(iVar2 + 0xd4) + 4);
      if (((7 < local_1bc) ||
          ((-1 < (int)((uint)*(byte *)((int)piVar6 + 0x1d6) << 0x1c) && (local_1bc == 4)))) ||
         (local_1bc - 5 < 3)) goto LAB_00024576;
    }
    uVar4 = nl80211_crypto_settings(piVar6,param_2,auStack_20c,5);
    if (uVar4 != 0) goto LAB_000246f4;
    iVar2 = *(int *)(param_2 + 0x14);
    if (*(int *)(iVar2 + 600) != 0) {
      if (-1 < piVar6[0x73] << 0x1d) goto LAB_00024a74;
      local_1b4 = (uint)*(ushort *)(*(int *)(iVar2 + 600) + 4);
    }
    if (((*(int *)(iVar2 + 0x288) == 0) ||
        ((*(int *)(*(int *)(iVar8 + 0x1c4) + 4) == 9 &&
         ((local_1b0 = *(char *)(*(int *)(iVar2 + 0x288) + 4), local_1b0 == '\0' ||
          (piVar6[0x73] << 0x14 < 0)))))) &&
       ((*(int *)(iVar2 + 0x28c) == 0 ||
        ((*(int *)(*(int *)(iVar8 + 0x1c4) + 4) == 9 &&
         ((local_1af = *(char *)(*(int *)(iVar2 + 0x28c) + 4) != '\0', !(bool)local_1af ||
          (piVar6[0x73] << 0x13 < 0)))))))) {
      if (*(int *)(iVar2 + 0x98) == 0) {
        if (*(int *)(iVar7 + 0x90) == 0) {
          for (piVar5 = (int *)piVar6[0x10e]; piVar5 != piVar6 + 0x10e; piVar5 = (int *)*piVar5) {
            if (((piVar5[-1] == 3) || (piVar5[-1] == 9)) && (piVar5[0x22] != 0)) {
              local_280 = (undefined4 *)piVar5[0x22];
              iStack_27c = piVar5[0x23];
              iStack_278 = piVar5[0x24];
              iStack_274 = piVar5[0x25];
              local_270 = piVar5[0x26];
              iStack_26c = piVar5[0x27];
              iStack_268 = piVar5[0x28];
              goto LAB_00024658;
            }
          }
          goto LAB_00024576;
        }
        local_280 = *(undefined4 **)(iVar7 + 0x90);
        iStack_27c = *(int *)(iVar7 + 0x94);
        iStack_278 = *(int *)(iVar7 + 0x98);
        iStack_274 = *(int *)(iVar7 + 0x9c);
        local_270 = *(int *)(iVar7 + 0xa0);
        iStack_26c = *(int *)(iVar7 + 0xa4);
        iStack_268 = *(int *)(iVar7 + 0xa8);
      }
      else {
        uVar4 = nl80211_parse_chandef(piVar6,param_2,&local_280);
        if (uVar4 != 0) goto LAB_000246f4;
      }
LAB_00024658:
      piVar5 = piVar6 + 0x68;
      iVar2 = cfg80211_reg_can_beacon_relax(piVar5,&local_280,*(undefined4 *)(iVar7 + 4));
      if (iVar2 != 0) {
        if ((*(int *)(*(int *)(param_2 + 0x14) + 0x168) != 0) &&
           ((uVar4 = nl80211_parse_tx_bitrate_mask
                               (param_2,*(int *)(param_2 + 0x14),0x5a,auStack_1a4,iVar8), uVar4 != 0
            || (uVar4 = validate_beacon_tx_rate(piVar6,*local_280,auStack_1a4), uVar4 != 0))))
        goto LAB_000246f4;
        iVar2 = *(int *)(param_2 + 0x14);
        if (*(int *)(iVar2 + 0x354) == 0) {
          local_1b8 = 0;
        }
        else {
          local_1b8 = (uint)*(byte *)(*(int *)(iVar2 + 0x354) + 4);
          if (local_1b8 == 1) {
            uVar4 = piVar6[0x73] & 0x1000000;
          }
          else {
            if (local_1b8 == 0) goto LAB_00024794;
            if (local_1b8 != 2) goto LAB_00024576;
            uVar4 = piVar6[0x73] & 0x2000000;
          }
          if (uVar4 == 0) goto LAB_00024576;
        }
LAB_00024794:
        local_1a8 = *(int *)(iVar2 + 0x388) != 0;
        if (((bool)local_1a8) && (piVar6[0x9f] == 0)) goto LAB_00024a74;
        if (*(int *)(iVar2 + 0x294) != 0) {
          if (*(short *)((int)piVar6 + 0x1c2) == 0) {
            uVar4 = 0xffffffa1;
          }
          else {
            uVar4 = parse_acl_data_part_10(piVar5,param_2);
          }
          local_1ac = uVar4;
          if (0xfffff000 < uVar4) goto LAB_000246f4;
        }
        iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x45c);
        local_65 = *(int *)(*(int *)(param_2 + 0x14) + 0x458) != 0;
        if (iVar2 == 0) {
LAB_0002486a:
          iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x46c);
          if (iVar2 != 0) {
            uVar4 = nla_parse_nested_constprop_40(local_29c,3,iVar2,DAT_00024a88);
            if (uVar4 != 0) goto LAB_00024a66;
            if (local_298 == 0) goto LAB_00024a62;
            local_4b = *(undefined1 *)(local_298 + 4);
            local_4a = local_294 == (ushort *)0x0;
            local_49 = local_290 != (ushort *)0x0;
          }
          iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x498);
          if (iVar2 == 0) {
LAB_000248f8:
            iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x49c);
            if (iVar2 == 0) {
LAB_0002493a:
              iVar2 = cfg80211_find_ie(1,local_260,local_23c);
              if (iVar2 != 0) {
                nl80211_check_ap_rate_selectors_part_1(&local_280,iVar2);
              }
              iVar2 = cfg80211_find_ie(0x32,local_260,local_23c);
              if (iVar2 != 0) {
                nl80211_check_ap_rate_selectors_part_1(&local_280,iVar2);
              }
              iVar2 = cfg80211_find_ie(0x2d,local_260,local_23c);
              if ((iVar2 != 0) && (0x19 < *(byte *)(iVar2 + 1))) {
                local_78 = iVar2 + 2;
              }
              iVar2 = cfg80211_find_ie(0xbf,local_260,local_23c);
              if ((iVar2 != 0) && (0xb < *(byte *)(iVar2 + 1))) {
                local_74 = iVar2 + 2;
              }
              local_29c[0] = 0x23;
              iVar2 = cfg80211_find_elem_match(0xff,local_260,local_23c,local_29c,1,0);
              if ((iVar2 != 0) && (0x11 < *(byte *)(iVar2 + 1))) {
                local_70 = iVar2 + 3;
              }
              local_29c[0] = 0x24;
              iVar2 = cfg80211_find_elem_match(0xff,local_260,local_23c,local_29c,1,0);
              if ((iVar2 != 0) && (6 < *(byte *)(iVar2 + 1))) {
                local_6c = iVar2 + 3;
              }
              if (*(int *)(*(int *)(param_2 + 0x14) + 0x414) != 0) {
                local_64 = local_64 | 1;
              }
              mutex_lock(iVar7 + 0x24);
              uVar4 = (**(code **)(*piVar6 + 0x30))(piVar5,iVar8,&local_280);
              if (uVar4 == 0) {
                *(undefined4 **)(iVar7 + 0x90) = local_280;
                *(int *)(iVar7 + 0x94) = iStack_27c;
                *(int *)(iVar7 + 0x98) = iStack_278;
                *(int *)(iVar7 + 0x9c) = iStack_274;
                *(int *)(iVar7 + 0xa0) = local_270;
                *(int *)(iVar7 + 0xa4) = iStack_26c;
                *(int *)(iVar7 + 0xa8) = iStack_268;
                *(undefined4 *)(iVar7 + 0xd0) = local_220;
                *(undefined4 **)(iVar7 + 0xac) = local_280;
                *(int *)(iVar7 + 0xb0) = iStack_27c;
                *(int *)(iVar7 + 0xb4) = iStack_278;
                *(int *)(iVar7 + 0xb8) = iStack_274;
                *(int *)(iVar7 + 0xbc) = local_270;
                *(int *)(iVar7 + 0xc0) = iStack_26c;
                *(int *)(iVar7 + 0xc4) = iStack_268;
                *(char *)(iVar7 + 0x58) = (char)local_214;
                memcpy((void *)(iVar7 + 0x38),local_218,local_214 & 0xff);
                if (*(int *)(*(int *)(param_2 + 0x14) + 0x330) != 0) {
                  *(undefined4 *)(iVar7 + 0x68) = *(undefined4 *)(param_2 + 4);
                }
              }
              mutex_unlock(iVar7 + 0x24);
              goto LAB_00024a66;
            }
            if ((int)((uint)*(byte *)((int)piVar6 + 0x1d6) << 0x1a) < 0) {
              uVar4 = nla_parse_nested_constprop_40(local_29c,2,iVar2,0);
              if (uVar4 != 0) goto LAB_00024a66;
              if ((local_298 != 0) && (local_294 != (ushort *)0x0)) {
                local_30 = local_294 + 2;
                local_34 = *local_294 - 4;
                local_38 = *(undefined4 *)(local_298 + 4);
                goto LAB_0002493a;
              }
            }
          }
          else if ((int)((uint)*(byte *)((int)piVar6 + 0x1d6) << 0x1b) < 0) {
            uVar4 = nla_parse_nested_constprop_40(local_29c,3,iVar2,0);
            if (uVar4 != 0) goto LAB_00024a66;
            if (((local_298 != 0) && (local_294 != (ushort *)0x0)) && (local_290 != (ushort *)0x0))
            {
              puStack_3c = local_290 + 2;
              local_40 = *local_290 - 4;
              local_48 = *(undefined4 *)(local_298 + 4);
              local_44 = *(undefined4 *)(local_294 + 2);
              goto LAB_000248f8;
            }
          }
LAB_00024a62:
          uVar4 = 0xffffffea;
        }
        else {
          uVar4 = nla_parse_nested_constprop_40(local_29c,6,iVar2,DAT_00024a84);
          if (uVar4 == 0) {
            if (local_284 != 0) {
              local_5f = *(undefined1 *)(local_284 + 4);
              if (local_298 != 0) {
                local_5d = *(byte *)(local_298 + 4);
              }
              if (local_294 != (ushort *)0x0) {
                local_5c = (byte)local_294[2];
              }
              if (local_290 != (ushort *)0x0) {
                local_5e = (undefined1)local_290[2];
              }
              if (local_5d <= local_5c) {
                if (local_28c != 0) {
                  local_5b = *(undefined4 *)(local_28c + 4);
                  local_57 = *(undefined4 *)(local_28c + 8);
                }
                if (local_288 != 0) {
                  local_53 = *(undefined4 *)(local_288 + 4);
                  local_4f = *(undefined4 *)(local_288 + 8);
                }
                local_60 = 1;
                goto LAB_0002486a;
              }
            }
            goto LAB_00024a62;
          }
        }
LAB_00024a66:
        kfree(local_1ac);
        goto LAB_000246f4;
      }
    }
  }
LAB_00024576:
  uVar4 = 0xffffffea;
LAB_000246f4:
  if (local_2c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ===== nl80211_put_sta_rate @ 00024a8c size=254 ===== */

undefined4 nl80211_put_sta_rate(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  psVar2 = (short *)nla_nest_start_noflag(param_1,param_3,param_3,param_4,param_4);
  if (psVar2 == (short *)0x0) {
    return 0;
  }
  uVar3 = cfg80211_calculate_bitrate(param_2);
  if (uVar3 < 0x10000) {
    uVar6 = uVar3 & 0xffff;
    if (uVar3 != 0) goto LAB_00024ab2;
  }
  else {
    uVar6 = 0;
LAB_00024ab2:
    iVar4 = nla_put_be32(param_1,5,uVar3);
    if (iVar4 != 0) {
      return 0;
    }
    if ((uVar6 != 0) && (iVar4 = nla_put_u16(param_1,1,uVar6), iVar4 != 0)) {
      return 0;
    }
  }
  uVar3 = param_2[5] - 1 & 0xff;
  if ((uVar3 < 5) &&
     (iVar4 = nla_put_flag(param_1,*(undefined1 *)(uVar3 + DAT_00024b8c + 0x11c)), iVar4 != 0)) {
    return 0;
  }
  uVar3 = (uint)*param_2;
  if ((int)(uVar3 << 0x1f) < 0) {
    bVar1 = param_2[1];
    uVar5 = 2;
LAB_00024ae6:
    iVar4 = nla_put_u8(param_1,uVar5,bVar1);
    if (iVar4 != 0) {
      return 0;
    }
    if (-1 < (int)((uint)*param_2 << 0x1d)) goto LAB_00024af6;
    iVar4 = nla_put_flag(param_1,4);
  }
  else {
    if ((int)(uVar3 << 0x1e) < 0) {
      iVar4 = nla_put_u8(param_1,6,param_2[1]);
      if (iVar4 != 0) {
        return 0;
      }
      bVar1 = param_2[4];
      uVar5 = 7;
      goto LAB_00024ae6;
    }
    if (-1 < (int)(uVar3 << 0x1b)) goto LAB_00024af6;
    iVar4 = nla_put_u8(param_1,0xd,param_2[1]);
    if (iVar4 != 0) {
      return 0;
    }
    iVar4 = nla_put_u8(param_1,0xe,param_2[4]);
    if (iVar4 != 0) {
      return 0;
    }
    iVar4 = nla_put_u8(param_1,0xf,param_2[6]);
    if (iVar4 != 0) {
      return 0;
    }
    iVar4 = nla_put_u8(param_1,0x10,param_2[7]);
    if (iVar4 != 0) {
      return 0;
    }
    if (param_2[5] != 6) goto LAB_00024af6;
    iVar4 = nla_put_u8(param_1,0x11,param_2[8]);
  }
  if (iVar4 != 0) {
    return 0;
  }
LAB_00024af6:
  *psVar2 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar2;
  return 1;
}



/* ===== nl80211_send_station @ 00024b90 size=1844 ===== */

undefined4
nl80211_send_station
          (int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          int param_6,int param_7,undefined4 param_8,uint *param_9)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_29 [5];
  
  iVar1 = nl80211hdr_put(param_1,param_3,param_4,param_5,param_2);
  if (iVar1 == 0) {
    cfg80211_sinfo_release_content(param_9);
    return 0xffffffff;
  }
  iVar2 = nla_put_be32(param_1,3,*(undefined4 *)(param_7 + 0xa8));
  if ((((((((((iVar2 == 0) && (iVar2 = nla_put(param_1,6,6,param_8), iVar2 == 0)) &&
            (iVar2 = nla_put_be32(param_1,0x2e,param_9[0x1b]), iVar2 == 0)) &&
           (psVar3 = (short *)nla_nest_start_noflag(param_1,0x15), psVar3 != (short *)0x0)) &&
          ((((*param_9 & 0x10000) == 0 ||
            (iVar2 = nla_put_be32(param_1,0x10,param_9[2]), iVar2 == 0)) &&
           (((*param_9 & 2) == 0 || (iVar2 = nla_put_be32(param_1,1,param_9[3]), iVar2 == 0)))))) &&
         ((((param_9[1] & 0x400) == 0 ||
           (iVar2 = nla_put_u64_64bit(param_1,0x2a,param_9[4],param_9[5],0x21), iVar2 == 0)) &&
          (((*param_9 & 0x800004) == 0 || (iVar2 = nla_put_be32(param_1,2,param_9[6]), iVar2 == 0)))
          ))) && ((((((DAT_00024f78 & *param_9) == 0 ||
                     (iVar2 = nla_put_be32(param_1,3,param_9[8]), iVar2 == 0)) &&
                    (((*param_9 & 0x800000) == 0 ||
                     (iVar2 = nla_put_u64_64bit(param_1,0x17,param_9[6],param_9[7],0x21), iVar2 == 0
                     )))) && (((*param_9 & 0x1000000) == 0 ||
                              (iVar2 = nla_put_u64_64bit(param_1,0x18,param_9[8],param_9[9],0x21),
                              iVar2 == 0)))) &&
                  (((*param_9 & 0x10) == 0 ||
                   (iVar2 = nla_put_u16(param_1,4,(short)param_9[10]), iVar2 == 0)))))) &&
       (((((*param_9 & 0x20) == 0 ||
          (iVar2 = nla_put_u16(param_1,5,*(undefined2 *)((int)param_9 + 0x2a)), iVar2 == 0)) &&
         (((*param_9 & 0x40) == 0 || (iVar2 = nla_put_u8(param_1,6,(char)param_9[0xb]), iVar2 == 0))
         )) && (((param_9[1] & 1) == 0 ||
                (iVar2 = nla_put_u64_64bit(param_1,0x20,param_9[0x28],param_9[0x29],0x21),
                iVar2 == 0)))))) &&
      ((((param_9[1] & 0x80) == 0 ||
        (iVar2 = nla_put_u64_64bit(param_1,0x27,param_9[0x26],param_9[0x27],0x21), iVar2 == 0)) &&
       (((-1 < (int)((uint)*(byte *)(param_6 + 0x1d4) << 0x1e) || ((param_9[1] & 0x100) == 0)) ||
        (iVar2 = nla_put_u16(param_1,0x28,*(undefined2 *)((int)param_9 + 0xba)), iVar2 == 0)))))) &&
     (((*(int *)(param_6 + 0x1dc) != 1 ||
       ((((*param_9 & 0x80) == 0 ||
         (iVar2 = nla_put_u8(param_1,7,*(undefined1 *)((int)param_9 + 0x2d)), iVar2 == 0)) &&
        (((*param_9 & 0x2000) == 0 ||
         (iVar2 = nla_put_u8(param_1,0xd,*(undefined1 *)((int)param_9 + 0x2e)), iVar2 == 0)))))) &&
      ((((((((*param_9 & 0x2000000) == 0 || (*(char *)((int)param_9 + 0x2f) == '\0')) ||
           (iVar2 = nl80211_put_signal_part_11
                              (param_1,*(char *)((int)param_9 + 0x2f),param_9 + 0xc,0x19),
           iVar2 != 0)) &&
          (((((*param_9 & 0x4000000) == 0 || (*(char *)((int)param_9 + 0x2f) == '\0')) ||
            (iVar2 = nl80211_put_signal_part_11
                               (param_1,*(char *)((int)param_9 + 0x2f),param_9 + 0xd,0x1a),
            iVar2 != 0)) &&
           ((((*param_9 & 0x100) == 0 ||
             (iVar2 = nl80211_put_sta_rate(param_1,param_9 + 0xe,8), iVar2 != 0)) &&
            (((*param_9 & 0x4000) == 0 ||
             (iVar2 = nl80211_put_sta_rate(param_1,(int)param_9 + 0x42,0xe), iVar2 != 0)))))))) &&
         (((*param_9 & 0x200) == 0 || (iVar2 = nla_put_be32(param_1,9,param_9[0x13]), iVar2 == 0))))
        && ((((*param_9 & 0x400) == 0 ||
             (iVar2 = nla_put_be32(param_1,10,param_9[0x14]), iVar2 == 0)) &&
            (((((*param_9 & 0x800) == 0 ||
               (iVar2 = nla_put_be32(param_1,0xb,param_9[0x15]), iVar2 == 0)) &&
              (((*param_9 & 0x1000) == 0 ||
               (iVar2 = nla_put_be32(param_1,0xc,param_9[0x16]), iVar2 == 0)))) &&
             (((*param_9 & 0x8000000) == 0 ||
              (iVar2 = nla_put_be32(param_1,0x1b,param_9[0x25]), iVar2 == 0)))))))) &&
       (((((param_9[1] & 0x200) == 0 ||
          (iVar2 = nla_put_be32(param_1,0x29,param_9[0x31]), iVar2 == 0)) &&
         (((((*param_9 & 0x40000) == 0 ||
            (iVar2 = nla_put_be32(param_1,0x12,param_9[0x1e]), iVar2 == 0)) &&
           (((*param_9 & 0x100000) == 0 ||
            (iVar2 = nla_put_be32(param_1,0x14,param_9[0x22]), iVar2 == 0)))) &&
          ((((*param_9 & 0x200000) == 0 ||
            (iVar2 = nla_put_be32(param_1,0x15,param_9[0x23]), iVar2 == 0)) &&
           (((*param_9 & 0x400000) == 0 ||
            (iVar2 = nla_put_be32(param_1,0x16,param_9[0x24]), iVar2 == 0)))))))) &&
        ((((param_9[1] & 0x40) == 0 ||
          (iVar2 = nla_put_u8(param_1,0x26,*(undefined1 *)((int)param_9 + 0xb1)), iVar2 == 0)) &&
         (((param_9[1] & 0x800) == 0 ||
          (iVar2 = nla_put_u8(param_1,0x2b,(char)param_9[0x32]), iVar2 == 0)))))))))))) {
    if ((*param_9 & 0x8000) != 0) {
      psVar4 = (short *)nla_nest_start_noflag(param_1,0xf);
      if ((((psVar4 == (short *)0x0) ||
           (((int)((uint)(byte)param_9[0x18] << 0x1f) < 0 &&
            (iVar2 = nla_put_flag(param_1,1), iVar2 != 0)))) ||
          (((int)((uint)(byte)param_9[0x18] << 0x1e) < 0 &&
           (iVar2 = nla_put_flag(param_1,2), iVar2 != 0)))) ||
         (((((int)((uint)(byte)param_9[0x18] << 0x1d) < 0 &&
            (iVar2 = nla_put_flag(param_1,3), iVar2 != 0)) ||
           (iVar2 = nla_put_u8(param_1,4,*(undefined1 *)((int)param_9 + 0x61)), iVar2 != 0)) ||
          (iVar2 = nla_put_u16(param_1,5,*(undefined2 *)((int)param_9 + 0x62)), iVar2 != 0))))
      goto LAB_00025114;
      *psVar4 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar4;
    }
    if (((((*param_9 & 0x20000) == 0) ||
         (iVar2 = nla_put(param_1,0x11,8,param_9 + 0x19), iVar2 == 0)) &&
        ((((*param_9 & 0x80000) == 0 ||
          (iVar2 = nla_put_u64_64bit(param_1,0x13,param_9[0x20],param_9[0x21],0x21), iVar2 == 0)) &&
         (((*param_9 & 0x10000000) == 0 ||
          (iVar2 = nla_put_u64_64bit(param_1,0x1c,param_9[0x17],0,0x21), iVar2 == 0)))))) &&
       ((((*param_9 & 0x20000000) == 0 ||
         (iVar2 = nla_put_u64_64bit(param_1,0x1d,param_9[0x2a],param_9[0x2b],0x21), iVar2 == 0)) &&
        (((((*param_9 & 0x40000000) == 0 ||
           (iVar2 = nla_put_u8(param_1,0x1e,(char)param_9[0x2c]), iVar2 == 0)) &&
          (((param_9[1] & 0x10) == 0 ||
           (iVar2 = nla_put_be32(param_1,0x24,param_9[0x2f]), iVar2 == 0)))) &&
         (((param_9[1] & 0x20) == 0 ||
          (iVar2 = nla_put_be32(param_1,0x25,param_9[0x30]), iVar2 == 0)))))))) {
      if ((int)((uint)*(byte *)(param_6 + 0x1d3) << 0x1c) < 0) {
        if (((param_9[1] & 4) != 0) &&
           (iVar2 = nla_put_u8(param_1,0x22,(char)param_9[0x2e]), iVar2 != 0)) goto LAB_00025114;
        if ((param_9[1] & 8) != 0) {
          local_29[0] = *(undefined1 *)((int)param_9 + 0xb9);
          iVar2 = nla_put(param_1,0x23,1,local_29);
          if (iVar2 != 0) goto LAB_00025114;
        }
      }
      if (param_9[0x2d] != 0) {
        psVar4 = (short *)nla_nest_start_noflag(param_1,0x1f);
        if (psVar4 == (short *)0x0) goto LAB_00025114;
        iVar2 = 0;
        do {
          uVar8 = param_9[0x2d];
          iVar7 = iVar2 * 0x58;
          iVar2 = iVar2 + 1;
          iVar9 = uVar8 + iVar7;
          if (*(int *)(uVar8 + iVar7) != 0) {
            psVar5 = (short *)nla_nest_start_noflag(param_1,iVar2);
            if ((((psVar5 == (short *)0x0) ||
                 ((*(int *)(uVar8 + iVar7) << 0x1e < 0 &&
                  (iVar6 = nla_put_u64_64bit(param_1,1,*(undefined4 *)(iVar9 + 8),
                                             *(undefined4 *)(iVar9 + 0xc),5), iVar6 != 0)))) ||
                ((*(int *)(uVar8 + iVar7) << 0x1d < 0 &&
                 (iVar6 = nla_put_u64_64bit(param_1,2,*(undefined4 *)(iVar9 + 0x10),
                                            *(undefined4 *)(iVar9 + 0x14),5), iVar6 != 0)))) ||
               ((((*(int *)(uVar8 + iVar7) << 0x1c < 0 &&
                  (iVar6 = nla_put_u64_64bit(param_1,3,*(undefined4 *)(iVar9 + 0x18),
                                             *(undefined4 *)(iVar9 + 0x1c),5), iVar6 != 0)) ||
                 ((*(int *)(uVar8 + iVar7) << 0x1b < 0 &&
                  (iVar6 = nla_put_u64_64bit(param_1,4,*(undefined4 *)(iVar9 + 0x20),
                                             *(undefined4 *)(iVar9 + 0x24),5), iVar6 != 0)))) ||
                ((*(int *)(uVar8 + iVar7) << 0x19 < 0 &&
                 (iVar7 = nl80211_put_txq_stats(param_1,iVar9 + 0x28,6), iVar7 == 0))))))
            goto LAB_00025114;
            *psVar5 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar5;
          }
        } while (iVar2 != 0x11);
        *psVar4 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar4;
      }
      *psVar3 = (short)*(undefined4 *)(param_1 + 0x98) - (short)psVar3;
      if ((param_9[0x1d] == 0) ||
         (iVar2 = nla_put(param_1,0x2a,param_9[0x1d],param_9[0x1c]), iVar2 == 0)) {
        cfg80211_sinfo_release_content(param_9);
        *(int *)(iVar1 + -0x14) = *(int *)(param_1 + 0x98) - (iVar1 + -0x14);
        return 0;
      }
    }
  }
LAB_00025114:
  cfg80211_sinfo_release_content(param_9);
  genlmsg_cancel(param_1,iVar1);
  return 0xffffffa6;
}



/* ===== nl80211_dump_station @ 000252c8 size=168 ===== */

int nl80211_dump_station(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *local_100;
  int local_fc;
  undefined1 auStack_f6 [6];
  undefined1 auStack_f0 [212];
  
  iVar2 = param_2[0xe];
  rtnl_lock();
  iVar1 = nl80211_prepare_wdev_dump(param_2,&local_100,&local_fc);
  if (iVar1 == 0) {
    if (*(int *)(local_fc + 0x10) == 0) {
      iVar1 = -0x16;
    }
    else if (*(int *)(*local_100 + 0x4c) == 0) {
      iVar1 = -0x5f;
    }
    else {
      while( true ) {
        memset(auStack_f0,0,0xd0);
        iVar1 = (**(code **)(*local_100 + 0x4c))
                          (local_100 + 0x68,*(undefined4 *)(local_fc + 0x10),iVar2,auStack_f6,
                           auStack_f0);
        if (iVar1 == -2) break;
        if (iVar1 != 0) goto LAB_00025358;
        iVar1 = nl80211_send_station
                          (param_1,0x13,*(undefined4 *)(*param_2 + 0x24),
                           *(undefined4 *)(param_2[1] + 8),2,local_100,
                           *(undefined4 *)(local_fc + 0x10),auStack_f6,auStack_f0);
        if (iVar1 < 0) break;
        iVar2 = iVar2 + 1;
      }
      param_2[0xe] = iVar2;
      iVar1 = *(int *)(param_1 + 0x50);
    }
  }
LAB_00025358:
  rtnl_unlock();
  return iVar1;
}



/* ===== nl80211_get_station @ 00025370 size=150 ===== */

int nl80211_get_station(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_f0 [208];
  
  piVar4 = (int *)param_2[6];
  uVar5 = param_2[7];
  memset(auStack_f0,0,0xd0);
  if (*(int *)(param_2[5] + 0x18) == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar3 = *(int *)(param_2[5] + 0x18) + 4;
    if (*(code **)(*piVar4 + 0x48) == (code *)0x0) {
      iVar1 = -0x5f;
    }
    else {
      iVar1 = (**(code **)(*piVar4 + 0x48))(piVar4 + 0x68,uVar5,iVar3,auStack_f0);
      if (iVar1 == 0) {
        iVar2 = alloc_skb(0xf00,0xcc0);
        if (iVar2 == 0) {
          iVar1 = -0xc;
          cfg80211_sinfo_release_content(auStack_f0);
        }
        else {
          iVar1 = nl80211_send_station
                            (iVar2,0x13,param_2[1],*param_2,0,piVar4,uVar5,iVar3,auStack_f0);
          if (iVar1 < 0) {
            iVar1 = -0x69;
            kfree_skb(iVar2);
          }
          else {
            iVar1 = genlmsg_reply(iVar2,param_2);
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== cfg80211_new_sta @ 00025406 size=98 ===== */

void cfg80211_new_sta(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  iVar2 = alloc_skb(0xf00,param_4);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = nl80211_send_station(iVar2,0x13,0,0,0,uVar1,param_1,param_2,param_3);
  if (iVar3 < 0) {
    kfree_skb(iVar2);
    return;
  }
  genlmsg_multicast_netns_constprop_37(iVar2,3,param_4);
  return;
}



/* ===== cfg80211_del_sta_sinfo @ 00025468 size=114 ===== */

void cfg80211_del_sta_sinfo(int param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_f0 [212];
  
  uVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  pvVar2 = memset(auStack_f0,0,0xd0);
  if (param_3 == (void *)0x0) {
    param_3 = pvVar2;
  }
  iVar3 = alloc_skb(0xf00,param_4);
  if (iVar3 == 0) {
    cfg80211_sinfo_release_content(param_3);
  }
  else {
    iVar4 = nl80211_send_station(iVar3,0x14,0,0,0,uVar1,param_1,param_2,param_3);
    if (iVar4 < 0) {
      kfree_skb(iVar3);
    }
    else {
      genlmsg_multicast_netns_constprop_37(iVar3,3,param_4);
    }
  }
  return;
}



/* ===== nl80211_parse_random_mac @ 000254da size=106 ===== */

undefined4 nl80211_parse_random_mac(int param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x35c) == 0) {
      *param_2 = 0;
      *(undefined2 *)(param_2 + 1) = 0;
      *param_3 = 0;
      *(undefined2 *)(param_3 + 1) = 0;
      *(undefined1 *)param_2 = 2;
      *(undefined1 *)param_3 = 3;
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x35c) != 0) {
    *param_2 = *(int *)(iVar3 + 4);
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar3 + 8);
    iVar3 = *(int *)(param_1 + 0x35c);
    *param_3 = *(int *)(iVar3 + 4);
    *(undefined2 *)(param_3 + 1) = *(undefined2 *)(iVar3 + 8);
    if ((*param_3 << 0x1f < 0) && (-1 < *param_2 << 0x1f)) {
      pbVar2 = (byte *)((int)param_2 + -1);
      pbVar1 = (byte *)((int)param_3 + -1);
      do {
        pbVar2 = pbVar2 + 1;
        pbVar1 = pbVar1 + 1;
        *pbVar2 = *pbVar2 & *pbVar1;
      } while (pbVar2 != (byte *)((int)param_2 + 5));
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== nl80211_check_scan_flags @ 00025544 size=254 ===== */

undefined4 nl80211_check_scan_flags(int param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar2 = 0;
  if (*(int *)(param_4 + 0x278) != 0) {
    if (param_5 == '\0') {
      piVar3 = (int *)(param_3 + 0x1c);
      iVar5 = param_3 + 0x38;
      param_3 = param_3 + 0x3e;
      uVar6 = 0x20000000;
    }
    else {
      piVar3 = (int *)(param_3 + 0x20);
      iVar5 = param_3 + 0x3c;
      param_3 = param_3 + 0x42;
      if (param_2 == 0) {
        uVar6 = 0x80000000;
      }
      else {
        uVar6 = 0x40000000;
      }
    }
    iVar4 = *(int *)(*(int *)(param_4 + 0x278) + 4);
    *piVar3 = iVar4;
    if ((-1 < iVar4 << 0x1f) || (*(int *)(param_1 + 0x2c) << 0x19 < 0)) {
      uVar7 = nl80211_check_scan_feat(param_1,iVar4,0x100,0x16);
      if ((int)uVar7 != 0) {
        uVar7 = nl80211_check_scan_feat(param_1,(int)((ulonglong)uVar7 >> 0x20),0x200,0x17);
        if ((int)uVar7 != 0) {
          uVar7 = nl80211_check_scan_feat(param_1,(int)((ulonglong)uVar7 >> 0x20),0x400,0x18);
          if ((int)uVar7 != 0) {
            uVar7 = nl80211_check_scan_feat(param_1,(int)((ulonglong)uVar7 >> 0x20),0x10,0x11);
            if ((int)uVar7 != 0) {
              uVar7 = nl80211_check_scan_feat(param_1,(int)((ulonglong)uVar7 >> 0x20),0x20,0x12);
              if ((int)uVar7 != 0) {
                uVar7 = nl80211_check_scan_feat(param_1,(int)((ulonglong)uVar7 >> 0x20),0x80,0x14);
                if ((int)uVar7 != 0) {
                  uVar7 = nl80211_check_scan_feat(param_1,(int)((ulonglong)uVar7 >> 0x20),0x40,0x13)
                  ;
                  if ((int)uVar7 != 0) {
                    uVar7 = nl80211_check_scan_feat
                                      (param_1,(int)((ulonglong)uVar7 >> 0x20),0x800,0x1d);
                    if (((int)uVar7 != 0) &&
                       (iVar1 = nl80211_check_scan_feat
                                          (param_1,(int)((ulonglong)uVar7 >> 0x20),0x1000,0x1e),
                       iVar1 != 0)) {
                      if (-1 < iVar4 << 0x1c) {
                        return 0;
                      }
                      if (((uVar6 & *(uint *)(param_1 + 0x2c)) != 0) &&
                         ((param_2 == 0 || (*(int *)(param_2 + 0x8c) == 0)))) {
                        uVar2 = nl80211_parse_random_mac(param_4,iVar5,param_3);
                        return uVar2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar2 = 0xffffffa1;
  }
  return uVar2;
}



/* ===== nl80211_parse_sched_scan @ 00025642 size=1474 ===== */

int nl80211_parse_sched_scan(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *__dest;
  ushort *puVar5;
  undefined4 *puVar6;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar10;
  uint uVar11;
  int extraout_r3_01;
  ushort *puVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  uint local_70;
  size_t local_6c;
  int local_68;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 auStack_44 [4];
  ushort *local_40;
  int local_3c;
  int local_30;
  ushort *local_2c;
  undefined4 *puVar7;
  
  if (*(int *)(param_3 + 0xb0) == 0) {
    iVar1 = ieee80211_get_num_supported_channels();
  }
  else {
    iVar1 = validate_scan_freqs(*(int *)(param_3 + 0xb0));
    if (iVar1 == 0) {
      return -0x16;
    }
  }
  puVar12 = *(ushort **)(param_3 + 0xb4);
  iVar13 = 0;
  if (puVar12 != (ushort *)0x0) {
    iVar13 = 0;
    puVar5 = puVar12 + 2;
    local_58 = *puVar12 - 4;
    while (iVar2 = nla_ok(puVar5,local_58), iVar2 != 0) {
      puVar5 = (ushort *)nla_next(extraout_r3,&local_58);
      iVar13 = iVar13 + 1;
    }
    if ((int)(uint)*(byte *)(param_1 + 0x46) < iVar13) {
      return -0x16;
    }
  }
  puVar12 = *(ushort **)(param_3 + 0x210);
  if (puVar12 == (ushort *)0x0) {
    local_68 = DAT_00025958;
    iVar2 = 0;
  }
  else {
    puVar5 = puVar12 + 2;
    iVar2 = 0;
    local_58 = *puVar12 - 4;
    local_68 = DAT_00025958;
    while (iVar3 = nla_ok(puVar5,local_58), iVar3 != 0) {
      iVar3 = nla_parse_nested_deprecated(auStack_44,6,puVar5,DAT_0002595c,0);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (local_40 == (ushort *)0x0) {
        if (local_30 != 0) goto LAB_00025748;
        if (local_3c != 0) {
          local_68 = *(int *)(local_3c + 4);
        }
      }
      else {
        if (local_30 != 0) {
          return -0x16;
        }
LAB_00025748:
        iVar2 = iVar2 + 1;
      }
      puVar5 = (ushort *)nla_next(puVar5,&local_58);
    }
    if ((iVar2 == 0) && (iVar2 = 0, local_68 != -300)) {
      iVar2 = 1;
    }
  }
  if (param_4 < iVar2) {
    return -0x16;
  }
  if (*(ushort **)(param_3 + 0xa8) == (ushort *)0x0) {
    local_6c = 0;
  }
  else {
    local_6c = **(ushort **)(param_3 + 0xa8) - 4;
    if (*(ushort *)(param_1 + 0x4a) < local_6c) {
      return -0x16;
    }
  }
  puVar12 = *(ushort **)(param_3 + 900);
  if (puVar12 == (ushort *)0x0) {
    if (*(int *)(param_3 + 0x1dc) == 0) {
      return -0x16;
    }
    local_70 = 1;
  }
  else {
    if (*(int *)(param_3 + 0x1dc) != 0) {
      return -0x16;
    }
    puVar5 = puVar12 + 2;
    local_58 = *puVar12 - 4;
    local_70 = 0;
    while (iVar3 = nla_ok(puVar5,local_58), iVar3 != 0) {
      local_70 = local_70 + 1;
      puVar5 = (ushort *)nla_next(extraout_r3_00,&local_58);
    }
    if (local_70 == 0) {
      return -0x16;
    }
  }
  if ((*(uint *)(param_1 + 0x4c) < local_70) ||
     ((-1 < (int)((uint)*(byte *)(param_1 + 0x31) << 0x1b) &&
      ((*(int *)(param_3 + 0x3d8) != 0 || (*(int *)(param_3 + 0x3dc) != 0)))))) {
    return -0x16;
  }
  iVar1 = iVar1 * 4;
  iVar3 = iVar13 * 0x21;
  iVar4 = kzalloc_constprop_47(iVar1 + 0x80 + iVar3 + iVar2 * 0x40 + local_6c + local_70 * 8);
  if (iVar4 == 0) {
    return -0xc;
  }
  if (iVar13 != 0) {
    *(int *)(iVar4 + 8) = iVar1 + 0x7c + iVar4;
  }
  *(int *)(iVar4 + 0xc) = iVar13;
  if (local_6c != 0) {
    if (iVar13 == 0) {
      iVar10 = iVar4 + 0x7c + iVar1;
    }
    else {
      iVar10 = *(int *)(iVar4 + 8) + iVar3;
    }
    *(int *)(iVar4 + 0x18) = iVar10;
  }
  if (iVar2 != 0) {
    if (*(int *)(iVar4 + 0x18) == 0) {
      if (iVar13 == 0) {
        iVar10 = iVar4 + 0x7c + iVar1;
      }
      else {
        iVar10 = *(int *)(iVar4 + 8) + iVar3;
      }
    }
    else {
      iVar10 = *(int *)(iVar4 + 0x18) + local_6c;
    }
    *(int *)(iVar4 + 0x24) = iVar10;
  }
  *(int *)(iVar4 + 0x28) = iVar2;
  if (iVar2 == 0) {
    if (*(int *)(iVar4 + 0x18) == 0) {
      if (iVar13 == 0) {
        iVar3 = iVar4 + 0x7c + iVar1;
      }
      else {
        iVar3 = *(int *)(iVar4 + 8) + iVar3;
      }
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x18) + local_6c;
    }
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x24) + iVar2 * 0x40;
  }
  *(int *)(iVar4 + 0x34) = iVar3;
  *(uint *)(iVar4 + 0x38) = local_70;
  puVar12 = *(ushort **)(param_3 + 0xb0);
  if (puVar12 == (ushort *)0x0) {
    iVar1 = 0;
    puVar6 = (undefined4 *)(param_1 + 0xd4);
    do {
      puVar7 = puVar6 + 1;
      piVar14 = (int *)*puVar6;
      if (piVar14 != (int *)0x0) {
        iVar3 = 0;
        while (iVar3 < piVar14[3]) {
          iVar8 = iVar3 * 0x38 + *piVar14;
          iVar3 = iVar3 + 1;
          iVar10 = *(int *)(iVar8 + 0xc) << 0x1f;
          bVar15 = -1 < iVar10;
          if (bVar15) {
            iVar10 = iVar4 + iVar1 * 4;
            iVar1 = iVar1 + 1;
          }
          if (bVar15) {
            *(int *)(iVar10 + 0x7c) = iVar8;
          }
        }
      }
      puVar6 = puVar7;
    } while (puVar7 != (undefined4 *)(param_1 + 0xe8));
  }
  else {
    iVar1 = 0;
    puVar5 = puVar12 + 2;
    local_58 = *puVar12 - 4;
    while (iVar3 = nla_ok(puVar5,local_58), iVar3 != 0) {
      iVar3 = ieee80211_get_channel_khz(param_1,*(int *)(puVar5 + 2) * 1000);
      if (iVar3 == 0) goto LAB_00025a02;
      iVar10 = *(int *)(iVar3 + 0xc) << 0x1f;
      bVar15 = -1 < iVar10;
      if (bVar15) {
        iVar10 = iVar4 + iVar1 * 4;
        iVar1 = iVar1 + 1;
      }
      if (bVar15) {
        *(int *)(iVar10 + 0x7c) = iVar3;
      }
      puVar5 = (ushort *)nla_next(puVar5,&local_58);
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar4 + 0x10) = iVar1;
    if (iVar13 != 0) {
      iVar1 = 0;
      puVar12 = *(ushort **)(param_3 + 0xb4) + 2;
      local_58 = **(ushort **)(param_3 + 0xb4) - 4;
      while (iVar13 = nla_ok(puVar12,local_58), iVar13 != 0) {
        if (0x20 < (int)(*puVar12 - 4)) goto LAB_00025a02;
        *(char *)(*(int *)(iVar4 + 8) + iVar1 + 0x20) = (char)(*puVar12 - 4);
        __dest = (void *)(*(int *)(iVar4 + 8) + iVar1);
        iVar1 = iVar1 + 0x21;
        memcpy(__dest,puVar12 + 2,*puVar12 - 4);
        puVar12 = (ushort *)nla_next(puVar12,&local_58);
      }
    }
    puVar12 = *(ushort **)(param_3 + 0x210);
    if (puVar12 == (ushort *)0x0) {
      *(int *)(iVar4 + 0x2c) = DAT_00025958;
    }
    else {
      puVar5 = puVar12 + 2;
      iVar1 = 0;
      local_58 = *puVar12 - 4;
      while (iVar13 = nla_ok(puVar5,local_58), iVar13 != 0) {
        iVar3 = nla_parse_nested_deprecated(auStack_44,6,puVar5,DAT_00025c0c,0);
        iVar13 = local_30;
        puVar12 = local_40;
        if (iVar3 != 0) goto LAB_00025a48;
        if (local_40 == (ushort *)0x0) {
          if (local_30 != 0) {
            if (iVar1 < iVar2) goto LAB_00025b7c;
            goto LAB_00025a02;
          }
        }
        else {
          if (iVar2 <= iVar1) goto LAB_00025a02;
          memcpy((void *)(*(int *)(iVar4 + 0x24) + iVar1 * 0x40),local_40 + 2,*local_40 - 4);
          *(char *)(*(int *)(iVar4 + 0x24) + iVar1 * 0x40 + 0x20) = (char)*puVar12 + -4;
LAB_00025b7c:
          iVar3 = iVar1 * 0x40;
          if (iVar13 != 0) {
            iVar10 = *(int *)(iVar4 + 0x24) + iVar3;
            *(undefined4 *)(iVar10 + 0x21) = *(undefined4 *)(iVar13 + 4);
            *(undefined2 *)(iVar10 + 0x25) = *(undefined2 *)(iVar13 + 8);
          }
          *(int *)(*(int *)(iVar4 + 0x24) + iVar3 + 0x28) = local_68;
          if (local_3c != 0) {
            *(undefined4 *)(*(int *)(iVar4 + 0x24) + iVar3 + 0x28) = *(undefined4 *)(local_3c + 4);
          }
          uVar9 = DAT_00025c10;
          iVar3 = *(int *)(iVar4 + 0x24) + iVar3;
          if ((int)((uint)*(byte *)(param_1 + 0x34) << 0x1c) < 0) {
            uVar9 = *(undefined4 *)(iVar3 + 0x28);
            *(undefined4 *)(iVar3 + 0x2c) = uVar9;
            *(undefined4 *)(iVar3 + 0x30) = uVar9;
            *(undefined4 *)(iVar3 + 0x34) = uVar9;
            *(undefined4 *)(iVar3 + 0x38) = uVar9;
            *(undefined4 *)(iVar3 + 0x3c) = uVar9;
            puVar12 = local_2c + 2;
            local_50 = *local_2c - 4;
            while (iVar13 = nla_ok(puVar12,local_50), iVar13 != 0) {
              uVar11 = *(ushort *)(extraout_r3_01 + 2) & 0xffff3fff;
              if (4 < uVar11) goto LAB_00025a02;
              *(undefined4 *)(iVar3 + uVar11 * 4 + 0x2c) = *(undefined4 *)(extraout_r3_01 + 4);
              puVar12 = (ushort *)nla_next(extraout_r3_01,&local_50);
            }
          }
          else {
            if (local_2c != (ushort *)0x0) {
              iVar3 = -0x5f;
              goto LAB_00025a48;
            }
            *(undefined4 *)(iVar3 + 0x2c) = DAT_00025c10;
            *(undefined4 *)(iVar3 + 0x30) = uVar9;
            *(undefined4 *)(iVar3 + 0x34) = uVar9;
            *(undefined4 *)(iVar3 + 0x38) = uVar9;
            *(undefined4 *)(iVar3 + 0x3c) = uVar9;
          }
        }
        puVar5 = (ushort *)nla_next(puVar5,&local_58);
        iVar1 = iVar1 + 1;
      }
      if ((iVar1 == 0) && (iVar2 != 0)) {
        *(int *)(*(int *)(iVar4 + 0x24) + 0x28) = local_68;
      }
      *(undefined4 *)(iVar4 + 0x2c) = 0x7fffffff;
      iVar1 = 0;
      while (iVar1 < iVar2) {
        iVar13 = iVar1 * 0x40;
        iVar1 = iVar1 + 1;
        iVar13 = *(int *)(*(int *)(iVar4 + 0x24) + iVar13 + 0x28);
        if (iVar13 < *(int *)(iVar4 + 0x2c)) {
          *(int *)(iVar4 + 0x2c) = iVar13;
        }
        else {
          *(int *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c);
        }
      }
    }
    if (local_6c != 0) {
      iVar1 = *(int *)(param_3 + 0xa8);
      *(size_t *)(iVar4 + 0x1c) = local_6c;
      memcpy(*(void **)(iVar4 + 0x18),(void *)(iVar1 + 4),local_6c);
    }
    iVar3 = nl80211_check_scan_flags(param_1,param_2,iVar4,param_3,1);
    if (iVar3 != 0) goto LAB_00025a48;
    if (*(int *)(param_3 + 0x370) != 0) {
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(*(int *)(param_3 + 0x370) + 4);
    }
    if (*(int *)(param_3 + 0x3d8) == 0) {
      if (*(char *)(iVar4 + 0x48) != '\0') goto LAB_000259de;
    }
    else {
      *(undefined1 *)(iVar4 + 0x49) = *(undefined1 *)(*(int *)(param_3 + 0x3d8) + 4);
      *(undefined1 *)(iVar4 + 0x48) = 1;
LAB_000259de:
      iVar1 = *(int *)(param_3 + 0x3dc);
      if (iVar1 != 0) {
        uVar11 = (uint)*(byte *)(iVar1 + 4);
        *(uint *)(iVar4 + 0x4c) = uVar11;
        *(undefined1 *)(iVar4 + 0x50) = *(undefined1 *)(iVar1 + 5);
        if ((4 < uVar11) || (*(int *)(param_1 + uVar11 * 4 + 0xd4) == 0)) goto LAB_00025a02;
      }
    }
    uVar9 = DAT_00025c1c;
    puVar12 = *(ushort **)(param_3 + 900);
    if (puVar12 == (ushort *)0x0) {
      iVar1 = *(int *)(*(int *)(param_3 + 0x1dc) + 4);
      if (iVar1 != 0) {
        **(uint **)(iVar4 + 0x34) =
             (uint)((ulonglong)(iVar1 + 999) * (ulonglong)DAT_00025c14 >> 0x26);
        uVar11 = **(uint **)(iVar4 + 0x34);
        if (uVar11 != 0) {
          if (*(uint *)(param_1 + 0x50) < uVar11) {
            **(uint **)(iVar4 + 0x34) = *(uint *)(param_1 + 0x50);
          }
          goto LAB_00025ab0;
        }
      }
    }
    else {
      puVar5 = puVar12 + 2;
      local_54 = *puVar12 - 4;
      iVar1 = 0;
      while (iVar13 = nla_ok(puVar5,local_54), iVar13 != 0) {
        if ((int)local_70 <= iVar1) {
LAB_00025b46:
          iVar3 = -0x16;
          goto LAB_00025a48;
        }
        iVar3 = nla_parse_nested_deprecated(&local_50,2,puVar5,uVar9,0);
        if (iVar3 != 0) goto LAB_00025a48;
        if (local_4c == 0) goto LAB_00025b46;
        *(undefined4 *)(*(int *)(iVar4 + 0x34) + iVar1 * 8) = *(undefined4 *)(local_4c + 4);
        uVar11 = *(uint *)(*(int *)(iVar4 + 0x34) + iVar1 * 8);
        if ((uVar11 == 0) || (*(uint *)(param_1 + 0x50) < uVar11)) goto LAB_00025b46;
        if (local_48 == 0) {
          if (iVar1 < (int)(local_70 - 1)) goto LAB_00025b46;
        }
        else {
          *(undefined4 *)(*(int *)(iVar4 + 0x34) + iVar1 * 8 + 4) = *(undefined4 *)(local_48 + 4);
          uVar11 = *(uint *)(*(int *)(iVar4 + 0x34) + iVar1 * 8 + 4);
          if ((uVar11 == 0) || (*(uint *)(param_1 + 0x54) < uVar11)) goto LAB_00025b46;
        }
        puVar5 = (ushort *)nla_next(puVar5,&local_54);
        iVar1 = iVar1 + 1;
      }
      if (*(int *)(*(int *)(iVar4 + 0x34) + local_70 * 8 + -4) == 0) {
LAB_00025ab0:
        *(undefined4 *)(iVar4 + 0x5c) = *DAT_00025c18;
        return iVar4;
      }
    }
  }
LAB_00025a02:
  iVar3 = -0x16;
LAB_00025a48:
  kfree(iVar4);
  return iVar3;
}



/* ===== nl80211_set_wowlan @ 00025c20 size=1298 ===== */

uint nl80211_set_wowlan(undefined4 param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  uint __n;
  int extraout_r1;
  size_t sVar9;
  uint *puVar10;
  int iVar11;
  undefined4 extraout_r3;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  size_t __n_00;
  undefined4 *puVar19;
  int local_e4;
  int local_c4;
  char local_c0 [8];
  int local_b8;
  int *local_b4;
  int local_b0;
  uint local_ac;
  undefined1 auStack_a8 [4];
  ushort *local_a4;
  ushort *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  ushort *local_90;
  int *local_8c;
  ushort *local_88;
  int local_84;
  ushort *local_80;
  ushort *local_7c;
  undefined1 auStack_78 [4];
  int local_74;
  int local_70;
  int local_6c;
  ushort *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_40;
  int local_30;
  
  piVar18 = *(int **)(param_2 + 0x18);
  memset(local_c0,0,0x18);
  piVar15 = (int *)piVar18[0x91];
  iVar11 = piVar18[0x92];
  if (piVar15 == (int *)0x0) {
    return 0xffffffa1;
  }
  iVar13 = *(int *)(*(int *)(param_2 + 0x14) + 0x1d4);
  iVar14 = 0;
  if (iVar13 == 0) goto LAB_00025c4c;
  uVar3 = nla_parse_nested_deprecated
                    (auStack_78,0x13,iVar13,DAT_00025e34,*(undefined4 *)(param_2 + 0x20));
  if (uVar3 != 0) {
    return uVar3;
  }
  if (local_74 != 0) {
    if (-1 < *piVar15 << 0x1f) {
      return 0xffffffea;
    }
    local_c0[0] = '\x01';
  }
  bVar2 = false;
  if (local_70 != 0) {
    if (-1 < *piVar15 << 0x1d) {
      return 0xffffffea;
    }
    bVar2 = true;
    local_c0[1] = 1;
  }
  if (local_6c != 0) {
    if (-1 < *piVar15 << 0x1e) {
      return 0xffffffea;
    }
    bVar2 = true;
    local_c0[2] = 1;
  }
  if (local_64 != 0) {
    return 0xffffffea;
  }
  if (local_60 != 0) {
    if (-1 < *piVar15 << 0x1b) {
      return 0xffffffea;
    }
    bVar2 = true;
    local_c0[3] = 1;
  }
  if (local_5c != 0) {
    if (-1 < *piVar15 << 0x1a) {
      return 0xffffffea;
    }
    bVar2 = true;
    local_c0[4] = 1;
  }
  if (local_58 != 0) {
    if (-1 < *piVar15 << 0x19) {
      return 0xffffffea;
    }
    bVar2 = true;
    local_c0[5] = 1;
  }
  if (local_54 != 0) {
    if (-1 < *piVar15 << 0x18) {
      return 0xffffffea;
    }
    bVar2 = true;
    local_c0[6] = 1;
  }
  local_e4 = 0;
  if (local_68 != (ushort *)0x0) {
    iVar14 = 0;
    puVar4 = local_68 + 2;
    local_c4 = *local_68 - 4;
    while (iVar13 = nla_ok(puVar4,local_c4), iVar13 != 0) {
      puVar4 = (ushort *)nla_next(extraout_r3,&local_c4);
      iVar14 = iVar14 + 1;
    }
    if (piVar15[1] < iVar14) {
      return 0xffffffea;
    }
    local_b8 = kmalloc_array_constprop_46(iVar14,0x10);
    if (local_b8 == 0) {
      return 0xfffffff4;
    }
    puVar4 = local_68 + 2;
    local_c4 = *local_68 - 4;
    iVar13 = 0;
    local_b0 = iVar14;
    while (iVar14 = nla_ok(puVar4,local_c4), iVar14 != 0) {
      uVar3 = nla_parse_nested_deprecated
                        (auStack_a8,3,puVar4,DAT_00025e38,*(undefined4 *)(param_2 + 0x20));
      if (uVar3 != 0) goto LAB_00025fc6;
      if ((local_a4 == (ushort *)0x0) || (local_a0 == (ushort *)0x0)) goto LAB_00025d72;
      __n_00 = *local_a0 - 4;
      sVar9 = (int)(*local_a0 + 3) >> 3;
      if ((sVar9 != *local_a4 - 4) || ((piVar15[2] < (int)__n_00 || ((int)__n_00 < piVar15[3]))))
      goto LAB_00025d72;
      iVar14 = 0;
      if (local_9c != 0) {
        iVar14 = *(int *)(local_9c + 4);
      }
      if (piVar15[4] < iVar14) goto LAB_00025d72;
      *(int *)(local_b8 + iVar13 + 0xc) = iVar14;
      pvVar6 = (void *)__kmalloc(sVar9 + __n_00,0xcc0);
      if (pvVar6 == (void *)0x0) goto LAB_00026120;
      *(void **)(local_b8 + iVar13) = pvVar6;
      memcpy(pvVar6,local_a4 + 2,sVar9);
      *(void **)(local_b8 + iVar13 + 4) = (void *)((int)pvVar6 + sVar9);
      *(size_t *)(iVar13 + local_b8 + 8) = __n_00;
      memcpy((void *)((int)pvVar6 + sVar9),local_a0 + 2,__n_00);
      puVar4 = (ushort *)nla_next(puVar4,&local_c4);
      iVar13 = iVar13 + 0x10;
    }
    bVar2 = true;
  }
  if (local_40 == 0) {
LAB_000260aa:
    if (local_30 == 0) {
LAB_00026100:
      if ((local_c0[0] != '\0') && (bVar2)) goto LAB_00025d72;
      iVar14 = kmemdup(local_c0,0x18,0xcc0);
      if (iVar14 != 0) {
LAB_00025c4c:
        cfg80211_rdev_free_wowlan(piVar18);
        piVar18[0x92] = iVar14;
        if (*(code **)(*piVar18 + 8) != (code *)0x0) {
          if ((iVar11 != 0) != (piVar18[0x92] != 0)) {
            (**(code **)(*piVar18 + 8))(piVar18 + 0x68);
          }
          return 0;
        }
        return 0;
      }
    }
    else {
      iVar14 = kmalloc_array_constprop_46(299,4);
      if (iVar14 != 0) {
        if (*piVar15 << 0x17 < 0) {
          uVar3 = nla_parse_nested_deprecated(iVar14,0x12a,local_30,DAT_00026144,0);
          if (((uVar3 == 0) &&
              (uVar7 = nl80211_parse_sched_scan(piVar18 + 0x68,0,iVar14,piVar15[5]),
              local_ac = uVar7, 0xfffff000 < uVar7)) && (uVar7 != 0)) {
            local_ac = 0;
            uVar3 = uVar7;
          }
        }
        else {
          uVar3 = 0xffffffa1;
        }
        kfree(iVar14);
        if (uVar3 != 0) goto LAB_00025fc6;
        bVar2 = true;
        goto LAB_00026100;
      }
    }
LAB_00026120:
    uVar3 = 0xfffffff4;
  }
  else {
    if (*(int *)(piVar18[0x91] + 0x18) != 0) {
      uVar3 = nla_parse_nested_deprecated(auStack_a8,0xb,local_40,DAT_0002601c,0);
      if (uVar3 != 0) goto LAB_00025fc6;
      if ((((((local_a4 != (ushort *)0x0) && (local_a0 != (ushort *)0x0)) && (local_9c != 0)) &&
           ((local_94 != 0 && (local_90 != (ushort *)0x0)))) && (local_84 != 0)) &&
         ((local_80 != (ushort *)0x0 && (local_7c != (ushort *)0x0)))) {
        uVar1 = *local_90;
        uVar7 = uVar1 - 4;
        puVar19 = *(undefined4 **)(piVar18[0x91] + 0x18);
        if ((uVar7 <= (uint)puVar19[1]) &&
           ((*(uint *)(local_84 + 4) <= (uint)puVar19[2] && (*(uint *)(local_84 + 4) != 0)))) {
          uVar8 = (uint)*local_80;
          __n = uVar8 - 4;
          if ((__n <= (uint)puVar19[3]) && (sVar9 = *local_7c - 4, sVar9 == uVar8 + 3 >> 3)) {
            if (local_88 == (ushort *)0x0) {
              uVar16 = 0;
              puVar4 = (ushort *)0x0;
            }
            else {
              uVar3 = *(uint *)(local_88 + 4);
              puVar4 = local_88 + 2;
              uVar16 = *local_88 - 0xc;
              if ((((uVar3 == 0) || (__aeabi_uidivmod(uVar16,uVar3), extraout_r1 != 0)) ||
                  (puVar10 = (uint *)*puVar19, puVar10 == (uint *)0x0)) ||
                 (((puVar10[1] < uVar3 || (uVar3 < *puVar10)) ||
                  ((puVar10[2] < uVar16 || (uVar7 < uVar3 + *(int *)(local_88 + 2)))))))
              goto LAB_00025d72;
            }
            piVar17 = local_8c;
            if ((local_8c == (int *)0x0) ||
               (((piVar17 = local_8c + 1, *(char *)(puVar19 + 4) != '\0' && (local_8c[3] - 1U < 4))
                && ((uint)(local_8c[3] + local_8c[2]) <= uVar7)))) {
              piVar5 = (int *)kzalloc_constprop_47(uVar1 + 0x44 + __n + sVar9 + uVar16);
              if (piVar5 != (int *)0x0) {
                piVar5[1] = *(int *)(local_a4 + 2);
                piVar5[2] = *(int *)(local_a0 + 2);
                piVar5[4] = *(int *)(local_9c + 4);
                *(undefined2 *)(piVar5 + 5) = *(undefined2 *)(local_9c + 8);
                uVar12 = 0;
                if (local_98 != 0) {
                  uVar12 = *(undefined2 *)(local_98 + 4);
                }
                uVar3 = __sock_create(DAT_00026020,2,1,6,piVar5,1);
                if (uVar3 != 0) {
                  kfree(piVar5);
                  goto LAB_00025fc6;
                }
                iVar14 = inet_csk_get_port(*(undefined4 *)(*piVar5 + 0x10),uVar12);
                if (iVar14 != 0) {
                  uVar3 = 0xffffff9e;
                  sock_release(*piVar5);
                  kfree(piVar5);
                  goto LAB_00025fc6;
                }
                pvVar6 = (void *)(uVar16 + 0x48 + (int)piVar5);
                *(undefined2 *)(piVar5 + 3) = *(undefined2 *)(*(int *)(*piVar5 + 0x10) + 0xe);
                uVar12 = *(undefined2 *)(local_94 + 4);
                piVar5[7] = (int)pvVar6;
                *(undefined2 *)((int)piVar5 + 0xe) = uVar12;
                piVar5[6] = uVar7;
                memcpy(pvVar6,local_90 + 2,uVar7);
                if (piVar17 != (int *)0x0) {
                  iVar14 = piVar17[1];
                  iVar13 = piVar17[2];
                  piVar5[8] = *piVar17;
                  piVar5[9] = iVar14;
                  piVar5[10] = iVar13;
                }
                piVar5[0xb] = *(int *)(local_84 + 4);
                piVar5[0xc] = __n;
                pvVar6 = (void *)(uVar7 + uVar16 + 0x48 + (int)piVar5);
                piVar5[0xd] = (int)pvVar6;
                memcpy(pvVar6,local_80 + 2,__n);
                pvVar6 = (void *)(uVar8 + 0x44 + uVar7 + uVar16 + (int)piVar5);
                piVar5[0xe] = (int)pvVar6;
                memcpy(pvVar6,local_7c + 2,sVar9);
                if (puVar4 != (ushort *)0x0) {
                  piVar5[0xf] = uVar16;
                  memcpy(piVar5 + 0x10,puVar4,uVar16 + 8);
                }
                bVar2 = true;
                local_b4 = piVar5;
                goto LAB_000260aa;
              }
              goto LAB_00026120;
            }
          }
        }
      }
    }
LAB_00025d72:
    uVar3 = 0xffffffea;
  }
LAB_00025fc6:
  for (; local_e4 < local_b0; local_e4 = local_e4 + 1) {
    kfree(*(undefined4 *)(local_b8 + local_e4 * 0x10));
  }
  kfree();
  if ((local_b4 != (int *)0x0) && (*local_b4 != 0)) {
    sock_release();
  }
  kfree(local_b4);
  kfree(local_ac);
  return uVar3;
}



/* ===== cfg80211_rdev_free_coalesce @ 00026148 size=76 ===== */

void cfg80211_rdev_free_coalesce(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int **)(param_1 + 0xfc);
  if (piVar3 != (int *)0x0) {
    iVar4 = 0;
    while( true ) {
      if (piVar3[1] <= iVar4) break;
      iVar2 = *piVar3 + iVar4 * 0x10;
      iVar5 = 0;
      while( true ) {
        if (*(int *)(iVar2 + 0xc) <= iVar5) break;
        iVar1 = iVar5 * 0x10;
        iVar5 = iVar5 + 1;
        kfree(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar1));
      }
      kfree();
      iVar4 = iVar4 + 1;
    }
    kfree();
    kfree(piVar3);
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  return;
}



/* ===== nl80211_set_coalesce @ 00026194 size=664 ===== */

int nl80211_set_coalesce(undefined4 param_1,int param_2)

{
  int iVar1;
  void *__dest;
  undefined4 extraout_r3;
  size_t __n;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  size_t __n_00;
  int iVar6;
  int *piVar7;
  ushort *puVar8;
  int local_64;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [4];
  int local_44;
  int local_40;
  ushort *local_3c;
  undefined1 auStack_38 [4];
  ushort *local_34;
  ushort *local_30;
  int local_2c;
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar5 = 0;
  local_50 = 0;
  local_4c = 0;
  piVar7 = (int *)piVar3[0x110];
  if ((piVar7 == (int *)0x0) || (*(int *)(*piVar3 + 0x158) == 0)) {
    iVar5 = -0x5f;
  }
  else {
    puVar2 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x2d8);
    if (puVar2 == (ushort *)0x0) {
      cfg80211_rdev_free_coalesce(piVar3);
      if (*(code **)(*piVar3 + 0x158) == (code *)0x0) {
        iVar5 = 0;
      }
      else {
        (**(code **)(*piVar3 + 0x158))(piVar3 + 0x68,0);
        iVar5 = 0;
      }
    }
    else {
      puVar8 = puVar2 + 2;
      local_58 = *puVar2 - 4;
      while (iVar1 = nla_ok(puVar8,local_58), iVar1 != 0) {
        puVar8 = (ushort *)nla_next(puVar8,&local_58);
        iVar5 = iVar5 + 1;
      }
      if (*piVar7 < iVar5) {
        iVar5 = -0x16;
      }
      else {
        local_50 = kmalloc_array_constprop_46(iVar5,0x10);
        if (local_50 == 0) {
          iVar5 = -0xc;
        }
        else {
          puVar8 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x2d8);
          puVar2 = puVar8 + 2;
          local_58 = *puVar8 - 4;
          local_64 = 0;
          local_4c = iVar5;
          while (iVar5 = nla_ok(puVar2,local_58), iVar1 = local_50, iVar5 != 0) {
            iVar4 = piVar3[0x110];
            iVar5 = nla_parse_nested_deprecated(auStack_48,3,puVar2,DAT_0002642c,0);
            if (iVar5 != 0) goto LAB_000263e4;
            piVar7 = (int *)(iVar1 + local_64);
            if (local_44 != 0) {
              *(undefined4 *)(iVar1 + local_64) = *(undefined4 *)(local_44 + 4);
            }
            if (*(int *)(iVar4 + 4) < *piVar7) {
LAB_000262b6:
              iVar5 = -0x16;
              goto LAB_000263e4;
            }
            if (local_40 != 0) {
              piVar7[1] = *(int *)(local_40 + 4);
            }
            if (local_3c == (ushort *)0x0) goto LAB_000262b6;
            puVar8 = local_3c + 2;
            local_54 = *local_3c - 4;
            iVar5 = 0;
            while (iVar1 = nla_ok(puVar8,local_54), iVar1 != 0) {
              puVar8 = (ushort *)nla_next(extraout_r3,&local_54);
              iVar5 = iVar5 + 1;
            }
            if (*(int *)(iVar4 + 8) < iVar5) goto LAB_000262b6;
            iVar1 = kmalloc_array_constprop_46(iVar5,0x10);
            piVar7[2] = iVar1;
            if (iVar1 == 0) goto LAB_000262f6;
            piVar7[3] = iVar5;
            puVar8 = local_3c + 2;
            local_54 = *local_3c - 4;
            iVar1 = 0;
            while (iVar5 = nla_ok(puVar8,local_54), iVar5 != 0) {
              iVar5 = nla_parse_nested_deprecated(auStack_38,3,puVar8,DAT_00026430,0);
              if (iVar5 != 0) goto LAB_000263e4;
              if ((local_34 == (ushort *)0x0) || (local_30 == (ushort *)0x0)) goto LAB_000262b6;
              __n = *local_30 - 4;
              __n_00 = (int)(*local_30 + 3) >> 3;
              if ((__n_00 != *local_34 - 4) ||
                 ((*(int *)(iVar4 + 0xc) < (int)__n || ((int)__n < *(int *)(iVar4 + 0x10)))))
              goto LAB_000262b6;
              iVar5 = 0;
              if (local_2c != 0) {
                iVar5 = *(int *)(local_2c + 4);
              }
              if (*(int *)(iVar4 + 0x14) < iVar5) goto LAB_000262b6;
              *(int *)(piVar7[2] + iVar1 + 0xc) = iVar5;
              __dest = (void *)__kmalloc(__n + __n_00,0xcc0);
              if (__dest == (void *)0x0) goto LAB_000262f6;
              *(void **)(piVar7[2] + iVar1) = __dest;
              memcpy(__dest,local_34 + 2,__n_00);
              *(void **)(piVar7[2] + iVar1 + 4) = (void *)((int)__dest + __n_00);
              *(size_t *)(iVar1 + piVar7[2] + 8) = __n;
              memcpy((void *)((int)__dest + __n_00),local_30 + 2,__n);
              puVar8 = (ushort *)nla_next(puVar8,&local_54);
              iVar1 = iVar1 + 0x10;
            }
            puVar2 = (ushort *)nla_next(puVar2,&local_58);
            local_64 = local_64 + 0x10;
          }
          iVar5 = DAT_00026434;
          if ((*(code **)(*piVar3 + 0x158) != (code *)0x0) &&
             (iVar5 = (**(code **)(*piVar3 + 0x158))(piVar3 + 0x68,&local_50), iVar5 == 0)) {
            iVar5 = kmemdup(&local_50,8,0xcc0);
            if (iVar5 != 0) {
              cfg80211_rdev_free_coalesce(piVar3);
              piVar3[0x3f] = iVar5;
              return 0;
            }
LAB_000262f6:
            iVar5 = -0xc;
          }
LAB_000263e4:
          for (iVar1 = 0; iVar1 < local_4c; iVar1 = iVar1 + 1) {
            iVar4 = local_50 + iVar1 * 0x10;
            for (iVar6 = 0; iVar6 < *(int *)(iVar4 + 0xc); iVar6 = iVar6 + 1) {
              kfree(*(undefined4 *)(*(int *)(iVar4 + 8) + iVar6 * 0x10));
            }
            kfree();
          }
          kfree();
        }
      }
    }
  }
  return iVar5;
}



/* ===== nl80211_notify_wiphy @ 00026438 size=84 ===== */

void nl80211_notify_wiphy(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [36];
  
  memset(auStack_38,0,0x20);
  iVar1 = alloc_skb(0xf00,0xcc0);
  if (iVar1 != 0) {
    iVar2 = nl80211_send_wiphy(param_1,param_2,iVar1,0,0,0,auStack_38);
    if (iVar2 < 0) {
      kfree_skb(iVar1);
    }
    else {
      genlmsg_multicast_netns_constprop_37(iVar1,0,0xcc0);
    }
  }
  return;
}



/* ===== nl80211_notify_iface @ 0002648c size=80 ===== */

void nl80211_notify_iface(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = alloc_skb(0xf00,0xcc0);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211_send_iface(iVar1,0,0,0,param_1,param_2,param_3);
  if (iVar2 < 0) {
    kfree_skb(iVar1);
    return;
  }
  genlmsg_multicast_netns_constprop_37(iVar1,0,0xcc0);
  return;
}



/* ===== nl80211_set_interface @ 000264dc size=276 ===== */

int nl80211_set_interface(undefined4 param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_38 [4];
  uint local_34;
  
  iVar7 = *(int *)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x1c);
  memset(auStack_38,0,0x18);
  iVar8 = *(int *)(iVar6 + 0x1c4);
  iVar5 = *(int *)(*(int *)(param_2 + 0x14) + 0x14);
  bVar9 = false;
  iVar4 = *(int *)(iVar8 + 4);
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 4);
    bVar9 = false;
    if (*(int *)(iVar8 + 4) != iVar4) {
      bVar9 = true;
    }
  }
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x60) != 0) {
    if (iVar4 != 7) {
      return -0x16;
    }
    if (*(int *)(iVar6 + 0x28) << 0x1f < 0) {
      return -0x10;
    }
    mutex_lock(iVar8 + 0x24);
    bVar1 = (char)**(undefined2 **)(*(int *)(param_2 + 0x14) + 0x60) - 4;
    *(byte *)(iVar8 + 0x5a) = bVar1;
    memcpy((void *)(iVar8 + 0x38),(void *)(*(int *)(*(int *)(param_2 + 0x14) + 0x60) + 4),
           (uint)bVar1);
    mutex_unlock(iVar8 + 0x24);
  }
  iVar5 = *(int *)(*(int *)(param_2 + 0x14) + 0x14c);
  if (iVar5 == 0) {
    local_34 = 0xffffffff;
  }
  else {
    bVar9 = *(char *)(iVar5 + 4) != '\0';
    local_34 = (uint)bVar9;
    if (bVar9) {
      if (iVar4 == 2) {
        uVar2 = *(uint *)(iVar7 + 0x1c4) & 0x40;
      }
      else {
        if (iVar4 != 4) {
          return -0x5f;
        }
        uVar2 = *(uint *)(iVar7 + 0x1c4) & 0x20;
      }
      if (uVar2 == 0) {
        return -0x5f;
      }
    }
    else if ((iVar6 != 0) && (*(int *)(iVar6 + 0x13c) << 0x16 < 0)) {
      return -0x10;
    }
    bVar9 = true;
  }
  iVar5 = nl80211_parse_mon_options(iVar7,iVar4,param_2,auStack_38);
  if (-1 < iVar5) {
    if ((iVar5 != 0) || (bVar3 = false, bVar9)) {
      iVar4 = cfg80211_change_iface(iVar7,iVar6,iVar4,auStack_38);
      if (iVar4 != 0) {
        return iVar4;
      }
      bVar3 = true;
    }
    if (local_34 != 0xffffffff) {
      *(bool *)(*(int *)(iVar6 + 0x1c4) + 0x30) = local_34 != 0;
    }
    if (bVar3) {
      nl80211_notify_iface(iVar7,*(undefined4 *)(iVar6 + 0x1c4),6);
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
    }
  }
  return iVar5;
}



/* ===== nl80211_send_scan_start @ 000265f0 size=64 ===== */

void nl80211_send_scan_start(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = alloc_skb(0xf00,0xcc0);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211_prep_scan_msg_constprop_25(iVar1,param_1,param_2,0x21);
  if (iVar2 < 0) {
    kfree_skb(iVar1);
    return;
  }
  genlmsg_multicast_netns_constprop_37(iVar1,1,0xcc0);
  return;
}



/* ===== nl80211_trigger_scan @ 00026630 size=944 ===== */

int nl80211_trigger_scan(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int *piVar5;
  void *__dest;
  int *piVar6;
  int *piVar7;
  size_t __n;
  undefined2 uVar8;
  ushort *puVar9;
  undefined4 extraout_r3;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  bool bVar17;
  bool bVar18;
  int local_2c [2];
  
  piVar13 = *(int **)(param_2 + 0x18);
  iVar15 = *(int *)(param_2 + 0x1c);
  piVar16 = piVar13 + 0x68;
  if ((*(int *)(iVar15 + 4) == 0xc) || (*(int *)(*piVar13 + 0x94) == 0)) {
    return -0x5f;
  }
  if ((piVar13[0x1f] != 0) || (piVar13[0x21] != 0)) {
    return -0x10;
  }
  puVar11 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x490);
  if (puVar11 == (ushort *)0x0) {
    puVar11 = *(ushort **)(*(int *)(param_2 + 0x14) + 0xb0);
    bVar18 = false;
    if (puVar11 != (ushort *)0x0) goto LAB_0002667c;
    iVar1 = ieee80211_get_num_supported_channels(piVar16);
    bVar18 = false;
  }
  else {
    if (-1 < *(char *)((int)piVar13 + 0x1d5)) {
      return -0x5f;
    }
    bVar18 = true;
LAB_0002667c:
    iVar1 = validate_scan_freqs(puVar11);
    if (iVar1 == 0) {
      return -0x16;
    }
  }
  puVar9 = *(ushort **)(*(int *)(param_2 + 0x14) + 0xb4);
  if (puVar9 == (ushort *)0x0) {
    iVar14 = 0;
  }
  else {
    puVar3 = puVar9 + 2;
    iVar14 = 0;
    local_2c[0] = *puVar9 - 4;
    while (iVar2 = nla_ok(puVar3,local_2c[0]), iVar2 != 0) {
      puVar3 = (ushort *)nla_next(extraout_r3,local_2c);
      iVar14 = iVar14 + 1;
    }
    if ((int)(uint)*(byte *)(piVar13 + 0x79) < iVar14) {
      return -0x16;
    }
  }
  puVar9 = *(ushort **)(*(int *)(param_2 + 0x14) + 0xa8);
  uVar10 = 0;
  if ((puVar9 != (ushort *)0x0) && (uVar10 = *puVar9 - 4, *(ushort *)(piVar13 + 0x7a) < uVar10)) {
    return -0x16;
  }
  piVar4 = (int *)kzalloc_constprop_47(iVar1 * 4 + 0x78 + iVar14 * 0x21 + uVar10);
  if (piVar4 == (int *)0x0) {
    return -0xc;
  }
  if (iVar14 != 0) {
    *piVar4 = (int)(piVar4 + iVar1 + 0x1d);
  }
  piVar4[1] = iVar14;
  if (uVar10 != 0) {
    if (iVar14 == 0) {
      piVar4[4] = (int)(piVar4 + iVar1 + 0x1d);
    }
    else {
      piVar4[4] = iVar14 * 0x21 + *piVar4;
    }
  }
  if (puVar11 == (ushort *)0x0) {
    iVar1 = 0;
    piVar6 = piVar13 + 0x9d;
    do {
      piVar7 = piVar6 + 1;
      if (*piVar6 != 0) {
        iVar2 = 0;
        while (iVar2 < ((int *)*piVar6)[3]) {
          iVar12 = iVar2 * 0x38 + *(int *)*piVar6;
          iVar2 = iVar2 + 1;
          piVar5 = (int *)(*(int *)(iVar12 + 0xc) << 0x1f);
          bVar18 = -1 < (int)piVar5;
          if (bVar18) {
            piVar5 = piVar4 + iVar1;
            iVar1 = iVar1 + 1;
          }
          if (bVar18) {
            piVar5[0x1d] = iVar12;
          }
        }
      }
      piVar6 = piVar7;
    } while (piVar7 != piVar13 + 0xa2);
  }
  else {
    puVar9 = puVar11 + 2;
    iVar1 = 0;
    local_2c[0] = *puVar11 - 4;
    while (iVar2 = nla_ok(puVar9,local_2c[0]), iVar2 != 0) {
      iVar2 = *(int *)(puVar9 + 2);
      if (!bVar18) {
        iVar2 = iVar2 * 1000;
      }
      iVar2 = ieee80211_get_channel_khz(piVar16,iVar2);
      if (iVar2 == 0) goto LAB_000269c2;
      piVar6 = *(int **)(iVar2 + 0xc);
      bVar17 = -1 < (int)piVar6 << 0x1f;
      if (bVar17) {
        piVar6 = piVar4 + iVar1;
        iVar1 = iVar1 + 1;
      }
      if (bVar17) {
        piVar6[0x1d] = iVar2;
      }
      puVar9 = (ushort *)nla_next(puVar9,local_2c);
    }
  }
  if (iVar1 == 0) {
LAB_000269c2:
    iVar1 = -0x16;
  }
  else {
    iVar2 = iVar15 + 0x24;
    piVar4[2] = iVar1;
    mutex_lock(iVar2);
    iVar1 = cfg80211_off_channel_oper_allowed(iVar15);
    if ((iVar1 == 0) &&
       ((piVar4[2] != 1 || (*(int *)(piVar4[0x1d] + 4) != *(int *)(*(int *)(iVar15 + 0xac) + 4)))))
    {
      iVar1 = -0x10;
      mutex_unlock(iVar2);
    }
    else {
      mutex_unlock(iVar2);
      if (iVar14 != 0) {
        iVar1 = 0;
        puVar9 = *(ushort **)(*(int *)(param_2 + 0x14) + 0xb4);
        puVar11 = puVar9 + 2;
        local_2c[0] = *puVar9 - 4;
        while (iVar14 = nla_ok(puVar11,local_2c[0]), iVar14 != 0) {
          if (0x20 < (int)(*puVar11 - 4)) goto LAB_000269c2;
          *(char *)(*piVar4 + iVar1 + 0x20) = (char)(*puVar11 - 4);
          __dest = (void *)(*piVar4 + iVar1);
          iVar1 = iVar1 + 0x21;
          memcpy(__dest,puVar11 + 2,*puVar11 - 4);
          puVar11 = (ushort *)nla_next(puVar11,local_2c);
        }
      }
      iVar1 = *(int *)(param_2 + 0x14);
      puVar11 = *(ushort **)(iVar1 + 0xa8);
      if (puVar11 != (ushort *)0x0) {
        __n = *puVar11 - 4;
        piVar4[5] = __n;
        memcpy((void *)piVar4[4],(void *)(*(int *)(iVar1 + 0xa8) + 4),__n);
      }
      piVar7 = piVar4 + 8;
      piVar6 = piVar13 + 0x9d;
      do {
        piVar5 = piVar6 + 1;
        if (*piVar6 != 0) {
          *piVar7 = (1 << (*(uint *)(*piVar6 + 0x10) & 0xff)) + -1;
        }
        piVar7 = piVar7 + 1;
        piVar6 = piVar5;
      } while (piVar13 + 0xa2 != piVar5);
      puVar11 = *(ushort **)(*(int *)(param_2 + 0x14) + 500);
      if (puVar11 != (ushort *)0x0) {
        puVar9 = puVar11 + 2;
        local_2c[0] = *puVar11 - 4;
        while (iVar1 = nla_ok(puVar9,local_2c[0]), iVar1 != 0) {
          uVar10 = puVar9[1] & 0xffff3fff;
          if (4 < uVar10) goto LAB_000269c2;
          if ((piVar13[uVar10 + 0x9d] != 0) &&
             (iVar1 = ieee80211_get_ratemask
                                (piVar13[uVar10 + 0x9d],puVar9 + 2,*puVar9 - 4,piVar4 + uVar10 + 8),
             iVar1 != 0)) goto LAB_00026782;
          puVar9 = (ushort *)nla_next(puVar9,local_2c);
        }
      }
      iVar1 = *(int *)(param_2 + 0x14);
      if (*(int *)(iVar1 + 0x3ac) != 0) {
        if (-1 < (int)((uint)*(byte *)(piVar13 + 0x74) << 0x1a)) {
          iVar1 = -0x5f;
          goto LAB_00026782;
        }
        *(undefined2 *)(piVar4 + 6) = *(undefined2 *)(*(int *)(iVar1 + 0x3ac) + 4);
        *(bool *)((int)piVar4 + 0x1a) = *(int *)(iVar1 + 0x3b0) != 0;
      }
      iVar1 = nl80211_check_scan_flags(piVar16,iVar15,piVar4,iVar1,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_2 + 0x14);
        *(bool *)((int)piVar4 + 0x69) = *(int *)(iVar1 + 0x21c) != 0;
        iVar14 = *(int *)(iVar1 + 0x3d4);
        if ((iVar14 == 0) &&
           ((piVar4[7] << 0x1c < 0 || (iVar14 = *(int *)(iVar1 + 0x18), iVar14 == 0)))) {
          uVar8 = 0xffff;
          piVar4[0x11] = -1;
        }
        else {
          piVar4[0x11] = *(int *)(iVar14 + 4);
          uVar8 = *(undefined2 *)(iVar14 + 8);
        }
        *(undefined2 *)(piVar4 + 0x12) = uVar8;
        piVar6 = DAT_000269e0;
        piVar4[0xd] = iVar15;
        piVar4[0x13] = (int)piVar16;
        piVar4[0x14] = *piVar6;
        piVar13[0x1f] = (int)piVar4;
        iVar1 = cfg80211_scan(piVar13);
        if (iVar1 == 0) {
          nl80211_send_scan_start(piVar13,iVar15);
          if (*(int *)(iVar15 + 0x10) != 0) {
            dev_hold();
            return 0;
          }
          return 0;
        }
      }
    }
  }
LAB_00026782:
  piVar13[0x1f] = 0;
  kfree(piVar4);
  return iVar1;
}



/* ===== nl80211_build_scan_msg @ 000269e4 size=56 ===== */

int nl80211_build_scan_msg(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = alloc_skb(0xf00,0xcc0,param_3,param_4,param_4);
  iVar4 = iVar1;
  if (iVar1 != 0) {
    if (param_3 == 0) {
      uVar3 = 0x22;
    }
    else {
      uVar3 = 0x23;
    }
    iVar2 = nl80211_prep_scan_msg_constprop_25(iVar1,param_1,param_2,uVar3);
    if (iVar2 < 0) {
      iVar4 = 0;
      kfree_skb(iVar1);
    }
  }
  return iVar4;
}



/* ===== nl80211_send_scan_msg @ 00026a1c size=16 ===== */

void nl80211_send_scan_msg(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    genlmsg_multicast_netns_constprop_37(param_2,1,0xcc0);
    return;
  }
  return;
}



/* ===== nl80211_send_sched_scan @ 00026a2c size=154 ===== */

void nl80211_send_sched_scan(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = alloc_skb(0xf00,0xcc0,param_3,param_4,param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,param_2 & 0xff);
  if (iVar2 != 0) {
    iVar3 = wiphy_to_rdev(param_1[0x15]);
    iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(iVar3 + 0x38));
    if ((iVar3 == 0) &&
       (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_1[0x16] + 0xa8)), iVar3 == 0)) {
      iVar3 = nla_put_u64_64bit(iVar1,0x58,*param_1,param_1[1],0xe5);
      if (iVar3 == 0) {
        *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
        genlmsg_multicast_netns_constprop_37(iVar1,1,0xcc0);
        return;
      }
    }
    genlmsg_cancel(iVar1,iVar2);
  }
  kfree_skb(iVar1);
  return;
}



/* ===== nl80211_start_sched_scan @ 00026ac6 size=214 ===== */

int * nl80211_start_sched_scan(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  piVar4 = *(int **)(param_2 + 0x18);
  iVar8 = *(int *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(iVar8 + 0x1c4);
  if ((*(char *)((int)piVar4 + 0x1e5) == '\0') || (*(int *)(*piVar4 + 0x118) == 0)) {
    piVar1 = (int *)0xffffffa1;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x3fc);
    piVar1 = (int *)cfg80211_sched_scan_req_possible
                              (piVar4,iVar3 != 0,param_3,iVar3,param_1,iVar3,param_3);
    if (piVar1 == (int *)0x0) {
      piVar7 = piVar4 + 0x68;
      piVar1 = (int *)nl80211_parse_sched_scan
                                (piVar7,uVar5,*(undefined4 *)(param_2 + 0x14),
                                 *(undefined1 *)((int)piVar4 + 0x1e7));
      if ((piVar1 < (int *)0xfffff001) || (piVar1 == (int *)0x0)) {
        if ((iVar3 != 0) && (1 < *(byte *)((int)piVar4 + 0x1e5))) {
          iVar3 = piVar4[0x18] + 1;
          iVar6 = piVar4[0x19] + (uint)(0xfffffffe < (uint)piVar4[0x18]);
          piVar4[0x18] = iVar3;
          piVar4[0x19] = iVar6;
          if (iVar3 == 0 && iVar6 == 0) {
            iVar3 = 1;
            iVar6 = 0;
            piVar4[0x18] = 1;
            piVar4[0x19] = 0;
          }
          *piVar1 = iVar3;
          piVar1[1] = iVar6;
        }
        piVar2 = (int *)(**(code **)(*piVar4 + 0x118))(piVar7,iVar8,piVar1);
        if (piVar2 == (int *)0x0) {
          piVar1[0x15] = (int)piVar7;
          piVar1[0x16] = iVar8;
          if (*(int *)(*(int *)(param_2 + 0x14) + 0x330) != 0) {
            piVar1[0x1b] = *(int *)(param_2 + 4);
          }
          cfg80211_add_sched_scan_req(piVar4,piVar1);
          nl80211_send_sched_scan(piVar1,0x4b);
          piVar1 = piVar2;
        }
        else {
          kfree(piVar1);
          piVar1 = piVar2;
        }
      }
    }
  }
  return piVar1;
}



/* ===== nl80211_common_reg_change_event @ 00026b9c size=222 ===== */

void nl80211_common_reg_change_event(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = alloc_skb(0xf00,0xcc0,param_3,param_4,param_1,param_2,param_3);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = nl80211hdr_put(iVar2,0,0,0,param_1 & 0xff);
  if ((iVar3 == 0) || (iVar4 = nla_put_u8(iVar2,0x30,*(undefined1 *)(param_2 + 0xc)), iVar4 != 0))
  goto LAB_00026c02;
  sVar1 = *(short *)(param_2 + 0x14);
  if (sVar1 == 0x3030) {
    uVar6 = 1;
LAB_00026bde:
    iVar4 = nla_put_u8(iVar2,0x31,uVar6);
  }
  else {
    if (sVar1 == 0x3939) {
      uVar6 = 2;
      goto LAB_00026bde;
    }
    if ((sVar1 == 0x3839) || (*(char *)(param_2 + 0x1c) != '\0')) {
      uVar6 = 3;
      goto LAB_00026bde;
    }
    iVar4 = nla_put_u8(iVar2,0x31);
    if (iVar4 != 0) goto LAB_00026c02;
    iVar4 = nla_put_string(iVar2,0x21,param_2 + 0x14);
  }
  if ((iVar4 == 0) &&
     (((*(int *)(param_2 + 8) == -1 || (iVar4 = wiphy_idx_to_wiphy(), iVar4 == 0)) ||
      ((iVar5 = nla_put_be32(iVar2,1,*(undefined4 *)(param_2 + 8)), iVar5 == 0 &&
       ((-1 < *(int *)(iVar4 + 0x28) << 0x18 || (iVar4 = nla_put_flag(iVar2,0xd8), iVar4 == 0)))))))
     ) {
    *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
    genlmsg_multicast_allns(DAT_00026c7c,iVar2,0,2,0xa20);
    return;
  }
LAB_00026c02:
  kfree_skb(iVar2);
  return;
}



/* ===== nl80211_send_rx_auth @ 00026c80 size=32 ===== */

void nl80211_send_rx_auth(void)

{
  nl80211_send_mlme_event();
  return;
}



/* ===== nl80211_send_rx_assoc @ 00026ca0 size=32 ===== */

void nl80211_send_rx_assoc(void)

{
  nl80211_send_mlme_event();
  return;
}



/* ===== nl80211_send_deauth @ 00026cc0 size=32 ===== */

void nl80211_send_deauth(void)

{
  nl80211_send_mlme_event();
  return;
}



/* ===== nl80211_send_disassoc @ 00026ce0 size=32 ===== */

void nl80211_send_disassoc(void)

{
  nl80211_send_mlme_event();
  return;
}



/* ===== nl80211_send_auth_timeout @ 00026d00 size=18 ===== */

void nl80211_send_auth_timeout
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  nl80211_send_mlme_timeout(param_1,param_2,0x25,param_3,param_4,param_2,param_3);
  return;
}



/* ===== nl80211_send_assoc_timeout @ 00026d12 size=18 ===== */

void nl80211_send_assoc_timeout
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  nl80211_send_mlme_timeout(param_1,param_2,0x26,param_3,param_4,param_2,param_3);
  return;
}



/* ===== nl80211_send_connect_result @ 00026d24 size=362 ===== */

void nl80211_send_connect_result(int param_1,int param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_3[4] + param_3[6] + 100 + param_3[8] + param_3[0xb];
  if (param_3[0xc] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x10;
  }
  iVar4 = nlmsg_new(iVar1 + iVar4,param_4,param_3[0xb],iVar4,param_1,param_2,param_3);
  if (iVar4 == 0) {
    return;
  }
  iVar1 = nl80211hdr_put(iVar4,0,0,0,0x2e);
  if ((((iVar1 != 0) && (iVar2 = nla_put_be32(iVar4,1,*(undefined4 *)(param_1 + 0x38)), iVar2 == 0))
      && (iVar2 = nla_put_be32(iVar4,3,*(undefined4 *)(param_2 + 0xa8)), iVar2 == 0)) &&
     ((param_3[1] == 0 || (iVar2 = nla_put(iVar4,6), iVar2 == 0)))) {
    uVar3 = *param_3;
    if ((int)uVar3 < 0) {
      uVar3 = 1;
    }
    iVar2 = nla_put_u16(iVar4,0x48,uVar3 & 0xffff);
    if (((((iVar2 == 0) &&
          ((-1 < (int)*param_3 ||
           ((iVar2 = nla_put_flag(iVar4,0x41), iVar2 == 0 &&
            (iVar2 = nla_put_be32(iVar4,0xf8,param_3[0xd]), iVar2 == 0)))))) &&
         ((param_3[3] == 0 || (iVar2 = nla_put(iVar4,0x4d,param_3[4]), iVar2 == 0)))) &&
        (((param_3[5] == 0 || (iVar2 = nla_put(iVar4,0x4e,param_3[6]), iVar2 == 0)) &&
         (((char)param_3[9] == '\0' ||
          (iVar2 = nla_put_u16(iVar4,0xfb,*(undefined2 *)((int)param_3 + 0x26)), iVar2 == 0)))))) &&
       ((*param_3 != 0 ||
        (((param_3[7] == 0 || (iVar2 = nla_put(iVar4,0xf2,param_3[8]), iVar2 == 0)) &&
         (((param_3[10] == 0 || (iVar2 = nla_put(iVar4,0xfe,param_3[0xb]), iVar2 == 0)) &&
          ((param_3[0xc] == 0 || (iVar2 = nla_put(iVar4,0x55,0x10), iVar2 == 0)))))))))) {
      *(int *)(iVar1 + -0x14) = *(int *)(iVar4 + 0x98) - (iVar1 + -0x14);
      genlmsg_multicast_netns_constprop_37(iVar4,3,param_4);
      return;
    }
  }
  kfree_skb(iVar4);
  return;
}



/* ===== nl80211_send_roamed @ 00026e8e size=296 ===== */

void nl80211_send_roamed(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) == 0) {
    iVar4 = *(int *)(param_3 + 8);
  }
  else {
    iVar4 = *(int *)(param_3 + 4) + 0x2c;
  }
  iVar3 = *(int *)(param_3 + 0x10) + *(int *)(param_3 + 0x18) + 100 + *(int *)(param_3 + 0x20) +
          *(int *)(param_3 + 0x2c);
  if (*(int *)(param_3 + 0x30) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x10;
  }
  iVar3 = nlmsg_new(iVar1 + iVar3,param_4,*(int *)(param_3 + 0x2c),iVar3,param_1,param_2);
  if (iVar3 != 0) {
    iVar1 = nl80211hdr_put(iVar3,0,0,0,0x2f);
    if ((((((iVar1 != 0) &&
           (iVar2 = nla_put_be32(iVar3,1,*(undefined4 *)(param_1 + 0x38)), iVar2 == 0)) &&
          (iVar2 = nla_put_be32(iVar3,3,*(undefined4 *)(param_2 + 0xa8)), iVar2 == 0)) &&
         (iVar4 = nla_put(iVar3,6,6,iVar4), iVar4 == 0)) &&
        ((((*(int *)(param_3 + 0xc) == 0 ||
           (iVar4 = nla_put(iVar3,0x4d,*(undefined4 *)(param_3 + 0x10)), iVar4 == 0)) &&
          ((*(int *)(param_3 + 0x14) == 0 ||
           (iVar4 = nla_put(iVar3,0x4e,*(undefined4 *)(param_3 + 0x18)), iVar4 == 0)))) &&
         ((*(char *)(param_3 + 0x24) == '\0' ||
          (iVar4 = nla_put_u16(iVar3,0xfb,*(undefined2 *)(param_3 + 0x26)), iVar4 == 0)))))) &&
       (((*(int *)(param_3 + 0x1c) == 0 ||
         (iVar4 = nla_put(iVar3,0xf2,*(undefined4 *)(param_3 + 0x20)), iVar4 == 0)) &&
        (((*(int *)(param_3 + 0x28) == 0 ||
          (iVar4 = nla_put(iVar3,0xfe,*(undefined4 *)(param_3 + 0x2c)), iVar4 == 0)) &&
         ((*(int *)(param_3 + 0x30) == 0 || (iVar4 = nla_put(iVar3,0x55,0x10), iVar4 == 0)))))))) {
      *(int *)(iVar1 + -0x14) = *(int *)(iVar3 + 0x98) - (iVar1 + -0x14);
      genlmsg_multicast_netns_constprop_37(iVar3,3,param_4);
      return;
    }
    kfree_skb(iVar3);
    return;
  }
  return;
}



/* ===== nl80211_send_port_authorized @ 00026fb6 size=142 ===== */

void nl80211_send_port_authorized(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = alloc_skb(0xf00,0xcc0,param_3,param_4,param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x7d);
  if ((((iVar2 != 0) && (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(param_1 + 0x38)), iVar3 == 0))
      && (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_2 + 0xa8)), iVar3 == 0)) &&
     (iVar3 = nla_put(iVar1,6,6,param_3), iVar3 == 0)) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,0xcc0);
    return;
  }
  kfree_skb(iVar1);
  return;
}



/* ===== nl80211_send_disconnected @ 00027044 size=196 ===== */

void nl80211_send_disconnected
               (int param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = nlmsg_new(param_5 + 100,0xcc0,param_3,param_4,param_1,param_2,param_3);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x30);
  if ((((((iVar2 != 0) &&
         (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(param_1 + 0x38)), iVar3 == 0)) &&
        (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_2 + 0xa8)), iVar3 == 0)) &&
       ((param_3 == 0 || (iVar3 = nla_put_u16(iVar1,0x36,param_3), iVar3 == 0)))) &&
      ((param_6 == '\0' || (iVar3 = nla_put_flag(iVar1,0x47), iVar3 == 0)))) &&
     ((param_4 == 0 || (iVar3 = nla_put(iVar1,0x2a,param_5,param_4), iVar3 == 0)))) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,0xcc0);
    return;
  }
  kfree_skb(iVar1);
  return;
}



/* ===== nl80211_send_ibss_bssid @ 00027108 size=140 ===== */

void nl80211_send_ibss_bssid(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = alloc_skb(0xf00,param_4,param_3,param_4,param_1,param_2,param_3);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x2b);
  if ((((iVar2 != 0) && (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(param_1 + 0x38)), iVar3 == 0))
      && (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_2 + 0xa8)), iVar3 == 0)) &&
     (iVar3 = nla_put(iVar1,6,6,param_3), iVar3 == 0)) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,param_4);
    return;
  }
  kfree_skb(iVar1);
  return;
}



/* ===== nl80211_michael_mic_failure @ 00027194 size=216 ===== */

void nl80211_michael_mic_failure
               (int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,int param_6,
               undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = alloc_skb(0xf00,param_7);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x29);
  if ((((((iVar2 != 0) &&
         (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(param_1 + 0x38)), iVar3 == 0)) &&
        (iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_2 + 0xa8)), iVar3 == 0)) &&
       ((param_3 == 0 || (iVar3 = nla_put(iVar1,6,6,param_3), iVar3 == 0)))) &&
      ((iVar3 = nla_put_be32(iVar1,0x37,param_4), iVar3 == 0 &&
       ((param_5 == 0xffffffff || (iVar3 = nla_put_u8(iVar1,8,param_5 & 0xff), iVar3 == 0)))))) &&
     ((param_6 == 0 || (iVar3 = nla_put(iVar1,10,6,param_6), iVar3 == 0)))) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,param_7);
    return;
  }
  kfree_skb(iVar1);
  return;
}



/* ===== nl80211_send_beacon_hint_event @ 0002726c size=196 ===== */

void nl80211_send_beacon_hint_event
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  
  iVar1 = alloc_skb(0xf00,0xa20,param_3,param_4,param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x2a);
  if (iVar2 != 0) {
    uVar3 = get_wiphy_idx(param_1);
    iVar4 = nla_put_be32(iVar1,1,uVar3);
    if (((iVar4 == 0) &&
        (psVar5 = (short *)nla_nest_start_noflag(iVar1,0x3a), psVar5 != (short *)0x0)) &&
       (iVar4 = nl80211_msg_put_channel(iVar1,param_1,param_2,0), iVar4 == 0)) {
      *psVar5 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar5;
      psVar5 = (short *)nla_nest_start_noflag(iVar1,0x3b);
      if ((psVar5 != (short *)0x0) &&
         (iVar4 = nl80211_msg_put_channel(iVar1,param_1,param_3,0), iVar4 == 0)) {
        *psVar5 = (short)*(undefined4 *)(iVar1 + 0x98) - (short)psVar5;
        *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
        genlmsg_multicast_allns(DAT_00027330,iVar1,0,2,0xa20);
        return;
      }
    }
  }
  kfree_skb(iVar1);
  return;
}



/* ===== nl80211_send_mgmt @ 00027334 size=284 ===== */

undefined4
nl80211_send_mgmt(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = *(int *)(param_2 + 0x10);
  iVar1 = nlmsg_new(param_7 + 100,param_9);
  if (iVar1 != 0) {
    iVar2 = nl80211hdr_put(iVar1,0,0,0,0x3b);
    if (iVar2 != 0) {
      iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(param_1 + 0x38));
      if ((iVar3 == 0) &&
         ((iVar5 == 0 || (iVar5 = nla_put_be32(iVar1,3,*(undefined4 *)(iVar5 + 0xa8)), iVar5 == 0)))
         ) {
        uVar6 = wdev_id(param_2);
        iVar5 = nla_put_u64_64bit(iVar1,0x99,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0xe5);
        if (iVar5 == 0) {
          iVar3 = (int)((longlong)param_4 * (longlong)DAT_00027450 >> 0x26) - (param_4 >> 0x1f);
          iVar5 = nla_put_be32(iVar1,0x26,iVar3);
          if (((((iVar5 == 0) &&
                (iVar5 = nla_put_be32(iVar1,0x122,param_4 + iVar3 * -1000), iVar5 == 0)) &&
               ((param_5 == 0 || (iVar5 = nla_put_be32(iVar1,0x97,param_5), iVar5 == 0)))) &&
              (iVar5 = nla_put(iVar1,0x33,param_7,param_6), iVar5 == 0)) &&
             ((param_8 == 0 || (iVar5 = nla_put_be32(iVar1,0xbc,param_8), iVar5 == 0)))) {
            *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
            uVar4 = genlmsg_unicast_constprop_36(iVar1,param_3);
            return uVar4;
          }
        }
      }
      kfree_skb(iVar1);
      return 0xffffff97;
    }
    kfree_skb(iVar1);
  }
  return 0xfffffff4;
}



/* ===== nl80211_radar_notify @ 00027454 size=188 ===== */

void nl80211_radar_notify
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar1 = alloc_skb(0xf00,param_5,param_3,param_4,param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = nl80211hdr_put(iVar1,0,0,0,0x5e);
  if ((iVar2 == 0) || (iVar3 = nla_put_be32(iVar1,1,*(undefined4 *)(param_1 + 0x38)), iVar3 != 0))
  goto LAB_00027484;
  if (param_4 != 0) {
    uVar4 = *(undefined4 *)(param_4 + 0x1c4);
    iVar3 = nla_put_be32(iVar1,3,*(undefined4 *)(param_4 + 0xa8));
    if (iVar3 != 0) goto LAB_00027484;
    uVar5 = wdev_id(uVar4);
    iVar3 = nla_put_u64_64bit(iVar1,0x99,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xe5);
    if (iVar3 != 0) goto LAB_00027484;
  }
  iVar3 = nla_put_be32(iVar1,0xa8,param_3);
  if ((iVar3 == 0) && (iVar3 = nl80211_send_chandef(iVar1,param_2), iVar3 == 0)) {
    *(int *)(iVar2 + -0x14) = *(int *)(iVar1 + 0x98) - (iVar2 + -0x14);
    genlmsg_multicast_netns_constprop_37(iVar1,3,param_5);
    return;
  }
LAB_00027484:
  kfree_skb(iVar1);
  return;
}



/* ===== nl80211_send_ap_stopped @ 00027510 size=146 ===== */

void nl80211_send_ap_stopped(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = wiphy_to_rdev(*param_1);
  iVar2 = alloc_skb(0xf00,0xcc0);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = nl80211hdr_put(iVar2,0,0,0,0x10,param_2,param_3);
  if (((iVar3 != 0) && (iVar1 = nla_put_be32(iVar2,1,*(undefined4 *)(iVar1 + 0x38)), iVar1 == 0)) &&
     (iVar1 = nla_put_be32(iVar2,3,*(undefined4 *)(param_1[4] + 0xa8)), iVar1 == 0)) {
    uVar4 = wdev_id(param_1);
    iVar1 = nla_put_u64_64bit(iVar2,0x99,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xe5);
    if (iVar1 == 0) {
      *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
      genlmsg_multicast_netns_constprop_37(iVar2,3,0xcc0);
      return;
    }
  }
  kfree_skb(iVar2);
  return;
}



/* ===== nl80211_exit @ 000275a2 size=18 ===== */

void nl80211_exit(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  netlink_unregister_notifier(DAT_000275b4);
  genl_unregister_family(DAT_000275b8,extraout_r1,extraout_r2,in_r3);
  return;
}



/* ===== ether_addr_equal @ 000275bc size=22 ===== */

bool ether_addr_equal(int *param_1,int *param_2)

{
  return (short)param_1[1] == (short)param_2[1] && *param_2 == *param_1;
}



/* ===== wiphy_to_rdev @ 000275d2 size=8 ===== */

int wiphy_to_rdev(int param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x275d4);
    (*pcVar1)();
  }
  return param_1 + -0x1a0;
}



/* ===== cfg80211_process_deauth @ 000275dc size=114 ===== */

void cfg80211_process_deauth(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  iVar3 = param_2;
  uVar7 = param_3;
  uVar6 = wiphy_to_rdev(*param_1);
  iVar4 = (int)((ulonglong)uVar6 >> 0x20);
  iVar5 = param_1[4];
  uVar1 = *(undefined2 *)(iVar4 + 0x18);
  bVar2 = ether_addr_equal(param_2 + 10,*(undefined4 *)(iVar5 + 0x1cc));
  nl80211_send_deauth((int)uVar6,iVar5,param_2,param_3,0xcc0,iVar3,uVar7);
  if ((param_1[0x23] != 0) &&
     (iVar3 = ether_addr_equal(param_1[0x23] + 0x74,iVar4 + 0x10), iVar3 != 0)) {
    __cfg80211_disconnected(param_1[4],0,0,uVar1,bVar2 ^ 1);
    cfg80211_sme_deauth(param_1);
    return;
  }
  return;
}



/* ===== cfg80211_process_disassoc @ 0002764e size=110 ===== */

void cfg80211_process_disassoc(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = param_2;
  uVar5 = wiphy_to_rdev(*param_1);
  iVar4 = param_1[4];
  uVar1 = *(undefined2 *)((int)((ulonglong)uVar5 >> 0x20) + 0x18);
  bVar2 = ether_addr_equal(param_2 + 10,*(undefined4 *)(iVar4 + 0x1cc));
  nl80211_send_disassoc((int)uVar5,iVar4,param_2,param_3,0xcc0,iVar3);
  if ((param_1[0x23] != 0) &&
     (iVar3 = ether_addr_equal(param_1[0x23] + 0x74,param_2 + 0x10), iVar3 != 0)) {
    __cfg80211_disconnected(param_1[4],0,0,uVar1,bVar2 ^ 1);
    cfg80211_sme_disassoc(param_1);
    return;
  }
  return;
}



/* ===== cfg80211_rx_mlme_mgmt @ 000276bc size=94 ===== */

void cfg80211_rx_mlme_mgmt(int param_1,ushort *param_2,uint param_3)

{
  undefined4 extraout_r2;
  ushort uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ushort *puVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1c4);
  if (1 < param_3) {
    uVar1 = *param_2 & 0xfc;
    if (uVar1 == 0xb0) {
      puVar4 = param_2;
      uVar3 = wiphy_to_rdev(*puVar2);
      nl80211_send_rx_auth
                ((int)uVar3,puVar2[4],(int)((ulonglong)uVar3 >> 0x20),extraout_r2,0xcc0,puVar4);
      cfg80211_sme_rx_auth(puVar2,param_2,param_3);
      return;
    }
    if (uVar1 == 0xc0) {
      cfg80211_process_deauth(puVar2);
      return;
    }
    if (uVar1 == 0xa0) {
      cfg80211_process_disassoc(puVar2);
      return;
    }
  }
  return;
}



/* ===== cfg80211_tx_mlme_mgmt @ 0002771a size=24 ===== */

void cfg80211_tx_mlme_mgmt(int param_1,ushort *param_2,uint param_3)

{
  if (param_3 < 2) {
    return;
  }
  if ((*param_2 & 0xfc) == 0xc0) {
    cfg80211_process_deauth();
    return;
  }
  cfg80211_process_disassoc(*(undefined4 *)(param_1 + 0x1c4));
  return;
}



/* ===== cfg80211_auth_timeout @ 00027732 size=36 ===== */

void cfg80211_auth_timeout(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1c4);
  uVar1 = wiphy_to_rdev(*puVar2,param_2,param_2);
  nl80211_send_auth_timeout(uVar1,param_1);
  cfg80211_sme_auth_timeout(puVar2);
  return;
}



/* ===== cfg80211_michael_mic_failure @ 00027756 size=40 ===== */

void cfg80211_michael_mic_failure(int param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  uVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  nl80211_michael_mic_failure
            ((int)uVar1,param_1,(int)((ulonglong)uVar1 >> 0x20),extraout_r2,extraout_r3,
             in_stack_00000000,in_stack_00000004);
  return;
}



/* ===== cfg80211_mgmt_registrations_update @ 0002777e size=210 ===== */

void cfg80211_mgmt_registrations_update(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  piVar2 = (int *)wiphy_to_rdev(*param_1);
  memset(&local_28,0,0x10);
  rtnl_is_locked();
  *(int *)(((uint)&local_28 & 0xffffe000) + 4) =
       *(int *)(((uint)&local_28 & 0xffffe000) + 4) + 0x200;
  uVar1 = DAT_00027854;
  if ((int)((uint)*(byte *)(param_1 + 8) << 0x1f) < 0) {
    for (piVar5 = (int *)piVar2[0x10e]; piVar5 != piVar2 + 0x10e; piVar5 = (int *)*piVar5) {
      for (puVar3 = (undefined4 *)piVar5[4]; puVar3 != piVar5 + 4; puVar3 = (undefined4 *)*puVar3) {
        uVar4 = 1 << (*(ushort *)(puVar3 + 5) >> 4 & 0xff);
        uVar6 = uVar4;
        if (*(char *)((int)puVar3 + 0x16) == '\0') {
          uVar6 = 0;
        }
        local_28 = local_28 | uVar4;
        local_20 = local_20 | uVar6;
        if (piVar5 + -2 == param_1) {
          local_24 = local_24 | uVar4;
          local_1c = local_1c | uVar6;
        }
      }
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
    __local_bh_enable_ip(uVar1,0x200);
    _cond_resched();
    if (*(code **)(*piVar2 + 0x10c) != (code *)0x0) {
      (**(code **)(*piVar2 + 0x10c))(piVar2 + 0x68,param_1,&local_28);
    }
  }
  else {
    __local_bh_enable_ip(DAT_00027850,0x200);
  }
  return;
}



/* ===== cfg80211_rx_mgmt_khz @ 00027858 size=188 ===== */

ushort cfg80211_rx_mgmt_khz
                 (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  ushort *extraout_r3;
  ushort uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_48;
  int local_44;
  int iStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_30;
  undefined4 local_2c;
  
  local_2c = param_3;
  uVar2 = wiphy_to_rdev(*param_1);
  uVar7 = (uint)*extraout_r3;
  uVar1 = *(ushort *)(*(int *)(extraout_r2 + 0x10) + param_1[1] * 4 + 2) >> ((uVar7 & 0xff) >> 4);
  uVar5 = uVar1 & 1;
  if ((uVar1 & 1) != 0) {
    iVar3 = ieee80211_hdrlen(uVar7);
    local_30 = param_5 - iVar3;
    *(int *)(((uint)&local_48 & 0xffffe000) + 4) =
         *(int *)(((uint)&local_48 & 0xffffe000) + 4) + 0x200;
    for (puVar6 = (undefined4 *)param_1[6]; puVar6 != param_1 + 6; puVar6 = (undefined4 *)*puVar6) {
      if ((((uint)*(ushort *)(puVar6 + 5) == (uVar7 & 0xfc)) && ((int)puVar6[4] <= local_30)) &&
         (iVar4 = memcmp((void *)((int)puVar6 + 0x17),(void *)(param_4 + iVar3),puVar6[4]),
         iVar4 == 0)) {
        local_38 = 0xa20;
        local_3c = param_6;
        iStack_40 = param_5;
        local_48 = local_2c;
        local_44 = param_4;
        iVar4 = nl80211_send_mgmt(uVar2,param_1,puVar6[3],param_2);
        if (iVar4 == 0) {
          uVar5 = 1;
          goto LAB_00027902;
        }
      }
    }
    uVar5 = 0;
LAB_00027902:
    __local_bh_enable_ip(DAT_00027914,0x200);
  }
  return uVar5;
}



/* ===== cfg80211_unhold_bss @ 00027918 size=58 ===== */

void cfg80211_unhold_bss(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x30);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x60) + -0x18);
    HintPreloadData(piVar2);
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + -1;
  }
  return;
}



/* ===== cfg80211_rx_assoc_resp @ 00027952 size=174 ===== */

void cfg80211_rx_assoc_resp
               (int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  int extraout_r2;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_60;
  int local_5c;
  int iStack_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int iStack_48;
  undefined1 auStack_44 [32];
  
  puVar3 = *(undefined4 **)(param_1 + 0x1c4);
  uVar2 = *puVar3;
  uVar5 = wiphy_to_rdev(uVar2);
  if (*(int *)*(undefined4 *)((ulonglong)uVar5 >> 0x20) == 4) {
    iVar1 = extraout_r2 + 0x1c;
    iVar4 = param_4 + -0x1c;
  }
  else {
    iVar1 = extraout_r2 + 0x1e;
    iVar4 = param_4 + -0x1e;
  }
  memset(auStack_44,0,0x1c);
  local_60 = (uint)*(ushort *)(param_3 + 0x1a);
  local_5c = param_3 + 0x10;
  local_54 = param_6;
  local_50 = param_7;
  iStack_58 = param_2;
  local_4c = iVar1;
  iStack_48 = iVar4;
  iVar1 = cfg80211_sme_rx_assoc_resp(puVar3);
  if (iVar1 == 0) {
    nl80211_send_rx_assoc((int)uVar5,param_1,param_3,param_4,0xcc0,param_5,param_6,param_7);
    __cfg80211_connect_result(param_1,&local_60,local_60 == 0);
  }
  else {
    cfg80211_unhold_bss(param_2 + -0x48);
    cfg80211_put_bss(uVar2,param_2);
  }
  return;
}



/* ===== cfg80211_assoc_timeout @ 00027a00 size=58 ===== */

void cfg80211_assoc_timeout(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1c4);
  uVar1 = *puVar2;
  uVar3 = wiphy_to_rdev(uVar1);
  nl80211_send_assoc_timeout((int)uVar3,param_1,(int)((ulonglong)uVar3 >> 0x20) + 0x2c,0xcc0);
  cfg80211_sme_assoc_timeout(puVar2);
  cfg80211_unhold_bss(param_2 + -0x48);
  cfg80211_put_bss(uVar1,param_2);
  return;
}



/* ===== cfg80211_abandon_assoc @ 00027a3a size=34 ===== */

void cfg80211_abandon_assoc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 0x1c4);
  cfg80211_sme_abandon_assoc();
  cfg80211_unhold_bss(param_2 + -0x48);
  cfg80211_put_bss(uVar1,param_2,extraout_r2,param_4);
  return;
}



/* ===== cfg80211_mlme_auth @ 00027a5c size=180 ===== */

undefined4
cfg80211_mlme_auth(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                  int param_10,int param_11,uint param_12,undefined4 param_13,undefined4 param_14)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int iStack_3c;
  int local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = *(int *)(param_2 + 0x1c4);
  memset(&local_48,0,0x18);
  local_38 = param_10;
  local_34 = (undefined1)param_11;
  local_44 = param_8;
  local_33 = (undefined1)param_12;
  local_40 = param_9;
  local_30 = param_13;
  local_2c = param_14;
  if ((param_4 == 1) && (((param_10 == 0 || (param_11 == 0)) || (3 < param_12)))) {
    uVar1 = 0xffffffea;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x8c);
    iStack_3c = param_4;
    if ((iVar3 == 0) || (iVar3 = ether_addr_equal(param_5,iVar3 + 0x74), iVar3 == 0)) {
      piVar2 = param_1 + 0x68;
      local_48 = cfg80211_get_bss(piVar2,param_3,param_5,param_6,param_7,0,2);
      if (local_48 == 0) {
        uVar1 = 0xfffffffe;
      }
      else {
        uVar1 = (**(code **)(*param_1 + 0x9c))(piVar2,param_2,&local_48);
        cfg80211_put_bss(piVar2,local_48);
      }
    }
    else {
      uVar1 = 0xffffff8e;
    }
  }
  return uVar1;
}



/* ===== cfg80211_oper_and_ht_capa @ 00027b10 size=42 ===== */

void cfg80211_oper_and_ht_capa(void *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (param_2 != 0) {
    pbVar2 = (byte *)((int)param_1 + -1);
    pbVar1 = (byte *)(param_2 + -1);
    while (pbVar2 != (byte *)((int)param_1 + 0x19)) {
      pbVar2 = pbVar2 + 1;
      pbVar1 = pbVar1 + 1;
      *pbVar2 = *pbVar2 & *pbVar1;
    }
    return;
  }
  memset(param_1,0,0x1a);
  return;
}



/* ===== cfg80211_oper_and_vht_capa @ 00027b3a size=36 ===== */

void cfg80211_oper_and_vht_capa(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    pbVar2 = (byte *)((int)param_1 + -1);
    pbVar1 = (byte *)(param_2 + -1);
    while (pbVar2 != (byte *)((int)param_1 + 0xb)) {
      pbVar2 = pbVar2 + 1;
      pbVar1 = pbVar1 + 1;
      *pbVar2 = *pbVar2 & *pbVar1;
    }
  }
  return;
}



/* ===== cfg80211_mlme_assoc @ 00027b5e size=204 ===== */

int cfg80211_mlme_assoc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,int *param_7)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x1c4) + 0x8c);
  if ((iVar2 == 0) || ((param_7[2] != 0 && (iVar2 = ether_addr_equal(iVar2 + 0x74), iVar2 != 0)))) {
    cfg80211_oper_and_ht_capa((int)param_7 + 0x7e,param_1[0x10c]);
    piVar3 = param_1 + 0x68;
    cfg80211_oper_and_vht_capa(param_7 + 0x29,param_1[0x10d]);
    iVar2 = cfg80211_get_bss(piVar3,param_3,param_4,param_5,param_6,0,2);
    *param_7 = iVar2;
    if (iVar2 == 0) {
      iVar2 = -2;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0xa0))(piVar3,param_2,param_7);
      if (iVar2 == 0) {
        iVar4 = *param_7;
        piVar3 = (int *)(iVar4 + -0x18);
        HintPreloadData(piVar3);
        do {
          ExclusiveAccess(piVar3);
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = *piVar3 + 1;
        iVar4 = *(int *)(iVar4 + 0x18);
        if (iVar4 != 0) {
          piVar3 = (int *)(iVar4 + -0x18);
          HintPreloadData(piVar3);
          do {
            ExclusiveAccess(piVar3);
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = *piVar3 + 1;
        }
      }
      else {
        cfg80211_put_bss(piVar3,*param_7);
      }
    }
  }
  else {
    iVar2 = -0x72;
  }
  return iVar2;
}



/* ===== cfg80211_mlme_deauth @ 00027c2a size=108 ===== */

void cfg80211_mlme_deauth
               (int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined2 param_6,char param_7)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined2 local_1c;
  char local_1a;
  
  iVar2 = *(int *)(param_2 + 0x1c4);
  local_20 = param_5;
  local_1a = param_7;
  local_1c = param_6;
  local_28 = param_3;
  uStack_24 = param_4;
  if ((param_7 == '\0') ||
     ((*(int *)(iVar2 + 0x8c) != 0 &&
      (iVar1 = ether_addr_equal(*(int *)(iVar2 + 0x8c) + 0x74,param_3), iVar1 != 0)))) {
    iVar1 = ether_addr_equal(iVar2 + 0x7c,param_3);
    if ((iVar1 != 0) ||
       ((*(int *)(iVar2 + 0x8c) != 0 &&
        (iVar1 = ether_addr_equal(*(int *)(iVar2 + 0x8c) + 0x74,param_3), iVar1 != 0)))) {
      *(undefined4 *)(iVar2 + 0x68) = 0;
    }
    (**(code **)(*param_1 + 0xa4))(param_1 + 0x68,param_2,&local_28);
  }
  return;
}



/* ===== cfg80211_mlme_disassoc @ 00027c96 size=100 ===== */

undefined4
cfg80211_mlme_disassoc
          (int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined2 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = *(int *)(param_2 + 0x1c4);
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  memset(&local_28,0,0x10);
  iVar3 = *(int *)(iVar3 + 0x8c);
  local_20 = param_5;
  local_1c._0_3_ = CONCAT12(param_7,param_6);
  if ((iVar3 == 0) ||
     (local_24 = param_4, iVar1 = ether_addr_equal(iVar3 + 0x74,param_3), iVar1 == 0)) {
    uVar2 = 0xffffff95;
  }
  else {
    local_28 = (int *)(iVar3 + 0x48);
    uVar2 = (**(code **)(*param_1 + 0xa8))(param_1 + 0x68,param_2,&local_28);
  }
  return uVar2;
}



/* ===== cfg80211_mlme_down @ 00027cfa size=58 ===== */

void cfg80211_mlme_down(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 local_a;
  
  if ((*(int *)(*param_1 + 0xa4) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_2 + 0x1c4) + 0x8c), iVar1 != 0)) {
    local_a = *(undefined2 *)(iVar1 + 0x78);
    local_e = (undefined2)*(undefined4 *)(iVar1 + 0x74);
    uStack_c = (undefined2)((uint)*(undefined4 *)(iVar1 + 0x74) >> 0x10);
    cfg80211_mlme_deauth(param_1,param_2,&local_e,0,0,3,0,param_4);
  }
  return;
}



/* ===== cfg80211_mgmt_registrations_update_wk @ 00027d34 size=46 ===== */

void cfg80211_mgmt_registrations_update_wk(int param_1)

{
  int *piVar1;
  
  rtnl_lock();
  for (piVar1 = *(int **)(param_1 + 0x2b0); piVar1 != (int *)(param_1 + 0x2b0);
      piVar1 = (int *)*piVar1) {
    cfg80211_mgmt_registrations_update(piVar1 + -2);
  }
  rtnl_unlock();
  return;
}



/* ===== cfg80211_mlme_register_mgmt @ 00027d62 size=354 ===== */

undefined4
cfg80211_mlme_register_mgmt
          (undefined4 *param_1,int param_2,uint param_3,void *param_4,size_t param_5,char param_6,
          undefined4 *param_7)

{
  int *piVar1;
  int iVar2;
  uint extraout_r2;
  undefined4 *puVar3;
  size_t __n;
  int extraout_r3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_38 [4];
  int local_34;
  int local_30;
  undefined4 *local_2c;
  
  local_30 = param_2;
  wiphy_to_rdev(*param_1);
  if (*(int *)(extraout_r3 + 0x10) == 0) {
    uVar5 = 0xffffffa1;
  }
  else {
    uVar5 = DAT_00027ec4;
    if (((((extraout_r2 & 0xc) == 0) && (uVar5 = DAT_00027ec8, (extraout_r2 & 0xffffff03) == 0)) &&
        (uVar5 = DAT_00027ecc,
        (int)((uint)(*(ushort *)(*(int *)(extraout_r3 + 0x10) + param_1[1] * 4 + 2) >>
                    ((int)param_3 >> 4 & 0xffU)) << 0x1f) < 0)) &&
       (((param_1[1] != 2 || ((param_3 & 0xf0) != 0xb0)) ||
        ((uVar5 = DAT_00027ed0, param_4 != (void *)0x0 && (1 < (int)param_5)))))) {
      piVar1 = (int *)__kmalloc(param_5 + 0x18,0xdc0);
      if (piVar1 == (int *)0x0) {
        uVar5 = 0xfffffff4;
      }
      else {
        *(int *)(((uint)auStack_38 & 0xffffe000) + 4) =
             *(int *)(((uint)auStack_38 & 0xffffe000) + 4) + 0x200;
        puVar4 = param_1 + 6;
        puVar3 = (undefined4 *)*puVar4;
        local_34 = (int)puVar3;
        for (; puVar3 != puVar4; puVar3 = (undefined4 *)*puVar3) {
          if (*(ushort *)(puVar3 + 5) == param_3) {
            __n = puVar3[4];
            if ((int)param_5 <= (int)puVar3[4]) {
              __n = param_5;
            }
            local_2c = puVar4;
            iVar2 = memcmp((void *)((int)puVar3 + 0x17),param_4,__n);
            puVar4 = local_2c;
            if (iVar2 == 0) {
              if (*(char *)((int)puVar3 + 0x16) == param_6) {
                if (param_7 != (undefined4 *)0x0) {
                  *param_7 = DAT_00027ed8;
                }
                kfree(piVar1);
                __local_bh_enable_ip(DAT_00027edc,0x200);
                return 0xffffff8e;
              }
              *(char *)((int)puVar3 + 0x16) = param_6;
              kfree(piVar1);
              goto LAB_00027e74;
            }
          }
        }
        memcpy((void *)((int)piVar1 + 0x17),param_4,param_5);
        *(short *)(piVar1 + 5) = (short)param_3;
        piVar1[2] = (int)param_1;
        *(char *)((int)piVar1 + 0x16) = param_6;
        piVar1[4] = param_5;
        piVar1[3] = local_30;
        *(int **)(local_34 + 4) = piVar1;
        *piVar1 = local_34;
        piVar1[1] = (int)puVar3;
        param_1[6] = piVar1;
LAB_00027e74:
        uVar5 = DAT_00027ed4;
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
        __local_bh_enable_ip(uVar5,0x200);
        cfg80211_mgmt_registrations_update(param_1);
        uVar5 = 0;
      }
    }
    else {
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = uVar5;
      }
      uVar5 = 0xffffffea;
    }
  }
  return uVar5;
}



/* ===== cfg80211_mlme_unregister_socket @ 00027ee0 size=176 ===== */

void cfg80211_mlme_unregister_socket(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar2 = (int *)wiphy_to_rdev(*param_1);
  *(int *)(((uint)&stack0xffffffe0 & 0xffffe000) + 4) =
       *(int *)(((uint)&stack0xffffffe0 & 0xffffe000) + 4) + 0x200;
  puVar1 = DAT_00027f94;
  piVar3 = (int *)param_1[6];
  piVar7 = (int *)*piVar3;
  while (piVar3 != param_1 + 6) {
    if (piVar3[3] == param_2) {
      iVar5 = *piVar3;
      piVar6 = (int *)piVar3[1];
      *(int **)(iVar5 + 4) = piVar6;
      *piVar6 = iVar5;
      *piVar3 = 0x100;
      piVar3[1] = 0x122;
      kfree();
      uVar4 = *puVar1;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
      queue_work_on(1,uVar4,piVar2 + 0x62);
    }
    piVar3 = piVar7;
    piVar7 = (int *)*piVar7;
  }
  __local_bh_enable_ip(DAT_00027f90,0x200);
  if ((param_2 != 0) && (piVar2[0x3e] == param_2)) {
    piVar2[0x3e] = 0;
    (**(code **)(*piVar2 + 0x154))(piVar2 + 0x68,param_1);
  }
  if (param_1[0x35] == param_2) {
    param_1[0x35] = 0;
  }
  return;
}



/* ===== cfg80211_mlme_purge_registrations @ 00027f98 size=104 ===== */

void cfg80211_mlme_purge_registrations(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  wiphy_to_rdev(*param_1);
  *(int *)(((uint)&stack0xffffffe8 & 0xffffe000) + 4) =
       *(int *)(((uint)&stack0xffffffe8 & 0xffffe000) + 4) + 0x200;
  piVar2 = (int *)param_1[6];
  piVar5 = (int *)*piVar2;
  while (uVar1 = DAT_00028000, piVar2 != param_1 + 6) {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    *piVar2 = 0x100;
    piVar2[1] = 0x122;
    kfree();
    piVar2 = piVar5;
    piVar5 = (int *)*piVar5;
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  __local_bh_enable_ip(uVar1,0x200);
  cfg80211_mgmt_registrations_update(param_1);
  return;
}



/* ===== cfg80211_mlme_mgmt_tx @ 00028004 size=352 ===== */

int cfg80211_mlme_mgmt_tx(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  
  if ((*(int *)(*param_2 + 0x10) == 0) || (*(int *)(*param_1 + 0xf4) == 0)) {
    return -0x5f;
  }
  if (*(uint *)(param_3 + 0x10) < 0x19) {
    return -0x16;
  }
  puVar8 = *(ushort **)(param_3 + 0xc);
  uVar1 = *puVar8;
  if ((uVar1 & 0xc) != 0) {
    return -0x16;
  }
  if (-1 < (int)((uint)(*(ushort *)(*(int *)(*param_2 + 0x10) + param_2[1] * 4) >>
                       ((uVar1 & 0xff) >> 4)) << 0x1f)) {
    return -0x16;
  }
  if (((uVar1 & 0xfc) == 0xd0) && ((char)puVar8[0xc] != '\x04')) {
    mutex_lock(param_2 + 9);
    uVar9 = param_2[1];
    if (uVar9 < 10) {
      uVar6 = 1 << (uVar9 & 0xff);
      if ((uVar6 & 0x218) == 0) {
        if ((uVar6 & 0x106) != 0) {
          if (param_2[0x23] != 0) {
            iVar7 = param_2[0x23] + 0x74;
            iVar4 = ether_addr_equal(iVar7,puVar8 + 8);
            if (iVar4 != 0) {
              if (uVar9 == 1) {
                iVar4 = 0;
              }
              else {
                iVar4 = ether_addr_equal(iVar7,puVar8 + 2);
                if (iVar4 == 0) {
                  iVar4 = -0x6b;
                }
                else {
                  iVar4 = 0;
                }
              }
              goto LAB_000280d0;
            }
          }
          iVar4 = -0x6b;
          goto LAB_000280d0;
        }
        if (-1 < (int)(uVar6 << 0x18)) goto LAB_0002809e;
        puVar5 = puVar8 + 8;
        puVar3 = puVar8 + 5;
      }
      else {
        puVar3 = puVar8 + 8;
        if (param_2[4] == 0) {
          puVar5 = (ushort *)((int)param_2 + 0x32);
        }
        else {
          puVar5 = *(ushort **)(param_2[4] + 0x1cc);
        }
      }
      iVar4 = ether_addr_equal(puVar3,puVar5);
      if (iVar4 == 0) {
        iVar4 = -0x16;
      }
      else {
        iVar4 = 0;
      }
    }
    else {
LAB_0002809e:
      iVar4 = -0x5f;
    }
LAB_000280d0:
    mutex_unlock(param_2 + 9);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  if (param_2[4] == 0) {
    iVar4 = (int)param_2 + 0x32;
  }
  else {
    iVar4 = *(int *)(param_2[4] + 0x1cc);
  }
  iVar4 = ether_addr_equal(puVar8 + 5,iVar4);
  if (iVar4 != 0) {
LAB_0002813e:
                    /* WARNING: Could not recover jumptable at 0x00028156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(*param_1 + 0xf4))(param_1 + 0x68,param_2,param_3,param_4);
    return iVar4;
  }
  if (((*puVar8 & 0xfc) == 0xd0) && ((char)puVar8[0xc] == '\x04')) {
    if (param_2[0x23] == 0) {
      bVar2 = *(byte *)((int)param_1 + 0x1d1) & 4;
    }
    else {
      bVar2 = *(byte *)((int)param_1 + 0x1d1) & 8;
    }
    if (bVar2 != 0) goto LAB_0002813e;
  }
  return -0x16;
}



/* ===== cfg80211_sched_dfs_chan_update @ 00028164 size=30 ===== */

void cfg80211_sched_dfs_chan_update(int param_1)

{
  cancel_delayed_work(param_1 + 0xcc);
  queue_delayed_work_on(1,*DAT_00028184,param_1 + 0xcc,0);
  return;
}



/* ===== cfg80211_radar_event @ 00028188 size=84 ===== */

void cfg80211_radar_event(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar3;
  
  puVar2 = param_2;
  uVar5 = wiphy_to_rdev();
  iVar1 = (int)uVar5;
  cfg80211_set_dfs_state(extraout_r3,(int)((ulonglong)uVar5 >> 0x20),1);
  cfg80211_sched_dfs_chan_update(iVar1);
  nl80211_radar_notify(iVar1,param_2,0,0,param_3,puVar2);
  puVar2 = param_2;
  puVar4 = (undefined4 *)(iVar1 + 0x130);
  do {
    puVar3 = puVar2 + 1;
    *puVar4 = *puVar2;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != param_2 + 7);
  queue_work_on(1,*DAT_000281dc,iVar1 + 0x14c);
  return;
}



/* ===== cfg80211_cac_event @ 000281e0 size=152 ===== */

void cfg80211_cac_event(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r2;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar5;
  
  puVar6 = *(undefined4 **)(param_1 + 0x1c4);
  uVar7 = *puVar6;
  iVar8 = param_1;
  puVar2 = param_2;
  iVar1 = wiphy_to_rdev(uVar7);
  if ((*(char *)((int)puVar6 + 0xdd) == '\0') && (extraout_r2 != 5)) {
    return;
  }
  if (puVar6[0x2b] == 0) {
    return;
  }
  if (param_3 != 2) {
    if (param_3 == 5) {
      uVar3 = 1;
      goto LAB_0002825a;
    }
    if (param_3 != 1) {
      return;
    }
    __msecs_to_jiffies(puVar6[0x39]);
    cfg80211_set_dfs_state(uVar7,param_2,2,*DAT_00028278,iVar8,puVar2);
    puVar2 = (undefined4 *)(iVar1 + 0x15c);
    puVar4 = param_2;
    do {
      puVar5 = puVar4 + 1;
      *puVar2 = *puVar4;
      puVar2 = puVar2 + 1;
      puVar4 = puVar5;
    } while (puVar5 != param_2 + 7);
    queue_work_on(1,*DAT_0002827c,iVar1 + 0x178);
    cfg80211_sched_dfs_chan_update(iVar1);
  }
  uVar3 = 0;
LAB_0002825a:
  *(undefined1 *)((int)puVar6 + 0xdd) = uVar3;
  nl80211_radar_notify(iVar1,param_2,param_3,param_1,param_4);
  return;
}



/* ===== cfg80211_dfs_channels_update_work @ 00028280 size=264 ===== */

void cfg80211_dfs_channels_update_work(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *local_5c;
  undefined1 auStack_44 [32];
  
  iVar10 = param_1 + 0xd4;
  rtnl_lock();
  piVar2 = DAT_00028388;
  uVar8 = 0;
  bVar1 = false;
  local_5c = (undefined4 *)(param_1 + 0x1a8);
  do {
    puVar5 = local_5c + 1;
    piVar11 = (int *)*local_5c;
    if (piVar11 != (int *)0x0) {
      for (iVar9 = 0; iVar9 < piVar11[3]; iVar9 = iVar9 + 1) {
        iVar7 = iVar9 * 0x38 + *piVar11;
        if ((*(int *)(iVar7 + 0xc) << 0x1c < 0) && (*(int *)(iVar7 + 0x2c) - 1U < 2)) {
          if (*(int *)(iVar7 + 0x2c) == 1) {
            uVar12 = 3;
            uVar4 = DAT_00028390;
          }
          else {
            iVar3 = regulatory_pre_cac_allowed(iVar10);
            if ((iVar3 != 0) || (iVar3 = cfg80211_any_wiphy_oper_chan(iVar10,iVar7), iVar3 != 0))
            goto LAB_00028360;
            uVar12 = 4;
            uVar4 = 2000;
          }
          iVar6 = *(int *)(iVar7 + 0x30);
          iVar3 = __msecs_to_jiffies(uVar4);
          iVar3 = iVar3 + iVar6;
          if (*piVar2 - iVar3 < 0) {
            if (bVar1) {
              if ((uint)(iVar3 - *piVar2) <= uVar8) {
                uVar8 = iVar3 - *piVar2;
              }
            }
            else {
              bVar1 = true;
              uVar8 = iVar3 - *piVar2;
            }
          }
          else {
            iVar3 = *piVar2;
            *(undefined4 *)(iVar7 + 0x2c) = 0;
            *(int *)(iVar7 + 0x30) = iVar3;
            cfg80211_chandef_create(auStack_44,iVar7,0);
            nl80211_radar_notify(param_1 + -0xcc,auStack_44,uVar12,0,0xa20);
            regulatory_propagate_dfs_state(iVar10,auStack_44,*(undefined4 *)(iVar7 + 0x2c),uVar12);
          }
        }
LAB_00028360:
      }
    }
    local_5c = puVar5;
    if (puVar5 == (undefined4 *)(param_1 + 0x1bc)) {
      rtnl_unlock();
      if (bVar1) {
        queue_delayed_work_on(1,*DAT_0002838c,param_1,uVar8);
      }
      return;
    }
  } while( true );
}



/* ===== wiphy_to_rdev.part.0 @ 00028394 size=1 ===== */

void wiphy_to_rdev_part_0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(2,0x28394);
  (*pcVar1)();
}



/* ===== cfg80211_ibss_joined @ 00028396 size=104 ===== */

void cfg80211_ibss_joined(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int extraout_r2;
  int iVar3;
  int *piVar4;
  int extraout_r3;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(param_1 + 0x1c4);
  iVar6 = *piVar5;
  iVar3 = param_3;
  iVar2 = param_4;
  if (iVar6 == 0) {
    wiphy_to_rdev_part_0();
    iVar3 = extraout_r2;
    iVar2 = extraout_r3;
  }
  if ((iVar3 != 0) &&
     (piVar1 = (int *)kmem_cache_alloc(*(undefined4 *)
                                        (((iVar2 << 0x1b) >> 0x1f) * -0x38 + DAT_00028400 + 4)),
     piVar1 != (int *)0x0)) {
    piVar1[2] = 3;
    iVar2 = *param_2;
    iVar3 = param_2[1];
    piVar1[5] = param_3;
    piVar1[3] = iVar2;
    *(short *)(piVar1 + 4) = (short)iVar3;
    disableIRQinterrupts();
    piVar4 = (int *)piVar5[0x22];
    piVar5[0x22] = (int)piVar1;
    *piVar1 = (int)(piVar5 + 0x21);
    piVar1[1] = (int)piVar4;
    *piVar4 = (int)piVar1;
    queue_work_on(1,*DAT_00028404,iVar6 + -0xe4,param_4);
    return;
  }
  return;
}



/* ===== cfg80211_unhold_bss @ 00028408 size=58 ===== */

void cfg80211_unhold_bss(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x30);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x60) + -0x18);
    HintPreloadData(piVar2);
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + -1;
  }
  return;
}



/* ===== __cfg80211_clear_ibss.constprop.1 @ 00028442 size=136 ===== */

void __cfg80211_clear_ibss_constprop_1(int param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = *(int **)(param_1 + 0x1c4);
  iVar6 = *piVar3;
  iVar7 = param_1;
  if (iVar6 == 0) {
    wiphy_to_rdev_part_0();
  }
  piVar5 = (int *)(iVar6 + -0x1a0);
  kfree_sensitive(piVar3[0x18]);
  piVar3[0x18] = 0;
  pcVar2 = *(code **)(*piVar5 + 0x160);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(iVar6,param_1,0,pcVar2,iVar7,param_2);
  }
  if (*(int *)(*piVar5 + 0x20) != 0) {
    uVar4 = 0;
    do {
      uVar1 = uVar4 & 0xff;
      uVar4 = uVar4 + 1;
      (**(code **)(*piVar5 + 0x20))(iVar6,param_1,uVar1,0,0);
    } while (uVar4 != 6);
  }
  if (piVar3[0x23] != 0) {
    cfg80211_unhold_bss();
    cfg80211_put_bss(*piVar3,piVar3[0x23] + 0x48);
  }
  piVar3[0x23] = 0;
  *(undefined1 *)(piVar3 + 0x16) = 0;
  memset(piVar3 + 0x2b,0,0x1c);
  cfg80211_sched_dfs_chan_update(piVar5);
  return;
}



/* ===== __cfg80211_ibss_joined @ 000284ca size=186 ===== */

void __cfg80211_ibss_joined(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x1c4);
  if (((piVar4[1] == 1) && ((char)piVar4[0x16] != '\0')) &&
     (iVar2 = cfg80211_get_bss(*piVar4,param_3,param_2,0,0,2,2), iVar2 != 0)) {
    if (piVar4[0x23] != 0) {
      cfg80211_unhold_bss();
      cfg80211_put_bss(*piVar4,piVar4[0x23] + 0x48);
    }
    piVar3 = (int *)(iVar2 + -0x18);
    HintPreloadData(piVar3);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
    if (*(int *)(iVar2 + 0x18) != 0) {
      piVar3 = (int *)(*(int *)(iVar2 + 0x18) + -0x18);
      HintPreloadData(piVar3);
      do {
        ExclusiveAccess(piVar3);
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = *piVar3 + 1;
    }
    piVar4[0x23] = iVar2 + -0x48;
    if (-1 < *(int *)(*piVar4 + 0x24) << 7) {
      cfg80211_upload_connect_keys(piVar4);
    }
    iVar2 = *piVar4;
    if (iVar2 == 0) {
      iVar2 = wiphy_to_rdev_part_0();
    }
    nl80211_send_ibss_bssid(iVar2 + -0x1a0,param_1,param_2,0xcc0);
    return;
  }
  return;
}



/* ===== __cfg80211_join_ibss @ 00028584 size=254 ===== */

int __cfg80211_join_ibss(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_2 + 0x1c4);
  rtnl_is_locked();
  if (*(char *)(iVar7 + 0x58) == '\0') {
    if (param_3[0xb] == 0) {
      iVar1 = *(int *)param_3[2];
      if (iVar1 == 1) {
        uVar2 = 2;
      }
      else if (iVar1 == 3) {
        uVar2 = 2;
      }
      else {
        uVar2 = 4;
      }
      iVar1 = param_1[iVar1 + 0x9d];
      for (uVar6 = 0; (int)uVar6 < *(int *)(iVar1 + 0x10); uVar6 = uVar6 + 1) {
        if ((uVar2 & *(uint *)(*(int *)(iVar1 + 4) + uVar6 * 0xc)) != 0) {
          param_3[0xb] = param_3[0xb] | 1 << (uVar6 & 0xff);
        }
      }
    }
    if ((param_4 == 0) || (-1 < *(int *)(param_4 + 0xa4))) {
      if (*(int *)(iVar7 + 0x60) != 0) {
        kfree_sensitive();
      }
      *(int *)(iVar7 + 0x60) = param_4;
      *(undefined1 *)(iVar7 + 200) = *(undefined1 *)(param_3 + 0xc);
      *(undefined1 *)(iVar7 + 0xc9) = *(undefined1 *)(param_3 + 0xd);
      uVar3 = param_3[3];
      uVar4 = param_3[4];
      uVar5 = param_3[5];
      *(undefined4 *)(iVar7 + 0xac) = param_3[2];
      *(undefined4 *)(iVar7 + 0xb0) = uVar3;
      *(undefined4 *)(iVar7 + 0xb4) = uVar4;
      *(undefined4 *)(iVar7 + 0xb8) = uVar5;
      uVar3 = param_3[7];
      uVar4 = param_3[8];
      *(undefined4 *)(iVar7 + 0xbc) = param_3[6];
      *(undefined4 *)(iVar7 + 0xc0) = uVar3;
      *(undefined4 *)(iVar7 + 0xc4) = uVar4;
      if (param_4 != 0) {
        param_3[0x20] = param_4;
        param_3[0x21] = *(undefined4 *)(param_4 + 0xa4);
      }
      iVar1 = (**(code **)(*param_1 + 0xb8))(param_1 + 0x68,param_2,param_3);
      if (iVar1 == 0) {
        memcpy((void *)(iVar7 + 0x38),(void *)*param_3,(uint)*(byte *)(param_3 + 10));
        *(undefined1 *)(iVar7 + 0x58) = *(undefined1 *)(param_3 + 10);
      }
      else {
        *(undefined4 *)(iVar7 + 0x60) = 0;
      }
    }
    else {
      iVar1 = -0x16;
    }
  }
  else {
    iVar1 = -0x72;
  }
  return iVar1;
}



/* ===== cfg80211_clear_ibss @ 00028682 size=32 ===== */

void cfg80211_clear_ibss(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c4) + 0x24;
  mutex_lock(iVar1);
  __cfg80211_clear_ibss_constprop_1(param_1);
  mutex_unlock(iVar1,extraout_r1,extraout_r2,param_4);
  return;
}



/* ===== __cfg80211_leave_ibss @ 000286a2 size=48 ===== */

int __cfg80211_leave_ibss(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1c4);
  if (*(char *)(iVar2 + 0x58) == '\0') {
    iVar1 = -0x43;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0xbc))(param_1 + 0x68);
    if (iVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x68) = 0;
      __cfg80211_clear_ibss_constprop_1(param_2);
    }
  }
  return iVar1;
}



/* ===== cfg80211_leave_ibss @ 000286d2 size=42 ===== */

undefined4 cfg80211_leave_ibss(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1c4) + 0x24;
  mutex_lock(iVar2);
  uVar1 = __cfg80211_leave_ibss(param_1,param_2,param_3);
  mutex_unlock(iVar2);
  return uVar1;
}



/* ===== cfg80211_sme_free @ 000286fc size=28 ===== */

void cfg80211_sme_free(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    kfree(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x120));
    kfree(*(undefined4 *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}



/* ===== queue_work @ 00028718 size=10 ===== */

void queue_work(undefined4 param_1,undefined4 param_2)

{
  queue_work_on(1,param_1,param_2);
  return;
}



/* ===== schedule_work @ 00028722 size=8 ===== */

void schedule_work(undefined4 param_1)

{
  queue_work(*DAT_0002872c,param_1);
  return;
}



/* ===== disconnect_work @ 00028730 size=110 ===== */

void disconnect_work(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  rtnl_lock();
  puVar2 = DAT_000287a0;
  bVar1 = true;
  for (puVar5 = (undefined4 *)*DAT_000287a0; puVar5 != puVar2; puVar5 = (undefined4 *)*puVar5) {
    for (piVar4 = (int *)puVar5[0x10d]; piVar4 != puVar5 + 0x10d; piVar4 = (int *)*piVar4) {
      mutex_lock(piVar4 + 7);
      if (((piVar4[0x15] != 0) || (piVar4[0x21] != 0)) ||
         (iVar3 = cfg80211_beaconing_iface_active(piVar4 + -2), iVar3 != 0)) {
        bVar1 = false;
      }
      mutex_unlock(piVar4 + 7);
    }
  }
  if (bVar1) {
    regulatory_hint_disconnect();
  }
  rtnl_unlock();
  return;
}



/* ===== wiphy_to_rdev @ 000287a4 size=8 ===== */

int wiphy_to_rdev(int param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x287a6);
    (*pcVar1)();
  }
  return param_1 + -0x1a0;
}



/* ===== cfg80211_get_conn_bss @ 000287ae size=104 ===== */

undefined4 *
cfg80211_get_conn_bss(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *param_1;
  iVar1 = wiphy_to_rdev(uVar4);
  puVar2 = (undefined4 *)param_1[0x17];
  puVar2 = (undefined4 *)
           cfg80211_get_bss(uVar4,*puVar2,puVar2[2],puVar2[4],puVar2[5],param_1[0x19],
                            *(byte *)(puVar2 + 9) ^ 1,param_4);
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = param_1[0x17];
    *(undefined4 *)(iVar3 + 0x114) = puVar2[0xb];
    *(undefined2 *)(iVar3 + 0x118) = *(undefined2 *)(puVar2 + 0xc);
    *(int *)(param_1[0x17] + 8) = param_1[0x17] + 0x114;
    *(undefined4 *)param_1[0x17] = *puVar2;
    *(undefined4 *)(param_1[0x17] + 0x110) = 2;
    schedule_work(iVar1 + 0xac);
  }
  return puVar2;
}



/* ===== get_order @ 00028816 size=16 ===== */

int get_order(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - 1U >> 0xc;
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = 0x20 - LZCOUNT(uVar1);
  }
  return iVar2;
}



/* ===== kzalloc @ 00028826 size=8 ===== */

void kzalloc(undefined4 param_1,uint param_2)

{
  __kmalloc(param_1,param_2 | 0x100);
  return;
}



/* ===== cfg80211_conn_scan @ 0002882e size=364 ===== */

int cfg80211_conn_scan(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  
  piVar1 = (int *)wiphy_to_rdev(*param_1);
  rtnl_is_locked();
  if ((piVar1[0x1f] == 0) && (piVar1[0x21] == 0)) {
    if (*(int *)param_1[0x17] == 0) {
      iVar2 = ieee80211_get_num_supported_channels(*param_1);
    }
    else {
      iVar2 = 1;
    }
    piVar3 = (int *)kzalloc(iVar2 * 4 + 0x99,0xcc0);
    if (piVar3 == (int *)0x0) {
      iVar2 = -0xc;
    }
    else {
      piVar9 = (int *)param_1[0x17];
      piVar5 = (int *)*piVar9;
      if (piVar5 == (int *)0x0) {
        piVar5 = piVar3 + 8;
        iVar2 = 0;
        puVar8 = (undefined4 *)(*param_1 + 0xd4);
        do {
          piVar10 = (int *)*puVar8;
          if (piVar10 != (int *)0x0) {
            iVar6 = 0;
            while (iVar6 < piVar10[3]) {
              iVar7 = iVar6 * 0x38 + *piVar10;
              iVar6 = iVar6 + 1;
              piVar4 = (int *)(*(int *)(iVar7 + 0xc) << 0x1f);
              bVar11 = -1 < (int)piVar4;
              if (bVar11) {
                piVar4 = piVar3 + iVar2;
                iVar2 = iVar2 + 1;
              }
              if (bVar11) {
                piVar4[0x1d] = iVar7;
              }
            }
            *piVar5 = (1 << (piVar10[4] & 0xffU)) + -1;
          }
          piVar5 = piVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (piVar3 + 0xd != piVar5);
      }
      else {
        iVar6 = *piVar5;
        iVar7 = *(int *)(*param_1 + iVar6 * 4 + 0xd4);
        if (iVar7 == 0) {
          kfree();
          return -0x16;
        }
        piVar3[0x1d] = (int)piVar5;
        piVar3[iVar6 + 8] = (1 << (*(uint *)(iVar7 + 0x10) & 0xff)) + -1;
      }
      piVar3[2] = iVar2;
      piVar3[1] = 1;
      *piVar3 = (int)(piVar3 + iVar2 + 0x1d);
      memcpy(piVar3 + iVar2 + 0x1d,(void *)piVar9[4],piVar9[5]);
      *(char *)(*piVar3 + 0x20) = (char)piVar9[5];
      piVar3[0x11] = -1;
      *(undefined2 *)(piVar3 + 0x12) = 0xffff;
      piVar5 = DAT_0002899c;
      piVar3[0xd] = (int)param_1;
      piVar3[0x13] = (int)(piVar1 + 0x68);
      piVar3[0x14] = *piVar5;
      piVar1[0x1f] = (int)piVar3;
      iVar2 = (**(code **)(*piVar1 + 0x94))(piVar1 + 0x68,piVar3);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1[0x17] + 0x110) = 0;
        nl80211_send_scan_start(piVar1,param_1);
        if (param_1[4] != 0) {
          disableIRQinterrupts();
          piVar1 = *(int **)(param_1[4] + 600);
          *piVar1 = *piVar1 + 1;
        }
      }
      else {
        piVar1[0x1f] = 0;
        kfree(piVar3);
      }
    }
  }
  else {
    iVar2 = -0x10;
  }
  return iVar2;
}



/* ===== cfg80211_conn_do_work @ 000289a0 size=438 ===== */

void cfg80211_conn_do_work(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_100 [4];
  undefined4 local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined1 auStack_f0 [76];
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined2 local_84;
  undefined4 uStack_82;
  undefined2 local_7e [11];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_24;
  undefined4 *puVar6;
  
  piVar1 = DAT_00028b64;
  local_24 = *DAT_00028b64;
  piVar2 = (int *)wiphy_to_rdev(*param_1);
  memset(auStack_100,0,0xdc);
  puVar7 = (undefined4 *)param_1[0x17];
  if (puVar7 == (undefined4 *)0x0) goto switchD_000289da_caseD_3;
  switch(puVar7[0x44]) {
  case 0:
    iVar8 = -2;
    goto LAB_000289f2;
  case 1:
    iVar8 = cfg80211_conn_scan(param_1);
    goto LAB_000289f2;
  case 2:
    if (*(int *)(*piVar2 + 0x9c) != 0) {
      puVar7[0x44] = 3;
      iVar8 = cfg80211_mlme_auth(piVar2,param_1[4],*puVar7,puVar7[6],puVar7[2],puVar7[4],puVar7[5],0
                                 ,0,puVar7[0x1e],*(undefined1 *)(puVar7 + 0x1f),
                                 *(undefined1 *)((int)puVar7 + 0x7d),0,0);
      goto LAB_000289f2;
    }
    break;
  default:
    goto switchD_000289da_caseD_3;
  case 4:
    *param_2 = 2;
    goto LAB_00028a50;
  case 5:
    if (*(int *)(*piVar2 + 0xa0) != 0) {
      puVar7[0x44] = 6;
      if (*(char *)(param_1[0x17] + 0x129) != '\0') {
        local_f8 = param_1[0x17] + 0x11a;
      }
      local_fc = puVar7[7];
      local_f4 = puVar7[8];
      local_a4 = puVar7[10] != 0;
      memcpy(auStack_f0,puVar7 + 0xb,0x4c);
      local_a0 = puVar7[0x20];
      local_9c = puVar7[0x22];
      uStack_98 = puVar7[0x23];
      uStack_94 = puVar7[0x24];
      uStack_90 = puVar7[0x25];
      local_8c = puVar7[0x26];
      uStack_88 = puVar7[0x27];
      local_84 = (undefined2)puVar7[0x28];
      puVar3 = &uStack_82;
      puVar5 = (undefined4 *)((int)puVar7 + 0xa2);
      do {
        puVar6 = puVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar5;
        puVar3 = puVar4;
        puVar5 = puVar6;
      } while (puVar6 != (undefined4 *)((int)puVar7 + 0xba));
      *(undefined2 *)puVar4 = *(undefined2 *)puVar6;
      local_68 = puVar7[0x2f];
      uStack_64 = puVar7[0x30];
      uStack_60 = puVar7[0x31];
      local_5c = puVar7[0x32];
      uStack_58 = puVar7[0x33];
      uStack_54 = puVar7[0x34];
      iVar8 = cfg80211_mlme_assoc(piVar2,param_1[4],*puVar7,puVar7[2],puVar7[4],puVar7[5],
                                  auStack_100);
      if (iVar8 != 0) {
        cfg80211_mlme_deauth(piVar2,param_1[4],puVar7[2],0,0,3,0);
      }
      goto LAB_000289f2;
    }
    break;
  case 7:
    goto switchD_000289da_caseD_7;
  case 8:
    *param_2 = 3;
    goto switchD_000289da_caseD_7;
  case 9:
    cfg80211_mlme_deauth(piVar2,param_1[4],puVar7[2],0,0,3,0);
  case 10:
    cfg80211_sme_free(param_1);
switchD_000289da_caseD_3:
    iVar8 = 0;
    goto LAB_000289f2;
  }
  iVar8 = -0x5f;
LAB_000289f2:
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8);
  }
  return;
switchD_000289da_caseD_7:
  cfg80211_mlme_deauth(piVar2,param_1[4],puVar7[2],0,0,3,0);
LAB_00028a50:
  iVar8 = -0x6b;
  goto LAB_000289f2;
}



/* ===== cfg80211_roamed @ 00028b68 size=320 ===== */

void cfg80211_roamed(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *__dest;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  size_t sVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  byte in_Q;
  undefined8 uVar18;
  undefined4 uVar19;
  
  puVar11 = *(undefined4 **)(param_1 + 0x1c4);
  uVar12 = *puVar11;
  iVar9 = param_2;
  uVar19 = param_3;
  uVar18 = wiphy_to_rdev(uVar12);
  puVar3 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
  if (puVar3[1] == 0) {
    uVar19 = 2;
    iVar9 = puVar11[0x19];
    param_1 = (uint)*(byte *)(puVar11 + 0x16);
    iVar8 = cfg80211_get_bss(uVar12,*puVar3,puVar3[2],puVar11 + 0xe,param_1,iVar9,2,param_4);
    *(int *)(param_2 + 4) = iVar8;
    if (iVar8 == 0) {
      return;
    }
  }
  iVar8 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x18) + 0x44 + *(int *)(param_2 + 0x20) +
          *(int *)(param_2 + 0x2c);
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x10;
  }
  puVar3 = (undefined4 *)
           kzalloc(iVar2 + iVar8,param_3,*(int *)(param_2 + 0x2c),iVar8,param_1,iVar9,uVar19);
  if (puVar3 != (undefined4 *)0x0) {
    sVar13 = *(size_t *)(param_2 + 0x10);
    puVar3[2] = 1;
    __dest = puVar3 + 0x11;
    if (sVar13 != 0) {
      puVar3[6] = __dest;
      puVar3[7] = sVar13;
      pvVar4 = memcpy(__dest,*(void **)(param_2 + 0xc),sVar13);
      __dest = (undefined4 *)((int)pvVar4 + sVar13);
    }
    sVar13 = *(size_t *)(param_2 + 0x18);
    if (sVar13 != 0) {
      puVar3[8] = __dest;
      puVar3[9] = sVar13;
      pvVar4 = memcpy(__dest,*(void **)(param_2 + 0x14),sVar13);
      __dest = (undefined4 *)((int)pvVar4 + sVar13);
    }
    sVar13 = *(size_t *)(param_2 + 0x20);
    if (sVar13 != 0) {
      puVar3[10] = __dest;
      puVar3[0xb] = sVar13;
      pvVar4 = memcpy(__dest,*(void **)(param_2 + 0x1c),sVar13);
      __dest = (undefined4 *)((int)pvVar4 + sVar13);
    }
    sVar13 = *(size_t *)(param_2 + 0x2c);
    cVar16 = '\x01';
    cVar17 = '\0';
    cVar14 = (int)sVar13 < 0;
    cVar15 = sVar13 == 0;
    if (!(bool)cVar15) {
      puVar3[0xd] = __dest;
      puVar3[0xe] = sVar13;
      pvVar4 = memcpy(__dest,*(void **)(param_2 + 0x28),sVar13);
      __dest = (undefined4 *)((int)pvVar4 + sVar13);
    }
    puVar6 = *(undefined4 **)(param_2 + 0x30);
    if (puVar6 != (undefined4 *)0x0) {
      puVar5 = puVar6 + 4;
      puVar3[0xf] = __dest;
      do {
        puVar7 = puVar6 + 1;
        cVar16 = puVar5 <= puVar7;
        cVar17 = SBORROW4((int)puVar7,(int)puVar5);
        cVar14 = (int)puVar7 - (int)puVar5 < 0;
        cVar15 = puVar7 == puVar5;
        *__dest = *puVar6;
        puVar6 = puVar7;
        __dest = __dest + 1;
      } while (!(bool)cVar15);
    }
    cVar1 = *(char *)(param_2 + 0x24);
    *(char *)(puVar3 + 0xc) = cVar1;
    if (cVar1 != '\0') {
      *(undefined2 *)((int)puVar3 + 0x32) = *(undefined2 *)(param_2 + 0x26);
    }
    puVar3[4] = *(undefined4 *)(param_2 + 4);
    disableIRQinterrupts();
    piVar10 = (int *)puVar11[0x22];
    puVar11[0x22] = puVar3;
    *puVar3 = puVar11 + 0x21;
    puVar3[1] = piVar10;
    *piVar10 = (int)puVar3;
    queue_work(*DAT_00028ca8,(int)uVar18 + 0xbc,
               (uint)(byte)(cVar14 << 4 | cVar15 << 3 | cVar16 << 2 | cVar17 << 1 | in_Q) << 0x1b);
    return;
  }
  cfg80211_put_bss(*puVar11,*(undefined4 *)(param_2 + 4));
  return;
}



/* ===== cfg80211_port_authorized @ 00028cac size=80 ===== */

void cfg80211_port_authorized(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char in_CY;
  char in_OV;
  byte in_Q;
  undefined8 uVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x1c4);
  uVar4 = wiphy_to_rdev(*puVar3);
  if (((int)((ulonglong)uVar4 >> 0x20) != 0) &&
     (puVar1 = (undefined4 *)kzalloc(0x44,extraout_r2), puVar1 != (undefined4 *)0x0)) {
    puVar1[2] = 5;
    puVar1[3] = *param_2;
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_2 + 1);
    disableIRQinterrupts();
    puVar2 = (undefined4 *)puVar3[0x22];
    puVar3[0x22] = puVar1;
    *puVar1 = puVar3 + 0x21;
    puVar1[1] = puVar2;
    *puVar2 = puVar1;
    queue_work(*DAT_00028cfc,(int)uVar4 + 0xbc,(uint)(byte)(in_CY << 2 | in_OV << 1 | in_Q) << 0x1b)
    ;
    return;
  }
  return;
}



/* ===== cfg80211_disconnected @ 00028d00 size=110 ===== */

void cfg80211_disconnected
               (int param_1,undefined2 param_2,void *param_3,size_t param_4,undefined1 param_5,
               undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_r3;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  byte in_Q;
  
  puVar4 = *(undefined4 **)(param_1 + 0x1c4);
  iVar1 = wiphy_to_rdev(*puVar4);
  puVar2 = (undefined4 *)kzalloc(extraout_r3 + 0x44,param_6);
  if (puVar2 != (undefined4 *)0x0) {
    cVar7 = (undefined4 *)0xffffffbb < puVar2;
    cVar8 = SCARRY4((int)puVar2,0x44);
    puVar3 = puVar2 + 0x11;
    cVar5 = (int)puVar3 < 0;
    cVar6 = puVar3 == (undefined4 *)0x0;
    puVar2[2] = 2;
    puVar2[3] = puVar3;
    puVar2[4] = param_4;
    memcpy(puVar3,param_3,param_4);
    *(undefined2 *)(puVar2 + 5) = param_2;
    *(undefined1 *)((int)puVar2 + 0x16) = param_5;
    disableIRQinterrupts();
    puVar3 = (undefined4 *)puVar4[0x22];
    puVar4[0x22] = puVar2;
    *puVar2 = puVar4 + 0x21;
    puVar2[1] = puVar3;
    *puVar3 = puVar2;
    queue_work(*DAT_00028d70,iVar1 + 0xbc,
               (uint)(byte)(cVar5 << 4 | cVar6 << 3 | cVar7 << 2 | cVar8 << 1 | in_Q) << 0x1b);
    return;
  }
  return;
}



/* ===== cfg80211_hold_bss @ 00028d74 size=58 ===== */

void cfg80211_hold_bss(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x30);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x60) + -0x18);
    HintPreloadData(piVar2);
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
  }
  return;
}



/* ===== cfg80211_connect_done @ 00028dae size=402 ===== */

void cfg80211_connect_done(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  size_t sVar12;
  int *piVar13;
  undefined4 uVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  byte in_Q;
  undefined8 uVar19;
  undefined4 uVar20;
  
  puVar10 = *(undefined4 **)(param_1 + 0x1c4);
  uVar14 = *puVar10;
  puVar8 = param_2;
  uVar20 = param_3;
  uVar19 = wiphy_to_rdev(uVar14);
  iVar11 = *(int *)((int)((ulonglong)uVar19 >> 0x20) + 8);
  if ((iVar11 != 0) && (piVar13 = *(int **)(iVar11 + -0x48), piVar13 == (int *)(iVar11 + -0x48))) {
    uVar20 = 2;
    puVar8 = (undefined4 *)puVar10[0x19];
    param_1 = (uint)*(byte *)(puVar10 + 0x16);
    iVar2 = cfg80211_get_bss(uVar14,0,iVar11 + 0x2c,puVar10 + 0xe,param_1,puVar8,2,param_4);
    if (iVar2 == 0) {
      cfg80211_bss_update((int)uVar19,piVar13,0,*(undefined4 *)(iVar11 + -0x20));
    }
    else {
      param_2[2] = iVar2;
    }
    cfg80211_put_bss(*puVar10,iVar11);
  }
  if (param_2[1] == 0) {
    iVar11 = 0x44;
  }
  else {
    iVar11 = 0x4a;
  }
  iVar11 = param_2[4] + param_2[6] + param_2[8] + param_2[0xb] + iVar11;
  if (param_2[0xc] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x10;
  }
  puVar8 = (undefined4 *)kzalloc(iVar2 + iVar11,param_3,param_2[0xc],iVar11,param_1,puVar8,uVar20);
  if (puVar8 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)param_2[1];
    puVar8[2] = 0;
    puVar9 = puVar8 + 0x11;
    if (puVar6 != (undefined4 *)0x0) {
      puVar8[4] = puVar9;
      puVar8[0x11] = *puVar6;
      *(undefined2 *)(puVar8 + 0x12) = *(undefined2 *)(puVar6 + 1);
      puVar9 = (undefined4 *)((int)puVar8 + 0x4a);
    }
    sVar12 = param_2[4];
    if (sVar12 != 0) {
      puVar8[6] = puVar9;
      puVar8[7] = sVar12;
      pvVar3 = memcpy(puVar9,(void *)param_2[3],sVar12);
      puVar9 = (undefined4 *)((int)pvVar3 + sVar12);
    }
    sVar12 = param_2[6];
    if (sVar12 != 0) {
      puVar8[8] = puVar9;
      puVar8[9] = sVar12;
      pvVar3 = memcpy(puVar9,(void *)param_2[5],sVar12);
      puVar9 = (undefined4 *)((int)pvVar3 + sVar12);
    }
    sVar12 = param_2[8];
    if (sVar12 != 0) {
      puVar8[10] = puVar9;
      puVar8[0xb] = sVar12;
      pvVar3 = memcpy(puVar9,(void *)param_2[7],sVar12);
      puVar9 = (undefined4 *)((int)pvVar3 + sVar12);
    }
    sVar12 = param_2[0xb];
    cVar17 = '\x01';
    cVar18 = '\0';
    cVar15 = (int)sVar12 < 0;
    cVar16 = sVar12 == 0;
    if (!(bool)cVar16) {
      puVar8[0xd] = puVar9;
      puVar8[0xe] = sVar12;
      pvVar3 = memcpy(puVar9,(void *)param_2[10],sVar12);
      puVar9 = (undefined4 *)((int)pvVar3 + sVar12);
    }
    puVar6 = (undefined4 *)param_2[0xc];
    if (puVar6 != (undefined4 *)0x0) {
      puVar5 = puVar6 + 4;
      puVar8[0xf] = puVar9;
      do {
        puVar7 = puVar6 + 1;
        cVar17 = puVar5 <= puVar7;
        cVar18 = SBORROW4((int)puVar7,(int)puVar5);
        cVar15 = (int)puVar7 - (int)puVar5 < 0;
        cVar16 = puVar7 == puVar5;
        *puVar9 = *puVar6;
        puVar6 = puVar7;
        puVar9 = puVar9 + 1;
      } while (!(bool)cVar16);
    }
    cVar1 = *(char *)(param_2 + 9);
    *(char *)(puVar8 + 0xc) = cVar1;
    if (cVar1 != '\0') {
      *(undefined2 *)((int)puVar8 + 0x32) = *(undefined2 *)((int)param_2 + 0x26);
    }
    uVar4 = param_2[2];
    if (uVar4 != 0) {
      cVar17 = 0x47 < uVar4;
      cVar18 = SBORROW4(uVar4,0x48);
      iVar11 = uVar4 - 0x48;
      cVar15 = iVar11 < 0;
      cVar16 = iVar11 == 0;
      cfg80211_hold_bss(iVar11);
    }
    puVar8[5] = param_2[2];
    puVar8[3] = *param_2;
    puVar8[0x10] = param_2[0xd];
    disableIRQinterrupts();
    puVar9 = (undefined4 *)puVar10[0x22];
    puVar10[0x22] = puVar8;
    *puVar8 = puVar10 + 0x21;
    puVar8[1] = puVar9;
    *puVar9 = puVar8;
    queue_work(*DAT_00028f40,(int)uVar19 + 0xbc,
               (uint)(byte)(cVar15 << 4 | cVar16 << 3 | cVar17 << 2 | cVar18 << 1 | in_Q) << 0x1b);
    return;
  }
  cfg80211_put_bss(*puVar10,param_2[2]);
  return;
}



/* ===== cfg80211_unhold_bss @ 00028f44 size=58 ===== */

void cfg80211_unhold_bss(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x30);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x60) + -0x18);
    HintPreloadData(piVar2);
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + -1;
  }
  return;
}



/* ===== cfg80211_sme_scan_done @ 00028f7e size=78 ===== */

void cfg80211_sme_scan_done(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r3;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1c4) + 0x24;
  mutex_lock(iVar3);
  iVar1 = wiphy_to_rdev(**(undefined4 **)(param_1 + 0x1c4));
  if ((*(int *)(extraout_r3 + 0x5c) != 0) && (*(uint *)(*(int *)(extraout_r3 + 0x5c) + 0x110) < 2))
  {
    iVar2 = cfg80211_get_conn_bss(extraout_r3);
    if (iVar2 == 0) {
      schedule_work(iVar1 + 0xac,0);
    }
    else {
      cfg80211_put_bss(iVar1 + 0x1a0);
    }
  }
  mutex_unlock(iVar3);
  return;
}



/* ===== cfg80211_sme_rx_assoc_resp @ 00028fcc size=64 ===== */

char cfg80211_sme_rx_assoc_resp(undefined4 *param_1,undefined4 param_2)

{
  int extraout_r2;
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  
  uVar4 = wiphy_to_rdev(*param_1,param_2,param_1);
  iVar2 = *(int *)(extraout_r2 + 0x5c);
  if (iVar2 == 0) {
    cVar3 = '\0';
  }
  else if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
    *(undefined4 *)(iVar2 + 0x110) = 0xb;
    cVar3 = '\0';
  }
  else {
    cVar3 = *(char *)(iVar2 + 0x129);
    if (cVar3 == '\0') {
      uVar1 = 7;
    }
    else {
      *(undefined1 *)(iVar2 + 0x129) = 0;
      iVar2 = *(int *)(extraout_r2 + 0x5c);
      uVar1 = 5;
    }
    *(undefined4 *)(iVar2 + 0x110) = uVar1;
    schedule_work((int)uVar4 + 0xac);
  }
  return cVar3;
}



/* ===== cfg80211_sme_deauth @ 0002900c size=4 ===== */

void cfg80211_sme_deauth(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    kfree(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x120));
    kfree(*(undefined4 *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}



/* ===== cfg80211_sme_auth_timeout @ 00029010 size=32 ===== */

void cfg80211_sme_auth_timeout
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r3;
  undefined8 uVar1;
  
  uVar1 = wiphy_to_rdev(*param_1,param_2,param_3,param_1);
  if (*(int *)(extraout_r3 + 0x5c) != 0) {
    *(undefined4 *)(*(int *)(extraout_r3 + 0x5c) + 0x110) = 4;
    schedule_work((int)uVar1 + 0xac,(int)((ulonglong)uVar1 >> 0x20),4,param_4);
    return;
  }
  return;
}



/* ===== cfg80211_sme_disassoc @ 00029030 size=32 ===== */

void cfg80211_sme_disassoc
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r3;
  undefined8 uVar1;
  
  uVar1 = wiphy_to_rdev(*param_1,param_2,param_3,param_1);
  if (*(int *)(extraout_r3 + 0x5c) != 0) {
    *(undefined4 *)(*(int *)(extraout_r3 + 0x5c) + 0x110) = 9;
    schedule_work((int)uVar1 + 0xac,(int)((ulonglong)uVar1 >> 0x20),9,param_4);
    return;
  }
  return;
}



/* ===== cfg80211_sme_assoc_timeout @ 00029050 size=32 ===== */

void cfg80211_sme_assoc_timeout
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r3;
  undefined8 uVar1;
  
  uVar1 = wiphy_to_rdev(*param_1,param_2,param_3,param_1);
  if (*(int *)(extraout_r3 + 0x5c) != 0) {
    *(undefined4 *)(*(int *)(extraout_r3 + 0x5c) + 0x110) = 8;
    schedule_work((int)uVar1 + 0xac,(int)((ulonglong)uVar1 >> 0x20),8,param_4);
    return;
  }
  return;
}



/* ===== cfg80211_sme_abandon_assoc @ 00029070 size=32 ===== */

void cfg80211_sme_abandon_assoc
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r3;
  undefined8 uVar1;
  
  uVar1 = wiphy_to_rdev(*param_1,param_2,param_3,param_1);
  if (*(int *)(extraout_r3 + 0x5c) != 0) {
    *(undefined4 *)(*(int *)(extraout_r3 + 0x5c) + 0x110) = 10;
    schedule_work((int)uVar1 + 0xac,(int)((ulonglong)uVar1 >> 0x20),10,param_4);
    return;
  }
  return;
}



/* ===== __cfg80211_connect_result @ 00029090 size=270 ===== */

void __cfg80211_connect_result(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = *(int **)(param_1 + 0x1c4);
  if ((piVar2[1] != 2) && (piVar2[1] != 8)) {
    cfg80211_put_bss(*piVar2,param_2[2]);
    return;
  }
  piVar2[0x41] = 0;
  iVar3 = param_1;
  piVar4 = param_2;
  uVar1 = wiphy_to_rdev(*piVar2);
  nl80211_send_connect_result(uVar1,param_1,param_2,0xcc0,iVar3,piVar4,param_3,param_4);
  if ((param_2[2] == 0) && (*param_2 == 0)) {
    iVar3 = *piVar2;
    wiphy_to_rdev(iVar3);
    iVar3 = cfg80211_get_bss(iVar3,extraout_r1,param_2[1]);
    param_2[2] = iVar3;
    if (iVar3 != 0) {
      cfg80211_hold_bss(iVar3 + -0x48);
    }
  }
  if (piVar2[0x23] != 0) {
    cfg80211_unhold_bss();
    cfg80211_put_bss(*piVar2,piVar2[0x23] + 0x48);
    piVar2[0x23] = 0;
  }
  if (*param_2 != 0) {
    kfree_sensitive(piVar2[0x18]);
    piVar2[0x18] = 0;
    *(undefined1 *)(piVar2 + 0x16) = 0;
    piVar2[0x1a] = 0;
    if (param_2[2] != 0) {
      cfg80211_unhold_bss(param_2[2] + -0x48);
      cfg80211_put_bss(*piVar2,param_2[2]);
    }
    cfg80211_sme_free(piVar2);
    return;
  }
  if (param_2[2] != 0) {
    piVar2[0x23] = param_2[2] + -0x48;
    if (-1 < *(int *)(*piVar2 + 0x24) << 7) {
      cfg80211_upload_connect_keys(piVar2);
    }
    iVar3 = ieee80211_bss_get_elem(param_2[2],7);
    if ((iVar3 != 0) && (iVar3 = kmemdup(iVar3,*(byte *)(iVar3 + 1) + 2,0xa20), iVar3 != 0)) {
      regulatory_hint_country_ie
                (*piVar2,**(undefined4 **)param_2[2],iVar3 + 2,*(undefined1 *)(iVar3 + 1));
      kfree(iVar3);
      return;
    }
  }
  return;
}



/* ===== cfg80211_conn_work @ 0002919e size=160 ===== */

void cfg80211_conn_work(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_5c;
  undefined4 local_56;
  undefined2 local_52;
  undefined4 local_50;
  undefined4 *puStack_4c;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  
  rtnl_lock();
  puVar4 = (undefined4 *)0x0;
  for (puVar3 = *(undefined4 **)(param_1 + 0x38c); puVar3 != (undefined4 *)(param_1 + 0x38c);
      puVar3 = (undefined4 *)*puVar3) {
    if (puVar3[2] != 0) {
      mutex_lock(puVar3 + 7);
      if (((*(int *)(puVar3[2] + 0x28) << 0x1f < 0) && (iVar1 = puVar3[0x15], iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x110) != 0xb)) {
        puVar2 = *(undefined4 **)(iVar1 + 8);
        if (puVar2 != (undefined4 *)0x0) {
          local_56 = *puVar2;
          puVar4 = &local_56;
          local_52 = *(undefined2 *)(puVar2 + 1);
        }
        local_5c = 0;
        iVar1 = cfg80211_conn_do_work(puVar3 + -2,&local_5c);
        if (iVar1 != 0) {
          memset(auStack_48,0,0x2c);
          local_50 = 0xffffffff;
          local_1c = local_5c;
          puStack_4c = puVar4;
          __cfg80211_connect_result(puVar3[2],&local_50,0);
        }
      }
      mutex_unlock(puVar3 + 7);
    }
  }
  rtnl_unlock();
  return;
}



/* ===== cfg80211_sme_rx_auth @ 0002923e size=122 ===== */

void cfg80211_sme_rx_auth(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_48;
  int local_44;
  undefined1 auStack_40 [48];
  
  uVar5 = wiphy_to_rdev(*param_1);
  iVar3 = param_1[0x17];
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x110) == 0xb) {
    return;
  }
  uVar4 = (uint)*(ushort *)((int)((ulonglong)uVar5 >> 0x20) + 0x1c);
  if (uVar4 != 0xd) {
    if (uVar4 != 0) goto LAB_00029292;
    if (*(int *)(iVar3 + 0x110) != 3) {
      return;
    }
    uVar2 = 5;
    goto LAB_00029280;
  }
  if ((*(char *)(iVar3 + 0x128) == '\0') || (iVar1 = *(int *)(iVar3 + 0x18), iVar1 == 3)) {
LAB_00029292:
    memset(auStack_40,0,0x30);
    local_48 = uVar4;
    local_44 = param_2 + 0x10;
    __cfg80211_connect_result(param_1[4],&local_48,0);
    return;
  }
  if (iVar1 == 0) {
    if (param_1[0x18] == 0) goto LAB_0002928c;
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
LAB_0002928c:
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(iVar3 + 0x18) = uVar2;
  uVar2 = 2;
  iVar3 = param_1[0x17];
LAB_00029280:
  *(undefined4 *)(iVar3 + 0x110) = uVar2;
  schedule_work((int)uVar5 + 0xac);
  return;
}



/* ===== __cfg80211_roamed @ 000292b8 size=102 ===== */

void __cfg80211_roamed(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_1[1] == 2) || (param_1[1] == 8)) && (param_1[0x23] != 0)) {
    cfg80211_unhold_bss();
    cfg80211_put_bss(*param_1,param_1[0x23] + 0x48);
    param_1[0x23] = 0;
    if (*(int *)(param_2 + 4) != 0) {
      cfg80211_hold_bss(*(int *)(param_2 + 4) + -0x48);
      iVar2 = *(int *)(param_2 + 4);
      param_1[0x41] = 0;
      param_1[0x23] = iVar2 + -0x48;
      uVar1 = wiphy_to_rdev(*param_1);
      nl80211_send_roamed(uVar1,param_1[4],param_2,0xcc0);
      return;
    }
    return;
  }
  cfg80211_put_bss(*param_1,*(undefined4 *)(param_2 + 4));
  return;
}



/* ===== __cfg80211_port_authorized @ 0002931e size=54 ===== */

void __cfg80211_port_authorized(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int extraout_r3;
  int iVar2;
  
  if (((param_1[1] == 2) && (iVar2 = param_1[0x23], iVar2 != 0)) &&
     (*(short *)(iVar2 + 0x78) == (short)param_2[1] && *param_2 == *(int *)(iVar2 + 0x74))) {
    uVar1 = wiphy_to_rdev(*param_1);
    nl80211_send_port_authorized(uVar1,*(undefined4 *)(extraout_r3 + 0x10));
    return;
  }
  return;
}



/* ===== __cfg80211_disconnected @ 00029354 size=224 ===== */

void __cfg80211_disconnected
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = *(int **)(param_1 + 0x1c4);
  uVar6 = param_3;
  piVar1 = (int *)wiphy_to_rdev(*piVar3);
  if ((piVar3[1] != 2) && (piVar3[1] != 8)) {
    return;
  }
  if (piVar3[0x23] != 0) {
    cfg80211_unhold_bss();
    cfg80211_put_bss(*piVar3,piVar3[0x23] + 0x48);
  }
  piVar3[0x23] = 0;
  *(undefined1 *)(piVar3 + 0x16) = 0;
  piVar3[0x1a] = 0;
  kfree_sensitive(piVar3[0x18]);
  piVar3[0x18] = 0;
  nl80211_send_disconnected(piVar1,param_1,param_4,param_2,param_3,param_5,uVar6);
  if ((*(int *)(*piVar1 + 0x154) != 0) && (piVar1[0x3e] != 0)) {
    piVar1[0x3e] = 0;
    (**(code **)(*piVar1 + 0x154))(piVar1 + 0x68,piVar3);
  }
  if (*(int *)(*piVar1 + 0x20) != 0) {
    uVar4 = 0;
    if (((*(byte *)(*piVar3 + 0x35) >> 6 | *(byte *)(*piVar3 + 0x35) >> 1) & 1) == 0) {
      iVar5 = 5;
    }
    else {
      iVar5 = 7;
    }
    do {
      uVar2 = uVar4 & 0xff;
      uVar4 = uVar4 + 1;
      (**(code **)(*piVar1 + 0x20))(piVar1 + 0x68,param_1,uVar2,0,0);
    } while ((int)uVar4 <= iVar5);
  }
  if (*(code **)(*piVar1 + 0x160) != (code *)0x0) {
    (**(code **)(*piVar1 + 0x160))(piVar1 + 0x68,param_1,0);
  }
  schedule_work(DAT_00029434);
  return;
}



/* ===== cfg80211_connect @ 00029438 size=790 ===== */

int cfg80211_connect(int *param_1,int param_2,void *param_3,int param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  void *__dest;
  size_t __n;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_2c [8];
  
  puVar9 = *(undefined4 **)(param_2 + 0x1c4);
  uVar7 = (uint)*(byte *)(puVar9 + 0x16);
  if ((uVar7 != 0) &&
     ((uVar7 != *(uint *)((int)param_3 + 0x14) ||
      (iVar2 = memcmp(puVar9 + 0xe,*(void **)((int)param_3 + 0x10),uVar7), iVar2 != 0)))) {
    return -0x72;
  }
  iVar2 = puVar9[0x23];
  if (iVar2 != 0) {
    if (param_5 == (int *)0x0) {
      return -0x72;
    }
    if ((short)param_5[1] != *(short *)(iVar2 + 0x78) || *(int *)(iVar2 + 0x74) != *param_5) {
      return -0x6b;
    }
  }
  if (puVar9[0x18] != 0) {
    return -0x73;
  }
  cfg80211_oper_and_ht_capa((int)param_3 + 0xa2,param_1[0x10c]);
  cfg80211_oper_and_vht_capa((int)param_3 + 200,param_1[0x10d]);
  if (param_4 != 0) {
    iVar2 = *(int *)(param_4 + 0xa4);
    if (iVar2 < 0) {
      return -0x16;
    }
    iVar3 = param_4 + iVar2 * 0x1c;
    uVar7 = *(uint *)(iVar3 + 0x14);
    if ((uVar7 & 0xfffffffb) == DAT_00029754) {
      *(char *)((int)param_3 + 0x7d) = (char)iVar2;
      *(undefined4 *)((int)param_3 + 0x78) = *(undefined4 *)(param_4 + iVar2 * 0x1c);
      *(char *)((int)param_3 + 0x7c) = (char)*(undefined4 *)(iVar3 + 8);
      if (*(int *)((int)param_3 + 0x30) == 0) {
        *(uint *)((int)param_3 + 0x30) = uVar7;
      }
      if (*(int *)((int)param_3 + 0x34) == 0) {
        *(undefined4 *)((int)param_3 + 0x34) = 1;
        *(uint *)((int)param_3 + 0x38) = uVar7;
      }
    }
    *(int *)((int)param_3 + 0x60) = param_4;
    *(undefined4 *)((int)param_3 + 100) = *(undefined4 *)(param_4 + 0xa4);
  }
  puVar9[0x18] = param_4;
  memcpy(puVar9 + 0xe,*(void **)((int)param_3 + 0x10),*(size_t *)((int)param_3 + 0x14));
  *(char *)(puVar9 + 0x16) = (char)*(undefined4 *)((int)param_3 + 0x14);
  puVar9[0x19] = (uint)*(byte *)((int)param_3 + 0xd4);
  if (*(code **)(*param_1 + 0xac) != (code *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xac))(param_1 + 0x68,param_2,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    goto LAB_000296e8;
  }
  piVar4 = (int *)wiphy_to_rdev(*puVar9);
  if ((*(int *)(*piVar4 + 0x9c) == 0) || (*(int *)(*piVar4 + 0xa0) == 0)) {
    iVar2 = -0x5f;
    goto LAB_000296e8;
  }
  if (puVar9[0x23] != 0) {
    cfg80211_unhold_bss();
    cfg80211_put_bss(*puVar9,puVar9[0x23] + 0x48);
    puVar9[0x23] = 0;
    cfg80211_sme_free(puVar9);
  }
  if (puVar9[0x17] != 0) {
    iVar2 = -0x73;
    goto LAB_000296e8;
  }
  pvVar5 = (void *)kzalloc(300,0xcc0);
  puVar9[0x17] = pvVar5;
  if (pvVar5 != (void *)0x0) {
    memcpy(pvVar5,param_3,0x110);
    if (*(int *)((int)param_3 + 8) != 0) {
      *(int *)(puVar9[0x17] + 8) = puVar9[0x17] + 0x114;
      puVar8 = *(undefined4 **)((int)param_3 + 8);
      iVar2 = puVar9[0x17];
      *(undefined4 *)(iVar2 + 0x114) = *puVar8;
      *(undefined2 *)(iVar2 + 0x118) = *(undefined2 *)(puVar8 + 1);
    }
    iVar2 = wiphy_to_rdev(*puVar9);
    pvVar5 = *(void **)((int)param_3 + 0x1c);
    iVar3 = *(int *)((int)param_3 + 0x20);
    iVar10 = puVar9[0x17];
    if ((*(char *)(iVar2 + 0x264) == '\0') ||
       ((pvVar5 != (void *)0x0 &&
        (iVar6 = cfg80211_find_elem_match(0x7f,pvVar5,iVar3,0,0,0), iVar6 != 0)))) {
      iVar2 = kmemdup(pvVar5,iVar3,0xcc0);
      *(int *)(iVar10 + 0x120) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar10 + 0x20) = iVar3;
        goto LAB_00029672;
      }
    }
    else {
      __dest = (void *)__kmalloc((uint)*(byte *)(iVar2 + 0x264) + iVar3 + 2,0xcc0);
      if (__dest != (void *)0x0) {
        __n = 0;
        if (iVar3 != 0) {
          __n = ieee80211_ie_split_ric(pvVar5,iVar3,DAT_00029750,6,0,0,0);
          memcpy(__dest,pvVar5,__n);
          memcpy((void *)(*(byte *)(iVar2 + 0x264) + 2 + __n + (int)__dest),
                 (void *)((int)pvVar5 + __n),iVar3 - __n);
        }
        *(undefined1 *)((int)__dest + __n) = 0x7f;
        bVar1 = *(byte *)(iVar2 + 0x264);
        *(byte *)((int)__dest + __n + 1) = bVar1;
        memcpy((void *)(__n + 2 + (int)__dest),*(void **)(iVar2 + 0x25c),(uint)bVar1);
        *(void **)(iVar10 + 0x120) = __dest;
        *(uint *)(iVar10 + 0x20) = (uint)*(byte *)(iVar2 + 0x264) + iVar3 + 2;
LAB_00029672:
        *(undefined4 *)(puVar9[0x17] + 0x1c) = *(undefined4 *)(puVar9[0x17] + 0x120);
        bVar11 = *(int *)((int)param_3 + 0x18) == 8;
        iVar2 = puVar9[0x17];
        if (bVar11) {
          *(undefined1 *)(iVar2 + 0x128) = 1;
          iVar2 = puVar9[0x17];
        }
        else {
          *(undefined1 *)(iVar2 + 0x128) = 0;
        }
        if (bVar11) {
          *(undefined4 *)(iVar2 + 0x18) = 0;
        }
        *(undefined4 **)(puVar9[0x17] + 0x10) = puVar9 + 0xe;
        *(uint *)(puVar9[0x17] + 0x14) = (uint)*(byte *)(puVar9 + 0x16);
        iVar3 = cfg80211_get_conn_bss(puVar9);
        if (param_5 != (int *)0x0) {
          iVar2 = puVar9[0x17];
          *(int *)(iVar2 + 0x11a) = *param_5;
          *(short *)(iVar2 + 0x11e) = (short)param_5[1];
          *(undefined1 *)(puVar9[0x17] + 0x129) = 1;
        }
        if (iVar3 == 0) {
          iVar2 = cfg80211_conn_scan(puVar9);
          if (iVar2 == -0x10) {
            *(undefined4 *)(puVar9[0x17] + 0x110) = 1;
            return 0;
          }
        }
        else {
          iVar2 = cfg80211_conn_do_work(puVar9,auStack_2c);
          cfg80211_put_bss(*puVar9,iVar3);
        }
        if (iVar2 == 0) {
          return 0;
        }
        cfg80211_sme_free(puVar9);
        goto LAB_000296e8;
      }
    }
    kfree(puVar9[0x17]);
    puVar9[0x17] = 0;
  }
  iVar2 = -0xc;
LAB_000296e8:
  puVar9[0x18] = 0;
  if (puVar9[0x23] == 0) {
    *(undefined1 *)(puVar9 + 0x16) = 0;
  }
  return iVar2;
}



/* ===== cfg80211_disconnect @ 00029758 size=144 ===== */

undefined4 cfg80211_disconnect(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int extraout_r2;
  undefined4 extraout_r3;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)(param_2 + 0x1c4);
  piVar1 = param_1;
  iVar4 = param_2;
  uVar2 = param_3;
  kfree_sensitive(puVar3[0x18]);
  puVar3[0x18] = 0;
  puVar3[0x1a] = 0;
  if (puVar3[0x17] == 0) {
    if (*(code **)(*param_1 + 0xb4) == (code *)0x0) {
      cfg80211_mlme_down(param_1,param_2);
      uVar2 = 0;
    }
    else if (*(char *)(puVar3 + 0x16) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0xb4))
                        (param_1 + 0x68,param_2,param_3,*(char *)(puVar3 + 0x16),piVar1,iVar4,uVar2,
                         param_4);
    }
  }
  else {
    piVar1 = (int *)wiphy_to_rdev(*puVar3);
    if (*(int *)(*piVar1 + 0xa4) == 0) {
      uVar2 = 0xffffffa1;
    }
    else {
      uVar2 = extraout_r3;
      if (1 < *(uint *)(extraout_r2 + 0x110)) {
        uVar2 = cfg80211_mlme_deauth(piVar1,puVar3[4],*(undefined4 *)(extraout_r2 + 8));
      }
      cfg80211_sme_free(puVar3);
    }
  }
  if (puVar3[0x23] == 0) {
    *(undefined1 *)(puVar3 + 0x16) = 0;
  }
  return uVar2;
}



/* ===== cfg80211_autodisconnect_wk @ 000297e8 size=142 ===== */

void cfg80211_autodisconnect_wk
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  piVar1 = (int *)wiphy_to_rdev(*(undefined4 *)(param_1 + -0x6c));
  mutex_lock(param_1 + -0x48);
  if (*(int *)(param_1 + -4) != 0) {
    switch(*(int *)(param_1 + -0x68)) {
    case 1:
      __cfg80211_leave_ibss(piVar1,*(undefined4 *)(param_1 + -0x5c),0);
      break;
    case 2:
    case 8:
      if ((*(int *)(*piVar1 + 0xb4) == 0) && (*(int *)(param_1 + 0x20) == 0)) {
        cfg80211_mlme_deauth(piVar1,*(undefined4 *)(param_1 + -0x5c),param_1 + 0x10,0,0,3,0);
      }
      else {
        cfg80211_disconnect(piVar1,*(undefined4 *)(param_1 + -0x5c),3,1);
      }
      break;
    case 3:
    case 9:
      __cfg80211_stop_ap(piVar1,*(undefined4 *)(param_1 + -0x5c),0,*(int *)(param_1 + -0x68) + -1,
                         iVar2,param_2,param_3,param_4);
      break;
    case 7:
      __cfg80211_leave_mesh(piVar1,*(undefined4 *)(param_1 + -0x5c));
    }
  }
  mutex_unlock(param_1 + -0x48);
  return;
}



/* ===== cfg80211_chandef_create @ 00029880 size=54 ===== */

void cfg80211_chandef_create(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    *param_1 = param_2;
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 8);
    iVar1 = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    switch(param_3) {
    case 1:
      iVar1 = 1;
    case 0:
      param_1[1] = iVar1;
      iVar1 = *(int *)(param_2 + 4);
      break;
    case 2:
      param_1[1] = 2;
      iVar1 = *(int *)(param_2 + 4) + -10;
      break;
    case 3:
      param_1[1] = 2;
      iVar1 = *(int *)(param_2 + 4) + 10;
      break;
    default:
      goto switchD_00029894_default;
    }
    param_1[2] = iVar1;
  }
switchD_00029894_default:
  return;
}



/* ===== cfg80211_get_start_freq @ 000298ba size=26 ===== */

int cfg80211_get_start_freq(int param_1,int param_2)

{
  if (20000 < (uint)(param_2 * 1000)) {
    param_1 = (param_1 + 10000) - ((uint)(param_2 * 1000) >> 1);
  }
  return param_1;
}



/* ===== cfg80211_get_end_freq @ 000298d4 size=26 ===== */

int cfg80211_get_end_freq(int param_1,int param_2)

{
  if (20000 < (uint)(param_2 * 1000)) {
    param_1 = param_1 + -10000 + ((uint)(param_2 * 1000) >> 1);
  }
  return param_1;
}



/* ===== cfg80211_chandef_valid @ 000298ee size=512 ===== */

bool cfg80211_chandef_valid(int *param_1)

{
  ushort uVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    return false;
  }
  uVar12 = (uint)*(ushort *)(param_1 + 6);
  if (999 < uVar12) {
    return false;
  }
  iVar8 = piVar3[1];
  switch(param_1[1]) {
  case 0:
  case 1:
  case 6:
  case 7:
    bVar14 = iVar8 * 1000 + (uint)*(ushort *)(piVar3 + 2) == param_1[2] * 1000 + uVar12;
LAB_00029932:
    if (!bVar14) {
      return false;
    }
    break;
  case 2:
    iVar13 = param_1[2];
    if (iVar13 != iVar8 + 10) {
      iVar8 = iVar8 + -10;
LAB_00029a06:
      bVar14 = iVar13 == iVar8;
      goto LAB_00029932;
    }
    break;
  case 3:
    iVar13 = param_1[2];
    if (((iVar13 != iVar8 + 0x1e) && (iVar13 != iVar8 + 10)) && (iVar13 != iVar8 + -10)) {
      iVar8 = iVar8 + -0x1e;
      goto LAB_00029a06;
    }
    break;
  case 4:
    iVar13 = param_1[2];
    if (((iVar13 != iVar8 + 0x1e) && (iVar13 != iVar8 + 10)) &&
       ((iVar13 != iVar8 + -10 && (iVar13 != iVar8 + -0x1e)))) {
      return false;
    }
    iVar8 = param_1[3];
    if (iVar8 == 0) {
      return false;
    }
    if (iVar13 - iVar8 == 0x50) {
      return false;
    }
    if (iVar8 - iVar13 == 0x50) {
      return false;
    }
    goto LAB_0002993a;
  case 5:
    iVar13 = param_1[2];
    if ((((iVar13 != iVar8 + 0x46) && (iVar13 != iVar8 + 0x32)) && (iVar13 != iVar8 + 0x1e)) &&
       (((iVar13 != iVar8 + 10 && (iVar13 != iVar8 + -10)) &&
        ((iVar13 != iVar8 + -0x1e && (iVar13 != iVar8 + -0x32)))))) {
      iVar8 = iVar8 + -0x46;
      goto LAB_00029a06;
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    if (*piVar3 != 4) {
      return false;
    }
    uVar1 = *(ushort *)(piVar3 + 2);
    iVar13 = param_1[2];
    uVar5 = ieee80211_s1g_channel_width();
    if (uVar5 < 0xd) {
      uVar5 = (uint)*(byte *)(DAT_00029b08 + uVar5);
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (0xc < (uint)param_1[1]) {
      return false;
    }
    if (uVar5 == 0xffffffff) {
      return false;
    }
    if (param_1[3] != 0) {
      return false;
    }
    iVar13 = iVar13 * 1000 + uVar12;
    iVar10 = iVar8 * 1000 + (uint)uVar1;
    iVar8 = (int)(uVar5 * 1000) >> 1;
    iVar7 = (int)((uint)*(byte *)(DAT_00029b08 + param_1[1]) * 1000) >> 1;
    if ((uint)(iVar7 + iVar13) < (uint)(iVar8 + iVar10)) {
      return false;
    }
    if ((uint)(iVar10 - iVar8) < (uint)(iVar13 - iVar7)) {
      return false;
    }
    goto LAB_0002993a;
  default:
    return false;
  }
  if (param_1[3] != 0) {
    return false;
  }
LAB_0002993a:
  if ((param_1[2] == 0x9b4) && (param_1[1] != 0)) {
    return false;
  }
  uVar12 = param_1[5];
  if (*(byte *)(param_1 + 4) == 0) {
    return uVar12 == 0;
  }
  if (uVar12 == 0) {
    return false;
  }
  if (0x2e68 < *(int *)(*param_1 + 4) - 0xe3d0U) {
    return false;
  }
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar9 = 0;
  do {
    bVar2 = *(byte *)(param_1 + 4) >> (uVar4 & 0xff);
    uVar4 = uVar4 + 1;
    uVar11 = bVar2 & 1;
    if ((bVar2 & 1) != 0) {
      uVar11 = uVar9 + 1;
      uVar5 = uVar5 + 1;
    }
    if ((int)uVar6 < (int)uVar11) {
      uVar6 = uVar11;
    }
    uVar9 = uVar11;
  } while (uVar4 != 6);
  switch(uVar12) {
  case 4:
  case 8:
  case 0xc:
    if (uVar6 == 0) {
      return false;
    }
    goto LAB_00029ac4;
  case 5:
  case 9:
  case 0xd:
    bVar16 = SBORROW4(uVar6,1);
    bVar14 = (int)(uVar6 - 1) < 0;
    bVar15 = uVar6 == 1;
    break;
  case 6:
  case 10:
  case 0xe:
    bVar16 = SBORROW4(uVar6,2);
    bVar14 = (int)(uVar6 - 2) < 0;
    bVar15 = uVar6 == 2;
    break;
  case 7:
  case 0xb:
  case 0xf:
    bVar16 = SBORROW4(uVar6,3);
    bVar14 = (int)(uVar6 - 3) < 0;
    bVar15 = uVar6 == 3;
    break;
  default:
    goto LAB_000298fa;
  }
  if (!bVar15 && bVar14 == bVar16) {
LAB_00029ac4:
    if (uVar12 < 0x10) {
      uVar12 = 1 << (uVar12 & 0xff);
      if ((uVar12 & 0xf0) != 0) {
        return true;
      }
      if ((uVar12 & 0xf000) == 0) {
        if ((uVar12 & 0xf00) != 0) {
LAB_00029ae8:
          return 1 < (int)uVar5;
        }
      }
      else {
        bVar14 = 3 < (int)uVar5;
        uVar5 = uVar6;
        if (bVar14) goto LAB_00029ae8;
      }
    }
  }
LAB_000298fa:
  return false;
}



/* ===== cfg80211_get_chans_dfs_required @ 00029b0c size=68 ===== */

undefined4
cfg80211_get_chans_dfs_required
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r2;
  
  uVar1 = cfg80211_get_start_freq(param_2,param_3,param_3,param_4,param_4);
  uVar2 = cfg80211_get_end_freq(param_2,extraout_r2);
  while( true ) {
    if (uVar2 < uVar1) {
      return 0;
    }
    iVar3 = ieee80211_get_channel_khz(param_1,uVar1);
    if (iVar3 == 0) break;
    if (*(int *)(iVar3 + 0xc) << 0x1c < 0) {
      return 1;
    }
    uVar1 = uVar1 + 20000;
  }
  return 0xffffffea;
}



/* ===== cfg80211_get_chans_dfs_usable @ 00029b50 size=84 ===== */

int cfg80211_get_chans_dfs_usable(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r2;
  int iVar4;
  
  uVar1 = cfg80211_get_start_freq(param_2,param_3);
  iVar4 = 0;
  uVar2 = cfg80211_get_end_freq(param_2,extraout_r2);
  while( true ) {
    if (uVar2 < uVar1) {
      return iVar4;
    }
    iVar3 = ieee80211_get_channel_khz(param_1,uVar1);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0xc) << 0x1f < 0)) break;
    if (*(int *)(iVar3 + 0xc) << 0x1c < 0) {
      if (*(int *)(iVar3 + 0x2c) == 1) {
        return -0x16;
      }
      if (*(int *)(iVar3 + 0x2c) == 0) {
        iVar4 = iVar4 + 1;
      }
    }
    uVar1 = uVar1 + 20000;
  }
  return -0x16;
}



/* ===== cfg80211_get_chans_dfs_cac_time @ 00029ba4 size=80 ===== */

uint cfg80211_get_chans_dfs_cac_time(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r2;
  uint uVar4;
  
  uVar1 = cfg80211_get_start_freq(param_2,param_3);
  uVar4 = 0;
  uVar2 = cfg80211_get_end_freq(param_2,extraout_r2);
  while( true ) {
    if (uVar2 < uVar1) {
      return uVar4;
    }
    iVar3 = ieee80211_get_channel_khz(param_1,uVar1);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0xc) << 0x1f < 0)) break;
    if ((*(int *)(iVar3 + 0xc) << 0x1c < 0) && (uVar4 < *(uint *)(iVar3 + 0x34))) {
      uVar4 = *(uint *)(iVar3 + 0x34);
    }
    uVar1 = uVar1 + 20000;
  }
  return 0;
}



/* ===== cfg80211_secondary_chans_ok @ 00029bf4 size=70 ===== */

undefined4
cfg80211_secondary_chans_ok(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r2;
  
  uVar1 = cfg80211_get_start_freq(param_2,param_3);
  uVar2 = cfg80211_get_end_freq(param_2,extraout_r2);
  while( true ) {
    if (uVar2 < uVar1) {
      return 1;
    }
    iVar3 = ieee80211_get_channel_khz(param_1,uVar1);
    if (iVar3 == 0) break;
    if ((param_4 & *(uint *)(iVar3 + 0xc)) != 0) {
      return 0;
    }
    uVar1 = uVar1 + 20000;
  }
  return 0;
}



/* ===== cfg80211_get_chans_dfs_available @ 00029c3a size=96 ===== */

undefined4 cfg80211_get_chans_dfs_available(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r2;
  
  bVar1 = *(byte *)(param_1 + 0x33);
  uVar2 = cfg80211_get_start_freq(param_2,param_3);
  uVar3 = cfg80211_get_end_freq(param_2,extraout_r2);
  do {
    if (uVar3 < uVar2) {
      return 1;
    }
    iVar4 = ieee80211_get_channel_khz(param_1,uVar2);
    if (iVar4 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar4 + 0xc) & 1) != 0) {
      return 0;
    }
    if (((int)(*(uint *)(iVar4 + 0xc) << 0x1c) < 0) && (*(int *)(iVar4 + 0x2c) != 2)) {
      if (*(int *)(iVar4 + 0x2c) != 0) {
        return 0;
      }
      if (-1 < (int)((uint)bVar1 << 0x1e)) {
        return 0;
      }
    }
    uVar2 = uVar2 + 20000;
  } while( true );
}



/* ===== chandef_primary_freqs @ 00029c9a size=102 ===== */

void chandef_primary_freqs(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  switch(param_1[1]) {
  case 2:
    *param_2 = param_1[2];
    iVar2 = 0;
    break;
  case 3:
  case 4:
    *param_3 = param_1[2];
    *param_2 = (uint)((ulonglong)((*(int *)(*param_1 + 4) - param_1[2]) + 0x1e) *
                      (ulonglong)DAT_00029d04 >> 0x25) * 0x28 + param_1[2] + -0x14;
    return;
  case 5:
    uVar1 = (uint)((ulonglong)((*(int *)(*param_1 + 4) - param_1[2]) + 0x46) *
                   (ulonglong)DAT_00029d04 >> 0x24);
    *param_2 = ((int)uVar1 >> 1) * 0x28 + param_1[2] + -0x3c;
    iVar2 = ((int)uVar1 >> 2) * 0x50 + param_1[2] + -0x28;
    break;
  default:
    goto switchD_00029ca4_default;
  }
  *param_3 = iVar2;
switchD_00029ca4_default:
  return;
}



/* ===== cfg80211_chandef_compatible @ 00029d08 size=136 ===== */

int * cfg80211_chandef_compatible(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [2];
  
  if (*param_1 == *param_2) {
    uVar1 = param_1[1];
    uVar2 = param_2[1];
    if (uVar1 == uVar2) {
      if ((param_1[2] == param_2[2]) && ((short)param_1[6] == (short)param_2[6])) {
        if (param_1[3] == param_2[3]) {
          return param_1;
        }
        return (int *)0x0;
      }
    }
    else if ((1 < uVar1 - 6) && (1 < uVar2 - 6)) {
      if (uVar1 < 2) {
        return param_2;
      }
      if (uVar2 < 2) {
        return param_1;
      }
      chandef_primary_freqs(param_1,&local_20,&local_1c);
      chandef_primary_freqs(param_2,&local_18,local_14);
      if ((local_20 == local_18) &&
         (((local_1c == 0 || (local_14[0] == 0)) || (local_1c == local_14[0])))) {
        if ((uint)param_1[1] <= (uint)param_2[1]) {
          return param_2;
        }
        return param_1;
      }
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



/* ===== cfg80211_chandef_usable @ 00029d90 size=488 ===== */

int cfg80211_chandef_usable(int param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  iVar3 = param_1;
  piVar12 = param_2;
  uVar5 = param_3;
  iVar2 = cfg80211_chandef_valid(param_2);
  if (iVar2 == 0) goto switchD_00029dc4_default;
  iVar2 = *(int *)(param_1 + *(int *)*param_2 * 4 + 0xd4);
  if (*(char *)(iVar2 + 0x4c) != '\0') {
    piVar6 = (int *)(uint)*(byte *)(param_2 + 4);
    uVar10 = param_2[5];
    if (piVar6 == (int *)0x0) {
      if (uVar10 == 0) goto LAB_00029dbc;
    }
    else if ((uVar10 != 0) &&
            ((int)((uint)(*(byte *)(param_2 + 4) >> (*(ushort *)(*param_2 + 10) - 1 & 0xff)) << 0x1f
                  ) < 0)) {
      iVar11 = 0;
      uVar9 = 0;
      do {
        if ((int)(((uint)piVar6 >> (uVar9 & 0xff)) << 0x1f) < 0) {
          iVar7 = (uint)(*(byte *)(iVar2 + 0x4c) >> (uVar9 & 0xff)) << 0x1f;
          if (-1 < iVar7) goto switchD_00029dc4_default;
          uVar4 = ieee80211_channel_to_freq_khz(uVar9 + 1,2,piVar6,iVar7,iVar3,piVar6,uVar5);
          iVar11 = iVar11 + 1;
          iVar7 = ieee80211_get_channel_khz
                            (param_1,(uint)((ulonglong)uVar4 * (ulonglong)DAT_00029f94 >> 0x26) *
                                     1000);
          if ((iVar7 == 0) || (piVar12 = piVar6, (*(uint *)(iVar7 + 0xc) & 1) != 0))
          goto switchD_00029dc4_default;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 6);
      if (((iVar11 < 5) && ((uVar10 & 3) <= (*(uint *)(iVar2 + 0x50) & 3))) &&
         (uVar10 <= *(uint *)(iVar2 + 0x50))) goto LAB_00029dbc;
    }
    goto switchD_00029dc4_default;
  }
LAB_00029dbc:
  piVar6 = (int *)*param_2;
  switch(param_2[1]) {
  case 0:
switchD_00029dc4_caseD_0:
    param_3 = param_3 | 0x800;
    uVar8 = 0x14;
    goto LAB_00029e96;
  case 1:
    if ((*(char *)(iVar2 + 0x16) != '\0') || (*piVar6 == 3)) goto switchD_00029dc4_caseD_0;
    goto switchD_00029dc4_default;
  case 2:
    if (*piVar6 == 3) {
LAB_00029f0a:
      uVar8 = 0x28;
      break;
    }
    if ((*(char *)(iVar2 + 0x16) != '\0') && ((*(ushort *)(iVar2 + 0x14) & 0x4002) == 2)) {
      if ((((uint)piVar6[1] <= (uint)param_2[2]) || (-1 < piVar6[3] << 0x1a)) &&
         (((uint)param_2[2] <= (uint)piVar6[1] || (-1 < piVar6[3] << 0x1b)))) goto LAB_00029f0a;
    }
    goto switchD_00029dc4_default;
  case 3:
switchD_00029dc4_caseD_3:
    param_3 = param_3 | 0x80;
    if ((*piVar6 == 3) || (*(char *)(iVar2 + 0x2c) != '\0')) {
      uVar8 = 0x50;
      break;
    }
    goto switchD_00029dc4_default;
  case 4:
    uVar5 = *(uint *)(iVar2 + 0x30);
    if (((int)(uVar5 << 0x1c) < 0) || (((int)(uVar5 << 0x1d) < 0 && ((uVar5 & 0xc0000000) != 0)))) {
      bVar1 = true;
    }
    else if ((uVar5 & 0xc0000000) < 0x40000001) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((*piVar6 == 3) || (bVar1)) goto switchD_00029dc4_caseD_3;
    goto switchD_00029dc4_default;
  case 5:
    param_3 = param_3 | 0x100;
    if (*piVar6 == 3) {
LAB_00029f7a:
      uVar8 = 0xa0;
      break;
    }
    if (*(char *)(iVar2 + 0x2c) != '\0') {
      uVar5 = *(uint *)(iVar2 + 0x30) & 0xc;
      if (((uVar5 == 4) || (uVar5 == 8)) || ((*(uint *)(iVar2 + 0x30) & 0xc0000000) != 0))
      goto LAB_00029f7a;
    }
    goto switchD_00029dc4_default;
  case 6:
    uVar8 = 5;
    break;
  case 7:
    param_3 = param_3 | 0x1000;
    uVar8 = 10;
    break;
  case 8:
    uVar8 = 1;
    break;
  case 9:
    uVar8 = 2;
    break;
  case 10:
    uVar8 = 4;
    break;
  case 0xb:
    uVar8 = 8;
    break;
  case 0xc:
    uVar8 = 0x10;
    break;
  default:
    goto switchD_00029dc4_default;
  }
  param_3 = param_3 | 0x40;
LAB_00029e96:
  iVar3 = cfg80211_secondary_chans_ok
                    (param_1,param_2[2] * 1000 + (uint)*(ushort *)(param_2 + 6),uVar8,param_3,iVar3,
                     piVar12);
  if (iVar3 == 0) {
switchD_00029dc4_default:
    iVar3 = 0;
  }
  else if (param_2[3] != 0) {
    iVar3 = cfg80211_secondary_chans_ok(param_1,param_2[3] * 1000,uVar8,param_3);
    return iVar3;
  }
  return iVar3;
}



/* ===== cfg80211_set_chans_dfs_state @ 00029f98 size=66 ===== */

void cfg80211_set_chans_dfs_state(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = DAT_00029fdc;
  for (uVar3 = (param_2 + 10) - (param_3 >> 1); uVar3 <= param_2 + -10 + (param_3 >> 1);
      uVar3 = uVar3 + 0x14) {
    iVar2 = ieee80211_get_channel_khz(param_1,uVar3 * 1000);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0xc) << 0x1c < 0) {
        *(undefined4 *)(iVar2 + 0x2c) = param_4;
        *(undefined4 *)(iVar2 + 0x30) = *puVar1;
      }
    }
  }
  return;
}



/* ===== cfg80211_chandef_dfs_required @ 00029fe0 size=120 ===== */

int cfg80211_chandef_dfs_required(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = cfg80211_chandef_valid(param_2);
  if (iVar2 != 0) {
    if (8 < param_3 - 1U) {
      return 0;
    }
    if ((1 << (param_3 - 1U & 0xff) & 0x145U) == 0) {
      return 0;
    }
    if (*(uint *)(param_2 + 4) < 0xd) {
      uVar1 = *(undefined1 *)(DAT_0002a058 + *(uint *)(param_2 + 4));
      iVar2 = cfg80211_get_chans_dfs_required
                        (param_1,*(int *)(param_2 + 8) * 1000 + (uint)*(ushort *)(param_2 + 0x18),
                         uVar1);
      if (iVar2 < 0) {
        return iVar2;
      }
      if (iVar2 == 0) {
        if (*(int *)(param_2 + 0xc) != 0) {
          iVar2 = cfg80211_get_chans_dfs_required(param_1,*(int *)(param_2 + 0xc) * 1000,uVar1);
          if (iVar2 < 0) {
            return iVar2;
          }
          if (iVar2 != 0) goto LAB_0002a032;
        }
        return 0;
      }
LAB_0002a032:
      return 1 << (*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return -0x16;
}



/* ===== _cfg80211_reg_can_beacon.constprop.3 @ 0002a05c size=94 ===== */

void _cfg80211_reg_can_beacon_constprop_3
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = cfg80211_chandef_dfs_required();
  if (((0 < iVar2) && (iVar2 = cfg80211_chandef_valid(param_2), iVar2 != 0)) &&
     (*(uint *)(param_2 + 4) < 0xd)) {
    uVar1 = *(undefined1 *)(DAT_0002a0bc + *(uint *)(param_2 + 4));
    iVar2 = cfg80211_get_chans_dfs_available(param_1,*(int *)(param_2 + 8) * 1000,uVar1);
    if ((iVar2 != 0) &&
       ((*(int *)(param_2 + 4) != 4 ||
        (iVar2 = cfg80211_get_chans_dfs_available(param_1,*(int *)(param_2 + 0xc) * 1000,uVar1),
        iVar2 != 0)))) {
      uVar3 = 1;
      goto LAB_0002a06c;
    }
  }
  uVar3 = 0xb;
LAB_0002a06c:
  cfg80211_chandef_usable(param_1,param_2,uVar3,param_4);
  return;
}



/* ===== cfg80211_reg_can_beacon_relax @ 0002a0c0 size=30 ===== */

void cfg80211_reg_can_beacon_relax(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  rtnl_is_locked();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x2a0ce);
    (*pcVar1)();
  }
  rtnl_is_locked();
  _cfg80211_reg_can_beacon_constprop_3(param_1,param_2,param_3);
  return;
}



/* ===== cfg80211_reg_can_beacon @ 0002a0e0 size=2 ===== */

void cfg80211_reg_can_beacon(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = cfg80211_chandef_dfs_required();
  if (((0 < iVar2) && (iVar2 = cfg80211_chandef_valid(param_2), iVar2 != 0)) &&
     (*(uint *)(param_2 + 4) < 0xd)) {
    uVar1 = *(undefined1 *)(DAT_0002a0bc + *(uint *)(param_2 + 4));
    iVar2 = cfg80211_get_chans_dfs_available(param_1,*(int *)(param_2 + 8) * 1000,uVar1);
    if ((iVar2 != 0) &&
       ((*(int *)(param_2 + 4) != 4 ||
        (iVar2 = cfg80211_get_chans_dfs_available(param_1,*(int *)(param_2 + 0xc) * 1000,uVar1),
        iVar2 != 0)))) {
      uVar3 = 1;
      goto LAB_0002a06c;
    }
  }
  uVar3 = 0xb;
LAB_0002a06c:
  cfg80211_chandef_usable(param_1,param_2,uVar3,param_4);
  return;
}



/* ===== cfg80211_set_dfs_state @ 0002a0e2 size=60 ===== */

void cfg80211_set_dfs_state(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = cfg80211_chandef_valid(param_2);
  if ((iVar2 != 0) && (*(uint *)(param_2 + 4) < 0xd)) {
    uVar1 = *(undefined1 *)(DAT_0002a120 + *(uint *)(param_2 + 4));
    cfg80211_set_chans_dfs_state(param_1,*(undefined4 *)(param_2 + 8),uVar1,param_3);
    if (*(int *)(param_2 + 0xc) != 0) {
      cfg80211_set_chans_dfs_state(param_1,*(int *)(param_2 + 0xc),uVar1,param_3);
      return;
    }
  }
  return;
}



/* ===== cfg80211_chandef_dfs_usable @ 0002a124 size=92 ===== */

bool cfg80211_chandef_dfs_usable(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = cfg80211_chandef_valid(param_2);
  if ((iVar2 != 0) && (*(uint *)(param_2 + 4) < 0xd)) {
    uVar1 = *(undefined1 *)(DAT_0002a180 + *(uint *)(param_2 + 4));
    iVar2 = cfg80211_get_chans_dfs_usable(param_1,*(int *)(param_2 + 8) * 1000,uVar1);
    if (-1 < iVar2) {
      if (*(int *)(param_2 + 4) == 4) {
        iVar3 = cfg80211_get_chans_dfs_usable(param_1,*(int *)(param_2 + 0xc) * 1000,uVar1);
        if (iVar3 < 0) {
          return false;
        }
      }
      else {
        iVar3 = 0;
      }
      return 0 < iVar3 + iVar2;
    }
  }
  return false;
}



/* ===== cfg80211_is_sub_chan @ 0002a184 size=86 ===== */

undefined4 cfg80211_is_sub_chan(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_2 + 4);
  if (*(uint *)(*param_1 + 4) == uVar5) {
LAB_0002a1d6:
    uVar2 = 1;
  }
  else {
    if (((uint)param_1[1] < 0xd) &&
       (uVar3 = (uint)*(byte *)(DAT_0002a1dc + param_1[1]), 0x14 < uVar3)) {
      iVar4 = (int)uVar3 >> 1;
      for (uVar3 = (param_1[2] + 10) - iVar4; uVar3 <= (uint)(param_1[2] + -10 + iVar4);
          uVar3 = uVar3 + 0x14) {
        if (uVar5 == uVar3) goto LAB_0002a1d6;
      }
      iVar1 = param_1[3];
      if (iVar1 == 0) {
        return 0;
      }
      for (uVar3 = (iVar1 + 10) - iVar4; uVar3 <= (uint)(iVar1 + -10 + iVar4); uVar3 = uVar3 + 0x14)
      {
        if (uVar5 == uVar3) goto LAB_0002a1d6;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== cfg80211_beaconing_iface_active @ 0002a1e0 size=46 ===== */

bool cfg80211_beaconing_iface_active(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xac) == 0) {
switchD_0002a1ee_caseD_2:
    return false;
  }
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    uVar1 = (uint)*(byte *)(param_1 + 0x58);
    break;
  default:
    goto switchD_0002a1ee_caseD_2;
  case 3:
  case 9:
    uVar1 = *(uint *)(param_1 + 0xd0);
    break;
  case 7:
    uVar1 = (uint)*(byte *)(param_1 + 0x59);
  }
  return uVar1 != 0;
}



/* ===== cfg80211_any_wiphy_oper_chan @ 0002a218 size=132 ===== */

int cfg80211_any_wiphy_oper_chan
              (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar3;
  undefined4 extraout_r2_01;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  rtnl_is_locked();
  puVar1 = DAT_0002a29c;
  if (*(int *)(param_2 + 0xc) << 0x1c < 0) {
    uVar3 = extraout_r2;
    for (puVar4 = (undefined4 *)*DAT_0002a29c; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
      iVar2 = reg_dfs_domain_same(param_1,puVar4 + 0x67,uVar3,puVar4,param_4);
      uVar3 = extraout_r2_00;
      if (iVar2 != 0) {
        for (puVar5 = (undefined4 *)puVar4[0x10d]; puVar5 != puVar4 + 0x10d;
            puVar5 = (undefined4 *)*puVar5) {
          puVar6 = puVar5 + 7;
          mutex_lock(puVar6);
          iVar2 = cfg80211_beaconing_iface_active(puVar5 + -2);
          if ((iVar2 != 0) && (iVar2 = cfg80211_is_sub_chan(puVar5 + 0x29,param_2), iVar2 != 0)) {
            mutex_unlock(puVar6);
            return iVar2;
          }
          mutex_unlock(puVar6);
          uVar3 = extraout_r2_01;
        }
      }
    }
  }
  return 0;
}



/* ===== cfg80211_chandef_dfs_cac_time @ 0002a2a0 size=76 ===== */

uint cfg80211_chandef_dfs_cac_time(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = cfg80211_chandef_valid(param_2);
  if ((iVar2 == 0) || (0xc < *(uint *)(param_2 + 4))) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(DAT_0002a2ec + *(uint *)(param_2 + 4));
    uVar3 = cfg80211_get_chans_dfs_cac_time(param_1,*(int *)(param_2 + 8) * 1000,uVar1);
    if ((*(int *)(param_2 + 0xc) != 0) &&
       (uVar4 = cfg80211_get_chans_dfs_cac_time(param_1,*(int *)(param_2 + 0xc) * 1000,uVar1),
       uVar3 < uVar4)) {
      uVar3 = uVar4;
    }
  }
  return uVar3;
}



/* ===== cfg80211_set_monitor_channel @ 0002a2f0 size=60 ===== */

undefined4 cfg80211_set_monitor_channel(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*param_1 + 0x90) == 0) {
    uVar1 = 0xffffffa1;
  }
  else {
    rtnl_is_locked();
    if ((param_1[0x16] == param_1[0x17]) && (0 < param_1[0x16])) {
                    /* WARNING: Could not recover jumptable at 0x0002a31e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x90))(param_1 + 0x68,param_2);
      return uVar1;
    }
    uVar1 = 0xfffffff0;
  }
  return uVar1;
}



/* ===== cfg80211_get_chan_state @ 0002a32c size=192 ===== */

void cfg80211_get_chan_state(undefined4 *param_1,int *param_2,undefined4 *param_3,byte *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  if ((param_1[4] != 0) && (-1 < *(int *)(param_1[4] + 0x28) << 0x1f)) {
    return;
  }
  uVar2 = param_1[1];
  switch(uVar2) {
  case 1:
    if (param_1[0x23] == 0) {
      return;
    }
    *param_2 = *(int *)(param_1[0x23] + 0x48);
    if (*(char *)(param_1 + 0x32) == '\0') {
      uVar2 = 2;
    }
    else if (*(char *)((int)param_1 + 0xc9) != '\0') {
      uVar2 = 2;
    }
    *param_3 = uVar2;
    if (*(char *)((int)param_1 + 0xc9) == '\0') {
      return;
    }
    uVar1 = param_1[0x2c];
    break;
  case 2:
  case 8:
    if (param_1[0x23] == 0) {
      return;
    }
    iVar3 = *(int *)(param_1[0x23] + 0x48);
    goto LAB_0002a39c;
  case 3:
  case 9:
    if (*(char *)((int)param_1 + 0xdd) == '\0') {
      uVar1 = param_1[0x34];
      goto LAB_0002a3be;
    }
    *param_2 = param_1[0x2b];
    *param_3 = 1;
    uVar1 = param_1[0x2c];
    break;
  default:
    goto switchD_0002a34c_caseD_4;
  case 7:
    uVar1 = (uint)*(byte *)((int)param_1 + 0x59);
LAB_0002a3be:
    if (uVar1 == 0) {
      return;
    }
    *param_2 = param_1[0x2b];
    *param_3 = 1;
    iVar3 = cfg80211_chandef_dfs_required(*param_1,param_1 + 0x2b,param_1[1]);
    if (iVar3 < 1) {
      return;
    }
    *param_4 = (byte)(1 << (param_1[0x2c] & 0xff)) | *param_4;
    return;
  case 0xb:
    iVar3 = param_1[0x2b];
    if (iVar3 == 0) {
      return;
    }
LAB_0002a39c:
    *param_2 = iVar3;
    *param_3 = 1;
    goto switchD_0002a34c_caseD_4;
  }
  *param_4 = (byte)(1 << (uVar1 & 0xff)) | *param_4;
switchD_0002a34c_caseD_4:
  return;
}



/* ===== cfg80211_get_drvinfo @ 0002a3f8 size=94 ===== */

void cfg80211_get_drvinfo(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x1c4);
  piVar2 = *(int **)(*(int *)(*piVar3 + 0x114) + 0x38);
  iVar1 = DAT_0002a45c;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
  }
  strlcpy(param_2 + 4,iVar1,0x20);
  strlcpy(param_2 + 0x24,DAT_0002a458,0x20);
  iVar1 = DAT_0002a45c;
  if (*(char *)(*piVar3 + 0x7d) != '\0') {
    iVar1 = *piVar3 + 0x7d;
  }
  strlcpy(param_2 + 0x44,iVar1,0x20);
  iVar1 = (*(int **)(*piVar3 + 0x114))[0xb];
  if (iVar1 == 0) {
    iVar1 = **(int **)(*piVar3 + 0x114);
  }
  strlcpy(param_2 + 100,iVar1,0x20,param_4);
  return;
}



/* ===== __cfg80211_join_mesh @ 0002a460 size=382 ===== */

int __cfg80211_join_mesh(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_2 + 0x1c4);
  if ((*(int *)(iVar8 + 4) == 7) &&
     ((param_1[0x71] << 0x15 < 0 || (*(char *)((int)param_3 + 0x2e) == '\0')))) {
    if (*(char *)(iVar8 + 0x59) != '\0') {
      return -0x72;
    }
    if ((char)param_3[8] != '\0') {
      if (*(int *)(*param_1 + 0x74) == 0) goto LAB_0002a5d8;
      if (*param_3 == 0) {
        iVar1 = *(int *)(iVar8 + 0x94);
        iVar4 = *(int *)(iVar8 + 0x98);
        iVar5 = *(int *)(iVar8 + 0x9c);
        *param_3 = *(int *)(iVar8 + 0x90);
        param_3[1] = iVar1;
        param_3[2] = iVar4;
        param_3[3] = iVar5;
        iVar1 = *(int *)(iVar8 + 0xa4);
        iVar4 = *(int *)(iVar8 + 0xa8);
        param_3[4] = *(int *)(iVar8 + 0xa0);
        param_3[5] = iVar1;
        param_3[6] = iVar4;
        if (*param_3 == 0) {
          piVar7 = param_1 + 0x9d;
          do {
            piVar2 = piVar7 + 1;
            piVar7 = (int *)*piVar7;
            if (piVar7 != (int *)0x0) {
              for (iVar1 = 0; iVar1 < piVar7[3]; iVar1 = iVar1 + 1) {
                iVar4 = iVar1 * 0x38 + *piVar7;
                if ((*(uint *)(iVar4 + 0xc) & 0xb) == 0) {
                  *param_3 = iVar4;
                  break;
                }
              }
              if (*param_3 != 0) break;
            }
            piVar7 = piVar2;
          } while (piVar2 != param_1 + 0xa2);
          if (*param_3 == 0) goto LAB_0002a49a;
          param_3[1] = 0;
          param_3[2] = *(int *)(*param_3 + 4);
        }
      }
      if (param_3[0x12] == 0) {
        iVar1 = param_1[*(int *)*param_3 + 0x9d];
        if (*(int *)*param_3 == 0) {
          for (uVar6 = 0; (int)uVar6 < *(int *)(iVar1 + 0x10); uVar6 = uVar6 + 1) {
            if (*(short *)(uVar6 * 0xc + *(int *)(iVar1 + 4) + 4) == 10) {
              param_3[0x12] = 1 << (uVar6 & 0xff);
              break;
            }
          }
        }
        else {
          if (param_3[1] == 6) {
            uVar3 = 2;
          }
          else {
            uVar3 = 0;
            if (param_3[1] == 7) {
              uVar3 = 1;
            }
          }
          iVar1 = ieee80211_mandatory_rates(iVar1,uVar3);
          param_3[0x12] = iVar1;
        }
      }
      piVar7 = param_1 + 0x68;
      iVar1 = cfg80211_chandef_dfs_required(piVar7,param_3,7);
      if (iVar1 < 0) {
        return iVar1;
      }
      if (((iVar1 == 0) || ((char)param_3[0x5e] != '\0')) &&
         (iVar1 = cfg80211_reg_can_beacon(piVar7,param_3,7), iVar1 != 0)) {
        iVar1 = (**(code **)(*param_1 + 0x74))(piVar7,param_2,param_4,param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        memcpy((void *)(iVar8 + 0x38),(void *)param_3[7],(uint)*(byte *)(param_3 + 8));
        *(char *)(iVar8 + 0x59) = (char)param_3[8];
        iVar1 = param_3[1];
        iVar4 = param_3[2];
        iVar5 = param_3[3];
        *(int *)(iVar8 + 0xac) = *param_3;
        *(int *)(iVar8 + 0xb0) = iVar1;
        *(int *)(iVar8 + 0xb4) = iVar4;
        *(int *)(iVar8 + 0xb8) = iVar5;
        iVar1 = param_3[5];
        iVar4 = param_3[6];
        *(int *)(iVar8 + 0xbc) = param_3[4];
        *(int *)(iVar8 + 0xc0) = iVar1;
        *(int *)(iVar8 + 0xc4) = iVar4;
        *(uint *)(iVar8 + 0xd0) = (uint)*(ushort *)((int)param_3 + 0x32);
        return 0;
      }
    }
LAB_0002a49a:
    iVar8 = -0x16;
  }
  else {
LAB_0002a5d8:
    iVar8 = -0x5f;
  }
  return iVar8;
}



/* ===== cfg80211_set_mesh_channel @ 0002a5de size=84 ===== */

int cfg80211_set_mesh_channel(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*(code **)(*param_1 + 0x8c) == (code *)0x0) {
    if (*(char *)(param_2 + 0x59) != '\0') {
      return -0x10;
    }
    puVar5 = (undefined4 *)(param_2 + 0x90);
  }
  else {
    if (param_3[1] != 0) {
      return -0x16;
    }
    if (-1 < *(int *)(*(int *)(param_2 + 0x10) + 0x28) << 0x1f) {
      return -100;
    }
    iVar1 = (**(code **)(*param_1 + 0x8c))(param_1 + 0x68,*(int *)(param_2 + 0x10),*param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    puVar5 = (undefined4 *)(param_2 + 0xac);
  }
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *puVar5 = *param_3;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  puVar5[4] = param_3[4];
  puVar5[5] = uVar2;
  puVar5[6] = uVar3;
  return 0;
}



/* ===== __cfg80211_leave_mesh @ 0002a632 size=104 ===== */

int __cfg80211_leave_mesh(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1c4);
  if ((*(int *)(iVar2 + 4) == 7) && (*(code **)(*param_1 + 0x78) != (code *)0x0)) {
    if (*(char *)(iVar2 + 0x59) == '\0') {
      iVar1 = -0x6b;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x78))(param_1 + 0x68);
      if (iVar1 == 0) {
        *(undefined4 *)(iVar2 + 0x68) = 0;
        *(undefined1 *)(iVar2 + 0x59) = 0;
        *(undefined4 *)(iVar2 + 0xd0) = 0;
        memset((void *)(iVar2 + 0xac),0,0x1c);
        if (*(code **)(*param_1 + 0x160) != (code *)0x0) {
          (**(code **)(*param_1 + 0x160))(param_1 + 0x68,param_2,0);
        }
        cfg80211_sched_dfs_chan_update(param_1);
      }
    }
  }
  else {
    iVar1 = -0x5f;
  }
  return iVar1;
}



/* ===== cfg80211_leave_mesh @ 0002a69a size=38 ===== */

undefined4 cfg80211_leave_mesh(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1c4) + 0x24;
  mutex_lock(iVar2);
  uVar1 = __cfg80211_leave_mesh(param_1,param_2);
  mutex_unlock(iVar2);
  return uVar1;
}



/* ===== __cfg80211_stop_ap @ 0002a6c0 size=136 ===== */

int __cfg80211_stop_ap(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x1c4);
  pcVar2 = *(code **)(*param_1 + 0x38);
  if ((pcVar2 == (code *)0x0) || ((*(int *)(iVar3 + 4) != 3 && (*(int *)(iVar3 + 4) != 9)))) {
    iVar1 = -0x5f;
  }
  else if (*(int *)(iVar3 + 0xd0) == 0) {
    iVar1 = -2;
  }
  else {
    iVar1 = (*pcVar2)(param_1 + 0x68,param_2,*(int *)(iVar3 + 0xd0),pcVar2,param_4);
    if (iVar1 == 0) {
      *(undefined4 *)(iVar3 + 0x68) = 0;
      *(undefined4 *)(iVar3 + 0xd0) = 0;
      memset((void *)(iVar3 + 0xac),0,0x1c);
      *(undefined1 *)(iVar3 + 0x58) = 0;
      if (*(code **)(*param_1 + 0x160) != (code *)0x0) {
        (**(code **)(*param_1 + 0x160))(param_1 + 0x68,param_2,0);
      }
      if (param_3 != 0) {
        nl80211_send_ap_stopped(iVar3);
      }
      cfg80211_sched_dfs_chan_update(param_1);
    }
    queue_work_on(1,*DAT_0002a748,DAT_0002a74c);
  }
  return iVar1;
}



/* ===== cfg80211_stop_ap @ 0002a750 size=42 ===== */

undefined4 cfg80211_stop_ap(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1c4) + 0x24;
  mutex_lock(iVar2);
  uVar1 = __cfg80211_stop_ap(param_1,param_2,param_3);
  mutex_unlock(iVar2);
  return uVar1;
}



/* ===== __cfg80211_join_ocb @ 0002a77c size=64 ===== */

int __cfg80211_join_ocb(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x1c4);
  if ((*(int *)(iVar5 + 4) == 0xb) && (*(code **)(*param_1 + 0x7c) != (code *)0x0)) {
    if (*param_3 == 0) {
      iVar1 = -0x16;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x7c))(param_1 + 0x68);
      if (iVar1 == 0) {
        iVar2 = param_3[1];
        iVar3 = param_3[2];
        iVar4 = param_3[3];
        *(int *)(iVar5 + 0xac) = *param_3;
        *(int *)(iVar5 + 0xb0) = iVar2;
        *(int *)(iVar5 + 0xb4) = iVar3;
        *(int *)(iVar5 + 0xb8) = iVar4;
        iVar2 = param_3[5];
        iVar3 = param_3[6];
        *(int *)(iVar5 + 0xbc) = param_3[4];
        *(int *)(iVar5 + 0xc0) = iVar2;
        *(int *)(iVar5 + 0xc4) = iVar3;
      }
    }
  }
  else {
    iVar1 = -0x5f;
  }
  return iVar1;
}



/* ===== cfg80211_join_ocb @ 0002a7bc size=42 ===== */

undefined4 cfg80211_join_ocb(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1c4) + 0x24;
  mutex_lock(iVar2);
  uVar1 = __cfg80211_join_ocb(param_1,param_2,param_3);
  mutex_unlock(iVar2);
  return uVar1;
}



/* ===== __cfg80211_leave_ocb @ 0002a7e6 size=52 ===== */

int __cfg80211_leave_ocb(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1c4);
  if ((*(int *)(iVar2 + 4) == 0xb) && (*(code **)(*param_1 + 0x80) != (code *)0x0)) {
    iVar1 = (**(code **)(*param_1 + 0x80))(param_1 + 0x68);
    if (iVar1 == 0) {
      memset((void *)(iVar2 + 0xac),0,0x1c);
    }
  }
  else {
    iVar1 = -0x5f;
  }
  return iVar1;
}



/* ===== cfg80211_leave_ocb @ 0002a81a size=38 ===== */

undefined4 cfg80211_leave_ocb(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1c4) + 0x24;
  mutex_lock(iVar2);
  uVar1 = __cfg80211_leave_ocb(param_1,param_2);
  mutex_unlock(iVar2);
  return uVar1;
}



/* ===== nla_put_u32 @ 0002a840 size=18 ===== */

void nla_put_u32(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_3;
  uStack_8 = param_3;
  nla_put(param_1,param_2,4,&local_c,param_1);
  return;
}



/* ===== nla_nest_start_noflag @ 0002a852 size=24 ===== */

undefined4 nla_nest_start_noflag(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x98);
  iVar1 = nla_put(param_1,param_2,0);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== nla_put_u64_64bit @ 0002a86a size=24 ===== */

void nla_put_u64_64bit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  nla_put_64bit(param_1,param_2,8,&local_10,param_5,param_2);
  return;
}



/* ===== wiphy_to_rdev.part.0 @ 0002a882 size=1 ===== */

void wiphy_to_rdev_part_0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(2,0x2a882);
  (*pcVar1)();
}



/* ===== nla_parse_nested_deprecated.constprop.3 @ 0002a884 size=24 ===== */

void nla_parse_nested_deprecated_constprop_3
               (undefined4 param_1,undefined4 param_2,ushort *param_3,undefined4 param_4)

{
  __nla_parse(param_1,param_2,param_3 + 2,*param_3 - 4,0,0,param_4,param_4);
  return;
}



/* ===== cfg80211_pmsr_complete @ 0002a89c size=254 ===== */

void cfg80211_pmsr_complete(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  int *local_20;
  undefined4 *puStack_1c;
  
  iVar8 = *param_1;
  piVar7 = param_1;
  iVar6 = param_3;
  iVar5 = iVar8;
  local_20 = param_1;
  puStack_1c = param_2;
  if (iVar8 != 0) goto LAB_0002a8ae;
  do {
    wiphy_to_rdev_part_0(piVar7,param_3,iVar6);
    param_3 = extraout_r1;
    iVar5 = iVar8;
LAB_0002a8ae:
    iVar3 = __alloc_skb(0xf00,param_3,0,0xffffffff);
    if (iVar3 == 0) goto LAB_0002a932;
    local_20 = (int *)0x85;
    iVar4 = nl80211hdr_put(iVar3,0,0);
    if (iVar4 == 0) goto LAB_0002a95a;
    iVar8 = iVar5 + -0x1a0;
    uVar9 = nla_put_u32(iVar3,1,*(undefined4 *)(iVar5 + -0x168));
    param_3 = (int)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 != 0) goto LAB_0002a95a;
    iVar6 = param_1[5];
    piVar7 = (int *)0x0;
  } while (*param_1 == 0);
  local_20 = (int *)0xe5;
  iVar6 = nla_put_u64_64bit(iVar3,0x99,iVar6,*(undefined4 *)(*param_1 + -0x168));
  if (iVar6 == 0) {
    local_20 = (int *)0xe5;
    iVar5 = nla_put_u64_64bit(iVar3,0x58,*param_2,param_2[1]);
    iVar6 = DAT_0002a99c;
    if (iVar5 == 0) {
      *(int *)(iVar4 + -0x14) = *(int *)(iVar3 + 0x98) - (iVar4 + -0x14);
      netlink_unicast(*(undefined4 *)(iVar6 + 0x9c),iVar3,param_2[4],0x40);
      goto LAB_0002a932;
    }
  }
LAB_0002a95a:
  kfree_skb(iVar3);
LAB_0002a932:
  *(int *)(((uint)&local_20 & 0xffffe000) + 4) =
       *(int *)(((uint)&local_20 & 0xffffe000) + 4) + 0x200;
  piVar7 = (int *)param_1[0x3b];
  piVar2 = (int *)*piVar7;
  do {
    piVar1 = piVar2;
    if (piVar7 == param_1 + 0x3b) {
      param_2 = (undefined4 *)0x0;
LAB_0002a97a:
      __local_bh_enable_ip(DAT_0002a9a0,0x200);
      kfree(param_2);
      return;
    }
    if (piVar7 + -9 == param_2) {
      iVar6 = param_2[9];
      piVar7 = (int *)param_2[10];
      *(int **)(iVar6 + 4) = piVar7;
      *piVar7 = iVar6;
      param_2[9] = 0x100;
      param_2[10] = 0x122;
      goto LAB_0002a97a;
    }
    piVar2 = (int *)*piVar1;
    piVar7 = piVar1;
  } while( true );
}



/* ===== cfg80211_pmsr_process_abort @ 0002a9a4 size=158 ===== */

void cfg80211_pmsr_process_abort(int *****param_1,undefined4 param_2,undefined4 param_3)

{
  int ******ppppppiVar1;
  int ******ppppppiVar2;
  int *****pppppiVar3;
  uint uVar4;
  int ******ppppppiVar5;
  int *****pppppiVar6;
  int *****pppppiVar7;
  int ****ppppiVar8;
  int *****local_28;
  int *****local_24;
  undefined4 uStack_20;
  
  ppppiVar8 = *param_1;
  pppppiVar3 = param_1;
  uStack_20 = param_3;
  if (ppppiVar8 == (int ****)0x0) {
    local_28 = param_1;
    local_24 = (int *****)param_2;
    pppppiVar3 = (int *****)wiphy_to_rdev_part_0();
  }
  uVar4 = (uint)&local_28 & 0xffffe000;
  *(int *)(uVar4 + 4) = *(int *)(uVar4 + 4) + 0x200;
  ppppppiVar5 = (int ******)pppppiVar3[0x3b];
  ppppppiVar2 = (int ******)*ppppppiVar5;
  local_28 = (int *****)&local_28;
  local_24 = (int *****)&local_28;
  while( true ) {
    ppppppiVar1 = ppppppiVar2;
    if (ppppppiVar5 == (int ******)(pppppiVar3 + 0x3b)) break;
    if (ppppppiVar5[-5] == (int *****)0x0) {
      pppppiVar7 = *ppppppiVar5;
      pppppiVar6 = ppppppiVar5[1];
      pppppiVar7[1] = (int ****)pppppiVar6;
      *pppppiVar6 = (int ****)pppppiVar7;
      *ppppppiVar5 = (int *****)&local_28;
      ppppppiVar5[1] = local_24;
      *local_24 = (int ****)ppppppiVar5;
      local_24 = (int *****)ppppppiVar5;
    }
    ppppppiVar2 = (int ******)*ppppppiVar1;
    ppppppiVar5 = ppppppiVar1;
  }
  __local_bh_enable_ip(DAT_0002aa44,0x200);
  ppppppiVar2 = (int ******)*local_28;
  ppppppiVar5 = (int ******)local_28;
  while (ppppppiVar1 = ppppppiVar2, &local_28 != ppppppiVar5) {
    if (ppppiVar8[-0x68][0x6b] != (int **)0x0) {
      (*(code *)ppppiVar8[-0x68][0x6b])(ppppiVar8,param_1,ppppppiVar5 + -9);
    }
    kfree(ppppppiVar5 + -9);
    ppppppiVar2 = (int ******)*ppppppiVar1;
    ppppppiVar5 = ppppppiVar1;
  }
  return;
}



/* ===== cfg80211_pmsr_report @ 0002aa48 size=1008 ===== */

void cfg80211_pmsr_report(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  undefined4 extraout_r1;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 local_2c [2];
  
  iVar12 = *param_1;
  piVar1 = param_1;
  puVar11 = param_3;
  iVar4 = iVar12;
  if (iVar12 != 0) goto LAB_0002aa5e;
  do {
    wiphy_to_rdev_part_0(piVar1,param_4,puVar11);
    param_4 = extraout_r1;
    iVar4 = iVar12;
LAB_0002aa5e:
    iVar2 = __alloc_skb(0xf00,param_4,0,0xffffffff);
    if (iVar2 == 0) {
      return;
    }
    iVar3 = nl80211hdr_put(iVar2,0,0,0,0x84);
    if (iVar3 == 0) goto LAB_0002ac04;
    iVar12 = iVar4 + -0x1a0;
    uVar13 = nla_put_u32(iVar2,1,*(undefined4 *)(iVar4 + -0x168));
    param_4 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if ((int)uVar13 != 0) goto LAB_0002ac04;
    puVar11 = (undefined4 *)param_1[5];
    piVar1 = (int *)0x0;
  } while (*param_1 == 0);
  iVar4 = nla_put_u64_64bit(iVar2,0x99,puVar11,*(undefined4 *)(*param_1 + -0x168),0xe5);
  if ((iVar4 != 0) || (iVar4 = nla_put_u64_64bit(iVar2,0x58,*param_2,param_2[1],0xe5), iVar4 != 0))
  goto LAB_0002ac04;
  psVar5 = (short *)nla_nest_start_noflag(iVar2,0x111);
  if ((((psVar5 == (short *)0x0) ||
       ((((psVar6 = (short *)nla_nest_start_noflag(iVar2,5), psVar6 == (short *)0x0 ||
          (psVar7 = (short *)nla_nest_start_noflag(iVar2,1), psVar7 == (short *)0x0)) ||
         (iVar4 = nla_put(iVar2,1,6,param_3 + 5), iVar4 != 0)) ||
        ((psVar8 = (short *)nla_nest_start_noflag(iVar2,4), psVar8 == (short *)0x0 ||
         (iVar4 = nla_put_u32(iVar2,2,param_3[4]), iVar4 != 0)))))) ||
      (iVar4 = nla_put_u64_64bit(iVar2,3,*param_3,param_3[1],6), iVar4 != 0)) ||
     (((((int)((uint)*(byte *)((int)param_3 + 0x1a) << 0x1e) < 0 &&
        (iVar4 = nla_put_u64_64bit(iVar2,4,param_3[2],param_3[3],6), iVar4 != 0)) ||
       (((int)((uint)*(byte *)((int)param_3 + 0x1a) << 0x1f) < 0 &&
        (iVar4 = nla_put(iVar2,5,0), iVar4 != 0)))) ||
      ((psVar9 = (short *)nla_nest_start_noflag(iVar2,1), psVar9 == (short *)0x0 ||
       (psVar10 = (short *)nla_nest_start_noflag(iVar2,param_3[7]), psVar10 == (short *)0x0))))))
  goto LAB_0002abf4;
  if (param_3[7] != 1) goto LAB_0002ab76;
  if (param_3[4] == 3) {
    iVar4 = nla_put_u32(iVar2,1,param_3[0xc]);
    if (iVar4 == 0) {
      if ((param_3[0xc] != 6) || (*(char *)((int)param_3 + 0x3e) == '\0')) goto LAB_0002ab76;
      iVar4 = nla_put_u32(iVar2,5);
LAB_0002ac46:
      if (iVar4 == 0) {
LAB_0002ab76:
        iVar4 = DAT_0002ae38;
        *psVar10 = (short)*(undefined4 *)(iVar2 + 0x98) - (short)psVar10;
        *psVar9 = (short)*(undefined4 *)(iVar2 + 0x98) - (short)psVar9;
        *psVar8 = (short)*(undefined4 *)(iVar2 + 0x98) - (short)psVar8;
        *psVar7 = (short)*(undefined4 *)(iVar2 + 0x98) - (short)psVar7;
        *psVar6 = (short)*(undefined4 *)(iVar2 + 0x98) - (short)psVar6;
        *psVar5 = (short)*(undefined4 *)(iVar2 + 0x98) - (short)psVar5;
        *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
        netlink_unicast(*(undefined4 *)(iVar4 + 0x9c),iVar2,param_2[4],0x40);
        return;
      }
    }
  }
  else if ((((*(short *)(param_3 + 0xf) < 0) || (iVar4 = nla_put_u32(iVar2,2), iVar4 == 0)) &&
           ((-1 < (int)((uint)*(byte *)(param_3 + 0x24) << 0x1f) ||
            (iVar4 = nla_put_u32(iVar2,3,param_3[0xd]), iVar4 == 0)))) &&
          ((-1 < (int)((uint)*(byte *)(param_3 + 0x24) << 0x1e) ||
           (iVar4 = nla_put_u32(iVar2,4,param_3[0xe]), iVar4 == 0)))) {
    local_2c[0] = CONCAT31(local_2c[0]._1_3_,*(undefined1 *)((int)param_3 + 0x3f));
    iVar4 = nla_put(iVar2,6,1,local_2c);
    if (iVar4 == 0) {
      local_2c[0] = CONCAT31(local_2c[0]._1_3_,*(undefined1 *)(param_3 + 0x10));
      iVar4 = nla_put(iVar2,7,1,local_2c);
      if (iVar4 == 0) {
        local_2c[0] = CONCAT31(local_2c[0]._1_3_,*(undefined1 *)((int)param_3 + 0x41));
        iVar4 = nla_put(iVar2,8,1,local_2c);
        if (iVar4 == 0) {
          if ((int)((uint)*(byte *)(param_3 + 0x24) << 0x1d) < 0) {
            local_2c[0] = param_3[0x11];
            iVar4 = nla_put(iVar2,9,4,local_2c);
            if (iVar4 != 0) goto LAB_0002abf4;
          }
          if ((int)((uint)*(byte *)(param_3 + 0x24) << 0x1c) < 0) {
            local_2c[0] = param_3[0x12];
            iVar4 = nla_put(iVar2,10,4,local_2c);
            if (iVar4 != 0) goto LAB_0002abf4;
          }
          if (((((-1 < (int)((uint)*(byte *)(param_3 + 0x24) << 0x1b)) ||
                (iVar4 = nl80211_put_sta_rate(iVar2,param_3 + 0x13,0xb), iVar4 != 0)) &&
               ((-1 < (int)((uint)*(byte *)(param_3 + 0x24) << 0x1a) ||
                (iVar4 = nl80211_put_sta_rate(iVar2,(int)param_3 + 0x56,0xc), iVar4 != 0)))) &&
              ((-1 < (int)((uint)*(byte *)(param_3 + 0x24) << 0x19) ||
               (iVar4 = nla_put_u64_64bit(iVar2,0xd,param_3[0x18],param_3[0x19],0x15), iVar4 == 0)))
              ) && (((((-1 < *(char *)(param_3 + 0x24) ||
                       (iVar4 = nla_put_u64_64bit(iVar2,0xe,param_3[0x1a],param_3[0x1b],0x15),
                       iVar4 == 0)) &&
                      (((-1 < (int)((uint)*(byte *)((int)param_3 + 0x91) << 0x1f) ||
                        (iVar4 = nla_put_u64_64bit(iVar2,0xf,param_3[0x1c],param_3[0x1d],0x15),
                        iVar4 == 0)) &&
                       ((-1 < (int)((uint)*(byte *)((int)param_3 + 0x91) << 0x1e) ||
                        (iVar4 = nla_put_u64_64bit(iVar2,0x10,param_3[0x1e],param_3[0x1f],0x15),
                        iVar4 == 0)))))) &&
                     (((-1 < (int)((uint)*(byte *)((int)param_3 + 0x91) << 0x1d) ||
                       (iVar4 = nla_put_u64_64bit(iVar2,0x11,param_3[0x20],param_3[0x21],0x15),
                       iVar4 == 0)) &&
                      ((-1 < (int)((uint)*(byte *)((int)param_3 + 0x91) << 0x1c) ||
                       (iVar4 = nla_put_u64_64bit(iVar2,0x12,param_3[0x22],param_3[0x23],0x15),
                       iVar4 == 0)))))) &&
                    (((param_3[8] == 0 || (param_3[10] == 0)) ||
                     (iVar4 = nla_put(iVar2,0x13), iVar4 == 0)))))) {
            if ((param_3[9] == 0) || (param_3[0xb] == 0)) goto LAB_0002ab76;
            iVar4 = nla_put(iVar2,0x14);
            goto LAB_0002ac46;
          }
        }
      }
    }
  }
LAB_0002abf4:
  iVar4 = ___ratelimit(DAT_0002ae40,DAT_0002ae3c);
  if (iVar4 != 0) {
    printk(DAT_0002ae44);
  }
LAB_0002ac04:
  kfree_skb(iVar2);
  return;
}



/* ===== nl80211_pmsr_start @ 0002ae48 size=1404 ===== */

int nl80211_pmsr_start(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  ushort *puVar14;
  int local_98;
  int local_94;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 auStack_78 [4];
  ushort *local_74;
  int local_70;
  undefined1 auStack_6c [4];
  int local_68;
  int local_64;
  int local_60;
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar3 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x444);
  piVar13 = *(int **)(param_2 + 0x18);
  iVar8 = *(int *)(param_2 + 0x1c);
  if (piVar13[0x11d] == 0) {
    return -0x5f;
  }
  if ((puVar3 == (ushort *)0x0) ||
     (puVar3 = (ushort *)nla_find(puVar3 + 2,*puVar3 - 4,5), puVar3 == (ushort *)0x0)) {
    return -0x16;
  }
  local_88 = 0;
  iVar6 = *puVar3 - 4;
  puVar14 = puVar3 + 2;
  for (puVar4 = puVar14;
      ((3 < iVar6 && (uVar9 = (uint)*puVar4, 3 < uVar9)) && ((int)uVar9 <= iVar6));
      puVar4 = (ushort *)((int)puVar4 + uVar9)) {
    local_88 = local_88 + 1;
    if (*(uint *)piVar13[0x11d] < local_88) {
      puVar10 = *(undefined4 **)(param_2 + 0x20);
      if (puVar10 == (undefined4 *)0x0) {
        return -0x16;
      }
      *puVar10 = DAT_0002b154;
      puVar10[1] = puVar4;
      puVar10[2] = 0;
      return -0x16;
    }
    uVar9 = uVar9 + 3 & 0xfffffffc;
    iVar6 = iVar6 - uVar9;
  }
  uVar9 = (uint)((ulonglong)local_88 * 0x34);
  if ((int)((ulonglong)local_88 * 0x34 >> 0x20) == 0) {
    iVar6 = uVar9 + 0x30;
    if (0xffffffcf < uVar9) {
      iVar6 = -1;
    }
  }
  else {
    iVar6 = -1;
  }
  piVar5 = (int *)__kmalloc(iVar6,0xdc0);
  if (piVar5 == (int *)0x0) {
    return -0xc;
  }
  iVar6 = *(int *)(param_2 + 0x14);
  if (*(int *)(iVar6 + 0x440) != 0) {
    piVar5[5] = *(int *)(*(int *)(iVar6 + 0x440) + 4);
  }
  if (*(int *)(iVar6 + 0x18) == 0) {
    if (*(int *)(iVar8 + 0x10) == 0) {
      piVar11 = (int *)(iVar8 + 0x32);
    }
    else {
      piVar11 = *(int **)(*(int *)(iVar8 + 0x10) + 0x1cc);
    }
    piVar5[6] = *piVar11;
    *(short *)(piVar5 + 7) = (short)piVar11[1];
    *(undefined4 *)((int)piVar5 + 0x1e) = 0xffffffff;
    *(undefined2 *)((int)piVar5 + 0x22) = 0xffff;
  }
  else {
    uVar9 = *(byte *)(piVar13[0x11d] + 4) & 2;
    if ((*(byte *)(piVar13[0x11d] + 4) & 2) == 0) {
      puVar10 = *(undefined4 **)(param_2 + 0x20);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = DAT_0002b158;
        local_70 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
LAB_0002af24:
        puVar10[1] = local_70;
LAB_0002b01e:
        puVar10[2] = uVar9;
      }
LAB_0002b3c4:
      iVar6 = -0x16;
      goto LAB_0002af3e;
    }
    iVar6 = nl80211_parse_random_mac(iVar6,piVar5 + 6,(int)piVar5 + 0x1e);
    if (iVar6 != 0) goto LAB_0002af3e;
  }
  piVar11 = piVar5 + 0xb;
  local_80 = *puVar3 - 4;
  local_84 = 0;
  for (; ((3 < local_80 && (3 < *puVar14)) && ((int)(uint)*puVar14 <= local_80));
      puVar14 = (ushort *)((int)puVar14 + uVar9)) {
    nla_parse_nested_deprecated_constprop_3(auStack_6c,4,puVar14,0);
    if (((local_68 == 0) || (local_64 == 0)) || (local_60 == 0)) {
      puVar10 = *(undefined4 **)(param_2 + 0x20);
      if (puVar10 == (undefined4 *)0x0) goto LAB_0002b3c4;
      *puVar10 = DAT_0002b15c;
      puVar10[1] = puVar14;
LAB_0002b01c:
      uVar9 = 0;
      goto LAB_0002b01e;
    }
    *piVar11 = *(int *)(local_68 + 4);
    *(undefined2 *)(piVar11 + 1) = *(undefined2 *)(local_68 + 8);
    memset(*(void **)(param_2 + 0x14),0,0x4ac);
    iVar6 = nla_parse_nested_deprecated_constprop_3
                      (*(undefined4 *)(param_2 + 0x14),0x12a,local_64,
                       *(undefined4 *)(param_2 + 0x20));
    if ((iVar6 != 0) || (iVar6 = nl80211_parse_chandef(piVar13,param_2,piVar11 + 2), iVar6 != 0))
    goto LAB_0002af3e;
    nla_parse_nested_deprecated_constprop_3(auStack_78,2,local_60,0);
    if (local_74 == (ushort *)0x0) {
      puVar10 = *(undefined4 **)(param_2 + 0x20);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = DAT_0002b160;
        puVar10[1] = local_60;
        goto LAB_0002b01c;
      }
      goto LAB_0002b3c4;
    }
    if (local_70 != 0) {
      *(byte *)(piVar5 + local_84 * 0xd + 0x14) = *(byte *)(piVar5 + local_84 * 0xd + 0x14) | 1;
    }
    if (((int)((uint)*(byte *)(piVar5 + local_84 * 0xd + 0x14) << 0x1f) < 0) &&
       (uVar9 = *(byte *)(piVar13[0x11d] + 4) & 1, (*(byte *)(piVar13[0x11d] + 4) & 1) == 0)) {
      puVar10 = *(undefined4 **)(param_2 + 0x20);
      if (puVar10 == (undefined4 *)0x0) goto LAB_0002b3c4;
      *puVar10 = DAT_0002b164;
      goto LAB_0002af24;
    }
    iVar6 = 0;
    local_7c = *local_74 - 4;
    for (puVar3 = local_74 + 2;
        ((3 < local_7c && (3 < *puVar3)) && ((int)(uint)*puVar3 <= local_7c));
        puVar3 = (ushort *)((int)puVar3 + uVar9)) {
      if ((puVar3[1] & 0x3fff) != 1) {
        puVar10 = *(undefined4 **)(param_2 + 0x20);
        if (puVar10 == (undefined4 *)0x0) goto LAB_0002b39a;
        *puVar10 = DAT_0002b40c;
        puVar10[1] = puVar3;
LAB_0002b212:
        uVar9 = 0;
LAB_0002b2f6:
        puVar10[2] = uVar9;
        goto LAB_0002b39a;
      }
      iVar6 = piVar13[0x11d];
      if ((int)((*(uint *)(iVar6 + 0xc) >> (piVar11[3] & 0xffU)) << 0x1f) < 0) {
        nla_parse_nested_deprecated_constprop_3(local_58,0xb,puVar3,0);
        if (local_50 == 0) {
          uVar9 = 3;
        }
        else {
          uVar9 = *(uint *)(local_50 + 4);
        }
        *(byte *)((int)piVar5 + local_84 * 0x34 + 0x5a) =
             *(byte *)((int)piVar5 + local_84 * 0x34 + 0x5a) | 1;
        if ((*(int *)piVar11[2] != 2) && (local_50 == 0)) {
          puVar10 = *(undefined4 **)(param_2 + 0x20);
          uVar7 = DAT_0002b16c;
          goto joined_r0x0002b396;
        }
        if ((*(uint *)(iVar6 + 8) >> (uVar9 & 0xff) & 1) == 0) {
          puVar10 = *(undefined4 **)(param_2 + 0x20);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = DAT_0002b3e0;
            uVar9 = 0;
            iVar6 = local_50;
LAB_0002b18a:
            puVar10[1] = iVar6;
            puVar10[2] = uVar9;
          }
          goto LAB_0002b39a;
        }
        piVar11[10] = uVar9;
        *(undefined2 *)(piVar11 + 0xb) = 0;
        if (local_48 != 0) {
          *(short *)(piVar11 + 0xb) = (short)*(undefined4 *)(local_48 + 4);
        }
        *(byte *)((int)piVar5 + local_84 * 0x34 + 0x5a) =
             *(byte *)((int)piVar5 + local_84 * 0x34 + 0x5a) & 0xfd | (local_54 != 0) << 1;
        bVar1 = *(byte *)(iVar6 + 0x12);
        if (local_54 == 0) {
          if ((int)((uint)bVar1 << 0x1d) < 0) goto LAB_0002b1e2;
          puVar10 = *(undefined4 **)(param_2 + 0x20);
          uVar7 = DAT_0002b3e8;
joined_r0x0002b1da:
          if (puVar10 == (undefined4 *)0x0) goto LAB_0002b39a;
          goto LAB_0002b118;
        }
        uVar9 = bVar1 & 2;
        if ((bVar1 & 2) == 0) {
          puVar10 = *(undefined4 **)(param_2 + 0x20);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = DAT_0002b3e4;
            iVar6 = local_54;
            goto LAB_0002b18a;
          }
          goto LAB_0002b39a;
        }
LAB_0002b1e2:
        *(undefined1 *)((int)piVar11 + 0x2f) = 0;
        if (local_4c != 0) {
          *(char *)((int)piVar11 + 0x2f) = (char)*(undefined4 *)(local_4c + 4);
        }
        if ((-1 < *(char *)(iVar6 + 0x10)) &&
           ((int)*(char *)(iVar6 + 0x10) < (int)(uint)*(byte *)((int)piVar11 + 0x2f))) {
          puVar10 = *(undefined4 **)(param_2 + 0x20);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = DAT_0002b3ec;
            iVar6 = local_4c;
LAB_0002b210:
            puVar10[1] = iVar6;
            goto LAB_0002b212;
          }
          goto LAB_0002b39a;
        }
        *(undefined1 *)(piVar11 + 0xc) = 0xf;
        if (local_44 != 0) {
          *(char *)(piVar11 + 0xc) = (char)*(undefined4 *)(local_44 + 4);
        }
        *(undefined1 *)((int)piVar11 + 0x31) = 0;
        if (local_40 != 0) {
          *(char *)((int)piVar11 + 0x31) = (char)*(undefined4 *)(local_40 + 4);
        }
        if ((*(byte *)(iVar6 + 0x11) != 0) &&
           ((*(byte *)(iVar6 + 0x11) < *(byte *)((int)piVar11 + 0x31) ||
            (*(byte *)((int)piVar11 + 0x31) == 0)))) {
          puVar10 = *(undefined4 **)(param_2 + 0x20);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = DAT_0002b3f0;
            iVar6 = local_40;
            goto LAB_0002b210;
          }
          goto LAB_0002b39a;
        }
        *(undefined1 *)((int)piVar11 + 0x32) = 3;
        if (local_3c != 0) {
          *(char *)((int)piVar11 + 0x32) = (char)*(undefined4 *)(local_3c + 4);
        }
        uVar9 = *(byte *)((int)piVar5 + local_84 * 0x34 + 0x5a) & 0xfffffffb |
                (uint)(local_38 != 0) << 2;
        *(char *)((int)piVar5 + local_84 * 0x34 + 0x5a) = (char)uVar9;
        if ((((int)(uVar9 << 0x1d) < 0) && (bVar1 = *(byte *)(iVar6 + 0x12), (bVar1 & 8) == 0)) &&
           (puVar10 = *(undefined4 **)(param_2 + 0x20), puVar10 != (undefined4 *)0x0)) {
          *puVar10 = DAT_0002b3f4;
          puVar10[1] = local_38;
          puVar10[2] = bVar1 & 8;
        }
        uVar9 = *(byte *)((int)piVar5 + local_84 * 0x34 + 0x5a) & 0xfffffff7 |
                (uint)(local_34 != 0) << 3;
        *(char *)((int)piVar5 + local_84 * 0x34 + 0x5a) = (char)uVar9;
        if ((((int)(uVar9 << 0x1c) < 0) && (bVar1 = *(byte *)(iVar6 + 0x12), (bVar1 & 0x10) == 0))
           && (puVar10 = *(undefined4 **)(param_2 + 0x20), puVar10 != (undefined4 *)0x0)) {
          *puVar10 = DAT_0002b3f8;
          puVar10[1] = local_34;
          puVar10[2] = bVar1 & 0x10;
        }
        uVar9 = *(byte *)((int)piVar5 + local_84 * 0x34 + 0x5a) & 0xffffffef |
                (uint)(local_30 != 0) << 4;
        *(char *)((int)piVar5 + local_84 * 0x34 + 0x5a) = (char)uVar9;
        if (((int)(uVar9 << 0x1b) < 0) &&
           (uVar9 = *(byte *)(iVar6 + 0x12) & 0x20, (*(byte *)(iVar6 + 0x12) & 0x20) == 0)) {
          puVar10 = *(undefined4 **)(param_2 + 0x20);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = DAT_0002b3fc;
            iVar6 = local_30;
LAB_0002b2f4:
            puVar10[1] = iVar6;
            goto LAB_0002b2f6;
          }
          goto LAB_0002b39a;
        }
        bVar1 = *(byte *)((int)piVar5 + local_84 * 0x34 + 0x5a);
        bVar2 = bVar1 & 0xdf | (local_2c != 0) << 5;
        *(byte *)((int)piVar5 + local_84 * 0x34 + 0x5a) = bVar2;
        if (((int)((uint)bVar2 << 0x1a) < 0) &&
           (uVar9 = *(byte *)(iVar6 + 0x12) & 0x40, (*(byte *)(iVar6 + 0x12) & 0x40) == 0)) {
          puVar10 = *(undefined4 **)(param_2 + 0x20);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = DAT_0002b400;
            iVar6 = local_2c;
            goto LAB_0002b2f4;
          }
          goto LAB_0002b39a;
        }
        if ((bVar2 & 0x30) == 0x30) {
          puVar10 = *(undefined4 **)(param_2 + 0x20);
          uVar7 = DAT_0002b404;
          goto joined_r0x0002b1da;
        }
        if (((bVar1 & 0x10) != 0 || local_2c != 0) && (piVar11[10] != 4)) {
          puVar10 = *(undefined4 **)(param_2 + 0x20);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = DAT_0002b408;
            iVar6 = local_50;
            goto LAB_0002b210;
          }
          goto LAB_0002b39a;
        }
        iVar6 = 0;
      }
      else {
        puVar10 = *(undefined4 **)(param_2 + 0x20);
        uVar7 = DAT_0002b168;
joined_r0x0002b396:
        if (puVar10 != (undefined4 *)0x0) {
LAB_0002b118:
          *puVar10 = uVar7;
        }
LAB_0002b39a:
        iVar6 = -0x16;
      }
      uVar9 = *puVar3 + 3 & 0xfffffffc;
      local_7c = local_7c - uVar9;
    }
    piVar11 = piVar11 + 0xd;
    if (iVar6 != 0) goto LAB_0002af3e;
    local_84 = local_84 + 1;
    uVar9 = *puVar14 + 3 & 0xfffffffc;
    local_80 = local_80 - uVar9;
  }
  piVar5[3] = local_88;
  local_98 = piVar13[0x18] + 1;
  local_94 = piVar13[0x19] + (uint)(0xfffffffe < (uint)piVar13[0x18]);
  piVar13[0x18] = local_98;
  piVar13[0x19] = local_94;
  if (local_94 == 0 && local_98 == 0) {
    piVar13[0x18] = 1;
    piVar13[0x19] = 0;
    local_98 = 1;
    local_94 = 0;
  }
  *piVar5 = local_98;
  piVar5[1] = local_94;
  piVar5[4] = *(int *)(param_2 + 4);
  if (*(code **)(*piVar13 + 0x1a8) == (code *)0x0) {
    iVar6 = -0x5f;
  }
  else {
    iVar6 = (**(code **)(*piVar13 + 0x1a8))(piVar13 + 0x68,iVar8,piVar5);
    if (iVar6 == 0) {
      puVar10 = *(undefined4 **)(iVar8 + 0xf0);
      *(int **)(iVar8 + 0xf0) = piVar5 + 9;
      piVar5[9] = iVar8 + 0xec;
      piVar5[10] = (int)puVar10;
      *puVar10 = piVar5 + 9;
      iVar8 = *piVar5;
      iVar6 = piVar5[1];
      iVar12 = *(int *)(param_2 + 0x20);
      if (iVar12 != 0) {
        *(undefined1 *)(iVar12 + 0x20) = 8;
        *(int *)(iVar12 + 0xc) = iVar8;
        *(int *)(iVar12 + 0x10) = iVar6;
        return 0;
      }
      return 0;
    }
  }
LAB_0002af3e:
  kfree(piVar5);
  return iVar6;
}



/* ===== cfg80211_pmsr_free_wk @ 0002b410 size=32 ===== */

void cfg80211_pmsr_free_wk(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  
  mutex_lock(param_1 + -0xd0);
  cfg80211_pmsr_process_abort(param_1 + -0xf4);
  mutex_unlock(param_1 + -0xd0,extraout_r1,extraout_r2,param_4);
  return;
}



/* ===== cfg80211_pmsr_wdev_down @ 0002b430 size=76 ===== */

void cfg80211_pmsr_wdev_down(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uStack_10;
  
  *(int *)(((uint)&uStack_10 & 0xffffe000) + 4) =
       *(int *)(((uint)&uStack_10 & 0xffffe000) + 4) + 0x200;
  bVar1 = false;
  for (puVar2 = *(undefined4 **)(param_1 + 0xec); puVar2 != (undefined4 *)(param_1 + 0xec);
      puVar2 = (undefined4 *)*puVar2) {
    puVar2[-5] = 0;
    bVar1 = true;
  }
  uStack_10 = param_4;
  __local_bh_enable_ip(DAT_0002b47c,0x200);
  if (bVar1) {
    cfg80211_pmsr_process_abort(param_1);
  }
  return;
}



/* ===== cfg80211_release_pmsr @ 0002b480 size=94 ===== */

void cfg80211_release_pmsr(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_r2;
  undefined4 *puVar3;
  undefined4 uStack_20;
  
  iVar2 = *(int *)(((uint)&uStack_20 & 0xffffe000) + 4) + 0x200;
  *(int *)(((uint)&uStack_20 & 0xffffe000) + 4) = iVar2;
  puVar1 = DAT_0002b4e4;
  uStack_20 = param_4;
  for (puVar3 = *(undefined4 **)(param_1 + 0xec); puVar3 != (undefined4 *)(param_1 + 0xec);
      puVar3 = (undefined4 *)*puVar3) {
    if (puVar3[-5] == param_2) {
      puVar3[-5] = 0;
      queue_work_on(1,*puVar1,param_1 + 0xf4);
      iVar2 = extraout_r2;
    }
  }
  __local_bh_enable_ip(DAT_0002b4e0,0x200,iVar2,uStack_20);
  return;
}



/* ===== wiphy_read_of_freq_limits @ 0002b4e8 size=306 ===== */

void wiphy_read_of_freq_limits(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar12;
  undefined4 local_38;
  int local_34;
  uint local_2c [2];
  undefined4 *puVar11;
  
  iVar7 = *(int *)(param_1 + 0x114);
  if (iVar7 == 0) {
    return;
  }
  if (*(int *)(iVar7 + 0x164) == 0) {
    return;
  }
  iVar2 = of_find_property(*(int *)(iVar7 + 0x164),DAT_0002b61c,local_2c);
  if (iVar2 == 0) {
    return;
  }
  if ((local_2c[0] == 0) || ((int)(local_2c[0] << 0x1d) < 0 || (local_2c[0] & 3) != 0)) {
    _dev_err(iVar7,DAT_0002b620);
    return;
  }
  uVar9 = local_2c[0] >> 3;
  local_34 = (int)((ulonglong)uVar9 * 0xc >> 0x20);
  if (local_34 == 0) {
    local_38 = (undefined4)((ulonglong)uVar9 * 0xc);
    puVar3 = (uint *)__kmalloc(local_38,0xdc0);
    if (puVar3 != (uint *)0x0) {
      iVar6 = 0;
      puVar8 = puVar3;
      do {
        if (puVar8 == puVar3 + uVar9 * 3) {
          if (7 < local_2c[0]) {
            puVar10 = (undefined4 *)(param_1 + 0xd4);
            do {
              puVar11 = puVar10 + 1;
              piVar12 = (int *)*puVar10;
              if (piVar12 != (int *)0x0) {
                for (iVar2 = 0; iVar2 < piVar12[3]; iVar2 = iVar2 + 1) {
                  iVar6 = iVar2 * 0x38 + *piVar12;
                  uVar5 = 0;
                  if ((*(uint *)(iVar6 + 0xc) & 1) == 0) {
                    for (; uVar9 != uVar5; uVar5 = uVar5 + 1) {
                      iVar4 = cfg80211_does_bw_fit_range
                                        (puVar3 + uVar5 * 3,*(int *)(iVar6 + 4) * 1000,20000);
                      if (iVar4 != 0) goto LAB_0002b5c8;
                    }
                    *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) | 1;
                  }
LAB_0002b5c8:
                }
              }
              puVar10 = puVar11;
            } while (puVar11 != (undefined4 *)(param_1 + 0xe8));
          }
          iVar2 = 0;
          goto LAB_0002b604;
        }
        iVar6 = of_prop_next_u32(iVar2,iVar6,puVar8);
      } while ((((iVar6 != 0) && (iVar6 = of_prop_next_u32(iVar2,iVar6,puVar8 + 1), iVar6 != 0)) &&
               (uVar5 = *puVar8, uVar5 != 0)) &&
              ((puVar1 = puVar8 + 1, *puVar1 != 0 && (puVar8 = puVar8 + 3, uVar5 < *puVar1))));
      iVar2 = -0x16;
      goto LAB_0002b604;
    }
  }
  puVar3 = (uint *)0x0;
  iVar2 = -0xc;
LAB_0002b604:
  kfree(puVar3);
  if (iVar2 != 0) {
    _dev_err(iVar7,DAT_0002b624,iVar2);
  }
  return;
}



/* ===== cfg80211_pernet_exit @ 0002b628 size=42 ===== */

void cfg80211_pernet_exit(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  rtnl_lock();
  uVar2 = DAT_0002b658;
  puVar1 = DAT_0002b654;
  for (puVar3 = (undefined4 *)*DAT_0002b654; puVar1 != puVar3; puVar3 = (undefined4 *)*puVar3) {
    cfg80211_switch_netns(puVar3 + -1,uVar2);
  }
  rtnl_unlock();
  return;
}



/* ===== init_module @ 0002b65c size=112 ===== */

int init_module(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = register_pernet_device(DAT_0002b6cc);
  if (iVar2 == 0) {
    iVar2 = wiphy_sysfs_init();
    if (iVar2 == 0) {
      iVar2 = register_netdevice_notifier(DAT_0002b6d0);
      if (iVar2 == 0) {
        iVar2 = nl80211_init();
        if (iVar2 == 0) {
          uVar3 = debugfs_create_dir(DAT_0002b6d4,0);
          iVar1 = DAT_0002b6d8;
          *(undefined4 *)(DAT_0002b6d8 + 0x10) = uVar3;
          iVar2 = regulatory_init();
          if (iVar2 == 0) {
            iVar2 = alloc_workqueue(DAT_0002b6dc,0xa000a,1);
            *(int *)(iVar1 + 8) = iVar2;
            if (iVar2 != 0) {
              return 0;
            }
            regulatory_exit();
            iVar2 = -0xc;
          }
          debugfs_remove(*(undefined4 *)(iVar1 + 0x10));
          nl80211_exit();
        }
        unregister_netdevice_notifier(DAT_0002b6d0);
      }
      wiphy_sysfs_exit();
    }
    unregister_pernet_device(DAT_0002b6cc);
  }
  return iVar2;
}



/* ===== regulatory_init @ 0002b6e0 size=332 ===== */

uint regulatory_init(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_r2;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined1 auStack_5c [8];
  undefined4 local_54;
  
  puVar1 = DAT_0002b82c;
  memset(auStack_5c,0,0x34);
  local_60 = 0;
  local_54 = DAT_0002b830;
  uVar4 = platform_device_register_full(&local_60);
  puVar1[2] = uVar4;
  iVar6 = DAT_0002b834;
  if (uVar4 < 0xfffff001) {
    *puVar1 = *(undefined4 *)(DAT_0002b834 + 0xc4);
    *(undefined1 *)(puVar1 + 5) = 0x39;
    *(undefined1 *)((int)puVar1 + 0x15) = 0x37;
    local_68 = IS_ERR_OR_NULL(puVar1[2]);
    if (local_68 == 0) {
      local_70 = DAT_0002b838;
      local_6c = 2;
      iStack_64 = local_68;
      uVar4 = keyring_alloc(DAT_0002b83c,0,0,
                            *(undefined4 *)(*(int *)(((uint)&local_70 & 0xffffe000) + 0xc) + 0x2d8))
      ;
      puVar1[3] = uVar4;
      if (uVar4 < 0xfffff001) {
        printk(DAT_0002b840);
        uVar3 = DAT_0002b860;
        uVar2 = DAT_0002b85c;
        pcVar9 = DAT_0002b848 + *DAT_0002b844;
        for (pcVar7 = DAT_0002b848; pcVar7 < pcVar9; pcVar7 = pcVar7 + uVar8) {
          uVar4 = (int)pcVar9 - (int)pcVar7;
          if (((int)uVar4 < 4) ||
             (((*pcVar7 != '0' && (pcVar7[1] != -0x7e)) ||
              (uVar8 = ((*(ushort *)(pcVar7 + 2) & 0xff) << 8 | (uint)(*(ushort *)(pcVar7 + 2) >> 8)
                       ) + 4, uVar4 < uVar8)))) {
            printk(DAT_0002b854);
            break;
          }
          local_6c = DAT_0002b84c;
          local_68 = 0xe;
          local_70 = uVar8;
          uVar4 = key_create_or_update(puVar1[3] | 1,uVar2,0,pcVar7);
          if (uVar4 < 0xfffff001) {
            printk(uVar3,*(undefined4 *)((uVar4 & 0xfffffffe) + 0x68));
            key_put(uVar4 & 0xfffffffe);
          }
          else {
            printk(DAT_0002b850,uVar4);
          }
        }
      }
      else if (uVar4 != 0) {
        return uVar4;
      }
      iVar5 = regulatory_hint_core(*(int *)(iVar6 + 0xc4) + 0xc);
      if (iVar5 != 0) {
        if (iVar5 == -0xc) {
          platform_device_unregister(puVar1[2]);
          return 0xfffffff4;
        }
        printk(DAT_0002b858);
      }
      iVar6 = is_world_regdom(*(undefined4 *)(iVar6 + 0xd8));
      if (iVar6 == 0) {
        regulatory_hint_user(extraout_r2,0);
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0xffffffea;
    }
  }
  return uVar4;
}



/* ===== nl80211_init @ 0002b864 size=32 ===== */

int nl80211_init(void)

{
  int iVar1;
  
  iVar1 = genl_register_family(DAT_0002b884);
  if ((iVar1 == 0) && (iVar1 = netlink_register_notifier(DAT_0002b888), iVar1 != 0)) {
    genl_unregister_family(DAT_0002b884);
  }
  return iVar1;
}



/* ===== cleanup_module @ 0002b88c size=50 ===== */

void cleanup_module(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  iVar2 = DAT_0002b8c4;
  iVar1 = DAT_0002b8c0;
  debugfs_remove(*(undefined4 *)(DAT_0002b8c0 + 0x10));
  nl80211_exit();
  unregister_netdevice_notifier(iVar2 + 0x28);
  wiphy_sysfs_exit();
  regulatory_exit();
  unregister_pernet_device(iVar2 + 8);
  destroy_workqueue(*(undefined4 *)(iVar1 + 8),extraout_r1,extraout_r2,in_r3);
  return;
}



/* ===== <EXTERNAL>::__sock_create @ 00032000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __sock_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rtnl_unlock @ 00032004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rtnl_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::release_firmware @ 00032008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void release_firmware(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alloc_workqueue @ 0003200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void alloc_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::verify_pkcs7_signature @ 00032010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void verify_pkcs7_signature(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_copy_bits @ 00032014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_copy_bits(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rfkill_unregister @ 00032018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rfkill_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_put @ 0003201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__msecs_to_jiffies @ 00032020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __msecs_to_jiffies(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__sw_hweight16 @ 00032024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __sw_hweight16(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rtnl_is_locked @ 00032028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rtnl_is_locked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_set_name @ 0003202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_set_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__nla_validate @ 00032030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __nla_validate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00032034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nla_reserve @ 00032038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void nla_reserve(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_work_on @ 0003203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nla_put_64bit @ 00032048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void nla_put_64bit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::finish_wait @ 0003204c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void finish_wait(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__sw_hweight32 @ 00032050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __sw_hweight32(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::request_firmware @ 00032054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void request_firmware(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::scnprintf @ 00032058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void scnprintf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rfkill_blocked @ 0003205c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rfkill_blocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::device_initialize @ 00032060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void device_initialize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_add_rx_frag @ 00032064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_add_rx_frag(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::genlmsg_put @ 00032068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void genlmsg_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003206c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rfkill_destroy @ 00032070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rfkill_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 00032074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prepare_to_wait_event @ 00032078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void prepare_to_wait_event(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::genlmsg_multicast_allns @ 0003207c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void genlmsg_multicast_allns(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__wake_up @ 00032080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rb_insert_color @ 00032084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rb_insert_color(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::keyring_alloc @ 00032088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void keyring_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netdev_err @ 0003208c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netdev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::device_rename @ 00032090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void device_rename(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::eth_type_trans @ 00032094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void eth_type_trans(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wireless_nlevent_flush @ 00032098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wireless_nlevent_flush(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree_skb @ 0003209c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::___ratelimit @ 000320a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ___ratelimit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule @ 000320a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000320a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_delayed_work_on @ 000320ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_delayed_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::put_device @ 000320b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void put_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::key_create_or_update @ 000320b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void key_create_or_update(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netlink_broadcast @ 000320b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netlink_broadcast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__alloc_skb @ 000320c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __alloc_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 000320c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysfs_create_link @ 000320c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sysfs_create_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rfkill_resume_polling @ 000320cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rfkill_resume_polling(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__do_div64 @ 000320d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __do_div64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_csk_get_port @ 000320d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void inet_csk_get_port(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::key_put @ 000320d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void key_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kobject_uevent_env @ 000320dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kobject_uevent_env(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_wait_entry @ 000320e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_wait_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 000320e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__dev_get_by_index @ 000320e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __dev_get_by_index(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 000320ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__class_register @ 000320f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __class_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::request_firmware_nowait @ 000320f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void request_firmware_nowait(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_pull @ 000320fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_pull(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::synchronize_rcu @ 00032100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void synchronize_rcu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::device_add @ 00032104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void device_add(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysfs_remove_link @ 00032108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sysfs_remove_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rfkill_pause_polling @ 0003210c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rfkill_pause_polling(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__sw_hweight8 @ 00032110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __sw_hweight8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_device_unregister @ 00032118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_device_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netlink_unicast @ 0003211c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netlink_unicast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_get_by_index @ 00032120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_get_by_index(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_close @ 00032124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::destroy_workqueue @ 00032128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void destroy_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crc32_le @ 0003212c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crc32_le(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 00032130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_push @ 00032134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_push(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlcpy @ 00032138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strlcpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::debugfs_remove @ 0003213c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void debugfs_remove(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nla_put @ 00032140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void nla_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rb_erase @ 00032144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rb_erase(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 00032148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree_sensitive @ 0003214c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree_sensitive(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rfkill_set_hw_state @ 00032150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rfkill_set_hw_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nla_find @ 00032154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void nla_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mod_delayed_work_on @ 00032158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mod_delayed_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_find_property @ 0003215c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_find_property(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::class_unregister @ 00032160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void class_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unregister_pernet_device @ 00032164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void unregister_pernet_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 00032168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__local_bh_enable_ip @ 0003216c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __local_bh_enable_ip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00032170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 00032174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 00032178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rfkill_alloc @ 0003217c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rfkill_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::jiffies_to_msecs @ 00032180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void jiffies_to_msecs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::device_del @ 00032188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void device_del(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_delayed_work @ 0003218c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_delayed_work(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00032194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0003219c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nla_memcpy @ 000321a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void nla_memcpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 000321a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pskb_pull_tail @ 000321a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pskb_pull_tail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__netdev_alloc_skb @ 000321ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __netdev_alloc_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000321b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_trim @ 000321b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_trim(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unregister_netdevice_notifier @ 000321b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void unregister_netdevice_notifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_prop_next_u32 @ 000321c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_prop_next_u32(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000321c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_net_ns_by_pid @ 000321c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void get_net_ns_by_pid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::debugfs_rename @ 000321cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void debugfs_rename(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::call_rcu @ 000321d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void call_rcu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_device_register_full @ 000321d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_device_register_full(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rfkill_register @ 000321d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rfkill_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 000321dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_delayed_work_sync @ 000321e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_delayed_work_sync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_timer_key @ 000321e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_timer_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netlink_unregister_notifier @ 000321ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netlink_unregister_notifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmemdup @ 000321f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmemdup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_work_sync @ 000321f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_work_sync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::register_netdevice_notifier @ 000321fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void register_netdevice_notifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 00032204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sock_release @ 00032208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sock_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_change_net_namespace @ 0003220c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_change_net_namespace(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rtnl_lock @ 00032210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rtnl_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netlink_register_notifier @ 00032214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netlink_register_notifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::genl_unregister_family @ 00032218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void genl_unregister_family(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gcd @ 0003221c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void gcd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00032220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__nla_parse @ 00032228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __nla_parse(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::debugfs_create_dir @ 00032234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void debugfs_create_dir(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::genl_register_family @ 00032238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void genl_register_family(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::register_pernet_device @ 00032240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void register_pernet_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_net_ns_by_fd @ 00032244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void get_net_ns_by_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 00032248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 0003224c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::flush_work @ 00032258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void flush_work(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


