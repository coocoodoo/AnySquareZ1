// sc3336.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== sc3336_enum_mbus_code @ 000101c0 size=22 ===== */

undefined4 sc3336_enum_mbus_code(int param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 4) == 0) {
    *(undefined4 *)(param_3 + 8) = **(undefined4 **)(param_1 + 0x184);
    return 0;
  }
  return 0xffffffea;
}



/* ===== sc3336_enum_frame_sizes @ 000101d6 size=44 ===== */

undefined4 sc3336_enum_frame_sizes(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*param_3 < 2) && (param_3[2] == 0x3007)) {
    iVar2 = DAT_00010204 + *param_3 * 0x40;
    uVar1 = *(uint *)(iVar2 + 4);
    uVar3 = *(uint *)(iVar2 + 8);
    param_3[3] = uVar1;
    param_3[4] = uVar1;
    param_3[5] = uVar3;
    param_3[6] = uVar3;
    return 0;
  }
  return 0xffffffea;
}



/* ===== sc3336_g_frame_interval @ 00010208 size=34 ===== */

undefined4 sc3336_g_frame_interval(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x180) == '\0') {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x184) + 0xc);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x184) + 0x10);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x178);
    uVar2 = *(undefined4 *)(param_1 + 0x17c);
  }
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 8) = uVar2;
  return 0;
}



/* ===== sc3336_g_mbus_config @ 0001022a size=36 ===== */

undefined4 sc3336_g_mbus_config(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x184) + 0x24);
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



/* ===== sc3336_enum_frame_interval @ 0001024e size=54 ===== */

undefined4 sc3336_enum_frame_interval(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*param_3 < 2) {
    iVar4 = *param_3 * 0x40;
    iVar5 = DAT_00010284 + iVar4;
    uVar1 = *(uint *)(iVar5 + 0xc);
    uVar3 = *(uint *)(iVar5 + 0x10);
    param_3[2] = *(uint *)(DAT_00010284 + iVar4);
    param_3[3] = *(uint *)(iVar5 + 4);
    param_3[4] = *(uint *)(iVar5 + 8);
    param_3[5] = uVar1;
    param_3[6] = uVar3;
    uVar2 = 0;
    param_3[8] = *(uint *)(iVar5 + 0x24);
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== sc3336_set_fmt @ 00010288 size=270 ===== */

undefined4 sc3336_set_fmt(int param_1,int param_2,int *param_3)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  mutex_lock(param_1 + 0x16c);
  iVar4 = DAT_0001039c;
  iVar3 = 0x510 - param_3[3];
  iVar2 = 0x900 - param_3[2];
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar2 = (uint)(iVar3 + iVar2 == -1) * 0x40;
  iVar5 = DAT_0001039c + iVar2;
  iVar3 = *(int *)(iVar5 + 4);
  iVar8 = *(int *)(iVar5 + 8);
  param_3[4] = *(int *)(DAT_0001039c + iVar2);
  param_3[5] = 1;
  param_3[2] = iVar3;
  param_3[3] = iVar8;
  if (*param_3 == 0) {
    uVar6 = param_3[1];
    if (*(ushort *)(param_1 + 0x20) <= uVar6) {
      uVar6 = 0;
    }
    piVar7 = (int *)(uVar6 * 0x50 + param_2);
    iVar3 = param_3[3];
    iVar2 = param_3[4];
    iVar4 = param_3[5];
    *piVar7 = param_3[2];
    piVar7[1] = iVar3;
    piVar7[2] = iVar2;
    piVar7[3] = iVar4;
    iVar3 = param_3[7];
    iVar2 = param_3[8];
    iVar4 = param_3[9];
    piVar7[4] = param_3[6];
    piVar7[5] = iVar3;
    piVar7[6] = iVar2;
    piVar7[7] = iVar4;
    iVar3 = param_3[0xb];
    iVar2 = param_3[0xc];
    iVar4 = param_3[0xd];
    piVar7[8] = param_3[10];
    piVar7[9] = iVar3;
    piVar7[10] = iVar2;
    piVar7[0xb] = iVar4;
  }
  else {
    iVar2 = *(int *)(iVar5 + 0x14);
    *(int *)(param_1 + 0x184) = iVar5;
    iVar2 = iVar2 - iVar3;
    __v4l2_ctrl_modify_range(*(undefined4 *)(param_1 + 0x158),iVar3,iVar2,0,iVar2,0,1,0,iVar2,0);
    iVar3 = *(int *)(iVar5 + 0x18) - iVar8;
    __v4l2_ctrl_modify_range
              (*(undefined4 *)(param_1 + 0x15c),extraout_r1,iVar3,0,0x7fff - iVar8,0,1,0,iVar3,0);
    iVar3 = *(int *)(iVar5 + 0x2c);
    __v4l2_ctrl_s_ctrl_int64
              (*(undefined4 *)(param_1 + 0x160),extraout_r1_00,
               (uint)((ulonglong)*(uint *)(iVar4 + iVar3 * 8 + 0x80) * (ulonglong)DAT_00010398 >>
                     0x23) << 2,0);
    __v4l2_ctrl_s_ctrl(*(undefined4 *)(param_1 + 0x164),iVar3);
    uVar1 = *(undefined4 *)(iVar5 + 0x10);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(param_1 + 0x17c) = uVar1;
  }
  mutex_unlock(param_1 + 0x16c);
  return 0;
}



/* ===== pm_runtime_put @ 000103a0 size=6 ===== */

void pm_runtime_put(undefined4 param_1)

{
  __pm_runtime_idle(param_1,5);
  return;
}



/* ===== sc3336_read_reg @ 000103a6 size=92 ===== */

undefined4 sc3336_read_reg(int param_1,uint param_2,int param_3,uint *param_4)

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



/* ===== __sc3336_power_on @ 00010402 size=296 ===== */

int __sc3336_power_on(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *param_1 + 0x20;
  if (((param_1[0xe] != 0) && ((uint)param_1[0xe] < 0xfffff001)) &&
     (iVar2 = pinctrl_select_state(param_1[0xd]), iVar2 < 0)) {
    _dev_err(iVar7,DAT_0001052c);
  }
  iVar2 = clk_set_rate(param_1[1],*(undefined4 *)(param_1[0x71] + 0x28));
  if (iVar2 < 0) {
    _dev_warn(iVar7,DAT_00010530,*(undefined4 *)(param_1[0x71] + 0x28),param_1[0x71],param_4);
  }
  iVar2 = clk_get_rate(param_1[1]);
  iVar6 = *(int *)(param_1[0x71] + 0x28);
  if (iVar2 != iVar6) {
    _dev_warn(iVar7,DAT_00010534,iVar6,param_1[0x71],param_4);
  }
  iVar6 = param_1[1];
  iVar2 = clk_prepare(iVar6);
  if (iVar2 == 0) {
    iVar2 = clk_enable(iVar6);
    if (iVar2 == 0) goto LAB_00010488;
    clk_unprepare(iVar6);
  }
  if (iVar2 < 0) {
    _dev_err(iVar7,DAT_00010538);
    return iVar2;
  }
LAB_00010488:
  if (*(char *)((int)param_1 + 0x1dd) == '\0') {
    if ((uint)param_1[2] < 0xfffff001) {
      gpiod_set_value_cansleep();
    }
    iVar2 = regulator_bulk_enable(3,param_1 + 4);
    if (iVar2 < 0) {
      _dev_err(iVar7,DAT_0001053c);
      iVar7 = param_1[1];
      clk_disable(iVar7);
      clk_unprepare(iVar7);
      return iVar2;
    }
    if ((uint)param_1[2] < 0xfffff001) {
      gpiod_set_value_cansleep(param_1[2],1);
    }
    usleep_range(500,1000);
    if ((uint)param_1[3] < 0xfffff001) {
      gpiod_set_value_cansleep(param_1[3],1);
    }
    if ((uint)param_1[2] < 0xfffff001) {
      uVar5 = 8000;
      uVar3 = 6000;
    }
    else {
      uVar5 = 16000;
      uVar3 = 12000;
    }
    usleep_range(uVar3,uVar5);
    lVar1 = (ulonglong)*(uint *)(param_1[0x71] + 0x28) * (ulonglong)DAT_00010540;
    uVar4 = (uint)((ulonglong)lVar1 >> 0x32);
    iVar7 = __aeabi_uidiv(uVar4 + 0x1fff,uVar4,(int)lVar1);
    usleep_range(iVar7,iVar7 << 1);
  }
  return 0;
}



/* ===== sc3336_runtime_resume @ 00010544 size=6 ===== */

void sc3336_runtime_resume(int param_1)

{
  __sc3336_power_on(*(int *)(param_1 + 0x40) + -0x40);
  return;
}



/* ===== sc3336_write_reg.constprop.1 @ 0001054a size=50 ===== */

undefined4 sc3336_write_reg_constprop_1(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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



/* ===== sc3336_set_ctrl @ 0001057c size=730 ===== */

uint sc3336_set_ctrl(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint local_28;
  uint local_24 [2];
  
  iVar6 = *(int *)(param_1 + 0x10);
  piVar7 = (int *)(iVar6 + -0x124);
  iVar8 = *piVar7;
  local_28 = 0;
  if (*(uint *)(param_1 + 0x28) == DAT_00010858) {
    iVar1 = *(int *)(iVar6 + 0x68);
    __v4l2_ctrl_modify_range
              (iVar1,0,*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c),
               *(int *)(param_1 + 0x84) + -8 + *(int *)(*(int *)(iVar6 + 0xa0) + 8),0,
               *(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0x74),
               *(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x4c));
  }
  iVar8 = iVar8 + 0x20;
  iVar1 = pm_runtime_get_if_active(iVar8,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 == DAT_0001085c) {
    uVar4 = sc3336_read_reg(*piVar7,0x3221,1,&local_28);
    iVar6 = *piVar7;
    if (*(int *)(param_1 + 0x84) == 0) {
      uVar3 = local_28 & 0x9f;
    }
    else {
      uVar3 = local_28 | 0x60;
    }
LAB_00010824:
    uVar2 = 0x3221;
  }
  else {
    if (uVar4 < DAT_0001085c) {
      if (uVar4 == DAT_0001085c - 4) {
        if (*(int *)(*(int *)(iVar6 + 0xa0) + 0x24) == 0) {
          local_28 = *(uint *)(param_1 + 0x84);
          uVar4 = sc3336_write_reg_constprop_1(*piVar7,0x3e00,(local_28 & 0xffff) >> 0xc);
          uVar3 = sc3336_write_reg_constprop_1(*piVar7,0x3e01,(local_28 & 0xfff) >> 4);
          uVar2 = 0x3e02;
          uVar4 = uVar4 | uVar3;
          uVar3 = (local_28 & 0xf) << 4;
          goto LAB_000106be;
        }
      }
      else {
        if (uVar4 == DAT_0001085c - 1) {
          uVar4 = sc3336_read_reg(*piVar7,0x3221,1,&local_28);
          iVar6 = *piVar7;
          if (*(int *)(param_1 + 0x84) == 0) {
            uVar3 = local_28 & 0xf9;
          }
          else {
            uVar3 = local_28 | 6;
          }
          goto LAB_00010824;
        }
LAB_000105f0:
        _dev_warn(iVar8,DAT_00010860,DAT_00010864,uVar4,*(undefined4 *)(param_1 + 0x84));
      }
LAB_00010600:
      uVar4 = 0;
      goto LAB_00010672;
    }
    if (uVar4 == DAT_00010868) {
      if (*(int *)(*(int *)(iVar6 + 0xa0) + 0x24) != 0) goto LAB_00010600;
      iVar6 = *piVar7;
      uVar4 = DAT_0001086c;
      if (*(uint *)(param_1 + 0x84) <= DAT_0001086c) {
        uVar4 = *(uint *)(param_1 + 0x84);
      }
      if (uVar4 < 0x80) {
        uVar4 = 0x80;
      }
      uVar3 = uVar4 * 1000 >> 7;
      uVar4 = uVar3 << 7;
      uVar2 = 0;
      if (uVar3 < 0x5f0) {
        uVar9 = (uint)((ulonglong)uVar4 * (ulonglong)DAT_00010870 >> 0x26);
        uVar3 = 0;
      }
      else if (uVar3 < 0xbe0) {
        uVar3 = 0x40;
        uVar9 = __aeabi_idiv(uVar4,0x5f0);
      }
      else if (uVar3 < 0x17c0) {
        uVar3 = 0x48;
        uVar9 = __aeabi_idiv(uVar4,0xbe0);
      }
      else if (uVar3 < 0x2f80) {
        uVar3 = 0x49;
        uVar9 = __aeabi_idiv(uVar4,0x17c0);
      }
      else if (uVar3 < 0x5f00) {
        uVar3 = 0x4b;
        uVar9 = __aeabi_idiv(uVar4,0x2f80);
      }
      else if (uVar3 < 0xbe00) {
        uVar3 = 0x4f;
        uVar9 = __aeabi_idiv(uVar4,0x5f00);
      }
      else {
        if (uVar3 < 0x17c00) {
          uVar9 = __aeabi_idiv(uVar4,0xbe00);
        }
        else if (uVar3 < 0x2f800) {
          uVar2 = 1;
          uVar9 = __aeabi_idiv(uVar4,0x17c00);
        }
        else if (uVar3 < 0x5f000) {
          uVar2 = 3;
          uVar9 = __aeabi_idiv(uVar4,0x2f800);
        }
        else {
          uVar2 = 7;
          uVar9 = __aeabi_idiv(uVar4,0x5f000);
        }
        uVar3 = 0x5f;
      }
      uVar4 = sc3336_write_reg_constprop_1(iVar6,0x3e06,uVar2);
      uVar9 = sc3336_write_reg_constprop_1(*piVar7,0x3e07,uVar9);
      uVar2 = 0x3e09;
      uVar4 = uVar4 | uVar9;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x84);
      if (uVar4 != DAT_00010868 + 0x10000) {
        if (uVar4 == DAT_00010858) {
          uVar4 = sc3336_write_reg_constprop_1
                            (*piVar7,0x320e,
                             (uint)(*(int *)(*(int *)(iVar6 + 0xa0) + 8) + iVar1) >> 8);
          uVar3 = sc3336_write_reg_constprop_1
                            (*piVar7,0x320f,
                             *(int *)(*(int *)(iVar6 + 0xa0) + 8) + *(int *)(param_1 + 0x84) & 0xff)
          ;
          iVar5 = *(int *)(iVar6 + 0xa0);
          iVar1 = *(int *)(param_1 + 0x84) + *(int *)(iVar5 + 8);
          *(int *)(iVar6 + 0xb4) = iVar1;
          uVar4 = uVar4 | uVar3;
          if (iVar1 != *(int *)(iVar5 + 0x18)) {
            uVar2 = __aeabi_uidiv(*(int *)(iVar5 + 0x18) * *(int *)(iVar5 + 0x10));
            *(undefined4 *)(iVar6 + 0x98) = uVar2;
          }
          goto LAB_00010672;
        }
        goto LAB_000105f0;
      }
      local_24[0] = 0;
      uVar4 = sc3336_read_reg(*piVar7,0x4501,1,local_24);
      if (iVar1 == 0) {
        uVar3 = local_24[0] & 0xfffffff7;
      }
      else {
        uVar3 = local_24[0] | 8;
      }
      uVar2 = 0x4501;
      local_24[0] = uVar3;
    }
LAB_000106be:
    iVar6 = *piVar7;
  }
  uVar3 = sc3336_write_reg_constprop_1(iVar6,uVar2,uVar3);
  uVar4 = uVar4 | uVar3;
LAB_00010672:
  pm_runtime_put(iVar8);
  return uVar4;
}



/* ===== sc3336_ioctl @ 00010874 size=294 ===== */

undefined4 sc3336_ioctl(int param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == DAT_0001099c) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x184) + 4);
    iVar2 = *(int *)(*(int *)(param_1 + 0x184) + 8);
    if (((iVar3 != 0x900) || (iVar2 != 0x510)) || (*param_3 != 0)) {
      _dev_err(*(int *)(param_1 + -0x40) + 0x20,DAT_000109bc,*param_3,iVar3,iVar2);
      return 0xffffffea;
    }
    *(undefined4 *)(param_1 + 0x184) = DAT_000109b8;
    __v4l2_ctrl_modify_range(*(undefined4 *)(param_1 + 0x158));
    __v4l2_ctrl_modify_range
              (*(undefined4 *)(param_1 + 0x15c),0,0x144,0,
               0x7fff - *(int *)(*(int *)(param_1 + 0x184) + 8),0,1,0,0x144,0);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x184) + 0x10);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(*(int *)(param_1 + 0x184) + 0xc);
    *(undefined4 *)(param_1 + 0x17c) = uVar1;
  }
  else {
    if (param_2 < DAT_0001099c) {
      if (param_2 == DAT_000109a0) {
        uVar1 = sc3336_write_reg_constprop_1(*(undefined4 *)(param_1 + -0x40),0x100,*param_3 != 0);
        return uVar1;
      }
      if (param_2 != DAT_000109a4) {
        return DAT_000109a8;
      }
      return 0;
    }
    if (param_2 == DAT_000109ac) {
      *(undefined1 *)(param_3 + 1) = 0;
      *(undefined1 *)((int)param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 6) = 0;
      *(undefined1 *)((int)param_3 + 7) = 0;
      *param_3 = *(int *)(*(int *)(param_1 + 0x184) + 0x24);
      return 0;
    }
    if (param_2 != DAT_000109ac + 0x13cafffc) {
      return DAT_000109a8;
    }
    memset(param_3,0,0x1453);
    strscpy(param_3,DAT_000109b0,0x20);
    strscpy(param_3 + 8,*(undefined4 *)(param_1 + 400));
    strscpy(param_3 + 0x10,*(undefined4 *)(param_1 + 0x194),0x20);
  }
  return 0;
}



/* ===== sc3336_write_array @ 000109c0 size=36 ===== */

int sc3336_write_array(undefined4 param_1,short *param_2)

{
  int iVar1;
  
  do {
    if (*param_2 == -1) {
      return 0;
    }
    iVar1 = sc3336_write_reg_constprop_1(param_1,*param_2,(char)param_2[1]);
    param_2 = param_2 + 2;
  } while (iVar1 == 0);
  return iVar1;
}



/* ===== pm_runtime_put_noidle @ 000109e4 size=46 ===== */

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



/* ===== sc3336_s_power @ 00010a12 size=122 ===== */

int sc3336_s_power(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x40);
  mutex_lock(param_1 + 0x16c);
  if ((bool)*(char *)(param_1 + 0x181) == (param_2 != 0)) {
    iVar1 = 0;
  }
  else {
    iVar2 = iVar2 + 0x20;
    if (param_2 == 0) {
      pm_runtime_put(iVar2);
      *(undefined1 *)(param_1 + 0x181) = 0;
      iVar1 = 0;
    }
    else {
      iVar1 = __pm_runtime_resume(iVar2,4,*(char *)(param_1 + 0x181),param_2 != 0,param_4);
      if (-1 < iVar1) {
        if ((*(char *)(param_1 + 0x19d) != '\0') ||
           (iVar1 = sc3336_write_array(*(undefined4 *)(param_1 + -0x40),DAT_00010a8c), iVar1 == 0))
        {
          *(undefined1 *)(param_1 + 0x181) = 1;
          goto LAB_00010a4a;
        }
        printk(DAT_00010a90,param_1 + 0x74);
      }
      pm_runtime_put_noidle(iVar2);
    }
  }
LAB_00010a4a:
  mutex_unlock(param_1 + 0x16c);
  return iVar1;
}



/* ===== sc3336_open @ 00010a94 size=46 ===== */

undefined4 sc3336_open(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x48);
  mutex_lock(param_1 + 0x16c);
  *puVar1 = 0x900;
  puVar1[1] = 0x510;
  puVar1[2] = 0x3007;
  puVar1[3] = 1;
  mutex_unlock(param_1 + 0x16c);
  return 0;
}



/* ===== sc3336_get_fmt @ 00010ac2 size=116 ===== */

undefined4 sc3336_get_fmt(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x184);
  mutex_lock(param_1 + 0x16c);
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
      iVar1 = piVar5[uVar4 + 0xc];
    }
    else {
      iVar1 = piVar5[0xc];
    }
    param_3[0xe] = iVar1;
  }
  mutex_unlock(param_1 + 0x16c);
  return 0;
}



/* ===== sc3336_s_stream @ 00010b36 size=196 ===== */

int sc3336_s_stream(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x40);
  mutex_lock(param_1 + 0x16c);
  if ((bool)*(char *)(param_1 + 0x180) != (param_2 != 0)) {
    iVar2 = iVar2 + 0x20;
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x19c) = 0;
      if (*(char *)(param_1 + 0x19d) != '\0') {
        *(undefined1 *)(param_1 + 0x19e) = 1;
      }
      sc3336_write_reg_constprop_1(*(undefined4 *)(param_1 + -0x40),0x100,0);
      pm_runtime_put(iVar2);
    }
    else {
      iVar1 = __pm_runtime_resume(iVar2,4);
      if (iVar1 < 0) {
        pm_runtime_put_noidle(iVar2);
        goto LAB_00010b74;
      }
      if (((*(char *)(param_1 + 0x19d) == '\0') &&
          ((iVar1 = sc3336_write_array(*(undefined4 *)(param_1 + -0x40),
                                       *(undefined4 *)(*(int *)(param_1 + 0x184) + 0x20)),
           iVar1 != 0 || (iVar1 = __v4l2_ctrl_handler_setup(param_1 + 0xe4), iVar1 != 0)))) ||
         (iVar1 = sc3336_write_reg_constprop_1(*(undefined4 *)(param_1 + -0x40),0x100,1), iVar1 != 0
         )) {
        printk(DAT_00010bfc,param_1 + 0x74);
        pm_runtime_put(iVar2);
        goto LAB_00010b74;
      }
    }
    *(bool *)(param_1 + 0x180) = param_2 != 0;
  }
  iVar1 = 0;
LAB_00010b74:
  mutex_unlock(param_1 + 0x16c);
  return iVar1;
}



/* ===== __sc3336_power_off @ 00010c00 size=114 ===== */

void __sc3336_power_off(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  clk_disable(uVar1);
  clk_unprepare(uVar1);
  if (*(char *)(param_1 + 0x1dd) != '\0') {
    if (*(char *)(param_1 + 0x1de) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x1dd) = 0;
    *(undefined1 *)(param_1 + 0x1de) = 0;
  }
  if (*(uint *)(param_1 + 0xc) < 0xfffff001) {
    gpiod_set_value_cansleep(*(uint *)(param_1 + 0xc),0);
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  clk_disable(uVar1);
  clk_unprepare(uVar1);
  uVar1 = extraout_r2;
  if (*(uint *)(param_1 + 8) < 0xfffff001) {
    gpiod_set_value_cansleep(*(uint *)(param_1 + 8),0);
    uVar1 = extraout_r2_00;
  }
  if ((*(uint *)(param_1 + 0x3c) != 0) && (*(uint *)(param_1 + 0x3c) < 0xfffff001)) {
    pinctrl_select_state(*(undefined4 *)(param_1 + 0x34));
    uVar1 = extraout_r2_01;
  }
  regulator_bulk_disable(3,param_1 + 0x10,uVar1,param_4);
  return;
}



/* ===== sc3336_runtime_suspend @ 00010c72 size=14 ===== */

undefined4 sc3336_runtime_suspend(int param_1)

{
  __sc3336_power_off(*(int *)(param_1 + 0x40) + -0x40);
  return 0;
}



/* ===== sc3336_remove @ 00010c80 size=62 ===== */

undefined4 sc3336_remove(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  v4l2_async_unregister_subdev(iVar1);
  v4l2_ctrl_handler_free(iVar1 + 0xe4);
  __pm_runtime_disable(param_1 + 0x20,1);
  if (*(int *)(param_1 + 0x108) != 2) {
    __sc3336_power_off(iVar1 + -0x40);
  }
  __pm_runtime_set_status(param_1 + 0x20,2);
  return 0;
}



/* ===== sc3336_probe @ 00010cc0 size=1116 ===== */

uint sc3336_probe(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  uint local_2c [2];
  
  iVar12 = param_1 + 0x20;
  uVar14 = *(undefined4 *)(param_1 + 0x184);
  _dev_info(iVar12,DAT_00010e30,0,1,1);
  piVar2 = (int *)devm_kmalloc(iVar12,0x214,0xdc0);
  if (piVar2 == (int *)0x0) {
    return 0xfffffff4;
  }
  uVar3 = of_property_read_variable_u32_array(uVar14,DAT_00010e34,piVar2 + 0x72,1,0);
  uVar4 = of_property_read_string(uVar14,DAT_00010e38,piVar2 + 0x73);
  uVar5 = of_property_read_string(uVar14,DAT_00010e3c,piVar2 + 0x74);
  uVar6 = of_property_read_string(uVar14,DAT_00010e40,piVar2 + 0x75);
  iVar9 = DAT_00010e48;
  uVar6 = uVar4 | uVar5 | uVar6;
  if ((int)uVar3 < 1) {
    uVar6 = uVar6 | uVar3;
  }
  uVar14 = DAT_00010e44;
  if (uVar6 != 0) {
LAB_00010d42:
    _dev_err(iVar12,uVar14);
    return 0xffffffea;
  }
  *(undefined1 *)((int)piVar2 + 0x1dd) = 0;
  *piVar2 = param_1;
  piVar2[0x71] = iVar9;
  uVar3 = devm_clk_get(iVar12,DAT_00010e4c);
  piVar2[1] = uVar3;
  uVar14 = DAT_00010e50;
  if (0xfffff000 < uVar3) goto LAB_00010d42;
  if (*(char *)((int)piVar2 + 0x1dd) == '\0') {
    uVar14 = 3;
  }
  else {
    uVar14 = 0;
  }
  iVar7 = devm_gpiod_get(iVar12,DAT_00010e54,uVar14);
  piVar2[2] = iVar7;
  if (0xfffff000 < (uint)piVar2[2]) {
    _dev_warn(iVar12,DAT_00010e58);
  }
  if (*(char *)((int)piVar2 + 0x1dd) == '\0') {
    uVar14 = 3;
  }
  else {
    uVar14 = 0;
  }
  iVar7 = devm_gpiod_get(iVar12,DAT_00010e5c,uVar14);
  piVar2[3] = iVar7;
  if (0xfffff000 < (uint)piVar2[3]) {
    _dev_warn(iVar12,DAT_00010e60);
  }
  uVar3 = devm_pinctrl_get(iVar12);
  piVar2[0xd] = uVar3;
  uVar14 = DAT_00010e84;
  if (uVar3 < 0xfffff001) {
    uVar3 = pinctrl_lookup_state(uVar3,DAT_00010e64);
    piVar2[0xe] = uVar3;
    if (0xfffff000 < uVar3) {
      _dev_err(iVar12,DAT_00010e68);
    }
    uVar3 = pinctrl_lookup_state(piVar2[0xd],DAT_00010e6c);
    piVar2[0xf] = uVar3;
    uVar14 = DAT_00010e70;
    if (0xfffff000 < uVar3) goto LAB_00010df6;
  }
  else {
LAB_00010df6:
    _dev_err(iVar12,uVar14);
  }
  piVar2[4] = DAT_00010e74;
  piVar2[7] = DAT_00010e78;
  piVar2[10] = DAT_00010e7c;
  uVar3 = devm_regulator_bulk_get(*piVar2 + 0x20,3,piVar2 + 4);
  if (uVar3 != 0) {
    _dev_err(iVar12,DAT_00010e80);
    return uVar3;
  }
  piVar13 = piVar2 + 0x49;
  __mutex_init(piVar2 + 0x6b,DAT_00011184,DAT_00011180);
  piVar11 = piVar2 + 0x10;
  v4l2_i2c_subdev_init(piVar11,param_1,DAT_00011188);
  iVar7 = piVar2[0x71];
  uVar3 = v4l2_ctrl_handler_init_class(piVar13,9,0,0);
  uVar14 = DAT_0001118c;
  if (uVar3 != 0) {
    return uVar3;
  }
  piVar2[0x4c] = (int)(piVar2 + 0x6b);
  iVar8 = v4l2_ctrl_new_int_menu(piVar13,0,DAT_00011190,1,0,uVar14);
  piVar2[0x69] = iVar8;
  if (iVar8 != 0) {
    *(uint *)(iVar8 + 0x7c) = *(uint *)(iVar8 + 0x7c) | 4;
  }
  iVar8 = *(int *)(iVar7 + 0x2c);
  iVar9 = v4l2_ctrl_new_std(piVar13,0,DAT_00011198,0,0,0,DAT_00011178,DAT_0001117c,1,0,
                            (uint)((ulonglong)*(uint *)(iVar9 + iVar8 * 8 + 0x80) *
                                   (ulonglong)DAT_00011194 >> 0x23) << 2,0);
  piVar2[0x68] = iVar9;
  __v4l2_ctrl_s_ctrl(piVar2[0x69],iVar8);
  iVar9 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 4);
  iVar9 = v4l2_ctrl_new_std(piVar13,0,DAT_0001119c,iVar9,iVar9,0,iVar9,0,1,0,iVar9,0);
  piVar2[0x66] = iVar9;
  if (iVar9 != 0) {
    *(uint *)(iVar9 + 0x7c) = *(uint *)(iVar9 + 0x7c) | 4;
  }
  iVar9 = *(int *)(iVar7 + 0x18) - *(int *)(iVar7 + 8);
  iVar8 = 0x7fff - *(int *)(iVar7 + 8);
  iVar9 = v4l2_ctrl_new_std(piVar13,DAT_000111a0,DAT_000111a4,iVar8,iVar9,0,iVar8,0,1,0,iVar9,0);
  uVar1 = DAT_000111a8;
  uVar14 = DAT_000111a0;
  piVar2[0x67] = iVar9;
  iVar9 = *(int *)(iVar7 + 0x18) + -8;
  iVar9 = v4l2_ctrl_new_std(piVar13,uVar14,uVar1,iVar9,1,0,iVar9,0,1,0,*(undefined4 *)(iVar7 + 0x1c)
                            ,0);
  piVar2[99] = iVar9;
  iVar8 = v4l2_ctrl_new_std(piVar13,DAT_000111a0,DAT_000111b0,0,0x80,0,DAT_000111ac,0,1,0,0x80,0);
  iVar9 = DAT_000111b4;
  piVar2[100] = iVar8;
  iVar9 = v4l2_ctrl_new_std_menu_items(piVar13,iVar9 + -0xc,DAT_000111b8,4,0,0,0,iVar9);
  iVar8 = DAT_000111b4 + -0xc;
  piVar2[0x6a] = iVar9;
  v4l2_ctrl_new_std(piVar13,iVar8,DAT_000111bc,0,0,0,1,0,1,0,0,0);
  v4l2_ctrl_new_std(piVar13,DAT_000111b4 + -0xc,DAT_000111c0,0,0,0,1,0,1,0,0,0);
  uVar3 = piVar2[0x56];
  if (uVar3 != 0) {
    _dev_err(*piVar2 + 0x20,DAT_000111c4,uVar3);
    goto LAB_0001105c;
  }
  *(undefined1 *)(piVar2 + 0x77) = 0;
  piVar2[0x2c] = (int)piVar13;
  iVar9 = *(int *)(iVar7 + 0x10);
  piVar2[0x6e] = *(int *)(iVar7 + 0xc);
  piVar2[0x6f] = iVar9;
  uVar3 = __sc3336_power_on(piVar2);
  if (uVar3 != 0) goto LAB_0001105c;
  iVar9 = *piVar2 + 0x20;
  local_2c[0] = uVar3;
  if (*(char *)((int)piVar2 + 0x1dd) == '\0') {
    uVar14 = sc3336_read_reg(param_1,0x3107,2,local_2c);
    if (local_2c[0] == 0xcc41) {
      _dev_info(iVar9,DAT_000111e8,0xcc41,uVar14);
      goto LAB_0001109c;
    }
    _dev_err(iVar9,DAT_000111e4);
    uVar3 = 0xffffffed;
  }
  else {
    _dev_info(iVar9,DAT_000111c8);
LAB_0001109c:
    piVar2[0x2b] = DAT_000111cc;
    piVar2[0x28] = piVar2[0x28] | 0xc;
    piVar2[0x48] = 2;
    piVar2[0x16] = DAT_000111d0;
    uVar3 = media_entity_pads_init(piVar11,1,piVar2 + 0x41);
    if (-1 < (int)uVar3) {
      local_2c[0] = local_2c[0] & 0xffff0000;
      iVar9 = strcmp((char *)piVar2[0x73],DAT_000111d4);
      if (iVar9 == 0) {
        uVar10 = 0x62;
      }
      else {
        uVar10 = 0x66;
      }
      local_2c[0] = CONCAT31(local_2c[0]._1_3_,uVar10);
      iVar9 = ((int *)piVar2[0x39])[0xb];
      if (iVar9 == 0) {
        iVar9 = *(int *)piVar2[0x39];
      }
      snprintf((char *)(piVar2 + 0x2d),0x20,DAT_000111dc,piVar2[0x72],local_2c,DAT_000111d8,iVar9);
      uVar3 = v4l2_async_register_subdev_sensor_common(piVar11);
      if (uVar3 == 0) {
        __pm_runtime_set_status(iVar12,0);
        pm_runtime_enable(iVar12);
        __pm_runtime_idle(iVar12,0);
        return 0;
      }
      _dev_err(iVar12,DAT_000111e0);
    }
  }
  __sc3336_power_off(piVar2);
LAB_0001105c:
  v4l2_ctrl_handler_free(piVar13);
  return uVar3;
}



/* ===== init_module @ 000111ec size=8 ===== */

void init_module(void)

{
  i2c_register_driver(DAT_000111f8,DAT_000111f4);
  return;
}



/* ===== cleanup_module @ 000111fc size=6 ===== */

void cleanup_module(void)

{
  i2c_del_driver(DAT_00011204);
  return;
}



/* ===== <EXTERNAL>::v4l2_i2c_subdev_init @ 00013000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_i2c_subdev_init(void)

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



/* ===== <EXTERNAL>::of_property_read_variable_u32_array @ 00013008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_variable_u32_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0001300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_unregister_subdev @ 00013014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_unregister_subdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gpiod_set_value_cansleep @ 00013018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void gpiod_set_value_cansleep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_get_if_active @ 0001301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_get_if_active(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_init_class @ 00013020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_init_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_handler_setup @ 00013024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_handler_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_transfer_buffer_flags @ 00013028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_transfer_buffer_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_set_rate @ 0001302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_set_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_get @ 00013030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_set_status @ 00013034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_set_status(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_prepare @ 00013038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_register_subdev_sensor_common @ 0001303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_register_subdev_sensor_common(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 00013040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep_range @ 00013044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usleep_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_bulk_disable @ 00013048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_bulk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 0001304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_int_menu @ 00013050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_int_menu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_s_ctrl @ 00013054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_s_ctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_register_driver @ 00013058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_register_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 0001305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 00013060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 00013064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_string @ 00013068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_pads_init @ 0001306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_pads_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_s_ctrl_int64 @ 00013070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_s_ctrl_int64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 00013074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 00013078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0001307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_warn @ 00013080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00013084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_bulk_enable @ 00013088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_bulk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_regulator_bulk_get @ 0001308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_regulator_bulk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00013090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_lookup_state @ 00013094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_lookup_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_get_rate @ 00013098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_get_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strscpy @ 0001309c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strscpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 000130a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 000130a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_gpiod_get @ 000130a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_gpiod_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_pinctrl_get @ 000130ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_pinctrl_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_std @ 000130b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_std(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_modify_range @ 000130b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_modify_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_free @ 000130b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_disable @ 000130bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_transfer @ 000130c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_transfer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_select_state @ 000130c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_select_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_del_driver @ 000130c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_del_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 000130d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_enable @ 000130d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_std_menu_items @ 000130d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_std_menu_items(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_idle @ 000130dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_idle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_unprepare @ 000130e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


