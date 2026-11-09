// gc2053.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== gc2053_g_frame_interval @ 000101c0 size=20 ===== */

undefined4 gc2053_g_frame_interval(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x174) + 0xc);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(param_1 + 0x174) + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  return 0;
}



/* ===== gc2053_g_mbus_config @ 000101d4 size=26 ===== */

undefined4 gc2053_g_mbus_config(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x174) + 0x20) == 0) {
    uVar1 = 0x112;
  }
  else {
    uVar1 = 0;
  }
  *param_3 = 5;
  param_3[1] = uVar1;
  return 0;
}



/* ===== gc2053_enum_mbus_code @ 000101ee size=18 ===== */

undefined4 gc2053_enum_mbus_code(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 4) == 0) {
    *(undefined4 *)(param_3 + 8) = 0x300a;
    return 0;
  }
  return 0xffffffea;
}



/* ===== gc2053_enum_frame_sizes @ 00010200 size=52 ===== */

undefined4 gc2053_enum_frame_sizes(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*param_3 < *(uint *)(param_1 + 0x17c)) && (param_3[2] == 0x300a)) {
    iVar3 = *param_3 * 0x34;
    iVar1 = DAT_00010234 + iVar3;
    uVar4 = *(uint *)(DAT_00010234 + iVar3);
    param_3[3] = uVar4;
    param_3[4] = uVar4;
    uVar4 = *(uint *)(iVar1 + 4);
    uVar2 = 0;
    param_3[5] = uVar4;
    param_3[6] = uVar4;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== gc2053_enum_frame_interval @ 00010238 size=62 ===== */

undefined4 gc2053_enum_frame_interval(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*param_3 < *(uint *)(param_1 + 0x17c)) {
    param_3[2] = 0x300a;
    iVar4 = *param_3 * 0x34;
    iVar5 = DAT_00010278 + iVar4;
    uVar1 = *(uint *)(iVar5 + 8);
    uVar3 = *(uint *)(iVar5 + 0xc);
    param_3[3] = *(uint *)(DAT_00010278 + iVar4);
    param_3[4] = *(uint *)(iVar5 + 4);
    param_3[5] = uVar1;
    param_3[6] = uVar3;
    uVar2 = 0;
    param_3[8] = *(uint *)(iVar5 + 0x20);
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== __gc2053_power_on @ 0001027c size=258 ===== */

int __gc2053_power_on(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1 + 0x20;
  if (((param_1[0xf] != 0) && ((uint)param_1[0xf] < 0xfffff001)) &&
     (iVar1 = pinctrl_select_state(param_1[0xe]), iVar1 < 0)) {
    _dev_err(iVar2,DAT_00010380);
  }
  iVar1 = clk_set_rate(param_1[1],DAT_00010384);
  if (iVar1 < 0) {
    _dev_warn(iVar2,DAT_00010388);
  }
  iVar1 = clk_get_rate(param_1[1]);
  if (iVar1 != DAT_00010384) {
    _dev_warn(iVar2,DAT_0001038c,extraout_r2,DAT_00010384,param_4);
  }
  iVar3 = param_1[1];
  iVar1 = clk_prepare(iVar3);
  if (iVar1 == 0) {
    iVar1 = clk_enable(iVar3);
    if (iVar1 == 0) goto LAB_000102f4;
    clk_unprepare(iVar3);
  }
  if (iVar1 < 0) {
    _dev_err(iVar2,DAT_00010390);
    return iVar1;
  }
LAB_000102f4:
  iVar1 = regulator_bulk_enable(3,param_1 + 5);
  if (iVar1 < 0) {
    _dev_err(iVar2,DAT_00010394);
    iVar2 = param_1[1];
    clk_disable(iVar2);
    clk_unprepare(iVar2);
  }
  else {
    if ((uint)param_1[4] < 0xfffff001) {
      gpiod_set_value_cansleep(param_1[4],1);
      usleep_range(100,200);
    }
    if ((uint)param_1[2] < 0xfffff001) {
      gpiod_set_value_cansleep(param_1[2],1);
      usleep_range(100,200);
    }
    if ((uint)param_1[3] < 0xfffff001) {
      gpiod_set_value_cansleep(param_1[3],0);
    }
    if ((uint)param_1[2] < 0xfffff001) {
      gpiod_set_value_cansleep(param_1[2],0);
    }
    usleep_range(3000,6000);
    iVar1 = 0;
    usleep_range(0x156,0x2ac);
  }
  return iVar1;
}



/* ===== gc2053_runtime_resume @ 00010398 size=14 ===== */

undefined4 gc2053_runtime_resume(int param_1)

{
  __gc2053_power_on(*(int *)(param_1 + 0x40) + -0x44);
  return 0;
}



/* ===== gc2053_set_fmt @ 000103a6 size=250 ===== */

undefined4 gc2053_set_fmt(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int extraout_r1;
  int iVar2;
  undefined4 extraout_r1_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  mutex_lock(param_1 + 0x164);
  piVar6 = DAT_000104a0;
  iVar4 = -1;
  iVar7 = 0;
  piVar1 = DAT_000104a0;
  iVar2 = extraout_r1;
  for (iVar3 = 0; iVar3 != *(int *)(param_1 + 0x17c); iVar3 = iVar3 + 1) {
    uVar5 = *piVar1 - param_3[2] >> 0x1f;
    iVar2 = piVar1[1] - param_3[3];
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar2 = iVar2 + ((*piVar1 - param_3[2] ^ uVar5) - uVar5);
    if ((iVar4 == -1) || (iVar2 <= iVar4)) {
      iVar4 = iVar2;
      iVar7 = iVar3;
    }
    piVar1 = piVar1 + 0xd;
  }
  param_3[4] = 0x300a;
  param_3[5] = 1;
  piVar1 = piVar6 + iVar7 * 0xd;
  iVar4 = piVar6[iVar7 * 0xd];
  iVar7 = piVar1[1];
  param_3[2] = iVar4;
  param_3[3] = iVar7;
  if (*param_3 == 0) {
    uVar5 = param_3[1];
    if (*(ushort *)(param_1 + 0x20) <= uVar5) {
      uVar5 = 0;
    }
    piVar6 = (int *)(uVar5 * 0x50 + param_2);
    iVar2 = param_3[3];
    iVar4 = param_3[4];
    iVar7 = param_3[5];
    *piVar6 = param_3[2];
    piVar6[1] = iVar2;
    piVar6[2] = iVar4;
    piVar6[3] = iVar7;
    iVar2 = param_3[7];
    iVar4 = param_3[8];
    iVar7 = param_3[9];
    piVar6[4] = param_3[6];
    piVar6[5] = iVar2;
    piVar6[6] = iVar4;
    piVar6[7] = iVar7;
    iVar2 = param_3[0xb];
    iVar4 = param_3[0xc];
    iVar7 = param_3[0xd];
    piVar6[8] = param_3[10];
    piVar6[9] = iVar2;
    piVar6[10] = iVar4;
    piVar6[0xb] = iVar7;
  }
  else {
    iVar4 = piVar1[4] - iVar4;
    *(int **)(param_1 + 0x174) = piVar1;
    __v4l2_ctrl_modify_range(*(undefined4 *)(param_1 + 0x154),iVar2,iVar4,0,iVar4,0,1,0,iVar4,0);
    __v4l2_ctrl_modify_range
              (*(undefined4 *)(param_1 + 0x158),extraout_r1_00,piVar1[5] - iVar7,0,0x3fff - iVar7,0,
               1,0,piVar1[5] - iVar7,0);
  }
  mutex_unlock(param_1 + 0x164);
  return 0;
}



/* ===== gc2053_read_reg @ 000104a4 size=98 ===== */

int gc2053_read_reg(ushort *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 local_31;
  ushort local_30;
  ushort local_2e;
  undefined2 local_2c;
  undefined1 *local_28;
  ushort local_24;
  ushort local_22;
  undefined2 local_20;
  undefined1 *local_1c;
  
  local_2e = *param_1;
  local_30 = param_1[1];
  local_31 = (undefined1)param_2;
  local_28 = &local_31;
  local_22 = local_2e | 1;
  local_2c = 1;
  local_20 = 1;
  local_24 = local_30;
  local_1c = local_28;
  iVar1 = i2c_transfer(*(undefined4 *)(param_1 + 0xc),&local_30,2);
  if (iVar1 < 0) {
    _dev_err(param_1 + 0x10,DAT_00010508,param_2,*param_3);
  }
  else {
    iVar1 = 0;
    *param_3 = local_31;
  }
  return iVar1;
}



/* ===== gc2053_write_reg @ 0001050c size=80 ===== */

int gc2053_write_reg(undefined2 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_26;
  undefined1 local_25;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined1 *local_1c;
  
  local_24 = param_1[1];
  local_26 = (undefined1)param_2;
  local_25 = (undefined1)param_3;
  local_22 = *param_1;
  local_1c = &local_26;
  local_20 = 2;
  iVar1 = i2c_transfer(*(undefined4 *)(param_1 + 0xc),&local_24,1);
  if (iVar1 < 0) {
    _dev_err(param_1 + 0x10,DAT_0001055c,param_2,param_3);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== gc2053_write_array @ 00010560 size=48 ===== */

int gc2053_write_array(int param_1,char *param_2)

{
  int iVar1;
  
  do {
    if (*param_2 == -1) {
      return 0;
    }
    iVar1 = gc2053_write_reg(param_1,*param_2,param_2[1]);
    param_2 = param_2 + 2;
  } while (iVar1 == 0);
  _dev_err(param_1 + 0x20,DAT_00010594,DAT_00010590);
  return iVar1;
}



/* ===== pm_runtime_put @ 00010598 size=6 ===== */

void pm_runtime_put(undefined4 param_1)

{
  __pm_runtime_idle(param_1,5);
  return;
}



/* ===== gc2053_set_ctrl @ 0001059e size=406 ===== */

uint gc2053_set_ctrl(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar5 = *(int *)(param_1 + 0x10);
  piVar6 = (int *)(iVar5 + -0x128);
  iVar9 = *piVar6;
  if (*(uint *)(param_1 + 0x28) == DAT_00010734) {
    iVar1 = *(int *)(iVar5 + 0x68);
    __v4l2_ctrl_modify_range
              (iVar1,param_2,*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c),
               *(int *)(param_1 + 0x84) + -4 + *(int *)(*(int *)(iVar5 + 0x90) + 4),0,
               *(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0x74),
               *(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x4c));
  }
  iVar9 = iVar9 + 0x20;
  iVar1 = pm_runtime_get_if_active(iVar9,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar7 = *(uint *)(param_1 + 0x84);
  if (uVar4 == DAT_00010738) {
    if (uVar7 == 0) {
      bVar3 = *(byte *)(iVar5 + 0xcc) & 0xfd;
LAB_0001071c:
      *(byte *)(iVar5 + 0xcc) = bVar3;
      goto LAB_000106c0;
    }
    bVar3 = *(byte *)(iVar5 + 0xcc) | 2;
LAB_00010712:
    *(byte *)(iVar5 + 0xcc) = bVar3;
  }
  else if (uVar4 < DAT_00010738) {
    if (uVar4 == DAT_00010738 - 4) {
      uVar7 = gc2053_write_reg(*piVar6,3,(uVar7 & 0x3fff) >> 8);
      uVar4 = gc2053_write_reg(*piVar6,4,*(undefined1 *)(param_1 + 0x84));
      uVar7 = uVar7 | uVar4;
      goto LAB_000106c0;
    }
    if (uVar4 == DAT_00010738 - 1) {
      if (uVar7 == 0) {
        bVar3 = *(byte *)(iVar5 + 0xcc) & 0xfe;
        goto LAB_0001071c;
      }
      bVar3 = *(byte *)(iVar5 + 0xcc) | 1;
      goto LAB_00010712;
    }
LAB_00010610:
    _dev_warn(iVar9,DAT_00010740,DAT_0001073c,uVar4,uVar7);
  }
  else {
    if (uVar4 == DAT_00010734) {
      uVar7 = *(int *)(*(int *)(iVar5 + 0x90) + 4) + uVar7;
      uVar4 = gc2053_write_reg(*piVar6,0x41,(uVar7 & 0x3fff) >> 8);
      uVar8 = uVar7 & 0xff;
      uVar7 = gc2053_write_reg(*piVar6,0x42,uVar8);
      uVar7 = uVar4 | uVar7;
      if (*(int *)(iVar5 + 0xb0) == 2) {
        gc2053_write_reg(*piVar6,0x42,uVar8 + 5 & 0xff);
      }
      goto LAB_000106c0;
    }
    if (uVar4 != DAT_00010734 + 2) goto LAB_00010610;
    uVar4 = 0;
    puVar2 = DAT_00010744;
    do {
      if ((*puVar2 <= uVar7) && (uVar7 < puVar2[1])) goto LAB_00010646;
      uVar4 = uVar4 + 1 & 0xff;
      puVar2 = puVar2 + 1;
    } while (uVar4 != 0x1e);
    uVar4 = 0x1d;
LAB_00010646:
    iVar5 = DAT_00010748 + uVar4 * 4;
    gc2053_write_reg(*piVar6,0xb4,*(undefined1 *)(iVar5 + 0xc0));
    gc2053_write_reg(*piVar6,0xb3,*(undefined1 *)(iVar5 + 0xc1));
    gc2053_write_reg(*piVar6,0xb8,*(undefined1 *)(iVar5 + 0xc2));
    gc2053_write_reg(*piVar6,0xb9,*(undefined1 *)(iVar5 + 0xc3));
    uVar7 = __aeabi_uidiv(uVar7 << 6,*(undefined4 *)(iVar5 + 0x48));
    gc2053_write_reg(*piVar6,0xb1,(uVar7 & 0x3fff) >> 6);
    gc2053_write_reg(*piVar6,0xb2,(uVar7 & 0x3f) << 2);
  }
  uVar7 = 0;
LAB_000106c0:
  pm_runtime_put(iVar9);
  return uVar7;
}



/* ===== gc2053_ioctl @ 0001074c size=238 ===== */

undefined4 gc2053_ioctl(int param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar4;
  int *piVar3;
  
  if (param_2 == DAT_0001083c) {
    mutex_lock(param_1 + 0x164);
    piVar2 = param_3;
    piVar4 = (int *)(param_1 + 0x198);
    do {
      piVar3 = piVar2 + 1;
      *piVar4 = *piVar2;
      piVar2 = piVar3;
      piVar4 = piVar4 + 1;
    } while (piVar3 != param_3 + 5);
  }
  else {
    if (DAT_0001083c <= param_2) {
      if (param_2 == DAT_00010840) {
        *(undefined1 *)(param_3 + 1) = 0;
        *(undefined1 *)((int)param_3 + 5) = 0;
        *(undefined1 *)((int)param_3 + 6) = 0;
        *(undefined1 *)((int)param_3 + 7) = 0;
        *param_3 = *(int *)(*(int *)(param_1 + 0x174) + 0x20);
        return 0;
      }
      if (param_2 != DAT_00010840 + 0x13cafffc) {
        if (param_2 == DAT_00010844) {
          *param_3 = *(int *)(param_1 + 0x194);
          return 0;
        }
        return 0xffffffe7;
      }
      memset(param_3,0,0x1453);
      strlcpy(param_3,DAT_00010848,0x20);
      strlcpy(param_3 + 8,*(undefined4 *)(param_1 + 0x18c));
      strlcpy(param_3 + 0x10,*(undefined4 *)(param_1 + 400),0x20);
      return 0;
    }
    if (param_2 == DAT_0001083c - 0xffff7) {
      if (*param_3 == 0) {
        uVar1 = 0x11;
      }
      else {
        uVar1 = 0x91;
      }
      uVar1 = gc2053_write_reg(*(undefined4 *)(param_1 + -0x44),0x3e,uVar1);
      return uVar1;
    }
    if (param_2 == DAT_0001083c - 0xfffeb) {
      *(int *)(param_1 + 0x194) = *param_3;
      return 0;
    }
    if (param_2 != DAT_0001083c - 0xffffe) {
      return 0xffffffe7;
    }
    mutex_lock(param_1 + 0x164);
    *(int *)(param_1 + 0x1ac) = *param_3;
  }
  mutex_unlock(param_1 + 0x164);
  return 0;
}



/* ===== pm_runtime_put_noidle @ 0001084c size=46 ===== */

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



/* ===== gc2053_s_stream @ 0001087a size=354 ===== */

undefined4 gc2053_s_stream(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar8 = param_1 + 0x164;
  iVar6 = *(int *)(param_1 + -0x44);
  iVar3 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  mutex_lock(iVar8);
  if ((bool)*(char *)(param_1 + 0x170) == (param_2 != 0)) goto LAB_000108bc;
  iVar6 = iVar6 + 0x20;
  if (param_2 == 0) {
    gc2053_write_reg(*(undefined4 *)(param_1 + -0x44),0x3e,0x11,*(char *)(param_1 + 0x170),iVar3);
    pm_runtime_put(iVar6);
LAB_00010974:
    *(bool *)(param_1 + 0x170) = param_2 != 0;
  }
  else {
    iVar3 = __pm_runtime_resume(iVar6,4);
    if (iVar3 < 0) {
      pm_runtime_put_noidle(iVar6);
      goto LAB_000108bc;
    }
    iVar7 = *(int *)(param_1 + -0x44);
    iVar3 = gc2053_write_array(iVar7,*(undefined4 *)(*(int *)(param_1 + 0x174) + 0x1c));
    if (iVar3 == 0) {
      mutex_unlock(iVar8);
      iVar3 = v4l2_ctrl_handler_setup(param_1 + 0xe4);
      mutex_lock(iVar8);
      cVar1 = *(char *)(param_1 + 0x1b0);
      uStack_2c = uStack_2c & 0xffffff;
      gc2053_read_reg(*(undefined4 *)(param_1 + -0x44),0x17,(int)&uStack_2c + 3);
      if (cVar1 == '\x02') {
        bVar5 = uStack_2c._3_1_ & 0xfe | 2;
      }
      else if (cVar1 == '\x01') {
        bVar5 = uStack_2c._3_1_ & 0xfd | 1;
      }
      else if (cVar1 == '\x03') {
        bVar5 = uStack_2c._3_1_ | 3;
      }
      else {
        bVar5 = uStack_2c._3_1_ & 0xfc;
      }
      uStack_2c = CONCAT13(bVar5,(undefined3)uStack_2c);
      iVar4 = gc2053_write_reg(*(undefined4 *)(param_1 + -0x44),0x17,bVar5);
      if (iVar3 == 0 && iVar4 == 0) {
        iVar3 = *(int *)(param_1 + 0x194);
        if (iVar3 == 2) {
          iVar3 = gc2053_write_array(iVar7,DAT_000109e0);
          uVar2 = DAT_000109e4;
joined_r0x000109c2:
          if (iVar3 != 0) {
            _dev_err(iVar7 + 0x20,uVar2,iVar3);
          }
        }
        else {
          if (iVar3 == 1) {
            iVar3 = gc2053_write_array(iVar7,DAT_000109e8);
            uVar2 = DAT_000109ec;
            goto joined_r0x000109c2;
          }
          if (iVar3 == 3) {
            iVar3 = gc2053_write_array(*(undefined4 *)(param_1 + -0x44),DAT_000109e8);
            uVar2 = DAT_000109f0;
            goto joined_r0x000109c2;
          }
        }
        iVar3 = gc2053_write_reg(*(undefined4 *)(param_1 + -0x44),0x3e,0x91);
        if (iVar3 == 0) goto LAB_00010974;
      }
    }
    printk(DAT_000109dc,param_1 + 0x74);
    pm_runtime_put(iVar6);
  }
LAB_000108bc:
  mutex_unlock(iVar8);
  return 0;
}



/* ===== gc2053_open @ 000109f4 size=46 ===== */

undefined4 gc2053_open(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x48);
  mutex_lock(param_1 + 0x164);
  *puVar1 = 0x780;
  puVar1[1] = 0x438;
  puVar1[2] = 0x300a;
  puVar1[3] = 1;
  mutex_unlock(param_1 + 0x164);
  return 0;
}



/* ===== gc2053_s_power @ 00010a22 size=90 ===== */

int gc2053_s_power(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x44);
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
      if (iVar1 < 0) {
        pm_runtime_put_noidle(iVar2);
      }
      else {
        *(undefined1 *)(param_1 + 0x171) = 1;
      }
    }
  }
  mutex_unlock(param_1 + 0x164);
  return iVar1;
}



/* ===== gc2053_get_fmt @ 00010a7c size=118 ===== */

undefined4 gc2053_get_fmt(int param_1,int param_2,int *param_3)

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
    param_3[2] = *piVar5;
    param_3[3] = piVar5[1];
    param_3[4] = 0x300a;
    param_3[5] = 1;
    if ((uVar4 < 4) && (piVar5[8] != 0)) {
      iVar1 = piVar5[uVar4 + 9];
    }
    else {
      iVar1 = piVar5[9];
    }
    param_3[0xe] = iVar1;
  }
  mutex_unlock(param_1 + 0x164);
  return 0;
}



/* ===== __gc2053_power_off @ 00010af2 size=90 ===== */

void __gc2053_power_off(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 uVar1;
  
  if (*(uint *)(param_1 + 0xc) < 0xfffff001) {
    gpiod_set_value_cansleep(*(uint *)(param_1 + 0xc),1);
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  clk_disable(uVar1);
  clk_unprepare(uVar1);
  uVar1 = extraout_r2;
  if (*(uint *)(param_1 + 8) < 0xfffff001) {
    gpiod_set_value_cansleep(*(uint *)(param_1 + 8),1);
    uVar1 = extraout_r2_00;
  }
  if ((*(uint *)(param_1 + 0x40) != 0) && (*(uint *)(param_1 + 0x40) < 0xfffff001)) {
    pinctrl_select_state(*(undefined4 *)(param_1 + 0x38));
    uVar1 = extraout_r2_01;
  }
  if (*(uint *)(param_1 + 0x10) < 0xfffff001) {
    gpiod_set_value_cansleep(*(uint *)(param_1 + 0x10),0);
    uVar1 = extraout_r2_02;
  }
  regulator_bulk_disable(3,param_1 + 0x14,uVar1,param_4);
  return;
}



/* ===== gc2053_runtime_suspend @ 00010b4c size=14 ===== */

undefined4 gc2053_runtime_suspend(int param_1)

{
  __gc2053_power_off(*(int *)(param_1 + 0x40) + -0x44);
  return 0;
}



/* ===== gc2053_remove @ 00010b5a size=62 ===== */

undefined4 gc2053_remove(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  v4l2_async_unregister_subdev(iVar1);
  v4l2_ctrl_handler_free(iVar1 + 0xe4);
  __pm_runtime_disable(param_1 + 0x20,1);
  if (*(int *)(param_1 + 0x108) != 2) {
    __gc2053_power_off(iVar1 + -0x44);
  }
  __pm_runtime_set_status(param_1 + 0x20,2);
  return 0;
}



/* ===== gc2053_probe @ 00010b98 size=1248 ===== */

uint gc2053_probe(int param_1)

{
  char *__s1;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 local_2f;
  ushort local_2e;
  char *local_2c [2];
  
  iVar8 = param_1 + 0x20;
  uVar11 = *(undefined4 *)(param_1 + 0x184);
  local_2c[0] = (char *)0x0;
  _dev_info(iVar8,DAT_00010d3c,0,1,2);
  piVar1 = (int *)devm_kmalloc(iVar8,0x1f8,0xdc0);
  if (piVar1 == (int *)0x0) {
    return 0xfffffff4;
  }
  *piVar1 = param_1;
  uVar2 = of_property_read_variable_u32_array(uVar11,DAT_00010d40,piVar1 + 0x72,1,0);
  uVar3 = of_property_read_string(uVar11,DAT_00010d44,piVar1 + 0x73);
  uVar4 = of_property_read_string(uVar11,DAT_00010d48,piVar1 + 0x74);
  uVar5 = of_property_read_string(uVar11,DAT_00010d4c,piVar1 + 0x75);
  uVar5 = uVar3 | uVar4 | uVar5;
  if ((int)uVar2 < 1) {
    uVar5 = uVar5 | uVar2;
  }
  iVar9 = iVar8;
  uVar14 = DAT_00010d50;
  if (uVar5 != 0) goto LAB_00010c24;
  iVar6 = of_property_read_string(uVar11,DAT_00010d54,local_2c);
  __s1 = local_2c[0];
  if (iVar6 == 0) {
    iVar6 = strcmp(local_2c[0],DAT_00010d64);
    if (iVar6 == 0) {
      iVar6 = 1;
LAB_00010c6e:
      piVar1[0x76] = iVar6;
    }
    else {
      iVar6 = strcmp(__s1,DAT_00010d68);
      if (iVar6 == 0) {
        piVar1[0x76] = 2;
      }
      else {
        iVar6 = strcmp(__s1,DAT_00010d6c);
        if (iVar6 == 0) {
          iVar6 = 3;
          goto LAB_00010c6e;
        }
      }
    }
  }
  else {
    piVar1[0x76] = 0;
    _dev_err(iVar8,DAT_00010d58);
  }
  uVar2 = devm_clk_get(iVar8,DAT_00010d5c);
  piVar1[1] = uVar2;
  uVar14 = DAT_00010d60;
  if (0xfffff000 < uVar2) {
LAB_00010c24:
    _dev_err(iVar9,uVar14);
    return 0xffffffea;
  }
  uVar2 = devm_gpiod_get(iVar8,DAT_00010d70,3);
  piVar1[2] = uVar2;
  if (0xfffff000 < uVar2) {
    _dev_warn(iVar8,DAT_00010d74);
  }
  uVar2 = devm_gpiod_get(iVar8,DAT_00010d78,3);
  piVar1[3] = uVar2;
  if (0xfffff000 < uVar2) {
    _dev_info(iVar8,DAT_00010d7c);
  }
  uVar2 = devm_gpiod_get(iVar8,DAT_00010d80,3);
  piVar1[4] = uVar2;
  if (0xfffff000 < uVar2) {
    _dev_warn(iVar8,DAT_00010d84);
  }
  piVar1[5] = DAT_00010d88;
  piVar1[8] = DAT_00010d8c;
  piVar1[0xb] = DAT_00010d90;
  uVar2 = devm_regulator_bulk_get(*piVar1 + 0x20,3,piVar1 + 5);
  if (uVar2 != 0) {
    _dev_err(iVar8,DAT_00010d94);
    return uVar2;
  }
  iVar9 = *piVar1 + 0x20;
  iVar6 = of_graph_get_next_endpoint(*(undefined4 *)(*piVar1 + 0x184),0);
  uVar14 = DAT_00010d98;
  if (iVar6 == 0) goto LAB_00010c24;
  iVar6 = fwnode_property_read_u32_array(iVar6 + 0xc,DAT_00010d9c,0,0);
  if (iVar6 < 1) {
    _dev_warn(iVar9,DAT_00010da0);
    return 0xffffffea;
  }
  piVar1[0x6f] = iVar6;
  if (iVar6 == 2) {
    piVar1[0x6e] = DAT_0001103c;
    iVar6 = DAT_00011040;
    piVar1[0x70] = 1;
    piVar1[0x71] = iVar6;
    _dev_info(iVar9,DAT_00011044);
  }
  else {
    _dev_info(iVar9,DAT_00011090);
  }
  uVar2 = devm_pinctrl_get(iVar8);
  piVar1[0xe] = uVar2;
  uVar11 = DAT_00011094;
  if (uVar2 < 0xfffff001) {
    uVar2 = pinctrl_lookup_state(uVar2,DAT_00011048);
    piVar1[0xf] = uVar2;
    if (0xfffff000 < uVar2) {
      _dev_err(iVar8,DAT_0001104c);
    }
    uVar2 = pinctrl_lookup_state(piVar1[0xe],DAT_00011050);
    piVar1[0x10] = uVar2;
    uVar11 = DAT_00011054;
    if (uVar2 < 0xfffff001) goto LAB_00010e02;
  }
  _dev_err(iVar8,uVar11);
LAB_00010e02:
  piVar13 = piVar1 + 0x11;
  piVar10 = piVar1 + 0x4a;
  __mutex_init(piVar1 + 0x6a,DAT_0001105c,DAT_00011058);
  v4l2_i2c_subdev_init(piVar13,param_1,DAT_00011060);
  piVar12 = (int *)piVar1[0x6e];
  uVar2 = v4l2_ctrl_handler_init_class(piVar10,8,0);
  uVar11 = DAT_00011064;
  if (uVar2 != 0) {
    return uVar2;
  }
  piVar1[0x4d] = (int)(piVar1 + 0x6a);
  iVar9 = v4l2_ctrl_new_int_menu(piVar10,0,DAT_00011068,0,0,uVar11);
  if (iVar9 != 0) {
    *(uint *)(iVar9 + 0x7c) = *(uint *)(iVar9 + 0x7c) | 4;
  }
  v4l2_ctrl_new_std(piVar10,0,DAT_0001106c,0,0,0,piVar1[0x71],0,1,0,piVar1[0x71],0);
  iVar9 = piVar12[4] - *piVar12;
  iVar9 = v4l2_ctrl_new_std(piVar10,0,DAT_00011070,0,iVar9,0,iVar9,0,1,0,iVar9,0);
  piVar1[0x66] = iVar9;
  if (iVar9 != 0) {
    *(uint *)(iVar9 + 0x7c) = *(uint *)(iVar9 + 0x7c) | 4;
  }
  iVar9 = piVar12[5] - piVar12[1];
  iVar6 = 0x3fff - piVar12[1];
  iVar9 = v4l2_ctrl_new_std(piVar10,DAT_00011078,DAT_00011074,iVar6,iVar9,0,iVar6,0,1,0,iVar9,0);
  piVar1[0x67] = iVar9;
  iVar9 = v4l2_ctrl_new_std(piVar10,DAT_00011078,DAT_0001107c,piVar12[5] + -4,1,0,piVar12[5] + -4,0,
                            1,0,piVar12[6],0);
  piVar1[100] = iVar9;
  iVar9 = v4l2_ctrl_new_std(piVar10,DAT_00011078,DAT_00011080,0,0x40,0,0x2000,0,1,0,0x40,0);
  piVar1[0x65] = iVar9;
  iVar9 = v4l2_ctrl_new_std(piVar10,DAT_00011078,DAT_00011084);
  piVar1[0x68] = iVar9;
  uVar17 = 1;
  uVar18 = 0;
  uVar15 = 1;
  uVar16 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar11 = 0;
  uVar14 = 0;
  iVar9 = v4l2_ctrl_new_std(piVar10,DAT_00011078,DAT_00011088);
  *(undefined1 *)(piVar1 + 0x7d) = 0;
  uVar2 = piVar1[0x57];
  piVar1[0x69] = iVar9;
  if (uVar2 == 0) {
    piVar1[0x2d] = (int)piVar10;
    uVar2 = __gc2053_power_on(piVar1);
    if (uVar2 == 0) {
      iVar9 = *piVar1;
      local_2f = 0;
      local_2e = local_2e & 0xff00;
      uVar2 = gc2053_read_reg(param_1,0xf0,&local_2f,iVar9,uVar11,uVar14,uVar15,uVar16,uVar17,uVar18
                              ,uVar19,uVar20);
      uVar3 = gc2053_read_reg(param_1,0xf1,&local_2e);
      uVar2 = uVar2 | uVar3;
      if (uVar2 == 0) {
        if (CONCAT11(local_2f,(undefined1)local_2e) == 0x2053) {
          _dev_info(iVar9 + 0x20,DAT_00011148);
          piVar1[0x2c] = DAT_0001114c;
          piVar1[0x29] = piVar1[0x29] | 4;
          piVar1[0x49] = 2;
          piVar1[0x17] = DAT_00011150;
          uVar2 = media_entity_pads_init(piVar13,1,piVar1 + 0x42);
          if (-1 < (int)uVar2) {
            local_2e = 0;
            iVar9 = strcmp((char *)piVar1[0x73],DAT_00011154);
            if (iVar9 == 0) {
              uVar7 = 0x62;
            }
            else {
              uVar7 = 0x66;
            }
            local_2e = CONCAT11(local_2e._1_1_,uVar7);
            iVar9 = ((int *)piVar1[0x3a])[0xb];
            if (iVar9 == 0) {
              iVar9 = *(int *)piVar1[0x3a];
            }
            snprintf((char *)(piVar1 + 0x2e),0x20,DAT_0001115c,piVar1[0x72],&local_2e,DAT_00011158,
                     iVar9);
            uVar2 = v4l2_async_register_subdev_sensor_common(piVar13);
            if (uVar2 == 0) {
              __pm_runtime_set_status(iVar8,0);
              pm_runtime_enable(iVar8);
              __pm_runtime_idle(iVar8,0);
              return 0;
            }
            _dev_err(iVar8,DAT_00011160);
          }
        }
        else {
          uVar2 = 0xffffffed;
          _dev_err(iVar8,DAT_0001109c,CONCAT11(local_2f,(undefined1)local_2e),0);
        }
      }
      else {
        _dev_err(iVar8,DAT_00011098,uVar2);
      }
      __gc2053_power_off(piVar1);
    }
  }
  else {
    _dev_err(*piVar1 + 0x20,DAT_0001108c,uVar2);
  }
  v4l2_ctrl_handler_free(piVar10);
  return uVar2;
}



/* ===== init_module @ 00011164 size=8 ===== */

void init_module(void)

{
  i2c_register_driver(DAT_00011170,DAT_0001116c);
  return;
}



/* ===== cleanup_module @ 00011174 size=6 ===== */

void cleanup_module(void)

{
  i2c_del_driver(DAT_0001117c);
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



/* ===== <EXTERNAL>::clk_set_rate @ 00012024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_set_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_get @ 00012028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_set_status @ 0001202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_set_status(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_prepare @ 00012030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_setup @ 00012034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_register_subdev_sensor_common @ 00012038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_register_subdev_sensor_common(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 0001203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep_range @ 00012040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usleep_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_bulk_disable @ 00012044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_bulk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwnode_property_read_u32_array @ 00012048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fwnode_property_read_u32_array(void)

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



/* ===== <EXTERNAL>::strlcpy @ 00012060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strlcpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_string @ 00012064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_pads_init @ 00012068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_pads_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_graph_get_next_endpoint @ 0001206c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_graph_get_next_endpoint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 00012070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 00012074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00012078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_warn @ 0001207c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00012080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_bulk_enable @ 00012084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_bulk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_regulator_bulk_get @ 00012088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_regulator_bulk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0001208c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_lookup_state @ 00012090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_lookup_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_get_rate @ 00012094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_get_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 00012098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 0001209c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_gpiod_get @ 000120a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_gpiod_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_pinctrl_get @ 000120a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_pinctrl_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_std @ 000120a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_std(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_modify_range @ 000120ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_modify_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_free @ 000120b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_transfer @ 000120b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_transfer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_disable @ 000120b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_select_state @ 000120bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_select_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_del_driver @ 000120c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_del_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 000120c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_enable @ 000120cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_enable(void)

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


