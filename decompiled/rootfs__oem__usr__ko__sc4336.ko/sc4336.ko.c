// sc4336.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== sc4336_enum_mbus_code @ 000101c0 size=22 ===== */

undefined4 sc4336_enum_mbus_code(int param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 4) == 0) {
    *(undefined4 *)(param_3 + 8) = **(undefined4 **)(param_1 + 0x174);
    return 0;
  }
  return 0xffffffea;
}



/* ===== sc4336_enum_frame_sizes @ 000101d6 size=38 ===== */

undefined4 sc4336_enum_frame_sizes(undefined4 param_1,undefined4 param_2,int *param_3)

{
  if ((*param_3 == 0) && (param_3[2] == 0x3007)) {
    param_3[3] = 0xa00;
    param_3[4] = 0xa00;
    param_3[5] = 0x5a0;
    param_3[6] = 0x5a0;
    return 0;
  }
  return 0xffffffea;
}



/* ===== sc4336_g_frame_interval @ 000101fc size=34 ===== */

undefined4 sc4336_g_frame_interval(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x170) == '\0') {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x174) + 0xc);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x10);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x178);
    uVar2 = *(undefined4 *)(param_1 + 0x17c);
  }
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 8) = uVar2;
  return 0;
}



/* ===== sc4336_g_mbus_config @ 0001021e size=36 ===== */

undefined4 sc4336_g_mbus_config(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x174) + 0x24);
  if (iVar1 == 0) {
    uVar2 = 0x112;
  }
  else if (iVar1 == 6) {
    uVar2 = 0x172;
  }
  else {
    uVar2 = 0x132;
  }
  *param_3 = 5;
  param_3[1] = uVar2;
  return 0;
}



/* ===== sc4336_enum_frame_interval @ 00010242 size=48 ===== */

undefined4 sc4336_enum_frame_interval(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_3 == 0) {
    param_3[2] = 0x3007;
    param_3[3] = 0xa00;
    param_3[4] = 0x5a0;
    iVar2 = DAT_00010274[1];
    param_3[5] = *DAT_00010274;
    param_3[6] = iVar2;
    param_3[8] = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== __sc4336_power_on @ 00010278 size=262 ===== */

int __sc4336_power_on(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_1 + 0x20;
  if (((param_1[0xe] != 0) && ((uint)param_1[0xe] < 0xfffff001)) &&
     (iVar1 = pinctrl_select_state(param_1[0xd]), iVar1 < 0)) {
    _dev_err(iVar4,DAT_00010380);
  }
  iVar1 = clk_set_rate(param_1[1],DAT_00010384);
  if (iVar1 < 0) {
    _dev_warn(iVar4,DAT_00010388);
  }
  iVar1 = clk_get_rate(param_1[1]);
  if (iVar1 != DAT_00010384) {
    _dev_warn(iVar4,DAT_0001038c,extraout_r2,DAT_00010384,param_4);
  }
  iVar5 = param_1[1];
  iVar1 = clk_prepare(iVar5);
  if (iVar1 == 0) {
    iVar1 = clk_enable(iVar5);
    if (iVar1 == 0) goto LAB_000102f0;
    clk_unprepare(iVar5);
  }
  if (iVar1 < 0) {
    _dev_err(iVar4,DAT_00010390);
    return iVar1;
  }
LAB_000102f0:
  if ((char)param_1[0x75] == '\0') {
    if ((uint)param_1[2] < 0xfffff001) {
      gpiod_set_value_cansleep();
    }
    iVar1 = regulator_bulk_enable(3,param_1 + 4);
    if (iVar1 < 0) {
      _dev_err(iVar4,DAT_00010394);
      iVar4 = param_1[1];
      clk_disable(iVar4);
      clk_unprepare(iVar4);
      return iVar1;
    }
    if ((uint)param_1[2] < 0xfffff001) {
      gpiod_set_value_cansleep(param_1[2],1);
    }
    usleep_range(500,1000);
    if ((uint)param_1[3] < 0xfffff001) {
      gpiod_set_value_cansleep(param_1[3],1);
    }
    if ((uint)param_1[2] < 0xfffff001) {
      uVar3 = 8000;
      uVar2 = 6000;
    }
    else {
      uVar3 = 16000;
      uVar2 = 12000;
    }
    usleep_range(uVar2,uVar3);
    usleep_range(0x156,0x2ac);
  }
  return 0;
}



/* ===== sc4336_runtime_resume @ 00010398 size=6 ===== */

void sc4336_runtime_resume(int param_1)

{
  __sc4336_power_on(*(int *)(param_1 + 0x40) + -0x40);
  return;
}



/* ===== pm_runtime_put @ 0001039e size=6 ===== */

void pm_runtime_put(undefined4 param_1)

{
  __pm_runtime_idle(param_1,5);
  return;
}



/* ===== sc4336_read_reg @ 000103a4 size=92 ===== */

undefined4 sc4336_read_reg(int param_1,uint param_2,int param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ushort local_2e;
  uint local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  ushort *local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  int local_14;
  
  local_28 = *(undefined2 *)(param_1 + 2);
  local_2e = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  local_20 = &local_2e;
  local_1a = 1;
  local_18 = (undefined2)param_3;
  local_14 = (int)&local_28 - param_3;
  local_2c = 0;
  local_26 = 0;
  local_24 = 2;
  local_1c = local_28;
  iVar1 = i2c_transfer(*(undefined4 *)(param_1 + 0x18),&local_28,2);
  if (iVar1 == 2) {
    uVar2 = 0;
    *param_4 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
               local_2c >> 0x18;
  }
  else {
    uVar2 = 0xfffffffb;
  }
  return uVar2;
}



/* ===== sc4336_set_fmt @ 00010400 size=182 ===== */

undefined4 sc4336_set_fmt(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  mutex_lock(param_1 + 0x164);
  param_3[4] = 0x3007;
  param_3[2] = 0xa00;
  param_3[3] = 0x5a0;
  param_3[5] = 1;
  iVar1 = DAT_000104b8;
  if (*param_3 == 0) {
    uVar5 = param_3[1];
    if (*(ushort *)(param_1 + 0x20) <= uVar5) {
      uVar5 = 0;
    }
    piVar6 = (int *)(uVar5 * 0x50 + param_2);
    iVar1 = param_3[3];
    iVar3 = param_3[4];
    iVar4 = param_3[5];
    *piVar6 = param_3[2];
    piVar6[1] = iVar1;
    piVar6[2] = iVar3;
    piVar6[3] = iVar4;
    iVar1 = param_3[7];
    iVar3 = param_3[8];
    iVar4 = param_3[9];
    piVar6[4] = param_3[6];
    piVar6[5] = iVar1;
    piVar6[6] = iVar3;
    piVar6[7] = iVar4;
    iVar1 = param_3[0xb];
    iVar3 = param_3[0xc];
    iVar4 = param_3[0xd];
    piVar6[8] = param_3[10];
    piVar6[9] = iVar1;
    piVar6[10] = iVar3;
    piVar6[0xb] = iVar4;
  }
  else {
    *(int *)(param_1 + 0x174) = DAT_000104b8;
    __v4l2_ctrl_modify_range(*(undefined4 *)(param_1 + 0x158));
    __v4l2_ctrl_modify_range(*(undefined4 *)(param_1 + 0x15c));
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x17c) = uVar2;
  }
  mutex_unlock(param_1 + 0x164);
  return 0;
}



/* ===== sc4336_write_reg.constprop.1 @ 000104bc size=50 ===== */

undefined4 sc4336_write_reg_constprop_1(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_e [2];
  undefined1 local_c;
  undefined3 uStack_b;
  undefined4 uStack_8;
  
  _local_c = CONCAT31((int3)((uint)param_2 >> 8),(char)param_3);
  uStack_8 = param_3;
  iVar1 = i2c_transfer_buffer_flags(param_1,local_e,3,0);
  if (iVar1 == 3) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffb;
  }
  return uVar2;
}



/* ===== sc4336_ioctl @ 000104ee size=282 ===== */

undefined4 sc4336_ioctl(int param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == DAT_00010608) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x174) + 4);
    iVar2 = *(int *)(*(int *)(param_1 + 0x174) + 8);
    if (((iVar3 != 0xa00) || (iVar2 != 0x5a0)) || (*param_3 != 0)) {
      _dev_err(*(int *)(param_1 + -0x40) + 0x20,DAT_00010624,*param_3,iVar3,iVar2);
      return 0xffffffea;
    }
    *(undefined4 *)(param_1 + 0x174) = DAT_00010620;
    __v4l2_ctrl_modify_range(*(undefined4 *)(param_1 + 0x158));
    __v4l2_ctrl_modify_range
              (*(undefined4 *)(param_1 + 0x15c),0,0x168,0,
               0x7fff - *(int *)(*(int *)(param_1 + 0x174) + 8),0,1,0,0x168,0);
  }
  else {
    if (param_2 < DAT_00010608) {
      if (param_2 == DAT_0001060c) {
        uVar1 = sc4336_write_reg_constprop_1(*(undefined4 *)(param_1 + -0x40),0x100,*param_3 != 0);
        return uVar1;
      }
      if (param_2 != DAT_00010610) {
        return DAT_00010614;
      }
      return 0;
    }
    if (param_2 == DAT_00010618) {
      *(undefined1 *)(param_3 + 1) = 0;
      *(undefined1 *)((int)param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 6) = 0;
      *(undefined1 *)((int)param_3 + 7) = 0;
      *param_3 = *(int *)(*(int *)(param_1 + 0x174) + 0x24);
      return 0;
    }
    if (param_2 != DAT_00010618 + 0x13cafffc) {
      return DAT_00010614;
    }
    memset(param_3,0,0x1453);
    strscpy(param_3,DAT_0001061c,0x20);
    strscpy(param_3 + 8,*(undefined4 *)(param_1 + 0x188));
    strscpy(param_3 + 0x10,*(undefined4 *)(param_1 + 0x18c),0x20);
  }
  return 0;
}



/* ===== sc4336_set_ctrl @ 00010628 size=736 ===== */

uint sc4336_set_ctrl(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint local_20;
  uint local_1c;
  
  iVar7 = *(int *)(param_1 + 0x10);
  piVar8 = (int *)(iVar7 + -0x124);
  iVar9 = *piVar8;
  local_20 = 0;
  if (*(uint *)(param_1 + 0x28) == DAT_00010908) {
    iVar1 = *(int *)(iVar7 + 0x68);
    __v4l2_ctrl_modify_range
              (iVar1,0,*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c),
               *(int *)(param_1 + 0x84) + -8 + *(int *)(*(int *)(iVar7 + 0x90) + 8),0,
               *(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0x74),
               *(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x4c));
  }
  iVar9 = iVar9 + 0x20;
  iVar1 = pm_runtime_get_if_active(iVar9,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  if (uVar5 == DAT_0001090c) {
    uVar5 = sc4336_read_reg(*piVar8,0x3221,1,&local_20);
    iVar7 = *piVar8;
    if (*(int *)(param_1 + 0x84) == 0) {
      uVar4 = local_20 & 0x9f;
    }
    else {
      uVar4 = local_20 | 0x60;
    }
LAB_000108d6:
    uVar3 = 0x3221;
  }
  else {
    if (uVar5 < DAT_0001090c) {
      if (uVar5 == DAT_0001090c - 4) {
        if (*(int *)(*(int *)(iVar7 + 0x90) + 0x24) == 0) {
          local_20 = *(uint *)(param_1 + 0x84);
          uVar5 = sc4336_write_reg_constprop_1(*piVar8,0x3e00,(local_20 & 0xffff) >> 0xc);
          uVar4 = sc4336_write_reg_constprop_1(*piVar8,0x3e01,(local_20 & 0xfff) >> 4);
          uVar3 = 0x3e02;
          uVar5 = uVar5 | uVar4;
          uVar4 = (local_20 & 0xf) << 4;
          goto LAB_0001076a;
        }
      }
      else {
        if (uVar5 == DAT_0001090c - 1) {
          uVar5 = sc4336_read_reg(*piVar8,0x3221,1,&local_20);
          iVar7 = *piVar8;
          if (*(int *)(param_1 + 0x84) == 0) {
            uVar4 = local_20 & 0xf9;
          }
          else {
            uVar4 = local_20 | 6;
          }
          goto LAB_000108d6;
        }
LAB_0001069c:
        _dev_warn(iVar9,DAT_00010910,DAT_00010914,uVar5,*(undefined4 *)(param_1 + 0x84));
      }
LAB_000106ac:
      uVar5 = 0;
      goto LAB_0001071e;
    }
    if (uVar5 == DAT_00010918) {
      if (*(int *)(*(int *)(iVar7 + 0x90) + 0x24) != 0) goto LAB_000106ac;
      uVar5 = *(uint *)(param_1 + 0x84);
      if (0x3bff < uVar5) {
        uVar5 = 0x3c00;
      }
      if (uVar5 < 0x20) {
        uVar5 = 0x20;
      }
      uVar5 = uVar5 * 1000;
      uVar2 = uVar5 >> 5;
      uVar3 = 0;
      if (uVar5 < 64000) {
        uVar2 = (uint)((ulonglong)(uVar2 << 7) * (ulonglong)DAT_0001091c >> 0x26);
        uVar4 = 0;
      }
      else if (uVar5 < 0x1f400) {
        uVar4 = 8;
        uVar2 = (uint)((ulonglong)(uVar2 << 7) * (ulonglong)DAT_0001091c >> 0x27);
      }
      else if (uVar5 < 0x3e800) {
        uVar4 = 9;
        uVar2 = (uint)((ulonglong)(uVar2 << 7) * (ulonglong)DAT_0001091c >> 0x28);
      }
      else if (uVar5 < 0x7d000) {
        uVar4 = 0xb;
        uVar2 = (uint)((ulonglong)(uVar2 << 7) * (ulonglong)DAT_0001091c >> 0x29);
      }
      else if (uVar5 < 0xfa000) {
        uVar4 = 0xf;
        uVar2 = (uint)((ulonglong)(uVar2 << 7) * (ulonglong)DAT_0001091c >> 0x2a);
      }
      else {
        if (uVar5 < 0x1f4000) {
          uVar2 = (uint)((ulonglong)(uVar2 << 7) * (ulonglong)DAT_0001091c >> 0x2b);
        }
        else if (uVar5 < 0x3e8000) {
          uVar3 = 1;
          uVar2 = (uint)((ulonglong)(uVar2 << 7) * (ulonglong)DAT_0001091c >> 0x2c);
        }
        else if (uVar5 < 0x7d0000) {
          uVar3 = 3;
          uVar2 = (uint)((ulonglong)(uVar2 << 7) * (ulonglong)DAT_0001091c >> 0x2d);
        }
        else {
          uVar3 = 7;
          if (uVar5 - DAT_00010920 == 0) {
            uVar2 = 0xf0;
          }
          else {
            uVar2 = (uint)((ulonglong)(uVar2 << 7) * (ulonglong)DAT_0001091c >> 0x2e);
          }
        }
        uVar4 = 0x1f;
      }
      uVar5 = sc4336_write_reg_constprop_1(*piVar8,0x3e06,uVar3);
      uVar2 = sc4336_write_reg_constprop_1(*piVar8,0x3e07,uVar2);
      uVar3 = 0x3e09;
      uVar5 = uVar5 | uVar2;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x84);
      if (uVar5 != DAT_00010918 + 0x10000) {
        if (uVar5 == DAT_00010908) {
          uVar5 = sc4336_write_reg_constprop_1
                            (*piVar8,0x320e,
                             (uint)(*(int *)(*(int *)(iVar7 + 0x90) + 8) + iVar1) >> 8);
          uVar4 = sc4336_write_reg_constprop_1
                            (*piVar8,0x320f,
                             *(int *)(*(int *)(iVar7 + 0x90) + 8) + *(int *)(param_1 + 0x84) & 0xff)
          ;
          iVar6 = *(int *)(iVar7 + 0x90);
          iVar1 = *(int *)(param_1 + 0x84) + *(int *)(iVar6 + 8);
          *(int *)(iVar7 + 0xac) = iVar1;
          uVar5 = uVar5 | uVar4;
          if (iVar1 != *(int *)(iVar6 + 0x18)) {
            uVar3 = __aeabi_uidiv(*(int *)(iVar6 + 0x18) * *(int *)(iVar6 + 0x10));
            *(undefined4 *)(iVar7 + 0x98) = uVar3;
          }
          goto LAB_0001071e;
        }
        goto LAB_0001069c;
      }
      local_1c = 0;
      uVar5 = sc4336_read_reg(*piVar8,0x4501,1,&local_1c);
      if (iVar1 == 0) {
        uVar4 = local_1c & 0xfffffff7;
      }
      else {
        uVar4 = local_1c | 8;
      }
      uVar3 = 0x4501;
      local_1c = uVar4;
    }
LAB_0001076a:
    iVar7 = *piVar8;
  }
  uVar4 = sc4336_write_reg_constprop_1(iVar7,uVar3,uVar4);
  uVar5 = uVar5 | uVar4;
LAB_0001071e:
  pm_runtime_put(iVar9);
  return uVar5;
}



/* ===== sc4336_write_array @ 00010924 size=36 ===== */

int sc4336_write_array(undefined4 param_1,short *param_2)

{
  int iVar1;
  
  do {
    if (*param_2 == -1) {
      return 0;
    }
    iVar1 = sc4336_write_reg_constprop_1(param_1,*param_2,(char)param_2[1]);
    param_2 = param_2 + 2;
  } while (iVar1 == 0);
  return iVar1;
}



/* ===== pm_runtime_put_noidle @ 00010948 size=46 ===== */

void pm_runtime_put_noidle(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xd4);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    if (*piVar2 == 0) {
      return;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  return;
}



/* ===== sc4336_open @ 00010976 size=46 ===== */

undefined4 sc4336_open(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x48);
  mutex_lock(param_1 + 0x164);
  *puVar1 = 0xa00;
  puVar1[1] = 0x5a0;
  puVar1[2] = 0x3007;
  puVar1[3] = 1;
  mutex_unlock(param_1 + 0x164);
  return 0;
}



/* ===== sc4336_get_fmt @ 000109a4 size=116 ===== */

undefined4 sc4336_get_fmt(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x174);
  mutex_lock(param_1 + 0x164);
  uVar4 = param_3[1];
  if (*param_3 == 0) {
    if (*(ushort *)(param_1 + 0x20) <= uVar4) {
      uVar4 = 0;
    }
    piVar5 = (int *)(uVar4 * 0x50 + param_2);
    iVar1 = piVar5[1];
    iVar2 = piVar5[2];
    iVar3 = piVar5[3];
    param_3[2] = *piVar5;
    param_3[3] = iVar1;
    param_3[4] = iVar2;
    param_3[5] = iVar3;
    iVar1 = piVar5[5];
    iVar2 = piVar5[6];
    iVar3 = piVar5[7];
    param_3[6] = piVar5[4];
    param_3[7] = iVar1;
    param_3[8] = iVar2;
    param_3[9] = iVar3;
    iVar1 = piVar5[9];
    iVar2 = piVar5[10];
    iVar3 = piVar5[0xb];
    param_3[10] = piVar5[8];
    param_3[0xb] = iVar1;
    param_3[0xc] = iVar2;
    param_3[0xd] = iVar3;
  }
  else {
    param_3[2] = piVar5[1];
    param_3[3] = piVar5[2];
    param_3[4] = *piVar5;
    param_3[5] = 1;
    if ((uVar4 < 4) && (piVar5[9] != 0)) {
      iVar1 = piVar5[uVar4 + 10];
    }
    else {
      iVar1 = piVar5[10];
    }
    param_3[0xe] = iVar1;
  }
  mutex_unlock(param_1 + 0x164);
  return 0;
}



/* ===== sc4336_s_stream @ 00010a18 size=202 ===== */

int sc4336_s_stream(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x40);
  mutex_lock(param_1 + 0x164);
  if ((bool)*(char *)(param_1 + 0x170) != (param_2 != 0)) {
    iVar2 = iVar2 + 0x20;
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x194) != '\0') {
        *(undefined1 *)(param_1 + 0x195) = 1;
        pm_runtime_put(*(int *)(param_1 + -0x40) + 0x20);
      }
      sc4336_write_reg_constprop_1(*(undefined4 *)(param_1 + -0x40),0x100,0);
      pm_runtime_put(iVar2);
    }
    else {
      iVar1 = __pm_runtime_resume(iVar2,4);
      if (iVar1 < 0) {
        pm_runtime_put_noidle(iVar2);
        goto LAB_00010a56;
      }
      if (((*(char *)(param_1 + 0x194) == '\0') &&
          ((iVar1 = sc4336_write_array(*(undefined4 *)(param_1 + -0x40),
                                       *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x20)),
           iVar1 != 0 || (iVar1 = __v4l2_ctrl_handler_setup(param_1 + 0xe4), iVar1 != 0)))) ||
         (iVar1 = sc4336_write_reg_constprop_1(*(undefined4 *)(param_1 + -0x40),0x100,1), iVar1 != 0
         )) {
        printk(DAT_00010ae4,param_1 + 0x74);
        pm_runtime_put(iVar2);
        goto LAB_00010a56;
      }
    }
    *(bool *)(param_1 + 0x170) = param_2 != 0;
  }
  iVar1 = 0;
LAB_00010a56:
  mutex_unlock(param_1 + 0x164);
  return iVar1;
}



/* ===== sc4336_s_power @ 00010ae8 size=122 ===== */

int sc4336_s_power(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x40);
  mutex_lock(param_1 + 0x164);
  if ((bool)*(char *)(param_1 + 0x171) == (param_2 != 0)) {
    iVar1 = 0;
  }
  else {
    iVar2 = iVar2 + 0x20;
    if (param_2 == 0) {
      pm_runtime_put(iVar2);
      *(undefined1 *)(param_1 + 0x171) = 0;
      iVar1 = 0;
    }
    else {
      iVar1 = __pm_runtime_resume(iVar2,4,*(char *)(param_1 + 0x171),param_2 != 0,param_4);
      if (-1 < iVar1) {
        if ((*(char *)(param_1 + 0x194) != '\0') ||
           (iVar1 = sc4336_write_array(*(undefined4 *)(param_1 + -0x40),DAT_00010b64), iVar1 == 0))
        {
          *(undefined1 *)(param_1 + 0x171) = 1;
          goto LAB_00010b20;
        }
        printk(DAT_00010b68,param_1 + 0x74);
      }
      pm_runtime_put_noidle(iVar2);
    }
  }
LAB_00010b20:
  mutex_unlock(param_1 + 0x164);
  return iVar1;
}



/* ===== __sc4336_power_off @ 00010b6c size=96 ===== */

void __sc4336_power_off(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  clk_disable(uVar1);
  clk_unprepare(uVar1);
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    if (*(char *)(param_1 + 0x1d5) == '\0') {
      return;
    }
    *(undefined2 *)(param_1 + 0x1d4) = 0;
  }
  uVar1 = extraout_r2;
  if (*(uint *)(param_1 + 0xc) < 0xfffff001) {
    gpiod_set_value_cansleep(*(uint *)(param_1 + 0xc),0);
    uVar1 = extraout_r2_00;
  }
  if (*(uint *)(param_1 + 8) < 0xfffff001) {
    gpiod_set_value_cansleep(*(uint *)(param_1 + 8),0);
    uVar1 = extraout_r2_01;
  }
  if ((*(uint *)(param_1 + 0x3c) != 0) && (*(uint *)(param_1 + 0x3c) < 0xfffff001)) {
    pinctrl_select_state(*(undefined4 *)(param_1 + 0x34));
    uVar1 = extraout_r2_02;
  }
  regulator_bulk_disable(3,param_1 + 0x10,uVar1,param_4);
  return;
}



/* ===== sc4336_runtime_suspend @ 00010bcc size=14 ===== */

undefined4 sc4336_runtime_suspend(int param_1)

{
  __sc4336_power_off(*(int *)(param_1 + 0x40) + -0x40);
  return 0;
}



/* ===== sc4336_remove @ 00010bda size=62 ===== */

undefined4 sc4336_remove(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  v4l2_async_unregister_subdev(iVar1);
  v4l2_ctrl_handler_free(iVar1 + 0xe4);
  __pm_runtime_disable(param_1 + 0x20,1);
  if (*(int *)(param_1 + 0x108) != 2) {
    __sc4336_power_off(iVar1 + -0x40);
  }
  __pm_runtime_set_status(param_1 + 0x20,2);
  return 0;
}



/* ===== sc4336_probe @ 00010c18 size=1122 ===== */

uint sc4336_probe(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint local_2c [2];
  
  iVar10 = param_1 + 0x20;
  uVar12 = *(undefined4 *)(param_1 + 0x184);
  _dev_info(iVar10,DAT_00010d90,0,1,1);
  piVar1 = (int *)devm_kmalloc(iVar10,0x1d8,0xdc0);
  if (piVar1 == (int *)0x0) {
    return 0xfffffff4;
  }
  uVar2 = of_property_read_variable_u32_array(uVar12,DAT_00010d94,piVar1 + 0x70,1,0);
  uVar3 = of_property_read_string(uVar12,DAT_00010d98,piVar1 + 0x71);
  uVar4 = of_property_read_string(uVar12,DAT_00010d9c,piVar1 + 0x72);
  uVar5 = of_property_read_string(uVar12,DAT_00010da0,piVar1 + 0x73);
  iVar13 = DAT_00010da8;
  uVar5 = uVar3 | uVar4 | uVar5;
  if ((int)uVar2 < 1) {
    uVar5 = uVar5 | uVar2;
  }
  uVar12 = DAT_00010da4;
  if (uVar5 != 0) {
LAB_00010c9a:
    _dev_err(iVar10,uVar12);
    return 0xffffffea;
  }
  *(undefined1 *)(piVar1 + 0x75) = 0;
  *piVar1 = param_1;
  piVar1[0x6d] = iVar13;
  uVar2 = devm_clk_get(iVar10,DAT_00010dac);
  piVar1[1] = uVar2;
  uVar12 = DAT_00010db0;
  if (0xfffff000 < uVar2) goto LAB_00010c9a;
  if ((char)piVar1[0x75] == '\0') {
    uVar2 = devm_gpiod_get(iVar10,DAT_00010db4,3);
    piVar1[2] = uVar2;
    if (0xfffff000 < uVar2) {
      _dev_warn(iVar10,DAT_00010db8);
    }
    uVar12 = 3;
  }
  else {
    uVar2 = devm_gpiod_get(iVar10,DAT_00010db4,0);
    piVar1[2] = uVar2;
    if (0xfffff000 < uVar2) {
      _dev_warn(iVar10,DAT_00010db8);
    }
    uVar12 = 0;
  }
  uVar2 = devm_gpiod_get(iVar10,DAT_00010dbc,uVar12);
  piVar1[3] = uVar2;
  if (0xfffff000 < uVar2) {
    _dev_warn(iVar10,DAT_00010dc0);
  }
  uVar2 = devm_pinctrl_get(iVar10);
  piVar1[0xd] = uVar2;
  uVar12 = DAT_00010de4;
  if (uVar2 < 0xfffff001) {
    uVar2 = pinctrl_lookup_state(uVar2,DAT_00010dc4);
    piVar1[0xe] = uVar2;
    if (0xfffff000 < uVar2) {
      _dev_err(iVar10,DAT_00010dc8);
    }
    uVar2 = pinctrl_lookup_state(piVar1[0xd],DAT_00010dcc);
    piVar1[0xf] = uVar2;
    uVar12 = DAT_00010dd0;
    if (0xfffff000 < uVar2) goto LAB_00010d3e;
  }
  else {
LAB_00010d3e:
    _dev_err(iVar10,uVar12);
  }
  piVar1[4] = DAT_00010dd4;
  piVar1[7] = DAT_00010dd8;
  piVar1[10] = DAT_00010ddc;
  uVar2 = devm_regulator_bulk_get(*piVar1 + 0x20,3,piVar1 + 4);
  if (uVar2 != 0) {
    _dev_err(iVar10,DAT_00010de0);
    return uVar2;
  }
  piVar11 = piVar1 + 0x49;
  __mutex_init(piVar1 + 0x69,DAT_000110e4,DAT_000110e0);
  piVar8 = piVar1 + 0x10;
  v4l2_i2c_subdev_init(piVar8,param_1,DAT_000110e8);
  iVar13 = piVar1[0x6d];
  uVar2 = v4l2_ctrl_handler_init_class(piVar11,9,0,0);
  uVar12 = DAT_000110ec;
  if (uVar2 != 0) {
    return uVar2;
  }
  piVar1[0x4c] = (int)(piVar1 + 0x69);
  iVar6 = v4l2_ctrl_new_int_menu(piVar11,0,DAT_000110f0,0,0,uVar12);
  if (iVar6 != 0) {
    *(uint *)(iVar6 + 0x7c) = *(uint *)(iVar6 + 0x7c) | 4;
  }
  v4l2_ctrl_new_std(piVar11,0,DAT_000110f4,0,0,0,DAT_000110d8,DAT_000110dc,1,0,DAT_000110d8,
                    DAT_000110dc);
  iVar6 = *(int *)(iVar13 + 0x14) - *(int *)(iVar13 + 4);
  iVar6 = v4l2_ctrl_new_std(piVar11,0,DAT_000110f8,iVar6,iVar6,0,iVar6,0,1,0,iVar6,0);
  piVar1[0x66] = iVar6;
  if (iVar6 != 0) {
    *(uint *)(iVar6 + 0x7c) = *(uint *)(iVar6 + 0x7c) | 4;
  }
  iVar6 = *(int *)(iVar13 + 0x18) - *(int *)(iVar13 + 8);
  iVar9 = 0x7fff - *(int *)(iVar13 + 8);
  iVar6 = v4l2_ctrl_new_std(piVar11,DAT_00011100,DAT_000110fc,iVar9,iVar6,0,iVar9,0,1,0,iVar6,0);
  piVar1[0x67] = iVar6;
  iVar6 = *(int *)(iVar13 + 0x10);
  piVar1[0x6e] = *(int *)(iVar13 + 0xc);
  piVar1[0x6f] = iVar6;
  iVar6 = *(int *)(iVar13 + 0x18) + -8;
  iVar13 = v4l2_ctrl_new_std(piVar11,DAT_00011100,DAT_00011104,iVar6,1,0,iVar6,0,1,0,
                             *(undefined4 *)(iVar13 + 0x1c),0);
  piVar1[99] = iVar13;
  iVar6 = v4l2_ctrl_new_std(piVar11,DAT_00011100,DAT_00011108,0,0x20,0,0x3c00,0,1,0,0x20,0);
  iVar13 = DAT_00011140;
  uVar12 = DAT_0001110c;
  iVar9 = DAT_00011140 + -0xc;
  piVar1[100] = iVar6;
  iVar6 = v4l2_ctrl_new_std_menu_items(piVar11,iVar9,uVar12,4,0,0,0,iVar13);
  piVar1[0x68] = iVar6;
  v4l2_ctrl_new_std(piVar11,iVar13 + -0xc,DAT_00011110);
  uVar17 = 1;
  uVar18 = 0;
  uVar15 = 1;
  uVar16 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar12 = 0;
  uVar14 = 0;
  v4l2_ctrl_new_std(piVar11,iVar13 + -0xc,DAT_00011114);
  uVar2 = piVar1[0x56];
  if (uVar2 != 0) {
    _dev_err(*piVar1 + 0x20,DAT_00011118,uVar2);
    goto LAB_00010fba;
  }
  piVar1[0x2c] = (int)piVar11;
  uVar2 = __sc4336_power_on(piVar1);
  if (uVar2 != 0) goto LAB_00010fba;
  iVar13 = *piVar1 + 0x20;
  local_2c[0] = uVar2;
  if ((char)piVar1[0x75] == '\0') {
    uVar12 = sc4336_read_reg(param_1,0x3107,2,local_2c,uVar12,uVar14,uVar15,uVar16,uVar17,uVar18,
                             uVar19,uVar20);
    if (local_2c[0] == 0xdc42) {
      _dev_info(iVar13,DAT_0001113c,0xdc42,uVar12);
      goto LAB_00010fea;
    }
    _dev_err(iVar13,DAT_00011138);
    uVar2 = 0xffffffed;
  }
  else {
    _dev_info(iVar13,DAT_0001111c);
LAB_00010fea:
    piVar1[0x2b] = DAT_00011120;
    piVar1[0x28] = piVar1[0x28] | 0xc;
    piVar1[0x48] = 2;
    piVar1[0x16] = DAT_00011124;
    uVar2 = media_entity_pads_init(piVar8,1,piVar1 + 0x41);
    if (-1 < (int)uVar2) {
      local_2c[0] = local_2c[0] & 0xffff0000;
      iVar13 = strcmp((char *)piVar1[0x71],DAT_00011128);
      if (iVar13 == 0) {
        uVar7 = 0x62;
      }
      else {
        uVar7 = 0x66;
      }
      local_2c[0] = CONCAT31(local_2c[0]._1_3_,uVar7);
      iVar13 = ((int *)piVar1[0x39])[0xb];
      if (iVar13 == 0) {
        iVar13 = *(int *)piVar1[0x39];
      }
      snprintf((char *)(piVar1 + 0x2d),0x20,DAT_00011130,piVar1[0x70],local_2c,DAT_0001112c,iVar13);
      uVar2 = v4l2_async_register_subdev_sensor_common(piVar8);
      if (uVar2 == 0) {
        __pm_runtime_set_status(iVar10,0);
        pm_runtime_enable(iVar10);
        if ((char)piVar1[0x75] != '\0') {
          __pm_runtime_resume(iVar10,4);
          return 0;
        }
        __pm_runtime_idle(iVar10,0);
        return 0;
      }
      _dev_err(iVar10,DAT_00011134);
    }
  }
  __sc4336_power_off(piVar1);
LAB_00010fba:
  v4l2_ctrl_handler_free(piVar11);
  return uVar2;
}



/* ===== init_module @ 00011144 size=8 ===== */

void init_module(void)

{
  i2c_register_driver(DAT_00011150,DAT_0001114c);
  return;
}



/* ===== cleanup_module @ 00011154 size=6 ===== */

void cleanup_module(void)

{
  i2c_del_driver(DAT_0001115c);
  return;
}



/* ===== <EXTERNAL>::v4l2_i2c_subdev_init @ 00012000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_i2c_subdev_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_kmalloc @ 00012004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_variable_u32_array @ 00012008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_variable_u32_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0001200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_unregister_subdev @ 00012014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_unregister_subdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gpiod_set_value_cansleep @ 00012018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void gpiod_set_value_cansleep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_get_if_active @ 0001201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_get_if_active(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_init_class @ 00012020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_init_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_handler_setup @ 00012024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_handler_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_transfer_buffer_flags @ 00012028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_transfer_buffer_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_set_rate @ 0001202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_set_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_get @ 00012030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_set_status @ 00012034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_set_status(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_prepare @ 00012038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_register_subdev_sensor_common @ 0001203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_register_subdev_sensor_common(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 00012040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep_range @ 00012044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usleep_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_bulk_disable @ 00012048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_bulk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 0001204c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_int_menu @ 00012050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_int_menu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_register_driver @ 00012054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_register_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 00012058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 0001205c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_string @ 00012060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_pads_init @ 00012064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_pads_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 00012068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 0001206c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00012070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_warn @ 00012074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00012078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_bulk_enable @ 0001207c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_bulk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_regulator_bulk_get @ 00012080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_regulator_bulk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00012084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_lookup_state @ 00012088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_lookup_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_get_rate @ 0001208c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_get_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strscpy @ 00012090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strscpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 00012094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 00012098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_gpiod_get @ 0001209c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_gpiod_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_pinctrl_get @ 000120a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_pinctrl_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_std @ 000120a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_std(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_modify_range @ 000120a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_modify_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_free @ 000120ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_transfer @ 000120b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_transfer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_disable @ 000120b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_select_state @ 000120b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_select_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_del_driver @ 000120bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_del_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 000120c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_enable @ 000120c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_std_menu_items @ 000120cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_std_menu_items(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_idle @ 000120d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_idle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_unprepare @ 000120d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


