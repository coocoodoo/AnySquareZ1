// rockit.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== list_del @ 00010bd0 size=22 ===== */

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



/* ===== mpi_obj_referenced @ 00010be6 size=60 ===== */

void mpi_obj_referenced(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[4];
  vlog(0,5,DAT_00010c28,DAT_00010c24,0xb8,*(undefined4 *)(DAT_00010c24 + param_1[2] * 4 + 0x14),
       *param_1,iVar1 + -1);
  if ((iVar1 == 1) && (param_1[6] != 0)) {
    *(undefined4 *)(param_1[6] + 8) = 0;
  }
  return;
}



/* ===== mpi_obj_from_id @ 00010c2c size=34 ===== */

int mpi_obj_from_id(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  disableIRQinterrupts();
  iVar1 = idr_find(DAT_00010c50,param_1,param_3,param_4,param_4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != param_2)) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== mpi_dev_find_by_name @ 00010c54 size=56 ===== */

undefined4 * mpi_dev_find_by_name(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  disableIRQinterrupts();
  puVar1 = (undefined4 *)(DAT_00010c8c + 0x10);
  puVar3 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar3 == puVar1) {
      return (undefined4 *)0x0;
    }
    iVar2 = strcmp((char *)puVar3[2],param_1);
    if (iVar2 == 0) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  return puVar3 + -9;
}



/* ===== mpi_allocator_find_by_name @ 00010c90 size=56 ===== */

undefined4 * mpi_allocator_find_by_name(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  disableIRQinterrupts();
  puVar1 = (undefined4 *)(DAT_00010cc8 + 0x18);
  puVar3 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar3 == puVar1) {
      return (undefined4 *)0x0;
    }
    iVar2 = strcmp((char *)puVar3[2],param_1);
    if (iVar2 == 0) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  return puVar3 + -9;
}



/* ===== mpi_obj_ref @ 00010ccc size=40 ===== */

int mpi_obj_ref(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x10);
    HintPreloadData(piVar2);
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
    mpi_obj_referenced();
  }
  return param_1;
}



/* ===== mpi_obj_unref @ 00010cf4 size=186 ===== */

void mpi_obj_unref(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[4] == 0) {
      vlog(0,2,DAT_00010db4,DAT_00010db0,0xf3,*param_1);
    }
    else {
      vlog(0,5,DAT_00010dbc,DAT_00010db8 + 0x34,0xf8,
           *(undefined4 *)(DAT_00010db8 + param_1[2] * 4 + 0x14),*param_1,param_1[4]);
      piVar3 = param_1 + 4;
      HintPreloadData(piVar3);
      do {
        ExclusiveAccess(piVar3);
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        piVar3 = (int *)param_1[6];
        if (piVar3 != (int *)0x0) {
          HintPreloadData(piVar3);
          do {
            ExclusiveAccess(piVar3);
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = *piVar3 + 1;
        }
        if ((code *)param_1[5] != (code *)0x0) {
          (*(code *)param_1[5])(param_1);
        }
        if (piVar3 != (int *)0x0) {
          if (piVar3[1] != 0) {
            complete_all(piVar3 + 2);
          }
          HintPreloadData(piVar3);
          do {
            ExclusiveAccess(piVar3);
            iVar2 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            kfree(piVar3);
            return;
          }
        }
      }
    }
  }
  return;
}



/* ===== mpi_obj_register @ 00010dc0 size=238 ===== */

int mpi_obj_register(int *param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  param_1[5] = param_4;
  param_1[2] = param_2;
  *param_1 = -1;
  param_1[3] = param_3 | 3;
  param_1[4] = 0;
  if ((int)(param_3 << 0x19) < 0) {
    iVar3 = kmem_cache_alloc(*(undefined4 *)(DAT_00010eb8 + 0x14),0xdc0);
    uVar2 = DAT_00010ec0;
    uVar1 = DAT_00010ebc;
    param_1[6] = iVar3;
    *(undefined4 *)(iVar3 + 8) = 0;
    __init_swait_queue_head(iVar3 + 0xc,uVar2,uVar1);
    *(undefined4 *)param_1[6] = 1;
  }
  if ((param_1[3] & 0x10U) != 0) goto LAB_00010e58;
  disableIRQinterrupts();
  iVar3 = idr_alloc(DAT_00010ec4,param_1,1,0,0xa20);
  *param_1 = iVar3;
  if (iVar3 < 0) {
    return *param_1;
  }
  switch(param_1[2]) {
  case 0:
    iVar3 = DAT_00010ec4 + 0x10;
    puVar4 = *(undefined4 **)(DAT_00010ec4 + 0x14);
    *(int **)(DAT_00010ec4 + 0x14) = param_1 + 9;
    break;
  case 1:
    iVar3 = DAT_00010ec4 + 0x20;
    puVar4 = *(undefined4 **)(DAT_00010ec4 + 0x24);
    *(int **)(DAT_00010ec4 + 0x24) = param_1 + 9;
    break;
  default:
    goto switchD_00010e36_caseD_2;
  case 4:
    iVar3 = DAT_00010ec4 + 0x28;
    puVar4 = *(undefined4 **)(DAT_00010ec4 + 0x2c);
    *(int **)(DAT_00010ec4 + 0x2c) = param_1 + 9;
    break;
  case 5:
    iVar3 = DAT_00010ec4 + 0x30;
    puVar4 = *(undefined4 **)(DAT_00010ec4 + 0x34);
    *(int **)(DAT_00010ec4 + 0x34) = param_1 + 9;
    break;
  case 7:
    iVar3 = DAT_00010ec4 + 0x18;
    puVar4 = *(undefined4 **)(DAT_00010ec4 + 0x1c);
    *(int **)(DAT_00010ec4 + 0x1c) = param_1 + 9;
  }
  param_1[9] = iVar3;
  param_1[10] = (int)puVar4;
  *puVar4 = param_1 + 9;
switchD_00010e36_caseD_2:
LAB_00010e58:
  vlog(0,5,DAT_00010ecc,DAT_00010ec8 + 0x42,0x8d,
       *(undefined4 *)(DAT_00010ec8 + param_1[2] * 4 + 0x14),*param_1,param_1);
  return 0;
}



/* ===== mpi_obj_unregister @ 00010ed0 size=196 ===== */

void mpi_obj_unregister(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  uVar2 = param_1[3];
  piVar4 = (int *)param_1[6];
  param_1[3] = uVar2 & 0xfffffffc;
  if (-1 < (int)(uVar2 << 0x1b)) {
    disableIRQinterrupts();
    puVar5 = param_1;
    switch(param_1[2]) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 7:
      list_del(param_1 + 9);
    }
    if ((int)(param_1[3] << 0x1a) < 0) {
      idr_replace(DAT_00010f9c,0);
    }
    else {
      idr_remove(DAT_00010f9c,*param_1,*param_1,param_1[3] << 0x1a,puVar5,param_2,param_3,param_4);
    }
  }
  if (piVar4 != (int *)0x0) {
    HintPreloadData(piVar4);
    do {
      ExclusiveAccess(piVar4);
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      kfree(piVar4);
    }
  }
  iVar3 = DAT_00010fa0;
  vlog(0,5,DAT_00010fa4,DAT_00010fa0 + 0x53,0xab,
       *(undefined4 *)(DAT_00010fa0 + param_1[2] * 4 + 0x14),*param_1);
  if (((param_1[3] & 8) == 0) &&
     (vlog(0,5,DAT_00010fa8,iVar3 + 0x53,0xae,*(undefined4 *)(iVar3 + param_1[2] * 4 + 0x14),
           *param_1), param_1 != (undefined4 *)0x0)) {
    call_rcu(param_1 + 7);
    return;
  }
  return;
}



/* ===== mpi_obj_ref_if_unused @ 00010fac size=48 ===== */

bool mpi_obj_ref_if_unused(int param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(param_1 + 0x10);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar4 = *piVar3;
    bVar2 = false;
    if (iVar4 == 0) {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      bVar2 = true;
      if (bVar1) {
        bVar2 = false;
        *piVar3 = 1;
      }
    }
  } while (bVar2);
  if (iVar4 == 0) {
    mpi_obj_referenced();
  }
  return iVar4 == 0;
}



/* ===== mpi_obj_ref_if_used @ 00010fdc size=52 ===== */

bool mpi_obj_ref_if_used(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x10);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    if (iVar3 == 0) goto LAB_00011002;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + 1;
LAB_00011002:
  if (iVar3 != 0) {
    mpi_obj_referenced();
  }
  return iVar3 != 0;
}



/* ===== mpi_init @ 00011010 size=24 ===== */

int mpi_init(void)

{
  int iVar1;
  
  iVar1 = mpi_list_init();
  if (-1 < iVar1) {
    mpi_fs_init();
    vlog_probe(DAT_00011028);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== mpi_deinit @ 0001102c size=14 ===== */

void mpi_deinit(void)

{
  mpi_fs_exit();
  mpi_list_deinit();
  return;
}



/* ===== mpi_node_set_out_frame_rate @ 0001103c size=4 ===== */

undefined4 mpi_node_set_out_frame_rate(void)

{
  return 0;
}



/* ===== mpi_node_cleanup_in_buffer @ 00011040 size=48 ===== */

void mpi_node_cleanup_in_buffer(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  if ((param_2 != 0) ||
     ((*(int *)(param_1 + 300) == 0 && (uVar1 = 0, *(int *)(param_1 + 0x130) == 0)))) {
    disableIRQinterrupts();
    if (*(int *)(param_1 + 0x144) != 0) {
      mpi_queue_destroy(*(int *)(param_1 + 0x144),0,param_3,uVar1,param_4);
      *(undefined4 *)(param_1 + 0x144) = 0;
    }
  }
  return;
}



/* ===== mpi_node_cleanup_out_buffer @ 00011070 size=48 ===== */

void mpi_node_cleanup_out_buffer(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  if ((param_2 != 0) ||
     ((*(int *)(param_1 + 0x138) == 0 && (uVar1 = 0, *(int *)(param_1 + 0x13c) == 0)))) {
    disableIRQinterrupts();
    if (*(int *)(param_1 + 0x148) != 0) {
      mpi_queue_destroy(*(int *)(param_1 + 0x148),0,param_3,uVar1,param_4);
      *(undefined4 *)(param_1 + 0x148) = 0;
    }
  }
  return;
}



/* ===== mpi_node_streamon @ 000110a0 size=116 ===== */

int mpi_node_streamon(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_1[0xb];
  if ((((param_1[3] & 0xc00) != 0) || (param_1 == (undefined4 *)0x0)) || ((param_1[3] & 6) != 2)) {
    return -1;
  }
  mpi_obj_ref();
  if ((param_1[3] & 0x1000) == 0) {
    vlog(0,5,DAT_00011114,DAT_00011118,0x160,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,param_4);
    if (*(code **)(iVar1 + 0x50) != (code *)0x0) {
      iVar1 = (**(code **)(iVar1 + 0x50))(param_1,5,0);
      if (iVar1 == 0) {
        param_1[3] = param_1[3] | 0x1000;
      }
      goto LAB_000110ce;
    }
  }
  iVar1 = 0;
LAB_000110ce:
  mpi_obj_unref(param_1);
  return iVar1;
}



/* ===== mpi_node_stream_pause @ 0001111c size=48 ===== */

undefined4 mpi_node_stream_pause(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || ((*(uint *)(param_1 + 0xc) & 6) != 2)) {
    uVar1 = 0xffffffff;
  }
  else {
    mpi_obj_ref();
    if ((int)(*(uint *)(param_1 + 0xc) << 0x13) < 0) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffefff;
    }
    mpi_obj_unref(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== mpi_node_streamoff @ 0001114c size=122 ===== */

undefined4 mpi_node_streamoff(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[0xb];
  if ((param_1 == (undefined4 *)0x0) || ((param_1[3] & 6) != 2)) {
    uVar1 = 0xffffffff;
  }
  else {
    mpi_obj_ref();
    if ((int)(param_1[3] << 0x13) < 0) {
      vlog(0,5,DAT_000111c8,DAT_000111cc,0x181,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1);
      param_1[3] = param_1[3] & 0xffffefff;
      if (*(code **)(iVar2 + 0x50) != (code *)0x0) {
        (**(code **)(iVar2 + 0x50))(param_1,6,0);
      }
      disableIRQinterrupts();
      complete_all(param_1 + 0x53);
      complete_all(param_1 + 0x56);
    }
    mpi_obj_unref(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== mpi_node_flush @ 000111d0 size=154 ===== */

undefined4 mpi_node_flush(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  iVar3 = param_1[0xb];
  disableIRQinterrupts();
  if ((param_1[3] & 0x800) == 0) {
    param_1[0x48] = 0;
    param_1[3] = param_1[3] | 0x800;
    if ((int)(param_1[3] << 0x13) < 0) {
      mpi_node_streamoff(param_1,0,
                         (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) <<
                         0x1b);
    }
    vlog(0,5,DAT_0001126c,DAT_00011270,0x2e8,*(undefined4 *)(iVar3 + 0x2c),*param_1);
    if (param_1[0x47] != 0) {
      mpi_queue_flush(param_1[0x47],param_2,0);
    }
    pcVar2 = *(code **)(iVar3 + 0x50);
    if (pcVar2 != (code *)0x0) {
      if (param_2 == 0) {
        uVar1 = 2;
      }
      else {
        uVar1 = 3;
      }
      (*pcVar2)(param_1,uVar1,0);
    }
    disableIRQinterrupts();
    complete_all(param_1 + 0x48);
    param_1[3] = param_1[3] & 0xfffff7ff;
  }
  else {
    wait_for_completion(param_1 + 0x48);
  }
  return 0;
}



/* ===== mpi_node_unbind @ 00011274 size=136 ===== */

void mpi_node_unbind(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  vlog(0,5,DAT_000112fc,DAT_00011300,0x31b,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,
       *(undefined4 *)(param_2[0xb] + 0x2c),*param_2);
  mpi_node_flush(param_2,1);
  mpi_node_streamoff(param_2);
  if ((int)(param_2[3] << 0x12) < 0) {
    param_2[3] = param_2[3] & 0xffffdfff;
    if (*(code **)(param_2[0xb] + 0x48) != (code *)0x0) {
      uVar1 = (**(code **)(param_2[0xb] + 0x48))(param_2[0x42],0);
      param_2[0x42] = uVar1;
    }
    iVar2 = mpi_list_del_obj_rcu(param_1 + 0x45,param_2);
    if (iVar2 == 0) {
      mpi_obj_unref(param_2);
    }
    iVar2 = mpi_list_del_obj_rcu(param_2 + 0x43,param_1);
    if (iVar2 == 0) {
      mpi_obj_unref(param_1);
      return;
    }
  }
  return;
}



/* ===== mpi_node_bind @ 00011304 size=216 ===== */

undefined4 mpi_node_bind(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) || ((param_1[3] & 6) != 2)) {
    uVar1 = 0xffffffff;
  }
  else {
    mpi_obj_ref();
    if ((param_2 == (undefined4 *)0x0) || ((param_2[3] & 6) != 2)) {
      uVar1 = 0xffffffff;
    }
    else {
      mpi_obj_ref(param_2);
      if (((int)(param_1[3] << 0x15) < 0) || ((param_2[3] & 0x2400) != 0)) {
        uVar1 = 0xffffffff;
      }
      else {
        mpi_list_add_tail_obj_rcu(param_1 + 0x45,param_2);
        mpi_obj_ref(param_1);
        mpi_list_add_tail_obj_rcu(param_2 + 0x43,param_1);
        mpi_obj_ref(param_2);
        param_2[3] = param_2[3] | 0x2000;
        if (*(code **)(param_2[0xb] + 0x48) != (code *)0x0) {
          uVar1 = (**(code **)(param_2[0xb] + 0x48))(param_2[0x42],param_1);
          param_2[0x42] = uVar1;
        }
        vlog(0,5,DAT_000113dc,DAT_000113e0,0x35a,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,
             *(undefined4 *)(param_2[0xb] + 0x2c),*param_2);
        if ((int)(param_2[3] << 0x11) < 0) {
          mpi_node_streamon(param_2);
        }
        uVar1 = 0;
        if ((param_1[3] & 0x4000) != 0) {
          uVar1 = 0;
          mpi_node_streamon(param_1);
        }
      }
      mpi_obj_unref(param_2);
    }
    mpi_obj_unref(param_1);
  }
  return uVar1;
}



/* ===== mpi_node_set_params @ 000113e4 size=68 ===== */

int mpi_node_set_params(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int unaff_r5;
  
  if ((param_1 == 0) || ((*(uint *)(param_1 + 0xc) & 6) != 2)) {
    unaff_r5 = -1;
  }
  else {
    mpi_obj_ref();
    if ((*(int *)(param_1 + 0x2c) != 0) &&
       ((pcVar1 = *(code **)(*(int *)(param_1 + 0x2c) + 0x50), pcVar1 != (code *)0x0 &&
        (unaff_r5 = (*pcVar1)(param_1,4,param_2), unaff_r5 == 0)))) {
      if (*(int *)(param_1 + 0x50) != 0) {
        kfree();
      }
      *(undefined4 *)(param_1 + 0x50) = param_2;
    }
    mpi_obj_unref(param_1);
  }
  return unaff_r5;
}



/* ===== _mpi_job_discard @ 00011428 size=20 ===== */

void _mpi_job_discard(undefined4 param_1)

{
  mpi_job_cancel(param_1,1);
  mpi_obj_unref(param_1);
  return;
}



/* ===== __init_completion @ 0001143c size=14 ===== */

void __init_completion(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001144c;
  *param_1 = 0;
  __init_swait_queue_head(param_1 + 1,DAT_00011450,uVar1);
  return;
}



/* ===== mpi_dev_run_job @ 00011454 size=186 ===== */

uint mpi_dev_run_job(int param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if ((param_1 == 0) || ((*(uint *)(param_1 + 0xc) & 6) != 2)) {
    return 0;
  }
  uVar5 = 0;
  for (puVar4 = *(undefined4 **)(param_1 + 0x58); puVar4 != (undefined4 *)(param_1 + 0x58);
      puVar4 = (undefined4 *)*puVar4) {
    uVar1 = uVar5;
    if ((((puVar4[0x3b] != 0) && (uVar3 = mpi_queue_front_obj(), uVar3 != 0)) &&
        (*(int *)(uVar3 + 0x44) == 2)) &&
       ((uVar1 = uVar3, uVar5 != 0 && (uVar1 = uVar5, param_2 != (code *)0x0)))) {
      iVar2 = (*param_2)(uVar5,uVar3);
      uVar1 = uVar5 & ~(iVar2 >> 0x20);
      if (iVar2 < 0) {
        uVar1 = uVar3;
      }
    }
    uVar5 = uVar1;
  }
  uVar1 = mpi_job_pool_choose_job(*(undefined4 *)(param_1 + 0x54),0,param_2,puVar4,param_4);
  if (uVar1 == 0) {
    uVar1 = uVar5;
    if (uVar5 == 0) {
      return 0;
    }
  }
  else if ((uVar5 != 0) && (param_2 != (code *)0x0)) {
    iVar2 = (*param_2)(uVar1,uVar5);
    uVar1 = uVar1 & ~(iVar2 >> 0x20);
    if (iVar2 < 0) {
      uVar1 = uVar5;
    }
  }
  iVar2 = *(int *)(uVar1 + 0x30);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 6) == 2)) {
    if ((*(int *)(iVar2 + 0x11c) != 0) &&
       (iVar2 = mpi_queue_try_pop_obj(*(int *)(iVar2 + 0x11c),uVar1), iVar2 == 0)) {
      return 0;
    }
    mpi_obj_unref(uVar1);
  }
  iVar2 = mpi_job_set_running(uVar1);
  if (iVar2 < 0) {
    return 0;
  }
  return uVar1;
}



/* ===== mpi_dev_register @ 0001150e size=92 ===== */

undefined4 mpi_dev_register(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x58;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x5c) = iVar2;
  uVar1 = kstrdup(param_3,0xcc0,param_3,iVar2,param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  mpi_obj_register(param_1,0,param_2 | 0x40);
  iVar2 = mpi_job_pool_create(param_1,10);
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar2 == 0) {
    mpi_obj_unregister(param_1);
    uVar1 = 0xffffffff;
  }
  else {
    vlog(0,5,DAT_0001156c,DAT_00011570,0x4c7,*(undefined4 *)(param_1 + 0x2c));
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== mpi_node_set_in_frame_rate @ 00011574 size=280 ===== */

void mpi_node_set_in_frame_rate(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int extraout_r1;
  int extraout_r1_00;
  byte *pbVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  byte local_42 [30];
  int local_24;
  
  piVar2 = DAT_0001168c;
  local_24 = *DAT_0001168c;
  if (((param_3 < 0) || (param_2 < param_3)) || (0x1d < param_2 - 1U)) {
    uVar3 = 0xffffffff;
  }
  else {
    if (param_3 == 0) {
      puVar4 = (undefined1 *)(param_1 + 0x84);
      do {
        puVar7 = puVar4 + 1;
        *puVar4 = 1;
        puVar4 = puVar7;
      } while (puVar7 != (undefined1 *)(param_1 + 0x84) + param_2);
    }
    else {
      *(int *)(param_1 + 0x80) = param_2;
      uVar10 = __aeabi_idivmod(param_2,param_3);
      if ((int)((ulonglong)uVar10 >> 0x20) == 0) {
        iVar8 = 0;
        iVar6 = param_1 + 0x84;
        do {
          __aeabi_idivmod(iVar8,(int)uVar10);
          iVar8 = iVar8 + 1;
          *(bool *)iVar6 = extraout_r1 != 0;
          iVar6 = iVar6 + 1;
        } while (param_2 != iVar8);
      }
      else {
        iVar8 = param_2 - param_3;
        uVar10 = __aeabi_idivmod(param_2,iVar8);
        if ((int)((ulonglong)uVar10 >> 0x20) == 0) {
          iVar8 = 0;
          iVar6 = param_1 + 0x84;
          do {
            __aeabi_idivmod(iVar8,(int)uVar10);
            iVar8 = iVar8 + 1;
            *(bool *)iVar6 = extraout_r1_00 == 0;
            iVar6 = iVar6 + 1;
          } while (param_2 != iVar8);
        }
        else if (param_3 < param_2) {
          iVar6 = 0;
          pbVar5 = local_42;
          do {
            iVar6 = iVar6 + 1;
            *pbVar5 = 0;
            pbVar5 = pbVar5 + 1;
          } while (iVar6 < param_3);
          do {
            iVar6 = 0;
            pbVar5 = local_42;
            do {
              iVar6 = iVar6 + 1;
              *pbVar5 = *pbVar5 + 1;
              if (iVar6 == iVar8) break;
              pbVar5 = pbVar5 + 1;
            } while (iVar6 < param_3);
            iVar8 = iVar8 - iVar6;
          } while (iVar8 != 0);
          iVar8 = 0;
          iVar6 = 0;
          pbVar5 = local_42;
          do {
            *(undefined1 *)(param_1 + iVar8 + 0x84) = 0;
            bVar1 = *pbVar5;
            puVar4 = (undefined1 *)(iVar8 + 0x85 + param_1);
            for (iVar9 = 0; iVar9 < (int)(uint)bVar1; iVar9 = iVar9 + 1) {
              *puVar4 = 1;
              puVar4 = puVar4 + 1;
            }
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + bVar1 + 1;
            pbVar5 = pbVar5 + 1;
          } while (iVar6 < param_3);
          *(undefined1 *)(param_1 + iVar8 + 0x84) = 0;
        }
      }
    }
    uVar3 = 0;
  }
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== mpi_node_add_in_watcher @ 00011690 size=104 ===== */

void mpi_node_add_in_watcher(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    vlog(0,5,DAT_000116f8,DAT_000116fc,0xbf,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,param_2);
    disableIRQinterrupts();
    iVar2 = param_1[0x4b];
    param_1[0x4b] = iVar2 + 1;
    if ((0 < param_2) && (iVar2 + 1 != 0)) {
      uVar1 = mpi_queue_create(param_2,4,DAT_00011700);
      param_1[0x5b] = param_2;
      param_1[0x5d] = 0;
      param_1[0x51] = uVar1;
    }
  }
  return;
}



/* ===== mpi_node_add_in_filter @ 00011704 size=108 ===== */

void mpi_node_add_in_filter(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    vlog(0,5,DAT_00011770,DAT_00011774,0xc0,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,param_2);
    disableIRQinterrupts();
    param_1[0x4c] = param_1[0x4c] + 1;
    if ((0 < param_2) && (param_1[0x4b] != 0)) {
      uVar1 = mpi_queue_create(param_2,4,DAT_00011778);
      param_1[0x5b] = param_2;
      param_1[0x5d] = 0;
      param_1[0x51] = uVar1;
    }
  }
  return;
}



/* ===== mpi_node_add_out_watcher @ 0001177c size=104 ===== */

void mpi_node_add_out_watcher(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    vlog(0,5,DAT_000117e4,DAT_000117e8,0xc1,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,param_2);
    disableIRQinterrupts();
    iVar2 = param_1[0x4e];
    param_1[0x4e] = iVar2 + 1;
    if ((0 < param_2) && (iVar2 + 1 != 0)) {
      uVar1 = mpi_queue_create(param_2,4,DAT_000117ec);
      param_1[0x5c] = param_2;
      param_1[0x5e] = 0;
      param_1[0x52] = uVar1;
    }
  }
  return;
}



/* ===== mpi_node_add_out_filter @ 000117f0 size=108 ===== */

void mpi_node_add_out_filter(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    vlog(0,5,DAT_0001185c,DAT_00011860,0xc2,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,param_2);
    disableIRQinterrupts();
    param_1[0x4f] = param_1[0x4f] + 1;
    if ((0 < param_2) && (param_1[0x4e] != 0)) {
      uVar1 = mpi_queue_create(param_2,4,DAT_00011864);
      param_1[0x5c] = param_2;
      param_1[0x5e] = 0;
      param_1[0x52] = uVar1;
    }
  }
  return;
}



/* ===== mpi_node_del_in_watcher @ 00011868 size=68 ===== */

void mpi_node_del_in_watcher
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    vlog(0,5,DAT_000118ac,DAT_000118b0,0xc3,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,param_4);
    if (param_1[0x4b] != 0) {
      param_1[0x4b] = param_1[0x4b] + -1;
    }
    mpi_node_cleanup_in_buffer(param_1,0);
  }
  return;
}



/* ===== mpi_node_del_in_filter @ 000118b4 size=68 ===== */

void mpi_node_del_in_filter
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    vlog(0,5,DAT_000118f8,DAT_000118fc,0xc4,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,param_4);
    if (param_1[0x4c] != 0) {
      param_1[0x4c] = param_1[0x4c] + -1;
    }
    mpi_node_cleanup_in_buffer(param_1,0);
  }
  return;
}



/* ===== mpi_node_del_out_watcher @ 00011900 size=68 ===== */

void mpi_node_del_out_watcher
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    vlog(0,5,DAT_00011944,DAT_00011948,0xc5,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,param_4);
    if (param_1[0x4e] != 0) {
      param_1[0x4e] = param_1[0x4e] + -1;
    }
    mpi_node_cleanup_out_buffer(param_1,0);
  }
  return;
}



/* ===== mpi_node_del_out_filter @ 0001194c size=68 ===== */

void mpi_node_del_out_filter
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    vlog(0,5,DAT_00011990,DAT_00011994,0xc6,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,param_4);
    if (param_1[0x4f] != 0) {
      param_1[0x4f] = param_1[0x4f] + -1;
    }
    mpi_node_cleanup_out_buffer(param_1,0);
  }
  return;
}



/* ===== mpi_node_enable_auto_streamon @ 00011998 size=26 ===== */

void mpi_node_enable_auto_streamon(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xc) = uVar1 & 0xffffbfff;
  }
  else {
    *(uint *)(param_1 + 0xc) = uVar1 | 0x4000;
    if ((int)(uVar1 << 0x12) < 0) {
      mpi_node_streamon();
      return;
    }
  }
  return;
}



/* ===== mpi_dev_request_job @ 000119b2 size=66 ===== */

int mpi_dev_request_job(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  vlog(0,5,DAT_000119f4,DAT_000119f8,0x421,*(undefined4 *)(param_1 + 0x2c),param_3);
  if ((param_1 == 0) || ((*(uint *)(param_1 + 0xc) & 6) != 2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = mpi_job_pool_request_job(*(undefined4 *)(param_1 + 0x54));
    if (iVar1 != 0) {
      mpi_obj_ref(param_1);
      *(int *)(iVar1 + 0x2c) = param_1;
    }
  }
  return iVar1;
}



/* ===== mpi_dev_request_job_for_node @ 000119fc size=74 ===== */

int mpi_dev_request_job_for_node(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  vlog(0,5,DAT_00011a48,DAT_00011a4c,0x43b,*(undefined4 *)(param_1 + 0x2c),*param_2);
  if ((param_2 == (undefined4 *)0x0) || ((param_2[3] & 6) != 2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = mpi_dev_request_job(param_1);
    if (iVar1 != 0) {
      mpi_obj_ref(param_2);
      *(undefined4 **)(iVar1 + 0x30) = param_2;
    }
  }
  return iVar1;
}



/* ===== atomic_add.constprop.23 @ 00011a50 size=24 ===== */

void atomic_add_constprop_23(int *param_1)

{
  bool bVar1;
  
  HintPreloadData(param_1);
  do {
    ExclusiveAccess(param_1);
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + 1;
  return;
}



/* ===== mpi_node_destroy @ 00011a68 size=346 ===== */

void mpi_node_destroy(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  vlog(0,5,DAT_00011bc4,DAT_00011bc8,0x398,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1);
  disableIRQinterrupts();
  iVar2 = param_1[0xc];
  piVar3 = (int *)param_1[0xd];
  *(int **)(iVar2 + 4) = piVar3;
  *piVar3 = iVar2;
  param_1[0xc] = 0x100;
  param_1[0xd] = 0x122;
  param_1[3] = param_1[3] | 0x400;
  mpi_node_flush(param_1,1);
  if (param_1 != (undefined4 *)0x0) {
    mpi_obj_ref(param_1);
  }
  param_1[3] = param_1[3] & 0xfffffffd;
  synchronize_rcu();
  if (param_1[0xf] != 0) {
    mpi_buf_pool_del_user(param_1[0xf],param_1);
  }
  while (iVar2 = mpi_list_pop_obj_rcu(param_1 + 0x43), iVar2 != 0) {
    mpi_node_unbind(iVar2,param_1);
    mpi_obj_unref(iVar2);
  }
  while (iVar2 = mpi_list_pop_obj_rcu(param_1 + 0x45), iVar2 != 0) {
    mpi_node_unbind(param_1,iVar2);
    mpi_obj_unref(iVar2);
  }
  if (param_1[0x47] != 0) {
    mpi_queue_destroy(param_1[0x47],0);
  }
  disableIRQinterrupts();
  if (param_1[0x42] != 0) {
    param_1[0x42] = 0;
    if (*(code **)(param_1[0xb] + 0x4c) != (code *)0x0) {
      (**(code **)(param_1[0xb] + 0x4c))();
    }
  }
  piVar3 = (int *)param_1[6];
  piVar4 = piVar3 + 1;
  atomic_add_constprop_23(piVar3);
  atomic_add_constprop_23(piVar4);
  if (param_1[4] == 0) {
    complete_all(piVar3 + 2);
  }
  HintPreloadData(piVar4);
  mpi_obj_unref(param_1);
  wait_for_completion(piVar3 + 2);
  do {
    ExclusiveAccess(piVar4);
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = *piVar4 + -1;
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    kfree(piVar3);
  }
  mpi_node_cleanup_in_buffer(param_1,1);
  mpi_node_cleanup_out_buffer(param_1,1);
  if (param_1[0x14] != 0) {
    kfree();
  }
  mpi_obj_unregister(param_1);
  return;
}



/* ===== mpi_dev_create_node_with_params @ 00011bcc size=308 ===== */

undefined4 * mpi_dev_create_node_with_params(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  byte in_Q;
  int iVar12;
  int iVar13;
  
  if ((param_1 == 0) || ((*(uint *)(param_1 + 0xc) & 6) != 2)) {
    return (undefined4 *)0x0;
  }
  iVar2 = param_1;
  uVar4 = param_2;
  iVar12 = param_3;
  iVar13 = param_4;
  mpi_obj_ref();
  iVar3 = DAT_00011d00;
  puVar1 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00011d00 + 0x24),0xdc0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x13] = 0xffffffff;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar7 = DAT_00011d04;
    puVar1[0xb] = param_1;
    puVar1[0xe] = param_2;
    uVar6 = *puVar7;
    puVar1[0x2d] = uVar6;
    puVar1[0x1f] = uVar6;
    uVar6 = DAT_00011d08;
    puVar1[0x59] = DAT_00011d08;
    puVar1[0x5a] = uVar6;
    puVar1[0x43] = puVar1 + 0x43;
    puVar1[0x44] = puVar1 + 0x43;
    puVar7 = puVar1 + 0x45;
    puVar1[0x45] = puVar7;
    puVar1[0x46] = puVar7;
    cVar10 = '\x01';
    cVar11 = '\0';
    if (param_3 != 0) {
      iVar2 = mpi_queue_create(param_3,2,DAT_00011d0c,puVar7,iVar2,uVar4,iVar12,iVar13);
      puVar1[0x47] = iVar2;
      if (iVar2 == 0) {
        kfree(puVar1);
        puVar1 = (undefined4 *)0x0;
        goto LAB_00011c68;
      }
    }
    iVar3 = kmem_cache_alloc(*(undefined4 *)(iVar3 + 4),0xdc0);
    puVar1[0x14] = iVar3;
    if (iVar3 == 0) {
      kfree(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    else {
      __init_completion(puVar1 + 0x48);
      __init_completion(puVar1 + 0x53);
      __init_completion(puVar1 + 0x56);
      cVar9 = '\0';
      cVar8 = '\0';
      mpi_obj_register(puVar1,1,0x60,0);
      iVar3 = (uint)(byte)(cVar8 << 4 | cVar9 << 3 | cVar10 << 2 | cVar11 << 1 | in_Q) << 0x1b;
      disableIRQinterrupts();
      piVar5 = *(int **)(param_1 + 0x5c);
      *(undefined4 **)(param_1 + 0x5c) = puVar1 + 0xc;
      puVar1[0xc] = param_1 + 0x58;
      puVar1[0xd] = piVar5;
      *piVar5 = (int)(puVar1 + 0xc);
      if (param_4 != 0) {
        mpi_node_set_params(puVar1,param_4);
        iVar3 = extraout_r1;
      }
      if (*(code **)(param_1 + 0x44) != (code *)0x0) {
        uVar4 = (**(code **)(param_1 + 0x44))(puVar1,iVar3);
        puVar1[0x42] = uVar4;
      }
      vlog(0,5,DAT_00011d10,DAT_00011d14,0x40f,*(undefined4 *)(param_1 + 0x2c),*puVar1);
    }
  }
LAB_00011c68:
  mpi_obj_unref(param_1);
  return puVar1;
}



/* ===== mpi_dev_unregister @ 00011d18 size=206 ===== */

undefined4 mpi_dev_unregister(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  vlog(0,5,DAT_00011de8,DAT_00011dec,0x496,*(undefined4 *)(param_1 + 0x2c),param_3);
  if (param_1 != 0) {
    mpi_obj_ref(param_1);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
  synchronize_rcu();
  piVar3 = *(int **)(param_1 + 0x58);
  piVar5 = (int *)*piVar3;
  while (piVar2 = piVar5, piVar3 != (int *)(param_1 + 0x58)) {
    mpi_node_destroy();
    piVar5 = (int *)*piVar2;
    piVar3 = piVar2;
  }
  mpi_job_pool_destroy(*(undefined4 *)(param_1 + 0x54));
  piVar3 = *(int **)(param_1 + 0x18);
  piVar5 = piVar3 + 1;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  atomic_add_constprop_23(piVar3);
  atomic_add_constprop_23(piVar5);
  if (*(int *)(param_1 + 0x10) == 0) {
    complete_all(piVar3 + 2);
  }
  HintPreloadData(piVar5);
  mpi_obj_unref(param_1);
  wait_for_completion(piVar3 + 2);
  do {
    ExclusiveAccess(piVar5);
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = *piVar5 + -1;
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    kfree(piVar3);
  }
  kfree(*(undefined4 *)(param_1 + 0x2c));
  mpi_obj_unregister(param_1);
  return 0;
}



/* ===== add_user_to_buf @ 00011df0 size=72 ===== */

void add_user_to_buf(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x4c) == -1) {
      iVar1 = 0;
      while( true ) {
        *(int *)(param_1 + 0x4c) = iVar1;
        iVar1 = *(int *)(param_1 + 0x4c);
        if (0xf < iVar1) break;
        if (*(int *)(param_2 + iVar1 * 4 + 0x44) == -1) goto LAB_00011e00;
        iVar1 = iVar1 + 1;
      }
    }
    if (0x10 < *(int *)(param_1 + 0x4c)) {
      *(undefined4 *)(param_1 + 0x4c) = 0xfffffffe;
    }
LAB_00011e00:
    if (-1 < *(int *)(param_1 + 0x4c)) {
      if (param_3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 0x10;
      }
      *(int *)(param_2 + (*(int *)(param_1 + 0x4c) + iVar1) * 4 + 0x44) = param_1;
    }
  }
  return;
}



/* ===== mpi_node_buffer_in @ 00011e38 size=426 ===== */

void mpi_node_buffer_in(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int extraout_r1;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint local_38;
  int local_34;
  int local_30;
  int local_28 [2];
  int local_20;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if ((param_1[3] & 6) != 2) {
    return;
  }
  ktime_get_ts64(param_1 + 0x38);
  mpi_obj_ref(param_1);
  if (-1 < (int)(param_1[3] << 0x13)) goto LAB_00011efa;
  uVar2 = *param_2;
  uVar5 = *param_1;
  uVar6 = *(undefined4 *)(param_1[0xb] + 0x2c);
  uVar4 = DAT_00011fe8;
  if (param_3 == 0) {
    uVar4 = DAT_00011fe4;
  }
  vlog(0,5,DAT_00011fec,DAT_00011ff0,0x1d5,uVar6,uVar5,uVar2,uVar4);
  if ((param_3 == 0) && ((param_1[0x4b] != 0 || (param_1[0x4c] != 0)))) {
    disableIRQinterrupts();
    if (param_1[0x4b] != 0) {
      if (param_2 != (undefined4 *)0x0) {
        mpi_obj_ref(param_2);
      }
      if ((uint)param_1[0x5d] < (uint)param_1[0x5b]) {
        iVar3 = mpi_queue_push_obj(param_1[0x51],param_2);
        if (iVar3 == 0) {
          uVar8 = 0x1e0;
LAB_00011f4a:
          vlog(0,2,DAT_00011ffc,DAT_00011ff0,uVar8,uVar6,uVar5,uVar2,uVar4);
LAB_00011f5e:
          mpi_obj_unref(param_2);
        }
        else {
          param_1[0x5d] = param_1[0x5d] + 1;
        }
      }
      else {
        iVar3 = mpi_queue_pop_obj(param_1[0x51]);
        if (iVar3 == 0) goto LAB_00011f5e;
        mpi_obj_unref();
        iVar3 = mpi_queue_push_obj(param_1[0x51],param_2);
        if (iVar3 == 0) {
          uVar8 = 0x1eb;
          goto LAB_00011f4a;
        }
      }
      complete_all(param_1 + 0x53);
    }
    if (param_1[0x4c] != 0) {
      if ((code *)param_1[0x4d] != (code *)0x0) {
        (*(code *)param_1[0x4d])(param_1,param_2);
      }
      goto LAB_00011efa;
    }
  }
  piVar1 = DAT_00012000;
  if (param_1[0x20] == 0) {
LAB_00011f96:
    uVar4 = add_user_to_buf(param_1,param_2,0);
    iVar3 = (**(code **)(param_1[0xb] + 0x50))(uVar4,1,param_2);
    iVar7 = param_1[0x1c];
    param_1[0x1b] = param_1[0x1b] + 1;
    param_1[0x1c] = iVar7 + 1;
    if (iVar3 != 0) {
      param_1[0x1d] = param_1[0x1d] + 1;
    }
  }
  else {
    iVar3 = param_1[0x1b];
    __aeabi_idivmod(iVar3);
    if (*(char *)((int)param_1 + extraout_r1 + 0x84) == '\0') goto LAB_00011f96;
    iVar7 = param_1[0x1c];
    param_1[0x1b] = iVar3 + 1;
    param_1[0x1c] = iVar7 + 1;
  }
  if ((300 - *piVar1) + param_1[0x1f] < 0) {
    iVar3 = *piVar1;
    param_1[0x1e] = iVar7;
    param_1[0x1f] = iVar3;
    param_1[0x1c] = 0;
  }
LAB_00011efa:
  ktime_get_ts64(&local_38);
  set_normalized_timespec64
            (local_28,local_34,local_38 - param_1[0x38],
             (local_34 - param_1[0x39]) - (uint)(local_38 < (uint)param_1[0x38]),
             local_30 - param_1[0x3a],local_30 - param_1[0x3a] >> 0x1f);
  param_1[0x40] =
       DAT_00011ff8 * local_28[0] +
       ((int)((longlong)local_20 * (longlong)DAT_00011ff4 >> 0x26) - (local_20 >> 0x1f));
  mpi_obj_unref(param_1);
  return;
}



/* ===== mpi_node_get_in_buffer @ 00012004 size=208 ===== */

undefined4 * mpi_node_get_in_buffer(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if ((param_1 == (undefined4 *)0x0) || ((param_1[3] & 6) != 2)) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    mpi_obj_ref();
    bVar2 = false;
    if (param_2 == 0) goto LAB_00012072;
    do {
      uVar3 = DAT_000120d4;
      disableIRQinterrupts();
      if ((param_1[3] & 0x1000) == 0) {
        param_1[0x53] = 0;
        lVar1 = (ulonglong)(uint)param_1[0x59] * (ulonglong)uVar3;
        wait_for_completion_interruptible_timeout
                  (param_1 + 0x53,(uint)((ulonglong)lVar1 >> 0x21),(int)lVar1);
        puVar5 = (undefined4 *)0x0;
        goto LAB_00012050;
      }
      param_1[0x53] = 0;
      bVar2 = true;
      lVar1 = (ulonglong)(uint)param_1[0x59] * (ulonglong)uVar3;
      wait_for_completion_interruptible_timeout
                (param_1 + 0x53,(uint)((ulonglong)lVar1 >> 0x21),(int)lVar1);
LAB_00012072:
      disableIRQinterrupts();
      if (param_1[0x4b] == 0) break;
      puVar5 = (undefined4 *)mpi_queue_pop_obj(param_1[0x51]);
      if (puVar5 != (undefined4 *)0x0) {
        uVar4 = DAT_000120dc;
        if (!bVar2) {
          uVar4 = DAT_000120d8;
        }
        vlog(0,5,DAT_000120e4,DAT_000120e0,0x272,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,uVar4
             ,*puVar5);
        goto LAB_00012080;
      }
    } while (!bVar2);
    puVar5 = (undefined4 *)0x0;
LAB_00012080:
    add_user_to_buf(param_1,puVar5,1);
LAB_00012050:
    mpi_obj_unref(param_1);
  }
  return puVar5;
}



/* ===== mpi_node_pick_in_buffer @ 000120e8 size=30 ===== */

undefined4
mpi_node_pick_in_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  mpi_node_add_in_watcher(param_1,1,param_3,param_4,param_4);
  uVar1 = mpi_node_get_in_buffer(param_1,1);
  mpi_node_del_in_watcher(param_1);
  return uVar1;
}



/* ===== mpi_node_get_out_buffer @ 00012106 size=208 ===== */

undefined4 * mpi_node_get_out_buffer(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if ((param_1 == (undefined4 *)0x0) || ((param_1[3] & 6) != 2)) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    mpi_obj_ref();
    bVar2 = false;
    if (param_2 == 0) goto LAB_00012174;
    do {
      uVar3 = DAT_000121d8;
      disableIRQinterrupts();
      if ((param_1[3] & 0x1000) == 0) {
        param_1[0x56] = 0;
        lVar1 = (ulonglong)(uint)param_1[0x5a] * (ulonglong)uVar3;
        wait_for_completion_interruptible_timeout
                  (param_1 + 0x56,(uint)((ulonglong)lVar1 >> 0x21),(int)lVar1);
        puVar5 = (undefined4 *)0x0;
        goto LAB_00012152;
      }
      param_1[0x56] = 0;
      bVar2 = true;
      lVar1 = (ulonglong)(uint)param_1[0x5a] * (ulonglong)uVar3;
      wait_for_completion_interruptible_timeout
                (param_1 + 0x56,(uint)((ulonglong)lVar1 >> 0x21),(int)lVar1);
LAB_00012174:
      disableIRQinterrupts();
      if (param_1[0x4e] == 0) break;
      puVar5 = (undefined4 *)mpi_queue_pop_obj(param_1[0x52]);
      if (puVar5 != (undefined4 *)0x0) {
        uVar4 = DAT_000121e0;
        if (!bVar2) {
          uVar4 = DAT_000121dc;
        }
        vlog(0,5,DAT_000121e8,DAT_000121e4,0x2a7,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,uVar4
             ,*puVar5);
        goto LAB_00012182;
      }
    } while (!bVar2);
    puVar5 = (undefined4 *)0x0;
LAB_00012182:
    add_user_to_buf(param_1,puVar5,1);
LAB_00012152:
    mpi_obj_unref(param_1);
  }
  return puVar5;
}



/* ===== mpi_node_pick_out_buffer @ 000121ec size=30 ===== */

undefined4
mpi_node_pick_out_buffer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  mpi_node_add_out_watcher(param_1,1,param_3,param_4,param_4);
  uVar1 = mpi_node_get_out_buffer(param_1,1);
  mpi_node_del_out_watcher(param_1);
  return uVar1;
}



/* ===== mpi_node_request_buf @ 0001220a size=134 ===== */

undefined4 * mpi_node_request_buf(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[0xf];
  if ((param_1 == (undefined4 *)0x0) || ((param_1[3] & 6) != 2)) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *param_2;
    }
    vlog(0,5,DAT_00012290,DAT_00012294,0x2c1,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,uVar1);
    puVar2 = (undefined4 *)mpi_buf_pool_request_buf(puVar3,param_2);
    if (puVar2 != (undefined4 *)0x0) {
      vlog(0,5,DAT_00012298,DAT_00012294,0x2c7,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,*puVar2
           ,*puVar3);
      param_1[0x12] = puVar3[0x10];
    }
    add_user_to_buf(param_1,puVar2,0);
  }
  return puVar2;
}



/* ===== remove_user_from_buf @ 0001229c size=30 ===== */

void remove_user_from_buf(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (-1 < *(int *)(param_1 + 0x4c))) {
    if (param_3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0x10;
    }
    *(undefined4 *)(param_2 + (*(int *)(param_1 + 0x4c) + iVar1 + 0x10) * 4 + 4) = 0;
  }
  return;
}



/* ===== mpi_node_release_buffer_flag @ 000122ba size=70 ===== */

void mpi_node_release_buffer_flag(int param_1,undefined4 param_2,int *param_3)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0xc) & 6) == 2)) {
    mpi_obj_ref();
    disableIRQinterrupts();
    remove_user_from_buf(param_1,param_2,1);
    mpi_obj_unref(param_2);
    if (param_3 != (int *)0x0) {
      *param_3 = *param_3 + -1;
    }
    mpi_obj_unref(param_1);
    return;
  }
  return;
}



/* ===== mpi_node_buffer_out @ 00012300 size=414 ===== */

void mpi_node_buffer_out(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint local_38;
  int local_34;
  int local_30;
  int local_28 [2];
  int local_20;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if ((param_1[3] & 6) != 2) {
    return;
  }
  ktime_get_ts64(param_1 + 0x3c);
  mpi_obj_ref(param_1);
  uVar2 = *param_2;
  uVar4 = *param_1;
  uVar5 = *(undefined4 *)(param_1[0xb] + 0x2c);
  uVar6 = DAT_000124a4;
  if (param_3 == 0) {
    uVar6 = DAT_000124a0;
  }
  vlog(0,5,DAT_000124a8,DAT_000124ac,0x217,uVar5,uVar4,uVar2,uVar6);
  if ((param_3 == 0) && ((param_1[0x4e] != 0 || (param_1[0x4f] != 0)))) {
    disableIRQinterrupts();
    if (param_1[0x4e] != 0) {
      if (param_2 != (undefined4 *)0x0) {
        mpi_obj_ref(param_2);
      }
      if ((uint)param_1[0x5e] < (uint)param_1[0x5c]) {
        iVar3 = mpi_queue_push_obj(param_1[0x52],param_2);
        if (iVar3 == 0) {
          uVar7 = 0x222;
LAB_0001240c:
          vlog(0,2,DAT_000124b8,DAT_000124ac,uVar7,uVar5,uVar4,uVar2,uVar6);
LAB_00012420:
          mpi_obj_unref(param_2);
        }
        else {
          param_1[0x5e] = param_1[0x5e] + 1;
        }
      }
      else {
        iVar3 = mpi_queue_pop_obj(param_1[0x52]);
        if (iVar3 == 0) goto LAB_00012420;
        mpi_obj_unref();
        iVar3 = mpi_queue_push_obj(param_1[0x52],param_2);
        if (iVar3 == 0) {
          uVar7 = 0x22e;
          goto LAB_0001240c;
        }
      }
      complete_all(param_1 + 0x56);
    }
    if (param_1[0x4f] != 0) {
      if ((code *)param_1[0x50] != (code *)0x0) {
        (*(code *)param_1[0x50])(param_1,param_2);
      }
      goto LAB_000123bc;
    }
  }
  remove_user_from_buf(param_1,param_2,0);
  piVar1 = DAT_000124bc;
  iVar3 = param_1[0x2a];
  param_1[0x29] = param_1[0x29] + 1;
  param_1[0x2a] = iVar3 + 1;
  iVar8 = 300 - *piVar1;
  bVar10 = iVar8 + param_1[0x2d] < 0;
  if (bVar10) {
    iVar8 = *piVar1;
  }
  puVar9 = (undefined4 *)(param_1[0x45] + -4);
  if (bVar10) {
    param_1[0x2c] = iVar3;
    param_1[0x2d] = iVar8;
    param_1[0x2a] = 0;
  }
  for (; puVar9 + 1 != param_1 + 0x45; puVar9 = (undefined4 *)(puVar9[1] + -4)) {
    mpi_node_buffer_in(*puVar9,param_2,0);
  }
LAB_000123bc:
  ktime_get_ts64(&local_38);
  set_normalized_timespec64
            (local_28,local_34,local_38 - param_1[0x3c],
             (local_34 - param_1[0x3d]) - (uint)(local_38 < (uint)param_1[0x3c]),
             local_30 - param_1[0x3e],local_30 - param_1[0x3e] >> 0x1f);
  param_1[0x41] =
       DAT_000124b4 * local_28[0] +
       ((int)((longlong)local_20 * (longlong)DAT_000124b0 >> 0x26) - (local_20 >> 0x1f));
  mpi_obj_unref(param_1);
  return;
}



/* ===== mpi_node_buffer_available @ 000124c0 size=90 ===== */

void mpi_node_buffer_available(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1[0xb];
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    mpi_obj_ref();
    if ((int)(param_1[3] << 0x13) < 0) {
      vlog(0,5,DAT_0001251c,DAT_00012520,0x1ba,*param_2,*(undefined4 *)(param_1[0xb] + 0x2c),
           *param_1);
      if (*(code **)(iVar1 + 0x50) != (code *)0x0) {
        (**(code **)(iVar1 + 0x50))(param_1,0,param_2);
      }
    }
    mpi_obj_unref(param_1);
    return;
  }
  return;
}



/* ===== mpi_buf_pool_import @ 00012524 size=116 ===== */

undefined4 mpi_buf_pool_import(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  byte in_Q;
  
  if (((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) && (param_2[0xf] == 0)) {
    uVar1 = param_2[0x35];
    uVar3 = param_1[0xe];
    if (uVar3 <= uVar1) {
      param_2[0xf] = param_1;
      param_2[0x35] = param_1[0xe];
      disableIRQinterrupts();
      piVar2 = (int *)param_1[0x14];
      param_2[0xd] = param_1 + 0x13;
      param_2[0xe] = piVar2;
      *piVar2 = (int)(param_2 + 0xd);
      param_1[0x14] = param_2 + 0xd;
      mpi_obj_ref(param_1,(uint)(byte)(((int)(uVar1 - uVar3) < 0) << 4 | (uVar1 == uVar3) << 3 | 4U
                                       | SBORROW4(uVar1,uVar3) << 1 | in_Q) << 0x1b);
      vlog(0,5,DAT_00012598,DAT_0001259c,0xc6,*param_1,*param_2);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== mpi_buf_destroy_rcu @ 000125a0 size=92 ===== */

void mpi_buf_destroy_rcu(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    dma_buf_put();
  }
  vlog(0,5,DAT_000125fc,DAT_00012600,0x27,param_1 + -0x1c,*(undefined4 *)(param_1 + 0x10),
       *(undefined4 *)(param_1 + 0x14));
  iVar1 = *(int *)(param_1 + 0x10);
  if ((((iVar1 != 0) && (piVar2 = *(int **)(param_1 + 0x14), piVar2 != (int *)0x0)) &&
      (iVar1 != 0x100)) && (piVar2 != (int *)0x122)) {
    *(int **)(iVar1 + 4) = piVar2;
    *piVar2 = iVar1;
    *(undefined4 *)(param_1 + 0x10) = 0x100;
    *(undefined4 *)(param_1 + 0x14) = 0x122;
  }
  mpi_obj_unregister(param_1 + -0x1c);
  return;
}



/* ===== mpi_buf_pool_release @ 00012604 size=50 ===== */

void mpi_buf_pool_release(undefined4 *param_1)

{
  vlog(0,5,DAT_00012638,DAT_0001263c,0x15d,*param_1);
  if ((int)(param_1[3] << 0x1d) < 0) {
    mpi_obj_unregister(param_1);
    return;
  }
  return;
}



/* ===== mpi_allocator_register @ 00012640 size=60 ===== */

undefined4 mpi_allocator_register(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = kstrdup(param_3,0xcc0,param_3,param_4,param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  mpi_obj_register(param_1,7,param_2 | 0x40,0);
  vlog(0,5,DAT_0001267c,DAT_00012680,0x22f,*(undefined4 *)(param_1 + 0x2c));
  return 0;
}



/* ===== mpi_allocator_alloc @ 00012684 size=80 ===== */

int mpi_allocator_alloc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = param_1;
  uVar3 = param_2;
  _cond_resched();
  if ((param_1 == (undefined4 *)0x0) || ((param_1[3] & 6) != 2)) {
    iVar1 = 0;
  }
  else {
    mpi_obj_ref(param_1);
    iVar1 = (*(code *)param_1[0xd])(param_1,param_2,param_3,(code *)param_1[0xd],puVar2,uVar3);
    if (iVar1 == 0) {
      vlog(0,5,DAT_000126d4,DAT_000126d8,0x1fa,*param_1);
    }
    mpi_obj_unref(param_1);
  }
  return iVar1;
}



/* ===== atomic_sub.constprop.3 @ 000126dc size=24 ===== */

void atomic_sub_constprop_3(int *param_1)

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



/* ===== mpi_buf_pool_request_buf @ 000126f4 size=176 ===== */

undefined4 * mpi_buf_pool_request_buf(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = param_1[0x11];
    uVar1 = param_1[4];
    vlog(0,5,DAT_000127a4,DAT_000127a8,0xf7,*param_1,uVar4,uVar3,uVar1);
    if (((param_2 != (undefined4 *)0x0) && ((undefined4 *)param_2[0xf] == param_1)) &&
       (iVar2 = mpi_obj_ref_if_unused(param_2), iVar2 != 0)) {
LAB_00012766:
      atomic_sub_constprop_3(param_1 + 0x11);
      uVar4 = DAT_000127ac;
      if ((int)param_1[0x11] < (int)param_1[0x12]) {
        param_1[0x12] = param_1[0x11];
      }
      param_1[0x10] = param_1[0x10] + 1;
      param_2[3] = param_2[3] & 0xfffffbff;
      vlog(0,5,uVar4,DAT_000127a8,0x111,*param_1,*param_2,uVar3,uVar1);
      return param_2;
    }
    for (puVar5 = (undefined4 *)param_1[0x13]; param_2 = puVar5 + -0xd, puVar5 != param_1 + 0x13;
        puVar5 = (undefined4 *)*puVar5) {
      iVar2 = mpi_obj_ref_if_unused(param_2);
      if (iVar2 != 0) goto LAB_00012766;
    }
  }
  return (undefined4 *)0x0;
}



/* ===== atomic_add.constprop.4 @ 000127b0 size=24 ===== */

void atomic_add_constprop_4(int *param_1)

{
  bool bVar1;
  
  HintPreloadData(param_1);
  do {
    ExclusiveAccess(param_1);
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + 1;
  return;
}



/* ===== mpi_buf_pool_destroy @ 000127c8 size=156 ===== */

undefined4 mpi_buf_pool_destroy(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_1 == (undefined4 *)0x0) || ((param_1[3] & 6) != 2)) {
    uVar3 = 0xffffffff;
  }
  else {
    mpi_obj_ref();
    vlog(0,5,DAT_00012864,DAT_00012868,0x18c,*param_1,param_2);
    piVar2 = (int *)param_1[6];
    param_1[3] = param_1[3] & 0xfffffffd;
    atomic_add_constprop_4(piVar2);
    atomic_add_constprop_4(piVar2 + 1);
    if (param_1[4] == 0) {
      complete_all(piVar2 + 2);
    }
    call_rcu(param_1 + 7,DAT_0001286c);
    if (param_2 == 0) {
      wait_for_completion(piVar2 + 2);
    }
    atomic_sub_constprop_3(piVar2 + 1);
    HintPreloadData(piVar2);
    do {
      ExclusiveAccess(piVar2);
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      kfree(piVar2);
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== mpi_buf_destroy @ 00012870 size=82 ===== */

void mpi_buf_destroy(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1[0xf];
  vlog(0,5,DAT_000128c4,DAT_000128c8,0x34,*param_1,param_3);
  if ((code *)param_1[0x31] != (code *)0x0) {
    (*(code *)param_1[0x31])(param_1);
  }
  param_1[3] = param_1[3] | 4;
  if (iVar3 != 0) {
    iVar1 = param_1[0xd];
    piVar2 = (int *)param_1[0xe];
    *(int **)(iVar1 + 4) = piVar2;
    *piVar2 = iVar1;
    param_1[0xe] = 0x122;
    mpi_obj_unref(iVar3);
  }
  call_rcu(param_1 + 7,DAT_000128cc);
  return;
}



/* ===== mpi_buf_release @ 000128d0 size=218 ===== */

void mpi_buf_release(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_1[0xf];
  vlog(0,5,DAT_000129ac,DAT_000129b0,0x4d,*param_1,param_3);
  if (iVar3 == 0) {
    mpi_buf_destroy(param_1);
    return;
  }
  if ((*(uint *)(iVar3 + 0xc) & 6) == 2) {
    piVar2 = param_1 + 0x11;
    do {
      piVar1 = piVar2 + 1;
      if (*piVar2 != -1) {
        *piVar2 = 0;
      }
      piVar2 = piVar1;
    } while (param_1 + 0x31 != piVar1);
    iVar6 = iVar3 + 0x54;
    atomic_add_constprop_4(iVar3 + 0x44);
    param_1[3] = param_1[3] | 0x400;
    if (iVar6 != *(int *)(iVar3 + 0x54)) {
      iVar4 = 0;
      for (piVar2 = *(int **)(iVar3 + 0x54); (int *)iVar6 != piVar2; piVar2 = (int *)*piVar2) {
        iVar5 = (int)(piVar2 + -0x10);
        if ((iVar4 != 0) && (iVar5 = iVar4, (uint)piVar2[2] < *(uint *)(iVar4 + 0x48))) {
          iVar5 = (int)(piVar2 + -0x10);
        }
        iVar4 = iVar5;
      }
      if (iVar4 != 0) {
        mpi_node_buffer_available(iVar4,param_1);
      }
      for (piVar2 = *(int **)(iVar3 + 0x54); (int *)iVar6 != piVar2; piVar2 = (int *)*piVar2) {
        if (piVar2 + -0x10 != (int *)iVar4) {
          if (param_1[4] != 0) {
            return;
          }
          mpi_node_buffer_available(piVar2 + -0x10,param_1);
        }
      }
    }
    return;
  }
  mpi_obj_ref(iVar3);
  disableIRQinterrupts();
  mpi_buf_destroy(param_1);
  mpi_obj_unref(iVar3);
  return;
}



/* ===== mpi_buf_create @ 000129b4 size=114 ===== */

undefined4 * mpi_buf_create(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)
           kmem_cache_alloc(*(undefined4 *)(DAT_00012a28 + 0x24),0xdc0,param_3,DAT_00012a28,param_1,
                            param_2);
  if (puVar2 != (undefined4 *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
      puVar2[0x35] = 0;
    }
    else {
      atomic_add_constprop_4(param_1[1] + 0x1c);
      puVar2[0x35] = *param_1;
    }
    uVar1 = DAT_00012a2c;
    puVar2[0x36] = param_2;
    puVar2[0x10] = param_1;
    mpi_obj_register(puVar2,4,0,uVar1);
    mpi_obj_ref(puVar2);
    puVar3 = puVar2 + 0x11;
    do {
      puVar4 = puVar3 + 1;
      *puVar3 = 0xffffffff;
      puVar3 = puVar4;
    } while (puVar4 != puVar2 + 0x31);
    vlog(0,5,DAT_00012a30,DAT_00012a34,0xa6,*puVar2);
  }
  return puVar2;
}



/* ===== mpi_buf_pool_import_dmabuf @ 00012a38 size=46 ===== */

undefined4
mpi_buf_pool_import_dmabuf(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = mpi_buf_create(param_2,param_3,param_3,param_4,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
    uVar2 = mpi_buf_pool_import(param_1,iVar1);
    mpi_obj_unref(iVar1);
  }
  return uVar2;
}



/* ===== mpi_buf_pool_create @ 00012a66 size=238 ===== */

undefined4 *
mpi_buf_pool_create(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)
           kmem_cache_alloc(*(undefined4 *)(DAT_00012b54 + 4),0xdc0,param_3,DAT_00012b54,param_1,
                            param_2,param_3,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    iVar4 = 0;
    puVar1[0x14] = puVar1 + 0x13;
    puVar1[0x11] = 0;
    puVar1[0x13] = puVar1 + 0x13;
    puVar1[0xe] = param_3;
    puVar1[0xf] = param_2;
    puVar1[0x15] = puVar1 + 0x15;
    puVar1[0x16] = puVar1 + 0x15;
    puVar1[0x12] = param_4;
    mpi_obj_register(puVar1,5,0x40,DAT_00012b58);
    puVar1[1] = param_5;
    if ((int)param_2 < 0) {
      if (param_3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = mpi_allocator_alloc(param_1,param_2,param_3);
        if (iVar4 == 0) {
LAB_00012afc:
          mpi_buf_pool_destroy(puVar1,0);
          return (undefined4 *)0x0;
        }
      }
    }
    for (; param_4 != 0; param_4 = param_4 + -1) {
      if (((-1 < (int)param_2) && (param_3 != 0)) &&
         (iVar4 = mpi_allocator_alloc(param_1,param_2,param_3), iVar4 == 0)) goto LAB_00012afc;
      uVar3 = param_2;
      if (param_4 == puVar1[0x12]) {
        uVar3 = param_2 & 0x7fffffff;
      }
      iVar2 = mpi_buf_pool_import_dmabuf(puVar1,iVar4,uVar3);
      if (iVar2 < 0) {
        if (iVar4 != 0) {
          dma_buf_put(iVar4);
        }
        goto LAB_00012afc;
      }
      if ((-1 < (int)param_2) && (iVar4 != 0)) {
        dma_buf_put(iVar4);
      }
    }
    if (((int)param_2 < 0) && (iVar4 != 0)) {
      dma_buf_put(iVar4);
    }
    vlog(0,5,DAT_00012b5c,DAT_00012b60,0x1da,*puVar1,puVar1[4]);
  }
  return puVar1;
}



/* ===== mpi_buf_pool_del_user @ 00012b64 size=76 ===== */

void mpi_buf_pool_del_user(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  vlog(0,5,DAT_00012bb0,DAT_00012bb4,0x14d,*param_1,*(undefined4 *)(param_2[0xb] + 0x2c),*param_2);
  mpi_node_flush(param_2,1);
  disableIRQinterrupts();
  iVar1 = param_2[0x10];
  piVar2 = (int *)param_2[0x11];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  param_2[0x11] = 0x122;
  param_2[0xf] = 0;
  return;
}



/* ===== mpi_buf_pool_destroy_rcu @ 00012bb8 size=118 ===== */

void mpi_buf_pool_destroy_rcu(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x38);
  piVar2 = (int *)*piVar3;
  while (piVar1 = piVar2, piVar3 != (int *)(param_1 + 0x38)) {
    mpi_buf_pool_del_user(param_1 + -0x1c);
    piVar2 = (int *)*piVar1;
    piVar3 = piVar1;
  }
  disableIRQinterrupts();
  piVar3 = *(int **)(param_1 + 0x30);
  piVar2 = (int *)*piVar3;
  while (piVar1 = piVar2, piVar3 != (int *)(param_1 + 0x30)) {
    if (piVar3[-10] << 0x15 < 0) {
      mpi_buf_destroy();
    }
    piVar2 = (int *)*piVar1;
    piVar3 = piVar1;
  }
  *(uint *)(param_1 + -0x10) = *(uint *)(param_1 + -0x10) | 4;
  mpi_obj_unref(param_1 + -0x1c);
  return;
}



/* ===== mpi_buf_pool_add_user @ 00012c2e size=130 ===== */

void mpi_buf_pool_add_user(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((int)(param_1[3] << 0x1e) < 0) {
    vlog(0,5,DAT_00012cb0,DAT_00012cb4,0x129,*param_1,*(undefined4 *)(param_2[0xb] + 0x2c),*param_2)
    ;
    if (param_2[0xf] != 0) {
      mpi_buf_pool_del_user(param_2[0xf],param_2);
    }
    disableIRQinterrupts();
    param_2[0xf] = param_1;
    puVar1 = (undefined4 *)param_1[0x16];
    param_2[0x10] = param_1 + 0x15;
    param_2[0x11] = puVar1;
    *puVar1 = param_2 + 0x10;
    param_1[0x16] = param_2 + 0x10;
    for (puVar1 = (undefined4 *)param_1[0x13]; puVar1 != param_1 + 0x13;
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[-9] == 0) {
        mpi_node_buffer_available(param_2,puVar1 + -0xd);
      }
    }
  }
  return;
}



/* ===== mpi_allocator_unregister @ 00012cb8 size=150 ===== */

undefined4 mpi_allocator_unregister(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  vlog(0,5,DAT_00012d50,DAT_00012d54,0x20c,*(undefined4 *)(param_1 + 0x2c),param_3);
  if (param_1 != 0) {
    mpi_obj_ref(param_1);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
  synchronize_rcu();
  piVar3 = *(int **)(param_1 + 0x18);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  atomic_add_constprop_4(piVar3);
  atomic_add_constprop_4(piVar3 + 1);
  if (*(int *)(param_1 + 0x10) == 0) {
    complete_all(piVar3 + 2);
  }
  mpi_obj_unref(param_1);
  wait_for_completion(piVar3 + 2);
  atomic_sub_constprop_3(piVar3 + 1);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    kfree(piVar3);
  }
  kfree(*(undefined4 *)(param_1 + 0x2c));
  mpi_obj_unregister(param_1);
  return 0;
}



/* ===== mpi_list_free_rcu @ 00012d58 size=12 ===== */

void mpi_list_free_rcu(int param_1)

{
  kmem_cache_free(*DAT_00012d64,param_1 + -0xc);
  return;
}



/* ===== mpi_list_init @ 00012d68 size=34 ===== */

int mpi_list_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = kmem_cache_create(DAT_00012d8c,0x14,4,0,0,param_2,param_3);
  *DAT_00012d90 = iVar1;
  return -(uint)(iVar1 == 0);
}



/* ===== mpi_list_deinit @ 00012d94 size=8 ===== */

void mpi_list_deinit(void)

{
  func_0x000341bc(*DAT_00012d9c);
  return;
}



/* ===== mpi_list_del_obj_rcu @ 00012da0 size=70 ===== */

undefined4 mpi_list_del_obj_rcu(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  disableIRQinterrupts();
  piVar4 = (int *)*param_1;
  while( true ) {
    if (param_1 == piVar4) {
      return 0xffffffff;
    }
    if (piVar4[-1] == param_2) break;
    piVar4 = (int *)*piVar4;
  }
  iVar2 = *piVar4;
  piVar3 = (int *)piVar4[1];
  *(int **)(iVar2 + 4) = piVar3;
  *piVar3 = iVar2;
  uVar1 = DAT_00012de8;
  piVar4[1] = 0x122;
  call_rcu(piVar4 + 2,uVar1);
  return 0;
}



/* ===== mpi_list_add_tail_obj_rcu @ 00012dec size=56 ===== */

undefined4
mpi_list_add_tail_obj_rcu(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)kmem_cache_alloc(*DAT_00012e24,0xcc0,param_3,DAT_00012e24,param_4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *puVar1 = param_2;
    disableIRQinterrupts();
    puVar3 = *(undefined4 **)(param_1 + 4);
    puVar1[1] = param_1;
    puVar1[2] = puVar3;
    *puVar3 = puVar1 + 1;
    *(undefined4 **)(param_1 + 4) = puVar1 + 1;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpi_list_pop_obj_rcu @ 00012e28 size=68 ===== */

int mpi_list_pop_obj_rcu(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = DAT_00012e6c;
  disableIRQinterrupts();
  piVar3 = (int *)*param_1;
  if ((param_1 == piVar3) || (piVar3 == (int *)&DAT_00000004)) {
    iVar5 = 0;
  }
  else {
    iVar2 = *piVar3;
    piVar4 = (int *)piVar3[1];
    iVar5 = piVar3[-1];
    *(int **)(iVar2 + 4) = piVar4;
    *piVar4 = iVar2;
    piVar3[1] = 0x122;
    call_rcu(piVar3 + 2,uVar1,iVar2,0x122,param_1,piVar3,param_3);
  }
  return iVar5;
}



/* ===== atomic_set_if @ 00012e70 size=36 ===== */

bool atomic_set_if(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  HintPreloadData(param_1);
  do {
    ExclusiveAccess(param_1);
    iVar3 = *param_1;
    bVar2 = false;
    if (iVar3 == param_3) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      bVar2 = true;
      if (bVar1) {
        bVar2 = false;
        *param_1 = param_2;
      }
    }
  } while (bVar2);
  return param_3 == iVar3;
}



/* ===== mpi_job_set_ready @ 00012e94 size=46 ===== */

void mpi_job_set_ready(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = atomic_set_if(param_1 + 0x11,2,1,param_4,param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    vlog(0,5,DAT_00012ec4,DAT_00012ec8,0x23,*param_1,*(undefined4 *)(param_1[0xb] + 0x2c));
  }
  return;
}



/* ===== mpi_job_release @ 00012ecc size=82 ===== */

void mpi_job_release(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  mpi_obj_unref(param_1[0xb],param_2,param_3,param_1[0x11],param_1,param_2,param_3);
  param_1[0xb] = 0;
  mpi_obj_unref(param_1[0xc]);
  param_1[0xc] = 0;
  mpi_obj_unref(param_1[0xf]);
  param_1[0xf] = 0;
  mpi_obj_unref(param_1[0x10]);
  param_1[0x10] = 0;
  param_1[3] = param_1[3] & 0xfffffbff;
  param_1[0x11] = 0;
  vlog(0,5,DAT_00012f20,DAT_00012f24,0xb7,*param_1);
  mpi_obj_unref(param_1[0xd]);
  return;
}



/* ===== mpi_job_try_complete @ 00012f28 size=22 ===== */

void mpi_job_try_complete(int param_1)

{
  if ((*(int *)(param_1 + 0xc) << 0x15 < 0) && (*(int *)(param_1 + 0x44) - 4U < 3)) {
    complete_all(param_1 + 0x48);
    return;
  }
  return;
}



/* ===== mpi_job_do_cancel @ 00012f3e size=60 ===== */

undefined4
mpi_job_do_cancel(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = atomic_set_if(param_1 + 0x11,4,2,param_4,param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    vlog(0,5,DAT_00012f7c,DAT_00012f80,0x45,*param_1);
    mpi_job_try_complete(param_1);
    mpi_obj_unref(param_1);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpi_job_cancel_rcu @ 00012f84 size=4 ===== */

void mpi_job_cancel_rcu(int param_1)

{
  mpi_job_do_cancel(param_1 + -0x1c);
  return;
}



/* ===== mpi_job_done @ 00012f88 size=146 ===== */

undefined4 mpi_job_done(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 6;
  }
  else {
    iVar3 = 5;
  }
  iVar1 = atomic_set_if(param_1 + 0x11,iVar3,3,param_4,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (iVar3 == 5) {
      mpi_obj_unref(param_1[0x10]);
      param_1[0x10] = 0;
      mpi_obj_unref(param_1[0xf]);
      param_1[0xf] = 0;
    }
    else {
      mpi_obj_unref(param_1[0xf]);
      param_1[0xf] = 0;
      if ((((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) &&
          (iVar3 = param_1[0xc], iVar3 != 0)) && ((*(uint *)(iVar3 + 0xc) & 6) == 2)) {
        mpi_node_buffer_out(iVar3,param_1[0x10],0);
      }
    }
    vlog(0,5,DAT_0001301c,DAT_00013020,0x97,*param_1,param_2);
    mpi_job_try_complete(param_1);
    mpi_obj_unref(param_1);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpi_job_wait @ 00013024 size=44 ===== */

undefined4 mpi_job_wait(int param_1)

{
  if (param_1 != 0) {
    mpi_obj_ref();
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x400;
  mpi_job_try_complete(param_1);
  wait_for_completion(param_1 + 0x48);
  mpi_obj_unref(param_1);
  return 0;
}



/* ===== mpi_job_cancel @ 00013050 size=70 ===== */

undefined4 mpi_job_cancel(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 0xc) << 0x1e) < 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
    mpi_obj_unref(*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
    mpi_obj_unref(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (param_2 == 0) {
      synchronize_rcu();
      uVar1 = mpi_job_do_cancel(param_1);
      return uVar1;
    }
    call_rcu(param_1 + 0x1c,DAT_00013098);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== mpi_job_pool_release @ 0001309c size=96 ===== */

void mpi_job_pool_release(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  vlog(0,5,DAT_000130fc,DAT_00013100,0x12a,*param_1);
  uVar4 = param_1[3];
  param_1[3] = uVar4 & 0xfffff7ff;
  if ((int)(uVar4 << 0x1d) < 0) {
    piVar3 = (int *)param_1[10];
    piVar2 = (int *)*piVar3;
    while (piVar1 = piVar2, piVar3 != param_1 + 10) {
      mpi_obj_unregister();
      piVar2 = (int *)*piVar1;
      piVar3 = piVar1;
    }
    mpi_obj_unref(param_1[9]);
    mpi_obj_unregister(param_1);
    return;
  }
  return;
}



/* ===== mpi_job_pool_alloc @ 00013104 size=132 ===== */

undefined4 * mpi_job_pool_alloc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00013188 + 0x1c),0xdc0);
  uVar1 = DAT_00013194;
  if (puVar2 == (undefined4 *)0x0) {
    vlog(0,5,DAT_0001318c,DAT_00013190,0xd7,*param_1);
  }
  else {
    puVar2[0x12] = 0;
    __init_swait_queue_head(puVar2 + 0x13,DAT_00013198,uVar1);
    puVar2[0x11] = param_2;
    puVar2[0xd] = param_1;
    mpi_obj_register(puVar2,2,0,DAT_0001319c);
    disableIRQinterrupts();
    piVar3 = (int *)param_1[0xb];
    puVar2[9] = param_1 + 10;
    puVar2[10] = piVar3;
    *piVar3 = (int)(puVar2 + 9);
    param_1[0xb] = puVar2 + 9;
    vlog(0,5,DAT_000131a0,DAT_00013190,0xe5,*param_1,*puVar2);
  }
  return puVar2;
}



/* ===== mpi_job_pool_flush @ 000131a4 size=260 ===== */

undefined4 mpi_job_pool_flush(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  vlog(0,5,DAT_000132a8,DAT_000132ac,0x15b,*param_1);
  if (param_1 != (undefined4 *)0x0) {
    mpi_obj_ref(param_1);
  }
  param_1[3] = param_1[3] | 0x800;
  synchronize_rcu();
  if (param_3 != 0) {
    disableIRQinterrupts();
    for (puVar3 = (undefined4 *)param_1[10]; puVar4 = puVar3 + -9, puVar3 != param_1 + 10;
        puVar3 = (undefined4 *)*puVar3) {
      iVar2 = mpi_obj_ref_if_used(puVar4);
      if (iVar2 != 0) {
        if ((param_2 == 0) || (param_2 == puVar3[3])) {
          mpi_job_cancel(puVar4,0);
        }
        mpi_obj_unref(puVar4);
      }
    }
  }
  piVar5 = (int *)param_1[6];
  if ((int)(param_1[3] << 0x15) < 0) {
    param_1[3] = param_1[3] | 4;
  }
  HintPreloadData(piVar5);
  do {
    ExclusiveAccess(piVar5);
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = *piVar5 + 1;
  piVar6 = piVar5 + 1;
  HintPreloadData(piVar6);
  do {
    ExclusiveAccess(piVar6);
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = *piVar6 + 1;
  if (param_1[4] == 0) {
    complete_all(piVar5 + 2);
  }
  HintPreloadData(piVar6);
  mpi_obj_unref(param_1);
  wait_for_completion(piVar5 + 2);
  do {
    ExclusiveAccess(piVar6);
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = *piVar6 + -1;
  HintPreloadData(piVar5);
  do {
    ExclusiveAccess(piVar5);
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    kfree(piVar5);
  }
  return 0;
}



/* ===== mpi_job_set_running @ 000132b0 size=56 ===== */

undefined4
mpi_job_set_running(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = atomic_set_if(param_1 + 0x11,3,2,param_1[0x11],param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    vlog(0,5,DAT_000132e8,DAT_000132ec,0x30,*param_1,*(undefined4 *)(param_1[0xb] + 0x2c));
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpi_job_pool_request_job @ 000132f0 size=162 ===== */

undefined4 *
mpi_job_pool_request_job
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) &&
     (vlog(0,5,DAT_00013394,DAT_00013398,0xf1,*param_1,param_1[4],param_4),
     -1 < (int)(param_1[3] << 0x14))) {
    for (puVar3 = (undefined4 *)param_1[10]; puVar1 = puVar3 + -9, puVar3 != param_1 + 10;
        puVar3 = (undefined4 *)*puVar3) {
      iVar2 = atomic_set_if(puVar3 + 8,1,0);
      if (iVar2 != 0) goto LAB_00013348;
    }
    puVar1 = (undefined4 *)mpi_job_pool_alloc(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
LAB_00013348:
      mpi_obj_ref(param_1);
      puVar1[0x12] = 0;
      puVar1[3] = puVar1[3] | 2;
      if (puVar1 != (undefined4 *)0x0) {
        mpi_obj_ref(puVar1);
      }
      vlog(0,5,DAT_0001339c,DAT_00013398,0x106,*param_1,*puVar1);
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}



/* ===== mpi_job_pool_choose_job @ 000133a0 size=98 ===== */

undefined4 * mpi_job_pool_choose_job(int param_1,int param_2,code *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 == 0) || ((*(uint *)(param_1 + 0xc) & 6) != 2)) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)0x0;
    for (puVar2 = *(undefined4 **)(param_1 + 0x28); puVar3 = puVar2 + -9,
        puVar2 != (undefined4 *)(param_1 + 0x28); puVar2 = (undefined4 *)*puVar2) {
      puVar5 = puVar4;
      if (((((int)(puVar2[-6] << 0x1e) < 0) && (puVar2[3] == param_2)) && (puVar2[8] == 2)) &&
         ((puVar5 = puVar3, puVar4 != (undefined4 *)0x0 && (puVar5 = puVar4, param_3 != (code *)0x0)
          ))) {
        iVar1 = (*param_3)(puVar4,puVar3);
        puVar5 = (undefined4 *)((uint)puVar4 & ~(iVar1 >> 0x20));
        if (iVar1 < 0) {
          puVar5 = puVar3;
        }
      }
      puVar4 = puVar5;
    }
  }
  return puVar4;
}



/* ===== mpi_job_pool_destroy @ 00013402 size=50 ===== */

undefined4 mpi_job_pool_destroy(undefined4 *param_1)

{
  vlog(0,5,DAT_00013434,DAT_00013438,0x172,*param_1);
  param_1[3] = param_1[3] | 0x400;
  mpi_job_pool_flush(param_1,0,1);
  return 0;
}



/* ===== mpi_job_pool_create @ 0001343c size=96 ===== */

undefined4 * mpi_job_pool_create(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  
  puVar1 = (undefined4 *)
           kmem_cache_alloc(*(undefined4 *)(DAT_0001349c + 0x18),0xdc0,param_3,DAT_0001349c,param_1,
                            param_2);
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 != 0) {
      mpi_obj_ref(param_1);
    }
    puVar1[9] = param_1;
    puVar1[10] = puVar1 + 10;
    puVar1[0xb] = puVar1 + 10;
    mpi_obj_register(puVar1,3,0x40,DAT_000134a0);
    while (bVar2 = param_2 != 0, param_2 = param_2 + -1, bVar2) {
      mpi_job_pool_alloc(puVar1,0);
    }
    vlog(0,5,DAT_000134a4,DAT_000134a8,0x18d,*puVar1);
  }
  return puVar1;
}



/* ===== _mpi_unref_rcu @ 000134ac size=6 ===== */

void _mpi_unref_rcu(int param_1)

{
  mpi_obj_unref(param_1 + -0x1c);
  return;
}



/* ===== atomic_cmpxchg_relaxed @ 000134b2 size=32 ===== */

void atomic_cmpxchg_relaxed(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  
  HintPreloadData(param_1);
  do {
    ExclusiveAccess(param_1);
    bVar2 = false;
    if (*param_1 == param_2) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      bVar2 = true;
      if (bVar1) {
        bVar2 = false;
        *param_1 = param_3;
      }
    }
  } while (bVar2);
  return;
}



/* ===== mpi_queue_front_obj @ 000134d2 size=66 ===== */

undefined4 mpi_queue_front_obj(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == 0) || ((*(uint *)(param_1 + 0xc) & 6) != 2)) {
    uVar2 = 0;
  }
  else {
    do {
      iVar3 = *(int *)(param_1 + 0x28);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (iVar3 - 1U & 0xffff) * 0xc + *(int *)(param_1 + 0x30);
      }
      puVar1 = (undefined4 *)0x0;
      if (*(int *)(iVar4 + 4) != 0) {
        puVar1 = (undefined4 *)
                 ((*(int *)(iVar4 + 4) - 1U & 0xffff) * 0xc + *(int *)(param_1 + 0x30));
      }
    } while (iVar3 != *(int *)(param_1 + 0x28));
    uVar2 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = *puVar1;
    }
  }
  return uVar2;
}



/* ===== mpi_queue_release @ 00013514 size=70 ===== */

void mpi_queue_release(undefined4 *param_1)

{
  vlog(0,5,DAT_0001355c,DAT_00013560,0x10d,*param_1);
  if ((int)(param_1[3] << 0x14) < 0) {
    param_1[3] = param_1[3] & 0xfffff7fd;
  }
  if (-1 < (int)(param_1[3] << 0x1d)) {
    return;
  }
  kfree(param_1[0xc]);
  mpi_obj_unregister(param_1);
  return;
}



/* ===== mpi_queue_do_try_pop_obj @ 00013564 size=218 ===== */

undefined4 * mpi_queue_do_try_pop_obj(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 == (undefined4 *)0x0) || ((param_1[3] & 6) != 2)) {
LAB_0001363a:
    puVar3 = (undefined4 *)0x0;
  }
  else {
    do {
      while( true ) {
        do {
          iVar6 = param_1[10];
          if (iVar6 == 0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)((iVar6 - 1U & 0xffff) * 0xc + param_1[0xc]);
          }
          if (param_1[0xb] == 0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2 = (undefined4 *)((param_1[0xb] - 1 & 0xffff) * 0xc + param_1[0xc]);
          }
          if (puVar5[1] == 0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = (undefined4 *)((puVar5[1] - 1 & 0xffff) * 0xc + param_1[0xc]);
          }
          iVar7 = param_1[10];
        } while (iVar6 != iVar7);
        if (puVar3 == (undefined4 *)0x0) goto LAB_0001363a;
        if (puVar5 != puVar2) break;
        atomic_cmpxchg_relaxed(param_1 + 0xb);
      }
      puVar3 = (undefined4 *)*puVar3;
      if ((param_2 != (undefined4 *)0x0) && (param_2 != puVar3)) goto LAB_0001363a;
      iVar6 = atomic_cmpxchg_relaxed(param_1 + 10,iVar7);
      param_2 = puVar3;
    } while (iVar7 != iVar6);
    piVar4 = puVar5 + 2;
    *puVar5 = 0;
    puVar5[1] = 0;
    HintPreloadData(piVar4);
    do {
      ExclusiveAccess(piVar4);
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + -1;
    mpi_obj_unref(param_1);
    vlog(0,5,DAT_00013640,DAT_00013644,0x6b,*param_1,*puVar3,param_1[4],param_1[0xd]);
  }
  return puVar3;
}



/* ===== mpi_queue_pop_obj @ 00013648 size=4 ===== */

void mpi_queue_pop_obj(undefined4 param_1)

{
  mpi_queue_do_try_pop_obj(param_1,0);
  return;
}



/* ===== mpi_queue_unused_node @ 0001364c size=48 ===== */

int mpi_queue_unused_node(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar2 = *(int *)(param_1 + 0x34) + 1;
    if (uVar2 <= uVar4) {
      return 0;
    }
    iVar3 = uVar4 * 0xc + *(int *)(param_1 + 0x30);
    iVar1 = atomic_cmpxchg_relaxed(iVar3 + 8,0,1,uVar2,param_4);
    if (iVar1 == 0) break;
    uVar4 = uVar4 + 1;
  }
  return iVar3;
}



/* ===== mpi_queue_push_obj @ 0001367c size=232 ===== */

undefined4 mpi_queue_push_obj(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1 != (undefined4 *)0x0) && ((param_1[3] & 6) == 2)) {
    mpi_obj_ref();
    if ((param_2[2] == param_1[9]) &&
       (piVar2 = (int *)mpi_queue_unused_node(param_1), piVar2 != (int *)0x0)) {
      *piVar2 = (int)param_2;
      piVar5 = param_1 + 0xe;
      HintPreloadData(piVar5);
      do {
        ExclusiveAccess(piVar5);
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + 1;
      iVar7 = ((int)piVar2 - param_1[0xc] >> 2) * DAT_00013764;
      do {
        while( true ) {
          do {
            iVar8 = param_1[0xb];
            if (iVar8 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = (iVar8 - 1U & 0xffff) * 0xc + param_1[0xc];
            }
            if (*(int *)(iVar3 + 4) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = (*(int *)(iVar3 + 4) - 1U & 0xffff) * 0xc + param_1[0xc];
            }
          } while (iVar8 != param_1[0xb]);
          if (iVar6 == 0) break;
          atomic_cmpxchg_relaxed(param_1 + 0xb,iVar8);
        }
        iVar3 = atomic_cmpxchg_relaxed(iVar3 + 4,0,iVar7 + 1U | (iVar4 + 1) * 0x10000);
      } while (iVar3 != 0);
      atomic_cmpxchg_relaxed(param_1 + 0xb,iVar8);
      vlog(0,5,DAT_00013768,DAT_0001376c,0xb6,*param_1,*param_2,param_1[4],param_1[0xd]);
      return 1;
    }
    mpi_obj_unref(param_1);
  }
  return 0;
}



/* ===== mpi_queue_flush @ 00013770 size=242 ===== */

undefined4 mpi_queue_flush(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    mpi_obj_ref();
  }
  vlog(0,5,DAT_00013864,DAT_00013868,0xef,*param_1);
  uVar2 = param_1[3];
  param_1[3] = uVar2 | 0x800;
  if ((param_2 != 0) && (param_1[0xf] != 0)) {
    while (iVar3 = mpi_queue_pop_obj(param_1), iVar3 != 0) {
      (*(code *)param_1[0xf])();
    }
  }
  if ((int)(param_1[3] << 0x15) < 0) {
    param_1[3] = param_1[3] | 4;
  }
  piVar4 = (int *)param_1[6];
  HintPreloadData(piVar4);
  do {
    ExclusiveAccess(piVar4);
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = *piVar4 + 1;
  piVar5 = piVar4 + 1;
  HintPreloadData(piVar5);
  do {
    ExclusiveAccess(piVar5);
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = *piVar5 + 1;
  if (param_1[4] == 0) {
    complete_all(piVar4 + 2);
  }
  if ((uVar2 & 0x800) == 0) {
    call_rcu(param_1 + 7,DAT_0001386c);
  }
  else {
    mpi_obj_unref(param_1);
  }
  if (param_3 == 0) {
    wait_for_completion(piVar4 + 2);
  }
  HintPreloadData(piVar5);
  do {
    ExclusiveAccess(piVar5);
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = *piVar5 + -1;
  HintPreloadData(piVar4);
  do {
    ExclusiveAccess(piVar4);
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    kfree(piVar4);
  }
  return 0;
}



/* ===== mpi_queue_destroy @ 00013870 size=52 ===== */

void mpi_queue_destroy(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  vlog(0,5,DAT_000138a4,DAT_000138a8,0x125,*param_1,param_3);
  param_1[3] = param_1[3] | 0x400;
  mpi_queue_flush(param_1,1,param_2);
  return;
}



/* ===== mpi_queue_create @ 000138ac size=184 ===== */

undefined4 * mpi_queue_create(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 - 1U < 0xfffe) &&
     (puVar2 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00013964 + 0x18),0xdc0),
     puVar2 != (undefined4 *)0x0)) {
    iVar3 = __kmalloc(param_1 * 0xc + 0xc,0xdc0);
    puVar2[0xc] = iVar3;
    if (iVar3 != 0) {
      puVar2[0xe] = 0;
      puVar2[0xd] = param_1;
      puVar2[9] = param_2;
      puVar2[0xf] = param_3;
      iVar3 = mpi_queue_unused_node(puVar2);
      piVar5 = puVar2 + 0xe;
      HintPreloadData(piVar5);
      do {
        ExclusiveAccess(piVar5);
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + 1;
      puVar2[10] = (iVar3 - puVar2[0xc] >> 2) * DAT_00013968 + 1U | (iVar4 + 1) * 0x10000;
      puVar2[0xb] = puVar2[10];
      mpi_obj_register(puVar2,6,0x40,DAT_0001396c);
      vlog(0,5,DAT_00013970,DAT_00013974,0x155,*puVar2,puVar2[0xd]);
      return puVar2;
    }
    kfree(puVar2);
  }
  return (undefined4 *)0x0;
}



/* ===== mpi_queue_try_pop_obj @ 00013978 size=16 ===== */

bool mpi_queue_try_pop_obj(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = mpi_queue_do_try_pop_obj();
  return param_2 == iVar1;
}



/* ===== mpi_fs_buf_reset @ 00013988 size=8 ===== */

void mpi_fs_buf_reset(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[3] = 0;
  return;
}



/* ===== mpi_sysfs_hotplug_event @ 00013990 size=24 ===== */

void mpi_sysfs_hotplug_event(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  vlog(0,5,DAT_000139a8,DAT_000139ac,0x82,param_2,param_3);
  return;
}



/* ===== mpi_devnode @ 000139b0 size=16 ===== */

void mpi_devnode(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xb];
  if (iVar1 == 0) {
    iVar1 = *param_1;
  }
  kasprintf(0xcc0,DAT_000139c0,iVar1);
  return;
}



/* ===== mpi_fs_buf_init @ 000139c4 size=56 ===== */

undefined4 mpi_fs_buf_init(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
LAB_000139cc:
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 < 0x2801) {
      param_1[4] = DAT_000139fc;
    }
    else {
      iVar2 = __kmalloc(param_2,0xcc0,param_3,param_4,param_4);
      param_1[4] = iVar2;
      if (iVar2 == 0) goto LAB_000139cc;
    }
    uVar1 = 0;
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[3] = 0;
  }
  return uVar1;
}



/* ===== mpi_fs_buf_deinit @ 00013a00 size=16 ===== */

void mpi_fs_buf_deinit(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != DAT_00013a10) {
      kfree();
      return;
    }
  }
  return;
}



/* ===== mpi_fs_buf_loop_add @ 00013a14 size=68 ===== */

void mpi_fs_buf_loop_add(int param_1,char *param_2,__gnuc_va_list param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + -1;
  if (iVar2 <= *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = vsnprintf((char *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x10)),
                    iVar2 - *(int *)(param_1 + 4),param_2,param_3);
  iVar1 = *(int *)(param_1 + 4) + iVar1;
  iVar2 = *(int *)(param_1 + 8) + -1;
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 4) = iVar2;
  if (*(int *)(param_1 + 0xc) < iVar2) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) = 0;
  return;
}



/* ===== mpi_sysfs_dev_add @ 00013a58 size=134 ===== */

int mpi_sysfs_dev_add(uint *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = DAT_00013ae0;
  if (param_1[0x18] == 0) {
    cdev_init(param_1 + 0x19);
    cdev_add(param_1 + 0x19,*param_1 | *piVar1 << 0x14,1);
    uVar3 = device_create_with_groups
                      (*DAT_00013ae4,0,*param_1 | *piVar1 << 0x14,param_1,0,DAT_00013ae8,
                       param_1[0xb]);
    uVar2 = DAT_00013aec;
    param_1[0x18] = uVar3;
    vlog(0,5,uVar2,DAT_00013af0,0x52,param_1[0xb]);
    if (param_1[0x18] < 0xfffff001) {
      iVar4 = *piVar1;
    }
    else {
      vlog(0,2,DAT_00013af4,DAT_00013af0,0x55,param_1[0x18]);
      iVar4 = -1;
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



/* ===== mpi_sysfs_dev_remove @ 00013af8 size=42 ===== */

void mpi_sysfs_dev_remove(int param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    vlog(0,5,DAT_00013b24,DAT_00013b28,100,*(undefined4 *)(param_1 + 0x2c));
    device_unregister(*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



/* ===== mpi_fs_buf_read @ 00013b2c size=90 ===== */

uint mpi_fs_buf_read(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = param_1[3];
  if (iVar4 != 0) {
    iVar2 = *param_1;
    if (iVar4 <= iVar2) {
      *param_1 = 0;
      return 0;
    }
    uVar5 = iVar4 - iVar2;
    if ((int)param_3 <= iVar4 - iVar2) {
      uVar5 = param_3;
    }
    if (-1 < (int)uVar5) {
      uVar3 = *(uint *)(((uint)&stack0xfffffff0 & 0xffffe000) + 8);
      if (!CARRY4(param_2,uVar5) && param_2 + uVar5 <= uVar3) {
        uVar3 = 0;
      }
      uVar1 = uVar5;
      if (uVar3 == 0) {
        uVar1 = arm_copy_to_user(param_2,iVar2 + param_1[4]);
      }
      if (uVar1 == 0) {
        *param_1 = *param_1 + uVar5;
        return uVar5;
      }
    }
  }
  return 0xffffffff;
}



/* ===== mpi_sysfs_lease_event @ 00013b86 size=24 ===== */

void mpi_sysfs_lease_event(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  vlog(0,5,DAT_00013ba0,DAT_00013ba4,0x70,param_2,param_3);
  return;
}



/* ===== mpi_fs_init @ 00013ba8 size=102 ===== */

undefined4 mpi_fs_init(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint local_14 [2];
  
  iVar5 = alloc_chrdev_region(local_14,0,0x32,DAT_00013c10);
  uVar4 = DAT_00013c24;
  puVar3 = DAT_00013c20;
  puVar2 = DAT_00013c1c;
  uVar1 = DAT_00013c10;
  if (iVar5 < 0) {
    vlog(0,2,DAT_00013c18,DAT_00013c14,0x8e,iVar5);
  }
  else {
    puVar7 = DAT_00013c1c + 1;
    *DAT_00013c20 = local_14[0] >> 0x14;
    uVar6 = __class_create(uVar4,uVar1,puVar7);
    *puVar2 = uVar6;
    if (uVar6 < 0xfffff001) {
      iVar5 = class_create_file_ns(uVar6,puVar3 + 1,0);
      if (iVar5 == 0) {
        *(undefined4 *)(*puVar2 + 0x18) = DAT_00013c28;
      }
      else {
        class_destroy(*puVar2);
        *puVar2 = 0;
      }
    }
  }
  return 0;
}



/* ===== mpi_fs_exit @ 00013c2c size=46 ===== */

void mpi_fs_exit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = DAT_00013c60;
  piVar1 = DAT_00013c5c;
  unregister_chrdev_region(*DAT_00013c5c << 0x14,0x32,param_3,param_4,param_4);
  uVar3 = *puVar2;
  if ((uVar3 != 0) && (uVar3 < 0xfffff001)) {
    class_remove_file_ns(uVar3,piVar1 + 1,0);
    class_destroy(*puVar2);
    *puVar2 = 0;
  }
  return;
}



/* ===== mpi_fs_buf_add @ 00013c64 size=68 ===== */

undefined4 mpi_fs_buf_add(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 8) + -1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (iVar1 < iVar3) {
    iVar1 = vsnprintf((char *)(iVar1 + *(int *)(param_1 + 0x10)),iVar3 - iVar1,param_2,&uStack_8);
    iVar1 = *(int *)(param_1 + 0xc) + iVar1;
    uVar2 = 0;
    *(int *)(param_1 + 0xc) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar1) = 0;
  }
  else {
    printk(DAT_00013ca8);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== mpi_ioctl_kernel @ 00013cac size=390 ===== */

void mpi_ioctl_kernel(undefined4 param_1,uint *param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  size_t __n;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 local_c8;
  size_t local_c4;
  undefined4 uStack_c0;
  int *local_b8;
  size_t local_b4;
  undefined1 auStack_ac [128];
  int local_2c;
  
  uVar5 = (param_3 & 0x3fffffff) >> 0x10;
  pcVar7 = (code *)param_2[2];
  local_2c = *DAT_00013e34;
  local_b8 = DAT_00013e34;
  param_3 = param_3 & *param_2;
  uVar6 = (*param_2 & 0x3fffffff) >> 0x10;
  uVar3 = 0;
  if ((param_3 & 0x40000000) != 0) {
    uVar3 = uVar5;
  }
  if (-1 < (int)param_3) {
    uVar5 = 0;
  }
  if (uVar6 < uVar3) {
    uVar6 = uVar3;
  }
  if (uVar6 < uVar5) {
    uVar6 = uVar5;
  }
  if (pcVar7 == (code *)0x0) {
    local_c8 = 0x21;
    vlog(0,2,DAT_00013e38,DAT_00013e3c);
    uVar4 = 0xffffffea;
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (uVar6 < 0x81) {
      puVar1 = auStack_ac;
    }
    else {
      puVar1 = (undefined1 *)__kmalloc(uVar6,0xcc0);
      if (puVar1 == (undefined1 *)0x0) {
        uVar4 = 0xfffffff4;
        goto LAB_00013d08;
      }
    }
    uVar2 = *(uint *)(((uint)&local_c8 & 0xffffe000) + 8);
    if (!CARRY4(param_4,uVar3) && param_4 + uVar3 <= uVar2) {
      uVar2 = 0;
    }
    __n = uVar3;
    if (uVar2 == 0) {
      __n = arm_copy_from_user(puVar1,param_4,uVar3);
    }
    if (__n == 0) {
      if (uVar3 < uVar6) {
        memset(puVar1 + uVar3,0,uVar6 - uVar3);
      }
      if ((int)(param_2[1] << 0x1b) < 0) {
        uVar4 = (*pcVar7)(param_1,puVar1);
      }
      else {
        if (param_2[4] == 0) {
          mutex_lock(DAT_00013e48);
          uVar4 = (*pcVar7)(param_1,puVar1);
          uVar3 = DAT_00013e48;
        }
        else {
          mutex_lock();
          uVar4 = (*pcVar7)(param_1,puVar1);
          uVar3 = param_2[4];
        }
        mutex_unlock(uVar3);
      }
      local_c8 = 0x49;
      local_c4 = DAT_00013e3c;
      uStack_c0 = uVar4;
      vlog(0,5,DAT_00013e44);
      uVar3 = *(uint *)(((uint)&local_c8 & 0xffffe000) + 8);
      if (!CARRY4(param_4,uVar5) && param_4 + uVar5 <= uVar3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar5 = arm_copy_to_user(param_4,puVar1,uVar5);
      }
      if (uVar5 != 0) {
        local_c8 = 0x4c;
        local_c4 = 0;
        goto LAB_00013d70;
      }
    }
    else {
      local_b4 = __n;
      memset(puVar1 + (uVar3 - __n),0,__n);
      local_c4 = local_b4;
      local_c8 = 0x33;
LAB_00013d70:
      vlog(0,2,DAT_00013e40,DAT_00013e3c);
      uVar4 = 0xfffffff2;
    }
    if (puVar1 == auStack_ac) goto LAB_00013d7e;
  }
LAB_00013d08:
  kfree(puVar1);
LAB_00013d7e:
  if (local_2c != *local_b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ===== vlog_compat_ioctl @ 00013e4c size=4 ===== */

undefined4 vlog_compat_ioctl(void)

{
  return 0;
}



/* ===== vlog_thread_fn @ 00013e50 size=40 ===== */

undefined4 vlog_thread_fn(int param_1)

{
  int iVar1;
  
  while (iVar1 = kthread_should_stop(), iVar1 == 0) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      down(param_1 + 0xbc);
    }
    else {
      msleep(1);
    }
  }
  return 0;
}



/* ===== vlog_read @ 00013e78 size=18 ===== */

int vlog_read(void)

{
  int iVar1;
  
  iVar1 = mpi_fs_buf_read(DAT_00013e8c);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== format_time_stamp @ 00013e90 size=114 ===== */

void format_time_stamp(int param_1,undefined4 param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  
  iVar8 = DAT_00013f0c;
  uVar1 = (ulonglong)param_3;
  iVar7 = 0;
  iVar5 = DAT_00013f04;
  pcVar9 = (char *)(param_1 + -1);
  do {
    iVar7 = iVar7 + 1;
    cVar4 = __aeabi_idivmod(param_2,iVar5,(int)uVar1);
    uVar1 = (longlong)iVar5 * (longlong)iVar8;
    iVar5 = (int)((longlong)uVar1 >> 0x22) - (iVar5 >> 0x1f);
    pcVar9 = pcVar9 + 1;
    *pcVar9 = cVar4 + '0';
    iVar3 = DAT_00013f0c;
    iVar6 = DAT_00013f08;
    param_2 = extraout_r1;
  } while (iVar7 != 9);
  iVar8 = 10;
  lVar2 = CONCAT44(0x2e,(int)uVar1);
  *(undefined1 *)(param_1 + 9) = 0x2e;
  do {
    cVar4 = __aeabi_idivmod(param_3,iVar6,(int)lVar2);
    lVar2 = (longlong)iVar6 * (longlong)iVar3;
    iVar8 = iVar8 + 1;
    iVar6 = (int)(lVar2 >> 0x22) - (iVar6 >> 0x1f);
    ((char *)(param_1 + -1))[iVar8] = cVar4 + '0';
    param_3 = extraout_r1_00;
  } while (iVar8 != 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* ===== vlog @ 00013f10 size=244 ===== */

void vlog(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_8c;
  undefined4 local_88 [2];
  int local_80;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 auStack_71 [20];
  undefined1 auStack_5d [41];
  int local_34;
  
  iVar4 = DAT_00014008;
  piVar1 = DAT_00014004;
  local_34 = *DAT_00014004;
  if (param_2 <= *(int *)(DAT_00014008 + param_1 * 4)) {
    disableIRQinterrupts();
    iVar5 = DAT_00014008 + param_1 * 4;
    ktime_get_ts64(local_88);
    pcVar6 = *(char **)(iVar5 + 0x5c);
    local_74 = 0xd;
    local_72 = 0x5b;
    local_73 = 10;
    sVar2 = strlen(pcVar6);
    memcpy(auStack_71,pcVar6,sVar2);
    sVar2 = strlen(pcVar6);
    pcVar6 = *(char **)(iVar4 + param_2 * 4 + 0xb8);
    auStack_71[sVar2] = 0x5d;
    auStack_71[sVar2 + 1] = 0x5b;
    sVar3 = strlen(pcVar6);
    memcpy(auStack_71 + sVar2 + 2,pcVar6,sVar3);
    sVar3 = strlen(pcVar6);
    iVar4 = sVar3 + sVar2 + 5;
    auStack_71[iVar4 + -3] = 0x5d;
    auStack_71[iVar4 + -2] = 0x5b;
    format_time_stamp(auStack_71 + iVar4 + -1,local_88[0],
                      (int)((longlong)local_80 * (longlong)DAT_0001400c >> 0x26) -
                      (local_80 >> 0x1f));
    auStack_5d[iVar4 + -5] = 0x5d;
    auStack_5d[iVar4 + -4] = 0;
    mpi_fs_buf_loop_add(DAT_00014010,&local_74,local_8c);
    mpi_fs_buf_loop_add(DAT_00014010,param_3);
  }
  if (local_34 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}



/* ===== vlog_version @ 00014014 size=144 ===== */

undefined4 vlog_version(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(**(int **)(param_1 + 0x80) + 0xa0);
  if (*(int *)(param_2 + 0x20) == 0x4c) {
    param_2[1] = 0;
    *param_2 = 1;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    sVar2 = strlen((char *)*puVar3);
    if (sVar2 < 0x11) {
      *(size_t *)(param_2 + 0xc) = sVar2;
    }
    else {
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0xc] = 0x10;
    }
    strncpy(param_2 + 0x10,(char *)*puVar3,*(size_t *)(param_2 + 0xc));
    uVar1 = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
  }
  else {
    vlog(0,2,DAT_000140a4,DAT_000140a8,0x77,param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== vlog_set_level @ 000140ac size=94 ===== */

undefined4 vlog_set_level(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar2 = param_2[2];
  uVar3 = *param_2;
  vlog(0,4,DAT_0001410c,DAT_00014110,0x90,uVar3,uVar2,param_4);
  if (param_2[1] == 0xc) {
    uVar2 = *param_2;
    if (uVar2 < 0x18) {
      if (uVar2 == 0x17) {
        iVar1 = 0;
        puVar4 = DAT_00014118;
        do {
          iVar1 = iVar1 + 1;
          *puVar4 = param_2[2];
          puVar4 = puVar4 + 1;
        } while (iVar1 != 0x17);
      }
      else {
        DAT_00014118[uVar2] = param_2[2];
      }
      return 0;
    }
  }
  else {
    vlog(0,2,DAT_00014114,DAT_00014110,0x92,uVar3,uVar2,param_4);
  }
  return 0xffffffff;
}



/* ===== vlog_release @ 0001411c size=46 ===== */

undefined4 vlog_release(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x80);
  mpi_obj_unref(*puVar1);
  vlog(0,5,DAT_0001414c,DAT_00014150,0xe3,*(undefined4 *)*puVar1);
  kfree(puVar1);
  return 0;
}



/* ===== vlog_open @ 00014154 size=82 ===== */

undefined4 vlog_open(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_000141a8 + 0xc),0xdc0,param_3,DAT_000141a8,
                                   param_1,param_2,param_3);
  iVar1 = DAT_000141b4;
  if (piVar2 == (int *)0x0) {
    vlog(0,2,DAT_000141ac,DAT_000141b0,0xd6);
    uVar3 = 0xffffffff;
  }
  else {
    iVar4 = DAT_000141b4 + 4;
    mpi_obj_ref(iVar4);
    uVar3 = *(undefined4 *)(iVar1 + 4);
    *piVar2 = iVar4;
    *(int **)(param_2 + 0x80) = piVar2;
    vlog(0,5,DAT_000141b8,DAT_000141b0,0xdb,uVar3);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== vlog_ioctl @ 000141bc size=84 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 vlog_ioctl(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_2 = param_2 & 0xff;
  iVar1 = DAT_00014244 + 4;
  iVar2 = *(int *)(DAT_00014244 + 0xa4);
  uVar3 = param_2;
  vlog(0,5,DAT_00014248,DAT_0001424c,0xb4,param_2,param_2,iVar1);
  if (*(uint *)(iVar2 + 0xd4) <= param_2) {
    vlog(0,2,DAT_00014250,DAT_0001424c,0xb7,param_2,uVar3,iVar1);
    return 0xffffffea;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== vlog_probe @ 00014258 size=128 ===== */

void vlog_probe(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = DAT_000142dc;
  puVar1 = DAT_000142d8;
  memset(DAT_000142d8,0,0xd8);
  uVar3 = kstrdup(param_1,0xcc0);
  puVar1[0x29] = puVar1;
  puVar1[0x35] = 2;
  puVar1[0x34] = iVar2;
  *puVar1 = uVar3;
  mpi_fs_buf_init(puVar1 + 0x2a,0xc800);
  mpi_dev_register(puVar1 + 1,8,param_1);
  puVar1[0x30] = puVar1 + 0x30;
  puVar1[0x31] = puVar1 + 0x30;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x2f] = 0;
  mpi_sysfs_dev_add(puVar1 + 1,iVar2 + 0x28);
  uVar4 = kthread_create_on_node(DAT_000142e0,puVar1,0xffffffff,param_1);
  if (uVar4 < 0xfffff001) {
    wake_up_process();
  }
  puVar1[0x32] = uVar4;
  return;
}



/* ===== vsys_init @ 000142e4 size=4 ===== */

undefined4 vsys_init(void)

{
  return 0;
}



/* ===== vsys_compat_ioctl @ 000142e8 size=4 ===== */

undefined4 vsys_compat_ioctl(void)

{
  return 0;
}



/* ===== vsys_get_pool @ 000142ec size=30 ===== */

undefined4 * vsys_get_pool(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*DAT_0001430c;
  while( true ) {
    if (puVar1 == DAT_0001430c) {
      return (undefined4 *)0x0;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + -9;
}



/* ===== vsys_add_node_to_map @ 00014310 size=208 ===== */

undefined4 vsys_add_node_to_map(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
LAB_0001431e:
    uVar1 = 0xffffffff;
  }
  else {
    vlog(0,5,DAT_000143f8,DAT_000143f4,0x1d2,param_1,param_2,param_3);
    switch(param_1) {
    case 4:
      if (((int)param_2 < 0) || (0x3f < param_3)) goto LAB_0001431e;
      *(int *)(DAT_000143fc + (param_3 + param_2 * 0x40) * 4 + 0x284) = param_4;
      break;
    case 6:
      if ((0xff < param_2) || (4 < param_3)) goto LAB_0001431e;
      *(int *)(DAT_000143fc + (param_3 + param_2 * 5) * 4 + 0x404) = param_4;
      break;
    case 8:
      if ((7 < param_2) || (5 < param_3)) goto LAB_0001431e;
      *(int *)(DAT_000143fc + (param_2 * 6 + param_3) * 4 + 0xc4) = param_4;
      break;
    case 0x11:
      if ((1 < param_2) || (3 < param_3)) goto LAB_0001431e;
      *(int *)(DAT_000143fc + (param_3 + param_2 * 4 + 0x600) * 4 + 4) = param_4;
      break;
    case 0x12:
      if (((int)param_2 < 0) || (0x3f < param_3)) goto LAB_0001431e;
      *(int *)(DAT_000143fc + (param_3 + param_2 * 0x40) * 4 + 0x184) = param_4;
      break;
    case 0x14:
      if (((int)param_2 < 0) || (0x1f < param_3)) goto LAB_0001431e;
      *(int *)(DAT_000143fc + (param_3 + param_2 * 0x20) * 4 + 900) = param_4;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== vsys_get_node_from_map @ 00014400 size=198 ===== */

undefined4 vsys_get_node_from_map(undefined4 param_1,uint param_2,uint param_3)

{
  vlog(0,5,DAT_000144dc,DAT_000144d8,0x1ff,param_1,param_2,param_3);
  switch(param_1) {
  case 4:
    if ((-1 < (int)param_2) && (param_3 < 0x40)) {
      return *(undefined4 *)(DAT_000144e0 + (param_3 + param_2 * 0x40) * 4 + 0x284);
    }
    break;
  case 6:
    if ((param_2 < 0x100) && (param_3 < 5)) {
      return *(undefined4 *)(DAT_000144e0 + (param_3 + param_2 * 5) * 4 + 0x404);
    }
    break;
  case 8:
    if ((param_2 < 8) && (param_3 < 6)) {
      return *(undefined4 *)(DAT_000144e0 + (param_2 * 6 + param_3) * 4 + 0xc4);
    }
    break;
  case 0x11:
    if ((param_2 < 2) && (param_3 < 4)) {
      return *(undefined4 *)(DAT_000144e0 + (param_3 + param_2 * 4 + 0x600) * 4 + 4);
    }
    break;
  case 0x12:
    if ((-1 < (int)param_2) && (param_3 < 0x40)) {
      return *(undefined4 *)(DAT_000144e0 + (param_3 + param_2 * 0x40) * 4 + 0x184);
    }
    break;
  case 0x14:
    if ((-1 < (int)param_2) && (param_3 < 0x20)) {
      return *(undefined4 *)(DAT_000144e0 + (param_3 + param_2 * 0x20) * 4 + 900);
    }
  }
  return 0;
}



/* ===== vsys_remove_node_from_map @ 000144e4 size=174 ===== */

undefined4 vsys_remove_node_from_map(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  vlog(0,5,DAT_000145a8,DAT_000145a4,0x22c,param_1,param_2,param_3);
  switch(param_1) {
  case 4:
    if ((-1 < (int)param_2) && (param_3 < 0x40)) {
      iVar1 = param_3 + param_2 * 0x40 + 0xa0;
LAB_00014536:
      *(undefined4 *)(DAT_000145ac + iVar1 * 4 + 4) = 0;
      return 0;
    }
    break;
  default:
    return 0;
  case 6:
    if ((param_2 < 0x100) && (param_3 < 5)) {
      iVar1 = param_3 + param_2 * 5 + 0x100;
      goto LAB_00014536;
    }
    break;
  case 8:
    if ((param_2 < 8) && (param_3 < 6)) {
      iVar1 = param_2 * 6 + param_3 + 0x30;
      goto LAB_00014536;
    }
    break;
  case 0x11:
    if ((param_2 < 2) && (param_3 < 4)) {
      iVar1 = param_3 + param_2 * 4 + 0x600;
      goto LAB_00014536;
    }
    break;
  case 0x12:
    if ((-1 < (int)param_2) && (param_3 < 0x40)) {
      iVar1 = param_3 + param_2 * 0x40 + 0x60;
      goto LAB_00014536;
    }
    break;
  case 0x14:
    if ((-1 < (int)param_2) && (param_3 < 0x20)) {
      iVar1 = param_3 + param_2 * 0x20 + 0xe0;
      goto LAB_00014536;
    }
  }
  return 0xffffffff;
}



/* ===== vsys_version @ 000145b0 size=138 ===== */

void vsys_version(int param_1,undefined1 *param_2)

{
  size_t sVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(**(int **)(param_1 + 0x80) + 0xa0);
  if (*(int *)(param_2 + 0x20) != 0x4c) {
    vlog(0,2,DAT_0001463c,DAT_00014640,0x5a,param_2);
  }
  param_2[1] = 0;
  *param_2 = 1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  sVar1 = strlen((char *)*puVar2);
  if (sVar1 < 0x11) {
    *(size_t *)(param_2 + 0xc) = sVar1;
  }
  else {
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0x10;
  }
  strncpy(param_2 + 0x10,(char *)*puVar2,*(size_t *)(param_2 + 0xc));
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  return;
}



/* ===== vsys_bind @ 00014644 size=116 ===== */

undefined4 vsys_bind(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = param_2;
  if (param_2[3] != 0x1c) {
    param_1 = 0x74;
    vlog(0,2,DAT_000146b8,DAT_000146bc,0x74,param_2,param_3);
  }
  iVar1 = *param_2;
  iVar3 = param_2[2];
  if (iVar1 == 6) {
    iVar3 = iVar3 + 1;
  }
  else {
    if (iVar1 != 0x11) goto LAB_0001466a;
    iVar3 = iVar3 + 2;
  }
  param_2[2] = iVar3;
LAB_0001466a:
  iVar1 = vsys_get_node_from_map(iVar1,param_2[1],param_2[2],iVar3,param_1);
  if (iVar1 == 0) {
    uVar4 = 0x80;
    uVar2 = DAT_000146c0;
  }
  else {
    iVar3 = vsys_get_node_from_map(param_2[4],param_2[5],param_2[6]);
    if (iVar3 != 0) {
      uVar2 = mpi_node_bind(iVar1,iVar3);
      return uVar2;
    }
    uVar4 = 0x88;
    uVar2 = DAT_000146c4;
  }
  vlog(0,2,uVar2,DAT_000146bc,uVar4,piVar5,param_3);
  return 0xffffffff;
}



/* ===== vsys_unbind @ 000146c8 size=114 ===== */

undefined4 vsys_unbind(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = param_2;
  if (param_2[3] != 0x1c) {
    param_1 = 0x9b;
    vlog(0,2,DAT_0001473c,DAT_00014740,0x9b,param_2,param_3);
  }
  iVar1 = *param_2;
  iVar3 = param_2[2];
  if (iVar1 == 6) {
    iVar3 = iVar3 + 1;
  }
  else {
    if (iVar1 != 0x11) goto LAB_000146ee;
    iVar3 = iVar3 + 2;
  }
  param_2[2] = iVar3;
LAB_000146ee:
  iVar1 = vsys_get_node_from_map(iVar1,param_2[1],param_2[2],iVar3,param_1);
  if (iVar1 == 0) {
    uVar4 = 0xa7;
    uVar2 = DAT_00014744;
  }
  else {
    iVar3 = vsys_get_node_from_map(param_2[4],param_2[5],param_2[6]);
    if (iVar3 != 0) {
      mpi_node_unbind(iVar1,iVar3);
      return 0;
    }
    uVar4 = 0xaf;
    uVar2 = DAT_00014748;
  }
  vlog(0,2,uVar2,DAT_00014740,uVar4,piVar5,param_3);
  return 0xffffffff;
}



/* ===== vsys_thread_fn @ 0001474c size=40 ===== */

undefined4 vsys_thread_fn(int param_1)

{
  int iVar1;
  
  while (iVar1 = kthread_should_stop(), iVar1 == 0) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      down(param_1 + 0xa8);
    }
    else {
      msleep(1);
    }
  }
  return 0;
}



/* ===== vsys_pool_delete @ 00014774 size=126 ===== */

undefined4 vsys_pool_delete(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x80);
  if (param_2[4] != 0x214) {
    vlog(0,2,DAT_000147f4,DAT_000147f8,0x140,param_2,param_3);
  }
  vlog(0,4,DAT_000147fc,DAT_000147f8,0x142,*param_2,param_3);
  piVar4 = (int *)(iVar5 + 0x18);
  piVar3 = (int *)*piVar4;
  piVar2 = (int *)*piVar3;
  while( true ) {
    piVar1 = piVar2;
    if (piVar3 == piVar4) {
      return 0;
    }
    if (piVar3[-1] == *param_2) break;
    piVar2 = (int *)*piVar1;
    piVar3 = piVar1;
  }
  iVar5 = *piVar3;
  piVar4 = (int *)piVar3[1];
  *(int **)(iVar5 + 4) = piVar4;
  *piVar4 = iVar5;
  *piVar3 = 0x100;
  piVar3[1] = 0x122;
  mpi_buf_pool_destroy(piVar3 + -0xc,1);
  return 0;
}



/* ===== vsys_read @ 00014800 size=480 ===== */

int vsys_read(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar6 = *(int *)(param_1 + 0x80) + 4;
  iVar4 = mpi_fs_buf_read(iVar6);
  puVar1 = DAT_000149ec;
  if (iVar4 != -1) {
    if (iVar4 == 0) {
      mpi_fs_buf_reset(iVar6);
    }
    return iVar4;
  }
  mpi_fs_buf_add(iVar6,DAT_000149e8,*DAT_000149e4,DAT_000149f0,DAT_000149e0);
  uVar3 = DAT_00014a14;
  mpi_fs_buf_add(iVar6,DAT_000149f4);
  uVar2 = DAT_00014a0c;
  mpi_fs_buf_add(iVar6,DAT_000149f8);
  for (puVar5 = (undefined4 *)*puVar1; puVar5 != puVar1; puVar5 = (undefined4 *)*puVar5) {
    iVar4 = mpi_fs_buf_add(iVar6,DAT_000149fc,puVar5[-9],*(undefined4 *)(puVar5[2] + 0x2c),puVar5[5]
                           ,puVar5[-5],puVar5[0x12],puVar5[0x14],puVar5[0x15],puVar5[0x17],
                           puVar5[0x54],puVar5[0x52],puVar5[0x50],puVar5[0x20],puVar5[0x22],
                           puVar5[0x23],puVar5[0x25],puVar5[0x55],puVar5[0x53],puVar5[0x51],
                           puVar5[0x37],puVar5[0x38],puVar5[-6]);
    if (iVar4 != 0) break;
    puVar7 = (undefined4 *)puVar5[0x3c];
    while ((puVar7 != puVar5 + 0x3c &&
           (iVar4 = mpi_fs_buf_add(iVar6,uVar3,*(undefined4 *)puVar7[-1]), iVar4 == 0))) {
      puVar7 = (undefined4 *)*puVar7;
    }
    mpi_fs_buf_add(iVar6,uVar2);
  }
  mpi_fs_buf_add(iVar6,DAT_00014a00);
  uVar2 = DAT_00014a18;
  mpi_fs_buf_add(iVar6,DAT_00014a04);
  uVar3 = DAT_00014a1c;
  for (puVar5 = (undefined4 *)*puVar1; puVar7 = puVar5 + -9, puVar5 != puVar1;
      puVar5 = (undefined4 *)*puVar5) {
    if (puVar5[0x17] != 0) {
      iVar4 = mpi_fs_buf_add(iVar6,uVar2,*puVar7,*(undefined4 *)(puVar5[2] + 0x2c),DAT_00014a08);
      if (iVar4 != 0) break;
      puVar8 = puVar5 + 0x18;
      do {
        if ((int)puVar5[0x17] <= (int)((-0x84 - (int)puVar7) + (int)puVar8)) break;
        iVar4 = mpi_fs_buf_add(iVar6,uVar3,*(undefined1 *)puVar8);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      } while (iVar4 == 0);
      mpi_fs_buf_add(iVar6,DAT_00014a0c);
    }
    if (puVar5[0x25] != 0) {
      iVar4 = mpi_fs_buf_add(iVar6,uVar2,*puVar7,*(undefined4 *)(puVar5[2] + 0x2c),DAT_00014a10);
      if (iVar4 != 0) break;
      puVar8 = puVar5 + 0x26;
      do {
        if ((int)puVar5[0x25] <= (int)((-0xbc - (int)puVar7) + (int)puVar8)) break;
        iVar4 = mpi_fs_buf_add(iVar6,uVar3,*(undefined1 *)puVar8);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      } while (iVar4 == 0);
      mpi_fs_buf_add(iVar6,DAT_00014a0c);
    }
  }
  iVar4 = mpi_fs_buf_read(iVar6,param_2,param_3);
  return iVar4;
}



/* ===== vsys_free_all_cma @ 00014a20 size=10 ===== */

undefined4 vsys_free_all_cma(void)

{
  free_all_cma();
  return 0;
}



/* ===== vsys_wait_rcu @ 00014a2a size=10 ===== */

undefined4 vsys_wait_rcu(void)

{
  synchronize_rcu();
  return 0;
}



/* ===== vsys_pool_create @ 00014a34 size=258 ===== */

undefined4 vsys_pool_create(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int local_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  
  iVar6 = *(int *)(param_1 + 0x80);
  local_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  if (param_2[4] != 0x214) {
    local_30 = 0x10d;
    vlog(0,2,DAT_00014b38,DAT_00014b3c);
  }
  iVar2 = mpi_allocator_find_by_name(DAT_00014b40);
  if (iVar2 == 0) {
    local_30 = 0x112;
    uVar4 = DAT_00014b44;
  }
  else {
    local_30 = *(int *)(((uint)&local_30 & 0xffffe000) + 0xc) + 0x2e0;
    iVar3 = mpi_buf_pool_create(iVar2,1,param_2[3],0);
    if (iVar3 != 0) {
      piVar5 = *(int **)(iVar6 + 0x1c);
      *(int *)(iVar6 + 0x1c) = iVar3 + 0x30;
      uVar4 = DAT_00014b3c;
      *(int *)(iVar3 + 0x30) = iVar6 + 0x18;
      *(int **)(iVar3 + 0x34) = piVar5;
      *piVar5 = iVar3 + 0x30;
      uVar1 = DAT_00014b4c;
      *(undefined4 *)(iVar3 + 0x2c) = *param_2;
      for (iVar6 = 0; iVar6 < (int)param_2[1]; iVar6 = iVar6 + 1) {
        if (param_2[2] == 0) {
          iVar2 = mpi_obj_from_id(param_2[iVar6 + 5],4);
          local_2c = (undefined4 *)param_2[iVar6 + 5];
          local_30 = 0x128;
          vlog(0,4,uVar1,uVar4);
          if (iVar2 != 0) {
            mpi_buf_pool_import(iVar3,iVar2);
            mpi_obj_unref(iVar2);
          }
        }
        else {
          iVar2 = dma_buf_get();
          if (iVar2 != 0) {
            mpi_buf_pool_import_dmabuf(iVar3,iVar2,1);
            dma_buf_put(iVar2);
          }
        }
      }
      return 0;
    }
    local_30 = 0x118;
    uVar4 = DAT_00014b48;
  }
  local_2c = (undefined4 *)iVar2;
  vlog(0,2,uVar4,DAT_00014b3c);
  return 0xffffffff;
}



/* ===== vsys_ioctl @ 00014b50 size=88 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 vsys_ioctl(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_2 = param_2 & 0xff;
  iVar1 = DAT_00014be0 + 4;
  iVar2 = *(int *)(DAT_00014be0 + 0xa4);
  uVar3 = param_2;
  vlog(0,5,DAT_00014be4,DAT_00014be8,0x17f,param_2,param_2,iVar1);
  if (*(uint *)(iVar2 + 0xc0) <= param_2) {
    vlog(0,2,DAT_00014bec,DAT_00014be8,0x182,param_2,uVar3,iVar1);
    return 0xffffffea;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== vsys_deinit @ 00014bf4 size=362 ===== */

undefined4 vsys_deinit(int param_1)

{
  int *piVar1;
  char *__s2;
  char *__s2_00;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *__s1;
  
  if (*(int *)(**(int **)(param_1 + 0x80) + 0x10) < 2) {
    iVar3 = *(int *)(**(int **)(param_1 + 0x80) + 0xa0);
    piVar4 = (int *)(iVar3 + 0xc4);
    do {
      iVar6 = 6;
      piVar5 = piVar4;
      do {
        if (*piVar5 != 0) {
          mpi_node_destroy();
          *piVar5 = 0;
        }
        iVar6 = iVar6 + -1;
        piVar5 = piVar5 + 1;
      } while (iVar6 != 0);
      piVar4 = piVar4 + 6;
    } while (piVar4 != (int *)(iVar3 + 0x184));
    piVar4 = (int *)(iVar3 + 0x284);
    do {
      piVar5 = piVar4 + 1;
      if (*piVar4 != 0) {
        mpi_node_destroy();
        *piVar4 = 0;
      }
      piVar4 = piVar5;
    } while (piVar5 != (int *)(iVar3 + 900));
    piVar4 = (int *)(iVar3 + 0x408);
    do {
      iVar6 = 4;
      piVar5 = piVar4;
      do {
        if (*piVar5 != 0) {
          mpi_node_unbind(piVar4[-1]);
          *piVar5 = 0;
        }
        iVar6 = iVar6 + -1;
        piVar5 = piVar5 + 1;
      } while (iVar6 != 0);
      piVar4[-1] = 0;
      piVar4 = piVar4 + 5;
      piVar5 = (int *)(iVar3 + 0x184);
    } while (piVar4 != (int *)(iVar3 + 0x1808));
    do {
      piVar4 = piVar5 + 1;
      if (*piVar5 != 0) {
        mpi_node_destroy();
        *piVar5 = 0;
      }
      piVar5 = piVar4;
    } while ((int *)(iVar3 + 0x284) != piVar4);
    piVar4 = (int *)(iVar3 + 900);
    do {
      piVar5 = piVar4 + 1;
      if (*piVar4 != 0) {
        mpi_node_destroy();
        *piVar4 = 0;
      }
      piVar4 = piVar5;
    } while (piVar5 != (int *)(iVar3 + 0x404));
    piVar4 = (int *)(iVar3 + 0x1804);
    do {
      piVar5 = piVar4 + 1;
      if (*piVar4 != 0) {
        mpi_node_destroy();
        *piVar4 = 0;
      }
      piVar4 = piVar5;
    } while ((int *)(iVar3 + 0x1814) != piVar5);
    piVar4 = (int *)(iVar3 + 0x1814);
    do {
      piVar5 = piVar4 + 1;
      if (*piVar4 != 0) {
        mpi_node_destroy();
        *piVar4 = 0;
      }
      __s2_00 = DAT_00014d6c;
      __s2 = DAT_00014d68;
      piVar2 = DAT_00014d60;
      piVar4 = piVar5;
    } while (piVar5 != (int *)(iVar3 + 0x1824));
    piVar5 = *(int **)*DAT_00014d60;
    piVar4 = (undefined4 *)*DAT_00014d60;
    while (piVar1 = piVar5, piVar5 = DAT_00014d64, piVar4 != piVar2) {
      for (iVar3 = 0; iVar3 < piVar4[-5]; iVar3 = iVar3 + 1) {
        __s1 = (char *)piVar4[-8];
        iVar6 = strcmp(__s1,__s2);
        if ((iVar6 != 0) && (iVar6 = strcmp(__s1,__s2_00), iVar6 != 0)) {
          mpi_obj_unref(piVar4 + -9);
        }
      }
      piVar5 = (int *)*piVar1;
      piVar4 = piVar1;
    }
    piVar2 = *(int **)*DAT_00014d64;
    piVar4 = (undefined4 *)*DAT_00014d64;
    while (piVar1 = piVar2, piVar4 != piVar5) {
      mpi_buf_pool_destroy(piVar4 + -9,1);
      piVar2 = (int *)*piVar1;
      piVar4 = piVar1;
    }
  }
  return 0;
}



/* ===== vsys_open @ 00014d70 size=100 ===== */

undefined4 vsys_open(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)
           kmem_cache_alloc(*(undefined4 *)(DAT_00014dd4 + 0x14),0xdc0,param_3,DAT_00014dd4,param_1,
                            param_2,param_3);
  if (puVar2 == (undefined4 *)0x0) {
    vlog(0,2,DAT_00014dd8,DAT_00014ddc,0x1a1);
  }
  else {
    iVar3 = mpi_fs_buf_init(puVar2 + 1,0x2800);
    puVar1 = DAT_00014de0;
    if (iVar3 == 0) {
      puVar2[6] = puVar2 + 6;
      puVar2[7] = puVar2 + 6;
      mpi_obj_ref(puVar1);
      *puVar2 = puVar1;
      *(undefined4 **)(param_2 + 0x80) = puVar2;
      printk(DAT_00014de4,*puVar1);
      return 0;
    }
    kfree(puVar2);
  }
  return 0xffffffff;
}



/* ===== vsys_release @ 00014de8 size=156 ===== */

undefined4 vsys_release(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = *(int **)(param_2 + 0x80);
  mpi_obj_unref(*piVar7);
  vlog(0,4,DAT_00014e84,DAT_00014e88,0x1b5,*(undefined4 *)*piVar7,param_3);
  if (*(int *)(*piVar7 + 0x10) == 1) {
    vsys_deinit(param_2,0);
  }
  uVar3 = DAT_00014e8c;
  uVar2 = DAT_00014e88;
  piVar6 = (int *)piVar7[6];
  piVar5 = (int *)*piVar6;
  while (piVar1 = piVar5, piVar6 != piVar7 + 6) {
    vlog(0,4,uVar3,uVar2,0x1ba,piVar6[-0xc],param_3);
    iVar4 = *piVar6;
    piVar5 = (int *)piVar6[1];
    *(int **)(iVar4 + 4) = piVar5;
    *piVar5 = iVar4;
    *piVar6 = 0x100;
    piVar6[1] = 0x122;
    piVar5 = (int *)*piVar1;
    piVar6 = piVar1;
  }
  mpi_fs_buf_deinit(piVar7 + 1);
  kfree(piVar7);
  return 0;
}



/* ===== vsys_probe @ 00014e90 size=118 ===== */

void vsys_probe(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = DAT_00014f0c;
  puVar1 = DAT_00014f08;
  memset(DAT_00014f08,0,0x1824);
  uVar3 = kstrdup(param_1,0xcc0);
  puVar1[0x2f] = iVar2;
  puVar1[0x30] = 9;
  puVar1[0x29] = puVar1;
  *puVar1 = uVar3;
  mpi_dev_register(puVar1 + 1,8,param_1);
  puVar1[0x2b] = puVar1 + 0x2b;
  puVar1[0x2c] = puVar1 + 0x2b;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x2a] = 0;
  mpi_sysfs_dev_add(puVar1 + 1,iVar2 + 0xb4);
  uVar4 = kthread_create_on_node(DAT_00014f14,puVar1,0xffffffff,DAT_00014f10);
  if (uVar4 < 0xfffff001) {
    wake_up_process();
  }
  puVar1[0x2d] = uVar4;
  return;
}



/* ===== vsys_shutdown @ 00014f18 size=14 ===== */

void vsys_shutdown(void)

{
  *(undefined4 *)(DAT_00014f28 + 0xb8) = 1;
  mpi_dev_unregister();
  return;
}



/* ===== vsys_close @ 00014f2c size=146 ===== */

void vsys_close(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = DAT_00014fc0;
  iVar1 = 0;
  do {
    iVar3 = 0;
    piVar4 = (int *)(iVar2 + iVar1);
    do {
      if (*piVar4 != 0) {
        mpi_node_stream_pause();
        param_2 = extraout_r1;
        param_3 = extraout_r2;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 != 6);
    iVar1 = iVar1 + 0x18;
  } while (iVar1 != 0xc0);
  iVar2 = 0;
  piVar4 = DAT_00014fc4;
  do {
    if (*piVar4 != 0) {
      mpi_node_stream_pause();
      param_2 = extraout_r1_00;
      param_3 = extraout_r2_00;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar2 != 0x40);
  iVar2 = 0;
  piVar4 = DAT_00014fc8;
  do {
    if (*piVar4 != 0) {
      mpi_node_stream_pause();
      param_2 = extraout_r1_01;
      param_3 = extraout_r2_01;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar2 != 0x40);
  iVar2 = 0;
  piVar4 = DAT_00014fcc;
  do {
    if (*piVar4 != 0) {
      mpi_node_stream_pause();
      param_2 = extraout_r1_02;
      param_3 = extraout_r2_02;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar2 != 0x20);
  iVar2 = 0;
  piVar4 = DAT_00014fd0;
  do {
    if (*piVar4 != 0) {
      mpi_node_stream_pause();
      param_2 = extraout_r1_03;
      param_3 = extraout_r2_03;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar2 != 4);
  iVar2 = 0;
  piVar4 = DAT_00014fd4;
  do {
    if (*piVar4 != 0) {
      mpi_node_stream_pause();
      param_2 = extraout_r1_04;
      param_3 = extraout_r2_04;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar2 != 4);
  msleep(100,param_2,param_3,param_4);
  return;
}



/* ===== vpss_map_node_get @ 00014fd8 size=4 ===== */

undefined4 vpss_map_node_get(void)

{
  return 0;
}



/* ===== vpss_compat_ioctl @ 00014fdc size=4 ===== */

undefined4 vpss_compat_ioctl(void)

{
  return 0;
}



/* ===== vpss_open @ 00014fe0 size=10 ===== */

undefined4 vpss_open(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x80) = DAT_00014fec;
  return 0;
}



/* ===== vpss_map_node_set @ 00014ff0 size=218 ===== */

undefined4 vpss_map_node_set(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_2 + 5);
  if (*(int *)(param_2 + 9) == 0x19) {
    iVar1 = *(int *)(param_2 + 0xd);
    if (iVar1 == 0x12) {
      iVar1 = vsys_get_node_from_map
                        (0x12,*(undefined4 *)(param_2 + 0x11),*(undefined4 *)(param_2 + 0x15));
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_2 + 0x15);
        uVar5 = 0x56;
        uVar3 = DAT_000150d8;
      }
      else {
        if (*param_2 != '\0') {
LAB_00015092:
          vsys_add_node_to_map(6,*(undefined4 *)(param_2 + 1),iVar4,iVar1);
          vlog(0,5,DAT_000150e4,DAT_000150d0,0x69,*param_2,*(undefined4 *)(param_2 + 1),
               *(undefined4 *)(param_2 + 5),*(undefined4 *)(param_2 + 0x15));
          return 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = vsys_get_node_from_map(6,*(undefined4 *)(param_2 + 1),0);
        if (iVar2 != 0) {
          iVar2 = mpi_node_bind(iVar2,iVar1);
          if (iVar2 == 0) goto LAB_00015092;
          uVar5 = 0x62;
          uVar3 = DAT_000150e0;
          goto LAB_0001500e;
        }
        iVar1 = *(int *)(param_2 + 1);
        uVar5 = 0x5d;
        uVar3 = DAT_000150dc;
      }
    }
    else {
      uVar5 = 0x50;
      uVar3 = DAT_000150d4;
    }
    vlog(0,2,uVar3,DAT_000150d0,uVar5,iVar1);
  }
  else {
    uVar5 = 0x4b;
    uVar3 = DAT_000150cc;
LAB_0001500e:
    vlog(0,2,uVar3,DAT_000150d0,uVar5);
  }
  return 0xffffffff;
}



/* ===== vpss_map_node_remove @ 000150e8 size=286 ===== */

undefined4 vpss_map_node_remove(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar4 = *(int *)(param_2 + 5);
  if (*(int *)(param_2 + 9) == 0x19) {
    if (*(int *)(param_2 + 0xd) == 0x12) {
      iVar1 = vsys_get_node_from_map(6,*(undefined4 *)(param_2 + 1),0);
      uVar6 = DAT_00015220;
      uVar3 = DAT_0001520c;
      if (iVar1 == 0) {
        uVar6 = 0x84;
        uVar3 = DAT_00015214;
        iVar4 = *(int *)(param_2 + 1);
      }
      else {
        if (*param_2 != '\0') {
          iVar4 = 1;
          do {
            iVar2 = vsys_get_node_from_map(6,*(undefined4 *)(param_2 + 1),iVar4);
            if (iVar2 != 0) {
              uVar5 = *(undefined4 *)(iVar2 + 0x38);
              mpi_node_unbind(iVar1,iVar2);
              vsys_remove_node_from_map(6,*(undefined4 *)(param_2 + 1),iVar4);
              vlog(0,5,uVar6,uVar3,0x9d,*(undefined4 *)(param_2 + 1),iVar4 + -1,uVar5);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 5);
          vsys_remove_node_from_map(6,*(undefined4 *)(param_2 + 1),0);
          return 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = vsys_get_node_from_map(6,*(int *)(param_2 + 1),iVar4);
        if (iVar2 != 0) {
          mpi_node_unbind(iVar1,iVar2);
          vsys_remove_node_from_map(6,*(undefined4 *)(param_2 + 1),iVar4);
          vlog(0,5,DAT_0001521c,DAT_0001520c,0x92,*(undefined4 *)(param_2 + 1),
               *(undefined4 *)(param_2 + 5),iVar4);
          return 0;
        }
        uVar6 = 0x8c;
        uVar3 = DAT_00015218;
      }
    }
    else {
      uVar6 = 0x7e;
      uVar3 = DAT_00015210;
      iVar4 = *(int *)(param_2 + 0xd);
    }
    vlog(0,2,uVar3,DAT_0001520c,uVar6,iVar4);
  }
  else {
    vlog(0,2,DAT_00015208,DAT_0001520c,0x7a);
  }
  return 0xffffffff;
}



/* ===== vpss_thread_fn @ 00015224 size=40 ===== */

undefined4 vpss_thread_fn(int param_1)

{
  int iVar1;
  
  while (iVar1 = kthread_should_stop(), iVar1 == 0) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      down(param_1 + 0xa8);
    }
    else {
      msleep(1);
    }
  }
  return 0;
}



/* ===== vpss_ioctl @ 0001524c size=84 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 vpss_ioctl(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_2 = param_2 & 0xff;
  iVar1 = *(int *)(param_1 + 0x80);
  iVar2 = *(int *)(iVar1 + 0xa0);
  uVar3 = param_2;
  vlog(0,5,DAT_000152d4,DAT_000152d8,0xbb,param_2,param_2,iVar1);
  if (*(uint *)(iVar2 + 0xc0) <= param_2) {
    vlog(0,2,DAT_000152dc,DAT_000152d8,0xbe,param_2,uVar3,iVar1);
    return 0xffffffea;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== vpss_version @ 000152e4 size=142 ===== */

undefined4 vpss_version(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x80) + 0xa0);
  if (*(int *)(param_2 + 0x20) == 0x4c) {
    param_2[1] = 0;
    *param_2 = 1;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    sVar2 = strlen((char *)*puVar3);
    if (sVar2 < 0x11) {
      *(size_t *)(param_2 + 0xc) = sVar2;
    }
    else {
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0xc] = 0x10;
    }
    strncpy(param_2 + 0x10,(char *)*puVar3,*(size_t *)(param_2 + 0xc));
    uVar1 = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
  }
  else {
    vlog(0,2,DAT_00015374,DAT_00015378,0x34,param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== vpss_probe @ 0001537c size=116 ===== */

void vpss_probe(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = DAT_000153f4;
  puVar1 = DAT_000153f0;
  memset(DAT_000153f0,0,0xc4);
  uVar3 = kstrdup(param_1,0xcc0);
  puVar1[0x2f] = iVar2;
  puVar1[0x30] = 4;
  puVar1[0x29] = puVar1;
  *puVar1 = uVar3;
  mpi_dev_register(puVar1 + 1,8,param_1);
  puVar1[0x2b] = puVar1 + 0x2b;
  puVar1[0x2c] = puVar1 + 0x2b;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x2a] = 0;
  mpi_sysfs_dev_add(puVar1 + 1,iVar2 + 0x50);
  uVar4 = kthread_create_on_node(DAT_000153fc,puVar1,0xffffffff,DAT_000153f8);
  if (uVar4 < 0xfffff001) {
    wake_up_process();
  }
  puVar1[0x2d] = uVar4;
  return;
}



/* ===== vpss_shutdown @ 00015400 size=14 ===== */

void vpss_shutdown(void)

{
  *(undefined4 *)(DAT_00015410 + 0xb8) = 1;
  mpi_dev_unregister();
  return;
}



/* ===== vrgn_compat_ioctl @ 00015414 size=4 ===== */

undefined4 vrgn_compat_ioctl(void)

{
  return 0;
}



/* ===== osd_sync_callback @ 00015418 size=44 ===== */

void osd_sync_callback(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x54); puVar1 != (undefined4 *)(param_1 + 0x54);
      puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[2] + 0x30) == 1) {
      disableIRQinterrupts();
      complete_all(puVar1[2] + 0xc);
    }
  }
  return;
}



/* ===== vrgn_ioctl @ 00015444 size=90 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 vrgn_ioctl(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_2 = param_2 & 0xff;
  iVar1 = **(int **)(param_1 + 0x80);
  iVar2 = *(int *)(iVar1 + 0xa0);
  uVar3 = param_2;
  vlog(3,5,DAT_000154d4,DAT_000154d8,0x323,param_2,param_2,iVar1);
  if (*(uint *)(iVar2 + 0xc0) <= param_2) {
    vlog(3,2,DAT_000154dc,DAT_000154d8,0x326,param_2,uVar3,iVar1);
    return 0xffffffea;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== vrgn_read @ 000154e4 size=378 ===== */

int vrgn_read(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  piVar8 = *(int **)(param_1 + 0x80) + 1;
  iVar12 = *(int *)(**(int **)(param_1 + 0x80) + 0xa0);
  iVar2 = mpi_fs_buf_read(piVar8);
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      mpi_fs_buf_reset(piVar8);
    }
    return iVar2;
  }
  uVar13 = DAT_00015660;
  mpi_fs_buf_add(piVar8,DAT_00015668,*DAT_00015664,DAT_0001566c,DAT_00015660);
  iVar2 = DAT_00015674;
  mpi_fs_buf_add(piVar8,DAT_00015670);
  uVar1 = DAT_00015694;
  mpi_fs_buf_add(piVar8,DAT_00015678);
  for (piVar9 = *(int **)(iVar12 + 0xc4); piVar9 != (int *)(iVar12 + 0xc4); piVar9 = (int *)*piVar9)
  {
    iVar6 = piVar9[8];
    if ((((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 2)) ||
       ((iVar6 == 3 || (uVar7 = uVar1, iVar6 == 4)))) {
      uVar7 = *(undefined4 *)(iVar2 + iVar6 * 8 + 0x10);
    }
    uVar13 = piVar9[10];
    iVar6 = 0;
    do {
      if (piVar9[9] == *(int *)(iVar2 + 0x34 + iVar6 * 8)) {
        uVar14 = *(undefined4 *)(iVar2 + iVar6 * 8 + 0x38);
        break;
      }
      iVar6 = iVar6 + 1;
      uVar14 = uVar1;
    } while (iVar6 != 0xd);
    puVar3 = (undefined4 *)piVar9[0x10e];
    if (puVar3 == (undefined4 *)0x0) {
      uVar5 = 0xffffffff;
      uVar4 = 0xffffffff;
    }
    else {
      uVar5 = *puVar3;
      uVar4 = puVar3[4];
    }
    iVar6 = mpi_fs_buf_add(piVar8,DAT_0001567c,piVar9[6],uVar7,uVar13,piVar9[0xb],uVar14,uVar5,uVar4
                          );
    if ((iVar6 != 0) || (iVar6 = mpi_fs_buf_add(piVar8,DAT_00015690,piVar9[7]), iVar6 != 0)) break;
    mpi_fs_buf_add(piVar8,DAT_0001568c);
  }
  puVar3 = DAT_00015680;
  mpi_fs_buf_add(piVar8,DAT_00015684);
  uVar1 = DAT_00015698;
  mpi_fs_buf_add(piVar8,DAT_00015688);
  uVar7 = DAT_0001569c;
  puVar10 = (undefined4 *)*puVar3;
  do {
    if ((puVar10 == puVar3) ||
       (iVar2 = mpi_fs_buf_add(piVar8,uVar1,puVar10[-9],*(undefined4 *)(puVar10[2] + 0x2c),uVar13),
       iVar2 != 0)) {
      mpi_fs_buf_add(piVar8,DAT_0001568c);
      iVar2 = mpi_fs_buf_read(piVar8,param_2,param_3);
      return iVar2;
    }
    if (puVar10[0xe] != 0) {
      for (puVar11 = (undefined4 *)puVar10[0xc]; puVar11 != puVar10 + 0xc;
          puVar11 = (undefined4 *)*puVar11) {
        uVar13 = puVar11[7];
        iVar2 = mpi_fs_buf_add(piVar8,uVar7,*(undefined4 *)(puVar11[2] + 0x18),puVar11[6],uVar13);
        if (iVar2 != 0) break;
      }
    }
    mpi_fs_buf_add(piVar8,DAT_0001568c);
    puVar10 = (undefined4 *)*puVar10;
  } while( true );
}



/* ===== vrgn_version @ 000156a0 size=146 ===== */

undefined4 vrgn_version(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(**(int **)(param_1 + 0x80) + 0xa0);
  if (*(int *)(param_2 + 0x20) == 0x4c) {
    param_2[1] = 0;
    *param_2 = 1;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    sVar2 = strlen((char *)*puVar3);
    if (sVar2 < 0x11) {
      *(size_t *)(param_2 + 0xc) = sVar2;
    }
    else {
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0xc] = 0x10;
    }
    strncpy(param_2 + 0x10,(char *)*puVar3,*(size_t *)(param_2 + 0xc));
    uVar1 = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
  }
  else {
    vlog(3,2,DAT_00015734,DAT_00015738,0x24d,param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== vrgn_open @ 0001573c size=86 ===== */

undefined4 vrgn_open(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)
           kmem_cache_alloc(*(undefined4 *)(DAT_00015794 + 0x14),0xdc0,param_3,DAT_00015794,param_1,
                            param_2,param_3);
  if (puVar2 == (undefined4 *)0x0) {
    vlog(3,2,DAT_00015798,DAT_0001579c,0x345);
  }
  else {
    iVar3 = mpi_fs_buf_init(puVar2 + 1,0x1400);
    uVar1 = DAT_000157a0;
    if (iVar3 == 0) {
      mpi_obj_ref(DAT_000157a0);
      *puVar2 = uVar1;
      *(undefined4 **)(param_2 + 0x80) = puVar2;
      return 0;
    }
    kfree(puVar2);
  }
  return 0xffffffff;
}



/* ===== out_filter_callback @ 000157a4 size=122 ===== */

void out_filter_callback(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  disableIRQinterrupts();
  piVar2 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_00015820 + 0x10),0xdc0);
  if (piVar2 != (int *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      mpi_obj_ref(param_2);
    }
    piVar2[3] = (int)param_2;
    if (param_1 != (undefined4 *)0x0) {
      mpi_obj_ref(param_1);
    }
    iVar1 = DAT_00015824;
    piVar2[2] = (int)param_1;
    piVar3 = *(int **)(iVar1 + 0xd0);
    *(int **)(iVar1 + 0xd0) = piVar2;
    *piVar2 = iVar1 + 0xcc;
    piVar2[1] = (int)piVar3;
    *piVar3 = (int)piVar2;
    vlog(3,5,DAT_00015828,DAT_0001582c,0x159,*(undefined4 *)(iVar1 + 0x30),piVar2,*param_1,*param_2)
    ;
    up(iVar1 + 0xa8);
  }
  return;
}



/* ===== vrgn_release @ 00015830 size=120 ===== */

undefined4 vrgn_release(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  piVar8 = *(int **)(param_2 + 0x80);
  iVar5 = *piVar8;
  iVar7 = *(int *)(iVar5 + 0xa0);
  mpi_obj_unref(iVar5);
  uVar3 = DAT_000158ac;
  uVar2 = DAT_000158a8;
  if (*(int *)(iVar5 + 0x10) == 1) {
    piVar1 = (int *)(iVar7 + 0xc4);
    piVar6 = (int *)*piVar1;
    piVar9 = (int *)*piVar6;
    while (piVar6 != piVar1) {
      if (piVar6 != (int *)0x0) {
        vlog(3,4,uVar3,uVar2,0x35f,piVar6[6],param_3);
        iVar5 = *piVar6;
        piVar4 = (int *)piVar6[1];
        *(int **)(iVar5 + 4) = piVar4;
        *piVar4 = iVar5;
        *piVar6 = 0x100;
        piVar6[1] = 0x122;
        kfree(piVar6);
      }
      piVar6 = piVar9;
      piVar9 = (int *)*piVar9;
    }
  }
  mpi_fs_buf_deinit(piVar8 + 1);
  kfree(piVar8);
  return 0;
}



/* ===== vrgn_thread_fn @ 000158b0 size=1040 ===== */

undefined4 vrgn_thread_fn(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  bool bVar18;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_2c;
  
  iVar1 = DAT_00015bb0;
  do {
    do {
      while( true ) {
        iVar2 = kthread_should_stop();
        if (iVar2 != 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0xb8) == 0) break;
        msleep();
      }
      down(param_1 + 0xa8);
      disableIRQinterrupts();
      piVar14 = *(int **)(param_1 + 0xcc);
    } while ((piVar14 == (int *)(param_1 + 0xcc)) || (piVar14 == (int *)0x0));
    iVar2 = *piVar14;
    piVar11 = (int *)piVar14[1];
    *(int **)(iVar2 + 4) = piVar11;
    *piVar11 = iVar2;
    *piVar14 = 0x100;
    piVar14[1] = 0x122;
    puVar15 = (undefined4 *)piVar14[2];
    puVar13 = (undefined4 *)piVar14[3];
    vlog(3,5,DAT_00015b98,DAT_00015b9c,0x112,*(undefined4 *)(param_1 + 0x30),piVar14,*puVar15,
         *puVar13);
    if (puVar15[0x17] == 0) {
LAB_00015c08:
      if ((piVar14[2] != 0) && ((*(uint *)(piVar14[2] + 0xc) & 6) == 2)) {
        iVar2 = piVar14[3];
        if (iVar2 != 0) {
          iVar10 = puVar15[0x13];
          bVar18 = -1 < iVar10;
          if (bVar18) {
            iVar2 = iVar2 + (iVar10 + 0x10) * 4;
            iVar10 = 0;
          }
          if (bVar18) {
            *(int *)(iVar2 + 4) = iVar10;
          }
        }
        for (puVar13 = (undefined4 *)puVar15[0x45]; puVar13 != puVar15 + 0x45;
            puVar13 = (undefined4 *)*puVar13) {
          mpi_node_buffer_in(puVar13[-1],piVar14[3],0);
        }
      }
      mpi_obj_unref(piVar14[2]);
      puVar13 = (undefined4 *)piVar14[3];
    }
    else {
      disableIRQinterrupts();
      uVar9 = extraout_r2;
      for (puVar17 = (undefined4 *)puVar15[0x15]; puVar17 != puVar15 + 0x15;
          puVar17 = (undefined4 *)*puVar17) {
        if (*(int *)(puVar17[2] + 0x438) != 0) {
          local_3c = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xdc0);
          local_38 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xdc0);
          local_34 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xdc0);
          if (((local_3c != (undefined4 *)0x0) && (local_38 != (undefined4 *)0x0)) &&
             (local_34 != (undefined4 *)0x0)) {
            if ((puVar13 == (undefined4 *)0x0) ||
               (puVar16 = *(undefined4 **)(puVar17[2] + 0x438), puVar16 == (undefined4 *)0x0)) {
              kfree(local_3c);
              local_3c = (undefined4 *)0x0;
              if (local_38 != (undefined4 *)0x0) {
                kfree();
                local_38 = (undefined4 *)0x0;
              }
            }
            else {
              local_44 = puVar16[0x10];
              local_48 = puVar13[0x10];
              local_2c = *(undefined4 *)(*(int *)(puVar17[2] + 0x43c) + 0x38);
              *local_3c = puVar17[6];
              local_3c[1] = puVar17[7];
              local_3c[2] = puVar16[0x3b];
              local_3c[3] = puVar16[0x3c];
              local_3c[5] = puVar13[0x3d];
              local_3c[6] = puVar13[0x3e];
              uStack_40 = local_48;
              uVar9 = pixel_format_rk_to_rga(puVar13[0x40]);
              local_3c[4] = uVar9;
              uVar9 = compress_mode_rk_to_rga(puVar13[0x42]);
              local_3c[7] = uVar9;
              vlog(3,5,DAT_00015ba0,DAT_00015ba4,0x86,*puVar13,puVar13[0x10],local_2c,*local_3c,
                   local_3c[1],local_3c[2],local_3c[3],local_3c[5],local_3c[6],local_3c[4],uVar9);
              *local_38 = 0;
              local_38[1] = 0;
              local_38[2] = puVar16[0x3b];
              local_38[3] = puVar16[0x3c];
              local_38[5] = puVar16[0x3d];
              local_38[6] = puVar16[0x3e];
              uVar9 = pixel_format_rk_to_rga(puVar16[0x40]);
              local_38[4] = uVar9;
              local_38[7] = 1;
              vlog(3,5,DAT_00015ba8,DAT_00015ba4,0x97,*puVar16,puVar16[0x10],local_2c,*local_38,
                   local_38[1],local_38[2],local_38[3],local_38[5],local_38[6],local_38[4],1);
              *local_34 = puVar17[6];
              local_34[1] = puVar17[7];
              local_34[2] = puVar16[0x3b];
              local_34[3] = puVar16[0x3c];
              local_34[5] = puVar13[0x3d];
              local_34[6] = puVar13[0x3e];
              uVar9 = pixel_format_rk_to_rga(puVar13[0x40]);
              local_34[4] = uVar9;
              uVar9 = compress_mode_rk_to_rga(puVar13[0x42]);
              local_34[7] = uVar9;
              uVar3 = local_34[4];
              uVar4 = local_34[6];
              uVar5 = local_34[5];
              uVar6 = local_34[3];
              uVar7 = local_34[2];
              uVar8 = local_34[1];
              uVar12 = *local_34;
              vlog(3,5,DAT_00015bac,DAT_00015ba4,0xa9,DAT_00015ba4,0xa9,*puVar13,puVar13[0x10],
                   local_2c,uVar12,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar9);
              iVar2 = rga_mpi_commit(&local_48);
              if (iVar2 == 0) {
                puVar16 = *(undefined4 **)(puVar17[2] + 0x438);
                vlog(3,5,DAT_00015ce4,DAT_00015ce8,0xce,*puVar16,puVar16[0x10],*puVar13,
                     puVar13[0x10],*(undefined4 *)(*(int *)(puVar17[2] + 0x43c) + 0x38),uVar12,uVar8
                     ,uVar7,uVar6,uVar5,uVar4,uVar3,uVar9);
                uVar9 = extraout_r2_00;
                if (local_3c != (undefined4 *)0x0) {
                  kfree();
                  local_3c = (undefined4 *)0x0;
                  uVar9 = extraout_r2_01;
                }
                if (local_38 != (undefined4 *)0x0) {
                  kfree();
                  local_38 = (undefined4 *)0x0;
                  uVar9 = extraout_r2_02;
                }
                if (local_34 != (undefined4 *)0x0) {
                  kfree();
                  uVar9 = extraout_r2_03;
                }
                goto LAB_00015c6e;
              }
              if (local_3c != (undefined4 *)0x0) {
                kfree();
                local_3c = (undefined4 *)0x0;
              }
              if (local_38 != (undefined4 *)0x0) {
                kfree();
                local_38 = (undefined4 *)0x0;
              }
            }
            if (local_34 != (undefined4 *)0x0) {
              kfree();
            }
          }
          puVar16 = *(undefined4 **)(puVar17[2] + 0x438);
          vlog(3,2,DAT_00015ce0,DAT_00015cdc,0x120,DAT_00015cdc,0x120,
               **(undefined4 **)(puVar17[2] + 0x43c),*puVar16,puVar16[0x10],*puVar13,puVar13[0x10]);
          goto LAB_00015c08;
        }
LAB_00015c6e:
      }
      if ((puVar15 != (undefined4 *)0x0) && ((puVar15[3] & 6) == 2)) {
        if (puVar13 != (undefined4 *)0x0) {
          puVar17 = (undefined4 *)puVar15[0x13];
          bVar18 = -1 < (int)puVar17;
          if (bVar18) {
            uVar9 = 0;
            puVar17 = puVar13 + (int)(puVar17 + 4);
          }
          if (bVar18) {
            puVar17[1] = uVar9;
          }
        }
        for (puVar17 = (undefined4 *)puVar15[0x45]; puVar17 != puVar15 + 0x45;
            puVar17 = (undefined4 *)*puVar17) {
          mpi_node_buffer_in(puVar17[-1],puVar13,0);
        }
      }
      mpi_obj_unref(puVar15);
    }
    mpi_obj_unref(puVar13);
    kfree(piVar14);
  } while( true );
}



/* ===== list_rgn_find_by_handle @ 00015cec size=26 ===== */

undefined4 * list_rgn_find_by_handle(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(DAT_00015d08 + 0xc4);
  while( true ) {
    if (puVar1 == (undefined4 *)(DAT_00015d08 + 0xc4)) {
      return (undefined4 *)0x0;
    }
    if (puVar1[6] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}



/* ===== vrgn_create @ 00015d0c size=244 ===== */

undefined4 vrgn_create(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  piVar4 = param_2;
  iVar1 = list_rgn_find_by_handle(*param_2);
  if (param_2[0x107] == 0x478) {
    if (iVar1 == 0) {
      uVar5 = param_2[0x11d];
      piVar3 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_00015e0c + 0x2c),0xdc0);
      if (piVar3 == (int *)0x0) goto LAB_00015d34;
      if (param_2[1] == 1) {
        iVar1 = vsys_get_node_from_map(0x12,0,uVar5 & 0x3f,1,param_1,piVar4,param_3);
        if (iVar1 == 0) {
          printk(DAT_00015e10,DAT_00015e04,0x275,uVar5 & 0x3f);
          goto LAB_00015d34;
        }
        piVar3[0x10f] = iVar1;
      }
      piVar3[6] = *param_2;
      uVar2 = DAT_00015e14;
      if (param_2[5] == 1) {
        piVar3[3] = 0;
        __init_swait_queue_head(piVar3 + 4,DAT_00015e18,uVar2);
        piVar3[2] = 1000;
      }
      memcpy(piVar3 + 8,param_2 + 1,0x418);
      iVar1 = DAT_00015e1c;
      piVar3[0x10e] = 0;
      piVar3[7] = 0;
      piVar4 = *(int **)(iVar1 + 200);
      *(int **)(iVar1 + 200) = piVar3;
      *piVar3 = iVar1 + 0xc4;
      piVar3[1] = (int)piVar4;
      *piVar4 = (int)piVar3;
      iVar1 = *param_2;
      uVar6 = 0x286;
      uVar2 = DAT_00015e20;
    }
    else {
      memcpy((void *)(iVar1 + 0x20),param_2 + 1,0x418);
      *(undefined4 *)(iVar1 + 0x438) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      iVar1 = *param_2;
      uVar6 = 0x26c;
      uVar2 = DAT_00015e08;
    }
    vlog(3,4,uVar2,DAT_00015e04,uVar6,iVar1);
    uVar2 = 0;
  }
  else {
    vlog(3,2,DAT_00015e00,DAT_00015e04,0x265);
LAB_00015d34:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== vrgn_destroy @ 00015e24 size=108 ===== */

undefined4
vrgn_destroy(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar5 = *param_2;
  puVar6 = param_2;
  piVar1 = (int *)list_rgn_find_by_handle(uVar5);
  if (param_2[0x107] == 0x478) {
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      vlog(3,4,DAT_00015e98,DAT_00015e94,0x2e9,uVar5,piVar1[6],param_4);
      iVar3 = *piVar1;
      piVar4 = (int *)piVar1[1];
      *(int **)(iVar3 + 4) = piVar4;
      *piVar4 = iVar3;
      *piVar1 = 0x100;
      piVar1[1] = 0x122;
      kfree(piVar1);
      uVar2 = 0;
    }
  }
  else {
    vlog(3,2,DAT_00015e90,DAT_00015e94,0x2e3,puVar6,param_3,param_4);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== vrgn_upate_canvas_sync @ 00015e9c size=104 ===== */

int vrgn_upate_canvas_sync(undefined4 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = param_2;
  iVar2 = list_rgn_find_by_handle(*(undefined4 *)(param_2 + 2));
  if (*(int *)(param_2 + 6) == 0xb2) {
    if (iVar2 != 0) {
      disableIRQinterrupts();
      *(undefined4 *)(iVar2 + 0xc) = 0;
      lVar1 = (ulonglong)*(uint *)(iVar2 + 8) * (ulonglong)DAT_00015f10;
      uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
      iVar3 = wait_for_completion_interruptible_timeout
                        (iVar2 + 0xc,uVar5 >> 1,(int)lVar1,uVar5,param_1,iVar3);
      return -(uint)(iVar3 < 1);
    }
    uVar6 = 0x2fc;
    uVar4 = DAT_00015f0c;
  }
  else {
    uVar6 = 0x2f7;
    uVar4 = DAT_00015f04;
  }
  vlog(3,2,uVar4,DAT_00015f08,uVar6);
  return -1;
}



/* ===== set_osd_invert @ 00015f14 size=72 ===== */

void set_osd_invert(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar1 = __aeabi_uidiv(*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(param_1 + 0x44));
  iVar4 = __aeabi_uidiv(-*(int *)(param_1 + 0x48) &
                        *(int *)(param_1 + 0x48) + -1 + *(int *)(iVar4 + 0x2c));
  uVar2 = mpi_allocator_find_by_name(DAT_00015f5c);
  uVar2 = mpi_allocator_alloc(uVar2,0,iVar4 * (iVar1 + 7U >> 3));
  uVar3 = mpi_buf_create(uVar2,0);
  dma_buf_put(uVar2);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return;
}



/* ===== get_list_node_rgn_from_node @ 00015f60 size=26 ===== */

undefined4 * get_list_node_rgn_from_node(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x54);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_2 + 0x54)) {
      return (undefined4 *)0x0;
    }
    if (*(int *)(puVar1[2] + 0x18) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}



/* ===== rgn_attach_node @ 00015f7a size=196 ===== */

undefined4 rgn_attach_node(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = vsys_get_node_from_map
                    (*(undefined4 *)(param_2 + 0x468),*(undefined4 *)(param_2 + 0x46c),
                     *(undefined4 *)(param_2 + 0x470));
  if (iVar2 == 0) {
    vlog(3,2,DAT_00016040,DAT_00016044,0x1c3,*(undefined4 *)(param_2 + 0x468),
         *(undefined4 *)(param_2 + 0x46c),*(undefined4 *)(param_2 + 0x470));
    uVar3 = 0xffffffff;
  }
  else {
    puVar5 = (undefined4 *)(iVar2 + 0x54);
    if (*(int *)(iVar2 + 0x5c) == 0) {
      *(undefined4 **)(iVar2 + 0x54) = puVar5;
      *(undefined4 **)(iVar2 + 0x58) = puVar5;
    }
    disableIRQinterrupts();
    puVar1 = (undefined4 *)**(undefined4 **)(iVar2 + 0x54);
    puVar7 = *(undefined4 **)(iVar2 + 0x54);
    while (puVar4 = puVar1, puVar7 != puVar5) {
      if ((uint)param_1[10] < (uint)puVar7[10]) {
        piVar6 = (int *)puVar7[1];
        puVar7[1] = param_1;
        goto LAB_00015fee;
      }
      puVar1 = (undefined4 *)*puVar4;
      puVar7 = puVar4;
    }
    piVar6 = *(int **)(iVar2 + 0x58);
    *(undefined4 **)(iVar2 + 0x58) = param_1;
LAB_00015fee:
    *param_1 = puVar7;
    param_1[1] = piVar6;
    *piVar6 = (int)param_1;
    if (*(int *)(param_1[2] + 0x20) == 1) {
      if (*(int *)(iVar2 + 100) == 0) {
        mpi_node_add_out_filter(iVar2);
        *(undefined4 *)(iVar2 + 0x140) = DAT_00016048;
      }
      *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + 1;
    }
    if (*(int *)(param_1[2] + 0x30) == 1) {
      if ((*(int *)(iVar2 + 0x68) == 0) && (*(int *)(iVar2 + 0x60) == 0)) {
        *(undefined4 *)(iVar2 + 0x68) = DAT_0001604c;
      }
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
    *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== vrgn_attach_chn @ 00016050 size=226 ===== */

int vrgn_attach_chn(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = list_rgn_find_by_handle(*param_2);
  if (iVar2 != 0) {
    if ((*(int *)(iVar2 + 0x1c) == 0) || (*(int *)(iVar2 + 0x30) != 1)) {
      iVar3 = kmem_cache_alloc(*(undefined4 *)(DAT_0001613c + 4),0xdc0);
      if (param_2[0x107] == 0x478) {
        *(int *)(iVar3 + 8) = iVar2;
        memcpy((void *)(iVar3 + 0x10),param_2 + 0x108,0x48);
        if (*(int *)(iVar3 + 0x54) != 0) {
          set_osd_invert(iVar3);
        }
        iVar3 = rgn_attach_node(iVar3,param_2);
        if (iVar3 != 0) {
          vlog(3,2,DAT_00016144,DAT_00016138,0x2a7,*param_2,param_2[0x11a],param_2[0x11b],
               param_2[0x11c]);
        }
        uVar1 = DAT_00016148;
        *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
        vlog(3,4,uVar1,DAT_00016138,0x2ab,*param_2,param_2[0x11a],param_2[0x11b],param_2[0x11c]);
        return iVar3;
      }
      vlog(3,2,DAT_00016140,DAT_00016138,0x29c);
    }
    else {
      vlog(3,2,DAT_00016134,DAT_00016138,0x296,*(undefined4 *)(iVar2 + 0x18));
    }
  }
  return -1;
}



/* ===== rgn_dettach_node @ 0001614c size=222 ===== */

undefined4
rgn_dettach_node(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = vsys_get_node_from_map
                    (param_1[0x11a],param_1[0x11b],param_1[0x11c],param_4,param_1,param_2,param_3,
                     param_4);
  if (iVar1 == 0) {
    vlog(3,2,DAT_0001622c,DAT_00016230,0x1ee,param_1[0x11a],param_1[0x11b],param_1[0x11c]);
  }
  else {
    if (*(int *)(iVar1 + 0x5c) != 0) {
      piVar2 = (int *)get_list_node_rgn_from_node(*param_1,iVar1);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      vlog(3,5,DAT_00016238,DAT_00016230,0x200);
      disableIRQinterrupts();
      iVar3 = *piVar2;
      piVar4 = (int *)piVar2[1];
      *(int **)(iVar3 + 4) = piVar4;
      *piVar4 = iVar3;
      *piVar2 = 0x100;
      piVar2[1] = 0x122;
      *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + -1;
      if ((*(int *)(piVar2[2] + 0x20) == 1) &&
         (iVar3 = *(int *)(iVar1 + 100) + -1, *(int *)(iVar1 + 100) = iVar3, iVar3 == 0)) {
        mpi_node_del_out_filter(iVar1);
      }
      if (((*(int *)(piVar2[2] + 0x30) == 1) &&
          (iVar3 = *(int *)(iVar1 + 0x60) + -1, *(int *)(iVar1 + 0x60) = iVar3, iVar3 == 0)) &&
         (*(int *)(iVar1 + 0x68) != 0)) {
        *(undefined4 *)(iVar1 + 0x68) = 0;
      }
      if (piVar2[3] != 0) {
        mpi_obj_unref();
      }
      kfree(piVar2);
      return 0;
    }
    vlog(3,2,DAT_00016234,DAT_00016230,0x1fa);
  }
  return 0xffffffff;
}



/* ===== vrgn_dettach_chn @ 0001623c size=186 ===== */

int vrgn_dettach_chn(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = list_rgn_find_by_handle(*param_2);
  if (iVar2 != 0) {
    if (param_2[0x107] == 0x478) {
      if ((*(int *)(iVar2 + 0x1c) != 0) || (*(int *)(iVar2 + 0x30) != 1)) {
        iVar3 = rgn_dettach_node(param_2);
        if (iVar3 != 0) {
          vlog(3,2,DAT_00016304,DAT_000162fc,0x2c5,*param_2,param_2[0x11a],param_2[0x11b],
               param_2[0x11c]);
        }
        uVar1 = DAT_00016308;
        *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + -1;
        vlog(3,4,uVar1,DAT_000162fc,0x2c9,*param_2,param_2[0x11a],param_2[0x11b],param_2[0x11c]);
        return iVar3;
      }
      vlog(3,2,DAT_00016300,DAT_000162fc,0x2be,*(undefined4 *)(iVar2 + 0x18));
    }
    else {
      vlog(3,2,DAT_000162f8,DAT_000162fc,0x2b9);
    }
  }
  return -1;
}



/* ===== update_canvas_to_node @ 0001630c size=240 ===== */

undefined4
update_canvas_to_node(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == '\0') {
    if (param_1[1] != '\0') {
      iVar1 = vsys_get_node_from_map
                        (*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12),
                         *(undefined4 *)(param_1 + 0x16),param_1[1],param_1,param_2,param_3,param_4)
      ;
      if (iVar1 == 0) {
        vlog(3,2,DAT_00016408,DAT_00016400,0x239,*(undefined4 *)(param_1 + 0xe),
             *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x16));
      }
      else {
        iVar1 = get_list_node_rgn_from_node(*(undefined4 *)(param_1 + 2),iVar1);
        if (iVar1 != 0) {
          vlog(3,5,DAT_0001640c,DAT_00016400,0x23e);
          memcpy((void *)(iVar1 + 0x10),param_1 + 0x1a,0x48);
          return 0;
        }
      }
    }
  }
  else {
    iVar1 = list_rgn_find_by_handle(*(undefined4 *)(param_1 + 2));
    if ((iVar1 != 0) && (iVar2 = get_mpi_buf(*(undefined4 *)(param_1 + 10)), iVar2 != 0)) {
      if (*(int *)(iVar2 + 0x10) == 0) {
        vlog(3,2,DAT_000163fc,DAT_00016400,0x22c);
      }
      if ((*(int *)(iVar1 + 0x438) == iVar2) && (1 < *(uint *)(iVar1 + 0x30))) {
        vlog(3,2,DAT_00016404,DAT_00016400,0x230,*(undefined4 *)(param_1 + 2));
      }
      memcpy((void *)(iVar2 + 0xe8),param_1 + 0x62,0x50);
      *(int *)(iVar1 + 0x438) = iVar2;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== vrgn_update_canvas_to_chns @ 00016410 size=78 ===== */

int vrgn_update_canvas_to_chns(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_2 + 6) == 0xb2) {
    iVar1 = update_canvas_to_node(param_2);
    if (iVar1 != 0) {
      vlog(3,2,DAT_00016468,DAT_00016464,0x2d8,*(undefined4 *)(param_2 + 2),param_3);
    }
  }
  else {
    vlog(3,2,DAT_00016460,DAT_00016464,0x2d2,param_2,param_3);
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== vrgn_probe @ 0001646c size=140 ===== */

void vrgn_probe(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = DAT_000164fc;
  puVar1 = DAT_000164f8;
  memset(DAT_000164f8,0,0xd4);
  uVar3 = kstrdup(param_1,0xcc0);
  puVar1[0x2f] = iVar2;
  puVar1[0x30] = 7;
  puVar1[0x29] = puVar1;
  *puVar1 = uVar3;
  mpi_dev_register(puVar1 + 1,8,param_1);
  puVar1[0x31] = puVar1 + 0x31;
  puVar1[0x32] = puVar1 + 0x31;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x33] = puVar1 + 0x33;
  puVar1[0x34] = puVar1 + 0x33;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = puVar1 + 0x2b;
  puVar1[0x2c] = puVar1 + 0x2b;
  mpi_sysfs_dev_add(puVar1 + 1,iVar2 + 0x8c);
  uVar4 = kthread_create_on_node(DAT_00016504,puVar1,0xffffffff,DAT_00016500);
  if (uVar4 < 0xfffff001) {
    wake_up_process();
  }
  puVar1[0x2d] = uVar4;
  return;
}



/* ===== vrgn_shutdown @ 00016508 size=28 ===== */

void vrgn_shutdown(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_00016524;
  puVar1 = (undefined4 *)(DAT_00016524 + 0xb4);
  *(undefined4 *)(DAT_00016524 + 0xb8) = 1;
  kthread_stop(*puVar1);
  mpi_dev_unregister(iVar2 + 4);
  return;
}



/* ===== valloc_compat_ioctl @ 00016528 size=4 ===== */

undefined4 valloc_compat_ioctl(void)

{
  return 0;
}



/* ===== get_dma_buf_phy_addr @ 0001652c size=160 ===== */

int * get_dma_buf_phy_addr(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int *unaff_r4;
  uint uVar6;
  
  piVar3 = (int *)dma_buf_attach(param_1,*(undefined4 *)(DAT_000165cc + 0xa0),param_3,DAT_000165cc,
                                 param_1,param_2);
  if (piVar3 < (int *)0xfffff001) {
    piVar4 = (int *)dma_buf_map_attachment(piVar3,0);
    piVar2 = DAT_000165e0;
    piVar1 = DAT_000165dc;
    if (piVar4 < (int *)0xfffff001) {
      puVar5 = (uint *)*piVar4;
      for (uVar6 = 0; uVar6 < (uint)piVar4[2]; uVar6 = uVar6 + 1) {
        unaff_r4 = (int *)(puVar5[1] +
                          (*piVar2 + ((int)((*puVar5 & 0xfffffffc) - *piVar1) >> 5)) * 0x1000);
        puVar5 = (uint *)sg_next();
      }
      dma_buf_unmap_attachment(piVar3,piVar4,0);
      dma_buf_detach(param_1,piVar3);
    }
    else {
      vlog(1,2,DAT_000165d8,DAT_000165d4,0x71,1);
      unaff_r4 = piVar4;
    }
  }
  else {
    vlog(1,2,DAT_000165d0,DAT_000165d4,0x6c,1);
    unaff_r4 = piVar3;
  }
  return unaff_r4;
}



/* ===== get_mpi_buf @ 000165e4 size=74 ===== */

undefined4 * get_mpi_buf(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = dma_buf_get();
  if (iVar1 != 0) {
    for (puVar2 = (undefined4 *)*DAT_00016630; puVar3 = puVar2 + -9, puVar2 != DAT_00016630;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[7] == iVar1) goto LAB_00016602;
    }
    puVar3 = (undefined4 *)0x0;
LAB_00016602:
    dma_buf_put();
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[0xf] == 0) {
        return puVar3;
      }
      if (puVar3[4] != 0) {
        return puVar3;
      }
      mpi_buf_pool_request_buf(puVar3[0xf],puVar3);
      puVar3[0x33] = 1;
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}



/* ===== valloc_read @ 00016634 size=404 ===== */

int valloc_read(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int *piVar16;
  
  iVar12 = *(int *)(param_1 + 0x80) + 0xc;
  iVar4 = mpi_fs_buf_read(iVar12);
  if (iVar4 != -1) {
    if (iVar4 == 0) {
      mpi_fs_buf_reset(iVar12);
    }
    return iVar4;
  }
  iVar4 = 0;
  mpi_fs_buf_add(iVar12,DAT_000167d0,*DAT_000167cc,DAT_000167d4,DAT_000167c8);
  uVar2 = DAT_000167f8;
  mpi_fs_buf_add(iVar12,DAT_000167d8);
  uVar3 = DAT_000167fc;
  mpi_fs_buf_add(iVar12,DAT_000167dc);
  puVar1 = DAT_000167e0;
  for (puVar13 = (undefined4 *)*DAT_000167e0; puVar15 = puVar13 + -9, puVar13 != puVar1;
      puVar13 = (undefined4 *)*puVar13) {
    if ((undefined4 *)puVar13[6] == (undefined4 *)0x0) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = *(undefined4 *)puVar13[6];
    }
    uVar7 = 0;
    if (puVar13[7] != 0) {
      uVar7 = *(undefined4 *)(*(int *)(puVar13[7] + 4) + 0x1c);
    }
    uVar8 = puVar13[-8];
    if ((int)puVar13[0x2d] < 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = puVar13[0x2c];
    }
    iVar5 = mpi_fs_buf_add(iVar12,uVar2,*puVar15,uVar10,puVar13[-5],uVar7,uVar14,puVar15,uVar8);
    if (iVar5 != 0) break;
    iVar5 = 0;
    piVar16 = puVar13 + 8;
    do {
      puVar11 = (undefined4 *)*piVar16;
      if (((int)puVar11 - 1U < 0xfffffffe) &&
         (iVar6 = mpi_fs_buf_add(iVar12,uVar3,*(undefined4 *)(puVar11[0xb] + 0x2c),*puVar11,iVar5,
                                 uVar7,uVar14,puVar15,uVar8), iVar6 != 0)) break;
      iVar5 = iVar5 + 1;
      piVar16 = piVar16 + 1;
    } while (iVar5 != 0x20);
    mpi_fs_buf_add(iVar12,DAT_000167f4);
    if ((int)puVar13[0x2d] < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = puVar13[0x2c];
    }
    iVar4 = iVar4 + iVar5;
  }
  puVar1 = DAT_000167e8;
  mpi_fs_buf_add(iVar12,DAT_000167e4,iVar4);
  uVar3 = DAT_00016800;
  mpi_fs_buf_add(iVar12,DAT_000167ec);
  uVar10 = DAT_00016804;
  mpi_fs_buf_add(iVar12,DAT_000167f0);
  uVar2 = DAT_000167f4;
  for (puVar13 = (undefined4 *)*puVar1; puVar13 != puVar1; puVar13 = (undefined4 *)*puVar13) {
    uVar7 = puVar13[-8];
    uVar9 = puVar13[8];
    uVar8 = puVar13[5];
    uVar14 = puVar13[9];
    iVar4 = mpi_fs_buf_add(iVar12,uVar3,puVar13[-9],puVar13[-5],uVar9,uVar14,uVar8,uVar7);
    if (iVar4 != 0) break;
    puVar15 = (undefined4 *)puVar13[0xc];
    while ((puVar15 != puVar13 + 0xc &&
           (iVar4 = mpi_fs_buf_add(iVar12,uVar10,*(undefined4 *)(puVar15[-5] + 0x2c),puVar15[-0x10],
                                   uVar9,uVar14,uVar8,uVar7), iVar4 == 0))) {
      puVar15 = (undefined4 *)*puVar15;
    }
    mpi_fs_buf_add(iVar12,uVar2);
  }
  mpi_fs_buf_add(iVar12,DAT_000167f4);
  iVar4 = mpi_fs_buf_read(iVar12,param_2,param_3);
  return iVar4;
}



/* ===== valloc_mb_create @ 00016808 size=182 ===== */

undefined4 valloc_mb_create(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar5 = *(int *)(param_1 + 0x80);
  if (*(int *)(param_2 + 0xc) == 0x1c) {
    iVar1 = mpi_allocator_alloc(DAT_000168c8,*(undefined4 *)(param_2 + 0x14),
                                *(undefined4 *)(param_2 + 0x10));
    if (iVar1 == 0) {
      local_28 = 0x160;
      uVar3 = DAT_000168cc;
    }
    else {
      puVar2 = (undefined4 *)mpi_buf_create(iVar1,0);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = *(int *)(((uint)&local_28 & 0xffffe000) + 0xc) + 0x2e0;
        dma_buf_put(iVar1);
        uVar3 = DAT_000168d4;
        local_24 = *puVar2;
        *(undefined4 *)(param_2 + 4) = local_24;
        local_28 = 0x16b;
        vlog(1,5,uVar3,DAT_000168c4);
        puVar4 = *(undefined4 **)(iVar5 + 4);
        *(undefined4 **)(iVar5 + 4) = puVar2 + 0xb;
        uVar3 = DAT_000168d8;
        puVar2[0xb] = iVar5;
        puVar2[0xc] = puVar4;
        *puVar4 = puVar2 + 0xb;
        local_20 = puVar2[10];
        local_24 = puVar2[9];
        local_28 = 0x16d;
        vlog(1,5,uVar3,DAT_000168c4);
        return 0;
      }
      local_28 = 0x165;
      uVar3 = DAT_000168d0;
    }
  }
  else {
    local_28 = 0x15b;
    uVar3 = DAT_000168c0;
  }
  vlog(1,2,uVar3,DAT_000168c4);
  return 0xffffffff;
}



/* ===== dma_buf_alloc @ 000168dc size=152 ===== */

undefined4 * dma_buf_alloc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(DAT_00016974 + 0x3c);
  if ((iVar4 != 0) && (*(int *)(DAT_00016974 + 0xec) == 0)) {
    iVar5 = 4;
    vlog(1,5,DAT_00016978,DAT_0001697c,0xd9,param_3);
    uVar2 = DAT_0001698c;
    uVar1 = DAT_00016988;
    puVar3 = (undefined4 *)0x0;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      puVar3 = (undefined4 *)rk_dma_heap_buffer_alloc(iVar4,param_3,uVar2,0,uVar1);
      if (puVar3 < (undefined4 *)0xfffff001) goto LAB_0001694e;
      msleep(10);
    }
    if (puVar3 < (undefined4 *)0xfffff001) {
LAB_0001694e:
      vlog(1,5,DAT_00016984,DAT_0001697c,0xe7,puVar3,*puVar3,*(undefined4 *)(puVar3[1] + 0x1c));
      return puVar3;
    }
    vlog(1,2,DAT_00016980,DAT_0001697c,0xe4,param_3);
  }
  return (undefined4 *)0x0;
}



/* ===== free_all_cma @ 00016990 size=88 ===== */

void free_all_cma(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_000169e8;
  if ((*(int *)(DAT_000169e8 + 0xf0) != 0) && (0x10000 < *(uint *)(DAT_000169e8 + 0xf4))) {
    printk(DAT_000169ec);
    printk(DAT_000169f0);
    uVar3 = *(int *)(iVar2 + 0xf4) - 0x10000U >> 0xc;
    free_contig_range(*(int *)(iVar2 + 0xf0) + 0x10000U >> 0xc,uVar3);
    HintPreloadData(DAT_000169f4);
    do {
      ExclusiveAccess(DAT_000169f4);
      bVar1 = (bool)hasExclusiveAccess(DAT_000169f4);
    } while (!bVar1);
    *DAT_000169f4 = *DAT_000169f4 + uVar3;
    *(undefined4 *)(iVar2 + 0xec) = 1;
  }
  return;
}



/* ===== valloc_mb_get_id @ 000169f8 size=54 ===== */

undefined4 valloc_mb_get_id(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_2 + 0xc) == 0x1c) {
    puVar1 = (undefined4 *)get_mpi_buf(*(undefined4 *)(param_2 + 8));
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 4) = *puVar1;
      return 0;
    }
  }
  else {
    vlog(1,2,DAT_00016a30,DAT_00016a34,0x144,param_2);
  }
  return 0xffffffff;
}



/* ===== valloc_ioctl @ 00016a38 size=78 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 valloc_ioctl(undefined4 param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_2;
  uVar2 = uVar1;
  vlog(1,5,DAT_00016ac4,DAT_00016ac0,0x19f,uVar1,uVar1);
  if (*(uint *)(DAT_00016ac8 + 0xe8) <= uVar1) {
    vlog(1,2,PTR_DAT_00016acc,DAT_00016ac0,0x1a2,uVar1,uVar2);
    return 0xffffffea;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== valloc_mb_get_phy_addr @ 00016ad8 size=124 ===== */

undefined4 valloc_mb_get_phy_addr(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 0xc) == 0x1c) {
    iVar1 = mpi_obj_from_id(*(undefined4 *)(param_2 + 4),4);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0xe0) == 0) {
        uVar2 = get_dma_buf_phy_addr(*(undefined4 *)(iVar1 + 0x40));
        *(undefined4 *)(iVar1 + 0xe0) = uVar2;
      }
      uVar2 = *(undefined4 *)(iVar1 + 0xe0);
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      vlog(1,5,DAT_00016b60,DAT_00016b58,0x135,uVar2,*(undefined4 *)(param_2 + 4));
      return 0;
    }
    vlog(1,2,DAT_00016b5c,DAT_00016b58,0x12f,*(undefined4 *)(param_2 + 4));
  }
  else {
    vlog(1,2,DAT_00016b54,DAT_00016b58,0x12a);
  }
  return 0xffffffff;
}



/* ===== valloc_mb_delete @ 00016b64 size=116 ===== */

undefined4 valloc_mb_delete(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_2 + 0xc) == 0x1c) {
    iVar2 = mpi_obj_from_id(*(undefined4 *)(param_2 + 4),4,0x1c,param_2,param_1,param_2,param_3,
                            param_4);
    if (iVar2 != 0) {
      vlog(1,5,DAT_00016be0,DAT_00016bdc,0x181,iVar2,*(undefined4 *)(iVar2 + 0x10));
      iVar3 = *(int *)(iVar2 + 0x2c);
      piVar4 = *(int **)(iVar2 + 0x30);
      *(int **)(iVar3 + 4) = piVar4;
      *piVar4 = iVar3;
      *(undefined4 *)(iVar2 + 0x2c) = 0x100;
      *(undefined4 *)(iVar2 + 0x30) = 0x122;
      if ((*(int *)(iVar2 + 0x3c) == 0) || (*(int *)(iVar2 + 0xcc) != 0)) {
        mpi_obj_unref(iVar2);
      }
    }
    uVar1 = 0;
  }
  else {
    vlog(1,2,DAT_00016bd8,DAT_00016bdc,0x17c);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== valloc_version @ 00016be4 size=138 ===== */

undefined4 valloc_version(undefined4 param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *__s;
  
  if (*(int *)(param_2 + 0x20) == 0x4c) {
    *param_2 = 1;
    puVar1 = DAT_00016c78;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    __s = (char *)*puVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    sVar3 = strlen(__s);
    if (sVar3 < 0x11) {
      *(size_t *)(param_2 + 0xc) = sVar3;
    }
    else {
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xc] = 0x10;
      param_2[0xf] = 0;
    }
    strncpy(param_2 + 0x10,__s,*(size_t *)(param_2 + 0xc));
    uVar2 = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
  }
  else {
    vlog(1,2,DAT_00016c70,DAT_00016c74,0xf7,param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== valloc_open @ 00016c7c size=120 ===== */

undefined4 valloc_open(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_00016cf4 + 0x14),0xdc0,param_3,DAT_00016cf4,param_1,
                           param_2);
  if (iVar2 == 0) {
    vlog(1,2,DAT_00016cf8,DAT_00016cfc,0x1c1);
  }
  else {
    *(int *)iVar2 = iVar2;
    *(int *)(iVar2 + 4) = iVar2;
    iVar3 = mpi_fs_buf_init(iVar2 + 0xc,0x2800);
    iVar1 = DAT_00016d00;
    if (iVar3 == 0) {
      iVar3 = DAT_00016d00 + 0x40;
      mpi_obj_ref(iVar3);
      uVar4 = *(undefined4 *)(iVar1 + 0x40);
      *(int *)(iVar2 + 8) = iVar3;
      *(int *)(param_2 + 0x80) = iVar2;
      vlog(1,5,DAT_00016d04,DAT_00016cfc,0x1cd,uVar4);
      return 0;
    }
    kfree(iVar2);
  }
  return 0xffffffff;
}



/* ===== valloc_release @ 00016d08 size=136 ===== */

undefined4 valloc_release(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  uVar4 = DAT_00016d98;
  uVar3 = DAT_00016d94;
  piVar7 = *(int **)(param_2 + 0x80);
  mpi_obj_unref(piVar7[2]);
  vlog(1,5,DAT_00016d90,DAT_00016d94,0x1d6,*(undefined4 *)piVar7[2],param_3);
  piVar6 = *(int **)*piVar7;
  piVar2 = (int *)*piVar7;
  while (piVar1 = piVar6, piVar7 != piVar2) {
    vlog(1,4,uVar4,uVar3,0x1d8,piVar2[-0xb],param_3);
    iVar5 = *piVar2;
    piVar6 = (int *)piVar2[1];
    *(int **)(iVar5 + 4) = piVar6;
    *piVar6 = iVar5;
    *piVar2 = 0x100;
    piVar2[1] = 0x122;
    piVar6 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  mpi_fs_buf_deinit(piVar2 + 3);
  kfree(piVar7);
  return 0;
}



/* ===== valloc_mb_get_fd @ 00016d9c size=144 ===== */

undefined4 valloc_mb_get_fd(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (*(int *)(param_2 + 0xc) == 0x1c) {
    iVar2 = mpi_obj_from_id(*(undefined4 *)(param_2 + 4),4);
    if (iVar2 != 0) {
      uVar3 = dma_buf_fd(*(undefined4 *)(iVar2 + 0x40),0);
      *(undefined4 *)(param_2 + 8) = uVar3;
      piVar4 = (int *)(*(int *)(*(int *)(iVar2 + 0x40) + 4) + 0x1c);
      HintPreloadData(piVar4);
      do {
        ExclusiveAccess(piVar4);
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + 1;
      vlog(1,5,DAT_00016e38,DAT_00016e30,0x11b,*(undefined4 *)(param_2 + 8),
           *(undefined4 *)(param_2 + 4));
      return 0;
    }
    vlog(1,2,DAT_00016e34,DAT_00016e30,0x116,*(undefined4 *)(param_2 + 4));
  }
  else {
    vlog(1,2,DAT_00016e2c,DAT_00016e30,0x111);
  }
  return 0xffffffff;
}



/* ===== valloc_probe @ 00016e3c size=158 ===== */

undefined4 valloc_probe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = rk_dma_heap_find(DAT_00016edc);
  puVar1 = DAT_00016ee0;
  DAT_00016ee0[0xf] = iVar2;
  if (iVar2 == 0) {
    vlog(1,2,DAT_00016ee4,DAT_00016ee8,0x23c,param_2,param_3,param_4);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    vlog(1,4,DAT_00016eec,DAT_00016ee8,0x23f,puVar1[0x3c],puVar1[0x3d],param_4);
    uVar4 = DAT_00016ef0;
    puVar1[0x3b] = 0;
    puVar1[0xe] = uVar4;
    uVar4 = kstrdup(param_1,0xcc0);
    *puVar1 = uVar4;
    mpi_allocator_register(puVar1 + 1,8,param_1);
    uVar4 = DAT_00016ef4;
    puVar1[0x38] = puVar1;
    puVar1[0x39] = uVar4;
    puVar1[0x3a] = 6;
    mpi_dev_register(puVar1 + 0x10,8,param_1);
    mpi_sysfs_dev_add(puVar1 + 0x10,DAT_00016ef8);
    rk_dma_heap_set_dev(puVar1[0x28]);
  }
  return uVar3;
}



/* ===== vrga_node_get_status @ 00016efc size=4 ===== */

undefined4 vrga_node_get_status(void)

{
  return 0;
}



/* ===== vrga_compat_ioctl @ 00016f00 size=4 ===== */

undefined4 vrga_compat_ioctl(void)

{
  return 0;
}



/* ===== vrga_open @ 00016f04 size=20 ===== */

undefined4 vrga_open(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00016f18;
  *(int *)(param_2 + 0x80) = DAT_00016f18 + 8;
  *(undefined4 *)(iVar1 + 0xb8) = 0x13;
  return 0;
}



/* ===== vrga_node_create @ 00016f1c size=168 ===== */

undefined4 vrga_node_create(int param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x80) + 0xa0);
  uVar3 = *param_2 & 0x3f;
  if (param_2[3] == 0x24) {
    iVar2 = mpi_allocator_find_by_name(DAT_00016fcc);
    if (iVar2 != 0) {
      *(uint *)(iVar4 + uVar3 * 4 + 0xcc) = param_2[5];
      iVar4 = mpi_dev_create_node_with_params(iVar4 + 8,*param_2,1,0,param_1);
      uVar1 = DAT_00016fd4;
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 4) = DAT_00016fd4;
        vsys_add_node_to_map(0x12,0,uVar3,iVar4);
        mpi_node_set_in_frame_rate(iVar4,param_2[6],param_2[7]);
        if (param_2[5] == 0) {
          printk(DAT_00016fd0,param_2[2]);
          iVar2 = mpi_buf_pool_create(iVar2,1,param_2[2],param_2[4],uVar1);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          mpi_buf_pool_add_user(iVar2,iVar4);
        }
        param_2[1] = uVar3;
        return 0;
      }
    }
  }
  else {
    vlog(0,2,DAT_00016fc4,DAT_00016fc8,0x58,param_2);
  }
  return 0xffffffff;
}



/* ===== vrga_node_set_crop @ 00016fd8 size=194 ===== */

undefined4 vrga_node_set_crop(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar8;
  uint *puVar7;
  
  if (param_2[7] == 0x20) {
    iVar1 = vsys_get_node_from_map(0x12,0,*param_2 & 0x3f);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x108);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 8);
        iVar5 = iVar2 - *(int *)(iVar1 + 0xc);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar5 < 5) {
          __aeabi_uidivmod(iVar2,5);
          puVar3 = (uint *)(iVar1 + extraout_r1 * 0x20 + 0x10);
          puVar6 = param_2;
          do {
            puVar7 = puVar6 + 1;
            *puVar3 = *puVar6;
            puVar3 = puVar3 + 1;
            puVar6 = puVar7;
          } while (puVar7 != param_2 + 8);
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        }
        else {
          printk(DAT_000170a8,iVar2);
        }
      }
      vlog(0,5,DAT_000170ac,DAT_000170a0,0x13e,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
           param_2[5],param_2[6],*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      return 0;
    }
    uVar8 = 299;
    uVar4 = DAT_000170a4;
  }
  else {
    uVar8 = 0x125;
    uVar4 = DAT_0001709c;
  }
  vlog(0,2,uVar4,DAT_000170a0,uVar8);
  return 0xffffffff;
}



/* ===== vrga_mb_release @ 000170b0 size=132 ===== */

undefined4 vrga_mb_release(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  if (param_2[3] == 0x68) {
    iVar1 = vsys_get_node_from_map(0x12,0,uVar3 & 0x3f);
    if (iVar1 != 0) {
      iVar2 = mpi_obj_from_id(param_2[5],4);
      if (iVar2 == 0) {
        vlog(0,2,DAT_00017140,DAT_00017138,0xdf);
      }
      else {
        vlog(0,5,DAT_0001713c,DAT_00017138,0xdc,uVar3 & 0x3f,iVar2,*(undefined4 *)(iVar2 + 0x40),
             param_2[5],*(undefined4 *)(iVar2 + 0x10));
        mpi_node_release_buffer_flag(iVar1,iVar2,0);
      }
      return 0;
    }
  }
  else {
    vlog(0,2,DAT_00017134,DAT_00017138,0xd1);
  }
  return 0xffffffff;
}



/* ===== vrga_mb_send @ 00017144 size=160 ===== */

undefined4 vrga_mb_send(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  if (param_2[3] == 0x68) {
    iVar1 = vsys_get_node_from_map(0x12,0,uVar3 & 0x3f);
    if (iVar1 != 0) {
      if (-1 < (int)param_2[4]) {
        puVar2 = (undefined4 *)get_mpi_buf();
        if (puVar2 == (undefined4 *)0x0) {
          vlog(0,2,DAT_000171ec,DAT_000171e8,0xf6,param_2[4]);
          return 0xffffffff;
        }
        puVar2[1] = DAT_000171f0;
        vlog(0,5,DAT_000171f4,DAT_000171e8,0xfe,uVar3 & 0x3f,puVar2,*puVar2,puVar2[4],puVar2[0x10],
             param_2[4]);
        memcpy(puVar2 + 0x3a,param_2 + 6,0x50);
        mpi_node_buffer_in(iVar1,puVar2,1);
      }
      return 0;
    }
  }
  else {
    vlog(0,2,DAT_000171e4,DAT_000171e8,0xeb);
  }
  return 0xffffffff;
}



/* ===== vrga_destroy_ctx @ 000171f8 size=10 ===== */

undefined4 vrga_destroy_ctx(void)

{
  kfree();
  return 0;
}



/* ===== vrga_ioctl @ 00017202 size=54 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 vrga_ioctl(int param_1,uint param_2)

{
  if ((param_2 & 0xff) < *(uint *)(*(int *)(*(int *)(param_1 + 0x80) + 0xa0) + 0xb8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  vlog(0,2,DAT_00017258,DAT_0001725c,0x199,param_2);
  return 0xffffffea;
}



/* ===== vrga_handle_message @ 00017260 size=410 ===== */

undefined4 vrga_handle_message(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if (param_1[2] != 1) {
    return 0;
  }
  if (param_2 - 2U < 2) {
    if ((int *)param_1[0x42] == (int *)0x0) {
      return 0;
    }
    iVar6 = *(int *)param_1[0x42];
    if (iVar6 != 0) {
      mpi_obj_ref(iVar6);
      if (param_1 == *(undefined4 **)(iVar6 + 0x30)) {
        mpi_job_wait(iVar6);
      }
      mpi_obj_unref(iVar6);
      return 0;
    }
    return 0;
  }
  if (*(int *)(DAT_000173fc + 0xac) != 0) {
    return 0;
  }
  if (param_2 != 1) {
    return 0;
  }
  vlog(0,5,DAT_00017400,DAT_00017404,0x2f1,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,*param_3);
  iVar6 = param_1[0x42];
  iVar7 = param_1[0xb];
  if (iVar6 == 0) {
    return 0xffffffff;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  mpi_obj_ref(param_3);
  if (*(int *)(iVar6 + 4) == 0) {
    iVar3 = mpi_node_request_buf(param_1,0);
    if (iVar3 == 0) goto LAB_000173b6;
  }
  else {
    iVar3 = 0;
  }
  puVar4 = (undefined4 *)mpi_dev_request_job_for_node(iVar7,param_1);
  if (puVar4 != (undefined4 *)0x0) {
    if ((puVar4[3] & 6) == 2) {
      puVar4[0xf] = param_3;
      if (*(int *)(iVar6 + 4) == 0) {
        puVar4[0x10] = iVar3;
      }
      else {
        puVar4[0x10] = param_3;
        mpi_obj_ref(param_3);
      }
      vlog(0,5,DAT_00017408,DAT_0001740c,0x2af,*puVar4,*(undefined4 *)(iVar7 + 0x2c),*param_1,
           *(undefined4 *)puVar4[0xf],*(undefined4 *)puVar4[0x10]);
      mpi_job_set_ready(puVar4);
      uVar1 = DAT_0001740c;
      mpi_obj_ref(puVar4);
      uVar2 = DAT_00017414;
      while( true ) {
        iVar6 = mpi_queue_push_obj(param_1[0x47],puVar4);
        if (iVar6 != 0) {
          up(DAT_00017410);
          return 0;
        }
        puVar5 = (undefined4 *)mpi_queue_pop_obj(param_1[0x47]);
        if (puVar5 == (undefined4 *)0x0) break;
        vlog(0,5,uVar2,uVar1,0x2c3,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,*puVar5,puVar5[4],
             *(undefined4 *)puVar5[0xf],((undefined4 *)puVar5[0xf])[4]);
        mpi_job_cancel(puVar5,1);
        mpi_obj_unref(puVar5);
      }
      mpi_job_cancel(puVar4,1);
      param_3 = puVar4;
      goto LAB_000173b6;
    }
    mpi_obj_unref();
  }
  mpi_obj_unref(iVar3);
LAB_000173b6:
  mpi_obj_unref(param_3);
  return 0xffffffff;
}



/* ===== vrga_version @ 00017418 size=142 ===== */

undefined4 vrga_version(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x80) + 0xa0);
  if (*(int *)(param_2 + 0x20) == 0x4c) {
    param_2[1] = 0;
    *param_2 = 1;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    sVar2 = strlen((char *)*puVar3);
    if (sVar2 < 0x11) {
      *(size_t *)(param_2 + 0xc) = sVar2;
    }
    else {
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0xc] = 0x10;
    }
    strncpy(param_2 + 0x10,(char *)*puVar3,*(size_t *)(param_2 + 0xc));
    uVar1 = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
  }
  else {
    vlog(0,2,DAT_000174a8,DAT_000174ac,0x3c,param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== vrga_node_stop @ 000174b0 size=58 ===== */

int vrga_node_stop(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2[3] == 0x24) {
    iVar1 = vsys_get_node_from_map(0x12,0,*param_2 & 0x3f,0x24,param_1,param_2,param_3);
    iVar1 = -(uint)(iVar1 == 0);
  }
  else {
    vlog(0,2,DAT_000174ec,DAT_000174f0,0xa6);
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== vrga_node_set_bypass @ 000174f4 size=80 ===== */

undefined4 vrga_node_set_bypass(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  if (param_2[3] == 0x24) {
    iVar1 = vsys_get_node_from_map(0x12,0,uVar3 & 0x3f,0x24,param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x108);
      uVar2 = param_2[5];
      *(uint *)(DAT_0001754c + (uVar3 & 0x3f) * 4 + 0xcc) = uVar2;
      if (iVar1 == 0) {
        return 0;
      }
      *(uint *)(iVar1 + 4) = uVar2;
      return 0;
    }
  }
  else {
    vlog(0,2,DAT_00017544,DAT_00017548,0x10e);
  }
  return 0xffffffff;
}



/* ===== vrga_node_set_src_chg @ 00017550 size=82 ===== */

undefined4 vrga_node_set_src_chg(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  if (param_2[3] == 0x24) {
    iVar1 = vsys_get_node_from_map(0x12,0,uVar3 & 0x3f,0x24,param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x108);
      uVar2 = param_2[8];
      *(uint *)(DAT_000175ac + (uVar3 & 0x3f) * 4 + 0x1cc) = uVar2;
      if (iVar1 == 0) {
        return 0;
      }
      *(uint *)(iVar1 + 0xb0) = uVar2;
      return 0;
    }
  }
  else {
    vlog(0,2,DAT_000175a4,DAT_000175a8,0x14b);
  }
  return 0xffffffff;
}



/* ===== vrga_node_frame_rate_ctl @ 000175b0 size=66 ===== */

undefined4 vrga_node_frame_rate_ctl(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  if (param_2[3] == 0x24) {
    iVar1 = vsys_get_node_from_map(0x12,0,*param_2 & 0x3f,0x24,param_1,param_2);
    if (iVar1 != 0) {
      mpi_node_set_in_frame_rate(iVar1,param_2[6],param_2[7]);
      return 0;
    }
  }
  else {
    vlog(0,2,DAT_000175f4,DAT_000175f8,0x163);
  }
  return 0xffffffff;
}



/* ===== vrga_node_delete @ 000175fc size=90 ===== */

undefined4 vrga_node_delete(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  if (param_2[3] == 0x24) {
    iVar1 = vsys_get_node_from_map(0x12,0,uVar3 & 0x3f,0x24,param_1,param_2);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x3c);
      vsys_remove_node_from_map(0x12,0,uVar3 & 0x3f);
      mpi_node_destroy(iVar1);
      if (iVar2 != 0) {
        mpi_buf_pool_destroy(iVar2,1);
        return 0;
      }
      return 0;
    }
  }
  else {
    vlog(0,2,DAT_00017658,DAT_0001765c,0x7d);
  }
  return 0xffffffff;
}



/* ===== vrga_node_start @ 00017660 size=60 ===== */

undefined4 vrga_node_start(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2[3] == 0x24) {
    iVar1 = vsys_get_node_from_map(0x12,0,*param_2 & 0x3f,0x24,param_1,param_2,param_3);
    if (iVar1 != 0) {
      mpi_node_streamon();
      return 0;
    }
  }
  else {
    vlog(0,2,DAT_0001769c,DAT_000176a0,0x96);
  }
  return 0xffffffff;
}



/* ===== vrga_mb_get @ 000176a4 size=102 ===== */

undefined4 vrga_mb_get(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  
  if (param_2[3] == 0x68) {
    iVar1 = vsys_get_node_from_map(0x12,0,*param_2 & 0x3f,0x68,param_1,param_2,param_3);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x168) = param_2[2];
      puVar2 = (uint *)mpi_node_pick_out_buffer();
      if ((puVar2 != (uint *)0x0) && (puVar2[0x10] != 0)) {
        memcpy(param_2 + 6,puVar2 + 0x3a,0x50);
        param_2[1] = *(uint *)puVar2[0x10];
        param_2[5] = *puVar2;
        return 0;
      }
    }
  }
  else {
    vlog(0,2,DAT_0001770c,DAT_00017710,0xb7);
  }
  return 0xffffffff;
}



/* ===== vrga_create_ctx @ 00017714 size=54 ===== */

void vrga_create_ctx(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_0001774c + 8),0xdc0);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x38) & 0x3f;
    uVar3 = *(undefined4 *)(DAT_00017750 + uVar2 * 4 + 0x1cc);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(DAT_00017750 + uVar2 * 4 + 0xcc);
    *(undefined4 *)(iVar1 + 0xb0) = uVar3;
    *(undefined4 *)(iVar1 + 8) = 1;
  }
  return;
}



/* ===== vrga_thread_fn @ 00017754 size=926 ===== */

void vrga_thread_fn(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_r1;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *unaff_r5;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 *local_140;
  int local_134;
  undefined4 local_130;
  char local_12c [256];
  int local_2c;
  
  uVar2 = DAT_000178a0;
  piVar1 = DAT_00017894;
  local_2c = *DAT_00017894;
  local_12c[0] = '\0';
  local_12c[1] = '\0';
  local_12c[2] = '\0';
  local_12c[3] = '\0';
  memset(local_12c + 4,0,0xfc);
  local_134 = kmem_cache_alloc(*(undefined4 *)(DAT_00017898 + 0x14),0xdc0);
  vlog(0,5,DAT_0001789c,DAT_000178a0,0x236,*(undefined4 *)(param_1 + 0x34),
       *(undefined4 *)(param_1 + 8));
  do {
    do {
      while( true ) {
        iVar3 = kthread_should_stop();
        if (iVar3 != 0) {
          if (local_134 != 0) {
            kfree();
          }
          if (local_2c != *piVar1) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(0);
          }
          return;
        }
        if (*(int *)(param_1 + 0xac) == 0) break;
        msleep(1);
      }
      down(param_1 + 0xbc);
      puVar4 = (undefined4 *)mpi_dev_run_job(param_1 + 8,0);
    } while (puVar4 == (undefined4 *)0x0);
    iVar3 = puVar4[0xc];
    if ((iVar3 == 0) || (unaff_r5 = *(int **)(iVar3 + 0x108), unaff_r5 == (int *)0x0)) {
LAB_0001788a:
      uVar5 = 0xffffffff;
      *unaff_r5 = 0;
    }
    else {
      *unaff_r5 = (int)puVar4;
      snprintf(local_12c,0x100,DAT_000178a4,*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)puVar4[0xc]);
      uVar5 = *(undefined4 *)(iVar3 + 0x38);
      piVar8 = unaff_r5;
      vlog(0,5,DAT_000178a8,uVar2,0x24f,*puVar4,local_12c,*(undefined4 *)puVar4[0xf],
           ((undefined4 *)puVar4[0xf])[0x10],*(undefined4 *)puVar4[0x10],
           ((undefined4 *)puVar4[0x10])[0x10],unaff_r5[1],unaff_r5,uVar5);
      if (unaff_r5[1] == 0) {
        if ((unaff_r5[2] != unaff_r5[3]) || (unaff_r5[0x2c] != 0)) {
          local_140 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00017898 + 0x14),0xdc0);
          if (local_140 == (undefined4 *)0x0) goto LAB_0001788a;
        }
        puVar11 = local_140;
        iVar7 = puVar4[0xc];
        if ((((iVar7 == 0) || (iVar12 = *(int *)(iVar7 + 0x108), iVar12 == 0)) ||
            (puVar10 = (undefined4 *)puVar4[0xf], puVar10 == (undefined4 *)0x0)) ||
           (puVar4[0x10] == 0)) {
          if (local_140 != (undefined4 *)0x0) {
            kfree(local_140);
            local_140 = (undefined4 *)0x0;
          }
        }
        else {
          local_14c = puVar10[0x10];
          local_144 = *(undefined4 *)(puVar4[0x10] + 0x40);
          local_130 = *(undefined4 *)(iVar7 + 0x38);
          local_148 = 0;
          if (local_140 != (undefined4 *)0x0) {
            __aeabi_uidivmod(*(undefined4 *)(iVar12 + 0xc),5);
            iVar7 = iVar12 + extraout_r1 * 0x20;
            if (*(int *)(iVar7 + 0x14) == 0) {
              *puVar11 = 0;
              local_140[1] = 0;
              local_140[2] = puVar10[0x3b];
              uVar5 = puVar10[0x3c];
            }
            else if (*(int *)(iVar7 + 0x18) == 0) {
              local_158 = *(undefined4 *)(iVar7 + 0x20);
              local_154 = *(undefined4 *)(iVar7 + 0x24);
              local_150 = *(undefined4 *)(iVar7 + 0x28);
              local_15c = *(undefined4 *)(iVar7 + 0x1c);
              crop_rect_ratio_to_abs(&local_16c,&local_15c,puVar10[0x3b],puVar10[0x3c]);
              *local_140 = local_16c;
              local_140[1] = local_168;
              local_140[2] = uStack_164;
              uVar5 = local_160;
            }
            else {
              *puVar11 = *(undefined4 *)(iVar7 + 0x1c);
              local_140[1] = *(undefined4 *)(iVar7 + 0x20);
              local_140[2] = *(undefined4 *)(iVar7 + 0x24);
              uVar5 = *(undefined4 *)(iVar7 + 0x28);
            }
            local_140[3] = uVar5;
            local_140[5] = puVar10[0x3d];
            local_140[6] = puVar10[0x3e];
            uVar5 = pixel_format_rk_to_rga(puVar10[0x40]);
            local_140[4] = uVar5;
            uVar5 = compress_mode_rk_to_rga(puVar10[0x42]);
            local_140[7] = uVar5;
            *(int *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + 1;
            uVar5 = local_140[6];
            piVar8 = (int *)local_140[5];
            vlog(0,5,DAT_00017b0c,DAT_00017b10,0x1f8,*puVar10,puVar10[0x10],local_130,*local_140,
                 local_140[1],local_140[2],local_140[3],piVar8,uVar5,local_140[4],local_140[7]);
          }
          iVar7 = rga_mpi_commit(&local_14c);
          if (iVar7 == 0) {
            vlog(0,5,DAT_00017b14,uVar2,0x267,*puVar4,local_12c,*(undefined4 *)puVar4[0xf],
                 ((undefined4 *)puVar4[0xf])[0x10],*(undefined4 *)puVar4[0x10],
                 ((undefined4 *)puVar4[0x10])[0x10],*(undefined4 *)(iVar3 + 0x38),piVar8,uVar5);
            if (((puVar4[0xc] == 0) || (iVar3 = puVar4[0xf], iVar3 == 0)) ||
               (puVar11 = (undefined4 *)puVar4[0x10], puVar11 == (undefined4 *)0x0)) {
              iVar3 = -1;
            }
            else {
              puVar11[0x3b] = *(undefined4 *)(local_134 + 8);
              puVar11[0x3c] = *(undefined4 *)(local_134 + 0xc);
              puVar11[0x3d] = *(undefined4 *)(local_134 + 0x14);
              puVar11[0x3e] = *(undefined4 *)(local_134 + 0x18);
              uVar5 = pixel_format_rga_to_rk(*(undefined4 *)(local_134 + 0x10));
              puVar11[0x40] = uVar5;
              uVar5 = compress_mode_rga_to_rk(*(undefined4 *)(local_134 + 0x1c));
              puVar11[0x42] = uVar5;
              uVar9 = *(undefined4 *)(iVar3 + 0x11c);
              puVar11[0x47] = uVar9;
              uVar5 = *(undefined4 *)(iVar3 + 0x120);
              uVar6 = *(undefined4 *)(iVar3 + 0x124);
              puVar11[0x48] = uVar5;
              puVar11[0x49] = uVar6;
              vlog(0,5,DAT_00017b18,DAT_00017b1c,0x220,*puVar11,puVar11[0x10],
                   *(undefined4 *)(local_134 + 8),*(undefined4 *)(local_134 + 0xc),
                   *(undefined4 *)(local_134 + 0x14),*(undefined4 *)(local_134 + 0x18),
                   *(undefined4 *)(local_134 + 0x10),*(undefined4 *)(local_134 + 0x1c),uVar9,uVar5,
                   uVar6);
              vlog(0,5,DAT_00017b20,DAT_00017b1c,0x222,*(undefined4 *)(iVar3 + 0x10),puVar11[4]);
              iVar3 = 0;
            }
            if (local_140 != (undefined4 *)0x0) {
              kfree();
              local_140 = (undefined4 *)0x0;
            }
            unaff_r5[0x2c] = 0;
            if (iVar3 != -1) goto LAB_00017aaa;
          }
          else {
            if (local_140 != (undefined4 *)0x0) {
              kfree();
              local_140 = (undefined4 *)0x0;
            }
            unaff_r5[0x2c] = 0;
          }
        }
        goto LAB_0001788a;
      }
LAB_00017aaa:
      uVar5 = 0;
      *unaff_r5 = 0;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    }
    mpi_job_done(puVar4,uVar5);
  } while( true );
}



/* ===== vrga_user_request @ 00017b24 size=86 ===== */

undefined4 * vrga_user_request(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)mpi_dev_request_job(DAT_00017b7c);
  if (puVar1 != (undefined4 *)0x0) {
    if ((puVar1[3] & 6) == 2) {
      puVar1[0xf] = param_1;
      puVar1[0x10] = param_2;
      vlog(0,5,DAT_00017b80,DAT_00017b84,0x333,*puVar1,*param_1,*param_2);
      mpi_job_set_ready(puVar1);
      mpi_obj_ref(puVar1);
    }
    else {
      mpi_obj_unref();
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}



/* ===== vrga_probe @ 00017b88 size=130 ===== */

void vrga_probe(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = DAT_00017c10;
  puVar1 = DAT_00017c0c;
  memset(DAT_00017c0c,0,0x2cc);
  uVar3 = kstrdup(param_1,0xcc0);
  puVar1[0x2d] = iVar2;
  puVar1[1] = 1;
  puVar1[0x2a] = puVar1;
  puVar1[0x2e] = 0x13;
  *puVar1 = uVar3;
  mpi_dev_register(puVar1 + 2,8,param_1);
  puVar1[0x13] = DAT_00017c14;
  puVar1[0x15] = DAT_00017c18;
  puVar1[0x16] = DAT_00017c1c;
  mpi_sysfs_dev_add(puVar1 + 2,iVar2 + 0x17c);
  puVar1[0x2f] = 0;
  uVar3 = DAT_00017c20;
  puVar1[0x30] = puVar1 + 0x30;
  puVar1[0x31] = puVar1 + 0x30;
  uVar4 = kthread_create_on_node(uVar3,puVar1,0xffffffff,DAT_00017c24);
  if (uVar4 < 0xfffff001) {
    wake_up_process();
  }
  puVar1[0x32] = uVar4;
  return;
}



/* ===== vrga_shutdown @ 00017c28 size=36 ===== */

void vrga_shutdown(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00017c4c;
  puVar1 = DAT_00017c4c + 0x32;
  DAT_00017c4c[0x2b] = 1;
  kthread_stop(*puVar1);
  mpi_dev_unregister(puVar2 + 2);
  kfree(*puVar2);
  return;
}



/* ===== pixel_format_rk_to_rga @ 00017c50 size=32 ===== */

undefined4 pixel_format_rk_to_rga(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(DAT_00017c70 + iVar1 * 8) == param_1) {
      return *(undefined4 *)(DAT_00017c70 + iVar1 * 8 + 4);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x13);
  return 0xffffffff;
}



/* ===== pixel_format_rga_to_rk @ 00017c74 size=32 ===== */

undefined4 pixel_format_rga_to_rk(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(DAT_00017c94 + iVar1 * 8 + 4) == param_1) {
      return *(undefined4 *)(DAT_00017c94 + iVar1 * 8);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x13);
  return 0xffffffff;
}



/* ===== crop_rect_ratio_to_abs @ 00017c98 size=174 ===== */

void crop_rect_ratio_to_abs(uint *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = ((int)((longlong)(int)(param_3 * *param_2) * (longlong)DAT_00017d48 >> 0x26) -
          ((int)(param_3 * *param_2) >> 0x1f)) + 1U & 0xfffffffe;
  uVar2 = ((int)((longlong)(int)(param_4 * param_2[1]) * (longlong)DAT_00017d48 >> 0x26) -
          ((int)(param_4 * param_2[1]) >> 0x1f)) + 1U & 0xfffffffe;
  uVar4 = ((int)((longlong)(int)(param_2[2] * param_3) * (longlong)DAT_00017d48 >> 0x26) -
          ((int)(param_2[2] * param_3) >> 0x1f)) + 1U & 0xfffffffe;
  uVar1 = ((int)((longlong)(int)(param_2[3] * param_4) * (longlong)DAT_00017d48 >> 0x26) -
          ((int)(param_2[3] * param_4) >> 0x1f)) + 1U & 0xfffffffe;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if ((int)param_3 <= (int)uVar3) {
    uVar3 = param_3;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if ((int)param_4 <= (int)uVar2) {
    uVar2 = param_4;
  }
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  else if ((int)(param_3 - uVar3) <= (int)uVar4) {
    uVar4 = param_3 - uVar3;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if ((int)(param_4 - uVar2) <= (int)uVar1) {
    uVar1 = param_4 - uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  return;
}



/* ===== compress_mode_rk_to_rga @ 00017d4c size=24 ===== */

undefined4 compress_mode_rk_to_rga(int param_1)

{
  if ((param_1 != 0) && (param_1 != 1)) {
    return 0xffffffff;
  }
  return *(undefined4 *)(DAT_00017d64 + param_1 * 8 + 0x9c);
}



/* ===== compress_mode_rga_to_rk @ 00017d68 size=32 ===== */

undefined4 compress_mode_rga_to_rk(int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    iVar1 = 0;
  }
  else {
    if (param_1 != 2) {
      return 0xffffffff;
    }
    iVar1 = 1;
  }
  return *(undefined4 *)(DAT_00017d88 + iVar1 * 8 + 0x98);
}



/* ===== vi_compat_ioctl @ 00017d8c size=4 ===== */

undefined4 vi_compat_ioctl(void)

{
  return 0;
}



/* ===== vvi_get_version @ 00017d90 size=140 ===== */

undefined4 vvi_get_version(int param_1,undefined4 *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x80);
  puVar4 = (undefined4 *)puVar3[0x28];
  memset(param_2,0,0x7c);
  *param_2 = puVar4[0x38];
  uVar2 = *puVar3;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined1 *)((int)param_2 + 9) = 0;
  param_2[1] = uVar2;
  *(undefined1 *)((int)param_2 + 10) = 0;
  *(undefined1 *)((int)param_2 + 0xb) = 0;
  sVar1 = strlen((char *)*puVar4);
  *(undefined1 *)((int)param_2 + 0x35) = 0;
  *(undefined1 *)(param_2 + 0xd) = 0x14;
  *(undefined1 *)((int)param_2 + 0x36) = 0;
  *(undefined1 *)((int)param_2 + 0x37) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0x11;
  *(undefined1 *)((int)param_2 + 0x59) = 0;
  *(undefined1 *)((int)param_2 + 0x5a) = 0;
  *(undefined1 *)((int)param_2 + 0x5b) = 0;
  param_2[3] = sVar1;
  if (0x1f < sVar1) {
    *(undefined1 *)((int)param_2 + 0xd) = 0;
    *(undefined1 *)(param_2 + 3) = 0x1f;
    *(undefined1 *)((int)param_2 + 0xe) = 0;
    *(undefined1 *)((int)param_2 + 0xf) = 0;
  }
  strncpy((char *)(param_2 + 4),(char *)*puVar4,param_2[3]);
  strncpy((char *)(param_2 + 0xe),DAT_00017e1c,param_2[0xd]);
  strncpy((char *)(param_2 + 0x17),DAT_00017e20,param_2[0x16]);
  return 0;
}



/* ===== get_new_wrap_line @ 00017e24 size=86 ===== */

uint get_new_wrap_line(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int extraout_r1;
  uint uVar2;
  
  uVar1 = __aeabi_uidiv(param_4 * param_3,param_1);
  vlog(8,4,DAT_00017e7c,DAT_00017e80,0xf3,uVar1,param_4,param_1,param_2,param_3);
  uVar2 = param_2;
  if (uVar1 < param_2) {
    for (; __aeabi_uidivmod(param_2,uVar1), uVar2 = uVar1, (uVar1 & 1) != 0 || extraout_r1 != 0;
        uVar1 = uVar1 - 1) {
    }
  }
  return uVar2;
}



/* ===== vvi_node_set_dev_status @ 00017e84 size=174 ===== */

undefined4 vvi_node_set_dev_status(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *param_2;
  if (*(int *)((int)param_2 + 199) == 0xd7) {
    if (uVar2 == 0xffffffff) {
      uVar2 = param_2[1];
      if (uVar2 < 3) {
        if (param_2[2] < 6) {
          iVar3 = param_2[2] * 0xd7 + uVar2 * 0x50a + *(int *)(param_1 + 0x80);
          *(undefined4 *)(iVar3 + 0x420) = *(undefined4 *)((int)param_2 + 0xcb);
          *(undefined4 *)(iVar3 + 0x418) = *(undefined4 *)((int)param_2 + 0xc3);
          return 0;
        }
        uVar4 = 6;
        uVar1 = 0x23d;
      }
      else {
        uVar4 = 3;
        uVar1 = 0x238;
      }
      vlog(8,2,DAT_00017f3c,DAT_00017f38,uVar1,uVar2,uVar4,param_4);
      return 0xffffffff;
    }
    if (uVar2 < 3) {
      *(undefined4 *)(uVar2 * 0xd7 + *(int *)(param_1 + 0x80) + 0x19b) =
           *(undefined4 *)((int)param_2 + 0xcb);
      return 0;
    }
    vlog(8,2,DAT_00017f40,DAT_00017f38,0x244,uVar2,3,param_4);
  }
  else {
    vlog(8,2,DAT_00017f34,DAT_00017f38,0x232,param_2,param_3,param_4);
  }
  return 0xffffffff;
}



/* ===== vvi_node_get_status @ 00017f44 size=198 ===== */

undefined4 vvi_node_get_status(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *extraout_r1;
  undefined4 *puVar6;
  undefined4 *extraout_r1_00;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  
  if (param_2[4] == 0x88) {
    vlog(8,5,DAT_00018014,DAT_00018010,0x155);
    iVar5 = vsys_get_node_from_map(8,*param_2,param_2[1]);
    uVar3 = DAT_00018020;
    uVar2 = DAT_00018010;
    if (iVar5 != 0) {
      piVar10 = *(int **)(iVar5 + 0x3c);
      iVar8 = *piVar10;
      vlog(8,5,DAT_00018018,DAT_00018010,0x15a,iVar8);
      piVar10 = piVar10 + 0x13;
      piVar9 = (int *)*piVar10;
      puVar6 = extraout_r1;
      iVar5 = 0;
      piVar4 = (int *)*piVar9;
      while (piVar1 = piVar4, iVar11 = (int)(piVar9 + -9), piVar9 != piVar10) {
        uVar7 = piVar9[-5];
        iVar8 = iVar5;
        if (iVar5 < 8) {
          puVar6 = param_2 + iVar5;
          iVar8 = iVar5 + 1;
        }
        if (iVar5 < 8) {
          puVar6[5] = uVar7;
        }
        vlog(8,5,uVar3,uVar2,0x161,iVar11,uVar7);
        puVar6 = extraout_r1_00;
        iVar5 = iVar8;
        piVar4 = (int *)*piVar1;
        piVar9 = piVar1;
        iVar8 = iVar11;
      }
      vlog(8,5,DAT_0001801c,DAT_00018010,0x164,iVar8);
      return 0;
    }
  }
  else {
    vlog(8,2,DAT_0001800c,DAT_00018010,0x152);
  }
  return 0xffffffff;
}



/* ===== vvi_node_delete @ 00018024 size=178 ===== */

undefined4 vvi_node_delete(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar4 = *(int *)(param_1 + 0x80);
  puVar6 = (undefined4 *)*param_2;
  iVar5 = iVar4 + -0x20;
  iVar3 = param_2[2];
  if (param_2[6] == 0xc3) {
    puVar8 = param_2;
    iVar2 = vsys_get_node_from_map(8,puVar6,iVar3,0xc3,param_1,param_2,param_3,param_4);
    if (iVar2 != 0) {
      iVar7 = *(int *)(iVar2 + 0x3c);
      vsys_remove_node_from_map(8,*param_2,param_2[2]);
      mpi_node_destroy(iVar2);
      if (iVar7 != 0) {
        mpi_buf_pool_destroy(iVar7,1);
      }
      puVar8 = puVar6;
      param_3 = iVar3;
      vlog(8,4,DAT_000180e0,DAT_000180dc,0xdd,puVar6,iVar3);
    }
    if (iVar5 != 0) {
      iVar3 = iVar3 * 0xd7 + (int)puVar6 * 0x50a;
      iVar4 = iVar4 + iVar3;
      uVar1 = *(undefined4 *)(iVar4 + 0x420);
      memset((void *)(iVar5 + iVar3 + 0x375),0,0xd7);
      *(undefined4 *)(iVar4 + 0x420) = uVar1;
    }
    vlog(8,5,DAT_000180e4,DAT_000180dc,0xe7,puVar8,param_3);
    uVar1 = 0;
  }
  else {
    vlog(8,2,DAT_000180d8,DAT_000180dc,0xd2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== vvi_node_start @ 000180e8 size=204 ===== */

undefined4 vvi_node_start(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x80) + 0xa0);
  if (param_2[6] == 0xc3) {
    iVar2 = vsys_get_node_from_map(8,*param_2,param_2[2],0xc3,param_1,param_2);
    if (*(char *)(param_2 + 0xd) != '\0') {
      *(undefined4 *)(iVar3 + 0xec) = param_2[0xc];
      uVar4 = param_2[7];
      uVar1 = param_2[0xc];
      __aeabi_uidivmod(uVar4,uVar1);
      if (extraout_r1 != 0) {
        uVar1 = get_new_wrap_line(param_2[5],uVar4,param_2[3],uVar1);
      }
      mcu_wrap_end();
      mcu_set_wrap_line(uVar1);
      mcu_wrap_config(param_2[7],0);
      *(uint *)(iVar3 + 0xe4) = (uint)*(byte *)(param_2 + 0xd);
      *(undefined4 *)(iVar3 + 0xe8) = param_2[0xc];
    }
    *(undefined4 *)(iVar3 + 4) = 1;
    if (iVar2 != 0) {
      vlog(8,5,DAT_000181bc,DAT_000181b8,0x122);
      mpi_node_streamon(iVar2);
      vlog(8,5,DAT_000181c0,DAT_000181b8,0x124);
    }
    vlog(8,4,DAT_000181c4,DAT_000181b8,0x127);
    uVar1 = 0;
  }
  else {
    vlog(8,2,DAT_000181b4,DAT_000181b8,0x10e);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== vvi_node_stop @ 000181c8 size=158 ===== */

undefined4 vvi_node_stop(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x80);
  if (param_2[6] == 0xc3) {
    iVar2 = vsys_get_node_from_map(8,*param_2,param_2[2],0xc3,param_1,param_2,param_3,param_4);
    if (iVar2 != 0) {
      vlog(8,4,DAT_00018270,DAT_0001826c,0x139,*param_2,param_2[2]);
      mpi_node_flush(iVar2,1);
      *(undefined4 *)(iVar3 + -0x1c) = 0;
      iVar2 = param_2[2] * 0xd7 + *param_2 * 0x50a + iVar3;
      *(undefined1 *)(iVar2 + 0x418) = 0;
      *(undefined1 *)(iVar2 + 0x419) = 0;
      *(undefined1 *)(iVar2 + 0x41a) = 0;
      *(undefined1 *)(iVar2 + 0x41b) = 0;
    }
    uVar1 = 0;
    if (*(int *)(iVar3 + 0xc4) != 0) {
      if (param_2[2] == 0) {
        *(undefined4 *)(iVar3 + 0xc4) = 0;
        *(undefined4 *)(iVar3 + 200) = 0;
        mcu_wrap_end();
        msleep(10);
      }
      uVar1 = 0;
    }
  }
  else {
    vlog(8,2,DAT_00018268,DAT_0001826c,0x133);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== vvi_mb_put @ 00018274 size=128 ===== */

undefined4 vvi_mb_put(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_2[4] == 0x88) {
    iVar1 = vsys_get_node_from_map(8,*param_2,param_2[1],0x88,param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      iVar2 = mpi_obj_from_id(param_2[2],4);
      uVar3 = *(undefined4 *)(iVar2 + 0x40);
      uVar4 = param_2[2];
      iVar5 = iVar2;
      vlog(8,5,DAT_000182fc,DAT_000182f8,0x17b,uVar4,iVar2,uVar3);
      if (iVar2 != 0) {
        vlog(8,5,DAT_00018300,DAT_000182f8,0x17d,uVar4,iVar5,uVar3);
        mpi_node_release_buffer_flag(iVar1,iVar2,0);
        return 0;
      }
      return 0;
    }
  }
  else {
    vlog(8,2,DAT_000182f4,DAT_000182f8,0x172);
  }
  return 0xffffffff;
}



/* ===== vvi_mb_get @ 00018304 size=202 ===== */

undefined4 vvi_mb_get(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2[4] == 0x88) {
    if ((*(int *)(*(int *)(param_1 + 0x80) + 0xc4) == 0) || (param_2[1] != 0)) {
      iVar1 = vsys_get_node_from_map(8,*param_2);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      *(undefined4 *)(iVar1 + 0x168) = param_2[3];
      puVar2 = (undefined4 *)mpi_node_pick_out_buffer();
      if (puVar2 == (undefined4 *)0x0) {
        return 0xffffffff;
      }
      param_2[0xd] = *(undefined4 *)puVar2[0x10];
      memcpy(param_2 + 0xe,puVar2 + 0x3a,0x50);
      uVar3 = param_2[0x1d];
      uVar4 = *puVar2;
      param_2[2] = uVar4;
      vlog(8,5,DAT_000183dc,DAT_000183d4,0x1a1,puVar2,uVar4,param_2[0x1b],param_2[0x1c],uVar3);
      vlog(8,5,DAT_000183e0,DAT_000183d4,0x1a5,param_2[2],*(undefined4 *)puVar2[0x10],puVar2[0x3b],
           puVar2[0x3c],uVar3,puVar2[0x48],puVar2[0x49]);
      return 0;
    }
    uVar4 = 0x191;
    uVar3 = DAT_000183d8;
  }
  else {
    uVar4 = 0x18c;
    uVar3 = DAT_000183d0;
  }
  vlog(8,2,uVar3,DAT_000183d4,uVar4);
  return 0xffffffff;
}



/* ===== vvi_node_get_dev_status @ 000183e4 size=236 ===== */

undefined4 vvi_node_get_dev_status(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar4 = param_2[2];
  iVar7 = *(int *)(param_1 + 0x80);
  if (*(int *)((int)param_2 + 199) == 0xd7) {
    if (*DAT_000184d8 == 0) {
LAB_0001841c:
      if (uVar3 == 0xffffffff) {
        if (uVar5 < 3) {
          if (uVar4 < 6) {
            iVar7 = uVar4 * 0xd7 + uVar5 * 0x50a + iVar7;
            *(undefined4 *)((int)param_2 + 0xcb) = *(undefined4 *)(iVar7 + 0x420);
            *(undefined4 *)((int)param_2 + 0xc3) = *(undefined4 *)(iVar7 + 0x418);
            return 0;
          }
          uVar9 = 6;
          uVar2 = 0x26f;
        }
        else {
          uVar9 = 3;
          uVar2 = 0x26a;
        }
        vlog(8,2,DAT_000184dc,DAT_000184d4,uVar2,uVar5,uVar9);
        return 0xffffffff;
      }
      if (2 < uVar3) {
        vlog(8,2,DAT_000184e4,DAT_000184d4,0x276,uVar3,3);
        return 0xffffffff;
      }
      *(undefined4 *)((int)param_2 + 0xcb) = *(undefined4 *)(uVar3 * 0xd7 + iVar7 + 0x19b);
      return 0;
    }
    iVar6 = 0x32;
    while (bVar8 = iVar6 != 0, iVar6 = iVar6 + -1, bVar8) {
      iVar1 = mcu_get_wrap_status();
      if (iVar1 != 0) {
        if (iVar6 != 0) goto LAB_0001841c;
        break;
      }
      msleep(10);
    }
    uVar9 = 0x263;
    uVar2 = DAT_000184e0;
  }
  else {
    uVar9 = 0x255;
    uVar2 = DAT_000184d0;
  }
  vlog(8,2,uVar2,DAT_000184d4,uVar9);
  return 0xffffffff;
}



/* ===== vi_release @ 000184e8 size=188 ===== */

undefined4 vi_release(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  void *__s;
  void *pvVar7;
  undefined4 *__s_00;
  
  puVar4 = *(undefined4 **)(param_2 + 0x80);
  mpi_obj_unref(puVar4);
  vlog(8,4,DAT_000185a4,DAT_000185a8,0x2ea,*puVar4);
  uVar1 = DAT_000185ac;
  if (puVar4[4] == 1) {
    __s_00 = puVar4 + 0x34;
    pvVar7 = (void *)((int)puVar4 + 0x355);
    iVar5 = 0;
    do {
      memset(__s_00,0,0xd7);
      iVar6 = 0;
      __s = pvVar7;
      do {
        if (__s != (void *)0x0) {
          memset(__s,0,0xd7);
        }
        iVar2 = vsys_get_node_from_map(8,iVar5,iVar6);
        if (iVar2 != 0) {
          iVar3 = *(int *)(iVar2 + 0x3c);
          vsys_remove_node_from_map(8,iVar5,iVar6);
          mpi_node_destroy(iVar2);
          if (iVar3 != 0) {
            mpi_buf_pool_destroy(iVar3,1);
          }
          vlog(8,4,uVar1,DAT_000185a8,0x2fa,iVar5,iVar6);
        }
        iVar6 = iVar6 + 1;
        __s = (void *)((int)__s + 0xd7);
      } while (iVar6 != 6);
      iVar5 = iVar5 + 1;
      __s_00 = (undefined4 *)((int)__s_00 + 0xd7);
      pvVar7 = (void *)((int)pvVar7 + 0x50a);
    } while (iVar5 != 3);
    puVar4[0x31] = 0;
    puVar4[0x32] = 0;
  }
  return 0;
}



/* ===== vi_open @ 000185b0 size=44 ===== */

undefined4 vi_open(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_000185dc;
  *(int *)(param_2 + 0x80) = DAT_000185dc;
  *(undefined4 *)(iVar1 + -4) = 0xd;
  mpi_obj_ref();
  vlog(8,4,DAT_000185e0,DAT_000185e4,0x2de,param_2,param_3);
  return 0;
}



/* ===== vi_ioctl @ 000185e8 size=56 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 vi_ioctl(int param_1,uint param_2)

{
  if ((param_2 & 0xff) < *(uint *)(*(int *)(*(int *)(param_1 + 0x80) + 0xa0) + 0x1c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  vlog(8,2,DAT_0001863c,DAT_00018640,0x2cc,param_2 & 0xff);
  return 0xffffffea;
}



/* ===== vvi_node_set_chns_attr @ 00018644 size=130 ===== */

undefined4 vvi_node_set_chns_attr(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = *param_2;
  uVar1 = param_2[2];
  if (*(int *)((int)param_2 + 199) == 0xd7) {
    if (uVar3 < 3) {
      if (uVar1 < 6) {
        iVar2 = *(int *)(param_1 + 0x80) + uVar1 * 0xd7 + uVar3 * 0x50a;
        uVar4 = *(undefined4 *)(iVar2 + 0x420);
        memcpy((void *)(iVar2 + 0x355),param_2,0xd7);
        *(undefined4 *)(iVar2 + 0x420) = uVar4;
        return 0;
      }
      uVar6 = 6;
      uVar5 = 0x206;
      uVar4 = DAT_000186d4;
    }
    else {
      uVar6 = 3;
      uVar5 = 0x202;
      uVar4 = DAT_000186d0;
      uVar1 = uVar3;
    }
    vlog(8,2,uVar4,DAT_000186cc,uVar5,uVar1,uVar6);
  }
  else {
    vlog(8,2,DAT_000186c8,DAT_000186cc,0x1fe);
  }
  return 0xffffffff;
}



/* ===== vvi_node_get_chns_attr @ 000186d8 size=126 ===== */

undefined4 vvi_node_get_chns_attr(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[2];
  if (*(int *)((int)param_2 + 199) == 0xd7) {
    if (uVar2 < 3) {
      if (uVar3 < 6) {
        memcpy(param_2,(void *)(*(int *)(param_1 + 0x80) + uVar2 * 0x50a + uVar3 * 0xd7 + 0x355),
               0xd7);
        return 0;
      }
      uVar5 = 6;
      uVar4 = 0x221;
      uVar1 = DAT_00018764;
    }
    else {
      uVar5 = 3;
      uVar4 = 0x21d;
      uVar1 = DAT_00018760;
      uVar3 = uVar2;
    }
    vlog(8,2,uVar1,DAT_0001875c,uVar4,uVar3,uVar5);
  }
  else {
    vlog(8,2,DAT_00018758,DAT_0001875c,0x219);
  }
  return 0xffffffff;
}



/* ===== rockit_free_tb_stream_buf @ 00018768 size=52 ===== */

undefined4
rockit_free_tb_stream_buf
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_0001879c + 0x30),0xdc0,param_3,DAT_0001879c,param_4);
  uVar1 = DAT_000187a4;
  if (iVar2 == 0) {
    printk(DAT_000187a0);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 4) = uVar1;
    rkisp_rockit_free_tb_stream_buf();
    kfree(iVar2);
  }
  return uVar3;
}



/* ===== vvi_change_resolution @ 000187a8 size=294 ===== */

undefined4 vvi_change_resolution(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x80) + 0xa0);
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_000188d0 + 0x30),0xdc0,param_3,DAT_000188d0,param_1,
                           param_2,param_3);
  if (iVar1 == 0) {
    printk(DAT_000188d4);
  }
  else {
    if (param_2[4] == 0x21) {
      iVar2 = vsys_get_node_from_map(8,*param_2,param_2[1]);
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      uVar6 = *(undefined4 *)(iVar5 + 0xe8);
      uVar8 = param_2[5];
      uVar7 = param_2[6];
      *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x38);
      uVar4 = DAT_000188e0;
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x2c);
      vlog(8,4,uVar4,DAT_000188d8,0x1cd,*(undefined4 *)(iVar5 + 0xe4));
      if ((*(int *)(iVar5 + 0xe4) != 0) && (param_2[1] == 0)) {
        uVar6 = get_new_wrap_line(uVar8,uVar7,param_2[2],*(undefined4 *)(iVar5 + 0xec));
        mcu_wrap_end();
        msleep(10);
      }
      iVar2 = 2;
      while (iVar3 = rkisp_rockit_pause_stream(iVar1), iVar3 == 0) {
        iVar3 = rkisp_rockit_config_stream(iVar1,uVar8,uVar7,uVar6);
        if (iVar3 != 0) {
          printk(DAT_000188e8,DAT_000188d8,0x1dd);
          return 0xfffffffe;
        }
        iVar3 = rkisp_rockit_resume_stream(iVar1);
        if (iVar3 != 0) {
          printk(DAT_000188ec,DAT_000188d8,0x1e3);
          return 0xfffffffd;
        }
        if (iVar2 == 1) {
          if ((*(int *)(iVar5 + 0xe4) != 0) && (param_2[1] == 0)) {
            mcu_set_wrap_line(uVar6);
            mcu_wrap_config(uVar7,uVar6);
            *(undefined4 *)(iVar5 + 0xe8) = uVar6;
          }
          kfree(iVar1);
          return 0;
        }
        iVar2 = 1;
      }
      uVar4 = 0x1d8;
      uVar6 = DAT_000188e4;
    }
    else {
      uVar4 = 0x1bc;
      uVar6 = DAT_000188dc;
    }
    printk(uVar6,DAT_000188d8,uVar4);
  }
  return 0xffffffff;
}



/* ===== rockit_get_tb_stream_info @ 000188f0 size=56 ===== */

undefined4 rockit_get_tb_stream_info(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_00018928 + 0x30),0xdc0);
  uVar1 = DAT_00018930;
  if (iVar2 == 0) {
    printk(DAT_0001892c);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 4) = uVar1;
    rkisp_rockit_get_tb_stream_info(iVar2,param_1);
    kfree(iVar2);
  }
  return uVar3;
}



/* ===== vvi_node_create @ 00018934 size=678 ===== */

void vvi_node_create(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  char acStack_4c [32];
  int local_2c;
  
  piVar2 = DAT_00018bdc;
  local_2c = *DAT_00018bdc;
  iVar9 = *(int *)(*(int *)(param_1 + 0x80) + 0xa0);
  if (param_2[6] == 0xc3) {
    iVar4 = mpi_allocator_find_by_name(DAT_00018be8);
    if (iVar4 == 0) {
      uVar12 = 0x66;
      uVar3 = 0;
      uVar8 = DAT_00018bec;
    }
    else {
      iVar11 = param_2[2];
      iVar10 = *param_2;
      iVar5 = vsys_get_node_from_map(8,iVar10,iVar11);
      if (iVar5 != 0) {
        vlog(8,4,DAT_00018bf0,DAT_00018be4,0x6f,iVar11);
        uVar3 = 0xfffffffe;
        goto LAB_000189b2;
      }
      cVar1 = *(char *)((int)param_2 + 0x35);
      memset(acStack_4c,0,0x20);
      if (*(char *)((int)param_2 + 0x56) == '\x02') {
        if (*(byte *)((int)param_2 + 0x3b) == 0) {
          strcpy(acStack_4c,DAT_00018bf4);
        }
        else {
          snprintf(acStack_4c,0x20,DAT_00018c10,*(byte *)((int)param_2 + 0x3b) - 0x30);
        }
        uVar3 = mpi_dev_find_by_name(acStack_4c);
        *(undefined4 *)(iVar9 + iVar10 * 4 + 0xc4) = uVar3;
        uVar8 = 0x7e;
LAB_00018a04:
        vlog(8,4,DAT_00018bf8,DAT_00018be4,uVar8,iVar10,uVar3,acStack_4c,(int)param_2 + 0x36);
      }
      else if (*(char *)((int)param_2 + 0x56) == '\0') {
        if (*(byte *)((int)param_2 + 0x45) == 0) {
          strcpy(acStack_4c,DAT_00018c14);
        }
        else {
          snprintf(acStack_4c,0x20,DAT_00018c18,*(byte *)((int)param_2 + 0x45) - 0x30);
        }
        uVar3 = mpi_dev_find_by_name(acStack_4c);
        *(undefined4 *)(iVar9 + iVar10 * 4 + 0xc4) = uVar3;
        uVar8 = 0x87;
        goto LAB_00018a04;
      }
      if (cVar1 == '\0') {
        iVar9 = *(int *)(iVar9 + *param_2 * 4 + 0xc4);
        pvVar6 = (void *)0x0;
LAB_00018aca:
        iVar9 = mpi_dev_create_node_with_params(iVar9,iVar11,0,pvVar6);
        if (iVar9 != 0) {
          vlog(8,4,DAT_00018c1c,DAT_00018be4,0x9c,iVar10,iVar11);
          uVar3 = DAT_00018c20;
          *(undefined4 *)(iVar9 + 4) = DAT_00018c20;
          if (param_2[10] == 1) {
            if (param_2[9] == 0) {
              *(undefined1 *)((int)param_2 + 0x21) = 0;
              *(undefined1 *)(param_2 + 8) = 4;
              *(undefined1 *)((int)param_2 + 0x22) = 0;
              *(undefined1 *)((int)param_2 + 0x23) = 0;
            }
            uVar8 = DAT_00018c24;
            iVar5 = param_2[8];
            if (iVar5 == 1) {
              iVar5 = 4;
              *(undefined1 *)((int)param_2 + 0x21) = 0;
              *(undefined1 *)(param_2 + 8) = 4;
              *(undefined1 *)((int)param_2 + 0x22) = 0;
              *(undefined1 *)((int)param_2 + 0x23) = 0;
            }
            else {
              uVar8 = 1;
            }
            iVar4 = mpi_buf_pool_create(iVar4,uVar8,param_2[9],iVar5,uVar3);
            iVar11 = param_2[8];
            vlog(8,4,DAT_00018c28,DAT_00018be4,0xaa,param_2[2],iVar11);
LAB_00018b46:
            if (iVar4 != 0) {
              mpi_buf_pool_add_user(iVar4,iVar9);
              vsys_add_node_to_map(8,*param_2,param_2[2],iVar9);
              mpi_buf_pool_add_user(iVar4,iVar9);
              vlog(8,4,DAT_00018c34,DAT_00018be4,0xbf);
              uVar3 = 0;
              goto LAB_000189b2;
            }
          }
          else if (param_2[10] == 0) {
            iVar4 = vsys_get_pool(param_2[0xb]);
            vlog(8,4,DAT_00018c30,DAT_00018be4,0xb1,param_2[0xb],iVar11);
            goto LAB_00018b46;
          }
          vlog(8,2,DAT_00018c2c,DAT_00018be4,0xb7,param_2[2],iVar11);
          mpi_node_destroy(iVar9);
          goto LAB_00018962;
        }
      }
      else {
        pvVar6 = (void *)kmem_cache_alloc(*(undefined4 *)(DAT_00018bfc + 4),0xdc0);
        pvVar6 = memset(pvVar6,0,0x50);
        iVar5 = param_2[5];
        *(int *)((int)pvVar6 + 4) = iVar5;
        iVar7 = param_2[7];
        *(int *)((int)pvVar6 + 8) = iVar7;
        *(int *)((int)pvVar6 + 0xc) = iVar5;
        *(int *)((int)pvVar6 + 0x10) = iVar7;
        *(undefined4 *)((int)pvVar6 + 0x18) = *(undefined4 *)((int)param_2 + 0x5f);
        iVar9 = *(int *)(iVar9 + iVar10 * 4 + 0xc4);
        if (iVar9 != 0) goto LAB_00018aca;
      }
      vlog(8,2,DAT_00018c00,DAT_00018be4,0x98,iVar10,iVar11);
      uVar3 = DAT_00018c08;
      if (cVar1 == '\0') {
        uVar3 = DAT_00018c04;
      }
      uVar12 = 0x99;
      uVar8 = DAT_00018c0c;
    }
    vlog(8,2,uVar8,DAT_00018be4,uVar12,uVar3);
  }
  else {
    vlog(8,2,DAT_00018be0,DAT_00018be4,0x61);
  }
LAB_00018962:
  uVar3 = 0xffffffff;
LAB_000189b2:
  if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== vvi_probe @ 00018c38 size=88 ===== */

void vvi_probe(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_00018c94;
  puVar1 = DAT_00018c90;
  puVar4 = DAT_00018c90 + 8;
  memset(DAT_00018c90,0,0x1294);
  uVar3 = kstrdup(param_1,0xcc0);
  puVar1[0x30] = puVar1;
  puVar1[0x38] = 1;
  puVar1[6] = iVar2 + 0x10c;
  puVar1[7] = 0xd;
  *puVar1 = uVar3;
  mpi_dev_register(puVar4,8,param_1);
  puVar1[0x19] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  mpi_sysfs_dev_add(puVar4,iVar2 + 0x210);
  return;
}



/* ===== vvi_shutdown @ 00018c98 size=26 ===== */

void vvi_shutdown(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00018cb4;
  puVar2 = DAT_00018cb4 + 8;
  DAT_00018cb4[3] = 1;
  mpi_dev_unregister(puVar2);
  kfree(*puVar1);
  return;
}



/* ===== vcodec_get_chnl_ctx @ 00018cb8 size=6 ===== */

undefined4 vcodec_get_chnl_ctx(int param_1)

{
  return *(undefined4 *)(param_1 + 0x108);
}



/* ===== vcodec_get_chnl_id @ 00018cbe size=4 ===== */

undefined4 vcodec_get_chnl_id(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* ===== vcodec_get_chnl_type @ 00018cc2 size=4 ===== */

undefined4 vcodec_get_chnl_type(void)

{
  return 1;
}



/* ===== mpi_buf_get_dmabuf @ 00018cc6 size=6 ===== */

undefined4 mpi_buf_get_dmabuf(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x40);
  }
  return uVar1;
}



/* ===== mpi_buffer_pool_get_free_num @ 00018ccc size=20 ===== */

undefined4 mpi_buffer_pool_get_free_num(int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0xc) & 6) == 2)) {
    return *(undefined4 *)(param_1 + 0x44);
  }
  return 1;
}



/* ===== venc_compat_ioctl @ 00018ce0 size=4 ===== */

undefined4 venc_compat_ioctl(void)

{
  return 0;
}



/* ===== venc_poll @ 00018ce4 size=38 ===== */

undefined4 venc_poll(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x80);
  if (((param_2 != (undefined4 *)0x0) && ((code *)*param_2 != (code *)0x0)) &&
     (iVar2 = iVar3 + 0xfc4, iVar2 != 0)) {
    (*(code *)*param_2)(param_1,iVar2,param_2);
  }
  if (*(int *)(iVar3 + 0x100c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x41;
  }
  return uVar1;
}



/* ===== mpi_buf_map @ 00018d0a size=22 ===== */

undefined4 mpi_buf_map(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = dma_buf_vmap(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0xdc) = uVar1;
  }
  return uVar1;
}



/* ===== mpi_buf_ref @ 00018d20 size=8 ===== */

void mpi_buf_ref(int param_1)

{
  if (param_1 != 0) {
    mpi_obj_ref();
    return;
  }
  return;
}



/* ===== venc_open @ 00018d28 size=16 ===== */

undefined4 venc_open(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x80) = DAT_00018d38;
  mpi_obj_ref();
  return 0;
}



/* ===== venc_node_enable_tb @ 00018d3c size=60 ===== */

undefined4 venc_node_enable_tb(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 < 0x10) {
    uVar1 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x80) + iVar2 + 0x1320) = 1;
  }
  else {
    vlog(4,2,DAT_00018d78,DAT_00018d7c,0x6f4,iVar2,0x10,param_4);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== venc_node_tb_bind @ 00018d80 size=66 ===== */

undefined4 venc_node_tb_bind(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar3 = param_2[1];
  if ((iVar1 < 0x10) && (iVar3 < 0x10)) {
    uVar2 = 0;
    *(char *)(*(int *)(param_1 + 0x80) + iVar1 + 0x1330) = (char)iVar3;
  }
  else {
    vlog(4,2,DAT_00018dc4,DAT_00018dc8,0x704,iVar1,iVar3,0x10);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== venc_node_tb_request @ 00018dcc size=70 ===== */

undefined4 venc_node_tb_request(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 < 0x10) {
    disableIRQinterrupts();
    *(undefined4 *)(*(int *)(param_1 + 0x80) + (iVar2 + 0x4d0) * 4) = 1;
    uVar1 = 0;
  }
  else {
    vlog(4,2,DAT_00018e14,DAT_00018e18,0x713,iVar2,0x10,param_4);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== mpi_buf_unref @ 00018e1c size=42 ===== */

void mpi_buf_unref(undefined4 *param_1)

{
  if (param_1[0xf] != 0) {
    vlog(4,5,DAT_00018e48,DAT_00018e4c,0x378,*param_1);
  }
  mpi_obj_unref(param_1);
  return;
}



/* ===== mpi_buffer_queue_pop @ 00018e50 size=4 ===== */

void mpi_buffer_queue_pop(undefined4 param_1)

{
  mpi_queue_do_try_pop_obj(param_1,0);
  return;
}



/* ===== mpi_buffer_queue_push @ 00018e54 size=8 ===== */

void mpi_buffer_queue_push(void)

{
  mpi_queue_push_obj();
  return;
}



/* ===== get_venc_node @ 00018e5c size=10 ===== */

void get_venc_node(undefined4 param_1)

{
  vsys_get_node_from_map(4,0,param_1);
  return;
}



/* ===== vcodec_handle_message @ 00018e66 size=690 ===== */

undefined4 vcodec_handle_message(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  
  if (param_1[2] != 1) {
    return 0;
  }
  uVar14 = 0;
  while (puVar2 = (undefined4 *)get_venc_node(uVar14), iVar1 = DAT_00019124, param_1 != puVar2) {
    uVar14 = uVar14 + 1;
    if (uVar14 == 0x10) {
      uVar15 = 0x24c;
      uVar14 = 0xffffffff;
      uVar9 = DAT_0001911c;
LAB_00018eaa:
      vlog(4,2,uVar9,DAT_00019118,uVar15,uVar14);
      return 0;
    }
  }
  iVar12 = *(int *)param_1[0x42];
  if (iVar12 == 0) {
    uVar15 = 0x252;
    uVar9 = DAT_00019120;
    goto LAB_00018eaa;
  }
  if (param_2 != 1) {
    return 0;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  iVar13 = uVar14 + 0x34;
  if (*(int *)(DAT_00019124 + iVar13 * 4 + 4) != 0) {
    if (*(int *)(DAT_00019124 + 0x140) != param_3[0x47]) {
      vlog(4,4,DAT_00019128,DAT_00019118,0x261,*(int *)(DAT_00019124 + 0x140),param_3[0x47]);
    }
    *(int *)(iVar1 + 0x140) = param_3[0x47] + 1;
  }
  if (0 < *(int *)(iVar1 + 0x13c)) {
    *(int *)(iVar1 + 0x13c) = *(int *)(iVar1 + 0x13c) + -1;
    return 0;
  }
  iVar4 = *(int *)(iVar1 + (uVar14 + 0x1de2) * 4);
  if ((iVar4 == 9) || (iVar4 == 0xf)) {
    iVar5 = (uVar14 + 0xed) * 0x10;
    iVar4 = iVar1 + iVar5;
    iVar5 = *(int *)(iVar1 + iVar5);
    if (iVar5 == 0) {
      return 0;
    }
    if (0 < iVar5) {
      if (*(int *)(iVar4 + 4) != 0) {
        return 0;
      }
      *(undefined4 *)(iVar4 + 4) = 1;
    }
  }
  if (*(char *)(iVar1 + uVar14 + 0x1324) != '\0') {
    iVar4 = 0;
    pbVar6 = DAT_0001912c;
    while (*pbVar6 != uVar14) {
      iVar4 = iVar4 + 1;
      pbVar6 = pbVar6 + 1;
      if (iVar4 == 0x10) {
        return 0;
      }
    }
    disableIRQinterrupts();
    iVar5 = 0;
    piVar7 = (int *)(iVar4 * 800 + iVar1 + 0x4588);
    while( true ) {
      iVar3 = piVar7[1];
      if (*piVar7 != 0 || iVar3 != 0) break;
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 2;
      if (iVar5 == 100) {
        return 0;
      }
    }
    param_3[0x48] = *piVar7;
    param_3[0x49] = iVar3;
    iVar5 = iVar4 * 100 + iVar5;
    puVar2 = (undefined4 *)(iVar1 + (iVar5 + 0x271) * 8);
    puVar8 = (undefined4 *)(iVar1 + (iVar5 + 0x8b1) * 8);
    *puVar2 = 0;
    puVar2[1] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
  }
  uVar9 = *(undefined4 *)(iVar12 + 0x10);
  uVar15 = *param_3;
  uVar10 = *param_1;
  uVar11 = *(undefined4 *)(param_1[0xb] + 0x2c);
  vlog(4,5,DAT_00019144,DAT_00019118,0x27a,uVar11,uVar10,uVar15,uVar9);
  mpi_obj_ref(param_3);
  do {
    iVar4 = mpi_queue_push_obj(iVar12,param_3);
    if (iVar4 != 0) {
LAB_00019034:
      if ((*(int *)(iVar1 + 0x138) != 0) && (iVar12 = mcu_get_wrap_status(), iVar12 != 2)) {
        *(undefined4 *)(iVar1 + 0x138) = 0;
      }
      if (*(int *)(iVar1 + iVar13 * 4 + 4) != 0) {
        if (*(int *)(iVar1 + 0x138) == 0) {
          mcu_wrap_start();
          *(undefined4 *)(iVar1 + 0x138) = 1;
          vlog(4,4,DAT_00019140,DAT_00019118,0x29f,param_3[0x3b],param_3[0x3c],param_3[0x3d],
               param_3[0x3e],param_3[0x47]);
          return 1;
        }
        return 1;
      }
      return 1;
    }
    if (*(int *)(iVar1 + iVar13 * 4 + 4) != 0) {
      if (*(int *)(iVar1 + 0x144) == 0) {
        *(undefined4 **)(iVar1 + 0x144) = param_3;
      }
      else {
        iVar12 = *DAT_00019134;
        *DAT_00019134 = iVar12 + 1;
        if (iVar12 < 0x14) {
          vlog(4,2,DAT_0001913c,DAT_00019118,0x281,param_3[0x47],uVar10,uVar15,uVar9);
        }
        mpi_obj_unref(param_3);
      }
      goto LAB_00019034;
    }
    puVar2 = (undefined4 *)mpi_queue_pop_obj(iVar12);
    if (puVar2 == (undefined4 *)0x0) {
      vlog(4,4,DAT_00019130,DAT_00019118,0x28c,uVar11,param_3[0x48],param_3[0x49]);
      mpi_obj_unref(param_3);
      return 0;
    }
    iVar4 = DAT_00019134[1];
    DAT_00019134[1] = iVar4 + 1;
    if (iVar4 < 0x14) {
      uVar15 = *puVar2;
      uVar10 = *param_1;
      uVar11 = *(undefined4 *)(param_1[0xb] + 0x2c);
      vlog(4,4,DAT_00019138,DAT_00019118,0x292,uVar11,uVar10,uVar15);
    }
    mpi_obj_unref(puVar2);
  } while( true );
}



/* ===== get_pp_node @ 00019148 size=10 ===== */

void get_pp_node(undefined4 param_1)

{
  vsys_get_node_from_map(0x14,0,param_1);
  return;
}



/* ===== vcodec_destory_dev @ 00019152 size=26 ===== */

undefined4 vcodec_destory_dev(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    mpi_dev_unregister();
    kfree(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== mpi_buf_alloc @ 0001916c size=50 ===== */

int mpi_buf_alloc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = mpi_allocator_find_by_name(DAT_000191a0);
  iVar2 = mpi_allocator_alloc(uVar1,1,param_1);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = mpi_buf_create(iVar2,0);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 4) = DAT_000191a4;
      dma_buf_put(iVar2);
    }
  }
  return iVar3;
}



/* ===== mpi_buf_unmap @ 000191a8 size=30 ===== */

undefined4 mpi_buf_unmap(int param_1)

{
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xdc) != 0) && (*(int *)(param_1 + 0x40) != 0)) {
      dma_buf_vunmap();
    }
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  return 0;
}



/* ===== mpi_buffer_queue_create @ 000191c6 size=8 ===== */

void mpi_buffer_queue_create(undefined4 param_1)

{
  mpi_queue_create(param_1,4,DAT_000191d0);
  return;
}



/* ===== mpi_buffer_queue_destroy @ 000191d4 size=12 ===== */

undefined4
mpi_buffer_queue_destroy
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  mpi_queue_destroy(param_1,0,param_3,param_4,param_4);
  return 0;
}



/* ===== venc_destroy_ctx @ 000191e0 size=24 ===== */

undefined4 venc_destroy_ctx(int *param_1)

{
  if (*param_1 != 0) {
    mpi_queue_destroy(*param_1,0);
  }
  kfree(param_1);
  return 0;
}



/* ===== mpi_buffer_pool_create @ 000191f8 size=38 ===== */

undefined4 mpi_buffer_pool_create(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = param_2;
  iVar1 = mpi_allocator_find_by_name(DAT_00019220);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = mpi_buf_pool_create(iVar1,1,param_1,param_2,DAT_00019224,uVar3);
  }
  return uVar2;
}



/* ===== mpi_buffer_pool_destroy @ 00019228 size=6 ===== */

void mpi_buffer_pool_destroy(undefined4 param_1)

{
  mpi_buf_pool_destroy(param_1,0);
  return;
}



/* ===== mpi_buffer_pool_request_buf @ 0001922e size=6 ===== */

void mpi_buffer_pool_request_buf(undefined4 param_1)

{
  mpi_buf_pool_request_buf(param_1,0);
  return;
}



/* ===== venc_node_create @ 00019234 size=182 ===== */

undefined4 venc_node_create(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar3 = param_1;
  puVar6 = param_2;
  uVar1 = mpi_dev_find_by_name(DAT_000192ec);
  iVar4 = *(int *)(param_1 + 0x80);
  if (param_2[2] == 0x10) {
    if (0xf < (int)param_2[1]) {
      vlog(4,2,DAT_000192f8,DAT_000192f4,0x4fb,param_2[1],0x10);
      return 0xffffffff;
    }
    iVar2 = mpi_allocator_find_by_name(DAT_000192fc);
    if (iVar2 == 0) {
      vlog(4,2,DAT_00019300,DAT_000192f4,0x501,0);
      return 0xffffffff;
    }
    iVar3 = mpi_dev_create_node_with_params(uVar1,param_2[1],1,0,iVar3,puVar6,param_3,param_4);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 4) = DAT_00019308;
      mpi_node_enable_auto_streamon(iVar3,1);
      vsys_add_node_to_map(4,*param_2,param_2[1],iVar3);
      *(undefined4 *)(iVar4 + (param_2[1] + 0x1de2) * 4 + -4) = param_2[3];
      return 0;
    }
    uVar5 = 0x507;
    uVar1 = DAT_00019304;
  }
  else {
    uVar5 = 0x4f7;
    uVar1 = DAT_000192f0;
  }
  vlog(4,2,uVar1,DAT_000192f4,uVar5);
  return 0xffffffff;
}



/* ===== venc_node_delete @ 0001930c size=264 ===== */

undefined4 venc_node_delete(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  iVar3 = *param_2;
  iVar6 = *(int *)(param_1 + 0x80);
  if (iVar3 < 0x10) {
    iVar2 = iVar3 * 0xc0;
    iVar7 = iVar6 + iVar2;
    puVar4 = (undefined4 *)(iVar2 + 0x144 + iVar6);
    do {
      if (*(int *)(iVar7 + 0x148) != 0) {
        kfree();
      }
      if (*(int *)(iVar7 + 0x14c) != 0) {
        kfree();
      }
      *puVar4 = 0;
      puVar5 = puVar4 + 3;
      puVar4[1] = 0;
      iVar7 = iVar7 + 0xc;
      puVar4[2] = 0;
      puVar4 = puVar5;
    } while (puVar5 != (undefined4 *)(iVar6 + 0x204 + iVar2));
    iVar2 = get_venc_node(iVar3);
    if (iVar2 != 0) {
      vsys_remove_node_from_map(4,0,iVar3);
      mpi_node_destroy(iVar2);
    }
    pcVar8 = (char *)(iVar6 + iVar3 + 0x1320);
    if (*pcVar8 != '\0') {
      *(undefined1 *)(iVar6 + iVar3 + 0x1330) = 0xff;
      *(undefined4 *)(iVar6 + (iVar3 + 0x4d0) * 4) = 0;
      memset((void *)(iVar3 * 800 + 5000 + iVar6 + -4),0,800);
      memset((void *)(iVar3 * 800 + 0x4588 + iVar6 + -4),0,800);
      *pcVar8 = '\0';
    }
    iVar6 = DAT_0001941c;
    if ((iVar3 == 0) && (*(int *)(DAT_0001941c + 0xd4) != 0)) {
      mcu_wrap_end();
      *(undefined4 *)(iVar6 + 0xd4) = 0;
    }
    iVar3 = 0;
    do {
      iVar6 = get_venc_node(iVar3);
      if (iVar6 != 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10);
    mpp_vcodec_clear_buf_resource();
    uVar1 = 0;
  }
  else {
    vlog(4,2,DAT_00019414,DAT_00019418,0x51a,iVar3,0x10);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== venc_node_start @ 00019420 size=186 ===== */

undefined4 venc_node_start(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = *param_2;
  if (param_2[5] != 0x24) {
    printk(DAT_000194e0,DAT_000194dc,0x543,param_2[5],param_1,param_2,param_3);
    return 0xffffffff;
  }
  if (0xf < iVar3) {
    vlog(4,2,DAT_000194e4,DAT_000194dc,0x548,iVar3,0x10,param_4);
    return 0xffffffff;
  }
  vlog(4,5,DAT_000194e8,DAT_000194dc,0x54b,iVar3,param_2[1],param_2[2]);
  iVar1 = DAT_000194ec;
  if ((*(int *)(DAT_000194ec + iVar3 * 4 + 0xd4) == 0) && (param_2[1] == 0)) {
    if (iVar3 != 0) goto LAB_000194a4;
  }
  else {
    if (iVar3 != 0) goto LAB_000194a4;
    *(undefined4 *)(DAT_000194ec + 0x138) = 0;
    *(undefined4 *)(iVar1 + 0x13c) = 0;
    *(undefined4 *)(iVar1 + 0x140) = 0;
    *(undefined4 *)(iVar1 + 0x144) = 0;
  }
  if (param_2[1] != 0) {
    *(int *)(iVar1 + 0xd4) = param_2[1];
  }
LAB_000194a4:
  iVar1 = get_venc_node(iVar3);
  if (iVar1 != 0) {
    get_venc_node(iVar3);
    mpi_node_streamon();
  }
  if (iVar3 != 0) {
    return 0;
  }
  piVar2 = DAT_000194f0;
  piVar4 = param_2;
  do {
    piVar5 = piVar4 + 2;
    iVar3 = piVar4[1];
    *piVar2 = *piVar4;
    piVar2[1] = iVar3;
    piVar2 = piVar2 + 2;
    piVar4 = piVar5;
  } while (piVar5 != param_2 + 8);
  *piVar2 = *piVar5;
  return 0;
}



/* ===== venc_node_pp_start @ 000194f4 size=64 ===== */

undefined4 venc_node_pp_start(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if (iVar3 < 1) {
    iVar2 = get_pp_node(iVar3);
    uVar1 = 0;
    if (iVar2 != 0) {
      get_pp_node(iVar3);
      mpi_node_streamon();
      uVar1 = 0;
    }
  }
  else {
    vlog(4,2,DAT_00019534,DAT_00019538,0x66d,iVar3,1,param_4);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== venc_node_send_frame @ 0001953c size=176 ===== */

undefined4 venc_node_send_frame(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = mpi_dev_find_by_name(DAT_000195ec);
  if (param_2[2] == 0x5c) {
    iVar4 = *param_2;
    if (iVar4 < 0x10) {
      iVar2 = get_venc_node(iVar4);
      if ((((iVar2 != 0) && (iVar1 != 0)) && (-1 < param_2[1])) &&
         (iVar3 = get_mpi_buf(), iVar3 != 0)) {
        memcpy((void *)(iVar3 + 0xe8),param_2 + 3,0x50);
        *(undefined4 *)(iVar3 + 200) = 4;
        (**(code **)(iVar1 + 0x50))(iVar2,1,iVar3);
        return 0;
      }
      vlog(4,2,DAT_000195fc,DAT_000195f4,0x57c,iVar4,iVar2,iVar1,param_2[1]);
    }
    else {
      vlog(4,2,DAT_000195f8,DAT_000195f4,0x56b,iVar4,0x10);
    }
  }
  else {
    vlog(4,2,DAT_000195f0,DAT_000195f4,0x566);
  }
  return 0xffffffff;
}



/* ===== venc_node_set_vcodec_attr @ 00019600 size=76 ===== */

undefined4
venc_node_set_vcodec_attr(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar3;
  
  uVar4 = param_2[2];
  if (uVar4 < 0x10) {
    puVar2 = param_2;
    puVar5 = (undefined4 *)(uVar4 * 0x3c + *(int *)(param_1 + 0x80) + 0x77c4);
    do {
      puVar3 = puVar2 + 1;
      *puVar5 = *puVar2;
      puVar2 = puVar3;
      puVar5 = puVar5 + 1;
    } while (puVar3 != param_2 + 0xf);
    uVar1 = 0;
  }
  else {
    vlog(4,2,DAT_0001964c,DAT_00019650,0x5ad,uVar4,0x10,param_4);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== venc_node_get_vcodec_attr @ 00019654 size=76 ===== */

undefined4
venc_node_get_vcodec_attr(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = param_2[2];
  if (uVar2 < 0x10) {
    iVar3 = uVar2 * 0x3c + *(int *)(param_1 + 0x80);
    puVar4 = (undefined4 *)(iVar3 + 0x77c4);
    do {
      puVar5 = puVar4 + 1;
      *param_2 = *puVar4;
      param_2 = param_2 + 1;
      puVar4 = puVar5;
    } while (puVar5 != (undefined4 *)(iVar3 + 0x7800));
    uVar1 = 0;
  }
  else {
    vlog(4,2,DAT_000196a0,DAT_000196a4,0x5ba,uVar2,0x10,param_4);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== venc_node_pp_send_frame @ 000196a8 size=164 ===== */

undefined4 venc_node_pp_send_frame(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = mpi_dev_find_by_name(DAT_0001974c);
  if (param_2[2] == 0x5c) {
    iVar4 = *param_2;
    if (iVar4 < 1) {
      iVar2 = get_pp_node(iVar4);
      if ((((iVar2 != 0) && (iVar1 != 0)) && (-1 < param_2[1])) &&
         (iVar3 = get_mpi_buf(), iVar3 != 0)) {
        memcpy((void *)(iVar3 + 0xe8),param_2 + 3,0x50);
        (**(code **)(iVar1 + 0x50))(iVar2,1,iVar3);
        return 0;
      }
      vlog(4,2,DAT_0001975c,DAT_00019754,0x693,iVar4,iVar2,iVar1,param_2[1]);
    }
    else {
      vlog(4,2,DAT_00019758,DAT_00019754,0x683,iVar4,1);
    }
  }
  else {
    vlog(4,2,DAT_00019750,DAT_00019754,0x67e);
  }
  return 0xffffffff;
}



/* ===== venc_thread_fn @ 00019760 size=750 ===== */

undefined4 venc_thread_fn(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int local_1e4 [21];
  undefined4 local_190 [13];
  undefined4 local_15c;
  int local_158;
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_128 [3];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 auStack_e8 [68];
  undefined4 local_a4 [33];
  
  iVar6 = param_1 + 4;
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  vlog(4,5,DAT_00019a50,DAT_00019a54,0x7df,uVar7,iVar6);
  while (iVar1 = kthread_should_stop(), iVar1 == 0) {
    if (*(int *)(param_1 + 0xb4) == 0) {
      down(param_1 + 0xc4);
      for (piVar11 = *(int **)(param_1 + 0x5c); piVar11 != (int *)(param_1 + 0x5c);
          piVar11 = (int *)*piVar11) {
        iVar1 = mpi_queue_pop_obj(*(undefined4 *)piVar11[0x36]);
        if (iVar1 != 0) {
          local_128[1] = 6;
          local_128[0] = *(int *)(DAT_00019a5c + 8);
          *(int *)(DAT_00019a5c + 8) = local_128[0] + 1;
          local_114 = *(undefined4 *)(iVar1 + 0x40);
          local_128[2] = *(undefined4 *)(param_1 + 0x1064);
          local_11c = *(undefined4 *)(param_1 + 0x1068);
          local_118 = *(undefined4 *)(param_1 + 0x106c);
          vepu_pp_control(0,0x10,local_128);
          disableIRQinterrupts();
          iVar12 = *(int *)(param_1 + 0x100c) + 1;
          if (4 < iVar12) {
            iVar12 = 0;
          }
          if (*(int *)(param_1 + 0xfe0) != 0) {
            local_190[0xc] = *(undefined4 *)(*(int *)(param_1 + (iVar12 + 0x41e) * 4 + 4) + 0x40);
            local_15c = 2;
            local_154 = *(int *)(param_1 + 0x7b94);
            if ((local_154 < 1) || (local_158 = *(int *)(param_1 + 0x7b90), local_158 < 1)) {
              if (*(int *)(param_1 + 0x1078) == 1) {
                local_158 = 0x46;
                local_154 = 3;
              }
              else if (*(int *)(param_1 + 0x1078) == 2) {
                local_158 = 0x32;
                local_154 = 2;
              }
              else {
                local_158 = 0x1e;
                local_154 = 1;
              }
            }
            else {
              if (0xfff < local_158) {
                local_158 = 0xfff;
              }
              if (3 < local_154) {
                local_154 = 4;
              }
            }
            local_150 = *(undefined4 *)(param_1 + 0x1070);
            local_14c = 0;
            vepu_pp_control(0,0x20,local_190 + 0xc);
          }
          if (*(int *)(param_1 + 0xfe4) != 0) {
            local_1e4[10] = 1;
            local_1e4[0xb] = 0xc;
            iVar4 = *(int *)(param_1 + 0xfd0) * *(int *)(param_1 + 0xfd4);
            if (*(int *)(param_1 + 0xfe8) == 0) {
              iVar4 = iVar4 >> 4;
            }
            else {
              iVar4 = iVar4 >> 8;
            }
            local_1e4[0xc] = iVar4 * *(int *)(param_1 + 0x1074) >> 3;
            vepu_pp_control(0,0x30,local_1e4 + 10);
          }
          if (*(int *)(param_1 + 0xfd8) != 0) {
            disableIRQinterrupts();
            iVar4 = param_1 + *(int *)(param_1 + 0x1320) * 8;
            local_a4[0] = *(undefined4 *)(*(int *)(iVar4 + 0x129c) + 0x40);
            *(undefined4 *)(iVar4 + 0x12a0) = 0;
            vepu_pp_control(0,0x40,local_a4);
          }
          if (*(int *)(param_1 + 0xfdc) != 0) {
            vepu_pp_control(0,0x50,auStack_e8);
          }
          if ((((*(int *)(param_1 + 0xfe0) != 0) || (*(int *)(param_1 + 0xfe4) != 0)) ||
              (*(int *)(param_1 + 0xfd8) != 0)) || (*(int *)(param_1 + 0xfdc) != 0)) {
            vepu_pp_control(0,0x60,local_128);
            if (*(int *)(param_1 + 0xfe4) != 0) {
              vepu_pp_control(0,0x70,local_1e4);
            }
            if (*(int *)(param_1 + 0xfdc) != 0) {
              vepu_pp_control(0,0x80,local_190);
              disableIRQinterrupts();
              puVar5 = local_190;
              puVar8 = (undefined4 *)(*(int *)(param_1 + 0x1298) * 0x34 + param_1 + 0x1090);
              do {
                uVar2 = *puVar5;
                uVar3 = puVar5[1];
                puVar5 = puVar5 + 2;
                *puVar8 = uVar2;
                puVar8[1] = uVar3;
                puVar8 = puVar8 + 2;
              } while (puVar5 != local_190 + 0xc);
              iVar4 = *(int *)(param_1 + 0x1298) + 1;
              if (9 < iVar4) {
                iVar4 = 0;
              }
              *(undefined4 *)(*(int *)(param_1 + 0x1298) * 0x34 + param_1 + 0x10c0) =
                   *(undefined4 *)(iVar1 + 0x11c);
              *(int *)(param_1 + 0x1298) = iVar4;
            }
          }
          if (*(int *)(param_1 + 0xfd8) != 0) {
            disableIRQinterrupts();
            iVar4 = *(int *)(param_1 + 0x1320);
            iVar9 = iVar4 + 1;
            if (1 < iVar9) {
              iVar9 = 0;
            }
            *(undefined4 *)(param_1 + (iVar4 + 0x253) * 8 + 8) = *(undefined4 *)(iVar1 + 0x11c);
            *(int *)(param_1 + 0x1320) = iVar9;
          }
          disableIRQinterrupts();
          *(int *)(param_1 + 0x100c) = iVar12;
          *(undefined4 *)(param_1 + 0x1010) = 1;
          piVar13 = local_1e4;
          piVar10 = (int *)(param_1 + 0x1018);
          do {
            iVar12 = *piVar13;
            iVar4 = piVar13[1];
            piVar13 = piVar13 + 2;
            *piVar10 = iVar12;
            piVar10[1] = iVar4;
            piVar10 = piVar10 + 2;
          } while (piVar13 != local_1e4 + 10);
          __wake_up(param_1 + 0xfc8,3,1,0);
          remove_user_from_buf(piVar11 + -0xc,iVar1,0);
          mpi_buf_unref(iVar1);
        }
      }
    }
    else {
      msleep(1);
    }
  }
  vlog(4,4,DAT_00019a58,DAT_00019a54,0x859,uVar7,iVar6);
  return 0;
}



/* ===== venc_handle_message @ 00019a60 size=160 ===== */

undefined4 venc_handle_message(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = DAT_00019b0c;
  uVar1 = DAT_00019b04;
  if (((param_1[2] == 1) && (param_2 == 1)) && (param_3 != (undefined4 *)0x0)) {
    iVar5 = *(int *)param_1[0x42];
    vlog(4,5,DAT_00019b00,DAT_00019b04,700,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,*param_3,
         *(undefined4 *)(iVar5 + 0x10));
    mpi_obj_ref(param_3);
    while (iVar3 = mpi_queue_push_obj(iVar5,param_3), iVar3 == 0) {
      puVar4 = (undefined4 *)mpi_queue_pop_obj(iVar5);
      if (puVar4 == (undefined4 *)0x0) {
        mpi_obj_unref(param_3);
        return 0;
      }
      vlog(4,5,uVar2,uVar1,0x2c8,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,*puVar4);
      mpi_obj_unref(puVar4);
    }
    up(DAT_00019b08);
  }
  return 0;
}



/* ===== venc_node_pp_delete @ 00019b10 size=258 ===== */

undefined4 venc_node_pp_delete(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar6;
  int *piVar5;
  
  iVar6 = *param_2;
  iVar3 = *(int *)(param_1 + 0x80);
  if (iVar6 < 1) {
    if (*(uint *)(iVar3 + 0xa4) < 0xfffff001) {
      *(undefined4 *)(iVar3 + 0xb0) = 1;
      up(iVar3 + 0xc0);
      vlog(4,4,DAT_00019c1c,DAT_00019c18,0x64b,*(undefined4 *)(iVar3 + 0xa4));
      kthread_stop(*(undefined4 *)(iVar3 + 0xa4));
      vlog(4,4,DAT_00019c20,DAT_00019c18,0x64d,*(undefined4 *)(iVar3 + 0xa4));
      *(undefined4 *)(iVar3 + 0xa4) = 0;
    }
    piVar4 = (int *)(iVar3 + 0x1078);
    do {
      piVar5 = piVar4 + 1;
      if (*piVar4 != 0) {
        mpi_buf_unmap();
        mpi_obj_unref(*piVar4);
        *piVar4 = 0;
      }
      piVar4 = piVar5;
    } while ((int *)(iVar3 + 0x108c) != piVar5);
    if (*(int *)(iVar3 + 0x1298) != 0) {
      mpi_obj_unref();
      *(undefined4 *)(iVar3 + 0x1298) = 0;
    }
    if (*(int *)(iVar3 + 0x12a0) != 0) {
      mpi_obj_unref();
      *(int *)(iVar3 + 0x12a0) = 0;
    }
    vepu_pp_destroy_chn(iVar6);
    iVar2 = get_pp_node(iVar6);
    if (iVar2 != 0) {
      vsys_remove_node_from_map(0x14,0,iVar6);
      mpi_node_destroy(iVar2);
    }
    memset((void *)(iVar3 + 0x7b84),0,0x10);
    uVar1 = 0;
  }
  else {
    vlog(4,2,DAT_00019c14,DAT_00019c18,0x644,iVar6,1,param_4);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== venc_release @ 00019c24 size=272 ===== */

undefined4 venc_release(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_2 + 0x80);
  mpi_obj_unref(iVar2);
  iVar1 = DAT_00019d34;
  if (*(int *)(iVar2 + 0x10) == 1) {
    if (*(int *)(DAT_00019d34 + 0xd4) != 0) {
      mcu_wrap_end();
      *(undefined4 *)(iVar1 + 0xd4) = 0;
    }
    piVar3 = (int *)(iVar2 + 0x1078);
    do {
      piVar4 = piVar3 + 1;
      if (*piVar3 != 0) {
        mpi_buf_unmap();
        mpi_obj_unref(*piVar3);
        *piVar3 = 0;
      }
      piVar3 = piVar4;
    } while (piVar4 != (int *)(iVar2 + 0x108c));
    if (*(int *)(iVar2 + 0x1298) != 0) {
      mpi_obj_unref();
      *(undefined4 *)(iVar2 + 0x1298) = 0;
    }
    if (*(int *)(iVar2 + 0x12a0) != 0) {
      mpi_obj_unref();
      *(int *)(iVar2 + 0x12a0) = 0;
    }
    iVar1 = get_pp_node(0);
    if (iVar1 != 0) {
      vepu_pp_destroy_chn(0);
    }
    memset((void *)(iVar2 + 0x144),0,0xc00);
    memset((void *)(iVar2 + 0xd44),0,0x180);
    memset((void *)(iVar2 + 0xec4),0,0x100);
    memset((void *)(iVar2 + 0xfcc),0,0xac);
    memset((void *)(iVar2 + 0x7b84),0,0x10);
    memset((void *)(iVar2 + 0x1330),-1,0x10);
    memset((void *)(iVar2 + 0x1340),0,0x40);
    memset((void *)(iVar2 + 0x1384),0,0x3200);
    memset((void *)(iVar2 + 0x4584),0,0x3200);
    memset((void *)(iVar2 + 0x1320),0,0x10);
    mpp_vcodec_clear_buf_resource();
  }
  return 0;
}



/* ===== venc_ioctl @ 00019d38 size=74 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 venc_ioctl(int param_1,uint param_2)

{
  if (*(uint *)(*(int *)(*(int *)(param_1 + 0x80) + 0xa0) + 0xc0) <= (param_2 & 0xff)) {
    vlog(4,5,DAT_00019dbc,DAT_00019db8,0x746,param_2 & 0xff);
    vlog(4,5,DAT_00019dc0,DAT_00019db8,0x756);
    return 0xffffffea;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== vcodec_notify_drop_frm @ 00019dc8 size=82 ===== */

undefined4
vcodec_notify_drop_frm(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0x10) {
    iVar2 = *(int *)(DAT_00019e24 + (param_1 + 0x1de2) * 4);
    if ((iVar2 == 9) || (iVar2 == 0xf)) {
      iVar2 = (param_1 + 0xed) * 0x10;
      uVar1 = 0;
      if (0 < *(int *)(DAT_00019e24 + iVar2)) {
        *(undefined4 *)(DAT_00019e24 + iVar2 + 4) = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    vlog(4,2,DAT_00019e1c,DAT_00019e20,0x332,param_1,0x10,param_4);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== venc_node_set_combo @ 00019e28 size=92 ===== */

undefined4 venc_node_set_combo(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2[2] == 0xc) {
    iVar1 = *param_2;
    if (iVar1 < 0x10) {
      iVar1 = *(int *)(param_1 + 0x80) + iVar1 * 0x10;
      *(undefined4 *)(iVar1 + 0xec4) = 1;
      *(int *)(iVar1 + 0xec8) = param_2[1];
      return 0;
    }
    vlog(4,2,DAT_00019e8c,DAT_00019e88,0x5cc,iVar1,0x10,param_4);
  }
  else {
    vlog(4,2,DAT_00019e84,DAT_00019e88,0x5c7,param_2,param_3,param_4);
  }
  return 0xffffffff;
}



/* ===== venc_node_set_snap @ 00019e90 size=108 ===== */

undefined4 venc_node_set_snap(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if (param_2[2] == 0xc) {
    iVar2 = *param_2;
    if (iVar2 < 0x10) {
      *(int *)(iVar1 + iVar2 * 0x10 + 0xecc) = param_2[1];
      disableIRQinterrupts();
      if (0 < param_2[1]) {
        *(int *)(iVar1 + (iVar2 + 0x4d0) * 4) = param_2[1];
      }
      return 0;
    }
    vlog(4,2,DAT_00019f04,DAT_00019f00,0x5e2,iVar2,0x10,param_4);
  }
  else {
    vlog(4,2,DAT_00019efc,DAT_00019f00,0x5dd,param_2,param_3,param_4);
  }
  return 0xffffffff;
}



/* ===== venc_node_pp_get_md_attr @ 00019f08 size=166 ===== */

undefined4 venc_node_pp_get_md_attr(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x80);
  if (param_2[1] == 0x10) {
    if (*param_2 < 1) {
      if ((0 < *(int *)(iVar2 + 0x7b90)) && (0 < *(int *)(iVar2 + 0x7b8c))) {
        param_2[2] = *(int *)(iVar2 + 0x7b8c);
        param_2[3] = *(int *)(iVar2 + 0x7b90);
        return 0;
      }
      if (*(int *)(iVar2 + 0x1074) == 1) {
        *(undefined1 *)(param_2 + 2) = 0x46;
        uVar1 = 3;
        *(undefined1 *)((int)param_2 + 9) = 0;
        *(undefined1 *)((int)param_2 + 10) = 0;
        *(undefined1 *)((int)param_2 + 0xb) = 0;
      }
      else if (*(int *)(iVar2 + 0x1074) == 2) {
        *(undefined1 *)((int)param_2 + 9) = 0;
        *(undefined1 *)(param_2 + 2) = 0x32;
        *(undefined1 *)((int)param_2 + 10) = 0;
        *(undefined1 *)((int)param_2 + 0xb) = 0;
        uVar1 = 2;
      }
      else {
        *(undefined1 *)((int)param_2 + 9) = 0;
        *(undefined1 *)(param_2 + 2) = 0x1e;
        uVar1 = 1;
        *(undefined1 *)((int)param_2 + 10) = 0;
        *(undefined1 *)((int)param_2 + 0xb) = 0;
      }
      *(undefined1 *)(param_2 + 3) = uVar1;
      *(undefined1 *)((int)param_2 + 0xd) = 0;
      *(undefined1 *)((int)param_2 + 0xe) = 0;
      *(undefined1 *)((int)param_2 + 0xf) = 0;
      return 0;
    }
    vlog(4,2,DAT_00019fb8,DAT_00019fb4,0x6d8,*param_2,1,param_4);
  }
  else {
    vlog(4,2,DAT_00019fb0,DAT_00019fb4,0x6d3,param_2,param_3,param_4);
  }
  return 0xffffffff;
}



/* ===== vcodec_set_intra_info @ 00019fbc size=264 ===== */

undefined4
vcodec_set_intra_info
          (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          int param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  if (param_1 < 0x10) {
    iVar2 = get_venc_node();
    if ((iVar2 != 0) && (*(code **)(iVar2 + 0x68) != (code *)0x0)) {
      (**(code **)(iVar2 + 0x68))();
    }
    iVar2 = DAT_0001a0cc;
    if (param_7 != 0) {
      iVar5 = *(int *)(DAT_0001a0cc + (param_1 + 0x1de2) * 4);
      if ((iVar5 == 9) || (iVar5 == 0xf)) {
        iVar6 = (param_1 + 0xed) * 0x10;
        iVar3 = DAT_0001a0cc + iVar6;
        iVar4 = *(int *)(DAT_0001a0cc + iVar6);
        iVar5 = iVar4;
        if (0 < iVar4) {
          iVar5 = iVar4 + -1;
        }
        if (0 < iVar4) {
          *(int *)(DAT_0001a0cc + iVar6) = iVar5;
          *(undefined4 *)(iVar3 + 4) = 0;
        }
      }
      disableIRQinterrupts();
      if ((*(char *)((uint)*(byte *)(iVar2 + param_1 + 0x1334) + iVar2 + 0x1324) != '\0') &&
         (0 < *(int *)(iVar2 + (param_1 + 0x4d0) * 4 + 4))) {
        iVar5 = 0;
        piVar8 = (int *)(param_1 * 800 + iVar2 + 0x4588);
        do {
          if (param_6 == piVar8[1] && param_5 == *piVar8) goto LAB_0001a096;
          if (piVar8[1] == 0 && *piVar8 == 0) {
            iVar5 = param_1 * 100 + iVar5;
            puVar7 = (undefined4 *)(iVar2 + (iVar5 + 0x271) * 8);
            piVar8 = (int *)(iVar2 + (iVar5 + 0x8b1) * 8);
            *puVar7 = param_3;
            puVar7[1] = param_4;
            *piVar8 = param_5;
            piVar8[1] = param_6;
            goto LAB_0001a096;
          }
          iVar5 = iVar5 + 1;
          piVar8 = piVar8 + 2;
        } while (iVar5 != 100);
        vlog(4,2,DAT_0001a0d0,DAT_0001a0c8,0x325,100);
LAB_0001a096:
        iVar2 = iVar2 + (param_1 + 0x4d0) * 4;
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
      }
    }
    uVar1 = 0;
  }
  else {
    vlog(4,2,DAT_0001a0c4,DAT_0001a0c8,0x306,param_1,0x10);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== venc_node_check @ 0001a0d4 size=80 ===== */

int venc_node_check(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_2 + 8) == 0x10) {
    if (*(int *)(param_2 + 4) < 0x10) {
      iVar1 = get_venc_node();
      return -(uint)(iVar1 == 0);
    }
    vlog(4,2,DAT_0001a12c,DAT_0001a128,0x4e3,*(int *)(param_2 + 4),0x10,param_4);
  }
  else {
    vlog(4,2,DAT_0001a124,DAT_0001a128,0x4df,param_2,param_3,param_4);
  }
  return -1;
}



/* ===== venc_get_version @ 0001a130 size=144 ===== */

undefined4 venc_get_version(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x80) + 0xa0);
  if (*(int *)(param_2 + 0x20) == 0x4c) {
    param_2[1] = 0;
    *param_2 = 1;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
    sVar2 = strlen((char *)*puVar3);
    if (sVar2 < 0x11) {
      *(size_t *)(param_2 + 0xc) = sVar2;
    }
    else {
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0xc] = 0x10;
    }
    strncpy(param_2 + 0x10,(char *)*puVar3,*(size_t *)(param_2 + 0xc));
    uVar1 = 0;
  }
  else {
    vlog(4,2,DAT_0001a1c0,DAT_0001a1c4,0x4ca,param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== venc_node_set_crop @ 0001a1c8 size=100 ===== */

undefined4 venc_node_set_crop(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar3;
  int *piVar4;
  int *piVar2;
  
  if (param_2[3] == 0x18) {
    iVar3 = *param_2;
    if (iVar3 < 0x10) {
      piVar1 = param_2;
      piVar4 = (int *)(iVar3 * 0x18 + *(int *)(param_1 + 0x80) + 0xd44);
      do {
        piVar2 = piVar1 + 1;
        *piVar4 = *piVar1;
        piVar1 = piVar2;
        piVar4 = piVar4 + 1;
      } while (piVar2 != param_2 + 6);
      return 0;
    }
    vlog(4,2,DAT_0001a234,DAT_0001a230,0x58c,iVar3,0x10,param_4);
  }
  else {
    vlog(4,2,DAT_0001a22c,DAT_0001a230,0x587,param_2,param_3,param_4);
  }
  return 0xffffffff;
}



/* ===== venc_node_get_crop @ 0001a238 size=100 ===== */

undefined4 venc_node_get_crop(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2[3] == 0x18) {
    iVar1 = *param_2;
    if (iVar1 < 0x10) {
      iVar1 = iVar1 * 0x18 + *(int *)(param_1 + 0x80);
      piVar2 = (int *)(iVar1 + 0xd44);
      do {
        piVar3 = piVar2 + 1;
        *param_2 = *piVar2;
        param_2 = param_2 + 1;
        piVar2 = piVar3;
      } while (piVar3 != (int *)(iVar1 + 0xd5c));
      return 0;
    }
    vlog(4,2,DAT_0001a2a4,DAT_0001a2a0,0x59f,iVar1,0x10,param_4);
  }
  else {
    vlog(4,2,DAT_0001a29c,DAT_0001a2a0,0x59a,param_2,param_3,param_4);
  }
  return 0xffffffff;
}



/* ===== venc_node_pp_set_md_attr @ 0001a2a8 size=98 ===== */

undefined4 venc_node_pp_set_md_attr(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar3;
  int *piVar2;
  
  if (param_2[1] == 0x10) {
    if (*param_2 < 1) {
      piVar1 = param_2;
      piVar3 = (int *)(*(int *)(param_1 + 0x80) + 0x7b84);
      do {
        piVar2 = piVar1 + 1;
        *piVar3 = *piVar1;
        piVar1 = piVar2;
        piVar3 = piVar3 + 1;
      } while (piVar2 != param_2 + 4);
      return 0;
    }
    vlog(4,2,DAT_0001a314,DAT_0001a310,0x6c5,*param_2,1,param_4);
  }
  else {
    vlog(4,2,DAT_0001a30c,DAT_0001a310,0x6c0,param_2,param_3,param_4);
  }
  return 0xffffffff;
}



/* ===== venc_node_pp_create @ 0001a318 size=430 ===== */

undefined4 venc_node_pp_create(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  size_t *psVar10;
  undefined4 uVar11;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = DAT_0001a4d8;
  piVar9 = DAT_0001a4d4;
  if (param_2[2] != 0x3c) {
    uVar11 = 0x5fb;
    uVar4 = DAT_0001a4c8;
    goto LAB_0001a330;
  }
  if (0 < (int)param_2[1]) {
    vlog(4,2,DAT_0001a4d0,DAT_0001a4cc,0x5ff,param_2[1],1);
    return 0xffffffff;
  }
  iVar7 = 5;
  psVar10 = (size_t *)(DAT_0001a4d4 + -0x1a);
  *(int *)(DAT_0001a4d8 + 0x1014) = (((int)(param_2[4] << 2) >> 3) + 0xf >> 4) << 8;
  do {
    iVar2 = mpi_buf_alloc(*psVar10);
    *piVar9 = iVar2;
    if (iVar2 == 0) {
      uVar11 = 0x607;
      uVar4 = DAT_0001a4dc;
      goto LAB_0001a330;
    }
    iVar2 = mpi_buf_map();
    if (iVar2 == 0) {
      uVar11 = 0x60b;
      uVar4 = DAT_0001a4dc;
      goto LAB_0001a330;
    }
    memset(*(void **)(*piVar9 + 0xdc),0,*psVar10);
    iVar7 = iVar7 + -1;
    piVar9 = piVar9 + 1;
  } while (iVar7 != 0);
  if (param_2[5] == 0) {
LAB_0001a400:
    local_54 = param_2[3];
    local_50 = param_2[4];
    local_44 = param_2[7];
    local_40 = param_2[8];
    local_4c = param_2[5];
    local_48 = param_2[6];
    local_3c = 0;
    iVar7 = vepu_pp_create_chn(param_2[1],&local_54);
    if (iVar7 == 0) {
      iVar7 = mpi_dev_create_node_with_params(DAT_0001a4e0,param_2[1],1,0);
      puVar8 = DAT_0001a4e8;
      if (iVar7 != 0) {
        *DAT_0001a4e8 = local_54;
        puVar8[1] = local_50;
        puVar8[2] = local_4c;
        puVar8[3] = local_48;
        puVar8[4] = local_44;
        puVar8[5] = local_40;
        puVar8[6] = local_3c;
        puVar8[7] = uStack_38;
        puVar8[8] = local_34;
        puVar8[9] = uStack_30;
        puVar8[10] = uStack_2c;
        puVar8[0xb] = uStack_28;
        puVar8[0xc] = local_24;
        puVar8[0xd] = uStack_20;
        puVar8[0xe] = uStack_1c;
        puVar8 = puVar8 + 0x1c;
        puVar5 = param_2;
        do {
          puVar6 = puVar5 + 2;
          uVar4 = puVar5[1];
          *puVar8 = *puVar5;
          puVar8[1] = uVar4;
          puVar8 = puVar8 + 2;
          puVar5 = puVar6;
        } while (puVar6 != param_2 + 0xe);
        *puVar8 = *puVar6;
        vsys_add_node_to_map(0x14,*param_2,param_2[1],iVar7);
        *(undefined4 *)(iVar1 + 0xb4) = 0;
        uVar3 = kthread_create_on_node(DAT_0001a4f0,DAT_0001a4d8,0xffffffff,DAT_0001a4ec);
        if (uVar3 < 0xfffff001) {
          wake_up_process();
        }
        uVar11 = DAT_0001a4f4;
        uVar4 = DAT_0001a4cc;
        *(uint *)(iVar1 + 0xa8) = uVar3;
        vlog(4,4,uVar11,uVar4,0x637,uVar3);
        return 0;
      }
      uVar11 = 0x62c;
      uVar4 = DAT_0001a4e4;
    }
    else {
      uVar11 = 0x626;
      uVar4 = DAT_0001a4dc;
    }
  }
  else {
    iVar2 = ((((int)(param_2[3] << 2) >> 3) + 3 >> 2) + 7 >> 3) *
            (((int)(param_2[4] << 2) >> 3) + 0xf >> 4) * 0x40;
    iVar7 = mpi_buf_alloc(iVar2);
    *(int *)(iVar1 + 0x129c) = iVar7;
    if (iVar7 != 0) {
      iVar7 = mpi_buf_alloc(iVar2);
      *(int *)(iVar1 + 0x12a4) = iVar7;
      if (iVar7 != 0) goto LAB_0001a400;
    }
    uVar11 = 0x617;
    uVar4 = DAT_0001a4dc;
  }
LAB_0001a330:
  vlog(4,2,uVar4,DAT_0001a4cc,uVar11);
  return 0xffffffff;
}



/* ===== venc_node_pp_get_result @ 0001a4f8 size=196 ===== */

undefined4 venc_node_pp_get_result(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x80);
  if (param_2[1] == 0x20) {
    if (*param_2 < 1) {
      disableIRQinterrupts();
      if ((*(int *)(iVar4 + 0xfdc) != 0) && (param_2[2] != 0)) {
        iVar5 = iVar4 + *(int *)(iVar4 + 0x1008) * 4;
        param_2[5] = *(int *)(iVar4 + 0x1010);
        iVar2 = dma_buf_fd(*(undefined4 *)(*(int *)(iVar5 + 0x1078) + 0x40),0);
        param_2[4] = iVar2;
        piVar3 = (int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x1078) + 0x40) + 4) + 0x1c);
        HintPreloadData(piVar3);
        do {
          ExclusiveAccess(piVar3);
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = *piVar3 + 1;
      }
      if ((*(int *)(iVar4 + 0xfe0) != 0) && (param_2[3] != 0)) {
        param_2[6] = *(int *)(iVar4 + 0x1014);
        param_2[7] = *(int *)(iVar4 + 0x1018);
      }
      *(undefined4 *)(iVar4 + 0x100c) = 0;
      return 0;
    }
    vlog(4,2,DAT_0001a5c4,DAT_0001a5c0,0x6a5,*param_2,1);
  }
  else {
    vlog(4,2,DAT_0001a5bc,DAT_0001a5c0,0x6a0);
  }
  return 0xffffffff;
}



/* ===== vcodec_create_dev @ 0001a5c8 size=46 ===== */

int vcodec_create_dev(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_0001a5f8 + 8),0xdc0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x44) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[2];
    *(undefined4 *)(iVar1 + 0x4c) = param_2[1];
    mpi_dev_register(iVar1,8,param_1);
  }
  return iVar1;
}



/* ===== venc_create_ctx @ 0001a5fc size=46 ===== */

int * venc_create_ctx(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_0001a62c + 0xc),0xdc0,param_3,DAT_0001a62c,
                                   param_4);
  if (piVar1 != (int *)0x0) {
    iVar2 = mpi_queue_create(1,4,DAT_0001a630);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      kfree(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}



/* ===== to_osd_stride @ 0001a634 size=64 ===== */

int to_osd_stride(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (0x10 < param_1 - 0x1000aU) {
    return -1;
  }
  uVar1 = 1 << (param_1 - 0x1000aU & 0xff);
  if ((uVar1 & 0x3c0f) == 0) {
    if ((uVar1 & 0x3c0) == 0) {
      if (-1 < (int)(uVar1 << 0xf)) {
        return -1;
      }
      iVar2 = 2;
      iVar3 = 1;
    }
    else {
      iVar3 = 4;
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
    iVar3 = 2;
  }
  return iVar3 * param_2 >> iVar2;
}



/* ===== set_2bpp_color_lut @ 0001a674 size=168 ===== */

void set_2bpp_color_lut(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = (uVar1 & 0xffffff) >> 0x10;
  uVar4 = (uVar1 & 0xffff) >> 8;
  uVar1 = uVar1 & 0xff;
  uVar6 = (uVar2 & 0xffffff) >> 0x10;
  uVar3 = (uVar2 & 0xffff) >> 8;
  uVar2 = uVar2 & 0xff;
  *param_1 = (char)(uVar4 * -0x55 + uVar1 * -0x2b + 0x8000 + uVar5 * 0x80 >> 8);
  param_1[3] = (char)(uVar3 * -0x55 + uVar2 * -0x2b + 0x8000 + uVar6 * 0x80 >> 8);
  param_1[1] = (char)(uVar5 * -0x15 + uVar4 * -0x6b + uVar1 * 0x80 + 0x8000 >> 8);
  param_1[2] = (char)(uVar1 * 0x4d + uVar4 * 0x96 + uVar5 * 0x1d >> 8);
  param_1[4] = (char)(uVar6 * -0x15 + uVar3 * -0x6b + uVar2 * 0x80 + 0x8000 >> 8);
  param_1[5] = (char)(uVar2 * 0x4d + uVar3 * 0x96 + uVar6 * 0x1d >> 8);
  return;
}



/* ===== set_invert_buffer @ 0001a71c size=34 ===== */

int set_invert_buffer(int param_1,int param_2,int param_3)

{
  void *__s;
  
  if (param_1 != 0) {
    __s = (void *)dma_buf_vmap(*(undefined4 *)(param_1 + 0x40));
    *(void **)(param_1 + 0xdc) = __s;
    memset(__s,0xff,param_2 * param_3);
  }
  return param_1;
}



/* ===== to_osd_invert_cfg @ 0001a73e size=168 ===== */

void to_osd_invert_cfg(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_2 + 8);
  iVar6 = *(int *)(param_2 + 0x44);
  iVar1 = __aeabi_uidiv(*(undefined4 *)(iVar5 + 0x28),iVar6,param_3,param_4,param_4);
  uVar4 = iVar1 + 7U >> 3;
  uVar2 = __aeabi_uidiv(-*(int *)(param_2 + 0x48) &
                        *(int *)(param_2 + 0x48) + -1 + *(int *)(iVar5 + 0x2c));
  if (iVar6 == 0x20) {
    iVar1 = param_3 * 0x8c + param_1;
    uVar3 = 1;
  }
  else if (iVar6 == 0x40) {
    iVar1 = param_3 * 0x8c + param_1;
    uVar3 = 3;
  }
  else {
    if (iVar6 != 0x10) {
      printk(DAT_0001a7e8);
      goto LAB_0001a790;
    }
    iVar1 = param_3 * 0x8c + param_1;
    uVar3 = 0;
  }
  *(undefined4 *)(iVar1 + 0x4c) = uVar3;
LAB_0001a790:
  param_1 = param_3 * 0x8c + param_1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x50) = uVar4;
  if (*(int *)(param_2 + 0x50) == 0) {
    if (*(uint *)(param_2 + 0x4c) < 0x51) {
      return;
    }
  }
  else {
    if (*(int *)(param_2 + 0x50) != 1) {
      return;
    }
    if (0x4f < *(uint *)(param_2 + 0x4c)) {
      return;
    }
  }
  uVar2 = set_invert_buffer(*(undefined4 *)(param_2 + 0xc),uVar2,uVar4);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}



/* ===== set_osd_data @ 0001a7ec size=482 ===== */

void set_osd_data(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r2;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  
  uVar1 = DAT_0001a9ec;
  if (*(int *)(param_2 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    disableIRQinterrupts();
    iVar9 = 0;
    iVar11 = param_1;
    iVar12 = param_2;
    for (piVar8 = *(int **)(param_2 + 0x54); piVar8 != (int *)(param_2 + 0x54);
        piVar8 = (int *)*piVar8) {
      iVar5 = iVar9;
      if (*(int *)(piVar8[2] + 0x438) != 0) {
        iVar6 = iVar9 * 0x8c + param_1;
        *(uint *)(iVar6 + 8) = (uint)(piVar8[4] != 0);
        *(int *)(iVar6 + 0x1c) = piVar8[6];
        *(int *)(iVar6 + 0x20) = piVar8[7];
        *(int *)(iVar6 + 0x24) = *(int *)(piVar8[2] + 0x28) + piVar8[6] + -1;
        *(int *)(iVar6 + 0x28) = *(int *)(piVar8[2] + 0x2c) + piVar8[7] + -1;
        iVar5 = piVar8[2];
        iVar2 = *(int *)(iVar5 + 0x438);
        *(int *)(iVar6 + 0x88) = iVar2;
        if (iVar2 != 0) {
          mpi_obj_ref();
          iVar5 = extraout_r2;
        }
        iVar2 = piVar8[2];
        uVar3 = to_osd_stride(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28),iVar5,
                              iVar2,iVar11,iVar12,param_3);
        uVar4 = 1;
        iVar5 = iVar9 + 1;
        *(undefined4 *)(iVar9 * 0x8c + param_1 + 0x2c) = uVar3;
        uVar7 = *(int *)(piVar8[2] + 0x24) - 0x1000a;
        if (uVar7 < 0x11) {
          iVar2 = DAT_0001a9d0 + uVar7 * 4;
        }
        else {
          iVar2 = -1;
        }
        iVar6 = iVar9 * 0x8c + param_1;
        if (uVar7 < 0x11) {
          iVar2 = *(int *)(iVar2 + 0x24c);
        }
        *(int *)(iVar6 + 0x14) = iVar2;
        *(undefined4 *)(iVar6 + 0xc) = 0;
        *(undefined4 *)(iVar6 + 0x10) = 1;
        iVar2 = param_1 + iVar5 * 0x8c;
        uVar3 = piVar8[8];
        uVar10 = piVar8[9];
        *(undefined1 *)(param_1 + iVar5 * 0x8c) = 0;
        *(undefined1 *)(iVar2 + 1) = 0;
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined1 *)(iVar2 + 3) = 0;
        *(undefined1 *)(iVar2 + 4) = 0;
        *(undefined1 *)(iVar2 + 5) = 0;
        *(char *)(iVar2 + 6) = (char)uVar10;
        *(char *)(iVar2 + 7) = (char)uVar3;
        uVar7 = *(int *)(piVar8[2] + 0x24) - 0x1000a;
        if (uVar7 < 0x11) {
          uVar7 = 1 << (uVar7 & 0xff);
          if ((uVar7 & 0x2645) == 0) {
            if ((uVar7 & DAT_0001a9d4) == 0) goto LAB_0001a8ec;
            uVar4 = 0;
          }
        }
        else {
LAB_0001a8ec:
          printk(DAT_0001a9d8);
          uVar4 = 0xffffffff;
        }
        *(undefined4 *)(iVar9 * 0x8c + param_1 + 0x18) = uVar4;
        uVar7 = *(int *)(piVar8[2] + 0x24) - 0x1000a;
        if (uVar7 < 0x11) {
          uVar4 = 1;
          uVar7 = 1 << (uVar7 & 0xff);
          if ((uVar7 & 0xcf) == 0) {
            if ((uVar7 & DAT_0001a9dc) == 0) goto LAB_0001a91e;
            uVar4 = 0;
          }
        }
        else {
LAB_0001a91e:
          printk(DAT_0001a9e0);
          uVar4 = 0xffffffff;
        }
        *(undefined4 *)(iVar9 * 0x8c + param_1 + 0x5c) = uVar4;
        uVar7 = *(int *)(piVar8[2] + 0x24) - 0x1000a;
        if (uVar7 < 0x11) {
          uVar4 = 1;
          uVar7 = 1 << (uVar7 & 0xff);
          if ((uVar7 & 0x33cc) != 0) goto LAB_0001a964;
          if ((uVar7 & uVar1) == 0) goto LAB_0001a952;
        }
        else {
LAB_0001a952:
          iVar11 = 0x177;
          vlog(4,2,DAT_0001a9e4,DAT_0001a9e8);
LAB_0001a964:
          uVar4 = 0;
        }
        iVar6 = iVar9 * 0x8c + param_1;
        *(undefined4 *)(iVar6 + 0x68) = uVar4;
        *(int *)(iVar6 + 0x60) = piVar8[9];
        *(int *)(iVar6 + 100) = piVar8[8];
        if (*(int *)(iVar6 + 0x14) == 0x11) {
          set_2bpp_color_lut(iVar2,piVar8 + 0xf);
        }
        if (piVar8[0x15] != 0) {
          if (piVar8[3] != 0) {
            mpi_obj_ref();
          }
          to_osd_invert_cfg(param_1,piVar8,iVar9);
        }
        if (piVar8[0xb] != 0) {
          iVar9 = iVar9 * 0x8c + param_1;
          *(undefined4 *)(iVar9 + 0x6c) = 1;
          *(undefined4 *)(iVar9 + 0x78) = 0x33;
          *(undefined4 *)(iVar9 + 0x7c) = 0;
          *(int *)(iVar9 + 0x74) = piVar8[0xe];
          *(uint *)(iVar9 + 0x70) = (uint)(piVar8[0xc] != 0);
        }
      }
      iVar9 = iVar5;
    }
    *(int *)(param_1 + 4) = iVar9;
  }
  return;
}



/* ===== to_frame_pixel_stride @ 0001a9f0 size=76 ===== */

void to_frame_pixel_stride(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 < 0x10002) {
    if ((param_1 < 0x10000) && (param_1 != 8)) {
      if (param_1 == 10) {
        uVar1 = 2;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else if (param_1 < DAT_0001aa3c) {
    uVar1 = 1;
    param_3 = DAT_0001aa3c;
  }
  else {
    param_3 = DAT_0001aa3c + 1;
    if (param_3 < param_1) {
      param_1 = param_1 - 0x1000a;
      if (param_1 < 4) {
        uVar1 = 4;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 3;
    }
  }
  __aeabi_idiv(param_2,uVar1,param_3,param_1,param_4);
  return;
}



/* ===== dma_buf_import_mpi_buf @ 0001aa40 size=160 ===== */

int dma_buf_import_mpi_buf(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = mpi_buf_create(param_1,0,param_3,param_4,param_4);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = DAT_0001aae0;
    *(undefined4 *)(iVar2 + 0xec) = *param_2;
    *(undefined4 *)(iVar2 + 0xf0) = param_2[1];
    uVar3 = to_frame_pixel_stride(param_2[7],param_2[2]);
    iVar1 = DAT_0001aae4;
    *(undefined4 *)(iVar2 + 0xf4) = uVar3;
    *(undefined4 *)(iVar2 + 0xf8) = param_2[3];
    iVar4 = 0;
    do {
      if (param_2[7] == *(int *)(iVar4 * 8 + iVar1 + 0x2a8)) {
        uVar3 = *(undefined4 *)(iVar1 + iVar4 * 8 + 0x2a4);
        goto LAB_0001aa92;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x1f);
    uVar3 = 0xffffffff;
LAB_0001aa92:
    *(undefined4 *)(iVar2 + 0x100) = uVar3;
    uVar3 = param_2[0xb];
    *(undefined4 *)(iVar2 + 0x120) = param_2[10];
    *(undefined4 *)(iVar2 + 0x124) = uVar3;
    *(undefined4 *)(iVar2 + 200) = 4;
    iVar1 = DAT_0001aae8;
    if ((-1 < param_3) && ((uint)param_2[0xc] < 0x10)) {
      *(undefined4 *)(DAT_0001aae8 + param_2[0xc] * 0x10 + 0xec8) = 1;
      *(int *)(iVar1 + param_2[0xc] * 0x10 + 0xecc) = param_3;
      *(undefined4 *)(iVar1 + param_2[0xc] * 0x10 + 0xed0) = 1;
    }
  }
  return iVar2;
}



/* ===== to_frame_hor_stride @ 0001aaec size=66 ===== */

int to_frame_hor_stride(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x10002) {
    if (param_1 < 0x10000) {
      if (param_1 - 9 < 2) {
        iVar1 = 2;
      }
      else {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 2;
    }
  }
  else if (param_1 < DAT_0001ab30) {
    iVar1 = 1;
  }
  else if (DAT_0001ab30 + 1 < param_1) {
    if (param_1 - 0x10010 < 4) {
      iVar1 = 4;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 3;
  }
  return param_2 * iVar1;
}



/* ===== get_mpi_buf_frm_info @ 0001ab34 size=930 ===== */

undefined4 get_mpi_buf_frm_info(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_0001ae50;
  iVar6 = 0;
  iVar4 = DAT_0001ae50;
  do {
    if ((*(int *)(iVar4 + 0xec8) != 0) && (param_3 == *(uint *)(iVar4 + 0xecc))) {
      iVar4 = *(int *)(DAT_0001ae50 + iVar6 * 0x10 + 0xed0);
      if ((iVar4 != -1) && (iVar4 < 1)) {
        iVar6 = -1;
      }
      goto LAB_0001ab6c;
    }
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 0x10;
  } while (iVar6 != 0x10);
  iVar6 = -1;
LAB_0001ab6c:
  if (param_3 < 0x10) {
    iVar4 = 0;
    iVar5 = param_3 * 0xc0 + DAT_0001ae50;
    iVar3 = iVar5;
    do {
      if (*(undefined4 **)(iVar3 + 0x148) == param_1) goto LAB_0001abae;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 != 0x10);
    iVar4 = 0;
LAB_0001ab94:
    if (*(int *)(iVar5 + 0x148) != 0) goto LAB_0001ac20;
    *(undefined4 **)(iVar4 * 0xc + param_3 * 0xc0 + DAT_0001ae50 + 0x148) = param_1;
LAB_0001abae:
    iVar3 = iVar4 * 0xc + param_3 * 0xc0 + iVar1;
    if (*(int *)(iVar3 + 0x14c) == 0) {
      uVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_0001ae54 + 0x2c),0xdc0);
      *(undefined4 *)(iVar3 + 0x14c) = uVar2;
    }
    if ((iVar6 != -1) &&
       (iVar3 = iVar4 * 0xc + param_3 * 0xc0 + iVar1, *(int *)(iVar3 + 0x150) == 0)) {
      uVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_0001ae54 + 0x2c),0xdc0);
      *(undefined4 *)(iVar3 + 0x150) = uVar2;
    }
    goto LAB_0001ac04;
  }
  iVar4 = 0x10;
LAB_0001ac04:
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  *param_2 = param_1[0x3b];
  param_2[1] = param_1[0x3c];
  uVar2 = to_frame_hor_stride(param_1[0x40],param_1[0x3d]);
  param_2[2] = uVar2;
  param_2[3] = param_1[0x3e];
  if (-1 < (int)param_3) {
    uVar2 = param_1[0x49];
    param_2[10] = param_1[0x48];
    param_2[0xb] = uVar2;
    param_2[0x14] = param_1[0x47];
    param_2[0x15] = 0;
    if (*(int *)(iVar1 + param_3 * 4 + 0xd4) != 0) {
      iVar3 = mcu_get_wrap_status();
      if (iVar3 != 2) {
        return 0xffffffff;
      }
      if (*(int *)(iVar1 + 0x144) != 0) {
        iVar3 = get_venc_node(param_3);
        iVar3 = mpi_queue_push_obj(**(undefined4 **)(iVar3 + 0x108),*(undefined4 *)(iVar1 + 0x144));
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar1 + 0x144);
          vlog(4,2,DAT_0001aef8,DAT_0001aefc,0x46c,*(undefined4 *)(iVar3 + 0x11c),
               *(undefined4 *)(iVar3 + 0x120),*(undefined4 *)(iVar3 + 0x124));
        }
        else {
          *(undefined4 *)(iVar1 + 0x144) = 0;
        }
      }
    }
  }
  param_2[5] = 0;
  param_2[6] = 0;
  if (param_3 < 0x10) {
    iVar3 = param_3 * 0x18 + iVar1;
    if (*(uint *)(iVar3 + 0xd48) == param_3) {
      param_2[5] = *(undefined4 *)(iVar3 + 0xd4c);
      param_2[6] = *(undefined4 *)(iVar3 + 0xd50);
    }
  }
  param_2[0xc] = iVar6;
  param_2[0xd] = 0;
  param_2[0xf] = 0;
  if (iVar4 != 0x10) {
    iVar5 = *(int *)(iVar4 * 0xc + param_3 * 0xc0 + iVar1 + 0x14c);
    iVar3 = get_venc_node(param_3);
    if (((iVar3 == 0) || (iVar5 == 0)) || (set_osd_data(iVar5,iVar3), *(int *)(iVar5 + 4) == 0)) {
      param_2[0xd] = 0;
    }
    else {
      param_2[0xd] = iVar5;
    }
    if (iVar6 != -1) {
      iVar4 = *(int *)(iVar4 * 0xc + param_3 * 0xc0 + iVar1 + 0x150);
      iVar6 = get_venc_node(iVar6);
      if (((iVar6 == 0) || (iVar4 == 0)) || (set_osd_data(iVar4,iVar6), *(int *)(iVar4 + 4) == 0)) {
        param_2[0xf] = 0;
      }
      else {
        param_2[0xf] = iVar4;
      }
    }
  }
  iVar6 = DAT_0001ae60;
  param_2[0xe] = *param_1;
  iVar4 = 0;
  do {
    if (param_1[0x40] == *(int *)(iVar6 + 0x2a4 + iVar4 * 8)) {
      uVar2 = *(undefined4 *)(iVar6 + iVar4 * 8 + 0x2a8);
      goto LAB_0001ad64;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x1f);
  uVar2 = 0xffffffff;
LAB_0001ad64:
  param_2[7] = uVar2;
  if (*(int *)(iVar1 + param_3 * 4 + 0xd4) == 0) {
    if ((param_1[0x32] & 4) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  param_2[0x10] = uVar2;
  param_2[0x16] = 0;
  if (param_3 != 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0xfdc) != 0 || *(int *)(iVar1 + 0xfd8) != 0) {
    usleep_range(0x1194,0x157c);
  }
  memset(DAT_0001ae64,0,0x70);
  if (*(int *)(iVar1 + 0xfd8) != 0) {
    disableIRQinterrupts();
    if (param_1[0x47] == *DAT_0001ae68) {
      iVar6 = 0;
    }
    else {
      if (*(int *)(iVar1 + 0x12a8) != param_1[0x47]) goto LAB_0001ae02;
      iVar6 = 1;
    }
    *(undefined4 *)(iVar1 + iVar6 * 0x38 + 0x12ac) =
         *(undefined4 *)(*(int *)(iVar1 + (iVar6 + 0x253) * 8 + 4) + 0x40);
    param_2[0x16] = iVar6 * 0x38 + 0x12ac + iVar1;
    *(int *)(iVar1 + 0x131c) = iVar6;
  }
LAB_0001ae02:
  if (*(int *)(iVar1 + 0xfdc) != 0) {
    disableIRQinterrupts();
    iVar6 = 0;
    do {
      if (param_1[0x47] == *(int *)(iVar6 * 0x34 + DAT_0001ae6c)) {
        iVar4 = *(int *)(DAT_0001ae6c + 0x25c) * 0x38;
        *(undefined4 *)(iVar1 + iVar4 + 0x12b4) = *(undefined4 *)(iVar6 * 0x34 + iVar1 + 0x1090);
        param_2[0x16] = iVar1 + iVar4 + 0x12ac;
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 10);
  }
  return 0;
LAB_0001ac20:
  iVar4 = iVar4 + 1;
  iVar5 = iVar5 + 0xc;
  if (iVar4 == 0x10) goto code_r0x0001ac2c;
  goto LAB_0001ab94;
code_r0x0001ac2c:
  vlog(4,2,DAT_0001ae5c,DAT_0001ae58,0x450,param_1);
  goto LAB_0001ac04;
}



/* ===== venc_probe @ 0001af00 size=136 ===== */

void venc_probe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_0001af8c;
  puVar1 = DAT_0001af88;
  puVar4 = DAT_0001af88 + 1;
  memset(DAT_0001af88,0,0x7b98);
  memset(DAT_0001af90,-1,0x10);
  __init_waitqueue_head(puVar1 + 0x3f2,DAT_0001af98,DAT_0001af94);
  uVar3 = kstrdup(param_1,0xcc0);
  puVar1[0x29] = puVar1;
  puVar1[0x2f] = iVar2 + 0x3b4;
  puVar1[0x30] = 0x16;
  *puVar1 = uVar3;
  mpi_dev_register(puVar4,8,param_1,0x16,param_4);
  puVar1[0x12] = DAT_0001af9c;
  puVar1[0x14] = DAT_0001afa0;
  puVar1[0x15] = DAT_0001afa4;
  mpi_sysfs_dev_add(puVar4,iVar2 + 0x56c);
  puVar1[0x2b] = puVar1 + 0x2b;
  puVar1[0x2c] = puVar1 + 0x2b;
  puVar1[0x31] = 0;
  puVar1[0x32] = puVar1 + 0x32;
  puVar1[0x33] = puVar1 + 0x32;
  return;
}



/* ===== venc_shutdown @ 0001afa8 size=28 ===== */

void venc_shutdown(void)

{
  int iVar1;
  
  iVar1 = DAT_0001afc4;
  mpi_sysfs_dev_remove(DAT_0001afc4);
  mpi_dev_unregister(iVar1);
  kfree(*(undefined4 *)(iVar1 + -4));
  return;
}



/* ===== rockit_rkisp_ioctl @ 0001afc8 size=4 ===== */

undefined4 rockit_rkisp_ioctl(void)

{
  return 0;
}



/* ===== rockit_rkisp_open @ 0001afcc size=4 ===== */

undefined4 rockit_rkisp_open(void)

{
  return 0;
}



/* ===== rockit_rkisp_buf_que @ 0001afd0 size=212 ===== */

undefined4 rockit_rkisp_buf_que(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  puVar1 = DAT_0001b0ac;
  uVar4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    pcVar6 = (char *)param_1[0x42];
    if (pcVar6 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if (*pcVar6 != '\0') {
        disableIRQinterrupts();
        iVar7 = 0;
        do {
          piVar2 = (int *)mpi_node_request_buf(param_1,0);
          if (piVar2 == (int *)0x0) break;
          vlog(0,5,DAT_0001b0a4,DAT_0001b0a8,0xda,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,
               *piVar2);
          iVar5 = 0;
          while (*(int **)(pcVar6 + iVar5 * 8 + 4) != (int *)0x0) {
            if ((**(int **)(pcVar6 + iVar5 * 8 + 4) == *piVar2) || (iVar5 = iVar5 + 1, iVar5 == 5))
            goto LAB_0001b036;
          }
          *(int **)(pcVar6 + iVar5 * 8 + 4) = piVar2;
LAB_0001b036:
          pcVar6[iVar5 * 8 + 8] = '\x01';
          uVar4 = param_1[0xe];
          *(undefined4 **)(pcVar6 + 0x50) = param_1;
          *(int **)(pcVar6 + 0x54) = piVar2;
          pcVar6[0x30] = '\x01';
          *(undefined4 *)(pcVar6 + 0x48) = uVar4;
          *(int *)(pcVar6 + 0x40) = *piVar2;
          *(int *)(pcVar6 + 100) = piVar2[0x10];
          *(undefined4 *)(pcVar6 + 0x34) = *(undefined4 *)(param_1[0xb] + 0x2c);
          if (((code *)*puVar1 != (code *)0x0) &&
             (iVar3 = (*(code *)*puVar1)(pcVar6 + 0x30), iVar3 < 0)) {
            pcVar6[iVar5 * 8 + 8] = '\0';
            pcVar6[1] = '\0';
            mpi_obj_unref(piVar2);
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != param_2);
        uVar4 = 0;
        if (piVar2 != (int *)0x0) {
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}



/* ===== isp_destroy_ctx @ 0001b0b0 size=10 ===== */

undefined4 isp_destroy_ctx(void)

{
  kfree();
  return 0;
}



/* ===== rockit_rkisp_handle_message @ 0001b0ba size=134 ===== */

undefined4 rockit_rkisp_handle_message(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 8) == 1) {
    if (param_1 == 0) {
      uVar4 = 0x108;
      uVar1 = DAT_0001b140;
    }
    else {
      pcVar2 = *(char **)(param_1 + 0x108);
      if (pcVar2 != (char *)0x0) {
        if (param_2 == 5) {
          *pcVar2 = '\x01';
          rockit_rkisp_buf_que();
          uVar1 = DAT_0001b14c;
        }
        else {
          if (param_2 != 6) {
            if (param_2 != 0) {
              return 0;
            }
            if (*pcVar2 == '\0') {
              return 0;
            }
            if (pcVar2[1] == '\0') {
              return 0;
            }
            rockit_rkisp_buf_que(param_1,1,pcVar2[1],1,param_1,0);
            return 0;
          }
          pcVar3 = pcVar2 + 0x28;
          *pcVar2 = '\0';
          do {
            if ((*(int *)(pcVar2 + 4) != 0) && (pcVar2[8] != '\0')) {
              mpi_obj_unref();
              pcVar2[4] = '\0';
              pcVar2[5] = '\0';
              pcVar2[6] = '\0';
              pcVar2[7] = '\0';
            }
            pcVar2 = pcVar2 + 8;
            uVar1 = DAT_0001b150;
          } while (pcVar2 != pcVar3);
        }
        printk(uVar1);
        return 0;
      }
      uVar4 = 0x111;
      uVar1 = DAT_0001b148;
    }
    vlog(0,2,uVar1,DAT_0001b144,uVar4);
  }
  return 0;
}



/* ===== rockit_rkisp_compat_ioctl @ 0001b154 size=4 ===== */

undefined4 rockit_rkisp_compat_ioctl(void)

{
  return 0;
}



/* ===== rockit_rkisp_mpibuf_done @ 0001b158 size=398 ===== */

undefined4
rockit_rkisp_mpibuf_done(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (param_1 == 0) {
    local_30 = 99;
    uVar2 = DAT_0001b2e8;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x20);
    if (iVar6 != 0) {
      iVar8 = *(int *)(iVar6 + 0x108);
      local_30 = param_1;
      if (*(char *)(param_1 + 2) != '\0') {
        iVar6 = rockit_rkisp_buf_que(iVar6,1);
        if (iVar6 != 0) {
          *(undefined1 *)(iVar8 + 1) = *(undefined1 *)(param_1 + 2);
        }
        *(undefined1 *)(param_1 + 2) = 0;
        return 0;
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        piVar1 = *(int **)(param_1 + 0x24);
      }
      else {
        piVar1 = (int *)mpi_node_request_buf(iVar6);
      }
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iVar7 = 0;
      piVar1[0x3c] = *(int *)(param_1 + 0x40);
      piVar1[0x3b] = *(int *)(param_1 + 0x3c);
      iVar5 = DAT_0001b2f8;
      do {
        if (*(int *)(param_1 + 0x50) == *(int *)(DAT_0001b2f8 + iVar7 * 8)) goto LAB_0001b1fa;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0x18);
      local_30 = 0x87;
      vlog(0,2,DAT_0001b2fc,DAT_0001b2ec);
LAB_0001b1fa:
      piVar1[0x40] = *(int *)(iVar5 + iVar7 * 8 + 4);
      piVar1[0x3d] = *(int *)(param_1 + 0x44);
      piVar1[0x3e] = *(int *)(param_1 + 0x48);
      uVar9 = div_s64_rem(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),1000,
                          &uStack_24);
      *(undefined8 *)(piVar1 + 0x48) = uVar9;
      piVar1[0x47] = *(int *)(param_1 + 100);
      uVar4 = *(uint *)(param_1 + 0x1c);
      piVar1[0x32] = uVar4;
      if (*(char *)(param_1 + 3) == '\0') {
        uVar4 = uVar4 | 2;
      }
      else {
        uVar4 = uVar4 | 4;
      }
      piVar1[0x32] = uVar4;
      piVar1[0x4e] = 0;
      mpi_node_buffer_out(iVar6,piVar1);
      if (((*(uint *)(((uint)&local_30 & 0xffffe000) + 4) & 0xffff00) != 0) &&
         ((*(uint *)(((uint)&local_30 & 0xffffe000) + 4) & 0xf0000) == 0)) {
        iVar7 = 0xb;
        printk(DAT_0001b300);
        uVar2 = DAT_0001b308;
        iVar5 = DAT_0001b304;
        while (iVar7 = iVar7 + -1, iVar7 != 0) {
          (**(code **)(iVar5 + 4))(uVar2);
        }
      }
      if ((piVar1[0x10] == 0) || (iVar8 == 0)) {
        mpi_obj_unref(piVar1);
        return 0;
      }
      iVar5 = 0;
      while ((piVar3 = *(int **)(iVar8 + 4 + iVar5 * 8), piVar3 == (int *)0x0 ||
             (*piVar1 != *piVar3))) {
        iVar5 = iVar5 + 1;
        if (iVar5 == 5) {
LAB_0001b2bc:
          mpi_obj_unref(piVar1);
          if ((*(char *)(param_1 + 1) != '\0') &&
             (iVar6 = rockit_rkisp_buf_que(iVar6,1), iVar6 != 0)) {
            *(undefined1 *)(param_1 + 1) = 0;
            return 0;
          }
          *(undefined1 *)(iVar8 + 1) = *(undefined1 *)(param_1 + 1);
          return 0;
        }
      }
      *(undefined1 *)(iVar8 + iVar5 * 8 + 8) = 0;
      goto LAB_0001b2bc;
    }
    iVar6 = *(int *)(DAT_0001b2f0 + 4);
    *(int *)(DAT_0001b2f0 + 4) = iVar6 + 1;
    if (9 < iVar6) {
      return 0;
    }
    local_30 = 0x68;
    uVar2 = DAT_0001b2f4;
  }
  vlog(0,2,uVar2,DAT_0001b2ec);
  return 0;
}



/* ===== isp_create_ctx @ 0001b30c size=12 ===== */

void isp_create_ctx(void)

{
  kmem_cache_alloc(*(undefined4 *)(DAT_0001b318 + 0x30),0xdc0);
  return;
}



/* ===== rockit_rkisp_dev_register @ 0001b31c size=300 ===== */

void rockit_rkisp_dev_register(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *__s;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = DAT_0001b448;
  iVar8 = 0;
  iVar9 = 0;
  __s = (void *)kmem_cache_alloc(*(undefined4 *)(DAT_0001b448 + 8),0xcc0);
  memset(__s,0,0xa4);
  uVar2 = DAT_0001b44c;
  iVar7 = (int)__s + 0x3c;
  *(int *)((int)__s + 0x3c) = iVar7;
  *(int *)((int)__s + 0x40) = iVar7;
  *(undefined4 *)((int)__s + 0x44) = uVar2;
  *(undefined4 *)((int)__s + 0x4c) = DAT_0001b450;
  *(undefined4 *)((int)__s + 0x30) = 2;
  *(undefined4 *)((int)__s + 0x34) = 2;
  *(undefined4 *)((int)__s + 0x38) = 3;
  while( true ) {
    while( true ) {
      if (*(int *)((int)__s + 0x34) <= iVar9) break;
      piVar3 = (int *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xdc0);
      if (piVar3 != (int *)0x0) {
        piVar3[2] = 1;
        piVar3[3] = iVar8;
        piVar3[4] = iVar9;
        iVar5 = kmem_cache_alloc(*(undefined4 *)(iVar1 + 4),0xdc0);
        piVar3[5] = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 8) = 0xf00;
          *(undefined4 *)(iVar5 + 0xc) = 0x870;
          *(undefined4 *)(iVar5 + 0x24) = 4;
          *(undefined4 *)(iVar5 + 0x20) = 1;
          *(uint *)(iVar5 + 0x40) = *(uint *)(iVar5 + 0x40) | 3;
          *(undefined4 *)(iVar5 + 0x28) = 1;
          *(undefined4 *)(iVar5 + 0x2c) = 1;
          *(uint *)(iVar5 + 0x44) = *(uint *)(iVar5 + 0x44) | 3;
          *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) | 3;
          *(uint *)(iVar5 + 0x3c) = *(uint *)(iVar5 + 0x3c) | 3;
          *(uint *)(iVar5 + 0x48) = *(uint *)(iVar5 + 0x48) | 3;
          *(uint *)(iVar5 + 0x4c) = *(uint *)(iVar5 + 0x4c) | 0xe;
          piVar6 = *(int **)((int)__s + 0x40);
          *(int **)((int)__s + 0x40) = piVar3;
          *piVar3 = iVar7;
          piVar3[1] = (int)piVar6;
          *piVar6 = (int)piVar3;
        }
      }
      iVar9 = iVar9 + 1;
    }
    iVar8 = iVar8 + 1;
    if (*(int *)((int)__s + 0x30) <= iVar8) break;
    iVar9 = 0;
  }
  piVar3 = (int *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xdc0);
  if (piVar3 != (int *)0x0) {
    piVar3[4] = -1;
    piVar3[2] = 2;
    piVar3[3] = -1;
    puVar4 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xdc0);
    piVar3[5] = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = 0x10;
      puVar4[3] = 0x10;
      *puVar4 = 1;
      puVar4[1] = 0x10;
      puVar4[4] = 0x10;
      piVar6 = *(int **)((int)__s + 0x40);
      *(int **)((int)__s + 0x40) = piVar3;
      *piVar3 = iVar7;
      piVar3[1] = (int)piVar6;
      *piVar6 = (int)piVar3;
    }
  }
  mpi_dev_register(__s,8,param_1);
  uVar2 = DAT_0001b458;
  *(undefined4 *)((int)__s + 0x50) = DAT_0001b454;
  mpi_sysfs_dev_add(__s,uVar2);
  return;
}



/* ===== avs_compat_ioctl @ 0001b45c size=4 ===== */

undefined4 avs_compat_ioctl(void)

{
  return 0;
}



/* ===== avs_handle_message @ 0001b460 size=4 ===== */

undefined4 avs_handle_message(void)

{
  return 0;
}



/* ===== avs_get_version @ 0001b464 size=180 ===== */

undefined4 avs_get_version(int param_1,void *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x80);
  iVar4 = puVar3[0x28];
  memset(param_2,0,0x4c);
  *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(iVar4 + 0xb4);
  uVar2 = *puVar3;
  *(undefined1 *)((int)param_2 + 0xc) = 0;
  *(undefined1 *)((int)param_2 + 0xd) = 0;
  *(undefined4 *)((int)param_2 + 8) = uVar2;
  *(undefined1 *)((int)param_2 + 0xe) = 0;
  *(undefined1 *)((int)param_2 + 0xf) = 0;
  sVar1 = strlen(*(char **)(iVar4 + 0xb0));
  *(undefined1 *)((int)param_2 + 0x25) = 0;
  *(undefined1 *)((int)param_2 + 0x24) = 0x14;
  *(undefined1 *)((int)param_2 + 0x26) = 0;
  *(undefined1 *)((int)param_2 + 0x27) = 0;
  *(undefined1 *)((int)param_2 + 0x38) = 0x11;
  *(undefined1 *)((int)param_2 + 0x39) = 0;
  *(undefined1 *)((int)param_2 + 0x3a) = 0;
  *(undefined1 *)((int)param_2 + 0x3b) = 0;
  *(size_t *)((int)param_2 + 0x10) = sVar1;
  if (0xf < sVar1) {
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 0xf;
    *(undefined1 *)((int)param_2 + 0x12) = 0;
    *(undefined1 *)((int)param_2 + 0x13) = 0;
  }
  *(undefined1 *)((int)param_2 + 0x25) = 0;
  *(undefined1 *)((int)param_2 + 0x24) = 0x10;
  *(undefined1 *)((int)param_2 + 0x38) = 0x10;
  *(undefined1 *)((int)param_2 + 0x26) = 0;
  *(undefined1 *)((int)param_2 + 0x27) = 0;
  *(undefined1 *)((int)param_2 + 0x39) = 0;
  *(undefined1 *)((int)param_2 + 0x3a) = 0;
  *(undefined1 *)((int)param_2 + 0x3b) = 0;
  strncpy((char *)((int)param_2 + 0x14),*(char **)(iVar4 + 0xb0),*(size_t *)((int)param_2 + 0x10));
  strncpy((char *)((int)param_2 + 0x28),DAT_0001b518,*(size_t *)((int)param_2 + 0x24));
  strncpy((char *)((int)param_2 + 0x3c),DAT_0001b51c,*(size_t *)((int)param_2 + 0x38));
  return 0;
}



/* ===== avs_node_reset @ 0001b520 size=32 ===== */

undefined4 avs_node_reset(undefined4 param_1,int param_2,undefined4 param_3)

{
  vlog(0x11,4,DAT_0001b540,DAT_0001b544,0x158,*(undefined4 *)(param_2 + 4),param_3);
  return 0;
}



/* ===== avs_node_create @ 0001b548 size=346 ===== */

undefined4 avs_node_create(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  
  uVar13 = DAT_0001b6c8;
  uVar4 = DAT_0001b6c4;
  uVar6 = DAT_0001b6a8;
  uVar11 = *(undefined4 *)(param_1 + 0x80);
  if (*param_2 != 0x30) {
    vlog(0x11,2,DAT_0001b6a4,DAT_0001b6a8,0x58);
    return 0xffffffff;
  }
  iVar8 = 0;
  do {
    iVar2 = param_2[1];
    iVar1 = vsys_get_node_from_map(0x11,iVar2,iVar8);
    iVar2 = (iVar8 << 8 | iVar2 << 0x10) + 0x400;
    if (iVar1 == 0) {
      iVar1 = mpi_dev_create_node_with_params(uVar11,iVar2,0,0);
      iVar7 = param_2[1];
      if (iVar1 == 0) {
        uVar12 = 0x68;
        uVar3 = 2;
        uVar5 = DAT_0001b6b8;
        goto LAB_0001b5ae;
      }
      vlog(0x11,4,uVar4,uVar6,0x6c,iVar7,iVar8,iVar2);
      *(undefined4 *)(iVar1 + 4) = uVar13;
      mpi_node_add_in_watcher(iVar1,1);
      vsys_add_node_to_map(0x11,param_2[1],iVar8,iVar1);
    }
    else {
      iVar7 = param_2[1];
      uVar3 = 4;
      uVar12 = 0x62;
      uVar5 = DAT_0001b6ac;
LAB_0001b5ae:
      vlog(0x11,uVar3,uVar5,uVar6,uVar12,iVar7,iVar8,iVar2);
    }
    uVar3 = DAT_0001b6cc;
    uVar5 = DAT_0001b6a8;
    if (iVar8 != 0) break;
    iVar8 = 1;
  } while( true );
  uVar9 = 0;
  do {
    uVar10 = uVar9 | param_2[1] << 0x10;
    iVar8 = vsys_get_node_from_map(0x11,param_2[1],uVar9 + 2);
    uVar14 = uVar9;
    if (iVar8 == 0) {
      iVar8 = mpi_dev_create_node_with_params(uVar11,uVar10,0,0);
      iVar1 = param_2[1];
      if (iVar8 == 0) {
        uVar13 = 0x81;
        uVar4 = 2;
        uVar6 = DAT_0001b6bc;
        goto LAB_0001b5e8;
      }
      vlog(0x11,4,uVar3,uVar5,0x86,iVar1,uVar9,uVar10);
      *(undefined4 *)(iVar8 + 4) = DAT_0001b6c0;
      vsys_add_node_to_map(0x11,param_2[1],uVar9 + 2,iVar8);
    }
    else {
      iVar1 = param_2[1];
      uVar4 = 4;
      uVar13 = 0x7b;
      uVar6 = DAT_0001b6b0;
LAB_0001b5e8:
      vlog(0x11,uVar4,uVar6,uVar5,uVar13,iVar1,uVar9,uVar10);
    }
    if (uVar9 != 0) {
      vlog(0x11,4,DAT_0001b6b4,DAT_0001b6a8,0x8e,param_2[1],uVar14,uVar10);
      return 0;
    }
    uVar9 = 1;
  } while( true );
}



/* ===== avs_node_start @ 0001b6d0 size=510 ===== */

undefined4 avs_node_start(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_38 [5];
  
  if (*param_2 == 0x30) {
    iVar1 = mpi_allocator_find_by_name(DAT_0001b8d8);
    uVar8 = DAT_0001b900;
    uVar5 = DAT_0001b8d4;
    if (iVar1 != 0) {
      iVar6 = 0;
      piVar7 = local_38;
      do {
        iVar2 = vsys_get_node_from_map(0x11,param_2[1],iVar6 + 2);
        *piVar7 = iVar2;
        if (iVar2 == 0) {
          iVar1 = param_2[1];
          uVar8 = 0xd8;
          uVar5 = DAT_0001b8e0;
LAB_0001b736:
          vlog(0x11,2,uVar5,DAT_0001b8d4,uVar8,iVar1,iVar6);
          if (local_38[2] != 0) {
            if (local_38[0] != 0) {
              mpi_buf_pool_del_user(local_38[2]);
            }
            mpi_buf_pool_destroy(local_38[2],1);
          }
          if (local_38[3] == 0) {
            return 0xffffffff;
          }
          if (local_38[1] != 0) {
            mpi_buf_pool_del_user(local_38[3]);
          }
          mpi_buf_pool_destroy(local_38[3],1);
          return 0xffffffff;
        }
        if (param_2[iVar6 + 8] == 2) {
          if (param_2[iVar6 + 6] == 0) {
            param_2[iVar6 + 4] = 1;
          }
          puVar3 = (undefined4 *)
                   mpi_buf_pool_create(iVar1,1,param_2[iVar6 + 6],param_2[iVar6 + 4],DAT_0001b8e4);
          local_38[iVar6 + 2] = (int)puVar3;
          if (puVar3 == (undefined4 *)0x0) {
            iVar1 = param_2[1];
            uVar8 = 0xec;
            uVar5 = DAT_0001b8f8;
            goto LAB_0001b736;
          }
          mpi_buf_pool_add_user(puVar3,iVar2);
          vlog(0x11,4,DAT_0001b8e8,uVar5,0xea,param_2[1],iVar6,puVar3,*puVar3,param_2[iVar6 + 4],
               param_2[iVar6 + 6]);
        }
        else if (param_2[iVar6 + 8] == 3) {
          iVar4 = vsys_get_pool(param_2[iVar6 + 10]);
          local_38[iVar6 + 2] = iVar4;
          if (iVar4 == 0) {
            iVar1 = param_2[1];
            uVar8 = 0xf8;
            uVar5 = DAT_0001b8fc;
            goto LAB_0001b736;
          }
          mpi_buf_pool_add_user(iVar4,iVar2);
          vlog(0x11,4,uVar8,uVar5,0xf6,param_2[1],iVar6,iVar4,param_2[iVar6 + 10]);
        }
        mpi_node_add_out_watcher(iVar2,param_2[iVar6 + 2]);
        if (iVar6 != 0) {
          if (local_38[0] != 0) {
            mpi_node_streamon();
            vlog(0x11,4,DAT_0001b8ec,DAT_0001b8d4,0x103,param_2[1],0);
          }
          if (local_38[1] != 0) {
            mpi_node_streamon();
            vlog(0x11,4,DAT_0001b8ec,DAT_0001b8d4,0x103,param_2[1],1);
          }
          uVar8 = DAT_0001b8f0;
          uVar5 = DAT_0001b8d4;
          iVar1 = 0;
          while( true ) {
            iVar6 = vsys_get_node_from_map(0x11,param_2[1],iVar1);
            if (iVar6 != 0) {
              mpi_node_streamon();
              vlog(0x11,4,uVar8,uVar5,0x10c,param_2[1],iVar1);
            }
            if (iVar1 != 0) break;
            iVar1 = 1;
          }
          vlog(0x11,4,DAT_0001b8f4,DAT_0001b8d4,0x111,param_2[1]);
          return 0;
        }
        iVar6 = 1;
        piVar7 = piVar7 + 1;
      } while( true );
    }
    uVar8 = 0xd0;
    uVar5 = DAT_0001b8dc;
  }
  else {
    uVar8 = 0xc9;
    uVar5 = DAT_0001b8d0;
  }
  vlog(0x11,2,uVar5,DAT_0001b8d4,uVar8);
  return 0xffffffff;
}



/* ===== avs_mb_get @ 0001b904 size=360 ===== */

undefined4 avs_mb_get(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (*param_2 == 0x74) {
    iVar6 = param_2[3];
    iVar8 = param_2[1];
    iVar7 = param_2[2];
    if (iVar6 == -1) {
      iVar1 = vsys_get_node_from_map(0x11,iVar8,iVar7);
      if (iVar1 == 0) {
        vlog(0x11,2,DAT_0001ba74,DAT_0001ba70,0x175,iVar8,iVar7);
        return 0xffffffff;
      }
    }
    else {
      iVar1 = 0;
    }
    if ((iVar7 == -1) && (iVar1 = vsys_get_node_from_map(0x11,iVar8,iVar6 + 2), iVar1 == 0)) {
      vlog(0x11,2,DAT_0001ba78,DAT_0001ba70,0x17e,iVar8,iVar6);
    }
    else {
      iVar3 = param_2[4];
      if (iVar3 == 0) {
        *(int *)(iVar1 + 0x164) = param_2[5];
        piVar2 = (int *)mpi_node_get_in_buffer();
        if (piVar2 == (int *)0x0) {
          return 0xffffffff;
        }
        iVar1 = piVar2[4];
        uVar5 = DAT_0001ba7c;
        if (iVar7 != -1) {
          uVar5 = DAT_0001ba80;
          iVar6 = iVar7;
        }
        iVar7 = *piVar2;
        uVar9 = 0x189;
        uVar4 = DAT_0001ba84;
      }
      else if (iVar3 == 1) {
        *(int *)(iVar1 + 0x168) = param_2[5];
        piVar2 = (int *)mpi_node_get_out_buffer();
        if (piVar2 == (int *)0x0) {
          return 0xffffffff;
        }
        uVar5 = DAT_0001ba7c;
        if (iVar7 != -1) {
          uVar5 = DAT_0001ba80;
          iVar6 = iVar7;
        }
        iVar1 = piVar2[4];
        iVar7 = *piVar2;
        uVar9 = 400;
        uVar4 = DAT_0001ba88;
      }
      else {
        if (iVar3 != 2) {
          return 0xffffffff;
        }
        piVar2 = (int *)mpi_node_request_buf(iVar1,0);
        if (piVar2 == (int *)0x0) {
          return 0xffffffff;
        }
        uVar5 = DAT_0001ba7c;
        if (iVar7 != -1) {
          uVar5 = DAT_0001ba80;
          iVar6 = iVar7;
        }
        iVar1 = piVar2[4];
        iVar7 = *piVar2;
        uVar9 = 0x196;
        uVar4 = DAT_0001ba8c;
      }
      vlog(0x11,5,uVar4,DAT_0001ba70,uVar9,iVar8,uVar5,iVar6,piVar2,iVar7,iVar1);
      if (piVar2[0x10] != 0) {
        memcpy(param_2 + 9,piVar2 + 0x3a,0x50);
        param_2[8] = *(int *)piVar2[0x10];
        param_2[6] = *piVar2;
        return 0;
      }
    }
  }
  else {
    vlog(0x11,2,DAT_0001ba6c,DAT_0001ba70,0x169);
  }
  return 0xffffffff;
}



/* ===== avs_mb_send @ 0001ba90 size=294 ===== */

undefined4 avs_mb_send(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*param_2 == 0x74) {
    iVar4 = param_2[3];
    iVar6 = param_2[1];
    iVar5 = param_2[2];
    if (iVar4 == -1) {
      iVar1 = vsys_get_node_from_map(0x11,iVar6,iVar5);
      if (iVar1 == 0) {
        vlog(0x11,2,DAT_0001bbc0,DAT_0001bbbc,0x1bc,iVar6,iVar5);
        return 0xffffffff;
      }
    }
    else {
      iVar1 = 0;
    }
    if ((iVar5 != -1) || (iVar1 = vsys_get_node_from_map(0x11,iVar6,iVar4 + 2), iVar1 != 0)) {
      if (-1 < param_2[7]) {
        puVar2 = (undefined4 *)get_mpi_buf();
        if (puVar2 == (undefined4 *)0x0) {
          vlog(0x11,2,DAT_0001bbc8,DAT_0001bbbc,0x1cd,param_2[7]);
          return 0xffffffff;
        }
        uVar3 = DAT_0001bbd0;
        if (iVar5 != -1) {
          uVar3 = DAT_0001bbcc;
          iVar4 = iVar5;
        }
        vlog(0x11,5,DAT_0001bbd4,DAT_0001bbbc,0x1d4,iVar6,uVar3,iVar4,puVar2,*puVar2,puVar2[4],
             puVar2[0x10],param_2[7],param_2[4]);
        memcpy(puVar2 + 0x3a,param_2 + 9,0x50);
        if (param_2[4] == 0) {
          puVar2[1] = DAT_0001bbd8;
          mpi_node_buffer_in(iVar1,puVar2,0);
          return 0;
        }
        if (param_2[4] == 1) {
          mpi_node_buffer_out(iVar1,puVar2,0);
        }
      }
      return 0;
    }
    vlog(0x11,2,DAT_0001bbc4,DAT_0001bbbc,0x1c5,iVar6,iVar4);
  }
  else {
    vlog(0x11,2,DAT_0001bbb8,DAT_0001bbbc,0x1b0);
  }
  return 0xffffffff;
}



/* ===== avs_mb_release @ 0001bbdc size=276 ===== */

undefined4 avs_mb_release(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*param_2 == 0x74) {
    iVar4 = param_2[3];
    iVar6 = param_2[1];
    iVar5 = param_2[2];
    if (iVar4 == -1) {
      iVar1 = vsys_get_node_from_map(0x11,iVar6,iVar5);
      if (iVar1 == 0) {
        vlog(0x11,2,DAT_0001bcf8,DAT_0001bcf4,0x1fd,iVar6,iVar5);
        return 0xffffffff;
      }
    }
    else {
      iVar1 = 0;
    }
    if ((iVar5 != -1) || (iVar1 = vsys_get_node_from_map(0x11,iVar6,iVar4 + 2), iVar1 != 0)) {
      iVar2 = mpi_obj_from_id(param_2[6],4);
      if (iVar2 == 0) {
        vlog(0x11,2,DAT_0001bd0c,DAT_0001bcf4,0x21a);
      }
      else {
        uVar3 = DAT_0001bd04;
        if (iVar5 != -1) {
          uVar3 = DAT_0001bd00;
          iVar4 = iVar5;
        }
        vlog(0x11,5,DAT_0001bd08,DAT_0001bcf4,0x211,iVar6,uVar3,iVar4,iVar2,
             *(undefined4 *)(iVar2 + 0x40),param_2[6],*(undefined4 *)(iVar2 + 0x10),param_2[4]);
        iVar4 = param_2[4];
        if (iVar4 == 0) {
          mpi_node_release_buffer_flag(iVar1,iVar2,iVar1 + 0x174);
          return 0;
        }
        if (iVar4 == 1) {
          iVar4 = iVar1 + 0x178;
        }
        else {
          if (iVar4 != 2) {
            return 0;
          }
          iVar4 = 0;
        }
        mpi_node_release_buffer_flag(iVar1,iVar2,iVar4);
      }
      return 0;
    }
    vlog(0x11,2,DAT_0001bcfc,DAT_0001bcf4,0x206,iVar6,iVar4);
  }
  else {
    vlog(0x11,2,DAT_0001bcf0,DAT_0001bcf4,0x1f1);
  }
  return 0xffffffff;
}



/* ===== avs_dev_open @ 0001bd10 size=46 ===== */

undefined4 avs_dev_open(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001bd40;
  *(int *)(param_2 + 0x80) = DAT_0001bd40 + 4;
  *(undefined4 *)(iVar1 + 0xac) = 9;
  mpi_obj_ref();
  vlog(0x11,4,DAT_0001bd44,DAT_0001bd48,0x25f,param_2,param_3);
  return 0;
}



/* ===== avs_node_destroy @ 0001bd4c size=200 ===== */

undefined4 avs_node_destroy(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = DAT_0001be20;
  uVar4 = DAT_0001be18;
  if (*param_2 == 0x30) {
    iVar6 = 0;
    while( true ) {
      iVar5 = vsys_get_node_from_map(0x11,param_2[1],iVar6);
      if (iVar5 != 0) {
        vsys_remove_node_from_map(0x11,param_2[1],iVar6);
        mpi_node_destroy(iVar5);
        vlog(0x11,4,uVar2,uVar4,0xa8,param_2[1],iVar6);
      }
      uVar3 = DAT_0001be24;
      uVar1 = DAT_0001be18;
      if (iVar6 != 0) break;
      iVar6 = 1;
    }
    iVar6 = 0;
    while( true ) {
      iVar5 = vsys_get_node_from_map(0x11,param_2[1],iVar6 + 2);
      if (iVar5 != 0) {
        vsys_remove_node_from_map(0x11,param_2[1],iVar6 + 2);
        mpi_node_destroy(iVar5);
        vlog(0x11,4,uVar3,uVar1,0xb3,param_2[1],iVar6);
      }
      if (iVar6 != 0) break;
      iVar6 = 1;
    }
    vlog(0x11,4,DAT_0001be1c,DAT_0001be18,0xb7,param_2[1]);
    uVar4 = 0;
  }
  else {
    vlog(0x11,2,DAT_0001be14,DAT_0001be18,0x9d);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== avs_node_stop @ 0001be28 size=200 ===== */

undefined4 avs_node_stop(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = DAT_0001bef8;
  uVar4 = DAT_0001bef4;
  if (*param_2 == 0x30) {
    iVar6 = 0;
    while( true ) {
      iVar5 = vsys_get_node_from_map(0x11,param_2[1],iVar6);
      if (iVar5 != 0) {
        mpi_node_streamoff();
        vlog(0x11,4,uVar2,uVar4,0x137,param_2[1],iVar6);
      }
      uVar3 = DAT_0001bf00;
      uVar1 = DAT_0001bef4;
      if (iVar6 != 0) break;
      iVar6 = 1;
    }
    iVar6 = 0;
    while( true ) {
      iVar5 = vsys_get_node_from_map(0x11,param_2[1],iVar6 + 2);
      if (iVar5 != 0) {
        iVar7 = *(int *)(iVar5 + 0x3c);
        if (iVar7 != 0) {
          mpi_buf_pool_del_user(iVar7,iVar5);
          mpi_buf_pool_destroy(iVar7,1);
        }
        mpi_node_streamoff(iVar5);
        vlog(0x11,4,uVar3,uVar1,0x148,param_2[1],iVar6);
      }
      if (iVar6 != 0) break;
      iVar6 = 1;
    }
    vlog(0x11,4,DAT_0001befc,DAT_0001bef4,0x14d,param_2[1]);
    uVar4 = 0;
  }
  else {
    vlog(0x11,2,DAT_0001bef0,DAT_0001bef4,0x12e);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== avs_dev_release @ 0001bf04 size=208 ===== */

undefined4 avs_dev_release(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *(int *)(param_2 + 0x80);
  mpi_obj_unref(iVar6);
  uVar2 = DAT_0001bfd4;
  if (*(int *)(iVar6 + 0x10) == 1) {
    iVar6 = 0;
    do {
      uVar3 = DAT_0001bfdc;
      iVar7 = 0;
      while( true ) {
        iVar5 = vsys_get_node_from_map(0x11,iVar6,iVar7 + 2);
        if (iVar5 != 0) {
          iVar8 = *(int *)(iVar5 + 0x3c);
          vsys_remove_node_from_map(0x11,iVar6,iVar7 + 2);
          mpi_node_destroy(iVar5);
          if (iVar8 != 0) {
            mpi_buf_pool_destroy(iVar8,1);
          }
          param_2 = iVar6;
          param_3 = iVar7;
          vlog(0x11,4,uVar3,uVar2,0x27d,iVar6,iVar7);
        }
        uVar4 = DAT_0001bfe0;
        if (iVar7 != 0) break;
        iVar7 = 1;
      }
      iVar7 = 0;
      while( true ) {
        iVar5 = vsys_get_node_from_map(0x11,iVar6,iVar7);
        if (iVar5 != 0) {
          vsys_remove_node_from_map(0x11,iVar6,iVar7);
          mpi_node_destroy(iVar5);
          param_2 = iVar6;
          param_3 = iVar7;
          vlog(0x11,4,uVar4,uVar2,0x287,iVar6,iVar7);
        }
        if (iVar7 != 0) break;
        iVar7 = 1;
      }
      bVar1 = iVar6 == 0;
      iVar6 = iVar7;
    } while (bVar1);
    vlog(0x11,4,DAT_0001bfd8,DAT_0001bfd4,0x28e,param_2,param_3);
  }
  return 0;
}



/* ===== avs_dev_ioctl @ 0001bfe4 size=84 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 avs_dev_ioctl(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  param_2 = param_2 & 0xff;
  iVar1 = *(int *)(param_1 + 0x80);
  uVar2 = param_2;
  iVar3 = iVar1;
  vlog(0x11,5,DAT_0001c074,DAT_0001c070,0x239,param_2,param_2,iVar1);
  if (*(uint *)(iVar1 + 0xa8) <= param_2) {
    vlog(0x11,2,DAT_0001c078,DAT_0001c070,0x23c,param_2,uVar2,iVar3);
    return 0xffffffea;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== avs_dev_probe @ 0001c080 size=92 ===== */

void avs_dev_probe(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_0001c0e0;
  pvVar1 = DAT_0001c0dc;
  memset(DAT_0001c0dc,0,0xb8);
  uVar4 = kstrdup(param_1,0xcc0);
  *(undefined4 *)((int)pvVar1 + 0xb4) = 1;
  *(int *)((int)pvVar1 + 0xa8) = iVar2 + 0xa0;
  *(undefined4 *)((int)pvVar1 + 0xac) = 9;
  *(undefined4 *)((int)pvVar1 + 0x48) = 0;
  *(undefined4 *)((int)pvVar1 + 0x50) = 0;
  uVar3 = DAT_0001c0e4;
  *(void **)((int)pvVar1 + 0xa4) = pvVar1;
  *(undefined4 *)((int)pvVar1 + 0x54) = uVar3;
  *(undefined4 *)((int)pvVar1 + 0xb0) = uVar4;
  mpi_dev_register((int)pvVar1 + 4,8,param_1);
  mpi_sysfs_dev_add((int)pvVar1 + 4,iVar2 + 0x154);
  return;
}



/* ===== avs_dev_shutdown @ 0001c0e8 size=28 ===== */

void avs_dev_shutdown(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_0001c104;
  puVar2 = DAT_0001c104 + 1;
  *DAT_0001c104 = 1;
  mpi_dev_unregister(puVar2);
  kfree(puVar1[0x2c]);
  return;
}



/* ===== rockit_rkcif_ioctl @ 0001c108 size=4 ===== */

undefined4 rockit_rkcif_ioctl(void)

{
  return 0;
}



/* ===== rockit_rkcif_open @ 0001c10c size=4 ===== */

undefined4 rockit_rkcif_open(void)

{
  return 0;
}



/* ===== rockit_rkcif_buf_que @ 0001c110 size=212 ===== */

undefined4 rockit_rkcif_buf_que(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  puVar1 = DAT_0001c1ec;
  uVar4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    pcVar6 = (char *)param_1[0x42];
    if (pcVar6 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if (*pcVar6 != '\0') {
        disableIRQinterrupts();
        iVar7 = 0;
        do {
          piVar2 = (int *)mpi_node_request_buf(param_1,0);
          if (piVar2 == (int *)0x0) break;
          vlog(0,5,DAT_0001c1e4,DAT_0001c1e8,0xcd,*(undefined4 *)(param_1[0xb] + 0x2c),*param_1,
               *piVar2);
          iVar5 = 0;
          while (*(int **)(pcVar6 + iVar5 * 8 + 4) != (int *)0x0) {
            if ((**(int **)(pcVar6 + iVar5 * 8 + 4) == *piVar2) || (iVar5 = iVar5 + 1, iVar5 == 5))
            goto LAB_0001c176;
          }
          *(int **)(pcVar6 + iVar5 * 8 + 4) = piVar2;
LAB_0001c176:
          pcVar6[iVar5 * 8 + 8] = '\x01';
          uVar4 = param_1[0xe];
          *(undefined4 **)(pcVar6 + 0x4c) = param_1;
          *(int **)(pcVar6 + 0x50) = piVar2;
          pcVar6[0x30] = '\x01';
          *(undefined4 *)(pcVar6 + 0x40) = uVar4;
          *(int *)(pcVar6 + 0x3c) = *piVar2;
          *(int *)(pcVar6 + 0x6c) = piVar2[0x10];
          *(undefined4 *)(pcVar6 + 0x34) = *(undefined4 *)(param_1[0xb] + 0x2c);
          if (((code *)*puVar1 != (code *)0x0) &&
             (iVar3 = (*(code *)*puVar1)(pcVar6 + 0x30), iVar3 < 0)) {
            pcVar6[iVar5 * 8 + 8] = '\0';
            pcVar6[1] = '\0';
            mpi_obj_unref(piVar2);
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != param_2);
        uVar4 = 0;
        if (piVar2 != (int *)0x0) {
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}



/* ===== cif_destroy_ctx @ 0001c1f0 size=10 ===== */

undefined4 cif_destroy_ctx(void)

{
  kfree();
  return 0;
}



/* ===== rockit_rkcif_handle_message @ 0001c1fa size=298 ===== */

undefined4 rockit_rkcif_handle_message(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = DAT_0001c330;
  if (*(int *)(param_1 + 8) == 1) {
    iVar3 = DAT_0001c328;
    if (param_1 == 0) {
      uVar7 = 0xfd;
      uVar2 = 2;
      uVar6 = DAT_0001c324;
    }
    else {
      pcVar4 = *(char **)(param_1 + 0x108);
      if (pcVar4 == (char *)0x0) {
        uVar7 = 0x105;
        uVar2 = 2;
        uVar6 = DAT_0001c32c;
      }
      else {
        if (param_2 != 5) {
          if (param_2 == 6) {
            *pcVar4 = '\0';
            vlog(0,5,DAT_0001c344,DAT_0001c328,0x124,6);
            pcVar5 = pcVar4;
            do {
              if ((*(int *)(pcVar5 + 4) != 0) && (pcVar5[8] != '\0')) {
                mpi_obj_unref();
                pcVar5[4] = '\0';
                pcVar5[5] = '\0';
                pcVar5[6] = '\0';
                pcVar5[7] = '\0';
              }
              pcVar5 = pcVar5 + 8;
            } while (pcVar5 != pcVar4 + 0x28);
            vlog(0,4,DAT_0001c348,DAT_0001c328,300);
            rkcif_rockit_pause_stream(pcVar4 + 0x30);
            return 0;
          }
          if (param_2 != 0) {
            return 0;
          }
          if (*pcVar4 == '\0') {
            return 0;
          }
          if (pcVar4[1] == '\0') {
            return 0;
          }
          rockit_rkcif_buf_que(param_1,1,pcVar4[1],1,param_1);
          return 0;
        }
        iVar3 = *(int *)(param_1 + 0x50);
        uVar2 = *(undefined4 *)(iVar3 + 4);
        uVar6 = *(undefined4 *)(iVar3 + 8);
        iVar3 = DAT_0001c330 + *(int *)(iVar3 + 0x18) * 8;
        *(undefined4 *)(pcVar4 + 0x34) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x2c);
        *pcVar4 = '\x01';
        vlog(0,5,DAT_0001c334,iVar1 + 0x15,0x119,5);
        rkcif_rockit_config_stream(pcVar4 + 0x30,uVar2,uVar6,*(undefined4 *)(iVar3 + 0x30));
        vlog(0,5,DAT_0001c338,iVar1 + 0x15,0x11b);
        rockit_rkcif_buf_que(param_1,5);
        vlog(0,5,DAT_0001c33c,iVar1 + 0x15,0x11d);
        rkcif_rockit_resume_stream(pcVar4 + 0x30);
        uVar7 = 0x11f;
        uVar2 = 5;
        uVar6 = DAT_0001c340;
        iVar3 = iVar1 + 0x15;
      }
    }
    vlog(0,uVar2,uVar6,iVar3,uVar7,param_2);
  }
  return 0;
}



/* ===== rockit_rkcif_compat_ioctl @ 0001c34c size=4 ===== */

undefined4 rockit_rkcif_compat_ioctl(void)

{
  return 0;
}



/* ===== rockit_rkcif_mpibuf_done @ 0001c350 size=360 ===== */

undefined4 rockit_rkcif_mpibuf_done(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 auStack_2c [8];
  
  if (param_1 == 0) {
    uVar9 = 99;
    uVar2 = DAT_0001c4b8;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x1c);
    if (iVar6 == 0) {
      uVar9 = 0x68;
      uVar2 = DAT_0001c4c0;
    }
    else {
      iVar7 = *(int *)(iVar6 + 0x108);
      if (iVar7 != 0) {
        if (*(char *)(param_1 + 2) != '\0') {
          rockit_rkcif_buf_que(iVar6,1);
          *(undefined1 *)(param_1 + 2) = 0;
          return 0;
        }
        piVar3 = *(int **)(param_1 + 0x20);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        piVar3[0x3c] = *(int *)(param_1 + 0x48);
        piVar3[0x3b] = *(int *)(param_1 + 0x44);
        iVar1 = DAT_0001c4c8;
        iVar4 = 0;
        do {
          if (*(int *)(param_1 + 0x58) == *(int *)(DAT_0001c4c8 + iVar4 * 8)) goto LAB_0001c3e4;
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0x18);
        vlog(0,2,DAT_0001c4cc,DAT_0001c4bc,0x86);
LAB_0001c3e4:
        iVar5 = 0;
        piVar3[0x40] = *(int *)(iVar1 + iVar4 * 8 + 4);
        piVar3[0x3d] = *(int *)(param_1 + 0x4c);
        piVar3[0x3e] = *(int *)(param_1 + 0x50);
        uVar8 = div_s64_rem(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),1000,
                            auStack_2c);
        uVar2 = DAT_0001c4d0;
        *(undefined8 *)(piVar3 + 0x48) = uVar8;
        piVar3[0x47] = *(int *)(param_1 + 0x6c);
        piVar3[0x32] = *(int *)(param_1 + 0x14);
        vlog(0,5,uVar2,DAT_0001c4bc,0x92,*(undefined4 *)(param_1 + 0x4c),
             *(undefined4 *)(param_1 + 0x50));
        piVar3[0x38] = 0;
        mpi_node_buffer_out(iVar6,piVar3,0);
        uVar9 = DAT_0001c4d4;
        uVar2 = DAT_0001c4bc;
        iVar4 = iVar7;
        if (piVar3[0x10] == 0) {
          mpi_obj_unref(piVar3);
          return 0;
        }
        while( true ) {
          vlog(0,5,uVar9,uVar2,0x9d,iVar5,*(undefined4 *)(iVar4 + 4));
          if ((*(int **)(iVar4 + 4) != (int *)0x0) && (*piVar3 == **(int **)(iVar4 + 4))) break;
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 8;
          if (iVar5 == 5) {
LAB_0001c48a:
            mpi_obj_unref(piVar3);
            if ((*(char *)(param_1 + 1) != '\0') &&
               (iVar6 = rockit_rkcif_buf_que(iVar6,1), iVar6 != 0)) {
              *(undefined1 *)(param_1 + 1) = 0;
              return 0;
            }
            *(undefined1 *)(iVar7 + 1) = *(undefined1 *)(param_1 + 1);
            return 0;
          }
        }
        *(undefined1 *)(iVar7 + iVar5 * 8 + 8) = 0;
        goto LAB_0001c48a;
      }
      uVar9 = 0x70;
      uVar2 = DAT_0001c4c4;
    }
  }
  vlog(0,2,uVar2,DAT_0001c4bc,uVar9);
  return 0;
}



/* ===== cif_create_ctx @ 0001c4d8 size=12 ===== */

void cif_create_ctx(void)

{
  kmem_cache_alloc(*(undefined4 *)(DAT_0001c4e4 + 0x34),0xdc0);
  return;
}



/* ===== rockit_rkcif_dev_register @ 0001c4e8 size=304 ===== */

void rockit_rkcif_dev_register(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *__s;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = DAT_0001c618;
  iVar9 = 0;
  iVar8 = 0;
  __s = (void *)kmem_cache_alloc(*(undefined4 *)(DAT_0001c618 + 8),0xcc0);
  memset(__s,0,0xa4);
  uVar2 = DAT_0001c61c;
  iVar7 = (int)__s + 0x3c;
  *(int *)((int)__s + 0x3c) = iVar7;
  *(int *)((int)__s + 0x40) = iVar7;
  *(undefined4 *)((int)__s + 0x44) = uVar2;
  *(undefined4 *)((int)__s + 0x4c) = DAT_0001c620;
  *(undefined4 *)((int)__s + 0x30) = 2;
  *(undefined4 *)((int)__s + 0x34) = 1;
  *(undefined4 *)((int)__s + 0x38) = 3;
  while( true ) {
    while( true ) {
      if (*(int *)((int)__s + 0x34) <= iVar8) break;
      piVar3 = (int *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xdc0);
      if (piVar3 != (int *)0x0) {
        piVar3[2] = 1;
        piVar3[3] = iVar9;
        piVar3[4] = iVar8;
        iVar5 = kmem_cache_alloc(*(undefined4 *)(iVar1 + 4),0xdc0);
        piVar3[5] = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 8) = 0xf00;
          *(undefined4 *)(iVar5 + 0xc) = 0x870;
          *(undefined4 *)(iVar5 + 0x24) = 4;
          *(undefined4 *)(iVar5 + 0x20) = 1;
          *(uint *)(iVar5 + 0x40) = *(uint *)(iVar5 + 0x40) | 3;
          *(undefined4 *)(iVar5 + 0x28) = 1;
          *(undefined4 *)(iVar5 + 0x2c) = 1;
          *(uint *)(iVar5 + 0x44) = *(uint *)(iVar5 + 0x44) | 3;
          *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) | 3;
          *(uint *)(iVar5 + 0x3c) = *(uint *)(iVar5 + 0x3c) | 3;
          *(uint *)(iVar5 + 0x48) = *(uint *)(iVar5 + 0x48) | 3;
          *(uint *)(iVar5 + 0x4c) = *(uint *)(iVar5 + 0x4c) | 0xe;
          piVar6 = *(int **)((int)__s + 0x40);
          *(int **)((int)__s + 0x40) = piVar3;
          *piVar3 = iVar7;
          piVar3[1] = (int)piVar6;
          *piVar6 = (int)piVar3;
        }
      }
      iVar8 = iVar8 + 1;
    }
    iVar9 = iVar9 + 1;
    if (*(int *)((int)__s + 0x30) <= iVar9) break;
    iVar8 = 0;
  }
  piVar3 = (int *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xdc0);
  if (piVar3 != (int *)0x0) {
    piVar3[4] = -1;
    piVar3[2] = 2;
    piVar3[3] = -1;
    puVar4 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xdc0);
    piVar3[5] = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = 0x10;
      puVar4[3] = 0x10;
      *puVar4 = 1;
      puVar4[1] = 0x10;
      puVar4[4] = 0x10;
      piVar6 = *(int **)((int)__s + 0x40);
      *(int **)((int)__s + 0x40) = piVar3;
      *piVar3 = iVar7;
      piVar3[1] = (int)piVar6;
      *piVar6 = (int)piVar3;
    }
  }
  mpi_dev_register(__s,8,param_1);
  uVar2 = DAT_0001c628;
  *(undefined4 *)((int)__s + 0x50) = DAT_0001c624;
  mpi_sysfs_dev_add(__s,uVar2);
  return;
}



/* ===== mcu_send_message @ 0001c62c size=16 ===== */

void mcu_send_message(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001c63c;
  **(undefined4 **)(DAT_0001c63c + 0xe8) = param_2;
  **(undefined4 **)(iVar1 + 0xe4) = param_1;
  return;
}



/* ===== vmcu_compat_ioctl @ 0001c640 size=4 ===== */

undefined4 vmcu_compat_ioctl(void)

{
  return 0;
}



/* ===== vmcu_version @ 0001c644 size=138 ===== */

void vmcu_version(int param_1,undefined1 *param_2)

{
  size_t sVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(**(int **)(param_1 + 0x80) + 0xa0);
  if (*(int *)(param_2 + 0x20) != 0x4c) {
    vlog(2,2,DAT_0001c6d0,DAT_0001c6d4,0xdd,param_2);
  }
  param_2[1] = 0;
  *param_2 = 1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  sVar1 = strlen((char *)*puVar2);
  if (sVar1 < 0x11) {
    *(size_t *)(param_2 + 0xc) = sVar1;
  }
  else {
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0x10;
  }
  strncpy(param_2 + 0x10,(char *)*puVar2,*(size_t *)(param_2 + 0xc));
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  return;
}



/* ===== vmcu_release @ 0001c6d8 size=48 ===== */

undefined4 vmcu_release(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x80);
  mpi_obj_unref(*puVar1);
  vlog(2,4,DAT_0001c708,DAT_0001c70c,300,*(undefined4 *)*puVar1);
  kfree(puVar1);
  return 0;
}



/* ===== vmcu_read @ 0001c710 size=18 ===== */

int vmcu_read(void)

{
  int iVar1;
  
  iVar1 = mpi_fs_buf_read(DAT_0001c724);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== vmcu_ioctl @ 0001c728 size=84 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 vmcu_ioctl(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xff;
  iVar1 = DAT_0001c7ac + 4;
  iVar2 = *(int *)(DAT_0001c7ac + 0xa4);
  uVar3 = param_2;
  uVar4 = param_2;
  vlog(2,5,DAT_0001c7b0,DAT_0001c7b4,0xfd,param_2,param_2,iVar1);
  if (*(uint *)(iVar2 + 0xd4) <= param_2) {
    vlog(2,2,DAT_0001c7b8,DAT_0001c7b4,0x100,uVar3,uVar4,iVar1);
    return 0xffffffea;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== vmcu_thread_fn @ 0001c7c0 size=224 ===== */

undefined4 vmcu_thread_fn(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  
  uVar5 = DAT_0001c8c0;
  uVar4 = DAT_0001c8bc;
  uVar3 = DAT_0001c8a0;
  iVar11 = 0;
  while (iVar6 = kthread_should_stop(), iVar6 == 0) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      msleep(10);
      iVar6 = **(int **)(DAT_0001c8a4 + 0xec);
      bVar15 = iVar11 != iVar6;
      iVar11 = iVar6;
      if (((bVar15) && (iVar6 != 0)) && (mcu_send_message(8,0), iVar6 == 7)) {
        puVar7 = (undefined4 *)ioremap(uVar3,4);
        uVar14 = *puVar7;
        puVar7 = (undefined4 *)ioremap(uVar4,4);
        uVar9 = *puVar7;
        iVar6 = ioremap(uVar5,4);
        uVar1 = *(ushort *)(iVar6 + 2);
        iVar6 = ioremap(DAT_0001c8a8,4);
        uVar2 = *(ushort *)(iVar6 + 2);
        puVar7 = (undefined4 *)ioremap(DAT_0001c8ac,4);
        iVar6 = DAT_0001c8c4;
        iVar13 = (uint)uVar2 << 4;
        uVar10 = *puVar7;
        printk(DAT_0001c8b0,uVar14,uVar9,(uint)uVar1 << 4,iVar13,uVar10);
        iVar8 = ioremap(DAT_0001c8b4,0x2c);
        puVar7 = (undefined4 *)(iVar8 + -4);
        iVar8 = DAT_0001c8b4;
        do {
          puVar7 = puVar7 + 1;
          iVar12 = iVar8 + 4;
          printk(DAT_0001c8b8,iVar8,*puVar7,DAT_0001c8b8,iVar13,uVar10);
          iVar8 = iVar12;
        } while (iVar12 != iVar6);
        msleep(10);
        mcu_send_message(0);
      }
    }
    else {
      msleep(1);
    }
  }
  return 0;
}



/* ===== vmcu_open @ 0001c8c8 size=88 ===== */

undefined4 vmcu_open(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_0001c920 + 0xc),0xdc0,param_3,DAT_0001c920,
                                   param_1,param_2,param_3);
  iVar1 = DAT_0001c92c;
  if (piVar2 == (int *)0x0) {
    vlog(2,2,DAT_0001c924,DAT_0001c928,0x11f);
    uVar3 = 0xffffffff;
  }
  else {
    iVar4 = DAT_0001c92c + 4;
    mpi_obj_ref(iVar4);
    uVar3 = *(undefined4 *)(iVar1 + 4);
    *piVar2 = iVar4;
    *(int **)(param_2 + 0x80) = piVar2;
    vlog(2,4,DAT_0001c930,DAT_0001c928,0x124,uVar3);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== mcu_wrap_config @ 0001c934 size=274 ===== */

void mcu_wrap_config(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = DAT_0001ca48;
  if (*(int *)(DAT_0001ca48 + 0xf8) != 1) {
    return;
  }
  mcu_send_message(6,0);
  uVar5 = *(uint *)(iVar1 + 0xfc);
  if (uVar5 == 0) {
    uVar5 = **(uint **)(iVar1 + 0xf4) & 0x3fff;
  }
  iVar9 = 0;
  iVar6 = *(int *)(*(int *)(iVar1 + 0xdc) + 0xdc);
  iVar3 = __aeabi_idiv(param_1 * 1000,uVar5);
  vlog(2,4,DAT_0001ca4c,DAT_0001ca50,0x70,iVar6,uVar5);
  iVar8 = 0x20;
  puVar7 = (undefined4 *)(iVar6 + -4);
  do {
    puVar7[1] = 0;
    puVar7[0x41] = 0;
    iVar4 = DAT_0001ca54;
    puVar7[0xc1] = iVar8;
    uVar2 = DAT_0001ca58;
    iVar4 = (int)((longlong)iVar9 * (longlong)iVar4 >> 0x26) - (iVar9 >> 0x1f);
    puVar7[0x81] = iVar4;
    vlog(2,4,uVar2,DAT_0001ca50,0x78,iVar8,iVar4);
    if (param_1 <= (int)puVar7[0x81]) break;
    iVar8 = iVar8 + 0x20;
    iVar9 = iVar9 + iVar3 * 0x20;
    puVar7 = puVar7 + 1;
  } while (iVar8 != 0x820);
  iVar3 = *(int *)(iVar1 + 0xe0);
  *(uint *)(iVar6 + 0x400) = uVar5;
  if (iVar3 != 0) {
    param_2 = iVar3;
  }
  iVar3 = *(int *)(iVar1 + 0xdc);
  *(uint *)(iVar6 + 0x404) = param_1 + 0x1fU & 0xffffffe0;
  *(int *)(iVar6 + 0x408) = param_2;
  dma_buf_end_cpu_access(*(undefined4 *)(iVar3 + 0x40),1);
  vlog(2,4,DAT_0001ca5c,DAT_0001ca50,0x83,*(undefined4 *)(*(int *)(iVar1 + 0xdc) + 0xe0),
       *(undefined4 *)(iVar6 + 0x408));
  mcu_send_message(1,*(undefined4 *)(*(int *)(iVar1 + 0xdc) + 0xe0));
  return;
}



/* ===== mcu_set_wrap_line @ 0001ca60 size=8 ===== */

void mcu_set_wrap_line(undefined4 param_1)

{
  *(undefined4 *)(DAT_0001ca68 + 0xe0) = param_1;
  return;
}



/* ===== mcu_get_wrap_status @ 0001ca6c size=8 ===== */

undefined4 mcu_get_wrap_status(void)

{
  return *(undefined4 *)(DAT_0001ca74 + 0xf8);
}



/* ===== mcu_wrap_start @ 0001ca78 size=82 ===== */

void mcu_wrap_start(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0001cacc;
  if (*(int *)(DAT_0001cacc + 0xf8) == 1) {
    vlog(2,4,DAT_0001cad0,DAT_0001cad4,0x94,param_2,param_3,param_4);
    mcu_send_message(5,0);
    *(undefined4 *)(iVar1 + 0xf8) = 2;
    uVar2 = **(uint **)(iVar1 + 0xf4) & 0x3fff;
    if (uVar2 != *(uint *)(iVar1 + 0xfc)) {
      vlog(2,2,DAT_0001cad8,DAT_0001cad4,0x99,*(uint *)(iVar1 + 0xfc),uVar2,param_4);
    }
  }
  return;
}



/* ===== mcu_reset @ 0001cadc size=50 ===== */

void mcu_reset(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  if (*(int *)(DAT_0001cb10 + 0xf8) != 0) {
    mcu_send_message(9,0);
    msleep(100);
    uVar1 = ioremap(DAT_0001cb14,4);
    *(undefined4 *)uVar1 = 0x1e001e;
    msleep(100,(int)((ulonglong)uVar1 >> 0x20),extraout_r2,in_r3);
    return;
  }
  return;
}



/* ===== mcu_wrap_end @ 0001cb18 size=48 ===== */

void mcu_wrap_end(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001cb48;
  if (*(int *)(DAT_0001cb48 + 0xf8) == 2) {
    vlog(2,4,DAT_0001cb4c,DAT_0001cb50,0xab,param_2);
    *(undefined4 *)(iVar1 + 0xf8) = 1;
    mcu_send_message(6,0);
    return;
  }
  return;
}



/* ===== vmcu_probe @ 0001cb54 size=606 ===== */

void vmcu_probe(undefined4 param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *__s;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = 0;
  uStack_1c = 0;
  puVar1 = (uint *)ioremap(DAT_0001cdb4,4);
  puVar2 = DAT_0001cdc0;
  if ((*puVar1 & 0x1e) == 0x1e) {
    memset(DAT_0001cdc0,0,0xfc);
    iVar3 = mpi_allocator_find_by_name(DAT_0001cdc4);
    puVar2[0x36] = iVar3;
    puVar5 = DAT_0001cdcc;
    if (iVar3 != 0) {
      if (puVar2[0x40] != 0) {
        iVar3 = filp_open(puVar2[0x40],0,0x1a0);
        vlog(2,4,DAT_0001cdd0,DAT_0001cdbc,0x15d,iVar3);
        if (iVar3 != 0) {
          __s = (void *)ioremap(*puVar5,0x1000);
          memset(__s,0,0x1000);
          uVar11 = ioremap(*puVar5,0x1000);
          uVar11 = kernel_read(iVar3,uVar11,0x1000,&local_20);
          vlog(2,4,DAT_0001cdd4,DAT_0001cdbc,0x166,uVar11,local_20,uStack_1c);
        }
      }
      puVar4 = (undefined4 *)ioremap(DAT_0001cdd8,4);
      *puVar4 = *puVar5;
      puVar5 = (undefined4 *)ioremap(DAT_0001cdb4,4);
      *puVar5 = 0x1e0000;
      uVar11 = ioremap(DAT_0001cddc,4);
      puVar2[0x39] = uVar11;
      uVar11 = ioremap(DAT_0001cde0,4);
      puVar2[0x3a] = uVar11;
      uVar11 = ioremap(DAT_0001cde4,4);
      puVar2[0x3b] = uVar11;
      uVar11 = ioremap(DAT_0001cde8,4);
      puVar2[0x3c] = uVar11;
      uVar11 = ioremap(DAT_0001cdec,4);
      puVar2[0x3d] = uVar11;
      iVar3 = mpi_allocator_alloc(puVar2[0x36],1,0x2800);
      if (iVar3 != 0) {
        iVar6 = mpi_buf_create(iVar3,0);
        puVar2[0x37] = iVar6;
        if (iVar6 != 0) {
          *(undefined4 *)(iVar6 + 4) = DAT_0001cdf0;
          dma_buf_put(iVar3);
          iVar6 = puVar2[0x37];
          uVar11 = get_dma_buf_phy_addr(iVar3);
          *(undefined4 *)(iVar6 + 0xe0) = uVar11;
          iVar6 = puVar2[0x37];
          uVar11 = dma_buf_vmap(iVar3);
          *(undefined4 *)(iVar6 + 0xdc) = uVar11;
          memset(*(void **)(puVar2[0x37] + 0xdc),0,0x2800);
          piVar10 = *(int **)(puVar2[0x37] + 0xdc);
          *piVar10 = *(int *)(puVar2[0x37] + 0xe0) + 0x800;
          piVar10[1] = 0x2000;
          dma_buf_end_cpu_access(*(undefined4 *)(puVar2[0x37] + 0x40),1);
          mcu_send_message(3,*(undefined4 *)(puVar2[0x37] + 0xe0));
        }
      }
      uVar11 = kstrdup(param_1,0xcc0);
      iVar6 = DAT_0001cdf8;
      iVar3 = DAT_0001cdf4;
      puVar2[0x29] = puVar2;
      puVar2[0x35] = 1;
      puVar2[0x34] = iVar3;
      *puVar2 = uVar11;
      mpi_dev_register(DAT_0001cdfc,8,param_1);
      puVar2[0x30] = iVar6;
      puVar2[0x31] = iVar6;
      puVar2[0x12] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x2f] = 0;
      mpi_sysfs_dev_add(iVar6 + -0xbc,iVar3 + 0x14);
      uVar7 = kthread_create_on_node(DAT_0001ce00,iVar6 + -0xc0,0xffffffff,param_1);
      if (uVar7 < 0xfffff001) {
        wake_up_process();
      }
      uVar11 = DAT_0001ce04;
      puVar2[0x32] = uVar7;
      mpi_fs_buf_init(uVar11,0x2000);
      iVar3 = *(int *)(puVar2[0x37] + 0xdc);
      puVar2[0x2e] = iVar3 + 0x800;
      puVar2[0x2d] = puVar2[0x2c];
      vlog(2,4,DAT_0001ce08,DAT_0001cdbc,0x18e,iVar3 + 0x40,puVar2[0x2c]);
      puVar2[0x3e] = 1;
      return;
    }
    uVar12 = 0x158;
    uVar8 = 2;
    uVar11 = 0;
    uVar9 = DAT_0001cdc8;
  }
  else {
    puVar2 = (undefined4 *)ioremap(DAT_0001cdb4,4);
    uVar8 = 4;
    uVar11 = *puVar2;
    uVar12 = 0x151;
    uVar9 = DAT_0001cdb8;
  }
  vlog(2,uVar8,uVar9,DAT_0001cdbc,uVar12,uVar11);
  return;
}



/* ===== vmcu_shutdown @ 0001ce0c size=14 ===== */

void vmcu_shutdown(void)

{
  *(undefined4 *)(DAT_0001ce1c + 0xcc) = 1;
  mpi_dev_unregister();
  return;
}



/* ===== vmcu_load @ 0001ce20 size=12 ===== */

undefined4 vmcu_load(void)

{
  vmcu_probe(DAT_0001ce2c);
  return 0;
}



/* ===== vsys_load @ 0001ce30 size=12 ===== */

undefined4 vsys_load(void)

{
  vsys_probe(DAT_0001ce3c);
  return 0;
}



/* ===== vpss_init @ 0001ce40 size=12 ===== */

undefined4 vpss_init(void)

{
  vpss_probe(DAT_0001ce4c);
  return 0;
}



/* ===== vrgn_init @ 0001ce50 size=12 ===== */

undefined4 vrgn_init(void)

{
  vrgn_probe(DAT_0001ce5c);
  return 0;
}



/* ===== valloc_init @ 0001ce60 size=6 ===== */

void valloc_init(void)

{
  valloc_probe(DAT_0001ce68);
  return;
}



/* ===== vrga_init @ 0001ce6c size=12 ===== */

undefined4 vrga_init(void)

{
  vrga_probe(DAT_0001ce78);
  return 0;
}



/* ===== vvi_init @ 0001ce7c size=12 ===== */

undefined4 vvi_init(void)

{
  vvi_probe(DAT_0001ce88);
  return 0;
}



/* ===== venc_init @ 0001ce8c size=30 ===== */

undefined4 venc_init(void)

{
  int iVar1;
  
  iVar1 = DAT_0001ceac;
  venc_probe(DAT_0001ceb0);
  vmpi_register_fn2vcocdec(iVar1 + 0x40,iVar1);
  register_vmpibuf_func_to_pp(iVar1);
  return 0;
}



/* ===== rockit_rkisp_init @ 0001ceb4 size=62 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 rockit_rkisp_init(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_20 [5];
  
  puVar1 = DAT_0001cef4;
  iVar3 = 0;
  piVar4 = aiStack_20;
  aiStack_20[1] = 0;
  aiStack_20[2] = 0;
  aiStack_20[3] = 0;
  uVar2 = rkisp_rockit_function_register(*DAT_0001cef4,0);
  *puVar1 = uVar2;
  rkisp_rockit_function_register(DAT_0001cef8,1);
  rkisp_rockit_get_ispdev(aiStack_20 + 1);
  do {
    piVar4 = piVar4 + 1;
    if (*piVar4 != 0) {
      rockit_rkisp_dev_register();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  return 0;
}



/* ===== avs_init @ 0001cefc size=12 ===== */

undefined4 avs_init(void)

{
  avs_dev_probe(DAT_0001cf08);
  return 0;
}



/* ===== rockit_rkcif_init @ 0001cf0c size=62 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 rockit_rkcif_init(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_20 [5];
  
  puVar1 = DAT_0001cf4c;
  iVar3 = 0;
  piVar4 = aiStack_20;
  aiStack_20[1] = 0;
  aiStack_20[2] = 0;
  aiStack_20[3] = 0;
  uVar2 = rkcif_rockit_function_register(*DAT_0001cf4c,0);
  *puVar1 = uVar2;
  rkcif_rockit_function_register(DAT_0001cf50,1);
  rkcif_rockit_get_cifdev(aiStack_20 + 1);
  do {
    piVar4 = piVar4 + 1;
    if (*piVar4 != 0) {
      rockit_rkcif_dev_register();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  return 0;
}



/* ===== rockit_load @ 0001cf54 size=96 ===== */

undefined4 rockit_load(void)

{
  int iVar1;
  
  printk(DAT_0001cfb4);
  mpi_init();
  valloc_init();
  vsys_load();
  vrga_init();
  venc_init();
  rockit_rkisp_init();
  rockit_rkcif_init();
  vvi_init();
  vpss_init();
  vrgn_init();
  avs_init();
  *DAT_0001cfb8 = 0;
  if (*DAT_0001cfbc != 0) {
    *DAT_0001cfc0 = DAT_0001cfc4;
    iVar1 = register_reboot_notifier();
    if (iVar1 != 0) {
      printk(DAT_0001cfc8);
    }
    vmcu_load();
  }
  printk(DAT_0001cfcc);
  return 0;
}



/* ===== vsys_exit @ 0001cfd0 size=4 ===== */

void vsys_exit(void)

{
  *(undefined4 *)(DAT_00014f28 + 0xb8) = 1;
  mpi_dev_unregister();
  return;
}



/* ===== vpss_exit @ 0001cfd4 size=4 ===== */

void vpss_exit(void)

{
  *(undefined4 *)(DAT_00015410 + 0xb8) = 1;
  mpi_dev_unregister();
  return;
}



/* ===== vrgn_exit @ 0001cfd8 size=4 ===== */

void vrgn_exit(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_00016524;
  puVar1 = (undefined4 *)(DAT_00016524 + 0xb4);
  *(undefined4 *)(DAT_00016524 + 0xb8) = 1;
  kthread_stop(*puVar1);
  mpi_dev_unregister(iVar2 + 4);
  return;
}



/* ===== valloc_exit @ 0001cfdc size=2 ===== */

void valloc_exit(void)

{
  return;
}



/* ===== vrga_exit @ 0001cfde size=4 ===== */

void vrga_exit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00017c4c;
  puVar1 = DAT_00017c4c + 0x32;
  DAT_00017c4c[0x2b] = 1;
  kthread_stop(*puVar1);
  mpi_dev_unregister(puVar2 + 2);
  kfree(*puVar2);
  return;
}



/* ===== vvi_exit @ 0001cfe2 size=4 ===== */

void vvi_exit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00018cb4;
  puVar2 = DAT_00018cb4 + 8;
  DAT_00018cb4[3] = 1;
  mpi_dev_unregister(puVar2);
  kfree(*puVar1);
  return;
}



/* ===== venc_exit @ 0001cfe6 size=18 ===== */

void venc_exit(void)

{
  vmpi_unregister_fn2vcocdec();
  unregister_vmpibuf_func_pp();
  venc_shutdown();
  return;
}



/* ===== rockit_rkisp_exit @ 0001cff8 size=50 ===== */

/* WARNING: Type propagation algorithm not settling */

void rockit_rkisp_exit(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int aiStack_20 [5];
  
  piVar3 = aiStack_20;
  aiStack_20[1] = 0;
  aiStack_20[2] = 0;
  aiStack_20[3] = 0;
  iVar1 = rkisp_rockit_get_ispdev(aiStack_20 + 1);
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      piVar3 = piVar3 + 1;
      if ((*piVar3 != 0) && (iVar2 = mpi_dev_find_by_name(), iVar2 != 0)) {
        mpi_dev_unregister();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
  }
  return;
}



/* ===== avs_exit @ 0001d02a size=4 ===== */

void avs_exit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_0001c104;
  puVar2 = DAT_0001c104 + 1;
  *DAT_0001c104 = 1;
  mpi_dev_unregister(puVar2);
  kfree(puVar1[0x2c]);
  return;
}



/* ===== rockit_rkcif_exit @ 0001d02e size=50 ===== */

/* WARNING: Type propagation algorithm not settling */

void rockit_rkcif_exit(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int aiStack_20 [5];
  
  piVar3 = aiStack_20;
  aiStack_20[1] = 0;
  aiStack_20[2] = 0;
  aiStack_20[3] = 0;
  iVar1 = rkcif_rockit_get_cifdev(aiStack_20 + 1);
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      piVar3 = piVar3 + 1;
      if ((*piVar3 != 0) && (iVar2 = mpi_dev_find_by_name(), iVar2 != 0)) {
        mpi_dev_unregister();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
  }
  return;
}



/* ===== vmcu_exit @ 0001d060 size=4 ===== */

void vmcu_exit(void)

{
  *(undefined4 *)(DAT_0001ce1c + 0xcc) = 1;
  mpi_dev_unregister();
  return;
}



/* ===== rockit_exit @ 0001d064 size=62 ===== */

void rockit_exit(void)

{
  avs_exit();
  vrgn_exit();
  vpss_exit();
  vvi_exit();
  rockit_rkisp_exit();
  rockit_rkcif_exit();
  venc_exit();
  vrga_exit();
  vsys_exit();
  valloc_exit();
  mpi_deinit();
  if (*DAT_0001d0a4 != 0) {
    vmcu_exit();
    return;
  }
  return;
}



/* ===== reboot_notifier_callback @ 0001d0a8 size=20 ===== */

undefined4 reboot_notifier_callback(void)

{
  printk(DAT_0001d0bc);
  vsys_close();
  mcu_reset();
  return 0;
}



/* ===== vmcu_callback @ 0001d0c0 size=4 ===== */

undefined4 vmcu_callback(void)

{
  vmcu_probe(DAT_0001ce2c);
  return 0;
}



/* ===== <EXTERNAL>::filp_open @ 00034000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void filp_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00034004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alloc_chrdev_region @ 00034008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void alloc_chrdev_region(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkisp_rockit_get_ispdev @ 00034010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkisp_rockit_get_ispdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__class_create @ 00034014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __class_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_find @ 00034018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_vmap @ 00034020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_vmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ktime_get_ts64 @ 00034024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ktime_get_ts64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dma_heap_buffer_alloc @ 00034028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dma_heap_buffer_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_end_cpu_access @ 0003402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_end_cpu_access(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00034030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::device_unregister @ 0003403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void device_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_swait_queue_head @ 00034040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_swait_queue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::class_destroy @ 00034044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void class_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkcif_rockit_resume_stream @ 00034048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkcif_rockit_resume_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_replace @ 0003404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_replace(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::up @ 00034050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkcif_rockit_pause_stream @ 00034054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkcif_rockit_pause_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00034058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 0003405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free_contig_range @ 00034060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void free_contig_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_should_stop @ 00034064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_should_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__wake_up @ 00034068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0003406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_create @ 00034070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_attach @ 00034074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_attach(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vmpi_register_fn2vcocdec @ 00034078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vmpi_register_fn2vcocdec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::class_create_file_ns @ 0003407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void class_create_file_ns(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wake_up_process @ 00034080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wake_up_process(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkisp_rockit_free_tb_stream_buf @ 00034084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkisp_rockit_free_tb_stream_buf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion_interruptible_timeout @ 00034088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion_interruptible_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unregister_vmpibuf_func_pp @ 0003408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void unregister_vmpibuf_func_pp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkcif_rockit_config_stream @ 00034090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkcif_rockit_config_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00034094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkcif_rockit_function_register @ 00034098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkcif_rockit_function_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::register_reboot_notifier @ 0003409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void register_reboot_notifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dma_heap_find @ 000340a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dma_heap_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep_range @ 000340a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usleep_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_map_attachment @ 000340a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_map_attachment(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 000340ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkisp_rockit_function_register @ 000340b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkisp_rockit_function_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dma_heap_set_dev @ 000340b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dma_heap_set_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cdev_add @ 000340b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cdev_add(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_remove @ 000340bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_remove(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 000340c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_unmap_attachment @ 000340c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_unmap_attachment(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::synchronize_rcu @ 000340c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void synchronize_rcu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_alloc @ 000340d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::down @ 000340d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void down(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 000340d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_free @ 000340dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_get @ 000340e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkisp_rockit_resume_stream @ 000340e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkisp_rockit_resume_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::set_normalized_timespec64 @ 000340e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void set_normalized_timespec64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000340ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 000340f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_put @ 000340f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_fd @ 000340f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::register_vmpibuf_func_to_pp @ 000340fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void register_vmpibuf_func_to_pp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioremap @ 00034100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ioremap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkcif_rockit_get_cifdev @ 00034104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkcif_rockit_get_cifdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_stop @ 0003410c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 00034110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkisp_rockit_config_stream @ 00034114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkisp_rockit_config_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vepu_pp_control @ 00034118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vepu_pp_control(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003411c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kernel_read @ 00034120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kernel_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion @ 00034128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0003412c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 00034130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_vunmap @ 00034134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_vunmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::complete_all @ 00034138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void complete_all(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kasprintf @ 0003413c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kasprintf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00034140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_to_user @ 00034144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_to_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_create_on_node @ 0003414c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_create_on_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kstrdup @ 00034150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kstrdup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::device_create_with_groups @ 00034154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void device_create_with_groups(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::call_rcu @ 00034158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void call_rcu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkisp_rockit_get_tb_stream_info @ 0003415c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkisp_rockit_get_tb_stream_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unregister_chrdev_region @ 00034160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void unregister_chrdev_region(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 00034164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_from_user @ 00034168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_from_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::div_s64_rem @ 0003416c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void div_s64_rem(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_next @ 00034174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vepu_pp_destroy_chn @ 00034178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vepu_pp_destroy_chn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 0003417c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vmpi_unregister_fn2vcocdec @ 00034180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vmpi_unregister_fn2vcocdec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rga_mpi_commit @ 00034184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rga_mpi_commit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_detach @ 00034188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_detach(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vepu_pp_create_chn @ 0003418c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vepu_pp_create_chn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00034190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_vcodec_clear_buf_resource @ 00034198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_vcodec_clear_buf_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rkisp_rockit_pause_stream @ 000341a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rkisp_rockit_pause_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 000341a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::msleep @ 000341a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void msleep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cdev_init @ 000341ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cdev_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 000341b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::class_remove_file_ns @ 000341b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void class_remove_file_ns(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


