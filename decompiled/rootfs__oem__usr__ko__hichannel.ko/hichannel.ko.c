// hichannel.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== oal_atoi @ 00010550 size=48 ===== */

int oal_atoi(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  bVar1 = false;
  pcVar3 = (char *)(param_1 + -1);
  iVar2 = 0;
  do {
    while( true ) {
      while( true ) {
        pcVar3 = pcVar3 + 1;
        iVar4 = (int)*pcVar3;
        if (iVar4 != 0x2d) break;
        bVar1 = true;
      }
      if (iVar4 < 0x2e) break;
      if (9 < (iVar4 - 0x30U & 0xff)) goto LAB_00010568;
      iVar2 = iVar2 * 10 + (iVar4 - 0x30U);
    }
  } while (iVar4 == 0x20);
LAB_00010568:
  if (bVar1) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* ===== oal_netbuf_concat @ 00010580 size=146 ===== */

bool oal_netbuf_concat(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98)) < *(uint *)(param_2 + 0x50)) {
    bVar2 = true;
    kfree_skb(param_2);
    oal_print_nlogs(DAT_00010618,DAT_00010614,0x20);
  }
  else {
    iVar1 = memcpy_s(*(int *)(param_1 + 0x98),*(uint *)(param_2 + 0x50),
                     *(undefined4 *)(param_2 + 0xa4));
    if (iVar1 == 0) {
      skb_put(param_1,*(undefined4 *)(param_2 + 0x50));
    }
    else {
      oal_print_nlogs(DAT_00010618,DAT_00010614,0x24);
    }
    bVar2 = iVar1 != 0;
    kfree_skb(param_2);
  }
  return bVar2;
}



/* ===== oal_netbuf_is_tcp_ack @ 00010624 size=36 ===== */

bool oal_netbuf_is_tcp_ack(byte *param_1)

{
  return (ushort)(*(ushort *)(param_1 + 2) * 0x100 + (*(ushort *)(param_1 + 2) >> 8)) ==
         (ushort)(((*param_1 & 0xf) + (ushort)(param_1[0x20] >> 4)) * 4);
}



/* ===== oal_netbuf_alloc @ 00010648 size=82 ===== */

int oal_netbuf_alloc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  
  if (param_3 != 0) {
    param_1 = param_1 + -1 + param_3;
  }
  iVar1 = __netdev_alloc_skb(0,param_1,0xa20);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xa4) + param_2;
    *(int *)(iVar1 + 0xa4) = iVar2;
    param_2 = *(int *)(iVar1 + 0x98) + param_2;
    *(int *)(iVar1 + 0x98) = param_2;
    if ((param_3 != 0) && (__aeabi_uidivmod(iVar2,param_3), extraout_r1 != 0)) {
      *(int *)(iVar1 + 0xa4) = iVar2 + (param_3 - extraout_r1);
      *(int *)(iVar1 + 0x98) = (param_3 - extraout_r1) + param_2;
    }
  }
  return iVar1;
}



/* ===== store_log_level_set @ 0001069c size=28 ===== */

undefined4 store_log_level_set(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((param_3 == 0) || (uVar1 = oal_atoi(param_3), 5 < uVar1)) {
    param_4 = 1;
  }
  else {
    *DAT_000106b8 = uVar1;
  }
  return param_4;
}



/* ===== log_level_show @ 000106bc size=22 ===== */

undefined4 log_level_show(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    uVar1 = snprintf_s(param_3,0x1000,0xfff,DAT_000106d4);
    return uVar1;
  }
  return 1;
}



/* ===== oam_get_log_level @ 000106d8 size=6 ===== */

undefined4 oam_get_log_level(void)

{
  return *DAT_000106e0;
}



/* ===== oam_user_ctrl_init @ 000106e4 size=56 ===== */

int oam_user_ctrl_init(void)

{
  int iVar1;
  
  iVar1 = kobject_create_and_add(DAT_0001071c,0);
  *DAT_00010720 = iVar1;
  if (iVar1 == 0) {
    printk(DAT_00010724,0xfffffff4);
    iVar1 = -0xc;
  }
  else {
    iVar1 = sysfs_create_group(iVar1,DAT_00010728);
    if (iVar1 != 0) {
      printk(DAT_0001072c,iVar1);
    }
  }
  return iVar1;
}



/* ===== oam_main_init @ 00010730 size=50 ===== */

int oam_main_init(void)

{
  int iVar1;
  
  iVar1 = oam_user_ctrl_init();
  if (iVar1 == 0) {
    oal_print_nlogs(DAT_0001076c,DAT_00010768,0x6d);
  }
  return iVar1;
}



/* ===== oam_main_exit @ 00010770 size=26 ===== */

void oam_main_exit(void)

{
  int *piVar1;
  
  piVar1 = DAT_0001078c;
  if (*DAT_0001078c != 0) {
    sysfs_remove_group(*DAT_0001078c,DAT_00010790);
    kobject_put(*piVar1);
    return;
  }
  return;
}



/* ===== oal_print_nlogs @ 00010794 size=170 ===== */

void oal_print_nlogs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    byte param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_11c [256];
  int local_1c;
  
  piVar1 = DAT_00010844;
  local_1c = *DAT_00010844;
  memset(auStack_11c,0,0x100);
  uVar2 = oam_get_log_level();
  if (((param_5 <= uVar2) && (uVar2 = param_5 - 1 & 0xff, uVar2 < 3)) &&
     (iVar3 = snprintf_s(auStack_11c,0x100,0xff,DAT_0001084c,
                         *(undefined4 *)(DAT_00010848 + uVar2 * 4),param_3,param_7), iVar3 != -1)) {
    switch(param_6) {
    case 0:
      printk(auStack_11c);
      break;
    case 1:
      printk(auStack_11c,param_8);
      break;
    case 2:
      printk(auStack_11c,param_8,param_9);
      break;
    case 3:
      printk(auStack_11c,param_8,param_9,param_10);
      break;
    case 4:
      printk(auStack_11c,param_8,param_9,param_10,param_11);
    }
  }
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== dev_put @ 00010850 size=24 ===== */

void dev_put(int param_1)

{
  if (param_1 != 0) {
    disableIRQinterrupts();
    **(int **)(param_1 + 600) = **(int **)(param_1 + 600) + -1;
  }
  return;
}



/* ===== wal_ioctl_get_param @ 00010868 size=4 ===== */

undefined4 wal_ioctl_get_param(void)

{
  return 0;
}



/* ===== wal_netdev_get_stats @ 0001086c size=18 ===== */

void wal_netdev_get_stats(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 10;
    *(undefined4 *)(param_1 + 0xb4) = 10;
    *(undefined4 *)(param_1 + 0xb8) = 10;
    *(undefined4 *)(param_1 + 0xbc) = 10;
  }
  return;
}



/* ===== wal_netdev_open @ 0001087e size=20 ===== */

undefined4 wal_netdev_open(int param_1)

{
  if (-1 < (int)(*(uint *)(param_1 + 0x138) << 0x19)) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x40;
  }
  return 0;
}



/* ===== wal_netdev_stop @ 00010892 size=20 ===== */

undefined4 wal_netdev_stop(int param_1)

{
  if ((int)(*(uint *)(param_1 + 0x138) << 0x19) < 0) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) & 0xffffffbf;
  }
  return 0;
}



/* ===== wal_net_free_netdev @ 000108a6 size=8 ===== */

void wal_net_free_netdev(int param_1)

{
  if (param_1 != 0) {
    free_netdev();
    return;
  }
  return;
}



/* ===== oal_ether_setup @ 000108ae size=8 ===== */

void oal_ether_setup(int param_1)

{
  if (param_1 != 0) {
    ether_setup();
    return;
  }
  return;
}



/* ===== hi_strrchr.constprop.3 @ 000108b6 size=14 ===== */

char * hi_strrchr_constprop_3(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strrchr(param_1,0x2f);
  if (pcVar1 != (char *)0x0) {
    pcVar1 = pcVar1 + 1;
  }
  return pcVar1;
}



/* ===== wal_net_start_xmit @ 000108c4 size=202 ===== */

undefined4 wal_net_start_xmit(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    uVar1 = hi_strrchr_constprop_3(DAT_00010990);
    oal_print_nlogs(uVar1,DAT_00010994,0x95);
    return 0;
  }
  if ((*(uint *)(param_2 + 0x138) & 0x40) == 0) {
    uVar1 = hi_strrchr_constprop_3(DAT_00010990);
    uVar4 = 0x9a;
  }
  else {
    puVar2 = (undefined4 *)oal_netbuf_alloc(param_1[0x14],0);
    if (puVar2 != (undefined4 *)0x0) {
      memcpy_s(puVar2[0x29],param_1[0x14],param_1[0x29]);
      puVar2[0x14] = param_1[0x14];
      kfree_skb(param_1);
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar3 = hcc_tx_data_adapt(puVar2,0);
      if (iVar3 == 0) {
        return 0;
      }
      goto LAB_0001092c;
    }
    uVar1 = hi_strrchr_constprop_3(DAT_00010990);
    uVar4 = 0xa1;
  }
  oal_print_nlogs(uVar1,DAT_00010994,uVar4);
  puVar2 = param_1;
LAB_0001092c:
  kfree_skb(puVar2);
  return 0;
}



/* ===== wal_ioctl_set_param @ 000109a4 size=156 ===== */

undefined4 wal_ioctl_set_param(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(ushort *)(param_3 + 4) < 0x201) {
    puVar1 = (undefined4 *)oal_netbuf_alloc(*(ushort *)(param_3 + 4) + 0x40,0,4);
    if (puVar1 != (undefined4 *)0x0) {
      skb_put(puVar1,*(undefined2 *)(param_3 + 4));
      memcpy_s(puVar1[0x29],*(undefined2 *)(param_3 + 4),param_4);
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar3 = hcc_tx_data_adapt(puVar1,1);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = hi_strrchr_constprop_3(DAT_00010a40);
      oal_print_nlogs(uVar2,DAT_00010a48,0x67);
      kfree_skb(puVar1);
      return 0;
    }
    uVar2 = hi_strrchr_constprop_3(DAT_00010a40);
    oal_print_nlogs(uVar2,DAT_00010a48,0x5b);
  }
  return 0xffffffff;
}



/* ===== wal_netdev_set_mac_addr @ 00010a50 size=190 ===== */

undefined4 wal_netdev_set_mac_addr(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = hi_strrchr_constprop_3(DAT_00010b10);
    uVar3 = 0xce;
  }
  else if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      iVar2 = memcpy_s(*(undefined4 *)(param_1 + 0x1cc),6,param_2 + 2);
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = hi_strrchr_constprop_3(DAT_00010b10);
      uVar3 = 0xe0;
    }
    else {
      uVar1 = hi_strrchr_constprop_3(DAT_00010b10);
      uVar3 = 0xdb;
    }
  }
  else {
    uVar1 = hi_strrchr_constprop_3(DAT_00010b10);
    uVar3 = 0xd4;
  }
  oal_print_nlogs(uVar1,DAT_00010b18,uVar3);
  return 0xffffffff;
}



/* ===== wal_net_device_ioctl @ 00010b28 size=68 ===== */

undefined4 wal_net_device_ioctl(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_2 + 0x10) == 0)) {
    uVar1 = hi_strrchr_constprop_3(DAT_00010b6c);
    oal_print_nlogs(uVar1,DAT_00010b74,0xbc);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== wal_get_net_dev_ops @ 00010b78 size=4 ===== */

undefined4 wal_get_net_dev_ops(void)

{
  return DAT_00010b7c;
}



/* ===== wal_get_g_iw_handler_def @ 00010b80 size=4 ===== */

undefined4 wal_get_g_iw_handler_def(void)

{
  return DAT_00010b84;
}



/* ===== wal_net_register_netdev @ 00010b88 size=12 ===== */

undefined4 wal_net_register_netdev(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = register_netdev();
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== wal_rx_data_proc @ 00010b94 size=96 ===== */

undefined4 wal_rx_data_proc(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = dev_get_by_name(DAT_00010bf8,DAT_00010bf4);
  if (iVar2 != 0) {
    uVar3 = dev_put();
    uVar1 = eth_type_trans(param_1,uVar3);
    *(undefined2 *)(param_1 + 0x88) = uVar1;
    uVar3 = netif_rx_ni(param_1);
    return uVar3;
  }
  uVar3 = hi_strrchr_constprop_3(DAT_00010bfc);
  oal_print_nlogs(uVar3,DAT_00010c04,0x101);
  kfree_skb(param_1);
  return 1;
}



/* ===== wal_init_netdev @ 00010c08 size=48 ===== */

void wal_init_netdev(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_00010c38;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x228) = 0;
  *(int *)(param_2 + 0x128) = iVar1;
  uVar2 = DAT_00010c3c;
  *(int *)(param_2 + 0x120) = iVar1 + 0x114;
  *(undefined4 *)(param_2 + 0x26c) = uVar2;
  *(undefined4 *)(param_2 + 0x248) = 5;
  *(uint *)(param_2 + 0x138) = *(uint *)(param_2 + 0x138) & 0xffffffbf;
  return;
}



/* ===== netdev_register @ 00010c40 size=264 ===== */

void netdev_register(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined2 local_26;
  int local_24;
  
  piVar1 = DAT_00010d48;
  local_24 = *DAT_00010d48;
  local_2e = 0;
  local_2a = 0;
  local_26 = 0;
  local_34 = *DAT_00010d4c;
  local_30 = *(undefined2 *)(DAT_00010d4c + 1);
  iVar2 = alloc_netdev_mqs(0,&local_34,0,DAT_00010d50,1,1);
  if (iVar2 == 0) {
    iVar4 = -1;
    uVar3 = hi_strrchr_constprop_3(DAT_00010d54);
    oal_print_nlogs(uVar3,DAT_00010d5c,0x29);
    uVar3 = hi_strrchr_constprop_3(DAT_00010d60);
    oal_print_nlogs(uVar3,DAT_00010d68,0x124);
  }
  else {
    iVar4 = wal_init_netdev(2,iVar2);
    if (iVar4 == 0) {
      iVar4 = wal_net_register_netdev(iVar2);
      if (iVar4 == 0) {
        uVar3 = hi_strrchr_constprop_3(DAT_00010d60);
        oal_print_nlogs(uVar3,DAT_00010d68,0x134);
      }
      else {
        uVar3 = hi_strrchr_constprop_3(DAT_00010d60);
        oal_print_nlogs(uVar3,DAT_00010d68,0x12f);
        wal_net_free_netdev(iVar2);
      }
    }
  }
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}



/* ===== netdev_unregister @ 00010d74 size=84 ===== */

void netdev_unregister(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = dev_get_by_name(DAT_00010dcc,DAT_00010dc8);
  if (iVar1 == 0) {
    uVar2 = hi_strrchr_constprop_3(DAT_00010dd0);
    oal_print_nlogs(uVar2,DAT_00010dd8,0x13c);
    return;
  }
  iVar1 = dev_put();
  *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) & 0xffffffbf;
  unregister_netdev();
  return;
}



/* ===== hi_strrchr.constprop.1 @ 00010ddc size=4 ===== */

undefined4 hi_strrchr_constprop_1(void)

{
  return DAT_00010de0;
}



/* ===== oal_recieve_user_msg @ 00010de4 size=250 ===== */

void oal_recieve_user_msg(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x50) < 0x11) {
      uVar1 = hi_strrchr_constprop_1();
      uVar4 = 0x66;
    }
    else {
      piVar6 = *(int **)(param_1 + 0xa4);
      uVar5 = *piVar6 - 0x10;
      *(int *)(DAT_00010ee8 + 4) = piVar6[3];
      if (uVar5 < 0x5dd) {
        puVar2 = (undefined4 *)oal_netbuf_alloc(uVar5,0);
        if (puVar2 != (undefined4 *)0x0) {
          memcpy_s(puVar2[0x29],uVar5,piVar6 + 4,uVar5);
          puVar2[0x14] = uVar5;
          *puVar2 = 0;
          puVar2[1] = 0;
          iVar3 = hcc_tx_data_adapt(puVar2,uVar5 < 0x181,1);
          if (iVar3 == 0) {
            return;
          }
          uVar1 = hi_strrchr_constprop_1();
          oal_print_nlogs(uVar1,DAT_00010ee4,0x81);
          kfree_skb(puVar2);
          return;
        }
        uVar1 = hi_strrchr_constprop_1();
        uVar4 = 0x77;
      }
      else {
        uVar1 = hi_strrchr_constprop_1();
        uVar4 = 0x70;
      }
    }
    oal_print_nlogs(uVar1,DAT_00010ee4,uVar4);
  }
  return;
}



/* ===== oal_send_user_msg @ 00010ef8 size=290 ===== */

undefined4 oal_send_user_msg(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  piVar1 = DAT_00011030;
  if (*DAT_00011030 != 0) {
    if ((param_1 == 0) || (0x5db < param_2 - 1U)) {
      uVar2 = hi_strrchr_constprop_1();
      uVar6 = 0x3b;
    }
    else {
      uVar7 = param_2 + 0x13U & 0xfffffffc;
      iVar3 = __alloc_skb(uVar7,0xa20,0,0xffffffff);
      if (iVar3 != 0) {
        if (((*(int *)(iVar3 + 0x54) == 0) &&
            ((int)uVar7 <= *(int *)(iVar3 + 0x9c) - *(int *)(iVar3 + 0x98))) &&
           (piVar4 = (int *)__nlmsg_put(iVar3,0,0,0x1c,param_2,0), piVar4 != (int *)0x0)) {
          memcpy_s(piVar4 + 4,*piVar4 + -0x10,param_1,param_2);
          iVar5 = netlink_unicast(*piVar1,iVar3,piVar1[1],0x40);
          if (iVar5 != -1) {
            return 0;
          }
          uVar2 = hi_strrchr_constprop_1();
          oal_print_nlogs(uVar2,DAT_00011020,0x52);
          kfree_skb(iVar3);
          return 0xffffffff;
        }
        uVar2 = hi_strrchr_constprop_1();
        oal_print_nlogs(uVar2,DAT_00011020,0x49);
        kfree_skb(iVar3);
        return 0xffffffff;
      }
      uVar2 = hi_strrchr_constprop_1();
      uVar6 = 0x42;
    }
    oal_print_nlogs(uVar2,DAT_00011020,uVar6);
  }
  return 0xffffffff;
}



/* ===== oal_netlink_init @ 00011034 size=134 ===== */

undefined4 oal_netlink_init(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = hi_strrchr_constprop_1();
  piVar1 = DAT_000110bc;
  if (*DAT_000110bc == 0) {
    iVar3 = __netlink_kernel_create(DAT_000110d0,0x1c,DAT_000110cc,DAT_000110c8);
    *piVar1 = iVar3;
    if (iVar3 != 0) {
      oal_print_nlogs(uVar2,DAT_000110c4,0x94);
      return 0;
    }
    uVar4 = 0x90;
  }
  else {
    uVar4 = 0x89;
  }
  oal_print_nlogs(uVar2,DAT_000110c4,uVar4);
  return 0xffffffff;
}



/* ===== oal_netlink_deinit @ 000110dc size=72 ===== */

undefined4 oal_netlink_deinit(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_00011124;
  if (*DAT_00011124 == 0) {
    printk(DAT_00011128);
    uVar2 = 0xffffffff;
  }
  else {
    netlink_kernel_release();
    uVar2 = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    uVar3 = hi_strrchr_constprop_1();
    oal_print_nlogs(uVar3,DAT_00011130,0xa2);
  }
  return uVar2;
}



/* ===== hcc_alloc_unc_buf @ 00011134 size=22 ===== */

undefined4 hcc_alloc_unc_buf(void)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((*DAT_0001114c != 0) && (iVar2 = *(int *)(*DAT_0001114c + 0x398), iVar2 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x18), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00011144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



/* ===== hcc_wlan_pm_wakeup_dev @ 00011150 size=18 ===== */

undefined4 hcc_wlan_pm_wakeup_dev(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((*(int *)(param_1 + 0x398) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x398) + 0x20), uVar1 = 0,
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001115c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  return uVar1;
}



/* ===== hcc_heartbeat_callback @ 00011162 size=18 ===== */

bool hcc_heartbeat_callback
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = oal_sdio_send_msg(*param_1,3,param_3,param_4,param_4);
  return iVar1 != 0;
}



/* ===== oal_kthread_stop @ 00011174 size=26 ===== */

void oal_kthread_stop(int param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x1117a);
    (*pcVar1)();
  }
  send_sig(0xf,param_1,1);
  kthread_stop(param_1);
  return;
}



/* ===== hcc_transfer_queues_init.part.2 @ 00011190 size=66 ===== */

void hcc_transfer_queues_init_part_2(int param_1)

{
  *(int *)(param_1 + 100) = param_1 + 100;
  *(int *)(param_1 + 0x68) = param_1 + 100;
  *(int *)(param_1 + 0x94) = param_1 + 0x94;
  *(int *)(param_1 + 0x98) = param_1 + 0x94;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(int *)(param_1 + 0xc4) = param_1 + 0xc4;
  *(int *)(param_1 + 200) = param_1 + 0xc4;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(int *)(param_1 + 0xf4) = param_1 + 0xf4;
  *(int *)(param_1 + 0xf8) = param_1 + 0xf4;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  return;
}



/* ===== hi_strrchr.constprop.13 @ 000111d2 size=4 ===== */

undefined4 hi_strrchr_constprop_13(void)

{
  return DAT_000111d8;
}



/* ===== hcc_list_dequeue @ 000111dc size=50 ===== */

int * hcc_list_dequeue(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  disableIRQinterrupts();
  piVar3 = (int *)*param_1;
  if (piVar3 == param_1) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = piVar3;
    if (piVar3 != (int *)0x0) {
      param_1[2] = param_1[2] + -1;
      iVar1 = *piVar3;
      piVar2 = (int *)piVar3[1];
      piVar3[1] = 0;
      piVar4 = piVar3 + -6;
      *piVar3 = 0;
      *(int **)(iVar1 + 4) = piVar2;
      *piVar2 = iVar1;
    }
  }
  return piVar4;
}



/* ===== hcc_list_purge @ 0001120e size=26 ===== */

void hcc_list_purge(undefined4 param_1)

{
  int iVar1;
  
  while (iVar1 = hcc_list_dequeue(param_1), iVar1 != 0) {
    if (*(code **)(iVar1 + 0x14) != (code *)0x0) {
      (**(code **)(iVar1 + 0x14))();
    }
  }
  return;
}



/* ===== hcc_tx_list_free @ 00011228 size=20 ===== */

void hcc_tx_list_free(undefined4 param_1)

{
  int iVar1;
  
  while (iVar1 = hcc_list_dequeue(param_1), iVar1 != 0) {
    (**(code **)(iVar1 + 0x14))();
  }
  return;
}



/* ===== hcc_list_add_head @ 0001123c size=36 ===== */

void hcc_list_add_head(int *param_1,int param_2)

{
  disableIRQinterrupts();
  *(int *)(param_2 + 0x18) = *param_1;
  *(int **)(param_2 + 0x1c) = param_1;
  *(int *)(*param_1 + 4) = param_2 + 0x18;
  *param_1 = param_2 + 0x18;
  param_1[2] = param_1[2] + 1;
  return;
}



/* ===== hcc_list_add_tail @ 00011260 size=34 ===== */

void hcc_list_add_tail(int param_1,int param_2)

{
  int *piVar1;
  
  disableIRQinterrupts();
  piVar1 = *(int **)(param_1 + 4);
  *(int *)(param_1 + 4) = param_2 + 0x18;
  *(int *)(param_2 + 0x18) = param_1;
  *(int **)(param_2 + 0x1c) = piVar1;
  *piVar1 = param_2 + 0x18;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



/* ===== hcc_host_get_handler @ 00011282 size=6 ===== */

undefined4 hcc_host_get_handler(void)

{
  return *DAT_00011288;
}



/* ===== hcc_clear_queues @ 0001128c size=54 ===== */

void hcc_clear_queues(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  
  if (*(int *)(param_2 * 0x60 + param_1 + 0x6c) != 0) {
    hcc_tx_list_free(param_2 * 0x60 + 100 + param_1);
    param_3 = extraout_r2;
  }
  if (*(int *)(param_1 + param_2 * 0x60 + 0x9c) != 0) {
    iVar1 = param_2 * 0x60 + 0x94;
    hcc_tx_list_free(param_1 + iVar1,iVar1,param_3,param_4);
    return;
  }
  return;
}



/* ===== hcc_sched_transfer @ 000112c2 size=62 ===== */

void hcc_sched_transfer(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = hi_strrchr_constprop_13();
    oal_print_nlogs(uVar1,DAT_00011304,0x46);
    return;
  }
  __wake_up(param_1 + 0x18,1,1,0);
  return;
}



/* ===== hcc_trig_tx_sched @ 00011308 size=104 ===== */

void hcc_trig_tx_sched(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *DAT_00011370;
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x40) = 1;
    if ((*(int *)(iVar4 + 0x398) != 0) &&
       (pcVar3 = *(code **)(*(int *)(iVar4 + 0x398) + 0x2c), pcVar3 != (code *)0x0)) {
      (*pcVar3)(iVar4 + 0x74);
    }
    hcc_sched_transfer(iVar4);
    uVar5 = mod_timer(param_1,*DAT_00011374 + 3);
    uVar1 = (uint)uVar5;
    if (1 < uVar1) {
      uVar2 = hi_strrchr_constprop_13(uVar1,(int)((ulonglong)uVar5 >> 0x20),uVar1);
      oal_print_nlogs(uVar2,DAT_00011378,0x306);
    }
  }
  *(undefined4 *)(iVar4 + 0x40) = 2;
  return;
}



/* ===== hcc_transfer_queues_init @ 00011380 size=2 ===== */

void hcc_transfer_queues_init(int param_1)

{
  *(int *)(param_1 + 100) = param_1 + 100;
  *(int *)(param_1 + 0x68) = param_1 + 100;
  *(int *)(param_1 + 0x94) = param_1 + 0x94;
  *(int *)(param_1 + 0x98) = param_1 + 0x94;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(int *)(param_1 + 0xc4) = param_1 + 0xc4;
  *(int *)(param_1 + 200) = param_1 + 0xc4;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(int *)(param_1 + 0xf4) = param_1 + 0xf4;
  *(int *)(param_1 + 0xf8) = param_1 + 0xf4;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  return;
}



/* ===== hcc_tx_assem_descr_get @ 00011382 size=6 ===== */

void hcc_tx_assem_descr_get(int param_1)

{
  hcc_list_dequeue(param_1 + 0x388);
  return;
}



/* ===== hcc_send_descr_control_data @ 00011388 size=140 ===== */

undefined4
hcc_send_descr_control_data(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  puVar4 = param_1 + 0xe2;
  piVar1 = (int *)hcc_list_dequeue(puVar4);
  if (piVar1 == (int *)0x0) {
    return 0xfffffff4;
  }
  *(undefined4 *)*piVar1 = param_2;
  if (param_4 == 0) {
LAB_000113ac:
    local_28 = 0;
    local_24 = 0;
    local_30 = (undefined1 *)&local_30;
    local_2c = (undefined1 *)&local_30;
    hcc_list_add_tail(&local_30,piVar1);
    uVar2 = oal_sdio_transfer_list(*param_1,&local_30,1);
    hcc_list_add_tail(puVar4,piVar1);
  }
  else {
    if ((param_3 == 0) || ((uint)piVar1[1] < param_4 + 4U)) {
      hcc_list_add_tail(puVar4,piVar1);
    }
    else {
      iVar3 = memcpy_s(*piVar1 + 4,param_4,param_3,param_4);
      if (iVar3 == 0) goto LAB_000113ac;
    }
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== hcc_tx_queue_switch @ 00011414 size=24 ===== */

void hcc_tx_queue_switch(undefined4 param_1,undefined3 param_2)

{
  hcc_send_descr_control_data(param_1,1,&stack0xfffffff7,1,param_1,CONCAT13((char)param_2,param_2));
  return;
}



/* ===== hcc_switch_high_pri_queue @ 0001142c size=12 ===== */

undefined4 hcc_switch_high_pri_queue(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = hcc_tx_queue_switch();
    return uVar1;
  }
  return 1;
}



/* ===== hcc_restore_normal_pri_queue @ 00011438 size=14 ===== */

undefined4 hcc_restore_normal_pri_queue(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = hcc_tx_queue_switch(param_1,0);
    return uVar1;
  }
  return 1;
}



/* ===== hcc_tx_sleep @ 00011446 size=28 ===== */

void hcc_tx_sleep(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00011464;
  uVar2 = *(int *)(DAT_00011464 + 4) + 1;
  *(uint *)(DAT_00011464 + 4) = uVar2;
  if (1 < uVar2) {
    usleep_range(0xf);
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return;
}



/* ===== hcc_host_proc_tx_queue @ 00011468 size=928 ===== */

/* WARNING: Type propagation algorithm not settling */

int hcc_host_proc_tx_queue(int *param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *******pppppppiVar13;
  int *******pppppppiVar14;
  int extraout_r1;
  int extraout_r1_00;
  code *pcVar15;
  int ******ppppppiVar16;
  uint uVar17;
  undefined4 *puVar18;
  int *piVar19;
  int ******ppppppiVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int *******pppppppiVar26;
  int iVar27;
  uint uVar28;
  bool bVar29;
  undefined8 uVar30;
  int *******local_38;
  int *******local_34;
  uint local_30;
  undefined1 local_2c;
  
  if (1 < param_2) {
    uVar5 = hi_strrchr_constprop_13();
    oal_print_nlogs(uVar5,DAT_000116b8,0x193);
    return 0;
  }
  if (param_1[0xc9] == 2) goto LAB_000114b0;
  uVar25 = param_1[param_2 * 0xc + 0x1b];
  if (uVar25 == 0) {
    return 0;
  }
  iVar6 = *param_1;
  iVar7 = 0;
  if (iVar6 != 0) {
    if (*(int *)(iVar6 + 4) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = oal_sdio_get_credit(iVar6,&local_38);
      if (iVar7 < 0) {
        uVar5 = hi_strrchr_constprop_13();
        oal_print_nlogs(uVar5,DAT_000116c0,0x16f);
        param_1[10] = 1;
        goto LAB_000114b0;
      }
    }
  }
  *(char *)(param_1 + 0xce) = (char)((uint)local_38 >> 0x18);
  *(char *)((int)param_1 + 0x339) = (char)((uint)local_38 >> 8);
  if ((param_1[0xe6] != 0) && (pcVar15 = *(code **)(param_1[0xe6] + 0xc), pcVar15 != (code *)0x0)) {
    sVar3 = *(short *)((int)param_1 + param_2 * 0x30 + 0x4e);
    if (sVar3 == 1) {
      uVar2 = (undefined1)param_1[0xce];
    }
    else {
      if (sVar3 != 0) goto LAB_0001152c;
      uVar2 = *(undefined1 *)((int)param_1 + 0x339);
    }
    iVar7 = (*pcVar15)(sVar3,uVar2);
  }
LAB_0001152c:
  if (iVar7 != 0) {
LAB_000114b0:
    hcc_tx_sleep();
    return 0;
  }
  *(undefined4 *)(DAT_000116c4 + 4) = 0;
  sVar3 = *(short *)((int)param_1 + param_2 * 0x30 + 0x4e);
  if (sVar3 == 1) {
    bVar1 = *(byte *)(param_1 + 0xce);
  }
  else {
    if (sVar3 != 0) goto LAB_0001154c;
    bVar1 = *(byte *)((int)param_1 + 0x339);
  }
  if (bVar1 <= uVar25) {
    uVar25 = (uint)bVar1;
  }
LAB_0001154c:
  pppppppiVar26 = (int *******)(param_1 + 0x83);
  if ((int *******)param_1[0x83] != pppppppiVar26) {
    param_1[0xcc] = param_1[0xcc] + 1;
    iVar7 = hcc_send_descr_control_data(param_1,0,0);
    if (pppppppiVar26 != (int *******)param_1[0x83]) {
      iVar6 = param_1[0x87];
      while( true ) {
        disableIRQinterrupts();
        pppppppiVar13 = (int *******)param_1[0x84];
        if (pppppppiVar26 == pppppppiVar13) {
          pppppppiVar14 = (int *******)0x0;
        }
        else {
          pppppppiVar14 = pppppppiVar13;
          if (pppppppiVar13 != (int *******)0x0) {
            param_1[0x85] = param_1[0x85] + -1;
            ppppppiVar16 = *pppppppiVar13;
            ppppppiVar20 = pppppppiVar13[1];
            pppppppiVar13[1] = (int ******)0x0;
            pppppppiVar14 = pppppppiVar13 + -6;
            *pppppppiVar13 = (int ******)0x0;
            ppppppiVar16[1] = (int *****)ppppppiVar20;
            *ppppppiVar20 = (int *****)ppppppiVar16;
          }
        }
        if (pppppppiVar14 == (int *******)0x0) break;
        hcc_list_add_head(param_1 + (uint)(iVar6 != 0) * 0xc + 0x19);
      }
    }
    if (iVar7 != 0) {
      return 1;
    }
  }
  iVar27 = 0;
  piVar11 = param_1 + param_2 * 0xc + 0x19;
  iVar12 = param_1[param_2 * 0xc + 0x16];
  iVar6 = param_1[param_2 * 0xc + 0x11];
  piVar19 = param_1 + 0xe2;
  iVar7 = iVar12;
  uVar28 = uVar25;
  while (uVar28 != 0) {
    if (*(short *)((int)param_1 + param_2 * 0x30 + 0x4e) == 1) {
      uVar30 = hcc_switch_high_pri_queue(param_1,(char)iVar6);
      iVar7 = (int)((ulonglong)uVar30 >> 0x20);
      if ((int)uVar30 != 0) break;
    }
    if ((param_1[0xc9] == 2) ||
       (puVar8 = (undefined4 *)hcc_list_dequeue(piVar19,iVar7), puVar8 == (undefined4 *)0x0)) break;
    local_38 = (int *******)param_1[0x83];
    local_30 = 0;
    local_2c = 0;
    if (pppppppiVar26 == local_38) {
      local_38 = (int *******)&local_38;
      local_34 = (int *******)&local_38;
      iVar7 = hcc_list_dequeue(piVar11);
      if (iVar7 == 0) {
LAB_000116a6:
        iVar9 = 1;
      }
      else {
        if ((param_1[0xe6] != 0) &&
           (pcVar15 = *(code **)(param_1[0xe6] + 0x14), pcVar15 != (code *)0x0)) {
          iVar9 = (*pcVar15)(iVar7,0x20);
          if (iVar9 != 0) {
            hcc_list_add_tail(&local_38,iVar9);
            param_1[0x41] = param_1[0x41] + 1;
            goto LAB_000116d8;
          }
          hcc_list_add_head(piVar11,iVar7);
          goto LAB_000116a6;
        }
        iVar9 = 0;
      }
      hcc_list_add_tail(piVar19,puVar8);
      iVar7 = extraout_r1;
LAB_000117a2:
      if (iVar9 != 0) break;
    }
    else {
      local_34 = (int *******)param_1[0x84];
      iVar7 = param_1[0x85];
      local_38[1] = (int ******)&local_38;
      *local_34 = (int ******)&local_38;
      local_30 = param_1[0x85];
      param_1[0x83] = (int)pppppppiVar26;
      param_1[0x84] = (int)pppppppiVar26;
      param_1[0x85] = 0;
      *(undefined1 *)(param_1 + 0x86) = 0;
      param_1[iVar7 + 0x41] = param_1[iVar7 + 0x41] + 1;
LAB_000116d8:
      uVar4 = local_30;
      if (uVar28 < local_30) {
        uVar28 = 0;
      }
      else {
        uVar28 = uVar28 - local_30;
      }
      puVar21 = (undefined4 *)*puVar8;
      if (iVar12 == 1) {
        uVar24 = 0;
        uVar22 = puVar8[1];
        uVar23 = *DAT_00011820;
        if (uVar23 == 0) {
          uVar23 = 1;
        }
        uVar17 = param_1[param_2 * 0xc + 0x1b];
        if (uVar28 <= (uint)param_1[param_2 * 0xc + 0x1b]) {
          uVar17 = uVar28;
        }
        if (uVar23 <= uVar17) {
          uVar17 = uVar23;
        }
        *(undefined1 *)puVar21 = 0;
        if (uVar17 != 0) {
          puVar18 = (undefined4 *)0x0;
          do {
            iVar7 = hcc_list_dequeue(piVar11);
            if (iVar7 == 0) goto LAB_00011752;
            if (((param_1[0xe6] != 0) &&
                (pcVar15 = *(code **)(param_1[0xe6] + 0x14), pcVar15 != (code *)0x0)) &&
               (puVar18 = (undefined4 *)(*pcVar15)(iVar7,0x20), puVar18 == (undefined4 *)0x0)) {
              hcc_list_add_head(piVar11,iVar7);
              goto LAB_00011752;
            }
            hcc_list_add_tail(pppppppiVar26,puVar18);
            if ((int)uVar22 <= (int)uVar24) goto LAB_00011752;
            *(char *)((int)puVar21 + uVar24) = (char)((int)puVar18[1] >> 3);
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar17);
          bVar29 = uVar24 != uVar22;
          if (bVar29) {
            uVar22 = 0;
            puVar18 = puVar21;
          }
          if (bVar29) {
            *(char *)((int)puVar18 + uVar24) = (char)uVar22;
          }
LAB_00011752:
          if (pppppppiVar26 != (int *******)param_1[0x83]) {
            param_1[0x87] = param_2;
          }
        }
      }
      else {
        *puVar21 = 0;
      }
      hcc_list_add_head(&local_38,puVar8);
      iVar9 = oal_sdio_transfer_list(*param_1,&local_38,1);
      if ((param_1[0xe6] != 0) &&
         (pcVar15 = *(code **)(param_1[0xe6] + 0x10), pcVar15 != (code *)0x0)) {
        (*pcVar15)(uVar4);
      }
      param_1[param_2 * 0xc + 0x17] = param_1[param_2 * 0xc + 0x17] + uVar4;
      iVar10 = hcc_list_dequeue(&local_38);
      iVar7 = 0;
      if (iVar10 != 0) {
        hcc_list_add_tail(piVar19);
        hcc_tx_list_free(&local_38);
        iVar7 = extraout_r1_00;
        goto LAB_000117a2;
      }
    }
    iVar27 = iVar27 + (uVar25 - uVar28);
  }
  if (*(short *)((int)param_1 + param_2 * 0x30 + 0x4e) == 1) {
    hcc_restore_normal_pri_queue(param_1,(char)iVar6);
    return iVar27;
  }
  return iVar27;
}



/* ===== hcc_host_proc_rx_queue @ 00011824 size=52 ===== */

int hcc_host_proc_rx_queue(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  while (iVar1 = hcc_list_dequeue(param_2 * 0x30 + param_1 + 0xc4), iVar1 != 0) {
    if ((*(undefined4 **)(param_1 + 0x398) == (undefined4 *)0x0) ||
       (pcVar2 = (code *)**(undefined4 **)(param_1 + 0x398), pcVar2 == (code *)0x0)) {
      (**(code **)(iVar1 + 0x14))(iVar1);
    }
    else {
      (*pcVar2)();
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



/* ===== hcc_trans_flow_ctrl_info_init @ 00011858 size=68 ===== */

void hcc_trans_flow_ctrl_info_init(int param_1)

{
  *(undefined4 *)(param_1 + 0x324) = 3;
  *(undefined2 *)(param_1 + 0x338) = 0x505;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x800000;
  *(undefined2 *)(param_1 + 0x84) = 0x200;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)(param_1 + 0x4e) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0x800000;
  *(undefined2 *)(param_1 + 0x54) = 0x200;
  *(undefined4 *)(param_1 + 0x44) = 1;
  return;
}



/* ===== hcc_trans_send_mode_init @ 0001189c size=12 ===== */

void hcc_trans_send_mode_init(int param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



/* ===== hcc_message_register @ 000118a8 size=6 ===== */

void hcc_message_register(undefined4 *param_1)

{
  oal_sdio_message_register(*param_1);
  return;
}



/* ===== hcc_message_unregister @ 000118ae size=6 ===== */

void hcc_message_unregister(undefined4 *param_1)

{
  oal_sdio_message_unregister(*param_1);
  return;
}



/* ===== hcc_rx_sched_transfer @ 000118b4 size=64 ===== */

void hcc_rx_sched_transfer(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = hi_strrchr_constprop_13();
    oal_print_nlogs(uVar1,DAT_000118f8,0x249);
    return;
  }
  __wake_up(param_1 + 0x20,1,1,0);
  return;
}



/* ===== hcc_transfer_rx_data_handler @ 000118fc size=368 ===== */

int hcc_transfer_rx_data_handler(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 **local_30;
  undefined4 **ppuStack_2c;
  uint local_28;
  undefined1 local_24;
  
  local_28 = 0;
  local_24 = 0;
  local_30 = &local_30;
  ppuStack_2c = &local_30;
  iVar1 = oal_sdio_build_rx_list(*param_1,&local_30);
  if (iVar1 == 0) {
    iVar1 = oal_sdio_transfer_list(*param_1,&local_30,0);
    if (iVar1 == 0) {
      uVar4 = local_28;
      if (0x40 < local_28) {
        uVar2 = hi_strrchr_constprop_13();
        oal_print_nlogs(uVar2,DAT_00011a78,599);
        uVar4 = 0;
      }
      param_1[uVar4 + 0x88] = param_1[uVar4 + 0x88] + 1;
      while (puVar3 = (undefined4 *)hcc_list_dequeue(&local_30), puVar3 != (undefined4 *)0x0) {
        if (2 < (*(byte *)*puVar3 & 0x7f) >> 4) {
          uVar2 = hi_strrchr_constprop_13();
          oal_print_nlogs(uVar2,DAT_00011a80,0x22f);
          (*(code *)puVar3[5])(puVar3);
          oal_print_nlogs(uVar2,DAT_00011a78,0x266);
          break;
        }
        if (*(char *)((int)param_1 + 0xdd) == '\x01') {
          if (((uint)*(ushort *)(param_1 + 0x39) < (uint)param_1[0x3f]) &&
             (iVar1 = hcc_list_dequeue(param_1 + 0x3d), iVar1 != 0)) {
            param_1[0x3c] = param_1[0x3c] + 1;
            (**(code **)(iVar1 + 0x14))();
          }
        }
        hcc_list_add_tail(param_1 + 0x3d,puVar3);
      }
      hcc_rx_sched_transfer(param_1);
      iVar1 = 0;
    }
    else {
      hcc_list_purge(&local_30);
      uVar2 = hi_strrchr_constprop_13();
      iVar1 = -1;
      oal_print_nlogs(uVar2,DAT_00011a70,0x28a);
    }
  }
  else {
    uVar2 = hi_strrchr_constprop_13();
    oal_print_nlogs(uVar2,DAT_00011a70,0x283);
  }
  return iVar1;
}



/* ===== hcc_tx_assem_descr_exit @ 00011a8c size=8 ===== */

void hcc_tx_assem_descr_exit(int param_1)

{
  hcc_list_purge(param_1 + 0x388);
  return;
}



/* ===== hcc_host_tx_assem_info_reset @ 00011a94 size=14 ===== */

void hcc_host_tx_assem_info_reset(int param_1)

{
  memset_s(param_1 + 0x104,0x104,0);
  return;
}



/* ===== hcc_host_rx_assem_info_reset @ 00011aa2 size=16 ===== */

void hcc_host_rx_assem_info_reset(int param_1)

{
  memset_s(param_1 + 0x220,0x104,0);
  return;
}



/* ===== hcc_assem_info_init @ 00011ab2 size=42 ===== */

void hcc_assem_info_init(int param_1)

{
  *(undefined4 *)(param_1 + 0x208) = *DAT_00011adc;
  hcc_host_tx_assem_info_reset();
  hcc_host_rx_assem_info_reset(param_1);
  *(int *)(param_1 + 0x20c) = param_1 + 0x20c;
  *(int *)(param_1 + 0x210) = param_1 + 0x20c;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  return;
}



/* ===== hcc_tx_assem_descr_init @ 00011ae0 size=160 ===== */

undefined4 hcc_tx_assem_descr_init(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = DAT_00011b84;
  if ((*(int *)(param_1 + 0x398) == 0) || (*(int *)(*(int *)(param_1 + 0x398) + 0x18) == 0)) {
    uVar3 = 1;
  }
  else {
    iVar4 = 0;
    iVar5 = param_1 + 0x388;
    *(int *)(param_1 + 0x388) = iVar5;
    *(int *)(param_1 + 0x38c) = iVar5;
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(undefined1 *)(param_1 + 0x394) = 0;
    *(undefined1 *)(param_1 + 900) = 2;
    do {
      puVar1 = (uint *)(**(code **)(*(int *)(param_1 + 0x398) + 0x18))(0x40,1);
      if (puVar1 == (uint *)0x0) {
        hcc_list_purge(iVar5);
        return 0xfffffff4;
      }
      hcc_list_add_tail(iVar5,puVar1);
      if ((*puVar1 & 3) != 0) {
        uVar2 = hi_strrchr_constprop_13();
        oal_print_nlogs(uVar2,uVar3,0x2c5);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 900));
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== hcc_dev_flowctrl_off @ 00011b88 size=18 ===== */

void hcc_dev_flowctrl_off(int param_1)

{
  *(undefined4 *)(param_1 + 0x324) = 2;
  *(int *)(param_1 + 0x32c) = *(int *)(param_1 + 0x32c) + 1;
  return;
}



/* ===== hcc_flow_off_callback @ 00011b9a size=10 ===== */

undefined4 hcc_flow_off_callback(void)

{
  hcc_dev_flowctrl_off();
  return 0;
}



/* ===== hcc_host_init @ 00011ba4 size=648 ===== */

undefined4 hcc_host_init(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int local_40;
  int local_3c;
  undefined4 uStack_38;
  int local_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  
  if ((*(uint *)(((uint)&local_40 & 0xffffe000) + 4) & 0xffff00) == 0) {
    uVar6 = 0xcc0;
  }
  else {
    uVar6 = 0xa20;
  }
  puVar2 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00011e2c + 0x28),uVar6);
  uVar3 = hi_strrchr_constprop_13();
  piVar1 = DAT_00011e7c;
  uVar6 = DAT_00011e34;
  uStack_38 = DAT_00011e30;
  if (puVar2 == (undefined4 *)0x0) {
    uVar6 = 0x332;
    uVar7 = 1;
    uStack_38 = DAT_00011e40;
    local_40 = 1;
LAB_00011c78:
    iStack_28 = 0;
    local_3c = iStack_28;
    local_34 = iStack_28;
    iStack_30 = iStack_28;
    local_2c = iStack_28;
    oal_print_nlogs(uVar3,DAT_00011e34,uVar6);
    return uVar7;
  }
  *DAT_00011e7c = (int)puVar2;
  local_3c = 0;
  local_2c = 0;
  iStack_28 = 0;
  local_34 = 0;
  iStack_30 = 0;
  local_40 = 3;
  oal_print_nlogs(uVar3,uVar6,0x338);
  iVar4 = memset_s(puVar2,0x39c,0);
  if (iVar4 != 0) goto LAB_00011c46;
  iVar5 = oal_sdio_init(puVar2,1,DAT_00011e38);
  if (iVar5 != 0) {
    uStack_38 = DAT_00011e3c;
    local_40 = 1;
    local_3c = iVar4;
    local_34 = iVar4;
    iStack_30 = iVar4;
    local_2c = iVar4;
    iStack_28 = iVar4;
    oal_print_nlogs(uVar3,DAT_00011e34,0x33f);
    goto LAB_00011c46;
  }
  __init_waitqueue_head(puVar2 + 6,DAT_00011e44,piVar1 + 2);
  __init_waitqueue_head(puVar2 + 8,DAT_00011e48,piVar1 + 2);
  hcc_transfer_queues_init_part_2(puVar2);
  hcc_trans_flow_ctrl_info_init();
  __mutex_init(puVar2 + 1,DAT_00011e4c,piVar1 + 2);
  puVar2[0xe6] = param_1;
  local_40 = hcc_task_init(puVar2);
  if (local_40 == 0) {
    puVar8 = puVar2 + 0xb;
    init_timer_key(puVar8,DAT_00011e54,0,0);
    puVar2[0xd] = *DAT_00011e58 + 3;
    add_timer(puVar8);
    puVar2[0x10] = 0;
    hcc_assem_info_init(puVar2);
    hcc_trans_send_mode_init(puVar2);
    iVar4 = hcc_tx_assem_descr_init();
    if (iVar4 != 0) {
      uStack_38 = DAT_00011e5c;
      uVar6 = 0x35d;
      goto LAB_00011cdc;
    }
    iVar5 = hcc_message_register(puVar2,2,DAT_00011e60,puVar2);
    if (iVar5 == 0) {
      iVar4 = hcc_message_register(puVar2,0xe,DAT_00011e68,puVar2);
      if (iVar4 == 0) {
        iVar4 = oal_sdio_send_msg(*puVar2,0x12);
        if (iVar4 == 0) {
          iVar4 = oal_sdio_send_msg(*puVar2,0x15);
          if (iVar4 == 0) {
            uStack_38 = DAT_00011e78;
            uVar6 = 0x388;
            local_40 = 2;
            uVar7 = 0;
            goto LAB_00011c78;
          }
          uVar6 = 0x385;
          uStack_38 = DAT_00011e74;
        }
        else {
          uStack_38 = DAT_00011e70;
          uVar6 = 0x36f;
        }
      }
      else {
        uVar6 = 0x369;
        uStack_38 = DAT_00011e6c;
      }
      iStack_28 = 0;
      local_40 = 1;
      local_3c = iStack_28;
      local_34 = iStack_28;
      iStack_30 = iStack_28;
      local_2c = iStack_28;
      oal_print_nlogs(uVar3,DAT_00011e34,uVar6);
      hcc_message_unregister(puVar2,2);
    }
    else {
      uStack_38 = DAT_00011e64;
      local_40 = 1;
      local_3c = iVar4;
      local_34 = iVar4;
      iStack_30 = iVar4;
      local_2c = iVar4;
      iStack_28 = iVar4;
      oal_print_nlogs(uVar3,DAT_00011e34,0x363);
    }
    hcc_list_purge(puVar2 + 0xe2);
    del_timer(puVar8);
    puVar2[0x10] = 3;
  }
  else {
    uVar6 = 0x34e;
    uStack_38 = DAT_00011e50;
LAB_00011cdc:
    iStack_28 = 0;
    local_40 = 1;
    local_3c = iStack_28;
    local_34 = iStack_28;
    iStack_30 = iStack_28;
    local_2c = iStack_28;
    oal_print_nlogs(uVar3,DAT_00011e34,uVar6);
  }
  oal_kthread_stop(puVar2[4]);
  puVar2[4] = 0;
  oal_sdio_exit(*puVar2);
LAB_00011c46:
  kfree(puVar2);
  return 1;
}



/* ===== hcc_delete_tx_sched_timer @ 00011e80 size=50 ===== */

void hcc_delete_tx_sched_timer(int param_1)

{
  short sVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x40) != 3)) {
    sVar1 = 10000;
    do {
      if (*(int *)(param_1 + 0x40) != 1) break;
      sVar1 = sVar1 + -1;
      usleep_range(1);
    } while (sVar1 != 0);
    del_timer(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x40) = 3;
  }
  return;
}



/* ===== hcc_host_exit @ 00011eb2 size=90 ===== */

void hcc_host_exit(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (undefined4 *)0x0) {
    hcc_message_unregister(param_1,0xe,param_3,param_4,param_4);
    hcc_list_purge(param_1 + 0xe2);
    hcc_delete_tx_sched_timer(param_1);
    oal_disable_sdio_state(*param_1,3);
    hcc_exit_task_thread(param_1);
    oal_kthread_stop(param_1[4]);
    oal_kthread_stop(param_1[5]);
    hcc_clear_queues(param_1,0);
    hcc_clear_queues(param_1,1);
    param_1[4] = 0;
    oal_sdio_exit(*param_1);
    kfree(param_1);
    *DAT_00011f0c = 0;
  }
  return;
}



/* ===== hcc_thread_process.part.1 @ 00011f10 size=24 ===== */

int hcc_thread_process_part_1
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = hcc_host_proc_tx_queue(param_1,0,param_3,param_4,param_4);
  iVar2 = hcc_host_proc_tx_queue(param_1,1);
  return iVar2 + iVar1;
}



/* ===== hi_strrchr.constprop.5 @ 00011f28 size=14 ===== */

char * hi_strrchr_constprop_5(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strrchr(param_1,0x2f);
  if (pcVar1 != (char *)0x0) {
    pcVar1 = pcVar1 + 1;
  }
  return pcVar1;
}



/* ===== oal_kthread_create @ 00011f36 size=196 ===== */

uint oal_kthread_create(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint __pid;
  undefined4 uVar1;
  int iVar2;
  sched_param local_1c;
  
  __pid = kthread_create_on_node(param_2,param_3,0xffffffff,DAT_00011ffc,param_1);
  if ((__pid == 0) || (0xfffff000 < __pid)) {
    __pid = 0;
    uVar1 = hi_strrchr_constprop_5(DAT_00012000);
    oal_print_nlogs(uVar1,DAT_00012008,0x42);
  }
  else {
    local_1c.__sched_priority = *(int *)(param_4 + 4);
    iVar2 = sched_setscheduler(__pid,*(int *)(param_4 + 8),&local_1c);
    if (iVar2 != 0) {
      uVar1 = hi_strrchr_constprop_5(DAT_00012000);
      oal_print_nlogs(uVar1,DAT_00012008,0x4a);
    }
    if (*(int *)(param_4 + 0xc) < 0) {
      uVar1 = hi_strrchr_constprop_5(DAT_00012000);
      oal_print_nlogs(uVar1,DAT_00012008,0x50);
    }
    else {
      kthread_bind(__pid);
    }
    wake_up_process(__pid);
  }
  return __pid;
}



/* ===== queues_len_check @ 00012014 size=26 ===== */

bool queues_len_check(int param_1,int param_2)

{
  param_1 = param_2 * 0x60 + param_1;
  if (*(int *)(param_1 + 0x6c) == 0) {
    return *(int *)(param_1 + 0x9c) != 0;
  }
  return true;
}



/* ===== hcc_thread_tx_wait_event_cond_check @ 0001202e size=32 ===== */

bool hcc_thread_tx_wait_event_cond_check
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r2;
  bool bVar2;
  
  iVar1 = queues_len_check(param_1,0,param_1,param_4,param_4);
  bVar2 = false;
  if (iVar1 != 0) {
    if (*(int *)(extraout_r2 + 0x28) == 0) {
      bVar2 = *(int *)(extraout_r2 + 0x324) == 3;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



/* ===== hcc_task_tx_thread @ 0001204e size=248 ===== */

int hcc_task_tx_thread(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_34 [24];
  
  kernel_sigaction(0xf,2);
  uVar2 = hi_strrchr_constprop_5(DAT_00012148);
  pcVar1 = DAT_00012150;
  iVar5 = 0;
  oal_print_nlogs(uVar2,DAT_00012154,0x98);
  *pcVar1 = '\0';
  pcVar1[1] = '\x01';
  do {
    if ((*pcVar1 == '\x01') || (iVar3 = kthread_should_stop(), iVar3 != 0)) {
      uVar2 = hi_strrchr_constprop_5(DAT_00012148);
      uVar4 = 0x9d;
LAB_000120b4:
      oal_print_nlogs(uVar2,DAT_00012154,uVar4);
      pcVar1[1] = '\0';
      return iVar5;
    }
    _cond_resched();
    iVar5 = hcc_thread_tx_wait_event_cond_check(param_1);
    if (iVar5 == 1) {
      iVar5 = 0;
    }
    else {
      init_wait_entry(auStack_34,0);
      while( true ) {
        iVar5 = prepare_to_wait_event(param_1 + 0x18,auStack_34,1);
        iVar3 = hcc_thread_tx_wait_event_cond_check(param_1);
        if (iVar3 == 1) break;
        if (iVar5 != 0) {
          if (iVar5 == -0x200) goto LAB_00012104;
          goto LAB_00012134;
        }
        schedule();
      }
      finish_wait(param_1 + 0x18,auStack_34);
      iVar5 = 0;
    }
LAB_00012134:
    if (*pcVar1 == '\x01') {
LAB_00012104:
      uVar2 = hi_strrchr_constprop_5(DAT_00012148);
      uVar4 = 0xa3;
      goto LAB_000120b4;
    }
    hcc_thread_process_part_1(param_1);
  } while( true );
}



/* ===== hcc_thread_process @ 00012160 size=32 ===== */

int hcc_thread_process(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = hcc_thread_process_part_1();
    return iVar1;
  }
  iVar1 = hcc_host_proc_rx_queue(param_1,0);
  iVar2 = hcc_host_proc_rx_queue(param_1,1);
  return iVar2 + iVar1;
}



/* ===== hcc_task_rx_thread @ 00012180 size=238 ===== */

undefined4 hcc_task_rx_thread(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r2;
  undefined1 auStack_2c [24];
  
  kernel_sigaction(0xf,2);
  uVar2 = hi_strrchr_constprop_5(DAT_00012270);
  oal_print_nlogs(uVar2,DAT_00012278,0x7c);
  pcVar1 = DAT_0001227c;
  *DAT_0001227c = '\0';
  do {
    if ((*pcVar1 == '\x01') || (iVar3 = kthread_should_stop(), iVar3 != 0)) {
      uVar2 = hi_strrchr_constprop_5(DAT_00012270);
      uVar4 = 0x80;
LAB_000121de:
      oal_print_nlogs(uVar2,DAT_00012278,uVar4);
      return 0;
    }
    _cond_resched();
    iVar3 = queues_len_check(param_1,1);
    if (iVar3 != 1) {
      init_wait_entry(auStack_2c,0);
      while( true ) {
        uVar2 = prepare_to_wait_event(param_1 + 0x20,auStack_2c,1);
        iVar3 = queues_len_check(param_1,1,uVar2);
        if (iVar3 == 1) break;
        if (extraout_r2 != 0) {
          if (extraout_r2 == -0x200) goto LAB_00012230;
          goto LAB_0001225e;
        }
        schedule();
      }
      finish_wait(param_1 + 0x20,auStack_2c);
    }
LAB_0001225e:
    if (*pcVar1 == '\x01') {
LAB_00012230:
      uVar2 = hi_strrchr_constprop_5(DAT_00012270);
      uVar4 = 0x86;
      goto LAB_000121de;
    }
    hcc_thread_process(param_1,1);
  } while( true );
}



/* ===== hcc_get_thread_exit_flag @ 00012288 size=6 ===== */

undefined1 hcc_get_thread_exit_flag(void)

{
  return *DAT_00012290;
}



/* ===== hcc_exit_task_thread @ 00012294 size=38 ===== */

void hcc_exit_task_thread(void)

{
  undefined1 *puVar1;
  short sVar2;
  
  puVar1 = DAT_000122bc;
  sVar2 = 0x2711;
  *DAT_000122bc = 1;
  hcc_sched_transfer();
  while ((puVar1[1] != '\0' && (sVar2 = sVar2 + -1, sVar2 != 0))) {
    usleep_range(10);
  }
  return;
}



/* ===== hcc_task_init @ 000122c0 size=126 ===== */

undefined1 hcc_task_init(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  memset(&local_24,0,0x14);
  uVar4 = 1;
  memset_s(DAT_00012340,0x10,0);
  __init_waitqueue_head(DAT_00012344 + -0xc,DAT_00012348);
  memset_s(&local_24,0x14,0);
  local_1c = 1;
  uStack_18 = 0;
  local_24 = 0x4000;
  uStack_20 = 3;
  uVar2 = oal_kthread_create(DAT_00012350,DAT_0001234c,param_1,&local_24);
  uVar1 = DAT_00012354;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar3 = oal_kthread_create(DAT_00012358,uVar1,param_1,&local_24);
  *(uint *)(param_1 + 0x14) = uVar3;
  if ((((*(uint *)(param_1 + 0x10) != 0) && (*(uint *)(param_1 + 0x10) < 0xfffff001)) &&
      (uVar3 != 0)) && (uVar4 = 0, 0xfffff000 < uVar3)) {
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== dev_put @ 0001235c size=24 ===== */

void dev_put(int param_1)

{
  if (param_1 != 0) {
    disableIRQinterrupts();
    **(int **)(param_1 + 600) = **(int **)(param_1 + 600) + -1;
  }
  return;
}



/* ===== hcc_adapt_tx_flow_ctrl_handle @ 00012374 size=24 ===== */

bool hcc_adapt_tx_flow_ctrl_handle(int param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (param_1 == 1) {
    bVar2 = 1 < param_2;
    bVar1 = param_2 == 2;
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    bVar2 = 4 < param_2;
    bVar1 = param_2 == 5;
  }
  return !bVar2 || bVar1;
}



/* ===== oal_memalloc @ 0001238c size=44 ===== */

void oal_memalloc(undefined4 param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(((uint)&stack0x00000000 & 0xffffe01f) + 4) & 0xffff00) == 0) {
    uVar1 = 0xcc0;
  }
  else {
    uVar1 = 0xa20;
  }
  __kmalloc(param_1,uVar1);
  return;
}



/* ===== hcc_adapt_check_discard_frame @ 000123b8 size=38 ===== */

undefined4 hcc_adapt_check_discard_frame(int param_1,int param_2,undefined4 *param_3)

{
  if (((param_1 == 1) && ((*(byte *)*param_3 & 0x70) == 0x20)) &&
     (0x1000 < *(uint *)(param_2 + 0x28))) {
    usleep_range(100);
  }
  return 1;
}



/* ===== hi_strrchr.constprop.9 @ 000123de size=4 ===== */

undefined4 hi_strrchr_constprop_9(void)

{
  return DAT_000123e4;
}



/* ===== hcc_adapt_len_align @ 000123e8 size=158 ===== */

undefined4 * hcc_adapt_len_align(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  puVar3 = param_1;
  if (param_1[3] == 0) {
    iVar5 = param_1[2];
    uVar6 = *(uint *)(iVar5 + 0x50);
    if ((uVar6 & param_2 - 1U) != 0) {
      iVar1 = __aeabi_uidiv((param_2 - 1U) + uVar6);
      if ((uint)(iVar1 * param_2) < uVar6) {
        uVar2 = hi_strrchr_constprop_9();
        oal_print_nlogs(uVar2,DAT_0001248c,0xf9);
      }
      else {
        uVar6 = iVar1 * param_2 - uVar6;
        uVar4 = 0;
        if (*(int *)(iVar5 + 0x54) == 0) {
          uVar4 = *(int *)(iVar5 + 0x9c) - *(int *)(iVar5 + 0x98);
        }
        if ((uVar6 <= uVar4) || (iVar1 = pskb_expand_head(iVar5,0,uVar6,0xcc0), iVar1 == 0)) {
          skb_put(iVar5,uVar6);
          *param_1 = *(undefined4 *)(iVar5 + 0xa4);
          param_1[1] = *(undefined4 *)(iVar5 + 0x50);
          param_1[2] = iVar5;
          param_1[3] = 0;
          param_1[5] = DAT_00012490;
          return param_1;
        }
      }
      puVar3 = (undefined4 *)0x0;
      kfree(param_1);
    }
  }
  return puVar3;
}



/* ===== hcc_adapt_awake_tcpip_tx_queue @ 00012494 size=90 ===== */

void hcc_adapt_awake_tcpip_tx_queue(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x28) < 200) && (*(char *)(param_1 + 0x2c) == '\x01')) {
    iVar1 = dev_get_by_name(DAT_000124f4,DAT_000124f0);
    if (iVar1 == 0) {
      uVar2 = hi_strrchr_constprop_9();
      oal_print_nlogs(uVar2,DAT_000124fc,0x17d);
    }
    else {
      iVar1 = dev_put();
      netif_tx_wake_queue(*(undefined4 *)(iVar1 + 0x21c));
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}



/* ===== hcc_adapt_mem_free @ 00012500 size=90 ===== */

void hcc_adapt_mem_free(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1[3] == 0) {
      if (param_1[2] != 0) {
        kfree_skb();
      }
    }
    else if (param_1[3] == 1) {
      if (*param_1 != 0) {
        kfree();
      }
    }
    else {
      uVar1 = hi_strrchr_constprop_9();
      oal_print_nlogs(uVar1,DAT_00012560,0x15c);
    }
    kfree(param_1);
    return;
  }
  return;
}



/* ===== hcc_adapt_rx_data_process @ 00012564 size=394 ===== */

undefined4 hcc_adapt_rx_data_process(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  pbVar6 = (byte *)*param_1;
  if (2 < (*pbVar6 & 0x7f) >> 4) {
    (*(code *)param_1[5])();
    return 1;
  }
  if (param_1[3] != 0) {
    (*(code *)param_1[5])();
    return 0;
  }
  puVar7 = (undefined4 *)param_1[2];
  *puVar7 = 0;
  puVar7[1] = 0;
  uVar4 = ((pbVar6[1] & 0x7f) >> 5) + 0x40;
  if (uVar4 <= (uint)puVar7[0x14]) {
    puVar7[0x14] = puVar7[0x14] - uVar4;
    puVar7[0x29] = uVar4 + puVar7[0x29];
  }
  puVar7[0x14] = (uint)pbVar6[3] << 4 | (uint)(pbVar6[2] >> 4);
  uVar4 = (uint)*pbVar6;
  uVar8 = (uVar4 & 0x7f) >> 4;
  if (uVar8 == 1) {
    iVar2 = oal_send_user_msg(puVar7[0x29]);
    if (iVar2 == 0) goto LAB_00012666;
    uVar1 = hi_strrchr_constprop_9();
    uVar5 = 0x5c;
    uVar3 = DAT_000126f8;
    goto LAB_00012662;
  }
  if ((byte)((uVar4 << 0x19) >> 0x1d) == 0) {
    iVar2 = wal_rx_data_proc(puVar7);
    if (iVar2 != 0) {
      uVar3 = hi_strrchr_constprop_9();
      oal_print_nlogs(uVar3,DAT_000126f8,0x53);
    }
    goto LAB_0001261e;
  }
  if (uVar8 == 2) {
    if (3 < ((uint)pbVar6[3] << 4 | (uint)(pbVar6[2] >> 4))) {
      uVar4 = uVar4 & 0xf;
      uVar3 = puVar7[0x29];
      if (uVar4 == 3) {
        uVar1 = hi_strrchr_constprop_9(param_1,uVar3);
        uVar5 = 0x1d9;
        uVar3 = DAT_00012700;
      }
      else if (uVar4 == 4) {
        uVar1 = hi_strrchr_constprop_9(param_1,uVar3);
        uVar5 = 0x1db;
        uVar3 = DAT_00012700;
      }
      else {
        if (uVar4 != 5) goto LAB_00012666;
        uVar1 = hi_strrchr_constprop_9(param_1,uVar3);
        uVar5 = 0x1dd;
        uVar3 = DAT_00012700;
      }
      goto LAB_00012662;
    }
  }
  else {
    uVar1 = hi_strrchr_constprop_9();
    uVar5 = 0x61;
    uVar3 = DAT_000126f8;
LAB_00012662:
    oal_print_nlogs(uVar1,uVar3,uVar5);
  }
LAB_00012666:
  kfree_skb(puVar7);
LAB_0001261e:
  kfree(param_1);
  return 0;
}



/* ===== oal_netif_stop_queue @ 00012710 size=26 ===== */

void oal_netif_stop_queue(int param_1)

{
  if (param_1 != 0) {
    disableIRQinterrupts();
    *(uint *)(*(int *)(param_1 + 0x21c) + 0x44) = *(uint *)(*(int *)(param_1 + 0x21c) + 0x44) | 1;
  }
  return;
}



/* ===== hcc_adapt_stop_tcpip_tx_queue @ 0001272a size=94 ===== */

void hcc_adapt_stop_tcpip_tx_queue(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((1000 < *(uint *)(param_1 + 0x28)) && (*(char *)(param_1 + 0x2c) == '\0')) {
    iVar1 = dev_get_by_name(DAT_0001278c,DAT_00012788);
    if (iVar1 != 0) {
      dev_put();
      oal_netif_stop_queue();
      *(undefined1 *)(param_1 + 0x2c) = 1;
      oal_netif_stop_queue();
      return;
    }
    uVar2 = hi_strrchr_constprop_9();
    oal_print_nlogs(uVar2,DAT_00012794,0x16b);
  }
  return;
}



/* ===== hcc_structure_conversion @ 00012798 size=104 ===== */

undefined4 * hcc_structure_conversion(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)oal_memalloc(0x20);
  if (puVar3 != (undefined4 *)0x0) {
    memset_s(puVar3,0x20,0);
    if (param_2 == 0) {
      *puVar3 = param_1[0x29];
      puVar3[1] = param_1[0x14];
      puVar3[2] = param_1;
    }
    else {
      if (param_2 != 1) {
        kfree(puVar3);
        return (undefined4 *)0x0;
      }
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = 0;
    }
    puVar3[3] = param_2;
    HintPreloadData(DAT_00012800);
    do {
      ExclusiveAccess(DAT_00012800);
      iVar4 = *DAT_00012800;
      bVar1 = (bool)hasExclusiveAccess(DAT_00012800);
    } while (!bVar1);
    *DAT_00012800 = iVar4 + 1;
    uVar2 = DAT_00012804;
    puVar3[4] = iVar4 + 1;
    puVar3[5] = uVar2;
  }
  return puVar3;
}



/* ===== hcc_adapt_alloc_unc_buf @ 00012808 size=114 ===== */

undefined4 hcc_adapt_alloc_unc_buf(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int local_20;
  undefined4 local_1c;
  
  if (param_2 == 0) {
    piVar1 = (int *)__netdev_alloc_skb(0,param_1,0xcc0);
    if (piVar1 == (int *)0x0) {
      uVar2 = hi_strrchr_constprop_9();
      oal_print_nlogs(uVar2,DAT_00012880,0x115);
      return 0;
    }
    skb_put(piVar1,param_1);
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    local_20 = oal_memalloc();
    if (local_20 == 0) {
      return 0;
    }
    piVar1 = &local_20;
    local_1c = param_1;
  }
  uVar2 = hcc_structure_conversion(piVar1,param_2);
  return uVar2;
}



/* ===== hcc_tx_hcc_hdr_init @ 00012884 size=100 ===== */

bool hcc_tx_hcc_hdr_init(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  iVar4 = param_1[1];
  if (pbVar5 != (byte *)0x0) {
    bVar1 = *pbVar5;
    bVar2 = (byte)((*param_2 & 7) << 4);
    *pbVar5 = bVar1 & 0x8f | bVar2;
    *pbVar5 = bVar1 & 0x80 | bVar2 | (byte)param_2[1] & 0xf;
    pbVar5[3] = (byte)((iVar4 - 0x40U) * 0x100000 >> 0x18);
    pbVar5[2] = pbVar5[2] & 0xf | (byte)((iVar4 - 0x40U & 0xf) << 4);
    uVar3 = param_2[2];
    *pbVar5 = *pbVar5 & 0x7f | (char)uVar3 * -0x80;
    pbVar5[1] = (0x3cU - (char)uVar3 & 0x3f) >> 1 | pbVar5[1] & 0x80;
  }
  return pbVar5 == (byte *)0x0;
}



/* ===== hcc_tx_data_adapt @ 000128e8 size=296 ===== */

undefined4 hcc_tx_data_adapt(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  byte in_Q;
  undefined8 uVar11;
  int local_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined4 local_2c;
  uint local_28;
  
  if ((uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0)) < 0x40) {
    uVar2 = hi_strrchr_constprop_9();
    uVar7 = 0xde;
  }
  else {
    skb_push(param_1,0x40);
    local_30 = 0;
    local_28 = (uint)(param_2 != 1);
    local_2c = 0;
    local_38 = param_2;
    uStack_34 = param_3;
    iVar3 = hcc_host_get_handler();
    uVar1 = local_28;
    iVar4 = hcc_structure_conversion(param_1,0);
    if (iVar4 != 0) {
      iVar5 = hcc_tx_hcc_hdr_init(iVar4,&local_38);
      if (iVar5 == 0) {
        iVar5 = uVar1 * 0x30;
        iVar10 = iVar5 + 0x44 + iVar3;
        if ((*(int *)(iVar3 + 0x398) != 0) &&
           (pcVar8 = *(code **)(*(int *)(iVar3 + 0x398) + 0x28), pcVar8 != (code *)0x0)) {
          (*pcVar8)(iVar10);
        }
        if (((*(int *)(iVar3 + 0x398) != 0) &&
            (pcVar8 = *(code **)(*(int *)(iVar3 + 0x398) + 4), pcVar8 != (code *)0x0)) &&
           (iVar6 = (*pcVar8)(local_28,iVar10,iVar4), iVar6 == 0)) {
          kfree_skb(*(undefined4 *)(iVar4 + 8));
          kfree(iVar4);
          return 0;
        }
        if ((*(int *)(iVar3 + 0x398) != 0) &&
           (pcVar8 = *(code **)(*(int *)(iVar3 + 0x398) + 8), pcVar8 != (code *)0x0)) {
          uVar11 = (*pcVar8)(local_28,iVar10,iVar4);
          iVar10 = (int)((ulonglong)uVar11 >> 0x20);
          if ((int)uVar11 == 0) goto LAB_00012a06;
        }
        iVar10 = iVar5 + 100;
        iVar6 = iVar10 + iVar3;
        iVar10 = (uint)(byte)((iVar10 < 0) << 4 | (iVar10 == 0) << 3 |
                              (0xffffffcb < iVar5 + 0x30U) << 2 | SCARRY4(iVar5 + 0x30U,0x34) << 1 |
                             in_Q) << 0x1b;
        disableIRQinterrupts();
        piVar9 = *(int **)(iVar6 + 4);
        *(int *)(iVar6 + 4) = iVar4 + 0x18;
        *(int *)(iVar4 + 0x18) = iVar6;
        *(int **)(iVar4 + 0x1c) = piVar9;
        *piVar9 = iVar4 + 0x18;
        iVar4 = uVar1 * 0x30 + iVar3;
        *(int *)(iVar4 + 0x6c) = *(int *)(iVar4 + 0x6c) + 1;
LAB_00012a06:
        hcc_sched_transfer(iVar3,iVar10);
        return 0;
      }
      kfree(iVar4);
    }
    uVar2 = hi_strrchr_constprop_9();
    uVar7 = 0xe8;
  }
  oal_print_nlogs(uVar2,DAT_00012a14,uVar7);
  return 1;
}



/* ===== hcc_adapt_init @ 00012a1c size=6 ===== */

void hcc_adapt_init(void)

{
  hcc_host_init(DAT_00012a24);
  return;
}



/* ===== hcc_adapt_exit @ 00012a28 size=14 ===== */

void hcc_adapt_exit(void)

{
  hcc_host_get_handler();
  hcc_host_exit();
  return;
}



/* ===== memcpy_s @ 00012a38 size=134 ===== */

undefined4 memcpy_s(void *param_1,uint param_2,void *param_3,uint param_4)

{
  if ((param_2 < param_4) || (param_1 == (void *)0x0)) {
    if ((int)param_2 < 1) {
      return 0x22;
    }
    if (param_1 == (void *)0x0) {
      return 0x16;
    }
    if (param_3 == (void *)0x0) goto LAB_00012a72;
    if (param_2 < param_4) {
      memset(param_1,0,param_2);
      return 0xa2;
    }
  }
  else {
    if (param_3 == (void *)0x0) {
      if ((int)param_2 < 1) {
        return 0x22;
      }
LAB_00012a72:
      memset(param_1,0,param_2);
      return 0x96;
    }
    if ((int)param_2 < 0) {
      return 0x22;
    }
    if ((param_4 != 0) &&
       (((param_3 < param_1 && ((void *)((int)param_3 + param_4) <= param_1)) ||
        ((param_1 < param_3 && ((void *)((int)param_1 + param_4) <= param_3)))))) {
      memcpy(param_1,param_3,param_4);
      return 0;
    }
    if (param_2 == 0) {
      return 0x22;
    }
  }
  if (((param_1 <= param_3) || ((void *)((int)param_3 + param_4) <= param_1)) &&
     ((param_3 <= param_1 || ((void *)(param_4 + (int)param_1) <= param_3)))) {
    return 0;
  }
  memset(param_1,0,param_2);
  return 0xb6;
}



/* ===== memmove_s @ 00012abe size=66 ===== */

undefined4 memmove_s(void *param_1,size_t param_2,void *param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((int)param_2 < 1) {
    uVar1 = 0x22;
  }
  else if (param_1 == (void *)0x0) {
    uVar1 = 0x16;
  }
  else if (param_3 == (void *)0x0) {
    memset(param_1,0,param_2);
    uVar1 = 0x96;
  }
  else if (param_2 < param_4) {
    memset(param_1,0,param_2);
    uVar1 = 0xa2;
  }
  else {
    if (param_1 != param_3) {
      if (param_4 == 0) {
        return 0;
      }
      memmove(param_1,param_3,param_4);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== memset_s @ 00012b00 size=54 ===== */

undefined4 memset_s(void *param_1,uint param_2,int param_3,uint param_4)

{
  if (-1 < (int)param_2) {
    if (param_1 == (void *)0x0) {
      if (param_2 != 0) {
        return 0x16;
      }
      return 0x22;
    }
    if (param_4 <= param_2) {
      memset(param_1,param_3,param_4);
      return 0;
    }
    if (param_2 != 0) {
      memset(param_1,param_3,param_2);
      return 0xa2;
    }
  }
  return 0x22;
}



/* ===== strcat_s @ 00012b36 size=156 ===== */

undefined4 strcat_s(char *param_1,char *param_2,char *param_3)

{
  char *__dest;
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((int)param_2 < 1) {
    uVar1 = 0x22;
  }
  else if (param_1 == (char *)0x0) {
    uVar1 = 0x16;
  }
  else {
    if (param_3 == (char *)0x0) {
      *param_1 = '\0';
    }
    else {
      __dest = param_1;
      do {
        pcVar2 = __dest + 1;
        if (*__dest == '\0') break;
        __dest = pcVar2;
      } while (param_1 + (int)param_2 != pcVar2);
      pcVar4 = __dest + -(int)param_1;
      pcVar2 = param_3;
      do {
        pcVar3 = pcVar2;
        if (param_3 + ((int)param_2 - (int)pcVar4) == pcVar3) break;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      if (((param_1 < param_3) &&
          (param_3 <= param_1 + (int)(pcVar3 + ((int)pcVar4 - (int)param_3)))) ||
         ((param_3 < param_1 && (param_1 <= pcVar3)))) {
        *param_1 = '\0';
        if ((param_3 < __dest) || (param_2 != pcVar4)) {
          return 0xb6;
        }
      }
      else {
        if ((pcVar3 + ((int)pcVar4 - (int)param_3) < param_2) && (param_1 != param_3)) {
          memcpy(__dest,param_3,(size_t)(pcVar3 + (1 - (int)param_3)));
          return 0;
        }
        *param_1 = '\0';
        if (param_2 != pcVar4) {
          return 0xa2;
        }
      }
    }
    uVar1 = 0x96;
  }
  return uVar1;
}



/* ===== strcpy_error @ 00012bd2 size=52 ===== */

undefined4 strcpy_error(undefined1 *param_1,int param_2,int param_3)

{
  char *pcVar1;
  
  if (param_2 < 1) {
    return 0x22;
  }
  if (param_1 == (undefined1 *)0x0) {
    return 0x16;
  }
  if (param_3 == 0) {
    *param_1 = 0;
    return 0x96;
  }
  pcVar1 = (char *)(param_3 + -1);
  while( true ) {
    pcVar1 = pcVar1 + 1;
    if (*pcVar1 == '\0') break;
    if (param_2 == 0) goto LAB_00012be4;
    param_2 = param_2 + -1;
  }
  if (param_2 != 0) {
    return 0;
  }
LAB_00012be4:
  *param_1 = 0;
  return 0xa2;
}



/* ===== strcpy_s @ 00012c06 size=92 ===== */

undefined4 strcpy_s(char *param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((((0 < (int)param_2) && (param_1 != (char *)0x0)) && (param_3 != (char *)0x0)) &&
     (param_1 != param_3)) {
    pcVar2 = param_3;
    do {
      pcVar3 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
      pcVar2 = pcVar3;
    } while (pcVar3 != param_3 + (int)param_2);
    pcVar2 = pcVar2 + (1 - (int)param_3);
    if (pcVar2 <= param_2) {
      if (((param_3 < param_1) && (param_3 + (int)pcVar2 <= param_1)) ||
         ((param_1 < param_3 && (param_1 + (int)pcVar2 <= param_3)))) {
        memcpy(param_1,param_3,(size_t)pcVar2);
        uVar1 = 0;
      }
      else {
        *param_1 = '\0';
        uVar1 = 0xb6;
      }
      return uVar1;
    }
  }
  uVar1 = strcpy_error(param_1,param_2,param_3);
  return uVar1;
}



/* ===== strncat_s @ 00012c62 size=164 ===== */

undefined4 strncat_s(char *param_1,uint param_2,char *param_3,int param_4)

{
  char *__dest;
  char *pcVar1;
  char *pcVar2;
  size_t __n;
  uint uVar3;
  
  if ((int)param_2 < 1) {
    return 0x22;
  }
  if (param_1 == (char *)0x0) {
    return 0x16;
  }
  if (param_3 == (char *)0x0) {
    *param_1 = '\0';
  }
  else {
    if (param_4 < 0) {
      *param_1 = '\0';
      return 0xa2;
    }
    __dest = param_1;
    do {
      pcVar1 = __dest + 1;
      if (*__dest == '\0') break;
      __dest = pcVar1;
    } while (pcVar1 != param_1 + param_2);
    uVar3 = (int)__dest - (int)param_1;
    pcVar1 = param_3;
    do {
      pcVar2 = pcVar1;
      if (param_3 + param_4 == pcVar2) break;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    __n = (int)pcVar2 - (int)param_3;
    if (((param_1 < param_3) && (param_3 <= param_1 + uVar3 + __n)) ||
       ((param_3 < param_1 && (param_1 <= pcVar2)))) {
      *param_1 = '\0';
      if ((param_3 < __dest) || (param_2 != uVar3)) {
        return 0xb6;
      }
    }
    else {
      if ((uVar3 + __n < param_2) && (param_1 != param_3)) {
        memcpy(__dest,param_3,__n);
        param_1[uVar3 + __n] = '\0';
        return 0;
      }
      *param_1 = '\0';
      if (param_2 != uVar3) {
        return 0xa2;
      }
    }
  }
  return 0x96;
}



/* ===== strncpy_error @ 00012d06 size=72 ===== */

undefined4 strncpy_error(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_2 < 1) {
    return 0x22;
  }
  if (param_1 == (undefined1 *)0x0) {
    return 0x16;
  }
  if (param_3 == 0) {
    *param_1 = 0;
    return 0x96;
  }
  if (param_4 < 0) {
LAB_00012d1a:
    *param_1 = 0;
    uVar1 = 0xa2;
  }
  else {
    if (param_4 == 0) {
      *param_1 = 0;
    }
    else {
      pcVar2 = (char *)(param_3 + -1);
      param_4 = param_2 - param_4;
      while (pcVar2 = pcVar2 + 1, *pcVar2 != '\0') {
        if (param_2 == 0) goto LAB_00012d1a;
        if (param_4 == param_2) goto LAB_00012d3c;
        param_2 = param_2 + -1;
      }
      if (param_2 == 0) goto LAB_00012d1a;
    }
LAB_00012d3c:
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== strncpy_s @ 00012d4e size=140 ===== */

undefined4 strncpy_s(char *param_1,uint param_2,char *param_3,uint param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  size_t __n;
  
  if (((((int)param_2 < 1) || (param_1 == (char *)0x0)) || (param_3 == (char *)0x0)) ||
     ((int)param_4 < 1)) {
    uVar1 = strncpy_error(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_4 < param_2) {
    pcVar2 = param_3;
    do {
      pcVar3 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
      pcVar2 = pcVar3;
    } while (pcVar3 != param_3 + param_4);
    __n = (int)pcVar2 - (int)param_3;
  }
  else {
    pcVar2 = param_3;
    do {
      pcVar3 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
      pcVar2 = pcVar3;
    } while (param_3 + param_2 != pcVar3);
    __n = (int)pcVar2 - (int)param_3;
    if (param_2 == __n) {
      *param_1 = '\0';
      return 0xa2;
    }
  }
  if (param_3 > param_1 || param_1 == param_3) {
    if (param_3 <= param_1) {
      if (param_1 != param_3) goto LAB_00012dbc;
      goto LAB_00012da4;
    }
  }
  else {
    if (param_3 + __n < param_1) goto LAB_00012da4;
    if (param_3 <= param_1) goto LAB_00012dbc;
  }
  if (param_3 <= param_1 + __n) {
LAB_00012dbc:
    *param_1 = '\0';
    return 0xb6;
  }
LAB_00012da4:
  memcpy(param_1,param_3,__n);
  param_1[__n] = '\0';
  return 0;
}



/* ===== strtok_s @ 00012dda size=78 ===== */

char * strtok_s(char *param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (((param_3 == (undefined4 *)0x0) || (param_2 == 0)) ||
     ((param_1 == (char *)0x0 && (param_1 = (char *)*param_3, (char *)*param_3 == (char *)0x0)))) {
    return (char *)0x0;
  }
  while( true ) {
    pcVar1 = param_1;
    pcVar2 = pcVar1;
    if (*pcVar1 == '\0') break;
    pcVar3 = (char *)(param_2 + -1);
    do {
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\0') goto LAB_00012e02;
      param_1 = pcVar1 + 1;
    } while (*pcVar1 != *pcVar3);
  }
LAB_00012e02:
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3;
    if (*pcVar3 == '\0') {
LAB_00012e1e:
      *param_3 = pcVar2;
      if (pcVar1 == pcVar2) {
        return (char *)0x0;
      }
      return pcVar1;
    }
    pcVar4 = (char *)(param_2 + -1);
    while( true ) {
      pcVar4 = pcVar4 + 1;
      pcVar2 = pcVar3 + 1;
      if (*pcVar4 == '\0') break;
      if (*pcVar3 == *pcVar4) {
        pcVar2 = pcVar3 + 1;
        *pcVar3 = '\0';
        goto LAB_00012e1e;
      }
    }
  } while( true );
}



/* ===== snprintf_s @ 00012e28 size=30 ===== */

void snprintf_s(void)

{
  vsnprintf_s();
  return;
}



/* ===== snprintf_truncated_s @ 00012e46 size=26 ===== */

void snprintf_truncated_s
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  vsnprintf_truncated_s(param_1,param_2,param_3,&uStack_4,param_1,&uStack_4,param_3);
  return;
}



/* ===== vsnprintf_s @ 00012e60 size=76 ===== */

int vsnprintf_s(undefined1 *param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    if (param_1 == (undefined1 *)0x0) {
      return -1;
    }
    if (param_2 == 0) {
      return -1;
    }
    if ((int)param_2 < 0) {
      return -1;
    }
  }
  else {
    if (param_1 == (undefined1 *)0x0) {
      return -1;
    }
    if (param_2 == 0) {
      return -1;
    }
    if ((int)param_2 < 0) {
      return -1;
    }
    if (param_3 <= DAT_00012eac) {
      if (param_3 < param_2) {
        iVar1 = SecVsnprintfImpl(param_1,param_3 + 1,param_4,param_5);
        if (iVar1 == -2) {
          return -1;
        }
      }
      else {
        iVar1 = SecVsnprintfImpl(param_1,param_2,param_4,param_5);
      }
      if (-1 < iVar1) {
        return iVar1;
      }
    }
  }
  *param_1 = 0;
  return -1;
}



/* ===== vsnprintf_truncated_s @ 00012eb0 size=54 ===== */

int vsnprintf_truncated_s(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    if (param_1 == (undefined1 *)0x0) {
      return -1;
    }
    if (param_2 == 0) {
      return -1;
    }
    if (param_2 < 0) {
      return -1;
    }
  }
  else {
    if (param_1 == (undefined1 *)0x0) {
      return -1;
    }
    if (param_2 == 0) {
      return -1;
    }
    if (param_2 < 0) {
      return -1;
    }
    iVar1 = SecVsnprintfImpl();
    if (-1 < iVar1) {
      return iVar1;
    }
    if (iVar1 == -2) {
      return param_2 + -1;
    }
  }
  *param_1 = 0;
  return -1;
}



/* ===== SecVsnprintfImpl @ 00012ee8 size=104 ===== */

int SecVsnprintfImpl(char *param_1,size_t param_2,char *param_3,__gnuc_va_list param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = param_3;
LAB_00012ef4:
  do {
    do {
      pcVar3 = pcVar4;
      if (*pcVar3 == '\0') {
        iVar2 = vsnprintf(param_1,param_2,param_3,param_4);
        if ((int)param_2 <= iVar2) {
          param_1[param_2 - 1] = '\0';
          return -2;
        }
        if (-1 < iVar2) {
          return iVar2;
        }
        goto LAB_00012f40;
      }
      pcVar4 = pcVar3 + 1;
    } while (*pcVar3 != '%');
    pcVar1 = pcVar3 + 1;
    if (pcVar3[1] != '%') {
      do {
        pcVar4 = pcVar1;
        iVar2 = (int)*pcVar4;
        if ((iVar2 == 0) || (iVar2 < 0)) goto LAB_00012ef4;
        pcVar1 = pcVar4 + 1;
      } while (*(char *)(DAT_00012f50 + iVar2) != '\0');
      if (iVar2 == 0x6e) {
LAB_00012f40:
        *param_1 = '\0';
        return -1;
      }
      goto LAB_00012ef4;
    }
    pcVar4 = pcVar3 + 2;
  } while( true );
}



/* ===== sg_virt @ 00012f54 size=32 ===== */

int sg_virt(uint *param_1)

{
  return param_1[1] +
         (*DAT_00012f78 + ((int)((*param_1 & 0xfffffffc) - *DAT_00012f74) >> 5)) * 0x1000 +
         0x7f000000;
}



/* ===== sg_assign_page @ 00012f7c size=16 ===== */

void sg_assign_page(uint *param_1,uint param_2)

{
  code *pcVar1;
  
  if ((param_2 & 3) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x12f86);
    (*pcVar1)();
  }
  *param_1 = param_2 | *param_1 & 3;
  return;
}



/* ===== oal_gpio_isr @ 00012f8e size=16 ===== */

undefined4 oal_gpio_isr(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    up(param_2 + 0x24);
  }
  return 1;
}



/* ===== hi_strrchr.constprop.16 @ 00012f9e size=14 ===== */

char * hi_strrchr_constprop_16(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strrchr(param_1,0x2f);
  if (pcVar1 != (char *)0x0) {
    pcVar1 = pcVar1 + 1;
  }
  return pcVar1;
}



/* ===== oal_sdio_suspend @ 00012fac size=118 ===== */

undefined4 oal_sdio_suspend(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = hi_strrchr_constprop_16(DAT_00013024);
  oal_print_nlogs(uVar1,DAT_0001302c,0xe7);
  if (param_1 == 0) {
    uVar1 = hi_strrchr_constprop_16(DAT_00013024);
    uVar2 = 0xe9;
  }
  else {
    if (*(int *)(param_1 + 0x40) != 0) {
      return 0;
    }
    uVar1 = hi_strrchr_constprop_16(DAT_00013024);
    uVar2 = 0xef;
  }
  oal_print_nlogs(uVar1,DAT_0001302c,uVar2);
  return 0;
}



/* ===== oal_sdio_resume @ 00013038 size=120 ===== */

undefined4 oal_sdio_resume(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = hi_strrchr_constprop_16(DAT_000130b0);
  oal_print_nlogs(uVar1,DAT_000130b8,0xfa);
  if (param_1 == 0) {
    uVar2 = hi_strrchr_constprop_16(DAT_000130b0);
    uVar1 = 0xfc;
  }
  else {
    if (*(int *)(param_1 + 0x40) != 0) {
      return 0;
    }
    uVar2 = hi_strrchr_constprop_16(DAT_000130b0);
    uVar1 = 0x102;
  }
  oal_print_nlogs(uVar2,DAT_000130b8,uVar1);
  return 0;
}



/* ===== oal_sdio_print_state.part.0 @ 000130c4 size=66 ===== */

void oal_sdio_print_state_part_0(void)

{
  undefined4 uVar1;
  
  uVar1 = hi_strrchr_constprop_16(DAT_00013108);
  oal_print_nlogs(uVar1,DAT_0001310c,0x4e);
  return;
}



/* ===== oal_free_sdio_stru @ 00013114 size=46 ===== */

void oal_free_sdio_stru(void)

{
  undefined4 uVar1;
  
  uVar1 = hi_strrchr_constprop_16(DAT_00013144);
  oal_print_nlogs(uVar1,DAT_0001314c,0x55);
  return;
}



/* ===== oal_get_sdio_default_handler @ 00013150 size=6 ===== */

undefined4 oal_get_sdio_default_handler(void)

{
  return *DAT_00013158;
}



/* ===== oal_sdio_alloc @ 0001315c size=100 ===== */

int oal_sdio_alloc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = hi_strrchr_constprop_16(DAT_000131c0);
    oal_print_nlogs(uVar1,DAT_000131c8,0x61);
    iVar2 = 0;
  }
  else {
    iVar2 = *DAT_000131cc;
    if (iVar2 == 0) {
      uVar1 = hi_strrchr_constprop_16(DAT_000131c0);
      oal_print_nlogs(uVar1,DAT_000131c8,0x67);
    }
    else {
      *(int *)(iVar2 + 4) = param_1;
      *(int *)(param_1 + 0x48) = iVar2;
    }
  }
  return iVar2;
}



/* ===== oal_disable_sdio_state @ 000131d4 size=88 ===== */

void oal_disable_sdio_state(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != (uint *)0x0) && (param_1[1] != 0)) {
    sdio_claim_host();
    uVar2 = *param_1;
    uVar3 = uVar2 & ~param_2;
    *param_1 = uVar3;
    if (uVar3 != uVar2) {
      oal_sdio_print_state_part_0();
    }
    sdio_release_host(param_1[1]);
    return;
  }
  uVar1 = hi_strrchr_constprop_16(DAT_0001322c);
  oal_print_nlogs(uVar1,DAT_00013234,0x75);
  return;
}



/* ===== oal_sdio_remove @ 00013238 size=168 ===== */

void oal_sdio_remove(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c;
  
  if (param_1 == 0) {
    uVar1 = hi_strrchr_constprop_16(DAT_000132e0);
    uVar2 = 0x2fd;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48);
    if (iVar3 == 0) {
      uVar1 = hi_strrchr_constprop_16(DAT_000132e0);
      uVar2 = 0x303;
    }
    else {
      uVar1 = *(undefined4 *)(iVar3 + 4);
      local_1c = 0;
      sdio_claim_host(uVar1);
      sdio_writeb(uVar1,0,9,&local_1c);
      sdio_disable_func(uVar1);
      oal_disable_sdio_state(iVar3,3);
      sdio_release_host(uVar1);
      *(undefined4 *)(param_1 + 0x48) = 0;
      uVar1 = hi_strrchr_constprop_16(DAT_000132e0);
      uVar2 = 0x309;
    }
  }
  oal_print_nlogs(uVar1,DAT_000132e8,uVar2);
  return;
}



/* ===== oal_sdio_send_msg @ 000132f4 size=198 ===== */

int oal_sdio_send_msg(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int local_1c;
  
  local_1c = 0;
  if ((param_1 == 0) || (iVar4 = *(int *)(param_1 + 4), iVar4 == 0)) {
    uVar1 = hi_strrchr_constprop_16(DAT_000133bc);
    oal_print_nlogs(uVar1,DAT_000133c4,0x92);
    local_1c = -0x16;
  }
  else if ((*(int *)(param_1 + 0xc) == 0) ||
          ((pcVar3 = *(code **)(*(int *)(param_1 + 0xc) + 8), pcVar3 == (code *)0x0 ||
           (iVar2 = (*pcVar3)(*(undefined4 *)(param_1 + 8)), iVar2 == 0)))) {
    sdio_claim_host(iVar4);
    sdio_writel(iVar4,1 << (param_2 & 0xff),0x24,&local_1c);
    if (local_1c != 0) {
      uVar1 = hi_strrchr_constprop_16(DAT_000133bc);
      oal_print_nlogs(uVar1,DAT_000133c4,0xa3);
    }
    sdio_release_host(iVar4);
  }
  else {
    uVar1 = hi_strrchr_constprop_16(DAT_000133bc);
    oal_print_nlogs(uVar1,DAT_000133c4,0x9b);
    local_1c = -0x10;
  }
  return local_1c;
}



/* ===== oal_sdio_get_state @ 000133d0 size=16 ===== */

undefined4 oal_sdio_get_state(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    if ((param_2 & ~*param_1) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== oal_sdio_dev_shutdown @ 000133e0 size=138 ===== */

void oal_sdio_dev_shutdown(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_1c;
  
  iVar3 = *DAT_0001346c;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
    sdio_claim_host();
    sdio_f0_writeb(*(undefined4 *)(iVar3 + 4),1,0xf0,&local_1c);
    sdio_release_host(*(undefined4 *)(iVar3 + 4));
    if ((local_1c == 0) &&
       ((iVar1 = oal_sdio_send_msg(iVar3,4), iVar1 == 0 &&
        (iVar1 = oal_sdio_get_state(iVar3,3), iVar1 == 1)))) {
      sdio_claim_host(*(undefined4 *)(iVar3 + 4));
      iVar1 = sdio_disable_func(*(undefined4 *)(iVar3 + 4));
      sdio_release_host(*(undefined4 *)(iVar3 + 4));
      if (iVar1 != 0) {
        uVar2 = hi_strrchr_constprop_16(DAT_00013470);
        oal_print_nlogs(uVar2,DAT_00013478,0xde);
      }
    }
  }
  return;
}



/* ===== oal_enable_sdio_state @ 0001347c size=88 ===== */

void oal_enable_sdio_state(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 != (uint *)0x0) && (param_1[1] != 0)) {
    sdio_claim_host();
    uVar2 = *param_1;
    param_2 = uVar2 | param_2;
    *param_1 = param_2;
    if (param_2 != uVar2) {
      oal_sdio_print_state_part_0();
    }
    sdio_release_host(param_1[1]);
    return;
  }
  uVar1 = hi_strrchr_constprop_16(DAT_000134d4);
  oal_print_nlogs(uVar1,DAT_000134dc,0xba);
  return;
}



/* ===== oal_sdio_transfer_rx_reserved_buff @ 000134e0 size=116 ===== */

undefined4 oal_sdio_transfer_rx_reserved_buff(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x348) == 0) {
    uVar1 = hi_strrchr_constprop_16(DAT_00013554);
    uVar2 = 0x10c;
  }
  else {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x348) + 8);
    if (uVar3 != 0) {
      if (0x20000 < uVar3) {
        return 0xffffffea;
      }
      uVar1 = sdio_readsb(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18),0,uVar3);
      return uVar1;
    }
    uVar1 = hi_strrchr_constprop_16(DAT_00013554);
    uVar2 = 0x113;
  }
  oal_print_nlogs(uVar1,DAT_0001355c,uVar2);
  return 0xffffffea;
}



/* ===== oal_copy_data_to_uncbuf @ 00013564 size=78 ===== */

void oal_copy_data_to_uncbuf(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  piVar3 = *(int **)*param_2;
  piVar2 = (undefined4 *)*param_2;
  while( true ) {
    piVar1 = piVar3;
    if (param_2 == piVar2) {
      return;
    }
    memcpy_s(piVar2[-6],piVar2[-5],param_3 + iVar6);
    uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x348) + iVar5 + 0x10);
    param_4 = param_4 + uVar4 * -0x20;
    iVar6 = iVar6 + uVar4 * 0x20;
    if (param_4 == 0) break;
    iVar5 = iVar5 + 1;
    piVar3 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  return;
}



/* ===== oal_sdio_tranfer_commit_memory @ 000135b2 size=246 ===== */

undefined4 oal_sdio_tranfer_commit_memory(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  uVar5 = param_2[2];
  uVar6 = 0;
  piVar3 = *(int **)*param_2;
  piVar2 = (undefined4 *)*param_2;
  do {
    piVar1 = piVar3;
    if (param_2 == piVar2) {
      if ((uVar5 < uVar7) || (0x20000 < uVar6)) {
LAB_0001366c:
        uVar4 = 0xffffffea;
      }
      else {
        if (uVar6 < 0x200) {
          uVar5 = uVar6 + 3 & 0xfffffffc;
        }
        else {
          uVar5 = uVar6 + 0x1ff & 0xfffffe00;
        }
        sdio_claim_host(*(undefined4 *)(param_1 + 4));
        if (param_3 == 1) {
          uVar4 = sdio_writesb(*(undefined4 *)(param_1 + 4),0,*(undefined4 *)(param_1 + 0x1c));
        }
        else {
          uVar4 = sdio_readsb(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18),0,uVar5);
        }
        sdio_release_host(*(undefined4 *)(param_1 + 4));
        if (param_3 == 0) {
          oal_copy_data_to_uncbuf(param_1,param_2,*(undefined4 *)(param_1 + 0x18),uVar5);
        }
      }
      return uVar4;
    }
    if ((piVar2[-6] & 3U) != 0) {
      uVar4 = hi_strrchr_constprop_16(DAT_000136a8);
      oal_print_nlogs(uVar4,DAT_000136ac,0x144);
      goto LAB_0001366c;
    }
    if ((piVar2[-5] & 0x1fU) != 0) goto LAB_0001366c;
    if (param_3 == 1) {
      memcpy_s(*(int *)(param_1 + 0x1c) + uVar6,0x20000);
    }
    uVar7 = uVar7 + 1;
    uVar6 = uVar6 + piVar2[-5];
    piVar3 = (int *)*piVar1;
    piVar2 = piVar1;
  } while( true );
}



/* ===== check_sg_format @ 000136b4 size=118 ===== */

void check_sg_format(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar2 = DAT_00013734;
  uVar1 = DAT_0001372c;
  iVar5 = 0;
  do {
    if ((iVar5 == param_2) || (param_1 == 0)) {
      return;
    }
    uVar3 = sg_virt(param_1);
    if ((uVar3 & 3) == 0) {
      if ((*(uint *)(param_1 + 8) & 3) != 0) goto LAB_000136ec;
    }
    else {
LAB_000136ec:
      uVar4 = hi_strrchr_constprop_16(uVar1);
      sg_virt(param_1);
      oal_print_nlogs(uVar4,uVar2,0x17a);
    }
    iVar5 = iVar5 + 1;
    param_1 = sg_next(param_1);
  } while( true );
}



/* ===== oal_mmc_io_rw_scat_extended @ 00013738 size=312 ===== */

int oal_mmc_io_rw_scat_extended
              (int param_1,int param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
              undefined4 param_7,uint param_8,uint param_9)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_b4;
  int local_ac;
  undefined1 auStack_9c [8];
  uint local_94;
  uint local_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_74;
  undefined4 local_6c;
  undefined1 auStack_64 [4];
  undefined4 *local_60;
  undefined1 *puStack_5c;
  
  memset(auStack_64,0,0x3c);
  memset(&local_cc,0,0x30);
  memset(auStack_9c,0,0x38);
  if ((param_9 == 0) || ((param_4 & 0xfffe0000) != 0)) {
LAB_00013770:
    iVar3 = -0x16;
  }
  else {
    piVar4 = (int *)**(undefined4 **)(param_1 + 4);
    check_sg_format(param_6,param_7);
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x80000000;
    }
    local_cc = 0x35;
    if (param_5 == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = 0x4000000;
    }
    local_c8 = param_4 << 9 | param_3 << 0x1c | uVar1 | local_c8;
    if ((param_8 == 1) && (param_9 < 0x201)) {
      uVar1 = 0;
      if (param_9 != 0x200) {
        uVar1 = param_9;
      }
      local_c8 = local_c8 | uVar1;
    }
    else {
      local_c8 = local_c8 | param_8 | 0x8000000;
    }
    local_90 = param_8;
    local_b4 = 0x1b5;
    if (param_2 == 0) {
      local_84 = 0x200;
    }
    else {
      local_84 = 0x100;
    }
    local_94 = param_9;
    local_6c = param_6;
    local_74 = param_7;
    local_60 = &local_cc;
    puStack_5c = auStack_9c;
    mmc_set_data_timeout(auStack_9c,piVar4);
    mmc_wait_for_req(*piVar4,auStack_64);
    if (local_ac != 0) {
      return local_ac;
    }
    if (local_88 != 0) {
      return local_88;
    }
    if (*(int *)(*piVar4 + 0x1d8) << 0x1b < 0) {
      uVar2 = hi_strrchr_constprop_16(DAT_00013870);
      oal_print_nlogs(uVar2,DAT_00013878,0x1af);
    }
    else if (-1 < (int)(local_c4 << 0x14)) {
      if (-1 < (int)(local_c4 << 0x16)) {
        if ((local_c4 & 0x100) == 0) {
          return 0;
        }
        return -0x22;
      }
      goto LAB_00013770;
    }
    iVar3 = -5;
  }
  return iVar3;
}



/* ===== oal_sdio_transfer_scatt @ 0001387c size=508 ===== */

int oal_sdio_transfer_scatt
              (int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,uint param_6,
              uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (((param_1 != 0) && (param_7 != 0)) && (param_5 <= param_6)) {
    if (param_4 == 0) {
      uVar1 = hi_strrchr_constprop_16(DAT_00013a78);
      uVar2 = 0x1e9;
    }
    else {
      if (param_5 != 0) {
        if (param_7 < 0x200) {
          uVar7 = param_7 + 3 & 0xfffffffc;
        }
        else {
          uVar7 = param_7 + 0x1ff & 0xfffffe00;
        }
        param_7 = uVar7 - param_7;
        uVar5 = param_5;
        if (param_7 != 0) {
          uVar5 = param_5 + 1;
          if (param_6 < uVar5) {
            uVar1 = hi_strrchr_constprop_16(DAT_00013a78);
            oal_print_nlogs(uVar1,DAT_00013a80,0x1f8);
            return -0xc;
          }
          iVar3 = param_4 + param_5 * 0x10;
          uVar6 = *(uint *)(param_1 + 0x40);
          sg_assign_page(iVar3,*DAT_00013a8c + (uVar6 + 0x50000000 >> 0xc) * 0x20);
          *(uint *)(iVar3 + 4) = uVar6 & 0xfff;
          *(uint *)(iVar3 + 8) = param_7;
        }
        iVar3 = (uVar5 + 0xfffffff) * 0x10;
        *(uint *)(param_4 + iVar3) = *(uint *)(param_4 + iVar3) & 0xfffffffe | 2;
        if ((param_7 & 3) != 0) {
          uVar1 = hi_strrchr_constprop_16(DAT_00013a78);
          oal_print_nlogs(uVar1,DAT_00013a80,0x206);
        }
        uVar1 = *(undefined4 *)(param_1 + 4);
        sdio_claim_host(uVar1);
        iVar3 = oal_sdio_get_state(param_1,3);
        if (iVar3 != 1) {
          sdio_release_host(uVar1);
          return -1;
        }
        uVar6 = 1;
        if (0x1ff < uVar7) {
          uVar6 = uVar7 >> 9;
        }
        if (0x1ff < uVar7) {
          uVar7 = 0x200;
        }
        iVar3 = oal_mmc_io_rw_scat_extended
                          (param_1,param_2 != 0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4),
                           param_3,0,param_4,uVar5,uVar6,uVar7);
        if (iVar3 != 0) {
          uVar2 = hi_strrchr_constprop_16(DAT_00013a78);
          if (param_2 == 0) {
            uVar4 = 0x1d5;
          }
          else {
            uVar4 = 0x1d3;
          }
          oal_print_nlogs(uVar2,DAT_00013a98,uVar4);
        }
        sdio_release_host(uVar1);
        return iVar3;
      }
      uVar1 = hi_strrchr_constprop_16(DAT_00013a78);
      uVar2 = 0x1ef;
    }
    oal_print_nlogs(uVar1,DAT_00013a80,uVar2);
  }
  return -0x16;
}



/* ===== oal_sdio_tranfer_sglist_memory @ 00013aa0 size=238 ===== */

undefined4 oal_sdio_tranfer_sglist_memory(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_34 [4];
  
  bVar3 = false;
  uVar6 = param_2[2];
  local_34[0] = 0;
  local_34[1] = 0;
  uVar13 = uVar6 + 1;
  local_34[2] = 0;
  iVar7 = param_1 + param_3 * 8;
  if (*(uint *)(iVar7 + 0x30) < uVar13) {
    iVar7 = sg_alloc_table(local_34,uVar13,0xcc0);
    if (iVar7 != 0) {
      return 0xfffffff4;
    }
    bVar3 = true;
    iVar7 = local_34[0];
  }
  else {
    iVar7 = *(int *)(iVar7 + 0x34);
  }
  uVar11 = 0;
  memset_s(iVar7,uVar13 * 0x10,0);
  iVar8 = 0;
  iVar12 = iVar7;
  piVar4 = *(int **)*param_2;
  piVar2 = (undefined4 *)*param_2;
  while (piVar1 = piVar4, param_2 != piVar2) {
    uVar10 = piVar2[-6];
    if (((uVar10 & 3) != 0) || (uVar9 = piVar2[-5], (uVar9 & 0x1f) != 0)) goto LAB_00013b88;
    uVar11 = uVar11 + 1;
    sg_assign_page(iVar12,*DAT_00013b90 + (uVar10 + 0x50000000 >> 0xc) * 0x20);
    *(uint *)(iVar12 + 4) = uVar10 & 0xfff;
    *(uint *)(iVar12 + 8) = uVar9;
    iVar8 = iVar8 + piVar2[-5];
    iVar12 = iVar12 + 0x10;
    piVar4 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  if (uVar6 < uVar11) {
LAB_00013b88:
    uVar5 = 0xffffffea;
  }
  else {
    uVar5 = oal_sdio_transfer_scatt(param_1,param_3,0,iVar7,uVar11,uVar13,iVar8);
    if (bVar3) {
      sg_free_table(local_34);
    }
  }
  return uVar5;
}



/* ===== oal_sdio_transfer_list @ 00013b94 size=148 ===== */

undefined4 oal_sdio_transfer_list(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    uVar1 = hi_strrchr_constprop_16(DAT_00013c28);
    oal_print_nlogs(uVar1,DAT_00013c30,0x24a);
  }
  else if ((param_3 < 2) && ((int *)*param_2 != param_2)) {
    if ((param_3 == 1) &&
       (((*(int *)(param_1 + 0xc) != 0 &&
         (pcVar3 = *(code **)(*(int *)(param_1 + 0xc) + 8), pcVar3 != (code *)0x0)) &&
        (iVar2 = (*pcVar3)(*(undefined4 *)(param_1 + 8)), iVar2 != 0)))) {
      uVar1 = hi_strrchr_constprop_16(DAT_00013c28);
      oal_print_nlogs(uVar1,DAT_00013c30,0x25a);
      return 0xfffffff0;
    }
    uVar1 = oal_sdio_tranfer_sglist_memory(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffea;
}



/* ===== oal_sdio_build_rx_list @ 00013c38 size=434 ===== */

undefined4 oal_sdio_build_rx_list(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  bool bVar19;
  byte in_Q;
  uint in_cpsr;
  
  if ((int *)*param_2 == param_2) {
    if (((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0xc) + 4) != 0)) {
      uVar10 = 0;
      iVar12 = 0;
      piVar8 = param_2;
      do {
        uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x348) + iVar12 + 0x10);
        if (uVar5 == 0) break;
        iVar11 = uVar5 * 0x20;
        iVar3 = (**(code **)(*(int *)(param_1 + 0xc) + 4))(iVar11,0);
        cVar13 = '\x01';
        cVar15 = '\0';
        if (iVar3 == 0) {
          uVar2 = hi_strrchr_constprop_16(DAT_00013dec);
          uVar4 = 0x286;
          goto LAB_00013cea;
        }
        uVar10 = uVar10 + iVar11;
        piVar8 = (int *)((uint)(byte)((iVar3 < 0) << 4 | 4U | in_Q) << 0x1b);
        disableIRQinterrupts();
        piVar9 = (int *)param_2[1];
        param_2[1] = iVar3 + 0x18;
        *(int **)(iVar3 + 0x18) = param_2;
        *(int **)(iVar3 + 0x1c) = piVar9;
        *piVar9 = iVar3 + 0x18;
        param_2[2] = param_2[2] + 1;
        uVar5 = in_cpsr & 0xffffff00;
        in_Q = (in_cpsr >> 0x1b & 1) != 0;
        iVar12 = iVar12 + 1;
        in_cpsr = uVar5;
      } while (iVar12 != 0x40);
      bVar19 = 0x1ff < uVar10;
      if (bVar19) {
        uVar10 = uVar10 + 0x1ff & 0xfffffe01;
      }
      uVar5 = *(uint *)(*(int *)(param_1 + 0x348) + 8);
      if (bVar19) {
        uVar10 = uVar10 & 0xfffffffe;
      }
      cVar13 = uVar10 <= uVar5;
      cVar15 = SBORROW4(uVar5,uVar10);
      if (uVar5 == uVar10) {
        if ((int *)*param_2 == param_2) {
          return 0xffffffea;
        }
        return 0;
      }
      uVar2 = hi_strrchr_constprop_16(DAT_00013dec,piVar8);
      uVar4 = 0x290;
LAB_00013cea:
      cVar18 = '\0';
      cVar17 = '\0';
      oal_print_nlogs(uVar2,DAT_00013df4,uVar4);
      while( true ) {
        bVar1 = cVar17 << 4 | cVar18 << 3 | cVar13 << 2 | cVar15 << 1 | in_Q;
        disableIRQinterrupts();
        piVar8 = (int *)*param_2;
        if (param_2 == piVar8) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = piVar8;
          if (piVar8 != (int *)0x0) {
            param_2[2] = param_2[2] + -1;
            iVar12 = *piVar8;
            piVar6 = (int *)piVar8[1];
            piVar8[1] = 0;
            piVar9 = piVar8 + -6;
            *piVar8 = 0;
            *(int **)(iVar12 + 4) = piVar6;
            *piVar6 = iVar12;
          }
        }
        uVar10 = in_cpsr & 0xffffff00;
        in_Q = (in_cpsr >> 0x1b & 1) != 0;
        if (piVar9 == (int *)0x0) break;
        pcVar7 = (code *)piVar9[5];
        cVar17 = (int)pcVar7 < 0;
        cVar18 = pcVar7 == (code *)0x0;
        cVar14 = '\x01';
        cVar16 = '\0';
        cVar13 = '\x01';
        cVar15 = '\0';
        in_cpsr = uVar10;
        if (!(bool)cVar18) {
          (*pcVar7)(piVar9,(uint)bVar1 << 0x1b);
          cVar13 = cVar14;
          cVar15 = cVar16;
          in_cpsr = uVar10;
        }
      }
      iVar12 = oal_sdio_transfer_rx_reserved_buff(param_1);
      if (iVar12 != 0) {
        uVar4 = hi_strrchr_constprop_16(DAT_00013dec);
        oal_print_nlogs(uVar4,DAT_00013df4,0x29d);
      }
      return 0xfffffff4;
    }
    uVar2 = hi_strrchr_constprop_16(DAT_00013dec);
    uVar4 = 0x278;
  }
  else {
    uVar2 = hi_strrchr_constprop_16(DAT_00013dec);
    uVar4 = 0x272;
  }
  oal_print_nlogs(uVar2,DAT_00013df4,uVar4);
  return 0xffffffea;
}



/* ===== oal_sdio_dev_init @ 00013e08 size=288 ===== */

int oal_sdio_dev_init(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_1c;
  
  if ((param_1 == 0) || (iVar3 = *(int *)(param_1 + 4), iVar3 == 0)) {
    local_1c = -1;
  }
  else {
    sdio_claim_host(iVar3);
    *(undefined4 *)(iVar3 + 0x1b8) = 1000;
    local_1c = sdio_enable_func(iVar3);
    if (local_1c < 0) {
      uVar1 = hi_strrchr_constprop_16(DAT_00013f28);
      oal_print_nlogs(uVar1,DAT_00013f2c,0x2b2);
    }
    else {
      local_1c = sdio_set_block_size(iVar3,0x200);
      if (local_1c == 0) {
        sdio_writeb(iVar3,7,8,&local_1c);
        if (local_1c == 0) {
          sdio_writeb(iVar3,7,9,&local_1c);
          if (-1 < local_1c) {
            oal_enable_sdio_state(param_1,3);
            sdio_release_host(*(undefined4 *)(param_1 + 4));
            return 0;
          }
          uVar2 = hi_strrchr_constprop_16(DAT_00013f28);
          uVar1 = 0x2c4;
        }
        else {
          uVar2 = hi_strrchr_constprop_16(DAT_00013f28);
          uVar1 = 0x2be;
        }
      }
      else {
        uVar2 = hi_strrchr_constprop_16(DAT_00013f28);
        uVar1 = 0x2b8;
      }
      oal_print_nlogs(uVar2,DAT_00013f2c,uVar1);
      sdio_disable_func(iVar3);
    }
    sdio_release_host(*(undefined4 *)(param_1 + 4));
  }
  return local_1c;
}



/* ===== oal_sdio_msg_irq @ 00013f40 size=320 ===== */

int oal_sdio_msg_irq(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  byte in_Q;
  undefined8 uVar9;
  uint local_24;
  
  local_24 = 0;
  uVar2 = sdio_readl(*(undefined4 *)(param_1 + 4),0x28,&local_24);
  if (local_24 == 0) {
    *(uint *)(*(int *)(param_1 + 0x348) + 4) = uVar2;
  }
  else {
    uVar3 = hi_strrchr_constprop_16(DAT_00014080);
    oal_print_nlogs(uVar3,DAT_00014088,0x326);
    uVar1 = local_24;
    if (local_24 != 0) {
      uVar3 = hi_strrchr_constprop_16(DAT_00014080);
      oal_print_nlogs(uVar3,DAT_0001408c,0x33a);
      return uVar1;
    }
  }
  cVar7 = '\0';
  if (uVar2 != 0) {
    cVar6 = (uVar2 & 0x100) != 0;
    cVar8 = uVar2 << 0x18 == 0;
    cVar5 = '\0';
    local_24 = uVar2;
    if ((int)(uVar2 << 0x18) < 0) {
      cVar8 = '\0';
      cVar5 = '\0';
      oal_disable_sdio_state(param_1,3);
    }
    uVar3 = sdio_release_host(*(undefined4 *)(param_1 + 4));
    disableIRQinterrupts();
    uVar2 = local_24 & 0xffffff7f;
    iVar4 = local_24 << 0x18;
    local_24 = uVar2;
    if (iVar4 < 0) {
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
      uVar9 = sched_clock(uVar3,iVar4,
                          (uint)(byte)(cVar5 << 4 | cVar8 << 3 | cVar6 << 2 | cVar7 << 1 | in_Q) <<
                          0x1b);
      *(undefined8 *)(param_1 + 0x100) = uVar9;
      if (*(int *)(param_1 + 0xf0) != 0) {
        uVar3 = hi_strrchr_constprop_16(DAT_00014080);
        oal_print_nlogs(uVar3,DAT_0001408c,0x34b);
        (**(code **)(param_1 + 0xf0))(*(undefined4 *)(param_1 + 0xf4));
      }
    }
    for (uVar2 = _find_first_bit_le(&local_24,0x20); uVar2 < 0x20;
        uVar2 = _find_next_bit_le(&local_24,0x20,uVar2 + 1)) {
      iVar4 = uVar2 * 0x18 + param_1;
      *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + 1;
      uVar9 = sched_clock();
      *(undefined8 *)(iVar4 + 0x58) = uVar9;
      if (*(code **)(iVar4 + 0x48) != (code *)0x0) {
        (**(code **)(iVar4 + 0x48))(*(undefined4 *)(iVar4 + 0x4c));
      }
    }
    sdio_claim_host(*(undefined4 *)(param_1 + 4));
  }
  return 0;
}



/* ===== oal_sdio_get_credit @ 00014098 size=40 ===== */

undefined4 oal_sdio_get_credit(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  sdio_claim_host(*(undefined4 *)(param_1 + 4));
  uVar1 = sdio_memcpy_fromio(*(undefined4 *)(param_1 + 4),param_2,0x3c,4,param_4);
  sdio_release_host(*(undefined4 *)(param_1 + 4));
  schedule();
  return uVar1;
}



/* ===== oal_sdio_transfer_register @ 000140c0 size=14 ===== */

undefined4 oal_sdio_transfer_register(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    return 0;
  }
  return 0xffffffea;
}



/* ===== oal_sdio_transfer_unregister @ 000140ce size=6 ===== */

void oal_sdio_transfer_unregister(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



/* ===== oal_sdio_message_register @ 000140d4 size=28 ===== */

undefined4 oal_sdio_message_register(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (0x1f < param_2)) {
    uVar1 = 0xffffffff;
  }
  else {
    param_1 = param_2 * 0x18 + param_1;
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x48) = param_3;
    *(undefined4 *)(param_1 + 0x4c) = param_4;
  }
  return uVar1;
}



/* ===== oal_sdio_message_unregister @ 000140f0 size=20 ===== */

void oal_sdio_message_unregister(int param_1,uint param_2)

{
  if ((param_1 != 0) && (param_2 < 0x20)) {
    param_1 = param_2 * 0x18 + param_1;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}



/* ===== oal_sdio_data_sg_irq @ 00014104 size=140 ===== */

undefined4 oal_sdio_data_sg_irq(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_1c;
  
  if (((param_1 != 0) && (iVar2 = *(int *)(param_1 + 4), iVar2 != 0)) &&
     (*(int *)(param_1 + 8) != 0)) {
    local_1c = 0;
    uVar1 = sdio_readl(iVar2,0xc,&local_1c);
    if (local_1c == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x348) + 8) = uVar1;
    }
    else {
      uVar1 = hi_strrchr_constprop_16(DAT_00014190);
      oal_print_nlogs(uVar1,DAT_00014198,0x372);
      if (local_1c != 0) {
        return 0xffffffff;
      }
    }
    if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (**(int **)(param_1 + 0xc) != 0)) {
      sdio_release_host(iVar2);
      (*(code *)**(undefined4 **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 8));
      sdio_claim_host(iVar2);
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== oal_sdio_do_isr @ 0001419c size=210 ===== */

undefined4 oal_sdio_do_isr(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = oal_sdio_get_state(param_1,2);
  if (iVar2 == 1) {
    iVar2 = sdio_memcpy_fromio(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x348),0x30,
                               0x50);
    if (iVar2 == 0) {
      **(uint **)(param_1 + 0x348) = **(uint **)(param_1 + 0x348) & *(uint *)(param_1 + 0x10);
      bVar1 = **(byte **)(param_1 + 0x348);
      if ((bVar1 & 7) == 0) {
        uVar3 = hi_strrchr_constprop_16(DAT_00014270);
        uVar4 = 0x3cb;
        goto LAB_000141ce;
      }
      if ((-1 < (int)((uint)bVar1 << 0x1d)) || (iVar2 = oal_sdio_msg_irq(param_1), iVar2 == 0)) {
        if (-1 < (int)((uint)bVar1 << 0x1f)) {
          return 0;
        }
        uVar3 = oal_sdio_data_sg_irq(param_1);
        return uVar3;
      }
    }
    else {
      uVar3 = hi_strrchr_constprop_16(DAT_00014270);
      oal_print_nlogs(uVar3,DAT_00014280,0x313);
    }
    uVar5 = 0xffffffff;
  }
  else {
    uVar3 = hi_strrchr_constprop_16(DAT_00014270);
    uVar4 = 0x3bc;
LAB_000141ce:
    uVar5 = 0;
    oal_print_nlogs(uVar3,DAT_00014278,uVar4);
  }
  return uVar5;
}



/* ===== oal_sdio_isr @ 00014288 size=154 ===== */

void oal_sdio_isr(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    uVar1 = hi_strrchr_constprop_16(DAT_00014324);
    uVar3 = 0x3e1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x48);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
      sdio_claim_host();
      iVar2 = oal_sdio_do_isr(iVar4);
      if (iVar2 != 0) {
        uVar1 = hi_strrchr_constprop_16(DAT_00014324);
        oal_print_nlogs(uVar1,DAT_0001432c,0x3ee);
      }
      sdio_release_host(*(undefined4 *)(iVar4 + 4));
      return;
    }
    uVar1 = hi_strrchr_constprop_16(DAT_00014324);
    uVar3 = 999;
  }
  oal_print_nlogs(uVar1,DAT_0001432c,uVar3);
  return;
}



/* ===== hcc_task_rx_gpio_thread @ 00014338 size=162 ===== */

undefined4 hcc_task_rx_gpio_thread(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = hi_strrchr_constprop_16(DAT_000143dc);
  oal_print_nlogs(uVar1,DAT_000143e4,0x3f7);
  kernel_sigaction(0xf,2);
  do {
    iVar2 = down_interruptible(param_1 + 0x24);
    if (iVar2 != 0) {
LAB_000143a6:
      uVar1 = hi_strrchr_constprop_16(DAT_000143dc);
      oal_print_nlogs(uVar1,DAT_000143e4,0x401);
      return 0;
    }
    iVar2 = kthread_should_stop();
    if (iVar2 != 0) {
      uVar1 = hi_strrchr_constprop_16(DAT_000143dc);
      oal_print_nlogs(uVar1,DAT_000143e4,0x3fb);
      goto LAB_000143a6;
    }
    oal_sdio_isr(*(undefined4 *)(param_1 + 4));
  } while( true );
}



/* ===== oal_sdio_interrupt_register @ 000143f0 size=64 ===== */

int oal_sdio_interrupt_register(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = rockchip_wifi_get_oob_irq();
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x28) = param_1 + 0x28;
  *(int *)(param_1 + 0x2c) = param_1 + 0x28;
  uVar2 = DAT_00014434;
  uVar1 = DAT_00014430;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  iVar4 = request_threaded_irq(uVar3,uVar2,0,0x4001,uVar1,param_1);
  if (-1 < iVar4) {
    disable_irq(uVar3);
    enable_irq(uVar3);
    iVar4 = 0;
  }
  return iVar4;
}



/* ===== oal_sdio_probe @ 00014438 size=432 ===== */

undefined4 oal_sdio_probe(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint __pid;
  undefined4 uVar4;
  sched_param local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  if ((((param_1 == (int *)0x0) || ((int *)*param_1 == (int *)0x0)) || (*(int *)*param_1 == 0)) ||
     (param_2 == 0)) {
    uVar1 = hi_strrchr_constprop_16(DAT_000145e8);
    uVar4 = 0x463;
  }
  else {
    iVar2 = oal_sdio_alloc();
    if (iVar2 != 0) {
      iVar3 = oal_sdio_interrupt_register();
      uVar1 = DAT_000145f8;
      if (-1 < iVar3) {
        memset(&local_3c,0,0x14);
        memset_s(&local_3c,0x14,0);
        local_3c = 0x400;
        local_38 = 3;
        local_34 = 1;
        local_30 = 0;
        __pid = kthread_create_on_node(DAT_000145fc,iVar2,0xffffffff,DAT_00014600,uVar1);
        if ((__pid == 0) || (0xfffff000 < __pid)) {
          uVar1 = hi_strrchr_constprop_16(DAT_00014604);
          oal_print_nlogs(uVar1,DAT_0001460c,0x42);
          *(undefined4 *)(iVar2 + 0x20) = 0;
        }
        else {
          local_40.__sched_priority = local_38;
          iVar3 = sched_setscheduler(__pid,local_34,&local_40);
          if (iVar3 != 0) {
            uVar1 = hi_strrchr_constprop_16(DAT_00014604);
            oal_print_nlogs(uVar1,DAT_0001460c,0x4a);
          }
          if (local_30 < 0) {
            uVar1 = hi_strrchr_constprop_16(DAT_00014604);
            oal_print_nlogs(uVar1,DAT_0001460c,0x50);
          }
          else {
            kthread_bind(__pid);
          }
          wake_up_process(__pid);
          *(uint *)(iVar2 + 0x20) = __pid;
          oal_disable_sdio_state(iVar2,3);
          iVar3 = oal_sdio_dev_init(iVar2);
          if (iVar3 == 0) {
            complete(DAT_0001461c);
            return 0;
          }
          uVar1 = hi_strrchr_constprop_16(DAT_000145e8);
          oal_print_nlogs(uVar1,DAT_000145f0,0x47b);
        }
        disable_irq_nosync(*(undefined4 *)(iVar2 + 0x14));
        free_irq(*(undefined4 *)(iVar2 + 0x14),iVar2);
      }
      kfree(iVar2);
      return 0xffffffff;
    }
    uVar1 = hi_strrchr_constprop_16(DAT_000145e8);
    uVar4 = 0x469;
  }
  oal_print_nlogs(uVar1,DAT_000145f0,uVar4);
  return 0xffffffff;
}



/* ===== oal_sdio_func_probe @ 00014620 size=190 ===== */

undefined4 oal_sdio_func_probe(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_000146e4;
  iVar1 = DAT_000146e0;
  if (param_1 != 0) {
    iVar4 = DAT_000146e0 + 0x10;
    iVar2 = DAT_000146e0 + 8;
    *(undefined4 *)(DAT_000146e0 + 4) = 0;
    __init_swait_queue_head(iVar2,uVar3,iVar4);
    sdio_card_detect_change(param_2);
    iVar2 = sdio_register_driver(DAT_000146e8);
    if (iVar2 == 0) {
      iVar2 = 3;
      do {
        iVar4 = wait_for_completion_timeout(iVar1 + 4,3000);
        if (iVar4 != 0) {
          sdio_claim_host(*(undefined4 *)(param_1 + 4));
          oal_disable_sdio_state(param_1,3);
          sdio_release_host(*(undefined4 *)(param_1 + 4));
          return 0;
        }
        sdio_card_detect_change(param_2);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar3 = hi_strrchr_constprop_16(DAT_000146ec);
      oal_print_nlogs(uVar3,DAT_000146f4,0x4ba);
      sdio_unregister_driver(DAT_000146e8);
    }
    else {
      uVar3 = hi_strrchr_constprop_16(DAT_000146ec);
      oal_print_nlogs(uVar3,DAT_000146f4,0x4a9);
    }
  }
  return 0xffffffff;
}



/* ===== oal_sdio_credit_info_init @ 000146fc size=8 ===== */

void oal_sdio_credit_info_init(int param_1)

{
  *(undefined2 *)(param_1 + 0x34c) = 0;
  return;
}



/* ===== oal_sdio_init_module @ 00014704 size=390 ===== */

int oal_sdio_init_module
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_18;
  
  iVar4 = DAT_0001488c;
  if ((*(uint *)(((uint)&uStack_18 & 0xffffe000) + 4) & 0xffff00) == 0) {
    uVar5 = 0xcc0;
  }
  else {
    uVar5 = 0xa20;
  }
  uStack_18 = param_4;
  iVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_0001488c + 0x28),uVar5);
  if (iVar2 != 0) {
    memset_s(iVar2,0x350);
    if ((*(uint *)(((uint)&uStack_18 & 0xffffe000) + 4) & 0xffff00) == 0) {
      uVar5 = 0xcc0;
    }
    else {
      uVar5 = 0xa20;
    }
    iVar3 = kmalloc_order(0x20000,uVar5);
    *(int *)(iVar2 + 0x18) = iVar3;
    if (iVar3 != 0) {
      if ((*(uint *)(((uint)&uStack_18 & 0xffffe000) + 4) & 0xffff00) == 0) {
        uVar5 = 0xcc0;
      }
      else {
        uVar5 = 0xa20;
      }
      iVar3 = kmalloc_order(0x20000,uVar5,5);
      *(int *)(iVar2 + 0x1c) = iVar3;
      if (iVar3 != 0) {
        *(undefined2 *)(iVar2 + 0x34c) = 0;
        if ((*(uint *)(((uint)&uStack_18 & 0xffffe000) + 4) & 0xffff00) == 0) {
          uVar5 = 0xcc0;
        }
        else {
          uVar5 = 0xa20;
        }
        iVar3 = kmem_cache_alloc(*(undefined4 *)(iVar4 + 4),uVar5);
        *(int *)(iVar2 + 0x348) = iVar3;
        if (iVar3 != 0) {
          memset_s(iVar3,0x50,0);
          *(undefined4 *)(iVar2 + 0x30) = 0x41;
          iVar3 = kmem_cache_alloc(*(undefined4 *)(iVar4 + 0x2c),0xdc0);
          *(int *)(iVar2 + 0x34) = iVar3;
          if (iVar3 != 0) {
            *(undefined4 *)(iVar2 + 0x38) = 0x42;
            iVar3 = kmem_cache_alloc(*(undefined4 *)(iVar4 + 0x2c),0xdc0);
            *(int *)(iVar2 + 0x3c) = iVar3;
            if (iVar3 != 0) {
              iVar4 = kmem_cache_alloc(*(undefined4 *)(iVar4 + 0x24),0xdc0);
              *(int *)(iVar2 + 0x40) = iVar4;
              if (iVar4 != 0) {
                *(undefined4 *)(iVar2 + 0x10) = 7;
                piVar1 = DAT_00014890;
                *(undefined4 *)(iVar2 + 8) = param_1;
                *(undefined4 *)(iVar2 + 0xc) = param_2;
                *piVar1 = iVar2;
                return iVar2;
              }
              kfree(*(undefined4 *)(iVar2 + 0x3c));
              *(undefined4 *)(iVar2 + 0x38) = 0;
              *(undefined4 *)(iVar2 + 0x3c) = 0;
            }
            kfree(*(undefined4 *)(iVar2 + 0x34));
            *(undefined4 *)(iVar2 + 0x30) = 0;
            *(undefined4 *)(iVar2 + 0x34) = 0;
          }
          kfree(*(undefined4 *)(iVar2 + 0x348));
          *(undefined4 *)(iVar2 + 0x348) = 0;
        }
        kfree(*(undefined4 *)(iVar2 + 0x1c));
        *(undefined4 *)(iVar2 + 0x1c) = 0;
      }
      kfree(*(undefined4 *)(iVar2 + 0x18));
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    kfree(iVar2);
  }
  return 0;
}



/* ===== oal_sdio_exit_module @ 00014894 size=40 ===== */

void oal_sdio_exit_module(int param_1)

{
  kfree(*(undefined4 *)(param_1 + 0x1c));
  kfree(*(undefined4 *)(param_1 + 0x18));
  kfree(*(undefined4 *)(param_1 + 0x348));
  *(undefined4 *)(param_1 + 0xc) = 0;
  kfree(param_1);
  *DAT_000148bc = 0;
  return;
}



/* ===== oal_sdio_init @ 000148c0 size=134 ===== */

undefined4 oal_sdio_init(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = oal_sdio_init_module(param_1,param_3);
  if (iVar1 == 0) {
    uVar2 = hi_strrchr_constprop_16(DAT_00014948);
    oal_print_nlogs(uVar2,DAT_00014950,0x530);
  }
  else {
    iVar3 = oal_sdio_func_probe(iVar1,param_2);
    if (iVar3 == 0) {
      oal_enable_sdio_state(iVar1,3);
      *param_1 = iVar1;
      return 0;
    }
    uVar2 = hi_strrchr_constprop_16(DAT_00014948);
    oal_print_nlogs(uVar2,DAT_00014950,0x536);
    kfree(iVar1);
  }
  return 0xffffffff;
}



/* ===== oal_sdio_exit @ 00014958 size=68 ===== */

void oal_sdio_exit(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  oal_disable_sdio_state(param_1,3);
  disable_irq_nosync(*(undefined4 *)(param_1 + 0x14));
  free_irq(*(undefined4 *)(param_1 + 0x14),param_1);
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x14974);
    (*pcVar1)();
  }
  send_sig(0xf,iVar2,1);
  kthread_stop(iVar2);
  up(param_1 + 0x24);
  sdio_unregister_driver(DAT_000149a0);
  oal_sdio_exit_module(param_1);
  return;
}



/* ===== hi_strrchr.constprop.0 @ 000149a4 size=4 ===== */

undefined4 hi_strrchr_constprop_0(void)

{
  return DAT_000149a8;
}



/* ===== sdio_card_detect_change @ 000149ac size=18 ===== */

void sdio_card_detect_change(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  printk(DAT_000149c0);
  msleep(100,extraout_r1,extraout_r2,in_r3);
  return;
}



/* ===== oal_sdio_detectcard_to_core @ 000149c4 size=10 ===== */

undefined4 oal_sdio_detectcard_to_core(void)

{
  sdio_card_detect_change();
  return 0;
}



/* ===== init_module @ 000149d0 size=208 ===== */

int init_module(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = hi_strrchr_constprop_0();
  oal_print_nlogs(uVar1,DAT_00014aa4,0x1f);
  iVar2 = oal_netlink_init();
  if (iVar2 == 0) {
    iVar2 = oam_main_init();
    if (iVar2 == 0) {
      iVar2 = hcc_adapt_init();
      if (iVar2 == 0) {
        iVar2 = netdev_register();
        if (iVar2 == 0) {
          uVar3 = 0x39;
        }
        else {
          uVar3 = 0x35;
        }
        goto LAB_00014a1e;
      }
      oam_main_exit();
    }
    else {
      oal_print_nlogs(uVar1,DAT_00014aa4,0x2a);
    }
    oal_netlink_deinit();
    iVar2 = 1;
  }
  else {
    uVar3 = 0x23;
    iVar2 = 1;
LAB_00014a1e:
    oal_print_nlogs(uVar1,DAT_00014aa4,uVar3);
  }
  return iVar2;
}



/* ===== cleanup_module @ 00014ab8 size=22 ===== */

void cleanup_module(void)

{
  netdev_unregister();
  hcc_adapt_exit();
  oam_main_exit();
  oal_netlink_deinit();
  return;
}



/* ===== <EXTERNAL>::sdio_release_host @ 00018000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_release_host(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free_irq @ 00018004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void free_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_disable_func @ 00018008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_disable_func(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_set_block_size @ 0001800c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_set_block_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__nlmsg_put @ 00018010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __nlmsg_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion_timeout @ 00018014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_put @ 00018018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_claim_host @ 0001801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_claim_host(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_memcpy_fromio @ 00018020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_memcpy_fromio(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_register_driver @ 00018024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_register_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00018028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::complete @ 0001802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void complete(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_free_table @ 00018038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_free_table(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unregister_netdev @ 0001803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void unregister_netdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_swait_queue_head @ 00018040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_swait_queue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::finish_wait @ 00018044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void finish_wait(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::up @ 00018048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kernel_sigaction @ 0001804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kernel_sigaction(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00018050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 00018054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::enable_irq @ 00018058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void enable_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__netlink_kernel_create @ 0001805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __netlink_kernel_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prepare_to_wait_event @ 00018060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void prepare_to_wait_event(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_should_stop @ 00018064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_should_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__wake_up @ 00018068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sched_setscheduler @ 0001806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_setscheduler(__pid_t __pid,int __policy,sched_param *__param)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00018070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rockchip_wifi_get_oob_irq @ 00018074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rockchip_wifi_get_oob_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ether_setup @ 00018078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ether_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pskb_expand_head @ 0001807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pskb_expand_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wake_up_process @ 00018080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wake_up_process(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sched_clock @ 00018084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sched_clock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::eth_type_trans @ 00018088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void eth_type_trans(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alloc_netdev_mqs @ 0001808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void alloc_netdev_mqs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree_skb @ 00018090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule @ 00018094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00018098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep_range @ 0001809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usleep_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__alloc_skb @ 000180a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __alloc_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 000180a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 000180a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_f0_writeb @ 000180ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_f0_writeb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_alloc_table @ 000180b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_alloc_table(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_unregister_driver @ 000180b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_unregister_driver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_readsb @ 000180b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_readsb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_wait_entry @ 000180bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_wait_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::request_threaded_irq @ 000180c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void request_threaded_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::add_timer @ 000180c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void add_timer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netlink_unicast @ 000180cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netlink_unicast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mod_timer @ 000180d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mod_timer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_push @ 000180d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_push(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_readl @ 000180d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_readl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmc_set_data_timeout @ 000180dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mmc_set_data_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::register_netdev @ 000180e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void register_netdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 000180e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free_netdev @ 000180e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void free_netdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netlink_kernel_release @ 000180ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netlink_kernel_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysfs_create_group @ 000180f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sysfs_create_group(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_stop @ 000180f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 000180f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 000180fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmalloc_order @ 00018100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmalloc_order(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netif_tx_wake_queue @ 00018104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netif_tx_wake_queue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::netif_rx_ni @ 00018108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void netif_rx_ni(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0001810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_writel @ 00018110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_writel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00018114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmc_wait_for_req @ 00018118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mmc_wait_for_req(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 0001811c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__netdev_alloc_skb @ 00018120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __netdev_alloc_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_bind @ 00018124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kobject_create_and_add @ 00018128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kobject_create_and_add(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_create_on_node @ 00018130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_create_on_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysfs_remove_group @ 00018134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sysfs_remove_group(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_timer_key @ 00018138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_timer_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_next @ 00018140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::down_interruptible @ 00018144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void down_interruptible(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_find_next_bit_le @ 00018148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _find_next_bit_le(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 0001814c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_get_by_name @ 00018150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_get_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_enable_func @ 00018154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_enable_func(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_writesb @ 00018158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_writesb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send_sig @ 0001815c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void send_sig(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::disable_irq_nosync @ 00018160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void disable_irq_nosync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::del_timer @ 00018164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void del_timer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::msleep @ 00018174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void msleep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 00018178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::disable_irq @ 00018180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void disable_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sdio_writeb @ 00018184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sdio_writeb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kobject_put @ 00018188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kobject_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_find_first_bit_le @ 0001818c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _find_first_bit_le(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


