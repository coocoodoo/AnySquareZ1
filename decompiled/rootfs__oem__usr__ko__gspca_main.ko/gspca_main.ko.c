// gspca_main.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== alt_xfer @ 00010198 size=58 ===== */

int alt_xfer(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((int)(uint)*(byte *)(param_1 + 4) <= iVar2) {
      return 0;
    }
    iVar1 = iVar2 * 0x38 + *(int *)(param_1 + 0x14);
    if ((((*(byte *)(iVar1 + 3) & 3) == param_2) && (*(short *)(iVar1 + 4) != 0)) &&
       ((*(byte *)(iVar1 + 2) & 0x80) != 0)) {
      if ((int)param_3 < 0) {
        return iVar1;
      }
      if (*(byte *)(iVar1 + 2) == param_3) {
        return iVar1;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



/* ===== vidioc_g_input @ 000101d2 size=6 ===== */

void vidioc_g_input(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  return;
}



/* ===== vidioc_s_input @ 000101d8 size=12 ===== */

undefined4 vidioc_s_input(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== gspca_queue_setup @ 000101e4 size=46 ===== */

undefined4 gspca_queue_setup(int param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x488) + 0xfffU & 0xfffff000;
  if (*param_3 == 0) {
    *param_3 = 1;
    *param_4 = uVar2;
    uVar1 = 0;
  }
  else if (*param_4 < uVar2) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== gspca_buffer_finish @ 00010212 size=30 ===== */

void gspca_buffer_finish(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x28);
  if (*(int *)(*(int *)(iVar1 + 0x3d0) + 0x2c) != 0) {
    *(undefined4 *)(iVar1 + 0x688) = 0;
    if (*(char *)(iVar1 + 0x68f) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001022c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(iVar1 + 0x3d0) + 0x2c))();
      return;
    }
  }
  return;
}



/* ===== gspca_buffer_queue @ 00010230 size=38 ===== */

void gspca_buffer_queue(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x28);
  disableIRQinterrupts();
  piVar1 = *(int **)(iVar2 + 0x670);
  *(int **)(iVar2 + 0x670) = param_1 + 0xa0;
  param_1[0xa0] = iVar2 + 0x66c;
  param_1[0xa1] = (int)piVar1;
  *piVar1 = (int)(param_1 + 0xa0);
  return;
}



/* ===== which_bandwidth @ 00010256 size=138 ===== */

void which_bandwidth(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 auStack_e0 [12];
  undefined4 local_d4;
  int iStack_d0;
  int local_14;
  
  piVar1 = DAT_000102e0;
  uVar5 = *(uint *)(param_1 + 0x488);
  local_14 = *DAT_000102e0;
  if ((*(char *)(param_1 + 0x3cd) == '\0') &&
     (uVar3 = *(int *)(param_1 + 0x474) * *(int *)(param_1 + 0x478),
     uVar5 <= uVar3 && uVar3 - uVar5 != 0)) {
    uVar5 = uVar5 * 3 >> 3;
  }
  pcVar4 = *(code **)(*(int *)(param_1 + 0x3d0) + 0x38);
  if (pcVar4 == (code *)0x0) {
    if ((*(uint *)(param_1 + 0x474) < 0x280) || (*(int *)(*(int *)(param_1 + 0x370) + 0x1c) != 2)) {
      iVar2 = uVar5 * 0x1e;
    }
    else {
      iVar2 = uVar5 * 0xf;
    }
  }
  else {
    (*pcVar4)(param_1,auStack_e0);
    iVar2 = __aeabi_uidiv(uVar5 * iStack_d0,local_d4);
  }
  if (2 < *DAT_000102e4) {
    printk(DAT_000102e8,param_1 + 0x32c,iVar2);
  }
  if (local_14 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}



/* ===== gspca_buffer_prepare @ 000102ec size=52 ===== */

undefined4
gspca_buffer_prepare(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(int *)(*(int *)(*param_1 + 0x28) + 0x488) + 0xfffU & 0xfffff000;
  uVar2 = 0;
  if (param_1[4] != 0) {
    uVar2 = param_1[0x16];
  }
  if (uVar2 < uVar3) {
    printk(DAT_00010320,*(int *)(*param_1 + 0x28) + 0x32c,uVar2,uVar3,param_4);
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== gspca_frame_add @ 00010324 size=316 ===== */

void gspca_frame_add(void *param_1,int param_2,void *param_3,size_t param_4)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  uint in_cpsr;
  undefined8 uVar9;
  size_t sVar10;
  
  piVar1 = DAT_00010460;
  pvVar2 = param_1;
  sVar10 = param_4;
  if (4 < *DAT_00010460) {
    pvVar2 = (void *)printk(DAT_00010464,(int)param_1 + 0x32c,param_2,param_4,param_4);
  }
  disableIRQinterrupts();
  if (*(int *)((int)param_1 + 0x66c) == (int)param_1 + 0x66c) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((int)param_1 + 0x66c) + -0x280;
  }
  bVar8 = (in_cpsr >> 0x1b & 1) != 0;
  if (param_2 == 1) {
    if (iVar7 == 0) {
      *(undefined1 *)((int)param_1 + 0x470) = 0;
      *(int *)((int)param_1 + 0x4a4) = *(int *)((int)param_1 + 0x4a4) + 1;
      return;
    }
    pvVar2 = (void *)vb2_plane_vaddr(iVar7,0);
    *(undefined4 *)((int)param_1 + 0x46c) = 0;
    *(void **)((int)param_1 + 0x468) = pvVar2;
  }
  else {
    if (*(char *)((int)param_1 + 0x470) == '\0') {
      if (param_2 != 3) {
        return;
      }
      *(undefined1 *)((int)param_1 + 0x470) = 3;
      goto LAB_000103d2;
    }
    if (*(char *)((int)param_1 + 0x470) == '\x03') {
      return;
    }
  }
  if (0 < (int)param_4) {
    uVar3 = *(int *)((int)param_1 + 0x46c) + param_4;
    uVar5 = *(int *)((int)param_1 + 0x488) + 0xfffU & 0xfffff000;
    if (uVar5 < uVar3) {
      printk(DAT_00010468,(int)param_1 + 0x32c,uVar3,uVar5,sVar10);
      *(undefined1 *)((int)param_1 + 0x470) = 0;
      return;
    }
    pvVar2 = memcpy((void *)(*(int *)((int)param_1 + 0x46c) + *(int *)((int)param_1 + 0x468)),
                    param_3,param_4);
    *(size_t *)((int)param_1 + 0x46c) = *(int *)((int)param_1 + 0x46c) + param_4;
  }
  *(char *)((int)param_1 + 0x470) = (char)param_2;
  if (param_2 != 3) {
    return;
  }
  disableIRQinterrupts();
  iVar4 = *(int *)(iVar7 + 0x280);
  piVar6 = *(int **)(iVar7 + 0x284);
  *(int **)(iVar4 + 4) = piVar6;
  *piVar6 = iVar4;
  *(undefined4 *)(iVar7 + 0x280) = 0x100;
  *(undefined4 *)(iVar7 + 0x284) = 0x122;
  uVar9 = ktime_get(pvVar2,(uint)(bVar8 | 0xc) << 0x1b);
  *(undefined8 *)(iVar7 + 0x18) = uVar9;
  if (*(int *)(iVar7 + 0x10) != 0) {
    *(undefined4 *)(iVar7 + 0x54) = *(undefined4 *)((int)param_1 + 0x46c);
  }
  iVar4 = *(int *)((int)param_1 + 0x4a4);
  *(int *)((int)param_1 + 0x4a4) = iVar4 + 1;
  *(int *)(iVar7 + 0x170) = iVar4;
  *(undefined4 *)(iVar7 + 0x15c) = 1;
  if (3 < *piVar1) {
    printk(DAT_0001046c,(int)param_1 + 0x32c,*(undefined4 *)((int)param_1 + 0x46c),*piVar1,sVar10);
  }
  vb2_buffer_done(iVar7,5);
LAB_000103d2:
  *(undefined4 *)((int)param_1 + 0x468) = 0;
  *(undefined4 *)((int)param_1 + 0x46c) = 0;
  return;
}



/* ===== gspca_release @ 00010470 size=40 ===== */

void gspca_release(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  
  v4l2_ctrl_handler_free(*(undefined4 *)(param_1 + -0x88));
  v4l2_device_unregister(param_1);
  kfree(*(undefined4 *)(param_1 + 0x134));
  kfree(param_1 + -0x31c,extraout_r1,extraout_r2,param_4);
  return;
}



/* ===== destroy_urbs @ 00010498 size=102 ===== */

void destroy_urbs(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar2 = DAT_00010500;
  if (2 < *DAT_00010500) {
    printk(DAT_00010504,param_1 + 0x32c);
  }
  piVar1 = (int *)(param_1 + 0x454);
  piVar4 = piVar1;
  do {
    piVar5 = piVar4 + 1;
    usb_kill_urb(*piVar4);
    piVar4 = piVar5;
  } while (piVar5 != (int *)(param_1 + 0x464));
  if (2 < *piVar2) {
    printk(DAT_00010508,param_1 + 0x32c);
  }
  do {
    piVar2 = piVar1 + 1;
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      *piVar1 = 0;
      usb_free_coherent(*(undefined4 *)(param_1 + 0x370),*(undefined4 *)(iVar3 + 0x54),
                        *(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x44));
      usb_free_urb(iVar3);
    }
    piVar1 = piVar2;
  } while (piVar2 != (int *)(param_1 + 0x464));
  return;
}



/* ===== gspca_input_destroy_urb @ 0001050c size=48 ===== */

void gspca_input_destroy_urb(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x464);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x464) = 0;
    usb_kill_urb(iVar1);
    usb_free_coherent(*(undefined4 *)(param_1 + 0x370),*(undefined4 *)(iVar1 + 0x54),
                      *(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44));
    usb_free_urb(iVar1);
    return;
  }
  return;
}



/* ===== bulk_irq @ 0001053c size=130 ===== */

void bulk_irq(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_000105c0;
  iVar2 = *(int *)(param_1 + 0x74);
  if (4 < *DAT_000105c0) {
    printk(DAT_000105c4,iVar2 + 0x32c);
  }
  if ((*(char *)(iVar2 + 0x472) != '\0') && (*(int *)(param_1 + 0x38) != -0x6c)) {
    if (*(int *)(param_1 + 0x38) == 0) {
      if (4 < *piVar1) {
        printk(DAT_000105d0,iVar2 + 0x32c,*(undefined4 *)(param_1 + 0x58));
      }
      (**(code **)(*(int *)(iVar2 + 0x3d0) + 0x18))
                (iVar2,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      if (*(char *)(iVar2 + 0x68e) != '\0') {
        return;
      }
      printk(DAT_000105c8,iVar2 + 0x32c);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    if (((*(char *)(iVar2 + 0x472) != '\0') && (*(char *)(iVar2 + 0x3ca) != '\0')) &&
       (iVar2 = usb_submit_urb(param_1,0xa20), iVar2 < 0)) {
      printk(DAT_000105cc);
      return;
    }
  }
  return;
}



/* ===== isoc_irq @ 000105d4 size=236 ===== */

void isoc_irq(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = DAT_000106c0;
  iVar4 = *(int *)(param_1 + 0x74);
  if (4 < *DAT_000106c0) {
    printk(DAT_000106c4,iVar4 + 0x32c);
  }
  uVar2 = DAT_000106d4;
  if (*(char *)(iVar4 + 0x472) != '\0') {
    iVar5 = *(int *)(param_1 + 0x38);
    if (iVar5 == 0) {
      pcVar3 = *(code **)(*(int *)(iVar4 + 0x3d0) + 0x18);
      iVar6 = param_1;
      for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x68); iVar5 = iVar5 + 1) {
        iVar7 = *(int *)(iVar6 + 0x84);
        if (*(int *)(iVar6 + 0x88) == 0) {
          if (iVar7 == 0) {
            if (*(char *)(iVar4 + 0x471) == '\0') {
              *(undefined1 *)(iVar4 + 0x471) = 1;
            }
          }
          else {
            if (4 < *piVar1) {
              printk(DAT_000106d0,iVar4 + 0x32c,iVar5,*(undefined4 *)(iVar6 + 0x7c),iVar7);
            }
            (*pcVar3)(iVar4,*(int *)(param_1 + 0x40) + *(int *)(iVar6 + 0x7c),iVar7);
          }
        }
        else {
          if (4 < *piVar1) {
            printk(uVar2,iVar4 + 0x32c,iVar5,iVar7,*(int *)(iVar6 + 0x88));
          }
          *(undefined1 *)(iVar4 + 0x470) = 0;
        }
        iVar6 = iVar6 + 0x10;
      }
    }
    else {
      if (iVar5 == -0x6c) {
        return;
      }
      if (*(char *)(iVar4 + 0x68e) != '\0') {
        return;
      }
      printk(DAT_000106c8,iVar4 + 0x32c,iVar5);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    if ((*(char *)(iVar4 + 0x472) != '\0') && (iVar4 = usb_submit_urb(param_1,0xa20), iVar4 < 0)) {
      printk(DAT_000106cc);
      return;
    }
  }
  return;
}



/* ===== int_irq @ 000106d8 size=106 ===== */

void int_irq(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x74);
  if (iVar1 == -0x13) {
    return;
  }
  if (iVar1 < -0x12) {
    if (iVar1 == -0x6c) {
      return;
    }
    if (iVar1 == -0x68) {
      return;
    }
  }
  else {
    if (iVar1 == -2) {
      return;
    }
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)(iVar2 + 0x3d0) + 0x48))
                        (iVar2,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x58));
      if (iVar1 < 0) {
        printk(DAT_00010748,iVar2 + 0x32c);
      }
      goto LAB_00010728;
    }
  }
  printk(DAT_00010744,iVar2 + 0x32c);
  *(undefined4 *)(param_1 + 0x38) = 0;
LAB_00010728:
  iVar1 = usb_submit_urb(param_1,0xa20);
  if (-1 < iVar1) {
    return;
  }
  printk(DAT_0001074c);
  return;
}



/* ===== video_drvdata @ 00010750 size=12 ===== */

undefined4 video_drvdata(void)

{
  int iVar1;
  
  iVar1 = video_devdata();
  return *(undefined4 *)(iVar1 + 0x130);
}



/* ===== vidioc_enum_frameintervals @ 0001075c size=126 ===== */

undefined4 vidioc_enum_frameintervals(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = video_drvdata();
  iVar4 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(iVar1 + 0x3c8) <= iVar4) {
      return 0xffffffea;
    }
    iVar3 = *(int *)(iVar1 + 0x3b8) + iVar4 * 0x30;
    if (((param_3[2] == *(int *)(*(int *)(iVar1 + 0x3b8) + iVar4 * 0x30)) &&
        (param_3[3] == *(int *)(iVar3 + 4))) && (param_3[1] == *(int *)(iVar3 + 8))) break;
    iVar4 = iVar4 + 1;
  }
  if (*(int *)(iVar1 + 0x3bc) == 0) {
    return 0xffffffea;
  }
  iVar3 = *(int *)(*(int *)(iVar1 + 0x3bc) + iVar4 * 8 + 4);
  if (iVar3 == 0) {
    return 0xffffffea;
  }
  iVar2 = 0;
  do {
    if (*param_3 == iVar2) {
      param_3[4] = 1;
      param_3[5] = 1;
      param_3[6] = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x3bc) + iVar4 * 8) + *param_3);
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar3 != iVar2);
  return 0xffffffea;
}



/* ===== vidioc_enum_framesizes @ 000107da size=106 ===== */

undefined4 vidioc_enum_framesizes(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  
  iVar1 = video_drvdata();
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 0x3d0) + 0x44);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar1,param_3);
    return uVar2;
  }
  iVar4 = 0;
  iVar5 = 0;
  do {
    if ((int)(uint)*(byte *)(iVar1 + 0x3c8) <= iVar4) {
      return 0xffffffea;
    }
    iVar3 = iVar4 * 0x30;
    if (param_3[1] == *(int *)(*(int *)(iVar1 + 0x3b8) + iVar3 + 8)) {
      if (*param_3 == iVar5) {
        param_3[2] = 1;
        param_3[3] = *(int *)(*(int *)(iVar1 + 0x3b8) + iVar3);
        param_3[4] = *(int *)(*(int *)(iVar1 + 0x3b8) + iVar3 + 4);
        return 0;
      }
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



/* ===== vidioc_s_parm @ 00010844 size=58 ===== */

undefined4 vidioc_s_parm(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_drvdata();
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar1 + 0x4e4);
  if (*(int *)(*(int *)(iVar1 + 0x3d0) + 0x3c) == 0) {
    *(undefined4 *)(param_3 + 4) = 0;
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_3 + 4) = 0x1000;
    *(undefined4 *)(iVar1 + 0x688) = 0;
    (**(code **)(*(int *)(iVar1 + 0x3d0) + 0x3c))(iVar1,param_3);
    uVar2 = *(undefined4 *)(iVar1 + 0x688);
  }
  return uVar2;
}



/* ===== vidioc_g_parm @ 0001087e size=56 ===== */

undefined4 vidioc_g_parm(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_drvdata();
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar1 + 0x4e4);
  if (*(int *)(*(int *)(iVar1 + 0x3d0) + 0x38) == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_3 + 4) = 0x1000;
    *(undefined4 *)(iVar1 + 0x688) = 0;
    (**(code **)(*(int *)(iVar1 + 0x3d0) + 0x38))(iVar1,param_3);
    uVar2 = *(undefined4 *)(iVar1 + 0x688);
  }
  return uVar2;
}



/* ===== vidioc_s_jpegcomp @ 000108b6 size=28 ===== */

void vidioc_s_jpegcomp(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = video_drvdata();
  *(undefined4 *)(iVar1 + 0x688) = 0;
                    /* WARNING: Could not recover jumptable at 0x000108d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 0x3d0) + 0x34))(iVar1,param_3);
  return;
}



/* ===== vidioc_g_jpegcomp @ 000108d2 size=28 ===== */

void vidioc_g_jpegcomp(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = video_drvdata();
  *(undefined4 *)(iVar1 + 0x688) = 0;
                    /* WARNING: Could not recover jumptable at 0x000108ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 0x3d0) + 0x30))(iVar1,param_3);
  return;
}



/* ===== vidioc_g_fmt_vid_cap @ 000108ee size=38 ===== */

undefined4 vidioc_g_fmt_vid_cap(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = video_drvdata();
  uVar5 = *(undefined4 *)(param_3 + 0x20);
  uVar2 = *(undefined4 *)(iVar1 + 0x478);
  uVar3 = *(undefined4 *)(iVar1 + 0x47c);
  uVar4 = *(undefined4 *)(iVar1 + 0x480);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(iVar1 + 0x474);
  *(undefined4 *)(param_3 + 8) = uVar2;
  *(undefined4 *)(param_3 + 0xc) = uVar3;
  *(undefined4 *)(param_3 + 0x10) = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x488);
  uVar3 = *(undefined4 *)(iVar1 + 0x48c);
  uVar4 = *(undefined4 *)(iVar1 + 0x490);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar1 + 0x484);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  *(undefined4 *)(param_3 + 0x1c) = uVar3;
  *(undefined4 *)(param_3 + 0x20) = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x498);
  uVar3 = *(undefined4 *)(iVar1 + 0x49c);
  uVar4 = *(undefined4 *)(iVar1 + 0x4a0);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(iVar1 + 0x494);
  *(undefined4 *)(param_3 + 0x28) = uVar2;
  *(undefined4 *)(param_3 + 0x2c) = uVar3;
  *(undefined4 *)(param_3 + 0x30) = uVar4;
  *(undefined4 *)(param_3 + 0x20) = uVar5;
  return 0;
}



/* ===== vidioc_enum_fmt_vid_cap @ 00010914 size=90 ===== */

undefined4 vidioc_enum_fmt_vid_cap(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int aiStack_38 [9];
  
  iVar1 = video_drvdata();
  iVar4 = 0;
  uVar2 = (uint)*(byte *)(iVar1 + 0x3c8);
  while( true ) {
    do {
      bVar7 = uVar2 == 0;
      uVar2 = uVar2 - 1;
      if (bVar7) {
        return 0xffffffea;
      }
      iVar6 = 0;
      iVar5 = *(int *)(uVar2 * 0x30 + *(int *)(iVar1 + 0x3b8) + 8);
      aiStack_38[iVar4] = iVar5;
      piVar3 = aiStack_38;
      while (iVar5 != *piVar3) {
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 1;
      }
    } while (iVar6 != iVar4);
    if (*param_3 == iVar4) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 8) {
      return 0xffffffea;
    }
  }
  param_3[0xb] = iVar5;
  return 0;
}



/* ===== vidioc_enum_input @ 0001096e size=46 ===== */

undefined4 vidioc_enum_input(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_drvdata();
  if (*param_3 == 0) {
    param_3[9] = 2;
    param_3[0xe] = *(int *)(iVar1 + 0x3c4);
    strscpy(param_3 + 1,**(undefined4 **)(iVar1 + 0x3d0),0x20,*(undefined4 **)(iVar1 + 0x3d0),
            param_4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== gspca_disconnect @ 0001099c size=114 ===== */

void gspca_disconnect(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if (0 < *DAT_00010a10) {
    iVar1 = *(int *)(iVar2 + 0x11c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar2 + 0xf0);
    }
    printk(DAT_00010a14,iVar2 + 0x32c,iVar1);
  }
  mutex_lock(iVar2 + 0x67c);
  *(undefined1 *)(iVar2 + 0x68f) = 0;
  destroy_urbs(iVar2);
  gspca_input_destroy_urb(iVar2);
  vb2_queue_error(iVar2 + 0x4a8);
  if (*(int *)(iVar2 + 0x374) != 0) {
    *(undefined4 *)(iVar2 + 0x374) = 0;
    input_unregister_device();
  }
  v4l2_device_disconnect(iVar2 + 0x31c);
  video_unregister_device(iVar2);
  mutex_unlock(iVar2 + 0x67c);
  v4l2_device_put(iVar2 + 0x31c);
  return;
}



/* ===== gspca_set_alt0.part.0 @ 00010a18 size=32 ===== */

int gspca_set_alt0_part_0(int param_1)

{
  int iVar1;
  
  iVar1 = usb_set_interface(*(undefined4 *)(param_1 + 0x370),*(undefined1 *)(param_1 + 0x691),0);
  if (iVar1 < 0) {
    printk(DAT_00010a38,iVar1);
  }
  return iVar1;
}



/* ===== gspca_suspend @ 00010a3c size=92 ===== */

undefined4 gspca_suspend(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x60);
  gspca_input_destroy_urb(iVar2);
  if ((int)((uint)*(byte *)(iVar2 + 0x640) << 0x1e) < 0) {
    mutex_lock(iVar2 + 0x67c);
    *(undefined1 *)(iVar2 + 0x68e) = 1;
    *(undefined4 *)(iVar2 + 0x688) = 0;
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x3d0) + 0x24);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    destroy_urbs(iVar2);
    if (*(char *)(iVar2 + 0x692) != '\0') {
      gspca_set_alt0_part_0(iVar2);
    }
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x3d0) + 0x28);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    mutex_unlock(iVar2 + 0x67c);
  }
  return 0;
}



/* ===== try_fmt_vid_cap @ 00010a98 size=298 ===== */

uint try_fmt_vid_cap(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  uVar6 = *(uint *)(param_2 + 0xc);
  uVar14 = *(uint *)(param_2 + 4);
  uVar13 = *(uint *)(param_2 + 8);
  if ((uVar6 >> 0x18) - 0x30 < 0x4b) {
    if (1 < *DAT_00010bc4) {
      printk(DAT_00010bcc,param_1 + 0x32c,DAT_00010bc8,uVar6 & 0xff,(uVar6 & 0xffff) >> 8,
             (uVar6 & 0xffffff) >> 0x10,uVar6 >> 0x18,uVar14,uVar13);
    }
  }
  else if (1 < *DAT_00010bc4) {
    printk(DAT_00010bd0,param_1 + 0x32c,DAT_00010bc8,uVar6,uVar14,uVar13);
  }
  uVar12 = (uint)*(byte *)(param_1 + 0x3c8);
  uVar9 = *(uint *)(param_2 + 0xc);
  iVar7 = *(int *)(param_1 + 0x3b8);
  uVar6 = uVar12;
  do {
    bVar16 = uVar6 == 0;
    uVar6 = uVar6 - 1;
    if (bVar16) {
      uVar6 = uVar12;
      goto LAB_00010af6;
    }
    iVar1 = iVar7 + uVar6 * 0x30;
  } while ((uVar14 < *(uint *)(iVar7 + uVar6 * 0x30)) ||
          ((uVar13 < *(uint *)(iVar1 + 4) || (uVar9 != *(uint *)(iVar1 + 8)))));
  goto LAB_00010b3e;
  while ((uVar14 < *(uint *)(iVar7 + uVar6 * 0x30) || (uVar13 < *(uint *)(iVar7 + 4 + uVar6 * 0x30))
         )) {
LAB_00010af6:
    uVar6 = uVar6 - 1;
    if ((int)uVar6 < 1) break;
  }
LAB_00010b3e:
  uVar11 = uVar6;
  if (uVar9 != *(uint *)(uVar6 * 0x30 + iVar7 + 8)) {
    uVar3 = uVar6;
    uVar5 = uVar6;
    do {
      if ((((int)uVar12 <= (int)uVar5) && (uVar11 = uVar6, (int)uVar3 < 0)) ||
         ((uVar3 = uVar3 - 1, -1 < (int)uVar3 &&
          (uVar11 = uVar3, uVar9 == *(uint *)(iVar7 + 8 + uVar3 * 0x30))))) goto LAB_00010b5a;
      uVar5 = uVar5 + 1;
    } while (((int)uVar12 <= (int)uVar5) ||
            (uVar15 = *(uint *)(iVar7 + 8 + uVar5 * 0x30), uVar9 != uVar15));
    uVar11 = uVar6 & (int)uVar5 >> 0x20;
    if (uVar9 < uVar15) {
      uVar11 = uVar5;
    }
  }
LAB_00010b5a:
  puVar10 = (undefined4 *)(uVar11 * 0x30 + iVar7);
  uVar2 = puVar10[1];
  uVar4 = puVar10[2];
  uVar8 = puVar10[3];
  *(undefined4 *)(param_2 + 4) = *puVar10;
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = uVar4;
  *(undefined4 *)(param_2 + 0x10) = uVar8;
  uVar2 = puVar10[5];
  uVar4 = puVar10[6];
  uVar8 = puVar10[7];
  *(undefined4 *)(param_2 + 0x14) = puVar10[4];
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  *(undefined4 *)(param_2 + 0x1c) = uVar4;
  *(undefined4 *)(param_2 + 0x20) = uVar8;
  uVar2 = puVar10[9];
  uVar4 = puVar10[10];
  uVar8 = puVar10[0xb];
  *(undefined4 *)(param_2 + 0x24) = puVar10[8];
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar4;
  *(undefined4 *)(param_2 + 0x30) = uVar8;
  if (*(int *)(*(int *)(param_1 + 0x3d0) + 0x40) != 0) {
    *(uint *)(param_2 + 4) = uVar14;
    *(uint *)(param_2 + 8) = uVar13;
    (**(code **)(*(int *)(param_1 + 0x3d0) + 0x40))(param_1,param_2);
  }
  return uVar11;
}



/* ===== vidioc_try_fmt_vid_cap @ 00010bd4 size=30 ===== */

undefined4 vidioc_try_fmt_vid_cap(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = video_drvdata();
  uVar3 = *(undefined4 *)(param_3 + 0x20);
  iVar2 = try_fmt_vid_cap(uVar1,param_3);
  if (iVar2 < 0) {
    uVar1 = 0xffffffea;
  }
  else {
    *(undefined4 *)(param_3 + 0x20) = uVar3;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== vidioc_s_fmt_vid_cap @ 00010bf2 size=92 ===== */

undefined4 vidioc_s_fmt_vid_cap(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  iVar1 = video_drvdata();
  uVar7 = *(undefined4 *)(param_3 + 0x20);
  if (*(int *)(iVar1 + 0x61c) == 0) {
    iVar2 = try_fmt_vid_cap(iVar1,param_3);
    if (iVar2 < 0) {
      uVar3 = 0xffffffea;
    }
    else {
      *(char *)(iVar1 + 0x473) = (char)iVar2;
      if (*(int *)(*(int *)(iVar1 + 0x3d0) + 0x40) == 0) {
        puVar6 = (undefined4 *)(iVar2 * 0x30 + *(int *)(iVar1 + 0x3b8));
      }
      else {
        puVar6 = (undefined4 *)(param_3 + 4);
      }
      uVar3 = puVar6[1];
      uVar4 = puVar6[2];
      uVar5 = puVar6[3];
      *(undefined4 *)(iVar1 + 0x474) = *puVar6;
      *(undefined4 *)(iVar1 + 0x478) = uVar3;
      *(undefined4 *)(iVar1 + 0x47c) = uVar4;
      *(undefined4 *)(iVar1 + 0x480) = uVar5;
      uVar3 = puVar6[5];
      uVar4 = puVar6[6];
      uVar5 = puVar6[7];
      *(undefined4 *)(iVar1 + 0x484) = puVar6[4];
      *(undefined4 *)(iVar1 + 0x488) = uVar3;
      *(undefined4 *)(iVar1 + 0x48c) = uVar4;
      *(undefined4 *)(iVar1 + 0x490) = uVar5;
      uVar3 = puVar6[9];
      uVar4 = puVar6[10];
      uVar5 = puVar6[0xb];
      *(undefined4 *)(iVar1 + 0x494) = puVar6[8];
      *(undefined4 *)(iVar1 + 0x498) = uVar3;
      *(undefined4 *)(iVar1 + 0x49c) = uVar4;
      *(undefined4 *)(iVar1 + 0x4a0) = uVar5;
      uVar3 = 0;
      *(undefined4 *)(param_3 + 0x20) = uVar7;
    }
  }
  else {
    uVar3 = 0xfffffff0;
  }
  return uVar3;
}



/* ===== gspca_input_create_urb @ 00010c4e size=282 ===== */

void gspca_input_create_urb(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x3d0) + 0x48);
  if (iVar3 != 0) {
    iVar3 = usb_ifnum_to_if(*(undefined4 *)(param_1 + 0x370),*(undefined1 *)(param_1 + 0x691),
                            param_3,iVar3,param_1,param_2,param_3);
    for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(*(int *)(iVar3 + 4) + 4); iVar4 = iVar4 + 1) {
      iVar8 = iVar4 * 0x38 + *(int *)(*(int *)(iVar3 + 4) + 0x14);
      if (((int)((uint)*(byte *)(iVar8 + 2) << 0x18) < 0) && ((*(byte *)(iVar8 + 3) & 3) == 3)) {
        uVar7 = (uint)*(ushort *)(iVar8 + 4);
        uVar5 = (uint)*(byte *)(iVar8 + 6);
        if (1 < *DAT_00010d68) {
          printk(DAT_00010d6c,param_1 + 0x32c,*(byte *)(iVar8 + 2),uVar7,uVar5);
        }
        piVar6 = *(int **)(param_1 + 0x370);
        iVar3 = usb_alloc_urb(0,0xcc0);
        if (iVar3 == 0) {
          return;
        }
        iVar4 = usb_alloc_coherent(piVar6,uVar7,0xcc0,iVar3 + 0x44);
        if (iVar4 != 0) {
          bVar1 = *(byte *)(iVar8 + 2);
          iVar8 = *piVar6;
          *(int **)(iVar3 + 0x28) = piVar6;
          *(int *)(iVar3 + 0x40) = iVar4;
          *(uint *)(iVar3 + 0x54) = uVar7;
          *(uint *)(iVar3 + 0x30) = (uint)bVar1 << 0xf | iVar8 << 8 | 0x40000080;
          uVar2 = DAT_00010d70;
          *(int *)(iVar3 + 0x74) = param_1;
          *(undefined4 *)(iVar3 + 0x78) = uVar2;
          if ((piVar6[7] == 3) || (4 < (uint)piVar6[7])) {
            if (uVar5 == 0) {
              uVar5 = 1;
            }
            if (0xf < uVar5) {
              uVar5 = 0x10;
            }
            uVar5 = 1 << (uVar5 - 1 & 0xff);
          }
          *(undefined4 *)(iVar3 + 100) = 0xffffffff;
          *(uint *)(iVar3 + 0x6c) = uVar5;
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 4;
          iVar4 = usb_submit_urb(iVar3,0xcc0);
          if (-1 < iVar4) {
            *(int *)(param_1 + 0x464) = iVar3;
            return;
          }
          printk(DAT_00010d74,param_1 + 0x32c);
          usb_free_coherent(piVar6,*(undefined4 *)(iVar3 + 0x54),*(undefined4 *)(iVar3 + 0x40),
                            *(undefined4 *)(iVar3 + 0x44));
        }
        usb_free_urb(iVar3);
        return;
      }
    }
  }
  return;
}



/* ===== gspca_return_all_buffers @ 00010d78 size=88 ===== */

void gspca_return_all_buffers(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  disableIRQinterrupts();
  piVar4 = (int *)**(int **)(param_1 + 0x66c);
  piVar2 = *(int **)(param_1 + 0x66c);
  while (piVar1 = piVar4, piVar2 != (int *)(param_1 + 0x66c)) {
    vb2_buffer_done(piVar2 + -0xa0,param_2);
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    *piVar2 = 0x100;
    piVar2[1] = 0x122;
    piVar4 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  return;
}



/* ===== vidioc_querycap @ 00010dd0 size=94 ===== */

undefined4 vidioc_querycap(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3;
  iVar1 = video_drvdata();
  strscpy(param_3,**(undefined4 **)(iVar1 + 0x3d0),0x10,*(undefined4 **)(iVar1 + 0x3d0),param_1,
          param_2,iVar2);
  iVar2 = *(int *)(iVar1 + 0x370);
  if (*(int *)(iVar2 + 0x2c0) == 0) {
    snprintf((char *)(param_3 + 0x10),0x20,DAT_00010e34,(uint)*(ushort *)(iVar2 + 0x218),
             (uint)*(ushort *)(iVar2 + 0x21a));
  }
  else {
    strscpy((char *)(param_3 + 0x10),*(int *)(iVar2 + 0x2c0),0x20);
  }
  snprintf((char *)(param_3 + 0x30),0x20,DAT_00010e30,
           *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x370) + 0x3c) + 0xc),
           *(int *)(iVar1 + 0x370) + 4);
  return 0;
}



/* ===== gspca_stream_off @ 00010e38 size=96 ===== */

void gspca_stream_off(int param_1)

{
  code *pcVar1;
  
  *(undefined1 *)(param_1 + 0x472) = 0;
  *(undefined4 *)(param_1 + 0x688) = 0;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x3d0) + 0x24);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  destroy_urbs(param_1);
  gspca_input_destroy_urb(param_1);
  if (*(char *)(param_1 + 0x692) != '\0') {
    gspca_set_alt0_part_0(param_1);
  }
  if (*(char *)(param_1 + 0x68f) != '\0') {
    gspca_input_create_urb(param_1);
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 0x3d0) + 0x28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  if (2 < *DAT_00010e98) {
    printk(DAT_00010e9c,param_1 + 0x32c);
    return;
  }
  return;
}



/* ===== gspca_stop_streaming @ 00010ea0 size=20 ===== */

void gspca_stop_streaming(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  gspca_stream_off(uVar1);
  gspca_return_all_buffers(uVar1,6);
  return;
}



/* ===== gspca_init_transfer @ 00010eb4 size=1068 ===== */

int gspca_init_transfer(int param_1)

{
  uint *puVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  uint *puVar17;
  int *piVar18;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int local_c0;
  int *local_bc;
  uint local_a8 [33];
  int *piVar19;
  
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined1 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x688) = 0;
  piVar4 = (int *)usb_ifnum_to_if(*(undefined4 *)(param_1 + 0x370),*(undefined1 *)(param_1 + 0x691))
  ;
  uVar8 = 0;
  if (*(char *)(param_1 + 0x3cb) != '\0') {
    uVar8 = (undefined1)piVar4[2];
  }
  *(undefined1 *)(param_1 + 0x692) = uVar8;
  pcVar9 = *(code **)(*(int *)(param_1 + 0x3d0) + 0x1c);
  if ((pcVar9 == (code *)0x0) || (iVar5 = (*pcVar9)(param_1), -1 < iVar5)) {
    piVar3 = DAT_00011240;
    if (*(char *)(param_1 + 0x3cb) == '\0') {
      uVar10 = 1;
    }
    else {
      uVar10 = 2;
    }
    if (*(char *)(param_1 + 0x692) == '\0') {
      iVar5 = piVar4[2];
      puVar17 = local_a8;
      if (0xf < iVar5) {
        iVar5 = 0x10;
      }
      uVar16 = 0;
      iVar6 = 0;
      while( true ) {
        bVar2 = false;
        puVar17[1] = DAT_00011230;
        for (uVar21 = 0; (int)uVar21 < iVar5; uVar21 = uVar21 + 1) {
          iVar7 = alt_xfer(uVar21 * 0x1c + *piVar4,1,*(undefined4 *)(param_1 + 0x694));
          if (iVar7 != 0) {
            if (*(char *)(iVar7 + 6) == '\0') {
              printk(DAT_00011238,uVar21);
            }
            else {
              uVar22 = *(ushort *)(iVar7 + 4) & 0x7ff;
              iVar14 = ((*(ushort *)(iVar7 + 4) & 0x1fff) >> 0xb) * uVar22 + uVar22;
              uVar12 = iVar14 * 1000;
              uVar22 = *(uint *)(*(int *)(param_1 + 0x370) + 0x1c);
              if ((uVar22 == 3) || (4 < uVar22)) {
                uVar12 = iVar14 * 8000;
              }
              uVar12 = uVar12 >> (uint)(byte)(*(char *)(iVar7 + 6) - 1);
              if ((uVar16 < uVar12) && (uVar12 < puVar17[1])) {
                *puVar17 = uVar21;
                puVar17[1] = uVar12;
                bVar2 = true;
              }
            }
          }
        }
        if (!bVar2) break;
        uVar16 = puVar17[1];
        if (2 < *piVar3) {
          printk(DAT_00011234,param_1 + 0x32c,*puVar17,uVar16);
        }
        iVar6 = iVar6 + 1;
        puVar17 = puVar17 + 2;
      }
      if ((((*(char *)(param_1 + 0x698) != '\0') &&
           (*(int *)(*(int *)(param_1 + 0x370) + 0x1c) == 2)) && (DAT_0001123c < uVar16)) &&
         (1 < iVar6)) {
        if (2 < *DAT_00011240) {
          printk(DAT_00011244,param_1 + 0x32c);
        }
        iVar6 = iVar6 + -1;
        puVar17 = puVar17 + -2;
      }
      uVar16 = which_bandwidth(param_1);
      do {
        local_c0 = iVar6;
        if (local_c0 < 2) {
          if (local_c0 != 1) {
            printk(DAT_00011248);
            return -5;
          }
          break;
        }
        puVar1 = puVar17 + -3;
        iVar6 = local_c0 + -1;
        puVar17 = puVar17 + -2;
      } while (uVar16 <= *puVar1);
    }
    else {
      bVar15 = *(char *)(param_1 + 0x692) - 1;
      uVar16 = (uint)bVar15;
      *(byte *)(param_1 + 0x692) = bVar15;
      iVar5 = alt_xfer(*piVar4 + uVar16 * 0x1c,uVar10,*(undefined4 *)(param_1 + 0x694));
      if (iVar5 == 0) {
        printk(DAT_00011228,uVar16);
        return -5;
      }
      local_c0 = 1;
      local_a8[0] = uVar16;
    }
    piVar3 = DAT_00011240;
    gspca_input_destroy_urb(param_1);
    local_c0 = local_c0 + -1;
    *(char *)(param_1 + 0x692) = (char)local_a8[local_c0 * 2];
    uVar16 = 0xffffffff;
LAB_00010f68:
    do {
      uVar21 = (uint)*(byte *)(param_1 + 0x692);
      if (((uVar21 == uVar16) || (uVar16 = uVar21, (uint)piVar4[2] < 2)) ||
         (iVar5 = usb_set_interface(*(undefined4 *)(param_1 + 0x370),
                                    *(undefined1 *)(param_1 + 0x691),uVar21), -1 < iVar5)) {
        if (*(char *)(param_1 + 0x3c9) == '\0') {
          if (2 < *piVar3) {
            printk(DAT_0001124c,param_1 + 0x32c,uVar16);
          }
          iVar5 = alt_xfer(uVar16 * 0x1c + *piVar4,uVar10,*(undefined4 *)(param_1 + 0x694));
          uVar21 = (uint)*(ushort *)(iVar5 + 4);
          if (*(char *)(param_1 + 0x3cb) == '\0') {
            uVar11 = (uint)*(ushort *)(param_1 + 0x68c);
            if (uVar11 == 0) {
              uVar11 = ((uVar21 & 0x1fff) >> 0xb) * (uVar21 & 0x7ff) + (uVar21 & 0x7ff);
            }
            uVar20 = (uint)*(byte *)(param_1 + 0x3cc);
            if (uVar20 == 0) {
              uVar20 = 0x20;
            }
            uVar22 = uVar20 * uVar11;
            if (2 < *piVar3) {
              printk(DAT_00011250,param_1 + 0x32c,uVar20,uVar11,uVar22);
            }
            uVar12 = 3;
            uVar21 = uVar11;
          }
          else {
            uVar22 = *(uint *)(param_1 + 0x3c0);
            if (*(uint *)(param_1 + 0x3c0) == 0) {
              uVar22 = uVar21;
            }
            if (2 < *piVar3) {
              printk(DAT_00011254,param_1 + 0x32c,uVar22);
            }
            uVar12 = (uint)*(byte *)(param_1 + 0x3ca);
            uVar20 = 0;
            if (uVar12 == 0) {
              uVar12 = 1;
            }
          }
          local_bc = (int *)(param_1 + 0x454);
          do {
            iVar6 = usb_alloc_urb(uVar20,0xcc0);
            if (iVar6 == 0) {
LAB_00011196:
              iVar5 = -0xc;
              destroy_urbs(param_1);
              goto LAB_000111a0;
            }
            piVar18 = local_bc + 1;
            *local_bc = iVar6;
            iVar7 = usb_alloc_coherent(*(undefined4 *)(param_1 + 0x370),uVar22,0xcc0,iVar6 + 0x44);
            *(int *)(iVar6 + 0x40) = iVar7;
            if (iVar7 == 0) {
              printk(DAT_00011258);
              goto LAB_00011196;
            }
            uVar13 = *(undefined4 *)(param_1 + 0x370);
            *(int *)(iVar6 + 0x74) = param_1;
            *(uint *)(iVar6 + 0x54) = uVar22;
            *(undefined4 *)(iVar6 + 0x28) = uVar13;
            uVar11 = (uint)*(byte *)(iVar5 + 2) << 0xf | **(int **)(param_1 + 0x370) << 8;
            if (uVar20 == 0) {
              *(uint *)(iVar6 + 0x30) = uVar11 | 0xc0000080;
              *(undefined4 *)(iVar6 + 0x3c) = 4;
              *(undefined4 *)(iVar6 + 0x78) = DAT_00011318;
            }
            else {
              *(uint *)(iVar6 + 0x30) = uVar11 | 0x80;
              *(undefined4 *)(iVar6 + 0x3c) = 6;
              bVar15 = *(byte *)(iVar5 + 6);
              *(uint *)(iVar6 + 0x68) = uVar20;
              *(int *)(iVar6 + 0x6c) = 1 << (bVar15 - 1 & 0xff);
              *(undefined4 *)(iVar6 + 0x78) = DAT_0001125c;
              iVar7 = iVar6 + uVar20 * 0x10;
              iVar14 = 0;
              do {
                *(int *)(iVar6 + 0x7c) = iVar14;
                *(uint *)(iVar6 + 0x80) = uVar21;
                iVar6 = iVar6 + 0x10;
                iVar14 = iVar14 + uVar21;
              } while (iVar6 != iVar7);
            }
            local_bc = piVar18;
          } while ((int *)(param_1 + 0x454) + uVar12 != piVar18);
        }
        if (*(char *)(param_1 + 0x3cb) != '\0') {
          usb_clear_halt(*(undefined4 *)(param_1 + 0x370),
                         *(undefined4 *)(*(int *)(param_1 + 0x454) + 0x30));
        }
        iVar5 = (**(code **)(*(int *)(param_1 + 0x3d0) + 0x14))(param_1);
        if (iVar5 < 0) {
          destroy_urbs(param_1);
          break;
        }
        v4l2_ctrl_handler_setup(*(undefined4 *)(param_1 + 0x294));
        *(undefined1 *)(param_1 + 0x472) = 1;
        if ((*(char *)(param_1 + 0x3cb) != '\0') && (*(char *)(param_1 + 0x3ca) == '\0')) break;
        piVar18 = (int *)(param_1 + 0x454);
        while( true ) {
          piVar19 = piVar18 + 1;
          if (*piVar18 == 0) goto LAB_000111a0;
          iVar5 = usb_submit_urb(*piVar18,0xcc0);
          if (iVar5 < 0) break;
          piVar18 = piVar19;
          if ((int *)(param_1 + 0x464) == piVar19) goto LAB_000111a0;
        }
        gspca_stream_off(param_1);
        if (iVar5 != -0x1c) {
          uVar21 = (uint)*(byte *)(param_1 + 0x692);
          uVar13 = DAT_00011324;
          goto LAB_00010f9e;
        }
      }
      else {
        uVar13 = DAT_0001122c;
        if (iVar5 != -0x1c) {
LAB_00010f9e:
          printk(uVar13,uVar21,iVar5);
          break;
        }
      }
      printk(DAT_0001131c,param_1 + 0x32c,uVar16);
      msleep(0x14);
      pcVar9 = *(code **)(*(int *)(param_1 + 0x3d0) + 0x20);
      if (pcVar9 == (code *)0x0) {
        if (local_c0 == 0) {
          iVar5 = -5;
          printk(DAT_00011320);
          break;
        }
        local_c0 = local_c0 + -1;
        *(char *)(param_1 + 0x692) = (char)local_a8[local_c0 * 2];
        goto LAB_00010f68;
      }
      iVar5 = (*pcVar9)(param_1);
    } while (-1 < iVar5);
LAB_000111a0:
    gspca_input_create_urb(param_1);
  }
  return iVar5;
}



/* ===== gspca_start_streaming @ 00011328 size=32 ===== */

int gspca_start_streaming(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar2 + 0x4a4) = 0;
  iVar1 = gspca_init_transfer(iVar2);
  if (iVar1 != 0) {
    gspca_return_all_buffers(iVar2,3);
  }
  return iVar1;
}



/* ===== gspca_resume @ 00011348 size=68 ===== */

undefined4 gspca_resume(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x60);
  mutex_lock(iVar2 + 0x67c);
  *(undefined1 *)(iVar2 + 0x68e) = 0;
  *(undefined4 *)(iVar2 + 0x688) = 0;
  (**(code **)(*(int *)(iVar2 + 0x3d0) + 8))(iVar2);
  if ((int)((uint)*(byte *)(iVar2 + 0x640) << 0x1e) < 0) {
    uVar1 = gspca_init_transfer();
  }
  else {
    gspca_input_create_urb(iVar2);
    uVar1 = 0;
  }
  mutex_unlock(iVar2 + 0x67c);
  return uVar1;
}



/* ===== gspca_dev_probe @ 0001138c size=58 ===== */

undefined4 gspca_dev_probe(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x44) + 0x1a9) == '\x01') {
    if ((*(char *)(*(int *)(*(int *)(param_1 + 0x44) + 0x1b4) + 4) == '\x01') ||
       (*(char *)(*(int *)(param_1 + 4) + 2) == '\0')) {
      uVar1 = gspca_dev_probe2();
      return uVar1;
    }
  }
  else {
    printk(DAT_000113c8,*(undefined2 *)(param_2 + 2),*(undefined2 *)(param_2 + 4));
  }
  return 0xffffffed;
}



/* ===== v4l2_ctrl_s_ctrl @ 000113cc size=36 ===== */

undefined4 v4l2_ctrl_s_ctrl(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  mutex_lock(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc));
  uVar1 = __v4l2_ctrl_s_ctrl(param_1,param_2);
  mutex_unlock(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc));
  return uVar1;
}



/* ===== gspca_expo_autogain @ 000113f0 size=346 ===== */

undefined4
gspca_expo_autogain(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  iVar2 = v4l2_ctrl_g_ctrl(*(undefined4 *)(param_1 + 0x43c));
  if (iVar2 == 0) {
LAB_00011408:
    uVar3 = 0;
  }
  else {
    uVar4 = v4l2_ctrl_g_ctrl(*(undefined4 *)(param_1 + 0x444));
    uVar5 = v4l2_ctrl_g_ctrl(*(undefined4 *)(param_1 + 0x440));
    iVar2 = param_3 - param_2;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar2 = __aeabi_idiv(iVar2,param_4);
    if (3 < *DAT_0001154c) {
      printk(DAT_00011550,param_1 + 0x32c,param_2,param_3,iVar2);
    }
    uVar10 = uVar4;
    uVar11 = uVar5;
    for (iVar7 = 0; iVar7 < iVar2; iVar7 = iVar7 + 1) {
      iVar1 = (int)uVar10 >> 0x1f;
      iVar9 = (int)uVar11 >> 0x1f;
      if (param_3 < param_2) {
        if ((int)uVar10 <= param_5) {
          if (param_6 < (int)uVar11) {
LAB_0001146c:
            uVar11 = uVar11 - 1;
            goto LAB_0001146e;
          }
          iVar6 = *(int *)(param_1 + 0x444);
          iVar8 = *(int *)(iVar6 + 0x4c);
          bVar12 = *(uint *)(iVar6 + 0x48) < uVar10;
          if ((int)((iVar8 - iVar1) - (uint)bVar12) < 0 ==
              (SBORROW4(iVar8,iVar1) != SBORROW4(iVar8 - iVar1,(uint)bVar12))) {
            iVar8 = *(int *)(*(int *)(param_1 + 0x440) + 0x3c);
            bVar12 = *(uint *)(*(int *)(param_1 + 0x440) + 0x38) < uVar11;
            if ((int)((iVar8 - iVar9) - (uint)bVar12) < 0 !=
                (SBORROW4(iVar8,iVar9) != SBORROW4(iVar8 - iVar9,(uint)bVar12))) goto LAB_0001146c;
            iVar9 = *(int *)(iVar6 + 0x3c);
            bVar12 = *(uint *)(iVar6 + 0x38) < uVar10;
            if ((int)((iVar9 - iVar1) - (uint)bVar12) < 0 ==
                (SBORROW4(iVar9,iVar1) != SBORROW4(iVar9 - iVar1,(uint)bVar12))) break;
          }
        }
        uVar10 = uVar10 - 1;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x444);
        iVar8 = *(int *)(iVar6 + 0x4c);
        bVar12 = uVar10 < *(uint *)(iVar6 + 0x48);
        if ((int)((iVar1 - iVar8) - (uint)bVar12) < 0 ==
            (SBORROW4(iVar1,iVar8) != SBORROW4(iVar1 - iVar8,(uint)bVar12))) {
          if ((int)uVar11 < param_6) {
LAB_00011512:
            uVar11 = uVar11 + 1;
            goto LAB_0001146e;
          }
          if (param_5 <= (int)uVar10) {
            iVar8 = *(int *)(*(int *)(param_1 + 0x440) + 0x44);
            bVar12 = uVar11 < *(uint *)(*(int *)(param_1 + 0x440) + 0x40);
            if ((int)((iVar9 - iVar8) - (uint)bVar12) < 0 !=
                (SBORROW4(iVar9,iVar8) != SBORROW4(iVar9 - iVar8,(uint)bVar12))) goto LAB_00011512;
            iVar9 = *(int *)(iVar6 + 0x44);
            bVar12 = uVar10 < *(uint *)(iVar6 + 0x40);
            if ((int)((iVar1 - iVar9) - (uint)bVar12) < 0 ==
                (SBORROW4(iVar1,iVar9) != SBORROW4(iVar1 - iVar9,(uint)bVar12))) break;
          }
        }
        uVar10 = uVar10 + 1;
      }
LAB_0001146e:
    }
    if (uVar4 == uVar10) {
      if (uVar5 == uVar11) goto LAB_00011408;
LAB_000114c8:
      v4l2_ctrl_s_ctrl(*(undefined4 *)(param_1 + 0x440),uVar11);
    }
    else {
      v4l2_ctrl_s_ctrl(*(undefined4 *)(param_1 + 0x444),uVar10);
      if (uVar5 != uVar11) goto LAB_000114c8;
    }
    if (3 < *DAT_0001154c) {
      printk(DAT_00011554,param_1 + 0x32c,uVar10,uVar11);
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ===== gspca_coarse_grained_expo_autogain @ 00011558 size=350 ===== */

undefined4
gspca_coarse_grained_expo_autogain(int param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  iVar3 = v4l2_ctrl_g_ctrl(*(undefined4 *)(param_1 + 0x43c));
  if (iVar3 == 0) {
LAB_00011570:
    uVar4 = 0;
  }
  else {
    uVar5 = v4l2_ctrl_g_ctrl(*(undefined4 *)(param_1 + 0x444));
    uVar6 = v4l2_ctrl_g_ctrl(*(undefined4 *)(param_1 + 0x440));
    iVar3 = *(int *)(*(int *)(param_1 + 0x444) + 0x38);
    iVar11 = *(int *)(*(int *)(param_1 + 0x444) + 0x40) - iVar3;
    lVar1 = (longlong)iVar11 * (longlong)DAT_000116b8;
    iVar11 = (int)(lVar1 >> 0x21) - (iVar11 >> 0x1f);
    uVar9 = iVar3 + iVar11 * 4;
    iVar3 = __aeabi_idiv(param_3 - param_2,param_4,(int)lVar1);
    piVar2 = DAT_000116bc;
    if (3 < *DAT_000116bc) {
      printk(DAT_000116c0,param_1 + 0x32c,param_2,param_3,iVar3);
    }
    uVar10 = iVar3 + uVar5;
    iVar3 = (int)uVar6 >> 0x1f;
    if (((int)uVar9 < (int)uVar10) &&
       (iVar7 = *(int *)(*(int *)(param_1 + 0x440) + 0x44),
       bVar12 = uVar6 < *(uint *)(*(int *)(param_1 + 0x440) + 0x40),
       (int)((iVar3 - iVar7) - (uint)bVar12) < 0 !=
       (SBORROW4(iVar3,iVar7) != SBORROW4(iVar3 - iVar7,(uint)bVar12)))) {
      *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
      *(undefined4 *)(param_1 + 0x44c) = 0;
    }
    else {
      uVar9 = uVar9 + iVar11 * -2;
      if (((int)uVar10 < (int)uVar9) &&
         (iVar11 = *(int *)(*(int *)(param_1 + 0x440) + 0x3c),
         bVar12 = *(uint *)(*(int *)(param_1 + 0x440) + 0x38) < uVar6,
         (int)((iVar11 - iVar3) - (uint)bVar12) < 0 !=
         (SBORROW4(iVar11,iVar3) != SBORROW4(iVar11 - iVar3,(uint)bVar12)))) {
        *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x44c) + 1;
        *(undefined4 *)(param_1 + 0x448) = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x444);
        iVar3 = (int)uVar10 >> 0x1f;
        uVar9 = *(uint *)(iVar7 + 0x40);
        iVar11 = *(int *)(iVar7 + 0x44);
        if ((int)((iVar11 - iVar3) - (uint)(uVar9 < uVar10)) < 0 ==
            (SBORROW4(iVar11,iVar3) != SBORROW4(iVar11 - iVar3,(uint)(uVar9 < uVar10)))) {
          uVar8 = *(uint *)(iVar7 + 0x38);
          iVar11 = *(int *)(iVar7 + 0x3c);
          uVar9 = uVar10;
          if ((int)((iVar3 - iVar11) - (uint)(uVar10 < uVar8)) < 0 !=
              (SBORROW4(iVar3,iVar11) != SBORROW4(iVar3 - iVar11,(uint)(uVar10 < uVar8)))) {
            uVar9 = uVar8;
          }
        }
        *(undefined4 *)(param_1 + 0x44c) = 0;
        *(undefined4 *)(param_1 + 0x448) = 0;
      }
    }
    if (*(int *)(param_1 + 0x44c) < 4) {
      uVar10 = uVar6;
      if (3 < *(int *)(param_1 + 0x448)) {
        *(undefined4 *)(param_1 + 0x448) = 0;
        uVar10 = uVar6 + 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x44c) = 0;
      uVar10 = uVar6 - 1;
    }
    if (uVar5 == uVar9) {
      if (uVar6 == uVar10) goto LAB_00011570;
LAB_00011618:
      v4l2_ctrl_s_ctrl(*(undefined4 *)(param_1 + 0x440),uVar10);
    }
    else {
      v4l2_ctrl_s_ctrl(*(undefined4 *)(param_1 + 0x444),uVar9);
      if (uVar6 != uVar10) goto LAB_00011618;
    }
    if (3 < *piVar2) {
      printk(DAT_000116c4,param_1 + 0x32c,uVar9,uVar10);
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== gspca_dev_probe2 @ 000116c8 size=888 ===== */

int gspca_dev_probe2(int param_1,int param_2,undefined4 *param_3,uint param_4,undefined4 param_5)

{
  void *__s;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  char *__s_00;
  
  iVar9 = *(int *)(param_1 + 0x44);
  printk(DAT_000119a4,*param_3,*(undefined2 *)(param_2 + 2),*(undefined2 *)(param_2 + 4),param_1,
         param_2,param_3);
  if (param_4 < 0x6a0) {
    param_4 = 0x6a0;
  }
  __s = (void *)__kmalloc(param_4,0xdc0);
  if (__s == (void *)0x0) {
    printk(DAT_000119a8);
    return -0xc;
  }
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_000119ac + 0x18),0xdc0);
  *(int *)((int)__s + 0x450) = iVar1;
  if (iVar1 == 0) {
    printk(DAT_000119b0);
LAB_00011724:
    iVar9 = -0xc;
  }
  else {
    *(int *)((int)__s + 0x370) = iVar9 + -0x78;
    *(undefined1 *)((int)__s + 0x691) = *(undefined1 *)(*(int *)(param_1 + 4) + 2);
    *(undefined4 *)((int)__s + 0x694) = 0xffffffff;
    iVar9 = *(int *)(iVar9 + 0x1b4);
    uVar2 = (uint)*(byte *)(iVar9 + 4);
    if (uVar2 != 1) {
      piVar5 = (int *)(iVar9 + 0x50);
      for (iVar1 = 0; iVar1 < (int)uVar2; iVar1 = iVar1 + 1) {
        if ((((int *)*piVar5 != (int *)0x0) && (iVar9 = *(int *)*piVar5, iVar9 != 0)) &&
           (*(char *)(iVar9 + 5) == '\x01')) {
          *(undefined1 *)((int)__s + 0x698) = 1;
          break;
        }
        piVar5 = piVar5 + 1;
      }
    }
    *(undefined4 *)((int)__s + 0x36c) = DAT_000119b4;
    iVar9 = v4l2_device_register(param_1 + 0x20,(int)__s + 0x31c);
    if (iVar9 != 0) goto LAB_00011970;
    *(undefined1 *)((int)__s + 0x68f) = 1;
    *(undefined4 **)((int)__s + 0x3d0) = param_3;
    *(undefined1 *)((int)__s + 0x471) = 0xff;
    memset(__s,0,0x318);
    iVar9 = DAT_000119b8;
    puVar10 = (undefined4 *)((int)__s + 0x2a0);
    puVar6 = (undefined4 *)(DAT_000119b8 + 0x24);
    *(int *)((int)__s + 0xe4) = DAT_000119b8;
    do {
      puVar7 = puVar6 + 2;
      uVar3 = puVar6[1];
      *puVar10 = *puVar6;
      puVar10[1] = uVar3;
      iVar1 = DAT_000119e0;
      puVar10 = puVar10 + 2;
      puVar6 = puVar7;
    } while (puVar7 != (undefined4 *)(iVar9 + 0x34));
    iVar9 = (int)__s + 0x67c;
    *(undefined2 *)puVar10 = *(undefined2 *)puVar7;
    memset((void *)((int)__s + 0x2b2),0,0xe);
    uVar3 = DAT_000119bc;
    *(int *)((int)__s + 0x28c) = (int)__s + 0x31c;
    uVar4 = DAT_000119c0;
    *(undefined4 *)((int)__s + 0x2f0) = uVar3;
    uVar8 = DAT_000119c8;
    uVar3 = DAT_000119c4;
    *(int *)((int)__s + 0x2f4) = iVar1;
    *(undefined4 *)((int)__s + 0xe8) = uVar3;
    *(void **)((int)__s + 0x130) = __s;
    *(undefined4 *)((int)__s + 0x318) = param_5;
    __mutex_init(iVar9,uVar8,uVar4);
    uVar4 = DAT_000119cc;
    uVar3 = DAT_000119c0;
    *(int *)((int)__s + 0x310) = iVar9;
    __init_waitqueue_head((int)__s + 0x674,uVar4,uVar3);
    *(undefined4 *)((int)__s + 0x4a8) = 1;
    *(undefined4 *)((int)__s + 0x4ac) = 0x17;
    *(undefined4 *)((int)__s + 0x4d8) = 0x288;
    *(int *)((int)__s + 0x4c4) = iVar1 + 0x1dc;
    uVar3 = DAT_000119d0;
    *(void **)((int)__s + 0x4d0) = __s;
    *(int *)((int)__s + 0x4bc) = iVar9;
    *(undefined4 *)((int)__s + 0x4c8) = uVar3;
    *(undefined4 *)((int)__s + 0x4dc) = 0x2000;
    *(undefined4 *)((int)__s + 0x4e4) = 2;
    iVar9 = vb2_queue_init((int)__s + 0x4a8);
    if (iVar9 != 0) goto LAB_00011970;
    *(int *)((int)__s + 0x298) = (int)__s + 0x4a8;
    *(int *)((int)__s + 0x66c) = (int)__s + 0x66c;
    *(int *)((int)__s + 0x670) = (int)__s + 0x66c;
    iVar9 = (*(code *)param_3[1])(__s,param_2);
    if (((iVar9 < 0) || (iVar9 = (*(code *)param_3[2])(__s), iVar9 < 0)) ||
       (((code *)param_3[3] != (code *)0x0 && (iVar9 = (*(code *)param_3[3])(__s), iVar9 < 0))))
    goto LAB_00011970;
    iVar9 = *(byte *)((int)__s + 0x3c8) - 1;
    *(char *)((int)__s + 0x473) = (char)iVar9;
    puVar6 = (undefined4 *)(iVar9 * 0x30 + *(int *)((int)__s + 0x3b8));
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar8 = puVar6[3];
    *(undefined4 *)((int)__s + 0x474) = *puVar6;
    *(undefined4 *)((int)__s + 0x478) = uVar3;
    *(undefined4 *)((int)__s + 0x47c) = uVar4;
    *(undefined4 *)((int)__s + 0x480) = uVar8;
    uVar3 = puVar6[5];
    uVar4 = puVar6[6];
    uVar8 = puVar6[7];
    *(undefined4 *)((int)__s + 0x484) = puVar6[4];
    *(undefined4 *)((int)__s + 0x488) = uVar3;
    *(undefined4 *)((int)__s + 0x48c) = uVar4;
    *(undefined4 *)((int)__s + 0x490) = uVar8;
    uVar3 = puVar6[9];
    uVar4 = puVar6[10];
    uVar8 = puVar6[0xb];
    *(undefined4 *)((int)__s + 0x494) = puVar6[8];
    *(undefined4 *)((int)__s + 0x498) = uVar3;
    *(undefined4 *)((int)__s + 0x49c) = uVar4;
    *(undefined4 *)((int)__s + 0x4a0) = uVar8;
    v4l2_ctrl_handler_setup(*(undefined4 *)((int)__s + 0x294));
    *(undefined4 *)((int)__s + 0x374) = 0;
    if ((*(int *)(*(int *)((int)__s + 0x3d0) + 0x48) != 0) ||
       (*(char *)(*(int *)((int)__s + 0x3d0) + 0x4c) != '\0')) {
      puVar6 = (undefined4 *)input_allocate_device();
      if (puVar6 == (undefined4 *)0x0) goto LAB_00011724;
      __s_00 = (char *)((int)__s + 0x378);
      snprintf(__s_00,0x40,DAT_000119d4,
               *(undefined4 *)(*(int *)(*(int *)((int)__s + 0x370) + 0x3c) + 0xc),
               *(int *)((int)__s + 0x370) + 4);
      strlcat(__s_00,DAT_000119d8,0x40);
      *puVar6 = **(undefined4 **)((int)__s + 0x3d0);
      puVar6[1] = __s_00;
      iVar9 = *(int *)((int)__s + 0x370);
      *(undefined2 *)(puVar6 + 3) = 3;
      *(undefined2 *)((int)puVar6 + 0xe) = *(undefined2 *)(iVar9 + 0x218);
      *(undefined2 *)(puVar6 + 4) = *(undefined2 *)(iVar9 + 0x21a);
      *(undefined2 *)((int)puVar6 + 0x12) = *(undefined2 *)(iVar9 + 0x21c);
      puVar6[6] = 2;
      puVar6[0xd] = 0x100000;
      puVar6[0x6b] = *(int *)((int)__s + 0x370) + 0x78;
      iVar9 = input_register_device(puVar6);
      if (iVar9 != 0) {
        printk(DAT_000119dc,iVar9);
        puVar6[0x6b] = 0;
        input_free_device(puVar6);
        goto LAB_00011970;
      }
      *(undefined4 **)((int)__s + 0x374) = puVar6;
    }
    if (*(int *)(*(int *)((int)__s + 0x3d0) + 0x30) == 0) {
      disableIRQinterrupts();
      *(uint *)((int)__s + 0x2fc) = *(uint *)((int)__s + 0x2fc) | 0x20000000;
    }
    if (*(int *)(*(int *)((int)__s + 0x3d0) + 0x34) == 0) {
      disableIRQinterrupts();
      *(uint *)((int)__s + 0x2fc) = *(uint *)((int)__s + 0x2fc) | 0x40000000;
    }
    iVar9 = __video_register_device(__s,0,0xffffffff,1,**(undefined4 **)((int)__s + 0xe4));
    piVar5 = DAT_00011a84;
    if (-1 < iVar9) {
      *(void **)(param_1 + 0x60) = __s;
      if (0 < *piVar5) {
        iVar9 = *(int *)((int)__s + 0x11c);
        if (iVar9 == 0) {
          iVar9 = *(int *)((int)__s + 0xf0);
        }
        printk(DAT_00011a88,(int)__s + 0x32c,iVar9);
      }
      gspca_input_create_urb(__s);
      return 0;
    }
    printk(DAT_00011a80,iVar9);
  }
LAB_00011970:
  if (*(int *)((int)__s + 0x374) != 0) {
    input_unregister_device();
  }
  v4l2_ctrl_handler_free(*(undefined4 *)((int)__s + 0x294));
  v4l2_device_unregister((int)__s + 0x31c);
  if ((code *)param_3[4] != (code *)0x0) {
    (*(code *)param_3[4])(__s);
  }
  kfree(*(undefined4 *)((int)__s + 0x450));
  kfree(__s);
  return iVar9;
}



/* ===== init_module @ 00011a8c size=12 ===== */

undefined4 init_module(void)

{
  printk(DAT_00011a98);
  return 0;
}



/* ===== cleanup_module @ 00011a9c size=2 ===== */

void cleanup_module(void)

{
  return;
}



/* ===== <EXTERNAL>::vb2_queue_init @ 00013000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_queue_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::input_allocate_device @ 00013004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void input_allocate_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usb_alloc_urb @ 00013008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usb_alloc_urb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usb_free_urb @ 00013010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usb_free_urb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_put @ 00013014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usb_alloc_coherent @ 0001301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usb_alloc_coherent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00013024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usb_ifnum_to_if @ 00013028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usb_ifnum_to_if(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::input_unregister_device @ 00013038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void input_unregister_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0001303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 00013040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::input_free_device @ 0001304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void input_free_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usb_clear_halt @ 00013050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usb_clear_halt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_setup @ 00013054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::input_register_device @ 00013058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void input_register_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 0001305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::video_devdata @ 00013060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void video_devdata(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_queue_error @ 00013064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_queue_error(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 0001306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usb_submit_urb @ 00013070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usb_submit_urb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_s_ctrl @ 00013074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_s_ctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 00013078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usb_free_coherent @ 00013080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usb_free_coherent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 00013088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_buffer_done @ 0001308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_buffer_done(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_plane_vaddr @ 00013090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_plane_vaddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usb_set_interface @ 00013098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usb_set_interface(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::video_unregister_device @ 0001309c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void video_unregister_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 000130a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 000130a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000130b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_disconnect @ 000130b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_disconnect(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlcat @ 000130bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strlcat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 000130c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 000130c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_register @ 000130cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strscpy @ 000130d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strscpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 000130d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__video_register_device @ 000130d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __video_register_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usb_kill_urb @ 000130e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usb_kill_urb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ktime_get @ 000130e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ktime_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_g_ctrl @ 000130f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_g_ctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_free @ 000130f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_unregister @ 000130f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::msleep @ 00013108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void msleep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 0001310c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


