// hci_uart.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== ____atomic_set_bit @ 00010220 size=24 ===== */

void ____atomic_set_bit(uint param_1,uint *param_2)

{
  disableIRQinterrupts();
  *param_2 = 1 << (param_1 & 0xff) | *param_2;
  return;
}



/* ===== ____atomic_clear_bit @ 00010238 size=26 ===== */

void ____atomic_clear_bit(uint param_1,uint *param_2)

{
  disableIRQinterrupts();
  *param_2 = *param_2 & ~(1 << (param_1 & 0xff));
  return;
}



/* ===== hci_uart_tty_read @ 00010252 size=4 ===== */

undefined4 hci_uart_tty_read(void)

{
  return 0;
}



/* ===== hci_uart_tty_write @ 00010256 size=4 ===== */

undefined4 hci_uart_tty_write(void)

{
  return 0;
}



/* ===== hci_uart_tty_poll @ 0001025a size=4 ===== */

undefined4 hci_uart_tty_poll(void)

{
  return 0;
}



/* ===== percpu_up_read @ 0001025e size=74 ===== */

void percpu_up_read(int *param_1)

{
  char cVar1;
  char in_CY;
  char in_OV;
  char cVar2;
  byte in_Q;
  
  cVar2 = '\x01';
  cVar1 = '\0';
  _trace_android_vh_record_pcpu_rwsem_starttime
            (*(undefined4 *)(((uint)&stack0xfffffff8 & 0xffffe000) + 0xc),0);
  if (*param_1 == 0) {
    disableIRQinterrupts();
    *(int *)param_1[6] = *(int *)param_1[6] + -1;
  }
  else {
    disableIRQinterrupts();
    *(int *)param_1[6] = *(int *)param_1[6] + -1;
    rcuwait_wake_up(param_1 + 7,
                    (uint)(byte)(cVar1 << 4 | cVar2 << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b);
  }
  return;
}



/* ===== percpu_down_read @ 000102a8 size=64 ===== */

void percpu_down_read(int *param_1)

{
  _cond_resched();
  if (*param_1 == 0) {
    disableIRQinterrupts();
    *(int *)param_1[6] = *(int *)param_1[6] + 1;
  }
  else {
    __percpu_down_read(param_1,0);
  }
  _trace_android_vh_record_pcpu_rwsem_starttime
            (*(undefined4 *)(((uint)&stack0xfffffff8 & 0xffffe000) + 0xc),*DAT_000102e8);
  return;
}



/* ===== hci_uart_tty_receive @ 000102ec size=94 ===== */

void hci_uart_tty_receive(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar2 = *(int **)(param_1 + 0x164);
  if ((piVar2 != (int *)0x0) && (*piVar2 == param_1)) {
    piVar3 = piVar2 + 10;
    percpu_down_read(piVar3);
    if (-1 < piVar2[2] << 0x1d) {
      percpu_up_read(piVar3);
      return;
    }
    pcVar4 = *(code **)(piVar2[9] + 0x10);
    percpu_up_read(piVar3);
    (*pcVar4)(piVar2,param_2,param_4);
    iVar1 = piVar2[1];
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x9a8) = *(int *)(iVar1 + 0x9a8) + param_4;
    }
    tty_unthrottle(param_1);
    return;
  }
  return;
}



/* ===== hci_uart_tty_ioctl @ 0001034a size=414 ===== */

uint hci_uart_tty_ioctl(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  byte in_Q;
  
  piVar4 = *(int **)(param_1 + 0x164);
  if (piVar4 == (int *)0x0) {
    return 0xfffffff7;
  }
  if (param_3 == DAT_000104e8) {
    if (piVar4[2] << 0x1f < 0) {
      return *(uint *)piVar4[9];
    }
  }
  else {
    if (param_3 < DAT_000104e8) {
      uVar5 = DAT_000104e8 + 0xbfffffff;
      if (param_3 == uVar5) {
        piVar6 = piVar4 + 2;
        disableIRQinterrupts();
        uVar3 = piVar4[2];
        piVar4[2] = uVar3 | 1;
        if (-1 < (int)(uVar3 << 0x1f)) {
          if ((param_4 < 6) && (iVar7 = *(int *)(DAT_000104f0 + param_4 * 4), iVar7 != 0)) {
            uVar5 = (**(code **)(iVar7 + 4))
                              (piVar4,(uint)(byte)(((int)(param_3 - uVar5) < 0) << 4 | 8U |
                                                   (uVar5 <= param_3) << 2 |
                                                   SBORROW4(param_3,uVar5) << 1 | in_Q) << 0x1b);
            if (uVar5 == 0) {
              piVar4[9] = iVar7;
              ____atomic_set_bit(2,piVar6);
              bt_info(DAT_000104f4);
              iVar2 = hci_alloc_dev();
              if (iVar2 == 0) {
                uVar5 = 0xfffffff4;
                bt_err(DAT_000104f8);
              }
              else {
                piVar4[1] = iVar2;
                *(undefined1 *)(iVar2 + 0x22) = 3;
                uVar1 = DAT_000104fc;
                iVar8 = iVar2 + 0x604;
                *(int **)(iVar2 + 0xa00) = piVar4;
                *(undefined4 *)(iVar2 + 0xc40) = uVar1;
                *(undefined4 *)(iVar2 + 0xc44) = DAT_00010500;
                *(undefined4 *)(iVar2 + 0xc48) = DAT_00010504;
                *(undefined4 *)(iVar2 + 0xc54) = DAT_00010508;
                *(undefined4 *)(iVar2 + 0x9e4) = *(undefined4 *)(*piVar4 + 8);
                if (piVar4[3] << 0x1f < 0) {
                  ____atomic_set_bit(1,iVar8);
                }
                if (piVar4[3] << 0x1b < 0) {
                  ____atomic_set_bit(6,iVar8);
                }
                if (-1 < piVar4[3] << 0x1e) {
                  ____atomic_set_bit(0,iVar8);
                }
                *(byte *)(iVar2 + 0x23) = (byte)((uint)(piVar4[3] << 0x1d) >> 0x1f);
                ____atomic_set_bit(10,iVar8);
                iVar8 = hci_register_dev(iVar2);
                if (-1 < iVar8) {
                  ____atomic_set_bit(1,piVar6);
                  rtk_btcoex_probe(iVar2);
                  return 0;
                }
                uVar5 = 0xffffffed;
                bt_err(DAT_0001050c);
                hci_free_dev(iVar2);
              }
              ____atomic_clear_bit(2,piVar6);
              (**(code **)(iVar7 + 8))(piVar4);
            }
          }
          else {
            uVar5 = 0xffffffa3;
          }
          ____atomic_clear_bit(0,piVar6);
          return uVar5;
        }
      }
      else {
        if (param_3 != DAT_000104e8 + 0xc0000002) goto LAB_00010374;
        if ((piVar4[2] & 1U) == 0) {
          if ((param_4 & 0xffffffe8) == 0) {
            piVar4[3] = param_4;
            return 0;
          }
          return 0xffffffea;
        }
      }
      return 0xfffffff0;
    }
    if (param_3 != DAT_000104ec) {
      if (param_3 == DAT_000104ec + 2) {
        return piVar4[3];
      }
LAB_00010374:
      uVar5 = n_tty_ioctl_helper();
      return uVar5;
    }
    if (piVar4[2] << 0x1e < 0) {
      return (uint)*(ushort *)(piVar4[1] + 0x20);
    }
  }
  return 0xffffffcf;
}



/* ===== hci_uart_open @ 00010510 size=30 ===== */

undefined4 hci_uart_open(int param_1)

{
  *(undefined4 *)(param_1 + 0xc48) = DAT_00010530;
  ____atomic_set_bit(0,param_1 + 0x1c);
  rtk_btcoex_open(param_1);
  return 0;
}



/* ===== hci_uart_write_work @ 00010534 size=202 ===== */

void hci_uart_write_work(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + -0x10);
  iVar5 = *(int *)(param_1 + -0xc);
  do {
    ____atomic_clear_bit(2,param_1 + 0x58);
    while( true ) {
      iVar3 = *(int *)(param_1 + 0x54);
      if (iVar3 == 0) {
        percpu_down_read(param_1 + 0x18);
        if (*(int *)(param_1 + -8) << 0x1d < 0) {
          iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 0x18))(param_1 + -0x10);
        }
        percpu_up_read(param_1 + 0x18);
        if (iVar3 == 0) goto LAB_000105aa;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      ____atomic_set_bit(5,iVar4 + 0x118);
      iVar2 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x1c))
                        (iVar4,*(undefined4 *)(iVar3 + 0xa4),*(undefined4 *)(iVar3 + 0x50));
      *(int *)(iVar5 + 0x9ac) = *(int *)(iVar5 + 0x9ac) + iVar2;
      skb_pull(iVar3,iVar2);
      if (*(int *)(iVar3 + 0x50) != 0) break;
      cVar1 = *(char *)(iVar3 + 0x18);
      iVar2 = *(int *)(param_1 + -0xc);
      if (cVar1 == '\x02') {
        *(int *)(iVar2 + 0x998) = *(int *)(iVar2 + 0x998) + 1;
      }
      else if (cVar1 == '\x03') {
        *(int *)(iVar2 + 0x9a0) = *(int *)(iVar2 + 0x9a0) + 1;
      }
      else if (cVar1 == '\x01') {
        *(int *)(iVar2 + 0x990) = *(int *)(iVar2 + 0x990) + 1;
      }
      kfree_skb(iVar3);
    }
    *(int *)(param_1 + 0x54) = iVar3;
LAB_000105aa:
    ____atomic_clear_bit(1,param_1 + 0x58);
    if (-1 < *(int *)(param_1 + 0x58) << 0x1d) {
      return;
    }
  } while( true );
}



/* ===== __hci_uart_flush.constprop.0 @ 000105fe size=74 ===== */

undefined4
__hci_uart_flush_constprop_0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xa00);
  uVar2 = *puVar1;
  bt_info(DAT_0001064c,DAT_00010648,param_1,uVar2,param_4);
  if (puVar1[0x19] != 0) {
    kfree_skb();
    puVar1[0x19] = 0;
  }
  tty_wait_until_sent(uVar2,0x96);
  percpu_down_read(puVar1 + 10);
  if ((int)(puVar1[2] << 0x1d) < 0) {
    (**(code **)(puVar1[9] + 0xc))(puVar1);
  }
  percpu_up_read(puVar1 + 10);
  return 0;
}



/* ===== hci_uart_close @ 00010650 size=48 ===== */

undefined4 hci_uart_close(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bt_info(DAT_00010684,DAT_00010680,param_1,param_4,param_4);
  if (*(int *)(param_1 + 0x1c) << 0x1d < 0) {
    bt_err(DAT_00010688);
  }
  __hci_uart_flush_constprop_0(param_1);
  *(undefined4 *)(param_1 + 0xc48) = 0;
  rtk_btcoex_close();
  return 0;
}



/* ===== hci_uart_tty_close @ 0001068c size=132 ===== */

void hci_uart_tty_close(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x164);
  bt_info(DAT_00010714,DAT_00010710,param_1);
  *(undefined4 *)(param_1 + 0x164) = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 4);
    if (iVar3 != 0) {
      hci_uart_close(iVar3);
    }
    iVar4 = iVar2 + 0x28;
    piVar1 = (int *)(iVar2 + 8);
    if (*piVar1 << 0x1d < 0) {
      percpu_down_write(iVar4);
      ____atomic_clear_bit(2,piVar1);
      percpu_up_write(iVar4);
      cancel_work_sync(iVar2 + 0x10);
      if (iVar3 != 0) {
        if (*(int *)(iVar2 + 8) << 0x1e < 0) {
          hci_unregister_dev(iVar3);
        }
        hci_free_dev(iVar3);
      }
      (**(code **)(*(int *)(iVar2 + 0x24) + 8))(iVar2);
    }
    ____atomic_clear_bit(0,piVar1);
    percpu_free_rwsem(iVar4);
    kfree(iVar2);
    return;
  }
  return;
}



/* ===== hci_uart_flush @ 00010718 size=2 ===== */

undefined4 hci_uart_flush(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xa00);
  uVar2 = *puVar1;
  bt_info(DAT_0001064c,DAT_00010648,param_1,uVar2,param_4);
  if (puVar1[0x19] != 0) {
    kfree_skb();
    puVar1[0x19] = 0;
  }
  tty_wait_until_sent(uVar2,0x96);
  percpu_down_read(puVar1 + 10);
  if ((int)(puVar1[2] << 0x1d) < 0) {
    (**(code **)(puVar1[9] + 0xc))(puVar1);
  }
  percpu_up_read(puVar1 + 10);
  return 0;
}



/* ===== hci_uart_tty_open @ 0001071a size=126 ===== */

undefined4 hci_uart_tty_open(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x1c) == 0) {
    uVar3 = 0xffffffa1;
  }
  else {
    piVar2 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_00010798 + 0x1c),0xdc0,param_3,DAT_00010798
                                     ,param_4);
    if (piVar2 == (int *)0x0) {
      bt_err(DAT_0001079c);
      uVar3 = 0xffffffe9;
    }
    else {
      *(undefined4 *)(param_1 + 0x134) = 0x10000;
      piVar2[4] = -0x20;
      piVar2[5] = (int)(piVar2 + 5);
      piVar2[6] = (int)(piVar2 + 5);
      iVar1 = DAT_000107a0;
      *(int **)(param_1 + 0x164) = piVar2;
      *piVar2 = param_1;
      piVar2[7] = iVar1;
      __percpu_init_rwsem(piVar2 + 10,DAT_000107a8,DAT_000107a4);
      piVar2[0x18] = (int)(piVar2 + 0x17);
      piVar2[0x16] = 1;
      piVar2[0x17] = (int)(piVar2 + 0x17);
      pcVar4 = *(code **)(**(int **)(param_1 + 0x30) + 0x18);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(param_1);
      }
      tty_driver_flush_buffer(param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== hci_uart_register_proto @ 000107ac size=34 ===== */

undefined4 hci_uart_register_proto(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (5 < uVar1) {
    return 0xffffffea;
  }
  if (*(int *)(DAT_000107d0 + uVar1 * 4) == 0) {
    *(uint **)(DAT_000107d0 + uVar1 * 4) = param_1;
    return 0;
  }
  return 0xffffffef;
}



/* ===== hci_uart_unregister_proto @ 000107d4 size=28 ===== */

undefined4 hci_uart_unregister_proto(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 < 6) && (*(int *)(DAT_000107f0 + uVar1 * 4) != 0)) {
    *(undefined4 *)(DAT_000107f0 + uVar1 * 4) = 0;
    return 0;
  }
  return 0xffffffea;
}



/* ===== hci_uart_tx_wakeup @ 000107f4 size=126 ===== */

undefined4 hci_uart_tx_wakeup(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  if (*(int *)(param_1 + 0x28) == 0) {
    disableIRQinterrupts();
    **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 1;
  }
  else {
    iVar1 = __percpu_down_read(param_1 + 0x28,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _trace_android_vh_record_pcpu_rwsem_starttime
            (*(undefined4 *)(((uint)&uStack_10 & 0xffffe000) + 0xc),*DAT_00010874);
  if (*(int *)(param_1 + 8) << 0x1d < 0) {
    ____atomic_set_bit(2,param_1 + 0x68);
    disableIRQinterrupts();
    uVar2 = *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = uVar2 | 2;
    if (-1 < (int)(uVar2 << 0x1e)) {
      queue_work_on(1,*DAT_00010878,param_1 + 0x10);
    }
  }
  percpu_up_read(param_1 + 0x28);
  return 0;
}



/* ===== hci_uart_send_frame @ 0001087c size=108 ===== */

undefined4 hci_uart_send_frame(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    bt_err(DAT_000108e8);
    uVar1 = 0xffffffed;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa00);
    if (*(char *)(param_2 + 0x18) == '\x01') {
      rtk_btcoex_parse_cmd(*(undefined4 *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0x50));
    }
    if (*(char *)(param_2 + 0x18) == '\x02') {
      rtk_btcoex_parse_l2cap_data_tx
                (*(undefined4 *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0x50));
    }
    iVar3 = iVar2 + 0x28;
    percpu_down_read(iVar3);
    if (*(int *)(iVar2 + 8) << 0x1d < 0) {
      (**(code **)(*(int *)(iVar2 + 0x24) + 0x14))(iVar2,param_2);
      percpu_up_read(iVar3);
      hci_uart_tx_wakeup(iVar2);
      uVar1 = 0;
    }
    else {
      percpu_up_read(iVar3);
      uVar1 = 0xffffffcf;
    }
  }
  return uVar1;
}



/* ===== hci_uart_tty_wakeup @ 000108ec size=44 ===== */

void hci_uart_tty_wakeup(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x164);
  if (((piVar1 != (int *)0x0) && (____atomic_clear_bit(5,param_1 + 0x118), *piVar1 == param_1)) &&
     (piVar1[2] << 0x1d < 0)) {
    hci_uart_tx_wakeup(piVar1,extraout_r1,extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== h4_dequeue @ 00010918 size=8 ===== */

void h4_dequeue(int param_1)

{
  skb_dequeue(*(int *)(param_1 + 0x54) + 0xc);
  return;
}



/* ===== h4_enqueue @ 00010920 size=32 ===== */

undefined4 h4_enqueue(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x54);
  puVar1 = (undefined1 *)skb_push(param_2,1,param_3,param_4,param_4);
  *puVar1 = *(undefined1 *)(param_2 + 0x18);
  skb_queue_tail(iVar2 + 0xc,param_2);
  return 0;
}



/* ===== h4_check_data_len @ 00010940 size=62 ===== */

int h4_check_data_len(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2[2];
  if (*(int *)(iVar1 + 0x54) == 0) {
    iVar1 = *(int *)(iVar1 + 0x9c) - *(int *)(iVar1 + 0x98);
  }
  else {
    iVar1 = 0;
  }
  if (param_3 == 0) {
    hci_recv_frame();
  }
  else {
    if (param_3 <= iVar1) {
      *param_2 = 4;
      goto LAB_00010978;
    }
    bt_err(DAT_00010980);
    kfree_skb(param_2[2]);
  }
  param_3 = 0;
  *param_2 = 0;
  param_2[2] = 0;
LAB_00010978:
  param_2[1] = param_3;
  return param_3;
}



/* ===== h4_flush @ 00010984 size=14 ===== */

undefined4 h4_flush(int param_1)

{
  skb_queue_purge(*(int *)(param_1 + 0x54) + 0xc);
  return 0;
}



/* ===== h4_close @ 00010992 size=36 ===== */

undefined4 h4_close(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  skb_queue_purge(iVar1 + 0xc);
  kfree_skb(*(undefined4 *)(iVar1 + 8));
  *(undefined4 *)(param_1 + 0x54) = 0;
  kfree(iVar1);
  return 0;
}



/* ===== h4_recv @ 000109b6 size=314 ===== */

undefined4 h4_recv(int param_1,char *param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  void *__dest;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint __n;
  char *pcVar7;
  
  uVar2 = DAT_00010af8;
  puVar6 = *(undefined4 **)(param_1 + 0x54);
LAB_000109ca:
  if (param_3 == 0) {
    return 0;
  }
  __n = puVar6[1];
  pcVar7 = param_2;
  if (__n != 0) goto code_r0x000109d4;
  goto switchD_00010a00_default;
code_r0x000109d4:
  if (param_3 <= __n) {
    __n = param_3;
  }
  param_3 = param_3 - __n;
  __dest = (void *)skb_put(puVar6[2],__n);
  pcVar7 = param_2 + __n;
  memcpy(__dest,param_2,__n);
  iVar4 = puVar6[1];
  puVar6[1] = iVar4 - __n;
  param_2 = pcVar7;
  if (iVar4 - __n == 0) {
    switch(*puVar6) {
    case 1:
      uVar3 = (ushort)*(byte *)(*(int *)(puVar6[2] + 0xa4) + 1);
      break;
    case 2:
      uVar3 = *(ushort *)(*(int *)(puVar6[2] + 0xa4) + 2);
      break;
    case 3:
      uVar3 = (ushort)*(byte *)(*(int *)(puVar6[2] + 0xa4) + 2);
      break;
    case 4:
      iVar4 = puVar6[2];
      if (*(char *)(iVar4 + 0x18) == '\x04') {
        rtk_btcoex_parse_event(*(undefined4 *)(iVar4 + 0xa4),*(undefined4 *)(iVar4 + 0x50));
      }
      iVar4 = puVar6[2];
      if (*(char *)(iVar4 + 0x18) == '\x02') {
        rtk_btcoex_parse_l2cap_data_rx(*(undefined4 *)(iVar4 + 0xa4),*(undefined4 *)(iVar4 + 0x50));
      }
      hci_recv_frame(*(undefined4 *)(param_1 + 4),puVar6[2]);
      *puVar6 = 0;
      puVar6[2] = 0;
      goto LAB_000109ca;
    default:
switchD_00010a00_default:
      cVar1 = *pcVar7;
      param_3 = param_3 - 1;
      param_2 = pcVar7 + 1;
      if (cVar1 == '\x03') {
        *puVar6 = 3;
        puVar6[1] = 3;
      }
      else {
        if (cVar1 == '\x04') {
          *puVar6 = 1;
          uVar5 = 2;
        }
        else {
          if (cVar1 != '\x02') {
            bt_err(uVar2,cVar1);
            *(int *)(*(int *)(param_1 + 4) + 0x988) = *(int *)(*(int *)(param_1 + 4) + 0x988) + 1;
            goto LAB_000109ca;
          }
          *puVar6 = 2;
          uVar5 = 4;
        }
        puVar6[1] = uVar5;
      }
      iVar4 = __alloc_skb(0x40c,0xa20,0,0xffffffff,param_4);
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0xa4) = *(int *)(iVar4 + 0xa4) + 8;
        *(int *)(iVar4 + 0x98) = *(int *)(iVar4 + 0x98) + 8;
      }
      puVar6[2] = iVar4;
      if (iVar4 == 0) {
        bt_err(DAT_00010af4);
        *puVar6 = 0;
        puVar6[1] = 0;
        return 0xfffffff4;
      }
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 4);
      *(char *)(puVar6[2] + 0x18) = cVar1;
      goto LAB_000109ca;
    }
    h4_check_data_len(*(undefined4 *)(param_1 + 4),puVar6,uVar3);
  }
  goto LAB_000109ca;
}



/* ===== h4_open @ 00010afc size=42 ===== */

undefined4 h4_open(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_00010b28 + 0x14),0xb20);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    *(int *)(iVar1 + 0xc) = iVar1 + 0xc;
    *(int *)(iVar1 + 0x10) = iVar1 + 0xc;
    *(int *)(param_1 + 0x54) = iVar1;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== h5_crc_update @ 00010b2c size=42 ===== */

void h5_crc_update(ushort *param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(DAT_00010b58 + ((*param_1 ^ param_2) & 0xf) * 2) ^ *param_1 >> 4;
  *param_1 = *(ushort *)(DAT_00010b58 + (((uint)uVar1 ^ param_2 >> 4) & 0xf) * 2) ^ uVar1 >> 4;
  return;
}



/* ===== h5_flush @ 00010b5c size=4 ===== */

undefined4 h5_flush(void)

{
  return 0;
}



/* ===== h5_timed_event @ 00010b60 size=114 ===== */

void h5_timed_event(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  byte in_Q;
  uint in_cpsr;
  uint uVar9;
  
  uVar8 = *(undefined4 *)(param_1 + 0x2c);
  bt_info(DAT_00010bd4,uVar8,*(undefined4 *)(param_1 + -0x24));
  disableIRQinterrupts();
  while ((piVar2 = *(int **)(param_1 + -0x28), piVar2 != (int *)(param_1 + -0x2c) &&
         (piVar2 != (int *)0x0))) {
    iVar5 = *(int *)(param_1 + -0x24);
    iVar6 = iVar5 + -1;
    *(int *)(param_1 + -0x24) = iVar6;
    iVar3 = *piVar2;
    piVar7 = (int *)piVar2[1];
    *piVar2 = 0;
    piVar2[1] = 0;
    *(int **)(iVar3 + 4) = piVar7;
    *piVar7 = iVar3;
    bVar1 = (iVar6 < 0) << 4 | (iVar6 == 0) << 3 | (iVar5 != 0) << 2 | SBORROW4(iVar5,1) << 1 | in_Q
    ;
    disableIRQinterrupts();
    bVar4 = *(char *)(param_1 + 0x3e) - 1U & 7;
    *(byte *)(param_1 + 0x3e) = bVar4;
    uVar9 = in_cpsr & 0xffffff00;
    in_Q = (in_cpsr >> 0x1b & 1) != 0;
    skb_queue_head(param_1 + -0x20,piVar2,(uint)bVar1 << 0x1b,bVar4,param_4);
    in_cpsr = uVar9;
  }
  hci_uart_tx_wakeup(uVar8);
  return;
}



/* ===== h5_close @ 00010bd8 size=56 ===== */

undefined4 h5_close(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  bt_info(DAT_00010c10);
  cancel_delayed_work_sync(iVar1 + 0x2c);
  *(undefined4 *)(param_1 + 0x54) = 0;
  skb_queue_purge(iVar1);
  skb_queue_purge(iVar1 + 0xc);
  skb_queue_purge(iVar1 + 0x18);
  kfree(iVar1);
  return 0;
}



/* ===== h5_slip_one_byte @ 00010c14 size=68 ===== */

void h5_slip_one_byte(undefined4 param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  if (param_2 == 0x13) {
    uVar3 = *(undefined2 *)(DAT_00010c58 + 0x26);
  }
  else if (param_2 < 0x14) {
    if (param_2 != 0x11) {
LAB_00010c24:
      puVar1 = (undefined1 *)skb_put(param_1,1);
      *puVar1 = (char)param_2;
      return;
    }
    uVar3 = *(undefined2 *)(DAT_00010c58 + 0x24);
  }
  else if (param_2 == 0xc0) {
    uVar3 = *(undefined2 *)(DAT_00010c58 + 0x20);
  }
  else {
    if (param_2 != 0xdb) goto LAB_00010c24;
    uVar3 = *(undefined2 *)(DAT_00010c58 + 0x22);
  }
  puVar2 = (undefined2 *)skb_put(param_1,2);
  *puVar2 = uVar3;
  return;
}



/* ===== h5_enqueue @ 00010c5c size=74 ===== */

undefined4 h5_enqueue(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_00010ca8;
  if ((*(uint *)(param_2 + 0x50) < 0x1000) &&
     (uVar1 = DAT_00010cac, *(byte *)(param_2 + 0x18) < 0x10)) {
    uVar3 = 1 << (uint)*(byte *)(param_2 + 0x18);
    if (((uVar3 & 0xc001) == 0) && (-1 < (int)(uVar3 << 0x1c))) {
      if ((uVar3 & 6) == 0) goto LAB_00010c6a;
      iVar2 = *(int *)(param_1 + 0x54) + 0xc;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54) + 0x18;
    }
    skb_queue_tail(iVar2);
  }
  else {
LAB_00010c6a:
    bt_err(uVar1);
    kfree_skb(param_2);
  }
  return 0;
}



/* ===== h5_open @ 00010cb0 size=112 ===== */

undefined4 h5_open(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  bt_info(DAT_00010d20);
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_00010d24 + 0x1c),0xb20);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    *(int *)(iVar1 + 0xc) = iVar1 + 0xc;
    *(int *)(iVar1 + 0x10) = iVar1 + 0xc;
    *(int *)(iVar1 + 0x18) = iVar1 + 0x18;
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x18;
    *(undefined4 *)(iVar1 + 0x2c) = 0xffffffe0;
    *(int *)(iVar1 + 0x30) = iVar1 + 0x30;
    *(int *)(iVar1 + 0x34) = iVar1 + 0x30;
    uVar2 = DAT_00010d28;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(int *)(iVar1 + 0x58) = param_1;
    *(int *)iVar1 = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)(param_1 + 0x54) = iVar1;
    init_timer_key(iVar1 + 0x3c,DAT_00010d2c,0x200000,0,0,param_2);
    uVar2 = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined1 *)(iVar1 + 0x66) = 1;
  }
  return uVar2;
}



/* ===== h5_complete_rx_pkt @ 00010d30 size=342 ===== */

void h5_complete_rx_pkt(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  piVar7 = *(int **)(param_1 + 0x54);
  if (**(char **)(piVar7[10] + 0xa4) < '\0') {
    disableIRQinterrupts();
    *(byte *)(piVar7 + 0x1a) = (char)piVar7[0x1a] + 1U & 7;
    *(undefined1 *)((int)piVar7 + 0x69) = 1;
  }
  *(byte *)((int)piVar7 + 0x67) = (byte)(((uint)**(byte **)(piVar7[10] + 0xa4) << 0x1a) >> 0x1d);
  disableIRQinterrupts();
  bVar4 = *(byte *)((int)piVar7 + 0x6a);
  for (iVar9 = piVar7[2]; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (bVar4 == *(byte *)((int)piVar7 + 0x67)) goto LAB_00010d90;
    bVar4 = bVar4 - 1 & 7;
  }
  if (bVar4 != *(byte *)((int)piVar7 + 0x67)) {
    bt_err(DAT_00010e88);
  }
LAB_00010d90:
  piVar1 = (int *)*piVar7;
  piVar10 = *(int **)*piVar7;
  for (iVar8 = 0; (piVar1 != piVar7 && (iVar8 < iVar9)); iVar8 = iVar8 + 1) {
    piVar7[2] = piVar7[2] + -1;
    iVar2 = *piVar1;
    piVar6 = (int *)piVar1[1];
    *piVar1 = 0;
    piVar1[1] = 0;
    *(int **)(iVar2 + 4) = piVar6;
    *piVar6 = iVar2;
    kfree_skb();
    piVar1 = piVar10;
    piVar10 = (int *)*piVar10;
  }
  if (piVar7 == (int *)*piVar7) {
    cancel_delayed_work(piVar7 + 0xb);
  }
  if (iVar8 != iVar9) {
    bt_err(DAT_00010e8c,iVar8,iVar9);
  }
  hci_uart_tx_wakeup(param_1);
  iVar9 = piVar7[10];
  pcVar5 = *(char **)(iVar9 + 0xa4);
  bVar4 = pcVar5[1] & 0xf;
  if ((bVar4 == 2) || (bVar4 == 4)) {
LAB_00010dd4:
    uVar3 = DAT_00010e90;
    if (*pcVar5 < '\0') {
LAB_00010e1a:
      *(byte *)(iVar9 + 0x18) = bVar4;
      skb_pull(piVar7[10],4);
      iVar9 = piVar7[10];
      if (*(char *)(iVar9 + 0x18) == '\x04') {
        rtk_btcoex_parse_event(*(undefined4 *)(iVar9 + 0xa4),*(undefined4 *)(iVar9 + 0x50));
      }
      iVar9 = piVar7[10];
      if (*(char *)(iVar9 + 0x18) == '\x02') {
        rtk_btcoex_parse_l2cap_data_rx(*(undefined4 *)(iVar9 + 0xa4),*(undefined4 *)(iVar9 + 0x50));
      }
      hci_recv_frame(*(undefined4 *)(param_1 + 4),piVar7[10]);
      goto LAB_00010e7c;
    }
LAB_00010e70:
    bt_err(DAT_00010e98,bVar4,uVar3);
    iVar9 = piVar7[10];
  }
  else {
    if (bVar4 == 3) goto LAB_00010e1a;
    if (bVar4 != 0xf) {
      if (bVar4 == 1) goto LAB_00010dd4;
      if (bVar4 == 0xe) goto LAB_00010e1a;
      if ((pcVar5[1] & 0xfU) == 0) goto LAB_00010e78;
      uVar3 = DAT_00010e94 & (int)*pcVar5 >> 0x20;
      if (bVar4 < 0xe) {
        uVar3 = DAT_00010e90;
      }
      goto LAB_00010e70;
    }
  }
LAB_00010e78:
  kfree_skb(iVar9);
LAB_00010e7c:
  piVar7[0x17] = 0;
  piVar7[10] = 0;
  return;
}



/* ===== h5_recv @ 00010e9c size=558 ===== */

undefined4 h5_recv(int param_1,char *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined4 extraout_r1;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  byte in_Q;
  uint in_cpsr;
  
  uVar5 = DAT_000110e8;
  uVar4 = DAT_000110e4;
  uVar3 = DAT_000110e0;
  iVar14 = *(int *)(param_1 + 0x54);
switchD_00010f9c_default:
  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(iVar14 + 0x24) == 0) goto LAB_00010f96;
  cVar15 = *param_2;
  if (cVar15 == -0x40) {
    bt_err(DAT_000110d4);
    kfree_skb(*(undefined4 *)(iVar14 + 0x28));
    *(undefined4 *)(iVar14 + 0x5c) = 1;
    iVar12 = 0;
LAB_00010ed8:
    *(int *)(iVar14 + 0x24) = iVar12;
  }
  else if (*(int *)(iVar14 + 0x60) == 0) {
    if (cVar15 != -0x25) {
      pcVar6 = (char *)skb_put(*(undefined4 *)(iVar14 + 0x28),1);
      *pcVar6 = cVar15;
      if (((int)((uint)**(byte **)(*(int *)(iVar14 + 0x28) + 0xa4) << 0x19) < 0) &&
         (*(int *)(iVar14 + 0x5c) != 4)) {
        h5_crc_update(iVar14 + 100,cVar15);
      }
      goto LAB_00010f1a;
    }
    *(undefined4 *)(iVar14 + 0x60) = 1;
  }
  else if (*(int *)(iVar14 + 0x60) == 1) {
    switch(cVar15) {
    case -0x24:
      puVar7 = (undefined1 *)skb_put(*(undefined4 *)(iVar14 + 0x28),1);
      uVar8 = 0xc0;
      break;
    case -0x23:
      puVar7 = (undefined1 *)skb_put(*(undefined4 *)(iVar14 + 0x28),1);
      uVar8 = 0xdb;
      break;
    case -0x22:
      puVar7 = (undefined1 *)skb_put(*(undefined4 *)(iVar14 + 0x28),1);
      uVar8 = 0x11;
      break;
    case -0x21:
      puVar7 = (undefined1 *)skb_put(*(undefined4 *)(iVar14 + 0x28),1);
      uVar8 = 0x13;
      break;
    default:
      bt_err(DAT_000110d8,cVar15);
      kfree_skb(*(undefined4 *)(iVar14 + 0x28));
      iVar12 = 0;
      *(undefined4 *)(iVar14 + 0x28) = 0;
      *(undefined4 *)(iVar14 + 0x5c) = 0;
      goto LAB_00010ed8;
    }
    *puVar7 = uVar8;
    if (((int)((uint)**(byte **)(*(int *)(iVar14 + 0x28) + 0xa4) << 0x19) < 0) &&
       (*(int *)(iVar14 + 0x5c) != 4)) {
      h5_crc_update(iVar14 + 100);
    }
    *(undefined4 *)(iVar14 + 0x60) = 0;
LAB_00010f1a:
    iVar12 = *(int *)(iVar14 + 0x24) + -1;
    goto LAB_00010ed8;
  }
  goto LAB_00010ee4;
LAB_00010f96:
  switch(*(undefined4 *)(iVar14 + 0x5c)) {
  case 0:
    if (*param_2 == -0x40) {
      *(undefined4 *)(iVar14 + 0x5c) = 1;
    }
    goto LAB_00010ee4;
  case 1:
    if (*param_2 != -0x40) {
      *(undefined4 *)(iVar14 + 0x5c) = 2;
      *(undefined4 *)(iVar14 + 0x60) = 0;
      *(undefined4 *)(iVar14 + 0x24) = 4;
      *(undefined2 *)(iVar14 + 100) = 0xffff;
      iVar12 = __alloc_skb(0x100d,0xa20,0,0xffffffff);
      if (iVar12 != 0) {
        *(int *)(iVar12 + 0xa4) = *(int *)(iVar12 + 0xa4) + 8;
        *(int *)(iVar12 + 0x98) = *(int *)(iVar12 + 0x98) + 8;
      }
      *(int *)(iVar14 + 0x28) = iVar12;
      if (iVar12 == 0) {
        bt_err(DAT_000110dc);
        *(undefined4 *)(iVar14 + 0x5c) = 0;
        *(undefined4 *)(iVar14 + 0x24) = 0;
        return 0;
      }
      *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(param_1 + 4);
      goto switchD_00010f9c_default;
    }
LAB_00010ee4:
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    goto switchD_00010f9c_default;
  case 2:
    pbVar9 = *(byte **)(*(int *)(iVar14 + 0x28) + 0xa4);
    uVar11 = (uint)*pbVar9;
    if ((uint)pbVar9[3] == (~(pbVar9[1] + uVar11 + (uint)pbVar9[2]) & 0xff)) {
      if ((int)(uVar11 << 0x18) < 0) {
        uVar13 = (uint)*(byte *)(iVar14 + 0x68);
        uVar11 = uVar11 & 7;
        cVar17 = uVar13 <= uVar11;
        cVar18 = SBORROW4(uVar11,uVar13);
        cVar15 = (int)(uVar11 - uVar13) < 0;
        cVar16 = uVar11 == uVar13;
        if (!(bool)cVar16) {
          bt_err(uVar4);
          bVar1 = cVar15 << 4 | cVar16 << 3 | cVar17 << 2 | cVar18 << 1 | in_Q;
          disableIRQinterrupts();
          *(undefined1 *)(iVar14 + 0x69) = 1;
          uVar11 = in_cpsr & 0xffffff00;
          in_Q = (in_cpsr >> 0x1b & 1) != 0;
          hci_uart_tx_wakeup(param_1,extraout_r1,1,(uint)bVar1 << 0x1b);
          break;
        }
      }
      *(undefined4 *)(iVar14 + 0x5c) = 3;
      iVar12 = *(int *)(*(int *)(iVar14 + 0x28) + 0xa4);
      iVar12 = (uint)*(byte *)(iVar12 + 2) * 0x10 + (uint)(*(byte *)(iVar12 + 1) >> 4);
      goto LAB_00010fd0;
    }
    bt_err(uVar5);
    uVar11 = in_cpsr;
    break;
  case 3:
    if (-1 < (int)((uint)**(byte **)(*(int *)(iVar14 + 0x28) + 0xa4) << 0x19)) {
LAB_0001105e:
      h5_complete_rx_pkt(param_1);
      goto switchD_00010f9c_default;
    }
    *(undefined4 *)(iVar14 + 0x5c) = 4;
    iVar12 = 2;
    goto LAB_00010fd0;
  case 4:
    bVar2 = (byte)*(undefined2 *)(iVar14 + 100);
    bVar1 = (byte)((ushort)*(undefined2 *)(iVar14 + 100) >> 8);
    uVar13 = ((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                              bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x10) >> 0x10;
    iVar10 = *(int *)(*(int *)(iVar14 + 0x28) + 0xa4);
    iVar12 = *(int *)(*(int *)(iVar14 + 0x28) + 0x50) + -2;
    uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar10 + iVar12),*(undefined1 *)(iVar10 + iVar12 + 1));
    if (uVar11 == uVar13) {
      skb_trim();
      goto LAB_0001105e;
    }
    bt_err(uVar3,uVar13,uVar11,uVar13,param_4);
    uVar11 = in_cpsr;
    break;
  default:
    goto switchD_00010f9c_default;
  }
  kfree_skb(*(undefined4 *)(iVar14 + 0x28));
  iVar12 = 0;
  *(undefined4 *)(iVar14 + 0x5c) = 0;
  in_cpsr = uVar11;
LAB_00010fd0:
  *(int *)(iVar14 + 0x24) = iVar12;
  goto switchD_00010f9c_default;
}



/* ===== h5_prepare_pkt @ 000110ec size=386 ===== */

int h5_prepare_pkt(int param_1,int param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_26 [2];
  undefined4 local_24;
  
  iVar7 = param_4;
  local_24 = param_2;
  switch(param_4) {
  case 0:
    bVar6 = 0;
    break;
  case 1:
    bVar6 = 1;
    break;
  case 2:
    bVar6 = 2;
    iVar7 = 1;
    break;
  case 3:
    bVar6 = 3;
    iVar7 = 0;
    break;
  case 4:
    bVar6 = 4;
    iVar7 = 1;
    break;
  default:
    bt_err(DAT_00011280);
    return 0;
  case 0xe:
    bVar6 = 0xe;
    iVar7 = 0;
    break;
  case 0xf:
    bVar6 = 0xf;
    iVar7 = 0;
  }
  iVar3 = __alloc_skb((param_3 + 7) * 2,0xa20,0,0xffffffff);
  if (iVar3 != 0) {
    *(char *)(iVar3 + 0x18) = (char)param_4;
    puVar4 = (undefined1 *)skb_put(iVar3,1);
    *puVar4 = 0xc0;
    disableIRQinterrupts();
    bVar5 = *(char *)(param_1 + 0x68) << 3;
    *(undefined1 *)(param_1 + 0x69) = 0;
    if (iVar7 != 0) {
      disableIRQinterrupts();
      bVar5 = bVar5 | *(char *)(param_1 + 0x6a) + 0x80U;
      *(byte *)(param_1 + 0x6a) = *(char *)(param_1 + 0x6a) + 1U & 7;
    }
    if (*(char *)(param_1 + 0x66) != '\0') {
      bVar5 = bVar5 | 0x40;
    }
    bVar6 = bVar6 | (byte)((param_3 & 0xf) << 4);
    cVar2 = (char)((int)param_3 >> 4);
    local_24 = CONCAT13(~(bVar6 + bVar5 + cVar2),CONCAT12(cVar2,CONCAT11(bVar6,bVar5)));
    iVar7 = 0;
    puVar8 = &local_24;
    do {
      uVar1 = *(undefined1 *)puVar8;
      h5_slip_one_byte(iVar3,uVar1);
      if (*(char *)(param_1 + 0x66) != '\0') {
        h5_crc_update(local_26,uVar1);
      }
      iVar7 = iVar7 + 1;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (iVar7 != 4);
    for (iVar7 = 0; iVar7 < (int)param_3; iVar7 = iVar7 + 1) {
      h5_slip_one_byte(iVar3,*(undefined1 *)(param_2 + iVar7));
      if (*(char *)(param_1 + 0x66) != '\0') {
        h5_crc_update(local_26,*(undefined1 *)(param_2 + iVar7));
      }
    }
    if (*(char *)(param_1 + 0x66) != '\0') {
      h5_slip_one_byte(iVar3,0xff);
      h5_slip_one_byte(iVar3,0xff);
    }
    puVar4 = (undefined1 *)skb_put(iVar3,1);
    *puVar4 = 0xc0;
  }
  return iVar3;
}



/* ===== h5_dequeue @ 00011284 size=186 ===== */

int h5_dequeue(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x54);
  iVar2 = skb_dequeue(iVar7 + 0x18);
  if (iVar2 != 0) {
    iVar3 = h5_prepare_pkt(iVar7,*(undefined4 *)(iVar2 + 0xa4),*(undefined4 *)(iVar2 + 0x50),
                           *(undefined1 *)(iVar2 + 0x18));
    if (iVar3 != 0) {
      kfree_skb(iVar2);
      return iVar3;
    }
    skb_queue_head(iVar7 + 0x18,iVar2);
    bt_err(DAT_00011340);
  }
  disableIRQinterrupts();
  if (*(uint *)(iVar7 + 8) < 4) {
    piVar4 = (int *)skb_dequeue(iVar7 + 0xc);
    if (piVar4 != (int *)0x0) {
      iVar2 = h5_prepare_pkt(iVar7,piVar4[0x29],piVar4[0x14],(char)piVar4[6]);
      puVar1 = DAT_00011344;
      if (iVar2 != 0) {
        piVar6 = *(int **)(iVar7 + 4);
        *piVar4 = iVar7;
        piVar4[1] = (int)piVar6;
        *(int **)(iVar7 + 4) = piVar4;
        *piVar6 = (int)piVar4;
        uVar5 = *puVar1;
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        queue_delayed_work_on(1,uVar5,iVar7 + 0x2c,0x4b);
        return iVar2;
      }
      skb_queue_head(iVar7 + 0xc,piVar4);
      bt_err(DAT_00011340);
    }
  }
  if (*(char *)(iVar7 + 0x69) == '\0') {
    return 0;
  }
  iVar2 = h5_prepare_pkt(iVar7,0,0);
  return iVar2;
}



/* ===== h5_init @ 00011348 size=30 ===== */

int h5_init(void)

{
  int iVar1;
  
  iVar1 = hci_uart_register_proto(DAT_00011368);
  if (iVar1 == 0) {
    bt_info(DAT_0001136c);
  }
  else {
    bt_err(DAT_00011370);
  }
  return iVar1;
}



/* ===== h5_deinit @ 00011374 size=6 ===== */

void h5_deinit(void)

{
  hci_uart_unregister_proto(DAT_0001137c);
  return;
}



/* ===== list_del @ 00011380 size=22 ===== */

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



/* ===== queue_delayed_work @ 00011396 size=12 ===== */

void queue_delayed_work(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  queue_delayed_work_on(1,param_1,param_2,param_3);
  return;
}



/* ===== find_profile_by_handle_dcid.constprop.10 @ 000113a2 size=38 ===== */

undefined4 * find_profile_by_handle_dcid_constprop_10(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(DAT_000113c8 + 8);
  puVar2 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar1 == (undefined4 *)(DAT_000113c8 + 8)) {
      return (undefined4 *)0x0;
    }
    if ((*(ushort *)(puVar1 + 2) == param_1) && (*(ushort *)(puVar1 + 3) == param_2)) break;
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar1;
}



/* ===== find_profile_by_handle_scid.constprop.11 @ 000113cc size=38 ===== */

undefined4 * find_profile_by_handle_scid_constprop_11(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(DAT_000113f4 + 8);
  puVar2 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar1 == (undefined4 *)(DAT_000113f4 + 8)) {
      return (undefined4 *)0x0;
    }
    if ((*(ushort *)(puVar1 + 2) == param_1) && (*(ushort *)((int)puVar1 + 0xe) == param_2)) break;
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar1;
}



/* ===== find_connection_by_handle.constprop.15 @ 000113f8 size=34 ===== */

undefined4 * find_connection_by_handle_constprop_15(ushort param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)*DAT_0001141c;
  puVar3 = (undefined4 *)*DAT_0001141c;
  while( true ) {
    puVar2 = puVar1;
    if (puVar3 == DAT_0001141c) {
      return (undefined4 *)0x0;
    }
    if (*(ushort *)(puVar3 + 2) == (param_1 & 0xfff)) break;
    puVar1 = (undefined4 *)*puVar2;
    puVar3 = puVar2;
  }
  return puVar3;
}



/* ===== count_hogp_packet_timeout @ 00011420 size=124 ===== */

void count_hogp_packet_timeout(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(int *)(param_1 + 0x34) == 0) ||
     (printk(DAT_000114a4,DAT_0001149c), *(int *)(param_1 + 0x34) == 0)) {
    if ((int)((uint)*(ushort *)(param_1 + 0x40) << 0x1a) < 0) {
      printk(DAT_000114a0,DAT_0001149c);
      update_profile_state(param_1 + -100,5,0);
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (((*(int *)(param_1 + 0x38) == 0) ||
      (printk(DAT_000114ac,DAT_0001149c), *(int *)(param_1 + 0x38) == 0)) &&
     ((int)((uint)*(ushort *)(param_1 + 0x40) << 0x19) < 0)) {
    printk(DAT_000114a8,DAT_0001149c);
    update_profile_state(param_1 + -100,6,0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  queue_delayed_work(*(undefined4 *)(DAT_000114b0 + 0x18),param_1,300,param_4);
  return;
}



/* ===== count_pan_packet_timeout @ 000114b4 size=90 ===== */

void count_pan_packet_timeout(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x5c) == 0) ||
     (printk(DAT_0001151c,DAT_00011510), *(uint *)(param_1 + 0x5c) < 5)) {
    if (-1 < (int)((uint)*(ushort *)(param_1 + 0x6c) << 0x1c)) goto LAB_000114da;
    printk(DAT_00011514,DAT_00011510);
    uVar1 = 0;
  }
  else {
    if ((int)((uint)*(ushort *)(param_1 + 0x6c) << 0x1c) < 0) goto LAB_000114da;
    printk(DAT_00011520);
    uVar1 = 1;
  }
  update_profile_state(param_1 + -0x38,3,uVar1);
LAB_000114da:
  *(undefined4 *)(param_1 + 0x5c) = 0;
  queue_delayed_work(*(undefined4 *)(DAT_00011518 + 0x18),param_1,300,param_4);
  return;
}



/* ===== count_a2dp_packet_timeout @ 00011524 size=98 ===== */

void count_a2dp_packet_timeout(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(int *)(param_1 + 0x84) == 0) ||
     (printk(DAT_00011590,DAT_00011588), *(int *)(param_1 + 0x84) == 0)) {
    if ((int)((uint)*(ushort *)(param_1 + 0x98) << 0x1d) < 0) {
      printk(DAT_0001158c,DAT_00011588);
      update_profile_state(param_1 + -0xc,2,0);
      if ((int)((uint)*(ushort *)(param_1 + 0x96) << 0x18) < 0) {
        update_profile_state(param_1 + -0xc,7,0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  queue_delayed_work(*(undefined4 *)(DAT_00011594 + 0x18),param_1,300,param_4);
  return;
}



/* ===== update_hid_active_state @ 00011598 size=138 ===== */

void update_hid_active_state(undefined4 param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  
  iVar1 = find_connection_by_handle_constprop_15();
  if (iVar1 == 0) {
    return;
  }
  printk(DAT_00011628,DAT_00011624,param_1,param_2);
  uVar3 = *(ushort *)(iVar1 + 0xa2);
  if (-1 < (int)((uint)uVar3 << 0x1e)) {
    printk(DAT_0001162c);
    return;
  }
  if (param_2 < 0x3c) {
    if ((uVar3 & 0x10) != 0) {
      return;
    }
    *(ushort *)(iVar1 + 0xa2) = uVar3 | 0x10;
    cVar2 = *(char *)(iVar1 + 0xaa) + '\x01';
    *(char *)(iVar1 + 0xaa) = cVar2;
    if (cVar2 != '\x01') goto LAB_000115f4;
    uVar3 = *(ushort *)(iVar1 + 0xa4) | 2;
  }
  else {
    if ((uVar3 & 0x10) == 0) {
      return;
    }
    *(ushort *)(iVar1 + 0xa2) = uVar3 & 0xffef;
    cVar2 = *(char *)(iVar1 + 0xaa) + -1;
    *(char *)(iVar1 + 0xaa) = cVar2;
    if (cVar2 != '\0') goto LAB_000115f4;
    uVar3 = *(ushort *)(iVar1 + 0xa4) & 0xfffd;
  }
  *(ushort *)(iVar1 + 0xa4) = uVar3;
LAB_000115f4:
  rtk_notify_profileinfo_to_fw();
  return;
}



/* ===== rtl_l2_data_process @ 00011630 size=554 ===== */

void rtl_l2_data_process(byte *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *__dest;
  uint uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  byte in_Q;
  byte *pbVar13;
  undefined4 uStack_24;
  
  uVar7 = (uint)*param_1 + (uint)param_1[1] * 0x100;
  iVar6 = (uint)param_1[6] + (uint)param_1[7] * 0x100;
  uVar8 = uVar7 & 0xfff;
  pbVar13 = param_1;
  uStack_24 = param_2;
  iVar3 = find_connection_by_handle_constprop_15(uVar8);
  iVar4 = DAT_0001185c;
  if (iVar3 != 0) {
    if (iVar6 == 1) {
      uVar7 = (uint)param_1[8];
      cVar12 = SBORROW4(uVar7,6);
      if (uVar7 < 7) {
        cVar11 = uVar7 != 0 && (1 << uVar7 - 1 & 0x80000000U) != 0;
        cVar10 = (1 << uVar7 & 0x4cU) == 0;
        cVar9 = '\0';
        if (!(bool)cVar10) {
          printk(DAT_00011860,uVar7,param_2,param_3);
          if (*(int *)(iVar4 + 0x1c4) != 0) {
            disableIRQinterrupts();
            if (*(int *)(iVar4 + 0x1b8) == iVar4 + 0x1b8) {
              __dest = (void *)0x0;
            }
            else {
              __dest = (void *)(*(int *)(iVar4 + 0x1b8) + -0x84);
              list_del(*(int *)(iVar4 + 0x1b8),
                       (uint)(byte)(cVar9 << 4 | cVar10 << 3 | cVar11 << 2 | cVar12 << 1 | in_Q) <<
                       0x1b);
            }
            if (__dest != (void *)0x0) {
              if (0x7f < param_2) {
                param_2 = 0x80;
              }
              memcpy(__dest,param_1,param_2);
              *(short *)((int)__dest + 0x82) = (short)param_3;
              iVar3 = DAT_00011864;
              disableIRQinterrupts();
              piVar5 = *(int **)(iVar4 + 0x1b4);
              *(int *)(iVar4 + 0x1b4) = (int)__dest + 0x84;
              *(int *)((int)__dest + 0x84) = iVar3;
              *(int **)((int)__dest + 0x88) = piVar5;
              *piVar5 = (int)__dest + 0x84;
              queue_delayed_work(*(undefined4 *)(iVar4 + 0x14),iVar3 + -0x168,0);
              return;
            }
          }
          printk(DAT_0001186c,DAT_00011868);
        }
      }
    }
    else if (((uVar7 >> 0xc != 1) && ((*(ushort *)(iVar3 + 0xa2) & 0xc) != 0)) &&
            (*(char *)(iVar3 + 0xa0) == '\0')) {
      if (param_3 == 0) {
        iVar4 = find_profile_by_handle_scid_constprop_11();
      }
      else {
        iVar4 = find_profile_by_handle_dcid_constprop_10(uVar8,iVar6);
      }
      if (iVar4 != 0) {
        if (*(short *)(iVar4 + 0x10) == 0x202) {
          if (-1 < (int)((uint)*(ushort *)(iVar3 + 0xa4) << 0x1d)) {
            uVar1 = *(ushort *)(param_1 + 4);
            update_profile_state(iVar3,2,1,(uint)*(ushort *)(iVar3 + 0xa4),pbVar13);
            if (param_3 == 0) {
              if (-1 < (int)((uint)*(ushort *)(iVar3 + 0xa2) << 0x18)) {
                *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x80;
                update_profile_connection(iVar3,7,1);
              }
              update_profile_state(iVar3,7,1);
            }
            if (100 < uVar1) {
              printk(DAT_00011870);
              pbVar13 = param_1 + 8;
              printk(DAT_00011874,*pbVar13 >> 6,*pbVar13 & 0xf,param_1[9] & 0x7f);
              iVar2 = DAT_0001187c;
              iVar6 = (param_1[8] & 0xf) * 4;
              uStack_24._3_1_ = pbVar13[iVar6 + 0xf];
              printk(DAT_00011878,pbVar13[iVar6 + 0xd]);
              printk(DAT_00011880,iVar2 + 0x110 + (uint)(pbVar13[iVar6 + 0xe] >> 6) * 8);
              printk(DAT_00011884,
                     *(undefined1 *)(((pbVar13[iVar6 + 0xe] & 0x3f) >> 4) + iVar2 + 0x130));
              printk(DAT_00011888,iVar2 + 0x134 + ((pbVar13[iVar6 + 0xe] & 0xf) >> 2) * 0x10);
              printk(DAT_0001188c,
                     ((int)((uint)pbVar13[iVar6 + 0xe] << 0x1e) >> 0x1f) * -0xc + iVar2 + 0x174);
              printk(DAT_00011890,*(undefined1 *)(iVar2 + (pbVar13[iVar6 + 0xe] & 1) + 0x18c));
              printk(DAT_00011894,uStack_24._3_1_);
              rtk_vendor_cmd_to_fw(0xfc51,1,(int)&uStack_24 + 3);
            }
          }
          *(int *)(iVar3 + 0x90) = *(int *)(iVar3 + 0x90) + 1;
        }
        if (*(char *)(iVar4 + 0x10) == '\x03') {
          *(int *)(iVar3 + 0x94) = *(int *)(iVar3 + 0x94) + 1;
        }
      }
    }
  }
  return;
}



/* ===== rtl_l2_work @ 00011898 size=664 ===== */

void rtl_l2_work(uint param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  ushort uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  char cVar20;
  char cVar21;
  bool bVar22;
  char cVar23;
  char cVar24;
  byte in_Q;
  byte bVar25;
  uint in_cpsr;
  uint uVar26;
  uint uVar27;
  
  iVar7 = DAT_00011b60;
  bVar25 = in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q;
  disableIRQinterrupts();
  uVar27 = param_1;
LAB_000118a8:
  if (*(int *)(param_1 + 0x168) == param_1 + 0x168) {
    return;
  }
  piVar13 = *(int **)(param_1 + 0x168);
  list_del(piVar13,(uint)bVar25 << 0x1b,*(int *)(param_1 + 0x168),param_1 + 0x168,uVar27,param_2,
           param_3);
  uVar26 = in_cpsr & 0xffffff00;
  bVar25 = (in_cpsr >> 0x1b & 1) != 0;
  uVar15 = (uint)*(byte *)(piVar13 + -0x1f);
  uVar14 = (ushort)*(byte *)(piVar13 + -0x21) + (ushort)*(byte *)((int)piVar13 + -0x83) * 0x100 &
           0xfff;
  if (uVar15 == 3) {
    uVar4 = (undefined2)piVar13[-0x1e];
    uVar5 = *(ushort *)((int)piVar13 + -0x76);
    uVar3 = (ushort)*(byte *)(piVar13 + -0x1d) + (ushort)*(byte *)((int)piVar13 + -0x73) * 0x100;
    param_2 = (uint)uVar3;
    uVar27 = (uint)uVar5;
    printk(DAT_00011b44,iVar7 + (uint)*(ushort *)((int)piVar13 + -2) * 4,uVar14,uVar4);
    cVar1 = *(char *)((int)piVar13 + -2);
    if (cVar1 == '\0') {
      iVar9 = find_profile_by_handle_scid_constprop_11();
    }
    else {
      iVar9 = find_profile_by_handle_dcid_constprop_10(uVar14,(uint)uVar5);
    }
    cVar20 = iVar9 < 0;
    cVar21 = iVar9 == 0;
    cVar23 = '\x01';
    cVar24 = '\0';
    if (!(bool)cVar21) {
      cVar20 = '\0';
      cVar23 = '\x01';
      cVar21 = '\0';
      if ((uVar3 & 0xff) == 0) {
        printk(DAT_00011b48);
        if (cVar1 == '\0') {
          *(undefined2 *)(iVar9 + 0xc) = uVar4;
        }
        else {
          *(undefined2 *)(iVar9 + 0xe) = uVar4;
        }
        iVar12 = find_connection_by_handle_constprop_15(uVar14);
        cVar20 = iVar12 < 0;
        cVar21 = iVar12 == 0;
        cVar23 = '\x01';
        cVar24 = '\0';
        if (!(bool)cVar21) {
          cVar21 = '\0';
          cVar20 = '\0';
          update_profile_connection(iVar12,*(undefined1 *)(iVar9 + 0x10));
        }
      }
    }
  }
  else if (uVar15 == 6) {
    sVar6 = (short)piVar13[-0x1e];
    uVar15 = (uint)*(ushort *)((int)piVar13 + -0x76);
    printk(DAT_00011b4c,iVar7 + (uint)*(ushort *)((int)piVar13 + -2) * 4,uVar14,sVar6,uVar15);
    bVar2 = *(byte *)((int)piVar13 + -2);
    uVar27 = uVar15;
    param_2 = (uint)bVar2;
    printk(DAT_00011b54,DAT_00011b50,uVar14,sVar6);
    puVar10 = (undefined4 *)(DAT_00011b58 + 8);
    if (bVar2 == 0) {
      puVar8 = (undefined4 *)**(undefined4 **)(DAT_00011b58 + 8);
      puVar19 = *(undefined4 **)(DAT_00011b58 + 8);
      while( true ) {
        puVar11 = puVar8;
        cVar23 = puVar10 <= puVar19;
        cVar24 = SBORROW4((int)puVar19,(int)puVar10);
        cVar20 = (int)puVar19 - (int)puVar10 < 0;
        cVar21 = '\x01';
        if (puVar19 == puVar10) break;
        if (((*(ushort *)(puVar19 + 2) == uVar14) && (*(ushort *)(puVar19 + 3) == uVar15)) &&
           (*(short *)((int)puVar19 + 0xe) == sVar6)) goto LAB_00011ae8;
        puVar8 = (undefined4 *)*puVar11;
        puVar19 = puVar11;
      }
    }
    else {
      puVar8 = (undefined4 *)**(undefined4 **)(DAT_00011b58 + 8);
      puVar19 = *(undefined4 **)(DAT_00011b58 + 8);
      while( true ) {
        puVar11 = puVar8;
        cVar23 = puVar10 <= puVar19;
        cVar24 = SBORROW4((int)puVar19,(int)puVar10);
        cVar20 = (int)puVar19 - (int)puVar10 < 0;
        cVar21 = '\x01';
        if (puVar19 == puVar10) break;
        if (((*(ushort *)(puVar19 + 2) == uVar14) && (*(short *)(puVar19 + 3) == sVar6)) &&
           (*(ushort *)((int)puVar19 + 0xe) == uVar15)) goto LAB_00011ae8;
        puVar8 = (undefined4 *)*puVar11;
        puVar19 = puVar11;
      }
    }
  }
  else {
    cVar23 = 1 < uVar15;
    cVar24 = SBORROW4(uVar15,2);
    cVar20 = (int)(uVar15 - 2) < 0;
    cVar21 = uVar15 == 2;
    uVar16 = DAT_00011b5c;
    if ((bool)cVar21) {
      uVar3 = (ushort)*(byte *)(piVar13 + -0x1e) + (ushort)*(byte *)((int)piVar13 + -0x77) * 0x100;
      uVar17 = (uint)(short)uVar3;
      uVar15 = (uint)uVar3;
      uVar18 = (uint)*(ushort *)((int)piVar13 + -0x76);
      uVar27 = uVar18;
      printk(DAT_00011b30,iVar7 + (uint)*(ushort *)((int)piVar13 + -2) * 4,uVar14,uVar15);
      if (uVar17 == 0x13) {
        uVar16 = 1;
        cVar23 = true;
        cVar24 = false;
      }
      else {
        uVar16 = 2;
        if ((int)uVar17 < 0x14) {
          cVar23 = uVar17 != 0;
          cVar24 = SBORROW4(uVar17,1);
          iVar9 = uVar17 - 1;
          if (uVar17 == 1) {
LAB_0001197c:
            cVar21 = true;
            cVar20 = iVar9 < 0;
            uVar16 = DAT_00011b3c;
            goto LAB_00011980;
          }
          cVar23 = 0x10 < uVar17;
          cVar24 = SBORROW4(uVar17,0x11);
          bVar22 = uVar17 == 0x11;
          if (bVar22) {
            uVar16 = 1;
          }
        }
        else {
          cVar23 = 0x16 < uVar17;
          cVar24 = SBORROW4(uVar17,0x17);
          iVar9 = uVar17 - 0x17;
          if (uVar17 == 0x17) goto LAB_0001197c;
          cVar23 = 0x18 < uVar17;
          cVar24 = SBORROW4(uVar17,0x19);
          bVar22 = uVar17 == 0x19;
        }
        if (!bVar22) {
          uVar16 = 3;
        }
      }
      cVar21 = (*(ushort *)((int)piVar13 + -2) & 0xff) == 0;
      cVar20 = '\0';
      if ((bool)cVar21) {
        iVar9 = find_profile_by_handle_dcid_constprop_10(uVar14,uVar18);
        cVar23 = '\x01';
        cVar24 = '\0';
        cVar20 = iVar9 < 0;
        cVar21 = '\0';
        if (iVar9 == 0) {
          uVar27 = 0;
          uVar17 = uVar18;
          goto LAB_0001199c;
        }
      }
      else {
        iVar9 = find_profile_by_handle_scid_constprop_11();
        if (iVar9 == 0) {
          uVar17 = 0;
          uVar27 = uVar18;
LAB_0001199c:
          iVar9 = list_allocate_add(uVar14,uVar15,uVar16,uVar17);
          cVar23 = true;
          cVar24 = false;
          cVar20 = iVar9 < 0;
          cVar21 = iVar9 == 0;
          uVar16 = DAT_00011b40;
          uVar15 = DAT_00011b34;
          if (!(bool)cVar21) goto LAB_0001195a;
          goto LAB_00011980;
        }
      }
      printk(DAT_00011b38,DAT_00011b34);
    }
    else {
LAB_00011980:
      printk(uVar16,uVar15);
    }
  }
  goto LAB_0001195a;
LAB_00011ae8:
  cVar20 = (int)puVar19 < 0;
  cVar21 = puVar19 == (undefined4 *)0x0;
  cVar23 = '\x01';
  cVar24 = '\0';
  if (!(bool)cVar21) {
    iVar9 = find_connection_by_handle_constprop_15(uVar14);
    cVar20 = iVar9 < 0;
    cVar21 = iVar9 == 0;
    cVar23 = '\x01';
    cVar24 = '\0';
    if (!(bool)cVar21) {
      update_profile_connection(iVar9,*(undefined1 *)(puVar19 + 4),0);
      uVar15 = (uint)*(byte *)(puVar19 + 4);
      cVar23 = 1 < uVar15;
      cVar24 = SBORROW4(uVar15,2);
      cVar20 = (int)(uVar15 - 2) < 0;
      cVar21 = '\0';
      if (uVar15 == 2) {
        cVar23 = (*(ushort *)(iVar9 + 0xa2) & 0x100) != 0;
        iVar12 = (uint)*(ushort *)(iVar9 + 0xa2) << 0x18;
        cVar21 = iVar12 == 0;
        cVar20 = '\0';
        if (iVar12 < 0) {
          cVar21 = '\0';
          cVar20 = '\0';
          update_profile_connection(iVar9,7,0);
        }
      }
      delete_profile_from_hash_part_1(puVar19);
    }
  }
LAB_0001195a:
  bVar25 = cVar20 << 4 | cVar21 << 3 | cVar23 << 2 | cVar24 << 1 | bVar25;
  disableIRQinterrupts();
  puVar10 = *(undefined4 **)(param_1 + 0x174);
  *(int **)(param_1 + 0x174) = piVar13;
  *piVar13 = param_1 + 0x170;
  piVar13[1] = (int)puVar10;
  *puVar10 = piVar13;
  in_cpsr = uVar26;
  goto LAB_000118a8;
}



/* ===== rtl_ev_work @ 00011b64 size=1030 ===== */

void rtl_ev_work(uint param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  int *piVar21;
  byte bVar22;
  uint *puVar23;
  short sVar24;
  uint *puVar25;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  byte in_Q;
  byte bVar31;
  uint in_cpsr;
  uint uVar32;
  
  iVar3 = DAT_00011e80;
  bVar31 = in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q;
  disableIRQinterrupts();
  uVar18 = param_1;
  do {
    piVar1 = (int *)(param_1 + 0x74);
    if ((int *)*piVar1 == piVar1) {
      return;
    }
    piVar21 = *(int **)(param_1 + 0x74);
    list_del(piVar21,(uint)bVar31 << 0x1b,(int *)*piVar1,piVar1,uVar18,param_2,param_3);
    uVar11 = DAT_00011ec0;
    uVar10 = DAT_00011eb4;
    uVar9 = DAT_00011eb0;
    uVar8 = DAT_00011ea8;
    uVar7 = DAT_00011ea4;
    uVar6 = DAT_00011ea0;
    uVar5 = DAT_00011e9c;
    uVar4 = DAT_00011e98;
    uVar14 = DAT_00011e94;
    uVar15 = DAT_00011e90;
    uVar32 = in_cpsr & 0xffffff00;
    bVar31 = (in_cpsr >> 0x1b & 1) != 0;
    uVar19 = (uint)*(byte *)(piVar21 + -9);
    if (uVar19 == 0x14) {
      uVar17 = *(undefined2 *)((int)piVar21 + -0x1e);
      bVar22 = *(byte *)((int)piVar21 + -0x21);
      bVar12 = *(byte *)(piVar21 + -8);
LAB_00011cea:
      cVar30 = '\0';
      cVar29 = '\x01';
      cVar28 = '\x01';
      cVar26 = '\0';
      update_hid_active_state((uint)bVar22 + (uint)bVar12 * 0x100,uVar17);
    }
    else if (uVar19 < 0x15) {
      if (uVar19 == 5) {
        if (*(char *)(iVar3 + 0x84) != '\0') {
          *(undefined1 *)(iVar3 + 0x84) = 0;
          printk(uVar11);
        }
        sVar24 = *(short *)((int)piVar21 + -0x21);
        cVar27 = *(char *)((int)piVar21 + -0x22);
        printk(DAT_00011ec4,cVar27,sVar24,*(undefined1 *)((int)piVar21 + -0x1f));
        cVar29 = '\x01';
        cVar26 = '\0';
        cVar30 = '\0';
        cVar28 = '\0';
        if (cVar27 == '\0') {
          printk(DAT_00011ec8);
          iVar13 = find_connection_by_handle_constprop_15(sVar24);
          cVar29 = '\x01';
          cVar30 = '\0';
          if (iVar13 == 0) {
            cVar28 = '\x01';
            cVar26 = '\0';
            uVar15 = DAT_00011fc0;
LAB_00011d66:
            printk(uVar15,sVar24);
          }
          else {
            uVar19 = (uint)*(byte *)(iVar13 + 0xa0);
            if (uVar19 == 1) {
              uVar16 = 0;
              cVar28 = '\x01';
              cVar29 = true;
              cVar30 = false;
LAB_00011f58:
              cVar26 = '\0';
              update_profile_connection(iVar13,uVar16,0);
            }
            else if (uVar19 == 0) {
              bVar22 = 0;
              puVar23 = *(uint **)(iVar3 + 8);
              puVar25 = (uint *)**(uint **)(iVar3 + 8);
              while( true ) {
                cVar29 = DAT_00011fb8 <= puVar23;
                cVar30 = SBORROW4((int)puVar23,DAT_00011fb8);
                cVar26 = (int)((int)puVar23 - DAT_00011fb8) < 0;
                cVar28 = puVar23 == (uint *)DAT_00011fb8;
                if ((bool)cVar28) break;
                if (sVar24 == *(short *)(puVar23 + 2)) {
                  param_2 = (uint)*(byte *)(puVar23 + 4);
                  uVar18 = (uint)*(ushort *)((int)puVar23 + 0xe);
                  printk(DAT_00011fbc,sVar24,*(undefined2 *)((int)puVar23 + 10),
                         *(undefined2 *)(puVar23 + 3));
                  bVar12 = disconn_profile(iVar13,*(undefined1 *)(puVar23 + 4));
                  bVar22 = bVar22 | bVar12;
                  if (((int)((uint)*(byte *)((int)puVar23 + 0x11) << 0x1e) < 0) &&
                     ((int)((uint)*(ushort *)(iVar13 + 0xa2) << 0x18) < 0)) {
                    bVar12 = disconn_profile(iVar13,7);
                    bVar22 = bVar22 | bVar12;
                  }
                  if (puVar23 != (uint *)0x0) {
                    delete_profile_from_hash_part_1(puVar23);
                  }
                }
                puVar23 = puVar25;
                puVar25 = (uint *)*puVar25;
              }
              if (bVar22 != 0) {
                rtk_notify_profileinfo_to_fw();
              }
            }
            else {
              cVar29 = 1 < uVar19;
              cVar30 = SBORROW4(uVar19,2);
              cVar26 = (int)(uVar19 - 2) < 0;
              cVar28 = '\0';
              if (uVar19 == 2) {
                uVar16 = 1;
                cVar28 = '\0';
                goto LAB_00011f58;
              }
            }
            cancel_delayed_work_sync(iVar13 + 0xc);
            cancel_delayed_work_sync(iVar13 + 0x38);
            cancel_delayed_work_sync(iVar13 + 100);
            list_del(iVar13);
            kfree();
          }
        }
      }
      else if (uVar19 < 6) {
        if (uVar19 == 1) {
          cVar26 = '\0';
          cVar28 = *(char *)(iVar3 + 0x85) == '\0';
          cVar29 = true;
          cVar30 = false;
          if (!(bool)cVar28) {
            cVar28 = true;
            cVar26 = false;
            *(undefined1 *)(iVar3 + 0x85) = 0;
            uVar14 = uVar4;
            goto LAB_00011cac;
          }
        }
        else {
          cVar29 = 2 < uVar19;
          cVar30 = SBORROW4(uVar19,3);
          cVar26 = (int)(uVar19 - 3) < 0;
          cVar28 = '\0';
          if (uVar19 == 3) goto LAB_00011bb0;
        }
      }
      else if (uVar19 == 0xe) {
        uVar19 = (uint)*(ushort *)((int)piVar21 + -0x21);
        if (uVar19 == 0x403) {
          cVar28 = *(char *)((int)piVar21 + -0x1f) == '\0';
          cVar29 = '\x01';
          cVar26 = '\0';
          cVar30 = '\0';
          if (!(bool)cVar28) {
            cVar28 = *(char *)(iVar3 + 0x85) == '\0';
            cVar29 = true;
            cVar26 = '\0';
            cVar30 = false;
            if (!(bool)cVar28) {
              cVar28 = true;
              cVar26 = false;
              *(undefined1 *)(iVar3 + 0x85) = 0;
              uVar14 = uVar7;
              goto LAB_00011cac;
            }
          }
        }
        else if (uVar19 == 0x1001) {
          cVar27 = '\0';
          cVar28 = *(char *)((int)piVar21 + -0x1f) == '\0';
          cVar29 = '\x01';
          cVar26 = '\0';
          cVar30 = '\0';
          if ((bool)cVar28) {
            *(undefined2 *)(iVar3 + 0x88) = *(undefined2 *)((int)piVar21 + -0x1d);
            *(ushort *)(iVar3 + 0x8a) =
                 (ushort)*(byte *)(piVar21 + -6) + (ushort)*(byte *)((int)piVar21 + -0x17) * 0x100;
            printk(uVar8);
            sVar24 = *(short *)(iVar3 + 0x8a);
            uVar15 = DAT_00011eac;
            cVar26 = cVar27;
            goto LAB_00011d66;
          }
        }
        else {
          cVar29 = 0xfc1a < uVar19;
          cVar30 = SBORROW4(uVar19,0xfc1b);
          cVar26 = (int)(uVar19 - 0xfc1b) < 0;
          cVar28 = '\0';
          if (uVar19 == 0xfc1b) {
            uVar19 = (uint)*(byte *)((int)piVar21 + -0x1f);
            cVar29 = uVar19 != 0;
            cVar30 = SBORROW4(uVar19,1);
            cVar26 = (int)(uVar19 - 1) < 0;
            cVar28 = uVar19 == 1;
            if (!(bool)cVar28) {
              cVar28 = '\0';
              cVar26 = '\0';
              *(undefined1 *)(iVar3 + 0x1cc) = 1;
            }
          }
        }
      }
      else if (uVar19 == 0xf) {
        cVar27 = *(char *)((int)piVar21 + -0x22);
        uVar19 = (uint)*(ushort *)(piVar21 + -8);
        if (uVar19 == 0x401) {
          cVar28 = cVar27 == '\0';
          cVar29 = '\x01';
          cVar26 = '\0';
          cVar30 = '\0';
          if (!(bool)cVar28) {
            cVar28 = *(char *)(iVar3 + 0x85) == '\0';
            cVar29 = true;
            cVar26 = '\0';
            cVar30 = false;
            if (!(bool)cVar28) {
              cVar28 = true;
              cVar26 = false;
              *(undefined1 *)(iVar3 + 0x85) = 0;
              uVar14 = uVar9;
              goto LAB_00011cac;
            }
          }
        }
        else {
          cVar29 = 0x404 < uVar19;
          cVar30 = SBORROW4(uVar19,0x405);
          cVar26 = (int)(uVar19 - 0x405) < 0;
          cVar28 = '\0';
          if (uVar19 == 0x405) {
            bVar2 = *(char *)(iVar3 + 0x86) == '\0';
            cVar28 = bVar2 && cVar27 == '\0';
            cVar26 = '\0';
            if (bVar2 && cVar27 == '\0') {
              cVar28 = false;
              cVar26 = false;
              *(undefined1 *)(iVar3 + 0x86) = 1;
              uVar14 = uVar10;
              goto LAB_00011cac;
            }
          }
        }
      }
      else {
        cVar29 = 5 < uVar19;
        cVar30 = SBORROW4(uVar19,6);
        cVar26 = (int)(uVar19 - 6) < 0;
        cVar28 = uVar19 == 6;
        if (((bool)cVar28) && (*(char *)(iVar3 + 0x84) != '\0')) {
          cVar28 = true;
          cVar26 = false;
          *(undefined1 *)(iVar3 + 0x84) = 0;
          uVar14 = uVar15;
          goto LAB_00011cac;
        }
      }
    }
    else if (uVar19 == 0x2c) {
LAB_00011bb0:
      cVar29 = *(char *)((int)piVar21 + -0x22);
      sVar24 = (ushort)*(byte *)((int)piVar21 + -0x21) + (ushort)*(byte *)(piVar21 + -8) * 0x100;
      bVar22 = *(byte *)((int)piVar21 + -0x19);
      printk(DAT_00011e84,sVar24,cVar29);
      uVar14 = DAT_00011ebc;
      uVar15 = DAT_00011e88;
      if (cVar29 == '\0') {
        if (*(char *)(iVar3 + 0x86) != '\0') {
          *(undefined1 *)(iVar3 + 0x86) = 0;
          printk(uVar15);
        }
        iVar13 = find_connection_by_handle_constprop_15(sVar24);
        cVar29 = '\x01';
        cVar30 = '\0';
        if (iVar13 == 0) {
          iVar13 = kmem_cache_alloc(*(undefined4 *)(DAT_00011e8c + 8),0xa20);
          cVar29 = true;
          cVar30 = false;
          if (iVar13 == 0) {
            cVar28 = true;
            cVar26 = false;
            uVar14 = DAT_00011fc8;
            goto LAB_00011cac;
          }
          *(short *)(iVar13 + 8) = sVar24;
          add_connection_to_hash_constprop_14();
          cVar26 = '\0';
          *(undefined2 *)(iVar13 + 0xa2) = 0;
          *(undefined4 *)(iVar13 + 0xa6) = 0;
          *(undefined4 *)(iVar13 + 0xaa) = 0;
          if ((bVar22 & 0xfd) == 0) {
            *(undefined1 *)(iVar13 + 0xa0) = 1;
            goto LAB_00011c2e;
          }
          *(undefined1 *)(iVar13 + 0xa0) = 0;
          cVar28 = '\0';
        }
        else {
          printk(DAT_00011eb8,sVar24);
          cVar28 = (bVar22 & 0xfd) == 0;
          cVar26 = '\0';
          *(undefined2 *)(iVar13 + 0xa2) = 0;
          *(undefined4 *)(iVar13 + 0xa6) = 0;
          *(undefined4 *)(iVar13 + 0xaa) = 0;
          if ((bool)cVar28) {
            *(undefined1 *)(iVar13 + 0xa0) = 1;
LAB_00011c2e:
            cVar28 = '\0';
            cVar26 = '\0';
            update_profile_connection(iVar13);
          }
          else {
            *(undefined1 *)(iVar13 + 0xa0) = 0;
          }
        }
      }
      else {
        cVar26 = '\0';
        cVar28 = *(char *)(iVar3 + 0x86) == '\0';
        cVar29 = '\x01';
        cVar30 = '\0';
        if (!(bool)cVar28) {
          cVar28 = true;
          cVar26 = false;
          *(undefined1 *)(iVar3 + 0x86) = 0;
          cVar29 = true;
          cVar30 = false;
LAB_00011cac:
          printk(uVar14);
        }
      }
    }
    else if (uVar19 < 0x2d) {
      if (uVar19 == 0x16) {
        cVar29 = true;
        cVar26 = '\0';
        cVar30 = false;
        cVar28 = '\0';
        if (*(char *)(iVar3 + 0x84) == '\0') {
          cVar28 = false;
          cVar26 = false;
          *(undefined1 *)(iVar3 + 0x84) = 1;
          uVar14 = uVar5;
          goto LAB_00011cac;
        }
      }
      else {
        cVar29 = 0x17 < uVar19;
        cVar30 = SBORROW4(uVar19,0x18);
        cVar26 = (int)(uVar19 - 0x18) < 0;
        cVar28 = '\0';
        if (uVar19 == 0x18) {
          cVar28 = *(char *)(iVar3 + 0x84) == '\0';
          cVar29 = true;
          cVar26 = '\0';
          cVar30 = false;
          if (!(bool)cVar28) {
            cVar28 = true;
            cVar26 = false;
            *(undefined1 *)(iVar3 + 0x84) = 0;
            uVar14 = uVar6;
            goto LAB_00011cac;
          }
        }
      }
    }
    else if (uVar19 == 0x3e) {
      uVar19 = (uint)*(byte *)((int)piVar21 + -0x22);
      if (uVar19 == 3) {
        uVar17 = *(undefined2 *)((int)piVar21 + -0x1e);
        bVar22 = *(byte *)(piVar21 + -8);
        bVar12 = *(byte *)((int)piVar21 + -0x1f);
        goto LAB_00011cea;
      }
      if (uVar19 == 10) {
        uVar15 = 1;
        cVar28 = '\0';
        cVar29 = true;
        cVar30 = false;
      }
      else {
        cVar29 = uVar19 != 0;
        cVar30 = SBORROW4(uVar19,1);
        cVar26 = (int)(uVar19 - 1) < 0;
        cVar28 = uVar19 == 1;
        if (!(bool)cVar28) goto LAB_00011c60;
        uVar15 = 0;
        cVar28 = '\x01';
      }
      cVar26 = '\0';
      rtk_handle_le_connection_complete_evt(uVar15,(int)piVar21 + -0x21);
    }
    else if (uVar19 == 0xff) {
      uVar19 = (uint)(short)((ushort)*(byte *)((int)piVar21 + -0x22) +
                            (ushort)*(byte *)((int)piVar21 + -0x21) * 0x100);
      cVar29 = 0x24 < uVar19;
      cVar30 = SBORROW4(uVar19,0x25);
      cVar26 = (int)(uVar19 - 0x25) < 0;
      cVar28 = uVar19 == 0x25;
      uVar14 = DAT_00011fc4;
      if ((bool)cVar28) goto LAB_00011cac;
    }
    else {
      cVar29 = 0x30 < uVar19;
      cVar30 = SBORROW4(uVar19,0x31);
      cVar26 = (int)(uVar19 - 0x31) < 0;
      cVar28 = '\0';
      if (uVar19 == 0x31) {
        cVar29 = true;
        cVar26 = '\0';
        cVar30 = false;
        cVar28 = '\0';
        if (*(char *)(iVar3 + 0x84) == '\0') {
          cVar28 = false;
          cVar26 = false;
          *(undefined1 *)(iVar3 + 0x84) = 1;
          goto LAB_00011cac;
        }
      }
    }
LAB_00011c60:
    bVar31 = cVar26 << 4 | cVar28 << 3 | cVar29 << 2 | cVar30 << 1 | bVar31;
    disableIRQinterrupts();
    puVar20 = *(undefined4 **)(param_1 + 0x80);
    *(int **)(param_1 + 0x80) = piVar21;
    *piVar21 = param_1 + 0x7c;
    piVar21[1] = (int)puVar20;
    *puVar20 = piVar21;
    in_cpsr = uVar32;
  } while( true );
}



/* ===== rtk_btcoex_parse_cmd @ 00011fcc size=106 ===== */

void rtk_btcoex_parse_cmd(byte *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_00012054;
  uVar1 = DAT_00012050;
  uVar3 = DAT_0001204c;
  if (-1 < *(int *)(DAT_00012040 + 0x1c8) << 0x1e) {
    printk(DAT_00012048,DAT_00012044);
    return;
  }
  switch((ushort)*param_1 + (ushort)param_1[1] * 0x100) {
  case 0x401:
  case 0x403:
    if (*(char *)(DAT_00012040 + 0x85) == '\0') {
      *(undefined1 *)(DAT_00012040 + 0x85) = 1;
LAB_0001200e:
      printk(uVar3);
      return;
    }
    break;
  case 0x402:
  case 0x404:
    if (*(char *)(DAT_00012040 + 0x85) != '\0') {
      *(undefined1 *)(DAT_00012040 + 0x85) = 0;
      uVar3 = uVar1;
      goto LAB_0001200e;
    }
    break;
  case 0x406:
    printk(DAT_00012058,*(undefined2 *)(param_1 + 3),param_1[5]);
    return;
  case 0x409:
    if (*(char *)(DAT_00012040 + 0x86) == '\0') {
      *(undefined1 *)(DAT_00012040 + 0x86) = 1;
      uVar3 = uVar2;
      goto LAB_0001200e;
    }
  }
  return;
}



/* ===== rtk_btcoex_parse_event @ 0001205c size=474 ===== */

void rtk_btcoex_parse_event(undefined1 *param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar9;
  undefined1 *__src;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  uint __n;
  uint __n_00;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte in_Q;
  uint in_cpsr;
  undefined4 *puVar8;
  
  iVar1 = DAT_00012238;
  if (-1 < *(int *)(DAT_00012238 + 0x1c8) << 0x1e) {
    printk(DAT_00012240,DAT_0001223c,*param_1,param_1[1]);
    return;
  }
  puVar5 = *(undefined4 **)(DAT_00012238 + 0xa4);
  iVar10 = DAT_00012238 + 0x98;
  iVar11 = DAT_00012238 + 0x90;
  iVar12 = DAT_00012238 + 0x1c;
  __src = param_1;
  do {
    while( true ) {
      if (param_2 == 0) {
        *(undefined4 **)(iVar1 + 0xa4) = puVar5;
        return;
      }
      if (puVar5 == (undefined4 *)0x0) {
        *(undefined4 *)(iVar1 + 0xa4) = 0;
        *(undefined2 *)(iVar1 + 0xa8) = 0;
        *(undefined1 *)(iVar1 + 0xa0) = 4;
        *(undefined2 *)(iVar1 + 0xa2) = 2;
        puVar5 = DAT_00012244;
      }
      __n_00 = (uint)*(ushort *)(iVar1 + 0xa2);
      if (param_2 <= *(ushort *)(iVar1 + 0xa2)) {
        __n_00 = param_2;
      }
      param_2 = param_2 - __n_00;
      pvVar2 = memcpy(puVar5,__src,__n_00);
      uVar13 = *(short *)(iVar1 + 0xa8) + (short)__n_00;
      *(short *)(iVar1 + 0xa2) = *(short *)(iVar1 + 0xa2) - (short)__n_00;
      __n = (uint)uVar13;
      *(ushort *)(iVar1 + 0xa8) = uVar13;
      if (__n == 2) {
        *(ushort *)(iVar1 + 0xa2) = (ushort)*(byte *)(iVar1 + 0xab);
      }
      if (*(short *)(iVar1 + 0xa2) == 0) break;
      puVar5 = (undefined4 *)((int)pvVar2 + __n_00);
      __src = __src + __n_00;
    }
    uVar6 = (uint)*(byte *)(iVar1 + 0xaa);
    bVar16 = 0x13 < uVar6;
    bVar17 = SBORROW4(uVar6,0x14);
    bVar14 = (int)(uVar6 - 0x14) < 0;
    uVar4 = 0;
    bVar15 = true;
    if (uVar6 == 0x14) {
LAB_00012164:
      if (*(int *)(iVar1 + 0x1c4) != 0) {
        disableIRQinterrupts();
        if (*(int *)(iVar1 + 0x98) == iVar10) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)(*(int *)(iVar1 + 0x98) + -0x24);
          list_del(*(int *)(iVar1 + 0x98),
                   (uint)(byte)(bVar14 << 4 | bVar15 << 3 | bVar16 << 2 | bVar17 << 1 | in_Q) <<
                   0x1b,uVar4,*(int *)(iVar1 + 0x98),param_1);
        }
        uVar4 = in_cpsr & 0xffffff00;
        in_Q = (in_cpsr >> 0x1b & 1) != 0;
        in_cpsr = uVar4;
        if (puVar5 != (undefined4 *)0x0) {
          if (__n < 0x21) {
            memcpy(puVar5,DAT_00012244,__n);
            *(ushort *)(puVar5 + 8) = uVar13;
          }
          else {
            puVar3 = DAT_00012244 + 8;
            puVar9 = puVar5;
            puVar7 = DAT_00012244;
            do {
              puVar8 = puVar7 + 1;
              *puVar9 = *puVar7;
              puVar9 = puVar9 + 1;
              puVar7 = puVar8;
            } while (puVar8 != puVar3);
            *(undefined2 *)(puVar5 + 8) = 0x20;
          }
          disableIRQinterrupts();
          puVar9 = *(undefined4 **)(iVar1 + 0x94);
          *(undefined4 **)(iVar1 + 0x94) = puVar5 + 9;
          puVar5[9] = iVar11;
          puVar5[10] = puVar9;
          *puVar9 = puVar5 + 9;
          in_cpsr = uVar4 & 0xffffff00;
          in_Q = (uVar4 >> 0x1b & 1) != 0;
          queue_delayed_work(*(undefined4 *)(iVar1 + 0x14),iVar12,0);
          goto LAB_00012128;
        }
      }
      printk(DAT_0001224c,DAT_00012248);
    }
    else {
      if (uVar6 < 0x15) {
        if (uVar6 < 7) {
          bVar16 = 4 < uVar6;
          bVar17 = SBORROW4(uVar6,5);
          bVar14 = (int)(uVar6 - 5) < 0;
          bVar15 = uVar6 == 5;
          if (!bVar16) {
            bVar16 = uVar6 != 0;
            bVar17 = SBORROW4(uVar6,1);
            bVar14 = (int)(uVar6 - 1) < 0;
            bVar15 = uVar6 == 1;
            if (!bVar15) {
              bVar16 = 2 < uVar6;
              bVar17 = SBORROW4(uVar6,3);
              bVar14 = (int)(uVar6 - 3) < 0;
              bVar15 = uVar6 == 3;
              goto LAB_0001211c;
            }
          }
        }
        else if (uVar6 == 0xe) {
          uVar6 = (uint)*(ushort *)(iVar1 + 0xad);
          uVar4 = 0x1001;
          bVar16 = 0x1000 < uVar6;
          bVar17 = SBORROW4(uVar6,0x1001);
          bVar14 = (int)(uVar6 - 0x1001) < 0;
          bVar15 = uVar6 == 0x1001;
          if (!bVar15) {
            uVar4 = 0xfc1b;
            bVar16 = 0xfc1a < uVar6;
            bVar17 = SBORROW4(uVar6,0xfc1b);
            bVar14 = (int)(uVar6 - 0xfc1b) < 0;
            bVar15 = uVar6 == 0xfc1b;
            if (!bVar15) {
              uVar4 = 0x403;
              goto LAB_00012194;
            }
          }
        }
        else {
          if (uVar6 != 0xf) goto LAB_00012128;
          uVar4 = 0x401;
          uVar6 = (uint)*(short *)(iVar1 + 0xae);
          bVar16 = 0x400 < uVar6;
          bVar17 = SBORROW4(uVar6,0x401);
          bVar14 = (int)(uVar6 - 0x401) < 0;
          bVar15 = uVar6 == 0x401;
          if (!bVar15) {
            uVar4 = 0x405;
LAB_00012194:
            bVar16 = uVar4 <= uVar6;
            bVar17 = SBORROW4(uVar6,uVar4);
            bVar14 = (int)(uVar6 - uVar4) < 0;
            bVar15 = uVar6 == uVar4;
            goto LAB_0001211c;
          }
        }
        goto LAB_00012164;
      }
      bVar16 = 0x2b < uVar6;
      bVar17 = SBORROW4(uVar6,0x2c);
      bVar14 = (int)(uVar6 - 0x2c) < 0;
      bVar15 = true;
      if (uVar6 == 0x2c) goto LAB_00012164;
      if (uVar6 < 0x2d) {
        bVar16 = 0x15 < uVar6;
        bVar17 = SBORROW4(uVar6,0x16);
        bVar14 = (int)(uVar6 - 0x16) < 0;
        bVar15 = uVar6 == 0x16;
        if (!bVar15) {
          bVar16 = 0x17 < uVar6;
          bVar17 = SBORROW4(uVar6,0x18);
          bVar14 = (int)(uVar6 - 0x18) < 0;
          bVar15 = uVar6 == 0x18;
LAB_0001211c:
          if (bVar15 == false) goto LAB_00012128;
        }
        goto LAB_00012164;
      }
      if (uVar6 != 0x3e) {
        bVar16 = 0xfe < uVar6;
        bVar17 = SBORROW4(uVar6,0xff);
        bVar14 = (int)(uVar6 - 0xff) < 0;
        bVar15 = uVar6 == 0xff;
        if (!bVar15) {
          bVar16 = 0x30 < uVar6;
          bVar17 = SBORROW4(uVar6,0x31);
          bVar14 = (int)(uVar6 - 0x31) < 0;
          bVar15 = uVar6 == 0x31;
          goto LAB_0001211c;
        }
        goto LAB_00012164;
      }
      uVar6 = *(byte *)(iVar1 + 0xac) - 1 & 0xff;
      bVar16 = 8 < uVar6;
      bVar17 = SBORROW4(uVar6,9);
      if (uVar6 < 10) {
        uVar4 = 0x205;
        bVar15 = (1 << uVar6 & 0x205U) == 0;
        bVar14 = false;
        if (!bVar15) goto LAB_00012164;
      }
    }
LAB_00012128:
    puVar5 = (undefined4 *)0x0;
    *(undefined2 *)(iVar1 + 0xa8) = 0;
    __src = __src + __n_00;
  } while( true );
}



/* ===== rtk_btcoex_parse_l2cap_data_tx @ 00012250 size=26 ===== */

void rtk_btcoex_parse_l2cap_data_tx(undefined4 param_1,undefined2 param_2)

{
  if (-1 < *(int *)(DAT_0001226c + 0x1c8) << 0x1e) {
    printk(DAT_00012274,DAT_00012270);
    return;
  }
  rtl_l2_data_process(param_1,param_2,1);
  return;
}



/* ===== rtk_btcoex_parse_l2cap_data_rx @ 00012278 size=26 ===== */

void rtk_btcoex_parse_l2cap_data_rx(undefined4 param_1,undefined2 param_2)

{
  if (-1 < *(int *)(DAT_00012294 + 0x1c8) << 0x1e) {
    printk(DAT_0001229c,DAT_00012298);
    return;
  }
  rtl_l2_data_process(param_1,param_2,0);
  return;
}



/* ===== rtk_btcoex_open @ 000122a0 size=170 ===== */

void rtk_btcoex_open(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  undefined1 local_19 [5];
  
  iVar2 = DAT_0001234c;
  iVar1 = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  disableIRQinterrupts();
  uVar6 = *(uint *)(DAT_0001234c + 0x1c8);
  uVar5 = uVar6 | 2;
  *(uint *)(DAT_0001234c + 0x1c8) = uVar5;
  if ((uVar6 & 2) == 0) {
    printk(DAT_00012354,param_2,uVar5,iVar1);
    *(int *)(iVar2 + 0x20) = iVar2 + 0x20;
    *(int *)(iVar2 + 0x24) = iVar2 + 0x20;
    uVar4 = DAT_0001235c;
    uVar3 = DAT_00012358;
    *(undefined4 *)(iVar2 + 0x1c) = 0xffffffe0;
    *(undefined4 *)(iVar2 + 0x28) = uVar3;
    init_timer_key(iVar2 + 0x2c,uVar4,0x200000,0,0);
    *(int *)(iVar2 + 0x4c) = iVar2 + 0x4c;
    *(int *)(iVar2 + 0x50) = iVar2 + 0x4c;
    uVar4 = DAT_00012360;
    uVar3 = DAT_0001235c;
    *(undefined4 *)(iVar2 + 0x48) = 0xffffffe0;
    *(undefined4 *)(iVar2 + 0x54) = uVar4;
    init_timer_key(iVar2 + 0x58,uVar3,0x200000,0,0);
    *(undefined4 *)(iVar2 + 0x10) = param_1;
    *(int *)(iVar2 + 8) = iVar2 + 8;
    *(int *)(iVar2 + 0xc) = iVar2 + 8;
    *(int *)iVar2 = iVar2;
    *(int *)(iVar2 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0xa0) = 0;
    *(undefined2 *)(iVar2 + 0xa2) = 0;
    *(undefined2 *)(iVar2 + 0xa8) = 0;
    *(undefined4 *)(iVar2 + 0xa4) = 0;
    local_19[0] = 0;
    rtk_vendor_cmd_to_fw(0xfc1b,1,local_19);
  }
  else {
    printk(DAT_00012350,param_2,uVar5,iVar1);
  }
  return;
}



/* ===== rtk_btcoex_close @ 00012364 size=194 ===== */

void rtk_btcoex_close(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  byte bVar11;
  uint in_cpsr;
  
  puVar1 = DAT_00012428;
  iVar4 = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  disableIRQinterrupts();
  uVar5 = DAT_00012428[0x72];
  uVar3 = uVar5 & 0xfffffffd;
  DAT_00012428[0x72] = uVar3;
  bVar11 = (in_cpsr >> 0x1b & 1) != 0;
  iVar6 = uVar5 << 0x1e;
  uVar2 = DAT_0001242c;
  if (iVar6 < 0) {
    printk(DAT_00012430,uVar3,iVar4,iVar6,param_1,param_2);
    cancel_delayed_work_sync(puVar1 + 7);
    cancel_delayed_work_sync(puVar1 + 0x12);
    uVar3 = extraout_r1;
    puVar7 = (undefined4 *)*puVar1;
    puVar9 = *(undefined4 **)*puVar1;
    while (uVar2 = DAT_0001243c, uVar5 = DAT_00012434, puVar7 != puVar1) {
      if (puVar7 != (undefined4 *)0x0) {
        cancel_delayed_work_sync(puVar7 + 3);
        cancel_delayed_work_sync(puVar7 + 0xe);
        cancel_delayed_work_sync(puVar7 + 0x19);
        list_del(puVar7);
        kfree();
        uVar3 = extraout_r1_00;
      }
      puVar7 = puVar9;
      puVar9 = (undefined4 *)*puVar9;
    }
    puVar8 = (uint *)puVar1[2];
    puVar10 = *(uint **)puVar1[2];
    while( true ) {
      if (puVar8 == (uint *)uVar5) break;
      if (puVar8 != (uint *)0x0) {
        printk(uVar2,*(undefined2 *)(puVar8 + 2),*(undefined2 *)((int)puVar8 + 10),
               *(undefined2 *)(puVar8 + 3),*(undefined2 *)((int)puVar8 + 0xe));
        list_del(puVar8);
        kfree();
        uVar3 = extraout_r1_01;
      }
      puVar8 = puVar10;
      puVar10 = (uint *)*puVar10;
    }
    puVar1[0x1e] = 0;
    iVar4 = (uint)(byte)((uVar5 <= puVar8) << 2 | 8U | SBORROW4((int)puVar8,uVar5) << 1 | bVar11) <<
            0x1b;
    disableIRQinterrupts();
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    puVar1[0x29] = 0;
    uVar2 = DAT_00012438;
    *(undefined1 *)(puVar1 + 0x73) = 0;
  }
  printk(uVar2,uVar3,iVar4);
  return;
}



/* ===== rtk_btcoex_probe @ 00012440 size=6 ===== */

void rtk_btcoex_probe(undefined4 param_1)

{
  *(undefined4 *)(DAT_00012448 + 0x10) = param_1;
  return;
}



/* ===== init_module @ 0001244c size=48 ===== */

int init_module(void)

{
  int iVar1;
  
  bt_info(DAT_00012480,DAT_0001247c);
  iVar1 = tty_register_ldisc(0xf,DAT_00012484);
  if (iVar1 == 0) {
    h4_init();
    h5_init();
    rtk_btcoex_init();
  }
  else {
    bt_err(DAT_00012488,iVar1);
  }
  return iVar1;
}



/* ===== h4_init @ 0001248c size=30 ===== */

int h4_init(void)

{
  int iVar1;
  
  iVar1 = hci_uart_register_proto(DAT_000124ac);
  if (iVar1 == 0) {
    bt_info(DAT_000124b0);
  }
  else {
    bt_err(DAT_000124b4);
  }
  return iVar1;
}



/* ===== cleanup_module @ 000124b8 size=34 ===== */

void cleanup_module(void)

{
  int iVar1;
  
  h4_deinit();
  h5_deinit();
  iVar1 = tty_unregister_ldisc(0xf);
  if (iVar1 != 0) {
    bt_err(DAT_000124dc,iVar1);
  }
  rtk_btcoex_exit();
  return;
}



/* ===== h4_deinit @ 000124e0 size=6 ===== */

void h4_deinit(void)

{
  hci_uart_unregister_proto(DAT_000124e8);
  return;
}



/* ===== rtk_check_del_timer @ 000124ec size=94 ===== */

void rtk_check_del_timer(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  printk(DAT_0001254c,DAT_00012550,*(undefined2 *)(param_2 + 8));
  if (param_1 == 2) {
    iVar1 = param_2 + 0xc;
    *(undefined4 *)(param_2 + 0x90) = 0;
  }
  else if (param_1 == 3) {
    iVar1 = param_2 + 0x38;
    *(undefined4 *)(param_2 + 0x94) = 0;
  }
  else {
    if (param_1 == 5) {
      *(undefined4 *)(param_2 + 0x98) = 0;
      cVar2 = *(char *)(param_2 + 0xac);
    }
    else {
      if (param_1 != 6) {
        return;
      }
      *(undefined4 *)(param_2 + 0x9c) = 0;
      cVar2 = *(char *)(param_2 + 0xab);
    }
    if (cVar2 != '\0') {
      return;
    }
    iVar1 = param_2 + 100;
  }
  cancel_delayed_work_sync(iVar1);
  return;
}



/* ===== disconn_profile @ 00012554 size=108 ===== */

undefined4 disconn_profile(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = param_1 + param_2;
  if (*(char *)(iVar2 + 0xa6) == 0) {
    printk(DAT_000125c0);
  }
  else {
    printk(DAT_000125c8,DAT_000125c4,param_2,(int)*(char *)(iVar2 + 0xa6),param_4);
    if (*(char *)(iVar2 + 0xa6) == '\0') {
      printk(DAT_000125cc,DAT_000125c4);
    }
    else {
      *(char *)(iVar2 + 0xa6) = *(char *)(iVar2 + 0xa6) + -1;
    }
    if (*(char *)(iVar2 + 0xa6) == '\0') {
      uVar1 = ~(ushort)(1 << (param_2 & 0xff));
      *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) & uVar1;
      *(ushort *)(param_1 + 0xa4) = uVar1 & *(ushort *)(param_1 + 0xa4);
      rtk_check_del_timer(param_2,param_1);
      return 1;
    }
  }
  return 0;
}



/* ===== get_order @ 000125d0 size=16 ===== */

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



/* ===== delete_profile_from_hash.part.1 @ 000125e0 size=36 ===== */

void delete_profile_from_hash_part_1(int param_1,undefined4 param_2)

{
  printk(DAT_00012604,*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 10),
         *(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0xe),param_2);
  list_del(param_1);
  kfree();
  return;
}



/* ===== add_connection_to_hash.constprop.14 @ 00012608 size=126 ===== */

void add_connection_to_hash_constprop_14(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_00012688;
  puVar3 = *(undefined4 **)(DAT_00012688 + 4);
  *(int **)(DAT_00012688 + 4) = param_1;
  uVar2 = DAT_0001268c;
  *param_1 = iVar1;
  param_1[1] = (int)puVar3;
  *puVar3 = param_1;
  param_1[4] = (int)(param_1 + 4);
  param_1[5] = (int)(param_1 + 4);
  iVar1 = DAT_00012690;
  param_1[3] = -0x20;
  param_1[6] = iVar1;
  init_timer_key(param_1 + 7,uVar2,0x200000,0,0,param_2,param_3);
  param_1[0xf] = (int)(param_1 + 0xf);
  param_1[0x10] = (int)(param_1 + 0xf);
  iVar1 = DAT_00012694;
  param_1[0xe] = -0x20;
  param_1[0x11] = iVar1;
  init_timer_key(param_1 + 0x12,uVar2,0x200000,0,0);
  param_1[0x1a] = (int)(param_1 + 0x1a);
  param_1[0x1b] = (int)(param_1 + 0x1a);
  iVar1 = DAT_00012698;
  param_1[0x19] = -0x20;
  param_1[0x1c] = iVar1;
  init_timer_key(param_1 + 0x1d,uVar2,0x200000,0,0);
  return;
}



/* ===== list_allocate_add @ 0001269c size=146 ===== */

undefined4
list_allocate_add(ushort param_1,int param_2,undefined1 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  puVar3 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00012730 + 0x14),0xa20);
  iVar1 = DAT_00012744;
  uVar4 = DAT_0001273c;
  uVar5 = DAT_00012738;
  if (puVar3 == (undefined4 *)0x0) {
    printk(DAT_00012734);
    uVar5 = 0;
  }
  else {
    puVar9 = (undefined4 *)(DAT_00012744 + 8);
    if (param_2 == 0x19) {
      puVar2 = (undefined4 *)**(undefined4 **)(DAT_00012744 + 8);
      puVar7 = *(undefined4 **)(DAT_00012744 + 8);
      while (puVar6 = puVar2, puVar7 != puVar9) {
        if ((((*(ushort *)(puVar7 + 2) ^ param_1) & 0xfff) == 0) &&
           (*(short *)((int)puVar7 + 10) == 0x19)) {
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined1 *)((int)puVar3 + 0x11) = 2;
            uVar4 = DAT_00012740;
            goto LAB_000126e2;
          }
          break;
        }
        puVar2 = (undefined4 *)*puVar6;
        puVar7 = puVar6;
      }
      *(undefined1 *)((int)puVar3 + 0x11) = 1;
LAB_000126e2:
      printk(uVar4,uVar5);
    }
    uVar5 = 1;
    *(ushort *)(puVar3 + 2) = param_1;
    *(short *)((int)puVar3 + 10) = (short)param_2;
    *(undefined2 *)((int)puVar3 + 0xe) = param_5;
    piVar8 = *(int **)(iVar1 + 0xc);
    *(undefined2 *)(puVar3 + 3) = param_4;
    *(undefined1 *)(puVar3 + 4) = param_3;
    *(undefined4 **)(iVar1 + 0xc) = puVar3;
    *puVar3 = puVar9;
    puVar3[1] = piVar8;
    *piVar8 = (int)puVar3;
  }
  return uVar5;
}



/* ===== rtk_vendor_cmd_to_fw @ 00012748 size=176 ===== */

void rtk_vendor_cmd_to_fw(undefined4 param_1,size_t param_2,void *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  void *__dest;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000127f8 + 0x10);
  uVar1 = DAT_000127fc;
  if ((iVar4 != 0) && (uVar1 = DAT_00012800, *(int *)(iVar4 + 0x1c) << 0x1f < 0)) {
    iVar2 = __alloc_skb(param_2 + 0xb,0xa20,0,0xffffffff);
    if (iVar2 == 0) {
      printk(DAT_0001280c,param_1);
      return;
    }
    *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 8;
    *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 8;
    puVar3 = (undefined1 *)skb_put(iVar2,3);
    *puVar3 = (char)param_1;
    puVar3[1] = 0xfc;
    puVar3[2] = (char)param_2;
    if (param_2 != 0) {
      __dest = (void *)skb_put(iVar2,param_2);
      memcpy(__dest,param_3,param_2);
    }
    *(undefined1 *)(iVar2 + 0x18) = 1;
    *(short *)(iVar2 + 0x20) = (short)param_1;
    *(byte *)(iVar2 + 0x22) = *(byte *)(iVar2 + 0x22) | 1;
    printk(DAT_00012808,DAT_00012804,param_1);
    skb_queue_tail(iVar4 + 0x814,iVar2);
    queue_work_on(1,*(undefined4 *)(iVar4 + 0x648),iVar4 + 0x734);
    return;
  }
  printk(uVar1);
  return;
}



/* ===== rtk_notify_profileinfo_to_fw @ 00012810 size=300 ===== */

void rtk_notify_profileinfo_to_fw(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ushort uVar13;
  short sVar14;
  uint uVar15;
  
  puVar3 = DAT_0001293c;
  uVar13 = 0;
  puVar10 = *(undefined4 **)*DAT_0001293c;
  puVar9 = (undefined4 *)*DAT_0001293c;
  while (puVar8 = puVar10, puVar9 != DAT_0001293c) {
    if ((puVar9 != (undefined4 *)0x0) && (*(short *)((int)puVar9 + 0xa2) != 0)) {
      uVar13 = uVar13 + 1 & 0xff;
    }
    puVar10 = (undefined4 *)*puVar8;
    puVar9 = puVar8;
  }
  if (*(char *)(DAT_0001293c + 0x73) == '\0') {
    sVar14 = 3;
    iVar7 = 2;
  }
  else {
    sVar14 = 6;
    iVar7 = 1;
  }
  uVar15 = (int)sVar14 * (int)(short)uVar13 + iVar7;
  puVar5 = (undefined1 *)__kmalloc(uVar15,0xa20);
  uVar6 = DAT_00012940;
  if (puVar5 == (undefined1 *)0x0) {
    printk(DAT_00012944,DAT_00012940);
    return;
  }
  *puVar5 = (char)uVar13;
  printk(DAT_00012948,uVar6,uVar15);
  printk(DAT_0001294c,DAT_00012940,uVar13);
  uVar6 = DAT_00012940;
  puVar11 = puVar5 + 1;
  for (puVar10 = (undefined4 *)*puVar3; puVar12 = puVar11, puVar10 != puVar3;
      puVar10 = (undefined4 *)*puVar10) {
    if ((puVar10 != (undefined4 *)0x0) && (*(short *)((int)puVar10 + 0xa2) != 0)) {
      cVar1 = *(char *)(puVar3 + 0x73);
      *puVar11 = *(undefined1 *)(puVar10 + 2);
      puVar11[1] = (char)((ushort)*(undefined2 *)(puVar10 + 2) >> 8);
      uVar4 = DAT_00012958;
      if (cVar1 == '\0') {
        puVar12 = puVar11 + 3;
        printk(DAT_00012950,uVar6,*(undefined2 *)(puVar10 + 2));
        puVar11[2] = (char)*(undefined2 *)((int)puVar10 + 0xa2);
        *(ushort *)((int)puVar3 + 0x7a) =
             *(ushort *)((int)puVar3 + 0x7a) | *(ushort *)(puVar10 + 0x29);
      }
      else {
        puVar12 = puVar11 + 6;
        puVar11[2] = (char)*(undefined2 *)((int)puVar10 + 0xa2);
        puVar11[3] = (char)((ushort)*(undefined2 *)((int)puVar10 + 0xa2) >> 8);
        puVar11[4] = (char)*(undefined2 *)(puVar10 + 0x29);
        puVar11[5] = (char)((ushort)*(undefined2 *)(puVar10 + 0x29) >> 8);
        printk(uVar4,uVar6,*(undefined2 *)(puVar10 + 0x29));
      }
      printk(DAT_00012954,uVar6,*(undefined2 *)((int)puVar10 + 0xa2));
      uVar13 = uVar13 - 1 & 0xff;
    }
    if (uVar13 == 0) break;
    puVar11 = puVar12;
  }
  if (*(char *)(puVar3 + 0x73) == '\0') {
    uVar2 = *(undefined2 *)((int)puVar3 + 0x7a);
    uVar6 = 0xfc19;
    *(undefined2 *)((int)puVar3 + 0x7a) = 0;
    *puVar12 = (char)uVar2;
  }
  else {
    uVar6 = 0xfc1b;
  }
  rtk_vendor_cmd_to_fw(uVar6,uVar15 & 0xff,puVar5);
  kfree(puVar5);
  return;
}



/* ===== update_profile_connection @ 0001295c size=270 ===== */

void update_profile_connection(int param_1,uint param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + param_2;
  printk(DAT_00012a70,DAT_00012a6c,param_3,param_2);
  if (param_3 == 0) {
    if (*(char *)(iVar4 + 0xa6) == '\0') {
      printk(DAT_00012a78,param_2);
      return;
    }
    cVar1 = *(char *)(iVar4 + 0xa6) + -1;
    *(char *)(iVar4 + 0xa6) = cVar1;
    if (cVar1 == '\0') {
      param_3 = 1;
      uVar2 = ~(ushort)(1 << (param_2 & 0xff));
      *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) & uVar2;
      *(ushort *)(param_1 + 0xa4) = uVar2 & *(ushort *)(param_1 + 0xa4);
      rtk_check_del_timer(param_2,param_1);
      if (param_2 == 1) {
        param_3 = 1;
        if ((int)((uint)*(ushort *)(param_1 + 0xa2) << 0x1b) < 0) {
          *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) & 0xffef;
        }
      }
    }
    goto LAB_00012a54;
  }
  if (*(char *)(iVar4 + 0xa6) == '\0') {
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | (ushort)(1 << (param_2 & 0xff));
    if (param_2 == 0) {
      *(ushort *)(param_1 + 0xa4) = *(ushort *)(param_1 + 0xa4) | 1;
    }
    else {
      if (param_2 == 2) {
        iVar3 = param_1 + 0xc;
        *(undefined4 *)(param_1 + 0x90) = 0;
      }
      else if (param_2 == 3) {
        *(undefined4 *)(param_1 + 0x94) = 0;
        iVar3 = param_1 + 0x38;
      }
      else {
        if (((1 < (param_2 - 5 & 0xff)) || (*(char *)(param_1 + 0xab) != '\0')) ||
           (*(char *)(param_1 + 0xac) != '\0')) goto LAB_00012998;
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0x9c) = 0;
        iVar3 = param_1 + 100;
      }
      queue_delayed_work(*(undefined4 *)(DAT_00012a74 + 0x18),iVar3,300);
    }
  }
  else {
    param_3 = 0;
  }
LAB_00012998:
  *(char *)(iVar4 + 0xa6) = *(char *)(iVar4 + 0xa6) + '\x01';
LAB_00012a54:
  printk(DAT_00012a7c,DAT_00012a6c,*(undefined2 *)(param_1 + 0xa2));
  if (param_3 == 0) {
    return;
  }
  rtk_notify_profileinfo_to_fw();
  return;
}



/* ===== update_profile_state @ 00012a80 size=104 ===== */

void update_profile_state(int param_1,uint param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  printk(DAT_00012ae8,DAT_00012aec,param_3,param_2);
  if (-1 < (int)((uint)(*(ushort *)(param_1 + 0xa2) >> (param_2 & 0xff)) << 0x1f)) {
    printk(DAT_00012af0,DAT_00012aec,param_2);
    return;
  }
  uVar2 = *(ushort *)(param_1 + 0xa4);
  uVar1 = uVar2 >> (param_2 & 0xff);
  if (param_3 == 0) {
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar2 = uVar2 & ~(ushort)(1 << (param_2 & 0xff));
  }
  else {
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar2 = uVar2 | (ushort)(1 << (param_2 & 0xff));
  }
  *(ushort *)(param_1 + 0xa4) = uVar2;
  printk(DAT_00012af4,DAT_00012aec,*(undefined2 *)(param_1 + 0xa4));
  rtk_notify_profileinfo_to_fw();
  return;
}



/* ===== rtk_handle_le_connection_complete_evt @ 00012af8 size=206 ===== */

void rtk_handle_le_connection_complete_evt
               (int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  undefined4 extraout_r2;
  undefined4 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  if (param_1 == 0) {
    cVar1 = param_2[0xb];
    pcVar9 = param_2 + 0xb;
  }
  else {
    pcVar9 = param_2 + 0x17;
    cVar1 = param_2[0x17];
  }
  cVar2 = pcVar9[1];
  uVar4 = *(undefined2 *)(param_2 + 1);
  cVar3 = *param_2;
  printk(DAT_00012bc8,uVar4,cVar3,CONCAT11(cVar2,cVar1));
  uVar6 = DAT_00012bdc;
  uVar7 = DAT_00012bd0;
  if (cVar3 != '\0') {
    if (*(char *)(DAT_00012bcc + 0x86) == '\0') {
      return;
    }
    uVar8 = 0;
    *(undefined1 *)(DAT_00012bcc + 0x86) = 0;
    uVar7 = extraout_r1;
LAB_00012bb8:
    printk(uVar6,uVar7,uVar8,param_4);
    return;
  }
  if (*(char *)(DAT_00012bcc + 0x86) != '\0') {
    *(undefined1 *)(DAT_00012bcc + 0x86) = 0;
    printk(uVar7);
  }
  iVar5 = find_connection_by_handle_constprop_15(uVar4);
  if (iVar5 == 0) {
    uVar10 = kmem_cache_alloc(*(undefined4 *)(DAT_00012bd4 + 8),0xa20);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    iVar5 = (int)uVar10;
    uVar6 = DAT_00012be0;
    uVar8 = extraout_r2;
    if (iVar5 == 0) goto LAB_00012bb8;
    *(undefined2 *)(iVar5 + 8) = uVar4;
    add_connection_to_hash_constprop_14();
    *(undefined2 *)(iVar5 + 0xa2) = 0;
    *(undefined4 *)(iVar5 + 0xa6) = 0;
    *(undefined4 *)(iVar5 + 0xaa) = 0;
    *(undefined1 *)(iVar5 + 0xa0) = 2;
  }
  else {
    printk(DAT_00012bd8,uVar4);
    *(undefined2 *)(iVar5 + 0xa2) = 0;
    *(undefined4 *)(iVar5 + 0xa6) = 0;
    *(undefined4 *)(iVar5 + 0xaa) = 0;
    *(undefined1 *)(iVar5 + 0xa0) = 2;
  }
  update_profile_connection(iVar5,1);
  update_hid_active_state(uVar4,CONCAT11(cVar2,cVar1));
  return;
}



/* ===== rtk_btcoex_init @ 00012be4 size=218 ===== */

void rtk_btcoex_init(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *__s;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  
  printk(DAT_00012cc8,DAT_00012cc4,DAT_00012cc0);
  printk(DAT_00012ccc);
  uVar3 = alloc_workqueue(DAT_00012cd8,DAT_00012cd4,1,DAT_00012cd0);
  uVar2 = DAT_00012ce0;
  iVar1 = DAT_00012cdc;
  uVar4 = DAT_00012cd4;
  iVar9 = DAT_00012cdc + 0x98;
  iVar7 = DAT_00012cdc + 0x1b8;
  *(undefined4 *)(DAT_00012cdc + 0x14) = uVar3;
  uVar4 = alloc_workqueue(DAT_00012cd8,uVar4,1,uVar2);
  *(int *)(iVar1 + 0x9c) = iVar9;
  *(int *)(iVar1 + 0x90) = iVar1 + 0x90;
  *(int *)(iVar1 + 0x94) = iVar1 + 0x90;
  *(int *)(iVar1 + 0x98) = iVar9;
  *(int *)(iVar1 + 0x1b0) = iVar1 + 0x1b0;
  *(int *)(iVar1 + 0x1b4) = iVar1 + 0x1b0;
  *(int *)(iVar1 + 0x1b8) = iVar7;
  *(int *)(iVar1 + 0x1bc) = iVar7;
  *(undefined4 *)(iVar1 + 0x18) = uVar4;
  printk(DAT_00012ce4,0x580,0x8c0);
  __s = (void *)__get_free_pages(0xcc0,0);
  if (__s == (void *)0x0) {
    printk(DAT_00012ce8);
    return;
  }
  memset(__s,0,0xe40);
  *(void **)(iVar1 + 0x1c0) = __s;
  *(undefined4 *)(iVar1 + 0x1c4) = 0xe40;
  pvVar8 = __s;
  do {
    piVar6 = *(int **)(iVar1 + 0x9c);
    iVar5 = (int)pvVar8 + 0x24;
    *(int *)(iVar1 + 0x9c) = iVar5;
    *(int *)((int)pvVar8 + 0x24) = iVar9;
    *(int **)((int)pvVar8 + 0x28) = piVar6;
    pvVar8 = (void *)((int)pvVar8 + 0x2c);
    *piVar6 = iVar5;
  } while ((void *)((int)__s + 0x580) != pvVar8);
  do {
    piVar6 = *(int **)(iVar1 + 0x1bc);
    iVar9 = (int)pvVar8 + 0x84;
    *(int *)(iVar1 + 0x1bc) = iVar9;
    *(int *)((int)pvVar8 + 0x84) = iVar7;
    *(int **)((int)pvVar8 + 0x88) = piVar6;
    pvVar8 = (void *)((int)pvVar8 + 0x8c);
    *piVar6 = iVar9;
  } while (pvVar8 != (void *)((int)__s + 0xe40));
  return;
}



/* ===== rtk_btcoex_exit @ 00012cec size=158 ===== */

void rtk_btcoex_exit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  undefined4 extraout_r3;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  iVar1 = DAT_00012d8c;
  printk(DAT_00012d94,DAT_00012d90,param_3,param_4,param_4);
  flush_workqueue(*(undefined4 *)(iVar1 + 0x14));
  destroy_workqueue(*(undefined4 *)(iVar1 + 0x14));
  flush_workqueue(*(undefined4 *)(iVar1 + 0x18));
  destroy_workqueue(*(undefined4 *)(iVar1 + 0x18));
  iVar5 = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  disableIRQinterrupts();
  while (iVar2 = DAT_00012d98, *(int *)(iVar1 + 0x90) != iVar1 + 0x90) {
    list_del(*(undefined4 *)(iVar1 + 0x90),iVar5);
    iVar5 = extraout_r1;
  }
  while (iVar3 = DAT_00012d9c, *(int *)(iVar1 + 0x98) != iVar2) {
    list_del(*(undefined4 *)(iVar1 + 0x98),iVar5);
    iVar5 = extraout_r1_00;
  }
  while (iVar2 = DAT_00012da0, *(int *)(iVar1 + 0x1b0) != iVar3) {
    list_del(*(undefined4 *)(iVar1 + 0x1b0),iVar5);
    iVar5 = extraout_r1_01;
  }
  while (*(int *)(iVar1 + 0x1b8) != iVar2) {
    list_del(*(undefined4 *)(iVar1 + 0x1b8),iVar5);
    iVar5 = extraout_r1_02;
  }
  if (*(int *)(iVar1 + 0x1c4) != 0) {
    uVar4 = get_order();
    free_pages(extraout_r3,uVar4);
    *(undefined4 *)(iVar1 + 0x1c0) = 0;
    *(undefined4 *)(iVar1 + 0x1c4) = 0;
  }
  return;
}



/* ===== <EXTERNAL>::percpu_free_rwsem @ 00015000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void percpu_free_rwsem(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alloc_workqueue @ 00015004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void alloc_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::percpu_down_write @ 00015008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void percpu_down_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_put @ 0001500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tty_register_ldisc @ 00015010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tty_register_ldisc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_free_dev @ 00015014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_free_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_work_on @ 00015018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_dequeue @ 00015020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_dequeue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00015024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 00015028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free_pages @ 0001502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void free_pages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree_skb @ 00015030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_delayed_work_on @ 00015034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_delayed_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__get_free_pages @ 00015038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __get_free_pages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tty_driver_flush_buffer @ 0001503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tty_driver_flush_buffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__alloc_skb @ 00015040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __alloc_skb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tty_wait_until_sent @ 00015044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tty_wait_until_sent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 00015048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_queue_tail @ 0001504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_queue_tail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::percpu_up_write @ 00015050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void percpu_up_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::flush_workqueue @ 00015054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void flush_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_pull @ 00015058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_pull(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::destroy_workqueue @ 0001505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void destroy_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_push @ 00015060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_push(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_alloc_dev @ 00015064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_alloc_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 00015068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::n_tty_ioctl_helper @ 0001506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void n_tty_ioctl_helper(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__percpu_init_rwsem @ 00015070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __percpu_init_rwsem(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 00015074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_delayed_work @ 00015078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_delayed_work(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0001507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_queue_purge @ 00015080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_queue_purge(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_trace_android_vh_record_pcpu_rwsem_starttime @ 00015084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _trace_android_vh_record_pcpu_rwsem_starttime(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bt_info @ 00015088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void bt_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bt_err @ 0001508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void bt_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_trim @ 00015090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_trim(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tty_unregister_ldisc @ 00015098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tty_unregister_ldisc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_unregister_dev @ 0001509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_unregister_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_recv_frame @ 000150a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_recv_frame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_delayed_work_sync @ 000150a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_delayed_work_sync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_timer_key @ 000150a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_timer_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_work_sync @ 000150ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_work_sync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__percpu_down_read @ 000150b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __percpu_down_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tty_unthrottle @ 000150b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tty_unthrottle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rcuwait_wake_up @ 000150bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rcuwait_wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_register_dev @ 000150c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_register_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 000150c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::skb_queue_head @ 000150d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void skb_queue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


