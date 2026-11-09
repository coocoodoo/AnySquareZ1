// rga3.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== IS_ERR_OR_NULL @ 00010698 size=18 ===== */

bool IS_ERR_OR_NULL(uint param_1)

{
  if (param_1 == 0) {
    return true;
  }
  return 0xfffff000 < param_1;
}



/* ===== rga_irq_handler @ 000106aa size=14 ===== */

undefined4 rga_irq_handler(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_2 + 0x54) + 0x14);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000106b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2);
    return uVar1;
  }
  return 0;
}



/* ===== rga_mpi_set_channel_buffer @ 000106b8 size=100 ===== */

void rga_mpi_set_channel_buffer(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_140 [2];
  undefined4 local_138;
  int local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  int local_1c;
  
  piVar1 = DAT_0001071c;
  local_1c = *DAT_0001071c;
  uVar2 = 0;
  memset(local_140,0,0x120);
  local_138 = 3;
  local_130 = (uint)*(ushort *)(param_2 + 9);
  local_12c = (uint)*(ushort *)((int)param_2 + 0x26);
  local_128 = param_2[6];
  local_140[0] = param_1;
  local_134 = rga_mm_import_buffer(local_140,param_3);
  if (local_134 == 0) {
    printk(DAT_00010720,param_1);
    uVar2 = 0xfffffff2;
  }
  else {
    *param_2 = local_134;
    param_2[1] = 0;
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== rga_session_deinit @ 00010724 size=64 ===== */

undefined4
rga_session_deinit(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  int iVar1;
  int iVar2;
  
  rga_request_session_destroy_abort();
  rga_mm_session_release_buffer(param_1);
  iVar2 = *(int *)(*DAT_00010764 + 0x58);
  mutex_lock(iVar2);
  iVar1 = *(int *)(iVar2 + 0x1c) + -1;
  *(int *)(iVar2 + 0x1c) = iVar1;
  idr_remove(iVar2 + 0xc,*param_1,extraout_r2,iVar1,param_4);
  mutex_unlock(iVar2);
  kfree(param_1[2]);
  kfree(param_1);
  return 0;
}



/* ===== rga_release @ 00010768 size=14 ===== */

undefined4 rga_release(undefined4 param_1,int param_2)

{
  rga_session_deinit(*(undefined4 *)(param_2 + 0x80));
  return 0;
}



/* ===== rga_session_free_remove_idr_cb @ 00010776 size=28 ===== */

undefined4 rga_session_free_remove_idr_cb(undefined4 param_1,undefined4 *param_2)

{
  idr_remove(*(int *)(*DAT_00010794 + 0x58) + 0xc,*param_2);
  kfree(param_2);
  return 0;
}



/* ===== _copy_to_user @ 00010798 size=38 ===== */

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



/* ===== rga_ioctl_blit @ 000107be size=304 ===== */

void rga_ioctl_blit(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_r3;
  undefined4 uVar6;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined4 local_b0;
  undefined1 auStack_ac [136];
  int local_24;
  
  piVar1 = DAT_000108f0;
  local_24 = *DAT_000108f0;
  uVar6 = *(undefined4 *)(*DAT_000108f4 + 0x54);
  iVar2 = rga_request_alloc(0,param_3);
  if (iVar2 < 0) {
    printk(DAT_000108f8);
    iVar3 = iVar2;
  }
  else {
    memset(auStack_ac,0,0x84);
    local_bc = 0;
    uStack_b8 = 1;
    local_c0 = param_1;
    local_b4 = iVar2;
    local_b0 = param_2;
    iVar3 = rga_request_check(&local_c0);
    if (iVar3 < 0) {
      printk(DAT_000108fc);
    }
    else {
      piVar5 = (int *)rga_request_config(&local_c0);
      if (piVar5 < (int *)0xfffff001) {
        iVar2 = *piVar5;
        piVar5[7] = *(int *)(iVar2 + 0x15c);
        if (*DAT_00010908 != 0) {
          printk(DAT_0001090c,local_b4);
          rga_cmd_print_debug_info(iVar2);
        }
        iVar3 = rga_request_submit(piVar5);
        if (iVar3 < 0) {
          printk(DAT_00010910,local_b4);
        }
        else if (piVar5[6] == 0x5018) {
          *(int *)(iVar2 + 0x164) = piVar5[8];
          iVar2 = _copy_to_user(param_1,iVar2,0x1f8);
          if (iVar2 != 0) {
            iVar3 = -0xe;
            printk(DAT_00010914);
          }
        }
        mutex_lock(uVar6);
        rga_request_put(piVar5);
        mutex_unlock(uVar6);
        goto LAB_000107e8;
      }
      iVar3 = -0xe;
      printk(DAT_00010904,local_b4);
    }
    mutex_lock(uVar6);
    rga_request_lookup(uVar6,iVar2);
    iVar4 = IS_ERR_OR_NULL();
    if (iVar4 == 0) {
      rga_request_free(extraout_r3);
      mutex_unlock(uVar6);
    }
    else {
      printk(DAT_00010900,iVar2);
      mutex_unlock(uVar6);
      iVar3 = -0x16;
    }
  }
LAB_000107e8:
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}



/* ===== _copy_from_user @ 00010918 size=58 ===== */

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



/* ===== rga_ioctl_request_submit @ 00010952 size=196 ===== */

void rga_ioctl_request_submit(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [12];
  undefined4 local_ac;
  undefined4 local_a4;
  int local_1c;
  
  piVar1 = DAT_00010a18;
  local_1c = *DAT_00010a18;
  uVar6 = *(undefined4 *)(*DAT_00010a1c + 0x54);
  iVar2 = _copy_from_user(auStack_b8,param_1,0x98);
  uVar3 = DAT_00010a24;
  uVar5 = DAT_00010a20;
  if (iVar2 == 0) {
    iVar2 = rga_request_check(auStack_b8);
    if (iVar2 < 0) {
      printk(DAT_00010a28);
      goto LAB_00010992;
    }
    if (*DAT_00010a2c != 0) {
      printk(DAT_00010a30,local_ac);
    }
    iVar2 = rga_request_config(auStack_b8);
    iVar4 = IS_ERR_OR_NULL();
    uVar3 = DAT_00010a34;
    uVar5 = local_ac;
    if (iVar4 != 0) goto LAB_00010978;
    if (param_2 == 0) goto LAB_000109fa;
    iVar4 = rga_request_submit(iVar2);
    uVar3 = DAT_00010a38;
    uVar5 = local_ac;
    if (iVar4 < 0) goto LAB_00010978;
    if (*(int *)(iVar2 + 0x18) == 0x5018) {
      local_a4 = *(undefined4 *)(iVar2 + 0x20);
      iVar4 = _copy_to_user(param_1,auStack_b8,0x98);
      if (iVar4 != 0) {
        printk(DAT_00010a3c);
        goto LAB_0001097c;
      }
    }
LAB_000109fa:
    mutex_lock(uVar6);
    rga_request_put(iVar2);
    mutex_unlock(uVar6);
    iVar2 = 0;
  }
  else {
LAB_00010978:
    printk(uVar3,uVar5);
LAB_0001097c:
    iVar2 = -0xe;
  }
LAB_00010992:
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}



/* ===== rga_mpi_set_channel_info @ 00010a40 size=106 ===== */

void rga_mpi_set_channel_info(int param_1,uint param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0xc) {
    uVar1 = 8;
    uVar2 = 4;
  }
  else if (param_1 == 0x30) {
    uVar1 = 0x20;
    uVar2 = 0x10;
  }
  else {
    if (param_1 != 3) {
      return;
    }
    uVar1 = 2;
    uVar2 = 1;
  }
  if ((uVar2 & param_2) != 0) {
    *(short *)(param_4 + 0x20) = (short)*param_3;
    *(short *)(param_4 + 0x22) = (short)param_3[1];
    *(short *)(param_4 + 0x1c) = (short)param_3[2];
    *(short *)(param_4 + 0x1e) = (short)param_3[3];
    *(short *)(param_4 + 0x24) = (short)param_3[5];
    *(short *)(param_4 + 0x26) = (short)param_3[6];
    *(short *)(param_4 + 0x2e) = (short)param_3[7];
    *(undefined4 *)(param_4 + 0x18) = param_3[4];
    if ((uVar1 & param_2) != 0) {
      *(short *)(param_5 + 0x20) = (short)*param_3;
      *(short *)(param_5 + 0x22) = (short)param_3[1];
      *(short *)(param_5 + 0x1c) = (short)param_3[2];
      *(short *)(param_5 + 0x1e) = (short)param_3[3];
      *(short *)(param_5 + 0x24) = (short)param_3[5];
      *(short *)(param_5 + 0x26) = (short)param_3[6];
      *(short *)(param_5 + 0x2e) = (short)param_3[7];
      *(undefined4 *)(param_5 + 0x18) = param_3[4];
    }
  }
  return;
}



/* ===== rga_mpi_commit @ 00010aaa size=498 ===== */

void rga_mpi_commit(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  void *__src;
  undefined4 uVar6;
  undefined1 auStack_220 [8];
  int local_218;
  int iStack_214;
  int local_1e0;
  int iStack_1dc;
  undefined4 local_1c8;
  ushort local_1c4;
  ushort local_1c2;
  ushort local_1c0;
  ushort local_1be;
  ushort local_1bc;
  ushort local_1ba;
  ushort local_1b2;
  int local_1a8;
  int iStack_1a4;
  undefined1 local_108;
  undefined4 local_f8;
  undefined1 local_b8;
  int local_24;
  
  piVar1 = DAT_00010c9c;
  local_24 = *DAT_00010c9c;
  uVar6 = *(undefined4 *)(*DAT_00010ca0 + 0x54);
  mutex_lock(uVar6);
  puVar3 = (undefined4 *)rga_request_lookup(uVar6,param_1[7]);
  iVar4 = IS_ERR_OR_NULL();
  if (iVar4 == 0) {
    if ((int)puVar3[1] < 2) {
      rga_request_get(puVar3);
      mutex_unlock(uVar6);
      disableIRQinterrupts();
      __src = (void *)*puVar3;
      puVar3[6] = 0x5017;
      memcpy(auStack_220,__src,0x1f8);
      if ((param_1[3] != 0) && ((puVar3[0xc] & 3) != 0)) {
        rga_mpi_set_channel_info(3,puVar3[0xc],param_1[3],&local_218,(int)__src + 8);
      }
      if ((param_1[4] != 0) && ((puVar3[0xc] & 0xc) != 0)) {
        rga_mpi_set_channel_info(0xc,puVar3[0xc],param_1[4],&local_1a8,(int)__src + 0x78);
      }
      if ((param_1[5] != 0) && ((puVar3[0xc] & 0x30) != 0)) {
        rga_mpi_set_channel_info(0x30,puVar3[0xc],param_1[5],&local_1e0,(int)__src + 0x40);
      }
      if ((((*param_1 == 0) ||
           (iVar4 = rga_mpi_set_channel_buffer(*param_1,&local_218,puVar3[0xf]),
           uVar5 = DAT_00010cac, -1 < iVar4)) &&
          ((param_1[1] == 0 ||
           (iVar4 = rga_mpi_set_channel_buffer(param_1[1],&local_1a8,puVar3[0xf]),
           uVar5 = DAT_00010cb0, -1 < iVar4)))) &&
         ((param_1[2] == 0 ||
          (iVar4 = rga_mpi_set_channel_buffer(param_1[2],&local_1e0,puVar3[0xf]),
          uVar5 = DAT_00010cb4, -1 < iVar4)))) {
        piVar2 = DAT_00010cb8;
        local_b8 = 1;
        local_108 = 0;
        local_f8 = 0;
        if (*DAT_00010cb8 != 0) {
          rga_cmd_print_debug_info(auStack_220);
        }
        iVar4 = rga_request_mpi_submit(auStack_220,puVar3);
        if (-1 < iVar4) {
          if ((*param_1 != 0) && (local_218 != 0 || iStack_214 != 0)) {
            rga_mm_release_buffer();
          }
          if ((param_1[1] != 0) && (local_1a8 != 0 || iStack_1a4 != 0)) {
            rga_mm_release_buffer();
          }
          if ((param_1[2] != 0) && (local_1e0 != 0 || iStack_1dc != 0)) {
            rga_mm_release_buffer();
          }
          iVar4 = 0;
          if ((uint *)param_1[6] != (uint *)0x0) {
            *(uint *)param_1[6] = (uint)local_1c0;
            iVar4 = 0;
            *(uint *)(param_1[6] + 4) = (uint)local_1be;
            *(uint *)(param_1[6] + 8) = (uint)local_1c4;
            *(uint *)(param_1[6] + 0xc) = (uint)local_1c2;
            *(uint *)(param_1[6] + 0x14) = (uint)local_1bc;
            *(uint *)(param_1[6] + 0x18) = (uint)local_1ba;
            *(uint *)(param_1[6] + 0x1c) = (uint)local_1b2;
            *(undefined4 *)(param_1[6] + 0x10) = local_1c8;
          }
          goto LAB_00010aea;
        }
        uVar5 = DAT_00010cc4;
        if ((iVar4 != -0x200) || (uVar5 = DAT_00010cc0, *piVar2 != 0)) {
          printk(uVar5,DAT_00010cbc);
        }
      }
      else {
        printk(uVar5);
      }
      mutex_lock(uVar6);
      rga_request_put(puVar3);
      mutex_unlock(uVar6);
      goto LAB_00010aea;
    }
    printk(DAT_00010ca8);
  }
  else {
    printk(DAT_00010ca4,param_1[7]);
  }
  iVar4 = -0x16;
  mutex_unlock(uVar6);
LAB_00010aea:
  if (local_24 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}



/* ===== hrtimer_handler @ 00010cc8 size=252 ===== */

undefined4 hrtimer_handler(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  int *local_38;
  
  piVar4 = DAT_00010dd0;
  iVar8 = *DAT_00010dd0;
  lVar14 = ktime_get();
  iVar12 = 0;
  local_38 = (int *)(iVar8 + 0xc);
  while( true ) {
    if (*(int *)(iVar8 + 0x18) <= iVar12) break;
    iVar5 = *local_38;
    disableIRQinterrupts();
    if (*(int *)(iVar5 + 0x40) != 0) {
      plVar7 = (longlong *)(*(int *)(iVar5 + 0x40) + 0x6e8);
      uVar3 = lVar14 - *plVar7;
      uVar2 = uVar3;
      if ((longlong)uVar3 < 0) {
        uVar2 = CONCAT44(-(int)(uVar3 >> 0x20) - (uint)((int)uVar3 != 0),-(int)uVar3);
      }
      uVar10 = (uint)(uVar2 >> 0x20);
      lVar1 = (ulonglong)DAT_00010dc8 * (uVar2 & 0xffffffff);
      uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
      bVar13 = CARRY4((uint)lVar1,DAT_00010dc8);
      uVar2 = (ulonglong)DAT_00010dcc * (uVar2 & 0xffffffff) +
              (ulonglong)
              CONCAT14(CARRY4(uVar9,DAT_00010dcc) || CARRY4(uVar9 + DAT_00010dcc,(uint)bVar13),
                       uVar9 + DAT_00010dcc + bVar13);
      uVar9 = (uint)(uVar2 >> 0x20);
      uVar11 = (uint)((ulonglong)DAT_00010dc8 * (ulonglong)uVar10 + (uVar2 & 0xffffffff) >> 0x20);
      lVar1 = (ulonglong)DAT_00010dcc * (ulonglong)uVar10 +
              (ulonglong)CONCAT14(CARRY4(uVar11,uVar9),uVar11 + uVar9);
      uVar9 = (uint)lVar1 >> 9 | (int)((ulonglong)lVar1 >> 0x20) << 0x17;
      if ((longlong)uVar3 < 0) {
        uVar9 = -uVar9;
      }
      *(uint *)(iVar5 + 0x84) = uVar9 + *(int *)(iVar5 + 0x84);
      *plVar7 = lVar14;
    }
    *(undefined4 *)(iVar5 + 0x88) = *(undefined4 *)(iVar5 + 0x84);
    *(undefined4 *)(iVar5 + 0x84) = 0;
    iVar12 = iVar12 + 1;
    local_38 = local_38 + 1;
  }
  iVar8 = piVar4[2];
  iVar12 = piVar4[3];
  uVar15 = (**(code **)(*(int *)(param_1 + 0x24) + 0x1c))();
  uVar6 = (undefined4)((ulonglong)uVar15 >> 0x20);
  hrtimer_forward(param_1,uVar6,(int)uVar15,uVar6,iVar8,iVar12);
  return 1;
}



/* ===== rga_drv_probe @ 00010dd4 size=842 ===== */

int rga_drv_probe(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  uint *local_30;
  
  iVar11 = *DAT_000110d4;
  iVar9 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x174) == 0) {
    return -0x16;
  }
  pcVar2 = (char *)dev_driver_string(iVar9);
  iVar3 = strcmp(pcVar2,DAT_000110d8);
  uVar5 = DAT_000110dc;
  if (iVar3 != 0) {
    pcVar2 = (char *)dev_driver_string(iVar9);
    iVar3 = strcmp(pcVar2,DAT_000110e4);
    uVar5 = DAT_000110e8;
    if (iVar3 != 0) {
      pcVar2 = (char *)dev_driver_string(iVar9);
      iVar3 = strcmp(pcVar2,DAT_000110ec);
      uVar5 = DAT_000110f4;
      if (iVar3 != 0) goto LAB_00010e54;
    }
  }
  iVar3 = of_match_device(uVar5,iVar9);
  if (iVar3 == 0) {
LAB_00010e54:
    uVar5 = dev_driver_string(iVar9);
    _dev_err(iVar9,DAT_000110f0,uVar5);
    return -0x16;
  }
  piVar4 = (int *)devm_kmalloc(iVar9,0x8c,0xdc0);
  if (piVar4 == (int *)0x0) {
    uVar5 = dev_driver_string(iVar9);
    printk(DAT_000110e0,uVar5);
    return -0xc;
  }
  pcVar2 = (char *)dev_driver_string(iVar9);
  uVar5 = DAT_000110f8;
  piVar4[0x11] = (int)(piVar4 + 0x11);
  piVar4[0x12] = (int)(piVar4 + 0x11);
  __init_waitqueue_head(piVar4 + 0x13,uVar5,DAT_000110fc);
  iVar6 = strcmp(pcVar2,DAT_000110d8);
  if (iVar6 == 0) {
    piVar4[0x15] = DAT_00011100;
    iVar6 = 1;
LAB_00010e9a:
    piVar4[0x20] = iVar6;
  }
  else {
    iVar6 = strcmp(pcVar2,DAT_000110e4);
    if (iVar6 == 0) {
      piVar4[0x15] = DAT_00011100;
      iVar6 = 2;
      goto LAB_00010e9a;
    }
    iVar6 = strcmp(pcVar2,DAT_000110ec);
    if (iVar6 == 0) {
      piVar4[0x15] = DAT_00011108;
      iVar6 = 4;
      goto LAB_00010e9a;
    }
  }
  *piVar4 = iVar9;
  piVar7 = (int *)platform_get_resource(param_1,0x200,0);
  if (piVar7 == (int *)0x0) {
    printk(DAT_00011104);
    return -6;
  }
  iVar6 = devm_ioremap(iVar9,*piVar7,(piVar7[1] + 1) - *piVar7);
  piVar4[1] = iVar6;
  if (iVar6 == 0) {
    printk(DAT_0001110c);
    return -2;
  }
  piVar7 = *(int **)(iVar3 + 0xc0);
  iVar3 = platform_get_irq(param_1,0);
  if (iVar3 < 0) {
    uVar5 = dev_driver_string(iVar9);
    _dev_err(iVar9,DAT_00011110,uVar5);
    return iVar3;
  }
  piVar4[0x18] = iVar3;
  uVar5 = dev_driver_string(iVar9);
  printk(DAT_00011114,uVar5,iVar3);
  uVar5 = dev_driver_string(iVar9);
  iVar3 = devm_request_threaded_irq(iVar9,iVar3,DAT_00011118,DAT_0001111c,0x80,uVar5,piVar4);
  if (iVar3 < 0) {
    uVar5 = dev_driver_string(iVar9);
    printk(DAT_00011124,uVar5,iVar3);
    return iVar3;
  }
  puVar10 = (uint *)(piVar4 + 3);
  puVar12 = puVar10;
  for (iVar3 = 0; iVar3 < piVar7[1]; iVar3 = iVar3 + 1) {
    uVar8 = devm_clk_get(iVar9,*(undefined4 *)(*piVar7 + iVar3 * 4));
    if (0xfffff000 < uVar8) {
      printk(DAT_00011128,*(undefined4 *)(*piVar7 + iVar3 * 4));
    }
    *puVar12 = uVar8;
    puVar12 = puVar12 + 1;
  }
  bVar1 = *(byte *)(param_1 + 0x84);
  piVar4[0xd] = piVar7[1];
  *(byte *)(param_1 + 0x84) = bVar1 | 1;
  iVar3 = *piVar4;
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) | 1;
  pm_runtime_enable(iVar3);
  iVar3 = __pm_runtime_resume(*piVar4,4);
  if (iVar3 < 0) {
    printk(DAT_00011120,iVar3);
LAB_00010fa2:
    *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xfe;
    *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe;
    __pm_runtime_disable(iVar9,1);
    return iVar3;
  }
  local_30 = puVar10;
  for (iVar6 = 0; iVar6 < piVar4[0xd]; iVar6 = iVar6 + 1) {
    uVar8 = *local_30;
    if (uVar8 < 0xfffff001) {
      iVar3 = clk_prepare(uVar8);
      if (iVar3 == 0) {
        iVar3 = clk_enable(uVar8);
        if (iVar3 == 0) goto LAB_0001103e;
        clk_unprepare(uVar8);
      }
      if (iVar3 < 0) {
        printk(DAT_0001112c);
        goto LAB_00010fa2;
      }
    }
LAB_0001103e:
    local_30 = local_30 + 1;
  }
  piVar7 = piVar4 + 0x1c;
  (**(code **)piVar4[0x15])(piVar4);
  uVar5 = dev_driver_string(iVar9);
  printk(DAT_00011130,uVar5,piVar7);
  iVar3 = DAT_00011134;
  if (1 < piVar4[0x20] - 1U) {
    if (piVar4[0x20] != 4) goto LAB_00011072;
    iVar6 = strcmp((char *)piVar7,DAT_0001118c);
    iVar3 = DAT_00011190;
    if (((iVar6 != 0) &&
        (iVar6 = strcmp((char *)piVar7,DAT_00011194), iVar3 = DAT_0001119c, iVar6 != 0)) &&
       (iVar6 = strcmp((char *)piVar7,DAT_00011198), iVar3 = DAT_0001119c, iVar6 != 0)) {
      iVar3 = DAT_000111a0;
    }
  }
  piVar4[0x16] = iVar3;
LAB_00011072:
  iVar3 = *(int *)(iVar11 + 0x18);
  *(int **)(iVar11 + iVar3 * 4 + 0xc) = piVar4;
  *(int *)(iVar11 + 0x18) = iVar3 + 1;
  iVar11 = piVar4[0xd];
  while (iVar11 = iVar11 + -1, -1 < iVar11) {
    uVar8 = puVar10[iVar11];
    if (uVar8 < 0xfffff001) {
      clk_disable(uVar8);
      clk_unprepare(uVar8);
    }
  }
  __pm_runtime_idle(iVar9,4);
  if (*(int *)(piVar4[0x16] + 0x48) == 2) {
    uVar8 = rga_iommu_probe(iVar9);
    piVar4[2] = uVar8;
    if (0xfffff000 < uVar8) {
      _dev_err(iVar9,DAT_00011138);
      piVar4[2] = 0;
    }
  }
  *(int **)(param_1 + 0x50) = piVar4;
  uVar5 = dev_driver_string(iVar9);
  printk(DAT_0001113c,uVar5);
  return 0;
}



/* ===== rga_drv_remove @ 000111a4 size=38 ===== */

undefined4 rga_drv_remove(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xfe;
  bVar1 = *(byte *)(param_1 + 0x8c) & 0xfe;
  *(byte *)(param_1 + 0x8c) = bVar1;
  __pm_runtime_disable(param_1 + 0x10,1,param_3,bVar1,param_4);
  return 0;
}



/* ===== rga_session_init @ 000111ca size=162 ===== */

int * rga_session_init(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar3 = *(int *)(*DAT_0001126c + 0x58);
  local_18 = param_1;
  uStack_14 = param_2;
  if (iVar3 == 0) {
    printk(DAT_00011270);
    piVar1 = (int *)0xfffffff2;
  }
  else {
    piVar1 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_00011274 + 0x10),0xdc0);
    if (piVar1 == (int *)0x0) {
      printk(DAT_00011278);
      piVar1 = (int *)0xfffffff4;
    }
    else {
      mutex_lock(iVar3);
      idr_preload(0xcc0);
      local_18 = 0x800;
      piVar2 = (int *)idr_alloc_cyclic(iVar3 + 0xc,piVar1,1,0);
      if ((int)piVar2 < 0) {
        mutex_unlock(iVar3);
        printk(DAT_0001127c);
        kfree(piVar1);
        piVar1 = piVar2;
      }
      else {
        *piVar1 = (int)piVar2;
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
        mutex_unlock(iVar3);
        piVar1[1] = *(int *)(*(int *)(((uint)&local_18 & 0xffffe000) + 0xc) + 0x1dc);
        iVar3 = kstrdup_quotable_cmdline
                          (*(undefined4 *)(((uint)&local_18 & 0xffffe000) + 0xc),0xcc0);
        piVar1[2] = iVar3;
      }
    }
  }
  return piVar1;
}



/* ===== rga_kernel_commit @ 00011280 size=276 ===== */

void rga_kernel_commit(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_r3;
  undefined4 uVar6;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined1 auStack_ac [136];
  int local_24;
  
  piVar1 = DAT_00011394;
  local_24 = *DAT_00011394;
  uVar6 = *(undefined4 *)(*DAT_00011398 + 0x54);
  uVar2 = rga_session_init();
  if (uVar2 < 0xfffff001) {
    uVar3 = rga_request_alloc(0,uVar2);
    if ((int)uVar3 < 0) {
      printk(DAT_0001139c);
      uVar2 = uVar3;
    }
    else {
      memset(auStack_ac,0,0x84);
      local_bc = 0;
      uStack_b8 = 1;
      local_b0 = 0x5017;
      local_c0 = param_1;
      local_b4 = uVar3;
      uVar4 = rga_request_check(&local_c0);
      if ((int)uVar4 < 0) {
        printk(DAT_000113a0);
      }
      else {
        uVar4 = rga_request_kernel_config(&local_c0);
        if (uVar4 < 0xfffff001) {
          if (*DAT_000113ac != 0) {
            printk(DAT_000113b0,local_b4);
            rga_cmd_print_debug_info(param_1);
          }
          uVar3 = rga_request_submit(uVar4);
          if ((int)uVar3 < 0) {
            printk(DAT_000113b4,local_b4);
          }
          mutex_lock(uVar6);
          rga_request_put(uVar4);
          mutex_unlock(uVar6);
          rga_session_deinit(uVar2);
          uVar2 = uVar3;
          goto LAB_000112a4;
        }
        uVar4 = 0xfffffff2;
        printk(DAT_000113a8,local_b4);
      }
      mutex_lock(uVar6);
      rga_request_lookup(uVar6,uVar3);
      iVar5 = IS_ERR_OR_NULL();
      if (iVar5 == 0) {
        rga_request_free(extraout_r3);
        mutex_unlock(uVar6);
        uVar2 = uVar4;
      }
      else {
        printk(DAT_000113a4,uVar3);
        mutex_unlock(uVar6);
        uVar2 = 0xffffffea;
      }
    }
  }
LAB_000112a4:
  if (local_24 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== rga_open @ 000113b8 size=34 ===== */

void rga_open(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r2;
  
  uVar1 = rga_session_init();
  if (uVar1 < 0xfffff001) {
    *(uint *)(param_2 + 0x80) = uVar1;
    nonseekable_open(param_1,param_2,extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== get_order @ 000113da size=16 ===== */

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



/* ===== rga_power_enable @ 000113ea size=150 ===== */

int rga_power_enable(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar2 = 0;
  __pm_runtime_resume(*param_1,4);
  puVar3 = param_1 + 3;
  do {
    if ((int)param_1[0xd] <= iVar2) {
      disableIRQinterrupts();
      param_1[0xf] = param_1[0xf] + 1;
      if (param_1[0xe] == 0) {
        param_1[0xe] = 1;
      }
      return 0;
    }
    uVar5 = *puVar3;
    if (uVar5 < 0xfffff001) {
      iVar1 = clk_prepare(uVar5);
      if (iVar1 == 0) {
        iVar1 = clk_enable(uVar5);
        if (iVar1 == 0) goto LAB_00011464;
        clk_unprepare(uVar5);
      }
      if (iVar1 < 0) {
        puVar3 = param_1 + iVar2 + 2;
        while (puVar3 != param_1 + 2) {
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
    }
LAB_00011464:
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while( true );
}



/* ===== rga_power_enable_all @ 00011480 size=42 ===== */

void rga_power_enable_all(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = DAT_000114b0;
  piVar1 = DAT_000114ac;
  iVar4 = 0;
  while( true ) {
    if (*(int *)(*piVar1 + 0x18) <= iVar4) break;
    iVar3 = rga_power_enable(*(undefined4 *)(*piVar1 + iVar4 * 4 + 0xc));
    if (iVar3 < 0) {
      printk(uVar2);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



/* ===== rga_power_disable @ 000114b4 size=90 ===== */

undefined4
rga_power_disable(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r2;
  int iVar3;
  int extraout_r3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  iVar2 = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  disableIRQinterrupts();
  if ((param_1[0xe] == 0) || (param_1[0xf] == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar3 = param_1[0xf] + -1;
    param_1[0xf] = iVar3;
    if (iVar3 == 0) {
      param_1[0xe] = 0;
    }
    iVar5 = param_1[0xd];
    while (iVar4 = iVar5 + -1, -1 < iVar4) {
      uVar6 = param_1[iVar5 + 2];
      iVar5 = iVar4;
      if (uVar6 < 0xfffff001) {
        clk_disable(uVar6);
        clk_unprepare(uVar6);
        iVar2 = extraout_r2;
        iVar3 = extraout_r3;
      }
    }
    __pm_runtime_suspend(*param_1,4,iVar2,iVar3,param_4);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rga_power_disable_all @ 0001150e size=30 ===== */

void rga_power_disable_all(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_0001152c;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(*piVar2 + 0x18) <= iVar3) break;
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    rga_power_disable(*(undefined4 *)(*piVar2 + iVar1 + 0xc));
  }
  return;
}



/* ===== rga_ioctl @ 00011530 size=968 ===== */

void rga_ioctl(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar9;
  undefined4 extraout_r3;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8 [35];
  uint local_5c;
  char acStack_58 [16];
  int local_48 [3];
  char acStack_3c [16];
  int local_2c;
  int *piVar8;
  
  piVar1 = DAT_000117f0;
  local_2c = *DAT_000117f0;
  local_f4 = 0;
  local_f0 = 0;
  memset(acStack_58,0,0x10);
  uVar13 = *(undefined4 *)(param_1 + 0x80);
  iVar9 = *DAT_000117f4;
  if (iVar9 == 0) {
    iVar10 = -0x13;
    printk(DAT_000117f8);
    goto LAB_00011564;
  }
  if (*DAT_000117fc != 0) {
LAB_00011674:
    iVar10 = 0;
    goto LAB_00011564;
  }
  iVar10 = 0;
  if (param_2 != DAT_00011800) {
    if (param_2 < DAT_00011800) {
      if (0x501a < param_2) {
        if (param_2 == 0x501c) goto LAB_00011564;
        if (param_2 < 0x501c) {
          sscanf((char *)(*(int *)(iVar9 + 0xc) + 0x70),DAT_00011828,&local_f4,&local_f0);
          snprintf(acStack_58,5,DAT_0001182c,local_f4,local_f0);
          iVar9 = _copy_to_user(param_3,acStack_58,0x10);
          if (iVar9 == 0) goto LAB_00011674;
        }
        else {
          if (param_2 != 0x601b) goto LAB_0001159e;
          piVar6 = (int *)(iVar9 + 0xc);
          for (iVar10 = 0; iVar10 < *(int *)(iVar9 + 0x18); iVar10 = iVar10 + 1) {
            if (*(int *)(*piVar6 + 0x54) == DAT_00011808) {
              piVar6 = (int *)(*piVar6 + 0x70);
              uVar13 = 0x10;
              goto LAB_00011686;
            }
            piVar6 = piVar6 + 1;
          }
        }
LAB_000115c2:
        iVar10 = -0xe;
        goto LAB_00011564;
      }
      if (0x5018 < param_2) goto LAB_00011564;
      if (0x5016 < param_2) {
        iVar10 = rga_ioctl_blit(param_3,param_2,uVar13);
        goto LAB_00011564;
      }
LAB_0001159e:
      printk(DAT_00011804);
    }
    else {
      if (param_2 != DAT_0001180c) {
        if (DAT_0001180c <= param_2) {
          if (param_2 == DAT_00011820) {
            uVar13 = 1;
          }
          else {
            if (param_2 != DAT_00011820 + 1) {
              if (param_2 == DAT_00011820 - 0x880003) {
                rga_power_enable_all();
                iVar9 = _copy_from_user(local_e8,param_3,0x10);
                uVar14 = DAT_00011824;
                if (iVar9 == 0) {
                  uVar14 = DAT_00011834;
                  if (0x28 < (uint)local_e8[2]) goto LAB_000116f8;
                  uVar14 = DAT_00011838;
                  if (local_e8[1] != 0 || local_e8[0] != 0) {
                    puVar3 = (undefined4 *)__kmalloc(local_e8[2] * 0x120,0xcc0);
                    if (puVar3 == (undefined4 *)0x0) goto LAB_00011724;
                    uVar14 = DAT_00011844;
                    if ((-1 < local_e8[2] * 0x120) &&
                       (iVar9 = _copy_from_user(puVar3,local_e8[0]), uVar5 = DAT_0001185c,
                       piVar6 = DAT_00011858, uVar14 = DAT_00011844, iVar9 == 0)) {
                      puVar12 = puVar3;
                      for (uVar11 = 0; uVar11 < (uint)local_e8[2]; uVar11 = uVar11 + 1) {
                        if (*piVar6 != 0) {
                          printk(uVar5);
                          rga_dump_external_buffer(puVar12);
                        }
                        iVar10 = rga_mm_import_buffer(puVar12,uVar13);
                        if (iVar10 == 0) {
                          uVar14 = *puVar12;
                          uVar13 = rga_get_memory_type_str(*(undefined1 *)(puVar12 + 2));
                          printk(DAT_00011848,uVar11,uVar14,uVar13,puVar12[2]);
                          goto LAB_000117b0;
                        }
                        puVar12[3] = iVar10;
                        puVar12 = puVar12 + 0x48;
                      }
                      uVar14 = DAT_00011840;
                      if ((-1 < local_e8[2] * 0x120) &&
                         (iVar9 = _copy_to_user(local_e8[0],puVar3), uVar14 = DAT_00011840,
                         iVar9 == 0)) goto LAB_000117b0;
                    }
                    printk(uVar14);
                    iVar10 = -0xe;
                    goto LAB_000117b0;
                  }
                }
                goto LAB_00011630;
              }
              goto LAB_0001159e;
            }
            uVar13 = 0;
          }
          iVar10 = rga_ioctl_request_submit(param_3,uVar13);
          goto LAB_00011564;
        }
        if (param_2 == DAT_00011810) {
          local_48[0] = 1;
          local_48[1] = 2;
          local_48[2] = 0x19;
          strncpy(acStack_3c,DAT_00011830,0x10);
          uVar13 = 0x1c;
          piVar6 = local_48;
        }
        else {
          if (param_2 != DAT_00011810 + 0x740001) {
            if (param_2 == DAT_00011814) {
              iVar9 = _copy_from_user(local_e8,param_3,4);
              uVar14 = DAT_0001181c;
              uVar5 = DAT_00011818;
              if (iVar9 == 0) {
                local_ec = rga_request_alloc(local_e8[0],uVar13);
                iVar9 = _copy_to_user(param_3,&local_ec,4);
                uVar14 = DAT_00011978;
                uVar5 = DAT_00011974;
                if (iVar9 == 0) goto LAB_00011564;
              }
              printk(uVar14,uVar5);
              goto LAB_000115c2;
            }
            goto LAB_0001159e;
          }
          local_5c = *(uint *)(iVar9 + 0x18);
          if (4 < (int)local_5c) {
            local_5c = 5;
          }
          piVar6 = (int *)(iVar9 + 0xc);
          for (uVar11 = 0; uVar11 < local_5c; uVar11 = uVar11 + 1) {
            iVar9 = *piVar6;
            piVar2 = local_e8 + uVar11 * 7;
            piVar7 = (int *)(iVar9 + 100);
            do {
              piVar8 = piVar7 + 1;
              *piVar2 = *piVar7;
              piVar2 = piVar2 + 1;
              piVar7 = piVar8;
            } while (piVar8 != (int *)(iVar9 + 0x80));
            piVar6 = piVar6 + 1;
          }
          uVar13 = 0x90;
          piVar6 = local_e8;
        }
LAB_00011686:
        iVar9 = _copy_to_user(param_3,piVar6,uVar13);
        if (iVar9 == 0) {
          iVar10 = 1;
          goto LAB_00011564;
        }
        goto LAB_000115c2;
      }
      iVar9 = *(int *)(iVar9 + 0x54);
      uVar13 = DAT_0001197c;
      if ((iVar9 == 0) ||
         (iVar4 = _copy_from_user(local_e8,param_3,4), uVar13 = DAT_00011980, iVar4 != 0)) {
        printk(uVar13);
        goto LAB_000115c2;
      }
      if (*DAT_00011984 != 0) {
        printk(DAT_00011988,local_e8[0]);
      }
      mutex_lock(iVar9);
      rga_request_lookup(iVar9,local_e8[0]);
      iVar4 = IS_ERR_OR_NULL();
      if (iVar4 == 0) {
        rga_request_put(extraout_r3);
        mutex_unlock(iVar9);
        goto LAB_00011564;
      }
      printk(DAT_0001198c,local_e8[0]);
      mutex_unlock(iVar9);
    }
    iVar10 = -0x16;
    goto LAB_00011564;
  }
  rga_power_enable_all();
  iVar9 = _copy_from_user(local_e8,param_3,0x10);
  uVar14 = DAT_0001184c;
  if (iVar9 == 0) {
    uVar14 = DAT_00011850;
    if ((uint)local_e8[2] < 0x29) {
      uVar14 = DAT_00011854;
      if (local_e8[1] == 0 && local_e8[0] == 0) goto LAB_00011630;
      puVar3 = (undefined4 *)__kmalloc(local_e8[2] * 0x120,0xcc0);
      if (puVar3 == (undefined4 *)0x0) {
LAB_00011724:
        iVar10 = -0xc;
        printk(DAT_0001183c);
      }
      else {
        if ((local_e8[2] * 0x120 < 0) ||
           (iVar9 = _copy_from_user(puVar3,local_e8[0]), uVar13 = DAT_00011990,
           piVar6 = DAT_00011984, iVar9 != 0)) {
          iVar10 = -0xe;
          printk(DAT_00011970);
        }
        else {
          puVar12 = puVar3;
          for (uVar11 = 0; uVar11 < (uint)local_e8[2]; uVar11 = uVar11 + 1) {
            if (*piVar6 != 0) {
              printk(uVar13,puVar12[3]);
            }
            iVar10 = rga_mm_release_buffer(puVar12[3]);
            if (iVar10 < 0) {
              printk(DAT_0001196c,uVar11,puVar12[3]);
              break;
            }
            puVar12 = puVar12 + 0x48;
          }
        }
LAB_000117b0:
        kfree(puVar3);
      }
    }
    else {
LAB_000116f8:
      printk(uVar14,0x28);
      iVar10 = -0x1b;
    }
  }
  else {
LAB_00011630:
    printk(uVar14);
    iVar10 = -0xe;
  }
  rga_power_disable_all();
LAB_00011564:
  if (local_2c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar10);
}



/* ===== rga_isr_thread @ 00011994 size=60 ===== */

undefined4 rga_isr_thread(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  iVar1 = rga_job_done(param_2);
  if (iVar1 == 0) {
    uVar2 = 1;
    printk(DAT_000119d0);
  }
  else {
    pcVar3 = *(code **)(*(int *)(param_2 + 0x54) + 0x18);
    uVar2 = 0;
    if (pcVar3 != (code *)0x0) {
      uVar2 = (*pcVar3)(iVar1,param_2);
    }
    rga_request_release_signal(param_2,iVar1);
    rga_job_next(param_2);
    rga_power_disable(param_2);
  }
  return uVar2;
}



/* ===== rga_is_rgb_format @ 000119d4 size=38 ===== */

bool rga_is_rgb_format(uint param_1)

{
  if (0x26 < param_1) {
    return param_1 - 0x28 < 8;
  }
  if ((param_1 < 0x24) && (7 < param_1)) {
    return param_1 == 0x16;
  }
  return true;
}



/* ===== rga_is_yuv_format @ 000119fa size=32 ===== */

bool rga_is_yuv_format(int param_1)

{
  if (param_1 - 8U < 0x1c) {
    return (1 << (param_1 - 8U & 0xff) & 0xfff30ffU) != 0;
  }
  return false;
}



/* ===== rga_is_alpha_format @ 00011a1a size=60 ===== */

bool rga_is_alpha_format(uint param_1)

{
  if (param_1 < 0x27) {
    if ((0x24 < param_1) || (param_1 == 3)) {
      return true;
    }
    if (param_1 < 4) {
      return param_1 == 0;
    }
    param_1 = param_1 - 5;
  }
  else {
    if (param_1 < 0x2d) {
      if (0x29 < param_1) {
        return true;
      }
      return param_1 == 0x28;
    }
    param_1 = param_1 - 0x2e;
  }
  return param_1 < 2;
}



/* ===== rga_is_yuv420_packed_format @ 00011a56 size=24 ===== */

bool rga_is_yuv420_packed_format(uint param_1)

{
  if (0x1f < param_1) {
    return false;
  }
  return (1 << (param_1 & 0xff) & 0xaa000000U) != 0;
}



/* ===== rga_is_yuv420_planar_format @ 00011a6e size=18 ===== */

bool rga_is_yuv420_planar_format(int param_1)

{
  if (param_1 != 0xb) {
    return param_1 == 0xf;
  }
  return true;
}



/* ===== rga_is_yuv420_semi_planar_format @ 00011a80 size=26 ===== */

bool rga_is_yuv420_semi_planar_format(int param_1)

{
  if (param_1 - 10U < 0x18) {
    return (DAT_00011a9c & 1 << (param_1 - 10U & 0xff)) != 0;
  }
  return false;
}



/* ===== rga_is_yuv422_packed_format @ 00011aa0 size=24 ===== */

bool rga_is_yuv422_packed_format(uint param_1)

{
  if (0x1e < param_1) {
    return false;
  }
  return (1 << (param_1 & 0xff) & 0x55000000U) != 0;
}



/* ===== rga_is_yuv422_planar_format @ 00011ab8 size=18 ===== */

bool rga_is_yuv422_planar_format(int param_1)

{
  if (param_1 != 9) {
    return param_1 == 0xd;
  }
  return true;
}



/* ===== rga_is_yuv422_semi_planar_format @ 00011aca size=26 ===== */

bool rga_is_yuv422_semi_planar_format(int param_1)

{
  if (0x1b < param_1 - 8U) {
    return false;
  }
  return (1 << (param_1 - 8U & 0xff) & DAT_00011ae4) != 0;
}



/* ===== rga_is_yuv8bit_format @ 00011ae8 size=30 ===== */

bool rga_is_yuv8bit_format(uint param_1)

{
  if (param_1 < 0x20) {
    return (1 << (param_1 & 0xff) & 0xff30ff00U) != 0;
  }
  return false;
}



/* ===== rga_is_yuv10bit_format @ 00011b06 size=12 ===== */

bool rga_is_yuv10bit_format(int param_1)

{
  return param_1 - 0x20U < 4;
}



/* ===== rga_is_yuv422p_format @ 00011b12 size=4 ===== */

bool rga_is_yuv422p_format(int param_1)

{
  if (param_1 != 9) {
    return param_1 == 0xd;
  }
  return true;
}



/* ===== rga_is_only_y_format @ 00011b16 size=12 ===== */

bool rga_is_only_y_format(int param_1)

{
  return param_1 - 0x14U < 2;
}



/* ===== rga_get_format_name @ 00011b22 size=14 ===== */

undefined4 rga_get_format_name(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011b34;
  if (param_1 < 0x31) {
    uVar1 = *(undefined4 *)(DAT_00011b30 + param_1 * 4);
  }
  return uVar1;
}



/* ===== rga_get_format_bits @ 00011b38 size=60 ===== */

undefined4
rga_get_format_bits(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
  case 1:
  case 3:
  case 0x16:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2d:
    uVar1 = 0x20;
    break;
  case 2:
  case 7:
    uVar1 = 0x18;
    break;
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
    uVar1 = 0x10;
    break;
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
    uVar1 = 0xc;
    break;
  case 0x10:
    uVar1 = 1;
    break;
  case 0x11:
    uVar1 = 2;
    break;
  case 0x12:
  case 0x14:
    uVar1 = 4;
    break;
  case 0x13:
  case 0x15:
    uVar1 = 8;
    break;
  default:
    printk(DAT_00011ba4,param_1,param_3,param_4,param_4);
    uVar1 = 0xffffffff;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
    uVar1 = 0xf;
  }
  return uVar1;
}



/* ===== rga_get_pixel_stride_from_format @ 00011ba8 size=48 ===== */

undefined4
rga_get_pixel_stride_from_format
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
  case 1:
  case 3:
  case 0x16:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2d:
    uVar1 = 0x20;
    break;
  case 2:
  case 7:
    uVar1 = 0x18;
    break;
  case 4:
  case 5:
  case 6:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
    uVar1 = 0x10;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
    uVar1 = 8;
    break;
  case 0x14:
    uVar1 = 4;
    break;
  default:
    printk(DAT_00011c08,param_1,param_3,param_4,param_4);
    uVar1 = 0xffffffff;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
    uVar1 = 10;
  }
  return uVar1;
}



/* ===== rga_get_render_mode_str @ 00011c0c size=18 ===== */

undefined4 rga_get_render_mode_str(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011c24;
  if (param_1 < 5) {
    uVar1 = *(undefined4 *)(DAT_00011c20 + param_1 * 4 + 0xc4);
  }
  return uVar1;
}



/* ===== rga_get_rotate_mode_str @ 00011c28 size=18 ===== */

undefined4 rga_get_rotate_mode_str(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011c40;
  if (param_1 < 0x31) {
    uVar1 = *(undefined4 *)(DAT_00011c3c + param_1 * 4 + 0xd8);
  }
  return uVar1;
}



/* ===== rga_get_blend_mode_str @ 00011c44 size=48 ===== */

undefined4 rga_get_blend_mode_str(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return DAT_00011c80;
  }
  if ((param_1 == 9) &&
     ((uVar1 = DAT_00011c78, param_2 == 0x381a || (uVar1 = DAT_00011c7c, param_2 == 0x483a)))) {
    if (param_3 != param_2) {
      uVar1 = DAT_00011c74;
    }
    return uVar1;
  }
  return DAT_00011c74;
}



/* ===== rga_get_memory_type_str @ 00011c84 size=18 ===== */

undefined4 rga_get_memory_type_str(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00011c9c;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(DAT_00011c98 + param_1 * 4 + 0x19c);
  }
  return uVar1;
}



/* ===== rga_get_mmu_type_str @ 00011ca0 size=22 ===== */

undefined4 rga_get_mmu_type_str(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    uVar1 = DAT_00011cb8;
    if (param_1 != 2) {
      uVar1 = DAT_00011cbc;
    }
    return uVar1;
  }
  return DAT_00011cc0;
}



/* ===== rga_convert_addr @ 00011cc4 size=86 ===== */

void rga_convert_addr(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_r2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  if ((*(short *)((int)param_1 + 0x2e) == 2) && (param_2 == 0)) {
    param_1[2] = uVar3;
    param_1[3] = param_1[1];
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    uVar2 = (uint)(ushort)param_1[9] * (uint)*(ushort *)((int)param_1 + 0x26);
    uVar4 = uVar3 + uVar2;
    uVar3 = param_1[1] + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar3,uVar2);
    param_1[2] = uVar4;
    param_1[3] = uVar3;
    iVar1 = rga_is_yuv422_planar_format(param_1[6]);
    if (iVar1 == 0) {
      iVar1 = extraout_r2;
      if (extraout_r2 < 0) {
        iVar1 = extraout_r2 + 3;
      }
      uVar2 = iVar1 >> 2;
    }
    else {
      uVar2 = extraout_r2 / 2;
    }
    param_1[4] = uVar4 + uVar2;
    param_1[5] = uVar3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar4,uVar2);
  }
  return;
}



/* ===== rga_swap_pd_mode @ 00011d1a size=52 ===== */

void rga_swap_pd_mode(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((*(ushort *)(param_1 + 0xd0) & 9) == 9) {
    cVar1 = *(char *)(param_1 + 0x10c);
    if (cVar1 == '\x01') {
      uVar2 = 2;
    }
    else if (cVar1 == '\x02') {
      uVar2 = 1;
    }
    else if (cVar1 == '\x03') {
      uVar2 = 4;
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      uVar2 = 3;
    }
    *(undefined1 *)(param_1 + 0x10c) = uVar2;
  }
  return;
}



/* ===== rga_image_size_cal @ 00011d4e size=106 ===== */

int rga_image_size_cal(int param_1,int param_2,undefined4 param_3,int *param_4,int *param_5,
                      int *param_6)

{
  int iVar1;
  int iVar2;
  
  switch(param_3) {
  case 0:
  case 1:
  case 3:
  case 0x16:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2d:
    param_1 = param_1 * param_2 * 4;
    break;
  case 2:
  case 7:
    param_1 = param_1 * param_2 * 3;
    break;
  case 4:
  case 5:
  case 6:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
    param_1 = param_1 * param_2 * 2;
    break;
  case 8:
  case 0xc:
  case 0x22:
  case 0x23:
    iVar2 = param_1 * param_2;
    goto LAB_00011da8;
  case 9:
  case 0xd:
    iVar1 = param_1 * param_2 >> 1;
    goto LAB_00011dc0;
  case 10:
  case 0xe:
  case 0x20:
  case 0x21:
    iVar2 = param_1 * param_2 >> 1;
LAB_00011da8:
    param_1 = param_1 * param_2;
    iVar1 = 0;
    goto LAB_00011daa;
  case 0xb:
  case 0xf:
    iVar1 = param_1 * param_2 >> 2;
LAB_00011dc0:
    param_1 = param_1 * param_2;
    iVar2 = iVar1;
    goto LAB_00011daa;
  default:
    printk(DAT_00011de8,param_3,param_3,param_4,param_4);
    return -0xe;
  case 0x14:
    param_1 = param_1 * param_2 >> 1;
    break;
  case 0x15:
    param_1 = param_1 * param_2;
  }
  iVar1 = 0;
  iVar2 = 0;
LAB_00011daa:
  if (param_4 != (int *)0x0) {
    *param_4 = param_1;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iVar1;
  }
  return iVar1 + param_1 + iVar2;
}



/* ===== rga_hw_out_of_range @ 00011df0 size=34 ===== */

bool rga_hw_out_of_range(int *param_1,int param_2,int param_3)

{
  if (((param_2 <= param_1[2]) && (param_3 <= param_1[3])) && (*param_1 <= param_2)) {
    return param_3 < param_1[1];
  }
  return true;
}



/* ===== set_win_info @ 00011e12 size=68 ===== */

void set_win_info(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x22);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x1e);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x24);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x26);
  sVar1 = *(short *)(param_2 + 0x2e);
  if (sVar1 == 1) {
    uVar2 = 0;
  }
  else if (sVar1 == 2) {
    uVar2 = 1;
  }
  else {
    if (sVar1 != 4) goto LAB_00011e34;
    uVar2 = 2;
  }
  *(undefined2 *)(param_1 + 0x26) = uVar2;
LAB_00011e34:
  *(ushort *)(param_1 + 0x28) = (ushort)(*(short *)(param_2 + 0x30) != 1);
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_2 + 0x32);
  return;
}



/* ===== rga3_dump_read_back_reg @ 00011e56 size=98 ===== */

void rga3_dump_read_back_reg(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_d0 [48];
  
  memset(auStack_d0,0,0xc0);
  disableIRQinterrupts();
  iVar4 = 0x100;
  puVar2 = auStack_d0;
  do {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
    DataSynchronizationBarrier(0xf);
    iVar4 = iVar4 + 4;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x1c0);
  printk(DAT_00011eb8);
  uVar1 = DAT_00011ebc;
  puVar2 = auStack_d0;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    printk(uVar1,iVar4,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    puVar2 = puVar2 + 4;
    iVar4 = iVar5;
  } while (iVar5 != 0xc);
  return;
}



/* ===== rga_write @ 00011ec0 size=24 ===== */

void rga_write(undefined4 param_1,int param_2,int param_3)

{
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(*(int *)(param_3 + 4) + param_2) = param_1;
  return;
}



/* ===== rga3_soft_reset @ 00011ed8 size=154 ===== */

void rga3_soft_reset(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r6;
  
  iVar2 = DAT_00011f80;
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x48) == 2) {
    unaff_r6 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xf00);
    DataSynchronizationBarrier(0xf);
  }
  rga_write(0x18,0,param_1);
  uVar1 = DAT_00011f74;
  iVar3 = 0;
  do {
    DataSynchronizationBarrier(0xf);
    if ((*(uint *)(*(int *)(param_1 + 4) + 0x30) & 0x3f) != 0) break;
    iVar3 = iVar3 + 1;
    (**(code **)(iVar2 + 4))(uVar1);
  } while (iVar3 != 1000);
  rga_write(0,0,param_1);
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x48) == 2) {
    rga_write(unaff_r6,0xf00,param_1);
    rga_write(0,0xf08,param_1);
  }
  if (iVar3 == 1000) {
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    printk(DAT_00011f78,**(undefined4 **)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 4) + 0x30)
          );
    return;
  }
  printk(DAT_00011f7c);
  return;
}



/* ===== rga3_get_version @ 00011f84 size=64 ===== */

undefined4 rga3_get_version(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    printk(DAT_00011fc4);
    uVar1 = 0xffffffea;
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x18);
    DataSynchronizationBarrier(0xf);
    uVar3 = (uVar2 & 0xfffffff) >> 0x14;
    snprintf((char *)(param_1 + 0x70),10,DAT_00011fc8,uVar2 >> 0x1c,uVar3,uVar2 & 0xfffff,param_3);
    *(uint *)(param_1 + 100) = uVar2 >> 0x1c;
    *(uint *)(param_1 + 0x68) = uVar3;
    *(uint *)(param_1 + 0x6c) = uVar2 & 0xfffff;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rga3_isr_thread @ 00011fcc size=116 ===== */

undefined4 rga3_isr_thread(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_00012040 != 0) {
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    printk(DAT_00012044,*(undefined4 *)(*(int *)(param_2 + 4) + 0x24),
           *(undefined4 *)(*(int *)(param_2 + 4) + 0x34),
           *(undefined4 *)(*(int *)(param_2 + 4) + 0x40));
  }
  if (*(int *)(param_1 + 0x710) << 0x1a < 0) {
    iVar2 = *(int *)(param_1 + 0x714);
    uVar1 = DAT_00012048;
    if ((((iVar2 << 0x1d < 0) || (uVar1 = DAT_0001204c, iVar2 << 0x1a < 0)) ||
        (uVar1 = DAT_00012050, iVar2 << 0x16 < 0)) || (uVar1 = DAT_00012054, iVar2 << 0x10 < 0)) {
      printk(uVar1);
    }
    else {
      if (*(int *)(param_1 + 0x700) != 0) {
        return 1;
      }
      printk(DAT_00012058);
    }
    *(undefined4 *)(param_1 + 0x700) = 0xfffffff2;
  }
  return 1;
}



/* ===== rga3_set_reg @ 0001205c size=388 ===== */

undefined4 rga3_set_reg(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  longlong lVar18;
  
  lVar18 = ktime_get();
  piVar7 = DAT_000121e8;
  iVar10 = *(int *)(*(int *)(param_2 + 0x58) + 0x48);
  if (*DAT_000121e8 != 0) {
    printk(DAT_000121ec);
    iVar12 = param_1;
    iVar14 = 0;
    do {
      puVar13 = (undefined4 *)(iVar12 + 0x214);
      iVar15 = iVar14 + 1;
      puVar1 = (undefined4 *)(iVar12 + 0x210);
      puVar2 = (undefined4 *)(iVar12 + 0x208);
      puVar3 = (undefined4 *)(iVar12 + 0x20c);
      iVar12 = iVar12 + 0x10;
      printk(DAT_000121f0,iVar14,*puVar2,*puVar3,*puVar1,*puVar13);
      iVar14 = iVar15;
    } while (iVar15 != 0xc);
  }
  rga_write(DAT_000121f4,0x20,param_2);
  if (iVar10 == 2) {
    puVar13 = (undefined4 *)(param_1 + 0x208);
    iVar10 = 0x100;
    do {
      iVar12 = iVar10 + 4;
      rga_write(*puVar13,iVar10,param_2);
      puVar13 = puVar13 + 1;
      iVar10 = iVar12;
    } while (iVar12 != 0x1cc);
    uVar8 = 0;
  }
  else {
    rga_dma_sync_flush_range((undefined4 *)(param_1 + 0x208),param_1 + 0x2d0,param_2);
    rga_write(param_1 + -0x7efffdf8,8,param_2);
    rga_write(2,0,param_2);
    uVar8 = 4;
  }
  rga_write(1,uVar8,param_2);
  if (*piVar7 != 0) {
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    printk(DAT_000121f8,**(undefined4 **)(param_2 + 4),*(undefined4 *)(*(int *)(param_2 + 4) + 0x20)
           ,*(undefined4 *)(*(int *)(param_2 + 4) + 0x24));
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    printk(DAT_000121fc,*(undefined4 *)(*(int *)(param_2 + 4) + 0x34),
           *(undefined4 *)(*(int *)(param_2 + 4) + 0x40));
  }
  if (*DAT_00012200 != 0) {
    uVar6 = lVar18 - *(longlong *)(param_1 + 0x6d8);
    iVar10 = (int)(uVar6 >> 0x20);
    uVar5 = uVar6;
    if ((longlong)uVar6 < 0) {
      uVar5 = CONCAT44(-iVar10 - (uint)((int)uVar6 != 0),-(int)uVar6);
    }
    uVar11 = (uint)(uVar5 >> 0x20);
    lVar4 = (ulonglong)DAT_000121e0 * (uVar5 & 0xffffffff);
    uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
    bVar17 = CARRY4((uint)lVar4,DAT_000121e0);
    uVar5 = (ulonglong)DAT_000121e4 * (uVar5 & 0xffffffff) +
            (ulonglong)
            CONCAT14(CARRY4(uVar9,DAT_000121e4) || CARRY4(uVar9 + DAT_000121e4,(uint)bVar17),
                     uVar9 + DAT_000121e4 + (uint)bVar17);
    uVar9 = (uint)(uVar5 >> 0x20);
    uVar16 = (uint)((ulonglong)DAT_000121e0 * (ulonglong)uVar11 + (uVar5 & 0xffffffff) >> 0x20);
    uVar5 = (ulonglong)DAT_000121e4 * (ulonglong)uVar11 +
            (ulonglong)CONCAT14(CARRY4(uVar16,uVar9),uVar16 + uVar9) >> 9;
    if ((longlong)uVar6 < 0) {
      uVar5 = CONCAT44(-(int)(uVar5 >> 0x20) - (uint)((int)uVar5 != 0),-(int)uVar5);
    }
    printk(DAT_00012204,iVar10,(int)uVar5,(int)(uVar5 >> 0x20));
  }
  *(longlong *)(param_1 + 0x6e0) = lVar18;
  iVar10 = *piVar7;
  *(longlong *)(param_1 + 0x6e8) = lVar18;
  if (iVar10 != 0) {
    rga3_dump_read_back_reg(param_2);
  }
  return 0;
}



/* ===== rga3_irq @ 00012208 size=182 ===== */

undefined4 rga3_irq(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 == 0) {
    uVar2 = 1;
  }
  else {
    if (-1 < *(int *)(iVar3 + 0x710) << 0x1a) {
      DataSynchronizationBarrier(0xf);
      *(undefined4 *)(iVar3 + 0x714) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x24);
      DataSynchronizationBarrier(0xf);
      *(undefined4 *)(iVar3 + 0x718) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x34);
      piVar1 = DAT_000122c0;
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x40);
      DataSynchronizationBarrier(0xf);
      *(undefined4 *)(iVar3 + 0x71c) = uVar2;
      if (*piVar1 != 0) {
        printk(DAT_000122c4,*(undefined4 *)(iVar3 + 0x714),*(undefined4 *)(iVar3 + 0x718),uVar2,
               param_4);
      }
      if ((*(uint *)(iVar3 + 0x714) & 9) == 0) {
        if ((DAT_000122cc & *(uint *)(iVar3 + 0x714)) != 0) {
          disableIRQinterrupts();
          *(uint *)(iVar3 + 0x710) = *(uint *)(iVar3 + 0x710) | 0x20;
          printk(DAT_000122d0,*(undefined4 *)(iVar3 + 0x714),*(undefined4 *)(iVar3 + 0x718),
                 *(undefined4 *)(iVar3 + 0x71c),param_4);
          (**(code **)(*(int *)(param_1 + 0x54) + 0xc))(param_1);
        }
      }
      else {
        disableIRQinterrupts();
        *(uint *)(iVar3 + 0x710) = *(uint *)(iVar3 + 0x710) | 8;
      }
      rga_write(DAT_000122c8,0x2c,param_1);
    }
    uVar2 = 2;
  }
  return uVar2;
}



/* ===== rga3_init_reg @ 000122d4 size=4590 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 rga3_init_reg(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte bVar15;
  ushort extraout_r2;
  ushort extraout_r2_00;
  undefined4 *puVar16;
  char *pcVar17;
  uint uVar18;
  undefined2 uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 *puVar23;
  char cVar24;
  int iVar25;
  bool bVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  char local_158 [4];
  undefined4 auStack_154 [13];
  char local_120 [4];
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ushort local_100;
  ushort local_fe;
  ushort local_fc;
  ushort local_fa;
  short local_f8;
  ushort local_f6;
  ushort local_f4;
  ushort local_f2;
  ushort local_f0;
  int local_ec;
  int local_e8;
  undefined4 local_e4;
  uint local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  ushort local_c6;
  ushort local_c4;
  ushort local_c2;
  undefined2 local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint local_a4;
  ushort local_a0;
  ushort local_9e;
  ushort local_9c;
  ushort local_9a;
  short local_98;
  ushort local_96;
  ushort local_94;
  ushort local_92;
  ushort local_90;
  undefined1 local_80;
  byte local_7f;
  undefined2 local_7e;
  undefined4 local_7c;
  uint local_74;
  uint local_70;
  undefined2 local_4e;
  undefined1 local_47;
  undefined2 local_34;
  undefined1 local_32;
  
  iVar27 = *(int *)(param_1 + 8);
  if (iVar27 == 0) {
    uVar3 = rga3_init_reg_part_1();
    return uVar3;
  }
  memset(local_120,0,0xf8);
  switch(*(byte *)(param_1 + 0x124) & 0xf) {
  case 1:
    iVar4 = *(int *)(param_1 + 0xd8);
    if (iVar4 == 0x10000) {
      if (*(int *)(param_1 + 0xdc) == 0) {
        local_7f = 1;
      }
    }
    else if (iVar4 == 0) {
      if (*(int *)(param_1 + 0xdc) == -0x10000) goto switchD_00012304_caseD_4;
    }
    else if ((iVar4 == -0x10000) && (*(int *)(param_1 + 0xdc) == 0)) {
      local_7f = 7;
    }
    break;
  case 2:
    local_7f = 2;
    break;
  case 3:
    local_7f = 4;
    break;
  case 4:
switchD_00012304_caseD_4:
    local_7f = 6;
  }
  bVar15 = *(byte *)(param_1 + 0x124) >> 4;
  if (bVar15 == 3) {
    local_7f = local_7f ^ 4;
  }
  else if (bVar15 == 4) {
    local_7f = local_7f ^ 6;
  }
  else if (bVar15 == 2) {
    local_7f = local_7f ^ 2;
  }
  puVar23 = (undefined4 *)(param_1 + 0x18);
  local_4e = CONCAT11(*(undefined1 *)(param_1 + 0x11d),*(undefined1 *)(param_1 + 0x11d));
  if ((*(ushort *)(param_1 + 0xe0) & 1) == 0) {
    iVar4 = rga_is_alpha_format(*(undefined4 *)(param_1 + 0x30));
    if ((iVar4 == 0) && (iVar4 = rga_is_alpha_format(*(undefined4 *)(param_1 + 0x68)), iVar4 != 0))
    {
      local_4e = 0xffff;
    }
    if ((((int)((uint)*(ushort *)(param_1 + 0xe0) << 0x1f) < 0) || (*(int *)(param_1 + 0x70) != 0))
       || (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x54) &&
           *(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x50))) goto LAB_000124e8;
    iVar4 = rga_is_alpha_format(*(undefined4 *)(param_1 + 0x30));
    if (iVar4 != 0) {
      local_7c = CONCAT22(0xa0a,(ushort)local_7c);
    }
    set_win_info(&local_11c,puVar23);
    local_108 = *(uint *)(param_1 + 0x6c);
    local_11c = *(int *)(param_1 + 0x18);
    local_f8 = 1;
    local_f0 = 1;
    local_118 = *(undefined4 *)(param_1 + 0x20);
    local_c0 = 1;
    local_110 = *(uint *)(param_1 + 0x30);
    local_114 = *(undefined4 *)(param_1 + 0x28);
    local_e0 = *(uint *)(param_1 + 0x68);
    local_ec = *(int *)(param_1 + 0x50);
    local_e8 = *(int *)(param_1 + 0x58);
    local_e4 = *(undefined4 *)(param_1 + 0x60);
  }
  else {
LAB_000124e8:
    iVar4 = rga_is_alpha_format(*(undefined4 *)(param_1 + 0x30));
    if (iVar4 != 0) {
      local_7c = CONCAT22(0xa0a,(ushort)local_7c);
    }
    if (*(int *)(param_1 + 0x8c) != 0 || *(int *)(param_1 + 0x88) != 0) {
      if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x54) &&
          *(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x50)) {
        puVar13 = puVar23;
        puVar16 = (undefined4 *)(param_1 + 0x88);
        do {
          puVar20 = puVar16 + 1;
          *puVar13 = *puVar16;
          puVar13 = puVar13 + 1;
          puVar16 = puVar20;
        } while (puVar20 != (undefined4 *)(param_1 + 0xc0));
        memset((undefined4 *)(param_1 + 0x88),0,0x38);
        *(undefined1 *)(param_1 + 0x120) = 0;
      }
      else {
        if (((uint)*(ushort *)(param_1 + 0x70) + (uint)*(ushort *)(param_1 + 0x34) <=
             (uint)*(ushort *)(param_1 + 0xa4)) &&
           ((uint)*(ushort *)(param_1 + 0x72) + (uint)*(ushort *)(param_1 + 0x36) <=
            (uint)*(ushort *)(param_1 + 0xa6))) goto LAB_00012542;
        pcVar17 = local_158;
        puVar13 = puVar23;
        do {
          puVar16 = puVar13 + 2;
          uVar3 = puVar13[1];
          *(undefined4 *)pcVar17 = *puVar13;
          *(undefined4 *)(pcVar17 + 4) = uVar3;
          pcVar17 = pcVar17 + 8;
          puVar13 = puVar16;
        } while (puVar16 != (undefined4 *)(param_1 + 0x50));
        puVar13 = puVar23;
        puVar16 = (undefined4 *)(param_1 + 0x88);
        do {
          puVar20 = puVar16 + 1;
          *puVar13 = *puVar16;
          puVar13 = puVar13 + 1;
          puVar16 = puVar20;
        } while (puVar20 != (undefined4 *)(param_1 + 0xc0));
        pcVar17 = local_158;
        puVar13 = (undefined4 *)(param_1 + 0x88);
        do {
          uVar3 = *(undefined4 *)pcVar17;
          uVar5 = *(undefined4 *)(pcVar17 + 4);
          pcVar17 = pcVar17 + 8;
          *puVar13 = uVar3;
          puVar13[1] = uVar5;
          puVar13 = puVar13 + 2;
        } while (pcVar17 != local_120);
      }
      rga_swap_pd_mode(param_1 + 0x10);
    }
LAB_00012542:
    set_win_info(&local_bc,puVar23);
    local_bc = *(int *)(param_1 + 0x18);
    local_b8 = *(int *)(param_1 + 0x20);
    local_98 = 1;
    local_90 = 1;
    local_b4 = *(int *)(param_1 + 0x28);
    local_c0 = 1;
    local_ec = *(int *)(param_1 + 0x50);
    local_e8 = *(int *)(param_1 + 0x58);
    local_e4 = *(undefined4 *)(param_1 + 0x60);
    local_b0 = *(uint *)(param_1 + 0x30);
    local_e0 = *(uint *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0x88) == 0 && *(int *)(param_1 + 0x8c) == 0) {
      set_win_info(&local_11c,param_1 + 0x50);
      local_11c = *(int *)(param_1 + 0x50);
      local_118 = *(undefined4 *)(param_1 + 0x58);
      local_114 = *(undefined4 *)(param_1 + 0x60);
      local_110 = *(uint *)(param_1 + 0x68);
      local_f6 = 0;
      local_a8 = *(uint *)(param_1 + 0x6c);
      local_108 = *(uint *)(param_1 + 0x6c);
      local_f0 = extraout_r2_00;
    }
    else {
      set_win_info(&local_11c,param_1 + 0x88);
      local_11c = *(int *)(param_1 + 0x88);
      local_a8 = *(uint *)(param_1 + 0x6c);
      local_118 = *(undefined4 *)(param_1 + 0x90);
      local_114 = *(undefined4 *)(param_1 + 0x98);
      local_110 = *(uint *)(param_1 + 0xa0);
      local_108 = local_a8;
      local_f0 = extraout_r2;
      if (local_104 != 0) {
        local_10c = CONCAT22(local_10c._2_2_ + local_104._2_2_,(short)local_10c + (short)local_104);
        local_108 = CONCAT22(local_104._2_2_ + *(short *)(param_1 + 0x6e),
                             (short)local_104 + *(short *)(param_1 + 0x6c));
        local_104 = 0;
      }
    }
    local_d4 = *(uint *)(param_1 + 0x70);
  }
  local_d8 = local_108;
  local_d0 = *(uint *)(param_1 + 0x74);
  sVar1 = *(short *)(param_1 + 0x7e);
  if (sVar1 == 1) {
    local_c6 = 0;
  }
  else if (sVar1 == 2) {
    local_c6 = 1;
  }
  else if (sVar1 == 4) {
    local_c6 = 2;
  }
  local_c4 = (ushort)(*(short *)(param_1 + 0x80) != 1);
  local_c2 = *(ushort *)(param_1 + 0x82);
  if ((int)((uint)local_7f << 0x1f) < 0) {
    if (local_bc == 0) {
      local_f8 = 1;
      local_108 = CONCAT22(*(undefined2 *)(param_1 + 0x6c),*(undefined2 *)(param_1 + 0x6e));
    }
    else if (local_11c == local_ec) {
      uVar19 = *(undefined2 *)(param_1 + 0x6e);
      uVar2 = *(undefined2 *)(param_1 + 0x6c);
      local_a8 = CONCAT22(uVar2,uVar19);
      local_108 = CONCAT22(uVar2,uVar19);
      local_10c = CONCAT22(uVar2,uVar19);
    }
  }
  uVar12 = (uint)*(ushort *)(param_1 + 0xe0);
  if ((int)(uVar12 << 0x1f) < 0) {
    if ((int)(uVar12 << 0x1c) < 0) {
      switch(*(undefined1 *)(param_1 + 0x11c)) {
      case 1:
        local_7c = DAT_000129cc;
        break;
      case 2:
        local_7c = DAT_000129d0;
        break;
      case 3:
        bVar15 = *(byte *)(param_1 + 0x140) & 3;
        if ((*(byte *)(param_1 + 0x140) & 3) == 0) {
          uVar19 = 0x3010;
        }
        else if (bVar15 == 1) {
          uVar19 = 0x3212;
        }
        else {
          uVar19 = 0x3014;
          if (bVar15 != 2) {
            uVar19 = 0x3012;
          }
        }
        local_7c = CONCAT22(uVar19,uVar19);
        break;
      case 4:
        local_7c = DAT_000129d4;
        break;
      case 9:
        local_7c = DAT_000129d8;
        break;
      case 0xc:
        local_7c = DAT_000129dc;
      }
      if ((int)(uVar12 << 0x16) < 0) {
        if ((int)(local_7c << 0x1e) < 0) {
          local_7c = local_7c | 0x80;
        }
        if ((int)(local_7c << 0x16) < 0) {
          local_7c = CONCAT22(local_7c._2_2_,~((ushort)~(ushort)((local_7c << 0x11) >> 0x10) >> 1));
        }
      }
    }
    else {
      bVar15 = *(byte *)(param_1 + 0x140) & 3;
      uVar12 = DAT_000129d8;
      if ((((*(byte *)(param_1 + 0x140) & 3) == 0) || (uVar12 = DAT_000129e0, bVar15 == 1)) ||
         (uVar12 = DAT_000129e4, bVar15 == 2)) {
        local_7c = uVar12;
      }
    }
  }
  bVar15 = *(byte *)(param_1 + 0x122);
  if (bVar15 == 1) {
    local_fc = 0;
    local_9c = local_fc;
  }
  else if (bVar15 == 2) {
    local_fc = 2;
    local_9c = local_fc;
  }
  else if (bVar15 == 3) {
    local_fc = 1;
    local_9c = local_fc;
  }
  bVar15 = bVar15 >> 2;
  if (bVar15 == 2) {
    local_fa = 0;
    local_9a = local_fa;
  }
  else if (bVar15 == 1) {
    local_fa = 2;
    local_9a = local_fa;
  }
  else if (bVar15 == 3) {
    local_fa = 1;
    local_9a = local_fa;
  }
  uVar12 = *(uint *)(param_1 + 0xe8);
  local_70 = uVar12 >> 6 & 0x3fc | uVar12 >> 4 & 0xff000 | (uVar12 & 0xff) << 0x16;
  uVar12 = *(uint *)(param_1 + 0xe4);
  local_74 = uVar12 >> 6 & 0x3fc | uVar12 >> 4 & 0xff000 | (uVar12 & 0xff) << 0x16;
  if ((*(char *)(param_1 + 0x128) != '\0') && (*(int *)(param_1 + 0x138) << 0x1f < 0)) {
    local_34 = 0x101;
    local_32 = 1;
  }
  iVar4 = *(int *)(iVar27 + 0x58);
  uVar12 = local_10c >> 0x10;
  uVar28 = local_10c & 0xffff;
  iVar25 = iVar4 + 0x10;
  iVar27 = rga_hw_out_of_range(iVar25,uVar28,uVar12);
  local_180 = local_104 & 0xffff;
  uVar30 = local_108 & 0xffff;
  uVar29 = local_108 >> 0x10;
  uVar22 = local_104 >> 0x10;
  uVar3 = DAT_000129e8;
  if (((iVar27 != 0) ||
      (iVar27 = rga_hw_out_of_range(iVar25,uVar30,uVar29), uVar3 = DAT_000129e8, iVar27 != 0)) ||
     (iVar27 = rga_hw_out_of_range(iVar25,uVar28 + local_180,uVar12 + uVar22), uVar3 = DAT_000129e8,
     iVar27 != 0)) {
LAB_00012852:
    printk(uVar3,uVar28,uVar12,uVar30,uVar29,local_180,uVar22);
    goto LAB_000128b8;
  }
  uVar12 = (uint)local_100;
  iVar27 = rga_get_pixel_stride_from_format(local_110);
  if ((uint)(*(int *)(iVar4 + 0x3c) * 8) <= uVar12 * iVar27 &&
      uVar12 * iVar27 + *(int *)(iVar4 + 0x3c) * -8 != 0) {
    uVar5 = rga_get_pixel_stride_from_format(local_110);
    uVar21 = *(undefined4 *)(iVar4 + 0x3c);
    uVar3 = DAT_000129ec;
    uVar11 = local_100;
LAB_00012896:
    printk(uVar3,uVar11,uVar5,uVar21);
LAB_000128b8:
    printk(DAT_000129f4);
    return 0xffffffea;
  }
  iVar27 = rga_hw_out_of_range(iVar4 + 0x20,local_d8 & 0xffff,local_d8._2_2_);
  if (iVar27 != 0) {
    printk(DAT_000129f0);
    goto LAB_000128b8;
  }
  uVar12 = local_d0 & 0xffff;
  iVar27 = rga_get_pixel_stride_from_format(local_e0);
  uVar12 = uVar12 * iVar27;
  if ((uint)(*(int *)(iVar4 + 0x3c) * 8) <= uVar12 && uVar12 + *(int *)(iVar4 + 0x3c) * -8 != 0) {
    uVar11 = (ushort)local_d0;
    uVar5 = rga_get_pixel_stride_from_format(local_e0);
    uVar21 = *(undefined4 *)(iVar4 + 0x3c);
    uVar3 = DAT_000129f8;
    goto LAB_00012896;
  }
  if (local_bc != 0) {
    uVar28 = local_ac & 0xffff;
    uVar12 = local_ac >> 0x10;
    iVar27 = rga_hw_out_of_range(iVar25,uVar28,uVar12);
    local_180 = local_a4 & 0xffff;
    uVar30 = local_a8 & 0xffff;
    uVar29 = local_a8 >> 0x10;
    uVar22 = local_a4 >> 0x10;
    uVar3 = DAT_000129fc;
    if (((iVar27 != 0) ||
        (iVar27 = rga_hw_out_of_range(iVar25,uVar30,uVar29), uVar3 = DAT_000129fc, iVar27 != 0)) ||
       (iVar27 = rga_hw_out_of_range(iVar25,uVar28 + local_180,uVar12 + uVar22),
       uVar3 = DAT_000129fc, iVar27 != 0)) goto LAB_00012852;
    uVar12 = (uint)local_a0;
    iVar27 = rga_get_pixel_stride_from_format(local_b0);
    if ((uint)(*(int *)(iVar4 + 0x3c) * 8) <= uVar12 * iVar27 &&
        uVar12 * iVar27 + *(int *)(iVar4 + 0x3c) * -8 != 0) {
      uVar5 = rga_get_pixel_stride_from_format(local_b0);
      uVar21 = *(undefined4 *)(iVar4 + 0x3c);
      uVar3 = DAT_00012a00;
      uVar11 = local_a0;
      goto LAB_00012896;
    }
    if (local_7f == 0) {
      if (((local_108 & 0xffff) < (local_a8 & 0xffff)) || (local_108 >> 0x10 < local_a8 >> 0x10)) {
        printk(DAT_00012a04);
        goto LAB_000128b8;
      }
    }
  }
  uVar3 = DAT_00012a08;
  if (((((local_108 & 0xffff) < (local_10c >> 3 & 0x1fff)) ||
       (local_108._2_2_ < local_10c._2_2_ >> 3)) ||
      (uVar3 = DAT_00012a0c, (local_10c & 0xffff) < (local_108 >> 3 & 0x1fff))) ||
     (local_10c._2_2_ < local_108._2_2_ >> 3)) {
LAB_000129b6:
    printk(uVar3);
    goto LAB_000128b8;
  }
  if (local_bc != 0) {
    uVar3 = DAT_00012d70;
    if ((((local_a8 & 0xffff) < (local_ac >> 3 & 0x1fff)) || (local_a8._2_2_ < local_ac._2_2_ >> 3))
       || ((uVar3 = DAT_00012d74, (local_ac & 0xffff) < (local_a8 >> 3 & 0x1fff) ||
           (local_ac._2_2_ < local_a8._2_2_ >> 3)))) goto LAB_000129b6;
  }
  iVar27 = rga_is_yuv10bit_format(local_110);
  if ((iVar27 != 0) &&
     ((((((local_100 & 0x3f) != 0 || (local_104 & 3) != 0) || (local_10c & 3) != 0) ||
       (local_104 & 0x30000) != 0) || (local_10c & 0x30000) != 0) || (local_fe & 1) != 0)) {
    printk(DAT_00012dc4);
  }
  iVar27 = rga_is_yuv10bit_format(local_b0);
  if ((iVar27 != 0) &&
     ((((((local_a0 & 0x3f) != 0 || (local_a4 & 3) != 0) || (local_ac & 3) != 0) ||
       (local_a4 & 0x30000) != 0) || (local_ac & 0x30000) != 0) || (local_9e & 1) != 0)) {
    printk(DAT_00012d78);
  }
  iVar27 = rga_is_yuv8bit_format(local_110);
  if ((iVar27 != 0) &&
     ((((((local_100 & 0xf) != 0 || (local_104 & 1) != 0) || (local_10c & 1) != 0) ||
       (local_104 & 0x10000) != 0) || (local_10c & 0x10000) != 0) || (local_fe & 1) != 0)) {
    printk(DAT_00012d7c);
  }
  iVar27 = rga_is_yuv8bit_format(local_b0);
  if ((iVar27 != 0) &&
     ((((((local_a0 & 0xf) != 0 || (local_a4 & 1) != 0) || (local_ac & 1) != 0) ||
       (local_a4 & 0x10000) != 0) || (local_ac & 0x10000) != 0) || (local_9e & 1) != 0)) {
    printk(DAT_00012d80);
  }
  if (*DAT_00012d84 != 0) {
    uVar3 = rga_get_render_mode_str(local_120[0]);
    printk(DAT_00012d88,uVar3,local_80,local_7f);
    printk(DAT_00012d8c,local_11c,local_118,local_114,local_10c & 0xffff,local_10c >> 0x10);
    uVar11 = local_100;
    uVar29 = local_104 & 0xffff;
    uVar12 = local_104 >> 0x10;
    uVar3 = rga_get_format_name(local_110);
    printk(DAT_00012d90,uVar11,local_fe,uVar29,uVar12,uVar3);
    printk(DAT_00012d94,local_108 & 0xffff,local_108._2_2_,local_f6);
    printk(DAT_00012d98,local_f8,local_f0,local_f4,local_f2);
    if ((local_bc != 0 || local_b8 != 0) || local_b4 != 0) {
      printk(DAT_00012d9c);
      uVar11 = local_a0;
      uVar29 = local_a4 & 0xffff;
      uVar12 = local_a4 >> 0x10;
      uVar3 = rga_get_format_name(local_b0);
      printk(DAT_00012da0,uVar11,local_9e,uVar29,uVar12,uVar3);
      printk(DAT_00012da4,local_a8 & 0xffff,local_a8._2_2_,local_96);
      printk(DAT_00012da8,local_98,local_90,local_94,local_92);
    }
    printk(DAT_00012dac,local_ec,local_e8,local_e4,local_d0 & 0xffff,local_d0 >> 0x10);
    uVar12 = local_d4 & 0xffff;
    uVar19 = local_d4._2_2_;
    uVar3 = rga_get_format_name(local_e0);
    printk(DAT_00012db0,uVar12,uVar19,uVar3,local_c6);
    printk(DAT_00012db4,(undefined1)local_34,local_34._1_1_,local_32);
    printk(DAT_00012db8,local_7e,local_7c & 0xffff,local_7c._2_2_);
    uVar3 = rga_get_blend_mode_str(local_7e,local_7c & 0xffff,local_7c._2_2_);
    printk(DAT_00012dbc,uVar3);
    printk(DAT_00012dc0,local_47);
  }
  if (local_120[0] != '\0') {
    printk(DAT_000135a4,local_120[0]);
    return 0;
  }
  if (local_f8 == 0) {
    local_174 = 0;
    local_164 = 0;
    local_160 = 0;
  }
  else {
    uVar12 = (uint)local_7f;
    local_174 = uVar12 & 1;
    local_164 = (uVar12 & 3) >> 1;
    local_160 = (uVar12 & 7) >> 2;
  }
  uVar28 = local_108 & 0xffff;
  uVar12 = local_108 >> 0x10;
  uVar29 = local_10c >> 0x10;
  uVar22 = local_10c & 0xffff;
  if (local_174 == 0) {
    uVar29 = local_10c & 0xffff;
    uVar22 = local_10c >> 0x10;
  }
  if (uVar28 < uVar29) {
    if (uVar12 < uVar22) {
      uVar30 = 0;
      bVar26 = false;
    }
    else if (uVar22 < uVar12) {
      bVar26 = false;
      uVar30 = 1;
    }
    else {
      uVar30 = 0;
      bVar26 = true;
    }
    iVar27 = 0;
    iVar4 = __aeabi_uidiv((uVar28 + 0xffff) * 0x10000,uVar29 - 1);
    local_180 = iVar4 + 1;
LAB_00012de2:
    if (bVar26) {
      iVar4 = 0;
      iVar25 = iVar27;
      if (uVar30 == 0) goto LAB_00013526;
    }
    else if (uVar30 != 0) {
      iVar4 = 0;
LAB_00012e18:
      uVar31 = __aeabi_uidivmod((uVar22 + 0xffff) * 0x10000,uVar12 - 1);
      iVar6 = (int)uVar31;
      if ((int)((ulonglong)uVar31 >> 0x20) == 0) {
        iVar6 = iVar6 + -1;
        local_17c = 0;
      }
      else {
        local_17c = 0;
      }
      goto LAB_00012e36;
    }
    iVar4 = 0;
    local_17c = uVar30;
LAB_00012df6:
    iVar6 = __aeabi_uidiv((uVar12 + 0xffff) * 0x10000,uVar22 - 1);
    iVar6 = iVar6 + 1;
    uVar30 = local_17c;
  }
  else {
    if (uVar29 < uVar28) {
      if (uVar12 < uVar22) {
        uVar30 = 0;
        bVar26 = false;
      }
      else if (uVar12 == uVar22) {
        uVar30 = 0;
        bVar26 = true;
      }
      else {
        bVar26 = false;
        uVar30 = 1;
      }
      uVar31 = __aeabi_uidivmod((uVar29 + 0xffff) * 0x10000,uVar28 - 1);
      local_180 = (uint)uVar31;
      if ((int)((ulonglong)uVar31 >> 0x20) == 0) {
        local_180 = local_180 - 1;
      }
      iVar27 = 1;
      goto LAB_00012de2;
    }
    if (uVar12 < uVar22) {
      iVar27 = 0;
      iVar4 = 1;
      local_17c = 0;
      local_180 = 0;
      goto LAB_00012df6;
    }
    iVar27 = 0;
    iVar25 = 0;
    if (uVar22 < uVar12) {
      iVar4 = 1;
      local_180 = 0;
      uVar30 = 1;
      goto LAB_00012e18;
    }
    uVar30 = 0;
    iVar4 = 1;
    local_180 = 0;
LAB_00013526:
    iVar6 = 0;
    local_17c = 1;
    iVar27 = iVar25;
  }
LAB_00012e36:
  if (local_110 < 0x2d) {
    iVar25 = DAT_0001309c + local_110;
    local_170 = (uint)*(byte *)(iVar25 + 0xe);
    uVar12 = (uint)*(byte *)(iVar25 + 0x95);
    cVar24 = *(char *)(iVar25 + 0xef);
    local_168 = (uint)*(byte *)(iVar25 + 0x3b);
    local_16c = (uint)*(byte *)(iVar25 + 0x68);
    local_178 = (uint)*(byte *)(iVar25 + 0xc2);
  }
  else {
    uVar12 = 1;
    cVar24 = '\0';
    local_178 = 1;
    local_16c = 0;
    local_168 = 0;
    local_170 = 0;
  }
  iVar7 = rga_is_rgb_format();
  iVar25 = 0;
  if (iVar7 != 0) {
    iVar25 = rga_is_yuv_format(local_e0);
  }
  iVar8 = rga_is_yuv_format(local_110);
  iVar7 = 0;
  if (iVar8 != 0) {
    iVar7 = rga_is_rgb_format(local_e0);
  }
  uVar12 = local_16c << 0xc | local_170 << 4 | local_168 << 0xd | uVar12 << 8 | iVar25 << 0x19 |
           iVar7 << 0x18;
  uVar11 = local_fa;
  if ((iVar25 == 1) || (uVar11 = local_fc, iVar7 == 1)) {
    uVar12 = uVar12 | (uVar11 & 3) << 0x1a;
  }
  if (local_f8 == 1) {
    uVar12 = uVar12 | local_164 << 0x11 | local_174 << 0x10 | local_160 << 0x12;
  }
  uVar29 = (uint)local_f6;
  *(uint *)(param_1 + 0x23c) = local_180 | iVar6 << 0x10;
  uVar12 = (uVar29 & 3) << 1 | local_f0 & 1 | iVar4 << 0x14 | iVar27 << 0x15 | local_17c << 0x16 |
           uVar30 << 0x17 | uVar12;
  uVar22 = uVar12 | 0x400;
  if ((uVar29 == 1) && (cVar24 == '\x01')) {
    uVar22 = (local_f4 & 1) << 10 | (local_f2 & 1) << 0xb | uVar12;
  }
  *(uint *)(param_1 + 0x208) = uVar22;
  if (uVar29 == 1) {
    local_178 = (uint)local_100;
LAB_00013022:
    uVar29 = (int)(local_178 + 0xf) >> 2 & 0xfffffffc;
    iVar27 = rga_is_yuv420_semi_planar_format(local_110);
    uVar12 = uVar29;
    if (iVar27 != 0) {
      uVar12 = (int)(local_100 + 0xf) >> 2 & 0xfffffffc;
    }
  }
  else {
    if (uVar29 == 0) {
      local_178 = local_100 * local_178;
      goto LAB_00013022;
    }
    if (uVar29 == 2) {
      uVar29 = (int)(local_100 * local_178 * 8 + 0xf) >> 2 & 0xfffffffc;
      iVar27 = rga_is_yuv420_semi_planar_format(local_110);
      uVar12 = uVar29;
      if (iVar27 != 0) {
        uVar12 = (int)((uint)local_100 * 8 + 0xf) >> 3 & 0xfffffffe;
      }
    }
    else {
      uVar29 = 0;
      uVar12 = 0;
    }
  }
  *(uint *)(param_1 + 0x240) = uVar12;
  *(int *)(param_1 + 0x218) = local_11c;
  *(undefined4 *)(param_1 + 0x21c) = local_118;
  *(undefined4 *)(param_1 + 0x220) = local_114;
  *(uint *)(param_1 + 0x224) = uVar29;
  *(uint *)(param_1 + 0x230) = local_104;
  *(uint *)(param_1 + 0x22c) =
       (local_10c & 0xffff) + (local_104 & 0xffff) |
       ((local_10c >> 0x10) + (local_104 >> 0x10)) * 0x10000;
  *(uint *)(param_1 + 0x234) = local_10c;
  *(uint *)(param_1 + 0x238) = local_108;
  if (local_98 == 0) {
    local_17c = 0;
    local_174 = 0;
    local_160 = 0;
  }
  else {
    uVar12 = (uint)local_7f;
    local_174 = uVar12 & 1;
    local_160 = (uVar12 & 3) >> 1;
    local_17c = (uVar12 & 7) >> 2;
  }
  uVar28 = local_a8 & 0xffff;
  uVar12 = local_a8 >> 0x10;
  uVar29 = local_ac >> 0x10;
  uVar22 = local_ac & 0xffff;
  if (local_174 == 0) {
    uVar29 = local_ac & 0xffff;
    uVar22 = local_ac >> 0x10;
  }
  if (uVar28 < uVar29) {
    iVar27 = 0;
LAB_00013532:
    if (uVar12 < uVar22) {
      iVar4 = 0;
      iVar25 = 0;
    }
    else if (uVar22 < uVar12) {
      iVar25 = 0;
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
      iVar25 = 1;
    }
    if (iVar27 == 0) {
      iVar6 = __aeabi_uidiv((uVar28 + 0xffff) * 0x10000,uVar29 - 1);
      uVar29 = iVar6 + 1;
    }
    else {
      uVar31 = __aeabi_uidivmod((uVar29 + 0xffff) * 0x10000,uVar28 - 1);
      uVar29 = (uint)uVar31;
      if ((int)((ulonglong)uVar31 >> 0x20) == 0) {
        uVar29 = uVar29 - 1;
      }
    }
    if (iVar25 == 1) {
      iVar25 = 0;
      iVar6 = 1;
      iVar7 = iVar25;
    }
    else {
      iVar6 = 0;
      if (iVar4 == 0) goto LAB_000130a8;
LAB_00013566:
      uVar31 = __aeabi_uidivmod((uVar22 + 0xffff) * 0x10000,uVar12 - 1);
      iVar7 = (int)uVar31;
      if ((int)((ulonglong)uVar31 >> 0x20) == 0) {
        iVar7 = iVar7 + -1;
      }
      iVar6 = 0;
      iVar4 = 1;
    }
  }
  else {
    if (uVar29 < uVar28) {
      iVar27 = 1;
      goto LAB_00013532;
    }
    if (uVar12 < uVar22) {
      iVar27 = 0;
      uVar29 = 0;
      iVar6 = 1;
LAB_000130a8:
      iVar25 = iVar6;
      iVar6 = 0;
      iVar4 = 0;
      iVar7 = __aeabi_uidiv((uVar12 + 0xffff) * 0x10000,uVar22 - 1);
      iVar7 = iVar7 + 1;
    }
    else {
      iVar27 = 0;
      if (uVar22 < uVar12) {
        iVar25 = 1;
        uVar29 = 0;
        goto LAB_00013566;
      }
      iVar6 = 1;
      iVar4 = 0;
      iVar25 = 1;
      uVar29 = 0;
      iVar7 = 0;
    }
  }
  if (local_b0 < 0x2d) {
    local_170 = (uint)*(byte *)(DAT_000133ec + local_b0);
    local_168 = (uint)*(byte *)(DAT_000133f0 + local_b0);
    local_16c = (uint)*(byte *)(DAT_000133f4 + local_b0);
    local_164 = (uint)*(byte *)(DAT_000133f8 + local_b0);
    local_178 = (uint)*(byte *)(DAT_000133fc + local_b0);
    cVar24 = *(char *)(DAT_00013400 + local_b0);
  }
  else {
    cVar24 = '\0';
    local_16c = 0;
    local_168 = 0;
    local_170 = 0;
    local_178 = 1;
    local_164 = 1;
  }
  iVar9 = rga_is_rgb_format();
  iVar8 = 0;
  if (iVar9 != 0) {
    iVar8 = rga_is_yuv_format(local_e0);
  }
  iVar10 = rga_is_yuv_format(local_b0);
  iVar9 = 0;
  if (iVar10 != 0) {
    iVar9 = rga_is_rgb_format(local_e0);
  }
  uVar12 = local_16c << 0xc | local_170 << 4 | local_168 << 0xd | local_164 << 8 | iVar8 << 0x19 |
           iVar9 << 0x18;
  uVar11 = local_9a;
  if ((iVar8 == 1) || (uVar11 = local_9c, iVar9 == 1)) {
    uVar12 = uVar12 | (uVar11 & 3) << 0x1a;
  }
  *(uint *)(param_1 + 0x27c) = uVar29 | iVar7 << 0x10;
  uVar29 = (uint)local_96;
  uVar12 = local_160 << 0x11 | local_174 << 0x10 | local_17c << 0x12 | iVar25 << 0x14 |
           iVar27 << 0x15 | iVar6 << 0x16 | iVar4 << 0x17 | uVar12;
  uVar22 = uVar12 | 0x400;
  if ((uVar29 == 1) && (cVar24 == '\x01')) {
    uVar22 = (local_94 & 1) << 10 | (local_92 & 1) << 0xb | uVar12;
  }
  *(uint *)(param_1 + 0x248) = uVar22 | (uVar29 & 3) << 1 | local_90 & 1;
  if (uVar29 == 1) {
    local_178 = (uint)local_a0;
LAB_000133c6:
    uVar29 = (int)(local_178 + 0xf) >> 2 & 0xfffffffc;
    iVar27 = rga_is_yuv420_semi_planar_format(local_b0);
    uVar12 = uVar29;
    if (iVar27 != 0) {
      uVar12 = (int)(local_a0 + 0xf) >> 2 & 0xfffffffc;
    }
  }
  else {
    if (uVar29 == 0) {
      local_178 = local_a0 * local_178;
      goto LAB_000133c6;
    }
    if (uVar29 == 2) {
      uVar29 = (int)(local_a0 * local_178 * 8 + 0xf) >> 2 & 0xfffffffc;
      iVar27 = rga_is_yuv420_semi_planar_format(local_b0);
      uVar12 = uVar29;
      if (iVar27 != 0) {
        uVar12 = (int)((uint)local_a0 * 8 + 0xf) >> 3 & 0xfffffffe;
      }
    }
    else {
      uVar29 = 0;
      uVar12 = 0;
    }
  }
  *(uint *)(param_1 + 0x280) = uVar12;
  *(int *)(param_1 + 600) = local_bc;
  *(int *)(param_1 + 0x25c) = local_b8;
  *(int *)(param_1 + 0x260) = local_b4;
  *(uint *)(param_1 + 0x264) = uVar29;
  *(uint *)(param_1 + 0x270) = local_a4;
  *(uint *)(param_1 + 0x26c) =
       (local_ac & 0xffff) + (local_a4 & 0xffff) |
       ((local_ac >> 0x10) + (local_a4 >> 0x10)) * 0x10000;
  *(uint *)(param_1 + 0x274) = local_ac;
  *(uint *)(param_1 + 0x278) = local_a8;
  *(uint *)(param_1 + 0x298) =
       (local_7c & 0xff) >> 7 | (uint)local_4e._1_1_ << 0x10 | (local_7c & 1) << 1 |
       (local_7c & 6) << 1 | (local_7c & 8) << 1 | (local_7c & 0x70) << 1;
  *(uint *)(param_1 + 0x29c) =
       (ushort)local_7c >> 7 & 0xe0 |
       (uint)CONCAT12((undefined1)local_4e,(ushort)local_7c >> 0xf) | (ushort)local_7c >> 7 & 2 |
       (ushort)local_7c >> 7 & 0xc | (ushort)local_7c >> 7 & 0x10;
  *(uint *)(param_1 + 0x2a0) = (local_7c._2_2_ & 0x7f) << 1;
  *(uint *)(param_1 + 0x2a4) =
       local_7c._2_2_ >> 7 & 0xe0 |
       local_7c._2_2_ >> 7 & 0x10 | local_7c._2_2_ >> 7 & 0xc | local_7c._2_2_ >> 7 & 2;
  uVar12 = 0;
  if (local_70 != 0 || local_74 != 0) {
    *(uint *)(param_1 + 0x290) = local_70;
    *(uint *)(param_1 + 0x294) = local_74;
    uVar12 = 0x20;
  }
  if (local_11c == local_ec) {
    uVar12 = uVar12 | 1;
  }
  iVar27 = rga_is_yuv_format(local_e0);
  if (iVar27 != 0) {
    uVar12 = uVar12 | 4;
  }
  if ((local_7c._2_2_ != 0) && ((ushort)local_7c != 0)) {
    uVar12 = uVar12 | 0x10;
  }
  *(uint *)(param_1 + 0x288) = uVar12;
  *(uint *)(param_1 + 0x28c) = local_d4;
  if (local_e0 < 0x25) {
    iVar27 = DAT_00013404 + local_e0;
    uVar12 = (uint)*(byte *)(iVar27 + 0x11c);
    uVar30 = (uint)*(byte *)(iVar27 + 0x166);
    uVar18 = (uint)*(byte *)(iVar27 + 0x1d5);
    uVar29 = (uint)*(byte *)(iVar27 + 0x18b);
    uVar22 = (uint)*(byte *)(iVar27 + 0x1b0);
    uVar28 = (uint)*(byte *)(iVar27 + 0x141);
  }
  else {
    uVar30 = 0;
    uVar18 = 1;
    uVar12 = 0;
    uVar29 = uVar18;
    uVar22 = uVar30;
    uVar28 = uVar30;
  }
  uVar14 = (uint)local_c6;
  uVar28 = uVar30 << 0xc | uVar12 << 4 | uVar28 << 0x14 | uVar18 << 8;
  uVar30 = uVar28 | 0x1e404;
  if ((uVar14 == 0) && (uVar22 == 1)) {
    uVar30 = (local_c4 & 1) << 10 | (local_c2 & 1) << 0xb | uVar28 | 0x1e004;
  }
  *(uint *)(param_1 + 0x2a8) = uVar30 | uVar14 & 3;
  uVar22 = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  if (uVar14 == 1) {
    uVar29 = (local_d0 & 0xffff) + 0xf;
    uVar28 = (int)uVar29 >> 2 & 0xfffffffc;
    if (uVar12 == 6) {
      uVar22 = uVar29 & 0xfffffff0;
    }
    else if (uVar12 == 5) {
      uVar22 = uVar28 * 3;
    }
    else if ((uVar12 == 4) || (uVar12 - 1 < 2)) {
      uVar22 = (int)uVar29 >> 1 & 0xfffffff8;
    }
    else if (uVar12 == 0) {
      uVar22 = ((int)uVar29 >> 3 & 0xfffffffeU) * 3;
    }
    else if (uVar12 == 3) {
      uVar22 = ((int)uVar29 >> 3 & 0xfffffffeU) * 5;
    }
    local_e8 = local_e8 + (((local_d0 >> 0x10) + 0xf & 0xfffffff0) * uVar28 >> 2);
  }
  else if (uVar14 == 0) {
    uVar28 = (int)((local_d0 & 0xffff) * uVar29 + 0xf) >> 2 & 0xfffffffc;
    uVar22 = (int)((local_d0 & 0xffff) + 0xf) >> 2 & 0xfffffffc;
  }
  else {
    if (uVar14 != 2) {
      uVar28 = 0;
      goto LAB_0001337e;
    }
    uVar28 = (int)((local_d0 & 0xffff) * uVar29 * 8 + 0xf) >> 2 & 0xfffffffc;
    iVar27 = rga_is_yuv420_semi_planar_format(local_110);
    uVar22 = uVar28;
    if (iVar27 != 0) {
      uVar22 = (int)((local_d0 & 0xffff) * 8 + 0xf) >> 3 & 0xfffffffe;
    }
  }
  *(int *)(param_1 + 700) = local_e8;
LAB_0001337e:
  *(uint *)(param_1 + 0x2b0) = uVar28;
  *(uint *)(param_1 + 0x2b4) = uVar22;
  *(int *)(param_1 + 0x2b8) = local_ec;
  *(undefined4 *)(param_1 + 0x2c0) = local_e4;
  return 0;
}



/* ===== __virt_to_phys_nodebug @ 000135a8 size=6 ===== */

int __virt_to_phys_nodebug(int param_1)

{
  return param_1 + -0x7f000000;
}



/* ===== kmap @ 000135ae size=30 ===== */

int kmap(int param_1)

{
  _cond_resched();
  return (*DAT_000135d0 + (param_1 - *DAT_000135cc >> 5)) * 0x1000 + 0x7f000000;
}



/* ===== get_order @ 000135d4 size=16 ===== */

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



/* ===== rga_user_memory_check @ 000135e4 size=102 ===== */

undefined4 rga_user_memory_check(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = rga_get_format_bits(param_4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = iVar1 * param_2 * param_3;
    if ((uVar3 & 0x7fff) >> 3 == 0) {
      iVar1 = kmap(*(undefined4 *)(param_1 + ((uVar3 >> 0xf) + 0x3fffffff) * 4));
      puVar4 = (undefined4 *)(iVar1 + 0xffc);
    }
    else {
      iVar1 = kmap(*(undefined4 *)(param_1 + (uVar3 >> 0xf) * 4));
      puVar4 = (undefined4 *)(iVar1 + (((uVar3 & 0x7fff) >> 5) + 0x3fffffff) * 4);
    }
    uVar2 = DAT_0001364c;
    if (param_5 != 1) {
      uVar2 = DAT_00013650;
    }
    printk(uVar2);
    printk(DAT_00013654,*puVar4);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rga_set_mmu_base @ 00013658 size=164 ===== */

undefined4 rga_set_mmu_base(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x658);
  if (iVar1 != 0) {
    rga_dma_sync_flush_range
              (iVar1,iVar1 + *(int *)(param_1 + 0x660) * 4,*(undefined4 *)(param_1 + 8),param_4,
               param_4);
    uVar2 = __virt_to_phys_nodebug(*(undefined4 *)(param_1 + 0x658));
    *(undefined4 *)(param_2 + 0x134) = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x67c);
  if (iVar1 != 0) {
    rga_dma_sync_flush_range
              (iVar1,iVar1 + *(int *)(param_1 + 0x684) * 4,*(undefined4 *)(param_1 + 8));
    uVar2 = __virt_to_phys_nodebug(*(undefined4 *)(param_1 + 0x67c));
    *(undefined4 *)(param_2 + 0x138) = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x6a0);
  if (iVar1 != 0) {
    rga_dma_sync_flush_range
              (iVar1,iVar1 + *(int *)(param_1 + 0x6a8) * 4,*(undefined4 *)(param_1 + 8));
    uVar2 = __virt_to_phys_nodebug(*(undefined4 *)(param_1 + 0x6a0));
    *(undefined4 *)(param_2 + 0x13c) = uVar2;
    if (((int)((uint)*(ushort *)(param_2 + 0xf6) << 0x1f) < 0) &&
       (*(char *)(param_2 + 0xf4) == '\0')) {
      *(undefined4 *)(param_2 + 0x138) = uVar2;
      *(undefined1 *)(param_2 + 0x145) = *(undefined1 *)(param_2 + 0x146);
    }
  }
  iVar1 = *(int *)(param_1 + 0x6c4);
  if (iVar1 != 0) {
    rga_dma_sync_flush_range
              (iVar1,iVar1 + *(int *)(param_1 + 0x6cc) * 4,*(undefined4 *)(param_1 + 8));
    uVar2 = __virt_to_phys_nodebug(*(undefined4 *)(param_1 + 0x6c4));
    *(undefined4 *)(param_2 + 0x140) = uVar2;
  }
  return 0;
}



/* ===== rga_mmu_buf_get @ 000136fc size=112 ===== */

int rga_mmu_buf_get(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  mutex_is_locked(*DAT_0001376c);
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_2 + 0xfU & 0xfffffff0;
  uVar1 = param_1[3] + uVar5;
  if ((int)uVar4 < (int)(uVar3 - param_1[3])) {
    if (uVar1 <= uVar3 - uVar4) goto LAB_0001374c;
  }
  else if (uVar1 <= uVar3) {
    if (uVar4 < uVar1) {
      if (uVar3 - uVar4 < uVar5) goto LAB_00013726;
      param_1[3] = 0;
    }
LAB_0001374c:
    uVar3 = uVar3 + uVar5;
    uVar1 = uVar4 * 2;
    if (uVar3 <= uVar1) {
      param_1[4] = uVar3;
    }
    iVar2 = *param_1 + param_1[3] * 4;
    iVar6 = param_1[3] + uVar5;
    if (uVar1 < uVar3) {
      uVar5 = uVar5 + uVar4;
    }
    param_1[3] = iVar6;
    if (uVar3 <= uVar1) {
      return iVar2;
    }
    param_1[4] = uVar5;
    return iVar2;
  }
LAB_00013726:
  printk(DAT_00013770);
  printk(DAT_00013774);
  return 0;
}



/* ===== rga_mmu_base_init @ 00013778 size=132 ===== */

int * rga_mmu_base_init(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_000137fc + 0x14),0xdc0);
  if (piVar1 == (int *)0x0) {
    printk(DAT_00013800);
  }
  else {
    uVar2 = get_order(param_1 * 0xc);
    iVar3 = __get_free_pages(0xcc4,uVar2);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      printk(DAT_00013804);
    }
    else {
      *(char *)(piVar1 + 2) = (char)uVar2;
      uVar2 = get_order(param_1 << 2);
      iVar3 = __get_free_pages(0xcc4,uVar2);
      piVar1[1] = iVar3;
      if (iVar3 != 0) {
        *(char *)((int)piVar1 + 9) = (char)uVar2;
        piVar1[3] = 0;
        piVar1[4] = 0x30003;
        piVar1[5] = 0x30003;
        return piVar1;
      }
      printk(DAT_00013808);
      free_pages(*piVar1,(char)piVar1[2]);
      *(undefined1 *)(piVar1 + 2) = 0;
    }
    kfree(piVar1);
  }
  return (int *)0xfffffff4;
}



/* ===== rga_mmu_base_free @ 0001380c size=50 ===== */

void rga_mmu_base_free(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)*param_1;
  uVar2 = param_4;
  if (*piVar1 != 0) {
    free_pages(*piVar1,(char)piVar1[2],param_3,param_4,param_4);
    param_4 = 0;
    *piVar1 = 0;
    *(undefined1 *)(piVar1 + 2) = 0;
    param_3 = extraout_r2;
  }
  if (piVar1[1] != 0) {
    free_pages(piVar1[1],*(undefined1 *)((int)piVar1 + 9),param_3,param_4,uVar2);
    piVar1[1] = 0;
    *(undefined1 *)((int)piVar1 + 9) = 0;
  }
  kfree(piVar1);
  *param_1 = 0;
  return;
}



/* ===== rga_iommu_detach @ 0001383e size=4 ===== */

undefined4 rga_iommu_detach(void)

{
  return 0;
}



/* ===== rga_iommu_attach @ 00013842 size=12 ===== */

undefined4 rga_iommu_attach(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffed;
  }
  return uVar1;
}



/* ===== rga_iommu_probe @ 0001384e size=6 ===== */

undefined4 rga_iommu_probe(void)

{
  return 0xffffffea;
}



/* ===== rga_iommu_remove @ 00013854 size=4 ===== */

undefined4 rga_iommu_remove(void)

{
  return 0;
}



/* ===== rga_iommu_bind @ 00013858 size=218 ===== */

undefined4 rga_iommu_bind(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  
  piVar1 = DAT_00013944;
  iVar7 = -1;
  iVar4 = -1;
  iVar8 = 0;
  iVar5 = 0;
  iVar10 = -1;
  do {
    uVar2 = DAT_0001393c;
    iVar6 = *piVar1;
    iVar3 = *(int *)(iVar6 + 0x18);
    if (iVar3 <= iVar8) {
      if (iVar10 < 0) {
        if (iVar4 < 0) {
          if (iVar7 < 0) {
            *(undefined4 *)(iVar6 + 0x1c) = 0xffffffff;
            printk(DAT_00013940,uVar2,iVar3,0xffffffff,in_r3);
            return 0xfffffff2;
          }
          *(int *)(iVar6 + 0x1c) = iVar7;
        }
        else {
          *(int *)(iVar6 + 0x1c) = iVar4;
        }
      }
      else {
        *(int *)(iVar6 + 0x1c) = iVar10;
      }
      iVar4 = *(int *)(iVar6 + *(int *)(iVar6 + 0x1c) * 4 + 0xc);
      printk(DAT_00013934,*(undefined4 *)(iVar4 + 0x80),iVar3,iVar4,in_r3);
      return 0;
    }
    puVar9 = *(undefined4 **)(iVar6 + iVar8 * 4 + 0xc);
    iVar3 = iVar5;
    iVar11 = iVar10;
    if (*(int *)(puVar9[0x16] + 0x48) == 1) {
      if (*(int *)(iVar6 + 0x20) == 0) {
        uVar2 = rga_mmu_base_init(0x10001);
        iVar5 = *piVar1;
        *(undefined4 *)(iVar6 + 0x20) = uVar2;
        iVar4 = iVar8;
        if (0xfffff000 < *(uint *)(iVar5 + 0x20)) {
          _dev_err(*puVar9,DAT_00013938);
          uVar2 = *(undefined4 *)(*piVar1 + 0x20);
          *(undefined4 *)(*piVar1 + 0x20) = 0;
          return uVar2;
        }
      }
    }
    else if (*(int *)(puVar9[0x16] + 0x48) == 2) {
      iVar6 = puVar9[2];
      if ((iVar6 != 0) && (iVar3 = iVar6, iVar11 = iVar8, iVar5 != 0)) {
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar5 + 8);
        *(undefined4 *)(puVar9[2] + 4) = *(undefined4 *)(iVar5 + 4);
        iVar3 = iVar5;
        iVar11 = iVar10;
      }
    }
    else if (iVar7 != 0) {
      iVar7 = iVar8;
    }
    iVar8 = iVar8 + 1;
    iVar5 = iVar3;
    iVar10 = iVar11;
  } while( true );
}



/* ===== rga_iommu_unbind @ 00013948 size=26 ===== */

void rga_iommu_unbind(void)

{
  int *piVar1;
  
  piVar1 = DAT_00013964;
  if (*(int *)(*DAT_00013964 + 0x20) != 0) {
    rga_mmu_base_free(*DAT_00013964 + 0x20);
  }
  *(undefined4 *)(*piVar1 + 0x1c) = 0xffffffff;
  return;
}



/* ===== rga_buf_size_cal @ 00013968 size=258 ===== */

uint rga_buf_size_cal(uint param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
                     uint param_6,uint *param_7,int *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  switch(param_4) {
  case 0:
  case 1:
  case 3:
  case 0x16:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2d:
    uVar5 = param_5 << 2;
    break;
  case 2:
  case 7:
    uVar5 = (param_5 + 1) * 3;
    goto LAB_000139c6;
  case 4:
  case 5:
  case 6:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
    param_5 = param_5 << 1;
  case 0x15:
    uVar5 = param_5 + 3;
LAB_000139c6:
    uVar5 = uVar5 & 0xfffffffc;
    break;
  case 8:
  case 0xc:
  case 0x18:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    uVar4 = param_1;
    if (param_2 <= param_1) {
      uVar4 = param_2;
    }
    uVar5 = param_6 * (param_5 + 3U & 0xfffffffc);
    uVar4 = uVar4 >> 0xc;
    uVar2 = param_1 + uVar5;
    if (param_1 + uVar5 < param_2 + uVar5) {
      uVar2 = param_2 + uVar5;
    }
    uVar1 = (uVar2 + 0xfff >> 0xc) - uVar4;
    uVar3 = uVar5;
    goto LAB_000139f8;
  case 9:
  case 0xd:
    uVar2 = param_6;
    goto LAB_00013a14;
  case 10:
  case 0xe:
  case 0x19:
  case 0x1b:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x21:
    uVar3 = param_5 + 3U & 0xfffffffc;
    uVar5 = uVar3 * param_6;
    uVar3 = uVar3 * (param_6 >> 1);
    uVar4 = param_1;
    if (param_2 <= param_1) {
      uVar4 = param_2;
    }
    uVar4 = uVar4 >> 0xc;
    param_2 = param_2 + uVar3;
    uVar2 = param_1 + uVar5;
    if (param_1 + uVar5 < param_2) {
      uVar2 = param_2;
    }
    uVar1 = (uVar2 + 0xfff >> 0xc) - uVar4;
LAB_000139f8:
    uVar2 = 0;
    goto LAB_000139fa;
  case 0xb:
  case 0xf:
    uVar2 = param_6 >> 1;
LAB_00013a14:
    uVar4 = param_5 + 3U & 0xfffffffc;
    uVar5 = uVar4 * param_6;
    uVar2 = (uVar4 >> 1) * uVar2;
    uVar4 = param_2;
    if (param_3 <= param_2) {
      uVar4 = param_3;
    }
    if (param_1 <= uVar4) {
      uVar4 = param_1;
    }
    uVar4 = uVar4 >> 0xc;
    uVar3 = param_2 + uVar2;
    if (param_2 + uVar2 < param_3 + uVar2) {
      uVar3 = param_3 + uVar2;
    }
    if (uVar3 < param_1 + uVar5) {
      uVar3 = param_1 + uVar5;
    }
    uVar1 = (uVar3 + 0xfff >> 0xc) - uVar4;
    uVar3 = uVar2;
    goto LAB_000139fa;
  default:
    uVar1 = 0;
    uVar2 = uVar1;
    uVar4 = uVar1;
    uVar5 = uVar1;
    uVar3 = uVar1;
    goto LAB_000139fa;
  case 0x14:
    uVar5 = DAT_00013a9c & param_5 + 3U >> 1;
  }
  uVar5 = param_6 * uVar5;
  uVar4 = param_1 >> 0xc;
  uVar2 = 0;
  uVar1 = (param_1 + 0xfff + uVar5 >> 0xc) - uVar4;
  uVar3 = 0;
LAB_000139fa:
  *param_7 = uVar4;
  if (param_8 != (int *)0x0) {
    *param_8 = uVar5 + uVar3 + uVar2;
  }
  return uVar1;
}



/* ===== rga_iommu_unmap @ 00013aa0 size=2 ===== */

void rga_iommu_unmap(void)

{
  return;
}



/* ===== rga_virtual_memory_check @ 00013aa2 size=140 ===== */

undefined4
rga_virtual_memory_check(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  void *__src;
  undefined4 uVar2;
  void *__dest;
  uint __n;
  
  iVar1 = rga_get_format_bits(param_4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    __src = (void *)__kmalloc(param_2 << 2,0xdc0);
    if (__src == (void *)0x0) {
      printk(DAT_00013b34,DAT_00013b30,0x174);
    }
    else {
      __n = (uint)(param_2 * iVar1) >> 3;
      __dest = (void *)(param_1 + ((uint)(iVar1 * param_2 * (param_3 + -1)) >> 3));
      if (param_5 < 1) {
        printk(DAT_00013b40);
        memcpy(__dest,__src,__n);
        uVar2 = DAT_00013b44;
      }
      else {
        printk(DAT_00013b38,param_1,iVar1);
        memcpy(__src,__dest,__n);
        uVar2 = DAT_00013b3c;
      }
      printk(uVar2);
      kfree(__src);
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rga_dma_memory_check @ 00013b48 size=70 ===== */

undefined4 rga_dma_memory_check(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = *param_1;
  if ((uVar3 == 0) || (0xfffff000 < uVar3)) {
    uVar2 = 0;
  }
  else {
    puVar4 = param_2;
    iVar1 = dma_buf_vmap(uVar3);
    if (iVar1 == 0) {
      uVar2 = 0xffffffea;
      printk(DAT_00013b90);
    }
    else {
      uVar2 = rga_virtual_memory_check
                        (iVar1,*(undefined2 *)(param_2 + 9),*(undefined2 *)((int)param_2 + 0x26),
                         param_2[6],*param_2,puVar4);
      dma_buf_vunmap(uVar3,iVar1);
    }
  }
  return uVar2;
}



/* ===== rga_dma_map_buf @ 00013b94 size=164 ===== */

undefined4 rga_dma_map_buf(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    printk(DAT_00013c3c,0);
  }
  else {
    piVar4 = (int *)(*(int *)(param_1 + 4) + 0x1c);
    HintPreloadData(piVar4);
    do {
      ExclusiveAccess(piVar4);
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + 1;
    uVar2 = dma_buf_cache_attach(param_1,param_4);
    if (uVar2 < 0xfffff001) {
      piVar4 = (int *)dma_buf_cache_map_attachment(uVar2,param_3);
      if (piVar4 < (int *)0xfffff001) {
        *param_2 = param_1;
        param_2[1] = uVar2;
        param_2[2] = (int)piVar4;
        iVar3 = *(int *)(*piVar4 + 0xc);
        param_2[7] = 0;
        param_2[5] = param_3;
        param_2[6] = iVar3;
        iVar3 = *piVar4;
        for (uVar2 = 0; uVar2 < (uint)piVar4[2]; uVar2 = uVar2 + 1) {
          param_2[7] = param_2[7] + *(int *)(iVar3 + 8);
          iVar3 = sg_next();
        }
        return 0;
      }
      printk(DAT_00013c40);
      if (uVar2 != 0) {
        dma_buf_cache_detach(param_1,uVar2);
      }
    }
    else {
      printk(DAT_00013c38);
    }
    dma_buf_put(param_1);
  }
  return 0xffffffea;
}



/* ===== rga_dma_map_fd @ 00013c44 size=152 ===== */

undefined4 rga_dma_map_fd(undefined4 param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = dma_buf_get();
  if (uVar1 < 0xfffff001) {
    uVar2 = dma_buf_cache_attach(uVar1,param_4);
    if (uVar2 < 0xfffff001) {
      piVar3 = (int *)dma_buf_cache_map_attachment(uVar2,param_3);
      if (piVar3 < (int *)0xfffff001) {
        *param_2 = uVar1;
        param_2[1] = uVar2;
        param_2[2] = (uint)piVar3;
        uVar1 = *(uint *)(*piVar3 + 0xc);
        param_2[7] = 0;
        param_2[5] = param_3;
        param_2[6] = uVar1;
        iVar4 = *piVar3;
        for (uVar1 = 0; uVar1 < (uint)piVar3[2]; uVar1 = uVar1 + 1) {
          param_2[7] = param_2[7] + *(int *)(iVar4 + 8);
          iVar4 = sg_next();
        }
        return 0;
      }
      printk(DAT_00013ce4);
      if (uVar2 != 0) {
        dma_buf_cache_detach(uVar1,uVar2);
      }
    }
    else {
      printk(DAT_00013ce0);
    }
    if (uVar1 != 0) {
      dma_buf_put(uVar1);
    }
  }
  else {
    printk(DAT_00013cdc,param_1);
  }
  return 0xffffffea;
}



/* ===== rga_dma_unmap_buf @ 00013ce8 size=40 ===== */

void rga_dma_unmap_buf(undefined4 *param_1)

{
  if ((param_1[1] != 0) && (param_1[2] != 0)) {
    dma_buf_cache_unmap_attachment(param_1[1],param_1[2],param_1[5]);
  }
  if (param_1[1] != 0) {
    dma_buf_cache_detach(*param_1);
    dma_buf_put(*param_1);
    return;
  }
  return;
}



/* ===== rga_dma_sync_flush_range @ 00013d10 size=22 ===== */

void rga_dma_sync_flush_range(int param_1,int param_2,undefined4 *param_3)

{
  dma_sync_single_for_device(*param_3,param_1 + -0x7f000000,param_2 - param_1,1);
  return;
}



/* ===== ____atomic_set_bit @ 00013d28 size=24 ===== */

void ____atomic_set_bit(uint param_1,uint *param_2)

{
  disableIRQinterrupts();
  *param_2 = 1 << (param_1 & 0xff) | *param_2;
  return;
}



/* ===== IS_ERR_OR_NULL @ 00013d40 size=18 ===== */

bool IS_ERR_OR_NULL(uint param_1)

{
  if (param_1 == 0) {
    return true;
  }
  return 0xfffff000 < param_1;
}



/* ===== ktime_divns @ 00013d52 size=4 ===== */

void ktime_divns(void)

{
  __ktime_divns();
  return;
}



/* ===== __refcount_sub_and_test.constprop.8 @ 00013d56 size=48 ===== */

undefined4
__refcount_sub_and_test_constprop_8
          (undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  HintPreloadData(param_2);
  do {
    ExclusiveAccess(param_2);
    iVar3 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar3 + -1;
  if (iVar3 == 1) {
    uVar2 = 1;
  }
  else {
    if (iVar3 < 1) {
      refcount_warn_saturate(param_2,3,iVar3 + -1,iVar3,param_4);
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rga_request_put_current_mm @ 00013d86 size=52 ===== */

void rga_request_put_current_mm(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    mmput();
    piVar3 = (int *)(*(int *)(param_1 + 0x48) + 0x30);
    HintPreloadData(piVar3);
    do {
      ExclusiveAccess(piVar3);
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      __mmdrop();
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* ===== __refcount_add.constprop.10 @ 00013dba size=56 ===== */

void __refcount_add_constprop_10(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  HintPreloadData(param_1);
  do {
    ExclusiveAccess(param_1);
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + 1;
  if (iVar3 == 0) {
    uVar2 = 2;
  }
  else {
    if ((-1 < iVar3) && (-1 < iVar3 + 1)) {
      return;
    }
    uVar2 = 1;
  }
  refcount_warn_saturate(param_1,uVar2);
  return;
}



/* ===== refcount_inc @ 00013df2 size=2 ===== */

void refcount_inc(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  HintPreloadData(param_1);
  do {
    ExclusiveAccess(param_1);
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + 1;
  if (iVar3 == 0) {
    uVar2 = 2;
  }
  else {
    if ((-1 < iVar3) && (-1 < iVar3 + 1)) {
      return;
    }
    uVar2 = 1;
  }
  refcount_warn_saturate(param_1,uVar2);
  return;
}



/* ===== rga_job_put @ 00013df4 size=30 ===== */

bool rga_job_put(int param_1)

{
  int iVar1;
  
  iVar1 = __refcount_sub_and_test_constprop_8(1,param_1 + 0x70c,0);
  if (iVar1 != 0) {
    free_pages(param_1,0);
  }
  return iVar1 != 0;
}



/* ===== rga_job_cleanup @ 00013e12 size=64 ===== */

undefined4 rga_job_cleanup(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*DAT_00013e54 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x704);
    lVar2 = ktime_get();
    lVar2 = lVar2 - *(longlong *)(param_1 + 0x6d8);
    uVar3 = ktime_divns((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
    printk(DAT_00013e58,uVar1,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  rga_job_put(param_1);
  return 0;
}



/* ===== rga_request_scheduler_job_abort @ 00013e5c size=306 ===== */

bool rga_request_scheduler_job_abort(int param_1)

{
  int iVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  int ****ppppiVar4;
  int iVar5;
  int ****ppppiVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  int local_34;
  int ***local_30;
  int ***local_2c;
  
  iVar7 = 0;
  iVar8 = 0;
  local_30 = (int ***)&local_30;
  local_2c = (int ***)&local_30;
  for (iVar9 = 0; iVar9 < *(int *)(*DAT_00013f90 + 0x18); iVar9 = iVar9 + 1) {
    iVar5 = *(int *)(*DAT_00013f90 + iVar9 * 4 + 0xc);
    disableIRQinterrupts();
    ppppiVar4 = *(int *****)(iVar5 + 0x44);
    ppppiVar6 = (int ****)*ppppiVar4;
    while (ppppiVar4 != (int ****)(iVar5 + 0x44)) {
      if (*(int ****)(param_1 + 0x38) == ppppiVar4[0x1bd]) {
        pppiVar2 = *ppppiVar4;
        pppiVar3 = ppppiVar4[1];
        iVar7 = iVar7 + 1;
        pppiVar2[1] = (int **)pppiVar3;
        *pppiVar3 = (int **)pppiVar2;
        local_30[1] = (int **)ppppiVar4;
        *ppppiVar4 = local_30;
        ppppiVar4[1] = (int ***)&local_30;
        *(int *)(iVar5 + 0x5c) = *(int *)(iVar5 + 0x5c) + -1;
        local_30 = (int ***)ppppiVar4;
      }
      ppppiVar4 = ppppiVar6;
      ppppiVar6 = (int ****)*ppppiVar6;
    }
    ppppiVar4 = *(int *****)(iVar5 + 0x40);
    if (ppppiVar4 != (int ****)0x0) {
      if (*(int ****)(param_1 + 0x38) == ppppiVar4[0x1bd]) {
        local_34 = *(int *)(iVar5 + 0x38);
        *(undefined4 *)(iVar5 + 0x40) = 0;
        *(undefined4 *)(iVar5 + 0x38) = 2;
        *ppppiVar4 = (int ***)&local_30;
        ppppiVar4[1] = local_2c;
        ppppiVar6 = ppppiVar4;
        *local_2c = (int **)ppppiVar4;
        local_2c = (int ***)ppppiVar6;
        if (ppppiVar4[0x1b9] != (int ***)0x0 || ppppiVar4[0x1b8] != (int ***)0x0) {
          lVar11 = ktime_get();
          iVar1 = ktime_divns((int)(lVar11 - *(longlong *)(ppppiVar4 + 0x1ba)),
                              (int)((ulonglong)(lVar11 - *(longlong *)(ppppiVar4 + 0x1ba)) >> 0x20),
                              1000,0);
          *(int *)(iVar5 + 0x84) = iVar1 + *(int *)(iVar5 + 0x84);
          (**(code **)(*(int *)(iVar5 + 0x54) + 0xc))(iVar5);
        }
        iVar8 = iVar8 + 1;
        printk(DAT_00013f98,*(undefined4 *)(iVar5 + 0x80));
      }
      else {
        ppppiVar4 = (int ****)0x0;
      }
    }
    if ((ppppiVar4 != (int ****)0x0) && (local_34 == 1)) {
      rga_power_disable(iVar5);
    }
  }
  ppppiVar4 = (int ****)local_30;
  ppppiVar6 = (int ****)*local_30;
  while (ppppiVar4 != &local_30) {
    rga_mm_unmap_job_info(ppppiVar4);
    ppppiVar4[0x1c0] = (int ***)0xfffffff0;
    rga_job_cleanup(ppppiVar4);
    ppppiVar4 = ppppiVar6;
    ppppiVar6 = (int ****)*ppppiVar6;
  }
  bVar10 = iVar8 + iVar7 == 0;
  if (!bVar10) {
    printk(DAT_00013f94,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 8),
           *(undefined4 *)(param_1 + 0xc),iVar8,iVar7);
  }
  return bVar10;
}



/* ===== kmalloc_array.constprop.6 @ 00013f9c size=24 ===== */

undefined4 kmalloc_array_constprop_6(uint param_1)

{
  undefined4 uVar1;
  
  if ((int)((ulonglong)param_1 * 0x1f8 >> 0x20) == 0) {
    uVar1 = __kmalloc((int)((ulonglong)param_1 * 0x1f8),0xcc0);
    return uVar1;
  }
  return 0;
}



/* ===== rga_job_done @ 00013fb4 size=210 ===== */

int rga_job_done(int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar6 = ktime_get();
  disableIRQinterrupts();
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    printk(DAT_00014088,*(undefined4 *)(param_1 + 0x80));
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
    lVar1 = lVar6 - *(longlong *)(iVar4 + 0x6e8);
    iVar2 = ktime_divns((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
    *(int *)(param_1 + 0x84) = iVar2 + *(int *)(param_1 + 0x84);
    ____atomic_set_bit(4,iVar4 + 0x710);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x54) + 0x10);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar4,param_1);
    }
    if (*DAT_0001408c != 0) {
      rga_dump_job_image(iVar4);
    }
    if (*DAT_00014090 != 0) {
      lVar1 = lVar6 - *(longlong *)(iVar4 + 0x6e0);
      uVar7 = ktime_divns((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      printk(DAT_00014094,uVar5,(int)uVar7,uVar5);
      lVar6 = lVar6 - *(longlong *)(iVar4 + 0x6d8);
      uVar5 = *(undefined4 *)(iVar4 + 0x704);
      uVar7 = ktime_divns((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),1000,0);
      printk(DAT_00014098,uVar5,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    }
    rga_mm_unmap_job_info(iVar4);
  }
  return iVar4;
}



/* ===== rga_request_check @ 0001409c size=66 ===== */

undefined4 rga_request_check(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1[3] == 0) {
    printk(DAT_000140e0);
  }
  else {
    uVar2 = param_1[2];
    uVar1 = DAT_000140e4;
    if ((uVar2 != 0) && (uVar1 = DAT_000140e8, (*param_1 | param_1[1]) != 0)) {
      if (0x32 < uVar2) {
        printk(DAT_000140ec,0x32,uVar2,*param_1 | param_1[1],param_4);
        return 0xffffffe5;
      }
      return 0;
    }
    printk(uVar1);
  }
  return 0xffffffea;
}



/* ===== rga_request_lookup @ 000140f0 size=24 ===== */

void rga_request_lookup(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  
  mutex_is_locked();
  idr_find(param_1 + 0xc,param_2,extraout_r2,param_4);
  return;
}



/* ===== rga_request_free @ 00014108 size=86 ===== */

undefined4 rga_request_free(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*DAT_00014160 + 0x54);
  uVar1 = DAT_00014164;
  if (iVar3 != 0) {
    mutex_is_locked(iVar3);
    iVar2 = IS_ERR_OR_NULL(param_1);
    uVar1 = DAT_00014168;
    if (iVar2 == 0) {
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + -1;
      idr_remove(iVar3 + 0xc,param_1[0xe]);
      disableIRQinterrupts();
      if (*param_1 != 0) {
        kfree();
      }
      kfree(param_1);
      return 0;
    }
  }
  printk(uVar1);
  return 0xfffffff2;
}



/* ===== rga_request_free_cb @ 0001416c size=6 ===== */

void rga_request_free_cb(undefined4 param_1,undefined4 param_2)

{
  rga_request_free(param_2);
  return;
}



/* ===== rga_request_alloc @ 00014172 size=172 ===== */

int rga_request_alloc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar3 = *(int *)(*DAT_00014220 + 0x54);
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  if (iVar3 == 0) {
    iVar4 = -0xe;
    printk(DAT_00014224);
  }
  else {
    iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_00014228 + 4),0xdc0);
    if (iVar1 == 0) {
      iVar4 = -0xc;
      printk(DAT_0001422c);
    }
    else {
      __init_waitqueue_head(iVar1 + 0x28,DAT_00014234,DAT_00014230);
      uVar2 = *(undefined4 *)(*(int *)(((uint)&local_20 & 0xffffe000) + 0xc) + 0x1d8);
      *(undefined4 *)(iVar1 + 0x3c) = param_2;
      *(undefined4 *)(iVar1 + 0x30) = param_1;
      *(undefined4 *)(iVar1 + 0x44) = uVar2;
      *(undefined4 *)(iVar1 + 0x40) = 1;
      mutex_lock(iVar3);
      idr_preload(0xcc0);
      local_20 = 0x800;
      iVar4 = idr_alloc_cyclic(iVar3 + 0xc,iVar1,1,0);
      if (iVar4 < 0) {
        printk(DAT_00014238);
        mutex_unlock(iVar3);
        kfree(iVar1);
      }
      else {
        *(int *)(iVar1 + 0x38) = iVar4;
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
        mutex_unlock(iVar3);
        iVar4 = *(int *)(iVar1 + 0x38);
      }
    }
  }
  return iVar4;
}



/* ===== rga_request_put @ 0001423c size=114 ===== */

undefined4 rga_request_put(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = __refcount_sub_and_test_constprop_8(1,param_1 + 0x40,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (((*(int *)(param_1 + 0x24) != 0) && (iVar1 = dma_fence_get_status(), iVar1 == 0)) &&
       (*(int *)(param_1 + 0x24) != 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x28) = 0xfffffff2;
      dma_fence_signal();
    }
    disableIRQinterrupts();
    rga_request_put_current_mm(param_1);
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar3 = *(int *)(param_1 + 0x24) + 0x24;
      iVar1 = __refcount_sub_and_test_constprop_8(1,iVar3,0);
      if (iVar1 != 0) {
        dma_fence_release(iVar3);
      }
    }
    if ((*(char *)(param_1 + 0x11) != '\0') && (*(char *)(param_1 + 0x12) == '\0')) {
      rga_request_scheduler_job_abort(param_1);
    }
    rga_request_free(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== rga_request_session_destroy_abort @ 000142ae size=100 ===== */

void rga_request_session_destroy_abort(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iStack_20;
  int local_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(*DAT_00014314 + 0x54);
  iStack_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  if (iVar2 == 0) {
    printk(DAT_00014318);
  }
  else {
    mutex_lock(iVar2);
    local_1c = 0;
    while (iVar1 = idr_get_next(iVar2 + 0xc,&local_1c), iVar1 != 0) {
      if (*(int *)(iVar1 + 0x3c) == param_1) {
        printk(DAT_0001431c,*(undefined4 *)(param_1 + 4),
               *(undefined4 *)(*(int *)(((uint)&iStack_20 & 0xffffe000) + 0xc) + 0x1d8),
               *(undefined4 *)(iVar1 + 0x38));
        rga_request_put(iVar1);
      }
      local_1c = local_1c + 1;
    }
    mutex_unlock(iVar2);
  }
  return;
}



/* ===== rga_request_release_abort @ 00014320 size=86 ===== */

void rga_request_release_abort(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*DAT_00014378 + 0x54);
  iVar1 = rga_request_scheduler_job_abort();
  if ((iVar1 < 1) && (disableIRQinterrupts(), *(char *)(param_1 + 0x12) == '\0')) {
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    rga_request_put_current_mm(param_1);
    if (*(int *)(param_1 + 0x24) != 0) {
      if (param_2 != 0) {
        *(int *)(*(int *)(param_1 + 0x24) + 0x28) = param_2;
      }
      dma_fence_signal();
    }
    mutex_lock(uVar2);
    rga_request_put(param_1);
    mutex_unlock(uVar2,extraout_r1,extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== rga_request_wait @ 0001437c size=244 ===== */

int rga_request_wait(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte in_Q;
  uint in_cpsr;
  undefined1 auStack_24 [20];
  
  iVar4 = *(int *)(param_1 + 4);
  _cond_resched();
  iVar4 = iVar4 * 300;
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 4);
      init_wait_entry(auStack_24);
      iVar4 = iVar4 * 300;
      while (prepare_to_wait_event(param_1 + 0x28,auStack_24,2), *(char *)(param_1 + 0x12) == '\0')
      {
        if (iVar4 == 0) goto LAB_00014466;
        iVar4 = schedule_timeout(iVar4);
      }
      if (iVar4 == 0) {
        iVar4 = 1;
      }
LAB_00014466:
      finish_wait(param_1 + 0x28,auStack_24);
      goto LAB_00014398;
    }
LAB_000143a2:
    uVar3 = 0;
    while( true ) {
      uVar2 = *(uint *)(*DAT_00014470 + 0x18);
      if ((int)uVar2 <= (int)uVar3) break;
      disableIRQinterrupts();
      iVar4 = *(int *)(*(int *)(*DAT_00014470 + uVar3 * 4 + 0xc) + 0x40);
      if ((iVar4 != 0) && (*(int *)(param_1 + 0x38) == *(int *)(iVar4 + 0x6f4))) {
        if ((*(int *)(iVar4 + 0x710) << 0x1b < 0) && (*(int *)(iVar4 + 0x710) << 0x1c < 0)) break;
        if (((-1 < *(int *)(iVar4 + 0x710) << 0x1b) &&
            (uVar1 = DAT_00014474, *(int *)(iVar4 + 0x710) << 0x1c < 0)) ||
           ((-1 < *(int *)(iVar4 + 0x710) << 0x1b &&
            (uVar1 = DAT_00014478, -1 < *(int *)(iVar4 + 0x710) << 0x1c)))) {
          printk(uVar1,(uint)(byte)(((int)(uVar3 - uVar2) < 0) << 4 | (uVar3 == uVar2) << 3 |
                                    (uVar2 <= uVar3) << 2 | SBORROW4(uVar3,uVar2) << 1 | in_Q) <<
                       0x1b);
          iVar4 = -0x10;
          goto LAB_000143c6;
        }
      }
      in_Q = (in_cpsr >> 0x1b & 1) != 0;
      uVar3 = uVar3 + 1;
      in_cpsr = in_cpsr & 0xffffff00;
    }
    iVar4 = *(int *)(param_1 + 0x14);
LAB_000143c6:
    rga_request_release_abort(param_1,iVar4);
  }
  else {
    if (iVar4 != 0) {
LAB_00014398:
      if (iVar4 == -0x200) goto LAB_000143c6;
      if (iVar4 == 0) goto LAB_000143a2;
    }
    iVar4 = *(int *)(param_1 + 0x14);
  }
  return iVar4;
}



/* ===== rga_request_release_signal @ 0001447c size=260 ===== */

undefined4 rga_request_release_signal(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  int iVar4;
  int iVar5;
  int iVar6;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  bool bVar7;
  byte in_Q;
  
  iVar4 = *(int *)(*DAT_00014580 + 0x54);
  if (iVar4 == 0) {
    printk(DAT_00014584);
    uVar1 = 0xfffffff2;
  }
  else {
    mutex_lock(iVar4);
    iVar2 = rga_request_lookup(iVar4,*(undefined4 *)(param_2 + 0x6f4));
    iVar3 = IS_ERR_OR_NULL();
    if (iVar3 == 0) {
      refcount_inc(iVar2 + 0x40);
      mutex_unlock(iVar4);
      disableIRQinterrupts();
      bVar7 = *(int *)(param_2 + 0x700) < 0;
      if (bVar7) {
        *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
        iVar3 = *(int *)(param_2 + 0x700);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8) + 1;
        *(int *)(iVar2 + 8) = iVar3;
      }
      iVar5 = *(int *)(iVar2 + 8);
      iVar6 = *(int *)(iVar2 + 0xc);
      if (bVar7) {
        *(int *)(iVar2 + 0x14) = iVar3;
      }
      rga_job_cleanup(param_2,extraout_r1,
                      (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b
                     );
      if (*(int *)(iVar2 + 4) <= iVar6 + iVar5) {
        disableIRQinterrupts();
        *(undefined1 *)(iVar2 + 0x11) = 0;
        *(undefined1 *)(iVar2 + 0x12) = 1;
        rga_request_put_current_mm(iVar2);
        if (*(int *)(iVar2 + 0x24) != 0) {
          if (*(int *)(iVar2 + 0x14) != 0) {
            *(int *)(*(int *)(iVar2 + 0x24) + 0x28) = *(int *)(iVar2 + 0x14);
          }
          dma_fence_signal();
        }
        __wake_up(iVar2 + 0x28,3,1,0);
        if (*DAT_0001458c != 0) {
          printk(DAT_00014590,*(undefined4 *)(iVar2 + 0x38),iVar5,iVar6);
        }
        mutex_lock(iVar4);
        rga_request_put(iVar2);
        mutex_unlock(iVar4);
      }
      mutex_lock(iVar4);
      rga_request_put(iVar2);
      mutex_unlock(iVar4);
      uVar1 = 0;
    }
    else {
      printk(DAT_00014588,*(undefined4 *)(param_2 + 0x6f4));
      mutex_unlock(iVar4);
      uVar1 = 0xffffffea;
    }
  }
  return uVar1;
}



/* ===== rga_job_next.part.2 @ 00014594 size=210 ===== */

void rga_job_next_part_2(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  uVar3 = DAT_00014678;
  uVar2 = DAT_0001466c;
  uVar1 = DAT_00014668;
  while ((disableIRQinterrupts(), *(int *)(param_1 + 0x40) == 0 &&
         (*(int **)(param_1 + 0x44) != (int *)(param_1 + 0x44)))) {
    piVar6 = *(int **)(param_1 + 0x44);
    iVar4 = *piVar6;
    piVar5 = (int *)piVar6[1];
    *(int **)(iVar4 + 4) = piVar5;
    *piVar5 = iVar4;
    *piVar6 = (int)piVar6;
    piVar6[1] = (int)piVar6;
    *(int **)(param_1 + 0x40) = piVar6;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    ____atomic_set_bit(1,piVar6 + 0x1c4);
    refcount_inc(piVar6 + 0x1c3);
    iVar4 = rga_power_enable(param_1);
    if (iVar4 < 0) {
      printk(uVar3);
    }
    else {
      iVar4 = (**(code **)(*(int *)(param_1 + 0x54) + 4))(piVar6,param_1);
      if (-1 < iVar4) {
        ____atomic_set_bit(2,piVar6 + 0x1c4);
        if (*DAT_00014674 != 0) {
          rga_job_dump_info(piVar6);
        }
        rga_job_put(piVar6);
        return;
      }
      printk(uVar1);
      rga_power_disable(param_1);
    }
    printk(DAT_00014670,uVar2,0xe5);
    disableIRQinterrupts();
    *(undefined4 *)(param_1 + 0x40) = 0;
    rga_job_put(piVar6);
    piVar6[0x1c0] = iVar4;
    rga_request_release_signal(param_1,piVar6);
  }
  return;
}



/* ===== rga_job_next @ 0001467c size=2 ===== */

void rga_job_next(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  uVar3 = DAT_00014678;
  uVar2 = DAT_0001466c;
  uVar1 = DAT_00014668;
  while ((disableIRQinterrupts(), *(int *)(param_1 + 0x40) == 0 &&
         (*(int **)(param_1 + 0x44) != (int *)(param_1 + 0x44)))) {
    piVar6 = *(int **)(param_1 + 0x44);
    iVar4 = *piVar6;
    piVar5 = (int *)piVar6[1];
    *(int **)(iVar4 + 4) = piVar5;
    *piVar5 = iVar4;
    *piVar6 = (int)piVar6;
    piVar6[1] = (int)piVar6;
    *(int **)(param_1 + 0x40) = piVar6;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    ____atomic_set_bit(1,piVar6 + 0x1c4);
    refcount_inc(piVar6 + 0x1c3);
    iVar4 = rga_power_enable(param_1);
    if (iVar4 < 0) {
      printk(uVar3);
    }
    else {
      iVar4 = (**(code **)(*(int *)(param_1 + 0x54) + 4))(piVar6,param_1);
      if (-1 < iVar4) {
        ____atomic_set_bit(2,piVar6 + 0x1c4);
        if (*DAT_00014674 != 0) {
          rga_job_dump_info(piVar6);
        }
        rga_job_put(piVar6);
        return;
      }
      printk(uVar1);
      rga_power_disable(param_1);
    }
    printk(DAT_00014670,uVar2,0xe5);
    disableIRQinterrupts();
    *(undefined4 *)(param_1 + 0x40) = 0;
    rga_job_put(piVar6);
    piVar6[0x1c0] = iVar4;
    rga_request_release_signal(param_1,piVar6);
  }
  return;
}



/* ===== rga_job_commit @ 0001467e size=732 ===== */

int * rga_job_commit(void *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  undefined8 uVar10;
  longlong lVar11;
  void *pvStack_30;
  int *local_2c;
  undefined4 uStack_28;
  
  pvStack_30 = param_1;
  local_2c = (int *)param_2;
  uStack_28 = param_3;
  piVar1 = (int *)get_zeroed_page(0xcc4);
  if (piVar1 == (int *)0x0) {
    printk(DAT_0001495c);
    return (int *)0xfffffff4;
  }
  *piVar1 = (int)piVar1;
  piVar1[1] = (int)piVar1;
  piVar1[0x1c3] = 1;
  local_2c = piVar1;
  uVar10 = ktime_get();
  *(undefined8 *)(piVar1 + 0x1b6) = uVar10;
  piVar1[0x1c1] = *(int *)(*(int *)(((uint)&pvStack_30 & 0xffffe000) + 0xc) + 0x1d8);
  memcpy(piVar1 + 4,param_1,0x1f8);
  uVar6 = (uint)*(byte *)((int)param_1 + 0x161);
  if (uVar6 != 0) {
    if (6 < uVar6) {
      uVar6 = 6;
    }
    piVar1[0x1be] = uVar6;
  }
  piVar8 = DAT_00014984;
  if ((*(byte *)(piVar1 + 0x5e) & 1) != 0) {
    iVar4 = *DAT_00014984;
    piVar1[0x1bc] = piVar1[0x1bc] | 8;
    iVar4 = *(int *)(iVar4 + 0x50);
    if (iVar4 == 0) {
      printk(DAT_00014960);
    }
    else {
      mutex_lock(iVar4);
      if (piVar1[6] == 0 && piVar1[7] == 0) {
LAB_0001475e:
        if (piVar1[0x14] != 0 || piVar1[0x15] != 0) {
          iVar7 = rga_mm_lookup_flag(iVar4);
          if (iVar7 < 0) goto LAB_0001478e;
          if (-1 < iVar7 << 0x1f) goto LAB_00014750;
        }
        if (((piVar1[0x22] != 0 || piVar1[0x23] != 0) &&
            (iVar7 = rga_mm_lookup_flag(iVar4), -1 < iVar7)) && (-1 < iVar7 << 0x1f)) {
LAB_00014750:
          piVar1[0x1bc] = piVar1[0x1bc] | 0x10;
        }
      }
      else {
        iVar7 = rga_mm_lookup_flag(iVar4);
        if (-1 < iVar7) {
          if (iVar7 << 0x1f < 0) goto LAB_0001475e;
          goto LAB_00014750;
        }
      }
LAB_0001478e:
      mutex_unlock(iVar4);
    }
  }
  *(undefined1 *)(piVar1 + 0x1c2) = *(undefined1 *)(param_2 + 0x10);
  piVar1[0x1bd] = *(int *)(param_2 + 0x38);
  piVar1[3] = *(int *)(param_2 + 0x3c);
  iVar4 = 0;
  piVar1[0x1b4] = *(int *)(param_2 + 0x48);
  while( true ) {
    iVar7 = *piVar8;
    if (*(int *)(iVar7 + 0x18) <= iVar4) break;
    iVar7 = *(int *)(iVar7 + iVar4 * 4 + 0xc);
    disableIRQinterrupts();
    iVar2 = *(int *)(iVar7 + 0x40);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x6e0) != 0 || *(int *)(iVar2 + 0x6e4) != 0)) {
      lVar11 = ktime_get();
      lVar11 = lVar11 - *(longlong *)(iVar2 + 0x6e0);
      uVar10 = ktime_divns((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),DAT_00014964,0);
      iVar3 = (int)((ulonglong)uVar10 >> 0x20);
      bVar9 = 299 < (uint)uVar10;
      if ((int)(-(uint)bVar9 - iVar3) < 0 != (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)bVar9))) {
        *(undefined4 *)(iVar7 + 0x40) = 0;
        *(undefined4 *)(iVar7 + 0x38) = 2;
        (**(code **)(*(int *)(iVar7 + 0x54) + 0xc))(iVar7);
        rga_mm_unmap_job_info(iVar2);
        *(undefined4 *)(iVar2 + 0x700) = 0xfffffff0;
        rga_request_release_signal(iVar7,iVar2);
        rga_power_disable(iVar7);
      }
    }
    iVar4 = iVar4 + 1;
  }
  if (*(int *)(iVar7 + 0x18) < 2) {
    piVar1[0x1bf] = *(int *)(*(int *)(iVar7 + 0xc) + 0x80);
    piVar1[2] = *(int *)(iVar7 + 0xc);
LAB_0001486c:
    iVar4 = piVar1[2];
    if (iVar4 != 0) {
      iVar7 = rga_power_enable(iVar4);
      if (iVar7 < 0) {
        printk(DAT_00014978);
        piVar1[0x1c0] = -0xe;
      }
      else {
        iVar7 = rga_mm_map_job_info(piVar1);
        if (iVar7 < 0) {
          printk(DAT_0001497c,DAT_0001496c);
          piVar1[0x1c0] = iVar7;
        }
        else {
          iVar7 = (**(code **)(*(int *)(iVar4 + 0x54) + 8))(piVar1);
          if (-1 < iVar7) {
            iVar7 = piVar1[2];
            disableIRQinterrupts();
            piVar8 = (int *)(iVar7 + 0x44);
            if ((piVar8 != *(int **)(iVar7 + 0x44)) && (piVar1[0x1be] != 0)) {
              bVar9 = false;
              for (piVar5 = *(int **)(iVar7 + 0x44); piVar8 != piVar5; piVar5 = (int *)*piVar5) {
                if (piVar5[0x1be] < piVar1[0x1be]) {
                  if (!bVar9) {
                    iVar2 = *piVar5;
                    *(int **)(iVar2 + 4) = piVar1;
                    *piVar1 = iVar2;
                    piVar1[1] = (int)piVar5;
                    *piVar5 = (int)piVar1;
                  }
LAB_00014944:
                  piVar5[0x1be] = piVar5[0x1be] + 1;
                  bVar9 = true;
                }
                else if (bVar9) goto LAB_00014944;
              }
              if (bVar9) goto LAB_0001490a;
            }
            piVar5 = *(int **)(iVar7 + 0x48);
            *(int **)(iVar7 + 0x48) = piVar1;
            *piVar1 = (int)piVar8;
            piVar1[1] = (int)piVar5;
            *piVar5 = (int)piVar1;
LAB_0001490a:
            *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
            ____atomic_set_bit(0,piVar1 + 0x1c4);
            rga_job_next_part_2(iVar4);
            rga_power_disable(iVar4);
            return local_2c;
          }
          printk(DAT_00014980,DAT_0001496c);
          piVar1[0x1c0] = iVar7;
          rga_mm_unmap_job_info(piVar1);
        }
        rga_power_disable(iVar4);
      }
      goto LAB_0001484e;
    }
    printk(DAT_00014970,DAT_00014974,0x17c);
    iVar4 = -0xe;
  }
  else {
    iVar4 = rga_job_assign(piVar1);
    piVar1[0x1bf] = iVar4;
    if (0 < iVar4) goto LAB_0001486c;
    printk(DAT_00014968);
    iVar4 = -0x16;
  }
  piVar1[0x1c0] = iVar4;
  iVar4 = 0;
  printk(DAT_00014970,DAT_0001496c,0x197);
LAB_0001484e:
  piVar8 = (int *)piVar1[0x1c0];
  rga_request_release_signal(iVar4,piVar1);
  return piVar8;
}



/* ===== rga_request_commit @ 00014988 size=88 ===== */

uint rga_request_commit(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (param_1[1] <= iVar2) {
      if (param_1[6] == 0x5017) {
        uVar1 = rga_request_wait(param_1);
        uVar1 = uVar1 & (int)uVar1 >> 0x1f;
      }
      else {
        uVar1 = 0;
      }
      return uVar1;
    }
    uVar1 = rga_job_commit(iVar2 * 0x1f8 + *param_1,param_1);
    if (0xfffff000 < uVar1) break;
    iVar2 = iVar2 + 1;
  }
  printk(DAT_000149e0,param_1[0xe],iVar2);
  rga_request_release_abort(param_1,uVar1);
  return uVar1;
}



/* ===== rga_request_mpi_submit @ 000149e4 size=126 ===== */

uint rga_request_mpi_submit(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_2[6] == 0x5018) {
    printk(DAT_00014a64);
  }
  else {
    disableIRQinterrupts();
    if (*(char *)((int)param_2 + 0x11) != '\0') {
      printk(DAT_00014a68);
      return 0xfffffff2;
    }
    if (*param_2 != 0) {
      *(undefined1 *)((int)param_2 + 0x12) = 0;
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      uVar1 = rga_job_commit();
      iVar2 = IS_ERR_OR_NULL();
      if (iVar2 == 0) {
        uVar1 = rga_request_wait(param_2);
        return uVar1 & (int)uVar1 >> 0x1f;
      }
      printk(DAT_00014a70);
      if (uVar1 != 0) {
        return uVar1;
      }
      return 0xfffffff2;
    }
    printk(DAT_00014a6c,param_2[0xe],0,0,param_4);
  }
  return 0xffffffea;
}



/* ===== rga_request_acquire_fence_signaled_cb @ 00014a74 size=54 ===== */

void rga_request_acquire_fence_signaled_cb(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(*DAT_00014aac + 0x54);
  iVar1 = rga_request_commit(uVar3);
  if (iVar1 != 0) {
    printk(DAT_00014ab0);
  }
  mutex_lock(uVar2);
  rga_request_put(uVar3);
  mutex_unlock(uVar2);
  kfree(param_2);
  return;
}



/* ===== rga_request_config @ 00014ab4 size=242 ===== */

int * rga_request_config(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint __n;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(*DAT_00014ba8 + 0x54);
  if (iVar6 == 0) {
    piVar4 = (int *)0xfffffff2;
    printk(DAT_00014bac);
  }
  else {
    mutex_lock(iVar6);
    piVar1 = (int *)rga_request_lookup(iVar6,param_1[3]);
    iVar2 = IS_ERR_OR_NULL();
    if (iVar2 == 0) {
      refcount_inc(piVar1 + 0x10);
      mutex_unlock(iVar6);
      iVar2 = kmalloc_array_constprop_6(param_1[2]);
      if (iVar2 == 0) {
        piVar4 = (int *)0xfffffff4;
        printk(DAT_00014bb4);
      }
      else {
        uVar5 = param_1[2] * 0x1f8;
        if (-1 < (int)uVar5) {
          uVar3 = *(uint *)(((uint)&stack0xffffffe8 & 0xffffe000) + 8);
          if (!CARRY4(*param_1,uVar5) && *param_1 + uVar5 <= uVar3) {
            uVar3 = 0;
          }
          __n = uVar5;
          if (uVar3 == 0) {
            __n = arm_copy_from_user();
          }
          if (__n == 0) {
            disableIRQinterrupts();
            *piVar1 = iVar2;
            *(undefined1 *)(piVar1 + 4) = 1;
            piVar1[1] = param_1[2];
            piVar1[6] = param_1[4];
            *(char *)(piVar1 + 0xd) = (char)param_1[6];
            piVar1[7] = param_1[7];
            return piVar1;
          }
          memset((void *)(iVar2 + (uVar5 - __n)),0,__n);
        }
        piVar4 = (int *)0xfffffff2;
        printk(DAT_00014bb8);
        kfree(iVar2);
      }
      mutex_lock(iVar6);
      rga_request_put(piVar1);
      mutex_unlock(iVar6);
    }
    else {
      piVar4 = (int *)0xffffffea;
      printk(DAT_00014bb0,param_1[3]);
      mutex_unlock(iVar6);
    }
  }
  return piVar4;
}



/* ===== rga_request_kernel_config @ 00014bbc size=172 ===== */

undefined4 * rga_request_kernel_config(undefined4 *param_1)

{
  int iVar1;
  void *__dest;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(*DAT_00014c68 + 0x54);
  if (iVar3 == 0) {
    puVar2 = (undefined4 *)0xfffffff2;
    printk(DAT_00014c6c);
  }
  else {
    mutex_lock(iVar3);
    puVar2 = (undefined4 *)rga_request_lookup(iVar3,param_1[3]);
    iVar1 = IS_ERR_OR_NULL();
    if (iVar1 == 0) {
      refcount_inc(puVar2 + 0x10);
      mutex_unlock(iVar3);
      __dest = (void *)kmalloc_array_constprop_6(param_1[2]);
      if (__dest == (void *)0x0) {
        printk(DAT_00014c74);
        mutex_lock(iVar3);
        rga_request_put(puVar2);
        mutex_unlock(iVar3);
        puVar2 = (undefined4 *)0xfffffff4;
      }
      else {
        memcpy(__dest,(void *)*param_1,param_1[2] * 0x1f8);
        disableIRQinterrupts();
        *puVar2 = __dest;
        *(undefined1 *)(puVar2 + 4) = 1;
        puVar2[1] = param_1[2];
        puVar2[6] = param_1[4];
        *(char *)(puVar2 + 0xd) = (char)param_1[6];
        puVar2[7] = param_1[7];
      }
    }
    else {
      puVar2 = (undefined4 *)0xffffffea;
      printk(DAT_00014c70,param_1[3]);
      mutex_unlock(iVar3);
    }
  }
  return puVar2;
}



/* ===== rga_request_submit @ 00014c78 size=574 ===== */

int rga_request_submit(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_20;
  
  disableIRQinterrupts();
  uStack_20 = param_4;
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    if (*param_1 != 0) {
      iVar9 = *param_1 + 0x40;
      *(undefined1 *)((int)param_1 + 0x12) = 0;
      *(undefined1 *)((int)param_1 + 0x11) = 1;
      param_1[2] = 0;
      param_1[3] = 0;
      iVar6 = 0;
      while( true ) {
        if (param_1[1] <= iVar6) goto LAB_00014d70;
        iVar3 = iVar9 + 0x38;
        iVar7 = *(int *)(iVar9 + 0xe8);
        if (*(char *)(iVar9 + -0x40) == '\x06') {
          iVar4 = iVar3;
          iVar3 = 0;
        }
        else {
          iVar4 = 0;
        }
        if (iVar9 != 0x38) break;
LAB_00014cf0:
        if ((iVar7 << 0x15 < 0) && (*(int *)(iVar9 + 8) != 0 || *(int *)(iVar9 + 0xc) != 0))
        goto LAB_00014d1e;
LAB_00014cfe:
        if (((iVar3 != 0) &&
            ((iVar7 << 0x16 < 0 && (*(int *)(iVar3 + 0xc) != 0 || *(int *)(iVar3 + 8) != 0)))) ||
           ((iVar4 != 0 &&
            ((iVar7 << 0x14 < 0 && (*(int *)(iVar4 + 8) != 0 || *(int *)(iVar4 + 0xc) != 0))))))
        goto LAB_00014d1e;
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 0x1f8;
      }
      if ((-1 < iVar7 << 0x17) || (*(int *)(iVar9 + -0x30) == 0 && *(int *)(iVar9 + -0x2c) == 0)) {
        if (iVar9 != 0) goto LAB_00014cf0;
        goto LAB_00014cfe;
      }
LAB_00014d1e:
      uVar5 = (uint)&uStack_20 & 0xffffe000;
      piVar2 = (int *)(*(int *)(*(int *)(uVar5 + 0xc) + 0x168) + 0x30);
      HintPreloadData(piVar2);
      do {
        ExclusiveAccess(piVar2);
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = *piVar2 + 1;
      piVar2 = (int *)(*(int *)(*(int *)(uVar5 + 0xc) + 0x168) + 0x2c);
      HintPreloadData(piVar2);
      do {
        ExclusiveAccess(piVar2);
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = *piVar2 + 1;
      param_1[0x12] = *(int *)(*(int *)(uVar5 + 0xc) + 0x168);
LAB_00014d70:
      if (param_1[6] == 0x5018) {
        uVar5 = rga_dma_fence_alloc();
        if (0xfffff000 < uVar5) {
          iVar3 = 1;
          printk(DAT_00014ec0);
          goto LAB_00014d90;
        }
        iVar6 = param_1[7];
        param_1[9] = uVar5;
        if (iVar6 < 1) goto LAB_00014e7e;
        uVar8 = *(undefined4 *)(*DAT_00014ec4 + 0x54);
        if (*DAT_00014ec8 != 0) {
          printk(DAT_00014ecc,iVar6);
        }
        iVar9 = rga_get_dma_fence_from_fd(iVar6);
        iVar3 = IS_ERR_OR_NULL();
        if (iVar3 == 0) {
          __close_fd(*(undefined4 *)(*(int *)(((uint)&uStack_20 & 0xffffe000) + 0xc) + 0x304),iVar6)
          ;
          if (iVar9 == 0) goto LAB_00014e7e;
          iVar3 = dma_fence_get_status(iVar9);
          if (iVar3 < 0) {
            printk(DAT_00014edc,DAT_00014ed0);
          }
          else {
            if (iVar3 != 0) goto LAB_00014e7e;
            mutex_lock(uVar8);
            refcount_inc(param_1 + 0x10);
            mutex_unlock(uVar8);
            iVar3 = rga_dma_fence_add_callback(iVar9,DAT_00014ee0,param_1);
            if (-1 < iVar3) goto LAB_00014e90;
            if (iVar3 != -2) {
              printk(DAT_00014ee4,DAT_00014ed0);
            }
            mutex_lock(uVar8);
            rga_request_put(param_1);
            mutex_unlock(uVar8);
          }
        }
        else {
          iVar3 = -0x16;
          printk(DAT_00014ed4,DAT_00014ed0,iVar6);
        }
        printk(DAT_00014ed8,param_1[7]);
      }
      else {
LAB_00014e7e:
        iVar3 = rga_request_commit(param_1);
        if (-1 < iVar3) {
LAB_00014e90:
          if (param_1[9] == 0) {
            return 0;
          }
          iVar6 = rga_dma_fence_get_fd();
          if (iVar6 < 0) {
            printk(DAT_00014eec);
            rga_request_release_abort(param_1,iVar6);
            return iVar6;
          }
          param_1[8] = iVar6;
          return 0;
        }
        printk(DAT_00014ee8);
      }
      if (param_1[9] != 0) {
        iVar9 = param_1[9] + 0x24;
        iVar6 = __refcount_sub_and_test_constprop_8(1,iVar9,0);
        if (iVar6 != 0) {
          dma_fence_release(iVar9);
        }
        param_1[9] = 0;
      }
LAB_00014d90:
      disableIRQinterrupts();
      rga_request_put_current_mm(param_1);
      *(undefined1 *)((int)param_1 + 0x11) = 0;
      return iVar3;
    }
    iVar6 = -0x16;
    printk(DAT_00014ebc,param_1[0xe]);
  }
  else {
    iVar6 = -0xe;
    printk(DAT_00014eb8);
  }
  return iVar6;
}



/* ===== rga_request_get @ 00014ef0 size=6 ===== */

void rga_request_get(int param_1)

{
  __refcount_add_constprop_10(param_1 + 0x40);
  return;
}



/* ===== rga_request_manager_init @ 00014ef6 size=58 ===== */

undefined4
rga_request_manager_init(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_00014f30 + 0x14),0xdc0,param_3,DAT_00014f30,param_4);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    printk(DAT_00014f34);
    uVar2 = 0xfffffff4;
  }
  else {
    __mutex_init(iVar1,DAT_00014f3c,DAT_00014f38);
    uVar2 = 0;
    *(undefined4 *)(iVar1 + 0xc) = DAT_00014f40;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 1;
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  return uVar2;
}



/* ===== rga_request_manager_remove @ 00014f44 size=50 ===== */

void rga_request_manager_remove(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  mutex_lock(iVar1);
  idr_for_each(iVar1 + 0xc,DAT_00014f78,iVar1);
  idr_destroy(iVar1 + 0xc);
  mutex_unlock(iVar1);
  kfree(*param_1);
  *param_1 = 0;
  return;
}



/* ===== RGA2_set_reg_alpha_info @ 00014f80 size=228 ===== */

void RGA2_set_reg_alpha_info(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_2 + 0xf8);
  uVar3 = (uint)uVar1;
  uVar2 = (uint)*(ushort *)(param_2 + 0xfa);
  *(uint *)(param_1 + 0x50) =
       (uint)*(byte *)(param_2 + 0x127) << 0xc | (uint)*(byte *)(param_2 + 0x126) << 4 |
       *(ushort *)(param_2 + 0xf6) & 1 | (*(byte *)(param_2 + 0x128) & 3) << 2 |
       *(ushort *)(param_2 + 0xf6) & 2;
  *(uint *)(param_1 + 0x54) =
       (uVar3 & 1) << 0xf | (uVar2 & 1) << 0x1d | (uint)(uVar1 >> 0xf) | uVar1 >> 6 & 2 |
       uVar1 >> 10 & 0x1c | (uVar3 & 0x70) << 1 | uVar1 >> 3 & 0x100 | (uVar3 & 8) << 6 |
       (uVar3 & 0x600) << 1 | (uVar3 & 6) << 0xb | (uVar3 & 0x100) << 6 | (uVar2 & 0x7000) << 4 |
       (uVar2 & 0x70) << 0xf | (uVar2 & 0x800) << 0xb | (uVar2 & 8) << 0x14 | (uVar2 & 0x600) << 0xf
       | (uVar2 & 6) << 0x19 | (uVar2 & 0x100) << 0x14;
  if ((int)((uint)*(ushort *)(param_2 + 0xf6) << 0x1d) < 0) {
    *(uint *)(param_1 + 0x58) =
         (uint)*(byte *)(param_2 + 0x124) << 8 | (uint)*(byte *)(param_2 + 0x125) << 0x10 |
         (uint)*(byte *)(param_2 + 0x123) | 0x1000000;
  }
  return;
}



/* ===== rga2_dump_read_back_sys_reg @ 00015064 size=94 ===== */

void rga2_dump_read_back_sys_reg(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_70 [24];
  
  memset(auStack_70,0,0x60);
  disableIRQinterrupts();
  iVar4 = 0;
  puVar2 = auStack_70;
  do {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
    DataSynchronizationBarrier(0xf);
    iVar4 = iVar4 + 4;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x60);
  printk(DAT_000150c4);
  uVar1 = DAT_000150c8;
  puVar2 = auStack_70;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 0x10;
    printk(uVar1,iVar4,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    puVar2 = puVar2 + 4;
    iVar4 = iVar5;
  } while (iVar5 != 0x60);
  return;
}



/* ===== rga2_dump_read_back_csc_reg @ 000150cc size=94 ===== */

void rga2_dump_read_back_csc_reg(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_40 [12];
  
  memset(auStack_40,0,0x30);
  disableIRQinterrupts();
  iVar4 = 0x60;
  puVar2 = auStack_40;
  do {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
    DataSynchronizationBarrier(0xf);
    iVar4 = iVar4 + 4;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x90);
  printk(DAT_0001512c);
  uVar1 = DAT_00015130;
  puVar2 = auStack_40;
  iVar4 = 0x60;
  do {
    iVar5 = iVar4 + 0x10;
    printk(uVar1,iVar4,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    puVar2 = puVar2 + 4;
    iVar4 = iVar5;
  } while (iVar5 != 0x90);
  return;
}



/* ===== rga2_dump_read_back_cmd_reg @ 00015134 size=102 ===== */

void rga2_dump_read_back_cmd_reg(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_90 [32];
  
  memset(auStack_90,0,0x80);
  disableIRQinterrupts();
  iVar4 = 0x100;
  puVar2 = auStack_90;
  do {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
    DataSynchronizationBarrier(0xf);
    iVar4 = iVar4 + 4;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x180);
  printk(DAT_0001519c);
  uVar1 = DAT_000151a0;
  puVar2 = auStack_90;
  iVar4 = 0x100;
  do {
    iVar5 = iVar4 + 0x10;
    printk(uVar1,iVar4,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    puVar2 = puVar2 + 4;
    iVar4 = iVar5;
  } while (iVar5 != 0x180);
  return;
}



/* ===== rga_write @ 000151a4 size=24 ===== */

void rga_write(undefined4 param_1,int param_2,int param_3)

{
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(*(int *)(param_3 + 4) + param_2) = param_1;
  return;
}



/* ===== rga2_soft_reset @ 000151bc size=120 ===== */

void rga2_soft_reset(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r6;
  
  iVar1 = DAT_00015240;
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x48) == 2) {
    unaff_r6 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xf00);
    DataSynchronizationBarrier(0xf);
  }
  rga_write(0x58,0,param_1);
  uVar2 = DAT_00015234;
  iVar3 = 0;
  do {
    DataSynchronizationBarrier(0xf);
    if (-1 < **(int **)(param_1 + 4) << 0x1f) break;
    iVar3 = iVar3 + 1;
    (**(code **)(iVar1 + 4))(uVar2);
  } while (iVar3 != 1000);
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x48) == 2) {
    rga_write(unaff_r6,0xf00,param_1);
    rga_write(0,0xf08,param_1);
  }
  uVar2 = DAT_00015238;
  if (iVar3 != 1000) {
    uVar2 = DAT_0001523c;
  }
  printk(uVar2);
  return;
}



/* ===== RGA2_set_reg_dst_info @ 00015244 size=1266 ===== */

void RGA2_set_reg_dst_info(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  bool bVar27;
  uint local_4c;
  uint local_44;
  uint local_38;
  
  uVar4 = *(ushort *)(param_2 + 0xf6);
  uVar10 = (uVar4 & 0x1ff) >> 8;
  switch(*(undefined4 *)(param_2 + 0x58)) {
  case 1:
    uVar16 = 0;
    goto LAB_000152da;
  case 2:
    uVar12 = 0;
    goto LAB_000155d0;
  case 3:
    uVar16 = 0;
    goto LAB_000152cc;
  case 4:
    uVar12 = 0;
    goto LAB_000155e8;
  case 5:
    uVar16 = 0;
    goto LAB_000155f2;
  case 6:
    uVar16 = 0;
    goto LAB_000155fc;
  case 7:
    uVar12 = 1;
LAB_000155d0:
    uVar16 = 0;
    iVar20 = 3;
    iVar5 = 0;
    iVar15 = 2;
    goto LAB_000152de;
  default:
    uVar16 = 0;
    goto LAB_0001562e;
  case 0x16:
    uVar16 = 0;
    goto LAB_000155c2;
  case 0x24:
    uVar12 = 1;
LAB_000155e8:
    uVar16 = 0;
    iVar20 = 2;
    iVar5 = 0;
    iVar15 = 4;
    goto LAB_000152de;
  case 0x25:
    uVar16 = 0;
    uVar12 = 1;
    break;
  case 0x26:
    uVar16 = 0;
    uVar12 = 1;
    goto LAB_00015624;
  case 0x28:
    uVar16 = 1;
LAB_0001562e:
    uVar12 = 0;
    goto LAB_000152d0;
  case 0x29:
    uVar16 = 1;
LAB_000152da:
    uVar12 = 0;
LAB_000152dc:
    iVar20 = 4;
    iVar5 = 0;
    iVar15 = 1;
    goto LAB_000152de;
  case 0x2a:
    uVar16 = 1;
LAB_000155f2:
    uVar12 = 0;
    break;
  case 0x2b:
    uVar16 = 1;
LAB_000155fc:
    uVar12 = 0;
    goto LAB_00015624;
  case 0x2c:
    uVar16 = 1;
LAB_000152cc:
    uVar12 = 1;
LAB_000152d0:
    iVar20 = 4;
    iVar15 = 0;
    iVar5 = iVar15;
    goto LAB_000152de;
  case 0x2d:
    uVar16 = 1;
LAB_000155c2:
    uVar12 = 1;
    goto LAB_000152dc;
  case 0x2e:
    uVar16 = 1;
    uVar12 = uVar16;
    break;
  case 0x2f:
    uVar16 = 1;
    uVar12 = uVar16;
LAB_00015624:
    iVar20 = 2;
    iVar5 = 0;
    iVar15 = 6;
    goto LAB_000152de;
  case 0x30:
    uVar12 = 0;
    uVar16 = (uint)*(byte *)(param_2 + 0x174);
    iVar5 = 2;
    iVar20 = 1;
    iVar15 = 0;
    goto LAB_000152de;
  }
  iVar20 = 2;
  iVar5 = 0;
  iVar15 = 5;
LAB_000152de:
  uVar24 = *(uint *)(param_2 + 0x90);
  if (uVar24 < 0x30) {
    iVar11 = DAT_00015654 + uVar24;
    local_38 = (uint)*(byte *)(iVar11 + 0x60);
    uVar19 = (uint)*(byte *)(iVar11 + 0x30);
    local_44 = (uint)*(byte *)(iVar11 + 0xc0);
    uVar18 = (uint)*(byte *)(iVar11 + 0xf0);
    local_4c = (uint)*(byte *)(iVar11 + 0x120);
    uVar1 = *(undefined1 *)(iVar11 + 0x150);
    uVar2 = *(undefined1 *)(iVar11 + 0x180);
    uVar21 = (uint)*(byte *)(DAT_00015654 + uVar24);
    uVar26 = (uint)*(byte *)(iVar11 + 0x90);
  }
  else {
    uVar18 = 0;
    uVar19 = 0;
    local_44 = 0;
    uVar2 = 1;
    uVar1 = 1;
    local_4c = 1;
    local_38 = 0;
    uVar21 = uVar19;
    uVar26 = uVar19;
  }
  uVar9 = (uint)*(byte *)(param_2 + 0x12d);
  uVar12 = (uVar9 & 0x60) << 0xf |
           (uVar9 & 0x10) << 0xe |
           (*(byte *)(param_2 + 0x14b) & 3) << 0xe | (*(byte *)(param_2 + 0x12e) & 1) << 0x13 |
           (uint)(*(byte *)(param_2 + 0x12d) >> 7) << 0x16 |
           (*(byte *)(param_2 + 0x150) & 1) << 0x17 | (*(byte *)(param_2 + 0x151) & 1) << 0x1b |
           (uVar4 & 0x20) << 7 | (uVar4 >> 6 & 1) << 0xd | (uVar9 & 0xc) << 0xe | uVar10 << 0x1a |
           iVar15 << 7 | uVar12 << 10 | (uVar16 & 1) << 0xb | uVar21;
  if (uVar24 == 0x14) {
    uVar21 = uVar4 >> 6 & 1;
  }
  if (uVar24 != 0x14) {
    uVar21 = 0;
  }
  *(uint *)(param_1 + 0x38) =
       uVar12 | uVar19 << 4 | uVar26 << 5 | local_38 << 6 | local_44 << 0x18 | uVar18 << 0x19;
  uVar12 = (int)(local_4c * *(ushort *)(param_2 + 0x9c) + 3) >> 2;
  iVar15 = ((int)(iVar20 * (uint)*(ushort *)(param_2 + 100)) >> iVar5) + 3 >> 2;
  if (uVar18 != 0) {
    uVar12 = uVar12 + 1 >> 1;
  }
  iVar23 = uVar12 * 4;
  iVar11 = __aeabi_uidiv(iVar23,uVar1);
  *(uint *)(param_1 + 0x48) = uVar12 | iVar15 << 0x10;
  if ((((int)((uint)*(ushort *)(param_2 + 0x9c) << 0x1f) < 0) &&
      (*(int *)(param_2 + 0x94) == *(int *)(param_2 + 0x24))) &&
     ((*(int *)(param_2 + 0x90) == 7 || (*(int *)(param_2 + 0x90) == 2)))) {
    uVar4 = *(ushort *)(param_2 + 0x96);
    uVar12 = (uint)*(ushort *)(param_2 + 0x94);
  }
  else {
    uVar4 = *(ushort *)(param_2 + 0x96);
    uVar12 = *(ushort *)(param_2 + 0x94) - 1;
  }
  *(uint *)(param_1 + 0x4c) = uVar12 | (uVar4 - 1) * 0x10000;
  bVar3 = *(byte *)(param_2 + 0xf5);
  bVar27 = (bVar3 & 0xe) != 0;
  bVar8 = bVar27 + (bVar3 >> 4) & 1;
  bVar14 = bVar27 + (bVar3 >> 5) & 1;
  if (uVar21 != 0) {
    if ((bVar8 != 0) && (bVar14 != 0)) {
      printk(DAT_00015658,1);
    }
    if (*(short *)(param_2 + 0x94) != *(short *)(param_2 + 0x24)) {
      printk(DAT_0001565c);
    }
    if (*(short *)(param_2 + 0x96) != *(short *)(param_2 + 0x26)) {
      printk(DAT_00015660);
    }
  }
  if (uVar18 != 0) {
    *(uint *)(param_1 + 0x60) =
         CONCAT22(*(undefined2 *)(param_2 + 0x11a),*(undefined2 *)(param_2 + 0x11e));
    *(uint *)(param_1 + 100) =
         CONCAT22(*(undefined2 *)(param_2 + 0x11c),*(undefined2 *)(param_2 + 0x120));
  }
  if (uVar10 != 0) {
    *(uint *)(param_1 + 0x60) =
         (uint)*(ushort *)(param_2 + 0x11e) | (int)*(short *)(param_2 + 0x11a) << 10 |
         (int)*(short *)(param_2 + 0x116) << 0x14;
    *(uint *)(param_1 + 100) =
         (uint)*(ushort *)(param_2 + 0x120) | (int)*(short *)(param_2 + 0x11c) << 10 |
         (int)*(short *)(param_2 + 0x118) << 0x14;
  }
  *(uint *)(param_1 + 0x14) =
       iVar15 * 4 * (uint)*(ushort *)(param_2 + 0x62) +
       ((int)((uint)*(ushort *)(param_2 + 0x60) * iVar20) >> iVar5) + *(int *)(param_2 + 0x40);
  if (uVar18 == 0) {
    iVar5 = local_4c * *(ushort *)(param_2 + 0x98);
  }
  else {
    iVar5 = (int)(local_4c * *(ushort *)(param_2 + 0x98)) >> 1;
  }
  iVar20 = iVar23 * (uint)*(ushort *)(param_2 + 0x9a) + *(int *)(param_2 + 0x78) + iVar5;
  iVar5 = __aeabi_uidiv(*(undefined2 *)(param_2 + 0x9a),uVar2);
  iVar15 = __aeabi_uidiv(*(undefined2 *)(param_2 + 0x98),uVar1);
  iVar22 = *(int *)(param_2 + 0x80) + iVar15 + iVar11 * iVar5;
  iVar5 = iVar15 + *(int *)(param_2 + 0x88) + iVar11 * iVar5;
  uVar4 = *(ushort *)(param_2 + 0x94);
  if (uVar18 != 0) {
    uVar4 = uVar4 >> 1;
  }
  iVar15 = rga_is_yuv422_packed_format(*(undefined4 *)(param_2 + 0x90));
  if (iVar15 == 0) {
    iVar15 = rga_is_yuv420_packed_format(*(undefined4 *)(param_2 + 0x90));
    uVar10 = (uint)*(ushort *)(param_2 + 0x96);
    if (iVar15 == 0) {
      iVar15 = (uVar4 - 1) * local_4c;
      goto LAB_000155b6;
    }
    iVar17 = iVar23 * (*(ushort *)(param_2 + 0x9a) + uVar10 + -1) +
             (uint)*(ushort *)(param_2 + 0x98) + *(int *)(param_2 + 0x78);
    iVar23 = iVar20 + (uint)*(ushort *)(param_2 + 0x94) * 2 + -1;
    iVar15 = *(ushort *)(param_2 + 0x94) - 1;
  }
  else {
    uVar10 = (uint)*(ushort *)(param_2 + 0x96);
    iVar15 = (uint)*(ushort *)(param_2 + 0x94) * 2 + -1;
LAB_000155b6:
    iVar17 = iVar23 * (uVar10 - 1) + iVar20;
    iVar23 = iVar15 + iVar20;
  }
  iVar6 = __aeabi_uidiv(*(undefined2 *)(param_2 + 0x96),uVar2);
  iVar11 = iVar11 * (iVar6 + -1);
  iVar13 = iVar11 + iVar22;
  iVar11 = iVar11 + iVar5;
  iVar7 = __aeabi_uidiv(*(undefined2 *)(param_2 + 0x94),uVar1);
  iVar7 = iVar7 + -1;
  iVar25 = iVar7 + iVar22;
  iVar6 = iVar7 + iVar5;
  if ((bVar3 & 1) == 0) {
    if (bVar14 != 0) {
      iVar6 = iVar7 + iVar11;
      iVar25 = iVar7 + iVar13;
      iVar23 = iVar15 + iVar17;
      if (bVar8 == 0) {
        iVar6 = iVar11;
        iVar25 = iVar13;
        iVar23 = iVar17;
      }
      goto LAB_0001574a;
    }
    if (bVar8 != 0) goto LAB_0001574a;
  }
  else {
    if (bVar14 != 0) {
      iVar6 = iVar7 + iVar11;
      iVar25 = iVar7 + iVar13;
      iVar23 = iVar15 + iVar17;
      if (bVar8 != 0) {
        iVar6 = iVar11;
        iVar25 = iVar13;
        iVar23 = iVar17;
      }
      goto LAB_0001574a;
    }
    if (bVar8 == 0) goto LAB_0001574a;
  }
  iVar6 = iVar5;
  iVar25 = iVar22;
  iVar23 = iVar20;
LAB_0001574a:
  *(int *)(param_1 + 0x3c) = iVar23;
  if (((*(uint *)(param_2 + 0x90) & 0xfffffffb) == 0xb) && (local_38 == 0)) {
    *(int *)(param_1 + 0x40) = iVar6;
    *(int *)(param_1 + 0x44) = iVar25;
  }
  else {
    *(int *)(param_1 + 0x40) = iVar25;
    *(int *)(param_1 + 0x44) = iVar6;
  }
  return;
}



/* ===== rga2_get_version @ 000157a8 size=74 ===== */

undefined4 rga2_get_version(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    printk(DAT_000157f4);
    uVar1 = 0xffffffea;
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x28);
    DataSynchronizationBarrier(0xf);
    uVar3 = uVar2 >> 0x18;
    uVar4 = (uVar2 & 0xffffff) >> 0x14;
    if (uVar3 == 0 && uVar4 == 0) {
      uVar3 = 2;
    }
    snprintf((char *)(param_1 + 0x70),10,DAT_000157f8,uVar3,uVar4,uVar2 & 0xfffff,param_3);
    *(uint *)(param_1 + 100) = uVar3;
    *(uint *)(param_1 + 0x68) = uVar4;
    *(uint *)(param_1 + 0x6c) = uVar2 & 0xfffff;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rga2_read_back_reg @ 000157fc size=38 ===== */

undefined4 rga2_read_back_reg(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x180) != '\0') {
    DataSynchronizationBarrier(0xf);
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(*(int *)(param_2 + 4) + 0x90);
    DataSynchronizationBarrier(0xf);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(*(int *)(param_2 + 4) + 0x9c);
  }
  return 0;
}



/* ===== rga2_isr_thread @ 00015822 size=136 ===== */

undefined4 rga2_isr_thread(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*DAT_000158ac != 0) {
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    printk(DAT_000158b0,*(undefined4 *)(*(int *)(param_2 + 4) + 0x10),
           *(undefined4 *)(*(int *)(param_2 + 4) + 0x1c),
           *(undefined4 *)(*(int *)(param_2 + 4) + 0xc));
  }
  if (-1 < *(int *)(param_1 + 0x710) << 0x1a) {
    return 1;
  }
  if (*(int *)(param_1 + 0x718) << 0x1f < 0) {
    printk(DAT_000158b4);
  }
  if (*(int *)(param_1 + 0x718) << 0x1e < 0) {
    printk(DAT_000158b8);
  }
  if (*(int *)(param_1 + 0x714) << 0x1f < 0) {
    printk(DAT_000158bc);
  }
  else {
    if (*(int *)(param_1 + 0x714) << 0x1e < 0) {
      printk(DAT_000158c0);
      uVar1 = 0xfffffff3;
      goto LAB_00015892;
    }
    if (*(int *)(param_1 + 0x700) != 0) {
      return 1;
    }
    printk(DAT_000158c4);
  }
  uVar1 = 0xfffffff2;
LAB_00015892:
  *(undefined4 *)(param_1 + 0x700) = uVar1;
  return 1;
}



/* ===== rga2_set_reg @ 000158c8 size=700 ===== */

undefined4 rga2_set_reg(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  longlong lVar19;
  
  lVar19 = ktime_get();
  iVar11 = *(int *)(*(int *)(param_2 + 0x58) + 0x48);
  if (*(char *)(param_1 + 0x630) != '\0') {
    if (*(char *)(param_1 + 0x631) != '\0') {
      rga_write(*(uint *)(param_1 + 0x634) & 0x1fff,0x30,param_2);
    }
    if (*(char *)(param_1 + 0x632) != '\0') {
      rga_write(*(uint *)(param_1 + 0x638) & 0x1fff |
                DAT_00015b90 & *(int *)(param_1 + 0x63c) << 0x10,0x34,param_2);
    }
    DataSynchronizationBarrier(0xf);
    rga_write(**(uint **)(param_2 + 4) & 0xfffffdff | (*(byte *)(param_1 + 0x633) & 1) << 9,0,
              param_2);
    DataSynchronizationBarrier(0xf);
    rga_write(*(uint *)(*(int *)(param_2 + 4) + 0x10) & 0xffff9fff |
              (*(byte *)(param_1 + 0x631) & 1) << 0xd | (*(byte *)(param_1 + 0x632) & 1) << 0xe |
              0x18000,0x10,param_2);
  }
  if (*(char *)(param_1 + 0x608) != '\0') {
    rga_write((int)*(short *)(param_1 + 0x60c) | 0xff0000,0x60,param_2);
    rga_write((int)*(short *)(param_1 + 0x60e) | 0xff0000,100,param_2);
    rga_write((int)*(short *)(param_1 + 0x610),0x68,param_2);
    rga_write(*(undefined4 *)(param_1 + 0x614),0x6c,param_2);
    rga_write((int)*(short *)(param_1 + 0x618),0x70,param_2);
    rga_write((int)*(short *)(param_1 + 0x61a),0x74,param_2);
    rga_write((int)*(short *)(param_1 + 0x61c),0x78,param_2);
    rga_write(*(undefined4 *)(param_1 + 0x620),0x7c,param_2);
    rga_write((int)*(short *)(param_1 + 0x624),0x80,param_2);
    rga_write((int)*(short *)(param_1 + 0x626),0x84,param_2);
    rga_write((int)*(short *)(param_1 + 0x628),0x88,param_2);
    rga_write(*(undefined4 *)(param_1 + 0x62c),0x8c,param_2);
  }
  piVar7 = DAT_00015b94;
  if (*DAT_00015b94 != 0) {
    rga2_dump_read_back_sys_reg(param_2);
    rga2_dump_read_back_csc_reg(param_2);
    printk(DAT_00015b98);
    iVar13 = param_1;
    iVar15 = 0;
    do {
      puVar14 = (undefined4 *)(iVar13 + 0x214);
      iVar16 = iVar15 + 1;
      puVar1 = (undefined4 *)(iVar13 + 0x210);
      puVar2 = (undefined4 *)(iVar13 + 0x208);
      puVar3 = (undefined4 *)(iVar13 + 0x20c);
      iVar13 = iVar13 + 0x10;
      printk(DAT_00015b9c,iVar15,*puVar2,*puVar3,*puVar1,*puVar14);
      iVar15 = iVar16;
    } while (iVar16 != 8);
  }
  DataSynchronizationBarrier(0xf);
  rga_write(*(uint *)(*(int *)(param_2 + 4) + 0x10) | 0x700,0x10,param_2);
  if (iVar11 == 2) {
    puVar14 = (undefined4 *)(param_1 + 0x208);
    iVar11 = 0x100;
    do {
      iVar13 = iVar11 + 4;
      rga_write(*puVar14,iVar11,param_2);
      puVar14 = puVar14 + 1;
      iVar11 = iVar13;
    } while (iVar13 != 0x184);
    uVar9 = 0;
    uVar8 = 0x1865;
  }
  else {
    rga_dma_sync_flush_range((undefined4 *)(param_1 + 0x208),param_1 + 0x288,param_2);
    rga_write(param_1 + -0x7efffdf8,8,param_2);
    rga_write(0x1866,0,param_2);
    uVar9 = 4;
    uVar8 = 1;
  }
  rga_write(uVar8,uVar9,param_2);
  if (*piVar7 != 0) {
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    printk(DAT_00015ba0,**(undefined4 **)(param_2 + 4),*(undefined4 *)(*(int *)(param_2 + 4) + 0x10)
          );
  }
  if (*DAT_00015ba4 != 0) {
    uVar6 = lVar19 - *(longlong *)(param_1 + 0x6d8);
    iVar11 = (int)(uVar6 >> 0x20);
    uVar5 = uVar6;
    if ((longlong)uVar6 < 0) {
      uVar5 = CONCAT44(-iVar11 - (uint)((int)uVar6 != 0),-(int)uVar6);
    }
    uVar12 = (uint)(uVar5 >> 0x20);
    lVar4 = (ulonglong)DAT_00015b88 * (uVar5 & 0xffffffff);
    uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
    bVar18 = CARRY4((uint)lVar4,DAT_00015b88);
    uVar5 = (ulonglong)DAT_00015b8c * (uVar5 & 0xffffffff) +
            (ulonglong)
            CONCAT14(CARRY4(uVar10,DAT_00015b8c) || CARRY4(uVar10 + DAT_00015b8c,(uint)bVar18),
                     uVar10 + DAT_00015b8c + (uint)bVar18);
    uVar10 = (uint)(uVar5 >> 0x20);
    uVar17 = (uint)((ulonglong)DAT_00015b88 * (ulonglong)uVar12 + (uVar5 & 0xffffffff) >> 0x20);
    uVar5 = (ulonglong)DAT_00015b8c * (ulonglong)uVar12 +
            (ulonglong)CONCAT14(CARRY4(uVar17,uVar10),uVar17 + uVar10) >> 9;
    if ((longlong)uVar6 < 0) {
      uVar5 = CONCAT44(-(int)(uVar5 >> 0x20) - (uint)((int)uVar5 != 0),-(int)uVar5);
    }
    printk(DAT_00015ba8,iVar11,(int)uVar5,(int)(uVar5 >> 0x20));
  }
  *(longlong *)(param_1 + 0x6e0) = lVar19;
  iVar11 = *piVar7;
  *(longlong *)(param_1 + 0x6e8) = lVar19;
  if (iVar11 != 0) {
    rga2_dump_read_back_sys_reg(param_2);
    rga2_dump_read_back_csc_reg(param_2);
    rga2_dump_read_back_cmd_reg(param_2);
  }
  return 0;
}



/* ===== rga2_init_reg @ 00015bac size=4510 ===== */

uint rga2_init_reg(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined2 uVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  bool bVar34;
  uint local_1dc;
  uint local_1cc;
  uint local_1c8;
  byte local_1b8 [8];
  int local_1b0 [5];
  int iStack_19c;
  uint local_198;
  undefined4 local_194;
  ushort local_190;
  ushort local_18e;
  ushort local_18c;
  ushort local_18a;
  int local_178 [5];
  int iStack_164;
  int local_160;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined2 local_158;
  undefined2 local_156;
  undefined2 local_154;
  undefined2 local_152;
  int local_140 [6];
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  ushort local_11c;
  ushort local_11a;
  int local_108 [7];
  ushort local_ec;
  ushort local_ea;
  ushort local_e8;
  ushort local_e6;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  byte local_c4;
  byte local_c3;
  ushort local_c2;
  undefined4 local_c0;
  byte local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined4 local_a6 [4];
  undefined1 local_95;
  ushort local_94;
  undefined1 local_92;
  undefined1 local_91;
  byte local_90;
  ushort local_8e;
  byte local_8c;
  byte local_8b;
  byte local_89;
  char local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  bool local_74;
  byte local_73;
  bool local_72;
  byte local_71;
  byte local_70;
  byte local_6f;
  undefined1 local_6d;
  undefined2 local_6b;
  byte local_69;
  undefined1 local_68;
  char local_67;
  byte local_60 [2];
  byte bStack_5e;
  byte bStack_5d;
  byte local_5c [2];
  ushort local_5a;
  byte local_58;
  ushort local_56;
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  byte local_50;
  byte local_4f;
  byte local_4e;
  ushort local_4c;
  byte local_4a;
  byte local_49;
  byte local_48;
  byte local_47;
  char local_43;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar23 = *(int *)(param_1 + 8);
  if (iVar23 == 0) {
    printk(DAT_00015e9c,DAT_00015e98,0x8bb);
    return 0xffffffea;
  }
  memset(local_1b8,0,400);
  bVar8 = *(byte *)(param_1 + 0x10);
  if (((bVar8 == 6) || (bVar8 == 7)) || (bVar8 != 5)) {
    local_1b8[0] = bVar8;
  }
  piVar25 = local_1b0;
  piVar15 = (int *)(param_1 + 0x18);
  do {
    piVar14 = piVar15 + 2;
    iVar9 = piVar15[1];
    *piVar25 = *piVar15;
    piVar25[1] = iVar9;
    piVar25 = piVar25 + 2;
    piVar15 = piVar14;
  } while (piVar14 != (int *)(param_1 + 0x50));
  piVar25 = local_140;
  do {
    piVar15 = piVar14 + 2;
    iVar9 = piVar14[1];
    *piVar25 = *piVar14;
    piVar25[1] = iVar9;
    piVar25 = piVar25 + 2;
    piVar14 = piVar15;
  } while (piVar15 != (int *)(param_1 + 0x88));
  if (local_1b8[0] == 6) {
    piVar25 = local_108;
    do {
      piVar14 = piVar15 + 2;
      iVar9 = piVar15[1];
      *piVar25 = *piVar15;
      piVar25[1] = iVar9;
      piVar25 = piVar25 + 2;
      piVar15 = piVar14;
    } while (piVar14 != (int *)(param_1 + 0xc0));
  }
  else {
    piVar25 = local_178;
    do {
      piVar14 = piVar15 + 2;
      iVar9 = piVar15[1];
      *piVar25 = *piVar15;
      piVar25[1] = iVar9;
      piVar25 = piVar25 + 2;
      piVar15 = piVar14;
    } while (piVar14 != (int *)(param_1 + 0xc0));
  }
  local_128 = *(int *)(param_1 + 0x68);
  local_198 = *(uint *)(param_1 + 0x30);
  local_160 = *(int *)(param_1 + 0xa0);
  switch(*(byte *)(param_1 + 0x124) & 0xf) {
  case 1:
    iVar9 = *(int *)(param_1 + 0xd8);
    if (iVar9 == 0) {
      if (*(int *)(param_1 + 0xdc) == -0x10000) {
        local_c3 = 2;
        local_120 = *(uint *)(param_1 + 0x70);
      }
    }
    else if (iVar9 == 0x10000) {
      if (*(int *)(param_1 + 0xdc) == 0) {
        local_c3 = 1;
        local_120 = CONCAT22(local_120._2_2_,*(undefined2 *)(param_1 + 0x70));
LAB_00015e36:
        local_124 = CONCAT22(*(undefined2 *)(param_1 + 0x6c),*(undefined2 *)(param_1 + 0x6e));
      }
    }
    else if ((iVar9 == -0x10000) && (*(int *)(param_1 + 0xdc) == 0)) {
      local_c3 = 3;
      local_120 = CONCAT22(*(undefined2 *)(param_1 + 0x72),(undefined2)local_120);
      goto LAB_00015e36;
    }
    break;
  case 2:
    local_c3 = 0x10;
    break;
  case 3:
    local_c3 = 0x20;
    break;
  case 4:
    local_c3 = 0x30;
  }
  bVar8 = *(byte *)(param_1 + 0x124) >> 4;
  if (bVar8 == 3) {
    local_c3 = local_c3 | 0x20;
  }
  else if (bVar8 == 4) {
    local_c3 = local_c3 | 0x30;
  }
  else if (bVar8 == 2) {
    local_c3 = local_c3 | 0x10;
  }
  local_cc = *(undefined4 *)(param_1 + 200);
  local_a8 = *(byte *)(param_1 + 0x125);
  local_d0 = *(undefined4 *)(param_1 + 0xc0);
  local_c4 = *(byte *)(param_1 + 0x120);
  local_92 = *(undefined1 *)(param_1 + 0x11d);
  local_8e = *(ushort *)(param_1 + 0x11e);
  local_90 = *(byte *)(param_1 + 0x140);
  local_70 = local_90 >> 4;
  local_6f = *(byte *)(param_1 + 0x141);
  local_b4 = *(undefined4 *)(param_1 + 0xe8);
  local_b8 = *(undefined4 *)(param_1 + 0xe4);
  local_b0 = *(undefined4 *)(param_1 + 0xec);
  local_ac = *(undefined4 *)(param_1 + 0xf0);
  puVar11 = local_a6;
  puVar17 = (undefined4 *)(param_1 + 0xf4);
  local_91 = local_92;
  do {
    puVar16 = puVar17 + 1;
    *puVar11 = *puVar17;
    puVar11 = puVar11 + 1;
    puVar17 = puVar16;
  } while (puVar16 != (undefined4 *)(param_1 + 0x104));
  local_8c = *(byte *)(param_1 + 0x121);
  uVar1 = *(ushort *)(param_1 + 0xe0);
  local_8b = *(byte *)(param_1 + 0x122);
  local_89 = *(byte *)(param_1 + 0x123);
  local_95 = *(undefined1 *)(param_1 + 0x11a);
  local_94 = *(ushort *)(param_1 + 0x118) << 8 | *(ushort *)(param_1 + 0x118) >> 8;
  local_c2 = uVar1 & 7 | uVar1 >> 1 & 8 | (uVar1 & 0x20) << 1 | (uVar1 & 0x40) << 1 | uVar1 & 0x100;
  local_6d = *(undefined1 *)(param_1 + 0x142);
  local_6b = *(undefined2 *)(param_1 + 0x179);
  if (((*(int *)(*(int *)(iVar23 + 0x58) + 4) << 0x17 < 0) &&
      (iVar9 = rga_is_only_y_format(), iVar9 != 0)) &&
     (iVar9 = rga_is_only_y_format(local_128), iVar9 != 0)) {
    local_69 = 1;
  }
  local_68 = *(undefined1 *)(param_1 + 0x17b);
  pbVar27 = local_60;
  local_67 = *(char *)(param_1 + 0x17c);
  puVar11 = (undefined4 *)(param_1 + 0x180);
  do {
    puVar17 = puVar11 + 2;
    uVar10 = puVar11[1];
    *(undefined4 *)pbVar27 = *puVar11;
    *(undefined4 *)(pbVar27 + 4) = uVar10;
    pbVar27 = pbVar27 + 8;
    puVar11 = puVar17;
  } while (puVar17 != (undefined4 *)(param_1 + 0x1b8));
  uVar3 = (uint)*(ushort *)(param_1 + 0xe0);
  if ((int)(uVar3 << 0x1f) < 0) {
    if ((int)(uVar3 << 0x1c) < 0) {
      switch(*(undefined1 *)(param_1 + 0x11c)) {
      case 1:
        local_c0 = DAT_00015ea0;
        break;
      case 2:
        local_c0 = DAT_00015ea4;
        break;
      case 3:
        bVar8 = *(byte *)(param_1 + 0x140) & 3;
        if ((*(byte *)(param_1 + 0x140) & 3) == 0) {
          uVar13 = 0x3010;
        }
        else if (bVar8 == 1) {
          uVar13 = 0x3212;
        }
        else {
          uVar13 = 0x3014;
          if (bVar8 != 2) {
            uVar13 = 0x3012;
          }
        }
        local_c0 = CONCAT22(uVar13,uVar13);
        break;
      case 4:
        local_c0 = DAT_00016104;
        break;
      case 9:
        local_c0 = DAT_00016108;
        break;
      case 0xc:
        local_c0 = DAT_0001610c;
      }
      if ((local_60[0] != 0) && ((int)(local_c0 << 0x16) < 0)) {
        local_c0 = CONCAT22(local_c0._2_2_,~((ushort)~(ushort)((local_c0 << 0x11) >> 0x10) >> 1));
      }
      if ((int)(uVar3 << 0x16) < 0) {
        if ((int)(local_c0 << 0x1e) < 0) {
          local_c0 = local_c0 | 0x80;
        }
        if ((int)(local_c0 << 0x16) < 0) {
          local_c0 = CONCAT22(local_c0._2_2_,~((ushort)~(ushort)((local_c0 << 0x11) >> 0x10) >> 1));
        }
      }
    }
    else {
      bVar8 = *(byte *)(param_1 + 0x140) & 3;
      uVar3 = DAT_00016108;
      if ((((*(byte *)(param_1 + 0x140) & 3) == 0) || (uVar3 = DAT_00016110, bVar8 == 1)) ||
         (uVar3 = DAT_00016114, bVar8 == 2)) {
        local_c0 = uVar3;
      }
    }
  }
  if ((*(char *)(param_1 + 0x128) != '\0') && (iVar9 = *(int *)(param_1 + 0x138), iVar9 << 0x1f < 0)
     ) {
    if (iVar9 < 0) {
      local_74 = SUB41((uint)(iVar9 << 0x17) >> 0x1f,0);
      local_73 = (byte)((uint)(iVar9 << 0x16) >> 0x1f);
      local_72 = SUB41((uint)(iVar9 << 0x15) >> 0x1f,0);
      local_71 = (byte)((uint)(iVar9 << 0x14) >> 0x1f);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x18);
      iVar9 = *(int *)(param_1 + 0x1c);
      if (iVar9 != 0 || 0x9fffffff < uVar3) {
        local_1b0[0] = uVar3 + 0xa0000000;
        local_1b0[1] = iVar9 + -1 + (uint)(0x5fffffff < uVar3);
        local_1b0[2] = *(uint *)(param_1 + 0x20) + 0xa0000000;
        local_1b0[3] = *(int *)(param_1 + 0x24) + -1 +
                       (uint)(0x5fffffff < *(uint *)(param_1 + 0x20));
        local_1b0[4] = *(uint *)(param_1 + 0x28) + 0xa0000000;
        iStack_19c = *(int *)(param_1 + 0x2c) + -1 + (uint)(0x5fffffff < *(uint *)(param_1 + 0x28));
      }
      local_74 = iVar9 == 0 && 0x9fffffff >= uVar3;
      uVar3 = *(uint *)(param_1 + 0x50);
      iVar9 = *(int *)(param_1 + 0x54);
      bVar34 = iVar9 == 0;
      if (iVar9 == 0) {
        bVar34 = uVar3 < 0xa0000000;
      }
      if (!bVar34) {
        local_140[0] = uVar3 + 0xa0000000;
        local_140[1] = iVar9 + -1 + (uint)(0x5fffffff < uVar3);
      }
      local_72 = bVar34;
      uVar3 = *(uint *)(param_1 + 0x88);
      iVar9 = *(int *)(param_1 + 0x8c);
      bVar34 = iVar9 == 0;
      if (iVar9 == 0) {
        bVar34 = uVar3 < 0xa0000000;
      }
      if (!bVar34) {
        local_178[0] = uVar3 + 0xa0000000;
        local_73 = 0;
        local_178[1] = iVar9 + -1 + (uint)(0x5fffffff < uVar3);
      }
    }
  }
  puVar11 = (undefined4 *)(param_1 + 0x608);
  puVar17 = (undefined4 *)(param_1 + 0x144);
  do {
    puVar16 = puVar17 + 1;
    *puVar11 = *puVar17;
    puVar11 = puVar11 + 1;
    puVar17 = puVar16;
  } while (puVar16 != (undefined4 *)(param_1 + 0x16c));
  puVar11 = (undefined4 *)(param_1 + 0x630);
  puVar17 = (undefined4 *)(param_1 + 0x1b8);
  do {
    puVar16 = puVar17 + 1;
    *puVar11 = *puVar17;
    puVar11 = puVar11 + 1;
    puVar17 = puVar16;
  } while (puVar16 != (undefined4 *)(param_1 + 0x1c8));
  iVar9 = *(int *)(iVar23 + 0x58);
  if (local_1b8[0] != 2) {
    uVar12 = local_194 & 0xffff;
    uVar3 = local_194 >> 0x10;
    uVar10 = DAT_00016118;
    if ((((*(int *)(iVar9 + 0x18) < (int)uVar12) || (*(int *)(iVar9 + 0x1c) < (int)uVar3)) ||
        ((int)uVar12 < *(int *)(iVar9 + 0x10))) || ((int)uVar3 < *(int *)(iVar9 + 0x14)))
    goto LAB_0001608e;
    uVar28 = (uint)local_18c;
    iVar4 = rga_get_pixel_stride_from_format(local_198);
    uVar3 = *(uint *)(iVar9 + 0x3c);
    uVar18 = (uint)local_18c;
    uVar10 = DAT_00016100;
    uVar12 = uVar18;
    if ((uVar3 * 8 <= uVar28 * iVar4 && uVar28 * iVar4 + uVar3 * -8 != 0) ||
       (uVar10 = DAT_00016120, uVar12 = local_194 & 0xffff, uVar3 = uVar18,
       uVar18 < (local_194 & 0xffff))) goto LAB_0001608e;
  }
  uVar12 = local_124 & 0xffff;
  uVar3 = local_124 >> 0x10;
  uVar10 = DAT_00016128;
  if (((*(int *)(iVar9 + 0x28) < (int)uVar12) ||
      ((*(int *)(iVar9 + 0x2c) < (int)uVar3 || ((int)uVar12 < *(int *)(iVar9 + 0x20))))) ||
     ((int)uVar3 < *(int *)(iVar9 + 0x24))) {
LAB_0001608e:
    printk(uVar10,uVar12,uVar3);
    printk(DAT_0001611c);
    return 0xffffffea;
  }
  uVar28 = (uint)local_11c;
  iVar4 = rga_get_pixel_stride_from_format(local_128);
  uVar3 = *(uint *)(iVar9 + 0x3c);
  uVar18 = (uint)local_11c;
  uVar10 = DAT_00016124;
  uVar12 = uVar18;
  if ((uVar3 * 8 <= uVar28 * iVar4 && uVar28 * iVar4 + uVar3 * -8 != 0) ||
     ((uVar12 = local_124 & 0xffff, uVar18 < uVar12 &&
      (uVar10 = DAT_0001612c, uVar3 = uVar18, local_c3 != 1)))) goto LAB_0001608e;
  iVar9 = rga_is_yuv10bit_format(local_198);
  if ((iVar9 != 0) &&
     ((((((local_18c & 0xf) != 0 || (local_190 & 1) != 0) || (local_194 & 1) != 0) ||
       (local_18e & 1) != 0) || (local_194 & 0x10000) != 0) || (local_18a & 1) != 0)) {
    printk(DAT_00016418);
  }
  iVar9 = rga_is_yuv10bit_format(local_128);
  if ((iVar9 != 0) &&
     ((((((local_11c & 0xf) != 0 || (local_120 & 1) != 0) || (local_124 & 1) != 0) ||
       (local_120 & 0x10000) != 0) || (local_124 & 0x10000) != 0) || (local_11a & 1) != 0)) {
    printk(DAT_0001641c);
  }
  iVar9 = rga_is_yuv8bit_format(local_198);
  if ((iVar9 != 0) &&
     ((((((local_18c & 3) != 0 || (local_190 & 1) != 0) || (local_194 & 1) != 0) ||
       (local_18e & 1) != 0) || (local_194 & 0x10000) != 0) || (local_18a & 1) != 0)) {
    printk(DAT_00016420);
  }
  iVar9 = rga_is_yuv8bit_format(local_128);
  if ((iVar9 != 0) &&
     ((((((local_11c & 3) != 0 || (local_120 & 1) != 0) || (local_124 & 1) != 0) ||
       (local_120 & 0x10000) != 0) || (local_124 & 0x10000) != 0) || (local_11a & 1) != 0)) {
    printk(DAT_00016424);
  }
  if (*DAT_00016428 != 0) {
    uVar10 = rga_get_render_mode_str(local_1b8[0]);
    bVar8 = local_c4;
    uVar5 = rga_get_rotate_mode_str(local_c3);
    printk(DAT_0001642c,uVar10,bVar8,uVar5);
    printk(DAT_00016430,local_1b0[0],local_1b0[2],local_1b0[4],local_194 & 0xffff,local_194 >> 0x10,
           local_18c,local_18a);
    uVar2 = local_18e;
    uVar1 = local_190;
    uVar10 = rga_get_format_name(local_198);
    printk(DAT_00016434,uVar1,uVar2,uVar10);
    if (((local_178[3] != 0 || local_178[1] != 0) || iStack_164 != 0) ||
        ((local_178[0] != 0 || local_178[2] != 0) || local_178[4] != 0)) {
      printk(DAT_00016438,local_178[0],local_178[2],local_178[4],local_15c,local_15a,local_154,
             local_152);
      uVar10 = rga_get_format_name(local_160);
      printk(DAT_0001643c,local_158,local_156,uVar10);
    }
    printk(DAT_00016440,local_140[0],local_140[2],local_140[4],local_124 & 0xffff,local_124 >> 0x10,
           local_11c,local_11a);
    uVar3 = local_120 & 0xffff;
    uVar13 = local_120._2_2_;
    uVar10 = rga_get_format_name(local_128);
    printk(DAT_00016444,uVar3,uVar13,uVar10);
    printk(DAT_00016448,local_74,local_73,local_72,local_71);
    printk(DAT_0001644c,local_c2,local_c0 & 0xffff,local_c0._2_2_);
    uVar10 = rga_get_blend_mode_str(local_c2,local_c0 & 0xffff,local_c0._2_2_);
    printk(DAT_00016450,uVar10);
    printk(DAT_00016454,local_8b);
  }
  bVar8 = local_74 | local_73 | local_72 | local_71;
  local_1dc = bVar8 & 1;
  if ((bVar8 & 1) != 0) {
    if (*(int *)(*(int *)(iVar23 + 0x58) + 0x48) != 1) {
      printk(DAT_00016458,*(undefined4 *)(iVar23 + 0x80));
      printk(DAT_0001645c,local_74,local_73,local_72,local_71);
      return 0xffffffea;
    }
    local_1dc = rga_set_mmu_base(param_1,local_1b8);
    if ((int)local_1dc < 0) {
      printk(DAT_00016464,DAT_00016460,0x8e2);
      return 0xfffffff2;
    }
  }
  uVar3 = (uint)local_1b8[0];
  if (*(int *)(*(int *)(iVar23 + 0x58) + 0x48) == 2) {
    local_88 = '\x01';
  }
  iVar23 = param_1 + 0x208;
  uVar18 = (uint)local_c2;
  uVar12 = uVar3;
  if (uVar3 == 6) {
    uVar12 = 3;
  }
  *(uint *)(param_1 + 0x208) =
       (local_c4 & 1) << 3 | (local_a8 & 1) << 4 | (local_70 & 1) << 5 | (uint)(byte)(local_88 << 7)
       | ((byte)local_6b & 1) << 9 | (local_69 & 1) << 10 | (local_60[0] & 1) << 8 |
       local_c2 >> 1 & 0x40 | uVar12 & 7;
  uVar12 = (uint)local_ec;
  uVar28 = local_e6 * uVar12 + (uint)local_e8;
  *(uint *)(param_1 + 0x264) =
       uVar12 - 1 | (uint)local_e8 << 0x10 | (uint)local_e6 << 0x18 | (local_ea - 1) * 0x100;
  uVar12 = (local_ea * uVar12 + -1) * 0x100;
  *(uint *)(param_1 + 0x260) = uVar12 & 0xffff | uVar28;
  switch(uVar3) {
  case 0:
    if (((local_198 - 0x20 < 2) && (local_194 == local_124)) && (local_c3 == 0)) {
      local_c3 = 0x40;
    }
    uVar19 = (uint)local_c3;
    uVar31 = local_124 & 0xffff;
    uVar28 = local_124 >> 0x10;
    uVar20 = local_194 & 0xffff;
    uVar21 = (uint)local_194._2_2_;
    uVar33 = uVar31;
    uVar12 = uVar28;
    if ((local_c3 & 1) != 0) {
      uVar33 = uVar28;
      uVar12 = uVar31;
    }
    if (uVar33 < uVar20) {
      iVar9 = 1;
    }
    else if (uVar20 < uVar33) {
      iVar9 = 2;
    }
    else {
      iVar9 = 0;
      if (local_c3 >> 6 != 0) {
        iVar9 = 3;
      }
    }
    if (uVar12 < uVar21) {
      iVar4 = 1;
    }
    else if (uVar21 < uVar12) {
      iVar4 = 2;
    }
    else {
      iVar4 = 0;
      if (local_c3 >> 6 != 0) {
        iVar4 = 3;
      }
    }
    if ((local_67 == '\0') || (iVar9 != 0)) {
      local_1cc = uVar3;
      if ((iVar4 == 2) && ((iVar9 != 1 || (0x7cb < uVar33)))) goto LAB_000165d8;
    }
    else if (iVar4 == 2) {
      iVar9 = 3;
LAB_000165d8:
      local_1cc = (uint)(0x7cb < uVar20);
    }
    else {
      iVar9 = 3;
      local_1cc = 0;
    }
    break;
  case 1:
    uVar3 = 3 - local_8c & 0xff;
    uVar12 = (local_18c >> uVar3) + 3 & 0xfffc;
    *(uint *)(param_1 + 0x220) = uVar12 >> 2;
    *(uint *)(param_1 + 0x210) =
         local_1b0[0] + (uVar12 * (int)(short)local_18e + ((int)(short)local_190 >> uVar3)) * 4;
    *(uint *)(param_1 + 0x20c) = (uint)(byte)(local_89 << 7) | local_8c & 0xf | 0xc;
    *(uint *)(param_1 + 0x224) = (local_194 & 0xffff) - 1 | (local_194._2_2_ - 1) * 0x10000;
    *(undefined4 *)(param_1 + 0x234) = local_b0;
    *(undefined4 *)(param_1 + 0x230) = local_ac;
    RGA2_set_reg_dst_info(iVar23,local_1b8);
    goto LAB_00016cbc;
  case 2:
    if (local_a8 == 0) {
      *(undefined4 *)(param_1 + 0x238) = local_a6[0];
      *(undefined4 *)(param_1 + 0x23c) = local_a6[1];
      *(undefined4 *)(param_1 + 0x268) = local_a6[2];
      *(undefined4 *)(param_1 + 0x26c) = local_a6[3];
      *(undefined4 *)(param_1 + 0x234) = local_b0;
    }
    else {
      *(int *)(param_1 + 0x270) = local_108[0];
    }
    *(int *)(param_1 + 0x220) = local_c8 << 0x10;
    RGA2_set_reg_dst_info(iVar23,local_1b8);
    RGA2_set_reg_alpha_info(iVar23,local_1b8);
    goto LAB_00016cbc;
  default:
    printk(DAT_00016e78,uVar3);
    goto LAB_00016cbc;
  case 6:
    *(uint *)(param_1 + 0x260) = (uint)(byte)local_94 << 8;
    *(int *)(param_1 + 0x270) = local_108[0];
    goto LAB_00016cbc;
  case 7:
    *(uint *)(param_1 + 0x260) = uVar12 | uVar28;
    *(int *)(param_1 + 0x270) = local_108[0];
    goto LAB_00016cbc;
  }
  uVar12 = uVar3;
  uVar33 = uVar3;
  uVar22 = uVar3;
  uVar24 = uVar3;
  uVar32 = uVar3;
  switch(local_198) {
  case 0:
    uVar29 = 2;
    uVar26 = 1;
    uVar30 = 4;
    break;
  case 1:
    uVar26 = local_198;
    goto LAB_0001677e;
  case 2:
    uVar29 = local_198;
    goto LAB_000167b6;
  case 3:
    goto LAB_00016764;
  case 4:
    goto LAB_000167ec;
  case 5:
    goto LAB_00016800;
  case 6:
    goto LAB_00016814;
  case 7:
    uVar29 = 2;
    uVar3 = 1;
LAB_000167b6:
    local_6f = local_6f & 7;
    uVar30 = 3;
    uVar26 = 1;
    uVar32 = 2;
    break;
  case 8:
    goto LAB_00016984;
  case 9:
    goto LAB_00016946;
  case 10:
    goto LAB_0001695a;
  case 0xb:
    goto LAB_00016970;
  case 0xc:
    uVar12 = 1;
    goto LAB_00016984;
  case 0xd:
    uVar12 = 1;
LAB_00016946:
    uVar30 = 1;
    uVar29 = 2;
    uVar26 = 1;
    uVar32 = 9;
    break;
  case 0xe:
    uVar12 = 1;
    goto LAB_0001695a;
  case 0xf:
    uVar12 = 1;
LAB_00016970:
    uVar30 = 1;
    uVar26 = 2;
    uVar29 = 2;
    uVar32 = 0xb;
    break;
  default:
    uVar26 = 1;
    uVar29 = 2;
    uVar30 = uVar26;
    break;
  case 0x15:
    uVar24 = (uint)(local_69 == 0);
    goto LAB_00016984;
  case 0x16:
    goto LAB_0001679a;
  case 0x18:
    uVar12 = 1;
    goto LAB_000168f2;
  case 0x1a:
    uVar12 = 1;
    goto LAB_00016904;
  case 0x1c:
LAB_000168f2:
    uVar3 = 1;
    goto LAB_00016904;
  case 0x1e:
LAB_00016904:
    uVar30 = 2;
    uVar29 = 2;
    uVar26 = 1;
    uVar32 = 7;
    break;
  case 0x20:
    uVar22 = 1;
    goto LAB_0001695a;
  case 0x21:
    uVar12 = 1;
    uVar22 = 1;
LAB_0001695a:
    uVar30 = 1;
    uVar29 = 1;
    uVar26 = 2;
    uVar32 = 10;
    break;
  case 0x22:
    uVar22 = 1;
    goto LAB_00016984;
  case 0x23:
    uVar12 = 1;
    uVar22 = 1;
LAB_00016984:
    uVar30 = 1;
    uVar29 = 1;
    uVar26 = 1;
    uVar32 = 8;
    break;
  case 0x24:
    uVar3 = 1;
LAB_000167ec:
    local_6f = local_6f & 7;
    uVar30 = 2;
    uVar29 = 2;
    uVar26 = 1;
    uVar32 = 4;
    break;
  case 0x25:
    goto LAB_0001683e;
  case 0x26:
    goto LAB_0001684e;
  case 0x28:
    uVar26 = 1;
    uVar29 = 2;
    uVar30 = 4;
    uVar33 = 1;
    break;
  case 0x29:
    uVar33 = 1;
    uVar26 = 1;
    goto LAB_0001677e;
  case 0x2a:
    uVar33 = 1;
    goto LAB_00016800;
  case 0x2b:
    uVar33 = 1;
    goto LAB_00016814;
  case 0x2c:
    uVar33 = 1;
LAB_00016764:
    uVar30 = 4;
    uVar29 = 2;
    uVar26 = 1;
    uVar3 = uVar26;
    break;
  case 0x2d:
    uVar33 = 1;
LAB_0001679a:
    uVar26 = 1;
    uVar3 = 1;
LAB_0001677e:
    local_6f = local_6f & 7;
    uVar30 = 4;
    uVar29 = 2;
    uVar32 = 1;
    break;
  case 0x2e:
    uVar33 = 1;
LAB_0001683e:
    uVar3 = 1;
LAB_00016800:
    uVar30 = 2;
    uVar29 = 2;
    uVar26 = 1;
    uVar32 = 5;
    break;
  case 0x2f:
    uVar33 = 1;
LAB_0001684e:
    uVar3 = 1;
LAB_00016814:
    uVar30 = 2;
    uVar29 = 2;
    uVar26 = 1;
    uVar32 = 6;
  }
  local_1c8 = uVar33 << 5 | uVar3 << 4 | uVar32 | uVar12 << 6;
  if (local_160 == 0x30) {
    local_1c8 = local_1c8 | (byte)(local_43 << 7);
  }
  uVar33 = (uint)local_8b;
  uVar12 = (uint)local_6f;
  uVar3 = uVar31;
  if (((uVar19 & 3) != 1) && ((local_c3 & 1) == 0)) {
    uVar3 = uVar28;
    uVar28 = uVar31;
  }
  if (uVar28 <= uVar20 && uVar20 != uVar28) {
    iVar6 = __aeabi_uidiv(uVar28 << 0x10,uVar20);
    uVar28 = *(uint *)(param_1 + 0x228) | iVar6 + 1U & 0xffff;
LAB_0001674e:
    *(uint *)(param_1 + 0x228) = uVar28;
  }
  else {
    if (uVar28 <= uVar20) {
      uVar28 = 0;
      goto LAB_0001674e;
    }
    iVar6 = __aeabi_uidiv((uVar20 - 1) * 0x10000,uVar28 - 1);
    *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) | iVar6 << 0x10;
  }
  if (uVar3 <= uVar21 && uVar21 != uVar3) {
    iVar6 = __aeabi_uidiv(uVar3 << 0x10,uVar21);
    uVar3 = *(uint *)(param_1 + 0x22c) | iVar6 + 1U & 0xffff;
LAB_00016a54:
    *(uint *)(param_1 + 0x22c) = uVar3;
  }
  else {
    if (uVar3 <= uVar21) {
      uVar3 = 0;
      goto LAB_00016a54;
    }
    iVar6 = __aeabi_uidiv((uVar21 - 1) * 0x10000,uVar3 - 1);
    *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) | iVar6 << 0x10;
  }
  uVar3 = (int)(uVar30 * local_18c + 3) >> 2;
  iVar6 = (uint)local_18e * uVar3 * 4 + uVar30 * local_190 + local_1b0[0];
  *(int *)(param_1 + 0x210) = iVar6;
  if (uVar24 == 1) {
    *(int *)(param_1 + 0x214) = iVar6;
    *(int *)(param_1 + 0x218) = iVar6;
  }
  else {
    iVar6 = __aeabi_uidiv((uint)local_18c,uVar29);
    iVar7 = __aeabi_uidiv((uint)local_18e,uVar26);
    iVar7 = iVar7 * (iVar6 + 3U & 0xfffffffc);
    iVar6 = __aeabi_uidiv((uint)local_190,uVar29);
    *(int *)(param_1 + 0x214) = local_1b0[2] + iVar6 + iVar7;
    *(int *)(param_1 + 0x218) = iVar6 + local_1b0[4] + iVar7;
  }
  *(uint *)(param_1 + 0x220) = uVar3 | local_c8 << 0x10;
  *(uint *)(param_1 + 0x224) = (local_194 & 0xffff) - 1 | ((local_194 >> 0x10) - 1) * 0x10000;
  *(undefined4 *)(param_1 + 0x270) = local_d0;
  *(uint *)(param_1 + 0x20c) =
       (uVar33 & 3) << 8 | (uVar19 & 3) << 10 | (local_bc & 3) << 0x18 | (uVar12 & 1) << 0x12 |
       (uVar19 & 0x30) << 8 | (uVar12 & 0x1e) << 0x12 | (uVar18 & 0x10) << 0x13 | iVar4 << 0x10 |
       iVar9 << 0xe | local_1cc << 0x1a | uVar22 << 0x1b | uVar22 << 0x1c | local_1c8;
  *(undefined4 *)(param_1 + 0x238) = local_b4;
  *(undefined4 *)(param_1 + 0x23c) = local_b8;
  RGA2_set_reg_dst_info(iVar23,local_1b8);
  if ((-1 < (int)((uint)local_c2 << 0x17)) && (local_128 != 0x14)) {
    RGA2_set_reg_alpha_info(iVar23,local_1b8);
    if (local_90 == 0) {
      uVar5 = *(undefined4 *)(DAT_00016e6c + (uint)(byte)local_8e * 4);
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      if (local_90 == 1) {
        uVar5 = *(undefined4 *)(DAT_00016e6c + (uint)(byte)local_8e * 4);
      }
      else if (local_90 == 2) {
        uVar5 = *(undefined4 *)(DAT_00016e6c + (local_8e & 0xff) * 4);
        uVar10 = *(undefined4 *)(DAT_00016e6c + (uint)(local_8e >> 8) * 4);
      }
      else {
        uVar5 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x268) = uVar5;
    *(undefined4 *)(param_1 + 0x26c) = uVar10;
    *(undefined4 *)(param_1 + 0x234) = local_b0;
    *(undefined4 *)(param_1 + 0x270) = local_d0;
    *(uint *)(param_1 + 0x264) =
         local_ec - 1 | (uint)local_e8 << 0x10 | (uint)local_e6 << 0x18 | (local_ea - 1) * 0x100;
    *(uint *)(param_1 + 600) = (local_89 & 2) << 0x13 | *(uint *)(param_1 + 600);
  }
  if ((byte)local_6b != '\0') {
    *(uint *)(param_1 + 0x238) = local_6b._1_1_ & 7;
  }
  if (local_60[0] != 0) {
    uVar3 = (uint)local_51;
    *(uint *)(param_1 + 0x228) =
         (bStack_5d & 1) << 2 | (local_5c[0] & 1) << 3 | bStack_5e & 3 |
         DAT_00016e70 & (uint)local_56 << 10 | (uint)(local_160 == 0x30) * 0x40000000 |
         (local_58 - 1) * 0x10 & 0x1f0 | DAT_00016e74 & ((local_5a >> 1) - 1) * 0x100000;
    *(uint *)(param_1 + 0x22c) =
         local_54 & 1 | (uint)local_4f << 4 | (local_53 & 1) << 1 | (local_52 & 1) << 2 |
         (local_50 & 1) << 3 | (uVar3 & 1) << 0xc | (local_4e & 0xf) << 0x10 | (uVar3 & 2) << 0xc |
         (uVar3 & 4) << 0xc;
    *(uint *)(param_1 + 0x268) =
         (uint)local_47 << 0x10 | (uint)local_48 << 0x18 | (uint)local_49 | (uint)local_4a << 8;
    *(uint *)(param_1 + 0x26c) = (local_4c & 0xff) << 8 | (uint)(local_4c >> 8);
    *(undefined4 *)(param_1 + 0x238) = local_38;
    *(undefined4 *)(param_1 + 0x23c) = local_34;
    if (local_54 == 1) {
      *(uint *)(param_1 + 0x230) = local_40 & 0xffffff;
      *(uint *)(param_1 + 0x234) = local_3c & 0xffffff;
    }
    if (local_160 == 0x30) {
      *(uint *)(param_1 + 0x230) = local_40;
      *(uint *)(param_1 + 0x234) = local_3c;
    }
  }
LAB_00016cbc:
  *(uint *)(param_1 + 0x274) =
       (uint)(byte)(local_73 << 4) | (local_72 & 0xf) << 8 | local_74 & 0xf | (local_71 & 3) << 0xc;
  *(uint *)(param_1 + 0x278) = local_84 >> 4;
  *(uint *)(param_1 + 0x27c) = local_80 >> 4;
  *(uint *)(param_1 + 0x280) = local_7c >> 4;
  *(uint *)(param_1 + 0x284) = local_78 >> 4;
  return local_1dc;
}



/* ===== rga2_irq @ 00016e7c size=192 ===== */

undefined4 rga2_irq(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 == 0) {
    uVar2 = 1;
  }
  else {
    if (-1 < *(int *)(iVar3 + 0x710) << 0x1a) {
      DataSynchronizationBarrier(0xf);
      *(undefined4 *)(iVar3 + 0x714) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
      DataSynchronizationBarrier(0xf);
      *(undefined4 *)(iVar3 + 0x718) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
      piVar1 = DAT_00016f3c;
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
      DataSynchronizationBarrier(0xf);
      *(undefined4 *)(iVar3 + 0x71c) = uVar2;
      if (*piVar1 != 0) {
        printk(DAT_00016f40,*(undefined4 *)(iVar3 + 0x714),*(undefined4 *)(iVar3 + 0x718),uVar2,
               param_4);
      }
      if ((*(uint *)(iVar3 + 0x714) & 0xc) == 0) {
        if ((*(uint *)(iVar3 + 0x714) & 3) != 0) {
          disableIRQinterrupts();
          *(uint *)(iVar3 + 0x710) = *(uint *)(iVar3 + 0x710) | 0x20;
          printk(DAT_00016f44,*(undefined4 *)(iVar3 + 0x714),*(undefined4 *)(iVar3 + 0x718),
                 *(undefined4 *)(iVar3 + 0x71c),param_4);
          (**(code **)(*(int *)(param_1 + 0x54) + 0xc))(param_1);
        }
      }
      else {
        disableIRQinterrupts();
        *(uint *)(iVar3 + 0x710) = *(uint *)(iVar3 + 0x710) | 8;
      }
      DataSynchronizationBarrier(0xf);
      rga_write(*(uint *)(*(int *)(param_1 + 4) + 0x10) | 0x180f0,0x10,param_1);
    }
    uVar2 = 2;
  }
  return uVar2;
}



/* ===== rga_check_align @ 00016f48 size=118 ===== */

undefined4 rga_check_align(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = rga_get_pixel_stride_from_format(param_2);
  if (0 < iVar1) {
    uVar4 = param_1 * 8;
    __aeabi_uidivmod(iVar1 * param_3,uVar4);
    if (extraout_r1 == 0) {
      return 1;
    }
    if (*DAT_00016fc0 == 0) {
      return 0;
    }
    uVar5 = 0;
    uVar3 = 1;
    do {
      if (uVar4 < uVar3) break;
      __aeabi_idivmod(iVar1,uVar3);
      if ((extraout_r1_00 == 0) && (__aeabi_uidivmod(uVar4,uVar3), extraout_r1_01 == 0)) {
        uVar5 = uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 <= iVar1);
    uVar2 = __aeabi_uidiv(iVar1 * uVar4,uVar5);
    uVar2 = __aeabi_uidiv(uVar2,iVar1);
    printk(DAT_00016fc4,param_3,param_2,uVar2);
  }
  return 0;
}



/* ===== rga_check_resolution @ 00016fc8 size=34 ===== */

bool rga_check_resolution(int *param_1,int param_2,int param_3)

{
  if (((param_2 <= param_1[2]) && (param_3 <= param_1[3])) && (*param_1 <= param_2)) {
    return param_1[1] <= param_3;
  }
  return false;
}



/* ===== rga_check_format @ 00016fea size=112 ===== */

undefined4 rga_check_format(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    iVar2 = param_4 * 0x2c + *(int *)(param_1 + 0x40);
    for (iVar1 = 0; iVar1 != *(int *)(iVar2 + 0x10); iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(iVar2 + 4) + iVar1 * 4) == param_3) {
        return 1;
      }
    }
  }
  else if (param_2 == 2) {
    iVar2 = param_4 * 0x2c + *(int *)(param_1 + 0x40);
    for (iVar1 = 0; iVar1 != *(int *)(iVar2 + 0x14); iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(iVar2 + 8) + iVar1 * 4) == param_3) {
        return 1;
      }
    }
  }
  else if (param_2 == 4) {
    iVar2 = param_4 * 0x2c + *(int *)(param_1 + 0x40);
    for (iVar1 = 0; iVar1 != *(int *)(iVar2 + 0x18); iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(iVar2 + 0xc) + iVar1 * 4) == param_3) {
        return 1;
      }
    }
  }
  return 0;
}



/* ===== rga_job_assign @ 0001705a size=886 ===== */

int rga_job_assign(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  uint local_3c;
  
  piVar3 = DAT_000172c4;
  uVar10 = (uint)*(byte *)(param_1 + 0x170);
  if ((uVar10 == 0) || (uVar10 < 8)) {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      uVar14 = 1;
    }
    else if (*(char *)(param_1 + 0x10) == '\x01') {
      uVar14 = 2;
    }
    else {
      uVar14 = 0;
    }
    if ((*(int *)(param_1 + 0xe4) != 0) || (*(int *)(param_1 + 0xe8) != 0)) {
      uVar14 = uVar14 | 4;
    }
    iVar12 = 0;
    local_3c = 0;
    if ((int)((uint)*(ushort *)(param_1 + 0xe0) << 0x1e) < 0) {
      uVar14 = uVar14 | 8;
    }
    if ((int)((uint)*(ushort *)(param_1 + 0xe0) << 0x17) < 0) {
      uVar14 = uVar14 | 0x10;
    }
    for (; iVar12 < *(int *)(*DAT_000172cc + 0x18); iVar12 = iVar12 + 1) {
      iVar9 = *(int *)(*DAT_000172cc + iVar12 * 4 + 0xc);
      iVar13 = *(int *)(iVar9 + 0x58);
      if ((uVar10 == 0) || ((uVar10 & *(uint *)(iVar9 + 0x80)) != 0)) {
        if (*piVar3 != 0) {
          printk(DAT_000172d8,*(undefined4 *)(iVar9 + 0x80));
        }
        if ((*(int *)(*(int *)(iVar9 + 0x58) + 0x48) == 1) &&
           (*(int *)(param_1 + 0x6f0) << 0x1b < 0)) {
          if (*piVar3 != 0) {
            printk(DAT_000172dc);
          }
        }
        else if (uVar14 == 0) {
LAB_00017164:
          iVar11 = *(int *)(iVar13 + 0x40);
          uVar1 = *(ushort *)(param_1 + 0x46);
          uVar4 = *(uint *)(iVar11 + 0x28) & (uint)uVar1;
          if (*(int *)(param_1 + 0x8c) == 0 && *(int *)(param_1 + 0x88) == 0) {
            if ((uVar4 != 0) &&
               (((uint)*(ushort *)(param_1 + 0x7e) & *(uint *)(iVar11 + 0x80)) != 0))
            goto LAB_000171be;
            if (*piVar3 != 0) {
              uVar6 = *(undefined4 *)(iVar9 + 0x80);
              uVar16 = DAT_000172e8;
              goto LAB_00017158;
            }
          }
          else if (((uVar4 == 0) ||
                   (((uint)*(ushort *)(param_1 + 0xb6) & *(uint *)(iVar11 + 0x54)) == 0)) ||
                  (((uint)*(ushort *)(param_1 + 0x7e) & *(uint *)(iVar11 + 0x80)) == 0)) {
            if (*piVar3 != 0) {
              uVar6 = *(undefined4 *)(iVar9 + 0x80);
              uVar16 = DAT_000172e4;
              goto LAB_00017158;
            }
          }
          else {
LAB_000171be:
            uVar15 = (uint)*(ushort *)(param_1 + 0x34);
            uVar8 = (uint)*(ushort *)(param_1 + 0x6e);
            uVar7 = (uint)*(ushort *)(param_1 + 0x6c);
            uVar4 = uVar8;
            if (((*(int *)(param_1 + 0xd8) == 0x10000) || (*(int *)(param_1 + 0xd8) == -0x10000)) &&
               (*(int *)(param_1 + 0xdc) == 0)) {
              uVar4 = uVar7;
              uVar7 = uVar8;
            }
            if (uVar7 < uVar15) {
              if ((int)uVar15 >> (*(uint *)(iVar13 + 0x34) & 0xff) <= (int)uVar7) {
LAB_00017212:
                uVar7 = (uint)*(ushort *)(param_1 + 0x36);
                if (uVar4 < uVar7) {
                  if ((int)uVar7 >> (*(uint *)(iVar13 + 0x34) & 0xff) <= (int)uVar4) {
LAB_00017222:
                    iVar17 = iVar13 + 0x10;
                    iVar5 = rga_check_resolution(iVar17,uVar15,uVar7);
                    iVar11 = DAT_000172f0;
                    if ((iVar5 != 0) &&
                       ((iVar13 != DAT_000172f0 ||
                        (iVar5 = rga_check_resolution
                                           (iVar17,*(ushort *)(param_1 + 0x38) + uVar15,
                                            *(ushort *)(param_1 + 0x3a) + uVar7), iVar5 != 0)))) {
                      uVar16 = *(undefined4 *)(param_1 + 0x30);
                      iVar5 = rga_check_format(iVar13,(uint)uVar1,uVar16,0);
                      if ((iVar5 != 0) &&
                         (iVar5 = rga_check_align(*(undefined4 *)(iVar13 + 0x38),uVar16,
                                                  *(undefined2 *)(param_1 + 0x3c)), iVar5 != 0)) {
                        if (*(int *)(param_1 + 0x8c) == 0 && *(int *)(param_1 + 0x88) == 0) {
LAB_00017340:
                          uVar1 = *(ushort *)(param_1 + 0x6e);
                          uVar2 = *(ushort *)(param_1 + 0x6c);
                          iVar11 = rga_check_resolution(iVar13 + 0x20,(uint)uVar2,(uint)uVar1);
                          if ((iVar11 != 0) &&
                             ((iVar13 != DAT_0001740c ||
                              (iVar11 = rga_check_resolution
                                                  (iVar13 + 0x20,
                                                   (uint)*(ushort *)(param_1 + 0x70) + (uint)uVar2,
                                                   (uint)*(ushort *)(param_1 + 0x72) + (uint)uVar1),
                              iVar11 != 0)))) {
                            uVar16 = *(undefined4 *)(param_1 + 0x68);
                            iVar11 = rga_check_format(iVar13,*(undefined2 *)(param_1 + 0x7e),uVar16,
                                                      2);
                            if ((iVar11 != 0) &&
                               (iVar13 = rga_check_align(*(undefined4 *)(iVar13 + 0x38),uVar16,
                                                         *(undefined2 *)(param_1 + 0x74)),
                               iVar13 != 0)) {
                              local_3c = local_3c | *(uint *)(iVar9 + 0x80);
                              goto LAB_0001713c;
                            }
                          }
                          if (*piVar3 != 0) {
                            uVar6 = *(undefined4 *)(iVar9 + 0x80);
                            uVar16 = DAT_00017410;
                            goto LAB_00017158;
                          }
                        }
                        else {
                          uVar1 = *(ushort *)(param_1 + 0xa6);
                          uVar2 = *(ushort *)(param_1 + 0xa4);
                          iVar5 = rga_check_resolution(iVar17,(uint)uVar2,(uint)uVar1);
                          if ((iVar5 != 0) &&
                             ((iVar13 != iVar11 ||
                              (iVar11 = rga_check_resolution
                                                  (iVar13 + 0x10,
                                                   (uint)*(ushort *)(param_1 + 0xa8) + (uint)uVar2,
                                                   (uint)*(ushort *)(param_1 + 0xaa) + (uint)uVar1),
                              iVar11 != 0)))) {
                            uVar16 = *(undefined4 *)(param_1 + 0xa0);
                            iVar11 = rga_check_format(iVar13,*(undefined2 *)(param_1 + 0xb6),uVar16,
                                                      1);
                            if ((iVar11 != 0) &&
                               (iVar11 = rga_check_align(*(undefined4 *)(iVar13 + 0x38),uVar16,
                                                         *(undefined2 *)(param_1 + 0xac)),
                               iVar11 != 0)) goto LAB_00017340;
                          }
                          if (*piVar3 != 0) {
                            uVar6 = *(undefined4 *)(iVar9 + 0x80);
                            uVar16 = DAT_000172f4;
                            goto LAB_00017158;
                          }
                        }
                        goto LAB_0001713c;
                      }
                    }
                    if (*piVar3 != 0) {
                      uVar6 = *(undefined4 *)(iVar9 + 0x80);
                      uVar16 = DAT_000172f8;
                      goto LAB_00017158;
                    }
                    goto LAB_0001713c;
                  }
                }
                else if ((uVar4 <= uVar7) ||
                        ((int)uVar4 <= (int)(uVar7 << (*(uint *)(iVar13 + 0x30) & 0xff))))
                goto LAB_00017222;
              }
            }
            else if ((uVar7 <= uVar15) ||
                    ((int)uVar7 <= (int)(uVar15 << (*(uint *)(iVar13 + 0x30) & 0xff))))
            goto LAB_00017212;
            if (*piVar3 != 0) {
              uVar6 = *(undefined4 *)(iVar9 + 0x80);
              uVar16 = DAT_000172ec;
              goto LAB_00017158;
            }
          }
        }
        else {
          if ((uVar14 & *(uint *)(iVar13 + 4)) != 0) {
            if (-1 < (int)(uVar14 << 0x1f)) goto LAB_00017164;
            goto LAB_00017340;
          }
          if (*piVar3 == 0) goto LAB_0001713c;
          uVar6 = *(undefined4 *)(iVar9 + 0x80);
          uVar16 = DAT_000172e0;
LAB_00017158:
          printk(uVar16,uVar6);
        }
      }
LAB_0001713c:
    }
    if (*DAT_000172c4 != 0) {
      printk(DAT_000172d0,local_3c);
    }
    if (local_3c == 0) {
      iVar12 = -1;
      printk(DAT_000172d4);
    }
    else {
      iVar13 = -1;
      iVar9 = 0;
      iVar12 = iVar9;
      for (; iVar9 < *(int *)(*DAT_00017414 + 0x18); iVar9 = iVar9 + 1) {
        iVar11 = *(int *)(*DAT_00017414 + iVar9 * 4 + 0xc);
        if ((local_3c & *(uint *)(iVar11 + 0x80)) != 0) {
          disableIRQinterrupts();
          if (*(int *)(iVar11 + 0x40) == 0) {
            iVar12 = *(int *)(iVar11 + 0x80);
            *(int *)(param_1 + 8) = iVar11;
            break;
          }
          iVar5 = *(int *)(iVar11 + 0x5c);
          if ((iVar13 == -1) || (iVar5 < iVar13)) {
            iVar12 = *(int *)(iVar11 + 0x80);
            *(int *)(param_1 + 8) = iVar11;
            iVar13 = iVar5;
          }
        }
      }
    }
  }
  else {
    iVar12 = 0;
    printk(DAT_000172c0);
  }
  if (*DAT_000172c4 != 0) {
    printk(DAT_000172c8,iVar12);
  }
  return iVar12;
}



/* ===== sg_phys @ 00017418 size=28 ===== */

int sg_phys(uint *param_1)

{
  return param_1[1] +
         (*DAT_00017438 + ((int)((*param_1 & 0xfffffffc) - *DAT_00017434) >> 5)) * 0x1000;
}



/* ===== rga_mm_put_channel_external_buffer @ 0001743c size=30 ===== */

void rga_mm_put_channel_external_buffer(undefined4 *param_1)

{
  if (((undefined4 *)*param_1)[2] == 3) {
    dma_buf_put(*(undefined4 *)*param_1);
  }
  kfree(*param_1);
  *param_1 = 0;
  return;
}



/* ===== rga_mm_put_external_buffer @ 0001745a size=64 ===== */

void rga_mm_put_external_buffer(int param_1)

{
  if (*(int *)(param_1 + 0x640) != 0) {
    rga_mm_put_channel_external_buffer(param_1 + 0x640);
  }
  if (*(int *)(param_1 + 0x664) != 0) {
    rga_mm_put_channel_external_buffer(param_1 + 0x664);
  }
  if (*(int *)(param_1 + 0x688) != 0) {
    rga_mm_put_channel_external_buffer(param_1 + 0x688);
  }
  if (*(int *)(param_1 + 0x6ac) != 0) {
    rga_mm_put_channel_external_buffer(param_1 + 0x6ac);
    return;
  }
  return;
}



/* ===== rga_mm_is_need_mmu @ 0001749a size=32 ===== */

uint rga_mm_is_need_mmu(int param_1,int param_2)

{
  if ((((param_2 != 0) && (param_1 != 0)) && (*(int *)(param_1 + 8) != 0)) &&
     ((*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x58) + 0x48) != 2 &&
      (-1 < (int)(*(uint *)(param_2 + 0x30) << 0x1d))))) {
    return (*(uint *)(param_2 + 0x30) & 3) >> 1;
  }
  return 0;
}



/* ===== rga_mm_set_mmu_flag @ 000174ba size=158 ===== */

undefined4 rga_mm_set_mmu_flag(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = rga_mm_is_need_mmu(param_1,*(undefined4 *)(param_1 + 0x64c));
  iVar2 = rga_mm_is_need_mmu(param_1,*(undefined4 *)(param_1 + 0x670));
  iVar3 = rga_mm_is_need_mmu(param_1,*(undefined4 *)(param_1 + 0x694));
  iVar4 = rga_mm_is_need_mmu(param_1,*(undefined4 *)(param_1 + 0x6b8));
  memset((void *)(param_1 + 0x128),0,0x18);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x100;
  }
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x200;
  }
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x400;
  }
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x800;
  }
  if ((*(uint *)(param_1 + 0x138) & 0xf00) != 0) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x80000001;
    *(undefined1 *)(param_1 + 0x128) = 1;
  }
  return 0;
}



/* ===== get_order @ 00017558 size=16 ===== */

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



/* ===== rga_mm_check_memory_limit @ 00017568 size=38 ===== */

undefined4 rga_mm_check_memory_limit(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(int *)(*(int *)(param_1 + 0x58) + 0x48) == 1) {
      uVar1 = 1;
      if ((param_2 & 1) == 0) {
        uVar1 = rga_get_mmu_type_str();
        printk(DAT_00017590,uVar1);
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* ===== rga_mm_sgt_to_page_table.constprop.5 @ 00017594 size=86 ===== */

undefined4 rga_mm_sgt_to_page_table_constprop_5(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  iVar1 = *param_1;
  uVar5 = 0;
  uVar4 = 0;
  do {
    uVar6 = *(uint *)(iVar1 + 8);
    uVar7 = sg_phys(iVar1);
    uVar6 = uVar6 >> 0xc;
    piVar2 = (int *)(param_2 + uVar4 * 4);
    for (uVar3 = 0; uVar6 != uVar3; uVar3 = uVar3 + 1) {
      if (param_3 <= uVar3 + uVar4) {
        return 0;
      }
      *piVar2 = (int)uVar7 + uVar3 * 0x1000;
      piVar2 = piVar2 + 1;
    }
    uVar4 = uVar4 + uVar6;
    iVar1 = sg_next((int)((ulonglong)uVar7 >> 0x20));
    uVar5 = uVar5 + 1;
  } while (((iVar1 != 0) && (uVar4 < param_3)) && (uVar5 < (uint)param_1[2]));
  return 0;
}



/* ===== mmdrop @ 000175ea size=40 ===== */

void mmdrop(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x30);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 + -1 != 0) {
    return;
  }
  __mmdrop();
  return;
}



/* ===== __refcount_add.constprop.11 @ 00017612 size=56 ===== */

void __refcount_add_constprop_11(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  HintPreloadData(param_1);
  do {
    ExclusiveAccess(param_1);
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + 1;
  if (iVar3 == 0) {
    uVar2 = 2;
  }
  else {
    if ((-1 < iVar3) && (-1 < iVar3 + 1)) {
      return;
    }
    uVar2 = 1;
  }
  refcount_warn_saturate(param_1,uVar2);
  return;
}



/* ===== rga_mm_get_channel_external_buffer @ 0001764a size=140 ===== */

undefined4
rga_mm_get_channel_external_buffer(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)kmem_cache_alloc(*(undefined4 *)(DAT_000176d8 + 0x24),0xdc0,param_3,DAT_000176d8,
                                    param_4);
  if (puVar1 == (uint *)0x0) {
    printk(DAT_000176dc);
    return 0xfffffff4;
  }
  if (*param_2 == 0 && param_2[1] == 0) {
    uVar3 = param_2[2];
    uVar2 = param_2[3];
    if (param_1 == 0) {
      if (uVar3 != 0 || uVar2 != 0) {
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        uVar3 = 2;
        goto LAB_000176a0;
      }
    }
    else if (uVar3 != 0 || uVar2 != 0) {
      *puVar1 = uVar3;
      puVar1[1] = uVar2;
      uVar3 = 1;
LAB_000176a0:
      puVar1[2] = uVar3;
      puVar1[4] = (uint)*(ushort *)(param_2 + 9);
      puVar1[5] = (uint)*(ushort *)((int)param_2 + 0x26);
      uVar3 = param_2[6];
      *param_3 = (int)puVar1;
      puVar1[6] = uVar3;
      return 0;
    }
  }
  else {
    uVar2 = dma_buf_get();
    if (uVar2 < 0xfffff001) {
      puVar1[1] = 0;
      uVar3 = 3;
      *puVar1 = uVar2;
      goto LAB_000176a0;
    }
    printk(DAT_000176e4,DAT_000176e0,*param_2);
  }
  kfree(puVar1);
  return 0xffffffea;
}



/* ===== put_page @ 000176e8 size=44 ===== */

void put_page(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 4) << 0x1f < 0) {
    param_1 = *(int *)(param_1 + 4) + -1;
  }
  piVar3 = (int *)(param_1 + 0x1c);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 + -1 != 0) {
    return;
  }
  __put_page();
  return;
}



/* ===== rga_free_virt_addr @ 00017714 size=50 ===== */

void rga_free_virt_addr(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (int *)0x0) && (iVar2 = *param_1, iVar2 != 0)) {
    iVar3 = 0;
    while( true ) {
      if (*(int *)(iVar2 + 0x1c) <= iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      put_page(*(undefined4 *)(*(int *)(iVar2 + 8) + iVar1));
    }
    free_pages(*(int *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
    kfree(iVar2);
    *param_1 = 0;
  }
  return;
}



/* ===== rga_mm_map_buffer @ 00017746 size=1696 ===== */

undefined4 * rga_mm_map_buffer(uint *param_1,int *param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 uStack_60;
  uint local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint *local_2c [2];
  uint *puVar11;
  
  puVar19 = param_1 + 4;
  puVar17 = (uint *)(param_2 + 5);
  puVar4 = puVar17;
  puVar10 = puVar19;
  do {
    puVar11 = puVar10 + 1;
    *puVar4 = *puVar10;
    puVar4 = puVar4 + 1;
    puVar10 = puVar11;
  } while (puVar11 != param_1 + 8);
  local_54 = param_1[2];
  switch(local_54) {
  case 0:
  case 3:
    break;
  case 1:
    param_2[10] = 1;
    if (param_3 == 0) {
      puVar20 = *(undefined4 **)(*DAT_00017a3c + *(int *)(*DAT_00017a3c + 0x1c) * 4 + 0xc);
      if (puVar20 != (undefined4 *)0x0) {
        iVar7 = *(int *)(*(int *)(((uint)&local_68 & 0xffffe000) + 0xc) + 0x168);
        goto LAB_0001794c;
      }
    }
    else {
      puVar20 = *(undefined4 **)(param_3 + 8);
      if (puVar20 != (undefined4 *)0x0) {
        iVar7 = *(int *)(param_3 + 0x6d0);
LAB_0001794c:
        param_2[9] = iVar7;
        if (iVar7 == 0) {
          puVar14 = (undefined4 *)0xfffffff2;
          printk(DAT_00017a68,DAT_00017a64);
          uVar21 = DAT_00017a60;
          uVar5 = DAT_00017a34;
          goto LAB_000177a2;
        }
        piVar8 = (int *)(iVar7 + 0x30);
        HintPreloadData(piVar8);
        do {
          ExclusiveAccess(piVar8);
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = *piVar8 + 1;
        piVar8 = (int *)(param_2[9] + 0x2c);
        HintPreloadData(piVar8);
        do {
          ExclusiveAccess(piVar8);
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = *piVar8 + 1;
        local_48 = *param_1;
        local_38 = param_1[1];
        local_50 = param_2[9];
        puVar22 = (undefined4 *)param_2[8];
        if (puVar22 == (undefined4 *)0x0) {
          local_68 = puVar22;
          local_64 = puVar22;
          puVar22 = (undefined4 *)rga_image_size_cal(param_2[5],param_2[6],param_2[7]);
        }
        local_44 = local_48 & 0xfff;
        uVar15 = (int)puVar22 + local_44 >> 0xc;
        if (((int)puVar22 + local_44 & 0xfff) != 0) {
          uVar15 = uVar15 + 1;
        }
        local_4c = uVar15 << 0xc;
        if (local_4c == 0) {
          puVar14 = (undefined4 *)0xfffffff2;
          printk(DAT_00017a6c,0,uVar15,local_44);
          rga_dump_memory_parm(puVar17);
LAB_000179da:
          printk(DAT_00017a70,*param_1);
LAB_000179e2:
          mmput(param_2[9]);
          mmdrop(param_2[9]);
          param_2[9] = 0;
          uVar21 = DAT_00017a60;
          uVar5 = DAT_00017a34;
          if ((int)puVar14 < 0) goto LAB_000177a2;
        }
        else {
          local_40 = get_order(uVar15 << 2);
          puVar22 = (undefined4 *)__get_free_pages(0xcc0,local_40);
          if (puVar22 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0xfffffff4;
            printk(DAT_00017a78,DAT_00017a74);
            goto LAB_000179da;
          }
          uVar18 = 0;
          uVar24 = local_48 >> 0xc;
          local_3c = local_50 + 0x40;
          down_read(local_3c);
          local_64 = (undefined4 *)0x0;
          uStack_60 = 0;
          local_68 = puVar22;
          uVar3 = get_user_pages_remote(local_50,uVar24 << 0xc,uVar15,param_4);
          if ((int)uVar3 < 1) {
LAB_00017ac4:
            for (uVar18 = 0; uVar18 != uVar15; uVar18 = uVar18 + 1) {
              local_34 = uVar24 << 0xc;
              iVar7 = find_vma(local_50,local_34);
              uVar21 = DAT_00017d84;
              if (((iVar7 == 0) ||
                  (uVar13 = *(uint *)(*(int *)(local_50 + 0x24) + (local_34 >> 0x15) * 8),
                  uVar21 = DAT_00017d90, uVar13 == 0)) || ((int)(uVar13 << 0x1e) < 0)) {
                printk(uVar21,uVar18);
LAB_00017ae4:
                if (uVar18 != 0) {
                  printk(DAT_00017d88,uVar18 << 0xc,local_4c);
                }
                if (0 < (int)uVar3) {
                  printk(DAT_00017d8c,uVar3 * 0x1000,local_4c);
                }
                uVar3 = 0xfffffff6;
                goto LAB_00017b5e;
              }
              uVar6 = uVar24 & 0x1ff;
              uVar24 = uVar24 + 1;
              uVar13 = *(uint *)((uVar13 & 0xfffff000) + 0x7f000000 + uVar6 * 4);
              if (uVar13 == 0) {
                printk(DAT_00017d94,uVar18);
                goto LAB_00017ae4;
              }
              puVar22[uVar18] = *DAT_00017d98 + ((uVar13 >> 0xc) - *DAT_00017d80) * 0x20;
            }
            uVar3 = 0;
          }
          else if (uVar3 < uVar15) {
            do {
              puVar14 = puVar22 + uVar18;
              uVar18 = uVar18 + 1;
              put_page(*puVar14);
            } while (uVar3 != uVar18);
            goto LAB_00017ac4;
          }
LAB_00017b5e:
          up_read(local_3c);
          iVar7 = DAT_00017ddc;
          if ((int)uVar3 < 0) {
            puVar14 = (undefined4 *)0xffffffea;
            printk(DAT_00017d9c,local_48);
LAB_00017b76:
            free_pages(puVar22,local_40);
            goto LAB_000179da;
          }
          puVar4 = (uint *)kmem_cache_alloc(*(undefined4 *)(DAT_00017ddc + 0x14),0xdc0);
          local_2c[0] = puVar4;
          if (puVar4 == (uint *)0x0) {
            printk(DAT_00017da4,DAT_00017da0);
            for (uVar15 = 0; uVar15 != uVar3; uVar15 = uVar15 + 1) {
              put_page(puVar22[uVar15]);
            }
            puVar14 = (undefined4 *)0xfffffff4;
            goto LAB_00017b76;
          }
          *puVar4 = local_48;
          puVar4[1] = local_38;
          puVar4[2] = (uint)puVar22;
          puVar4[3] = local_40;
          puVar4[4] = uVar15;
          puVar4[5] = local_4c;
          puVar4[6] = local_44;
          puVar4[7] = uVar3;
          puVar22 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(iVar7 + 0x10),0xdc0);
          if (puVar22 == (undefined4 *)0x0) {
            printk(DAT_00017dac,DAT_00017da8);
            puVar14 = (undefined4 *)0xfffffff4;
LAB_00017bde:
            printk(DAT_00017db0);
LAB_00017be6:
            rga_free_virt_addr(local_2c);
            goto LAB_000179e2;
          }
          local_64 = (undefined4 *)0xcc0;
          local_68 = (undefined4 *)puVar4[5];
          puVar14 = (undefined4 *)sg_alloc_table_from_pages(puVar22,puVar4[2],puVar4[4],0);
          if (puVar14 != (undefined4 *)0x0) {
            printk(DAT_00017db4);
            kfree(puVar22);
            puVar22 = puVar14;
          }
          puVar14 = puVar22;
          if ((undefined4 *)0xfffff000 < puVar22) goto LAB_00017bde;
          uVar21 = *puVar22;
          for (uVar15 = 0; uVar15 < (uint)puVar22[2]; uVar15 = uVar15 + 1) {
            uVar21 = sg_next(uVar21);
          }
          if (puVar22[2] == 1) {
            iVar12 = sg_phys(*puVar22);
            if (iVar12 != 0) {
              local_54 = 5;
              goto LAB_00017c64;
            }
            printk(DAT_00017dbc,DAT_00017db8);
            puVar14 = (undefined4 *)0x0;
LAB_00017c48:
            if (puVar22 != (undefined4 *)0x0) {
              sg_free_table(puVar22);
              kfree(puVar22);
            }
            goto LAB_00017be6;
          }
          iVar12 = 0;
LAB_00017c64:
          iVar16 = rga_mm_check_memory_limit(puVar20,local_54);
          if (iVar16 == 0) {
            puVar14 = (undefined4 *)0xffffffea;
            printk(DAT_00017dc0,puVar20[0x20],local_54);
            goto LAB_00017c48;
          }
          iVar7 = kmem_cache_alloc(*(undefined4 *)(iVar7 + 0x18),0xdc0);
          if (iVar7 == 0) {
            puVar14 = (undefined4 *)0xfffffff4;
            printk(DAT_00017dc4,DAT_00017db8);
            goto LAB_00017c48;
          }
          if (*(int *)(puVar20[0x16] + 0x48) == 1) {
            local_68 = (undefined4 *)0x0;
            iVar16 = dma_map_sg_attrs(*puVar20,*puVar22,puVar22[2]);
            if (iVar16 != 0) goto LAB_00017d1e;
            local_68 = (undefined4 *)puVar22[2];
            puVar14 = (undefined4 *)0xffffffea;
            printk(DAT_00017dcc,DAT_00017db8,puVar20[0x20],*local_2c[0]);
LAB_00017cfe:
            kfree(iVar7);
            goto LAB_00017c48;
          }
          if (*(int *)(puVar20[0x16] + 0x48) == 2) {
            puVar14 = (undefined4 *)rga_iommu_map_sgt(puVar22,local_2c[0][5],iVar7,*puVar20);
            if ((int)puVar14 < 0) {
              uVar9 = puVar20[0x20];
              uVar21 = DAT_00017dc8;
              uVar5 = DAT_00017db8;
LAB_00017cce:
              printk(uVar21,uVar5,uVar9);
              goto LAB_00017cfe;
            }
          }
          else if ((local_54 & 4) == 0) {
            uVar5 = rga_get_mmu_type_str();
            uVar9 = *(undefined4 *)(puVar20[0x16] + 0x48);
            puVar14 = (undefined4 *)0x0;
            uVar21 = DAT_00017dd0;
            goto LAB_00017cce;
          }
LAB_00017d1e:
          *(undefined4 **)(iVar7 + 8) = puVar22;
          *(uint *)(iVar7 + 0x20) = local_2c[0][6];
          uVar15 = local_2c[0][5];
          *(undefined4 **)(iVar7 + 0x24) = puVar20;
          *param_2 = iVar7;
          param_2[1] = (int)local_2c[0];
          *(uint *)(iVar7 + 0x1c) = uVar15;
          param_2[0xc] = local_54;
          if (iVar12 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + local_2c[0][6];
          }
          param_2[2] = iVar12;
          param_2[3] = 0;
        }
        iVar12 = *(int *)(param_2[1] + 0x14);
        iVar7 = *(int *)(param_2[1] + 0x18);
        goto LAB_000178f2;
      }
    }
    puVar14 = (undefined4 *)0xffffffea;
    printk(DAT_00017a30);
    uVar21 = DAT_00017a60;
    uVar5 = DAT_00017a34;
    goto LAB_000177a2;
  case 2:
    param_2[10] = 2;
    if (param_3 == 0) {
      puVar20 = *(undefined4 **)(*DAT_00017dd8 + *(int *)(*DAT_00017dd8 + 0x1c) * 4 + 0xc);
    }
    else {
      puVar20 = *(undefined4 **)(param_3 + 8);
    }
    if (puVar20 == (undefined4 *)0x0) {
      printk(DAT_00017dd4);
    }
    else {
      puVar22 = (undefined4 *)param_2[8];
      if (puVar22 == (undefined4 *)0x0) {
        local_68 = puVar22;
        local_64 = puVar22;
        puVar22 = (undefined4 *)rga_image_size_cal(param_2[5],param_2[6],param_2[7]);
      }
      if ((int)puVar22 < 1) {
        printk(DAT_00017e9c);
        rga_dump_memory_parm(puVar17);
        uVar21 = DAT_00017ea4;
        uVar5 = DAT_00017ea0;
        puVar14 = puVar22;
        if (puVar22 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0xffffffea;
        }
        goto LAB_000177a2;
      }
      uVar15 = *param_1;
      iVar7 = rga_mm_check_memory_limit(puVar20,5);
      if (iVar7 != 0) {
        iVar7 = kmem_cache_alloc(*(undefined4 *)(DAT_00017eac + 0x18),0xdc0);
        if (iVar7 == 0) {
          puVar14 = (undefined4 *)0xfffffff4;
          printk(DAT_00017eb4,DAT_00017eb0);
          uVar21 = DAT_00017ea4;
          uVar5 = DAT_00017ea0;
        }
        else {
          if ((*(int *)(puVar20[0x16] + 0x48) != 2) ||
             (puVar14 = (undefined4 *)rga_iommu_map(uVar15,puVar22,iVar7,*puVar20),
             -1 < (int)puVar14)) {
            *(undefined4 **)(iVar7 + 0x24) = puVar20;
            param_2[2] = uVar15;
            param_2[3] = 0;
            param_2[4] = (int)puVar22;
            *param_2 = iVar7;
            param_2[0xc] = 7;
            return (undefined4 *)0x0;
          }
          printk(DAT_00017eb8,DAT_00017eb0,puVar20[0x20]);
          uVar21 = DAT_00017ea4;
          uVar5 = DAT_00017ea0;
        }
        goto LAB_000177a2;
      }
      printk(DAT_00017ea8,puVar20[0x20],5);
    }
    uVar21 = DAT_00017ea4;
    uVar5 = DAT_00017ea0;
    puVar14 = (undefined4 *)0xffffffea;
    goto LAB_000177a2;
  default:
    printk(DAT_00017ebc);
    return (undefined4 *)0xfffffff2;
  }
  param_2[10] = local_54;
  if (param_3 == 0) {
    puVar20 = *(undefined4 **)(*DAT_00017a3c + *(int *)(*DAT_00017a3c + 0x1c) * 4 + 0xc);
  }
  else {
    puVar20 = *(undefined4 **)(param_3 + 8);
  }
  if (puVar20 == (undefined4 *)0x0) {
    printk(DAT_00017a30);
LAB_0001779a:
    puVar14 = (undefined4 *)0xffffffea;
    uVar21 = DAT_00017a38;
    uVar5 = DAT_00017a34;
    goto LAB_000177a2;
  }
  puVar14 = (undefined4 *)param_1[7];
  if (puVar14 == (undefined4 *)0x0) {
    local_68 = puVar14;
    local_64 = puVar14;
    puVar14 = (undefined4 *)rga_image_size_cal(param_1[4],param_1[5],param_1[6]);
  }
  if ((int)puVar14 < 1) {
    printk(DAT_00017a40);
    rga_dump_memory_parm(puVar19);
    if (puVar14 == (undefined4 *)0x0) goto LAB_0001779a;
LAB_000177d8:
    uVar21 = DAT_00017a38;
    uVar5 = DAT_00017a34;
    if ((int)puVar14 < 0) {
LAB_000177a2:
      printk(uVar21,uVar5);
      return puVar14;
    }
  }
  else {
    if (puVar20[2] == 0) {
      uVar21 = *puVar20;
    }
    else {
      uVar21 = *(undefined4 *)(puVar20[2] + 4);
    }
    iVar7 = kmem_cache_alloc(*(undefined4 *)(DAT_00017a44 + 0x18),0xdc0);
    if (iVar7 == 0) {
      puVar14 = (undefined4 *)0xfffffff4;
      printk(DAT_00017a4c,DAT_00017a48);
      uVar21 = DAT_00017a38;
      uVar5 = DAT_00017a34;
      goto LAB_000177a2;
    }
    if (param_1[2] != 0) {
      if (param_1[2] == 3) {
        puVar22 = (undefined4 *)rga_dma_map_buf(*param_1,iVar7,0,uVar21);
        goto LAB_0001784c;
      }
      puVar22 = (undefined4 *)0xfffffff2;
LAB_0001782c:
      printk(DAT_00017a50,DAT_00017a48,puVar20[0x20]);
      puVar14 = puVar22;
LAB_00017838:
      kfree(iVar7);
      goto LAB_000177d8;
    }
    puVar22 = (undefined4 *)rga_dma_map_fd(*param_1,iVar7,0,uVar21);
LAB_0001784c:
    if ((int)puVar22 < 0) goto LAB_0001782c;
    puVar23 = *(undefined4 **)(iVar7 + 0x1c);
    if (puVar23 < puVar14) {
      uVar21 = rga_get_memory_type_str((char)param_1[2]);
      local_68 = puVar14;
      printk(DAT_00017a54,puVar23,uVar21,*param_1);
      rga_dump_memory_parm(puVar19);
LAB_00017874:
      puVar22 = (undefined4 *)0xffffffea;
LAB_000178b2:
      rga_dma_unmap_buf(iVar7);
      puVar14 = puVar22;
      goto LAB_00017838;
    }
    puVar14 = *(undefined4 **)(iVar7 + 8);
    *(undefined4 **)(iVar7 + 0x24) = puVar20;
    uVar21 = *puVar14;
    for (uVar15 = 0; uVar15 < (uint)puVar14[2]; uVar15 = uVar15 + 1) {
      uVar21 = sg_next(uVar21);
    }
    if ((*(undefined4 **)(iVar7 + 8))[2] == 1) {
      iVar12 = sg_phys(**(undefined4 **)(iVar7 + 8));
      if (iVar12 != 0) {
        iVar16 = 5;
        goto LAB_000178c6;
      }
      printk(DAT_00017a58,DAT_00017a48);
      goto LAB_000178b2;
    }
    iVar12 = 0;
    iVar16 = 1;
LAB_000178c6:
    iVar2 = rga_mm_check_memory_limit(puVar20,iVar16);
    if (iVar2 == 0) {
      printk(DAT_00017a5c,puVar20[0x20],iVar16);
      goto LAB_00017874;
    }
    *param_2 = iVar7;
    param_2[0xc] = iVar16;
    param_2[2] = iVar12;
    param_2[3] = 0;
  }
  iVar12 = *(int *)(*param_2 + 0x1c);
  iVar7 = *(int *)(*param_2 + 0x20);
LAB_000178f2:
  param_2[4] = iVar12 - iVar7;
  param_2[0xc] = param_2[0xc] | 2;
  return (undefined4 *)0x0;
}



/* ===== rga_mm_unmap_buffer @ 00017ec0 size=254 ===== */

undefined4 rga_mm_unmap_buffer(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  switch(param_1[10]) {
  case 0:
  case 3:
    if (*param_1 == 0) {
      return 0;
    }
    if (*(int *)(*param_1 + 0x24) != 0) {
      rga_dma_unmap_buf();
      if ((param_1[0xc] << 0x1d < 0) && (param_1[3] != 0 || param_1[2] != 0)) {
        param_1[2] = 0;
        param_1[3] = 0;
      }
      kfree(*param_1);
      *param_1 = 0;
      return 0;
    }
    break;
  case 1:
    iVar1 = *param_1;
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x24);
    if (puVar2 != (undefined4 *)0x0) {
      if (*(int *)(puVar2[0x16] + 0x48) == 1) {
        dma_unmap_sg_attrs(*puVar2,**(undefined4 **)(iVar1 + 8),(*(undefined4 **)(iVar1 + 8))[2],0,0
                           ,param_2,param_3);
      }
      else if (*(int *)(puVar2[0x16] + 0x48) == 2) {
        rga_iommu_unmap();
      }
      if ((param_1[0xc] << 0x1d < 0) && (param_1[3] != 0 || param_1[2] != 0)) {
        param_1[2] = 0;
        param_1[3] = 0;
      }
      iVar1 = *param_1;
      if ((iVar1 != -8) && (*(int *)(iVar1 + 8) != 0)) {
        sg_free_table();
        kfree(*(undefined4 *)(iVar1 + 8));
        *(undefined4 *)(iVar1 + 8) = 0;
      }
      kfree(*param_1);
      *param_1 = 0;
      rga_free_virt_addr(param_1 + 1);
      mmput(param_1[9]);
      mmdrop(param_1[9]);
      param_1[9] = 0;
    }
    return 0;
  case 2:
    if (*param_1 == 0) {
      return 0;
    }
    iVar1 = *(int *)(*param_1 + 0x24);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x58) + 0x48) == 2) {
        rga_iommu_unmap();
      }
      kfree(*param_1);
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return 0;
    }
    break;
  default:
    printk(DAT_00017fc4);
    return 0xfffffff2;
  }
  return 0;
}



/* ===== rga_mm_kref_release_buffer @ 00017fc8 size=48 ===== */

void rga_mm_kref_release_buffer(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00017ff8;
  rga_mm_unmap_buffer(param_1 + -0x34);
  idr_remove(*(int *)(*piVar1 + 0x50) + 0xc,*(undefined4 *)(param_1 + -8));
  kfree(param_1 + -0x34);
  iVar2 = *(int *)(*piVar1 + 0x50);
  *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + -1;
  return;
}



/* ===== rga_mm_handle_remove @ 00017ffc size=14 ===== */

undefined4 rga_mm_handle_remove(undefined4 param_1,int param_2)

{
  rga_mm_kref_release_buffer(param_2 + 0x34);
  return 0;
}



/* ===== kref_put.constprop.7 @ 0001800a size=50 ===== */

undefined4 kref_put_constprop_7(int *param_1)

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
    rga_mm_kref_release_buffer();
    uVar3 = 1;
  }
  else {
    if (iVar2 < 1) {
      refcount_warn_saturate(param_1,3);
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== rga_mm_lookup_handle @ 0001803c size=24 ===== */

void rga_mm_lookup_handle(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  
  mutex_is_locked();
  idr_find(param_1 + 0xc,param_2,extraout_r2,param_4);
  return;
}



/* ===== rga_mm_lookup_flag @ 00018054 size=30 ===== */

undefined4 rga_mm_lookup_flag(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = rga_mm_lookup_handle(param_1,param_3);
  if (iVar1 == 0) {
    printk(DAT_00018074,param_3);
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x30);
  }
  return uVar2;
}



/* ===== rga_mm_lookup_iova @ 00018078 size=20 ===== */

int rga_mm_lookup_iova(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
    return *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x18);
  }
  return 0;
}



/* ===== rga_mm_get_buffer_info @ 0001808c size=102 ===== */

undefined4 rga_mm_get_buffer_info(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x58) + 0x48) == 2) {
    iVar2 = 0;
    uVar3 = rga_mm_lookup_iova(param_2);
    iVar1 = (int)uVar3;
    if (iVar1 == 0) {
      printk(DAT_00018104,*(undefined4 *)(param_1 + 0x6fc),
             *(undefined4 *)((int)((ulonglong)uVar3 >> 0x20) + 0x28));
      return 0xffffffea;
    }
    goto LAB_000180ea;
  }
  if (*(int *)(param_2 + 0x30) << 0x1d < 0) {
switchD_000180ce_caseD_2:
    iVar1 = *(int *)(param_2 + 8);
    iVar2 = *(int *)(param_2 + 0xc);
  }
  else {
    switch(*(undefined4 *)(param_2 + 0x28)) {
    case 0:
    case 3:
      iVar1 = 0;
      iVar2 = 0;
      break;
    case 1:
      iVar1 = **(int **)(param_2 + 4);
      iVar2 = (*(int **)(param_2 + 4))[1];
      break;
    case 2:
      goto switchD_000180ce_caseD_2;
    default:
      printk(DAT_00018108);
      return 0xfffffff2;
    }
  }
LAB_000180ea:
  *param_3 = iVar1;
  param_3[1] = iVar2;
  return 0;
}



/* ===== rga_mm_lookup_sgt @ 0001810c size=16 ===== */

undefined4 rga_mm_lookup_sgt(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}



/* ===== rga_mm_sync_dma_sg_for_device @ 0001811c size=76 ===== */

undefined4 rga_mm_sync_dma_sg_for_device(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined8 uVar4;
  
  uVar4 = rga_mm_lookup_sgt();
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  puVar1 = (undefined4 *)uVar4;
  if (puVar1 == (undefined4 *)0x0) {
    printk(DAT_0001816c,DAT_00018168,0x4fe,*(undefined4 *)(iVar3 + 0x6fc));
    uVar2 = 0xffffffea;
  }
  else if (*(undefined4 **)(*param_1 + 0x24) == (undefined4 *)0x0) {
    printk(DAT_00018170,DAT_00018168,0x505,*(undefined4 *)(iVar3 + 0x6fc));
    uVar2 = 0xfffffff2;
  }
  else {
    dma_sync_sg_for_device(**(undefined4 **)(*param_1 + 0x24),*puVar1,puVar1[2],extraout_r2);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rga_mm_set_mmu_base @ 00018174 size=602 ===== */

undefined4 rga_mm_set_mmu_base(int param_1,int *param_2,int param_3)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_50;
  int local_4c;
  int local_34;
  int local_30;
  int local_2c [2];
  
  iVar3 = rga_image_size_cal((short)param_2[9],*(undefined2 *)((int)param_2 + 0x26),param_2[6],
                             &local_34,&local_30,local_2c);
  piVar2 = DAT_000183e0;
  if (iVar3 < 1) {
    iVar3 = param_2[9];
    uVar1 = *(undefined2 *)((int)param_2 + 0x26);
    uVar4 = rga_get_format_name(param_2[6]);
    printk(DAT_000183d0,(short)iVar3,uVar1,uVar4);
    return 0xffffffea;
  }
  iVar9 = *(int *)(*(int *)(param_3 + 0xc) + 4);
  if (*(int *)(param_3 + 0x10) == 0) {
    iVar10 = 0;
    if (iVar9 != 0) {
      iVar10 = *(int *)(iVar9 + 0x18);
    }
    iVar9 = iVar3 + iVar10 >> 0xc;
    if ((iVar3 + iVar10 & 0xfffU) != 0) {
      iVar9 = iVar9 + 1;
    }
    if (iVar9 < 0) {
      iVar8 = 0;
      iVar3 = 0;
      iVar10 = 0;
      goto LAB_00018238;
    }
    if ((*(uint *)(param_1 + 0x6f0) & 8) == 0) {
      mutex_lock(*DAT_000183e0);
      iVar5 = rga_mmu_buf_get(*(undefined4 *)(*piVar2 + 0x20),iVar9);
      if (iVar5 == 0) goto LAB_00018298;
      mutex_unlock(*piVar2);
      uVar4 = 0;
    }
    else {
      uVar4 = get_order(iVar9 << 2);
      iVar5 = __get_free_pages(0xcc4,uVar4);
      if (iVar5 == 0) goto LAB_0001826e;
    }
    iVar3 = rga_mm_lookup_sgt(*(undefined4 *)(param_3 + 0xc));
    if (iVar3 != 0) {
      rga_mm_sgt_to_page_table_constprop_5(iVar3,iVar5,iVar9);
      *param_2 = iVar10;
      param_2[1] = iVar10 >> 0x1f;
      rga_convert_addr(param_2,0);
LAB_00018334:
      *(int *)(param_3 + 0x18) = iVar5;
      *(undefined4 *)(param_3 + 0x1c) = uVar4;
      *(int *)(param_3 + 0x20) = iVar9;
      return 0;
    }
  }
  else {
    if (iVar9 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = *(int *)(iVar9 + 0x18);
    }
    iVar3 = *(int *)(*(int *)(param_3 + 0x10) + 4);
    if (iVar3 == 0) {
      local_4c = 0;
    }
    else {
      local_4c = *(int *)(iVar3 + 0x18);
    }
    iVar3 = *(int *)(*(int *)(param_3 + 0x14) + 4);
    iVar7 = 0;
    if (iVar3 != 0) {
      iVar7 = *(int *)(iVar3 + 0x18);
    }
    iVar10 = local_34 + local_50 >> 0xc;
    if ((local_34 + local_50 & 0xfffU) != 0) {
      iVar10 = iVar10 + 1;
    }
    iVar3 = local_4c + local_30 >> 0xc;
    if ((local_4c + local_30 & 0xfffU) != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar8 = local_2c[0] + iVar7 >> 0xc;
    if ((local_2c[0] + iVar7 & 0xfffU) != 0) {
      iVar8 = iVar8 + 1;
    }
    iVar9 = iVar10 + iVar3 + iVar8;
    if (iVar9 < 1) {
LAB_00018238:
      printk(DAT_000183d4,iVar10,iVar3,iVar8);
      return 0xfffffff2;
    }
    if ((*(uint *)(param_1 + 0x6f0) & 8) == 0) {
      mutex_lock(*DAT_000183e0);
      iVar5 = rga_mmu_buf_get(*(undefined4 *)(*piVar2 + 0x20),iVar9);
      if (iVar5 == 0) {
LAB_00018298:
        printk(DAT_000183e4);
        mutex_unlock(*piVar2);
        return 0xfffffff2;
      }
      mutex_unlock(*piVar2);
      uVar4 = 0;
    }
    else {
      uVar4 = get_order(iVar9 * 4);
      iVar5 = __get_free_pages(0xcc4,uVar4);
      if (iVar5 == 0) {
LAB_0001826e:
        printk(DAT_000183dc,DAT_000183d8,uVar4);
        return 0xfffffff4;
      }
    }
    iVar6 = rga_mm_lookup_sgt(*(undefined4 *)(param_3 + 0xc));
    if (iVar6 != 0) {
      rga_mm_sgt_to_page_table_constprop_5(iVar6,iVar5,iVar10);
      iVar6 = rga_mm_lookup_sgt(*(undefined4 *)(param_3 + 0x10));
      if (iVar6 != 0) {
        rga_mm_sgt_to_page_table_constprop_5(iVar6,iVar5 + iVar10 * 4,iVar3);
        iVar6 = rga_mm_lookup_sgt(*(undefined4 *)(param_3 + 0x14));
        if (iVar6 != 0) {
          rga_mm_sgt_to_page_table_constprop_5(iVar6,iVar5 + (iVar3 + iVar10) * 4,iVar8);
          *param_2 = local_50;
          param_2[1] = local_50 >> 0x1f;
          local_4c = local_4c + iVar10 * 0x1000;
          param_2[2] = local_4c;
          param_2[3] = local_4c >> 0x1f;
          iVar7 = iVar7 + (iVar10 + iVar3) * 0x1000;
          param_2[4] = iVar7;
          param_2[5] = iVar7 >> 0x1f;
          goto LAB_00018334;
        }
      }
    }
  }
  printk(DAT_000183e8);
  if (*(int *)(param_1 + 0x6f0) << 0x1c < 0) {
    free_pages(iVar5,uVar4);
  }
  return 0xffffffea;
}



/* ===== rga_mm_map_channel_job_buffer @ 000183ec size=190 ===== */

int rga_mm_map_channel_job_buffer
              (int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_000184ac + 0x18),0xdc0,param_3,DAT_000184ac,param_4);
  if (iVar1 == 0) {
    iVar3 = -0xc;
    printk(DAT_000184b4,DAT_000184b0);
  }
  else {
    iVar3 = rga_mm_map_buffer(*param_3,iVar1,param_1,param_5);
    if (iVar3 < 0) {
      printk(DAT_000184b8);
    }
    else {
      iVar3 = rga_mm_get_buffer_info(param_1,iVar1,param_2);
      uVar2 = DAT_000184bc;
      if ((iVar3 < 0) ||
         ((*(int *)(iVar1 + 0x28) == 1 &&
          (iVar3 = rga_mm_sync_dma_sg_for_device(iVar1,param_1,param_4), uVar2 = DAT_000184c0,
          iVar3 < 0)))) {
        printk(uVar2);
      }
      else {
        rga_convert_addr(param_2,0);
        param_3[3] = iVar1;
        if (((*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x58) + 0x48) != 1) ||
            (iVar3 = rga_mm_is_need_mmu(param_1,iVar1), iVar3 == 0)) ||
           (iVar3 = rga_mm_set_mmu_base(param_1,param_2,param_3), -1 < iVar3)) {
          return 0;
        }
        printk(DAT_000184c4);
        param_3[3] = 0;
      }
      rga_mm_unmap_buffer(iVar1);
    }
    kfree(iVar1);
  }
  return iVar3;
}



/* ===== rga_mm_sync_dma_sg_for_cpu @ 000184c8 size=76 ===== */

undefined4 rga_mm_sync_dma_sg_for_cpu(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined8 uVar4;
  
  uVar4 = rga_mm_lookup_sgt();
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  puVar1 = (undefined4 *)uVar4;
  if (puVar1 == (undefined4 *)0x0) {
    printk(DAT_00018518,DAT_00018514,0x518,*(undefined4 *)(iVar3 + 0x6fc));
    uVar2 = 0xffffffea;
  }
  else if (*(undefined4 **)(*param_1 + 0x24) == (undefined4 *)0x0) {
    printk(DAT_0001851c,DAT_00018514,0x51f,*(undefined4 *)(iVar3 + 0x6fc));
    uVar2 = 0xfffffff2;
  }
  else {
    dma_sync_sg_for_cpu(**(undefined4 **)(*param_1 + 0x24),*puVar1,puVar1[2],extraout_r2);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rga_mm_put_buffer @ 00018520 size=56 ===== */

void rga_mm_put_buffer(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((*(int *)(param_3 + 0x28) == 1) && (param_4 != 3)) &&
     (iVar1 = rga_mm_sync_dma_sg_for_cpu(param_3,param_2,param_4), iVar1 != 0)) {
    printk(DAT_00018558);
  }
  mutex_lock(param_1);
  kref_put_constprop_7(param_3 + 0x34);
  mutex_unlock(param_1);
  return;
}



/* ===== rga_mm_put_channel_handle_info @ 0001855c size=62 ===== */

void rga_mm_put_channel_handle_info
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 0xc) != 0) {
    rga_mm_put_buffer();
  }
  if (*(int *)(param_3 + 0x10) != 0) {
    rga_mm_put_buffer(param_1,param_2,*(int *)(param_3 + 0x10),param_4);
  }
  uVar1 = 0;
  if (*(int *)(param_3 + 0x14) != 0) {
    rga_mm_put_buffer(param_1,param_2,*(int *)(param_3 + 0x14),param_4);
    uVar1 = extraout_r2;
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    free_pages(*(int *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),uVar1,param_4);
    return;
  }
  return;
}



/* ===== rga_mm_unmap_channel_job_buffer @ 0001859a size=52 ===== */

void rga_mm_unmap_channel_job_buffer(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((*(int *)(*(int *)(param_2 + 0xc) + 0x28) == 1) && (param_3 != 3)) &&
     (iVar1 = rga_mm_sync_dma_sg_for_cpu(*(int *)(param_2 + 0xc),param_1,2), iVar1 != 0)) {
    printk(DAT_000185d0);
  }
  rga_mm_unmap_buffer(*(undefined4 *)(param_2 + 0xc));
  kfree(*(undefined4 *)(param_2 + 0xc));
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



/* ===== rga_mm_unmap_buffer_info @ 000185d4 size=84 ===== */

void rga_mm_unmap_buffer_info(int param_1)

{
  if (*(int *)(param_1 + 0x64c) != 0) {
    rga_mm_unmap_channel_job_buffer(param_1,param_1 + 0x640,3);
  }
  if (*(int *)(param_1 + 0x694) != 0) {
    rga_mm_unmap_channel_job_buffer(param_1,param_1 + 0x688,2);
  }
  if (*(int *)(param_1 + 0x670) != 0) {
    rga_mm_unmap_channel_job_buffer(param_1,param_1 + 0x664,3);
  }
  if (*(int *)(param_1 + 0x6b8) != 0) {
    rga_mm_unmap_channel_job_buffer(param_1,param_1 + 0x6ac,3);
  }
  rga_mm_put_external_buffer(param_1);
  return;
}



/* ===== rga_mm_get_buffer @ 00018628 size=190 ===== */

int rga_mm_get_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,int *param_6,uint param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  mutex_lock();
  iVar1 = rga_mm_lookup_handle(param_1,param_3);
  *param_6 = iVar1;
  if (iVar1 == 0) {
    printk(DAT_000186e8,param_3);
    mutex_unlock(param_1);
    iVar2 = -0xe;
  }
  else {
    __refcount_add_constprop_11(iVar1 + 0x34);
    if (*DAT_000186ec != 0) {
      printk(DAT_000186f0,param_3);
      rga_mm_dump_buffer(iVar1);
    }
    mutex_unlock(param_1);
    iVar2 = rga_mm_get_buffer_info(param_2,iVar1,param_5);
    if (iVar2 < 0) {
      printk(DAT_000186f4,param_3);
    }
    else {
      if (*(uint *)(iVar1 + 0x10) < param_7) {
        iVar2 = -0x16;
        printk(DAT_000186f8,*(uint *)(iVar1 + 0x10),param_3,param_7);
      }
      else {
        if ((*(int *)(iVar1 + 0x28) != 1) ||
           (iVar2 = rga_mm_sync_dma_sg_for_device(iVar1,param_2,param_8), -1 < iVar2)) {
          return 0;
        }
        printk(DAT_000186fc);
      }
      mutex_lock(param_1);
      kref_put_constprop_7(iVar1 + 0x34);
      mutex_unlock(param_1);
    }
  }
  return iVar2;
}



/* ===== rga_mm_get_channel_handle_info @ 00018700 size=338 ===== */

int rga_mm_get_channel_handle_info
              (undefined4 param_1,int param_2,int *param_3,int param_4,undefined4 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = rga_image_size_cal((short)param_3[9],*(undefined2 *)((int)param_3 + 0x26),param_3[6],
                             &local_2c,&local_28,&local_24);
  if (iVar2 < 1) {
    uVar1 = *(undefined2 *)((int)param_3 + 0x26);
    iVar2 = param_3[9];
    uVar3 = rga_get_format_name(param_3[6]);
    printk(DAT_00018854,(short)iVar2,uVar1,uVar3);
    return -0x16;
  }
  iVar4 = *param_3;
  if (param_3[3] == 0 && param_3[2] == 0) {
    if ((iVar4 < 1) ||
       (iVar2 = rga_mm_get_buffer(param_1,param_2,iVar4,iVar4 >> 0x1f,param_3,param_4 + 0xc,iVar2,
                                  param_5), uVar3 = DAT_00018858, -1 < iVar2)) {
      rga_convert_addr(param_3,0);
      goto LAB_000187ea;
    }
  }
  else if ((((iVar4 < 1) ||
            (iVar2 = rga_mm_get_buffer(param_1,param_2,iVar4,iVar4 >> 0x1f,param_3,param_4 + 0xc,
                                       local_2c,param_5), uVar3 = DAT_00018858, -1 < iVar2)) &&
           ((iVar4 = param_3[2], iVar4 < 1 ||
            (iVar2 = rga_mm_get_buffer(param_1,param_2,iVar4,iVar4 >> 0x1f,param_3 + 2,
                                       param_4 + 0x10,local_28,param_5), uVar3 = DAT_0001885c,
            -1 < iVar2)))) &&
          ((iVar4 = param_3[4], iVar4 < 1 ||
           (iVar2 = rga_mm_get_buffer(param_1,param_2,iVar4,iVar4 >> 0x1f,param_3 + 4,param_4 + 0x14
                                      ,local_24,param_5), uVar3 = DAT_0001885c, -1 < iVar2)))) {
LAB_000187ea:
    if ((*(int *)(*(int *)(*(int *)(param_2 + 8) + 0x58) + 0x48) == 1) &&
       ((iVar2 = rga_mm_is_need_mmu(param_2,*(undefined4 *)(param_4 + 0xc)), iVar2 != 0 &&
        (iVar2 = rga_mm_set_mmu_base(param_2,param_3,param_4), iVar2 < 0)))) {
      printk(DAT_00018860);
      rga_mm_put_channel_handle_info(param_1,param_2,param_4,param_5);
      return iVar2;
    }
    return 0;
  }
  printk(uVar3,iVar4);
  return iVar2;
}



/* ===== rga_mm_dump_info @ 00018864 size=68 ===== */

void rga_mm_dump_info(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  mutex_is_locked();
  printk(DAT_000188a8);
  printk(DAT_000188ac,*(undefined4 *)(param_1 + 0x1c));
  printk(DAT_000188b0);
  uVar1 = DAT_000188b4;
  local_14 = 0;
  while (iVar2 = idr_get_next(param_1 + 0xc,&local_14), iVar2 != 0) {
    rga_mm_dump_buffer();
    printk(uVar1);
    local_14 = local_14 + 1;
  }
  return;
}



/* ===== rga_mm_map_job_info @ 000188b8 size=516 ===== */

int rga_mm_map_job_info(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if ((*(uint *)(param_1 + 0x6f0) & 8) != 0) {
    uVar4 = *(undefined4 *)(*DAT_00018abc + 0x50);
    if (((*(int *)(param_1 + 0x1c) == 0 && *(int *)(param_1 + 0x18) == 0) ||
        (iVar2 = rga_mm_get_channel_handle_info(uVar4,param_1,param_1 + 0x18,param_1 + 0x640,1),
        uVar3 = DAT_00018ac0, -1 < iVar2)) &&
       ((*(int *)(param_1 + 0x54) == 0 && *(int *)(param_1 + 0x50) == 0 ||
        (iVar2 = rga_mm_get_channel_handle_info(uVar4,param_1,param_1 + 0x50,param_1 + 0x688,1),
        uVar3 = DAT_00018ac8, -1 < iVar2)))) {
      if (*(int *)(param_1 + 0x8c) == 0 && *(int *)(param_1 + 0x88) == 0) goto LAB_0001895e;
      if (*(char *)(param_1 + 0x10) == '\x06') {
        bVar8 = false;
        iVar2 = param_1 + 0x6ac;
      }
      else {
        bVar8 = *(char *)(param_1 + 0x120) == '\0';
        iVar2 = param_1 + 0x664;
      }
      iVar2 = rga_mm_get_channel_handle_info(uVar4,param_1,param_1 + 0x88,iVar2,bVar8);
      uVar3 = DAT_00018acc;
      if (-1 < iVar2) goto LAB_0001895e;
    }
    printk(uVar3);
    uVar4 = DAT_00018ac4;
    goto LAB_000188f6;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x02') {
    iVar2 = 0;
LAB_0001897c:
    if (*(char *)(param_1 + 0x120) == '\0') {
      iVar5 = 0;
      iVar6 = 0;
    }
    else {
      iVar5 = param_1 + 0x88;
      iVar6 = 0;
    }
  }
  else {
    iVar2 = param_1 + 0x18;
    if (cVar1 != '\x06') goto LAB_0001897c;
    iVar6 = param_1 + 0x88;
    iVar5 = 0;
  }
  iVar7 = param_1 + 0x50;
  if ((iVar2 == 0) ||
     (iVar2 = rga_mm_get_channel_external_buffer
                        ((*(uint *)(param_1 + 0x138) & 0x1ff) >> 8,iVar2,param_1 + 0x640,cVar1,
                         param_1,param_2), -1 < iVar2)) {
    if (((iVar7 == 0) ||
        (iVar2 = rga_mm_get_channel_external_buffer
                           ((*(uint *)(param_1 + 0x138) & 0x7ff) >> 10,iVar7,param_1 + 0x688),
        uVar4 = DAT_00018ad8, -1 < iVar2)) &&
       (((iVar5 == 0 ||
         (iVar2 = rga_mm_get_channel_external_buffer
                            ((*(uint *)(param_1 + 0x138) & 0x3ff) >> 9,iVar5,param_1 + 0x664),
         uVar4 = DAT_00018adc, -1 < iVar2)) &&
        ((iVar6 == 0 ||
         (iVar2 = rga_mm_get_channel_external_buffer
                            ((*(uint *)(param_1 + 0x138) & 0xfff) >> 0xb,iVar6,param_1 + 0x6ac),
         uVar4 = DAT_00018ae0, -1 < iVar2)))))) {
      if (((((*(int *)(param_1 + 0x640) == 0) ||
            (iVar2 = rga_mm_map_channel_job_buffer(param_1,param_1 + 0x18,param_1 + 0x640,1,0),
            uVar4 = DAT_00018ae4, -1 < iVar2)) &&
           ((*(int *)(param_1 + 0x688) == 0 ||
            (iVar2 = rga_mm_map_channel_job_buffer(param_1,iVar7,param_1 + 0x688,1,1),
            uVar4 = DAT_00018aec, -1 < iVar2)))) &&
          ((*(int *)(param_1 + 0x664) == 0 ||
           (iVar2 = rga_mm_map_channel_job_buffer
                              (param_1,param_1 + 0x88,param_1 + 0x664,
                               *(char *)(param_1 + 0x120) == '\0',0), uVar4 = DAT_00018af0,
           -1 < iVar2)))) &&
         ((*(int *)(param_1 + 0x6ac) == 0 ||
          (iVar2 = rga_mm_map_channel_job_buffer(param_1,param_1 + 0x88,param_1 + 0x6ac,0,0),
          uVar4 = DAT_00018af4, -1 < iVar2)))) {
LAB_0001895e:
        rga_mm_set_mmu_flag(param_1);
        return 0;
      }
      printk(uVar4);
      rga_mm_unmap_buffer_info(param_1);
      uVar4 = DAT_00018ae8;
      goto LAB_000188f6;
    }
    printk(uVar4);
    rga_mm_put_external_buffer(param_1);
  }
  else {
    printk(DAT_00018ad0);
  }
  printk(DAT_00018ad4);
  uVar4 = DAT_00018ae8;
LAB_000188f6:
  printk(uVar4);
  return iVar2;
}



/* ===== rga_mm_unmap_job_info @ 00018af8 size=82 ===== */

void rga_mm_unmap_job_info(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x6f0) << 0x1c < 0) {
    uVar1 = *(undefined4 *)(*DAT_00018b4c + 0x50);
    rga_mm_put_channel_handle_info(uVar1,param_1,param_1 + 0x640,3);
    rga_mm_put_channel_handle_info(uVar1,param_1,param_1 + 0x688,2);
    rga_mm_put_channel_handle_info(uVar1,param_1,param_1 + 0x664,3);
    rga_mm_put_channel_handle_info(uVar1,param_1,param_1 + 0x6ac,3);
    return;
  }
  rga_mm_unmap_buffer_info();
  return;
}



/* ===== rga_mm_import_buffer @ 00018b50 size=438 ===== */

undefined4 rga_mm_import_buffer(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_24;
  
  iVar5 = *(int *)(*DAT_00018d0c + 0x50);
  local_24 = param_4;
  if (iVar5 == 0) {
    printk(DAT_00018d10);
  }
  else {
    mutex_lock(iVar5);
    mutex_is_locked(iVar5);
    switch(param_1[2]) {
    case 0:
      puVar1 = (undefined4 *)dma_buf_get(*param_1);
      puVar2 = puVar1;
      if (puVar1 < 0xfffff001) {
        local_24 = 0;
        while ((puVar2 = (undefined4 *)idr_get_next(iVar5 + 0xc,&local_24),
               puVar2 != (undefined4 *)0x0 &&
               (((uint *)*puVar2 == (uint *)0x0 || (puVar1 != (undefined4 *)*(uint *)*puVar2))))) {
          local_24 = local_24 + 1;
        }
        dma_buf_put(puVar1);
      }
      if (puVar2 != (undefined4 *)0x0) {
LAB_00018bb6:
        if (puVar2 < (undefined4 *)0xfffff001) {
          __refcount_add_constprop_11(puVar2 + 0xd);
          goto LAB_00018bc4;
        }
      }
      break;
    case 1:
      local_24 = 0;
      while (puVar2 = (undefined4 *)idr_get_next(iVar5 + 0xc,&local_24), puVar2 != (undefined4 *)0x0
            ) {
        piVar4 = (int *)puVar2[1];
        if ((piVar4 != (int *)0x0) && (piVar4[1] == param_1[1] && *piVar4 == *param_1))
        goto LAB_00018bb6;
        local_24 = local_24 + 1;
      }
      break;
    case 2:
      local_24 = 0;
      while (puVar2 = (undefined4 *)idr_get_next(iVar5 + 0xc,&local_24), puVar2 != (undefined4 *)0x0
            ) {
        if (puVar2[3] == param_1[1] && puVar2[2] == *param_1) goto LAB_00018bb6;
        local_24 = local_24 + 1;
      }
      break;
    case 3:
      local_24 = 0;
      while (puVar2 = (undefined4 *)idr_get_next(iVar5 + 0xc,&local_24), puVar2 != (undefined4 *)0x0
            ) {
        if (((int *)*puVar2 != (int *)0x0) && (param_1[1] == 0 && *(int *)*puVar2 == *param_1))
        goto LAB_00018bb6;
        local_24 = local_24 + 1;
      }
      break;
    default:
      printk(DAT_00018d20);
    }
    puVar2 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00018d14 + 0x18),0xdc0);
    if (puVar2 == (undefined4 *)0x0) {
      printk(DAT_00018d1c,DAT_00018d18);
      mutex_unlock(iVar5);
    }
    else {
      iVar3 = rga_mm_map_buffer(param_1,puVar2,0,1);
      if (-1 < iVar3) {
        puVar2[0xe] = param_2;
        puVar2[0xd] = 1;
        idr_preload(0xcc0);
        iVar3 = idr_alloc_cyclic(iVar5 + 0xc,puVar2,1,0,0x800);
        if (-1 < iVar3) {
          puVar2[0xb] = iVar3;
          *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
          if (*DAT_00018d28 != 0) {
            printk(DAT_00018d2c);
            rga_mm_dump_buffer(puVar2);
          }
LAB_00018bc4:
          mutex_unlock(iVar5);
          return puVar2[0xb];
        }
        printk(DAT_00018d24);
      }
      mutex_unlock(iVar5);
      kfree(puVar2);
    }
  }
  return 0;
}



/* ===== rga_mm_release_buffer @ 00018d30 size=104 ===== */

undefined4 rga_mm_release_buffer(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*DAT_00018d98 + 0x50);
  if (iVar3 == 0) {
    printk(DAT_00018d9c);
    uVar1 = 0xfffffff2;
  }
  else {
    mutex_lock(iVar3);
    uVar2 = rga_mm_lookup_handle(iVar3,param_1);
    if ((uVar2 == 0) || (0xfffff000 < uVar2)) {
      printk(DAT_00018da0,param_1);
      mutex_unlock(iVar3);
      uVar1 = 0xfffffffe;
    }
    else {
      if (*DAT_00018da4 != 0) {
        printk(DAT_00018da8);
        rga_mm_dump_buffer(uVar2);
      }
      kref_put_constprop_7(uVar2 + 0x34);
      mutex_unlock(iVar3);
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== rga_mm_session_release_buffer @ 00018dac size=102 ===== */

undefined4 rga_mm_session_release_buffer(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  
  uVar1 = DAT_00018e1c;
  iVar3 = *(int *)(*DAT_00018e14 + 0x50);
  local_1c = param_2;
  if (iVar3 == 0) {
    printk(DAT_00018e18);
    uVar1 = 0xfffffff2;
  }
  else {
    iVar4 = param_1;
    mutex_lock(iVar3);
    local_1c = 0;
    while (iVar2 = idr_get_next(iVar3 + 0xc,&local_1c), iVar2 != 0) {
      if (*(int *)(iVar2 + 0x38) == param_1) {
        printk(uVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar2 + 0x2c),
               *(int *)(iVar2 + 0x38),iVar4);
        kref_put_constprop_7(iVar2 + 0x34);
      }
      local_1c = local_1c + 1;
    }
    mutex_unlock(iVar3);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rga_mm_init @ 00018e20 size=58 ===== */

undefined4 rga_mm_init(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_00018e5c + 0x14),0xdc0,param_3,DAT_00018e5c,param_4);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    printk(DAT_00018e60);
    uVar2 = 0xfffffff4;
  }
  else {
    __mutex_init(iVar1,DAT_00018e68,DAT_00018e64);
    uVar2 = 0;
    *(undefined4 *)(iVar1 + 0xc) = DAT_00018e6c;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 1;
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  return uVar2;
}



/* ===== rga_mm_remove @ 00018e70 size=50 ===== */

void rga_mm_remove(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  mutex_lock(iVar1);
  idr_for_each(iVar1 + 0xc,DAT_00018ea4,iVar1);
  idr_destroy(iVar1 + 0xc);
  mutex_unlock(iVar1);
  kfree(*param_1);
  *param_1 = 0;
  return;
}



/* ===== rga_fence_get_name @ 00018ea8 size=4 ===== */

undefined4 rga_fence_get_name(void)

{
  return DAT_00018eac;
}



/* ===== rga_fence_context_init @ 00018eb0 size=46 ===== */

undefined4
rga_fence_context_init(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)
           kmem_cache_alloc(*(undefined4 *)(DAT_00018ee0 + 0xc),0xdc0,param_3,DAT_00018ee0,param_4);
  if (puVar1 == (undefined4 *)0x0) {
    printk(DAT_00018ee4);
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = dma_fence_context_alloc(1);
    *param_1 = (int)puVar1;
    *puVar1 = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rga_fence_context_remove @ 00018ee8 size=18 ===== */

void rga_fence_context_remove(int *param_1)

{
  if (*param_1 != 0) {
    kfree();
    *param_1 = 0;
  }
  return;
}



/* ===== rga_dma_fence_alloc @ 00018efa size=80 ===== */

int rga_dma_fence_alloc(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(*DAT_00018f4c + 0x5c);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = -0x16;
    printk(DAT_00018f50);
  }
  else {
    iVar3 = kmem_cache_alloc(*(undefined4 *)(DAT_00018f54 + 0x18),0xdc0);
    if (iVar3 == 0) {
      iVar3 = -0xc;
    }
    else {
      iVar1 = puVar2[1] + 1;
      puVar2[1] = iVar1;
      dma_fence_init(iVar3,DAT_00018f58,puVar2 + 2,iVar1,*puVar2,0,iVar1,0);
    }
  }
  return iVar3;
}



/* ===== rga_dma_fence_get_fd @ 00018f5c size=56 ===== */

int rga_dma_fence_get_fd(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = get_unused_fd_flags(0x80000);
    if (-1 < iVar1) {
      puVar2 = (undefined4 *)sync_file_create(param_1);
      if (puVar2 == (undefined4 *)0x0) {
        put_unused_fd(iVar1);
        iVar1 = -0xc;
      }
      else {
        fd_install(iVar1,*puVar2);
      }
    }
  }
  return iVar1;
}



/* ===== rga_get_dma_fence_from_fd @ 00018f94 size=20 ===== */

int rga_get_dma_fence_from_fd(void)

{
  int iVar1;
  
  iVar1 = sync_file_get_fence();
  if (iVar1 == 0) {
    printk(DAT_00018fa8);
  }
  return iVar1;
}



/* ===== rga_dma_fence_wait @ 00018fac size=70 ===== */

uint rga_dma_fence_wait(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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



/* ===== rga_dma_fence_add_callback @ 00018ff2 size=90 ===== */

int rga_dma_fence_add_callback
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_0001904c + 0x10),0xcc0,param_3,DAT_0001904c,param_4);
  if (iVar1 == 0) {
    iVar2 = -0xc;
    printk(DAT_00019054,DAT_00019050);
  }
  else {
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    iVar2 = dma_fence_add_callback(param_1,iVar1,param_2);
    if (iVar2 == -2) {
      printk(DAT_00019058);
    }
    else {
      if (iVar2 != -0x16) {
        return iVar2;
      }
      printk(DAT_0001905c,DAT_00019050,0xffffffea);
    }
    kfree(iVar1);
  }
  return iVar2;
}



/* ===== rga_debugger_write @ 00019060 size=26 ===== */

undefined4 rga_debugger_write(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x80) + 0x40) + 4) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00019072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return param_3;
}



/* ===== rga_procfs_remove_files @ 0001907a size=94 ===== */

undefined4 rga_procfs_remove_files(undefined4 *param_1)

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



/* ===== rga_dump_image_show @ 000190d8 size=16 ===== */

undefined4
rga_dump_image_show(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  seq_printf(param_1,DAT_000190ec,*DAT_000190e8,DAT_000190e8,param_4);
  return 0;
}



/* ===== rga_dump_path_show @ 000190f0 size=14 ===== */

undefined4
rga_dump_path_show(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  seq_printf(param_1,DAT_00019104,DAT_00019100,param_4,param_4);
  return 0;
}



/* ===== rga_scheduler_show @ 00019108 size=104 ===== */

undefined4 rga_scheduler_show(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar4 = DAT_00019184;
  uVar3 = DAT_00019180;
  uVar2 = DAT_00019178;
  piVar1 = DAT_00019170;
  seq_printf(param_1,DAT_00019174,*(undefined4 *)(*DAT_00019170 + 0x18));
  seq_printf(param_1,DAT_0001917c);
  iVar6 = 0;
  while( true ) {
    if (*(int *)(*piVar1 + 0x18) <= iVar6) break;
    puVar7 = *(undefined4 **)(*piVar1 + iVar6 * 4 + 0xc);
    uVar5 = dev_driver_string(*puVar7);
    seq_printf(param_1,uVar2,iVar6,uVar5);
    seq_printf(param_1,uVar3);
    seq_printf(param_1,uVar4,puVar7[0xf]);
    iVar6 = iVar6 + 1;
  }
  return 0;
}



/* ===== rga_version_show @ 00019188 size=16 ===== */

undefined4
rga_version_show(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  seq_printf(param_1,DAT_000191a0,DAT_00019198,DAT_0001919c,param_4);
  return 0;
}



/* ===== rga_debug_show @ 000191a4 size=176 ===== */

undefined4 rga_debug_show(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = DAT_0001925c;
  if (*(int *)(DAT_00019254 + 0x10) == 0) {
    uVar7 = DAT_00019258;
  }
  uVar5 = DAT_0001925c;
  if (*(int *)(DAT_00019254 + 0xc) == 0) {
    uVar5 = DAT_00019258;
  }
  uVar2 = DAT_0001925c;
  if (*(int *)(DAT_00019254 + 0x14) == 0) {
    uVar2 = DAT_00019258;
  }
  uVar6 = DAT_0001925c;
  if (*(int *)(DAT_00019254 + 0x18) == 0) {
    uVar6 = DAT_00019258;
  }
  uVar4 = DAT_0001925c;
  if (*(int *)(DAT_00019254 + 0x1c) == 0) {
    uVar4 = DAT_00019258;
  }
  uVar3 = DAT_0001925c;
  if (*(int *)(DAT_00019254 + 8) == 0) {
    uVar3 = DAT_00019258;
  }
  uVar1 = DAT_0001925c;
  if (*(int *)(DAT_00019254 + 4) == 0) {
    uVar1 = DAT_00019258;
  }
  seq_printf(param_1,DAT_00019260,uVar1,uVar3,uVar5,uVar7,uVar2,uVar6,uVar4);
  seq_puts(param_1,DAT_00019264);
  seq_puts(param_1,DAT_00019268);
  seq_puts(param_1,DAT_0001926c);
  seq_puts(param_1,DAT_00019270);
  seq_puts(param_1,DAT_00019274);
  seq_puts(param_1,DAT_00019278);
  seq_puts(param_1,DAT_0001927c);
  seq_puts(param_1,DAT_00019280);
  return 0;
}



/* ===== rga_hardware_show @ 00019284 size=210 ===== */

undefined4
rga_hardware_show(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = 0;
  seq_puts(param_1,DAT_00019358,param_3,param_4,param_1,param_2,param_3);
  uVar3 = DAT_00019384;
  uVar2 = DAT_00019380;
  piVar1 = DAT_0001935c;
  while( true ) {
    if (*(int *)(*piVar1 + 0x18) <= iVar6) break;
    iVar5 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    puVar7 = *(undefined4 **)(*piVar1 + iVar5 + 0xc);
    iVar5 = puVar7[0x16];
    uVar4 = dev_driver_string(*puVar7);
    seq_printf(param_1,uVar2,uVar4,puVar7[0x20],puVar7 + 0x1c);
    seq_printf(param_1,uVar3,*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14),
               *(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c));
    seq_printf(param_1,DAT_00019360,*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x24),
               *(undefined4 *)(iVar5 + 0x28),*(undefined4 *)(iVar5 + 0x2c));
    seq_printf(param_1,DAT_00019364,1 << (*(uint *)(iVar5 + 0x34) & 0xff),
               1 << (*(uint *)(iVar5 + 0x30) & 0xff));
    seq_printf(param_1,DAT_00019368,*(undefined4 *)(iVar5 + 0x38));
    seq_printf(param_1,DAT_0001936c,*(undefined4 *)(iVar5 + 0x3c));
    seq_printf(param_1,DAT_00019370,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc));
    seq_printf(param_1,DAT_00019374,*(undefined4 *)(iVar5 + 4));
    uVar4 = rga_get_mmu_type_str(*(undefined4 *)(iVar5 + 0x48));
    seq_printf(param_1,DAT_00019378,uVar4);
    seq_puts(param_1,DAT_0001937c);
  }
  return 0;
}



/* ===== _copy_from_user @ 00019388 size=58 ===== */

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



/* ===== rga_dump_image_write @ 000193c2 size=116 ===== */

void rga_dump_image_write(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_28;
  undefined1 auStack_23 [15];
  int local_14;
  
  piVar1 = DAT_00019438;
  local_14 = *DAT_00019438;
  local_28 = 0;
  if (param_3 < 0xe) {
    iVar3 = _copy_from_user(auStack_23 + 1);
    if (iVar3 == 0) {
      auStack_23[param_3] = 0;
      iVar3 = kstrtoint(auStack_23 + 1,10,&local_28);
      uVar2 = DAT_00019448;
      if (iVar3 == 0) {
        if (0 < local_28) {
          *DAT_00019444 = local_28;
          printk(uVar2);
          goto LAB_00019426;
        }
        printk(DAT_00019440);
        goto LAB_00019414;
      }
      printk(DAT_0001943c,auStack_23 + 1);
    }
    param_3 = 0xfffffff2;
  }
  else {
LAB_00019414:
    param_3 = 0xffffffea;
  }
LAB_00019426:
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}



/* ===== rga_dump_path_write @ 0001944c size=82 ===== */

void rga_dump_path_write(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_79 [101];
  int local_14;
  
  piVar1 = DAT_000194a0;
  local_14 = *DAT_000194a0;
  if (param_3 < 100) {
    iVar2 = _copy_from_user(auStack_79 + 1);
    if (iVar2 == 0) {
      auStack_79[param_3] = 0;
      snprintf(DAT_000194a8,100,DAT_000194a4,auStack_79 + 1);
      printk(DAT_000194ac,DAT_000194a8);
    }
    else {
      param_3 = 0xfffffff2;
    }
  }
  else {
    param_3 = 0xffffffea;
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}



/* ===== rga_load_show @ 000194b0 size=200 ===== */

undefined4 rga_load_show(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_2c [2];
  
  uVar3 = DAT_0001958c;
  uVar2 = DAT_00019588;
  piVar1 = DAT_00019578;
  iVar7 = 0;
  local_2c[0] = 0;
  iVar8 = *(int *)(*DAT_00019578 + 0x58);
  seq_printf(param_1,DAT_0001957c,*(undefined4 *)(*DAT_00019578 + 0x18));
  seq_printf(param_1,DAT_00019580);
  uVar4 = DAT_00019590;
  while( true ) {
    uVar5 = DAT_00019594;
    if (*(int *)(*piVar1 + 0x18) <= iVar7) break;
    puVar9 = *(undefined4 **)(*piVar1 + iVar7 * 4 + 0xc);
    uVar5 = dev_driver_string(*puVar9);
    seq_printf(param_1,uVar2,iVar7,uVar5);
    disableIRQinterrupts();
    iVar7 = iVar7 + 1;
    uVar6 = (uint)((ulonglong)(uint)(puVar9[0x22] * 100) * (ulonglong)uVar3 >> 0x32);
    if (99 < uVar6) {
      uVar6 = 100;
    }
    seq_printf(param_1,uVar4,uVar6);
    seq_printf(param_1,DAT_00019584);
  }
  mutex_lock(iVar8);
  local_2c[0] = 0;
  while (iVar7 = idr_get_next(iVar8 + 0xc,local_2c), iVar7 != 0) {
    seq_printf(param_1,uVar5,local_2c[0],*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
    local_2c[0] = local_2c[0] + 1;
  }
  mutex_unlock(iVar8);
  return 0;
}



/* ===== rga_debug_write @ 00019598 size=386 ===== */

void rga_debug_write(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char acStack_23 [15];
  int local_14;
  
  piVar1 = DAT_0001971c;
  local_14 = *DAT_0001971c;
  if (param_3 < 0xe) {
    iVar3 = _copy_from_user(acStack_23 + 1);
    if (iVar3 == 0) {
      acStack_23[param_3] = '\0';
      iVar3 = strcmp(acStack_23 + 1,DAT_00019720);
      uVar4 = DAT_0001972c;
      if (iVar3 == 0) {
        if (*(int *)(DAT_00019724 + 4) == 0) {
          *(undefined4 *)(DAT_00019724 + 4) = 1;
        }
        else {
          *(undefined4 *)(DAT_00019724 + 4) = 0;
          uVar4 = DAT_00019728;
        }
      }
      else {
        iVar3 = strncmp(acStack_23 + 1,DAT_00019730,3);
        uVar4 = DAT_00019738;
        if (iVar3 == 0) {
          if (*(int *)(DAT_00019724 + 8) == 0) {
            *(undefined4 *)(DAT_00019724 + 8) = 1;
          }
          else {
            *(undefined4 *)(DAT_00019724 + 8) = 0;
            uVar4 = DAT_00019734;
          }
        }
        else {
          iVar3 = strncmp(acStack_23 + 1,DAT_0001973c,4);
          uVar4 = DAT_00019744;
          if (iVar3 == 0) {
            if (*(int *)(DAT_00019724 + 0xc) == 0) {
              *(undefined4 *)(DAT_00019724 + 0xc) = 1;
            }
            else {
              *(undefined4 *)(DAT_00019724 + 0xc) = 0;
              uVar4 = DAT_00019740;
            }
          }
          else {
            iVar3 = strncmp(acStack_23 + 1,DAT_00019748,3);
            uVar4 = DAT_00019750;
            if (iVar3 == 0) {
              if (*(int *)(DAT_00019724 + 0x10) == 0) {
                *(undefined4 *)(DAT_00019724 + 0x10) = 1;
              }
              else {
                *(undefined4 *)(DAT_00019724 + 0x10) = 0;
                uVar4 = DAT_0001974c;
              }
            }
            else {
              iVar3 = strncmp(acStack_23 + 1,DAT_00019754,2);
              uVar4 = DAT_0001975c;
              if (iVar3 == 0) {
                if (*(int *)(DAT_00019724 + 0x14) == 0) {
                  *(undefined4 *)(DAT_00019724 + 0x14) = 1;
                }
                else {
                  *(undefined4 *)(DAT_00019724 + 0x14) = 0;
                  uVar4 = DAT_00019758;
                }
              }
              else {
                iVar3 = strncmp(acStack_23 + 1,DAT_00019760,5);
                uVar4 = DAT_00019768;
                if (iVar3 == 0) {
                  if (*(int *)(DAT_00019724 + 0x18) == 0) {
                    *(undefined4 *)(DAT_00019724 + 0x18) = 1;
                  }
                  else {
                    *(undefined4 *)(DAT_00019724 + 0x18) = 0;
                    uVar4 = DAT_00019764;
                  }
                }
                else {
                  iVar3 = strncmp(acStack_23 + 1,DAT_0001976c,4);
                  uVar4 = DAT_00019774;
                  uVar2 = DAT_00019770;
                  if (iVar3 == 0) {
                    if (*(int *)(DAT_00019724 + 0x1c) == 0) {
                      *(undefined4 *)(DAT_00019724 + 0x1c) = 1;
                    }
                    else {
                      *(undefined4 *)(DAT_00019724 + 0x1c) = 0;
                      uVar4 = uVar2;
                    }
                  }
                  else {
                    iVar5 = strncmp(acStack_23 + 1,DAT_00019778,3);
                    uVar4 = DAT_00019780;
                    uVar2 = DAT_0001977c;
                    iVar3 = DAT_00019724;
                    if (iVar5 == 0) {
                      if (*(int *)(DAT_00019724 + 0x20) == 0) {
                        *(undefined4 *)(DAT_00019724 + 4) = 1;
                        *(undefined4 *)(iVar3 + 8) = 1;
                        *(undefined4 *)(iVar3 + 0xc) = 1;
                        *(undefined4 *)(iVar3 + 0x10) = 1;
                        *(undefined4 *)(iVar3 + 0x20) = 1;
                      }
                      else {
                        *(undefined4 *)(DAT_00019724 + 4) = 0;
                        *(undefined4 *)(iVar3 + 8) = 0;
                        *(undefined4 *)(iVar3 + 0xc) = 0;
                        *(undefined4 *)(iVar3 + 0x10) = 0;
                        *(undefined4 *)(iVar3 + 0x20) = 0;
                        uVar4 = uVar2;
                      }
                    }
                    else {
                      iVar3 = strncmp(acStack_23 + 1,DAT_00019784,3);
                      uVar4 = DAT_00019788;
                      if (iVar3 != 0) goto LAB_000195dc;
                    }
                  }
                }
              }
            }
          }
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
LAB_000195dc:
  if (local_14 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_3);
}



/* ===== rga_procfs_open @ 0001978c size=24 ===== */

void rga_procfs_open(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = PDE_DATA();
  single_open(param_2,*(undefined4 *)(*(int *)(iVar1 + 4) + 4),iVar1);
  return;
}



/* ===== rga_dump_image_to_file @ 000197a4 size=402 ===== */

void rga_dump_image_to_file(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_98;
  undefined4 uStack_94;
  char acStack_90 [100];
  int local_2c;
  
  piVar1 = DAT_0001993c;
  local_2c = *DAT_0001993c;
  local_98 = 0;
  uStack_94 = 0;
  uVar3 = DAT_00019954;
  switch(param_1[10]) {
  case 0:
  case 3:
    uVar6 = *(uint *)*param_1;
    uVar3 = DAT_00019940;
    if ((uVar6 == 0) || (0xfffff000 < uVar6)) goto LAB_000197de;
    iVar2 = dma_buf_vmap(uVar6);
    if (iVar2 != 0) {
      iVar9 = *(int *)(*param_1 + 0x20);
      goto LAB_0001980c;
    }
    printk(DAT_00019944);
    break;
  case 1:
    iVar2 = vmap(*(undefined4 *)(param_1[1] + 8),*(undefined4 *)(param_1[1] + 0x10),4,
                 *DAT_0001994c & 0xfffffdc3 | 0x204);
    if (iVar2 != 0) {
      iVar9 = ((undefined4 *)param_1[1])[6];
LAB_0001980c:
      iVar9 = iVar9 + iVar2;
      goto LAB_0001980e;
    }
    uVar3 = *(undefined4 *)param_1[1];
    uVar4 = DAT_00019950;
LAB_00019840:
    printk(uVar4,uVar3);
    goto LAB_00019818;
  case 2:
    iVar2 = 0;
    iVar9 = param_1[2] + 0x7f000000;
LAB_0001980e:
    iVar10 = param_1[4];
    if (iVar9 != 0) {
      if (iVar10 != 0) {
        uVar3 = *DAT_0001995c;
        if ((param_1[5] == 0) && (param_1[6] == 0)) {
          uVar4 = rga_get_memory_type_str((char)param_1[10]);
          uVar5 = rga_get_format_name(param_1[7]);
          snprintf(acStack_90,100,DAT_00019960,DAT_00019964,uVar3,param_4,param_2,param_3,uVar4,
                   iVar10,uVar5);
        }
        else {
          uVar4 = rga_get_memory_type_str((char)param_1[10]);
          iVar8 = param_1[5];
          iVar7 = param_1[6];
          uVar5 = rga_get_format_name(param_1[7]);
          snprintf(acStack_90,100,DAT_0001996c,DAT_00019964,uVar3,param_4,param_2,param_3,uVar4,
                   iVar8,iVar7,uVar5);
        }
        uVar6 = filp_open(acStack_90,0x242,0x180);
        if (uVar6 < 0xfffff001) {
          kernel_write(uVar6,iVar9,iVar10,&local_98);
          printk(DAT_00019968,acStack_90);
          fput(uVar6);
        }
        else {
          printk(DAT_00019970,acStack_90);
        }
        iVar9 = param_1[10];
        if (iVar9 == 1) {
          vunmap(iVar2);
        }
        else if ((iVar9 == 0) || (iVar9 == 3)) {
          dma_buf_vunmap(*(undefined4 *)*param_1,iVar2);
        }
        uVar3 = 0;
        goto LAB_000197f8;
      }
      uVar3 = 0;
      uVar4 = DAT_00019958;
      goto LAB_00019840;
    }
    printk(DAT_00019948);
LAB_00019818:
    uVar3 = 0xfffffff2;
    goto LAB_000197f8;
  default:
LAB_000197de:
    printk(uVar3);
  }
  uVar3 = 0xffffffea;
LAB_000197f8:
  if (local_2c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== rga_dump_channel_image @ 00019974 size=52 ===== */

void rga_dump_channel_image(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    rga_dump_image_to_file(*(int *)(param_1 + 0xc),param_2,0,param_3);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    rga_dump_image_to_file(*(int *)(param_1 + 0x10),param_2,1,param_3);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    rga_dump_image_to_file(*(int *)(param_1 + 0x14),param_2,2,param_3);
    return;
  }
  return;
}



/* ===== rga_mm_session_show @ 000199a8 size=288 ===== */

undefined4 rga_mm_session_show(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int extraout_r3;
  int iVar14;
  int local_24 [2];
  
  uVar3 = DAT_00019b04;
  uVar2 = DAT_00019b00;
  uVar1 = DAT_00019ad0;
  iVar14 = *(int *)(*DAT_00019acc + 0x50);
  mutex_lock(iVar14);
  seq_puts(param_1,DAT_00019ad4);
  seq_printf(param_1,DAT_00019ad8,*(undefined4 *)(iVar14 + 0x1c));
  seq_puts(param_1,DAT_00019adc);
  local_24[0] = 0;
  do {
    piVar4 = (int *)idr_get_next(iVar14 + 0xc,local_24);
    if (piVar4 == (int *)0x0) {
      mutex_unlock(iVar14);
      return 0;
    }
    uVar6 = *(undefined4 *)(piVar4[0xe] + 4);
    iVar7 = piVar4[0xc];
    seq_printf(param_1,uVar1,piVar4[0xb],piVar4[0xd],iVar7,uVar6);
    switch(piVar4[10]) {
    case 0:
    case 3:
      if ((*piVar4 != 0) && (*(int *)(*piVar4 + 0x24) != 0)) {
        seq_puts(param_1,DAT_00019ae0);
        puVar8 = (undefined4 *)*piVar4;
        uVar11 = *(undefined4 *)(puVar8[9] + 0x80);
        uVar6 = puVar8[7];
        iVar7 = puVar8[2];
        uVar12 = puVar8[6];
        uVar9 = *puVar8;
        uVar5 = DAT_00019ae4;
LAB_00019a4c:
        seq_printf(param_1,uVar5,uVar9,uVar12,iVar7,uVar6,uVar11);
        iVar13 = piVar4[0xc] << 0x1d;
        if (iVar13 < 0) {
          iVar10 = piVar4[2];
          uVar5 = DAT_00019ae8;
          goto LAB_00019a5c;
        }
      }
      break;
    case 1:
      if (piVar4[1] != 0) {
        seq_puts(param_1,DAT_00019af0);
        puVar8 = (undefined4 *)piVar4[1];
        seq_printf(param_1,DAT_00019af4,*puVar8,puVar8[2],puVar8[5],uVar6);
        iVar13 = *piVar4;
        if ((iVar13 != 0) && (*(int *)(iVar13 + 0x24) != 0)) {
          uVar11 = *(undefined4 *)(*(int *)(iVar13 + 0x24) + 0x80);
          uVar6 = *(undefined4 *)(iVar13 + 0x1c);
          iVar7 = *(int *)(iVar13 + 8);
          uVar12 = *(undefined4 *)(iVar13 + 0x20);
          uVar9 = *(undefined4 *)(iVar13 + 0x18);
          uVar5 = DAT_00019af8;
          goto LAB_00019a4c;
        }
      }
      break;
    case 2:
      seq_puts(param_1,uVar3);
      iVar10 = piVar4[2];
      uVar5 = DAT_00019afc;
      iVar13 = extraout_r3;
LAB_00019a5c:
      seq_printf(param_1,uVar5,iVar10,iVar13,iVar7,uVar6);
      break;
    default:
      seq_puts(param_1,uVar2);
    }
    seq_puts(param_1,DAT_00019aec);
    local_24[0] = local_24[0] + 1;
  } while( true );
}



/* ===== rga_procfs_remove @ 00019b08 size=16 ===== */

undefined4 rga_procfs_remove(void)

{
  rga_procfs_remove_files(*(undefined4 *)(*DAT_00019b18 + 0x60));
  return 0;
}



/* ===== rga_procfs_init @ 00019b1c size=204 ===== */

undefined4 rga_procfs_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  
  puVar7 = *(uint **)(*DAT_00019be8 + 0x60);
  uVar2 = proc_mkdir(DAT_00019bec,0,param_3,*DAT_00019be8,param_1,param_2,param_3);
  *puVar7 = uVar2;
  uVar3 = DAT_00019c08;
  iVar1 = DAT_00019c04;
  if ((uVar2 == 0) || (0xfffff000 < uVar2)) {
    printk(DAT_00019bf0,DAT_00019bec);
    uVar3 = 0xfffffffb;
    *puVar7 = 0;
  }
  else {
    iVar9 = 0;
    puVar8 = DAT_00019bf4;
    do {
      puVar4 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xcc0);
      if (puVar4 == (undefined4 *)0x0) {
        printk(DAT_00019bf8,DAT_00019bec,*puVar8);
LAB_00019b78:
        rga_procfs_remove_files(puVar7);
        printk(DAT_00019bfc);
        rga_procfs_remove();
        return 0xffffffff;
      }
      *puVar4 = puVar7;
      puVar4[1] = puVar8;
      iVar5 = proc_create_data(*puVar8,0x8124,uVar2,uVar3,puVar4);
      if (iVar5 == 0) {
        printk(DAT_00019c00,DAT_00019bec,*puVar8);
        kfree(puVar4);
        goto LAB_00019b78;
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
    } while (iVar9 != 9);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== rga_request_task_debug_info @ 00019c0c size=308 ===== */

void rga_request_task_debug_info(undefined4 param_1,int param_2)

{
  seq_printf(param_1,DAT_00019d40,*(undefined1 *)(param_2 + 0x114));
  seq_printf(param_1,DAT_00019d44,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
             *(undefined4 *)(param_2 + 0x18),*(undefined2 *)(param_2 + 0x24),
             *(undefined2 *)(param_2 + 0x26),*(undefined2 *)(param_2 + 0x2c),
             *(undefined2 *)(param_2 + 0x2e));
  seq_printf(param_1,DAT_00019d48,*(undefined2 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2a),
             *(undefined4 *)(param_2 + 0x20),*(undefined2 *)(param_2 + 0x36));
  if (((*(int *)(param_2 + 0x78) != 0 || *(int *)(param_2 + 0x7c) != 0) ||
      (*(int *)(param_2 + 0x80) != 0 || *(int *)(param_2 + 0x84) != 0)) ||
     (*(int *)(param_2 + 0x88) != 0 || *(int *)(param_2 + 0x8c) != 0)) {
    seq_printf(param_1,DAT_00019d4c,*(int *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80),
               *(undefined4 *)(param_2 + 0x88),*(undefined2 *)(param_2 + 0x94),
               *(undefined2 *)(param_2 + 0x96),*(undefined2 *)(param_2 + 0x9c),
               *(undefined2 *)(param_2 + 0x9e));
    seq_printf(param_1,DAT_00019d50,*(undefined2 *)(param_2 + 0x98),*(undefined2 *)(param_2 + 0x9a),
               *(undefined4 *)(param_2 + 0x90),*(undefined2 *)(param_2 + 0xa6));
  }
  seq_printf(param_1,DAT_00019d54,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x48),
             *(undefined4 *)(param_2 + 0x50),*(undefined2 *)(param_2 + 0x5c),
             *(undefined2 *)(param_2 + 0x5e),*(undefined2 *)(param_2 + 100),
             *(undefined2 *)(param_2 + 0x66));
  seq_printf(param_1,DAT_00019d58,*(undefined2 *)(param_2 + 0x60),*(undefined2 *)(param_2 + 0x62),
             *(undefined4 *)(param_2 + 0x58),*(undefined2 *)(param_2 + 0x6e));
  seq_printf(param_1,DAT_00019d5c,*(undefined4 *)(param_2 + 0x128),*(undefined1 *)(param_2 + 0x118))
  ;
  seq_printf(param_1,DAT_00019d60,*(undefined1 *)(param_2 + 0x130));
  seq_printf(param_1,DAT_00019d64,*(undefined1 *)(param_2 + 0x112));
  seq_printf(param_1,DAT_00019d68,*(undefined1 *)(param_2 + 0x160),*(undefined1 *)(param_2 + 0x161),
             *(undefined4 *)(param_2 + 0x15c));
  return;
}



/* ===== rga_request_manager_show @ 00019d6c size=188 ===== */

undefined4 rga_request_manager_show(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c [2];
  
  uVar1 = DAT_00019e40;
  iVar4 = *(int *)(*DAT_00019e28 + 0x54);
  seq_puts(param_1,DAT_00019e2c);
  uVar2 = DAT_00019e44;
  seq_printf(param_1,DAT_00019e30,*(undefined4 *)(iVar4 + 0x1c));
  seq_puts(param_1,DAT_00019e34);
  mutex_lock(iVar4);
  local_2c[0] = 0;
  while (piVar3 = (int *)idr_get_next(iVar4 + 0xc,local_2c), piVar3 != (int *)0x0) {
    seq_printf(param_1,DAT_00019e38,piVar3[0xe]);
    disableIRQinterrupts();
    iVar6 = *piVar3;
    if (iVar6 == 0) {
      seq_puts(param_1,DAT_00019e3c);
    }
    else {
      seq_printf(param_1,uVar1,piVar3[1],piVar3[2],piVar3[3],piVar3[0xc],piVar3[0x10]);
      seq_puts(param_1,uVar2);
      for (iVar5 = 0; iVar5 < piVar3[1]; iVar5 = iVar5 + 1) {
        rga_request_task_debug_info(param_1,iVar5 * 0x1f8 + iVar6);
      }
    }
    local_2c[0] = local_2c[0] + 1;
  }
  mutex_unlock(iVar4);
  return 0;
}



/* ===== rga_dump_job_image @ 00019e48 size=76 ===== */

void rga_dump_job_image(int param_1)

{
  rga_dump_channel_image(param_1 + 0x640,DAT_00019e94,*(undefined4 *)(param_1 + 0x6fc));
  rga_dump_channel_image(param_1 + 0x664,DAT_00019e98,*(undefined4 *)(param_1 + 0x6fc));
  rga_dump_channel_image(param_1 + 0x688,DAT_00019e9c,*(undefined4 *)(param_1 + 0x6fc));
  rga_dump_channel_image(param_1 + 0x6ac,DAT_00019ea0,*(undefined4 *)(param_1 + 0x6fc));
  if (0 < *DAT_00019ea4) {
    *DAT_00019ea4 = *DAT_00019ea4 + -1;
  }
  return;
}



/* ===== init_module @ 00019ea8 size=368 ===== */

int init_module(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  int iVar5;
  
  piVar1 = DAT_0001a024;
  iVar4 = DAT_0001a020;
  iVar3 = kmem_cache_alloc(*(undefined4 *)(DAT_0001a020 + 0x1c),0xdc0);
  *piVar1 = iVar3;
  if (iVar3 == 0) {
    iVar3 = -0xc;
    printk(DAT_0001a028);
  }
  else {
    __mutex_init(iVar3,DAT_0001a02c,piVar1 + 4);
    iVar3 = __platform_driver_register(DAT_0001a034,DAT_0001a030);
    if (iVar3 == 0) {
      iVar3 = __platform_driver_register(DAT_0001a03c,DAT_0001a030);
      if (iVar3 == 0) {
        iVar3 = __platform_driver_register(DAT_0001a044,DAT_0001a030);
        if (iVar3 == 0) {
          iVar3 = rga_iommu_bind();
          if (iVar3 < 0) {
            printk(DAT_0001a04c);
          }
          else {
            iVar3 = misc_register(DAT_0001a050);
            iVar5 = DAT_0001a01c;
            if (iVar3 == 0) {
              piVar1[2] = DAT_0001a018;
              piVar1[3] = iVar5;
              hrtimer_init(piVar1 + 4,1);
              piVar1[0xc] = DAT_0001a058;
              hrtimer_start_range_ns(piVar1 + 4,extraout_r1,piVar1[2],piVar1[3],0,0,1);
              rga_mm_init(*piVar1 + 0x50);
              rga_request_manager_init(*piVar1 + 0x54);
              iVar5 = *piVar1;
              iVar3 = kmem_cache_alloc(*(undefined4 *)(iVar4 + 0x14),0xdc0);
              *(int *)(iVar5 + 0x58) = iVar3;
              if (iVar3 == 0) {
                printk(DAT_0001a05c);
              }
              else {
                __mutex_init(iVar3,DAT_0001a06c,piVar1 + 0x10);
                uVar2 = DAT_0001a070;
                *(undefined4 *)(iVar3 + 0x14) = 1;
                *(undefined4 *)(iVar3 + 0x18) = 0;
                *(undefined4 *)(iVar3 + 0xc) = uVar2;
                *(undefined4 *)(iVar3 + 0x10) = 0;
              }
              rga_fence_context_init(*piVar1 + 0x5c);
              iVar3 = *piVar1;
              iVar4 = kmem_cache_alloc(*(undefined4 *)(iVar4 + 0x14),0xdc0);
              *(int *)(iVar3 + 0x60) = iVar4;
              if (iVar4 == 0) {
                printk(DAT_0001a060);
              }
              else {
                __mutex_init(iVar4 + 0xc,DAT_0001a078,DAT_0001a074);
                *(int *)(iVar4 + 4) = iVar4 + 4;
                *(int *)(iVar4 + 8) = iVar4 + 4;
                rga_procfs_init();
              }
              printk(DAT_0001a068,DAT_0001a064);
              return 0;
            }
            printk(DAT_0001a054,iVar3);
            rga_iommu_unbind();
          }
          platform_driver_unregister(DAT_0001a044);
        }
        else {
          printk(DAT_0001a048,iVar3);
        }
        platform_driver_unregister(DAT_0001a03c);
      }
      else {
        printk(DAT_0001a040,iVar3);
      }
      platform_driver_unregister(DAT_0001a034);
    }
    else {
      printk(DAT_0001a038,iVar3);
    }
    kfree(*piVar1);
  }
  return iVar3;
}



/* ===== cleanup_module @ 0001a07c size=160 ===== */

void cleanup_module(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_0001a11c;
  iVar3 = *DAT_0001a11c;
  rga_procfs_remove();
  kfree(*(undefined4 *)(iVar3 + 0x60));
  iVar2 = *piVar1;
  *(undefined4 *)(iVar3 + 0x60) = 0;
  rga_fence_context_remove(iVar2 + 0x5c);
  rga_mm_remove(*piVar1 + 0x50);
  rga_request_manager_remove(*piVar1 + 0x54);
  iVar3 = *piVar1;
  iVar2 = *(int *)(iVar3 + 0x58);
  mutex_lock(iVar2);
  idr_for_each(iVar2 + 0xc,DAT_0001a120,iVar2);
  idr_destroy(iVar2 + 0xc);
  mutex_unlock(iVar2);
  iVar2 = DAT_0001a124;
  kfree(*(undefined4 *)(iVar3 + 0x58));
  *(undefined4 *)(iVar3 + 0x58) = 0;
  hrtimer_cancel(piVar1 + 4);
  rga_iommu_unbind();
  platform_driver_unregister(iVar2);
  platform_driver_unregister(iVar2 + 0x68);
  platform_driver_unregister(iVar2 + 0xd0);
  misc_deregister(iVar2 + 0x138);
  kfree(*piVar1);
  printk(DAT_0001a12c,DAT_0001a128);
  return;
}



/* ===== rga_dump_memory_parm @ 0001a130 size=40 ===== */

void rga_dump_memory_parm(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[2];
  uVar2 = DAT_0001a15c;
  if (uVar1 < 0x31) {
    uVar2 = *(undefined4 *)(DAT_0001a158 + uVar1 * 4);
  }
  printk(DAT_0001a160,*param_1,param_1[1],uVar2,uVar1,param_1[3],param_3);
  return;
}



/* ===== rga_dump_external_buffer @ 0001a164 size=42 ===== */

void rga_dump_external_buffer(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001a198;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = *(undefined4 *)(DAT_0001a194 + (uint)*(byte *)(param_1 + 2) * 4 + 0x19c);
  }
  printk(DAT_0001a190,*param_1,uVar1);
  rga_dump_memory_parm(param_1 + 4);
  return;
}



/* ===== rga3_init_reg.part.1 @ 0001a19c size=20 ===== */

undefined4 rga3_init_reg_part_1(void)

{
  undefined4 in_r3;
  
  printk(DAT_0001a1b4,DAT_0001a1b0,0x749,in_r3,in_r3);
  return 0xffffffea;
}



/* ===== rga_iommu_map_sgt @ 0001a1b8 size=54 ===== */

undefined4 rga_iommu_map_sgt(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    printk(DAT_0001a1f0);
    uVar2 = 0xffffffea;
  }
  else {
    if (*DAT_0001a1f4 != 0) {
      iVar3 = *(int *)(iRam00000020 + 0x14) + -1;
      uVar1 = -*(int *)(iRam00000020 + 0x14);
      printk(DAT_0001a1f8,param_2 + iVar3 & uVar1,iVar3,uVar1,param_4);
    }
    printk(DAT_0001a1fc);
    uVar2 = 0xfffffff4;
  }
  return uVar2;
}



/* ===== rga_iommu_map @ 0001a200 size=54 ===== */

undefined4 rga_iommu_map(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    printk(DAT_0001a238);
    uVar2 = 0xffffffea;
  }
  else {
    if (*DAT_0001a23c != 0) {
      iVar3 = *(int *)(iRam00000020 + 0x14) + -1;
      uVar1 = -*(int *)(iRam00000020 + 0x14);
      printk(DAT_0001a240,param_2 + iVar3 & uVar1,iVar3,uVar1,param_4);
    }
    printk(DAT_0001a244);
    uVar2 = 0xfffffff4;
  }
  return uVar2;
}



/* ===== rga_job_dump_info @ 0001a248 size=18 ===== */

void rga_job_dump_info(int param_1)

{
  printk(DAT_0001a25c,*(undefined4 *)(param_1 + 0x6f4),*(undefined4 *)(param_1 + 0x6f8),
         *(undefined4 *)(param_1 + 0x6fc));
  return;
}



/* ===== rga_job_scheduler_dump_info @ 0001a260 size=72 ===== */

void rga_job_scheduler_dump_info(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  printk(DAT_0001a2a8);
  uVar1 = dev_driver_string(*param_1);
  printk(DAT_0001a2ac,uVar1,param_1[0x20],param_1[0x17],param_1[0xe],param_2,param_3);
  if (param_1[0x10] != 0) {
    rga_job_dump_info();
  }
  for (puVar2 = (undefined4 *)param_1[0x11]; puVar2 != param_1 + 0x11;
      puVar2 = (undefined4 *)*puVar2) {
    rga_job_dump_info(puVar2);
  }
  printk(DAT_0001a2a8);
  return;
}



/* ===== rga_mm_dump_buffer @ 0001a2b0 size=164 ===== */

void rga_mm_dump_buffer(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  
  piVar9 = param_1;
  printk(DAT_0001a358,param_1[0xb],param_1[0xd],param_1[0xc],param_1,param_2);
  switch(param_1[10]) {
  case 0:
  case 3:
    if (*param_1 == 0) {
      return;
    }
    if (*(int *)(*param_1 + 0x24) == 0) {
      return;
    }
    printk(DAT_0001a35c);
    puVar2 = (undefined4 *)*param_1;
    uVar6 = *(undefined4 *)(puVar2[9] + 0x80);
    uVar7 = puVar2[7];
    uVar8 = puVar2[2];
    uVar5 = puVar2[6];
    uVar3 = *puVar2;
    uVar1 = DAT_0001a360;
    break;
  case 1:
    if (param_1[1] == 0) {
      return;
    }
    printk(DAT_0001a368);
    puVar2 = (undefined4 *)param_1[1];
    printk(DAT_0001a36c,*puVar2,puVar2[2],puVar2[5],piVar9,param_2);
    iVar4 = *param_1;
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(iVar4 + 0x24) == 0) {
      return;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x80);
    uVar7 = *(undefined4 *)(iVar4 + 0x1c);
    uVar8 = *(undefined4 *)(iVar4 + 8);
    uVar5 = *(undefined4 *)(iVar4 + 0x20);
    uVar3 = *(undefined4 *)(iVar4 + 0x18);
    uVar1 = DAT_0001a370;
    break;
  case 2:
    iVar4 = param_1[2];
    uVar1 = DAT_0001a374;
    goto LAB_0001a304;
  default:
    printk(DAT_0001a378);
    return;
  }
  printk(uVar1,uVar3,uVar5,uVar8,uVar7,uVar6);
  if (-1 < param_1[0xc] << 0x1d) {
    return;
  }
  iVar4 = param_1[2];
  uVar1 = DAT_0001a364;
LAB_0001a304:
  printk(uVar1,iVar4);
  return;
}



/* ===== rga_cmd_print_debug_info @ 0001a37c size=270 ===== */

void rga_cmd_print_debug_info
               (undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  printk(DAT_0001a48c,*param_1,param_1[0x110],param_1[0x114],param_1,param_2,param_3,param_4);
  printk(DAT_0001a490,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
         *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x24),
         *(undefined2 *)(param_1 + 0x26),*(undefined2 *)(param_1 + 0x2c),
         *(undefined2 *)(param_1 + 0x2e));
  printk(DAT_0001a494,*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2a),
         *(undefined4 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x36));
  if (((*(int *)(param_1 + 0x78) != 0 || *(int *)(param_1 + 0x7c) != 0) ||
      (*(int *)(param_1 + 0x84) != 0 || *(int *)(param_1 + 0x80) != 0)) ||
     (*(int *)(param_1 + 0x8c) != 0 || *(int *)(param_1 + 0x88) != 0)) {
    printk(DAT_0001a498,*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80),
           *(undefined4 *)(param_1 + 0x88),*(undefined2 *)(param_1 + 0x94),
           *(undefined2 *)(param_1 + 0x96),*(undefined2 *)(param_1 + 0x9c),
           *(undefined2 *)(param_1 + 0x9e));
    printk(DAT_0001a49c,*(undefined2 *)(param_1 + 0x98),*(undefined2 *)(param_1 + 0x9a),
           *(undefined4 *)(param_1 + 0x90),*(undefined2 *)(param_1 + 0xa6));
  }
  printk(DAT_0001a4a0,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48),
         *(undefined4 *)(param_1 + 0x50),*(undefined2 *)(param_1 + 0x5c),
         *(undefined2 *)(param_1 + 0x5e),*(undefined2 *)(param_1 + 100),
         *(undefined2 *)(param_1 + 0x66));
  printk(DAT_0001a4a4,*(undefined2 *)(param_1 + 0x60),*(undefined2 *)(param_1 + 0x62),
         *(undefined4 *)(param_1 + 0x58),*(undefined2 *)(param_1 + 0x6e));
  printk(DAT_0001a4a8,*(undefined4 *)(param_1 + 0x128),param_1[0x118]);
  printk(DAT_0001a4ac,param_1[0x130]);
  printk(DAT_0001a4b0,param_1[0x112]);
  printk(DAT_0001a4b4,param_1[0x160],param_1[0x161],*(undefined4 *)(param_1 + 0x15c));
  return;
}



/* ===== <EXTERNAL>::filp_open @ 00022000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void filp_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__put_page @ 00022004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __put_page(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::misc_deregister @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void misc_deregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_request_threaded_irq @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_request_threaded_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_find @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_kmalloc @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_vmap @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_vmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_driver_unregister @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_driver_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_cache_unmap_attachment @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_cache_unmap_attachment(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_irq @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_free_table @ 00022034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_free_table(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::finish_wait @ 00022038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void finish_wait(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_alloc_table_from_pages @ 0002203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_alloc_table_from_pages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_sync_sg_for_cpu @ 00022044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_sync_sg_for_cpu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_cache_attach @ 00022048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_cache_attach(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap @ 0002204c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_sync_single_for_device @ 00022050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_sync_single_for_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_init @ 00022054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fd_install @ 00022058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fd_install(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002205c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vunmap @ 00022060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vunmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 00022064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_heavy_mb @ 0002206c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_heavy_mb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_create_data @ 00022070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_create_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prepare_to_wait_event @ 00022074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void prepare_to_wait_event(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__wake_up @ 00022078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_add_callback @ 0002207c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_add_callback(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free_pages @ 00022080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void free_pages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_get @ 00022084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_wait_timeout @ 00022088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_wait_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::put_unused_fd @ 0002208c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void put_unused_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_user_pages_remote @ 00022090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void get_user_pages_remote(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_driver_string @ 00022094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_driver_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_prepare @ 00022098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule_timeout @ 0002209c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000220a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::refcount_warn_saturate @ 000220a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void refcount_warn_saturate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__get_free_pages @ 000220a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __get_free_pages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 000220ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_get_next @ 000220b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_get_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 000220b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_cache_detach @ 000220b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_cache_detach(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::find_vma @ 000220bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void find_vma(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_remove @ 000220c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_remove(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_wait_entry @ 000220c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_wait_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_match_device @ 000220cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_match_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fput @ 000220d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fput(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 000220d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_context_alloc @ 000220d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_context_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kstrtoint @ 000220e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kstrtoint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_signal @ 000220e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_signal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_resource @ 000220e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_preload @ 000220ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_preload(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__close_fd @ 000220f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __close_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 000220f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_get @ 000220f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000220fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00022100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_is_locked @ 00022104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_is_locked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 00022108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_put @ 0002210c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vmap @ 00022110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kstrdup_quotable_cmdline @ 00022114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kstrdup_quotable_cmdline(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00022118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 0002211c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 00022120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_init @ 00022124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_alloc_cyclic @ 00022128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_alloc_cyclic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_cache_map_attachment @ 0002212c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_cache_map_attachment(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_destroy @ 00022130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_mkdir @ 00022134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_mkdir(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_sync_sg_for_device @ 00022138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_sync_sg_for_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002213c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_start_range_ns @ 00022140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_start_range_ns(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::misc_register @ 00022144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void misc_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00022148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::PDE_DATA @ 0002214c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void PDE_DATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 00022150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_vunmap @ 00022154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_vunmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_remove @ 00022158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_remove(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002215c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::down_read @ 00022160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void down_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mmdrop @ 00022164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mmdrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_to_user @ 00022168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_to_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nonseekable_open @ 0002216c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void nonseekable_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__platform_driver_register @ 00022170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __platform_driver_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_for_each @ 00022178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_for_each(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmput @ 0002217c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mmput(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 00022180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 00022184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_from_user @ 00022188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_from_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_unused_fd_flags @ 0002218c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void get_unused_fd_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_next @ 00022194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ktime_get @ 00022198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ktime_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_printf @ 0002219c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_printf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 000221a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_disable @ 000221a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__ktime_divns @ 000221a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __ktime_divns(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_cancel @ 000221ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_cancel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_puts @ 000221b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_puts(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_get_status @ 000221b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_get_status(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_unmap_sg_attrs @ 000221bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_unmap_sg_attrs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_forward @ 000221c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_forward(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_suspend @ 000221c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_suspend(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_release @ 000221c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::single_open @ 000221d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void single_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 000221d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_enable @ 000221dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::up_read @ 000221e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void up_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sync_file_get_fence @ 000221e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sync_file_get_fence(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 000221e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_zeroed_page @ 000221ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void get_zeroed_page(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_idle @ 000221f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_idle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 000221f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kernel_write @ 000221fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kernel_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sync_file_create @ 00022200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sync_file_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_map_sg_attrs @ 00022204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_map_sg_attrs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_unprepare @ 00022208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


