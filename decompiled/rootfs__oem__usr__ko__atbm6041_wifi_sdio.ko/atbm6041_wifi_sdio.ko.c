// atbm6041_wifi_sdio.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== atbm_release_firmware @ 00010d00 size=44 ===== */

void atbm_release_firmware(void)

{
  int iVar1;
  
  if (*DAT_00010d2c << 0x1c < 0) {
    printk(DAT_00010d30);
  }
  iVar1 = DAT_00010d34;
  if (*(int *)(DAT_00010d34 + 0x24) != 0) {
    vfree();
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    vfree();
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  return;
}



/* ===== atbm_init_firmware @ 00010d38 size=30 ===== */

undefined4 atbm_init_firmware(void)

{
  if (*DAT_00010d58 << 0x1d < 0) {
    printk(DAT_00010d5c);
  }
  memset(DAT_00010d60,0,0x28);
  return 0;
}



/* ===== atbm_set_firmare @ 00010d64 size=218 ===== */

undefined4 atbm_set_firmare(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar2 = DAT_00010e48;
  if ((param_1 == (undefined4 *)0x0) || ((param_1[9] == 0 && (param_1[8] == 0)))) {
    iVar4 = *DAT_00010e40;
    uVar3 = DAT_00010e44;
joined_r0x00010d78:
    if (iVar4 << 0x1f < 0) {
      printk(uVar3);
    }
    return 0xffffffff;
  }
  if ((DAT_00010e48[9] != 0) || (DAT_00010e48[8] != 0)) {
    iVar4 = *DAT_00010e40;
    uVar3 = DAT_00010e4c;
    goto joined_r0x00010d78;
  }
  puVar5 = param_1;
  puVar7 = DAT_00010e48;
  do {
    puVar6 = puVar5 + 2;
    uVar3 = puVar5[1];
    *puVar7 = *puVar5;
    puVar7[1] = uVar3;
    puVar7 = puVar7 + 2;
    puVar5 = puVar6;
  } while (puVar6 != param_1 + 8);
  if (puVar2[2] != 0) {
    uVar3 = vmalloc();
    piVar1 = DAT_00010e40;
    iVar4 = *DAT_00010e40;
    puVar2[8] = uVar3;
    if (iVar4 << 0x1f < 0) {
      printk(DAT_00010e54,DAT_00010e50,uVar3);
    }
    if ((void *)puVar2[8] == (void *)0x0) {
      iVar4 = *piVar1;
      uVar3 = DAT_00010e58;
      goto joined_r0x00010e2c;
    }
    memcpy((void *)puVar2[8],(void *)param_1[8],puVar2[2]);
  }
  if (puVar2[3] == 0) {
    return 0;
  }
  uVar3 = vmalloc();
  piVar1 = DAT_00010e40;
  iVar4 = *DAT_00010e40;
  puVar2[9] = uVar3;
  if (iVar4 << 0x1f < 0) {
    printk(DAT_00010e5c,DAT_00010e50,uVar3);
  }
  if ((void *)puVar2[9] != (void *)0x0) {
    memcpy((void *)puVar2[9],(void *)param_1[9],puVar2[3]);
    return 0;
  }
  iVar4 = *piVar1;
  uVar3 = DAT_00010e60;
joined_r0x00010e2c:
  if (iVar4 << 0x1f < 0) {
    printk(uVar3);
  }
  if (puVar2[8] != 0) {
    vfree();
    puVar2[8] = 0;
  }
  if (puVar2[9] == 0) {
    return 0xffffffff;
  }
  vfree();
  puVar2[9] = 0;
  return 0xffffffff;
}



/* ===== atbm_get_fw @ 00010e64 size=70 ===== */

undefined4 atbm_get_fw(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar1 = DAT_00010eac;
  if ((DAT_00010eac[9] == 0) && (DAT_00010eac[8] == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar8 = DAT_00010eac + 8;
    puVar4 = param_1;
    puVar7 = DAT_00010eac;
    do {
      puVar5 = puVar4 + 2;
      uVar2 = *puVar7;
      uVar3 = puVar7[1];
      puVar7 = puVar7 + 2;
      *puVar4 = uVar2;
      puVar4[1] = uVar3;
      uVar3 = DAT_00010eb4;
      uVar2 = DAT_00010eb0;
      puVar4 = puVar5;
    } while (puVar7 != puVar8);
    param_1[8] = puVar1[8];
    uVar6 = puVar1[9];
    param_1[9] = uVar6;
    printk(uVar3,uVar2,puVar5,uVar6,param_4);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== atbm_get_hw_type @ 00010eb8 size=4 ===== */

undefined4 atbm_get_hw_type(void)

{
  return 1;
}



/* ===== atbm_HwGetChipFw @ 00010ebc size=70 ===== */

int atbm_HwGetChipFw(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint local_c;
  
  piVar1 = DAT_00010f04;
  local_c = 0;
  if (*DAT_00010f04 == 0) {
    atbm_direct_read_reg_32(param_1,DAT_00010f10,&local_c,0,param_1);
    local_c = local_c & 0x3f;
    iVar2 = DAT_00010f1c;
    if (local_c < 0x26) {
      iVar2 = *(int *)(DAT_00010f18 + local_c * 4 + 0x30);
    }
    printk(DAT_00010f14,DAT_00010f08,local_c,iVar2);
  }
  else {
    printk(DAT_00010f0c,DAT_00010f08);
    iVar2 = *piVar1;
  }
  return iVar2;
}



/* ===== atbm_load_firmware @ 00010f20 size=30 ===== */

uint atbm_load_firmware(undefined4 param_1)

{
  uint uVar1;
  
  if (*DAT_00010f40 << 0x1d < 0) {
    printk(DAT_00010f44);
  }
  uVar1 = atbm_after_load_firmware(param_1);
  return uVar1 & (int)uVar1 >> 0x1f;
}



/* ===== wsm_buf_reset @ 00010f48 size=20 ===== */

void wsm_buf_reset(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    param_1[1] = puVar1 + 2;
    *puVar1 = 0;
    return;
  }
  param_1[1] = 0;
  return;
}



/* ===== wsm_buf_reserve @ 00010f5c size=62 ===== */

undefined4 wsm_buf_reserve(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1[1] - *param_1;
  uVar3 = iVar4 + param_2;
  if ((uVar3 & 0xff) != 0) {
    uVar3 = (uVar3 & 0x100) + 0x100;
  }
  iVar1 = krealloc(*param_1,uVar3,0xcc1);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = 0xfffffff4;
  }
  else {
    param_1[2] = iVar1 + uVar3;
    uVar2 = 0;
    param_1[1] = iVar4 + iVar1;
  }
  return uVar2;
}



/* ===== wsm_cmd_hif_ximt @ 00010f9a size=14 ===== */

void wsm_cmd_hif_ximt(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x40) + 0x58);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    atbm_bh_wakeup();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0x44));
  return;
}



/* ===== wsm_cmd_send @ 00010fa8 size=620 ===== */

undefined4
wsm_cmd_send(int param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5,int param_6
            )

{
  code *pcVar1;
  short sVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [24];
  
  iVar6 = param_2[1] - *param_2;
  if (0x3f < param_4) {
    wsm_buf_reset(param_2);
    return 0xffffffff;
  }
  if (param_4 == 6) {
    if (((*DAT_00011218 & 2) != 0) && ((int)(*DAT_0001121c << 0x1d) < 0)) {
      printk(DAT_00011220,6,*(undefined2 *)(*param_2 + 8),iVar6);
    }
  }
  else if (((*DAT_00011218 & 2) != 0) && ((int)(*DAT_0001121c << 0x1d) < 0)) {
    printk(DAT_00011224,param_4,iVar6);
  }
  iVar5 = *param_2;
  if (param_6 == -1) {
    param_6 = 0;
  }
  *(short *)(iVar5 + 4) = (short)iVar6;
  *(ushort *)(iVar5 + 6) = (ushort)param_4 | (ushort)(param_6 << 6);
  *(int *)(((uint)auStack_40 & 0xffffe000) + 4) =
       *(int *)(((uint)auStack_40 & 0xffffe000) + 4) + 0x200;
  if (*(int *)(param_1 + 300) == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    uVar7 = DAT_00011228;
    iVar5 = *param_2;
    *(undefined4 *)(param_1 + 0x134) = param_3;
    iVar8 = param_1 + 100;
    *(int *)(param_1 + 300) = iVar5;
    *(int *)(param_1 + 0x130) = iVar6;
    *(ushort *)(param_1 + 0x13c) = (ushort)param_4;
    __local_bh_enable_ip(uVar7,0x200);
    (**(code **)(*(int *)(param_1 + 0x40) + 0x30))(*(undefined4 *)(param_1 + 0x44),0);
    wsm_cmd_hif_ximt(param_1);
    piVar4 = DAT_0001122c;
    iVar6 = *DAT_0001122c;
    do {
      atbm_pm_stay_awake_lock(iVar8);
      _cond_resched();
      if (*(int *)(param_1 + 0x124) == 0) {
        init_wait_entry(auStack_3c);
        iVar5 = 0xbb9;
        while (prepare_to_wait_event(param_1 + 0xbb4,auStack_3c,2), *(int *)(param_1 + 0x124) == 0)
        {
          if (iVar5 == 0) goto LAB_000110b4;
          iVar5 = schedule_timeout(iVar5);
        }
        if (iVar5 == 0) {
          iVar5 = 1;
        }
LAB_000110b4:
        finish_wait(param_1 + 0xbb4,auStack_3c);
      }
      else {
        iVar5 = 0xbb9;
      }
      atbm_pm_stay_awake_unlock(iVar8);
      puVar3 = DAT_0001121c;
      if (iVar5 != 0) {
        *(int *)(((uint)auStack_40 & 0xffffe000) + 4) =
             *(int *)(((uint)auStack_40 & 0xffffe000) + 4) + 0x200;
        if (*(int *)(param_1 + 0x124) == 0) break;
        uVar7 = *(undefined4 *)(param_1 + 0x138);
        __local_bh_enable_ip(DAT_00011230,0x200);
        goto LAB_00011110;
      }
      if (11999 < *piVar4 - iVar6) goto LAB_0001113e;
      wsm_cmd_hif_ximt(param_1);
    } while( true );
  }
  goto LAB_0001102c;
LAB_0001113e:
  if ((*DAT_0001121c & 1) != 0) {
    printk(DAT_00011234,*(undefined2 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x128));
  }
  *(int *)(((uint)auStack_40 & 0xffffe000) + 4) =
       *(int *)(((uint)auStack_40 & 0xffffe000) + 4) + 0x200;
  sVar2 = *(short *)(param_1 + 0x13c);
  if (*(int *)(param_1 + 300) == 0) {
LAB_00011182:
    if ((int)(*puVar3 << 0x1f) < 0) {
      printk(DAT_0001123c,*(undefined4 *)(param_1 + 0xc0));
    }
  }
  else if ((int)(*puVar3 << 0x1f) < 0) {
    printk(DAT_00011238);
    goto LAB_00011182;
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  __local_bh_enable_ip(DAT_00011240,0x200);
  if (sVar2 == -1) {
    atbm_pm_stay_awake_lock(iVar8);
    _cond_resched();
    if (*(int *)(param_1 + 0x124) == 0) {
      init_wait_entry(auStack_3c);
      iVar6 = 3000;
      while (prepare_to_wait_event(param_1 + 0xbb4,auStack_3c,2), *(int *)(param_1 + 0x124) == 0) {
        if (iVar6 == 0) goto LAB_000111e8;
        iVar6 = schedule_timeout(iVar6);
      }
      if (iVar6 == 0) {
        iVar6 = 1;
      }
LAB_000111e8:
      finish_wait(param_1 + 0xbb4,auStack_3c);
    }
    else {
      iVar6 = 3000;
    }
    atbm_pm_stay_awake_unlock(iVar8);
    if (iVar6 < 1) {
LAB_0001102c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(2,0x1102c);
      (*pcVar1)();
    }
  }
  if ((int)(*puVar3 << 0x1f) < 0) {
    printk(DAT_00011244,param_4,0xbb9);
  }
  uVar7 = 0xffffff92;
LAB_00011110:
  wsm_buf_reset(param_2);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x30))(*(undefined4 *)(param_1 + 0x44),1);
  return uVar7;
}



/* ===== wsm_startup_indication @ 00011248 size=540 ===== */

void wsm_startup_indication(int param_1,int param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  uint uVar10;
  void *__src;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auStack_ad [128];
  undefined1 local_2d;
  int local_2c;
  
  piVar4 = DAT_00011464;
  local_2c = *DAT_00011464;
  puVar9 = *(undefined2 **)(param_2 + 4) + 1;
  if (puVar9 <= *(undefined2 **)(param_2 + 8)) {
    uVar1 = **(undefined2 **)(param_2 + 4);
    *(undefined2 **)(param_2 + 4) = puVar9;
    *(undefined2 *)(param_1 + 0xe8) = uVar1;
    puVar9 = *(undefined2 **)(param_2 + 4) + 1;
    if (puVar9 <= *(undefined2 **)(param_2 + 8)) {
      uVar1 = **(undefined2 **)(param_2 + 4);
      *(undefined2 **)(param_2 + 4) = puVar9;
      *(undefined2 *)(param_1 + 0xea) = uVar1;
      puVar9 = *(undefined2 **)(param_2 + 4) + 1;
      if (puVar9 <= *(undefined2 **)(param_2 + 8)) {
        uVar1 = **(undefined2 **)(param_2 + 4);
        *(undefined2 **)(param_2 + 4) = puVar9;
        *(undefined2 *)(param_1 + 0xec) = uVar1;
        puVar9 = *(undefined2 **)(param_2 + 4) + 1;
        if (puVar9 <= *(undefined2 **)(param_2 + 8)) {
          uVar1 = **(undefined2 **)(param_2 + 4);
          *(undefined2 **)(param_2 + 4) = puVar9;
          *(undefined2 *)(param_1 + 0xee) = uVar1;
          psVar7 = *(short **)(param_2 + 4);
          if (psVar7 + 1 <= *(short **)(param_2 + 8)) {
            sVar3 = *psVar7;
            *(short **)(param_2 + 4) = psVar7 + 1;
            if (psVar7 + 2 <= *(short **)(param_2 + 8)) {
              uVar2 = psVar7[1];
              *(short **)(param_2 + 4) = psVar7 + 2;
              puVar5 = DAT_00011468;
              *(uint *)(param_1 + 0xf0) = (uint)uVar2;
              if ((*puVar5 & 4) != 0) {
                printk(DAT_0001146c);
              }
              puVar9 = *(undefined2 **)(param_2 + 4) + 1;
              if (puVar9 <= *(undefined2 **)(param_2 + 8)) {
                uVar1 = **(undefined2 **)(param_2 + 4);
                *(undefined2 **)(param_2 + 4) = puVar9;
                *(undefined2 *)(param_1 + 0xf4) = uVar1;
                puVar9 = *(undefined2 **)(param_2 + 4) + 1;
                if (puVar9 <= *(undefined2 **)(param_2 + 8)) {
                  uVar1 = **(undefined2 **)(param_2 + 4);
                  *(undefined2 **)(param_2 + 4) = puVar9;
                  *(undefined2 *)(param_1 + 0xf6) = uVar1;
                  puVar9 = *(undefined2 **)(param_2 + 4) + 1;
                  if (puVar9 <= *(undefined2 **)(param_2 + 8)) {
                    uVar1 = **(undefined2 **)(param_2 + 4);
                    *(undefined2 **)(param_2 + 4) = puVar9;
                    *(undefined2 *)(param_1 + 0xf8) = uVar1;
                    puVar9 = *(undefined2 **)(param_2 + 4) + 1;
                    if (puVar9 <= *(undefined2 **)(param_2 + 8)) {
                      uVar1 = **(undefined2 **)(param_2 + 4);
                      *(undefined2 **)(param_2 + 4) = puVar9;
                      *(undefined2 *)(param_1 + 0xfa) = uVar1;
                      __src = *(void **)(param_2 + 4);
                      uVar11 = *(uint *)(param_2 + 8);
                      if ((int)__src + 0x80U <= uVar11) {
                        memcpy(auStack_ad,__src,0x80);
                        *(uint *)(param_2 + 4) = (int)__src + 0x80U;
                        local_2d = 0;
                        if ((int)__src + 0x84U <= uVar11) {
                          uVar6 = *(undefined4 *)((int)__src + 0x80);
                          *(uint *)(param_2 + 4) = (int)__src + 0x84U;
                          if ((int)__src + 0x88U <= uVar11) {
                            uVar12 = *(undefined4 *)((int)__src + 0x84);
                            *(uint *)(param_2 + 4) = (int)__src + 0x88U;
                            if ((int)__src + 0x8cU <= uVar11) {
                              uVar10 = *(uint *)((int)__src + 0x88);
                              *(uint *)(param_2 + 4) = (int)__src + 0x8cU;
                              if ((int)__src + 0x90U <= uVar11) {
                                uVar8 = *(undefined4 *)((int)__src + 0x8c);
                                *(uint *)(param_2 + 4) = (int)__src + 0x90U;
                                if ((int)__src + 0x92U <= uVar11) {
                                  uVar2 = *(ushort *)((int)__src + 0x90);
                                  *(uint *)(param_2 + 4) = (int)__src + 0x92U;
                                  if ((int)(*puVar5 << 0x1d) < 0) {
                                    printk(DAT_00011470,uVar2);
                                  }
                                  uVar11 = *(uint *)(param_1 + 0xf0);
                                  *(undefined4 *)(param_1 + 0x108) = uVar8;
                                  uVar8 = DAT_00011474;
                                  *(uint *)(param_1 + 0xf0) = uVar11 | (uint)uVar2 << 0x10;
                                  if (-1 < (int)(uVar11 << 0x1d)) {
                                    uVar10 = (uint)*(ushort *)(param_1 + 0xe8);
                                  }
                                  *(uint *)(param_1 + 0xd0) = uVar10;
                                  *(uint *)(param_1 + 0xc4) = uVar10;
                                  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xc4);
                                  printk(uVar8);
                                  if ((sVar3 == 0) && (*(ushort *)(param_1 + 0xf4) < 5)) {
                                    printk(DAT_00011478,*(undefined2 *)(param_1 + 0xe8),
                                           *(undefined2 *)(param_1 + 0xea),
                                           *(undefined2 *)(param_1 + 0xec),
                                           *(undefined2 *)(param_1 + 0xee),
                                           *(undefined4 *)
                                            (DAT_0001147c + (uint)*(ushort *)(param_1 + 0xf4) * 4),
                                           auStack_ad,*(undefined2 *)(param_1 + 0xfa),
                                           *(undefined2 *)(param_1 + 0xf8),
                                           *(undefined2 *)(param_1 + 0xf6),
                                           *(undefined4 *)(param_1 + 0xf0),uVar6,uVar12,
                                           *(undefined4 *)(param_1 + 0xd0));
                                    *(undefined4 *)(param_1 + 0x100) = 1;
                                    *(undefined4 *)(param_1 + 0x104) = uVar12;
                                    if (0x34ec < *(ushort *)(param_1 + 0xfa)) {
                                      uVar6 = 0;
                                      goto LAB_00011268;
                                    }
                                    printk(DAT_00011480);
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
              }
            }
          }
        }
      }
    }
  }
  uVar6 = 0xffffffea;
LAB_00011268:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}



/* ===== ABwifi_hwpriv_to_vifpriv @ 00011484 size=30 ===== */

undefined4 ABwifi_hwpriv_to_vifpriv(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    if (*DAT_000114a4 << 0x1f < 0) {
      printk(DAT_000114a8);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== atbm_wifi_run_status_set @ 000114ac size=6 ===== */

void atbm_wifi_run_status_set(undefined4 param_1)

{
  *DAT_000114b4 = param_1;
  return;
}



/* ===== atbm_wifi_run_status_get @ 000114b8 size=6 ===== */

undefined4 atbm_wifi_run_status_get(void)

{
  return *DAT_000114c0;
}



/* ===== wsm_cmd_lock @ 000114c4 size=8 ===== */

void wsm_cmd_lock(int param_1)

{
  mutex_lock(param_1 + 0x10c);
  return;
}



/* ===== wsm_cmd_unlock @ 000114cc size=8 ===== */

void wsm_cmd_unlock(int param_1)

{
  mutex_unlock(param_1 + 0x10c);
  return;
}



/* ===== wsm_oper_unlock @ 000114d4 size=8 ===== */

void wsm_oper_unlock(int param_1)

{
  up(param_1 + 0xbe0);
  return;
}



/* ===== wsm_reset @ 000114dc size=138 ===== */

undefined4 wsm_reset(int param_1,uint *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  iVar5 = param_1 + 0x10c;
  uVar4 = *param_2;
  iVar6 = param_1 + 0x118;
  iVar2 = param_1;
  puVar7 = param_2;
  uVar1 = param_3;
  mutex_lock(iVar5);
  if (iVar6 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + 4;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar6,4,*(uint *)(param_1 + 0x120),uVar3,iVar2,puVar7,uVar1),
       iVar2 == 0)) {
      **(uint **)(param_1 + 0x11c) = (byte)param_2[1] ^ 1;
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 4;
      uVar1 = wsm_cmd_send(param_1,iVar6,0,(uVar4 & 0xf) << 6 | 10,0x1068,param_3);
      mutex_unlock(iVar5);
      return uVar1;
    }
  }
  mutex_unlock(iVar5);
  return 0xfffffff4;
}



/* ===== wsm_cmd_send_no_ack @ 00011566 size=194 ===== */

undefined4 wsm_cmd_send_no_ack(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  void *__dest;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  size_t __n;
  
  __n = param_2[1] - *param_2;
  if (param_4 == 6) {
    if (((*DAT_00011628 & 2) != 0) && (*DAT_0001162c << 0x1d < 0)) {
      printk(DAT_00011630,6,*(undefined2 *)(*param_2 + 8),__n);
    }
  }
  else if (((*DAT_00011628 & 2) != 0) && (*DAT_0001162c << 0x1d < 0)) {
    printk(DAT_00011634,param_4,__n);
  }
  iVar3 = *param_2;
  if (param_5 == -1) {
    param_5 = 0;
  }
  *(short *)(iVar3 + 4) = (short)__n;
  *(ushort *)(iVar3 + 6) = (ushort)param_4 | (ushort)(param_5 << 6);
  iVar3 = __netdev_alloc_skb(0,*(int *)(param_1 + 0xbf4) + __n,0xa20);
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xbf4);
    *(int *)(iVar3 + 0xa4) = *(int *)(iVar3 + 0xa4) + iVar2;
    *(int *)(iVar3 + 0x98) = *(int *)(iVar3 + 0x98) + iVar2;
    __dest = (void *)skb_put(iVar3,__n);
    memcpy(__dest,(void *)*param_2,__n);
    skb_queue_tail(param_1 + 0x18,iVar3);
    wsm_buf_reset(param_2);
    atbm_bh_wakeup(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== wsm_lock_tx @ 00011638 size=76 ===== */

void wsm_lock_tx(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  mutex_lock(param_1 + 0x10c);
  piVar3 = (int *)(param_1 + 0xbbc);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + 1;
  if (((iVar2 + 1 == 1) && (*DAT_00011684 << 0x1e < 0)) && (*DAT_00011688 << 0x1d < 0)) {
    printk(DAT_0001168c);
  }
  mutex_unlock(param_1 + 0x10c);
  return;
}



/* ===== wsm_lock_tx_async @ 00011690 size=54 ===== */

void wsm_lock_tx_async(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xbbc);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + 1;
  if (((iVar2 + 1 == 1) && (*DAT_000116c8 << 0x1e < 0)) && (*DAT_000116cc << 0x1d < 0)) {
    printk(DAT_000116d0);
    return;
  }
  return;
}



/* ===== wsm_unlock_tx_async @ 000116d4 size=28 ===== */

void wsm_unlock_tx_async(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xbbc);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  return;
}



/* ===== wsm_flush_tx @ 000116f0 size=4 ===== */

undefined4 wsm_flush_tx(void)

{
  return 1;
}



/* ===== wsm_vif_flush_tx @ 000116f4 size=4 ===== */

undefined4 wsm_vif_flush_tx(void)

{
  return 1;
}



/* ===== wsm_unlock_tx @ 000116f8 size=92 ===== */

void wsm_unlock_tx(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    piVar4 = (int *)(param_1 + 0xbbc);
    HintPreloadData(piVar4);
    do {
      ExclusiveAccess(piVar4);
      iVar5 = *piVar4 + -1;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(2,0x11738);
      (*pcVar1)();
    }
    if (iVar5 != 0) {
      return;
    }
    atbm_bh_wakeup();
    if (-1 < *DAT_00011758 << 0x1e) {
      return;
    }
    iVar5 = *DAT_0001175c;
    uVar3 = DAT_00011764;
  }
  else {
    if (-1 < *DAT_00011758 << 0x1e) {
      return;
    }
    iVar5 = *DAT_0001175c;
    uVar3 = DAT_00011760;
  }
  if (-1 < iVar5 << 0x1d) {
    return;
  }
  printk(uVar3);
  return;
}



/* ===== wsm_handle_exception @ 00011768 size=252 ===== */

void wsm_handle_exception(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_84 [12];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c [8];
  int local_1c;
  
  puVar2 = DAT_00011868;
  piVar1 = DAT_00011864;
  puVar5 = (undefined4 *)(param_3 + param_2);
  local_1c = *DAT_00011864;
  if ((undefined4 *)(param_2 + 4U) <= puVar5) {
    puVar8 = local_84;
    puVar10 = (undefined4 *)(param_2 + 4U);
    puVar9 = puVar8;
    do {
      puVar3 = puVar10;
      puVar10 = puVar3 + 1;
      if (puVar5 < puVar10) goto LAB_00011844;
      *puVar9 = *puVar3;
      puVar9 = puVar9 + 1;
    } while (puVar10 != (undefined4 *)(param_2 + 0x4c));
    uVar6 = *DAT_00011868;
    if (puVar3 + 9 <= puVar5) {
      puVar5 = (undefined4 *)(param_2 + 0x4c);
      puVar10 = local_3c;
      do {
        puVar9 = puVar5 + 2;
        uVar4 = puVar5[1];
        *puVar10 = *puVar5;
        puVar10[1] = uVar4;
        puVar10 = puVar10 + 2;
        puVar5 = puVar9;
      } while (puVar9 != (undefined4 *)(param_2 + 0x6c));
      if ((uVar6 & 1) != 0) {
        printk(DAT_0001186c,0x20,local_3c,local_84[1]);
      }
      uVar4 = DAT_00011880;
      iVar7 = 0;
      do {
        if ((int)(*puVar2 << 0x1f) < 0) {
          printk(uVar4,iVar7,*puVar8,iVar7 + 1,puVar8[1],iVar7 + 2,puVar8[2],iVar7 + 3,puVar8[3]);
        }
        iVar7 = iVar7 + 4;
        puVar8 = puVar8 + 4;
      } while (iVar7 != 0xc);
      if ((int)(*puVar2 << 0x1f) < 0) {
        printk(DAT_00011870,local_54,local_50,uStack_4c,local_48);
        if ((int)(*puVar2 << 0x1f) < 0) {
          printk(DAT_00011874,local_44,uStack_40,*puVar2,local_48);
        }
      }
      uVar4 = 0;
      *DAT_00011878 = 1;
      goto LAB_00011834;
    }
  }
LAB_00011844:
  if ((int)(*DAT_00011868 << 0x1f) < 0) {
    printk(DAT_0001187c);
  }
  uVar4 = 0xffffffea;
  *DAT_00011878 = 1;
LAB_00011834:
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* ===== wsm_generic_get_confirm @ 00011884 size=42 ===== */

undefined4 wsm_generic_get_confirm(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(uint *)(param_3 + 8) < (uint)((int)*(void **)(param_3 + 4) + param_2[1])) {
    uVar1 = 0xffffffea;
  }
  else {
    memcpy((void *)*param_2,*(void **)(param_3 + 4),param_2[1]);
    uVar1 = 0;
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + param_2[1];
  }
  return uVar1;
}



/* ===== wsm_confirm_for_sdio_alive @ 000118ae size=56 ===== */

undefined4 wsm_confirm_for_sdio_alive(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_2 + 4);
  if (piVar2 + 1 <= *(int **)(param_2 + 8)) {
    iVar3 = *piVar2;
    *(int **)(param_2 + 4) = piVar2 + 1;
    if (piVar2 + 2 <= *(int **)(param_2 + 8)) {
      iVar1 = piVar2[1];
      *(int **)(param_2 + 4) = piVar2 + 2;
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      if (iVar1 == 0x849) {
        return 0;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffea;
}



/* ===== wsm_txed @ 000118e6 size=60 ===== */

bool wsm_txed(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uStack_8;
  
  bVar1 = *(int *)(param_1 + 300) == param_2;
  if (bVar1) {
    *(int *)(((uint)&uStack_8 & 0xffffe000) + 4) =
         *(int *)(((uint)&uStack_8 & 0xffffe000) + 4) + 0x200;
    *(uint *)(param_1 + 0x128) = (uint)*(ushort *)(param_1 + 0x13c);
    *(undefined4 *)(param_1 + 300) = 0;
    uStack_8 = param_4;
    __local_bh_enable_ip(DAT_00011924,0x200);
  }
  return bVar1;
}



/* ===== wsm_buf_init @ 00011928 size=40 ===== */

void wsm_buf_init(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x11930);
    (*pcVar1)();
  }
  iVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_00011954 + 0x2c),0xcc1);
  *param_1 = iVar2;
  if (iVar2 != 0) {
    iVar2 = iVar2 + 0x660;
  }
  param_1[2] = iVar2;
  wsm_buf_reset(param_1);
  return;
}



/* ===== wsm_buf_deinit @ 00011958 size=22 ===== */

void wsm_buf_deinit(int *param_1)

{
  if (*param_1 != 0) {
    kfree();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}



/* ===== wsm_read_shmem @ 0001196e size=196 ===== */

undefined4 wsm_read_shmem(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar6 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar1 = param_1;
  uVar2 = param_2;
  local_20 = param_3;
  uStack_1c = param_4;
  mutex_lock(iVar6);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + 4;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar4 = wsm_buf_reserve(iVar5,4,*(uint *)(param_1 + 0x120),uVar3,iVar1,uVar2), iVar4 == 0))
    {
      **(undefined4 **)(param_1 + 0x11c) = param_2;
      iVar4 = *(int *)(param_1 + 0x11c);
      *(int *)(param_1 + 0x11c) = iVar4 + 4;
      uVar3 = iVar4 + 6;
      if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
         (iVar4 = wsm_buf_reserve(iVar5,2,*(uint *)(param_1 + 0x120),uVar3,iVar1,uVar2), iVar4 == 0)
         ) {
        **(undefined2 **)(param_1 + 0x11c) = (short)param_4;
        iVar4 = *(int *)(param_1 + 0x11c);
        *(int *)(param_1 + 0x11c) = iVar4 + 2;
        uVar3 = iVar4 + 4;
        if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
           (iVar1 = wsm_buf_reserve(iVar5,2,*(uint *)(param_1 + 0x120),uVar3,iVar1,uVar2),
           iVar1 == 0)) {
          **(undefined2 **)(param_1 + 0x11c) = 0;
          *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
          uVar2 = wsm_cmd_send(param_1,iVar5,&local_20,0,18000,0);
          mutex_unlock(iVar6);
          return uVar2;
        }
      }
    }
  }
  mutex_unlock(iVar6);
  return 0xfffffff4;
}



/* ===== wsm_get_config @ 00011a32 size=118 ===== */

undefined4 wsm_get_config(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,2,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_set_tcp_filter @ 00011aa8 size=122 ===== */

undefined4 wsm_set_tcp_filter(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,9,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_get_tcp_filter @ 00011b22 size=118 ===== */

undefined4 wsm_get_tcp_filter(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0xc,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_set_psmode @ 00011b98 size=122 ===== */

undefined4 wsm_set_psmode(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,8,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_set_scan @ 00011c12 size=112 ===== */

undefined4 wsm_set_scan(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  puVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + 4;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,4,*(uint *)(param_1 + 0x120),uVar3,iVar2,puVar6,param_3),
       iVar2 == 0)) {
      **(undefined4 **)(param_1 + 0x11c) = *param_2;
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 4;
      uVar1 = wsm_cmd_send(param_1,iVar5,0,10,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_get_scan_info @ 00011c82 size=128 ===== */

undefined4 wsm_get_scan_info(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *local_20;
  size_t sStack_1c;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  local_20 = param_2;
  sStack_1c = param_3;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,&local_20,0xb,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_set_wifimode @ 00011d02 size=122 ===== */

undefined4 wsm_set_wifimode(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0xd,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_set_ap_cfg @ 00011d7c size=122 ===== */

undefined4 wsm_set_ap_cfg(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0xe,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_set_wifichannel @ 00011df6 size=122 ===== */

undefined4 wsm_set_wifichannel(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0xf,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_set_countryId @ 00011e70 size=122 ===== */

undefined4 wsm_set_countryId(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x10,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_get_countryId @ 00011eea size=118 ===== */

undefined4 wsm_get_countryId(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x11,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_get_stalist @ 00011f60 size=118 ===== */

undefined4 wsm_get_stalist(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x12,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_smart_cfg_start @ 00011fd6 size=122 ===== */

undefined4 wsm_smart_cfg_start(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x13,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_smart_cfg_stop @ 00012050 size=122 ===== */

undefined4 wsm_smart_cfg_stop(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x14,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_ap_touch_start @ 000120ca size=122 ===== */

undefined4 wsm_ap_touch_start(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x15,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_ap_touch_stop @ 00012144 size=122 ===== */

undefined4 wsm_ap_touch_stop(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x16,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_etf_start_tx @ 000121be size=122 ===== */

undefined4 wsm_etf_start_tx(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x17,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_etf_single_tone @ 00012238 size=122 ===== */

undefined4 wsm_etf_single_tone(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x18,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_etf_stop_tx @ 000122b2 size=122 ===== */

undefined4 wsm_etf_stop_tx(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x19,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_etf_start_rx @ 0001232c size=122 ===== */

undefined4 wsm_etf_start_rx(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x1a,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_etf_start_rx_no_drop @ 000123a6 size=122 ===== */

undefined4 wsm_etf_start_rx_no_drop(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x25,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_etf_stop_rx @ 00012420 size=122 ===== */

undefined4 wsm_etf_stop_rx(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x1b,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_etf_reset_rx @ 0001249a size=122 ===== */

undefined4 wsm_etf_reset_rx(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x1c,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_set_adaptive @ 00012514 size=122 ===== */

undefined4 wsm_set_adaptive(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x1d,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_get_ver @ 0001258e size=118 ===== */

undefined4 wsm_get_ver(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x1e,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_get_sdk_ver @ 00012604 size=118 ===== */

undefined4 wsm_get_sdk_ver(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x1f,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_update_fw @ 0001267a size=122 ===== */

undefined4 wsm_update_fw(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x20,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_get_ap_cfg @ 000126f4 size=118 ===== */

undefined4 wsm_get_ap_cfg(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x21,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_set_listen_itvl @ 0001276a size=122 ===== */

undefined4 wsm_set_listen_itvl(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x22,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_send_at_cmd @ 000127e4 size=122 ===== */

undefined4 wsm_send_at_cmd(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x23,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_set_dbg_print @ 0001285e size=122 ===== */

undefined4 wsm_set_dbg_print(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x24,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_fw_sleep @ 000128d8 size=122 ===== */

undefined4 wsm_fw_sleep(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x26,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_get_tx_rate @ 00012952 size=118 ===== */

undefined4 wsm_get_tx_rate(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x27,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_send_ipc_data @ 000129c8 size=116 ===== */

undefined4 wsm_send_ipc_data(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send_no_ack(param_1,iVar5,0,0x28,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_get_scan_state @ 00012a3c size=118 ===== */

undefined4 wsm_get_scan_state(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x29,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_get_rssi @ 00012ab2 size=118 ===== */

undefined4 wsm_get_rssi(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x2a,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_get_time @ 00012b28 size=118 ===== */

undefined4 wsm_get_time(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x2b,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_clear_wifi_config @ 00012b9e size=122 ===== */

undefined4 wsm_clear_wifi_config(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x2c,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_get_etf_rx_info @ 00012c18 size=118 ===== */

undefined4 wsm_get_etf_rx_info(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x2d,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_add_netpattern_info @ 00012c8e size=122 ===== */

undefined4 wsm_add_netpattern_info(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x2e,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_del_netpattern_info @ 00012d08 size=122 ===== */

undefined4 wsm_del_netpattern_info(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x2f,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_add_conn_param_info @ 00012d82 size=122 ===== */

undefined4 wsm_add_conn_param_info(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x30,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_del_conn_param_info @ 00012dfc size=122 ===== */

undefined4 wsm_del_conn_param_info(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x31,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_conn_switch @ 00012e76 size=122 ===== */

undefined4 wsm_conn_switch(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x32,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_conn_lose @ 00012ef0 size=118 ===== */

undefined4 wsm_conn_lose(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x10c;
  iVar4 = param_1 + 0x118;
  local_20 = param_2;
  uStack_1c = param_3;
  mutex_lock(iVar3);
  if ((iVar4 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 2U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar4,2), iVar2 == 0)))) {
    **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 2;
    uVar1 = wsm_cmd_send(param_1,iVar4,&local_20,0x33,18000,0);
    mutex_unlock(iVar3);
    return uVar1;
  }
  mutex_unlock(iVar3);
  return 0xfffffff4;
}



/* ===== wsm_set_wakeup_ssid @ 00012f66 size=122 ===== */

undefined4 wsm_set_wakeup_ssid(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x34,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_clear_wakeup_ssid @ 00012fe0 size=122 ===== */

undefined4 wsm_clear_wakeup_ssid(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x35,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_auto_reconnect @ 0001305a size=122 ===== */

undefined4 wsm_auto_reconnect(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x36,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_set_wakeup_event @ 000130d4 size=122 ===== */

undefined4 wsm_set_wakeup_event(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x37,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_send_customer_cmd @ 0001314e size=122 ===== */

undefined4 wsm_send_customer_cmd(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x38,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_customer_cert_save @ 000131c8 size=122 ===== */

undefined4 wsm_customer_cert_save(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x39,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_check_alive @ 00013242 size=122 ===== */

undefined4 wsm_check_alive(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x3a,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_direct_trans_buffer @ 000132bc size=128 ===== */

undefined4 wsm_direct_trans_buffer(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *local_20;
  size_t sStack_1c;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  local_20 = param_2;
  sStack_1c = param_3;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,&local_20,0x3b,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_force_reboot @ 0001333c size=122 ===== */

undefined4 wsm_force_reboot(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x3c,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_host_reboot_notify @ 000133b6 size=122 ===== */

undefined4 wsm_host_reboot_notify(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send(param_1,iVar5,0,0x3e,18000,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_host_network_ok_notify @ 00013430 size=116 ===== */

undefined4 wsm_host_network_ok_notify(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + param_3;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,param_3,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
      *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
      uVar1 = wsm_cmd_send_no_ack(param_1,iVar5,0,0x3d,0);
      mutex_unlock(iVar4);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_ext_fast_cfg_recv @ 000134a4 size=172 ===== */

undefined4 wsm_ext_fast_cfg_recv(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  
  iVar7 = param_1 + 0x10c;
  iVar6 = param_1 + 0x118;
  iVar1 = param_1;
  pvVar8 = param_2;
  mutex_lock(iVar7);
  if (iVar6 != 0) {
    uVar4 = *(int *)(param_1 + 0x11c) + 8;
    if ((uVar4 <= *(uint *)(param_1 + 0x120)) ||
       (iVar5 = wsm_buf_reserve(iVar6,8,*(uint *)(param_1 + 0x120),uVar4,iVar1,pvVar8), iVar5 == 0))
    {
      puVar3 = *(undefined4 **)(param_1 + 0x11c);
      *puVar3 = 0;
      puVar3[1] = 0;
      iVar5 = *(int *)(param_1 + 0x11c) + 8;
      *(int *)(param_1 + 0x11c) = iVar5;
      uVar4 = iVar5 + param_3;
      if ((uVar4 <= *(uint *)(param_1 + 0x120)) ||
         (iVar1 = wsm_buf_reserve(iVar6,param_3,*(uint *)(param_1 + 0x120),uVar4,iVar1,pvVar8),
         iVar1 == 0)) {
        memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
        *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
        uVar2 = wsm_cmd_send(param_1,iVar6,0,0x3f,18000,0);
        mutex_unlock(iVar7);
        return uVar2;
      }
    }
  }
  mutex_unlock(iVar7);
  return 0xfffffff4;
}



/* ===== wsm_ext_fast_cfg_send @ 00013550 size=178 ===== */

undefined4 wsm_ext_fast_cfg_send(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  
  iVar7 = param_1 + 0x10c;
  iVar6 = param_1 + 0x118;
  iVar1 = param_1;
  pvVar8 = param_2;
  mutex_lock(iVar7);
  if (iVar6 != 0) {
    uVar4 = *(int *)(param_1 + 0x11c) + 8;
    if ((uVar4 <= *(uint *)(param_1 + 0x120)) ||
       (iVar5 = wsm_buf_reserve(iVar6,8,*(uint *)(param_1 + 0x120),uVar4,iVar1,pvVar8), iVar5 == 0))
    {
      puVar3 = *(undefined4 **)(param_1 + 0x11c);
      *puVar3 = 0;
      puVar3[1] = 1;
      iVar5 = *(int *)(param_1 + 0x11c) + 8;
      *(int *)(param_1 + 0x11c) = iVar5;
      uVar4 = iVar5 + param_3;
      if ((uVar4 <= *(uint *)(param_1 + 0x120)) ||
         (iVar1 = wsm_buf_reserve(iVar6,param_3,*(uint *)(param_1 + 0x120),uVar4,iVar1,pvVar8),
         iVar1 == 0)) {
        memcpy(*(void **)(param_1 + 0x11c),param_2,param_3);
        *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
        uVar2 = wsm_cmd_send(param_1,iVar6,0,0x3f,18000,0);
        mutex_unlock(iVar7);
        return uVar2;
      }
    }
  }
  mutex_unlock(iVar7);
  return 0xfffffff4;
}



/* ===== wsm_read_shmem_confirm @ 00013602 size=56 ===== */

undefined4 wsm_read_shmem_confirm(undefined4 param_1,undefined4 *param_2,int param_3)

{
  void *__dest;
  int *__src;
  int iVar1;
  
  __dest = (void *)*param_2;
  __src = *(int **)(param_3 + 4) + 1;
  if (((__src <= *(int **)(param_3 + 8)) &&
      (iVar1 = **(int **)(param_3 + 4), *(int **)(param_3 + 4) = __src, iVar1 == 0)) &&
     ((int *)((int)__src + param_2[1]) <= *(int **)(param_3 + 8))) {
    memcpy(__dest,__src,param_2[1]);
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + param_2[1];
    return 0;
  }
  return 0xffffffea;
}



/* ===== wsm_write_shmem @ 0001363a size=248 ===== */

undefined4 wsm_write_shmem(int param_1,undefined4 param_2,size_t param_3,void *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_28;
  size_t sStack_24;
  
  iVar4 = param_1 + 0x10c;
  iVar3 = param_1 + 0x118;
  local_28 = param_4;
  sStack_24 = param_3;
  mutex_lock(iVar4);
  if ((iVar3 != 0) &&
     ((*(int *)(param_1 + 0x11c) + 4U <= *(uint *)(param_1 + 0x120) ||
      (iVar2 = wsm_buf_reserve(iVar3,4), iVar2 == 0)))) {
    **(undefined4 **)(param_1 + 0x11c) = param_2;
    iVar2 = *(int *)(param_1 + 0x11c);
    *(int *)(param_1 + 0x11c) = iVar2 + 4;
    if ((iVar2 + 6U <= *(uint *)(param_1 + 0x120)) || (iVar2 = wsm_buf_reserve(iVar3,2), iVar2 == 0)
       ) {
      **(undefined2 **)(param_1 + 0x11c) = (short)param_3;
      iVar2 = *(int *)(param_1 + 0x11c);
      *(int *)(param_1 + 0x11c) = iVar2 + 2;
      if ((iVar2 + 4U <= *(uint *)(param_1 + 0x120)) ||
         (iVar2 = wsm_buf_reserve(iVar3,2), iVar2 == 0)) {
        **(undefined2 **)(param_1 + 0x11c) = 0;
        iVar2 = *(int *)(param_1 + 0x11c) + 2;
        *(int *)(param_1 + 0x11c) = iVar2;
        if ((iVar2 + param_3 <= *(uint *)(param_1 + 0x120)) ||
           (iVar2 = wsm_buf_reserve(iVar3,param_3), iVar2 == 0)) {
          memcpy(*(void **)(param_1 + 0x11c),param_4,param_3);
          *(size_t *)(param_1 + 0x11c) = param_3 + *(int *)(param_1 + 0x11c);
          uVar1 = wsm_cmd_send(param_1,iVar3,&local_28,1,18000,0);
          mutex_unlock(iVar4);
          return uVar1;
        }
      }
    }
  }
  mutex_unlock(iVar4);
  return 0xfffffff4;
}



/* ===== wsm_join @ 00013732 size=152 ===== */

undefined4 wsm_join(int param_1,void *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  iVar4 = param_1 + 0x10c;
  iVar5 = param_1 + 0x118;
  iVar2 = param_1;
  pvVar6 = param_2;
  down(param_1 + 0xbe0);
  mutex_lock(iVar4);
  if (iVar5 != 0) {
    uVar3 = *(int *)(param_1 + 0x11c) + 0x6c;
    if ((uVar3 <= *(uint *)(param_1 + 0x120)) ||
       (iVar2 = wsm_buf_reserve(iVar5,0x6c,*(uint *)(param_1 + 0x120),uVar3,iVar2,pvVar6),
       iVar2 == 0)) {
      memcpy(*(void **)(param_1 + 0x11c),param_2,0x6c);
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 0x6c;
      *(undefined4 *)(param_1 + 0xbdc) = 0xffffffff;
      uVar1 = wsm_cmd_send(param_1,iVar5,param_2,3,0x1518,param_3);
      mutex_unlock(iVar4);
      wsm_oper_unlock(param_1);
      return uVar1;
    }
  }
  mutex_unlock(iVar4);
  wsm_oper_unlock(param_1);
  return 0xfffffff4;
}



/* ===== wsm_configuration @ 000137ca size=422 ===== */

undefined4 wsm_configuration(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = param_1 + 0x10c;
  iVar7 = param_1 + 0x118;
  iVar1 = param_1;
  puVar3 = param_2;
  mutex_lock(iVar8);
  if (iVar7 != 0) {
    uVar4 = *(int *)(param_1 + 0x11c) + 4;
    if ((uVar4 <= *(uint *)(param_1 + 0x120)) ||
       (iVar5 = wsm_buf_reserve(iVar7,4,*(uint *)(param_1 + 0x120),uVar4,iVar1,puVar3), iVar5 == 0))
    {
      **(undefined4 **)(param_1 + 0x11c) = *param_2;
      iVar5 = *(int *)(param_1 + 0x11c);
      *(int *)(param_1 + 0x11c) = iVar5 + 4;
      uVar4 = iVar5 + 8;
      if ((uVar4 <= *(uint *)(param_1 + 0x120)) ||
         (iVar5 = wsm_buf_reserve(iVar7,4,*(uint *)(param_1 + 0x120),uVar4,iVar1,puVar3), iVar5 == 0
         )) {
        **(undefined4 **)(param_1 + 0x11c) = param_2[1];
        iVar5 = *(int *)(param_1 + 0x11c);
        *(int *)(param_1 + 0x11c) = iVar5 + 4;
        uVar4 = iVar5 + 8;
        if ((uVar4 <= *(uint *)(param_1 + 0x120)) ||
           (iVar5 = wsm_buf_reserve(iVar7,4,*(uint *)(param_1 + 0x120),uVar4,iVar1,puVar3),
           iVar5 == 0)) {
          **(undefined4 **)(param_1 + 0x11c) = param_2[2];
          iVar5 = *(int *)(param_1 + 0x11c);
          *(int *)(param_1 + 0x11c) = iVar5 + 4;
          uVar4 = iVar5 + 6;
          if ((uVar4 <= *(uint *)(param_1 + 0x120)) ||
             (iVar1 = wsm_buf_reserve(iVar7,2,*(uint *)(param_1 + 0x120),uVar4,iVar1,puVar3),
             iVar1 == 0)) {
            **(short **)(param_1 + 0x11c) = (short)param_2[5] + 0xc;
            iVar1 = *(int *)(param_1 + 0x11c);
            *(int *)(param_1 + 0x11c) = iVar1 + 2;
            if ((iVar1 + 4U <= *(uint *)(param_1 + 0x120)) ||
               (iVar1 = wsm_buf_reserve(iVar7,2), iVar1 == 0)) {
              **(undefined2 **)(param_1 + 0x11c) = 1;
              iVar1 = *(int *)(param_1 + 0x11c);
              *(int *)(param_1 + 0x11c) = iVar1 + 2;
              if ((iVar1 + 8U <= *(uint *)(param_1 + 0x120)) ||
                 (iVar1 = wsm_buf_reserve(iVar7,6), iVar1 == 0)) {
                puVar3 = (undefined4 *)param_2[3];
                puVar6 = *(undefined4 **)(param_1 + 0x11c);
                *puVar6 = *puVar3;
                *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar3 + 1);
                iVar1 = *(int *)(param_1 + 0x11c);
                *(int *)(param_1 + 0x11c) = iVar1 + 6;
                if ((iVar1 + 8U <= *(uint *)(param_1 + 0x120)) ||
                   (iVar1 = wsm_buf_reserve(iVar7,2), iVar1 == 0)) {
                  **(undefined2 **)(param_1 + 0x11c) = 5;
                  iVar1 = *(int *)(param_1 + 0x11c) + 2;
                  *(int *)(param_1 + 0x11c) = iVar1;
                  if (((uint)(iVar1 + param_2[5]) <= *(uint *)(param_1 + 0x120)) ||
                     (iVar1 = wsm_buf_reserve(iVar7), iVar1 == 0)) {
                    memcpy(*(void **)(param_1 + 0x11c),(void *)param_2[4],param_2[5]);
                    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + param_2[5];
                    uVar2 = wsm_cmd_send(param_1,iVar7,param_2,9,18000,param_3);
                    mutex_unlock(iVar8);
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
  mutex_unlock(iVar8);
  return 0xfffffff4;
}



/* ===== wsm_write_shmem_confirm @ 00013970 size=22 ===== */

undefined4 wsm_write_shmem_confirm(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_3 + 4) + 1;
  if ((piVar2 <= *(int **)(param_3 + 8)) &&
     (iVar1 = **(int **)(param_3 + 4), *(int **)(param_3 + 4) = piVar2, iVar1 == 0)) {
    return 0;
  }
  return 0xffffffea;
}



/* ===== wsm_handle_rx @ 00013986 size=830 ===== */

undefined4 wsm_handle_rx(int param_1,uint param_2,ushort *param_3,int *param_4)

{
  code *pcVar1;
  ushort uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int *piVar5;
  ushort *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_50 [4];
  ushort *local_4c;
  ushort *local_48;
  ushort *local_44;
  undefined4 local_40;
  ushort local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  uint local_38;
  undefined4 local_34;
  uint local_28;
  uint uStack_24;
  
  puVar3 = DAT_00013bec;
  local_48 = param_3 + 2;
  uVar11 = (param_2 & 0x3ff) >> 6;
  uVar9 = param_2 & 0xfffffc3f;
  local_44 = (ushort *)((int)param_3 + (uint)*param_3);
  local_4c = param_3;
  if (((*DAT_00013bec & 1) != 0) && (*DAT_00013bf0 << 0x1d < 0)) {
    printk(DAT_00013bf4,uVar11,uVar9);
  }
  if ((param_2 & 0x400) == 0) {
    if ((int)(param_2 << 0x14) < 0) {
      if (uVar9 != 0x804) {
        if ((int)uVar9 < 0x805) {
          if (uVar9 == 0x801) {
            uVar4 = wsm_startup_indication(param_1,&local_4c);
            return uVar4;
          }
          return 0;
        }
        if (uVar9 == 0x805) {
          puVar6 = local_48 + 2;
          if (local_44 < puVar6) {
            return 0xffffffea;
          }
          iVar10 = *(int *)local_48;
          if (4 < iVar10 - 10U) {
            if (iVar10 == 3) {
              puVar6 = local_48 + 4;
              if (local_44 < puVar6) {
                return 0xffffffea;
              }
              uVar9 = *puVar3;
              *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(local_48 + 2);
              local_48 = puVar6;
              if (((int)(uVar9 << 0x1f) < 0) && (*DAT_00013d28 << 0x1d < 0)) {
                printk(DAT_00013d40,DAT_00013d3c);
              }
              atbm_bh_wakeup(param_1);
              return 0;
            }
            local_48 = puVar6;
            iVar8 = ABwifi_hwpriv_to_vifpriv(param_1,uVar11);
            if (iVar8 == 0) {
              if (-1 < (int)(*puVar3 << 0x1f)) {
                return 0;
              }
              if (*DAT_00013d28 << 0x1d < 0) {
                printk(DAT_00013d2c,iVar10);
                return 0;
              }
              return 0;
            }
            puVar6 = local_48;
            if (*(int *)(iVar8 + 0xc) == 0) {
              return 0;
            }
          }
          local_48 = puVar6;
          piVar5 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_00013d30 + 0x28),0xdc0);
          if (piVar5 == (int *)0x0) {
            return 0;
          }
          puVar6 = local_48 + 0xfc;
          piVar5[2] = iVar10;
          if (local_44 < puVar6) {
            kfree();
            return 0xffffffea;
          }
          memcpy(piVar5 + 3,local_48,0x1f8);
          uVar9 = *puVar3;
          *(byte *)(piVar5 + 0x81) = (byte)((param_2 << 0x16) >> 0x1c);
          local_48 = puVar6;
          if (((int)(uVar9 << 0x1f) < 0) && (*DAT_00013d28 << 0x1d < 0)) {
            printk(DAT_00013d34,iVar10);
          }
          *(int *)(((uint)auStack_50 & 0xffffe000) + 4) =
               *(int *)(((uint)auStack_50 & 0xffffe000) + 4) + 0x200;
          piVar7 = *(int **)(param_1 + 0xbc8);
          iVar10 = *(int *)(param_1 + 0xbc4);
          *(int **)(param_1 + 0xbc8) = piVar5;
          *piVar5 = param_1 + 0xbc4;
          piVar5[1] = (int)piVar7;
          uVar4 = DAT_00013d38;
          *piVar7 = (int)piVar5;
          __local_bh_enable_ip(uVar4,0x200);
          if (param_1 + 0xbc4 == iVar10) {
            if (*(int *)(param_1 + 8) != 0) {
              queue_work_on(1,*(int *)(param_1 + 8),param_1 + 0xbcc);
              return 0;
            }
            return 0;
          }
          return 0;
        }
        if (uVar9 != 0x814) {
          return 0;
        }
      }
      if ((((local_48 + 2 <= local_44) &&
           (local_40 = *(undefined4 *)local_48, local_48 + 3 <= local_44)) &&
          (local_3c = local_48[2], (ushort *)((int)local_48 + 7) <= local_44)) &&
         ((local_3a = (undefined1)local_48[3], local_48 + 4 <= local_44 &&
          (local_39 = *(undefined1 *)((int)local_48 + 7), local_48 + 6 <= local_44)))) {
        local_38 = *(uint *)(local_48 + 4);
        if (local_48 + 8 <= local_44) {
          local_34 = *(undefined4 *)(local_48 + 6);
          local_28 = (local_38 & 0x1fffffff) >> 0x19;
          local_48 = local_48 + 8;
          uStack_24 = uVar11;
          iVar10 = ABwifi_hwpriv_to_vifpriv(param_1,uVar11);
          if (iVar10 == 0) {
            return 0;
          }
          iVar8 = (int)local_48 - (int)local_4c;
          skb_pull(*param_4,iVar8);
          atbm_rx_cb(iVar10,&local_40,param_4);
          if (*param_4 != 0) {
            skb_push(*param_4,iVar8);
            return 0;
          }
          return 0;
        }
      }
    }
    return 0xffffffea;
  }
  *(int *)(((uint)auStack_50 & 0xffffe000) + 4) =
       *(int *)(((uint)auStack_50 & 0xffffe000) + 4) + 0x200;
  uVar2 = *(ushort *)(param_1 + 0x13c);
  *(undefined2 *)(param_1 + 0x13c) = 0xffff;
  *(undefined4 *)(param_1 + 0x128) = 0xffff;
  iVar10 = *(int *)(param_1 + 0x134);
  __local_bh_enable_ip(DAT_00013bf8,0x200);
  if ((param_2 & 0xfffff83f) != (uint)(uVar2 & 0xfc3f)) {
    return 0xffffffea;
  }
  switch(uVar9) {
  case 0x400:
    if (iVar10 != 0) {
      uVar4 = wsm_read_shmem_confirm(param_1,iVar10,&local_4c);
      goto LAB_00013a6e;
    }
    break;
  case 0x401:
    if (iVar10 != 0) {
      uVar4 = wsm_write_shmem_confirm(param_1,iVar10,&local_4c);
      goto LAB_00013a6e;
    }
    break;
  case 0x402:
  case 0x40b:
  case 0x40c:
  case 0x411:
  case 0x412:
  case 0x41e:
  case 0x41f:
  case 0x421:
  case 0x427:
  case 0x429:
  case 0x42a:
  case 0x42b:
  case 0x42d:
  case 0x433:
  case 0x43b:
    if (iVar10 != 0) {
      uVar4 = wsm_generic_get_confirm(param_1,iVar10,&local_4c);
      goto LAB_00013a6e;
    }
    break;
  case 0x403:
  case 0x40a:
  case 0x40d:
  case 0x40f:
  case 0x410:
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x13b0e);
    (*pcVar1)();
  case 0x408:
  case 0x409:
  case 0x40e:
  case 0x413:
  case 0x414:
  case 0x415:
  case 0x416:
  case 0x417:
  case 0x418:
  case 0x419:
  case 0x41a:
  case 0x41b:
  case 0x41c:
  case 0x41d:
  case 0x420:
  case 0x422:
  case 0x423:
  case 0x424:
  case 0x425:
  case 0x426:
  case 0x42c:
  case 0x42e:
  case 0x42f:
  case 0x430:
  case 0x431:
  case 0x432:
  case 0x434:
  case 0x435:
  case 0x436:
  case 0x437:
  case 0x438:
  case 0x439:
  case 0x43c:
  case 0x43d:
  case 0x43e:
  case 0x43f:
    puVar6 = local_48 + 2;
    if (puVar6 <= local_44) {
      iVar10 = *(int *)local_48;
      local_48 = puVar6;
      if (iVar10 == 0) break;
      if (*DAT_00013bf0 << 0x1f < 0) {
        printk(DAT_00013c04,DAT_00013c00);
      }
    }
    if (*DAT_00013bf0 << 0x1e < 0) {
      printk(DAT_00013c08,param_2 & 0xfffff83f);
    }
    uVar4 = 0xffffffea;
    goto LAB_00013a6e;
  case 0x43a:
    uVar4 = wsm_confirm_for_sdio_alive(param_1,&local_4c);
    goto LAB_00013a6e;
  }
  uVar4 = 0;
LAB_00013a6e:
  *(int *)(((uint)auStack_50 & 0xffffe000) + 4) =
       *(int *)(((uint)auStack_50 & 0xffffe000) + 4) + 0x200;
  *(undefined4 *)(param_1 + 0x138) = uVar4;
  uVar4 = DAT_00013bfc;
  *(undefined4 *)(param_1 + 0x124) = 1;
  __local_bh_enable_ip(uVar4,0x200);
  __wake_up(param_1 + 0xbb4,3,1,0);
  return 0;
}



/* ===== wsm_get_tx @ 00013d44 size=118 ===== */

undefined4
wsm_get_tx(int param_1,int *param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5,
          int *param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puStack_20;
  
  *param_6 = 0;
  puStack_20 = param_4;
  if (*(int *)(param_1 + 300) == 0) {
    iVar3 = skb_dequeue(param_1 + 0x18);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xa4);
      uVar2 = 1;
      *param_2 = iVar4;
      *param_3 = (uint)*(ushort *)(iVar4 + 4);
      *param_4 = 1;
      *param_5 = 0;
      *param_6 = iVar3;
    }
  }
  else {
    *(int *)(((uint)&puStack_20 & 0xffffe000) + 4) =
         *(int *)(((uint)&puStack_20 & 0xffffe000) + 4) + 0x200;
    if (*(int *)(param_1 + 300) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(2,0x13d74);
      (*pcVar1)();
    }
    *param_2 = *(int *)(param_1 + 300);
    uVar2 = DAT_00013dbc;
    *param_3 = *(uint *)(param_1 + 0x130);
    *param_4 = 1;
    *param_5 = 0xffffffff;
    __local_bh_enable_ip(uVar2,0x200);
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== __atbm_free_event_queue @ 00013dc0 size=40 ===== */

void __atbm_free_event_queue(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  while (param_1 != (undefined4 *)*param_1) {
    piVar1 = (int *)*param_1;
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *piVar1 = 0x100;
    piVar1[1] = 0x122;
    kfree();
  }
  return;
}



/* ===== atbm_event_handler @ 00013de8 size=424 ===== */

void atbm_event_handler(int param_1)

{
  byte bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int ***pppiVar6;
  int ****ppppiVar7;
  undefined1 auStack_38 [4];
  int **local_34;
  int ***local_30;
  int ***local_2c;
  
  iVar5 = param_1 + -8;
  *(int *)(((uint)auStack_38 & 0xffffe000) + 4) =
       *(int *)(((uint)auStack_38 & 0xffffe000) + 4) + 0x200;
  local_30 = (int ***)&local_30;
  local_2c = (int ***)&local_30;
  if (iVar5 != *(int *)(param_1 + -8)) {
    local_30 = *(int ****)(param_1 + -8);
    local_2c = *(int ****)(param_1 + -4);
    local_30[1] = (int **)&local_30;
    *local_2c = (int **)&local_30;
    *(int *)(param_1 + -8) = iVar5;
    *(int *)(param_1 + -4) = iVar5;
  }
  iVar5 = 0;
  __local_bh_enable_ip(DAT_00013f90,0x200);
  mutex_lock(param_1 + -0xb9c);
  uVar3 = DAT_00013fb4;
  puVar2 = DAT_00013fb0;
  ppppiVar7 = (int ****)local_30;
  do {
    if (ppppiVar7 == &local_30) {
      mutex_unlock(param_1 + -0xb9c);
      __atbm_free_event_queue(ppppiVar7);
      return;
    }
    pppiVar6 = ppppiVar7[2];
    if ((int)pppiVar6 - 10U < 5) {
LAB_00013e9c:
      if (pppiVar6 < (int ***)0xa) {
        if (pppiVar6 < (int ***)0x8) {
          if (pppiVar6 == (int ***)0x4) {
            atbm_sta_add_event(iVar5,ppppiVar7[3]);
          }
          else if (pppiVar6 < (int ***)0x5) {
            if (pppiVar6 == (int ***)0x1) {
              local_34 = (int **)pppiVar6;
              printk(DAT_00013fa4,(int)ppppiVar7 + 0x2d,ppppiVar7[0xe]);
              atbm_ioctl_connect_async(ppppiVar7 + 3,local_34);
              if (*(int *)(iVar5 + 0xc) == 2) {
                atbm_sta_connect_event(iVar5,ppppiVar7 + 3);
              }
              else {
                atbm_configure_wifi_mode(*(undefined4 *)(iVar5 + 0xd4));
              }
            }
            else if ((pppiVar6 == (int ***)0x2) &&
                    (atbm_ioctl_connect_async(0), *(int *)(iVar5 + 0xc) == 2)) {
              atbm_sta_disconnect_event(iVar5,ppppiVar7 + 3);
            }
          }
          else {
            uVar4 = DAT_00013fa8;
            if ((pppiVar6 == (int ***)0x6) || (uVar4 = DAT_00013fa0, (int ***)0x6 < pppiVar6)) {
              printk(uVar4);
            }
            else {
              atbm_sta_loss_event(iVar5);
            }
          }
        }
        else {
          printk(uVar3,ppppiVar7 + 3);
        }
      }
      else if (pppiVar6 == (int ***)0xd) {
        atbm_ioctl_disconn_async(*(undefined1 *)(ppppiVar7 + 3));
      }
      else if (pppiVar6 < (int ***)0xe) {
        if (pppiVar6 == (int ***)0xb) {
          uVar4 = 1;
        }
        else {
          if ((int ***)0xb < pppiVar6) {
            bVar1 = *(byte *)(ppppiVar7 + 3);
            atbm_ioctl_wakeup_async((uint)bVar1);
            *puVar2 = (uint)bVar1;
            goto LAB_00013e8e;
          }
          uVar4 = 0;
        }
        atbm_ioctl_driver_async(uVar4);
      }
      else if (pppiVar6 == (int ***)0xf) {
        printk(DAT_00013fac,ppppiVar7[3],ppppiVar7 + 4);
      }
      else if (pppiVar6 < (int ***)0xf) {
        atbm_ioctl_conn_err_async(*(undefined1 *)(ppppiVar7 + 3));
      }
      else if (pppiVar6 == (int ***)0x4321) {
        atbm_ioctl_customer_private_event_async(ppppiVar7 + 3);
      }
    }
    else if (pppiVar6 != (int ***)0x5678) {
      if (*(char *)(ppppiVar7 + 0x81) == '\0') {
        iVar5 = *(int *)(param_1 + -0xbc8);
        if (iVar5 != 0) goto LAB_00013e9c;
      }
      else if (*DAT_00013f94 << 0x1f < 0) {
        printk(DAT_00013f98);
      }
      iVar5 = 0;
      printk(DAT_00013f9c);
    }
LAB_00013e8e:
    ppppiVar7 = (int ****)*ppppiVar7;
  } while( true );
}



/* ===== atbm_free_common @ 00013fb8 size=100 ===== */

void atbm_free_common(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_c;
  
  local_c = param_2;
  if (*(ushort *)(param_1 + 0xfa) < 0x34ed) {
    iVar2 = atbm_reg_read(param_1,1,&local_c,4,param_1);
    if (iVar2 < 0) {
      iVar2 = *DAT_0001401c;
      uVar1 = DAT_00014024;
    }
    else {
      local_c = local_c & 0xefff;
      iVar2 = atbm_reg_write(param_1,1,&local_c);
      if (-1 < iVar2) goto LAB_00013fea;
      iVar2 = *DAT_0001401c;
      uVar1 = DAT_00014028;
    }
    if (iVar2 << 0x1d < 0) {
      printk(uVar1,DAT_00014020);
    }
  }
LAB_00013fea:
  kfree(param_1);
  return;
}



/* ===== atbm_init_common @ 0001402c size=190 ===== */

int atbm_init_common(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = __kmalloc(param_1,0x100,param_3,param_4,param_4);
  if (iVar3 == 0) {
    printk(DAT_000140ec);
  }
  else {
    *(undefined4 *)(iVar3 + 0xbf4) = 0x74;
    uVar4 = alloc_workqueue(DAT_000140f8,DAT_000140f4,1,DAT_000140f0);
    uVar2 = DAT_00014100;
    uVar1 = DAT_000140fc;
    *(undefined4 *)(iVar3 + 8) = uVar4;
    __init_waitqueue_head(iVar3 + 0xbb4,uVar2,uVar1);
    *(int *)(iVar3 + 0xbc4) = iVar3 + 0xbc4;
    *(int *)(iVar3 + 0xbc8) = iVar3 + 0xbc4;
    *(undefined4 *)(iVar3 + 0xbcc) = 0xffffffe0;
    *(int *)(iVar3 + 0xbd0) = iVar3 + 0xbd0;
    *(int *)(iVar3 + 0xbd4) = iVar3 + 0xbd0;
    uVar2 = DAT_00014108;
    uVar1 = DAT_000140fc;
    *(undefined4 *)(iVar3 + 0xbd8) = DAT_00014104;
    __mutex_init(iVar3 + 0x10c,uVar2,uVar1);
    __mutex_init(iVar3 + 0x30,DAT_0001410c,DAT_000140fc);
    *(int *)(iVar3 + 0xbe4) = iVar3 + 0xbe4;
    *(undefined4 *)(iVar3 + 0xbe0) = 1;
    *(int *)(iVar3 + 0xbe8) = iVar3 + 0xbe4;
    *(undefined4 *)(iVar3 + 0xbec) = 0;
    wsm_buf_init(iVar3 + 0x118);
    *(int *)(iVar3 + 0xc) = iVar3 + 0xc;
    *(int *)(iVar3 + 0x10) = iVar3 + 0xc;
    *(int *)(iVar3 + 0x18) = iVar3 + 0x18;
    *(int *)(iVar3 + 0x1c) = iVar3 + 0x18;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(int *)(iVar3 + 0x1018) = iVar3 + 0x1018;
    *(int *)(iVar3 + 0x101c) = iVar3 + 0x1018;
    *(undefined4 *)(iVar3 + 0x1020) = 0;
    sta_info_init(iVar3);
  }
  return iVar3;
}



/* ===== atbm_core_probe @ 00014110 size=552 ===== */

uint atbm_core_probe(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar10 = param_1;
  uVar11 = param_2;
  uVar12 = param_3;
  puVar3 = (undefined4 *)atbm_init_common(0x1030);
  iVar8 = DAT_00014338;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0xfffffff4;
  }
  else {
    *(undefined4 **)(DAT_00014338 + 4) = puVar3;
    uVar1 = DAT_0001433c;
    puVar3[0x10] = param_1;
    puVar3[0x11] = param_2;
    puVar9 = puVar3 + 0x19;
    puVar3[0x12] = 0;
    *puVar3 = param_3;
    *(undefined2 *)(puVar3 + 0x54) = 0x8913;
    puVar3[0x50] = 0;
    puVar3[0x51] = uVar1;
    *(undefined2 *)(puVar3 + 0x52) = 0x8913;
    *(undefined2 *)(puVar3 + 0x58) = 0x100;
    *(undefined2 *)(puVar3 + 0x29) = 0x101;
    *param_4 = (int)puVar3;
    uVar4 = atbm_pm_init(puVar9,puVar3);
    if (uVar4 == 0) {
      uVar4 = atbm_register_bh(puVar3);
      if (uVar4 == 0) {
        if (*(code **)(puVar3[0x10] + 0x6c) != (code *)0x0) {
          uVar4 = (**(code **)(puVar3[0x10] + 0x6c))(puVar3[0x11]);
        }
        if (*(code **)(puVar3[0x10] + 0x78) != (code *)0x0) {
          uVar5 = (**(code **)(puVar3[0x10] + 0x78))(puVar3[0x11]);
          uVar4 = uVar4 | uVar5;
        }
        uVar11 = DAT_0001436c;
        uVar10 = DAT_00014368;
        piVar2 = DAT_00014340;
        if (uVar4 == 0) {
          while (uVar4 = atbm_load_firmware(puVar3), uVar4 == 0) {
            (**(code **)(puVar3[0x10] + 0x18))(puVar3[0x11]);
            (**(code **)(puVar3[0x10] + 0x34))(puVar3[0x11],0x100);
            if (*piVar2 << 0x1d < 0) {
              printk(DAT_00014350,0x100);
            }
            (**(code **)(puVar3[0x10] + 0x1c))(puVar3[0x11]);
            puVar3[0x12] = 1;
            iVar6 = (**(code **)(puVar3[0x10] + 0x20))(puVar3[0x11],uVar10,puVar3);
            if ((iVar6 < 0) && (*piVar2 << 0x1d < 0)) {
              printk(DAT_00014354,uVar11);
            }
            iVar6 = 0x4b2;
            printk(DAT_00014358);
            do {
              iVar7 = puVar3[0x40];
              if (iVar7 == 1) {
                atbm_get_mac_address_constprop_1(puVar3);
                atbm_pm_stay_awake(puVar9,0x708);
                rtnl_lock();
                uVar4 = atbm_netdev_add(puVar3,DAT_0001435c);
                rtnl_unlock();
                *(int *)(iVar8 + 8) = iVar7;
                atbm_configure_wifi_mode(puVar3);
                return uVar4;
              }
              schedule_timeout_interruptible(1);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            if (*piVar2 << 0x1d < 0) {
              printk(DAT_00014360);
            }
            atbm_monitor_pc(puVar3);
            if (*(int *)(puVar3[0x10] + 0x50) == 0) {
              uVar4 = 0xffffff92;
              (**(code **)(puVar3[0x10] + 0x24))(puVar3[0x11]);
              goto LAB_0001421a;
            }
            if (*piVar2 << 0x1f < 0) {
              printk(DAT_00014364);
            }
            if (*(code **)(puVar3[0x10] + 0x24) != (code *)0x0) {
              (**(code **)(puVar3[0x10] + 0x24))(puVar3[0x11]);
            }
            (**(code **)(puVar3[0x10] + 0x50))(puVar3[0x11]);
          }
          if (*piVar2 << 0x1f < 0) {
            printk(DAT_00014348);
          }
LAB_0001421a:
          atbm_unregister_bh(puVar3);
        }
        else if (*DAT_00014340 << 0x1f < 0) {
          printk(DAT_0001434c);
        }
      }
    }
    else {
      iVar8 = *DAT_00014340 << 0x1d;
      if (iVar8 < 0) {
        printk(DAT_00014344,uVar4,*DAT_00014340,iVar8,uVar10,uVar11,uVar12);
      }
    }
    if (*(code **)(puVar3[0x10] + 0x70) != (code *)0x0) {
      (**(code **)(puVar3[0x10] + 0x70))(puVar3[0x11]);
    }
    if (*(code **)(puVar3[0x10] + 0x7c) != (code *)0x0) {
      (**(code **)(puVar3[0x10] + 0x7c))(puVar3[0x11]);
    }
    wsm_buf_deinit(puVar3 + 0x46);
    atbm_pm_deinit(puVar9);
    atbm_free_common(puVar3);
  }
  *param_4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[0x12] = 0;
  }
  return uVar4;
}



/* ===== atbm_set_fw_ver @ 00014370 size=10 ===== */

void atbm_set_fw_ver(int param_1)

{
  *(uint *)(DAT_0001437c + 0xc) = (uint)*(ushort *)(param_1 + 0xfa);
  return;
}



/* ===== atbm_free_event_queue @ 00014380 size=88 ===== */

void atbm_free_event_queue(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 **local_10;
  undefined4 **local_c;
  
  uVar2 = (uint)&local_10 & 0xffffe000;
  iVar1 = param_1 + 0xbc4;
  *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 0x200;
  local_10 = &local_10;
  local_c = &local_10;
  if (iVar1 != *(int *)(param_1 + 0xbc4)) {
    local_10 = *(undefined4 ***)(param_1 + 0xbc4);
    local_c = *(undefined4 ***)(param_1 + 0xbc8);
    local_10[1] = &local_10;
    *local_c = &local_10;
    *(int *)(param_1 + 0xbc4) = iVar1;
    *(int *)(param_1 + 0xbc8) = iVar1;
  }
  __local_bh_enable_ip(DAT_000143d8,0x200);
  __atbm_free_event_queue(&local_10);
  return;
}



/* ===== atbm_clear_wakeup_reg @ 000143dc size=84 ===== */

void atbm_clear_wakeup_reg(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar2 = atbm_reg_read_for_sleep(param_1,1,&local_14,4,param_1);
  uVar1 = local_14;
  if (iVar2 < 0) {
    if (*DAT_00014430 << 0x1d < 0) {
      printk(DAT_00014438,DAT_00014434);
    }
  }
  local_14 = uVar1 & 0xefff;
  iVar2 = atbm_reg_write_for_sleep(param_1,1,&local_14);
  if ((iVar2 < 0) && (*DAT_00014430 << 0x1d < 0)) {
    printk(DAT_0001443c,DAT_00014434);
  }
  return;
}



/* ===== atbm_unregister_common @ 00014440 size=174 ===== */

void atbm_unregister_common(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = DAT_000144f0;
  if (*DAT_000144f0 << 0x1c < 0) {
    printk(DAT_000144f4);
  }
  rtnl_lock();
  atbm_remove_interfaces(param_1);
  rtnl_unlock();
  if (*(ushort *)(param_1 + 0xfa) < 0x34ed) {
    (**(code **)(*(int *)(param_1 + 0x40) + 0x24))(*(undefined4 *)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(ushort *)(param_1 + 0xfa) < 0x34ed) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    pcVar2 = *(code **)(*(int *)(param_1 + 0x40) + 0x70);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*(undefined4 *)(param_1 + 0x44));
    }
    pcVar2 = *(code **)(*(int *)(param_1 + 0x40) + 0x7c);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*(undefined4 *)(param_1 + 0x44));
    }
  }
  atbm_unregister_bh(param_1);
  atbm_rx_bh_flush(param_1);
  atbm_tx_bh_flush(param_1);
  flush_workqueue(*(undefined4 *)(param_1 + 8));
  destroy_workqueue(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  wsm_buf_deinit(param_1 + 0x118);
  if (*(int *)(param_1 + 0xe0) != 0) {
    kfree_skb();
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  atbm_pm_deinit(param_1 + 100);
  if (*piVar1 << 0x1c < 0) {
    printk(DAT_000144f8);
    return;
  }
  return;
}



/* ===== atbm_core_release @ 000144fc size=22 ===== */

void atbm_core_release(undefined4 param_1)

{
  atbm_unregister_common();
  atbm_free_common(param_1);
  *(undefined4 *)(DAT_00014514 + 8) = 0;
  return;
}



/* ===== atbm_get_connectconfig @ 00014518 size=96 ===== */

void atbm_get_connectconfig(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_b6 [10];
  char local_ac;
  undefined1 auStack_96 [130];
  int local_14;
  
  piVar1 = DAT_00014578;
  local_14 = *DAT_00014578;
  wsm_get_config(param_1,auStack_b6,0xa2);
  iVar2 = *(int *)(param_1 + 4);
  *(char *)(iVar2 + 0xd8) = local_ac;
  if (local_ac != '\0') {
    atbm_sta_connect_event(iVar2,auStack_96);
  }
  if (*DAT_0001457c << 0x1d < 0) {
    printk(DAT_00014580,*(undefined1 *)(param_1 + 0x5d),*(undefined1 *)(param_1 + 0x5e),
           *(undefined1 *)(param_1 + 0x5f),*(undefined1 *)(param_1 + 0x60),
           *(undefined1 *)(param_1 + 0x61));
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== atbm_set_tcp_port_filter @ 00014584 size=38 ===== */

void atbm_set_tcp_port_filter(int param_1)

{
  wsm_set_tcp_filter(param_1,param_1 + 0x140,0x18);
  if (*DAT_000145ac << 0x1d < 0) {
    printk(DAT_000145b0,*(undefined1 *)(param_1 + 0x147));
    return;
  }
  return;
}



/* ===== atbm_set_psmode @ 000145b4 size=10 ===== */

void atbm_set_psmode(int param_1)

{
  wsm_set_psmode(param_1,param_1 + 0x158,0xc);
  return;
}



/* ===== atbm_notify_sta_connect_ok @ 000145be size=38 ===== */

int atbm_notify_sta_connect_ok
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_c;
  
  uStack_c = param_2;
  iVar1 = wsm_host_network_ok_notify(param_1,&uStack_c,4,param_4,param_1);
  if ((iVar1 != 0) && (*DAT_000145e4 << 0x1f < 0)) {
    printk(DAT_000145ec,DAT_000145e8);
  }
  return iVar1;
}



/* ===== ____atomic_set_bit @ 000145f0 size=24 ===== */

void ____atomic_set_bit(uint param_1,uint *param_2)

{
  disableIRQinterrupts();
  *param_2 = 1 << (param_1 & 0xff) | *param_2;
  return;
}



/* ===== ____atomic_clear_bit @ 00014608 size=26 ===== */

void ____atomic_clear_bit(uint param_1,uint *param_2)

{
  disableIRQinterrupts();
  *param_2 = *param_2 & ~(1 << (param_1 & 0xff));
  return;
}



/* ===== atbm_change_mtu @ 00014622 size=24 ===== */

undefined4 atbm_change_mtu(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 0x100U < 0x4dd) {
    *(int *)(param_1 + 0x148) = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== atbm_netdev_select_queue @ 0001463a size=4 ===== */

undefined4 atbm_netdev_select_queue(void)

{
  return 0;
}



/* ===== atbm_netdev_ioctrl @ 0001463e size=4 ===== */

undefined4 atbm_netdev_ioctrl(void)

{
  return 0;
}



/* ===== atbm_sta_key_config @ 00014642 size=70 ===== */

void atbm_sta_key_config(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  switch(param_2) {
  case 1:
  case 5:
    *(undefined4 *)(param_1 + 4) = 2;
    uVar1 = 0x404;
    break;
  case 2:
    *(undefined4 *)(param_1 + 4) = 3;
    uVar1 = 0x804;
    break;
  default:
    if (*DAT_00014690 << 0x1f < 0) {
      printk(DAT_00014698,DAT_00014694,param_2);
      return;
    }
    return;
  case 4:
    *(undefined4 *)(param_1 + 4) = 4;
    uVar1 = 0x808;
    break;
  case 6:
    *(undefined4 *)(param_1 + 4) = 5;
    uVar1 = 0x12;
  }
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  return;
}



/* ===== atbm_if_setup @ 0001469c size=40 ===== */

void atbm_if_setup(int param_1)

{
  ether_setup();
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffff7ff;
  *(undefined4 *)(param_1 + 0x128) = DAT_000146c4;
  *(undefined1 *)(param_1 + 0x268) = 1;
  *(undefined4 *)(param_1 + 0x26c) = DAT_000146c8;
  return;
}



/* ===== ieee80211_if_free @ 000146cc size=8 ===== */

void ieee80211_if_free(int param_1)

{
  free_percpu(*(undefined4 *)(param_1 + 0x278));
  return;
}



/* ===== atbm_sdata_uninit @ 000146d4 size=12 ===== */

void atbm_sdata_uninit(int param_1)

{
  sta_info_flush(*(undefined4 *)(param_1 + 0x5b4),param_1 + 0x4e0);
  return;
}



/* ===== atbm_stop @ 000146e0 size=58 ===== */

undefined4 atbm_stop(int param_1)

{
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  netif_tx_stop_all_queues();
  sta_info_flush(*(undefined4 *)(param_1 + 0x5b4),param_1 + 0x4e0);
  flush_work(param_1 + 0x504);
  synchronize_rcu();
  skb_queue_purge(param_1 + 0x4f8);
  printk(DAT_00014720,DAT_0001471c);
  return 0;
}



/* ===== atbm_open @ 00014724 size=120 ===== */

undefined4 atbm_open(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  atbm_get_connectconfig(*(undefined4 *)(param_1 + 0x5b4));
  atbm_set_tcp_port_filter(*(undefined4 *)(param_1 + 0x5b4));
  if (*(char *)(param_1 + 0x5b8) == '\0') {
    netif_carrier_off();
  }
  else {
    netif_carrier_on(param_1);
  }
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x220); uVar2 = uVar2 + 1) {
    ____atomic_clear_bit(0,uVar2 * 0x7c + *(int *)(param_1 + 0x21c) + 0x44);
  }
  *(int *)(((uint)&stack0xfffffff0 & 0xffffe000) + 4) =
       *(int *)(((uint)&stack0xfffffff0 & 0xffffe000) + 4) + 0x200;
  uVar1 = DAT_0001479c;
  *(undefined1 *)(*(int *)(param_1 + 0x5b4) + 0x102c) = 0;
  __local_bh_enable_ip(uVar1,0x200);
  return 0;
}



/* ===== ieee80211_iface_work @ 000147a0 size=882 ===== */

void ieee80211_iface_work(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined1 auStack_42 [5];
  undefined4 local_3d [3];
  undefined1 local_31;
  undefined1 auStack_2d [9];
  
  iVar3 = DAT_00014974;
  auStack_2d._1_4_ = *DAT_00014944;
  if (*(int *)(param_1 + -0x20) == 0) {
    if (*DAT_00014948 << 0x1f < 0) {
      if (auStack_2d._1_4_ == *DAT_00014944) {
        printk(DAT_00014950,DAT_0001494c);
        return;
      }
      goto LAB_000147ee;
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0xb0);
    iVar19 = param_1 + -0x24;
    while (iVar5 = skb_dequeue(param_1 + -0xc), iVar5 != 0) {
      puVar13 = *(ushort **)(iVar5 + 0xa4);
      uVar1 = *puVar13;
      if (((uVar1 & 0xfc) == 0xd0) && ((char)puVar13[0xc] == '\x03')) {
        uVar18 = *(undefined4 *)(iVar5 + 0x50);
        iVar16 = iVar11 + 0xbf8;
        mutex_lock(iVar16);
        iVar6 = sta_info_get(iVar19,puVar13 + 5);
        if (iVar6 != 0) {
          if (*(char *)((int)puVar13 + 0x19) == '\0') {
            ieee80211_process_addba_request(iVar11,iVar6,puVar13,uVar18);
          }
          else if (*(char *)((int)puVar13 + 0x19) == '\x02') {
            ieee80211_process_delba(iVar19,iVar6,puVar13,uVar18);
          }
        }
LAB_0001483c:
        mutex_unlock(iVar16);
      }
      else if (((uVar1 & 0x8c) != 0x88) &&
              (((uVar1 & 0xc) == 0 && (*(int *)(param_1 + -0x18) == 2)))) {
        if ((uVar1 & 0xf0) == 0x10) {
          if (0x1d < *(uint *)(iVar5 + 0x50)) {
            uVar1 = puVar13[0xd];
            printk(DAT_00014968,DAT_00014964,DAT_00014960,puVar13 + 5,puVar13[0xc],uVar1,
                   puVar13[0xe] & 0x3fff);
            if (uVar1 != 0) {
              iVar16 = *DAT_00014948;
              uVar18 = DAT_00014964;
              uVar2 = DAT_0001496c;
              goto joined_r0x000148f4;
            }
            mutex_lock(*(int *)(param_1 + 0xb0) + 0xbf8);
            iVar16 = sta_info_get(iVar19,puVar13 + 8);
            if (iVar16 != 0) {
              ____atomic_set_bit(1,iVar16 + 0x18);
              ____atomic_set_bit(3);
              netif_carrier_on(*(undefined4 *)(param_1 + -0x24));
              printk(DAT_00014970,DAT_00014964);
            }
            iVar16 = *(int *)(param_1 + 0xb0) + 0xbf8;
            goto LAB_0001483c;
          }
        }
        else if ((uVar1 & 0xf0) == 0xb0) {
          uVar1 = puVar13[0xe];
          if (uVar1 == 0) {
            puVar14 = (undefined4 *)(param_1 + 0x14);
            printk(DAT_0001495c,DAT_00014954);
            memset(auStack_42,0,0x16);
            iVar16 = sta_info_get(iVar19,puVar14);
            if ((iVar16 != 0) &&
               (iVar16 = __alloc_skb(*(int *)(*(int *)(param_1 + 0xb0) + 0xbf4) + 0x40c,0xcc0,0,
                                     0xffffffff), iVar16 != 0)) {
              iVar6 = *(int *)(*(int *)(param_1 + 0xb0) + 0xbf4);
              *(int *)(iVar16 + 0xa4) = *(int *)(iVar16 + 0xa4) + iVar6;
              *(int *)(iVar16 + 0x98) = *(int *)(iVar16 + 0x98) + iVar6;
              puVar7 = (undefined1 *)skb_put(iVar16,0x18);
              memset(puVar7,0,0x18);
              *(undefined4 *)(puVar7 + 4) = *puVar14;
              *(undefined2 *)(puVar7 + 8) = *(undefined2 *)(param_1 + 0x18);
              *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(param_1 + -0x14);
              *(undefined2 *)(puVar7 + 0xe) = *(undefined2 *)(param_1 + -0x10);
              *(undefined4 *)(puVar7 + 0x10) = *puVar14;
              *(undefined2 *)(puVar7 + 0x14) = *(undefined2 *)(param_1 + 0x18);
              skb_put(iVar16,4);
              *puVar7 = 0;
              puVar7[1] = 0;
              puVar7[0x1a] = 0;
              puVar7[0x18] = 0x21;
              puVar7[0x1b] = 0;
              puVar7[0x19] = 4;
              puVar7 = (undefined1 *)skb_put(iVar16,*(byte *)(param_1 + 0x3a) + 2);
              *puVar7 = 0;
              bVar9 = *(byte *)(param_1 + 0x3a);
              puVar7[1] = bVar9;
              memcpy(puVar7 + 2,(void *)(param_1 + 0x1a),(uint)bVar9);
              puVar7 = (undefined1 *)skb_put(iVar16,10);
              iVar4 = DAT_00014b48;
              *puVar7 = 1;
              puVar7[1] = 8;
              iVar6 = 0;
              uVar17 = 0;
              pbVar15 = puVar7 + 2;
              do {
                pbVar8 = pbVar15;
                if ((int)((0xffffffffU >> (uVar17 & 0xff)) << 0x1f) < 0) {
                  iVar10 = *(int *)(iVar3 + uVar17 * 4);
                  iVar6 = iVar6 + 1;
                  bVar9 = (char)(int)((longlong)iVar10 * (longlong)iVar4 >> 0x21) -
                          (char)(iVar10 >> 0x1f);
                  pbVar8 = pbVar15 + 1;
                  if ((int)uVar17 < 4) {
                    bVar9 = bVar9 | 0x80;
                  }
                  *pbVar15 = bVar9;
                  if (iVar6 == 8) goto LAB_00014a8a;
                }
                uVar17 = uVar17 + 1;
                pbVar15 = pbVar8;
              } while (uVar17 != 0xc);
              if (iVar6 < 0xc) {
LAB_00014a8a:
                puVar7 = (undefined1 *)skb_put(iVar16,0xe - iVar6);
                iVar4 = DAT_00014b48;
                *puVar7 = 0x32;
                puVar7[1] = '\f' - (char)iVar6;
                pbVar8 = puVar7 + 2;
                while (uVar17 = uVar17 + 1, (int)uVar17 < 0xc) {
                  if ((int)((0xffffffffU >> (uVar17 & 0xff)) << 0x1f) < 0) {
                    iVar6 = *(int *)(iVar3 + uVar17 * 4);
                    *pbVar8 = (char)(int)((longlong)iVar6 * (longlong)iVar4 >> 0x21) -
                              (char)(iVar6 >> 0x1f);
                    pbVar8 = pbVar8 + 1;
                  }
                }
              }
              *pbVar8 = 0x2d;
              pbVar8[1] = 0x1a;
              memset(pbVar8 + 4,0,0x18);
              pbVar8[2] = 0x12;
              pbVar8[3] = 0x11;
              pbVar8[4] = 2;
              local_3d[0]._0_1_ = 0xff;
              local_31 = 1;
              puVar14 = local_3d;
              pbVar15 = pbVar8 + 5;
              do {
                puVar12 = puVar14 + 1;
                *(undefined4 *)pbVar15 = *puVar14;
                puVar14 = puVar12;
                pbVar15 = pbVar15 + 4;
              } while (puVar12 != (undefined4 *)auStack_2d);
              puVar7 = (undefined1 *)skb_put(iVar16,9);
              *puVar7 = 0xdd;
              puVar7[3] = 0x50;
              puVar7[1] = 7;
              puVar7[4] = 0xf2;
              puVar7[2] = 0;
              puVar7[5] = 2;
              puVar7[6] = 0;
              puVar7[7] = 1;
              puVar7[8] = 0;
              atbm_tx(iVar19,iVar16);
            }
          }
          else {
            iVar16 = *DAT_00014948;
            uVar18 = DAT_00014954;
            uVar2 = DAT_00014958;
joined_r0x000148f4:
            if (iVar16 << 0x1f < 0) {
              printk(uVar2,uVar18,puVar13 + 5,uVar1);
            }
          }
        }
      }
      kfree_skb(iVar5);
    }
  }
  if (auStack_2d._1_4_ == *DAT_00014944) {
    return;
  }
LAB_000147ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== ieee80211_send_auth @ 00014b4c size=172 ===== */

void ieee80211_send_auth(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        int param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
                        undefined1 param_9)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0xd4);
  iVar5 = *(int *)(iVar6 + 0xbf4);
  iVar5 = __netdev_alloc_skb(0,param_5 + 0x2a + iVar5,0xa20,iVar5,param_1,param_2,param_3);
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar6 + 0xbf4);
    *(int *)(iVar5 + 0xa4) = *(int *)(iVar5 + 0xa4) + iVar6;
    *(int *)(iVar5 + 0x98) = *(int *)(iVar5 + 0x98) + iVar6;
    puVar4 = (undefined1 *)skb_put(iVar5,0x1e);
    memset(puVar4 + 2,0,0x1c);
    puVar4[1] = 0;
    *puVar4 = 0xb0;
    uVar2 = DAT_00014bf8;
    *(undefined4 *)(puVar4 + 4) = *param_6;
    *(undefined2 *)(puVar4 + 8) = *(undefined2 *)(param_6 + 1);
    *(undefined4 *)(puVar4 + 10) = *(undefined4 *)(param_1 + 0x10);
    uVar3 = DAT_00014bfc;
    *(undefined2 *)(puVar4 + 0xe) = *(undefined2 *)(param_1 + 0x14);
    *(undefined4 *)(puVar4 + 0x10) = *param_6;
    uVar1 = *(undefined2 *)(param_6 + 1);
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    *(undefined2 *)(puVar4 + 0x14) = uVar1;
    *(short *)(puVar4 + 0x18) = (short)param_3;
    *(short *)(puVar4 + 0x1a) = (short)param_2;
    printk(uVar2,uVar3,0x4b,param_2,param_9,param_7);
    atbm_tx(param_1,iVar5);
  }
  return;
}



/* ===== atbm_sta_connect_event @ 00014c00 size=242 ===== */

void atbm_sta_connect_event(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  bVar1 = *(byte *)(param_2 + 0x2a);
  iVar2 = sta_info_alloc(param_1,(undefined4 *)(param_2 + 0x21),0xcc0);
  if ((iVar2 != 0) && (iVar3 = sta_info_insert_rcu(), iVar3 == 0)) {
    mutex_lock(param_1[0x35] + 0xbf8);
    *(byte *)(iVar2 + 0x16c) = bVar1;
    *(byte *)(iVar2 + 0x196) = (byte)(((uint)bVar1 << 0x1d) >> 0x1f);
    *(byte *)(iVar2 + 0x16a) = *(byte *)(param_2 + 0x2b) & 1;
    ____atomic_set_bit(1,iVar2 + 0x18);
    ____atomic_set_bit(3);
    bVar4 = *(char *)(param_2 + 0x27) != '\0';
    *(bool *)(iVar2 + 0x169) = bVar4;
    *(bool *)((int)param_1 + 0xa2) = bVar4;
    if (bVar4) {
      atbm_sta_key_config(iVar2 + 0x170,*(undefined1 *)(param_2 + 0x27));
      atbm_sta_key_config(param_1 + 0x37,*(undefined1 *)(param_2 + 0x28));
    }
    netif_carrier_on(*param_1);
    printk(DAT_00014cf8,DAT_00014cf4);
    *(undefined1 *)(param_1 + 0x36) = 1;
    param_1[0xe] = *(undefined4 *)(param_2 + 0x21);
    *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0x25);
    memset(param_1 + 0x3c,0,0x30);
    *(undefined1 *)((int)param_1 + 0x135) = 1;
    param_1[0x48] = 0x1010101;
    param_1[0x49] = 0x1010101;
    *(undefined1 *)((int)param_1 + 0x12e) = 1;
    *(undefined4 *)((int)param_1 + 0x12f) = 0;
    *(undefined2 *)((int)param_1 + 0x133) = 0;
    param_1[0x4a] = 0;
    *(undefined2 *)(param_1 + 0x4b) = 0;
    mutex_unlock(param_1[0x35] + 0xbf8);
    atbm_notify_sta_connect_ok(param_1[0x35]);
    return;
  }
  return;
}



/* ===== atbm_sta_disconnect_event @ 00014cfc size=86 ===== */

void atbm_sta_disconnect_event(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = sta_info_get();
  if (iVar1 != 0) {
    mutex_lock(param_1[0x35] + 0xbf8);
    ____atomic_clear_bit(1,iVar1 + 0x18);
    ____atomic_clear_bit(3);
    __sta_info_destroy(iVar1);
    netif_carrier_off(*param_1);
    printk(DAT_00014d58,DAT_00014d54);
    *(undefined1 *)(param_1 + 0x36) = 0;
    mutex_unlock(param_1[0x35] + 0xbf8);
    return;
  }
  return;
}



/* ===== atbm_get_checked_sta @ 00014d5c size=280 ===== */

int atbm_get_checked_sta(int param_1,uint *param_2,undefined1 *param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *__s2;
  uint local_48 [4];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar2 = DAT_00014e74;
  if (param_2 != (uint *)0x0) {
    memset(local_48,0,0x20);
    iVar3 = wsm_get_stalist(*(undefined4 *)(param_1 + 0xd4),local_48,0x20);
    puVar1 = DAT_00014e7c;
    uVar2 = DAT_00014e78;
    if (iVar3 == 0) {
      uVar9 = local_48[1] & 0xff;
      uVar7 = (uint)(byte)DAT_00014e7c[1];
      uVar6 = 0;
      if (param_4 == 0) {
        puVar4 = (uint *)((int)DAT_00014e7c + uVar7 * 6);
        for (puVar8 = DAT_00014e7c; puVar8 != puVar4; puVar8 = (uint *)((int)puVar8 + 6)) {
          __s2 = puVar8 + 2;
          puVar5 = local_48;
          for (uVar7 = 0; (int)uVar7 < (int)uVar9; uVar7 = uVar7 + 1) {
            iVar3 = memcmp(__s2,puVar5 + 2,6);
            puVar5 = (uint *)((int)puVar5 + 6);
            if (iVar3 == 0) {
              if (uVar9 != 0) goto LAB_00014e5c;
              goto LAB_00014e06;
            }
          }
          if ((uVar9 == 0) || (uVar7 == uVar9)) goto LAB_00014e06;
LAB_00014e5c:
        }
      }
      else {
        puVar4 = local_48;
        puVar8 = (uint *)((int)puVar4 + uVar9 * 6);
        for (; puVar4 != puVar8; puVar4 = (uint *)((int)puVar4 + 6)) {
          __s2 = puVar4 + 2;
          puVar5 = DAT_00014e7c;
          for (uVar9 = 0; (int)uVar9 < (int)uVar7; uVar9 = uVar9 + 1) {
            iVar3 = memcmp(puVar5 + 2,__s2,6);
            puVar5 = (uint *)((int)puVar5 + 6);
            if (iVar3 == 0) {
              if (uVar7 != 0) goto LAB_00014e66;
              goto LAB_00014e06;
            }
          }
          if ((uVar7 == 0) || (uVar9 == uVar7)) goto LAB_00014e06;
LAB_00014e66:
        }
      }
      goto LAB_00014e14;
    }
  }
  printk(uVar2);
  return -1;
LAB_00014e06:
  uVar6 = 1;
  *param_2 = *__s2;
  *(short *)(param_2 + 1) = (short)__s2[1];
LAB_00014e14:
  puVar8 = DAT_00014e7c;
  *DAT_00014e7c = local_48[0];
  puVar8[1] = local_48[1];
  puVar8[2] = local_48[2];
  puVar8[3] = local_48[3];
  puVar8[4] = local_38;
  puVar8[5] = uStack_34;
  puVar8[6] = uStack_30;
  puVar8[7] = uStack_2c;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)puVar1[1];
  }
  return -(uVar6 ^ 1);
}



/* ===== atbm_sta_add_event @ 00014e80 size=212 ===== */

void atbm_sta_add_event(undefined4 *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char local_17;
  undefined1 auStack_16 [6];
  undefined4 *puVar5;
  
  iVar1 = atbm_get_checked_sta(param_1,auStack_16,&local_17,1);
  if (iVar1 == 0) {
    printk(DAT_00014f58,DAT_00014f54,auStack_16);
    iVar1 = sta_info_alloc(param_1,auStack_16,0xcc0);
    if ((iVar1 != 0) && (iVar2 = sta_info_insert_rcu(), iVar2 == 0)) {
      mutex_lock(param_1[0x35] + 0xbf8);
      *(undefined2 *)(iVar1 + 0x192) = param_2;
      *(undefined1 *)(iVar1 + 0x16a) = 1;
      ____atomic_set_bit(1,iVar1 + 0x18);
      ____atomic_set_bit(3);
      puVar3 = (undefined4 *)(iVar1 + 0x170);
      puVar4 = param_1 + 0x30;
      do {
        puVar5 = puVar4 + 1;
        *puVar3 = *puVar4;
        puVar3 = puVar3 + 1;
        puVar4 = puVar5;
      } while (puVar5 != param_1 + 0x35);
      if (1 < *(uint *)(iVar1 + 0x174)) {
        *(undefined1 *)(iVar1 + 0x169) = 1;
      }
      if (*DAT_00014f5c << 0x1f < 0) {
        printk(DAT_00014f60,auStack_16,*(undefined2 *)(iVar1 + 0x192),*(undefined1 *)(iVar1 + 0x169)
               ,*(uint *)(iVar1 + 0x174),*(undefined1 *)(iVar1 + 0x17d),
               *(undefined1 *)(iVar1 + 0x17c));
      }
      if (local_17 == '\x01') {
        netif_carrier_on(*param_1);
        *(undefined1 *)(param_1 + 0x36) = 1;
      }
      mutex_unlock(param_1[0x35] + 0xbf8);
    }
  }
  return;
}



/* ===== atbm_sta_loss_event @ 00014f64 size=114 ===== */

void atbm_sta_loss_event(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  iVar1 = atbm_get_checked_sta(param_1,(int)&uStack_18 + 2,(int)&uStack_18 + 1,0);
  if (iVar1 == 0) {
    printk(DAT_00014fdc,DAT_00014fd8,(int)&uStack_18 + 2);
    iVar1 = sta_info_get(param_1,(int)&uStack_18 + 2);
    if (iVar1 != 0) {
      mutex_lock(param_1[0x35] + 0xbf8);
      ____atomic_clear_bit(1,iVar1 + 0x18);
      ____atomic_clear_bit(3);
      __sta_info_destroy(iVar1);
      if (uStack_18._1_1_ == '\0') {
        netif_carrier_off(*param_1);
        *(undefined1 *)(param_1 + 0x36) = 0;
      }
      mutex_unlock(param_1[0x35] + 0xbf8);
    }
  }
  return;
}



/* ===== atbm_set_qos_hdr @ 00014fe0 size=50 ===== */

void atbm_set_qos_hdr(undefined4 param_1,int param_2)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(param_2 + 0xa4);
  if ((*puVar1 & 0x8c) == 0x88) {
    if ((*puVar1 & 0x300) == 0x300) {
      puVar1 = puVar1 + 0xf;
    }
    else {
      puVar1 = puVar1 + 0xc;
    }
    *(byte *)puVar1 = (byte)*(undefined4 *)(param_2 + 0x68) & 7 | (byte)*puVar1 & 0x10;
    *(byte *)((int)puVar1 + 1) = 0;
  }
  return;
}



/* ===== atbm_subif_start_xmit @ 00015012 size=732 ===== */

int atbm_subif_start_xmit(int param_1,int param_2)

{
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  void *pvVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  short sVar16;
  size_t __n;
  size_t __n_00;
  short sVar17;
  int iVar18;
  ushort uVar19;
  void *local_60;
  ushort local_46 [2];
  int local_42;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined2 local_38;
  int local_36;
  undefined2 local_32;
  undefined2 local_30;
  
  if ((*DAT_000152f0 == 0) && (0xd < *(uint *)(param_1 + 0x50))) {
    piVar12 = *(int **)(param_1 + 0xa4);
    iVar9 = *(int *)(param_2 + 0x5b4);
    if ((ushort)(*(ushort *)(piVar12 + 3) >> 8 | *(ushort *)(piVar12 + 3) << 8) == 0x800) {
      uVar10 = (uint)(*(byte *)((int)piVar12 + 0xf) >> 5);
    }
    else {
      uVar10 = 0;
    }
    *(uint *)(param_1 + 0x68) = uVar10;
    iVar11 = piVar12[3];
    uVar1 = *(undefined1 *)((int)piVar12 + 0xd);
    iVar18 = 0;
    if (*(int *)(param_2 + 0x4ec) == 2) {
      local_3e = *(undefined2 *)(param_2 + 0x51c);
      uVar19 = 0x108;
      local_42 = *(int *)(param_2 + 0x518);
      local_3c = *(undefined4 *)((int)piVar12 + 6);
      local_38 = *(undefined2 *)((int)piVar12 + 10);
      local_36 = *piVar12;
      local_32 = (undefined2)piVar12[1];
    }
    else {
      if (*(int *)(param_2 + 0x4ec) != 3) {
        if (-1 < *DAT_000152f4 << 0x1f) goto LAB_000152e8;
        printk(DAT_00015300,DAT_000152fc);
        goto LAB_000151e8;
      }
      local_42 = *piVar12;
      uVar19 = 0x208;
      local_3c = *(undefined4 *)(param_2 + 0x4f0);
      local_3e = (undefined2)piVar12[1];
      local_38 = *(undefined2 *)(param_2 + 0x4f4);
      local_36 = *(int *)((int)piVar12 + 6);
      local_32 = *(undefined2 *)((int)piVar12 + 10);
    }
    iVar13 = param_2 + 0x4e0;
    if (local_42 << 0x1f < 0) {
      __n_00 = 0x18;
    }
    else {
      iVar6 = sta_info_get(iVar13,&local_42);
      if ((iVar6 == 0) || (*(char *)(iVar6 + 0x16a) == '\0')) {
        __n_00 = 0x18;
      }
      else {
        uVar19 = uVar19 | 0x80;
        __n_00 = 0x1a;
      }
    }
    if (*(int *)(param_1 + 0xac) != 1) {
      iVar6 = skb_clone(param_1,0xa20);
      kfree_skb(param_1);
      param_1 = iVar6;
      if (iVar6 == 0) goto LAB_000151e8;
    }
    uVar3 = CONCAT11((char)iVar11,uVar1);
    __n = 0;
    local_46[1] = 0;
    local_30 = 0;
    local_60 = DAT_0001530c;
    if (((uVar3 == 0x80f3) || (uVar3 == 0x8137)) || (local_60 = DAT_00015310, 0x5ff < uVar3)) {
      sVar17 = 0xc;
      __n = 6;
    }
    else {
      sVar17 = 0xe;
      local_60 = (void *)0x0;
    }
    uVar14 = *(undefined4 *)(param_1 + 0xa0);
    sVar16 = *(short *)(param_1 + 0x8c);
    uVar15 = *(undefined4 *)(param_1 + 0xa4);
    sVar2 = *(short *)(param_1 + 0x8a);
    local_46[0] = uVar19;
    skb_pull(param_1,sVar17);
    iVar11 = (__n_00 + __n) - (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0));
    if ((0 < iVar11) ||
       (((int)((uint)*(byte *)(param_1 + 0x5e) << 0x1f) < 0 &&
        ((*(uint *)(*(int *)(param_1 + 0x9c) + 0x20) & 0xffff) != 1)))) {
      uVar10 = *(int *)(iVar9 + 0xbf4) + 0x14 + iVar11;
      if (((((int)((uint)*(byte *)(param_1 + 0x5e) << 0x1f) < 0) &&
           ((*(uint *)(*(int *)(param_1 + 0x9c) + 0x20) & 0xffff) != 1)) || (0 < (int)uVar10)) &&
         (iVar9 = pskb_expand_head(param_1,uVar10 & ~((int)uVar10 >> 0x1f),0,0xa20), iVar9 != 0)) {
        if (*DAT_000152f4 << 0xb < 0) {
          printk(DAT_000152f8);
        }
        iVar18 = 0x10;
        goto LAB_000151e8;
      }
    }
    sVar4 = (short)uVar14;
    sVar5 = (short)uVar15;
    sVar16 = ((sVar16 + sVar4) - sVar5) - sVar17;
    sVar17 = ((sVar2 + sVar4) - sVar5) - sVar17;
    if (local_60 != (void *)0x0) {
      pvVar7 = (void *)skb_push(param_1,__n);
      sVar16 = sVar16 + (short)__n;
      sVar17 = sVar17 + (short)__n;
      memcpy(pvVar7,local_60,__n);
    }
    if ((uVar19 & 0x8c) == 0x88) {
      puVar8 = (undefined2 *)skb_push(param_1,2);
      pvVar7 = (void *)skb_push(param_1,__n_00 - 2);
      memcpy(pvVar7,local_46,__n_00 - 2);
      *puVar8 = 0;
    }
    else {
      pvVar7 = (void *)skb_push(param_1,__n_00);
      memcpy(pvVar7,local_46,__n_00);
    }
    *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) + 1;
    *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + *(int *)(param_1 + 0x50);
    sVar2 = (short)*(undefined4 *)(param_1 + 0xa4) - (short)*(undefined4 *)(param_1 + 0xa0);
    *(short *)(param_1 + 0x8e) = sVar2;
    *(short *)(param_1 + 0x8c) = sVar16 + (short)__n_00 + sVar2;
    *(short *)(param_1 + 0x8a) = (short)__n_00 + sVar17 + sVar2;
    atbm_set_qos_hdr(iVar13,param_1);
    atbm_tx(iVar13,param_1);
  }
  else {
LAB_000152e8:
    iVar18 = 0;
LAB_000151e8:
    if ((*DAT_00015304 << 0x1e < 0) && (*DAT_000152f4 << 0x1d < 0)) {
      printk(DAT_00015308,DAT_000152fc);
    }
    if (iVar18 == 0) {
      kfree_skb(param_1);
    }
  }
  return iVar18;
}



/* ===== atbm_netdev_add @ 00015314 size=222 ===== */

undefined4 atbm_netdev_add(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  rtnl_is_locked();
  iVar2 = alloc_netdev_mqs(0x13c,param_2,0,DAT_000153f4,4,1);
  if (iVar2 != 0) {
    *(short *)(iVar2 + 0x15a) = (short)param_1[0x2fd] + 0x34;
    *(undefined2 *)(iVar2 + 0x15c) = 0x12;
    iVar3 = dev_alloc_name(iVar2,iVar2);
    if (-1 < iVar3) {
      *(undefined4 *)(iVar2 + 0x15e) = param_1[0x17];
      *(undefined2 *)(iVar2 + 0x162) = *(undefined2 *)(param_1 + 0x18);
      puVar4 = *(undefined4 **)(iVar2 + 0x1cc);
      *puVar4 = *(undefined4 *)(iVar2 + 0x15e);
      *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(iVar2 + 0x162);
      uVar5 = *param_1;
      *(undefined4 **)(iVar2 + 0x5b4) = param_1;
      *(int *)(iVar2 + 0x4e0) = iVar2;
      *(undefined4 *)(iVar2 + 0x2a4) = uVar5;
      *(undefined4 *)(iVar2 + 0x4f0) = **(undefined4 **)(iVar2 + 0x1cc);
      uVar1 = *(undefined2 *)(*(undefined4 **)(iVar2 + 0x1cc) + 1);
      *(undefined4 *)(iVar2 + 0x4ec) = 2;
      *(int *)(iVar2 + 0x4f8) = iVar2 + 0x4f8;
      *(undefined2 *)(iVar2 + 0x4f4) = uVar1;
      *(undefined4 *)(iVar2 + 0x4e4) = 0;
      *(undefined4 *)(iVar2 + 0x4e8) = 0;
      *(undefined4 *)(iVar2 + 0x500) = 0;
      *(undefined4 *)(iVar2 + 0x504) = 0xffffffe0;
      *(int *)(iVar2 + 0x508) = iVar2 + 0x508;
      *(int *)(iVar2 + 0x50c) = iVar2 + 0x508;
      uVar5 = DAT_000153f8;
      *(int *)(iVar2 + 0x4fc) = iVar2 + 0x4f8;
      *(undefined4 *)(iVar2 + 0x510) = uVar5;
      iVar3 = register_netdevice(iVar2);
      if (iVar3 == 0) {
        param_1[*(int *)(iVar2 + 0x4e8) + 1] = iVar2 + 0x4e0;
        return 0;
      }
    }
    free_netdev(iVar2);
  }
  return 0xffffffff;
}



/* ===== atbm_remove_interfaces @ 000153fc size=34 ===== */

void atbm_remove_interfaces(int param_1)

{
  undefined4 *puVar1;
  
  rtnl_is_locked();
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    synchronize_rcu();
    unregister_netdevice_queue(*puVar1,0);
    return;
  }
  return;
}



/* ===== atbm_rx_bh_flush @ 00015420 size=22 ===== */

void atbm_rx_bh_flush(int param_1)

{
  int iVar1;
  
  while (iVar1 = skb_dequeue(param_1 + 0xc), iVar1 != 0) {
    kfree_skb();
  }
  return;
}



/* ===== atbm_tx_bh_flush @ 00015436 size=22 ===== */

void atbm_tx_bh_flush(int param_1)

{
  int iVar1;
  
  while (iVar1 = skb_dequeue(param_1 + 0x18), iVar1 != 0) {
    kfree_skb();
  }
  return;
}



/* ===== atbm_enable_powersave @ 0001544c size=6 ===== */

void atbm_enable_powersave(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xbf0) = param_2;
  return;
}



/* ===== atbm_bh_wakeup @ 00015452 size=12 ===== */

void atbm_bh_wakeup(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x40) + 0x74);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001545a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0x44));
    return;
  }
  return;
}



/* ===== wsm_release_vif_tx_buffer @ 0001545e size=4 ===== */

undefined4 wsm_release_vif_tx_buffer(void)

{
  return 0;
}



/* ===== wsm_release_vif_tx_buffer_Nolock @ 00015462 size=4 ===== */

undefined4 wsm_release_vif_tx_buffer_Nolock(void)

{
  return 0;
}



/* ===== atbm_monitor_pc @ 00015466 size=194 ===== */

void atbm_monitor_pc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  memset(&local_38,0,0x28);
  iVar4 = 0;
  local_48 = 0;
  uStack_44 = 0;
  atbm_direct_write_reg_32(param_1,DAT_00015528,1);
  atbm_direct_read_reg_32(param_1,DAT_0001552c,&local_48);
  atbm_direct_read_reg_32(param_1,DAT_00015530,&uStack_44);
  atbm_direct_read_reg_32(param_1,DAT_00015534,&local_40);
  atbm_direct_read_reg_32(param_1,DAT_00015538,&local_3c);
  do {
    iVar3 = (int)&local_38 + iVar4;
    iVar2 = *(int *)(param_1 + 0x104) + 4 + iVar4;
    iVar4 = iVar4 + 4;
    atbm_direct_read_reg_32(param_1,iVar2,iVar3);
    piVar1 = DAT_0001553c;
  } while (iVar4 != 0x28);
  atbm_direct_write_reg_32(param_1,DAT_00015528,0);
  if ((*piVar1 << 0x1f < 0) && (printk(DAT_00015540,local_48,uStack_44), *piVar1 << 0x1f < 0)) {
    printk(DAT_00015544,local_38,local_34,uStack_30,local_2c,local_28,local_24,local_20);
    if (*piVar1 << 0x1f < 0) {
      printk(DAT_0001554c,DAT_00015548,local_40,*piVar1,local_2c,local_28,local_24,local_20);
      if (*piVar1 << 0x1f < 0) {
        printk(DAT_00015550,DAT_00015548,local_3c,*piVar1 << 0x1f,local_2c,local_28,local_24,
               local_20);
      }
    }
  }
  return;
}



/* ===== atbm_xmit_linearize @ 00015554 size=128 ===== */

void atbm_xmit_linearize(undefined4 param_1,void *param_2,void *param_3,size_t param_4,int param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = DAT_000155dc;
  if ((param_5 == 0) || (*(int *)(param_5 + 0x54) == 0)) {
    memcpy(param_3,param_2,param_4);
    if (param_5 == 0) {
      return;
    }
  }
  else {
    if (*(void **)(param_5 + 0xa4) != param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(2,0x155d4);
      (*pcVar1)();
    }
    if (*DAT_000155d8 == '\0') {
      *DAT_000155d8 = '\x01';
      printk(uVar2);
    }
    memcpy(param_3,*(void **)(param_5 + 0xa4),*(int *)(param_5 + 0x50) - *(int *)(param_5 + 0x54));
    param_3 = (void *)((*(int *)(param_5 + 0x50) - *(int *)(param_5 + 0x54)) + (int)param_3);
    for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(*(int *)(param_5 + 0x9c) + 2); iVar4 = iVar4 + 1) {
      iVar3 = iVar4 * 0xc + *(int *)(param_5 + 0x9c);
      param_3 = memcpy(param_3,(void *)(*(int *)(iVar3 + 0x28) + *(int *)(iVar3 + 0x30) * 0x20),
                       *(size_t *)(iVar3 + 0x2c));
      param_3 = (void *)((int)param_3 + *(int *)(iVar3 + 0x2c));
    }
  }
  kfree_skb(param_5);
  return;
}



/* ===== ieee80211_get_bssid @ 000155e0 size=88 ===== */

ushort * ieee80211_get_bssid(ushort *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (0xf < param_2) {
    if ((uVar1 & 0xc) == 8) {
      if ((0x17 < param_2) && ((uVar1 & 0x300) != 0x300)) {
        if ((int)(uVar1 << 0x17) < 0) goto LAB_00015602;
        if ((int)(uVar1 << 0x16) < 0) {
LAB_0001560a:
          return param_1 + 5;
        }
LAB_0001560e:
        return param_1 + 8;
      }
    }
    else if ((*param_1 & 0xc) == 0) {
      if (0x17 < param_2) goto LAB_0001560e;
    }
    else if ((uVar1 & 0xc) == 4) {
      if ((uVar1 & 0xfc) == 0xa4) {
LAB_00015602:
        return param_1 + 2;
      }
      if ((uVar1 & 0xfc) == 0x84) {
        if (param_3 == 2) goto LAB_0001560a;
        if ((1 < param_3) && (param_3 < 5)) goto LAB_00015602;
      }
    }
  }
  return (ushort *)0x0;
}



/* ===== atbm_ieee802_11_parse_elems_crc @ 00015638 size=772 ===== */

undefined4
atbm_ieee802_11_parse_elems_crc
          (byte *param_1,uint param_2,undefined4 *param_3,undefined4 param_4,uint param_5,
          uint param_6,undefined4 param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint extraout_r2;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  piVar4 = DAT_00015954;
  pbVar7 = param_1;
  uVar12 = param_2;
  puVar13 = param_3;
  memset(param_3 + 2,0,0xac);
  *param_3 = param_1;
  param_3[1] = param_2;
  do {
    if (param_2 < 2) {
      return param_7;
    }
    bVar1 = param_1[1];
    uVar9 = (uint)bVar1;
    pbVar10 = param_1 + 2;
    uVar11 = (uint)*param_1;
    if (param_2 - 2 < uVar9) {
      return param_7;
    }
    uVar6 = param_5;
    if ((param_6 != 0 || param_5 != 0) && (uVar11 < 0x40)) {
      pbVar7 = (byte *)((param_5 >> uVar11 | param_6 << (0x20 - uVar11 & 0xff) |
                        param_6 >> (uVar11 - 0x20 & 0xff)) & 1);
      uVar12 = 0;
      uVar6 = 0;
      if (pbVar7 != (byte *)0x0) {
        param_7 = crc32_be(param_7,param_1,uVar9 + 2);
        uVar6 = extraout_r2;
      }
    }
    if (uVar11 == 0x30) {
      param_3[0xb] = pbVar10;
      *(byte *)((int)param_3 + 0x9d) = bVar1;
    }
    else if (uVar11 < 0x31) {
      if (uVar11 == 6) {
        param_3[8] = pbVar10;
        *(byte *)((int)param_3 + 0x9a) = bVar1;
      }
      else if (uVar11 < 7) {
        if (uVar11 == 2) {
          param_3[4] = pbVar10;
          *(byte *)((int)param_3 + 0x96) = bVar1;
        }
        else if (uVar11 < 3) {
          if (uVar11 == 0) {
            param_3[2] = pbVar10;
            *(byte *)(param_3 + 0x25) = bVar1;
          }
          else if (uVar11 == 1) {
            param_3[3] = pbVar10;
            *(byte *)((int)param_3 + 0x95) = bVar1;
          }
        }
        else if (uVar11 == 4) {
          param_3[6] = pbVar10;
          *(byte *)(param_3 + 0x26) = bVar1;
        }
        else if (uVar11 < 5) {
          param_3[5] = pbVar10;
          *(byte *)((int)param_3 + 0x97) = bVar1;
        }
        else if (3 < uVar9) {
          param_3[7] = pbVar10;
          *(byte *)((int)param_3 + 0x99) = bVar1;
        }
      }
      else if (uVar11 == 0x25) {
        param_3[0x1c] = pbVar10;
        *(byte *)(param_3 + 0x2a) = bVar1;
      }
      else if (uVar11 < 0x26) {
        if (uVar11 == 0x10) {
          param_3[9] = pbVar10;
          *(byte *)((int)param_3 + 0x9b) = bVar1;
        }
        else if (uVar11 == 0x20) {
          param_3[0x1e] = pbVar10;
          *(byte *)((int)param_3 + 0xaa) = bVar1;
        }
        else if (uVar11 == 7) {
          param_3[0x1d] = pbVar10;
          *(byte *)((int)param_3 + 0xa9) = bVar1;
        }
      }
      else if (uVar11 == 0x2a) {
        param_3[0xc] = pbVar10;
        *(byte *)((int)param_3 + 0x9e) = bVar1;
      }
      else if (uVar11 == 0x2d) {
        if (0x19 < uVar9) {
          param_3[0x13] = pbVar10;
        }
      }
      else if (uVar11 == 0x28) {
        if (param_3[0x1f] == 0) {
          param_3[0x1f] = pbVar10;
          *(byte *)((int)param_3 + 0xab) = bVar1;
        }
        *(char *)(param_3 + 0x2b) = *(char *)(param_3 + 0x2b) + '\x01';
      }
    }
    else if (uVar11 == 0x72) {
      param_3[0x16] = pbVar10;
      *(byte *)((int)param_3 + 0xa3) = bVar1;
    }
    else if (uVar11 < 0x73) {
      if (uVar11 == 0x3c) {
        param_3[0x22] = pbVar10;
        *(byte *)(param_3 + 0x2c) = bVar1;
      }
      else if (uVar11 < 0x3d) {
        if (uVar11 == 0x32) {
          param_3[0xd] = pbVar10;
          *(byte *)((int)param_3 + 0x9f) = bVar1;
        }
        else if (uVar11 == 0x38) {
          param_3[0x20] = pbVar10;
          *(byte *)((int)param_3 + 0xad) = bVar1;
        }
      }
      else if (uVar11 == 0x3e) {
        param_3[0x23] = pbVar10;
        *(byte *)((int)param_3 + 0xb1) = bVar1;
LAB_00015932:
        param_3[0x24] = pbVar10;
        *(byte *)((int)param_3 + 0xb2) = bVar1;
      }
      else if (uVar11 < 0x3e) {
        if (0x15 < uVar9) {
          param_3[0x14] = pbVar10;
        }
      }
      else if ((uVar11 == 0x71) && (6 < uVar9)) {
        param_3[0x15] = pbVar10;
      }
    }
    else if (uVar11 == 0x83) {
      param_3[0x19] = pbVar10;
      *(byte *)((int)param_3 + 0xa6) = bVar1;
    }
    else if (uVar11 < 0x84) {
      if (uVar11 == 0x7e) {
        if (0x14 < uVar9) {
          param_3[0x1b] = pbVar10;
        }
      }
      else if (uVar11 == 0x82) {
        param_3[0x18] = pbVar10;
        *(byte *)((int)param_3 + 0xa5) = bVar1;
      }
      else if (uVar11 == 0x75) {
        param_3[0x17] = pbVar10;
        *(byte *)(param_3 + 0x29) = bVar1;
      }
    }
    else if (uVar11 == 0xdd) {
      if (uVar9 < 4) {
        iVar8 = *piVar4 << 0x1f;
        uVar5 = DAT_0001593c;
        if (iVar8 < 0) {
LAB_000157f8:
          printk(uVar5,uVar9,uVar6,iVar8,pbVar7,uVar12,puVar13);
        }
      }
      else {
        uVar11 = (uint)param_1[3] << 8 | (uint)param_1[2] << 0x10 | (uint)param_1[4];
        if (uVar11 == 0x50f2) {
          bVar2 = param_1[5];
          if (bVar2 == 2) {
            if (uVar9 == 4) {
              iVar8 = *piVar4;
              if (iVar8 << 0xb < 0) {
                uVar6 = 0x50f2;
                uVar5 = DAT_00015948;
                goto LAB_000157f8;
              }
            }
            else {
              bVar2 = param_1[6];
              if (bVar2 == 0) {
                param_3[0xe] = pbVar10;
                *(byte *)(param_3 + 0x28) = bVar1;
              }
              else {
                if (bVar2 != 1) {
                  iVar8 = *piVar4;
                  uVar5 = DAT_0001594c;
                  goto joined_r0x0001587a;
                }
                param_3[0xf] = pbVar10;
                *(byte *)((int)param_3 + 0xa1) = bVar1;
              }
            }
          }
          else if (bVar2 == 4) {
            param_3[0x21] = pbVar10;
            *(byte *)((int)param_3 + 0xaf) = bVar1;
          }
          else {
            if (bVar2 != 1) {
              iVar8 = *piVar4;
              uVar5 = DAT_00015950;
joined_r0x0001587a:
              iVar3 = iVar8 << 0xb;
              goto joined_r0x0001587a;
            }
            param_3[10] = pbVar10;
            *(byte *)(param_3 + 0x27) = bVar1;
          }
        }
        else if (uVar11 == DAT_00015940) {
          bVar2 = param_1[5];
          if (bVar2 == 9) {
            param_3[0x10] = pbVar10;
            *(byte *)((int)param_3 + 0xa2) = bVar1;
          }
          else if (bVar2 == 10) {
            param_3[0x11] = pbVar10;
            *(byte *)((int)param_3 + 0xae) = bVar1;
          }
          else {
            iVar8 = *piVar4 << 0xb;
            uVar5 = DAT_00015944;
            iVar3 = iVar8;
joined_r0x0001587a:
            if (iVar3 < 0) {
              printk(uVar5,bVar2,uVar9,iVar8,pbVar7,uVar12,puVar13);
            }
          }
        }
      }
    }
    else {
      if (uVar11 == 0xe9) goto LAB_00015932;
      if (uVar11 == 0x84) {
        param_3[0x1a] = pbVar10;
        *(byte *)((int)param_3 + 0xa7) = bVar1;
      }
    }
    param_2 = (param_2 - 2) - uVar9;
    param_1 = pbVar10 + uVar9;
  } while( true );
}



/* ===== ieee802_11_parse_elems @ 00015958 size=24 ===== */

void ieee802_11_parse_elems(void)

{
  atbm_ieee802_11_parse_elems_crc();
  return;
}



/* ===== atbm_skip_space @ 00015970 size=62 ===== */

byte * atbm_skip_space(byte *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = param_1 + param_2;
  if ((0 < param_2) && (param_1 != (byte *)0x0)) {
    do {
      pbVar1 = param_1 + 1;
      uVar2 = *param_1 - 10 & 0xff;
      if ((0x16 < uVar2) || ((~(DAT_000159b0 >> uVar2) & 1) != 0)) {
        if (param_1 == pbVar3) {
          return (byte *)0x0;
        }
        return param_1;
      }
      param_1 = pbVar1;
    } while (pbVar3 != pbVar1);
  }
  return (byte *)0x0;
}



/* ===== atbm_module_attr_echo_disable @ 000159b4 size=42 ===== */

undefined4 atbm_module_attr_echo_disable(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    *DAT_000159ec = 0;
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else {
    uVar1 = 0;
    if ((*DAT_000159e0 & 1) != 0) {
      printk(DAT_000159e8,DAT_000159e4,param_3,param_2,param_4);
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== atbm_module_config_ifname @ 000159f0 size=126 ===== */

undefined4 atbm_module_config_ifname(void *param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  int extraout_r2;
  uint uVar4;
  uint extraout_r3;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  
  puVar2 = DAT_00015a70;
  uVar4 = *DAT_00015a70;
  iVar3 = uVar4 << 0xb;
  pvVar6 = param_1;
  iVar7 = param_2;
  if (iVar3 < 0) {
    printk(DAT_00015a78,DAT_00015a74,param_1,param_2,param_1,param_2);
    iVar3 = extraout_r2;
    uVar4 = extraout_r3;
  }
  if (param_3 == (void *)0x0) {
    if ((int)(*puVar2 << 0x1f) < 0) {
      printk(DAT_00015a7c,DAT_00015a74,0,*puVar2 << 0x1f,pvVar6,iVar7);
    }
  }
  else {
    if (*(char *)((int)param_3 + 0x10) == '\0') {
      uVar5 = param_2 - (int)param_1 & 0xff;
      if (uVar5 < 0x11) {
        memcpy(param_3,param_1,uVar5);
        *(char *)((int)param_3 + 0x10) = (char)(param_2 - (int)param_1);
        return 1;
      }
      uVar5 = *puVar2;
      uVar1 = DAT_00015a84;
    }
    else {
      uVar5 = *puVar2;
      uVar1 = DAT_00015a80;
    }
    if ((uVar5 & 1) != 0) {
      printk(uVar1,DAT_00015a74,iVar3,uVar4,pvVar6,iVar7);
    }
  }
  return 0;
}



/* ===== atbm_store_cmd_echo_done @ 00015a88 size=88 ===== */

void atbm_store_cmd_echo_done
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    printk(DAT_00015ae0,*param_1,param_3,0,param_4);
    atbm_store_cmd_is_ready(param_1);
  }
  else {
    iVar2 = param_1[0xc];
    piVar1 = (int *)param_1[0xd];
    *(int **)(iVar2 + 4) = piVar1;
    *piVar1 = iVar2;
    param_1[0xc] = 0x100;
    param_1[0xd] = 0x122;
    *(int *)(DAT_00015aec + 8) = *(int *)(DAT_00015aec + 8) + -1;
  }
  iVar2 = param_1[2];
  param_1[2] = 0;
  if (iVar2 != 0) {
    synchronize_rcu();
    kfree(iVar2);
    printk(DAT_00015ae8,DAT_00015ae4,iVar2);
  }
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  return;
}



/* ===== atbm_store_cmd_deinit_show @ 00015af0 size=50 ===== */

void atbm_store_cmd_deinit_show(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  if (iVar1 != 0) {
    synchronize_rcu();
    kfree(iVar1);
    if (*DAT_00015b24 << 0xb < 0) {
      printk(DAT_00015b2c,DAT_00015b28,iVar1);
      return;
    }
  }
  return;
}



/* ===== atbm_module_attr_example @ 00015b30 size=148 ===== */

undefined4
atbm_module_attr_example(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x24) != 1) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 < *(int *)(param_1 + 0x20)) {
        snprintf((char *)(*(int *)(param_1 + 0x18) + iVar1),*(int *)(param_1 + 0x20) - iVar1,
                 DAT_00015bd4,iVar1,param_4);
        iVar1 = *(int *)(param_1 + 0x1c) + 0x18;
        *(int *)(param_1 + 0x1c) = iVar1;
        if (*(int *)(param_1 + 0x20) <= iVar1) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x24) = 1;
        }
        goto LAB_00015b58;
      }
    }
    if (*DAT_00015bc4 << 0xb < 0) {
      printk(DAT_00015bc8,*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x1c));
    }
  }
LAB_00015b58:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x24) != 1) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 < *(int *)(param_1 + 0x20)) {
        snprintf((char *)(*(int *)(param_1 + 0x18) + iVar1),*(int *)(param_1 + 0x20) - iVar1,
                 DAT_00015bd8,iVar1,param_4);
        iVar1 = *(int *)(param_1 + 0x1c) + 1;
        *(int *)(param_1 + 0x1c) = iVar1;
        if (*(int *)(param_1 + 0x20) <= iVar1) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x24) = 1;
        }
        goto LAB_00015b7c;
      }
    }
    if (*DAT_00015bc4 << 0xb < 0) {
      printk(DAT_00015bc8,*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x1c));
    }
  }
LAB_00015b7c:
  printk(DAT_00015bd0,DAT_00015bcc);
  return 1;
}



/* ===== atbm_module_attr_default_show @ 00015bdc size=100 ===== */

/* WARNING: Removing unreachable block (ram,0x00015c02) */
/* WARNING: Removing unreachable block (ram,0x00015c0a) */

int atbm_module_attr_default_show(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int local_1c;
  
  local_1c = 0;
  if ((param_3 != 0) && (param_2 != (char *)0x0)) {
    iVar1 = snprintf(param_2,0x1000,*(char **)(param_1 + 0x18));
    if (iVar1 < 0) {
      printk(DAT_00015c48,0x1000,0);
    }
    else {
      local_1c = iVar1;
      if (0x1000 < iVar1) {
        local_1c = 0x1000;
      }
    }
  }
  return local_1c;
}



/* ===== atbm_module_attr_help @ 00015c4c size=208 ===== */

undefined4 atbm_module_attr_help(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char *__format;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x24) != 1) {
      iVar4 = *(int *)(param_1 + 0x1c);
      if (iVar4 < *(int *)(param_1 + 0x20)) {
        snprintf((char *)(*(int *)(param_1 + 0x18) + iVar4),*(int *)(param_1 + 0x20) - iVar4,
                 DAT_00015d30,iVar4,param_1,param_2,param_3);
        iVar4 = *(int *)(param_1 + 0x1c) + 0x1a;
        *(int *)(param_1 + 0x1c) = iVar4;
        if (*(int *)(param_1 + 0x20) <= iVar4) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x24) = 1;
        }
        goto LAB_00015c76;
      }
    }
    if (*DAT_00015d1c << 0xb < 0) {
      printk(DAT_00015d20,*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x1c));
    }
  }
LAB_00015c76:
  __format = DAT_00015d38;
  uVar2 = DAT_00015d20;
  piVar1 = DAT_00015d1c;
  iVar4 = 0;
  puVar5 = DAT_00015d24;
  do {
    if (*(int *)(param_1 + 0x18) != 0) {
      if (*(int *)(param_1 + 0x24) != 1) {
        iVar3 = *(int *)(param_1 + 0x1c);
        if (iVar3 < *(int *)(param_1 + 0x20)) {
          iVar3 = snprintf((char *)(iVar3 + *(int *)(param_1 + 0x18)),
                           *(int *)(param_1 + 0x20) - iVar3,__format,*puVar5,puVar5[1],param_2,
                           param_3);
          if (iVar3 < 0) {
            *(undefined4 *)(param_1 + 0x24) = 1;
            printk(DAT_00015d34,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c));
          }
          else {
            iVar3 = iVar3 + *(int *)(param_1 + 0x1c);
            *(int *)(param_1 + 0x1c) = iVar3;
            if (*(int *)(param_1 + 0x20) <= iVar3) {
              *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x20);
              *(undefined4 *)(param_1 + 0x24) = 1;
            }
          }
          goto LAB_00015cac;
        }
      }
      if (*piVar1 << 0xb < 0) {
        printk(uVar2,*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x1c));
      }
    }
LAB_00015cac:
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 0xe;
    if (iVar4 == 5) {
      printk(DAT_00015d2c,DAT_00015d28);
      return 1;
    }
  } while( true );
}



/* ===== atbm_module_show_backup_info @ 00015d3c size=56 ===== */

uint atbm_module_show_backup_info(undefined4 param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *__src;
  uint uVar2;
  
  iVar1 = DAT_00015d74;
  mutex_lock(DAT_00015d74 + 0xc);
  __src = *(void **)(iVar1 + 0x18);
  if (__src == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x1c);
    if (uVar2 != 0) {
      if (0x1000 < uVar2) {
        uVar2 = 0x1000;
      }
      memcpy(param_3,__src,0x1000);
    }
  }
  mutex_unlock(DAT_00015d78);
  return uVar2;
}



/* ===== atbm_accsii_to_int.part.0 @ 00015d7c size=66 ===== */

undefined4 atbm_accsii_to_int_part_0(char *param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == '-') {
    if (param_2 == 1) {
      return 0;
    }
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  iVar2 = 0;
  while( true ) {
    if (param_2 <= iVar3) {
      if (*param_1 == '-') {
        iVar2 = -iVar2;
      }
      *param_3 = iVar2;
      return 1;
    }
    pbVar1 = (byte *)(param_1 + iVar3);
    if (9 < *pbVar1 - 0x30) break;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 * 10 + (uint)*pbVar1 + -0x30;
  }
  return 0;
}



/* ===== atbm_string_parase_echo @ 00015dbe size=114 ===== */

undefined4 atbm_string_parase_echo(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *DAT_00015e30 & 0x100000;
  if (param_1 < param_2) {
    if ((int)param_2 - (int)param_1 == 6) {
      iVar1 = memcmp(DAT_00015e3c,param_1,6);
      if (iVar1 == 0) {
        if (uVar2 != 0) {
          printk(DAT_00015e40,DAT_00015e34);
        }
        *(undefined1 *)(param_3 + 0x14) = 1;
        return 1;
      }
    }
    else if (((int)param_2 - (int)param_1 == 7) &&
            (iVar1 = memcmp(DAT_00015e44,param_1,7), iVar1 == 0)) {
      if (uVar2 != 0) {
        printk(DAT_00015e48,DAT_00015e34);
      }
      *(undefined1 *)(param_3 + 0x14) = 0;
      return 1;
    }
    if (uVar2 == 0) {
      return 0;
    }
    printk(DAT_00015e4c,DAT_00015e34,param_1);
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    printk(DAT_00015e38,DAT_00015e34);
  }
  return 0;
}



/* ===== atbm_module_show_system_info @ 00015e50 size=2410 ===== */

/* WARNING: Removing unreachable block (ram,0x000163ce) */
/* WARNING: Removing unreachable block (ram,0x00015e9c) */
/* WARNING: Removing unreachable block (ram,0x00015ed2) */
/* WARNING: Removing unreachable block (ram,0x00015eda) */
/* WARNING: Removing unreachable block (ram,0x00015ef8) */
/* WARNING: Removing unreachable block (ram,0x00015f00) */

int atbm_module_show_system_info(undefined4 param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int local_1c;
  
  bVar1 = false;
  local_1c = 0;
  if (*DAT_00015eac == 0) {
    if (param_3 != (char *)0x0) {
      local_1c = 0x26;
      snprintf(param_3,0x1000,DAT_00015eb8);
    }
  }
  else {
    iVar4 = *DAT_00015eac;
    if (param_3 != (char *)0x0) {
      snprintf(param_3,0x1000,DAT_000163e8,1);
      local_1c = snprintf(param_3 + 0x18,0xfe8,DAT_00016668,(uint)*(ushort *)(iVar4 + 0xfa));
      local_1c = local_1c + 0x18;
      bVar1 = 0xfff < local_1c;
      if (bVar1) {
        local_1c = 0x1000;
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x15;
        snprintf(pcVar2,sVar3,DAT_0001666c);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016670,(*(uint *)(iVar4 + 0xf0) & 3) >> 1);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016674,(*(uint *)(iVar4 + 0xf0) & 7) >> 2);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016678,(*(uint *)(iVar4 + 0xf0) & 0xf) >> 3);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_0001667c,(*(uint *)(iVar4 + 0xf0) & 0x1f) >> 4);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016680,(*(uint *)(iVar4 + 0xf0) & 0x3f) >> 5);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016684,(*(uint *)(iVar4 + 0xf0) & 0x7f) >> 6);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016688,(*(uint *)(iVar4 + 0xf0) & 0xff) >> 7);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_0001668c,(*(uint *)(iVar4 + 0xf0) & 0x1ff) >> 8);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016690,*(ushort *)(iVar4 + 0xf2) & 1);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016694,(*(uint *)(iVar4 + 0xf0) & 0x3ff) >> 9);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016698,(*(uint *)(iVar4 + 0xf0) & 0x7ff) >> 10);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_0001669c,(*(uint *)(iVar4 + 0xf0) & 0xfff) >> 0xb);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_000166a0,(*(uint *)(iVar4 + 0xf0) & 0x1fff) >> 0xc);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00016148 << 0xb < 0) {
          printk(DAT_0001614c,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_000166a4,(*(uint *)(iVar4 + 0xf0) & 0x3fff) >> 0xd);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_000166a8,(*(uint *)(iVar4 + 0xf0) & 0x7fff) >> 0xe);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_000166ac,(*(uint *)(iVar4 + 0xf0) & 0xffff) >> 0xf);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_000166b0,(*(uint *)(iVar4 + 0xf0) & 0xfffff) >> 0x13);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016838,(*(uint *)(iVar4 + 0xf0) & 0x1fffff) >> 0x14);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_0001683c,(*(uint *)(iVar4 + 0xf0) & 0x7ffffff) >> 0x1a);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x10;
        snprintf(pcVar2,sVar3,DAT_00016840,(*(uint *)(iVar4 + 0xf0) & 0xfffffff) >> 0x1b);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x1a;
        snprintf(pcVar2,sVar3,DAT_00016844,(*(uint *)(iVar4 + 0xf0) & 0x3ffff) >> 0x11);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x1a;
        snprintf(pcVar2,sVar3,DAT_00016848,(*(uint *)(iVar4 + 0xf0) & 0x3fffff) >> 0x15);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x1a;
        snprintf(pcVar2,sVar3,DAT_0001684c,(*(uint *)(iVar4 + 0xf0) & 0x7fffff) >> 0x16);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x1a;
        snprintf(pcVar2,sVar3,DAT_00016850,(*(uint *)(iVar4 + 0xf0) & 0xffffff) >> 0x17);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x1a;
        snprintf(pcVar2,sVar3,DAT_00016854,*(byte *)(iVar4 + 0xf3) & 1);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x1a;
        snprintf(pcVar2,sVar3,DAT_00016858,(*(uint *)(iVar4 + 0xf0) & 0x3ffffff) >> 0x19);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        pcVar2 = param_3 + local_1c;
        local_1c = local_1c + 0x14;
        snprintf(pcVar2,sVar3,DAT_0001685c);
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        snprintf(param_3 + local_1c,0x1000 - local_1c,DAT_00016864,DAT_00016860);
        local_1c = local_1c + 0x13;
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_000163d8 << 0xb < 0) {
          printk(DAT_000163dc,bVar1,0x1000,local_1c);
        }
      }
      else {
        snprintf(param_3 + local_1c,0x1000 - local_1c,DAT_0001686c,DAT_00016868);
        local_1c = local_1c + 0x12;
        if (0xfff < local_1c) {
          local_1c = 0x1000;
          bVar1 = true;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      if ((bVar1 == true) || (0xfff < local_1c)) {
        if (*DAT_00015eb0 << 0xb < 0) {
          printk(DAT_00015eb4,bVar1,0x1000,local_1c);
        }
      }
      else {
        sVar3 = 0x1000 - local_1c;
        param_3 = param_3 + local_1c;
        local_1c = local_1c + 0x16;
        snprintf(param_3,sVar3,DAT_000163e4,DAT_000163e0);
        if (0x1000 < local_1c) {
          local_1c = 0x1000;
        }
      }
    }
  }
  return local_1c;
}



/* ===== kzalloc.constprop.9 @ 00016870 size=8 ===== */

void kzalloc_constprop_9(undefined4 param_1)

{
  __kmalloc(param_1,0xdc0);
  return;
}



/* ===== atbm_module_cmd_show @ 00016878 size=148 ===== */

size_t atbm_module_cmd_show(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  void *__src;
  void *__dest;
  size_t __n;
  size_t __n_00;
  int iVar2;
  
  __n_00 = 0;
  mutex_lock(DAT_0001690c);
  __src = (void *)kzalloc_constprop_9(0x1000);
  piVar1 = DAT_00016910;
  while ((int *)*piVar1 != piVar1) {
    iVar2 = *piVar1;
    if ((((*(code **)(iVar2 + -0x20) != (code *)0x0) &&
         (__n = (**(code **)(iVar2 + -0x20))(iVar2 + -0x30,__src,__src != (void *)0x0),
         __src != (void *)0x0)) && (__n != 0)) && (__n_00 + __n < 0x1000)) {
      memcpy((void *)(param_3 + __n_00),__src,__n);
      __n_00 = __n_00 + __n;
    }
    atbm_store_cmd_echo_done(iVar2 + -0x30);
    atbm_store_cmd_deinit_show(iVar2 + -0x18);
  }
  if ((__n_00 != 0) && (__src != (void *)0x0)) {
    __dest = memset((void *)piVar1[6],0,0x1000);
    memcpy(__dest,__src,__n_00);
    piVar1[7] = __n_00;
  }
  mutex_unlock(DAT_0001690c);
  if (__src != (void *)0x0) {
    kfree(__src);
  }
  return __n_00;
}



/* ===== atbm_module_config_channels @ 00016914 size=238 ===== */

/* WARNING: Type propagation algorithm not settling */

int atbm_module_config_channels(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_24 [2];
  
  piVar2 = DAT_00016a04;
  local_24[0] = 0;
  iVar6 = *param_3;
  if (*DAT_00016a04 << 0xb < 0) {
    printk(DAT_00016a0c,DAT_00016a08,param_1,param_2,param_1);
  }
  if (param_3 == (int *)0x0) {
    if (-1 < *piVar2 << 0x1f) {
      return 0;
    }
    uVar5 = 0;
    uVar3 = DAT_00016a10;
  }
  else {
    uVar5 = (uint)*(byte *)(param_3 + 1);
    if (uVar5 < 0x12) {
      if (1 < (param_2 - param_1) - 1U) {
        iVar6 = *piVar2;
        uVar3 = DAT_00016a18;
joined_r0x000169b0:
        if (-1 < iVar6 << 0x1f) {
          return 0;
        }
        printk(uVar3,DAT_00016a08);
        return 0;
      }
      if ((iVar6 == 0) || (uVar5 == 0)) {
        iVar6 = kzalloc_constprop_9(1);
        if (iVar6 == 0) {
          iVar6 = *piVar2;
          uVar3 = DAT_00016a20;
          goto joined_r0x000169b0;
        }
      }
      else {
        iVar6 = krealloc(*param_3,uVar5 + 1,0xcc0);
        if (iVar6 == 0) {
          iVar6 = *piVar2;
          uVar3 = DAT_00016a1c;
          goto joined_r0x000169b0;
        }
      }
      *param_3 = iVar6;
      bVar1 = *(byte *)(param_3 + 1);
      iVar4 = atbm_accsii_to_int_part_0(param_1,param_2 - param_1,local_24);
      if (iVar4 == 0) {
        if (-1 < *piVar2 << 0x1f) {
          return 0;
        }
        printk(DAT_00016a24,DAT_00016a08,local_24[0]);
        return 0;
      }
      if ((int)local_24[0] < 0x33) {
        *(char *)(param_3 + 1) = (char)param_3[1] + '\x01';
        *(char *)(iVar6 + (uint)bVar1) = (char)local_24[0];
        return iVar4;
      }
      iVar6 = *piVar2;
      uVar3 = DAT_00016a24;
      uVar5 = local_24[0];
    }
    else {
      iVar6 = *piVar2;
      uVar3 = DAT_00016a14;
    }
    if (-1 < iVar6 << 0x1f) {
      return 0;
    }
  }
  printk(uVar3,DAT_00016a08,uVar5);
  return 0;
}



/* ===== atbm_module_config_ssids @ 00016a28 size=212 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 atbm_module_config_ssids(void *param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  size_t __n;
  
  piVar1 = DAT_00016afc;
  iVar7 = *param_3;
  pvVar8 = param_1;
  iVar6 = param_2;
  if (*DAT_00016afc << 0xb < 0) {
    printk(DAT_00016b04,DAT_00016b00,param_1,param_2,param_1,param_2);
  }
  if (param_3 == (int *)0x0) {
    iVar7 = *piVar1;
    if (-1 < iVar7 << 0x1f) {
      return 0;
    }
    bVar4 = 0;
    uVar3 = DAT_00016b08;
  }
  else {
    bVar4 = *(byte *)(param_3 + 1);
    if (bVar4 < 2) {
      __n = param_2 - (int)param_1;
      if (__n - 1 < 0x20) {
        if ((iVar7 == 0) || (bVar4 == 0)) {
          iVar7 = kzalloc_constprop_9(0x21);
          if (iVar7 != 0) goto LAB_00016ac8;
          iVar6 = *piVar1;
          uVar3 = DAT_00016b18;
        }
        else {
          iVar7 = krealloc(*param_3,0x42,0xcc0,__n - 1,pvVar8);
          if (iVar7 != 0) {
LAB_00016ac8:
            *param_3 = iVar7;
            pvVar8 = (void *)((uint)*(byte *)(param_3 + 1) * 0x21 + iVar7);
            memcpy(pvVar8,param_1,__n);
            *(char *)((int)pvVar8 + 0x20) = (char)__n;
            uVar2 = DAT_00016b1c;
            uVar3 = DAT_00016b00;
            cVar5 = (char)param_3[1] + '\x01';
            *(char *)(param_3 + 1) = cVar5;
            printk(uVar2,uVar3,pvVar8,*(undefined1 *)((int)pvVar8 + 0x20),cVar5,iVar6);
            return 1;
          }
          iVar6 = *piVar1;
          uVar3 = DAT_00016b14;
        }
      }
      else {
        iVar6 = *piVar1;
        uVar3 = DAT_00016b10;
      }
      if (-1 < iVar6 << 0x1f) {
        return 0;
      }
      printk(uVar3,DAT_00016b00);
      return 0;
    }
    iVar7 = *piVar1;
    uVar3 = DAT_00016b0c;
    if (-1 < iVar7 << 0x1f) {
      return 0;
    }
  }
  printk(uVar3,DAT_00016b00,bVar4,iVar7,pvVar8,iVar6);
  return 0;
}



/* ===== atbm_module_config_macs @ 00016b20 size=336 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 atbm_module_config_macs(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int extraout_r3;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  
  puVar3 = DAT_00016c70;
  iVar11 = *param_3;
  iVar9 = *DAT_00016c70 << 0xb;
  iVar13 = param_1;
  iVar14 = param_2;
  if (iVar9 < 0) {
    printk(DAT_00016c78,DAT_00016c74,param_1,param_2,param_1,param_2);
    iVar9 = extraout_r3;
  }
  if (param_3 == (int *)0x0) {
    uVar10 = *puVar3;
    if (-1 < (int)(uVar10 << 0x1f)) {
      return 0;
    }
    uVar7 = 0;
    uVar5 = DAT_00016c7c;
  }
  else {
    if (param_2 - param_1 == 0x11) {
      uVar7 = (uint)*(byte *)(param_3 + 1);
      if (uVar7 < 8) {
        if ((uVar7 == 0) || (iVar11 == 0)) {
          iVar9 = kzalloc_constprop_9(0x10);
          if (iVar9 == 0) {
            uVar7 = *puVar3;
            uVar5 = DAT_00016c8c;
            goto joined_r0x00016bbc;
          }
        }
        else {
          iVar9 = krealloc(*param_3,(uVar7 + 1) * 0x10,0xcc0,iVar9,iVar13);
          if (iVar9 == 0) {
            uVar7 = *puVar3;
            uVar5 = DAT_00016c88;
joined_r0x00016bbc:
            if (-1 < (int)(uVar7 << 0x1f)) {
              return 0;
            }
            printk(uVar5,DAT_00016c74);
            return 0;
          }
        }
        pbVar12 = (byte *)(param_1 + -1);
        uVar10 = 0;
        uVar8 = 0;
        *param_3 = iVar9;
        iVar9 = iVar9 + (uint)*(byte *)(param_3 + 1) * 0x10;
        do {
          pbVar12 = pbVar12 + 1;
          uVar7 = (uint)*pbVar12;
          if (uVar7 != 0x3a) {
            if (uVar10 < 6) {
              if (uVar8 < 2) {
                cVar6 = (char)(uVar7 - 0x30);
                if (9 < (uVar7 - 0x30 & 0xff)) {
                  if (uVar7 - 0x61 < 6) {
                    cVar6 = -0x57;
                  }
                  else {
                    if (5 < uVar7 - 0x41) {
                      uVar10 = *puVar3;
                      uVar5 = DAT_00016c9c;
                      uVar8 = uVar10 << 0x1f;
                      goto joined_r0x00016c02;
                    }
                    cVar6 = -0x37;
                  }
                  cVar6 = *pbVar12 + cVar6;
                }
                uVar8 = uVar8 + 1 & 0xff;
                *(char *)(iVar9 + uVar10) = cVar6 + *(char *)(iVar9 + uVar10) * '\x10';
                goto LAB_00016be4;
              }
              uVar10 = *puVar3;
              uVar5 = DAT_00016c98;
              uVar2 = uVar10;
            }
            else {
              uVar8 = uVar10;
              uVar5 = DAT_00016c94;
              uVar2 = *puVar3;
            }
            uVar7 = uVar8;
            uVar8 = uVar2 << 0x1f;
            goto joined_r0x00016c02;
          }
          uVar8 = 0;
          uVar10 = uVar10 + 1 & 0xff;
LAB_00016be4:
          uVar4 = DAT_00016ca0;
          uVar5 = DAT_00016c74;
        } while (pbVar12 != (byte *)(param_1 + 0x10));
        if (uVar10 == 5) {
          bVar1 = *(byte *)(param_3 + 1);
          *(char *)(param_3 + 1) = (char)(bVar1 + 1);
          printk(uVar4,uVar5,iVar9,bVar1 + 1,iVar13,iVar14);
          return 1;
        }
        uVar7 = uVar10;
        uVar5 = DAT_00016c90;
        uVar8 = *puVar3 << 0x1f;
      }
      else {
        uVar10 = *puVar3 << 0x1f;
        uVar5 = DAT_00016c84;
        uVar8 = uVar10;
      }
    }
    else {
      uVar10 = *puVar3;
      uVar7 = param_2 - param_1;
      uVar5 = DAT_00016c80;
      uVar8 = uVar10 << 0x1f;
    }
joined_r0x00016c02:
    if (-1 < (int)uVar8) {
      return 0;
    }
  }
  printk(uVar5,DAT_00016c74,uVar7,uVar10,iVar13,iVar14);
  return 0;
}



/* ===== atbm_module_config_ascii @ 00016ca4 size=106 ===== */

undefined4 atbm_module_config_ascii(void *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint __n;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = DAT_00016d10;
  pvVar2 = param_1;
  iVar4 = param_2;
  puVar5 = param_3;
  if (*DAT_00016d10 << 0xb < 0) {
    printk(DAT_00016d18,DAT_00016d14,param_1,param_2,param_1,param_2,param_3);
  }
  if (param_3 == (undefined4 *)0x0) {
    iVar3 = *piVar1;
    if (iVar3 << 0x1f < 0) {
      printk(DAT_00016d1c,DAT_00016d14,0,iVar3,pvVar2,iVar4,puVar5);
    }
  }
  else if (param_3[1] == 0) {
    __n = param_2 - (int)param_1 & 0xff;
    pvVar2 = (void *)kzalloc_constprop_9(__n);
    *param_3 = pvVar2;
    if (pvVar2 != (void *)0x0) {
      memcpy(pvVar2,param_1,__n);
      param_3[1] = __n;
      return 1;
    }
  }
  else if (*piVar1 << 0x1f < 0) {
    printk(DAT_00016d20,DAT_00016d14);
  }
  return 0;
}



/* ===== atbm_module_cmd_store @ 00016d24 size=798 ===== */

int atbm_module_cmd_store(undefined4 param_1,undefined4 param_2,void *param_3,int param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  char *__s1;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  int iVar9;
  uint uVar10;
  char *__s2;
  int *piVar11;
  size_t sVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  
  mutex_lock(DAT_00016ff8);
  __s1 = (char *)atbm_skip_space(param_3,param_4);
  if (__s1 == (char *)0x0) {
    printk(DAT_00017000,DAT_00016ffc,param_3);
    goto LAB_00016d4a;
  }
  sVar12 = param_4 - ((int)__s1 - (int)param_3);
  pvVar5 = memchr(param_3,0x20,sVar12);
  if (((pvVar5 == (void *)0x0) && (pvVar5 = memchr(param_3,0xd,sVar12), pvVar5 == (void *)0x0)) &&
     (pvVar5 = memchr(param_3,10,sVar12), pvVar5 == (void *)0x0)) {
    printk(DAT_00017004,DAT_00016ffc);
    sVar8 = sVar12;
  }
  else {
    sVar8 = (int)pvVar5 - (int)__s1;
  }
  piVar3 = DAT_0001701c;
  uVar6 = DAT_00017008;
  if ((0 < (int)sVar8) && (iVar14 = sVar12 - sVar8, uVar6 = DAT_0001700c, -1 < iVar14)) {
    uVar6 = DAT_00017014;
    if ((int)sVar8 < 0x21) {
      sVar12 = 0;
      do {
        uVar10 = sVar12;
        if (__s1[sVar12] == ' ') goto LAB_00016e00;
        sVar12 = sVar12 + 1;
      } while (sVar8 != sVar12);
      goto LAB_00016dd4;
    }
    goto LAB_00016db6;
  }
  goto LAB_00016d9c;
LAB_00016e00:
  uVar6 = DAT_00017028;
  if (sVar8 <= uVar10) goto code_r0x00016e04;
  if (__s1[uVar10] != ' ') goto LAB_00016db6;
  uVar10 = uVar10 + 1;
  goto LAB_00016e00;
code_r0x00016e04:
  if (sVar12 != 0) {
LAB_00016dd4:
    iVar7 = full_name_hash(0,__s1,sVar12);
    for (piVar13 = (int *)piVar3[((uint)(DAT_00017020 * iVar7) >> 0x1c) + 8]; uVar6 = DAT_00017024,
        piVar13 != (int *)0x0; piVar13 = (int *)*piVar13) {
      __s2 = (char *)piVar13[-10];
      iVar7 = strncmp(__s1,__s2,sVar12);
      if ((iVar7 == 0) && (sVar8 = strlen(__s2), sVar8 == sVar12)) {
        iVar7 = (int)(piVar13 + -10);
        uVar6 = DAT_00017018;
        if (iVar7 == 0) goto LAB_00016d9c;
        if (piVar13[-7] == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(2,0x16e46);
          (*pcVar1)();
        }
        iVar9 = atbm_skip_space(pvVar5,iVar14);
        iVar15 = 0;
        if ((iVar9 != 0) &&
           (iVar15 = iVar14 - (iVar9 - (int)pvVar5), uVar6 = DAT_0001702c, iVar15 < 0))
        goto LAB_00016d9c;
        iVar14 = piVar13[-4];
        if ((iVar14 == 0) &&
           (iVar14 = kzalloc_constprop_9(0x1000), uVar6 = DAT_00017038, iVar14 == 0))
        goto LAB_00016d9c;
        piVar13[-4] = 0;
        piVar13[-3] = 0;
        piVar13[-2] = 0;
        piVar13[-1] = 0;
        puVar4 = DAT_0001704c;
        piVar13[-3] = 0;
        piVar13[-2] = 0x1000;
        piVar13[-1] = 0;
        uVar2 = *puVar4;
        piVar13[-4] = iVar14;
        *(undefined1 *)(piVar13 + -5) = uVar2;
        iVar14 = (*(code *)piVar13[-7])(iVar7,iVar9,iVar15);
        if (iVar14 != 0) {
          if (*(char *)(piVar13 + -5) == '\0') {
            if ((code *)piVar13[-6] != (code *)0x0) {
              (*(code *)piVar13[-6])(iVar7,0);
            }
            atbm_store_cmd_echo_done(iVar7);
            atbm_store_cmd_deinit_show(piVar13 + -4);
          }
          else {
            if (piVar13[-4] != 0) {
              if (piVar13[-1] != 1) {
                iVar14 = piVar13[-3];
                if (iVar14 < piVar13[-2]) {
                  iVar14 = snprintf((char *)(iVar14 + piVar13[-4]),piVar13[-2] - iVar14,DAT_00017044
                                    ,piVar13[-10],DAT_00017040);
                  if (iVar14 < 0) {
                    piVar13[-1] = 1;
                    printk(DAT_00017048,piVar13[-2],piVar13[-3]);
                  }
                  else {
                    iVar15 = piVar13[-3];
                    piVar13[-3] = iVar14 + iVar15;
                    if (piVar13[-2] <= iVar14 + iVar15) {
                      piVar13[-3] = piVar13[-2];
                      piVar13[-1] = 1;
                    }
                  }
                  goto LAB_00016f20;
                }
              }
              if (*DAT_00017030 << 0xb < 0) {
                printk(DAT_00017034,piVar13[-1],piVar13[-2],piVar13[-3]);
              }
            }
LAB_00016f20:
            if (*(char *)((int)piVar13 + -0x13) == '\0') {
              *(undefined1 *)((int)piVar13 + -0x13) = 1;
              iVar14 = *(int *)(puVar4 + 0x11c);
              if (((iVar14 != -1) && (iVar14 <= piVar3[2])) && ((int *)*piVar3 != piVar3)) {
                iVar14 = *piVar3;
                if (*(code **)(iVar14 + -0x20) != (code *)0x0) {
                  (**(code **)(iVar14 + -0x20))(iVar14 + -0x30,0);
                }
                atbm_store_cmd_echo_done(iVar14 + -0x30);
                atbm_store_cmd_deinit_show(iVar14 + -0x18);
              }
              piVar3[2] = piVar3[2] + 1;
              piVar11 = (int *)piVar3[1];
              piVar3[1] = (int)(piVar13 + 2);
              piVar13[2] = (int)piVar3;
              piVar13[3] = (int)piVar11;
              *piVar11 = (int)(piVar13 + 2);
            }
            else {
              printk(DAT_0001703c,piVar13[-10]);
              atbm_store_cmd_is_ready(iVar7);
            }
          }
          goto LAB_00016f36;
        }
        if ((*(char *)(piVar13 + -5) != '\0') && (piVar13[-4] != 0)) {
          if (piVar13[-1] != 1) {
            iVar14 = piVar13[-3];
            if (iVar14 < piVar13[-2]) {
              iVar14 = snprintf((char *)(iVar14 + piVar13[-4]),piVar13[-2] - iVar14,DAT_000170a4,
                                piVar13[-10],DAT_000170a0);
              if (iVar14 < 0) {
                piVar13[-1] = 1;
                printk(DAT_000170a8,piVar13[-2],piVar13[-3]);
              }
              else {
                iVar15 = piVar13[-3];
                piVar13[-3] = iVar14 + iVar15;
                if (piVar13[-2] <= iVar14 + iVar15) {
                  piVar13[-3] = piVar13[-2];
                  piVar13[-1] = 1;
                }
              }
              goto LAB_00016ee0;
            }
          }
          if (*DAT_00017030 << 0xb < 0) {
            printk(DAT_00017034,piVar13[-1],piVar13[-2],piVar13[-3]);
          }
        }
LAB_00016ee0:
        atbm_store_cmd_echo_done(iVar7);
        atbm_store_cmd_deinit_show(piVar13 + -4);
        goto LAB_00016d4a;
      }
    }
  }
LAB_00016db6:
  printk(uVar6,DAT_00017010,__s1);
  uVar6 = DAT_00017018;
LAB_00016d9c:
  printk(uVar6,DAT_00016ffc);
LAB_00016d4a:
  param_4 = -0x16;
LAB_00016f36:
  mutex_unlock(DAT_00016ff8);
  return param_4;
}



/* ===== atbm_module_echo_enable_num_echo @ 000170ac size=158 ===== */

int atbm_module_echo_enable_num_echo(int param_1,int param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  puVar1 = DAT_0001714c;
  iVar6 = param_1;
  iVar7 = param_2;
  piVar8 = param_3;
  if ((int)(*DAT_0001714c << 0xb) < 0) {
    printk(DAT_00017154,DAT_00017150,param_1,param_2,param_1,param_2,param_3);
  }
  if (param_3 == (int *)0x0) {
    if ((int)(*puVar1 << 0x1f) < 0) {
      printk(DAT_00017158,DAT_00017150,0,*puVar1,iVar6,iVar7,piVar8);
    }
    return 0;
  }
  if (*param_3 != -1) {
    if ((*puVar1 & 1) != 0) {
      printk(DAT_0001715c,DAT_00017150);
      return 0;
    }
    return 0;
  }
  uVar5 = (param_2 - param_1) - 1;
  if (4 < uVar5) {
    if ((*puVar1 & 1) != 0) {
      printk(DAT_00017160,DAT_00017150);
      return 0;
    }
    return 0;
  }
  iVar2 = atbm_accsii_to_int_part_0(param_1,param_2 - param_1,param_3,uVar5,iVar6);
  if (iVar2 == 0) {
    uVar5 = *puVar1;
    if (-1 < (int)(uVar5 << 0x1f)) goto LAB_00017130;
    iVar4 = *param_3;
    uVar3 = DAT_00017164;
  }
  else {
    iVar4 = *param_3;
    if (-2 < iVar4) {
      return iVar2;
    }
    uVar5 = *puVar1 << 0x1f;
    uVar3 = DAT_00017168;
    if (-1 < (int)uVar5) goto LAB_00017130;
  }
  printk(uVar3,DAT_00017150,iVar4,uVar5,iVar6,iVar7,piVar8);
LAB_00017130:
  *param_3 = -1;
  return 0;
}



/* ===== atbm_string_parase @ 0001716c size=1106 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4
atbm_string_parase(undefined4 param_1,undefined4 *param_2,int param_3,char *param_4,int param_5)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  uint *puVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  size_t sVar9;
  char *__s1;
  void *pvVar10;
  size_t sVar11;
  char *__s;
  char *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  char *pcVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int *piVar19;
  char *pcVar20;
  char *pcVar21;
  undefined1 auStack_88 [4];
  int local_84;
  int *local_80;
  undefined4 local_70;
  undefined4 local_6c;
  int aiStack_68 [17];
  
  memset(auStack_88,0,0x18);
  cVar6 = '\x10';
  local_70 = DAT_000173e0;
  piVar19 = aiStack_68;
  do {
    cVar6 = cVar6 + -1;
    *piVar19 = 0;
    piVar19 = piVar19 + 1;
  } while (cVar6 != '\0');
  local_6c = param_1;
  iVar7 = full_name_hash(0,DAT_000173dc,5);
  iVar18 = DAT_000173e4;
  uVar8 = (uint)(DAT_000173e4 * iVar7) >> 0x1c;
  local_80 = aiStack_68 + uVar8;
  local_84 = aiStack_68[uVar8];
  if (local_84 != 0) {
    *(int **)(local_84 + 4) = &local_84;
  }
  aiStack_68[uVar8] = (int)&local_84;
  puVar14 = param_2 + param_3 * 9;
  do {
    pcVar21 = (char *)*param_2;
    sVar9 = strlen(pcVar21);
    iVar7 = full_name_hash(0,pcVar21,sVar9);
    uVar8 = (uint)(iVar18 * iVar7) >> 0x1c;
    if (0x20 < sVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(2,0x171fa);
      (*pcVar1)();
    }
    iVar7 = aiStack_68[uVar8];
    for (piVar19 = (int *)iVar7; piVar19 != (int *)0x0; piVar19 = (int *)*piVar19) {
      __s1 = (char *)piVar19[-2];
      iVar13 = strncmp(__s1,pcVar21,sVar9);
      if ((iVar13 == 0) && (sVar11 = strlen(__s1), sVar9 == sVar11)) {
        uVar8 = *DAT_000173e8;
        uVar17 = DAT_000173f8;
        goto joined_r0x00017294;
      }
    }
    param_2[2] = iVar7;
    if (iVar7 != 0) {
      *(undefined4 **)(iVar7 + 4) = param_2 + 2;
    }
    aiStack_68[uVar8] = (int)(param_2 + 2);
    param_2[3] = aiStack_68 + uVar8;
    if ((int)(*DAT_000173e8 << 0xb) < 0) {
      printk(DAT_000173f0,DAT_000173ec,*param_2,uVar8);
    }
    param_2 = param_2 + 9;
  } while (param_2 != puVar14);
  if ((int)(*DAT_000173e8 << 0xb) < 0) {
    printk(DAT_000173f4,DAT_000173ec,param_5,param_4);
  }
  puVar4 = DAT_000173e8;
  pcVar15 = param_4 + param_5;
  pcVar21 = param_4;
  if (param_4 < pcVar15) {
    while( true ) {
      __s1 = (char *)atbm_skip_space(pcVar21,(int)pcVar15 - (int)pcVar21);
      if (__s1 == (char *)0x0) break;
      if ((*DAT_000173e8 & 0x100000) != 0) {
        printk(DAT_00017400,DAT_000173ec,(int)pcVar15 - (int)__s1,__s1);
      }
      cVar6 = *__s1;
      if (((cVar6 == '\0') || (cVar6 == '\n')) || (cVar6 == '\r')) {
        iVar18 = (int)param_4 - (int)__s1;
        goto LAB_000172d6;
      }
      pvVar10 = memchr(__s1,0x3d,(int)pcVar15 - (int)__s1);
      if (pvVar10 == (void *)0x0) {
        printk(DAT_00017404,DAT_000173ec);
        return 0;
      }
      sVar9 = (int)pvVar10 + (1 - (int)__s1);
      if ((int)(*puVar4 << 0xb) < 0) {
        printk(DAT_00017408,DAT_000173ec,sVar9,__s1);
      }
      iVar7 = full_name_hash(0,__s1,sVar9);
      uVar5 = DAT_00017410;
      uVar8 = (uint)(iVar18 * iVar7) >> 0x1c;
      uVar17 = DAT_0001740c;
      if (aiStack_68 + uVar8 == (int *)0x0) {
LAB_00017356:
        printk(uVar17,DAT_000173ec);
        return 0;
      }
      piVar19 = (int *)aiStack_68[uVar8];
      while( true ) {
        uVar17 = DAT_00017414;
        if (piVar19 == (int *)0x0) goto LAB_000172a0;
        if ((int)(*puVar4 << 0xb) < 0) {
          pcVar21 = (char *)piVar19[-2];
          sVar11 = strlen(pcVar21);
          printk(uVar5,DAT_000173ec,pcVar21,sVar11,sVar9,__s1);
        }
        pcVar21 = (char *)piVar19[-2];
        iVar7 = strncmp(__s1,pcVar21,sVar9);
        if ((iVar7 == 0) && (sVar11 = strlen(pcVar21), sVar9 == sVar11)) break;
        piVar19 = (int *)*piVar19;
      }
      if (*(char *)(piVar19 + 2) != '\0') {
        uVar8 = *puVar4;
        __s1 = pcVar21;
        uVar17 = DAT_00017418;
joined_r0x00017294:
        if ((int)(uVar8 << 0xb) < 0) {
LAB_000172a0:
          printk(uVar17,DAT_000173ec,__s1);
        }
        return 0;
      }
      __s = (char *)atbm_skip_space((int)pvVar10 + 1,param_5 - (((int)pvVar10 + 1) - (int)param_4));
      uVar17 = DAT_0001741c;
      if (__s == (char *)0x0) goto LAB_00017356;
      *(undefined1 *)(piVar19 + 2) = 1;
      piVar19[-1] = (int)__s;
      sVar9 = (int)pcVar15 - (int)__s;
      piVar19[3] = sVar9;
      pcVar12 = __s;
      if ((*__s == '[') || (*__s == '<')) {
        do {
          if (pcVar15 <= pcVar12) goto LAB_000174a0;
          iVar7 = (int)pcVar15 - (int)pcVar12;
          if (iVar7 == 0) {
LAB_000175e6:
            uVar8 = *DAT_0001760c;
            uVar17 = DAT_00017630;
            goto joined_r0x0001758c;
          }
          if ((int)(*DAT_0001760c << 0xb) < 0) {
            printk(DAT_00017628,DAT_00017614,iVar7,pcVar12);
          }
          pcVar21 = pcVar12;
          iVar13 = 0;
          do {
            iVar16 = iVar13;
            pcVar20 = pcVar21;
            if (iVar7 <= iVar16) goto LAB_000175e6;
            cVar6 = *pcVar20;
            if ((cVar6 == ']') || (cVar6 == '>')) {
              uVar8 = *DAT_0001760c;
              uVar17 = DAT_0001762c;
              goto joined_r0x000175dc;
            }
            iVar13 = iVar16 + 1;
            if (cVar6 == '[') {
              cVar6 = ']';
              goto LAB_000174d8;
            }
            pcVar21 = pcVar20 + 1;
          } while (cVar6 != '<');
          cVar6 = '>';
LAB_000174d8:
          pcVar21 = pcVar12 + iVar13;
LAB_000174dc:
          if (iVar7 <= iVar13) goto LAB_000175e6;
          pcVar12 = pcVar21 + 1;
          cVar3 = *pcVar21;
          if ((cVar3 == '[') || (cVar3 == '<')) {
            uVar8 = *DAT_0001760c;
            uVar17 = DAT_00017618;
joined_r0x000175dc:
            if ((int)(uVar8 << 0xb) < 0) {
              printk(uVar17,DAT_00017614);
            }
            goto LAB_000175e6;
          }
          if (cVar3 != cVar6) goto code_r0x00017508;
          if ((pcVar20 == (char *)0x0) || (pcVar21 == (char *)0x0)) goto LAB_000175e6;
          if (iVar13 - iVar16 == 1) {
            uVar8 = *puVar4;
            uVar17 = DAT_0001761c;
            goto joined_r0x0001758c;
          }
          piVar19[4] = piVar19[4] + 1;
          if ((code *)piVar19[5] != (code *)0x0) {
            pcVar20 = pcVar20 + 1;
            iVar7 = (*(code *)piVar19[5])(pcVar20,pcVar21,piVar19[6]);
            if (iVar7 == 0) {
              if (-1 < (int)(*puVar4 << 0x1f)) {
                return 0;
              }
              printk(DAT_00017620,DAT_00017604,piVar19[-2],pcVar20,pcVar21,pcVar20);
              return 0;
            }
          }
          bVar2 = pcVar21[1];
        } while ((bVar2 == 0x5b) || (bVar2 == 0x3c));
        if ((bVar2 != 10) && ((bVar2 != 0xd && ((bVar2 & 0xdf) != 0)))) {
          uVar8 = *puVar4;
          uVar17 = DAT_00017624;
joined_r0x0001758c:
          if (-1 < (int)(uVar8 << 0x1f)) {
            return 0;
          }
          printk(uVar17,DAT_00017604,__s1);
          return 0;
        }
      }
      else {
        pcVar12 = memchr(__s,0x20,sVar9);
        if ((pcVar12 == (char *)0x0) && (pcVar12 = memchr(__s,0xd,sVar9), pcVar12 == (char *)0x0)) {
          pcVar12 = memchr(__s,10,sVar9);
        }
        if ((code *)piVar19[5] != (code *)0x0) {
          if (pcVar12 == (char *)0x0) {
            pcVar12 = pcVar15;
          }
          iVar7 = (*(code *)piVar19[5])(__s,pcVar12,piVar19[6]);
          if (iVar7 == 0) {
            if (-1 < (int)(*puVar4 << 0x1f)) {
              return 0;
            }
            printk(DAT_00017608,DAT_00017604,piVar19[-2],__s,pcVar12,pcVar12);
            return 0;
          }
        }
        piVar19[4] = 1;
      }
LAB_000174a0:
      pcVar21 = pcVar15;
      if (pcVar12 != (char *)0x0) {
        piVar19[3] = (int)pcVar12 - (int)__s;
        pcVar21 = pcVar12;
      }
      if ((int)(*DAT_0001760c << 0xb) < 0) {
        printk(DAT_00017610,piVar19[-2],piVar19[3],piVar19[-1]);
      }
    }
    if ((*DAT_000173e8 & 0x100000) != 0) {
      printk(DAT_000173fc,DAT_000173ec);
    }
    iVar18 = (int)pcVar21 - (int)param_4;
LAB_000172d6:
    uVar17 = 0;
    if (iVar18 != 0) {
      uVar17 = 1;
    }
  }
  else {
    uVar17 = 1;
  }
  return uVar17;
code_r0x00017508:
  iVar13 = iVar13 + 1;
  pcVar21 = pcVar12;
  goto LAB_000174dc;
}



/* ===== atbm_module_attr_set_ap_config @ 00017634 size=496 ===== */

void atbm_module_attr_set_ap_config(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_10c;
  undefined1 auStack_108 [24];
  undefined4 local_f0;
  undefined1 *puStack_ec;
  undefined4 local_e8;
  undefined4 local_cc;
  undefined1 **local_c8;
  undefined4 local_c4;
  undefined4 local_a8;
  void **local_a4;
  undefined4 local_a0;
  undefined4 local_84;
  undefined4 **local_80;
  undefined4 local_7c;
  undefined4 local_60;
  void **local_5c;
  undefined1 auStack_58 [16];
  char local_48;
  undefined1 *local_44;
  byte local_40;
  void *local_3c;
  byte local_38;
  undefined4 *local_34;
  byte local_30;
  void *local_2c;
  uint local_28;
  int local_24;
  
  piVar2 = DAT_00017874;
  local_24 = *DAT_00017874;
  rtnl_lock();
  iVar4 = atbm_skip_space(param_2,param_3);
  memset(auStack_58,0,0x34);
  if (iVar4 != 0) {
    memset(auStack_108,0,0xa8);
    local_10c = DAT_00017824;
    local_f0 = DAT_00017828;
    local_e8 = DAT_0001782c;
    local_cc = DAT_00017830;
    local_c8 = &local_44;
    local_c4 = DAT_00017834;
    local_a8 = DAT_00017838;
    local_a4 = &local_3c;
    local_a0 = DAT_0001783c;
    local_84 = DAT_00017840;
    local_80 = &local_34;
    local_7c = DAT_00017844;
    local_60 = DAT_00017848;
    local_5c = &local_2c;
    puStack_ec = auStack_58;
    iVar7 = atbm_string_parase(param_1,&local_10c,5,iVar4,param_3 - (iVar4 - param_2));
    puVar3 = DAT_00017878;
    if (iVar7 == 0) {
      printk(DAT_00017850,DAT_0001784c,iVar4);
      goto LAB_000176ce;
    }
    if (local_48 == '\0') {
      uVar5 = DAT_00017854;
      if ((int)(*DAT_00017878 << 0x1f) < 0) {
LAB_00017720:
        printk(uVar5,DAT_0001784c);
      }
      goto LAB_00017666;
    }
    rtnl_is_locked();
    iVar4 = __dev_get_by_name(DAT_00017858,auStack_58);
    if (iVar4 != 0) {
      uVar6 = *puVar3 & 1;
      if (iVar4 == *(int *)(iVar4 + 0x4e0)) {
        if (iVar4 != -0x4e0) {
          if (((1 < local_40) || (1 < local_38)) || (1 < local_30)) {
            uVar5 = DAT_00017868;
            if (uVar6 != 0) goto LAB_00017720;
            goto LAB_00017666;
          }
          if (local_40 == 0) {
            if (local_38 == 0) {
              if (local_30 == 0) {
                if (uVar6 != 0) {
                  printk(DAT_0001786c,DAT_0001784c);
                }
                goto LAB_000176ce;
              }
LAB_000177b0:
              *(undefined4 *)(iVar4 + 0x518) = *local_34;
              *(undefined2 *)(iVar4 + 0x51c) = *(undefined2 *)(local_34 + 1);
              if (local_40 != 0) goto LAB_000177c0;
              goto LAB_000177c8;
            }
            if (local_30 != 0) goto LAB_000177b0;
LAB_000177ca:
            bVar1 = *(byte *)((int)local_3c + 0x20);
            *(byte *)(iVar4 + 0x53e) = bVar1;
            memcpy((void *)(iVar4 + 0x51e),local_3c,(uint)bVar1);
          }
          else {
            if (local_30 != 0) goto LAB_000177b0;
LAB_000177c0:
            *(undefined1 *)(iVar4 + 0x580) = *local_44;
LAB_000177c8:
            if (local_38 != 0) goto LAB_000177ca;
          }
          if (local_28 == 0) {
            *(undefined1 *)(iVar4 + 0x582) = 0;
          }
          else {
            if (0x3e < (int)local_28) {
              local_28 = 0x3f;
            }
            *(char *)(iVar4 + 0x57f) = (char)local_28;
            memcpy((void *)(iVar4 + 0x53f),local_2c,local_28 & 0xff);
            *(undefined1 *)(iVar4 + 0x582) = 1;
          }
          if (uVar6 != 0) {
            printk(DAT_00017870,iVar4 + 0x518,iVar4 + 0x51e,*(undefined1 *)(iVar4 + 0x580));
          }
          goto LAB_000176ce;
        }
      }
      else {
        if (uVar6 == 0) goto LAB_00017666;
        printk(DAT_00017860,DAT_0001785c,auStack_58);
      }
    }
    if ((int)(*puVar3 << 0x1f) < 0) {
      printk(DAT_00017864,DAT_0001784c,auStack_58);
    }
  }
LAB_00017666:
  iVar7 = 0;
LAB_000176ce:
  rtnl_unlock();
  if (local_34 != (undefined4 *)0x0) {
    kfree();
  }
  if (local_44 != (undefined1 *)0x0) {
    kfree();
  }
  if (local_3c != (void *)0x0) {
    kfree();
  }
  if (local_2c != (void *)0x0) {
    kfree();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_24 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}



/* ===== atbm_module_attr_echo_enable @ 0001787c size=186 ===== */

undefined4 atbm_module_attr_echo_enable(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_44;
  undefined1 auStack_40 [24];
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = DAT_00017938;
  iVar4 = *(int *)(param_1 + 8);
  *DAT_00017938 = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (iVar4 != 0) {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      (**(code **)(param_1 + 0x10))(param_1,0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    synchronize_rcu();
    kfree(iVar4);
  }
  puVar2 = (undefined4 *)kzalloc_constprop_9(4);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar2 = 0xffffffff;
  *(undefined4 **)(param_1 + 8) = puVar2;
  iVar4 = atbm_skip_space(param_2,param_3);
  if (iVar4 != 0) {
    memset(auStack_40,0,0x18);
    local_44 = DAT_0001793c;
    local_28 = DAT_00017940;
    local_24 = *(undefined4 *)(param_1 + 8);
    iVar3 = atbm_string_parase(param_1,&local_44,1,iVar4,param_3 - (iVar4 - param_2));
    if (iVar3 == 0) {
      printk(DAT_00017948,DAT_00017944,iVar4);
      uVar5 = 0;
      goto LAB_00017906;
    }
  }
  iVar4 = *DAT_0001794c;
  *(undefined4 *)(puVar1 + 0x11c) = *puVar2;
  if (iVar4 << 0x1f < 0) {
    printk(DAT_00017950,DAT_00017944);
  }
  uVar5 = 1;
LAB_00017906:
  kfree(puVar2);
  *(undefined4 *)(param_1 + 8) = 0;
  return uVar5;
}



/* ===== atbm_module_attribute_init @ 00017954 size=210 ===== */

int atbm_module_attribute_init
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char cVar10;
  int iVar11;
  int *piVar12;
  char *__s;
  uint uVar13;
  
  iVar5 = kobject_create_and_add(DAT_00017a2c,DAT_00017a28,param_3,param_4,param_4);
  iVar2 = DAT_00017a30;
  *(int *)(DAT_00017a30 + 0x60) = iVar5;
  if (iVar5 == 0) {
    iVar5 = -0x16;
  }
  else {
    iVar5 = sysfs_create_group(iVar5,DAT_00017a34);
    if (iVar5 != 0) {
      kobject_put(*(undefined4 *)(iVar2 + 0x60));
    }
    cVar10 = '\x10';
    __mutex_init(DAT_00017a38 + -0x58,DAT_00017a3c);
    puVar3 = DAT_00017a40;
    *(int *)iVar2 = iVar2;
    *(int *)(iVar2 + 4) = iVar2;
    puVar9 = puVar3;
    do {
      cVar10 = cVar10 + -1;
      *puVar9 = 0;
      piVar4 = DAT_00017a54;
      puVar9 = puVar9 + 1;
    } while (cVar10 != '\0');
    iVar11 = 0;
    piVar12 = DAT_00017a44;
    do {
      __s = (char *)piVar12[-10];
      sVar6 = strlen(__s);
      iVar7 = full_name_hash(0,__s,sVar6);
      uVar13 = (uint)(DAT_00017a48 * iVar7) >> 0x1c;
      if (0x20 < sVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(2,0x179c8);
        (*pcVar1)();
      }
      iVar7 = *(int *)(uVar13 * 4 + iVar2 + 0x20);
      *piVar12 = iVar7;
      if (iVar7 != 0) {
        *(int **)(iVar7 + 4) = piVar12;
      }
      puVar3[uVar13] = piVar12;
      piVar12[1] = (int)(puVar3 + uVar13);
      *(undefined1 *)((int)piVar12 + -0x13) = 0;
      atbm_store_cmd_deinit_show(piVar12 + -4);
      if (*piVar4 << 0xb < 0) {
        printk(DAT_00017a50,DAT_00017a4c,piVar12[-10],uVar13);
      }
      iVar11 = iVar11 + 1;
      piVar12 = piVar12 + 0xe;
    } while (iVar11 != 5);
    uVar8 = kzalloc_constprop_9(0x1000);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x18) = uVar8;
  }
  return iVar5;
}



/* ===== atbm_module_attribute_exit @ 00017a58 size=96 ===== */

void atbm_module_attribute_exit(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = DAT_00017ab8;
  if (DAT_00017ab8[0x18] != 0) {
    sysfs_remove_group(DAT_00017ab8[0x18],DAT_00017abc);
    kobject_put(piVar1[0x18]);
    mutex_lock(piVar1 + 3);
    while ((int *)*piVar1 != piVar1) {
      iVar3 = *piVar1;
      if (*(code **)(iVar3 + -0x20) != (code *)0x0) {
        (**(code **)(iVar3 + -0x20))(iVar3 + -0x30,0);
      }
      atbm_store_cmd_echo_done(iVar3 + -0x30);
      atbm_store_cmd_deinit_show(iVar3 + -0x18);
    }
    if (piVar1[6] != 0) {
      kfree();
    }
    uVar2 = DAT_00017ac0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    mutex_unlock(uVar2);
    return;
  }
  return;
}



/* ===== _copy_from_user @ 00017ac4 size=58 ===== */

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



/* ===== _copy_to_user @ 00017afe size=38 ===== */

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



/* ===== atbm_mod_timer @ 00017b24 size=14 ===== */

void atbm_mod_timer(int param_1)

{
  mod_timer();
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 8);
  return;
}



/* ===== sdio_alive_check_cb @ 00017b32 size=62 ===== */

void sdio_alive_check_cb(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00017b70;
  piVar1 = (int *)(DAT_00017b70 + 0x38);
  iVar3 = *(int *)(DAT_00017b70 + 0x3c) + 1;
  *(int *)(DAT_00017b70 + 0x3c) = iVar3;
  if (*piVar1 <= iVar3) {
    printk(DAT_00017b74);
    return;
  }
  if (*(int *)(iVar2 + 0x44) == 0) {
    queue_work_on(1,*(undefined4 *)(iVar2 + 0x20),iVar2 + 0x24);
  }
  iVar2 = __msecs_to_jiffies(*(undefined4 *)(iVar2 + 0x34));
  atbm_mod_timer(DAT_00017b70,*DAT_00017b78 + iVar2);
  return;
}



/* ===== atbm_ioctl_open @ 00017b7c size=80 ===== */

undefined4 atbm_ioctl_open(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = DAT_00017bcc;
  iVar5 = 100;
  do {
    piVar2 = DAT_00017bd0;
    iVar6 = *piVar1;
    if (iVar6 != 0) {
      while ((*(int *)(iVar6 + 0x48) == 0 || (*piVar2 == 0))) {
        msleep(10);
        iVar5 = iVar5 + -1;
        param_3 = extraout_r2_00;
        if (iVar5 == 0) {
          return 0xffffffff;
        }
      }
      iVar4 = DAT_00017bd4 + 0x48;
      *(int *)(DAT_00017bd4 + 0x58) = iVar6;
      uVar3 = DAT_00017bd8;
      *(int *)(param_2 + 0x80) = iVar4;
      printk(uVar3,iVar5 * -10 + 1000,param_3,iVar4,param_4);
      return 0;
    }
    msleep(10);
    iVar5 = iVar5 + -1;
    param_3 = extraout_r2;
  } while (iVar5 != 0);
  return 0xffffffff;
}



/* ===== check_alive_work @ 00017bdc size=62 ===== */

void check_alive_work(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00017c20;
  iVar1 = DAT_00017c1c;
  *(undefined4 *)(DAT_00017c1c + 0x44) = 1;
  local_20 = 0;
  uStack_1c = 0x4bc;
  local_18 = (int)((longlong)*(int *)(iVar1 + 0x34) * (longlong)iVar2 >> 0x26) -
             (*(int *)(iVar1 + 0x34) >> 0x1f);
  local_14 = *(undefined4 *)(iVar1 + 0x38);
  iVar2 = wsm_check_alive(*DAT_00017c24,&local_20,0x10);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  *(undefined4 *)(iVar1 + 0x44) = 0;
  return;
}



/* ===== atbm_ioctl_fasync @ 00017c28 size=6 ===== */

void atbm_ioctl_fasync(void)

{
  fasync_helper();
  return;
}



/* ===== atbm_ioctl_release @ 00017c34 size=22 ===== */

void atbm_ioctl_release(undefined4 param_1,int param_2)

{
  atbm_ioctl_fasync(0xffffffff,param_2,0);
  *(undefined4 *)(param_2 + 0x80) = 0;
  return;
}



/* ===== atbm_ioctl_read @ 00017c4a size=210 ===== */

undefined4 atbm_ioctl_read(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uStack_18;
  
  uVar8 = DAT_00017d30;
  iVar5 = DAT_00017d28;
  uStack_18 = param_4;
  if (param_3 < 0x23c) {
    iVar5 = *DAT_00017d1c;
    uVar1 = DAT_00017d24;
  }
  else {
    if (*(int **)(DAT_00017d28 + 0x60) != (int *)(DAT_00017d28 + 0x60)) {
      uVar3 = (uint)&uStack_18 & DAT_00017d30;
      *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 0x200;
      uVar1 = DAT_00017d34;
      piVar7 = *(int **)(iVar5 + 0x60);
      if (piVar7 == (int *)0x0) {
        iVar2 = -1;
      }
      else {
        *(bool *)((int)piVar7 + 0xb) = *(int *)(iVar5 + 0x68) < 2;
        __local_bh_enable_ip(uVar1,0x200);
        iVar2 = _copy_to_user(param_2,piVar7 + 2,0x23c);
        uVar8 = uVar8 & (uint)&uStack_18;
        *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + 0x200;
        if (iVar2 == 0) {
          iVar4 = *piVar7;
          piVar6 = (int *)piVar7[1];
          *(int **)(iVar4 + 4) = piVar6;
          *piVar6 = iVar4;
          *piVar7 = 0x100;
          piVar7[1] = 0x122;
          kfree(piVar7);
          *(int *)(iVar5 + 0x68) = *(int *)(iVar5 + 0x68) + -1;
        }
        else if (*DAT_00017d1c << 0x1f < 0) {
          printk(DAT_00017d38,DAT_00017d20,iVar2);
        }
      }
      __local_bh_enable_ip(DAT_00017d3c,0x200);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      return 0x23c;
    }
    iVar5 = *DAT_00017d1c;
    uVar1 = DAT_00017d2c;
  }
  if (iVar5 << 0x1f < 0) {
    printk(uVar1,DAT_00017d20);
  }
  return 0xffffffff;
}



/* ===== atbm_timer_handle @ 00017d40 size=8 ===== */

void atbm_timer_handle(int param_1)

{
  code *pcVar1;
  
  if (*(code **)(param_1 + 0x14) == (code *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x17d44);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00017d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x18));
  return;
}



/* ===== atbm_wsm_connect.part.6 @ 00017d4a size=128 ===== */

void atbm_wsm_connect_part_6(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  byte local_80 [7];
  byte local_79;
  int local_14;
  
  piVar1 = DAT_00017dcc;
  local_14 = *DAT_00017dcc;
  memset(local_80,0,0x6c);
  iVar2 = _copy_from_user(local_80,param_2,0x6c);
  if (iVar2 == 0) {
    local_80[0] = local_80[0] & 0xef;
    if (0x20 < local_79) {
      local_79 = 0x20;
    }
    iVar2 = wsm_join(param_1,local_80,0);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_00017d7a;
    iVar2 = *DAT_00017dd0;
    uVar3 = DAT_00017ddc;
  }
  else {
    iVar2 = *DAT_00017dd0;
    uVar3 = DAT_00017dd8;
  }
  if (iVar2 << 0x1f < 0) {
    printk(uVar3,DAT_00017dd4);
  }
  uVar3 = 0xffffffff;
LAB_00017d7a:
  if (local_14 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== atbm_wsm_get_version.part.25 @ 00017de0 size=24 ===== */

undefined4
atbm_wsm_get_version_part_25
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_00017df8 << 0x1f < 0) {
    printk(DAT_00017e00,DAT_00017dfc,param_3,*DAT_00017df8 << 0x1f,param_4);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_get_sdk_version.part.26 @ 00017e04 size=24 ===== */

undefined4
atbm_wsm_get_sdk_version_part_26
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_00017e1c << 0x1f < 0) {
    printk(DAT_00017e24,DAT_00017e20,param_3,*DAT_00017e1c << 0x1f,param_4);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_send_at_cmd.part.29 @ 00017e28 size=24 ===== */

undefined4
atbm_wsm_send_at_cmd_part_29
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_00017e40 << 0x1f < 0) {
    printk(DAT_00017e48,DAT_00017e44,param_3,*DAT_00017e40 << 0x1f,param_4);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_send_ipc_data.part.32 @ 00017e4c size=24 ===== */

undefined4
atbm_wsm_send_ipc_data_part_32
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_00017e64 << 0x1f < 0) {
    printk(DAT_00017e6c,DAT_00017e68,param_3,*DAT_00017e64 << 0x1f,param_4);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_add_netpattern_info.part.38 @ 00017e70 size=24 ===== */

undefined4
atbm_wsm_add_netpattern_info_part_38
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_00017e88 << 0x1f < 0) {
    printk(DAT_00017e90,DAT_00017e8c,param_3,*DAT_00017e88 << 0x1f,param_4);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_del_netpattern_info.part.39 @ 00017e94 size=24 ===== */

undefined4
atbm_wsm_del_netpattern_info_part_39
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_00017eac << 0x1f < 0) {
    printk(DAT_00017eb4,DAT_00017eb0,param_3,*DAT_00017eac << 0x1f,param_4);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_add_conn_param_info.part.40 @ 00017eb8 size=24 ===== */

undefined4
atbm_wsm_add_conn_param_info_part_40
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_00017ed0 << 0x1f < 0) {
    printk(DAT_00017ed8,DAT_00017ed4,param_3,*DAT_00017ed0 << 0x1f,param_4);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_del_conn_param_info.part.41 @ 00017edc size=24 ===== */

undefined4
atbm_wsm_del_conn_param_info_part_41
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_00017ef4 << 0x1f < 0) {
    printk(DAT_00017efc,DAT_00017ef8,param_3,*DAT_00017ef4 << 0x1f,param_4);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_send_customer_cmd.part.47 @ 00017f00 size=24 ===== */

undefined4
atbm_wsm_send_customer_cmd_part_47
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_00017f18 << 0x1f < 0) {
    printk(DAT_00017f20,DAT_00017f1c,param_3,*DAT_00017f18 << 0x1f,param_4);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_fast_cfg_send.part.51 @ 00017f24 size=24 ===== */

undefined4
atbm_wsm_fast_cfg_send_part_51
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_00017f3c << 0x1f < 0) {
    printk(DAT_00017f44,DAT_00017f40,param_3,*DAT_00017f3c << 0x1f,param_4);
  }
  return 0xffffffff;
}



/* ===== atbm_ioctl_notify_add @ 00017f48 size=246 ===== */

undefined4
atbm_ioctl_notify_add
          (int param_1,undefined1 param_2,undefined1 param_3,undefined4 *param_4,void *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puStack_28;
  
  piVar1 = DAT_00018040;
  puStack_28 = param_4;
  if (*DAT_00018040 << 0x1f < 0) {
    printk(DAT_00018048,DAT_00018044);
  }
  iVar5 = DAT_0001804c;
  if (*(int *)(DAT_0001804c + 0x68) < 10) {
    if ((param_1 == 6) && (param_5 == (void *)0x0)) {
      iVar5 = *piVar1;
      uVar4 = DAT_00018054;
    }
    else {
      puVar3 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00018058 + 0x28),0xdc0);
      if (puVar3 != (undefined4 *)0x0) {
        if (param_4 != (undefined4 *)0x0) {
          puVar8 = puVar3 + 3;
          puVar7 = param_4;
          do {
            puVar6 = puVar7 + 2;
            uVar4 = puVar7[1];
            *puVar8 = *puVar7;
            puVar8[1] = uVar4;
            puVar8 = puVar8 + 2;
            puVar7 = puVar6;
          } while (puVar6 != param_4 + 0x10);
        }
        if (param_5 != (void *)0x0) {
          memcpy(puVar3 + 0x13,param_5,0x1f8);
        }
        *(char *)((int)puVar3 + 9) = (char)param_1;
        *(undefined1 *)((int)puVar3 + 10) = param_3;
        *(undefined1 *)(puVar3 + 2) = param_2;
        *(int *)(((uint)&puStack_28 & 0xffffe000) + 4) =
             *(int *)(((uint)&puStack_28 & 0xffffe000) + 4) + 0x200;
        uVar4 = DAT_00018060;
        puVar7 = *(undefined4 **)(iVar5 + 100);
        *(undefined4 **)(iVar5 + 100) = puVar3;
        uVar2 = DAT_00018064;
        *puVar3 = uVar4;
        puVar3[1] = puVar7;
        *puVar7 = puVar3;
        *(int *)(iVar5 + 0x68) = *(int *)(iVar5 + 0x68) + 1;
        __local_bh_enable_ip(uVar2,0x200);
        if (*piVar1 << 0x1f < 0) {
          printk(DAT_00018068,DAT_00018044);
        }
        return 1;
      }
      iVar5 = *piVar1;
      uVar4 = DAT_0001805c;
    }
  }
  else {
    iVar5 = *piVar1;
    uVar4 = DAT_00018050;
  }
  if (iVar5 << 0x1f < 0) {
    printk(uVar4,DAT_00018044);
  }
  return 0xffffffff;
}



/* ===== scan_complete_work @ 0001806c size=70 ===== */

void scan_complete_work(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000180b4;
  if (*(int *)(DAT_000180b4 + 0xa8) != 0) {
    iVar2 = atbm_ioctl_notify_add(2,0,0,0,0,param_2);
    if (0 < iVar2) {
      kill_fasync(iVar1 + 0x5c,0x1d,1);
    }
    *(undefined1 *)(iVar1 + 0x90) = 0;
    return;
  }
  wsm_get_scan_state(*DAT_000180b8,DAT_000180b4 + 0x8c,8);
  return;
}



/* ===== scan_complete_check @ 000180bc size=52 ===== */

void scan_complete_check(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_000180f0;
  iVar3 = DAT_000180f0 + 0x98;
  puVar1 = (undefined4 *)(DAT_000180f0 + 0x94);
  if (*(char *)(DAT_000180f0 + 0x90) == '\0') {
    *(undefined4 *)(DAT_000180f0 + 0xa8) = 1;
    queue_work_on(1,*puVar1,iVar3);
    return;
  }
  queue_work_on(1,*puVar1,iVar3);
  atbm_mod_timer(iVar2 + 0x6c,*DAT_000180f4 + 0x96);
  return;
}



/* ===== atbm_ioctl_connect_async @ 000180f8 size=88 ===== */

void atbm_ioctl_connect_async(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
    param_1 = 0;
  }
  else {
    if (param_1 == 0) {
      if (-1 < *DAT_00018150 << 0x1f) {
        return;
      }
      printk(DAT_00018158,DAT_00018154);
      return;
    }
    uVar2 = 1;
  }
  iVar1 = atbm_ioctl_notify_add(0,uVar2,0,param_1,0,param_2,param_3);
  if (iVar1 < 1) {
    return;
  }
  printk(DAT_00018160,DAT_0001815c,0xab);
  kill_fasync(DAT_00018164,0x1d,1);
  return;
}



/* ===== atbm_wsm_ps @ 00018168 size=100 ===== */

int atbm_wsm_ps(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  if (param_2 == 0) {
    if (-1 < *DAT_000181cc << 0x1f) {
      return -1;
    }
    local_14 = 0;
    uVar1 = DAT_000181d4;
    uStack_10 = param_3;
    local_c = param_4;
  }
  else {
    local_14 = 0;
    uStack_10 = 0;
    local_c = 0;
    iVar2 = _copy_from_user(&local_14,param_2,0xc,0,param_1);
    if (iVar2 == 0) {
      iVar2 = wsm_set_psmode(param_1,&local_14,0xc);
      if (iVar2 == 0) {
        return 0;
      }
      if (*DAT_000181cc << 0x1f < 0) {
        printk(DAT_000181dc,DAT_000181d0);
        return iVar2;
      }
      return iVar2;
    }
    uVar1 = DAT_000181d8;
    if (-1 < *DAT_000181cc << 0x1f) {
      return -1;
    }
  }
  printk(uVar1,DAT_000181d0);
  return -1;
}



/* ===== atbm_wsm_connect @ 000181e0 size=50 ===== */

undefined4 atbm_wsm_connect(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = *DAT_00018214;
    uVar1 = DAT_0001821c;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = atbm_wsm_connect_part_6();
      return uVar1;
    }
    iVar2 = *DAT_00018214;
    uVar1 = DAT_00018220;
  }
  if (iVar2 << 0x1f < 0) {
    printk(uVar1,DAT_00018218);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_get_status @ 00018224 size=112 ===== */

void atbm_wsm_get_status(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_b6 [162];
  int local_14;
  
  piVar1 = DAT_00018294;
  local_14 = *DAT_00018294;
  memset(auStack_b6,0,0xa2);
  iVar2 = wsm_get_config(param_1,auStack_b6,0xa2);
  if (iVar2 == 0) {
    iVar3 = _copy_to_user(param_2,auStack_b6,0xa2);
    if (iVar3 != 0) {
      if (*DAT_00018298 << 0x1f < 0) {
        iVar2 = atbm_wsm_get_status_part_7();
      }
      else {
        iVar2 = -1;
      }
    }
  }
  else if (*DAT_00018298 << 0x1f < 0) {
    printk(DAT_000182a0,DAT_0001829c);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_wsm_tcp_filter @ 000182a4 size=194 ===== */

int atbm_wsm_tcp_filter(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_28 [6];
  
  puVar5 = local_28;
  if (param_2 == 0) {
    iVar3 = *DAT_00018368;
    uVar1 = DAT_00018370;
  }
  else {
    memset(local_28,0,0x18);
    if (param_3 == 0) {
      iVar3 = wsm_get_tcp_filter(param_1,local_28,0x18);
      if (iVar3 == 0) {
        iVar3 = _copy_to_user(param_2,local_28,0x18);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *DAT_00018368;
        uVar1 = DAT_00018380;
      }
      else {
        iVar3 = *DAT_00018368;
        uVar1 = DAT_0001837c;
      }
    }
    else {
      iVar3 = _copy_from_user(local_28,param_2);
      if (iVar3 == 0) {
        iVar3 = wsm_set_tcp_filter(param_1,local_28,0x18);
        if (iVar3 == 0) {
          puVar4 = (undefined4 *)(param_1 + 0x140);
          do {
            uVar1 = *puVar5;
            uVar2 = puVar5[1];
            puVar5 = puVar5 + 2;
            *puVar4 = uVar1;
            puVar4[1] = uVar2;
            puVar4 = puVar4 + 2;
          } while (puVar5 != (undefined4 *)&stack0xfffffff0);
          return 0;
        }
        if (-1 < *DAT_00018368 << 0x1f) {
          return iVar3;
        }
        printk(DAT_00018378,DAT_0001836c);
        return iVar3;
      }
      iVar3 = *DAT_00018368;
      uVar1 = DAT_00018374;
    }
  }
  if (iVar3 << 0x1f < 0) {
    printk(uVar1,DAT_0001836c);
  }
  return -1;
}



/* ===== atbm_wsm_set_scan @ 00018384 size=160 ===== */

int atbm_wsm_set_scan(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_14;
  
  iVar1 = DAT_00018424;
  local_14 = (uint)*(byte *)(DAT_00018424 + 0x90);
  if (local_14 == 0) {
    iVar5 = wsm_set_scan(param_1,&local_14,param_3,0,param_1,param_2,param_3);
    piVar2 = DAT_00018434;
    if (iVar5 == 0) {
      if (*DAT_00018434 != 0) {
        memset((void *)(iVar1 + 0x6c),0,0x40);
        uVar6 = alloc_workqueue(DAT_00018438,0,0);
        *(undefined4 *)(iVar1 + 0x98) = 0xffffffe0;
        uVar4 = DAT_00018440;
        uVar3 = DAT_0001843c;
        *(undefined4 *)(iVar1 + 0x88) = 0;
        *(undefined4 *)(iVar1 + 0xa4) = uVar3;
        *(undefined4 *)(iVar1 + 0x94) = uVar6;
        *(int *)(iVar1 + 0x9c) = iVar1 + 0x9c;
        *(int *)(iVar1 + 0xa0) = iVar1 + 0x9c;
        init_timer_key(iVar1 + 0x6c,uVar4,0,0,0);
        uVar3 = DAT_00018444;
        *piVar2 = 0;
        *(undefined4 *)(iVar1 + 0x80) = uVar3;
        *(undefined4 *)(iVar1 + 0x84) = 0;
      }
      *(undefined1 *)(iVar1 + 0x90) = 1;
      *(undefined4 *)(iVar1 + 0xa8) = 0;
      atbm_mod_timer(DAT_0001844c,*DAT_00018448);
    }
    else if (*DAT_00018428 << 0x1f < 0) {
      printk(DAT_00018430,DAT_0001842c);
    }
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}



/* ===== atbm_wsm_get_scan_state @ 00018450 size=36 ===== */

undefined4
atbm_wsm_get_scan_state(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _copy_to_user(param_2,DAT_00018474,1,param_4,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*DAT_00018478 << 0x1f < 0) {
      printk(DAT_00018480,DAT_0001847c);
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== atbm_wsm_get_scan_info @ 00018484 size=156 ===== */

int atbm_wsm_get_scan_info(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0001852c;
  if (param_2 == 0) {
    iVar3 = *DAT_00018520;
    uVar1 = DAT_00018528;
  }
  else {
    memset((void *)(DAT_0001852c + 0xac),0,0x514);
    iVar2 = _copy_from_user(iVar3 + 0xac,param_2,0x514);
    if (iVar2 == 0) {
      iVar2 = wsm_get_scan_info(param_1,iVar3 + 0xac,0x514);
      if (iVar2 != 0) {
        if (-1 < *DAT_00018520 << 0x1f) {
          return iVar2;
        }
        printk(DAT_00018534,DAT_00018524);
        return iVar2;
      }
      if (*(int *)(iVar3 + 0xac) != 0) {
        iVar3 = *DAT_00018520;
        uVar1 = DAT_00018538;
        goto joined_r0x00018504;
      }
      iVar3 = _copy_to_user(param_2,iVar3 + 0xac,0x514);
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar3 = *DAT_00018520;
    uVar1 = DAT_00018530;
  }
joined_r0x00018504:
  if (iVar3 << 0x1f < 0) {
    printk(uVar1,DAT_00018524);
  }
  return -1;
}



/* ===== atbm_wsm_set_wifi_mode @ 0001853c size=122 ===== */

int atbm_wsm_set_wifi_mode(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  uint local_14;
  
  puVar1 = DAT_000185b8;
  uVar2 = *DAT_000185b8;
  uVar4 = DAT_000185c0;
  if (param_2 < 2) {
    local_18 = 0;
    local_14 = param_2 & 0xff;
    iVar3 = *(int *)(param_1 + 4);
    uVar4 = DAT_000185c4;
    if (iVar3 != 0) {
      if (param_2 == 0) {
        uVar4 = 2;
      }
      else {
        uVar4 = 3;
      }
      *(undefined4 *)(iVar3 + 0xc) = uVar4;
      if ((uVar2 & 1) != 0) {
        printk(DAT_000185c8,DAT_000185bc,uVar4,param_2,iVar3);
      }
      iVar3 = wsm_set_wifimode(param_1,&local_18);
      if (iVar3 == 0) {
        return 0;
      }
      if (-1 < (int)(*puVar1 << 0x1f)) {
        return iVar3;
      }
      printk(DAT_000185cc,DAT_000185bc);
      return iVar3;
    }
  }
  if ((uVar2 & 1) != 0) {
    printk(uVar4,DAT_000185bc);
  }
  return -1;
}



/* ===== atbm_wsm_set_ap_cfg @ 000185d0 size=320 ===== */

void atbm_wsm_set_ap_cfg(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar9;
  undefined1 auStack_8c [11];
  byte local_81;
  byte local_60;
  int local_1c;
  undefined4 *puVar8;
  
  piVar2 = DAT_00018710;
  iVar9 = *(int *)(param_1 + 4);
  local_1c = *DAT_00018710;
  if (iVar9 == 0) {
    iVar9 = *DAT_00018714;
    uVar1 = DAT_0001871c;
  }
  else if (param_2 == 0) {
    iVar9 = *DAT_00018714;
    uVar1 = DAT_00018720;
  }
  else {
    memset(auStack_8c,0,0x70);
    iVar3 = _copy_from_user(auStack_8c,param_2,0x70);
    if (iVar3 == 0) {
      uVar6 = (uint)local_60;
      if (uVar6 == 0) {
        *(undefined4 *)(iVar9 + 0xb0) = 1;
        *(undefined4 *)(iVar9 + 0xc4) = 1;
      }
      else {
        if (uVar6 - 1 < 2) {
          if (*DAT_00018714 << 0x1f < 0) {
            printk(DAT_0001872c,DAT_00018718);
          }
          *(undefined4 *)(iVar9 + 0xb0) = 2;
          *(undefined4 *)(iVar9 + 0xc4) = 2;
          uVar5 = 0x404;
        }
        else if (uVar6 == 3) {
          if (*DAT_00018714 << 0x1f < 0) {
            printk(DAT_00018730,DAT_00018718);
          }
          *(undefined4 *)(iVar9 + 0xb0) = 3;
          *(undefined4 *)(iVar9 + 0xc4) = 3;
          uVar5 = 0x804;
        }
        else {
          if (uVar6 != 4) goto LAB_0001864c;
          if (*DAT_00018714 << 0x1f < 0) {
            printk(DAT_00018734,DAT_00018718);
          }
          *(undefined4 *)(iVar9 + 0xb0) = 4;
          *(undefined4 *)(iVar9 + 0xc4) = 4;
          uVar5 = 0x808;
        }
        *(undefined2 *)(iVar9 + 0xb8) = uVar5;
        *(undefined2 *)(iVar9 + 0xcc) = uVar5;
      }
LAB_0001864c:
      *(undefined4 *)(iVar9 + 0xc) = 3;
      puVar4 = (undefined4 *)(iVar9 + 0xdc);
      puVar7 = (undefined4 *)(iVar9 + 0xac);
      do {
        puVar8 = puVar7 + 1;
        *puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
        puVar7 = puVar8;
      } while (puVar8 != (undefined4 *)(iVar9 + 0xc0));
      if (0x20 < local_81) {
        local_81 = 0x20;
      }
      iVar9 = wsm_set_ap_cfg(param_1,auStack_8c,0x70);
      if ((iVar9 != 0) && (*DAT_00018714 << 0x1f < 0)) {
        printk(DAT_00018728,DAT_00018718);
      }
      goto LAB_000185ee;
    }
    iVar9 = *DAT_00018714;
    uVar1 = DAT_00018724;
  }
  if (iVar9 << 0x1f < 0) {
    printk(uVar1,DAT_00018718);
  }
  iVar9 = -1;
LAB_000185ee:
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar9);
}



/* ===== atbm_wsm_set_wifi_channel @ 00018738 size=74 ===== */

int atbm_wsm_set_wifi_channel(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 local_10;
  uint uStack_c;
  
  if (param_2 - 1 < 0xe) {
    local_10 = 0;
    uStack_c = (param_2 & 0xff) << 8;
    iVar1 = wsm_set_wifichannel(param_1,&local_10,8);
    if ((iVar1 != 0) && (*DAT_00018784 << 0x1f < 0)) {
      printk(DAT_00018790,DAT_00018788);
    }
  }
  else {
    if (*DAT_00018784 << 0x1f < 0) {
      local_10 = param_1;
      uStack_c = param_2;
      printk(DAT_0001878c,DAT_00018788);
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== atbm_wsm_set_country @ 00018794 size=72 ===== */

int atbm_wsm_set_country(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 local_10;
  uint uStack_c;
  
  if (param_2 < 9) {
    local_10 = 0;
    uStack_c = (param_2 & 0xff) << 0x10;
    iVar1 = wsm_set_countryId(param_1,&local_10,8);
    if ((iVar1 != 0) && (*DAT_000187dc << 0x1f < 0)) {
      printk(DAT_000187e8,DAT_000187e0);
    }
  }
  else {
    if (*DAT_000187dc << 0x1f < 0) {
      local_10 = param_1;
      uStack_c = param_2;
      printk(DAT_000187e4,DAT_000187e0);
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== atbm_wsm_get_country @ 000187ec size=100 ===== */

int atbm_wsm_get_country(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_3;
  if (param_2 == 0) {
    if (-1 < *DAT_00018850 << 0x1f) {
      return -1;
    }
    uStack_14 = 0;
    uVar1 = DAT_00018858;
    local_18 = param_1;
  }
  else {
    local_18 = 0;
    uStack_14 = 0;
    iVar2 = wsm_get_countryId(param_1,&local_18,8);
    if (iVar2 != 0) {
      if (*DAT_00018850 << 0x1f < 0) {
        printk(DAT_0001885c,DAT_00018854);
        return iVar2;
      }
      return iVar2;
    }
    iVar2 = _copy_to_user(param_2,(int)&uStack_14 + 2,1);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = DAT_00018860;
    if (-1 < *DAT_00018850 << 0x1f) {
      return -1;
    }
  }
  printk(uVar1,DAT_00018854);
  return -1;
}



/* ===== atbm_wsm_get_sta_list @ 00018864 size=108 ===== */

int atbm_wsm_get_sta_list(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_30 [36];
  
  if (param_2 == 0) {
    iVar2 = *DAT_000188d0;
    uVar1 = DAT_000188d8;
  }
  else {
    memset(auStack_30,0,0x20);
    iVar2 = wsm_get_stalist(param_1,auStack_30,0x20);
    if (iVar2 != 0) {
      if (-1 < *DAT_000188d0 << 0x1f) {
        return iVar2;
      }
      printk(DAT_000188dc,DAT_000188d4);
      return iVar2;
    }
    iVar2 = _copy_to_user(param_2,auStack_30,0x20);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = *DAT_000188d0;
    uVar1 = DAT_000188e0;
  }
  if (iVar2 << 0x1f < 0) {
    printk(uVar1,DAT_000188d4);
  }
  return -1;
}



/* ===== atbm_wsm_smartcfg_start @ 000188e4 size=42 ===== */

int atbm_wsm_smartcfg_start(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = wsm_smart_cfg_start(param_1,&local_c,4,0,param_1);
  if ((iVar1 != 0) && (*DAT_00018910 << 0x1f < 0)) {
    printk(DAT_00018918,DAT_00018914);
  }
  return iVar1;
}



/* ===== atbm_wsm_smartcfg_stop @ 0001891c size=42 ===== */

int atbm_wsm_smartcfg_stop(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = wsm_smart_cfg_stop(param_1,&local_c,4,0,param_1);
  if ((iVar1 != 0) && (*DAT_00018948 << 0x1f < 0)) {
    printk(DAT_00018950,DAT_0001894c);
  }
  return iVar1;
}



/* ===== atbm_wsm_ap_touch_start @ 00018954 size=54 ===== */

int atbm_wsm_ap_touch_start(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = (uint)(param_2 != 0);
  iVar1 = wsm_ap_touch_start(param_1,&local_10,8);
  if ((iVar1 != 0) && (*DAT_0001898c << 0x1f < 0)) {
    printk(DAT_00018994,DAT_00018990);
  }
  return iVar1;
}



/* ===== atbm_wsm_ap_touch_stop @ 00018998 size=42 ===== */

int atbm_wsm_ap_touch_stop(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = wsm_ap_touch_stop(param_1,&local_c,4,0,param_1);
  if ((iVar1 != 0) && (*DAT_000189c4 << 0x1f < 0)) {
    printk(DAT_000189cc,DAT_000189c8);
  }
  return iVar1;
}



/* ===== atbm_wsm_etf_start_tx @ 000189d0 size=108 ===== */

int atbm_wsm_etf_start_tx(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [20];
  
  if (param_2 == 0) {
    iVar2 = *DAT_00018a3c;
    uVar1 = DAT_00018a44;
  }
  else {
    memset(auStack_20,0,0x10);
    iVar2 = _copy_from_user(auStack_20,param_2,0x10);
    if (iVar2 == 0) {
      iVar2 = wsm_etf_start_tx(param_1,auStack_20,0x10);
      if (iVar2 == 0) {
        return 0;
      }
      if (-1 < *DAT_00018a3c << 0x1f) {
        return iVar2;
      }
      printk(DAT_00018a4c,DAT_00018a40);
      return iVar2;
    }
    iVar2 = *DAT_00018a3c;
    uVar1 = DAT_00018a48;
  }
  if (iVar2 << 0x1f < 0) {
    printk(uVar1,DAT_00018a40);
  }
  return -1;
}



/* ===== atbm_wsm_etf_single_tone @ 00018a50 size=100 ===== */

undefined4 atbm_wsm_etf_single_tone(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [20];
  
  if (param_2 == 0) {
    iVar2 = *DAT_00018ab4;
    uVar1 = DAT_00018abc;
  }
  else {
    memset(auStack_20,0,0x10);
    iVar2 = _copy_from_user(auStack_20,param_2,0x10);
    if (iVar2 == 0) {
      iVar2 = wsm_etf_single_tone(param_1,auStack_20,0x10);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *DAT_00018ab4;
      uVar1 = DAT_00018ac4;
    }
    else {
      iVar2 = *DAT_00018ab4;
      uVar1 = DAT_00018ac0;
    }
  }
  if (iVar2 << 0x1f < 0) {
    printk(uVar1,DAT_00018ab8);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_etf_stop_tx @ 00018ac8 size=42 ===== */

int atbm_wsm_etf_stop_tx(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = wsm_etf_stop_tx(param_1,&local_c,4,0,param_1);
  if ((iVar1 != 0) && (*DAT_00018af4 << 0x1f < 0)) {
    printk(DAT_00018afc,DAT_00018af8);
  }
  return iVar1;
}



/* ===== atbm_wsm_etf_start_rx @ 00018b00 size=108 ===== */

int atbm_wsm_etf_start_rx(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [20];
  
  if (param_2 == 0) {
    iVar2 = *DAT_00018b6c;
    uVar1 = DAT_00018b74;
  }
  else {
    memset(auStack_20,0,0x10);
    iVar2 = _copy_from_user(auStack_20,param_2,0x10);
    if (iVar2 == 0) {
      iVar2 = wsm_etf_start_rx(param_1,auStack_20,0x10);
      if (iVar2 == 0) {
        return 0;
      }
      if (-1 < *DAT_00018b6c << 0x1f) {
        return iVar2;
      }
      printk(DAT_00018b7c,DAT_00018b70);
      return iVar2;
    }
    iVar2 = *DAT_00018b6c;
    uVar1 = DAT_00018b78;
  }
  if (iVar2 << 0x1f < 0) {
    printk(uVar1,DAT_00018b70);
  }
  return -1;
}



/* ===== atbm_wsm_etf_start_rx_no_drop @ 00018b80 size=108 ===== */

int atbm_wsm_etf_start_rx_no_drop(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [20];
  
  if (param_2 == 0) {
    iVar2 = *DAT_00018bec;
    uVar1 = DAT_00018bf4;
  }
  else {
    memset(auStack_20,0,0x10);
    iVar2 = _copy_from_user(auStack_20,param_2,0x10);
    if (iVar2 == 0) {
      iVar2 = wsm_etf_start_rx_no_drop(param_1,auStack_20,0x10);
      if (iVar2 == 0) {
        return 0;
      }
      if (-1 < *DAT_00018bec << 0x1f) {
        return iVar2;
      }
      printk(DAT_00018bfc,DAT_00018bf0);
      return iVar2;
    }
    iVar2 = *DAT_00018bec;
    uVar1 = DAT_00018bf8;
  }
  if (iVar2 << 0x1f < 0) {
    printk(uVar1,DAT_00018bf0);
  }
  return -1;
}



/* ===== atbm_wsm_etf_stop_rx @ 00018c00 size=42 ===== */

int atbm_wsm_etf_stop_rx(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = wsm_etf_stop_rx(param_1,&local_c,4,0,param_1);
  if ((iVar1 != 0) && (*DAT_00018c2c << 0x1f < 0)) {
    printk(DAT_00018c34,DAT_00018c30);
  }
  return iVar1;
}



/* ===== atbm_wsm_etf_reset_rx @ 00018c38 size=42 ===== */

int atbm_wsm_etf_reset_rx(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = wsm_etf_reset_rx(param_1,&local_c,4,0,param_1);
  if ((iVar1 != 0) && (*DAT_00018c64 << 0x1f < 0)) {
    printk(DAT_00018c6c,DAT_00018c68);
  }
  return iVar1;
}



/* ===== atbm_wsm_set_adaptive @ 00018c70 size=98 ===== */

int atbm_wsm_set_adaptive(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    if (-1 < *DAT_00018cd4 << 0x1f) {
      return -1;
    }
    uStack_c = 0;
    uVar1 = DAT_00018cdc;
    local_10 = param_1;
  }
  else {
    local_10 = 0;
    uStack_c = 0;
    iVar2 = _copy_from_user(&local_10,param_2,8);
    if (iVar2 == 0) {
      iVar2 = wsm_set_adaptive(param_1,&local_10,8);
      if (iVar2 == 0) {
        return 0;
      }
      if (*DAT_00018cd4 << 0x1f < 0) {
        printk(DAT_00018ce4,DAT_00018cd8);
        return iVar2;
      }
      return iVar2;
    }
    uVar1 = DAT_00018ce0;
    if (-1 < *DAT_00018cd4 << 0x1f) {
      return -1;
    }
  }
  printk(uVar1,DAT_00018cd8);
  return -1;
}



/* ===== atbm_wsm_get_version @ 00018ce8 size=118 ===== */

void atbm_wsm_get_version(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [132];
  int local_14;
  
  piVar1 = DAT_00018d60;
  local_14 = *DAT_00018d60;
  if (param_2 == 0) {
    if (*DAT_00018d64 << 0x1f < 0) {
      printk(DAT_00018d6c,DAT_00018d68);
    }
    iVar3 = -1;
  }
  else {
    memset(auStack_98,0,0x84);
    iVar3 = wsm_get_ver(param_1,auStack_98,0x84);
    if (iVar3 == 0) {
      iVar2 = _copy_to_user(param_2,auStack_98,0x84);
      if (iVar2 != 0) {
        iVar3 = atbm_wsm_get_version_part_25();
      }
    }
    else if (*DAT_00018d64 << 0x1f < 0) {
      printk(DAT_00018d70,DAT_00018d68);
    }
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}



/* ===== atbm_wsm_get_sdk_version @ 00018d74 size=118 ===== */

void atbm_wsm_get_sdk_version(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [132];
  int local_14;
  
  piVar1 = DAT_00018dec;
  local_14 = *DAT_00018dec;
  if (param_2 == 0) {
    if (*DAT_00018df0 << 0x1f < 0) {
      printk(DAT_00018df8,DAT_00018df4);
    }
    iVar3 = -1;
  }
  else {
    memset(auStack_98,0,0x84);
    iVar3 = wsm_get_sdk_ver(param_1,auStack_98,0x84);
    if (iVar3 == 0) {
      iVar2 = _copy_to_user(param_2,auStack_98,0x84);
      if (iVar2 != 0) {
        iVar3 = atbm_wsm_get_sdk_version_part_26();
      }
    }
    else if (*DAT_00018df0 << 0x1f < 0) {
      printk(DAT_00018dfc,DAT_00018df4);
    }
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}



/* ===== atbm_wsm_update_fw @ 00018e00 size=110 ===== */

int atbm_wsm_update_fw(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = *DAT_00018e70;
    iVar2 = iVar3 << 0x1f;
    uVar1 = DAT_00018e78;
  }
  else {
    memset(DAT_00018e7c,0,0x40c);
    iVar3 = _copy_from_user(DAT_00018e7c,param_2,0x40c);
    if (iVar3 == 0) {
      iVar3 = wsm_update_fw(param_1,DAT_00018e7c,0x40c);
      if (iVar3 == 0) {
        return 0;
      }
      if (-1 < *DAT_00018e70 << 0x1f) {
        return iVar3;
      }
      printk(DAT_00018e84,DAT_00018e74);
      return iVar3;
    }
    iVar3 = *DAT_00018e70;
    param_3 = iVar3 << 0x1f;
    uVar1 = DAT_00018e80;
    iVar2 = param_3;
  }
  if (iVar2 < 0) {
    printk(uVar1,DAT_00018e74,param_3,iVar3,param_4);
  }
  return -1;
}



/* ===== atbm_wsm_set_listen_itvl @ 00018e88 size=74 ===== */

int atbm_wsm_set_listen_itvl(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 local_10;
  uint local_c;
  
  if (param_2 - 1 < 0x14) {
    local_10 = 0;
    local_c = param_2 & 0xff;
    iVar1 = wsm_set_listen_itvl(param_1,&local_10,8);
    if ((iVar1 != 0) && (*DAT_00018ed4 << 0x1f < 0)) {
      printk(DAT_00018ee0,DAT_00018ed8);
    }
  }
  else {
    if (*DAT_00018ed4 << 0x1f < 0) {
      local_10 = param_1;
      local_c = param_2;
      printk(DAT_00018edc,DAT_00018ed8);
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== atbm_wsm_send_at_cmd @ 00018ee4 size=124 ===== */

void atbm_wsm_send_at_cmd(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_118 [260];
  int local_14;
  
  piVar1 = DAT_00018f60;
  local_14 = *DAT_00018f60;
  if (param_2 == 0) {
    if (*DAT_00018f64 << 0x1f < 0) {
      printk(DAT_00018f6c,DAT_00018f68);
    }
    iVar2 = -1;
  }
  else {
    memset(auStack_118,0,0x104);
    iVar2 = _copy_from_user(auStack_118,param_2,0x104);
    if (iVar2 == 0) {
      iVar2 = wsm_send_at_cmd(param_1,auStack_118,0x104);
      if ((iVar2 != 0) && (*DAT_00018f64 << 0x1f < 0)) {
        printk(DAT_00018f70,DAT_00018f68);
      }
    }
    else {
      iVar2 = atbm_wsm_send_at_cmd_part_29();
    }
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_wsm_set_dbg_print @ 00018f74 size=54 ===== */

int atbm_wsm_set_dbg_print(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = (uint)(param_2 != 0);
  iVar1 = wsm_set_dbg_print(param_1,&local_10,8);
  if ((iVar1 != 0) && (*DAT_00018fac << 0x1f < 0)) {
    printk(DAT_00018fb4,DAT_00018fb0);
  }
  return iVar1;
}



/* ===== atbm_wsm_fw_sleep @ 00018fb8 size=274 ===== */

int atbm_wsm_fw_sleep(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar1 = DAT_000190cc;
  iVar6 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  if ((*(int *)(DAT_000190cc + 0x9cc) << 0x1d < 0) && (*DAT_000190d0 << 0x1d < 0)) {
    printk(DAT_000190d8,DAT_000190d4,*(undefined2 *)(param_1 + 0xfa),*DAT_000190d0,param_1);
  }
  if (*(ushort *)(param_1 + 0xfa) < 0x34ed) {
    if (*(int *)(iVar1 + 0x40) != 0) {
      del_timer(DAT_000190cc);
    }
    local_1c = 0;
    iVar2 = wsm_fw_sleep(param_1,&local_1c);
    if (iVar2 != 0) {
      if (*DAT_000190d0 << 0x1f < 0) {
        printk(DAT_000190dc,DAT_000190d4);
      }
      if (*(int *)(iVar1 + 0x40) != 0) {
        iVar3 = __msecs_to_jiffies(*(undefined4 *)(iVar1 + 0x34));
        atbm_mod_timer(DAT_000190cc,*DAT_000190e0 + iVar3);
      }
      goto LAB_0001902a;
    }
    uVar4 = DAT_000190e8;
    if (*(int *)(iVar1 + 0x40) != 0) {
      destroy_workqueue(*(undefined4 *)(iVar1 + 0x20));
      *(undefined4 *)(iVar1 + 0x40) = 0;
      uVar4 = DAT_000190e8;
    }
  }
  else {
    if (*(int *)(iVar1 + 0x9d0) != 0) {
      iVar2 = 0;
      goto LAB_0001902a;
    }
    if (*(int *)(iVar1 + 0x40) != 0) {
      del_timer(DAT_000190cc);
    }
    msleep(2);
    printk(DAT_000190ec);
    wsm_cmd_lock(param_1);
    (**(code **)(*(int *)(param_1 + 0x40) + 0x18))(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(iVar1 + 0x9d0) = 1;
    atbm_clear_wakeup_reg(param_1);
    (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
    wsm_cmd_unlock(param_1);
    (**(code **)(*(int *)(param_1 + 0x40) + 0x24))(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x4c) = 1;
    pcVar5 = *(code **)(*(int *)(param_1 + 0x40) + 0x70);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*(undefined4 *)(param_1 + 0x44));
    }
    pcVar5 = *(code **)(*(int *)(param_1 + 0x40) + 0x7c);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*(undefined4 *)(param_1 + 0x44));
    }
    iVar2 = 0;
    uVar4 = DAT_000190f0;
  }
  printk(uVar4);
LAB_0001902a:
  if ((*(int *)(iVar1 + 0x9cc) << 0x1d < 0) && (*DAT_000190d0 << 0x1d < 0)) {
    printk(DAT_000190e4,DAT_000190d4,iVar2,*DAT_000190d0 << 0x1d,iVar6);
  }
  return iVar2;
}



/* ===== atbm_wsm_get_rate @ 000190f4 size=78 ===== */

int atbm_wsm_get_rate(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = param_3;
  iVar1 = wsm_get_tx_rate(param_1,&local_18,8);
  if (iVar1 == 0) {
    iVar2 = _copy_to_user(param_2,&local_18,8);
    if (iVar2 != 0) {
      if (*DAT_00019144 << 0x1f < 0) {
        printk(DAT_0001914c,DAT_00019148);
      }
      iVar1 = -1;
    }
  }
  else if (*DAT_00019144 << 0x1f < 0) {
    printk(DAT_00019150,DAT_00019148);
  }
  return iVar1;
}



/* ===== atbm_wsm_send_ipc_data @ 00019154 size=128 ===== */

void atbm_wsm_send_ipc_data(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_3b0 [924];
  int local_14;
  
  piVar1 = DAT_000191d4;
  local_14 = *DAT_000191d4;
  if (param_2 == 0) {
    if (*DAT_000191d8 << 0x1f < 0) {
      printk(DAT_000191e0,DAT_000191dc);
    }
    iVar2 = -1;
  }
  else {
    memset(auStack_3b0,0,0x39c);
    iVar2 = _copy_from_user(auStack_3b0,param_2,0x39c);
    if (iVar2 == 0) {
      iVar2 = wsm_send_ipc_data(param_1,auStack_3b0,0x39c);
      if ((iVar2 != 0) && (*DAT_000191d8 << 0x1f < 0)) {
        printk(DAT_000191e4,DAT_000191dc);
      }
    }
    else {
      iVar2 = atbm_wsm_send_ipc_data_part_32();
    }
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_wsm_get_rssi @ 000191e8 size=78 ===== */

int atbm_wsm_get_rssi(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = param_3;
  iVar1 = wsm_get_rssi(param_1,&local_18,8);
  if (iVar1 == 0) {
    iVar2 = _copy_to_user(param_2,&local_18,8);
    if (iVar2 != 0) {
      if (*DAT_00019238 << 0x1f < 0) {
        printk(DAT_00019240,DAT_0001923c);
      }
      iVar1 = -1;
    }
  }
  else if (*DAT_00019238 << 0x1f < 0) {
    printk(DAT_00019244,DAT_0001923c);
  }
  return iVar1;
}



/* ===== atbm_wsm_get_time @ 00019248 size=86 ===== */

undefined4 atbm_wsm_get_time(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_38 [11];
  
  memset(local_38,0,0x28);
  iVar2 = wsm_get_time(param_1,local_38,0x28);
  if (local_38[0] == 0 && iVar2 == 0) {
    iVar2 = _copy_to_user(param_2,local_38,0x28);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = *DAT_000192a0;
    uVar1 = DAT_000192a8;
  }
  else {
    iVar2 = *DAT_000192a0;
    uVar1 = DAT_000192ac;
  }
  if (iVar2 << 0x1f < 0) {
    printk(uVar1,DAT_000192a4);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_clear_wifi_config @ 000192b0 size=42 ===== */

int atbm_wsm_clear_wifi_config(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = wsm_clear_wifi_config(param_1,&local_c,4,0,param_1);
  if ((iVar1 != 0) && (*DAT_000192dc << 0x1f < 0)) {
    printk(DAT_000192e4,DAT_000192e0);
  }
  return iVar1;
}



/* ===== atbm_wsm_get_etf_rx_info @ 000192e8 size=86 ===== */

undefined4 atbm_wsm_get_etf_rx_info(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_20 [5];
  
  memset(local_20,0,0x10);
  iVar2 = wsm_get_etf_rx_info(param_1,local_20,0x10);
  if (local_20[0] == 0 && iVar2 == 0) {
    iVar2 = _copy_to_user(param_2,local_20,0x10);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = *DAT_00019340;
    uVar1 = DAT_00019348;
  }
  else {
    iVar2 = *DAT_00019340;
    uVar1 = DAT_0001934c;
  }
  if (iVar2 << 0x1f < 0) {
    printk(uVar1,DAT_00019344);
  }
  return 0xffffffff;
}



/* ===== atbm_wsm_is_tx_buffer_empty @ 00019350 size=104 ===== */

undefined4 atbm_wsm_is_tx_buffer_empty(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uStack_c = param_2 & 0xffffff;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == param_1 + 0x18) {
    iVar1 = 1;
    uStack_c = CONCAT13(1,(int3)param_2);
  }
  iVar1 = _copy_to_user(param_2,(int)&uStack_c + 3,1,iVar1,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*DAT_000193b8 << 0x1f < 0) {
      printk(DAT_000193c0,DAT_000193bc);
    }
    uVar2 = 0xffffffff;
  }
  if ((*(int *)(DAT_000193c4 + 0x9cc) << 0x1d < 0) && (*DAT_000193b8 << 0x1d < 0)) {
    printk(DAT_000193c8,DAT_000193bc,uStack_c._3_1_,uVar2);
  }
  return uVar2;
}



/* ===== atbm_wsm_set_wakeup_event @ 000193cc size=42 ===== */

int atbm_wsm_set_wakeup_event(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0;
  uStack_c = param_2;
  iVar1 = wsm_set_wakeup_event(param_1,&local_10,8);
  if ((iVar1 != 0) && (*DAT_000193f8 << 0x1f < 0)) {
    printk(DAT_00019400,DAT_000193fc);
  }
  return iVar1;
}



/* ===== atbm_wsm_add_netpattern_info @ 00019404 size=94 ===== */

void atbm_wsm_add_netpattern_info(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_68 [84];
  int local_14;
  
  piVar1 = DAT_00019464;
  local_14 = *DAT_00019464;
  memset(auStack_68,0,0x54);
  iVar2 = _copy_from_user(auStack_68,param_2,0x54);
  if (iVar2 == 0) {
    iVar2 = wsm_add_netpattern_info(param_1,auStack_68,0x54);
    if ((iVar2 != 0) && (*DAT_00019468 << 0x1f < 0)) {
      printk(DAT_00019470,DAT_0001946c);
    }
  }
  else {
    iVar2 = atbm_wsm_add_netpattern_info_part_38();
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_wsm_del_netpattern_info @ 00019474 size=94 ===== */

void atbm_wsm_del_netpattern_info(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_68 [84];
  int local_14;
  
  piVar1 = DAT_000194d4;
  local_14 = *DAT_000194d4;
  memset(auStack_68,0,0x54);
  iVar2 = _copy_from_user(auStack_68,param_2,0x54);
  if (iVar2 == 0) {
    iVar2 = wsm_del_netpattern_info(param_1,auStack_68,0x54);
    if ((iVar2 != 0) && (*DAT_000194d8 << 0x1f < 0)) {
      printk(DAT_000194e0,DAT_000194dc);
    }
  }
  else {
    iVar2 = atbm_wsm_del_netpattern_info_part_39();
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_wsm_add_conn_param_info @ 000194e4 size=94 ===== */

void atbm_wsm_add_conn_param_info(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_68 [84];
  int local_14;
  
  piVar1 = DAT_00019544;
  local_14 = *DAT_00019544;
  memset(auStack_68,0,0x54);
  iVar2 = _copy_from_user(auStack_68,param_2,0x54);
  if (iVar2 == 0) {
    iVar2 = wsm_add_conn_param_info(param_1,auStack_68,0x54);
    if ((iVar2 != 0) && (*DAT_00019548 << 0x1f < 0)) {
      printk(DAT_00019550,DAT_0001954c);
    }
  }
  else {
    iVar2 = atbm_wsm_add_conn_param_info_part_40();
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_wsm_del_conn_param_info @ 00019554 size=94 ===== */

void atbm_wsm_del_conn_param_info(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_68 [84];
  int local_14;
  
  piVar1 = DAT_000195b4;
  local_14 = *DAT_000195b4;
  memset(auStack_68,0,0x54);
  iVar2 = _copy_from_user(auStack_68,param_2,0x54);
  if (iVar2 == 0) {
    iVar2 = wsm_del_conn_param_info(param_1,auStack_68,0x54);
    if ((iVar2 != 0) && (*DAT_000195b8 << 0x1f < 0)) {
      printk(DAT_000195c0,DAT_000195bc);
    }
  }
  else {
    iVar2 = atbm_wsm_del_conn_param_info_part_41();
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_wsm_set_wk_ssid @ 000195c4 size=106 ===== */

void atbm_wsm_set_wk_ssid(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_3c [40];
  int local_14;
  
  piVar1 = DAT_00019630;
  local_14 = *DAT_00019630;
  memset(auStack_3c,0,0x28);
  iVar2 = _copy_from_user(auStack_3c,param_2,0x28);
  if (iVar2 == 0) {
    iVar2 = wsm_set_wakeup_ssid(param_1,auStack_3c,0x28);
    if ((iVar2 != 0) && (*DAT_00019634 << 0x1f < 0)) {
      printk(DAT_00019640,DAT_00019638);
    }
  }
  else {
    if (*DAT_00019634 << 0x1f < 0) {
      printk(DAT_0001963c,DAT_00019638);
    }
    iVar2 = -1;
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_wsm_clear_wk_ssid @ 00019644 size=106 ===== */

void atbm_wsm_clear_wk_ssid(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_3c [40];
  int local_14;
  
  piVar1 = DAT_000196b0;
  local_14 = *DAT_000196b0;
  memset(auStack_3c,0,0x28);
  iVar2 = _copy_from_user(auStack_3c,param_2,0x28);
  if (iVar2 == 0) {
    iVar2 = wsm_clear_wakeup_ssid(param_1,auStack_3c,0x28);
    if ((iVar2 != 0) && (*DAT_000196b4 << 0x1f < 0)) {
      printk(DAT_000196c0,DAT_000196b8);
    }
  }
  else {
    if (*DAT_000196b4 << 0x1f < 0) {
      printk(DAT_000196bc,DAT_000196b8);
    }
    iVar2 = -1;
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_wsm_conn_lose_map @ 000196c4 size=72 ===== */

int atbm_wsm_conn_lose_map(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  iVar1 = wsm_conn_lose(param_1,&uStack_18,8);
  if (iVar1 == 0) {
    iVar2 = _copy_to_user(param_2,&uStack_18,8);
    if (iVar2 != 0) {
      if (*DAT_0001970c << 0x1f < 0) {
        printk(DAT_00019714,DAT_00019710);
      }
      iVar1 = -1;
    }
  }
  else if (*DAT_0001970c << 0x1f < 0) {
    printk(DAT_00019718,DAT_00019710);
  }
  return iVar1;
}



/* ===== atbm_wsm_conn_switch @ 0001971c size=80 ===== */

int atbm_wsm_conn_switch(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_14 = 0;
  uStack_10 = 0;
  local_c = 0;
  iVar1 = _copy_from_user(&local_14,param_2,0xc,0,param_1);
  if (iVar1 == 0) {
    iVar1 = wsm_conn_switch(param_1,&local_14,0xc);
    if ((iVar1 != 0) && (*DAT_0001976c << 0x1f < 0)) {
      printk(DAT_00019778,DAT_00019770);
    }
  }
  else {
    if (*DAT_0001976c << 0x1f < 0) {
      printk(DAT_00019774,DAT_00019770);
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== atbm_wsm_auto_reconnect @ 0001977c size=78 ===== */

int atbm_wsm_auto_reconnect(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0;
  uStack_c = 0;
  iVar1 = _copy_from_user(&local_10,param_2,8);
  if (iVar1 == 0) {
    iVar1 = wsm_auto_reconnect(param_1,&local_10,8);
    if ((iVar1 != 0) && (*DAT_000197cc << 0x1f < 0)) {
      printk(DAT_000197d8,DAT_000197d0);
    }
  }
  else {
    if (*DAT_000197cc << 0x1f < 0) {
      printk(DAT_000197d4,DAT_000197d0);
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== atbm_wsm_send_customer_cmd @ 000197dc size=94 ===== */

void atbm_wsm_send_customer_cmd(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_9c [136];
  int local_14;
  
  piVar1 = DAT_0001983c;
  local_14 = *DAT_0001983c;
  memset(auStack_9c,0,0x88);
  iVar2 = _copy_from_user(auStack_9c,param_2,0x88);
  if (iVar2 == 0) {
    iVar2 = wsm_send_customer_cmd(param_1,auStack_9c,0x88);
    if ((iVar2 != 0) && (*DAT_00019840 << 0x1f < 0)) {
      printk(DAT_00019848,DAT_00019844);
    }
  }
  else {
    iVar2 = atbm_wsm_send_customer_cmd_part_47();
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_wsm_customer_cert_save @ 0001984c size=94 ===== */

int atbm_wsm_customer_cert_save(int param_1,undefined4 param_2)

{
  int iVar1;
  void *__s;
  
  __s = (void *)(param_1 + 0x164);
  memset(__s,0,0x40c);
  iVar1 = _copy_from_user(__s,param_2,0x40c);
  if (iVar1 == 0) {
    iVar1 = wsm_customer_cert_save(param_1,__s,0x40c);
    if ((iVar1 != 0) && (*DAT_000198ac << 0x1f < 0)) {
      printk(DAT_000198b8,DAT_000198b0);
    }
  }
  else {
    if (*DAT_000198ac << 0x1f < 0) {
      printk(DAT_000198b4,DAT_000198b0);
    }
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== atbm_wsm_start_check_alive @ 000198bc size=260 ===== */

int atbm_wsm_start_check_alive(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  memset(auStack_20,0,0x10);
  iVar3 = _copy_from_user(auStack_20,param_2,0x10);
  iVar6 = DAT_000199d0;
  if (iVar3 == 0) {
    if ((local_18 != 0) && (1 < local_14)) {
      local_1c = 0x4bc;
      if ((*(int *)(DAT_000199d0 + 4) == 0) && (*(int *)(DAT_000199d4 + 0x40) != 0)) {
        del_timer();
      }
      iVar4 = wsm_check_alive(param_1,auStack_20,0x10);
      iVar3 = DAT_000199d4;
      if (iVar4 == 0) {
        if (*(int *)(iVar6 + 4) != 0) {
          uVar5 = alloc_workqueue(DAT_000199e0,0,0);
          *(undefined4 *)(iVar3 + 0x24) = 0xffffffe0;
          *(int *)(iVar3 + 0x28) = iVar3 + 0x28;
          *(int *)(iVar3 + 0x2c) = iVar3 + 0x28;
          uVar1 = DAT_000199e4;
          *(undefined4 *)(iVar3 + 0x1c) = 0;
          uVar2 = DAT_000199e8;
          *(undefined4 *)(iVar3 + 0x30) = uVar1;
          *(undefined4 *)(iVar3 + 0x20) = uVar5;
          init_timer_key(iVar3,uVar2,0,0,0);
          uVar1 = DAT_000199ec;
          *(undefined4 *)(iVar3 + 0x44) = 0;
          *(undefined4 *)(iVar6 + 4) = 0;
          *(undefined4 *)(iVar3 + 0x14) = uVar1;
          *(undefined4 *)(iVar3 + 0x18) = 0;
        }
        *(uint *)(iVar3 + 0x38) = local_14;
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        *(undefined4 *)(iVar3 + 0x40) = 1;
        *(int *)(iVar3 + 0x34) = local_18 * 1000;
        iVar6 = __msecs_to_jiffies();
        iVar6 = *DAT_000199dc + iVar6;
        iVar3 = DAT_000199d4;
      }
      else {
        if (*DAT_000199c0 << 0x1f < 0) {
          printk(DAT_000199d8,DAT_000199c4);
        }
        iVar3 = DAT_000199d4;
        if (*(int *)(iVar6 + 4) != 0) {
          return iVar4;
        }
        if (*(int *)(DAT_000199d4 + 0x40) == 0) {
          return iVar4;
        }
        iVar6 = __msecs_to_jiffies(*(undefined4 *)(DAT_000199d4 + 0x34));
        iVar6 = *DAT_000199dc + iVar6;
      }
      atbm_mod_timer(iVar3,iVar6);
      return iVar4;
    }
    iVar6 = *DAT_000199c0;
    uVar1 = DAT_000199cc;
  }
  else {
    iVar6 = *DAT_000199c0;
    uVar1 = DAT_000199c8;
  }
  if (iVar6 << 0x1f < 0) {
    printk(uVar1,DAT_000199c4);
  }
  return -1;
}



/* ===== atbm_wsm_direct_trans_buffer @ 000199f0 size=126 ===== */

int atbm_wsm_direct_trans_buffer(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *__s;
  
  __s = (void *)(param_1 + 0x570);
  memset(__s,0,0x644);
  iVar2 = _copy_from_user(__s,param_2,0x644);
  if (iVar2 == 0) {
    iVar2 = wsm_direct_trans_buffer(param_1,__s,0x644);
    if (iVar2 != 0) {
      if (-1 < *DAT_00019a70 << 0x1f) {
        return iVar2;
      }
      printk(DAT_00019a7c,DAT_00019a74);
      return iVar2;
    }
    iVar2 = _copy_to_user(param_2,__s,0x644);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = *DAT_00019a70;
    uVar1 = DAT_00019a80;
  }
  else {
    iVar2 = *DAT_00019a70;
    uVar1 = DAT_00019a78;
  }
  if (iVar2 << 0x1f < 0) {
    printk(uVar1,DAT_00019a74);
  }
  return -1;
}



/* ===== atbm_wsm_force_reboot @ 00019a84 size=52 ===== */

int atbm_wsm_force_reboot(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  uStack_10 = param_3;
  iVar1 = wsm_force_reboot(param_1,&local_14,4,0,param_1);
  if (iVar1 == 0) {
    atbm_wsm_fw_sleep(param_1);
  }
  else if (*DAT_00019ab8 << 0x1f < 0) {
    printk(DAT_00019ac0,DAT_00019abc);
  }
  return iVar1;
}



/* ===== atbm_wsm_host_reboot_notify @ 00019ac4 size=42 ===== */

int atbm_wsm_host_reboot_notify(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = wsm_host_reboot_notify(param_1,&local_c,4,0,param_1);
  if ((iVar1 != 0) && (*DAT_00019af0 << 0x1f < 0)) {
    printk(DAT_00019af8,DAT_00019af4);
  }
  return iVar1;
}



/* ===== atbm_wsm_fast_cfg_recv @ 00019afc size=100 ===== */

int atbm_wsm_fast_cfg_recv(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  uVar3 = param_1;
  if (param_2 == 0) {
    iVar2 = *DAT_00019b60;
    if (-1 < iVar2 << 0x1f) {
      return -1;
    }
    local_c = 0;
    uVar1 = DAT_00019b68;
  }
  else {
    local_c = 0;
    iVar2 = _copy_from_user(&local_c);
    if (iVar2 == 0) {
      iVar2 = wsm_ext_fast_cfg_recv(param_1,&local_c);
      if (iVar2 == 0) {
        return 0;
      }
      if (*DAT_00019b60 << 0x1f < 0) {
        printk(DAT_00019b70,DAT_00019b64);
        return iVar2;
      }
      return iVar2;
    }
    iVar2 = *DAT_00019b60;
    param_3 = iVar2 << 0x1f;
    uVar1 = DAT_00019b6c;
    if (-1 < param_3) {
      return -1;
    }
  }
  printk(uVar1,DAT_00019b64,param_3,iVar2,uVar3);
  return -1;
}



/* ===== atbm_wsm_fast_cfg_send @ 00019b74 size=124 ===== */

void atbm_wsm_fast_cfg_send(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_7a [102];
  int local_14;
  
  piVar1 = DAT_00019bf0;
  local_14 = *DAT_00019bf0;
  if (param_2 == 0) {
    if (*DAT_00019bf4 << 0x1f < 0) {
      printk(DAT_00019bfc,DAT_00019bf8);
    }
    iVar2 = -1;
  }
  else {
    memset(auStack_7a,0,0x66);
    iVar2 = _copy_from_user(auStack_7a,param_2,0x66);
    if (iVar2 == 0) {
      iVar2 = wsm_ext_fast_cfg_send(param_1,auStack_7a,0x66);
      if ((iVar2 != 0) && (*DAT_00019bf4 << 0x1f < 0)) {
        printk(DAT_00019c00,DAT_00019bf8);
      }
    }
    else {
      iVar2 = atbm_wsm_fast_cfg_send_part_51();
    }
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== atbm_unlocked_ioctl @ 00019c04 size=1348 ===== */

undefined4 atbm_unlocked_ioctl(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == DAT_00019f70) {
    uVar1 = atbm_wsm_send_ipc_data
                      (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019f70,param_4
                      );
    return uVar1;
  }
  if (param_2 < DAT_00019f70) {
    uVar2 = DAT_00019f70 - 0x30018;
    if (param_2 == uVar2) {
      uVar1 = atbm_wsm_set_wifi_channel
                        (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3 & 0xff,uVar2,
                         param_4);
      return uVar1;
    }
    if (param_2 < uVar2) {
      if (param_2 == 0x7916) {
        uVar1 = atbm_wsm_etf_reset_rx
                          (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,0x7916,param_4);
        return uVar1;
      }
      if (param_2 < 30999) {
        if (param_2 == 0x790e) {
          uVar1 = atbm_wsm_smartcfg_stop
                            (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,0x790e,param_4
                            );
          return uVar1;
        }
        if (param_2 < 0x790f) {
          if (param_2 == 0x7905) {
            uVar1 = atbm_wsm_set_scan(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                                      0x7905,param_4);
            return uVar1;
          }
          if (param_2 == 0x790d) {
            uVar1 = atbm_wsm_smartcfg_start
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,0x790d,
                               param_4);
            return uVar1;
          }
        }
        else {
          if (param_2 == 0x7913) {
            uVar1 = atbm_wsm_etf_stop_tx
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,0x7913,
                               param_4);
            return uVar1;
          }
          if (param_2 == 0x7915) {
            uVar1 = atbm_wsm_etf_stop_rx
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,0x7915,
                               param_4);
            return uVar1;
          }
          if (param_2 == 0x7910) {
            uVar1 = atbm_wsm_ap_touch_stop
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,0x7910,
                               param_4);
            return uVar1;
          }
        }
      }
      else {
        if (param_2 == 0x7926) {
          uVar1 = atbm_wsm_pre_rmmod(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,0x7926
                                     ,param_4);
          return uVar1;
        }
        if (param_2 < 0x7927) {
          if (param_2 == 0x791f) {
            uVar1 = atbm_wsm_fw_sleep(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                                      0x791f,param_4);
            return uVar1;
          }
          if (param_2 == 0x7924) {
            uVar1 = atbm_wsm_clear_wifi_config
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,0x7924,
                               param_4);
            return uVar1;
          }
        }
        else {
          if (param_2 == DAT_00019f80) {
            uVar1 = atbm_wsm_ps(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                                DAT_00019f80,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019f80 + 7) {
            uVar1 = atbm_wsm_set_wifi_mode
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3 & 0xff,
                               DAT_00019f80 + 7,param_4);
            return uVar1;
          }
          if (param_2 == 0x7937) {
            uVar1 = atbm_wsm_force_reboot
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,0x7937,
                               param_4);
            return uVar1;
          }
        }
      }
    }
    else {
      if (param_2 == DAT_00019f84) {
        uVar1 = atbm_wsm_ap_touch_start
                          (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3 & 0xff,
                           DAT_00019f84,param_4);
        return uVar1;
      }
      if (param_2 < DAT_00019f84) {
        uVar2 = DAT_00019f84 - 0x2fff2;
        if (param_2 == uVar2) {
          uVar1 = atbm_wsm_set_dbg_print
                            (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3 & 0xff,uVar2,
                             param_4);
          return uVar1;
        }
        if (param_2 < uVar2) {
          if (param_2 == DAT_00019f84 - 0x30005) {
            uVar1 = atbm_wsm_set_country
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3 & 0xff,
                               DAT_00019f84 - 0x30005,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019f84 - 0x2fff4) {
            uVar1 = atbm_wsm_set_listen_itvl
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3 & 0xff,
                               DAT_00019f84 - 0x2fff4,param_4);
            return uVar1;
          }
        }
        else {
          if (param_2 == DAT_00019f88) {
            iVar3 = *(int *)(param_1 + 0x80);
            uVar1 = 1;
LAB_00019f0c:
            uVar1 = atbm_wsm_tcp_filter(*(undefined4 *)(iVar3 + 0x10),param_3,uVar1,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019f88 + 5) {
            uVar1 = atbm_wsm_set_ap_cfg(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                                        DAT_00019f88 + 5,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019f88 - 2) {
            uVar1 = atbm_wsm_connect(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                                     DAT_00019f88 - 2,param_4);
            return uVar1;
          }
        }
      }
      else {
        if (param_2 == DAT_00019f8c) {
          uVar1 = atbm_wsm_set_adaptive
                            (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019f8c,
                             param_4);
          return uVar1;
        }
        if (param_2 < DAT_00019f8c) {
          if (param_2 == DAT_00019f8c - 5) {
            uVar1 = atbm_wsm_etf_single_tone
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019f8c - 5,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019f8c - 3) {
            uVar1 = atbm_wsm_etf_start_rx
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019f8c - 3,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019f8c - 6) {
            uVar1 = atbm_wsm_etf_start_tx
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019f8c - 6,param_4);
            return uVar1;
          }
        }
        else {
          if (param_2 == DAT_00019f90) {
            uVar1 = atbm_wsm_send_at_cmd
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019f90
                               ,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019f90 + 2) {
            uVar1 = atbm_wsm_etf_start_rx_no_drop
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019f90 + 2,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019f90 - 2) {
            uVar1 = atbm_wsm_update_fw(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                                       DAT_00019f90 - 2,param_4);
            return uVar1;
          }
        }
      }
    }
  }
  else {
    if (param_2 == DAT_00019f94) {
      uVar1 = atbm_wsm_fast_cfg_send
                        (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019f94,
                         param_4);
      return uVar1;
    }
    if (param_2 < DAT_00019f94) {
      uVar2 = DAT_00019f94 - 0xb;
      if (param_2 == uVar2) {
        uVar1 = atbm_wsm_set_wk_ssid
                          (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,uVar2,param_4);
        return uVar1;
      }
      if (param_2 < uVar2) {
        uVar2 = DAT_00019f94 - 0x10;
        if (param_2 == uVar2) {
          uVar1 = atbm_wsm_del_netpattern_info
                            (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,uVar2,param_4)
          ;
          return uVar1;
        }
        if (param_2 < uVar2) {
          if (param_2 == DAT_00019f94 - 0x12) {
            uVar1 = atbm_wsm_set_wakeup_event
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019f94 - 0x12,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019f94 - 0x11) {
            uVar1 = atbm_wsm_add_netpattern_info
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019f94 - 0x11,param_4);
            return uVar1;
          }
        }
        else {
          if (param_2 == DAT_00019f98) {
            uVar1 = atbm_wsm_del_conn_param_info
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019f98
                               ,param_4);
            return uVar1;
          }
          if (param_2 < DAT_00019f98) {
            uVar1 = atbm_wsm_add_conn_param_info
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019f98
                               ,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019f98 + 2) {
            uVar1 = atbm_wsm_conn_switch
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019f98 + 2,param_4);
            return uVar1;
          }
        }
      }
      else {
        if (param_2 == DAT_00019f9c) {
          uVar1 = atbm_wsm_customer_cert_save
                            (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019f9c,
                             param_4);
          return uVar1;
        }
        if (param_2 < DAT_00019f9c) {
          uVar2 = DAT_00019f9c - 2;
          iVar3 = *(int *)(param_1 + 0x80);
          if (param_2 == uVar2) {
            uVar1 = atbm_wsm_auto_reconnect(*(undefined4 *)(iVar3 + 0x10),param_3,uVar2,param_4);
            return uVar1;
          }
          if (uVar2 < param_2) {
            uVar1 = atbm_wsm_send_customer_cmd(*(undefined4 *)(iVar3 + 0x10),param_3,uVar2,param_4);
            return uVar1;
          }
          uVar1 = atbm_wsm_clear_wk_ssid(*(undefined4 *)(iVar3 + 0x10),param_3,uVar2,param_4);
          return uVar1;
        }
        if (param_2 == DAT_00019fa0) {
          uVar1 = atbm_wsm_set_control_debug_mask
                            (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019fa0,
                             param_4);
          return uVar1;
        }
        if (param_2 == DAT_00019fa0 + 3) {
          uVar1 = atbm_wsm_fast_cfg_recv
                            (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                             DAT_00019fa0 + 3,param_4);
          return uVar1;
        }
        if (param_2 == DAT_00019fa0 - 2) {
          uVar1 = atbm_wsm_start_check_alive
                            (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                             DAT_00019fa0 - 2,param_4);
          return uVar1;
        }
      }
    }
    else {
      if (param_2 == DAT_00019fa4) {
        uVar1 = atbm_wsm_get_sdk_version
                          (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019fa4,
                           param_4);
        return uVar1;
      }
      if (param_2 < DAT_00019fa4) {
        uVar2 = DAT_00019fa4 - 0x13;
        if (param_2 == uVar2) {
          uVar1 = atbm_wsm_get_scan_info
                            (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,uVar2,param_4)
          ;
          return uVar1;
        }
        if (param_2 < uVar2) {
          if (param_2 == DAT_00019fa4 - 0x17) {
            uVar1 = atbm_wsm_get_status(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                                        DAT_00019fa4 - 0x17,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019fa4 - 0x15) {
            iVar3 = *(int *)(param_1 + 0x80);
            uVar1 = 0;
            goto LAB_00019f0c;
          }
        }
        else {
          if (param_2 == DAT_00019fa8) {
            uVar1 = atbm_wsm_get_sta_list
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019fa8
                               ,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019fa8 + 0xc) {
            uVar1 = atbm_wsm_get_version
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019fa8 + 0xc,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019fa8 - 1) {
            uVar1 = atbm_wsm_get_country
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019fa8 - 1,param_4);
            return uVar1;
          }
        }
      }
      else {
        if (param_2 == DAT_00019fac) {
          uVar1 = atbm_wsm_get_etf_rx_info
                            (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019fac,
                             param_4);
          return uVar1;
        }
        if (param_2 < DAT_00019fac) {
          if (param_2 == DAT_00019fac - 3) {
            uVar1 = atbm_wsm_get_rssi(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                                      DAT_00019fac - 3,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019fac - 2) {
            uVar1 = atbm_wsm_get_time(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                                      DAT_00019fac - 2,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019fac - 5) {
            uVar1 = atbm_wsm_get_rate(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                                      DAT_00019fac - 5,param_4);
            return uVar1;
          }
        }
        else {
          if (param_2 == DAT_00019fb0) {
            uVar1 = atbm_wsm_conn_lose_map
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,DAT_00019fb0
                               ,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019fb0 + 0x40000008) {
            uVar1 = atbm_wsm_direct_trans_buffer
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019fb0 + 0x40000008,param_4);
            return uVar1;
          }
          if (param_2 == DAT_00019fb0 - 6) {
            uVar1 = atbm_wsm_is_tx_buffer_empty
                              (*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10),param_3,
                               DAT_00019fb0 - 6,param_4);
            return uVar1;
          }
        }
      }
    }
  }
  if (*DAT_00019f74 << 0x1f < 0) {
    printk(DAT_00019f7c,DAT_00019f78,param_2);
  }
  return 0xffffffff;
}



/* ===== atbm_ioctl_add @ 0001a18c size=100 ===== */

undefined4 atbm_ioctl_add(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *__s;
  
  uVar5 = DAT_0001a1f4;
  iVar1 = DAT_0001a1f0;
  __s = (void *)(DAT_0001a1f0 + 0x48);
  memset(__s,0,0x14);
  uVar4 = DAT_0001a1f8;
  alloc_chrdev_region(__s,0,1,uVar5,param_1,param_2);
  uVar2 = cdev_alloc();
  uVar6 = DAT_0001a1fc;
  *(undefined4 *)(iVar1 + 0x4c) = uVar2;
  cdev_init(uVar2,uVar6);
  iVar3 = *(int *)(iVar1 + 0x4c);
  uVar6 = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)(iVar3 + 0x24) = uVar4;
  cdev_add(iVar3,uVar6,1);
  uVar4 = __class_create(uVar4,DAT_0001a200,iVar1 + 0x9d4);
  *(undefined4 *)(iVar1 + 0x50) = uVar4;
  uVar5 = device_create(uVar4,0,*(undefined4 *)(iVar1 + 0x48),0,uVar5);
  *(int *)(iVar1 + 0x60) = iVar1 + 0x60;
  *(int *)(iVar1 + 100) = iVar1 + 0x60;
  *(undefined4 *)(iVar1 + 0x54) = uVar5;
  return 0;
}



/* ===== atbm_ioctl_free @ 0001a204 size=120 ===== */

void atbm_ioctl_free(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_r2;
  undefined4 in_r3;
  int *piVar4;
  undefined4 uStack_18;
  
  iVar1 = DAT_0001a27c;
  uStack_18 = in_r3;
  device_destroy(*(undefined4 *)(DAT_0001a27c + 0x50),*(undefined4 *)(DAT_0001a27c + 0x48));
  class_destroy(*(undefined4 *)(iVar1 + 0x50));
  cdev_del(*(undefined4 *)(iVar1 + 0x4c));
  unregister_chrdev_region(*(undefined4 *)(iVar1 + 0x48),1);
  memset((void *)(iVar1 + 0x48),0,0x14);
  iVar3 = *(int *)(((uint)&uStack_18 & 0xffffe000) + 4) + 0x200;
  *(int *)(((uint)&uStack_18 & 0xffffe000) + 4) = iVar3;
  while (*(int *)(iVar1 + 0x60) != iVar1 + 0x60) {
    piVar2 = *(int **)(iVar1 + 0x60);
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    *piVar2 = 0x100;
    piVar2[1] = 0x122;
    kfree();
    *(int *)(iVar1 + 0x68) = *(int *)(iVar1 + 0x68) + -1;
    iVar3 = extraout_r2;
  }
  __local_bh_enable_ip(DAT_0001a280,0x200,iVar3,uStack_18);
  return;
}



/* ===== sta_info_get @ 0001a284 size=52 ===== */

int sta_info_get(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xd4) + (*(byte *)((int)param_2 + 5) + 0x306) * 4);
  while ((iVar2 != 0 &&
         ((*(int *)(iVar2 + 0xc) != param_1 ||
          (iVar1 = memcmp((void *)(iVar2 + 0x18c),param_2,6), iVar1 != 0))))) {
    iVar2 = *(int *)(iVar2 + 8);
  }
  return iVar2;
}



/* ===== sta_info_insert_non_ibss @ 0001a2b8 size=156 ===== */

undefined4 sta_info_insert_non_ibss(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_cpsr;
  
  iVar7 = param_1[4];
  disableIRQinterrupts();
  piVar1 = (int *)sta_info_get(param_1[3],param_1 + 99);
  cVar3 = '\0';
  if ((piVar1 != (int *)0x0) &&
     ((param_1 != piVar1 || (cVar3 = (char)param_1[0x5a], cVar3 == '\0')))) {
    mutex_unlock(iVar7 + 0xbf8);
    return 0xffffffef;
  }
  iVar2 = param_1[4];
  if (((char)param_1[0x5a] == '\0') || (cVar3 != '\0')) {
    iVar5 = 1;
    *(undefined1 *)((int)param_1 + 0x15) = 1;
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x5a) = 0;
      goto LAB_0001a33c;
    }
  }
  uVar4 = *(uint *)(iVar2 + 0xc04);
  iVar5 = uVar4 + 1;
  *(int *)(iVar2 + 0xc04) = iVar5;
  iVar5 = (uint)(byte)((iVar5 < 0) << 4 | (iVar5 == 0) << 3 | (0xfffffffe < uVar4) << 2 |
                       SCARRY4(uVar4,1) << 1 | (in_cpsr >> 0x1b & 1) != 0) << 0x1b;
  disableIRQinterrupts();
  param_1[2] = *(int *)(iVar2 + (*(byte *)((int)param_1 + 0x191) + 0x306) * 4);
  *(int **)(iVar2 + (*(byte *)((int)param_1 + 0x191) + 0x306) * 4) = param_1;
  iVar6 = *(int *)(iVar2 + 0xc08);
  *(int **)(iVar6 + 4) = param_1;
  *param_1 = iVar6;
  param_1[1] = iVar2 + 0xc08;
  *(int **)(iVar2 + 0xc08) = param_1;
LAB_0001a33c:
  mutex_unlock(iVar7 + 0xbf8,iVar5);
  return 0;
}



/* ===== sta_info_get_rx @ 0001a354 size=4 ===== */

int sta_info_get_rx(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xd4) + (*(byte *)((int)param_2 + 5) + 0x306) * 4);
  while ((iVar2 != 0 &&
         ((*(int *)(iVar2 + 0xc) != param_1 ||
          (iVar1 = memcmp((void *)(iVar2 + 0x18c),param_2,6), iVar1 != 0))))) {
    iVar2 = *(int *)(iVar2 + 8);
  }
  return iVar2;
}



/* ===== sta_info_alloc @ 0001a358 size=126 ===== */

int sta_info_alloc(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 uVar10;
  undefined2 *puVar9;
  
  uVar10 = *(undefined4 *)(param_1 + 0xd4);
  iVar4 = kmem_cache_alloc(*(undefined4 *)
                            (((param_3 << 0x1b) >> 0x1f) * -0x38 + DAT_0001a3d8 + 0x24));
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0xb4) = 0xffffffe0;
    *(int *)(iVar4 + 0xb8) = iVar4 + 0xb8;
    *(int *)(iVar4 + 0xbc) = iVar4 + 0xb8;
    uVar3 = DAT_0001a3e4;
    uVar2 = DAT_0001a3e0;
    uVar5 = DAT_0001a3dc;
    *(undefined4 *)(iVar4 + 0xc0) = DAT_0001a3dc;
    __mutex_init(iVar4 + 0x60,uVar3,uVar2,uVar5,param_4);
    uVar1 = *(undefined2 *)(param_2 + 1);
    uVar5 = *param_2;
    *(int *)(iVar4 + 0xc) = param_1;
    *(undefined4 *)(iVar4 + 0x10) = uVar10;
    *(undefined2 *)(iVar4 + 400) = uVar1;
    iVar7 = 0;
    *(undefined4 *)(iVar4 + 0x18c) = uVar5;
    puVar6 = (undefined1 *)(iVar4 + 0x158);
    do {
      *puVar6 = (char)iVar7;
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0x10);
    puVar8 = (undefined2 *)(iVar4 + 0x1c);
    do {
      puVar9 = puVar8 + 1;
      *puVar8 = 0xffff;
      puVar8 = puVar9;
    } while (puVar9 != (undefined2 *)(iVar4 + 0x3c));
  }
  return iVar4;
}



/* ===== sta_info_insert_rcu @ 0001a3e8 size=38 ===== */

int sta_info_insert_rcu(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  _cond_resched();
  mutex_lock(iVar1 + 0xbf8);
  iVar1 = sta_info_insert_non_ibss(param_1);
  if (iVar1 != 0) {
    kfree(param_1);
  }
  return iVar1;
}



/* ===== sta_info_insert @ 0001a40e size=8 ===== */

void sta_info_insert(void)

{
  sta_info_insert_rcu();
  return;
}



/* ===== sta_info_reinsert @ 0001a416 size=16 ===== */

void sta_info_reinsert(undefined4 param_1)

{
  _cond_resched();
  sta_info_insert_non_ibss(param_1);
  return;
}



/* ===== __sta_info_destroy @ 0001a426 size=170 ===== */

int __sta_info_destroy(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte in_Q;
  byte bVar10;
  uint in_cpsr;
  
  _cond_resched();
  if (param_1 == (int *)0x0) {
    return -2;
  }
  iVar5 = param_1[4];
  disableIRQinterrupts();
  param_1[6] = param_1[6] | 0x400;
  bVar10 = (in_cpsr >> 0x1b & 1) != 0;
  cVar8 = (in_cpsr >> 0x1c & 1) != 0;
  cVar7 = (in_cpsr >> 0x1d & 1) != 0;
  cVar9 = '\0';
  cVar6 = '\0';
  uVar1 = ieee80211_sta_tear_down_BA_sessions
                    (param_1,1,(uint)(byte)(((int)param_1 < 0) << 4 | 4U | in_Q) << 0x1b);
  disableIRQinterrupts();
  piVar3 = *(int **)(iVar5 + (*(byte *)((int)param_1 + 0x191) + 0x306) * 4);
  if (piVar3 == (int *)0x0) {
LAB_0001a4be:
    iVar4 = -2;
  }
  else {
    if (param_1 == piVar3) {
      *(int *)(iVar5 + (*(byte *)((int)param_1 + 0x191) + 0x306) * 4) = param_1[2];
    }
    else {
      for (; (piVar3[2] != 0 && (param_1 != (int *)piVar3[2])); piVar3 = (int *)piVar3[2]) {
      }
      if (piVar3[2] == 0) goto LAB_0001a4be;
      piVar3[2] = param_1[2];
    }
    iVar2 = *param_1;
    piVar3 = (int *)param_1[1];
    iVar4 = 0;
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *param_1 = 0x100;
    param_1[1] = 0x122;
  }
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 5) = 1;
    *(int *)(iVar5 + 0xc04) = *(int *)(iVar5 + 0xc04) + -1;
    synchronize_rcu(uVar1,(uint)(byte)(cVar6 << 4 | cVar9 << 3 | cVar7 << 2 | cVar8 << 1 | bVar10)
                          << 0x1b);
    kfree(param_1);
  }
  return iVar4;
}



/* ===== sta_info_destroy_addr @ 0001a4d0 size=44 ===== */

undefined4 sta_info_destroy_addr(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xd4) + 0xbf8;
  mutex_lock(iVar2);
  sta_info_get(param_1,param_2);
  uVar1 = __sta_info_destroy();
  mutex_unlock(iVar2);
  return uVar1;
}



/* ===== sta_info_init @ 0001a4fc size=42 ===== */

void sta_info_init(int param_1)

{
  __mutex_init(param_1 + 0xbf8,DAT_0001a52c,DAT_0001a528);
  *(int *)(param_1 + 0xc08) = param_1 + 0xc08;
  *(int *)(param_1 + 0xc0c) = param_1 + 0xc08;
  *(int *)(param_1 + 0xc10) = param_1 + 0xc10;
  *(int *)(param_1 + 0xc14) = param_1 + 0xc10;
  return;
}



/* ===== sta_info_flush @ 0001a530 size=60 ===== */

undefined4 sta_info_flush(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  _cond_resched();
  mutex_lock(param_1 + 0xbf8);
  puVar1 = *(undefined4 **)(param_1 + 0xc08);
  puVar2 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)(param_1 + 0xc08)) {
    if ((param_2 == 0) || (puVar1[3] == param_2)) {
      __sta_info_destroy();
    }
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar2;
  }
  mutex_unlock(param_1 + 0xbf8);
  return 0;
}



/* ===== sta_info_stop @ 0001a56c size=6 ===== */

void sta_info_stop(undefined4 param_1)

{
  sta_info_flush(param_1,0);
  return;
}



/* ===== atbm_tx @ 0001a574 size=736 ===== */

void atbm_tx(int param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  size_t __n;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  ushort *puVar15;
  int iStack_30;
  uint local_2c;
  undefined4 uStack_28;
  
  iVar14 = *(int *)(param_2 + 0xa4);
  iStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  if (iVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1a586);
    (*pcVar1)();
  }
  if (param_1 == 0) goto LAB_0001a5a0;
  if (*(int *)(param_1 + 4) == 0) {
    if (-1 < *DAT_0001a858 << 0x1f) goto LAB_0001a5a0;
    iVar7 = *(int *)(param_1 + 8);
    uVar5 = DAT_0001a860;
  }
  else {
    if (*(ushort *)(param_2 + 0x5c) < 4) {
      iVar7 = iVar14 + 4;
      iVar9 = *(int *)(param_1 + 0xd4);
      uVar3 = sta_info_get(param_1,iVar7);
      piVar2 = DAT_0001a858;
      if (uVar3 == 0) {
        if ((*(int *)(param_1 + 0xc) == 2) ||
           ((*(int *)(param_1 + 0xc) == 3 && (-1 < *(int *)(iVar14 + 4) << 0x1f)))) {
          uVar5 = DAT_0001a868;
          if (-1 < *DAT_0001a858 << 0x1f) goto LAB_0001a5a0;
          goto LAB_0001a59c;
        }
        uVar8 = *(uint *)(param_1 + 0xe0);
        bVar13 = *(byte *)(param_1 + 0xe9);
      }
      else {
        uVar8 = *(uint *)(uVar3 + 0x174);
        bVar13 = *(byte *)(uVar3 + 0x17d);
      }
      uVar12 = (uint)bVar13;
      if (1 < uVar8) {
        puVar15 = *(ushort **)(param_2 + 0xa4);
        if ((uint)((int)puVar15 - *(int *)(param_2 + 0xa0)) < uVar12 + 0x20) {
          if ((-1 < *DAT_0001a858 << 0x1f) ||
             (printk(DAT_0001a870,DAT_0001a86c), -1 < *piVar2 << 0x1f)) goto LAB_0001a5a0;
          iVar7 = *(int *)(param_1 + 8);
          uVar5 = DAT_0001a874;
          goto LAB_0001a59c;
        }
        *puVar15 = *puVar15 | 0x4000;
        pvVar4 = (void *)skb_push(param_2,uVar12);
        __n = ieee80211_hdrlen(*puVar15);
        memmove(pvVar4,(void *)(uVar12 + (int)pvVar4),__n);
      }
      uVar12 = *(uint *)(param_2 + 0xa4);
      uVar8 = uVar12 & 3;
      if (uVar8 == 0) {
        bVar13 = 0;
LAB_0001a6b8:
        iVar14 = DAT_0001a85c;
        local_2c = *(uint *)(DAT_0001a85c + (*(uint *)(param_2 + 0x68) & 7) * 4 + 0x18);
        uVar8 = uVar3;
        if (uVar3 == 0) {
          uVar10 = (ushort)*(byte *)(param_1 + 0xe8);
          if (*(uint *)(param_1 + 0xe0) < 2) {
            uVar10 = 0;
          }
          else {
            uVar11 = uVar10;
            if (*(uint *)(param_1 + 0xe0) == 3) {
LAB_0001a83e:
              uVar10 = uVar11 + 8 & 0xff;
              if (uVar3 != 0) goto LAB_0001a6f4;
            }
          }
        }
        else {
          uVar11 = (ushort)*(byte *)(uVar3 + 0x17c);
          uVar10 = (ushort)*(byte *)(uVar3 + 0x17c);
          if (*(uint *)(uVar3 + 0x174) < 2) {
            uVar10 = 0;
          }
          else if (*(uint *)(uVar3 + 0x174) == 3) goto LAB_0001a83e;
LAB_0001a6f4:
          uVar8 = (uint)*(ushort *)(uVar3 + 0x192);
        }
        pvVar4 = (void *)skb_push(param_2,0x1c);
        pvVar4 = memset(pvVar4,0,0x1c);
        uVar5 = *(undefined4 *)(param_2 + 0x50);
        *(undefined2 *)((int)pvVar4 + 6) = 4;
        *(ushort *)((int)pvVar4 + 4) = (short)uVar5 + uVar10;
        *(byte *)((int)pvVar4 + 0xd) =
             *(byte *)(iVar14 + (local_2c & 0xff) + 0x38) | (byte)(uVar8 << 2);
        *(ushort *)((int)pvVar4 + 6) = (ushort)(*(int *)(param_1 + 8) << 6) & 0x3c0 | 4;
        *(undefined4 *)((int)pvVar4 + 0x18) = 0x200;
        if (pvVar4 == (void *)0x0) {
          iVar14 = *DAT_0001a858;
          uVar5 = DAT_0001a884;
        }
        else {
          bVar13 = bVar13 | *(byte *)((int)pvVar4 + 0xf);
          *(byte *)((int)pvVar4 + 0xf) = bVar13;
          if (uVar3 == 0) {
            *(undefined1 *)((int)pvVar4 + 0xc) = 3;
          }
          else {
            if ((int)((uint)*(byte *)(uVar3 + 0x16c) << 0x1d) < 0) {
              *(undefined1 *)((int)pvVar4 + 0xc) = 0x12;
              *(byte *)((int)pvVar4 + 0xf) = bVar13 | 0x10;
            }
            else {
              if ((int)((uint)*(byte *)(uVar3 + 0x16c) << 0x1e) < 0) {
                uVar6 = 0xb;
              }
              else {
                uVar6 = 3;
              }
              *(undefined1 *)((int)pvVar4 + 0xc) = uVar6;
            }
            if ((int)((uint)*(byte *)(uVar3 + 0x16c) << 0x1d) < 0) {
              *(undefined4 *)((int)pvVar4 + 0x18) = 0x201;
            }
            if (*(char *)(uVar3 + 0x16d) != '\0') {
              *(uint *)((int)pvVar4 + 0x18) = *(uint *)((int)pvVar4 + 0x18) | 4;
            }
          }
          *(uint *)((int)pvVar4 + 0x18) = *(uint *)((int)pvVar4 + 0x18) & 0xfffffeff;
          uVar3 = (**(code **)(*(int *)(iVar9 + 0x40) + 0x2c))(*(undefined4 *)(iVar9 + 0x44));
          if ((uVar3 <= *(uint *)(param_2 + 0x50)) ||
             (iVar14 = __skb_pad(param_2,uVar3 - *(uint *)(param_2 + 0x50),1), iVar14 == 0)) {
            skb_queue_tail(iVar9 + 0x18,param_2);
            uVar3 = DAT_0001a88c;
            uVar8 = (uint)&iStack_30 & DAT_0001a88c;
            *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + 0x200;
            iVar14 = *(int *)(iVar9 + 0x1028) + 1;
            *(int *)(iVar9 + 0x1028) = iVar14;
            if ((*(char *)(iVar9 + 0x102c) == '\0') && (0xff < iVar14)) {
              *(undefined1 *)(iVar9 + 0x102c) = 1;
              __local_bh_enable_ip(DAT_0001a890,0x200);
              netif_tx_stop_all_queues(**(undefined4 **)(iVar9 + 4));
              uVar3 = uVar3 & (uint)&iStack_30;
              *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 0x200;
            }
            __local_bh_enable_ip(DAT_0001a894,0x200);
            atbm_bh_wakeup(iVar9);
            return;
          }
          iVar14 = *DAT_0001a858;
          uVar5 = DAT_0001a888;
        }
      }
      else {
        if ((int)(uVar12 << 0x1f) < 0) {
          iVar14 = *DAT_0001a858;
          uVar5 = DAT_0001a878;
        }
        else {
          uVar12 = uVar12 - *(int *)(param_2 + 0xa0);
          if (uVar8 <= uVar12) {
            bVar13 = 0x80;
            skb_push(param_2);
            goto LAB_0001a6b8;
          }
          iVar14 = *DAT_0001a858;
          uVar8 = uVar12;
          uVar5 = DAT_0001a880;
        }
        if (-1 < iVar14 << 0x1f) goto LAB_0001a5a0;
        printk(uVar5,uVar8);
        iVar14 = *DAT_0001a858;
        uVar5 = DAT_0001a87c;
      }
      if (iVar14 << 0x1f < 0) {
        printk(uVar5,DAT_0001a85c);
      }
      goto LAB_0001a5a0;
    }
    if (-1 < *DAT_0001a858 << 0x1f) goto LAB_0001a5a0;
    iVar7 = *(int *)(param_1 + 8);
    uVar5 = DAT_0001a864;
  }
LAB_0001a59c:
  printk(uVar5,DAT_0001a85c,iVar7);
LAB_0001a5a0:
  kfree_skb(param_2);
  return;
}



/* ===== atbm_rx_cb @ 0001a898 size=314 ===== */

void atbm_rx_cb(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  
  iVar4 = *param_3;
  iVar6 = *(int *)(param_1 + 0xd4);
  *(undefined4 *)(iVar4 + 0x34) = 0;
  iVar2 = *param_2;
  puVar5 = *(ushort **)(iVar4 + 0xa4);
  if (iVar2 != 0) {
    uVar3 = *DAT_0001a9d4 & 1;
    if (iVar2 != 5) {
      if (iVar2 != 9) {
        if (uVar3 == 0) {
          return;
        }
        printk(DAT_0001a9e4,iVar2,param_2[2] & 7,*puVar5);
        return;
      }
      if (uVar3 == 0) {
        return;
      }
      uVar3 = param_2[2] & 7;
      uVar1 = DAT_0001a9e0;
      goto LAB_0001a900;
    }
    if (uVar3 != 0) {
      printk(DAT_0001a9d8,param_2[2] & 7,puVar5 + 2,puVar5 + 5);
    }
    *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 1;
  }
  if (*(uint *)(iVar4 + 0x50) < 0x10) {
    if ((int)(*DAT_0001a9d4 << 0x1f) < 0) {
      uVar3 = (uint)puVar5[0xb];
      uVar1 = DAT_0001a9dc;
LAB_0001a900:
      printk(uVar1,uVar3);
      return;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x18) = 0;
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    *(uint *)(iVar4 + 0x20) = (uint)(0xe < *(ushort *)(param_2 + 1));
    uVar3 = ieee80211_channel_to_freq_khz((short)param_2[1]);
    *(uint *)(iVar4 + 0x24) = (uint)((ulonglong)uVar3 * (ulonglong)DAT_0001a9e8 >> 0x26);
    uVar3 = (uint)*(byte *)((int)param_2 + 6);
    if (uVar3 < 0xe) {
      if (3 < uVar3) {
        if (*(int *)(iVar4 + 0x20) == 1) {
          uVar3 = uVar3 - 6;
        }
        else {
          uVar3 = uVar3 - 2;
        }
      }
    }
    else {
      *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 0x200;
      uVar3 = *(byte *)((int)param_2 + 6) - 0xe;
    }
    *(uint *)(iVar4 + 0x30) = uVar3;
    *(int *)(iVar4 + 0x28) = (int)*(char *)((int)param_2 + 7);
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    if ((int)((uint)*puVar5 << 0x11) < 0) {
      *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 2;
    }
    if (*param_2 == 5) {
      *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 0x10;
    }
    if (((*puVar5 & 0xfc) == 0xb0) || ((*puVar5 & 0xfc) == 0xc0)) {
      atbm_pm_stay_awake(iVar6 + 100,0x5dc);
    }
    *(int *)(((uint)&stack0xffffffe0 & 0xffffe000) + 4) =
         *(int *)(((uint)&stack0xffffffe0 & 0xffffe000) + 4) + 0x200;
    ieee80211_rx(param_1,iVar4);
    __local_bh_enable_ip(DAT_0001a9ec,0x200);
    *param_3 = 0;
  }
  return;
}



/* ===== ____atomic_test_and_clear_bit @ 0001a9f0 size=36 ===== */

bool ____atomic_test_and_clear_bit(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << (param_1 & 0xff);
  disableIRQinterrupts();
  uVar2 = *param_2;
  *param_2 = uVar2 & ~uVar1;
  return (uVar1 & uVar2) != 0;
}



/* ===== ieee80211_free_tid_rx @ 0001aa14 size=48 ===== */

void ieee80211_free_tid_rx(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(param_1 + 0x56) <= iVar2) break;
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    kfree_skb(*(undefined4 *)(*(int *)(param_1 + 8) + iVar1));
  }
  kfree();
  kfree(*(undefined4 *)(param_1 + 0xc));
  kfree(param_1,extraout_r1,extraout_r2,param_4);
  return;
}



/* ===== sta_rx_agg_reorder_timer_expired @ 0001aa44 size=20 ===== */

void sta_rx_agg_reorder_timer_expired
               (byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ieee80211_release_reorder_timeout
            (param_1 + (-0x158 - (uint)*param_1),*param_1,param_3,
             param_1 + (-0x158 - (uint)*param_1),param_4);
  return;
}



/* ===== sta_rx_agg_session_timer_expired @ 0001aa58 size=42 ===== */

void sta_rx_agg_session_timer_expired
               (byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  _set_bit(uVar1,param_1 + (-0xac - uVar1));
  if (*(int *)(*(int *)(param_1 + (-0x148 - uVar1)) + 8) != 0) {
    queue_work_on(1,*(int *)(*(int *)(param_1 + (-0x148 - uVar1)) + 8),param_1 + (-0xa4 - uVar1),
                  param_4);
    return;
  }
  return;
}



/* ===== atbm_timer_handle @ 0001aa82 size=8 ===== */

void atbm_timer_handle(int param_1)

{
  code *pcVar1;
  
  if (*(code **)(param_1 + 0x14) == (code *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1aa86);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x0001aa8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x18));
  return;
}



/* ===== kmalloc_array.constprop.1 @ 0001aa8c size=10 ===== */

void kmalloc_array_constprop_1(int param_1)

{
  __kmalloc(param_1 << 2,0xdc0);
  return;
}



/* ===== ___ieee80211_stop_rx_ba_session @ 0001aa96 size=44 ===== */

void ___ieee80211_stop_rx_ba_session(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + param_2 * 4;
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    del_timer(iVar1 + 0x10);
    del_timer(iVar1 + 0x30);
    call_rcu(iVar1,DAT_0001aac4);
    return;
  }
  return;
}



/* ===== __ieee80211_stop_rx_ba_session @ 0001aac8 size=54 ===== */

void __ieee80211_stop_rx_ba_session
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2;
  uVar2 = param_3;
  mutex_lock(param_1 + 0x60);
  ___ieee80211_stop_rx_ba_session(param_1,param_2,param_3,param_4,param_5,uVar1,uVar2);
  mutex_unlock(param_1 + 0x60);
  return;
}



/* ===== ieee80211_process_delba @ 0001aafe size=28 ===== */

void ieee80211_process_delba(undefined4 param_1,undefined4 param_2,int param_3)

{
  if ((int)((uint)*(ushort *)(param_3 + 0x1a) << 0x14) < 0) {
    __ieee80211_stop_rx_ba_session(param_2,*(ushort *)(param_3 + 0x1a) >> 0xc,1,0,1,param_2,param_3)
    ;
  }
  return;
}



/* ===== ieee80211_sta_tear_down_BA_sessions @ 0001ab1a size=38 ===== */

void ieee80211_sta_tear_down_BA_sessions(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_2;
  cancel_work_sync(param_1 + 0xb4);
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xffff;
    uVar2 = uVar2 + 1;
    __ieee80211_stop_rx_ba_session(param_1,uVar1,0,0x24,param_2,uVar3);
  } while (uVar2 != 0x10);
  return;
}



/* ===== ieee80211_process_addba_request @ 0001ab40 size=304 ===== */

void ieee80211_process_addba_request(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  
  if (-1 < *(int *)(param_2 + 0x18) << 0x15) {
    uVar2 = *(ushort *)(param_3 + 0x1b);
    if ((((int)((uint)uVar2 << 0x1e) < 0) || ((int)((uint)*(ushort *)(param_2 + 0x194) << 0x15) < 0)
        ) && (uVar9 = uVar2 >> 6, uVar9 < 0x101)) {
      uVar1 = *(undefined1 *)(param_3 + 0x1a);
      uVar7 = (uVar2 & 0x3f) >> 2;
      iVar10 = param_2 + uVar7 * 4;
      uVar2 = *(ushort *)(param_3 + 0x1d);
      if (uVar9 == 0) {
        uVar9 = 0x100;
      }
      uVar3 = *(ushort *)(param_3 + 0x1f);
      mutex_lock(param_2 + 0x60);
      if (*(int *)(iVar10 + 0x6c) != 0) {
        ___ieee80211_stop_rx_ba_session(param_2,uVar7,0,0x20,0);
      }
      iVar5 = kmem_cache_alloc(*(undefined4 *)(DAT_0001ac70 + 4),0xcc0);
      uVar6 = DAT_0001ac74;
      if (iVar5 != 0) {
        iVar8 = param_2 + uVar7 + 0x158;
        *(int *)(iVar5 + 0x28) = iVar8;
        *(undefined4 *)(iVar5 + 0x24) = uVar6;
        *(undefined4 *)(iVar5 + 0x2c) = 0;
        init_timer_key(iVar5 + 0x10,DAT_0001ac78,0,0,0);
        uVar4 = DAT_0001ac7c;
        uVar6 = DAT_0001ac78;
        *(undefined4 *)(iVar5 + 0x4c) = 0;
        *(undefined4 *)(iVar5 + 0x44) = uVar4;
        *(int *)(iVar5 + 0x48) = iVar8;
        init_timer_key(iVar5 + 0x30,uVar6,0,0,0);
        uVar6 = kmalloc_array_constprop_1(uVar9);
        *(undefined4 *)(iVar5 + 8) = uVar6;
        iVar8 = kmalloc_array_constprop_1(uVar9);
        *(int *)(iVar5 + 0xc) = iVar8;
        if ((*(int *)(iVar5 + 8) == 0) || (iVar8 == 0)) {
          kfree(*(int *)(iVar5 + 8));
          kfree(*(undefined4 *)(iVar5 + 0xc));
          kfree(iVar5);
        }
        else {
          *(ushort *)(iVar5 + 0x56) = uVar9;
          uVar3 = uVar3 >> 4;
          *(ushort *)(iVar5 + 0x58) = uVar2;
          *(undefined1 *)(iVar5 + 0x5a) = uVar1;
          *(ushort *)(iVar5 + 0x54) = uVar3;
          *(ushort *)(iVar5 + 0x50) = uVar3;
          *(undefined2 *)(iVar5 + 0x52) = 0;
          *(int *)(iVar10 + 0x6c) = iVar5;
          if (uVar2 != 0) {
            iVar10 = __usecs_to_jiffies((uint)uVar2 << 10);
            mod_timer(iVar5 + 0x10,*DAT_0001ac80 + iVar10);
            *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(iVar5 + 0x18);
          }
        }
      }
      mutex_unlock(param_2 + 0x60);
      return;
    }
  }
  return;
}



/* ===== ieee80211_ba_session_work @ 0001ac84 size=114 ===== */

void ieee80211_ba_session_work(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (-1 < *(int *)(param_1 + -0x9c) << 0x15) {
    mutex_lock(param_1 + -0x54);
    uVar2 = 0;
    do {
      iVar1 = _test_and_clear_bit(uVar2,param_1 + -8);
      if (iVar1 != 0) {
        ___ieee80211_stop_rx_ba_session(param_1 + -0xb4,uVar2 & 0xffff,0,0x27,1,param_2,param_3);
      }
      iVar1 = _test_and_clear_bit(uVar2,param_1 + -4);
      if (iVar1 != 0) {
        ___ieee80211_stop_rx_ba_session(param_1 + -0xb4,uVar2 & 0xffff,0,1,1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x10);
    mutex_unlock(param_1 + -0x54);
    return;
  }
  return;
}



/* ===== atbm_compare_ether_addr @ 0001acf8 size=32 ===== */

short * atbm_compare_ether_addr(short *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  
  sVar3 = *param_1;
  psVar1 = param_1 + 1;
  psVar2 = param_1 + 2;
  if ((sVar3 != *param_2 || *psVar1 != param_2[1]) || *psVar2 != param_2[2]) {
    param_1 = (short *)0x1;
  }
  if ((sVar3 == *param_2 && *psVar1 == param_2[1]) && *psVar2 == param_2[2]) {
    param_1 = (short *)0x0;
  }
  return param_1;
}



/* ===== ieee80211_rx_handlers_result.part.0 @ 0001ad18 size=38 ===== */

void ieee80211_rx_handlers_result_part_0(int *param_1)

{
  if (*DAT_0001ad40 << 0x1f < 0) {
    printk(DAT_0001ad48,DAT_0001ad44,**(undefined2 **)(*param_1 + 0xa4));
  }
  kfree_skb(*param_1);
  return;
}



/* ===== ieee80211_release_reorder_frame.constprop.4 @ 0001ad4c size=66 ===== */

void ieee80211_release_reorder_frame_constprop_4(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 8) + param_2 * 4);
  if (piVar2 != (int *)0x0) {
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -1;
    *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4) = 0;
    piVar2[0xe] = piVar2[0xe] | 0x20;
    puVar1 = *(undefined4 **)(param_3 + 4);
    *piVar2 = param_3;
    piVar2[1] = (int)puVar1;
    *(int **)(param_3 + 4) = piVar2;
    *puVar1 = piVar2;
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  }
  *(ushort *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 1U & 0xfff;
  return;
}



/* ===== ieee80211_sta_reorder_release @ 0001ad8e size=308 ===== */

void ieee80211_sta_reorder_release(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int *piVar2;
  int *piVar3;
  ushort extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(undefined2 *)(param_2 + 0x56);
  __aeabi_uidivmod(*(short *)(param_2 + 0x50) - *(short *)(param_2 + 0x54) & 0xfff,uVar1);
  uVar5 = extraout_r1_00 & 0xffff;
  if ((*(int *)(*(int *)(param_2 + 8) + uVar5 * 4) == 0) && (*(short *)(param_2 + 0x52) != 0)) {
    __aeabi_idivmod(uVar5 + 1,uVar1);
    piVar3 = DAT_0001aec8;
    piVar2 = DAT_0001aec4;
    iVar6 = 1;
    uVar4 = extraout_r1_01;
    while (uVar4 != uVar5) {
      if (*(int *)(*(int *)(param_2 + 8) + uVar4 * 4) == 0) {
        iVar6 = iVar6 + 1;
      }
      else {
        if ((iVar6 != 0) &&
           (-1 < (*piVar2 - *piVar3) + *(int *)(*(int *)(param_2 + 0xc) + uVar4 * 4)))
        goto LAB_0001ae8e;
        ieee80211_release_reorder_frame_constprop_4(param_2,uVar4,param_3);
        *(ushort *)(param_2 + 0x50) =
             (ushort)((iVar6 + (uint)*(ushort *)(param_2 + 0x50)) * 0x100000 >> 0x14);
        iVar6 = 0;
      }
      __aeabi_idivmod(uVar4 + 1,*(undefined2 *)(param_2 + 0x56));
      uVar4 = extraout_r1_02;
    }
  }
  else {
    while (*(int *)(*(int *)(param_2 + 8) + uVar5 * 4) != 0) {
      ieee80211_release_reorder_frame_constprop_4(param_2,uVar5,param_3);
      __aeabi_uidivmod(*(short *)(param_2 + 0x50) - *(short *)(param_2 + 0x54) & 0xfff,
                       *(undefined2 *)(param_2 + 0x56));
      uVar5 = extraout_r1_03 & 0xffff;
    }
  }
  if (*(short *)(param_2 + 0x52) == 0) {
    del_timer(param_2 + 0x30);
    return;
  }
  uVar1 = *(undefined2 *)(param_2 + 0x56);
  __aeabi_uidivmod(*(short *)(param_2 + 0x50) - *(short *)(param_2 + 0x54) & 0xfff,uVar1);
  uVar4 = (uint)extraout_r1;
  __aeabi_idivmod(uVar4 - 1,uVar1);
  while ((extraout_r1_04 != uVar4 && (*(int *)(*(int *)(param_2 + 8) + uVar4 * 4) == 0))) {
    __aeabi_idivmod(uVar4 + 1,uVar1);
    uVar4 = extraout_r1_05;
  }
LAB_0001ae8e:
  mod_timer(param_2 + 0x30,*(int *)(*(int *)(param_2 + 0xc) + uVar4 * 4) + *DAT_0001aec4 + 1);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x38);
  return;
}



/* ===== ccmp_tkip_replaycnt @ 0001aecc size=378 ===== */

undefined4 ccmp_tkip_replaycnt(int param_1,ushort *param_2,int param_3)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  char cVar11;
  ushort *puVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 *__s2;
  undefined4 local_2e;
  undefined2 local_2a;
  
  uVar6 = *param_2;
  if ((uVar6 & 0x300) == 0x300) {
    puVar12 = param_2 + 0xf;
  }
  else {
    puVar12 = param_2 + 0xc;
  }
  if (*(int *)(param_1 + 0xc) == 2) {
    uVar7 = *puVar12;
    iVar8 = ieee80211_hdrlen(uVar6);
    uVar2 = *(undefined1 *)((int)param_2 + iVar8 + 7);
    uVar3 = *(undefined1 *)((int)param_2 + iVar8 + 6);
    uVar4 = *(undefined1 *)((int)param_2 + iVar8 + 5);
    uVar5 = *(undefined1 *)((int)param_2 + iVar8 + 4);
    local_2e = CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
    if (param_3 == 0) {
      local_2a = CONCAT11(*(undefined1 *)((int)param_2 + iVar8 + 2),
                          *(undefined1 *)((int)param_2 + iVar8));
    }
    else {
      local_2a = CONCAT11(*(undefined1 *)((int)param_2 + iVar8),
                          *(undefined1 *)((int)param_2 + iVar8 + 1));
    }
    if (*(int *)(param_2 + 2) << 0x1f < 0) {
      __s2 = (undefined4 *)(param_1 + 0x128);
      puVar10 = (undefined1 *)(param_1 + 0x12e);
      cVar11 = *(char *)(param_1 + 0x12e);
    }
    else if ((uVar6 & 0x8c) == 0x88) {
      uVar13 = (byte)uVar7 & 7;
      puVar10 = (undefined1 *)(uVar13 + 0x120 + param_1);
      cVar11 = *(char *)(param_1 + uVar13 + 0x120);
      __s2 = (undefined4 *)(uVar13 * 6 + param_1 + 0xf0);
    }
    else {
      __s2 = (undefined4 *)(param_1 + 0x12f);
      puVar10 = (undefined1 *)(param_1 + 0x135);
      cVar11 = *(char *)(param_1 + 0x135);
    }
    if (cVar11 == '\0') {
      iVar8 = memcmp(&local_2e,__s2,6);
      if (iVar8 < 1) {
        iVar8 = memcmp(&local_2e,DAT_0001b048,6);
        if (((iVar8 != 0) || (iVar8 = memcmp(__s2,DAT_0001b048,6), iVar8 != 0)) &&
           (*DAT_0001b04c << 0x1f < 0)) {
          printk(DAT_0001b050,*(undefined1 *)__s2,*(undefined1 *)((int)__s2 + 1),
                 *(undefined1 *)((int)__s2 + 2),*(undefined1 *)((int)__s2 + 3),
                 *(undefined1 *)(__s2 + 1),*(undefined1 *)((int)__s2 + 5),uVar2,uVar3,uVar4,uVar5,
                 (undefined1)local_2a,local_2a._1_1_);
        }
        return 0xffffffff;
      }
      pbVar9 = (byte *)&local_2e;
      pbVar14 = (byte *)((int)__s2 + -1);
      do {
        pbVar1 = pbVar14 + 1;
        if ((uint)*pbVar1 < (uint)*pbVar9) {
          if (3 < (int)pbVar1 - (int)__s2) break;
          if ((((uint)*pbVar9 != *pbVar1 + 1) || (pbVar14[2] != 0xff)) || (pbVar9[1] != 0)) {
            if (-1 < *DAT_0001b04c << 0x1e) {
              return 0;
            }
            printk(DAT_0001b054);
            return 0;
          }
        }
        pbVar9 = pbVar9 + 1;
        pbVar14 = pbVar1;
      } while (pbVar1 != (byte *)((int)__s2 + 5));
    }
    else {
      *puVar10 = 0;
    }
    *__s2 = local_2e;
    *(undefined2 *)(__s2 + 1) = local_2a;
  }
  return 0;
}



/* ===== ieee80211_rx_h_michael_mic_verify @ 0001b058 size=92 ===== */

undefined4 ieee80211_rx_h_michael_mic_verify(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[4] != 0) {
    if (param_1[3] == 0) {
      return 0;
    }
    iVar2 = *param_1;
    if ((*(uint *)(iVar2 + 0x34) & 2) == 0) {
      return 0;
    }
    if ((*(int *)(param_1[4] + 4) == 3) && ((**(ushort **)(iVar2 + 0xa4) & 0x4c) == 8)) {
      if ((*(uint *)(iVar2 + 0x34) & 0x19) == 0) {
        iVar1 = ieee80211_hdrlen();
        if (iVar1 + 8U <= *(uint *)(iVar2 + 0x50)) {
          skb_trim(iVar2,*(uint *)(iVar2 + 0x50) - 8);
          return 0;
        }
      }
      else if (*DAT_0001b0b4 << 0xb < 0) {
        printk(DAT_0001b0b8);
      }
      return 1;
    }
  }
  return 0;
}



/* ===== ieee80211_rx_handlers @ 0001b0bc size=1612 ===== */

void ieee80211_rx_handlers(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  size_t sVar8;
  void *__dest;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  ushort *puVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  ushort local_48;
  int local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_3a;
  undefined2 local_36;
  undefined4 ****local_34;
  undefined4 ****ppppuStack_30;
  undefined4 local_2c;
  
  *(int *)(((uint)&local_58 & 0xffffe000) + 4) =
       *(int *)(((uint)&local_58 & 0xffffe000) + 4) + 0x200;
LAB_0001b0d8:
  piVar17 = (int *)*param_2;
  if ((param_2 == piVar17) || (piVar17 == (int *)0x0)) {
    __local_bh_enable_ip(DAT_0001b734,0x200);
    return;
  }
  param_2[2] = param_2[2] + -1;
  iVar11 = *piVar17;
  piVar12 = (int *)piVar17[1];
  *piVar17 = 0;
  piVar17[1] = 0;
  *(int **)(iVar11 + 4) = piVar12;
  *piVar12 = iVar11;
  *param_1 = (int)piVar17;
  iVar11 = piVar17[0x29];
  param_1[4] = 0;
  if (-1 < piVar17[0xe] << 0x1e) goto LAB_0001b262;
  if ((piVar17[0x15] != 0) && (iVar14 = __pskb_pull_tail(piVar17), iVar14 == 0))
  goto switchD_0001b21e_default;
  iVar14 = param_1[3];
  if (iVar14 == 0) goto LAB_0001b11c;
  if (((*(char *)(iVar14 + 0x169) == '\0') || (-1 < piVar17[0xd] << 0x1e)) ||
     (piVar17[0xd] << 0x1b < 0)) goto LAB_0001b26a;
  if (*(int *)(iVar11 + 4) << 0x1f < 0) {
    iVar14 = param_1[2] + 0xdc;
  }
  else {
    iVar14 = iVar14 + 0x170;
  }
  param_1[4] = iVar14;
  switch(*(undefined4 *)(iVar14 + 4)) {
  case 2:
    iVar11 = *param_1;
    puVar16 = *(ushort **)(iVar11 + 0xa4);
    if (((*puVar16 & 0xc) == 8) || ((*puVar16 & 0xfc) == 0xb0)) {
      if (-1 < (int)(*(uint *)(iVar11 + 0x34) << 0x1e)) {
        uVar5 = *DAT_0001b568 & 1;
        if (uVar5 == 0) goto LAB_0001b254;
        printk(DAT_0001b56c);
        goto LAB_0001b256;
      }
      if ((*(uint *)(iVar11 + 0x34) & 0x10) == 0) {
        sVar8 = ieee80211_hdrlen();
        memmove(puVar16 + 2,puVar16,sVar8);
        skb_pull(iVar11,4);
        iVar11 = *param_1;
        iVar14 = *(int *)(iVar11 + 0x50) + -4;
        uVar5 = 0;
        goto LAB_0001b2b4;
      }
    }
    goto LAB_0001b240;
  case 3:
    iVar11 = ccmp_tkip_replaycnt(param_1[2],iVar11,0);
    if (iVar11 != 0) break;
    iVar11 = *param_1;
    if ((**(ushort **)(iVar11 + 0xa4) & 0xc) != 8) goto LAB_0001b240;
    if (param_1[3] != 0) {
      sVar8 = ieee80211_hdrlen();
      if (0xb < *(int *)(iVar11 + 0x50) - sVar8) {
        skb_trim(iVar11,*(int *)(iVar11 + 0x50) + -4);
        memmove((void *)((int)*(void **)(iVar11 + 0xa4) + 8),*(void **)(iVar11 + 0xa4),sVar8);
        skb_pull(iVar11,8);
        uVar5 = 0;
        goto LAB_0001b256;
      }
    }
LAB_0001b254:
    uVar5 = 1;
    goto LAB_0001b256;
  case 4:
    iVar11 = ccmp_tkip_replaycnt(param_1[2],iVar11,1);
    if (iVar11 == 0) {
      iVar11 = *param_1;
      puVar16 = *(ushort **)(iVar11 + 0xa4);
      uVar19 = (uint)*puVar16;
      sVar8 = ieee80211_hdrlen(uVar19);
      uVar5 = *(uint *)(iVar11 + 0x50);
      if ((uVar19 & 0xc) == 8) {
LAB_0001b366:
        if ((param_1[3] == 0) || ((int)((uVar5 - 0x10) - sVar8) < 0)) goto LAB_0001b254;
        skb_trim(iVar11,uVar5 - 8);
        memmove((void *)((int)*(void **)(iVar11 + 0xa4) + 8),*(void **)(iVar11 + 0xa4),sVar8);
        skb_pull(iVar11,8);
      }
      else if (0x18 < uVar5) {
        uVar15 = uVar19 & 0xfc;
        if ((uVar15 == 0xa0) || (uVar15 == 0xc0)) goto LAB_0001b366;
        if (uVar15 == 0xd0) {
          if ((int)(uVar19 << 0x11) < 0) goto LAB_0001b366;
          uVar19 = (uint)(byte)puVar16[0xc];
          if (uVar19 < 0x16) {
            if (-1 < (int)((DAT_0001b570 >> uVar19) << 0x1f)) goto LAB_0001b366;
          }
          else if (uVar19 != 0x7f) goto LAB_0001b366;
        }
      }
      goto LAB_0001b240;
    }
    break;
  case 5:
    iVar11 = *param_1;
    puVar16 = *(ushort **)(iVar11 + 0xa4);
    uVar5 = *puVar16 & 0xc;
    if ((*puVar16 & 0xc) == 0) {
      uVar19 = *(uint *)(iVar11 + 0x50);
      if (((uVar19 < 0x2a) || (iVar14 = uVar19 - 0x12, *(char *)((int)puVar16 + iVar14) != 'L')) ||
         (*(char *)((int)puVar16 + (uVar19 - 0x11)) != '\x10')) goto LAB_0001b254;
LAB_0001b2b4:
      skb_trim(iVar11,iVar14);
      goto LAB_0001b256;
    }
LAB_0001b240:
    uVar5 = 0;
LAB_0001b256:
    piVar17[0xd] = piVar17[0xd] | 2;
    if (uVar5 != 0) break;
LAB_0001b262:
    if (param_1[3] != 0) {
LAB_0001b26a:
      iVar11 = *param_1;
      if ((-1 < *(int *)(iVar11 + 0x38) << 0x1e) || ((**(ushort **)(iVar11 + 0xa4) & 0x7c) != 0x48))
      goto LAB_0001b11c;
LAB_0001b284:
      kfree_skb(iVar11);
      goto LAB_0001b0d8;
    }
LAB_0001b11c:
    uVar5 = ieee80211_rx_h_michael_mic_verify(param_1);
    if (uVar5 != 0) goto LAB_0001b710;
    puVar16 = *(ushort **)(*param_1 + 0xa4);
    if ((*puVar16 & 0x8c) == 0x88) {
      iVar11 = ieee80211_hdrlen();
      memmove(puVar16 + 1,puVar16,iVar11 - 2);
      puVar16 = (ushort *)skb_pull(*param_1,2);
      *puVar16 = *puVar16 & 0xff7f;
    }
    iVar11 = *param_1;
    piVar17 = (int *)param_1[2];
    puVar16 = *(ushort **)(iVar11 + 0xa4);
    uVar13 = *puVar16;
    if ((uVar13 & 0xc) != 8) {
      if ((uVar13 & 0xfc) == 0xd0) {
        uVar5 = *(uint *)(iVar11 + 0x50);
        if ((uVar5 < 0x19) ||
           (((param_1[3] == 0 && ((char)puVar16[0xc] != '\x04')) ||
            (-1 < (int)(*(uint *)(iVar11 + 0x38) << 0x1e))))) break;
        if ((char)puVar16[0xc] != '\x03') goto LAB_0001b284;
        if ((2 < piVar17[3] - 2U) || (uVar5 == 0x19)) goto LAB_0001b664;
        cVar1 = *(char *)((int)puVar16 + 0x19);
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          if (cVar1 == '\x02') {
            bVar21 = 0x1c < uVar5;
            bVar20 = uVar5 == 0x1d;
            goto LAB_0001b6ae;
          }
LAB_0001b65e:
          *(uint *)(iVar11 + 0x38) = *(uint *)(iVar11 + 0x38) | 0x10;
          goto LAB_0001b664;
        }
        bVar21 = 0x1f < uVar5;
        bVar20 = uVar5 == 0x20;
LAB_0001b6ae:
        if (!bVar21 || bVar20) goto LAB_0001b65e;
        *(byte *)(iVar11 + 0x60) = *(byte *)(iVar11 + 0x60) & 0xf8;
        skb_queue_tail(piVar17 + 6,*param_1);
        iVar11 = *(int *)(piVar17[0x35] + 8);
      }
      else {
LAB_0001b664:
        iVar11 = *param_1;
        piVar17 = (int *)param_1[2];
        puVar16 = *(ushort **)(iVar11 + 0xa4);
        uVar13 = *puVar16 & 0xf0;
        if (uVar13 != 0x80) {
          if (uVar13 < 0x81) {
            if ((uVar13 != 0x40) && (uVar13 != 0x50)) {
              bVar20 = uVar13 == 0x10;
LAB_0001b682:
              if (!bVar20) break;
            }
          }
          else if (uVar13 != 0xb0) {
            if (((uVar13 != 0xc0) && (uVar13 != 0xa0)) ||
               ((*(int *)(puVar16 + 2) << 0x1f < 0 &&
                ((puVar16[2] & puVar16[3] & puVar16[4]) != 0xffff)))) break;
            bVar20 = piVar17[3] == 2;
            goto LAB_0001b682;
          }
        }
        *(byte *)(iVar11 + 0x60) = *(byte *)(iVar11 + 0x60) & 0xf8;
        skb_queue_tail(piVar17 + 6,*param_1);
        iVar11 = *(int *)(param_1[1] + 8);
      }
      if (iVar11 != 0) {
        queue_work_on(1,iVar11,piVar17 + 9);
      }
      goto LAB_0001b0d8;
    }
    if ((uVar13 & 0x4c) != 8) break;
    iVar14 = *piVar17;
    uVar5 = *(uint *)(iVar11 + 0x38) & 8;
    if (uVar5 == 0) {
      local_58 = uVar5;
      uStack_54 = uVar5;
      iVar11 = ieee80211_data_to_8023_exthdr(iVar11,0,piVar17 + 4,piVar17[3]);
      if (iVar11 < 0) {
        uVar5 = *DAT_0001b568;
        uVar2 = DAT_0001b57c;
        uVar3 = DAT_0001b580;
      }
      else {
        iVar11 = param_1[3];
        if (((iVar11 != 0) && (*(int *)(iVar11 + 0x18) << 0x1c < 0)) &&
           (((*(int *)(*param_1 + 0x34) << 0x1e < 0 ||
             (((uVar13 & 0x4000) != 0 || ((uVar13 & 0xfc) == 0x48)))) ||
            (*(char *)(iVar11 + 0x169) == '\0')))) {
          *(int *)(*param_1 + 8) = iVar14;
          *(int *)(iVar14 + 0xb0) = *(int *)(iVar14 + 0xb0) + 1;
          *(int *)(iVar14 + 0xb8) = *(int *)(iVar14 + 0xb8) + *(int *)(*param_1 + 0x50);
          iVar11 = *param_1;
          if (iVar11 != 0) {
            puVar7 = (undefined4 *)param_1[2];
            if (((puVar7[3] == 2) && (-1 < *(int *)(iVar11 + 0x34) << 0x1e)) &&
               (*(char *)((int)puVar7 + 0xa2) != '\0')) goto LAB_0001b284;
            *(undefined4 *)(iVar11 + 8) = *puVar7;
            uVar4 = eth_type_trans(iVar11);
            *(undefined2 *)(iVar11 + 0x88) = uVar4;
            memset((void *)(iVar11 + 0x18),0,0x30);
            netif_rx(iVar11);
          }
          goto LAB_0001b0d8;
        }
        uVar5 = *DAT_0001b728;
        uVar2 = DAT_0001b72c;
        uVar3 = DAT_0001b730;
      }
      if ((int)(uVar5 << 0x1f) < 0) {
        printk(uVar3,uVar2);
      }
    }
    else if (((-1 < *(int *)(puVar16 + 2) << 0x1f) &&
             ((uVar5 = *(uint *)(iVar11 + 0x34) & 2, uVar5 == 0 ||
              (1 < *(int *)(param_1[4] + 4) - 2U)))) &&
            ((piVar17[3] != 2 || ((uVar5 != 0 || (*(char *)((int)piVar17 + 0xa2) == '\0')))))) {
      local_58 = 0;
      uStack_54 = 0;
      local_2c = 0;
      local_34 = &local_34;
      ppppuStack_30 = &local_34;
      iVar6 = ieee80211_data_to_8023_exthdr(iVar11,0,piVar17 + 4);
      if (iVar6 == 0) {
        puVar7 = (undefined4 *)skb_pull(iVar11,0xe);
        iVar6 = 0;
        if (puVar7 != (undefined4 *)0x0) {
          while (iVar11 != iVar6) {
            local_48 = *(ushort *)(puVar7 + 3);
            local_40 = *puVar7;
            uVar5 = (local_48 & 0xff) << 8 | (uint)(local_48 >> 8);
            local_50 = *(uint *)(iVar11 + 0x50);
            uVar19 = uVar5 + 0xe;
            local_3c = *(undefined2 *)(puVar7 + 1);
            local_3a = *(undefined4 *)((int)puVar7 + 6);
            local_36 = *(undefined2 *)((int)puVar7 + 10);
            local_4c = -uVar19 & 3;
            if ((local_50 < uVar19) ||
               (local_44 = atbm_compare_ether_addr(puVar7,DAT_0001b574), local_44 != 0)) {
LAB_0001b486:
              skb_queue_purge(&local_34);
              goto switchD_0001b21e_default;
            }
            skb_pull(iVar11,0xe);
            iVar6 = iVar11;
            if (local_4c + uVar19 < local_50) {
              iVar6 = __netdev_alloc_skb(local_44,uVar5 + 0x10,0xa20);
              if (iVar6 != 0) {
                *(int *)(iVar6 + 0xa4) = *(int *)(iVar6 + 0xa4) + 0x10;
                *(int *)(iVar6 + 0x98) = *(int *)(iVar6 + 0x98) + 0x10;
                __dest = (void *)skb_put(iVar6,uVar5);
                memcpy(__dest,*(void **)(iVar11 + 0xa4),uVar5);
                puVar7 = (undefined4 *)skb_pull(iVar11,local_4c + uVar5);
                if (puVar7 != (undefined4 *)0x0) goto LAB_0001b490;
                kfree_skb(iVar6);
              }
              goto LAB_0001b486;
            }
LAB_0001b490:
            uVar2 = DAT_0001b574;
            iVar18 = *(int *)(iVar6 + 0xa4);
            *(undefined4 *)(iVar6 + 0x68) = *(undefined4 *)(iVar11 + 0x68);
            local_50 = (uint)CONCAT11(*(undefined1 *)(iVar18 + 6),*(undefined1 *)(iVar18 + 7));
            iVar9 = atbm_compare_ether_addr(iVar18,uVar2);
            if ((((iVar9 == 0) && (local_50 != 0x80f3)) && (local_50 != 0x8137)) ||
               (iVar9 = atbm_compare_ether_addr(iVar18,DAT_0001b578), iVar9 == 0)) {
              skb_pull(iVar6,6);
            }
            else {
              puVar16 = (ushort *)skb_push(iVar6,2);
              *puVar16 = local_48;
            }
            puVar10 = (undefined4 *)skb_push(iVar6,6);
            *puVar10 = local_3a;
            *(undefined2 *)(puVar10 + 1) = local_36;
            puVar10 = (undefined4 *)skb_push(iVar6,6);
            *puVar10 = local_40;
            *(undefined2 *)(puVar10 + 1) = local_3c;
            skb_queue_tail(&local_34,iVar6);
          }
          while ((undefined4 *****)local_34 != &local_34) {
            iVar6 = skb_dequeue(&local_34);
            *(int *)(iVar6 + 8) = iVar14;
            uVar4 = eth_type_trans(iVar6,iVar14);
            *(undefined2 *)(iVar6 + 0x88) = uVar4;
            memset((void *)(iVar6 + 0x18),0,0x30);
            netif_rx(iVar6);
          }
          goto LAB_0001b284;
        }
      }
    }
  }
switchD_0001b21e_default:
  ieee80211_rx_handlers_result_part_0(param_1);
  goto LAB_0001b0d8;
LAB_0001b710:
  if (2 < uVar5) goto LAB_0001b0d8;
  goto switchD_0001b21e_default;
}



/* ===== ieee80211_release_reorder_timeout @ 0001b738 size=72 ===== */

void ieee80211_release_reorder_timeout(int param_1,int param_2)

{
  int iVar1;
  undefined4 **local_44;
  undefined4 **ppuStack_40;
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  int iStack_2c;
  int local_20;
  int iStack_1c;
  
  memset(auStack_38,0,0x28);
  local_34 = *(undefined4 *)(param_1 + 0x10);
  local_30 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + (param_2 + 0x1a) * 4 + 4);
  local_3c = 0;
  if (iVar1 != 0) {
    local_44 = &local_44;
    ppuStack_40 = &local_44;
    iStack_2c = param_1;
    local_20 = param_2;
    iStack_1c = param_2;
    ieee80211_sta_reorder_release(*(undefined4 *)(param_1 + 0x10),iVar1,&local_44);
    ieee80211_rx_handlers(auStack_38,&local_44);
  }
  return;
}



/* ===== ieee80211_rx @ 0001b780 size=892 ===== */

/* WARNING: Type propagation algorithm not settling */

void ieee80211_rx(int param_1,int *******param_2)

{
  ushort uVar1;
  int *piVar2;
  int *******pppppppiVar3;
  int *******pppppppiVar4;
  int iVar5;
  int iVar6;
  ushort extraout_r1;
  undefined2 extraout_r1_00;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int ******ppppppiVar10;
  ushort uVar11;
  ushort uVar12;
  undefined4 uVar13;
  int ******ppppppiVar14;
  int ******ppppppiVar15;
  int *******local_54;
  int *******local_50;
  int local_4c;
  int *******local_48;
  undefined4 local_44;
  int local_40;
  int local_3c [3];
  int ******local_30;
  int ******ppppppiStack_2c;
  
  param_2[0xe] = (int ******)0x0;
  *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) & 0xf8;
  uVar13 = *(undefined4 *)(param_1 + 0xd4);
  uVar12 = *(ushort *)param_2[0x29];
  memset(local_3c,0,0x1c);
  ppppppiVar14 = param_2[0x15];
  local_48 = param_2;
  local_44 = uVar13;
  local_40 = param_1;
  if ((uVar12 & 0xc) == 0) {
    if (ppppppiVar14 != (int ******)0x0) {
LAB_0001b7cc:
      iVar5 = __pskb_pull_tail(param_2,ppppppiVar14);
      if (iVar5 == 0) goto LAB_0001b7d4;
    }
  }
  else {
    ppppppiVar15 = (int ******)ieee80211_hdrlen(uVar12);
    ppppppiVar10 = param_2[0x14];
    if ((int ******)((int)ppppppiVar10 - (int)ppppppiVar14) < ppppppiVar15) {
      if (ppppppiVar10 < ppppppiVar15) goto LAB_0001b7d4;
      ppppppiVar14 = (int ******)(((int)ppppppiVar14 - (int)ppppppiVar10) + (int)ppppppiVar15);
      goto LAB_0001b7cc;
    }
  }
  ppppppiVar15 = param_2[0x29];
  ppppppiVar14 = local_48[0x29];
  uVar9 = (uint)*(ushort *)ppppppiVar14;
  if ((uVar9 & 0x8c) == 0x88) {
    if ((uVar9 & 0x300) == 0x300) {
      ppppppiVar14 = (int ******)((int)ppppppiVar14 + 0x1e);
    }
    else {
      ppppppiVar14 = ppppppiVar14 + 6;
    }
    ppppppiStack_2c = (int ******)(*(byte *)ppppppiVar14 & 0xf);
    local_30 = ppppppiStack_2c;
    ppppppiVar10 = ppppppiStack_2c;
    if ((int)((uint)*(byte *)ppppppiVar14 << 0x18) < 0) {
      local_48[0xe] = (int ******)((uint)local_48[0xe] | 8);
    }
  }
  else if ((*(ushort *)ppppppiVar14 & 0xc) == 0) {
    ppppppiStack_2c = (int ******)0x10;
    local_30 = (int ******)0x10;
    ppppppiVar10 = (int ******)(uVar9 & 0xc);
  }
  else {
    ppppppiStack_2c = (int ******)0x0;
    local_30 = (int ******)0x10;
    ppppppiVar10 = ppppppiStack_2c;
  }
  if ((int ******)0x7 < ppppppiVar10) {
    ppppppiVar10 = (int ******)0x0;
  }
  local_48[0x1a] = ppppppiVar10;
  local_3c[0] = sta_info_get_rx(param_1,(int)ppppppiVar15 + 10);
  if ((local_3c[0] == 0) && (*DAT_0001bafc << 0x1f < 0)) {
    printk(DAT_0001bb04,DAT_0001bb00,(int)ppppppiVar15 + 10);
  }
  iVar5 = local_40;
  ppppppiVar14 = param_2[0x29];
  param_2[0xe] = (int ******)((uint)param_2[0xe] | 2);
  local_48 = param_2;
  iVar6 = ieee80211_get_bssid(ppppppiVar14,param_2[0x14],*(undefined4 *)(local_40 + 0xc));
  uVar9 = *(uint *)(iVar5 + 0xc);
  if (uVar9 == 2) {
    if (iVar6 == 0) goto LAB_0001b7d4;
    if ((-1 < (int)ppppppiVar14[1] << 0x1f) &&
       (iVar5 = atbm_compare_ether_addr(iVar5 + 0x10,ppppppiVar14 + 1), iVar5 != 0)) {
      param_2[0xe] = (int ******)((uint)param_2[0xe] & 0xfffffffd);
    }
  }
  else if ((uVar9 < 2) || (4 < uVar9)) {
LAB_0001b7d4:
    kfree_skb(param_2);
    return;
  }
  uVar13 = local_44;
  pppppppiVar4 = local_48;
  local_4c = 0;
  ppppppiVar14 = local_48[0x29];
  local_54 = (int *******)&local_54;
  local_50 = (int *******)&local_54;
  if ((local_3c[0] != 0) && (-1 < (int)ppppppiVar14[1] << 0x1f)) {
    if ((((uint)*ppppppiVar14 & 0x800) != 0) &&
       (*(ushort *)(local_3c[0] + (int)(local_30 + 3) * 2 + 4) ==
        *(ushort *)((int)ppppppiVar14 + 0x16))) goto LAB_0001baf4;
    *(ushort *)(local_3c[0] + (int)(local_30 + 3) * 2 + 4) = *(ushort *)((int)ppppppiVar14 + 0x16);
  }
  if ((local_48[0x14] < (int ******)0x10) ||
     (((((uint)*ppppppiVar14 & 0xc) == 8 || (((uint)*ppppppiVar14 & 0xfc) == 0xa4)) &&
      ((local_3c[0] == 0 || (-1 < *(int *)(local_3c[0] + 0x18) << 0x1e)))))) {
LAB_0001baf4:
    ieee80211_rx_handlers_result_part_0(&local_48);
    return;
  }
  ppppppiVar14 = local_48[0x29];
  uVar9 = (uint)*(ushort *)ppppppiVar14;
  if (((uVar9 & 0x8c) == 0x88) && (local_3c[0] != 0)) {
    if ((uVar9 & 0x300) == 0x300) {
      ppppppiVar15 = (int ******)((int)ppppppiVar14 + 0x1e);
    }
    else {
      ppppppiVar15 = ppppppiVar14 + 6;
    }
    iVar5 = *(int *)(local_3c[0] + (((uint)*ppppppiVar15 & 0xf) + 0x1a) * 4 + 4);
    if ((iVar5 != 0) && (-1 < (int)(uVar9 << 0x19))) {
      if (*(ushort *)(iVar5 + 0x58) != 0) {
        iVar6 = __usecs_to_jiffies((uint)*(ushort *)(iVar5 + 0x58) << 10);
        mod_timer(iVar5 + 0x10,*DAT_0001bb08 + iVar6);
        *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(iVar5 + 0x18);
      }
      piVar2 = DAT_0001bb14;
      uVar12 = *(ushort *)((int)ppppppiVar14 + 0x16) & 0xf;
      if ((*(ushort *)((int)ppppppiVar14 + 0x16) & 0xf) == 0) {
        ppppppiVar14 = pppppppiVar4[0x29];
        uVar11 = *(ushort *)((int)ppppppiVar14 + 0x16) >> 4;
        uVar9 = (uint)uVar11;
        if ((((uint)*ppppppiVar14 & 0xc) == 8) && (0x22 < (int)pppppppiVar4[0x14])) {
          if (((uint)*ppppppiVar14 & 0x8c) == 0x88) {
            iVar6 = 0x20;
          }
          else {
            iVar6 = 0x1e;
          }
          uVar12 = (ushort)(CONCAT11(*(undefined1 *)((int)ppppppiVar14 + iVar6),
                                     *(undefined1 *)((int)ppppppiVar14 + iVar6 + 1)) == -0x7772);
        }
        iVar6 = *DAT_0001bb14;
        if (pppppppiVar4[0x14] < (int ******)0x96) {
          if (iVar6 + 1 < 0x33) {
            *DAT_0001bb14 = iVar6 + 1;
          }
          else {
            *DAT_0001bb14 = 0x32;
            uVar8 = 0x4b;
LAB_0001ba1e:
            *DAT_0001bb18 = uVar8;
          }
        }
        else if ((iVar6 < 0x14) || (*DAT_0001bb14 = iVar6 + -0x14, iVar6 + -0x14 < 0x14)) {
          uVar8 = 0x96;
          *piVar2 = 0;
          goto LAB_0001ba1e;
        }
        if ((uVar9 - *(ushort *)(iVar5 + 0x50) & 0xfff) < 0x801) {
          uVar1 = *(ushort *)(iVar5 + 0x56);
          if ((uVar9 - ((uint)*(ushort *)(iVar5 + 0x50) + (uint)uVar1) & 0xfff) < 0x801) {
            while( true ) {
              if (((uint)*(ushort *)(iVar5 + 0x50) - ((uVar9 - uVar1) + 1 & 0xfff) & 0xfff) < 0x801)
              break;
              __aeabi_uidivmod((uint)*(ushort *)(iVar5 + 0x50) - (uint)*(ushort *)(iVar5 + 0x54) &
                               0xfff,*(undefined2 *)(iVar5 + 0x56));
              ieee80211_release_reorder_frame_constprop_4(iVar5,extraout_r1_00,&local_54);
            }
          }
          __aeabi_uidivmod(uVar9 - *(ushort *)(iVar5 + 0x54) & 0xfff,*(undefined2 *)(iVar5 + 0x56));
          piVar2 = DAT_0001bb08;
          uVar7 = (uint)extraout_r1;
          if (*(int *)(*(int *)(iVar5 + 8) + uVar7 * 4) == 0) {
            if ((uVar9 == *(ushort *)(iVar5 + 0x50)) && (*(short *)(iVar5 + 0x52) == 0)) {
              uVar11 = (ushort)((uVar9 + 1) * 0x100000 >> 0x14);
            }
            else if (((uVar12 == 0) || (uVar9 != *(ushort *)(iVar5 + 0x50) + 1)) ||
                    (*(short *)(iVar5 + 0x52) != 0)) {
              *(int ********)(*(int *)(iVar5 + 8) + uVar7 * 4) = pppppppiVar4;
              *(int *)(*(int *)(iVar5 + 0xc) + uVar7 * 4) = *piVar2;
              *(short *)(iVar5 + 0x52) = *(short *)(iVar5 + 0x52) + 1;
              ieee80211_sta_reorder_release(uVar13,iVar5,&local_54);
              goto LAB_0001ba08;
            }
            *(ushort *)(iVar5 + 0x50) = uVar11;
            goto LAB_0001b964;
          }
        }
        kfree_skb(pppppppiVar4);
        goto LAB_0001ba08;
      }
      if (*DAT_0001bafc << 0x1f < 0) {
        printk(DAT_0001bb10,DAT_0001bb0c);
      }
    }
  }
LAB_0001b964:
  pppppppiVar3 = local_50;
  *pppppppiVar4 = (int ******)&local_54;
  pppppppiVar4[1] = (int ******)local_50;
  local_50 = pppppppiVar4;
  *pppppppiVar3 = (int ******)pppppppiVar4;
  local_4c = local_4c + 1;
LAB_0001ba08:
  ieee80211_rx_handlers(&local_48,&local_54);
  return;
}



/* ===== ____atomic_set_bit @ 0001bb1c size=24 ===== */

void ____atomic_set_bit(uint param_1,uint *param_2)

{
  disableIRQinterrupts();
  *param_2 = 1 << (param_1 & 0xff) | *param_2;
  return;
}



/* ===== atbm_sdio_rx_post_sched @ 0001bb34 size=8 ===== */

undefined4 atbm_sdio_rx_post_sched(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = DAT_0001bb3c;
  return 0;
}



/* ===== atbm_sdio_tx_period @ 0001bb40 size=4 ===== */

undefined4 atbm_sdio_tx_period(void)

{
  return 1;
}



/* ===== atbm_sdio_pm @ 0001bb44 size=4 ===== */

undefined4 atbm_sdio_pm(void)

{
  return 0;
}



/* ===== atbm_sdio_memcpy_fromio @ 0001bb48 size=44 ===== */

undefined4 atbm_sdio_memcpy_fromio(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*DAT_0001bb74 != 0) && (0x34ec < *(ushort *)(param_1[1] + 0xfa))) {
    return 0xffffffff;
  }
  uVar1 = sdio_memcpy_fromio(*param_1,param_3,param_2);
  return uVar1;
}



/* ===== atbm_sdio_memcpy_toio @ 0001bb78 size=38 ===== */

undefined4 atbm_sdio_memcpy_toio(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((*DAT_0001bba0 != 0) && (0x34ec < *(ushort *)(param_1[1] + 0xfa))) {
    return 0xffffffff;
  }
  uVar1 = sdio_memcpy_toio(*param_1);
  return uVar1;
}



/* ===== atbm_sdio_set_block_size @ 0001bba4 size=6 ===== */

void atbm_sdio_set_block_size(undefined4 *param_1)

{
  sdio_set_block_size(*param_1);
  return;
}



/* ===== atbm_sdio_exit @ 0001bbaa size=50 ===== */

void atbm_sdio_exit(void)

{
  int iVar1;
  
  iVar1 = atbm_get_platform_data();
  sdio_unregister_driver(DAT_0001bbdc);
  if (*(code **)(iVar1 + 0x18) != (code *)0x0) {
    (**(code **)(iVar1 + 0x18))(iVar1,0);
  }
  if (*(code **)(iVar1 + 0x10) != (code *)0x0) {
    (**(code **)(iVar1 + 0x10))(iVar1,0);
  }
  if (*(code **)(iVar1 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001bbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x14))(iVar1,0);
    return;
  }
  return;
}



/* ===== atbm_reboot_notifier @ 0001bbe0 size=64 ===== */

undefined4 atbm_reboot_notifier(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*DAT_0001bc20 << 0x1c < 0) {
    printk(DAT_0001bc24);
  }
  piVar2 = DAT_0001bc2c;
  iVar1 = DAT_0001bc28;
  *(undefined4 *)(DAT_0001bc28 + 0x10) = 1;
  iVar3 = *piVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  atbm_wsm_host_reboot_notify(iVar3);
  if (0x34ec < *(ushort *)(*piVar2 + 0xfa)) {
    atbm_wsm_fw_sleep();
  }
  atbm_sdio_exit();
  atbm_release_firmware();
  return 0;
}



/* ===== atbm_sdio_lock @ 0001bc30 size=6 ===== */

void atbm_sdio_lock(undefined4 *param_1)

{
  sdio_claim_host(*param_1);
  return;
}



/* ===== atbm_sdio_irq_subscribe @ 0001bc36 size=94 ===== */

int atbm_sdio_irq_subscribe(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -0x16;
  }
  else {
    disableIRQinterrupts();
    param_1[0x1f] = param_3;
    param_1[0x1b] = param_2;
    piVar1 = DAT_0001bc94;
    if (*DAT_0001bc94 << 0x1b < 0) {
      printk(DAT_0001bc98);
    }
    sdio_claim_host(*param_1);
    if (*piVar1 << 0x1b < 0) {
      printk(DAT_0001bc9c);
    }
    iVar2 = sdio_claim_irq(*param_1,DAT_0001bca0);
    if ((iVar2 != 0) && (*piVar1 << 0x1f < 0)) {
      printk(DAT_0001bca4,iVar2);
    }
    sdio_release_host(*param_1);
  }
  return iVar2;
}



/* ===== atbm_sdio_unlock @ 0001bca8 size=6 ===== */

void atbm_sdio_unlock(undefined4 *param_1)

{
  sdio_release_host(*param_1);
  return;
}



/* ===== atbm_resume @ 0001bcae size=120 ===== */

undefined4 atbm_resume(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_0001bd28;
  iVar4 = *(int *)(param_1 + 0x40);
  if (*DAT_0001bd28 << 0x1f < 0) {
    printk(DAT_0001bd2c);
  }
  atbm_sdio_lock(iVar4);
  iVar3 = *piVar1;
  iVar2 = iVar3 << 0x1f;
  if (iVar2 < 0) {
    printk(DAT_0001bd34,DAT_0001bd30,iVar2,iVar3,param_4);
  }
  __atbm_irq_enable(*(undefined4 *)(iVar4 + 4),0);
  atbm_sdio_unlock(iVar4);
  if ((*(int *)(iVar4 + 0x70) != 0) && (*(int *)(iVar4 + 0x80) != 0)) {
    atbm_sdio_irq_subscribe(iVar4);
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x80) = 0;
  }
  atbm_sdio_lock(iVar4);
  if (*piVar1 << 0x1f < 0) {
    printk(DAT_0001bd38,DAT_0001bd30);
  }
  __atbm_irq_enable(*(undefined4 *)(iVar4 + 4),1);
  atbm_sdio_unlock(iVar4);
  atbm_bh_resume(*(undefined4 *)(iVar4 + 4));
  return 0;
}



/* ===== atbm_sdio_irq_unsubscribe @ 0001bd3c size=62 ===== */

undefined4 atbm_sdio_irq_unsubscribe(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1[0x1b] != 0) {
    if (*DAT_0001bd7c << 0x1b < 0) {
      printk(DAT_0001bd80);
    }
    sdio_claim_host(*param_1);
    uVar1 = sdio_release_irq(*param_1);
    sdio_release_host(*param_1);
    disableIRQinterrupts();
    param_1[0x1f] = 0;
    param_1[0x1b] = 0;
  }
  return uVar1;
}



/* ===== atbm_suspend @ 0001bd84 size=146 ===== */

int atbm_suspend(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_0001be18;
  iVar5 = param_1 + -8;
  iVar4 = *(int *)(param_1 + 0x40);
  uVar2 = sdio_get_host_pm_caps(iVar5);
  if ((uVar2 & 1) == 0) {
    if (*piVar1 << 0x1d < 0) {
      printk(DAT_0001be1c);
    }
    iVar5 = -0x26;
  }
  else {
    iVar3 = sdio_set_host_pm_flags(iVar5,1);
    if (iVar3 != 0) {
      if (*piVar1 << 0x1d < 0) {
        printk(DAT_0001be20,iVar3);
      }
    }
    if ((uVar2 & 2) != 0) {
      iVar3 = sdio_set_host_pm_flags(iVar5,2);
    }
    if (iVar3 != 0) {
      if (*piVar1 << 0x1d < 0) {
        printk(DAT_0001be24,iVar3);
      }
    }
    if (*piVar1 << 0x1f < 0) {
      printk(DAT_0001be28);
    }
    iVar5 = atbm_bh_suspend(*(undefined4 *)(iVar4 + 4));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(iVar4 + 0x6c);
      *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(iVar4 + 0x7c);
      atbm_sdio_irq_unsubscribe(iVar4);
    }
  }
  return iVar5;
}



/* ===== atbm_sdio_disconnect @ 0001be2c size=72 ===== */

void atbm_sdio_disconnect(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (*DAT_0001be74 << 0x1c < 0) {
    printk(DAT_0001be78);
  }
  if (iVar1 != 0) {
    *(undefined4 *)(DAT_0001be7c + 0x18) = 0;
    if (*(int *)(iVar1 + 4) != 0) {
      atbm_core_release();
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    sdio_claim_host(param_1);
    sdio_disable_func(param_1);
    sdio_release_host(param_1);
    *(undefined4 *)(param_1 + 0x48) = 0;
    kfree(iVar1);
    return;
  }
  return;
}



/* ===== wakeme_after_rcu @ 0001be80 size=6 ===== */

void wakeme_after_rcu(int param_1)

{
  complete(param_1 + 8);
  return;
}



/* ===== atbm_sdio_thread_deinit @ 0001be86 size=98 ===== */

undefined4 atbm_sdio_thread_deinit(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  ____atomic_set_bit(3,param_1 + 8);
  *(int *)(((uint)&stack0xfffffff0 & 0xffffe000) + 4) =
       *(int *)(((uint)&stack0xfffffff0 & 0xffffe000) + 4) + 0x200;
  iVar4 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  __local_bh_enable_ip(DAT_0001bee8,0x200);
  uVar2 = DAT_0001bef0;
  iVar1 = DAT_0001beec;
  if (iVar4 != 0) {
    if (*(int *)(DAT_0001beec + 0x1c) != 0) {
      iVar3 = DAT_0001beec + 0x2c;
      *(undefined4 *)(DAT_0001beec + 0x28) = 0;
      __init_swait_queue_head(iVar3,uVar2,iVar1 + 0x34);
      call_rcu(iVar1 + 0x20,DAT_0001bef4);
    }
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
    kthread_stop(iVar4);
  }
  return 0;
}



/* ===== atbm_sdio_rev_deinit @ 0001bef8 size=28 ===== */

void atbm_sdio_rev_deinit(int param_1)

{
  if (*DAT_0001bf14 << 0x1c < 0) {
    printk(DAT_0001bf18);
  }
  atbm_sdio_thread_deinit(param_1 + 0x38);
  return;
}



/* ===== atbm_sdio_xmit_deinit @ 0001bf1c size=50 ===== */

undefined4 atbm_sdio_xmit_deinit(int param_1)

{
  if (*DAT_0001bf50 << 0x1c < 0) {
    printk(DAT_0001bf54);
  }
  atbm_sdio_thread_deinit(param_1 + 8);
  if (*(int *)(*(int *)(param_1 + 4) + 0xd4) != 0) {
    kfree();
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xd4) = 0;
  }
  return 0;
}



/* ===== atbm_sdio_irq_period @ 0001bf58 size=112 ===== */

undefined4 atbm_sdio_irq_period(int param_1,ushort param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar2 = DAT_0001bfcc;
  uStack_14 = (uint)param_2;
  iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  iStack_18 = param_1;
  uStack_10 = param_3;
  if (*DAT_0001bfc8 == '\0') {
    *DAT_0001bfc8 = '\x01';
    printk(uVar2);
  }
  (**(code **)(*(int *)(iVar3 + 0x40) + 0x18))(*(undefined4 *)(iVar3 + 0x44));
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    atbm_bh_read_ctrl_reg_unlock(iVar3,(int)&uStack_14 + 2);
    uVar2 = 0;
    if ((uStack_14 & 0xcfff0000) == 0) goto LAB_0001bf88;
    **(undefined4 **)(((uint)&iStack_18 & 0xffffe000) + 0xc) = 0;
    pcVar1 = *(code **)(*(int *)(iVar3 + 0x44) + 0x6c);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(undefined4 *)(*(int *)(iVar3 + 0x44) + 0x7c));
    }
  }
  uVar2 = 1;
LAB_0001bf88:
  (**(code **)(*(int *)(iVar3 + 0x40) + 0x1c))(*(undefined4 *)(iVar3 + 0x44));
  return uVar2;
}



/* ===== atbm_cmd52_abort @ 0001bfd0 size=100 ===== */

int atbm_cmd52_abort(undefined4 *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int local_14;
  
  puVar3 = param_1;
  local_14 = param_2;
  sdio_claim_host(*param_1);
  piVar1 = DAT_0001c034;
  bVar2 = sdio_f0_readb(*param_1,6,&local_14);
  if (*piVar1 << 0x1f < 0) {
    printk(DAT_0001c03c,DAT_0001c038,0x374,local_14,puVar3);
  }
  if (local_14 == 0) {
    bVar2 = bVar2 | 1;
  }
  else {
    bVar2 = 8;
  }
  sdio_f0_writeb(*param_1,bVar2,6,&local_14);
  if (*piVar1 << 0x1f < 0) {
    printk(DAT_0001c03c,DAT_0001c038,0x37b,local_14,puVar3);
  }
  sdio_release_host(*param_1);
  return local_14;
}



/* ===== atbm_sdio_align_size @ 0001c040 size=6 ===== */

void atbm_sdio_align_size(undefined4 *param_1)

{
  sdio_align_size(*param_1);
  return;
}



/* ===== atbm_wtd_wakeup @ 0001c046 size=54 ===== */

void atbm_wtd_wakeup(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x84) + 0x10) == 0) {
    *(undefined4 *)(DAT_0001c07c + 0x14) = 1;
    if (*DAT_0001c080 << 0x1f < 0) {
      printk(DAT_0001c084);
    }
    __wake_up(*(int *)(param_1 + 0x84) + 8,3,1,0);
    return;
  }
  return;
}



/* ===== atbm_sdio_irq_handler @ 0001c088 size=34 ===== */

void atbm_sdio_irq_handler(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1c08c);
    (*pcVar1)();
  }
  if (((*DAT_0001c0ac == 0) || (*(ushort *)(*(int *)(iVar2 + 4) + 0xfa) < 0x34ed)) &&
     (*(code **)(iVar2 + 0x6c) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001c0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0x6c))(*(undefined4 *)(iVar2 + 0x7c));
    return;
  }
  return;
}



/* ===== atbm_kthread_should_stop.part.2 @ 0001c0b0 size=54 ===== */

undefined4 atbm_kthread_should_stop_part_2(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char in_OV;
  byte in_Q;
  
  ____atomic_set_bit(3,param_1 + 8);
  uVar3 = *(uint *)(param_1 + 8);
  iVar2 = uVar3 << 0x1e;
  if (iVar2 < 0) {
    disableIRQinterrupts();
    uVar4 = *(uint *)(param_1 + 8);
    uVar1 = uVar4 | 4;
    *(uint *)(param_1 + 8) = uVar1;
    if (-1 < (int)(uVar4 << 0x1d)) {
      complete(param_1 + 0x10,uVar1,
               (uint)(byte)((iVar2 == 0) << 3 | 0x10U | ((uVar3 & 4) != 0) << 2 | in_OV << 1 | in_Q)
               << 0x1b);
    }
  }
  return 1;
}



/* ===== atbm_sdio_lmac_restart @ 0001c0e6 size=62 ===== */

undefined4 atbm_sdio_lmac_restart(int *param_1)

{
  int iVar1;
  
  iVar1 = mutex_trylock(*param_1 + 0x4c);
  if (iVar1 == 0) {
    if (*DAT_0001c124 << 0x1f < 0) {
      printk(DAT_0001c12c,DAT_0001c128);
    }
  }
  else {
    get_device(*param_1 + 8);
    put_device(*param_1 + 8);
    mutex_unlock(*param_1 + 0x4c);
  }
  return 0xffffffff;
}



/* ===== atbm_sdio_reset_chip @ 0001c130 size=22 ===== */

undefined4
atbm_sdio_reset_chip(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_0001c148 << 0x1b < 0) {
    printk(DAT_0001c150,DAT_0001c14c,param_3,*DAT_0001c148 << 0x1b,param_4);
  }
  return 0;
}



/* ===== put_task_struct @ 0001c154 size=56 ===== */

void put_task_struct(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 8);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 != 1) {
    if (0 < iVar2) {
      return;
    }
    refcount_warn_saturate(piVar3,3);
    return;
  }
  __put_task_struct();
  return;
}



/* ===== atbm_kthread_get @ 0001c18c size=58 ===== */

int atbm_kthread_get(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 != 0) {
    piVar2 = (int *)(iVar5 + 8);
    HintPreloadData(piVar2);
    do {
      ExclusiveAccess(piVar2);
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + 1;
    if (iVar4 == 0) {
      uVar3 = 2;
    }
    else {
      if ((-1 < iVar4) && (-1 < iVar4 + 1)) {
        return iVar5;
      }
      uVar3 = 1;
    }
    refcount_warn_saturate(piVar2,uVar3);
  }
  return iVar5;
}



/* ===== atbm_kthread_try_suspend @ 0001c1c6 size=78 ===== */

undefined4
atbm_kthread_try_suspend(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = atbm_kthread_get();
  if (iVar1 != 0) {
    if ((-1 < *(int *)(param_1 + 8) << 0x1c) && (-1 < *(int *)(param_1 + 8) << 0x1d)) {
      ____atomic_set_bit(1,param_1 + 8);
      if (*(int *)(((uint)&uStack_10 & 0xffffe000) + 0xc) != iVar1) {
        wake_up_process(iVar1);
        wait_for_completion_timeout(param_1 + 0x10,300);
      }
    }
    put_task_struct(iVar1);
  }
  return 0;
}



/* ===== atbm_sdio_bh_suspend @ 0001c214 size=24 ===== */

uint atbm_sdio_bh_suspend(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = atbm_kthread_try_suspend(param_1 + 8);
  uVar2 = atbm_kthread_try_suspend(param_1 + 0x38);
  return uVar2 | uVar1;
}



/* ===== atbm_sdio_reset @ 0001c22c size=4 ===== */

undefined4 atbm_sdio_reset(void)

{
  return 0;
}



/* ===== atbm_sdio_probe @ 0001c230 size=210 ===== */

int atbm_sdio_probe(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = DAT_0001c304;
  if (*DAT_0001c304 << 0x1d < 0) {
    printk(DAT_0001c308);
  }
  iVar2 = DAT_0001c30c;
  *(undefined4 *)(DAT_0001c30c + 0x18) = 0;
  *(uint *)(*param_1 + 0x1b0) = *(uint *)(*param_1 + 0x1b0) | 1;
  *(uint *)(*param_1 + 0x1b0) = *(uint *)(*param_1 + 0x1b0) | 2;
  piVar3 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_0001c310 + 8),0xdc0);
  if (piVar3 == (int *)0x0) {
    if (*piVar1 << 0x1d < 0) {
      printk(DAT_0001c314);
    }
    iVar4 = -0xc;
  }
  else {
    iVar4 = atbm_get_platform_data();
    *piVar3 = (int)param_1;
    piVar3[0x21] = iVar2;
    param_1[0x12] = (int)piVar3;
    piVar3[0x1a] = iVar4;
    sdio_claim_host(param_1);
    sdio_enable_func(param_1);
    sdio_release_host(param_1);
    if (*piVar1 << 0x1d < 0) {
      printk(DAT_0001c31c,DAT_0001c318);
    }
    iVar4 = atbm_core_probe(DAT_0001c320,piVar3,param_1 + 2,piVar3 + 1);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + 0x18) = 1;
      if (*piVar1 << 0x1c < 0) {
        printk(DAT_0001c324);
      }
    }
    else {
      sdio_claim_host(param_1);
      sdio_disable_func(param_1);
      sdio_release_host(param_1);
      param_1[0x12] = 0;
      kfree(piVar3);
      *(undefined4 *)(iVar2 + 0x18) = 0xffffffff;
    }
  }
  return iVar4;
}



/* ===== atbm_sdio_thread_wakeup @ 0001c328 size=36 ===== */

undefined4
atbm_sdio_thread_wakeup(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  disableIRQinterrupts();
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = uVar2 | 1;
  *(uint *)(param_1 + 8) = uVar1;
  iVar3 = uVar2 << 0x1f;
  if ((-1 < iVar3) && (*(int *)(param_1 + 4) != 0)) {
    wake_up_process(*(int *)(param_1 + 4),uVar1,
                    (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b,
                    iVar3,param_4);
  }
  return 0;
}



/* ===== atbm_sdio_rev_schedule @ 0001c34c size=4 ===== */

void atbm_sdio_rev_schedule(int param_1)

{
  atbm_sdio_thread_wakeup(param_1 + 0x38);
  return;
}



/* ===== atbm_sdio_xmit_schedule @ 0001c350 size=4 ===== */

void atbm_sdio_xmit_schedule(int param_1)

{
  atbm_sdio_thread_wakeup(param_1 + 8);
  return;
}



/* ===== atbm_kthread_resume @ 0001c354 size=66 ===== */

void atbm_kthread_resume(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  int extraout_r2;
  int iVar3;
  uint uVar4;
  uint in_cpsr;
  
  iVar1 = atbm_kthread_get();
  if (iVar1 != 0) {
    disableIRQinterrupts();
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
    iVar3 = (uint)(byte)(((int)in_cpsr < 0) << 4 | ((in_cpsr >> 0x1e & 1) != 0) << 3 |
                         ((in_cpsr >> 0x1d & 1) != 0) << 2 | ((in_cpsr >> 0x1c & 1) != 0) << 1 |
                        (in_cpsr >> 0x1b & 1) != 0) << 0x1b;
    disableIRQinterrupts();
    uVar4 = *(uint *)(param_1 + 8);
    uVar2 = uVar4 & 0xfffffffb;
    *(uint *)(param_1 + 8) = uVar2;
    if ((int)(uVar4 << 0x1d) < 0) {
      wake_up_process(iVar1,uVar2,iVar3);
      uVar2 = extraout_r1;
      iVar3 = extraout_r2;
    }
    put_task_struct(iVar1,uVar2,iVar3,param_4);
    return;
  }
  return;
}



/* ===== atbm_sdio_bh_resume @ 0001c396 size=22 ===== */

undefined4 atbm_sdio_bh_resume(int param_1)

{
  atbm_kthread_resume(param_1 + 8);
  atbm_kthread_resume(param_1 + 0x38);
  return 0;
}



/* ===== atbm_sdio_thread_init @ 0001c3ac size=100 ===== */

undefined4
atbm_sdio_thread_init(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  uVar1 = kthread_create_on_node(param_1[7],param_1[0xb],0xffffffff,*param_1);
  if (uVar1 < 0xfffff001) {
    *(int *)(((uint)&uStack_10 & 0xffffe000) + 4) =
         *(int *)(((uint)&uStack_10 & 0xffffe000) + 4) + 0x200;
    param_1[1] = uVar1;
    __local_bh_enable_ip(DAT_0001c418,0x200);
    param_1[4] = 0;
    __init_swait_queue_head(param_1 + 5,DAT_0001c420,DAT_0001c41c);
    uVar2 = 0;
  }
  else {
    param_1[1] = 0;
    if (*DAT_0001c410 << 0x1f < 0) {
      printk(DAT_0001c414,*param_1);
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== atbm_sdio_rev_init @ 0001c424 size=58 ===== */

undefined4 atbm_sdio_rev_init(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x38) = DAT_0001c460;
  uVar2 = DAT_0001c464;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = DAT_0001c468;
  *(undefined4 *)(param_1 + 0x60) = DAT_0001c46c;
  *(undefined4 *)(param_1 + 0x44) = 9;
  *(int *)(param_1 + 100) = param_1;
  iVar1 = atbm_sdio_thread_init(param_1 + 0x38);
  if (iVar1 == 0) {
    wake_up_process(*(undefined4 *)(param_1 + 0x3c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== atbm_sdio_xmit_init @ 0001c470 size=74 ===== */

int atbm_sdio_xmit_init(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 8) = DAT_0001c4bc;
  uVar1 = DAT_0001c4c0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = DAT_0001c4c4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x34) = param_1;
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 300;
  iVar2 = atbm_sdio_thread_init();
  if (iVar2 == 0) {
    iVar2 = kmalloc_order(0x8000,0xdc0,3);
    *(int *)(iVar3 + 0xd4) = iVar2;
    iVar2 = -(uint)(iVar2 == 0);
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



/* ===== atbm_sdio_wait_action @ 0001c4c8 size=348 ===== */

undefined4
atbm_sdio_wait_action(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  uint in_cpsr;
  uint uVar10;
  undefined4 uStack_20;
  
  uVar2 = DAT_0001c624;
  iVar7 = *(int *)(param_1 + 0xc);
  uStack_20 = param_4;
LAB_0001c4d4:
  do {
    **(undefined4 **)(((uint)&uStack_20 & uVar2) + 0xc) = 1;
    iVar5 = iVar7;
    while( true ) {
      iVar4 = kthread_should_stop();
      uVar10 = in_cpsr;
      if ((iVar4 != 0) &&
         (iVar4 = atbm_kthread_should_stop_part_2(param_1), uVar10 = in_cpsr, iVar4 != 0)) {
        **(undefined4 **)(((uint)&uStack_20 & 0xffffe000) + 0xc) = 0;
        return 0xffffffff;
      }
      disableIRQinterrupts();
      uVar6 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar6 & 0xfffffffe;
      piVar3 = DAT_0001c634;
      in_cpsr = uVar10 & 0xffffff00;
      bVar9 = (uVar10 >> 0x1b & 1) != 0;
      cVar8 = (uVar10 >> 0x1c & 1) != 0;
      if ((int)(uVar6 << 0x1f) < 0) {
        if (*(code **)(param_1 + 0x28) != (code *)0x0) {
          (**(code **)(param_1 + 0x28))(param_1);
        }
        **(undefined4 **)(((uint)&uStack_20 & 0xffffe000) + 0xc) = 0;
        return 0;
      }
      if (*(int *)(param_1 + 8) << 0x1e < 0) {
        if (*DAT_0001c634 << 0xf < 0) {
          printk(DAT_0001c62c,DAT_0001c628);
        }
        **(undefined4 **)(((uint)&uStack_20 & uVar2) + 0xc) = 1;
        goto LAB_0001c55a;
      }
      if ((((iVar5 == 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) &&
          (iVar4 = (**(code **)(param_1 + 0x20))(param_1), iVar4 != 0)) ||
         ((*(code **)(param_1 + 0x24) != (code *)0x0 &&
          (iVar4 = (**(code **)(param_1 + 0x24))(param_1), iVar4 != 0)))) break;
      **(undefined4 **)(((uint)&uStack_20 & uVar2) + 0xc) = 1;
      iVar4 = kthread_should_stop();
      if ((iVar4 == 0) || (iVar4 = atbm_kthread_should_stop_part_2(param_1), iVar4 == 0)) {
        iVar5 = schedule_timeout(iVar7);
      }
      **(undefined4 **)(((uint)&uStack_20 & uVar2) + 0xc) = 1;
    }
  } while( true );
LAB_0001c55a:
  iVar5 = *(uint *)(param_1 + 8) << 0x1e;
  if (iVar5 >= 0) goto LAB_0001c59e;
  bVar1 = (iVar5 < 0) << 4 | (iVar5 == 0) << 3 | ((*(uint *)(param_1 + 8) & 4) != 0) << 2 |
          cVar8 << 1 | bVar9;
  disableIRQinterrupts();
  uVar6 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar6 | 4;
  uVar10 = in_cpsr & 0xffffff00;
  bVar9 = (in_cpsr >> 0x1b & 1) != 0;
  cVar8 = (in_cpsr >> 0x1c & 1) != 0;
  iVar5 = uVar6 << 0x1d;
  in_cpsr = uVar10;
  if (-1 < iVar5) {
    complete(param_1 + 0x10,iVar5,(uint)bVar1 << 0x1b);
    in_cpsr = uVar10;
  }
  iVar5 = kthread_should_stop();
  if (iVar5 != 0) {
    ____atomic_set_bit(3,param_1 + 8);
    disableIRQinterrupts();
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
    in_cpsr = in_cpsr & 0xffffff00;
    goto LAB_0001c59e;
  }
  schedule();
  **(undefined4 **)(((uint)&uStack_20 & uVar2) + 0xc) = 1;
  goto LAB_0001c55a;
LAB_0001c59e:
  disableIRQinterrupts();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffb;
  in_cpsr = in_cpsr & 0xffffff00;
  **(undefined4 **)(((uint)&uStack_20 & uVar2) + 0xc) = 1;
  if (*piVar3 << 0xf < 0) {
    printk(DAT_0001c630,DAT_0001c628);
  }
  goto LAB_0001c4d4;
}



/* ===== atbm_sdio_rx_thread @ 0001c638 size=84 ===== */

undefined4 atbm_sdio_rx_thread(int param_1)

{
  int *piVar1;
  int iVar2;
  int iStack_18;
  sched_param local_14;
  
  piVar1 = DAT_0001c68c;
  local_14.__sched_priority = 1;
  iStack_18 = param_1;
  if (*DAT_0001c68c << 0x1d < 0) {
    printk(DAT_0001c694,DAT_0001c690);
  }
  sched_setscheduler(*(__pid_t *)(((uint)&iStack_18 & 0xffffe000) + 0xc),1,&local_14);
  while (iVar2 = atbm_sdio_wait_action(param_1 + 0x38), iVar2 == 0) {
    atbm_sdio_rx_bh(*(undefined4 *)(param_1 + 4));
  }
  if (*piVar1 << 0x1d < 0) {
    printk(DAT_0001c698,DAT_0001c690);
  }
  return 0;
}



/* ===== atbm_sdio_tx_thread @ 0001c69c size=186 ===== */

undefined4 atbm_sdio_tx_thread(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iStack_18;
  sched_param local_14;
  
  piVar1 = DAT_0001c758;
  local_14.__sched_priority = 2;
  iStack_18 = param_1;
  if (*DAT_0001c758 << 0x1d < 0) {
    printk(DAT_0001c760,DAT_0001c75c);
  }
  sched_setscheduler(*(__pid_t *)(((uint)&iStack_18 & 0xffffe000) + 0xc),1,&local_14);
  while (iVar5 = atbm_sdio_wait_action(param_1 + 8), iVar5 == 0) {
    atbm_sdio_tx_bh(*(undefined4 *)(param_1 + 4));
  }
  if (*piVar1 << 0x1d < 0) {
    printk(DAT_0001c764,DAT_0001c75c);
  }
  uVar6 = (uint)&iStack_18 & 0xffffe000;
  iVar5 = *(int *)(param_1 + 4);
  *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 0x200;
  if (*(short *)(iVar5 + 0x13c) != -1) {
    *(undefined4 *)(iVar5 + 0x138) = 0xffffffff;
    *(undefined2 *)(iVar5 + 0x13c) = 0xffff;
    *(undefined4 *)(iVar5 + 300) = 0;
    *(undefined4 *)(iVar5 + 0x134) = 0;
    iVar2 = DAT_0001c768;
    *(undefined4 *)(iVar5 + 0x124) = 1;
    uVar4 = DAT_0001c770;
    uVar3 = DAT_0001c76c;
    if (*(char *)(iVar2 + 1) == '\0') {
      *(undefined1 *)(iVar2 + 1) = 1;
      printk(uVar4,uVar3);
    }
    __wake_up(iVar5 + 0xbb4,3,1,0);
  }
  __local_bh_enable_ip(DAT_0001c774,0x200);
  return 0;
}



/* ===== atbm_sdio_rx_pre_sched @ 0001c778 size=112 ===== */

ushort atbm_sdio_rx_pre_sched(int param_1,ushort param_2,undefined4 param_3)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar2 = 0;
  uStack_14 = (uint)param_2;
  iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  if ((*DAT_0001c7e8 == 0) || (*(ushort *)(iVar3 + 0xfa) < 0x34ed)) {
    iStack_18 = param_1;
    uStack_10 = param_3;
    (**(code **)(*(int *)(iVar3 + 0x40) + 0x18))(*(undefined4 *)(iVar3 + 0x44));
    atbm_bh_read_ctrl_reg_unlock(iVar3,(int)&uStack_14 + 2);
    uVar2 = uStack_14._2_2_ & 0xcfff;
    if ((uStack_14 & 0xcfff0000) == 0) {
      __atbm_irq_enable(iVar3,1);
    }
    else {
      **(undefined4 **)(((uint)&iStack_18 & 0xffffe000) + 0xc) = 0;
      pcVar1 = *(code **)(*(int *)(iVar3 + 0x44) + 0x6c);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(*(undefined4 *)(*(int *)(iVar3 + 0x44) + 0x7c));
      }
      uVar2 = 1;
    }
    (**(code **)(*(int *)(iVar3 + 0x40) + 0x1c))(*(undefined4 *)(iVar3 + 0x44));
  }
  return uVar2;
}



/* ===== atbm_sdio_memcpy_fromio_for_sleep @ 0001c7ec size=16 ===== */

void atbm_sdio_memcpy_fromio_for_sleep(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  sdio_memcpy_fromio(*param_1,param_3,param_2);
  return;
}



/* ===== atbm_sdio_memcpy_toio_for_sleep @ 0001c7fc size=6 ===== */

void atbm_sdio_memcpy_toio_for_sleep(undefined4 *param_1)

{
  sdio_memcpy_toio(*param_1);
  return;
}



/* ===== atbm_wtd_term @ 0001c802 size=10 ===== */

undefined4 atbm_wtd_term(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0x84) + 0x10);
}



/* ===== atbm_reset_lmc_cpu @ 0001c80c size=4 ===== */

undefined4 atbm_reset_lmc_cpu(void)

{
  return 0;
}



/* ===== cleanup_module @ 0001c810 size=46 ===== */

void cleanup_module(void)

{
  int iVar1;
  
  iVar1 = DAT_0001c840;
  *(undefined4 *)(DAT_0001c840 + 0x10) = 1;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  atbm_sdio_exit();
  atbm_release_firmware();
  unregister_reboot_notifier(DAT_0001c844);
  atbm_module_attribute_exit();
  atbm_ioctl_free();
  wait_for_completion(iVar1 + 0x28);
  return;
}



/* ===== atbm_insert_crtl @ 0001c848 size=24 ===== */

undefined4
atbm_insert_crtl(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_0001c860 << 0xe < 0) {
    printk(DAT_0001c868,DAT_0001c864,param_2,*DAT_0001c860 << 0xe,param_4);
  }
  return 0;
}



/* ===== atbm_power_ctrl @ 0001c86c size=24 ===== */

undefined4
atbm_power_ctrl(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*DAT_0001c884 << 0xe < 0) {
    printk(DAT_0001c88c,DAT_0001c888,param_2,*DAT_0001c884 << 0xe,param_4);
  }
  return 0;
}



/* ===== atbm_get_platform_data @ 0001c890 size=4 ===== */

undefined4 atbm_get_platform_data(void)

{
  return DAT_0001c894;
}



/* ===== atbm_reg_read_dpll.part.6 @ 0001c898 size=1 ===== */

void atbm_reg_read_dpll_part_6(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(2,0x1c898);
  (*pcVar1)();
}



/* ===== __atbm_reg_read @ 0001c89a size=58 ===== */

undefined4 __atbm_reg_read(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_3 & 3) != 0) && (4 < param_4)) {
    if (*DAT_0001c8d4 << 0x1d < 0) {
      printk(DAT_0001c8dc,DAT_0001c8d8);
    }
    return 0xffffffea;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    param_1 = atbm_reg_read_dpll_part_6(param_1,(param_2 & 7) << 2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001c8d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(iVar2 + 0x10))(*(undefined4 *)(param_1 + 0x44));
  return uVar1;
}



/* ===== __atbm_reg_write @ 0001c8e0 size=28 ===== */

void __atbm_reg_write(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    param_1 = atbm_reg_read_dpll_part_6(param_1,(param_2 & 7) << 2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001c8fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x14))(*(undefined4 *)(param_1 + 0x44));
  return;
}



/* ===== atbm_ahb_write_32.part.12 @ 0001c8fc size=22 ===== */

void atbm_ahb_write_32_part_12(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_0001c918;
  iVar1 = DAT_0001c914;
  iVar3 = 0xb;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    (**(code **)(iVar1 + 4))(uVar2);
  }
  return;
}



/* ===== __atbm_data_write.constprop.13 @ 0001c91c size=52 ===== */

void __atbm_data_write_constprop_13(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 extraout_r2;
  int iVar2;
  int extraout_r3;
  undefined8 uVar3;
  
  uVar1 = (param_4 & 0x7f) << 6 | (uint)*(byte *)(param_1 + 0xa5) << 5 | 8;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    uVar3 = atbm_reg_read_dpll_part_6(param_1,uVar1);
    uVar1 = (uint)((ulonglong)uVar3 >> 0x20);
    param_1 = (int)uVar3;
    param_3 = extraout_r2;
    iVar2 = extraout_r3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001c94e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0x44),uVar1,param_2,param_3);
  return;
}



/* ===== __atbm_reg_read_for_sleep @ 0001c950 size=48 ===== */

undefined4 __atbm_reg_read_for_sleep(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (((param_3 & 3) != 0) && (4 < param_4)) {
    if (*DAT_0001c980 << 0x1d < 0) {
      printk(DAT_0001c988,DAT_0001c984);
    }
    return 0xffffffea;
  }
  uVar1 = atbm_sdio_memcpy_fromio_for_sleep(*(undefined4 *)(param_1 + 0x44),(param_2 & 7) << 2);
  return uVar1;
}



/* ===== __atbm_reg_write_for_sleep @ 0001c98c size=12 ===== */

void __atbm_reg_write_for_sleep(int param_1,uint param_2)

{
  atbm_sdio_memcpy_toio_for_sleep(*(undefined4 *)(param_1 + 0x44),(param_2 & 7) << 2);
  return;
}



/* ===== __atbm_reg_write_dpll @ 0001c998 size=68 ===== */

undefined4 __atbm_reg_write_dpll(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_3 & 3) != 0) && (4 < param_4)) {
    if (*DAT_0001c9dc << 0x1d < 0) {
      printk(DAT_0001c9e4,DAT_0001c9e0);
    }
    return 0xffffffea;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    param_1 = atbm_reg_read_dpll_part_6(param_1,param_2 & 0x1f | (param_5 & 0x7f) << 6);
  }
                    /* WARNING: Could not recover jumptable at 0x0001c9da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(iVar2 + 0x14))(*(undefined4 *)(param_1 + 0x44));
  return uVar1;
}



/* ===== __atbm_reg_read_dpll @ 0001c9e8 size=36 ===== */

void __atbm_reg_read_dpll
               (int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    param_1 = atbm_reg_read_dpll_part_6(param_1,param_2 & 0x1f | (param_5 & 0x7f) << 6);
  }
                    /* WARNING: Could not recover jumptable at 0x0001ca0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x10))(*(undefined4 *)(param_1 + 0x44));
  return;
}



/* ===== atbm_reg_read_dpll @ 0001ca0c size=56 ===== */

undefined4 atbm_reg_read_dpll(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = param_2;
  uVar3 = param_3;
  if (iVar1 == 0) {
    iVar1 = atbm_reg_read_dpll_part_6();
  }
  (**(code **)(iVar1 + 0x18))(*(undefined4 *)(param_1 + 0x44));
  uVar2 = __atbm_reg_read_dpll(param_1,param_2,param_3,param_4,0,uVar2,uVar3);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return uVar2;
}



/* ===== atbm_reg_write_dpll @ 0001ca44 size=56 ===== */

undefined4 atbm_reg_write_dpll(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = param_2;
  uVar3 = param_3;
  if (iVar1 == 0) {
    iVar1 = atbm_reg_read_dpll_part_6();
  }
  (**(code **)(iVar1 + 0x18))(*(undefined4 *)(param_1 + 0x44));
  uVar2 = __atbm_reg_write_dpll(param_1,param_2,param_3,param_4,0,uVar2,uVar3);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return uVar2;
}



/* ===== atbm_reg_read @ 0001ca7c size=50 ===== */

undefined4 atbm_reg_read(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = param_4;
  if (iVar1 == 0) {
    iVar1 = atbm_reg_read_dpll_part_6();
  }
  (**(code **)(iVar1 + 0x18))(*(undefined4 *)(param_1 + 0x44));
  uVar2 = __atbm_reg_read(param_1,param_2,param_3,param_4,uVar2);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return uVar2;
}



/* ===== atbm_reg_read_32.constprop.21 @ 0001caae size=10 ===== */

void atbm_reg_read_32_constprop_21(undefined4 param_1,undefined4 param_2)

{
  atbm_reg_read(param_1,0,param_2,4);
  return;
}



/* ===== atbm_reg_read_16.constprop.23 @ 0001cab8 size=24 ===== */

void atbm_reg_read_16_constprop_23(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *local_c;
  
  local_c = param_2;
  atbm_reg_read(param_1,1,&local_c,4,param_1);
  *param_2 = (short)local_c;
  return;
}



/* ===== atbm_reg_write @ 0001cad0 size=50 ===== */

undefined4 atbm_reg_write(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = param_4;
  if (iVar1 == 0) {
    iVar1 = atbm_reg_read_dpll_part_6();
  }
  (**(code **)(iVar1 + 0x18))(*(undefined4 *)(param_1 + 0x44));
  uVar2 = __atbm_reg_write(param_1,param_2,param_3,param_4,uVar2);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return uVar2;
}



/* ===== atbm_reg_read_for_sleep @ 0001cb02 size=4 ===== */

undefined4 atbm_reg_read_for_sleep(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (((param_3 & 3) != 0) && (4 < param_4)) {
    if (*DAT_0001c980 << 0x1d < 0) {
      printk(DAT_0001c988,DAT_0001c984);
    }
    return 0xffffffea;
  }
  uVar1 = atbm_sdio_memcpy_fromio_for_sleep(*(undefined4 *)(param_1 + 0x44),(param_2 & 7) << 2);
  return uVar1;
}



/* ===== atbm_reg_write_for_sleep @ 0001cb06 size=4 ===== */

void atbm_reg_write_for_sleep(int param_1,uint param_2)

{
  atbm_sdio_memcpy_toio_for_sleep(*(undefined4 *)(param_1 + 0x44),(param_2 & 7) << 2);
  return;
}



/* ===== atbm_reg_read_unlock @ 0001cb0a size=82 ===== */

int atbm_reg_read_unlock(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar6 = param_1;
  iVar7 = param_2;
  uVar8 = param_3;
  if (*(int *)(param_1 + 0x40) == 0) {
    atbm_reg_read_dpll_part_6();
  }
  uVar3 = DAT_0001cb64;
  uVar2 = DAT_0001cb60;
  piVar1 = DAT_0001cb5c;
  iVar5 = 4;
  do {
    iVar4 = __atbm_reg_read(param_1,param_2,param_3,param_4,iVar6,iVar7,uVar8);
    if (iVar4 == 0) {
      return 0;
    }
    if (*piVar1 << 0x1f < 0) {
      printk(uVar3,uVar2);
      iVar7 = iVar4;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return iVar4;
}



/* ===== atbm_reg_write_unlock @ 0001cb68 size=82 ===== */

int atbm_reg_write_unlock(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar6 = param_1;
  iVar7 = param_2;
  uVar8 = param_3;
  if (*(int *)(param_1 + 0x40) == 0) {
    atbm_reg_read_dpll_part_6();
  }
  uVar3 = DAT_0001cbc4;
  uVar2 = DAT_0001cbc0;
  piVar1 = DAT_0001cbbc;
  iVar5 = 4;
  do {
    iVar4 = __atbm_reg_write(param_1,param_2,param_3,param_4,iVar6,iVar7,uVar8);
    if (iVar4 == 0) {
      return 0;
    }
    if (*piVar1 << 0x1f < 0) {
      printk(uVar3,uVar2);
      iVar7 = iVar4;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return iVar4;
}



/* ===== atbm_data_read_unlock @ 0001cbc8 size=162 ===== */

int atbm_data_read_unlock(int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar3 = DAT_0001cc84;
  uVar5 = *(int *)(param_1 + 0xa0) + 1;
  iVar6 = 10;
  iVar8 = param_1;
  uVar9 = param_2;
  uVar10 = param_3;
  do {
    if (((param_2 & 3) == 0) || (param_3 < 5)) {
      bVar2 = *(byte *)(param_1 + 0xa4);
      *(undefined1 *)(param_1 + 0xa4) = 0;
      if (*(undefined4 **)(param_1 + 0x40) == (undefined4 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(2,0x1cc30);
        (*pcVar1)();
      }
      iVar7 = (*(code *)**(undefined4 **)(param_1 + 0x40))
                        (*(undefined4 *)(param_1 + 0x44),
                         uVar5 * 0x40 & 0x1fc0 | (uint)bVar2 << 5 | 8,param_2,param_3,iVar8,uVar9,
                         uVar10);
      if (iVar7 == 0) {
        *(uint *)(param_1 + 0xa0) = uVar5 & 3;
        return 0;
      }
    }
    else {
      if (*DAT_0001cc6c << 0x1d < 0) {
        printk(DAT_0001cc7c,DAT_0001cc78);
      }
      iVar7 = -0x16;
    }
    uVar4 = 0x3e9;
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      (**(code **)(iVar3 + 4))(DAT_0001cc80);
      uVar9 = uVar4;
    }
    if (*DAT_0001cc6c << 0x1d < 0) {
      printk(DAT_0001cc74,DAT_0001cc70,iVar7);
    }
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return iVar7;
    }
  } while( true );
}



/* ===== atbm_data_read @ 0001cc88 size=42 ===== */

undefined4 atbm_data_read(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1cc94);
    (*pcVar1)();
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x18))(*(undefined4 *)(param_1 + 0x44));
  uVar2 = atbm_data_read_unlock(param_1,param_2,param_3);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return uVar2;
}



/* ===== atbm_data_force_write @ 0001ccb4 size=144 ===== */

int atbm_data_force_write(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1ccc2);
    (*pcVar1)();
  }
  iVar5 = 10;
  (**(code **)(*(int *)(param_1 + 0x40) + 0x18))(*(undefined4 *)(param_1 + 0x44));
  iVar2 = DAT_0001cd5c;
  iVar4 = (*(int *)(param_1 + 0x9c) - 1U & 0x3f) + 0x40;
  printk(DAT_0001cd4c,iVar4,DAT_0001cd48);
  do {
    iVar3 = __atbm_data_write_constprop_13(param_1,param_2,param_3,iVar4,param_4);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x9c) = iVar4 + *(int *)(param_1 + 0x98) & 0x3f;
      break;
    }
    iVar6 = 0x3e9;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      (**(code **)(iVar2 + 4))(DAT_0001cd50);
    }
    if (*DAT_0001cd54 << 0x1d < 0) {
      printk(DAT_0001cd58,DAT_0001cd48,0x181,iVar3);
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return iVar3;
}



/* ===== atbm_data_write_unlock @ 0001cd60 size=104 ===== */

int atbm_data_write_unlock(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_0001cdd8;
  iVar4 = *(int *)(param_1 + 0x9c);
  iVar3 = 10;
  do {
    iVar2 = __atbm_data_write_constprop_13(param_1,param_2,param_3,iVar4,param_4);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x9c) = *(int *)(param_1 + 0x98) + iVar4 & 0x3f;
      return 0;
    }
    iVar5 = 0x3e9;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (**(code **)(iVar1 + 4))(DAT_0001cdc8);
    }
    if (*DAT_0001cdcc << 0x1d < 0) {
      printk(DAT_0001cdd4,DAT_0001cdd0,0x19e,iVar2);
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}



/* ===== atbm_data_write @ 0001cddc size=42 ===== */

undefined4 atbm_data_write(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1cde8);
    (*pcVar1)();
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x18))(*(undefined4 *)(param_1 + 0x44));
  uVar2 = atbm_data_write_unlock(param_1,param_2,param_3);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return uVar2;
}



/* ===== atbm_indirect_read @ 0001ce08 size=292 ===== */

/* WARNING: Type propagation algorithm not settling */

int atbm_indirect_read(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
                      undefined2 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  
  iVar4 = 0;
  local_30 = 0;
  local_2c = param_2;
  uStack_28 = param_3;
  if (0x1fff < param_4) {
    if (*DAT_0001cf2c << 0x1d < 0) {
      printk(DAT_0001cf34,DAT_0001cf30);
    }
    return -0x16;
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x18))(*(undefined4 *)(param_1 + 0x44));
  local_2c = param_2;
  iVar3 = __atbm_reg_write(param_1,4,&local_2c);
  if (iVar3 < 0) {
    iVar4 = *DAT_0001cf2c;
    uVar1 = DAT_0001cf38;
  }
  else {
    iVar3 = __atbm_reg_read(param_1,0,&local_30,4);
    if (iVar3 < 0) {
      iVar4 = *DAT_0001cf2c;
      uVar1 = DAT_0001cf3c;
    }
    else {
      local_2c = local_30 | param_5;
      iVar3 = __atbm_reg_write(param_1,0,&local_2c);
      iVar2 = DAT_0001cf54;
      if (iVar3 < 0) {
        iVar4 = *DAT_0001cf2c;
        uVar1 = DAT_0001cf40;
      }
      else {
        do {
          iVar3 = __atbm_reg_read(param_1,0,&local_30,4);
          if (iVar3 < 0) {
            iVar4 = *DAT_0001cf2c;
            uVar1 = DAT_0001cf44;
            goto joined_r0x0001ced2;
          }
          iVar5 = iVar4;
          if ((param_5 & local_30) == 0) goto LAB_0001cf0c;
          while (iVar5 != 0) {
            (**(code **)(iVar2 + 4))(DAT_0001cf4c);
            iVar5 = iVar5 + -1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0x14);
        if ((param_5 & local_30) == 0) {
LAB_0001cf0c:
          iVar3 = __atbm_reg_read(param_1,param_6,param_3,param_4);
          if (-1 < iVar3) goto LAB_0001ce64;
          iVar4 = *DAT_0001cf2c;
          uVar1 = DAT_0001cf50;
        }
        else {
          iVar4 = *DAT_0001cf2c;
          uVar1 = DAT_0001cf48;
        }
      }
    }
  }
joined_r0x0001ced2:
  if (iVar4 << 0x1d < 0) {
    printk(uVar1,DAT_0001cf30);
  }
LAB_0001ce64:
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return iVar3;
}



/* ===== atbm_apb_write @ 0001cf58 size=126 ===== */

int atbm_apb_write(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int iVar6;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  if (0x1fff < param_4) {
    if (*DAT_0001cfd8 << 0x1d < 0) {
      printk(DAT_0001cfe0,DAT_0001cfdc,param_3,*DAT_0001cfd8,param_1);
    }
    return -0x16;
  }
  iVar6 = param_1;
  (**(code **)(*(int *)(param_1 + 0x40) + 0x18))(*(undefined4 *)(param_1 + 0x44));
  local_1c = param_2;
  iVar3 = __atbm_reg_write(param_1,4,&local_1c);
  if (iVar3 < 0) {
    iVar5 = *DAT_0001cfd8;
    iVar4 = iVar5 << 0x1d;
    uVar1 = DAT_0001cfe4;
    iVar2 = iVar4;
  }
  else {
    iVar3 = __atbm_reg_write(param_1,5,param_3,param_4);
    if (-1 < iVar3) goto LAB_0001cfaa;
    iVar5 = *DAT_0001cfd8 << 0x1d;
    iVar4 = extraout_r2;
    uVar1 = DAT_0001cfe8;
    iVar2 = iVar5;
  }
  if (iVar2 < 0) {
    printk(uVar1,DAT_0001cfdc,iVar4,iVar5,iVar6);
  }
LAB_0001cfaa:
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return iVar3;
}



/* ===== atbm_indirect_read_unlock @ 0001cfec size=396 ===== */

int atbm_indirect_read_unlock
              (undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
              undefined2 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_30;
  uint local_2c [2];
  
  uVar3 = DAT_0001d18c;
  uVar2 = DAT_0001d17c;
  piVar1 = DAT_0001d178;
  local_30 = 0;
  if (param_4 < 0x2000) {
    iVar5 = 4;
    do {
      local_2c[0] = param_2;
      iVar4 = __atbm_reg_write(param_1,4,local_2c);
      if (-1 < iVar4) break;
      if (*piVar1 << 0x1d < 0) {
        printk(uVar3,uVar2);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar3 = DAT_0001d190;
    uVar2 = DAT_0001d17c;
    piVar1 = DAT_0001d178;
    iVar5 = 4;
    do {
      iVar4 = __atbm_reg_read(param_1,0,&local_30,4);
      if (-1 < iVar4) break;
      if (*piVar1 << 0x1d < 0) {
        printk(uVar3,uVar2);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar3 = DAT_0001d194;
    uVar2 = DAT_0001d17c;
    piVar1 = DAT_0001d178;
    iVar5 = 4;
    do {
      local_2c[0] = local_30 | param_5;
      iVar4 = __atbm_reg_write(param_1,0,local_2c,4);
      if (-1 < iVar4) break;
      if (*piVar1 << 0x1d < 0) {
        printk(uVar3,uVar2);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar2 = DAT_0001d19c;
    iVar5 = DAT_0001d198;
    iVar4 = 0;
    do {
      iVar6 = __atbm_reg_read(param_1,0,&local_30,4);
      if (iVar6 < 0) {
        iVar7 = iVar4;
        if (*DAT_0001d178 << 0x1d < 0) {
          printk(DAT_0001d184,DAT_0001d17c);
        }
        while (iVar7 != 0) {
          (**(code **)(iVar5 + 4))(uVar2);
          iVar7 = iVar7 + -1;
        }
      }
      else {
        iVar7 = iVar4;
        if ((param_5 & local_30) == 0) goto LAB_0001d142;
        while (iVar7 != 0) {
          (**(code **)(iVar5 + 4))(uVar2);
          iVar7 = iVar7 + -1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x14);
    if ((param_5 & local_30) == 0) {
LAB_0001d142:
      uVar3 = DAT_0001d1a0;
      uVar2 = DAT_0001d17c;
      piVar1 = DAT_0001d178;
      iVar5 = 4;
      do {
        iVar6 = __atbm_reg_read(param_1,param_6,param_3,param_4);
        if (-1 < iVar6) {
          return iVar6;
        }
        if (*piVar1 << 0x1d < 0) {
          printk(uVar3,uVar2);
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    else if (*DAT_0001d178 << 0x1d < 0) {
      printk(DAT_0001d188,DAT_0001d17c);
    }
  }
  else {
    if (*DAT_0001d178 << 0x1d < 0) {
      printk(DAT_0001d180,DAT_0001d17c);
    }
    iVar6 = -0x16;
  }
  return iVar6;
}



/* ===== atbm_apb_write_reset @ 0001d1a4 size=106 ===== */

int atbm_apb_write_reset(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  if (param_4 < 0x2000) {
    iVar3 = __atbm_reg_write(param_1,4,&local_1c,4,param_1);
    if (iVar3 < 0) {
      iVar2 = *DAT_0001d210;
      uVar1 = DAT_0001d21c;
    }
    else {
      iVar3 = __atbm_reg_write(param_1,5,param_3,param_4);
      if (-1 < iVar3) {
        return iVar3;
      }
      iVar2 = *DAT_0001d210;
      uVar1 = DAT_0001d220;
    }
    if (iVar2 << 0x1d < 0) {
      printk(uVar1,DAT_0001d214);
    }
  }
  else {
    if (*DAT_0001d210 << 0x1d < 0) {
      printk(DAT_0001d218,DAT_0001d214);
    }
    iVar3 = -0x16;
  }
  return iVar3;
}



/* ===== atbm_ahb_write @ 0001d224 size=140 ===== */

int atbm_ahb_write(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int extraout_r2_00;
  int iVar6;
  int iVar7;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  piVar3 = DAT_0001d2b0;
  local_1c = param_2;
  uStack_18 = param_3;
  if (0x1ff < param_4) {
    iVar4 = *DAT_0001d2b0;
    if (iVar4 << 0x1d < 0) {
      printk(DAT_0001d2b8,DAT_0001d2b4,iVar4,param_4,param_1);
      iVar4 = extraout_r2;
    }
    if (*piVar3 << 0x1f < 0) {
      printk(DAT_0001d2bc,DAT_0001d2b4,iVar4,*piVar3,param_1);
    }
    return -0x16;
  }
  iVar7 = param_1;
  (**(code **)(*(int *)(param_1 + 0x40) + 0x18))(*(undefined4 *)(param_1 + 0x44));
  local_1c = param_2;
  iVar4 = __atbm_reg_write(param_1,4,&local_1c);
  if (iVar4 < 0) {
    iVar6 = *DAT_0001d2b0;
    iVar5 = iVar6 << 0x1d;
    uVar1 = DAT_0001d2c0;
    iVar2 = iVar5;
  }
  else {
    iVar4 = __atbm_reg_write(param_1,3,param_3,param_4);
    if (-1 < iVar4) goto LAB_0001d284;
    iVar6 = *DAT_0001d2b0 << 0x1d;
    iVar5 = extraout_r2_00;
    uVar1 = DAT_0001d2c4;
    iVar2 = iVar6;
  }
  if (iVar2 < 0) {
    printk(uVar1,DAT_0001d2b4,iVar5,iVar6,iVar7);
  }
LAB_0001d284:
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return iVar4;
}



/* ===== atbm_fw_write @ 0001d2c8 size=4 ===== */

int atbm_fw_write(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int extraout_r2_00;
  int iVar6;
  int iVar7;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piVar3 = DAT_0001d2b0;
  uStack_1c = param_2;
  uStack_18 = param_3;
  if (0x1ff < param_4) {
    iVar4 = *DAT_0001d2b0;
    if (iVar4 << 0x1d < 0) {
      printk(DAT_0001d2b8,DAT_0001d2b4,iVar4,param_4,param_1);
      iVar4 = extraout_r2;
    }
    if (*piVar3 << 0x1f < 0) {
      printk(DAT_0001d2bc,DAT_0001d2b4,iVar4,*piVar3,param_1);
    }
    return -0x16;
  }
  iVar7 = param_1;
  (**(code **)(*(int *)(param_1 + 0x40) + 0x18))(*(undefined4 *)(param_1 + 0x44));
  uStack_1c = param_2;
  iVar4 = __atbm_reg_write(param_1,4,&uStack_1c);
  if (iVar4 < 0) {
    iVar6 = *DAT_0001d2b0;
    iVar5 = iVar6 << 0x1d;
    uVar1 = DAT_0001d2c0;
    iVar2 = iVar5;
  }
  else {
    iVar4 = __atbm_reg_write(param_1,3,param_3,param_4);
    if (-1 < iVar4) goto LAB_0001d284;
    iVar6 = *DAT_0001d2b0 << 0x1d;
    iVar5 = extraout_r2_00;
    uVar1 = DAT_0001d2c4;
    iVar2 = iVar6;
  }
  if (iVar2 < 0) {
    printk(uVar1,DAT_0001d2b4,iVar5,iVar6,iVar7);
  }
LAB_0001d284:
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  return iVar4;
}



/* ===== atbm_ahb_write_unlock @ 0001d2cc size=166 ===== */

int atbm_ahb_write_unlock(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uVar3 = DAT_0001d384;
  uVar2 = DAT_0001d378;
  piVar1 = DAT_0001d374;
  local_2c = param_2;
  uStack_28 = param_3;
  if (param_4 < 0x200) {
    iVar5 = 4;
    uVar6 = param_1;
    do {
      local_2c = param_2;
      iVar4 = __atbm_reg_write(param_1,4,&local_2c,4,uVar6);
      if (-1 < iVar4) break;
      if (*piVar1 << 0x1d < 0) {
        printk(uVar3,uVar2);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar3 = DAT_0001d388;
    uVar2 = DAT_0001d378;
    piVar1 = DAT_0001d374;
    iVar5 = 4;
    do {
      iVar4 = __atbm_reg_write(param_1,3,param_3,param_4);
      if (-1 < iVar4) {
        return iVar4;
      }
      if (*piVar1 << 0x1d < 0) {
        printk(uVar3,uVar2);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    if (*DAT_0001d374 << 0x1d < 0) {
      printk(DAT_0001d37c,DAT_0001d378);
    }
    if (*piVar1 << 0x1f < 0) {
      printk(DAT_0001d380,DAT_0001d378);
    }
    iVar4 = -0x16;
  }
  return iVar4;
}



/* ===== atbm_direct_read_reg_32 @ 0001d38c size=156 ===== */

int atbm_direct_read_reg_32(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_20;
  uint local_1c;
  
  local_20 = param_3;
  local_1c = param_4;
  iVar4 = atbm_reg_read_32_constprop_21(param_1,&local_20,param_3,param_4,param_1,param_2);
  uVar3 = local_20;
  if (iVar4 < 0) {
    if (*DAT_0001d428 << 0x1d < 0) {
      printk(DAT_0001d430,DAT_0001d42c);
    }
  }
  else {
    local_20 = local_20 | 0x400;
    local_1c = local_20;
    iVar4 = atbm_reg_write(param_1,0,&local_1c,4);
    if (((iVar4 < 0) ||
        (iVar4 = atbm_indirect_read(param_1,param_2,param_3,4,0x800,3), uVar1 = DAT_0001d42c,
        piVar2 = DAT_0001d428, iVar4 < 0)) &&
       (uVar1 = DAT_0001d42c, piVar2 = DAT_0001d428, *DAT_0001d428 << 0x1d < 0)) {
      printk(DAT_0001d434,DAT_0001d42c);
      uVar1 = DAT_0001d42c;
      piVar2 = DAT_0001d428;
    }
    while( true ) {
      local_1c = uVar3;
      iVar4 = atbm_reg_write(param_1,0,&local_1c,4);
      if (-1 < iVar4) break;
      if (*piVar2 << 0x1d < 0) {
        printk(DAT_0001d438,uVar1);
      }
    }
  }
  return iVar4;
}



/* ===== atbm_direct_write_reg_32 @ 0001d43c size=176 ===== */

int atbm_direct_write_reg_32(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_20;
  uint local_1c;
  
  local_20 = param_1;
  local_1c = param_2;
  iVar4 = atbm_reg_read_32_constprop_21(param_1,&local_20);
  uVar3 = local_20;
  if (iVar4 < 0) {
    if (-1 < *DAT_0001d4ec << 0x1d) {
      return iVar4;
    }
    printk(DAT_0001d4f4,DAT_0001d4f0);
    return iVar4;
  }
  local_20 = local_20 | 0x400;
  local_1c = local_20;
  iVar4 = atbm_reg_write(param_1,0,&local_1c);
  if (-1 < iVar4) {
    local_1c = param_3;
    iVar4 = atbm_ahb_write(param_1,param_2,&local_1c);
    if ((param_2 & 0xfffff000) == DAT_0001d500) {
      atbm_ahb_write_32_part_12();
    }
    uVar1 = DAT_0001d4f0;
    piVar2 = DAT_0001d4ec;
    if (-1 < iVar4) goto LAB_0001d49a;
  }
  uVar1 = DAT_0001d4f0;
  piVar2 = DAT_0001d4ec;
  if (*DAT_0001d4ec << 0x1d < 0) {
    printk(DAT_0001d4f8,DAT_0001d4f0);
    uVar1 = DAT_0001d4f0;
    piVar2 = DAT_0001d4ec;
  }
LAB_0001d49a:
  while( true ) {
    local_1c = uVar3;
    iVar4 = atbm_reg_write(param_1,0,&local_1c);
    if (-1 < iVar4) break;
    if (*piVar2 << 0x1d < 0) {
      printk(DAT_0001d4fc,uVar1);
    }
  }
  return iVar4;
}



/* ===== atbm_direct_write_unlock @ 0001d504 size=214 ===== */

int atbm_direct_write_unlock(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_20;
  uint local_1c;
  
  local_20 = param_1;
  local_1c = param_2;
  iVar6 = atbm_reg_read_unlock(param_1,0,&local_20,4);
  uVar4 = local_20;
  if (iVar6 < 0) {
    if (*DAT_0001d5dc << 0x1d < 0) {
      printk(DAT_0001d5e4,DAT_0001d5e0);
    }
  }
  else {
    local_20 = local_20 | 0x400;
    local_1c = local_20;
    iVar6 = atbm_reg_write_unlock(param_1,0,&local_1c);
    uVar1 = DAT_0001d5fc;
    piVar2 = DAT_0001d5dc;
    uVar5 = param_3;
    if (iVar6 < 0) {
      uVar1 = DAT_0001d5e0;
      if (*DAT_0001d5dc << 0x1d < 0) {
        printk(DAT_0001d5e8,DAT_0001d5e0);
        uVar1 = DAT_0001d5e0;
        piVar2 = DAT_0001d5dc;
      }
    }
    else {
      while (local_1c = uVar5, iVar7 = atbm_ahb_write_unlock(param_1,param_2,&local_1c),
            uVar3 = DAT_0001d600, iVar6 = DAT_0001d5f4, iVar7 != 0) {
        uVar5 = local_1c;
        if (*piVar2 << 0x1f < 0) {
          printk(DAT_0001d5f8,uVar1);
          uVar5 = local_1c;
        }
      }
      uVar1 = DAT_0001d5e0;
      piVar2 = DAT_0001d5dc;
      if ((param_2 & 0xfffff000) == DAT_0001d5f0) {
        iVar7 = 0xb;
        while (iVar7 = iVar7 + -1, uVar1 = DAT_0001d5e0, piVar2 = DAT_0001d5dc, iVar7 != 0) {
          (**(code **)(iVar6 + 4))(uVar3);
        }
      }
    }
    while( true ) {
      local_1c = uVar4;
      iVar6 = atbm_reg_write_unlock(param_1,0,&local_1c);
      if (-1 < iVar6) break;
      if (*piVar2 << 0x1d < 0) {
        printk(DAT_0001d5ec,uVar1);
      }
    }
  }
  return iVar6;
}



/* ===== atbm_direct_read_unlock @ 0001d604 size=160 ===== */

int atbm_direct_read_unlock(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_20;
  uint local_1c;
  
  local_20 = param_3;
  local_1c = param_4;
  iVar4 = atbm_reg_read_unlock(param_1,0,&local_20,4,param_1,param_2);
  uVar3 = local_20;
  if (iVar4 < 0) {
    if (*DAT_0001d6a4 << 0x1d < 0) {
      printk(DAT_0001d6ac,DAT_0001d6a8);
    }
  }
  else {
    local_20 = local_20 | 0x400;
    local_1c = local_20;
    iVar4 = atbm_reg_write_unlock(param_1,0,&local_1c,4);
    if (((iVar4 < 0) ||
        (iVar4 = atbm_indirect_read_unlock(param_1,param_2,param_3,4,0x800,3), uVar1 = DAT_0001d6a8,
        piVar2 = DAT_0001d6a4, iVar4 < 0)) &&
       (uVar1 = DAT_0001d6a8, piVar2 = DAT_0001d6a4, *DAT_0001d6a4 << 0x1d < 0)) {
      printk(DAT_0001d6b0,DAT_0001d6a8);
      uVar1 = DAT_0001d6a8;
      piVar2 = DAT_0001d6a4;
    }
    while( true ) {
      local_1c = uVar3;
      iVar4 = atbm_reg_write_unlock(param_1,0,&local_1c,4);
      if (-1 < iVar4) break;
      if (*piVar2 << 0x1d < 0) {
        printk(DAT_0001d6b4,uVar1);
      }
    }
  }
  return iVar4;
}



/* ===== __atbm_irq_dbgPrint @ 0001d6b8 size=48 ===== */

void __atbm_irq_dbgPrint(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = __atbm_reg_read(param_1,0,&local_c,4,param_1);
  if (iVar1 < 0) {
    printk(DAT_0001d6e8);
  }
  else if (*DAT_0001d6ec << 0xb < 0) {
    printk(DAT_0001d6f0,local_c);
  }
  return;
}



/* ===== __atbm_irq_enable @ 0001d6f4 size=90 ===== */

int __atbm_irq_enable(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  uint local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  iVar1 = __atbm_reg_read(param_1,0,&local_18,4);
  uVar2 = DAT_0001d750;
  if (-1 < iVar1) {
    if (param_2 == 0) {
      if ((local_18 & 0x30000) == 0) {
        return iVar1;
      }
      local_18 = local_18 & 0xfffcffff;
    }
    else {
      if ((local_18 & 0x30000) != 0) {
        return iVar1;
      }
      local_18 = local_18 | 0x30000;
    }
    local_14 = local_18;
    iVar1 = __atbm_reg_write(param_1,0,&local_14);
    uVar2 = DAT_0001d754;
    if (-1 < iVar1) {
      return 0;
    }
  }
  printk(uVar2);
  return iVar1;
}



/* ===== atbm_before_load_firmware @ 0001d758 size=568 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 atbm_before_load_firmware(int param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort local_2a;
  uint local_28;
  undefined1 auStack_24 [4];
  uint local_20;
  uint local_1c;
  
  piVar2 = DAT_0001d994;
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1d782);
    (*pcVar1)();
  }
  do {
    iVar4 = atbm_reg_read_32_constprop_21(param_1,&local_28);
    if (iVar4 < 0) {
      iVar6 = *piVar2;
      uVar5 = DAT_0001d99c;
      goto joined_r0x0001d838;
    }
    iVar4 = atbm_get_hw_type(local_28,auStack_24);
    *(int *)(param_1 + 0x50) = iVar4;
    if (iVar4 < 0) {
      iVar4 = DAT_0001d9a4;
      if (*piVar2 << 0x1d < 0) {
        printk(DAT_0001d9a0,DAT_0001d998);
        iVar4 = DAT_0001d9a4;
      }
      goto LAB_0001d8e8;
    }
    iVar4 = atbm_reg_read_16_constprop_23(param_1,&local_2a);
    if (iVar4 < 0) {
LAB_0001d7b2:
      iVar6 = *piVar2;
      uVar5 = DAT_0001d9a8;
joined_r0x0001d838:
      if (iVar6 << 0x1d < 0) {
        printk(uVar5,DAT_0001d998);
      }
    }
    else {
      local_1c = local_2a | 0x1000;
      iVar4 = atbm_reg_write(param_1,1,&local_1c,4);
      iVar6 = *piVar2;
      uVar5 = DAT_0001d9ac;
      if (iVar4 < 0) goto joined_r0x0001d838;
      if (iVar6 << 0x1f < 0) {
        printk(DAT_0001d9b0,DAT_0001d998);
      }
      iVar4 = atbm_reg_read_16_constprop_23(param_1,&local_2a);
      if (iVar4 < 0) goto LAB_0001d7b2;
      local_1c = local_2a | 0x1000;
      iVar4 = atbm_reg_write(param_1,1,&local_1c,4);
      if (iVar4 < 0) {
        iVar6 = *piVar2;
        uVar5 = DAT_0001d9ac;
        goto joined_r0x0001d838;
      }
      iVar6 = 0;
      do {
        iVar4 = atbm_reg_read_16_constprop_23(param_1,&local_2a);
        if (iVar4 < 0) {
          iVar6 = *piVar2;
          uVar5 = DAT_0001d9b4;
          goto joined_r0x0001d838;
        }
        if ((int)((uint)local_2a << 0x12) < 0) goto LAB_0001d874;
        iVar4 = iVar6 + (iVar6 >> 1) + 1;
        msleep(iVar6);
        iVar6 = iVar4;
      } while (iVar4 < 3000);
      if ((int)((uint)local_2a << 0x12) < 0) {
LAB_0001d874:
        atbm_reg_read_32_constprop_21(param_1,&local_20);
        if ((int)(local_20 << 8) < 0) {
          local_20 = local_20 | 0x1000000;
          local_1c = local_20;
          atbm_reg_write(param_1,0,&local_1c,4);
        }
        *(undefined4 *)(param_1 + 0x54) = 0x641;
        iVar4 = atbm_reg_read_32_constprop_21(param_1,&local_28);
        if (-1 < iVar4) {
          local_28 = local_28 | 0x4400;
          local_1c = local_28;
          iVar4 = atbm_reg_write(param_1,0,&local_1c,4);
          if (iVar4 < 0) {
            iVar6 = *piVar2;
            uVar5 = DAT_0001d9c0;
            goto joined_r0x0001d838;
          }
          iVar4 = atbm_reg_read_32_constprop_21(param_1,&local_28);
          if (-1 < iVar4) goto LAB_0001d8e8;
        }
        iVar6 = *piVar2;
        uVar5 = DAT_0001d9bc;
        goto joined_r0x0001d838;
      }
      if (*piVar2 << 0x1d < 0) {
        printk(DAT_0001d9b8,DAT_0001d998);
      }
      iVar4 = -0x6e;
    }
LAB_0001d8e8:
    do {
      uVar5 = DAT_0001d9d8;
      iVar6 = DAT_0001d9c8;
      if (iVar4 == 0) {
        iVar4 = 0x65;
        local_1c = 0;
        while (iVar4 = iVar4 + -1, iVar4 != 0) {
          (**(code **)(iVar6 + 4))(uVar5);
        }
        uVar5 = atbm_direct_read_reg_32(param_1,DAT_0001d9cc,&local_1c);
        if (*piVar2 << 0x1f < 0) {
          printk(DAT_0001d9d0,DAT_0001d998,local_1c,uVar5);
        }
        local_1c = local_1c | 1;
        uVar5 = atbm_direct_write_reg_32(param_1,DAT_0001d9cc);
        if (*piVar2 << 0x1f < 0) {
          printk(DAT_0001d9d4,DAT_0001d998,local_1c,uVar5);
        }
        uVar3 = DAT_0001d9d8;
        iVar4 = DAT_0001d9c8;
        iVar6 = 0x65;
        while (iVar6 = iVar6 + -1, iVar6 != 0) {
          (**(code **)(iVar4 + 4))(uVar3);
        }
        return uVar5;
      }
      local_1c = 0x51;
      iVar4 = atbm_reg_write_dpll(param_1,0x18,&local_1c,4);
    } while (iVar4 < 0);
    atbm_reg_read_dpll(param_1,0x19,&local_1c,4);
    if (*piVar2 << 0x1f < 0) {
      printk(DAT_0001d9c4,DAT_0001d998,local_1c & 0xff);
    }
    atbm_reset_lmc_cpu(param_1);
  } while( true );
}



/* ===== atbm_after_load_firmware @ 0001d9dc size=314 ===== */

int atbm_after_load_firmware(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  uint local_18;
  uint local_14 [2];
  
  atbm_indirect_read(param_1,DAT_0001db18,&local_18,4,0x800,3);
  local_18 = local_18 & 0xfffff7f8 | 0x1000;
  local_14[0] = local_18;
  iVar2 = atbm_ahb_write(param_1,DAT_0001db18,local_14,4);
  if ((iVar2 < 0) && (*DAT_0001db1c << 0x1d < 0)) {
    printk(DAT_0001db24,DAT_0001db20);
  }
  iVar2 = atbm_reg_read_32_constprop_21(param_1,&local_18);
  if (iVar2 < 0) {
    iVar3 = *DAT_0001db1c;
    uVar1 = DAT_0001db24;
  }
  else {
    local_18 = local_18 & 0xffff3fff | 0x30000;
    local_14[0] = local_18;
    iVar2 = atbm_reg_write(param_1,0,local_14,4);
    if (iVar2 < 0) {
      iVar3 = *DAT_0001db1c;
      uVar1 = DAT_0001db28;
    }
    else {
      iVar2 = atbm_reg_read_32_constprop_21(param_1,&local_18);
      if (iVar2 < 0) {
        iVar3 = *DAT_0001db1c;
        uVar1 = DAT_0001db2c;
      }
      else {
        local_14[0] = local_18 & 0xfffffbff;
        iVar2 = atbm_reg_write(param_1,0,local_14,4);
        if (-1 < iVar2) {
          (**(code **)(DAT_0001db34 + 4))(DAT_0001db38);
          atbm_reg_read_32_constprop_21(param_1,&local_18);
          iVar2 = atbm_reg_read_16_constprop_23(param_1,&local_1a);
          if (iVar2 < 0) {
            iVar3 = *DAT_0001db1c;
            uVar1 = DAT_0001db3c;
          }
          else {
            local_14[0] = local_1a | 0x1000;
            iVar2 = atbm_reg_write(param_1,1,local_14,4);
            if (-1 < iVar2) {
              return iVar2;
            }
            iVar3 = *DAT_0001db1c;
            uVar1 = DAT_0001db40;
          }
          if (-1 < iVar3 << 0x1d) {
            return iVar2;
          }
          printk(uVar1,DAT_0001db20);
          return iVar2;
        }
        iVar3 = *DAT_0001db1c;
        uVar1 = DAT_0001db30;
      }
    }
  }
  if (iVar3 << 0x1d < 0) {
    printk(uVar1,DAT_0001db20);
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x24))(*(undefined4 *)(param_1 + 0x44));
  return iVar2;
}



/* ===== atbm_sdio_have_enough_space.constprop.2 @ 0001db44 size=70 ===== */

undefined4
atbm_sdio_have_enough_space_constprop_2(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc4) == 0) {
    iVar3 = *(int *)(param_1 + 0xcc);
    iVar4 = *(int *)(param_1 + 0xd0) - iVar3;
    if ((int)(uint)*(ushort *)(param_1 + 0xe8) < iVar4) {
      if (-1 < *DAT_0001db8c << 0x1f) {
LAB_0001db64:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(2,0x1db64);
        (*pcVar1)();
      }
      printk(DAT_0001db90,iVar3,iVar3,*(int *)(param_1 + 0xd0),(uint)*(ushort *)(param_1 + 0xe8),
             iVar4,param_3);
      if ((int)(uint)*(ushort *)(param_1 + 0xe8) < iVar4) goto LAB_0001db64;
    }
    *(int *)(param_1 + 0xc4) = iVar4;
    *(int *)(param_1 + 200) = iVar4;
    uVar2 = 0;
    if (iVar4 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== atbm_bh_read_ctrl_reg @ 0001db94 size=120 ===== */

int atbm_bh_read_ctrl_reg(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined2 *local_24;
  
  uVar2 = DAT_0001dc1c;
  iVar1 = DAT_0001dc18;
  if ((*DAT_0001dc0c == 0) || (*(ushort *)(param_1 + 0xfa) < 0x34ed)) {
    iVar4 = 0;
    iVar7 = param_1;
    local_24 = param_2;
    do {
      iVar3 = atbm_reg_read(param_1,1,&local_24,4,iVar7);
      *param_2 = (short)local_24;
      if (iVar3 == 0) goto LAB_0001dc08;
      iVar4 = iVar4 + 1;
      (**(code **)(*(int *)(param_1 + 0x40) + 0x54))(*(undefined4 *)(param_1 + 0x44));
      iVar5 = iVar4;
      while (bVar6 = iVar5 != 0, iVar5 = iVar5 + -1, bVar6) {
        (**(code **)(iVar1 + 4))(uVar2);
      }
      if (*DAT_0001dc10 << 0x1f < 0) {
        printk(DAT_0001dc14,iVar3);
      }
    } while (iVar4 != 0xb);
  }
  else {
LAB_0001dc08:
    iVar3 = 0;
  }
  return iVar3;
}



/* ===== atbm_register_bh @ 0001dc20 size=4 ===== */

undefined4 atbm_register_bh(void)

{
  return 0;
}



/* ===== atbm_unregister_bh @ 0001dc24 size=2 ===== */

void atbm_unregister_bh(void)

{
  return;
}



/* ===== atbm_irq_handler @ 0001dc26 size=94 ===== */

void atbm_irq_handler(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iStack_10;
  undefined4 uStack_c;
  
  iStack_10 = param_1;
  uStack_c = param_2;
  if (*(int *)(param_1 + 0x48) == 0) {
    atbm_reg_read_unlock(param_1,1,&uStack_c);
  }
  else {
    bVar2 = (*(uint *)(((uint)&iStack_10 & 0xffffe000) + 4) & 0xffff00) != 0;
    *(bool *)(param_1 + 0x90) = bVar2;
    if ((!bVar2) && (__atbm_irq_enable(), *DAT_0001dc84 << 0xb < 0)) {
      printk(DAT_0001dc8c,DAT_0001dc88);
    }
    pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0x80);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(undefined4 *)(param_1 + 0x44));
    }
  }
  return;
}



/* ===== atbm_bh_suspend @ 0001dc90 size=16 ===== */

undefined4 atbm_bh_suspend(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x40) + 0x84);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001dc9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0x44));
    return uVar1;
  }
  return 0;
}



/* ===== atbm_bh_resume @ 0001dca0 size=38 ===== */

undefined4 atbm_bh_resume(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*DAT_0001dcc8 << 0xf < 0) {
    printk(DAT_0001dccc);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x40) + 0x88);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001dcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0x44));
    return uVar1;
  }
  return 0;
}



/* ===== wsm_alloc_tx_buffer @ 0001dcd0 size=12 ===== */

void wsm_alloc_tx_buffer(int param_1)

{
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  return;
}



/* ===== wsm_release_tx_buffer @ 0001dcdc size=40 ===== */

bool wsm_release_tx_buffer(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  param_2 = iVar1 - param_2;
  *(int *)(param_1 + 0xc0) = param_2;
  if (-1 < param_2) {
    return (int)(*(ushort *)(param_1 + 0xe8) - 1) <= iVar1;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return false;
}



/* ===== atbm_sdio_tx_bh @ 0001dd04 size=980 ===== */

void atbm_sdio_tx_bh(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 *local_58;
  undefined1 **local_54;
  undefined4 local_50;
  uint local_48;
  int local_44;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  uint local_34;
  uint *local_30;
  undefined1 *local_2c [2];
  
  piVar6 = DAT_0001dfc0;
  local_34 = 0;
  local_2c[0] = (undefined1 *)0x0;
  piVar3 = DAT_0001dff4;
  puVar4 = DAT_0001dfc4;
  if ((*DAT_0001dfc0 << 0x1e < 0) && ((int)(*DAT_0001dfc4 << 0x1d) < 0)) {
    printk(DAT_0001dfcc,DAT_0001dfc8);
    piVar3 = DAT_0001dff4;
    puVar4 = DAT_0001dfc4;
  }
LAB_0001dd32:
  do {
    if (*(int *)(param_1 + 0x4c) != 0) {
      while (local_2c[0] = (undefined1 *)skb_dequeue(param_1 + 0x18),
            local_2c[0] != (undefined1 *)0x0) {
        kfree_skb();
      }
      local_2c[0] = (undefined1 *)0x0;
      if ((*piVar6 << 0x1e < 0) && (uVar7 = DAT_0001dfd0, (int)(*DAT_0001dfc4 << 0x1d) < 0)) {
LAB_0001dd54:
        printk(uVar7,DAT_0001dfc8);
      }
LAB_0001ddea:
      if ((*piVar6 << 0x1e < 0) && ((int)(*DAT_0001dfc4 << 0x1d) < 0)) {
        printk(DAT_0001dfd8,DAT_0001dfc8);
      }
      return;
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    iVar13 = 0;
    while( true ) {
      iVar8 = atbm_sdio_have_enough_space_constprop_2(param_1);
      if (iVar8 == 0) {
        puVar14 = (uint *)0x0;
        if (0 < iVar13) goto LAB_0001df70;
        goto LAB_0001dd78;
      }
      local_54 = local_2c;
      local_58 = auStack_38;
      iVar9 = wsm_get_tx(param_1,&local_30,&local_34,auStack_3c);
      puVar14 = local_30;
      if (iVar9 < 1) break;
      if ((*piVar3 != 0) && (*(uint **)(param_1 + 300) != local_30)) {
        if (local_2c[0] != (undefined1 *)0x0) {
          kfree_skb();
          while (local_2c[0] = (undefined1 *)skb_dequeue(param_1 + 0x18),
                local_2c[0] != (undefined1 *)0x0) {
            kfree_skb();
          }
        }
        if ((-1 < *piVar6 << 0x1e) || (uVar7 = DAT_0001dfdc, -1 < (int)(*DAT_0001dfc4 << 0x1d)))
        goto LAB_0001ddea;
        goto LAB_0001dd54;
      }
      iVar13 = iVar13 + 1;
      if ((local_34 < 8) || (local_34 != (ushort)local_30[1])) goto LAB_0001de50;
      uVar12 = (local_34 >> 8) + (local_34 & 0xff);
      uVar10 = uVar12 & 0xffff;
      if ((int)(uVar12 * 0x800000) < 0) {
        uVar10 = uVar10 + 1;
      }
      *local_30 = local_34 | uVar10 << 0x18;
      if (local_34 < 9) {
        local_34 = 0x10;
      }
      if ((local_34 & 0xff) != 0) {
        local_34 = (local_34 & 0xffffff00) + 0x100;
      }
      if ((0x7ff6 < local_34) && ((int)(*puVar4 << 0x1f) < 0)) {
        printk(DAT_0001dfe0);
      }
      if ((*piVar6 << 0x1e < 0) && ((int)(*puVar4 << 0x1d) < 0)) {
        printk(DAT_0001dfe4,DAT_0001dfc8,*(undefined2 *)((int)puVar14 + 6));
      }
      uVar11 = (ushort)(((uint)*(ushort *)((int)puVar14 + 6) << 0x13) >> 0x10);
      *(ushort *)((int)puVar14 + 6) = uVar11 >> 3;
      *(ushort *)((int)puVar14 + 6) = uVar11 >> 3 | (ushort)(*(int *)(param_1 + 0xac) << 0xd);
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
      iVar9 = *(int *)(param_1 + 0xc4);
      if (iVar9 < 1) {
        if ((int)(*DAT_0001dfc4 << 0x1f) < 0) {
          local_50 = *(undefined4 *)(param_1 + 0xd0);
          local_54 = *(undefined1 ***)(param_1 + 0xcc);
          local_58 = *(undefined1 **)(param_1 + 200);
          printk(DAT_0001dfe8,DAT_0001dfc8,499,iVar9);
        }
        goto LAB_0001de50;
      }
      *(int *)(param_1 + 0xc4) = iVar9 + -1;
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
      local_58 = local_2c[0];
      atbm_xmit_linearize(param_1,local_30,*(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0xd4),
                          (short)puVar14[1]);
      *(uint *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + local_34;
      *(uint *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1U & 7;
      iVar9 = wsm_txed(param_1,local_30);
      puVar14 = local_30;
      if (iVar9 != 0) {
        printk(DAT_0001dfec,DAT_0001dfc8,*(undefined4 *)(param_1 + 0xc4),
               *(undefined4 *)(param_1 + 0xc0));
        goto LAB_0001df70;
      }
      if (local_2c[0] != (undefined1 *)0x0) {
        *(int *)(((uint)&local_58 & 0xffffe000) + 4) =
             *(int *)(((uint)&local_58 & 0xffffe000) + 4) + 0x200;
        iVar9 = *(int *)(param_1 + 0x1028) + -1;
        *(int *)(param_1 + 0x1028) = iVar9;
        if ((*(char *)(param_1 + 0x102c) != '\0') && (iVar9 < 0x81)) {
          *(undefined1 *)(param_1 + 0x102c) = 0;
          __local_bh_enable_ip(DAT_0001e118,0x200);
          uVar12 = 0;
          iVar9 = **(int **)(param_1 + 4);
          while (uVar12 < *(uint *)(iVar9 + 0x220)) {
            local_48 = uVar12;
            local_44 = iVar9;
            netif_tx_wake_queue(uVar12 * 0x7c + *(int *)(iVar9 + 0x21c));
            iVar9 = local_44;
            uVar12 = local_48 + 1;
          }
          *(int *)(((uint)&local_58 & 0xffffe000) + 4) =
               *(int *)(((uint)&local_58 & 0xffffe000) + 4) + 0x200;
        }
        __local_bh_enable_ip(DAT_0001e11c,0x200);
        wsm_release_tx_buffer(param_1,1);
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      }
      if (0x8000 < (int)((uint)*(ushort *)(param_1 + 0xea) + *(int *)(param_1 + 0xd8)))
      goto LAB_0001e08a;
    }
    if (iVar13 < 1) goto LAB_0001ddea;
LAB_0001e08a:
    puVar14 = (uint *)0x0;
LAB_0001df70:
    if (*(int *)(param_1 + 0xd8) == 0) {
LAB_0001de50:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(2,0x1de50);
      (*pcVar1)();
    }
    *(int *)(param_1 + 0x98) = iVar13;
    iVar13 = atbm_data_write(param_1,*(undefined4 *)(param_1 + 0xd4));
    if (iVar13 != 0) {
      uVar12 = *puVar4;
      uVar7 = DAT_0001dfc8;
      uVar5 = DAT_0001dff0;
joined_r0x0001df94:
      if ((int)(uVar12 << 0x1f) < 0) {
        printk(uVar5,uVar7);
      }
      if (puVar14 != (uint *)0x0) {
        uVar11 = *(ushort *)((int)puVar14 + 6) & 0x3f;
        if ((uVar11 == 2) || (uVar11 == 4)) {
          wsm_release_tx_buffer(param_1,1);
        }
        else {
          wsm_release_tx_buffer(param_1,1);
          *(int *)(((uint)&local_58 & 0xffffe000) + 4) =
               *(int *)(((uint)&local_58 & 0xffffe000) + 4) + 0x200;
          if (*(short *)(param_1 + 0x13c) != -1) {
            *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
            *(undefined2 *)(param_1 + 0x13c) = 0xffff;
            *(undefined4 *)(param_1 + 0x124) = 1;
            *(undefined4 *)(param_1 + 300) = 0;
            *(undefined4 *)(param_1 + 0x134) = 0;
            __wake_up(param_1 + 0xbb4,3);
          }
          __local_bh_enable_ip(DAT_0001e120,0x200);
        }
      }
      goto LAB_0001dd32;
    }
    if (iVar8 == 0) {
LAB_0001dd78:
      uVar7 = DAT_0001dff8;
      bVar2 = false;
      iVar13 = 0;
      if (*(int *)(param_1 + 0xc4) == 0) {
        while (iVar8 = atbm_sdio_have_enough_space_constprop_2(param_1), iVar8 == 0) {
          iVar13 = iVar13 + 1;
          if ((*(int *)(param_1 + 0x4c) != 0) || (iVar13 == 6000)) {
            uVar12 = *puVar4;
            uVar7 = DAT_0001e124;
            uVar5 = DAT_0001e128;
            goto joined_r0x0001df94;
          }
          if (((2 < iVar13) && (!bVar2)) && (bVar2 = true, (*puVar4 & 0x100000) != 0)) {
            local_58 = (undefined1 *)0x1;
            printk(uVar7,DAT_0001dfd4,*(undefined4 *)(param_1 + 0xcc),
                   *(undefined4 *)(param_1 + 0xd0));
          }
          schedule_timeout_interruptible(1);
        }
      }
    }
  } while( true );
}



/* ===== atbm_put_skb @ 0001e12c size=18 ===== */

void atbm_put_skb(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    kfree_skb(param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  return;
}



/* ===== atbm_bh_read_ctrl_reg_unlock @ 0001e13e size=120 ===== */

int atbm_bh_read_ctrl_reg_unlock(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined2 *local_24;
  
  uVar2 = DAT_0001e1c8;
  iVar1 = DAT_0001e1c4;
  if ((*DAT_0001e1b8 == 0) || (*(ushort *)(param_1 + 0xfa) < 0x34ed)) {
    iVar4 = 0;
    iVar7 = param_1;
    local_24 = param_2;
    do {
      iVar3 = atbm_reg_read_unlock(param_1,1,&local_24,4,iVar7);
      *param_2 = (short)local_24;
      if (iVar3 == 0) goto LAB_0001e1b2;
      iVar4 = iVar4 + 1;
      (**(code **)(*(int *)(param_1 + 0x40) + 0x54))(*(undefined4 *)(param_1 + 0x44));
      iVar5 = iVar4;
      while (bVar6 = iVar5 != 0, iVar5 = iVar5 + -1, bVar6) {
        (**(code **)(iVar1 + 4))(uVar2);
      }
      if (*DAT_0001e1bc << 0x1f < 0) {
        printk(DAT_0001e1c0,iVar3);
      }
    } while (iVar4 != 0xb);
  }
  else {
LAB_0001e1b2:
    iVar3 = 0;
  }
  return iVar3;
}



/* ===== atbm_powerave_sdio_sync @ 0001e1cc size=90 ===== */

int atbm_powerave_sdio_sync(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint local_18;
  uint uStack_14;
  undefined4 uStack_10;
  
  local_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  iVar1 = atbm_reg_read_unlock(param_1,0,&local_18,4);
  if ((iVar1 < 0) && (*DAT_0001e228 << 0x1f < 0)) {
    printk(DAT_0001e230,DAT_0001e22c);
  }
  if ((int)(local_18 << 8) < 0) {
    if (*DAT_0001e228 << 0x1f < 0) {
      printk(DAT_0001e234,DAT_0001e22c,0x346);
    }
    local_18 = local_18 | 0x1000000;
    uStack_14 = local_18;
    atbm_reg_write_unlock(param_1,0,&uStack_14);
  }
  return iVar1;
}



/* ===== atbm_rx_tasklet @ 0001e238 size=292 ===== */

int atbm_rx_tasklet(undefined4 param_1,int param_2,ushort *param_3,int *param_4)

{
  code *pcVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *__src;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int local_2c;
  ushort *puStack_28;
  
  pvVar4 = DAT_0001e360;
  local_2c = param_2;
  puStack_28 = param_3;
  if ((param_3[1] & 0x1ffd) != 0x811) {
    *(int *)((int)DAT_0001e360 + 0x48) = *(int *)((int)DAT_0001e360 + 0x48) + 1;
    iVar6 = wsm_handle_rx();
    return iVar6;
  }
  iVar10 = *param_4;
  uVar9 = *param_3 - 8;
  iVar6 = *(int *)(iVar10 + 0xa4);
  uVar7 = *param_3 + 0x3ff >> 10;
  __src = (ushort *)(iVar6 + 8);
  uVar8 = (uint)*(byte *)(iVar6 + 4);
  *(int *)((int)DAT_0001e360 + uVar7 * 4) = *(int *)((int)DAT_0001e360 + uVar7 * 4) + 1;
  uVar3 = *(ushort *)(iVar6 + 10);
  uVar2 = *(ushort *)(iVar6 + 8);
  *(uint *)((int)pvVar4 + 0x44) = *(int *)((int)pvVar4 + 0x44) + uVar8;
  uVar11 = param_1;
  do {
    uVar7 = (uint)uVar2;
    if (uVar9 < uVar7) {
      if (*DAT_0001e364 << 0x1f < 0) {
        printk(DAT_0001e368,*(undefined4 *)(iVar10 + 0x50),uVar7,uVar9,uVar11);
      }
LAB_0001e2a0:
      if (uVar8 == 0) {
        return 0;
      }
      break;
    }
    local_2c = __netdev_alloc_skb(0,uVar7 + 0x10,0xcc0);
    if (local_2c == 0) break;
    iVar6 = 8 - (*(uint *)(local_2c + 0xa4) & 7);
    pvVar5 = (void *)(*(uint *)(local_2c + 0xa4) + iVar6);
    *(void **)(local_2c + 0xa4) = pvVar5;
    *(int *)(local_2c + 0x98) = iVar6 + *(int *)(local_2c + 0x98);
    *(byte *)(local_2c + 0x60) = *(byte *)(local_2c + 0x60) & 0xf8 | *(byte *)(iVar10 + 0x60) & 7;
    memmove(pvVar5,__src,uVar7);
    skb_put(local_2c,uVar7);
    iVar6 = wsm_handle_rx(param_1,uVar3 & 0x1fff,__src,&local_2c);
    pvVar5 = DAT_0001e360;
    if (iVar6 != 0) {
      *(undefined4 *)((int)pvVar4 + 0x44) = 0;
      memset(pvVar5,0,0x44);
      if (local_2c == 0) {
        return iVar6;
      }
      kfree_skb();
      return iVar6;
    }
    uVar7 = uVar7 + 0x2b & 0xfffffffc;
    uVar8 = uVar8 - 1;
    __src = (ushort *)((int)__src + uVar7);
    uVar9 = uVar9 - uVar7;
    uVar3 = __src[1];
    uVar2 = *__src;
    if (local_2c != 0) {
      kfree_skb();
    }
    if ((int)uVar8 < 1) goto LAB_0001e2a0;
  } while (0x20 < (int)uVar9);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(2,0x1e2ba);
  (*pcVar1)();
}



/* ===== atbm_rx_directly @ 0001e36c size=238 ===== */

undefined4 atbm_rx_directly(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort *puVar7;
  int local_24;
  undefined4 uStack_20;
  
  iVar4 = *(int *)(DAT_0001e45c + 0x4c);
  local_24 = param_2;
  uStack_20 = param_3;
  if (iVar4 < 4) {
    *(int *)(DAT_0001e45c + 0x4c) = iVar4 + 1;
    piVar3 = DAT_0001e460;
    *(uint *)(param_1 + 0xa8) = iVar4 + 1U & 7;
    uVar5 = 0;
    iVar4 = *piVar3;
    *DAT_0001e464 = 0;
    if (iVar4 << 0x1f < 0) {
      if (*DAT_0001e468 << 0x1d < 0) {
        printk(DAT_0001e470,DAT_0001e46c);
        goto LAB_0001e3a8;
      }
    }
  }
  else {
    puVar7 = *(ushort **)(param_2 + 0xa4);
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    skb_trim(param_2,(uint)uVar1,param_3,iVar4,param_1);
    piVar3 = DAT_0001e464;
    uVar6 = (uint)(uVar2 >> 0xd);
    if ((uVar2 & 0x1fff) == 0x800) {
      uVar5 = 0xffffffff;
      wsm_handle_exception(param_1,puVar7 + 2,uVar1 - 4);
      goto LAB_0001e3a8;
    }
    if ((*DAT_0001e464 == 0) && (uVar6 != *(uint *)(param_1 + 0xa8))) {
      if (*DAT_0001e468 << 0x1f < 0) {
        printk(DAT_0001e474,uVar6);
      }
      uVar5 = 0xfffffffe;
      goto LAB_0001e3a8;
    }
    *(uint *)(param_1 + 0xa8) = uVar6 + 1 & 7;
    *piVar3 = 0;
    if ((uVar2 & 0x400) != 0) {
      iVar4 = wsm_release_tx_buffer(param_1,1);
      if (iVar4 < 0) {
        uVar5 = 0xfffffffd;
        goto LAB_0001e3a8;
      }
      if (iVar4 != 0) {
        atbm_bh_wakeup(param_1);
      }
    }
    iVar4 = atbm_rx_tasklet(param_1,uVar2 & 0x1fff,puVar7,&local_24);
    if (iVar4 != 0) {
      uVar5 = 0xfffffffc;
      goto LAB_0001e3a8;
    }
  }
  uVar5 = 0;
LAB_0001e3a8:
  if (local_24 != 0) {
    kfree_skb();
  }
  return uVar5;
}



/* ===== atbm_sdio_rx_bh @ 0001e478 size=388 ===== */

void atbm_sdio_rx_bh(int param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar2 = DAT_0001e600;
  uStack_2c = param_2;
  uStack_28 = param_3;
  if (((*DAT_0001e600 & 1) != 0) && (*DAT_0001e604 << 0x1d < 0)) {
    printk(DAT_0001e60c,DAT_0001e608,*DAT_0001e600,*DAT_0001e604,param_1);
  }
  cVar10 = '\0';
  (**(code **)(*(int *)(param_1 + 0x40) + 0x18))(*(undefined4 *)(param_1 + 0x44));
  uVar4 = DAT_0001e620;
  piVar3 = DAT_0001e604;
  uStack_2c = uStack_2c & 0xffff;
  if (DAT_0001e610 == 0) {
LAB_0001e4ac:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1e4ac);
    (*pcVar1)();
  }
  iVar8 = 0;
  while (iVar5 = atbm_bh_read_ctrl_reg(param_1,(int)&uStack_2c + 2), iVar5 == 0) {
    do {
      iVar5 = (uStack_2c >> 0x10 & 0xfff) * 2 + ((uStack_2c >> 0x10 & uVar4) >> 1);
      if (iVar5 == 0) goto LAB_0001e4fa;
      if (0x7ff2 < iVar5 - 4U) {
        if (*DAT_0001e604 << 0x1f < 0) {
          printk(DAT_0001e614,iVar5,cVar10);
        }
        goto LAB_0001e4f2;
      }
      uVar9 = iVar5 + 2;
      uVar11 = uVar9;
      if ((uVar9 & 0xfe) != 0) {
        uVar11 = (uVar9 & 0xffffff00) + 0x100;
      }
      if (uVar11 < 0x7ff7) {
        if ((0x100 < uVar11) || (iVar8 = *(int *)(param_1 + 0xe0), iVar8 == 0)) goto LAB_0001e54a;
        *(undefined4 *)(param_1 + 0xe0) = 0;
      }
      else {
        if (*piVar3 << 0x1f < 0) {
          printk(DAT_0001e61c,uVar11);
        }
LAB_0001e54a:
        uVar7 = uVar11;
        if (uVar11 < 0x100) {
          uVar7 = 0x100;
        }
        iVar8 = __netdev_alloc_skb(0,uVar7 + 0x32,0xcc0);
        if (iVar8 == 0) goto LAB_0001e4ac;
        *(int *)(iVar8 + 0xa4) = *(int *)(iVar8 + 0xa4) + 0x18;
        *(int *)(iVar8 + 0x98) = *(int *)(iVar8 + 0x98) + 0x18;
      }
      skb_trim(iVar8,0);
      skb_put(iVar8,uVar9);
      iVar5 = *(int *)(iVar8 + 0xa4);
      if ((iVar5 == 0) || (iVar6 = atbm_data_read(param_1,iVar5,uVar11), iVar6 != 0))
      goto LAB_0001e4f4;
      cVar10 = cVar10 + '\x01';
      uStack_2c = CONCAT22(*(undefined2 *)(iVar5 + uVar11 + -2),(undefined2)uStack_2c);
      *(byte *)(iVar8 + 0x60) = *(byte *)(iVar8 + 0x60) & 0xf8 | 2;
      iVar5 = atbm_rx_directly(param_1,iVar8);
      if (iVar5 != 0) goto LAB_0001e4fa;
    } while ((uStack_2c >> 0x10 & 0xfff) * 2 + ((uStack_2c >> 0x10 & uVar4) >> 1) != 0);
  }
LAB_0001e4f2:
  if (iVar8 != 0) {
LAB_0001e4f4:
    kfree_skb(iVar8);
  }
LAB_0001e4fa:
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))(*(undefined4 *)(param_1 + 0x44));
  if (((int)(*puVar2 << 0x1f) < 0) && (*DAT_0001e604 << 0x1d < 0)) {
    printk(DAT_0001e618,DAT_0001e608);
  }
  return;
}



/* ===== atbm_pm_stay_awake_tmo @ 0001e624 size=2 ===== */

void atbm_pm_stay_awake_tmo(void)

{
  return;
}



/* ===== atbm_suspend_late @ 0001e626 size=4 ===== */

undefined4 atbm_suspend_late(void)

{
  return 0;
}



/* ===== atbm_timer_handle @ 0001e62a size=8 ===== */

void atbm_timer_handle(int param_1)

{
  code *pcVar1;
  
  if (*(code **)(param_1 + 0x14) == (code *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1e62e);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x0001e632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x18));
  return;
}



/* ===== atbm_pm_probe @ 0001e634 size=4 ===== */

undefined4 atbm_pm_probe(void)

{
  return 0;
}



/* ===== atbm_pm_init @ 0001e638 size=106 ===== */

int atbm_pm_init(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = __platform_driver_register(DAT_0001e6a4,DAT_0001e6a8,param_3,param_4,param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = platform_device_alloc(DAT_0001e6ac,0);
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 0) {
      iVar2 = -0xc;
      platform_driver_unregister(DAT_0001e6a4);
    }
    else {
      *(undefined4 *)(iVar2 + 0x4c) = param_2;
      iVar2 = platform_device_add(*(undefined4 *)(param_1 + 0x20));
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        init_timer_key(param_1,DAT_0001e6b0,0,0,0);
        uVar1 = DAT_0001e6b4;
        *(int *)(param_1 + 0x18) = param_1;
        *(undefined4 *)(param_1 + 0x14) = uVar1;
        disableIRQinterrupts();
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      else {
        kfree(*(undefined4 *)(param_1 + 0x20));
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
  }
  return iVar2;
}



/* ===== atbm_pm_deinit @ 0001e6b8 size=32 ===== */

void atbm_pm_deinit(int param_1)

{
  del_timer();
  platform_driver_unregister(DAT_0001e6d8);
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4c) = 0;
    platform_device_unregister(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* ===== atbm_pm_stay_awake @ 0001e6dc size=66 ===== */

void atbm_pm_stay_awake(int param_1,int param_2)

{
  *(int *)(((uint)&stack0xfffffff8 & 0xffffe000) + 4) =
       *(int *)(((uint)&stack0xfffffff8 & 0xffffe000) + 4) + 0x200;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x1c) - *DAT_0001e720 < param_2)) {
    mod_timer(param_1,param_2 + *DAT_0001e720);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 8);
  }
  __local_bh_enable_ip(DAT_0001e724,0x200);
  return;
}



/* ===== atbm_pm_stay_awake_lock @ 0001e728 size=2 ===== */

void atbm_pm_stay_awake_lock(void)

{
  return;
}



/* ===== atbm_pm_stay_awake_unlock @ 0001e72a size=2 ===== */

void atbm_pm_stay_awake_unlock(void)

{
  return;
}



/* ===== atbm_configure_wifi_mode @ 0001e72c size=254 ===== */

void atbm_configure_wifi_mode(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar10;
  undefined1 auStack_130 [108];
  byte local_c4;
  undefined1 auStack_be [17];
  char local_ad;
  int local_1c;
  undefined4 *puVar9;
  
  piVar1 = DAT_0001e82c;
  local_1c = *DAT_0001e82c;
  wsm_get_config(param_1,auStack_be,0xa2);
  piVar2 = DAT_0001e830;
  iVar10 = *(int *)(param_1 + 4);
  if (iVar10 == 0) goto LAB_0001e7aa;
  if (local_ad == '\0') {
    uVar6 = 2;
  }
  else {
    uVar6 = 3;
  }
  *(undefined4 *)(iVar10 + 0xc) = uVar6;
  if (*piVar2 << 0x1d < 0) {
    uVar6 = DAT_0001e834;
    if (local_ad == '\0') {
      uVar6 = DAT_0001e838;
    }
    printk(DAT_0001e83c,uVar6);
  }
  if ((local_ad == '\0') || (iVar3 = wsm_get_ap_cfg(param_1,auStack_130,0x70), iVar3 != 0))
  goto LAB_0001e7aa;
  uVar7 = (uint)local_c4;
  if (uVar7 == 0) {
    *(undefined4 *)(iVar10 + 0xb0) = 1;
    *(undefined4 *)(iVar10 + 0xc4) = 1;
  }
  else {
    if (uVar7 - 1 < 2) {
      if (*piVar2 << 0x1f < 0) {
        printk(DAT_0001e844,DAT_0001e840);
      }
      *(undefined4 *)(iVar10 + 0xb0) = 2;
      *(undefined4 *)(iVar10 + 0xc4) = 2;
      uVar5 = 0x404;
    }
    else if (uVar7 == 3) {
      if (*piVar2 << 0x1f < 0) {
        printk(DAT_0001e848,DAT_0001e840);
      }
      *(undefined4 *)(iVar10 + 0xb0) = 3;
      *(undefined4 *)(iVar10 + 0xc4) = 3;
      uVar5 = 0x804;
    }
    else {
      if (uVar7 != 4) goto LAB_0001e794;
      if (*piVar2 << 0x1f < 0) {
        printk(DAT_0001e84c,DAT_0001e840);
      }
      *(undefined4 *)(iVar10 + 0xb0) = 4;
      *(undefined4 *)(iVar10 + 0xc4) = 4;
      uVar5 = 0x808;
    }
    *(undefined2 *)(iVar10 + 0xb8) = uVar5;
    *(undefined2 *)(iVar10 + 0xcc) = uVar5;
  }
LAB_0001e794:
  puVar4 = (undefined4 *)(iVar10 + 0xdc);
  puVar8 = (undefined4 *)(iVar10 + 0xac);
  do {
    puVar9 = puVar8 + 1;
    *puVar4 = *puVar8;
    puVar4 = puVar4 + 1;
    puVar8 = puVar9;
  } while (puVar9 != (undefined4 *)(iVar10 + 0xc0));
LAB_0001e7aa:
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== atbm_get_mac_address.constprop.1 @ 0001e850 size=104 ===== */

void atbm_get_mac_address_constprop_1(int param_1)

{
  int *piVar1;
  undefined1 auStack_b6 [4];
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  int local_14;
  
  piVar1 = DAT_0001e8b8;
  local_14 = *DAT_0001e8b8;
  wsm_get_config(param_1,auStack_b6,0xa2);
  *(undefined1 *)(param_1 + 0x5c) = local_b2;
  *(undefined1 *)(param_1 + 0x5d) = local_b1;
  *(undefined1 *)(param_1 + 0x5e) = local_b0;
  *(undefined1 *)(param_1 + 0x5f) = local_af;
  *(undefined1 *)(param_1 + 0x60) = local_ae;
  *(undefined1 *)(param_1 + 0x61) = local_ad;
  if (*DAT_0001e8bc << 0x1d < 0) {
    printk(DAT_0001e8c0);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== atbm_store_cmd_is_ready @ 0001e8c4 size=44 ===== */

undefined4 atbm_store_cmd_is_ready(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*DAT_0001e8f0;
  while( true ) {
    if (DAT_0001e8f0 == puVar1) {
      return 0;
    }
    if ((puVar1[-0xc] == *param_1) && (puVar1[-9] == param_1[3])) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}



/* ===== atbm_wsm_get_status.part.7 @ 0001e8f4 size=16 ===== */

undefined4
atbm_wsm_get_status_part_7
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  printk(DAT_0001e908,DAT_0001e904,param_3,param_4,param_4);
  return 0xffffffff;
}



/* ===== atbm_ioctl_driver_async @ 0001e90c size=62 ===== */

void atbm_ioctl_driver_async(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  printk(DAT_0001e950,DAT_0001e94c,0xb4,param_4,param_1,param_2);
  iVar1 = atbm_ioctl_notify_add(1,0,param_1 & 0xff,0,0);
  if (0 < iVar1) {
    printk(DAT_0001e950,DAT_0001e94c,0xb9);
    kill_fasync(DAT_0001e954,0x1d,1);
    return;
  }
  return;
}



/* ===== atbm_ioctl_wakeup_async @ 0001e958 size=62 ===== */

void atbm_ioctl_wakeup_async(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  printk(DAT_0001e99c,DAT_0001e998,0xc3,param_4,param_1,param_2);
  iVar1 = atbm_ioctl_notify_add(3,0,param_1 & 0xff,0,0);
  if (0 < iVar1) {
    printk(DAT_0001e99c,DAT_0001e998,200);
    kill_fasync(DAT_0001e9a0,0x1d,1);
    return;
  }
  return;
}



/* ===== atbm_ioctl_disconn_async @ 0001e9a4 size=62 ===== */

void atbm_ioctl_disconn_async(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  printk(DAT_0001e9e8,DAT_0001e9e4,0xd2,param_4,param_1,param_2);
  iVar1 = atbm_ioctl_notify_add(4,0,param_1 & 0xff,0,0);
  if (0 < iVar1) {
    printk(DAT_0001e9e8,DAT_0001e9e4,0xd6);
    kill_fasync(DAT_0001e9ec,0x1d,1);
    return;
  }
  return;
}



/* ===== atbm_ioctl_conn_err_async @ 0001e9f0 size=62 ===== */

void atbm_ioctl_conn_err_async
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  printk(DAT_0001ea34,DAT_0001ea30,0xe0,param_4,param_1,param_2);
  iVar1 = atbm_ioctl_notify_add(5,0,param_1 & 0xff,0,0);
  if (0 < iVar1) {
    printk(DAT_0001ea34,DAT_0001ea30,0xe5);
    kill_fasync(DAT_0001ea38,0x1d,1);
    return;
  }
  return;
}



/* ===== atbm_ioctl_customer_private_event_async @ 0001ea3c size=62 ===== */

void atbm_ioctl_customer_private_event_async
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  printk(DAT_0001ea80,DAT_0001ea7c,0xef,param_4,param_1,param_2);
  iVar1 = atbm_ioctl_notify_add(6,0,0,0,param_1);
  if (0 < iVar1) {
    printk(DAT_0001ea80,DAT_0001ea7c,0xf4);
    kill_fasync(DAT_0001ea84,0x1d,1);
    return;
  }
  return;
}



/* ===== atbm_wsm_pre_rmmod @ 0001ea88 size=48 ===== */

undefined4 atbm_wsm_pre_rmmod(int param_1)

{
  if (*(ushort *)(param_1 + 0xfa) < 0x34ed) {
    printk(DAT_0001eab8);
    *(undefined4 *)(DAT_0001eabc + 0x9d0) = 1;
  }
  else {
    printk(DAT_0001eac0);
    atbm_wsm_fw_sleep(param_1);
  }
  return 0;
}



/* ===== atbm_wsm_set_control_debug_mask @ 0001eac4 size=22 ===== */

undefined4
atbm_wsm_set_control_debug_mask
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0001eae0;
  iVar1 = DAT_0001eadc;
  *(undefined4 *)(DAT_0001eadc + 0x9cc) = param_2;
  printk(uVar2,DAT_0001eae4,param_2,iVar1,param_4);
  return 0;
}



/* ===== dump_mem @ 0001eae8 size=232 ===== */

void dump_mem(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  printk(DAT_0001ebd0);
  uVar3 = DAT_0001ebf0;
  uVar2 = DAT_0001ebec;
  uVar1 = DAT_0001ebd4;
  for (iVar4 = param_2; param_2 - iVar4 < param_2; iVar4 = iVar4 + -8) {
    if (iVar4 < 8) {
      if (iVar4 == 7) {
        printk(DAT_0001ebe0,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
               param_1[6]);
      }
      else if (iVar4 == 6) {
        printk(DAT_0001ebe4,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
      }
      else if (iVar4 == 5) {
        printk(DAT_0001ebe8,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
      }
      else if (iVar4 == 4) {
        printk(uVar3,*param_1,param_1[1],param_1[2],param_1[3]);
      }
      else if (iVar4 == 3) {
        printk(uVar2,*param_1,param_1[1],param_1[2]);
      }
      else if (iVar4 == 2) {
        printk(uVar1,*param_1,param_1[1]);
      }
    }
    else {
      printk(DAT_0001ebdc,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6]
             ,param_1[7]);
    }
    param_1 = param_1 + 8;
  }
  printk(DAT_0001ebd8);
  return;
}



/* ===== init_module @ 0001ebf4 size=146 ===== */

void init_module(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_5c [2];
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar1 = DAT_0001ec88;
  local_1c = *DAT_0001ec88;
  printk(DAT_0001ec90,DAT_0001ec8c);
  atbm_ioctl_add();
  atbm_module_attribute_init();
  register_reboot_notifier(DAT_0001ec94);
  atbm_init_firmware();
  iVar2 = atbm_get_platform_data();
  puVar4 = DAT_0001ec98;
  puVar6 = local_5c;
  do {
    puVar5 = puVar4 + 2;
    uVar3 = puVar4[1];
    *puVar6 = *puVar4;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
    puVar4 = puVar5;
  } while (puVar5 != DAT_0001ec98 + 8);
  *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
  printk(DAT_0001ec9c,1,0x18,local_5c);
  printk(DAT_0001eca0);
  if ((*(code **)(iVar2 + 0x14) == (code *)0x0) ||
     (iVar2 = (**(code **)(iVar2 + 0x14))(iVar2,1), iVar2 == 0)) {
    iVar2 = sdio_register_driver(DAT_0001eca4);
  }
  else {
    sdio_unregister_driver(DAT_0001eca4);
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== <EXTERNAL>::sdio_release_host @ 00027000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_release_host(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::krealloc @ 00027004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void krealloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_disable_func @ 00027008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_disable_func(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__skb_pad @ 0002700c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __skb_pad(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alloc_chrdev_region @ 00027010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void alloc_chrdev_region(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rtnl_unlock @ 00027014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rtnl_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_set_block_size @ 00027018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_set_block_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alloc_workqueue @ 0002701c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void alloc_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__class_create @ 00027020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __class_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion_timeout @ 00027024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_put @ 00027028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__msecs_to_jiffies @ 0002702c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __msecs_to_jiffies(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rtnl_is_locked @ 00027030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rtnl_is_locked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_driver_unregister @ 00027034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_driver_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_claim_host @ 00027038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_claim_host(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_memcpy_fromio @ 0002703c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_memcpy_fromio(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_register_driver @ 00027040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_register_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00027044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00027048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::complete @ 0002704c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void complete(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_work_on @ 00027050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_set_bit @ 00027054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _set_bit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_dequeue @ 00027060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_dequeue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_swait_queue_head @ 00027064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_swait_queue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::finish_wait @ 00027068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void finish_wait(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kill_fasync @ 0002706c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kill_fasync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::class_destroy @ 00027070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void class_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__put_task_struct @ 00027074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __put_task_struct(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::up @ 00027078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crc32_be @ 0002707c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crc32_be(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_alloc_name @ 00027080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_alloc_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00027084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 00027088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule_timeout_interruptible @ 0002708c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule_timeout_interruptible(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prepare_to_wait_event @ 00027090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void prepare_to_wait_event(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_memcpy_toio @ 00027094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_memcpy_toio(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_should_stop @ 00027098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_should_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__wake_up @ 0002709c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sched_setscheduler @ 000270a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_setscheduler(__pid_t __pid,int __policy,sched_param *__param)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unregister_netdevice_queue @ 000270a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void unregister_netdevice_queue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_device @ 000270a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void get_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__dev_get_by_name @ 000270ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __dev_get_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ether_setup @ 000270b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ether_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::full_name_hash @ 000270b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void full_name_hash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pskb_expand_head @ 000270b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pskb_expand_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wake_up_process @ 000270bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wake_up_process(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_f0_readb @ 000270c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_f0_readb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::eth_type_trans @ 000270c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void eth_type_trans(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alloc_netdev_mqs @ 000270c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void alloc_netdev_mqs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_align_size @ 000270cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_align_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree_skb @ 000270d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule_timeout @ 000270d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule @ 000270d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000270dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_release_irq @ 000270e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_release_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::refcount_warn_saturate @ 000270e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void refcount_warn_saturate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::put_device @ 000270e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void put_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::register_reboot_notifier @ 000270ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void register_reboot_notifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__alloc_skb @ 000270f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __alloc_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 000270f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_queue_tail @ 000270f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_queue_tail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_set_host_pm_flags @ 000270fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_set_host_pm_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_f0_writeb @ 00027100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_f0_writeb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_unregister_driver @ 00027104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_unregister_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cdev_add @ 00027108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cdev_add(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unregister_reboot_notifier @ 0002710c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void unregister_reboot_notifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_wait_entry @ 00027110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_wait_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::flush_workqueue @ 00027114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void flush_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_pull @ 0002711c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_pull(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::synchronize_rcu @ 00027120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void synchronize_rcu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memchr @ 00027128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_device_unregister @ 0002712c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_device_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mod_timer @ 00027130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mod_timer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::device_create @ 00027134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void device_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::down @ 00027138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void down(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__usecs_to_jiffies @ 0002713c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __usecs_to_jiffies(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::destroy_workqueue @ 00027140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void destroy_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 00027144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_push @ 00027148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_push(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002714c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_device_add @ 00027150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_device_add(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fasync_helper @ 00027154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fasync_helper(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 00027158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free_netdev @ 0002715c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void free_netdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_device_alloc @ 00027160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_device_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 00027164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_data_to_8023_exthdr @ 00027168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_data_to_8023_exthdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysfs_create_group @ 0002716c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sysfs_create_group(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__local_bh_enable_ip @ 00027170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __local_bh_enable_ip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_stop @ 00027174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 00027178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 0002717c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmalloc_order @ 00027180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmalloc_order(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netif_tx_stop_all_queues @ 00027184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netif_tx_stop_all_queues(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netif_tx_wake_queue @ 00027188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netif_tx_wake_queue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002718c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_queue_purge @ 00027190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_queue_purge(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion @ 0002719c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 000271a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pskb_pull_tail @ 000271a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pskb_pull_tail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netif_rx @ 000271a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netif_rx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__netdev_alloc_skb @ 000271ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __netdev_alloc_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kobject_create_and_add @ 000271b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kobject_create_and_add(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_trim @ 000271b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_trim(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_trylock @ 000271b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_trylock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_to_user @ 000271bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_to_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_get_host_pm_caps @ 000271c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_get_host_pm_caps(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free_percpu @ 000271c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void free_percpu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__platform_driver_register @ 000271cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __platform_driver_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_create_on_node @ 000271d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_create_on_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysfs_remove_group @ 000271d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sysfs_remove_group(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::call_rcu @ 000271d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void call_rcu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfree @ 000271dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unregister_chrdev_region @ 000271e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void unregister_chrdev_region(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 000271e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_from_user @ 000271e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_from_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_timer_key @ 000271ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_timer_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::device_destroy @ 000271f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void device_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_work_sync @ 000271f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_work_sync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netif_carrier_off @ 000271f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netif_carrier_off(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_test_and_clear_bit @ 000271fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _test_and_clear_bit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_channel_to_freq_khz @ 00027200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_channel_to_freq_khz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 00027204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_hdrlen @ 00027208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_hdrlen(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_clone @ 0002720c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_clone(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netif_carrier_on @ 00027210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netif_carrier_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_claim_irq @ 00027214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_claim_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rtnl_lock @ 00027218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rtnl_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_enable_func @ 0002721c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_enable_func(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00027220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::del_timer @ 00027228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void del_timer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vmalloc @ 00027234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 00027238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::msleep @ 0002723c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void msleep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cdev_init @ 00027240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cdev_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 00027244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cdev_del @ 0002724c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cdev_del(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cdev_alloc @ 00027250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cdev_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::flush_work @ 00027254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void flush_work(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kobject_put @ 00027258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kobject_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::register_netdevice @ 0002725c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void register_netdevice(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


