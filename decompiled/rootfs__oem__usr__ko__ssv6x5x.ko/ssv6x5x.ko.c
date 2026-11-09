// ssv6x5x.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== ssv6xxx_dbg_seq_start @ 000111d8 size=26 ===== */

int ssv6xxx_dbg_seq_start(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = iVar2 + 0x10;
  if (*(int *)(iVar2 + 0x10) < 1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== ssv6xxx_dbg_seq_next @ 000111f2 size=32 ===== */

int ssv6xxx_dbg_seq_next(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_3;
  iVar3 = *(int *)(param_1 + 0x40);
  *param_3 = uVar2 + 1;
  param_3[1] = param_3[1] + (uint)(0xfffffffe < uVar2);
  iVar1 = iVar3 + 0x10;
  if (*(int *)(iVar3 + 0x10) < 1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== ssv_init_cli @ 00011212 size=138 ===== */

void ssv_init_cli(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = proc_mkdir(param_1,*DAT_0001129c,param_3,DAT_0001129c,param_1,param_2,param_3);
  *(int *)(param_2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    printk(DAT_000112a0,param_1);
  }
  iVar1 = proc_create_data(DAT_000112a8,0x1b6,*(undefined4 *)(param_2 + 0x28),DAT_000112a4,param_2);
  if (iVar1 == 0) {
    printk(DAT_000112ac,DAT_000112a8);
  }
  iVar1 = proc_create_data(DAT_000112b4,0x1b6,*(undefined4 *)(param_2 + 0x28),DAT_000112b0,param_2);
  if (iVar1 == 0) {
    printk(DAT_000112b8,DAT_000112b4);
  }
  iVar1 = proc_create_data(DAT_000112c0,0x1b6,*(undefined4 *)(param_2 + 0x28),DAT_000112bc,param_2);
  if (iVar1 == 0) {
    printk(DAT_000112c4,DAT_000112c0);
  }
  iVar1 = proc_create_data(DAT_000112cc,0x1b6,*(undefined4 *)(param_2 + 0x28),DAT_000112c8,param_2);
  if (iVar1 == 0) {
    printk(DAT_000112d0,DAT_000112cc);
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  return;
}



/* ===== _copy_from_user @ 000112d4 size=58 ===== */

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



/* ===== _copy_to_user @ 0001130e size=38 ===== */

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



/* ===== ssv6xxx_p2p_read @ 00011334 size=94 ===== */

uint ssv6xxx_p2p_read(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_4;
  if ((int)param_4[1] < (int)(uint)(uVar3 < 2)) {
    if ((int)(param_4[1] + (uint)CARRY4(uVar3,param_3)) < (int)(uint)(uVar3 + param_3 < 3)) {
      uVar3 = 2;
    }
    else {
      uVar3 = 2 - uVar3;
    }
    uVar1 = uVar3;
    if (uVar3 < 3) {
      uVar1 = _copy_to_user(param_2,DAT_00011394,uVar3);
    }
    printk(DAT_0001139c,DAT_00011398,DAT_00011394);
    uVar2 = *param_4;
    uVar3 = uVar3 - uVar1;
    *param_4 = uVar2 + uVar3;
    param_4[1] = param_4[1] + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar2,uVar3);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== ssv6xxx_p2p_open @ 000113a0 size=16 ===== */

undefined4 ssv6xxx_p2p_open(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = PDE_DATA();
  *(undefined4 *)(param_2 + 0x80) = uVar1;
  return 0;
}



/* ===== ssv6xxx_freq_read @ 000113b0 size=158 ===== */

void ssv6xxx_freq_read(int param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char local_34 [8];
  int local_2c;
  
  piVar1 = DAT_00011450;
  local_2c = *DAT_00011450;
  local_34[0] = '0';
  local_34[1] = '\0';
  local_34[2] = '\0';
  local_34[3] = '\0';
  local_34[4] = '\0';
  local_34[5] = '\0';
  local_34[6] = '\0';
  local_34[7] = '\0';
  if (*(short *)(*(int *)(param_1 + 0x80) + -0x4a) != 0) {
    sprintf(local_34,DAT_00011454);
  }
  sVar2 = strlen(local_34);
  uVar5 = *param_4;
  uVar6 = sVar2 + 1;
  if ((int)param_4[1] < (int)(uint)(uVar5 < uVar6)) {
    iVar4 = param_4[1] + (uint)CARRY4(uVar5,param_3);
    bVar7 = uVar6 < uVar5 + param_3;
    if ((int)(-(uint)bVar7 - iVar4) < 0 != (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)bVar7))) {
      uVar6 = uVar6 - uVar5;
    }
    printk(DAT_00011458,local_34);
    uVar5 = uVar6;
    if (uVar6 < 9) {
      uVar5 = _copy_to_user(param_2,local_34,uVar6);
    }
    uVar3 = *param_4;
    uVar6 = uVar6 - uVar5;
    *param_4 = uVar3 + uVar6;
    param_4[1] = param_4[1] + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar3,uVar6);
  }
  else {
    uVar6 = 0;
  }
  if (local_2c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}



/* ===== ssv6xxx_dbg_file_open @ 0001145c size=28 ===== */

void ssv6xxx_dbg_file_open(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = PDE_DATA();
  iVar2 = seq_open(param_2,DAT_00011478);
  if (iVar2 == 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x80) + 0x40) = uVar1;
  }
  return;
}



/* ===== ssv6xxx_dbg_seq_show @ 0001147c size=34 ===== */

undefined4
ssv6xxx_dbg_seq_show(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)param_2[3] + 1;
  seq_putc(param_1,*(undefined1 *)param_2[3],param_3,param_4,param_4);
  if ((undefined1 *)param_2[5] == puVar1) {
    puVar1 = (undefined1 *)param_2[2];
  }
  *param_2 = *param_2 + -1;
  param_2[3] = (int)puVar1;
  return 0;
}



/* ===== ssv_deinit_cli @ 0001149e size=52 ===== */

undefined4 ssv_deinit_cli(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  remove_proc_entry(DAT_000114d4,*(undefined4 *)(param_2 + 0x28),param_3,param_4,param_4);
  remove_proc_entry(DAT_000114d8,*(undefined4 *)(param_2 + 0x28));
  remove_proc_entry(DAT_000114dc,*(undefined4 *)(param_2 + 0x28));
  remove_proc_entry(DAT_000114e0,*(undefined4 *)(param_2 + 0x28));
  remove_proc_entry(param_1,*DAT_000114e4);
  return 0;
}



/* ===== ssvdevice_exit @ 000114e8 size=30 ===== */

void ssvdevice_exit(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  ssv6xxx_exit();
  ssv6xxx_hci_exit();
  ssv6xxx_sdio_exit();
  ssv6xxx_hwif_hal_exit();
  remove_proc_entry(DAT_00011508,0,extraout_r2,in_r3);
  return;
}



/* ===== ssv6xxx_dbg_seq_stop @ 0001150c size=40 ===== */

void ssv6xxx_dbg_seq_stop(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (((iVar2 != -0x10) && (iVar1 = *(int *)(iVar2 + 0x18), iVar1 != 0)) &&
     (*(int *)(iVar2 + 0x14) != 0)) {
    if (*(int *)(iVar2 + 0x10) == 0) {
      *(int *)(iVar2 + 0x1c) = iVar1;
      *(int *)(iVar2 + 0x20) = iVar1;
      *(int *)(iVar2 + 0x24) = iVar1 + *(int *)(iVar2 + 0x14);
    }
    seq_putc(param_1,10);
  }
  return;
}



/* ===== ssv6xxx_p2p_write @ 00011534 size=94 ===== */

uint ssv6xxx_p2p_write(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r3;
  undefined4 uVar3;
  int iVar4;
  
  if ((*param_4 == 0 && param_4[1] == 0) && (param_3 < 0x100)) {
    iVar4 = *(int *)(param_1 + 0x80);
    if (param_3 < 3) {
      uVar2 = _copy_from_user(DAT_00011594);
      uVar3 = extraout_r3;
    }
    else {
      uVar3 = 0;
      uVar2 = param_3;
    }
    iVar1 = DAT_00011598;
    if (uVar2 == 0) {
      *(undefined1 *)(param_3 + DAT_00011598) = 0;
      uVar2 = simple_strtol(iVar1 + 1,0,10,uVar3,param_4);
      printk(DAT_000115a0,DAT_0001159c,uVar2);
      if (-1 < (int)uVar2) {
        *(char *)(iVar4 + -0x48) = (char)uVar2;
        printk(DAT_000115a4,uVar2 & 0xff);
      }
    }
    else {
      param_3 = 0xfffffff2;
    }
  }
  else {
    param_3 = 0;
  }
  return param_3;
}



/* ===== ssv6xxx_cmd_file_read @ 000115a8 size=126 ===== */

int ssv6xxx_cmd_file_read(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int **)(param_1 + 0x80);
  if ((char)piVar3[3] != '\0') {
    iVar5 = *piVar3;
    *(undefined1 *)(piVar3 + 3) = 0;
    if (iVar5 != 0) {
      *piVar3 = 0;
      if (param_4[1] == 0 && *param_4 == 0) {
        if ((uint)piVar3[2] < (uint)piVar3[1]) {
          piVar3[1] = piVar3[2] - 1;
        }
        iVar2 = piVar3[1];
        iVar4 = iVar2 + 1;
        if (iVar2 == 0) goto LAB_000115ee;
        if ((iVar4 < 0) || (iVar2 = _copy_to_user(param_2,iVar5,iVar4,iVar2,param_4), iVar2 != 0)) {
          iVar4 = -0xe;
        }
      }
      else {
LAB_000115ee:
        iVar4 = 0;
      }
      kfree(iVar5);
      goto LAB_000115b6;
    }
  }
  iVar4 = 0;
LAB_000115b6:
  if (0 < piVar3[0xb]) {
    piVar3 = piVar3 + 0xb;
    HintPreloadData(piVar3);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + -1;
  }
  return iVar4;
}



/* ===== ssv6xxx_cmd_file_write @ 00011626 size=142 ===== */

uint ssv6xxx_cmd_file_write(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  if ((param_4[1] == 0 && *param_4 == 0) && (param_3 < 0x100)) {
    iVar6 = *(int *)(param_1 + 0x80);
    puVar2 = (undefined1 *)__kmalloc(param_3,0xdc0);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      iVar3 = _copy_from_user(puVar2,param_2,param_3);
      if (iVar3 == 0) {
        iVar3 = 0x3e9;
        do {
          if (*(int *)(iVar6 + 0x2c) == 0) {
            piVar5 = (int *)(iVar6 + 0x2c);
            HintPreloadData(piVar5);
            do {
              ExclusiveAccess(piVar5);
              bVar1 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar1);
            *piVar5 = *piVar5 + 2;
            uVar4 = *(undefined4 *)(param_1 + 0x80);
            puVar2[param_3 - 1] = 0;
            ssv_cmd_submit(uVar4,puVar2);
            kfree(puVar2);
            return param_3;
          }
          msleep(1);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      return 0xfffffff2;
    }
  }
  return 0;
}



/* ===== ssv6xxx_freq_open @ 000116b4 size=16 ===== */

undefined4 ssv6xxx_freq_open(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = PDE_DATA();
  *(undefined4 *)(param_2 + 0x80) = uVar1;
  return 0;
}



/* ===== ssv6xxx_cmd_file_open @ 000116c4 size=16 ===== */

undefined4 ssv6xxx_cmd_file_open(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = PDE_DATA();
  *(undefined4 *)(param_2 + 0x80) = uVar1;
  return 0;
}



/* ===== read_line @ 000116d4 size=98 ===== */

uint read_line(int param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uStack_24;
  int iStack_20;
  
  if ((param_3 == 0) || (param_2 == (char *)0x0)) {
    uVar4 = 0xffffffea;
  }
  else {
    bVar1 = false;
    uVar4 = 0;
    iVar5 = param_1;
    uStack_24 = param_2;
    iStack_20 = param_3;
    do {
      iVar2 = kernel_read(param_1,(int)&uStack_24 + 3,1,param_1 + 0x38,iVar5);
      pcVar3 = param_2;
      if (iVar2 == 0) {
        if (uVar4 == 0) {
          return 0;
        }
        break;
      }
      if (uStack_24._3_1_ == '#') {
        bVar1 = true;
      }
      if (uVar4 < param_3 - 1U) {
        uVar4 = uVar4 + 1;
        pcVar3 = param_2 + 1;
        if (bVar1) {
          *param_2 = '\0';
        }
        else {
          *param_2 = uStack_24._3_1_;
        }
      }
      param_2 = pcVar3;
    } while (uStack_24._3_1_ != '\n');
    *pcVar3 = '\0';
  }
  return uVar4;
}



/* ===== ischar @ 00011736 size=48 ===== */

byte ischar(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)(param_1 + -1);
  do {
    pbVar1 = pbVar1 + 1;
    uVar2 = (uint)*pbVar1;
    if (uVar2 == 0) {
      return 1;
    }
  } while (((((*(byte *)(DAT_00011768 + uVar2) & 3) != 0) || (uVar2 - 0x30 < 10)) || (uVar2 == 0x5f)
           ) || ((uVar2 == 0x3a || (uVar2 - 0x2c < 4))));
  return *(byte *)(DAT_00011768 + uVar2) & 3;
}



/* ===== ssv_cmd_mib @ 0001176c size=16 ===== */

undefined4 ssv_cmd_mib(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1d8))();
  return 0;
}



/* ===== ssv_cmd_power_saving @ 0001177c size=16 ===== */

undefined4 ssv_cmd_power_saving(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1dc))();
  return 0;
}



/* ===== ssv_cmd_rc @ 0001178c size=16 ===== */

undefined4 ssv_cmd_rc(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x210) + 0x300))();
  return 0;
}



/* ===== ssv_cmd_hwinfo @ 0001179c size=16 ===== */

undefined4 ssv_cmd_hwinfo(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1e0))();
  return 0;
}



/* ===== ssv_cmd_rf @ 000117ac size=16 ===== */

undefined4 ssv_cmd_rf(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1e8))();
  return 0;
}



/* ===== ssv_cmd_rfble @ 000117bc size=16 ===== */

undefined4 ssv_cmd_rfble(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1ec))();
  return 0;
}



/* ===== ssv_cmd_efuse @ 000117cc size=16 ===== */

undefined4 ssv_cmd_efuse(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1f0))();
  return 0;
}



/* ===== __string2s32 @ 000117dc size=20 ===== */

undefined4
__string2s32(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puStack_c;
  
  puStack_c = param_2;
  uVar1 = simple_strtol(param_1,&puStack_c,10,param_4,param_1);
  *param_2 = uVar1;
  return 0;
}



/* ===== __string2bool @ 000117f0 size=26 ===== */

undefined4
__string2bool(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_c;
  
  uStack_c = param_2;
  iVar1 = simple_strtoul(param_1,&uStack_c,10,param_4,param_1);
  *(bool *)param_2 = iVar1 != 0;
  return 0;
}



/* ===== __string2u32 @ 0001180a size=42 ===== */

undefined4 __string2u32(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *puStack_c;
  
  bVar2 = *param_1;
  if (bVar2 == 0x30) {
    bVar2 = param_1[1] & 0xdf;
    if (bVar2 == 0x58) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = 10;
    }
  }
  else {
    uVar1 = 10;
  }
  puStack_c = param_2;
  uVar1 = simple_strtoul(param_1,&puStack_c,uVar1,bVar2,param_1);
  *param_2 = uVar1;
  return 0;
}



/* ===== __string2configuration @ 00011834 size=60 ===== */

undefined4 __string2configuration(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_c = param_2;
  iVar1 = sscanf(param_1,DAT_00011870,&local_10,&local_c);
  if (iVar1 == 2) {
    iVar1 = 0;
    do {
      iVar3 = DAT_00011874 + iVar1 * 8;
      if (*(int *)(iVar3 + 0x58) == 0) {
        *(char **)(DAT_00011874 + (iVar1 + 0xb) * 8) = local_10;
        *(undefined4 *)(iVar3 + 0x5c) = local_c;
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x40);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== __string2mac @ 00011878 size=72 ===== */

undefined4 __string2mac(char *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  
  iVar1 = sscanf(param_1,DAT_000118c0,local_20,local_1c,local_18,local_14,local_10,local_c);
  if (iVar1 == 6) {
    uVar2 = 0;
    *param_2 = local_20[0];
    param_2[1] = local_1c[0];
    param_2[2] = local_18[0];
    param_2[3] = local_14[0];
    param_2[4] = local_10[0];
    param_2[5] = local_c[0];
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== __string2str @ 000118c4 size=16 ===== */

undefined4 __string2str(char *param_1,char *param_2)

{
  strcpy(param_2,param_1);
  return 0;
}



/* ===== snprintf_res @ 000118d4 size=48 ===== */

void snprintf_res(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_1[1];
  if (uVar1 < param_1[2] - 1U) {
    uStack_8 = param_3;
    uStack_4 = param_4;
    iVar2 = vsnprintf((char *)(uVar1 + *param_1),param_1[2] - uVar1,param_2,&uStack_8);
    param_1[1] = iVar2 + param_1[1];
  }
  return;
}



/* ===== ssv_cmd_hwq_limit @ 00011904 size=94 ===== */

undefined4 ssv_cmd_hwq_limit(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s1;
  
  if (param_2 == 3) {
    __s1 = (char *)param_3[1];
    iVar1 = strcmp(__s1,DAT_00011964);
    if ((((iVar1 == 0) || (iVar1 = strcmp(__s1,DAT_00011968), iVar1 == 0)) ||
        (iVar1 = strcmp(__s1,DAT_0001196c), iVar1 == 0)) ||
       ((iVar1 = strcmp(__s1,DAT_00011970), iVar1 == 0 ||
        (iVar1 = strcmp(__s1,DAT_00011974), iVar1 == 0)))) {
      (**(code **)(*(int *)(param_1 + 0x210) + 500))(*(int *)(param_1 + 0x210),3,param_3);
      return 0;
    }
  }
  snprintf_res(param_1 + 0x9c0,DAT_00011978,*param_3);
  return 0;
}



/* ===== ssv_cmd_txgen @ 0001197c size=106 ===== */

undefined4 ssv_cmd_txgen(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_20;
  uint local_1c;
  
  uVar3 = 0;
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 3) {
    __string2u32(*(undefined4 *)(param_3 + 4),&local_20,0);
    uVar2 = DAT_000119f4;
    iVar1 = DAT_000119ec;
    __string2u32(*(undefined4 *)(param_3 + 8),&local_1c,0);
    for (; uVar3 < local_20; uVar3 = uVar3 + 1) {
      (**(code **)(*(int *)(param_1 + 0x210) + 0x1e4))(*(int *)(param_1 + 0x210),local_1c & 0xff);
      (**(code **)(iVar1 + 4))(uVar2);
    }
    snprintf_res(param_1 + 0x9c0,DAT_000119f0);
  }
  else {
    snprintf_res(param_1 + 0x9c0,DAT_000119e8);
  }
  return 0;
}



/* ===== ssv_cmd_txrx_skb_q @ 000119f8 size=154 ===== */

undefined4 ssv_cmd_txrx_skb_q(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_24;
  int iStack_20;
  
  iVar5 = param_1 + 0x9c0;
  iVar6 = *(int *)(param_1 + 0x210);
  iVar7 = param_1;
  iStack_24 = param_2;
  iStack_20 = param_3;
  if (param_2 == 2) {
    iVar1 = strcmp(*(char **)(param_3 + 4),DAT_00011a94);
    if (iVar1 != 0) {
LAB_00011a88:
      snprintf_res(iVar5,DAT_00011aa8);
      return 0;
    }
    iVar1 = *(int *)(iVar6 + 0x14);
    snprintf_res(iVar5,DAT_00011a98,*(undefined4 *)(param_1 + 0x9ac));
    uVar2 = DAT_00011aac;
    iVar6 = 0;
    do {
      iVar4 = iVar6 + 1;
      snprintf_res(iVar5,uVar2,iVar6,*(undefined4 *)(iVar1 + 0x50 + iVar6 * 0x28),iVar7);
      iVar6 = iVar4;
    } while (iVar4 != 0xc);
    iVar6 = *(int *)(param_1 + 0x210);
    uVar3 = *(undefined4 *)(iVar6 + 0xcec);
    uVar2 = DAT_00011a9c;
  }
  else {
    if ((param_2 != 3) || (iVar1 = strcmp(*(char **)(param_3 + 4),DAT_00011aa0), iVar1 != 0))
    goto LAB_00011a88;
    uVar3 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_24,10);
    uVar2 = DAT_00011aa4;
    *(undefined4 *)(iVar6 + 0xcec) = uVar3;
    iVar6 = *(int *)(param_1 + 0x210);
    uVar3 = *(undefined4 *)(iVar6 + 0xcec);
  }
  snprintf_res(iVar5,uVar2,uVar3,iVar6,iVar7);
  return 0;
}



/* ===== ssv_cmd_flowctl @ 00011ab0 size=174 ===== */

undefined4 ssv_cmd_flowctl(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x9c0;
  if ((param_2 == 2) && (iVar1 = strcmp(*(char **)(param_3 + 4),DAT_00011b60), iVar1 == 0)) {
    snprintf_res(iVar3,DAT_00011b64,*(undefined1 *)(*(int *)(param_1 + 0x210) + 0xd14),
                 *(int *)(param_1 + 0x210),param_4);
    snprintf_res(iVar3,DAT_00011b68,*(undefined1 *)(*(int *)(param_1 + 0x210) + 0xcf0));
    snprintf_res(iVar3,DAT_00011b6c,*(undefined4 *)(*(int *)(param_1 + 0x210) + 0xcf4));
    snprintf_res(iVar3,DAT_00011b70,*(undefined4 *)(*(int *)(param_1 + 0x210) + 0xcf8));
    snprintf_res(iVar3,DAT_00011b74,*(undefined4 *)(param_1 + 0xcb4));
    snprintf_res(iVar3,DAT_00011b78,*(undefined4 *)(param_1 + 0xcb8));
    snprintf_res(iVar3,DAT_00011b7c,*(undefined4 *)(param_1 + 0xcbc));
    snprintf_res(iVar3,DAT_00011b80,*(undefined4 *)(param_1 + 0x998));
    uVar2 = DAT_00011b84;
    if ((*(uint *)(param_1 + 0x878) & 0x400) == 0) {
      uVar2 = DAT_00011b88;
    }
    snprintf_res(iVar3,DAT_00011b8c,uVar2);
  }
  else {
    snprintf_res(iVar3,DAT_00011b90);
  }
  return 0;
}



/* ===== ssv_cmd_directack @ 00011b94 size=72 ===== */

undefined4 ssv_cmd_directack(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x9c0;
  if ((param_2 == 2) && (iVar1 = strcmp(*(char **)(param_3 + 4),DAT_00011bdc), iVar1 == 0)) {
    uVar2 = DAT_00011be0;
    if ((*(uint *)(param_1 + 0x878) & 0x40) == 0) {
      uVar2 = DAT_00011be4;
    }
    snprintf_res(iVar3,DAT_00011be8,uVar2,DAT_00011be4,param_4);
    snprintf_res(iVar3,DAT_00011bec,*(undefined4 *)(param_1 + 0xcf0));
  }
  else {
    snprintf_res(iVar3,DAT_00011bf0);
  }
  return 0;
}



/* ===== ssv_cmd_tool @ 00011bf4 size=384 ===== */

undefined4 ssv_cmd_tool(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *__s1;
  uint uVar8;
  int iVar9;
  int local_2c;
  uint local_28;
  undefined4 uStack_24;
  
  iVar9 = param_1 + 0x9c0;
  iVar4 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  uStack_24 = param_4;
  if (param_2 == 4) {
    iVar2 = strcmp(*(char **)(param_3 + 4),DAT_00011d74);
    if (iVar2 == 0) {
      uVar3 = simple_strtoul(*(undefined4 *)(param_3 + 8),&uStack_24,0x10);
      local_2c = simple_strtoul(*(undefined4 *)(param_3 + 0xc),&uStack_24,0x10);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
                (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),uVar3,local_2c);
      uVar3 = DAT_00011d78;
      goto LAB_00011c3c;
    }
LAB_00011c4a:
    iVar2 = strcmp(*(char **)(param_3 + 4),DAT_00011d7c);
    if (iVar2 == 0) {
      if (param_2 == 3) {
        iVar4 = 1;
      }
      else {
        iVar4 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),&uStack_24,10);
      }
      uVar3 = DAT_00011d94;
      iVar5 = simple_strtoul(*(undefined4 *)(param_3 + 8),&uStack_24,0x10);
      for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
                  (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar5 + iVar2 * 4,&local_2c);
        snprintf_res(iVar9,uVar3,local_2c);
      }
      return 0;
    }
  }
  else if (param_2 - 3U < 2) goto LAB_00011c4a;
  if (param_2 != 3) {
    return 0xffffffff;
  }
  __s1 = *(char **)(param_3 + 4);
  iVar2 = strcmp(__s1,DAT_00011d80);
  if (iVar2 == 0) {
    local_2c = simple_strtoul(*(undefined4 *)(param_3 + 8),&uStack_24,10);
    iVar4 = (**(code **)(*(int *)(param_1 + 0x210) + 0x204))(*(int *)(param_1 + 0x210),local_2c);
    uVar3 = DAT_00011d84;
    if (iVar4 == 0) {
LAB_00011c3c:
      snprintf_res(iVar9,uVar3);
      return 0;
    }
    snprintf_res(iVar9,DAT_00011d88);
  }
  else {
    iVar2 = strcmp(__s1,DAT_00011d8c);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    local_2c = simple_strtoul(*(undefined4 *)(param_3 + 8),&uStack_24,10);
    uVar3 = DAT_00011d98;
    iVar2 = *(int *)(param_1 + 0x210);
    uVar7 = local_2c << 0x10 | 0x80000000;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar2 + 0x14),uVar7,&local_28,iVar2,iVar4);
    uVar1 = DAT_00011d9c;
    local_28 = local_28 & 0xffff;
    snprintf_res(iVar9,DAT_00011d90,local_2c);
    uVar8 = 0;
    if (0x400 < local_28) {
      local_28 = 0x400;
    }
    while (iVar4 = uVar7 + uVar8, uVar8 < local_28) {
      uVar8 = uVar8 + 4;
      (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
                (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar4,&local_2c);
      uVar6 = uVar3;
      if ((uVar8 & 0x1f) != 0) {
        uVar6 = uVar1;
      }
      snprintf_res(iVar9,uVar6,local_2c);
    }
  }
  return 0;
}



/* ===== ssv_cmd_sdio @ 00011da0 size=188 ===== */

undefined4 ssv_cmd_sdio(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int local_20;
  int iStack_1c;
  
  iVar6 = *(int *)(param_1 + 0x210);
  iVar7 = *(int *)(iVar6 + 0xc);
  local_20 = param_1;
  iStack_1c = param_2;
  if (param_2 == 4) {
    iVar1 = strcmp(*(char **)(param_3 + 4),DAT_00011e5c);
    if (iVar1 == 0) {
      iVar2 = strcmp(*(char **)(param_3 + 8),DAT_00011e60);
      iVar1 = 0;
      uVar3 = DAT_00011e78;
      if (iVar2 == 0) {
        uVar3 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),&iStack_1c,0x10);
        pcVar5 = *(code **)(iVar7 + 0x48);
        uVar4 = DAT_00011e64;
        if (pcVar5 == (code *)0x0) {
LAB_00011de4:
          snprintf_res(param_1 + 0x9c0,uVar4);
          return 0;
        }
        iVar1 = (*pcVar5)(*(undefined4 *)(iVar6 + 8),uVar3,&local_20);
        uVar3 = DAT_00011e78;
        if (-1 < iVar1) {
          uVar3 = DAT_00011e68;
          iVar1 = local_20;
        }
      }
      goto LAB_00011e00;
    }
  }
  else if ((param_2 == 5) && (iVar1 = strcmp(*(char **)(param_3 + 4),DAT_00011e5c), iVar1 == 0)) {
    iVar2 = strcmp(*(char **)(param_3 + 8),DAT_00011e6c);
    iVar1 = 0;
    uVar3 = DAT_00011e78;
    if (iVar2 == 0) {
      uVar3 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),&iStack_1c,0x10);
      local_20 = simple_strtoul(*(undefined4 *)(param_3 + 0x10),&iStack_1c,0x10);
      pcVar5 = *(code **)(iVar7 + 0x4c);
      uVar4 = DAT_00011e70;
      if ((pcVar5 == (code *)0x0) ||
         (iVar1 = (*pcVar5)(*(undefined4 *)(iVar6 + 8),uVar3,local_20), uVar4 = DAT_00011e74,
         uVar3 = DAT_00011e78, -1 < iVar1)) goto LAB_00011de4;
    }
    goto LAB_00011e00;
  }
  iVar1 = 0;
  uVar3 = DAT_00011e78;
LAB_00011e00:
  snprintf_res(param_1 + 0x9c0,uVar3,iVar1);
  return 0;
}



/* ===== ssv_cmd_mac @ 00011e7c size=688 ===== */

undefined4 ssv_cmd_mac(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uStack_1c;
  
  iVar6 = param_1 + 0x9c0;
  uStack_1c = param_4;
  if (param_2 == 3) {
    pcVar7 = *(char **)(param_3 + 4);
    iVar1 = strcmp(pcVar7,DAT_0001212c);
    if (iVar1 == 0) {
      iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00012130);
      uVar3 = DAT_00012134;
      uVar4 = (uint)(iVar1 == 0);
      *(bool *)(param_1 + 0x9b4) = iVar1 == 0;
    }
    else {
      iVar1 = strcmp(pcVar7,DAT_00012138);
      if (iVar1 == 0) {
        iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00012130);
        uVar3 = DAT_0001213c;
        uVar4 = (uint)(iVar1 == 0);
        *(bool *)(param_1 + 0x9b5) = iVar1 == 0;
      }
      else {
        iVar1 = strcmp(pcVar7,DAT_00012140);
        if ((iVar1 == 0) && (iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00012144), iVar1 == 0)) {
          snprintf_res(iVar6,DAT_00012148,*(undefined4 *)(param_1 + 0x284));
          snprintf_res(iVar6,DAT_0001214c,*(undefined4 *)(param_1 + 0x288));
          snprintf_res(iVar6,DAT_00012150,*(undefined4 *)(param_1 + 0x28c));
          snprintf_res(iVar6,DAT_00012154,*(undefined4 *)(param_1 + 0x290));
          snprintf_res(iVar6,DAT_00012158,*(undefined4 *)(param_1 + 0x298));
          snprintf_res(iVar6,DAT_0001215c,*(undefined4 *)(param_1 + 0x294));
          snprintf_res(iVar6,DAT_00012160,*(undefined4 *)(param_1 + 0x29c));
          snprintf_res(iVar6,DAT_00012164,*(undefined4 *)(param_1 + 0x2a0));
          snprintf_res(iVar6,DAT_00012168,*(undefined4 *)(param_1 + 0x2a4));
          snprintf_res(iVar6,DAT_0001216c,*(undefined4 *)(param_1 + 0x2a8));
          uVar4 = *(uint *)(param_1 + 0x2ac);
          uVar3 = DAT_00012170;
        }
        else {
          iVar1 = strcmp(pcVar7,DAT_00012174);
          if ((iVar1 == 0) && (iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00012144), iVar1 == 0)) {
            snprintf_res(iVar6,DAT_00012178,*(undefined4 *)(param_1 + 0x260));
            snprintf_res(iVar6,DAT_0001217c,*(undefined4 *)(param_1 + 0x268));
            snprintf_res(iVar6,DAT_00012180,*(undefined4 *)(param_1 + 0x264));
            snprintf_res(iVar6,DAT_00012184,*(undefined4 *)(param_1 + 0x26c));
            snprintf_res(iVar6,DAT_00012188,*(undefined4 *)(param_1 + 0x270));
            snprintf_res(iVar6,DAT_0001218c,*(undefined4 *)(param_1 + 0x274));
            snprintf_res(iVar6,DAT_00012190,*(undefined4 *)(param_1 + 0x278));
            snprintf_res(iVar6,DAT_00012194,*(undefined4 *)(param_1 + 0x27c));
            uVar4 = *(uint *)(param_1 + 0x280);
            uVar3 = DAT_00012198;
          }
          else {
            iVar1 = strcmp(pcVar7,DAT_000121b0);
            if ((iVar1 != 0) || (iVar1 = strcmp(*(char **)(param_3 + 8),DAT_000121a0), iVar1 != 0))
            goto LAB_0001210a;
            if (-1 < *(int *)(param_1 + 0x878) << 0x1c) {
              snprintf_res(iVar6,DAT_000121b8);
              return 0;
            }
            uVar4 = *(uint *)(param_1 + 0x880);
            uVar3 = DAT_000121b4;
          }
        }
      }
    }
LAB_00011eb2:
    snprintf_res(iVar6,uVar3,uVar4);
    return 0;
  }
  if (param_2 == 4) {
    iVar1 = param_1;
    iVar8 = param_3;
    iVar2 = strcmp(*(char **)(param_3 + 4),DAT_0001219c);
    if ((iVar2 == 0) && (iVar2 = strcmp(*(char **)(param_3 + 8),DAT_000121a0), iVar2 == 0)) {
      pcVar7 = *(char **)(param_3 + 0xc);
      iVar2 = strcmp(pcVar7,DAT_000121a4);
      if (iVar2 == 0) {
        *(uint *)(param_1 + 0x878) = *(uint *)(param_1 + 0x878) & 0xfffffff7;
        return 0;
      }
      uVar4 = simple_strtoul(pcVar7,&uStack_1c,10);
      if (uVar4 < 0x27) {
        *(uint *)(param_1 + 0x880) = uVar4;
        uVar3 = DAT_000121ac;
        uVar5 = *(uint *)(param_1 + 0x878) | 8;
        *(uint *)(param_1 + 0x878) = uVar5;
        snprintf_res(iVar6,uVar3,uVar4,uVar5,iVar1,param_2,iVar8);
        return 0;
      }
      snprintf_res(iVar6,DAT_000121a8,uVar4);
      return 0xffffffff;
    }
  }
  else if ((param_2 == 2) && (iVar1 = strcmp(*(char **)(param_3 + 4),DAT_000121bc), iVar1 == 0)) {
    snprintf_res(iVar6,DAT_000121c0);
    iVar1 = *(int *)(param_1 + 0x210);
    snprintf_res(iVar6,DAT_000121c4,*(undefined4 *)(iVar1 + 0x374),*(undefined4 *)(iVar1 + 0x380),
                 *(undefined4 *)(iVar1 + 0x378),param_2,param_3);
    snprintf_res(iVar6,DAT_000121c8);
    snprintf_res(iVar6,DAT_000121cc,*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x398),
                 *(undefined4 *)(*(int *)(param_1 + 0x210) + 0x39c));
    snprintf_res(iVar6,DAT_000121d0,*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x368));
    uVar4 = *(uint *)(*(int *)(param_1 + 0x210) + 0x36c);
    uVar3 = DAT_000121d4;
    goto LAB_00011eb2;
  }
LAB_0001210a:
  snprintf_res(iVar6,DAT_000121d8);
  snprintf_res(iVar6,DAT_000121dc);
  snprintf_res(iVar6,DAT_000121e0);
  snprintf_res(iVar6,DAT_000121e4);
  return 0;
}



/* ===== ssv_cmd_irq @ 000121e8 size=292 ===== */

undefined4 ssv_cmd_irq(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_30;
  int local_2c;
  int iStack_28;
  
  iVar4 = param_1 + 0x9c0;
  iStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  if (param_2 < 3) {
LAB_000122fa:
    snprintf_res(iVar4,DAT_0001234c);
  }
  else {
    pcVar3 = *(char **)(param_3 + 4);
    iVar5 = *(int *)(param_1 + 0x210);
    iVar6 = *(int *)(iVar5 + 0xc);
    iVar1 = strcmp(pcVar3,DAT_0001230c);
    if (iVar1 == 0) {
      pcVar3 = *(char **)(param_3 + 8);
      iVar1 = strcmp(pcVar3,DAT_00012310);
      if ((iVar1 == 0) && (param_2 == 4)) {
        local_2c = simple_strtoul(*(undefined4 *)(param_3 + 0xc),&iStack_30,0x10);
        uVar2 = DAT_00012314;
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x210) + 0xc) + 0x20) != 0) {
          (**(code **)(iVar6 + 0x20))(*(undefined4 *)(iVar5 + 8),local_2c);
          uVar2 = DAT_00012318;
LAB_00012258:
          snprintf_res(iVar4,uVar2,local_2c);
          return 0;
        }
      }
      else {
        iVar1 = strcmp(pcVar3,DAT_0001231c);
        if (iVar1 == 0) {
          uVar2 = DAT_00012320;
          if (*(code **)(iVar6 + 0x24) != (code *)0x0) {
            (**(code **)(iVar6 + 0x24))(*(undefined4 *)(iVar5 + 8));
            uVar2 = DAT_00012324;
          }
        }
        else {
          iVar1 = strcmp(pcVar3,DAT_00012328);
          if (iVar1 != 0) {
            return 0xffffffff;
          }
          uVar2 = DAT_0001232c;
          if (*(code **)(iVar6 + 0x28) != (code *)0x0) {
            (**(code **)(iVar6 + 0x28))(*(undefined4 *)(iVar5 + 8),0);
            uVar2 = DAT_00012330;
          }
        }
      }
    }
    else {
      if ((param_2 != 3) || (iVar1 = strcmp(pcVar3,DAT_00012334), iVar1 != 0)) goto LAB_000122fa;
      pcVar3 = *(char **)(param_3 + 8);
      iVar1 = strcmp(pcVar3,DAT_00012310);
      if (iVar1 == 0) {
        uVar2 = DAT_00012338;
        if (*(code **)(iVar6 + 0x1c) != (code *)0x0) {
          (**(code **)(iVar6 + 0x1c))(*(undefined4 *)(iVar5 + 8),&local_2c);
          snprintf_res(iVar4,DAT_0001233c,local_2c,*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x24));
          return 0;
        }
      }
      else {
        iVar1 = strcmp(pcVar3,DAT_00012340);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        uVar2 = DAT_00012344;
        if (*(code **)(iVar6 + 0x2c) != (code *)0x0) {
          (**(code **)(iVar6 + 0x2c))(*(undefined4 *)(iVar5 + 8),&local_2c);
          uVar2 = DAT_00012348;
          goto LAB_00012258;
        }
      }
    }
    snprintf_res(iVar4,uVar2);
  }
  return 0;
}



/* ===== ssv_cmd_hwq @ 00012350 size=766 ===== */

undefined4 ssv_cmd_hwq(int param_1)

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
  int iVar14;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  iVar14 = param_1 + 0x9c0;
  local_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c[0] = 0;
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1b8))
            (*(int *)(param_1 + 0x210),&local_50,&local_4c,&local_48);
  snprintf_res(iVar14,DAT_00012650);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_50,0);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_50,1);
  uVar3 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_50,3);
  uVar4 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_50,4);
  uVar5 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_50,5);
  uVar6 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_4c,6);
  uVar7 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_4c,7);
  uVar8 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_4c,8);
  uVar9 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_4c,9);
  uVar10 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_4c,10);
  uVar11 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_4c,0xb);
  uVar12 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_48,0xc);
  uVar13 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b0))(local_48,0xf);
  snprintf_res(iVar14,DAT_00012654,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
               uVar11,uVar12,uVar13);
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1bc))(*(int *)(param_1 + 0x210),&local_50,&local_4c);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_50,0);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_50,1);
  uVar3 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_50,3);
  uVar4 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_4c,4);
  uVar5 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_50,5);
  uVar6 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_50,6);
  uVar7 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_50,7);
  uVar8 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_50,8);
  uVar9 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_50,9);
  uVar10 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_4c,10);
  uVar11 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_4c,0xb);
  uVar12 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_4c,0xc);
  uVar13 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1b4))(local_4c,0xf);
  snprintf_res(iVar14,DAT_00012658,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
               uVar11,uVar12,uVar13);
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1c0))(*(int *)(param_1 + 0x210),&local_44,&uStack_40);
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1d4))(*(int *)(param_1 + 0x210),&local_3c);
  snprintf_res(iVar14,DAT_0001265c,local_44,uStack_40,local_3c);
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1c4))
            (*(int *)(param_1 + 0x210),&local_38,&local_34,&local_30,local_2c);
  snprintf_res(iVar14,DAT_00012660,local_2c[0],local_30,local_34,local_38);
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1c8))
            (*(int *)(param_1 + 0x210),&local_38,&local_34,&local_30,local_2c);
  snprintf_res(iVar14,DAT_00012664,local_2c[0],local_30,local_34,local_38);
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1cc))
            (*(int *)(param_1 + 0x210),&local_38,&local_34,&local_30,local_2c);
  snprintf_res(iVar14,DAT_00012668,local_2c[0],local_30,local_34,local_38);
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1d0))(*(int *)(param_1 + 0x210),&local_50);
  snprintf_res(iVar14,DAT_0001266c,local_50);
  return 0;
}



/* ===== ssv_cmd_dump @ 00012670 size=492 ===== */

undefined4 ssv_cmd_dump(int param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  char *__s1;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_2 == 2) {
    __s1 = *(char **)(param_3 + 4);
    iVar1 = strcmp(__s1,DAT_00012860);
    if (iVar1 == 0) {
      pcVar2 = *(code **)(*(int *)(param_1 + 0x210) + 0x1a8);
    }
    else {
      iVar1 = strcmp(__s1,DAT_00012864);
      if (iVar1 == 0) {
        pcVar2 = *(code **)(*(int *)(param_1 + 0x210) + 0x1ac);
      }
      else {
        iVar1 = strcmp(__s1,DAT_00012868);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = strcmp(__s1,DAT_0001286c);
        if (iVar1 == 0) {
          pcVar2 = *(code **)(*(int *)(param_1 + 0x210) + 0x328);
        }
        else {
          iVar1 = strcmp(__s1,DAT_00012870);
          if (iVar1 != 0) {
            iVar1 = strcmp(__s1,DAT_00012874);
            if (iVar1 == 0) {
              piVar3 = *(int **)(param_1 + 0x210);
              iVar1 = *piVar3 + 0x9c0;
              snprintf_res(iVar1,DAT_00012878);
              snprintf_res(iVar1,DAT_0001287c,piVar3 + 0x1ef);
              snprintf_res(iVar1,DAT_00012880,(int)piVar3 + 0x7c2);
              snprintf_res(iVar1,DAT_00012884,piVar3[0x1ea]);
              snprintf_res(iVar1,DAT_00012888,piVar3[0x1e9]);
              snprintf_res(iVar1,DAT_0001288c,piVar3[0x1eb]);
              snprintf_res(iVar1,DAT_00012890,piVar3[0x1ec]);
              snprintf_res(iVar1,DAT_00012894,piVar3 + 0x281);
              snprintf_res(iVar1,DAT_00012898,piVar3 + 0x2e1);
              snprintf_res(iVar1,DAT_0001289c,piVar3 + 0x301);
              snprintf_res(iVar1,DAT_000128a0,piVar3[0x321]);
              snprintf_res(iVar1,DAT_000128a4,piVar3[0x323]);
              snprintf_res(iVar1,DAT_000128a8,piVar3[0x324]);
              snprintf_res(iVar1,DAT_000128ac,piVar3[0x1ed]);
              snprintf_res(iVar1,DAT_000128b0,piVar3 + 0x2c1);
              snprintf_res(iVar1,DAT_000128b4,piVar3[0x1ee]);
              snprintf_res(iVar1,DAT_000128b8,piVar3[0x325]);
              snprintf_res(iVar1,DAT_000128bc,piVar3[0x326]);
              snprintf_res(iVar1,DAT_000128c0,piVar3[0x327]);
              snprintf_res(iVar1,DAT_000128c4,piVar3[0x328]);
              snprintf_res(iVar1,DAT_000128c8,piVar3[0x329]);
              snprintf_res(iVar1,DAT_000128cc,piVar3[0x32a]);
              snprintf_res(iVar1,DAT_000128d0,piVar3[0x32b]);
              snprintf_res(iVar1,DAT_000128d4,piVar3[0x336]);
              snprintf_res(iVar1,DAT_000128d8,piVar3[0x337]);
              snprintf_res(iVar1,DAT_000128dc,piVar3[0x338]);
              snprintf_res(iVar1,DAT_000128e0,piVar3[0x339]);
              snprintf_res(iVar1,DAT_000128e4,piVar3[0x33a]);
              snprintf_res(iVar1,DAT_000128e8);
              return 0;
            }
            goto LAB_0001267c;
          }
          pcVar2 = *(code **)(*(int *)(param_1 + 0x210) + 0x32c);
        }
      }
    }
    uVar4 = (*pcVar2)();
  }
  else {
LAB_0001267c:
    snprintf_res(param_1 + 0x9c0,DAT_0001285c);
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== ssv_cmd_regw @ 000128ec size=74 ===== */

undefined4 ssv_cmd_regw(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_18;
  int iStack_14;
  int iStack_10;
  
  local_18 = param_1;
  iStack_14 = param_2;
  iStack_10 = param_3;
  if ((param_2 == 2) &&
     (iVar1 = sscanf(*(char **)(param_3 + 4),DAT_00012938,&local_18,&iStack_14), iVar1 == 2)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),local_18,iStack_14);
    snprintf_res(param_1 + 0x9c0,DAT_00012940,local_18,iStack_14);
  }
  else {
    snprintf_res(param_1 + 0x9c0,DAT_0001293c);
  }
  return 0;
}



/* ===== ssv_cmd_regr @ 00012944 size=120 ===== */

undefined4 ssv_cmd_regr(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_24;
  int iStack_20;
  uint local_1c;
  
  uVar2 = DAT_000129cc;
  local_24 = param_2;
  iStack_20 = param_3;
  local_1c = param_4;
  if (param_2 == 2) {
    iVar1 = sscanf(*(char **)(param_3 + 4),DAT_000129bc,&local_24,&local_1c,param_1);
    if (iVar1 != 2) {
      iVar1 = sscanf(*(char **)(param_3 + 4),DAT_000129c0,&local_24);
      uVar2 = DAT_000129c8;
      if (iVar1 != 1) goto LAB_00012988;
      local_1c = 1;
    }
    uVar2 = DAT_000129c4;
    for (uVar3 = 0; uVar3 < local_1c; uVar3 = uVar3 + 1) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
                (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),local_24,&iStack_20);
      snprintf_res(param_1 + 0x9c0,uVar2,local_24,iStack_20);
      local_24 = local_24 + 4;
    }
  }
  else {
LAB_00012988:
    snprintf_res(param_1 + 0x9c0,uVar2);
  }
  return 0;
}



/* ===== ssv_cmd_reg @ 000129d0 size=510 ===== */

undefined4 ssv_cmd_reg(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_70;
  undefined1 auStack_6c [4];
  int local_68 [8];
  undefined4 local_48 [9];
  
  iVar9 = param_1 + 0x9c0;
  if (param_2 == 4) {
    iVar3 = strcmp(*(char **)(param_3 + 4),DAT_00012bd0);
    if (iVar3 == 0) {
      uVar4 = simple_strtoul(*(undefined4 *)(param_3 + 8),auStack_6c,0x10);
      local_70 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),auStack_6c,0x10);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
                (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),uVar4,local_70);
      snprintf_res(iVar9,DAT_00012bd4,uVar4,local_70);
      return 0;
    }
LAB_00012a34:
    iVar3 = strcmp(*(char **)(param_3 + 4),DAT_00012bd8);
    if (iVar3 == 0) {
      if (param_2 == 3) {
        uVar5 = 1;
      }
      else {
        uVar5 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),auStack_6c,10);
      }
      uVar10 = 0;
      iVar3 = simple_strtoul(*(undefined4 *)(param_3 + 8),auStack_6c,0x10);
      uVar2 = DAT_00012c08;
      uVar1 = DAT_00012be0;
      snprintf_res(iVar9,DAT_00012bdc,iVar3);
      while (iVar6 = uVar10 * 4, uVar4 = DAT_00012be0, uVar10 != uVar5) {
        uVar10 = uVar10 + 1;
        (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
                  (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar3 + iVar6,&local_70);
        snprintf_res(iVar9,uVar2,local_70);
        if ((uVar10 & 7) == 0) {
          snprintf_res(iVar9,uVar1);
        }
      }
    }
    else {
      if (param_2 == 5) {
LAB_00012ab4:
        iVar3 = strcmp(*(char **)(param_3 + 4),DAT_00012be4);
        if (iVar3 != 0) goto LAB_00012bb2;
        iVar6 = simple_strtoul(*(undefined4 *)(param_3 + 8),auStack_6c,0x10);
        local_70 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),auStack_6c,0x10);
        iVar7 = simple_strtoul(*(undefined4 *)(param_3 + 0x10),auStack_6c,0x10);
        for (iVar3 = 0; iVar3 != iVar7; iVar3 = iVar3 + 1) {
          local_48[iVar3] = local_70;
          local_68[iVar3] = iVar6 + iVar3 * 4;
        }
        iVar3 = (**(code **)(*(int *)(param_1 + 0x210) + 0x200))();
        uVar4 = DAT_00012be8;
        if (-1 < iVar3) goto LAB_00012a7c;
      }
      else {
        if ((param_2 != 4) || (iVar3 = strcmp(*(char **)(param_3 + 4),DAT_00012bec), iVar3 != 0))
        goto LAB_00012bb2;
        iVar6 = simple_strtoul(*(undefined4 *)(param_3 + 8),auStack_6c,0x10);
        uVar5 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),auStack_6c,0x10);
        piVar8 = local_68;
        for (iVar3 = iVar6; iVar3 != iVar6 + uVar5 * 4; iVar3 = iVar3 + 4) {
          *piVar8 = iVar3;
          piVar8 = piVar8 + 1;
        }
        iVar3 = (**(code **)(*(int *)(param_1 + 0x210) + 0x1fc))
                          (*(int *)(param_1 + 0x210),local_68,local_48,uVar5 & 0xff);
        uVar4 = DAT_00012c0c;
        if (-1 < iVar3) {
          snprintf_res(iVar9,DAT_00012bf0,iVar6);
          snprintf_res(iVar9,DAT_00012bf4,uVar5);
          for (uVar10 = 0; uVar10 != uVar5; uVar10 = uVar10 + 1) {
            snprintf_res(iVar9,uVar4,local_68[uVar10],local_48[uVar10]);
          }
          return 0;
        }
      }
      uVar4 = DAT_00012bf8;
      if (iVar3 != -0x5f) {
        return 0xffffffff;
      }
    }
LAB_00012a7c:
    snprintf_res(iVar9,uVar4);
  }
  else {
    if (param_2 - 3U < 2) goto LAB_00012a34;
    if (param_2 == 5) goto LAB_00012ab4;
LAB_00012bb2:
    snprintf_res(iVar9,DAT_00012bfc);
    snprintf_res(iVar9,DAT_00012c00);
    snprintf_res(iVar9,DAT_00012c04);
  }
  return 0;
}



/* ===== ssv_cmd_help @ 00012c10 size=62 ===== */

undefined4 ssv_cmd_help(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00012c54;
  param_1 = param_1 + 0x9c0;
  iVar3 = 0;
  snprintf_res(param_1,DAT_00012c50);
  uVar1 = DAT_00012c5c;
  while( true ) {
    if (*(int *)(iVar2 + 0x30) == 0) break;
    snprintf_res(param_1,uVar1,*(int *)(iVar2 + 0x30),*(undefined4 *)(iVar2 + 0x38));
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  }
  snprintf_res(param_1,DAT_00012c58,iVar3);
  return 0;
}



/* ===== ssv_cmd_check @ 00012c60 size=254 ===== */

undefined4 ssv_cmd_check(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_44;
  uint local_40;
  undefined1 auStack_3c [4];
  undefined4 local_38 [5];
  
  (**(code **)(*(int *)(param_1 + 0x210) + 0x1f8))(local_38);
  if (param_2 == 2) {
    iVar5 = 0;
    snprintf_res(param_1 + 0x9c0,DAT_00012d64,local_38[0],local_38[1],local_38[2],local_38[3]);
    uVar1 = simple_strtoul(*(undefined4 *)(param_3 + 4),auStack_3c,10);
    puVar3 = local_38;
    do {
      iVar4 = 0x20;
      (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
                (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),*puVar3,&local_40);
      do {
        if (local_40 == 0) break;
        if ((int)(local_40 << 0x1f) < 0) {
          printk(DAT_00012d68);
          iVar2 = iVar5 * 0x200000 + -0x7fe00000 + iVar4 * -0x10000;
          for (uVar8 = 0; uVar8 < uVar1 >> 2; uVar8 = uVar8 + 8) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
                      (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar2,&local_44);
            printk(DAT_00012d70,iVar2,local_44);
            iVar6 = iVar2 + 4;
            do {
              iVar7 = iVar6 + 4;
              (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
                        (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar6,&local_44);
              printk(DAT_00012d74,local_44);
              iVar6 = iVar7;
            } while (iVar2 + 0x20 != iVar7);
            iVar2 = iVar2 + 0x20;
          }
          printk(DAT_00012d6c);
        }
        iVar4 = iVar4 + -1;
        local_40 = local_40 >> 1;
      } while (iVar4 != 0);
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != 4);
  }
  else {
    snprintf_res(param_1 + 0x9c0,DAT_00012d60);
  }
  return 0;
}



/* ===== ssv_cmd_hw_temp @ 00012d78 size=128 ===== */

undefined4 ssv_cmd_hw_temp(int param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x9c0;
  uVar3 = DAT_00012df8;
  if (param_2 == 1) {
    iVar1 = ssv_skb_alloc(param_1,0x14);
    if (iVar1 == 0) {
      printk(DAT_00012dfc);
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x50) = 0x14;
    *(undefined4 *)(iVar1 + 0x54) = 0x14;
    puVar2 = memset(*(void **)(iVar1 + 0xa4),0,0x14);
    *(undefined1 *)((int)puVar2 + 3) = 0x1a;
    *(undefined1 *)(puVar2 + 1) = 5;
    *(undefined1 *)(puVar2 + 7) = 0x1a;
    *(undefined1 *)(puVar2 + 6) = 0;
    *(undefined1 *)((int)puVar2 + 0xd) = 0;
    *(undefined1 *)((int)puVar2 + 0xf) = 0;
    *puVar2 = *(undefined2 *)(iVar1 + 0x54);
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
                      (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
    uVar3 = DAT_00012e08;
    if (iVar1 == 0) {
      snprintf_res(iVar4,DAT_00012e00);
      snprintf_res(iVar4,DAT_00012e04,*(undefined4 *)(param_1 + 0x14a0));
      return 0;
    }
  }
  snprintf_res(iVar4,uVar3);
  return 0;
}



/* ===== ssv_cmd_chan @ 00012e0c size=404 ===== */

undefined4 ssv_cmd_chan(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char *__s2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined2 uVar10;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [10];
  undefined2 local_46;
  
  iVar9 = param_1 + 0x9c0;
  uVar5 = DAT_00012fd8;
  if (1 < param_2 - 2U) goto LAB_00012e8a;
  pcVar8 = *(char **)(param_3 + 4);
  if (param_2 == 2) {
    iVar3 = strcmp(pcVar8,DAT_00012fa0);
    __s2 = DAT_00012fa4;
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x878) = *(uint *)(param_1 + 0x878) | 0x100;
      iVar3 = strcmp(*(char **)(param_3 + 4),__s2);
      uVar5 = DAT_00012fac;
      uVar4 = DAT_00012fb0;
      if (iVar3 != 0) goto LAB_00012e4e;
    }
    else {
      iVar3 = strcmp(pcVar8,DAT_00012fa4);
      if (iVar3 != 0) goto LAB_00012e7a;
    }
    uVar4 = DAT_00012fa8;
    *(uint *)(param_1 + 0x878) = *(uint *)(param_1 + 0x878) & 0xfffffeff;
    uVar5 = DAT_00012fac;
    goto LAB_00012e4e;
  }
LAB_00012e7a:
  uVar4 = simple_strtoul(pcVar8,auStack_54,0);
  uVar5 = DAT_00012fb4;
  if (uVar4 == 0) goto LAB_00012e8a;
  if (param_2 == 3) {
    pcVar8 = *(char **)(param_3 + 8);
    iVar3 = strcmp(pcVar8,DAT_00012fb8);
    if (iVar3 == 0) {
      if (8 < uVar4 - 3) {
        if (uVar4 - 0x26 < 0x15) {
          if (-1 < (int)((DAT_00012fbc >> (uVar4 - 0x26 & 0xff)) << 0x1f)) goto LAB_00012ee8;
        }
        else if ((uVar4 & 0xffffffbf) != 0x3e) {
LAB_00012ee8:
          if (((0x14 < uVar4 - 0x66) ||
              (-1 < (int)((DAT_00012fbc >> (uVar4 - 0x66 & 0xff)) << 0x1f))) &&
             ((uVar5 = DAT_00012fb4, 0x1d < uVar4 - 0x82 ||
              (-1 < (int)((DAT_00012fc0 >> (uVar4 - 0x82 & 0xff)) << 0x1f))))) goto LAB_00012e8a;
        }
      }
      uVar4 = uVar4 - 2;
      uVar10 = 3;
    }
    else {
      iVar3 = strcmp(pcVar8,DAT_00012fc4);
      if (iVar3 == 0) {
        uVar10 = 3;
        uVar5 = DAT_00012fb4;
        if (uVar4 - 8 < 6) goto LAB_00012e8a;
      }
      else {
        iVar3 = strcmp(pcVar8,DAT_00012fc8);
        uVar5 = DAT_00012fb4;
        if ((iVar3 != 0) || (uVar4 - 1 < 4)) goto LAB_00012e8a;
        uVar10 = 2;
      }
    }
  }
  else {
    uVar10 = 1;
  }
  iVar7 = 0;
  bVar2 = false;
  iVar3 = param_1;
  do {
    if ((iVar7 != 1) || (*(int *)(*(int *)(param_1 + 0x210) + 0x7a4) << 0x1c < 0)) {
      iVar6 = 0;
      while (iVar6 < *(int *)(iVar3 + 0x3c)) {
        iVar1 = iVar6 * 0x38;
        iVar6 = iVar6 + 1;
        if (*(ushort *)(iVar1 + *(int *)(iVar3 + 0x30) + 10) == uVar4) {
          bVar2 = true;
        }
      }
    }
    iVar7 = iVar7 + 1;
    iVar3 = iVar3 + 0x5c;
  } while (iVar7 != 5);
  uVar5 = DAT_00012fd4;
  if (!bVar2) {
LAB_00012e4e:
    snprintf_res(iVar9,uVar5,uVar4);
    return 0;
  }
  memset(auStack_50,0,0x38);
  local_46 = (undefined2)uVar4;
  snprintf_res(iVar9,DAT_00012fcc,uVar4);
  *(undefined2 *)(param_1 + 0x202) = uVar10;
  *(undefined2 *)(param_1 + 0x200) = local_46;
  (**(code **)(*(int *)(param_1 + 0x210) + 0x31c))(param_1,auStack_50,uVar10,0);
  uVar5 = DAT_00012fd0;
LAB_00012e8a:
  snprintf_res(iVar9,uVar5);
  return 0;
}



/* ===== ssv_cmd_cfg @ 00012fdc size=202 ===== */

undefined4 ssv_cmd_cfg(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_000130c8;
  param_1 = param_1 + 0x9c0;
  if (param_2 == 2) {
    pcVar5 = *(char **)(param_3 + 4);
    iVar2 = strcmp(pcVar5,DAT_000130a8);
    if (iVar2 == 0) {
      memset(DAT_000130ac,0,0x614);
      return 0;
    }
    iVar2 = strcmp(pcVar5,DAT_000130b0);
    puVar1 = DAT_000130ac;
    if (iVar2 == 0) {
      snprintf_res(param_1,DAT_000130b4);
      snprintf_res(param_1,DAT_000130b8,*puVar1);
      snprintf_res(param_1,DAT_000130bc,puVar1[1]);
      snprintf_res(param_1,DAT_000130c0,*(undefined1 *)(puVar1 + 6),
                   *(undefined1 *)((int)puVar1 + 0x19),*(undefined1 *)((int)puVar1 + 0x1a),
                   *(undefined1 *)((int)puVar1 + 0x1b),*(undefined1 *)(puVar1 + 7),
                   *(undefined1 *)((int)puVar1 + 0x1d));
      uVar4 = DAT_000130c4;
LAB_00013058:
      snprintf_res(param_1,uVar4);
      return 0;
    }
  }
  else if (param_2 == 4) {
    iVar6 = 0;
    iVar7 = DAT_000130c8 + 0x2a0;
    while( true ) {
      pcVar5 = *(char **)(iVar6 * 0x14 + iVar7);
      if (pcVar5 == (char *)0x0) break;
      iVar3 = strcmp(pcVar5,*(char **)(param_3 + 4));
      if (iVar3 == 0) {
        iVar2 = iVar2 + iVar6 * 0x14;
        (**(code **)(iVar2 + 0x2ac))
                  (*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(iVar2 + 0x2a4),
                   *(undefined4 *)(iVar2 + 0x2a8));
        uVar4 = DAT_000130cc;
        goto LAB_00013058;
      }
      iVar6 = iVar6 + 1;
    }
  }
  return 0xffffffff;
}



/* ===== ssv_loopback_thread @ 000130d0 size=164 ===== */

void ssv_loopback_thread(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined1 *puVar2;
  undefined2 *__s;
  
  while( true ) {
    iVar1 = kthread_should_stop();
    if ((iVar1 != 0) || (*(int *)(param_1 + 0xce0) == 0)) goto LAB_00013100;
    *(int *)(param_1 + 0xce0) = *(int *)(param_1 + 0xce0) + -1;
    iVar1 = ssv_skb_alloc(param_1,*(undefined4 *)(param_1 + 0xcdc));
    if (iVar1 == 0) break;
    skb_put(iVar1,*(undefined4 *)(param_1 + 0xcdc));
    __s = *(undefined2 **)(iVar1 + 0xa4);
    memset(__s,0,*(size_t *)(param_1 + 0xcdc));
    *(byte *)(__s + 1) = *(byte *)(__s + 1) & 0xf8 | 5;
    *__s = *(undefined2 *)(param_1 + 0xcdc);
    __aeabi_uidivmod(*(undefined4 *)(param_1 + 0xce0),0xff);
    puVar2 = (undefined1 *)((int)__s + 0xf);
    *(undefined1 *)((int)__s + 3) = 0x13;
    *(undefined4 *)(__s + 4) = extraout_r1;
    while (puVar2 + (-0xf - (int)__s) < (undefined1 *)(*(int *)(param_1 + 0xcdc) + -0x10)) {
      puVar2 = puVar2 + 1;
      *puVar2 = (char)*(undefined4 *)(__s + 4);
    }
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
    msleep(5);
  }
  printk(DAT_00013174);
LAB_00013100:
  *(undefined4 *)(param_1 + 0xcd4) = 0;
  return;
}



/* ===== ssv_cmd_rxtput @ 00013178 size=168 ===== */

undefined4 ssv_cmd_rxtput(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  uint local_20;
  undefined4 local_1c;
  
  uVar3 = DAT_00013220;
  if (param_2 == 3) {
    local_20 = simple_strtoul(*(undefined4 *)(param_3 + 4),auStack_24,10);
    local_1c = simple_strtoul(*(undefined4 *)(param_3 + 8),auStack_24,10);
    uVar3 = DAT_00013224;
    if (local_20 < 0x901) {
      snprintf_res(param_1 + 0x9c0,DAT_00013228,local_20,local_1c);
      iVar1 = ssv_skb_alloc(param_1,0x18);
      if (iVar1 == 0) {
        printk(DAT_0001322c);
        return 0;
      }
      *(undefined4 *)(iVar1 + 0x50) = 0x18;
      *(undefined4 *)(iVar1 + 0x54) = 0x18;
      puVar2 = memset(*(void **)(iVar1 + 0xa4),0,0x14);
      *(undefined1 *)(puVar2 + 1) = 5;
      *(undefined1 *)((int)puVar2 + 3) = 4;
      *puVar2 = *(undefined2 *)(iVar1 + 0x54);
      *(uint *)(puVar2 + 8) = local_20;
      *(undefined4 *)(puVar2 + 10) = local_1c;
      iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
                        (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
      uVar3 = DAT_00013234;
      if (iVar1 == 0) {
        uVar3 = DAT_00013230;
      }
    }
  }
  snprintf_res(param_1 + 0x9c0,uVar3);
  return 0;
}



/* ===== ssv_cmd_restart @ 00013238 size=44 ===== */

undefined4 ssv_cmd_restart(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013268;
  *(int *)(DAT_00013264 + 0x614) = *(int *)(DAT_00013264 + 0x614) + 1;
  snprintf_res(param_1 + 0x9c0,uVar1);
  queue_work_on(1,*(undefined4 *)(param_1 + 0x888),param_1 + 0x18);
  return 0;
}



/* ===== ssv_cmd_version @ 0001326c size=148 ===== */

void ssv_cmd_version(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_38;
  char local_34 [24];
  int local_1c;
  
  piVar1 = DAT_00013300;
  iVar2 = param_1 + 0x9c0;
  local_1c = *DAT_00013300;
  local_34[0] = '\0';
  local_34[1] = '\0';
  local_34[2] = '\0';
  local_34[3] = '\0';
  memset(local_34 + 4,0,0x14);
  snprintf_res(iVar2,DAT_00013308,DAT_00013304);
  snprintf_res(iVar2,DAT_0001330c,*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x60),
               *(undefined4 *)(*(int *)(param_1 + 0x210) + 100));
  (**(code **)(*(int *)(param_1 + 0x210) + 0xa0))();
  strcpy(local_34,(char *)(*(int *)(param_1 + 0x210) + 0x44));
  snprintf_res(iVar2,DAT_00013310,local_34);
  snprintf_res(iVar2,DAT_00013314,0xaa);
  snprintf_res(iVar2,DAT_0001331c,DAT_00013318);
  (**(code **)(*(int *)(param_1 + 0x210) + 0x144))(*(int *)(param_1 + 0x210),&local_38);
  snprintf_res(iVar2,DAT_00013320,local_38);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}



/* ===== ssv_cmd_hci @ 00013324 size=312 ===== */

undefined4 ssv_cmd_hci(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *__s1;
  undefined4 uVar11;
  
  iVar9 = param_1 + 0x9c0;
  if (param_2 == 3) {
    __s1 = *(char **)(param_3 + 4);
    iVar8 = *(int *)(*(int *)(param_1 + 0x210) + 0x14);
    iVar5 = param_3;
    iVar3 = strcmp(__s1,DAT_0001345c);
    if ((iVar3 == 0) &&
       (iVar3 = strcmp(*(char **)(param_3 + 8),DAT_00013460), uVar6 = DAT_0001349c,
       uVar2 = DAT_00013498, uVar7 = DAT_00013464, iVar3 == 0)) {
      iVar3 = iVar8 + 0x3c;
      do {
        uVar11 = *(undefined4 *)(iVar3 + -4);
        uVar1 = *(undefined1 *)(iVar3 + 0x18);
        uVar4 = mutex_is_locked(iVar3);
        iVar10 = iVar3 + 0x28;
        snprintf_res(iVar9,uVar2,uVar11,uVar1,uVar4,param_2,iVar5);
        snprintf_res(iVar9,uVar6,*(undefined4 *)(iVar3 + 0x14));
        snprintf_res(iVar9,uVar7,*(undefined4 *)(iVar3 + 0x1c));
        iVar3 = iVar10;
      } while (iVar10 != iVar8 + 0x21c);
      return 0;
    }
    iVar5 = strcmp(__s1,DAT_00013468);
    if ((iVar5 == 0) && (iVar5 = strcmp(*(char **)(param_3 + 8),DAT_00013460), iVar5 == 0)) {
      snprintf_res(iVar9,DAT_0001346c,*(undefined4 *)(iVar8 + 0x34));
      uVar2 = DAT_00013474;
      uVar7 = DAT_00013470;
      uVar6 = DAT_00013470;
      if ((*(uint *)(iVar8 + 0x34) & 1) == 0) {
        uVar6 = DAT_00013474;
      }
      snprintf_res(iVar9,DAT_00013478,uVar6);
      uVar6 = uVar7;
      if ((*(uint *)(iVar8 + 0x34) & 2) == 0) {
        uVar6 = uVar2;
      }
      snprintf_res(iVar9,DAT_0001347c,uVar6);
      uVar6 = uVar7;
      if ((*(uint *)(iVar8 + 0x34) & 4) == 0) {
        uVar6 = uVar2;
      }
      snprintf_res(iVar9,DAT_00013480,uVar6);
      uVar6 = uVar7;
      if ((*(uint *)(iVar8 + 0x34) & 8) == 0) {
        uVar6 = uVar2;
      }
      snprintf_res(iVar9,DAT_00013484,uVar6);
      if ((*(uint *)(iVar8 + 0x34) & 0x10) == 0) {
        uVar7 = uVar2;
      }
      snprintf_res(iVar9,DAT_00013488,uVar7);
      return 0;
    }
    iVar5 = strcmp(__s1,DAT_0001348c);
    if ((iVar5 == 0) && (iVar5 = strcmp(*(char **)(param_3 + 8),DAT_00013460), iVar5 == 0)) {
      snprintf_res(iVar9,DAT_00013490,*(undefined4 *)(iVar8 + 0x228),*(undefined4 *)(iVar8 + 0x22c))
      ;
      return 0;
    }
  }
  snprintf_res(iVar9,DAT_00013494);
  return 0;
}



/* ===== __string2flag32 @ 000134a0 size=66 ===== */

undefined4 __string2flag32(char *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 < 0x20) {
    iVar1 = strcmp(param_1,DAT_000134e4);
    if (iVar1 == 0) {
      *param_2 = *param_2 | 1 << (param_3 & 0xff);
      return 0;
    }
    iVar1 = strcmp(param_1,DAT_000134e8);
    if (iVar1 == 0) {
      *param_2 = *param_2 & ~(1 << (param_3 & 0xff));
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== ssv_cmd_init @ 000134ec size=66 ===== */

undefined4 ssv_cmd_init(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_3 + 4),DAT_00013530);
  uVar2 = DAT_00013538;
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 0x210) + 0x2cc))(*(int *)(param_1 + 0x210),0);
    (**(code **)(*(int *)(param_1 + 0x210) + 0x70))();
    (**(code **)(*(int *)(param_1 + 0x210) + 0x2cc))(*(int *)(param_1 + 0x210),1);
    uVar2 = DAT_00013534;
  }
  snprintf_res(param_1 + 0x9c0,uVar2);
  return 0;
}



/* ===== _ssv6xxx_adapt_opertaion @ 0001353c size=120 ===== */

undefined4 _ssv6xxx_adapt_opertaion(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = ssv_skb_alloc(param_1,0x20,param_3,param_4,param_4);
  if (iVar1 == 0) {
    printk(DAT_000135b8,DAT_000135b4);
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar1 + 0x50) = 0x20;
    *(undefined4 *)(iVar1 + 0x54) = 0x20;
    puVar3 = memset(*(void **)(iVar1 + 0xa4),0,0x24);
    puVar3[2] = 5;
    *(uint *)(puVar3 + 4) = param_2;
    puVar3[3] = 0x18;
    if (param_3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(puVar3 + 0x10);
      puVar5 = param_3;
      do {
        puVar6 = puVar5 + 1;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar6;
      } while (puVar6 != param_3 + 4);
    }
    uVar2 = 0;
    puVar3[1] = 0;
    *puVar3 = 0x20;
    *(uint *)(puVar3 + 0xc) = param_2 | 0x180000;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
  }
  return uVar2;
}



/* ===== ssv_cmd_set_adapt @ 000135bc size=124 ===== */

undefined4 ssv_cmd_set_adapt(int param_1,int param_2,int param_3)

{
  undefined1 auStack_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  memset(&local_28,0,0x10);
  if (param_2 == 5) {
    snprintf_res(param_1 + 0x9c0,DAT_00013638,*(undefined4 *)(param_3 + 4),
                 *(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),
                 *(undefined4 *)(param_3 + 0x10));
    local_28 = simple_strtoul(*(undefined4 *)(param_3 + 4),auStack_2c,0);
    local_24 = simple_strtoul(*(undefined4 *)(param_3 + 8),auStack_2c,0);
    local_20 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),auStack_2c,0);
    local_1c = simple_strtoul(*(undefined4 *)(param_3 + 0x10),auStack_2c,0);
    _ssv6xxx_adapt_opertaion(param_1,3,&local_28);
  }
  else {
    snprintf_res(param_1 + 0x9c0,DAT_0001363c);
  }
  return 0;
}



/* ===== ssv_cmd_adapt @ 00013640 size=124 ===== */

undefined4 ssv_cmd_adapt(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *__s1;
  
  iVar2 = param_1 + 0x9c0;
  if (param_2 == 2) {
    __s1 = *(char **)(param_3 + 4);
    iVar1 = strcmp(__s1,DAT_000136bc);
    if (iVar1 == 0) {
      snprintf_res(iVar2,DAT_000136c0);
      *(undefined1 *)(param_1 + 0x149c) = 1;
      _ssv6xxx_adapt_opertaion(param_1,1,0);
      return 0;
    }
    iVar1 = strcmp(__s1,DAT_000136c4);
    if (iVar1 == 0) {
      snprintf_res(iVar2,DAT_000136c8);
      _ssv6xxx_adapt_opertaion(param_1,2,0);
      *(undefined1 *)(param_1 + 0x149c) = 0;
      return 0;
    }
  }
  snprintf_res(iVar2,DAT_000136cc);
  snprintf_res(iVar2,DAT_000136d0);
  snprintf_res(iVar2,DAT_000136d4);
  return 0;
}



/* ===== ssv6xxx_send_ble_packet @ 000136d8 size=106 ===== */

void ssv6xxx_send_ble_packet(int param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = param_3 + 0x10;
  iVar1 = ssv_skb_alloc(param_1,iVar3,param_3,param_4,param_1,param_2);
  if (iVar1 == 0) {
    printk(DAT_00013748,DAT_00013744);
    return;
  }
  *(int *)(iVar1 + 0x50) = iVar3;
  *(int *)(iVar1 + 0x54) = iVar3;
  puVar2 = memset(*(void **)(iVar1 + 0xa4),0,0x14);
  *(undefined1 *)(puVar2 + 1) = 5;
  *(undefined1 *)((int)puVar2 + 3) = 0x16;
  *puVar2 = *(undefined2 *)(iVar1 + 0x54);
  memcpy(puVar2 + 8,param_2,param_3);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x30))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1,10,0,0);
  return;
}



/* ===== _ssv6xxx_tx_opertaion @ 0001374c size=108 ===== */

undefined4 _ssv6xxx_tx_opertaion(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  iVar1 = __netdev_alloc_skb(0,0x14,0xa20);
  if (iVar1 == 0) {
    printk(DAT_000137bc,DAT_000137b8);
    uVar2 = 0xffffffff;
  }
  else {
    skb_put(iVar1,0x14);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    memset(puVar3 + 2,0,0x16);
    *(uint *)(puVar3 + 4) = param_2;
    *(undefined4 *)(puVar3 + 0x10) = param_3;
    puVar3[2] = 5;
    *(uint *)(puVar3 + 0xc) = param_2 | 0x110000;
    uVar2 = 0;
    puVar3[3] = 0x11;
    puVar3[1] = 0;
    *puVar3 = 0x14;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
  }
  return uVar2;
}



/* ===== ssv_cmd_fwtxops @ 000137c0 size=256 ===== */

undefined4 ssv_cmd_fwtxops(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  int iVar5;
  char *__s1;
  int iStack_24;
  int iStack_20;
  
  iVar5 = param_1 + 0x9c0;
  iStack_24 = param_2;
  iStack_20 = param_3;
  if (param_2 == 3) {
    __s1 = *(char **)(param_3 + 4);
    iVar3 = param_1;
    iVar1 = strcmp(__s1,DAT_000138c0);
    if (iVar1 == 0) {
      snprintf_res(iVar5,DAT_000138c4,*(undefined4 *)(param_3 + 8),extraout_r3,iVar3);
      uVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_24,0);
      uVar4 = 1;
    }
    else {
      iVar1 = strcmp(__s1,DAT_000138c8);
      if (iVar1 == 0) {
        snprintf_res(iVar5,DAT_000138cc,*(undefined4 *)(param_3 + 8),extraout_r3_00,iVar3);
        uVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_24,0);
        uVar4 = 2;
      }
      else {
        iVar1 = strcmp(__s1,DAT_000138d0);
        if (iVar1 == 0) {
          snprintf_res(iVar5,DAT_000138d4,*(undefined4 *)(param_3 + 8),extraout_r3_01,iVar3);
          uVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_24,0);
          uVar4 = 4;
        }
        else {
          iVar1 = strcmp(__s1,DAT_000138d8);
          if (iVar1 == 0) {
            snprintf_res(iVar5,DAT_000138dc,*(undefined4 *)(param_3 + 8),extraout_r3_02,iVar3);
            uVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_24,0);
            uVar4 = 3;
          }
          else {
            iVar3 = strcmp(__s1,DAT_000138e0);
            if (iVar3 != 0) goto LAB_0001389e;
            snprintf_res(iVar5,DAT_000138e4,*(undefined4 *)(param_3 + 8));
            uVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_24,0);
            uVar4 = 5;
          }
        }
      }
    }
    _ssv6xxx_tx_opertaion(param_1,uVar4,uVar2);
  }
  else {
LAB_0001389e:
    snprintf_res(iVar5,DAT_000138e8);
    snprintf_res(iVar5,DAT_000138ec);
    snprintf_res(iVar5,DAT_000138f0);
    snprintf_res(iVar5,DAT_000138f4);
  }
  return 0;
}



/* ===== kzalloc.constprop.9 @ 000138f8 size=8 ===== */

void kzalloc_constprop_9(undefined4 param_1)

{
  __kmalloc(param_1,0xdc0);
  return;
}



/* ===== ssv_cmd_log @ 00013900 size=1226 ===== */

undefined4 ssv_cmd_log(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_20;
  char *local_1c;
  
  iVar5 = param_1 + 0x9c0;
  local_20 = 0;
  local_1c = (char *)0x0;
  if (param_2 == 3) {
    pcVar6 = *(char **)(param_3 + 4);
    iVar1 = strcmp(pcVar6,DAT_00013ba8);
    if (iVar1 == 0) {
      iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013bac);
      if (iVar1 == 0) {
        uVar3 = *(uint *)(param_1 + 0x9bc) | 1;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x9bc) & 0xfffffffe;
      }
      *(uint *)(param_1 + 0x9bc) = uVar3;
      uVar2 = DAT_00013bb4;
      pcVar6 = DAT_00013bac;
      if ((uVar3 & 1) == 0) {
        pcVar6 = DAT_00013bb0;
      }
    }
    else {
      iVar1 = strcmp(pcVar6,DAT_00013bbc);
      if (iVar1 == 0) {
        iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013bac);
        if (iVar1 == 0) {
          uVar3 = *(uint *)(param_1 + 0x9bc) | 0x100;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x9bc) & 0xfffffeff;
        }
        *(uint *)(param_1 + 0x9bc) = uVar3;
        uVar2 = DAT_00013bc0;
        pcVar6 = DAT_00013bac;
        if ((uVar3 & 0x100) == 0) {
          pcVar6 = DAT_00013bb0;
        }
      }
      else {
        iVar1 = strcmp(pcVar6,DAT_00013bc4);
        if (iVar1 == 0) {
          iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013bac);
          if (iVar1 == 0) {
            uVar3 = *(uint *)(param_1 + 0x9bc) | 0x80;
          }
          else {
            uVar3 = *(uint *)(param_1 + 0x9bc) & 0xffffff7f;
          }
          *(uint *)(param_1 + 0x9bc) = uVar3;
          uVar2 = DAT_00013bc8;
          pcVar6 = DAT_00013bac;
          if ((uVar3 & 0x80) == 0) {
            pcVar6 = DAT_00013bb0;
          }
        }
        else {
          iVar1 = strcmp(pcVar6,DAT_00013bec);
          if (iVar1 == 0) {
            iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013bac);
            if (iVar1 == 0) {
              uVar3 = *(uint *)(param_1 + 0x9bc) | 0x10;
            }
            else {
              uVar3 = *(uint *)(param_1 + 0x9bc) & 0xffffffef;
            }
            *(uint *)(param_1 + 0x9bc) = uVar3;
            uVar2 = DAT_00013bf0;
            pcVar6 = DAT_00013bac;
            if ((uVar3 & 0x10) == 0) {
              pcVar6 = DAT_00013bb0;
            }
          }
          else {
            iVar1 = strcmp(pcVar6,DAT_00013bf4);
            if (iVar1 == 0) {
              iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013bac);
              if (iVar1 == 0) {
                uVar3 = *(uint *)(param_1 + 0x9bc) | 0x10000;
              }
              else {
                uVar3 = *(uint *)(param_1 + 0x9bc) & 0xfffeffff;
              }
              *(uint *)(param_1 + 0x9bc) = uVar3;
              uVar2 = DAT_00013bf8;
              pcVar6 = DAT_00013bac;
              if ((uVar3 & 0x10000) == 0) {
                pcVar6 = DAT_00013bb0;
              }
            }
            else {
              iVar1 = strcmp(pcVar6,DAT_00013bfc);
              if (iVar1 == 0) {
                iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013bac);
                if (iVar1 == 0) {
                  uVar3 = *(uint *)(param_1 + 0x9bc) | 0x20;
                }
                else {
                  uVar3 = *(uint *)(param_1 + 0x9bc) & 0xffffffdf;
                }
                *(uint *)(param_1 + 0x9bc) = uVar3;
                uVar2 = DAT_00013c00;
                pcVar6 = DAT_00013bac;
                if ((uVar3 & 0x20) == 0) {
                  pcVar6 = DAT_00013bb0;
                }
              }
              else {
                iVar1 = strcmp(pcVar6,DAT_00013c04);
                if (iVar1 == 0) {
                  iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013bac);
                  if (iVar1 == 0) {
                    uVar3 = *(uint *)(param_1 + 0x9bc) | 0x40;
                  }
                  else {
                    uVar3 = *(uint *)(param_1 + 0x9bc) & 0xffffffbf;
                  }
                  *(uint *)(param_1 + 0x9bc) = uVar3;
                  uVar2 = DAT_00013c08;
                  pcVar6 = DAT_00013bac;
                  if ((uVar3 & 0x40) == 0) {
                    pcVar6 = DAT_00013bb0;
                  }
                }
                else {
                  iVar1 = strcmp(pcVar6,DAT_00013c0c);
                  if (iVar1 == 0) {
                    iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013bac);
                    if (iVar1 == 0) {
                      uVar3 = *(uint *)(param_1 + 0x9bc) | 0x200;
                    }
                    else {
                      uVar3 = *(uint *)(param_1 + 0x9bc) & 0xfffffdff;
                    }
                    *(uint *)(param_1 + 0x9bc) = uVar3;
                    uVar2 = DAT_00013c10;
                    pcVar6 = DAT_00013bac;
                    if ((uVar3 & 0x200) == 0) {
                      pcVar6 = DAT_00013bb0;
                    }
                  }
                  else {
                    iVar1 = strcmp(pcVar6,DAT_00013e38);
                    if (iVar1 == 0) {
                      iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013e3c);
                      if (iVar1 != 0) {
                        *(uint *)(param_1 + 0x9bc) = *(uint *)(param_1 + 0x9bc) & 0xfffffbff;
                        iVar4 = *(int *)(*(int *)(param_1 + 0x210) + 4);
                      }
                      else {
                        *(uint *)(param_1 + 0x9bc) = *(uint *)(param_1 + 0x9bc) | 0x400;
                        iVar4 = *(int *)(*(int *)(param_1 + 0x210) + 4);
                      }
                      *(bool *)(iVar4 + 0x30) = iVar1 == 0;
                      uVar2 = DAT_00013e44;
                      pcVar6 = DAT_00013e3c;
                      if ((*(uint *)(param_1 + 0x9bc) & 0x400) == 0) {
                        pcVar6 = DAT_00013e40;
                      }
                    }
                    else {
                      iVar1 = strcmp(pcVar6,DAT_00013e48);
                      if (iVar1 == 0) {
                        iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013e3c);
                        if (iVar1 == 0) {
                          uVar3 = *(uint *)(param_1 + 0x9bc) | 0x2000;
                        }
                        else {
                          uVar3 = *(uint *)(param_1 + 0x9bc) & 0xffffdfff;
                        }
                        *(uint *)(param_1 + 0x9bc) = uVar3;
                        uVar2 = DAT_00013e4c;
                        pcVar6 = DAT_00013e3c;
                        if ((uVar3 & 0x2000) == 0) {
                          pcVar6 = DAT_00013e40;
                        }
                      }
                      else {
                        iVar1 = strcmp(pcVar6,DAT_00013e50);
                        if (iVar1 == 0) {
                          iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013e3c);
                          if (iVar1 == 0) {
                            uVar3 = *(uint *)(param_1 + 0x9bc) | 0x8000;
                          }
                          else {
                            uVar3 = *(uint *)(param_1 + 0x9bc) & 0xffff7fff;
                          }
                          *(uint *)(param_1 + 0x9bc) = uVar3;
                          uVar2 = DAT_00013e54;
                          pcVar6 = DAT_00013e3c;
                          if ((uVar3 & 0x8000) == 0) {
                            pcVar6 = DAT_00013e40;
                          }
                        }
                        else {
                          iVar1 = strcmp(pcVar6,DAT_00013e58);
                          if (iVar1 == 0) {
                            iVar1 = sscanf(*(char **)(param_3 + 8),DAT_00013e5c,&local_20);
                            if (iVar1 == 1) {
                              *(undefined4 *)(param_1 + 0x9bc) = local_20;
                            }
                            else {
                              snprintf_res(iVar5,DAT_00013e60);
                            }
                            uVar2 = DAT_00013e64;
                            pcVar6 = *(char **)(param_1 + 0x9bc);
                          }
                          else {
                            iVar1 = strcmp(pcVar6,DAT_00013e68);
                            if (iVar1 == 0) {
                              iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013e3c);
                              uVar2 = DAT_00013e6c;
                              pcVar6 = DAT_00013e3c;
                              *(bool *)(param_1 + 0x9cd) = iVar1 == 0;
                              if (iVar1 != 0) {
                                pcVar6 = DAT_00013e40;
                              }
                              goto LAB_00013954;
                            }
                            iVar1 = strcmp(pcVar6,DAT_00013e70);
                            if (iVar1 == 0) {
                              iVar1 = sscanf(*(char **)(param_3 + 8),DAT_00013e74,&local_1c);
                              uVar2 = DAT_00013e80;
                              if (iVar1 != 1) goto LAB_00013a8a;
                              if (*(int *)(param_1 + 0x9d8) != 0) {
                                kfree();
                                memset((void *)(param_1 + 0x9d0),0,0x18);
                              }
                              uVar2 = DAT_00013e7c;
                              pcVar6 = local_1c;
                              if (local_1c != (char *)0x0) {
                                if (*(int *)(param_1 + 0x9d8) != 0) {
                                  kfree();
                                }
                                iVar4 = (int)local_1c * 0x400;
                                iVar1 = kzalloc_constprop_9(iVar4);
                                *(int *)(param_1 + 0x9d8) = iVar1;
                                uVar2 = DAT_00013e78;
                                pcVar6 = local_1c;
                                if (iVar1 != 0) {
                                  *(int *)(param_1 + 0x9dc) = iVar1;
                                  *(int *)(param_1 + 0x9e0) = iVar1;
                                  *(undefined4 *)(param_1 + 0x9d0) = 0;
                                  *(int *)(param_1 + 0x9d4) = iVar4;
                                  *(int *)(param_1 + 0x9e4) = iVar1 + iVar4;
                                  uVar2 = DAT_00013e7c;
                                }
                              }
                              goto LAB_00013954;
                            }
                            iVar1 = strcmp(pcVar6,DAT_00013e84);
                            if (iVar1 == 0) {
                              iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013e3c);
                              if (iVar1 == 0) {
                                uVar3 = *(uint *)(param_1 + 0x9bc) | 0x1000;
                              }
                              else {
                                uVar3 = *(uint *)(param_1 + 0x9bc) & 0xffffefff;
                              }
                              *(uint *)(param_1 + 0x9bc) = uVar3;
                              uVar2 = DAT_00013e88;
                              pcVar6 = DAT_00013e3c;
                              if ((uVar3 & 0x1000) == 0) {
                                pcVar6 = DAT_00013e40;
                              }
                            }
                            else {
                              iVar1 = strcmp(pcVar6,DAT_00013e8c);
                              if (iVar1 != 0) goto LAB_00013e0a;
                              iVar1 = strcmp(*(char **)(param_3 + 8),DAT_00013e3c);
                              if (iVar1 == 0) {
                                uVar3 = *(uint *)(param_1 + 0x9bc) | 0x4000;
                              }
                              else {
                                uVar3 = *(uint *)(param_1 + 0x9bc) & 0xffffbfff;
                              }
                              *(uint *)(param_1 + 0x9bc) = uVar3;
                              uVar2 = DAT_00013e90;
                              pcVar6 = DAT_00013e3c;
                              if ((uVar3 & 0x4000) == 0) {
                                pcVar6 = DAT_00013e40;
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
  else {
    if ((param_2 != 4) || (iVar1 = strcmp(*(char **)(param_3 + 4),DAT_00013bcc), iVar1 != 0)) {
LAB_00013e0a:
      snprintf_res(iVar5,DAT_00013e94);
      snprintf_res(iVar5,DAT_00013e98);
      snprintf_res(iVar5,DAT_00013e9c);
      snprintf_res(iVar5,DAT_00013ea0);
      snprintf_res(iVar5,DAT_00013ea4);
      uVar2 = DAT_00013ea8;
LAB_00013a8a:
      snprintf_res(iVar5,uVar2);
      return 0;
    }
    pcVar6 = *(char **)(param_3 + 8);
    iVar1 = strcmp(pcVar6,DAT_00013bd0);
    if (iVar1 == 0) {
      iVar1 = strcmp(*(char **)(param_3 + 0xc),DAT_00013bac);
      if (iVar1 == 0) {
        uVar3 = *(uint *)(param_1 + 0x9bc) | 2;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x9bc) & 0xfffffffd;
      }
      *(uint *)(param_1 + 0x9bc) = uVar3;
      uVar2 = DAT_00013bd4;
      pcVar6 = DAT_00013bac;
      if ((uVar3 & 2) == 0) {
        pcVar6 = DAT_00013bb0;
      }
    }
    else {
      iVar1 = strcmp(pcVar6,DAT_00013bd8);
      if (iVar1 == 0) {
        iVar1 = strcmp(*(char **)(param_3 + 0xc),DAT_00013bac);
        if (iVar1 == 0) {
          uVar3 = *(uint *)(param_1 + 0x9bc) | 4;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x9bc) & 0xfffffffb;
        }
        *(uint *)(param_1 + 0x9bc) = uVar3;
        uVar2 = DAT_00013bdc;
        pcVar6 = DAT_00013bac;
        if ((uVar3 & 4) == 0) {
          pcVar6 = DAT_00013bb0;
        }
      }
      else {
        iVar1 = strcmp(pcVar6,DAT_00013be0);
        uVar2 = DAT_00013be8;
        if (iVar1 != 0) goto LAB_00013a8a;
        iVar1 = strcmp(*(char **)(param_3 + 0xc),DAT_00013bac);
        if (iVar1 == 0) {
          uVar3 = *(uint *)(param_1 + 0x9bc) | 8;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x9bc) & 0xfffffff7;
        }
        *(uint *)(param_1 + 0x9bc) = uVar3;
        uVar2 = DAT_00013be4;
        pcVar6 = DAT_00013bac;
        if ((uVar3 & 8) == 0) {
          pcVar6 = DAT_00013bb0;
        }
      }
    }
  }
  snprintf_res(iVar5,uVar2,pcVar6);
  uVar2 = DAT_00013bb8;
  pcVar6 = *(char **)(param_1 + 0x9bc);
LAB_00013954:
  snprintf_res(iVar5,uVar2,pcVar6);
  return 0;
}



/* ===== ssv6xxx_dump_sta_info @ 00013eac size=266 ===== */

void ssv6xxx_dump_sta_info(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  uVar1 = DAT_00013fc8;
  iVar16 = param_1 + 0x9c0;
  snprintf_res(iVar16,DAT_00013fb8,*(undefined4 *)(param_1 + 0x91c));
  iVar18 = 0;
  iVar17 = 0;
  while( true ) {
    uVar2 = DAT_00013fcc;
    puVar14 = *(uint **)(param_1 + 0x2b0 + iVar17 * 0x274);
    if (puVar14 == (uint *)0x0) {
      snprintf_res(iVar16,DAT_00013fbc,iVar17);
    }
    else {
      uVar3 = (uint)*(ushort *)(param_1 + 0x200);
      uVar4 = (uint)*(byte *)(param_1 + 0x978);
      uVar5 = (uint)*(byte *)((int)puVar14 + 0x296);
      uVar6 = *puVar14;
      uVar7 = (uint)*(byte *)((int)puVar14 + 0x295);
      uVar8 = (uint)(byte)puVar14[0xa5];
      uVar9 = (uint)*(byte *)((int)puVar14 + 0x293);
      uVar10 = (uint)*(byte *)((int)puVar14 + 0x292);
      uVar11 = (uint)*(byte *)((int)puVar14 + 0x291);
      snprintf_res(iVar16,DAT_00013fc0,iVar17,(char)puVar14[0xa4],uVar11,uVar10,uVar9,uVar8,uVar7,
                   uVar6,uVar5,uVar4,uVar3);
      snprintf_res(iVar16,DAT_00013fc4,puVar14[0xb1]);
      for (puVar15 = (uint *)puVar14[0xaf]; puVar15 != puVar14 + 0xaf; puVar15 = (uint *)*puVar15) {
        iVar12 = puVar15[-2] * 0x18 + param_1;
        iVar13 = (uint)*(ushort *)(iVar12 + 0x79a) << 0x1f;
        if (iVar13 < 0) {
          uVar4 = (uint)*(ushort *)(iVar12 + 0x798);
          iVar13 = *(int *)(iVar12 + 0x7a0);
          uVar5 = *(uint *)(iVar12 + 0x79c);
          uVar6 = (uint)*(byte *)(iVar13 + 0x19);
          uVar7 = (uint)*(byte *)(iVar13 + 0x18);
          uVar8 = (uint)*(byte *)(iVar13 + 0x17);
          uVar9 = (uint)*(byte *)(iVar13 + 0x16);
          uVar10 = (uint)*(byte *)(iVar13 + 0x15);
          uVar11 = (uint)*(byte *)(iVar13 + 0x14);
          iVar12 = iVar18 + 1;
          snprintf_res(iVar16,uVar1,iVar18,*(undefined4 *)(iVar13 + 0x108),uVar11,uVar10,uVar9,uVar8
                       ,uVar7,uVar6,uVar5,uVar4,uVar3);
        }
        else {
          snprintf_res(iVar16,uVar2,iVar18,iVar13,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,
                       uVar3);
          iVar12 = iVar18;
        }
        iVar18 = iVar12;
      }
    }
    if (iVar17 != 0) break;
    iVar17 = 1;
  }
  return;
}



/* ===== ssv_cmd_sta @ 00013fd0 size=40 ===== */

undefined4 ssv_cmd_sta(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 2) || (iVar1 = strcmp(*(char **)(param_3 + 4),DAT_00013ff8), iVar1 != 0)) {
    snprintf_res(param_1 + 0x9c0,DAT_00013ffc);
  }
  else {
    ssv6xxx_dump_sta_info(param_1);
  }
  return 0;
}



/* ===== txtput_generate_m2 @ 00014000 size=46 ===== */

undefined4 txtput_generate_m2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0xcc8) = param_2;
  *(undefined4 *)(param_1 + 0xccc) = param_3;
  uVar1 = kthread_create_on_node(DAT_00014034,param_1,0xffffffff,DAT_00014030,param_4);
  if (uVar1 < 0xfffff001) {
    wake_up_process();
  }
  *(uint *)(param_1 + 0xcc0) = uVar1;
  return 0;
}



/* ===== ssv_cmd_txtput @ 00014038 size=160 ===== */

undefined4 ssv_cmd_txtput(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_1c;
  int iStack_18;
  
  iVar4 = param_1 + 0x9c0;
  iStack_1c = param_2;
  iStack_18 = param_3;
  if (param_2 == 2) {
    iVar1 = strcmp(*(char **)(param_3 + 4),DAT_000140d8);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0xcc0) == 0) {
        return 0;
      }
      printk(DAT_000140dc);
      kthread_stop(*(undefined4 *)(param_1 + 0xcc0));
      while (*(int *)(param_1 + 0xcc0) != 0) {
        msleep(1);
      }
      printk(DAT_000140e0);
      return 0;
    }
  }
  else if (param_2 == 3) {
    iVar1 = simple_strtoul(*(undefined4 *)(param_3 + 4),&iStack_1c,10,param_4,param_1);
    uVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_1c,10);
    snprintf_res(iVar4,DAT_000140f0,iVar1,uVar2);
    uVar3 = DAT_000140f4;
    if (*(int *)(param_1 + 0xcc0) == 0) {
      txtput_generate_m2(param_1,iVar1 + 0x50,uVar2);
      return 0;
    }
    goto LAB_00014094;
  }
  snprintf_res(iVar4,DAT_000140e4);
  snprintf_res(iVar4,DAT_000140e8);
  uVar3 = DAT_000140ec;
LAB_00014094:
  snprintf_res(iVar4,uVar3);
  return 0;
}



/* ===== ssv_loopback_generate @ 000140f8 size=56 ===== */

undefined4
ssv_loopback_generate(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0xcec) = param_3;
  *(undefined4 *)(param_1 + 0xce8) = 0;
  *(undefined4 *)(param_1 + 0xcdc) = param_2;
  *(undefined4 *)(param_1 + 0xce0) = param_3;
  uVar1 = kthread_create_on_node(DAT_00014134,param_1,0xffffffff,DAT_00014130,param_4);
  if (uVar1 < 0xfffff001) {
    wake_up_process();
  }
  *(uint *)(param_1 + 0xcd4) = uVar1;
  return 0;
}



/* ===== ssv_cmd_loopback @ 00014138 size=86 ===== */

undefined4 ssv_cmd_loopback(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iStack_1c;
  int iStack_18;
  
  uVar3 = DAT_00014190;
  iStack_1c = param_2;
  iStack_18 = param_3;
  if (param_2 == 3) {
    iVar1 = simple_strtoul(*(undefined4 *)(param_3 + 4),&iStack_1c,10,param_4,param_1);
    uVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_1c,10);
    uVar3 = DAT_00014194;
    if (iVar1 < 0x901) {
      snprintf_res(param_1 + 0x9c0,DAT_00014198,iVar1,uVar2);
      ssv_loopback_generate(param_1,iVar1,uVar2);
      return 0;
    }
  }
  snprintf_res(param_1 + 0x9c0,uVar3);
  return 0;
}



/* ===== ssv6xxx_ble_init @ 0001419c size=158 ===== */

void ssv6xxx_ble_init(int param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint local_1b;
  
  local_1b = param_2 & 0xffffff01;
  iVar3 = ssv_skb_alloc(param_1,0x1b);
  if (iVar3 == 0) {
    printk(DAT_00014240,DAT_0001423c);
  }
  else {
    *(undefined4 *)(iVar3 + 0x50) = 0x1b;
    *(undefined4 *)(iVar3 + 0x54) = 0x1b;
    puVar4 = memset(*(void **)(iVar3 + 0xa4),0,0x14);
    *(byte *)(puVar4 + 1) = *(byte *)(puVar4 + 1) & 0xf8 | 5;
    *(undefined1 *)((int)puVar4 + 3) = 0x15;
    *puVar4 = *(undefined2 *)(iVar3 + 0x54);
    *(uint *)(puVar4 + 8) = local_1b;
    uVar1 = DAT_00014244;
    *(undefined4 *)(puVar4 + 10) = 0;
    puVar4[0xc] = 0;
    uVar2 = DAT_00014248;
    *(undefined1 *)(puVar4 + 0xd) = 0;
    printk(uVar1,uVar2,local_1b);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x30))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar3,10,0,0);
  }
  return;
}



/* ===== ssv_cmd_ble @ 0001424c size=674 ===== */

void ssv_cmd_ble(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *__s1;
  int iVar5;
  undefined1 local_12c;
  undefined1 local_12b;
  undefined1 local_12a;
  undefined1 local_129;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_122;
  undefined1 local_121;
  undefined1 auStack_120 [244];
  int local_2c;
  
  piVar1 = DAT_000144f0;
  local_2c = *DAT_000144f0;
  iVar5 = param_1 + 0x9c0;
  memset(&local_12c,0,0x100);
  if (param_2 == 1) {
    snprintf_res(iVar5,DAT_000144f4);
    snprintf_res(iVar5,DAT_000144f8);
    snprintf_res(iVar5,DAT_000144fc);
    snprintf_res(iVar5,DAT_00014500);
    snprintf_res(iVar5,DAT_00014504);
    snprintf_res(iVar5,DAT_00014508);
    uVar4 = DAT_0001450c;
  }
  else {
    __s1 = *(char **)(param_3 + 4);
    iVar2 = strcmp(__s1,DAT_00014510);
    if (iVar2 == 0) {
      printk(DAT_00014514);
      ssv6xxx_ble_init(param_1,1);
      uVar4 = DAT_00014518;
    }
    else {
      iVar2 = strcmp(__s1,DAT_0001451c);
      if (iVar2 == 0) {
        memset(&local_12a,0,0xfe);
        local_12b = 3;
        local_12c = 1;
        local_12a = 0xc;
        ssv6xxx_send_ble_packet(param_1,&local_12c);
        snprintf_res(iVar5,DAT_00014520);
        memset(auStack_120,0,0xf4);
        local_12c = 1;
        local_12b = 1;
        local_12a = 0xc;
        local_129 = 8;
        local_128 = 0xff;
        local_127 = 0xff;
        local_126 = 0xff;
        local_125 = 0xff;
        local_124 = 0xff;
        local_123 = 0xff;
        local_122 = 0xff;
        local_121 = 0xff;
        ssv6xxx_send_ble_packet(param_1,&local_12c,0xc);
        snprintf_res(iVar5,DAT_00014524);
        local_12c = 1;
        local_12b = 1;
        local_12a = 0x20;
        local_129 = 8;
        local_128 = 0xff;
        local_127 = 0xff;
        local_126 = 0xff;
        local_125 = 0xff;
        local_124 = 0xff;
        local_123 = 0xff;
        local_122 = 0xff;
        local_121 = 0xff;
        ssv6xxx_send_ble_packet(param_1,&local_12c,0xc);
        uVar4 = DAT_00014528;
      }
      else {
        iVar2 = strcmp(__s1,DAT_0001452c);
        if (iVar2 != 0) goto LAB_000142ac;
        iVar2 = strcmp(*(char **)(param_3 + 8),DAT_00014530);
        if (iVar2 == 0) {
          memset(&local_128,0,0xfc);
          local_12c = 1;
          local_12b = 0xb;
          local_12a = 0x20;
          local_129 = 7;
          if (param_2 == 5) {
            uVar3 = simple_strtol(*(undefined4 *)(param_3 + 0xc),0,0x10);
            printk(DAT_00014534,(uVar3 & 0xffff) * 0x271);
            local_127 = (undefined1)uVar3;
            local_126 = (undefined1)(uVar3 >> 8);
            uVar3 = simple_strtol(*(undefined4 *)(param_3 + 0x10),0,0x10);
            printk(DAT_00014538,(uVar3 & 0xffff) * 0x271);
            local_125 = (undefined1)uVar3;
            local_124 = (undefined1)(uVar3 >> 8);
          }
          else {
            local_126 = 2;
            local_124 = 2;
          }
          local_123 = 0;
          local_122 = 0;
          ssv6xxx_send_ble_packet(param_1,&local_12c,0xb);
          snprintf_res(iVar5,DAT_0001453c);
          printk(DAT_00014540);
          memset(&local_126,0,0xfa);
          local_12b = 0xc;
          local_12a = 0x20;
          local_129 = 2;
          local_12c = 1;
          local_128 = 1;
          local_127 = 1;
          ssv6xxx_send_ble_packet(param_1,&local_12c,6);
          uVar4 = DAT_00014544;
        }
        else {
          memset(&local_128,0,0xfc);
          local_12c = 1;
          local_12b = 0xc;
          local_12a = 0x20;
          local_129 = 2;
          ssv6xxx_send_ble_packet(param_1,&local_12c,6);
          uVar4 = DAT_00014548;
        }
      }
    }
  }
  snprintf_res(iVar5,uVar4);
LAB_000142ac:
  if (local_2c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}



/* ===== ssv_cmd_submit @ 0001454c size=356 ===== */

undefined4 ssv_cmd_submit(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  undefined1 *puVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *local_48 [11];
  
  if (*(char *)(param_1 + 3) != '\0') {
    return 0xffffffff;
  }
  bVar3 = false;
  uVar9 = 0;
  do {
    pcVar8 = param_2;
    param_2 = pcVar8 + 1;
    cVar1 = *pcVar8;
    if (cVar1 == '\0') {
      if (bVar3) {
LAB_00014568:
        uVar9 = uVar9 + 1;
        puVar10 = DAT_000146b0;
      }
      else {
        if (uVar9 == 0) {
          puVar7 = (undefined1 *)kzalloc_constprop_9(0x40);
          *param_1 = puVar7;
          if (puVar7 == (undefined1 *)0x0) {
            return 0xfffffff2;
          }
          *puVar7 = 0;
          param_1[1] = 0;
          param_1[2] = 0x40;
          uVar2 = DAT_000146b4;
          *(undefined1 *)(param_1 + 3) = 1;
          snprintf_res(param_1,uVar2);
          return 0;
        }
LAB_0001459c:
        pcVar8[-1] = ' ';
        puVar10 = DAT_000146b0;
      }
      while( true ) {
        if ((char *)*puVar10 == (char *)0x0) {
          puVar7 = (undefined1 *)kzalloc_constprop_9(0x40);
          *param_1 = puVar7;
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = 0;
            param_1[1] = 0;
            param_1[2] = 0x40;
            uVar2 = DAT_000146cc;
            *(undefined1 *)(param_1 + 3) = 1;
            snprintf_res(param_1,uVar2);
          }
          return 0xfffffff2;
        }
        iVar5 = strcmp(local_48[0],(char *)*puVar10);
        if (iVar5 == 0) break;
        puVar10 = puVar10 + 4;
      }
      if ((puVar10[1] != DAT_000146b8) &&
         (((*(int *)(param_1[-0x1ec] + 8) == 0 || (*(int *)(param_1[-0x1ec] + 0xc) == 0)) ||
          (param_1[-0x26e] == 0)))) {
        puVar7 = (undefined1 *)kzalloc_constprop_9(0x80);
        *param_1 = puVar7;
        uVar2 = DAT_000146bc;
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 0;
          snprintf_res(param_1,uVar2);
          return 0xffffffff;
        }
        return 0xfffffff2;
      }
      puVar7 = (undefined1 *)kzalloc_constprop_9(puVar10[3]);
      *param_1 = puVar7;
      if (puVar7 == (undefined1 *)0x0) {
        return 0xfffffff2;
      }
      *puVar7 = 0;
      param_1[1] = 0;
      param_1[2] = puVar10[3];
      *(undefined1 *)(param_1 + 3) = 1;
      down_read(param_1 + 0x98);
      iVar5 = (*(code *)puVar10[1])(param_1 + -0x270,uVar9,local_48);
      up_read(param_1 + 0x98);
      if (iVar5 < 0) {
        strcpy((char *)*param_1,DAT_000146c0);
      }
      sVar6 = strlen((char *)*param_1);
      uVar4 = DAT_000146c4;
      iVar5 = puVar10[3];
      uVar2 = DAT_000146c8;
      if (iVar5 + -1 <= (int)sVar6) {
        sVar6 = sVar6 + 1;
        param_1[1] = 0;
        iVar5 = puVar10[3];
        uVar2 = uVar4;
      }
      snprintf_res(param_1,uVar2,iVar5,sVar6);
      return 0;
    }
    if (9 < uVar9) {
      if (!bVar3) goto LAB_0001459c;
      goto LAB_00014568;
    }
    if (bVar3) {
      if (cVar1 == ' ') {
        *pcVar8 = '\0';
        uVar9 = uVar9 + 1;
        bVar3 = false;
      }
    }
    else if (cVar1 != ' ') {
      local_48[uVar9] = pcVar8;
      bVar3 = true;
    }
  } while( true );
}



/* ===== ssv6xxx_hwif_irq_setmask @ 000146d0 size=14 ===== */

void ssv6xxx_hwif_irq_setmask(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(((undefined4 *)*param_1)[1] + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1);
    return;
  }
  return;
}



/* ===== ssv6xxx_hci_irq_enable @ 000146de size=30 ===== */

undefined4 ssv6xxx_hci_irq_enable(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(((undefined4 *)*param_1)[1] + 0x24);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)*param_1);
  }
  ssv6xxx_hwif_irq_setmask(param_1,~param_1[9]);
  return 0;
}



/* ===== ssv6xxx_hci_irq_suspend @ 000146fc size=30 ===== */

undefined4 ssv6xxx_hci_irq_suspend(undefined4 *param_1)

{
  code *pcVar1;
  
  ssv6xxx_hwif_irq_setmask(param_1,0xffffffff);
  pcVar1 = *(code **)(((undefined4 *)*param_1)[1] + 0x28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)*param_1,0);
  }
  return 0;
}



/* ===== ssv6xxx_hci_start @ 0001471a size=20 ===== */

undefined4 ssv6xxx_hci_start(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 400;
  do {
    *(undefined1 *)(param_1 + 0x54) = 0;
    param_1 = param_1 + 0x28;
  } while (param_1 != iVar1);
  return 0;
}



/* ===== ssv6xxx_hci_stop @ 0001472e size=20 ===== */

undefined4 ssv6xxx_hci_stop(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 400;
  do {
    *(undefined1 *)(param_1 + 0x54) = 1;
    param_1 = param_1 + 0x28;
  } while (param_1 != iVar1);
  return 0;
}



/* ===== ssv6xxx_hci_hcmd_start @ 00014742 size=10 ===== */

undefined4 ssv6xxx_hci_hcmd_start(int param_1)

{
  *(undefined1 *)(param_1 + 0x20c) = 0;
  return 0;
}



/* ===== ssv6xxx_hci_ble_start @ 0001474c size=10 ===== */

undefined4 ssv6xxx_hci_ble_start(int param_1)

{
  *(undefined1 *)(param_1 + 0x1e4) = 0;
  return 0;
}



/* ===== ssv6xxx_hci_ble_stop @ 00014756 size=10 ===== */

undefined4 ssv6xxx_hci_ble_stop(int param_1)

{
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  return 0;
}



/* ===== ssv6xxx_hci_read_word @ 00014760 size=16 ===== */

void ssv6xxx_hci_read_word(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001476e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((undefined4 *)*param_1)[1] + 8))(*(undefined4 *)*param_1);
  return;
}



/* ===== ssv6xxx_hci_load_fw @ 00014770 size=16 ===== */

void ssv6xxx_hci_load_fw(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001477e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((undefined4 *)*param_1)[1] + 0x3c))(*(undefined4 *)*param_1);
  return;
}



/* ===== ssv6xxx_hci_write_word @ 00014780 size=16 ===== */

void ssv6xxx_hci_write_word(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((undefined4 *)*param_1)[1] + 0xc))(*(undefined4 *)*param_1);
  return;
}



/* ===== ssv6xxx_hci_burst_read_word @ 00014790 size=16 ===== */

void ssv6xxx_hci_burst_read_word(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001479e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((undefined4 *)*param_1)[1] + 0x10))(*(undefined4 *)*param_1);
  return;
}



/* ===== ssv6xxx_hci_burst_write_word @ 000147a0 size=16 ===== */

void ssv6xxx_hci_burst_write_word(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((undefined4 *)*param_1)[1] + 0x14))(*(undefined4 *)*param_1);
  return;
}



/* ===== ssv6xxx_hci_write_sram @ 000147b0 size=24 ===== */

undefined4 ssv6xxx_hci_write_sram(int *param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(((undefined4 *)*param_1)[1] + 0x5c);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1);
    return uVar1;
  }
  return 0;
}



/* ===== ssv6xxx_hci_pmu_wakeup @ 000147c8 size=18 ===== */

undefined4 ssv6xxx_hci_pmu_wakeup(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(((undefined4 *)*param_1)[1] + 0x38);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)*param_1);
  }
  return 0;
}



/* ===== ssv6xxx_hci_interface_reset @ 000147da size=18 ===== */

undefined4 ssv6xxx_hci_interface_reset(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(((undefined4 *)*param_1)[1] + 0x60);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)*param_1);
  }
  return 0;
}



/* ===== ssv6xxx_hci_sysplf_reset @ 000147ec size=18 ===== */

undefined4 ssv6xxx_hci_sysplf_reset(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(((undefined4 *)*param_1)[1] + 0x74);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)*param_1);
  }
  return 0;
}



/* ===== ssv6xxx_hci_hwif_suspend @ 000147fe size=18 ===== */

undefined4 ssv6xxx_hci_hwif_suspend(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(((undefined4 *)*param_1)[1] + 0x7c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)*param_1);
  }
  return 0;
}



/* ===== ssv6xxx_hci_hwif_resume @ 00014810 size=20 ===== */

undefined4 ssv6xxx_hci_hwif_resume(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(((undefined4 *)*param_1)[1] + 0x80);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)*param_1);
  }
  return 0;
}



/* ===== ssv6xxx_hci_txq_len @ 00014824 size=6 ===== */

undefined4 ssv6xxx_hci_txq_len(int param_1)

{
  return *(undefined4 *)(param_1 + 0x218);
}



/* ===== ssv6xxx_hci_txq_pause_by_sta @ 0001482a size=18 ===== */

void ssv6xxx_hci_txq_pause_by_sta(int param_1,uint param_2)

{
  if (param_2 < 9) {
    *(undefined1 *)(param_2 * 0x28 + param_1 + 0x54) = 1;
  }
  return;
}



/* ===== ssv6xxx_hci_txq_resume_by_sta @ 0001483c size=18 ===== */

void ssv6xxx_hci_txq_resume_by_sta(int param_1,uint param_2)

{
  if (param_2 < 9) {
    *(undefined1 *)(param_2 * 0x28 + param_1 + 0x54) = 0;
  }
  return;
}



/* ===== ssv6xxx_hci_isr_reset @ 0001484e size=34 ===== */

void ssv6xxx_hci_isr_reset(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -0x23c);
  (**(code **)(*piVar1 + 0x30))(*(undefined4 *)(*piVar1 + 0x10),0x200,DAT_00014870);
  ssv6xxx_hci_irq_suspend(piVar1);
  ssv6xxx_hci_irq_enable(piVar1);
  return;
}



/* ===== ssv6xxx_hci_ignore_cmd @ 00014874 size=18 ===== */

void ssv6xxx_hci_ignore_cmd(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1c) = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    complete();
    return;
  }
  return;
}



/* ===== ssv6xxx_hci_txq_lock_by_sta @ 00014886 size=18 ===== */

void ssv6xxx_hci_txq_lock_by_sta(int param_1,uint param_2)

{
  if (param_2 < 9) {
    mutex_lock(param_2 * 0x28 + param_1 + 0x3c);
    return;
  }
  return;
}



/* ===== ssv6xxx_hci_txq_unlock_by_sta @ 00014898 size=18 ===== */

void ssv6xxx_hci_txq_unlock_by_sta(int param_1,uint param_2)

{
  if (param_2 < 9) {
    mutex_unlock(param_2 * 0x28 + param_1 + 0x3c);
    return;
  }
  return;
}



/* ===== ssv6xxx_hci_set_cap @ 000148aa size=30 ===== */

undefined4 ssv6xxx_hci_set_cap(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0xff);
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_1 + 0x280) & ~uVar1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x280) | uVar1;
  }
  *(uint *)(param_1 + 0x280) = uVar1;
  return 0;
}



/* ===== ssv6xxx_hci_cmd_done @ 000148c8 size=34 ===== */

void ssv6xxx_hci_cmd_done(int param_1,int param_2)

{
  if ((((*(char *)(param_1 + 0x1c) == '\0') && ((*(byte *)(param_2 + 2) & 7) == 6)) &&
      (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 8))) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    complete(param_1 + 0x10);
    return;
  }
  return;
}



/* ===== ssv6xxx_hci_txq_pause @ 000148ea size=86 ===== */

undefined4 ssv6xxx_hci_txq_pause(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(*param_1 + 0x10) == 0) {
    (**(code **)(*param_1 + 0x30))(0,0x200,DAT_00014944,DAT_00014940);
    uVar1 = 1;
  }
  else {
    mutex_lock(param_1 + 10);
    param_1[0xd] = param_2 & 0x1f | param_1[0xd];
    piVar2 = param_1;
    do {
      *(undefined1 *)(piVar2 + 0x15) = 1;
      piVar2 = piVar2 + 10;
    } while (piVar2 != param_1 + 0x5a);
    (**(code **)(*(int *)(*param_1 + 0x14) + 0x19c))();
    mutex_unlock(param_1 + 10);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== ssv6xxx_hwif_stop_usb_acc.constprop.8 @ 00014948 size=18 ===== */

undefined4 ssv6xxx_hwif_stop_usb_acc_constprop_8(undefined4 *param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(((undefined4 *)*param_1)[1] + 0x68);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1,4);
    return uVar1;
  }
  return 0;
}



/* ===== ssv6xxx_hwif_start_usb_acc.constprop.9 @ 0001495a size=18 ===== */

undefined4 ssv6xxx_hwif_start_usb_acc_constprop_9(undefined4 *param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(((undefined4 *)*param_1)[1] + 100);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1,4);
    return uVar1;
  }
  return 0;
}



/* ===== ssv6xxx_hci_register @ 0001496c size=316 ===== */

undefined4 ssv6xxx_hci_register(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *__s;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    printk(DAT_00014aa8);
    uVar2 = 0xffffffff;
  }
  else {
    __s = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_00014aac + 0x28),0xdc0,param_3,DAT_00014aac,
                                  param_4);
    if (__s == (int *)0x0) {
      uVar2 = 0xfffffff4;
    }
    else {
      memset(__s,0,0x298);
      uVar1 = DAT_00014ab8;
      uVar2 = DAT_00014ab4;
      iVar4 = 0;
      *(undefined4 *)(param_1 + 8) = DAT_00014ab0;
      *(int **)(param_1 + 0xc) = __s;
      *__s = param_1;
      __s[0xa5] = 0;
      __s[0xd] = 0;
      __mutex_init(__s + 10,uVar1,uVar2);
      __mutex_init(__s + 0x87,DAT_00014abc,DAT_00014ab4);
      __mutex_init(__s + 1,DAT_00014ac0,DAT_00014ab4);
      __s[4] = 0;
      __init_swait_queue_head(__s + 5,DAT_00014ac4,DAT_00014ab4);
      uVar1 = DAT_00014adc;
      uVar2 = DAT_00014ab4;
      piVar5 = __s + 0xf;
      do {
        memset(piVar5 + -1,0,0x28);
        piVar5[5] = 0;
        piVar5[3] = (int)(piVar5 + 3);
        piVar5[4] = (int)(piVar5 + 3);
        __mutex_init(piVar5,uVar1,uVar2);
        piVar5[-1] = iVar4;
        iVar4 = iVar4 + 1;
        *(undefined1 *)(piVar5 + 6) = 1;
        piVar5 = piVar5 + 10;
      } while (iVar4 != 0xc);
      __s[0x8f] = -0x20;
      __s[0x90] = (int)(__s + 0x90);
      __s[0x91] = (int)(__s + 0x90);
      uVar1 = DAT_00014acc;
      uVar2 = DAT_00014ab4;
      __s[0x92] = DAT_00014ac8;
      __init_waitqueue_head(__s + 0x8c,uVar1,uVar2);
      uVar3 = kthread_create_on_node(DAT_00014ad4,__s,0xffffffff,DAT_00014ad0);
      if (uVar3 < 0xfffff001) {
        wake_up_process();
      }
      __s[0x8e] = uVar3;
      __s[9] = 1;
      ssv6xxx_hwif_start_usb_acc_constprop_9(__s);
      *(undefined1 *)(__s + 0x83) = 0;
      *(undefined1 *)(__s + 7) = 0;
      if (param_2 != 0) {
        iVar4 = (**(code **)(param_1 + 0x34))(*(undefined4 *)(*__s + 0x10),0x8000);
        __s[0xa1] = iVar4;
        if (iVar4 == 0) {
          printk(DAT_00014ad8,0x8000);
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== atomic_sub.constprop.13 @ 00014ae0 size=24 ===== */

void atomic_sub_constprop_13(int *param_1)

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



/* ===== ssv6xxx_hci_txq_flush_by_sta @ 00014af8 size=64 ===== */

undefined4
ssv6xxx_hci_txq_flush_by_sta(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 < 9) {
    while( true ) {
      iVar1 = skb_dequeue(param_1 + param_2 * 10 + 0x12);
      iVar3 = *param_1;
      if (iVar1 == 0) break;
      (**(code **)(iVar3 + 0x28))
                (iVar1,*(undefined4 *)(iVar3 + 0x10),*(code **)(iVar3 + 0x28),iVar3,param_4);
      atomic_sub_constprop_13(param_1 + 0x86);
    }
    (**(code **)(iVar3 + 0x20))(*(undefined4 *)(iVar3 + 0x10));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== ssv6xxx_hci_hcmd_txq_flush @ 00014b38 size=48 ===== */

undefined4
ssv6xxx_hci_hcmd_txq_flush(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = skb_dequeue(param_1 + 0x80);
    iVar2 = *param_1;
    if (iVar1 == 0) break;
    (**(code **)(iVar2 + 0x28))
              (iVar1,*(undefined4 *)(iVar2 + 0x10),*(code **)(iVar2 + 0x28),iVar2,param_4);
    atomic_sub_constprop_13(param_1 + 0x86);
  }
  (**(code **)(iVar2 + 0x20))(*(undefined4 *)(iVar2 + 0x10));
  return 0;
}



/* ===== ssv6xxx_hci_ble_txq_flush @ 00014b68 size=48 ===== */

undefined4
ssv6xxx_hci_ble_txq_flush(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = skb_dequeue(param_1 + 0x76);
    iVar2 = *param_1;
    if (iVar1 == 0) break;
    (**(code **)(iVar2 + 0x28))
              (iVar1,*(undefined4 *)(iVar2 + 0x10),*(code **)(iVar2 + 0x28),iVar2,param_4);
    atomic_sub_constprop_13(param_1 + 0x86);
  }
  (**(code **)(iVar2 + 0x20))(*(undefined4 *)(iVar2 + 0x10));
  return 0;
}



/* ===== ssv6xxx_hci_txq_flush @ 00014b98 size=64 ===== */

undefined4 ssv6xxx_hci_txq_flush(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 0x12;
  do {
    while (iVar1 = skb_dequeue(piVar2), iVar1 != 0) {
      (**(code **)(*param_1 + 0x28))(iVar1,*(undefined4 *)(*param_1 + 0x10));
      atomic_sub_constprop_13(param_1 + 0x86);
    }
    piVar2 = piVar2 + 10;
  } while (piVar2 != param_1 + 0x76);
  (**(code **)(*param_1 + 0x20))(*(undefined4 *)(*param_1 + 0x10));
  return 0;
}



/* ===== ssv6xxx_hci_enqueue @ 00014bd8 size=128 ===== */

uint ssv6xxx_hci_enqueue(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_2 + 0x50);
  if (param_3 < 0xc) {
    *(int *)(param_1 + param_3 * 0x28 + 0x5c) = param_5;
    if (param_5 << 0x1f < 0) {
      skb_queue_head();
    }
    else {
      skb_queue_tail(param_3 * 0x28 + 0x48 + param_1);
    }
    piVar3 = (int *)(param_1 + 0x218);
    HintPreloadData(piVar3);
    do {
      ExclusiveAccess(piVar3);
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = *piVar3 + 1;
    uVar5 = *(uint *)(param_3 * 0x28 + param_1 + 0x50);
    if ((((*(char *)(param_1 + 0x288) == '\0') || (param_3 == 0xb)) || (param_4 != 0)) ||
       ((*(uint *)(param_1 + 0x28c) <= uVar5 || (uVar4 < *(uint *)(param_1 + 0x290))))) {
      __wake_up(param_1 + 0x230,1,1,0);
    }
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(2,0x14bea);
  (*pcVar1)();
}



/* ===== ssv6xxx_hci_send_cmd @ 00014c5a size=160 ===== */

undefined4 ssv6xxx_hci_send_cmd(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_2 + 0xa4);
  uVar4 = *(uint *)(iVar6 + 0xc);
  iVar2 = param_2;
  if ((uVar4 != 0) && ((char)param_1[7] == '\0')) {
    mutex_lock(param_1 + 1);
    iVar1 = DAT_00014cfc;
    uVar4 = *(uint *)(iVar6 + 0xc) | (uint)*(byte *)(DAT_00014cfc + 0x94) << 0x18;
    cVar3 = *(byte *)(DAT_00014cfc + 0x94) + 1;
    *(uint *)(iVar6 + 0xc) = uVar4;
    param_1[8] = uVar4;
    if (cVar3 == -0x80) {
      cVar3 = '\x01';
    }
    *(char *)(iVar1 + 0x94) = cVar3;
  }
  iVar2 = ssv6xxx_hci_enqueue(param_1,param_2,0xb,0,0,iVar2);
  if (iVar2 == -1) {
    (**(code **)(*param_1 + 0x30))(*(undefined4 *)(*param_1 + 0x10),0x200,DAT_00014d00);
    uVar5 = 0xffffffff;
    if ((uVar4 != 0) && ((char)param_1[7] == '\0')) {
      mutex_unlock(param_1 + 1);
    }
  }
  else {
    if (uVar4 != 0) {
      if ((char)param_1[7] != '\0') {
        return 0;
      }
      iVar2 = wait_for_completion_interruptible_timeout(param_1 + 4,0x5dc);
      if (iVar2 == 0) {
        printk(DAT_00014d04,*(undefined1 *)(iVar6 + 3),*(undefined4 *)(iVar6 + 0xc));
      }
      mutex_unlock(param_1 + 1);
    }
    uVar5 = 0;
  }
  return uVar5;
}



/* ===== ssv6xxx_hci_suspend @ 00014d08 size=24 ===== */

undefined4 ssv6xxx_hci_suspend(undefined4 param_1)

{
  ssv6xxx_hci_stop();
  ssv6xxx_hci_irq_suspend(param_1);
  ssv6xxx_hwif_stop_usb_acc_constprop_8(param_1);
  return 0;
}



/* ===== ssv6xxx_hci_resume @ 00014d20 size=36 ===== */

undefined4 ssv6xxx_hci_resume(undefined4 *param_1)

{
  code *pcVar1;
  
  ssv6xxx_hci_irq_enable();
  ssv6xxx_hwif_start_usb_acc_constprop_9(param_1);
  ssv6xxx_hci_start(param_1);
  pcVar1 = *(code **)(((undefined4 *)*param_1)[1] + 0x34);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)*param_1);
  }
  return 0;
}



/* ===== ssv6xxx_hci_txq_resume @ 00014d44 size=102 ===== */

undefined4 ssv6xxx_hci_txq_resume(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(*param_1 + 0x10) == 0) {
    (**(code **)(*param_1 + 0x30))(0,0x200,DAT_00014db0,DAT_00014dac);
    uVar1 = 1;
  }
  else {
    mutex_lock(param_1 + 10);
    param_1[0xd] = param_1[0xd] & ~(param_2 & 0x1f);
    (**(code **)(*(int *)(*param_1 + 0x14) + 0x19c))();
    piVar2 = param_1;
    do {
      *(undefined1 *)(piVar2 + 0x15) = 0;
      piVar2 = piVar2 + 10;
    } while (piVar2 != param_1 + 0x5a);
    mutex_unlock(param_1 + 10);
    __wake_up(param_1 + 0x8c,1,1,0);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== ssv6xxx_hci_is_txq_empty @ 00014db4 size=20 ===== */

bool ssv6xxx_hci_is_txq_empty(int param_1,int param_2)

{
  code *pcVar1;
  
  if (0xb < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x14db8);
    (*pcVar1)();
  }
  return *(int *)(param_2 * 0x28 + param_1 + 0x50) == 0;
}



/* ===== house_keeping_timer_hdl @ 00014dcc size=6 ===== */

void house_keeping_timer_hdl(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x18));
  return;
}



/* ===== ssv6xxx_hci_rx_mode @ 00014dd2 size=10 ===== */

undefined4 ssv6xxx_hci_rx_mode(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x210) + 0xf5c);
}



/* ===== device_match_by_alias @ 00014ddc size=80 ===== */

undefined4 device_match_by_alias(undefined4 *param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  char *pcVar2;
  char *__s1_00;
  
  __s1_00 = *(char **)param_1[0xe];
  iVar1 = strcmp(__s1_00,param_2);
  pcVar2 = (char *)param_1[0xb];
  if (iVar1 == 0) {
    __s1 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      __s1 = (char *)*param_1;
    }
    iVar1 = strcmp(__s1,param_2 + 0x20);
    if ((iVar1 == 0) || (param_2[0x20] == '\0')) {
      return 1;
    }
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)*param_1;
  }
  printk(DAT_00014e30,DAT_00014e2c,__s1_00,param_2,pcVar2,param_2 + 0x20);
  return 0;
}



/* ===== ssv6xxx_init @ 00014e34 size=8 ===== */

void ssv6xxx_init(void)

{
  __platform_driver_register(DAT_00014e40,DAT_00014e3c);
  return;
}



/* ===== ssv6xxx_exit @ 00014e44 size=6 ===== */

void ssv6xxx_exit(void)

{
  platform_driver_unregister(DAT_00014e4c);
  return;
}



/* ===== ssv6xxx_set_80211_hw_rate_config @ 00014e50 size=16 ===== */

void ssv6xxx_set_80211_hw_rate_config(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x69) = 4;
  *(undefined1 *)(iVar1 + 0x6b) = 7;
  return;
}



/* ===== ssv6xxx_load_firmware @ 00014e60 size=190 ===== */

void ssv6xxx_load_firmware(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_13c;
  undefined1 auStack_138 [28];
  char local_11c [256];
  int local_1c;
  
  piVar1 = DAT_00014f20;
  local_1c = *DAT_00014f20;
  local_13c = 0;
  memset(auStack_138,0,0x1c);
  local_11c[0] = '\0';
  local_11c[1] = '\0';
  local_11c[2] = '\0';
  local_11c[3] = '\0';
  memset(local_11c + 4,0,0xfc);
  if (*(char *)(param_1 + 0xb04) == '\0') {
    (**(code **)(param_1 + 0x23c))(&local_13c);
    printk(DAT_00014f2c,&local_13c);
  }
  else {
    printk(DAT_00014f24,(char *)(param_1 + 0xb04));
    strncpy((char *)&local_13c,(char *)(param_1 + 0xb04),0x1f);
  }
  if ((local_13c & 0xff) == 0) {
    uVar3 = 0xffffffff;
    printk(DAT_00014f28);
  }
  else {
    iVar2 = *DAT_00014f30;
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0xa04) == '\0') {
        uVar3 = (**(code **)(param_1 + 0x240))(param_1,&local_13c);
        goto LAB_00014eb2;
      }
      iVar2 = param_1 + 0xa04;
    }
    snprintf(local_11c,0x100,DAT_00014f34,iVar2,&local_13c);
    uVar3 = (**(code **)(param_1 + 0x240))(param_1,local_11c,1);
    printk(DAT_00014f38,local_11c);
  }
LAB_00014eb2:
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== ssv6xxx_deinit_mac @ 00014f3c size=2 ===== */

void ssv6xxx_deinit_mac(void)

{
  return;
}



/* ===== ssv6xxx_cancel_work_sync @ 00014f3e size=96 ===== */

void ssv6xxx_cancel_work_sync(int param_1)

{
  cancel_work_sync(param_1 + 0x894);
  cancel_delayed_work_sync(param_1 + 0x8e0);
  cancel_work_sync(param_1 + 0xc84);
  cancel_work_sync(param_1 + 0xc94);
  cancel_work_sync(param_1 + 0xc5c);
  cancel_work_sync(param_1 + 0x18);
  cancel_work_sync(param_1 + 0xca4);
  cancel_work_sync(param_1 + 0xd14);
  cancel_delayed_work_sync(param_1 + 0xffc);
  if (*(char *)(param_1 + 0xd58) != '\0') {
    cancel_delayed_work_sync(param_1 + 0xfd0);
    return;
  }
  return;
}



/* ===== ssv6xxx_driver_attach @ 00014f9e size=78 ===== */

void ssv6xxx_driver_attach(char *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_54 [64];
  int local_14;
  
  piVar1 = DAT_00014fec;
  local_14 = *DAT_00014fec;
  memset(acStack_54,0,0x40);
  strcpy(acStack_54,param_1);
  iVar2 = driver_find_device(DAT_00014ff4,0,acStack_54,DAT_00014ff0);
  if (iVar2 == 0) {
    printk(DAT_00014ff8,param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x40) + 0x40);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== ssv6xxx_hwif_property @ 00015000 size=16 ===== */

undefined4 ssv6xxx_hwif_property(undefined4 *param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(((undefined4 *)*param_1)[1] + 0x70);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001500a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1);
    return uVar1;
  }
  return 0;
}



/* ===== ssv6xxx_hwif_get_tx_req_cnt @ 00015010 size=16 ===== */

void ssv6xxx_hwif_get_tx_req_cnt(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(((undefined4 *)*param_1)[1] + 0x88);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001501c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1);
    return;
  }
  return;
}



/* ===== _set_wep_sw_crypto_key @ 00015020 size=38 ===== */

void _set_wep_sw_crypto_key(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 8);
  iVar1 = *param_2;
  *(undefined1 *)(iVar2 + 0x138) = *(undefined1 *)(iVar1 + 0x2d1);
  *(undefined1 *)(iVar2 + 0x13a) = *(undefined1 *)(iVar1 + 0x2d3);
  *(undefined1 *)(iVar2 + 0x139) = *(undefined1 *)(iVar1 + 0x2d2);
  *(undefined1 *)(iVar2 + 0x13b) = *(undefined1 *)(iVar1 + 0x2d4);
  return;
}



/* ===== ssv6200_config_filter @ 00015046 size=10 ===== */

void ssv6200_config_filter(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  *param_3 = *param_3 & 0x1f6;
  return;
}



/* ===== ssv6200_sta_notify @ 00015050 size=60 ===== */

void ssv6200_sta_notify(int param_1,int *param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  
  if (*param_2 == 3) {
    disableIRQinterrupts();
    if (*(int *)(param_4 + 0x108) != -1) {
      if (param_3 == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x210);
        pcVar1 = *(code **)(*(int *)(iVar2 + 0x10) + 0x3c);
      }
      else {
        if (param_3 != 1) {
          return;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x210);
        pcVar1 = *(code **)(*(int *)(iVar2 + 0x10) + 0x40);
      }
      (*pcVar1)(*(undefined4 *)(iVar2 + 0x14));
    }
  }
  return;
}



/* ===== ieee80211_tx_info_clear_status @ 0001508c size=42 ===== */

void ieee80211_tx_info_clear_status(int param_1)

{
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xe0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xe0;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xe0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xe0;
  memset((void *)(param_1 + 0x18),0,0x18);
  return;
}



/* ===== queue_work @ 000150b6 size=10 ===== */

void queue_work(undefined4 param_1,undefined4 param_2)

{
  queue_work_on(1,param_1,param_2);
  return;
}



/* ===== ssv6xxx_interface_opertaion @ 000150c0 size=192 ===== */

undefined4
ssv6xxx_interface_opertaion
          (int param_1,uint param_2,undefined4 param_3,undefined4 *param_4,byte param_5,
          undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  
  iVar1 = ssv_skb_alloc(param_1,0x1a,param_3,param_4,param_4);
  if (iVar1 == 0) {
    printk(DAT_00015184,DAT_00015180);
    uVar2 = 0xffffffff;
  }
  else {
    skb_put(iVar1,0x1a);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    puVar3[2] = puVar3[2] & 0xf8 | 5;
    puVar3[3] = 0x12;
    *(uint *)(puVar3 + 0xc) = param_2 | 0x120000;
    *puVar3 = 0x1a;
    *(undefined2 *)(puVar3 + 10) = 0;
    *(uint *)(puVar3 + 4) = param_2;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 0x14) = 0;
    *(undefined2 *)(puVar3 + 0x18) = 0;
    if ((param_5 == 9) || ((param_5 & 0xfd) == 1)) {
      uVar4 = 2;
    }
    else if (param_5 == 2) {
      uVar4 = 1;
    }
    else {
      uVar4 = param_5 == 8;
    }
    puVar3[0x16] = (char)param_3;
    if (param_2 != 1) {
      if (param_2 == 2) {
        puVar3[0x17] = uVar4;
        puVar3[0x19] = param_7;
        puVar3[0x18] = param_6;
      }
      else {
        *(undefined4 *)(puVar3 + 0x10) = *param_4;
        *(undefined2 *)(puVar3 + 0x14) = *(undefined2 *)(param_4 + 1);
        puVar3[0x17] = uVar4;
      }
    }
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== dev_kfree_skb_any @ 00015188 size=6 ===== */

void dev_kfree_skb_any(undefined4 param_1)

{
  __dev_kfree_skb_any(param_1,1);
  return;
}



/* ===== ssv6xxx_send_rawdata_packet @ 0001518e size=180 ===== */

undefined4 ssv6xxx_send_rawdata_packet(void *param_1,size_t param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = ssv6xxx_driver_attach(DAT_00015244);
  if (iVar1 == 0) {
    printk(DAT_0001524c,DAT_00015248);
  }
  else {
    iVar2 = ssv_skb_alloc_ex(iVar1,param_2 + 0x50,0xa20);
    if (iVar2 != 0) {
      puVar3 = *(undefined4 **)(iVar2 + 0xa0);
      if ((uint)(*(int *)(iVar2 + 0xa4) - (int)puVar3) < 0x30) {
        *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 0x30;
        *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 0x30;
      }
      memset((void *)(iVar2 + 0x18),0,0x30);
      memset(puVar3 + 1,0,0x2c);
      *puVar3 = 0;
      *(undefined1 *)((int)puVar3 + 0x2e) = 1;
      skb_put(iVar2,param_2 + 0x50);
      skb_pull(iVar2,0x50);
      memcpy(*(void **)(iVar2 + 0xa4),param_1,param_2);
      (**(code **)(*(int *)(iVar1 + 0x210) + 0x260))(iVar1,iVar2);
      (**(code **)(*(int *)(*(int *)(iVar1 + 0x210) + 0x10) + 0x30))
                (*(undefined4 *)(*(int *)(iVar1 + 0x210) + 0x14),iVar2,9,0,0);
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== ssv6200_set_rts_threshold @ 00015250 size=116 ===== */

undefined4 ssv6200_set_rts_threshold(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x40);
  mutex_lock(iVar3 + 0x204);
  iVar1 = ssv_skb_alloc(iVar3,0x14);
  if (iVar1 == 0) {
    printk(DAT_000152c8,DAT_000152c4);
  }
  else {
    skb_put(iVar1,0x14);
    puVar2 = *(undefined1 **)(iVar1 + 0xa4);
    memset(puVar2 + 2,0,0x12);
    *(undefined4 *)(puVar2 + 0x10) = param_2;
    puVar2[2] = 5;
    puVar2[3] = 0x19;
    *puVar2 = 0x14;
    puVar2[1] = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(iVar3 + 0x210) + 0x10) + 0x6c))
                      (*(undefined4 *)(*(int *)(iVar3 + 0x210) + 0x14),iVar1);
    if (iVar1 != 0) {
      printk(DAT_000152cc);
    }
  }
  mutex_unlock(iVar3 + 0x204);
  return 0;
}



/* ===== ssv6200_ampdu_action @ 000152d0 size=484 ===== */

uint ssv6200_ampdu_action(int param_1,undefined4 param_2,uint *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  uVar7 = param_3[1];
  if (uVar7 == 0) {
    return 0;
  }
  uVar11 = *param_3;
  iVar8 = *(int *)(param_1 + 0x40);
  if (uVar11 < 2) {
    iVar5 = *(int *)(*(int *)(iVar8 + 0x210) + 0x7a4) << 0x16;
    uVar3 = DAT_000154bc;
joined_r0x00015320:
    if (-1 < iVar5) {
      printk(uVar3);
      return 0xffffffa1;
    }
  }
  else if (uVar11 - 2 < 5) {
    iVar5 = *(int *)(*(int *)(iVar8 + 0x210) + 0x7a4) << 0x15;
    uVar3 = DAT_000154c0;
    goto joined_r0x00015320;
  }
  uVar4 = param_3[3];
  iVar10 = iVar8 + 0x204;
  uVar9 = (uint)(ushort)param_3[2];
  mutex_lock(iVar10);
  iVar5 = *(int *)(uVar7 + 0x108);
  if ((iVar5 == -1) || (uVar1 = *(ushort *)(iVar5 * 0x18 + iVar8 + 0x79a), (uVar1 & 1) == 0)) {
    mutex_unlock(iVar10);
    if (*(int *)(iVar8 + 0x878) << 0x1e < 0) {
      return 0;
    }
    printk(DAT_000154c8,DAT_000154c4);
    return 0xffffffc3;
  }
  switch(uVar11) {
  case 0:
    uVar7 = (**(code **)(*(int *)(iVar8 + 0x210) + 0x304))
                      (param_1,param_2,uVar7,uVar9,(int)param_3 + 10,(ushort)uVar4 & 0xff);
    if (uVar7 == 0) {
      queue_work(*(undefined4 *)(iVar8 + 0x888),iVar8 + 0x954);
    }
    goto LAB_000153aa;
  case 1:
    iVar6 = iVar8;
    do {
      uVar2 = *(ushort *)(iVar6 + 0x79a);
      if (((int)((uint)uVar2 << 0x1f) < 0) && (uVar7 == *(uint *)(iVar6 + 0x7a0))) {
        uVar7 = uVar2 & 0x10;
        if ((uVar2 & 0x10) == 0) goto LAB_000153aa;
        *(ushort *)(iVar5 * 0x18 + iVar8 + 0x79a) = uVar1 & 0xffef;
        iVar5 = *(int *)(iVar8 + 0x940) + -1;
        *(int *)(iVar8 + 0x940) = iVar5;
        if (iVar5 < 1) {
          *(undefined4 *)(iVar8 + 0x944) = 0;
          *(undefined4 *)(iVar8 + 0x940) = 0;
        }
        queue_work(*(undefined4 *)(iVar8 + 0x888),iVar8 + 0x964);
        break;
      }
      iVar6 = iVar6 + 0x18;
    } while (iVar8 + 0xd8 != iVar6);
    break;
  case 2:
    printk(DAT_000154cc,*(undefined1 *)(uVar7 + 0x14),*(undefined1 *)(uVar7 + 0x15),
           *(undefined1 *)(uVar7 + 0x16),*(undefined1 *)(uVar7 + 0x17),*(undefined1 *)(uVar7 + 0x18)
           ,*(undefined1 *)(uVar7 + 0x19),uVar9);
    iVar5 = uVar7 + uVar9 * 4;
    if (*(int *)(iVar5 + 0x118) != 2) {
      *(undefined4 *)(iVar5 + 0x118) = 2;
      ssv6xxx_ampdu_opertaion(iVar8,1,uVar9,*(undefined4 *)(*(int *)(uVar7 + 0x10c) + 4));
    }
    ieee80211_start_tx_ba_cb_irqsafe(param_2,uVar7 + 0x14,uVar9);
    break;
  case 3:
  case 4:
  case 5:
    printk(DAT_000154d0,*(undefined1 *)(uVar7 + 0x14),*(undefined1 *)(uVar7 + 0x15),
           *(undefined1 *)(uVar7 + 0x16),*(undefined1 *)(uVar7 + 0x17),*(undefined1 *)(uVar7 + 0x18)
           ,*(undefined1 *)(uVar7 + 0x19),uVar9);
    *(undefined4 *)(uVar7 + (uVar9 + 4) * 4 + 0x108) = 0;
    ssv6xxx_ampdu_opertaion(iVar8,2,uVar9,*(undefined4 *)(*(int *)(uVar7 + 0x10c) + 4));
    ieee80211_stop_tx_ba_cb_irqsafe(param_2,uVar7 + 0x14,uVar9);
    break;
  case 6:
    printk(DAT_000154d4,*(undefined1 *)(uVar7 + 0x14),*(undefined1 *)(uVar7 + 0x15),
           *(undefined1 *)(uVar7 + 0x16),*(undefined1 *)(uVar7 + 0x17),*(undefined1 *)(uVar7 + 0x18)
           ,*(undefined1 *)(uVar7 + 0x19),uVar9);
    break;
  default:
    uVar7 = 0xffffffa1;
    goto LAB_000153aa;
  }
  uVar7 = 0;
LAB_000153aa:
  mutex_unlock(iVar10);
  return uVar7;
}



/* ===== ssv6200_set_tim @ 000154d8 size=12 ===== */

undefined4 ssv6200_set_tim(int param_1)

{
  ssv6200_set_tim_work(*(undefined4 *)(param_1 + 0x40));
  return 0;
}



/* ===== ssv6xxx_special_tx_frame @ 000154e4 size=108 ===== */

undefined4 ssv6xxx_special_tx_frame(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  
  iVar1 = ieee80211_get_hdrlen_from_skb();
  iVar4 = *(int *)(param_1 + 0xa4);
  uVar2 = iVar1 + 6U & 0xff;
  uVar6 = *(ushort *)(iVar4 + uVar2);
  uVar6 = uVar6 << 8 | uVar6 >> 8;
  if ((uVar6 == 0x806) || (uVar6 == 0x888e)) {
    uVar3 = 1;
  }
  else {
    if (uVar6 == 0x800) {
      iVar1 = uVar2 + 2;
      iVar5 = iVar4 + iVar1;
      if (*(char *)(iVar5 + 9) == '\x11') {
        uVar2 = *(byte *)(iVar4 + iVar1) & 0xf;
        uVar7 = *(ushort *)(iVar5 + uVar2 * 4);
        uVar6 = *(ushort *)(iVar5 + uVar2 * 4 + 2);
        uVar7 = uVar7 << 8 | uVar7 >> 8;
        uVar6 = uVar6 << 8 | uVar6 >> 8;
        if ((uVar6 == 0x43) || (bVar8 = uVar7 == 0x43, uVar7 = uVar6, bVar8)) {
          if (uVar7 == 0x44) {
            return 1;
          }
          return 0;
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== cfg80211_get_chandef_type @ 00015550 size=30 ===== */

int cfg80211_get_chandef_type(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (*(uint *)(*param_1 + 4) < (uint)param_1[2]) {
        iVar1 = 3;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== ssv6200_start @ 0001556e size=212 ===== */

undefined4 ssv6200_start(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 0x40);
  iVar7 = iVar4 + 0x204;
  iVar6 = *(int *)(iVar4 + 0x210);
  mutex_lock(iVar7);
  iVar2 = ssv6xxx_init_mac(*(undefined4 *)(iVar4 + 0x210));
  if (iVar2 == 0) {
    (*(code *)**(undefined4 **)(iVar6 + 0x10))(*(undefined4 *)(iVar6 + 0x14));
    (**(code **)(*(int *)(iVar4 + 0x210) + 0x234))(iVar4,0);
    (**(code **)(*(int *)(iVar4 + 0x210) + 0x2d0))(*(int *)(iVar4 + 0x210),1);
    iVar2 = *(int *)(param_1 + 0x14);
    uVar3 = cfg80211_get_chandef_type((int *)(param_1 + 0x14));
    uVar5 = DAT_00015648;
    *(int *)(iVar4 + 0x1fc) = iVar2;
    printk(DAT_0001564c,uVar5,*(undefined2 *)(iVar2 + 10),*(undefined4 *)(iVar4 + 0x97c));
    uVar1 = *(undefined2 *)(iVar2 + 10);
    *(short *)(iVar4 + 0x202) = (short)uVar3;
    *(undefined2 *)(iVar4 + 0x200) = uVar1;
    (**(code **)(*(int *)(iVar4 + 0x210) + 0x31c))(iVar4,iVar2,uVar3,0);
    ieee80211_wake_queues(param_1);
    (**(code **)(*(int *)(iVar4 + 0x210) + 0x17c))();
    (**(code **)(iVar6 + 0x324))(iVar6,1);
    *(undefined1 *)(iVar4 + 0x87c) = 1;
    (**(code **)(*(int *)(iVar4 + 0x210) + 0x244))(*(int *)(iVar4 + 0x210),0);
    *(uint *)(iVar4 + 0x878) = *(uint *)(iVar4 + 0x878) | 0x200;
    mutex_unlock(iVar7);
    uVar5 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    mutex_unlock(iVar7);
    printk(DAT_00015644);
  }
  return uVar5;
}



/* ===== _if_set_apmode @ 00015650 size=66 ===== */

void _if_set_apmode(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  (**(code **)(*(int *)(iVar2 + 0x210) + 0x98))
            (*(int *)(iVar2 + 0x210),param_2 + 0x290,*(undefined4 *)(param_2 + 0x2b8));
  (**(code **)(*(int *)(iVar2 + 0x210) + 0x150))
            (*(int *)(iVar2 + 0x210),1,*(undefined4 *)(param_2 + 0x2b8));
  if (*(int *)(iVar2 + 0x870) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x15680);
    (*pcVar1)();
  }
  *(int *)(iVar2 + 0x870) = param_2;
  printk(DAT_00015694,*(undefined2 *)(*(int *)(param_1 + 0x14) + 10));
  return;
}



/* ===== ssv6200_change_interface @ 00015698 size=172 ===== */

undefined4 ssv6200_change_interface(int param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_2e;
  undefined2 local_2a;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar3 = param_2[0xae];
  mutex_lock(iVar1 + 0x204);
  iVar2 = uVar3 * 0x274 + iVar1;
  printk(DAT_00015744,uVar3,*(undefined4 *)(iVar2 + 0x2b8),param_3,param_4);
  *(uint *)(iVar2 + 0x2b8) = param_3;
  *(char *)(iVar1 + 0xc) = (char)param_4;
  *param_2 = param_3;
  if ((param_3 == 9) || ((param_3 & 0xfffffffd) == 1)) {
    _if_set_apmode(param_1,param_2);
  }
  else {
    *(undefined4 *)(iVar1 + 0x870) = 0;
    local_2e = 0;
    local_2a = 0;
    (**(code **)(*(int *)(iVar1 + 0x210) + 0x98))(*(int *)(iVar1 + 0x210),&local_2e,param_2[0xae]);
    (**(code **)(*(int *)(iVar1 + 0x210) + 0x150))(*(int *)(iVar1 + 0x210),0,param_2[0xae]);
  }
  *(char *)((int)param_2 + 0x296) = (char)param_4;
  ssv6xxx_interface_opertaion(iVar1,2,(char)param_2[0xae],0,(char)*param_2,param_4,param_4);
  mutex_unlock(iVar1 + 0x204);
  return 0;
}



/* ===== dbgprint @ 00015748 size=256 ===== */

void dbgprint(int param_1,uint param_2,uint param_3,char *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  ulonglong uVar12;
  char acStack_270 [32];
  char acStack_250 [256];
  char local_150 [300];
  int local_24;
  
  piVar3 = DAT_00015850;
  local_24 = *DAT_00015850;
  if ((param_2 & param_3) != 0) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      vprintk(param_4,&stack0x00000000);
    }
    else {
      iVar4 = vsnprintf(acStack_250,0xff,param_4,&stack0x00000000);
      if (iVar4 == 0xff) {
        printk(DAT_00015858,DAT_00015854);
      }
      iVar8 = 0;
      acStack_250[iVar4] = '\0';
      uVar12 = sched_clock();
      uVar5 = (uint)(uVar12 >> 0x20);
      lVar1 = (ulonglong)DAT_00015848 * (uVar12 & 0xffffffff);
      uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
      bVar11 = CARRY4((uint)lVar1,DAT_00015848);
      uVar2 = (ulonglong)DAT_0001584c * (uVar12 & 0xffffffff) +
              (ulonglong)
              CONCAT14(CARRY4(uVar9,DAT_0001584c) || CARRY4(uVar9 + DAT_0001584c,(uint)bVar11),
                       uVar9 + DAT_0001584c + (uint)bVar11);
      uVar9 = (uint)(uVar2 >> 0x20);
      uVar10 = (uint)((ulonglong)DAT_00015848 * (ulonglong)uVar5 + (uVar2 & 0xffffffff) >> 0x20);
      lVar1 = (ulonglong)DAT_0001584c * (ulonglong)uVar5 +
              (ulonglong)CONCAT14(CARRY4(uVar10,uVar9),uVar10 + uVar9);
      uVar5 = (uint)lVar1 >> 0x1d | (int)((ulonglong)lVar1 >> 0x20) << 3;
      sprintf(acStack_270,DAT_00015864,uVar5,
              (uint)((ulonglong)((int)uVar12 - DAT_0001585c * uVar5) * (ulonglong)DAT_00015860 >>
                    0x26));
      iVar4 = sprintf(local_150,DAT_00015868,acStack_270,acStack_250);
      if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
        pcVar6 = *(char **)(param_1 + 0x20);
        do {
          pcVar7 = pcVar6 + 1;
          *pcVar6 = local_150[iVar8];
          if (pcVar7 == *(char **)(param_1 + 0x24)) {
            pcVar7 = *(char **)(param_1 + 0x18);
          }
          if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          }
          else {
            pcVar6 = (char *)(*(int *)(param_1 + 0x1c) + 1);
            *(char **)(param_1 + 0x1c) = pcVar6;
            if (*(char **)(param_1 + 0x24) == pcVar6) {
              *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
            }
          }
          iVar8 = iVar8 + 1;
          pcVar6 = pcVar7;
        } while (iVar4 != iVar8);
        *(char **)(param_1 + 0x20) = pcVar7;
      }
    }
  }
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== ssv6200_bss_info_changed @ 0001586c size=594 ===== */

void ssv6200_bss_info_changed(int param_1,uint *param_2,undefined4 *param_3,uint param_4)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_1 + 0x40);
  mutex_lock(iVar8 + 0x204);
  if ((int)(param_4 << 0x1d) < 0) {
    printk(DAT_00015ac0,*(undefined1 *)((int)param_3 + 0x17));
    if (*(char *)((int)param_3 + 0x17) == '\0') {
      uVar6 = *(uint *)(iVar8 + 0x878) & 0xffffffef;
    }
    else {
      uVar6 = *(uint *)(iVar8 + 0x878) | 0x10;
    }
    *(uint *)(iVar8 + 0x878) = uVar6;
  }
  if ((int)(param_4 << 0x1e) < 0) {
    printk(DAT_00015ac4,*(undefined1 *)((int)param_3 + 0x16));
    if (*(char *)((int)param_3 + 0x16) == '\0') {
      uVar6 = *(uint *)(iVar8 + 0x878) & 0xffffffdf;
    }
    else {
      uVar6 = *(uint *)(iVar8 + 0x878) | 0x20;
    }
    *(uint *)(iVar8 + 0x878) = uVar6;
  }
  iVar3 = (**(code **)(*(int *)(iVar8 + 0x210) + 0x104))(iVar8,param_2[0xae]);
  if (iVar3 != 0) {
    if ((int)(param_4 << 0x18) < 0) {
      (**(code **)(*(int *)(iVar8 + 0x210) + 0x98))(*(int *)(iVar8 + 0x210),*param_3,param_2[0xae]);
      puVar4 = (undefined1 *)*param_3;
      printk(DAT_00015ac8,*puVar4,puVar4[1],puVar4[2],puVar4[3],puVar4[4],puVar4[5]);
    }
    if ((int)(param_4 << 0x1c) < 0) {
      printk(DAT_00015acc,*(undefined1 *)(param_3 + 6));
      (**(code **)(*(int *)(iVar8 + 0x210) + 0x154))(*(int *)(iVar8 + 0x210),10);
      iVar3 = *(int *)(iVar8 + 0x210);
      if (*(char *)(param_3 + 6) == '\0') {
        pcVar7 = *(code **)(iVar3 + 0x158);
        uVar5 = 0x14;
      }
      else {
        pcVar7 = *(code **)(iVar3 + 0x158);
        uVar5 = 9;
      }
      (*pcVar7)(iVar3,uVar5);
    }
  }
  if ((int)(param_4 << 0x1b) < 0) {
    printk(DAT_00015ad0);
  }
  if ((int)(param_4 << 0x1a) < 0) {
    printk(DAT_00015ad4);
  }
  if (*param_2 == 2) {
    iVar3 = *(int *)(param_1 + 0x14);
    printk(DAT_00015ad8);
    if ((int)(param_4 << 0x1f) < 0) {
      uVar6 = param_2[0xae];
      iVar9 = 0;
      uVar1 = *(undefined1 *)(param_3 + 4);
      *(undefined1 *)(iVar8 + 0x974) = uVar1;
      ssv6xxx_interface_opertaion(iVar8,2,(char)param_2[0xae],0,(char)*param_2,0,uVar1);
      uVar5 = DAT_00015aec;
      if (*(char *)(iVar8 + 0x974) == '\0') {
        (**(code **)(*(int *)(iVar8 + 0x210) + 0x338))(*(int *)(iVar8 + 0x210),3,0,0x30);
        *(undefined1 *)(iVar8 + 0xd30) = 0;
        *(undefined2 *)(iVar8 + 0x976) = 0;
        *(undefined2 *)(iVar8 + 0x980) = 0;
      }
      else {
        *(short *)(iVar8 + 0x976) = (short)*(undefined4 *)(iVar3 + 4);
        printk(uVar5,*(undefined2 *)(param_3 + 5));
        iVar3 = iVar8;
        do {
          if (((int)((uint)*(ushort *)(iVar3 + 0x79a) << 0x1f) < 0) &&
             (*(uint **)(iVar3 + 0x7a4) == param_2)) {
            *(undefined2 *)(iVar9 * 0x18 + iVar8 + 0x798) = *(undefined2 *)(param_3 + 5);
            break;
          }
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + 0x18;
        } while (iVar9 != 9);
        *(undefined2 *)(iVar8 + 0x980) = *(undefined2 *)(param_3 + 5);
        if (uVar6 == 0) {
          iVar3 = 0x274;
        }
        else {
          iVar3 = 0;
        }
        if (*(int *)(iVar3 + iVar8 + 0x2b0) == 0) {
          (**(code **)(*(int *)(iVar8 + 0x210) + 0x338))(*(int *)(iVar8 + 0x210),3,1,0x30);
          *(undefined1 *)(iVar8 + 0xd30) = 1;
        }
      }
    }
    if (((int)(param_4 << 0x19) < 0) && (*(short *)(param_3 + 7) != 0)) {
      (**(code **)(*(int *)(iVar8 + 0x210) + 0x198))
                (*(int *)(iVar8 + 0x210),*(short *)(param_3 + 7),*param_3);
    }
  }
  if ((*param_2 & 0xfffffffd) == 1) {
    if ((param_4 & 0x81a0) != 0) {
      ssv6200_set_tim_work(iVar8);
    }
    if ((int)(param_4 << 0x19) < 0) {
      printk(DAT_00015adc,*(undefined2 *)(param_3 + 7));
      sVar2 = *(short *)(param_3 + 7);
      if (*(short *)(iVar8 + 0x88c) != sVar2) {
        *(short *)(iVar8 + 0x88c) = sVar2;
        ssv6x5x_beacon_set_interval
                  (*(undefined4 *)(iVar8 + 0x210),sVar2,*(undefined1 *)(iVar8 + 0x88e));
      }
    }
    if ((int)(param_4 << 0x16) < 0) {
      dbgprint(iVar8 + 0x9c0,*(undefined4 *)(iVar8 + 0x9bc),0x10,DAT_00015ae0,
               *(undefined1 *)((int)param_3 + 0x19));
      ssv6x5x_beacon_enable(*(undefined4 *)(iVar8 + 0x210),*(undefined1 *)((int)param_3 + 0x19));
    }
  }
  mutex_unlock(iVar8 + 0x204);
  printk(DAT_00015ae8,DAT_00015ae4);
  return;
}



/* ===== ssv6xxx_hci_dbgprint @ 00015af0 size=102 ===== */

void ssv6xxx_hci_dbgprint(int param_1,uint param_2,char *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char acStack_124 [256];
  int local_24;
  undefined4 uStack_4;
  
  piVar1 = DAT_00015b58;
  local_24 = *DAT_00015b58;
  uStack_4 = param_4;
  if ((param_2 & *(uint *)(param_1 + 0x9bc)) != 0) {
    iVar2 = vsnprintf(acStack_124,0xff,param_3,&uStack_4);
    if (iVar2 == 0xff) {
      printk(DAT_00015b60,DAT_00015b5c);
    }
    acStack_124[iVar2] = '\0';
    dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),param_2,DAT_00015b64,acStack_124);
  }
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== ssv6xxx_txbuf_free_skb @ 00015b68 size=14 ===== */

void ssv6xxx_txbuf_free_skb(int param_1,undefined4 *param_2)

{
  if (param_1 != 0) {
    ieee80211_free_txskb(*param_2,param_1);
    return;
  }
  return;
}



/* ===== ssv6xxx_frame_hdrlen @ 00015b76 size=124 ===== */

short ssv6xxx_frame_hdrlen(ushort *param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  short *psVar7;
  short asStack_38 [8];
  short local_28 [2];
  undefined4 auStack_24 [4];
  
  psVar7 = local_28;
  puVar4 = DAT_00015bf4;
  do {
    puVar5 = puVar4 + 2;
    uVar2 = puVar4[1];
    *(undefined4 *)psVar7 = *puVar4;
    *(undefined4 *)((int)psVar7 + 4) = uVar2;
    psVar7 = (short *)((int)psVar7 + 8);
    puVar4 = puVar5;
  } while (puVar5 != DAT_00015bf4 + 4);
  uVar6 = (uint)*param_1;
  if ((uVar6 & 0xc) == 4) {
    sVar1 = local_28[(int)(uVar6 - 0x80) >> 4];
  }
  else if ((*param_1 & 0xc) == 0) {
    if ((int)(uVar6 << 0x10) < 0) {
      if (param_2 == 0) {
        sVar1 = 0x18;
      }
      else {
        sVar1 = 0x1c;
      }
    }
    else {
      sVar1 = 0x18;
    }
  }
  else {
    if ((uVar6 & 0x300) == 0x300) {
      sVar3 = 0x1e;
    }
    else {
      sVar3 = 0x18;
    }
    sVar1 = sVar3;
    if ((((uVar6 & 0x8c) == 0x88) && (sVar1 = sVar3 + 2, (int)(uVar6 << 0x10) < 0)) &&
       (param_2 != 0)) {
      sVar1 = sVar3 + 6;
    }
  }
  return sVar1;
}



/* ===== ssv6xxx_ht_txtime @ 00015bf8 size=78 ===== */

int ssv6xxx_ht_txtime(uint param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(DAT_00015c48 + (param_3 + (param_1 & 7) * 2) * 2 + 0x132);
  iVar1 = __aeabi_uidiv(uVar2 + param_2 * 8 + 0x15,uVar2);
  if (param_4 == 0) {
    uVar2 = iVar1 << 2;
    if (param_5 != '\0') {
LAB_00015c42:
      iVar1 = uVar2 + 0x1e;
      goto LAB_00015c26;
    }
  }
  else {
    uVar2 = (uint)((ulonglong)(iVar1 * 0x12 + 4) * (ulonglong)DAT_00015c4c >> 0x22);
    if (param_5 != '\0') goto LAB_00015c42;
    uVar2 = uVar2 + 3 & 0xfffffffc;
  }
  iVar1 = uVar2 + 0x2a;
LAB_00015c26:
  return iVar1 + 10;
}



/* ===== ssv6xxx_non_ht_txtime @ 00015c50 size=82 ===== */

int ssv6xxx_non_ht_txtime(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else if (param_1 == 0) {
    if (param_4 == 0) {
      iVar3 = 0xc0;
    }
    else {
      iVar3 = 0x60;
    }
    iVar2 = __aeabi_uidiv(param_3 * 8000);
    iVar3 = iVar2 + 10 + iVar3;
  }
  else {
    if (param_1 != 1) {
      printk(DAT_00015ca4,param_1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(2,0x15c66);
      (*pcVar1)();
    }
    iVar3 = __aeabi_uidiv(param_3 * 8 + 0x15 +
                          ((int)((longlong)(param_2 << 2) * (longlong)DAT_00015ca8 >> 0x26) -
                          ((param_2 << 2) >> 0x1f)));
    iVar3 = (iVar3 + 9) * 4;
  }
  return iVar3;
}



/* ===== ssvxxx_complete_tx_skb @ 00015cac size=88 ===== */

void ssvxxx_complete_tx_skb(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  ieee80211_tx_info_clear_status(param_2);
  *param_2 = *param_2 | 0x200;
  param_2[5] = 100;
  *(undefined1 *)((int)param_2 + 0xb) = 0xff;
  if ((param_4 < 9) && ((int)((uint)*(ushort *)((int)param_1 + param_4 * 0x18 + 0x79a) << 0x1f) < 0)
     ) {
    (**(code **)(param_1[0x84] + 0x2f8))(param_1,param_1[param_4 + 0x34d],param_2);
  }
  ieee80211_tx_status(*param_1,param_3);
  return;
}



/* ===== ssv6xxx_post_tx_cb @ 00015d04 size=122 ===== */

void ssv6xxx_post_tx_cb(undefined4 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  bVar2 = false;
  piVar5 = (int *)(*(int *)(*(int *)(param_2 + 0x210) + 0x14) + 0x218);
  while (iVar3 = skb_dequeue(param_1), iVar3 != 0) {
    HintPreloadData(piVar5);
    do {
      ExclusiveAccess(piVar5);
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = *piVar5 + -1;
    iVar4 = (**(code **)(*(int *)(param_2 + 0x210) + 0x2c0))(*(int *)(param_2 + 0x210),iVar3);
    if (iVar4 == 0) {
      bVar2 = true;
      skb_queue_tail(param_2 + 0x984,iVar3);
    }
    else {
      skb_queue_tail(param_2 + 0x990,iVar3);
    }
  }
  if (!bVar2) {
    return;
  }
  queue_work(*(undefined4 *)(param_2 + 0xd10),param_2 + 0xd14);
  return;
}



/* ===== ssv6xxx_house_keeping @ 00015d7e size=154 ===== */

void ssv6xxx_house_keeping(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x87c) != '\0') && ((*(uint *)(param_1 + 0x878) & 0x82) == 0)) {
    if (*(char *)(*(int *)(param_1 + 0x210) + 0x7d4) != '\0') {
      queue_work(*(undefined4 *)(param_1 + 0xc58),param_1 + 0xc84);
    }
    if ((*(char *)(*(int *)(param_1 + 0x210) + 0xcf0) != '\0') && (*(int *)(param_1 + 0xcbc) == 0))
    {
      queue_work(*(undefined4 *)(param_1 + 0xc58),param_1 + 0xc94);
    }
    if (*(char *)(*(int *)(param_1 + 0x210) + 0xd4c) != '\0') {
      queue_work(*(undefined4 *)(param_1 + 0xc58),param_1 + 0xc5c);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x210) + 0xdb0);
    if (iVar1 != 0) {
      if (*DAT_00015e18 < (uint)(iVar1 * 10)) {
        *DAT_00015e18 = *DAT_00015e18 + 1;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0xc58);
        *DAT_00015e18 = 0;
        queue_work(uVar2,param_1 + 0xca4);
      }
    }
  }
  mod_timer(param_1 + 0xc3c,*DAT_00015e1c + 0x1e);
  return;
}



/* ===== ssv6xxx_get_channel @ 00015e20 size=10 ===== */

undefined4 ssv6xxx_get_channel(int param_1,uint *param_2)

{
  *param_2 = (uint)*(ushort *)(param_1 + 0x200);
  return 0;
}



/* ===== ssv6xxx_set_promisc @ 00015e2a size=24 ===== */

undefined4 ssv6xxx_set_promisc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_2 == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  pcVar2 = *(code **)(*(int *)(param_1 + 0x210) + 0x148);
  (*pcVar2)(*(int *)(param_1 + 0x210),uVar1,param_3,pcVar2,param_4);
  return 0;
}



/* ===== ssv6xxx_get_promisc @ 00015e42 size=36 ===== */

undefined4 ssv6xxx_get_promisc(int param_1,uint *param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x210) + 0x14c);
  uStack_10 = param_3;
  (*pcVar1)(*(int *)(param_1 + 0x210),&local_14,param_3,pcVar1,param_1);
  *param_2 = (uint)(local_14 == 2);
  return 0;
}



/* ===== ssv6xxx_config_vif_res @ 00015e66 size=214 ===== */

int * ssv6xxx_config_vif_res(int param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *__s;
  
  bVar2 = false;
  iVar4 = -1;
  iVar5 = 0;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x2b0 + iVar5 * 0x274);
    if (iVar3 == 0) {
      if (!bVar2) {
        bVar2 = true;
        *(char *)(param_1 + 0x874) = *(char *)(param_1 + 0x874) + '\x01';
        iVar4 = iVar5;
      }
    }
    else {
      iVar3 = memcmp(param_2 + 0xa4,(void *)(iVar3 + 0x290),6);
      if (iVar3 == 0) goto LAB_00015ea2;
    }
    if (iVar5 != 0) break;
    iVar5 = 1;
  }
  iVar5 = iVar4;
  if (iVar4 == -1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x15f3c);
    (*pcVar1)();
  }
LAB_00015ea2:
  __s = param_2 + 0xae;
  printk(DAT_00015f40,iVar5);
  memset(__s,0,0x30);
  param_2[0xae] = iVar5;
  iVar4 = iVar5 * 0x274 + param_1;
  memset((void *)(iVar5 * 0x274 + 0x2b0 + param_1),0,0x274);
  *(int **)(iVar4 + 0x2b0) = param_2;
  *(int **)(iVar4 + 0x2b4) = __s;
  param_2[0xaf] = (int)(param_2 + 0xaf);
  param_2[0xb0] = (int)(param_2 + 0xaf);
  param_2[0xb2] = 0;
  param_2[0xb3] = 0;
  param_2[0xb4] = 0;
  *(undefined2 *)(param_2 + 0xb5) = 0;
  *(bool *)((int)param_2 + 0x2d6) = *param_2 == 3;
  *(undefined1 *)((int)param_2 + 0x2d9) = 0xff;
  param_1 = param_2[0xae] * 0x274 + param_1;
  *(int *)(param_1 + 0x2b8) = *param_2;
  *(int **)(param_1 + 0x2b0) = param_2;
  return __s;
}



/* ===== ssv6xxx_enable_ps @ 00015f44 size=8 ===== */

void ssv6xxx_enable_ps(int param_1)

{
  *(undefined4 *)(param_1 + 0x97c) = 1;
  return;
}



/* ===== ssv6200_not_dual_intf_on_line @ 00015f4c size=64 ===== */

undefined4 ssv6200_not_dual_intf_on_line(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = param_1 + 0x4e8;
  iVar4 = 0;
  do {
    piVar2 = *(int **)(param_1 + 0x2b0);
    if ((piVar2 != (int *)0x0) && ((*piVar2 == 2 || (*piVar2 == 8)))) {
      if ((char)piVar2[6] != '\0') {
        iVar4 = iVar4 + 1;
      }
      if (*(char *)((int)piVar2 + 0x296) != '\0') {
        iVar3 = iVar3 + 1;
      }
    }
    param_1 = param_1 + 0x274;
  } while (param_1 != iVar5);
  if (iVar3 < 1) {
    uVar1 = 0;
    if (iVar4 != 2) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== ssvxxx_get_sta_assco_cnt @ 00015f8c size=48 ===== */

uint ssvxxx_get_sta_assco_cnt(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x2b0);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if ((*piVar1 == 2) || (*piVar1 == 8)) {
      uVar2 = (uint)*(byte *)(piVar1 + 6);
    }
    else {
      uVar2 = 0;
    }
  }
  piVar1 = *(int **)(param_1 + 0x524);
  if ((piVar1 != (int *)0x0) && (((*piVar1 == 2 || (*piVar1 == 8)) && ((char)piVar1[6] != '\0')))) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ===== ssv6200_is_scan_allow @ 00015fbc size=38 ===== */

char ssv6200_is_scan_allow(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *(char *)(*(int *)(param_1 + 0x210) + 0xdb4);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x870);
    if (iVar1 == 0) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = *(int *)(iVar1 + 700) == iVar1 + 700;
    }
  }
  return cVar2;
}



/* ===== ssv6200_config @ 00015fe2 size=464 ===== */

undefined4 ssv6200_config(uint *param_1,uint param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint local_2c;
  undefined4 uStack_28;
  
  puVar8 = (undefined4 *)param_1[0x10];
  local_2c = param_2;
  uStack_28 = param_3;
  mutex_lock(puVar8 + 0x81);
  if ((int)(param_2 << 0x1a) < 0) {
    printk(DAT_000161b4,param_1[1]);
  }
  if ((int)(param_2 << 0x1b) < 0) {
    uVar2 = DAT_000161b8;
    if (-1 < (int)(*param_1 << 0x1e)) {
      uVar2 = DAT_000161bc;
    }
    printk(uVar2,*(undefined2 *)(puVar8 + 0x260));
  }
  uVar2 = 0;
  if ((param_2 & 8) != 0) {
    if ((*param_1 & 1) == 0) {
      printk(DAT_000161c8);
      uVar2 = ssv6xxx_set_promisc(puVar8,0);
      uVar6 = puVar8[0x21e] & 0xffffefff;
    }
    else {
      printk(DAT_000161c0);
      uVar2 = ssv6xxx_set_promisc(puVar8,1);
      uVar6 = puVar8[0x21e] | 0x1000;
    }
    puVar8[0x21e] = uVar6;
  }
  if (((int)(param_2 << 0x19) < 0) && (uVar6 = puVar8[0x21e], (uVar6 & 0x102) == 0)) {
    uVar9 = param_1[5];
    uVar3 = cfg80211_get_chandef_type(param_1 + 5);
    if (puVar8[0x30c] == 0) {
      if ((int)(*param_1 << 0x1c) < 0) {
        iVar4 = ssv6200_is_scan_allow(puVar8);
        uVar5 = DAT_000161d0;
        if ((iVar4 != 0) &&
           ((*(short *)(puVar8 + 0x80) != *(short *)(uVar9 + 10) ||
            (*(ushort *)((int)puVar8 + 0x202) != uVar3)))) {
          iVar10 = 0;
          puVar8[0x21e] = puVar8[0x21e] | 4;
          ieee80211_stop_queues(*puVar8);
          iVar4 = DAT_000161dc;
          local_2c = 0;
          while (((uVar5 = DAT_000161cc, iVar10 < 200 && (*(char *)(puVar8 + 0x33d) != '\0')) ||
                 (0 < (int)local_2c))) {
            pcVar7 = *(code **)(iVar4 + 4);
            *(undefined1 *)(puVar8 + 0x33d) = 0;
            iVar10 = iVar10 + 1;
            (*pcVar7)(uVar5);
            ssv6xxx_hwif_get_tx_req_cnt(*(undefined4 *)(puVar8[0x84] + 0x14),&local_2c);
          }
          *(undefined1 *)((int)puVar8 + 0x97a) = 1;
          uVar1 = *(undefined2 *)(uVar9 + 10);
          *(short *)((int)puVar8 + 0x202) = (short)uVar3;
          *(undefined2 *)(puVar8 + 0x80) = uVar1;
          (**(code **)(puVar8[0x84] + 0x31c))(puVar8,uVar9,uVar3);
          *(undefined1 *)((int)puVar8 + 0x97a) = 0;
          ieee80211_wake_queues(*puVar8);
          goto LAB_00016068;
        }
      }
      else if ((((puVar8[0x7f] == 0) || ((uVar6 & 4) != 0)) ||
               (*(short *)(puVar8 + 0x80) != *(short *)(uVar9 + 10))) ||
              (uVar5 = DAT_000161d8, *(ushort *)((int)puVar8 + 0x202) != uVar3)) {
        ieee80211_stop_queues(*puVar8);
        iVar4 = DAT_000161dc;
        uVar5 = DAT_000161cc;
        do {
          (**(code **)(iVar4 + 4))(uVar5);
          ssv6xxx_hwif_get_tx_req_cnt(*(undefined4 *)(puVar8[0x84] + 0x14),&local_2c);
        } while (0 < (int)local_2c);
        uVar1 = *(undefined2 *)(uVar9 + 10);
        *(short *)((int)puVar8 + 0x202) = (short)uVar3;
        *(undefined2 *)(puVar8 + 0x80) = uVar1;
        (**(code **)(puVar8[0x84] + 0x31c))(puVar8,uVar9,uVar3,0);
        ieee80211_wake_queues(*puVar8);
        puVar8[0x7f] = uVar9;
        puVar8[0x21e] = puVar8[0x21e] & 0xfffffffb;
        goto LAB_00016068;
      }
      dev_printk(DAT_000161d4,puVar8[1],uVar5);
    }
    else {
      printk(DAT_000161c4);
    }
  }
LAB_00016068:
  mutex_unlock(puVar8 + 0x81);
  return uVar2;
}



/* ===== ssv6200_rx_flow_check @ 000161e0 size=92 ===== */

void ssv6200_rx_flow_check(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*param_1 < 2) && (*(char *)((int)param_1 + 0x33) != '\0')) {
    iVar3 = (*param_1 + 1 & 1) * 0x18 + param_2;
    uVar1 = (uint)*(ushort *)(iVar3 + 0x79a);
    if ((uVar1 == 0) ||
       (((int)(uVar1 << 0x1f) < 0 && (*(char *)(*(int *)(iVar3 + 0x7a0) + 0x13a) != '\0')))) {
      iVar3 = *(int *)(param_2 + 0x210);
      if ((*(uint *)(iVar3 + 0x7cc) & 3) == 1) {
        uVar2 = 0x14;
      }
      else {
        uVar2 = 0x1cb4;
      }
      (**(code **)(iVar3 + 0x88))(iVar3,0,uVar2);
      printk(DAT_0001623c,*param_1);
      return;
    }
  }
  return;
}



/* ===== ssv6200_sta_remove @ 00016240 size=396 ===== */

undefined4 ssv6200_sta_remove(int param_1,int *param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *__s;
  
  if (*(int *)(param_3 + 0x108) < 9) {
    iVar3 = *(int *)(param_1 + 0x40);
    _dev_notice(*(undefined4 *)(iVar3 + 4),DAT_000163d0,*(int *)(param_3 + 0x108),
                *(undefined1 *)(param_3 + 0x14),*(undefined1 *)(param_3 + 0x15),
                *(undefined1 *)(param_3 + 0x16),*(undefined1 *)(param_3 + 0x17),
                *(undefined1 *)(param_3 + 0x18),*(undefined1 *)(param_3 + 0x19),param_2[0xae]);
    mutex_lock(iVar3 + 0x204);
    if (*(int *)(param_3 + 0x108) != -1) {
      iVar4 = *(int *)(param_3 + 0x108) * 0x18;
      iVar5 = iVar4 + iVar3;
      __s = (void *)(iVar4 + 0x798 + iVar3);
      (**(code **)(*(int *)(*(int *)(iVar3 + 0x210) + 0x10) + 0x54))
                (*(undefined4 *)(*(int *)(iVar3 + 0x210) + 0x14),*(undefined4 *)(iVar5 + 0x79c));
      _ssv6200_sta_operation(iVar3,param_3,*(undefined4 *)(iVar5 + 0x79c),0,2);
      down_write(iVar3 + 0xc20);
      ssv6200_rx_flow_check(param_3 + 0x108,iVar3);
      disableIRQinterrupts();
      param_2[0xb1] = param_2[0xb1] & ~(1 << (*(uint *)(param_3 + 0x108) & 0xff));
      (**(code **)(*(int *)(iVar3 + 0x210) + 200))(iVar3,param_3,__s);
      disableIRQinterrupts();
      uVar6 = *(uint *)(iVar5 + 0x79c);
      ssv6xxx_debugfs_remove_sta(iVar3,__s);
      disableIRQinterrupts();
      memset(__s,0,0x18);
      *(undefined4 *)(param_3 + 0x108) = 0xffffffff;
      iVar4 = *(int *)(param_3 + 0x110);
      piVar2 = *(int **)(param_3 + 0x114);
      *(int **)(iVar4 + 4) = piVar2;
      *piVar2 = iVar4;
      *(undefined4 *)(param_3 + 0x110) = 0x100;
      *(undefined4 *)(param_3 + 0x114) = 0x122;
      if (((int *)param_2[0xaf] == param_2 + 0xaf) && (*param_2 == 2)) {
        param_2[0xb2] = 0;
        param_2[0xb3] = 0;
        *(undefined2 *)(iVar3 + 0x980) = 0;
      }
      uVar6 = uVar6 & 0xff;
      (**(code **)(*(int *)(*(int *)(iVar3 + 0x210) + 0x10) + 0x3c))
                (*(undefined4 *)(*(int *)(iVar3 + 0x210) + 0x14),uVar6);
      (**(code **)(*(int *)(*(int *)(iVar3 + 0x210) + 0x10) + 0x50))
                (*(undefined4 *)(*(int *)(iVar3 + 0x210) + 0x14),uVar6);
      (**(code **)(*(int *)(*(int *)(iVar3 + 0x210) + 0x10) + 0x40))
                (*(undefined4 *)(*(int *)(iVar3 + 0x210) + 0x14),uVar6);
      (**(code **)(*(int *)(iVar3 + 0x210) + 0xc0))(iVar3,uVar6);
      printk(DAT_000163d4,uVar6);
      up_write(iVar3 + 0xc20);
      (**(code **)(*(int *)(*(int *)(iVar3 + 0x210) + 0x10) + 0x58))
                (*(undefined4 *)(*(int *)(iVar3 + 0x210) + 0x14),uVar6);
    }
    mutex_unlock(iVar3 + 0x204);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(2,0x16252);
  (*pcVar1)();
}



/* ===== ssv6xxx_scan_opertaion @ 000163d8 size=106 ===== */

void ssv6xxx_scan_opertaion(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  iVar1 = ssv_skb_alloc(param_1,0x10);
  if (iVar1 == 0) {
    printk(DAT_00016448,DAT_00016444);
    return;
  }
  skb_put(iVar1,0x10);
  puVar3 = *(undefined1 **)(iVar1 + 0xa4);
  memset(puVar3 + 2,0,0x12);
  puVar3[2] = 5;
  puVar3[3] = 0xd;
  if (param_2 == 0) {
    uVar2 = 0x1f;
  }
  else {
    uVar2 = 0x1e;
  }
  *(undefined4 *)(puVar3 + 4) = uVar2;
  *puVar3 = 0x10;
  puVar3[1] = 0;
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
  if (iVar1 == 0) {
    return;
  }
  printk(DAT_0001644c);
  return;
}



/* ===== ssv6200_sw_scan_complete @ 00016450 size=100 ===== */

void ssv6200_sw_scan_complete(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x40);
  iVar3 = ssv6xxx_hwif_property(*(undefined4 *)(*(int *)(iVar4 + 0x210) + 0x14));
  ssv6xxx_scan_opertaion(iVar4,0);
  if (*(char *)(iVar4 + 0xd30) != '\0') {
    (**(code **)(*(int *)(iVar4 + 0x210) + 0x338))(*(int *)(iVar4 + 0x210),3,1,0x30);
  }
  if (*(char *)(iVar4 + 0x974) != '\0') {
    (**(code **)(*(int *)(iVar4 + 0x210) + 400))();
  }
  uVar2 = DAT_000164b8;
  uVar1 = DAT_000164b4;
  if (iVar3 << 0x1e < 0) {
    *(uint *)(*(int *)(iVar4 + 0x210) + 0xcd0) =
         *(uint *)(*(int *)(iVar4 + 0x210) + 0xcd0) & 0xfffffffb;
  }
  *(undefined1 *)(iVar4 + 0x979) = 0;
  printk(uVar2,uVar1);
  return;
}



/* ===== ssv6200_sw_scan_start @ 000164bc size=94 ===== */

void ssv6200_sw_scan_start(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x40);
  uVar2 = ssv6xxx_hwif_property(*(undefined4 *)(*(int *)(iVar3 + 0x210) + 0x14));
  ssv6xxx_scan_opertaion(iVar3,1);
  if (*(char *)(iVar3 + 0xd30) != '\0') {
    (**(code **)(*(int *)(iVar3 + 0x210) + 0x338))(*(int *)(iVar3 + 0x210),3,0,0x30);
  }
  (**(code **)(*(int *)(iVar3 + 0x210) + 0x194))();
  if ((uVar2 & 2) != 0) {
    *(uint *)(*(int *)(iVar3 + 0x210) + 0xcd0) = *(uint *)(*(int *)(iVar3 + 0x210) + 0xcd0) | 4;
  }
  uVar1 = DAT_0001651c;
  *(undefined1 *)(iVar3 + 0x979) = 1;
  printk(DAT_00016520,uVar1);
  return;
}



/* ===== ssv6xxx_set_ampdu_rx_add_work @ 00016524 size=40 ===== */

void ssv6xxx_set_ampdu_rx_add_work(int param_1)

{
  (**(code **)(*(int *)(param_1 + -0x744) + 0x180))
            (*(int *)(param_1 + -0x744),1,param_1 + -0xb,*(undefined2 *)(param_1 + -4),
             *(undefined2 *)(param_1 + -2),0x40);
  return;
}



/* ===== ssv6xxx_set_ampdu_rx_del_work @ 0001654c size=40 ===== */

void ssv6xxx_set_ampdu_rx_del_work(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 local_a;
  
  local_e = 0;
  uStack_c = 0;
  local_a = 0;
  (**(code **)(*(int *)(param_1 + -0x754) + 0x180))
            (*(int *)(param_1 + -0x754),0,&local_e,0,0,0,param_3);
  return;
}



/* ===== ssv6xxx_enable_usb_acc @ 00016574 size=10 ===== */

void ssv6xxx_enable_usb_acc(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001657c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x210) + 0x22c))();
  return;
}



/* ===== ssv6xxx_disable_usb_acc @ 0001657e size=10 ===== */

void ssv6xxx_disable_usb_acc(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00016586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x210) + 0x230))();
  return;
}



/* ===== ssv6xxx_jump_to_rom @ 00016588 size=10 ===== */

void ssv6xxx_jump_to_rom(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00016590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x210) + 0x238))();
  return;
}



/* ===== ssv6xxx_rx_mode @ 00016592 size=10 ===== */

undefined4 ssv6xxx_rx_mode(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x210) + 0xf5c);
}



/* ===== ssv6200_tx_flow_control @ 0001659c size=196 ===== */

void ssv6200_tx_flow_control(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (**(code **)(*(int *)(param_1[0x84] + 0x10) + 0x5c))
                    (*(undefined4 *)(param_1[0x84] + 0x14));
  param_1[0x32f] = uVar1;
  if (uVar1 == 0) {
    param_1[0x32d] = 0;
    param_1[0x32e] = 0;
  }
  iVar3 = param_1[0x84];
  if (*(char *)(iVar3 + 0xcf0) == '\0') {
    return;
  }
  if ((int)(param_1[0x26f] << 0x10) < 0) {
    uVar2 = (**(code **)(*(int *)(iVar3 + 0x10) + 0x5c))(*(undefined4 *)(iVar3 + 0x14));
    printk(DAT_00016660,uVar2);
  }
  if (param_2 == 0) {
    if ((param_1[0x21e] & 0x400) == 0) {
      return;
    }
    uVar4 = *(uint *)(param_1[0x84] + 0xcf4);
    if (uVar4 <= uVar1) {
      return;
    }
    if ((*(char *)(param_1[0x84] + 0xd14) == '\0') || (uVar1 < uVar4 << 2)) {
      ieee80211_wake_queues(*param_1);
    }
    uVar1 = param_1[0x21e] & 0xfffffbff;
  }
  else {
    if ((param_1[0x21e] & 0x400) != 0) {
      return;
    }
    iVar3 = param_1[0x84];
    if ((param_3 == 0) && (uVar1 <= *(uint *)(iVar3 + 0xcf8))) {
      return;
    }
    param_1[0x32d] = param_1[0x32d] + 1;
    if ((*(char *)(iVar3 + 0xd14) == '\0') || ((uint)(*(int *)(iVar3 + 0xcf8) * 4) < uVar1)) {
      param_1[0x32e] = param_1[0x32e] + 1;
      ieee80211_stop_queues(*param_1);
    }
    uVar1 = param_1[0x21e] | 0x400;
  }
  param_1[0x21e] = uVar1;
  return;
}



/* ===== ssv6xxx_tx_done_process @ 00016664 size=368 ===== */

void ssv6xxx_tx_done_process(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int *piVar7;
  int *piVar8;
  
  piVar7 = (int *)(param_1 + -0xd14);
  do {
    while( true ) {
      iVar1 = skb_dequeue(param_1 + -0x390);
      if (iVar1 == 0) {
        return;
      }
      piVar8 = *(int **)(iVar1 + 0xa0);
      iVar2 = (**(code **)(*(int *)(param_1 + -0xb04) + 0x278))();
      if ((((iVar2 == 2) &&
           (iVar2 = (**(code **)(*(int *)(param_1 + -0xb04) + 700))(iVar1), iVar2 == 0)) &&
          (*(int *)(param_1 + -0x49c) << 0x16 < 0)) &&
         ((*(char *)((int)piVar8 + 0x2e) == '\0' &&
          (iVar2 = (**(code **)(*(int *)(param_1 + -0xb04) + 0x27c))(iVar1), iVar2 != 0x32))))
      break;
LAB_00016694:
      ssv_skb_free(piVar7,iVar1);
    }
    iVar2 = (**(code **)(*(int *)(param_1 + -0xb04) + 0x280))(iVar1);
    uVar3 = (**(code **)(*(int *)(param_1 + -0xb04) + 0x274))();
    skb_pull(iVar1,uVar3);
    if (iVar2 < 9) {
      (**(code **)(*(int *)(*(int *)(param_1 + -0xb04) + 0x10) + 0x54))
                (*(undefined4 *)(*(int *)(param_1 + -0xb04) + 0x14),iVar2);
    }
    iVar4 = *piVar8;
    if (iVar4 != 0) {
      puVar5 = *(ushort **)(iVar1 + 0xa4);
      if ((puVar5[2] != *(ushort *)(iVar4 + 0x14) || puVar5[3] != *(ushort *)(iVar4 + 0x16)) ||
          puVar5[4] != *(ushort *)(iVar4 + 0x18)) {
        if (iVar2 < 9) {
          (**(code **)(*(int *)(*(int *)(param_1 + -0xb04) + 0x10) + 0x58))
                    (*(undefined4 *)(*(int *)(param_1 + -0xb04) + 0x14),iVar2);
        }
        goto LAB_00016694;
      }
      if ((*puVar5 & 0x300) == 0x300) {
        puVar6 = puVar5 + 0xf;
      }
      else {
        puVar6 = puVar5 + 0xc;
      }
      if ((((*puVar5 & 0x8c) == 0x88) && (*(char *)(iVar4 + 0x1e) != '\0')) &&
         ((-1 < *(int *)(iVar1 + 0x18) << 0x19 &&
          ((((*(short *)(iVar1 + 0x88) != -0x7178 && (1 < *(int *)(*piVar7 + 0x18) - 6U)) &&
            (*(int *)(*piVar7 + 0x18) != 0)) &&
           ((*(short *)(iVar1 + 0x5c) != 0 &&
            (iVar4 = iVar4 + ((byte)*puVar6 & 0xf) * 4, *(int *)(iVar4 + 0x118) == 0)))))))) {
        *(undefined4 *)(iVar4 + 0x118) = 1;
        ieee80211_start_tx_ba_session();
      }
    }
    if (iVar2 < 9) {
      (**(code **)(*(int *)(*(int *)(param_1 + -0xb04) + 0x10) + 0x58))
                (*(undefined4 *)(*(int *)(param_1 + -0xb04) + 0x14),iVar2);
    }
    if (*(char *)((int)piVar8 + 0x2a) == '\0') {
      ssvxxx_complete_tx_skb(piVar7,iVar1 + 0x18,iVar1,iVar2);
    }
    else {
      ssv_skb_free(piVar7,iVar1);
    }
    ssv6200_tx_flow_control(piVar7,0);
  } while( true );
}



/* ===== ssv6xxx_hci_update_flowctl_cb @ 000167d4 size=8 ===== */

void ssv6xxx_hci_update_flowctl_cb(undefined4 param_1)

{
  ssv6200_tx_flow_control(param_1,0);
  return;
}



/* ===== ssv6200_tx @ 000167dc size=590 ===== */

void ssv6200_tx(int param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  undefined4 uVar11;
  ushort *puVar12;
  undefined4 *__s;
  undefined4 *puVar13;
  
  __s = *(undefined4 **)(param_3 + 0xa0);
  puVar12 = *(ushort **)(param_3 + 0xa4);
  iVar9 = *(int *)(param_1 + 0x40);
  puVar13 = param_2;
  memset(__s,0,0x30);
  uVar11 = 0;
  if (param_2 != (undefined4 *)0x0) {
    uVar11 = *param_2;
  }
  *__s = uVar11;
  puVar7 = *(ushort **)(param_3 + 0xa4);
  *(int *)(iVar9 + 0x260) = *(int *)(iVar9 + 0x260) + 1;
  uVar1 = *puVar7;
  uVar8 = uVar1 & 0xc;
  if (uVar8 == 8) {
    uVar8 = *(int *)(iVar9 + 0x268) + 1;
    *(uint *)(iVar9 + 0x268) = uVar8;
  }
  else if ((uVar1 & 0xc) == 0) {
    *(int *)(iVar9 + 0x264) = *(int *)(iVar9 + 0x264) + 1;
    uVar1 = *puVar7;
    uVar8 = uVar1 & 0xfc;
    if (uVar8 == 0xb0) {
      uVar8 = *(int *)(iVar9 + 0x26c) + 1;
      *(uint *)(iVar9 + 0x26c) = uVar8;
    }
    else if (uVar8 == 0xc0) {
      uVar8 = *(int *)(iVar9 + 0x270) + 1;
      *(uint *)(iVar9 + 0x270) = uVar8;
    }
    else if ((uVar1 & 0xfc) == 0) {
      uVar8 = *(int *)(iVar9 + 0x274) + 1;
      *(uint *)(iVar9 + 0x274) = uVar8;
    }
    else if (uVar8 == 0x10) {
      uVar8 = *(int *)(iVar9 + 0x278) + 1;
      *(uint *)(iVar9 + 0x278) = uVar8;
    }
    else if (uVar8 == 0x40) {
      uVar8 = *(int *)(iVar9 + 0x27c) + 1;
      *(uint *)(iVar9 + 0x27c) = uVar8;
    }
    else if (uVar8 == 0x50) {
      uVar8 = *(int *)(iVar9 + 0x280) + 1;
      *(uint *)(iVar9 + 0x280) = uVar8;
    }
  }
  ssv6200_tx_flow_control(iVar9,1,0,uVar8,param_1,puVar13);
  if (((*(uint *)(iVar9 + 0x878) & 0x202) != 0x200) ||
     ((*(char *)(*(int *)(iVar9 + 0x210) + 0xcf0) != '\0' &&
      ((uint)(*(int *)(*(int *)(iVar9 + 0x210) + 0xcf8) * 8) < *(uint *)(iVar9 + 0xcbc))))) {
    dev_kfree_skb_any(param_3);
    return;
  }
  if (*(int *)(param_3 + 0x18) << 0x1e < 0) {
    if (*(int *)(param_3 + 0x18) << 0x1b < 0) {
      *(short *)(iVar9 + 0x214) = *(short *)(iVar9 + 0x214) + 0x10;
    }
    uVar1 = puVar12[0xb];
    puVar12[0xb] = uVar1 & 0xf;
    puVar12[0xb] = uVar1 & 0xf | *(ushort *)(iVar9 + 0x214);
  }
  if ((*(int *)(param_3 + 0x18) << 0x19 < 0) &&
     (iVar2 = ssv6xxx_special_tx_frame(param_3), iVar2 != 0)) {
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) & 0xffffffbf;
  }
  if ((((**(ushort **)(param_3 + 0xa4) & 0xc) == 0) ||
      ((**(ushort **)(param_3 + 0xa4) & 0x7c) == 0x48)) || (**(int **)(param_3 + 0xa0) == 0)) {
    iVar2 = 9;
  }
  else {
    iVar2 = *(int *)(**(int **)(param_3 + 0xa0) + 0x108);
    if (8 < iVar2) {
      iVar2 = 9;
    }
  }
  uVar11 = 0;
  if (*(char *)(*(int *)(iVar9 + 0x210) + 0xd78) != '\0') {
    uVar11 = ssv6xxx_special_tx_frame(param_3);
  }
  (**(code **)(*(int *)(iVar9 + 0x210) + 0x260))(iVar9,param_3);
  *(undefined1 *)((int)__s + 0x2a) = 0;
  iVar3 = *(int *)(iVar9 + 0x210);
  if (*(char *)(iVar3 + 0xd14) == '\0') {
    pcVar10 = *(code **)(*(int *)(iVar3 + 0x10) + 0x30);
  }
  else {
    if ((((*(int *)(puVar12 + 2) << 0x1f < 0) ||
         ((*(char *)(iVar3 + 0xcf0) != '\0' && (*(int *)(iVar9 + 0x878) << 0x15 < 0)))) ||
        ((*puVar12 & 0xc) != 8)) || ((*puVar12 & 0x7c) == 0x48)) {
      iVar9 = *(int *)(iVar3 + 0x10);
    }
    else {
      iVar4 = skb_copy(param_3,0xa20);
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 0xa0);
        uVar5 = (**(code **)(*(int *)(iVar9 + 0x210) + 0x280))(param_3);
        uVar6 = (**(code **)(*(int *)(iVar9 + 0x210) + 0x274))();
        skb_pull(param_3,uVar6);
        ssvxxx_complete_tx_skb(iVar9,param_3 + 0x18,param_3,uVar5);
        *(undefined1 *)(iVar3 + 0x2a) = 1;
        iVar3 = *(int *)(iVar9 + 0x210);
        pcVar10 = *(code **)(*(int *)(iVar3 + 0x10) + 0x30);
        param_3 = iVar4;
        goto LAB_00016a10;
      }
      printk(DAT_00016a2c);
      iVar3 = *(int *)(iVar9 + 0x210);
      iVar9 = *(int *)(iVar3 + 0x10);
    }
    pcVar10 = *(code **)(iVar9 + 0x30);
  }
LAB_00016a10:
  (*pcVar10)(*(undefined4 *)(iVar3 + 0x14),param_3,iVar2,uVar11,0);
  return;
}



/* ===== ssv6xxx_beacon_miss_work @ 00016a30 size=418 ===== */

void ssv6xxx_beacon_miss_work(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  void *pvVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar9 = param_1 + -0x894;
  uVar5 = *(undefined4 *)(*(int *)(param_1 + -0x684) + 0x7bc);
  uVar1 = *(undefined2 *)(*(int *)(param_1 + -0x684) + 0x7c0);
  iVar2 = ssv_skb_alloc(iVar9,0x18);
  if (iVar2 == 0) {
    return;
  }
  iVar12 = param_1 + 0x38c;
  down_read(iVar12);
  piVar7 = *(int **)(param_1 + -0x5e4);
  if ((((piVar7 == (int *)0x0) || (*piVar7 != 2)) || (*(char *)((int)piVar7 + 0x296) != '\0')) ||
     (iVar10 = 0, (char)piVar7[6] == '\0')) {
    piVar7 = *(int **)(param_1 + -0x370);
    if (((piVar7 == (int *)0x0) || (*piVar7 != 2)) ||
       ((*(char *)((int)piVar7 + 0x296) != '\0' || ((char)piVar7[6] == '\0')))) goto LAB_00016aac;
    iVar10 = 1;
  }
  if (piVar7 + 0xaf == (int *)piVar7[0xaf]) {
    printk(DAT_00016bd8,DAT_00016bd4);
  }
  else {
    for (piVar8 = (int *)piVar7[0xaf]; iVar6 = piVar8[-2], piVar7 + 0xaf != piVar8;
        piVar8 = (int *)*piVar8) {
      if ((iVar6 != -1) && ((int)((uint)*(ushort *)(iVar6 * 0x18 + iVar9 + 0x79a) << 0x1f) < 0))
      goto LAB_00016ad6;
    }
    if (iVar6 != -1) {
LAB_00016ad6:
      if ((-0x51 < (int)-((uint)piVar8[0xc] >> 6)) &&
         (iVar6 = *(int *)(iVar6 * 0x18 + iVar9 + 0x7a0), iVar6 != 0)) {
        memset(*(void **)(iVar2 + 0xa0),0,0x30);
        iVar11 = **(int **)(iVar10 * 0x274 + iVar9 + 0x2b4);
        iVar10 = (**(code **)(*(int *)(param_1 + -0x684) + 0x274))();
        skb_put(iVar2,iVar10 + 0x18);
        iVar13 = *(int *)(iVar2 + 0xa4);
        pvVar3 = memset((void *)(iVar13 + iVar10),0,0x18);
        *(short *)(param_1 + -0x680) = *(short *)(param_1 + -0x680) + 0x10;
        uVar4 = *(ushort *)((int)pvVar3 + 0x16) & 0xf;
        *(ushort *)((int)pvVar3 + 0x16) = uVar4;
        *(ushort *)((int)pvVar3 + 0x16) = uVar4 | *(ushort *)(param_1 + -0x680);
        *(undefined2 *)(iVar13 + iVar10) = 0x148;
        iVar10 = iVar11 * 6 + iVar9;
        *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)(iVar10 + 0x924);
        *(undefined2 *)((int)pvVar3 + 8) = *(undefined2 *)(iVar10 + 0x928);
        *(undefined4 *)((int)pvVar3 + 10) = uVar5;
        *(undefined2 *)((int)pvVar3 + 0xe) = uVar1;
        *(undefined4 *)((int)pvVar3 + 0x10) = *(undefined4 *)(iVar10 + 0x924);
        *(undefined2 *)((int)pvVar3 + 0x14) = *(undefined2 *)(iVar10 + 0x928);
        iVar9 = (**(code **)(*(int *)(param_1 + -0x684) + 0x270))(iVar9,iVar6,iVar2);
        if (-1 < iVar9) {
          iVar9 = (**(code **)(*(int *)(*(int *)(param_1 + -0x684) + 0x10) + 0x30))
                            (*(undefined4 *)(*(int *)(param_1 + -0x684) + 0x14),iVar2,9,0,0);
          if (-1 < iVar9) {
            up_read(iVar12);
            return;
          }
        }
      }
    }
  }
LAB_00016aac:
  up_read(iVar12);
  dev_kfree_skb_any(iVar2);
  return;
}



/* ===== ssv6xxx_sta_keep_alive_work @ 00016bdc size=376 ===== */

void ssv6xxx_sta_keep_alive_work(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar8 = param_1 + -0xca4;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + -0xa94) + 0x7bc);
  uVar1 = *(undefined2 *)(*(int *)(param_1 + -0xa94) + 0x7c0);
  iVar2 = ssv_skb_alloc(iVar8,0x1a,uVar4,uVar1,param_1,param_2,param_3);
  if (iVar2 == 0) {
    return;
  }
  iVar11 = param_1 + -0x84;
  down_read(iVar11);
  piVar6 = *(int **)(param_1 + -0x9f4);
  if ((((piVar6 == (int *)0x0) || (*piVar6 != 2)) || (*(char *)((int)piVar6 + 0x296) != '\0')) ||
     (iVar9 = 0, (char)piVar6[6] == '\0')) {
    piVar6 = *(int **)(param_1 + -0x780);
    if (((piVar6 == (int *)0x0) || (*piVar6 != 2)) ||
       ((*(char *)((int)piVar6 + 0x296) != '\0' || ((char)piVar6[6] == '\0')))) goto LAB_00016c4c;
    iVar9 = 1;
  }
  if (piVar6 + 0xaf != (int *)piVar6[0xaf]) {
    for (piVar7 = (int *)piVar6[0xaf]; iVar5 = piVar7[-2], piVar6 + 0xaf != piVar7;
        piVar7 = (int *)*piVar7) {
      if ((iVar5 != -1) && ((int)((uint)*(ushort *)(iVar5 * 0x18 + iVar8 + 0x79a) << 0x1f) < 0))
      goto LAB_00016c76;
    }
    if (iVar5 != -1) {
LAB_00016c76:
      iVar5 = *(int *)(iVar5 * 0x18 + iVar8 + 0x7a0);
      if (iVar5 != 0) {
        memset(*(void **)(iVar2 + 0xa0),0,0x30);
        iVar10 = **(int **)(iVar9 * 0x274 + iVar8 + 0x2b4);
        iVar9 = (**(code **)(*(int *)(param_1 + -0xa94) + 0x274))();
        skb_put(iVar2,iVar9 + 0x1a);
        iVar12 = *(int *)(iVar2 + 0xa4);
        pvVar3 = memset((void *)(iVar12 + iVar9),0,0x1a);
        *(undefined2 *)((int)pvVar3 + 0x16) = 0;
        *(undefined2 *)(iVar12 + iVar9) = 0x1c8;
        iVar9 = iVar10 * 6 + iVar8;
        *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)(iVar9 + 0x924);
        *(undefined2 *)((int)pvVar3 + 8) = *(undefined2 *)(iVar9 + 0x928);
        *(undefined4 *)((int)pvVar3 + 10) = uVar4;
        *(undefined2 *)((int)pvVar3 + 0xe) = uVar1;
        *(undefined4 *)((int)pvVar3 + 0x10) = *(undefined4 *)(iVar9 + 0x924);
        uVar1 = *(undefined2 *)(iVar9 + 0x928);
        *(undefined2 *)((int)pvVar3 + 0x18) = 0;
        *(undefined2 *)((int)pvVar3 + 0x14) = uVar1;
        iVar8 = (**(code **)(*(int *)(param_1 + -0xa94) + 0x270))(iVar8,iVar5,iVar2);
        if (-1 < iVar8) {
          iVar8 = (**(code **)(*(int *)(*(int *)(param_1 + -0xa94) + 0x10) + 0x30))
                            (*(undefined4 *)(*(int *)(param_1 + -0xa94) + 0x14),iVar2,9,1,0);
          if (-1 < iVar8) {
            up_read(iVar11);
            return;
          }
        }
      }
    }
  }
LAB_00016c4c:
  up_read(iVar11);
  dev_kfree_skb_any(iVar2);
  return;
}



/* ===== process_host_cmd_done_event @ 00016d54 size=34 ===== */

void process_host_cmd_done_event(int param_1,int param_2)

{
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0x14:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x21:
  case 0x26:
                    /* WARNING: Could not recover jumptable at 0x00016d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x68))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14));
    return;
  default:
    return;
  }
}



/* ===== ssv6200_is_rx_q_full @ 00016d8a size=22 ===== */

bool ssv6200_is_rx_q_full(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0x210) + 0xcec) < *(uint *)(param_1 + 0x9ac);
}



/* ===== ssv6200_rx @ 00016da0 size=186 ===== */

undefined4 ssv6200_rx(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_34 [4];
  int local_30;
  undefined1 auStack_2c [8];
  
  uVar3 = *(uint *)(param_1 + 0x50);
  puVar1 = *(ushort **)(param_1 + 0xa4);
  iVar2 = 0;
  iVar4 = *(int *)(*(int *)(param_2 + 0x210) + 0xf5c);
  do {
    if ((int)uVar3 <= iVar2) {
LAB_00016dec:
      skb_queue_tail(param_2 + 0x9a4,param_1);
      __wake_up(param_2 + 0x99c,1,1,0);
      return 0;
    }
    if (iVar4 == 1) {
      (**(code **)(*(int *)(param_2 + 0x210) + 0x2b4))
                (*(undefined4 *)(param_1 + 0xa4),auStack_34,&local_30,auStack_2c);
      if (local_30 == 6) {
        process_host_cmd_done_event
                  (param_2,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x50));
      }
      goto LAB_00016dec;
    }
    if (((uVar3 < iVar2 + 0xcU) || (0x980 < *puVar1 - 0xc)) ||
       ((int)uVar3 < (int)((uint)*puVar1 + iVar2))) goto LAB_00016dec;
    (**(code **)(*(int *)(param_2 + 0x210) + 0x2b4))(puVar1 + 6,auStack_34,&local_30,auStack_2c);
    if (local_30 == 6) {
      process_host_cmd_done_event(param_2,puVar1 + 6,*puVar1 - 0xc);
    }
    iVar2 = iVar2 + (uint)*puVar1;
    puVar1 = (ushort *)(*(int *)(param_1 + 0xa4) + iVar2);
  } while( true );
}



/* ===== ssv6xxx_check_fw_status_process @ 00016e5a size=280 ===== */

void ssv6xxx_check_fw_status_process
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_24 = param_2;
  local_20 = param_3;
  uStack_1c = param_4;
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18)) {
    uVar8 = *(uint *)(*(int *)(param_1 + -0xa4c) + 0xd50);
    uVar7 = *(int *)(param_1 + 0x10) + 1;
    *(uint *)(param_1 + 0x10) = uVar7;
    if (uVar7 < uVar8) goto LAB_00016e7a;
    printk(DAT_00016f7c,DAT_00016f74,uVar7,uVar7 * 100,param_1);
    queue_work(*(undefined4 *)(param_1 + -0x3d4),param_1 + -0xc44);
  }
  else {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
LAB_00016e7a:
  if (*(char *)(param_1 + 0x840) == '\0') {
    (**(code **)(*(int *)(param_1 + -0xa4c) + 0x1b8))
              (*(int *)(param_1 + -0xa4c),&uStack_24,&local_20,&uStack_1c);
    iVar1 = (**(code **)(*(int *)(param_1 + -0xa4c) + 0x1b0))(local_20,6);
    iVar2 = (**(code **)(*(int *)(param_1 + -0xa4c) + 0x1b0))(local_20,7);
    iVar3 = (**(code **)(*(int *)(param_1 + -0xa4c) + 0x1b0))(local_20,8);
    iVar4 = (**(code **)(*(int *)(param_1 + -0xa4c) + 0x1b0))(local_20,9);
    iVar5 = (**(code **)(*(int *)(param_1 + -0xa4c) + 0x1b0))(local_20,10);
    iVar5 = iVar1 + iVar2 + iVar3 + iVar4 + iVar5;
    if (((iVar5 == 0) || (*(int *)(param_1 + 0x1c) != iVar5)) ||
       (iVar2 = *(int *)(param_1 + 0x24),
       iVar1 = ssv_read_mib_tx_cnt(*(undefined4 *)(param_1 + -0xa4c)), iVar2 != iVar1)) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = uVar7 + 1;
      uVar6 = DAT_00016f74;
      if (0x14 < uVar7) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        printk(DAT_00016f78,uVar6);
        queue_work(*(undefined4 *)(param_1 + -0x3d4),param_1 + -0xc44);
      }
    }
    uVar6 = ssv_read_mib_tx_cnt(*(undefined4 *)(param_1 + -0xa4c));
    *(int *)(param_1 + 0x1c) = iVar5;
    *(undefined4 *)(param_1 + 0x24) = uVar6;
  }
  return;
}



/* ===== ssv6xxx_tx_poll_process @ 00016f80 size=20 ===== */

void ssv6xxx_tx_poll_process(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + -0xa74);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00016f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x244))(iVar1,1);
    return;
  }
  return;
}



/* ===== ssv6xxx_flowctl_process @ 00016f94 size=10 ===== */

void ssv6xxx_flowctl_process(int param_1)

{
  ieee80211_wake_queues(*(undefined4 *)(param_1 + -0xc94));
  return;
}



/* ===== ssv6xxx_find_sta_by_addr @ 00016f9e size=40 ===== */

void ssv6xxx_find_sta_by_addr(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  
  if (((*(int *)(param_1 + 0x2b0) == 0) ||
      (iVar1 = ieee80211_find_sta(), param_3 = extraout_r2, iVar1 == 0)) &&
     (*(int *)(param_1 + 0x524) != 0)) {
    ieee80211_find_sta(*(int *)(param_1 + 0x524),param_2,param_3,param_4);
    return;
  }
  return;
}



/* ===== ssv6xxx_find_sta_by_rx_skb @ 00016fc6 size=54 ===== */

undefined4 ssv6xxx_find_sta_by_rx_skb(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 0xa4);
  iVar4 = *(int *)(*(int *)(param_1 + 0x210) + 0x360);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x210) + 0x29c))(param_2);
  if (8 < uVar1) {
    uVar2 = ssv6xxx_find_sta_by_addr(param_1,iVar3 + iVar4 + 10);
    return uVar2;
  }
  return *(undefined4 *)(uVar1 * 0x18 + param_1 + 0x7a0);
}



/* ===== ssv6xxx_foreach_sta @ 00016ffc size=60 ===== */

void ssv6xxx_foreach_sta(int param_1,code *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  
  if (param_2 == (code *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x17008);
    (*pcVar1)();
  }
  iVar2 = param_1 + 0x798;
  down_read(param_1 + 0xc20);
  do {
    if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x1f) < 0) {
      (*param_2)(param_1,iVar2,param_3);
    }
    iVar2 = iVar2 + 0x18;
  } while (iVar2 != param_1 + 0x870);
  up_read(param_1 + 0xc20);
  return;
}



/* ===== ssv6xxx_foreach_vif_sta @ 0001703a size=110 ===== */

void ssv6xxx_foreach_vif_sta(int param_1,int *param_2,code *param_3,undefined4 param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  
  piVar2 = DAT_000170ac;
  if ((param_2 != (int *)0x0) && (DAT_000170ac < param_2)) {
    piVar6 = (int *)*param_2;
    if ((DAT_000170ac < piVar6) && (DAT_000170ac < piVar6 + 0xae)) {
      piVar4 = (int *)piVar6[0xaf];
      uVar7 = param_4;
      while( true ) {
        piVar5 = piVar4 + -2;
        if (piVar4 == piVar6 + 0xaf) {
          return;
        }
        if ((piVar5 == (int *)0x0) || (piVar5 <= piVar2)) break;
        if ((*piVar5 != -1) &&
           (iVar3 = *piVar5 * 0x18, (int)((uint)*(ushort *)(param_1 + iVar3 + 0x79a) << 0x1f) < 0))
        {
          (*param_3)(param_1,param_2,iVar3 + 0x798 + param_1,param_4,uVar7);
        }
        piVar4 = (int *)*piVar4;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(2,0x17048);
  (*pcVar1)();
}



/* ===== ssv6200_set_key @ 000170b0 size=1538 ===== */

undefined4 ssv6200_set_key(int param_1,uint param_2,undefined4 *param_3,int *param_4,int param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined4 local_38;
  
  iVar4 = param_3[0xae];
  iVar9 = *(int *)(param_1 + 0x40);
  iVar5 = iVar9 + 0x204;
  mutex_lock(iVar5);
  iVar6 = *(int *)(iVar4 * 0x274 + iVar9 + 0x2b8);
  if ((iVar6 == 3) || (iVar6 == 9)) {
    if (param_4 != (int *)0x0) goto LAB_00017122;
LAB_0001717e:
    iVar6 = -1;
    piVar10 = param_4;
    piVar11 = param_4;
  }
  else {
    if (param_4 == (int *)0x0) {
      if ((*(char *)(param_5 + 0xf) == '\0') &&
         ((*(uint *)(param_5 + 8) & 0xfffffffb) != DAT_00017318)) {
        printk(DAT_0001731c);
        mutex_unlock(iVar5);
        return 0;
      }
      goto LAB_0001717e;
    }
LAB_00017122:
    iVar6 = param_4[0x42];
    piVar10 = param_4 + 0x42;
    if (iVar6 == -1) {
      _dev_warn(*(undefined4 *)(iVar9 + 4),DAT_00017324,DAT_00017320);
      if ((*(uint *)(iVar9 + 0x878) & 2) == 0) {
        local_38 = 0xffffffc3;
      }
      else {
        local_38 = 0;
      }
      goto LAB_0001714a;
    }
    piVar11 = (int *)(iVar6 * 0x18 + 0x798 + iVar9);
    if (-1 < (int)((uint)*(ushort *)(iVar6 * 0x18 + iVar9 + 0x79a) << 0x1f)) {
      _dev_warn(*(undefined4 *)(iVar9 + 4),DAT_00017324,DAT_00017320);
      local_38 = 0xffffffc3;
      goto LAB_0001714a;
    }
  }
  if (1 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1718c);
    (*pcVar1)();
  }
  uVar2 = DAT_0001732c;
  if ((*(int *)(*(int *)(iVar9 + 0x210) + 0x7a4) << 0x1b < 0) &&
     ((piVar11 == (int *)0x0 || (uVar2 = DAT_00017330, piVar11[1] != -1)))) {
    switch(*(undefined4 *)(param_5 + 8)) {
    case 0xfac01:
      iVar12 = 1;
      break;
    case 0xfac02:
      if (*(int *)(*(int *)(iVar9 + 0x210) + 0x7cc) != 0) {
        *(ushort *)(param_5 + 0x10) = *(ushort *)(param_5 + 0x10) | 4;
      }
      iVar12 = 3;
      break;
    default:
      iVar12 = 6;
      break;
    case 0xfac04:
      if (*(char *)(iVar9 + 0x93d) == '\0') {
        uVar3 = *(ushort *)(param_5 + 0x10) | 0x50;
      }
      else {
        uVar3 = *(ushort *)(param_5 + 0x10) | 0x52;
      }
      *(ushort *)(param_5 + 0x10) = uVar3;
      if (*(int *)(*(int *)(iVar9 + 0x210) + 0x7cc) != 0) {
        *(ushort *)(param_5 + 0x10) = uVar3 | 4;
      }
      iVar12 = 4;
      break;
    case 0xfac05:
      iVar12 = 2;
    }
    _dev_err(*(undefined4 *)(iVar9 + 4),DAT_00017334,param_3[0xae],*param_3,iVar6,iVar12,
             (int)*(char *)(param_5 + 0xf),param_2);
    uVar2 = DAT_00017338;
    if (iVar12 != 6) {
      puVar7 = param_3 + 0xae;
      if (param_2 == 1) {
        uVar8 = param_3[0xae] + 1 & 1;
        if ((int)(param_3[0xae] + 1) < 0) {
          uVar8 = -uVar8;
        }
        iVar6 = *(int *)(uVar8 * 0x274 + iVar9 + 0x2b4);
        if (iVar6 != 0) {
          (**(code **)(*(int *)(iVar9 + 0x210) + 0x10c))(iVar9,puVar7,param_4);
        }
        if (param_4 == (int *)0x0) {
          param_3[0xb3] = 0;
          if ((iVar6 == 0) || (*(char *)(iVar6 + 0x1b) == '\0')) {
            (**(code **)(*(int *)(iVar9 + 0x210) + 0xfc))(*(int *)(iVar9 + 0x210),puVar7,0);
          }
        }
        else {
          iVar4 = *(int *)(iVar4 * 0x274 + iVar9 + 0x2b8);
          if ((((iVar4 != 3) && (iVar4 != 9)) && (iVar6 == 0)) &&
             (piVar10 == (int *)(param_3[0xaf] + -8))) {
            (**(code **)(*(int *)(iVar9 + 0x210) + 0x100))
                      (*(int *)(iVar9 + 0x210),0,(char)piVar11[1]);
          }
        }
        if (iVar12 - 1U < 2) {
          *(undefined1 *)((int)param_3 + 0x2d9) = 0xff;
          param_3[0xb7] = 0xffffffff;
        }
        else if ((iVar12 != 5) &&
                (printk(DAT_00017714,(int)*(char *)(param_5 + 0xf),param_3 != (undefined4 *)0x0,
                        param_4 != (int *)0x0), *(byte *)(param_5 + 0xf) - 1 < 3)) {
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined1 *)(param_3 + 0xb6) = 0;
          }
          if (piVar10 != (int *)0x0) {
            *(undefined1 *)((int)piVar10 + 0x36) = 0;
          }
        }
        if ((*(char *)(param_5 + 0xf) == '\0') && (piVar10 != (int *)0x0)) {
          *(undefined2 *)(piVar10 + 0xc) = 0;
          *(undefined1 *)((int)piVar10 + 0x32) = 0;
          *(undefined1 *)(piVar10 + 0xd) = 0;
        }
        if ((*(char *)(param_3 + 0xb4) != '\0') && (*(char *)(param_5 + 0xf) != '\0')) {
          *(undefined1 *)(param_3 + 0xb4) = 0;
        }
      }
      else {
        if (iVar12 - 1U < 4) {
                    /* WARNING: Could not recover jumptable at 0x00017268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(&switchD_00017268::switchdataD_0001726c +
                            (uint)*(byte *)(iVar12 + 0x1726b) * 2))();
          return uVar2;
        }
        if ((param_4 != (int *)0x0) && (*(int *)(param_3[0xaf] + -8) == *piVar10)) {
          param_3[0xb2] = iVar12;
        }
      }
      local_38 = 0;
      if (piVar10 != (int *)0x0) {
        printk(DAT_0001733c,(char)piVar10[0xc],*(undefined1 *)((int)piVar10 + 0x31),
               *(undefined1 *)((int)piVar10 + 0x32),*(undefined1 *)((int)piVar10 + 0x33));
      }
      if (puVar7 != (undefined4 *)0x0) {
        printk(DAT_0001734c,*(undefined1 *)((int)param_3 + 0x2d1),
               *(undefined1 *)((int)param_3 + 0x2d2),*(undefined1 *)((int)param_3 + 0x2d3),
               *(undefined1 *)(param_3 + 0xb5),*(undefined1 *)(param_3 + 0xb4));
      }
      goto LAB_0001714a;
    }
  }
  _dev_warn(*(undefined4 *)(iVar9 + 4),uVar2);
  local_38 = 0xffffffa1;
LAB_0001714a:
  mutex_unlock(iVar5);
  printk(DAT_00017328,local_38);
  return local_38;
}



/* ===== ssv6xxx_tx_queue_status_dump @ 00017718 size=16 ===== */

undefined4
ssv6xxx_tx_queue_status_dump(undefined4 param_1,char *param_2,size_t param_3,undefined4 param_4)

{
  snprintf(param_2,param_3,DAT_00017728,param_4,param_4);
  return 0x1c;
}



/* ===== ssv6xxx_ble_api_send @ 0001772c size=110 ===== */

void ssv6xxx_ble_api_send(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = param_3 + 0x10;
  iVar1 = ssv_skb_alloc(param_1,iVar3);
  if (iVar1 == 0) {
    printk(DAT_000177a0,DAT_0001779c);
    return;
  }
  skb_put(iVar1,iVar3);
  puVar2 = *(undefined2 **)(iVar1 + 0xa4);
  memset(puVar2 + 1,0,0x12);
  *(undefined1 *)(puVar2 + 1) = 5;
  *(undefined1 *)((int)puVar2 + 3) = 0x1b;
  *puVar2 = (short)iVar3;
  memcpy(puVar2 + 8,param_2,param_3);
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
  if (iVar1 < 0) {
    printk(DAT_000177a4);
    return;
  }
  return;
}



/* ===== ssv_send_ble_packet @ 000177a8 size=106 ===== */

void ssv_send_ble_packet(int param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = param_3 + 0x10;
  iVar1 = ssv_skb_alloc(param_1,iVar3,param_3,param_4,param_1,param_2);
  if (iVar1 == 0) {
    printk(DAT_00017818,DAT_00017814);
    return;
  }
  *(int *)(iVar1 + 0x50) = iVar3;
  *(int *)(iVar1 + 0x54) = iVar3;
  puVar2 = memset(*(void **)(iVar1 + 0xa4),0,0x14);
  *(undefined1 *)(puVar2 + 1) = 5;
  *(undefined1 *)((int)puVar2 + 3) = 0x16;
  *puVar2 = *(undefined2 *)(iVar1 + 0x54);
  memcpy(puVar2 + 8,param_2,param_3);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x30))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1,10,0,0);
  return;
}



/* ===== ssv_ble_hci_rx_packet @ 0001781c size=306 ===== */

undefined4 ssv_ble_hci_rx_packet(char *param_1,size_t param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*param_1 != '\x04') goto LAB_00017892;
  bVar1 = param_1[1];
  uVar3 = DAT_000179b0;
  uVar4 = param_2;
  if (bVar1 != 0x10) {
    if (bVar1 < 0x11) {
      uVar3 = DAT_000179a8;
      if (bVar1 != 0xc) {
        if (bVar1 < 0xd) {
          uVar3 = DAT_000179a4;
          if ((bVar1 != 5) && (uVar3 = DAT_0001795c, bVar1 != 8)) {
LAB_0001794e:
            uVar3 = DAT_000179bc;
            uVar4 = (uint)(byte)param_1[3];
          }
        }
        else {
          uVar3 = DAT_000179ac;
          if ((bVar1 != 0xe) && (uVar3 = DAT_00017960, bVar1 != 0xf)) goto LAB_0001794e;
        }
      }
    }
    else {
      uVar3 = DAT_000179b8;
      if (bVar1 != 0x30) {
        if (bVar1 < 0x31) {
          uVar3 = DAT_000179b4;
          if ((bVar1 != 0x13) && (uVar3 = DAT_00017964, bVar1 != 0x1a)) goto LAB_0001794e;
        }
        else if (bVar1 == 0x3e) {
          uVar3 = DAT_000179a0;
          uVar4 = (uint)(byte)param_1[3];
          switch((uint)(byte)param_1[3]) {
          case 1:
            uVar3 = DAT_0001796c;
            uVar4 = param_2;
            break;
          case 2:
            uVar3 = DAT_00017978;
            uVar4 = param_2;
            break;
          case 3:
            uVar3 = DAT_0001797c;
            uVar4 = param_2;
            break;
          case 4:
            uVar3 = DAT_00017980;
            uVar4 = param_2;
            break;
          case 5:
            uVar3 = DAT_00017984;
            uVar4 = param_2;
            break;
          case 6:
            uVar3 = DAT_00017988;
            uVar4 = param_2;
            break;
          case 7:
            uVar3 = DAT_0001798c;
            uVar4 = param_2;
            break;
          case 8:
            uVar3 = DAT_00017990;
            uVar4 = param_2;
            break;
          case 9:
            uVar3 = DAT_00017994;
            uVar4 = param_2;
            break;
          case 10:
            uVar3 = DAT_00017998;
            uVar4 = param_2;
            break;
          case 0xb:
            uVar3 = DAT_0001799c;
            uVar4 = param_2;
          }
        }
        else {
          uVar3 = DAT_00017968;
          if (bVar1 != 0x57) goto LAB_0001794e;
        }
      }
    }
  }
  printk(uVar3,uVar4);
LAB_00017892:
  iVar2 = __alloc_skb(param_2 + 8,0xcc0,0,0xffffffff);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff4;
  }
  else {
    *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 8;
    *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 8;
    skb_put(iVar2,param_2);
    memcpy(*(void **)(iVar2 + 0xa4),param_1,param_2);
    *(char *)(iVar2 + 0x18) = *param_1;
    skb_pull(iVar2,1);
    _ssv6xxx_hexdump(DAT_00017970,*(undefined4 *)(iVar2 + 0xa4),*(undefined4 *)(iVar2 + 0x50));
    hci_recv_frame(*DAT_00017974,iVar2);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== _ssv_ble_process_unknow_hci_opcode @ 000179c0 size=214 ===== */

undefined4 _ssv_ble_process_unknow_hci_opcode(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  void *__src;
  int iVar3;
  undefined4 uVar4;
  size_t __n;
  
  piVar1 = DAT_00017a98;
  iVar3 = ssv_skb_alloc(*(undefined4 *)(*DAT_00017a98 + 0xa00),0x200);
  puVar2 = DAT_00017aa0;
  uVar4 = DAT_00017a9c;
  if (iVar3 == 0) {
LAB_000179de:
    printk(uVar4);
    uVar4 = 0xffffffff;
  }
  else {
    memset(DAT_00017aa0,0,0x200);
    if (param_1 == 0xc14) {
      *puVar2 = 4;
      puVar2[8] = 0x62;
      puVar2[1] = 0xe;
      puVar2[10] = 0x6e;
      puVar2[2] = 0xfc;
      puVar2[0xb] = 0x74;
      puVar2[3] = 1;
      puVar2[4] = 0x14;
      puVar2[5] = 0xc;
      puVar2[7] = 0x75;
      puVar2[9] = 0x75;
      puVar2[0xc] = 0x75;
      puVar2[0xd] = 0x2d;
      puVar2[0xe] = 0x30;
    }
    else {
      uVar4 = DAT_00017aa4;
      if (param_1 != 0xc23) goto LAB_000179de;
      *puVar2 = 4;
      puVar2[1] = 0xe;
      puVar2[2] = 7;
      puVar2[3] = 2;
      puVar2[4] = 0x23;
      puVar2[5] = 0xc;
      puVar2[8] = 1;
      puVar2[9] = 0x6c;
    }
    __src = DAT_00017aa8;
    __n = (byte)puVar2[2] + 2;
    *(size_t *)(param_2 + 0x54) = __n;
    *(size_t *)(iVar3 + 0x50) = __n;
    memcpy(*(void **)(iVar3 + 0xa4),__src,__n);
    *(undefined1 *)(iVar3 + 0x18) = *puVar2;
    _ssv6xxx_hexdump(DAT_00017aac,*(undefined4 *)(iVar3 + 0xa4),*(undefined4 *)(iVar3 + 0x50));
    hci_recv_frame(*piVar1,iVar3);
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== ssv_ble_hci_send_frame @ 00017ab0 size=898 ===== */

undefined4
ssv_ble_hci_send_frame(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar5 = *DAT_00017dd0;
  iVar7 = *(int *)(iVar5 + 0xa00);
  if (iVar5 == 0) {
    printk(DAT_00017dd4);
    return 0;
  }
  cVar1 = *(char *)(param_2 + 0x18);
  if (cVar1 == '\x02') {
    printk(DAT_00017ddc);
  }
  else if (cVar1 == '\x03') {
    *(int *)(iVar5 + 0x9a0) = *(int *)(iVar5 + 0x9a0) + 1;
  }
  else if (cVar1 == '\x01') {
    *(int *)(iVar5 + 0x990) = *(int *)(iVar5 + 0x990) + 1;
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    sVar2 = **(short **)(param_2 + 0xa4);
    uVar3 = DAT_00017ed8;
    if (sVar2 != 0x2010) {
      if (sVar2 < 0x2011) {
        uVar3 = DAT_00017e44;
        if (sVar2 != 0x1009) {
          if (sVar2 < 0x100a) {
            uVar3 = DAT_00017e2c;
            if (sVar2 != 0xc33) {
              if (sVar2 < 0xc34) {
                uVar3 = DAT_00017e20;
                if (sVar2 != 0xc01) {
                  if (sVar2 < 0xc02) {
                    uVar3 = DAT_00017e18;
                    if ((sVar2 == 0x406) || (uVar6 = 0x41d, uVar3 = DAT_00017dd8, sVar2 == 0x41d))
                    goto LAB_00017d54;
                  }
                  else {
                    uVar3 = DAT_00017e24;
                    if (((sVar2 == 0xc2d) || (uVar3 = DAT_00017e28, sVar2 == 0xc31)) ||
                       (uVar6 = 0xc03, uVar3 = DAT_00017de0, sVar2 == 0xc03)) goto LAB_00017d54;
                  }
LAB_00017d3c:
                  _ssv_ble_process_unknow_hci_opcode
                            (sVar2,param_2,*(undefined1 *)((int)*(short **)(param_2 + 0xa4) + 1),
                             uVar6,param_4);
                  goto LAB_00017d44;
                }
              }
              else {
                uVar3 = DAT_00017e38;
                if (sVar2 != 0xc7c) {
                  if (sVar2 < 0xc7d) {
                    uVar3 = DAT_00017e30;
                    if (((sVar2 == 0xc63) || (uVar3 = DAT_00017e34, sVar2 == 0xc7b)) ||
                       (uVar6 = 0xc35, uVar3 = DAT_00017de4, sVar2 == 0xc35)) goto LAB_00017d54;
                  }
                  else {
                    uVar3 = DAT_00017e3c;
                    if (((sVar2 == 0x1002) || (uVar3 = DAT_00017e40, sVar2 == 0x1003)) ||
                       (uVar6 = 0x1001, uVar3 = DAT_00017de8, sVar2 == 0x1001)) goto LAB_00017d54;
                  }
                  goto LAB_00017d3c;
                }
              }
            }
          }
          else {
            uVar3 = DAT_00017e5c;
            if (sVar2 != 0x2008) {
              if (sVar2 < 0x2009) {
                uVar3 = DAT_00017e50;
                if (sVar2 != 0x2003) {
                  if (sVar2 < 0x2004) {
                    uVar3 = DAT_00017e48;
                    if (((sVar2 == 0x2001) || (uVar3 = DAT_00017e4c, 0x2001 < sVar2)) ||
                       (uVar6 = 0x1405, uVar3 = DAT_00017dec, sVar2 == 0x1405)) goto LAB_00017d54;
                  }
                  else {
                    uVar3 = DAT_00017e54;
                    if (((sVar2 == 0x2006) || (uVar3 = DAT_00017e58, 0x2006 < sVar2)) ||
                       (uVar6 = 0x2005, uVar3 = DAT_00017df0, sVar2 == 0x2005)) goto LAB_00017d54;
                  }
                  goto LAB_00017d3c;
                }
              }
              else {
                uVar3 = DAT_00017e68;
                if (sVar2 != 0x200c) {
                  if (sVar2 < 0x200d) {
                    uVar3 = DAT_00017e64;
                    if ((sVar2 != 0x200a) && (uVar3 = DAT_00017e60, 0x200a < sVar2)) {
                      uVar3 = DAT_00017df4;
                    }
                  }
                  else {
                    uVar3 = DAT_00017ed4;
                    if ((sVar2 != 0x200e) && (uVar3 = DAT_00017e6c, 0x200e < sVar2)) {
                      uVar3 = DAT_00017df8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar3 = DAT_00017f04;
        if (sVar2 != 0x201f) {
          if (sVar2 < 0x2020) {
            uVar3 = DAT_00017eec;
            if (sVar2 != 0x2017) {
              if (sVar2 < 0x2018) {
                uVar3 = DAT_00017ee0;
                if (sVar2 != 0x2013) {
                  if (sVar2 < 0x2014) {
                    uVar3 = DAT_00017edc;
                    if ((sVar2 != 0x2011) && (uVar6 = 0x2012, uVar3 = DAT_00017dfc, sVar2 != 0x2012)
                       ) goto LAB_00017d3c;
                  }
                  else {
                    uVar3 = DAT_00017ee8;
                    if ((sVar2 != 0x2015) && (uVar3 = DAT_00017ee4, 0x2015 < sVar2)) {
                      uVar3 = DAT_00017e00;
                    }
                  }
                }
              }
              else {
                uVar3 = DAT_00017ef8;
                if (sVar2 != 0x201b) {
                  if (sVar2 < 0x201c) {
                    uVar3 = DAT_00017ef4;
                    if ((sVar2 != 0x2019) && (uVar3 = DAT_00017ef0, 0x2019 < sVar2)) {
                      uVar3 = DAT_00017e04;
                    }
                  }
                  else {
                    uVar3 = DAT_00017f00;
                    if ((sVar2 != 0x201d) && (uVar3 = DAT_00017efc, 0x201d < sVar2)) {
                      uVar3 = DAT_00017e08;
                    }
                  }
                }
              }
            }
          }
          else {
            uVar3 = DAT_00017f1c;
            if (sVar2 != 0x2028) {
              if (sVar2 < 0x2029) {
                uVar3 = DAT_00017f10;
                if (sVar2 != 0x2023) {
                  if (sVar2 < 0x2024) {
                    uVar3 = DAT_00017f0c;
                    if ((sVar2 != 0x2021) && (uVar3 = DAT_00017f08, 0x2021 < sVar2)) {
                      uVar3 = DAT_00017e0c;
                    }
                  }
                  else {
                    uVar3 = DAT_00017f14;
                    if (((sVar2 != 0x2026) && (uVar3 = DAT_00017f18, sVar2 < 0x2027)) &&
                       (uVar6 = 0x2024, uVar3 = DAT_00017e10, sVar2 != 0x2024)) goto LAB_00017d3c;
                  }
                }
              }
              else {
                uVar3 = DAT_00017f28;
                if (sVar2 != 0x202c) {
                  if (sVar2 < 0x202d) {
                    uVar3 = DAT_00017f24;
                    if ((sVar2 != 0x202a) && (uVar3 = DAT_00017f20, 0x202a < sVar2)) {
                      uVar3 = DAT_00017e14;
                    }
                  }
                  else {
                    uVar3 = DAT_00017f30;
                    if (((sVar2 != 0x202e) && (uVar3 = DAT_00017f2c, 0x202d < sVar2)) &&
                       (uVar6 = 0x202f, uVar3 = DAT_00017f34, sVar2 != 0x202f)) goto LAB_00017d3c;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_00017d54:
    printk(uVar3);
  }
  puVar4 = (undefined1 *)skb_push(param_2,1);
  *puVar4 = *(undefined1 *)(param_2 + 0x18);
  _ssv6xxx_hexdump(DAT_00017e1c,*(undefined4 *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0x50));
  ssv_send_ble_packet(iVar7,*(undefined4 *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0x50));
LAB_00017d44:
  skb_queue_tail(iVar7 + 0x14a4,param_2);
  return 0;
}



/* ===== ssv_ble_hci_set_bdaddr @ 00017f38 size=128 ===== */

void ssv_ble_hci_set_bdaddr(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_26;
  undefined4 local_22;
  undefined2 local_1e;
  int local_1c;
  
  piVar1 = DAT_00017fb8;
  local_26 = 0;
  local_22 = 0;
  local_1c = *DAT_00017fb8;
  local_1e = 0;
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (*DAT_00017fbc == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(*DAT_00017fbc + 0xa00);
    printk(DAT_00017fc4,DAT_00017fc0,0x16b);
    local_26 = 0x6fc0701;
    local_22 = *param_2;
    local_1e = *(undefined2 *)(param_2 + 1);
    printk(DAT_00017fc8,param_2);
    ssv_send_ble_packet(uVar2,&local_26,10);
    uVar2 = 0;
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== ssv_ble_hci_notify_reset @ 00017fcc size=24 ===== */

void ssv_ble_hci_notify_reset(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = *DAT_00017fe4;
  uStack_8 = param_3;
  ssv_ble_hci_rx_packet(&local_c);
  return;
}



/* ===== ssv6xxx_update_hw_channel @ 00017fe8 size=416 ===== */

undefined4 ssv6xxx_update_hw_channel(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  
  pcVar2 = DAT_00018188;
  pcVar10 = (char *)(*(int *)(param_1 + 0x210) + 0xd08);
  if ((pcVar10 != (char *)0x0) && (*(char *)(*(int *)(param_1 + 0x210) + 0xd08) != '\0')) {
    iVar7 = 0;
    pcVar8 = DAT_00018188;
    do {
      iVar4 = strncmp(pcVar8,pcVar10,2);
      if (iVar4 == 0) {
        pcVar10 = pcVar2 + iVar7 * 0x48;
        uVar1 = *(ushort *)(pcVar10 + 8);
        iVar4 = 0;
        iVar5 = DAT_00018190;
        do {
          uVar9 = *(uint *)(iVar5 + 0xc);
          *(uint *)(iVar5 + 0xc) = uVar9 | 1;
          pcVar8 = pcVar10;
          for (iVar6 = 0; iVar6 < (int)(uint)uVar1; iVar6 = iVar6 + 1) {
            if ((((0x961 < (*(uint *)(pcVar8 + 0xc) & 0xffff)) &&
                 ((*(uint *)(pcVar8 + 0x10) & 0xffff) < 0x9bf)) &&
                ((*(uint *)(pcVar8 + 0xc) & 0xffff) <= *(uint *)(iVar5 + 4))) &&
               (*(uint *)(iVar5 + 4) <= (*(uint *)(pcVar8 + 0x10) & 0xffff))) {
              *(uint *)(iVar5 + 0xc) =
                   uVar9 & 0xfffffffe | *(uint *)(pcVar2 + iVar6 * 0xc + iVar7 * 0x48 + 0x14);
              break;
            }
            pcVar8 = pcVar8 + 0xc;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x38;
        } while (iVar4 != 0xe);
        iVar5 = 0;
        iVar4 = DAT_00018194;
        do {
          uVar9 = *(uint *)(iVar4 + 0xc);
          *(uint *)(iVar4 + 0xc) = uVar9 | 1;
          pcVar8 = pcVar10;
          for (iVar6 = 0; iVar6 < (int)(uint)uVar1; iVar6 = iVar6 + 1) {
            if (((0x1431 < (*(uint *)(pcVar8 + 0xc) & 0xffff)) &&
                ((*(uint *)(pcVar8 + 0x10) & 0xffff) < 0x16cc)) &&
               (((*(uint *)(pcVar8 + 0xc) & 0xffff) <= *(uint *)(iVar4 + 4) &&
                (*(uint *)(iVar4 + 4) <= (*(uint *)(pcVar8 + 0x10) & 0xffff))))) {
              *(uint *)(iVar4 + 0xc) =
                   uVar9 & 0xfffffffe | *(uint *)(pcVar2 + iVar6 * 0xc + iVar7 * 0x48 + 0x14);
              break;
            }
            pcVar8 = pcVar8 + 0xc;
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x38;
        } while (iVar5 != 0x19);
        goto LAB_00018104;
      }
      iVar7 = iVar7 + 1;
      pcVar8 = pcVar8 + 0x48;
    } while (iVar7 != 6);
    printk(DAT_0001818c,pcVar10);
  }
LAB_00018104:
  if (*(int *)(*(int *)(param_1 + 0x210) + 0x7a4) << 0x1d < 0) {
    iVar7 = kmemdup(DAT_00018190,0x310,0xcc0);
    if (iVar7 == 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0xe;
    uVar3 = DAT_00018198;
    *(int *)(param_1 + 0x30) = iVar7;
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 0x40) = 0xc;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x210) + 0x7a4) & 8) != 0) {
    iVar7 = kmemdup(DAT_00018194,0x578,0xcc0);
    if (iVar7 == 0) {
      kfree(*(undefined4 *)(param_1 + 0x30));
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x94) = 1;
    *(undefined4 *)(param_1 + 0x98) = 0x19;
    uVar3 = DAT_0001819c;
    *(int *)(param_1 + 0x8c) = iVar7;
    *(undefined4 *)(param_1 + 0x90) = uVar3;
    *(undefined4 *)(param_1 + 0x9c) = 8;
    return 0;
  }
  return 0;
}



/* ===== ssv6xxx_trigger_pmu @ 000181a0 size=658 ===== */

undefined4 ssv6xxx_trigger_pmu(int param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint extraout_r3;
  undefined1 *puVar11;
  byte bVar12;
  code *pcVar13;
  byte bVar14;
  bool bVar15;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2e;
  undefined2 local_2a;
  
  puVar9 = (undefined4 *)**(undefined4 **)(*(int *)(param_1 + 0x210) + 0x14);
  pcVar13 = *(code **)(puVar9[1] + 0x70);
  uVar4 = 0;
  if (pcVar13 != (code *)0x0) {
    uVar4 = (*pcVar13)(*puVar9);
  }
  iVar10 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2e = 0;
  local_2a = 0;
  if ((*(int **)(param_1 + 0x2b0) == (int *)0x0) || (**(int **)(param_1 + 0x2b0) != 2)) {
    if ((*(int **)(param_1 + 0x524) == (int *)0x0) || (**(int **)(param_1 + 0x524) != 2)) {
      bVar12 = 0;
      bVar14 = bVar12;
      goto LAB_00018242;
    }
    iVar10 = 1;
  }
  bVar12 = **(byte **)(iVar10 * 0x274 + param_1 + 0x2b4);
  iVar7 = (uint)bVar12 * 6 + param_1;
  local_2e = *(uint *)(iVar7 + 0x924);
  local_2a = *(undefined2 *)(iVar7 + 0x928);
  iVar10 = iVar10 * 6 + *(int *)(param_1 + 0x210);
  local_34 = *(uint *)(iVar10 + 0x7bc);
  local_30 = *(undefined2 *)(iVar10 + 0x7c0);
  iVar10 = 0;
  do {
    uVar3 = *(ushort *)(param_1 + 0x79a + iVar10 * 0x18);
    bVar14 = (byte)uVar3 & 1;
    if ((uVar3 & 1) != 0) {
      bVar14 = *(byte *)(iVar10 * 0x18 + param_1 + 0x79c);
      break;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 9);
LAB_00018242:
  printk(DAT_00018438,DAT_00018434,local_34 & 0xff,local_34._1_1_,local_34 >> 0x10 & 0xff,
         local_34 >> 0x18,(undefined1)local_30,local_30._1_1_);
  printk(DAT_0001843c,DAT_00018434,local_2e & 0xff,local_2e._1_1_,local_2e >> 0x10 & 0xff,
         local_2e >> 0x18,(undefined1)local_2a,local_2a._1_1_);
  iVar10 = ssv_skb_alloc(param_1,0x46);
  if (iVar10 == 0) {
    printk(DAT_00018440,DAT_00018434);
    uVar5 = 0xffffffff;
  }
  else {
    skb_put(iVar10,0x46);
    puVar11 = *(undefined1 **)(iVar10 + 0xa4);
    memset(puVar11 + 2,0,0xe);
    puVar11[2] = 5;
    *puVar11 = 0x46;
    puVar11[3] = 2;
    puVar11[1] = 0;
    memset(puVar11 + 0x10,0,0x36);
    uVar5 = DAT_00018444;
    bVar1 = puVar11[0x31];
    if ((uVar4 & 2) == 0) {
      uVar8 = 2;
    }
    else {
      uVar8 = 1;
    }
    *(undefined4 *)(puVar11 + 0x10) = uVar8;
    uVar2 = *(undefined2 *)(param_1 + 0x980);
    puVar11[0x14] = 0;
    puVar11[0x15] = 0;
    *(undefined2 *)(puVar11 + 0x16) = uVar2;
    puVar11[0x1c] = (char)*(undefined2 *)(param_1 + 0x200);
    uVar2 = *(undefined2 *)(param_1 + 0x202);
    *(undefined4 *)(puVar11 + 0x2a) = param_3;
    puVar11[0x2e] = bVar14;
    puVar11[0x1d] = (char)uVar2;
    puVar11[0x2f] = bVar12;
    puVar11[0x30] = (char)*(undefined4 *)(*(int *)(param_1 + 0x210) + 0xd18);
    *(undefined4 *)(puVar11 + 0x32) = *(undefined4 *)(*(int *)(param_1 + 0x210) + 0xd1c);
    uVar4 = *(uint *)(*(int *)(param_1 + 0x210) + 0xd20);
    if (0x3e < uVar4) {
      uVar4 = 0x3f;
    }
    bVar12 = (byte)((uVar4 & 0x3f) << 1);
    puVar11[0x31] = bVar1 & 0x81 | bVar12;
    bVar15 = *(int *)(*(int *)(param_1 + 0x210) + 0xd24) != 0;
    puVar11[0x31] = bVar1 & 0x80 | bVar12 | bVar15;
    puVar11[0x31] = bVar12 | bVar15 | (*(int *)(*(int *)(param_1 + 0x210) + 0xd28) != 0) << 7;
    uVar8 = DAT_00018434;
    puVar11[0x3e] = (char)*(undefined4 *)(*(int *)(param_1 + 0x210) + 0xd2c);
    puVar11[0x3f] = (char)*(undefined4 *)(*(int *)(param_1 + 0x210) + 0xd30);
    puVar11[0x40] = (char)*(undefined4 *)(*(int *)(param_1 + 0x210) + 0xd34);
    puVar11[0x41] = *(undefined1 *)(param_1 + 0x982);
    printk(uVar5,uVar8);
    cVar6 = *(char *)(param_1 + 0x982) + '\x01';
    if (cVar6 == -0x80) {
      *(undefined1 *)(param_1 + 0x982) = 0;
    }
    else {
      *(char *)(param_1 + 0x982) = cVar6;
    }
    uVar4 = extraout_r3;
    if ((param_2 & 1) != 0) {
      uVar4 = *(uint *)(puVar11 + 0x18) | 1;
      *(uint *)(puVar11 + 0x18) = uVar4;
    }
    bVar15 = (param_2 & 2) != 0;
    if (bVar15) {
      uVar4 = *(uint *)(puVar11 + 0x18);
    }
    *(uint *)(puVar11 + 0x1e) = local_34;
    if (bVar15) {
      *(uint *)(puVar11 + 0x18) = uVar4 | 2;
    }
    *(undefined2 *)(puVar11 + 0x22) = local_30;
    *(uint *)(puVar11 + 0x24) = local_2e;
    *(undefined2 *)(puVar11 + 0x28) = local_2a;
    *(undefined4 *)(puVar11 + 0x36) = *(undefined4 *)(*(int *)(param_1 + 0x210) + 0xd68);
    *(undefined4 *)(puVar11 + 0x3a) = *(undefined4 *)(*(int *)(param_1 + 0x210) + 0xd6c);
    uVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
                      (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar10);
  }
  return uVar5;
}



/* ===== ssv6xxx_attach_wow @ 00018448 size=24 ===== */

void ssv6xxx_attach_wow(int *param_1)

{
  if (*(int *)(param_1[0x84] + 0x7a4) << 0xf < 0) {
    *(undefined4 *)(*(int *)(*param_1 + 0x38) + 0xa4) = DAT_00018460;
  }
  return;
}



/* ===== ssv6xxx_scan_complete @ 00018464 size=142 ===== */

void ssv6xxx_scan_complete(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [14];
  undefined1 local_1a;
  
  memset(auStack_28,0,0x10);
  *(undefined1 *)((int)param_1 + 0x979) = 0;
  *(undefined2 *)(param_1 + 0x356) = 0;
  local_1a = (undefined1)param_2;
  uVar1 = *(undefined2 *)(param_1[0x357] + 10);
  *(undefined2 *)((int)param_1 + 0x202) = *(undefined2 *)(param_1 + 0x358);
  *(undefined2 *)(param_1 + 0x80) = uVar1;
  (**(code **)(param_1[0x84] + 0x31c))(param_1,param_1[0x357],*(undefined2 *)(param_1 + 0x358),0);
  (**(code **)(*(int *)(param_1[0x84] + 0x10) + 0x40))
            (*(undefined4 *)(param_1[0x84] + 0x14),*(undefined1 *)((int)param_1 + 0x1029));
  ssv6xxx_scan_opertaion(param_1,0);
  if (*(char *)(param_1 + 0x34c) != '\0') {
    (**(code **)(param_1[0x84] + 0x338))(param_1[0x84],3,1,0x30);
  }
  *(undefined1 *)((int)param_1 + 0xd5a) = 1;
  uVar2 = DAT_000184f8;
  if (param_2 != 0) {
    uVar2 = DAT_000184f4;
  }
  printk(uVar2);
  ieee80211_scan_completed(*param_1,auStack_28);
  return;
}



/* ===== ssv6xxx_scan_process @ 000184fc size=368 ===== */

void ssv6xxx_scan_process(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  piVar2 = DAT_00018670;
  iVar7 = param_1 + -0xfd0;
  puVar8 = (undefined1 *)(param_1 + 0x5a);
  iVar9 = *(int *)(param_1 + -0xc);
  iVar11 = param_1;
switchD_00018518_default:
  switch(*puVar8) {
  case 1:
    if (*(uint *)(iVar9 + 8) <= (uint)*(byte *)(param_1 + 0x5b)) goto switchD_00018518_caseD_4;
    if ((*(char *)(param_1 + -0x277) == '\0') &&
       (-1 < (*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60)) - *piVar2)) {
      if (*(char *)(*(int *)(param_1 + -8) + 0x18) == '\0') {
        uVar6 = 3;
      }
      else {
        uVar6 = 2;
      }
    }
    else {
LAB_00018542:
      uVar6 = 4;
    }
    break;
  case 2:
    if ((*(char *)(param_1 + -0x277) != '\0') ||
       ((*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60)) - *piVar2 < 0)) goto LAB_00018542;
    *(undefined2 *)(param_1 + -0xdd0) = *(undefined2 *)(*(int *)(param_1 + -0x274) + 10);
    *(undefined2 *)(param_1 + -0xdce) = *(undefined2 *)(param_1 + -0x270);
    (**(code **)(*(int *)(param_1 + -0xdc0) + 0x31c))(iVar7);
    iVar3 = *(int *)(param_1 + -0xdc0);
    pcVar5 = *(code **)(*(int *)(iVar3 + 0x10) + 0x40);
    (*pcVar5)(*(undefined4 *)(iVar3 + 0x14),*(undefined1 *)(param_1 + 0x59),pcVar5,iVar3,iVar11);
    *puVar8 = 3;
    uVar4 = *(undefined4 *)(*(int *)(param_1 + -0xdc0) + 0xd44);
LAB_000185a8:
    iVar3 = __msecs_to_jiffies(uVar4);
    if (iVar3 != 0) {
LAB_000185b0:
      queue_delayed_work_on(1,*(undefined4 *)(param_1 + -4),param_1,iVar3);
      return;
    }
    goto switchD_00018518_default;
  case 3:
    if ((*(char *)(param_1 + -0x277) != '\0') ||
       ((*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60)) - *piVar2 < 0)) goto LAB_00018542;
    iVar10 = *(int *)(param_1 + -0xc);
    iVar3 = ssv6200_is_scan_allow(iVar7);
    if (iVar3 != 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + -0xdc0) + 0x10) + 0x3c))
                (*(undefined4 *)(*(int *)(param_1 + -0xdc0) + 0x14),*(undefined1 *)(param_1 + 0x59))
      ;
      iVar3 = *(int *)(iVar10 + (uint)*(byte *)(param_1 + 0x5b) * 4 + 0x74);
      uVar1 = *(undefined2 *)(iVar3 + 10);
      *(undefined2 *)(param_1 + -0xdce) = 0;
      *(undefined2 *)(param_1 + -0xdd0) = uVar1;
      (**(code **)(*(int *)(param_1 + -0xdc0) + 0x31c))(iVar7,iVar3,0,1);
      *(char *)(param_1 + 0x5b) = *(char *)(param_1 + 0x5b) + '\x01';
      *puVar8 = 1;
      if ((*(uint *)(iVar3 + 0xc) & 10) != 0) {
        iVar3 = 0x21;
        goto LAB_000185b0;
      }
      if (*(char *)(*(int *)(param_1 + -8) + 0x18) == '\0') {
        iVar3 = 0x1e;
        goto LAB_000185b0;
      }
      uVar4 = *(undefined4 *)(*(int *)(param_1 + -0xdc0) + 0xd48);
      goto LAB_000185a8;
    }
    *(char *)(param_1 + 0x5b) = *(char *)(param_1 + 0x5b) + '\x01';
    uVar6 = 1;
    break;
  case 4:
    goto switchD_00018518_caseD_4;
  default:
    goto switchD_00018518_default;
  }
  *puVar8 = uVar6;
  goto switchD_00018518_default;
switchD_00018518_caseD_4:
  ssv6xxx_scan_complete(iVar7,0);
  return;
}



/* ===== ssv6200_hw_scan @ 00018674 size=620 ===== */

undefined4 ssv6200_hw_scan(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  void *__src;
  int iVar3;
  size_t __n;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  void *pvVar11;
  uint uVar12;
  
  iVar7 = *(int *)(param_1 + 0x40);
  cVar1 = *(char *)(param_2 + 0x18);
  mutex_lock(iVar7 + 0x204);
  printk(DAT_000188e0,(undefined4 *)(param_2 + 0x290));
  if (*(char *)(iVar7 + 0x979) == '\0') {
    if ((*(uint *)(iVar7 + 0x878) & 0x180) == 0x180) {
      printk(DAT_000188e8);
      iVar3 = iVar7 + 0xffc;
    }
    else {
      ssv6xxx_scan_opertaion(iVar7,1);
      if (*(char *)(iVar7 + 0xd30) != '\0') {
        (**(code **)(*(int *)(iVar7 + 0x210) + 0x338))(*(int *)(iVar7 + 0x210),3,0,0x30,param_4);
      }
      *(int *)(iVar7 + 0xfc8) = param_2;
      iVar5 = 0;
      *(undefined1 *)(iVar7 + 0x979) = 1;
      *(undefined4 *)(iVar7 + 0xd5c) = *(undefined4 *)(iVar7 + 0x1fc);
      *(undefined2 *)(iVar7 + 0xd58) = 1;
      *(undefined1 *)(iVar7 + 0xd5a) = 0;
      *(undefined2 *)(iVar7 + 0xd60) = *(undefined2 *)(iVar7 + 0x202);
      *(int *)(iVar7 + 0xfc4) = param_3 + 0x30;
      *(undefined1 *)(iVar7 + 0x1029) = 0xf;
      *(undefined2 *)(iVar7 + 0x102a) = 1;
      iVar3 = iVar7;
      if (cVar1 != '\0') {
        do {
          if (((int)((uint)*(ushort *)(iVar3 + 0x79a) << 0x1f) < 0) &&
             (*(short *)(param_2 + 0x1c) == *(short *)(iVar3 + 0x798))) {
            *(char *)(iVar7 + 0x1029) = (char)iVar5;
            break;
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 0x18;
        } while (iVar5 != 9);
      }
      *(undefined4 *)(iVar7 + 0x1030) = 0xe10;
      *(undefined4 *)(iVar7 + 0x102c) = *DAT_000188ec;
      uVar10 = *(undefined4 *)(param_2 + 0x2b8);
      puVar8 = *(undefined4 **)(param_2 + 8);
      memset((void *)(iVar7 + 0xd62),0,0x25f);
      *(undefined4 *)(iVar7 + 0xd64) = *(undefined4 *)(param_2 + 0x290);
      *(undefined2 *)(iVar7 + 0xd68) = *(undefined2 *)(param_2 + 0x294);
      *(undefined4 *)(iVar7 + 0xd6a) = *puVar8;
      *(undefined2 *)(iVar7 + 0xd6e) = *(undefined2 *)(puVar8 + 1);
      if (*(int *)(param_3 + 0x34) == 0) {
        *(undefined1 *)(iVar7 + 0x1028) = 1;
        *(undefined1 *)(iVar7 + 0xdb0) = 0;
        *(undefined1 *)(iVar7 + 0xdb1) = 0;
        *(undefined1 *)(iVar7 + 0xdb2) = 0;
        *(undefined1 *)(iVar7 + 0xdb3) = 0;
      }
      else {
        *(undefined1 *)(iVar7 + 0x1028) = 0;
        for (iVar3 = 0; iVar3 < *(int *)(param_3 + 0x34); iVar3 = iVar3 + 1) {
          uVar6 = (uint)*(byte *)(*(int *)(param_3 + 0x30) + iVar3 * 0x21 + 0x20);
          if (uVar6 != 0) {
            *(uint *)(iVar7 + 0xdb0) = uVar6;
            pvVar11 = (void *)(*(int *)(param_3 + 0x30) + iVar3 * 0x21);
            memcpy((void *)(iVar7 + 0xd70),pvVar11,(uint)*(byte *)((int)pvVar11 + 0x20));
            break;
          }
        }
      }
      *(undefined1 *)(iVar7 + 0xdb4) = *(undefined1 *)(param_3 + 0x99);
      if (0x200 < *(uint *)(param_3 + 0x44)) {
        printk(DAT_000188f0);
      }
      *(char *)(iVar7 + 0xd62) = (char)uVar10;
      pvVar11 = (void *)(iVar7 + 0x1034);
      *(undefined1 *)(iVar7 + 0xd63) = *(undefined1 *)(iVar7 + 0x1029);
      uVar6 = *(uint *)(param_3 + 0x44);
      if ((*(uint *)(*(int *)(iVar7 + 0x210) + 0x7a4) & 8) == 0) {
        *(short *)(iVar7 + 0x1234) = (short)uVar6;
        __src = *(void **)(param_3 + 0x40);
        __n = *(size_t *)(param_3 + 0x44);
      }
      else {
        pcVar2 = *(char **)(param_3 + 0x40);
        uVar12 = uVar6 - 2;
        uVar9 = 0;
        cVar1 = *pcVar2;
        for (; 1 < uVar6; uVar6 = uVar6 - uVar4) {
          uVar4 = (uint)(byte)pcVar2[1];
          uVar6 = uVar6 - 2;
          if (uVar6 < uVar4) {
            uVar9 = 0xffffffff;
            goto LAB_000188a4;
          }
          if ((cVar1 == *pcVar2) && (uVar6 < uVar12)) break;
          pcVar2 = pcVar2 + uVar4 + 2;
          uVar9 = uVar9 + uVar4 + 2;
        }
        if ((int)uVar9 < 1) {
LAB_000188a4:
          printk(DAT_000188f4,uVar9);
          *(short *)(iVar7 + 0x1234) = (short)*(undefined4 *)(param_3 + 0x44);
          memcpy(pvVar11,*(void **)(param_3 + 0x40),*(size_t *)(param_3 + 0x44));
          pvVar11 = (void *)(iVar7 + 0x1236);
          *(short *)(iVar7 + 0x1436) = (short)*(undefined4 *)(param_3 + 0x44);
          __src = *(void **)(param_3 + 0x40);
          __n = *(size_t *)(param_3 + 0x44);
        }
        else {
          *(short *)(iVar7 + 0x1234) = (short)uVar9;
          memcpy(pvVar11,*(void **)(param_3 + 0x40),uVar9 & 0xffff);
          uVar6 = *(int *)(param_3 + 0x44) - (uVar9 & 0xffff);
          __n = uVar6 & 0xffff;
          *(short *)(iVar7 + 0x1436) = (short)uVar6;
          __src = (void *)(*(int *)(param_3 + 0x40) + uVar9);
          pvVar11 = (void *)(iVar7 + 0x1236);
        }
      }
      memcpy(pvVar11,__src,__n);
      iVar3 = iVar7 + 0xfd0;
    }
    queue_delayed_work_on(1,*(undefined4 *)(iVar7 + 0xfcc),iVar3,0);
  }
  else {
    printk(DAT_000188e4);
  }
  mutex_unlock(iVar7 + 0x204);
  return 0;
}



/* ===== ssv6xxx_cancel_hw_scan @ 000188f8 size=28 ===== */

void ssv6xxx_cancel_hw_scan(int param_1)

{
  cancel_delayed_work_sync(param_1 + 0xfd0);
  *(undefined1 *)(param_1 + 0xd59) = 1;
  ssv6xxx_scan_complete(param_1);
  return;
}



/* ===== __skb_dequeue @ 00018914 size=36 ===== */

int * __skb_dequeue(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (param_1 == piVar3) {
    piVar3 = (int *)0x0;
  }
  else if (piVar3 != (int *)0x0) {
    param_1[2] = param_1[2] + -1;
    iVar1 = *piVar3;
    piVar2 = (int *)piVar3[1];
    *piVar3 = 0;
    piVar3[1] = 0;
    *(int **)(iVar1 + 4) = piVar2;
    *piVar2 = iVar1;
  }
  return piVar3;
}



/* ===== ssv6x5x_beacon_enable @ 00018938 size=140 ===== */

void ssv6x5x_beacon_enable(int *param_1,uint param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = ssv_skb_alloc(iVar3,0x5c);
  if (iVar1 != 0) {
    skb_put(iVar1,0x5c);
    puVar2 = memset(*(void **)(iVar1 + 0xa4),0,0x5c);
    *(undefined1 *)(puVar2 + 1) = 5;
    *(uint *)(puVar2 + 2) = param_2 ^ 1;
    *(undefined1 *)((int)puVar2 + 3) = 10;
    *puVar2 = *(undefined2 *)(iVar1 + 0x50);
    if (param_2 == 0) {
      puVar2[8] = puVar2[8] | 1;
    }
    if (param_1[0x36a] == 1) {
      *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) | 1;
    }
    iVar1 = (**(code **)(param_1[4] + 0x6c))(param_1[5],iVar1);
    if (iVar1 != 0) {
      printk(DAT_000189d0,DAT_000189cc);
    }
    if ((param_2 == 0) && (*(int *)(iVar3 + 0x890) != 0)) {
      __dev_kfree_skb_any(*(int *)(iVar3 + 0x890),1);
      *(undefined4 *)(iVar3 + 0x890) = 0;
    }
    return;
  }
  printk(DAT_000189c8,DAT_000189c4);
  return;
}



/* ===== ssv6x5x_beacon_set_interval @ 000189d4 size=110 ===== */

void ssv6x5x_beacon_set_interval(int param_1,int param_2,undefined1 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    param_2 = 100;
  }
  iVar2 = ssv_skb_alloc(param_1,0x5c);
  uVar3 = DAT_00018a48;
  uVar5 = DAT_00018a44;
  if (iVar2 != 0) {
    skb_put(iVar2,0x5c);
    puVar4 = memset(*(void **)(iVar2 + 0xa4),0,0x5c);
    *(undefined1 *)(puVar4 + 1) = 5;
    *(undefined1 *)(puVar4 + 2) = 2;
    *(undefined1 *)((int)puVar4 + 5) = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    *(undefined1 *)((int)puVar4 + 3) = 10;
    uVar1 = *(undefined2 *)(iVar2 + 0x50);
    puVar4[0x2a] = (short)param_2;
    *(undefined1 *)(puVar4 + 0x2b) = param_3;
    *puVar4 = uVar1;
    iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0x6c))(*(undefined4 *)(param_1 + 0x14),iVar2);
    uVar3 = DAT_00018a50;
    uVar5 = DAT_00018a4c;
    if (iVar2 == 0) {
      return;
    }
  }
  printk(uVar3,uVar5);
  return;
}



/* ===== ssv6xxx_beacon_set @ 00018a54 size=180 ===== */

void ssv6xxx_beacon_set(int param_1,int param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  short sVar6;
  
  iVar2 = ssv_skb_alloc_ex(*(undefined4 *)(param_1 + 0x210),*(int *)(param_2 + 0x50) + 0x5c,0xa20);
  uVar3 = DAT_00018b0c;
  uVar5 = DAT_00018b08;
  if (iVar2 != 0) {
    skb_put(iVar2,*(int *)(param_2 + 0x50) + 0x5c);
    puVar4 = memset(*(void **)(iVar2 + 0xa4),0,*(int *)(param_2 + 0x50) + 0x5c);
    *(byte *)(puVar4 + 1) = *(byte *)(puVar4 + 1) & 0xf8 | 5;
    *(undefined1 *)(puVar4 + 2) = 3;
    *(undefined1 *)((int)puVar4 + 5) = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    *(undefined1 *)((int)puVar4 + 3) = 10;
    uVar1 = *(undefined2 *)(iVar2 + 0x50);
    puVar4[0x2c] = param_3;
    *puVar4 = uVar1;
    *(undefined1 *)(puVar4 + 0x2b) = *(undefined1 *)(param_1 + 0x88e);
    sVar6 = *(short *)(param_1 + 0x88c);
    if (sVar6 == 0) {
      sVar6 = 100;
    }
    puVar4[0x2a] = sVar6;
    puVar4[0x2d] = *(undefined2 *)(param_2 + 0x50);
    memcpy(puVar4 + 0x2e,*(void **)(param_2 + 0xa4),*(size_t *)(param_2 + 0x50));
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
                      (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar2);
    uVar3 = DAT_00018b14;
    uVar5 = DAT_00018b10;
    if (iVar2 == 0) {
      return;
    }
  }
  printk(uVar3,uVar5);
  return;
}



/* ===== ssv6xxx_beacon_change @ 00018b18 size=270 ===== */

void ssv6xxx_beacon_change(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ushort local_1c;
  ushort local_1a [3];
  
  uVar1 = DAT_00018c28;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (iVar2 = ieee80211_beacon_get_tim(param_2,param_3,&local_1c,local_1a), uVar1 = DAT_00018c2c,
     iVar2 == 0)) {
    printk(uVar1);
  }
  else {
    if ((local_1c != 0) && (5 < local_1a[0])) {
      *(undefined1 *)(*(int *)(iVar2 + 0xa4) + (uint)local_1c + 2) = 0;
      if (-1 < *(int *)(*(int *)(param_1 + 0x210) + 0x7a4) << 0x11) {
        *(undefined1 *)(*(int *)(iVar2 + 0xa4) + (uint)local_1c + 3) = 1;
      }
      bVar4 = *(byte *)(*(int *)(iVar2 + 0xa4) + local_1c + 4);
      if (param_4 == 0) {
        bVar4 = bVar4 & 0xfe;
      }
      else {
        bVar4 = bVar4 | 1;
      }
      *(byte *)(*(int *)(iVar2 + 0xa4) + local_1c + 4) = bVar4;
    }
    dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x10,DAT_00018c30,
             *(undefined4 *)(iVar2 + 0x50),local_1c);
    (**(code **)(*(int *)(param_1 + 0x210) + 0x28c))(param_1,iVar2);
    dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x10,DAT_00018c30,
             *(undefined4 *)(iVar2 + 0x50),local_1c);
    iVar5 = *(int *)(param_1 + 0x890);
    if ((iVar5 == 0) ||
       (iVar3 = memcmp(*(void **)(iVar5 + 0xa4),*(void **)(iVar2 + 0xa4),*(int *)(iVar2 + 0x50) - 4)
       , iVar3 != 0)) {
      *(int *)(param_1 + 0x890) = iVar2;
      local_1c = local_1c + 2;
      *(char *)(param_1 + 0x88e) = *(char *)(param_3 + 0x22) + -1;
      ssv6xxx_beacon_set(param_1,iVar2);
      iVar2 = iVar5;
      if (iVar5 == 0) {
        return;
      }
    }
    __dev_kfree_skb_any(iVar2,1);
  }
  return;
}



/* ===== ssv6200_set_tim_work @ 00018c34 size=14 ===== */

void ssv6200_set_tim_work(undefined4 *param_1)

{
  ssv6xxx_beacon_change(param_1,*param_1,param_1[0x21c],*(undefined1 *)(param_1 + 0x243));
  return;
}



/* ===== ssv6200_bcast_queue_len @ 00018c42 size=14 ===== */

undefined4 ssv6200_bcast_queue_len(int param_1)

{
  disableIRQinterrupts();
  return *(undefined4 *)(param_1 + 0xc);
}



/* ===== ssv6200_bcast_dequeue @ 00018c50 size=34 ===== */

undefined4 ssv6200_bcast_dequeue(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  disableIRQinterrupts();
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar2;
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = (char)iVar2;
    }
    uVar1 = __skb_dequeue();
  }
  return uVar1;
}



/* ===== ssv6200_bcast_enqueue @ 00018c72 size=74 ===== */

undefined4 ssv6200_bcast_enqueue(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  disableIRQinterrupts();
  if (0xf < *(int *)(param_2 + 0xc)) {
    uVar1 = __skb_dequeue(param_2);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    ssv6xxx_txbuf_free_skb(uVar1,param_1);
    printk(DAT_00018cbc);
  }
  puVar2 = *(undefined4 **)(param_2 + 4);
  *param_3 = param_2;
  param_3[1] = (int)puVar2;
  *(int **)(param_2 + 4) = param_3;
  *puVar2 = param_3;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  return *(undefined4 *)(param_2 + 0xc);
}



/* ===== ssv6200_bcast_flush @ 00018cc0 size=44 ===== */

void ssv6200_bcast_flush(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  disableIRQinterrupts();
  while (0 < *(int *)(param_2 + 0xc)) {
    uVar1 = __skb_dequeue(param_2);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    ssv6xxx_txbuf_free_skb(uVar1,param_1);
  }
  return;
}



/* ===== ssv6200_bcast_start_work @ 00018cec size=90 ===== */

undefined4 ssv6200_bcast_start_work(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(ushort *)(param_1 + -0x18) + 0x14;
  iVar3 = ((uint)*(byte *)(param_1 + -0x16) * iVar3 + iVar3) * 300;
  lVar1 = (longlong)iVar3 * (longlong)DAT_00018d48;
  *(int *)(param_1 + 0x7c) = (int)(lVar1 >> 0x26) - (iVar3 >> 0x1f);
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined1 *)(param_1 + 0x68) = 1;
    ssv6xxx_beacon_change
              ((undefined4 *)(param_1 + -0x8a4),*(undefined4 *)(param_1 + -0x8a4),
               *(undefined4 *)(param_1 + -0x34),1);
    uVar2 = queue_delayed_work_on
                      (1,*(undefined4 *)(param_1 + -0x1c),param_1 + 0x3c,
                       *(undefined4 *)(param_1 + 0x7c));
    return uVar2;
  }
  return (int)lVar1;
}



/* ===== ssv6200_bcast_stop_work @ 00018d4c size=72 ===== */

void ssv6200_bcast_stop_work(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r2;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    return;
  }
  iVar1 = ssv6200_bcast_queue_len(param_1 + 0x5c,param_2,param_1);
  if (iVar1 == 0) {
    cancel_delayed_work_sync(extraout_r2 + 0x2c);
    *(undefined1 *)(param_1 + 0x58) = 0;
    ssv6xxx_beacon_change
              ((undefined4 *)(param_1 + -0x8b4),*(undefined4 *)(param_1 + -0x8b4),
               *(undefined4 *)(param_1 + -0x44),0);
    return;
  }
  queue_delayed_work_on(1,*(undefined4 *)(param_1 + -0x2c),extraout_r2 + 0x2c,3);
  return;
}



/* ===== ssv6200_bcast_stop @ 00018d94 size=26 ===== */

void ssv6200_bcast_stop(int param_1)

{
  queue_delayed_work_on
            (1,*(undefined4 *)(param_1 + 0x888),param_1 + 0x8b4,
             (uint)*(ushort *)(param_1 + 0x88c) * 300 >> 10);
  return;
}



/* ===== ssv6200_bcast_tx_work @ 00018dae size=220 ===== */

void ssv6200_bcast_tx_work(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  byte local_29 [5];
  
  piVar2 = DAT_00018e8c;
  iVar7 = param_1 + -0x8e0;
  uVar8 = *(undefined4 *)(param_1 + 0x40);
  disableIRQinterrupts();
  if ((*(char *)(param_1 + 0x2d) == '\0') &&
     (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + -0x6d0) + 0x10) + 0x60))
                        (*(undefined4 *)(*(int *)(param_1 + -0x6d0) + 0x14),8), iVar3 != 0)) {
    *piVar2 = 0;
    iVar3 = 0;
    do {
      iVar4 = ssv6200_bcast_dequeue(param_1 + 0x30,local_29);
      if (iVar4 == 0) goto LAB_00018de6;
      if (local_29[0] != 0) {
        uVar6 = (ushort)local_29[0];
        iVar5 = extraout_r2;
        if (iVar3 != 7) {
          iVar5 = *(int *)(iVar4 + 0xa4);
          uVar6 = *(ushort *)(iVar5 + 0x50) | 0x2000;
        }
        if (iVar3 != 7) {
          *(ushort *)(iVar5 + 0x50) = uVar6;
        }
      }
      iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + -0x6d0) + 0x10) + 0x30))
                        (*(undefined4 *)(*(int *)(param_1 + -0x6d0) + 0x14),iVar4,9,0,0);
      if (iVar5 < 0) {
        printk(DAT_00018e90);
        ssv6xxx_txbuf_free_skb(iVar4,iVar7);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(2,0x18e62);
        (*pcVar1)();
      }
      disableIRQinterrupts();
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
  }
  else {
    if (5 < *piVar2 + 1) {
      *piVar2 = 0;
      ssv6200_bcast_flush(iVar7,param_1 + 0x30);
LAB_00018de6:
      ssv6200_bcast_stop(iVar7);
      return;
    }
    *piVar2 = *piVar2 + 1;
  }
  queue_delayed_work_on(1,*(undefined4 *)(param_1 + -0x58),param_1,uVar8);
  return;
}



/* ===== ssv6200_bcast_start @ 00018e94 size=14 ===== */

void ssv6200_bcast_start(int param_1)

{
  queue_work_on(1,*(undefined4 *)(param_1 + 0x888),param_1 + 0x8a4);
  return;
}



/* ===== ssv6200_release_bcast_frame_res @ 00018ea2 size=58 ===== */

void ssv6200_release_bcast_frame_res(int param_1,int param_2)

{
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  disableIRQinterrupts();
  *(undefined4 *)(param_2 + 0x2c4) = 0;
  cancel_work_sync(param_1 + 0x8a4,param_2,0,
                   (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b);
  cancel_delayed_work_sync(param_1 + 0x8b4);
  ssv6200_bcast_flush(param_1,param_1 + 0x910);
  cancel_delayed_work_sync(param_1 + 0x8e0);
  return;
}



/* ===== queue_status_open @ 00018edc size=12 ===== */

undefined4 queue_status_open(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x158);
  return 0;
}



/* ===== queue_status_read @ 00018ee8 size=78 ===== */

undefined4 queue_status_read(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_00018f38 + 0x30),0xdc0,param_3,DAT_00018f38,param_1,
                           param_2);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = ssv6xxx_tx_queue_status_dump(uVar2,iVar1,0x1000);
    uVar2 = simple_read_from_buffer(param_2,param_3,param_4,iVar1,uVar2);
    kfree(iVar1);
  }
  return uVar2;
}



/* ===== ssv6xxx_init_debugfs @ 00018f3c size=62 ===== */

undefined4 ssv6xxx_init_debugfs(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = debugfs_create_dir(param_2,*(undefined4 *)(*(int *)(*param_1 + 0x38) + 0x28c),param_3,
                             *(int *)(*param_1 + 0x38),param_1,param_2);
  uVar2 = DAT_00018f80;
  if (iVar1 == 0) {
    _dev_err(param_1[1],DAT_00018f7c);
    uVar2 = 0xfffffff4;
  }
  else {
    param_1[0x26e] = iVar1;
    debugfs_create_file(DAT_00018f84,0x124,iVar1,param_1,uVar2);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== ssv6xxx_deinit_debugfs @ 00018f88 size=22 ===== */

void ssv6xxx_deinit_debugfs(int param_1)

{
  if (*(int *)(param_1 + 0x9b8) != 0) {
    debugfs_remove();
    *(undefined4 *)(param_1 + 0x9b8) = 0;
  }
  return;
}



/* ===== ssv6xxx_debugfs_add_interface @ 00018f9e size=130 ===== */

void ssv6xxx_debugfs_add_interface(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_2e [18];
  int local_1c;
  
  piVar1 = DAT_00019020;
  uVar4 = *(undefined4 *)(param_1 + 0x9b8);
  iVar3 = *(int *)(param_2 + 0x2b8);
  local_1c = *DAT_00019020;
  snprintf(acStack_2e,0x12,DAT_00019024,(uint)*(byte *)(param_2 + 0x290),
           (uint)*(byte *)(param_2 + 0x291),(uint)*(byte *)(param_2 + 0x292),
           (uint)*(byte *)(param_2 + 0x293),(uint)*(byte *)(param_2 + 0x294),
           (uint)*(byte *)(param_2 + 0x295));
  iVar2 = debugfs_create_dir(acStack_2e,uVar4);
  if (iVar2 == 0) {
    _dev_err(*(undefined4 *)(param_1 + 4),DAT_00019028,acStack_2e);
    uVar4 = 0xfffffff4;
  }
  else {
    *(undefined4 *)(param_1 + 0x9b8) = uVar4;
    *(int *)(iVar3 * 0x274 + param_1 + 0x520) = iVar2;
    uVar4 = 0;
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ===== ssv6xxx_debugfs_remove_interface @ 0001902c size=42 ===== */

undefined4 ssv6xxx_debugfs_remove_interface(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x2b8) * 0x274 + param_1;
  iVar1 = *(int *)(iVar2 + 0x520);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x9b8) != 0)) {
    debugfs_remove(iVar1);
    *(undefined4 *)(iVar2 + 0x520) = 0;
  }
  return 0;
}



/* ===== ssv6xxx_debugfs_remove_sta @ 00019056 size=46 ===== */

undefined4 ssv6xxx_debugfs_remove_sta(int param_1,int param_2)

{
  if (((*(int *)(param_1 + 0x9b8) != 0) &&
      (*(int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x2b8) * 0x274 + param_1 + 0x520) != 0)) &&
     (*(int *)(param_2 + 0x14) != 0)) {
    debugfs_remove();
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  return 0;
}



/* ===== ssv6xxx_debugfs_add_sta @ 00019084 size=124 ===== */

void ssv6xxx_debugfs_add_sta(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char acStack_2e [18];
  int local_1c;
  
  piVar1 = DAT_00019100;
  local_1c = *DAT_00019100;
  iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x2b8) * 0x274 + param_1 + 0x520);
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 8);
    snprintf(acStack_2e,0x12,DAT_00019104,(uint)*(byte *)(iVar3 + 0x14),
             (uint)*(byte *)(iVar3 + 0x15),(uint)*(byte *)(iVar3 + 0x16),
             (uint)*(byte *)(iVar3 + 0x17),(uint)*(byte *)(iVar3 + 0x18),
             (uint)*(byte *)(iVar3 + 0x19));
    iVar4 = debugfs_create_dir(acStack_2e,iVar4);
    if (iVar4 == 0) {
      _dev_err(*(undefined4 *)(param_1 + 4),DAT_00019108,acStack_2e);
      uVar2 = 0xfffffff4;
    }
    else {
      *(int *)(param_2 + 0x14) = iVar4;
      uVar2 = 0;
    }
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== is_valid_ether_addr @ 0001910c size=22 ===== */

bool is_valid_ether_addr(int *param_1)

{
  if (*param_1 << 0x1f < 0) {
    return false;
  }
  return *param_1 != 0 || (short)param_1[1] != 0;
}



/* ===== key_char2num @ 00019122 size=40 ===== */

uint key_char2num(int param_1)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = param_1 - 0x30U & 0xff;
  if (uVar1 < 10) {
    return uVar1;
  }
  if (param_1 - 0x61U < 6) {
    bVar2 = (char)param_1 + 0xa9;
  }
  else {
    if (5 < param_1 - 0x41U) {
      return 0xff;
    }
    bVar2 = (char)param_1 - 0x37;
  }
  return (uint)bVar2;
}



/* ===== openFile @ 0001914a size=18 ===== */

uint openFile(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = filp_open(param_1,param_2,0,param_4,param_4);
  if (0xfffff000 < uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== readFile @ 0001915c size=28 ===== */

undefined4 readFile(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(int *)(param_1 + 0x14) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001916e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== closeFile @ 00019178 size=12 ===== */

undefined4 closeFile(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  filp_close(param_1,0,param_3,param_4,param_4);
  return 0;
}



/* ===== write_mac_to_file @ 00019184 size=122 ===== */

void write_mac_to_file(undefined4 param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  char acStack_9c [128];
  int local_1c;
  
  piVar1 = DAT_00019200;
  local_1c = *DAT_00019200;
  iVar2 = openFile(param_1,0x41,0x1a0);
  if (iVar2 == 0) {
    printk(DAT_00019208,param_1);
  }
  else {
    memset(acStack_9c,0,0x80);
    sprintf(acStack_9c,DAT_00019204,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
            (uint)param_2[3],(uint)param_2[4],(uint)param_2[5]);
    sVar3 = strlen(acStack_9c);
    (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))(iVar2,acStack_9c,sVar3 + 1,iVar2 + 0x38);
    closeFile(iVar2);
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}



/* ===== initKernelEnv @ 0001920c size=2 ===== */

void initKernelEnv(void)

{
  return;
}



/* ===== deinitKernelEvn @ 0001920e size=2 ===== */

void deinitKernelEvn(void)

{
  return;
}



/* ===== parseMac @ 00019210 size=32 ===== */

void parseMac(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(param_2 + -1);
  iVar2 = param_1;
  do {
    iVar3 = iVar2 + 3;
    uVar1 = simple_strtol(iVar2,0,0x10);
    puVar4 = puVar4 + 1;
    *puVar4 = uVar1;
    iVar2 = iVar3;
  } while (iVar3 != param_1 + 0x12);
  return;
}



/* ===== readfile_mac @ 00019230 size=110 ===== */

void readfile_mac(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_9c [128];
  int local_1c;
  
  piVar1 = DAT_000192a0;
  local_1c = *DAT_000192a0;
  iVar2 = openFile(param_1,0);
  if (iVar2 == 0) {
    printk(DAT_000192a8,param_1);
    iVar3 = 0;
  }
  else {
    memset(auStack_9c,0,0x80);
    iVar3 = readFile(iVar2,auStack_9c,0x80);
    if (iVar3 < 1) {
      printk(DAT_000192a4,iVar3,param_1);
    }
    else {
      parseMac(auStack_9c,param_2);
    }
    closeFile(iVar2);
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}



/* ===== addr_increase_copy @ 000192ac size=38 ===== */

void addr_increase_copy(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  char cVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  bVar1 = param_2[5];
  if ((int)((uint)bVar1 << 0x1f) < 0) {
    cVar2 = bVar1 - 1;
  }
  else {
    cVar2 = bVar1 + 1;
  }
  param_1[5] = cVar2;
  return;
}



/* ===== key_2char2num @ 000192d2 size=22 ===== */

uint key_2char2num(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = key_char2num();
  uVar1 = key_char2num((int)((ulonglong)uVar2 >> 0x20));
  return (uVar1 | (int)uVar2 << 4) & 0xff;
}



/* ===== efuse_read_all_map @ 000192e8 size=424 ===== */

void efuse_read_all_map(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 local_32;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_26;
  undefined2 local_22;
  
  local_2c = *DAT_00019490;
  local_28 = *(undefined2 *)(DAT_00019490 + 1);
  puVar4 = (undefined4 *)(param_1 + 0x7bc);
  local_32 = 0;
  local_2e = 0;
  local_26 = 0;
  local_22 = 0;
  (**(code **)(param_1 + 0x184))(param_1,&local_26);
  iVar2 = is_valid_ether_addr(puVar4);
  if (iVar2 != 0) goto LAB_0001935a;
  iVar2 = param_1 + 0x7c2;
  if ((*(int *)(param_1 + 0xc84) == 0) && (iVar3 = is_valid_ether_addr(&local_26), iVar3 != 0)) {
    printk(DAT_00019494);
    puVar4 = &local_26;
    *(undefined4 *)(param_1 + 0x7bc) = local_26;
    *(undefined2 *)(param_1 + 0x7c0) = local_22;
  }
  else {
    puVar5 = (undefined1 *)*DAT_000194b4;
    if (puVar5 != (undefined1 *)0x0) {
      puVar6 = puVar5;
      puVar8 = &local_32;
      do {
        puVar7 = puVar6 + 3;
        uVar1 = key_2char2num(*puVar6,puVar6[1]);
        *(undefined1 *)puVar8 = uVar1;
        puVar6 = puVar7;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      } while (puVar7 != puVar5 + 0x12);
      iVar3 = is_valid_ether_addr(&local_32);
      if (iVar3 != 0) {
        printk(DAT_000194b8);
        puVar4 = &local_32;
        *(undefined4 *)(param_1 + 0x7bc) = local_32;
        *(undefined2 *)(param_1 + 0x7c0) = local_2e;
        goto LAB_00019354;
      }
    }
    if (((*(char *)(param_1 + 0xb84) == '\0') ||
        (iVar3 = readfile_mac(param_1 + 0xb84,puVar4), iVar3 == 0)) ||
       (iVar3 = is_valid_ether_addr(puVar4), iVar3 == 0)) {
      if (*(int *)(param_1 + 0xc8c) == 1) {
        get_random_bytes(puVar4,6);
        *(byte *)(param_1 + 0x7bc) = *(byte *)(param_1 + 0x7bc) & 0xf0;
LAB_0001943c:
        addr_increase_copy(iVar2,puVar4);
      }
      else {
        if (*(int *)(param_1 + 0xc8c) != 2) {
          puVar4 = &local_2c;
          *(undefined4 *)(param_1 + 0x7bc) = local_2c;
          *(undefined2 *)(param_1 + 0x7c0) = local_28;
          goto LAB_0001943c;
        }
        iVar3 = readfile_mac(param_1 + 0xc04,puVar4);
        if ((iVar3 != 0) && (iVar3 = is_valid_ether_addr(puVar4), iVar3 != 0)) goto LAB_0001943c;
        get_random_bytes(puVar4,6);
        *(byte *)(param_1 + 0x7bc) = *(byte *)(param_1 + 0x7bc) & 0xf0;
        addr_increase_copy(iVar2,puVar4);
        if (*(char *)(param_1 + 0xc04) != '\0') {
          write_mac_to_file(param_1 + 0xc04);
        }
      }
      printk(DAT_000194c0,*(undefined4 *)(param_1 + 0xc8c));
      goto LAB_0001935a;
    }
    printk(DAT_000194bc);
  }
LAB_00019354:
  addr_increase_copy(iVar2,puVar4);
LAB_0001935a:
  printk(DAT_00019498);
  printk(DAT_0001949c,*(undefined4 *)(param_1 + 0x7ec));
  printk(DAT_000194a0,*(undefined4 *)(param_1 + 0x7e0));
  printk(DAT_000194a4,*(undefined4 *)(param_1 + 0x7e4));
  printk(DAT_000194a8,&local_26);
  printk(DAT_000194ac,*(undefined4 *)(param_1 + 0x7f0));
  printk(DAT_000194b0,*(undefined4 *)(param_1 + 0x7f4));
  return;
}



/* ===== ssv_skb_alloc @ 000194c4 size=62 ===== */

void ssv_skb_alloc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = __netdev_alloc_skb(0,param_2 + 0xef,0xcc0,param_4,param_4);
  if (iVar1 != 0) {
    uVar4 = *(int *)(iVar1 + 0xa4) + 0x50;
    *(uint *)(iVar1 + 0xa4) = uVar4;
    iVar3 = *(int *)(iVar1 + 0x98) + 0x50;
    *(int *)(iVar1 + 0x98) = iVar3;
    if ((uVar4 & 0x1f) != 0) {
      iVar2 = 0x20 - (uVar4 & 0x1f);
      *(uint *)(iVar1 + 0xa4) = uVar4 + iVar2;
      *(int *)(iVar1 + 0x98) = iVar3 + iVar2;
    }
  }
  return;
}



/* ===== ssv_skb_alloc_ex @ 00019502 size=58 ===== */

void ssv_skb_alloc_ex(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = __netdev_alloc_skb(0,param_2 + 0xef,param_3,param_4,param_4);
  if (iVar1 != 0) {
    uVar4 = *(int *)(iVar1 + 0xa4) + 0x50;
    *(uint *)(iVar1 + 0xa4) = uVar4;
    iVar3 = *(int *)(iVar1 + 0x98) + 0x50;
    *(int *)(iVar1 + 0x98) = iVar3;
    if ((uVar4 & 0x1f) != 0) {
      iVar2 = 0x20 - (uVar4 & 0x1f);
      *(uint *)(iVar1 + 0xa4) = uVar4 + iVar2;
      *(int *)(iVar1 + 0x98) = iVar3 + iVar2;
    }
  }
  return;
}



/* ===== ssv_skb_free @ 0001953c size=8 ===== */

void ssv_skb_free(undefined4 param_1,undefined4 param_2)

{
  __dev_kfree_skb_any(param_2,1);
  return;
}



/* ===== ssv_ctl_cmd_smartlink @ 00019544 size=46 ===== */

undefined4 ssv_ctl_cmd_smartlink(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = ssv6xxx_driver_attach(DAT_00019574);
  if (param_2 != 0) {
    iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 4);
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(iVar1 + 0xc30) = *(undefined4 *)(iVar3 + 4);
      *(undefined4 *)(iVar1 + 0xc34) = uVar2;
      return 0;
    }
    printk(DAT_00019578);
  }
  return 0xffffffea;
}



/* ===== ssv_ctl_start_smarticomm @ 0001957c size=34 ===== */

undefined4 ssv_ctl_start_smarticomm(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = ssv6xxx_driver_attach(DAT_000195a0);
  if ((param_2 == 0) || (iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 4), iVar3 == 0)) {
    uVar2 = 0xffffffea;
  }
  else {
    *(undefined4 *)(iVar1 + 0xc30) = *(undefined4 *)(iVar3 + 4);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== ssv_ctl_to_ssv_nimble @ 000195a4 size=74 ===== */

undefined4 ssv_ctl_to_ssv_nimble(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  iVar2 = ssv6xxx_driver_attach(DAT_000195f0);
  printk(DAT_000195f8,DAT_000195f4,0x28c);
  if ((param_2 != 0) &&
     (psVar3 = *(short **)(*(int *)(param_2 + 0x14) + 0x34), psVar3 != (short *)0x0)) {
    sVar1 = *psVar3;
    mutex_lock(iVar2 + 0x204);
    ssv6xxx_ble_api_send(iVar2,psVar3 + 2,sVar1 + -4);
    mutex_unlock(iVar2 + 0x204);
    return 0;
  }
  return 0xffffffea;
}



/* ===== ssv_ctl_send_rawdata @ 000195fc size=40 ===== */

undefined4
ssv_ctl_send_rawdata(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  
  if (((param_2 == 0) ||
      (puVar3 = *(ushort **)(*(int *)(param_2 + 0x14) + 0x28), puVar3 == (ushort *)0x0)) ||
     (puVar3 + 2 == (ushort *)0x0)) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = ssv6xxx_send_rawdata_packet(puVar3 + 2,*puVar3 - 4,param_3,puVar3,param_4);
    uVar2 = 0;
    if (iVar1 != 0) {
      printk(DAT_00019624);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== nla_put_string @ 00019628 size=30 ===== */

void nla_put_string(undefined4 param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
  nla_put(param_1,param_2,sVar1 + 1,param_3);
  return;
}



/* ===== ssv_ctl_set_si_cmd @ 00019646 size=26 ===== */

undefined4 ssv_ctl_set_si_cmd(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == 0) || (iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0x18), iVar2 == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    ssv6xxx_send_si_cmd(*(undefined4 *)(iVar2 + 4));
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== ssv_ctl_set_channel @ 00019660 size=98 ===== */

undefined4 ssv_ctl_set_channel(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [10];
  undefined2 local_3e;
  
  iVar1 = ssv6xxx_driver_attach(DAT_000196c4);
  if ((param_2 == 0) || (iVar2 = *(int *)(*(int *)(param_2 + 0x14) + 0xc), iVar2 == 0)) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 4);
    memset(auStack_48,0,0x38);
    local_3e = (undefined2)uVar3;
    mutex_lock(iVar1 + 0x204);
    *(undefined2 *)(iVar1 + 0x202) = 1;
    *(undefined2 *)(iVar1 + 0x200) = local_3e;
    uVar3 = (**(code **)(*(int *)(iVar1 + 0x210) + 0x31c))(iVar1,auStack_48,1,0);
    mutex_unlock(iVar1 + 0x204);
  }
  return uVar3;
}



/* ===== ssv_ctl_ssv_nimble_enable @ 000196c8 size=44 ===== */

undefined4
ssv_ctl_ssv_nimble_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_000196fc;
  puVar1 = DAT_000196f8;
  if (param_2 != 0) {
    if (*(int *)(*(int *)(param_2 + 0x14) + 0x2c) != 0) {
      uVar4 = *(undefined4 *)(param_2 + 4);
      *(undefined1 *)(DAT_000196f8 + 1) = 1;
      uVar3 = DAT_00019700;
      *puVar1 = uVar4;
      printk(uVar2,uVar3,uVar4,puVar1,param_4);
      return 0;
    }
    printk(DAT_000196f4);
  }
  return 0xffffffea;
}



/* ===== ssv_ctl_ssv_nimble_disable @ 00019704 size=42 ===== */

undefined4 ssv_ctl_ssv_nimble_disable(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_0001973c;
  uVar2 = DAT_00019738;
  puVar1 = DAT_00019734;
  if (param_2 != 0) {
    if (*(int *)(*(int *)(param_2 + 0x14) + 0x30) != 0) {
      *DAT_00019734 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      printk(uVar3,uVar2);
      return 0;
    }
    printk(DAT_00019730);
  }
  return 0xffffffea;
}



/* ===== ssv_ctl_set_promisc @ 00019740 size=64 ===== */

undefined4 ssv_ctl_set_promisc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x10), iVar1 != 0)) {
    printk(DAT_00019784,DAT_00019780,0x121,iVar1,param_4);
    printk(DAT_00019784,DAT_00019780,0x122);
    printk(DAT_00019784,DAT_00019780,0x123);
    printk(DAT_00019784,DAT_00019780,0x124);
  }
  return 0xffffffea;
}



/* ===== genlmsg_unicast.constprop.3 @ 00019788 size=24 ===== */

uint genlmsg_unicast_constprop_3
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = netlink_unicast(*(undefined4 *)(DAT_000197a0 + 0x9c),param_1,param_2,0x40,param_4);
  return uVar1 & (int)uVar1 >> 0x1f;
}



/* ===== alloc_skb.constprop.5 @ 000197a4 size=14 ===== */

void alloc_skb_constprop_5(undefined4 param_1)

{
  __alloc_skb(param_1,0xcc0,0,0xffffffff);
  return;
}



/* ===== ssv_ctl_get_si_ssid @ 000197b2 size=162 ===== */

void ssv_ctl_get_si_ssid(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_9c;
  undefined1 auStack_98 [124];
  int local_1c;
  
  piVar1 = DAT_00019854;
  local_1c = *DAT_00019854;
  local_9c = 0;
  memset(auStack_98,0,0x7c);
  if (param_2 == (undefined4 *)0x0) {
    iVar4 = -0x16;
  }
  else {
    get_si_ssid(&local_9c);
    iVar2 = alloc_skb_constprop_5(0xf04);
    if (iVar2 == 0) {
      iVar4 = -0xc;
    }
    else {
      iVar3 = genlmsg_put(iVar2,0,*param_2,DAT_00019858,0,10);
      if (iVar3 == 0) {
        iVar4 = -0x69;
      }
      else {
        iVar4 = nla_put_string(iVar2,8,&local_9c);
        if (iVar4 == 0) {
          *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
          iVar4 = genlmsg_unicast_constprop_3(iVar2,param_2[1]);
          goto LAB_0001982c;
        }
        printk(DAT_0001985c);
      }
      kfree_skb(iVar2);
    }
  }
LAB_0001982c:
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}



/* ===== ssv_ctl_nl_send_msg @ 00019860 size=132 ===== */

int ssv_ctl_nl_send_msg(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(param_1 + 0xa4);
  uVar4 = *(undefined4 *)(param_1 + 0x50);
  iVar1 = ssv6xxx_driver_attach(DAT_000198e4);
  iVar2 = alloc_skb_constprop_5(0xf14);
  if (iVar2 == 0) {
    iVar5 = -0xc;
  }
  else {
    iVar3 = genlmsg_put(iVar2,0,0,DAT_000198e8,0,6);
    if (iVar3 == 0) {
      iVar5 = -0xc;
      printk(DAT_000198ec);
    }
    else {
      iVar5 = nla_put(iVar2,5,uVar4,uVar6);
      if (iVar5 == 0) {
        *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
        iVar1 = genlmsg_unicast_constprop_3(iVar2,*(undefined4 *)(iVar1 + 0xc34));
        return iVar1;
      }
      printk(DAT_000198f0);
    }
    kfree_skb(iVar2);
  }
  return iVar5;
}



/* ===== ssv_ctl_get_channel @ 000198f4 size=164 ===== */

int ssv_ctl_get_channel(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4
                       )

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  local_1c = param_4;
  iVar1 = ssv6xxx_driver_attach(DAT_00019998);
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    mutex_lock(iVar1 + 0x204);
    ssv6xxx_get_channel(iVar1,&local_20);
    mutex_unlock(iVar1 + 0x204);
    iVar2 = alloc_skb_constprop_5(0xf04);
    if (iVar2 == 0) {
      iVar1 = -0xc;
    }
    else {
      iVar3 = genlmsg_put(iVar2,0,*param_2,DAT_0001999c,0,3);
      if (iVar3 == 0) {
        iVar1 = -0x69;
      }
      else {
        local_1c = local_20;
        iVar1 = nla_put(iVar2,3,4,&local_1c);
        if (iVar1 == 0) {
          *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
          iVar1 = genlmsg_unicast_constprop_3(iVar2,param_2[1]);
          return iVar1;
        }
        printk(DAT_000199a0);
      }
      kfree_skb(iVar2);
    }
  }
  return iVar1;
}



/* ===== ssv_ctl_get_si_status @ 000199a4 size=162 ===== */

void ssv_ctl_get_si_status(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_9c;
  undefined1 auStack_98 [124];
  int local_1c;
  
  piVar1 = DAT_00019a48;
  local_1c = *DAT_00019a48;
  local_9c = 0;
  memset(auStack_98,0,0x7c);
  if (param_2 == (undefined4 *)0x0) {
    iVar4 = -0x16;
  }
  else {
    get_si_status(&local_9c);
    iVar2 = alloc_skb_constprop_5(0xf04);
    if (iVar2 == 0) {
      iVar4 = -0xc;
    }
    else {
      iVar3 = genlmsg_put(iVar2,0,*param_2,DAT_00019a4c,0,9);
      if (iVar3 == 0) {
        iVar4 = -0x69;
      }
      else {
        iVar4 = nla_put_string(iVar2,7,&local_9c);
        if (iVar4 == 0) {
          *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
          iVar4 = genlmsg_unicast_constprop_3(iVar2,param_2[1]);
          goto LAB_00019a1e;
        }
        printk(DAT_00019a50);
      }
      kfree_skb(iVar2);
    }
  }
LAB_00019a1e:
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}



/* ===== ssv_ctl_get_si_pass @ 00019a54 size=162 ===== */

void ssv_ctl_get_si_pass(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_9c;
  undefined1 auStack_98 [124];
  int local_1c;
  
  piVar1 = DAT_00019af8;
  local_1c = *DAT_00019af8;
  local_9c = 0;
  memset(auStack_98,0,0x7c);
  if (param_2 == (undefined4 *)0x0) {
    iVar4 = -0x16;
  }
  else {
    get_si_pass(&local_9c);
    iVar2 = alloc_skb_constprop_5(0xf04);
    if (iVar2 == 0) {
      iVar4 = -0xc;
    }
    else {
      iVar3 = genlmsg_put(iVar2,0,*param_2,DAT_00019afc,0,0xb);
      if (iVar3 == 0) {
        iVar4 = -0x69;
      }
      else {
        iVar4 = nla_put_string(iVar2,9,&local_9c);
        if (iVar4 == 0) {
          *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
          iVar4 = genlmsg_unicast_constprop_3(iVar2,param_2[1]);
          goto LAB_00019ace;
        }
        printk(DAT_00019b00);
      }
      kfree_skb(iVar2);
    }
  }
LAB_00019ace:
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}



/* ===== ssv_ctl_from_ssv_nimble @ 00019b04 size=136 ===== */

int ssv_ctl_from_ssv_nimble(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_00019b8c;
  if ((*DAT_00019b8c == 0) || ((char)DAT_00019b8c[1] == '\0')) {
    iVar4 = -1;
  }
  else {
    iVar2 = alloc_skb_constprop_5(0xf14);
    if (iVar2 == 0) {
      iVar4 = -0xc;
    }
    else {
      iVar3 = genlmsg_put(iVar2,0,0,DAT_00019b90,0,0x10);
      if (iVar3 == 0) {
        iVar4 = -0xc;
        printk(DAT_00019b94);
      }
      else {
        iVar4 = nla_put(iVar2,0xe,param_2,param_1);
        if (iVar4 == 0) {
          iVar4 = *piVar1;
          *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
          iVar4 = genlmsg_unicast_constprop_3(iVar2,iVar4);
          return iVar4;
        }
        printk(DAT_00019b98);
      }
      kfree_skb(iVar2);
    }
  }
  return iVar4;
}



/* ===== ssv_ctl_get_promisc @ 00019b9c size=160 ===== */

int ssv_ctl_get_promisc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  local_20 = 0;
  iVar1 = ssv6xxx_driver_attach(DAT_00019c3c);
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    mutex_lock(iVar1 + 0x204);
    ssv6xxx_get_promisc(iVar1,&local_20);
    mutex_unlock(iVar1 + 0x204);
    iVar2 = alloc_skb_constprop_5(0xf04);
    if (iVar2 == 0) {
      iVar1 = -0xc;
    }
    else {
      iVar3 = genlmsg_put(iVar2,0,*param_2,DAT_00019c40,0,5);
      if (iVar3 == 0) {
        iVar1 = -0x69;
      }
      else {
        local_1c[0] = local_20;
        iVar1 = nla_put(iVar2,4,4,local_1c);
        if (iVar1 == 0) {
          *(int *)(iVar3 + -0x14) = *(int *)(iVar2 + 0x98) - (iVar3 + -0x14);
          iVar1 = genlmsg_unicast_constprop_3(iVar2,param_2[1]);
          return iVar1;
        }
        printk(DAT_00019c44);
      }
      kfree_skb(iVar2);
    }
  }
  return iVar1;
}



/* ===== ssv6xxx_send_si_cmd @ 00019c48 size=246 ===== */

undefined4 ssv6xxx_send_si_cmd(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  void *__s;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *__s_00;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = param_1;
  iVar2 = ssv6xxx_driver_attach(DAT_00019d40);
  __s = DAT_00019d50;
  if (iVar2 == 0) {
    printk(DAT_00019d44);
  }
  else {
    puVar6 = *(undefined4 **)(iVar2 + 0x210);
    if (param_1 - 1U < 2) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
    *(undefined4 *)((int)DAT_00019d50 + 0x68) = uVar4;
    memset(__s,0,0x68);
    iVar7 = puVar6[0x3d6];
    iVar5 = iVar7 * 0xc + 0x18;
    iVar2 = ssv_skb_alloc(*puVar6,iVar5);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x50) = iVar5;
      *(int *)(iVar2 + 0x54) = iVar5;
      __s_00 = *(undefined2 **)(iVar2 + 0xa4);
      memset(__s_00,0,0x14);
      *(undefined1 *)(__s_00 + 1) = 5;
      *(undefined1 *)((int)__s_00 + 3) = 6;
      uVar4 = DAT_00019d4c;
      uVar1 = *(undefined2 *)(iVar2 + 0x54);
      *__s_00 = uVar1;
      printk(uVar4,param_1,puVar6[0x3d6],uVar1,iVar9,param_2,param_3,param_4);
      *(int *)(__s_00 + 8) = param_1;
      uVar4 = DAT_00019d54;
      *(undefined4 *)(__s_00 + 10) = puVar6[0x3d6];
      memcpy(__s_00 + 0xc,(void *)puVar6[0x3d5],iVar7 * 0xc);
      for (uVar8 = 0; uVar8 < (uint)puVar6[0x3d6]; uVar8 = uVar8 + 1) {
        puVar3 = (undefined4 *)(__s_00 + 0xc + uVar8 * 6);
        printk(uVar4,*puVar3,puVar3[1],puVar3[2]);
      }
                    /* WARNING: Could not recover jumptable at 0x00019d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(puVar6[4] + 0x6c))(puVar6[5],iVar2);
      return uVar4;
    }
    printk(DAT_00019d48);
    *(undefined4 *)((int)__s + 0x68) = 0;
  }
  return 0xffffffff;
}



/* ===== set_si_status @ 00019d58 size=6 ===== */

void set_si_status(undefined4 param_1)

{
  *(undefined4 *)(DAT_00019d60 + 0x68) = param_1;
  return;
}



/* ===== get_si_status @ 00019d64 size=30 ===== */

void get_si_status(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00019d88;
  iVar1 = DAT_00019d84;
  strcpy(param_1,(char *)(DAT_00019d88 + *(int *)(DAT_00019d84 + 0x68) * 0x10));
  strlen((char *)(iVar2 + *(int *)(iVar1 + 0x68) * 0x10));
  return;
}



/* ===== get_si_ssid @ 00019d8c size=20 ===== */

void get_si_ssid(char *param_1)

{
  char *__s;
  
  __s = DAT_00019da0;
  strcpy(param_1,DAT_00019da0);
  strlen(__s);
  return;
}



/* ===== get_si_pass @ 00019da4 size=20 ===== */

void get_si_pass(char *param_1)

{
  char *__s;
  
  __s = DAT_00019db8;
  strcpy(param_1,DAT_00019db8);
  strlen(__s);
  return;
}



/* ===== ssv6xxx_get_tkip_mmic_err @ 00019dbc size=4 ===== */

undefined4 ssv6xxx_get_tkip_mmic_err(void)

{
  return 0;
}



/* ===== ssv6xxx_set_on3_enable @ 00019dc0 size=32 ===== */

void ssv6xxx_set_on3_enable(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_00019de4,DAT_00019de0,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_read_wifi_halt_status @ 00019de8 size=32 ===== */

void ssv6xxx_read_wifi_halt_status(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_00019e0c,DAT_00019e08,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_read_rxid_map @ 00019e10 size=24 ===== */

void ssv6xxx_read_rxid_map(int *param_1)

{
  undefined4 uStack00000000;
  
  uStack00000000 = DAT_00019e28;
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_00019e2c);
  return;
}



/* ===== ssv6xxx_read_txid_map @ 00019e30 size=24 ===== */

void ssv6xxx_read_txid_map(int *param_1)

{
  undefined4 uStack00000000;
  
  uStack00000000 = DAT_00019e48;
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_00019e4c);
  return;
}



/* ===== ssv6xxx_read_allid_map @ 00019e50 size=24 ===== */

void ssv6xxx_read_allid_map(int *param_1)

{
  undefined4 uStack00000000;
  
  uStack00000000 = DAT_00019e68;
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_00019e6c);
  return;
}



/* ===== ssv6xxx_update_mac80211_chan_info @ 00019e70 size=30 ===== */

void ssv6xxx_update_mac80211_chan_info(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_00019e94,DAT_00019e90,param_2,
           param_3);
  return;
}



/* ===== ssv6xxx_rc_mac80211_tx_rate_idx @ 00019e98 size=30 ===== */

void ssv6xxx_rc_mac80211_tx_rate_idx(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_00019ebc,DAT_00019eb8,param_2,
           param_3);
  return;
}



/* ===== ssv6xxx_enable_sram @ 00019ec0 size=32 ===== */

void ssv6xxx_enable_sram(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_00019ee4,DAT_00019ee0,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_get_sram_mode @ 00019ee8 size=34 ===== */

undefined4 ssv6xxx_get_sram_mode(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_00019f10,DAT_00019f0c,
           param_2,param_3);
  return 0;
}



/* ===== ssv6xxx_ps_hold_on3 @ 00019f14 size=30 ===== */

void ssv6xxx_ps_hold_on3(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_00019f38,DAT_00019f34,param_2,
           param_3);
  return;
}



/* ===== ssv6xxx_pmu_awake @ 00019f3c size=30 ===== */

void ssv6xxx_pmu_awake(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_00019f60,DAT_00019f5c,param_2,
           param_3);
  return;
}



/* ===== ssv6xxx_ps_restore_rx_flow @ 00019f64 size=30 ===== */

void ssv6xxx_ps_restore_rx_flow(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_00019f88,DAT_00019f84,param_2,
           param_3);
  return;
}



/* ===== ssv6xxx_ps_save_reset_rx_flow @ 00019f8c size=30 ===== */

void ssv6xxx_ps_save_reset_rx_flow(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_00019fb0,DAT_00019fac,param_2,
           param_3);
  return;
}



/* ===== ssv6xxx_restore_trap_reason @ 00019fb4 size=30 ===== */

void ssv6xxx_restore_trap_reason(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_00019fd8,DAT_00019fd4,param_2,
           param_3);
  return;
}



/* ===== ssv6xxx_save_clear_trap_reason @ 00019fdc size=30 ===== */

void ssv6xxx_save_clear_trap_reason(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_0001a000,DAT_00019ffc,param_2,
           param_3);
  return;
}



/* ===== ssv6xxx_put_mic_space_for_hw_ccmp_encrypt @ 0001a004 size=32 ===== */

undefined4
ssv6xxx_put_mic_space_for_hw_ccmp_encrypt(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_0001a028,DAT_0001a024,param_2,
           param_3);
  return 0;
}



/* ===== ssv6xxx_pll_chk @ 0001a02c size=32 ===== */

void ssv6xxx_pll_chk(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a050,DAT_0001a04c,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_detach_usb_hci @ 0001a054 size=32 ===== */

void ssv6xxx_detach_usb_hci(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a078,DAT_0001a074,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_wait_usb_rom_ready @ 0001a07c size=32 ===== */

void ssv6xxx_wait_usb_rom_ready(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a0a0,DAT_0001a09c,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_set_crystal_clk @ 0001a0a4 size=32 ===== */

void ssv6xxx_set_crystal_clk(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a0c8,DAT_0001a0c4,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_reset_hw_mac @ 0001a0cc size=36 ===== */

undefined4 ssv6xxx_reset_hw_mac(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a0f4,DAT_0001a0f0,
           param_2,param_3);
  return 0xffffffff;
}



/* ===== ssv6xxx_init_hci_rx_aggr @ 0001a0f8 size=36 ===== */

undefined4 ssv6xxx_init_hci_rx_aggr(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a120,DAT_0001a11c,
           param_2,param_3);
  return 0xffffffff;
}



/* ===== ssv6xxx_update_rf_table @ 0001a124 size=32 ===== */

void ssv6xxx_update_rf_table(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a148,DAT_0001a144,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_read_efuse @ 0001a14c size=34 ===== */

undefined4 ssv6xxx_read_efuse(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a174,DAT_0001a170,
           param_2,param_3);
  return 1;
}



/* ===== ssv6xxx_flash_read_all_map @ 0001a178 size=32 ===== */

void ssv6xxx_flash_read_all_map(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a19c,DAT_0001a198,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_init_gpio_cfg @ 0001a1a0 size=32 ===== */

void ssv6xxx_init_gpio_cfg(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a1c4,DAT_0001a1c0,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_cmd_hwq_limit @ 0001a1c8 size=32 ===== */

void ssv6xxx_cmd_hwq_limit(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a1ec,DAT_0001a1e8,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_cmd_efuse @ 0001a1f0 size=32 ===== */

void ssv6xxx_cmd_efuse(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a214,DAT_0001a210,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_cmd_rfble @ 0001a218 size=32 ===== */

void ssv6xxx_cmd_rfble(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a23c,DAT_0001a238,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_cmd_rf @ 0001a240 size=32 ===== */

void ssv6xxx_cmd_rf(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a264,DAT_0001a260,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_cmd_txgen @ 0001a268 size=32 ===== */

void ssv6xxx_cmd_txgen(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a28c,DAT_0001a288,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_cmd_hwinfo @ 0001a290 size=32 ===== */

void ssv6xxx_cmd_hwinfo(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a2b4,DAT_0001a2b0,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_set_sifs @ 0001a2b8 size=32 ===== */

void ssv6xxx_set_sifs(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a2dc,DAT_0001a2d8,
           param_2,param_3);
  return;
}



/* ===== ssv6xxx_cmd_rc @ 0001a2e0 size=32 ===== */

void ssv6xxx_cmd_rc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a304,DAT_0001a300,
           param_2,param_3);
  return;
}



/* ===== _ssv6xxx_load_firmware @ 0001a308 size=906 ===== */

void _ssv6xxx_load_firmware(int *param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  void *__s;
  bool bVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  size_t __n;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int local_74;
  int local_70;
  uint local_68;
  int local_60;
  int local_5c;
  uint local_4c;
  int local_48;
  byte abStack_44 [24];
  int local_2c;
  
  local_2c = *DAT_0001a578;
  iVar12 = *param_1;
  (**(code **)(*(int *)(iVar12 + 0x210) + 0x238))(iVar12);
  (*(code *)param_1[0xcf])(param_1);
  piVar5 = DAT_0001a580;
  if ((param_3 != (int *)0x0) &&
     ((piVar5 = (int *)filp_open(param_2,0), (int *)0xfffff000 < piVar5 || (piVar5 == (int *)0x0))))
  {
    iVar13 = -1;
    dbgprint(iVar12 + 0x9c0,*(undefined4 *)(iVar12 + 0x9bc),0x800,DAT_0001a57c,param_2);
    goto LAB_0001a362;
  }
  local_48 = 0;
  memset(abStack_44,0,0x18);
  if (param_3 == (int *)0x0) {
    local_48 = *piVar5;
    __n = local_48 << 3;
    memcpy(abStack_44,piVar5 + 1,__n);
LAB_0001a3e8:
    pbVar9 = abStack_44;
    for (piVar6 = param_1; piVar6 != param_1 + local_48 * 2; piVar6 = piVar6 + 2) {
      bVar1 = pbVar9[5];
      bVar2 = pbVar9[6];
      bVar3 = pbVar9[4];
      bVar4 = pbVar9[7];
      piVar6[0xd0] = (uint)pbVar9[2] << 0x10 | (uint)pbVar9[1] << 8 | (uint)*pbVar9 |
                     (uint)pbVar9[3] << 0x18;
      piVar6[0xd1] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | (uint)bVar3 | (uint)bVar4 << 0x18;
      pbVar9 = pbVar9 + 8;
    }
    uVar8 = DAT_0001a584;
    if (((int)(__n + 4) < 0) ||
       (__s = (void *)kmem_cache_alloc(*(undefined4 *)(DAT_0001a588 + 0x2c),0xdc0),
       uVar8 = DAT_0001a58c, __s == (void *)0x0)) goto LAB_0001a3b2;
    iVar13 = (*(code *)param_1[0x83])(param_1);
    if (iVar13 != -1) {
      local_74 = 0;
      local_70 = 0;
      uVar16 = DAT_0001a598;
      piVar6 = param_1;
      do {
        iVar13 = __n + 4;
        if (local_70 != 0) {
          iVar13 = piVar6[0xcf];
        }
        local_74 = local_74 + iVar13;
        if (param_3 == (int *)0x0) {
          piVar5 = (int *)(local_74 + (int)DAT_0001a580);
        }
        else {
          piVar5[0xe] = local_74;
          piVar5[0xf] = local_74 >> 0x1f;
        }
        local_68 = piVar6[0xd1];
        local_60 = piVar6[0xd0];
        dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x800,DAT_0001a590);
        local_5c = 0;
        piVar11 = piVar5;
        while (local_68 != 0) {
          memset(__s,0xa5,0x400);
          uVar10 = local_68;
          if (0x3ff < local_68) {
            uVar10 = 0x400;
          }
          if (param_3 == (int *)0x0) {
            piVar14 = piVar11 + 0x100;
            memcpy(__s,piVar11,uVar10);
          }
          else if ((piVar11 == (int *)0x0) ||
                  (iVar13 = kernel_read(piVar11,__s,uVar10,piVar11 + 0xe), piVar14 = piVar11,
                  iVar13 == 0)) break;
          local_68 = local_68 - uVar10;
          iVar13 = (**(code **)(param_1[4] + 0x2c))(param_1[5],local_60,__s,0x400);
          if (iVar13 != 0) {
            bVar7 = true;
            goto LAB_0001a4ec;
          }
          if (local_70 != 1) {
            piVar11 = (int *)((int)__s + -4);
            while (piVar11 != (int *)((int)__s + 0x3fc)) {
              piVar11 = piVar11 + 1;
              local_5c = local_5c + *piVar11;
            }
          }
          local_60 = local_60 + 0x400;
          piVar11 = piVar14;
        }
        bVar7 = false;
LAB_0001a4ec:
        uVar16 = uVar16 + local_5c;
        if (bVar7) {
          printk(DAT_0001a594,param_2);
          goto LAB_0001a4fc;
        }
        piVar6 = piVar6 + 2;
        local_70 = local_70 + 1;
      } while (local_70 != 3);
      uVar10 = (uint)param_1[0xd1] >> 10;
      uVar16 = ((uVar16 >> 0x10) + (uVar16 >> 0x18) + uVar16 + (uVar16 >> 8)) * 0x10000;
      uVar17 = uVar16 & 0xff0000;
      if ((param_1[0xd1] & 0x3ffU) != 0) {
        uVar10 = uVar10 + 1;
      }
      uVar15 = (uint)param_1[0xd5] >> 10;
      if ((param_1[0xd5] & 0x3ffU) != 0) {
        uVar15 = uVar15 + 1;
      }
      uVar15 = uVar15 | uVar10 << 0x10;
      iVar18 = iVar12 + 0x9c0;
      (*(code *)param_1[0x84])(param_1,uVar15);
      (*(code *)param_1[0x85])(param_1,&local_48);
      dbgprint(iVar18,*(undefined4 *)(iVar12 + 0x9bc),0x800,DAT_0001a6b8,uVar15,local_48);
      printk(DAT_0001a6b8,uVar15,local_48);
      (*(code *)param_1[0x82])(param_1);
      dbgprint(iVar18,*(undefined4 *)(iVar12 + 0x9bc),0x800,DAT_0001a6bc,param_2);
      msleep(0x32);
      (*(code *)param_1[0x85])(param_1,&local_4c);
      local_4c = local_4c & 0xff0000;
      if (local_4c == uVar17) {
        (*(code *)param_1[0x84])(param_1,~uVar16 & 0xff0000);
        iVar13 = 0;
        dbgprint(iVar18,*(undefined4 *)(iVar12 + 0x9bc),0x800,DAT_0001a6c0,local_4c,uVar17);
      }
      else {
        dbgprint(iVar18,*(undefined4 *)(iVar12 + 0x9bc),0x800,DAT_0001a6c4,local_4c,uVar17);
        printk(DAT_0001a6c4,local_4c,uVar17);
LAB_0001a4fc:
        iVar13 = -1;
      }
    }
    kfree(__s);
    piVar6 = piVar5;
    if (param_3 == (int *)0x0) goto LAB_0001a362;
  }
  else {
    piVar6 = piVar5 + 0xe;
    *piVar6 = 0;
    piVar5[0xf] = 0;
    iVar13 = kernel_read(piVar5,&local_48,4,piVar6);
    uVar8 = DAT_0001a584;
    if (iVar13 != 0) {
      __n = local_48 << 3;
      iVar13 = kernel_read(piVar5,abStack_44,__n,piVar6);
      uVar8 = DAT_0001a584;
      if (iVar13 != 0) goto LAB_0001a3e8;
    }
LAB_0001a3b2:
    iVar13 = -1;
    dbgprint(iVar12 + 0x9c0,*(undefined4 *)(iVar12 + 0x9bc),0x800,uVar8);
    piVar6 = param_3;
  }
  if (piVar6 != (int *)0x0) {
    filp_close(piVar5,0);
  }
LAB_0001a362:
  if (local_2c == *DAT_0001a578) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar13);
}



/* ===== ssv6xxx_load_fw @ 0001a6c8 size=52 ===== */

int ssv6xxx_load_fw(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  (**(code **)(param_1 + 0x218))();
  iVar1 = _ssv6xxx_load_firmware(param_1,param_2,param_3 != 0);
  msleep(0x32);
  if (iVar1 == 0) {
    (**(code **)(param_1 + 0x21c))(param_1);
  }
  return iVar1;
}



/* ===== ssv6xxx_init_hal @ 0001a6fc size=438 ===== */

undefined4 ssv6xxx_init_hal(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *__src;
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *__haystack;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x3c);
  __src = (void *)kmem_cache_alloc(*(undefined4 *)(DAT_0001a8b4 + 0x28),0xdc0,param_3,DAT_0001a8b4,
                                   param_4);
  pcVar1 = DAT_0001a8c4;
  if (__src == (void *)0x0) {
    uVar6 = 0xfffffff4;
    printk(DAT_0001a8bc,DAT_0001a8b8);
  }
  else {
    __haystack = (char *)(iVar5 + 5);
    *(undefined4 *)((int)__src + 0x298) = DAT_0001a8c0;
    *(undefined4 *)((int)__src + 0xf4) = DAT_0001a8c8;
    *(undefined4 *)((int)__src + 0x178) = DAT_0001a8cc;
    *(undefined4 *)((int)__src + 0x228) = DAT_0001a8d0;
    *(undefined4 *)((int)__src + 0x17c) = DAT_0001a8d4;
    *(undefined4 *)((int)__src + 0x180) = DAT_0001a8d8;
    *(undefined4 *)((int)__src + 0x184) = DAT_0001a8dc;
    *(undefined4 *)((int)__src + 0x188) = DAT_0001a8e0;
    *(undefined4 *)((int)__src + 0x18c) = DAT_0001a8e4;
    *(undefined4 *)((int)__src + 0x4c) = DAT_0001a8e8;
    *(undefined4 *)((int)__src + 0x1e0) = DAT_0001a8ec;
    *(undefined4 *)((int)__src + 0x11c) = DAT_0001a8f0;
    *(undefined4 *)((int)__src + 0x124) = DAT_0001a8f4;
    *(undefined4 *)((int)__src + 0x2cc) = DAT_0001a8f8;
    *(undefined4 *)((int)__src + 0x1e4) = DAT_0001a8fc;
    *(undefined4 *)((int)__src + 0x1e8) = DAT_0001a900;
    *(undefined4 *)((int)__src + 0x1ec) = DAT_0001a904;
    *(undefined4 *)((int)__src + 0x1f0) = DAT_0001a908;
    *(undefined4 *)((int)__src + 500) = DAT_0001a90c;
    *(undefined4 *)((int)__src + 0x48) = DAT_0001a910;
    *(undefined4 *)((int)__src + 0xb0) = DAT_0001a914;
    *(undefined4 *)((int)__src + 0xb8) = DAT_0001a918;
    *(undefined4 *)((int)__src + 0xbc) = DAT_0001a91c;
    *(undefined4 *)((int)__src + 0xc0) = DAT_0001a920;
    *(undefined4 *)((int)__src + 0xc4) = DAT_0001a924;
    *(undefined4 *)((int)__src + 200) = DAT_0001a928;
    *(undefined4 *)((int)__src + 0xcc) = DAT_0001a92c;
    *(undefined4 *)((int)__src + 0x1c0) = DAT_0001a930;
    *(undefined4 *)((int)__src + 0x2d4) = DAT_0001a934;
    *(undefined4 *)((int)__src + 0x290) = DAT_0001a938;
    *(undefined4 *)((int)__src + 0x288) = DAT_0001a93c;
    *(undefined4 *)((int)__src + 0x15c) = DAT_0001a940;
    *(undefined4 *)((int)__src + 0x160) = DAT_0001a944;
    *(undefined4 *)((int)__src + 0x164) = DAT_0001a948;
    *(undefined4 *)((int)__src + 0x168) = DAT_0001a94c;
    *(undefined4 *)((int)__src + 0x1d8) = DAT_0001a950;
    pcVar1 = strstr(__haystack,pcVar1);
    iVar5 = *(int *)(param_1 + 8);
    if ((pcVar1 == (char *)0x0) && (pcVar1 = strstr(__haystack,DAT_0001a954), pcVar1 == (char *)0x0)
       ) {
      uVar6 = 0xffffffea;
      printk(DAT_0001a958,*(undefined4 *)(iVar5 + 0x1c4));
    }
    else {
      printk(DAT_0001a95c,*(undefined4 *)(iVar5 + 0x1c4));
      printk(DAT_0001a960);
      ssv_attach_ssv6020(param_1,__src);
      piVar2 = (int *)(**(code **)((int)__src + 0x10))();
      if (piVar2 == (int *)0x0) {
        uVar6 = 0xfffffff4;
      }
      else {
        memcpy(piVar2 + 0x1a,__src,0x2d8);
        *(int **)(param_1 + 0x210) = piVar2;
        *piVar2 = param_1;
        iVar5 = DAT_0001a964;
        iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x3c);
        piVar2[1] = iVar4;
        piVar2[2] = *(int *)(param_1 + 4);
        iVar3 = *(int *)(iVar4 + 0x2c);
        piVar2[8] = iVar5;
        iVar5 = DAT_0001a968;
        piVar2[3] = iVar3;
        iVar3 = DAT_0001a96c;
        piVar2[9] = iVar5;
        uVar6 = DAT_0001a970;
        piVar2[0xf] = iVar3;
        iVar5 = DAT_0001a974;
        piVar2[0x10] = DAT_0001a974;
        *(undefined4 *)(iVar4 + 0x34) = uVar6;
        *(int *)(piVar2[1] + 0x38) = iVar5;
        uVar6 = DAT_0001a978;
        *(int *)(piVar2[1] + 0x3c) = param_1;
        *(undefined4 *)(piVar2[1] + 0x40) = uVar6;
        *(undefined4 *)(piVar2[1] + 0x44) = DAT_0001a97c;
        *(undefined4 *)(piVar2[1] + 0x48) = DAT_0001a980;
        uVar6 = DAT_0001a984;
        *(int *)(piVar2[1] + 0x4c) = param_1;
        *(undefined4 *)(piVar2[1] + 0x50) = uVar6;
        *(int *)(piVar2[1] + 0x54) = param_1;
        piVar2[6] = param_1;
        piVar2[7] = (int)piVar2;
        uVar6 = 0;
      }
    }
    kfree(__src);
  }
  return uVar6;
}



/* ===== ssv6xxx_hwif_property @ 0001a988 size=16 ===== */

undefined4 ssv6xxx_hwif_property(undefined4 *param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(((undefined4 *)*param_1)[1] + 0x70);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001a992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1);
    return uVar1;
  }
  return 0;
}



/* ===== ssv6020_use_hw_encrypt @ 0001a998 size=4 ===== */

undefined4 ssv6020_use_hw_encrypt(void)

{
  return 1;
}



/* ===== ssv6020_get_wsid @ 0001a99c size=136 ===== */

int ssv6020_get_wsid(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  do {
    iVar3 = iVar5 * 0x18;
    uVar2 = *(ushort *)(param_1 + 0x79a + iVar3);
    if ((uVar2 & 1) == 0) {
      uVar1 = *(undefined2 *)(param_3 + 0x1a);
      iVar6 = param_1 + iVar3;
      *(int *)(iVar6 + 0x7a0) = param_3;
      *(undefined2 *)(iVar6 + 0x798) = uVar1;
      *(int *)(iVar6 + 0x7a4) = param_2;
      *(undefined2 *)(iVar6 + 0x79a) = 1;
      *(int *)(param_3 + 0x108) = iVar5;
      *(int *)(param_3 + 0x10c) = iVar3 + 0x798 + param_1;
      *(uint *)(param_3 + 0x138) = uVar2 & 1;
      if (*(int *)(param_2 + 0x2c8) - 1U < 2) {
        *(undefined1 *)(param_3 + 0x138) = *(undefined1 *)(param_2 + 0x2d1);
        *(undefined1 *)(param_3 + 0x13a) = *(undefined1 *)(param_2 + 0x2d3);
        *(undefined1 *)(param_3 + 0x139) = *(undefined1 *)(param_2 + 0x2d2);
        *(undefined1 *)(param_3 + 0x13b) = *(undefined1 *)(param_2 + 0x2d4);
      }
      piVar4 = *(int **)(param_2 + 0x2c0);
      *(int *)(param_2 + 0x2c0) = param_3 + 0x110;
      *(int *)(param_3 + 0x110) = param_2 + 700;
      *(int **)(param_3 + 0x114) = piVar4;
      *piVar4 = param_3 + 0x110;
      return iVar5;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 9);
  return 9;
}



/* ===== ssv6020_wep_use_hw_cipher @ 0001aa24 size=16 ===== */

bool ssv6020_wep_use_hw_cipher(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x210) + 0x7cc) == 0;
}



/* ===== ssv6020_pairwise_wpa_use_hw_cipher @ 0001aa34 size=16 ===== */

bool ssv6020_pairwise_wpa_use_hw_cipher(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x210) + 0x7cc) == 0;
}



/* ===== ssv6020_group_wpa_use_hw_cipher @ 0001aa44 size=16 ===== */

bool ssv6020_group_wpa_use_hw_cipher(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x210) + 0x7cc) == 0;
}



/* ===== ssv6020_use_turismo_hw_encrypt @ 0001aa54 size=26 ===== */

bool ssv6020_use_turismo_hw_encrypt(int param_1,int param_2)

{
  bool bVar1;
  
  if (*(int *)(param_2 + 0x10) == 4) {
    bVar1 = *(int *)(*(int *)(param_1 + 0x210) + 0x7cc) == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* ===== ssv6020_need_sw_cipher @ 0001aa6e size=4 ===== */

undefined4 ssv6020_need_sw_cipher(void)

{
  return 0;
}



/* ===== ssv6020_ampdu_rx_start @ 0001aa72 size=122 ===== */

undefined4 ssv6020_ampdu_rx_start(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = 0;
  iVar1 = iVar2;
  while ((-1 < (int)((uint)*(ushort *)(iVar1 + 0x79a) << 0x1f) ||
         (*(int *)(iVar1 + 0x7a0) != param_3))) {
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0x18;
    if (iVar3 == 9) {
      return 0xfffffff0;
    }
  }
  if (*(uint *)(*(int *)(iVar2 + 0x210) + 0x3a0) < *(uint *)(iVar2 + 0x940)) {
    return 0xfffffff0;
  }
  if ((*(ushort *)(iVar1 + 0x79a) & 0x10) == 0) {
    printk(DAT_0001aaec,*(undefined1 *)(param_3 + 0x14),*(undefined1 *)(param_3 + 0x15),
           *(undefined1 *)(param_3 + 0x16),*(undefined1 *)(param_3 + 0x17),
           *(undefined1 *)(param_3 + 0x18),*(undefined1 *)(param_3 + 0x19),param_4);
    *(int *)(iVar2 + 0x940) = *(int *)(iVar2 + 0x940) + 1;
    iVar2 = iVar3 * 0x18 + iVar2;
    *(ushort *)(iVar2 + 0x79a) = *(ushort *)(iVar2 + 0x79a) | 0x10;
  }
  return 0;
}



/* ===== ssv6020_adj_config @ 0001aaf0 size=116 ===== */

void ssv6020_adj_config(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) & 0xfffffff7;
  uVar1 = ssv6xxx_hwif_property(*(undefined4 *)(param_1 + 0x14));
  uVar2 = extraout_r2;
  if ((*(char *)(param_1 + 0x7d4) != '\0') && ((uVar1 & 2) == 0)) {
    printk(DAT_0001ab68,DAT_0001ab64,extraout_r2,*(char *)(param_1 + 0x7d4),param_4);
    *(undefined1 *)(param_1 + 0x7d4) = 0;
    uVar2 = extraout_r2_00;
  }
  iVar3 = *(int *)(param_1 + 0x7a4) << 0x11;
  if (iVar3 < 0) {
    printk(DAT_0001ab6c,DAT_0001ab64,uVar2,iVar3,param_4);
    *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) & 0xffffbfff;
    uVar2 = extraout_r2_01;
  }
  if (*(int *)(param_1 + 0xd44) == 0) {
    printk(DAT_0001ab70,DAT_0001ab64,uVar2,0,param_4);
    *(undefined4 *)(param_1 + 0xd44) = 100;
    uVar2 = extraout_r2_02;
  }
  if (*(int *)(param_1 + 0xd48) == 0) {
    printk(DAT_0001ab74,DAT_0001ab64,uVar2,0,param_4);
    *(undefined4 *)(param_1 + 0xd48) = 0x32;
  }
  return;
}



/* ===== ssv6020_cmd_efuse @ 0001ab78 size=2654 ===== */

void ssv6020_cmd_efuse(int *param_1,int param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 local_30;
  undefined2 local_2c;
  
  pcVar9 = *(char **)(param_3 + 4);
  iVar7 = *param_1;
  iVar6 = iVar7 + 0x9c0;
  iVar1 = strcmp(pcVar9,DAT_0001aea8);
  if (iVar1 == 0) {
    uVar3 = DAT_0001b67c;
    if ((param_2 == 3) &&
       (sVar2 = strlen(*(char **)(param_3 + 8)), uVar3 = DAT_0001aeac, sVar2 < 0x21)) {
      iVar1 = ssv_skb_alloc(iVar7,0x44);
      if (iVar1 == 0) {
        return;
      }
      skb_put(iVar1,0x44);
      puVar8 = *(undefined1 **)(iVar1 + 0xa4);
      memset(puVar8 + 2,0,0xe);
      puVar8[5] = 0;
      puVar8[2] = puVar8[2] & 0xf8 | 5;
      puVar8[6] = 0;
      puVar8[3] = 0x14;
      puVar8[7] = 0;
      puVar8[4] = 10;
      puVar8[1] = 0;
      *puVar8 = 0x44;
      memset(puVar8 + 0x10,0,0x34);
      sVar2 = strlen(*(char **)(param_3 + 8));
      puVar8[0x30] = (char)sVar2;
      puVar8 = puVar8 + 0x10;
      for (iVar10 = 0; iVar10 < (int)(sVar2 & 0xff); iVar10 = iVar10 + 1) {
        *puVar8 = *(undefined1 *)(*(int *)(param_3 + 8) + iVar10);
        puVar8 = puVar8 + 1;
      }
      (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
      pcVar9 = *(char **)(param_3 + 8);
      sVar2 = strlen(pcVar9);
      uVar3 = DAT_0001aeb0;
LAB_0001ac36:
      snprintf_res(iVar6,uVar3,pcVar9,sVar2);
      return;
    }
  }
  else {
    iVar1 = strcmp(pcVar9,DAT_0001aeb4);
    if (iVar1 == 0) {
      uVar3 = DAT_0001b67c;
      if (param_2 == 2) {
        iVar1 = ssv_skb_alloc(iVar7,0x44);
        if (iVar1 == 0) {
          return;
        }
        skb_put(iVar1,0x44);
        puVar8 = *(undefined1 **)(iVar1 + 0xa4);
        *(undefined4 *)(puVar8 + 2) = 0;
        *(undefined4 *)(puVar8 + 6) = 0;
        *(undefined2 *)(puVar8 + 10) = 0;
        puVar8[2] = puVar8[2] & 0xf8 | 5;
        puVar8[4] = 9;
        puVar8[3] = 0x14;
        puVar8[0xc] = 9;
        puVar8[0xe] = 0x14;
        puVar8[5] = 0;
        *puVar8 = 0x44;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[0xd] = 0;
        puVar8[0xf] = 0;
        puVar8[1] = 0;
        memset(puVar8 + 0x10,0,0x34);
        (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                  (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
        sVar2 = (size_t)*(byte *)(iVar7 + 0x1488);
        pcVar9 = (char *)(iVar7 + 0x1448);
        uVar3 = DAT_0001aeb8;
        goto LAB_0001ac36;
      }
    }
    else {
      iVar1 = strcmp(pcVar9,DAT_0001aebc);
      if (iVar1 == 0) {
        uVar3 = DAT_0001b67c;
        if (param_2 == 2) {
          iVar1 = ssv_skb_alloc(iVar7,0x44);
          if (iVar1 == 0) {
            return;
          }
          skb_put(iVar1,0x44);
          puVar8 = *(undefined1 **)(iVar1 + 0xa4);
          *(undefined4 *)(puVar8 + 2) = 0;
          *(undefined4 *)(puVar8 + 6) = 0;
          *(undefined2 *)(puVar8 + 10) = 0;
          puVar8[2] = puVar8[2] & 0xf8 | 5;
          puVar8[4] = 0;
          puVar8[3] = 0x14;
          puVar8[0xe] = 0x14;
          puVar8[5] = 0;
          *puVar8 = 0x44;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[0xc] = 0;
          puVar8[0xd] = 0;
          puVar8[0xf] = 0;
          puVar8[1] = 0;
          memset(puVar8 + 0x10,0,0x34);
          (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
          uVar5 = *(uint *)(iVar7 + 0x148c);
          uVar3 = DAT_0001aec0;
          goto LAB_0001ad88;
        }
      }
      else {
        iVar1 = strcmp(pcVar9,DAT_0001aec4);
        if (iVar1 == 0) {
          uVar3 = DAT_0001b67c;
          if (param_2 == 2) {
            iVar1 = ssv_skb_alloc(iVar7,0x44);
            if (iVar1 == 0) {
              return;
            }
            skb_put(iVar1,0x44);
            puVar8 = *(undefined1 **)(iVar1 + 0xa4);
            *(undefined4 *)(puVar8 + 2) = 0;
            *(undefined4 *)(puVar8 + 6) = 0;
            *(undefined2 *)(puVar8 + 10) = 0;
            puVar8[2] = puVar8[2] & 0xf8 | 5;
            puVar8[4] = 1;
            puVar8[3] = 0x14;
            puVar8[0xc] = 1;
            puVar8[0xe] = 0x14;
            puVar8[5] = 0;
            *puVar8 = 0x44;
            puVar8[6] = 0;
            puVar8[7] = 0;
            puVar8[0xd] = 0;
            puVar8[0xf] = 0;
            puVar8[1] = 0;
            memset(puVar8 + 0x10,0,0x34);
            (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                      (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
            local_2c._1_1_ = *(undefined1 *)(iVar7 + 0x1495);
            local_30._1_1_ = *(undefined1 *)(iVar7 + 0x1491);
            local_30._0_1_ = *(undefined1 *)(iVar7 + 0x1490);
            local_2c._0_1_ = *(undefined1 *)(iVar7 + 0x1494);
            uVar5 = (uint)*(byte *)(iVar7 + 0x1493);
            uVar4 = (uint)*(byte *)(iVar7 + 0x1492);
            uVar3 = DAT_0001aec8;
LAB_0001ae50:
            snprintf_res(iVar6,uVar3,(undefined1)local_30,local_30._1_1_,uVar4,uVar5,
                         (undefined1)local_2c,local_2c._1_1_);
            return;
          }
        }
        else {
          iVar1 = strcmp(pcVar9,DAT_0001aecc);
          if (iVar1 == 0) {
            uVar3 = DAT_0001b67c;
            if (((param_2 == 4) &&
                (sVar2 = strlen(*(char **)(param_3 + 8)), uVar3 = DAT_0001aed0, sVar2 < 0x21)) &&
               (iVar1 = sscanf(*(char **)(param_3 + 0xc),DAT_0001aed4,&local_30,(int)&local_30 + 1,
                               (int)&local_30 + 2,(int)&local_30 + 3,&local_2c,(int)&local_2c + 1),
               uVar3 = DAT_0001aed8, iVar1 == 6)) {
              iVar1 = ssv_skb_alloc(iVar7,0x44);
              if (iVar1 == 0) {
                return;
              }
              skb_put(iVar1,0x44);
              puVar8 = *(undefined1 **)(iVar1 + 0xa4);
              memset(puVar8 + 2,0,0xe);
              puVar8[5] = 0;
              puVar8[2] = puVar8[2] & 0xf8 | 5;
              puVar8[6] = 0;
              puVar8[3] = 0x14;
              puVar8[7] = 0;
              puVar8[4] = 2;
              puVar8[1] = 0;
              *puVar8 = 0x44;
              memset(puVar8 + 0x10,0,0x34);
              *(uint *)(puVar8 + 0x35) = local_30;
              *(undefined2 *)(puVar8 + 0x39) = local_2c;
              sVar2 = strlen(*(char **)(param_3 + 8));
              puVar8[0x30] = (char)sVar2;
              puVar8 = puVar8 + 0x10;
              for (iVar10 = 0; iVar10 < (int)(sVar2 & 0xff); iVar10 = iVar10 + 1) {
                *puVar8 = *(undefined1 *)(*(int *)(param_3 + 8) + iVar10);
                puVar8 = puVar8 + 1;
              }
              (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                        (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
              uVar5 = local_30 >> 0x18;
              uVar4 = local_30 >> 0x10 & 0xff;
              uVar3 = DAT_0001b254;
              goto LAB_0001ae50;
            }
          }
          else {
            iVar1 = strcmp(pcVar9,DAT_0001b258);
            if (iVar1 == 0) {
              uVar3 = DAT_0001b67c;
              if (param_2 == 2) {
                iVar1 = ssv_skb_alloc(iVar7,0x44);
                if (iVar1 == 0) {
                  return;
                }
                skb_put(iVar1,0x44);
                puVar8 = *(undefined1 **)(iVar1 + 0xa4);
                *(undefined4 *)(puVar8 + 2) = 0;
                *(undefined4 *)(puVar8 + 6) = 0;
                *(undefined2 *)(puVar8 + 10) = 0;
                puVar8[2] = puVar8[2] & 0xf8 | 5;
                puVar8[4] = 3;
                puVar8[3] = 0x14;
                puVar8[0xc] = 3;
                puVar8[0xe] = 0x14;
                puVar8[5] = 0;
                *puVar8 = 0x44;
                puVar8[6] = 0;
                puVar8[7] = 0;
                puVar8[0xd] = 0;
                puVar8[0xf] = 0;
                puVar8[1] = 0;
                memset(puVar8 + 0x10,0,0x34);
                (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                          (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
                uVar5 = (uint)*(byte *)(iVar7 + 0x1496);
                uVar3 = DAT_0001b25c;
                goto LAB_0001ad88;
              }
            }
            else {
              iVar1 = strcmp(pcVar9,DAT_0001b260);
              if (iVar1 == 0) {
                uVar3 = DAT_0001b67c;
                if (((param_2 == 5) &&
                    (sVar2 = strlen(*(char **)(param_3 + 8)), uVar3 = DAT_0001aed0, sVar2 < 0x21))
                   && ((uVar5 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),&local_30,0),
                       uVar3 = DAT_0001b264, uVar5 - 1 < 0xf &&
                       (iVar1 = simple_strtoul(*(undefined4 *)(param_3 + 0x10),&local_30,0),
                       uVar3 = DAT_0001b268, iVar1 - 1U < 0xf)))) {
                  iVar10 = ssv_skb_alloc(iVar7,0x44);
                  if (iVar10 == 0) {
                    return;
                  }
                  skb_put(iVar10,0x44);
                  puVar8 = *(undefined1 **)(iVar10 + 0xa4);
                  memset(puVar8 + 2,0,0xe);
                  puVar8[2] = 5;
                  puVar8[3] = 0x14;
                  puVar8[4] = 4;
                  *puVar8 = 0x44;
                  puVar8[5] = 0;
                  puVar8[6] = 0;
                  puVar8[7] = 0;
                  puVar8[1] = 0;
                  memset(puVar8 + 0x10,0,0x34);
                  puVar8[0x3d] = (char)uVar5;
                  puVar8[0x3c] = (char)iVar1;
                  sVar2 = strlen(*(char **)(param_3 + 8));
                  puVar8[0x30] = (char)sVar2;
                  puVar8 = puVar8 + 0x10;
                  for (iVar1 = 0; iVar1 < (int)(sVar2 & 0xff); iVar1 = iVar1 + 1) {
                    *puVar8 = *(undefined1 *)(*(int *)(param_3 + 8) + iVar1);
                    puVar8 = puVar8 + 1;
                  }
                  (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                            (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar10);
                  uVar3 = DAT_0001b26c;
                  goto LAB_0001ad88;
                }
              }
              else {
                iVar1 = strcmp(pcVar9,DAT_0001b270);
                if (iVar1 == 0) {
                  uVar3 = DAT_0001b67c;
                  if (param_2 == 2) {
                    iVar1 = ssv_skb_alloc(iVar7,0x44);
                    if (iVar1 == 0) {
                      return;
                    }
                    skb_put(iVar1,0x44);
                    puVar8 = *(undefined1 **)(iVar1 + 0xa4);
                    *(undefined4 *)(puVar8 + 2) = 0;
                    *(undefined4 *)(puVar8 + 6) = 0;
                    *(undefined2 *)(puVar8 + 10) = 0;
                    puVar8[4] = 5;
                    puVar8[2] = puVar8[2] & 0xf8 | 5;
                    puVar8[5] = 0;
                    puVar8[3] = 0x14;
                    puVar8[6] = 0;
                    puVar8[7] = 0;
                    puVar8[0xc] = 5;
                    puVar8[0xd] = 0;
                    puVar8[0xe] = 0x14;
                    puVar8[0xf] = 0;
                    *puVar8 = 0x44;
                    puVar8[1] = 0;
                    memset(puVar8 + 0x10,0,0x34);
                    (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                              (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
                    uVar5 = (uint)*(byte *)(iVar7 + 0x1497);
                    uVar3 = DAT_0001b274;
                    goto LAB_0001ad88;
                  }
                }
                else {
                  iVar1 = strcmp(pcVar9,DAT_0001b278);
                  if (iVar1 == 0) {
                    uVar3 = DAT_0001b67c;
                    if (((param_2 == 4) &&
                        (sVar2 = strlen(*(char **)(param_3 + 8)), uVar3 = DAT_0001aed0, sVar2 < 0x21
                        )) && (uVar5 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),&local_30,0),
                              uVar3 = DAT_0001b27c, uVar5 < 0x100)) {
                      iVar1 = ssv_skb_alloc(iVar7,0x44);
                      if (iVar1 == 0) {
                        return;
                      }
                      skb_put(iVar1,0x44);
                      puVar8 = *(undefined1 **)(iVar1 + 0xa4);
                      memset(puVar8 + 2,0,0xe);
                      puVar8[5] = 0;
                      puVar8[2] = 5;
                      puVar8[6] = 0;
                      puVar8[3] = 0x14;
                      puVar8[7] = 0;
                      puVar8[4] = 6;
                      puVar8[1] = 0;
                      *puVar8 = 0x44;
                      memset(puVar8 + 0x10,0,0x34);
                      puVar8[0x3b] = (char)uVar5;
                      sVar2 = strlen(*(char **)(param_3 + 8));
                      puVar8[0x30] = (char)sVar2;
                      puVar8 = puVar8 + 0x10;
                      for (iVar10 = 0; iVar10 < (int)(sVar2 & 0xff); iVar10 = iVar10 + 1) {
                        *puVar8 = *(undefined1 *)(*(int *)(param_3 + 8) + iVar10);
                        puVar8 = puVar8 + 1;
                      }
                      (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                                (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
                      uVar3 = DAT_0001b280;
                      goto LAB_0001ad88;
                    }
                  }
                  else {
                    iVar1 = strcmp(pcVar9,DAT_0001b59c);
                    if (iVar1 == 0) {
                      uVar3 = DAT_0001b67c;
                      if (param_2 == 2) {
                        iVar1 = ssv_skb_alloc(iVar7,0x44);
                        if (iVar1 == 0) {
                          return;
                        }
                        skb_put(iVar1,0x44);
                        puVar8 = *(undefined1 **)(iVar1 + 0xa4);
                        *(undefined4 *)(puVar8 + 2) = 0;
                        *(undefined4 *)(puVar8 + 6) = 0;
                        *(undefined2 *)(puVar8 + 10) = 0;
                        puVar8[5] = 0;
                        puVar8[2] = puVar8[2] & 0xf8 | 5;
                        puVar8[4] = 7;
                        puVar8[3] = 0x14;
                        puVar8[6] = 0;
                        puVar8[7] = 0;
                        puVar8[0xc] = 7;
                        puVar8[0xd] = 0;
                        puVar8[0xe] = 0x14;
                        puVar8[0xf] = 0;
                        *puVar8 = 0x44;
                        puVar8[1] = 0;
                        memset(puVar8 + 0x10,0,0x34);
                        (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                                  (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
                        snprintf_res(iVar6,DAT_0001b5a0,*(undefined1 *)(iVar7 + 0x1498));
                        uVar5 = (uint)*(byte *)(iVar7 + 0x1499);
                        uVar3 = DAT_0001b5a4;
                        goto LAB_0001ad88;
                      }
                    }
                    else {
                      iVar1 = strcmp(pcVar9,DAT_0001b5a8);
                      if (iVar1 == 0) {
                        uVar3 = DAT_0001b67c;
                        if (((param_2 == 5) &&
                            (sVar2 = strlen(*(char **)(param_3 + 8)), uVar3 = DAT_0001aed0,
                            sVar2 < 0x21)) &&
                           (iVar1 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),&local_30,0),
                           uVar3 = DAT_0001b5ac, iVar1 - 1U < 0xf)) {
                          uVar5 = simple_strtoul(*(undefined4 *)(param_3 + 0x10),&local_30,0);
                          iVar10 = ssv_skb_alloc(iVar7,0x44);
                          if (iVar10 == 0) {
                            return;
                          }
                          skb_put(iVar10,0x44);
                          puVar8 = *(undefined1 **)(iVar10 + 0xa4);
                          memset(puVar8 + 2,0,0xe);
                          puVar8[5] = 0;
                          puVar8[2] = puVar8[2] & 0xf8 | 5;
                          puVar8[6] = 0;
                          puVar8[3] = 0x14;
                          puVar8[7] = 0;
                          puVar8[4] = 8;
                          puVar8[1] = 0;
                          *puVar8 = 0x44;
                          memset(puVar8 + 0x10,0,0x34);
                          puVar8[0x3e] = (char)iVar1;
                          puVar8[0x3f] = (char)uVar5;
                          sVar2 = strlen(*(char **)(param_3 + 8));
                          puVar8[0x30] = (char)sVar2;
                          puVar8 = puVar8 + 0x10;
                          for (iVar11 = 0; iVar11 < (int)(sVar2 & 0xff); iVar11 = iVar11 + 1) {
                            *puVar8 = *(undefined1 *)(*(int *)(param_3 + 8) + iVar11);
                            puVar8 = puVar8 + 1;
                          }
                          (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                                    (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar10);
                          snprintf_res(iVar6,DAT_0001b5b0,iVar1);
                          uVar3 = DAT_0001b5b4;
                          goto LAB_0001ad88;
                        }
                      }
                      else {
                        iVar1 = strcmp(pcVar9,DAT_0001b5b8);
                        if (iVar1 == 0) {
                          uVar3 = DAT_0001b67c;
                          if (param_2 == 3) {
                            uVar5 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_30,0);
                            if (uVar5 < 5) {
                              iVar1 = ssv_skb_alloc(iVar7,0x44);
                              if (iVar1 == 0) {
                                return;
                              }
                              skb_put(iVar1,0x44);
                              puVar8 = *(undefined1 **)(iVar1 + 0xa4);
                              *(undefined4 *)(puVar8 + 2) = 0;
                              *(undefined4 *)(puVar8 + 6) = 0;
                              *(undefined2 *)(puVar8 + 10) = 0;
                              puVar8[2] = puVar8[2] & 0xf8 | 5;
                              puVar8[4] = 0xb;
                              puVar8[0xc] = 0xb;
                              puVar8[3] = 0x14;
                              puVar8[0xe] = 0x14;
                              puVar8[5] = 0;
                              *puVar8 = 0x44;
                              puVar8[6] = 0;
                              puVar8[7] = 0;
                              puVar8[0xd] = 0;
                              puVar8[0xf] = 0;
                              puVar8[1] = 0;
                              memset(puVar8 + 0x10,0,0x34);
                              puVar8[0x40] = (char)uVar5;
                              (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                                        (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
                              uVar5 = (uint)*(byte *)(iVar7 + 0x149a);
                              uVar3 = DAT_0001b5c4;
                              goto LAB_0001ad88;
                            }
                            snprintf_res(iVar6,DAT_0001b5bc);
                            uVar3 = DAT_0001b5c0;
                          }
                        }
                        else {
                          iVar1 = strcmp(pcVar9,DAT_0001b5c8);
                          if (iVar1 == 0) {
                            uVar3 = DAT_0001b67c;
                            if (param_2 == 2) {
                              iVar1 = ssv_skb_alloc(iVar7,0x44);
                              if (iVar1 == 0) {
                                return;
                              }
                              skb_put(iVar1,0x44);
                              puVar8 = *(undefined1 **)(iVar1 + 0xa4);
                              *(undefined4 *)(puVar8 + 2) = 0;
                              *(undefined4 *)(puVar8 + 6) = 0;
                              *(undefined2 *)(puVar8 + 10) = 0;
                              puVar8[2] = puVar8[2] & 0xf8 | 5;
                              puVar8[4] = 0xc;
                              puVar8[3] = 0x14;
                              puVar8[0xc] = 0xc;
                              puVar8[0xe] = 0x14;
                              puVar8[5] = 0;
                              *puVar8 = 0x44;
                              puVar8[6] = 0;
                              puVar8[7] = 0;
                              puVar8[0xd] = 0;
                              puVar8[0xf] = 0;
                              puVar8[1] = 0;
                              memset(puVar8 + 0x10,0,0x34);
                              (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                                        (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
                              uVar5 = (uint)*(byte *)(iVar7 + 0x149b);
                              uVar3 = DAT_0001b5cc;
                              goto LAB_0001ad88;
                            }
                          }
                          else {
                            iVar1 = strcmp(pcVar9,DAT_0001b5d0);
                            uVar3 = DAT_0001b680;
                            if (((iVar1 == 0) && (uVar3 = DAT_0001b67c, param_2 == 4)) &&
                               ((sVar2 = strlen(*(char **)(param_3 + 8)), uVar3 = DAT_0001aed0,
                                sVar2 < 0x21 &&
                                (uVar5 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),&local_30,0),
                                uVar3 = DAT_0001b5d4, uVar5 - 1 < 0xf)))) {
                              iVar1 = ssv_skb_alloc(iVar7,0x44);
                              if (iVar1 == 0) {
                                return;
                              }
                              skb_put(iVar1,0x44);
                              puVar8 = *(undefined1 **)(iVar1 + 0xa4);
                              memset(puVar8 + 2,0,0xe);
                              puVar8[5] = 0;
                              puVar8[2] = puVar8[2] & 0xf8 | 5;
                              puVar8[6] = 0;
                              puVar8[3] = 0x14;
                              puVar8[7] = 0;
                              puVar8[4] = 0xd;
                              puVar8[1] = 0;
                              *puVar8 = 0x44;
                              memset(puVar8 + 0x10,0,0x34);
                              puVar8[0x41] = (char)uVar5;
                              sVar2 = strlen(*(char **)(param_3 + 8));
                              puVar8[0x30] = (char)sVar2;
                              puVar8 = puVar8 + 0x10;
                              for (iVar10 = 0; iVar10 < (int)(sVar2 & 0xff); iVar10 = iVar10 + 1) {
                                *puVar8 = *(undefined1 *)(*(int *)(param_3 + 8) + iVar10);
                                puVar8 = puVar8 + 1;
                              }
                              (**(code **)(*(int *)(*(int *)(iVar7 + 0x210) + 0x10) + 0x6c))
                                        (*(undefined4 *)(*(int *)(iVar7 + 0x210) + 0x14),iVar1);
                              uVar3 = DAT_0001b678;
LAB_0001ad88:
                              snprintf_res(iVar6,uVar3,uVar5);
                              return;
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
  snprintf_res(iVar6,uVar3);
  return;
}



/* ===== ssv6020_cmd_set_hwq_limit @ 0001b684 size=160 ===== */

void ssv6020_cmd_set_hwq_limit(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  char *__s1;
  int *piVar2;
  int iStack_14;
  
  if (param_2 == 3) {
    __s1 = *(char **)(param_3 + 4);
    piVar2 = param_1;
    iStack_14 = param_2;
    iVar1 = strcmp(__s1,DAT_0001b724);
    if (iVar1 == 0) {
      iVar1 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_14,0,extraout_r3,piVar2);
      param_1[0x336] = iVar1;
    }
    else {
      iVar1 = strcmp(__s1,DAT_0001b728);
      if (iVar1 == 0) {
        iVar1 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_14,0,extraout_r3_00,piVar2);
        param_1[0x337] = iVar1;
      }
      else {
        iVar1 = strcmp(__s1,DAT_0001b72c);
        if (iVar1 == 0) {
          iVar1 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_14,0,extraout_r3_01,piVar2);
          param_1[0x338] = iVar1;
        }
        else {
          iVar1 = strcmp(__s1,DAT_0001b730);
          if (iVar1 == 0) {
            iVar1 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_14,0,extraout_r3_02,piVar2);
            param_1[0x339] = iVar1;
          }
          else {
            iVar1 = strcmp(__s1,DAT_0001b734);
            if (iVar1 == 0) {
              iVar1 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_14,0);
              param_1[0x33a] = iVar1;
            }
            else {
              snprintf_res(*param_1 + 0x9c0,DAT_0001b738,__s1);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== ssv6020_flash_read_all_map @ 0001b73c size=532 ===== */

void ssv6020_flash_read_all_map(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_9c [12];
  byte local_90;
  byte local_8f;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 auStack_7c [8];
  int local_74;
  int local_70;
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [8];
  int local_44;
  int local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [12];
  int local_2c;
  int *piVar4;
  
  piVar1 = DAT_0001b950;
  local_2c = *DAT_0001b950;
  memset(auStack_9c,0,0x70);
  piVar4 = DAT_0001b958;
  if ((char)param_1[0x2a1] != '\0') {
    piVar4 = param_1 + 0x2a1;
  }
  uVar3 = filp_open(piVar4,0);
  if (((uVar3 < 0xfffff001) && (uVar3 != 0)) ||
     ((uVar3 = filp_open(DAT_0001b954,0), uVar3 < 0xfffff001 && (uVar3 != 0)))) {
    iVar5 = kernel_read(uVar3,auStack_9c,0x70,uVar3 + 0x38);
    filp_close(uVar3,0);
    if (-1 < iVar5) {
      *(undefined1 *)(param_1 + 0x36e) = 1;
      puVar10 = (undefined1 *)((int)param_1 + 0xdc1);
      *(ushort *)(param_1 + 0x37c) = (ushort)local_90;
      *(undefined1 *)((int)param_1 + 0xde6) = local_83;
      param_1[0x1ec] = (uint)(local_90 == 0);
      *(ushort *)((int)param_1 + 0xdf2) = (ushort)local_8f;
      *(undefined1 *)((int)param_1 + 0xde5) = local_84;
      param_1[0x35c] = (uint)(local_8f != 0);
      *(undefined1 *)(param_1 + 0x379) = 0;
      *(undefined1 *)((int)param_1 + 0xde7) = 0;
      *(undefined1 *)((int)param_1 + 0xde9) = local_81;
      *(undefined1 *)(param_1 + 0x37a) = local_82;
      *(undefined2 *)((int)param_1 + 0xdc6) = local_8c;
      *(undefined2 *)((int)param_1 + 0xde2) = local_8a;
      *(undefined2 *)(param_1 + 0x375) = local_88;
      param_1[0x37d] = local_74;
      param_1[0x37e] = local_70;
      param_1[0x37f] = local_44;
      param_1[0x380] = local_40;
      puVar9 = auStack_7c;
      puVar8 = (undefined1 *)((int)param_1 + 0xdba);
      do {
        puVar6 = puVar8 + 1;
        *puVar8 = *puVar9;
        puVar8[0x1c] = puVar9[0x10];
        puVar8[0xe] = puVar9[0x18];
        puVar9 = puVar9 + 1;
        puVar8 = puVar6;
      } while (puVar6 != puVar10);
      puVar9 = auStack_4c;
      puVar8 = puVar10;
      do {
        puVar6 = puVar8 + 1;
        *puVar8 = *puVar9;
        puVar8[0x1c] = puVar9[0x10];
        puVar8[0xe] = puVar9[0x14];
        puVar9 = puVar9 + 1;
        puVar8 = puVar6;
      } while (puVar6 != (undefined1 *)((int)param_1 + 0xdc5));
      puVar9 = auStack_5c;
      piVar4 = param_1 + 0x381;
      do {
        piVar7 = (int *)((int)piVar4 + 1);
        *(undefined1 *)piVar4 = *puVar9;
        puVar9 = puVar9 + 1;
        piVar4 = piVar7;
      } while (piVar7 != (int *)((int)param_1 + 0xe11));
      if (*(int *)(*param_1 + 0x9bc) << 0x12 < 0) {
        printk(DAT_0001b960);
        printk(DAT_0001b964,*(undefined1 *)((int)param_1 + 0xde6),
               *(undefined1 *)((int)param_1 + 0xde5));
        printk(DAT_0001b968,*(undefined1 *)((int)param_1 + 0xde9),(char)param_1[0x37a]);
        printk(DAT_0001b96c,*(undefined2 *)((int)param_1 + 0xdc6),
               *(undefined2 *)((int)param_1 + 0xde2),(short)param_1[0x375]);
        printk(DAT_0001b970,param_1[0x37d],param_1[0x37e]);
        printk(DAT_0001b974,param_1[0x37f],param_1[0x380]);
        printk(DAT_0001b978);
        uVar2 = DAT_0001b97c;
        puVar9 = (undefined1 *)((int)param_1 + 0xdba);
        do {
          puVar8 = puVar9 + 1;
          printk(uVar2,*puVar9,puVar9[0x1c],puVar9[0xe]);
          puVar9 = puVar8;
        } while (puVar8 != puVar10);
        printk(DAT_0001b980);
        printk(DAT_0001b984);
        uVar2 = DAT_0001b97c;
        do {
          puVar9 = puVar10 + 1;
          printk(uVar2,*puVar10,puVar10[0x1c],puVar10[0xe]);
          puVar10 = puVar9;
        } while (puVar9 != (undefined1 *)((int)param_1 + 0xdc5));
        printk(DAT_0001b980);
        printk(DAT_0001b988);
        uVar2 = DAT_0001b98c;
        piVar4 = param_1 + 0x381;
        do {
          piVar7 = (int *)((int)piVar4 + 1);
          printk(uVar2,(char)*piVar4);
          piVar4 = piVar7;
        } while (piVar7 != (int *)((int)param_1 + 0xe11));
      }
    }
  }
  else {
    printk(DAT_0001b95c,DAT_0001b958);
  }
  if (local_2c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== ssv6020_get_fw_name @ 0001b990 size=6 ===== */

void ssv6020_get_fw_name(char *param_1)

{
  strcpy(param_1,DAT_0001b998);
  return;
}



/* ===== ssv6020_init_rx_cfg @ 0001b99c size=54 ===== */

void ssv6020_init_rx_cfg(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = *(int *)(param_1 + 0x36c) - *(int *)(param_1 + 0x378);
  *(uint *)(param_1 + 0x39c) = uVar2;
  *(uint *)(param_1 + 0x398) = uVar2 >> 1;
  *(undefined4 *)(param_1 + 0x3a0) = 0xff;
  *(undefined4 *)(iVar1 + 0x270) = *(undefined4 *)(param_1 + 0x398);
  *(undefined4 *)(iVar1 + 0x274) = *(undefined4 *)(param_1 + 0x39c);
  *(undefined4 *)(iVar1 + 0x278) = *(undefined4 *)(param_1 + 0x3a0);
  return;
}



/* ===== ssv6020_init_tx_cfg @ 0001b9d2 size=150 ===== */

void ssv6020_init_tx_cfg(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar4;
  
  uVar1 = ssv6xxx_hwif_property(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x36c) = 0x100;
  uVar5 = *(uint *)(param_1 + 0xcb4);
  if (uVar5 - 1 < 0xc0) {
    *(uint *)(param_1 + 0x378) = uVar5;
    iVar6 = uVar5 - (uVar5 >> 1);
  }
  else {
    iVar6 = 0xc0;
    *(undefined4 *)(param_1 + 0x378) = 0xc0;
  }
  iVar2 = *(int *)(param_1 + 0x378);
  if (0xbf < uVar5 - 1) {
    iVar6 = 0x60;
  }
  *(int *)(param_1 + 0x37c) = iVar6;
  *(undefined4 *)(param_1 + 0x36c) = 0xed;
  uVar5 = iVar2 - 0x13;
  *(uint *)(param_1 + 0x378) = uVar5;
  if ((uVar1 & 2) == 0) {
    *(uint *)(param_1 + 0x368) = uVar5;
  }
  else {
    *(int *)(param_1 + 0x368) = iVar2 + -0x17;
  }
  *(uint *)(param_1 + 0x374) = uVar5 >> 1;
  *(uint *)(param_1 + 0x380) = (uVar5 >> 1) - 1;
  *(undefined4 *)(param_1 + 900) = 8;
  *(undefined4 *)(param_1 + 0x388) = 0xf;
  *(undefined4 *)(param_1 + 0x394) = 8;
  *(undefined4 *)(param_1 + 0x370) = 2;
  *(undefined4 *)(param_1 + 0x38c) = 0x10;
  *(undefined4 *)(param_1 + 0x390) = 0x10;
  puVar3 = (undefined4 *)(param_1 + 0x374);
  puVar7 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x24c);
  do {
    puVar4 = puVar3 + 1;
    *puVar7 = *puVar3;
    puVar3 = puVar4;
    puVar7 = puVar7 + 1;
  } while (puVar4 != (undefined4 *)(param_1 + 0x398));
  return;
}



/* ===== ssv6020_put_mic_space_for_hw_ccmp_encrypt @ 0001ba68 size=112 ===== */

undefined4 ssv6020_put_mic_space_for_hw_ccmp_encrypt(undefined4 param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = **(int **)(param_2 + 0xa0);
  if (iVar3 != 0) {
    iVar3 = iVar3 + 0x108;
  }
  uVar1 = **(ushort **)(param_2 + 0xa4);
  if (((((uVar1 & 0x8c) == 0x88) || ((uVar1 & 0xc) == 8)) && ((uVar1 & 0x4000) != 0)) &&
     ((*(int *)(param_2 + 0x34) == 0 || (*(int *)(*(int *)(param_2 + 0x34) + 8) == DAT_0001bad8))))
  {
    if (*(int *)(*(ushort **)(param_2 + 0xa4) + 2) << 0x1f < 0) {
      if (*(char *)(*(int *)(param_2 + 0x30) + 0x2d0) == '\0') {
        return 0;
      }
      cVar2 = *(char *)(*(int *)(param_2 + 0x30) + 0x2d1);
    }
    else {
      if (iVar3 == 0) {
        return 0;
      }
      cVar2 = *(char *)(iVar3 + 0x30);
    }
    uVar4 = 0;
    if (cVar2 != '\0') {
      pskb_expand_head(param_2,0,8,0xa20);
      skb_put(param_2,8);
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== ssv6020_restore_rx_flow @ 0001badc size=30 ===== */

void ssv6020_restore_rx_flow(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_0001bb00,DAT_0001bafc,param_2,
           param_3);
  return;
}



/* ===== ssv6020_chk_dual_vif_chg_rx_flow @ 0001bb04 size=30 ===== */

void ssv6020_chk_dual_vif_chg_rx_flow(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_0001bb28,DAT_0001bb24,param_2,
           param_3);
  return;
}



/* ===== ssv6020_set_fw_hwwsid_sec_type @ 0001bb2c size=30 ===== */

void ssv6020_set_fw_hwwsid_sec_type(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_0001bb50,DAT_0001bb4c,param_2,
           param_3);
  return;
}



/* ===== ssv6020_disable_fw_wsid @ 0001bb54 size=30 ===== */

void ssv6020_disable_fw_wsid(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_0001bb78,DAT_0001bb74,param_2,
           param_3);
  return;
}



/* ===== ssv6020_enable_fw_wsid @ 0001bb7c size=30 ===== */

void ssv6020_enable_fw_wsid(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_0001bba0,DAT_0001bb9c,param_2,
           param_3);
  return;
}



/* ===== ssv6020_del_fw_wsid @ 0001bba4 size=30 ===== */

void ssv6020_del_fw_wsid(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_0001bbc8,DAT_0001bbc4,param_2,
           param_3);
  return;
}



/* ===== ssv6020_add_fw_wsid @ 0001bbcc size=30 ===== */

void ssv6020_add_fw_wsid(int param_1,undefined4 param_2,undefined4 param_3)

{
  dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x800,DAT_0001bbf0,DAT_0001bbec,param_2,
           param_3);
  return;
}



/* ===== ssv6020_chk_if_support_hw_bssid @ 0001bbf4 size=24 ===== */

bool ssv6020_chk_if_support_hw_bssid
               (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 >= 2) {
    printk(DAT_0001bc10,DAT_0001bc0c,param_2,param_4,param_4);
  }
  return param_2 < 2;
}



/* ===== ssv6020_send_tx_poll_cmd @ 0001bc14 size=96 ===== */

void ssv6020_send_tx_poll_cmd(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x1f5) == '\0') {
    return;
  }
  iVar1 = ssv_skb_alloc(*param_1,0x10);
  uVar2 = DAT_0001bc78;
  uVar4 = DAT_0001bc74;
  if (iVar1 != 0) {
    skb_put(iVar1,0x10);
    puVar3 = memset(*(void **)(iVar1 + 0xa4),0,0x14);
    *(byte *)(puVar3 + 1) = param_2 << 3 | 5;
    *(undefined1 *)((int)puVar3 + 3) = 9;
    *puVar3 = *(undefined2 *)(iVar1 + 0x50);
    iVar1 = (**(code **)(param_1[4] + 0x6c))(param_1[5],iVar1);
    uVar2 = DAT_0001bc80;
    uVar4 = DAT_0001bc7c;
    if (iVar1 == 0) {
      return;
    }
  }
  printk(uVar2,uVar4);
  return;
}



/* ===== ssv6020_ps_evt_handler @ 0001bc84 size=70 ===== */

void ssv6020_ps_evt_handler(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *(short *)(*(int *)(param_2 + 0xa4) + 0x10);
  if (sVar1 == 3) {
    complete(param_1 + 0xcf8);
    uVar2 = DAT_0001bcd4;
  }
  else if (sVar1 == 4) {
    complete(param_1 + 0xd04);
    uVar2 = DAT_0001bcd8;
  }
  else {
    uVar2 = DAT_0001bcd0;
    if (sVar1 != 1) {
      printk(DAT_0001bcdc,DAT_0001bccc,sVar1,param_4);
      return;
    }
  }
  printk(uVar2,DAT_0001bccc);
  return;
}



/* ===== ssv6020_alloc_hw @ 0001bce0 size=80 ===== */

void * ssv6020_alloc_hw(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *__s;
  void *__s_00;
  
  iVar1 = DAT_0001bd30;
  __s = (void *)kmem_cache_alloc(*(undefined4 *)(DAT_0001bd30 + 0x30),0xdc0,param_3,param_4,param_4)
  ;
  if (__s != (void *)0x0) {
    memset(__s,0,0xf70);
    __s_00 = (void *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x1c),0xdc0);
    *(void **)((int)__s + 0xf60) = __s_00;
    if (__s_00 != (void *)0x0) {
      memset(__s_00,0,0x80);
      return __s;
    }
  }
  if (*(int *)((int)__s + 0xf60) != 0) {
    kfree();
  }
  if (__s != (void *)0x0) {
    kfree(__s);
  }
  return (void *)0x0;
}



/* ===== ssv_attach_ssv6020_common @ 0001bd34 size=142 ===== */

void ssv_attach_ssv6020_common(undefined4 *param_1)

{
  param_1[4] = DAT_0001bdc4;
  param_1[7] = DAT_0001bdc8;
  param_1[0xf] = DAT_0001bdcc;
  param_1[0x14] = DAT_0001bdd0;
  param_1[0x17] = DAT_0001bdd4;
  param_1[0x18] = DAT_0001bdd8;
  param_1[0x19] = DAT_0001bddc;
  param_1[0x1a] = DAT_0001bde0;
  param_1[0x1b] = DAT_0001bde4;
  param_1[0x1c] = DAT_0001bde8;
  param_1[0x1d] = DAT_0001bdec;
  param_1[0x1e] = DAT_0001bdf0;
  param_1[0x27] = DAT_0001bdf4;
  param_1[0x28] = DAT_0001bdf8;
  param_1[0x29] = DAT_0001bdfc;
  param_1[0x2c] = DAT_0001be00;
  param_1[0x2d] = DAT_0001be04;
  param_1[0x41] = DAT_0001be08;
  param_1[0x42] = DAT_0001be0c;
  param_1[0xa7] = DAT_0001be10;
  *param_1 = DAT_0001be14;
  param_1[0x75] = DAT_0001be18;
  param_1[1] = DAT_0001be1c;
  param_1[0x77] = DAT_0001be20;
  param_1[99] = DAT_0001be24;
  param_1[0x78] = DAT_0001be28;
  param_1[0xa1] = DAT_0001be2c;
  param_1[0x62] = DAT_0001be30;
  return;
}



/* ===== ssv6xxx_hwif_property @ 0001be34 size=16 ===== */

undefined4 ssv6xxx_hwif_property(undefined4 *param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(((undefined4 *)*param_1)[1] + 0x70);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001be3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1);
    return uVar1;
  }
  return 0;
}



/* ===== ssv6020_update_page_id @ 0001be44 size=116 ===== */

void ssv6020_update_page_id(int param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  uint local_c;
  
  iVar1 = param_1;
  local_c = param_2;
  (**(code **)(param_1 + 0x16c))();
  (**(code **)(param_1 + 0x170))(param_1);
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  iVar1 = (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001beb8,&local_c,pcVar2,iVar1);
  local_c = local_c & 0xffff0000 | *(uint *)(param_1 + 0x374) | *(int *)(param_1 + 0x398) << 8;
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001beb8);
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                    (*(undefined4 *)(param_1 + 0x14),DAT_0001bebc,&local_c);
  local_c = *(int *)(param_1 + 0x39c) << 0xd | *(int *)(param_1 + 0x378) << 4 |
            DAT_0001bec0 & local_c;
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001bebc);
  }
  return;
}



/* ===== ssv6020_reset_sysplf @ 0001bec4 size=16 ===== */

void ssv6020_reset_sysplf(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001bed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x7c))
            (*(undefined4 *)(param_1 + 0x14),0xc0000000,0x100000);
  return;
}



/* ===== ssv6020_write_mac_ini @ 0001bed4 size=36 ===== */

void ssv6020_write_mac_ini(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_0001bef8;
  iVar3 = 0;
  do {
    iVar2 = iVar1 + iVar3 * 8;
    iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
                      (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(iVar1 + iVar3 * 8),
                       *(undefined4 *)(iVar2 + 4),iVar2,param_4);
    if (iVar2 != 0) {
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x22);
  return;
}



/* ===== ssv6020_set_rx_ctrl_flow @ 0001befc size=4 ===== */

undefined4 ssv6020_set_rx_ctrl_flow(void)

{
  return 1;
}



/* ===== ssv6020_get_ic_time_tag @ 0001bf00 size=50 ===== */

void ssv6020_get_ic_time_tag(int param_1,uint param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  uint local_c;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_c = param_2;
  (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001bf34,&local_c,pcVar2,param_1);
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar1 = DAT_0001bf38;
  *(uint *)(param_1 + 100) = local_c;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar1,&local_c);
  *(uint *)(param_1 + 0x60) = local_c | *(uint *)(param_1 + 0x60);
  return;
}



/* ===== ssv6020_get_mrx_mode @ 0001bf3c size=12 ===== */

void ssv6020_get_mrx_mode(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001bf46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001bf48,param_2);
  return;
}



/* ===== _ssv6020_get_sec_key_tbl_addr @ 0001bf4c size=38 ===== */

uint _ssv6020_get_sec_key_tbl_addr(int param_1)

{
  int iVar1;
  uint local_c;
  
  iVar1 = *(int *)(param_1 + 0x210);
  local_c = 0;
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
            (*(undefined4 *)(iVar1 + 0x14),DAT_0001bf74,&local_c,iVar1,param_1);
  return (local_c & 0x1fc0) << 10 | 0xe0000000;
}



/* ===== ssv6020_save_hw_status @ 0001bf78 size=66 ===== */

void ssv6020_save_hw_status(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar5 = *(int *)(param_1 + 0x210);
  iVar4 = 0;
  local_1c = 0;
  pcVar3 = *(code **)(*(int *)(iVar5 + 0x10) + 0x1c);
  uStack_18 = param_3;
  (*pcVar3)(*(undefined4 *)(iVar5 + 0x14),DAT_0001bfbc,&local_1c,pcVar3,param_1);
  iVar1 = _ssv6020_get_sec_key_tbl_addr(param_1);
  puVar6 = (undefined4 *)(iVar5 + 0x3a0);
  do {
    iVar2 = iVar4 + iVar1;
    iVar4 = iVar4 + 4;
    (**(code **)(*(int *)(iVar5 + 0x10) + 0x1c))(*(undefined4 *)(iVar5 + 0x14),iVar2,&local_1c);
    puVar6 = puVar6 + 1;
    *puVar6 = local_1c;
  } while (iVar4 != 0x2a4);
  return;
}



/* ===== ssv6020_write_key_to_hw @ 0001bfc0 size=2 ===== */

void ssv6020_write_key_to_hw(void)

{
  return;
}



/* ===== ssv6020_restore_trap_reason @ 0001bfc2 size=44 ===== */

void ssv6020_restore_trap_reason(int param_1)

{
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),DAT_0001bff0,DAT_0001bff4);
                    /* WARNING: Could not recover jumptable at 0x0001bfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),DAT_0001bff8,0x33f);
  return;
}



/* ===== ssv6020_ps_save_reset_rx_flow @ 0001bffc size=2 ===== */

void ssv6020_ps_save_reset_rx_flow(void)

{
  return;
}



/* ===== ssv6020_ps_hold_on3 @ 0001bffe size=22 ===== */

void ssv6020_ps_hold_on3(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001c012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),DAT_0001c014,param_2);
  return;
}



/* ===== ssv6020_set_replay_ignore @ 0001c018 size=46 ===== */

void ssv6020_set_replay_ignore(int param_1,uint param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  uint local_14;
  
  uVar1 = DAT_0001c048;
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_14 = param_2;
  (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c048,&local_14,pcVar2,param_1);
  local_14 = local_14 & 0xfffeffff | param_2 << 0x10;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),uVar1);
  return;
}



/* ===== ssv6020_update_decision_table_6 @ 0001c04c size=12 ===== */

void ssv6020_update_decision_table_6(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001c056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c058,param_2);
  return;
}



/* ===== ssv6020_get_fw_version @ 0001c05c size=12 ===== */

void ssv6020_get_fw_version(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001c066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c068,param_2);
  return;
}



/* ===== ssv6020_set_dur_burst_sifs_g @ 0001c06c size=2 ===== */

void ssv6020_set_dur_burst_sifs_g(void)

{
  return;
}



/* ===== ssv6020_set_dur_slot @ 0001c06e size=48 ===== */

void ssv6020_set_dur_slot(int param_1,uint param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  uint local_14;
  
  uVar1 = DAT_0001c0a0;
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_14 = param_2;
  (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c0a0,&local_14,pcVar2,param_1);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),uVar1,local_14 & 0xffffe0ff | (param_2 & 0x1f) << 8);
  return;
}



/* ===== ssv6020_set_sifs @ 0001c0a4 size=122 ===== */

void ssv6020_set_sifs(int param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  uint local_c;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_c = param_2;
  if (param_2 == 0) {
    (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c120,&local_c,pcVar2,param_1);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c120,local_c & 0xffe0ffff | 0xa0000);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c124,&local_c);
    pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar1 = local_c & 0xf0ffffff | 0x6000000;
  }
  else {
    (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c120,&local_c,pcVar2,param_1);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c120,local_c & 0xffe0ffff | 0x100000);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c124,&local_c);
    pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar1 = local_c & 0xf0ffffff;
  }
  (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c124,uVar1);
  return;
}



/* ===== ssv6020_set_qos_enable @ 0001c128 size=46 ===== */

void ssv6020_set_qos_enable(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  uint local_14;
  undefined4 uStack_10;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c158,&local_14,pcVar2,param_1);
  local_14 = local_14 & 0xffffffef | param_2 << 4;
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001c158);
  }
  return;
}



/* ===== ssv6020_ampdu_auto_crc_en @ 0001c15c size=40 ===== */

void ssv6020_ampdu_auto_crc_en(int param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  uint local_c;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_c = param_2;
  iVar1 = (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c184,&local_c,pcVar2,param_1);
  local_c = local_c | 0x20;
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001c184);
  }
  return;
}



/* ===== ssv6020_set_rx_ba @ 0001c188 size=38 ===== */

void ssv6020_set_rx_ba(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  uint local_14;
  undefined4 uStack_10;
  
  uVar1 = DAT_0001c1b0;
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_14 = param_2;
  uStack_10 = param_3;
  (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c1b0,&local_14,pcVar2,param_1);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),uVar1,local_14 | 0xf);
  return;
}



/* ===== ssv6020_chg_clk_src @ 0001c1b4 size=4 ===== */

undefined4 ssv6020_chg_clk_src(void)

{
  return 0;
}



/* ===== ssv6020_beacon_loss_enable @ 0001c1b8 size=38 ===== */

void ssv6020_beacon_loss_enable(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  uint local_14;
  undefined4 uStack_10;
  
  uVar1 = DAT_0001c1e0;
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_14 = param_2;
  uStack_10 = param_3;
  (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c1e0,&local_14,pcVar2,param_1);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),uVar1,local_14 | 1)
  ;
  return;
}



/* ===== ssv6020_beacon_loss_disable @ 0001c1e4 size=38 ===== */

void ssv6020_beacon_loss_disable(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  uint local_14;
  undefined4 uStack_10;
  
  uVar1 = DAT_0001c20c;
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_14 = param_2;
  uStack_10 = param_3;
  (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c20c,&local_14,pcVar2,param_1);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),uVar1,local_14 & 0xfffffffe);
  return;
}



/* ===== ssv6020_update_txq_mask @ 0001c210 size=46 ===== */

void ssv6020_update_txq_mask(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  uint local_14;
  undefined4 uStack_10;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c240,&local_14,pcVar2,param_1);
  local_14 = local_14 & 0xff80ffff | param_2 << 0x10;
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001c240);
  }
  return;
}



/* ===== ssv6020_readrg_hci_inq_info @ 0001c244 size=34 ===== */

void ssv6020_readrg_hci_inq_info(int param_1,undefined4 *param_2,uint *param_3)

{
  int iVar1;
  code *pcVar2;
  uint local_c;
  
  *param_2 = 0;
  local_c = 0;
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  iVar1 = (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001c268,&local_c,pcVar2,param_1);
  if (iVar1 == 0) {
    *param_3 = local_c & 0xff;
  }
  return;
}



/* ===== ssv6020_readrg_txq_info @ 0001c26c size=70 ===== */

bool ssv6020_readrg_txq_info(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *local_1c;
  undefined4 *puStack_18;
  
  iVar2 = param_1;
  local_1c = param_2;
  puStack_18 = param_3;
  iVar1 = ssv6xxx_hwif_property(*(undefined4 *)(param_1 + 0x14));
  pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  iVar2 = (*pcVar3)(*(undefined4 *)(param_1 + 0x14),DAT_0001c2b4,&local_1c,pcVar3,iVar2);
  if (iVar2 == 0) {
    if (iVar1 << 0x1e < 0) {
      local_1c = (int *)CONCAT22(local_1c._2_2_,
                                 (ushort)local_1c & 0xfe00 |
                                 (ushort)((uint)((int)local_1c << 0x17) >> 0x17) + 1 & 0x1ff);
    }
    *param_2 = (int)local_1c;
  }
  *param_3 = 0;
  return iVar2 != 0;
}



/* ===== ssv6020_get_ffout_cnt @ 0001c2b8 size=78 ===== */

uint ssv6020_get_ffout_cnt(uint param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return param_1 & 0x1f;
  case 1:
  case 7:
    return (param_1 & 0x3ff) >> 5;
  default:
    return 0;
  case 3:
  case 9:
    return (param_1 & 0xfffff) >> 0xf;
  case 4:
    return (param_1 & 0x3fffff) >> 0x14;
  case 5:
    return (param_1 & 0xfffffff) >> 0x19;
  case 6:
    return param_1 & 0xf;
  case 8:
    return (param_1 & 0x7fff) >> 10;
  case 10:
    return (param_1 & 0xffffff) >> 0x14;
  case 0xb:
    return (param_1 & 0x3fffffff) >> 0x19;
  case 0xc:
    return param_1 & 7;
  case 0xf:
    return (param_1 & 0x7ffff) >> 0xf;
  }
}



/* ===== ssv6020_get_in_ffcnt @ 0001c316 size=88 ===== */

uint ssv6020_get_in_ffcnt(uint param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return param_1 & 0x1f;
  case 1:
    return (param_1 & 0x1ff) >> 5;
  default:
    return 0;
  case 3:
    return (param_1 & 0x3fff) >> 0xb;
  case 4:
    return (param_1 & 0x7fffff) >> 0x12;
  case 5:
    return (param_1 & 0xfffff) >> 0x11;
  case 6:
    return (param_1 & 0x7fffff) >> 0x14;
  case 7:
    return (param_1 & 0x3ffffff) >> 0x17;
  case 8:
    return (param_1 & 0x1fffffff) >> 0x1a;
  case 9:
    return param_1 >> 0x1d;
  case 10:
    return param_1 & 7;
  case 0xb:
    return (param_1 & 0x3f) >> 3;
  case 0xc:
    return (param_1 & 0x1ff) >> 6;
  case 0xf:
    return (param_1 & 0x3ffff) >> 0xf;
  }
}



/* ===== ssv6020_read_ffout_cnt @ 0001c37e size=50 ===== */

void ssv6020_read_ffout_cnt(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c3b0,param_2);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c3b4,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001c3ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c3b8,param_4);
  return;
}



/* ===== ssv6020_read_in_ffcnt @ 0001c3bc size=34 ===== */

void ssv6020_read_in_ffcnt(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c3e0,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001c3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c3e4,param_3);
  return;
}



/* ===== ssv6020_read_id_len_threshold @ 0001c3e8 size=40 ===== */

void ssv6020_read_id_len_threshold(int param_1,uint *param_2,uint *param_3)

{
  code *pcVar1;
  uint local_14;
  uint *puStack_10;
  
  local_14 = 0;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  puStack_10 = param_3;
  (*pcVar1)(*(undefined4 *)(param_1 + 0x14),DAT_0001c410,&local_14,pcVar1,param_1);
  *param_2 = (local_14 & 0x3ffff) >> 9;
  *param_3 = (local_14 & 0x7ffffff) >> 0x12;
  return;
}



/* ===== ssv6020_read_allid_map @ 0001c414 size=64 ===== */

void ssv6020_read_allid_map
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c454,param_2);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c458,param_3);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c45c,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001c452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c460,param_5);
  return;
}



/* ===== ssv6020_read_txid_map @ 0001c464 size=64 ===== */

void ssv6020_read_txid_map
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c4a4,param_2);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c4a8,param_3);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c4ac,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001c4a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c4b0,param_5);
  return;
}



/* ===== ssv6020_read_rxid_map @ 0001c4b4 size=64 ===== */

void ssv6020_read_rxid_map
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c4f4,param_2);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c4f8,param_3);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c4fc,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001c4f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c500,param_5);
  return;
}



/* ===== ssv6020_read_wifi_halt_status @ 0001c504 size=28 ===== */

void ssv6020_read_wifi_halt_status(int param_1,uint *param_2)

{
  code *pcVar1;
  uint *local_c;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_c = param_2;
  (*pcVar1)(*(undefined4 *)(param_1 + 0x14),DAT_0001c520,&local_c,pcVar1,param_1);
  *param_2 = ((uint)local_c & 3) >> 1;
  return;
}



/* ===== ssv6020_read_tag_status @ 0001c524 size=32 ===== */

void ssv6020_read_tag_status(int param_1,uint *param_2)

{
  code *pcVar1;
  uint local_c;
  
  local_c = 0;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  (*pcVar1)(*(undefined4 *)(param_1 + 0x14),DAT_0001c544,&local_c,pcVar1,param_1);
  *param_2 = local_c & 0x1ff;
  return;
}



/* ===== ssv6020_get_rd_id_adr @ 0001c548 size=18 ===== */

void ssv6020_get_rd_id_adr(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001c55c;
  *param_1 = DAT_0001c55c;
  param_1[1] = iVar1 + 4;
  param_1[2] = iVar1 + 0x4c;
  param_1[3] = iVar1 + 0x50;
  return;
}



/* ===== ssv6020_auto_gen_nullpkt @ 0001c560 size=468 ===== */

uint ssv6020_auto_gen_nullpkt(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint local_1c;
  
  local_1c = param_2;
  switch(param_2) {
  case 0:
    iVar5 = 0x65;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c740,&local_1c);
    uVar2 = DAT_0001c74c;
    iVar1 = DAT_0001c744;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c740,local_1c | 0x80000000);
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (**(code **)(iVar1 + 4))(uVar2);
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c740,&local_1c);
    pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar3 = local_1c & 0x7fffffff;
    uVar2 = DAT_0001c740;
    break;
  case 1:
    iVar5 = 0x65;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c748,&local_1c);
    uVar2 = DAT_0001c74c;
    iVar1 = DAT_0001c744;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c748,local_1c | 0x80000000);
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (**(code **)(iVar1 + 4))(uVar2);
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c748,&local_1c);
    pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar3 = local_1c & 0x7fffffff;
    param_2 = 0;
    uVar2 = DAT_0001c748;
    break;
  case 2:
    iVar5 = 0x65;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c750,&local_1c);
    uVar2 = DAT_0001c74c;
    iVar1 = DAT_0001c744;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c750,local_1c | 0x80000000);
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (**(code **)(iVar1 + 4))(uVar2);
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c750,&local_1c);
    pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar3 = local_1c & 0x7fffffff;
    param_2 = 0;
    uVar2 = DAT_0001c750;
    break;
  case 3:
    iVar5 = 0x65;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c754,&local_1c);
    uVar2 = DAT_0001c74c;
    iVar1 = DAT_0001c744;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c754,local_1c | 0x80000000);
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (**(code **)(iVar1 + 4))(uVar2);
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c754,&local_1c);
    pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar3 = local_1c & 0x7fffffff;
    param_2 = 0;
    uVar2 = DAT_0001c754;
    break;
  case 4:
    iVar5 = 0x65;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c758,&local_1c);
    uVar2 = DAT_0001c74c;
    iVar1 = DAT_0001c744;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c758,local_1c | 0x80000000);
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (**(code **)(iVar1 + 4))(uVar2);
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c758,&local_1c);
    pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar3 = local_1c & 0x7fffffff;
    param_2 = 0;
    uVar2 = DAT_0001c758;
    break;
  case 5:
    iVar5 = 0x65;
    pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
    (*pcVar4)(*(undefined4 *)(param_1 + 0x14),DAT_0001c75c,&local_1c,pcVar4,param_1);
    uVar2 = DAT_0001c74c;
    iVar1 = DAT_0001c744;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c75c,local_1c | 0x80000000);
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (**(code **)(iVar1 + 4))(uVar2);
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001c75c,&local_1c);
    pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar3 = local_1c & 0x7fffffff;
    param_2 = 0;
    uVar2 = DAT_0001c75c;
    break;
  default:
    return 0xffffffa1;
  }
  (*pcVar4)(*(undefined4 *)(param_1 + 0x14),uVar2,uVar3);
  return param_2;
}



/* ===== ssv6020_load_fw_enable_mcu @ 0001c760 size=124 ===== */

void ssv6020_load_fw_enable_mcu(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  local_14 = param_2;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c7dc,&local_14);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c7dc,local_14 & 0xffff);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c7e0,&local_14);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  if ((local_14 & 0x10000000) == 0) {
    (*pcVar3)(*(undefined4 *)(param_1 + 0x14),DAT_0001c7e4,&local_14);
    uVar2 = 0x4008;
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
  }
  else {
    (*pcVar3)();
    uVar2 = 0x400b;
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
  }
  (*pcVar3)(*(undefined4 *)(param_1 + 0x14),DAT_0001c7e4,uVar2);
  uVar2 = DAT_0001c7e8;
  do {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x14),uVar2,&local_18);
    if (iVar1 == -1) {
      return;
    }
  } while (local_18 != 0x307);
  return;
}



/* ===== ssv6020_load_fw_set_status @ 0001c7ec size=12 ===== */

void ssv6020_load_fw_set_status(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001c7f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c7f8,param_2);
  return;
}



/* ===== ssv6020_load_fw_get_status @ 0001c7fc size=12 ===== */

void ssv6020_load_fw_get_status(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001c806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c808,param_2);
  return;
}



/* ===== ssv6020_load_fw_pre_config_device @ 0001c80c size=16 ===== */

void ssv6020_load_fw_pre_config_device(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(((undefined4 *)**(undefined4 **)(param_1 + 0x14))[1] + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001c818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)**(undefined4 **)(param_1 + 0x14));
    return;
  }
  return;
}



/* ===== ssv6020_load_fw_post_config_device @ 0001c81c size=16 ===== */

void ssv6020_load_fw_post_config_device(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(((undefined4 *)**(undefined4 **)(param_1 + 0x14))[1] + 0x44);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001c828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)**(undefined4 **)(param_1 + 0x14));
    return;
  }
  return;
}



/* ===== ssv6020_enable_sram @ 0001c82c size=100 ===== */

void ssv6020_enable_sram(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int local_14;
  
  local_14 = 0;
  pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
  iVar2 = (*pcVar4)(*(undefined4 *)(param_1 + 0x14),DAT_0001c894,DAT_0001c890,pcVar4,param_1);
  uVar1 = DAT_0001c898;
  iVar3 = DAT_0001c890;
  if (iVar2 != -1) {
    do {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                        (*(undefined4 *)(param_1 + 0x14),uVar1,&local_14);
      if (iVar2 == -1) {
        return;
      }
    } while (local_14 != iVar3);
    iVar3 = (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001c89c,0x3fff);
    uVar1 = DAT_0001c8a0;
    if (iVar3 != -1) {
      do {
        iVar3 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                          (*(undefined4 *)(param_1 + 0x14),uVar1,&local_14);
        if (iVar3 == -1) {
          return;
        }
      } while (local_14 != 0x3fff);
    }
  }
  return;
}



/* ===== ssv6020_enable_usb_acc @ 0001c8a4 size=2 ===== */

void ssv6020_enable_usb_acc(void)

{
  return;
}



/* ===== ssv6020_set_on3_enable @ 0001c8a6 size=114 ===== */

void ssv6020_set_on3_enable(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_1c;
  undefined4 uStack_18;
  
  uVar3 = DAT_0001c918;
  local_1c = 0;
  iVar2 = param_1;
  uStack_18 = param_3;
  do {
    pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
    iVar1 = (*pcVar4)(*(undefined4 *)(param_1 + 0x14),uVar3,&local_1c,pcVar4,iVar2);
    if (iVar1 == -1) {
      return;
    }
  } while (local_1c != 0x307);
  iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
                    (*(undefined4 *)(param_1 + 0x14),DAT_0001c91c,0xb0f);
  if (iVar2 != -1) {
    if (param_2 == 0) {
      uVar3 = 0x408;
    }
    else {
      uVar3 = 0x808;
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001c920,uVar3);
    uVar3 = DAT_0001c918;
    if (iVar2 != -1) {
      do {
        iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                          (*(undefined4 *)(param_1 + 0x14),uVar3,&local_1c);
        if (iVar2 == -1) {
          return;
        }
      } while (local_1c != 0x307);
    }
  }
  return;
}



/* ===== ssv6020_set_fpga_crystal_clk @ 0001c924 size=142 ===== */

void ssv6020_set_fpga_crystal_clk(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint local_24;
  undefined4 uStack_20;
  
  uVar4 = DAT_0001c9cc;
  iVar3 = DAT_0001c9b4;
  iVar5 = 0;
  iVar6 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  do {
    iVar2 = iVar5 * 8;
    iVar1 = iVar5 * 8;
    iVar5 = iVar5 + 1;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(DAT_0001c9b8 + iVar1),
               *(undefined4 *)(DAT_0001c9b8 + iVar2 + 4),DAT_0001c9b8,iVar6);
    (**(code **)(iVar3 + 4))(uVar4);
  } while (iVar5 != 5);
  iVar6 = 0xb;
  (**(code **)(iVar3 + 4))(DAT_0001c9bc);
  uVar4 = DAT_0001c9bc;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c9c0,&local_24);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c9c0,local_24 | 0x80000000);
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
    (**(code **)(iVar3 + 4))(uVar4);
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001c9c8,DAT_0001c9c4);
  (**(code **)(iVar3 + 4))(DAT_0001c9cc);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001c9d0,4);
  (**(code **)(iVar3 + 4))(DAT_0001c9bc);
  return;
}



/* ===== ssv6020_set_mrx_filter @ 0001c9d4 size=58 ===== */

void ssv6020_set_mrx_filter(int param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  uint local_1c;
  int iStack_18;
  
  local_1c = 0;
  iVar2 = DAT_0001ca10 + param_2 * 4;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  iStack_18 = param_3;
  (*pcVar1)(*(undefined4 *)(param_1 + 0x14),iVar2,&local_1c,pcVar1,param_1);
  if (param_3 == 0) {
    local_1c = local_1c & ~param_4;
  }
  else {
    local_1c = local_1c | param_4;
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),iVar2);
  return;
}



/* ===== ssv_hwif_read_reg @ 0001ca14 size=10 ===== */

void ssv_hwif_read_reg(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001ca1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x3c) + 0x2c) + 8))();
  return;
}



/* ===== ssv6020_reset_cpu @ 0001ca1e size=200 ===== */

undefined4 ssv6020_reset_cpu(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001cae8,&local_1c);
  uVar1 = local_1c;
  local_20 = 0;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001cae8,&local_1c);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001cae8,0xffffffff);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001caec,&local_1c);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001caec,local_1c & 0xffff | 0x40000);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001caf0,&local_1c);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  if ((local_1c & 0x10000000) == 0) {
    (*pcVar4)(*(undefined4 *)(param_1 + 0x14),DAT_0001caf4,&local_1c);
    uVar3 = 0x4008;
    pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
  }
  else {
    (*pcVar4)();
    uVar3 = 0x400b;
    pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
  }
  (*pcVar4)(*(undefined4 *)(param_1 + 0x14),DAT_0001caf4,uVar3);
  uVar3 = DAT_0001caf8;
  do {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x14),uVar3,&local_20);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
  } while (local_20 != 0x307);
  msleep(1);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001cae8,&local_1c);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001cae8,uVar1)
  ;
  return 0;
}



/* ===== ssv6020_load_fw_disable_mcu @ 0001cafc size=16 ===== */

int ssv6020_load_fw_disable_mcu(void)

{
  int iVar1;
  
  iVar1 = ssv6020_reset_cpu();
  return -(uint)(iVar1 != 0);
}



/* ===== ssv6020_update_decision_table @ 0001cb0c size=170 ===== */

undefined4 ssv6020_update_decision_table(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_1c;
  undefined4 uStack_18;
  
  iVar2 = 0;
  iVar4 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  do {
    iVar1 = *(int *)(param_1 + 0x210);
    iVar3 = iVar2 * 2 + -0x39ffff90;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))
              (*(undefined4 *)(iVar1 + 0x14),iVar3,
               *(undefined2 *)(*(int *)(param_1 + 0x884) + iVar2),iVar1,iVar4);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar3,&local_1c);
    if (*(ushort *)(*(int *)(param_1 + 0x884) + iVar2) != local_1c) goto LAB_0001cb4a;
    iVar2 = iVar2 + 2;
  } while (iVar2 != 0x20);
  while( true ) {
    iVar3 = iVar2 * 2 + -0x39ffff90;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar3,
               *(undefined2 *)(*(int *)(param_1 + 0x884) + iVar2));
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar3,&local_1c);
    if (*(ushort *)(*(int *)(param_1 + 0x884) + iVar2) != local_1c) break;
    iVar2 = iVar2 + 2;
    if (iVar2 == 0x32) {
      return 0;
    }
  }
LAB_0001cb4a:
  printk(DAT_0001cbb8);
  printk(DAT_0001cbbc,iVar3,*(undefined2 *)(*(int *)(param_1 + 0x884) + iVar2),local_1c);
  printk(DAT_0001cbc0);
  return 0xffffffff;
}



/* ===== ssv6020_save_clear_trap_reason @ 0001cbc4 size=86 ===== */

void ssv6020_save_clear_trap_reason(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar1 = DAT_0001cc1c;
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),DAT_0001cc1c,&local_20);
  uVar2 = DAT_0001cc20;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),DAT_0001cc20,&uStack_1c);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),uVar1,0);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),uVar2,0);
  printk(DAT_0001cc24,local_20,uStack_1c);
  return;
}



/* ===== _ssv6020_set_crystal_clk @ 0001cc28 size=702 ===== */

void _ssv6020_set_crystal_clk(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  local_10 = 0;
  pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_c = param_4;
  (*pcVar3)(*(undefined4 *)(param_1 + 0x14),DAT_0001ce78,&local_14,pcVar3,param_1);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001ce7c,&local_10);
  iVar2 = *(int *)(param_1 + 0x10);
  if ((local_10 & 0x8000000) == 0) {
    pcVar3 = *(code **)(iVar2 + 0x1c);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
LAB_0001ccba:
    (*pcVar3)(uVar1,DAT_0001ce8c,&local_c);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar4 = local_c & 0xffffffc7 | 0x30;
LAB_0001ccac:
    (*pcVar3)(*(undefined4 *)(param_1 + 0x14),DAT_0001ce8c,uVar4);
  }
  else {
    uVar4 = (local_10 & 0x7ffffff) >> 0x19;
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    if (uVar4 == 1) {
      (**(code **)(iVar2 + 0x1c))(uVar1,DAT_0001ce8c,&local_c);
      pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
      uVar4 = local_c & 0xffffffc7 | 0x28;
      goto LAB_0001ccac;
    }
    if (uVar4 == 2) {
      pcVar3 = *(code **)(iVar2 + 0x1c);
      goto LAB_0001ccba;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001ce84,DAT_0001ce80);
  printk(DAT_0001ce88,local_14,local_10);
  switch(*(undefined4 *)(param_1 + 0x7ac)) {
  case 0:
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,local_c & 0xfffffff0 | 2);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce94,&local_c);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar4 = local_c & 0xffffffc3 | 8;
    goto LAB_0001cd9c;
  case 1:
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,local_c & 0xfffffff0 | 3);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce94,&local_c);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar4 = local_c & 0xffffffc3 | 0xc;
    break;
  case 2:
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,local_c & 0xfffffff0 | 1);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce94,&local_c);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar4 = local_c & 0xffffffc3 | 4;
    break;
  case 3:
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001cf18,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001cf18,local_c & 0xfffffff0 | 6);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001cf1c,&local_c);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar4 = local_c & 0xffffffc3 | 0x18;
LAB_0001cd9c:
    (*pcVar3)(*(undefined4 *)(param_1 + 0x14),DAT_0001ce94,uVar4);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,&local_c);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar4 = local_c | 0x1000;
    goto LAB_0001cdb8;
  case 4:
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,local_c & 0xfffffff0 | 4);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce94,&local_c);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar4 = local_c & 0xffffffc3 | 0x10;
    break;
  case 5:
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,local_c & 0xfffffff0);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce94,&local_c);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar4 = local_c & 0xffffffc3;
    break;
  case 6:
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,local_c & 0xfffffff0 | 5);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001ce94,&local_c);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar4 = local_c & 0xffffffc3 | 0x14;
    break;
  case 7:
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001cf18,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001cf18,local_c & 0xfffffff0 | 7);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001cf1c,&local_c);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar4 = local_c & 0xffffffc3 | 0x1c;
    break;
  default:
    printk(DAT_0001cf20);
    return;
  }
  (*pcVar3)(*(undefined4 *)(param_1 + 0x14),DAT_0001ce94,uVar4);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,&local_c);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
  uVar4 = local_c & 0xffffefff;
LAB_0001cdb8:
  (*pcVar3)(*(undefined4 *)(param_1 + 0x14),DAT_0001ce90,uVar4);
  return;
}



/* ===== ssv6020_set_crystal_clk @ 0001cf24 size=258 ===== */

void ssv6020_set_crystal_clk(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  local_14 = param_2;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001d02c,DAT_0001d028);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001d034,DAT_0001d030);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001d03c,DAT_0001d038);
  uVar3 = DAT_0001d044;
  local_14 = 0;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001d040,&local_14);
  uVar2 = DAT_0001d04c;
  if ((local_14 & 0x1ffffff) >> 0x17 != 1) {
    uVar2 = DAT_0001d050;
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001d048,uVar2)
  ;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001d054,0xa1a)
  ;
  _ssv6020_set_crystal_clk(param_1);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001d058,&local_14);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001d058,local_14 | 0x80000000);
  do {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x14),uVar3,&local_18);
    if (iVar1 == -1) {
      return;
    }
  } while (local_18 != 0x307);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001d05c,&local_14);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001d05c,local_14 & 0xffff7fff);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001d060,&local_14);
  uVar3 = DAT_0001d068;
  if ((local_14 & 0x10000000) != 0) {
    uVar3 = DAT_0001d064;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
                    (*(undefined4 *)(param_1 + 0x14),DAT_0001d06c,uVar3);
  uVar3 = DAT_0001d044;
  if (iVar1 != -1) {
    do {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                        (*(undefined4 *)(param_1 + 0x14),uVar3,&local_18);
      if (iVar1 == -1) {
        return;
      }
    } while (local_18 != 0x307);
  }
  return;
}



/* ===== ssv6020_reset_hw_mac @ 0001d070 size=394 ===== */

undefined4 ssv6020_reset_hw_mac(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint local_18;
  uint local_14;
  
  local_18 = 0;
  iVar4 = 0x2711;
  local_14 = param_2;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),0xc0000000,2);
  do {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),0xc0000000,&local_18);
    iVar4 = iVar4 + -1;
    uVar1 = DAT_0001d1fc;
    if (iVar4 == 0) goto LAB_0001d09e;
  } while (local_18 != 0);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001d200,&local_14);
  local_18 = local_14 & 0x1f;
  if (local_18 == 8) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,&local_14);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,local_14 & 0xcfffffff | 0x10000000);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,&local_14);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,local_14 & 0xff80ffff | 0x1a0000);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d208,&local_14);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar2 = local_14 & 0xfffffe00 | 0x50;
  }
  else if (local_18 == 0x10) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,&local_14);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,local_14 & 0xcfffffff | 0x20000000);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,&local_14);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,local_14 & 0xff80ffff | 0x340000);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d208,&local_14);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar2 = local_14 & 0xfffffe00 | 0xa0;
  }
  else {
    uVar1 = DAT_0001d20c;
    if (local_18 != 4) {
LAB_0001d09e:
      printk(uVar1);
      return 0xffffffff;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,&local_14);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,local_14 & 0xcfffffff);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,&local_14);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d204,local_14 & 0xff80ffff | 0xd0000);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001d208,&local_14);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar2 = local_14 & 0xfffffe00 | 0x28;
  }
  (*pcVar3)(*(undefined4 *)(param_1 + 0x14),DAT_0001d208,uVar2);
  return 0;
}



/* ===== ssv6020_init_hci_rx_aggr @ 0001d210 size=298 ===== */

undefined4 ssv6020_init_hci_rx_aggr(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  uint local_14;
  
  local_18 = 0;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x7a4) << 0xd < 0) {
    printk(DAT_0001d33c);
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001d340,&local_14);
    local_14 = local_14 | 1;
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001d340);
    }
  }
  if ((*(uint *)(param_1 + 0x7a4) & 0x2000) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001d340,&local_14);
    local_14 = local_14 & 0xfffffffd;
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001d340);
    }
    uVar2 = DAT_0001d344;
    iVar1 = 0x2711;
    do {
      (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                (*(undefined4 *)(param_1 + 0x14),uVar2,&local_18);
      iVar1 = iVar1 + -1;
      local_18 = local_18 & 0xffff;
      if (iVar1 == 0) {
        printk(DAT_0001d348);
        return 0xffffffff;
      }
    } while (local_18 != 0);
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001d340,&local_14);
    local_14 = local_14 | 0x40000000;
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001d340);
    }
    local_18 = *(uint *)(param_1 + 0xcc0) | *(int *)(param_1 + 0xcc8) << 0x10 |
               (uint)*(byte *)(param_1 + 0xcc4) << 7;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001d34c);
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001d350,&local_14);
    local_14 = local_14 & 0xfffe0000 | 10000;
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001d350);
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001d340,&local_14);
    local_14 = local_14 | 2;
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001d340);
    }
    if (*(char *)(param_1 + 0xcc4) == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = 4;
    }
    *(undefined4 *)(param_1 + 0xf5c) = uVar2;
  }
  return 0;
}



/* ===== ssv6020_dump_decision @ 0001d354 size=140 ===== */

undefined4
ssv6020_dump_decision(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  
  uVar1 = DAT_0001d3ec;
  iVar2 = *param_1 + 0x9c0;
  local_1c = param_4;
  snprintf_res(iVar2,DAT_0001d3e0,param_3,param_4,param_1,param_2,param_3);
  iVar5 = 0;
  do {
    iVar3 = iVar5 * 4 + -0x39ffff90;
    (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3,&local_1c);
    iVar4 = iVar5 + 1;
    snprintf_res(iVar2,uVar1,iVar5,iVar3,local_1c,param_2,param_3);
    iVar5 = iVar4;
  } while (iVar4 != 0x10);
  snprintf_res(iVar2,DAT_0001d3e4);
  uVar1 = DAT_0001d3ec;
  iVar5 = 0;
  do {
    iVar3 = iVar5 * 4 + -0x39ffff50;
    (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3,&local_1c);
    iVar4 = iVar5 + 1;
    snprintf_res(iVar2,uVar1,iVar5,iVar3,local_1c);
    iVar5 = iVar4;
  } while (iVar4 != 9);
  snprintf_res(iVar2,DAT_0001d3e8);
  return 0;
}



/* ===== ssv6020_dump_wsid @ 0001d3f0 size=204 ===== */

undefined4 ssv6020_dump_wsid(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_4c;
  undefined4 local_48 [4];
  undefined4 auStack_38 [5];
  
  uVar3 = DAT_0001d4c8;
  uVar2 = DAT_0001d4c4;
  uVar1 = DAT_0001d4c0;
  local_48[0] = *DAT_0001d4bc;
  local_48[1] = DAT_0001d4bc[1];
  local_48[2] = DAT_0001d4bc[2];
  local_48[3] = DAT_0001d4bc[3];
  auStack_38[0] = DAT_0001d4bc[4];
  auStack_38[1] = DAT_0001d4bc[5];
  auStack_38[2] = DAT_0001d4bc[6];
  auStack_38[3] = DAT_0001d4bc[7];
  iVar5 = *param_1 + 0x9c0;
  piVar4 = DAT_0001d4bc + 8;
  iVar6 = 0;
  do {
    iVar8 = *piVar4;
    (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar8,&local_4c);
    iVar7 = iVar6 + 1;
    snprintf_res(iVar5,uVar1,iVar6,local_4c & 1,(local_4c & 3) >> 1,
                 *(undefined4 *)((int)local_48 + (local_4c & 0xc)),
                 auStack_38[(local_4c & 0x3f) >> 4]);
    (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar8 + 4,&local_4c);
    snprintf_res(iVar5,uVar2,local_4c & 0xff,(local_4c & 0xffff) >> 8,(local_4c & 0xffffff) >> 0x10,
                 local_4c >> 0x18);
    (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar8 + 8,&local_4c);
    snprintf_res(iVar5,uVar3,local_4c & 0xff,(local_4c & 0xffff) >> 8);
    piVar4 = piVar4 + 1;
    iVar6 = iVar7;
  } while (iVar7 != 9);
  return 0;
}



/* ===== ssv6020_cmd_hwinfo @ 0001d4cc size=958 ===== */

void ssv6020_cmd_hwinfo(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  iVar5 = *param_1 + 0x9c0;
  uVar4 = DAT_0001d4e8;
  if (1 < param_2) {
    pcVar8 = *(char **)(param_3 + 4);
    iVar3 = strcmp(pcVar8,DAT_0001d77c);
    if (iVar3 == 0) {
      uVar4 = DAT_0001d940;
      if ((param_2 == 3) &&
         (iVar3 = strcmp(*(char **)(param_3 + 8),DAT_0001d780), uVar4 = DAT_0001d940, iVar3 == 0)) {
        snprintf_res(iVar5,DAT_0001d784);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d788,&local_28);
        snprintf_res(iVar5,DAT_0001d78c,(local_28 & 7) >> 1);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d788,&local_28);
        snprintf_res(iVar5,DAT_0001d790,(local_28 & 0xf) >> 3);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d794,&local_28);
        snprintf_res(iVar5,DAT_0001d798,local_28 & 0x7f);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d79c,&local_28);
        snprintf_res(iVar5,DAT_0001d7a0,local_28 & 0x7f);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d788,&local_28);
        snprintf_res(iVar5,DAT_0001d7a4,local_28 & 1);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d788,&local_28);
        uVar2 = local_28._2_2_;
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7a8,&local_28);
        uVar6 = local_28 & 0xffff;
        snprintf_res(iVar5,DAT_0001d7ac);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7b0,&local_28);
        snprintf_res(iVar5,DAT_0001d7b4,local_28 & 1);
        snprintf_res(iVar5,DAT_0001d7b8,uVar2,uVar2);
        snprintf_res(iVar5,DAT_0001d7bc,uVar6,uVar6);
        snprintf_res(iVar5,DAT_0001d7c0);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7b0,&local_28);
        snprintf_res(iVar5,DAT_0001d7c4,(local_28 & 0x3f) >> 5);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7c8,&local_28);
        uVar6 = local_28;
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7cc,&local_28);
        snprintf_res(iVar5,DAT_0001d7d0,uVar6,local_28);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7b0,&local_28);
        snprintf_res(iVar5,DAT_0001d7d4,(local_28 & 3) >> 1);
        snprintf_res(iVar5,DAT_0001d7d8);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7b0,&local_28);
        snprintf_res(iVar5,DAT_0001d7dc,(local_28 & 0xf) >> 3);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7e0,&local_28);
        snprintf_res(iVar5,DAT_0001d7e4,local_28 & 0xff);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7e8,&local_28);
        snprintf_res(iVar5,DAT_0001d7ec,local_28 & 0x3ff);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7f0,&local_28);
        snprintf_res(iVar5,DAT_0001d7f4,local_28 & 0x3ff);
        snprintf_res(iVar5,DAT_0001d7f8);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7b0,&local_28);
        snprintf_res(iVar5,DAT_0001d7fc,(local_28 & 0x3ffff) >> 0x11);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7b0,&local_28);
        snprintf_res(iVar5,DAT_0001d800,local_28._2_2_ & 1);
        snprintf_res(iVar5,DAT_0001d804);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d7e0,&local_28);
        snprintf_res(iVar5,DAT_0001d808,local_28._1_1_);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d80c,&local_28);
        snprintf_res(iVar5,DAT_0001d810,local_28 & 1);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d814,&local_28);
        snprintf_res(iVar5,DAT_0001d818,local_28 & 1);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d81c,&local_28);
        snprintf_res(iVar5,DAT_0001d820,(local_28 & 3) >> 1);
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d81c,&local_28);
        uVar4 = DAT_0001d93c;
        uVar6 = (local_28 & 0xf) >> 3;
LAB_0001d832:
        snprintf_res(iVar5,uVar4,uVar6);
        return;
      }
    }
    else {
      iVar3 = strcmp(pcVar8,DAT_0001d944);
      uVar4 = DAT_0001d4e8;
      if ((iVar3 == 0) && (uVar4 = DAT_0001d970, param_2 == 3)) {
        pcVar8 = *(char **)(param_3 + 8);
        local_28 = strcmp(pcVar8,DAT_0001d948);
        if (local_28 == 0) {
          (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d94c,&local_28);
          uVar4 = DAT_0001d950;
          uVar6 = local_28;
          goto LAB_0001d832;
        }
        uVar6 = strcmp(pcVar8,DAT_0001d954);
        uVar4 = DAT_0001d970;
        if (uVar6 == 0) {
          local_24 = 0;
          local_3c = uVar6;
          local_38 = uVar6;
          local_34 = uVar6;
          local_30 = uVar6;
          local_2c = uVar6;
          local_28 = uVar6;
          (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d958,&local_34);
          uVar4 = DAT_0001d974;
          (**(code **)(param_1[4] + 0x1c))(param_1[5],local_34,&local_30);
          snprintf_res(iVar5,DAT_0001d95c,local_30 & 0xff,(local_30 & 0xffff) >> 8);
          snprintf_res(iVar5,DAT_0001d960,(local_30 & 0xffffff) >> 0x10,local_30 >> 0x18);
          (**(code **)(param_1[4] + 0x1c))(param_1[5],local_34 + 4,&local_2c);
          snprintf_res(iVar5,DAT_0001d964,local_2c);
          uVar1 = local_34;
          (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001d968,&local_3c);
          snprintf_res(iVar5,DAT_0001d96c,uVar1 + 0x20,local_3c);
          for (uVar7 = 0; uVar7 < local_3c; uVar7 = uVar7 + 4) {
            local_24 = 0;
            local_28 = uVar6;
            (**(code **)(param_1[4] + 0x1c))(param_1[5],uVar1 + 0x20 + uVar7,&local_38);
            local_28 = local_38;
            snprintf_res(iVar5,uVar4,&local_28);
          }
          return;
        }
      }
    }
  }
  snprintf_res(iVar5,uVar4);
  return;
}



/* ===== ssv6020_restore_hw_config @ 0001d978 size=80 ===== */

void ssv6020_restore_hw_config(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar5 = *(int *)(param_1 + 0x210);
  iVar4 = 0;
  local_1c = 0;
  pcVar3 = *(code **)(*(int *)(iVar5 + 0x10) + 0x1c);
  uStack_18 = param_3;
  (*pcVar3)(*(undefined4 *)(iVar5 + 0x14),DAT_0001d9c8,&local_1c,pcVar3,param_1);
  iVar1 = _ssv6020_get_sec_key_tbl_addr(param_1);
  puVar6 = (undefined4 *)(iVar5 + 0x3a0);
  do {
    puVar6 = puVar6 + 1;
    local_1c = *puVar6;
    iVar2 = iVar4 + iVar1;
    iVar4 = iVar4 + 4;
    (**(code **)(*(int *)(iVar5 + 0x10) + 0x20))(*(undefined4 *)(iVar5 + 0x14),iVar2);
  } while (iVar4 != 0x2a4);
  memset((void *)(iVar5 + 0x3a4),0,0x400);
  return;
}



/* ===== ssv6020_beacon_loss_config @ 0001d9cc size=322 ===== */

void ssv6020_beacon_loss_config(int *param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_1c;
  
  dbgprint(*param_1 + 0x9c0,*(undefined4 *)(*param_1 + 0x9bc),0x10,DAT_0001db14,DAT_0001db10,param_2
           ,*(undefined1 *)param_3,*(undefined1 *)((int)param_3 + 1),
           *(undefined1 *)((int)param_3 + 2),*(undefined1 *)((int)param_3 + 3),
           *(undefined1 *)(param_3 + 1),*(undefined1 *)((int)param_3 + 5));
  uVar4 = *param_3;
  uVar1 = *(ushort *)(param_3 + 1);
  ssv6020_beacon_loss_disable(param_1);
  iVar2 = DAT_0001db18;
  (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001db18,&local_1c);
  (**(code **)(param_1[4] + 0x20))(param_1[5],iVar2,local_1c & 0xffff | param_2 << 0x10);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar2,&local_1c);
  (**(code **)(param_1[4] + 0x20))(param_1[5],iVar2,local_1c & 0xffffff00 | 10);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar2 + 4,&local_1c);
  iVar3 = iVar2 + -4;
  (**(code **)(param_1[4] + 0x20))(param_1[5],iVar2 + 4,local_1c & 0xffff | 0x800000);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3,&local_1c);
  (**(code **)(param_1[4] + 0x20))(param_1[5],iVar3,local_1c & 0xfffffff7);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3,&local_1c);
  (**(code **)(param_1[4] + 0x20))(param_1[5],iVar3,local_1c & 0xfffffffb);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3,&local_1c);
  (**(code **)(param_1[4] + 0x20))(param_1[5],iVar3,local_1c | 2);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar2 + 0x18,&local_1c);
  (**(code **)(param_1[4] + 0x20))(param_1[5],iVar2 + 0x18,uVar4);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar2 + 0x1c,&local_1c);
  (**(code **)(param_1[4] + 0x20))(param_1[5],iVar2 + 0x1c,local_1c & 0xffff0000 | (uint)uVar1);
  ssv6020_beacon_loss_enable(param_1);
  return;
}



/* ===== ssv6020_free_pbuf @ 0001db1c size=164 ===== */

undefined2 ssv6020_free_pbuf(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_24;
  
  uVar1 = DAT_0001dbc0;
  sVar3 = 0x3e9;
  iVar5 = *(int *)(*(int *)(param_1 + 0x210) + 0xf60);
  iVar7 = param_1;
  do {
    iVar2 = *(int *)(param_1 + 0x210);
    local_24 = 0;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar2 + 0x14),uVar1,&local_24,iVar2,iVar7);
    if ((local_24 & 1) == 0) {
      uVar6 = param_2 >> 0x10 & 0x7f;
      uVar4 = param_2 >> 0x10 | 0x780;
      mutex_lock(param_1 + 0x930);
      printk(DAT_0001dbc4,param_2,uVar4);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
                (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),DAT_0001dbc8,uVar4);
      uVar4 = (uint)*(byte *)(iVar5 + uVar6);
      if (uVar4 != 0) {
        *(uint *)(*(int *)(param_1 + 0x210) + 0x368) =
             *(int *)(*(int *)(param_1 + 0x210) + 0x368) + uVar4;
        *(undefined1 *)(iVar5 + uVar6) = 0;
      }
      mutex_unlock(param_1 + 0x930);
      return 1;
    }
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  printk(DAT_0001dbcc,0x3e9);
  return 0;
}



/* ===== ssv6020_alloc_pbuf @ 0001dbd0 size=192 ===== */

uint ssv6020_alloc_pbuf(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_2c [2];
  
  local_2c[0] = 0;
  mutex_lock(param_1 + 0x930);
  uVar1 = DAT_0001dc98;
  uVar2 = param_2 & 3;
  if (-1 < (int)-param_2) {
    uVar2 = -(-param_2 & 3);
  }
  uVar2 = param_2 + uVar2;
  iVar3 = (int)(param_2 + 0xff) >> 8;
  iVar4 = 0x14;
  do {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),uVar1,uVar2 | param_3 << 0x10);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x1c))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),uVar1,local_2c);
    if (local_2c[0] != 0) break;
    msleep(1);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (param_3 == 1) {
    *(int *)(*(int *)(param_1 + 0x210) + 0x368) =
         *(int *)(*(int *)(param_1 + 0x210) + 0x368) - iVar3;
    *(char *)(*(int *)(*(int *)(param_1 + 0x210) + 0xf60) + (local_2c[0] >> 0x10 & 0x7f)) =
         (char)(param_2 + 0xff >> 8);
  }
  mutex_unlock(param_1 + 0x930);
  if (local_2c[0] == 0) {
    _dev_err(*(undefined4 *)(param_1 + 4),DAT_0001dc90,uVar2,param_3);
  }
  else {
    _dev_info(*(undefined4 *)(param_1 + 4),DAT_0001dc94,param_3,uVar2,iVar3,local_2c[0]);
  }
  return local_2c[0];
}



/* ===== ssv6020_pmu_awake @ 0001dc9c size=178 ===== */

void ssv6020_pmu_awake(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  undefined1 *puVar7;
  
  uVar4 = ssv6xxx_hwif_property(*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14));
  iVar5 = ssv_skb_alloc(param_1,0x46);
  if (iVar5 == 0) {
    printk(DAT_0001dd54,DAT_0001dd50);
    return;
  }
  skb_put(iVar5,0x46);
  puVar7 = *(undefined1 **)(iVar5 + 0xa4);
  memset(puVar7 + 2,0,0xe);
  puVar7[3] = 2;
  puVar7[2] = 5;
  puVar7[1] = 0;
  *puVar7 = 0x46;
  memset(puVar7 + 0x10,0,0x36);
  uVar2 = DAT_0001dd58;
  *(uint *)(puVar7 + 0x10) = (uint)((uVar4 & 2) == 0);
  uVar1 = *(undefined2 *)(param_1 + 0x980);
  puVar7[0x14] = 2;
  puVar7[0x15] = 0;
  *(undefined2 *)(puVar7 + 0x16) = uVar1;
  uVar3 = DAT_0001dd5c;
  puVar7[0x41] = *(undefined1 *)(param_1 + 0x982);
  printk(uVar3,uVar2);
  cVar6 = *(char *)(param_1 + 0x982) + '\x01';
  if (cVar6 != -0x80) {
    *(char *)(param_1 + 0x982) = cVar6;
  }
  if (cVar6 == -0x80) {
    *(undefined1 *)(param_1 + 0x982) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001dd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar5);
  return;
}



/* ===== _ssv6020_set_pairwise_cipher_type @ 0001dd60 size=136 ===== */

undefined4 _ssv6020_set_pairwise_cipher_type(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar1 = ssv_skb_alloc(iVar4,0x38);
  if (iVar1 != 0) {
    skb_put(iVar1,0x38);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined2 *)(puVar3 + 10) = 0;
    puVar3[5] = 0;
    puVar3[2] = puVar3[2] & 0xf8 | 5;
    puVar3[4] = 1;
    puVar3[3] = 0xe;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0xc] = 1;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0xe;
    puVar3[0xf] = 0;
    *puVar3 = 0x38;
    puVar3[1] = 0;
    memset(puVar3 + 0x10,0,0x28);
    puVar3[0x11] = (char)param_3;
    puVar3[0x12] = (char)param_2;
    printk(DAT_0001ddec,DAT_0001dde8,param_3,param_2);
    iVar4 = *(int *)(iVar4 + 0x210);
                    /* WARNING: Could not recover jumptable at 0x0001ddde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x6c))(*(undefined4 *)(iVar4 + 0x14),iVar1);
    return uVar2;
  }
  return 0xfffffff4;
}



/* ===== _ssv6020_write_pairwise_keyidx_to_hw @ 0001ddf0 size=138 ===== */

undefined4 _ssv6020_write_pairwise_keyidx_to_hw(int *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar1 = ssv_skb_alloc(iVar4,0x38);
  if (iVar1 != 0) {
    skb_put(iVar1,0x38);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined2 *)(puVar3 + 10) = 0;
    puVar3[5] = 0;
    puVar3[2] = puVar3[2] & 0xf8 | 5;
    puVar3[4] = 3;
    puVar3[3] = 0xe;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0xc] = 3;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0xe;
    puVar3[0xf] = 0;
    *puVar3 = 0x38;
    puVar3[1] = 0;
    memset(puVar3 + 0x10,0,0x28);
    puVar3[0x11] = param_3;
    puVar3[0x13] = param_2;
    printk(DAT_0001de80,DAT_0001de7c,param_3,param_2);
    iVar4 = *(int *)(iVar4 + 0x210);
                    /* WARNING: Could not recover jumptable at 0x0001de70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x6c))(*(undefined4 *)(iVar4 + 0x14),iVar1);
    return uVar2;
  }
  return 0xfffffff4;
}



/* ===== ssv6020_set_wep_hw_crypto_key @ 0001de84 size=56 ===== */

void ssv6020_set_wep_hw_crypto_key(int param_1,uint *param_2,int param_3)

{
  if ((*param_2 != 0xffffffff) && (*(char *)((int)param_2 + 0x37) == '\0')) {
    _ssv6020_set_pairwise_cipher_type
              (*(undefined4 *)(param_1 + 0x210),*(undefined1 *)(param_3 + 0x24),*param_2 & 0xff);
    _ssv6020_write_pairwise_keyidx_to_hw
              (*(undefined4 *)(param_1 + 0x210),(int)*(char *)(param_3 + 0x21),*param_2);
    *(undefined1 *)((int)param_2 + 0x37) = 1;
  }
  return;
}



/* ===== ssv6020_set_wep_hw_crypto_setting @ 0001debc size=88 ===== */

void ssv6020_set_wep_hw_crypto_setting(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_3 + 4);
  if (uVar3 != 0xffffffff) {
    iVar2 = *param_2;
    iVar1 = *(int *)(param_3 + 8);
    *(undefined1 *)(iVar1 + 0x138) = *(undefined1 *)(iVar2 + 0x2d1);
    *(undefined1 *)(iVar1 + 0x13a) = *(undefined1 *)(iVar2 + 0x2d3);
    *(undefined1 *)(iVar1 + 0x139) = *(undefined1 *)(iVar2 + 0x2d2);
    *(undefined1 *)(iVar1 + 0x13b) = *(undefined1 *)(iVar2 + 0x2d4);
    if (*(char *)(iVar1 + 0x13f) == '\0') {
      _ssv6020_set_pairwise_cipher_type
                (*(undefined4 *)(param_1 + 0x210),*(undefined1 *)(iVar2 + 0x2dc),uVar3 & 0xff,0,
                 param_4);
      _ssv6020_write_pairwise_keyidx_to_hw
                (*(undefined4 *)(param_1 + 0x210),(int)*(char *)(iVar2 + 0x2d9),uVar3);
      *(undefined1 *)(iVar1 + 0x13f) = 1;
    }
  }
  return;
}



/* ===== ssv6020_write_pairwise_keyidx_to_hw @ 0001df14 size=2 ===== */

undefined4 ssv6020_write_pairwise_keyidx_to_hw(int *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar1 = ssv_skb_alloc(iVar4,0x38);
  if (iVar1 != 0) {
    skb_put(iVar1,0x38);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined2 *)(puVar3 + 10) = 0;
    puVar3[5] = 0;
    puVar3[2] = puVar3[2] & 0xf8 | 5;
    puVar3[4] = 3;
    puVar3[3] = 0xe;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0xc] = 3;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0xe;
    puVar3[0xf] = 0;
    *puVar3 = 0x38;
    puVar3[1] = 0;
    memset(puVar3 + 0x10,0,0x28);
    puVar3[0x11] = param_3;
    puVar3[0x13] = param_2;
    printk(DAT_0001de80,DAT_0001de7c,param_3,param_2);
    iVar4 = *(int *)(iVar4 + 0x210);
                    /* WARNING: Could not recover jumptable at 0x0001de70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x6c))(*(undefined4 *)(iVar4 + 0x14),iVar1);
    return uVar2;
  }
  return 0xfffffff4;
}



/* ===== _ssv6020_write_group_keyidx_to_hw @ 0001df16 size=136 ===== */

undefined4 _ssv6020_write_group_keyidx_to_hw(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar1 = ssv_skb_alloc(iVar4,0x38);
  if (iVar1 != 0) {
    skb_put(iVar1,0x38);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined2 *)(puVar3 + 10) = 0;
    puVar3[5] = 0;
    puVar3[2] = puVar3[2] & 0xf8 | 5;
    puVar3[4] = 4;
    puVar3[3] = 0xe;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0xc] = 4;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0xe;
    puVar3[0xf] = 0;
    *puVar3 = 0x38;
    puVar3[1] = 0;
    memset(puVar3 + 0x10,0,0x28);
    puVar3[0x10] = (char)param_3;
    puVar3[0x13] = (char)param_2;
    printk(DAT_0001dfa4,DAT_0001dfa0,param_3,param_2);
    iVar4 = *(int *)(iVar4 + 0x210);
                    /* WARNING: Could not recover jumptable at 0x0001df94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x6c))(*(undefined4 *)(iVar4 + 0x14),iVar1);
    return uVar2;
  }
  return 0xfffffff4;
}



/* ===== ssv6020_write_hw_group_keyidx @ 0001dfa8 size=8 ===== */

void ssv6020_write_hw_group_keyidx(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  _ssv6020_write_group_keyidx_to_hw(param_1,param_3,*param_2);
  return;
}



/* ===== ssv6020_set_mrx_mode @ 0001dfb0 size=108 ===== */

void ssv6020_set_mrx_mode(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = ssv_skb_alloc(*param_1,0x10);
  if (iVar1 == 0) {
    printk(DAT_0001e020,DAT_0001e01c);
    return;
  }
  skb_put(iVar1,0x10);
  puVar2 = memset(*(void **)(iVar1 + 0xa4),0,0x14);
  *(undefined1 *)(puVar2 + 1) = 5;
  *(uint *)(puVar2 + 2) = (uint)(param_2 != 3);
  *(undefined1 *)((int)puVar2 + 3) = 0xb;
  *puVar2 = *(undefined2 *)(iVar1 + 0x50);
  iVar1 = (**(code **)(param_1[4] + 0x6c))(param_1[5],iVar1);
  if (iVar1 != 0) {
    printk(DAT_0001e028,DAT_0001e024);
  }
                    /* WARNING: Could not recover jumptable at 0x0001e01a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_0001e02c,param_2);
  return;
}



/* ===== ssv6020_init_hw_sec_phy_table @ 0001e030 size=90 ===== */

undefined4 ssv6020_init_hw_sec_phy_table(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  iVar1 = ssv_skb_alloc(param_1,0x10);
  if (iVar1 != 0) {
    skb_put(iVar1,0x10);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    memset(puVar3 + 2,0,0x12);
    puVar3[3] = 0xe;
    puVar3[2] = 5;
    puVar3[0xe] = 0xe;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xf] = 0;
    *puVar3 = 0x10;
    puVar3[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001e082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
                      (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
    return uVar2;
  }
  return 0xfffffff4;
}



/* ===== ssv6020_set_bssid @ 0001e08a size=116 ===== */

int ssv6020_set_bssid(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  
  iVar4 = *param_1;
  if (param_3 == 0) {
    *(undefined4 *)(iVar4 + 0x924) = *param_2;
    uVar2 = DAT_0001e104;
    *(undefined2 *)(iVar4 + 0x928) = *(undefined2 *)(param_2 + 1);
    iVar1 = (**(code **)(param_1[4] + 0x20))(param_1[5],uVar2,*(undefined4 *)(iVar4 + 0x924));
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)(iVar4 + 0x928);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 0x20);
      uVar2 = DAT_0001e108;
LAB_0001e0cc:
                    /* WARNING: Could not recover jumptable at 0x0001e0d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (*UNRECOVERED_JUMPTABLE)(param_1[5],uVar2,uVar3);
      return iVar4;
    }
  }
  else if (param_3 == 1) {
    *(undefined4 *)(iVar4 + 0x92a) = *param_2;
    uVar2 = DAT_0001e10c;
    *(undefined2 *)(iVar4 + 0x92e) = *(undefined2 *)(param_2 + 1);
    iVar1 = (**(code **)(param_1[4] + 0x20))(param_1[5],uVar2,*(undefined4 *)(iVar4 + 0x92a));
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)(iVar4 + 0x92e);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 0x20);
      uVar2 = DAT_0001e110;
      goto LAB_0001e0cc;
    }
  }
  else {
    printk(DAT_0001e100,param_3);
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== ssv6020_get_chip_id @ 0001e114 size=86 ===== */

void ssv6020_get_chip_id(int param_1,uint param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  uint local_c;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_c = param_2;
  (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_0001e16c,&local_c,pcVar2,param_1);
  uVar1 = DAT_0001e170;
  *(uint *)(param_1 + 0x44) =
       local_c << 0x18 | (local_c >> 8 & 0xff) << 0x10 | (local_c >> 0x10 & 0xff) << 8 |
       local_c >> 0x18;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar1,&local_c);
  uVar1 = DAT_0001e174;
  *(uint *)(param_1 + 0x48) =
       local_c << 0x18 | (local_c >> 8 & 0xff) << 0x10 | (local_c >> 0x10 & 0xff) << 8 |
       local_c >> 0x18;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar1,&local_c);
  uVar1 = DAT_0001e178;
  *(uint *)(param_1 + 0x4c) =
       local_c << 0x18 | (local_c >> 8 & 0xff) << 0x10 | (local_c >> 0x10 & 0xff) << 8 |
       local_c >> 0x18;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar1,&local_c);
  *(uint *)(param_1 + 0x50) =
       local_c << 0x18 | (local_c >> 8 & 0xff) << 0x10 | (local_c >> 0x10 & 0xff) << 8 |
       local_c >> 0x18;
  *(undefined1 *)(param_1 + 0x54) = 0;
  return;
}



/* ===== ssv6020_set_rx_flow @ 0001e17c size=40 ===== */

undefined4 ssv6020_set_rx_flow(int param_1,int param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar1 = DAT_0001e1a8;
  }
  else if (param_2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar1 = DAT_0001e1a4;
  }
  else {
    if (param_2 != 2) {
      return 1;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar1 = DAT_0001e1ac;
  }
                    /* WARNING: Could not recover jumptable at 0x0001e192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0x14),uVar1);
  return uVar1;
}



/* ===== ssv6020_set_hw_wsid @ 0001e1b0 size=148 ===== */

void ssv6020_set_hw_wsid(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_68 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  if (*(int *)(param_3 + 0x108) < 9) {
    local_68[0] = *(undefined4 *)(DAT_0001e244 + 0x288);
    local_68[1] = *(undefined4 *)(DAT_0001e244 + 0x28c);
    local_68[2] = *(undefined4 *)(DAT_0001e244 + 0x290);
    local_68[3] = *(undefined4 *)(DAT_0001e244 + 0x294);
    local_58 = *(undefined4 *)(DAT_0001e244 + 0x298);
    uStack_54 = *(undefined4 *)(DAT_0001e244 + 0x29c);
    uStack_50 = *(undefined4 *)(DAT_0001e244 + 0x2a0);
    uStack_4c = *(undefined4 *)(DAT_0001e244 + 0x2a4);
    local_48 = *(undefined4 *)(DAT_0001e244 + 0x2a8);
    local_44[0] = *(undefined4 *)(DAT_0001e244 + 0x2ac);
    local_44[1] = *(undefined4 *)(DAT_0001e244 + 0x2b0);
    local_44[2] = *(undefined4 *)(DAT_0001e244 + 0x2b4);
    local_44[3] = *(undefined4 *)(DAT_0001e244 + 0x2b8);
    local_34 = *(undefined4 *)(DAT_0001e244 + 700);
    uStack_30 = *(undefined4 *)(DAT_0001e244 + 0x2c0);
    uStack_2c = *(undefined4 *)(DAT_0001e244 + 0x2c4);
    uStack_28 = *(undefined4 *)(DAT_0001e244 + 0x2c8);
    local_24 = *(undefined4 *)(DAT_0001e244 + 0x2cc);
    iVar1 = DAT_0001e244 + param_4 * 4;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),local_68[param_4],
               *(undefined4 *)(param_3 + 0x14));
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),local_44[param_4],
               *(undefined4 *)(param_3 + 0x18));
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),*(undefined4 *)(iVar1 + 0x130),1);
    *(undefined4 *)(param_4 * 0x18 + param_1 + 0x79c) = *(undefined4 *)(param_3 + 0x108);
  }
  return;
}



/* ===== ssv6020_del_hw_wsid @ 0001e248 size=130 ===== */

void ssv6020_del_hw_wsid(int param_1,int param_2)

{
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if ((param_2 != -1) && (param_2 < 9)) {
    local_60[0] = *(undefined4 *)(DAT_0001e2cc + 0x288);
    local_60[1] = *(undefined4 *)(DAT_0001e2cc + 0x28c);
    local_60[2] = *(undefined4 *)(DAT_0001e2cc + 0x290);
    local_60[3] = *(undefined4 *)(DAT_0001e2cc + 0x294);
    local_50 = *(undefined4 *)(DAT_0001e2cc + 0x298);
    uStack_4c = *(undefined4 *)(DAT_0001e2cc + 0x29c);
    uStack_48 = *(undefined4 *)(DAT_0001e2cc + 0x2a0);
    uStack_44 = *(undefined4 *)(DAT_0001e2cc + 0x2a4);
    local_40 = *(undefined4 *)(DAT_0001e2cc + 0x2a8);
    local_3c[0] = *(undefined4 *)(DAT_0001e2cc + 0x2ac);
    local_3c[1] = *(undefined4 *)(DAT_0001e2cc + 0x2b0);
    local_3c[2] = *(undefined4 *)(DAT_0001e2cc + 0x2b4);
    local_3c[3] = *(undefined4 *)(DAT_0001e2cc + 0x2b8);
    local_2c = *(undefined4 *)(DAT_0001e2cc + 700);
    uStack_28 = *(undefined4 *)(DAT_0001e2cc + 0x2c0);
    uStack_24 = *(undefined4 *)(DAT_0001e2cc + 0x2c4);
    uStack_20 = *(undefined4 *)(DAT_0001e2cc + 0x2c8);
    local_1c = *(undefined4 *)(DAT_0001e2cc + 0x2cc);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),
               *(undefined4 *)(DAT_0001e2cc + param_2 * 4 + 0x130),0);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),local_60[param_2],0);
                    /* WARNING: Could not recover jumptable at 0x0001e2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),local_3c[param_2],0);
    return;
  }
  return;
}



/* ===== ssv6020_pll_chk @ 0001e2d0 size=138 ===== */

void ssv6020_pll_chk(int param_1,uint param_2)

{
  code *pcVar1;
  uint local_c;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_c = param_2;
  (*pcVar1)(*(undefined4 *)(param_1 + 0x14),DAT_0001e35c,&local_c,pcVar1,param_1);
  if ((local_c & 0x1f) != 0x10) {
    (**(code **)(param_1 + 0x318))(param_1);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e360,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e360,local_c & 0xcfffffff | 0x20000000);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e360,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e360,local_c & 0xff80ffff | 0x340000);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e364,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e364,local_c & 0xfffffe00 | 0xa0);
  }
  return;
}



/* ===== ssv6020_fpga_pll_chk @ 0001e368 size=134 ===== */

void ssv6020_fpga_pll_chk(int param_1,uint param_2)

{
  code *pcVar1;
  uint local_c;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_c = param_2;
  (*pcVar1)(*(undefined4 *)(param_1 + 0x14),DAT_0001e3f0,&local_c,pcVar1,param_1);
  if ((local_c & 0x1f) != 4) {
    (**(code **)(param_1 + 0x318))(param_1);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e3f4,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e3f4,local_c & 0xcfffffff);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e3f4,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e3f4,local_c & 0xff80ffff | 0xd0000);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e3f8,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_0001e3f8,local_c & 0xfffffe00 | 0x28);
  }
  return;
}



/* ===== ssv6020_burst_write_reg @ 0001e3fc size=98 ===== */

int ssv6020_burst_write_reg(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ssv6xxx_hwif_property(*(undefined4 *)(param_1 + 0x14));
  if (-1 < iVar1 << 0x1e) {
                    /* WARNING: Could not recover jumptable at 0x0001e458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x28))
                      (*(undefined4 *)(param_1 + 0x14),param_2,param_3,param_4);
    return iVar1;
  }
  iVar2 = 0;
  iVar1 = -1;
  while( true ) {
    if (param_4 <= iVar2) {
      return iVar1;
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
                      (*(undefined4 *)(param_1 + 0x14),*param_2,*(undefined4 *)(param_3 + iVar2 * 4)
                      );
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 1;
    iVar1 = 0;
    param_2 = param_2 + 1;
  }
  printk(DAT_0001e464,DAT_0001e460,*param_2);
  return iVar1;
}



/* ===== ssv6020_burst_read_reg @ 0001e468 size=98 ===== */

int ssv6020_burst_read_reg(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ssv6xxx_hwif_property(*(undefined4 *)(param_1 + 0x14));
  if (-1 < iVar1 << 0x1e) {
                    /* WARNING: Could not recover jumptable at 0x0001e4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x24))
                      (*(undefined4 *)(param_1 + 0x14),param_2,param_3,param_4);
    return iVar1;
  }
  iVar2 = 0;
  iVar1 = -1;
  while( true ) {
    if (param_4 <= iVar2) {
      return iVar1;
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x14),*param_2,param_3 + iVar2 * 4);
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 1;
    iVar1 = 0;
    param_2 = param_2 + 1;
  }
  printk(DAT_0001e4d0,DAT_0001e4cc,*param_2);
  return iVar1;
}



/* ===== ssv6020_set_op_mode @ 0001e4d4 size=94 ===== */

void ssv6020_set_op_mode(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint local_14;
  int iStack_10;
  
  local_14 = param_2;
  iStack_10 = param_3;
  if (param_3 == 0) {
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
    iVar1 = (*pcVar3)(*(undefined4 *)(param_1 + 0x14),DAT_0001e538,&local_14,pcVar3,param_1);
    if (iVar1 != 0) {
      return;
    }
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar2 = DAT_0001e538;
  }
  else {
    if (param_3 != 1) {
      printk(DAT_0001e534,param_3);
      return;
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001e53c,&local_14);
    if (iVar1 != 0) {
      return;
    }
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar2 = DAT_0001e53c;
  }
  local_14 = local_14 & 0xfffffffc | param_2;
  (*pcVar3)(*(undefined4 *)(param_1 + 0x14),uVar2);
  return;
}



/* ===== ssv6020_set_macaddr_2 @ 0001e540 size=82 ===== */

int ssv6020_set_macaddr_2(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001e598,*param_3);
    if (iVar1 == 0) {
      uVar3 = param_3[1];
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
      uVar2 = DAT_0001e59c;
LAB_0001e570:
                    /* WARNING: Could not recover jumptable at 0x0001e576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0x14),uVar2,uVar3);
      return iVar1;
    }
  }
  else if (param_2 == 1) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001e5a0,*param_3);
    if (iVar1 == 0) {
      uVar3 = param_3[1];
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
      uVar2 = DAT_0001e5a4;
      goto LAB_0001e570;
    }
  }
  else {
    printk(DAT_0001e594);
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== ssv6020_set_macaddr @ 0001e5a8 size=88 ===== */

int ssv6020_set_macaddr(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001e604,*(undefined4 *)(param_1 + 0x7bc)
                      );
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x7c0);
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
      uVar2 = DAT_0001e608;
LAB_0001e5da:
                    /* WARNING: Could not recover jumptable at 0x0001e5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0x14),uVar2,uVar3);
      return iVar1;
    }
  }
  else if (param_2 == 1) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
                      (*(undefined4 *)(param_1 + 0x14),DAT_0001e60c,*(undefined4 *)(param_1 + 0x7c2)
                      );
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x7c6);
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
      uVar2 = DAT_0001e610;
      goto LAB_0001e5da;
    }
  }
  else {
    printk(DAT_0001e600);
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== ssv6020_init_mac @ 0001e614 size=566 ===== */

int ssv6020_init_mac(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_28;
  uint local_24;
  undefined4 local_1e;
  undefined2 local_1a;
  
  local_1e = 0;
  local_1a = 0;
  iVar4 = *param_1;
  iVar1 = (*(code *)param_1[0x20])();
  if (iVar1 == 0) {
    iVar2 = (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001e84c,&local_24);
    local_24 = local_24 | 0x20;
    if (iVar2 == 0) {
      (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_0001e84c);
    }
    (**(code **)(param_1[4] + 0x20))
              (param_1[5],DAT_0001e850,
               param_1[0xd9] << 0x18 | param_1[0xd7] << 8 | param_1[0xd8] << 0x10 | 0x50);
    (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001e854,&local_28);
    local_28 = local_28 & 0xfffffff0;
    (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_0001e854);
    (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001e858,&local_24);
    (**(code **)(param_1[4] + 0x20))
              (param_1[5],DAT_0001e858,param_1[0xdf] & 0x1ffU | local_24 & 0xfffffe00);
    (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001e858,&local_24);
    (**(code **)(param_1[4] + 0x20))
              (param_1[5],DAT_0001e858,(param_1[0xe0] & 0xffU) << 0x10 | local_24 & 0xff00ffff);
    (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001e858,&local_24);
    (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_0001e858,local_24 | 0x80000000);
    ssv6020_set_macaddr(param_1,0);
    ssv6020_set_bssid(param_1,&local_1e,0);
    ssv6020_set_bssid(param_1,&local_1e,1);
    uVar3 = DAT_0001e85c;
    if ((param_1[499] & 3U) == 1) {
      uVar3 = 0x104;
    }
    (*(code *)param_1[0x22])(param_1,0,uVar3);
    (*(code *)param_1[0x22])(param_1,1,0x104);
    (*(code *)param_1[0x22])(param_1,2,0x104);
    (*(code *)param_1[0x4e])(param_1,1);
    (**(code **)(*(int *)(iVar4 + 0x210) + 0x140))(iVar4);
    iVar2 = (**(code **)(*(int *)(*(int *)(iVar4 + 0x210) + 0x10) + 0x1c))
                      (*(undefined4 *)(*(int *)(iVar4 + 0x210) + 0x14),DAT_0001e860,&local_24);
    local_24 = local_24 & 0xfffffffc;
    if (iVar2 == 0) {
      (**(code **)(*(int *)(*(int *)(iVar4 + 0x210) + 0x10) + 0x20))
                (*(undefined4 *)(*(int *)(iVar4 + 0x210) + 0x14),DAT_0001e860);
    }
    iVar2 = (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001e860,&local_24);
    local_24 = local_24 | 0x800000;
    if (iVar2 == 0) {
      (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_0001e860);
    }
    iVar2 = (**(code **)(*(int *)(*(int *)(iVar4 + 0x210) + 0x10) + 0x1c))
                      (*(undefined4 *)(*(int *)(iVar4 + 0x210) + 0x14),DAT_0001e864,&local_24);
    local_24 = local_24 & 0xfffffff0;
    if (iVar2 == 0) {
      (**(code **)(*(int *)(*(int *)(iVar4 + 0x210) + 0x10) + 0x20))
                (*(undefined4 *)(*(int *)(iVar4 + 0x210) + 0x14),DAT_0001e864);
    }
    (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001e868,&local_24);
    (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_0001e868,local_24 | 1);
    (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_0001e86c,param_1[0x32e]);
    (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001e870,&local_24);
    (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_0001e870,local_24 & 0xffffffef);
    (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001e874,&local_24);
    (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_0001e874,local_24 | 2);
  }
  return iVar1;
}



/* ===== ssv6020_cmd_power_saving @ 0001e878 size=60 ===== */

void ssv6020_cmd_power_saving(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iStack_14;
  int iStack_10;
  
  iStack_14 = param_2;
  iStack_10 = param_3;
  if (param_2 == 3) {
    uVar2 = simple_strtoul(*(undefined4 *)(param_3 + 4),&iStack_14,10);
    *(undefined2 *)(param_1 + 0x980) = uVar2;
    uVar1 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_14,10);
    ssv6xxx_trigger_pmu(param_1,uVar1,0);
  }
  else {
    snprintf_res(param_1 + 0x9c0,DAT_0001e8b4,param_3,param_4,param_1);
  }
  return;
}



/* ===== ssv6020_set_aes_tkip_hw_crypto_group_key @ 0001e8b8 size=72 ===== */

void ssv6020_set_aes_tkip_hw_crypto_group_key(int param_1,int param_2,int param_3,char *param_4)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = *param_4;
  if (*(int *)(param_3 + 4) == -1) {
    return;
  }
  if (cVar2 == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1e8c8);
    (*pcVar1)();
  }
  printk(DAT_0001e904,cVar2);
  if (*(undefined4 **)(param_2 + 4) == (undefined4 *)0x0) {
    _dev_err(*(undefined4 *)(param_1 + 4),DAT_0001e908);
    return;
  }
  _dev_info(*(undefined4 *)(param_1 + 4),DAT_0001e90c,cVar2,**(undefined4 **)(param_2 + 4));
  _ssv6020_write_group_keyidx_to_hw
            (*(undefined4 *)(param_1 + 0x210),cVar2,**(undefined4 **)(param_2 + 4));
  return;
}



/* ===== ssv6020_set_usb_lpm @ 0001e910 size=2 ===== */

void ssv6020_set_usb_lpm(void)

{
  return;
}



/* ===== ssv6020_ps_restore_rx_flow @ 0001e912 size=2 ===== */

void ssv6020_ps_restore_rx_flow(void)

{
  return;
}



/* ===== ssv6020_jump_to_rom @ 0001e914 size=4 ===== */

undefined4 ssv6020_jump_to_rom(void)

{
  return 0;
}



/* ===== ssv6020_set_sram_mode @ 0001e918 size=2 ===== */

void ssv6020_set_sram_mode(void)

{
  return;
}



/* ===== ssv6020_get_sram_mode @ 0001e91a size=4 ===== */

undefined4 ssv6020_get_sram_mode(void)

{
  return 1;
}



/* ===== ssv6020_disable_usb_acc @ 0001e91e size=2 ===== */

void ssv6020_disable_usb_acc(void)

{
  return;
}



/* ===== ssv6020_init_gpio_cfg @ 0001e920 size=2 ===== */

void ssv6020_init_gpio_cfg(void)

{
  return;
}



/* ===== ssv6020_wait_usb_rom_ready @ 0001e922 size=2 ===== */

void ssv6020_wait_usb_rom_ready(void)

{
  return;
}



/* ===== ssv6020_detach_usb_hci @ 0001e924 size=2 ===== */

void ssv6020_detach_usb_hci(void)

{
  return;
}



/* ===== ssv6020_read_efuse @ 0001e926 size=412 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 ssv6020_read_efuse(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_30;
  uint local_2c [8];
  
  local_30 = 0;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  local_2c[4] = 0;
  local_2c[5] = 0;
  local_2c[6] = 0;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001eac4,local_2c + 6);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001eac8,&local_30);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001eacc,local_2c);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001ead0,local_2c + 1);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001ead4,local_2c + 2);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001ead8,local_2c + 3);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001eadc,local_2c + 4);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x14),DAT_0001eae0,local_2c + 5);
  *(uint *)(param_1 + 0x7ec) = local_2c[6];
  *(char *)((int)param_2 + 3) = (char)local_2c[3];
  *(char *)param_2 = (char)(local_2c[3] >> 0x18);
  *(char *)((int)param_2 + 1) = (char)(local_2c[3] >> 0x10);
  *(char *)((int)param_2 + 2) = (char)(local_2c[3] >> 8);
  *(char *)(param_2 + 1) = (char)(local_2c[2] >> 0x18);
  *(char *)((int)param_2 + 5) = (char)(local_2c[2] >> 0x10);
  if (((int)(*param_2 << 0x1f) < 0) || (*param_2 == 0 && (short)param_2[1] == 0)) {
    *(char *)((int)param_2 + 1) = (char)local_2c[2];
    *(char *)param_2 = (char)(local_2c[2] >> 8);
    *(char *)((int)param_2 + 2) = (char)(local_2c[1] >> 0x18);
    *(char *)((int)param_2 + 3) = (char)(local_2c[1] >> 0x10);
    *(char *)(param_2 + 1) = (char)(local_2c[1] >> 8);
    *(char *)((int)param_2 + 5) = (char)local_2c[1];
    uVar1 = *(uint *)(param_1 + 0x358);
    if (((*param_2 & 1) != 0) || (*param_2 == 0 && (short)param_2[1] == 0)) {
      uVar1 = uVar1 & 0xfffffff7;
      goto LAB_0001e9d4;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x358);
  }
  uVar1 = uVar1 | 8;
LAB_0001e9d4:
  *(uint *)(param_1 + 0x358) = uVar1;
  uVar1 = local_2c[0] >> 0x18;
  if ((uVar1 == 0) && (uVar1 = local_30 >> 0x18, uVar1 == 0)) {
    uVar2 = *(uint *)(param_1 + 0x358) & 0xffffefff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x358) | 0x1000;
  }
  *(uint *)(param_1 + 0x7f0) = uVar1;
  uVar1 = (local_2c[0] & 0xffffff) >> 0x10;
  *(uint *)(param_1 + 0x358) = uVar2;
  if ((uVar1 == 0) && (uVar1 = local_30 >> 0x10 & 0xff, uVar1 == 0)) {
    uVar2 = *(uint *)(param_1 + 0x358) & 0xffffdfff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x358) | 0x2000;
  }
  *(uint *)(param_1 + 0x7f4) = uVar1;
  uVar1 = (local_2c[0] & 0xffff) >> 8;
  *(uint *)(param_1 + 0x358) = uVar2;
  if ((uVar1 == 0) && (uVar1 = local_30 >> 8 & 0xff, uVar1 == 0)) {
    uVar2 = *(uint *)(param_1 + 0x358) & 0xffffffdf;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x358) | 0x20;
  }
  local_2c[0] = local_2c[0] & 0xff;
  *(uint *)(param_1 + 0x358) = uVar2;
  *(uint *)(param_1 + 0x7e4) = uVar1;
  if ((local_2c[0] == 0) && (local_2c[0] = local_30 & 0xff, local_2c[0] == 0)) {
    uVar1 = *(uint *)(param_1 + 0x358) & 0xffffffef;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x358) | 0x10;
  }
  *(uint *)(param_1 + 0x7e0) = local_2c[0];
  *(uint *)(param_1 + 0x358) = uVar1;
  if ((local_2c[5] == 0) && (local_2c[5] = local_2c[4], local_2c[4] == 0)) {
    uVar1 = *(uint *)(param_1 + 0x358) & 0xffffbfff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x358) | 0x4000;
  }
  *(uint *)(param_1 + 0x358) = uVar1;
  *(uint *)(param_1 + 0x7f8) = local_2c[5];
  return 0;
}



/* ===== ssv6020_set_wmm_param @ 0001eae4 size=498 ===== */

void ssv6020_set_wmm_param(int param_1,ushort *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint local_20;
  ushort *local_1c;
  
  iVar1 = *(int *)(param_1 + 0x210);
  local_20 = 0;
  local_1c = param_2;
  if (*(char *)(iVar1 + 0xd39) == '\0') {
    iVar4 = DAT_0001ecec + (*(uint *)(param_1 + param_3 * 4 + 0x218) & 0xff) * 0x100;
    uVar3 = (0x1f - LZCOUNT(param_2[2] + 1)) * 0x1000 & 0xffffU |
            (0x1f - LZCOUNT(param_2[1] + 1)) * 0x100 & 0xf00U |
            (*param_2 & 0xff) << 0x10 | (byte)param_2[3] & 0xf;
    if (*(char *)(iVar1 + 0xd38) == '\0') {
      (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))(*(undefined4 *)(iVar1 + 0x14),iVar4,uVar3);
      return;
    }
    if (param_3 == 0) {
      iVar1 = 4;
      do {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
                  (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar4,uVar3);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return;
    }
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ecec + *(int *)(param_1 + 0x218) * 0x100,
               &local_20);
    iVar1 = *(int *)(param_1 + 0x210);
    if (local_20 == 0) {
      pcVar2 = *(code **)(*(int *)(iVar1 + 0x10) + 0x20);
    }
    else {
      pcVar2 = *(code **)(*(int *)(iVar1 + 0x10) + 0x20);
      uVar3 = local_20;
    }
  }
  else {
    printk(DAT_0001ecdc,0,DAT_0001ecd8);
    uVar3 = DAT_0001ece4;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ece0,&local_1c);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ece0,(uint)local_1c & 0xfffffff8 | 4);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ece8,&local_1c);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ece8,(uint)local_1c & uVar3);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),DAT_0001ecec,DAT_0001ecd8);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ecf0,&local_1c);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ecf0,(uint)local_1c & 0xfffffff8 | 4);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ecf4,&local_1c);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ecf4,(uint)local_1c & uVar3);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),DAT_0001ecf8,DAT_0001ecd8);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ecfc,&local_1c);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ecfc,(uint)local_1c & 0xfffffff8 | 4);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ed00,&local_1c);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ed00,(uint)local_1c & uVar3);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x20))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),DAT_0001ed04,DAT_0001ecd8);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ed08,&local_1c);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ed08,(uint)local_1c & 0xfffffff8 | 4);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ed0c,&local_1c);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))
              (*(undefined4 *)(iVar1 + 0x14),DAT_0001ed0c,(uint)local_1c & uVar3);
    iVar1 = *(int *)(param_1 + 0x210);
    pcVar2 = *(code **)(*(int *)(iVar1 + 0x10) + 0x20);
    iVar4 = DAT_0001ed10;
    uVar3 = DAT_0001ecd8;
  }
  (*pcVar2)(*(undefined4 *)(iVar1 + 0x14),iVar4,uVar3);
  return;
}



/* ===== ssv6020_reset_mib_mac @ 0001ed14 size=42 ===== */

void ssv6020_reset_mib_mac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001ed40;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_0001ed40,0);
  msleep(1);
                    /* WARNING: Could not recover jumptable at 0x0001ed3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),uVar1,0xffffffff);
  return;
}



/* ===== ssv6020_cmd_mib @ 0001ed44 size=1130 ===== */

void ssv6020_cmd_mib(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *__s1;
  int *piVar6;
  int iVar7;
  uint local_1c;
  
  iVar7 = param_1 + 0x9c0;
  uVar4 = DAT_0001f310;
  local_1c = param_4;
  if (param_2 == 2) {
    __s1 = *(char **)(param_3 + 4);
    iVar3 = strcmp(__s1,DAT_0001efb4);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x210);
      ssv6020_reset_mib_mac(iVar3);
      (**(code **)(iVar3 + 0x2d4))(iVar3);
      uVar4 = DAT_0001efb8;
    }
    else {
      iVar3 = strcmp(__s1,DAT_0001efbc);
      uVar2 = DAT_0001efc4;
      uVar1 = DAT_0001efc0;
      if (iVar3 == 0) {
        piVar6 = *(int **)(param_1 + 0x210);
        iVar7 = *piVar6 + 0x9c0;
        uVar5 = 0;
        do {
          iVar3 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],iVar3 + -0x35fff800,&local_1c);
          snprintf_res(iVar7,uVar1,local_1c);
          if ((uVar5 & 7) == 0) {
            snprintf_res(iVar7,uVar2);
          }
          uVar4 = DAT_0001efc4;
        } while (uVar5 != 0x78);
      }
      else {
        iVar3 = strcmp(__s1,DAT_0001efc8);
        if (iVar3 == 0) {
          piVar6 = *(int **)(param_1 + 0x210);
          iVar7 = *piVar6 + 0x9c0;
          snprintf_res(iVar7,DAT_0001efcc);
          snprintf_res(iVar7,DAT_0001efd8,DAT_0001efd4,DAT_0001efe0,DAT_0001efdc,DAT_0001efd0,
                       param_3);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001efe4,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001efec,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001eff0,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001eff4,&local_1c);
          snprintf_res(iVar7,DAT_0001eff8,local_1c);
          snprintf_res(iVar7,DAT_0001effc);
          snprintf_res(iVar7,DAT_0001efd8,DAT_0001f004,DAT_0001f00c,DAT_0001f008,DAT_0001f000);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f010,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f014,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f018,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f01c,&local_1c);
          snprintf_res(iVar7,DAT_0001f020,local_1c);
          snprintf_res(iVar7,DAT_0001efd8,DAT_0001f028,DAT_0001f030,DAT_0001f02c,DAT_0001f024);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f034,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f038,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f03c,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f040,&local_1c);
          snprintf_res(iVar7,DAT_0001f020,local_1c);
          snprintf_res(iVar7,DAT_0001efd8,DAT_0001f048,DAT_0001f050,DAT_0001f04c,DAT_0001f044);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f054,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f058,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f05c,&local_1c);
          snprintf_res(iVar7,DAT_0001efe8,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f060,&local_1c);
          snprintf_res(iVar7,DAT_0001eff8,local_1c);
          (*(code *)piVar6[0xb6])(piVar6);
          return;
        }
        iVar3 = strcmp(__s1,DAT_0001f260);
        uVar4 = DAT_0001f310;
        if (iVar3 == 0) {
          piVar6 = *(int **)(param_1 + 0x210);
          iVar7 = *piVar6 + 0x9c0;
          snprintf_res(iVar7,DAT_0001f264);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f268,&local_1c);
          uVar5 = local_1c;
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f26c,&local_1c);
          snprintf_res(iVar7,DAT_0001f274,DAT_0001f270,uVar5,DAT_0001f278,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f27c,&local_1c);
          uVar5 = local_1c;
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f280,&local_1c);
          snprintf_res(iVar7,DAT_0001f274,DAT_0001f284,uVar5,DAT_0001f288,local_1c);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f28c,&local_1c);
          snprintf_res(iVar7,DAT_0001f294,DAT_0001f290,local_1c);
          snprintf_res(iVar7,DAT_0001f298);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f29c,&local_1c);
          uVar5 = local_1c;
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2a0,&local_1c);
          snprintf_res(iVar7,DAT_0001f2a8,DAT_0001f2a4,uVar5 & 0xfffff,DAT_0001f2ac,
                       local_1c & 0xffff);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2b0,&local_1c);
          uVar5 = local_1c;
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2b4,&local_1c);
          snprintf_res(iVar7,DAT_0001f2a8,DAT_0001f2bc,uVar5 & 0xfffff,DAT_0001f2b8,
                       local_1c & 0xfffff);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2c0,&local_1c);
          uVar5 = local_1c;
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2c4,&local_1c);
          snprintf_res(iVar7,DAT_0001f2a8,DAT_0001f2c8,uVar5 & 0xffff,DAT_0001f2cc,local_1c & 0xffff
                      );
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2d0,&local_1c);
          uVar5 = local_1c;
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2d4,&local_1c);
          snprintf_res(iVar7,DAT_0001f2a8,DAT_0001f2dc,uVar5 & 0xffff,DAT_0001f2d8,
                       local_1c & 0xfffff);
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2e0,&local_1c);
          uVar5 = local_1c;
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2e4,&local_1c);
          snprintf_res(iVar7,DAT_0001f2a8,DAT_0001f2e8,uVar5 & 0xffff,DAT_0001f2ec,local_1c & 0xffff
                      );
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2f0,&local_1c);
          uVar5 = local_1c;
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f2f4,&local_1c);
          snprintf_res(iVar7,DAT_0001f2a8,DAT_0001f2f8,uVar5 & 0xffff,DAT_0001f2fc,local_1c & 0xffff
                      );
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f300,&local_1c);
          uVar5 = local_1c;
          (**(code **)(piVar6[4] + 0x1c))(piVar6[5],DAT_0001f304,&local_1c);
          snprintf_res(iVar7,DAT_0001f2a8,DAT_0001f308,uVar5 & 0xffff,DAT_0001f30c,local_1c & 0xffff
                      );
          return;
        }
      }
    }
  }
  snprintf_res(iVar7,uVar4);
  return;
}



/* ===== ssv_attach_ssv6020_mac @ 0001f314 size=554 ===== */

void ssv_attach_ssv6020_mac(int param_1)

{
  *(undefined4 *)(param_1 + 8) = DAT_0001f540;
  *(undefined4 *)(param_1 + 0xc) = DAT_0001f544;
  *(undefined4 *)(param_1 + 0x14) = DAT_0001f548;
  *(undefined4 *)(param_1 + 0x18) = DAT_0001f54c;
  *(undefined4 *)(param_1 + 0x20) = DAT_0001f550;
  *(undefined4 *)(param_1 + 0x24) = DAT_0001f554;
  *(undefined4 *)(param_1 + 0x28) = DAT_0001f558;
  *(undefined4 *)(param_1 + 0x2c) = DAT_0001f55c;
  *(undefined4 *)(param_1 + 0x30) = DAT_0001f560;
  *(undefined4 *)(param_1 + 0x34) = DAT_0001f564;
  *(undefined4 *)(param_1 + 0x38) = DAT_0001f568;
  *(undefined4 *)(param_1 + 0xe0) = DAT_0001f56c;
  *(undefined4 *)(param_1 + 0xe4) = DAT_0001f570;
  *(undefined4 *)(param_1 + 0x40) = DAT_0001f574;
  *(undefined4 *)(param_1 + 0x44) = DAT_0001f578;
  *(undefined4 *)(param_1 + 0x54) = DAT_0001f57c;
  *(undefined4 *)(param_1 + 0x58) = DAT_0001f580;
  *(undefined4 *)(param_1 + 0x7c) = DAT_0001f584;
  *(undefined4 *)(param_1 + 0x88) = DAT_0001f588;
  *(undefined4 *)(param_1 + 0x8c) = DAT_0001f58c;
  *(undefined4 *)(param_1 + 0x80) = DAT_0001f590;
  *(undefined4 *)(param_1 + 0x84) = DAT_0001f594;
  *(undefined4 *)(param_1 + 0x90) = DAT_0001f598;
  *(undefined4 *)(param_1 + 0x98) = DAT_0001f59c;
  *(undefined4 *)(param_1 + 0x94) = DAT_0001f5a0;
  *(undefined4 *)(param_1 + 0xac) = DAT_0001f5a4;
  *(undefined4 *)(param_1 + 0xa8) = DAT_0001f5a8;
  *(undefined4 *)(param_1 + 0xb8) = DAT_0001f5ac;
  *(undefined4 *)(param_1 + 0xbc) = DAT_0001f5b0;
  *(undefined4 *)(param_1 + 0xc0) = DAT_0001f5b4;
  *(undefined4 *)(param_1 + 0xc4) = DAT_0001f5b8;
  *(undefined4 *)(param_1 + 200) = DAT_0001f5bc;
  *(undefined4 *)(param_1 + 0xcc) = DAT_0001f5c0;
  *(undefined4 *)(param_1 + 0xd0) = DAT_0001f5c4;
  *(undefined4 *)(param_1 + 0xd4) = DAT_0001f5c8;
  *(undefined4 *)(param_1 + 0xd8) = DAT_0001f5cc;
  *(undefined4 *)(param_1 + 0xdc) = DAT_0001f5d0;
  *(undefined4 *)(param_1 + 0xe8) = DAT_0001f5d4;
  *(undefined4 *)(param_1 + 0xec) = DAT_0001f5d8;
  *(undefined4 *)(param_1 + 0xf0) = DAT_0001f5dc;
  *(undefined4 *)(param_1 + 0xf4) = DAT_0001f5e0;
  *(undefined4 *)(param_1 + 0xf8) = DAT_0001f5e4;
  *(undefined4 *)(param_1 + 0xfc) = DAT_0001f5e8;
  *(undefined4 *)(param_1 + 0x100) = DAT_0001f5ec;
  *(undefined4 *)(param_1 + 0x10c) = DAT_0001f5f0;
  *(undefined4 *)(param_1 + 0x110) = DAT_0001f5f4;
  *(undefined4 *)(param_1 + 0x114) = DAT_0001f5f8;
  *(undefined4 *)(param_1 + 0x118) = DAT_0001f5fc;
  *(undefined4 *)(param_1 + 0x11c) = DAT_0001f600;
  *(undefined4 *)(param_1 + 0x120) = DAT_0001f604;
  *(undefined4 *)(param_1 + 0x128) = DAT_0001f608;
  *(undefined4 *)(param_1 + 300) = DAT_0001f60c;
  *(undefined4 *)(param_1 + 0x130) = DAT_0001f610;
  *(undefined4 *)(param_1 + 0x134) = DAT_0001f614;
  *(undefined4 *)(param_1 + 0x138) = DAT_0001f618;
  *(undefined4 *)(param_1 + 0x13c) = DAT_0001f61c;
  *(undefined4 *)(param_1 + 0x140) = DAT_0001f620;
  *(undefined4 *)(param_1 + 0x144) = DAT_0001f624;
  *(undefined4 *)(param_1 + 0x148) = DAT_0001f628;
  *(undefined4 *)(param_1 + 0x14c) = DAT_0001f62c;
  *(undefined4 *)(param_1 + 0x150) = DAT_0001f630;
  *(undefined4 *)(param_1 + 0x154) = DAT_0001f634;
  *(undefined4 *)(param_1 + 0x158) = DAT_0001f638;
  *(undefined4 *)(param_1 + 0x15c) = DAT_0001f63c;
  *(undefined4 *)(param_1 + 0x160) = DAT_0001f640;
  *(undefined4 *)(param_1 + 0x164) = DAT_0001f644;
  *(undefined4 *)(param_1 + 0x168) = DAT_0001f648;
  *(undefined4 *)(param_1 + 0x16c) = DAT_0001f64c;
  *(undefined4 *)(param_1 + 0x170) = DAT_0001f650;
  *(undefined4 *)(param_1 + 0x174) = DAT_0001f654;
  *(undefined4 *)(param_1 + 0x178) = DAT_0001f658;
  *(undefined4 *)(param_1 + 400) = DAT_0001f65c;
  *(undefined4 *)(param_1 + 0x194) = DAT_0001f660;
  *(undefined4 *)(param_1 + 0x198) = DAT_0001f664;
  *(undefined4 *)(param_1 + 0x19c) = DAT_0001f668;
  *(undefined4 *)(param_1 + 0x1a0) = DAT_0001f66c;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0001f670;
  *(undefined4 *)(param_1 + 0x1a8) = DAT_0001f674;
  *(undefined4 *)(param_1 + 0x1ac) = DAT_0001f678;
  *(undefined4 *)(param_1 + 0x1b0) = DAT_0001f67c;
  *(undefined4 *)(param_1 + 0x1b4) = DAT_0001f680;
  *(undefined4 *)(param_1 + 0x1b8) = DAT_0001f684;
  *(undefined4 *)(param_1 + 0x1bc) = DAT_0001f688;
  *(undefined4 *)(param_1 + 0x1c0) = DAT_0001f68c;
  *(undefined4 *)(param_1 + 0x2d4) = DAT_0001f690;
  *(undefined4 *)(param_1 + 0x1c4) = DAT_0001f694;
  *(undefined4 *)(param_1 + 0x1c8) = DAT_0001f698;
  *(undefined4 *)(param_1 + 0x1cc) = DAT_0001f69c;
  *(undefined4 *)(param_1 + 0x1d0) = DAT_0001f6a0;
  *(undefined4 *)(param_1 + 0x4c) = DAT_0001f6a4;
  *(undefined4 *)(param_1 + 0x2cc) = DAT_0001f6a8;
  *(undefined4 *)(param_1 + 0x1e4) = DAT_0001f6ac;
  *(undefined4 *)(param_1 + 0x1e8) = DAT_0001f6b0;
  *(undefined4 *)(param_1 + 0x1ec) = DAT_0001f6b4;
  *(undefined4 *)(param_1 + 0x1f0) = DAT_0001f6b8;
  *(undefined4 *)(param_1 + 500) = DAT_0001f6bc;
  *(undefined4 *)(param_1 + 0x48) = DAT_0001f6c0;
  *(undefined4 *)(param_1 + 0x2d0) = DAT_0001f6c4;
  return;
}



/* ===== ssv_attach_ssv6020_fpga_mac @ 0001f6c8 size=12 ===== */

void ssv_attach_ssv6020_fpga_mac(int param_1)

{
  *(undefined4 *)(param_1 + 0x1ec) = DAT_0001f6d4;
  *(undefined4 *)(param_1 + 0x48) = DAT_0001f6d8;
  return;
}



/* ===== ssv_attach_ssv6020 @ 0001f6dc size=144 ===== */

void ssv_attach_ssv6020(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  ssv_hwif_read_reg(param_1,DAT_0001f76c,&uStack_14,param_4,param_1);
  ssv_hwif_read_reg(param_1,DAT_0001f770,&uStack_14);
  printk(DAT_0001f774);
  ssv_attach_ssv6020_common(param_2);
  printk(DAT_0001f778);
  ssv_attach_ssv6020_mac(param_2);
  printk(DAT_0001f77c);
  ssv_attach_ssv6020_phy(param_2);
  printk(DAT_0001f780);
  ssv_attach_ssv6020_turismoE_BBRF(param_2);
  ssv_hwif_read_reg(param_1,DAT_0001f784,&uStack_14);
  cVar2 = uStack_14._3_1_;
  printk(DAT_0001f788,uStack_14._3_1_);
  if (cVar2 == -0x60) {
    printk(DAT_0001f78c);
    ssv_attach_ssv6020_turismoE_ext_BBRF(param_2);
  }
  else {
    printk(DAT_0001f790);
    uVar1 = DAT_0001f798;
    *(undefined4 *)(param_2 + 0x1ec) = DAT_0001f794;
    *(undefined4 *)(param_2 + 0x48) = DAT_0001f79c;
    printk(uVar1);
    ssv_attach_ssv6020_turismoE_fpga_BBRF(param_2);
  }
  return;
}



/* ===== ssv_read_mib_tx_cnt @ 0001f7a0 size=22 ===== */

undefined4 ssv_read_mib_tx_cnt(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_c = param_2;
  uStack_8 = param_3;
  (*pcVar1)(*(undefined4 *)(param_1 + 0x14),DAT_0001f7b8,&local_c,pcVar1,param_1);
  return local_c;
}



/* ===== ssv6020_update_ampdu_txinfo @ 0001f7bc size=12 ===== */

void ssv6020_update_ampdu_txinfo(int param_1,int param_2)

{
  *(undefined1 *)(*(int *)(param_2 + 0xa4) + 0xd) = *(undefined1 *)(param_1 + 0xc10);
  return;
}



/* ===== ssv6020_get_tx_desc_size @ 0001f7c8 size=4 ===== */

undefined4 ssv6020_get_tx_desc_size(void)

{
  return 0x50;
}



/* ===== ssv6020_get_tx_desc_ctype @ 0001f7cc size=12 ===== */

byte ssv6020_get_tx_desc_ctype(int param_1)

{
  return *(byte *)(*(int *)(param_1 + 0xa4) + 2) & 7;
}



/* ===== ssv6020_get_tx_desc_reason @ 0001f7d8 size=10 ===== */

byte ssv6020_get_tx_desc_reason(int param_1)

{
  return *(byte *)(*(int *)(param_1 + 0xa4) + 0xb) >> 2;
}



/* ===== ssv6020_get_tx_desc_wsid @ 0001f7e2 size=12 ===== */

uint ssv6020_get_tx_desc_wsid(int param_1)

{
  return (*(byte *)(*(int *)(param_1 + 0xa4) + 0xe) & 0x7f) >> 3;
}



/* ===== ssv6020_get_tx_desc_txq_idx @ 0001f7ee size=12 ===== */

uint ssv6020_get_tx_desc_txq_idx(int param_1)

{
  return (*(ushort *)(*(int *)(param_1 + 0xa4) + 0xe) & 0x3ff) >> 7;
}



/* ===== ssv6020_get_tkip_mmic_err @ 0001f7fa size=12 ===== */

uint ssv6020_get_tkip_mmic_err(int param_1)

{
  return (uint)(int)*(char *)(*(int *)(param_1 + 0xa4) + 0xe) >> 0x1f;
}



/* ===== ssv6020_get_rx_desc_wsid @ 0001f806 size=12 ===== */

uint ssv6020_get_rx_desc_wsid(int param_1)

{
  return (*(byte *)(*(int *)(param_1 + 0xa4) + 0xe) & 0x7f) >> 3;
}



/* ===== ssv6020_get_rx_desc_rate_idx @ 0001f812 size=8 ===== */

undefined1 ssv6020_get_rx_desc_rate_idx(int param_1)

{
  return *(undefined1 *)(*(int *)(param_1 + 0xa4) + 0x12);
}



/* ===== ssv6020_get_rx_desc_mng_used @ 0001f81a size=12 ===== */

byte ssv6020_get_rx_desc_mng_used(int param_1)

{
  return *(byte *)(*(int *)(param_1 + 0xa4) + 4) & 0xf;
}



/* ===== ssv6020_is_rx_aggr @ 0001f826 size=12 ===== */

uint ssv6020_is_rx_aggr(int param_1)

{
  return (*(byte *)(*(int *)(param_1 + 0xa4) + 0x13) & 7) >> 2;
}



/* ===== ssv6020_get_rx_desc_info_hdr @ 0001f832 size=20 ===== */

void ssv6020_get_rx_desc_info_hdr(ushort *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  *param_2 = (uint)*param_1;
  *param_3 = (byte)param_1[1] & 7;
  *param_4 = (uint)*(byte *)((int)param_1 + 0xd);
  return;
}



/* ===== ssv6020_get_rx_desc_ctype @ 0001f846 size=12 ===== */

byte ssv6020_get_rx_desc_ctype(int param_1)

{
  return *(byte *)(*(int *)(param_1 + 0xa4) + 2) & 7;
}



/* ===== ssv6020_get_rx_desc_hdr_offset @ 0001f852 size=8 ===== */

undefined1 ssv6020_get_rx_desc_hdr_offset(int param_1)

{
  return *(undefined1 *)(*(int *)(param_1 + 0xa4) + 8);
}



/* ===== ssv6020_get_rx_desc_phy_rssi @ 0001f85a size=8 ===== */

undefined1 ssv6020_get_rx_desc_phy_rssi(int param_1)

{
  return *(undefined1 *)(*(int *)(param_1 + 0xa4) + 0x16);
}



/* ===== ssv6020_nullfun_frame_filter @ 0001f862 size=16 ===== */

bool ssv6020_nullfun_frame_filter(int param_1)

{
  return *(char *)(*(int *)(param_1 + 0xa4) + 0xd) == -0x80;
}



/* ===== ssv6020_get_sw_ack_ctl @ 0001f872 size=42 ===== */

bool ssv6020_get_sw_ack_ctl(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xa4);
  if ((*(byte *)(iVar2 + 2) & 7) == 2) {
    bVar1 = (bool)(*(byte *)(iVar2 + 0x44) & 1);
    if ((*(byte *)(iVar2 + 0x44) & 1) != 0) {
      return (*(byte *)(iVar2 + 0xb) & 0xfc) == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* ===== ssv6020_get_sw_ack_seq @ 0001f89c size=40 ===== */

byte ssv6020_get_sw_ack_seq(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xa4);
  if ((*(byte *)(iVar2 + 2) & 7) == 2) {
    bVar1 = *(byte *)(iVar2 + 0x44);
    if ((bVar1 & 1) == 0) {
      return bVar1 & 1;
    }
    if ((*(byte *)(iVar2 + 0xb) & 0xfc) == 0) {
      return bVar1 >> 1;
    }
  }
  return 0;
}



/* ===== ssv6020_update_mac80211_chan_info @ 0001f8c4 size=58 ===== */

void ssv6020_update_mac80211_chan_info(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xa4);
  *(bool *)(param_3 + 0x24) = 0xe < *(byte *)(iVar2 + 0xf);
  uVar1 = (ushort)*(byte *)(iVar2 + 0xf);
  if (uVar1 == 0xe) {
    uVar1 = 0x9b4;
  }
  else if (uVar1 < 0xe) {
    uVar1 = uVar1 * 5 + 0x967;
  }
  else {
    uVar1 = uVar1 * 5 + 5000;
  }
  *(ushort *)(param_3 + 0x1c) = *(ushort *)(param_3 + 0x1c) & 0xe000 | uVar1 & 0x1fff;
  return;
}



/* ===== ssv6020_rc_mac80211_rate_idx @ 0001f8fe size=90 ===== */

void ssv6020_rc_mac80211_rate_idx(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = (param_2 & 0xff) >> 6;
  bVar2 = *(byte *)(param_3 + 0x1f);
  if (uVar1 == 3) {
    *(byte *)(param_3 + 0x1f) = bVar2 & 0xfc | 1;
    if ((int)(param_2 << 0x1a) < 0) {
      *(byte *)(param_3 + 0x1f) = bVar2 & 0xe0 | 0xd;
    }
    if ((param_2 & 0x10) == 0) goto LAB_0001f92c;
    bVar2 = *(byte *)(param_3 + 0x1e) | 4;
  }
  else {
    *(byte *)(param_3 + 0x1f) = bVar2 & 0xfc;
    if ((param_2 & 0x10) == 0) goto LAB_0001f92c;
    bVar2 = *(byte *)(param_3 + 0x1e) | 1;
  }
  *(byte *)(param_3 + 0x1e) = bVar2;
LAB_0001f92c:
  bVar2 = (byte)param_2 & 7;
  *(byte *)(param_3 + 0x21) = bVar2;
  if ((uVar1 == 2) && (*(char *)(param_3 + 0x24) == '\0')) {
    *(byte *)(param_3 + 0x21) = bVar2 + 4;
  }
  return;
}



/* ===== ssv6020_rc_mac80211_tx_rate_idx @ 0001f958 size=82 ===== */

void ssv6020_rc_mac80211_tx_rate_idx(int param_1,byte param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 >> 6 == 3) {
    if ((param_2 & 0x20) == 0) {
      uVar2 = 8;
    }
    else {
      uVar2 = 0x28;
    }
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x80;
    }
  }
  else if ((param_2 & 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
  }
  bVar1 = param_2 & 7;
  if ((param_2 >> 6 == 2) && (*(ushort *)(param_1 + 0x200) < 0xf)) {
    bVar1 = bVar1 + 4;
  }
  *(byte *)(param_3 + 8) = bVar1;
  *(char *)(param_3 + 10) = (char)(uVar2 >> 3);
  *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) & 0x1f | (byte)((uVar2 & 7) << 5);
  return;
}



/* ===== ssv6020_rc_algorithm @ 0001f9aa size=2 ===== */

void ssv6020_rc_algorithm(void)

{
  return;
}



/* ===== ssv6020_set_80211_hw_rate_config @ 0001f9ac size=16 ===== */

void ssv6020_set_80211_hw_rate_config(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x69) = 4;
  *(undefined1 *)(iVar1 + 0x6b) = 10;
  return;
}



/* ===== ssv6020_rc_legacy_bitrate_to_rate_desc @ 0001f9bc size=124 ===== */

void ssv6020_rc_legacy_bitrate_to_rate_desc(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  *param_2 = 0;
  if (param_1 == 0x6e) {
    uVar1 = 3;
  }
  else if (param_1 < 0x6f) {
    if (param_1 == 0x37) {
      uVar1 = 2;
    }
    else if (param_1 < 0x38) {
      if (param_1 == 10) {
        return;
      }
      if (param_1 != 0x14) {
LAB_0001f9d6:
        printk(DAT_0001fa38,param_1 * 100);
        return;
      }
      uVar1 = 1;
    }
    else if (param_1 == 0x3c) {
      uVar1 = 0x80;
    }
    else {
      if (param_1 != 0x5a) goto LAB_0001f9d6;
      uVar1 = 0x81;
    }
  }
  else if (param_1 == 0xf0) {
    uVar1 = 0x84;
  }
  else if (param_1 < 0xf1) {
    if (param_1 == 0x78) {
      uVar1 = 0x82;
    }
    else {
      if (param_1 != 0xb4) goto LAB_0001f9d6;
      uVar1 = 0x83;
    }
  }
  else if (param_1 == 0x1e0) {
    uVar1 = 0x86;
  }
  else if (param_1 == 0x21c) {
    uVar1 = 0x87;
  }
  else {
    if (param_1 != 0x168) goto LAB_0001f9d6;
    uVar1 = 0x85;
  }
  *param_2 = uVar1;
  return;
}



/* ===== _ssv6xxx_rc_show_rate_info @ 0001fa3c size=234 ===== */

void _ssv6xxx_rc_show_rate_info(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  snprintf_res(param_1,DAT_0001fb28);
  snprintf_res(param_1,DAT_0001fb2c);
  snprintf_res(param_1,DAT_0001fb30);
  snprintf_res(param_1,DAT_0001fb34);
  snprintf_res(param_1,DAT_0001fb38);
  snprintf_res(param_1,DAT_0001fb3c);
  snprintf_res(param_1,DAT_0001fb40);
  snprintf_res(param_1,DAT_0001fb44);
  snprintf_res(param_1,DAT_0001fb48);
  snprintf_res(param_1,DAT_0001fb4c);
  snprintf_res(param_1,DAT_0001fb50);
  snprintf_res(param_1,DAT_0001fb54);
  uVar1 = DAT_0001fb58;
  snprintf_res(param_1,DAT_0001fb5c);
  snprintf_res(param_1,DAT_0001fb60);
  snprintf_res(param_1,DAT_0001fb64);
  uVar2 = DAT_0001fb68;
  snprintf_res(param_1,uVar1);
  snprintf_res(param_1,DAT_0001fb6c);
  snprintf_res(param_1,DAT_0001fb70);
  snprintf_res(param_1,uVar2);
  snprintf_res(param_1,DAT_0001fb74);
  snprintf_res(param_1,DAT_0001fb78);
  snprintf_res(param_1,DAT_0001fb7c);
  snprintf_res(param_1,uVar1);
  snprintf_res(param_1,DAT_0001fb80);
  snprintf_res(param_1,DAT_0001fb84);
  snprintf_res(param_1,uVar2);
  snprintf_res(param_1,DAT_0001fb88);
  snprintf_res(param_1,DAT_0001fb8c);
  return;
}



/* ===== ssv6020_dump_mib_rx_phy @ 0001fb90 size=372 ===== */

void ssv6020_dump_mib_rx_phy(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 local_2c;
  undefined2 local_2a;
  
  iVar7 = *param_1 + 0x9c0;
  (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001fd04,&local_2c);
  iVar3 = DAT_0001fd4c;
  uVar6 = DAT_0001fd48;
  uVar5 = DAT_0001fd44;
  uVar4 = DAT_0001fd40;
  uVar2 = DAT_0001fd10;
  uVar1 = DAT_0001fd0c;
  snprintf_res(iVar7,DAT_0001fd08,local_2c);
  snprintf_res(iVar7,DAT_0001fd14);
  snprintf_res(iVar7,uVar1,DAT_0001fd1c,DAT_0001fd18,uVar6,uVar5,uVar4);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3,&local_2c);
  snprintf_res(iVar7,uVar2,local_2a);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3,&local_2c);
  snprintf_res(iVar7,uVar2,local_2c);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001fd20,&local_2c);
  snprintf_res(iVar7,uVar2,local_2c);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3 + 8,&local_2c);
  snprintf_res(iVar7,uVar2,local_2a);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3 + 8,&local_2c);
  snprintf_res(iVar7,DAT_0001fd24,local_2c);
  snprintf_res(iVar7,DAT_0001fd28);
  iVar3 = DAT_0001fd34;
  snprintf_res(iVar7,uVar1,DAT_0001fd30,DAT_0001fd2c,uVar6,uVar5,uVar4);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3,&local_2c);
  snprintf_res(iVar7,uVar2,local_2a);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3,&local_2c);
  snprintf_res(iVar7,uVar2,local_2c);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001fd38,&local_2c);
  snprintf_res(iVar7,uVar2,local_2c);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3 + -8,&local_2c);
  snprintf_res(iVar7,uVar2,local_2a);
  (**(code **)(param_1[4] + 0x1c))(param_1[5],iVar3 + -8,&local_2c);
  snprintf_res(iVar7,DAT_0001fd3c,local_2c);
  return;
}



/* ===== ssv6020_txtput_set_desc @ 0001fd50 size=48 ===== */

void ssv6020_txtput_set_desc(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  
  puVar1 = memset(*(void **)(param_2 + 0xa4),0xff,0x50);
  *puVar1 = (short)*(undefined4 *)(param_2 + 0x50);
  *(byte *)(puVar1 + 1) = *(byte *)(puVar1 + 1) & 0xf8 | 2;
  *(undefined4 *)(puVar1 + 2) = 1;
  *(byte *)((int)puVar1 + 0xb) = *(byte *)((int)puVar1 + 0xb) & 3 | 200;
  return;
}



/* ===== ssv6020_reset_mib_phy @ 0001fd80 size=188 ===== */

void ssv6020_reset_mib_phy(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint local_1c;
  undefined4 uStack_18;
  
  uVar2 = DAT_0001fe40;
  uVar1 = DAT_0001fe3c;
  pcVar4 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_1c = param_2;
  uStack_18 = param_3;
  (*pcVar4)(*(undefined4 *)(param_1 + 0x14),DAT_0001fe3c,&local_1c,pcVar4,param_1);
  uVar3 = DAT_0001fe44;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),uVar1,local_1c & 0x7fffffff);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar2,&local_1c);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),uVar2,local_1c & 0xffefffff);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar3,&local_1c);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),uVar3,local_1c & 0xffefffff);
  msleep(1);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar1,&local_1c);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),uVar1,local_1c | 0x80000000);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar2,&local_1c);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),uVar2,local_1c | 0x100000);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x14),uVar3,&local_1c);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
            (*(undefined4 *)(param_1 + 0x14),uVar3,local_1c | 0x100000);
  return;
}



/* ===== ssv6020_phy_enable @ 0001fe48 size=176 ===== */

void ssv6020_phy_enable(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint local_1c;
  undefined4 uStack_18;
  
  iVar3 = *param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  if ((*(uint *)(iVar3 + 0x878) & 2) == 0) {
    iVar1 = ssv_skb_alloc(iVar3,0x10,param_3,param_4,param_1);
    if (iVar1 == 0) {
      printk(DAT_0001ff00,DAT_0001fefc);
    }
    else {
      skb_put(iVar1,0x10);
      puVar2 = memset(*(void **)(iVar1 + 0xa4),0,0x14);
      puVar2[2] = puVar2[2] & 0xf8 | 5;
      puVar2[3] = 0xd;
      if (param_2 == 0) {
        puVar2[4] = 5;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[0xc] = 5;
        puVar2[0xd] = 0;
        puVar2[0xe] = 0xd;
        puVar2[0xf] = 0;
      }
      else {
        puVar2[5] = 0;
        puVar2[4] = 4;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[0xc] = 4;
        puVar2[0xd] = 0;
        puVar2[0xe] = 0xd;
        puVar2[0xf] = 0;
      }
      *puVar2 = 0x10;
      puVar2[1] = 0;
      (**(code **)(*(int *)(*(int *)(iVar3 + 0x210) + 0x10) + 0x6c))
                (*(undefined4 *)(*(int *)(iVar3 + 0x210) + 0x14),iVar1);
    }
  }
  else {
    iVar3 = (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_0001fef8,&local_1c);
    local_1c = local_1c & 0xfffffffe | param_2;
    if (iVar3 == 0) {
      (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_0001fef8);
    }
  }
  return;
}



/* ===== ssv6020_fill_beacon_tx_desc @ 0001ff04 size=166 ===== */

void ssv6020_fill_beacon_tx_desc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short *psVar2;
  ushort uVar3;
  
  skb_push(param_2,0x50,param_3,param_4,param_4);
  psVar2 = memset(*(void **)(param_2 + 0xa4),0,0x50);
  *psVar2 = (short)*(undefined4 *)(param_2 + 0x50) + -0x50;
  *(byte *)(psVar2 + 1) = *(byte *)(psVar2 + 1) & 0xf0 | 10;
  psVar2[4] = psVar2[4] & 0x300U | 0x6050;
  *(byte *)(psVar2 + 7) = *(byte *)(psVar2 + 7) | 0x78;
  *(byte *)(psVar2 + 0xf) = *(byte *)(psVar2 + 0xf) & 0xfc | 1;
  *(byte *)(psVar2 + 0x13) = *(byte *)(psVar2 + 0x13) & 0xfc | 1;
  *(byte *)(psVar2 + 0x17) = *(byte *)(psVar2 + 0x17) & 0xfc | 1;
  *(byte *)(psVar2 + 0x1b) = *(byte *)(psVar2 + 0x1b) & 0xfc | 1;
  if ((**(int **)(param_1 + 0x1fc) == 1) ||
     (bVar1 = *(byte *)(*(int *)(param_1 + 0x870) + 0x296), uVar3 = (ushort)bVar1, bVar1 != 0)) {
    uVar3 = 0x8080;
  }
  psVar2[0xc] = uVar3;
  *(uint *)(psVar2 + 0xe) = *(uint *)(psVar2 + 0xe) & 0xffef0fff | 0x101000;
  return;
}



/* ===== ssv6020_update_null_func_txinfo @ 0001ffaa size=146 ===== */

undefined4
ssv6020_update_null_func_txinfo(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  ushort uVar4;
  undefined2 *__s;
  int iVar5;
  
  __s = *(undefined2 **)(param_3 + 0xa4);
  iVar5 = *(int *)(param_2 + 0x10c);
  memset(__s,0,0x50);
  *__s = (short)*(undefined4 *)(param_3 + 0x50);
  *(byte *)(__s + 1) = *(byte *)(__s + 1) & 0xf0 | 10;
  *(byte *)((int)__s + 9) = *(byte *)((int)__s + 9) | 2;
  uVar3 = *(uint *)(iVar5 + 4);
  *(undefined1 *)(__s + 4) = 0x50;
  *(byte *)(__s + 7) = *(byte *)(__s + 7) & 0x87 | (byte)((uVar3 & 0xf) << 3);
  uVar4 = __s[7] & 0xfc7f | 0x200;
  __s[7] = uVar4;
  cVar1 = ssv6xxx_frame_hdrlen(__s + 0x28,0,4,uVar4,param_4);
  *(byte *)((int)__s + 9) = *(byte *)((int)__s + 9) & 3 | cVar1 << 2;
  *(undefined4 *)(__s + 2) = 0xa1;
  *(byte *)(__s + 7) = *(byte *)(__s + 7) & 0xf8;
  *(byte *)(__s + 0xb) = *(byte *)(__s + 0xb) & 0xf3 | 4;
  __s[0xc] = 0x8080;
  *(uint *)(__s + 0xe) = *(uint *)(__s + 0xe) | 0x10f000;
  uVar2 = ssv6xxx_non_ht_txtime(1,6000,0xe,0);
  __s[0x29] = uVar2;
  return 0;
}



/* ===== ssv6020_set_phy_mode @ 0002003c size=18 ===== */

void ssv6020_set_phy_mode(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 0x17e;
  }
                    /* WARNING: Could not recover jumptable at 0x0002004c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x14),DAT_00020050,uVar1)
  ;
  return;
}



/* ===== ssv6020_edca_enable @ 00020054 size=124 ===== */

void ssv6020_edca_enable(int param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  uint local_c;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x1c);
  local_c = param_2;
  if (param_2 == 0) {
    (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_000200d0,&local_c,pcVar2,param_1);
    pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar1 = local_c & 0xffffffef;
  }
  else {
    (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_000200d0,&local_c,pcVar2,param_1);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_000200d0,local_c & 0xfffffff8 | 2);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_000200d0,&local_c);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))
              (*(undefined4 *)(param_1 + 0x14),DAT_000200d0,local_c & 0xffffffef);
    (**(code **)(DAT_000200d4 + 4))(DAT_000200d8);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))
              (*(undefined4 *)(param_1 + 0x14),DAT_000200d0,&local_c);
    pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
    uVar1 = local_c | 0x10;
  }
  (*pcVar2)(*(undefined4 *)(param_1 + 0x14),DAT_000200d0,uVar1);
  return;
}



/* ===== ssv6020_rc_rx_data_handler @ 000200dc size=224 ===== */

void ssv6020_rc_rx_data_handler(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x9bc) << 0x17 < 0) {
    if (((*(ushort *)(*(int *)(param_2 + 0xa4) + *(int *)(*(int *)(param_1 + 0x210) + 0x360)) & 0xfc
         ) != 0x80) && (iVar7 = param_2, iVar3 = ssv6xxx_find_sta_by_rx_skb(), iVar3 != 0)) {
      uVar6 = 0;
      puVar4 = *(undefined2 **)(param_2 + 0xa4);
      printk(DAT_000201bc);
      uVar2 = DAT_000201d4;
      uVar1 = DAT_000201c0;
      puVar5 = *(undefined1 **)(param_2 + 0xa4);
      do {
        uVar6 = uVar6 + 1;
        printk(uVar1,puVar5[3],puVar5[2],puVar5[1],*puVar5,iVar7,param_3,param_4);
        if ((uVar6 & 3) == 0) {
          printk(uVar2);
        }
        puVar5 = puVar5 + 4;
      } while (uVar6 != 0x14);
      uVar6 = (uint)*(byte *)(puVar4 + 1);
      printk(DAT_000201c4,*puVar4,uVar6 & 7,(uVar6 & 0xf) >> 3,(*(byte *)(puVar4 + 1) & 0x1f) >> 4,
             (*(byte *)(puVar4 + 1) & 0x3f) >> 5,(uVar6 & 0x7f) >> 6);
      printk(DAT_000201c8,(*(byte *)((int)puVar4 + 3) & 0x1f) >> 4,
             (*(byte *)((int)puVar4 + 3) & 0x7f) >> 5,*(byte *)((int)puVar4 + 0xb) >> 2,
             *(undefined1 *)(puVar4 + 5),*(undefined1 *)((int)puVar4 + 0xf));
      printk(DAT_000201cc,*(undefined1 *)(puVar4 + 9),(*(byte *)((int)puVar4 + 0x13) & 7) >> 2,
             puVar4[10] & 0xfff,(*(byte *)((int)puVar4 + 0x15) & 0x7f) >> 4,
             *(undefined1 *)(puVar4 + 0xb));
      printk(DAT_000201d0,*(undefined1 *)((int)puVar4 + 0x17),puVar4[0xc]);
      return;
    }
  }
  return;
}



/* ===== ssv6020_update_rxstatus @ 000201d8 size=540 ===== */

undefined4 ssv6020_update_rxstatus(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  iVar8 = *(int *)(param_2 + 0xa4);
  iVar10 = *(int *)(*(int *)(param_1 + 0x210) + 0x360);
  *(char *)(param_3 + 0x26) = -*(char *)(iVar8 + 0x16);
  iVar2 = ssv6xxx_find_sta_by_rx_skb();
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(ushort *)(iVar8 + iVar10) & 0xc) == 8) {
    *(undefined1 *)(param_1 + 0xcf4) = 1;
    bVar1 = *(byte *)(iVar8 + 0x12) >> 6;
    *(byte *)(iVar2 + 0x1e8) = bVar1;
    *(byte *)(iVar2 + 0x1e9) = (byte)(((uint)*(byte *)(iVar8 + 0x12) << 0x1a) >> 0x1f);
    if (bVar1 == 0) {
      iVar4 = iVar2 + (*(byte *)(iVar8 + 0x12) & 3) * 8;
      uVar3 = *(uint *)(iVar4 + 0x1c8);
      *(uint *)(iVar4 + 0x1c8) = uVar3 + 1;
      *(uint *)(iVar4 + 0x1cc) = *(int *)(iVar4 + 0x1cc) + (uint)(0xfffffffe < uVar3);
    }
    else {
      iVar4 = iVar2 + (*(byte *)(iVar8 + 0x12) & 7) * 8;
      if (bVar1 == 3) {
        uVar3 = *(uint *)(iVar4 + 0x148);
        *(uint *)(iVar4 + 0x148) = uVar3 + 1;
        *(uint *)(iVar4 + 0x14c) = *(int *)(iVar4 + 0x14c) + (uint)(0xfffffffe < uVar3);
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0x188);
        *(uint *)(iVar4 + 0x188) = uVar3 + 1;
        *(uint *)(iVar4 + 0x18c) = *(int *)(iVar4 + 0x18c) + (uint)(0xfffffffe < uVar3);
      }
    }
    if (((int)((uint)*(ushort *)(iVar8 + iVar10) << 0x11) < 0) &&
       (*(int *)(*(int *)(param_1 + 0x210) + 0x7a4) << 0x10 < 0)) {
      iVar11 = *(int *)(param_2 + 0xa4);
      iVar4 = *(int *)(*(int *)(iVar2 + 0x10c) + 0xc);
      uVar3 = (uint)*(byte *)(iVar11 + 0x45) * 0x100;
      uVar12 = (uint)*(byte *)(iVar11 + 0x46) * 0x10000;
      uVar5 = uVar3 + uVar12;
      uVar6 = uVar5 + *(byte *)(iVar11 + 0x44);
      uVar13 = (uint)*(byte *)(iVar11 + 0x47) * 0x1000000;
      uVar7 = uVar6 + uVar13;
      uVar3 = (uint)*(byte *)(iVar11 + 0x48) +
              (uint)CARRY4(uVar3,uVar12) + (uint)CARRY4(uVar5,(uint)*(byte *)(iVar11 + 0x44)) +
              (uint)CARRY4(uVar6,uVar13) + (uint)*(byte *)(iVar11 + 0x49) * 0x100;
      dbgprint(param_1 + 0x9c0,*(undefined4 *)(param_1 + 0x9bc),0x4000,DAT_000203f4,
               *(undefined4 *)(iVar2 + 0x1f0),*(undefined4 *)(iVar2 + 500),
               *(undefined4 *)(iVar4 + 0x2e0),*(undefined4 *)(iVar4 + 0x2e4),
               ~*(uint *)(iVar8 + iVar10 + 4) & 1);
      if ((*(uint *)(iVar8 + iVar10 + 4) & 1) == 0) {
        uVar5 = *(uint *)(iVar2 + 500);
        if (*(uint *)(iVar2 + 0x1f0) != 0 || uVar5 != 0) {
          bVar14 = uVar3 <= uVar5;
          if (uVar5 == uVar3) {
            bVar14 = uVar7 <= *(uint *)(iVar2 + 0x1f0);
          }
          if (bVar14) {
            uVar9 = DAT_000203f8;
            if (*(char *)(iVar2 + 0x13d) == '\0') {
LAB_00020382:
              printk(uVar9);
              uVar9 = 0xffffffff;
              goto LAB_0002038a;
            }
            *(undefined1 *)(iVar2 + 0x13d) = 0;
          }
        }
        *(uint *)(iVar2 + 0x1f0) = uVar7;
        *(uint *)(iVar2 + 500) = uVar3;
      }
      else {
        uVar5 = *(uint *)(iVar4 + 0x2e4);
        if (*(uint *)(iVar4 + 0x2e0) != 0 || uVar5 != 0) {
          bVar14 = uVar3 <= uVar5;
          if (uVar5 == uVar3) {
            bVar14 = uVar7 <= *(uint *)(iVar4 + 0x2e0);
          }
          if (bVar14) {
            uVar9 = DAT_00020400;
            if (*(char *)(iVar4 + 0x2d7) == '\0') goto LAB_00020382;
            *(undefined1 *)(iVar4 + 0x2d7) = 0;
          }
        }
        *(uint *)(iVar4 + 0x2e0) = uVar7;
        *(uint *)(iVar4 + 0x2e4) = uVar3;
      }
    }
  }
  uVar9 = 0;
LAB_0002038a:
  if (((*(ushort *)(iVar8 + iVar10) & 0xfc) == 0x80) &&
     (*(uint *)(iVar2 + 0x140) = (uint)*(byte *)(iVar8 + 0x16), *(int *)(param_1 + 0x9bc) << 0xf < 0
     )) {
    printk(DAT_000203fc,*(undefined1 *)(iVar8 + 0x16),*(undefined1 *)(iVar8 + 0x26));
  }
  *(char *)(param_3 + 0x26) = -(char)*(undefined4 *)(iVar2 + 0x140);
  return uVar9;
}



/* ===== ssv6020_update_txinfo @ 00020404 size=668 ===== */

void ssv6020_update_txinfo(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined2 *puVar13;
  bool bVar14;
  
  puVar9 = *(undefined2 **)(param_2 + 0xa4);
  iVar11 = *(int *)(param_2 + 0x30);
  puVar12 = (uint *)**(undefined4 **)(param_2 + 0xa0);
  if (puVar12 != (uint *)0x0) {
    puVar12 = puVar12 + 0x42;
  }
  uVar1 = puVar9[0x28];
  uVar6 = (uint)uVar1;
  puVar13 = puVar9 + 0x28;
  if ((((uVar1 & 0xc) == 0) || ((uVar6 & 0x7c) == 0x48)) || (*(int *)(param_2 + 0x18) << 0x1a < 0))
  {
    uVar10 = 4;
  }
  else {
    uVar10 = *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 0x5c) * 4 + 0x218);
  }
  *puVar9 = (short)*(undefined4 *)(param_2 + 0x50);
  *(byte *)(puVar9 + 1) =
       *(byte *)(puVar9 + 1) & 0xa0 | 10 | ((uVar6 & 0x8c) == 0x88) << 4 |
       ((uVar6 & 0x300) == 0x300) << 6;
  uVar6 = *(byte *)((int)puVar9 + 3) & 0xffffff8f | ((uVar6 & 0x7ff) >> 10) << 4;
  *(byte *)((int)puVar9 + 3) = (byte)uVar6 | (byte)((uVar1 >> 4 & 3) << 5);
  if ((int)(uVar6 << 0x1b) < 0) {
    bVar7 = 1;
  }
  else {
    bVar7 = (byte)puVar9[0x33] & 0xf;
    if ((puVar9[0x33] & 0xf) != 0) {
      bVar7 = 1;
    }
  }
  *(byte *)((int)puVar9 + 9) =
       *(byte *)((int)puVar9 + 9) & 0xfc | bVar7 & 1 | (byte)((~*(uint *)(puVar9 + 0x2a) & 1) << 1);
  *(byte *)((int)puVar9 + 3) = *(byte *)((int)puVar9 + 3) & 0xf7;
  if (iVar11 == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = (byte)*(undefined4 *)(iVar11 + 0x2b8) & 3;
  }
  *(byte *)((int)puVar9 + 0xb) = *(byte *)((int)puVar9 + 0xb) & 0xfc | bVar7;
  if (puVar12 == (uint *)0x0) {
    uVar6 = 0xf;
  }
  else {
    uVar6 = *puVar12 & 0xf;
  }
  uVar6 = *(byte *)(puVar9 + 7) & 0xffffff87 | uVar6 << 3;
  *(char *)(puVar9 + 7) = (char)uVar6;
  puVar9[7] = puVar9[7] & 0xfc7f | (ushort)((uVar10 & 7) << 7);
  *(undefined1 *)(puVar9 + 4) = 0x50;
  cVar3 = ssv6xxx_frame_hdrlen(puVar13,(*(byte *)(puVar9 + 1) & 0x3f) >> 5,uVar6,0x50,param_4);
  uVar1 = puVar9[0x28];
  *(byte *)((int)puVar9 + 9) = *(byte *)((int)puVar9 + 9) & 3 | cVar3 << 2;
  iVar4 = ieee80211_hdrlen(uVar1);
  uVar6 = iVar4 + 6U & 0xff;
  uVar8 = *(ushort *)((int)puVar13 + uVar6) << 8 | *(ushort *)((int)puVar13 + uVar6) >> 8;
  if ((uVar8 == 0x806) || (uVar8 == 0x888e)) {
LAB_0002056c:
    *(byte *)((int)puVar9 + 0x45) = *(byte *)((int)puVar9 + 0x45) | 2;
  }
  else if (uVar8 == 0x800) {
    iVar4 = uVar6 + 2;
    if (*(char *)((int)puVar13 + uVar6 + 0xb) == '\x11') {
      uVar6 = *(byte *)((int)puVar13 + iVar4) & 0xf;
      uVar5 = *(ushort *)((int)puVar13 + uVar6 * 4 + iVar4);
      uVar8 = *(ushort *)((int)puVar13 + uVar6 * 4 + iVar4 + 2);
      uVar5 = uVar5 << 8 | uVar5 >> 8;
      uVar8 = uVar8 << 8 | uVar8 >> 8;
      if (((uVar8 == 0x43) || (bVar14 = uVar5 == 0x43, uVar5 = uVar8, bVar14)) && (uVar5 == 0x44))
      goto LAB_0002056c;
    }
  }
  puVar2 = DAT_000206a0;
  if ((uVar1 & 0x7c) == 0x48) {
    uVar6 = *DAT_000206a0 + 1;
    *DAT_000206a0 = uVar6;
    *(byte *)(puVar9 + 0x22) = (byte)((uVar6 & 0x7f) << 1) | 1;
    if (uVar6 == 0x40) {
      *puVar2 = 0;
    }
  }
  if (*(int *)(param_2 + 0x18) << 0x19 < 0) {
    *(byte *)(puVar9 + 0xf) = *(byte *)(puVar9 + 0xf) | 0x20;
  }
  if (*(int *)(param_2 + 0x18) << 4 < 0) {
    *(byte *)(puVar9 + 0x1b) = *(byte *)(puVar9 + 0x1b) | 0x20;
  }
  if (((*(byte *)((int)puVar9 + 9) & 2) != 0) && ((uVar1 & 0xc) == 8)) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x210) + 0xd40);
    if (iVar4 == 1) {
      *(byte *)(puVar9 + 0x13) = *(byte *)(puVar9 + 0x13) | 0x20;
    }
    else if ((iVar4 == 2) || ((iVar4 != 3 && (*(int *)(param_1 + 0x878) << 0x1a < 0)))) {
      *(byte *)(puVar9 + 0x17) = *(byte *)(puVar9 + 0x17) | 0x20;
    }
  }
  if (((iVar11 != 0) && ((uVar1 & 0x4000) != 0)) &&
     (((uVar1 & 0x8c) == 0x88 || ((uVar1 & 0xc) == 8)))) {
    if ((*(byte *)((int)puVar9 + 9) & 2) == 0) {
      if (*(char *)(iVar11 + 0x2d1) == '\0') goto LAB_0002060e;
      if (*(int *)(iVar11 + 700) != iVar11 + 700) {
        uVar6 = *(uint *)(*(int *)(*(int *)(iVar11 + 700) + -4) + 4);
        if (uVar6 != 0xffffffff) {
          *(byte *)(puVar9 + 7) = *(byte *)(puVar9 + 7) & 0x87 | (byte)((uVar6 & 0xf) << 3);
        }
      }
    }
    else if ((puVar12 == (uint *)0x0) || ((char)puVar12[0xc] == '\0')) goto LAB_0002060e;
    *(byte *)((int)puVar9 + 3) = *(byte *)((int)puVar9 + 3) | 8;
  }
LAB_0002060e:
  *(byte *)(puVar9 + 7) = *(byte *)(puVar9 + 7) & 0xf8;
  if ((uVar1 & 0xc) == 0) {
    uVar6 = (uVar10 + 6) * 0x10;
  }
  else {
    uVar6 = (uVar10 + 6) * 0x1000 | 0x35;
  }
  *(uint *)(puVar9 + 2) = uVar6;
  *(uint *)(puVar9 + 2) = *(int *)(puVar9 + 2) << 4 | 1;
  return;
}



/* ===== ssv6020_add_ampdu_txinfo @ 000206a4 size=88 ===== */

void ssv6020_add_ampdu_txinfo(int param_1,int param_2)

{
  void *pvVar1;
  
  skb_push(param_2,0x50);
  pvVar1 = memset(*(void **)(param_2 + 0xa4),0,0x50);
  *(undefined1 *)((int)pvVar1 + 10) = 0x20;
  ssv6020_update_txinfo(param_1,param_2);
  if (*(int *)(param_1 + 0x9bc) << 0x18 < 0) {
    ssv6020_dump_ssv6020_txframe(param_2);
  }
  if (*(int *)(param_1 + 0x9bc) << 0x1f < 0) {
    printk(DAT_000206fc);
    ssv6020_dump_tx_desc(param_2);
    return;
  }
  return;
}



/* ===== ssv6020_add_txinfo @ 00020700 size=74 ===== */

void ssv6020_add_txinfo(int param_1,int param_2)

{
  skb_push(param_2,0x50);
  memset(*(void **)(param_2 + 0xa4),0,0x50);
  ssv6020_update_txinfo(param_1,param_2);
  if (*(int *)(param_1 + 0x9bc) << 0x18 < 0) {
    ssv6020_dump_ssv6020_txframe(param_2);
  }
  if (*(int *)(param_1 + 0x9bc) << 0x1f < 0) {
    printk(DAT_0002074c);
    ssv6020_dump_tx_desc(param_2);
    return;
  }
  return;
}



/* ===== _ssv6xxx_rc_opertaion @ 00020750 size=108 ===== */

undefined4 _ssv6xxx_rc_opertaion(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  iVar1 = __netdev_alloc_skb(0,0x14,0xa20);
  if (iVar1 == 0) {
    printk(DAT_000207c0,DAT_000207bc);
    uVar2 = 0xffffffff;
  }
  else {
    skb_put(iVar1,0x14);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    memset(puVar3 + 2,0,0x16);
    *(uint *)(puVar3 + 4) = param_2;
    *(undefined4 *)(puVar3 + 0x10) = param_3;
    puVar3[2] = 5;
    *(uint *)(puVar3 + 0xc) = param_2 | 0x100000;
    uVar2 = 0;
    puVar3[3] = 0x10;
    puVar3[1] = 0;
    *puVar3 = 0x14;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
  }
  return uVar2;
}



/* ===== ssv6020_cmd_rc @ 000207c4 size=160 ===== */

void ssv6020_cmd_rc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int iVar4;
  char *__s1;
  int *piVar5;
  int iStack_24;
  int iStack_20;
  
  iVar4 = *param_1 + 0x9c0;
  uVar3 = DAT_00020864;
  iStack_24 = param_2;
  iStack_20 = param_3;
  if ((1 < param_2) &&
     (piVar5 = param_1, iVar1 = strcmp(*(char **)(param_3 + 4),DAT_00020868), uVar3 = DAT_00020864,
     iVar1 == 0)) {
    if (param_2 != 4) {
      snprintf_res(iVar4,DAT_00020880,0,extraout_r3,piVar5);
      _ssv6xxx_rc_show_rate_info(iVar4);
      return;
    }
    iVar1 = simple_strtoul(*(undefined4 *)(param_3 + 0xc),&iStack_24);
    __s1 = *(char **)(param_3 + 8);
    iVar2 = strcmp(__s1,DAT_0002086c);
    if (iVar2 == 0) {
      snprintf_res(iVar4,DAT_00020870,*(undefined4 *)(param_3 + 0xc),extraout_r3_00,piVar5);
      _ssv6xxx_rc_opertaion(*param_1,3,iVar1);
      param_1[0x325] = iVar1;
      return;
    }
    iVar2 = strcmp(__s1,DAT_00020874);
    uVar3 = DAT_0002087c;
    if (iVar2 == 0) {
      snprintf_res(iVar4,DAT_00020878,*(undefined4 *)(param_3 + 0xc),extraout_r3_01,piVar5);
      _ssv6xxx_rc_show_rate_info(iVar4);
      _ssv6xxx_rc_opertaion(*param_1,4,iVar1);
      return;
    }
  }
  snprintf_res(iVar4,uVar3);
  return;
}



/* ===== ssv6020_get_rx_desc_length @ 00020884 size=4 ===== */

undefined4 ssv6020_get_rx_desc_length(void)

{
  return 0x50;
}



/* ===== ssv6020_get_rx_desc_size @ 00020888 size=4 ===== */

undefined4 ssv6020_get_rx_desc_size(void)

{
  return 0x50;
}



/* ===== ssv_attach_ssv6020_phy @ 0002088c size=242 ===== */

void ssv_attach_ssv6020_phy(int param_1)

{
  *(undefined4 *)(param_1 + 0x1f8) = DAT_00020980;
  *(undefined4 *)(param_1 + 0x1fc) = DAT_00020984;
  *(undefined4 *)(param_1 + 0x200) = DAT_00020988;
  *(undefined4 *)(param_1 + 0x204) = DAT_0002098c;
  *(undefined4 *)(param_1 + 0x208) = DAT_00020990;
  *(undefined4 *)(param_1 + 0x20c) = DAT_00020994;
  *(undefined4 *)(param_1 + 0x210) = DAT_00020998;
  *(undefined4 *)(param_1 + 0x214) = DAT_0002099c;
  *(undefined4 *)(param_1 + 0x218) = DAT_000209a0;
  *(undefined4 *)(param_1 + 0x21c) = DAT_000209a4;
  *(undefined4 *)(param_1 + 0x220) = DAT_000209a8;
  *(undefined4 *)(param_1 + 0x224) = DAT_000209ac;
  *(undefined4 *)(param_1 + 0x228) = DAT_000209b0;
  *(undefined4 *)(param_1 + 0x22c) = DAT_000209b4;
  *(undefined4 *)(param_1 + 0x230) = DAT_000209b8;
  *(undefined4 *)(param_1 + 0x234) = DAT_000209bc;
  *(undefined4 *)(param_1 + 0x238) = DAT_000209c0;
  *(undefined4 *)(param_1 + 0x23c) = DAT_000209c4;
  *(undefined4 *)(param_1 + 0x240) = DAT_000209c8;
  *(undefined4 *)(param_1 + 0x244) = DAT_000209cc;
  *(undefined4 *)(param_1 + 0x248) = DAT_000209d0;
  *(undefined4 *)(param_1 + 0x24c) = DAT_000209d4;
  *(undefined4 *)(param_1 + 0x250) = DAT_000209d8;
  *(undefined4 *)(param_1 + 0x254) = DAT_000209dc;
  *(undefined4 *)(param_1 + 600) = DAT_000209e0;
  *(undefined4 *)(param_1 + 0x25c) = DAT_000209e4;
  *(undefined4 *)(param_1 + 0x264) = DAT_000209e8;
  *(undefined4 *)(param_1 + 0x260) = DAT_000209ec;
  *(undefined4 *)(param_1 + 0x268) = DAT_000209f0;
  *(undefined4 *)(param_1 + 0x26c) = DAT_000209f4;
  *(undefined4 *)(param_1 + 0x270) = DAT_000209f8;
  *(undefined4 *)(param_1 + 0x288) = DAT_000209fc;
  *(undefined4 *)(param_1 + 0x28c) = DAT_00020a00;
  *(undefined4 *)(param_1 + 0x290) = DAT_00020a04;
  *(undefined4 *)(param_1 + 0x294) = DAT_00020a08;
  *(undefined4 *)(param_1 + 0x298) = DAT_00020a0c;
  *(undefined4 *)(param_1 + 0x274) = DAT_00020a10;
  *(undefined4 *)(param_1 + 0x278) = DAT_00020a14;
  *(undefined4 *)(param_1 + 0x27c) = DAT_00020a18;
  *(undefined4 *)(param_1 + 0x280) = DAT_00020a1c;
  return;
}



/* ===== ssv6020_turismoE_load_phy_table @ 00020a20 size=2 ===== */

void ssv6020_turismoE_load_phy_table(void)

{
  return;
}



/* ===== ssv6020_turismoE_get_phy_table_size @ 00020a22 size=4 ===== */

undefined4 ssv6020_turismoE_get_phy_table_size(void)

{
  return 0;
}



/* ===== ssv6020_turismoE_support_iqk_cmd @ 00020a26 size=4 ===== */

undefined4 ssv6020_turismoE_support_iqk_cmd(void)

{
  return 0;
}



/* ===== ssv6020_cmd_turismoE_txgen @ 00020a2a size=118 ===== */

void ssv6020_cmd_turismoE_txgen(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint local_1c;
  undefined4 uStack_18;
  
  iVar4 = *param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  iVar2 = ssv_skb_alloc(iVar4,0x64e,param_3,param_4,param_1);
  if (iVar2 != 0) {
    pvVar3 = (void *)skb_put(iVar2,0x64e);
    pvVar3 = memcpy(pvVar3,DAT_00020aa0,0x64e);
    uVar1 = DAT_00020aa4;
    *(char *)((int)pvVar3 + 0x18) = (char)param_2;
    (**(code **)(param_1[4] + 0x1c))(param_1[5],uVar1,&local_1c);
    (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_00020aa4,local_1c & 0xfffff3ff);
    (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_00020aa8,&local_1c);
    (**(code **)(param_1[4] + 0x20))(param_1[5],DAT_00020aa8,local_1c & 0xfffffffe);
    iVar4 = *(int *)(iVar4 + 0x210);
    (**(code **)(*(int *)(iVar4 + 0x10) + 0x6c))(*(undefined4 *)(iVar4 + 0x14),iVar2);
  }
  return;
}



/* ===== ssv6020_cmd_turismoE_rfble @ 00020aac size=1010 ===== */

void ssv6020_cmd_turismoE_rfble(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  char *__s1;
  int iStack_24;
  int iStack_20;
  
  iVar6 = *param_1;
  iVar5 = iVar6 + 0x9c0;
  uVar4 = DAT_00020df8;
  iStack_24 = param_2;
  iStack_20 = param_3;
  if (1 < param_2) {
    __s1 = *(char **)(param_3 + 4);
    iVar1 = strcmp(__s1,DAT_00020dfc);
    if (iVar1 == 0) {
      uVar2 = 0;
      if (param_2 == 3) {
        uVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_24,0);
      }
      iVar1 = ssv_skb_alloc(iVar6,0x20);
      uVar4 = DAT_00020ef4;
      if (iVar1 != 0) {
        skb_put(iVar1,0x20);
        puVar7 = *(undefined1 **)(iVar1 + 0xa4);
        memset(puVar7 + 2,0,0xe);
        puVar7[5] = 0;
        puVar7[2] = 5;
        puVar7[6] = 0;
        puVar7[3] = 0xd;
        puVar7[7] = 0;
        puVar7[4] = 0x20;
        *puVar7 = 0x20;
        puVar7[1] = 0;
        memset(puVar7 + 0x10,0,0x10);
        *(undefined4 *)(puVar7 + 0x10) = uVar2;
        (**(code **)(*(int *)(*(int *)(iVar6 + 0x210) + 0x10) + 0x6c))
                  (*(undefined4 *)(*(int *)(iVar6 + 0x210) + 0x14),iVar1);
        uVar4 = DAT_00020e00;
        *(uint *)(iVar6 + 0x878) = *(uint *)(iVar6 + 0x878) | 0x180;
      }
    }
    else {
      iVar1 = strcmp(__s1,DAT_00020e04);
      if (iVar1 == 0) {
        uVar4 = DAT_00020e08;
        if (((param_2 == 3) &&
            (uVar3 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_24,0), uVar4 = DAT_00020e0c
            , uVar3 < 8)) && (iVar1 = ssv_skb_alloc(iVar6,0x20), uVar4 = DAT_00020ef4, iVar1 != 0))
        {
          skb_put(iVar1,0x20);
          puVar7 = *(undefined1 **)(iVar1 + 0xa4);
          memset(puVar7 + 2,0,0xe);
          puVar7[5] = 0;
          puVar7[2] = puVar7[2] & 0xf8 | 5;
          puVar7[6] = 0;
          puVar7[3] = 0xd;
          puVar7[7] = 0;
          puVar7[4] = 0x22;
          puVar7[1] = 0;
          *puVar7 = 0x20;
          memset(puVar7 + 0x10,0,0x10);
          puVar7[0x15] = (char)uVar3;
          (**(code **)(*(int *)(*(int *)(iVar6 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar6 + 0x210) + 0x14),iVar1);
          uVar4 = DAT_00020e10;
LAB_00020be0:
          snprintf_res(iVar5,uVar4,uVar3);
          return;
        }
      }
      else {
        iVar1 = strcmp(__s1,DAT_00020e14);
        if (iVar1 == 0) {
          uVar4 = DAT_00020e18;
          if (((param_2 == 3) &&
              (uVar3 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_24,0),
              uVar4 = DAT_00020e1c, uVar3 - 1 < 0xf)) &&
             (iVar1 = ssv_skb_alloc(iVar6,0x20), uVar4 = DAT_00020ef4, iVar1 != 0)) {
            skb_put(iVar1,0x20);
            puVar7 = *(undefined1 **)(iVar1 + 0xa4);
            memset(puVar7 + 2,0,0xe);
            puVar7[5] = 0;
            puVar7[2] = puVar7[2] & 0xf8 | 5;
            puVar7[6] = 0;
            puVar7[3] = 0xd;
            puVar7[7] = 0;
            puVar7[4] = 0x26;
            puVar7[1] = 0;
            *puVar7 = 0x20;
            memset(puVar7 + 0x10,0,0x10);
            puVar7[0x1c] = (char)uVar3;
            (**(code **)(*(int *)(*(int *)(iVar6 + 0x210) + 0x10) + 0x6c))
                      (*(undefined4 *)(*(int *)(iVar6 + 0x210) + 0x14),iVar1);
            uVar4 = DAT_00020e20;
            goto LAB_00020be0;
          }
        }
        else {
          iVar1 = strcmp(__s1,DAT_00020e24);
          if (iVar1 == 0) {
            uVar4 = DAT_00020e28;
            if (param_2 == 3) {
              uVar3 = simple_strtoul(*(undefined4 *)(param_3 + 8),&iStack_24,0);
              iVar1 = ssv_skb_alloc(iVar6,0x20);
              uVar4 = DAT_00020ef4;
              if (iVar1 != 0) {
                skb_put(iVar1,0x20);
                puVar7 = *(undefined1 **)(iVar1 + 0xa4);
                memset(puVar7 + 2,0,0xe);
                puVar7[5] = 0;
                puVar7[2] = puVar7[2] & 0xf8 | 5;
                puVar7[6] = 0;
                puVar7[3] = 0xd;
                puVar7[7] = 0;
                puVar7[4] = 0x23;
                puVar7[1] = 0;
                *puVar7 = 0x20;
                memset(puVar7 + 0x10,0,0x10);
                puVar7[0x16] = (char)uVar3;
                (**(code **)(*(int *)(*(int *)(iVar6 + 0x210) + 0x10) + 0x6c))
                          (*(undefined4 *)(*(int *)(iVar6 + 0x210) + 0x14),iVar1);
                uVar4 = DAT_00020e2c;
                goto LAB_00020be0;
              }
            }
          }
          else {
            iVar1 = strcmp(__s1,DAT_00020e30);
            if (iVar1 == 0) {
              iVar1 = ssv_skb_alloc(iVar6,0x20);
              uVar4 = DAT_00020ef4;
              if (iVar1 != 0) {
                skb_put(iVar1,0x20);
                puVar7 = *(undefined1 **)(iVar1 + 0xa4);
                memset(puVar7 + 2,0,0xe);
                puVar7[5] = 0;
                puVar7[2] = puVar7[2] & 0xf8 | 5;
                puVar7[6] = 0;
                puVar7[3] = 0xd;
                puVar7[7] = 0;
                puVar7[4] = 0x21;
                puVar7[1] = 0;
                *puVar7 = 0x20;
                memset(puVar7 + 0x10,0,0x10);
                (**(code **)(*(int *)(*(int *)(iVar6 + 0x210) + 0x10) + 0x6c))
                          (*(undefined4 *)(*(int *)(iVar6 + 0x210) + 0x14),iVar1);
                uVar4 = DAT_00020e34;
              }
            }
            else {
              iVar1 = strcmp(__s1,DAT_00020e38);
              if (iVar1 == 0) {
                iVar1 = ssv_skb_alloc(iVar6,0x20);
                uVar4 = DAT_00020ef4;
                if (iVar1 != 0) {
                  skb_put(iVar1,0x20);
                  puVar7 = *(undefined1 **)(iVar1 + 0xa4);
                  memset(puVar7 + 2,0,0xe);
                  puVar7[5] = 0;
                  puVar7[2] = puVar7[2] & 0xf8 | 5;
                  puVar7[6] = 0;
                  puVar7[3] = 0xd;
                  puVar7[7] = 0;
                  puVar7[4] = 0x24;
                  puVar7[1] = 0;
                  *puVar7 = 0x20;
                  memset(puVar7 + 0x10,0,0x10);
                  (**(code **)(*(int *)(*(int *)(iVar6 + 0x210) + 0x10) + 0x6c))
                            (*(undefined4 *)(*(int *)(iVar6 + 0x210) + 0x14),iVar1);
                  uVar4 = DAT_00020e3c;
                }
              }
              else {
                iVar1 = strcmp(__s1,DAT_00020ee8);
                if (iVar1 == 0) {
                  iVar1 = ssv_skb_alloc(iVar6,0x20);
                  uVar4 = DAT_00020ef4;
                  if (iVar1 != 0) {
                    skb_put(iVar1,0x20);
                    puVar7 = *(undefined1 **)(iVar1 + 0xa4);
                    *(undefined4 *)(puVar7 + 2) = 0;
                    *(undefined4 *)(puVar7 + 6) = 0;
                    *(undefined2 *)(puVar7 + 10) = 0;
                    puVar7[2] = puVar7[2] & 0xf8 | 5;
                    puVar7[4] = 0x25;
                    puVar7[3] = 0xd;
                    puVar7[0xc] = 0x25;
                    puVar7[0xe] = 0xd;
                    puVar7[5] = 0;
                    *puVar7 = 0x20;
                    puVar7[6] = 0;
                    puVar7[7] = 0;
                    puVar7[0xd] = 0;
                    puVar7[0xf] = 0;
                    puVar7[1] = 0;
                    memset(puVar7 + 0x10,0,0x10);
                    (**(code **)(*(int *)(*(int *)(iVar6 + 0x210) + 0x10) + 0x6c))
                              (*(undefined4 *)(*(int *)(iVar6 + 0x210) + 0x14),iVar1);
                    snprintf_res(iVar5,DAT_00020eec,*(undefined4 *)(iVar6 + 0x1440));
                    uVar3 = *(uint *)(iVar6 + 0x1444);
                    uVar4 = DAT_00020ef0;
                    goto LAB_00020be0;
                  }
                }
                else {
                  iVar1 = strcmp(__s1,DAT_00020ef8);
                  uVar2 = DAT_00020efc;
                  uVar4 = DAT_00020df8;
                  if (iVar1 == 0) {
                    *(uint *)(iVar6 + 0x878) = *(uint *)(iVar6 + 0x878) | 0x180;
                    uVar4 = uVar2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  snprintf_res(iVar5,uVar4);
  return;
}



/* ===== ssv6020_cmd_turismoE_rfphy_ops @ 00020f00 size=114 ===== */

void ssv6020_cmd_turismoE_rfphy_ops(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined4 *puVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = 0x28;
  }
  iVar1 = ssv_skb_alloc(param_1,uVar6);
  if (iVar1 == 0) {
    return;
  }
  skb_put(iVar1,uVar6);
  puVar4 = *(undefined2 **)(iVar1 + 0xa4);
  memset(puVar4 + 1,0,0x12);
  *(uint *)(puVar4 + 2) = param_2;
  *(undefined1 *)(puVar4 + 1) = 5;
  *(uint *)(puVar4 + 6) = param_2 | 0xd0000;
  *(undefined1 *)((int)puVar4 + 3) = 0xd;
  *puVar4 = uVar6;
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar5 = (undefined4 *)(puVar4 + 8);
    do {
      puVar3 = puVar2 + 1;
      *puVar5 = *puVar2;
      puVar2 = puVar3;
      puVar5 = puVar5 + 1;
    } while (puVar3 != param_3 + 6);
  }
                    /* WARNING: Could not recover jumptable at 0x00020f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
            (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
  return;
}



/* ===== ssv6020_turismoE_set_channel @ 00020f72 size=276 ===== */

undefined4
ssv6020_turismoE_set_channel(int param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *__src;
  undefined1 *puVar5;
  int iVar6;
  
  iVar3 = ssv_skb_alloc(param_1,0x27d);
  if (iVar3 == 0) {
    printk(DAT_0002108c,DAT_00021088);
    uVar4 = 0xffffffff;
  }
  else {
    skb_put(iVar3,0x27d);
    puVar5 = *(undefined1 **)(iVar3 + 0xa4);
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    *(undefined2 *)(puVar5 + 10) = 0;
    puVar5[2] = puVar5[2] & 0xf8 | 5;
    puVar5[4] = 1;
    puVar5[0xc] = 1;
    puVar5[3] = 0xd;
    puVar5[0xe] = 0xd;
    puVar5[5] = 0;
    *puVar5 = 0x7d;
    puVar5[6] = 0;
    puVar5[1] = 2;
    puVar5[7] = 0;
    puVar5[0xd] = 0;
    puVar5[0xf] = 0;
    memset(puVar5 + 0x10,0,0x26d);
    uVar2 = *(undefined2 *)(param_2 + 10);
    puVar5[0x12] = param_3;
    puVar5[0x13] = (char)param_4;
    *(undefined2 *)(puVar5 + 0x10) = uVar2;
    if ((*(char *)(param_1 + 0xd5a) == '\0') ||
       ((*(char *)(param_1 + 0x979) != '\0' && (*(char *)(param_1 + 0xd58) != '\0')))) {
      puVar5[0x14] = 1;
      if ((*(char *)(param_1 + 0x1028) != '\0') || (*(int *)(param_2 + 0xc) << 0x1e < 0)) {
        puVar5[0x15] = 1;
      }
      memcpy(puVar5 + 0x16,(void *)(param_1 + 0xd62),0x25f);
      if (*(ushort *)(param_2 + 10) < 0xf) {
        iVar6 = 0x1234;
        uVar1 = *(ushort *)(param_1 + 0x1234);
        __src = (void *)(param_1 + 0x1034);
      }
      else {
        iVar6 = 0x1436;
        puVar5[0x68] = 1;
        uVar1 = *(ushort *)(param_1 + 0x1436);
        __src = (void *)(param_1 + 0x1236);
      }
      memcpy(puVar5 + 0x6d,__src,(uint)uVar1);
      *(uint *)(puVar5 + 0x69) = (uint)*(ushort *)(param_1 + iVar6);
    }
    printk(DAT_00021090,uVar2,param_3,param_4);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar3);
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0x9fa) = 0;
  }
  return uVar4;
}



/* ===== ssv6020_turismoE_update_rf_table @ 00021094 size=1200 ===== */

void ssv6020_turismoE_update_rf_table(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  
  puVar12 = (undefined1 *)(param_1 + 0xe14);
  memcpy(puVar12,DAT_00021214,0x12e);
  uVar3 = DAT_00021550;
  if (*(char *)(param_1 + 0xdb8) == '\0') {
    if (*(int *)(param_1 + 0x358) << 0x1b < 0) {
      uVar7 = *(undefined1 *)(param_1 + 0x7e0);
      *(undefined1 *)(param_1 + 0xe1b) = uVar7;
      *(undefined1 *)(param_1 + 0xe1c) = uVar7;
      *(undefined1 *)(param_1 + 0xe3f) = uVar7;
      *(undefined1 *)(param_1 + 0xe40) = uVar7;
      *(undefined1 *)(param_1 + 0xf31) = uVar7;
      *(undefined1 *)(param_1 + 0xf32) = uVar7;
      *(undefined1 *)(param_1 + 0xe2d) = uVar7;
      *(undefined1 *)(param_1 + 0xe2e) = uVar7;
      *(undefined1 *)(param_1 + 0xf1f) = uVar7;
      *(undefined1 *)(param_1 + 0xf20) = uVar7;
      uVar5 = uVar7;
    }
    else {
      uVar7 = *(undefined1 *)(param_1 + 0xe1c);
      uVar5 = *(undefined1 *)(param_1 + 0xe1b);
      uVar3 = DAT_0002157c;
    }
    printk(uVar3,uVar5,uVar7);
    if (*(char *)(param_1 + 0xdb8) != '\0') goto LAB_00021108;
    iVar6 = *(int *)(param_1 + 0xd90);
    if ((*(int *)(param_1 + 0x358) << 0x12 < 0) && (*(int *)(param_1 + 0xc88) << 0x1f < 0)) {
      uVar9 = (*(uint *)(param_1 + 0x7f4) & 0xff) >> 4;
      if ((iVar6 != 0) && (uVar10 = uVar9 + iVar6, uVar10 - 1 < 0xf)) {
        printk(DAT_00021554,iVar6,uVar10);
        uVar9 = uVar10;
      }
      *(char *)(param_1 + 0xe4b) = (char)uVar9;
      printk(DAT_00021558,uVar9);
    }
    else {
      if ((iVar6 != 0) && (iVar11 = (uint)*(byte *)(param_1 + 0xe4b) + iVar6, iVar11 - 1U < 0xf)) {
        printk(DAT_00021554,iVar6,iVar11);
        *(char *)(param_1 + 0xe4b) = (char)iVar11;
      }
      printk(DAT_00021580);
    }
    if (*(char *)(param_1 + 0xdb8) != '\0') goto LAB_00021110;
    iVar6 = *(int *)(param_1 + 0xd94);
    if ((*(int *)(param_1 + 0x358) << 0x13 < 0) && (*(int *)(param_1 + 0xc88) << 0x1e < 0)) {
      uVar9 = (*(uint *)(param_1 + 0x7f0) & 0xff) >> 4;
      if ((iVar6 != 0) && (uVar10 = uVar9 + iVar6, uVar10 - 1 < 9)) {
        printk(DAT_0002155c,iVar6,uVar10);
        uVar9 = uVar10;
      }
      uVar3 = DAT_00021560;
      uVar4 = DAT_00021584;
      if (uVar9 - 1 < 9) {
        cVar2 = (char)uVar9;
        *(char *)(param_1 + 0xe4f) = cVar2;
        *(char *)(param_1 + 0xe4c) = cVar2 + '\x06';
        *(char *)(param_1 + 0xe4d) = cVar2 + '\x04';
        *(char *)(param_1 + 0xe4e) = cVar2 + '\x02';
        uVar4 = uVar3;
      }
      printk(uVar4,uVar9);
    }
    else {
      if ((iVar6 != 0) && (iVar11 = (uint)*(byte *)(param_1 + 0xe4f) + iVar6, iVar11 - 1U < 9)) {
        printk(DAT_0002155c,iVar6,iVar11);
        cVar2 = (char)iVar11;
        *(char *)(param_1 + 0xe4f) = cVar2;
        *(char *)(param_1 + 0xe4c) = cVar2 + '\x06';
        *(char *)(param_1 + 0xe4d) = cVar2 + '\x04';
        *(char *)(param_1 + 0xe4e) = cVar2 + '\x02';
      }
      printk(DAT_00021588);
    }
    if (*(char *)(param_1 + 0xdb8) != '\0') goto LAB_00021130;
    iVar6 = *(int *)(param_1 + 0xd98);
    if ((*(int *)(param_1 + 0x358) << 0x13 < 0) && (*(int *)(param_1 + 0xc88) << 0x1d < 0)) {
      uVar9 = *(uint *)(param_1 + 0x7f0) & 0xf;
      if ((iVar6 != 0) && ((uVar9 + iVar6) - 1 < 9)) {
        printk(DAT_00021564);
        uVar9 = uVar9 + iVar6;
      }
      uVar3 = DAT_00021568;
      uVar4 = DAT_0002158c;
      if (uVar9 - 1 < 9) {
        cVar2 = (char)uVar9;
        *(char *)(param_1 + 0xe53) = cVar2;
        *(char *)(param_1 + 0xe50) = cVar2 + '\x06';
        *(char *)(param_1 + 0xe51) = cVar2 + '\x04';
        *(char *)(param_1 + 0xe52) = cVar2 + '\x02';
        uVar4 = uVar3;
      }
      printk(uVar4,uVar9);
    }
    else {
      if ((iVar6 != 0) && (iVar11 = (uint)*(byte *)(param_1 + 0xe53) + iVar6, iVar11 - 1U < 9)) {
        printk(DAT_00021590,iVar6,iVar11);
        cVar2 = (char)iVar11;
        *(char *)(param_1 + 0xe53) = cVar2;
        *(char *)(param_1 + 0xe50) = cVar2 + '\x06';
        *(char *)(param_1 + 0xe51) = cVar2 + '\x04';
        *(char *)(param_1 + 0xe52) = cVar2 + '\x02';
      }
      printk(DAT_00021594);
    }
    if (*(char *)(param_1 + 0xdb8) != '\0') goto LAB_00021150;
    iVar6 = *(int *)(param_1 + 0xd9c);
    if ((*(int *)(param_1 + 0x358) << 0x12 < 0) && (*(int *)(param_1 + 0xc88) << 0x1c < 0)) {
      uVar9 = *(uint *)(param_1 + 0x7f4) & 0xf;
      if ((iVar6 != 0) && (uVar10 = uVar9 + iVar6, uVar10 - 1 < 9)) {
        printk(DAT_0002156c,iVar6,uVar10);
        uVar9 = uVar10;
      }
      uVar3 = DAT_00021570;
      uVar4 = DAT_00021598;
      if (uVar9 - 1 < 9) {
        cVar2 = (char)uVar9;
        *(char *)(param_1 + 0xe57) = cVar2;
        *(char *)(param_1 + 0xe54) = cVar2 + '\x06';
        *(char *)(param_1 + 0xe55) = cVar2 + '\x04';
        *(char *)(param_1 + 0xe56) = cVar2 + '\x02';
        uVar4 = uVar3;
      }
      printk(uVar4,uVar9);
    }
    else {
      if ((iVar6 != 0) && (iVar11 = (uint)*(byte *)(param_1 + 0xe57) + iVar6, iVar11 - 1U < 9)) {
        printk(DAT_0002156c,iVar6,iVar11);
        cVar2 = (char)iVar11;
        *(char *)(param_1 + 0xe57) = cVar2;
        *(char *)(param_1 + 0xe54) = cVar2 + '\x06';
        *(char *)(param_1 + 0xe55) = cVar2 + '\x04';
        *(char *)(param_1 + 0xe56) = cVar2 + '\x02';
      }
      printk(DAT_0002159c);
    }
    if (*(char *)(param_1 + 0xdb8) == '\0') {
      iVar6 = *(int *)(param_1 + 0xd8c);
      if (*(int *)(param_1 + 0x358) << 0x1a < 0) {
        uVar9 = *(uint *)(param_1 + 0x7e4) & 0xf;
        if ((iVar6 != 0) && (uVar10 = uVar9 + iVar6, uVar10 - 1 < 0xf)) {
          printk(DAT_00021574,iVar6,uVar10);
          uVar9 = uVar10;
        }
        printk(DAT_00021578,uVar9);
        do {
          puVar8 = puVar12 + 1;
          uVar7 = (undefined1)uVar9;
          *puVar12 = uVar7;
          puVar12[0x24] = uVar7;
          puVar12[0x116] = uVar7;
          puVar12[0x12] = uVar7;
          puVar12[0x104] = uVar7;
          puVar12 = puVar8;
        } while ((undefined1 *)(param_1 + 0xe1b) != puVar8);
      }
      else {
        if ((iVar6 != 0) && (iVar11 = (uint)*(byte *)(param_1 + 0xe14) + iVar6, iVar11 - 1U < 0xf))
        {
          printk(DAT_00021574,iVar6,iVar11);
          do {
            puVar8 = puVar12 + 1;
            uVar7 = (undefined1)iVar11;
            *puVar12 = uVar7;
            puVar12[0x24] = uVar7;
            puVar12[0x116] = uVar7;
            puVar12[0x12] = uVar7;
            puVar12[0x104] = uVar7;
            puVar12 = puVar8;
          } while ((undefined1 *)(param_1 + 0xe1b) != puVar8);
        }
        printk(DAT_000215a0);
      }
      goto LAB_00021198;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xe59) = *(undefined1 *)(param_1 + 0xde6);
    *(undefined1 *)(param_1 + 0xf41) = *(undefined1 *)(param_1 + 0xde6);
    *(undefined1 *)(param_1 + 0xe58) = *(undefined1 *)(param_1 + 0xde5);
    *(undefined1 *)(param_1 + 0xf40) = *(undefined1 *)(param_1 + 0xde5);
    *(char *)(param_1 + 0xe1c) = (char)*(undefined2 *)(param_1 + 0xdc6);
    *(char *)(param_1 + 0xe1b) = (char)((ushort)*(undefined2 *)(param_1 + 0xdc6) >> 8);
    uVar7 = (undefined1)*(undefined2 *)(param_1 + 0xde2);
    *(undefined1 *)(param_1 + 0xe40) = uVar7;
    *(undefined1 *)(param_1 + 0xf32) = uVar7;
    uVar7 = (undefined1)((ushort)*(undefined2 *)(param_1 + 0xde2) >> 8);
    *(undefined1 *)(param_1 + 0xe3f) = uVar7;
    *(undefined1 *)(param_1 + 0xf31) = uVar7;
    uVar5 = (undefined1)*(undefined2 *)(param_1 + 0xdd4);
    uVar7 = (undefined1)((ushort)*(undefined2 *)(param_1 + 0xdd4) >> 8);
    *(undefined1 *)(param_1 + 0xe2d) = uVar7;
    *(undefined1 *)(param_1 + 0xe2e) = uVar5;
    *(undefined1 *)(param_1 + 0xf1f) = uVar7;
    *(undefined1 *)(param_1 + 0xf20) = uVar5;
LAB_00021108:
    *(undefined1 *)(param_1 + 0xe4b) = *(undefined1 *)(param_1 + 0xe04);
LAB_00021110:
    *(undefined1 *)(param_1 + 0xe4d) = *(undefined1 *)(param_1 + 0xe06);
    *(undefined1 *)(param_1 + 0xe4e) = *(undefined1 *)(param_1 + 0xe07);
    *(undefined1 *)(param_1 + 0xe4c) = *(undefined1 *)(param_1 + 0xe05);
    *(undefined1 *)(param_1 + 0xe4f) = *(undefined1 *)(param_1 + 0xe08);
LAB_00021130:
    *(undefined1 *)(param_1 + 0xe51) = *(undefined1 *)(param_1 + 0xe0a);
    *(undefined1 *)(param_1 + 0xe52) = *(undefined1 *)(param_1 + 0xe0b);
    *(undefined1 *)(param_1 + 0xe50) = *(undefined1 *)(param_1 + 0xe09);
    *(undefined1 *)(param_1 + 0xe53) = *(undefined1 *)(param_1 + 0xe0c);
LAB_00021150:
    *(undefined1 *)(param_1 + 0xe55) = *(undefined1 *)(param_1 + 0xe0e);
    *(undefined1 *)(param_1 + 0xe56) = *(undefined1 *)(param_1 + 0xe0f);
    *(undefined1 *)(param_1 + 0xe54) = *(undefined1 *)(param_1 + 0xe0d);
    *(undefined1 *)(param_1 + 0xe57) = *(undefined1 *)(param_1 + 0xe10);
  }
  puVar12 = (undefined1 *)(param_1 + 0xdba);
  do {
    puVar8 = puVar12 + 1;
    puVar12[0x5a] = *puVar12;
    puVar12[0x7e] = puVar12[0x1c];
    puVar12[0x170] = puVar12[0x1c];
    puVar12[0x6c] = puVar12[0xe];
    puVar12[0x15e] = puVar12[0xe];
    puVar12 = puVar8;
  } while ((undefined1 *)(param_1 + 0xdc1) != puVar8);
LAB_00021198:
  *(uint *)(param_1 + 0xe8e) = (uint)(*(int *)(param_1 + 0x7b0) != 1);
  *(char *)(param_1 + 0xe9b) = (char)*(undefined4 *)(param_1 + 0xd74);
  bVar1 = *(int *)(param_1 + 0xd70) != 0;
  *(bool *)(param_1 + 0xe49) = bVar1;
  *(bool *)(param_1 + 0xf3b) = bVar1;
  *(bool *)(param_1 + 0xe25) = bVar1;
  *(bool *)(param_1 + 0xe37) = bVar1;
  *(bool *)(param_1 + 0xf29) = bVar1;
  if (*(int *)(param_1 + 0x358) << 0x11 < 0) {
    uVar9 = *(uint *)(param_1 + 0x7f8) & 0xf;
    printk(DAT_00021218,uVar9);
    uVar7 = (undefined1)uVar9;
    *(undefined1 *)(param_1 + 0xe9c) = uVar7;
    *(undefined1 *)(param_1 + 0xea0) = uVar7;
    *(undefined1 *)(param_1 + 0xf3e) = uVar7;
    *(undefined1 *)(param_1 + 0xe9e) = uVar7;
    *(undefined1 *)(param_1 + 0xf3c) = uVar7;
    *(undefined1 *)(param_1 + 0xe9d) = uVar7;
    *(undefined1 *)(param_1 + 0xea1) = uVar7;
    *(undefined1 *)(param_1 + 0xf3f) = uVar7;
    *(undefined1 *)(param_1 + 0xe9f) = uVar7;
    *(undefined1 *)(param_1 + 0xf3d) = uVar7;
    return;
  }
  printk(DAT_000215a4);
  return;
}



/* ===== ssv6020_turismoE_set_pll_phy_rf @ 000215a8 size=280 ===== */

undefined4 ssv6020_turismoE_set_pll_phy_rf(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar7 = *param_1;
  iVar3 = ssv_skb_alloc(iVar7,0x14e);
  if (iVar3 == 0) {
    printk(DAT_000216cc,DAT_000216c8);
    return 0xffffffff;
  }
  skb_put(iVar3,0x14e);
  puVar6 = *(undefined1 **)(iVar3 + 0xa4);
  *(undefined4 *)(puVar6 + 2) = 0;
  *(undefined4 *)(puVar6 + 6) = 0;
  *(undefined2 *)(puVar6 + 10) = 0;
  puVar6[2] = puVar6[2] & 0xf8 | 5;
  puVar6[4] = 0;
  puVar6[3] = 0xd;
  puVar6[0xe] = 0xd;
  puVar6[5] = 0;
  *puVar6 = 0x4e;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xf] = 0;
  puVar6[1] = 1;
  memset(puVar6 + 0x10,0,0x13e);
  if (param_1[0x1e9] << 0x1c < 0) {
    puVar6[0x14] = puVar6[0x14] & 0xf0 | 1;
  }
  bVar1 = puVar6[0x15];
  puVar6[0x14] = puVar6[0x14] & 0xf | (param_1[0x362] != 1) << 4;
  bVar2 = *(byte *)((int)param_1 + 0xd01) & 1;
  puVar6[0x15] = bVar1 & 0xfe | bVar2;
  puVar6[0x15] = bVar1 & 0xfc | bVar2 | (*(byte *)(param_1 + 0x340) & 1) << 1;
  if ((uint)param_1[0x1eb] < 8) {
    uVar5 = (uint)*(byte *)(DAT_000216c0 + param_1[0x1eb] + 0x70e);
  }
  else {
    printk(DAT_000216c4);
    uVar5 = 0x28;
  }
  *(uint *)(puVar6 + 0x10) = uVar5;
  puVar6[0x16] = 0xa0;
  puVar6[0x17] = 0;
  puVar6[0x15] = puVar6[0x15] & 0xfb | (*(byte *)((int)param_1 + 0xdb5) & 1) << 2;
  memcpy(puVar6 + 0x20,param_1 + 0x385,0x12e);
  *(uint *)(puVar6 + 0x9a) = (uint)(param_1[0x1ec] != 1);
  iVar7 = *(int *)(iVar7 + 0x210);
                    /* WARNING: Could not recover jumptable at 0x000216a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(int *)(iVar7 + 0x10) + 0x6c))(*(undefined4 *)(iVar7 + 0x14),iVar3);
  return uVar4;
}



/* ===== ssv6020_turismoE_dump_rf_reg @ 000216d0 size=92 ===== */

bool ssv6020_turismoE_dump_rf_reg(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = ssv_skb_alloc(iVar3,0x10);
  if (iVar1 != 0) {
    skb_put(iVar1,0x10);
    puVar2 = *(undefined1 **)(iVar1 + 0xa4);
    memset(puVar2 + 2,0,0x12);
    puVar2[2] = 5;
    puVar2[4] = 7;
    puVar2[3] = 0xd;
    *puVar2 = 0x10;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[1] = 0;
    iVar3 = *(int *)(iVar3 + 0x210);
    (**(code **)(*(int *)(iVar3 + 0x10) + 0x6c))(*(undefined4 *)(iVar3 + 0x14),iVar1);
  }
  else {
    printk(DAT_00021730,DAT_0002172c);
  }
  return iVar1 != 0;
}



/* ===== ssv6020_turismoE_dump_phy_reg @ 00021734 size=92 ===== */

bool ssv6020_turismoE_dump_phy_reg(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = ssv_skb_alloc(iVar3,0x10);
  if (iVar1 != 0) {
    skb_put(iVar1,0x10);
    puVar2 = *(undefined1 **)(iVar1 + 0xa4);
    memset(puVar2 + 2,0,0x12);
    puVar2[2] = 5;
    puVar2[4] = 6;
    puVar2[3] = 0xd;
    *puVar2 = 0x10;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[1] = 0;
    iVar3 = *(int *)(iVar3 + 0x210);
    (**(code **)(*(int *)(iVar3 + 0x10) + 0x6c))(*(undefined4 *)(iVar3 + 0x14),iVar1);
  }
  else {
    printk(DAT_00021794,DAT_00021790);
  }
  return iVar1 != 0;
}



/* ===== ssv6020_turismoE_set_rf_enable @ 00021798 size=128 ===== */

undefined4 ssv6020_turismoE_set_rf_enable(int *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar1 = ssv_skb_alloc(iVar4,0x10);
  if (iVar1 == 0) {
    printk(DAT_0002181c,DAT_00021818);
    uVar3 = 0;
  }
  else {
    skb_put(iVar1,0x10);
    puVar2 = memset(*(void **)(iVar1 + 0xa4),0,0x14);
    puVar2[2] = 5;
    puVar2[3] = 0xd;
    if (param_2 == 0) {
      puVar2[5] = 0;
      puVar2[4] = 3;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[0xc] = 3;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0xd;
      puVar2[0xf] = 0;
    }
    else {
      puVar2[5] = 0;
      puVar2[4] = 2;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[0xc] = 2;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0xd;
      puVar2[0xf] = 0;
    }
    *puVar2 = 0x10;
    puVar2[1] = 0;
    iVar4 = *(int *)(iVar4 + 0x210);
    (**(code **)(*(int *)(iVar4 + 0x10) + 0x6c))(*(undefined4 *)(iVar4 + 0x14),iVar1);
    uVar3 = 1;
  }
  return uVar3;
}



/* ===== ssv6020_turismoE_init_PLL @ 00021820 size=100 ===== */

void ssv6020_turismoE_init_PLL(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = ssv_skb_alloc(iVar3,0x10);
  if (iVar1 == 0) {
    printk(DAT_00021888,DAT_00021884);
    return;
  }
  skb_put(iVar1,0x10);
  puVar2 = *(undefined1 **)(iVar1 + 0xa4);
  memset(puVar2 + 2,0,0x12);
  puVar2[3] = 0xd;
  puVar2[4] = 0xf;
  puVar2[0xc] = 0xf;
  puVar2[2] = 5;
  puVar2[0xe] = 0xd;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  *puVar2 = 0x10;
  puVar2[1] = 0;
  iVar3 = *(int *)(iVar3 + 0x210);
                    /* WARNING: Could not recover jumptable at 0x00021882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar3 + 0x10) + 0x6c))(*(undefined4 *)(iVar3 + 0x14),iVar1);
  return;
}



/* ===== ssv6020_cmd_turismoE_rf @ 0002188c size=2648 ===== */

void ssv6020_cmd_turismoE_rf(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  
  iVar8 = *param_1;
  iVar7 = iVar8 + 0x9c0;
  if (param_2 < 2) {
    snprintf_res(iVar7,DAT_00021bf4,0);
    uVar6 = DAT_000223cc;
    if (*(int *)(iVar8 + 0x878) == 0) {
      uVar6 = DAT_00021bf8;
    }
    goto LAB_00021974;
  }
  pcVar9 = *(char **)(param_3 + 4);
  iVar2 = strcmp(pcVar9,DAT_00021bfc);
  if (iVar2 == 0) {
    uVar3 = 0;
    if (param_2 == 3) {
      uVar3 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
    }
    iVar2 = ssv_skb_alloc(iVar8,0x28);
    uVar6 = DAT_000223ac;
    if (iVar2 == 0) goto LAB_00021974;
    skb_put(iVar2,0x28);
    puVar10 = *(undefined1 **)(iVar2 + 0xa4);
    *(undefined4 *)(puVar10 + 2) = 0;
    *(undefined4 *)(puVar10 + 6) = 0;
    *(undefined2 *)(puVar10 + 10) = 0;
    puVar10[2] = puVar10[2] & 0xf8 | 5;
    puVar10[4] = 0x10;
    puVar10[5] = 0;
    puVar10[3] = 0xd;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[0xc] = 0x10;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0xd;
    puVar10[0xf] = 0;
    *puVar10 = 0x28;
    puVar10[1] = 0;
    memset(puVar10 + 0x10,0,0x18);
    *(undefined4 *)(puVar10 + 0x10) = uVar3;
    puVar10[0x14] = 0xff;
    puVar10[0x15] = 0xff;
    puVar10[0x16] = 0xff;
    puVar10[0x17] = 0xff;
    (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
              (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
  }
  else {
    iVar2 = strcmp(pcVar9,DAT_00021c04);
    uVar6 = DAT_00021c08;
    if (iVar2 == 0) {
      *(uint *)(iVar8 + 0x878) = *(uint *)(iVar8 + 0x878) | 0x180;
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00021c0c);
    if (iVar2 == 0) {
      if (param_2 != 2) {
        return;
      }
      iVar2 = ssv_skb_alloc(iVar8,0x28);
      uVar6 = DAT_000223ac;
      if (iVar2 != 0) {
        skb_put(iVar2,0x28);
        puVar10 = *(undefined1 **)(iVar2 + 0xa4);
        *(undefined4 *)(puVar10 + 2) = 0;
        *(undefined4 *)(puVar10 + 6) = 0;
        *(undefined2 *)(puVar10 + 10) = 0;
        puVar10[2] = puVar10[2] & 0xf8 | 5;
        puVar10[4] = 0x15;
        puVar10[0xc] = 0x15;
        puVar10[3] = 0xd;
        puVar10[0xe] = 0xd;
        puVar10[5] = 0;
        *puVar10 = 0x28;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[0xd] = 0;
        puVar10[0xf] = 0;
        puVar10[1] = 0;
        memset(puVar10 + 0x10,0,0x18);
        puVar10[0x1c] = 1;
        (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                  (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
        uVar6 = DAT_00021c10;
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00021c14);
    if (iVar2 == 0) {
      iVar2 = ssv_skb_alloc(iVar8,0x10);
      uVar6 = DAT_000223ac;
      if (iVar2 != 0) {
        skb_put(iVar2,0x10);
        puVar10 = *(undefined1 **)(iVar2 + 0xa4);
        memset(puVar10 + 2,0,0x12);
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[2] = puVar10[2] & 0xf8 | 5;
        puVar10[4] = 0x11;
        puVar10[3] = 0xd;
        puVar10[0xe] = 0xd;
        puVar10[0xc] = 0x11;
        puVar10[0xd] = 0;
        puVar10[0xf] = 0;
        *puVar10 = 0x10;
        puVar10[1] = 0;
        (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                  (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
        uVar6 = DAT_00021c18;
        *(uint *)(iVar8 + 0x878) = *(uint *)(iVar8 + 0x878) & 0xfffffe7f;
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00021c1c);
    if (iVar2 == 0) {
      if (1 < param_2 - 3U) {
        return;
      }
      uVar4 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
      if (((param_2 == 4) && (iVar2 = strcmp(*(char **)(param_3 + 0xc),DAT_00021c20), iVar2 == 0))
         && ((uVar4 - 3 < 2 || (uVar4 - 5 < 7)))) {
        uVar4 = uVar4 - 2;
        uVar11 = 3;
      }
      else {
        uVar11 = 1;
      }
      iVar2 = ssv_skb_alloc(iVar8,0x28);
      uVar6 = DAT_000223ac;
      if (iVar2 != 0) {
        skb_put(iVar2,0x28);
        puVar10 = *(undefined1 **)(iVar2 + 0xa4);
        *(undefined4 *)(puVar10 + 2) = 0;
        *(undefined4 *)(puVar10 + 6) = 0;
        *(undefined2 *)(puVar10 + 10) = 0;
        puVar10[2] = puVar10[2] & 0xf8 | 5;
        puVar10[4] = 0x16;
        puVar10[5] = 0;
        puVar10[3] = 0xd;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[0xc] = 0x16;
        puVar10[0xd] = 0;
        puVar10[0xe] = 0xd;
        puVar10[0xf] = 0;
        *puVar10 = 0x28;
        puVar10[1] = 0;
        memset(puVar10 + 0x10,0,0x18);
        puVar10[0x1e] = (char)uVar4;
        puVar10[0x1f] = uVar11;
        (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                  (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
        uVar6 = DAT_00021c24;
        local_38._2_1_ = uVar11;
LAB_00021b44:
        snprintf_res(iVar7,uVar6,uVar4,local_38._2_1_);
        return;
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00021c28);
    if (iVar2 == 0) {
      uVar6 = DAT_00021f1c;
      if (param_2 == 3) {
        uVar4 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
        uVar6 = DAT_00021c30;
        if ((uVar4 != 4) && (uVar4 < 0x2f)) {
          iVar2 = ssv_skb_alloc(iVar8,0x28);
          uVar6 = DAT_000223ac;
          if (iVar2 == 0) goto LAB_00021974;
          skb_put(iVar2,0x28);
          puVar10 = *(undefined1 **)(iVar2 + 0xa4);
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined2 *)(puVar10 + 10) = 0;
          puVar10[2] = puVar10[2] & 0xf8 | 5;
          puVar10[4] = 0x12;
          puVar10[5] = 0;
          puVar10[3] = 0xd;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[0xc] = 0x12;
          puVar10[0xd] = 0;
          puVar10[0xe] = 0xd;
          puVar10[0xf] = 0;
          *puVar10 = 0x28;
          puVar10[1] = 0;
          memset(puVar10 + 0x10,0,0x18);
          *(short *)(puVar10 + 0x18) = (short)uVar4;
          (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
          uVar6 = DAT_00021c2c;
        }
LAB_00021be6:
        snprintf_res(iVar7,uVar6,uVar4);
        return;
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00021f14);
    if (iVar2 == 0) {
      uVar6 = DAT_00021f1c;
      if (param_2 == 3) {
        iVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
        iVar5 = ssv_skb_alloc(iVar8,0x28);
        uVar6 = DAT_000223ac;
        if (iVar5 != 0) {
          uVar4 = (uint)(iVar2 != 0);
          skb_put(iVar5,0x28);
          puVar10 = *(undefined1 **)(iVar5 + 0xa4);
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined2 *)(puVar10 + 10) = 0;
          puVar10[2] = puVar10[2] & 0xf8 | 5;
          puVar10[4] = 0x17;
          puVar10[5] = 0;
          puVar10[3] = 0xd;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[0xc] = 0x17;
          puVar10[0xd] = 0;
          puVar10[0xe] = 0xd;
          puVar10[0xf] = 0;
          *puVar10 = 0x28;
          puVar10[1] = 0;
          memset(puVar10 + 0x10,0,0x18);
          puVar10[0x24] = iVar2 != 0;
          (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar5);
          uVar6 = DAT_00021f18;
          goto LAB_00021be6;
        }
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00021f20);
    if (iVar2 == 0) {
      uVar6 = DAT_00021f28;
      if (param_2 == 3) {
        uVar4 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
        iVar2 = ssv_skb_alloc(iVar8,0x28);
        uVar6 = DAT_000223ac;
        if (iVar2 != 0) {
          skb_put(iVar2,0x28);
          puVar10 = *(undefined1 **)(iVar2 + 0xa4);
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined2 *)(puVar10 + 10) = 0;
          puVar10[2] = puVar10[2] & 0xf8 | 5;
          puVar10[4] = 0x13;
          puVar10[5] = 0;
          puVar10[3] = 0xd;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[0xc] = 0x13;
          puVar10[0xd] = 0;
          puVar10[0xe] = 0xd;
          puVar10[0xf] = 0;
          *puVar10 = 0x28;
          puVar10[1] = 0;
          memset(puVar10 + 0x10,0,0x18);
          *(short *)(puVar10 + 0x1a) = (short)uVar4;
          (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
          uVar6 = DAT_00021f24;
          goto LAB_00021be6;
        }
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00021f2c);
    if (iVar2 == 0) {
      uVar6 = DAT_00021f38;
      if (param_2 == 2) {
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_00021f30,&local_38);
        uVar4 = local_38;
        (**(code **)(param_1[4] + 0x1c))(param_1[5],DAT_00021f30,&local_38);
        uVar4 = (uVar4 & 0xffff) >> 8;
        uVar6 = DAT_00021f34;
        goto LAB_00021b44;
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00021f3c);
    if (iVar2 == 0) {
      uVar6 = DAT_00021f44;
      if (param_2 == 3) {
        iVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
        iVar5 = ssv_skb_alloc(iVar8,0x28);
        uVar6 = DAT_000223ac;
        if (iVar5 != 0) {
          uVar4 = (uint)(iVar2 != 0);
          skb_put(iVar5,0x28);
          puVar10 = *(undefined1 **)(iVar5 + 0xa4);
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined2 *)(puVar10 + 10) = 0;
          puVar10[2] = puVar10[2] & 0xf8 | 5;
          puVar10[4] = 0x18;
          puVar10[0xc] = 0x18;
          puVar10[3] = 0xd;
          puVar10[0xe] = 0xd;
          puVar10[5] = 0;
          *puVar10 = 0x28;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[0xd] = 0;
          puVar10[0xf] = 0;
          puVar10[1] = 0;
          memset(puVar10 + 0x10,0,0x18);
          puVar10[0x24] = puVar10[0x24] & 0xfd | (iVar2 != 0) << 1;
          (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar5);
          uVar6 = DAT_00021f40;
          goto LAB_00021be6;
        }
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00021f48);
    if (iVar2 == 0) {
      uVar6 = DAT_00021f50;
      if (param_2 == 3) {
        uVar4 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
        iVar2 = ssv_skb_alloc(iVar8,0x28);
        uVar6 = DAT_000223ac;
        if (iVar2 != 0) {
          if (0xe < uVar4) {
            uVar4 = 0xf;
          }
          skb_put(iVar2,0x28);
          puVar10 = *(undefined1 **)(iVar2 + 0xa4);
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined2 *)(puVar10 + 10) = 0;
          puVar10[2] = puVar10[2] & 0xf8 | 5;
          puVar10[4] = 0x19;
          puVar10[0xc] = 0x19;
          puVar10[3] = 0xd;
          puVar10[0xe] = 0xd;
          puVar10[5] = 0;
          *puVar10 = 0x28;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[0xd] = 0;
          puVar10[0xf] = 0;
          puVar10[1] = 0;
          memset(puVar10 + 0x10,0,0x18);
          puVar10[0x24] = puVar10[0x24] & 3 | (byte)((uVar4 & 0x3f) << 2);
          puVar10[0x25] = puVar10[0x25] & 0xfc | (byte)((uVar4 & 0xff) >> 6);
          (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
          uVar6 = DAT_00021f4c;
          goto LAB_00021be6;
        }
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00022240);
    if (iVar2 == 0) {
      uVar6 = DAT_00022248;
      if (param_2 == 3) {
        uVar4 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
        iVar2 = ssv_skb_alloc(iVar8,0x28);
        uVar6 = DAT_000223ac;
        if (iVar2 != 0) {
          if (0xe < uVar4) {
            uVar4 = 0xf;
          }
          skb_put(iVar2,0x28);
          puVar10 = *(undefined1 **)(iVar2 + 0xa4);
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined2 *)(puVar10 + 10) = 0;
          puVar10[2] = puVar10[2] & 0xf8 | 5;
          puVar10[4] = 0x1c;
          puVar10[0xc] = 0x1c;
          puVar10[3] = 0xd;
          puVar10[0xe] = 0xd;
          puVar10[5] = 0;
          *puVar10 = 0x28;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[0xd] = 0;
          puVar10[0xf] = 0;
          puVar10[1] = 0;
          memset(puVar10 + 0x10,0,0x18);
          puVar10[0x25] = puVar10[0x25] & 0x7f | (byte)((uVar4 & 1) << 7);
          puVar10[0x26] = puVar10[0x26] & 0x80 | (byte)((uVar4 & 0xff) >> 1);
          (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
          uVar6 = DAT_00022244;
          goto LAB_00021be6;
        }
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_0002224c);
    if (iVar2 == 0) {
      uVar6 = DAT_00022254;
      if (param_2 == 3) {
        iVar2 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
        uVar4 = 0;
        if (iVar2 != 0) {
          uVar4 = 3;
        }
        iVar2 = ssv_skb_alloc(iVar8,0x28);
        uVar6 = DAT_000223ac;
        if (iVar2 != 0) {
          skb_put(iVar2,0x28);
          puVar10 = *(undefined1 **)(iVar2 + 0xa4);
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined2 *)(puVar10 + 10) = 0;
          puVar10[2] = puVar10[2] & 0xf8 | 5;
          puVar10[4] = 0x1a;
          puVar10[0xc] = 0x1a;
          puVar10[3] = 0xd;
          puVar10[0xe] = 0xd;
          puVar10[5] = 0;
          *puVar10 = 0x28;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[0xd] = 0;
          puVar10[0xf] = 0;
          puVar10[1] = 0;
          memset(puVar10 + 0x10,0,0x18);
          puVar10[0x25] = puVar10[0x25] & 0xc3 | (byte)(uVar4 << 2);
          (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
          uVar6 = DAT_00022250;
          goto LAB_00021be6;
        }
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00022258);
    if (iVar2 == 0) {
      uVar6 = DAT_00022260;
      if (param_2 == 3) {
        uVar4 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
        iVar2 = ssv_skb_alloc(iVar8,0x28);
        uVar6 = DAT_000223ac;
        if (iVar2 != 0) {
          skb_put(iVar2,0x28);
          puVar10 = *(undefined1 **)(iVar2 + 0xa4);
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined2 *)(puVar10 + 10) = 0;
          puVar10[2] = puVar10[2] & 0xf8 | 5;
          puVar10[4] = 0x1b;
          puVar10[0xc] = 0x1b;
          puVar10[3] = 0xd;
          puVar10[0xe] = 0xd;
          puVar10[5] = 0;
          *puVar10 = 0x28;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[0xd] = 0;
          puVar10[0xf] = 0;
          puVar10[1] = 0;
          memset(puVar10 + 0x10,0,0x18);
          puVar10[0x25] = puVar10[0x25] & 0xbf | (uVar4 == 0) << 6;
          (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
          uVar6 = DAT_0002225c;
          goto LAB_00021be6;
        }
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_00022264);
    if (iVar2 == 0) {
      uVar6 = DAT_00022278;
      if ((param_2 == 3) && (iVar2 = ssv_skb_alloc(iVar8,0x28), uVar6 = DAT_000223ac, iVar2 != 0)) {
        skb_put(iVar2,0x28);
        puVar10 = *(undefined1 **)(iVar2 + 0xa4);
        *(undefined4 *)(puVar10 + 2) = 0;
        *(undefined4 *)(puVar10 + 6) = 0;
        *(undefined2 *)(puVar10 + 10) = 0;
        puVar10[2] = puVar10[2] & 0xf8 | 5;
        puVar10[4] = 0x14;
        puVar10[0xc] = 0x14;
        puVar10[3] = 0xd;
        puVar10[0xe] = 0xd;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[0xd] = 0;
        puVar10[0xf] = 0;
        *puVar10 = 0x28;
        puVar10[1] = 0;
        memset(puVar10 + 0x10,0,0x18);
        pcVar9 = *(char **)(param_3 + 8);
        iVar5 = strcmp(pcVar9,DAT_00022268);
        if (iVar5 == 0) {
          bVar1 = true;
        }
        else {
          iVar5 = strcmp(pcVar9,DAT_0002226c);
          bVar1 = iVar5 == 0;
        }
        puVar10[0x1d] = bVar1;
        (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                  (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
        snprintf_res(iVar7,DAT_00022270,*(undefined4 *)(iVar8 + 0x1438));
        uVar4 = *(uint *)(iVar8 + 0x143c);
        uVar6 = DAT_00022274;
        goto LAB_00021be6;
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_000223a4);
    if (iVar2 == 0) {
      uVar6 = DAT_000223b0;
      if (param_2 == 3) {
        uVar4 = simple_strtoul(*(undefined4 *)(param_3 + 8),&local_38,0);
        iVar2 = ssv_skb_alloc(iVar8,0x28);
        uVar6 = DAT_000223ac;
        if (iVar2 != 0) {
          skb_put(iVar2,0x28);
          puVar10 = *(undefined1 **)(iVar2 + 0xa4);
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined2 *)(puVar10 + 10) = 0;
          puVar10[2] = puVar10[2] & 0xf8 | 5;
          puVar10[4] = 0x1d;
          puVar10[0xc] = 0x1d;
          puVar10[3] = 0xd;
          puVar10[0xe] = 0xd;
          puVar10[5] = 0;
          *puVar10 = 0x28;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[0xd] = 0;
          puVar10[0xf] = 0;
          puVar10[1] = 0;
          memset(puVar10 + 0x10,0,0x18);
          puVar10[0x26] = puVar10[0x26] & 0x7f | (byte)((uVar4 & 1) << 7);
          (**(code **)(*(int *)(*(int *)(iVar8 + 0x210) + 0x10) + 0x6c))
                    (*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14),iVar2);
          uVar6 = DAT_000223a8;
          goto LAB_00021be6;
        }
      }
      goto LAB_00021974;
    }
    iVar2 = strcmp(pcVar9,DAT_000223b4);
    if (iVar2 != 0) {
      iVar2 = strcmp(pcVar9,DAT_000223b8);
      uVar6 = DAT_000223bc;
      if (iVar2 == 0) {
        *(uint *)(iVar8 + 0x878) = *(uint *)(iVar8 + 0x878) | 0x180;
      }
      else {
        iVar2 = strcmp(pcVar9,DAT_000223c0);
        uVar6 = DAT_000223c8;
        if (iVar2 == 0) {
          *(uint *)(iVar8 + 0x878) = *(uint *)(iVar8 + 0x878) & 0xfffffe7f;
          ssv6020_cmd_turismoE_rfphy_ops(iVar8,0x11,0);
          uVar6 = DAT_000223c4;
        }
      }
      goto LAB_00021974;
    }
    memset(auStack_30,0,0x10);
    local_38 = 1;
    uStack_34 = 0xffffffff;
    ssv6020_cmd_turismoE_rfphy_ops(iVar8,0x10,&local_38);
  }
  uVar6 = DAT_00021c00;
  *(uint *)(iVar8 + 0x878) = *(uint *)(iVar8 + 0x878) | 0x180;
LAB_00021974:
  snprintf_res(iVar7,uVar6);
  return;
}



/* ===== ssv6020_turismoE_get_rf_table_size @ 000223d0 size=4 ===== */

undefined4 ssv6020_turismoE_get_rf_table_size(void)

{
  return 0;
}



/* ===== ssv6020_turismoE_load_rf_table @ 000223d4 size=2 ===== */

void ssv6020_turismoE_load_rf_table(void)

{
  return;
}



/* ===== ssv6020_get_pa_band @ 000223d6 size=50 ===== */

undefined4 ssv6020_get_pa_band(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xf) {
    return 0;
  }
  if (param_1 < 0x24) {
    return 1;
  }
  if (param_1 + -0x24 < 0x40) {
    return 2;
  }
  if (param_1 - 100U < 0x28) {
    return 3;
  }
  if (param_1 < 0x8c) {
    uVar1 = 0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



/* ===== ssv_attach_ssv6020_turismoE_BBRF @ 00022408 size=86 ===== */

void ssv_attach_ssv6020_turismoE_BBRF(int param_1)

{
  *(undefined4 *)(param_1 + 0x2a0) = DAT_00022460;
  *(undefined4 *)(param_1 + 0x2a4) = DAT_00022464;
  *(undefined4 *)(param_1 + 0x2a8) = DAT_00022468;
  *(undefined4 *)(param_1 + 0x2ac) = DAT_0002246c;
  *(undefined4 *)(param_1 + 0x2b0) = DAT_00022470;
  *(undefined4 *)(param_1 + 0x2b4) = DAT_00022474;
  *(undefined4 *)(param_1 + 0x2b8) = DAT_00022478;
  *(undefined4 *)(param_1 + 700) = DAT_0002247c;
  *(undefined4 *)(param_1 + 0x2c0) = DAT_00022480;
  *(undefined4 *)(param_1 + 0x2c4) = DAT_00022484;
  *(undefined4 *)(param_1 + 0x2c8) = DAT_00022488;
  *(undefined4 *)(param_1 + 0x17c) = DAT_0002248c;
  *(undefined4 *)(param_1 + 0x180) = DAT_00022490;
  *(undefined4 *)(param_1 + 0x184) = DAT_00022494;
  return;
}



/* ===== ssv_attach_ssv6020_turismoE_ext_BBRF @ 00022498 size=26 ===== */

void ssv_attach_ssv6020_turismoE_ext_BBRF(int param_1)

{
  *(undefined4 *)(param_1 + 0x17c) = DAT_000224b4;
  *(undefined4 *)(param_1 + 0x180) = DAT_000224b8;
  *(undefined4 *)(param_1 + 0x184) = DAT_000224bc;
  *(undefined4 *)(param_1 + 0x124) = DAT_000224c0;
  return;
}



/* ===== ssv_attach_ssv6020_turismoE_fpga_BBRF @ 000224c4 size=26 ===== */

void ssv_attach_ssv6020_turismoE_fpga_BBRF(int param_1)

{
  *(undefined4 *)(param_1 + 0x17c) = DAT_000224e0;
  *(undefined4 *)(param_1 + 0x180) = DAT_000224e4;
  *(undefined4 *)(param_1 + 0x184) = DAT_000224e8;
  *(undefined4 *)(param_1 + 0x124) = DAT_000224ec;
  return;
}



/* ===== ssv6xxx_hwif_hal_init @ 000224f0 size=4 ===== */

undefined4 ssv6xxx_hwif_hal_init(void)

{
  return 0;
}



/* ===== ssv6xxx_hwif_hal_exit @ 000224f4 size=2 ===== */

void ssv6xxx_hwif_hal_exit(void)

{
  return;
}



/* ===== ssv_hwif_read_reg @ 000224f8 size=10 ===== */

void ssv_hwif_read_reg(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00022500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*param_1 + 0x2c) + 8))(param_1 + -0xf);
  return;
}



/* ===== ssv6020_enable_sdio_async_interrupt @ 00022502 size=2 ===== */

void ssv6020_enable_sdio_async_interrupt(void)

{
  return;
}



/* ===== ssv6020_allow_sdio_reset @ 00022504 size=48 ===== */

void ssv6020_allow_sdio_reset(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint local_14;
  
  uVar1 = DAT_00022534;
  local_14 = param_2;
  ssv_hwif_read_reg(param_1,DAT_00022534,&local_14,param_4,param_1);
  (**(code **)(*(int *)(*param_1 + 0x2c) + 0xc))
            (param_1 + -0xf,uVar1,local_14 & 0xfffffffd | (param_2 & 1) << 1);
  return;
}



/* ===== ssv6020_disable_sdio_async_interrupt @ 00022538 size=2 ===== */

void ssv6020_disable_sdio_async_interrupt(void)

{
  return;
}



/* ===== ssv_attach_hwif_hal_ssv6020 @ 0002253a size=74 ===== */

void ssv_attach_hwif_hal_ssv6020
               (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = param_2;
  uStack_18 = param_3;
  ssv_hwif_read_reg(param_1,DAT_00022584,&uStack_1c,param_4,param_1);
  uVar2 = DAT_00022590;
  uVar1 = DAT_0002258c;
  ssv_hwif_read_reg(param_1,DAT_00022588,&uStack_1c);
  ssv_hwif_read_reg(param_1,DAT_00022594,&uStack_1c);
  cVar4 = uStack_1c._3_1_;
  printk(DAT_00022598,uStack_1c._3_1_);
  uVar3 = DAT_0002259c;
  uVar5 = DAT_000225a0;
  if (cVar4 != -0x60) {
    uVar5 = DAT_000225a4;
  }
  printk(uVar5);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return;
}



/* ===== ssv6xxx_sdio_property @ 000225a8 size=4 ===== */

undefined4 ssv6xxx_sdio_property(void)

{
  return 0;
}



/* ===== ssv6xxx_sdio_tx_req_cnt @ 000225ac size=6 ===== */

void ssv6xxx_sdio_tx_req_cnt(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}



/* ===== ssv6xxx_sdio_get_readsz @ 000225b2 size=64 ===== */

uint ssv6xxx_sdio_get_readsz(int param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint local_14;
  
  piVar5 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  iVar3 = *piVar5 + -8;
  iVar1 = param_1;
  local_14 = param_2;
  sdio_claim_host(iVar3);
  pcVar2 = *(code **)(*(int *)(piVar5[2] + 0x2c) + 8);
  iVar1 = (*pcVar2)(param_1,DAT_000225f4,&local_14,pcVar2,iVar1);
  if (iVar1 == 0) {
    uVar4 = local_14 & 0xffff;
  }
  else {
    uVar4 = 0;
    _dev_err(*(undefined4 *)(param_1 + 0x24),DAT_000225f8,iVar1);
  }
  sdio_release_host(iVar3);
  return uVar4;
}



/* ===== ssv6xxx_sdio_read_parameter @ 000225fc size=190 ===== */

void ssv6xxx_sdio_read_parameter(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  sdio_claim_host();
  *(undefined4 *)(param_2 + 0x920) = 0;
  uVar2 = sdio_readb(param_1,0,&local_1c);
  *(uint *)(param_2 + 0x920) = uVar2;
  iVar3 = sdio_readb(param_1,1,&local_1c);
  uVar2 = uVar2 | iVar3 << 8;
  *(uint *)(param_2 + 0x920) = uVar2;
  iVar3 = sdio_readb(param_1,2,&local_1c);
  *(undefined4 *)(param_2 + 0x924) = 0;
  *(uint *)(param_2 + 0x920) = uVar2 | iVar3 << 0x10;
  uVar2 = sdio_readb(param_1,0x70,&local_1c);
  *(uint *)(param_2 + 0x924) = uVar2;
  iVar3 = sdio_readb(param_1,0x71,&local_1c);
  uVar2 = uVar2 | iVar3 << 8;
  *(uint *)(param_2 + 0x924) = uVar2;
  iVar3 = sdio_readb(param_1,0x72,&local_1c);
  uVar1 = DAT_000226bc;
  *(uint *)(param_2 + 0x924) = uVar2 | iVar3 << 0x10;
  _dev_err(param_1 + 8,uVar1,*(undefined4 *)(param_2 + 0x920));
  local_1c = sdio_set_block_size(param_1,0x80);
  if (local_1c != 0) {
    printk(DAT_000226c0);
  }
  sdio_writeb(param_1,0,0x55,&local_1c);
  sdio_writeb(param_1,0,0xc,&local_1c);
  sdio_release_host(param_1);
  return;
}



/* ===== _is_glue_invalid @ 000226c4 size=36 ===== */

char _is_glue_invalid(int param_1)

{
  char cVar1;
  
  if ((param_1 == 0) || (cVar1 = *(char *)(param_1 + 0x92c), cVar1 == '\0')) {
    cVar1 = '\x01';
  }
  else if ((*(int *)(param_1 + 8) == 0) || (*(char *)(*(int *)(param_1 + 8) + 4) != '\0')) {
    if (*(uint *)(param_1 + 0x930) < 0xb) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
  }
  return cVar1;
}



/* ===== ssv6xxx_is_ready @ 000226e8 size=24 ===== */

undefined1 ssv6xxx_is_ready(int param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = _is_glue_invalid(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x40));
  if ((int)uVar2 == 0) {
    uVar1 = *(undefined1 *)((int)((ulonglong)uVar2 >> 0x20) + 0x92c);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== ssv6xxx_sdio_irq_handler @ 00022700 size=54 ===== */

void ssv6xxx_sdio_irq_handler(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x48);
  iVar1 = _is_glue_invalid(iVar2);
  if ((iVar1 == 0) && (*(int *)(iVar2 + 0x928) != 0)) {
    puVar3 = *(undefined4 **)(iVar2 + 8);
    *puVar3 = 1;
    sdio_release_host(param_1);
    (**(code **)(iVar2 + 0x928))(0,iVar2,extraout_r2,*(code **)(iVar2 + 0x928),param_4);
    sdio_claim_host(param_1);
    *puVar3 = 0;
  }
  return;
}



/* ===== ssv6xxx_sdio_irq_disable @ 00022736 size=110 ===== */

void ssv6xxx_sdio_irq_disable(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  iVar1 = _is_glue_invalid(piVar3);
  if (iVar1 == 0) {
    if ((piVar3[2] != 0) && (*(char *)(piVar3[2] + 0x30) != '\0')) {
      printk(DAT_000227a4);
    }
    iVar4 = *piVar3;
    piVar3 = (int *)piVar3[2];
    iVar1 = iVar4 + -8;
    if (iVar1 != 0) {
      while( true ) {
        sdio_claim_host(iVar1);
        if (*piVar3 == 0) break;
        sdio_release_host(iVar1);
        schedule_timeout(0x1e);
      }
      iVar2 = sdio_release_irq();
      if (iVar2 != 0) {
        _dev_err(iVar4,DAT_000227ac,iVar2);
      }
      sdio_release_host(iVar1);
      return;
    }
    if ((piVar3 != (int *)0x0) && ((char)piVar3[0xc] != '\0')) {
      printk(DAT_000227a8);
      return;
    }
  }
  return;
}



/* ===== ssv6xxx_sdio_support_scatter @ 000227b0 size=62 ===== */

undefined4
ssv6xxx_sdio_support_scatter(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = _is_glue_invalid(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x40));
  if ((int)uVar4 == 0) {
    iVar2 = *(int *)((ulonglong)uVar4 >> 0x20);
    uVar1 = *(ushort *)(**(int **)(iVar2 + -8) + 0x1ec);
    if (uVar1 < 8) {
      _dev_err(iVar2,DAT_000227f4,uVar1,8,param_4);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    _dev_err(param_1,DAT_000227f0);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== ssv6xxx_sdio_irq_setmask @ 000227f8 size=80 ===== */

void ssv6xxx_sdio_irq_setmask(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint local_14;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  local_14 = param_2;
  iVar1 = _is_glue_invalid(piVar2);
  if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
    iVar1 = *piVar2 + -8;
    sdio_claim_host(iVar1);
    sdio_writeb(iVar1,param_2 & 0xff,4,&local_14,param_1);
    sdio_release_host(iVar1);
    if (local_14 == 0) {
      piVar2[0x24c] = 0;
    }
    else {
      iVar1 = piVar2[0x24c];
      piVar2[0x24c] = iVar1 + 1U;
      if (10 < iVar1 + 1U) {
        printk(DAT_00022848);
      }
    }
  }
  return;
}



/* ===== ssv6xxx_sdio_irq_trigger @ 0002284c size=78 ===== */

void ssv6xxx_sdio_irq_trigger(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int local_14;
  undefined4 uStack_10;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = _is_glue_invalid(piVar2);
  if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
    iVar1 = *piVar2 + -8;
    sdio_claim_host(iVar1);
    sdio_writeb(iVar1,2,9,&local_14,param_1);
    sdio_release_host(iVar1);
    if (local_14 == 0) {
      piVar2[0x24c] = 0;
    }
    else {
      iVar1 = piVar2[0x24c];
      piVar2[0x24c] = iVar1 + 1U;
      if (10 < iVar1 + 1U) {
        printk(DAT_0002289c);
      }
    }
  }
  return;
}



/* ===== __ssv6xxx_sdio_write_reg @ 000228a0 size=146 ===== */

int __ssv6xxx_sdio_write_reg(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _is_glue_invalid();
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      iVar2 = *param_1 + -8;
      sdio_claim_host(iVar2);
      *(char *)(param_1 + 0x28) = (char)param_2;
      *(char *)((int)param_1 + 0xa1) = (char)((uint)param_2 >> 8);
      *(char *)(param_1 + 0x29) = (char)param_3;
      *(char *)((int)param_1 + 0xa2) = (char)((uint)param_2 >> 0x10);
      *(char *)((int)param_1 + 0xa3) = (char)((uint)param_2 >> 0x18);
      *(char *)((int)param_1 + 0xa5) = (char)((uint)param_3 >> 8);
      *(char *)((int)param_1 + 0xa6) = (char)((uint)param_3 >> 0x10);
      *(char *)((int)param_1 + 0xa7) = (char)((uint)param_3 >> 0x18);
      iVar1 = sdio_memcpy_toio(iVar2,param_1[0x249],param_1 + 0x28,8);
      sdio_release_host(iVar2);
      if (iVar1 == 0) {
        param_1[0x24c] = 0;
        return 0;
      }
      iVar2 = param_1[0x24c];
      param_1[0x24c] = iVar2 + 1U;
      if (iVar2 + 1U < 0xb) {
        return iVar1;
      }
      printk(DAT_00022934);
      return iVar1;
    }
    _dev_err(8,DAT_00022938);
  }
  return -1;
}



/* ===== ssv6xxx_sdio_write_reg @ 0002293c size=64 ===== */

int ssv6xxx_sdio_write_reg(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 3;
  iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x40);
  do {
    iVar1 = __ssv6xxx_sdio_write_reg(iVar3,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(int *)(iVar3 + 8);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x30) != '\0')) {
    printk(DAT_00022980,DAT_0002297c,param_2,param_3);
  }
  return iVar1;
}



/* ===== ssv6xxx_sdio_sysplf_reset @ 00022984 size=20 ===== */

void ssv6xxx_sdio_sysplf_reset(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  uVar1 = ssv6xxx_sdio_write_reg();
  if ((int)uVar1 != 0) {
    printk(DAT_00022998,(int)((ulonglong)uVar1 >> 0x20),extraout_r2,in_r3);
    return;
  }
  return;
}



/* ===== ssv6xxx_sdio_read @ 0002299c size=118 ===== */

int ssv6xxx_sdio_read(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  iVar1 = _is_glue_invalid(piVar3);
  if (iVar1 == 0) {
    iVar4 = *piVar3 + -8;
    sdio_claim_host(iVar4);
    uVar2 = sdio_align_size(iVar4,*param_3);
    iVar1 = sdio_memcpy_fromio(iVar4,param_2,piVar3[0x248],uVar2);
    if (iVar1 != 0) {
      _dev_err(*(undefined4 *)(param_1 + 0x24),DAT_00022a18,DAT_00022a14,iVar1);
    }
    sdio_release_host(iVar4);
    if (iVar1 == 0) {
      piVar3[0x24c] = 0;
    }
    else {
      iVar4 = piVar3[0x24c];
      piVar3[0x24c] = iVar4 + 1U;
      if (10 < iVar4 + 1U) {
        printk(DAT_00022a1c);
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== ssv6xxx_sdio_write_sram @ 00022a20 size=146 ===== */

int ssv6xxx_sdio_write_sram(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_24;
  undefined4 uStack_20;
  
  local_24 = -1;
  piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  iVar1 = param_1;
  uStack_20 = param_3;
  uVar4 = _is_glue_invalid(piVar3);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    iVar2 = *piVar3 + -8;
    sdio_claim_host(iVar2);
    ssv6xxx_sdio_write_reg(param_1,DAT_00022ab4,param_2);
    sdio_writeb(iVar2,2,0xc,&local_24,iVar1);
    if ((local_24 == 0) &&
       (local_24 = sdio_memcpy_toio(iVar2,piVar3[0x248],param_3,param_4), local_24 == 0)) {
      sdio_writeb(iVar2,0,0xc,&local_24);
    }
    sdio_release_host(iVar2);
    iVar2 = local_24;
    if (local_24 == 0) {
      piVar3[0x24c] = 0;
    }
    else {
      iVar1 = piVar3[0x24c];
      piVar3[0x24c] = iVar1 + 1U;
      if (10 < iVar1 + 1U) {
        printk(DAT_00022ab8);
        iVar2 = local_24;
      }
    }
  }
  return iVar2;
}



/* ===== ssv6xxx_sdio_load_firmware @ 00022abc size=2 ===== */

int ssv6xxx_sdio_load_firmware(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int iStack_24;
  undefined4 uStack_20;
  
  iStack_24 = -1;
  piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  iVar1 = param_1;
  uStack_20 = param_3;
  uVar4 = _is_glue_invalid(piVar3);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    iVar2 = *piVar3 + -8;
    sdio_claim_host(iVar2);
    ssv6xxx_sdio_write_reg(param_1,DAT_00022ab4,param_2);
    sdio_writeb(iVar2,2,0xc,&iStack_24,iVar1);
    if ((iStack_24 == 0) &&
       (iStack_24 = sdio_memcpy_toio(iVar2,piVar3[0x248],param_3,param_4), iStack_24 == 0)) {
      sdio_writeb(iVar2,0,0xc,&iStack_24);
    }
    sdio_release_host(iVar2);
    iVar2 = iStack_24;
    if (iStack_24 == 0) {
      piVar3[0x24c] = 0;
    }
    else {
      iVar1 = piVar3[0x24c];
      piVar3[0x24c] = iVar1 + 1U;
      if (10 < iVar1 + 1U) {
        printk(DAT_00022ab8);
        iVar2 = iStack_24;
      }
    }
  }
  return iVar2;
}



/* ===== __ssv6xxx_sdio_read_reg @ 00022abe size=206 ===== */

int __ssv6xxx_sdio_read_reg(int *param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = _is_glue_invalid();
  if (iVar4 == 0) {
    if (param_1 != (int *)0x0) {
      iVar7 = *param_1;
      iVar6 = iVar7 + -8;
      sdio_claim_host(iVar6);
      *(char *)(param_1 + 0x20) = (char)param_2;
      *(char *)((int)param_1 + 0x81) = (char)((uint)param_2 >> 8);
      *(char *)((int)param_1 + 0x82) = (char)((uint)param_2 >> 0x10);
      *(char *)((int)param_1 + 0x83) = (char)((uint)param_2 >> 0x18);
      iVar4 = sdio_memcpy_toio(iVar6,param_1[0x249],param_1 + 0x20,4,param_4);
      uVar5 = DAT_00022b8c;
      if ((iVar4 == 0) &&
         (iVar4 = sdio_memcpy_fromio(iVar6,param_1 + 0x20,param_1[0x249],4), uVar5 = DAT_00022b94,
         iVar4 == 0)) {
        bVar1 = *(byte *)(param_1 + 0x20);
        *param_3 = (uint)bVar1;
        uVar2 = CONCAT11(*(undefined1 *)((int)param_1 + 0x81),bVar1);
        *param_3 = (uint)uVar2;
        uVar3 = CONCAT12(*(undefined1 *)((int)param_1 + 0x82),uVar2);
        *param_3 = (uint)uVar3;
        *param_3 = CONCAT13(*(undefined1 *)((int)param_1 + 0x83),uVar3);
      }
      else {
        _dev_err(iVar7,uVar5,iVar4);
      }
      sdio_release_host(iVar6);
      if (iVar4 != 0) {
        iVar6 = param_1[0x24c];
        param_1[0x24c] = iVar6 + 1U;
        if (iVar6 + 1U < 0xb) {
          return iVar4;
        }
        printk(DAT_00022b90);
        return iVar4;
      }
      param_1[0x24c] = 0;
      return 0;
    }
    _dev_err(8,DAT_00022b98);
  }
  return -1;
}



/* ===== ssv6xxx_sdio_read_reg @ 00022b9c size=58 ===== */

int ssv6xxx_sdio_read_reg(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 3;
  iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x40);
  do {
    iVar1 = __ssv6xxx_sdio_read_reg(iVar3,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(int *)(iVar3 + 8);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x30) != '\0')) {
    printk(DAT_00022bdc,DAT_00022bd8,param_2);
  }
  return iVar1;
}



/* ===== ssv6xxx_sdio_cmd52_read @ 00022be0 size=94 ===== */

int ssv6xxx_sdio_cmd52_read(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  int local_1c;
  undefined4 *puStack_18;
  
  local_1c = -1;
  piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  puStack_18 = param_3;
  uVar5 = _is_glue_invalid(piVar3);
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  if (((int)uVar5 == 0) && (iVar4 = local_1c, piVar3 != (int *)0x0)) {
    iVar4 = *piVar3 + -8;
    sdio_claim_host(iVar4);
    uVar1 = sdio_readb(iVar4,param_2,&local_1c);
    *param_3 = uVar1;
    sdio_release_host(iVar4);
    iVar4 = local_1c;
    if (local_1c == 0) {
      piVar3[0x24c] = 0;
    }
    else {
      iVar2 = piVar3[0x24c];
      piVar3[0x24c] = iVar2 + 1U;
      if (10 < iVar2 + 1U) {
        printk(DAT_00022c40);
        iVar4 = local_1c;
      }
    }
  }
  return iVar4;
}



/* ===== ssv6xxx_sdio_irq_getstatus @ 00022c44 size=92 ===== */

int ssv6xxx_sdio_irq_getstatus(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  int local_14;
  
  local_14 = -1;
  piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  uVar5 = _is_glue_invalid(piVar3);
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  if (((int)uVar5 == 0) && (iVar4 = local_14, piVar3 != (int *)0x0)) {
    iVar4 = *piVar3 + -8;
    sdio_claim_host(iVar4);
    uVar1 = sdio_readb(iVar4,8,&local_14);
    *param_2 = uVar1;
    sdio_release_host(iVar4);
    iVar4 = local_14;
    if (local_14 == 0) {
      piVar3[0x24c] = 0;
    }
    else {
      iVar2 = piVar3[0x24c];
      piVar3[0x24c] = iVar2 + 1U;
      if (10 < iVar2 + 1U) {
        printk(DAT_00022ca0);
        iVar4 = local_14;
      }
    }
  }
  return iVar4;
}



/* ===== ssv6xxx_sdio_irq_getmask @ 00022ca4 size=62 ===== */

undefined4 ssv6xxx_sdio_irq_getmask(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = 0xffffffff;
  piVar2 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  uStack_10 = param_3;
  uVar4 = _is_glue_invalid(piVar2);
  uVar1 = (int)((ulonglong)uVar4 >> 0x20);
  if (((int)uVar4 == 0) && (uVar1 = local_14, piVar2 != (int *)0x0)) {
    iVar3 = *piVar2 + -8;
    sdio_claim_host(iVar3);
    uVar1 = sdio_readb(iVar3,4,&local_14);
    *param_2 = uVar1;
    sdio_release_host(iVar3);
    uVar1 = local_14;
  }
  return uVar1;
}



/* ===== ssv6xxx_sdio_irq_enable @ 00022ce2 size=86 ===== */

void ssv6xxx_sdio_irq_enable(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  iVar1 = _is_glue_invalid(piVar2);
  if (iVar1 == 0) {
    iVar4 = *piVar2;
    iVar3 = iVar4 + -8;
    sdio_claim_host(iVar3);
    iVar1 = sdio_claim_irq(iVar3,DAT_00022d38);
    if (iVar1 != 0) {
      _dev_err(iVar4,DAT_00022d3c,iVar1);
    }
    sdio_release_host(iVar3);
    if (iVar1 == 0) {
      piVar2[0x24c] = 0;
    }
    else {
      iVar1 = piVar2[0x24c];
      piVar2[0x24c] = iVar1 + 1U;
      if (10 < iVar1 + 1U) {
        printk(DAT_00022d40);
        return;
      }
    }
  }
  return;
}



/* ===== ssv6xxx_sdio_irq_request @ 00022d44 size=20 ===== */

void ssv6xxx_sdio_irq_request(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x40);
  uVar2 = _is_glue_invalid(iVar1);
  if ((int)uVar2 == 0) {
    *(int *)(iVar1 + 0x928) = (int)((ulonglong)uVar2 >> 0x20);
  }
  return;
}



/* ===== ssv6xxx_sdio_rx_task @ 00022d58 size=70 ===== */

void ssv6xxx_sdio_rx_task
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x40);
  *(undefined4 *)(iVar1 + 0x958) = param_4;
  *(undefined4 *)(iVar1 + 0x960) = param_3;
  *(undefined4 *)(iVar1 + 0x94c) = param_5;
  *(undefined4 *)(iVar1 + 0x95c) = param_2;
  *(undefined4 *)(iVar1 + 0x950) = param_6;
  *(undefined4 *)(iVar1 + 0x954) = param_7;
  ssv6xxx_sdio_irq_setmask(*(int *)(iVar1 + 4) + 0x10,0xff);
  ssv6xxx_sdio_irq_disable(*(int *)(iVar1 + 4) + 0x10,0);
  ssv6xxx_sdio_irq_request(*(int *)(iVar1 + 4) + 0x10,DAT_00022da0,0);
  return;
}



/* ===== ssv6xxx_sdio_write @ 00022da4 size=194 ===== */

int ssv6xxx_sdio_write(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *__src;
  int *__dest;
  int *piVar6;
  int iVar7;
  
  piVar6 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  iVar2 = _is_glue_invalid(piVar6);
  if ((iVar2 != 0) || (piVar6 == (int *)0x0)) {
    return -1;
  }
  iVar7 = *piVar6;
  iVar2 = iVar7 + -8;
  sdio_claim_host(iVar2);
  if (param_3 == 0) {
    iVar4 = -1;
  }
  else {
    __src = *(int **)(param_2 + 0xa4);
    __dest = __src;
    if (((uint)__src & 0x1f) != 0) {
      if (0x800 < param_3) {
        printk(DAT_00022e68);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(2,0x22de4);
        (*pcVar1)();
      }
      __dest = piVar6 + 0x48;
      memcpy(__dest,__src,param_3);
    }
    uVar3 = sdio_align_size(iVar2,param_3);
    iVar4 = sdio_memcpy_toio(iVar2,piVar6[0x248],__dest,uVar3);
    if ((iVar4 == -0x54) || (iVar4 == -0x6e)) {
      iVar4 = -1;
    }
    else {
      if (iVar4 == 0) {
        piVar6[0x24c] = 0;
        goto LAB_00022e50;
      }
      _dev_err(iVar7,DAT_00022e6c,iVar4);
    }
    iVar5 = piVar6[0x24c];
    piVar6[0x24c] = iVar5 + 1U;
    if (10 < iVar5 + 1U) {
      printk(DAT_00022e70);
    }
    _dev_err(iVar7,DAT_00022e74,iVar4);
  }
LAB_00022e50:
  sdio_release_host(iVar2);
  return iVar4;
}



/* ===== ssv6xxx_sdio_cleanup @ 00022e78 size=56 ===== */

void ssv6xxx_sdio_cleanup(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x40);
  iVar1 = _is_glue_invalid(iVar2);
  if (iVar1 != 0) {
    printk(DAT_00022eb4,DAT_00022eb0);
    return;
  }
  if ((*(int *)(iVar2 + 8) != 0) && (*(char *)(*(int *)(iVar2 + 8) + 0x30) != '\0')) {
    printk(DAT_00022ebc,DAT_00022eb8);
  }
  cancel_work_sync(iVar2 + 0x938);
  return;
}



/* ===== _ssv6xxx_sdio_cmd52_write @ 00022ec0 size=80 ===== */

int _ssv6xxx_sdio_cmd52_write(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int local_1c;
  uint uStack_18;
  
  local_1c = -1;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1 + -8;
    piVar2 = param_1;
    uStack_18 = param_3;
    sdio_claim_host(iVar1);
    sdio_writeb(iVar1,param_3 & 0xff,param_2,&local_1c,piVar2);
    sdio_release_host(iVar1);
    if (local_1c == 0) {
      param_1[0x24c] = 0;
    }
    else {
      iVar1 = param_1[0x24c];
      param_1[0x24c] = iVar1 + 1U;
      if (10 < iVar1 + 1U) {
        printk(DAT_00022f10);
      }
    }
  }
  return local_1c;
}



/* ===== ssv6xxx_sdio_cmd52_write @ 00022f14 size=34 ===== */

undefined4
ssv6xxx_sdio_cmd52_write(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x40);
  uVar3 = _is_glue_invalid(iVar2);
  if (((int)uVar3 == 0) && (iVar2 != 0)) {
    uVar1 = _ssv6xxx_sdio_cmd52_write(iVar2,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== ssv6xxx_do_sdio_wakeup.part.3 @ 00022f36 size=60 ===== */

void ssv6xxx_do_sdio_wakeup_part_3(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar4 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  sdio_claim_host();
  uVar2 = DAT_00022f78;
  iVar1 = DAT_00022f74;
  iVar3 = 0xb;
  sdio_writeb(param_1,1,0x67,&uStack_1c,uVar4);
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    (**(code **)(iVar1 + 4))(uVar2);
  }
  sdio_writeb(param_1,0,0x67,&uStack_1c,uVar4);
  sdio_release_host(param_1);
  return;
}



/* ===== ssv6xxx_sdio_resume_early @ 00022f7c size=164 ===== */

undefined4 ssv6xxx_sdio_resume_early(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  if (piVar1 != (int *)0x0) {
    _dev_info(*piVar1,DAT_00023024,DAT_00023020);
    iVar3 = *piVar1;
    iVar2 = iVar3 + -8;
    sdio_claim_host(iVar2);
    sdio_enable_func(iVar2);
    sdio_release_host(iVar2);
    _ssv6xxx_sdio_cmd52_write(piVar1,0x67,1);
    __ssv6xxx_sdio_write_reg(piVar1,DAT_00023028,1);
    if ((code *)piVar1[0x25a] == (code *)0x0) {
      printk(DAT_00023038,DAT_00023034);
    }
    else {
      (*(code *)piVar1[0x25a])(piVar1[1] + 0x4c);
    }
    *(uint *)(*(int *)(iVar3 + -8) + 0x1b0) = *(uint *)(*(int *)(iVar3 + -8) + 0x1b0) | 1;
    *(uint *)(*(int *)(iVar3 + -8) + 0x1b0) = *(uint *)(*(int *)(iVar3 + -8) + 0x1b0) | 2;
    ssv6xxx_sdio_read_parameter(iVar2,piVar1);
    ssv6xxx_sdio_direct_int_mux_mode_constprop_6(piVar1);
    ssv6xxx_set_sdio_clk(iVar2,DAT_0002302c);
    ssv6xxx_sdio_irq_setmask(piVar1[1] + 0x10,0xfe);
    _dev_info(*piVar1,DAT_00023030,DAT_00023020);
  }
  return 0;
}



/* ===== ssv6xxx_sdio_get_aggr_readsz.constprop.8 @ 0002303c size=124 ===== */

uint ssv6xxx_sdio_get_aggr_readsz_constprop_8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_1c;
  
  local_1c = 0;
  piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  iVar4 = *piVar3 + -8;
  iVar1 = param_1;
  sdio_claim_host(iVar4);
  iVar1 = sdio_memcpy_fromio(iVar4,piVar3 + 0x40,piVar3[0x248],4,iVar1);
  if (iVar1 != 0) {
    _dev_err(*(undefined4 *)(param_1 + 0x24),DAT_000230bc,DAT_000230b8,iVar1);
    piVar3[0x40] = 0;
  }
  uVar6 = piVar3[0x40];
  uVar5 = uVar6 >> 0x10;
  sdio_release_host(iVar4);
  if (uVar5 == 0) {
    printk(DAT_000230c0,uVar6);
    uVar6 = (**(code **)(*(int *)(piVar3[2] + 0x2c) + 8))(param_1,DAT_000230c4,&local_1c);
    uVar2 = DAT_000230c8;
    if (uVar6 == 0) {
      uVar6 = local_1c & 0xffff;
      uVar2 = DAT_000230cc;
      uVar5 = uVar6;
    }
    printk(uVar2,uVar6);
  }
  return uVar5;
}



/* ===== ssv6xxx_sdio_isr @ 000230d0 size=300 ===== */

undefined4 ssv6xxx_sdio_isr(undefined4 param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_2c;
  uint local_28;
  int local_24;
  
  uVar5 = 0;
  local_2c = 0;
  local_28 = param_3;
  local_24 = param_4;
  ssv6xxx_sdio_irq_getstatus(param_2[1] + 0x10,&local_2c,param_3,param_4,param_1);
  uVar3 = 0;
  if ((local_2c & 1) != 0) {
    uVar7 = 0x3090;
    ssv6xxx_sdio_irq_setmask(param_2[1] + 0x10,0xff);
    iVar6 = *param_2 + -8;
    local_24 = 1;
    uVar1 = (**(code **)(param_2[2] + 0x50))(*(undefined4 *)(param_2[2] + 0x54));
    if ((uVar1 & 2) == 0) {
      uVar7 = 0x1000;
    }
    while( true ) {
      if ((-1 < local_24 << 0x1f) || (iVar2 = (*(code *)param_2[600])(param_2[0x256]), iVar2 != 0))
      goto LAB_0002314a;
      if (uVar1 == 1) {
        local_28 = ssv6xxx_sdio_get_readsz();
      }
      else {
        local_28 = ssv6xxx_sdio_get_aggr_readsz_constprop_8(param_2[1] + 0x10);
      }
      if ((local_28 == 0) || (uVar7 < local_28)) break;
      sdio_claim_host(iVar6);
      uVar3 = sdio_align_size(iVar6,local_28);
      sdio_release_host(iVar6);
      iVar2 = (**(code **)(param_2[2] + 0x34))(*(undefined4 *)(param_2[2] + 0x3c),uVar3,0xcc0);
      if (iVar2 == 0) {
        printk(DAT_00023204,DAT_000231fc);
        goto LAB_0002314a;
      }
      iVar4 = ssv6xxx_sdio_read(param_2[1] + 0x10,*(undefined4 *)(iVar2 + 0xa4),&local_28,uVar1);
      if (iVar4 < 0) {
        printk(DAT_0002320c,DAT_00023208);
        (**(code **)(param_2[2] + 0x38))(*(undefined4 *)(param_2[2] + 0x3c),iVar2);
        goto LAB_0002314a;
      }
      skb_put(iVar2,uVar3);
      *(int *)param_2[0x253] = *(int *)param_2[0x253] + 1;
      (*(code *)param_2[599])(iVar2,param_2[0x256]);
      if ((param_2[0x255] != 0) && ((uint)param_2[0x255] < uVar5)) goto LAB_0002314a;
      uVar5 = uVar5 + 1;
      ssv6xxx_sdio_irq_getstatus(param_2[1] + 0x10,&local_24);
    }
    printk(DAT_00023200,DAT_000231fc);
LAB_0002314a:
    ssv6xxx_sdio_irq_setmask(param_2[1] + 0x10,0xfe);
    uVar3 = 1;
    *(int *)param_2[0x254] = *(int *)param_2[0x254] + 1;
  }
  return uVar3;
}



/* ===== ssv6xxx_sdio_suspend @ 00023210 size=4 ===== */

undefined4 ssv6xxx_sdio_suspend(void)

{
  return 0;
}



/* ===== ssv6xxx_sdio_resume @ 00023214 size=4 ===== */

undefined4 ssv6xxx_sdio_resume(void)

{
  return 0;
}



/* ===== ssv6xxx_sdio_pmu_wakeup @ 00023218 size=16 ===== */

void ssv6xxx_sdio_pmu_wakeup(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 8)) {
    ssv6xxx_do_sdio_wakeup_part_3();
    return;
  }
  return;
}



/* ===== ssv6xxx_do_sdio_reset_reinit @ 00023228 size=472 ===== */

/* WARNING: Type propagation algorithm not settling */

void ssv6xxx_do_sdio_reset_reinit(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int local_54 [3];
  ushort local_46;
  undefined4 local_38;
  
  uVar6 = _is_glue_invalid(param_3);
  if ((int)uVar6 != 0) {
    printk(DAT_00023404,DAT_00023400);
    return;
  }
  sdio_claim_host((int)((ulonglong)uVar6 >> 0x20));
  sdio_f0_writeb(param_2,8,6,local_54);
  sdio_release_host(param_2);
  if (local_54[0] == 0) {
    *(undefined4 *)(param_3 + 0x930) = 0;
  }
  else {
    uVar4 = *(int *)(param_3 + 0x930) + 1;
    *(uint *)(param_3 + 0x930) = uVar4;
    if (10 < uVar4) {
      printk(DAT_00023408);
    }
  }
  memset(local_54 + 2,0,0x2c);
  local_54[1] = 5;
  local_38 = 0x2e1;
  sdio_claim_host(param_2);
  iVar1 = mmc_wait_for_cmd(*(undefined4 *)*param_2,local_54 + 1,0);
  sdio_release_host(param_2);
  uVar2 = DAT_00023410;
  if (iVar1 == 0) {
    local_54[1] = 5;
    local_54[2] = 0x7c0000;
    local_38 = 0x2e1;
    sdio_claim_host(param_2);
    iVar1 = mmc_wait_for_cmd(*(undefined4 *)*param_2,local_54 + 1,0);
    sdio_release_host(param_2);
    uVar2 = DAT_00023414;
    if (iVar1 == 0) {
      local_54[1] = 3;
      local_38 = 0x75;
      local_54[2] = iVar1;
      sdio_claim_host(param_2);
      iVar1 = mmc_wait_for_cmd(*(undefined4 *)*param_2,local_54 + 1,0);
      sdio_release_host(param_2);
      uVar2 = DAT_0002341c;
      if (iVar1 == 0) {
        *(uint *)(*param_2 + 0x1a4) = (uint)local_46;
        local_54[1] = 7;
        local_54[2] = *(int *)(*param_2 + 0x1a4) << 0x10;
        local_38 = 0x15;
        sdio_claim_host(param_2);
        iVar1 = mmc_wait_for_cmd(*(undefined4 *)*param_2,local_54 + 1,0);
        sdio_release_host(param_2);
        uVar2 = DAT_00023418;
        if (iVar1 == 0) {
          *(undefined4 *)(param_3 + 0x930) = 0;
          local_54[0] = 0;
          goto LAB_0002337a;
        }
      }
    }
  }
  printk(uVar2,DAT_0002340c);
  local_54[0] = -1;
  uVar4 = *(int *)(param_3 + 0x930) + 1;
  *(uint *)(param_3 + 0x930) = uVar4;
  if (10 < uVar4) {
    printk(DAT_00023408);
  }
LAB_0002337a:
  iVar1 = DAT_00023420;
  sdio_claim_host(param_2);
  uVar2 = DAT_00023424;
  iVar5 = 0x15;
  iVar3 = *(int *)*param_2;
  *(undefined1 *)(iVar3 + 0x20f) = 2;
  (**(code **)(*(int *)(iVar3 + 0x1a4) + 0x10))(iVar3,iVar3 + 0x200);
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    (**(code **)(iVar1 + 4))(uVar2);
  }
  sdio_release_host(param_2);
  sdio_claim_host(param_2);
  sdio_f0_writeb(param_2,2,7,local_54);
  sdio_release_host(param_2);
  if (local_54[0] == 0) {
    *(undefined4 *)(param_3 + 0x930) = 0;
  }
  else {
    uVar4 = *(int *)(param_3 + 0x930) + 1;
    *(uint *)(param_3 + 0x930) = uVar4;
    if (10 < uVar4) {
      printk(DAT_00023408);
    }
  }
  if (*(char *)(param_1 + 4) == '\0') {
    ssv6xxx_sdio_power_on_part_5(param_1,param_2);
  }
  ssv6xxx_sdio_read_parameter(param_2,param_3);
  return;
}



/* ===== ssv6xxx_sdio_reset @ 00023428 size=50 ===== */

void ssv6xxx_sdio_reset(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  iVar1 = _is_glue_invalid(piVar2);
  if (iVar1 == 0) {
    iVar1 = *piVar2;
    if ((piVar2[2] != 0) && (*(char *)(piVar2[2] + 0x30) != '\0')) {
      printk(DAT_00023460,DAT_0002345c);
    }
    ssv6xxx_do_sdio_reset_reinit(piVar2[2],iVar1 + -8,piVar2,param_4);
    return;
  }
  return;
}



/* ===== ssv6xxx_sdio_load_fw_pre_config_hwif @ 00023464 size=30 ===== */

void ssv6xxx_sdio_load_fw_pre_config_hwif
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined8 uVar1;
  
  uVar1 = _is_glue_invalid(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x40));
  if ((int)uVar1 == 0) {
    ssv6xxx_set_sdio_clk(*(int *)((ulonglong)uVar1 >> 0x20) + -8,DAT_00023484,extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== ssv6xxx_sdio_load_fw_post_config_hwif @ 00023488 size=30 ===== */

void ssv6xxx_sdio_load_fw_post_config_hwif
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined8 uVar1;
  
  uVar1 = _is_glue_invalid(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x40));
  if ((int)uVar1 == 0) {
    ssv6xxx_set_sdio_clk(*(int *)((ulonglong)uVar1 >> 0x20) + -8,DAT_000234a8,extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== ssv6xxx_sdio_recv_rx_work @ 000234ac size=276 ===== */

void ssv6xxx_sdio_recv_rx_work(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_28;
  int local_24;
  
  piVar5 = *(int **)(param_1 + 0x10);
  uVar8 = 0x3090;
  uVar7 = 0;
  local_24 = 1;
  iVar6 = *piVar5 + -8;
  local_28 = param_1;
  uVar1 = (**(code **)(piVar5[2] + 0x50))(*(undefined4 *)(piVar5[2] + 0x54));
  if ((uVar1 & 2) == 0) {
    uVar8 = 0x1000;
  }
  do {
    if (-1 < local_24 << 0x1f) {
LAB_0002357c:
      ssv6xxx_sdio_irq_setmask(piVar5[1] + 0x10,0xfe);
      return;
    }
    iVar2 = (*(code *)piVar5[600])(piVar5[0x256]);
    if (iVar2 != 0) {
LAB_000234e8:
      queue_work_on(1,piVar5[0x24d],piVar5 + 0x24e);
      return;
    }
    if (uVar1 == 1) {
      local_28 = ssv6xxx_sdio_get_readsz();
    }
    else {
      local_28 = ssv6xxx_sdio_get_aggr_readsz_constprop_8(piVar5[1] + 0x10);
    }
    if ((local_28 == 0) || (uVar8 < local_28)) {
      printk(DAT_000235c4,DAT_000235c0);
      goto LAB_000234e8;
    }
    sdio_claim_host(iVar6);
    uVar3 = sdio_align_size(iVar6,local_28);
    sdio_release_host(iVar6);
    iVar2 = (**(code **)(piVar5[2] + 0x34))(*(undefined4 *)(piVar5[2] + 0x3c),uVar3,0xcc0);
    if (iVar2 == 0) {
      printk(DAT_000235c8,DAT_000235c0);
      goto LAB_000234e8;
    }
    iVar4 = ssv6xxx_sdio_read(piVar5[1] + 0x10,*(undefined4 *)(iVar2 + 0xa4),&local_28,uVar1);
    if (iVar4 < 0) {
      printk(DAT_000235d0,DAT_000235cc);
      (**(code **)(piVar5[2] + 0x38))(*(undefined4 *)(piVar5[2] + 0x3c),iVar2);
      goto LAB_0002357c;
    }
    skb_put(iVar2,uVar3);
    *(int *)piVar5[0x253] = *(int *)piVar5[0x253] + 1;
    (*(code *)piVar5[599])(iVar2,piVar5[0x256]);
    if ((piVar5[0x255] != 0) && ((uint)piVar5[0x255] < uVar7)) goto LAB_0002357c;
    uVar7 = uVar7 + 1;
    ssv6xxx_sdio_irq_getstatus(piVar5[1] + 0x10,&local_24);
  } while( true );
}



/* ===== ssv6xxx_sdio_suspend_late @ 000235d4 size=198 ===== */

int ssv6xxx_sdio_suspend_late(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x40);
  piVar5 = (int *)*puVar4;
  piVar6 = piVar5 + -2;
  uVar1 = sdio_get_host_pm_caps(piVar6);
  iVar3 = piVar5[0xb];
  if (iVar3 == 0) {
    iVar3 = *piVar5;
  }
  _dev_info(*puVar4,DAT_0002369c,iVar3,uVar1);
  if ((uVar1 & 1) == 0) {
    iVar3 = piVar5[0xb];
    if (iVar3 == 0) {
      iVar3 = *piVar5;
    }
    _dev_err(piVar5,DAT_000236a0,iVar3);
  }
  else {
    iVar3 = sdio_set_host_pm_flags(piVar6,1);
    uVar2 = DAT_000236b8;
    if (iVar3 != 0) goto LAB_0002368e;
  }
  if (((uVar1 & 2) == 0) ||
     (iVar3 = sdio_set_host_pm_flags(piVar6,2), uVar2 = DAT_000236a4, iVar3 == 0)) {
    ssv6xxx_set_sdio_clk(piVar6,DAT_000236a8);
    cancel_work_sync(puVar4 + 0x24e);
    if ((code *)puVar4[0x25b] == (code *)0x0) {
      printk(DAT_000236b4,DAT_000236b0);
    }
    else {
      (*(code *)puVar4[0x25b])(puVar4[1] + 0x4c,0);
    }
    if ((code *)puVar4[0x259] == (code *)0x0) {
      printk(DAT_000236b4,DAT_000236b0);
    }
    else {
      (*(code *)puVar4[0x259])(puVar4[1] + 0x4c);
    }
    iVar3 = __ssv6xxx_sdio_write_reg(puVar4,DAT_000236ac,0);
    _ssv6xxx_sdio_cmd52_write(puVar4,0x67,0);
    return iVar3;
  }
LAB_0002368e:
  _dev_err(piVar5,uVar2,iVar3);
  return iVar3;
}



/* ===== cleanup_module @ 000236bc size=4 ===== */

void cleanup_module(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  ssv6xxx_exit();
  ssv6xxx_hci_exit();
  ssv6xxx_sdio_exit();
  ssv6xxx_hwif_hal_exit();
  remove_proc_entry(DAT_00011508,0,extraout_r2,in_r3);
  return;
}



/* ===== exitWlan @ 000236c0 size=4 ===== */

void exitWlan(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  ssv6xxx_exit();
  ssv6xxx_hci_exit();
  ssv6xxx_sdio_exit();
  ssv6xxx_hwif_hal_exit();
  remove_proc_entry(DAT_00011508,0,extraout_r2,in_r3);
  return;
}



/* ===== ssvdevice_init @ 000236c8 size=374 ===== */

void ssvdevice_init(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *__s;
  char *__s_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  char local_4c [32];
  int local_2c;
  
  piVar3 = DAT_00023850;
  piVar2 = DAT_00023844;
  piVar1 = DAT_00023840;
  iVar10 = DAT_00023840[1];
  local_2c = *DAT_00023844;
  printk(DAT_0002384c,DAT_00023848,iVar10);
  memset(DAT_00023854,0,0x614);
  for (piVar9 = piVar3; *piVar9 != 0; piVar9 = piVar9 + 5) {
    if (piVar9[4] != 0) {
      (*(code *)piVar9[3])(piVar9[4],piVar9[1],piVar9[2]);
    }
  }
  if ((iVar10 != 0) && (__s = (char *)vmalloc(0x200), __s != (char *)0x0)) {
    __s_00 = (char *)vmalloc(0x200);
    if (__s_00 != (char *)0x0) {
      memset(__s,0,0x200);
      uVar4 = filp_open(iVar10,0,0);
      uVar7 = DAT_0002385c;
      if (((uVar4 < 0xfffff001) && (uVar4 != 0)) &&
         (uVar7 = DAT_00023860, *(int *)(uVar4 + 0xc) != 0)) {
        do {
          memset(local_4c,0,0x20);
          memset(__s_00,0,0x200);
          iVar10 = read_line(uVar4,__s,0x200);
          sscanf(__s,DAT_00023864,local_4c,__s_00);
          iVar6 = ischar(local_4c);
          uVar7 = DAT_00023868;
          pcVar8 = __s;
          if ((iVar6 == 0) || (iVar6 = ischar(__s_00), uVar7 = DAT_00023868, iVar6 == 0)) {
LAB_00023802:
            printk(uVar7,pcVar8);
          }
          else {
            iVar6 = 0;
            while( true ) {
              if ((char *)piVar3[iVar6 * 5] == (char *)0x0) break;
              iVar5 = strcmp((char *)piVar3[iVar6 * 5],local_4c);
              if (iVar5 == 0) {
                (*(code *)piVar3[iVar6 * 5 + 3])(__s_00,piVar3[iVar6 * 5 + 1],piVar3[iVar6 * 5 + 2])
                ;
                goto LAB_000237b8;
              }
              iVar6 = iVar6 + 1;
            }
            if (local_4c[0] != '\0') {
              uVar7 = DAT_0002386c;
              pcVar8 = local_4c;
              goto LAB_00023802;
            }
          }
LAB_000237b8:
        } while (iVar10 != 0);
      }
      else {
        printk(uVar7);
      }
      filp_close(uVar4,0);
      vfree(__s);
      __s = __s_00;
    }
    vfree(__s);
  }
  iVar10 = proc_mkdir(DAT_00023858,0);
  *piVar1 = iVar10;
  if (iVar10 == 0) {
    iVar10 = -0xc;
  }
  else {
    iVar10 = ssv6xxx_hci_init();
    if (((iVar10 == 0) && (iVar10 = ssv6xxx_init(), iVar10 == 0)) &&
       (iVar10 = ssv6xxx_hwif_hal_init(), iVar10 == 0)) {
      iVar10 = ssv6xxx_sdio_init();
    }
  }
  if (local_2c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar10);
}



/* ===== txtput_thread_m2 @ 00023870 size=170 ===== */

void txtput_thread_m2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __aeabi_uidiv(DAT_0002391c,*(undefined4 *)(param_1 + 0xcc8),param_3,param_4,param_1,
                        param_2,param_3);
  printk(DAT_00023920,iVar1);
  while( true ) {
    iVar2 = kthread_should_stop();
    if ((iVar2 != 0) || (*(int *)(param_1 + 0xccc) == 0)) goto LAB_000238b6;
    *(int *)(param_1 + 0xccc) = *(int *)(param_1 + 0xccc) + -1;
    iVar2 = ssv_skb_alloc(param_1,*(undefined4 *)(param_1 + 0xcc8));
    if (iVar2 == 0) break;
    *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 0x30;
    *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 0x30;
    *(undefined1 *)(*(int *)(iVar2 + 0xa0) + 0x2d) = 1;
    skb_put(iVar2,*(undefined4 *)(param_1 + 0xcc8));
    (**(code **)(*(int *)(param_1 + 0x210) + 0x288))(*(int *)(param_1 + 0x210),iVar2);
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x30))
                      (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar2,0,0,0);
    if (iVar1 <= iVar2) {
      usleep_range(20000,21000);
    }
  }
  printk(DAT_00023924);
LAB_000238b6:
  *(undefined4 *)(param_1 + 0xcc0) = 0;
  return;
}



/* ===== ssv6xxx_hci_check_tx_resource @ 00023928 size=142 ===== */

int ssv6xxx_hci_check_tx_resource(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_r4;
  int iVar4;
  int *local_20;
  int iStack_1c;
  
  local_20 = param_1;
  iStack_1c = param_2;
  (**(code **)(*(int *)(*param_1 + 0x14) + 0x1a4))(*(int *)(*param_1 + 0x14),&local_20,&iStack_1c);
  iVar3 = (param_1[0x94] - ((uint)local_20 & 0x1ff)) + param_1[0xa5];
  if ((iVar3 < 1) || (iVar1 = param_1[0x93] - (((uint)local_20 & 0x1ffff) >> 9), iVar1 < 1)) {
    iVar2 = 0;
  }
  else {
    disableIRQinterrupts();
    for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
      if (iVar2 == 0) {
        unaff_r4 = *(int **)(param_2 + 0x10);
      }
      else {
        unaff_r4 = (int *)*unaff_r4;
      }
      if ((int *)(param_2 + 0x10) == unaff_r4) {
        return iVar2;
      }
      if (unaff_r4 == (int *)0x0) {
        return iVar2;
      }
      iVar4 = (int)(unaff_r4[0x14] + 0x80U) >> 8;
      if ((unaff_r4[0x14] + 0x80U & 0xff) != 0) {
        iVar4 = iVar4 + 1;
      }
      if (iVar3 < iVar4) {
        return iVar2;
      }
      if (iVar2 == iVar1) {
        return iVar2;
      }
      iVar3 = iVar3 - iVar4;
    }
  }
  return iVar2;
}



/* ===== ssv6xxx_hci_set_trigger_conf @ 000239b6 size=42 ===== */

undefined4
ssv6xxx_hci_set_trigger_conf
          (int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  printk(DAT_000239e0);
  *(undefined1 *)(param_1 + 0x288) = param_2;
  *(undefined4 *)(param_1 + 0x28c) = param_3;
  *(undefined4 *)(param_1 + 0x290) = param_4;
  *(undefined4 *)(param_1 + 0x294) = param_5;
  return 0;
}



/* ===== ssv6xxx_hci_init @ 000239e4 size=14 ===== */

undefined4
ssv6xxx_hci_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  printk(DAT_000239f8,DAT_000239f4,param_3,param_4,param_4);
  return 0;
}



/* ===== ssv6xxx_hci_exit @ 000239fc size=8 ===== */

void ssv6xxx_hci_exit(void)

{
  printk(DAT_00023a08,DAT_00023a04);
  return;
}



/* ===== ssv6xxx_hci_xmit @ 00023a0c size=190 ===== */

int ssv6xxx_hci_xmit(int *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 **local_34;
  undefined4 **ppuStack_30;
  undefined4 local_2c;
  
  iVar4 = 0;
  iVar7 = 0;
  local_38 = 0;
  local_2c = 0;
  local_34 = &local_34;
  ppuStack_30 = &local_34;
  do {
    if (param_3 <= iVar7) {
LAB_00023a3e:
      pcVar5 = *(code **)(*param_1 + 0x24);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(&local_34,*(undefined4 *)(*param_1 + 0x10));
      }
      if (iVar4 == 0) {
        iVar4 = iVar7;
      }
      return iVar4;
    }
    if (param_2[0x1c] != '\0') {
      iVar3 = *param_1;
      pcVar5 = *(code **)(iVar3 + 0x30);
      uVar2 = DAT_00023acc;
LAB_00023a36:
      (*pcVar5)(*(undefined4 *)(iVar3 + 0x10),0x200,uVar2);
      goto LAB_00023a3e;
    }
    iVar1 = skb_dequeue(param_2 + 0x10);
    iVar3 = 0;
    if (iVar1 == 0) {
      iVar3 = *param_1;
      pcVar5 = *(code **)(iVar3 + 0x30);
      uVar2 = DAT_00023ad0;
      goto LAB_00023a36;
    }
    do {
      iVar4 = (**(code **)(((undefined4 *)*param_1)[1] + 4))
                        (*(undefined4 *)*param_1,iVar1,*(undefined4 *)(iVar1 + 0x50),*param_2);
      if (-1 < iVar4) goto LAB_00023ab2;
      iVar6 = iVar3 + 1;
      printk(DAT_00023ad4,iVar4,iVar3,*(undefined4 *)(iVar1 + 0x50));
      iVar3 = iVar6;
    } while (iVar6 != 3);
    iVar4 = 0;
    uVar2 = (**(code **)(((undefined4 *)*param_1)[1] + 8))
                      (*(undefined4 *)*param_1,DAT_00023ad8,&local_38);
    printk(DAT_00023adc,uVar2,local_38);
LAB_00023ab2:
    skb_queue_tail(&local_34,iVar1);
    iVar7 = iVar7 + 1;
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  } while( true );
}



/* ===== ssv6xxx_hci_aggr_xmit @ 00023ae0 size=420 ===== */

int ssv6xxx_hci_aggr_xmit(int *param_1,undefined1 *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  code *pcVar7;
  uint uVar8;
  uint *puVar9;
  size_t __n;
  void *__s;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 local_38;
  undefined4 **local_34;
  undefined4 **ppuStack_30;
  undefined4 local_2c;
  
  pcVar1 = DAT_00023c84;
  __s = (void *)param_1[0xa1];
  local_38 = 0;
  local_34 = &local_34;
  local_2c = 0;
  ppuStack_30 = local_34;
  for (iVar13 = 0; iVar13 < param_3; iVar13 = iVar13 + 1) {
    if (param_2[0x1c] != '\0') {
      (**(code **)(*param_1 + 0x30))(*(undefined4 *)(*param_1 + 0x10),0x200,DAT_00023c88);
      goto LAB_00023b26;
    }
    iVar3 = skb_dequeue(param_2 + 0x10);
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x30))(*(undefined4 *)(*param_1 + 0x10),0x200,DAT_00023c8c);
      goto LAB_00023b48;
    }
    if (*DAT_00023c90 != '\0') {
      uVar4 = *(undefined4 *)((int)__s + 0xa4);
      *DAT_00023c90 = '\0';
      *(undefined4 *)(pcVar1 + 4) = uVar4;
      pcVar1[8] = '\0';
      pcVar1[9] = -0x80;
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
    }
    __n = *(uint *)(iVar3 + 0x50);
    uVar8 = *(uint *)(pcVar1 + 8);
    if ((__n & 3) != 0) {
      __n = (__n & 0xfffffffc) + 4;
    }
    uVar12 = __n + 8;
    if (uVar8 <= uVar12) {
      skb_queue_head(param_2 + 0x10,iVar3);
      goto LAB_00023b26;
    }
    puVar9 = *(uint **)(pcVar1 + 4);
    *puVar9 = uVar12 | uVar12 * 0x10000;
    puVar9[1] = 0;
    pvVar6 = memcpy(puVar9 + 2,*(void **)(iVar3 + 0xa4),__n);
    *(size_t *)(pcVar1 + 4) = (int)pvVar6 + __n;
    *(uint *)(pcVar1 + 8) = (uVar8 - 8) - __n;
    skb_put(__s,uVar12);
    skb_queue_tail(&local_34,iVar3);
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  }
  if (iVar13 == param_3) {
LAB_00023b26:
    *pcVar1 = '\x01';
  }
LAB_00023b48:
  pcVar2 = DAT_00023c90;
  iVar3 = 0;
  if (*pcVar1 != '\0') {
    if ((__s == (void *)0x0) || (*DAT_00023c90 != '\0')) {
      iVar3 = 0;
    }
    else {
      puVar5 = *(undefined4 **)(pcVar1 + 4);
      *puVar5 = 0;
      *(undefined4 **)(pcVar1 + 4) = puVar5 + 1;
      skb_put(__s,4);
      iVar10 = 0;
      do {
        iVar3 = (**(code **)(((undefined4 *)*param_1)[1] + 4))
                          (*(undefined4 *)*param_1,__s,*(undefined4 *)((int)__s + 0x50),*param_2);
        if (-1 < iVar3) goto LAB_00023bb6;
        iVar11 = iVar10 + 1;
        printk(DAT_00023c94,iVar3,iVar10,*(undefined4 *)((int)__s + 0x50));
        iVar10 = iVar11;
      } while (iVar11 != 3);
      uVar4 = (**(code **)(((undefined4 *)*param_1)[1] + 8))
                        (*(undefined4 *)*param_1,DAT_00023c98,&local_38);
      iVar3 = 0;
      printk(DAT_00023c9c,uVar4,local_38);
LAB_00023bb6:
      pvVar6 = *(void **)((int)__s + 0x9c);
      *pcVar1 = '\0';
      pvVar6 = memset(pvVar6,0,0x20);
      *(undefined4 *)((int)pvVar6 + 0x20) = 1;
      memset(__s,0,0x98);
      uVar4 = *(undefined4 *)((int)__s + 0xa4);
      *pcVar2 = '\x01';
      *(undefined4 *)((int)__s + 0x98) = uVar4;
    }
  }
  pcVar7 = *(code **)(*param_1 + 0x24);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(&local_34,*(undefined4 *)(*param_1 + 0x10));
  }
  if (iVar3 == 0) {
    iVar3 = iVar13;
  }
  return iVar3;
}



/* ===== ssv6xxx_hci_is_frame_send @ 00023ca0 size=74 ===== */

undefined4 ssv6xxx_hci_is_frame_send(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *local_10;
  undefined4 uStack_c;
  
  piVar1 = param_1;
  while (((char)piVar1[0x15] != '\0' || (piVar1[0x14] == 0))) {
    piVar1 = piVar1 + 10;
    if (piVar1 == param_1 + 0x78) {
      return 0;
    }
  }
  local_10 = param_1;
  uStack_c = param_2;
  (**(code **)(*(int *)(*param_1 + 0x14) + 0x1a4))(*(int *)(*param_1 + 0x14),&local_10,&uStack_c);
  if ((int)((uint)local_10 & 0x1ff) <= (int)((param_1[0x94] - ((uint)local_10 & 0x1ff)) * 9)) {
    return 1;
  }
  return 0;
}



/* ===== ssv6xxx_hci_tx_task @ 00023cea size=300 ===== */

undefined4 ssv6xxx_hci_tx_task(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  undefined1 auStack_34 [24];
  
  printk(DAT_00023e18);
  iVar2 = 0;
LAB_00023cfa:
  do {
    iVar6 = iVar2;
    do {
      iVar2 = kthread_should_stop();
      if (iVar2 != 0) {
LAB_00023d20:
        uVar1 = DAT_00023e20;
        *(undefined4 *)(param_1 + 0x238) = 0;
        printk(uVar1);
        return 0;
      }
      _cond_resched();
      iVar2 = ssv6xxx_hci_is_frame_send(param_1);
      if ((iVar2 == 0) && (iVar2 = kthread_should_stop(), iVar2 == 0)) {
        iVar3 = 1;
        init_wait_entry(auStack_34,0);
        while( true ) {
          iVar2 = prepare_to_wait_event(param_1 + 0x230,auStack_34,1);
          iVar4 = ssv6xxx_hci_is_frame_send(param_1);
          if ((iVar4 != 0) || (iVar4 = kthread_should_stop(), iVar4 != 0)) break;
          if (iVar3 == 0) goto LAB_00023d60;
          if (iVar2 != 0) goto LAB_00023d12;
          iVar3 = schedule_timeout(iVar3);
        }
        if (iVar3 == 0) {
          iVar3 = 1;
        }
LAB_00023d60:
        finish_wait(param_1 + 0x230,auStack_34);
        iVar2 = iVar3;
      }
      else {
        iVar2 = 1;
      }
LAB_00023d12:
      iVar3 = kthread_should_stop();
      if (iVar3 != 0) {
        printk(DAT_00023e1c);
        goto LAB_00023d20;
      }
    } while (iVar2 == 0);
    iVar3 = param_1 + 0x1f0;
    do {
      if ((*(int *)(iVar3 + 0x18) != 0) && (*(char *)(iVar3 + 0x1c) == '\0')) {
        iVar4 = ssv6xxx_hci_check_tx_resource(param_1,iVar3);
        iVar2 = iVar6;
        if (iVar4 == 0) goto LAB_00023cfa;
        if (*(int *)(param_1 + 0x280) << 0x1f < 0) {
          ssv6xxx_hci_aggr_xmit();
        }
        else {
          ssv6xxx_hci_xmit(param_1,iVar3,iVar4);
        }
      }
      iVar3 = iVar3 + -0x28;
    } while (iVar3 != param_1 + 0x178);
    iVar3 = 0;
    do {
      __aeabi_uidivmod(iVar6 + iVar3,9);
      iVar2 = param_1 + extraout_r1 * 0x28;
      if ((*(int *)(iVar2 + 0x50) != 0) && (*(char *)(iVar2 + 0x54) == '\0')) {
        iVar5 = extraout_r1 * 0x28 + 0x38 + param_1;
        iVar4 = ssv6xxx_hci_check_tx_resource(param_1,iVar5);
        iVar2 = extraout_r1;
        if (iVar4 == 0) break;
        if (*(int *)(param_1 + 0x280) << 0x1f < 0) {
          ssv6xxx_hci_aggr_xmit();
        }
        else {
          ssv6xxx_hci_xmit(param_1,iVar5,iVar4);
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar6;
    } while (iVar3 != 9);
  } while( true );
}



/* ===== ssv6xxx_hci_deregister @ 00023e24 size=140 ===== */

undefined4 ssv6xxx_hci_deregister(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  
  printk(DAT_00023eb4,DAT_00023eb0);
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined1 *)(piVar3 + 7) = 1;
    ssv6xxx_hci_txq_flush(piVar3);
    ssv6xxx_hci_ble_txq_flush(piVar3);
    ssv6xxx_hci_hcmd_txq_flush(piVar3);
    ssv6xxx_hci_irq_suspend(piVar3);
    ssv6xxx_hwif_stop_usb_acc_constprop_8(piVar3);
    pcVar2 = *(code **)(((undefined4 *)*piVar3)[1] + 0x84);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*(undefined4 *)*piVar3);
    }
    if (piVar3[0x8e] != 0) {
      printk(DAT_00023eb8);
      kthread_stop(piVar3[0x8e]);
      while (piVar3[0x8e] != 0) {
        msleep(1);
      }
      printk(DAT_00023ebc);
    }
    if (piVar3[0xa1] != 0) {
      (**(code **)(param_1 + 0x38))(*(undefined4 *)(*piVar3 + 0x10));
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    kfree(piVar3);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== ssv6xxx_deinit_softc @ 00023ec0 size=196 ===== */

undefined4
ssv6xxx_deinit_softc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  printk(DAT_00023f88,DAT_00023f84,param_3,param_4,param_1);
  if (*(int *)(*(int *)(param_1 + 0x210) + 0x7a4) << 0x1d < 0) {
    kfree(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(*(int *)(param_1 + 0x210) + 0x7a4) << 0x1c < 0) {
    kfree(*(undefined4 *)(param_1 + 0x8c));
  }
  do {
    iVar1 = ssv6200_bcast_dequeue(param_1 + 0x910,(int)&uStack_14 + 3);
    if (iVar1 == 0) break;
    ssv6xxx_txbuf_free_skb(iVar1,param_1);
  } while (uStack_14._3_1_ != '\0');
  printk(DAT_00023f90,DAT_00023f8c);
  while (iVar1 = skb_dequeue(param_1 + 0x990), iVar1 != 0) {
    __dev_kfree_skb_any(iVar1,1);
  }
  printk(DAT_00023f94,DAT_00023f8c,*(undefined4 *)(param_1 + 0x9ac));
  while (iVar1 = skb_dequeue(param_1 + 0x9a4), iVar1 != 0) {
    __dev_kfree_skb_any(iVar1,1);
  }
  if (*(int *)(param_1 + 0x9d8) != 0) {
    kfree();
  }
  destroy_workqueue(*(undefined4 *)(param_1 + 0x888));
  del_timer(param_1 + 0xc3c);
  destroy_workqueue(*(undefined4 *)(param_1 + 0xc58));
  destroy_workqueue(*(undefined4 *)(param_1 + 0xd10));
  destroy_workqueue(*(undefined4 *)(param_1 + 0xfcc));
  return 0;
}



/* ===== ssv6xxx_init_hw @ 00023f98 size=876 ===== */

int ssv6xxx_init_hw(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [10];
  undefined2 local_4e;
  
  iVar5 = *param_1;
  pcVar6 = *(code **)((*(undefined4 **)param_1[5])[1] + 0x70);
  if (pcVar6 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*pcVar6)(**(undefined4 **)param_1[5]);
  }
  uVar1 = uVar1 & 2;
  local_64 = 0;
  iVar2 = (*(code *)param_1[0x9d])(param_1);
  param_1[0xd7] = iVar2;
  iVar2 = (*(code *)param_1[0xa5])(param_1);
  param_1[0xd9] = 4;
  param_1[0x3d7] = 1;
  param_1[0xd8] = iVar2;
  (*(code *)param_1[0x95])(param_1);
  (*(code *)param_1[0x88])(param_1);
  (*(code *)param_1[0xcd])(param_1,0);
  (*(code *)param_1[0xcd])(param_1,1);
  (*(code *)param_1[0x96])(param_1);
  if (uVar1 != 0) {
    (**(code **)(*(int *)(iVar5 + 0x210) + 0x230))(iVar5,4);
  }
  iVar2 = (*(code *)param_1[0x94])(param_1);
  uVar7 = DAT_00024304;
  if (iVar2 != 0) goto LAB_0002402e;
  if (uVar1 != 0) {
    (**(code **)(*(int *)(iVar5 + 0x210) + 0x22c))(iVar5,4);
  }
  iVar2 = (*(code *)param_1[0x93])(param_1);
  uVar7 = DAT_00024304;
  if (iVar2 != 0) goto LAB_0002402e;
  if (uVar1 != 0) {
    uVar1 = *(uint *)(*(int *)(iVar5 + 0x210) + 0xcd0);
    if ((int)(uVar1 << 0x1c) < 0) {
      uVar1 = uVar1 & 0xfffffffc;
    }
    else {
      uVar1 = 3;
    }
    *(uint *)(*(int *)(iVar5 + 0x210) + 0xcd0) = uVar1;
  }
  (*(code *)param_1[0x5a])(param_1);
  uVar7 = DAT_00024344;
  iVar2 = DAT_00024308;
  iVar3 = 0xb;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    (**(code **)(iVar2 + 4))(uVar7);
  }
  iVar2 = ssv6xxx_load_firmware(param_1);
  uVar7 = DAT_0002430c;
  if (iVar2 != 0) goto LAB_0002402e;
  (*(code *)param_1[0x51])(param_1,&local_64);
  if (local_64 == -0xe0e0e0f) {
    uVar7 = 0xf1f1f1f1;
    uVar8 = DAT_00024310;
LAB_000240ac:
    printk(uVar8,uVar7);
    return 0;
  }
  uVar7 = 0x3058;
  printk(DAT_00024314);
  if (local_64 != 0x3058) {
    if (param_1[0x1ee] == 0) {
      printk(DAT_00024318);
      uVar8 = DAT_0002431c;
      goto LAB_000240ac;
    }
    printk(DAT_00024320);
  }
  iVar2 = *(int *)(*(int *)(iVar5 + 0x210) + 0xd54);
  if (iVar2 != 0) {
    iVar3 = __netdev_alloc_skb(0,0x14,0xa20);
    uVar7 = DAT_00024328;
    if (iVar3 != 0) {
      skb_put(iVar3,0x14);
      puVar4 = *(undefined1 **)(iVar3 + 0xa4);
      memset(puVar4 + 2,0,0x16);
      *(int *)(puVar4 + 0x10) = iVar2;
      puVar4[3] = 0x11;
      puVar4[4] = 1;
      puVar4[2] = 5;
      puVar4[0xc] = 1;
      puVar4[0xe] = 0x11;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[0xd] = 0;
      puVar4[0xf] = 0;
      *puVar4 = 0x14;
      puVar4[1] = 0;
      iVar2 = (**(code **)(*(int *)(*(int *)(iVar5 + 0x210) + 0x10) + 0x6c))
                        (*(undefined4 *)(*(int *)(iVar5 + 0x210) + 0x14),iVar3);
      uVar7 = DAT_00024338;
      if (iVar2 == 0) goto LAB_00024108;
    }
    printk(uVar7,DAT_00024324);
  }
LAB_00024108:
  iVar2 = *(int *)(*(int *)(iVar5 + 0x210) + 0xd58);
  if (iVar2 != 0) {
    iVar3 = __netdev_alloc_skb(0,0x14,0xa20);
    uVar7 = DAT_00024328;
    if (iVar3 != 0) {
      skb_put(iVar3,0x14);
      puVar4 = *(undefined1 **)(iVar3 + 0xa4);
      memset(puVar4 + 2,0,0x16);
      puVar4[5] = 0;
      puVar4[2] = 5;
      puVar4[4] = 5;
      puVar4[3] = 0x11;
      puVar4[0xc] = 5;
      puVar4[0xe] = 0x11;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(int *)(puVar4 + 0x10) = iVar2;
      puVar4[0xd] = 0;
      puVar4[0xf] = 0;
      *puVar4 = 0x14;
      puVar4[1] = 0;
      iVar2 = (**(code **)(*(int *)(*(int *)(iVar5 + 0x210) + 0x10) + 0x6c))
                        (*(undefined4 *)(*(int *)(iVar5 + 0x210) + 0x14),iVar3);
      uVar7 = DAT_00024338;
      if (iVar2 == 0) goto LAB_00024130;
    }
    printk(uVar7,DAT_0002432c);
  }
LAB_00024130:
  iVar2 = *(int *)(*(int *)(iVar5 + 0x210) + 0xd5c);
  if (iVar2 != 0) {
    uVar8 = *(undefined4 *)(*(int *)(iVar5 + 0x210) + 0xd60);
    iVar3 = __netdev_alloc_skb(0,0x14,0xa20);
    uVar7 = DAT_00024328;
    if (iVar3 != 0) {
      skb_put(iVar3,0x14);
      puVar4 = *(undefined1 **)(iVar3 + 0xa4);
      memset(puVar4 + 2,0,0x16);
      *(short *)(puVar4 + 0x10) = (short)iVar2;
      *(short *)(puVar4 + 0x12) = (short)uVar8;
      puVar4[3] = 0x11;
      puVar4[4] = 6;
      puVar4[0xc] = 6;
      puVar4[2] = 5;
      puVar4[0xe] = 0x11;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[0xd] = 0;
      puVar4[0xf] = 0;
      *puVar4 = 0x14;
      puVar4[1] = 0;
      iVar5 = (**(code **)(*(int *)(*(int *)(iVar5 + 0x210) + 0x10) + 0x6c))
                        (*(undefined4 *)(*(int *)(iVar5 + 0x210) + 0x14),iVar3);
      uVar7 = DAT_00024338;
      if (iVar5 == 0) goto LAB_0002415c;
    }
    printk(uVar7,DAT_00024330);
  }
LAB_0002415c:
  (*(code *)param_1[0x2d])(param_1);
  (*(code *)param_1[0xc2])(&uStack_5c);
  (*(code *)param_1[0xc4])(&local_60);
  iVar2 = (*(code *)param_1[200])(param_1,local_60,uStack_5c);
  uVar7 = DAT_00024334;
  if (((iVar2 == 0) && (iVar2 = (*(code *)param_1[0x62])(param_1), uVar7 = DAT_0002433c, iVar2 == 0)
      ) && (iVar2 = (**(code **)(*(int *)(*param_1 + 0x210) + 0x7c))(), uVar7 = DAT_00024340,
           iVar2 == 0)) {
    memset(auStack_58,0,0x38);
    local_4e = (undefined2)param_1[0x1ea];
    *(undefined2 *)(*param_1 + 0x200) = local_4e;
    *(undefined2 *)(*param_1 + 0x202) = 1;
    iVar5 = (**(code **)(*(int *)(*param_1 + 0x210) + 0x31c))(*param_1,auStack_58,1,0);
    (*(code *)param_1[0xb2])(param_1,1);
    (*(code *)param_1[0xc9])(param_1,0);
    (*(code *)param_1[0x24])(param_1,0);
    (*(code *)param_1[0x24])(param_1,1);
    return iVar5;
  }
LAB_0002402e:
  printk(uVar7);
  return iVar2;
}



/* ===== ssv6xxx_restart_hw @ 00024348 size=560 ===== */

void ssv6xxx_restart_hw(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  
  iVar3 = param_1;
  printk(DAT_00024578);
  printk(DAT_0002457c);
  printk(DAT_00024578);
  if ((int)(*(uint *)(param_1 + 0x860) << 0x1e) < 0) {
    printk(DAT_00024580);
    return;
  }
  *(uint *)(param_1 + 0x860) = *(uint *)(param_1 + 0x860) | 2;
  iVar9 = DAT_00024584;
  iVar11 = param_1 + -0x18;
  *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
  uVar1 = DAT_00024588;
  iVar6 = *(int *)(param_1 + 0x1f8);
  iVar8 = 0x2711;
  pcVar4 = *(code **)(*(int *)(iVar6 + 0x10) + 0x70);
  (*pcVar4)(*(undefined4 *)(iVar6 + 0x14),1,pcVar4,iVar6,iVar3,param_2,param_3);
  while (uVar2 = DAT_00024588, *(char *)(param_1 + 0x961) != '\0') {
    if (*(char *)(param_1 + 0xd40) != '\0') {
      ssv6xxx_cancel_hw_scan(iVar11);
    }
    iVar3 = 0x65;
    while (iVar3 = iVar3 + -1, iVar3 != 0) {
      (**(code **)(iVar9 + 4))(uVar1);
    }
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
      return;
    }
  }
  iVar9 = 0x33;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x10) + 4))
            (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x14));
  rtnl_lock();
  mutex_lock(param_1 + 0x1ec);
  printk(DAT_00024590,DAT_0002458c);
  (**(code **)(*(int *)(param_1 + 0x1f8) + 0x194))();
  iVar3 = DAT_00024584;
  (**(code **)(*(int *)(param_1 + 0x1f8) + 0x2cc))(*(int *)(param_1 + 0x1f8),0);
  while (iVar9 = iVar9 + -1, iVar9 != 0) {
    (**(code **)(iVar3 + 4))(uVar2);
  }
  (**(code **)(*(int *)(param_1 + 0x1f8) + 0xa8))(iVar11);
  (**(code **)(*(int *)(param_1 + 0x1f8) + 0x74))();
  (**(code **)(iVar3 + 4))(DAT_00024594);
  (**(code **)(*(int *)(param_1 + 0x1f8) + 0x220))();
  down_write(param_1 + 0xc08);
  puVar7 = (undefined4 *)(param_1 + 0x858);
  puVar10 = (undefined4 *)(param_1 + 0x780);
  do {
    if (puVar10[2] != 0) {
      iVar9 = (int)*(char *)(puVar10 + 1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x10) + 0x54))
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x14),iVar9);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x10) + 0x3c))
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x14),iVar9);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x10) + 0x50))
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x14),iVar9);
      iVar6 = puVar10[2];
      memset(puVar10,0,0x18);
      iVar3 = *(int *)(iVar6 + 0x110);
      piVar5 = *(int **)(iVar6 + 0x114);
      *(undefined4 *)(iVar6 + 0x108) = 0xffffffff;
      *(int **)(iVar3 + 4) = piVar5;
      *piVar5 = iVar3;
      *(undefined4 *)(iVar6 + 0x110) = 0x100;
      *(undefined4 *)(iVar6 + 0x114) = 0x122;
      (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x10) + 0x40))
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x14),iVar9);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x10) + 0x58))
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x14),iVar9);
    }
    puVar10 = puVar10 + 6;
  } while (puVar10 != puVar7);
  puVar10 = (undefined4 *)(param_1 + 0x298);
  up_write(param_1 + 0xc08);
  do {
    piVar5 = (int *)*puVar10;
    if (piVar5 != (int *)0x0) {
      ssv6xxx_debugfs_remove_interface(iVar11,piVar5);
      if (*piVar5 == 3) {
        ssv6xxx_beacon_release(iVar11);
        *(undefined4 *)(param_1 + 0x858) = 0;
      }
      memset(puVar10,0,0x274);
      if (*(char *)(param_1 + 0x85c) != '\0') {
        *(char *)(param_1 + 0x85c) = *(char *)(param_1 + 0x85c) + -1;
      }
    }
    puVar10 = puVar10 + 0x9d;
  } while (puVar10 != (undefined4 *)(param_1 + 0x780));
  *(undefined1 *)(param_1 + 0x95c) = 0;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x10) + 0x70))
            (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x14));
  ssv6xxx_init_hw(*(undefined4 *)(param_1 + 0x1f8));
  mutex_unlock(param_1 + 0x1ec);
  rtnl_unlock();
  ieee80211_restart_hw(*(undefined4 *)(param_1 + -0x18));
  if (*(char *)(param_1 + 0x95c) != '\0') {
    (**(code **)(*(int *)(param_1 + 0x1f8) + 400))();
  }
  *(uint *)(param_1 + 0x860) = *(uint *)(param_1 + 0x860) & 0xfffffffd;
  if (*DAT_00024598 == 0) {
    return;
  }
  ssv_ble_hci_notify_reset();
  return;
}



/* ===== ssv6xxx_init_mac @ 0002459c size=180 ===== */

int ssv6xxx_init_mac(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  printk(DAT_00024650,0xaa);
  printk(DAT_00024658,DAT_00024654);
  printk(DAT_00024660,DAT_0002465c);
  printk(DAT_00024668,DAT_00024664);
  printk(DAT_00024670,DAT_0002466c);
  printk(DAT_00024678,DAT_00024674);
  if (*(int *)(iVar2 + 0x97c) == 1) {
    if ((param_1[499] & 3U) == 1) {
      uVar1 = 0x14;
    }
    else {
      uVar1 = 0x1cb4;
    }
    (*(code *)param_1[0x22])(param_1,0,uVar1);
    (*(code *)param_1[0x22])(param_1,1,0x14);
    (*(code *)param_1[0x23])(param_1);
    iVar3 = 0;
    (**(code **)(*(int *)(iVar2 + 0x210) + 0x13c))
              (*(int *)(iVar2 + 0x210),*(undefined2 *)(*(int *)(iVar2 + 0x884) + 0xc));
  }
  else {
    (*(code *)param_1[0xb3])(param_1,0);
    iVar3 = (*(code *)param_1[0x1c])(param_1);
    if (iVar3 == 0) {
      (*(code *)param_1[0x2c])(param_1);
      (*(code *)param_1[0xb3])(param_1,1);
    }
    else {
      printk(DAT_0002467c);
    }
  }
  return iVar3;
}



/* ===== ssv6xxx_deinit_hw @ 00024680 size=8 ===== */

void ssv6xxx_deinit_hw(void)

{
  printk(DAT_0002468c,DAT_00024688);
  return;
}



/* ===== ssv_ble_register @ 00024690 size=172 ===== */

undefined4 ssv_ble_register(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  printk(DAT_00024740,DAT_0002473c,0x65d,param_4,param_4);
  if (param_1 == 0) {
    printk(DAT_00024744,DAT_0002473c);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 != 0) {
      iVar3 = hci_alloc_dev();
      piVar1 = DAT_0002474c;
      iVar4 = iVar4 + 0x10;
      *DAT_0002474c = iVar3;
      if (iVar3 == 0) {
        _dev_err(iVar4,DAT_00024750);
        return 0xfffffff4;
      }
      *(undefined1 *)(iVar3 + 0x22) = 6;
      uVar2 = DAT_00024754;
      *(int *)(iVar3 + 0xa00) = param_1;
      *(int *)(iVar3 + 0x9e4) = iVar4;
      *(undefined4 *)(iVar3 + 0xc40) = uVar2;
      *(undefined4 *)(iVar3 + 0xc44) = DAT_00024758;
      *(undefined4 *)(iVar3 + 0xc48) = DAT_0002475c;
      *(undefined4 *)(iVar3 + 0xc54) = DAT_00024760;
      *(undefined4 *)(iVar3 + 0xc68) = DAT_00024764;
      *(int *)(param_1 + 0x14a4) = param_1 + 0x14a4;
      *(int *)(param_1 + 0x14a8) = param_1 + 0x14a4;
      *(undefined4 *)(param_1 + 0x14ac) = 0;
      iVar3 = hci_register_dev();
      printk(DAT_00024768,iVar3);
      if (-1 < iVar3) {
        return 0;
      }
      _dev_err(iVar4,DAT_0002476c);
      hci_free_dev(*piVar1);
      return 0xffffffed;
    }
    _dev_err(0x10,DAT_00024748);
  }
  return 0xffffffea;
}



/* ===== ssv6xxx_dev_probe @ 00024770 size=2438 ===== */

int ssv6xxx_dev_probe(undefined4 *param_1)

{
  undefined2 uVar1;
  byte bVar2;
  ushort uVar3;
  uint *__src;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined4 extraout_r1;
  byte *pbVar11;
  int *piVar12;
  byte bVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  code *pcVar17;
  int iVar18;
  int *piVar19;
  int *piVar21;
  int *piVar22;
  int iVar23;
  undefined4 *puVar24;
  byte local_2e [10];
  int *piVar20;
  
  puVar24 = param_1 + 4;
  if (param_1[0x13] == 0) {
    _dev_err(puVar24,DAT_00024970);
    return -0x16;
  }
  printk(DAT_00024978,DAT_00024974,*param_1);
  iVar5 = ieee80211_alloc_hw_nm(0x14b0,DAT_0002497c,0);
  if (iVar5 == 0) {
    _dev_err(puVar24,DAT_00024980);
    return -0xc;
  }
  *(undefined4 **)(*(int *)(iVar5 + 0x38) + 0x114) = puVar24;
  param_1[0x14] = iVar5;
  memset(*(void **)(iVar5 + 0x40),0,0x14b0);
  piVar21 = *(int **)(iVar5 + 0x40);
  *piVar21 = iVar5;
  piVar21[1] = (int)puVar24;
  piVar21[2] = (int)param_1;
  if (param_1[0x13] == 0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)software_udf(2,0x247dc);
    (*pcVar17)();
  }
  uVar14 = *param_1;
  iVar6 = ssv6xxx_init_hal(piVar21);
  __src = DAT_000249a0;
  if (iVar6 != 0) goto LAB_00024878;
  iVar23 = piVar21[0x84];
  iVar6 = ssv6xxx_hci_register(iVar23 + 8,(*DAT_000249a0 & 0x7ffff) >> 0x12);
  if (iVar6 == 0) {
    iVar6 = piVar21[0x84];
    (**(code **)(iVar6 + 0x9c))(iVar6);
    printk(DAT_00024984,extraout_r1,*(undefined4 *)(iVar6 + 0x60),*(undefined4 *)(iVar6 + 100));
    memcpy((void *)(iVar6 + 0x7a4),__src,0x614);
    efuse_read_all_map(iVar6);
    (**(code **)(iVar6 + 0x248))(iVar6);
    uVar16 = DAT_00024988;
    if (((*(uint *)(iVar6 + 0x7bc) & 1) == 0) &&
       (*(uint *)(iVar6 + 0x7bc) != 0 || *(short *)(iVar6 + 0x7c0) != 0)) {
      iVar7 = (**(code **)(iVar6 + 0xa4))(iVar6);
      if (iVar7 != 0) {
        local_2e[0] = 0xfd;
        local_2e[1] = 0xff;
        local_2e[2] = 0xff;
        local_2e[3] = 0xff;
        local_2e[4] = 0xff;
        local_2e[5] = 0xfc;
        iVar7 = 0;
        puVar8 = __src + 6;
        pbVar11 = local_2e;
        do {
          if ((*pbVar11 & ((byte)*puVar8 ^ *(byte *)((int)puVar8 + 6))) != 0) {
            printk(DAT_00024990,iVar7,(byte)*puVar8,*(byte *)((int)puVar8 + 6),*pbVar11);
            puVar10 = DAT_00024994;
            *DAT_00024994 = *(undefined4 *)((int)DAT_00024994 + -6);
            *(short *)(puVar10 + 1) = (short)__src[7];
            bVar2 = *(byte *)((int)__src + 0x1d);
            bVar13 = *(byte *)((int)__src + 0x23) ^ 1;
            *(byte *)((int)__src + 0x23) = bVar13;
            if (bVar13 < bVar2) {
              *(byte *)((int)__src + 0x1d) = bVar13;
              *(byte *)((int)__src + 0x23) = bVar2;
              *(byte *)(iVar6 + 0x7c1) = bVar13;
            }
            printk(DAT_00024998);
            printk(DAT_0002499c,(int)DAT_00024994 + -6);
            break;
          }
          iVar7 = iVar7 + 1;
          puVar8 = (uint *)((int)puVar8 + 1);
          pbVar11 = pbVar11 + 1;
        } while (iVar7 != 6);
        uVar1 = *(undefined2 *)(DAT_00024994 + 1);
        *(undefined4 *)(iVar6 + 0x7c2) = *DAT_00024994;
        *(undefined2 *)(iVar6 + 0x7c6) = uVar1;
      }
      uVar15 = *(uint *)(iVar6 + 0x7ac);
      if (uVar15 == 0x18) {
        uVar16 = 2;
      }
      else {
        uVar16 = DAT_000251f8;
        if (uVar15 < 0x19) {
          if (uVar15 == 0x10) {
            uVar16 = 5;
          }
          else if (uVar15 == 0x14) {
            uVar16 = 6;
          }
          else {
            if (uVar15 != 0xc) goto LAB_00024854;
            uVar16 = 4;
          }
        }
        else if (uVar15 == 0x1a) {
          uVar16 = 0;
        }
        else if (uVar15 < 0x1a) {
          uVar16 = 3;
        }
        else if (uVar15 == 0x20) {
          uVar16 = 7;
        }
        else {
          if (uVar15 != 0x28) goto LAB_00024854;
          uVar16 = 1;
        }
      }
      *(undefined4 *)(iVar6 + 0x7ac) = uVar16;
      if (*(char *)(iVar6 + 0xdb8) == '\0') {
        uVar16 = DAT_000251fc;
        if (1 < *(uint *)(iVar6 + 0x7b0)) goto LAB_00024854;
        *(uint *)(iVar6 + 0x7b0) = __src[3];
      }
      (**(code **)(iVar6 + 0x68))(iVar6);
      (**(code **)(iVar6 + 0x18c))(iVar6);
      *(undefined4 *)(iVar6 + 0x2c) = DAT_00024d2c;
      *(undefined4 *)(iVar6 + 0x30) = DAT_00024d30;
      *(undefined4 *)(iVar6 + 0x34) = DAT_00024d34;
      *(undefined4 *)(iVar6 + 0x3c) = DAT_00024d38;
      *(undefined4 *)(iVar6 + 0x40) = DAT_00024d3c;
      *(undefined4 *)(iVar6 + 0x38) = DAT_00024d40;
      *(undefined4 *)(iVar6 + 0x28) = DAT_00024d44;
      if (*(int *)(iVar23 + 0x7a4) == 0) {
        iVar6 = -1;
      }
      else {
        if (*(int *)(*(int *)(iVar23 + 0x14) + 0x284) == 0) {
          printk(DAT_00024d48);
          *(uint *)(iVar23 + 0x7a4) = *(uint *)(iVar23 + 0x7a4) & 0xfffbffff;
        }
        else if (*(int *)(iVar23 + 0x7a4) << 0xd < 0) {
          (**(code **)(*(int *)(piVar21[0x84] + 0x10) + 0x88))
                    (*(undefined4 *)(piVar21[0x84] + 0x14),0,1);
        }
        (**(code **)(*(int *)(piVar21[0x84] + 0x10) + 0x8c))
                  (*(undefined4 *)(piVar21[0x84] + 0x14),*(undefined1 *)(iVar23 + 0xd78),
                   *(undefined4 *)(iVar23 + 0xd7c),*(undefined4 *)(iVar23 + 0xd80),
                   *(undefined4 *)(iVar23 + 0xd84));
        __mutex_init(piVar21 + 0x81,DAT_00024d50,DAT_00024d4c);
        __mutex_init(piVar21 + 0x24c,DAT_00024d54,DAT_00024d4c);
        __mutex_init(piVar21 + 0x349,DAT_00024d58,DAT_00024d4c);
        iVar7 = alloc_workqueue(DAT_00024d64,DAT_00024d60,1,DAT_00024d5c);
        piVar21[7] = (int)(piVar21 + 7);
        piVar21[8] = (int)(piVar21 + 7);
        iVar6 = DAT_00024d68;
        piVar21[6] = -0x20;
        piVar21[0x225] = -0x20;
        piVar21[9] = iVar6;
        piVar21[0x226] = (int)(piVar21 + 0x226);
        piVar21[0x227] = (int)(piVar21 + 0x226);
        iVar6 = DAT_00024d6c;
        piVar21[0x229] = -0x20;
        piVar21[0x22d] = -0x20;
        piVar21[0x228] = iVar6;
        piVar21[0x22a] = (int)(piVar21 + 0x22a);
        piVar21[0x22b] = (int)(piVar21 + 0x22a);
        uVar16 = DAT_00024d74;
        piVar21[0x22c] = DAT_00024d70;
        piVar21[0x22e] = (int)(piVar21 + 0x22e);
        piVar21[0x22f] = (int)(piVar21 + 0x22e);
        piVar21[0x230] = DAT_00024d78;
        piVar21[0x222] = iVar7;
        init_timer_key(piVar21 + 0x231,uVar16,0x200000,0,0);
        piVar21[0x239] = (int)(piVar21 + 0x239);
        piVar21[0x23a] = (int)(piVar21 + 0x239);
        iVar6 = DAT_00024d7c;
        piVar21[0x238] = -0x20;
        uVar16 = DAT_00024d74;
        piVar21[0x23b] = iVar6;
        init_timer_key(piVar21 + 0x23c,uVar16,0x200000,0,0);
        piVar21[0x256] = (int)(piVar21 + 0x256);
        piVar21[599] = (int)(piVar21 + 0x256);
        iVar6 = DAT_00024d80;
        piVar21[0x255] = -0x20;
        piVar21[0x259] = -0x20;
        piVar21[600] = iVar6;
        piVar21[0x25a] = (int)(piVar21 + 0x25a);
        piVar21[0x25b] = (int)(piVar21 + 0x25a);
        piVar21[0x25c] = DAT_00024d84;
        piVar21[0x221] = DAT_00024d88;
        memset(piVar21 + 0x85,0,0x70);
        piVar21[0x86] = 3;
        piVar21[0x87] = 2;
        piVar21[0x8a] = 3;
        piVar21[0x8b] = 2;
        piVar21[0x8c] = 1;
        piVar21[0x88] = 1;
        memset(piVar21 + 0xa1,0,0x2c);
        pvVar9 = memset(piVar21 + 0x244,0,0x10);
        uVar4 = DAT_00024d8c;
        uVar16 = DAT_00024d4c;
        piVar21[0x244] = (int)pvVar9;
        piVar21[0x245] = (int)pvVar9;
        __init_rwsem(piVar21 + 0x308,uVar4,uVar16);
        iVar6 = ssv6xxx_update_hw_channel(piVar21);
        if (iVar6 < 0) {
          iVar6 = -0xc;
        }
        else {
          piVar21[0x7f] = 0;
          piVar21[0x263] = 0;
          *(undefined2 *)(piVar21 + 0x80) = 0xffff;
          piVar21[0x266] = 0;
          piVar21[0x261] = (int)(piVar21 + 0x261);
          piVar21[0x262] = (int)(piVar21 + 0x261);
          uVar16 = DAT_00024d4c;
          piVar21[0x264] = (int)(piVar21 + 0x264);
          piVar21[0x265] = (int)(piVar21 + 0x264);
          __init_waitqueue_head(piVar21 + 0x267,DAT_00024d90,uVar16);
          piVar21[0x26b] = 0;
          piVar21[0x269] = (int)(piVar21 + 0x269);
          piVar21[0x26a] = (int)(piVar21 + 0x269);
          uVar15 = kthread_create_on_node(DAT_00024d94,piVar21,0xffffffff,DAT_00024d98);
          if (uVar15 < 0xfffff001) {
            wake_up_process();
          }
          piVar21[0x26c] = uVar15;
          (**(code **)(piVar21[0x84] + 0x6c))();
          __init_waitqueue_head(piVar21 + 0x305,DAT_00024d9c,DAT_00024d4c);
          piVar21[0x26f] = 0x400;
          uVar16 = DAT_00024da0;
          *(undefined1 *)(*(int *)(piVar21[0x84] + 4) + 0x30) = 1;
          iVar6 = DAT_00024da4;
          *(undefined1 *)((int)piVar21 + 0x9cd) = 0;
          piVar21[0x274] = 0;
          piVar21[0x275] = 0;
          piVar21[0x276] = 0;
          piVar21[0x314] = iVar6;
          piVar21[0x315] = (int)piVar21;
          init_timer_key(piVar21 + 0x30f,uVar16,0,0,0);
          uVar4 = DAT_00024d64;
          uVar16 = DAT_00024d60;
          piVar21[0x311] = *DAT_00024da8 + 0x1e;
          iVar7 = alloc_workqueue(uVar4,uVar16,1,DAT_00024dac);
          piVar21[0x318] = (int)(piVar21 + 0x318);
          piVar21[0x319] = (int)(piVar21 + 0x318);
          iVar6 = DAT_00024db0;
          piVar21[0x317] = -0x20;
          piVar21[0x321] = -0x20;
          piVar21[0x31a] = iVar6;
          piVar21[0x322] = (int)(piVar21 + 0x322);
          piVar21[0x323] = (int)(piVar21 + 0x322);
          iVar6 = DAT_00024db4;
          piVar21[0x325] = -0x20;
          piVar21[0x329] = -0x20;
          piVar21[0x324] = iVar6;
          piVar21[0x326] = (int)(piVar21 + 0x326);
          piVar21[0x327] = (int)(piVar21 + 0x326);
          iVar6 = DAT_00024db8;
          *(undefined1 *)(piVar21 + 0x21f) = 0;
          piVar21[0x328] = iVar6;
          piVar21[0x32a] = (int)(piVar21 + 0x32a);
          piVar21[0x32b] = (int)(piVar21 + 0x32a);
          piVar21[0x32c] = DAT_00024dbc;
          piVar21[0x316] = iVar7;
          add_timer(piVar21 + 0x30f);
          iVar7 = alloc_workqueue(DAT_00024d64,DAT_00024d60,1,DAT_00024dc0);
          piVar21[0x346] = (int)(piVar21 + 0x346);
          piVar21[0x347] = (int)(piVar21 + 0x346);
          iVar6 = DAT_00024dc4;
          piVar21[0x345] = -0x20;
          uVar16 = DAT_00024d60;
          piVar21[0x348] = iVar6;
          uVar4 = DAT_00024dc8;
          piVar21[0x344] = iVar7;
          iVar7 = alloc_workqueue(DAT_00024d64,uVar16,1,uVar4);
          piVar21[0x3f5] = (int)(piVar21 + 0x3f5);
          piVar21[0x3f6] = (int)(piVar21 + 0x3f5);
          iVar6 = DAT_00024dcc;
          piVar21[0x3f4] = -0x20;
          uVar16 = DAT_00024d74;
          piVar21[0x3f7] = iVar6;
          piVar21[0x3f3] = iVar7;
          init_timer_key(piVar21 + 0x3f8,uVar16,0x200000,0,0);
          iVar6 = DAT_000250a4;
          piVar22 = piVar21 + 0x400;
          piVar21[0x3ff] = -0x20;
          *piVar22 = (int)piVar22;
          piVar21[0x401] = (int)piVar22;
          piVar21[0x402] = iVar6;
          init_timer_key(piVar21 + 0x403,DAT_000250a8,0x200000,0,0);
          piVar21[0x33c] = 0;
          *(undefined1 *)(piVar21 + 3) = 0;
          piVar21[0x21e] = piVar21[0x21e] | 0x40;
          piVar21[0x33e] = 0;
          __init_swait_queue_head(piVar21 + 0x33f,DAT_000250b0,DAT_000250ac);
          piVar21[0x341] = 0;
          __init_swait_queue_head(piVar21 + 0x342,DAT_000250b0,DAT_000250ac);
          piVar22 = *(int **)(iVar23 + 0x14);
          puVar10 = (undefined4 *)*piVar22;
          if (*(code **)(puVar10[1] + 0x78) != (code *)0x0) {
            (**(code **)(puVar10[1] + 0x78))
                      (*puVar10,puVar10[6],puVar10[7],puVar10[4],piVar22 + 0x8a,piVar22 + 0x8b,
                       *(undefined4 *)(iVar23 + 0xccc));
          }
          pcVar17 = *(code **)(((undefined4 *)*piVar22)[1] + 0x20);
          if (pcVar17 != (code *)0x0) {
            (*pcVar17)(*(undefined4 *)*piVar22,~piVar22[9]);
          }
          pcVar17 = *(code **)(((undefined4 *)*piVar22)[1] + 0x34);
          if (pcVar17 != (code *)0x0) {
            (*pcVar17)(*(undefined4 *)*piVar22);
          }
          pcVar17 = *(code **)(((undefined4 *)*piVar22)[1] + 0x24);
          if (pcVar17 != (code *)0x0) {
            (*pcVar17)(*(undefined4 *)*piVar22);
          }
          iVar6 = *piVar21;
          iVar7 = piVar21[0x84];
          *(uint *)(iVar6 + 0x44) = DAT_000250b4 | *(uint *)(iVar6 + 0x44);
          (**(code **)(piVar21[0x84] + 0x2dc))(piVar21);
          if (*(int *)(iVar7 + 0x7a4) << 0x1f < 0) {
            if (*(int *)(iVar7 + 0x7a4) << 0x16 < 0) {
              *(uint *)(iVar6 + 0x44) = *(uint *)(iVar6 + 0x44) | 0xc0;
            }
            uVar3 = *(ushort *)(piVar21 + 0x11);
            *(ushort *)(piVar21 + 0x11) = uVar3 | 0xc;
            if (*(int *)(iVar7 + 0x7a4) << 0x1e < 0) {
              *(ushort *)(piVar21 + 0x11) = uVar3 | 0x1c;
            }
            if (*(int *)(iVar7 + 0x7a4) << 0x13 < 0) {
              *(ushort *)(piVar21 + 0x11) = *(ushort *)(piVar21 + 0x11) | 0x100;
            }
            if (*(int *)(iVar7 + 0x7a4) << 0x19 < 0) {
              *(ushort *)(piVar21 + 0x11) = *(ushort *)(piVar21 + 0x11) | 2;
            }
            if (*(int *)(iVar7 + 0x7a4) << 0x1a < 0) {
              uVar3 = *(ushort *)(piVar21 + 0x11);
              *(ushort *)(piVar21 + 0x11) = uVar3 | 0x20;
              if (*(int *)(iVar7 + 0x7a4) << 0x19 < 0) {
                *(ushort *)(piVar21 + 0x11) = uVar3 | 0x60;
              }
            }
            iVar18 = *(int *)(iVar7 + 0xd64);
            if (((iVar18 != 0) && (iVar18 != 1)) && (iVar18 != 2)) {
              iVar18 = 3;
            }
            *(char *)((int)piVar21 + 0x47) = (char)iVar18;
            memset((void *)((int)piVar21 + 0x49),0,0x10);
            *(undefined2 *)(piVar21 + 0x12) = 0xff06;
            *(undefined1 *)((int)piVar21 + 0x55) = 1;
            *(undefined1 *)((int)piVar21 + 0x53) = 0x48;
            *(undefined1 *)(piVar21 + 0x15) = 0;
            *(undefined1 *)((int)piVar21 + 0x46) = 1;
          }
          *(undefined1 *)(*(int *)(iVar6 + 0x38) + 0x44) = 0x20;
          *(undefined2 *)(*(int *)(iVar6 + 0x38) + 0x48) = 0x200;
          *(undefined2 *)(*(int *)(iVar6 + 0x38) + 0x20) = 4;
          *(ushort *)(*(int *)(iVar6 + 0x38) + 0x20) =
               *(ushort *)(*(int *)(iVar6 + 0x38) + 0x20) | 2;
          *(ushort *)(*(int *)(iVar6 + 0x38) + 0x20) =
               *(ushort *)(*(int *)(iVar6 + 0x38) + 0x20) | 0x40;
          if (*(int *)(iVar7 + 0x7a4) << 0x17 < 0) {
            *(ushort *)(*(int *)(iVar6 + 0x38) + 0x20) =
                 *(ushort *)(*(int *)(iVar6 + 0x38) + 0x20) | 0x100;
            *(ushort *)(*(int *)(iVar6 + 0x38) + 0x20) =
                 *(ushort *)(*(int *)(iVar6 + 0x38) + 0x20) | 0x200;
            *(undefined4 *)(*(int *)(iVar6 + 0x38) + 0x14) = DAT_000250b8;
            *(undefined4 *)(*(int *)(iVar6 + 0x38) + 0x18) = 1;
          }
          *(uint *)(*(int *)(iVar6 + 0x38) + 0x24) =
               *(uint *)(*(int *)(iVar6 + 0x38) + 0x24) | 0x200000;
          if (*(int *)(iVar7 + 0x7a4) << 0x18 < 0) {
            *(ushort *)(*(int *)(iVar6 + 0x38) + 0x20) =
                 *(ushort *)(*(int *)(iVar6 + 0x38) + 0x20) | 8;
            *(uint *)(*(int *)(iVar6 + 0x38) + 0x24) =
                 *(uint *)(*(int *)(iVar6 + 0x38) + 0x24) | 0x4000;
          }
          uVar16 = DAT_000250bc;
          if (*(int *)(iVar7 + 0x7a4) << 0x14 < 0) {
            *(uint *)(*(int *)(iVar6 + 0x38) + 0x24) =
                 *(uint *)(*(int *)(iVar6 + 0x38) + 0x24) | 0x8000;
            *(uint *)(*(int *)(iVar6 + 0x38) + 0x24) =
                 *(uint *)(*(int *)(iVar6 + 0x38) + 0x24) | 0x10000;
            printk(uVar16);
          }
          *(uint *)(*(int *)(iVar6 + 0x38) + 0x24) =
               *(uint *)(*(int *)(iVar6 + 0x38) + 0x24) | 0x100;
          *(undefined4 *)(iVar6 + 100) = DAT_000250c0;
          (**(code **)(piVar21[0x84] + 0x2e0))(piVar21);
          *(undefined4 *)(iVar6 + 0x4c) = 0x80;
          if (*(int *)(iVar7 + 0x7a4) << 0x1d < 0) {
            *(int **)(*(int *)(iVar6 + 0x38) + 0xd4) = piVar21 + 0xc;
          }
          if (*(int *)(iVar7 + 0x7a4) << 0x1c < 0) {
            piVar22 = piVar21 + 0x28;
            piVar19 = piVar21 + 0x11;
            do {
              piVar20 = piVar19 + 1;
              piVar12 = piVar22 + 1;
              *piVar22 = *piVar19;
              piVar22 = piVar12;
              piVar19 = piVar20;
            } while (piVar20 != piVar21 + 0x16);
            *(short *)piVar12 = (short)*piVar20;
            *(int **)(*(int *)(iVar6 + 0x38) + 0xd8) = piVar21 + 0x23;
          }
          *(short *)(iVar6 + 0x6c) = (short)*(undefined4 *)(iVar7 + 0xcb8);
          *(undefined2 *)(iVar6 + 0x6e) = 0x40;
          *(undefined4 *)(iVar6 + 0x54) = 0x30;
          *(undefined4 *)(iVar6 + 0x58) = 0xf0;
          *(undefined4 *)(iVar7 + 0xf48) = *(undefined4 *)(iVar7 + 0x7bc);
          *(undefined2 *)(iVar7 + 0xf4c) = *(undefined2 *)(iVar7 + 0x7c0);
          *(int *)(*(int *)(iVar6 + 0x38) + 0xc) = iVar7 + 0xf48;
          *(undefined2 *)(*(int *)(iVar6 + 0x38) + 0x1e) = 1;
          if (*(int *)(iVar7 + 0x7a4) << 0x17 < 0) {
            *(undefined2 *)(iVar7 + 0xf52) = *(undefined2 *)(iVar7 + 0xf4c);
            *(undefined4 *)(iVar7 + 0xf4e) = *(undefined4 *)(iVar7 + 0xf48);
            *(char *)(iVar7 + 0xf53) = *(char *)(iVar7 + 0xf53) + '\x01';
            *(short *)(*(int *)(iVar6 + 0x38) + 0x1e) =
                 *(short *)(*(int *)(iVar6 + 0x38) + 0x1e) + 1;
          }
          if (*(int *)(iVar7 + 0x7c2) != 0 || *(short *)(iVar7 + 0x7c6) != 0) {
            *(undefined4 *)(iVar7 + 0xf4e) = *(undefined4 *)(iVar7 + 0x7c2);
            *(undefined2 *)(iVar7 + 0xf52) = *(undefined2 *)(iVar7 + 0x7c6);
            if (*(ushort *)(*(int *)(iVar6 + 0x38) + 0x1e) < 2) {
              *(undefined2 *)(*(int *)(iVar6 + 0x38) + 0x1e) = 2;
            }
          }
          ssv6xxx_attach_wow(piVar21);
          if (*(int *)(iVar7 + 0x7a4) << 0xc < 0) {
            *(uint *)(iVar6 + 0x44) = *(uint *)(iVar6 + 0x44) | 0x10000;
          }
          iVar6 = ssv6xxx_init_hw(piVar21[0x84]);
          if (iVar6 == 0) {
            iVar6 = ieee80211_register_hw(iVar5);
            if (iVar6 == 0) {
              iVar6 = *(int *)(*(int *)(iVar5 + 0x38) + 0x11c);
              if (iVar6 == 0) {
                iVar6 = *(int *)(*(int *)(iVar5 + 0x38) + 0xf0);
              }
              ssv_init_cli(iVar6,piVar21 + 0x270);
              ssv6xxx_init_debugfs(piVar21,uVar14);
              ssv_ctl_init();
              uVar14 = DAT_00025200;
              piVar21[0x21e] = piVar21[0x21e] | 1;
              _dev_info(*(int *)(iVar5 + 0x38) + 0xf0,DAT_00025204,uVar14);
              printk(DAT_00025208,*(undefined1 *)(piVar21[0x84] + 0xda4));
              iVar5 = piVar21[0x84];
              if (*(char *)(iVar5 + 0xda4) != '\0') {
                (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))(*(undefined4 *)(iVar5 + 0x14));
                ssv_ble_init(piVar21,0);
                return 0;
              }
              ssv_ble_register(piVar21);
              return 0;
            }
            printk(DAT_000251f4,iVar6);
          }
          ssv6xxx_deinit_hw(piVar21);
        }
        ssv6xxx_deinit_softc(piVar21);
      }
    }
    else {
LAB_00024854:
      printk(uVar16);
      iVar6 = -0xc;
    }
    ssv6xxx_hci_deregister(iVar23 + 8);
  }
  if (*(int *)(piVar21[0x84] + 0xf60) != 0) {
    kfree();
  }
  kfree(piVar21[0x84]);
LAB_00024878:
  _dev_err(puVar24,DAT_0002498c);
  ieee80211_free_hw(iVar5);
  return iVar6;
}



/* ===== ssv6xxx_dev_remove @ 0002520c size=366 ===== */

undefined4 ssv6xxx_dev_remove(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x50);
  piVar4 = *(int **)(iVar5 + 0x40);
  printk(DAT_0002537c,param_1,iVar5);
  ssv_ble_init(piVar4,1);
  (**(code **)(*(int *)(piVar4[0x84] + 0x10) + 0x70))(*(undefined4 *)(piVar4[0x84] + 0x14),1);
  *(undefined1 *)(piVar4 + 0x21f) = 0;
  pcVar3 = *(code **)(((undefined4 *)**(undefined4 **)(piVar4[0x84] + 0x14))[1] + 0x28);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*(undefined4 *)**(undefined4 **)(piVar4[0x84] + 0x14));
  }
  if (piVar4[0x330] != 0) {
    printk(DAT_00025380);
    kthread_stop(piVar4[0x330]);
    while (piVar4[0x330] != 0) {
      msleep(1);
    }
    printk(DAT_00025384);
  }
  ssv6xxx_cancel_work_sync(piVar4);
  if (piVar4[0x26c] != 0) {
    printk(DAT_00025388);
    kthread_stop(piVar4[0x26c]);
    while (piVar4[0x26c] != 0) {
      msleep(1);
    }
    printk(DAT_0002538c);
  }
  if (*(int *)(*(int *)(piVar4[0x84] + 0x14) + 0x238) != 0) {
    printk(DAT_00025390);
    kthread_stop(*(undefined4 *)(*(int *)(piVar4[0x84] + 0x14) + 0x238));
    while (*(int *)(*(int *)(piVar4[0x84] + 0x14) + 0x238) != 0) {
      msleep(1);
    }
    printk(DAT_00025394);
  }
  printk(DAT_0002539c,DAT_00025398);
  piVar4[0x21e] = piVar4[0x21e] & 0xfffffffe;
  ssv_ctl_exit();
  ssv6xxx_deinit_debugfs(piVar4);
  piVar1 = DAT_000253a0;
  iVar2 = *(int *)(*(int *)(*piVar4 + 0x38) + 0x11c);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(int *)(*piVar4 + 0x38) + 0xf0);
  }
  ssv_deinit_cli(iVar2,piVar4 + 0x270);
  ieee80211_unregister_hw(*piVar4);
  ssv6xxx_deinit_hw(piVar4);
  ssv6xxx_deinit_softc(piVar4);
  if (*piVar1 != 0) {
    printk(DAT_000253a4);
    hci_unregister_dev(*piVar1);
    printk(DAT_000253a8);
    hci_free_dev(*piVar1);
  }
  ssv6xxx_hci_deregister(piVar4[0x84] + 8);
  if (*(int *)(piVar4[0x84] + 0xf60) != 0) {
    kfree();
  }
  kfree(piVar4[0x84]);
  printk(DAT_000253ac);
  ieee80211_free_hw(iVar5);
  printk(DAT_000253b0);
  return 0;
}



/* ===== ssv6200_set_bitrate_mask @ 000253b8 size=14 ===== */

undefined4
ssv6200_set_bitrate_mask
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  printk(DAT_000253cc,DAT_000253c8,param_3,param_4,param_4);
  return 0;
}



/* ===== ssv6200_get_tsf @ 000253d0 size=16 ===== */

undefined8
ssv6200_get_tsf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  printk(DAT_000253e4,DAT_000253e0,param_3,param_4,param_4);
  return 0;
}



/* ===== ssv6200_conf_tx @ 000253e8 size=108 ===== */

undefined4 ssv6200_conf_tx(int param_1,int param_2,uint param_3,undefined2 *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  printk(DAT_00025454,*(undefined4 *)(param_2 + 0x2b8),*(undefined1 *)(param_2 + 0xb0),param_3,
         *(undefined1 *)(param_4 + 3),param_4[1],param_4[2],*param_4);
  if (param_3 < 4) {
    if ((*(int *)(param_2 + 0x2b8) == 0) || (*(char *)(param_2 + 0x296) != '\0')) {
      (**(code **)(*(int *)(iVar1 + 0x210) + 0x160))
                (*(int *)(iVar1 + 0x210),*(undefined1 *)(param_2 + 0xb0));
      (**(code **)(*(int *)(iVar1 + 0x210) + 0x164))(iVar1,param_4,param_3);
      return 0;
    }
    _dev_warn(*(undefined4 *)(iVar1 + 4),DAT_00025458);
  }
  return 1;
}



/* ===== ssv6xxx_ampdu_opertaion @ 0002545c size=126 ===== */

undefined4 ssv6xxx_ampdu_opertaion(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  printk(DAT_000254dc,DAT_000254e0,param_3,param_4,param_4);
  iVar1 = ssv_skb_alloc(param_1,0x14);
  if (iVar1 == 0) {
    printk(DAT_000254e4,DAT_000254e0);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    skb_put(iVar1,0x14);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(uint *)(puVar3 + 4) = param_2;
    puVar3[2] = puVar3[2] & 0xf8 | 5;
    *(short *)(puVar3 + 0x10) = (short)param_3;
    puVar3[3] = 0xf;
    puVar3[0x12] = (char)param_4;
    *puVar3 = 0x14;
    *(undefined2 *)(puVar3 + 10) = 0;
    *(uint *)(puVar3 + 0xc) = param_2 | 0xf0000;
    puVar3[1] = 0;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x6c))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar1);
  }
  return uVar2;
}



/* ===== ssv6200_remove_interface @ 000254e8 size=304 ===== */

void ssv6200_remove_interface(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x40);
  _dev_err(*(undefined4 *)(iVar2 + 4),DAT_00025618,(char)param_2[0xa4],
           *(undefined1 *)((int)param_2 + 0x291),*(undefined1 *)((int)param_2 + 0x292),
           *(undefined1 *)((int)param_2 + 0x293),(char)param_2[0xa5],
           *(undefined1 *)((int)param_2 + 0x295),*(undefined4 *)(iVar2 + 0x97c));
  mutex_lock(iVar2 + 0x204);
  if (*(char *)(iVar2 + 0x874) != '\0') {
    uVar4 = param_2[0xae];
    ssv6xxx_interface_opertaion(iVar2,1,uVar4 & 0xff,0,0,0,0);
    ssv6xxx_debugfs_remove_interface(iVar2,param_2);
    if ((*param_2 & 0xfffffffd) == 1) {
      ssv6xxx_beacon_release(iVar2);
      *(undefined4 *)(iVar2 + 0x870) = 0;
    }
    if (*param_2 == 2) {
      (**(code **)(*(int *)(iVar2 + 0x210) + 0x194))();
    }
    memset((void *)(param_2[0xae] * 0x274 + iVar2 + 0x2b0),0,0x274);
    cVar3 = *(char *)(iVar2 + 0x874) + -1;
    *(char *)(iVar2 + 0x874) = cVar3;
    if (cVar3 == '\x01') {
      if (uVar4 == 0) {
        piVar1 = *(int **)(iVar2 + 0x524);
        if (((piVar1 != (int *)0x0) && (*piVar1 == 2)) &&
           (((char)piVar1[6] != '\0' && (*(char *)((int)piVar1 + 0x296) == '\0')))) {
          (**(code **)(*(int *)(iVar2 + 0x210) + 0x338))(*(int *)(iVar2 + 0x210),3,1,0x30);
          *(undefined1 *)(iVar2 + 0xd30) = 1;
        }
      }
      else if ((((uVar4 == 1) && (piVar1 = *(int **)(iVar2 + 0x2b0), piVar1 != (int *)0x0)) &&
               (*piVar1 == 2)) &&
              (((char)piVar1[6] != '\0' && (*(char *)((int)piVar1 + 0x296) == '\0')))) {
        (**(code **)(*(int *)(iVar2 + 0x210) + 0x338))(*(int *)(iVar2 + 0x210),3,1,0x30);
        *(undefined1 *)(iVar2 + 0xd30) = 1;
      }
    }
  }
  mutex_unlock(iVar2 + 0x204);
  return;
}



/* ===== ssv6200_stop @ 0002561c size=156 ===== */

void ssv6200_stop(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  printk(DAT_000256bc,DAT_000256b8,*(undefined4 *)(iVar2 + 0x97c));
  mutex_lock(iVar2 + 0x204);
  *(undefined1 *)(iVar2 + 0x87c) = 0;
  *(uint *)(iVar2 + 0x878) = *(uint *)(iVar2 + 0x878) & 0xfffffdff;
  (**(code **)(*(int *)(iVar2 + 0x210) + 0x244))(*(int *)(iVar2 + 0x210),2);
  (**(code **)(*(int *)(iVar2 + 0x210) + 0x324))(*(int *)(iVar2 + 0x210),0);
  (**(code **)(*(int *)(*(int *)(iVar2 + 0x210) + 0x10) + 4))
            (*(undefined4 *)(*(int *)(iVar2 + 0x210) + 0x14));
  (**(code **)(*(int *)(*(int *)(iVar2 + 0x210) + 0x10) + 0x44))
            (*(undefined4 *)(*(int *)(iVar2 + 0x210) + 0x14));
  if (*(int *)(iVar2 + 0x97c) - 1U < 2) {
    *(undefined4 *)(iVar2 + 0x97c) = 1;
    (**(code **)(*(int *)(iVar2 + 0x210) + 0x324))();
  }
  ssv6xxx_beacon_release(iVar2);
  mutex_unlock(iVar2 + 0x204);
  uVar1 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x210) + 0x10) + 0x5c))
                    (*(undefined4 *)(*(int *)(iVar2 + 0x210) + 0x14));
  printk(DAT_000256c0,DAT_000256b8,uVar1);
  return;
}



/* ===== _ssv6200_sta_operation @ 000256c4 size=230 ===== */

undefined4
_ssv6200_sta_operation(int *param_1,int param_2,undefined1 param_3,int param_4,uint param_5)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar9;
  undefined4 *puVar8;
  
  iVar3 = ssv_skb_alloc(param_1,0x34);
  if (iVar3 == 0) {
    printk(DAT_000257b0,DAT_000257ac);
    uVar4 = 0xffffffff;
  }
  else {
    skb_put(iVar3,0x34);
    puVar9 = *(undefined1 **)(iVar3 + 0xa4);
    *(undefined4 *)(puVar9 + 2) = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    *(undefined2 *)(puVar9 + 10) = 0;
    puVar9[2] = puVar9[2] & 0xf8 | 5;
    *(uint *)(puVar9 + 4) = param_5;
    puVar9[3] = 0x10;
    puVar9[1] = 0;
    *(uint *)(puVar9 + 0xc) = param_5 | 0x100000;
    *puVar9 = 0x34;
    memset(puVar9 + 0x10,0,0x24);
    uVar1 = *(undefined2 *)(param_1[0x84] + 0xc9c);
    puVar9[0x2b] = param_3;
    *(undefined2 *)(puVar9 + 0x2c) = uVar1;
    if (param_5 == 1) {
      iVar5 = *(int *)(param_2 + *(int *)(param_4 + 8) * 4);
      *(int *)(puVar9 + 0x10) = iVar5;
      if (*(int *)(param_4 + 8) == 1) {
        *(int *)(puVar9 + 0x10) = iVar5 << 4;
      }
      *(undefined2 *)(puVar9 + 0x14) = *(undefined2 *)(param_1[0x84] + 0xd3c);
      *(undefined2 *)(puVar9 + 0x16) = *(undefined2 *)(param_2 + 0x1c);
      puVar6 = (undefined4 *)(puVar9 + 0x19);
      puVar7 = (undefined4 *)(param_2 + 0x21);
      do {
        puVar8 = puVar7 + 1;
        *puVar6 = *puVar7;
        puVar6 = puVar6 + 1;
        puVar7 = puVar8;
      } while (puVar8 != (undefined4 *)(param_2 + 0x31));
      puVar9[0x29] = *(undefined1 *)(param_2 + 0x1e);
      puVar9[0x18] = (byte)((uint)(param_1[0x21e] << 0x1b) >> 0x1f);
      uVar2 = cfg80211_get_chandef_type(*param_1 + 0x14);
      puVar9[0x2a] = uVar2;
    }
    (**(code **)(*(int *)(param_1[0x84] + 0x10) + 0x6c))
              (*(undefined4 *)(param_1[0x84] + 0x14),iVar3);
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== ssv6200_sta_add @ 000257b4 size=288 ===== */

undefined4 ssv6200_sta_add(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = *(int **)(param_1 + 0x40);
  printk(DAT_000258d4,DAT_000258d8,*(undefined4 *)(param_2 + 0x2b8));
  if (*(int *)(param_2 + 0x2a4) == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    mutex_lock(piVar2 + 0x81);
    disableIRQinterrupts();
    iVar1 = (**(code **)(piVar2[0x84] + 0xb8))(piVar2,param_2,param_3);
    if (iVar1 < 9) {
      ssv6xxx_debugfs_add_sta(piVar2,piVar2 + iVar1 * 6 + 0x1e6);
      *(undefined1 *)(param_3 + 0x13f) = 0;
      piVar2[iVar1 * 6 + 0x1e7] = -1;
      (**(code **)(piVar2[0x84] + 0xbc))(piVar2,param_2,param_3,iVar1);
      if (((*(uint *)(param_3 + 0x138) & 0xff00ff) != 0) && (*(int *)(param_2 + 0x2c8) - 1U < 2)) {
        (**(code **)(piVar2[0x84] + 0x110))(piVar2,param_3 + 0x108,param_2 + 0x2b8);
      }
      uVar3 = 0;
      _ssv6200_sta_operation
                (piVar2,param_3,piVar2[iVar1 * 6 + 0x1e7],
                 *(undefined4 *)(*(int *)(*piVar2 + 0x38) + *(int *)piVar2[0x7f] * 4 + 0xd4),1);
      printk(DAT_000258e0,*(undefined1 *)(param_3 + 0x14),*(undefined1 *)(param_3 + 0x15),
             *(undefined1 *)(param_3 + 0x16),*(undefined1 *)(param_3 + 0x17),
             *(undefined1 *)(param_3 + 0x18),*(undefined1 *)(param_3 + 0x19),
             *(undefined4 *)(param_2 + 0x2b8),*(undefined4 *)(param_3 + 0x108),
             piVar2[iVar1 * 6 + 0x1e7]);
    }
    else {
      uVar3 = 0xffffffff;
      _dev_err(piVar2[1],DAT_000258dc,9);
    }
    mutex_unlock(piVar2 + 0x81);
  }
  return uVar3;
}



/* ===== ssv6200_get_systime_us @ 000258e4 size=104 ===== */

ulonglong ssv6200_get_systime_us(void)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar7 = ktime_get_with_offset(1);
  uVar2 = uVar7;
  if ((longlong)uVar7 < 0) {
    uVar2 = CONCAT44(-(int)(uVar7 >> 0x20) - (uint)((int)uVar7 != 0),-(int)uVar7);
  }
  uVar4 = (uint)(uVar2 >> 0x20);
  lVar1 = (ulonglong)DAT_00025950 * (uVar2 & 0xffffffff);
  uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
  bVar6 = CARRY4((uint)lVar1,DAT_00025950);
  uVar2 = (ulonglong)DAT_00025954 * (uVar2 & 0xffffffff) +
          (ulonglong)
          CONCAT14(CARRY4(uVar3,DAT_00025954) || CARRY4(uVar3 + DAT_00025954,(uint)bVar6),
                   uVar3 + DAT_00025954 + (uint)bVar6);
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar5 = (uint)((ulonglong)DAT_00025950 * (ulonglong)uVar4 + (uVar2 & 0xffffffff) >> 0x20);
  uVar2 = (ulonglong)DAT_00025954 * (ulonglong)uVar4 +
          (ulonglong)CONCAT14(CARRY4(uVar5,uVar3),uVar5 + uVar3) >> 9;
  if ((longlong)uVar7 < 0) {
    uVar2 = CONCAT44(-(int)(uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
  }
  return uVar2;
}



/* ===== _ssv6xxx_hexdump @ 00025958 size=68 ===== */

void _ssv6xxx_hexdump(undefined4 param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    printk(DAT_0002599c);
  }
  else {
    printk(DAT_000259a4,param_1);
    uVar3 = DAT_000259ac;
    uVar2 = DAT_000259a8;
    uVar4 = 0;
    while (uVar4 != param_3) {
      puVar1 = (undefined1 *)(param_2 + uVar4);
      uVar4 = uVar4 + 1;
      printk(uVar2,*puVar1);
      if ((uVar4 & 0xf) == 0) {
        printk(uVar3);
      }
    }
  }
  printk(DAT_000259a0);
  return;
}



/* ===== ssv6200_add_interface @ 000259b0 size=280 ===== */

undefined4 ssv6200_add_interface(int param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x40);
  printk(DAT_00025ac8,DAT_00025acc);
  if ((*(byte *)(iVar3 + 0x874) < 2) &&
     (((*param_2 != 3 && (*(char *)((int)param_2 + 0x296) == '\0')) ||
      (*(int *)(iVar3 + 0x870) == 0)))) {
    mutex_lock(iVar3 + 0x204);
    puVar2 = (undefined4 *)ssv6xxx_config_vif_res(iVar3,param_2);
    if ((param_2[0xa4] == 0) && ((short)param_2[0xa5] == 0)) {
      (**(code **)(*(int *)(iVar3 + 0x210) + 0x90))(*(int *)(iVar3 + 0x210),*puVar2);
    }
    else {
      _dev_err(*(undefined4 *)(iVar3 + 4),DAT_00025ad8);
      (**(code **)(*(int *)(iVar3 + 0x210) + 0x94))(*(int *)(iVar3 + 0x210),*puVar2,param_2 + 0xa4);
    }
    if ((*param_2 == 9) || ((*param_2 & 0xfffffffd) == 1)) {
      _if_set_apmode(param_1,param_2);
    }
    ssv6xxx_interface_opertaion(iVar3,0,*(undefined1 *)puVar2,param_2 + 0xa4,(char)*param_2,0,0);
    _dev_err(*(undefined4 *)(iVar3 + 4),DAT_00025ad4,(char)param_2[0xa4],
             *(undefined1 *)((int)param_2 + 0x291),*(undefined1 *)((int)param_2 + 0x292),
             *(undefined1 *)((int)param_2 + 0x293),(char)param_2[0xa5],
             *(undefined1 *)((int)param_2 + 0x295),*param_2);
    ssv6xxx_debugfs_add_interface(iVar3,param_2);
    if (1 < *(byte *)(iVar3 + 0x874)) {
      (**(code **)(*(int *)(iVar3 + 0x210) + 0x338))(*(int *)(iVar3 + 0x210),3,0,0x30);
      *(undefined1 *)(iVar3 + 0xd30) = 0;
    }
    mutex_unlock(iVar3 + 0x204);
    uVar1 = 0;
  }
  else {
    _dev_err(*(undefined4 *)(iVar3 + 4),DAT_00025ad0,*param_2,*(undefined1 *)((int)param_2 + 0x296))
    ;
    uVar1 = 0xffffffa1;
  }
  return uVar1;
}



/* ===== ssv6xxx_disable_ps @ 00025adc size=12 ===== */

void ssv6xxx_disable_ps(int param_1)

{
  *(undefined4 *)(param_1 + 0x97c) = 0;
  printk(DAT_00025ae8);
  return;
}



/* ===== ssv6xxx_rx_task @ 00025aec size=2380 ===== */

/* WARNING: Type propagation algorithm not settling */

void ssv6xxx_rx_task(undefined4 *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  ushort *puVar11;
  ushort uVar12;
  int *piVar13;
  int iVar14;
  ushort *puVar15;
  char cVar16;
  uint uVar17;
  char cVar18;
  byte *pbVar19;
  void *pvVar20;
  longlong lVar21;
  int local_88 [2];
  int local_80;
  ushort *local_7c;
  uint local_78;
  int local_74;
  int local_70;
  undefined4 *local_6c;
  int local_68;
  undefined4 local_64;
  uint local_5c;
  int local_58;
  undefined1 auStack_54 [4];
  undefined4 local_50;
  int local_4c [6];
  char local_34 [8];
  int local_2c;
  
  local_2c = *DAT_00025da8;
  printk(DAT_00025dac);
  do {
    do {
      iVar3 = kthread_should_stop();
      if (iVar3 != 0) {
LAB_00025b24:
        uVar7 = DAT_00025db4;
        param_1[0x26c] = 0;
        printk(uVar7);
        if (local_2c == *DAT_00025da8) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(0);
      }
      _cond_resched();
      if ((param_1[0x26b] == 0) && (iVar3 = kthread_should_stop(), iVar3 == 0)) {
        iVar4 = 6;
        init_wait_entry(local_4c + 1,0);
        while ((iVar3 = prepare_to_wait_event(param_1 + 0x267,local_4c + 1,1), param_1[0x26b] == 0
               && (iVar6 = kthread_should_stop(), iVar6 == 0))) {
          if (iVar4 == 0) goto LAB_00025b6c;
          if (iVar3 != 0) goto LAB_00025b16;
          iVar4 = schedule_timeout(iVar4);
        }
        if (iVar4 == 0) {
          iVar4 = 1;
        }
LAB_00025b6c:
        finish_wait(param_1 + 0x267,local_4c + 1);
        iVar3 = iVar4;
      }
      else {
        iVar3 = 6;
      }
LAB_00025b16:
      iVar4 = kthread_should_stop();
      if (iVar4 != 0) {
        printk(DAT_00025db0);
        goto LAB_00025b24;
      }
    } while (iVar3 == 0);
    local_6c = param_1 + 0x269;
    local_74 = *(int *)(param_1[0x84] + 0xf5c);
    while (iVar3 = skb_dequeue(local_6c), iVar3 != 0) {
      param_1[0xa1] = param_1[0xa1] + 1;
      local_78 = *(uint *)(iVar3 + 0x50);
      local_7c = *(ushort **)(iVar3 + 0xa4);
      local_80 = 0;
LAB_00025bca:
      if (local_80 < (int)local_78) {
        if (local_74 == 1) {
          local_80 = *(int *)(iVar3 + 0x50);
          iVar4 = iVar3;
LAB_00025bee:
          (**(code **)(param_1[0x84] + 0x2b4))
                    (*(undefined4 *)(iVar4 + 0xa4),&local_5c,&local_58,auStack_54);
          if (*(uint *)(iVar4 + 0x50) != local_5c) {
            if (local_5c <= *(uint *)(iVar4 + 0x50)) {
              skb_trim(iVar4,local_5c);
              goto LAB_00025cea;
            }
            local_88[0] = local_58;
            _dev_warn(param_1[1],DAT_00025db8);
            goto switchD_00025d10_caseD_14;
          }
LAB_00025cea:
          if (local_58 == 7) goto switchD_00025d10_caseD_14;
          iVar6 = (**(code **)(param_1[0x84] + 0x2ac))(iVar4);
          uVar7 = DAT_00026178;
          piVar13 = DAT_00025dc4;
          puVar15 = *(ushort **)(iVar4 + 0xa4);
          if (iVar6 != 6) {
            iVar6 = *(int *)(param_1[0x84] + 0x360);
            local_70 = (**(code **)(param_1[0x84] + 0x2a0))(iVar4);
            local_68 = (**(code **)(param_1[0x84] + 0x2a8))(iVar4);
            local_64 = (**(code **)(param_1[0x84] + 0x2a4))(iVar4);
            uVar2 = *(ushort *)((int)puVar15 + iVar6);
            if ((uVar2 & 0xfc) == 0x80) {
              lVar21 = ssv6200_get_systime_us();
              *(ulonglong *)((int)puVar15 + iVar6 + 0x18) = lVar21 + (ulonglong)DAT_000264fc;
            }
            if ((*(ushort *)((int)puVar15 + iVar6) & 0xfc) == 0x50) {
              lVar21 = ssv6200_get_systime_us();
              *(ulonglong *)((int)puVar15 + iVar6 + 0x18) = lVar21 + (ulonglong)DAT_000264fc;
            }
            pvVar20 = (void *)(iVar4 + 0x18);
            (**(code **)(param_1[0x84] + 0x2e8))(param_1,iVar4,local_70);
            memset(pvVar20,0,0x30);
            (**(code **)(param_1[0x84] + 0x2f0))(param_1,iVar4,pvVar20);
            *(undefined1 *)(iVar4 + 0x3d) = 1;
            (**(code **)(param_1[0x84] + 0x2f4))(param_1,local_70,pvVar20);
            if (param_1[0x30c] != 0) {
              skb_pull(iVar4,iVar6);
              skb_trim(iVar4,*(int *)(iVar4 + 0x50) - *(int *)(param_1[0x84] + 0x364));
              ssv_ctl_nl_send_msg(iVar4);
              goto switchD_00025d10_caseD_14;
            }
            iVar10 = (**(code **)(param_1[0x84] + 0x2fc))(param_1,iVar4,pvVar20);
            uVar7 = DAT_00026500;
            if (iVar10 == -1) goto LAB_00025eb4;
            if ((int)(param_1[0x21e] << 0x13) < 0) {
              skb_pull(iVar4,iVar6);
              skb_trim(iVar4,*(int *)(iVar4 + 0x50) - *(int *)(param_1[0x84] + 0x364));
            }
            else {
              if (local_68 != 0) {
                *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) | 0x100;
              }
              *(char *)((int)param_1 + 0x90d) = (char)local_64;
              if ((uVar2 & 0xc) == 0) {
                iVar10 = ssv6xxx_find_sta_by_rx_skb(param_1,iVar4);
                if (iVar10 != 0) {
                  down_read(param_1 + 0x308);
                  iVar10 = *(int *)(iVar10 + 0x108);
                  if (((iVar10 == -1) ||
                      (-1 < (int)((uint)*(ushort *)((int)param_1 + iVar10 * 0x18 + 0x79a) << 0x1f)))
                     || ((piVar13 = (int *)param_1[iVar10 * 6 + 0x1e9], piVar13 == (int *)0x0 ||
                         ((*piVar13 == 2 && ((char)piVar13[6] == '\0')))))) {
LAB_000263d6:
                    up_read(param_1 + 0x308);
                    goto switchD_00025d10_caseD_14;
                  }
                  up_read(param_1 + 0x308);
                }
LAB_00026350:
                cVar18 = '\0';
                cVar16 = '\0';
              }
              else {
                if (((uVar2 & 0x4000) == 0) || ((uVar2 & 0xc) != 8)) goto LAB_00026350;
                iVar10 = ssv6xxx_find_sta_by_rx_skb(param_1,iVar4);
                if (iVar10 == 0) goto switchD_00025d10_caseD_14;
                down_read(param_1 + 0x308);
                iVar14 = *(int *)(iVar10 + 0x108);
                if ((((iVar14 == -1) ||
                     (-1 < (int)((uint)*(ushort *)((int)param_1 + iVar14 * 0x18 + 0x79a) << 0x1f)))
                    || (piVar13 = (int *)param_1[iVar14 * 6 + 0x1e9], piVar13 == (int *)0x0)) ||
                   ((*piVar13 == 2 && ((char)piVar13[6] == '\0')))) goto LAB_000263d6;
                if ((*(ushort *)((int)puVar15 + iVar6 + 4) & *(ushort *)((int)puVar15 + iVar6 + 6) &
                    *(ushort *)((int)puVar15 + iVar6 + 8)) == 0xffff) {
                  cVar16 = *(char *)((int)piVar13 + 0x2d3);
                  cVar18 = (char)piVar13[0xb5];
                }
                else {
                  cVar16 = *(char *)(iVar10 + 0x13a);
                  cVar18 = *(char *)(iVar10 + 0x13b);
                }
                up_read(param_1 + 0x308);
              }
              if (*(char *)(param_1 + 0x26d) != '\0') {
                _ssv6xxx_hexdump(DAT_00026508,*(undefined4 *)(iVar4 + 0xa4),
                                 *(undefined4 *)(iVar4 + 0x50));
              }
              iVar10 = (**(code **)(param_1[0x84] + 0x290))(iVar4);
              skb_pull(iVar4,iVar6);
              skb_trim(iVar4,*(int *)(iVar4 + 0x50) - *(int *)(param_1[0x84] + 0x364));
              if ((cVar16 != '\0') || (cVar18 != '\0')) {
                *(ushort *)((int)puVar15 + iVar6) = *(ushort *)((int)puVar15 + iVar6) & 0xbfff;
                uVar7 = DAT_0002650c;
                if (iVar10 == 0) {
                  *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) | 0x12;
                }
                else {
                  *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) | 0x13;
                  printk(uVar7);
                }
              }
            }
            if ((~param_1[0x21e] & 0x201) != 0) goto switchD_00025d10_caseD_14;
            if (*(char *)(param_1[0x84] + 0xd03) != '\0') {
              *(byte *)(iVar4 + 0x60) = *(byte *)(iVar4 + 0x60) & 0x9f | 0x20;
            }
            puVar15 = *(ushort **)(iVar4 + 0xa4);
            uVar2 = *puVar15;
            if ((uVar2 & 0xc) == 8) {
              param_1[0xa2] = param_1[0xa2] + 1;
            }
            else if ((uVar2 & 0xc) == 0) {
              param_1[0xa3] = param_1[0xa3] + 1;
              uVar2 = *puVar15;
              uVar12 = uVar2 & 0xfc;
              if (uVar12 == 0x80) {
                param_1[0xa4] = param_1[0xa4] + 1;
              }
              else if (uVar12 == 0x50) {
                param_1[0xa5] = param_1[0xa5] + 1;
              }
              else if (uVar12 == 0x40) {
                param_1[0xa6] = param_1[0xa6] + 1;
              }
              else if ((uVar2 & 0xfc) == 0) {
                param_1[0xa7] = param_1[0xa7] + 1;
              }
              else if (uVar12 == 0x10) {
                param_1[0xa8] = param_1[0xa8] + 1;
              }
              else if (uVar12 == 0xb0) {
                param_1[0xa9] = param_1[0xa9] + 1;
              }
              else if (uVar12 == 0xa0) {
                param_1[0xaa] = param_1[0xaa] + 1;
              }
              else if (uVar12 == 0xc0) {
                param_1[0xab] = param_1[0xab] + 1;
              }
            }
            *(int *)(((uint)local_88 & 0xffffe000) + 4) =
                 *(int *)(((uint)local_88 & 0xffffe000) + 4) + 0x200;
            ieee80211_rx_napi(*param_1,0,iVar4);
            __local_bh_enable_ip(DAT_00026504,0x200);
            goto LAB_00025bca;
          }
          switch(*(undefined1 *)((int)puVar15 + 3)) {
          case 10:
            if (*(int *)(puVar15 + 2) == 0) {
              printk(DAT_00025dc8);
              param_1[0xb] = (uint)*puVar15;
              param_1[10] = *piVar13;
            }
            else {
              iVar10 = (uint)*puVar15 + param_1[0xb];
              iVar6 = *DAT_00025dc4;
              param_1[0xb] = iVar10;
              if ((300 - iVar6) + param_1[10] < 0) {
                uVar7 = jiffies_to_msecs(*piVar13 - param_1[10]);
                uVar7 = __aeabi_uidiv(iVar10 * 8,uVar7);
                printk(DAT_00026134,iVar10,uVar7);
                param_1[10] = *piVar13;
                param_1[0xb] = 0;
              }
            }
            break;
          case 0xb:
            dev_kfree_skb_any(iVar4);
            if ((param_1[0x21c] == 0) && (*(int *)(param_1[0x84] + 2000) << 0x17 < 0)) {
              queue_work(param_1[0x222],param_1 + 6);
            }
            else {
              _dev_warn(param_1[1],DAT_00026138);
            }
            goto LAB_00025bca;
          case 0xc:
            printk(DAT_0002613c,*(undefined4 *)(puVar15 + 2));
            break;
          case 0xd:
            if (*(int *)(puVar15 + 2) == 0) {
              printk(DAT_00026140);
              uVar7 = 1;
            }
            else {
              printk(DAT_00026144);
              uVar7 = 2;
            }
            param_1[0x307] = uVar7;
            dev_kfree_skb_any(iVar4);
            __wake_up(param_1 + 0x305,1,1,0);
            goto LAB_00025bca;
          case 0xe:
            ssv6xxx_process_si_event(param_1,iVar4);
            break;
          case 0xf:
            dbgprint(param_1 + 0x270,param_1[0x26f],0x10,DAT_00026148);
            dev_kfree_skb_any(iVar4);
            queue_work(param_1[0x222],param_1 + 0x225);
            if (*(char *)(param_1 + 0x25d) != '\0') {
              (**(code **)(param_1[0x84] + 400))();
            }
            goto LAB_00025bca;
          case 0x10:
            uVar7 = DAT_0002614c;
            goto LAB_00025eb4;
          case 0x11:
            uVar7 = DAT_00026150;
            goto LAB_00025eb4;
          case 0x12:
            uVar7 = DAT_00026154;
LAB_00025eb4:
            printk(uVar7);
            break;
          case 0x13:
            (**(code **)(param_1[0x84] + 0x2ec))(param_1,iVar4);
            break;
          case 0x15:
          case 0x16:
            local_34[0] = '\0';
            local_34[1] = '\0';
            local_34[2] = '\0';
            local_34[3] = '\0';
            local_34[4] = '\0';
            local_34[5] = '\0';
            local_34[6] = '\0';
            local_34[7] = '\0';
            snprintf(local_34,7,DAT_00026158,puVar15 + 6);
            uVar7 = DAT_00026174;
            puVar15 = puVar15 + 10;
            printk(DAT_0002615c,local_34);
            for (uVar5 = 0; uVar5 < *(int *)(iVar4 + 0x50) - 0x14U >> 3; uVar5 = uVar5 + 1) {
              uVar8 = *(undefined4 *)puVar15;
              puVar11 = puVar15 + 2;
              puVar15 = puVar15 + 4;
              printk(uVar7,uVar8,*(undefined4 *)puVar11);
            }
            break;
          case 0x1c:
            if ((char)puVar15[6] != '\0') {
              param_1[0x34d] = *(undefined4 *)((int)puVar15 + 0xd);
              param_1[0x34e] = *(undefined4 *)((int)puVar15 + 0x11);
              *(undefined1 *)(param_1 + 0x34f) = *(undefined1 *)((int)puVar15 + 0x15);
            }
            if ((char)puVar15[0xb] != '\0') {
              param_1[0x31c] = *(undefined4 *)((int)puVar15 + 0x17);
            }
            break;
          case 0x1d:
            pbVar19 = (byte *)((int)puVar15 + 0xf);
            param_1[0x33a] = param_1[0x33a] + 1;
            uVar17 = *(uint *)(puVar15 + 2);
            for (uVar5 = 0; uVar5 < *puVar15 - 0x10; uVar5 = uVar5 + 1) {
              pbVar19 = pbVar19 + 1;
              if (uVar17 != *pbVar19) {
                printk(uVar7,uVar5,(uint)*pbVar19,uVar17);
              }
            }
            if (param_1[0x33a] == param_1[0x33b]) {
              printk(DAT_00026160,param_1[0x33a]);
            }
            break;
          case 0x1f:
            local_70 = param_1[0x266];
            uVar2 = puVar15[6];
            bVar1 = *(byte *)((int)puVar15 + 0xd);
            for (iVar6 = 0; iVar6 < local_70; iVar6 = iVar6 + 1) {
              iVar10 = skb_dequeue(param_1 + 0x264);
              if (iVar10 != 0) {
                if (*(char *)(*(int *)(iVar10 + 0xa0) + 0x2a) == '\0') {
                  uVar5 = (**(code **)(param_1[0x84] + 0x2c4))(param_1[0x84],iVar10);
                  if (bVar1 == uVar5) {
                    uVar7 = (**(code **)(param_1[0x84] + 0x280))(iVar10);
                    uVar8 = (**(code **)(param_1[0x84] + 0x274))();
                    skb_pull(iVar10,uVar8);
                    uVar12 = *(ushort *)(*(int *)(iVar10 + 0xa4) + 0x16) >> 4;
                    if ((char)uVar2 == '\0') {
                      printk(DAT_0002616c,uVar12);
                      ieee80211_tx_info_clear_status(iVar10 + 0x18);
                      *(uint *)(iVar10 + 0x18) = *(uint *)(iVar10 + 0x18) & 0xfffffdff | 0x80;
                      *(undefined4 *)(iVar10 + 0x2c) = 100;
                      *(undefined1 *)(iVar10 + 0x23) = 0xff;
                      ieee80211_tx_status(*param_1,iVar10);
                    }
                    else {
                      printk(DAT_00026170,uVar12);
                      ssvxxx_complete_tx_skb(param_1,iVar10 + 0x18,iVar10,uVar7);
                    }
                    ssv6200_tx_flow_control(param_1,0);
                    goto switchD_00025d10_caseD_14;
                  }
                  skb_queue_tail(param_1 + 0x264,iVar10);
                }
                else {
                  printk(DAT_00026168);
                  ssv_skb_free(param_1,iVar10);
                  ssv6200_tx_flow_control(param_1,0);
                }
              }
            }
            uVar7 = DAT_00026164;
            if (local_70 == iVar6) goto LAB_00025eb4;
            break;
          case 0x20:
            param_1[0x50e] = (uint)puVar15[0xe];
            iVar6 = 0x143c;
            uVar2 = puVar15[0xf];
            goto LAB_00025ee0;
          case 0x22:
            puVar9 = memset(param_1 + 0x512,0,0x40);
            *(char *)(param_1 + 0x522) = (char)puVar15[0x16];
            for (puVar11 = puVar15 + 6;
                (-0xc - (int)puVar15) + (int)puVar11 < (int)(uint)(byte)puVar15[0x16];
                puVar11 = (ushort *)((int)puVar11 + 1)) {
              *puVar9 = (char)*puVar11;
              puVar9 = puVar9 + 1;
            }
            param_1[0x523] = *(undefined4 *)((int)puVar15 + 0x2d);
            *(undefined1 *)((int)param_1 + 0x1496) = *(undefined1 *)((int)puVar15 + 0x39);
            *(undefined1 *)((int)param_1 + 0x1497) = *(undefined1 *)((int)puVar15 + 0x37);
            *(char *)(param_1 + 0x526) = (char)puVar15[0x1d];
            *(undefined1 *)((int)param_1 + 0x1499) = *(undefined1 *)((int)puVar15 + 0x3b);
            *(char *)((int)param_1 + 0x149a) = (char)puVar15[0x1e];
            *(undefined1 *)((int)param_1 + 0x149b) = *(undefined1 *)((int)puVar15 + 0x3d);
            param_1[0x524] = *(undefined4 *)((int)puVar15 + 0x31);
            *(undefined2 *)(param_1 + 0x525) = *(undefined2 *)((int)puVar15 + 0x35);
            goto LAB_00025ee2;
          case 0x23:
            ssv_ble_hci_rx_packet(puVar15 + 6,*puVar15 - 0xc);
            break;
          case 0x24:
            param_1[0x510] = (uint)puVar15[10];
            iVar6 = 0x1444;
            uVar2 = puVar15[0xb];
LAB_00025ee0:
            *(uint *)((int)param_1 + iVar6) = (uint)uVar2;
            goto LAB_00025ee2;
          case 0x27:
            param_1[0x528] = *(undefined4 *)(puVar15 + 6);
LAB_00025ee2:
            (**(code **)(*(int *)(param_1[0x84] + 0x10) + 0x68))
                      (*(undefined4 *)(param_1[0x84] + 0x14),*(undefined4 *)(iVar4 + 0xa4),
                       *(undefined4 *)(iVar4 + 0x50));
            break;
          case 0x28:
            ssv_ctl_from_ssv_nimble(puVar15 + 6,*puVar15 - 0xc);
          }
switchD_00025d10_caseD_14:
          dev_kfree_skb_any(iVar4);
          goto LAB_00025bca;
        }
        if (((local_78 < local_80 + 0xcU) || (0x980 < *local_7c - 0xc)) ||
           ((int)local_78 < (int)(local_80 + (uint)*local_7c))) goto LAB_00025bd8;
        iVar4 = ssv_skb_alloc(param_1);
        if (iVar4 != 0) {
          puVar15 = local_7c + 6;
          local_4c[1] = 0;
          local_50 = 0;
          local_4c[0] = 0;
          if (((*(char *)(param_1[0x84] + 0xd02) != '\0') &&
              ((**(code **)(param_1[0x84] + 0x2b4))(puVar15,&local_50,local_4c,local_4c + 1),
              local_4c[0] == 3)) && (uVar5 = ieee80211_hdrlen(local_7c[0x2e]), (uVar5 & 3) == 0)) {
            *(int *)(iVar4 + 0xa4) = *(int *)(iVar4 + 0xa4) + 2;
            *(int *)(iVar4 + 0x98) = *(int *)(iVar4 + 0x98) + 2;
          }
          pvVar20 = (void *)skb_put(iVar4,*local_7c - 0xc);
          memcpy(pvVar20,puVar15,*local_7c - 0xc);
          local_80 = local_80 + (uint)*local_7c;
          local_7c = (ushort *)(*(int *)(iVar3 + 0xa4) + local_80);
          goto LAB_00025bee;
        }
        _dev_warn(param_1[1],DAT_00025dc0,DAT_00025dbc);
        local_80 = local_80 + (uint)*local_7c;
        local_7c = (ushort *)(*(int *)(iVar3 + 0xa4) + local_80);
        goto LAB_00025bca;
      }
      if (local_74 != 1) {
LAB_00025bd8:
        ssv_skb_free(param_1,iVar3);
      }
    }
  } while( true );
}



/* ===== _set_key_wep @ 00026536 size=240 ===== */

undefined4 _set_key_wep(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_2;
  printk(DAT_00026628,*(undefined1 *)(param_5 + 0x13),*(undefined1 *)(param_5 + 0x14),
         *(undefined1 *)(param_5 + 0x15),*(undefined1 *)(param_5 + 0x16),
         *(undefined1 *)(param_5 + 0x17),*(undefined1 *)(param_5 + 0x18),
         *(undefined1 *)(param_5 + 0x19),*(undefined1 *)(param_5 + 0x1a),
         (int)*(char *)(param_5 + 0xf),*(undefined1 *)(param_5 + 0x12));
  iVar1 = (**(code **)(*(int *)(param_1 + 0x210) + 0xd8))(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = iVar2 * 0x274 + param_1 + 0x2b0;
    if (*(int *)(*(int *)(param_1 + 0x210) + 0x7cc) == 0) {
      *(undefined1 *)((int)param_2 + 0x19) = 0;
      *(undefined2 *)(param_2 + 7) = 0x100;
      *(undefined2 *)((int)param_2 + 0x1a) = 0;
      ssv6xxx_foreach_vif_sta(param_1,iVar1,DAT_0002662c);
    }
    else {
      *(undefined1 *)((int)param_2 + 0x1a) = 0;
      *(undefined1 *)(param_2 + 7) = 0;
      if ((*(uint *)(*(int *)(param_1 + 0x210) + 0x7cc) & 3) == 1) {
        *(undefined1 *)((int)param_2 + 0x1b) = 0;
        *(undefined1 *)((int)param_2 + 0x1d) = 1;
        ssv6xxx_foreach_vif_sta(param_1,iVar1,DAT_0002662c,0);
      }
      else {
        *(undefined1 *)((int)param_2 + 0x1d) = 0;
        *(undefined1 *)((int)param_2 + 0x1b) = 1;
      }
      uVar3 = DAT_00026630;
      *(undefined1 *)((int)param_2 + 0x19) = 0;
      _dev_info(*(undefined4 *)(param_1 + 4),uVar3);
    }
    uVar3 = 0xffffffa1;
  }
  else {
    uVar3 = 0;
    *(undefined1 *)((int)param_2 + 0x19) = 1;
    *(undefined2 *)(param_2 + 7) = 0;
    *(undefined2 *)((int)param_2 + 0x1a) = 0x100;
  }
  param_2[4] = param_4;
  param_2[5] = param_4;
  param_2[9] = param_4;
  *(undefined1 *)((int)param_2 + 0x21) = *(undefined1 *)(param_5 + 0xf);
  (**(code **)(*(int *)(param_1 + 0x210) + 0x114))(param_1,param_2,param_3,param_4,param_5);
  *(undefined1 *)(param_2 + 6) = 1;
  return uVar3;
}



/* ===== ssv_ble_hci_flush @ 00026634 size=30 ===== */

undefined4 ssv_ble_hci_flush(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa00);
  printk(DAT_00026658,DAT_00026654,0x90);
  skb_queue_purge(iVar1 + 0x14a4);
  return 0;
}



/* ===== ssv_ble_init @ 0002665c size=218 ===== */

void ssv_ble_init(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *__s;
  undefined4 local_1b;
  undefined1 local_17;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  printk(DAT_00026738);
  local_1b._0_1_ = 1;
  if (param_2 != 0) {
    printk(DAT_0002673c);
    local_1b._0_1_ = 3;
  }
  iVar2 = *(int *)(param_1 + 0x210);
  uVar1 = *(undefined2 *)(iVar2 + 0x7c6);
  local_1b = CONCAT31((int3)*(undefined4 *)(iVar2 + 0x7c2),
                      (byte)local_1b | (*(byte *)(iVar2 + 0xda4) & 1) << 2);
  local_17 = (undefined1)((uint)*(undefined4 *)(iVar2 + 0x7c2) >> 0x18);
  uStack_14 = (undefined1)*(undefined2 *)(iVar2 + 0xda2);
  uStack_13 = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0xda2) >> 8);
  uStack_12 = (undefined1)*(undefined2 *)(iVar2 + 0xda0);
  uStack_11 = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0xda0) >> 8);
  iVar2 = ssv_skb_alloc(param_1,0x1b);
  if (iVar2 == 0) {
    printk(DAT_00026744,DAT_00026740);
  }
  else {
    __s = *(undefined2 **)(iVar2 + 0xa4);
    *(undefined4 *)(iVar2 + 0x50) = 0x1b;
    *(undefined4 *)(iVar2 + 0x54) = 0x1b;
    memset(__s,0,0x14);
    *(undefined1 *)(__s + 1) = 5;
    *(undefined1 *)((int)__s + 3) = 0x15;
    *__s = *(undefined2 *)(iVar2 + 0x54);
    *(undefined4 *)(__s + 8) = local_1b;
    *(uint *)(__s + 10) = CONCAT13(uStack_14,CONCAT21(uVar1,local_17));
    __s[0xc] = CONCAT11(uStack_12,uStack_13);
    *(undefined1 *)(__s + 0xd) = uStack_11;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 0x10) + 0x30))
              (*(undefined4 *)(*(int *)(param_1 + 0x210) + 0x14),iVar2,10,0,0);
  }
  return;
}



/* ===== ssv_ble_hci_open @ 00026748 size=40 ===== */

undefined4 ssv_ble_hci_open(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xa00);
  printk(DAT_00026774,DAT_00026770,0x99);
  iVar1 = *(int *)(iVar2 + 0x210);
  (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))(*(undefined4 *)(iVar1 + 0x14));
  ssv_ble_init(iVar2,0);
  return 0;
}



/* ===== ssv_ble_hci_close @ 00026778 size=68 ===== */

undefined4 ssv_ble_hci_close(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa00);
  printk(DAT_000267c0,DAT_000267bc,0xa4);
  ssv_ble_init(iVar1,1);
  msleep(0x32);
  (**(code **)(*(int *)(*(int *)(iVar1 + 0x210) + 0x10) + 0x10))
            (*(undefined4 *)(*(int *)(iVar1 + 0x210) + 0x14));
  (**(code **)(*(int *)(*(int *)(iVar1 + 0x210) + 0x10) + 0x48))
            (*(undefined4 *)(*(int *)(iVar1 + 0x210) + 0x14));
  skb_queue_purge(iVar1 + 0x14a4);
  return 0;
}



/* ===== ssv6xxx_power_awake @ 000267c4 size=236 ===== */

void ssv6xxx_power_awake(undefined4 *param_1,undefined4 param_2,undefined4 param_3,
                        undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  printk(DAT_000268b4,DAT_000268b0);
  pcVar6 = *(code **)(((undefined4 *)**(undefined4 **)(param_1[0x84] + 0x14))[1] + 0x80);
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(*(undefined4 *)**(undefined4 **)(param_1[0x84] + 0x14));
  }
  (**(code **)(*(int *)(param_1[0x84] + 0x10) + 0x18))(*(undefined4 *)(param_1[0x84] + 0x14));
  ieee80211_wake_queues(*param_1);
  (**(code **)(param_1[0x84] + 0x134))(param_1,1);
  iVar4 = wait_for_completion_timeout(param_1 + 0x341,900);
  if (iVar4 == 0) {
    printk(DAT_000268b8);
  }
  *(undefined1 *)(param_1 + 0x21f) = 1;
  param_1[0x311] = *DAT_000268bc + 0x1e;
  if (param_1[0x310] == 0) {
    add_timer(param_1 + 0x30f);
  }
  uVar2 = DAT_000268c0;
  (**(code **)(param_1[0x84] + 400))();
  (**(code **)(param_1[0x84] + 300))(param_1);
  (**(code **)(param_1[0x84] + 0x124))(param_1);
  iVar4 = 0;
  do {
    (**(code **)(param_1[0x84] + 0x130))(param_1);
    iVar5 = wait_for_completion_timeout(param_1 + 0x33e,900);
    if (iVar5 != 0) goto LAB_0002688c;
    iVar5 = iVar4 + 1;
    printk(uVar2,iVar4);
    iVar4 = iVar5;
  } while (iVar5 != 3);
  printk(DAT_000268c4);
LAB_0002688c:
  (**(code **)(*(int *)(param_1[0x84] + 0x10) + 0x38))(*(undefined4 *)(param_1[0x84] + 0x14),0x1f);
  uVar3 = DAT_000268c8;
  uVar2 = DAT_000268b0;
  uVar1 = *(undefined1 *)((int)param_1 + 0xd);
  *(undefined1 *)(param_1[0x84] + 0xd4c) = uVar1;
  printk(uVar3,uVar2,uVar1,param_4);
  return;
}



/* ===== ssv6xxx_suspend @ 000268cc size=508 ===== */

undefined4 ssv6xxx_suspend(uint param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  uint local_28;
  byte *local_24;
  
  puVar5 = *(undefined4 **)(param_1 + 0x40);
  iVar7 = puVar5[0x84];
  local_28 = param_1;
  local_24 = param_2;
  printk(DAT_00026acc,DAT_00026ac8);
  mutex_lock(puVar5 + 0x81);
  if (-1 < *(int *)(iVar7 + 0x7a4) << 0xf) {
    uVar8 = 0xffffffed;
    printk(DAT_00026ad0);
    goto LAB_000268fc;
  }
  if (param_2 == (byte *)0x0) {
    uVar8 = 0xffffffea;
    printk(DAT_00026ad8);
    goto LAB_000268fc;
  }
  uVar8 = DAT_00026adc;
  if ((puVar5[0x21c] == 0) &&
     (iVar7 = ssv6200_not_dual_intf_on_line(puVar5), uVar8 = DAT_00026adc, iVar7 != 0)) {
    piVar3 = (int *)puVar5[0xac];
    if ((*piVar3 != 2) || (*(char *)((int)piVar3 + 0x296) != '\0')) {
      piVar3 = (int *)puVar5[0x149];
    }
    iVar7 = piVar3[0x27];
    if ((*param_2 != 0) && (iVar7 == 0)) {
      printk(DAT_00026ae0);
    }
    if (param_2[2] == 0) {
      uVar8 = DAT_00026af0;
      if (*param_2 == 0) goto LAB_00026928;
      bVar6 = 1;
    }
    else {
      bVar6 = *param_2 | 2;
    }
    local_28 = 0;
    local_24 = (byte *)0x0;
    printk(DAT_00026acc,DAT_00026ae4);
    *(undefined1 *)((int)puVar5 + 0xd) = *(undefined1 *)(puVar5[0x84] + 0xd4c);
    *(undefined1 *)(puVar5[0x84] + 0xd4c) = 0;
    (**(code **)(puVar5[0x84] + 0x134))(puVar5,0);
    (**(code **)(puVar5[0x84] + 0x120))(puVar5);
    (**(code **)(puVar5[0x84] + 0x128))(puVar5);
    iVar7 = ssv6xxx_trigger_pmu(puVar5,bVar6,iVar7);
    uVar2 = DAT_00026b00;
    uVar1 = DAT_00026afc;
    uVar8 = DAT_00026ae8;
    if (iVar7 == 0) {
      do {
        msleep(1);
        (**(code **)(*(int *)(puVar5[0x84] + 0x10) + 0x1c))
                  (*(undefined4 *)(puVar5[0x84] + 0x14),uVar8,&local_28);
        local_28 = (local_28 & 0x7ffffff) >> 0x12;
        if (local_28 == 0) {
          printk(uVar1);
        }
        (**(code **)(*(int *)(puVar5[0x84] + 0x10) + 0x1c))
                  (*(undefined4 *)(puVar5[0x84] + 0x14),uVar2,&local_24);
        if (local_24 == (byte *)0xffffffff) {
          printk(DAT_00026aec);
        }
      } while ((local_28 != 0) && (local_24 != (byte *)0xffffffff));
      (**(code **)(puVar5[0x84] + 0x194))();
      *(undefined1 *)(puVar5 + 0x21f) = 0;
      ssv6xxx_cancel_work_sync(puVar5);
      ieee80211_stop_queues(*puVar5);
      (**(code **)(*(int *)(puVar5[0x84] + 0x10) + 0x14))(*(undefined4 *)(puVar5[0x84] + 0x14));
      (**(code **)(*(int *)(puVar5[0x84] + 0x10) + 0x44))(*(undefined4 *)(puVar5[0x84] + 0x14));
      pcVar4 = *(code **)(((undefined4 *)**(undefined4 **)(puVar5[0x84] + 0x14))[1] + 0x7c);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(*(undefined4 *)**(undefined4 **)(puVar5[0x84] + 0x14));
      }
      (**(code **)(puVar5[0x84] + 0x134))(puVar5,2);
    }
    else {
      (**(code **)(puVar5[0x84] + 300))(puVar5);
      (**(code **)(puVar5[0x84] + 0x124))(puVar5);
      printk(DAT_00026af4);
      *(undefined1 *)(puVar5[0x84] + 0xd4c) = *(undefined1 *)((int)puVar5 + 0xd);
    }
    printk(DAT_00026ad4,DAT_00026ae4);
    uVar8 = 0;
    if (iVar7 != 0) {
      uVar8 = 0xfffffffb;
      printk(DAT_00026af8);
    }
  }
  else {
LAB_00026928:
    printk(uVar8);
    uVar8 = 0xffffffff;
  }
LAB_000268fc:
  mutex_unlock(puVar5 + 0x81);
  printk(DAT_00026ad4,DAT_00026ac8);
  return uVar8;
}



/* ===== ssv6xxx_resume @ 00026b04 size=64 ===== */

undefined4 ssv6xxx_resume(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(iVar1 + 0x210);
  printk(DAT_00026b48,DAT_00026b44);
  mutex_lock(iVar1 + 0x204);
  if (*(int *)(iVar3 + 0x7a4) << 0xf < 0) {
    uVar2 = 0;
    ssv6xxx_power_awake(iVar1);
  }
  else {
    uVar2 = 0xffffffed;
    printk(DAT_00026b4c);
  }
  mutex_unlock(iVar1 + 0x204);
  return uVar2;
}



/* ===== ssv6xxx_scan_ignore_process @ 00026b50 size=36 ===== */

void ssv6xxx_scan_ignore_process
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  memset(&iStack_18,0,0x10);
  printk(DAT_00026b74);
  ieee80211_scan_completed(*(undefined4 *)(param_1 + -0xffc),&iStack_18);
  return;
}



/* ===== ssv6200_cancel_hw_scan @ 00026b78 size=40 ===== */

void ssv6200_cancel_hw_scan(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar1 = iVar2 + 0x204;
  printk(DAT_00026ba0,param_2 + 0x290);
  mutex_lock(iVar1);
  ssv6xxx_cancel_hw_scan(iVar2);
  mutex_unlock(iVar1,extraout_r1,extraout_r2,param_4);
  return;
}



/* ===== ssv6xxx_beacon_release @ 00026ba4 size=24 ===== */

void ssv6xxx_beacon_release(int param_1)

{
  printk(DAT_00026bbc);
  ssv6x5x_beacon_enable(*(undefined4 *)(param_1 + 0x210),0);
  return;
}



/* ===== ssv_ctl_init @ 00026bc0 size=28 ===== */

undefined4 ssv_ctl_init(void)

{
  int iVar1;
  undefined4 uVar2;
  
  printk(DAT_00026bdc);
  iVar1 = genl_register_family(DAT_00026be0);
  uVar2 = 0;
  if (iVar1 != 0) {
    printk(DAT_00026be4);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== ssv_ctl_exit @ 00026be8 size=36 ===== */

int ssv_ctl_exit(void)

{
  int iVar1;
  
  printk(DAT_00026c0c);
  iVar1 = genl_unregister_family(DAT_00026c10);
  if (iVar1 != 0) {
    printk(DAT_00026c14,iVar1);
  }
  printk(DAT_00026c18);
  return iVar1;
}



/* ===== ssv6xxx_process_si_event @ 00026c1c size=138 ===== */

void ssv6xxx_process_si_event(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  printk(DAT_00026ca8);
  puVar2 = DAT_00026cac;
  iVar6 = *(int *)(param_2 + 0xa4);
  if (((int)*(size_t *)(iVar6 + 0x6c) < 0x21) &&
     ((*(int *)(iVar6 + 0x70) == 0 || (*(int *)(iVar6 + 0x70) - 8U < 0x39)))) {
    memcpy(DAT_00026cac,(void *)(iVar6 + 0xc),*(size_t *)(iVar6 + 0x6c));
    if (*(size_t *)(iVar6 + 0x70) == 0) {
      uVar1 = *(undefined1 *)(DAT_00026cbc + 1);
      puVar2[8] = *DAT_00026cbc;
      *(undefined1 *)(puVar2 + 9) = uVar1;
    }
    else {
      memcpy(DAT_00026cb0,(void *)(iVar6 + 0x2c),*(size_t *)(iVar6 + 0x70));
    }
    uVar4 = DAT_00026cb4;
    puVar3 = DAT_00026cac;
    puVar2[0x18] = *(undefined4 *)(iVar6 + 0x6c);
    puVar2[0x19] = *(undefined4 *)(iVar6 + 0x70);
    puVar2[0x1a] = 1;
    printk(uVar4,puVar3);
    printk(DAT_00026cb8,DAT_00026cb0,puVar2[0x19]);
    return;
  }
  printk(DAT_00026cc0);
  puVar3 = DAT_00026cc4;
  puVar2[0x1a] = 0;
  *puVar2 = *puVar3;
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  puVar2[1] = uVar5;
  puVar2[8] = uVar4;
  puVar2[9] = uVar5;
  return;
}



/* ===== ssv6020_if_chk_mac2 @ 00026cc8 size=14 ===== */

undefined4
ssv6020_if_chk_mac2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  printk(DAT_00026cdc,DAT_00026cd8,param_3,param_4,param_4);
  return 0;
}



/* ===== ssv6020_set_pairwise_cipher_type @ 00026ce0 size=28 ===== */

void ssv6020_set_pairwise_cipher_type(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printk(DAT_00026cfc);
  _ssv6020_set_pairwise_cipher_type(param_1,param_2,param_3);
  return;
}



/* ===== _ssv6020_set_group_cipher_type @ 00026d00 size=136 ===== */

undefined4 _ssv6020_set_group_cipher_type(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar1 = ssv_skb_alloc(iVar4,0x38);
  if (iVar1 != 0) {
    skb_put(iVar1,0x38);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined2 *)(puVar3 + 10) = 0;
    puVar3[5] = 0;
    puVar3[2] = puVar3[2] & 0xf8 | 5;
    puVar3[4] = 2;
    puVar3[3] = 0xe;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0xc] = 2;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0xe;
    puVar3[0xf] = 0;
    *puVar3 = 0x38;
    puVar3[1] = 0;
    memset(puVar3 + 0x10,0,0x28);
    puVar3[0x10] = (char)param_3;
    puVar3[0x12] = (char)param_2;
    printk(DAT_00026d8c,DAT_00026d88,param_3,param_2);
    iVar4 = *(int *)(iVar4 + 0x210);
                    /* WARNING: Could not recover jumptable at 0x00026d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x6c))(*(undefined4 *)(iVar4 + 0x14),iVar1);
    return uVar2;
  }
  return 0xfffffff4;
}



/* ===== ssv6020_set_group_cipher_type @ 00026d90 size=28 ===== */

void ssv6020_set_group_cipher_type(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  printk(DAT_00026dac,param_3);
  _ssv6020_set_group_cipher_type(param_1,param_3,*param_2);
  return;
}



/* ===== _ssv6020_write_group_key_to_hw @ 00026db0 size=270 ===== */

undefined4
_ssv6020_write_group_key_to_hw
          (int *param_1,int param_2,undefined4 param_3,undefined4 param_4,void *param_5,uint param_6
          )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar1 = ssv_skb_alloc(iVar4,0x38);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    skb_put(iVar1,0x38);
    puVar3 = *(undefined1 **)(iVar1 + 0xa4);
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined2 *)(puVar3 + 10) = 0;
    puVar3[2] = puVar3[2] & 0xf8 | 5;
    puVar3[4] = 6;
    puVar3[3] = 0xe;
    puVar3[0xc] = 6;
    puVar3[0xe] = 0xe;
    puVar3[5] = 0;
    *puVar3 = 0x38;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[0xd] = 0;
    puVar3[0xf] = 0;
    puVar3[1] = 0;
    memset(puVar3 + 0x10,0,0x28);
    puVar3[0x13] = (char)param_4;
    *(short *)(puVar3 + 0x16) = (short)param_6;
    puVar3[0x10] = (char)param_2;
    *(short *)(puVar3 + 0x14) = (short)param_3;
    memcpy(puVar3 + 0x18,param_5,param_6);
    printk(DAT_00026ec4,DAT_00026ec0,param_2,param_4,param_6 & 0xffff,param_3);
    uVar2 = (**(code **)(*(int *)(*(int *)(iVar4 + 0x210) + 0x10) + 0x6c))
                      (*(undefined4 *)(*(int *)(iVar4 + 0x210) + 0x14),iVar1);
    if (param_1 + 0xe9 != (int *)0x0) {
      iVar1 = (int)(short)param_2;
      if (*(char *)((int)param_1 + iVar1 * 0x8c + 0x3a5) != '\0') {
        iVar4 = _ssv6020_get_sec_key_tbl_addr(iVar4);
        (**(code **)(param_1[4] + 0x20))(param_1[5],iVar4 + 4,param_1[iVar1 * 0x23 + 0xea]);
        (**(code **)(param_1[4] + 0x20))(param_1[5],iVar4 + 8,param_1[param_2 * 0x23 + 0xeb]);
        memset(param_1 + 0xe9 + iVar1 * 0x23,0,0x8c);
      }
    }
  }
  return uVar2;
}



/* ===== ssv6020_set_wep_key @ 00026ec8 size=126 ===== */

void ssv6020_set_wep_key(int param_1,int *param_2,undefined4 param_3,undefined1 param_4,int param_5)

{
  if ((param_2[6] & 0xff00ff00U) == 0x1000100) {
    printk(DAT_00026f48,(int)*(char *)(param_5 + 0xf),(int)*(char *)(param_5 + 0xf),*param_2,param_1
           ,param_2,param_3);
    ssv6xxx_foreach_vif_sta(param_1,*param_2 * 0x274 + param_1 + 0x2b0,DAT_00026f4c,param_5);
    _ssv6020_set_group_cipher_type(*(undefined4 *)(param_1 + 0x210),param_4,(char)*param_2);
    _ssv6020_write_group_keyidx_to_hw
              (*(undefined4 *)(param_1 + 0x210),(int)*(char *)(param_5 + 0xf),*param_2);
    _ssv6020_write_group_key_to_hw
              (*(undefined4 *)(param_1 + 0x210),(char)*param_2,*(undefined1 *)(param_5 + 8),
               *(undefined1 *)(param_5 + 0xf),param_5 + 0x13,*(undefined1 *)(param_5 + 0x12));
    return;
  }
  printk(DAT_00026f50);
  return;
}



/* ===== ssv6020_write_group_key_to_hw @ 00026f54 size=126 ===== */

undefined4
ssv6020_write_group_key_to_hw
          (int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,int *param_7,int param_8)

{
  undefined4 uVar1;
  uint local_24 [2];
  
  if (param_8 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_8 + 4) + 4);
  }
  local_24[0] = param_2;
  if (param_7 == (int *)0x0) {
    _dev_err(*(undefined4 *)(param_1 + 4),DAT_00026fd4);
    uVar1 = 0xffffffa1;
  }
  else {
    _dev_info(*(undefined4 *)(param_1 + 4),DAT_00026fd8,*param_7,param_2,param_5,uVar1);
    *(undefined1 *)(param_7 + 8) = (undefined1)local_24[0];
    if (param_8 != 0) {
      *(undefined1 *)(param_8 + 0x36) = (undefined1)local_24[0];
    }
    ssv6xxx_foreach_vif_sta(param_1,*param_7 * 0x274 + param_1 + 0x2b0,DAT_00026fdc,local_24);
    uVar1 = _ssv6020_write_group_key_to_hw
                      (*(undefined4 *)(param_1 + 0x210),(char)*param_7,param_3,local_24[0] & 0xff,
                       param_4,param_5);
  }
  return uVar1;
}



/* ===== ssv6020_write_pairwise_key_to_hw @ 00026fe0 size=336 ===== */

undefined4
ssv6020_write_pairwise_key_to_hw
          (int param_1,uint param_2,undefined4 param_3,void *param_4,uint param_5,undefined4 param_6
          ,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (param_8 == 0) {
    _dev_err(uVar1,DAT_00027130);
  }
  else {
    uVar4 = *(uint *)(*(int *)(param_8 + 4) + 4);
    if (uVar4 < 9) {
      _dev_info(uVar1,DAT_00027138,uVar4,param_5);
      if (-1 < (int)param_2) {
        _ssv6020_write_pairwise_keyidx_to_hw(*(undefined4 *)(param_1 + 0x210),param_2,uVar4);
      }
      piVar5 = *(int **)(param_1 + 0x210);
      iVar6 = *piVar5;
      iVar2 = ssv_skb_alloc(iVar6,0x38);
      if (iVar2 == 0) {
        return 0xfffffff4;
      }
      skb_put(iVar2,0x38);
      puVar3 = *(undefined1 **)(iVar2 + 0xa4);
      *(undefined4 *)(puVar3 + 2) = 0;
      *(undefined4 *)(puVar3 + 6) = 0;
      puVar3[4] = 5;
      puVar3[2] = puVar3[2] & 0xf8 | 5;
      puVar3[0xc] = 5;
      puVar3[3] = 0xe;
      puVar3[0xe] = 0xe;
      *puVar3 = 0x38;
      *(undefined2 *)(puVar3 + 10) = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[0xd] = 0;
      puVar3[0xf] = 0;
      puVar3[1] = 0;
      memset(puVar3 + 0x10,0,0x28);
      puVar3[0x13] = (char)param_2;
      *(short *)(puVar3 + 0x16) = (short)param_5;
      puVar3[0x11] = (char)uVar4;
      *(short *)(puVar3 + 0x14) = (short)param_3;
      memcpy(puVar3 + 0x18,param_4,param_5);
      printk(DAT_00027140,DAT_0002713c,uVar4,param_2 & 0xff,param_5 & 0xffff,param_3);
      uVar1 = (**(code **)(*(int *)(*(int *)(iVar6 + 0x210) + 0x10) + 0x6c))
                        (*(undefined4 *)(*(int *)(iVar6 + 0x210) + 0x14),iVar2);
      if (piVar5 + 0xe9 == (int *)0x0) {
        return uVar1;
      }
      if (*(char *)((int)piVar5 + uVar4 * 0x2c + 0x4bd) == '\0') {
        return uVar1;
      }
      iVar2 = _ssv6020_get_sec_key_tbl_addr(iVar6);
      iVar2 = uVar4 * 0x2c + 0x11c + iVar2;
      (**(code **)(piVar5[4] + 0x20))(piVar5[5],iVar2,piVar5[uVar4 * 0xb + 0x130]);
      (**(code **)(piVar5[4] + 0x20))(piVar5[5],iVar2 + 4,piVar5[uVar4 * 0xb + 0x131]);
      memset(piVar5 + 0xe9 + uVar4 * 0xb + 0x46,0,0x2c);
      return uVar1;
    }
    _dev_err(uVar1,DAT_00027134,uVar4);
  }
  return 0xffffffa1;
}



/* ===== ssv6020_dump_ssv6020_txframe @ 00027144 size=66 ===== */

void ssv6020_dump_ssv6020_txframe(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)(param_1 + 0xa4);
  printk(DAT_00027188);
  uVar2 = DAT_00027190;
  uVar1 = DAT_0002718c;
  uVar3 = 0;
  puVar4 = (undefined1 *)(*(int *)(param_1 + 0xa4) + 0x4f);
  while ((int)uVar3 < (int)(*puVar5 - 0x50)) {
    puVar4 = puVar4 + 1;
    uVar3 = uVar3 + 1;
    printk(uVar1,*puVar4);
    if ((uVar3 & 0xf) == 0) {
      printk(uVar2);
    }
  }
  return;
}



/* ===== ssv6020_dump_tx_desc @ 00027194 size=428 ===== */

void ssv6020_dump_tx_desc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  puVar4 = *(undefined2 **)(param_1 + 0xa4);
  uVar6 = 0;
  printk(DAT_00027340);
  uVar3 = DAT_00027370;
  uVar2 = DAT_00027344;
  puVar5 = *(undefined1 **)(param_1 + 0xa4);
  do {
    uVar6 = uVar6 + 1;
    printk(uVar2,puVar5[3],puVar5[2],puVar5[1],*puVar5,param_2,param_3,param_4);
    if ((uVar6 & 3) == 0) {
      printk(uVar3);
    }
    puVar5 = puVar5 + 4;
  } while (uVar6 != 0x14);
  printk(DAT_00027348,*puVar4,*(byte *)(puVar4 + 1) & 7,(*(byte *)(puVar4 + 1) & 0xf) >> 3,
         (*(byte *)(puVar4 + 1) & 0x1f) >> 4,(*(byte *)(puVar4 + 1) & 0x3f) >> 5,
         (*(byte *)(puVar4 + 1) & 0x7f) >> 6,(*(byte *)((int)puVar4 + 3) & 0xf) >> 3);
  bVar1 = *(byte *)((int)puVar4 + 3);
  printk(DAT_0002734c,(bVar1 & 0x1f) >> 4,(bVar1 & 0x7f) >> 5,bVar1 >> 7,
         (*(byte *)(puVar4 + 5) & 0x3f) >> 4);
  printk(DAT_00027350,*(undefined4 *)(puVar4 + 2),*(undefined1 *)(puVar4 + 4),
         *(byte *)((int)puVar4 + 9) & 1,(*(byte *)((int)puVar4 + 9) & 3) >> 1,
         *(byte *)((int)puVar4 + 9) >> 2);
  printk(DAT_00027354,*(byte *)(puVar4 + 0xf) & 3,(*(byte *)(puVar4 + 0xf) & 0xf) >> 2,
         *(byte *)(puVar4 + 0x13) & 3,(*(byte *)(puVar4 + 0x13) & 0xf) >> 2,
         *(byte *)((int)puVar4 + 0xb) >> 2);
  printk(DAT_00027358,*(byte *)(puVar4 + 0x17) & 3,(*(byte *)(puVar4 + 0x17) & 0xf) >> 2,
         *(byte *)(puVar4 + 0x1b) & 3,(*(byte *)(puVar4 + 0x1b) & 0xf) >> 2);
  printk(DAT_0002735c,*(byte *)(puVar4 + 7) & 7,(*(byte *)(puVar4 + 7) & 0x7f) >> 3,
         ((ushort)puVar4[7] & 0x3ff) >> 7);
  printk(DAT_00027360,puVar4[0xd],*(undefined1 *)((int)puVar4 + 0x19),*(undefined1 *)(puVar4 + 0xc),
         puVar4[0xe] & 0xfff,*(byte *)((int)puVar4 + 0x1d) >> 4,
         (*(byte *)(puVar4 + 0xf) & 0x1f) >> 4);
  printk(DAT_00027364,puVar4[0x11],*(undefined1 *)((int)puVar4 + 0x21),
         *(undefined1 *)(puVar4 + 0x10),puVar4[0x12] & 0xfff,*(byte *)((int)puVar4 + 0x25) >> 4,
         (*(byte *)(puVar4 + 0x13) & 0x1f) >> 4);
  printk(DAT_00027368,puVar4[0x15],*(undefined1 *)((int)puVar4 + 0x29),
         *(undefined1 *)(puVar4 + 0x14),puVar4[0x16] & 0xfff,*(byte *)((int)puVar4 + 0x2d) >> 4,
         (*(byte *)(puVar4 + 0x17) & 0x1f) >> 4);
  printk(DAT_0002736c,puVar4[0x19],*(undefined1 *)((int)puVar4 + 0x31),
         *(undefined1 *)(puVar4 + 0x18),puVar4[0x1a] & 0xfff,*(byte *)((int)puVar4 + 0x35) >> 4,
         (*(byte *)(puVar4 + 0x1b) & 0x1f) >> 4);
  return;
}



/* ===== ssv6020_fpga_turismoE_update_rf_table @ 00027374 size=8 ===== */

void ssv6020_fpga_turismoE_update_rf_table(void)

{
  printk(DAT_00027380,DAT_0002737c);
  return;
}



/* ===== ssv6020_fpga_cmd_turismoE_rfble @ 00027384 size=8 ===== */

void ssv6020_fpga_cmd_turismoE_rfble(void)

{
  printk(DAT_00027390,DAT_0002738c);
  return;
}



/* ===== ssv6020_fpga_cmd_turismoE_rf @ 00027394 size=8 ===== */

void ssv6020_fpga_cmd_turismoE_rf(void)

{
  printk(DAT_000273a0,DAT_0002739c);
  return;
}



/* ===== ssv6020_fpga_cmd_turismoE_txgen @ 000273a4 size=8 ===== */

void ssv6020_fpga_cmd_turismoE_txgen(void)

{
  printk(DAT_000273b0,DAT_000273ac);
  return;
}



/* ===== ssv6xxx_init_hwif_hal @ 000273b4 size=64 ===== */

undefined4 ssv6xxx_init_hwif_hal(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *__haystack;
  
  iVar3 = *param_1;
  __haystack = (char *)(iVar3 + 5);
  pcVar1 = strstr(__haystack,DAT_000273f4);
  if ((pcVar1 == (char *)0x0) && (pcVar1 = strstr(__haystack,DAT_000273f8), pcVar1 == (char *)0x0))
  {
    printk(DAT_000273fc,iVar3 + 0x1d);
    uVar2 = 0xffffffea;
  }
  else {
    printk(DAT_00027400);
    ssv_attach_hwif_hal_ssv6020(param_1,param_2);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== ssv6xxx_sdio_burst_read_reg @ 00027404 size=12 ===== */

undefined4 ssv6xxx_sdio_burst_read_reg(void)

{
  printk(DAT_00027410);
  return 0;
}



/* ===== ssv6xxx_set_sdio_clk @ 00027414 size=88 ===== */

void ssv6xxx_set_sdio_clk(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)*param_1;
  uVar5 = *(uint *)(iVar3 + 0x1ac);
  if ((*(uint *)(iVar3 + 0x1ac) <= param_2) &&
     (uVar5 = *(uint *)(iVar3 + 0x1b0), param_2 <= *(uint *)(iVar3 + 0x1b0))) {
    uVar5 = param_2;
  }
  printk(DAT_00027470,DAT_0002746c,uVar5);
  sdio_claim_host(param_1);
  *(uint *)(iVar3 + 0x200) = uVar5;
  iVar1 = DAT_00027474;
  iVar4 = 0x15;
  (**(code **)(*(int *)(iVar3 + 0x1a4) + 0x10))(iVar3,iVar3 + 0x200);
  uVar2 = DAT_00027478;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    (**(code **)(iVar1 + 4))(uVar2);
  }
  sdio_release_host(param_1);
  return;
}



/* ===== ssv6xxx_sdio_init @ 0002747c size=18 ===== */

void ssv6xxx_sdio_init(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  printk(DAT_00027490);
  sdio_register_driver(DAT_00027494,extraout_r1,extraout_r2,in_r3);
  return;
}



/* ===== ssv6xxx_sdio_exit @ 00027498 size=18 ===== */

void ssv6xxx_sdio_exit(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  printk(DAT_000274ac);
  sdio_unregister_driver(DAT_000274b0,extraout_r1,extraout_r2,in_r3);
  return;
}



/* ===== ssv6xxx_sdio_power_on.part.5 @ 000274b4 size=58 ===== */

int ssv6xxx_sdio_power_on_part_5(int param_1,undefined4 param_2)

{
  int iVar1;
  
  printk(DAT_000274f0);
  sdio_claim_host(param_2);
  iVar1 = sdio_enable_func(param_2);
  sdio_release_host(param_2);
  if (iVar1 == 0) {
    msleep(10);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    printk(DAT_000274f4,iVar1);
  }
  return iVar1;
}



/* ===== ssv6xxx_sdio_direct_int_mux_mode.constprop.6 @ 000274f8 size=96 ===== */

void ssv6xxx_sdio_direct_int_mux_mode_constprop_6
               (int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = -1;
  piVar3 = param_1;
  uStack_10 = param_3;
  iVar1 = _is_glue_invalid();
  if ((iVar1 == 0) && (param_1 != (int *)0x0)) {
    iVar1 = *param_1 + -8;
    sdio_claim_host(iVar1);
    uVar2 = sdio_readb(iVar1,0x56,&local_14);
    if (local_14 == 0) {
      sdio_writeb(iVar1,uVar2 & 0xfb,0x56,&local_14,piVar3);
    }
    sdio_release_host(iVar1);
    if (local_14 == 0) {
      param_1[0x24c] = 0;
    }
    else {
      iVar1 = param_1[0x24c];
      param_1[0x24c] = iVar1 + 1U;
      if (10 < iVar1 + 1U) {
        printk(DAT_00027558);
      }
    }
  }
  return;
}



/* ===== ssv6xxx_sdio_rw_scatter @ 0002755c size=318 ===== */

int ssv6xxx_sdio_rw_scatter(int param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 local_cc;
  uint local_c8;
  undefined4 local_b4;
  int local_ac;
  undefined1 auStack_9c [8];
  undefined4 local_94;
  uint local_90;
  int local_88;
  undefined4 local_84;
  uint local_74;
  uint *local_6c;
  undefined1 auStack_64 [4];
  undefined4 *local_60;
  undefined1 *puStack_5c;
  
  piVar13 = *(int **)(*(int *)(param_1 + 0x24) + 0x40);
  if (piVar13 == (int *)0x0) {
    _dev_err(param_1,DAT_0002769c);
    local_ac = 1;
  }
  else {
    iVar12 = *piVar13;
    memset(auStack_64,0,0x3c);
    iVar11 = 0;
    memset(&local_cc,0,0x30);
    memset(auStack_9c,0,0x38);
    uVar3 = param_2[1];
    uVar2 = param_2[2];
    local_90 = uVar3 >> 7;
    local_94 = 0x80;
    uVar4 = DAT_000276a4;
    if ((*param_2 & 2) != 0) {
      uVar4 = DAT_000276a0;
    }
    printk(DAT_000276a8,uVar4,0x80,local_90,uVar3,uVar2);
    puVar10 = param_2 + 0x13;
    if ((*param_2 & 2) == 0) {
      local_84 = 0x200;
    }
    else {
      local_84 = 0x100;
    }
    sg_init_table(puVar10,param_2[2]);
    puVar8 = param_2;
    puVar9 = puVar10;
    for (; local_74 = param_2[2], iVar11 < (int)local_74; iVar11 = iVar11 + 1) {
      printk(DAT_000276b0,iVar11,puVar8[3],puVar8[4],uVar3,uVar2);
      uVar5 = puVar8[3];
      uVar7 = *DAT_000276b4;
      if ((uVar7 & 3) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(2,0x2767c);
        (*pcVar1)();
      }
      uVar6 = puVar8[4];
      puVar9[1] = uVar5 & 0xfff;
      puVar9[2] = uVar6;
      *puVar9 = *puVar9 & 3 | uVar7 + (uVar5 + 0x50000000 >> 0xc) * 0x20;
      puVar8 = puVar8 + 2;
      puVar9 = puVar9 + 4;
    }
    local_c8 = (*(uint *)(iVar12 + 0x19c) & 7) << 0x1c | (*param_2 & 2) << 0x1e | 0x8000000 |
               DAT_000276ac & piVar13[0x248] << 9 | local_90 & 0x1ff;
    local_cc = 0x35;
    local_b4 = 0x1b5;
    local_60 = &local_cc;
    local_6c = puVar10;
    puStack_5c = auStack_9c;
    mmc_set_data_timeout(auStack_9c,*(undefined4 *)(iVar12 + -8));
    mmc_wait_for_req(**(undefined4 **)(iVar12 + -8),auStack_64);
    if (local_ac == 0) {
      local_ac = local_88;
    }
  }
  return local_ac;
}



/* ===== ssv6xxx_sdio_burst_write_reg @ 000276b8 size=12 ===== */

undefined4 ssv6xxx_sdio_burst_write_reg(void)

{
  printk(DAT_000276c4);
  return 0;
}



/* ===== ssv6xxx_sdio_probe @ 000276c8 size=596 ===== */

void ssv6xxx_sdio_probe(int *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *__src;
  int iVar7;
  int *piVar8;
  undefined4 *__s;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 local_2c;
  int local_24;
  
  piVar2 = DAT_0002791c;
  local_24 = *DAT_0002791c;
  printk(DAT_00027920);
  printk(DAT_00027924);
  printk(DAT_00027920);
  if (param_1[0x69] != 1) {
    iVar7 = -0x13;
    goto LAB_0002772c;
  }
  piVar8 = param_1 + 2;
  uVar5 = *(uint *)(*(int *)*param_1 + 0x1f8);
  if (0x1fe < uVar5) {
    uVar5 = 0x1ff;
  }
  printk(DAT_00027928,uVar5);
  puVar3 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_0002792c + 0x30),0xdc0);
  uVar6 = DAT_00027930;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[0x252] = puVar3;
    puVar3[0x24e] = 0xffffffe0;
    puVar3[0x24f] = puVar3 + 0x24f;
    puVar3[0x250] = puVar3 + 0x24f;
    uVar6 = DAT_00027938;
    puVar3[0x251] = DAT_00027934;
    iVar7 = alloc_workqueue(DAT_00027940,uVar6,1,DAT_0002793c);
    puVar3[0x24d] = iVar7;
    uVar6 = DAT_00027944;
    if (iVar7 != 0) {
      __s = puVar3 + 3;
      ssv6xxx_set_sdio_clk(param_1,DAT_00027948);
      memset(__s,0,0x58);
      iVar7 = *param_1;
      *puVar3 = piVar8;
      puVar3[3] = 0;
      uVar6 = DAT_0002794c;
      *(uint *)(iVar7 + 0x1b0) = *(uint *)(iVar7 + 0x1b0) | 1;
      *(uint *)(*param_1 + 0x1b0) = *(uint *)(*param_1 + 0x1b0) | 2;
      iVar7 = param_1[0x6b];
      uVar1 = *(undefined2 *)((int)param_1 + 0x1aa);
      *(undefined1 *)(puVar3 + 0x24b) = 1;
      *(short *)(puVar3 + 0xd) = (short)iVar7;
      *(undefined2 *)((int)puVar3 + 0x32) = uVar1;
      _dev_err(*puVar3,uVar6);
      uVar6 = DAT_00027950;
      param_1[0x12] = (int)puVar3;
      puVar3[0xe] = uVar6;
      if (param_1 != (int *)0x0) {
        ssv6xxx_do_sdio_wakeup_part_3(param_1);
      }
      if (*(char *)(puVar3 + 4) == '\0') {
        ssv6xxx_sdio_power_on_part_5(__s,param_1);
      }
      ssv6xxx_sdio_read_parameter(param_1,puVar3);
      ssv6xxx_do_sdio_reset_reinit(__s,param_1,puVar3);
      ssv6xxx_sdio_direct_int_mux_mode_constprop_6(puVar3);
      iVar7 = __ssv6xxx_sdio_read_reg(puVar3,DAT_00027954,&local_40);
      local_3c = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8
                 | local_40 >> 0x18;
      if (iVar7 == 0) {
        iVar7 = __ssv6xxx_sdio_read_reg(puVar3,DAT_00027958,&local_40);
      }
      local_38 = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8
                 | local_40 >> 0x18;
      if (iVar7 == 0) {
        iVar7 = __ssv6xxx_sdio_read_reg(puVar3,DAT_0002795c,&local_40);
      }
      local_34 = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8
                 | local_40 >> 0x18;
      if (iVar7 == 0) {
        __ssv6xxx_sdio_read_reg(puVar3,DAT_00027960,&local_40);
      }
      local_30 = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8
                 | local_40 >> 0x18;
      iVar7 = 0;
      local_2c = 0;
      __src = &local_3c;
      do {
        if ((char)*__src != '\0') goto LAB_00027858;
        iVar7 = iVar7 + 1;
        __src = (uint *)((int)__src + 1);
      } while (iVar7 != 0x10);
      __src = &local_3c;
      if ((char)local_3c == '\0') {
        _dev_err(*puVar3,DAT_00027970);
        *(undefined1 *)((int)puVar3 + 0x11) = 0;
      }
      else {
LAB_00027858:
        pcVar4 = strncpy((char *)((int)puVar3 + 0x11),(char *)__src,0x18);
        _dev_info(*puVar3,DAT_00027964,pcVar4);
        strncpy((char *)((int)puVar3 + 0x29),(char *)__src,8);
        *(undefined1 *)((int)puVar3 + 0x31) = 0;
      }
      __ssv6xxx_sdio_write_reg(puVar3,DAT_00027968,0);
      iVar7 = platform_device_alloc((int)puVar3 + 0x29,0xffffffff);
      puVar3[1] = iVar7;
      if (iVar7 == 0) {
        iVar7 = -0xc;
        _dev_err(*puVar3,DAT_0002796c);
      }
      else {
        *(int **)(iVar7 + 0x34) = piVar8;
        iVar7 = platform_device_add_data(puVar3[1],__s,0x58);
        uVar6 = DAT_00027974;
        if (iVar7 == 0) {
          puVar3[2] = *(undefined4 *)(puVar3[1] + 0x4c);
          iVar7 = ssv6xxx_init_hwif_hal((undefined4 *)(puVar3[1] + 0x4c),puVar3 + 0x259);
          if (iVar7 == 0) {
            ssv6xxx_sdio_irq_setmask(puVar3[1] + 0x10,0xff);
            iVar7 = platform_device_add(puVar3[1]);
            uVar6 = DAT_00027978;
            if (iVar7 == 0) goto LAB_0002772c;
            goto LAB_000278d0;
          }
        }
        else {
LAB_000278d0:
          _dev_err(*puVar3,uVar6);
        }
        platform_device_put(puVar3[1]);
      }
      kfree(puVar3);
      goto LAB_0002772c;
    }
  }
  iVar7 = -0xc;
  _dev_err(piVar8,uVar6);
LAB_0002772c:
  if (local_24 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}



/* ===== ssv6xxx_sdio_remove @ 0002797c size=170 ===== */

void ssv6xxx_sdio_remove(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x48);
  printk(DAT_00027a28);
  if (iVar3 != 0) {
    printk(DAT_00027a2c);
    ssv6xxx_sdio_irq_disable(*(int *)(iVar3 + 4) + 0x10,0);
    ssv6xxx_set_sdio_clk(param_1,DAT_00027a30);
    printk(DAT_00027a34);
    ssv6xxx_sdio_irq_setmask(*(int *)(iVar3 + 4) + 0x10,0xff);
    __ssv6xxx_sdio_write_reg(iVar3,DAT_00027a38,0xffffffff);
    iVar4 = *(int *)(iVar3 + 8);
    if (*(char *)(iVar4 + 4) != '\0') {
      printk(DAT_00027a3c);
      sdio_claim_host(param_1);
      iVar2 = sdio_disable_func(param_1);
      sdio_release_host(param_1);
      if (iVar2 == 0) {
        *(undefined1 *)(iVar4 + 4) = 0;
      }
    }
    printk(DAT_00027a40);
    platform_device_del(*(undefined4 *)(iVar3 + 4));
    printk(DAT_00027a44);
    platform_device_put(*(undefined4 *)(iVar3 + 4));
    cancel_work_sync(iVar3 + 0x938);
    destroy_workqueue(*(undefined4 *)(iVar3 + 0x934));
    *(undefined1 *)(iVar3 + 0x92c) = 0;
    kfree(iVar3);
  }
  uVar1 = DAT_00027a48;
  *(undefined4 *)(param_1 + 0x48) = 0;
  printk(uVar1);
  return;
}



/* ===== initWlan @ 00027a4c size=16 ===== */

void initWlan(void)

{
  printk(DAT_00027a5c);
  ssvdevice_init();
  return;
}



/* ===== init_module @ 00027a60 size=4 ===== */

void init_module(void)

{
  printk(DAT_00027a5c);
  ssvdevice_init();
  return;
}



/* ===== <EXTERNAL>::filp_open @ 00089000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void filp_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_device_put @ 00089004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_device_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00089008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_release_host @ 0008900c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_release_host(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_disable_func @ 00089010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_disable_func(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_start_tx_ba_cb_irqsafe @ 00089014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_start_tx_ba_cb_irqsafe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rtnl_unlock @ 00089018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rtnl_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_rwsem @ 0008901c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_rwsem(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_set_block_size @ 00089020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_set_block_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alloc_workqueue @ 00089024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void alloc_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion_timeout @ 00089028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_put @ 0008902c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__msecs_to_jiffies @ 00089030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __msecs_to_jiffies(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_driver_unregister @ 00089034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_driver_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_claim_host @ 00089038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_claim_host(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_memcpy_fromio @ 0008903c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_memcpy_fromio(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_free_dev @ 00089040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_free_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_register_driver @ 00089044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_register_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00089048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::complete @ 0008904c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void complete(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_work_on @ 00089050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::simple_strtol @ 00089058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void simple_strtol(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_dequeue @ 00089060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_dequeue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_swait_queue_head @ 00089064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_swait_queue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::finish_wait @ 00089068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void finish_wait(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_free_hw @ 0008906c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_free_hw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::genlmsg_put @ 00089070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void genlmsg_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_start_tx_ba_session @ 00089074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_start_tx_ba_session(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00089078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 0008907c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_register_hw @ 00089080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_register_hw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_create_data @ 00089084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_create_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_restart_hw @ 00089088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_restart_hw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prepare_to_wait_event @ 0008908c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void prepare_to_wait_event(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_should_stop @ 00089090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_should_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_memcpy_toio @ 00089094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_memcpy_toio(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_get_hdrlen_from_skb @ 00089098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_get_hdrlen_from_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__wake_up @ 0008909c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 000890a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_device_add_data @ 000890a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_device_add_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pskb_expand_head @ 000890a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pskb_expand_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wake_up_process @ 000890ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wake_up_process(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sched_clock @ 000890b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sched_clock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion_interruptible_timeout @ 000890b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion_interruptible_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_find_sta @ 000890b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_find_sta(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_align_size @ 000890bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_align_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree_skb @ 000890c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule_timeout @ 000890c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000890c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_release_irq @ 000890cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_release_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_delayed_work_on @ 000890d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_delayed_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep_range @ 000890d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usleep_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__alloc_skb @ 000890d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __alloc_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 000890dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 000890e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::driver_find_device @ 000890e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void driver_find_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_queue_tail @ 000890e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_queue_tail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_stop_tx_ba_cb_irqsafe @ 000890ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_stop_tx_ba_cb_irqsafe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_set_host_pm_flags @ 000890f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_set_host_pm_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_f0_writeb @ 000890f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_f0_writeb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_unregister_driver @ 000890f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_unregister_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_wait_entry @ 000890fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_wait_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::down_write @ 00089100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void down_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 00089104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::up_write @ 0008910c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void up_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_pull @ 00089110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_pull(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::add_timer @ 00089118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void add_timer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netlink_unicast @ 0008911c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netlink_unicast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mod_timer @ 00089120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mod_timer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00089124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::destroy_workqueue @ 00089128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void destroy_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 0008912c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_push @ 00089130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_push(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vprintk @ 00089134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vprintk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::debugfs_remove @ 00089138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void debugfs_remove(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0008913c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_putc @ 00089140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_putc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmc_set_data_timeout @ 00089144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mmc_set_data_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nla_put @ 00089148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void nla_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_device_add @ 0008914c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_device_add(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_alloc_dev @ 00089150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_alloc_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_is_locked @ 00089154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_is_locked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00089158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 0008915c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_wake_queues @ 00089160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_wake_queues(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_device_alloc @ 00089164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_device_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_device_del @ 00089168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_device_del(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0008916c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__local_bh_enable_ip @ 00089170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __local_bh_enable_ip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_stop @ 00089174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_free_txskb @ 00089178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_free_txskb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0008917c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 00089180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 00089184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_alloc_hw_nm @ 00089188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_alloc_hw_nm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::jiffies_to_msecs @ 0008918c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void jiffies_to_msecs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_mkdir @ 00089194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_mkdir(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00089198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_warn @ 0008919c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_queue_purge @ 000891a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_queue_purge(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kernel_read @ 000891a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kernel_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 000891ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmc_wait_for_req @ 000891b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mmc_wait_for_req(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::PDE_DATA @ 000891b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void PDE_DATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 000891b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_tx_status @ 000891bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_tx_status(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__netdev_alloc_skb @ 000891c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __netdev_alloc_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_stop_queues @ 000891c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_stop_queues(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000891c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::down_read @ 000891cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void down_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_trim @ 000891d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_trim(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_to_user @ 000891d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_to_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_get_host_pm_caps @ 000891d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_get_host_pm_caps(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__platform_driver_register @ 000891e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __platform_driver_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_create_on_node @ 000891e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_create_on_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000891e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_notice @ 000891ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_notice(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_unregister_dev @ 000891f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_unregister_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::debugfs_create_file @ 000891f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void debugfs_create_file(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfree @ 000891f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_scan_completed @ 000891fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_scan_completed(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_recv_frame @ 00089200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_recv_frame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 00089204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_delayed_work_sync @ 00089208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_delayed_work_sync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_from_user @ 0008920c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_from_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_timer_key @ 00089210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_timer_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__dev_kfree_skb_any @ 00089214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __dev_kfree_skb_any(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::filp_close @ 00089218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void filp_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_unregister_hw @ 0008921c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_unregister_hw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmemdup @ 00089220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmemdup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::remove_proc_entry @ 00089224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void remove_proc_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_work_sync @ 00089228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_work_sync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_beacon_get_tim @ 0008922c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_beacon_get_tim(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_copy @ 00089234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 00089238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::simple_strtoul @ 0008923c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void simple_strtoul(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_hdrlen @ 00089240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_hdrlen(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmc_wait_for_cmd @ 00089244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mmc_wait_for_cmd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_claim_irq @ 00089248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_claim_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rtnl_lock @ 0008924c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rtnl_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_enable_func @ 00089250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_enable_func(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_printk @ 00089254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_random_bytes @ 00089258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void get_random_bytes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_open @ 0008925c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::genl_unregister_family @ 00089260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void genl_unregister_family(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_register_dev @ 00089264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_register_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00089268 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::del_timer @ 0008926c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void del_timer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vmalloc @ 00089278 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::debugfs_create_dir @ 00089280 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void debugfs_create_dir(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::genl_register_family @ 00089284 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void genl_register_family(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::simple_read_from_buffer @ 00089288 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void simple_read_from_buffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::up_read @ 0008928c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void up_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_init_table @ 00089290 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_init_table(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::msleep @ 00089294 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void msleep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ktime_get_with_offset @ 00089298 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ktime_get_with_offset(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 0008929c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_queue_head @ 000892a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_queue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_readb @ 000892a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_readb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_writeb @ 000892ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_writeb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ieee80211_rx_napi @ 000892b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ieee80211_rx_napi(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


