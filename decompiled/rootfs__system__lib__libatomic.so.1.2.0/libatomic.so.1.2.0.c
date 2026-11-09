// libatomic.so.1.2.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 0001153c size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011560 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002300c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0001156c size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00023010)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011578 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023014)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 00011584 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00023018)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00011590 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0002301c)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0001159c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00023020)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000115a8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023024)();
  return;
}



/* ===== entry @ 000115b4 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00011600 + 0x115cc == DAT_000115fc + 0x115c4) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011604 + 0x115d4 + DAT_00011608);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011670 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000116e4 + 0x1168c;
  if (*(char *)(DAT_000116e0 + 0x11680) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000116e8) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000116ec + 0x116ac));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000116f0) != 0) {
    __deregister_frame_info(DAT_000116f4 + 0x116cc);
  }
  *(undefined1 *)(DAT_000116f8 + 0x116dc) = 1;
  return;
}



/* ===== _INIT_0 @ 000116fc size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011734 + 0x1170c + DAT_00011738) != 0) {
    __register_frame_info(DAT_00011740 + 0x1172c,DAT_0001173c + 0x11728);
  }
  if (((DAT_00011664 + 0x11624) - (DAT_00011660 + 0x1161c) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011668 + 0x1162c + DAT_0001166c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== __atomic_load @ 00011744 size=292 ===== */

void __atomic_load(size_t param_1,void *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 *puStack_18;
  
  local_20._0_4_ = param_1;
  local_20._4_4_ = param_2;
  puStack_18 = param_3;
  switch(param_1) {
  case 0:
    return;
  case 1:
    uVar1 = __atomic_load_1(param_2);
    *(undefined1 *)param_3 = uVar1;
    return;
  case 2:
    if (((uint)param_2 & 1) == 0) {
      uVar2 = __atomic_load_2(param_2);
      *(undefined2 *)param_3 = uVar2;
      return;
    }
    goto LAB_000117e4;
  case 3:
LAB_000117e4:
    uVar4 = (uint)param_2 & 3;
    if (param_1 + uVar4 < 5) {
      uVar3 = __atomic_load_4((uint)param_2 & 0xfffffffc);
      local_20 = CONCAT44(local_20._4_4_,uVar3);
      goto LAB_00011800;
    }
    break;
  case 4:
    if (((uint)param_2 & 3) == 0) {
      uVar3 = __atomic_load_4(param_2);
      *(undefined4 *)param_3 = uVar3;
      return;
    }
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    if (((uint)param_2 & 7) == 0) {
      uVar5 = __atomic_load_8(param_2,param_4);
      *param_3 = uVar5;
      return;
    }
  default:
    goto switchD_0001175c_default;
  }
  uVar4 = (uint)param_2 & 7;
  if (8 < param_1 + uVar4) {
switchD_0001175c_default:
    FUN_00011fec(param_2,param_1);
    memcpy(param_3,param_2,param_1);
    FUN_00012034(param_2,param_1);
    return;
  }
  local_20 = __atomic_load_8((uint)param_2 & 0xfffffff8,param_4);
LAB_00011800:
  memcpy(param_3,(void *)((int)&local_20 + uVar4),param_1);
  return;
}



/* ===== __atomic_store @ 00011868 size=424 ===== */

void __atomic_store(size_t param_1,void *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  void *__dest;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int extraout_r12;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  switch(param_1) {
  case 0:
    return;
  case 1:
    __atomic_store_1(param_2,*(undefined1 *)param_3);
    return;
  case 2:
    if (((uint)param_2 & 1) == 0) {
      __atomic_store_2(param_2,*(undefined2 *)param_3);
      return;
    }
    goto LAB_00011910;
  case 3:
LAB_00011910:
    if (4 < param_1 + ((uint)param_2 & 3)) break;
    piVar5 = (int *)((uint)param_2 & 0xfffffffc);
    DataMemoryBarrier(0xb);
    __dest = (void *)((int)&local_30 + ((uint)param_2 & 3));
    local_38 = *piVar5;
    do {
      local_30 = local_38;
      __dest = memcpy(__dest,param_3,param_1);
      iVar3 = *piVar5;
      bVar8 = iVar3 == local_38;
      iVar2 = extraout_r12;
      if (bVar8) {
        bVar6 = (bool)hasExclusiveAccess(piVar5);
        iVar2 = 1;
        if (bVar6) {
          iVar2 = 0;
          *piVar5 = local_30;
        }
      }
      local_38 = iVar3;
    } while (!bVar8 || iVar2 != 0);
    goto LAB_000119dc;
  case 4:
    if (((uint)param_2 & 3) == 0) {
      __atomic_store_4(param_2,*param_3,param_4);
      return;
    }
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    if (((uint)param_2 & 7) == 0) {
      __atomic_store_8(param_2,param_2,*param_3,param_3[1],param_4);
      return;
    }
  default:
    goto switchD_00011884_default;
  }
  if (param_1 + ((uint)param_2 & 7) < 9) {
    piVar5 = (int *)((uint)param_2 & 0xfffffff8);
    DataMemoryBarrier(0xb);
    local_38 = *piVar5;
    iStack_34 = piVar5[1];
    do {
      local_30 = local_38;
      iStack_2c = iStack_34;
      memcpy((void *)((int)&local_30 + ((uint)param_2 & 7)),param_3,param_1);
      iVar3 = *piVar5;
      iVar4 = piVar5[1];
      bVar6 = iVar4 == iStack_34;
      bVar7 = iVar3 == local_38;
      bVar8 = bVar6 && bVar7;
      iVar2 = extraout_r1;
      if (bVar6 && bVar7) {
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        iVar2 = 1;
        if (bVar1) {
          iVar2 = 0;
          *piVar5 = local_30;
          piVar5[1] = iStack_2c;
        }
      }
      if (bVar6 && bVar7) {
        bVar8 = iVar2 == 0;
      }
      local_38 = iVar3;
      iStack_34 = iVar4;
    } while (!bVar8);
LAB_000119dc:
    DataMemoryBarrier(0xb);
  }
  else {
switchD_00011884_default:
    FUN_00011fec(param_2,param_1);
    memcpy(param_2,param_3,param_1);
    FUN_00012034(param_2,param_1);
  }
  return;
}



/* ===== __atomic_compare_exchange @ 00011a10 size=608 ===== */

uint __atomic_compare_exchange
               (size_t param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  undefined4 *__src;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int extraout_r12;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  switch(param_1) {
  case 0:
    goto LAB_00011bf8;
  case 1:
    uVar2 = __atomic_compare_exchange_1(param_2,param_3,*(undefined1 *)param_4,param_5,param_6);
    return uVar2;
  case 2:
    if (((uint)param_2 & 1) == 0) {
      uVar2 = __atomic_compare_exchange_2(param_2,param_3,*(undefined2 *)param_4,param_5,param_6);
      return uVar2;
    }
    goto LAB_00011ae8;
  case 3:
LAB_00011ae8:
    uVar2 = (uint)param_2 & 3;
    if (4 < param_1 + uVar2) break;
    piVar7 = (int *)((uint)param_2 & 0xfffffffc);
    DataMemoryBarrier(0xb);
    local_38 = *piVar7;
    do {
      iVar4 = memcmp((void *)((int)&local_38 + uVar2),param_3,param_1);
      if (iVar4 != 0) {
LAB_00011c00:
        DataMemoryBarrier(0xb);
        memcpy(param_3,(void *)((int)&local_38 + uVar2),param_1);
        return 0;
      }
      local_30 = local_38;
      iStack_2c = iStack_34;
      pvVar3 = memcpy((void *)((int)&local_30 + uVar2),param_4,param_1);
      iVar4 = *piVar7;
      bVar10 = iVar4 == local_38;
      if (bVar10) {
        bVar8 = (bool)hasExclusiveAccess(piVar7);
        pvVar3 = (void *)0x1;
        if (bVar8) {
          pvVar3 = (void *)0x0;
          *piVar7 = local_30;
        }
      }
      local_38 = iVar4;
    } while (!bVar10 || pvVar3 != (void *)0x0);
    goto LAB_00011bf4;
  case 4:
    if (((uint)param_2 & 3) == 0) {
      uVar2 = __atomic_compare_exchange_4(param_2,param_3,*param_4,param_5,param_6);
      return uVar2;
    }
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    if (((uint)param_2 & 7) == 0) {
      uVar2 = __atomic_compare_exchange_8(param_2,param_3,*param_4,param_4[1],param_5,param_6);
      return uVar2;
    }
  default:
    goto switchD_00011a34_default;
  }
  uVar2 = (uint)param_2 & 7;
  if (param_1 + uVar2 < 9) {
    DataMemoryBarrier(0xb);
    piVar7 = (int *)((uint)param_2 & 0xfffffff8);
    local_38 = *piVar7;
    iStack_34 = piVar7[1];
    do {
      iVar4 = memcmp((void *)((int)&local_38 + uVar2),param_3,param_1);
      if (iVar4 != 0) goto LAB_00011c00;
      local_30 = local_38;
      iStack_2c = iStack_34;
      memcpy((void *)((int)&local_30 + uVar2),param_4,param_1);
      iVar5 = *piVar7;
      iVar6 = piVar7[1];
      bVar8 = iVar6 == iStack_34;
      bVar9 = iVar5 == local_38;
      bVar10 = bVar8 && bVar9;
      iVar4 = extraout_r12;
      if (bVar8 && bVar9) {
        bVar1 = (bool)hasExclusiveAccess(piVar7);
        iVar4 = 1;
        if (bVar1) {
          iVar4 = 0;
          *piVar7 = local_30;
          piVar7[1] = iStack_2c;
        }
      }
      if (bVar8 && bVar9) {
        bVar10 = iVar4 == 0;
      }
      local_38 = iVar5;
      iStack_34 = iVar6;
    } while (!bVar10);
LAB_00011bf4:
    DataMemoryBarrier(0xb);
LAB_00011bf8:
    uVar2 = 1;
  }
  else {
switchD_00011a34_default:
    FUN_00011fec(param_2,param_1);
    iVar4 = memcmp(param_2,param_3,param_1);
    __src = param_2;
    if (iVar4 == 0) {
      param_3 = param_2;
      __src = param_4;
    }
    uVar2 = (uint)(iVar4 == 0);
    memcpy(param_3,__src,param_1);
    FUN_00012034(param_2,param_1);
  }
  return uVar2;
}



/* ===== FUN_00011c70 @ 00011c70 size=196 ===== */

void FUN_00011c70(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined1 auStack_428 [1028];
  
  for (uVar1 = 0; uVar1 != (param_1 & 0xfffffc00); uVar1 = uVar1 + 0x400) {
    memcpy(auStack_428,(void *)(param_2 + uVar1),0x400);
    memcpy((void *)(param_2 + uVar1),(void *)(param_3 + uVar1),0x400);
    memcpy((void *)(param_3 + uVar1),auStack_428,0x400);
  }
  param_1 = param_1 & 0x3ff;
  if (param_1 != 0) {
    memcpy(auStack_428,(void *)(param_2 + uVar1),param_1);
    memcpy((void *)(param_2 + uVar1),(void *)(param_3 + uVar1),param_1);
    memcpy((void *)(param_3 + uVar1),auStack_428,param_1);
  }
  return;
}



/* ===== __atomic_exchange @ 00011d34 size=508 ===== */

void __atomic_exchange(size_t param_1,void *param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined4 param_5)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  void *__dest;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int extraout_r12;
  int extraout_r12_00;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  switch(param_1) {
  case 0:
    return;
  case 1:
    uVar2 = __atomic_exchange_1(param_2,*(undefined1 *)param_3);
    *(undefined1 *)param_4 = uVar2;
    return;
  case 2:
    if (((uint)param_2 & 1) == 0) {
      uVar3 = __atomic_exchange_2(param_2,*(undefined2 *)param_3);
      *(undefined2 *)param_4 = uVar3;
      return;
    }
    goto LAB_00011df0;
  case 3:
LAB_00011df0:
    uVar7 = (uint)param_2 & 3;
    if (4 < param_1 + uVar7) break;
    piVar8 = (int *)((uint)param_2 & 0xfffffffc);
    DataMemoryBarrier(0xb);
    __dest = (void *)((int)&local_30 + uVar7);
    iVar5 = *piVar8;
    do {
      local_38 = iVar5;
      local_30 = local_38;
      iStack_2c = iStack_34;
      __dest = memcpy(__dest,param_3,param_1);
      iVar5 = *piVar8;
      iVar6 = extraout_r12;
      if (iVar5 == local_38) {
        bVar12 = (bool)hasExclusiveAccess(piVar8);
        iVar6 = 1;
        if (bVar12) {
          iVar6 = 0;
          *piVar8 = local_30;
        }
      }
    } while (iVar5 != local_38 || iVar6 != 0);
    goto LAB_00011ebc;
  case 4:
    if (((uint)param_2 & 3) == 0) {
      uVar4 = __atomic_exchange_4(param_2,*(undefined4 *)param_3);
      *(undefined4 *)param_4 = uVar4;
      return;
    }
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    if (((uint)param_2 & 7) == 0) {
      uVar13 = __atomic_exchange_8(param_2,param_2,*(undefined4 *)param_3,
                                   *(undefined4 *)((int)param_3 + 4),param_5);
      *param_4 = uVar13;
      return;
    }
  default:
    goto switchD_00011d54_default;
  }
  uVar7 = (uint)param_2 & 7;
  if (param_1 + uVar7 < 9) {
    piVar8 = (int *)((uint)param_2 & 0xfffffff8);
    DataMemoryBarrier(0xb);
    iVar5 = *piVar8;
    iVar6 = piVar8[1];
    do {
      iStack_34 = iVar6;
      local_38 = iVar5;
      local_30 = local_38;
      iStack_2c = iStack_34;
      memcpy((void *)((int)&local_30 + uVar7),param_3,param_1);
      iVar5 = *piVar8;
      iVar6 = piVar8[1];
      bVar10 = iVar6 == iStack_34;
      bVar11 = iVar5 == local_38;
      bVar12 = bVar10 && bVar11;
      iVar9 = extraout_r12_00;
      if (bVar10 && bVar11) {
        bVar1 = (bool)hasExclusiveAccess(piVar8);
        iVar9 = 1;
        if (bVar1) {
          iVar9 = 0;
          *piVar8 = local_30;
          piVar8[1] = iStack_2c;
        }
      }
      if (bVar10 && bVar11) {
        bVar12 = iVar9 == 0;
      }
    } while (!bVar12);
LAB_00011ebc:
    DataMemoryBarrier(0xb);
    memcpy(param_4,(void *)((int)&local_38 + uVar7),param_1);
  }
  else {
switchD_00011d54_default:
    FUN_00011fec(param_2,param_1);
    if (param_3 == param_4) {
      FUN_00011c70(param_1,param_2,param_3);
    }
    else {
      memcpy(param_4,param_2,param_1);
      memcpy(param_2,param_3,param_1);
    }
    FUN_00012034(param_2,param_1);
  }
  return;
}



/* ===== __atomic_is_lock_free @ 00011f30 size=140 ===== */

bool __atomic_is_lock_free(int param_1,uint param_2)

{
  switch(param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    if ((param_2 & 1) == 0) {
      return true;
    }
    goto LAB_00011fa8;
  case 3:
LAB_00011fa8:
    if (4 < (param_2 & 3) + param_1) goto LAB_00011f80;
    break;
  case 4:
    if ((param_2 & 3) != 0) goto LAB_00011f80;
    break;
  case 5:
    goto LAB_00011f80;
  case 6:
    goto LAB_00011f80;
  case 7:
LAB_00011f80:
    return (param_2 & 7) + param_1 < 9;
  case 8:
    return (param_2 & 7) == 0;
  default:
    return false;
  }
  return true;
}



/* ===== FUN_00011fec @ 00011fec size=68 ===== */

void FUN_00011fec(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = (param_1 & 0xfff) >> 6;
  if (0xfff < param_2) {
    param_2 = 0x1000;
  }
  iVar4 = DAT_00012030 + 0x1200c;
  uVar3 = 0;
  do {
    iVar1 = uVar2 * 0x40;
    uVar2 = uVar2 + 1;
    pthread_mutex_lock((pthread_mutex_t *)(iVar4 + iVar1));
    uVar3 = uVar3 + 0x40;
    if (uVar2 == 0x40) {
      uVar2 = 0;
    }
  } while (uVar3 < param_2);
  return;
}



/* ===== FUN_00012034 @ 00012034 size=68 ===== */

void FUN_00012034(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = (param_1 & 0xfff) >> 6;
  if (0xfff < param_2) {
    param_2 = 0x1000;
  }
  iVar4 = DAT_00012078 + 0x12054;
  uVar3 = 0;
  do {
    iVar1 = uVar2 * 0x40;
    uVar2 = uVar2 + 1;
    pthread_mutex_unlock((pthread_mutex_t *)(iVar4 + iVar1));
    uVar3 = uVar3 + 0x40;
    if (uVar2 == 0x40) {
      uVar2 = 0;
    }
  } while (uVar3 < param_2);
  return;
}



/* ===== __atomic_feraiseexcept @ 0001207c size=4 ===== */

void __atomic_feraiseexcept(void)

{
  return;
}



/* ===== atomic_thread_fence @ 00012080 size=8 ===== */

void atomic_thread_fence(void)

{
  DataMemoryBarrier(0xb);
  return;
}



/* ===== atomic_signal_fence @ 00012088 size=4 ===== */

void atomic_signal_fence(void)

{
  return;
}



/* ===== atomic_flag_test_and_set @ 0001208c size=36 ===== */

undefined1 atomic_flag_test_and_set(undefined1 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
  return uVar1;
}



/* ===== atomic_flag_test_and_set_explicit @ 000120b0 size=36 ===== */

undefined1 atomic_flag_test_and_set_explicit(undefined1 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
  return uVar1;
}



/* ===== atomic_flag_clear @ 000120d4 size=20 ===== */

void atomic_flag_clear(undefined1 *param_1)

{
  DataMemoryBarrier(0xb);
  *param_1 = 0;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== atomic_flag_clear_explicit @ 000120e8 size=20 ===== */

void atomic_flag_clear_explicit(undefined1 *param_1)

{
  DataMemoryBarrier(0xb);
  *param_1 = 0;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== __atomic_load_1 @ 000120fc size=16 ===== */

undefined1 __atomic_load_1(undefined1 *param_1)

{
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  return *param_1;
}



/* ===== __atomic_store_1 @ 0001210c size=16 ===== */

void __atomic_store_1(undefined1 *param_1,undefined1 param_2)

{
  DataMemoryBarrier(0xb);
  *param_1 = param_2;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== __atomic_compare_exchange_1 @ 0001211c size=56 ===== */

bool __atomic_compare_exchange_1(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *param_1;
    bVar2 = cVar1 == *param_2;
    if (!bVar2) goto LAB_00012144;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = param_3;
  DataMemoryBarrier(0xb);
  bVar2 = true;
LAB_00012144:
  if (!bVar2) {
    *param_2 = cVar1;
  }
  return bVar2;
}



/* ===== __atomic_exchange_1 @ 00012154 size=72 ===== */

uint __atomic_exchange_1(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  uint *puVar8;
  uint uVar9;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  
  DataMemoryBarrier(0xb);
  iVar1 = (param_1 & 3) << 3;
  param_2 = param_2 << iVar1;
  puVar8 = (uint *)(param_1 & 0xfffffffc);
  iVar2 = 0xff << iVar1;
  bVar4 = (byte)iVar2;
  bVar5 = (byte)((uint)iVar2 >> 8);
  bVar6 = (byte)((uint)iVar2 >> 0x10);
  bVar7 = (byte)((uint)iVar2 >> 0x18);
  do {
    uVar9 = *puVar8;
    bVar3 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar3);
  *puVar8 = (uint)CARRY1(bVar4,bVar4) * param_2 + !CARRY1(bVar4,bVar4) * uVar9 & 0xff |
            (uint)CARRY1(bVar5,bVar5) * param_2 + !CARRY1(bVar5,bVar5) * uVar9 & 0xff00 |
            (uint)CARRY1(bVar6,bVar6) * param_2 + !CARRY1(bVar6,bVar6) * uVar9 & 0xff0000 |
            (uint)CARRY1(bVar7,bVar7) * param_2 + !CARRY1(bVar7,bVar7) * uVar9 & 0xff000000;
  DataMemoryBarrier(0xb);
  return uVar9 >> iVar1 & 0xff;
}



/* ===== __atomic_fetch_add_1 @ 0001219c size=36 ===== */

char __atomic_fetch_add_1(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = cVar1 + param_2;
  DataMemoryBarrier(0xb);
  return cVar1;
}



/* ===== __atomic_add_fetch_1 @ 000121c0 size=36 ===== */

char __atomic_add_fetch_1(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = cVar1 + param_2;
  DataMemoryBarrier(0xb);
  return cVar1 + param_2;
}



/* ===== __atomic_fetch_sub_1 @ 000121e4 size=36 ===== */

char __atomic_fetch_sub_1(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = cVar1 - param_2;
  DataMemoryBarrier(0xb);
  return cVar1;
}



/* ===== __atomic_sub_fetch_1 @ 00012208 size=36 ===== */

char __atomic_sub_fetch_1(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = cVar1 - param_2;
  DataMemoryBarrier(0xb);
  return cVar1 - param_2;
}



/* ===== __atomic_fetch_and_1 @ 0001222c size=36 ===== */

byte __atomic_fetch_and_1(byte *param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = bVar1 & param_2;
  DataMemoryBarrier(0xb);
  return bVar1;
}



/* ===== __atomic_and_fetch_1 @ 00012250 size=40 ===== */

byte __atomic_and_fetch_1(byte *param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = bVar1 & param_2;
  DataMemoryBarrier(0xb);
  return bVar1 & param_2;
}



/* ===== __atomic_fetch_or_1 @ 00012278 size=36 ===== */

byte __atomic_fetch_or_1(byte *param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = bVar1 | param_2;
  DataMemoryBarrier(0xb);
  return bVar1;
}



/* ===== __atomic_or_fetch_1 @ 0001229c size=36 ===== */

byte __atomic_or_fetch_1(byte *param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = bVar1 | param_2;
  DataMemoryBarrier(0xb);
  return bVar1 | param_2;
}



/* ===== __atomic_fetch_xor_1 @ 000122c0 size=36 ===== */

byte __atomic_fetch_xor_1(byte *param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = bVar1 ^ param_2;
  DataMemoryBarrier(0xb);
  return bVar1;
}



/* ===== __atomic_xor_fetch_1 @ 000122e4 size=36 ===== */

byte __atomic_xor_fetch_1(byte *param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = bVar1 ^ param_2;
  DataMemoryBarrier(0xb);
  return bVar1 ^ param_2;
}



/* ===== __atomic_fetch_nand_1 @ 00012308 size=40 ===== */

byte __atomic_fetch_nand_1(byte *param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = ~(bVar1 & param_2);
  DataMemoryBarrier(0xb);
  return bVar1;
}



/* ===== __atomic_nand_fetch_1 @ 00012330 size=40 ===== */

byte __atomic_nand_fetch_1(byte *param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = ~(bVar1 & param_2);
  DataMemoryBarrier(0xb);
  return ~(bVar1 & param_2);
}



/* ===== __atomic_test_and_set_1 @ 00012358 size=36 ===== */

undefined1 __atomic_test_and_set_1(undefined1 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
  return uVar1;
}



/* ===== __atomic_load_2 @ 0001237c size=16 ===== */

undefined2 __atomic_load_2(undefined2 *param_1)

{
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  return *param_1;
}



/* ===== __atomic_store_2 @ 0001238c size=16 ===== */

void __atomic_store_2(undefined2 *param_1,undefined2 param_2)

{
  DataMemoryBarrier(0xb);
  *param_1 = param_2;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== __atomic_compare_exchange_2 @ 0001239c size=56 ===== */

bool __atomic_compare_exchange_2(short *param_1,short *param_2,short param_3)

{
  short sVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    sVar1 = *param_1;
    bVar2 = sVar1 == *param_2;
    if (!bVar2) goto LAB_000123c4;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = param_3;
  DataMemoryBarrier(0xb);
  bVar2 = true;
LAB_000123c4:
  if (!bVar2) {
    *param_2 = sVar1;
  }
  return bVar2;
}



/* ===== __atomic_exchange_2 @ 000123d4 size=68 ===== */

uint __atomic_exchange_2(uint param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  bool bVar3;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar4;
  
  DataMemoryBarrier(0xb);
  uVar7 = 0xffff;
  bVar9 = (bool)((byte)(param_1 >> 1) & 1);
  puVar5 = (uint *)(param_1 & 0xfffffffc);
  if (bVar9) {
    uVar7 = 0xffff0000;
    param_2 = param_2 << 0x10;
  }
  bVar3 = CARRY2((ushort)uVar7,(ushort)uVar7);
  uVar2 = (ushort)((uint)uVar7 >> 0x10);
  bVar4 = CARRY2(uVar2,uVar2);
  do {
    uVar8 = *puVar5;
    if (bVar9) {
      uVar6 = uVar8 >> 0x10;
    }
    else {
      uVar6 = uVar8 & 0xffff;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar1);
  *puVar5 = (uint)bVar3 * param_2 + !bVar3 * uVar8 & 0xff |
            (uint)bVar3 * param_2 + !bVar3 * uVar8 & 0xff00 |
            (uint)bVar4 * param_2 + !bVar4 * uVar8 & 0xff0000 |
            (uint)bVar4 * param_2 + !bVar4 * uVar8 & 0xff000000;
  DataMemoryBarrier(0xb);
  return uVar6;
}



/* ===== __atomic_fetch_add_2 @ 00012418 size=36 ===== */

short __atomic_fetch_add_2(short *param_1,short param_2)

{
  short sVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    sVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = sVar1 + param_2;
  DataMemoryBarrier(0xb);
  return sVar1;
}



/* ===== __atomic_add_fetch_2 @ 0001243c size=36 ===== */

short __atomic_add_fetch_2(short *param_1,short param_2)

{
  short sVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    sVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = sVar1 + param_2;
  DataMemoryBarrier(0xb);
  return sVar1 + param_2;
}



/* ===== __atomic_fetch_sub_2 @ 00012460 size=36 ===== */

short __atomic_fetch_sub_2(short *param_1,short param_2)

{
  short sVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    sVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = sVar1 - param_2;
  DataMemoryBarrier(0xb);
  return sVar1;
}



/* ===== __atomic_sub_fetch_2 @ 00012484 size=36 ===== */

short __atomic_sub_fetch_2(short *param_1,short param_2)

{
  short sVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    sVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = sVar1 - param_2;
  DataMemoryBarrier(0xb);
  return sVar1 - param_2;
}



/* ===== __atomic_fetch_and_2 @ 000124a8 size=36 ===== */

ushort __atomic_fetch_and_2(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = uVar1 & param_2;
  DataMemoryBarrier(0xb);
  return uVar1;
}



/* ===== __atomic_and_fetch_2 @ 000124cc size=40 ===== */

ushort __atomic_and_fetch_2(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = uVar1 & param_2;
  DataMemoryBarrier(0xb);
  return uVar1 & param_2;
}



/* ===== __atomic_fetch_or_2 @ 000124f4 size=36 ===== */

ushort __atomic_fetch_or_2(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = uVar1 | param_2;
  DataMemoryBarrier(0xb);
  return uVar1;
}



/* ===== __atomic_or_fetch_2 @ 00012518 size=36 ===== */

ushort __atomic_or_fetch_2(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = uVar1 | param_2;
  DataMemoryBarrier(0xb);
  return uVar1 | param_2;
}



/* ===== __atomic_fetch_xor_2 @ 0001253c size=36 ===== */

ushort __atomic_fetch_xor_2(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = uVar1 ^ param_2;
  DataMemoryBarrier(0xb);
  return uVar1;
}



/* ===== __atomic_xor_fetch_2 @ 00012560 size=36 ===== */

ushort __atomic_xor_fetch_2(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = uVar1 ^ param_2;
  DataMemoryBarrier(0xb);
  return uVar1 ^ param_2;
}



/* ===== __atomic_fetch_nand_2 @ 00012584 size=40 ===== */

ushort __atomic_fetch_nand_2(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = ~(uVar1 & param_2);
  DataMemoryBarrier(0xb);
  return uVar1;
}



/* ===== __atomic_nand_fetch_2 @ 000125ac size=40 ===== */

ushort __atomic_nand_fetch_2(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = ~(uVar1 & param_2);
  DataMemoryBarrier(0xb);
  return ~(uVar1 & param_2);
}



/* ===== __atomic_test_and_set_2 @ 000125d4 size=36 ===== */

undefined1 __atomic_test_and_set_2(undefined1 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
  return uVar1;
}



/* ===== __atomic_load_4 @ 000125f8 size=16 ===== */

undefined4 __atomic_load_4(undefined4 *param_1)

{
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  return *param_1;
}



/* ===== __atomic_store_4 @ 00012608 size=16 ===== */

void __atomic_store_4(undefined4 *param_1,undefined4 param_2)

{
  DataMemoryBarrier(0xb);
  *param_1 = param_2;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== __atomic_compare_exchange_4 @ 00012618 size=56 ===== */

bool __atomic_compare_exchange_4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *param_1;
    bVar2 = iVar1 == *param_2;
    if (!bVar2) goto LAB_00012640;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = param_3;
  DataMemoryBarrier(0xb);
  bVar2 = true;
LAB_00012640:
  if (!bVar2) {
    *param_2 = iVar1;
  }
  return bVar2;
}



/* ===== __atomic_exchange_4 @ 00012650 size=32 ===== */

undefined4 __atomic_exchange_4(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = param_2;
  DataMemoryBarrier(0xb);
  return uVar2;
}



/* ===== __atomic_fetch_add_4 @ 00012670 size=36 ===== */

int __atomic_fetch_add_4(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + param_2;
  DataMemoryBarrier(0xb);
  return iVar2;
}



/* ===== __atomic_add_fetch_4 @ 00012694 size=36 ===== */

int __atomic_add_fetch_4(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + param_2;
  DataMemoryBarrier(0xb);
  return iVar2 + param_2;
}



/* ===== __atomic_fetch_sub_4 @ 000126b8 size=36 ===== */

int __atomic_fetch_sub_4(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 - param_2;
  DataMemoryBarrier(0xb);
  return iVar2;
}



/* ===== __atomic_sub_fetch_4 @ 000126dc size=36 ===== */

int __atomic_sub_fetch_4(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 - param_2;
  DataMemoryBarrier(0xb);
  return iVar2 - param_2;
}



/* ===== __atomic_fetch_and_4 @ 00012700 size=36 ===== */

uint __atomic_fetch_and_4(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 & param_2;
  DataMemoryBarrier(0xb);
  return uVar2;
}



/* ===== __atomic_and_fetch_4 @ 00012724 size=36 ===== */

uint __atomic_and_fetch_4(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 & param_2;
  DataMemoryBarrier(0xb);
  return uVar2 & param_2;
}



/* ===== __atomic_fetch_or_4 @ 00012748 size=36 ===== */

uint __atomic_fetch_or_4(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 | param_2;
  DataMemoryBarrier(0xb);
  return uVar2;
}



/* ===== __atomic_or_fetch_4 @ 0001276c size=36 ===== */

uint __atomic_or_fetch_4(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 | param_2;
  DataMemoryBarrier(0xb);
  return uVar2 | param_2;
}



/* ===== __atomic_fetch_xor_4 @ 00012790 size=36 ===== */

uint __atomic_fetch_xor_4(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 ^ param_2;
  DataMemoryBarrier(0xb);
  return uVar2;
}



/* ===== __atomic_xor_fetch_4 @ 000127b4 size=36 ===== */

uint __atomic_xor_fetch_4(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 ^ param_2;
  DataMemoryBarrier(0xb);
  return uVar2 ^ param_2;
}



/* ===== __atomic_fetch_nand_4 @ 000127d8 size=40 ===== */

void __atomic_fetch_nand_4(uint *param_1,uint param_2)

{
  bool bVar1;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = ~(*param_1 & param_2);
  DataMemoryBarrier(0xb);
  return;
}



/* ===== __atomic_nand_fetch_4 @ 00012800 size=40 ===== */

void __atomic_nand_fetch_4(uint *param_1,uint param_2)

{
  bool bVar1;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = ~(*param_1 & param_2);
  DataMemoryBarrier(0xb);
  return;
}



/* ===== __atomic_test_and_set_4 @ 00012828 size=36 ===== */

undefined1 __atomic_test_and_set_4(undefined1 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
  return uVar1;
}



/* ===== __atomic_load_8 @ 0001284c size=12 ===== */

undefined8 __atomic_load_8(undefined8 *param_1)

{
  DataMemoryBarrier(0xb);
  return *param_1;
}



/* ===== __atomic_store_8 @ 00012858 size=32 ===== */

void __atomic_store_8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = param_3;
  param_1[1] = param_4;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== __atomic_compare_exchange_8 @ 00012878 size=68 ===== */

bool __atomic_compare_exchange_8(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    bVar3 = iVar2 == param_2[1] && iVar1 == *param_2;
    if (iVar2 != param_2[1] || iVar1 != *param_2) goto LAB_000128a4;
    bVar3 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar3);
  *param_1 = param_3;
  param_1[1] = param_4;
  DataMemoryBarrier(0xb);
  bVar3 = true;
LAB_000128a4:
  if (!bVar3) {
    *param_2 = iVar1;
    param_2[1] = iVar2;
  }
  return bVar3;
}



/* ===== __atomic_exchange_8 @ 000128bc size=40 ===== */

undefined8
__atomic_exchange_8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *(undefined4 *)param_1 = param_3;
  *(undefined4 *)((int)param_1 + 4) = param_4;
  DataMemoryBarrier(0xb);
  return uVar2;
}



/* ===== __atomic_fetch_add_8 @ 000128e4 size=48 ===== */

undefined8 __atomic_fetch_add_8(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    uVar2 = *(undefined8 *)param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar3 + param_3;
  param_1[1] = param_1[1] + param_4 + (uint)CARRY4(uVar3,param_3);
  DataMemoryBarrier(0xb);
  return uVar2;
}



/* ===== __atomic_add_fetch_8 @ 00012914 size=48 ===== */

undefined8 __atomic_add_fetch_8(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1 + param_3;
    uVar3 = param_1[1] + param_4 + (uint)CARRY4(*param_1,param_3);
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  DataMemoryBarrier(0xb);
  return CONCAT44(uVar3,uVar2);
}



/* ===== __atomic_fetch_sub_8 @ 00012944 size=56 ===== */

undefined8 __atomic_fetch_sub_8(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    uVar2 = *(undefined8 *)param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar3 - param_3;
  param_1[1] = param_1[1] - (param_4 + (uint)(uVar3 < param_3));
  DataMemoryBarrier(0xb);
  return uVar2;
}



/* ===== __atomic_sub_fetch_8 @ 0001297c size=48 ===== */

undefined8 __atomic_sub_fetch_8(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1 - param_3;
    uVar3 = param_1[1] - (param_4 + (uint)(*param_1 < param_3));
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  DataMemoryBarrier(0xb);
  return CONCAT44(uVar3,uVar2);
}



/* ===== __atomic_fetch_and_8 @ 000129ac size=48 ===== */

undefined8 __atomic_fetch_and_8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *(undefined8 *)param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 & param_3;
  param_1[1] = param_1[1] & param_4;
  DataMemoryBarrier(0xb);
  return uVar2;
}



/* ===== __atomic_and_fetch_8 @ 000129dc size=48 ===== */

undefined8 __atomic_and_fetch_8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 & param_3;
  param_1[1] = uVar3 & param_4;
  DataMemoryBarrier(0xb);
  return CONCAT44(uVar3 & param_4,uVar2 & param_3);
}



/* ===== __atomic_fetch_or_8 @ 00012a0c size=48 ===== */

undefined8 __atomic_fetch_or_8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *(undefined8 *)param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 | param_3;
  param_1[1] = param_1[1] | param_4;
  DataMemoryBarrier(0xb);
  return uVar2;
}



/* ===== __atomic_or_fetch_8 @ 00012a3c size=48 ===== */

undefined8 __atomic_or_fetch_8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 | param_3;
  param_1[1] = uVar3 | param_4;
  DataMemoryBarrier(0xb);
  return CONCAT44(uVar3 | param_4,uVar2 | param_3);
}



/* ===== __atomic_fetch_xor_8 @ 00012a6c size=48 ===== */

undefined8 __atomic_fetch_xor_8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *(undefined8 *)param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 ^ param_3;
  param_1[1] = param_1[1] ^ param_4;
  DataMemoryBarrier(0xb);
  return uVar2;
}



/* ===== __atomic_xor_fetch_8 @ 00012a9c size=48 ===== */

undefined8 __atomic_xor_fetch_8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 ^ param_3;
  param_1[1] = uVar3 ^ param_4;
  DataMemoryBarrier(0xb);
  return CONCAT44(uVar3 ^ param_4,uVar2 ^ param_3);
}



/* ===== __atomic_fetch_nand_8 @ 00012acc size=52 ===== */

void __atomic_fetch_nand_8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = ~(*param_1 & param_3);
  param_1[1] = ~(param_1[1] & param_4);
  DataMemoryBarrier(0xb);
  return;
}



/* ===== __atomic_nand_fetch_8 @ 00012b00 size=52 ===== */

void __atomic_nand_fetch_8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = ~(*param_1 & param_3);
  param_1[1] = ~(param_1[1] & param_4);
  DataMemoryBarrier(0xb);
  return;
}



/* ===== __atomic_test_and_set_8 @ 00012b34 size=36 ===== */

undefined1 __atomic_test_and_set_8(undefined1 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
  return uVar1;
}



/* ===== _DT_FINI @ 00012b58 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00025000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00025004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00025008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 00025010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00025018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0002501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


