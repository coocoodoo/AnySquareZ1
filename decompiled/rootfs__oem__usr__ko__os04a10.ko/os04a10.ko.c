// os04a10.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== os04a10_enum_mbus_code @ 000101c0 size=22 ===== */

undefined4 os04a10_enum_mbus_code(int param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 4) == 0) {
    *(undefined4 *)(param_3 + 8) = **(undefined4 **)(param_1 + 0x188);
    return 0;
  }
  return 0xffffffea;
}



/* ===== os04a10_enum_frame_sizes @ 000101d6 size=74 ===== */

undefined4 os04a10_enum_frame_sizes(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  
  if (*param_3 < *(uint *)(param_1 + 0x18c)) {
    iVar1 = *param_3 * 0x44;
    if (param_3[2] == *(uint *)(*(int *)(param_1 + 0x184) + iVar1)) {
      param_3[3] = *(uint *)(*(int *)(param_1 + 0x184) + iVar1 + 4);
      param_3[4] = *(uint *)(*(int *)(param_1 + 0x184) + iVar1 + 4);
      param_3[6] = *(uint *)(*(int *)(param_1 + 0x184) + iVar1 + 8);
      param_3[5] = *(uint *)(iVar1 + *(int *)(param_1 + 0x184) + 8);
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== os04a10_g_frame_interval @ 00010220 size=20 ===== */

undefined4 os04a10_g_frame_interval(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x188) + 0x10);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(param_1 + 0x188) + 0xc);
  *(undefined4 *)(param_2 + 8) = uVar1;
  return 0;
}



/* ===== os04a10_g_mbus_config @ 00010234 size=54 ===== */

undefined4 os04a10_g_mbus_config(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x188) + 0x28);
  if (iVar1 == 0) {
    uVar2 = 1 << (*(byte *)(param_1 + 0x20d) - 1 & 0xff) | 0x110;
  }
  else if (iVar1 == 5) {
    uVar2 = 1 << (*(byte *)(param_1 + 0x20d) - 1 & 0xff) | 0x130;
  }
  else {
    uVar2 = 0;
  }
  *param_3 = 5;
  param_3[1] = uVar2;
  return 0;
}



/* ===== os04a10_enum_frame_interval @ 0001026a size=84 ===== */

undefined4 os04a10_enum_frame_interval(int param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_3 < *(uint *)(param_1 + 0x18c)) {
    iVar4 = *param_3 * 0x44;
    param_3[2] = *(uint *)(*(int *)(param_1 + 0x184) + iVar4);
    param_3[3] = *(uint *)(*(int *)(param_1 + 0x184) + iVar4 + 4);
    param_3[4] = *(uint *)(*(int *)(param_1 + 0x184) + iVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x184) + iVar4;
    uVar3 = *(uint *)(iVar2 + 0x10);
    param_3[5] = *(uint *)(iVar2 + 0xc);
    param_3[6] = uVar3;
    uVar1 = 0;
    param_3[8] = *(uint *)(iVar4 + *(int *)(param_1 + 0x184) + 0x28);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== __os04a10_power_on @ 000102be size=278 ===== */

int __os04a10_power_on(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  int iVar4;
  int iVar5;
  
  if (*(char *)((int)param_1 + 0x21b) != '\0') {
    return 0;
  }
  iVar4 = *param_1 + 0x20;
  if (((param_1[0xe] != 0) && ((uint)param_1[0xe] < 0xfffff001)) &&
     (iVar1 = pinctrl_select_state(param_1[0xd]), iVar1 < 0)) {
    _dev_err(iVar4,DAT_000103d4);
  }
  iVar1 = clk_set_rate(param_1[1],DAT_000103d8);
  if (iVar1 < 0) {
    _dev_warn(iVar4,DAT_000103dc);
  }
  iVar1 = clk_get_rate(param_1[1]);
  if (iVar1 != DAT_000103d8) {
    _dev_warn(iVar4,DAT_000103e0,extraout_r2,DAT_000103d8,param_4);
  }
  iVar5 = param_1[1];
  iVar1 = clk_prepare(iVar5);
  if (iVar1 == 0) {
    iVar1 = clk_enable(iVar5);
    if (iVar1 == 0) goto LAB_00010340;
    clk_unprepare(iVar5);
  }
  if (iVar1 < 0) {
    _dev_err(iVar4,DAT_000103e4);
    return iVar1;
  }
LAB_00010340:
  if ((uint)param_1[2] < 0xfffff001) {
    gpiod_direction_output(param_1[2],1);
  }
  iVar1 = regulator_bulk_enable(3,param_1 + 4);
  if (-1 < iVar1) {
    usleep_range(25000,30000);
    if ((uint)param_1[2] < 0xfffff001) {
      gpiod_direction_output(param_1[2],0);
    }
    usleep_range(500,1000);
    if ((uint)param_1[3] < 0xfffff001) {
      gpiod_direction_output(param_1[3],1);
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
    return 0;
  }
  _dev_err(iVar4,DAT_000103e8);
  iVar4 = param_1[1];
  clk_disable(iVar4);
  clk_unprepare(iVar4);
  return iVar1;
}



/* ===== os04a10_runtime_resume @ 000103ec size=6 ===== */

void os04a10_runtime_resume(int param_1)

{
  __os04a10_power_on(*(int *)(param_1 + 0x40) + -0x40);
  return;
}



/* ===== os04a10_set_fmt @ 000103f2 size=332 ===== */

undefined4 os04a10_set_fmt(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  int extraout_r1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1_00;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  bVar1 = *(byte *)(param_1 + 0x20d);
  mutex_lock(param_1 + 0x174);
  iVar6 = *(int *)(param_1 + 0x184);
  iVar9 = -1;
  iVar10 = 0;
  iVar3 = extraout_r1;
  for (iVar5 = 0; iVar5 != *(int *)(param_1 + 0x18c); iVar5 = iVar5 + 1) {
    iVar4 = iVar6 + iVar5 * 0x44;
    iVar3 = *(int *)(iVar4 + 8);
    iVar4 = *(int *)(iVar4 + 4) - param_3[2];
    iVar8 = iVar3 - param_3[3];
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (((iVar9 == -1) || (iVar4 + iVar8 < iVar9)) &&
       (iVar3 = *(int *)(iVar6 + iVar5 * 0x44), iVar3 == param_3[4])) {
      iVar9 = iVar4 + iVar8;
      iVar10 = iVar5;
    }
  }
  iVar9 = iVar6 + iVar10 * 0x44;
  param_3[4] = *(int *)(iVar6 + iVar10 * 0x44);
  param_3[2] = *(int *)(iVar9 + 4);
  param_3[3] = *(int *)(iVar9 + 8);
  param_3[5] = 1;
  if (*param_3 == 0) {
    uVar2 = param_3[1];
    if (*(ushort *)(param_1 + 0x20) <= uVar2) {
      uVar2 = 0;
    }
    piVar7 = (int *)(uVar2 * 0x50 + param_2);
    iVar3 = param_3[3];
    iVar9 = param_3[4];
    iVar10 = param_3[5];
    *piVar7 = param_3[2];
    piVar7[1] = iVar3;
    piVar7[2] = iVar9;
    piVar7[3] = iVar10;
    iVar3 = param_3[7];
    iVar9 = param_3[8];
    iVar10 = param_3[9];
    piVar7[4] = param_3[6];
    piVar7[5] = iVar3;
    piVar7[6] = iVar9;
    piVar7[7] = iVar10;
    iVar3 = param_3[0xb];
    iVar9 = param_3[0xc];
    iVar10 = param_3[0xd];
    piVar7[8] = param_3[10];
    piVar7[9] = iVar3;
    piVar7[10] = iVar9;
    piVar7[0xb] = iVar10;
  }
  else {
    *(int *)(param_1 + 0x188) = iVar9;
    iVar10 = *(int *)(iVar9 + 0x14) - *(int *)(iVar9 + 4);
    __v4l2_ctrl_modify_range(*(undefined4 *)(param_1 + 0x158),iVar3,iVar10,0,iVar10,0,1,0,iVar10,0);
    iVar3 = *(int *)(iVar9 + 0x18) - *(int *)(iVar9 + 8);
    __v4l2_ctrl_modify_range
              (*(undefined4 *)(param_1 + 0x15c),extraout_r1_00,iVar3,0,0xffff - *(int *)(iVar9 + 8),
               0,1,0,iVar3,0);
    iVar3 = *(int *)(iVar9 + 0x2c);
    uVar11 = __aeabi_uidiv(*(undefined4 *)(DAT_00010540 + iVar3 * 8),*(undefined4 *)(iVar9 + 0x30));
    __v4l2_ctrl_s_ctrl_int64
              (*(undefined4 *)(param_1 + 0x164),(int)((ulonglong)uVar11 >> 0x20),
               (int)uVar11 * (uint)bVar1 * 2,0);
    __v4l2_ctrl_s_ctrl(*(undefined4 *)(param_1 + 0x168),iVar3);
  }
  mutex_unlock(param_1 + 0x174);
  return 0;
}



/* ===== os04a10_read_reg @ 00010544 size=92 ===== */

undefined4 os04a10_read_reg(int param_1,uint param_2,int param_3,uint *param_4)

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



/* ===== os04a10_write_reg @ 000105a0 size=66 ===== */

undefined4 os04a10_write_reg(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint local_1c;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 auStack_14 [8];
  
  local_15 = (char)param_2;
  local_1c = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
             param_4 >> 0x18;
  iVar4 = 4 - param_3;
  local_16 = (char)((uint)param_2 >> 8);
  puVar3 = auStack_14;
  do {
    puVar1 = (undefined1 *)((int)&local_1c + iVar4);
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar1;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 4);
  iVar4 = i2c_transfer_buffer_flags(param_1,&local_16,param_3 + 2,0);
  if (param_3 + 2 == iVar4) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffb;
  }
  return uVar2;
}



/* ===== os04a10_write_array @ 000105e2 size=38 ===== */

int os04a10_write_array(undefined4 param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  
  do {
    sVar2 = *param_2;
    if (sVar2 == -1) {
      return 0;
    }
    psVar1 = param_2 + 1;
    param_2 = param_2 + 2;
    iVar3 = os04a10_write_reg(param_1,sVar2,1,(char)*psVar1);
  } while (iVar3 == 0);
  return iVar3;
}



/* ===== os04a10_set_conversion_gain @ 00010608 size=144 ===== */

uint os04a10_set_conversion_gain(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_24;
  undefined4 uStack_20;
  
  uVar5 = *param_1;
  iVar6 = *param_2;
  bVar1 = false;
  local_24 = 0;
  uStack_20 = param_3;
  uVar2 = os04a10_read_reg(uVar5,0x376c,1,&local_24,param_1);
  if (*(char *)(param_1 + 0x86) == '\0') {
    bVar1 = false;
    if (iVar6 != 1) goto LAB_00010640;
    local_24 = local_24 & 0xef;
  }
  else {
    if (iVar6 != 0) goto LAB_00010640;
    local_24 = local_24 | 0x10;
  }
  bVar1 = true;
  *(char *)(param_1 + 0x86) = (char)iVar6;
LAB_00010640:
  uVar3 = os04a10_write_reg(uVar5,0x3208,1,0);
  uVar2 = uVar2 | uVar3;
  if (bVar1) {
    uVar3 = os04a10_write_reg(uVar5,0x376c,1,local_24);
    uVar2 = uVar2 | uVar3;
  }
  uVar3 = os04a10_write_reg(uVar5,0x3208,1,0x10);
  uVar4 = os04a10_write_reg(uVar5,0x3208,1,0xa0);
  return uVar4 | uVar2 | uVar3;
}



/* ===== os04a10_ioctl @ 00010698 size=1154 ===== */

uint os04a10_ioctl(int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_r1;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  undefined8 uVar21;
  uint local_48;
  uint local_44;
  uint local_3c;
  uint local_38;
  uint local_2c [2];
  
  if (param_2 == DAT_000109d0) {
    bVar1 = *(byte *)(param_1 + 0x20d);
    iVar16 = *(int *)(*(int *)(param_1 + 0x188) + 4);
    iVar11 = *(int *)(*(int *)(param_1 + 0x188) + 8);
    iVar13 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0x18c) == iVar13) {
        _dev_err(*(int *)(param_1 + -0x40) + 0x20,DAT_00010b48,*param_3,iVar16,iVar11);
        return 0xffffffea;
      }
      iVar19 = iVar13 * 0x44 + *(int *)(param_1 + 0x184);
      if (((*(int *)(iVar19 + 4) == iVar16) && (*(int *)(iVar19 + 8) == iVar11)) &&
         (*(uint *)(iVar19 + 0x28) == *param_3)) break;
      iVar13 = iVar13 + 1;
    }
    *(int *)(param_1 + 0x188) = iVar19;
    iVar16 = *(int *)(iVar19 + 0x18) - *(int *)(iVar19 + 8);
    iVar13 = *(int *)(iVar19 + 0x14) - *(int *)(iVar19 + 4);
    __v4l2_ctrl_modify_range(*(undefined4 *)(param_1 + 0x158),iVar11,iVar13,0,iVar13,0,1,0,iVar13,0)
    ;
    __v4l2_ctrl_modify_range
              (*(undefined4 *)(param_1 + 0x15c),extraout_r1,iVar16,0,
               0xffff - *(int *)(*(int *)(param_1 + 0x188) + 8),0,1,0,iVar16,0);
    iVar11 = *(int *)(iVar19 + 0x2c);
    uVar21 = __aeabi_uidiv(*(undefined4 *)(DAT_00010b4c + iVar11 * 8),*(undefined4 *)(iVar19 + 0x30)
                          );
    __v4l2_ctrl_s_ctrl_int64
              (*(undefined4 *)(param_1 + 0x164),(int)((ulonglong)uVar21 >> 0x20),
               (uint)bVar1 * (int)uVar21 * 2,0);
    __v4l2_ctrl_s_ctrl(*(undefined4 *)(param_1 + 0x168),iVar11);
    _dev_info(*(int *)(param_1 + -0x40) + 0x20,DAT_00010b50,
              *(undefined4 *)(*(int *)(param_1 + 0x188) + 0x28));
    return 0;
  }
  if (DAT_000109d0 <= param_2) {
    if (param_2 == DAT_000109e4) {
      *(undefined1 *)(param_3 + 1) = 0;
      *(undefined1 *)((int)param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 6) = 0;
      *(undefined1 *)((int)param_3 + 7) = 0;
      *param_3 = *(uint *)(*(int *)(param_1 + 0x188) + 0x28);
      return 0;
    }
    if (param_2 == DAT_000109e4 + 0x13cafffc) {
      memset(param_3,0,0x1453);
      strscpy(param_3,DAT_00010b54,0x20);
      strscpy(param_3 + 8,*(undefined4 *)(param_1 + 0x198));
      strscpy(param_3 + 0x10,*(undefined4 *)(param_1 + 0x19c),0x20);
    }
    else {
      if (param_2 != DAT_000109e8) {
        return DAT_000109e0;
      }
      if (*(uint *)(param_1 + 0x1e0) == 0) {
        return 0xffffffea;
      }
      uVar10 = (*(uint *)(param_1 + 0x1e0) & 0xffff) >> 8;
      *param_3 = uVar10;
      bVar1 = *(byte *)(param_1 + 0x1e0);
      param_3[2] = 0x100;
      param_3[1] = (uint)bVar1;
      _dev_info(*(int *)(param_1 + -0x40) + 0x20,DAT_000109ec,uVar10,(uint)bVar1,0x100);
    }
    return 0;
  }
  if (param_2 == DAT_000109d4) {
    uVar10 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x100,1,*param_3 != 0);
    return uVar10;
  }
  if (param_2 != DAT_000109d8) {
    if (param_2 == DAT_000109dc) {
      uVar10 = os04a10_set_conversion_gain(param_1 + -0x40,param_3);
      return uVar10;
    }
    return DAT_000109e0;
  }
  local_2c[0] = 0;
  if ((*(char *)(param_1 + 0x1a0) == '\0') && (*(char *)(param_1 + 0x180) == '\0')) {
    uVar10 = param_3[1];
    uVar12 = param_3[2];
    uVar14 = param_3[3];
    *(uint *)(param_1 + 0x1a4) = *param_3;
    *(uint *)(param_1 + 0x1a8) = uVar10;
    *(uint *)(param_1 + 0x1ac) = uVar12;
    *(uint *)(param_1 + 0x1b0) = uVar14;
    uVar10 = param_3[5];
    uVar12 = param_3[6];
    uVar14 = param_3[7];
    *(uint *)(param_1 + 0x1b4) = param_3[4];
    *(uint *)(param_1 + 0x1b8) = uVar10;
    *(uint *)(param_1 + 0x1bc) = uVar12;
    *(uint *)(param_1 + 0x1c0) = uVar14;
    uVar10 = param_3[9];
    uVar12 = param_3[10];
    uVar14 = param_3[0xb];
    *(uint *)(param_1 + 0x1c4) = param_3[8];
    *(uint *)(param_1 + 0x1c8) = uVar10;
    *(uint *)(param_1 + 0x1cc) = uVar12;
    *(uint *)(param_1 + 0x1d0) = uVar14;
    *(uint *)(param_1 + 0x1d4) = param_3[0xc];
    *(undefined1 *)(param_1 + 0x1a0) = 1;
    if (0x8f < *(uint *)(param_1 + 0x1b4)) {
      _dev_err(*(int *)(param_1 + -0x40) + 0x20,DAT_000109f0);
      return 0xffffffea;
    }
    return 0;
  }
  uVar12 = param_3[5];
  uVar15 = param_3[4];
  cVar2 = *(char *)((int)param_3 + 0x32);
  uVar10 = param_3[3];
  uVar14 = param_3[1];
  local_48 = param_3[2];
  local_44 = *param_3;
  cVar17 = *(char *)((int)param_3 + 0x31);
  cVar18 = (char)param_3[0xc];
  if (*(int *)(*(int *)(param_1 + 0x188) + 0x28) == 5) {
    uVar10 = uVar12;
    uVar14 = param_3[3];
    local_48 = uVar15;
    local_44 = param_3[2];
    cVar17 = cVar2;
    cVar18 = *(char *)((int)param_3 + 0x31);
  }
  uVar4 = os04a10_read_reg(*(undefined4 *)(param_1 + -0x40),0x376c,1,local_2c);
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    if (cVar18 == '\x01') {
      *(undefined1 *)(param_1 + 0x1d8) = 1;
      local_2c[0] = local_2c[0] & 0xef;
      cVar18 = '\x01';
    }
    else {
      cVar18 = '\0';
    }
  }
  else if (cVar18 == '\0') {
    *(undefined1 *)(param_1 + 0x1d8) = 0;
    cVar18 = '\x01';
    local_2c[0] = local_2c[0] | 0x10;
  }
  else {
    cVar18 = '\0';
  }
  if (*(char *)(param_1 + 0x1d9) == '\0') {
    if (cVar17 == '\x01') {
      local_2c[0] = local_2c[0] & 0xdf;
      goto LAB_000107ec;
    }
  }
  else if (cVar17 == '\0') {
    local_2c[0] = local_2c[0] | 0x20;
LAB_000107ec:
    cVar18 = cVar18 + '\x01';
    *(char *)(param_1 + 0x1d9) = cVar17;
  }
  if (uVar14 < 0xf9) {
    local_3c = 0x400;
  }
  else {
    local_3c = (uint)((ulonglong)((uVar14 & 0x3fffff) << 7) * (ulonglong)DAT_000109f4 >> 0x22);
    uVar14 = 0xf8;
  }
  if (uVar10 < 0xf9) {
    local_38 = 0x400;
  }
  else {
    uVar20 = uVar10 & 0x3fffff;
    uVar10 = 0xf8;
    local_38 = (uint)((ulonglong)(uVar20 << 7) * (ulonglong)DAT_000109f4 >> 0x22);
  }
  if ((*(int *)(*(int *)(param_1 + 0x188) + 0x28) == 6) && (0xf8 < uVar12)) {
    uVar20 = (uint)((ulonglong)((uVar12 & 0x3fffff) << 7) * (ulonglong)DAT_000109f4 >> 0x22);
    uVar12 = 0xf8;
  }
  else {
    uVar20 = 0x400;
  }
  uVar5 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x3208,1,0);
  uVar3 = DAT_000109f8;
  uVar14 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x3508,2,uVar14 << 4);
  uVar6 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x350a,3,uVar3 & local_3c << 6);
  uVar7 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x3501,2,local_44);
  uVar10 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x3548,2,uVar10 << 4);
  uVar8 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x354a,3,uVar3 & local_38 << 6);
  uVar9 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x3541,2,local_48);
  uVar9 = uVar5 | uVar14 | uVar4 | uVar6 | uVar7 | uVar10 | uVar8 | uVar9;
  if (*(int *)(*(int *)(param_1 + 0x188) + 0x28) == 6) {
    uVar10 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x3588,2,(uVar12 & 0x1ff) << 4);
    uVar12 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x3581,2,uVar15);
    uVar14 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x358a,3,uVar3 & uVar20 << 6);
    uVar9 = uVar9 | uVar12 | uVar10 | uVar14;
    if (*(char *)(param_1 + 0x1da) == '\0') {
      if (cVar2 != '\x01') goto LAB_000109a4;
      local_2c[0] = local_2c[0] & 0xbf;
    }
    else {
      if (cVar2 != '\0') goto LAB_000109a4;
      local_2c[0] = local_2c[0] | 0x40;
    }
    *(char *)(param_1 + 0x1da) = cVar2;
  }
  else {
LAB_000109a4:
    if (cVar18 == '\0') goto LAB_000109a8;
  }
  uVar10 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x376c,1,local_2c[0]);
  uVar9 = uVar9 | uVar10;
LAB_000109a8:
  uVar10 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x3208,1,0x10);
  uVar12 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x3208,1,0xa0);
  return uVar12 | uVar9 | uVar10;
}



/* ===== pm_runtime_put @ 00010b58 size=6 ===== */

void pm_runtime_put(undefined4 param_1)

{
  __pm_runtime_idle(param_1,5);
  return;
}



/* ===== os04a10_set_ctrl @ 00010b5e size=404 ===== */

uint os04a10_set_ctrl(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint local_1c;
  
  iVar6 = *(int *)(param_1 + 0x10);
  piVar7 = (int *)(iVar6 + -0x124);
  iVar8 = *piVar7;
  local_1c = 0;
  if (*(uint *)(param_1 + 0x28) == DAT_00010cf4) {
    iVar1 = *(int *)(iVar6 + 0x68);
    __v4l2_ctrl_modify_range
              (iVar1,0,*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c),
               *(int *)(param_1 + 0x84) + -4 + *(int *)(*(int *)(iVar6 + 0xa4) + 8),0,
               *(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0x74),
               *(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x4c));
  }
  iVar8 = iVar8 + 0x20;
  iVar1 = pm_runtime_get_if_active(iVar8,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 == DAT_00010cf8) {
    uVar5 = os04a10_read_reg(*piVar7,0x3820,1,&local_1c);
    if (*(int *)(param_1 + 0x84) == 0) {
      local_1c = local_1c & 0xfffffffb;
    }
    else {
      local_1c = local_1c | 4;
    }
  }
  else {
    if (DAT_00010cf8 <= uVar4) {
      uVar5 = *(uint *)(param_1 + 0x84);
      if (uVar4 == DAT_00010d04) {
        if ((int)uVar5 < 0xf9) {
          iVar6 = 0x400;
        }
        else {
          iVar6 = __aeabi_idiv(uVar5 << 10,0xf8);
          uVar5 = 0xf8;
        }
        uVar5 = os04a10_write_reg(*piVar7,0x3508,2,(uVar5 & 0x1ff) << 4);
        uVar3 = 3;
        uVar2 = 0x350a;
        uVar4 = DAT_00010d08 & iVar6 << 6;
      }
      else {
        if (uVar4 != DAT_00010d04 + 0x10000) {
          if (uVar4 != DAT_00010cf4) goto LAB_00010bd0;
          uVar2 = 0x380e;
          iVar6 = *(int *)(*(int *)(iVar6 + 0xa4) + 8) + uVar5;
          goto LAB_00010c16;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = (uVar5 - 1) * 4 | 0x80;
        }
        uVar5 = os04a10_write_reg(*piVar7,0x5080,1,uVar4);
        uVar3 = 1;
        uVar2 = 0x50c0;
      }
      uVar4 = os04a10_write_reg(*piVar7,uVar2,uVar3,uVar4);
      uVar5 = uVar5 | uVar4;
      goto LAB_00010c1e;
    }
    if (uVar4 == DAT_00010cf8 - 4) {
      iVar6 = *(int *)(param_1 + 0x84);
      uVar2 = 0x3501;
LAB_00010c16:
      uVar5 = os04a10_write_reg(*piVar7,uVar2,2,iVar6);
      goto LAB_00010c1e;
    }
    if (uVar4 != DAT_00010cf8 - 1) {
LAB_00010bd0:
      uVar5 = 0;
      _dev_warn(iVar8,DAT_00010cfc,DAT_00010d00,uVar4,*(undefined4 *)(param_1 + 0x84));
      goto LAB_00010c1e;
    }
    uVar5 = os04a10_read_reg(*piVar7,0x3820,1,&local_1c);
    if (*(int *)(param_1 + 0x84) == 0) {
      local_1c = local_1c & 0xfffffffd;
    }
    else {
      local_1c = local_1c | 2;
    }
  }
  uVar4 = os04a10_write_reg(*piVar7,0x3820,1);
  uVar5 = uVar5 | uVar4;
  if (uVar5 == 0) {
    *(char *)(iVar6 + 0xfa) = (char)local_1c;
  }
LAB_00010c1e:
  pm_runtime_put(iVar8);
  return uVar5;
}



/* ===== set_conversion_gain_status @ 00010d0c size=58 ===== */

undefined4
set_conversion_gain_status(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint local_14;
  
  iVar2 = *(int *)(param_1 + 0x40);
  local_14 = 0;
  iVar1 = kstrtoint(param_3,0,&local_14,iVar2,param_1);
  if ((iVar1 == 0) && (local_14 < 2)) {
    os04a10_set_conversion_gain(iVar2 + -0x40,&local_14);
  }
  else {
    _dev_err(param_1,DAT_00010d48,local_14);
  }
  return param_4;
}



/* ===== pm_runtime_put_noidle @ 00010d4c size=46 ===== */

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



/* ===== os04a10_s_power @ 00010d7a size=156 ===== */

uint os04a10_s_power(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + -0x40);
  mutex_lock(param_1 + 0x174);
  if ((bool)*(char *)(param_1 + 0x181) == (param_2 != 0)) {
    uVar1 = 0;
  }
  else {
    iVar4 = iVar4 + 0x20;
    if (param_2 == 0) {
      pm_runtime_put(iVar4);
      *(undefined1 *)(param_1 + 0x181) = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = __pm_runtime_resume(iVar4,4,*(char *)(param_1 + 0x181),param_2 != 0,param_4);
      if ((int)uVar1 < 0) {
        pm_runtime_put_noidle(iVar4);
      }
      else {
        if (*(char *)(param_1 + 0x1db) == '\0') {
          uVar2 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x103,1);
          usleep_range(100,200);
          uVar3 = os04a10_write_array(*(undefined4 *)(param_1 + -0x40),
                                      *(undefined4 *)(*(int *)(param_1 + 0x188) + 0x20));
          uVar1 = uVar1 | uVar3 | uVar2;
          if (uVar1 != 0) {
            _dev_err(*(int *)(param_1 + -0x40) + 0x20,DAT_00010e18);
            goto LAB_00010db2;
          }
        }
        *(undefined1 *)(param_1 + 0x181) = 1;
      }
    }
  }
LAB_00010db2:
  mutex_unlock(param_1 + 0x174);
  return uVar1;
}



/* ===== os04a10_open @ 00010e1c size=44 ===== */

undefined4 os04a10_open(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x184);
  puVar1 = *(undefined4 **)(param_2 + 0x48);
  mutex_lock(param_1 + 0x174);
  *puVar1 = puVar2[1];
  puVar1[1] = puVar2[2];
  puVar1[2] = *puVar2;
  puVar1[3] = 1;
  mutex_unlock(param_1 + 0x174);
  return 0;
}



/* ===== os04a10_get_fmt @ 00010e48 size=116 ===== */

undefined4 os04a10_get_fmt(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x188);
  mutex_lock(param_1 + 0x174);
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
    if ((uVar4 < 4) && (piVar5[10] != 0)) {
      iVar1 = piVar5[uVar4 + 0xd];
    }
    else {
      iVar1 = piVar5[0xd];
    }
    param_3[0xe] = iVar1;
  }
  mutex_unlock(param_1 + 0x174);
  return 0;
}



/* ===== os04a10_s_stream @ 00010ebc size=340 ===== */

uint os04a10_s_stream(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_24;
  undefined4 uStack_20;
  
  iVar3 = *(int *)(param_1 + -0x40);
  iVar5 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  mutex_lock(param_1 + 0x174);
  if ((bool)*(char *)(param_1 + 0x180) != (param_2 != 0)) {
    iVar3 = iVar3 + 0x20;
    if (param_2 != 0) {
      uVar1 = __pm_runtime_resume(iVar3,4);
      if ((int)uVar1 < 0) {
        pm_runtime_put_noidle(iVar3);
        goto LAB_00010efc;
      }
      if ((*(char *)(param_1 + 0x1db) != '\0') ||
         (uVar1 = os04a10_write_array(*(undefined4 *)(param_1 + -0x40),
                                      *(undefined4 *)(*(int *)(param_1 + 0x188) + 0x24)), uVar1 == 0
         )) {
        uVar4 = *(undefined4 *)(param_1 + -0x40);
        local_24 = 0;
        uVar1 = os04a10_read_reg(uVar4,0x376c,1,&local_24);
        local_24 = local_24 & 0xffffff8f;
        if (*(char *)(param_1 + 0x1d8) == '\0') {
          local_24 = local_24 | 0x10;
        }
        if (*(char *)(param_1 + 0x1d9) == '\0') {
          local_24 = local_24 | 0x20;
        }
        if (*(char *)(param_1 + 0x1da) == '\0') {
          local_24 = local_24 | 0x40;
        }
        uVar2 = os04a10_write_reg(uVar4,0x376c,1,local_24,iVar5);
        uVar1 = uVar1 | uVar2;
        if ((uVar1 == 0) && (uVar1 = __v4l2_ctrl_handler_setup(param_1 + 0xe4), uVar1 == 0)) {
          if ((*(char *)(param_1 + 0x1a0) == '\0') ||
             ((*(int *)(*(int *)(param_1 + 0x188) + 0x28) == 0 ||
              (uVar1 = os04a10_ioctl(param_1,DAT_00011010,param_1 + 0x1a4), uVar1 == 0)))) {
            uVar1 = os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x100,1);
            if (uVar1 == 0) goto LAB_00010fe0;
          }
          else {
            _dev_err(*(int *)(param_1 + -0x40) + 0x20,DAT_00011014);
          }
        }
      }
      printk(DAT_00011018,param_1 + 0x74);
      pm_runtime_put(iVar3);
      goto LAB_00010efc;
    }
    *(undefined1 *)(param_1 + 0x1a0) = 0;
    if (*(char *)(param_1 + 0x1db) != '\0') {
      *(undefined1 *)(param_1 + 0x1dd) = 1;
    }
    os04a10_write_reg(*(undefined4 *)(param_1 + -0x40),0x100,1,0,iVar5);
    pm_runtime_put(iVar3);
LAB_00010fe0:
    *(bool *)(param_1 + 0x180) = param_2 != 0;
  }
  uVar1 = 0;
LAB_00010efc:
  mutex_unlock(param_1 + 0x174);
  return uVar1;
}



/* ===== __os04a10_power_off @ 0001101c size=124 ===== */

void __os04a10_power_off(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x21b) != '\0') {
    if (*(char *)(param_1 + 0x21d) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x21b) = 0;
    *(undefined1 *)(param_1 + 0x21d) = 0;
  }
  if (*(uint *)(param_1 + 0xc) < 0xfffff001) {
    gpiod_direction_output(*(uint *)(param_1 + 0xc),0);
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  clk_disable(uVar1);
  clk_unprepare(uVar1);
  uVar1 = extraout_r2;
  if (*(uint *)(param_1 + 8) < 0xfffff001) {
    gpiod_direction_output(*(uint *)(param_1 + 8),0);
    uVar1 = extraout_r2_00;
  }
  if ((*(uint *)(param_1 + 0x3c) != 0) && (*(uint *)(param_1 + 0x3c) < 0xfffff001)) {
    pinctrl_select_state(*(undefined4 *)(param_1 + 0x34));
    uVar1 = extraout_r2_01;
  }
  if (*(char *)(param_1 + 0x21c) != '\0') {
    *(undefined1 *)(param_1 + 0x21c) = 0;
    regulator_bulk_disable(3,param_1 + 0x10);
    uVar1 = extraout_r2_02;
  }
  usleep_range(30000,31000,uVar1,param_4);
  return;
}



/* ===== os04a10_runtime_suspend @ 00011098 size=14 ===== */

undefined4 os04a10_runtime_suspend(int param_1)

{
  __os04a10_power_off(*(int *)(param_1 + 0x40) + -0x40);
  return 0;
}



/* ===== os04a10_remove @ 000110a6 size=62 ===== */

undefined4 os04a10_remove(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  v4l2_async_unregister_subdev(iVar1);
  v4l2_ctrl_handler_free(iVar1 + 0xe4);
  __pm_runtime_disable(param_1 + 0x20,1);
  if (*(int *)(param_1 + 0x108) != 2) {
    __os04a10_power_off(iVar1 + -0x40);
  }
  __pm_runtime_set_status(param_1 + 0x20,2);
  return 0;
}



/* ===== os04a10_probe @ 000110e4 size=1434 ===== */

uint os04a10_probe(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  uint local_30;
  uint local_2c [2];
  
  iVar13 = param_1 + 0x20;
  uVar14 = *(undefined4 *)(param_1 + 0x184);
  local_30 = 0;
  _dev_info(iVar13,DAT_000112c4,0,1,5);
  piVar2 = (int *)devm_kmalloc(iVar13,0x25c,0xdc0);
  if (piVar2 == (int *)0x0) {
    return 0xfffffff4;
  }
  uVar3 = of_property_read_variable_u32_array(uVar14,DAT_000112c8,piVar2 + 0x74,1,0);
  uVar4 = of_property_read_string(uVar14,DAT_000112cc,piVar2 + 0x75);
  uVar5 = of_property_read_string(uVar14,DAT_000112d0,piVar2 + 0x76);
  uVar6 = of_property_read_string(uVar14,DAT_000112d4,piVar2 + 0x77);
  uVar6 = uVar4 | uVar5 | uVar6;
  if ((int)uVar3 < 1) {
    uVar6 = uVar6 | uVar3;
  }
  uVar9 = DAT_000112d8;
  if (uVar6 != 0) {
LAB_00011168:
    _dev_err(iVar13,uVar9);
    return 0xffffffea;
  }
  *(undefined1 *)((int)piVar2 + 0x21b) = 0;
  iVar7 = of_property_read_variable_u32_array(uVar14,DAT_000112dc,&local_30,1,0);
  if (iVar7 < 0) {
    local_30 = uVar6;
    _dev_warn(iVar13,DAT_000112e0);
  }
  iVar7 = of_graph_get_next_endpoint(*(undefined4 *)(param_1 + 0x184),0);
  uVar9 = DAT_000112e4;
  if ((iVar7 == 0) ||
     (iVar7 = v4l2_fwnode_endpoint_parse(iVar7 + 0xc,piVar2 + 0x89), uVar14 = DAT_000112f0,
     uVar9 = DAT_000112e8, iVar7 != 0)) goto LAB_00011168;
  if (*(char *)((int)piVar2 + 0x24d) == '\x04') {
    piVar2[0x71] = DAT_000112ec;
    iVar7 = 5;
  }
  else {
    piVar2[0x71] = DAT_000112ec + 0x154;
    iVar7 = 2;
  }
  piVar2[0x73] = iVar7;
  _dev_info(iVar13,uVar14);
  iVar7 = DAT_000112ec;
  for (iVar11 = 0; piVar2[0x73] != iVar11; iVar11 = iVar11 + 1) {
    if (*(uint *)(iVar7 + 0x28) == local_30) {
      piVar2[0x72] = iVar11 * 0x44 + piVar2[0x71];
      break;
    }
    iVar7 = iVar7 + 0x44;
  }
  *piVar2 = param_1;
  uVar3 = devm_clk_get(iVar13,DAT_000112f4);
  piVar2[1] = uVar3;
  uVar9 = DAT_000112f8;
  if (0xfffff000 < uVar3) goto LAB_00011168;
  uVar3 = devm_gpiod_get(iVar13,DAT_000112fc,0);
  piVar2[2] = uVar3;
  if (0xfffff000 < uVar3) {
    _dev_warn(iVar13,DAT_00011300);
  }
  uVar3 = devm_gpiod_get(iVar13,DAT_00011304,0);
  piVar2[3] = uVar3;
  if (0xfffff000 < uVar3) {
    _dev_warn(iVar13,DAT_00011308);
  }
  uVar3 = devm_pinctrl_get(iVar13);
  piVar2[0xd] = uVar3;
  uVar14 = DAT_0001132c;
  if (uVar3 < 0xfffff001) {
    uVar3 = pinctrl_lookup_state(uVar3,DAT_0001130c);
    piVar2[0xe] = uVar3;
    if (0xfffff000 < uVar3) {
      _dev_err(iVar13,DAT_00011310);
    }
    uVar3 = pinctrl_lookup_state(piVar2[0xd],DAT_00011314);
    piVar2[0xf] = uVar3;
    uVar14 = DAT_00011318;
    if (0xfffff000 < uVar3) goto LAB_0001128e;
  }
  else {
LAB_0001128e:
    _dev_err(iVar13,uVar14);
  }
  piVar2[4] = DAT_0001131c;
  piVar2[7] = DAT_00011320;
  piVar2[10] = DAT_00011324;
  uVar3 = devm_regulator_bulk_get(*piVar2 + 0x20,3,piVar2 + 4);
  iVar7 = DAT_00011678;
  if (uVar3 != 0) {
    _dev_err(iVar13,DAT_00011328);
    return uVar3;
  }
  piVar15 = piVar2 + 0x49;
  __mutex_init(piVar2 + 0x6d,DAT_0001162c,DAT_00011628);
  piVar12 = piVar2 + 0x10;
  v4l2_i2c_subdev_init(piVar12,param_1,iVar7 + 0x208);
  bVar1 = *(byte *)((int)piVar2 + 0x24d);
  iVar11 = piVar2[0x72];
  uVar3 = v4l2_ctrl_handler_init_class(piVar15,9,0,0);
  if (uVar3 != 0) {
    return uVar3;
  }
  piVar2[0x4c] = (int)(piVar2 + 0x6d);
  iVar8 = v4l2_ctrl_new_int_menu(piVar15,0,DAT_00011630,2,0,iVar7);
  piVar2[0x6a] = iVar8;
  iVar8 = *(int *)(iVar11 + 0x2c);
  iVar7 = __aeabi_uidiv(*(undefined4 *)(iVar7 + iVar8 * 8),*(undefined4 *)(iVar11 + 0x30));
  iVar7 = v4l2_ctrl_new_std(piVar15,0,DAT_00011638,0,0,0,DAT_00011634,0,1,0,iVar7 * (uint)bVar1 * 2,
                            0);
  piVar2[0x69] = iVar7;
  __v4l2_ctrl_s_ctrl(piVar2[0x6a],iVar8);
  iVar7 = *(int *)(iVar11 + 0x14) - *(int *)(iVar11 + 4);
  iVar7 = v4l2_ctrl_new_std(piVar15,0,DAT_0001163c,iVar7,iVar7,0,iVar7,0,1,0,iVar7,0);
  piVar2[0x66] = iVar7;
  if (iVar7 != 0) {
    *(uint *)(iVar7 + 0x7c) = *(uint *)(iVar7 + 0x7c) | 4;
  }
  iVar7 = *(int *)(iVar11 + 0x18) - *(int *)(iVar11 + 8);
  iVar8 = 0xffff - *(int *)(iVar11 + 8);
  iVar7 = v4l2_ctrl_new_std(piVar15,DAT_00011640,DAT_00011644,iVar8,iVar7,0,iVar8,0,1,0,iVar7,0);
  uVar14 = DAT_00011640;
  piVar2[0x67] = iVar7;
  iVar7 = DAT_0001167c;
  iVar11 = v4l2_ctrl_new_std(piVar15,uVar14,DAT_00011648,0,2,0,*(int *)(iVar11 + 0x18) + -4,0,1,0,
                             *(undefined4 *)(iVar11 + 0x1c),0);
  piVar2[99] = iVar11;
  iVar11 = v4l2_ctrl_new_std(piVar15,DAT_00011640,DAT_0001164c,0,0x10,0,0xf7c,0,1,0,0x10,0);
  piVar2[100] = iVar11;
  iVar11 = v4l2_ctrl_new_std_menu_items(piVar15,iVar7 + -0xc,DAT_00011650,4,0,0,0,iVar7);
  piVar2[0x68] = iVar11;
  iVar11 = v4l2_ctrl_new_std(piVar15,iVar7 + -0xc,DAT_00011654,0,0,0,1,0,1,0,0,0);
  piVar2[0x6b] = iVar11;
  iVar7 = v4l2_ctrl_new_std(piVar15,iVar7 + -0xc,DAT_00011658,0,0,0,1,0,1,0,0,0);
  *(undefined1 *)((int)piVar2 + 0x21e) = 0;
  uVar3 = piVar2[0x56];
  piVar2[0x6c] = iVar7;
  if (uVar3 != 0) {
    _dev_err(*piVar2 + 0x20,DAT_0001165c,uVar3);
    goto LAB_0001151c;
  }
  piVar2[0x2c] = (int)piVar15;
  *(undefined1 *)(piVar2 + 0x78) = 0;
  *(undefined2 *)(piVar2 + 0x86) = 0;
  *(undefined1 *)((int)piVar2 + 0x21a) = 0;
  if (*(char *)((int)piVar2 + 0x21b) == '\0') {
    *(undefined1 *)(piVar2 + 0x87) = 1;
  }
  uVar3 = __os04a10_power_on(piVar2);
  if (uVar3 != 0) goto LAB_0001151c;
  iVar7 = *piVar2 + 0x20;
  local_2c[0] = uVar3;
  if (*(char *)((int)piVar2 + 0x21b) == '\0') {
    uVar14 = os04a10_read_reg(param_1,0x300a,3,local_2c);
    if (local_2c[0] == DAT_0001166c) {
      _dev_info(iVar7,DAT_00011674,local_2c[0],uVar14);
      goto LAB_00011566;
    }
    _dev_err(iVar7,DAT_00011670);
    uVar3 = 0xffffffed;
  }
  else {
    _dev_info(iVar7,DAT_00011660);
LAB_00011566:
    iVar7 = *piVar2;
    local_2c[0] = 0;
    if (*(char *)((int)piVar2 + 0x21b) == '\0') {
      uVar4 = os04a10_write_reg(iVar7,0x100,1);
      usleep_range(5000,6000);
      uVar5 = os04a10_read_reg(*piVar2,0x77fe,2,local_2c);
      uVar3 = os04a10_write_reg(*piVar2,0x100,1,0);
      uVar3 = uVar4 | uVar5 | uVar3;
    }
    else {
      uVar3 = os04a10_read_reg(iVar7,0x77fe,2,local_2c);
    }
    uVar14 = DAT_00011664;
    if ((uVar3 == 0) && (local_2c[0] != 0)) {
      piVar2[0x88] = local_2c[0];
      _dev_info(iVar7 + 0x20,DAT_00011748,local_2c[0]);
    }
    else {
      piVar2[0x88] = 0;
      _dev_err(iVar7 + 0x20,uVar14,uVar3);
      if (uVar3 != 0) {
        _dev_warn(iVar13,DAT_00011668);
      }
    }
    piVar2[0x2b] = DAT_0001174c;
    piVar2[0x28] = piVar2[0x28] | 4;
    piVar2[0x48] = 2;
    piVar2[0x16] = DAT_00011750;
    uVar3 = media_entity_pads_init(piVar12,1,piVar2 + 0x41);
    if (-1 < (int)uVar3) {
      local_2c[0] = local_2c[0] & 0xffff0000;
      iVar7 = strcmp((char *)piVar2[0x75],DAT_00011754);
      if (iVar7 == 0) {
        uVar10 = 0x62;
      }
      else {
        uVar10 = 0x66;
      }
      local_2c[0] = CONCAT31(local_2c[0]._1_3_,uVar10);
      iVar7 = ((int *)piVar2[0x39])[0xb];
      if (iVar7 == 0) {
        iVar7 = *(int *)piVar2[0x39];
      }
      snprintf((char *)(piVar2 + 0x2d),0x20,DAT_0001175c,piVar2[0x74],local_2c,DAT_00011758,iVar7);
      uVar3 = v4l2_async_register_subdev_sensor_common(piVar12);
      if (uVar3 == 0) {
        __pm_runtime_set_status(iVar13,0);
        pm_runtime_enable(iVar13);
        __pm_runtime_idle(iVar13,0);
        iVar7 = device_create_file(iVar13,DAT_00011764);
        if (iVar7 == 0) {
          return 0;
        }
        _dev_err(iVar13,DAT_0001176c,DAT_00011768);
        return 0;
      }
      _dev_err(iVar13,DAT_00011760);
    }
  }
  __os04a10_power_off(piVar2);
LAB_0001151c:
  v4l2_ctrl_handler_free(piVar15);
  return uVar3;
}



/* ===== init_module @ 00011770 size=8 ===== */

void init_module(void)

{
  i2c_register_driver(DAT_0001177c,DAT_00011778);
  return;
}



/* ===== cleanup_module @ 00011780 size=6 ===== */

void cleanup_module(void)

{
  i2c_del_driver(DAT_00011788);
  return;
}



/* ===== <EXTERNAL>::v4l2_i2c_subdev_init @ 00014000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_i2c_subdev_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_kmalloc @ 00014004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_variable_u32_array @ 00014008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_variable_u32_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0001400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_unregister_subdev @ 00014014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_unregister_subdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_get_if_active @ 00014018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_get_if_active(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_init_class @ 0001401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_init_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_handler_setup @ 00014020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_handler_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_transfer_buffer_flags @ 00014024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_transfer_buffer_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_set_rate @ 00014028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_set_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_get @ 0001402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_set_status @ 00014030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_set_status(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_prepare @ 00014034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_register_subdev_sensor_common @ 00014038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_register_subdev_sensor_common(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 0001403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep_range @ 00014040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usleep_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_bulk_disable @ 00014044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_bulk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 00014048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_int_menu @ 0001404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_int_menu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_s_ctrl @ 00014050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_s_ctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::device_create_file @ 00014054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void device_create_file(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_register_driver @ 00014058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_register_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 0001405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 00014060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kstrtoint @ 00014064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kstrtoint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 00014068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_string @ 0001406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_pads_init @ 00014070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_pads_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_graph_get_next_endpoint @ 00014074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_graph_get_next_endpoint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_s_ctrl_int64 @ 00014078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_s_ctrl_int64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 0001407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 00014080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00014084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_warn @ 00014088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0001408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_bulk_enable @ 00014090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_bulk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_regulator_bulk_get @ 00014094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_regulator_bulk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00014098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_lookup_state @ 0001409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_lookup_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_get_rate @ 000140a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_get_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strscpy @ 000140a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strscpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 000140a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 000140ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_gpiod_get @ 000140b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_gpiod_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_pinctrl_get @ 000140b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_pinctrl_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_std @ 000140b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_std(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_modify_range @ 000140bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_modify_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_free @ 000140c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_transfer @ 000140c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_transfer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_disable @ 000140c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_select_state @ 000140cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_select_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::i2c_del_driver @ 000140d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void i2c_del_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_fwnode_endpoint_parse @ 000140d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_fwnode_endpoint_parse(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 000140dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gpiod_direction_output @ 000140e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void gpiod_direction_output(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_enable @ 000140e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_std_menu_items @ 000140e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_std_menu_items(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_idle @ 000140ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_idle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_unprepare @ 000140f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


