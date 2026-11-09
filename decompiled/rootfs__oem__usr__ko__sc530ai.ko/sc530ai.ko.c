// sc530ai.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== sc530ai_enum_mbus_code @ 000101c0 size=22 ===== */

undefined4 sc530ai_enum_mbus_code(int param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 4) == 0) {
    *(undefined4 *)(param_3 + 8) = **(undefined4 **)(param_1 + 0x17c);
    return 0;
  }
  return 0xffffffea;
}



/* ===== sc530ai_enum_frame_sizes @ 000101d6 size=72 ===== */

undefined4 sc530ai_enum_frame_sizes(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  
  if (*param_3 < *(uint *)(param_1 + 0x180)) {
    iVar1 = *param_3 * 0x40;
    if (param_3[2] == *(uint *)(*(int *)(param_1 + 0x178) + iVar1)) {
      param_3[3] = *(uint *)(*(int *)(param_1 + 0x178) + iVar1 + 4);
      param_3[4] = *(uint *)(*(int *)(param_1 + 0x178) + iVar1 + 4);
      param_3[6] = *(uint *)(*(int *)(param_1 + 0x178) + iVar1 + 8);
      param_3[5] = *(uint *)(iVar1 + *(int *)(param_1 + 0x178) + 8);
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== sc530ai_g_frame_interval @ 0001021e size=32 ===== */

undefined4 sc530ai_g_frame_interval(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x174) == '\0') {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x17c) + 0xc);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x17c) + 0x10);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + -0xc);
    uVar2 = *(undefined4 *)(param_1 + -8);
  }
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 8) = uVar2;
  return 0;
}



/* ===== sc530ai_g_mbus_config @ 0001023e size=46 ===== */

undefined4 sc530ai_g_mbus_config(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1 << (*(int *)(param_1 + 0x184) - 1U & 0xff);
  iVar1 = *(int *)(*(int *)(param_1 + 0x17c) + 0x2c);
  if (iVar1 == 0) {
    uVar2 = uVar2 | 0x110;
  }
  else if (iVar1 == 6) {
    uVar2 = uVar2 | 0x170;
  }
  else {
    uVar2 = uVar2 | 0x130;
  }
  *param_3 = 5;
  param_3[1] = uVar2;
  return 0;
}



/* ===== sc530ai_get_gain_reg @ 0001026c size=216 ===== */

uint sc530ai_get_gain_reg(uint param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  
  if (0x28bf < param_1) {
    param_1 = 0x28c0;
  }
  if (param_1 < 0x20) {
    param_1 = 0x20;
  }
  param_1 = param_1 * 1000;
  uVar1 = (param_1 >> 5) << 7;
  if (param_1 < 64000) {
    *param_2 = 0;
    *param_3 = 0;
    uVar2 = (uint)((ulonglong)uVar1 * (ulonglong)DAT_00010344);
    uVar1 = (uint)((ulonglong)uVar1 * (ulonglong)DAT_00010344 >> 0x26);
  }
  else {
    if (DAT_00010348 <= param_1 && param_1 - DAT_00010348 != 0) {
      if (param_1 < DAT_0001034c || param_1 - DAT_0001034c == 0) {
        *param_2 = 0x40;
        uVar3 = 0x9f6;
        bVar4 = false;
        *param_3 = 0;
      }
      else if (param_1 < DAT_00010350 || param_1 - DAT_00010350 == 0) {
        *param_2 = 0x48;
        bVar4 = false;
        uVar3 = 0x13f6;
        *param_3 = 0;
      }
      else if (param_1 < DAT_00010354 || param_1 - DAT_00010354 == 0) {
        *param_2 = 0x49;
        bVar4 = false;
        uVar3 = 0x27d8;
        *param_3 = 0;
      }
      else if (param_1 < DAT_00010358 || param_1 - DAT_00010358 == 0) {
        *param_2 = 0x4b;
        bVar4 = false;
        uVar3 = 0x4fb0;
        *param_3 = 0;
      }
      else if (param_1 < DAT_0001035c || param_1 - DAT_0001035c == 0) {
        *param_2 = 0x4f;
        bVar4 = false;
        uVar3 = 0x9f60;
        *param_3 = 0;
      }
      else {
        bVar5 = param_1 < DAT_00010360;
        bVar4 = param_1 - DAT_00010360 == 0;
        *param_2 = 0x5f;
        if (bVar5 || bVar4) {
          *param_3 = 0;
          uVar3 = DAT_00010364;
        }
        else {
          *param_3 = 1;
          uVar3 = DAT_00010368;
        }
        bVar4 = !bVar5 && !bVar4;
      }
      uVar1 = __aeabi_idiv(uVar1,uVar3,param_3,bVar4,param_4);
      *param_4 = uVar1;
      return uVar1;
    }
    *param_2 = 1;
    *param_3 = 0;
    uVar2 = (uint)((ulonglong)uVar1 * (ulonglong)DAT_00010344);
    uVar1 = (uint)((ulonglong)uVar1 * (ulonglong)DAT_00010344 >> 0x27);
  }
  *param_4 = uVar1;
  return uVar2;
}



/* ===== sc530ai_get_selection @ 0001036c size=32 ===== */

void sc530ai_get_selection(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 8) == 2) {
    *(undefined4 *)(param_3 + 0x14) = 2;
    *(undefined4 *)(param_3 + 0x18) = 0xb40;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x1c) = 0x650;
  }
  return;
}



/* ===== sc530ai_enum_frame_interval @ 0001038c size=82 ===== */

undefined4 sc530ai_enum_frame_interval(int param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_3 < *(uint *)(param_1 + 0x180)) {
    iVar4 = *param_3 * 0x40;
    param_3[2] = *(uint *)(*(int *)(param_1 + 0x178) + iVar4);
    param_3[3] = *(uint *)(*(int *)(param_1 + 0x178) + iVar4 + 4);
    param_3[4] = *(uint *)(*(int *)(param_1 + 0x178) + iVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x178) + iVar4;
    uVar3 = *(uint *)(iVar2 + 0x10);
    param_3[5] = *(uint *)(iVar2 + 0xc);
    param_3[6] = uVar3;
    uVar1 = 0;
    param_3[8] = *(uint *)(iVar4 + *(int *)(param_1 + 0x178) + 0x2c);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== __sc530ai_power_on @ 000103de size=228 ===== */

int __sc530ai_power_on(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1 + 0x20;
  if (((param_1[0xe] != 0) && ((uint)param_1[0xe] < 0xfffff001)) &&
     (iVar1 = pinctrl_select_state(param_1[0xd]), iVar1 < 0)) {
    _dev_err(iVar2,DAT_000104c4);
  }
  iVar1 = clk_set_rate(param_1[1],DAT_000104c8);
  if (iVar1 < 0) {
    _dev_warn(iVar2,DAT_000104cc);
  }
  iVar1 = clk_get_rate(param_1[1]);
  if (iVar1 != DAT_000104c8) {
    _dev_warn(iVar2,DAT_000104d0,extraout_r2,DAT_000104c8,param_4);
  }
  iVar3 = param_1[1];
  iVar1 = clk_prepare(iVar3);
  if (iVar1 == 0) {
    iVar1 = clk_enable(iVar3);
    if (iVar1 == 0) goto LAB_00010456;
    clk_unprepare(iVar3);
  }
  if (iVar1 < 0) {
    _dev_err(iVar2,DAT_000104d4);
    return iVar1;
  }
LAB_00010456:
  if ((uint)param_1[2] < 0xfffff001) {
    gpiod_set_value_cansleep(param_1[2],0);
  }
  iVar1 = regulator_bulk_enable(3,param_1 + 4);
  if (iVar1 < 0) {
    _dev_err(iVar2,DAT_000104d8);
    iVar2 = param_1[1];
    clk_disable(iVar2);
    clk_unprepare(iVar2);
  }
  else {
    if ((uint)param_1[2] < 0xfffff001) {
      gpiod_set_value_cansleep(param_1[2],1);
    }
    usleep_range(500,1000);
    if ((uint)param_1[3] < 0xfffff001) {
      gpiod_set_value_cansleep(param_1[3],1);
    }
    usleep_range(4000,5000);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== sc530ai_runtime_resume @ 000104dc size=6 ===== */

void sc530ai_runtime_resume(int param_1)

{
  __sc530ai_power_on(*(int *)(param_1 + 0x40) + -0x4c);
  return;
}



/* ===== sc530ai_set_fmt @ 000104e2 size=298 ===== */

undefined4 sc530ai_set_fmt(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  
  mutex_lock(param_1 + 0x168);
  iVar6 = *(int *)(param_1 + 0x178);
  iVar9 = -1;
  iVar1 = 0;
  iVar2 = extraout_r1;
  for (iVar5 = 0; iVar5 != *(int *)(param_1 + 0x180); iVar5 = iVar5 + 1) {
    iVar2 = iVar6 + iVar5 * 0x40;
    uVar3 = *(int *)(iVar2 + 4) - param_3[2];
    uVar7 = (int)uVar3 >> 0x1f;
    iVar2 = *(int *)(iVar2 + 8) - param_3[3];
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar2 = iVar2 + ((uVar3 ^ uVar7) - uVar7);
    if ((iVar9 == -1) || (iVar2 < iVar9)) {
      iVar1 = iVar5;
      iVar9 = iVar2;
    }
  }
  iVar9 = iVar6 + iVar1 * 0x40;
  param_3[4] = *(int *)(iVar6 + iVar1 * 0x40);
  param_3[2] = *(int *)(iVar9 + 4);
  param_3[3] = *(int *)(iVar9 + 8);
  param_3[5] = 1;
  if (*param_3 == 0) {
    uVar7 = param_3[1];
    if (*(ushort *)(param_1 + 0x20) <= uVar7) {
      uVar7 = 0;
    }
    piVar8 = (int *)(uVar7 * 0x50 + param_2);
    iVar2 = param_3[3];
    iVar1 = param_3[4];
    iVar9 = param_3[5];
    *piVar8 = param_3[2];
    piVar8[1] = iVar2;
    piVar8[2] = iVar1;
    piVar8[3] = iVar9;
    iVar2 = param_3[7];
    iVar1 = param_3[8];
    iVar9 = param_3[9];
    piVar8[4] = param_3[6];
    piVar8[5] = iVar2;
    piVar8[6] = iVar1;
    piVar8[7] = iVar9;
    iVar2 = param_3[0xb];
    iVar1 = param_3[0xc];
    iVar9 = param_3[0xd];
    piVar8[8] = param_3[10];
    piVar8[9] = iVar2;
    piVar8[10] = iVar1;
    piVar8[0xb] = iVar9;
  }
  else {
    *(int *)(param_1 + 0x17c) = iVar9;
    iVar1 = *(int *)(iVar9 + 0x14) - *(int *)(iVar9 + 4);
    __v4l2_ctrl_modify_range(*(undefined4 *)(param_1 + 0x158),iVar2,iVar1,0,iVar1,0,1,0,iVar1,0);
    iVar2 = *(int *)(iVar9 + 0x18) - *(int *)(iVar9 + 8);
    __v4l2_ctrl_modify_range
              (*(undefined4 *)(param_1 + 0x15c),extraout_r1_00,iVar2,0,0x7fff - *(int *)(iVar9 + 8),
               0,1,0,iVar2,0);
    __v4l2_ctrl_s_ctrl(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(iVar9 + 0x20));
    uVar10 = __aeabi_uidiv(*(undefined4 *)(DAT_0001060c + *(int *)(iVar9 + 0x20) * 8),
                           *(undefined4 *)(iVar9 + 0x24));
    __v4l2_ctrl_s_ctrl_int64
              (*(undefined4 *)(param_1 + 0x160),(int)((ulonglong)uVar10 >> 0x20),
               (int)uVar10 * *(int *)(param_1 + 0x184) * 2,0);
    *(undefined4 *)(param_1 + -4) = *(undefined4 *)(iVar9 + 0x18);
    uVar4 = *(undefined4 *)(iVar9 + 0x10);
    *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(iVar9 + 0xc);
    *(undefined4 *)(param_1 + -8) = uVar4;
  }
  mutex_unlock(param_1 + 0x168);
  return 0;
}



/* ===== pm_runtime_put @ 00010610 size=6 ===== */

void pm_runtime_put(undefined4 param_1)

{
  __pm_runtime_idle(param_1,5);
  return;
}



/* ===== sc530ai_read_reg @ 00010616 size=92 ===== */

undefined4 sc530ai_read_reg(int param_1,uint param_2,int param_3,uint *param_4)

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



/* ===== sc530ai_write_reg.constprop.0 @ 00010672 size=50 ===== */

undefined4 sc530ai_write_reg_constprop_0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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



/* ===== sc530ai_set_ctrl @ 000106a4 size=458 ===== */

uint sc530ai_set_ctrl(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c [2];
  
  iVar5 = *(int *)(param_1 + 0x10);
  piVar6 = (int *)(iVar5 + -0x130);
  iVar7 = *piVar6;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c[0] = 0;
  if (*(uint *)(param_1 + 0x28) == DAT_00010870) {
    iVar1 = *(int *)(iVar5 + 0x68);
    __v4l2_ctrl_modify_range
              (iVar1,0,*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c),
               *(int *)(param_1 + 0x84) + -5 + *(int *)(*(int *)(iVar5 + 0x98) + 8),0,
               *(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0x74),
               *(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x4c));
  }
  iVar7 = iVar7 + 0x20;
  iVar1 = pm_runtime_get_if_active(iVar7,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 == DAT_00010874) {
    uVar4 = sc530ai_read_reg(*piVar6,0x3221,1,local_1c);
    if (uVar4 != 0) goto LAB_000107be;
    if (*(int *)(param_1 + 0x84) == 0) {
      local_1c[0] = local_1c[0] & 0xffffff9f;
    }
    else {
      local_1c[0] = local_1c[0] | 0x60;
    }
LAB_00010830:
    uVar4 = sc530ai_write_reg_constprop_0(*piVar6,0x3221);
  }
  else {
    if (uVar4 < DAT_00010874) {
      if (uVar4 == DAT_00010874 - 4) {
        if (*(int *)(*(int *)(iVar5 + 0x98) + 0x2c) == 0) {
          local_1c[0] = *(int *)(param_1 + 0x84) << 1;
          uVar4 = sc530ai_write_reg_constprop_0(*piVar6,0x3e00,(local_1c[0] & 0xffff) >> 0xc);
          uVar2 = sc530ai_write_reg_constprop_0(*piVar6,0x3e01,(local_1c[0] & 0xfff) >> 4);
          uVar3 = 0x3e02;
          uVar4 = uVar4 | uVar2;
          iVar5 = (local_1c[0] & 0xf) << 4;
LAB_000107b6:
          uVar2 = sc530ai_write_reg_constprop_0(*piVar6,uVar3,iVar5);
          uVar4 = uVar4 | uVar2;
          goto LAB_000107be;
        }
      }
      else {
        if (uVar4 == DAT_00010874 - 1) {
          uVar4 = sc530ai_read_reg(*piVar6,0x3221,1,local_1c);
          if (uVar4 != 0) goto LAB_000107be;
          if (*(int *)(param_1 + 0x84) == 0) {
            local_1c[0] = local_1c[0] & 0xfffffff9;
          }
          else {
            local_1c[0] = local_1c[0] | 6;
          }
          goto LAB_00010830;
        }
LAB_0001071a:
        _dev_warn(iVar7,DAT_00010878,DAT_0001087c,uVar4,*(undefined4 *)(param_1 + 0x84));
      }
    }
    else {
      if (uVar4 == DAT_00010870) {
        uVar8 = *(int *)(param_1 + 0x84) + *(int *)(*(int *)(iVar5 + 0x98) + 8);
        uVar4 = sc530ai_write_reg_constprop_0(*piVar6,0x320e,(uVar8 & 0x7fff) >> 8);
        uVar2 = sc530ai_write_reg_constprop_0(*piVar6,0x320f,uVar8 & 0xff);
        uVar4 = uVar4 | uVar2;
        if (uVar4 == 0) {
          *(uint *)(iVar5 + -0xe8) = uVar8;
        }
        iVar1 = *(int *)(*(int *)(iVar5 + 0x98) + 0x18);
        if (*(int *)(iVar5 + -0xe8) != iVar1) {
          uVar3 = __aeabi_uidiv(iVar1 * *(int *)(*(int *)(iVar5 + 0x98) + 0x10));
          *(undefined4 *)(iVar5 + -0xec) = uVar3;
        }
        goto LAB_000107be;
      }
      if (uVar4 != DAT_00010870 + 2) goto LAB_0001071a;
      if (*(int *)(*(int *)(iVar5 + 0x98) + 0x2c) == 0) {
        sc530ai_get_gain_reg(*(undefined4 *)(param_1 + 0x84),&local_28,&local_24,&local_20);
        uVar4 = sc530ai_write_reg_constprop_0(*piVar6,0x3e06,local_24);
        uVar2 = sc530ai_write_reg_constprop_0(*piVar6,0x3e07,local_20);
        uVar3 = 0x3e09;
        uVar4 = uVar4 | uVar2;
        iVar5 = local_28;
        goto LAB_000107b6;
      }
    }
    uVar4 = 0;
  }
LAB_000107be:
  pm_runtime_put(iVar7);
  return uVar4;
}



/* ===== sc530ai_ioctl @ 00010880 size=778 ===== */

uint sc530ai_ioctl(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  if (param_2 == DAT_00010b8c) {
    iVar11 = *(int *)(*(int *)(param_1 + 0x17c) + 4);
    iVar6 = *(int *)(*(int *)(param_1 + 0x17c) + 8);
    for (iVar9 = 0; *(int *)(param_1 + 0x180) != iVar9; iVar9 = iVar9 + 1) {
      iVar14 = *(int *)(param_1 + 0x178) + iVar9 * 0x40;
      if (((*(int *)(iVar14 + 4) == iVar11) && (*(int *)(iVar14 + 8) == iVar6)) &&
         (*(uint *)(iVar14 + 0x2c) == *param_3)) {
        *(int *)(param_1 + 0x17c) = iVar14;
        iVar11 = *(int *)(iVar14 + 0x18) - *(int *)(iVar14 + 8);
        iVar9 = *(int *)(iVar14 + 0x14) - *(int *)(iVar14 + 4);
        __v4l2_ctrl_modify_range(*(undefined4 *)(param_1 + 0x158),iVar6,iVar9,0,iVar9,0,1,0,iVar9,0)
        ;
        __v4l2_ctrl_modify_range
                  (*(undefined4 *)(param_1 + 0x15c),extraout_r1,iVar11,0,
                   0x7fff - *(int *)(*(int *)(param_1 + 0x17c) + 8),0,1,0,iVar11,0);
        __v4l2_ctrl_s_ctrl(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(iVar14 + 0x20));
        uVar18 = __aeabi_uidiv(*(undefined4 *)(DAT_00010ba8 + *(int *)(iVar14 + 0x20) * 8),
                               *(undefined4 *)(iVar14 + 0x24));
        iVar6 = (int)uVar18 * *(int *)(param_1 + 0x184) * 2;
        __v4l2_ctrl_s_ctrl_int64
                  (*(undefined4 *)(param_1 + 0x160),(int)((ulonglong)uVar18 >> 0x20),iVar6,
                   iVar6 >> 0x1f);
        *(undefined4 *)(param_1 + -4) = *(undefined4 *)(iVar14 + 0x18);
        uVar7 = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(iVar14 + 0xc);
        *(undefined4 *)(param_1 + -8) = uVar7;
        _dev_info(*(int *)(param_1 + -0x4c) + 0x20,DAT_00010bac,
                  *(undefined4 *)(*(int *)(param_1 + 0x17c) + 0x2c));
        goto LAB_00010912;
      }
    }
    _dev_err(*(int *)(param_1 + -0x4c) + 0x20,DAT_00010ba4,*param_3,iVar11,iVar6);
LAB_00010938:
    uVar8 = 0xffffffea;
  }
  else {
    if (param_2 < DAT_00010b8c) {
      if (param_2 == DAT_00010b90) {
        uVar8 = sc530ai_write_reg_constprop_0(*(undefined4 *)(param_1 + -0x4c),0x100,*param_3 != 0);
        return uVar8;
      }
      if (param_2 != DAT_00010b94) {
        return DAT_00010b98;
      }
      if (*(int *)(*(int *)(param_1 + 0x17c) + 0x2c) != 5) {
        return 0;
      }
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c[0] = 0;
      if ((*(char *)(param_1 + 0x198) != '\0') || (*(char *)(param_1 + 0x174) != '\0')) {
        uVar12 = param_3[2];
        uVar15 = param_3[3];
        uVar16 = param_3[4];
        uVar10 = uVar12 << 1;
        uVar13 = param_3[5];
        uVar8 = sc530ai_write_reg_constprop_0
                          (*(undefined4 *)(param_1 + -0x4c),0x3e00,(uVar10 & 0xffff) >> 0xc);
        uVar17 = uVar16 << 1;
        uVar10 = sc530ai_write_reg_constprop_0
                           (*(undefined4 *)(param_1 + -0x4c),0x3e01,(uVar10 & 0xfff) >> 4);
        uVar12 = sc530ai_write_reg_constprop_0
                           (*(undefined4 *)(param_1 + -0x4c),0x3e02,(uVar12 & 7) << 5);
        uVar1 = sc530ai_write_reg_constprop_0
                          (*(undefined4 *)(param_1 + -0x4c),0x3e22,(uVar17 & 0xffff) >> 0xc);
        uVar17 = sc530ai_write_reg_constprop_0
                           (*(undefined4 *)(param_1 + -0x4c),0x3e04,(uVar17 & 0xfff) >> 4);
        uVar16 = sc530ai_write_reg_constprop_0
                           (*(undefined4 *)(param_1 + -0x4c),0x3e05,(uVar16 & 7) << 5);
        sc530ai_get_gain_reg(uVar15,&local_40,&local_3c,&local_38);
        sc530ai_get_gain_reg(uVar13,&local_34,&local_30,local_2c);
        uVar13 = sc530ai_write_reg_constprop_0(*(undefined4 *)(param_1 + -0x4c),0x3e06,local_3c);
        uVar15 = sc530ai_write_reg_constprop_0(*(undefined4 *)(param_1 + -0x4c),0x3e07,local_38);
        uVar2 = sc530ai_write_reg_constprop_0(*(undefined4 *)(param_1 + -0x4c),0x3e09,local_40);
        uVar3 = sc530ai_write_reg_constprop_0(*(undefined4 *)(param_1 + -0x4c),0x3e10,local_30);
        uVar4 = sc530ai_write_reg_constprop_0(*(undefined4 *)(param_1 + -0x4c),0x3e11,local_2c[0]);
        uVar5 = sc530ai_write_reg_constprop_0(*(undefined4 *)(param_1 + -0x4c),0x3e13,local_34);
        return uVar5 | uVar8 | uVar10 | uVar12 | uVar1 | uVar17 | uVar16 | uVar13 | uVar15 | uVar2 |
                       uVar3 | uVar4;
      }
      uVar8 = param_3[1];
      uVar10 = param_3[2];
      uVar12 = param_3[3];
      *(uint *)(param_1 + 0x19c) = *param_3;
      *(uint *)(param_1 + 0x1a0) = uVar8;
      *(uint *)(param_1 + 0x1a4) = uVar10;
      *(uint *)(param_1 + 0x1a8) = uVar12;
      uVar8 = param_3[5];
      uVar10 = param_3[6];
      uVar12 = param_3[7];
      *(uint *)(param_1 + 0x1ac) = param_3[4];
      *(uint *)(param_1 + 0x1b0) = uVar8;
      *(uint *)(param_1 + 0x1b4) = uVar10;
      *(uint *)(param_1 + 0x1b8) = uVar12;
      uVar8 = param_3[9];
      uVar10 = param_3[10];
      uVar12 = param_3[0xb];
      *(uint *)(param_1 + 0x1bc) = param_3[8];
      *(uint *)(param_1 + 0x1c0) = uVar8;
      *(uint *)(param_1 + 0x1c4) = uVar10;
      *(uint *)(param_1 + 0x1c8) = uVar12;
      *(uint *)(param_1 + 0x1cc) = param_3[0xc];
      *(undefined1 *)(param_1 + 0x198) = 1;
    }
    else if (param_2 == DAT_00010b9c) {
      memset(param_3,0,0x1453);
      strscpy(param_3,DAT_00010ba0,0x20);
      strscpy(param_3 + 8,*(undefined4 *)(param_1 + 400));
      strscpy(param_3 + 0x10,*(undefined4 *)(param_1 + 0x194),0x20);
    }
    else {
      if (param_2 != DAT_00010b9c + 0x2bc90014) {
        if (param_2 != DAT_00010b9c + 0xec350004) {
          return DAT_00010b98;
        }
        *(undefined1 *)(param_3 + 1) = 0;
        *(undefined1 *)((int)param_3 + 5) = 0;
        *(undefined1 *)((int)param_3 + 6) = 0;
        *(undefined1 *)((int)param_3 + 7) = 0;
        *param_3 = *(uint *)(*(int *)(param_1 + 0x17c) + 0x2c);
        return 0;
      }
      if (3 < *param_3) goto LAB_00010938;
      param_3[1] = *(uint *)(*(int *)(param_1 + 0x17c) + (*param_3 + 0xc) * 4);
      param_3[2] = *(uint *)(*(int *)(param_1 + 0x17c) + 4);
      param_3[3] = *(uint *)(*(int *)(param_1 + 0x17c) + 8);
      param_3[4] = **(uint **)(param_1 + 0x17c);
    }
LAB_00010912:
    uVar8 = 0;
  }
  return uVar8;
}



/* ===== pm_runtime_put_noidle @ 00010bb0 size=46 ===== */

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



/* ===== sc530ai_s_stream @ 00010bde size=240 ===== */

int sc530ai_s_stream(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + -0x4c);
  mutex_lock(param_1 + 0x168);
  if ((bool)*(char *)(param_1 + 0x174) != (param_2 != 0)) {
    iVar2 = iVar2 + 0x20;
    if (param_2 != 0) {
      iVar1 = __pm_runtime_resume(iVar2,4);
      if (iVar1 < 0) {
        pm_runtime_put_noidle(iVar2);
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + -0x4c);
        psVar3 = *(short **)(*(int *)(param_1 + 0x17c) + 0x28);
        do {
          if (*psVar3 == -1) {
            iVar1 = __v4l2_ctrl_handler_setup(param_1 + 0xe4);
            if (iVar1 == 0) {
              if (((*(char *)(param_1 + 0x198) == '\0') ||
                  (*(int *)(*(int *)(param_1 + 0x17c) + 0x2c) == 0)) ||
                 (iVar1 = sc530ai_ioctl(param_1,DAT_00010cd0,param_1 + 0x19c), iVar1 == 0)) {
                iVar1 = sc530ai_write_reg_constprop_0(*(undefined4 *)(param_1 + -0x4c),0x100,1);
                if (iVar1 == 0) goto LAB_00010cac;
              }
              else {
                _dev_err(*(int *)(param_1 + -0x4c) + 0x20,DAT_00010cd4);
              }
            }
            break;
          }
          iVar1 = sc530ai_write_reg_constprop_0(uVar4,*psVar3,(char)psVar3[1]);
          psVar3 = psVar3 + 2;
        } while (iVar1 == 0);
        printk(DAT_00010cd8,param_1 + 0x74);
        pm_runtime_put(iVar2);
      }
      goto LAB_00010c1e;
    }
    *(undefined1 *)(param_1 + 0x198) = 0;
    sc530ai_write_reg_constprop_0
              (*(undefined4 *)(param_1 + -0x4c),0x100,0,*(char *)(param_1 + 0x174),param_4);
    pm_runtime_put(iVar2);
LAB_00010cac:
    *(bool *)(param_1 + 0x174) = param_2 != 0;
  }
  iVar1 = 0;
LAB_00010c1e:
  mutex_unlock(param_1 + 0x168);
  return iVar1;
}



/* ===== sc530ai_open @ 00010cdc size=44 ===== */

undefined4 sc530ai_open(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x178);
  puVar1 = *(undefined4 **)(param_2 + 0x48);
  mutex_lock(param_1 + 0x168);
  *puVar1 = puVar2[1];
  puVar1[1] = puVar2[2];
  puVar1[2] = *puVar2;
  puVar1[3] = 1;
  mutex_unlock(param_1 + 0x168);
  return 0;
}



/* ===== sc530ai_get_fmt @ 00010d08 size=116 ===== */

undefined4 sc530ai_get_fmt(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x17c);
  mutex_lock(param_1 + 0x168);
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
    if ((uVar4 < 4) && (piVar5[0xb] != 0)) {
      iVar1 = piVar5[uVar4 + 0xc];
    }
    else {
      iVar1 = piVar5[0xc];
    }
    param_3[0xe] = iVar1;
  }
  mutex_unlock(param_1 + 0x168);
  return 0;
}



/* ===== sc530ai_s_power @ 00010d7c size=114 ===== */

uint sc530ai_s_power(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + -0x4c);
  mutex_lock(param_1 + 0x168);
  if ((bool)*(char *)(param_1 + 0x175) == (param_2 != 0)) {
    uVar1 = 0;
  }
  else {
    iVar3 = iVar3 + 0x20;
    if (param_2 == 0) {
      pm_runtime_put(iVar3);
      *(undefined1 *)(param_1 + 0x175) = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = __pm_runtime_resume(iVar3,4,*(char *)(param_1 + 0x175),param_2 != 0,param_4);
      if ((int)uVar1 < 0) {
        pm_runtime_put_noidle(iVar3);
      }
      else {
        uVar2 = sc530ai_write_reg_constprop_0(*(undefined4 *)(param_1 + -0x4c),0x103,1);
        uVar1 = uVar1 | uVar2;
        usleep_range(100,200);
        *(undefined1 *)(param_1 + 0x175) = 1;
      }
    }
  }
  mutex_unlock(param_1 + 0x168);
  return uVar1;
}



/* ===== __sc530ai_power_off @ 00010dee size=76 ===== */

void __sc530ai_power_off(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar1;
  
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



/* ===== sc530ai_runtime_suspend @ 00010e3a size=14 ===== */

undefined4 sc530ai_runtime_suspend(int param_1)

{
  __sc530ai_power_off(*(int *)(param_1 + 0x40) + -0x4c);
  return 0;
}



/* ===== sc530ai_remove @ 00010e48 size=62 ===== */

undefined4 sc530ai_remove(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  v4l2_async_unregister_subdev(iVar1);
  v4l2_ctrl_handler_free(iVar1 + 0xe4);
  __pm_runtime_disable(param_1 + 0x20,1);
  if (*(int *)(param_1 + 0x108) != 2) {
    __sc530ai_power_off(iVar1 + -0x4c);
  }
  __pm_runtime_set_status(param_1 + 0x20,2);
  return 0;
}



/* ===== sc530ai_probe @ 00010e88 size=1134 ===== */

uint sc530ai_probe(int param_1)

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
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 local_30;
  uint local_2c [2];
  
  iVar10 = param_1 + 0x20;
  uVar12 = *(undefined4 *)(param_1 + 0x184);
  local_30 = 0;
  _dev_info(iVar10,DAT_00011040,0,1,1);
  piVar1 = (int *)devm_kmalloc(iVar10,0x21c,0xdc0);
  if (piVar1 == (int *)0x0) {
    return 0xfffffff4;
  }
  of_property_read_variable_u32_array(uVar12,DAT_00011044,&local_30,1,0);
  uVar2 = of_property_read_variable_u32_array(uVar12,DAT_00011048,piVar1 + 0x75,1,0);
  uVar3 = of_property_read_string(uVar12,DAT_0001104c,piVar1 + 0x76);
  uVar4 = of_property_read_string(uVar12,DAT_00011050,piVar1 + 0x77);
  uVar5 = of_property_read_string(uVar12,DAT_00011054,piVar1 + 0x78);
  uVar5 = uVar3 | uVar4 | uVar5;
  if ((int)uVar2 < 1) {
    uVar5 = uVar5 | uVar2;
  }
  uVar12 = DAT_00011058;
  if (uVar5 != 0) {
LAB_00010f1a:
    _dev_err(iVar10,uVar12);
    return 0xffffffea;
  }
  *piVar1 = param_1;
  iVar6 = of_graph_get_next_endpoint(*(undefined4 *)(param_1 + 0x184),0);
  uVar12 = DAT_0001105c;
  if ((iVar6 == 0) ||
     (iVar6 = fwnode_property_read_u32_array(iVar6 + 0xc,DAT_00011060,0,0), uVar12 = DAT_00011064,
     iVar6 < 1)) goto LAB_00010f1a;
  piVar1[0x74] = iVar6;
  _dev_info(iVar10,DAT_00011068);
  iVar6 = DAT_0001106c;
  if (piVar1[0x74] == 2) {
    piVar1[0x73] = 1;
    piVar1[0x71] = iVar6;
  }
  else if (piVar1[0x74] == 4) {
    piVar1[0x71] = DAT_00011078;
    piVar1[0x73] = 2;
  }
  uVar12 = DAT_00011070;
  piVar1[0x72] = piVar1[0x71];
  uVar2 = devm_clk_get(iVar10,uVar12);
  piVar1[1] = uVar2;
  uVar12 = DAT_00011074;
  if (0xfffff000 < uVar2) goto LAB_00010f1a;
  uVar2 = devm_gpiod_get(iVar10,DAT_0001107c,3);
  piVar1[2] = uVar2;
  if (0xfffff000 < uVar2) {
    _dev_warn(iVar10,DAT_00011080);
  }
  uVar2 = devm_gpiod_get(iVar10,DAT_00011084,3);
  piVar1[3] = uVar2;
  if (0xfffff000 < uVar2) {
    _dev_warn(iVar10,DAT_00011088);
  }
  uVar2 = devm_pinctrl_get(iVar10);
  piVar1[0xd] = uVar2;
  uVar12 = DAT_000110ac;
  if (uVar2 < 0xfffff001) {
    uVar2 = pinctrl_lookup_state(uVar2,DAT_0001108c);
    piVar1[0xe] = uVar2;
    if (0xfffff000 < uVar2) {
      _dev_err(iVar10,DAT_00011090);
    }
    uVar2 = pinctrl_lookup_state(piVar1[0xd],DAT_00011094);
    piVar1[0xf] = uVar2;
    uVar12 = DAT_00011098;
    if (uVar2 < 0xfffff001) goto LAB_00011010;
  }
  _dev_err(iVar10,uVar12);
LAB_00011010:
  piVar1[4] = DAT_0001109c;
  piVar1[7] = DAT_000110a0;
  piVar1[10] = DAT_000110a4;
  uVar2 = devm_regulator_bulk_get(*piVar1 + 0x20,3,piVar1 + 4);
  iVar6 = DAT_000113c0;
  if (uVar2 != 0) {
    _dev_err(iVar10,DAT_000110a8);
    return uVar2;
  }
  piVar13 = piVar1 + 0x4c;
  __mutex_init(piVar1 + 0x6d,DAT_0001136c,DAT_00011368);
  piVar8 = piVar1 + 0x13;
  v4l2_i2c_subdev_init(piVar8,param_1,iVar6 + 0xec);
  iVar11 = piVar1[0x72];
  uVar2 = v4l2_ctrl_handler_init_class(piVar13,8,0,0);
  if (uVar2 != 0) {
    return uVar2;
  }
  piVar1[0x4f] = (int)(piVar1 + 0x6d);
  iVar6 = v4l2_ctrl_new_int_menu(piVar13,0,DAT_00011370,2,0,iVar6);
  piVar1[0x6c] = iVar6;
  __v4l2_ctrl_s_ctrl(iVar6,*(undefined4 *)(iVar11 + 0x20));
  iVar6 = *(int *)(iVar11 + 0x20);
  uVar12 = DAT_0001139c;
  if (((iVar6 != 0) && (uVar12 = DAT_00011374, iVar6 != 1)) && (uVar12 = DAT_0001139c, iVar6 != 2))
  {
    uVar12 = 0;
  }
  iVar6 = v4l2_ctrl_new_std(piVar13,0,DAT_00011378,0,0,0,DAT_00011374,0,1,0,uVar12,0);
  piVar1[0x6b] = iVar6;
  iVar6 = *(int *)(iVar11 + 0x14) - *(int *)(iVar11 + 4);
  iVar6 = v4l2_ctrl_new_std(piVar13,0,DAT_0001137c,iVar6,iVar6,0,iVar6,0,1,0,iVar6,0);
  piVar1[0x69] = iVar6;
  if (iVar6 != 0) {
    *(uint *)(iVar6 + 0x7c) = *(uint *)(iVar6 + 0x7c) | 4;
  }
  iVar6 = *(int *)(iVar11 + 0x18) - *(int *)(iVar11 + 8);
  iVar9 = 0x7fff - *(int *)(iVar11 + 8);
  iVar6 = v4l2_ctrl_new_std(piVar13,DAT_00011380,DAT_00011384,iVar9,iVar6,0,iVar9,0,1,0,iVar6,0);
  uVar12 = DAT_00011380;
  piVar1[0x6a] = iVar6;
  iVar6 = v4l2_ctrl_new_std(piVar13,uVar12,DAT_00011388,0,2,0,*(int *)(iVar11 + 0x18) + -5,0,1,0,
                            *(undefined4 *)(iVar11 + 0x1c),0);
  piVar1[0x66] = iVar6;
  iVar6 = v4l2_ctrl_new_std(piVar13,DAT_00011380,DAT_0001138c,0,0x20,0,0x28c0,0,1,0,0x20,0);
  uVar12 = DAT_00011380;
  piVar1[0x67] = iVar6;
  v4l2_ctrl_new_std(piVar13,uVar12,DAT_00011390,0,0,0,1,0,1,0,0,0);
  v4l2_ctrl_new_std(piVar13,DAT_00011380,DAT_00011394,0,0,0,1,0,1,0,0,0);
  uVar2 = piVar1[0x59];
  if (uVar2 == 0) {
    *(undefined1 *)(piVar1 + 0x79) = 0;
    piVar1[0x2f] = (int)piVar13;
    piVar1[0x12] = *(int *)(iVar11 + 0x18);
    iVar6 = *(int *)(iVar11 + 0x10);
    piVar1[0x10] = *(int *)(iVar11 + 0xc);
    piVar1[0x11] = iVar6;
    uVar2 = __sc530ai_power_on(piVar1);
    if (uVar2 == 0) {
      iVar6 = *piVar1;
      local_2c[0] = uVar2;
      uVar12 = sc530ai_read_reg(param_1,0x3107,2,local_2c);
      if (local_2c[0] == 0x8e39) {
        _dev_info(iVar6 + 0x20,DAT_000113a4,0x8e39,uVar12);
        piVar1[0x2e] = DAT_000113a8;
        piVar1[0x2b] = piVar1[0x2b] | 0xc;
        piVar1[0x4b] = 2;
        piVar1[0x19] = DAT_000113ac;
        uVar2 = media_entity_pads_init(piVar8,1,piVar1 + 0x44);
        if (-1 < (int)uVar2) {
          local_2c[0] = local_2c[0] & 0xffff0000;
          iVar6 = strcmp((char *)piVar1[0x76],DAT_000113b0);
          if (iVar6 == 0) {
            uVar7 = 0x62;
          }
          else {
            uVar7 = 0x66;
          }
          local_2c[0] = CONCAT31(local_2c[0]._1_3_,uVar7);
          iVar6 = ((int *)piVar1[0x3c])[0xb];
          if (iVar6 == 0) {
            iVar6 = *(int *)piVar1[0x3c];
          }
          snprintf((char *)(piVar1 + 0x30),0x20,DAT_000113b8,piVar1[0x75],local_2c,DAT_000113b4,
                   iVar6);
          uVar2 = v4l2_async_register_subdev_sensor_common(piVar8);
          if (uVar2 == 0) {
            __pm_runtime_set_status(iVar10,0);
            pm_runtime_enable(iVar10);
            __pm_runtime_idle(iVar10,0);
            return 0;
          }
          _dev_err(*piVar1 + 0x20,DAT_000113bc);
        }
      }
      else {
        _dev_err(iVar6 + 0x20,DAT_000113a0);
        uVar2 = 0xffffffed;
      }
      __sc530ai_power_off(piVar1);
    }
  }
  else {
    _dev_err(*piVar1 + 0x20,DAT_00011398,uVar2);
  }
  v4l2_ctrl_handler_free(piVar13);
  return uVar2;
}



/* ===== init_module @ 000113c4 size=8 ===== */

void init_module(void)

{
  i2c_register_driver(DAT_000113d0,DAT_000113cc);
  return;
}



/* ===== cleanup_module @ 000113d4 size=6 ===== */

void cleanup_module(void)

{
  i2c_del_driver(DAT_000113dc);
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



/* ===== <EXTERNAL>::fwnode_property_read_u32_array @ 0001304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fwnode_property_read_u32_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 00013050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_int_menu @ 00013054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_int_menu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_s_ctrl @ 00013058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_s_ctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_register_driver @ 0001305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_register_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 00013060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 00013064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 00013068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_string @ 0001306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_pads_init @ 00013070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_pads_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_graph_get_next_endpoint @ 00013074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_graph_get_next_endpoint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_s_ctrl_int64 @ 00013078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_s_ctrl_int64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 0001307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 00013080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00013084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_warn @ 00013088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0001308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_bulk_enable @ 00013090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_bulk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_regulator_bulk_get @ 00013094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_regulator_bulk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00013098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_lookup_state @ 0001309c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_lookup_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_get_rate @ 000130a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_get_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strscpy @ 000130a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strscpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 000130a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 000130ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_gpiod_get @ 000130b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_gpiod_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_pinctrl_get @ 000130b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_pinctrl_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_std @ 000130b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_std(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_modify_range @ 000130bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_modify_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_free @ 000130c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_transfer @ 000130c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_transfer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_disable @ 000130c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_select_state @ 000130cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_select_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_del_driver @ 000130d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_del_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 000130d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_enable @ 000130dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_idle @ 000130e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_idle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_unprepare @ 000130e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


