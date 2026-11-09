// video_rkcif.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== rkcif_store_compact_mode @ 000109b8 size=78 ===== */

int rkcif_store_compact_mode(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1c;
  char *pcStack_18;
  
  pcStack_18 = param_3;
  local_1c = param_2;
  if (param_3 != (char *)0x0) {
    iVar6 = *(int *)(param_1 + 0x40);
    iVar5 = 0;
    pcVar3 = param_3;
    do {
      do {
        iVar2 = iVar5;
        if (param_3 + param_4 == pcVar3) goto LAB_000109de;
        pcVar4 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar4;
      } while (cVar1 == ' ');
      if (cVar1 == '\0') break;
      iVar2 = iVar5 + 1;
      *(char *)((int)&local_1c + iVar5) = cVar1;
      iVar5 = iVar2;
    } while (iVar2 != 4);
LAB_000109de:
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      *(bool *)(iVar6 + 0xfe3 + iVar5 * 0xc08) = *(char *)((int)&local_1c + iVar5) != '0';
    }
  }
  return param_4;
}



/* ===== rkcif_fwnode_parse @ 00010a06 size=50 ===== */

undefined4 rkcif_fwnode_parse(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if ((iVar2 - 1U < 2) || (iVar2 - 4U < 3)) {
    *(int *)(param_3 + 0x1c) = iVar2;
    if (iVar2 - 5U < 2) {
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      bVar1 = *(byte *)(param_2 + 0x29);
    }
    else {
      if (iVar2 != 4) {
        *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_2 + 0x10);
        return 0;
      }
      bVar1 = *(byte *)(param_2 + 0x1b);
    }
    *(uint *)(param_3 + 0x24) = (uint)bVar1;
  }
  return 0;
}



/* ===== rkcif_store_memory_mode @ 00010a38 size=114 ===== */

int rkcif_store_memory_mode(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_2c;
  char *pcStack_28;
  
  uVar2 = DAT_00010aac;
  pcStack_28 = param_3;
  local_2c = param_2;
  if (param_3 != (char *)0x0) {
    iVar8 = *(int *)(param_1 + 0x40);
    pcVar3 = param_3;
    iVar7 = 0;
    do {
      do {
        iVar5 = iVar7;
        if (pcVar3 == param_3 + param_4) goto LAB_00010a64;
        pcVar4 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar4;
      } while (cVar1 == ' ');
      if (cVar1 == '\0') break;
      iVar5 = iVar7 + 1;
      *(char *)((int)&local_2c + iVar7) = cVar1;
      iVar7 = iVar5;
    } while (iVar5 != 4);
LAB_00010a64:
    iVar7 = iVar8;
    for (iVar6 = 0; iVar6 < iVar5; iVar6 = iVar6 + 1) {
      if (*(char *)(iVar7 + 0xfe3) == '\0') {
        *(bool *)(iVar7 + 0xfea) = *(char *)((int)&local_2c + iVar6) != '0';
      }
      else {
        _dev_info(*(undefined4 *)(iVar8 + 8),uVar2,iVar6);
      }
      iVar7 = iVar7 + 0xc08;
    }
  }
  return param_4;
}



/* ===== rkcif_detach_hw @ 00010ab0 size=92 ===== */

undefined4 rkcif_detach_hw(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x7ed4);
  iVar4 = *(int *)(iVar2 + 0xbc);
  iVar1 = 0;
  piVar5 = (int *)(iVar2 + 0xa0);
  do {
    iVar3 = iVar1;
    if (iVar4 <= iVar3) {
      return 0;
    }
    iVar6 = *piVar5;
    iVar1 = iVar3 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar6 != param_1);
  if (iVar1 < iVar4) {
    iVar1 = iVar2 + iVar1 * 4;
    *(undefined4 *)(iVar2 + (iVar3 + 0x28) * 4) = *(undefined4 *)(iVar1 + 0xa0);
    *(undefined4 *)(iVar1 + 0xa0) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + (iVar3 + 0x28) * 4) = 0;
  }
  *(int *)(iVar2 + 0xbc) = iVar4 + -1;
  _dev_info(*(undefined4 *)(param_1 + 8),DAT_00010b0c);
  return 0;
}



/* ===== rkcif_set_sensor_streamon_in_sync_mode @ 00010b10 size=808 ===== */

void rkcif_set_sensor_streamon_in_sync_mode(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  int *local_38;
  undefined4 local_2c [2];
  
  puVar9 = *(undefined4 **)(param_1 + 0x7ed4);
  local_2c[0] = 1;
  if (*(int *)(param_1 + 0x803c) != 0) {
    mutex_lock(puVar9 + 0x32);
    iVar6 = puVar9[0x55];
    puVar9[0x55] = iVar6 + 1;
    uVar1 = DAT_00010e4c;
    if (((int)puVar9[0x54] <= iVar6 + 1) && (puVar9[0x53] - 1 < 2)) {
      uVar8 = 0;
      local_38 = puVar9 + 0x49;
      for (puVar11 = puVar9; uVar2 = DAT_00010e4c, (int)puVar11 - (int)puVar9 < (int)puVar9[0x50];
          puVar11 = (undefined4 *)((int)puVar11 + 1)) {
        iVar6 = *local_38;
        if (*(char *)(puVar11 + 0x51) == '\0') {
          if (*(int *)(iVar6 + 0x8040) == 1) {
            iVar10 = *(int *)(iVar6 + 0x350);
            if (iVar10 == 0) {
              uVar8 = 0xffffffed;
            }
            else {
              uVar8 = DAT_00010e40;
              if ((**(int **)(iVar10 + 0x68) != 0) &&
                 (pcVar7 = *(code **)(**(int **)(iVar10 + 0x68) + 0x18), pcVar7 != (code *)0x0)) {
                if ((*DAT_00010e34 == 0) ||
                   (pcVar5 = *(code **)(*DAT_00010e34 + 0x18), pcVar5 == (code *)0x0)) {
                  uVar8 = (*pcVar7)(iVar10,uVar1,local_2c);
                }
                else {
                  uVar8 = (*pcVar5)(iVar10,uVar1,local_2c);
                }
                goto LAB_00010c72;
              }
            }
LAB_00010ca0:
            _dev_info(*(undefined4 *)(iVar6 + 8),DAT_00010e30);
          }
          else {
            piVar13 = (int *)(iVar6 + 0x7ee0);
            for (iVar10 = 0; iVar10 < *(int *)(iVar6 + 0x8040); iVar10 = iVar10 + 1) {
              iVar14 = *(int *)(*piVar13 + 0x268);
              if (iVar14 == 0) {
                uVar4 = 0xffffffed;
              }
              else {
                uVar4 = DAT_00010e40;
                if ((**(int **)(iVar14 + 0x68) != 0) &&
                   (pcVar7 = *(code **)(**(int **)(iVar14 + 0x68) + 0x18), pcVar7 != (code *)0x0)) {
                  if ((*DAT_00010e34 != 0) &&
                     (pcVar5 = *(code **)(*DAT_00010e34 + 0x18), pcVar5 != (code *)0x0)) {
                    pcVar7 = pcVar5;
                  }
                  uVar4 = (*pcVar7)(iVar14,uVar1,local_2c);
                }
              }
              uVar8 = uVar8 | uVar4;
              piVar13 = piVar13 + 1;
            }
LAB_00010c72:
            if (uVar8 != 0) goto LAB_00010ca0;
          }
          *(undefined1 *)(puVar11 + 0x51) = 1;
        }
        if (2 < *DAT_00010e38) {
          printk(DAT_00010e3c,iVar6 + 0x1c,(int)puVar11 - (int)puVar9);
        }
        local_38 = local_38 + 1;
      }
      pcVar12 = (char *)(puVar9 + 0x47);
      local_38 = puVar9 + 0x3f;
      for (iVar6 = 0; uVar1 = DAT_00010e4c, iVar6 < (int)puVar9[0x46]; iVar6 = iVar6 + 1) {
        iVar10 = *local_38;
        if (*pcVar12 == '\0') {
          if (*(int *)(iVar10 + 0x8040) == 1) {
            iVar14 = *(int *)(iVar10 + 0x350);
            if (iVar14 == 0) {
              uVar8 = 0xffffffed;
            }
            else {
              uVar8 = DAT_00010e40;
              if ((**(int **)(iVar14 + 0x68) != 0) &&
                 (pcVar7 = *(code **)(**(int **)(iVar14 + 0x68) + 0x18), pcVar7 != (code *)0x0)) {
                if ((*DAT_00010e34 == 0) ||
                   (pcVar5 = *(code **)(*DAT_00010e34 + 0x18), pcVar5 == (code *)0x0)) {
                  uVar8 = (*pcVar7)(iVar14,uVar2,local_2c);
                }
                else {
                  uVar8 = (*pcVar5)(iVar14,uVar2,local_2c);
                }
                goto LAB_00010d4a;
              }
            }
LAB_00010d7a:
            _dev_info(*(undefined4 *)(iVar10 + 8),DAT_00010e30);
          }
          else {
            piVar13 = (int *)(iVar10 + 0x7ee0);
            for (iVar14 = 0; iVar14 < *(int *)(iVar10 + 0x8040); iVar14 = iVar14 + 1) {
              iVar3 = *(int *)(*piVar13 + 0x268);
              if (iVar3 == 0) {
                uVar4 = 0xffffffed;
              }
              else {
                uVar4 = DAT_00010e40;
                if ((**(int **)(iVar3 + 0x68) != 0) &&
                   (pcVar7 = *(code **)(**(int **)(iVar3 + 0x68) + 0x18), pcVar7 != (code *)0x0)) {
                  if ((*DAT_00010e34 != 0) &&
                     (pcVar5 = *(code **)(*DAT_00010e34 + 0x18), pcVar5 != (code *)0x0)) {
                    pcVar7 = pcVar5;
                  }
                  uVar4 = (*pcVar7)(iVar3,uVar2,local_2c);
                }
              }
              uVar8 = uVar8 | uVar4;
              piVar13 = piVar13 + 1;
            }
LAB_00010d4a:
            if (uVar8 != 0) goto LAB_00010d7a;
          }
          *pcVar12 = '\x01';
        }
        if (2 < *DAT_00010e38) {
          printk(DAT_00010e44,iVar10 + 0x1c,iVar6);
        }
        pcVar12 = pcVar12 + 1;
        local_38 = local_38 + 1;
      }
      pcVar12 = (char *)(puVar9 + 0x3d);
      local_38 = puVar9 + 0x35;
      for (iVar6 = 0; iVar6 < (int)puVar9[0x3c]; iVar6 = iVar6 + 1) {
        iVar10 = *local_38;
        if (*pcVar12 == '\0') {
          if (*(int *)(iVar10 + 0x8040) == 1) {
            iVar14 = *(int *)(iVar10 + 0x350);
            if (iVar14 == 0) {
              uVar8 = 0xffffffed;
            }
            else {
              uVar8 = DAT_00010e40;
              if ((**(int **)(iVar14 + 0x68) != 0) &&
                 (pcVar7 = *(code **)(**(int **)(iVar14 + 0x68) + 0x18), pcVar7 != (code *)0x0)) {
                if ((*DAT_00010e34 == 0) ||
                   (pcVar5 = *(code **)(*DAT_00010e34 + 0x18), pcVar5 == (code *)0x0)) {
                  uVar8 = (*pcVar7)(iVar14,uVar1,local_2c);
                }
                else {
                  uVar8 = (*pcVar5)(iVar14,uVar1,local_2c);
                }
                if (uVar8 == 0) goto LAB_00010dc4;
              }
            }
            uVar2 = *puVar9;
LAB_00010dc0:
            _dev_info(uVar2,DAT_00010e30);
          }
          else {
            piVar13 = (int *)(iVar10 + 0x7ee0);
            for (iVar14 = 0; iVar14 < *(int *)(iVar10 + 0x8040); iVar14 = iVar14 + 1) {
              iVar3 = *(int *)(*piVar13 + 0x268);
              if (iVar3 == 0) {
                uVar4 = 0xffffffed;
              }
              else {
                uVar4 = DAT_00010e5c;
                if ((**(int **)(iVar3 + 0x68) != 0) &&
                   (pcVar7 = *(code **)(**(int **)(iVar3 + 0x68) + 0x18), pcVar7 != (code *)0x0)) {
                  if ((*DAT_00010e34 != 0) &&
                     (pcVar5 = *(code **)(*DAT_00010e34 + 0x18), pcVar5 != (code *)0x0)) {
                    pcVar7 = pcVar5;
                  }
                  uVar4 = (*pcVar7)(iVar3,uVar1,local_2c);
                }
              }
              uVar8 = uVar8 | uVar4;
              piVar13 = piVar13 + 1;
            }
            if (uVar8 != 0) {
              uVar2 = *(undefined4 *)(iVar10 + 8);
              goto LAB_00010dc0;
            }
          }
LAB_00010dc4:
          *pcVar12 = '\x01';
        }
        if (2 < *DAT_00010e38) {
          printk(DAT_00010e48,iVar10 + 0x1c,iVar6);
        }
        pcVar12 = pcVar12 + 1;
        local_38 = local_38 + 1;
      }
    }
    mutex_unlock(puVar9 + 0x32);
  }
  return;
}



/* ===== rkcif_irq_lite_handler @ 00010e60 size=12 ===== */

undefined4 rkcif_irq_lite_handler(undefined4 param_1,undefined4 param_2)

{
  rkcif_irq_lite_lvds(param_2);
  return 1;
}



/* ===== subdev_asyn_register_itf @ 00010e6c size=70 ===== */

undefined4 subdev_asyn_register_itf(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = rkcif_update_sensor_info(param_1 + 1000);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x7ee0);
    uVar2 = 0;
    if (((iVar1 != 0) && (*(char *)(iVar1 + 0x294) == '\0')) &&
       (*(char *)(param_1 + 0x8034) == '\0')) {
      uVar2 = v4l2_async_register_subdev_sensor_common(iVar1 + 0x34);
      *(undefined1 *)(param_1 + 0x8034) = 1;
    }
  }
  else {
    printk(DAT_00010eb4,param_1 + 0x1c);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rkcif_create_link @ 00010eb8 size=548 ===== */

int rkcif_create_link(int param_1,int *param_2,int param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int local_d0;
  int local_bc;
  
  if (param_2[1] == 4) {
    local_bc = param_1 + 0x7b3c;
    *(int *)(param_1 + 0x7d70) = local_bc;
    *(int *)(param_1 + 0x7dac) = param_2[0xf];
    *(int *)(param_1 + 0x7d74) = param_2[1];
    *(int *)(param_1 + 0x7d78) = param_2[2];
  }
  else {
    local_bc = *param_2;
  }
  iVar1 = param_2[1];
  uVar6 = 0;
  piVar7 = (int *)(param_1 + 0x736c);
  iVar5 = 0;
  local_d0 = -1;
  do {
    uVar8 = iVar1 - 1;
    if (*(ushort *)(local_bc + 0x20) <= uVar6) {
LAB_00010f68:
      if ((param_2[1] == 4) && (iVar5 = media_create_pad_link(*param_2,1,local_bc,0,1), iVar5 != 0))
      {
        _dev_err(*(undefined4 *)(param_1 + 8),DAT_000110e0,local_bc + 0x74,*param_2 + 0x74);
      }
      if (1 < uVar8) {
        *param_4 = 1;
      }
      return iVar5;
    }
    if (*(int *)(*(int *)(local_bc + 0x2c) + uVar6 * 0x20 + 0x1c) << 0x1e < 0) {
      uVar4 = uVar6 & 0xffff;
      iVar2 = param_1 + 0x5c0;
      if (uVar8 < 2) {
        if (*piVar7 == 5) {
          iVar5 = media_create_pad_link(local_bc,uVar4,iVar2,0,1);
          if (iVar5 != 0) {
            _dev_err(*(undefined4 *)(param_1 + 8),DAT_000110dc,local_bc + 0x74);
          }
          goto LAB_00010f68;
        }
        if (5 < *piVar7) {
          iVar5 = media_create_pad_link(local_bc,uVar4,uVar6 * 0xc08 + iVar2,0,1);
          if (iVar5 != 0) {
            _dev_err(*(undefined4 *)(param_1 + 8),DAT_000110e4,local_bc + 0x74,uVar6);
          }
          goto LAB_00010fd4;
        }
      }
      iVar9 = 0;
      do {
        if (*piVar7 < 5) {
          bVar3 = 1;
        }
        else if (local_d0 == iVar9) {
          bVar3 = *param_4 ^ 1;
        }
        else {
          bVar3 = 0;
        }
        iVar5 = media_create_pad_link(local_bc,uVar4,iVar2,0,bVar3);
        if (iVar5 != 0) {
          _dev_err(*(undefined4 *)(param_1 + 8),DAT_000110dc,local_bc + 0x74);
          break;
        }
        iVar9 = iVar9 + 1;
        iVar2 = iVar2 + 0xc08;
      } while (param_3 != iVar9);
      if ((*piVar7 - 9U < 2) || (*piVar7 == 0xb)) {
        iVar2 = param_1 + 0x41e8;
        iVar5 = param_3;
        do {
          if (iVar5 == local_d0) {
            bVar3 = *param_4 ^ 1;
          }
          else {
            bVar3 = 0;
          }
          iVar9 = media_create_pad_link(local_bc,uVar4,iVar2,0,bVar3);
          if (iVar9 != 0) {
            _dev_err(*(undefined4 *)(param_1 + 8),DAT_000110dc,local_bc + 0x74);
            break;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 0x620;
        } while (param_3 * 2 != iVar5);
        iVar9 = 0;
        iVar2 = param_1 + 0x6088;
        do {
          if (param_3 * 2 + iVar9 == local_d0) {
            bVar3 = *param_4 ^ 1;
          }
          else {
            bVar3 = 0;
          }
          iVar5 = media_create_pad_link(local_bc,uVar4,iVar2,0,bVar3);
          if (iVar5 != 0) {
            _dev_err(*(undefined4 *)(param_1 + 8),DAT_000110dc,local_bc + 0x74);
            break;
          }
          iVar9 = iVar9 + 1;
          iVar2 = iVar2 + 0x620;
        } while (iVar9 != 3);
      }
    }
LAB_00010fd4:
    uVar6 = uVar6 + 1;
    local_d0 = local_d0 + 1;
  } while( true );
}



/* ===== subdev_notifier_complete @ 000110e8 size=466 ===== */

int subdev_notifier_complete(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  uint uVar10;
  undefined1 local_29 [5];
  
  piVar4 = DAT_000112d4;
  iVar7 = param_1 + -0x1f0;
  iVar1 = param_1;
  for (uVar10 = 0; uVar10 < *(uint *)(param_1 + 0x158); uVar10 = uVar10 + 1) {
    for (piVar8 = *(int **)(param_1 + -0x1dc); iVar2 = (int)(piVar8 + -0x14),
        piVar8 != (int *)(param_1 + -0x1dc); piVar8 = (int *)*piVar8) {
      if ((piVar8[6] != 0) && (*(int *)(iVar1 + 0x30) == iVar2)) {
        if ((iVar2 != 0) &&
           ((iVar3 = *(int *)(piVar8[6] + 0x1c), iVar3 != 0 &&
            (pcVar6 = *(code **)(iVar3 + 0x3c), pcVar6 != (code *)0x0)))) {
          if ((piVar4[7] == 0) || (pcVar9 = *(code **)(piVar4[7] + 0x3c), pcVar9 == (code *)0x0)) {
            iVar2 = (*pcVar6)(iVar2,0,iVar1 + 0x34);
          }
          else {
            iVar2 = (*pcVar9)(iVar2,0,iVar1 + 0x34);
          }
          if (iVar2 == 0) goto LAB_00011158;
        }
        printk(DAT_000112c4,param_1 + -0x1d4);
      }
LAB_00011158:
    }
    iVar2 = *(int *)(iVar1 + 0x34);
    if (iVar2 - 4U < 3) {
      switch(*(uint *)(iVar1 + 0x38) & 0xf) {
      default:
        uVar5 = 1;
        break;
      case 2:
        uVar5 = 2;
        break;
      case 4:
        uVar5 = 3;
        break;
      case 8:
        uVar5 = 4;
      }
      *(undefined4 *)(iVar1 + 0x6c) = uVar5;
    }
    if (iVar2 == 4) {
      iVar1 = rkcif_register_lvds_subdev(iVar7);
      uVar5 = DAT_000112cc;
joined_r0x000111a2:
      if (iVar1 < 0) goto LAB_00011212;
      break;
    }
    iVar1 = iVar1 + 0x94;
    if (iVar2 - 1U < 2) {
      iVar1 = rkcif_register_dvp_sof_subdev(iVar7);
      uVar5 = DAT_000112d0;
      goto joined_r0x000111a2;
    }
  }
  local_29[0] = 0;
  if (*(int *)(param_1 + 0x717c) < 6) {
    if (*(int *)(param_1 + 0x7cec) == 1) {
      uVar5 = 4;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 4;
  }
  iVar1 = param_1 + 0x30;
  for (uVar10 = 0; uVar10 < *(uint *)(param_1 + 0x158); uVar10 = uVar10 + 1) {
    rkcif_create_link(iVar7,iVar1,uVar5,local_29);
    iVar1 = iVar1 + 0x94;
  }
  iVar1 = __v4l2_device_register_subdev_nodes(param_1 + -0x1e4,0);
  if (iVar1 < 0) {
    rkcif_unregister_lvds_subdev(iVar7);
    rkcif_unregister_dvp_sof_subdev(iVar7);
    return iVar1;
  }
  rkcif_set_default_fmt();
  iVar1 = completion_done(param_1 + 0x7e18);
  if (iVar1 == 0) {
    complete(param_1 + 0x7e18);
  }
  piVar4 = *(int **)(param_1 + 0x15c);
  if ((piVar4 == (int *)0x0) || (1 < piVar4[1] - 5U)) {
LAB_000111f8:
    iVar1 = 0;
    uVar5 = DAT_000112c8;
  }
  else {
    iVar7 = *piVar4;
    if (iVar7 == 0) {
      iVar1 = -0x13;
    }
    else {
      iVar1 = DAT_000112e0;
      if ((**(int **)(iVar7 + 0x68) != 0) &&
         (pcVar6 = *(code **)(**(int **)(iVar7 + 0x68) + 0x18), pcVar6 != (code *)0x0)) {
        if ((*DAT_000112d4 == 0) ||
           (pcVar9 = *(code **)(*DAT_000112d4 + 0x18), pcVar9 == (code *)0x0)) {
          iVar1 = (*pcVar6)(iVar7,DAT_000112d8,param_1 + 0x7e04);
        }
        else {
          iVar1 = (*pcVar9)(iVar7,DAT_000112d8);
        }
        if (iVar1 == 0) goto LAB_000111f8;
      }
    }
    printk(DAT_000112dc,param_1 + -0x1d4,*(undefined4 *)(param_1 + 0x7e04));
    uVar5 = DAT_000112c8;
  }
LAB_00011212:
  printk(uVar5,param_1 + -0x1d4);
  return iVar1;
}



/* ===== rkcif_clr_unready_dev_param_set @ 000112e4 size=46 ===== */

undefined4 rkcif_clr_unready_dev_param_set(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00011314;
  mutex_lock(DAT_00011314);
  for (puVar2 = *(undefined4 **)(iVar1 + 0xc); puVar2 != (undefined4 *)(iVar1 + 0xc);
      puVar2 = (undefined4 *)*puVar2) {
    v4l2_async_notifier_clr_unready_dev(puVar2 + 0x7c);
    subdev_asyn_register_itf(puVar2);
  }
  mutex_unlock(DAT_00011314);
  return 0;
}



/* ===== rkcif_store_rdbk_debug @ 00011318 size=46 ===== */

undefined4
rkcif_store_rdbk_debug(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  
  iVar2 = *(int *)(param_1 + 0x40);
  local_14 = 0;
  iVar1 = kstrtoint(param_3,0,&local_14,param_4,param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x8038) = local_14;
  }
  else {
    _dev_info(*(undefined4 *)(iVar2 + 8),DAT_00011348);
  }
  return param_4;
}



/* ===== rkcif_store_scale_ch3_blc @ 0001134c size=224 ===== */

int rkcif_store_scale_ch3_blc(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ushort local_36;
  int local_34;
  uint local_30 [4];
  
  iVar7 = *(int *)(param_1 + 0x40);
  memset(local_30,0,0x10);
  iVar4 = 0;
  local_34 = 0;
  local_36 = 0;
  if (param_3 != (byte *)0x0) {
    iVar8 = 0;
    pbVar5 = param_3;
    while (pbVar5 != param_3 + param_4) {
      pbVar6 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar3 = (uint)bVar1;
      pbVar5 = pbVar6;
      if ((uVar3 == 0x20) || (uVar3 == 10)) {
        if (iVar4 != 0) {
          iVar8 = iVar8 + 1;
          if (iVar8 == 4) break;
          iVar4 = 0;
        }
      }
      else if (uVar3 - 0x30 < 10) {
        local_36 = (ushort)bVar1;
        iVar2 = kstrtoint(&local_36,0,&local_34);
        if (iVar2 == 0) {
          if (iVar4 != 0) {
            local_30[iVar8] = local_30[iVar8] * 10;
          }
          iVar4 = iVar4 + 1;
          local_30[iVar8] = local_30[iVar8] + local_34;
        }
      }
    }
    if ((((local_30[0] < 0x100) && (local_30[1] < 0x100)) && (local_30[2] < 0x100)) &&
       (local_30[3] < 0x100)) {
      *(char *)(iVar7 + 0x5874) = (char)local_30[0];
      *(char *)(iVar7 + 0x5875) = (char)local_30[1];
      *(char *)(iVar7 + 0x5876) = (char)local_30[2];
      *(char *)(iVar7 + 0x5877) = (char)local_30[3];
      _dev_info(*(undefined4 *)(iVar7 + 8),DAT_0001142c,local_30[0],local_30[1],local_30[2],
                local_30[3]);
    }
    else {
      param_4 = -0x16;
    }
  }
  return param_4;
}



/* ===== rkcif_store_scale_ch2_blc @ 00011430 size=224 ===== */

int rkcif_store_scale_ch2_blc(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ushort local_36;
  int local_34;
  uint local_30 [4];
  
  iVar7 = *(int *)(param_1 + 0x40);
  memset(local_30,0,0x10);
  iVar4 = 0;
  local_34 = 0;
  local_36 = 0;
  if (param_3 != (byte *)0x0) {
    iVar8 = 0;
    pbVar5 = param_3;
    while (pbVar5 != param_3 + param_4) {
      pbVar6 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar3 = (uint)bVar1;
      pbVar5 = pbVar6;
      if ((uVar3 == 0x20) || (uVar3 == 10)) {
        if (iVar4 != 0) {
          iVar8 = iVar8 + 1;
          if (iVar8 == 4) break;
          iVar4 = 0;
        }
      }
      else if (uVar3 - 0x30 < 10) {
        local_36 = (ushort)bVar1;
        iVar2 = kstrtoint(&local_36,0,&local_34);
        if (iVar2 == 0) {
          if (iVar4 != 0) {
            local_30[iVar8] = local_30[iVar8] * 10;
          }
          iVar4 = iVar4 + 1;
          local_30[iVar8] = local_30[iVar8] + local_34;
        }
      }
    }
    if ((((local_30[0] < 0x100) && (local_30[1] < 0x100)) && (local_30[2] < 0x100)) &&
       (local_30[3] < 0x100)) {
      *(char *)(iVar7 + 0x5254) = (char)local_30[0];
      *(char *)(iVar7 + 0x5255) = (char)local_30[1];
      *(char *)(iVar7 + 0x5256) = (char)local_30[2];
      *(char *)(iVar7 + 0x5257) = (char)local_30[3];
      _dev_info(*(undefined4 *)(iVar7 + 8),DAT_00011510,local_30[0],local_30[1],local_30[2],
                local_30[3]);
    }
    else {
      param_4 = -0x16;
    }
  }
  return param_4;
}



/* ===== rkcif_store_scale_ch1_blc @ 00011514 size=224 ===== */

int rkcif_store_scale_ch1_blc(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ushort local_36;
  int local_34;
  uint local_30 [4];
  
  iVar7 = *(int *)(param_1 + 0x40);
  memset(local_30,0,0x10);
  iVar4 = 0;
  local_34 = 0;
  local_36 = 0;
  if (param_3 != (byte *)0x0) {
    iVar8 = 0;
    pbVar5 = param_3;
    while (pbVar5 != param_3 + param_4) {
      pbVar6 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar3 = (uint)bVar1;
      pbVar5 = pbVar6;
      if ((uVar3 == 0x20) || (uVar3 == 10)) {
        if (iVar4 != 0) {
          iVar8 = iVar8 + 1;
          if (iVar8 == 4) break;
          iVar4 = 0;
        }
      }
      else if (uVar3 - 0x30 < 10) {
        local_36 = (ushort)bVar1;
        iVar2 = kstrtoint(&local_36,0,&local_34);
        if (iVar2 == 0) {
          if (iVar4 != 0) {
            local_30[iVar8] = local_30[iVar8] * 10;
          }
          iVar4 = iVar4 + 1;
          local_30[iVar8] = local_30[iVar8] + local_34;
        }
      }
    }
    if ((((local_30[0] < 0x100) && (local_30[1] < 0x100)) && (local_30[2] < 0x100)) &&
       (local_30[3] < 0x100)) {
      *(char *)(iVar7 + 0x4c34) = (char)local_30[0];
      *(char *)(iVar7 + 0x4c35) = (char)local_30[1];
      *(char *)(iVar7 + 0x4c36) = (char)local_30[2];
      *(char *)(iVar7 + 0x4c37) = (char)local_30[3];
      _dev_info(*(undefined4 *)(iVar7 + 8),DAT_000115f4,local_30[0],local_30[1],local_30[2],
                local_30[3]);
    }
    else {
      param_4 = -0x16;
    }
  }
  return param_4;
}



/* ===== rkcif_store_scale_ch0_blc @ 000115f8 size=224 ===== */

int rkcif_store_scale_ch0_blc(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ushort local_36;
  int local_34;
  uint local_30 [4];
  
  iVar7 = *(int *)(param_1 + 0x40);
  memset(local_30,0,0x10);
  iVar4 = 0;
  local_34 = 0;
  local_36 = 0;
  if (param_3 != (byte *)0x0) {
    iVar8 = 0;
    pbVar5 = param_3;
    while (pbVar5 != param_3 + param_4) {
      pbVar6 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar3 = (uint)bVar1;
      pbVar5 = pbVar6;
      if ((uVar3 == 0x20) || (uVar3 == 10)) {
        if (iVar4 != 0) {
          iVar8 = iVar8 + 1;
          if (iVar8 == 4) break;
          iVar4 = 0;
        }
      }
      else if (uVar3 - 0x30 < 10) {
        local_36 = (ushort)bVar1;
        iVar2 = kstrtoint(&local_36,0,&local_34);
        if (iVar2 == 0) {
          if (iVar4 != 0) {
            local_30[iVar8] = local_30[iVar8] * 10;
          }
          iVar4 = iVar4 + 1;
          local_30[iVar8] = local_30[iVar8] + local_34;
        }
      }
    }
    if ((((local_30[0] < 0x100) && (local_30[1] < 0x100)) && (local_30[2] < 0x100)) &&
       (local_30[3] < 0x100)) {
      *(char *)(iVar7 + 0x4614) = (char)local_30[0];
      *(char *)(iVar7 + 0x4615) = (char)local_30[1];
      *(char *)(iVar7 + 0x4616) = (char)local_30[2];
      *(char *)(iVar7 + 0x4617) = (char)local_30[3];
      _dev_info(*(undefined4 *)(iVar7 + 8),DAT_000116d8,local_30[0],local_30[1],local_30[2],
                local_30[3]);
    }
    else {
      param_4 = -0x16;
    }
  }
  return param_4;
}



/* ===== rkcif_store_dummybuf_mode @ 000116dc size=50 ===== */

undefined4
rkcif_store_dummybuf_mode(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x40);
  local_14 = 0;
  iVar1 = kstrtoint(param_3,0,&local_14,param_4,param_1);
  if (iVar1 == 0) {
    *(bool *)(iVar2 + 0x8033) = local_14 != 0;
  }
  else {
    _dev_info(*(undefined4 *)(iVar2 + 8),DAT_00011710);
  }
  return param_4;
}



/* ===== rkcif_store_line_int_num @ 00011714 size=72 ===== */

undefined4
rkcif_store_line_int_num(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint local_14;
  
  iVar3 = *(int *)(param_1 + 0x40);
  local_14 = 0;
  iVar2 = 0;
  if ((((*(int *)(iVar3 + 0x7ee0) == 0) ||
       (iVar2 = *(int *)(*(int *)(iVar3 + 0x7ee0) + 0x1d8), uVar1 = DAT_0001175c, iVar2 != 0)) &&
      (iVar2 = kstrtoint(param_3,0,&local_14,iVar2,param_1), uVar1 = DAT_00011760, iVar2 == 0)) &&
     (local_14 < 0x4000)) {
    *(uint *)(iVar3 + 0x8004) = local_14;
  }
  else {
    _dev_info(*(undefined4 *)(iVar3 + 8),uVar1);
  }
  return param_4;
}



/* ===== rkcif_show_rdbk_debug @ 00011764 size=26 ===== */

void rkcif_show_rdbk_debug(int param_1,undefined4 param_2,char *param_3)

{
  snprintf(param_3,0x1000,DAT_00011780,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x8038));
  return;
}



/* ===== rkcif_show_scale_ch3_blc @ 00011784 size=52 ===== */

void rkcif_show_scale_ch3_blc(int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  snprintf(param_3,0x1000,DAT_000117b8,(uint)*(byte *)(iVar1 + 0x5874),
           (uint)*(byte *)(iVar1 + 0x5875),(uint)*(byte *)(iVar1 + 0x5876),
           (uint)*(byte *)(iVar1 + 0x5877),param_4);
  return;
}



/* ===== rkcif_show_scale_ch2_blc @ 000117bc size=52 ===== */

void rkcif_show_scale_ch2_blc(int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  snprintf(param_3,0x1000,DAT_000117f0,(uint)*(byte *)(iVar1 + 0x5254),
           (uint)*(byte *)(iVar1 + 0x5255),(uint)*(byte *)(iVar1 + 0x5256),
           (uint)*(byte *)(iVar1 + 0x5257),param_4);
  return;
}



/* ===== rkcif_show_scale_ch1_blc @ 000117f4 size=52 ===== */

void rkcif_show_scale_ch1_blc(int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  snprintf(param_3,0x1000,DAT_00011828,(uint)*(byte *)(iVar1 + 0x4c34),
           (uint)*(byte *)(iVar1 + 0x4c35),(uint)*(byte *)(iVar1 + 0x4c36),
           (uint)*(byte *)(iVar1 + 0x4c37),param_4);
  return;
}



/* ===== rkcif_show_scale_ch0_blc @ 0001182c size=52 ===== */

void rkcif_show_scale_ch0_blc(int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  snprintf(param_3,0x1000,DAT_00011860,(uint)*(byte *)(iVar1 + 0x4614),
           (uint)*(byte *)(iVar1 + 0x4615),(uint)*(byte *)(iVar1 + 0x4616),
           (uint)*(byte *)(iVar1 + 0x4617),param_4);
  return;
}



/* ===== rkcif_show_memory_mode @ 00011864 size=100 ===== */

undefined4 rkcif_show_memory_mode(int param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0x40);
  if (*(char *)(iVar3 + 0xfe3) == '\0') {
    uVar5 = (uint)*(byte *)(iVar3 + 0xfea);
  }
  else {
    uVar5 = 2;
  }
  if (*(char *)(iVar3 + 0x1beb) == '\0') {
    uVar2 = (uint)*(byte *)(iVar3 + 0x1bf2);
  }
  else {
    uVar2 = 2;
  }
  if (*(char *)(iVar3 + 0x27f3) == '\0') {
    uVar1 = (uint)*(byte *)(iVar3 + 0x27fa);
  }
  else {
    uVar1 = 2;
  }
  if (*(char *)(iVar3 + 0x33fb) == '\0') {
    uVar4 = (uint)*(byte *)(iVar3 + 0x3402);
  }
  else {
    uVar4 = 2;
  }
  snprintf(param_3,0x1000,DAT_000118c8,uVar5,uVar2,uVar1,uVar4);
  return 0x3b;
}



/* ===== rkcif_show_dummybuf_mode @ 000118cc size=28 ===== */

undefined4 rkcif_show_dummybuf_mode(int param_1,undefined4 param_2,char *param_3)

{
  snprintf(param_3,0x1000,DAT_000118e8,(uint)*(byte *)(*(int *)(param_1 + 0x40) + 0x8033));
  return 2;
}



/* ===== rkcif_show_line_int_num @ 000118ec size=26 ===== */

void rkcif_show_line_int_num(int param_1,undefined4 param_2,char *param_3)

{
  snprintf(param_3,0x1000,DAT_00011908,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x8004));
  return;
}



/* ===== rkcif_show_compact_mode @ 0001190c size=52 ===== */

undefined4 rkcif_show_compact_mode(int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  snprintf(param_3,0x1000,DAT_00011940,(uint)*(byte *)(iVar1 + 0xfe3),
           (uint)*(byte *)(iVar1 + 0x1beb),(uint)*(byte *)(iVar1 + 0x27f3),
           (uint)*(byte *)(iVar1 + 0x33fb),param_4);
  return 8;
}



/* ===== rkcif_store_capture_fps @ 00011944 size=228 ===== */

/* WARNING: Type propagation algorithm not settling */

int rkcif_store_capture_fps(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ushort local_46;
  int local_44 [8];
  
  iVar8 = *(int *)(param_1 + 0x40);
  memset(local_44 + 3,0,0x10);
  iVar4 = 0;
  local_44[0] = 0;
  local_46 = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  if (param_3 != (byte *)0x0) {
    iVar7 = 0;
    pbVar5 = param_3;
    while (param_3 + param_4 != pbVar5) {
      pbVar6 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar2 = (uint)bVar1;
      pbVar5 = pbVar6;
      if ((uVar2 == 0x20) || (uVar2 == 10)) {
        if (iVar4 != 0) {
          iVar7 = iVar7 + 1;
          if (iVar7 == 4) break;
          iVar4 = 0;
        }
      }
      else if (uVar2 - 0x30 < 10) {
        local_46 = (ushort)bVar1;
        iVar3 = kstrtoint(&local_46,0,local_44);
        if (iVar3 == 0) {
          if (iVar4 != 0) {
            local_44[iVar7 + 3] = local_44[iVar7 + 3] * 10;
          }
          iVar4 = iVar4 + 1;
          local_44[iVar7 + 3] = local_44[iVar7 + 3] + local_44[0];
        }
      }
    }
    for (iVar4 = 0; iVar4 < iVar7; iVar4 = iVar4 + 1) {
      iVar3 = (local_44 + 3)[iVar4];
      if ((iVar3 != 0x30) && (9 < *(int *)(iVar8 + 0x736c))) {
        local_44[2] = iVar3;
        rkcif_set_fps(iVar4 * 0xc08 + iVar8 + 1000,local_44 + 1);
      }
    }
    _dev_info(*(undefined4 *)(iVar8 + 8),DAT_00011a28,local_44[3],local_44[4],local_44[5],
              local_44[6]);
  }
  return param_4;
}



/* ===== rkcif_irq_handler @ 00011a2c size=44 ===== */

undefined4 rkcif_irq_handler(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x739c) == 1) {
    if (*(int *)(param_2 + 0x736c) < 9) {
      rkcif_irq_pingpong();
    }
    else {
      rkcif_irq_pingpong_v1();
    }
  }
  else {
    rkcif_irq_oneframe(param_2);
  }
  return 1;
}



/* ===== notifier_isp_thread @ 00011a58 size=42 ===== */

undefined4 notifier_isp_thread(int param_1)

{
  int iVar1;
  
  iVar1 = wait_for_completion_timeout(param_1 + 0x8008,0x5dc);
  if (iVar1 != 0) {
    mutex_lock(DAT_00011a84);
    subdev_asyn_register_itf(param_1);
    mutex_unlock(DAT_00011a84);
  }
  return 0;
}



/* ===== atomic_sub_return_relaxed.constprop.7 @ 00011a88 size=26 ===== */

void atomic_sub_return_relaxed_constprop_7(int *param_1)

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



/* ===== rkcif_runtime_suspend @ 00011aa2 size=58 ===== */

uint rkcif_runtime_suspend(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x40);
  iVar1 = atomic_sub_return_relaxed_constprop_7(iVar3 + 0x7374);
  if (iVar1 == 0) {
    mutex_lock(*(int *)(iVar3 + 0x7ed4) + 200);
    uVar2 = __pm_runtime_idle(**(undefined4 **)(iVar3 + 0x7ed4),4);
    mutex_unlock(*(int *)(iVar3 + 0x7ed4) + 200);
    uVar2 = uVar2 & (int)uVar2 >> 0x1f;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rkcif_pipeline_close @ 00011adc size=12 ===== */

undefined4 rkcif_pipeline_close(int param_1)

{
  atomic_sub_return_relaxed_constprop_7(param_1 + 0x94);
  return 0;
}



/* ===== rkcif_pipeline_set_stream @ 00011ae8 size=970 ===== */

int rkcif_pipeline_set_stream(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  
  piVar7 = (int *)(param_1 + 0x98);
  iVar1 = *(int *)(param_1 + 0x291);
  if ((iVar1 == 0) || (iVar1 == 7)) {
    if (param_2 == 0) {
      iVar1 = atomic_sub_return_relaxed_constprop_7(piVar7);
      if (0 < iVar1) {
        return 0;
      }
    }
    else {
      HintPreloadData(piVar7);
      do {
        ExclusiveAccess(piVar7);
        iVar1 = *piVar7;
        bVar13 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar13);
      *piVar7 = iVar1 + 1;
      if (1 < iVar1 + 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xde8) = 0;
      *(undefined4 *)(param_1 + 0xdec) = 0;
      *(undefined4 *)(param_1 + 0xdf0) = 0;
      *(undefined4 *)(param_1 + 0xdf4) = 0;
      *(undefined4 *)(param_1 + 0xe00) = 0;
      *(undefined4 *)(param_1 + 0xe04) = 0;
      *(undefined4 *)(param_1 + 0xe10) = 0;
      *(undefined4 *)(param_1 + 0xe14) = 0;
      *(undefined4 *)(param_1 + 0xe08) = 0;
      *(undefined4 *)(param_1 + 0xe0c) = 0;
      *(undefined4 *)(param_1 + 0xe18) = 0;
      *(undefined4 *)(param_1 + 0xe1c) = 0;
      *(undefined4 *)(param_1 + 0xe38) = 0;
      *(undefined4 *)(param_1 + 0xe3c) = 0;
      *(undefined4 *)(param_1 + 0xdf8) = 0;
      *(undefined4 *)(param_1 + 0xdfc) = 0;
      *(undefined4 *)(param_1 + 0xe20) = 0;
      *(undefined4 *)(param_1 + 0xe24) = 0;
      *(undefined4 *)(param_1 + 0xe28) = 0;
      *(undefined4 *)(param_1 + 0xe2c) = 0;
      *(undefined4 *)(param_1 + 0xe30) = 0;
      *(undefined4 *)(param_1 + 0xe34) = 0;
      *(undefined1 *)(param_1 + 0xeb8) = 0;
      *(undefined1 *)(param_1 + 0xeba) = 0;
      iVar9 = *(int *)(param_1 + 600);
      puVar4 = (undefined4 *)(param_1 + 0xe68);
      for (iVar1 = 0; iVar1 < iVar9; iVar1 = iVar1 + 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_1 + 0xe5c) = 0;
    }
    iVar9 = DAT_00011e10;
    iVar1 = DAT_00011e0c;
    piVar10 = (int *)(param_1 + 0x9c);
    for (iVar12 = 0; iVar5 = DAT_00011e10, iVar2 = DAT_00011e0c, iVar12 < *(int *)(param_1 + 0x90);
        iVar12 = iVar12 + 1) {
      iVar2 = *piVar10;
      if (iVar2 != 0) {
        iVar5 = *(int *)(*(int *)(iVar2 + 0x68) + 0xc);
        if ((iVar5 == 0) || (pcVar6 = *(code **)(iVar5 + 0x28), pcVar6 == (code *)0x0)) {
          iVar3 = iVar9;
          if (param_2 != 0) goto LAB_00011bb6;
        }
        else {
          if ((*(int *)(iVar1 + 0xc) == 0) ||
             (pcVar8 = *(code **)(*(int *)(iVar1 + 0xc) + 0x28), pcVar8 == (code *)0x0)) {
            iVar3 = (*pcVar6)(iVar2,param_2);
          }
          else {
            iVar3 = (*pcVar8)(iVar2,param_2);
          }
          if ((param_2 != 0) && (iVar3 < 0)) {
LAB_00011bb6:
            if ((iVar3 != iVar9) && (iVar3 != -0x13)) goto LAB_00011bc0;
          }
        }
      }
      piVar10 = piVar10 + 1;
    }
    if (1 < *(int *)(param_1 + 0xf30)) {
      iVar12 = 0;
      piVar10 = (int *)(param_1 + 0xdd0);
      do {
        iVar1 = *(int *)(*piVar10 + 0x268);
        if (iVar1 == 0) {
          iVar3 = -0x13;
LAB_00011d7a:
          if (param_2 != 0) {
LAB_00011c56:
            if ((iVar3 != iVar5) && (iVar3 != -0x13)) goto LAB_00011bc0;
          }
        }
        else {
          iVar9 = *(int *)(*(int *)(iVar1 + 0x68) + 0xc);
          iVar3 = iVar5;
          if ((iVar9 == 0) || (pcVar6 = *(code **)(iVar9 + 0x28), pcVar6 == (code *)0x0))
          goto LAB_00011d7a;
          if ((*(int *)(iVar2 + 0xc) == 0) ||
             (pcVar8 = *(code **)(*(int *)(iVar2 + 0xc) + 0x28), pcVar8 == (code *)0x0)) {
            iVar3 = (*pcVar6)(iVar1,param_2);
          }
          else {
            iVar3 = (*pcVar8)(iVar1,param_2);
          }
          if ((param_2 != 0) && (iVar3 < 0)) goto LAB_00011c56;
        }
        iVar12 = iVar12 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar12 < *(int *)(param_1 + 0xf30));
    }
  }
  else {
    if (param_2 == 0) {
      iVar1 = atomic_sub_return_relaxed_constprop_7(piVar7);
      if (0 < iVar1) {
        return 0;
      }
    }
    else {
      HintPreloadData(piVar7);
      do {
        ExclusiveAccess(piVar7);
        bVar13 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar13);
      *piVar7 = *piVar7 + 1;
      iVar1 = *(int *)(param_1 + 0x291);
      if (iVar1 == 5) {
        if (*(int *)(param_1 + 0x98) == 1) {
          return 0;
        }
        bVar13 = *(int *)(param_1 + 0x98) == 2;
      }
      else {
        if (iVar1 != 6) {
          return 0;
        }
        if (*(int *)(param_1 + 0x98) == 1) {
          return 0;
        }
        bVar13 = *(int *)(param_1 + 0x98) == 3;
      }
      if (!bVar13) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xde8) = 0;
      *(undefined4 *)(param_1 + 0xdec) = 0;
      *(undefined4 *)(param_1 + 0xdf0) = 0;
      *(undefined4 *)(param_1 + 0xdf4) = 0;
      *(undefined4 *)(param_1 + 0xe00) = 0;
      *(undefined4 *)(param_1 + 0xe04) = 0;
      *(undefined4 *)(param_1 + 0xe10) = 0;
      *(undefined4 *)(param_1 + 0xe14) = 0;
      *(undefined4 *)(param_1 + 0xe08) = 0;
      *(undefined4 *)(param_1 + 0xe0c) = 0;
      *(undefined4 *)(param_1 + 0xe18) = 0;
      *(undefined4 *)(param_1 + 0xe1c) = 0;
      *(undefined4 *)(param_1 + 0xe28) = 0;
      *(undefined4 *)(param_1 + 0xe2c) = 0;
      *(undefined4 *)(param_1 + 0xe38) = 0;
      *(undefined4 *)(param_1 + 0xe3c) = 0;
      *(undefined4 *)(param_1 + 0xdf8) = 0;
      *(undefined4 *)(param_1 + 0xdfc) = 0;
      *(undefined4 *)(param_1 + 0xe20) = 0;
      *(undefined4 *)(param_1 + 0xe24) = 0;
      *(undefined4 *)(param_1 + 0xe30) = 0;
      *(undefined4 *)(param_1 + 0xe34) = 0;
      *(undefined1 *)(param_1 + 0xf20) = 1;
      *(undefined1 *)(param_1 + 0xeb8) = 0;
      *(undefined1 *)(param_1 + 0xeba) = 0;
      iVar9 = *(int *)(param_1 + 600);
      puVar4 = (undefined4 *)(param_1 + 0xe68);
      for (iVar1 = 0; iVar1 < iVar9; iVar1 = iVar1 + 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_1 + 0xe5c) = 0;
    }
    iVar9 = DAT_00011e10;
    iVar1 = DAT_00011e0c;
    piVar10 = (int *)(param_1 + 0x9c);
    for (iVar12 = 0; iVar5 = DAT_00011e10, iVar2 = DAT_00011e0c, iVar12 < *(int *)(param_1 + 0x90);
        iVar12 = iVar12 + 1) {
      iVar2 = *piVar10;
      if (iVar2 != 0) {
        iVar5 = *(int *)(*(int *)(iVar2 + 0x68) + 0xc);
        if ((iVar5 == 0) || (pcVar6 = *(code **)(iVar5 + 0x28), pcVar6 == (code *)0x0)) {
          iVar3 = iVar9;
          if (param_2 != 0) goto LAB_00011d44;
        }
        else {
          if ((*(int *)(iVar1 + 0xc) == 0) ||
             (pcVar8 = *(code **)(*(int *)(iVar1 + 0xc) + 0x28), pcVar8 == (code *)0x0)) {
            iVar3 = (*pcVar6)(iVar2,param_2);
          }
          else {
            iVar3 = (*pcVar8)(iVar2,param_2);
          }
          if ((param_2 != 0) && (iVar3 < 0)) {
LAB_00011d44:
            if ((iVar3 != iVar9) && (iVar3 != -0x13)) goto LAB_00011bc0;
          }
        }
      }
      piVar10 = piVar10 + 1;
    }
    if (1 < *(int *)(param_1 + 0xf30)) {
      iVar12 = 0;
      piVar10 = (int *)(param_1 + 0xdd0);
      do {
        iVar1 = *(int *)(*piVar10 + 0x268);
        if (iVar1 == 0) {
          iVar3 = -0x13;
LAB_00011dfe:
          if (param_2 != 0) {
LAB_00011d5a:
            if ((iVar3 != iVar5) && (iVar3 != -0x13)) {
LAB_00011bc0:
              iVar1 = DAT_00011e0c;
              piVar10 = (int *)(param_1 + (iVar12 + 0x26) * 4);
              while (piVar7 != piVar10) {
                piVar11 = piVar10 + -1;
                iVar9 = *piVar10;
                piVar10 = piVar11;
                if (((iVar9 != 0) && (iVar12 = *(int *)(*(int *)(iVar9 + 0x68) + 0xc), iVar12 != 0))
                   && (pcVar6 = *(code **)(iVar12 + 0x28), pcVar6 != (code *)0x0)) {
                  if ((*(int *)(iVar1 + 0xc) == 0) ||
                     (pcVar8 = *(code **)(*(int *)(iVar1 + 0xc) + 0x28), pcVar8 == (code *)0x0)) {
                    (*pcVar6)(iVar9,0);
                  }
                  else {
                    (*pcVar8)();
                  }
                }
              }
              return iVar3;
            }
          }
        }
        else {
          iVar9 = *(int *)(*(int *)(iVar1 + 0x68) + 0xc);
          iVar3 = iVar5;
          if ((iVar9 == 0) || (pcVar6 = *(code **)(iVar9 + 0x28), pcVar6 == (code *)0x0))
          goto LAB_00011dfe;
          if ((*(int *)(iVar2 + 0xc) == 0) ||
             (pcVar8 = *(code **)(*(int *)(iVar2 + 0xc) + 0x28), pcVar8 == (code *)0x0)) {
            iVar3 = (*pcVar6)(iVar1,param_2);
          }
          else {
            iVar3 = (*pcVar8)(iVar1,param_2);
          }
          if ((param_2 != 0) && (iVar3 < 0)) goto LAB_00011d5a;
        }
        iVar12 = iVar12 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar12 < *(int *)(param_1 + 0xf30));
    }
  }
  if (param_2 != 0) {
    rkcif_set_sensor_streamon_in_sync_mode(param_1 + -0x7110);
  }
  return 0;
}



/* ===== rkcif_pipeline_open @ 00011ebc size=136 ===== */

undefined4 rkcif_pipeline_open(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_00011ef2:
    uVar2 = 0xffffffea;
  }
  else {
    piVar5 = (int *)(param_1 + 0x94);
    HintPreloadData(piVar5);
    do {
      ExclusiveAccess(piVar5);
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + 1;
    if (iVar4 + 1 < 2) {
      if (param_3 != 0) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        memset((void *)(param_1 + 0x9c),0,0x10);
        do {
          iVar4 = 0;
          while( true ) {
            if ((int)(uint)*(ushort *)(param_2 + 0x20) <= iVar4) goto LAB_00011eea;
            if ((*(int *)(*(int *)(param_2 + 0x2c) + iVar4 * 0x20 + 0x1c) << 0x1f < 0) &&
               (iVar3 = media_entity_remote_pad(), iVar3 != 0)) break;
            iVar4 = iVar4 + 1;
          }
          iVar4 = *(int *)(param_1 + 0x90);
          param_2 = *(int *)(iVar3 + 0x10);
          *(int *)(param_1 + 0x90) = iVar4 + 1;
          *(int *)(param_1 + iVar4 * 4 + 0x9c) = param_2;
        } while (*(short *)(param_2 + 0x20) != 1);
      }
LAB_00011eea:
      if (*(int *)(param_1 + 0x90) == 0) goto LAB_00011ef2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rkcif_runtime_resume @ 00011f44 size=136 ===== */

int rkcif_runtime_resume(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x40);
  piVar4 = (int *)(iVar6 + 0x7374);
  HintPreloadData(piVar4);
  do {
    ExclusiveAccess(piVar4);
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + 1;
  if (iVar3 + 1 < 2) {
    mutex_lock(*(int *)(iVar6 + 0x7ed4) + 200);
    iVar5 = **(int **)(iVar6 + 0x7ed4);
    iVar2 = __pm_runtime_resume(iVar5,4);
    iVar3 = 0;
    if (iVar2 < 0) {
      piVar4 = (int *)(iVar5 + 0xd4);
      HintPreloadData(piVar4);
      do {
        ExclusiveAccess(piVar4);
        iVar3 = iVar2;
        if (*piVar4 == 0) goto LAB_00011fae;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + -1;
    }
LAB_00011fae:
    mutex_unlock(*(int *)(iVar6 + 0x7ed4) + 200);
    rkcif_do_soft_reset(iVar6);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



/* ===== rkcif_write_register @ 00011fcc size=164 ===== */

void rkcif_write_register(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x7ed4) + 0x98);
  if (*(int *)(param_1 + 0x7edc) == 1) {
    if (param_2 < 0x30) goto LAB_00012046;
    if (0x80 < param_2) {
      if (0xaa < param_2) {
        return;
      }
      goto LAB_00012048;
    }
    iVar1 = *(int *)(param_1 + 0x736c);
    if (iVar1 == 9) {
      iVar1 = *(int *)(param_1 + 0x7ff4) << 8;
    }
    else {
      if (iVar1 == 10) {
        uVar2 = *(uint *)(param_1 + 0x7ff4);
      }
      else {
        if (iVar1 != 0xb) goto LAB_00012048;
        uVar2 = *(uint *)(param_1 + 0x7ff4);
        if (2 < uVar2) {
          iVar1 = 0x500;
          goto LAB_00012002;
        }
      }
      iVar1 = uVar2 << 9;
    }
  }
  else {
    if (0xaa < param_2) {
      return;
    }
LAB_00012046:
    if (param_2 == 0) {
      iVar1 = 0;
      goto LAB_00012008;
    }
LAB_00012048:
    iVar1 = 0;
  }
LAB_00012002:
  if (*(int *)(iVar4 + param_2 * 4) == 0) {
    if (*DAT_00012070 < 1) {
      return;
    }
    printk(DAT_00012074,param_1 + 0x1c,param_2,param_3);
    return;
  }
LAB_00012008:
  iVar3 = *(int *)(*(int *)(param_1 + 0x7ed4) + 8);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar1 + *(int *)(iVar4 + param_2 * 4) + iVar3) = param_3;
  return;
}



/* ===== rkcif_write_register_or @ 00012078 size=184 ===== */

void rkcif_write_register_or(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x7ed4) + 0x98);
  if (*(int *)(param_1 + 0x7edc) == 1) {
    if (param_2 < 0x30) goto LAB_00012108;
    if (0x80 < param_2) {
      if (0xaa < param_2) {
        return;
      }
      goto LAB_0001210a;
    }
    iVar1 = *(int *)(param_1 + 0x736c);
    if (iVar1 == 9) {
      iVar1 = *(int *)(param_1 + 0x7ff4) << 8;
    }
    else {
      if (iVar1 == 10) {
        uVar4 = *(uint *)(param_1 + 0x7ff4);
      }
      else {
        if (iVar1 != 0xb) goto LAB_0001210a;
        uVar4 = *(uint *)(param_1 + 0x7ff4);
        if (2 < uVar4) {
          iVar1 = 0x500;
          goto LAB_000120ae;
        }
      }
      iVar1 = uVar4 << 9;
    }
  }
  else {
    if (0xaa < param_2) {
      return;
    }
LAB_00012108:
    if (param_2 == 0) {
      iVar1 = 0;
      goto LAB_000120b4;
    }
LAB_0001210a:
    iVar1 = 0;
  }
LAB_000120ae:
  if (*(int *)(iVar3 + param_2 * 4) == 0) {
    if (*DAT_00012130 < 1) {
      return;
    }
    printk(DAT_00012134,param_1 + 0x1c,param_2);
    return;
  }
LAB_000120b4:
  iVar2 = *(int *)(*(int *)(param_1 + 0x7ed4) + 8);
  uVar4 = *(uint *)(*(int *)(iVar3 + param_2 * 4) + iVar1 + iVar2);
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(uint *)(iVar2 + iVar1 + *(int *)(iVar3 + param_2 * 4)) = param_3 | uVar4;
  return;
}



/* ===== rkcif_write_register_and @ 00012138 size=184 ===== */

void rkcif_write_register_and(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x7ed4) + 0x98);
  if (*(int *)(param_1 + 0x7edc) == 1) {
    if (param_2 < 0x30) goto LAB_000121c8;
    if (0x80 < param_2) {
      if (0xaa < param_2) {
        return;
      }
      goto LAB_000121ca;
    }
    iVar1 = *(int *)(param_1 + 0x736c);
    if (iVar1 == 9) {
      iVar1 = *(int *)(param_1 + 0x7ff4) << 8;
    }
    else {
      if (iVar1 == 10) {
        uVar4 = *(uint *)(param_1 + 0x7ff4);
      }
      else {
        if (iVar1 != 0xb) goto LAB_000121ca;
        uVar4 = *(uint *)(param_1 + 0x7ff4);
        if (2 < uVar4) {
          iVar1 = 0x500;
          goto LAB_0001216e;
        }
      }
      iVar1 = uVar4 << 9;
    }
  }
  else {
    if (0xaa < param_2) {
      return;
    }
LAB_000121c8:
    if (param_2 == 0) {
      iVar1 = 0;
      goto LAB_00012174;
    }
LAB_000121ca:
    iVar1 = 0;
  }
LAB_0001216e:
  if (*(int *)(iVar3 + param_2 * 4) == 0) {
    if (*DAT_000121f0 < 1) {
      return;
    }
    printk(DAT_000121f4,param_1 + 0x1c,param_2);
    return;
  }
LAB_00012174:
  iVar2 = *(int *)(*(int *)(param_1 + 0x7ed4) + 8);
  uVar4 = *(uint *)(*(int *)(iVar3 + param_2 * 4) + iVar1 + iVar2);
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(uint *)(iVar2 + iVar1 + *(int *)(iVar3 + param_2 * 4)) = param_3 & uVar4;
  return;
}



/* ===== rkcif_read_register @ 000121f8 size=152 ===== */

undefined4 rkcif_read_register(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x7ed4) + 0x98);
  if (*(int *)(param_1 + 0x7edc) == 1) {
    if (param_2 < 0x30) goto LAB_0001226a;
    if (0x80 < param_2) {
      if (0xaa < param_2) {
        return 0;
      }
      goto LAB_0001226c;
    }
    iVar1 = *(int *)(param_1 + 0x736c);
    if (iVar1 == 9) {
      iVar1 = *(int *)(param_1 + 0x7ff4) << 8;
    }
    else {
      if (iVar1 == 10) {
        uVar2 = *(uint *)(param_1 + 0x7ff4);
      }
      else {
        if (iVar1 != 0xb) goto LAB_0001226c;
        uVar2 = *(uint *)(param_1 + 0x7ff4);
        if (2 < uVar2) {
          iVar1 = 0x500;
          goto LAB_0001222a;
        }
      }
      iVar1 = uVar2 << 9;
    }
  }
  else {
    if (0xaa < param_2) {
      return 0;
    }
LAB_0001226a:
    if (param_2 == 0) {
      iVar1 = 0;
      goto LAB_00012230;
    }
LAB_0001226c:
    iVar1 = 0;
  }
LAB_0001222a:
  if (*(int *)(iVar3 + param_2 * 4) == 0) {
    if (0 < *DAT_00012290) {
      printk(DAT_00012294,param_1 + 0x1c,param_2,*DAT_00012290,param_4);
      return 0;
    }
    return 0;
  }
LAB_00012230:
  DataSynchronizationBarrier(0xf);
  return *(undefined4 *)
          (iVar1 + *(int *)(iVar3 + param_2 * 4) + *(int *)(*(int *)(param_1 + 0x7ed4) + 8));
}



/* ===== rkcif_write_grf_reg @ 00012298 size=56 ===== */

void rkcif_write_grf_reg(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  if (param_2 < 0xab) {
    if (param_2 == 0) {
      if (0 < *DAT_000122d0) {
        printk(DAT_000122d4,param_1 + 0x1c,0,param_3);
        return;
      }
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x7ed4) + 0x10);
      if (uVar1 < 0xfffff001) {
        regmap_write(uVar1,*(undefined4 *)
                            (*(int *)(*(int *)(param_1 + 0x7ed4) + 0x98) + param_2 * 4));
        return;
      }
    }
  }
  return;
}



/* ===== rkcif_read_grf_reg @ 000122d8 size=70 ===== */

undefined4 rkcif_read_grf_reg(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_c;
  
  local_c = 0xffff;
  if (param_2 < 0xab) {
    if (param_2 == 0) {
      if (0 < *DAT_00012320) {
        printk(DAT_00012324,param_1 + 0x1c,0,*DAT_00012320,param_1);
      }
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x7ed4) + 0x10);
      if (uVar1 < 0xfffff001) {
        regmap_read(uVar1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7ed4) + 0x98) + param_2 * 4)
                    ,&local_c);
      }
    }
  }
  return local_c;
}



/* ===== rkcif_enable_dvp_clk_dual_edge @ 00012328 size=140 ===== */

void rkcif_enable_dvp_clk_dual_edge(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(uint *)(*(int *)(param_1 + 0x7ed4) + 0x10) < 0xfffff001) {
    iVar2 = *(int *)(param_1 + 0x736c);
    if (iVar2 == 8) {
      uVar1 = 0x8e;
      if (param_2 == 0) {
        uVar3 = 0x2000000;
      }
      else {
        uVar3 = 0x2000200;
      }
    }
    else {
      if (iVar2 == 6) {
        if (param_2 == 0) {
          uVar3 = 0x1000000;
        }
        else {
          uVar3 = 0x1000100;
        }
      }
      else if (iVar2 == 9) {
        if (param_2 == 0) {
          uVar3 = 0x200000;
        }
        else {
          uVar3 = 0x200020;
        }
      }
      else {
        if (iVar2 != 10) goto LAB_000123b0;
        if (param_2 == 0) {
          uVar3 = 0x40000;
        }
        else {
          uVar3 = 0x40004;
        }
      }
      uVar1 = 0x8d;
    }
    rkcif_write_grf_reg(param_1,uVar1,uVar3);
  }
  else {
LAB_000123b0:
    uVar3 = 0;
  }
  uVar1 = DAT_000123b8;
  if (param_2 != 0) {
    uVar1 = DAT_000123b4;
  }
  printk(DAT_000123bc,param_1 + 0x1c,uVar1,uVar3);
  return;
}



/* ===== rkcif_config_dvp_clk_sampling_edge @ 000123c0 size=132 ===== */

void rkcif_config_dvp_clk_sampling_edge(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (0xfffff000 < *(uint *)(*(int *)(param_1 + 0x7ed4) + 0x10)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x736c);
  if (iVar2 == 6) {
    if (param_2 == 0) {
      uVar3 = 0x4000400;
    }
    else {
      uVar3 = 0x4000000;
    }
  }
  else if (iVar2 == 8) {
    if (param_2 == 0) {
      uVar3 = 0x10000000;
    }
    else {
      uVar3 = 0x10001000;
    }
  }
  else if (iVar2 == 9) {
    if (param_2 == 0) {
      uVar3 = 0x100000;
    }
    else {
      uVar3 = 0x100010;
    }
  }
  else if (iVar2 == 10) {
    if (*(int *)(param_1 + 0x8014) == 0) {
      uVar1 = 0x8f;
      if (param_2 == 0) {
        uVar3 = 0x10001;
      }
      else {
        uVar3 = 0x10000;
      }
      goto LAB_0001243a;
    }
    if (param_2 == 0) {
      uVar3 = 0x20002;
    }
    else {
      uVar3 = 0x20000;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar1 = 0x8d;
LAB_0001243a:
  rkcif_write_grf_reg(param_1,uVar1,uVar3);
  return;
}



/* ===== rkcif_config_dvp_pin @ 00012444 size=76 ===== */

void rkcif_config_dvp_pin(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8014);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x11c) != 0)) && (*(int *)(iVar1 + 0x120) != 0)) {
    rkcif_write_grf_reg(param_1,0x8d,0x10000);
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00012474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(param_1 + 0x8014) + 0x11c))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001247e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0x8014) + 0x120))();
    return;
  }
  rkcif_write_grf_reg(param_1,0x8d,0x10001);
  return;
}



/* ===== rkcif_attach_hw @ 00012490 size=196 ===== */

undefined4 rkcif_attach_hw(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x7ed4) == 0) {
    *(undefined4 *)(param_1 + 0x736c) = 7;
    iVar1 = of_parse_phandle(*(undefined4 *)(*(int *)(param_1 + 8) + 0x164),DAT_00012554,0);
    uVar4 = DAT_00012558;
    if (((iVar1 == 0) || (iVar2 = of_device_is_available(), uVar4 = DAT_00012558, iVar2 == 0)) ||
       (iVar1 = of_find_device_by_node(iVar1), uVar4 = DAT_0001255c, iVar1 == 0)) {
      _dev_err(*(undefined4 *)(param_1 + 8),uVar4);
      return 0xffffffed;
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      _dev_err(*(undefined4 *)(param_1 + 8),DAT_00012560);
      return 0xffffffea;
    }
    iVar2 = *(int *)(iVar1 + 0xbc);
    *(int *)(iVar1 + (iVar2 + 0x28) * 4) = param_1;
    *(int *)(iVar1 + 0xbc) = iVar2 + 1;
    *(int *)(param_1 + 0x7ed4) = iVar1;
    uVar4 = DAT_00012564;
    *(undefined4 *)(param_1 + 0x736c) = *(undefined4 *)(iVar1 + 0x94);
    _dev_info(*(undefined4 *)(param_1 + 8),uVar4);
    iVar2 = *(int *)(param_1 + 8);
    iVar1 = of_parse_phandle(*(undefined4 *)(iVar2 + 0x164),DAT_00012568,0);
    uVar4 = DAT_0001256c;
    if (((iVar1 == 0) || (iVar3 = of_device_is_available(), uVar4 = DAT_0001256c, iVar3 == 0)) ||
       ((iVar1 = of_find_device_by_node(iVar1), uVar4 = DAT_00012570, iVar1 == 0 ||
        (uVar4 = DAT_00012574, *(int *)(iVar1 + 0x50) == 0)))) {
      _dev_err(iVar2,uVar4);
    }
    else {
      *(int *)(param_1 + 0x8014) = *(int *)(iVar1 + 0x50);
    }
  }
  return 0;
}



/* ===== rkcif_plat_init @ 00012578 size=824 ===== */

int rkcif_plat_init(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  uVar5 = 0;
  piVar6 = (int *)param_1[2];
  *(undefined1 *)((int)param_1 + 0x73a1) = 0;
  *(undefined1 *)((int)param_1 + 0x73a2) = 0;
  *(undefined1 *)((int)param_1 + 0x73a3) = 0;
  *(undefined1 *)(param_1 + 0x1ce9) = 0;
  param_1[0x1fb7] = param_3;
  __mutex_init(param_1 + 0x1cde,DAT_000128b4,DAT_000128b0);
  __mutex_init(param_1 + 0x1ce1,DAT_000128b8,DAT_000128b0);
  __mutex_init(param_1 + 0x1ce4,DAT_000128bc,DAT_000128b0);
  param_1[0x1c69] = 0;
  param_1[0x1c6a] = 0;
  iVar2 = DAT_000128c0;
  param_1[0x1cdd] = 0;
  *(undefined1 *)(param_1 + 0x200c) = 0;
  param_1[0x1c6f] = iVar2;
  param_1[0x1c70] = DAT_000128c4;
  param_1[0x1c71] = DAT_000128c8;
  param_1[0x1fb6] = DAT_000128cc;
  param_1[0x1ffc] = 0;
  param_1[0x200f] = 0;
  param_1[0x2010] = 0;
  param_1[0x2013] = 0;
  param_1[0x2011] = 0;
  *(undefined2 *)(param_1 + 0x200d) = 0;
  param_1[0x200e] = 0;
  if (param_1[0x1cdb] == 7) {
    param_1[0x1fb6] = DAT_000128d0;
LAB_00012636:
    rkcif_stream_init(param_1,0);
    rkcif_stream_init(param_1,1);
    rkcif_stream_init(param_1,2);
    uVar5 = 3;
  }
  else if ((5 < param_1[0x1cdb]) || (param_1[0x1fb7] == 1)) goto LAB_00012636;
  rkcif_stream_init(param_1,uVar5);
  if ((param_1[0x1cdb] - 9U < 2) || (param_1[0x1cdb] == 0xb)) {
    rkcif_init_scale_vdev(param_1,0);
    rkcif_init_scale_vdev(param_1,1);
    rkcif_init_scale_vdev(param_1,2);
    rkcif_init_scale_vdev(param_1,3);
    rkcif_init_tools_vdev(param_1,0);
    rkcif_init_tools_vdev(param_1,1);
    rkcif_init_tools_vdev(param_1,2);
  }
  param_1[0x1ce7] = 1;
  *(undefined1 *)((int)param_1 + 0x8033) = 1;
  if (param_1[0x1cdb] == 10) {
    *(undefined1 *)((int)param_1 + 0x8033) = 0;
  }
  iVar2 = piVar6[0xb];
  if (iVar2 == 0) {
    iVar2 = *piVar6;
  }
  piVar8 = param_1 + 0x18;
  strlcpy(param_1 + 0x1a,iVar2,0x20);
  piVar9 = param_1 + 7;
  uVar1 = of_alias_get_id(param_2,DAT_000128d4);
  piVar7 = param_1 + 3;
  if (uVar1 < 6) {
    param_1[0x1ffd] = uVar1;
  }
  else {
    param_1[0x1ffd] = 0;
  }
  param_1[0x18] = (int)piVar6;
  param_1[4] = (int)piVar8;
  iVar2 = piVar6[0xb];
  if (iVar2 == 0) {
    iVar2 = *piVar6;
  }
  strlcpy(piVar9,iVar2,0x24);
  iVar2 = v4l2_device_register(param_1[2],piVar7);
  if (iVar2 < 0) {
    return iVar2;
  }
  media_device_init(piVar8);
  iVar2 = __media_device_register(piVar8,DAT_000128d8);
  if (iVar2 < 0) {
    printk(DAT_000128dc,piVar9,iVar2);
    goto LAB_0001272c;
  }
  if ((param_1[0x1cdb] < 6) && (param_1[0x1fb7] != 1)) {
    uVar5 = 1;
    iVar2 = rkcif_register_stream_vdevs(param_1,1,0);
  }
  else {
    uVar5 = 4;
    iVar2 = rkcif_register_stream_vdevs(param_1,4,1);
  }
  if (iVar2 < 0) {
    iVar2 = -0x16;
    _dev_err(param_1[2],DAT_000128e0,uVar5);
  }
  else {
    if ((param_1[0x1cdb] - 9U < 2) || (param_1[0x1cdb] == 0xb)) {
      iVar2 = rkcif_register_scale_vdevs(param_1,4,1);
      uVar3 = DAT_000128e4;
      uVar4 = uVar5;
      if (-1 < iVar2) {
        iVar2 = rkcif_register_tools_vdevs(param_1,3,1);
        if (-1 < iVar2) goto LAB_000127fa;
        uVar3 = DAT_000128e8;
        uVar4 = 3;
      }
      _dev_err(param_1[2],uVar3,uVar4);
    }
    else {
LAB_000127fa:
      uVar3 = DAT_000128ec;
      param_1[0x2002] = 0;
      __init_swait_queue_head(param_1 + 0x2003,uVar3,DAT_000128b0);
      uVar1 = kthread_create_on_node(DAT_000128f4,param_1,0xffffffff,DAT_000128f0);
      if (uVar1 < 0xfffff001) {
        wake_up_process();
      }
      iVar2 = param_1[2];
      piVar6 = param_1 + 0x7c;
      v4l2_async_notifier_init(piVar6);
      iVar2 = v4l2_async_notifier_parse_fwnode_endpoints(iVar2,piVar6,0x28,DAT_000128f8);
      if (iVar2 < 0) {
        printk(DAT_00012900,piVar9,DAT_000128fc);
      }
      else {
        param_1[0x7c] = DAT_00012908;
        iVar2 = v4l2_async_notifier_register(piVar7,piVar6);
        if (-1 < iVar2) {
          if ((param_1[0x1cdb] - 6U < 2) || (param_1[0x1cdb] == 8)) {
            rkcif_register_luma_vdev(param_1 + 0x1d12,piVar7,param_1);
          }
          iVar2 = DAT_0001290c;
          mutex_lock(DAT_0001290c);
          piVar6 = *(int **)(iVar2 + 0x10);
          *(int **)(iVar2 + 0x10) = param_1;
          *param_1 = iVar2 + 0xc;
          param_1[1] = (int)piVar6;
          *piVar6 = (int)param_1;
          mutex_unlock(iVar2);
          return 0;
        }
      }
      printk(DAT_00012904,piVar9,iVar2);
    }
    rkcif_unregister_stream_vdevs(param_1,uVar5);
    if ((param_1[0x1cdb] - 9U < 2) || (param_1[0x1cdb] == 0xb)) {
      rkcif_unregister_scale_vdevs(param_1,4);
      rkcif_unregister_tools_vdevs(param_1,3);
    }
  }
  media_device_unregister(piVar8);
LAB_0001272c:
  v4l2_device_unregister(piVar7);
  return iVar2;
}



/* ===== rkcif_plat_uninit @ 00012910 size=104 ===== */

undefined4 rkcif_plat_uninit(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x34c) + 4) == 4) {
    rkcif_unregister_lvds_subdev();
  }
  if (*(int *)(*(int *)(param_1 + 0x34c) + 4) - 1U < 2) {
    rkcif_unregister_dvp_sof_subdev(param_1);
  }
  media_device_unregister(param_1 + 0x60);
  v4l2_device_unregister(param_1 + 0xc);
  if (*(int *)(param_1 + 0x736c) < 6) {
    if (*(int *)(param_1 + 0x7edc) == 1) {
      uVar1 = 4;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 4;
  }
  rkcif_unregister_stream_vdevs(param_1,uVar1);
  if (*(int *)(param_1 + 0x736c) == 10) {
    rkcif_rockit_dev_deinit();
  }
  return 0;
}



/* ===== rkcif_plat_remove @ 00012978 size=48 ===== */

undefined4 rkcif_plat_remove(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  rkcif_plat_uninit(iVar1);
  rkcif_detach_hw(iVar1);
  rkcif_proc_cleanup(iVar1);
  sysfs_remove_group(param_1 + 0x10,DAT_000129a8);
  del_timer(iVar1 + 0x7f50);
  return 0;
}



/* ===== list_del @ 000129b0 size=22 ===== */

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



/* ===== get_data_type @ 000129c6 size=192 ===== */

undefined4 get_data_type(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 < 0x3003) {
    if ((param_1 < 0x3001) && (param_1 != 0x2001)) {
      if (0x2001 < param_1) {
        if (param_1 < 0x2006) {
          return 0x2b;
        }
        if (0x2009 < param_1) {
          if (param_1 == 0x2013) {
            uVar1 = 0x2c;
          }
          else {
            uVar1 = 0x2b;
          }
          return uVar1;
        }
        return 0x1e;
      }
      if (param_1 != 0x1013) {
        if (param_1 == 0x1017) {
          if (param_3 != 0) {
            if (param_2 == 0) {
              uVar1 = 0xe;
            }
            else {
              uVar1 = 0x39;
            }
            return uVar1;
          }
          return 0x22;
        }
        if (param_1 != 0x100a) {
          return 0x2b;
        }
      }
      if (param_3 != 0) {
        if (param_2 == 0) {
          uVar1 = 0x3e;
        }
        else {
          uVar1 = 0x39;
        }
        return uVar1;
      }
      return 0x24;
    }
  }
  else {
    if (0x3014 < param_1) {
      if (param_1 != 0x5002) {
        if (param_1 == 0x5003) {
          uVar1 = 0x2f;
        }
        else {
          uVar1 = 0x2b;
        }
        return uVar1;
      }
      return 0x12;
    }
    if (param_1 < 0x3013) {
      if (param_1 == 0x3008) {
        return 0x2c;
      }
      if (param_1 < 0x3008) {
        return 0x2b;
      }
      if (param_1 < 0x3010) {
        uVar1 = 0x2b;
      }
      else {
        uVar1 = 0x2c;
      }
      return uVar1;
    }
  }
  return 0x2a;
}



/* ===== get_reg_index_of_id_ctrl0 @ 00012a86 size=14 ===== */

undefined1 get_reg_index_of_id_ctrl0(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 - 1U < 3) {
    uVar1 = *(undefined1 *)(DAT_00012a94 + (param_1 - 1U));
  }
  else {
    uVar1 = 0x30;
  }
  return uVar1;
}



/* ===== get_reg_index_of_frm0_y_addr @ 00012a98 size=16 ===== */

undefined1 get_reg_index_of_frm0_y_addr(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 - 1U < 3) {
    uVar1 = *(undefined1 *)(DAT_00012aa8 + (param_1 - 1U) + 3);
  }
  else {
    uVar1 = 0x3a;
  }
  return uVar1;
}



/* ===== get_reg_index_of_frm1_y_addr @ 00012aac size=16 ===== */

undefined1 get_reg_index_of_frm1_y_addr(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 - 1U < 3) {
    uVar1 = *(undefined1 *)(DAT_00012abc + (param_1 - 1U) + 6);
  }
  else {
    uVar1 = 0x3b;
  }
  return uVar1;
}



/* ===== get_dvp_reg_index_of_frm0_y_addr @ 00012ac0 size=16 ===== */

undefined1 get_dvp_reg_index_of_frm0_y_addr(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 - 1U < 3) {
    uVar1 = *(undefined1 *)(DAT_00012ad0 + (param_1 - 1U) + 9);
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}



/* ===== get_dvp_reg_index_of_frm0_uv_addr @ 00012ad4 size=16 ===== */

undefined1 get_dvp_reg_index_of_frm0_uv_addr(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 - 1U < 3) {
    uVar1 = *(undefined1 *)(DAT_00012ae4 + (param_1 - 1U) + 0xc);
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}



/* ===== get_dvp_reg_index_of_frm1_uv_addr @ 00012ae8 size=16 ===== */

undefined1 get_dvp_reg_index_of_frm1_uv_addr(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 - 1U < 3) {
    uVar1 = *(undefined1 *)(DAT_00012af8 + (param_1 - 1U) + 0xf);
  }
  else {
    uVar1 = 10;
  }
  return uVar1;
}



/* ===== rkcif_is_extending_line_for_height @ 00012afc size=188 ===== */

void rkcif_is_extending_line_for_height(int param_1,byte *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 auStack_ac [136];
  int local_24;
  
  piVar1 = DAT_00012bb8;
  local_24 = *DAT_00012bb8;
  if (*(int *)(param_1 + 0x736c) - 6U < 2) {
    iVar3 = *(int *)(param_1 + 0x350);
    if (iVar3 != 0) {
      if ((**(int **)(iVar3 + 0x68) != 0) &&
         (pcVar4 = *(code **)(**(int **)(iVar3 + 0x68) + 0x18), pcVar4 != (code *)0x0)) {
        if ((*DAT_00012bbc == 0) ||
           (pcVar5 = *(code **)(*DAT_00012bbc + 0x18), pcVar5 == (code *)0x0)) {
          iVar3 = (*pcVar4)(iVar3,DAT_00012bc0,auStack_ac);
        }
        else {
          iVar3 = (*pcVar5)(iVar3,DAT_00012bc0,auStack_ac);
        }
        if (iVar3 == 0) {
          memcpy((void *)(param_1 + 0x73a1),auStack_ac,0x88);
          goto LAB_00012b60;
        }
      }
      *(undefined1 *)(param_1 + 0x73a1) = 0;
      *(undefined1 *)(param_1 + 0x73a2) = 0;
      *(undefined1 *)(param_1 + 0x73a3) = 0;
      *(undefined1 *)(param_1 + 0x73a4) = 0;
    }
LAB_00012b60:
    if ((param_3 != 0) && (*(int *)(param_3 + 0x10) == 1)) {
      iVar3 = *(int *)(param_1 + 0x73a1);
      if (iVar3 == 5) {
        bVar2 = *param_2 & 7;
        bVar6 = bVar2 == 1;
      }
      else {
        bVar2 = 1;
        if (iVar3 != 6) {
          if (iVar3 == 0) goto LAB_00012b1c;
          goto LAB_00012b1a;
        }
        bVar6 = (*param_2 & 7) == 2;
      }
      if (bVar6) goto LAB_00012b1c;
    }
  }
LAB_00012b1a:
  bVar2 = 0;
LAB_00012b1c:
  if (local_24 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}



/* ===== rkcif_sync_crop_info @ 00012bc4 size=276 ===== */

void rkcif_sync_crop_info(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar5 + 0x350);
  if (iVar1 != 0) {
    local_48 = 2;
    local_50 = 1;
    uStack_4c = 0;
    iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    if ((iVar2 != 0) && (pcVar3 = *(code **)(iVar2 + 0x18), pcVar3 != (code *)0x0)) {
      if ((*(int *)(DAT_00012cd8 + 0x1c) == 0) ||
         (pcVar4 = *(code **)(*(int *)(DAT_00012cd8 + 0x1c) + 0x18), pcVar4 == (code *)0x0)) {
        iVar1 = (*pcVar3)(iVar1,0,&local_50);
      }
      else {
        iVar1 = (*pcVar4)(iVar1,0,&local_50);
      }
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x64c) = local_40;
        *(undefined4 *)(param_1 + 0x650) = uStack_3c;
        *(undefined4 *)(param_1 + 0x654) = uStack_38;
        *(undefined4 *)(param_1 + 0x658) = uStack_34;
        *(undefined1 *)(param_1 + 0xbf9) = 1;
        *(uint *)(param_1 + 0x528) = *(uint *)(param_1 + 0x528) | 1;
        *(undefined4 *)(iVar5 + 0x3a0) = local_50;
        *(undefined4 *)(iVar5 + 0x3a4) = uStack_4c;
        *(undefined4 *)(iVar5 + 0x3a8) = local_48;
        *(undefined4 *)(iVar5 + 0x3ac) = uStack_44;
        *(undefined4 *)(iVar5 + 0x3b0) = local_40;
        *(undefined4 *)(iVar5 + 0x3b4) = uStack_3c;
        *(undefined4 *)(iVar5 + 0x3b8) = uStack_38;
        *(undefined4 *)(iVar5 + 0x3bc) = uStack_34;
        *(undefined4 *)(iVar5 + 0x3c0) = local_30;
        *(undefined4 *)(iVar5 + 0x3c4) = uStack_2c;
        *(undefined4 *)(iVar5 + 0x3c8) = uStack_28;
        *(undefined4 *)(iVar5 + 0x3cc) = uStack_24;
        *(undefined4 *)(iVar5 + 0x3d0) = local_20;
        *(undefined4 *)(iVar5 + 0x3d4) = uStack_1c;
        *(undefined4 *)(iVar5 + 0x3d8) = uStack_18;
        *(undefined4 *)(iVar5 + 0x3dc) = uStack_14;
        goto LAB_00012c3c;
      }
    }
    *(undefined4 *)(iVar5 + 0x3b0) = *(undefined4 *)(iVar5 + 0x390);
    *(undefined4 *)(iVar5 + 0x3b4) = *(undefined4 *)(iVar5 + 0x394);
    *(undefined4 *)(iVar5 + 0x3b8) = *(undefined4 *)(iVar5 + 0x398);
    *(undefined4 *)(iVar5 + 0x3bc) = *(undefined4 *)(iVar5 + 0x39c);
  }
LAB_00012c3c:
  uVar6 = *(uint *)(param_1 + 0x528);
  if (((uVar6 & 3) == 3) &&
     ((*(uint *)(param_1 + 0x654) < (uint)(*(int *)(param_1 + 0x65c) + *(int *)(param_1 + 0x664)) ||
      (*(uint *)(param_1 + 0x658) < (uint)(*(int *)(param_1 + 0x660) + *(int *)(param_1 + 0x668)))))
     ) {
    *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x64c);
    *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_1 + 0x650);
    *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_1 + 0x654);
    *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_1 + 0x658);
  }
  if ((uVar6 & 2) == 0) {
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x64c);
    *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x650);
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x654);
    *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(param_1 + 0x658);
  }
  else {
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x65c);
    *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x660);
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x664);
    *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(param_1 + 0x668);
    if ((int)(uVar6 << 0x1f) < 0) {
      *(int *)(param_1 + 0x63c) = *(int *)(param_1 + 0x65c) + *(int *)(param_1 + 0x64c);
      *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x660) + *(int *)(param_1 + 0x650);
    }
  }
  return;
}



/* ===== rkcif_lvds_subdev_link_setup @ 00012cdc size=4 ===== */

undefined4 rkcif_lvds_subdev_link_setup(void)

{
  return 0;
}



/* ===== rkcif_lvds_sd_s_stream @ 00012ce0 size=12 ===== */

undefined4 rkcif_lvds_sd_s_stream(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  return 0;
}



/* ===== rkcif_lvds_sd_s_power @ 00012cec size=4 ===== */

undefined4 rkcif_lvds_sd_s_power(void)

{
  return 0;
}



/* ===== rkcif_align_bits_per_pixel @ 00012cf0 size=422 ===== */

uint rkcif_align_bits_per_pixel(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 == DAT_00012e98) goto LAB_00012d3a;
  if (uVar4 < DAT_00012e98) {
    if (uVar4 == DAT_00012e98 + 0xfdf00efc) goto LAB_00012e6e;
    if (uVar4 < DAT_00012e98 + 0xfdf00efc) {
      if (uVar4 == DAT_00012e9c) goto LAB_00012d3a;
      if (uVar4 < DAT_00012e9c) {
        if (uVar4 == DAT_00012e9c + 0xf000f017) goto LAB_00012d3a;
        if (uVar4 == DAT_00012e9c + 0xf004f017) goto LAB_00012e6e;
        uVar2 = DAT_00012e9c + 0xeffef017;
      }
      else {
        if ((uVar4 == DAT_00012ea0) || (uVar2 = DAT_00012ea0 + 0x10, uVar4 == uVar2))
        goto LAB_00012d3a;
LAB_00012d74:
        uVar2 = uVar2 - 0x50b;
      }
    }
    else {
      if (uVar4 == DAT_00012ea4) goto LAB_00012d3a;
      if (uVar4 < DAT_00012ea4) {
        if ((uVar4 == DAT_00012ea4 - 0xf90105) || (uVar4 == DAT_00012ea4 - 0x105))
        goto LAB_00012d3a;
        uVar2 = DAT_00012ea4 - 0xfaebf9;
LAB_00012da4:
        if (uVar4 == uVar2) goto LAB_00012e6e;
        goto LAB_00012da8;
      }
      if (uVar4 == DAT_00012eac) goto LAB_00012d3a;
      if (uVar4 < DAT_00012eac) {
        uVar2 = DAT_00012eac - 0x10;
      }
      else {
        if (uVar4 == DAT_00012eb0) goto LAB_00012e6e;
        uVar2 = DAT_00012eb0 + 0x2102f4;
      }
    }
  }
  else {
    if (uVar4 == DAT_00012eb4) goto LAB_00012d3a;
    if (DAT_00012eb4 <= uVar4) {
      if (uVar4 != DAT_00012ec4) {
        if (uVar4 < DAT_00012ec4) {
          if ((uVar4 == DAT_00012ec4 + 0xf2f8f0e9) || (uVar4 == DAT_00012ec4 + 0xfae8f0f9))
          goto LAB_00012d3a;
          uVar2 = DAT_00012ec4 + 0xf1f8f0f9;
          goto LAB_00012d74;
        }
        if (uVar4 == DAT_00012ec8) goto LAB_00012e6e;
        uVar2 = DAT_00012ecc;
        if (DAT_00012ec8 <= uVar4) {
          if (uVar4 == DAT_00012ed0) goto LAB_00012e62;
          uVar2 = DAT_00012ed0 + 0xffff;
        }
        if (uVar4 != uVar2) goto LAB_00012da8;
      }
LAB_00012e62:
      if (8 < *(int *)(*(int *)(param_1 + 4) + 0x736c)) {
        return (uint)*(byte *)(param_2 + param_3 + 1);
      }
LAB_00012e6e:
      return (uint)*(byte *)(param_2 + param_3);
    }
    if (uVar4 == DAT_00012eb4 + 0xeeef0000) goto LAB_00012d3a;
    if (uVar4 < DAT_00012eb4 + 0xeeef0000) {
      if ((uVar4 == DAT_00012eb4 + 0xeeeef000) ||
         (uVar2 = DAT_00012eb8, uVar4 == DAT_00012eb4 + 0xeeeef50b)) goto LAB_00012d3a;
    }
    else {
      if (uVar4 == DAT_00012ebc) goto LAB_00012d3a;
      if (uVar4 < DAT_00012ebc) {
        uVar2 = DAT_00012ebc - 0x12fa05;
        goto LAB_00012da4;
      }
      if (uVar4 == DAT_00012ec0) goto LAB_00012d3a;
      uVar2 = DAT_00012ec0 + 0xa03050d;
    }
  }
  if (uVar4 == uVar2) {
LAB_00012d3a:
    uVar4 = (uint)*(byte *)(param_2 + param_3);
    if (*(int *)(*(int *)(param_1 + 4) + 0x736c) < 6) {
      uVar2 = 0x10;
      if (uVar4 < 0x10) {
        uVar4 = 0x10;
      }
    }
    else {
      uVar2 = 8;
      if (uVar4 < 8) {
        uVar4 = 8;
      }
    }
    iVar3 = 4;
    uVar1 = uVar2;
    do {
      if (uVar4 <= uVar1) {
        return uVar1;
      }
      iVar3 = iVar3 + -1;
      uVar1 = uVar1 + uVar2;
    } while (iVar3 != 0);
    return uVar4;
  }
LAB_00012da8:
  printk(DAT_00012ea8,*(int *)(param_1 + 4) + 0x1c,uVar4);
  return 0;
}



/* ===== rkcif_queue_setup @ 00012ed4 size=182 ===== */

undefined4 rkcif_queue_setup(int *param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = param_1[10];
  iVar9 = iVar4 + 0x57c;
  iVar8 = *(int *)(iVar4 + 0x574);
  iVar7 = *(int *)(iVar4 + 4);
  uVar3 = *(undefined4 *)(iVar4 + 0x578);
  *param_3 = (uint)*(byte *)(iVar8 + 0x15);
  if (*(char *)(iVar4 + 0xbf9) == '\0') {
    iVar6 = *(int *)(iVar4 + 0x580);
  }
  else {
    iVar6 = *(int *)(iVar4 + 0x648);
  }
  iVar1 = rkcif_is_extending_line_for_height(iVar7,iVar4,uVar3);
  if ((iVar1 != 0) && (*(char *)(iVar4 + 0x740) != '\0')) {
    iVar6 = *(int *)(iVar4 + 0x684);
    iVar9 = iVar4 + 0x680;
  }
  for (uVar5 = 0; uVar5 < *(byte *)(iVar8 + 0x15); uVar5 = uVar5 + 1) {
    iVar2 = __aeabi_uidiv(*(undefined4 *)(uVar5 * 0x14 + iVar9 + 0x14),iVar6);
    param_4[uVar5] = ((iVar6 - 1U | 0xf) + 1) * iVar2;
  }
  if (0 < *DAT_00012f8c) {
    printk(DAT_00012f94,iVar7 + 0x1c,*(undefined4 *)(DAT_00012f90 + *param_1 * 4),*param_2,*param_4,
           iVar1,*(undefined1 *)(iVar4 + 0x740));
  }
  return 0;
}



/* ===== div_u64 @ 00012f98 size=34 ===== */

undefined8 div_u64(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 uVar2;
  undefined4 extraout_r3;
  
  if (param_2 == 0) {
    uVar1 = __aeabi_uidiv(param_1,param_3);
    uVar2 = 0;
  }
  else {
    __do_div64();
    uVar1 = extraout_r2;
    uVar2 = extraout_r3;
  }
  return CONCAT44(uVar2,uVar1);
}



/* ===== rkcif_csi_set_lvds_sav_eav @ 00012fba size=270 ===== */

void rkcif_csi_set_lvds_sav_eav(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  bool bVar11;
  
  uVar8 = DAT_000130c8;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x73a1);
  if ((iVar4 == 0) || (iVar4 == 7)) {
    puVar9 = (ushort *)(param_2 + 0x28);
    puVar10 = puVar9;
    goto LAB_00012fd8;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    if ((iVar4 != 5) && (puVar9 = (ushort *)(param_2 + 0x38), iVar4 != 6)) goto LAB_0001309e;
LAB_0001308c:
    puVar9 = (ushort *)(param_2 + 0x38);
  }
  else if (iVar4 == 5) {
    bVar11 = bVar1 == 1;
LAB_00013098:
    if (!bVar11) goto LAB_0001308c;
    puVar9 = (ushort *)(param_2 + 0x58);
  }
  else if (iVar4 == 6) {
    if (bVar1 != 1) {
      bVar11 = bVar1 == 2;
      goto LAB_00013098;
    }
    puVar9 = (ushort *)(param_2 + 0x48);
  }
  else {
    puVar9 = (ushort *)0x0;
  }
LAB_0001309e:
  puVar10 = puVar9 + 4;
LAB_00012fd8:
  if ((puVar9 != (ushort *)0x0) && (puVar10 != (ushort *)0x0)) {
    uVar5 = *param_2 - 1;
    if (uVar5 < 3) {
      uVar6 = uVar5 + DAT_000130cc;
      pbVar2 = param_2;
    }
    else {
      uVar6 = uVar5;
      pbVar2 = (byte *)0x68;
    }
    if (uVar5 < 3) {
      pbVar2 = (byte *)(uint)*(byte *)(uVar6 + 0x12);
    }
    rkcif_write_register
              (*(int *)(param_1 + 4),pbVar2,DAT_000130c8 & (uint)puVar9[1] << 0x10 | *puVar9 & 0xfff
              );
    uVar5 = DAT_000130c8;
    uVar6 = *param_2 - 1;
    if (uVar6 < 3) {
      uVar7 = uVar6 + DAT_000130cc;
      uVar3 = extraout_r1;
    }
    else {
      uVar3 = 0x69;
      uVar7 = uVar6;
    }
    if (uVar6 < 3) {
      uVar3 = (uint)*(byte *)(uVar7 + 0x15);
    }
    rkcif_write_register
              (*(undefined4 *)(param_1 + 4),uVar3,
               puVar9[2] & 0xfff | uVar8 & (uint)puVar9[3] << 0x10);
    uVar8 = *param_2 - 1;
    if (uVar8 < 3) {
      uVar3 = uVar8 + DAT_000130cc;
      uVar6 = extraout_r1_00;
    }
    else {
      uVar6 = 0x6a;
      uVar3 = uVar8;
    }
    if (uVar8 < 3) {
      uVar6 = (uint)*(byte *)(uVar3 + 0x18);
    }
    rkcif_write_register
              (*(undefined4 *)(param_1 + 4),uVar6,
               uVar5 & (uint)puVar10[1] << 0x10 | *puVar10 & 0xfff);
    uVar8 = *param_2 - 1;
    if (uVar8 < 3) {
      uVar3 = uVar8 + DAT_000130cc;
      uVar6 = extraout_r1_01;
    }
    else {
      uVar6 = 0x6b;
      uVar3 = uVar8;
    }
    if (uVar8 < 3) {
      uVar6 = (uint)*(byte *)(uVar3 + 0x1b);
    }
    rkcif_write_register
              (*(undefined4 *)(param_1 + 4),uVar6,
               puVar10[2] & 0xfff | uVar5 & (uint)puVar10[3] << 0x10);
    return;
  }
  return;
}



/* ===== rkcif_assign_new_buffer_init_toisp @ 000130d0 size=188 ===== */

void rkcif_assign_new_buffer_init_toisp(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  int extraout_r2_00;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(*(int *)(iVar2 + 0x34c) + 4) - 4U < 3) {
    uVar1 = get_reg_index_of_frm0_y_addr();
    uVar4 = get_reg_index_of_frm1_y_addr(extraout_r2,uVar1);
  }
  else {
    uVar1 = get_dvp_reg_index_of_frm0_y_addr(param_2,param_2,param_2);
    if (extraout_r2_00 < 4) {
      uVar4 = CONCAT44(uVar1,(uint)*(byte *)(extraout_r2_00 + DAT_0001318c + 0x1e));
    }
    else {
      uVar4 = CONCAT44(uVar1,7);
    }
  }
  uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
  disableIRQinterrupts();
  if ((*(int *)(param_1 + 0x53c) == 0) && (*(int *)(param_1 + 0xba8) != param_1 + 0xba8)) {
    iVar3 = *(int *)(param_1 + 0xba8) + -4;
    if (iVar3 != 0) {
      list_del(*(int *)(param_1 + 0xba8),uVar1);
      *(int *)(param_1 + 0x53c) = iVar3;
      uVar1 = extraout_r1;
    }
  }
  if (*(int *)(param_1 + 0x53c) != 0) {
    rkcif_write_register(iVar2,uVar1,*(undefined4 *)(*(int *)(param_1 + 0x53c) + 0x54));
  }
  if (*(int *)(param_1 + 0x540) == 0) {
    if ((*(int *)(param_1 + 0xba8) == param_1 + 0xba8) || (*(int *)(param_1 + 0xba8) == 4)) {
      *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x53c);
    }
    else {
      list_del();
      *(undefined4 *)(param_1 + 0x540) = extraout_r1_00;
    }
  }
  if (*(int *)(param_1 + 0x540) != 0) {
    rkcif_write_register(iVar2,(int)uVar4,*(undefined4 *)(*(int *)(param_1 + 0x540) + 0x54));
  }
  *(undefined4 *)(param_1 + 0x794) = 2;
  return;
}



/* ===== rkcif_assign_new_buffer_oneframe @ 00013190 size=420 ===== */

undefined4
rkcif_assign_new_buffer_oneframe(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(iVar5 + 0x7ed4);
  disableIRQinterrupts();
  if (param_2 != 1) {
    iVar3 = *(int *)(param_1 + 0x520);
    if (*(int *)(param_1 + 0x52c) == param_1 + 0x52c) {
      if (*(int *)(iVar6 + 0x194) != 0) {
        iVar4 = 0;
        if (iVar3 == 1) {
          *(undefined4 *)(param_1 + 0x534) = 0;
        }
        else if (iVar3 == 2) {
          *(undefined4 *)(param_1 + 0x538) = 0;
          goto LAB_0001329c;
        }
      }
LAB_000132c4:
      iVar4 = 0;
    }
    else if (iVar3 == 1) {
      *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x52c) + -0x280;
      list_del();
      iVar4 = *(int *)(param_1 + 0x534);
    }
    else {
      if (iVar3 != 2) goto LAB_000132c4;
      *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x52c) + -0x280;
      list_del();
      iVar4 = *(int *)(param_1 + 0x538);
    }
LAB_0001329c:
    if (*(int *)(param_1 + 0x520) == 2) {
      uVar1 = 10;
      uVar2 = 9;
    }
    else {
      uVar1 = 8;
      uVar2 = 7;
    }
    if (iVar4 == 0) {
      if (*(int *)(iVar6 + 0x194) == 0) {
        uVar1 = 0xffffffea;
      }
      else {
        rkcif_write_register
                  (iVar5,uVar2,*(undefined4 *)(iVar6 + 0x188),*(int *)(iVar6 + 0x194),param_4);
        rkcif_write_register(iVar5,uVar1,*(undefined4 *)(iVar6 + 0x188));
        uVar1 = 0;
      }
      if (*DAT_00013334 < 1) {
        return uVar1;
      }
      printk(DAT_00013338,iVar5 + 0x1c);
      return uVar1;
    }
    rkcif_write_register
              (iVar5,uVar2,*(undefined4 *)(iVar4 + 0x288),*(int *)(param_1 + 0x520),param_4);
    uVar2 = *(undefined4 *)(iVar4 + 0x28c);
    goto LAB_0001322e;
  }
  if ((*(int *)(param_1 + 0x534) == 0) && (*(int *)(param_1 + 0x52c) != param_1 + 0x52c)) {
    *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x52c) + -0x280;
    list_del();
  }
  iVar3 = *(int *)(param_1 + 0x534);
  if (iVar3 == 0) {
    if (*(int *)(iVar6 + 0x194) != 0) {
      rkcif_write_register(iVar5,7,*(undefined4 *)(iVar6 + 0x188),*(int *)(iVar6 + 0x194),param_4);
      uVar1 = *(undefined4 *)(iVar6 + 0x188);
      goto LAB_000131e4;
    }
  }
  else {
    rkcif_write_register(iVar5,7,*(undefined4 *)(iVar3 + 0x288),iVar3,param_4);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x534) + 0x28c);
LAB_000131e4:
    rkcif_write_register(iVar5,8,uVar1);
  }
  if ((*(int *)(param_1 + 0x538) == 0) && (*(int *)(param_1 + 0x52c) != param_1 + 0x52c)) {
    *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x52c) + -0x280;
    list_del();
  }
  if (*(int *)(param_1 + 0x538) == 0) {
    if (*(int *)(iVar6 + 0x194) == 0) {
      return 0;
    }
    rkcif_write_register(iVar5,9,*(undefined4 *)(iVar6 + 0x188));
    uVar2 = *(undefined4 *)(iVar6 + 0x188);
  }
  else {
    rkcif_write_register(iVar5,9,*(undefined4 *)(*(int *)(param_1 + 0x538) + 0x288));
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x538) + 0x28c);
  }
  uVar1 = 10;
LAB_0001322e:
  rkcif_write_register(iVar5,uVar1,uVar2);
  return 0;
}



/* ===== rkcif_is_csi2_err_trigger_reset @ 0001333c size=176 ===== */

undefined1
rkcif_is_csi2_err_trigger_reset
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  disableIRQinterrupts();
  bVar1 = false;
  if ((*(int *)(param_1 + 0x38) == 0) || (bVar1 = false, *(int *)(param_1 + 0x3c) == 0)) {
LAB_0001337e:
    if (*(int *)(param_1 + 0x60) != 0) {
      lVar5 = ktime_get();
      lVar5 = lVar5 - *(longlong *)(param_1 + 0x70);
      uVar4 = div_u64((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),DAT_000133f0);
      uVar2 = DAT_000133f4;
      if (((int)((ulonglong)uVar4 >> 0x20) != 0 || *(uint *)(param_1 + 0x5c) <= (uint)uVar4) ||
         ((!bVar1 &&
          ((uVar2 = DAT_000133f8, *(int *)(param_1 + 0x3c) == 0 || (*(int *)(param_1 + 0x38) == 0)))
          ))) goto LAB_000133aa;
    }
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x84) = 1;
    iVar3 = *(int *)(param_1 + 0x60) + 1;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 == 1) {
      uVar4 = ktime_get();
      *(undefined8 *)(param_1 + 0x70) = uVar4;
      uVar2 = extraout_r3;
    }
    printk(DAT_000133ec,param_1 + -0x7f34,*(undefined4 *)(param_1 + 0x60),uVar2,param_4);
    if (iVar3 != 1) {
      bVar1 = true;
      goto LAB_0001337e;
    }
  }
  uVar2 = DAT_000133fc;
  if ((*(char *)(param_1 + -0x6f6b) == '\0') && (*(uint *)(param_1 + -0x73f0) < 3)) {
    return 0;
  }
LAB_000133aa:
  printk(uVar2,param_1 + -0x7f34);
  return 1;
}



/* ===== rkcif_deal_readout_time @ 00013400 size=236 ===== */

void rkcif_deal_readout_time(byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar6 = *(int *)(param_1 + 4);
  disableIRQinterrupts();
  lVar8 = ktime_get();
  puVar4 = (uint *)(param_1 + 0x750);
  *(longlong *)puVar4 = lVar8;
  if (*(int *)(iVar6 + 0x7edc) == 0) {
    return;
  }
  if ((*param_1 & 7) == 0) {
    *(longlong *)(iVar6 + 0xb48) = lVar8 - *(longlong *)(param_1 + 0x748);
  }
  iVar2 = *(int *)(iVar6 + 0x73a1);
  if (((iVar2 == 0) || (iVar2 == 7)) && ((*param_1 & 7) == 0)) {
    uVar3 = *puVar4;
    iVar2 = *(int *)(param_1 + 0x754);
    uVar1 = *(uint *)(param_1 + 0x758);
    iVar5 = *(int *)(param_1 + 0x75c);
    *(uint *)(iVar6 + 0xb50) = uVar3 - uVar1;
    *(uint *)(iVar6 + 0xb54) = (iVar2 - iVar5) - (uint)(uVar3 < uVar1);
  }
  else {
    if (iVar2 == 5) {
      bVar7 = (*param_1 & 7) == 1;
    }
    else {
      if (iVar2 != 6) goto LAB_00013472;
      bVar7 = (*param_1 & 7) == 2;
    }
    if (bVar7) {
      iVar5 = *(int *)(param_1 + 0x754);
      uVar1 = *puVar4;
      iVar2 = *(int *)(param_1 + 0x75c);
      uVar3 = *(uint *)(param_1 + 0x758);
      *(uint *)(iVar6 + 0xb50) = uVar1 - uVar3;
      *(uint *)(iVar6 + 0xb54) = (iVar5 - iVar2) - (uint)(uVar1 < uVar3);
      uVar1 = *puVar4;
      iVar2 = *(int *)(param_1 + 0x754);
      uVar3 = uVar1 + *(uint *)(iVar6 + 0xb48);
      *(uint *)(iVar6 + 0xb58) = uVar3 - *(uint *)(iVar6 + 0xb38);
      *(uint *)(iVar6 + 0xb5c) =
           ((*(int *)(iVar6 + 0xb4c) + iVar2 + (uint)CARRY4(uVar1,*(uint *)(iVar6 + 0xb48))) -
           *(int *)(iVar6 + 0xb3c)) - (uint)(uVar3 < *(uint *)(iVar6 + 0xb38));
    }
  }
LAB_00013472:
  if (param_1[0xbfe] == 0) {
    *(undefined4 *)(iVar6 + 0xb50) = 0;
    *(undefined4 *)(iVar6 + 0xb54) = 0;
  }
  return;
}



/* ===== get_lvds_remote_sensor @ 000134ec size=40 ===== */

undefined4 get_lvds_remote_sensor(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  iVar1 = media_entity_remote_pad(uVar2);
  if (iVar1 == 0) {
    printk(DAT_00013514,param_1 + 0x74);
    uVar2 = 0;
  }
  else {
    iVar1 = media_entity_remote_pad(uVar2);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  return uVar2;
}



/* ===== rkcif_lvds_g_mbus_config @ 00013518 size=62 ===== */

undefined4 rkcif_lvds_g_mbus_config(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar4;
  
  iVar1 = get_lvds_remote_sensor();
  if (iVar1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    uVar2 = DAT_0001355c;
    if ((iVar3 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x3c), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(int *)(DAT_00013558 + 0x1c) != 0) &&
         (pcVar4 = *(code **)(*(int *)(DAT_00013558 + 0x1c) + 0x3c), pcVar4 != (code *)0x0)) {
        UNRECOVERED_JUMPTABLE = pcVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x00013542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar1,0,param_3);
      return uVar2;
    }
  }
  return uVar2;
}



/* ===== rkcif_lvds_sd_set_fmt @ 00013560 size=62 ===== */

undefined4 rkcif_lvds_sd_set_fmt(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar4;
  
  iVar1 = get_lvds_remote_sensor();
  if (iVar1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    uVar2 = DAT_000135a4;
    if ((iVar3 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x10), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(int *)(DAT_000135a0 + 0x1c) != 0) &&
         (pcVar4 = *(code **)(*(int *)(DAT_000135a0 + 0x1c) + 0x10), pcVar4 != (code *)0x0)) {
        UNRECOVERED_JUMPTABLE = pcVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0001358a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar1,0,param_3);
      return uVar2;
    }
  }
  return uVar2;
}



/* ===== rkcif_s_rx_buffer @ 000135a8 size=142 ===== */

void rkcif_s_rx_buffer(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x7ee0);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x294) == '\0') {
      iVar1 = iVar1 + 0xf8;
    }
    else {
      iVar1 = iVar1 + 0x118;
    }
    iVar1 = media_entity_remote_pad(iVar1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x10);
      if ((*(int *)(param_1 + 0x8038) != 0) && (uVar4 = *(uint *)(param_2 + 0x18), uVar4 < 0xf)) {
        uVar5 = *(undefined4 *)(param_2 + 0x1c);
        uVar6 = *(undefined4 *)(param_2 + 0x3c);
        ktime_get();
        printk(DAT_00013638,param_1 + 0x1c,uVar4,uVar5,uVar6);
      }
      if (((iVar1 != 0) && (iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 0xc), iVar2 != 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x44), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        if ((*(int *)(DAT_0001363c + 0xc) != 0) &&
           (pcVar3 = *(code **)(*(int *)(DAT_0001363c + 0xc) + 0x44), pcVar3 != (code *)0x0)) {
          UNRECOVERED_JUMPTABLE = pcVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x00013622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar1,param_2,0);
        return;
      }
    }
  }
  return;
}



/* ===== rkcif_rdbk_frame_end_toisp @ 00013640 size=814 ===== */

void rkcif_rdbk_frame_end_toisp(byte *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  code *pcVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  
  iVar18 = *(int *)(param_1 + 4);
  disableIRQinterrupts();
  iVar6 = iVar18 + (*param_1 & 7) * 4;
  iVar4 = *(int *)(iVar6 + 0x7438);
  if (iVar4 == 0) {
    *(undefined4 *)(iVar6 + 0x7438) = param_2;
  }
  else {
    piVar7 = *(int **)(param_1 + 0xbac);
    *(int *)(param_1 + 0xbac) = iVar4 + 4;
    *(byte **)(iVar4 + 4) = param_1 + 0xba8;
    *(int **)(iVar4 + 8) = piVar7;
    *piVar7 = iVar4 + 4;
    *(undefined4 *)(iVar18 + ((*param_1 & 7) + 0x1d0e) * 4) = param_2;
  }
  uVar5 = DAT_00013938;
  uVar8 = DAT_0001393c;
  if ((*(int *)(iVar18 + 0x364) != 0) && (*(int *)(iVar18 + 0x360) != 0)) {
    iVar4 = __aeabi_uidiv(*(int *)(iVar18 + 0x360) * 1000);
    uVar5 = iVar4 * DAT_00013940;
    uVar8 = 0;
  }
  if (*(int *)(iVar18 + 0x73a1) != 6) {
    if (*(int *)(iVar18 + 0x73a1) != 5) {
      return;
    }
    iVar4 = *(int *)(iVar18 + 0x7438);
    if (iVar4 == 0) {
      return;
    }
    iVar6 = *(int *)(iVar18 + 0x743c);
    if (iVar6 == 0) {
      return;
    }
    uVar11 = *(uint *)(iVar4 + 0x28);
    uVar12 = *(uint *)(iVar4 + 0x2c);
    uVar9 = *(uint *)(iVar6 + 0x28);
    uVar10 = *(uint *)(iVar6 + 0x2c);
    bVar19 = uVar12 <= uVar10;
    if (uVar10 == uVar12) {
      bVar19 = uVar11 <= uVar9;
    }
    if (!bVar19) {
      printk(DAT_00013950,iVar18 + 0x1c,uVar9,uVar10,uVar11,uVar12);
      return;
    }
    uVar16 = uVar10 - uVar12;
    uVar17 = (uint)(uVar9 < uVar11);
    bVar19 = uVar16 - uVar17 <= uVar8;
    if (uVar8 == uVar16 - uVar17) {
      bVar19 = uVar9 - uVar11 <= uVar5;
    }
    if (bVar19) {
LAB_00013958:
      *(undefined4 *)(*(int *)(iVar18 + 0x743c) + 0x30) =
           *(undefined4 *)(*(int *)(iVar18 + 0x7438) + 0x30);
      rkcif_s_rx_buffer(iVar18,*(int *)(iVar18 + 0x7438) + 0x18);
      rkcif_s_rx_buffer(iVar18,*(int *)(iVar18 + 0x743c) + 0x18);
      *(undefined4 *)(iVar18 + 0x7438) = 0;
      *(undefined4 *)(iVar18 + 0x743c) = 0;
      return;
    }
    iVar4 = *(int *)(iVar18 + 0x350);
    if (((iVar4 != 0) && (iVar6 = *(int *)(*(int *)(iVar4 + 0x68) + 0xc), iVar6 != 0)) &&
       (pcVar13 = *(code **)(iVar6 + 0x30), pcVar13 != (code *)0x0)) {
      if ((*(int *)(DAT_00013948 + 0xc) == 0) ||
         (pcVar15 = *(code **)(*(int *)(DAT_00013948 + 0xc) + 0x30), pcVar15 == (code *)0x0)) {
        iVar4 = (*pcVar13)(iVar4,iVar18 + 0x35c);
      }
      else {
        iVar4 = (*pcVar15)();
      }
      if (((iVar4 == 0) && (iVar4 = *(int *)(iVar18 + 0x364), iVar4 != 0)) &&
         (iVar6 = *(int *)(iVar18 + 0x360), iVar6 != 0)) {
        iVar2 = __aeabi_uidiv(iVar6 * 1000,iVar4);
        bVar19 = uVar16 == uVar17;
        if (uVar16 == uVar17) {
          bVar19 = uVar9 - uVar11 <= (uint)(DAT_00013940 * iVar2);
        }
        if (bVar19) goto LAB_00013958;
        uVar1 = __aeabi_uidiv(iVar4,iVar6);
        goto LAB_000138be;
      }
    }
    uVar1 = 0xffffffff;
LAB_000138be:
    printk(DAT_00013954,iVar18 + 0x1c,uVar9,uVar10,uVar11,uVar12,uVar1);
    return;
  }
  iVar4 = *(int *)(iVar18 + 0x7438);
  if (iVar4 == 0) {
    return;
  }
  iVar6 = *(int *)(iVar18 + 0x743c);
  if (iVar6 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar18 + 0x7440);
  if (iVar2 == 0) {
    return;
  }
  uVar9 = *(uint *)(iVar4 + 0x28);
  uVar11 = *(uint *)(iVar4 + 0x2c);
  uVar16 = *(uint *)(iVar2 + 0x28);
  uVar17 = *(uint *)(iVar2 + 0x2c);
  uVar10 = *(uint *)(iVar6 + 0x28);
  uVar12 = *(uint *)(iVar6 + 0x2c);
  bVar19 = uVar11 <= uVar12;
  if (uVar12 == uVar11) {
    bVar19 = uVar9 <= uVar10;
  }
  if (!bVar19) {
LAB_000136f4:
    printk(DAT_00013944,iVar18 + 0x1c,uVar16,uVar17,uVar10,uVar12,uVar9,uVar11);
    return;
  }
  bVar19 = uVar12 <= uVar17;
  if (uVar17 == uVar12) {
    bVar19 = uVar10 <= uVar16;
  }
  if (!bVar19) goto LAB_000136f4;
  uVar3 = (uVar12 - uVar11) - (uint)(uVar10 < uVar9);
  bVar19 = uVar3 <= uVar8;
  if (uVar8 == uVar3) {
    bVar19 = uVar10 - uVar9 <= uVar5;
  }
  if (bVar19) {
    uVar14 = (uVar17 - uVar12) - (uint)(uVar16 < uVar10);
    bVar19 = uVar14 <= uVar8;
    if (uVar8 == uVar14) {
      bVar19 = uVar16 - uVar10 <= uVar5;
    }
    if (bVar19) goto LAB_00013806;
  }
  iVar4 = *(int *)(iVar18 + 0x350);
  if (((iVar4 == 0) || (iVar6 = *(int *)(*(int *)(iVar4 + 0x68) + 0xc), iVar6 == 0)) ||
     (pcVar13 = *(code **)(iVar6 + 0x30), pcVar13 == (code *)0x0)) {
LAB_00013800:
    uVar1 = 0xffffffff;
  }
  else {
    if ((*(int *)(DAT_00013948 + 0xc) == 0) ||
       (pcVar15 = *(code **)(*(int *)(DAT_00013948 + 0xc) + 0x30), pcVar15 == (code *)0x0)) {
      iVar4 = (*pcVar13)(iVar4,iVar18 + 0x35c);
    }
    else {
      iVar4 = (*pcVar15)();
    }
    if (((iVar4 != 0) || (iVar4 = *(int *)(iVar18 + 0x364), iVar4 == 0)) ||
       (iVar6 = *(int *)(iVar18 + 0x360), iVar6 == 0)) goto LAB_00013800;
    iVar2 = __aeabi_uidiv(iVar6 * 1000,iVar4);
    uVar5 = iVar2 * DAT_00013940;
    uVar1 = __aeabi_uidiv(iVar4,iVar6);
    uVar8 = 0;
  }
  bVar19 = uVar3 <= uVar8;
  if (uVar8 == uVar3) {
    bVar19 = uVar10 - uVar9 <= uVar5;
  }
  if (bVar19) {
    uVar3 = (uVar17 - uVar12) - (uint)(uVar16 < uVar10);
    bVar19 = uVar3 <= uVar8;
    if (uVar8 == uVar3) {
      bVar19 = uVar16 - uVar10 <= uVar5;
    }
    if (bVar19) {
LAB_00013806:
      *(undefined4 *)(*(int *)(iVar18 + 0x743c) + 0x30) =
           *(undefined4 *)(*(int *)(iVar18 + 0x7438) + 0x30);
      *(undefined4 *)(*(int *)(iVar18 + 0x7440) + 0x30) =
           *(undefined4 *)(*(int *)(iVar18 + 0x7438) + 0x30);
      rkcif_s_rx_buffer(iVar18,*(int *)(iVar18 + 0x7438) + 0x18);
      rkcif_s_rx_buffer(iVar18,*(int *)(iVar18 + 0x743c) + 0x18);
      rkcif_s_rx_buffer(iVar18,*(int *)(iVar18 + 0x7440) + 0x18);
      *(undefined4 *)(iVar18 + 0x7438) = 0;
      *(undefined4 *)(iVar18 + 0x743c) = 0;
      *(undefined4 *)(iVar18 + 0x7440) = 0;
      return;
    }
  }
  printk(DAT_0001394c,iVar18 + 0x1c,uVar16,uVar17,uVar10,uVar12,uVar9,uVar11,uVar1);
  return;
}



/* ===== schedule_work @ 00013990 size=12 ===== */

void schedule_work(undefined4 param_1)

{
  queue_work_on(1,*DAT_0001399c,param_1);
  return;
}



/* ===== rkcif_tasklet_handle @ 000139a0 size=172 ===== */

void rkcif_tasklet_handle(undefined4 ****param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 ****ppppuVar2;
  undefined4 ***pppuVar3;
  int extraout_r1;
  undefined4 ****ppppuVar4;
  undefined4 ****ppppuVar5;
  undefined4 *****pppppuVar6;
  undefined4 ****local_20;
  undefined4 **local_1c;
  
  disableIRQinterrupts();
  local_20 = (undefined4 ****)param_1[0x2fa];
  local_20[1] = &local_20;
  local_1c = param_1[0x2fb];
  *local_1c = &local_20;
  param_1[0x2fa] = param_1 + 0x2fa;
  param_1[0x2fb] = param_1 + 0x2fa;
  piVar1 = DAT_00013a50;
  ppppuVar5 = param_1;
  while (ppppuVar2 = local_20, (undefined4 *****)local_20 != &local_20) {
    pppppuVar6 = (undefined4 *****)(local_20 + -0xa0);
    list_del(local_20);
    pppuVar3 = param_1[0x15d];
    for (ppppuVar4 = (undefined4 ****)0x0;
        ppppuVar4 < (undefined4 ****)(uint)*(byte *)((int)pppuVar3 + 0x15);
        ppppuVar4 = (undefined4 ****)((int)ppppuVar4 + 1)) {
      if (ppppuVar4 < ppppuVar2[-0x9c]) {
        *(undefined4 ****)(extraout_r1 + -0x22c + (int)ppppuVar4 * 0x20) =
             param_1[(int)ppppuVar4 * 5 + 0x164];
      }
    }
    vb2_buffer_done(pppppuVar6,5,(undefined4 ****)(uint)*(byte *)((int)pppuVar3 + 0x15),ppppuVar4,
                    ppppuVar5,param_2);
    if (1 < *piVar1) {
      ppppuVar5 = (undefined4 ****)ppppuVar2[-0x44];
      printk(DAT_00013a4c,param_1[1] + 7,*(byte *)param_1 & 7,ppppuVar2[-0x9f]);
    }
  }
  return;
}



/* ===== rkcif_disable_skip_frame @ 00013a54 size=48 ===== */

void rkcif_disable_skip_frame
               (byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar1 = rkcif_read_register(uVar2,0x39,param_3,param_4,param_4);
  rkcif_write_register(uVar2,0x39,uVar1 & ~(1 << (*param_1 & 7) + 8));
  param_1[0xbca] = 0;
  return;
}



/* ===== rkcif_modify_line_int @ 00013a84 size=108 ===== */

void rkcif_modify_line_int(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  sbyte sVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  if (*(int *)(iVar3 + 0x736c) < 9) {
    sVar2 = (*param_1 & 7) + 0x15;
  }
  else {
    sVar2 = (*param_1 & 7) + 0x14;
  }
  if (param_2 == 0) {
    rkcif_write_register_and(iVar3,0x5a,~(1 << sVar2),param_4);
    return;
  }
  uVar1 = *(uint *)(iVar3 + 0x7ffc);
  if (*(uint *)(iVar3 + 0x8000) != uVar1) {
    *(uint *)(iVar3 + 0x8000) = uVar1;
    rkcif_write_register(iVar3,0x5c,uVar1 | uVar1 << 0x10);
    rkcif_write_register(iVar3,0x5d,*(uint *)(iVar3 + 0x7ffc) | *(uint *)(iVar3 + 0x7ffc) << 0x10);
  }
  rkcif_write_register_or(iVar3,0x5a,1 << sVar2);
  param_1[0xbff] = 1;
  return;
}



/* ===== rkcif_detect_wake_up_mode_change @ 00013af0 size=306 ===== */

void rkcif_detect_wake_up_mode_change
               (byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  if (*(int *)(iVar3 + 0x7ee0) == 0) {
    return;
  }
  if (*(int *)(*(int *)(iVar3 + 0x7ee0) + 0x1d8) == 0) {
    return;
  }
  piVar1 = (int *)(iVar3 + 0x73a1);
  iVar2 = *piVar1;
  if (((iVar2 == 0) || (iVar2 == 7)) && ((*param_1 & 7) == 0)) {
    if (*(int *)(iVar3 + 0x8004) != *(int *)(iVar3 + 0x7ffc)) {
      *(int *)(iVar3 + 0x7ffc) = *(int *)(iVar3 + 0x8004);
    }
  }
  else {
    if (iVar2 == 5) {
      bVar7 = (*param_1 & 7) == 1;
    }
    else {
      if (iVar2 != 6) goto LAB_00013b2c;
      bVar7 = (*param_1 & 7) == 2;
    }
    if (bVar7) {
      if (*(int *)(iVar3 + 0x8004) != *(int *)(iVar3 + 0x7ffc)) {
        *(int *)(iVar3 + 0x7ffc) = *(int *)(iVar3 + 0x8004);
      }
    }
  }
LAB_00013b2c:
  if (*(int *)(iVar3 + 0x7ffc) == 0) {
    bVar7 = false;
    if (param_1[0xbfe] == 0) goto LAB_00013b74;
    param_1[0xbfe] = 0;
  }
  else if (param_1[0xbfe] == 0) {
    param_1[0xbfe] = 1;
    if (*(int *)(param_1 + 0x520) == 1) {
      uVar4 = 1;
LAB_00013b52:
      *(undefined4 *)(param_1 + 3000) = uVar4;
      param_1[0xbbc] = 0;
      param_1[0xbbd] = 0;
      param_1[0xbbe] = 0;
      param_1[0xbbf] = 0;
    }
    else if (*(int *)(param_1 + 0x520) == 2) {
      uVar4 = 0;
      goto LAB_00013b52;
    }
    bVar7 = true;
    if (*piVar1 == 5) {
      *(undefined1 *)(iVar3 + 0xfe6) = 1;
      uVar4 = *(undefined4 *)(param_1 + 0xbbc);
      *(undefined4 *)(iVar3 + 4000) = *(undefined4 *)(param_1 + 3000);
      *(undefined4 *)(iVar3 + 0xfa4) = uVar4;
    }
    else if (*piVar1 == 6) {
      *(undefined1 *)(iVar3 + 0xfe6) = 1;
      *(undefined1 *)(iVar3 + 0x1bee) = 1;
      uVar4 = *(undefined4 *)(param_1 + 3000);
      uVar6 = *(undefined4 *)(param_1 + 0xbbc);
      *(undefined4 *)(iVar3 + 4000) = uVar4;
      *(undefined4 *)(iVar3 + 0xfa4) = uVar6;
      *(undefined4 *)(iVar3 + 0x1ba8) = uVar4;
      *(undefined4 *)(iVar3 + 0x1bac) = uVar6;
    }
    goto LAB_00013b74;
  }
  bVar7 = false;
LAB_00013b74:
  if (param_1[0xbfe] != 0) {
    if (!bVar7) {
      rkcif_modify_line_int(param_1,1,0,param_4);
      return;
    }
    if (*piVar1 == 5) {
      iVar2 = 2;
    }
    else if (*piVar1 == 6) {
      iVar2 = 3;
    }
    else {
      iVar2 = 1;
    }
    iVar3 = iVar3 + 1000;
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      rkcif_modify_line_int(iVar3,1);
      iVar3 = iVar3 + 0xc08;
    } while (iVar2 != iVar5);
  }
  return;
}



/* ===== rkcif_stream_stop @ 00013c22 size=270 ===== */

void rkcif_stream_stop(byte *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(iVar4 + 0x34c);
  if (*(int *)(iVar6 + 4) - 4U < 3) {
    uVar5 = *param_1 & 7;
    uVar1 = get_reg_index_of_id_ctrl0(uVar5);
    uVar2 = rkcif_read_register(iVar4,uVar1);
    if (*(int *)(iVar6 + 4) - 5U < 2) {
      uVar2 = uVar2 & 0xeffffffe;
    }
    else {
      uVar2 = uVar2 & 0xfffeffff;
    }
    rkcif_write_register(iVar4,uVar1,uVar2);
    uVar2 = 1 << uVar5 + 0x15 | 3 << uVar5 * 2 | 3 << uVar5 * 2 + 8;
    rkcif_write_register_or(iVar4,0x5b,uVar2);
    rkcif_write_register_and(iVar4,0x5a,~uVar2);
    if (*(int *)(*(int *)(param_1 + 4) + 0x736c) < 9) {
      uVar3 = 0xffe0ffff;
      uVar1 = 0x5a;
    }
    else {
      if (*(int *)(*(int *)(param_1 + 4) + 0x7ff0) != 0) goto LAB_00013cb0;
      rkcif_write_register_and(iVar4,0x5a,DAT_00013d30);
      uVar3 = 0xfffffffe;
      uVar1 = 0x39;
    }
    rkcif_write_register_and(iVar4,uVar1,uVar3);
  }
  else if (*(int *)(iVar4 + 0x71a8) == 1) {
    uVar2 = rkcif_read_register(iVar4,0);
    rkcif_write_register(iVar4,0,uVar2 & 0xfffffffe);
    rkcif_write_register(iVar4,1,0);
    rkcif_write_register(iVar4,2,0x3ff);
    rkcif_write_register(iVar4,0x1d,0);
    rkcif_config_dvp_pin(iVar4,0);
  }
LAB_00013cb0:
  *(int *)(*(int *)(param_1 + 4) + 0x7ff0) = *(int *)(*(int *)(param_1 + 4) + 0x7ff0) + -1;
  param_1[0x510] = 1;
  param_1[0x511] = 0;
  param_1[0x512] = 0;
  param_1[0x513] = 0;
  param_1[0x788] = 0;
  param_1[0x789] = 0;
  param_1[0x78a] = 0;
  param_1[0x78b] = 0;
  return;
}



/* ===== get_remote_terminal_sensor @ 00013d34 size=90 ===== */

void get_remote_terminal_sensor(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a4 [144];
  
  iVar3 = *(int *)(param_1 + 0x1d8);
  iVar2 = iVar3 + 0xd8;
  mutex_lock(iVar2);
  iVar3 = media_graph_walk_init(auStack_a4,iVar3);
  if (iVar3 == 0) {
    media_graph_walk_start(auStack_a4,param_1 + 0x1d8);
    iVar3 = DAT_00013d90;
    do {
      iVar1 = media_graph_walk_next(auStack_a4);
      if (iVar1 == 0) break;
    } while (*(int *)(iVar1 + 0x18) != iVar3);
    mutex_unlock(iVar2);
    media_graph_walk_cleanup(auStack_a4);
    *param_2 = iVar1;
  }
  else {
    mutex_unlock(iVar2);
    *param_2 = 0;
  }
  return;
}



/* ===== rkcif_enum_input @ 00013d94 size=32 ===== */

undefined4 rkcif_enum_input(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00013db4;
  if (*param_3 == 0) {
    param_3[9] = 2;
    strlcpy(param_3 + 1,uVar1,0x20);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== video_drvdata @ 00013db8 size=12 ===== */

undefined4 video_drvdata(void)

{
  int iVar1;
  
  iVar1 = video_devdata();
  return *(undefined4 *)(iVar1 + 0x130);
}



/* ===== rkcif_enum_frameintervals @ 00013dc4 size=144 ===== */

int rkcif_enum_frameintervals(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_40 [4];
  int local_3c;
  int iStack_38;
  
  iVar1 = video_drvdata();
  iVar1 = *(int *)(iVar1 + 4);
  if (*param_3 != 0) {
    return -0x16;
  }
  if ((*(int **)(iVar1 + 0x34c) == (int *)0x0) || (iVar2 = **(int **)(iVar1 + 0x34c), iVar2 == 0)) {
    printk(DAT_00013e58,iVar1 + 0x1c,DAT_00013e54);
    return -0x13;
  }
  iVar4 = *(int *)(*(int *)(iVar2 + 0x68) + 0xc);
  if ((iVar4 != 0) && (pcVar5 = *(code **)(iVar4 + 0x30), pcVar5 != (code *)0x0)) {
    if ((*(int *)(DAT_00013e5c + 0xc) == 0) ||
       (pcVar3 = *(code **)(*(int *)(DAT_00013e5c + 0xc) + 0x30), pcVar3 == (code *)0x0)) {
      iVar2 = (*pcVar5)(iVar2,auStack_40);
    }
    else {
      iVar2 = (*pcVar3)();
    }
    if (iVar2 == 0) goto LAB_00013e1c;
    if (iVar2 != DAT_00013e60) {
      return iVar2;
    }
  }
  local_3c = 1;
  iStack_38 = 0x1e;
LAB_00013e1c:
  if (*(char *)(*(int *)(iVar1 + 0x7ed4) + 0x1a8) == '\0') {
    param_3[9] = 1;
    param_3[10] = 1;
    param_3[4] = 2;
    param_3[7] = 1;
    param_3[8] = 1;
    param_3[5] = local_3c;
    param_3[6] = iStack_38;
  }
  else {
    param_3[4] = 1;
    param_3[5] = local_3c;
    param_3[6] = iStack_38;
  }
  return 0;
}



/* ===== rkcif_g_fmt_vid_cap_mplane @ 00013e64 size=24 ===== */

undefined4 rkcif_g_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = video_drvdata();
  memcpy((void *)(param_3 + 4),(void *)(iVar1 + 0x57c),0xc0);
  return 0;
}



/* ===== rkcif_get_sof @ 00013e7c size=54 ===== */

int rkcif_get_sof(int param_1)

{
  int iVar1;
  
  iVar1 = (*(int **)(param_1 + 0x34c))[1];
  if (iVar1 - 5U < 2) {
    iVar1 = rkcif_csi2_get_sof(**(int **)(param_1 + 0x34c) + -4);
    return iVar1;
  }
  if (iVar1 == 4) {
    if (param_1 != 0) {
      iVar1 = 0x7e04;
LAB_00013e9a:
      return *(int *)(param_1 + iVar1) + -1;
    }
  }
  else if (iVar1 - 1U < 2) {
    if (param_1 != 0) {
      iVar1 = 0x7ed0;
      goto LAB_00013e9a;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* ===== rkcif_querycap @ 00013eb2 size=60 ===== */

undefined4 rkcif_querycap(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = video_drvdata();
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 8);
  strlcpy(param_3,*(undefined4 *)piVar2[0xe],0x10,(undefined4 *)piVar2[0xe],param_4);
  strlcpy(param_3 + 0x10,*(undefined4 *)piVar2[0xe],0x20);
  iVar1 = piVar2[0xb];
  if (iVar1 == 0) {
    iVar1 = *piVar2;
  }
  snprintf((char *)(param_3 + 0x30),0x20,DAT_00013ef0,iVar1);
  return 0;
}



/* ===== rkcif_sof_subscribe_event @ 00013ef4 size=32 ===== */

undefined4 rkcif_sof_subscribe_event(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((*param_3 != 4) && (*param_3 != 0x1001)) {
    return 0xffffffea;
  }
  uVar1 = v4l2_event_subscribe(param_2,param_3,4,0);
  return uVar1;
}



/* ===== rkcif_sditf_disconnect @ 00013f14 size=40 ===== */

int rkcif_sditf_disconnect(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x1d4);
  iVar1 = *(int *)(iVar2 + 0x7ee0);
  iVar1 = media_entity_setup_link(*(int *)(iVar1 + 100) + -0x10,0,param_3,iVar1,param_4);
  if (iVar1 != 0) {
    _dev_err(*(undefined4 *)(iVar2 + 8),DAT_00013f3c);
  }
  return iVar1;
}



/* ===== rkcif_csi_g_mipi_id @ 00013f40 size=112 ===== */

undefined4 rkcif_csi_g_mipi_id(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 & 0x300) == 0) {
    if ((param_2 & 0xc00) == 0) {
      if ((param_2 & 0x3000) == 0) {
        if ((param_2 & 0xc000) == 0) {
          uVar1 = 0xffffffea;
        }
        else {
          if ((param_2 & 0xc000) == 0xc000) {
            printk(DAT_00013fbc,param_1 + 0x10,param_3,0,param_4);
          }
          uVar1 = 3;
        }
      }
      else {
        if ((param_2 & 0x3000) == 0x3000) {
          printk(DAT_00013fb8,param_1 + 0x10,param_3,0x3000,param_4);
        }
        uVar1 = 2;
      }
    }
    else {
      if ((param_2 & 0xc00) == 0xc00) {
        printk(DAT_00013fb4,param_1 + 0x10,param_3,0xc00,param_4);
      }
      uVar1 = 1;
    }
  }
  else {
    if ((param_2 & 0x300) == 0x300) {
      printk(DAT_00013fb0,param_1 + 0x10,param_3,0x300,param_4);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== get_remote_sensor @ 00013fc0 size=58 ===== */

undefined4 get_remote_sensor(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x204) == 0) {
    iVar2 = *(int *)(param_1 + 4);
    uVar1 = DAT_00014000;
  }
  else {
    iVar2 = media_entity_remote_pad(*(int *)(param_1 + 0x204));
    if (iVar2 != 0) {
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = *(undefined2 *)(iVar2 + 0x14);
      }
      return *(undefined4 *)(iVar2 + 0x10);
    }
    iVar2 = *(int *)(param_1 + 4);
    uVar1 = DAT_00014004;
  }
  printk(uVar1,iVar2 + 0x1c,DAT_00013ffc);
  return 0;
}



/* ===== rkcif_s_selection @ 00014008 size=190 ===== */

int rkcif_s_selection(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  ushort local_62;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar1 = video_drvdata();
  iVar6 = *(int *)(iVar1 + 4);
  local_62 = 0;
  if (param_3 == 0) {
    if (0 < *DAT_000140c8) {
      printk(DAT_000140cc,iVar6 + 0x1c);
    }
    iVar2 = -0x16;
  }
  else {
    iVar1 = get_remote_sensor(iVar1,&local_62);
    local_50 = *(undefined4 *)(param_3 + 0xc);
    uStack_4c = *(undefined4 *)(param_3 + 0x10);
    uStack_48 = *(undefined4 *)(param_3 + 0x14);
    uStack_44 = *(undefined4 *)(param_3 + 0x18);
    local_5c = (uint)local_62;
    local_58 = *(undefined4 *)(param_3 + 4);
    local_60 = 1;
    if (iVar1 == 0) {
      iVar2 = -0x13;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
      iVar2 = DAT_000140dc;
      if ((iVar3 != 0) && (pcVar4 = *(code **)(iVar3 + 0x1c), pcVar4 != (code *)0x0)) {
        if ((*(int *)(DAT_000140d0 + 0x1c) == 0) ||
           (pcVar5 = *(code **)(*(int *)(DAT_000140d0 + 0x1c) + 0x1c), pcVar5 == (code *)0x0)) {
          iVar2 = (*pcVar4)(iVar1,0,&local_60);
        }
        else {
          iVar2 = (*pcVar5)(iVar1,0,&local_60);
        }
        if (iVar2 == 0) {
          *(undefined4 *)(param_3 + 0xc) = local_50;
          *(undefined4 *)(param_3 + 0x10) = uStack_4c;
          *(undefined4 *)(param_3 + 0x14) = uStack_48;
          *(undefined4 *)(param_3 + 0x18) = uStack_44;
          if (0 < *DAT_000140c8) {
            printk(DAT_000140d8,iVar6 + 0x1c,DAT_000140d4,local_62,local_60,local_58);
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== rkcif_g_selection @ 000140e0 size=242 ===== */

int rkcif_g_selection(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  ushort local_5a;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar1 = video_drvdata();
  iVar9 = *(int *)(iVar1 + 4);
  local_5a = 0;
  if (param_3 == 0) {
    if (0 < *DAT_000141d4) {
      printk(DAT_000141d8,iVar9 + 0x1c);
    }
LAB_0001410c:
    iVar9 = -0x16;
  }
  else {
    if (*(int *)(param_3 + 4) == 2) {
      iVar2 = get_remote_sensor(iVar1,&local_5a);
      local_50 = *(undefined4 *)(param_3 + 4);
      local_54 = (uint)local_5a;
      local_58 = 1;
      if (0 < *DAT_000141d4) {
        printk(DAT_000141e0,iVar9 + 0x1c,DAT_000141dc,0x1885,iVar2 + 0x74,local_54,1,local_50);
      }
      if (iVar2 == 0) {
        iVar9 = -0x13;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar2 + 0x68) + 0x1c);
        iVar9 = DAT_000141e8;
        if ((iVar5 != 0) && (pcVar6 = *(code **)(iVar5 + 0x18), pcVar6 != (code *)0x0)) {
          if ((*(int *)(DAT_000141e4 + 0x1c) == 0) ||
             (pcVar8 = *(code **)(*(int *)(DAT_000141e4 + 0x1c) + 0x18), pcVar8 == (code *)0x0)) {
            iVar9 = (*pcVar6)(iVar2,0,&local_58);
          }
          else {
            iVar9 = (*pcVar8)(iVar2,0,&local_58);
          }
          if (iVar9 == 0) {
            *(undefined4 *)(param_3 + 0xc) = local_48;
            *(undefined4 *)(param_3 + 0x10) = uStack_44;
            *(undefined4 *)(param_3 + 0x14) = uStack_40;
            *(undefined4 *)(param_3 + 0x18) = uStack_3c;
            return 0;
          }
        }
      }
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
    }
    else {
      if (*(int *)(param_3 + 4) != 0) goto LAB_0001410c;
      if ((*(uint *)(iVar1 + 0x528) & 3) != 0) {
        uVar3 = *(undefined4 *)(iVar1 + 0x640);
        uVar4 = *(undefined4 *)(iVar1 + 0x644);
        uVar7 = *(undefined4 *)(iVar1 + 0x648);
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(iVar1 + 0x63c);
        *(undefined4 *)(param_3 + 0x10) = uVar3;
        *(undefined4 *)(param_3 + 0x14) = uVar4;
        *(undefined4 *)(param_3 + 0x18) = uVar7;
        return 0;
      }
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      iVar9 = 0;
    }
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar1 + 0x57c);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar1 + 0x580);
  }
  return iVar9;
}



/* ===== rkcif_lvds_sd_set_selection @ 000141ec size=94 ===== */

int rkcif_lvds_sd_set_selection(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  code *pcVar8;
  
  iVar1 = get_lvds_remote_sensor();
  if (iVar1 == 0) {
    iVar2 = -0x13;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    iVar2 = DAT_00014250;
    if ((iVar5 != 0) && (pcVar6 = *(code **)(iVar5 + 0x1c), pcVar6 != (code *)0x0)) {
      if ((*(int *)(DAT_0001424c + 0x1c) == 0) ||
         (pcVar8 = *(code **)(*(int *)(DAT_0001424c + 0x1c) + 0x1c), pcVar8 == (code *)0x0)) {
        iVar2 = (*pcVar6)(iVar1,param_2,param_3);
      }
      else {
        iVar2 = (*pcVar8)(iVar1,param_2,param_3);
      }
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(param_3 + 0x14);
        uVar4 = *(undefined4 *)(param_3 + 0x18);
        uVar7 = *(undefined4 *)(param_3 + 0x1c);
        *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_3 + 0x10);
        *(undefined4 *)(param_1 + 0x21c) = uVar3;
        *(undefined4 *)(param_1 + 0x220) = uVar4;
        *(undefined4 *)(param_1 + 0x224) = uVar7;
      }
    }
  }
  return iVar2;
}



/* ===== rkcif_lvds_sd_get_fmt @ 00014254 size=90 ===== */

int rkcif_lvds_sd_get_fmt(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  code *pcVar8;
  
  iVar1 = get_lvds_remote_sensor();
  if (iVar1 == 0) {
    iVar2 = -0x13;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    iVar2 = DAT_000142b4;
    if ((iVar5 != 0) && (pcVar6 = *(code **)(iVar5 + 0x10), pcVar6 != (code *)0x0)) {
      if ((*(int *)(DAT_000142b0 + 0x1c) == 0) ||
         (pcVar8 = *(code **)(*(int *)(DAT_000142b0 + 0x1c) + 0x10), pcVar8 == (code *)0x0)) {
        iVar2 = (*pcVar6)(iVar1,0,param_3,pcVar6,param_4);
      }
      else {
        iVar2 = (*pcVar8)(iVar1,0,param_3);
      }
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(param_3 + 0xc);
        uVar4 = *(undefined4 *)(param_3 + 0x10);
        uVar7 = *(undefined4 *)(param_3 + 0x14);
        *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(param_1 + 0x1ec) = uVar3;
        *(undefined4 *)(param_1 + 0x1f0) = uVar4;
        *(undefined4 *)(param_1 + 500) = uVar7;
        uVar3 = *(undefined4 *)(param_3 + 0x1c);
        uVar4 = *(undefined4 *)(param_3 + 0x20);
        uVar7 = *(undefined4 *)(param_3 + 0x24);
        *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_3 + 0x18);
        *(undefined4 *)(param_1 + 0x1fc) = uVar3;
        *(undefined4 *)(param_1 + 0x200) = uVar4;
        *(undefined4 *)(param_1 + 0x204) = uVar7;
        uVar3 = *(undefined4 *)(param_3 + 0x2c);
        uVar4 = *(undefined4 *)(param_3 + 0x30);
        uVar7 = *(undefined4 *)(param_3 + 0x34);
        *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_3 + 0x28);
        *(undefined4 *)(param_1 + 0x20c) = uVar3;
        *(undefined4 *)(param_1 + 0x210) = uVar4;
        *(undefined4 *)(param_1 + 0x214) = uVar7;
      }
    }
  }
  return iVar2;
}



/* ===== rkcif_modify_frame_skip_config @ 000142b8 size=96 ===== */

void rkcif_modify_frame_skip_config
               (byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1[0xbcb] == 0) {
    if (param_1[0xbcc] != 0) {
      rkcif_disable_skip_frame();
      return;
    }
  }
  else {
    rkcif_disable_skip_frame();
    uVar5 = *(undefined4 *)(param_1 + 4);
    bVar1 = param_1[0xbc8];
    bVar2 = param_1[0xbc9];
    uVar3 = rkcif_read_register(uVar5,0x39);
    uVar4 = 1 << (*param_1 & 7) + 8;
    rkcif_write_register
              (uVar5,0x39,(uint)bVar2 << 0x15 | (uint)bVar1 << 0x18 | uVar4 | uVar3 & 0xc00fffff,
               uVar4,param_4);
    param_1[0xbca] = 1;
    param_1[0xbcb] = 0;
  }
  return;
}



/* ===== rkcif_enum_fmt_vid_cap_mplane @ 00014318 size=68 ===== */

undefined4
rkcif_enum_fmt_vid_cap_mplane
          (undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = DAT_00014360;
  if (*param_3 < 0x22) {
    uVar3 = *(uint *)(*param_3 * 0x1c + DAT_0001435c + 0x94);
    bVar4 = uVar3 == DAT_00014360;
    param_3[0xb] = uVar3;
    uVar2 = DAT_00014368;
    if ((bVar4) || (uVar2 = DAT_00014364, uVar3 == uVar1 + 0x1fff1f2)) {
      strscpy(param_3 + 3,uVar2,0x20,uVar3,param_4);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== rkcif_dvp_event_inc_sof @ 0001436c size=88 ===== */

void rkcif_dvp_event_inc_sof(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_a0;
  undefined1 auStack_9c [4];
  int local_98;
  int local_14;
  
  piVar2 = DAT_000143c4;
  local_14 = *DAT_000143c4;
  if (param_1 != -0x7e08) {
    memset(auStack_9c,0,0x84);
    local_a0 = 4;
    piVar3 = (int *)(param_1 + 0x7ed0);
    HintPreloadData(piVar3);
    do {
      ExclusiveAccess(piVar3);
      local_98 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = local_98 + 1;
    v4l2_event_queue(*(undefined4 *)(param_1 + 0x7eac),&local_a0);
  }
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== tasklet_disable @ 000143c8 size=28 ===== */

void tasklet_disable(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  return;
}



/* ===== rkcif_lvds_sd_get_selection @ 000143e4 size=326 ===== */

undefined4 rkcif_lvds_sd_get_selection(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  code *pcVar7;
  int *piVar8;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar1 = get_lvds_remote_sensor();
  if (param_3 == (int *)0x0) {
    if (0 < *DAT_0001452c) {
      printk(DAT_00014530,param_1 + 0x74);
    }
    return 0xffffffea;
  }
  uVar3 = param_3[1];
  if (4 < uVar3) {
    if (*DAT_0001452c < 1) {
      return 0xffffffea;
    }
    printk(DAT_00014534,param_1 + 0x74);
    return 0xffffffea;
  }
  if (param_3[2] == 0) {
    if (*param_3 == 0) {
      piVar8 = (int *)(param_2 + 0x30);
    }
    else {
      piVar8 = (int *)(param_1 + 0x218);
    }
    iVar1 = piVar8[1];
    iVar2 = piVar8[2];
    iVar4 = piVar8[3];
    param_3[4] = *piVar8;
    param_3[5] = iVar1;
    param_3[6] = iVar2;
    param_3[7] = iVar4;
  }
  else {
    if (param_3[2] != 2) {
      return 0xffffffea;
    }
    if (*param_3 == 1) {
      if (((iVar1 != 0) && (iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c), iVar2 != 0)) &&
         (pcVar6 = *(code **)(iVar2 + 0x18), pcVar6 != (code *)0x0)) {
        if ((*(int *)(DAT_00014538 + 0x1c) == 0) ||
           (pcVar7 = *(code **)(*(int *)(DAT_00014538 + 0x1c) + 0x18), pcVar7 == (code *)0x0)) {
          iVar2 = (*pcVar6)(iVar1,param_2,param_3);
        }
        else {
          iVar2 = (*pcVar7)(iVar1,param_2,param_3);
        }
        if (iVar2 == 0) goto LAB_00014480;
      }
      local_78[0] = 1;
      if (((iVar1 != 0) && (iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c), iVar2 != 0)) &&
         (pcVar6 = *(code **)(iVar2 + 0x10), pcVar6 != (code *)0x0)) {
        if ((*(int *)(DAT_00014538 + 0x1c) == 0) ||
           (pcVar7 = *(code **)(*(int *)(DAT_00014538 + 0x1c) + 0x10), pcVar7 == (code *)0x0)) {
          iVar1 = (*pcVar6)(iVar1,0,local_78);
        }
        else {
          iVar1 = (*pcVar7)(iVar1,0,local_78);
        }
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x1e8) = local_70;
          *(undefined4 *)(param_1 + 0x1ec) = uStack_6c;
          *(undefined4 *)(param_1 + 0x1f0) = uStack_68;
          *(undefined4 *)(param_1 + 500) = uStack_64;
          *(undefined4 *)(param_1 + 0x1f8) = local_60;
          *(undefined4 *)(param_1 + 0x1fc) = uStack_5c;
          *(undefined4 *)(param_1 + 0x200) = uStack_58;
          *(undefined4 *)(param_1 + 0x204) = uStack_54;
          *(undefined4 *)(param_1 + 0x208) = local_50;
          *(undefined4 *)(param_1 + 0x20c) = uStack_4c;
          *(undefined4 *)(param_1 + 0x210) = uStack_48;
          *(undefined4 *)(param_1 + 0x214) = uStack_44;
          param_3[4] = 0;
          param_3[5] = 0;
          param_3[6] = *(int *)(param_1 + 0x1e8);
          param_3[7] = *(int *)(param_1 + 0x1ec);
LAB_00014480:
          iVar1 = param_3[5];
          iVar2 = param_3[6];
          iVar4 = param_3[7];
          *(int *)(param_1 + 0x218) = param_3[4];
          *(int *)(param_1 + 0x21c) = iVar1;
          *(int *)(param_1 + 0x220) = iVar2;
          *(int *)(param_1 + 0x224) = iVar4;
          return 0;
        }
      }
      iVar1 = *(int *)(param_1 + 0x218);
      iVar2 = *(int *)(param_1 + 0x21c);
      iVar4 = *(int *)(param_1 + 0x220);
      iVar5 = *(int *)(param_1 + 0x224);
    }
    else {
      if (*(ushort *)(param_1 + 0x20) <= uVar3) {
        uVar3 = 0;
      }
      param_2 = uVar3 * 0x50 + param_2;
      iVar1 = *(int *)(param_2 + 0x30);
      iVar2 = *(int *)(param_2 + 0x34);
      iVar4 = *(int *)(param_2 + 0x38);
      iVar5 = *(int *)(param_2 + 0x3c);
    }
    param_3[4] = iVar1;
    param_3[5] = iVar2;
    param_3[6] = iVar4;
    param_3[7] = iVar5;
  }
  return 0;
}



/* ===== rkcif_lvds_event_inc_sof.part.7 @ 0001453c size=88 ===== */

void rkcif_lvds_event_inc_sof_part_7(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_a0;
  undefined1 auStack_9c [4];
  int local_98;
  int local_14;
  
  piVar2 = DAT_00014594;
  local_14 = *DAT_00014594;
  memset(auStack_9c,0,0x84);
  local_a0 = 4;
  piVar3 = (int *)(param_1 + 0x7e04);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    local_98 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = local_98 + 1;
  v4l2_event_queue(*(undefined4 *)(param_1 + 0x7bdc),&local_a0);
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== rkcif_fh_release @ 00014598 size=178 ===== */

uint rkcif_fh_release(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  code *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  iVar3 = video_devdata();
  iVar9 = *(int *)(iVar3 + -0x1d4);
  uVar4 = vb2_fop_release(param_1);
  if (uVar4 == 0) {
    mutex_lock(iVar9 + 0x7378);
    v4l2_pipeline_pm_put(iVar3);
    printk(DAT_0001464c,iVar3 + 0x2a0,*(undefined4 *)(iVar3 + 0x40));
    mutex_unlock(iVar9 + 0x7378);
  }
  __pm_runtime_idle(*(undefined4 *)(iVar9 + 8),4);
  piVar2 = DAT_00014658;
  uVar1 = DAT_00014654;
  if (1 < *(int *)(iVar9 + 0x8040)) {
    iVar11 = 0;
    piVar10 = (int *)(iVar9 + 0x7ee0);
    do {
      iVar5 = *(int *)(*piVar10 + 0x268);
      if (iVar5 != 0) {
        uVar6 = uVar1;
        if ((**(int **)(iVar5 + 0x68) != 0) &&
           (pcVar8 = *(code **)(**(int **)(iVar5 + 0x68) + 0x1c), pcVar8 != (code *)0x0)) {
          if ((*piVar2 == 0) || (pcVar7 = *(code **)(*piVar2 + 0x1c), pcVar7 == (code *)0x0)) {
            uVar6 = (*pcVar8)(iVar5,0);
          }
          else {
            uVar6 = (*pcVar7)();
          }
        }
        uVar4 = uVar4 | uVar6;
      }
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar11 < *(int *)(iVar9 + 0x8040));
    if ((int)uVar4 < 0) {
      printk(DAT_00014650,iVar3 + 0x2a0,uVar4);
    }
  }
  return uVar4;
}



/* ===== rkcif_send_sof @ 0001465c size=48 ===== */

void rkcif_send_sof(int param_1)

{
  int iVar1;
  
  iVar1 = (*(int **)(param_1 + 0x34c))[1];
  if (iVar1 - 5U < 2) {
    rkcif_csi2_event_inc_sof(**(int **)(param_1 + 0x34c) + -4);
    return;
  }
  if (iVar1 == 4) {
    if (param_1 != -0x7b38) {
      rkcif_lvds_event_inc_sof_part_7();
      return;
    }
    return;
  }
  rkcif_dvp_event_inc_sof();
  return;
}



/* ===== rkcif_deal_sof @ 0001468c size=530 ===== */

void rkcif_deal_sof(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_r1;
  int extraout_r1_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  byte bVar13;
  uint in_cpsr;
  undefined8 uVar14;
  
  iVar8 = *(int *)(param_1 + 0x7ed4);
  if (*(int *)(param_1 + 0x736c) < 9) {
    *(int *)(param_1 + 0xb60) = *(int *)(param_1 + 0xb60) + 1;
  }
  disableIRQinterrupts();
  iVar3 = param_1;
  uVar14 = ktime_get();
  *(undefined8 *)(param_1 + 0xb30) = uVar14;
  bVar13 = (in_cpsr >> 0x1b & 1) != 0;
  if (*(int *)(param_1 + 0x803c) == 0) {
    rkcif_send_sof(param_1);
    iVar8 = *(int *)(param_1 + 0x7ee0);
    if ((iVar8 == 0) || (*(int *)(iVar8 + 0x1d8) != 0)) {
      *(int *)(param_1 + 0x904) = *(int *)(param_1 + 0x904) + 1;
    }
    if (((*(int *)(*(int *)(param_1 + 0x3ec) + 0x8038) != 0) &&
        (uVar6 = *(uint *)(param_1 + 0x904), uVar6 < 0xf)) &&
       ((iVar8 == 0 || (*(int *)(iVar8 + 0x1d8) != 0)))) {
      bVar13 = *(byte *)(param_1 + 1000);
      uVar14 = ktime_get();
      printk(DAT_000148b4,param_1 + 0x1c,bVar13 & 7,uVar6 - 1,uVar14);
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x7ed4);
    uVar6 = 1 << (*(uint *)(param_1 + 0x7ff4) & 0xff) | *(uint *)(iVar10 + 0x158);
    *(uint *)(iVar10 + 0x158) = uVar6;
    if (uVar6 == *(uint *)(iVar10 + 0x15c)) {
      if (2 < *DAT_000148a8) {
        param_2 = *(undefined4 *)(iVar10 + 0x164);
        iVar3 = *(int *)(iVar10 + 0x160);
        printk(DAT_000148ac,param_1 + 0x1c,uVar6,uVar6,iVar3,param_2);
      }
      piVar11 = (int *)(iVar10 + 0x124);
      for (iVar4 = 0; iVar4 < *(int *)(iVar10 + 0x150); iVar4 = iVar4 + 1) {
        if (*(int *)(iVar10 + 0x14c) == 1) {
          if (iVar4 < *(int *)(iVar10 + 0x118)) {
            iVar9 = piVar11[-10];
          }
          else {
LAB_000147d6:
            iVar9 = *(int *)(iVar10 + 0xd4);
          }
        }
        else {
          if (*(int *)(iVar10 + 0x14c) != 2) {
            printk(DAT_000148b0,param_1 + 0x1c);
            return;
          }
          if (*(int *)(iVar10 + 0x140) <= iVar4) goto LAB_000147d6;
          iVar9 = *piVar11;
        }
        if (param_1 + 1000 != iVar9 + 1000) {
          uVar2 = *(uint *)(param_1 + 0xb30);
          uVar6 = uVar2 - *(uint *)(iVar9 + 0xb30);
          uVar2 = (*(int *)(param_1 + 0xb34) - *(int *)(iVar9 + 0xb34)) -
                  (uint)(uVar2 < *(uint *)(iVar9 + 0xb30));
          if ((int)uVar2 < 0) {
            bVar12 = uVar6 != 0;
            uVar6 = -uVar6;
            uVar2 = -uVar2 - (uint)bVar12;
          }
          bVar12 = uVar2 <= DAT_000148a4;
          if (DAT_000148a4 == uVar2) {
            bVar12 = uVar6 <= DAT_000148a0;
          }
          if (!bVar12) {
            return;
          }
        }
        piVar11 = piVar11 + 1;
      }
      *(undefined4 *)(iVar8 + 0x158) = 0;
      uVar6 = *(uint *)(iVar8 + 0x168);
      iVar10 = uVar6 + 1;
      *(int *)(iVar8 + 0x168) = iVar10;
      iVar10 = (uint)(byte)((iVar10 < 0) << 4 | (iVar10 == 0) << 3 | (0xfffffffe < uVar6) << 2 |
                            SCARRY4(uVar6,1) << 1 | bVar13) << 0x1b;
      disableIRQinterrupts();
      uVar5 = *(undefined4 *)(iVar8 + 0x15c);
      *(undefined4 *)(iVar8 + 0x164) = uVar5;
      if (*(int *)(iVar8 + 0x160) == 0) {
        *(undefined4 *)(iVar8 + 0x160) = uVar5;
        *(undefined4 *)(iVar8 + 0x164) = 0;
      }
      uVar1 = DAT_000148b0;
      piVar11 = (int *)(iVar8 + 0xfc);
      iVar4 = 0;
      for (iVar9 = 0; iVar9 < *(int *)(iVar8 + 0x150); iVar9 = iVar9 + 1) {
        iVar7 = *(int *)(iVar8 + 0x14c);
        if (iVar7 == 1) {
          if (iVar9 < *(int *)(iVar8 + 0x118)) {
            iVar4 = *piVar11;
          }
          else {
LAB_0001482a:
            iVar4 = *(int *)(iVar8 + 0xd4);
          }
        }
        else if (iVar7 == 2) {
          if (*(int *)(iVar8 + 0x140) <= iVar9) goto LAB_0001482a;
          iVar4 = piVar11[10];
        }
        else {
          printk(uVar1,param_1 + 0x1c,uVar5,iVar7,iVar3,param_2);
          iVar10 = extraout_r1_00;
          uVar5 = extraout_r2_00;
        }
        if (iVar4 != 0) {
          rkcif_send_sof(iVar4,iVar10);
          *(undefined4 *)(iVar4 + 0x904) = *(undefined4 *)(iVar8 + 0x168);
          iVar10 = extraout_r1;
          uVar5 = extraout_r2;
        }
        piVar11 = piVar11 + 1;
      }
    }
  }
  return;
}



/* ===== rkcif_assign_new_buffer_init @ 000148b8 size=646 ===== */

void rkcif_assign_new_buffer_init(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int iVar2;
  uint extraout_r2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar9 = *(int *)(iVar3 + 0x34c);
  iVar4 = *(int *)(iVar3 + 0x7ed4);
  if (*(int *)(iVar9 + 4) - 4U < 3) {
    uVar1 = get_reg_index_of_frm0_y_addr();
    if (param_2 - 1U < 3) {
      uVar8 = (uint)*(byte *)(DAT_00014b40 + (param_2 - 1U) + 0x444);
    }
    else {
      uVar8 = 0x3c;
    }
    uVar10 = get_reg_index_of_frm1_y_addr(param_2,uVar1);
    if (extraout_r2 < 3) {
      uVar6 = (uint)*(byte *)(extraout_r2 + DAT_00014b40 + 0x447);
    }
    else {
      uVar6 = 0x3d;
    }
  }
  else {
    uVar1 = get_dvp_reg_index_of_frm0_y_addr(param_2);
    uVar8 = get_dvp_reg_index_of_frm0_uv_addr(param_2,uVar1);
    if (param_2 < 4) {
      uVar6 = (uint)*(byte *)(DAT_00014b40 + param_2 + 0x1e);
    }
    else {
      uVar6 = 7;
    }
    uVar11 = get_dvp_reg_index_of_frm1_uv_addr(param_2);
    uVar10 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),uVar6);
    uVar6 = (uint)uVar11;
  }
  uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar7 = (undefined4)uVar10;
  disableIRQinterrupts();
  if ((*(int *)(param_1 + 0x534) == 0) && (*(int *)(param_1 + 0x52c) != param_1 + 0x52c)) {
    *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x52c) + -0x280;
    list_del();
    uVar1 = extraout_r1;
  }
  if (*(int *)(param_1 + 0x534) == 0) {
    if (*(int *)(iVar4 + 0x194) == 0) {
      if (*(int *)(param_1 + 0xbc0) < 2) {
        *(int *)(param_1 + 0xbc0) = *(int *)(param_1 + 0xbc0) + 1;
      }
    }
    else {
      rkcif_write_register(iVar3,uVar1,*(undefined4 *)(iVar4 + 0x188));
      if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) != 1) {
        uVar1 = *(undefined4 *)(iVar4 + 0x188);
        goto LAB_00014954;
      }
    }
  }
  else {
    rkcif_write_register(iVar3,uVar1,*(undefined4 *)(*(int *)(param_1 + 0x534) + 0x288));
    if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) != 1) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x534) + 0x28c);
LAB_00014954:
      rkcif_write_register(iVar3,uVar8,uVar1);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x578) + 0x14) == 4) {
    iVar2 = *(int *)(param_1 + 0x534);
    *(int *)(param_1 + 0x538) = iVar2;
    if (iVar2 == 0) goto LAB_000149b0;
    iVar5 = param_2 * 0x68 + iVar3;
    rkcif_write_register(iVar3,uVar7,*(int *)(iVar2 + 0x288) + (*(uint *)(iVar5 + 0x71dc) >> 1));
    if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) == 1) goto LAB_000149b0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x538) + 0x28c) + (*(uint *)(iVar5 + 0x71dc) >> 1);
  }
  else {
    if ((*(int *)(param_1 + 0x538) == 0) && (*(int *)(param_1 + 0x52c) != param_1 + 0x52c)) {
      *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x52c) + -0x280;
      list_del();
    }
    if (*(int *)(param_1 + 0x538) == 0) {
      if (*(int *)(iVar4 + 0x194) == 0) {
        iVar2 = *(int *)(param_1 + 0x534);
        if (iVar2 != 0) {
          *(int *)(param_1 + 0x538) = iVar2;
          rkcif_write_register(iVar3,uVar7,*(undefined4 *)(iVar2 + 0x288));
          if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) != 1) {
            rkcif_write_register(iVar3,uVar6,*(undefined4 *)(*(int *)(param_1 + 0x538) + 0x28c));
          }
        }
        if (*(int *)(param_1 + 0xbc0) < 2) {
          *(int *)(param_1 + 0xbc0) = *(int *)(param_1 + 0xbc0) + 1;
        }
        goto LAB_000149b0;
      }
      rkcif_write_register(iVar3,uVar7,*(undefined4 *)(iVar4 + 0x188));
      if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) == 1) goto LAB_000149b0;
      iVar2 = *(int *)(iVar4 + 0x188);
    }
    else {
      rkcif_write_register(iVar3,uVar7,*(undefined4 *)(*(int *)(param_1 + 0x538) + 0x288));
      if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) == 1) goto LAB_000149b0;
      iVar2 = *(int *)(*(int *)(param_1 + 0x538) + 0x28c);
    }
  }
  rkcif_write_register(iVar3,uVar6,iVar2);
LAB_000149b0:
  *(undefined1 *)(param_1 + 0xbfc) = 1;
  iVar2 = DAT_00014b44;
  if (*(int *)(iVar9 + 4) == 2) {
    iVar9 = 0;
    do {
      if ((*(char *)(iVar3 + 0xfe4 + iVar9 * 0xc08) == '\0') && (*(int *)(iVar4 + 0x188) != 0)) {
        uVar1 = get_dvp_reg_index_of_frm0_y_addr(iVar9);
        rkcif_write_register(iVar3,uVar1);
        uVar1 = get_dvp_reg_index_of_frm0_uv_addr(iVar9);
        rkcif_write_register(iVar3,uVar1,*(undefined4 *)(iVar4 + 0x188));
        rkcif_write_register(iVar3,*(undefined1 *)(iVar2 + iVar9),*(undefined4 *)(iVar4 + 0x188));
        uVar1 = get_dvp_reg_index_of_frm1_uv_addr(iVar9);
        rkcif_write_register(iVar3,uVar1,*(undefined4 *)(iVar4 + 0x188));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 4);
  }
  *(undefined4 *)(param_1 + 0x794) = 1;
  return;
}



/* ===== rkcif_stop_dma_capture @ 00014b48 size=272 ===== */

undefined4 rkcif_stop_dma_capture(byte *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar5 + 0x34c);
  if (*(int *)(param_1 + 0x798) == 0) {
    uVar4 = *(uint *)(param_1 + 0x788) & ~*(uint *)(param_1 + 0x790);
    *(uint *)(param_1 + 0x788) = uVar4;
    if (uVar4 == 0) {
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 - 5U < 2) {
        uVar1 = get_reg_index_of_id_ctrl0(*param_1 & 7);
        uVar6 = rkcif_read_register(iVar5,uVar1);
        uVar4 = (uint)uVar6 & 0xefffffff;
        if (param_1[0xc07] != 0) {
          uVar4 = (uint)uVar6 & 0xeffffffe;
          param_1[0xc07] = 0;
        }
        uVar4 = get_reg_index_of_id_ctrl0(*param_1 & 7,(int)((ulonglong)uVar6 >> 0x20),uVar4);
      }
      else if (iVar3 == 4) {
        uVar4 = (*param_1 & 7) - 1;
        if (uVar4 < 3) {
          uVar2 = *(undefined1 *)(uVar4 + DAT_00014c58 + 0x44a);
        }
        else {
          uVar2 = 0x7c;
        }
        rkcif_read_register(iVar5,uVar2);
        if (param_1[0xc07] != 0) {
          param_1[0xc07] = 0;
        }
        uVar4 = (*param_1 & 7) - 1;
        if (uVar4 < 3) {
          uVar4 = (uint)*(byte *)(uVar4 + DAT_00014c58 + 0x44a);
        }
        else {
          uVar4 = 0x7c;
        }
      }
      else {
        rkcif_read_register(iVar5,0);
        if (param_1[0xc07] != 0) {
          param_1[0xc07] = 0;
        }
        uVar4 = 0;
      }
      rkcif_write_register(iVar5,uVar4);
    }
    else if ((int)(uVar4 << 0x1e) < 0) {
      param_1[0x794] = 2;
      param_1[0x795] = 0;
      param_1[0x796] = 0;
      param_1[0x797] = 0;
    }
    param_1[0x790] = 0;
    param_1[0x791] = 0;
    param_1[0x792] = 0;
    param_1[0x793] = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== to_cif_rx_buf @ 00014c5c size=4 ===== */

int to_cif_rx_buf(int param_1)

{
  return param_1 + -0x18;
}



/* ===== get_input_fmt @ 00014c60 size=330 ===== */

int * get_input_fmt(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_40;
  
  memset(&local_94,0,0x1c);
  piVar4 = DAT_00014db0;
  local_64 = 1;
  local_78 = 1;
  uStack_74 = 0;
  local_40 = 0;
  if (((param_1 != 0) && (iVar2 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c), iVar2 != 0)) &&
     (pcVar5 = *(code **)(iVar2 + 0x10), pcVar5 != (code *)0x0)) {
    if ((DAT_00014db0[7] == 0) ||
       (pcVar6 = *(code **)(DAT_00014db0[7] + 0x10), pcVar6 == (code *)0x0)) {
      iVar2 = (*pcVar5)(param_1,0,&local_78);
    }
    else {
      iVar2 = (*pcVar6)(param_1,0,&local_78);
    }
    if (-1 < iVar2) {
      local_94 = param_3;
      if ((**(int **)(param_1 + 0x68) != 0) &&
         (pcVar5 = *(code **)(**(int **)(param_1 + 0x68) + 0x18), pcVar5 != (code *)0x0)) {
        if ((*piVar4 == 0) || (pcVar6 = *(code **)(*piVar4 + 0x18), pcVar6 == (code *)0x0)) {
          iVar2 = (*pcVar5)(param_1,DAT_00014db4,&local_94);
        }
        else {
          iVar2 = (*pcVar6)(param_1,DAT_00014db4,&local_94);
        }
        if (iVar2 == 0) {
          local_70 = local_8c;
          local_6c = local_88;
          local_68 = local_84;
          if (local_90 == 0x20) {
            uVar3 = 1;
LAB_00014d2a:
            *(undefined1 *)(param_4 + 2) = uVar3;
          }
          else {
            if (0x20 < local_90) {
              if (local_90 == 0x40) {
                uVar3 = 2;
              }
              else {
                if (local_90 != 0x80) goto LAB_00014d08;
                uVar3 = 3;
              }
              goto LAB_00014d2a;
            }
            if (local_90 != 0x10) {
LAB_00014d08:
              uVar3 = 0xff;
              goto LAB_00014d2a;
            }
            *(undefined1 *)(param_4 + 2) = 0;
          }
          if (local_84 - 0x5002U < 2) {
            if (local_80 != 0) {
              *(char *)(param_4 + 3) = (char)local_80;
            }
            if (local_7c != 0) {
              *(char *)(param_4 + 4) = (char)local_7c;
            }
          }
        }
      }
      if (0 < *DAT_00014db8) {
        printk(DAT_00014dbc,*(int *)(param_1 + 100) + 0x10,local_68,local_70,local_6c,local_64);
      }
      iVar2 = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = local_70;
      param_2[3] = local_6c;
      piVar4 = DAT_00014dc0;
      do {
        if ((local_68 == *piVar4) && (local_64 == piVar4[5])) {
          return DAT_00014dc0 + iVar2 * 6;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 6;
      } while (iVar2 != 0x1c);
      iVar2 = *(int *)(param_1 + 100);
      uVar1 = DAT_00014dc4;
      goto LAB_00014c8c;
    }
  }
  iVar2 = *(int *)(param_1 + 100);
  uVar1 = DAT_00014dac;
LAB_00014c8c:
  printk(uVar1,iVar2 + 0x10);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0x280;
  param_2[3] = 0x1e0;
  return (int *)0x0;
}



/* ===== rkcif_find_output_fmt @ 00014dc8 size=34 ===== */

int rkcif_find_output_fmt(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_00014dec;
  do {
    if (*(int *)(iVar1 + 8) == param_2) {
      return iVar2 * 0x1c + DAT_00014dec;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x1c;
  } while (iVar2 != 0x22);
  return 0;
}



/* ===== rkcif_csi_stream_start @ 00014df0 size=4544 ===== */

int rkcif_csi_stream_start(byte *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar7;
  uint extraout_r2;
  int iVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  code *pcVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint extraout_r12;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint local_48;
  undefined4 local_40;
  uint local_3c;
  
  iVar16 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(*(int *)(iVar16 + 0x34c) + 4);
  uVar7 = *(uint *)(*(int *)(iVar16 + 0x34c) + 8);
  if (*(uint *)(param_1 + 0x510) < 2) {
    param_1[0x51c] = 0;
    param_1[0x51d] = 0;
    param_1[0x51e] = 0;
    param_1[0x51f] = 0;
    param_1[0xbc4] = 0;
    param_1[0xbc5] = 0;
    param_1[0xbc6] = 0;
    param_1[0xbc7] = 0;
    param_1[0x520] = 0;
    param_1[0x521] = 0;
    param_1[0x522] = 0;
    param_1[0x523] = 0;
    param_1[0xbc0] = 0;
    param_1[0xbc1] = 0;
    param_1[0xbc2] = 0;
    param_1[0xbc3] = 0;
    param_1[0xc05] = 0;
    param_1[0xc06] = 0;
  }
  iVar22 = 4;
  iVar9 = 0;
  do {
    uVar2 = (undefined1)iVar9;
    if ((int)(uVar7 << 0x1b) < 0) {
      uVar7 = uVar7 ^ 0x10;
      *(undefined1 *)(iVar9 * 0x68 + iVar16 + 0x71ca) = uVar2;
      iVar9 = iVar9 + 1;
    }
    else if ((int)(uVar7 << 0x1a) < 0) {
      uVar7 = uVar7 ^ 0x20;
      *(undefined1 *)(iVar9 * 0x68 + iVar16 + 0x71ca) = uVar2;
      iVar9 = iVar9 + 1;
    }
    else if ((int)(uVar7 << 0x19) < 0) {
      uVar7 = uVar7 ^ 0x40;
      *(undefined1 *)(iVar9 * 0x68 + iVar16 + 0x71ca) = uVar2;
      iVar9 = iVar9 + 1;
    }
    else {
      iVar4 = uVar7 << 0x18;
      bVar23 = iVar4 < 0;
      if (bVar23) {
        uVar7 = uVar7 ^ 0x80;
        iVar4 = iVar9 * 0x68 + iVar16;
      }
      if (bVar23) {
        *(undefined1 *)(iVar4 + 0x71ca) = uVar2;
        iVar9 = iVar9 + 1;
      }
    }
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  if (iVar9 == 0) {
    *(undefined4 *)(iVar16 + 0x7368) = 1;
LAB_00014e54:
    *(undefined1 *)(iVar16 + 0x71ca) = 0;
  }
  else {
    *(int *)(iVar16 + 0x7368) = iVar9;
    if (iVar9 == 1) goto LAB_00014e54;
  }
  uVar7 = *param_1 & 7;
  iVar9 = uVar7 * 0x68;
  *(byte *)(iVar16 + iVar9 + 0x71c8) = (byte)(((uint)*param_1 << 0x1d) >> 0x1d);
  if (iVar8 == 4) {
    iVar22 = *(int *)(iVar16 + 0x350);
    if (iVar22 == 0) {
      iVar4 = -0x13;
LAB_00014ee6:
      printk(DAT_00015048,iVar16 + 0x1c);
      return iVar4;
    }
    iVar4 = DAT_0001504c;
    if ((**(int **)(iVar22 + 0x68) == 0) ||
       (pcVar10 = *(code **)(**(int **)(iVar22 + 0x68) + 0x18), pcVar10 == (code *)0x0))
    goto LAB_00014ee6;
    if ((*DAT_00015040 == 0) || (pcVar17 = *(code **)(*DAT_00015040 + 0x18), pcVar17 == (code *)0x0)
       ) {
      iVar4 = (*pcVar10)(iVar22,DAT_00015044,iVar9 + 0x71ec + iVar16);
    }
    else {
      iVar4 = (*pcVar17)(iVar22,DAT_00015044);
    }
    if (iVar4 != 0) goto LAB_00014ee6;
  }
  iVar4 = *(int *)(param_1 + 4);
  iVar22 = uVar7 * 0x68 + iVar16;
  local_48 = (uint)*(byte *)((*param_1 & 7) * 0x68 + iVar4 + 0x71ca);
  *(undefined1 *)(iVar22 + 0x71c9) = 1;
  *(undefined4 *)(iVar22 + 0x71d4) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(iVar22 + 0x71d8) = *(undefined4 *)(param_1 + 0x580);
  cVar1 = *(char *)(*(int *)(param_1 + 0x574) + 0x10);
  *(char *)(iVar22 + 0x71cf) = cVar1;
  *(undefined1 *)(iVar22 + 0x71ce) = 0;
  *(undefined4 *)(iVar22 + 0x71e8) = *(undefined4 *)(iVar4 + 0x3e0);
  if (param_1[0xbf9] == 0) {
    *(undefined4 *)(iVar22 + 0x71d4) = *(undefined4 *)(param_1 + 0x57c);
    *(undefined4 *)(iVar22 + 0x71d8) = *(undefined4 *)(param_1 + 0x580);
    *(undefined1 *)(iVar22 + 0x71cd) = 0;
  }
  else {
    *(undefined1 *)(iVar22 + 0x71cd) = 1;
    iVar6 = *(int *)(param_1 + 0x63c);
    if (cVar1 == '\x06') {
      iVar6 = iVar6 * 3;
    }
    else if (cVar1 == '\x0e') {
      iVar6 = iVar6 << 1;
    }
    *(int *)(iVar22 + 0x71e0) = iVar6;
    iVar18 = uVar7 * 0x68 + iVar16;
    iVar22 = *(int *)(param_1 + 0x640);
    iVar6 = uVar7 * 0x68 + iVar16;
    *(int *)(iVar18 + 0x71e4) = iVar22;
    if (*(int *)(iVar4 + 0x8040) - 2U < 3) {
      *(int *)(iVar18 + 0x71e4) = *(int *)(iVar4 + 0x8040) * iVar22;
    }
    *(undefined4 *)(iVar6 + 0x71d4) = *(undefined4 *)(param_1 + 0x644);
    *(undefined4 *)(iVar6 + 0x71d8) = *(undefined4 *)(param_1 + 0x648);
  }
  if (*(int *)(iVar4 + 0x8040) - 2U < 3) {
    iVar22 = uVar7 * 0x68 + iVar16;
    *(int *)(iVar22 + 0x71d8) = *(int *)(iVar22 + 0x71d8) * *(int *)(iVar4 + 0x8040);
  }
  uVar19 = *(undefined4 *)(param_1 + 0x584);
  pbVar5 = (byte *)rkcif_find_output_fmt(param_1,uVar19);
  if (pbVar5 == (byte *)0x0) {
    printk(DAT_00015050,iVar4 + 0x1c,uVar19);
    local_48 = extraout_r1;
  }
  else {
    iVar22 = *(int *)(uVar7 * 0x68 + iVar16 + 0x71d4);
    if (((*(int *)(pbVar5 + 0x18) == 1) && (param_1[0xbfb] != 0)) &&
       ((*(uint *)(pbVar5 + 0x10) & 0xfffffff7) != 6)) {
      uVar11 = ((uint)pbVar5[0x16] * iVar22 >> 3) + 0xff & 0xffffff00;
    }
    else {
      uVar11 = ((uint)*pbVar5 * iVar22 >> 3) + 7 & 0xfffffff8;
    }
    iVar22 = uVar7 * 0x68 + iVar16;
    *(uint *)(iVar22 + 0x71dc) = uVar11;
    if ((*(byte *)(iVar22 + 0x71cf) & 0xf7) == 6) {
      *(uint *)(iVar22 + 0x71d4) = (uint)*pbVar5 * *(int *)(iVar22 + 0x71d4) >> 3;
    }
    iVar22 = *(int *)(*(int *)(param_1 + 0x574) + 8);
    if (((iVar22 == DAT_00015308) || (iVar22 == DAT_00015308 + -0xffff00)) ||
       ((iVar22 == DAT_0001530c || (iVar22 == DAT_0001530c + -0xffff)))) {
      if (*(int *)(iVar4 + 0x736c) < 9) {
        iVar22 = uVar7 * 0x68 + iVar16;
        *(undefined1 *)(iVar22 + 0x71cf) = 0;
        *(int *)(iVar22 + 0x71d4) = *(int *)(iVar22 + 0x71d4) << 1;
      }
      iVar22 = uVar7 * 0x68 + iVar16;
      *(int *)(iVar22 + 0x71dc) = *(int *)(iVar22 + 0x71dc) << 1;
    }
    if (*(int *)(*(int *)(param_1 + 0x578) + 0x14) == 4) {
      iVar22 = uVar7 * 0x68 + iVar16;
      *(int *)(iVar22 + 0x71dc) = *(int *)(iVar22 + 0x71dc) << 1;
      *(uint *)(iVar22 + 0x71d8) = *(uint *)(iVar22 + 0x71d8) >> 1;
    }
    if (**(int **)(param_1 + 0x578) - 0x5002U < 2) {
      cVar1 = *(char *)((*param_1 & 7) * 0x68 + iVar4 + 0x71cb);
      iVar22 = uVar7 * 0x68 + iVar16;
      if (cVar1 == '\0') goto LAB_00015218;
      *(char *)(iVar22 + 0x71cb) = cVar1;
    }
    else {
      iVar22 = uVar7 * 0x68 + iVar16;
LAB_00015218:
      uVar2 = get_data_type(**(int **)(param_1 + 0x578),*(undefined1 *)(iVar22 + 0x71ce),
                            *(undefined1 *)(iVar22 + 0x71e8));
      *(undefined1 *)(iVar22 + 0x71cb) = uVar2;
    }
    if (**(int **)(param_1 + 0x578) - 0x5002U < 2) {
      uVar11 = *(byte *)((*param_1 & 7) * 0x68 + iVar4 + 0x71cc) - 8 & 0xff;
      if (uVar11 < 5) {
        uVar2 = *(undefined1 *)(uVar11 + DAT_00015310 + 0x6f0);
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar11 = (*(int **)(param_1 + 0x578))[2];
      if ((uVar11 & 0xfffffff7) == 6) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined1)uVar11;
      }
    }
    *(undefined1 *)(uVar7 * 0x68 + iVar16 + 0x71d0) = uVar2;
    iVar22 = *(int *)(iVar4 + 0x73a1);
    if ((iVar22 != 0) && (iVar22 != 7)) {
      if (iVar22 == 5) {
        bVar24 = (*param_1 & 7) != 0;
        bVar23 = (*param_1 & 7) == 1;
LAB_000151b8:
        if (bVar24 && !bVar23) goto LAB_000151c8;
      }
      else if (iVar22 == 6) {
        bVar24 = 1 < (*param_1 & 7);
        bVar23 = (*param_1 & 7) == 2;
        goto LAB_000151b8;
      }
      local_48 = (uint)*(byte *)(uVar7 * 0x68 + iVar16 + 0x71c8);
    }
LAB_000151c8:
    iVar22 = uVar7 * 0x68 + iVar16;
    *(char *)(iVar22 + 0x71ca) = (char)local_48;
    if (0 < *DAT_00015314) {
      printk(DAT_00015318,iVar4 + 0x1c,DAT_0001531c,*(undefined4 *)(iVar22 + 0x71d4),
             *(undefined4 *)(iVar22 + 0x71d8),*(undefined4 *)(iVar22 + 0x71dc),local_48);
      local_48 = extraout_r1_00;
    }
  }
  iVar22 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x510) == 2) {
    if (*(int *)(iVar22 + 0x736c) < 9) {
      return 0;
    }
    if (param_2 == 1) {
LAB_00015fea:
      *(int *)(param_1 + 0x78c) = param_2;
      return 0;
    }
    if (param_2 != 8) {
      if (param_2 != 2) {
        if (param_2 != 0x10) {
          return 0;
        }
        goto LAB_00015fea;
      }
      if (*(int *)(iVar16 + 0x73a1) == 5) {
        bVar3 = *param_1 & 7;
      }
      else {
        if (*(int *)(iVar16 + 0x73a1) != 6) {
          return 0;
        }
        bVar3 = *param_1 & 6;
      }
      if (bVar3 != 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x788) != 0) {
        return 0;
      }
    }
    param_1[0x78c] = 2;
    param_1[0x78d] = 0;
    param_1[0x78e] = 0;
    param_1[0x78f] = 0;
    return 0;
  }
  if (param_2 == 1) {
    uVar11 = *(uint *)(param_1 + 0x788) | 1;
LAB_00015018:
    *(uint *)(param_1 + 0x788) = uVar11;
  }
  else {
    if (param_2 == 8) {
LAB_00015258:
      uVar11 = *(uint *)(param_1 + 0x788) | 2;
      goto LAB_00015018;
    }
    if (param_2 == 2) {
      if (*(int *)(iVar16 + 0x73a1) == 5) {
        bVar3 = *param_1 & 7;
      }
      else {
        if (*(int *)(iVar16 + 0x73a1) != 6) goto LAB_0001527a;
        bVar3 = *param_1 & 6;
      }
      if (bVar3 == 0) goto LAB_00015258;
    }
    else if (param_2 == 0x10) {
      uVar11 = *(uint *)(param_1 + 0x788) | 0x10;
      goto LAB_00015018;
    }
  }
LAB_0001527a:
  iVar9 = iVar16 + iVar9 + 0x71c8;
  iVar4 = uVar7 * 0x68 + iVar16;
  bVar3 = *(byte *)(iVar4 + 0x71c8);
  if (*(int *)(iVar22 + 0x736c) < 9) {
    if (3 < bVar3) goto LAB_000152a2;
    uVar11 = 0;
    if (*(char *)(iVar4 + 0x71c9) != '\0') {
      rkcif_write_register_and
                (iVar22,0x5b,
                 ~(1 << (uint)(byte)(bVar3 + 0x15) | 3 << (uint)(byte)(bVar3 * '\x02') |
                  3 << (uint)(byte)(bVar3 * '\x02' + 8)));
      rkcif_write_register_or(iVar22,0x5a,3 << ((*(byte *)(iVar4 + 0x71c8) & 0x7f) << 1));
      if (*(char *)(iVar22 + 0xfe6) == '\0') {
        uVar11 = 0x3fff;
      }
      else {
        rkcif_write_register_or(iVar22,0x5a,1 << (*(byte *)(iVar4 + 0x71c8) + 0x15 & 0xff));
        uVar11 = *(uint *)(iVar22 + 0x7ffc);
      }
      uVar11 = uVar11 | uVar11 << 0x10;
      rkcif_write_register(iVar22,0x5c,uVar11);
      iVar4 = uVar7 * 0x68 + iVar16;
      rkcif_write_register(iVar22,0x5d,uVar11);
      rkcif_write_register_or(iVar22,0x5a,3 << ((*(byte *)(iVar4 + 0x71c8) + 4) * 2 & 0xff));
      rkcif_write_register(iVar22,0x38,DAT_00015618);
      if (iVar8 == 4) {
        cVar1 = *(char *)(iVar4 + 0x71cf);
        if (cVar1 == '\x04') {
          uVar11 = 0x7475;
        }
        else {
          uVar11 = 0x7275;
          if (cVar1 != '\x02') {
            uVar11 = 0x7075;
          }
        }
        uVar11 = uVar11 | 0x100;
      }
      else {
        uVar11 = 0x7075;
      }
      rkcif_write_register(iVar22,0x39,uVar11);
      rkcif_write_register_or(iVar22,0x5a,0x1f0000);
      iVar4 = uVar7 * 0x68 + iVar16;
      uVar12 = *(byte *)(uVar7 * 0x68 + iVar16 + 0x71c8) - 1;
      if (uVar12 < 3) {
        uVar2 = *(undefined1 *)(uVar12 + DAT_0001561c + 0x70c);
      }
      else {
        uVar2 = 0x31;
      }
      rkcif_write_register
                (iVar22,uVar2,*(uint *)(iVar4 + 0x71d4) | *(int *)(iVar4 + 0x71d8) << 0x10);
      iVar6 = uVar7 * 0x68 + iVar16;
      uVar12 = *(byte *)(iVar4 + 0x71c8) - 1;
      iVar4 = uVar7 * 0x68 + iVar16;
      if (uVar12 < 3) {
        uVar2 = *(undefined1 *)(uVar12 + DAT_0001561c + 0x70f);
      }
      else {
        uVar2 = 0x3e;
      }
      rkcif_write_register(iVar22,uVar2,*(undefined4 *)(iVar6 + 0x71dc));
      uVar12 = *(byte *)(iVar6 + 0x71c8) - 1;
      if (uVar12 < 3) {
        uVar2 = *(undefined1 *)(uVar12 + DAT_0001561c + 0x712);
      }
      else {
        uVar2 = 0x3f;
      }
      rkcif_write_register(iVar22,uVar2,*(undefined4 *)(iVar4 + 0x71dc));
      iVar6 = uVar7 * 0x68 + iVar16;
      uVar12 = *(byte *)(iVar4 + 0x71c8) - 1;
      iVar4 = uVar7 * 0x68 + iVar16;
      if (uVar12 < 3) {
        uVar2 = *(undefined1 *)(uVar12 + DAT_0001561c + 0x715);
      }
      else {
        uVar2 = 0x40;
      }
      rkcif_write_register(iVar22,uVar2,*(undefined4 *)(iVar6 + 0x71dc));
      uVar12 = *(byte *)(iVar6 + 0x71c8) - 1;
      if (uVar12 < 3) {
        uVar2 = *(undefined1 *)(uVar12 + DAT_0001561c + 0x718);
      }
      else {
        uVar2 = 0x41;
      }
      rkcif_write_register(iVar22,uVar2,*(undefined4 *)(iVar4 + 0x71dc));
      if (*(char *)(iVar4 + 0x71cd) != '\0') {
        uVar12 = *(byte *)(iVar4 + 0x71c8) - 1;
        if (uVar12 < 3) {
          uVar2 = *(undefined1 *)(uVar12 + DAT_0001561c + 0x71b);
        }
        else {
          uVar2 = 0x60;
        }
        iVar4 = uVar7 * 0x68 + iVar16;
        rkcif_write_register
                  (iVar22,uVar2,*(uint *)(iVar4 + 0x71e0) | *(int *)(iVar4 + 0x71e4) << 0x10);
      }
      iVar4 = uVar7 * 0x68 + iVar16;
      rkcif_assign_new_buffer_init(param_1,*(undefined1 *)(iVar4 + 0x71c8));
      if (iVar8 == 5) {
        uVar12 = *(byte *)(iVar4 + 0x71cf) | 1 | (uint)*(byte *)(iVar4 + 0x71cb) << 10 |
                 (uint)*(byte *)(iVar4 + 0x71ce) << 4;
        uVar11 = (uint)*(byte *)(iVar4 + 0x71ca) << 8;
        if (param_1[0xbfb] == 0) {
          uVar11 = uVar12 & 0xffffffbf | uVar11 | 0x20;
        }
        else {
          uVar11 = uVar12 | uVar11 | 0x60;
        }
        if (7 < *(int *)(*(int *)(param_1 + 4) + 0x736c)) {
          uVar11 = uVar11 | *(uint *)(*(int *)(param_1 + 0x578) + 0xc);
        }
      }
      else if (iVar8 == 4) {
        rkcif_csi_set_lvds_sav_eav(param_1,iVar9);
        uVar11 = *(int *)(*(int *)(iVar22 + 0x34c) + 0x3c) - 2;
        if (uVar11 < 3) {
          uVar11 = *(uint *)(DAT_0001561c + uVar11 * 4 + 0x720);
        }
        else {
          uVar11 = 0x100000;
        }
        uVar11 = (*(uint *)(iVar4 + 0x71ec) & 7) << 0x11 | uVar11;
        if (param_1[0xbfb] != 0) {
          uVar11 = uVar11 | 0x20000000;
        }
        uVar11 = uVar11 | 0x10000;
      }
      if (param_1[0xc02] == 0) {
        uVar11 = uVar11 & 0x7fffffff;
      }
      else {
        uVar11 = uVar11 | 0x80000000;
      }
      local_48 = 0x71c8;
      bVar3 = *(byte *)(uVar7 * 0x68 + iVar16 + 0x71c8);
    }
LAB_000152f0:
    uVar19 = get_reg_index_of_id_ctrl0(bVar3,local_48,uVar11);
    rkcif_write_register(iVar22,uVar19);
  }
  else {
    if (3 < bVar3) goto LAB_000152a2;
    uVar11 = 0;
    if (*(char *)(iVar4 + 0x71c9) == '\0') goto LAB_000152f0;
    iVar6 = *(int *)(iVar22 + 0x7ee0);
    rkcif_write_register_and
              (iVar22,0x5b,
               ~(1 << (uint)(byte)(bVar3 + 0x14) | 3 << (uint)(byte)(bVar3 * '\x02') |
                3 << (uint)(byte)(bVar3 * '\x02' + 8)));
    rkcif_write_register_or(iVar22,0x5a,3 << ((*(byte *)(iVar4 + 0x71c8) & 0x7f) << 1));
    if (((iVar6 == 0) || (*(int *)(iVar6 + 0x1d8) == 0)) || (*(char *)(iVar22 + 0xfe6) == '\0')) {
      uVar11 = 0x3fff;
    }
    else {
      rkcif_write_register_or(iVar22,0x5a,1 << (*(byte *)(iVar4 + 0x71c8) + 0x14 & 0xff));
      uVar11 = *(uint *)(iVar22 + 0x7ffc);
    }
    uVar11 = uVar11 | uVar11 << 0x10;
    rkcif_write_register(iVar22,0x5c,uVar11);
    rkcif_write_register(iVar22,0x5d,uVar11);
    rkcif_write_register_or
              (iVar22,0x5a,3 << ((*(byte *)(uVar7 * 0x68 + iVar16 + 0x71c8) + 4) * 2 & 0xff));
    uVar11 = iVar8 - 5;
    if (*(int *)(*(int *)(param_1 + 4) + 0x7ff0) == 0) {
      uVar19 = 0x7075;
      if (1 < uVar11) {
        uVar19 = 0x707d;
      }
      rkcif_write_register(iVar22,0x39,uVar19);
      rkcif_write_register_or(iVar22,0x5a,DAT_00015a30);
    }
    if (*(char *)(uVar7 * 0x68 + iVar16 + 0x71c8) == '\x01') {
      rv1106_sdmmc_get_lock();
    }
    iVar4 = uVar7 * 0x68 + iVar16;
    uVar12 = *(byte *)(uVar7 * 0x68 + iVar16 + 0x71c8) - 1;
    if (uVar12 < 3) {
      uVar2 = *(undefined1 *)(uVar12 + DAT_00015a34 + 0x70c);
    }
    else {
      uVar2 = 0x31;
    }
    rkcif_write_register(iVar22,uVar2,*(uint *)(iVar4 + 0x71d4) | *(int *)(iVar4 + 0x71d8) << 0x10);
    if (*(char *)(iVar4 + 0x71c8) == '\x01') {
      rv1106_sdmmc_put_lock();
    }
    iVar4 = uVar7 * 0x68 + iVar16;
    uVar12 = *(byte *)(uVar7 * 0x68 + iVar16 + 0x71c8) - 1;
    if (uVar12 < 3) {
      uVar2 = *(undefined1 *)(uVar12 + DAT_00015a34 + 0x70f);
    }
    else {
      uVar2 = 0x3e;
    }
    rkcif_write_register(iVar22,uVar2,*(undefined4 *)(iVar4 + 0x71dc));
    if (*(char *)(iVar4 + 0x71cd) != '\0') {
      uVar12 = *(byte *)(iVar4 + 0x71c8) - 1;
      if (uVar12 < 3) {
        uVar2 = *(undefined1 *)(uVar12 + DAT_00015a34 + 0x71b);
      }
      else {
        uVar2 = 0x60;
      }
      iVar4 = uVar7 * 0x68 + iVar16;
      rkcif_write_register
                (iVar22,uVar2,*(uint *)(iVar4 + 0x71e0) | *(int *)(iVar4 + 0x71e4) << 0x10);
    }
    if (param_2 == 1) {
      rkcif_assign_new_buffer_init(param_1,*(undefined1 *)(uVar7 * 0x68 + iVar16 + 0x71c8));
    }
    else if ((param_2 == 2) || (param_2 == 8)) {
      rkcif_assign_new_buffer_init_toisp(param_1,*(undefined1 *)(uVar7 * 0x68 + iVar16 + 0x71c8));
    }
    else if (param_2 == 0x10) {
      iVar18 = *(int *)(param_1 + 4);
      uVar12 = (uint)*(byte *)(uVar7 * 0x68 + iVar16 + 0x71c8);
      iVar4 = *(int *)(iVar18 + 0x34c);
      iVar6 = *(int *)(iVar18 + 0x7ed4);
      if (*(int *)(iVar4 + 4) - 4U < 3) {
        uVar19 = get_reg_index_of_frm0_y_addr();
        if (uVar12 - 1 < 3) {
          uVar13 = (uint)*(byte *)(DAT_00015a34 + (uVar12 - 1) + 0x444);
        }
        else {
          uVar13 = 0x3c;
        }
        uVar25 = get_reg_index_of_frm1_y_addr(uVar12,uVar19);
        if (extraout_r2 < 3) {
          local_3c = (uint)*(byte *)(extraout_r2 + DAT_00015a34 + 0x447);
        }
        else {
          local_3c = 0x3d;
        }
      }
      else {
        uVar19 = get_dvp_reg_index_of_frm0_y_addr(uVar12);
        uVar13 = get_dvp_reg_index_of_frm0_uv_addr(uVar12,uVar19);
        if (uVar12 < 4) {
          uVar20 = (uint)*(byte *)(DAT_00015a34 + uVar12 + 0x1e);
        }
        else {
          uVar20 = 7;
        }
        uVar26 = get_dvp_reg_index_of_frm1_uv_addr(uVar12);
        uVar25 = CONCAT44((int)((ulonglong)uVar26 >> 0x20),uVar20);
        local_3c = (uint)uVar26;
      }
      uVar19 = (undefined4)((ulonglong)uVar25 >> 0x20);
      local_40 = (undefined4)uVar25;
      disableIRQinterrupts();
      if ((*(int *)(param_1 + 0x54c) == 0) && (*(byte **)(param_1 + 0x544) != param_1 + 0x544)) {
        *(int *)(param_1 + 0x54c) = *(int *)(param_1 + 0x544) + -0x280;
        list_del();
        uVar19 = extraout_r1_01;
      }
      if (*(int *)(param_1 + 0x54c) == 0) {
        if (*(int *)(iVar6 + 0x194) == 0) {
          if (*(int *)(param_1 + 0xbc0) < 2) {
            *(int *)(param_1 + 0xbc0) = *(int *)(param_1 + 0xbc0) + 1;
          }
        }
        else {
          rkcif_write_register(iVar18,uVar19,*(undefined4 *)(iVar6 + 0x188));
          if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) != 1) {
            uVar19 = *(undefined4 *)(iVar6 + 0x188);
            goto LAB_000159b2;
          }
        }
      }
      else {
        rkcif_write_register(iVar18,uVar19,*(undefined4 *)(*(int *)(param_1 + 0x54c) + 0x288));
        if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) != 1) {
          uVar19 = *(undefined4 *)(*(int *)(param_1 + 0x54c) + 0x28c);
LAB_000159b2:
          rkcif_write_register(iVar18,uVar13,uVar19);
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x578) + 0x14) == 4) {
        iVar14 = *(int *)(param_1 + 0x54c);
        *(int *)(param_1 + 0x550) = iVar14;
        if (iVar14 != 0) {
          iVar21 = uVar12 * 0x68 + iVar18;
          rkcif_write_register
                    (iVar18,local_40,*(int *)(iVar14 + 0x288) + (*(uint *)(iVar21 + 0x71dc) >> 1));
          if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) != 1) {
            iVar14 = *(int *)(*(int *)(param_1 + 0x550) + 0x28c) + (*(uint *)(iVar21 + 0x71dc) >> 1)
            ;
            goto LAB_00015a06;
          }
        }
      }
      else {
        if ((*(int *)(param_1 + 0x550) == 0) && (*(byte **)(param_1 + 0x544) != param_1 + 0x544)) {
          *(int *)(param_1 + 0x550) = *(int *)(param_1 + 0x544) + -0x280;
          list_del();
        }
        if (*(int *)(param_1 + 0x550) == 0) {
          if (*(int *)(iVar6 + 0x194) == 0) {
            iVar14 = *(int *)(param_1 + 0x54c);
            if (iVar14 != 0) {
              *(int *)(param_1 + 0x550) = iVar14;
              rkcif_write_register(iVar18,local_40,*(undefined4 *)(iVar14 + 0x288));
              if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) != 1) {
                rkcif_write_register
                          (iVar18,local_3c,*(undefined4 *)(*(int *)(param_1 + 0x550) + 0x28c));
              }
            }
            if (*(int *)(param_1 + 0xbc0) < 2) {
              *(int *)(param_1 + 0xbc0) = *(int *)(param_1 + 0xbc0) + 1;
            }
          }
          else {
            rkcif_write_register(iVar18,local_40,*(undefined4 *)(iVar6 + 0x188));
            if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) != 1) {
              iVar14 = *(int *)(iVar6 + 0x188);
              goto LAB_00015a06;
            }
          }
        }
        else {
          rkcif_write_register(iVar18,local_40,*(undefined4 *)(*(int *)(param_1 + 0x550) + 0x288));
          if (*(int *)(*(int *)(param_1 + 0x574) + 0x18) != 1) {
            iVar14 = *(int *)(*(int *)(param_1 + 0x550) + 0x28c);
LAB_00015a06:
            rkcif_write_register(iVar18,local_3c,iVar14);
          }
        }
      }
      param_1[0xbfc] = 1;
      if (*(int *)(iVar4 + 4) == 2) {
        iVar4 = 0;
        do {
          if ((*(char *)(iVar18 + 0xfe4 + iVar4 * 0xc08) == '\0') && (*(int *)(iVar6 + 0x188) != 0))
          {
            uVar19 = get_dvp_reg_index_of_frm0_y_addr(iVar4);
            rkcif_write_register(iVar18,uVar19);
            uVar19 = get_dvp_reg_index_of_frm0_uv_addr(iVar4);
            rkcif_write_register(iVar18,uVar19,*(undefined4 *)(iVar6 + 0x188));
            rkcif_write_register
                      (iVar18,*(undefined1 *)(DAT_00015e48 + iVar4),*(undefined4 *)(iVar6 + 0x188));
            uVar19 = get_dvp_reg_index_of_frm1_uv_addr(iVar4);
            rkcif_write_register(iVar18,uVar19,*(undefined4 *)(iVar6 + 0x188));
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 4);
      }
      param_1[0x794] = 0x10;
      param_1[0x795] = 0;
      param_1[0x796] = 0;
      param_1[0x797] = 0;
    }
    uVar12 = 0;
    if (*(int *)(param_1 + 0xbc0) == 2) {
      param_1[0x788] = 0;
      param_1[0x789] = 0;
      param_1[0x78a] = 0;
      param_1[0x78b] = 0;
LAB_0001580e:
      if (uVar11 < 2) {
        uVar11 = 0;
        goto LAB_00015818;
      }
      uVar11 = 0;
LAB_00015bac:
      if (iVar8 == 4) {
        rkcif_csi_set_lvds_sav_eav(param_1,iVar9);
        uVar13 = *(int *)(*(int *)(iVar22 + 0x34c) + 0x3c) - 2;
        if (uVar13 < 3) {
          uVar15 = uVar13 + DAT_00015e4c;
          uVar20 = extraout_r12;
        }
        else {
          uVar20 = 0x10;
          uVar15 = uVar13;
        }
        if (uVar13 < 3) {
          uVar20 = (uint)*(byte *)(uVar15 + 0x72c);
        }
        uVar13 = *(uint *)(*(int *)(param_1 + 0x574) + 8);
        if (*(int *)(*(int *)(param_1 + 4) + 0x736c) == 10) {
          iVar9 = 0x11;
          iVar8 = 9;
        }
        else {
          iVar9 = 0;
          iVar8 = iVar9;
        }
        if (uVar13 == DAT_00015e50) {
LAB_00015c54:
          if (param_1[0xbfb] == 0) {
LAB_00015f36:
            iVar8 = 0x20;
LAB_00015f98:
            uVar12 = iVar8 << iVar9;
          }
        }
        else {
          if (uVar13 < DAT_00015e50) {
            if (uVar13 != DAT_00015e50 + 0xfe000000) {
              if (uVar13 < DAT_00015e50 + 0xfe000000) {
                if (uVar13 == DAT_00015e50 + 0xee04ea07) goto LAB_00015f36;
                uVar15 = DAT_00015e54;
                if (DAT_00015e50 + 0xee04ea07 <= uVar13) goto LAB_00015e30;
                if (uVar13 != DAT_00015e50 + 0xedfeea07) {
                  uVar15 = DAT_00015e50 + 0xee00ea07;
                  goto LAB_00015c4e;
                }
              }
              else if (uVar13 != DAT_00016048) {
                uVar15 = DAT_00016050;
                if (uVar13 < DAT_00016048) {
                  if (uVar13 == DAT_00016048 - 0x5eaf4) {
                    iVar4 = 0xa0;
                  }
                  else {
                    if (uVar13 != DAT_00016048 - 0x1eaf4) goto LAB_00015eb8;
                    iVar4 = 0x80;
                  }
LAB_00015fa0:
                  uVar12 = iVar4 << iVar9;
                  iVar9 = 0x40000;
                  goto LAB_00015fa8;
                }
LAB_00015e30:
                if ((uVar13 != uVar15) && (uVar13 != uVar15 + 0x4fb)) {
                  uVar15 = uVar15 - 0x105;
                  goto LAB_00015c4e;
                }
              }
            }
            goto LAB_00015c54;
          }
          if (uVar13 == DAT_00016054) goto LAB_00015c54;
          if (uVar13 < DAT_00016054) {
            if (uVar13 == DAT_00016058) goto LAB_00015f36;
            if (uVar13 < DAT_00016058) {
              if (uVar13 != DAT_00016058 + 0xfc001407) {
                uVar15 = DAT_00016058 + 0xfc2116fb;
LAB_00015f32:
                if (uVar13 != uVar15) goto LAB_00015eb8;
                goto LAB_00015f36;
              }
              iVar8 = 0xa0;
            }
            else {
              if (uVar13 == DAT_0001605c) goto LAB_00015f36;
              if (uVar13 != DAT_0001605c + 0x407) {
                uVar15 = DAT_0001605c - 0xaf5;
                goto LAB_00015f32;
              }
              iVar8 = 0x80;
            }
            goto LAB_00015f98;
          }
          if (uVar13 == DAT_00016060) {
            uVar12 = 0x40 << iVar9;
            iVar9 = 0x80000;
LAB_00015fa8:
            uVar12 = uVar12 | iVar9 << iVar8;
          }
          else {
            if (uVar13 < DAT_00016060) {
              if (uVar13 == DAT_00016060 + 0xf0f8ecee) goto LAB_00015c54;
              if (uVar13 == DAT_00016064) {
                uVar12 = 0x40 << iVar9;
                iVar9 = 0xc0000;
                goto LAB_00015fa8;
              }
              uVar15 = DAT_00016064 + 0xf1e8fbee;
            }
            else {
              if (uVar13 == DAT_00016068) {
                iVar4 = 0x40;
                goto LAB_00015fa0;
              }
              if (uVar13 == DAT_00016068 + 0xffff) {
                iVar8 = 0x40;
                goto LAB_00015f98;
              }
              uVar15 = DAT_00016068 - 0x10070f;
            }
LAB_00015c4e:
            if (uVar13 == uVar15) goto LAB_00015c54;
          }
        }
LAB_00015eb8:
        uVar12 = (*(uint *)(uVar7 * 0x68 + iVar16 + 0x71ec) & 7) << 1 |
                 *(int *)(*(int *)(param_1 + 0x578) + 0xc) << 9 |
                 (uint)*(byte *)(uVar7 * 0x68 + iVar16 + 0x71d0) << 0x12 | uVar11 | uVar20 | uVar12;
        if (*(int *)(*(int *)(param_1 + 4) + 0x73a1) == 6) {
          uVar12 = uVar12 | 0x1000;
        }
        uVar12 = uVar12 | 1;
        uVar7 = *(byte *)(uVar7 * 0x68 + iVar16 + 0x71c8) - 1;
        if (uVar7 < 3) {
          uVar2 = *(undefined1 *)(uVar7 + DAT_0001604c + 0x44a);
        }
        else {
          uVar2 = 0x7c;
        }
        goto LAB_00015d24;
      }
    }
    else {
      if (*(int *)(param_1 + 0x788) == 0) goto LAB_0001580e;
      if (1 < uVar11) {
        uVar11 = 0x8000;
        goto LAB_00015bac;
      }
      uVar11 = 0x10000000;
LAB_00015818:
      if (*(int *)(*(int *)(param_1 + 4) + 0x73a5) - 1U < 2) {
        *(undefined1 *)(uVar7 * 0x68 + iVar16 + 0x71ca) = 0;
      }
      iVar8 = uVar7 * 0x68 + iVar16;
      uVar13 = *(uint *)(*(int *)(param_1 + 0x574) + 8);
      if (uVar13 == DAT_00015a38) {
LAB_000158aa:
        uVar15 = uVar12;
        if (param_1[0xbfb] == 0) {
          uVar15 = 0x20;
        }
      }
      else {
        if (uVar13 < DAT_00015a38) {
          if (uVar13 != DAT_00015a38 + 0xfe000000) {
            if (uVar13 < DAT_00015a38 + 0xfe000000) {
              if (uVar13 == DAT_00015a38 + 0xee04ea07) goto LAB_00015de8;
              uVar20 = DAT_00015e54;
              if (DAT_00015a38 + 0xee04ea07 <= uVar13) goto LAB_00015c68;
              if (uVar13 != DAT_00015a38 + 0xedfeea07) {
                uVar20 = DAT_00015a38 + 0xee00ea07;
                goto LAB_000158a4;
              }
            }
            else if (uVar13 != DAT_00015e58) {
              uVar20 = DAT_00015e68;
              if (uVar13 < DAT_00015e58) {
                uVar15 = DAT_00015e88;
                if ((uVar13 != DAT_00015e58 - 0x5eaf4) && (uVar15 = uVar12, uVar13 == DAT_00015e84))
                {
                  uVar15 = DAT_00015e5c;
                }
                goto LAB_00015ca2;
              }
LAB_00015c68:
              if ((uVar13 != uVar20) && (uVar13 != uVar20 + 0x4fb)) {
                uVar20 = uVar20 - 0x105;
LAB_000158a4:
                uVar15 = uVar12;
                if (uVar13 != uVar20) goto LAB_00015ca2;
              }
            }
          }
          goto LAB_000158aa;
        }
        if (uVar13 == DAT_00015e6c) goto LAB_000158aa;
        if (uVar13 < DAT_00015e6c) {
          if (uVar13 == DAT_00015e70) {
LAB_00015de8:
            uVar15 = 0x20;
          }
          else if (uVar13 < DAT_00015e70) {
            if (uVar13 == DAT_00015e70 + 0xfc001407) {
              uVar15 = 0xa0;
            }
            else {
              uVar20 = DAT_00015e70 + 0xfc2116fb;
LAB_00015d76:
              uVar15 = uVar12;
              if (uVar13 == uVar20) {
                uVar15 = 0x20;
              }
            }
          }
          else {
            if (uVar13 == DAT_00015e74) goto LAB_00015de8;
            if (uVar13 != DAT_00015e74 + 0x407) {
              uVar20 = DAT_00015e74 - 0xaf5;
              goto LAB_00015d76;
            }
            uVar15 = 0x80;
          }
        }
        else {
          uVar15 = DAT_00015e8c;
          if (uVar13 != DAT_00015e78) {
            if (uVar13 < DAT_00015e78) {
              if (uVar13 == DAT_00015e78 + 0xf0f8ecee) goto LAB_000158aa;
              uVar15 = DAT_00015e90;
              if (uVar13 != DAT_00015e7c) {
                uVar20 = DAT_00015e7c + 0xf1e8fbee;
                goto LAB_000158a4;
              }
            }
            else {
              uVar15 = DAT_00015e94;
              if (uVar13 != DAT_00015e80) {
                if (uVar13 != DAT_00015e80 + 0xffff) {
                  uVar20 = DAT_00015e80 - 0x10070f;
                  goto LAB_000158a4;
                }
                uVar15 = 0x40;
              }
            }
          }
        }
      }
LAB_00015ca2:
      uVar15 = (uint)*(byte *)(iVar8 + 0x71d0) | *(uint *)(*(int *)(param_1 + 0x578) + 0xc) |
               (uint)*(byte *)(iVar8 + 0x71ce) << 0x1a | (uint)*(byte *)(iVar8 + 0x71ca) << 8 |
               (uint)*(byte *)(iVar8 + 0x71cb) << 10 | uVar11 | uVar15;
      uVar11 = uVar15 | 0x11;
      iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x73a1);
      if ((iVar8 != 0) && (iVar8 != 7)) {
        if (iVar8 == 5) {
          uVar15 = uVar15 | 0x400000;
        }
        else {
          if (iVar8 != 6) goto LAB_00015cd8;
          uVar15 = uVar15 | 0x800000;
        }
        uVar11 = uVar15 | 0x11;
      }
LAB_00015cd8:
      iVar9 = *(int *)(*(int *)(param_1 + 4) + 0x73a5);
      if (iVar9 == 0) {
        if (iVar8 != 0) {
          uVar11 = uVar11 | 0x20000000;
        }
      }
      else if (iVar9 == 1) {
        uVar11 = uVar11 | 0x100000;
      }
      else if (iVar9 == 2) {
        uVar11 = uVar11 | 0x200000;
      }
      if (param_1[0xc02] == 0) {
        uVar11 = uVar11 & 0xf7ffffff;
      }
      else {
        uVar11 = uVar11 | 0x8000000;
      }
      uVar19 = get_reg_index_of_id_ctrl0
                         (*(undefined1 *)(uVar7 * 0x68 + iVar16 + 0x71c8),0x71c8,uVar11);
      rkcif_write_register(iVar22,uVar19);
      rkcif_write_register(iVar22,0x78,DAT_00015e60);
      uVar2 = 0x79;
      uVar12 = DAT_00015e64;
LAB_00015d24:
      rkcif_write_register(iVar22,uVar2,uVar12);
    }
    if (9 < *(int *)(iVar22 + 0x736c)) {
      rkcif_modify_frame_skip_config(param_1);
    }
    *(int *)(*(int *)(param_1 + 4) + 0x7ff0) = *(int *)(*(int *)(param_1 + 4) + 0x7ff0) + 1;
  }
  if (*(int *)(param_1 + 0x510) == 2) {
    return 0;
  }
LAB_000152a2:
  param_1[3000] = 0;
  param_1[0xbb9] = 0;
  param_1[0xbba] = 0;
  param_1[0xbbb] = 0;
  param_1[0xbbc] = 0;
  param_1[0xbbd] = 0;
  param_1[0xbbe] = 0;
  param_1[0xbbf] = 0;
  param_1[0xc00] = param_1[0xbfe] ^ 1;
  param_1[0x510] = 2;
  param_1[0x511] = 0;
  param_1[0x512] = 0;
  param_1[0x513] = 0;
  *(undefined4 *)(iVar16 + 0x739c) = 1;
  return 0;
}



/* ===== rkcif_stream_start @ 0001606c size=2306 ===== */

undefined4 rkcif_stream_start(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint local_50;
  uint local_44;
  int local_3c;
  int local_38;
  int iStack_34;
  uint local_30;
  int local_2c;
  
  iVar11 = *(int *)(param_1 + 4);
  if (*(uint *)(param_1 + 0x510) < 2) {
    param_1[0x51c] = 0;
    param_1[0x51d] = 0;
    param_1[0x51e] = 0;
    param_1[0x51f] = 0;
    param_1[0xbc4] = 0;
    param_1[0xbc5] = 0;
    param_1[0xbc6] = 0;
    param_1[0xbc7] = 0;
    param_1[0xbc0] = 0;
    param_1[0xbc1] = 0;
    param_1[0xbc2] = 0;
    param_1[0xbc3] = 0;
    param_1[0x520] = 0;
    param_1[0x521] = 0;
    param_1[0x522] = 0;
    param_1[0x523] = 0;
    param_1[0xc05] = 0;
    param_1[0xc06] = 0;
  }
  piVar6 = *(int **)(iVar11 + 0x34c);
  uVar13 = *(uint *)(param_1 + 0x788);
  if (param_2 << 0x1f < 0) {
    uVar7 = uVar13 | 1;
LAB_000160ac:
    *(uint *)(param_1 + 0x788) = uVar7;
  }
  else {
    if (param_2 << 0x1c < 0) {
      uVar7 = uVar13 | 2;
      goto LAB_000160ac;
    }
    if (param_2 << 0x1b < 0) {
      uVar7 = uVar13 | 0x10;
      goto LAB_000160ac;
    }
  }
  if (uVar13 != 0) {
    return 0;
  }
  uVar13 = piVar6[2];
  if ((uVar13 & 0xc0) == 0xc0) {
    if (*(int *)(iVar11 + 0x736c) < 9) {
      local_44 = 0x1000000;
    }
    else {
      local_44 = 0x800;
    }
    rkcif_enable_dvp_clk_dual_edge(iVar11,1);
  }
  else {
    rkcif_enable_dvp_clk_dual_edge(iVar11,0);
    local_44 = 0;
  }
  rkcif_config_dvp_pin(iVar11,1);
  rkcif_config_dvp_clk_sampling_edge(iVar11,-1 < (int)(uVar13 << 0x19));
  rv1106_sdmmc_get_lock();
  iVar1 = *piVar6;
  if ((iVar1 == 0) || (piVar6[1] != 2)) {
    uVar7 = 0;
    uVar15 = 0x20000000;
    local_50 = 0;
  }
  else {
    if ((**(int **)(iVar1 + 0x68) == 0) ||
       (pcVar9 = *(code **)(**(int **)(iVar1 + 0x68) + 0x18), pcVar9 == (code *)0x0)) {
LAB_0001611a:
      printk(DAT_00016460,iVar11 + 0x1c);
      uVar15 = 0x20000000;
      uVar7 = 0;
    }
    else {
      if ((*DAT_000166ec == 0) || (pcVar3 = *(code **)(*DAT_000166ec + 0x18), pcVar3 == (code *)0x0)
         ) {
        iVar1 = (*pcVar9)(iVar1,DAT_000166f0,&local_30);
      }
      else {
        iVar1 = (*pcVar3)(iVar1,DAT_000166f0,&local_30);
      }
      if (iVar1 != 0) goto LAB_0001611a;
      uVar15 = 0;
      if ((local_30 & 1) != 0) {
        uVar15 = 0x20000000;
      }
      if ((local_30 >> 2 & 0xc) == 0) {
        uVar7 = 0;
        if ((local_30 >> 2 & 0xe) != 0) {
          uVar7 = 0x40000000;
        }
      }
      else {
        uVar7 = 0x80000000;
      }
      rkcif_write_register_or
                (iVar11,6,local_2c << 0xc | 0x100U | local_2c << 4 | local_2c << 0x14 | 0x20000 |
                          local_2c << 0x1c | 0x3000000);
    }
    local_50 = 0x10000000;
  }
  iVar1 = *(int *)(param_1 + 4);
  piVar14 = *(int **)(iVar1 + 0x34c);
  if ((uVar13 & 4) == 0) {
    uVar16 = 2;
  }
  else {
    uVar16 = 0;
  }
  local_3c = 0;
  iVar2 = *piVar14;
  if (*(int *)(iVar11 + 0x736c) < 9) {
    if (((iVar2 != 0) && (iVar8 = *(int *)(*(int *)(iVar2 + 0x68) + 0xc), iVar8 != 0)) &&
       (pcVar9 = *(code **)(iVar8 + 0x18), pcVar9 != (code *)0x0)) {
      if ((*(int *)(DAT_00016464 + 0xc) == 0) ||
         (pcVar3 = *(code **)(*(int *)(DAT_00016464 + 0xc) + 0x18), pcVar3 == (code *)0x0)) {
        iVar2 = (*pcVar9)(iVar2,&local_38);
      }
      else {
        iVar2 = (*pcVar3)();
      }
      if (iVar2 == 0) {
        if (iStack_34 == 0 && local_38 == 0xb000) {
          uVar12 = 0xc;
        }
        else if (iStack_34 == 0 && local_38 == 0x3000000) {
          uVar12 = 0x1c;
        }
        else if (iStack_34 == 0 && local_38 == 0xff) {
          uVar12 = 8;
        }
        else {
          printk(DAT_00016468,iVar1 + 0x1c);
          uVar12 = 0;
        }
        goto LAB_000161c4;
      }
    }
    if (*(int *)(*(int *)(param_1 + 0x578) + 0x10) == 0) {
      uVar12 = 0;
      if ((7 < *(int *)(iVar1 + 0x736c)) && (piVar14[1] == 2)) {
        uVar12 = 8;
      }
    }
    else if (*(int *)(*(int *)(param_1 + 0x578) + 0x10) == 1) {
      if ((((7 < *(int *)(iVar1 + 0x736c)) && (iVar1 = *(int *)(iVar1 + 0x350), iVar1 != 0)) &&
          (**(int **)(iVar1 + 0x68) != 0)) &&
         (pcVar9 = *(code **)(**(int **)(iVar1 + 0x68) + 0x18), pcVar9 != (code *)0x0)) {
        if ((*DAT_000166ec == 0) ||
           (pcVar3 = *(code **)(*DAT_000166ec + 0x18), pcVar3 == (code *)0x0)) {
          iVar1 = (*pcVar9)(iVar1,DAT_000166f4,&local_3c);
        }
        else {
          iVar1 = (*pcVar3)(iVar1,DAT_000166f4,&local_3c);
        }
        if ((iVar1 == 0) && (local_3c == 1)) {
          uVar12 = 0x14;
          goto LAB_000161c4;
        }
      }
      uVar12 = 0x10;
    }
    else {
      uVar12 = 0;
    }
  }
  else {
    if (((iVar2 == 0) || (iVar8 = *(int *)(*(int *)(iVar2 + 0x68) + 0xc), iVar8 == 0)) ||
       (pcVar9 = *(code **)(iVar8 + 0x18), pcVar9 == (code *)0x0)) {
LAB_000165e8:
      if (*(int *)(*(int *)(param_1 + 0x578) + 0x10) == 0) {
        uVar12 = 0;
        if (piVar14[1] == 2) {
          if ((piVar14[2] & 0xc0U) == 0xc0) {
            uVar12 = 0xc;
          }
          else {
            uVar12 = 8;
          }
        }
      }
      else if (*(int *)(*(int *)(param_1 + 0x578) + 0x10) == 1) {
        iVar1 = *(int *)(iVar1 + 0x350);
        if (((iVar1 == 0) || (**(int **)(iVar1 + 0x68) == 0)) ||
           (pcVar9 = *(code **)(**(int **)(iVar1 + 0x68) + 0x18), pcVar9 == (code *)0x0)) {
LAB_00016618:
          uVar12 = 4;
        }
        else {
          if ((*DAT_000166ec == 0) ||
             (pcVar3 = *(code **)(*DAT_000166ec + 0x18), pcVar3 == (code *)0x0)) {
            iVar1 = (*pcVar9)(iVar1,DAT_000166f4,&local_3c);
          }
          else {
            iVar1 = (*pcVar3)(iVar1,DAT_000166f4,&local_3c);
          }
          if ((iVar1 != 0) || (local_3c != 1)) goto LAB_00016618;
          uVar12 = 0x10;
        }
        uVar12 = uVar12 | *(int *)(*(int *)(param_1 + 0x578) + 8) << 6;
      }
      else {
        uVar12 = 0;
      }
    }
    else {
      if ((DAT_000166ec[3] == 0) ||
         (pcVar3 = *(code **)(DAT_000166ec[3] + 0x18), pcVar3 == (code *)0x0)) {
        iVar2 = (*pcVar9)(iVar2,&local_38);
      }
      else {
        iVar2 = (*pcVar3)();
      }
      if (iVar2 != 0) goto LAB_000165e8;
      if (iStack_34 == 0 && local_38 == 0xb000) {
LAB_0001665e:
        uVar12 = 8;
      }
      else if (iStack_34 == 0 && local_38 == 0x3000000) {
        uVar12 = 0xc;
      }
      else {
        if (iStack_34 == 0 && local_38 == 0xff) goto LAB_0001665e;
        printk(DAT_000166f8,iVar1 + 0x1c);
        uVar12 = 0;
      }
    }
    if (*(int *)(*(int *)(param_1 + 0x578) + 0x14) != 1) {
      uVar12 = uVar12 | 0x200;
    }
  }
LAB_000161c4:
  piVar14 = *(int **)(param_1 + 0x578);
  iVar1 = *(int *)(iVar11 + 0x736c);
  if (iVar1 < 6) {
    if (uVar12 == 0x1c) {
      if (piVar14[5] == 1) {
        uVar17 = 0x2000000;
      }
      else {
        uVar17 = 0;
      }
LAB_000161e8:
      uVar10 = 0;
      if ((piVar14[1] & 0x7fU) >> 5 != 0) {
        uVar10 = 0x4000000;
      }
    }
    else {
LAB_000166aa:
      uVar10 = 0;
LAB_000166a4:
      uVar17 = 0;
    }
  }
  else {
    if (8 < iVar1) {
      if ((uVar12 & 0xc) != 0xc) goto LAB_000166aa;
      if ((piVar14[1] & 0x7fU) >> 5 == 0) {
        uVar10 = 0;
        uVar17 = 0;
        goto LAB_000161f6;
      }
      uVar10 = 0x1000;
      goto LAB_000166a4;
    }
    if (piVar6[1] == 2) {
      if (piVar14[5] == 1) {
        uVar17 = 0x2000000;
      }
      else {
        uVar17 = 0;
      }
    }
    else {
      uVar17 = 0;
    }
    if (uVar12 == 0x1c) goto LAB_000161e8;
    uVar10 = 0;
  }
LAB_000161f6:
  if (*(int *)(*(int *)(iVar11 + 0x34c) + 4) - 5U < 2) {
    if (piVar14[4] == 0) {
      uVar4 = 0x4000;
      uVar12 = 0x18;
      uVar13 = 0;
      uVar16 = 0;
    }
    else if (piVar14[4] == 1) {
      uVar16 = 0;
      uVar4 = 0x2000;
      uVar12 = 0x18;
      uVar13 = 0;
    }
    else {
      uVar4 = 0;
      uVar12 = 0x18;
      uVar13 = uVar4;
      uVar16 = uVar4;
    }
  }
  else {
    uVar4 = 0;
    uVar13 = (uVar13 & 0x1f) >> 4;
  }
  if (iVar1 < 9) {
    uVar13 = uVar7 | *(uint *)(*(int *)(param_1 + 0x574) + 0xc) | piVar14[1] | local_44 | local_50 |
             uVar15 | uVar17 | uVar10 | uVar16 | uVar13 | uVar12;
    if (param_1[0xc02] == 0) {
      uVar4 = uVar13 & 0xfffbffff | uVar4;
    }
    else {
      uVar4 = uVar13 | uVar4 | 0x40000;
    }
  }
  else {
    uVar17 = *(uint *)(*(int *)(param_1 + 0x574) + 8);
    if (uVar17 == DAT_0001698c) {
LAB_00016738:
      if (param_1[0xbfb] == 0) {
        uVar17 = 0x10000;
      }
      else {
        uVar17 = 0;
      }
    }
    else {
      if (uVar17 < DAT_0001698c) {
        if (uVar17 != DAT_0001698c + 0xfe000000) {
          if (uVar17 < DAT_0001698c + 0xfe000000) {
            if (uVar17 == DAT_0001698c + 0xee04ea07) goto LAB_00016866;
            uVar4 = DAT_00016990;
            if (DAT_0001698c + 0xee04ea07 <= uVar17) goto LAB_0001674a;
            if (uVar17 != DAT_0001698c + 0xedfeea07) {
              uVar4 = DAT_0001698c + 0xee00ea07;
              goto LAB_00016732;
            }
          }
          else if (uVar17 != DAT_00016994) {
            uVar4 = DAT_0001699c;
            if (uVar17 < DAT_00016994) {
              if (uVar17 == DAT_00016994 - 0x5eaf4) {
                uVar17 = 0xd0000;
              }
              else if (uVar17 == DAT_00016994 - 0x1eaf4) {
                uVar17 = 0xc0000;
              }
              else {
                uVar17 = 0;
              }
              goto LAB_0001677e;
            }
LAB_0001674a:
            if ((uVar17 != uVar4) && (uVar17 != uVar4 + 0x4fb)) {
              uVar4 = uVar4 - 0x105;
LAB_00016732:
              if (uVar17 != uVar4) {
                uVar17 = 0;
                goto LAB_0001677e;
              }
            }
          }
        }
        goto LAB_00016738;
      }
      if (uVar17 == DAT_000169a0) goto LAB_00016738;
      if (uVar17 < DAT_000169a0) {
        if (uVar17 == DAT_000169a4) {
LAB_00016866:
          uVar17 = 0x10000;
        }
        else if (uVar17 < DAT_000169a4) {
          if (uVar17 == DAT_000169a4 + 0xfc001407) {
            uVar17 = 0x50000;
          }
          else {
            uVar4 = DAT_000169a4 + 0xfc2116fb;
LAB_000167f4:
            if (uVar17 == uVar4) {
              uVar17 = 0x10000;
            }
            else {
              uVar17 = 0;
            }
          }
        }
        else {
          if (uVar17 == DAT_000169a8) goto LAB_00016866;
          if (uVar17 != DAT_000169a8 + 0x407) {
            uVar4 = DAT_000169a8 - 0xaf5;
            goto LAB_000167f4;
          }
          uVar17 = 0x40000;
        }
      }
      else if (uVar17 == DAT_000169ac) {
        uVar17 = 0x120000;
      }
      else if (uVar17 < DAT_000169ac) {
        if (uVar17 == DAT_000169ac + 0xf0f8ecee) goto LAB_00016738;
        if (uVar17 != DAT_000169b0) {
          uVar4 = DAT_000169b0 + 0xf1e8fbee;
          goto LAB_00016732;
        }
        uVar17 = 0x1a0000;
      }
      else if (uVar17 == DAT_000169b4) {
        uVar17 = 0xa0000;
      }
      else {
        if (uVar17 != DAT_000169b4 + 0xffff) {
          uVar4 = DAT_000169b4 - 0x10070f;
          goto LAB_00016732;
        }
        uVar17 = 0x20000;
      }
    }
LAB_0001677e:
    if (*piVar14 - 0x2007U < 3) {
      uVar4 = (uint)*(byte *)((*piVar14 - 0x2007U) + DAT_00016998 + 0x72f);
    }
    else {
      uVar4 = 0;
    }
    uVar13 = uVar10 | local_50 | uVar7 | local_44 | uVar15 | uVar16 | uVar13;
    if (param_1[0xc02] == 0) {
      uVar4 = uVar13 | uVar12 & 0xffdfffff | uVar17 | uVar4;
    }
    else {
      uVar4 = uVar13 | uVar12 | uVar17 | uVar4 | 0x200000;
    }
    uVar4 = uVar4 | 0x2000;
  }
  rkcif_write_register(iVar11,3,uVar4);
  if (*(int *)(iVar11 + 0x736c) < 9) {
    iVar1 = rkcif_find_output_fmt(param_1,*(undefined4 *)(param_1 + 0x584));
    iVar2 = *(int *)(param_1 + 0x57c);
    if ((*(int *)(iVar1 + 0x18) == 1) && (*(int *)(iVar1 + 0x10) == 0)) {
      uVar13 = (iVar2 * (uint)*(byte *)(iVar1 + 0x16) >> 3) + 0xff & 0xffffff00;
    }
    else {
      uVar13 = 0;
      if (iVar1 != 0) {
        uVar13 = rkcif_align_bits_per_pixel(param_1,iVar1,0);
        uVar13 = uVar13 >> 3;
      }
      uVar13 = iVar2 * uVar13;
    }
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x594);
  }
  iVar1 = (*param_1 & 7) * 0x68 + iVar11;
  if (param_1[0xbf9] == 0) {
    *(undefined4 *)(iVar1 + 0x71e4) = 0;
    *(undefined4 *)((*param_1 & 7) * 0x68 + iVar11 + 0x71e0) = 0;
    *(undefined4 *)((*param_1 & 7) * 0x68 + iVar11 + 0x71d4) = *(undefined4 *)(param_1 + 0x57c);
    *(undefined4 *)((*param_1 & 7) * 0x68 + iVar11 + 0x71d8) = *(undefined4 *)(param_1 + 0x580);
    *(undefined1 *)((*param_1 & 7) * 0x68 + iVar11 + 0x71cd) = 0;
  }
  else {
    *(undefined1 *)(iVar1 + 0x71cd) = 1;
    *(undefined4 *)((*param_1 & 7) * 0x68 + iVar11 + 0x71e0) = *(undefined4 *)(param_1 + 0x63c);
    *(undefined4 *)((*param_1 & 7) * 0x68 + iVar11 + 0x71e4) = *(undefined4 *)(param_1 + 0x640);
    *(undefined4 *)((*param_1 & 7) * 0x68 + iVar11 + 0x71d4) = *(undefined4 *)(param_1 + 0x644);
    *(undefined4 *)((*param_1 & 7) * 0x68 + iVar11 + 0x71d8) = *(undefined4 *)(param_1 + 0x648);
  }
  rkcif_write_register(iVar11,0xb,uVar13);
  iVar1 = (*param_1 & 7) * 0x68 + iVar11;
  rkcif_write_register(iVar11,0xc,*(uint *)(iVar1 + 0x71d4) | *(int *)(iVar1 + 0x71d8) << 0x10);
  iVar1 = (*param_1 & 7) * 0x68 + iVar11;
  rkcif_write_register(iVar11,0x15,*(uint *)(iVar1 + 0x71e0) | *(int *)(iVar1 + 0x71e4) << 0x10);
  if (*(int *)(iVar11 + 0x71a8) < 2) {
    rkcif_write_register(iVar11,0x1d,0);
  }
  if (*(int *)(iVar11 + 0x736c) < 9) {
    rkcif_write_register(iVar11,2,0x3ff);
    if (*(int *)(*(int *)(param_1 + 0x578) + 0x10) == 0) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = 0x20;
    }
    rkcif_write_register(iVar11,0x16,uVar5);
    uVar13 = 1;
    if ((*param_1 & 7) != 0) {
      uVar13 = 1 << (*param_1 & 7) + 10;
    }
    rkcif_write_register_or(iVar11,1,uVar13 | 0x2fc);
    rkcif_write_register(iVar11,0x13,1);
    uVar5 = 0x400;
  }
  else {
    uVar13 = DAT_000169b8;
    if (*(int *)(iVar11 + 0x736c) != 10) {
      uVar13 = 0;
    }
    rkcif_write_register(iVar11,2,uVar13 | 0x3c3ffff);
    uVar5 = DAT_000169bc;
  }
  rkcif_write_register_or(iVar11,1,uVar5);
  if (*(int *)(param_1 + 0x788) != 0) {
    if (*(int *)(iVar11 + 0x736c) < 5) {
      rkcif_assign_new_buffer_oneframe(param_1,1);
    }
    else {
      rkcif_assign_new_buffer_init(param_1,*param_1 & 7);
    }
  }
  uVar13 = 1;
  if ((*param_1 & 7) != 0) {
    uVar13 = 1 << (*param_1 & 7) + 10;
  }
  rkcif_write_register_or(iVar11,1,uVar13 | 0x2fc);
  rkcif_write_register(iVar11,0x13,1);
  rkcif_write_register_or(iVar11,1,0x400);
  uVar13 = 0;
  if (*(int *)(iVar11 + 0x739c) != 0) {
    if (*(int *)(iVar11 + 0x739c) == 1) {
      uVar13 = 2;
    }
    else {
      uVar13 = 4;
    }
  }
  bVar18 = (uVar12 & 0x1c) == 0x1c;
  if (bVar18) {
    uVar13 = 1;
    *(undefined4 *)(iVar11 + 0x739c) = 1;
  }
  if (bVar18) {
    uVar13 = 2;
  }
  if (*(int *)(iVar11 + 0x736c) == 9) {
    if (*(int *)(param_1 + 0x788) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 2;
    }
    if (*(int *)(param_1 + 0xbc0) == 2) {
      uVar13 = 0;
    }
  }
  else {
    if (*(int *)(iVar11 + 0x736c) != 10) {
      uVar13 = uVar13 | 0xf001;
      goto LAB_00016436;
    }
    uVar13 = 0;
    if (*(int *)(param_1 + 0x788) != 0) {
      uVar13 = 0x100000 << (*param_1 & 7);
    }
    if (*(int *)(param_1 + 0xbc0) == 2) {
      uVar13 = 0;
    }
    uVar13 = uVar13 | 2 << (*param_1 & 7);
  }
  uVar13 = uVar13 | 0x7741;
LAB_00016436:
  rkcif_write_register(iVar11,0,uVar13);
  rv1106_sdmmc_put_lock();
  *(undefined4 *)(iVar11 + 0x7ed0) = 0;
  param_1[0x510] = 2;
  param_1[0x511] = 0;
  param_1[0x512] = 0;
  param_1[0x513] = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x7ff8) = 0;
  return 0;
}



/* ===== rkcif_enum_framesizes @ 000169c0 size=116 ===== */

undefined4 rkcif_enum_framesizes(undefined4 param_1,undefined4 param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_88 [8];
  int local_80;
  int iStack_7c;
  undefined1 auStack_78 [104];
  
  pbVar1 = (byte *)video_drvdata();
  iVar4 = *(int *)(pbVar1 + 4);
  if ((*param_3 == 0) && (iVar2 = rkcif_find_output_fmt(pbVar1,param_3[1]), iVar2 != 0)) {
    iVar2 = *(int *)(iVar4 + 0x350);
    local_80 = 0x280;
    iStack_7c = 0x1e0;
    if (iVar2 != 0) {
      get_input_fmt(iVar2,auStack_88,*pbVar1 & 7,auStack_78);
    }
    if (*(char *)(*(int *)(iVar4 + 0x7ed4) + 0x1a8) == '\0') {
      param_3[7] = iStack_7c;
      param_3[2] = 3;
      param_3[3] = 0x40;
      param_3[6] = 0x40;
      param_3[4] = local_80;
      param_3[5] = 8;
      param_3[8] = 8;
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      param_3[4] = iStack_7c;
      param_3[2] = 1;
      param_3[3] = local_80;
    }
  }
  else {
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



/* ===== rkcif_dynamic_crop @ 00016a34 size=564 ===== */

void rkcif_dynamic_crop(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  byte *pbVar14;
  
  iVar9 = *(int *)(param_1 + 4);
  if (*(int *)(iVar9 + 0x34c) != 0) {
    iVar3 = *(int *)(param_1 + 0x640);
    uVar12 = *(uint *)(param_1 + 0x63c);
    uVar6 = *(int *)(*(int *)(iVar9 + 0x34c) + 4) - 4;
    iVar4 = *(int *)(param_1 + 0x648);
    uVar11 = *(uint *)(param_1 + 0x644);
    if (uVar6 < 3) {
      uVar10 = *param_1 & 7;
      uVar7 = (uint)*(byte *)(uVar10 * 0x68 + iVar9 + 0x71cf);
      if (uVar7 == 6) {
        uVar12 = uVar12 * 3;
      }
      else if (uVar7 == 0xe) {
        uVar12 = uVar12 << 1;
      }
      uVar8 = *(undefined4 *)(param_1 + 0x584);
      pbVar14 = param_1;
      pbVar1 = (byte *)rkcif_find_output_fmt(param_1,uVar8);
      if (pbVar1 == (byte *)0x0) {
        uVar6 = 0x40;
        printk(DAT_00016c68,iVar9 + 0x1c,uVar8);
        uVar7 = 0x40;
      }
      else {
        if (((*(int *)(pbVar1 + 0x18) == 1) && (param_1[0xbfb] != 0)) &&
           ((*(uint *)(pbVar1 + 0x10) & 0xfffffff7) != 6)) {
          uVar6 = (uVar11 * pbVar1[0x16] >> 3) + 0xff & 0xffffff00;
        }
        else {
          uVar6 = (uVar11 * *pbVar1 >> 3) + 7 & 0xfffffff8;
        }
        bVar13 = (uVar7 & 0xf7) == 6;
        uVar7 = uVar11;
        if (bVar13) {
          uVar7 = (uint)*pbVar1;
        }
        iVar5 = *(int *)(*(int *)(param_1 + 0x574) + 8);
        if (bVar13) {
          uVar7 = uVar11 * uVar7 >> 3;
        }
        if (((iVar5 == DAT_00016c70) || (iVar5 == DAT_00016c70 + -0xffff00)) ||
           ((iVar5 == DAT_00016c74 || (iVar5 == DAT_00016c74 + -0xffff)))) {
          uVar7 = uVar11 << 1;
          uVar6 = uVar6 << 1;
        }
      }
      uVar11 = *(byte *)(uVar10 * 0x68 + iVar9 + 0x71c8) - 1;
      if (uVar11 < 3) {
        uVar2 = *(undefined1 *)(uVar11 + DAT_00016c6c + 0x71b);
      }
      else {
        uVar2 = 0x60;
      }
      rkcif_write_register(iVar9,uVar2,uVar12 | iVar3 << 0x10,uVar7,pbVar14,uVar7,param_3);
      uVar12 = *(byte *)(uVar10 * 0x68 + iVar9 + 0x71c8) - 1;
      if (uVar12 < 3) {
        uVar2 = *(undefined1 *)(uVar12 + DAT_00016c6c + 0x70c);
      }
      else {
        uVar2 = 0x31;
      }
      rkcif_write_register(iVar9,uVar2,iVar4 << 0x10 | uVar7,uVar7,pbVar14,uVar7,param_3);
      uVar12 = *(byte *)(uVar10 * 0x68 + iVar9 + 0x71c8) - 1;
      if (uVar12 < 3) {
        uVar12 = uVar12 + DAT_00016c6c;
        uVar2 = *(undefined1 *)(uVar12 + 0x70f);
      }
      else {
        uVar2 = 0x3e;
      }
      rkcif_write_register(iVar9,uVar2,uVar6,uVar12,pbVar14,uVar7,param_3);
      uVar12 = *(byte *)(uVar10 * 0x68 + iVar9 + 0x71c8) - 1;
      if (uVar12 < 3) {
        uVar2 = *(undefined1 *)(uVar12 + DAT_00016c6c + 0x712);
      }
      else {
        uVar2 = 0x3f;
      }
      rkcif_write_register(iVar9,uVar2,uVar6);
      uVar12 = *(byte *)(uVar10 * 0x68 + iVar9 + 0x71c8) - 1;
      if (uVar12 < 3) {
        uVar2 = *(undefined1 *)(uVar12 + DAT_00016c6c + 0x715);
      }
      else {
        uVar2 = 0x40;
      }
      rkcif_write_register(iVar9,uVar2,uVar6);
      uVar12 = *(byte *)(uVar10 * 0x68 + iVar9 + 0x71c8) - 1;
      if (uVar12 < 3) {
        uVar2 = *(undefined1 *)(uVar12 + DAT_00016c6c + 0x718);
      }
      else {
        uVar2 = 0x41;
      }
    }
    else {
      pbVar14 = param_1;
      rkcif_write_register(iVar9,0x15,uVar12 | iVar3 << 0x10,uVar6,param_1,param_2,param_3);
      iVar3 = *(int *)(*(int *)(param_1 + 0x578) + 0x10);
      uVar12 = uVar11;
      if (iVar3 == 1) {
        iVar5 = rkcif_find_output_fmt(param_1,*(undefined4 *)(param_1 + 0x584));
        uVar12 = 0;
        iVar3 = extraout_r3;
        if (iVar5 != 0) {
          uVar12 = rkcif_align_bits_per_pixel(param_1,iVar5,0);
          uVar12 = uVar12 >> 3;
          iVar3 = extraout_r3_00;
        }
        uVar12 = uVar11 * uVar12;
      }
      rkcif_write_register(iVar9,0xb,uVar12,iVar3,pbVar14,param_2);
      uVar6 = iVar4 << 0x10 | uVar11;
      uVar2 = 0xc;
    }
    rkcif_write_register(iVar9,uVar2,uVar6);
    param_1[0xbfa] = 0;
  }
  return;
}



/* ===== rkcif_free_rx_buf @ 00016c78 size=210 ===== */

void rkcif_free_rx_buf(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar5 + 0x7ee0);
  if (iVar4 != 0) {
    disableIRQinterrupts();
    *(undefined4 *)(param_1 + 0x53c) = 0;
    *(undefined4 *)(param_1 + 0x540) = 0;
    *(int *)(param_1 + 0xba8) = param_1 + 0xba8;
    *(int *)(param_1 + 0xbac) = param_1 + 0xba8;
    if (*(char *)(iVar5 + 0x8035) != '\0') {
      disableIRQinterrupts();
    }
    iVar2 = iVar4 + 0x280;
    iVar3 = param_1;
    iVar7 = param_1;
    for (iVar6 = 0; iVar6 < param_2; iVar6 = iVar6 + 1) {
      if (*(char *)(iVar3 + 0x817) == '\0') {
        if (*(char *)(iVar5 + 0x8035) == '\0') {
          rkcif_free_buffer(iVar5,iVar3 + 0x7f0,iVar2,0,iVar7,iVar2,param_3);
        }
        else {
          piVar1 = *(int **)(iVar4 + 0x284);
          *(int *)(iVar4 + 0x284) = iVar3 + 0x7b4;
          *(int *)(iVar3 + 0x7b4) = iVar2;
          *(int **)(iVar3 + 0x7b8) = piVar1;
          *piVar1 = iVar3 + 0x7b4;
        }
      }
      iVar3 = iVar3 + 0x80;
    }
    if (*(char *)(iVar5 + 0x8035) != '\0') {
      schedule_work(iVar4 + 0x26c);
    }
    *(uint *)(param_1 + 0x788) = *(uint *)(param_1 + 0x788) & 0xfffffffd;
    if (2 < *DAT_00016d4c) {
      printk(DAT_00016d50,*(int *)(param_1 + 4) + 0x1c,param_2);
      return;
    }
  }
  return;
}



/* ===== rkcif_init_rx_buf @ 00016d54 size=416 ===== */

undefined4 rkcif_init_rx_buf(byte *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *__s;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar8 = *(int *)(param_1 + 4);
  iVar10 = *(int *)(iVar8 + 0x7ee0);
  if (iVar10 == 0) {
    return 0xffffffea;
  }
  if (8 < param_2) {
    return 0xffffffea;
  }
  iVar4 = *(int *)(iVar8 + 0x73a1);
  if (iVar4 == 0) {
    uVar7 = *param_1 & 7;
    if ((*param_1 & 7) != 0) {
      return 0xffffffea;
    }
    goto LAB_00016d8c;
  }
  if (iVar4 == 5) {
    if ((*param_1 & 7) == 0) {
      uVar7 = 1;
      goto LAB_00016d8c;
    }
    bVar11 = (*param_1 & 7) == 1;
LAB_00016dfc:
    if (!bVar11) {
      return 0xffffffea;
    }
  }
  else if (iVar4 == 6) {
    bVar6 = *param_1 & 7;
    if ((*param_1 & 7) == 0) {
      uVar7 = 2;
      goto LAB_00016d8c;
    }
    uVar7 = 1;
    if (bVar6 == 1) goto LAB_00016d8c;
    bVar11 = bVar6 == 2;
    goto LAB_00016dfc;
  }
  uVar7 = 0;
LAB_00016d8c:
  __s = param_1 + 0x7a8;
  iVar9 = 0;
  pbVar5 = param_1;
  iVar4 = param_2;
  do {
    memset(__s,0,0x80);
    *(undefined4 *)(__s + 100) = *(undefined4 *)(param_1 + 0x590);
    __s[0x6c] = 1;
    __s[0x6d] = 1;
    if (*(char *)(iVar8 + 0x8035) == '\0') {
      iVar1 = rkcif_alloc_buffer(iVar8,__s + 0x48);
      if (iVar1 != 0) {
        *(int *)(iVar10 + 0x288) = iVar9;
        uVar2 = DAT_00016f04;
        goto LAB_00016dda;
      }
      *(undefined4 *)(__s + 0x20) = *(undefined4 *)(__s + 0x50);
    }
    else {
      *(int *)__s = iVar9;
      iVar1 = rkcif_alloc_reserved_mem_buf(iVar8,__s);
      uVar2 = DAT_00016ef4;
      if (iVar1 != 0) {
        *(int *)(iVar10 + 0x288) = iVar9;
LAB_00016dda:
        printk(uVar2,iVar8 + 0x1c,iVar9,param_2,pbVar5,iVar4,param_3);
LAB_00016dde:
        if (*(int *)(iVar10 + 0x288) == 0) {
          return 0xffffffea;
        }
        *(int *)(param_1 + 0xbb0) = *(int *)(iVar10 + 0x288);
        return 0;
      }
      if (*(int *)(iVar8 + 0x8038) != 0) {
        pbVar5 = *(byte **)(__s + 0x54);
        printk(DAT_00016ef8,iVar8 + 0x1c,*param_1 & 7,pbVar5,pbVar5,0,param_3);
        iVar4 = iVar1;
      }
    }
    *(uint *)(__s + 0x34) = uVar7;
    __s[0x3c] = 0;
    puVar3 = *(undefined4 **)(param_1 + 0xbac);
    *(byte **)(param_1 + 0xbac) = __s + 4;
    *(byte **)(__s + 4) = param_1 + 0xba8;
    *(undefined4 **)(__s + 8) = puVar3;
    *puVar3 = __s + 4;
    __s[0x6f] = 0;
    __s[0x40] = param_1[0xbfb] ^ 1;
    if (iVar9 == 0 && *(int *)(iVar10 + 0x1d8) == 0) {
      param_1[0x7e5] = 1;
      rkcif_s_rx_buffer(iVar8,param_1 + 0x7c0,0,1,pbVar5,iVar4);
      *(int *)(param_1 + 0xbb0) = *(int *)(param_1 + 0xbb0) + -1;
    }
    iVar9 = iVar9 + 1;
    if (*(char *)(iVar8 + 0x8035) == '\0') {
      if (param_2 <= iVar9) goto LAB_00016dde;
    }
    else if (iVar9 == 8) {
      *(undefined4 *)(iVar10 + 0x288) = 8;
      printk(DAT_00016f08,iVar8 + 0x1c,8);
      goto LAB_00016dde;
    }
    if (2 < *DAT_00016efc) {
      pbVar5 = *(byte **)(param_1 + 0x590);
      printk(DAT_00016f00,iVar8 + 0x1c,*(undefined4 *)(__s + 0x54),0);
    }
    __s = __s + 0x80;
  } while( true );
}



/* ===== rkcif_do_soft_reset @ 00016f0c size=64 ===== */

void rkcif_do_soft_reset(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x34c) + 4) - 4U < 3) {
    uVar1 = 0x39;
  }
  else {
    uVar1 = 0;
  }
  rkcif_write_register_or(param_1,uVar1,0xa0000);
  usleep_range(10,0x14);
  if (*DAT_00016f4c < 3) {
    return;
  }
  printk(DAT_00016f50,param_1 + 0x1c,0xa0000);
  return;
}



/* ===== rkcif_update_sensor_info @ 00016f54 size=520 ===== */

int rkcif_update_sensor_info(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  
  iVar1 = get_remote_sensor(param_1,0,param_3,param_4,param_4);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    iVar2 = iVar2 + 0x1c;
    bVar3 = *param_1 & 7;
    uVar7 = DAT_00017168;
    goto LAB_00016f6e;
  }
  for (iVar4 = 0; iVar4 != *(int *)(iVar2 + 0x348); iVar4 = iVar4 + 1) {
    if (iVar1 == *(int *)(iVar2 + 0x220 + iVar4 * 0x94)) {
      piVar9 = (int *)(iVar4 * 0x94 + 0x220 + iVar2);
      goto LAB_00016fb4;
    }
  }
  iVar1 = iVar2;
  do {
    if (iVar4 * 0x94 + iVar2 == iVar1) goto LAB_00016f94;
    piVar9 = (int *)(iVar1 + 0x224);
    iVar1 = iVar1 + 0x94;
  } while (*piVar9 != 4);
  piVar9 = (int *)(iVar2 + 0x7d70);
LAB_00016fb4:
  if (piVar9 == (int *)0x0) {
LAB_00016f94:
    iVar2 = iVar2 + 0x1c;
    bVar3 = *param_1 & 7;
    uVar7 = DAT_0001716c;
    goto LAB_00016f6e;
  }
  iVar1 = *piVar9;
  if (iVar1 == 0) {
    iVar1 = -0x13;
LAB_00016fe0:
    iVar4 = *piVar9 + 0x74;
    iVar2 = *(int *)(param_1 + 4) + 0x1c;
    uVar7 = DAT_00017178;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    if ((iVar2 != 0) && (pcVar5 = *(code **)(iVar2 + 0x3c), pcVar5 != (code *)0x0)) {
      if ((DAT_00017170[7] == 0) ||
         (pcVar8 = *(code **)(DAT_00017170[7] + 0x3c), pcVar8 == (code *)0x0)) {
        iVar1 = (*pcVar5)(iVar1,0,piVar9 + 1);
      }
      else {
        iVar1 = (*pcVar8)(iVar1,0);
      }
      if ((iVar1 != 0) && (iVar1 != DAT_00017174)) goto LAB_00016fe0;
    }
    *(int **)(*(int *)(param_1 + 4) + 0x34c) = piVar9;
    iVar2 = *(int *)(param_1 + 4);
    get_remote_terminal_sensor(param_1,iVar2 + 0x350);
    iVar1 = *(int *)(iVar2 + 0x350);
    if (iVar1 == 0) {
      bVar3 = *param_1 & 7;
      iVar2 = *(int *)(param_1 + 4) + 0x1c;
      uVar7 = DAT_00017190;
LAB_00016f6e:
      printk(uVar7,iVar2,DAT_00017164,bVar3);
      return -0x13;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    if ((iVar4 != 0) && (pcVar5 = *(code **)(iVar4 + 0x3c), pcVar5 != (code *)0x0)) {
      if ((DAT_00017170[7] == 0) ||
         (pcVar8 = *(code **)(DAT_00017170[7] + 0x3c), pcVar8 == (code *)0x0)) {
        iVar1 = (*pcVar5)(iVar1,0,iVar2 + 0x354);
      }
      else {
        iVar1 = (*pcVar8)(iVar1,0);
      }
      if ((iVar1 != 0) && (iVar1 != DAT_00017174)) {
        iVar4 = *(int *)(iVar2 + 0x350) + 0x74;
        iVar2 = *(int *)(param_1 + 4) + 0x1c;
        uVar7 = DAT_0001717c;
        goto LAB_00016fec;
      }
    }
    piVar9 = DAT_00017170;
    iVar4 = *(int *)(iVar2 + 0x350);
    if (iVar4 == 0) {
      iVar1 = -0x13;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar4 + 0x68) + 0xc);
      iVar1 = DAT_00017174;
      if ((iVar6 != 0) && (pcVar5 = *(code **)(iVar6 + 0x30), pcVar5 != (code *)0x0)) {
        if ((DAT_00017170[3] == 0) ||
           (pcVar8 = *(code **)(DAT_00017170[3] + 0x30), pcVar8 == (code *)0x0)) {
          iVar1 = (*pcVar5)(iVar4,iVar2 + 0x35c);
        }
        else {
          iVar1 = (*pcVar8)();
        }
        iVar4 = *(int *)(iVar2 + 0x350);
        if (iVar1 == 0) {
          if (((iVar4 != 0) && (**(int **)(iVar4 + 0x68) != 0)) &&
             (pcVar5 = *(code **)(**(int **)(iVar4 + 0x68) + 0x18), pcVar5 != (code *)0x0)) {
            if ((*piVar9 == 0) || (pcVar8 = *(code **)(*piVar9 + 0x18), pcVar8 == (code *)0x0)) {
              iVar1 = (*pcVar5)(iVar4,DAT_0001718c,iVar2 + 0x3e0);
            }
            else {
              iVar1 = (*pcVar8)(iVar4,DAT_0001718c);
            }
            if (iVar1 == 0) goto LAB_000170f6;
          }
          if (0 < *DAT_00017184) {
            printk(DAT_00017188,*(int *)(param_1 + 4) + 0x1c,DAT_00017164,
                   *(int *)(iVar2 + 0x350) + 0x74);
          }
          *(undefined4 *)(iVar2 + 0x3e0) = 0;
LAB_000170f6:
          if (2 < *(int *)(iVar2 + 0x354) - 4U) {
            return 0;
          }
          switch(*(uint *)(iVar2 + 0x358) & 0xf) {
          case 1:
            uVar7 = 1;
            break;
          case 2:
            uVar7 = 2;
            break;
          default:
            iVar1 = DAT_00017198;
            if (*(int *)(iVar2 + 0x350) != 0) {
              iVar1 = *(int *)(iVar2 + 0x350) + 0x74;
            }
            printk(DAT_00017194,*(int *)(param_1 + 4) + 0x1c,DAT_00017164,iVar1);
            return -0x16;
          case 4:
            uVar7 = 3;
            break;
          case 8:
            uVar7 = 4;
          }
          *(undefined4 *)(iVar2 + 0x38c) = uVar7;
          return 0;
        }
      }
    }
    iVar4 = *(int *)(iVar2 + 0x350) + 0x74;
    iVar2 = *(int *)(param_1 + 4) + 0x1c;
    uVar7 = DAT_00017180;
  }
LAB_00016fec:
  printk(uVar7,iVar2,DAT_00017164,iVar4);
  return iVar1;
}



/* ===== rkcif_fh_open @ 0001719c size=278 ===== */

uint rkcif_fh_open(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  code *pcVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  iVar3 = video_devdata();
  iVar13 = *(int *)(iVar3 + -0x1d4);
  uVar4 = rkcif_attach_hw(iVar13);
  if (uVar4 != 0) {
    return uVar4;
  }
  uVar4 = rkcif_update_sensor_info(iVar3 + -0x1d8);
  uVar5 = DAT_000172b4;
  if (-1 < (int)uVar4) {
    iVar11 = *(int *)(iVar13 + 8);
    uVar4 = __pm_runtime_resume(iVar11,4);
    if ((int)uVar4 < 0) {
      piVar10 = (int *)(iVar11 + 0xd4);
      HintPreloadData(piVar10);
      do {
        ExclusiveAccess(piVar10);
        uVar5 = DAT_000172c0;
        if (*piVar10 == 0) goto LAB_000171cc;
        bVar1 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar1);
      *piVar10 = *piVar10 + -1;
      uVar5 = DAT_000172c0;
    }
    else {
      uVar4 = v4l2_fh_open(param_1);
      if (uVar4 == 0) {
        mutex_lock(iVar13 + 0x7378);
        uVar4 = v4l2_pipeline_pm_get(iVar3);
        printk(DAT_000172b8,iVar3 + 0x2a0,*(undefined4 *)(iVar3 + 0x40));
        mutex_unlock(iVar13 + 0x7378);
        if ((int)uVar4 < 0) {
          vb2_fop_release(param_1);
        }
      }
      piVar10 = DAT_000172c8;
      uVar2 = DAT_000172c4;
      if (*(int *)(iVar13 + 0x8040) < 2) {
        return uVar4;
      }
      iVar11 = 0;
      piVar12 = (int *)(iVar13 + 0x7ee0);
      do {
        iVar6 = *(int *)(*piVar12 + 0x268);
        if (iVar6 != 0) {
          uVar7 = uVar2;
          if ((**(int **)(iVar6 + 0x68) != 0) &&
             (pcVar9 = *(code **)(**(int **)(iVar6 + 0x68) + 0x1c), pcVar9 != (code *)0x0)) {
            if ((*piVar10 == 0) || (pcVar8 = *(code **)(*piVar10 + 0x1c), pcVar8 == (code *)0x0)) {
              uVar7 = (*pcVar9)(iVar6,1);
            }
            else {
              uVar7 = (*pcVar8)();
            }
          }
          uVar4 = uVar4 | uVar7;
        }
        iVar11 = iVar11 + 1;
        piVar12 = piVar12 + 1;
      } while (iVar11 < *(int *)(iVar13 + 0x8040));
      uVar5 = DAT_000172bc;
      if (-1 < (int)uVar4) {
        return uVar4;
      }
    }
  }
LAB_000171cc:
  printk(uVar5,iVar3 + 0x2a0,uVar4);
  return uVar4;
}



/* ===== rkcif_set_fmt @ 000172cc size=882 ===== */

void rkcif_set_fmt(byte *param_1,uint *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  code *pcVar12;
  int iVar13;
  uint local_e0;
  int local_dc;
  undefined4 local_c4;
  undefined4 uStack_c0;
  uint local_bc;
  uint local_b8;
  undefined1 auStack_b4 [136];
  int local_2c;
  
  local_2c = *DAT_00017558;
  iVar13 = *(int *)(param_1 + 4);
  memset(param_2 + 5,0,0x14);
  memset(param_2 + 10,0,0x14);
  memset(param_2 + 0xf,0,0x14);
  iVar2 = rkcif_find_output_fmt(param_1,param_2[2]);
  if (iVar2 == 0) {
    iVar2 = DAT_0001755c;
  }
  local_bc = 0x280;
  local_b8 = 0x1e0;
  if (*(int *)(iVar13 + 0x350) == 0) {
    printk(DAT_00017564,*(int *)(param_1 + 4) + 0x1c);
    uVar8 = 0xffffffea;
    goto LAB_00017420;
  }
  piVar3 = (int *)get_input_fmt(*(int *)(iVar13 + 0x350),&local_c4,*param_1 & 7,
                                (*param_1 & 7) * 0x68 + iVar13 + 0x71c8);
  *(int **)(param_1 + 0x578) = piVar3;
  iVar4 = *(int *)(iVar13 + 0x350);
  if (iVar4 != 0) {
    if ((**(int **)(iVar4 + 0x68) == 0) ||
       (pcVar6 = *(code **)(**(int **)(iVar4 + 0x68) + 0x18), pcVar6 == (code *)0x0)) {
LAB_00017478:
      *(undefined1 *)(iVar13 + 0x73a1) = 0;
      *(undefined1 *)(iVar13 + 0x73a2) = 0;
      *(undefined1 *)(iVar13 + 0x73a3) = 0;
      *(undefined1 *)(iVar13 + 0x73a4) = 0;
    }
    else {
      if ((*DAT_00017568 == 0) ||
         (pcVar12 = *(code **)(*DAT_00017568 + 0x18), pcVar12 == (code *)0x0)) {
        iVar4 = (*pcVar6)(iVar4,DAT_0001756c,auStack_b4);
      }
      else {
        iVar4 = (*pcVar12)(iVar4,DAT_0001756c,auStack_b4);
      }
      if (iVar4 != 0) goto LAB_00017478;
      memcpy((void *)(iVar13 + 0x73a1),auStack_b4,0x88);
    }
    *(undefined4 *)(iVar13 + 0x390) = local_c4;
    *(undefined4 *)(iVar13 + 0x394) = uStack_c0;
    *(uint *)(iVar13 + 0x398) = local_bc;
    *(uint *)(iVar13 + 0x39c) = local_b8;
  }
  uVar5 = *param_2;
  uVar8 = 1;
  if (uVar5 < 0x40) {
    uVar5 = 0x40;
  }
  if (local_bc <= uVar5) {
    uVar5 = local_bc;
  }
  *param_2 = uVar5;
  uVar5 = param_2[1];
  if (uVar5 < 0x40) {
    uVar5 = 0x40;
  }
  if (local_b8 <= uVar5) {
    uVar5 = local_b8;
  }
  param_2[1] = uVar5;
  uVar1 = *(undefined1 *)(iVar2 + 0x15);
  *(undefined1 *)(param_2 + 3) = 1;
  *(undefined1 *)(param_2 + 0x2d) = uVar1;
  *(undefined1 *)((int)param_2 + 0xd) = 0;
  *(undefined1 *)((int)param_2 + 0xe) = 0;
  *(undefined1 *)((int)param_2 + 0xf) = 0;
  *(undefined1 *)((int)param_2 + 0xb7) = 0;
  rkcif_sync_crop_info(param_1);
  uVar5 = *(uint *)(iVar2 + 8);
  if (uVar5 == DAT_00017560) {
LAB_0001749e:
    uVar10 = 2;
  }
  else {
    if (DAT_00017560 <= uVar5) {
      if (uVar5 != DAT_00017570) {
        if (uVar5 < DAT_00017570) {
          uVar11 = DAT_00017570 - 0xffff00;
        }
        else {
          if (uVar5 == DAT_00017574) goto LAB_0001749e;
          uVar11 = DAT_00017574 + 0xffff;
        }
        if (uVar5 != uVar11) goto LAB_000173be;
      }
      goto LAB_0001749e;
    }
    if (uVar5 == DAT_00017560 + 0xfb050000) goto LAB_0001749e;
    if ((uVar5 == DAT_00017560 + 0xfc000000) || (uVar5 == DAT_00017560 + 0xfb010000)) {
      uVar8 = 2;
      goto LAB_0001749e;
    }
LAB_000173be:
    uVar10 = 1;
  }
  uVar5 = (uint)*(byte *)(iVar2 + 0x14);
  if (uVar5 == 0) {
    uVar5 = (uint)*(byte *)(iVar2 + 0x15);
  }
  if ((piVar3 != (int *)0x0) && (*piVar3 - 0x5002U < 2)) {
    param_1[0xbf9] = 0;
  }
  local_e0 = 0;
  local_dc = 0;
  for (uVar11 = 0; uVar11 != uVar5; uVar11 = uVar11 + 1) {
    if (uVar11 == 0) {
      if (param_1[0xbf9] == 0) {
        uVar9 = *param_2;
        uVar7 = param_2[1];
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x644);
        uVar7 = *(uint *)(param_1 + 0x648);
      }
    }
    else {
      if (param_1[0xbf9] == 0) {
        uVar9 = __aeabi_uidiv(*param_2,uVar10);
        uVar7 = param_2[1];
      }
      else {
        uVar9 = __aeabi_uidiv(*(undefined4 *)(param_1 + 0x644),uVar10);
        uVar7 = *(uint *)(param_1 + 0x648);
      }
      uVar7 = __aeabi_uidiv(uVar7,uVar8);
    }
    if (*(int *)(iVar13 + 0x8040) - 2U < 3) {
      uVar7 = *(int *)(iVar13 + 0x8040) * uVar7;
    }
    *(uint *)(param_1 + 0x684) = uVar7 + 0x18;
    if (((*(int *)(iVar2 + 0x18) == 1) &&
        (((1 < **(int **)(param_1 + 0x578) - 0x5002U ||
          (param_1[0xbfb] = 0, *(int *)(iVar2 + 0x18) == 1)) && (param_1[0xbfb] != 0)))) &&
       (((*(int *)(*(int *)(iVar13 + 0x34c) + 4) - 4U < 3 &&
         ((*(uint *)(iVar2 + 0x10) & 0xfffffff7) != 6)) ||
        (((*(uint *)(iVar2 + 0x10) & 0xfffffff7) != 6 && (8 < *(int *)(iVar13 + 0x736c))))))) {
      iVar4 = *(byte *)(iVar2 + 0x16) * uVar9;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      uVar9 = (iVar4 >> 3) + 0xffU & 0xffffff00;
    }
    else {
      iVar4 = rkcif_align_bits_per_pixel(param_1,iVar2,uVar11);
      uVar9 = uVar9 * iVar4 >> 3;
    }
    iVar4 = *(int *)(param_1 + 0x684);
    uVar7 = uVar9 * uVar7;
    local_e0 = local_e0 + uVar7;
    local_dc = local_dc + uVar9 * iVar4;
    if (uVar11 < *(byte *)(iVar2 + 0x15)) {
      param_2[uVar11 * 5 + 6] = uVar9;
      param_2[uVar11 * 5 + 5] = uVar7;
      *(uint *)(param_1 + uVar11 * 0x14 + 0x698) = uVar9;
      *(uint *)(param_1 + uVar11 * 0x14 + 0x694) = uVar9 * iVar4;
    }
    if (0 < *DAT_00017660) {
      printk(DAT_00017664,*(int *)(param_1 + 4) + 0x1c,uVar11,uVar7,local_e0);
    }
  }
  if (*(char *)(iVar2 + 0x15) == '\x01') {
    param_2[5] = local_e0;
    *(int *)(param_1 + 0x694) = local_dc;
  }
  if (param_3 == 0) {
    *(int *)(param_1 + 0x574) = iVar2;
    memcpy(param_1 + 0x57c,param_2,0xc0);
    if (0 < *DAT_00017660) {
      printk(DAT_0001766c,*(int *)(param_1 + 4) + 0x1c,DAT_00017668,*param_2,param_2[1],
             *(undefined4 *)(param_1 + 0x57c),*(undefined4 *)(param_1 + 0x580));
      uVar8 = 0;
      goto LAB_00017420;
    }
  }
  uVar8 = 0;
LAB_00017420:
  if (local_2c != *DAT_00017558) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}



/* ===== rkcif_try_fmt_vid_cap_mplane @ 00017670 size=20 ===== */

void rkcif_try_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = video_drvdata();
  rkcif_set_fmt(uVar1,param_3 + 4,1);
  return;
}



/* ===== rkcif_s_fmt_vid_cap_mplane @ 00017684 size=42 ===== */

undefined4 rkcif_s_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_drvdata();
  if (*(int *)(iVar1 + 0x17c) == 0) {
    uVar2 = rkcif_set_fmt(iVar1,param_3 + 4);
    return uVar2;
  }
  printk(DAT_000176b4,*(int *)(iVar1 + 4) + 0x1c,DAT_000176b0);
  return 0xfffffff0;
}



/* ===== rkcif_stream_init @ 000176b8 size=382 ===== */

void rkcif_stream_init(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *__s;
  bool bVar6;
  bool bVar7;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  
  iVar5 = param_2 * 0xc08;
  iVar4 = param_1 + iVar5;
  __s = (void *)(iVar5 + 1000 + param_1);
  memset(__s,0,0xc08);
  memset(&local_e0,0,0xc0);
  *(int *)(iVar4 + 0x3ec) = param_1;
  *(byte *)(iVar4 + 1000) = *(byte *)(iVar4 + 1000) & 0xf8 | (byte)param_2 & 7;
  iVar3 = param_1 + iVar5 + 0x914;
  *(int *)(param_1 + iVar5 + 0x914) = iVar3;
  *(int *)(iVar4 + 0x918) = iVar3;
  iVar3 = param_1 + iVar5 + 0xf90;
  *(int *)(param_1 + iVar5 + 0xf90) = iVar3;
  *(int *)(iVar4 + 0xf94) = iVar3;
  iVar3 = param_1 + iVar5 + 0xb84;
  *(int *)(param_1 + iVar5 + 0xb84) = iVar3;
  *(int *)(iVar4 + 0xb88) = iVar3;
  uVar1 = DAT_00017838;
  iVar3 = param_1 + iVar5 + 0x92c;
  *(int *)(param_1 + iVar5 + 0x92c) = iVar3;
  *(int *)(iVar4 + 0x930) = iVar3;
  uVar2 = DAT_0001783c;
  *(undefined4 *)(iVar4 + 0x8f8) = 1;
  __init_waitqueue_head(iVar5 + 0x8fc + param_1,uVar1,uVar2);
  local_d8 = DAT_00017840;
  local_e0 = 0x280;
  uStack_dc = 0x1e0;
  rkcif_set_fmt(__s,&local_e0,0);
  *(undefined4 *)(iVar4 + 0xa24) = 0;
  *(undefined4 *)(iVar4 + 0xa28) = 0;
  *(undefined4 *)(iVar4 + 0xa34) = 0;
  *(undefined4 *)(iVar4 + 0xa38) = 0;
  *(undefined4 *)(iVar4 + 0xa44) = 0;
  *(undefined4 *)(iVar4 + 0xa48) = 0;
  *(undefined1 *)(iVar4 + 0xfe1) = 0;
  *(undefined1 *)(iVar4 + 0xfe2) = 0;
  *(undefined4 *)(iVar4 + 0x910) = 0;
  *(undefined4 *)(iVar4 + 0xa2c) = 0x280;
  *(undefined4 *)(iVar4 + 0xa30) = 0x1e0;
  *(undefined4 *)(iVar4 + 0xa3c) = 0x280;
  *(undefined4 *)(iVar4 + 0xa40) = 0x1e0;
  *(undefined4 *)(iVar4 + 0xa4c) = 0x280;
  *(undefined4 *)(iVar4 + 0xa50) = 0x1e0;
  iVar3 = *(int *)(param_1 + 0x736c);
  if (*(int *)(param_1 + 0x7edc) == 0) {
    bVar7 = SBORROW4(iVar3,8);
    iVar4 = iVar3 + -8;
    bVar6 = iVar3 == 8;
  }
  else {
    bVar7 = SBORROW4(iVar3,5);
    iVar4 = iVar3 + -5;
    bVar6 = iVar3 == 5;
  }
  *(bool *)(param_2 * 0xc08 + param_1 + 0xfe3) = !bVar6 && iVar4 < 0 == bVar7;
  iVar4 = param_2 * 0xc08 + param_1;
  *(bool *)(iVar4 + 0xb28) = iVar3 - 6U < 2;
  *(undefined1 *)(iVar4 + 0xfea) = 0;
  *(undefined1 *)(iVar4 + 0xfec) = 0;
  *(undefined2 *)(iVar4 + 0xfe4) = 0;
  *(undefined4 *)(iVar4 + 0xb60) = 0;
  iVar3 = *(int *)(param_1 + 0x7ffc);
  if (iVar3 == 0) {
    *(undefined1 *)(iVar4 + 0xfe6) = 0;
    *(undefined4 *)(param_1 + 0x8004) = 0;
    *(int *)(param_1 + 0x8000) = 0;
  }
  else {
    *(int *)(param_1 + 0x8004) = iVar3;
    *(int *)(param_1 + 0x8000) = iVar3;
    *(undefined1 *)(iVar4 + 0xfe6) = 1;
  }
  param_1 = param_2 * 0xc08 + param_1;
  *(undefined4 *)(param_1 + 0xb8c) = 0;
  *(undefined4 *)(param_1 + 0xb70) = 0;
  *(undefined4 *)(param_1 + 0xb74) = 0;
  *(undefined4 *)(param_1 + 0xb78) = 0;
  *(undefined1 *)(param_1 + 0xfeb) = 0;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  *(undefined4 *)(param_1 + 0xb80) = 0;
  *(undefined1 *)(param_1 + 0xfef) = 0;
  return;
}



/* ===== rkcif_vb_done_tasklet @ 00017844 size=78 ===== */

void rkcif_vb_done_tasklet(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint in_cpsr;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    disableIRQinterrupts();
    piVar2 = *(int **)(param_1 + 0xbec);
    *(int *)(param_1 + 0xbec) = param_2 + 0x280;
    *(int *)(param_2 + 0x280) = param_1 + 0xbe8;
    *(int **)(param_2 + 0x284) = piVar2;
    *piVar2 = param_2 + 0x280;
    disableIRQinterrupts();
    uVar3 = *(uint *)(param_1 + 0xbd4);
    uVar1 = uVar3 | 1;
    *(uint *)(param_1 + 0xbd4) = uVar1;
    if (-1 < (int)(uVar3 << 0x1f)) {
      __tasklet_schedule(param_1 + 0xbd0,uVar1,
                         (uint)(byte)(((int)in_cpsr < 0) << 4 | ((in_cpsr >> 0x1e & 1) != 0) << 3 |
                                      ((in_cpsr >> 0x1d & 1) != 0) << 2 |
                                      ((in_cpsr >> 0x1c & 1) != 0) << 1 | (in_cpsr >> 0x1b & 1) != 0
                                     ) << 0x1b);
      return;
    }
  }
  return;
}



/* ===== rkcif_buf_done_with_tools @ 00017892 size=84 ===== */

void rkcif_buf_done_with_tools(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  disableIRQinterrupts();
  iVar2 = *(int *)(param_1 + 0x784);
  if (*(int *)(iVar2 + 0x60c) == 2) {
    piVar1 = *(int **)(iVar2 + 0x520);
    *(int *)(iVar2 + 0x520) = param_2 + 0x280;
    *(int *)(param_2 + 0x280) = iVar2 + 0x51c;
    *(int **)(param_2 + 0x284) = piVar1;
    *piVar1 = param_2 + 0x280;
    iVar2 = work_busy(*(int *)(param_1 + 0x784) + 0x5fc);
    if (iVar2 == 0) {
      schedule_work(*(int *)(param_1 + 0x784) + 0x5fc);
    }
  }
  else {
    rkcif_vb_done_tasklet();
  }
  return;
}



/* ===== rkcif_unregister_stream_vdevs @ 000178e6 size=38 ===== */

void rkcif_unregister_stream_vdevs(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0xfb8;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    tasklet_kill(param_1);
    video_unregister_device(param_1 + -0x9f8);
    param_1 = param_1 + 0xc08;
  }
  return;
}



/* ===== rkcif_register_stream_vdevs @ 0001790c size=498 ===== */

int rkcif_register_stream_vdevs(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = DAT_00017b00;
  iVar6 = param_1 + 1000;
  iVar8 = 0;
  iVar4 = DAT_00017b00 + 0x984;
  while( true ) {
    if (param_2 <= iVar8) {
      *(int *)(param_1 + 0x7368) = param_2;
      return 0;
    }
    *(int *)(iVar6 + 4) = param_1;
    iVar10 = iVar6 + 0x1d8;
    if (5 < *(int *)(param_1 + 0x736c)) break;
    uVar5 = DAT_00017b24;
    if (param_3 != 0) {
      uVar3 = *(byte *)(iVar8 * 0xc08 + param_1 + 1000) & 7;
      if (4 < uVar3) goto LAB_00017a5a;
      uVar5 = *(undefined4 *)(iVar7 + uVar3 * 4 + 0x774);
    }
LAB_00017978:
    iVar9 = iVar6 + 0x1cc;
    strlcpy(iVar6 + 0x478,uVar5,0x20);
    __mutex_init(iVar9,DAT_00017b08,DAT_00017b04);
    uVar1 = DAT_00017b10;
    uVar5 = DAT_00017b0c;
    *(int *)(iVar6 + 0x4e8) = iVar9;
    *(undefined4 *)(iVar6 + 0x4cc) = uVar5;
    *(undefined4 *)(iVar6 + 0x4c8) = uVar1;
    *(int *)(iVar6 + 0x308) = iVar6;
    *(undefined4 *)(iVar6 + 0x4a0) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x50c) = 1;
    *(int *)(iVar6 + 700) = iVar4;
    *(int *)(iVar6 + 0x464) = param_1 + 0xc;
    *(undefined4 *)(iVar6 + 0x2c0) = DAT_00017b14;
    *(undefined4 *)(iVar6 + 0x49c) = 0;
    puVar2 = *(undefined4 **)(*(int *)(iVar6 + 4) + 0x7ed4);
    *(undefined4 *)(iVar6 + 8) = 9;
    *(undefined4 *)(iVar6 + 0xc) = 0x11;
    uVar5 = DAT_00017b18;
    *(int *)(iVar6 + 0x30) = iVar6;
    *(undefined4 *)(iVar6 + 0x24) = uVar5;
    uVar5 = puVar2[0x27];
    *(undefined4 *)(iVar6 + 0x44) = 1;
    *(int *)(iVar6 + 0x1c) = iVar9;
    *(undefined4 *)(iVar6 + 0x28) = uVar5;
    *(undefined4 *)(iVar6 + 0x38) = 0x2b0;
    *(undefined4 *)(iVar6 + 0x3c) = 0x2000;
    *(undefined4 *)(iVar6 + 0x10) = *puVar2;
    *(ushort *)(iVar6 + 0x18) = *(ushort *)(iVar6 + 0x18) | 0x201;
    *(undefined4 *)(iVar6 + 0x40) = 4;
    if (*(char *)((int)puVar2 + 0x1a7) != '\0') {
      *(undefined4 *)(iVar6 + 0x14) = 0x40;
    }
    vb2_queue_init(iVar6 + 8);
    *(int *)(iVar6 + 0x470) = iVar6 + 8;
    iVar9 = __video_register_device(iVar10,0,0xffffffff,1,**(undefined4 **)(iVar6 + 700));
    if (iVar9 < 0) {
      printk(DAT_00017b1c,param_1 + 0x1c,iVar9);
      goto LAB_00017a52;
    }
    iVar9 = media_entity_pads_init(iVar10,1,iVar6 + 0x4f0);
    if (iVar9 < 0) goto LAB_00017a68;
    *(int *)(iVar6 + 0xbe8) = iVar6 + 0xbe8;
    *(int *)(iVar6 + 0xbec) = iVar6 + 0xbe8;
    iVar8 = iVar8 + 1;
    tasklet_init(iVar6 + 0xbd0,DAT_00017b28,iVar6);
    tasklet_disable(iVar6 + 0xbd0);
    iVar6 = iVar6 + 0xc08;
  }
  uVar3 = *(byte *)(iVar8 * 0xc08 + param_1 + 1000) & 7;
  if (*(int *)(param_1 + 0x7edc) != 1) {
    if (3 < uVar3) goto LAB_00017a5a;
    uVar5 = *(undefined4 *)(iVar7 + uVar3 * 4 + 0x798);
    goto LAB_00017978;
  }
  if (uVar3 < 4) {
    uVar5 = *(undefined4 *)(iVar7 + uVar3 * 4 + 0x788);
    goto LAB_00017978;
  }
LAB_00017a5a:
  printk(DAT_00017b20,param_1 + 0x1c);
  iVar9 = -0x16;
LAB_00017a68:
  video_unregister_device(iVar10);
LAB_00017a52:
  param_1 = param_1 + 0xfb8;
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    tasklet_kill(param_1);
    video_unregister_device(param_1 + -0x9f8);
    param_1 = param_1 + 0xc08;
  }
  return iVar9;
}



/* ===== rkcif_register_lvds_subdev @ 00017b2c size=230 ===== */

int rkcif_register_lvds_subdev(int param_1)

{
  undefined4 uVar1;
  char *__src;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x7b3c;
  memset((void *)(param_1 + 0x7b38),0,0x2d0);
  *(int *)(param_1 + 0x7b38) = param_1;
  v4l2_subdev_init(iVar3,DAT_00017c14);
  *(uint *)(param_1 + 0x7b9c) = *(uint *)(param_1 + 0x7b9c) | 0xc;
  *(undefined4 *)(param_1 + 0x7b74) = DAT_00017c18;
  iVar2 = *(int *)(param_1 + 0x736c);
  __src = DAT_00017c1c;
  if (iVar2 == 7) {
    __src = DAT_00017c20;
  }
  strcpy((char *)(param_1 + 0x7bb0),__src);
  *(undefined4 *)(param_1 + 0x7c20) = 5;
  *(undefined4 *)(param_1 + 0x7d54) = 0;
  *(undefined4 *)(param_1 + 0x7d58) = 0;
  if (iVar2 == 10) {
    *(undefined4 *)(param_1 + 0x7cc0) = 2;
    *(undefined4 *)(param_1 + 0x7ce0) = 2;
    *(undefined4 *)(param_1 + 32000) = 2;
    *(undefined4 *)(param_1 + 0x7d20) = 2;
  }
  *(undefined4 *)(param_1 + 0x7c40) = 2;
  *(undefined4 *)(param_1 + 0x7c60) = 2;
  *(undefined4 *)(param_1 + 0x7c80) = 2;
  *(undefined4 *)(param_1 + 0x7ca0) = 2;
  *(undefined4 *)(param_1 + 0x7d24) = 0x280;
  *(undefined4 *)(param_1 + 0x7d28) = 0x1e0;
  *(undefined4 *)(param_1 + 0x7d5c) = 0x280;
  *(undefined4 *)(param_1 + 0x7d60) = 0x1e0;
  iVar2 = media_entity_pads_init(iVar3);
  uVar1 = DAT_00017c24;
  if (-1 < iVar2) {
    *(void **)(param_1 + 0x7bd4) = (void *)(param_1 + 0x7b38);
    *(undefined4 *)(param_1 + 0x7b94) = uVar1;
    iVar2 = v4l2_device_register_subdev(param_1 + 0xc,iVar3);
    if (-1 < iVar2) {
      iVar2 = __v4l2_device_register_subdev_nodes(param_1 + 0xc,0);
      if (-1 < iVar2) {
        return iVar2;
      }
      v4l2_device_unregister_subdev(iVar3);
    }
    printk(DAT_00017c28,(char *)(param_1 + 0x7bb0),iVar2);
  }
  return iVar2;
}



/* ===== rkcif_unregister_lvds_subdev @ 00017c2c size=10 ===== */

void rkcif_unregister_lvds_subdev(int param_1)

{
  v4l2_device_unregister_subdev(param_1 + 0x7b3c);
  return;
}



/* ===== rkcif_register_dvp_sof_subdev @ 00017c36 size=116 ===== */

int rkcif_register_dvp_sof_subdev(int param_1)

{
  char *__src;
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x7e0c;
  memset((void *)(param_1 + 0x7e08),0,0xcc);
  *(int *)(param_1 + 0x7e08) = param_1;
  v4l2_subdev_init(iVar2,DAT_00017cac);
  __src = DAT_00017cb4;
  *(undefined4 *)(param_1 + 0x7e64) = DAT_00017cb0;
  *(uint *)(param_1 + 0x7e6c) = *(uint *)(param_1 + 0x7e6c) | 0xc;
  strcpy((char *)(param_1 + 0x7e80),__src);
  *(void **)(param_1 + 0x7ea4) = (void *)(param_1 + 0x7e08);
  iVar1 = v4l2_device_register_subdev(param_1 + 0xc,iVar2);
  if (-1 < iVar1) {
    iVar1 = __v4l2_device_register_subdev_nodes(param_1 + 0xc,0);
    if (-1 < iVar1) {
      return iVar1;
    }
    v4l2_device_unregister_subdev(iVar2);
  }
  printk(DAT_00017cb8,(char *)(param_1 + 0x7e80),iVar1);
  return iVar1;
}



/* ===== rkcif_unregister_dvp_sof_subdev @ 00017cbc size=10 ===== */

void rkcif_unregister_dvp_sof_subdev(int param_1)

{
  v4l2_device_unregister_subdev(param_1 + 0x7e0c);
  return;
}



/* ===== rkcif_irq_oneframe @ 00017cc6 size=280 ===== */

void rkcif_irq_oneframe(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = rkcif_read_register(param_1,2,param_3,param_4,param_1,param_2,param_3);
  uVar2 = rkcif_read_register(param_1,0x1d);
  iVar3 = rkcif_read_register(param_1,0x1f);
  uVar4 = rkcif_read_register(param_1,0x20);
  uVar5 = rkcif_read_register(param_1,0);
  if ((iVar1 << 0x16 < 0) &&
     (rkcif_write_register(param_1,2,0x200), *(char *)(param_1 + 0xfe0) != '\0')) {
    rkcif_write_register(param_1,0,uVar5 & 0xfffffffe);
  }
  if (iVar1 << 0x1f < 0) {
    iVar6 = param_1 + 1000;
    rkcif_write_register(param_1,2,1);
    if (*(char *)(param_1 + 0xfe0) != '\0') {
      rkcif_stream_stop(iVar6);
      *(undefined1 *)(param_1 + 0xfe0) = 0;
      __wake_up(param_1 + 0x8fc,3,1);
      return;
    }
    if ((*(int *)(param_1 + 0x968) == iVar3) && ((int)(uVar2 << 0x1f) < 0)) {
      if ((int)(uVar2 << 0xf) < 0) {
        iVar1 = *(int *)(param_1 + 0x91c);
        *(undefined4 *)(param_1 + 0x908) = 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x920);
        *(undefined4 *)(param_1 + 0x908) = 2;
      }
      rkcif_write_register(param_1,0x1d,uVar2 & 0xfffffffe);
      iVar3 = rkcif_assign_new_buffer_oneframe(iVar6,0);
      if ((iVar1 != 0) && (iVar3 == 0)) {
        *(int *)(iVar1 + 0x170) = *(int *)(param_1 + 0x904) + -1;
        rkcif_vb_done_tasklet(iVar6,iVar1);
      }
      uVar2 = *(uint *)(param_1 + 0x7f40);
      *(uint *)(param_1 + 0x7f40) = uVar2 + 1;
      *(uint *)(param_1 + 0x7f44) = *(int *)(param_1 + 0x7f44) + (uint)(0xfffffffe < uVar2);
    }
    else {
      rkcif_write_register(param_1,0x1d,0xfffffffe);
      printk(DAT_00017de0,param_1 + 0x1c,iVar1,uVar2,iVar3,uVar4);
    }
  }
  return;
}



/* ===== rkcif_get_sensor_vblank @ 00017de4 size=44 ===== */

undefined4 rkcif_get_sensor_vblank(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x350) + 0x70);
  if (iVar1 + 0x10 != *(int *)(iVar1 + 0x10)) {
    for (piVar2 = *(int **)(iVar1 + 0x10); (int *)(iVar1 + 0x10) != piVar2; piVar2 = (int *)*piVar2)
    {
      if (piVar2[10] == DAT_00017e10) {
        return piVar2[0x21];
      }
    }
  }
  return 0;
}



/* ===== rkcif_monitor_reset_event @ 00017e14 size=414 ===== */

void rkcif_monitor_reset_event(int param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  bool bVar15;
  
  if ((*(char *)(param_1 + 0x7fca) == '\0') && (uVar8 = *(uint *)(param_1 + 0x7fd0), uVar8 != 0)) {
    iVar10 = 0;
    do {
      if (*(int *)(param_1 + 0x8f8 + iVar10 * 0xc08) == 2) {
        iVar3 = 0;
        if ((uVar8 & 0xfffffffd) == 1) {
          if (*(uint *)(param_1 + 0x904) < *(uint *)(param_1 + 0x7fa0)) {
            iVar3 = 0;
          }
          else {
            iVar3 = 1;
          }
        }
        if (uVar8 == 2) {
          iVar3 = rkcif_is_csi2_err_trigger_reset(param_1 + 0x7f50);
          *(char *)(param_1 + 0x7fcb) = (char)iVar3;
        }
        *(char *)(param_1 + 0x7fc8) = (char)iVar3;
        if (iVar3 == 0) {
          return;
        }
        iVar10 = iVar10 * 0xc08 + param_1;
        if (*(uint *)(iVar10 + 0x904) < 3) {
          uVar7 = *(undefined4 *)(param_1 + 0x364);
          lVar1 = (ulonglong)*(uint *)(param_1 + 0x360) * (ulonglong)DAT_00017fb4;
        }
        else {
          disableIRQinterrupts();
          uVar8 = *(uint *)(iVar10 + 0xa58);
          uVar9 = *(uint *)(iVar10 + 0xa5c);
          uVar11 = *(uint *)(iVar10 + 0xa60);
          uVar13 = *(uint *)(iVar10 + 0xa64);
          bVar15 = uVar9 <= uVar13;
          if (uVar13 == uVar9) {
            bVar15 = uVar8 <= uVar11;
          }
          if (bVar15) {
            iVar10 = uVar11 - uVar8;
            iVar3 = (uVar13 - uVar9) - (uint)(uVar11 < uVar8);
          }
          else {
            iVar10 = uVar8 - uVar11;
            iVar3 = (uVar9 - uVar13) - (uint)(uVar8 < uVar11);
          }
          lVar1 = CONCAT44(iVar3,iVar10);
          uVar7 = 1000;
        }
        uVar7 = div_u64((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar7);
        disableIRQinterrupts();
        *(undefined4 *)(param_1 + 0x7fb8) = uVar7;
        iVar3 = rkcif_get_sensor_vblank(param_1);
        uVar14 = *(undefined4 *)(param_1 + 0x7fb8);
        *(int *)(param_1 + 0x7fa8) = *(int *)(param_1 + 0x39c);
        *(int *)(param_1 + 0x7fa4) = *(int *)(param_1 + 0x39c) + iVar3;
        uVar7 = div_u64(uVar14,0);
        *(undefined4 *)(param_1 + 0x7f68) = uVar7;
        iVar4 = div_u64(uVar14,0,1000);
        iVar5 = __msecs_to_jiffies(*(int *)(param_1 + 0x7f9c) * iVar4);
        *(undefined1 *)(param_1 + 0x7fca) = 1;
        *(undefined4 *)(param_1 + 0x7f6c) = 0;
        *(undefined1 *)(param_1 + 0x7fc9) = 0;
        *(int *)(param_1 + 0x7f64) = iVar5;
        iVar6 = *(int *)(param_1 + 0x7368);
        iVar10 = param_1;
        for (iVar12 = 0; iVar12 < iVar6; iVar12 = iVar12 + 1) {
          if (*(int *)(iVar10 + 0x8f8) == 2) {
            *(undefined4 *)(param_1 + 0x7f78 + iVar12 * 4) = *(undefined4 *)(iVar10 + 0xfac);
          }
          iVar10 = iVar10 + 0xc08;
        }
        if ((*(uint *)(param_1 + 0x7fd0) & 0xfffffffd) == 1) {
          uVar7 = 0xfffffffd;
        }
        else {
          uVar7 = div_u64(1000,0,iVar4);
        }
        piVar2 = DAT_00017fb8;
        *(undefined4 *)(param_1 + 0x7f70) = uVar7;
        *(int *)(param_1 + 0x7f58) = *piVar2 + iVar5;
        mod_timer(param_1 + 0x7f50);
        if (*DAT_00017fbc < 3) {
          return;
        }
        div_u64(1000,0,iVar4);
        printk(DAT_00017fc4,param_1 + 0x1c,DAT_00017fc0,*(undefined4 *)(param_1 + 0x7fd0),
               *(undefined4 *)(param_1 + 0x39c),iVar3,*(undefined4 *)(param_1 + 0x7f64));
        return;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 4);
  }
  return;
}



/* ===== rkcif_do_reset_work @ 00017fc8 size=1426 ===== */

int rkcif_do_reset_work(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  code *pcVar18;
  int iVar19;
  int *piVar20;
  byte *pbVar21;
  int *local_58;
  int local_3c;
  int local_38 [5];
  
  memset(local_38,0,0x10);
  iVar8 = param_1 + 0x7378;
  mutex_lock(iVar8);
  piVar2 = DAT_000182a8;
  if (*(char *)(param_1 + 0x8031) == '\0') {
    if (0 < *DAT_000182a8) {
      printk(DAT_000182ac,param_1 + 0x1c);
    }
    uVar9 = DAT_000182dc;
    uVar6 = DAT_000182d4;
    iVar12 = param_1 + 1000;
    iVar15 = 0;
    iVar13 = 0;
    do {
      iVar19 = iVar13;
      if (*(int *)(iVar12 + 0x510) == 2) {
        if (0 < *piVar2) {
          printk(DAT_000182b0,param_1 + 0x1c,*(byte *)(iVar15 * 0xc08 + param_1 + 1000) & 7);
        }
        rkcif_stream_stop(iVar12);
        iVar19 = iVar15 * 0xc08 + param_1;
        if ((*(byte *)(iVar19 + 1000) & 7) == 0) {
          uVar3 = rkcif_get_sof(param_1);
          printk(uVar9,param_1 + 0x1c,uVar6,*(byte *)(iVar19 + 1000) & 7,
                 *(undefined4 *)(iVar12 + 0x51c),uVar3);
          *(undefined4 *)(param_1 + 0x7fec) = *(undefined4 *)(iVar12 + 0x51c);
        }
        *(undefined4 *)(iVar12 + 0x510) = 3;
        *(undefined1 *)(iVar12 + 0xbfd) = 0;
        *(undefined4 *)(iVar12 + 0x778) = 0;
        iVar19 = iVar13 + 1;
        local_38[iVar13] = iVar12;
        if (0 < *piVar2) {
          uVar7 = *(undefined4 *)(iVar12 + 0x51c);
          bVar1 = *(byte *)(iVar15 * 0xc08 + param_1 + 1000);
          uVar3 = rkcif_get_sof(param_1);
          printk(DAT_000182b4,param_1 + 0x1c,uVar6,bVar1 & 7,uVar7,uVar3);
        }
      }
      uVar3 = DAT_000182b8;
      iVar15 = iVar15 + 1;
      iVar12 = iVar12 + 0xc08;
      iVar13 = iVar19;
    } while (iVar15 != 4);
    piVar16 = (int *)(param_1 + 0x71ac);
    iVar13 = 0;
    local_3c = 0;
    piVar5 = piVar16;
    for (iVar12 = 0; iVar12 < *(int *)(param_1 + 0x71a0); iVar12 = iVar12 + 1) {
      iVar15 = *piVar5;
      if (iVar15 == *(int *)(param_1 + 0x350)) {
        if (param_2 != 5) {
          if (iVar15 == 0) {
            iVar13 = -0x13;
          }
          else {
            iVar13 = DAT_000182d8;
            if ((**(int **)(iVar15 + 0x68) != 0) &&
               (pcVar11 = *(code **)(**(int **)(iVar15 + 0x68) + 0x18), pcVar11 != (code *)0x0)) {
              if ((*DAT_000182c0 == 0) ||
                 (pcVar18 = *(code **)(*DAT_000182c0 + 0x18), pcVar18 == (code *)0x0)) {
                iVar13 = (*pcVar11)(iVar15,uVar3,&local_3c);
              }
              else {
                iVar13 = (*pcVar18)(iVar15,uVar3,&local_3c);
              }
              if (iVar13 == 0) goto LAB_000181ee;
            }
          }
          printk(DAT_000182c4,param_1 + 0x1c,*piVar5 + 0x74);
          goto LAB_00018216;
        }
LAB_00018258:
        if (iVar13 != 0) goto LAB_00018216;
LAB_000181ee:
        iVar13 = 0;
      }
      else {
        if (iVar15 == 0) {
          iVar13 = -0x13;
        }
        else {
          iVar10 = *(int *)(*(int *)(iVar15 + 0x68) + 0xc);
          iVar13 = DAT_000182d8;
          if ((iVar10 != 0) && (pcVar11 = *(code **)(iVar10 + 0x28), pcVar11 != (code *)0x0)) {
            if ((DAT_000182c0[3] == 0) ||
               (pcVar18 = *(code **)(DAT_000182c0[3] + 0x28), pcVar18 == (code *)0x0)) {
              iVar13 = (*pcVar11)(iVar15,local_3c);
            }
            else {
              iVar13 = (*pcVar18)();
            }
            goto LAB_00018258;
          }
        }
LAB_00018216:
        uVar6 = DAT_000182cc;
        if (local_3c == 0) {
          uVar6 = DAT_000182c8;
        }
        printk(DAT_000182d0,param_1 + 0x1c,DAT_000182d4,uVar6,*piVar5 + 0x74);
      }
      piVar5 = piVar5 + 1;
    }
    local_58 = (int *)(param_1 + 0x7ee0);
    piVar5 = local_58;
    for (iVar12 = 0; iVar12 < *(int *)(param_1 + 0x8040); iVar12 = iVar12 + 1) {
      if ((((*piVar5 != 0) && (iVar15 = *(int *)(*piVar5 + 0x268), iVar15 != 0)) &&
          (iVar13 = DAT_000182d8, **(int **)(iVar15 + 0x68) != 0)) &&
         (pcVar11 = *(code **)(**(int **)(iVar15 + 0x68) + 0x18), pcVar11 != (code *)0x0)) {
        if ((*DAT_000182c0 == 0) ||
           (pcVar18 = *(code **)(*DAT_000182c0 + 0x18), pcVar18 == (code *)0x0)) {
          iVar13 = (*pcVar11)(iVar15,DAT_000182b8,&local_3c);
        }
        else {
          iVar13 = (*pcVar18)(iVar15,DAT_000182b8,&local_3c);
        }
      }
      piVar5 = piVar5 + 1;
    }
    if (*(int *)(param_1 + 0x736c) < 9) {
      iVar13 = *(int *)(param_1 + 0x7ed4);
      if (*(char *)(param_1 + 0x7954) != '\0') {
        rkcif_stop_luma(param_1 + 0x7448);
      }
      if (*(int *)(param_1 + 0x73a1) != 0) {
        if (*(int *)(param_1 + 0x736c) == 5) {
          uVar4 = rkcif_read_register(param_1,0x38);
          uVar6 = 0x38;
          uVar4 = uVar4 | 0x1000000;
        }
        else {
          uVar4 = rkcif_read_register(param_1,0x39);
          uVar6 = 0x39;
          uVar4 = uVar4 | 0x10000;
        }
        rkcif_write_register(param_1,uVar6,uVar4);
        (**(code **)(DAT_00018594 + 4))(DAT_00018598);
      }
      piVar20 = (int *)(iVar13 + 0x58);
      piVar14 = (int *)(iVar13 + 0x94);
      piVar5 = piVar20;
      do {
        piVar17 = piVar5 + 1;
        if (*piVar5 != 0) {
          reset_control_assert();
        }
        iVar13 = DAT_00018594;
        piVar5 = piVar17;
      } while (piVar14 != piVar17);
      (**(code **)(DAT_00018594 + 4))(DAT_0001859c);
      do {
        piVar5 = piVar20 + 1;
        if (*piVar20 != 0) {
          reset_control_deassert();
        }
        piVar20 = piVar5;
      } while (piVar14 != piVar5);
      rkcif_disable_sys_clk(*(undefined4 *)(param_1 + 0x7ed4));
      (**(code **)(iVar13 + 4))(DAT_00018598);
      iVar13 = rkcif_enable_sys_clk(*(undefined4 *)(param_1 + 0x7ed4));
      if (iVar13 < 0) {
        printk(DAT_000185a4,param_1 + 0x1c,DAT_000185a0);
        goto LAB_00018382;
      }
    }
    else {
      rkcif_do_soft_reset(param_1);
    }
    for (iVar12 = 0; iVar15 = DAT_000182d8, uVar6 = DAT_000182b8, iVar12 < iVar19;
        iVar12 = iVar12 + 1) {
      pbVar21 = (byte *)local_38[iVar12];
      pbVar21[0x778] = 0;
      pbVar21[0x779] = 0;
      pbVar21[0x77a] = 0;
      pbVar21[0x77b] = 0;
      if (*(int *)(*(int *)(pbVar21 + 0x578) + 0x14) == 4) {
        iVar13 = *(int *)(pbVar21 + 0x534);
        if (iVar13 != *(int *)(pbVar21 + 0x538)) {
          if (iVar13 != 0) {
            piVar5 = *(int **)(pbVar21 + 0x530);
            *(int *)(pbVar21 + 0x530) = iVar13 + 0x280;
            *(byte **)(iVar13 + 0x280) = pbVar21 + 0x52c;
            *(int **)(iVar13 + 0x284) = piVar5;
            *piVar5 = iVar13 + 0x280;
          }
          iVar13 = *(int *)(pbVar21 + 0x538);
        }
        if (iVar13 != 0) {
          piVar5 = *(int **)(pbVar21 + 0x530);
          *(int *)(pbVar21 + 0x530) = iVar13 + 0x280;
          *(byte **)(iVar13 + 0x280) = pbVar21 + 0x52c;
          *(int **)(iVar13 + 0x284) = piVar5;
          *piVar5 = iVar13 + 0x280;
        }
        pbVar21[0x534] = 0;
        pbVar21[0x535] = 0;
        pbVar21[0x536] = 0;
        pbVar21[0x537] = 0;
        pbVar21[0x538] = 0;
        pbVar21[0x539] = 0;
        pbVar21[0x53a] = 0;
        pbVar21[0x53b] = 0;
      }
      if (*local_58 == 0) {
        uVar6 = 1;
      }
      else {
        iVar13 = *(int *)(*local_58 + 0x1d8);
        uVar6 = 1;
        if (iVar13 != 1) {
          if (iVar13 == 0) {
            uVar6 = 2;
          }
          else {
            uVar6 = 8;
          }
        }
      }
      if ((*(int *)(param_1 + 0x34c) == 0) || (2 < *(int *)(*(int *)(param_1 + 0x34c) + 4) - 4U)) {
        iVar13 = rkcif_stream_start(pbVar21,uVar6);
      }
      else {
        iVar13 = rkcif_csi_stream_start();
      }
      if (iVar13 != 0) {
        printk(DAT_000185a8,param_1 + 0x1c,DAT_000185a0,*pbVar21 & 7);
        goto LAB_00018382;
      }
      if (0 < *piVar2) {
        uVar9 = *(undefined4 *)(pbVar21 + 0x51c);
        bVar1 = *pbVar21;
        uVar6 = rkcif_get_sof(param_1);
        printk(DAT_000185ac,param_1 + 0x1c,bVar1 & 7,uVar9,uVar6);
      }
      iVar13 = 0;
    }
    local_3c = 1;
    for (iVar12 = 0; piVar5 = DAT_000182c0, uVar9 = DAT_000182b8,
        iVar12 < *(int *)(param_1 + 0x71a0); iVar12 = iVar12 + 1) {
      iVar19 = *piVar16;
      if (iVar19 == *(int *)(param_1 + 0x350)) {
        iVar19 = (*(int **)(param_1 + 0x34c))[1];
        if (iVar19 - 5U < 2) {
          rkcif_csi2_set_sof(**(int **)(param_1 + 0x34c) + -4);
        }
        else if (iVar19 == 4) {
          if (param_1 != 0) {
            iVar19 = 0x7e04;
LAB_000184e2:
            *(undefined4 *)(param_1 + iVar19) = *(undefined4 *)(param_1 + 0x7fec);
          }
        }
        else if ((iVar19 - 1U < 2) && (param_1 != 0)) {
          iVar19 = 0x7ed0;
          goto LAB_000184e2;
        }
        if (param_2 != 5) {
          iVar19 = *piVar16;
          if (iVar19 == 0) {
            iVar13 = -0x13;
          }
          else {
            iVar13 = iVar15;
            if ((**(int **)(iVar19 + 0x68) != 0) &&
               (pcVar11 = *(code **)(**(int **)(iVar19 + 0x68) + 0x18), pcVar11 != (code *)0x0)) {
              if ((*DAT_000185b0 == 0) ||
                 (pcVar18 = *(code **)(*DAT_000185b0 + 0x18), pcVar18 == (code *)0x0)) {
                iVar13 = (*pcVar11)(iVar19,uVar6,&local_3c);
              }
              else {
                iVar13 = (*pcVar18)(iVar19,uVar6,&local_3c);
              }
              if (iVar13 == 0) goto LAB_000184cc;
            }
          }
          printk(DAT_000185b4,param_1 + 0x1c,*piVar16 + 0x74);
          goto LAB_00018510;
        }
LAB_00018540:
        if (iVar13 != 0) goto LAB_00018510;
LAB_000184cc:
        iVar13 = 0;
      }
      else {
        if (iVar19 == 0) {
          iVar13 = -0x13;
        }
        else {
          iVar10 = *(int *)(*(int *)(iVar19 + 0x68) + 0xc);
          iVar13 = iVar15;
          if ((iVar10 != 0) && (pcVar11 = *(code **)(iVar10 + 0x28), pcVar11 != (code *)0x0)) {
            if ((DAT_000185b0[3] == 0) ||
               (pcVar18 = *(code **)(DAT_000185b0[3] + 0x28), pcVar18 == (code *)0x0)) {
              iVar13 = (*pcVar11)(iVar19,local_3c);
            }
            else {
              iVar13 = (*pcVar18)();
            }
            goto LAB_00018540;
          }
        }
LAB_00018510:
        printk(DAT_000185b8,param_1 + 0x1c,*piVar16 + 0x74);
      }
      piVar16 = piVar16 + 1;
    }
    for (iVar13 = 0; iVar13 < *(int *)(param_1 + 0x8040); iVar13 = iVar13 + 1) {
      if ((((*local_58 != 0) && (iVar12 = *(int *)(*local_58 + 0x268), iVar12 != 0)) &&
          (**(int **)(iVar12 + 0x68) != 0)) &&
         (pcVar11 = *(code **)(**(int **)(iVar12 + 0x68) + 0x18), pcVar11 != (code *)0x0)) {
        if ((*piVar5 == 0) || (pcVar18 = *(code **)(*piVar5 + 0x18), pcVar18 == (code *)0x0)) {
          (*pcVar11)(iVar12,uVar9,&local_3c);
        }
        else {
          (*pcVar18)(iVar12,uVar9,&local_3c);
        }
      }
      local_58 = local_58 + 1;
    }
    if (*(int *)(param_1 + 0x736c) < 9) {
      rkcif_start_luma(param_1 + 0x7448,*(undefined4 *)(param_1 + 0x960));
    }
    *(undefined4 *)(param_1 + 0x7fb0) = 0;
    rkcif_monitor_reset_event(param_1);
    if (0 < *piVar2) {
      printk(DAT_000182bc,param_1 + 0x1c);
    }
    iVar13 = 0;
    mutex_unlock(iVar8);
  }
  else {
    iVar13 = 0;
LAB_00018382:
    mutex_unlock(iVar8);
  }
  return iVar13;
}



/* ===== rkcif_is_reduced_frame_rate @ 000185bc size=396 ===== */

undefined4 rkcif_is_reduced_frame_rate(int param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  bool bVar14;
  byte in_Q;
  undefined8 uVar15;
  undefined8 uVar16;
  uint local_40;
  int local_3c;
  
  disableIRQinterrupts();
  uVar10 = *(uint *)(param_1 + 0xa58);
  uVar11 = *(uint *)(param_1 + 0xa5c);
  uVar12 = *(uint *)(param_1 + 0xa60);
  uVar13 = *(uint *)(param_1 + 0xa64);
  bVar14 = uVar11 <= uVar13;
  if (uVar13 == uVar11) {
    bVar14 = uVar10 <= uVar12;
  }
  if (bVar14) {
    iVar3 = uVar12 - uVar10;
    iVar8 = (uVar13 - uVar11) - (uint)(uVar12 < uVar10);
  }
  else {
    iVar3 = uVar10 - uVar12;
    iVar8 = (uVar11 - uVar13) - (uint)(uVar10 < uVar12);
  }
  uVar15 = div_u64(iVar3,iVar8,1000,
                   (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b);
  piVar2 = DAT_0001874c;
  iVar3 = (int)((ulonglong)uVar15 >> 0x20);
  uVar4 = (uint)uVar15;
  uVar9 = *(uint *)(param_1 + 0x7fb8);
  bVar14 = iVar3 == 0;
  if (iVar3 == 0) {
    bVar14 = uVar4 <= uVar9;
  }
  if (bVar14) {
    local_40 = 0;
    local_3c = 0;
  }
  else {
    local_40 = uVar4 - uVar9;
    local_3c = iVar3 - (uint)(uVar4 < uVar9);
  }
  uVar9 = (uint)((ulonglong)(*(int *)(param_1 + 0x7fa4) + 99) * (ulonglong)DAT_00018748 >> 0x25);
  if (0 < *DAT_0001874c) {
    printk(DAT_00018750,param_1 + 0x1c,local_40,local_3c,uVar9 * *(int *)(param_1 + 0x7f68),uVar9);
  }
  uVar16 = ktime_get();
  iVar8 = (int)((ulonglong)uVar16 >> 0x20);
  uVar5 = (uint)uVar16;
  bVar14 = uVar11 <= uVar13;
  if (uVar13 == uVar11) {
    bVar14 = uVar10 <= uVar12;
  }
  if (bVar14) {
    iVar8 = (iVar8 - uVar13) - (uint)(uVar5 < uVar12);
  }
  else {
    iVar8 = (iVar8 - uVar11) - (uint)(uVar5 < uVar10);
    uVar12 = uVar10;
  }
  uVar16 = div_u64(uVar5 - uVar12,iVar8,1000);
  uVar10 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar12 = iVar3 * 2 + (uint)CARRY4(uVar4,uVar4);
  bVar14 = uVar10 <= uVar12;
  if (uVar12 == uVar10) {
    bVar14 = (uint)uVar16 <= uVar4 * 2;
  }
  if (bVar14) {
    bVar14 = local_3c == 0;
    if (local_3c == 0) {
      bVar14 = local_40 <= uVar9 * *(int *)(param_1 + 0x7f68);
    }
    if (bVar14) {
      uVar6 = 0;
    }
    else {
      iVar8 = rkcif_get_sensor_vblank(param_1);
      iVar8 = iVar8 + *(int *)(param_1 + 0x7fa8);
      if (0 < *piVar2) {
        printk(DAT_00018754,param_1 + 0x1c,*(undefined4 *)(param_1 + 0x7fa4),iVar8);
        if (0 < *piVar2) {
          uVar6 = rkcif_get_sensor_vblank(param_1);
          printk(DAT_00018758,param_1 + 0x1c,uVar6,*(undefined4 *)(param_1 + 0x39c),uVar15,
                 *(undefined4 *)(param_1 + 0x7fb8),*(undefined4 *)(param_1 + 0x7f68),local_40,
                 local_3c);
        }
      }
      *(int *)(param_1 + 0x7fa4) = iVar8;
      uVar7 = div_u64(uVar4,0,iVar8);
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0x7f68) = uVar7;
    }
    *(uint *)(param_1 + 0x7fb8) = uVar4;
    uVar12 = div_u64(uVar4,iVar3,1000);
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x7f9c) * (ulonglong)uVar12;
    iVar3 = __msecs_to_jiffies((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    iVar8 = *DAT_0001875c;
    *(int *)(param_1 + 0x7f64) = iVar3;
    *(int *)(param_1 + 0x7f58) = iVar8 + iVar3;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* ===== rkcif_get_sensor_vblank_def @ 00018760 size=42 ===== */

undefined4 rkcif_get_sensor_vblank_def(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x350) + 0x70);
  if (iVar1 + 0x10 != *(int *)(iVar1 + 0x10)) {
    for (piVar2 = *(int **)(iVar1 + 0x10); (int *)(iVar1 + 0x10) != piVar2; piVar2 = (int *)*piVar2)
    {
      if (piVar2[10] == DAT_0001878c) {
        return piVar2[0x12];
      }
    }
  }
  return 0;
}



/* ===== rkcif_get_linetime @ 00018790 size=114 ===== */

undefined4 rkcif_get_linetime(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar5 = *(uint *)(iVar4 + 0x360);
  uVar6 = *(uint *)(iVar4 + 0x364);
  uVar3 = DAT_00018810;
  if (((uVar5 != 0) && (uVar6 != 0)) &&
     (uVar1 = __aeabi_uidiv(uVar6,uVar5,param_3,param_4,param_4), uVar3 = DAT_00018814,
     uVar5 <= uVar6)) {
    uVar5 = rkcif_get_sensor_vblank_def(iVar4);
    uVar6 = rkcif_get_sensor_vblank(iVar4);
    uVar3 = DAT_00018818;
    if ((uVar5 != 0) && (uVar6 != 0)) {
      iVar2 = div_u64(DAT_00018808,DAT_0001880c,uVar1,uVar6);
      uVar3 = div_u64(iVar2,iVar2 >> 0x1f,*(int *)(iVar4 + 0x39c) + uVar5);
      return uVar3;
    }
  }
  printk(uVar3,iVar4 + 0x1c,uVar5,uVar6);
  return 0xffffffea;
}



/* ===== rkcif_assign_check_buffer_update_toisp @ 0001881c size=790 ===== */

void rkcif_assign_check_buffer_update_toisp(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int extraout_r1;
  int extraout_r1_00;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  
  iVar8 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x53c) != *(int *)(param_1 + 0x540)) {
    if (*(int *)(iVar8 + 0x8038) < 3) {
      return;
    }
    if (0xe < *(uint *)(param_1 + 0x51c)) {
      return;
    }
    printk(DAT_00018b34,iVar8 + 0x1c,*param_1 & 7,*(undefined4 *)(*(int *)(param_1 + 0x53c) + 0x54),
           *(undefined4 *)(*(int *)(param_1 + 0x540) + 0x54));
    return;
  }
  iVar10 = *(int *)(iVar8 + 0x34c);
  if (*(int *)(iVar8 + 0x804c) == 0) {
    uVar3 = rkcif_get_linetime();
    *(undefined4 *)(iVar8 + 0x804c) = uVar3;
  }
  iVar4 = rkcif_get_sensor_vblank(iVar8);
  iVar4 = *(int *)(iVar8 + 0x804c) * iVar4;
  uVar12 = ktime_get();
  uVar11 = *(uint *)(param_1 + 0x520);
  if ((((*(int *)(iVar8 + 0x736c) < 9) || (*(int *)(iVar8 + 0x73a1) != 0)) ||
      ((int)((ulonglong)uVar12 >> 0x20) - *(int *)(param_1 + 0x754) !=
       (uint)((uint)uVar12 < *(uint *)(param_1 + 0x750)) ||
       iVar4 - 500000U <= (uint)uVar12 - *(uint *)(param_1 + 0x750))) ||
     ((*(int *)(param_1 + 0xbc0) != 2 || (*(uint *)(param_1 + 0x51c) <= *(uint *)(param_1 + 0xbf4)))
     )) {
    bVar2 = false;
    uVar9 = 0;
  }
  else {
    uVar9 = uVar11 & 1;
    if (uVar9 == 0) {
      bVar2 = true;
      uVar11 = 1;
      uVar9 = 0;
    }
    else {
      bVar2 = true;
      uVar11 = 2;
    }
  }
  if ((2 < *(int *)(iVar8 + 0x8038)) && (*(uint *)(param_1 + 0x51c) < 0xf)) {
    printk(DAT_00018b38,iVar8 + 0x1c,*param_1 & 7,param_1 + 0x750,uVar12,
           *(undefined4 *)(param_1 + 0x750),*(undefined4 *)(param_1 + 0x754),iVar4,
           *(undefined4 *)(param_1 + 0xbc0));
  }
  if (*(int *)(iVar10 + 4) - 4U < 3) {
    if ((uVar11 & 1) == 0) {
      uVar5 = get_reg_index_of_frm1_y_addr();
    }
    else {
      uVar5 = get_reg_index_of_frm0_y_addr();
    }
  }
  else if ((uVar11 & 1) == 0) {
    if ((*param_1 & 7) < 4) {
      uVar5 = (uint)*(byte *)((*param_1 & 7) + DAT_00018b44 + 0x1e);
    }
    else {
      uVar5 = 7;
    }
  }
  else {
    uVar5 = get_dvp_reg_index_of_frm0_y_addr();
  }
  if (*(byte **)(param_1 + 0xba8) == param_1 + 0xba8) {
    iVar4 = 0;
    goto LAB_000189cc;
  }
  if (uVar11 == 1) {
    iVar4 = *(int *)(param_1 + 0x53c);
    iVar6 = *(int *)(param_1 + 0xba8) + -4;
    if (iVar6 != 0) {
      list_del(*(int *)(param_1 + 0xba8));
      *(int *)(param_1 + 0x53c) = iVar6;
      rkcif_write_register(iVar8,uVar5,*(undefined4 *)(extraout_r1 + 0x50));
      if ((1 < *(int *)(iVar8 + 0x8038)) && (uVar7 = *(uint *)(param_1 + 0x51c), uVar7 < 0xf)) {
        bVar1 = *param_1;
        iVar6 = *(int *)(param_1 + 0x53c);
LAB_000189a0:
        printk(DAT_00018b3c,iVar8 + 0x1c,bVar1 & 7,uVar7 - 1,uVar5,*(undefined4 *)(iVar6 + 0x54));
      }
LAB_000189b6:
      *(int *)(param_1 + 0xbb0) = *(int *)(param_1 + 0xbb0) + -1;
    }
  }
  else if (uVar11 == 2) {
    iVar4 = *(int *)(param_1 + 0x540);
    iVar6 = *(int *)(param_1 + 0xba8) + -4;
    if (iVar6 != 0) {
      list_del(*(int *)(param_1 + 0xba8));
      *(int *)(param_1 + 0x540) = iVar6;
      rkcif_write_register(iVar8,uVar5,*(undefined4 *)(extraout_r1_00 + 0x50));
      if ((1 < *(int *)(iVar8 + 0x8038)) && (uVar7 = *(uint *)(param_1 + 0x51c), uVar7 < 0xf)) {
        bVar1 = *param_1;
        iVar6 = *(int *)(param_1 + 0x540);
        goto LAB_000189a0;
      }
      goto LAB_000189b6;
    }
  }
  else {
    iVar4 = 0;
  }
  if (*(int *)(param_1 + 0xbc0) != 0) {
    *(int *)(param_1 + 0xbc0) = *(int *)(param_1 + 0xbc0) + -1;
  }
LAB_000189cc:
  if (bVar2) {
    if ((1 < *(int *)(iVar8 + 0x8038)) && (*(uint *)(param_1 + 0x51c) < 0xf)) {
      printk(DAT_00018b40,iVar8 + 0x1c,*param_1 & 7,*(uint *)(param_1 + 0x51c) - 1);
    }
    if (*(int *)(iVar10 + 4) - 5U < 2) {
      uVar3 = 0x39;
    }
    else {
      uVar3 = 0;
    }
    rkcif_write_register_or(iVar8,uVar3,0x10000);
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x30) = *(int *)(param_1 + 0x51c) + -1;
      uVar3 = *(undefined4 *)(param_1 + 0x74c);
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 0x748);
      *(undefined4 *)(iVar4 + 0x2c) = uVar3;
      *(undefined4 *)(param_1 + 0xbf4) = *(undefined4 *)(param_1 + 0x51c);
      rkcif_s_rx_buffer(iVar8,iVar4 + 0x18);
    }
    if (*(int *)(*(int *)(iVar8 + 0x7ed4) + 0x194) == 0) {
      if (*(int *)(iVar10 + 4) - 4U < 3) {
        if (uVar9 == 0) {
          uVar9 = get_reg_index_of_frm1_y_addr();
        }
        else {
          uVar9 = get_reg_index_of_frm0_y_addr();
        }
      }
      else if (uVar9 == 0) {
        if ((*param_1 & 7) < 4) {
          uVar9 = (uint)*(byte *)((*param_1 & 7) + DAT_00018b44 + 0x1e);
        }
        else {
          uVar9 = 7;
        }
      }
      else {
        uVar9 = get_dvp_reg_index_of_frm0_y_addr();
      }
      if (uVar11 == 1) {
        *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x53c);
      }
      else {
        *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x540);
      }
      rkcif_write_register(iVar8,uVar9,*(undefined4 *)(*(int *)(param_1 + 0x53c) + 0x54));
      return;
    }
  }
  return;
}



/* ===== rkcif_do_stop_stream @ 00018b48 size=1630 ===== */

void rkcif_do_stop_stream(byte *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  bool bVar23;
  byte in_Q;
  undefined8 uVar24;
  uint uVar25;
  undefined1 auStack_3c [24];
  
  iVar13 = *(int *)(param_1 + 4);
  iVar16 = iVar13 + 0x1c;
  iVar8 = *(int *)(iVar13 + 0x7ed4);
  mutex_lock(iVar13 + 0x7378);
  uVar25 = param_2;
  printk(DAT_00018e2c,iVar16,*param_1 & 7,*(undefined4 *)(param_1 + 0x7a4),param_2);
  if (*(uint *)(param_1 + 0x7a4) == param_2) {
    param_1[0xbf8] = 1;
    cVar21 = *(int *)(param_1 + 0x788) < 0;
    cVar22 = *(int *)(param_1 + 0x788) == 0;
    cVar19 = '\x01';
    cVar20 = '\0';
    if (!(bool)cVar22) {
      if (*(int *)(iVar13 + 0x804c) == 0) {
        uVar1 = rkcif_get_linetime(param_1);
        *(undefined4 *)(iVar13 + 0x804c) = uVar1;
      }
      iVar2 = rkcif_get_sensor_vblank(iVar13);
      iVar4 = *(int *)(iVar13 + 0x39c);
      iVar14 = *(int *)(iVar13 + 0x804c);
      disableIRQinterrupts();
      uVar17 = *(uint *)(param_1 + 0x748);
      uVar18 = *(uint *)(param_1 + 0x74c);
      uVar24 = ktime_get(iVar2,(uint)(byte)(cVar21 << 4 | cVar22 << 3 | cVar19 << 2 | cVar20 << 1 |
                                           in_Q) << 0x1b);
      uVar3 = (uint)((ulonglong)uVar24 >> 0x20);
      uVar9 = (uint)uVar24;
      bVar23 = uVar3 <= uVar18;
      if (uVar18 == uVar3) {
        bVar23 = uVar9 <= uVar17;
      }
      if ((!bVar23) &&
         (uVar3 - uVar18 == (uint)(uVar9 < uVar17) &&
          uVar9 - uVar17 < (uint)(iVar14 * (iVar2 + iVar4) + DAT_00018e30))) {
        disableIRQinterrupts();
        if (*(int *)(param_1 + 0x788) << 0x1f < 0) {
          uVar1 = 1;
LAB_00018c16:
          *(undefined4 *)(param_1 + 0x790) = uVar1;
        }
        else if (*(int *)(param_1 + 0x788) << 0x1e < 0) {
          uVar1 = 2;
          goto LAB_00018c16;
        }
        param_1[0xc07] = 1;
        rkcif_stop_dma_capture(param_1);
      }
    }
    _cond_resched();
    if (*(int *)(param_1 + 0x510) == 2) {
      init_wait_entry(auStack_3c,0);
      iVar2 = 0x96;
      while (prepare_to_wait_event(param_1 + 0x514,auStack_3c,2), *(int *)(param_1 + 0x510) == 2) {
        if (iVar2 == 0) goto LAB_00018c5e;
        iVar2 = schedule_timeout(iVar2);
      }
      if (iVar2 == 0) {
        iVar2 = 1;
      }
LAB_00018c5e:
      finish_wait(param_1 + 0x514,auStack_3c);
      if (iVar2 == 0) {
        rkcif_stream_stop(param_1);
        param_1[0xbf8] = 0;
      }
    }
    media_pipeline_stop(param_1 + 0x1d8);
    iVar2 = (**(code **)(iVar13 + 0x71c4))(iVar13 + 0x7110,0);
    if (iVar2 < 0) {
      printk(DAT_00018e34,iVar16);
    }
    *(undefined1 *)(iVar13 + 0x8030) = 0;
    param_1[0xbfc] = 0;
    if (param_1[0xbca] != 0) {
      param_1[0xbca] = 0;
      param_1[0xbcb] = 1;
    }
LAB_00018cb0:
    if ((int)(param_2 << 0x1f) < 0) {
LAB_00018d0e:
      disableIRQinterrupts();
      iVar2 = *(int *)(param_1 + 0x534);
      pbVar15 = param_1 + 0x52c;
      if (iVar2 != 0) {
        piVar5 = *(int **)(param_1 + 0x530);
        *(int *)(param_1 + 0x530) = iVar2 + 0x280;
        *(byte **)(iVar2 + 0x280) = pbVar15;
        *(int **)(iVar2 + 0x284) = piVar5;
        *piVar5 = iVar2 + 0x280;
      }
      iVar2 = *(int *)(param_1 + 0x538);
      if ((iVar2 != 0) && (iVar2 != *(int *)(param_1 + 0x534))) {
        piVar5 = *(int **)(param_1 + 0x530);
        *(int *)(param_1 + 0x530) = iVar2 + 0x280;
        *(byte **)(iVar2 + 0x280) = pbVar15;
        *(int **)(iVar2 + 0x284) = piVar5;
        *piVar5 = iVar2 + 0x280;
      }
      param_1[0x534] = 0;
      param_1[0x535] = 0;
      param_1[0x536] = 0;
      param_1[0x537] = 0;
      param_1[0x538] = 0;
      param_1[0x539] = 0;
      param_1[0x53a] = 0;
      param_1[0x53b] = 0;
      if (*(int *)(iVar13 + 0x73a1) - 5U < 2) {
        uVar9 = *param_1 & 7;
        if ((((*param_1 & 7) == 0) || (uVar9 == 1)) || (uVar9 == 2)) {
          disableIRQinterrupts();
          iVar2 = *(int *)(param_1 + 4) + uVar9 * 4;
          pbVar6 = *(byte **)(iVar2 + 0x742c);
          if (pbVar6 != (byte *)0x0) {
            if ((pbVar6 != *(byte **)(param_1 + 0x534)) && (pbVar6 != *(byte **)(param_1 + 0x538)))
            {
              for (pbVar10 = *(byte **)(param_1 + 0x52c); pbVar15 != pbVar10;
                  pbVar10 = *(byte **)pbVar10) {
                if (pbVar6 == pbVar10 + -0x280) goto LAB_00018dc4;
              }
              puVar11 = *(undefined4 **)(param_1 + 0x530);
              *(byte **)(param_1 + 0x530) = pbVar6 + 0x280;
              *(byte **)(pbVar6 + 0x280) = pbVar15;
              *(undefined4 **)(pbVar6 + 0x284) = puVar11;
              *puVar11 = pbVar6 + 0x280;
            }
LAB_00018dc4:
            *(undefined4 *)(iVar2 + 0x742c) = 0;
          }
        }
      }
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x7ee0);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x28c) != 0)) {
        if (*(char *)(iVar2 + 0x294) == '\0') {
          iVar2 = iVar2 + 0xf8;
        }
        else {
          iVar2 = iVar2 + 0x118;
        }
        iVar2 = media_entity_remote_pad(iVar2);
        piVar5 = DAT_000191c8;
        if (iVar2 != 0) {
          iVar2 = *(int *)(iVar2 + 0x10);
          while (*(byte **)(param_1 + 0x79c) != param_1 + 0x79c) {
            iVar4 = *(int *)(param_1 + 0x79c);
            if ((((*(char *)(iVar4 + 0x24) != '\0') && (iVar2 != 0)) &&
                (**(int **)(iVar2 + 0x68) != 0)) &&
               (pcVar12 = *(code **)(**(int **)(iVar2 + 0x68) + 0x18), pcVar12 != (code *)0x0)) {
              if ((*piVar5 != 0) && (pcVar7 = *(code **)(*piVar5 + 0x18), pcVar7 != (code *)0x0)) {
                pcVar12 = pcVar7;
              }
              (*pcVar12)(iVar2,DAT_000191c0,iVar4);
            }
            dma_buf_put(*(undefined4 *)(iVar4 + 8));
            list_del(iVar4);
            kfree();
          }
        }
      }
      uVar1 = DAT_00018e3c;
      piVar5 = DAT_00018e38;
      for (pbVar6 = *(byte **)(param_1 + 0x52c); pbVar15 != pbVar6; pbVar6 = *(byte **)pbVar6) {
        if (2 < *piVar5) {
          printk(uVar1,iVar16,*param_1 & 7,*(undefined4 *)(pbVar6 + 8),uVar25);
        }
        vb2_buffer_done(pbVar6 + -0x280,6);
      }
      *(byte **)(param_1 + 0x52c) = pbVar15;
      *(byte **)(param_1 + 0x530) = pbVar15;
      while (*(byte **)(param_1 + 0xbe8) != param_1 + 0xbe8) {
        iVar2 = *(int *)(param_1 + 0xbe8);
        if (iVar2 + -0x280 != 0) {
          list_del();
          vb2_buffer_done(iVar2 + -0x280,6);
        }
      }
      param_1[0xbc0] = 0;
      param_1[0xbc1] = 0;
      param_1[0xbc2] = 0;
      param_1[0xbc3] = 0;
      *(uint *)(param_1 + 0x788) = *(uint *)(param_1 + 0x788) & 0xfffffffe;
    }
  }
  else {
    if (param_2 == 1) {
      if (*(int *)(param_1 + 0x788) << 0x1f < 0) {
        param_1[0x790] = 1;
        param_1[0x791] = 0;
        param_1[0x792] = 0;
        param_1[0x793] = 0;
        _cond_resched();
        if (*(int *)(param_1 + 0x790) == 1) {
          init_wait_entry(auStack_3c,0);
          for (iVar2 = 300;
              (prepare_to_wait_event(param_1 + 0x514,auStack_3c,2), *(int *)(param_1 + 0x790) == 1
              && (iVar2 != 0)); iVar2 = schedule_timeout(iVar2)) {
          }
          finish_wait(param_1 + 0x514,auStack_3c);
        }
      }
      goto LAB_00018d0e;
    }
    if (param_2 != 2) goto LAB_00018cb0;
    if (*(int *)(param_1 + 0x788) << 0x1f < 0) {
      param_1[0x790] = 2;
      param_1[0x791] = 0;
      param_1[0x792] = 0;
      param_1[0x793] = 0;
      _cond_resched();
      if (*(int *)(param_1 + 0x790) == 2) {
        init_wait_entry(auStack_3c,0);
        for (iVar2 = 300;
            (prepare_to_wait_event(param_1 + 0x514,auStack_3c,2), *(int *)(param_1 + 0x790) == 2 &&
            (iVar2 != 0)); iVar2 = schedule_timeout(iVar2)) {
        }
        finish_wait(param_1 + 0x514,auStack_3c);
      }
    }
  }
  if (*(uint *)(param_1 + 0x7a4) == param_2) {
    iVar2 = (**(code **)(iVar13 + 0x71c0))(iVar13 + 0x7110);
    if (iVar2 < 0) {
      printk(DAT_000191c4,iVar16);
    }
    if (*(int *)(iVar13 + 0x73a1) == 5) {
      if (*(int *)(iVar13 + 0x8f8) == 1) {
        iVar2 = *(int *)(iVar13 + 0x1500);
LAB_00019088:
        if (iVar2 == 1) {
          *(undefined1 *)(iVar13 + 0x73a0) = 1;
        }
      }
    }
    else if (*(int *)(iVar13 + 0x73a1) == 6) {
      if ((*(int *)(iVar13 + 0x8f8) == 1) && (*(int *)(iVar13 + 0x1500) == 1)) {
        iVar2 = *(int *)(iVar13 + 0x2108);
        goto LAB_00019088;
      }
    }
    else {
      *(undefined1 *)(iVar13 + 0x73a0) = 1;
    }
    mutex_lock(iVar8 + 200);
    piVar5 = (int *)(iVar8 + 0xa0);
    for (iVar2 = 0; iVar2 < *(int *)(iVar8 + 0xbc); iVar2 = iVar2 + 1) {
      if (*(int *)(*piVar5 + 0x71a8) != 0) {
        bVar23 = false;
        goto LAB_000190b4;
      }
      piVar5 = piVar5 + 1;
    }
    bVar23 = true;
LAB_000190b4:
    mutex_unlock(iVar8 + 200);
    if ((*(char *)(iVar13 + 0x73a0) != '\0') &&
       (((*(int *)(iVar13 + 0x736c) < 9 ||
         (rkcif_do_soft_reset(iVar13), *(char *)(iVar13 + 0x73a0) != '\0')) && (bVar23)))) {
      *(undefined1 *)(iVar13 + 0x73a0) = 0;
      *(undefined1 *)(iVar13 + 0x8031) = 1;
      *(undefined4 *)(iVar13 + 0x8044) = 0;
      *(undefined4 *)(iVar13 + 0x804c) = 0;
      *(undefined4 *)(iVar13 + 0x7ffc) = 0;
      param_1[0xbfe] = 0;
    }
    tasklet_disable(param_1 + 0xbd0);
    if (!bVar23) goto LAB_00018ea2;
  }
  if (*(int *)(iVar8 + 0x194) != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x7ed4);
    if (*(int *)(iVar8 + 0x194) != 0) {
      rkcif_free_buffer(*(int *)(param_1 + 4),iVar8 + 0x17c);
    }
    *(undefined4 *)(iVar8 + 0x188) = 0;
    *(undefined4 *)(iVar8 + 0x194) = 0;
  }
LAB_00018ea2:
  uVar1 = DAT_000191bc;
  *(byte **)(param_1 + 0xbe8) = param_1 + 0xbe8;
  *(byte **)(param_1 + 0xbec) = param_1 + 0xbe8;
  *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) & ~param_2;
  printk(uVar1,iVar16,*param_1 & 7,*(undefined4 *)(param_1 + 0x788),uVar25);
  mutex_unlock(iVar13 + 0x7378);
  if ((*(int *)(iVar13 + 0x803c) != 0) && (*(int *)(iVar13 + 0x71a8) == 0)) {
    iVar16 = *(int *)(iVar13 + 0x7ed4);
    mutex_lock(iVar16 + 200);
    iVar8 = *(int *)(iVar16 + 0x154) + -1;
    *(int *)(iVar16 + 0x154) = iVar8;
    if (*(int *)(iVar13 + 0x803c) == 1) {
      piVar5 = (int *)(iVar16 + 0xfc);
      for (iVar2 = 0; iVar2 < *(int *)(iVar16 + 0x118); iVar2 = iVar2 + 1) {
        if (iVar13 == *piVar5) {
          *(undefined1 *)(iVar2 + iVar16 + 0x11c) = 0;
          goto LAB_00018f2a;
        }
        piVar5 = piVar5 + 1;
      }
    }
    else {
LAB_00018f2a:
      if (*(int *)(iVar13 + 0x803c) == 2) {
        *(undefined1 *)(iVar16 + 0xf4) = 0;
      }
      if (*(int *)(iVar13 + 0x803c) == 3) {
        piVar5 = (int *)(iVar16 + 0x124);
        for (iVar2 = 0; iVar2 < *(int *)(iVar16 + 0x140); iVar2 = iVar2 + 1) {
          if (iVar13 == *piVar5) {
            *(undefined1 *)(iVar2 + iVar16 + 0x144) = 0;
            break;
          }
          piVar5 = piVar5 + 1;
        }
      }
    }
    if ((iVar8 == 0) && (*(char *)(iVar16 + 0x16c) != '\0')) {
      *(undefined1 *)(iVar16 + 0x16c) = 0;
      *(undefined4 *)(iVar16 + 0x14c) = 0;
      *(undefined4 *)(iVar16 + 0x150) = 0;
      piVar5 = (int *)(iVar16 + 0xa0);
      for (iVar8 = 0; iVar8 < *(int *)(iVar16 + 0xbc); iVar8 = iVar8 + 1) {
        *(undefined4 *)(*piVar5 + 0x803c) = 0;
        piVar5 = piVar5 + 1;
      }
    }
    mutex_unlock(iVar16 + 200);
  }
  return;
}



/* ===== rkcif_stop_streaming @ 000191cc size=8 ===== */

void rkcif_stop_streaming(int param_1)

{
  rkcif_do_stop_stream(*(undefined4 *)(param_1 + 0x28),1);
  return;
}



/* ===== rkcif_set_fps @ 000191d4 size=350 ===== */

void rkcif_set_fps(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 4);
  if (*(int *)(iVar5 + 0x350) == 0) {
    iVar2 = rkcif_update_sensor_info();
    if (iVar2 != 0) {
      printk(DAT_0001933c,*(int *)(param_1 + 4) + 0x1c,DAT_00019338);
      return;
    }
    if (*(int *)(*(int *)(param_1 + 4) + 0x350) == 0) {
      return;
    }
  }
  uVar1 = __aeabi_uidiv(*(undefined4 *)(iVar5 + 0x364),*(undefined4 *)(iVar5 + 0x360));
  iVar2 = rkcif_get_sensor_vblank_def(iVar5);
  iVar3 = rkcif_get_sensor_vblank(iVar5);
  if (iVar2 != 0) {
    uVar1 = __aeabi_uidiv(uVar1 * (iVar2 + *(int *)(iVar5 + 0x39c)),*(int *)(iVar5 + 0x39c) + iVar3)
    ;
  }
  uVar6 = param_2[1];
  if ((uVar6 == 0) || (uVar1 < uVar6)) {
    printk(DAT_00019334,*(int *)(param_1 + 4) + 0x1c,uVar6,uVar1);
    return;
  }
  iVar7 = uVar1 - uVar6;
  __aeabi_idivmod(uVar6,iVar7);
  iVar2 = iVar7;
  iVar3 = extraout_r1;
  while (iVar3 != 0) {
    __aeabi_idivmod(iVar2,iVar3);
    iVar2 = iVar3;
    iVar3 = extraout_r1_00;
  }
  iVar3 = __aeabi_idiv(uVar6,iVar2);
  iVar2 = __aeabi_idiv(iVar7,iVar2);
  if (0x40 < iVar3) {
    iVar2 = __aeabi_idiv(iVar2,iVar3 >> 6);
    if (iVar2 == 0) {
      iVar2 = 1;
      iVar3 = 0x40;
      goto LAB_000192b4;
    }
    iVar3 = 0x40;
  }
  if (7 < iVar2) {
    uVar4 = __aeabi_idiv(iVar2,7);
    iVar3 = __aeabi_idiv(iVar3,uVar4);
    iVar2 = 7;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
  }
LAB_000192b4:
  if (*param_2 - 2U < 2) {
    iVar7 = 0;
    while (iVar7 < *param_2) {
      iVar7 = iVar7 + 1;
      if (uVar6 == uVar1) {
        *(undefined1 *)(iVar5 + 0xfb4) = 1;
      }
      else {
        *(undefined1 *)(iVar5 + 0xfb3) = 1;
        *(char *)(iVar5 + 0xfb0) = (char)iVar3;
        *(char *)(iVar5 + 0xfb1) = (char)iVar2;
      }
      iVar5 = iVar5 + 0xc08;
    }
  }
  else if (uVar6 == uVar1) {
    *(undefined1 *)(param_1 + 0xbcc) = 1;
  }
  else {
    *(char *)(param_1 + 0xbc8) = (char)iVar3;
    *(undefined1 *)(param_1 + 0xbcb) = 1;
    *(char *)(param_1 + 0xbc9) = (char)iVar2;
  }
  if (2 < *DAT_00019340) {
    printk(DAT_00019344,*(int *)(param_1 + 4) + 0x1c,*(undefined1 *)(param_1 + 0xbcb),iVar3,iVar2);
  }
  return;
}



/* ===== rkcif_ioctl_default @ 00019348 size=242 ===== */

undefined4 rkcif_ioctl_default(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  uint in_r3;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int *in_stack_00000000;
  undefined1 auStack_90 [16];
  int local_80;
  int iStack_7c;
  
  iVar1 = video_drvdata();
  iVar7 = *(int *)(iVar1 + 4);
  if (in_r3 == DAT_0001943c) {
    uVar4 = rkcif_do_reset_work(iVar7,*in_stack_00000000);
    return uVar4;
  }
  if (DAT_0001943c <= in_r3) {
    if (in_r3 == DAT_00019440) {
      local_80 = *in_stack_00000000;
      iStack_7c = in_stack_00000000[1];
      rkcif_set_fps(iVar1,&local_80);
    }
    else {
      if (in_r3 != DAT_00019440 + 0x3ffbfffc) {
        return 0xffffffea;
      }
      if (*(char *)(iVar1 + 0xbfb) != '\0') {
        *in_stack_00000000 = 0;
        return 0;
      }
      if (*(char *)(iVar1 + 0xc02) == '\0') {
        *in_stack_00000000 = 1;
        return 0;
      }
      *in_stack_00000000 = 2;
    }
    return 0;
  }
  if (in_r3 != DAT_0001943c - 5) {
    return 0xffffffea;
  }
  uVar4 = DAT_00019448;
  if ((*(int *)(iVar7 + 0x350) == 0) ||
     (iVar2 = get_input_fmt(*(int *)(iVar7 + 0x350),auStack_90,0,&local_80), uVar4 = DAT_00019444,
     iVar2 == 0)) goto LAB_000193ba;
  iVar3 = *in_stack_00000000;
  if (iVar3 != 0) {
    *(undefined1 *)(iVar1 + 0xbfb) = 0;
    if (iVar3 != 2) {
      *(undefined1 *)(iVar1 + 0xc02) = 0;
      return 0;
    }
    uVar6 = 1;
    goto LAB_00019400;
  }
  if (*(int *)(iVar7 + 0x7edc) == 0) {
    iVar5 = *(int *)(iVar7 + 0x736c);
    bVar9 = SBORROW4(iVar5,8);
    iVar3 = iVar5 + -8;
    bVar8 = iVar5 == 8;
LAB_000193dc:
    if ((bVar8 || iVar3 < 0 != bVar9) && (uVar4 = DAT_0001944c, *(int *)(iVar2 + 8) != 0)) {
LAB_000193ba:
      printk(uVar4,iVar7 + 0x1c);
      return 0xffffffea;
    }
  }
  else if (*(int *)(iVar7 + 0x7edc) == 1) {
    iVar5 = *(int *)(iVar7 + 0x736c);
    bVar9 = SBORROW4(iVar5,5);
    iVar3 = iVar5 + -5;
    bVar8 = iVar5 == 5;
    goto LAB_000193dc;
  }
  *(undefined1 *)(iVar1 + 0xbfb) = 1;
  uVar6 = 0;
LAB_00019400:
  *(undefined1 *)(iVar1 + 0xc02) = uVar6;
  return 0;
}



/* ===== rkcif_reset_work @ 00019450 size=34 ===== */

void rkcif_reset_work(int param_1)

{
  int iVar1;
  
  iVar1 = rkcif_do_reset_work(param_1 + -0x7fd8,*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    printk(DAT_00019474,param_1 + -0x7fbc);
    return;
  }
  return;
}



/* ===== rkcif_reset_watchdog_timer_handler @ 00019478 size=590 ===== */

void rkcif_reset_watchdog_timer_handler(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte in_Q;
  uint in_cpsr;
  uint local_30 [3];
  
  bVar2 = false;
  piVar9 = (int *)(param_1 + -0x7b64);
  iVar11 = 0;
  for (uVar12 = 0; uVar12 < *(uint *)(param_1 + -0xbe8); uVar12 = uVar12 + 1) {
    uVar3 = in_cpsr;
    if (piVar9[0x143] == 2) {
      iVar10 = *piVar9;
      uVar4 = *(uint *)(param_1 +
                       ((*(byte *)(uVar12 * 0xc08 + param_1 + -0x7f50 + 1000) & 7) + 10) * 4);
      if ((uint)piVar9[0x2f0] <= uVar4) {
        if (uVar4 != piVar9[0x2f0]) goto LAB_00019634;
        if ((uint)piVar9[0x146] < 3) {
          if (0x13 < *(uint *)(param_1 + 0x1c)) goto LAB_000196aa;
        }
        else {
          iVar7 = rkcif_is_reduced_frame_rate(iVar10);
          uVar3 = in_cpsr;
          if (iVar7 == 0) {
LAB_000196aa:
            uVar4 = 1;
            printk(DAT_000196f0,iVar10 + 0x1c,*(undefined4 *)(param_1 + 0x1c));
            *(undefined4 *)(param_1 + 0x84) = 3;
            rkcif_init_reset_work(param_1);
            goto LAB_000195b8;
          }
        }
        if (2 < *DAT_000196d0) {
          printk(DAT_000196ec,iVar10 + 0x1c,DAT_000196e8);
        }
        goto LAB_00019630;
      }
      if (iVar11 == 0) {
        if (0 < *DAT_000196d0) {
          printk(DAT_000196d4,iVar10 + 0x1c,uVar4,piVar9[0x146],*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x80));
        }
        *(int *)(param_1 + ((*(byte *)(uVar12 * 0xc08 + param_1 + -0x7f50 + 1000) & 7) + 10) * 4) =
             piVar9[0x2f0];
        if (2 < (uint)piVar9[0x146]) {
          rkcif_is_reduced_frame_rate(iVar10);
        }
        iVar7 = *(int *)(param_1 + 0x80);
        if (iVar7 == 3) {
          iVar7 = *(int *)(iVar10 + 0x350);
          if (((iVar7 == 0) || (**(int **)(iVar7 + 0x68) == 0)) ||
             (pcVar8 = *(code **)(**(int **)(iVar7 + 0x68) + 0x18), pcVar8 == (code *)0x0)) {
LAB_00019574:
            uVar4 = 0;
          }
          else {
            if ((*DAT_000196d8 == 0) ||
               (pcVar5 = *(code **)(*DAT_000196d8 + 0x18), pcVar5 == (code *)0x0)) {
              iVar7 = (*pcVar8)(iVar7,DAT_000196e0,local_30);
            }
            else {
              iVar7 = (*pcVar5)(iVar7,DAT_000196e0,local_30);
            }
            if (iVar7 != 0) goto LAB_00019574;
            uVar4 = local_30[0];
            if (local_30[0] != 0) {
              *(undefined4 *)(param_1 + 0x84) = 4;
            }
          }
          local_30[0] = 0;
          iVar7 = *(int *)(iVar10 + 0x350);
          if (((iVar7 != 0) && (**(int **)(iVar7 + 0x68) != 0)) &&
             (pcVar8 = *(code **)(**(int **)(iVar7 + 0x68) + 0x18), pcVar8 != (code *)0x0)) {
            if ((*DAT_000196d8 != 0) &&
               (pcVar5 = *(code **)(*DAT_000196d8 + 0x18), pcVar5 != (code *)0x0)) {
              pcVar8 = pcVar5;
            }
            (*pcVar8)(iVar7,DAT_000196dc,local_30);
          }
          if (uVar4 == 0) {
            iVar7 = rkcif_is_csi2_err_trigger_reset(param_1);
            if (iVar7 == 0) goto LAB_0001961c;
            uVar4 = 1;
            *(undefined4 *)(param_1 + 0x84) = 1;
          }
LAB_000195b2:
          rkcif_init_reset_work(param_1);
          uVar3 = in_cpsr;
        }
        else {
          if (iVar7 == 1) {
            uVar4 = rkcif_is_csi2_err_trigger_reset(param_1);
LAB_00019618:
            if (uVar4 != 0) goto LAB_000195b2;
          }
          else if (iVar7 == 2) {
            uVar4 = (uint)*(byte *)(param_1 + 0x7b);
            if (uVar4 != 0) {
              *(undefined4 *)(param_1 + 0x84) = 1;
            }
            *(undefined1 *)(param_1 + 0x7b) = 0;
            goto LAB_00019618;
          }
LAB_0001961c:
          uVar6 = *(uint *)(param_1 + 0x1c);
          uVar3 = *(uint *)(param_1 + 0x20);
          if ((*(uint *)(param_1 + 0x80) & 0xfffffffd) == 1) {
            if (uVar3 != uVar6) {
LAB_00019630:
              bVar2 = true;
              goto LAB_00019634;
            }
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x1c) = 0;
            bVar2 = true;
            uVar3 = in_cpsr;
          }
          else {
            if (uVar6 <= uVar3) goto LAB_00019630;
            bVar1 = ((int)(uVar3 - uVar6) < 0) << 4 | (uVar3 == uVar6) << 3 |
                    SBORROW4(uVar3,uVar6) << 1 | in_Q;
            disableIRQinterrupts();
            uVar4 = 0;
            *(undefined1 *)(param_1 + 0x78) = 0;
            *(undefined1 *)(param_1 + 0x7a) = 0;
            uVar3 = in_cpsr & 0xffffff00;
            in_Q = (in_cpsr >> 0x1b & 1) != 0;
            printk(DAT_000196e4,iVar10 + 0x1c,uVar6,(uint)bVar1 << 0x1b);
          }
        }
      }
      else {
LAB_00019634:
        uVar4 = 0;
        uVar3 = in_cpsr;
      }
LAB_000195b8:
      iVar11 = iVar11 + 1;
      if (uVar4 != 0) goto LAB_000194ba;
    }
    piVar9 = piVar9 + 0x302;
    in_cpsr = uVar3;
  }
  if (bVar2) {
    mod_timer(param_1,*DAT_000196c8 + *(int *)(param_1 + 0x14));
  }
LAB_000194ba:
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (iVar11 == 0) {
    disableIRQinterrupts();
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7a) = 0;
    printk(DAT_000196cc,param_1 + -0x7f34);
  }
  return;
}



/* ===== rkcif_reset_notifier @ 000196f4 size=102 ===== */

undefined4 rkcif_reset_notifier(int param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 0;
  piVar1 = (int *)(param_1 + -0xd0);
  while( true ) {
    if (*(int *)(param_1 + -0xb4) <= iVar2) {
      return 0xffffffea;
    }
    iVar3 = *piVar1;
    if (*param_3 == *(int *)(iVar3 + 0x7ff4)) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  }
  if (*(char *)(iVar3 + 0x7fca) == '\0') {
    return 0;
  }
  uVar4 = param_2 & 0xff;
  disableIRQinterrupts();
  __aeabi_uidivmod(uVar4,*(undefined4 *)(iVar3 + 0x7f90),param_3,iVar2,param_4);
  if (extraout_r1 == 0) {
    iVar2 = *(int *)(iVar3 + 0x7fb4) + 1;
    *(int *)(iVar3 + 0x7fb4) = iVar2;
    if (iVar2 * -0x80000000 < 0) {
      *(uint *)(iVar3 + 0x7f8c) = uVar4;
    }
    else {
      *(uint *)(iVar3 + 0x7f88) = uVar4;
    }
  }
  *(uint *)(iVar3 + 0x7f94) = (param_2 & 0xffff) >> 8;
  return 0;
}



/* ===== rkcif_mbus_pixelcode_to_v4l2 @ 0001975a size=180 ===== */

undefined4 rkcif_mbus_pixelcode_to_v4l2(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == 0x300a) {
    return DAT_00019824;
  }
  if (param_1 < 0x300b) {
    if (param_1 == 0x3001) {
      return DAT_00019828;
    }
    if (param_1 < 0x3002) {
      if (param_1 == 0x200a) {
        return DAT_0001982c;
      }
      if (param_1 == 0x2013) {
        return DAT_00019830;
      }
      uVar2 = 0x2001;
      uVar1 = DAT_00019810;
    }
    else {
      if (param_1 == 0x3007) {
        return DAT_00019834;
      }
      if (param_1 == 0x3008) {
        return DAT_00019838;
      }
      uVar2 = 0x3002;
      uVar1 = DAT_00019818;
    }
  }
  else {
    if (param_1 == 0x3012) {
      return DAT_0001983c;
    }
    if (param_1 < 0x3013) {
      if (param_1 == 0x3010) {
        return DAT_00019840;
      }
      if (0x3010 < param_1) {
        return DAT_00019844;
      }
      uVar2 = 0x300e;
      uVar1 = DAT_0001981c;
    }
    else {
      if (param_1 == 0x3014) {
        return DAT_00019848;
      }
      if (param_1 < 0x3014) {
        return DAT_0001984c;
      }
      if (param_1 == 0x5002) {
        return DAT_00019850;
      }
      uVar2 = 0x5003;
      uVar1 = DAT_00019820;
    }
  }
  if (param_1 != uVar2) {
    uVar1 = DAT_00019814;
  }
  return uVar1;
}



/* ===== rkcif_set_default_fmt @ 00019854 size=256 ===== */

void rkcif_set_default_fmt(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  undefined1 auStack_16c [12];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_138;
  int iStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 auStack_d4 [180];
  
  if ((5 < *(int *)(param_1 + 0x736c)) &&
     ((iVar6 = param_1 + 1000, *(int *)(param_1 + 0x350) != 0 ||
      (rkcif_update_sensor_info(iVar6), *(int *)(param_1 + 0x350) != 0)))) {
    iVar1 = DAT_00019954;
    iVar5 = 0;
    while( true ) {
      memset(&local_130,0,0x50);
      iVar2 = *(int *)(param_1 + 0x350);
      local_138 = 1;
      iStack_134 = iVar5;
      if (((iVar2 != 0) && (iVar3 = *(int *)(*(int *)(iVar2 + 0x68) + 0x1c), iVar3 != 0)) &&
         (pcVar4 = *(code **)(iVar3 + 0x10), pcVar4 != (code *)0x0)) {
        iVar3 = *(int *)(iVar1 + 0x1c);
        if ((iVar3 == 0) || (pcVar7 = *(code **)(iVar3 + 0x10), pcVar7 == (code *)0x0)) {
          (*pcVar4)(iVar2,0,&local_138);
        }
        else {
          (*pcVar7)(iVar2,0,&local_138);
        }
      }
      memset(auStack_d4,0,0xb4);
      local_d8 = rkcif_mbus_pixelcode_to_v4l2(local_128);
      local_e0 = local_130;
      local_dc = local_12c;
      memset(auStack_16c,0,0x34);
      iVar2 = *(int *)(param_1 + 0x350);
      local_170 = 2;
      local_178 = 1;
      local_174 = iVar5;
      if (((iVar2 != 0) && (iVar3 = *(int *)(*(int *)(iVar2 + 0x68) + 0x1c), iVar3 != 0)) &&
         (pcVar4 = *(code **)(iVar3 + 0x18), pcVar4 != (code *)0x0)) {
        iVar3 = *(int *)(iVar1 + 0x1c);
        if ((iVar3 == 0) || (pcVar7 = *(code **)(iVar3 + 0x18), pcVar7 == (code *)0x0)) {
          iVar2 = (*pcVar4)(iVar2,0,&local_178);
        }
        else {
          iVar2 = (*pcVar7)(iVar2,0,&local_178);
        }
        if (iVar2 == 0) {
          local_e0 = local_160;
          local_dc = local_15c;
        }
      }
      iVar5 = iVar5 + 1;
      rkcif_set_fmt(iVar6,&local_e0,0);
      iVar6 = iVar6 + 0xc08;
      if (iVar5 == 4) break;
      if (iVar5 == 3) {
        *(undefined1 *)(param_1 + 0x33fb) = 0;
      }
    }
  }
  return;
}



/* ===== rkcif_enable_dma_capture @ 00019958 size=368 ===== */

void rkcif_enable_dma_capture(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint extraout_r2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  
  iVar3 = *(int *)(param_1 + 0x794);
  iVar5 = *(int *)(param_1 + 4);
  bVar8 = iVar3 == 2;
  if (bVar8) {
    iVar3 = 8;
  }
  iVar7 = *(int *)(iVar5 + 0x34c);
  uVar6 = *param_1 & 7;
  if (bVar8) {
    *(int *)(param_1 + 0x794) = iVar3;
  }
  uVar4 = *(uint *)(param_1 + 0x78c);
  if (*(uint *)(param_1 + 0x788) == 0) {
    *(uint *)(param_1 + 0x788) = uVar4;
    if (param_2 == 0) {
      if (uVar4 == 1) {
        rkcif_assign_new_buffer_init(param_1,uVar6);
        uVar4 = (*param_1 & 7) - 1;
        if (uVar4 < 3) {
          uVar1 = *(undefined1 *)(uVar4 + DAT_00019ac8 + 0x70f);
        }
        else {
          uVar1 = 0x3e;
        }
        rkcif_write_register(iVar5,uVar1,*(undefined4 *)(uVar6 * 0x68 + iVar5 + 0x71dc));
      }
      else if (uVar4 == 2) {
        rkcif_assign_new_buffer_init_toisp(param_1,uVar6,0,2,param_4);
      }
    }
    if (*(int *)(iVar7 + 4) - 5U < 2) {
      uVar2 = 0x39;
    }
    else {
      uVar2 = 0;
    }
    rkcif_write_register_or(iVar5,uVar2,0x10000);
    iVar3 = *(int *)(iVar7 + 4);
    if (iVar3 - 5U < 2) {
      uVar2 = get_reg_index_of_id_ctrl0(*param_1 & 7);
      uVar9 = rkcif_read_register(iVar5,uVar2);
      if (param_1[0xbfb] == 0) {
        uVar6 = (uint)uVar9 | 0x20;
      }
      else {
        uVar6 = (uint)uVar9 & 0xffffffdf;
      }
      uVar4 = get_reg_index_of_id_ctrl0(*param_1 & 7,(int)((ulonglong)uVar9 >> 0x20),uVar6);
      uVar6 = extraout_r2 | 0x10000000;
    }
    else if (iVar3 == 4) {
      uVar6 = (*param_1 & 7) - 1;
      if (uVar6 < 3) {
        uVar1 = *(undefined1 *)(uVar6 + DAT_00019ac8 + 0x44a);
      }
      else {
        uVar1 = 0x7c;
      }
      uVar6 = rkcif_read_register(iVar5,uVar1);
      if (param_1[0xbfb] == 0) {
        uVar6 = uVar6 | 0x400000;
      }
      else {
        uVar6 = uVar6 & 0xffbfffff;
      }
      uVar6 = uVar6 | 0x8000;
      uVar4 = (*param_1 & 7) - 1;
      if (uVar4 < 3) {
        uVar4 = (uint)*(byte *)(uVar4 + DAT_00019ac8 + 0x44a);
      }
      else {
        uVar4 = 0x7c;
      }
    }
    else {
      uVar6 = rkcif_read_register(iVar5,3);
      if (param_1[0xbfb] == 0) {
        uVar6 = uVar6 | 0x10000;
      }
      else {
        uVar6 = uVar6 & 0xfffeffff;
      }
      rkcif_write_register(iVar5,3,uVar6);
      uVar6 = rkcif_read_register(iVar5,0);
      if (*(int *)(iVar5 + 0x736c) == 9) {
        uVar6 = uVar6 | 2;
      }
      else if (*(int *)(iVar5 + 0x736c) == 10) {
        uVar6 = uVar6 | 0x100000 << (*param_1 & 7);
      }
      uVar4 = 0;
    }
    rkcif_write_register(iVar5,uVar4,uVar6);
  }
  else {
    *(uint *)(param_1 + 0x788) = uVar4 | *(uint *)(param_1 + 0x788);
  }
  param_1[0x78c] = 0;
  param_1[0x78d] = 0;
  param_1[0x78e] = 0;
  param_1[0x78f] = 0;
  return;
}



/* ===== rkcif_buf_queue @ 00019acc size=1076 ===== */

void rkcif_buf_queue(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *__s;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 *puVar7;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  
  pbVar13 = *(byte **)(*param_1 + 0x28);
  iVar8 = *(int *)(pbVar13 + 0x574);
  iVar17 = *(int *)(*(int *)(pbVar13 + 4) + 0x7ed4);
  iVar9 = *(int *)(pbVar13 + 0x784);
  if (iVar9 != 0) {
    disableIRQinterrupts();
    if (iVar9 + 0x524 != *(int *)(iVar9 + 0x524)) {
      for (piVar10 = *(int **)(iVar9 + 0x524); (int *)(iVar9 + 0x524) != piVar10;
          piVar10 = (int *)*piVar10) {
        if ((int *)piVar10[-1] == param_1) {
          if ((piVar10[5] != 0) && (iVar9 = piVar10[5] + -1, piVar10[5] = iVar9, iVar9 != 0)) {
            return;
          }
          break;
        }
      }
    }
  }
  piVar1 = DAT_00019f20;
  piVar10 = param_1 + 0xa2;
  memset(piVar10,0,0x20);
  piVar14 = piVar10;
  for (iVar9 = 0; uVar11 = (uint)*(byte *)(iVar8 + 0x15), iVar9 < (int)uVar11; iVar9 = iVar9 + 1) {
    __s = (void *)vb2_plane_vaddr(param_1,iVar9);
    if (*(char *)(iVar17 + 0x1a6) == '\0') {
      piVar3 = (int *)vb2_plane_cookie(param_1,iVar9);
      iVar4 = *piVar3;
    }
    else {
      piVar3 = (int *)vb2_plane_cookie(param_1,iVar9);
      iVar4 = *(int *)(*piVar3 + 0xc);
    }
    *piVar14 = iVar4;
    if ((((*piVar1 != 0) && (__s != (void *)0x0)) && (*(char *)(iVar17 + 0x1a4) == '\0')) &&
       (memset(__s,0,*(size_t *)(pbVar13 + iVar9 * 0x14 + 0x590)), 0 < *piVar1)) {
      printk(DAT_00019f00,*(int *)(pbVar13 + 4) + 0x1c,
             *(undefined4 *)(pbVar13 + iVar9 * 0x14 + 0x590));
    }
    piVar14 = piVar14 + 1;
  }
  if (uVar11 == 1) {
    for (iVar9 = 0; iVar9 < (int)(*(byte *)(iVar8 + 0x14) - 1); iVar9 = iVar9 + 1) {
      iVar4 = *piVar10;
      piVar10 = piVar10 + 1;
      *piVar10 = *(int *)(pbVar13 + 0x580) * *(int *)(pbVar13 + iVar9 * 0x14 + 0x594) + iVar4;
    }
  }
  disableIRQinterrupts();
  puVar7 = *(undefined4 **)(pbVar13 + 0x530);
  *(int **)(pbVar13 + 0x530) = param_1 + 0xa0;
  param_1[0xa0] = (int)(pbVar13 + 0x52c);
  param_1[0xa1] = (int)puVar7;
  *puVar7 = param_1 + 0xa0;
  if ((*(int *)(pbVar13 + 0x788) << 0x1e < 0) && (param_1[0xaa] == 0)) {
    puVar7 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00019f04 + 0x18),0xdc0);
    memset(puVar7,0,0x30);
    if (*(int *)(*(int *)(pbVar13 + 4) + 0x73a1) == 5) {
      if ((*pbVar13 & 7) == 0) {
        uVar5 = 1;
        goto LAB_00019d44;
      }
    }
    else if (*(int *)(*(int *)(pbVar13 + 4) + 0x73a1) == 6) {
      if ((*pbVar13 & 7) == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 1;
        if ((*pbVar13 & 7) != 1) goto LAB_00019d5c;
      }
LAB_00019d44:
      puVar7[7] = uVar5;
    }
LAB_00019d5c:
    iVar8 = (**(code **)(*(int *)(iVar17 + 0x9c) + 8))(param_1[0x12],2);
    param_1[0xaa] = iVar8;
    if (iVar8 != 0) {
      puVar7[2] = iVar8;
    }
    puVar12 = *(undefined4 **)(pbVar13 + 0x7a0);
    *(undefined4 **)(pbVar13 + 0x7a0) = puVar7;
    *puVar7 = pbVar13 + 0x79c;
    puVar7[1] = puVar12;
    *puVar12 = puVar7;
  }
  piVar10 = DAT_00019f20;
  iVar8 = *(int *)(pbVar13 + 4);
  if ((*(int *)(iVar8 + 0x739c) != 1) || (*(int *)(pbVar13 + 0xbc0) == 0)) goto LAB_00019e64;
  uVar11 = *pbVar13 & 7;
  disableIRQinterrupts();
  if (*(int *)(pbVar13 + 0x510) == 2) {
    iVar9 = *(int *)(pbVar13 + 0x534);
    iVar17 = *(int *)(pbVar13 + 0x538);
    if ((((iVar9 == iVar17) && (*(int *)(*(int *)(pbVar13 + 0x578) + 0x14) != 4)) &&
        (*(int *)(*(int *)(iVar8 + 0x7ed4) + 0x194) == 0)) || ((iVar9 == 0 || (iVar17 == 0)))) {
      if (*(int *)(pbVar13 + 0x788) == 0) {
        uVar15 = 1;
      }
      else {
        uVar15 = *(uint *)(pbVar13 + 0x524);
      }
      if ((pbVar13[0xbfe] == 0) || (*(uint *)(pbVar13 + 0x51c) < 2)) {
        if (*(int *)(*(int *)(iVar8 + 0x34c) + 4) - 4U < 3) {
          uVar16 = uVar11 - 1;
          if ((uVar15 & 1) == 0) {
            uVar2 = get_reg_index_of_frm1_y_addr(uVar11);
            uVar5 = extraout_r2_00;
            if (uVar16 < 3) {
              uVar18 = CONCAT44(uVar2,(uint)*(byte *)(DAT_00019f08 + uVar16 + 0x447));
            }
            else {
              uVar18 = CONCAT44(uVar2,0x3d);
            }
          }
          else {
            uVar2 = get_reg_index_of_frm0_y_addr(uVar11);
            uVar5 = extraout_r2;
            if (uVar16 < 3) {
              uVar18 = CONCAT44(uVar2,(uint)*(byte *)(DAT_00019f08 + uVar16 + 0x444));
            }
            else {
              uVar18 = CONCAT44(uVar2,0x3c);
            }
          }
        }
        else if ((uVar15 & 1) == 0) {
          if (uVar11 < 4) {
            uVar6 = *(undefined1 *)(DAT_00019f08 + uVar11 + 0x1e);
          }
          else {
            uVar6 = 7;
          }
          uVar18 = get_dvp_reg_index_of_frm1_uv_addr(uVar11,uVar6);
          uVar5 = extraout_r2_02;
        }
        else {
          uVar5 = get_dvp_reg_index_of_frm0_y_addr(uVar11);
          uVar18 = get_dvp_reg_index_of_frm0_uv_addr(uVar11,uVar5);
          uVar5 = extraout_r2_01;
        }
        uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
        if (pbVar13 + 0x52c != *(byte **)(pbVar13 + 0x52c)) {
          if (uVar15 == 1) {
            iVar9 = *(int *)(pbVar13 + 0x52c) + -0x280;
            *(int *)(pbVar13 + 0x534) = iVar9;
            if (iVar9 != 0) {
              list_del(*(int *)(pbVar13 + 0x52c),uVar2);
              iVar9 = *(int *)(pbVar13 + 0x534);
              uVar5 = extraout_r1;
LAB_00019c40:
              if ((iVar9 != 0) &&
                 (rkcif_write_register(iVar8,uVar5,*(undefined4 *)(iVar9 + 0x288)),
                 *(int *)(*(int *)(pbVar13 + 0x574) + 0x18) != 1)) {
                rkcif_write_register(iVar8,(int)uVar18,*(undefined4 *)(iVar9 + 0x28c));
              }
            }
          }
          else if (uVar15 == 2) {
            if ((iVar17 == 0) && (*(int *)(*(int *)(pbVar13 + 0x578) + 0x14) == 4)) {
              *(undefined4 *)(pbVar13 + 0x538) = uVar5;
            }
            else {
              iVar9 = *(int *)(pbVar13 + 0x52c) + -0x280;
              *(int *)(pbVar13 + 0x538) = iVar9;
              if (iVar9 != 0) {
                list_del(*(int *)(pbVar13 + 0x52c),uVar2);
                iVar9 = *(int *)(pbVar13 + 0x538);
                uVar5 = extraout_r1_00;
                goto LAB_00019c40;
              }
            }
          }
        }
      }
      else if (iVar9 == iVar17) {
        if (*(int *)(pbVar13 + 0x524) == 1) {
          iVar8 = *(int *)(pbVar13 + 0x52c) + -0x280;
          *(int *)(pbVar13 + 0x534) = iVar8;
LAB_00019eb8:
          if (iVar8 != 0) {
            list_del();
          }
        }
        else if (*(int *)(pbVar13 + 0x524) == 2) {
          iVar8 = *(int *)(pbVar13 + 0x52c) + -0x280;
          *(int *)(pbVar13 + 0x538) = iVar8;
          goto LAB_00019eb8;
        }
        pbVar13[0xc01] = 1;
      }
      if (1 < *piVar10) {
        uVar5 = DAT_00019f10;
        if (*(int *)(pbVar13 + 0x788) == 0) {
          uVar5 = DAT_00019f0c;
        }
        printk(DAT_00019f18,*(int *)(pbVar13 + 4) + 0x1c,DAT_00019f14,*pbVar13 & 7,uVar15,uVar5,
               *(undefined4 *)(pbVar13 + 0xbc0));
      }
      if (*(int *)(pbVar13 + 0x788) == 0) {
        if (*(int *)(pbVar13 + 0x790) == 0) {
          pbVar13[0x78c] = 1;
          pbVar13[0x78d] = 0;
          pbVar13[0x78e] = 0;
          pbVar13[0x78f] = 0;
        }
        else {
          pbVar13[0x790] = 0;
          pbVar13[0x791] = 0;
          pbVar13[0x792] = 0;
          pbVar13[0x793] = 0;
          __wake_up(pbVar13 + 0x514,3,1);
        }
      }
      if (*(int *)(pbVar13 + 0xbc0) != 0) {
        *(int *)(pbVar13 + 0xbc0) = *(int *)(pbVar13 + 0xbc0) + -1;
      }
    }
  }
  if (*(int *)(pbVar13 + 0x78c) != 0) {
    rkcif_enable_dma_capture(pbVar13,1);
  }
LAB_00019e64:
  if (1 < *piVar10) {
    printk(DAT_00019f1c,*(int *)(pbVar13 + 4) + 0x1c,*pbVar13 & 7,param_1[1],param_1[0xa2]);
  }
  return;
}



/* ===== rkcif_rdbk_frame_end @ 00019f24 size=1248 ===== */

void rkcif_rdbk_frame_end(byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  
  iVar19 = *(int *)(param_1 + 4);
  iVar12 = *(int *)(iVar19 + 0x73a1);
  if (iVar12 == 5) {
    if ((*param_1 & 7) != 1) {
      return;
    }
    if (*(int *)(iVar19 + 0x8f8) != 2) {
      return;
    }
    iVar6 = *(int *)(iVar19 + 0x1500);
LAB_00019f56:
    if (iVar6 != 2) {
      return;
    }
  }
  else if (iVar12 == 6) {
    if ((*param_1 & 7) != 2) {
      return;
    }
    if (*(int *)(iVar19 + 0x8f8) != 2) {
      return;
    }
    if (*(int *)(iVar19 + 0x1500) != 2) {
      return;
    }
    iVar6 = *(int *)(iVar19 + 0x2108);
    goto LAB_00019f56;
  }
  uVar5 = DAT_0001a260;
  uVar7 = DAT_0001a264;
  if ((*(int *)(iVar19 + 0x364) != 0) && (*(int *)(iVar19 + 0x360) != 0)) {
    iVar6 = __aeabi_uidiv(*(int *)(iVar19 + 0x360) * 1000);
    uVar5 = iVar6 * DAT_0001a268;
    uVar7 = 0;
  }
  if (iVar12 == 6) {
    iVar12 = *(int *)(iVar19 + 0x742c);
    if (iVar12 == 0) {
      printk(DAT_0001a428,iVar19 + 0x1c);
      if (*(int *)(iVar19 + 0x7430) == 0) goto LAB_00019f96;
LAB_00019fa0:
      iVar12 = 0x7434;
LAB_00019fa4:
      if (*(int *)(iVar19 + iVar12) != 0) goto LAB_0001a032;
    }
    else {
      iVar6 = *(int *)(iVar19 + 0x7430);
      if (iVar6 == 0) {
LAB_00019f96:
        printk(DAT_0001a26c,iVar19 + 0x1c);
        goto LAB_00019fa0;
      }
      iVar2 = *(int *)(iVar19 + 0x7434);
      if (iVar2 != 0) {
        uVar13 = *(uint *)(iVar12 + 0x18);
        uVar15 = *(uint *)(iVar12 + 0x1c);
        uVar17 = *(uint *)(iVar2 + 0x18);
        uVar18 = *(uint *)(iVar2 + 0x1c);
        uVar14 = *(uint *)(iVar6 + 0x18);
        uVar16 = *(uint *)(iVar6 + 0x1c);
        bVar20 = uVar15 <= uVar16;
        if (uVar16 == uVar15) {
          bVar20 = uVar13 <= uVar14;
        }
        if (bVar20) {
          bVar20 = uVar16 <= uVar18;
          if (uVar18 == uVar16) {
            bVar20 = uVar14 <= uVar17;
          }
          if (bVar20) {
            uVar3 = (uVar16 - uVar15) - (uint)(uVar14 < uVar13);
            bVar20 = uVar3 <= uVar7;
            if (uVar7 == uVar3) {
              bVar20 = uVar14 - uVar13 <= uVar5;
            }
            if (bVar20) {
              uVar9 = (uVar18 - uVar16) - (uint)(uVar17 < uVar14);
              bVar20 = uVar9 <= uVar7;
              if (uVar7 == uVar9) {
                bVar20 = uVar17 - uVar14 <= uVar5;
              }
              if (!bVar20) goto LAB_0001a0a4;
LAB_0001a15c:
              *(undefined4 *)(*(int *)(iVar19 + 0x7430) + 0x170) =
                   *(undefined4 *)(*(int *)(iVar19 + 0x742c) + 0x170);
              *(undefined4 *)(*(int *)(iVar19 + 0x7434) + 0x170) =
                   *(undefined4 *)(*(int *)(iVar19 + 0x742c) + 0x170);
              if (((*(int *)(*(int *)(iVar19 + 0xb6c) + 0x60c) == 2) &&
                  (*(int *)(*(int *)(iVar19 + 0x1774) + 0x60c) == 2)) &&
                 (*(int *)(*(int *)(iVar19 + 0x237c) + 0x60c) == 2)) {
                iVar12 = iVar19;
                piVar11 = (int *)(iVar19 + 0x742c);
                do {
                  disableIRQinterrupts();
                  iVar2 = *(int *)(iVar12 + 0xb6c);
                  iVar6 = *piVar11;
                  piVar4 = *(int **)(iVar2 + 0x520);
                  *(int *)(iVar2 + 0x520) = iVar6 + 0x280;
                  *(int *)(iVar6 + 0x280) = iVar2 + 0x51c;
                  *(int **)(iVar6 + 0x284) = piVar4;
                  *piVar4 = iVar6 + 0x280;
                  iVar6 = work_busy(*(int *)(iVar12 + 0xb6c) + 0x5fc);
                  if (iVar6 == 0) {
                    schedule_work(*(int *)(iVar12 + 0xb6c) + 0x5fc);
                  }
                  iVar12 = iVar12 + 0xc08;
                  piVar11 = piVar11 + 1;
                } while (iVar12 != iVar19 + 0x2418);
                goto LAB_0001a206;
              }
              rkcif_vb_done_tasklet(iVar19 + 1000,*(undefined4 *)(iVar19 + 0x742c));
              rkcif_vb_done_tasklet(iVar19 + 0xff0,*(undefined4 *)(iVar19 + 0x7430));
              uVar1 = *(undefined4 *)(iVar19 + 0x7434);
              iVar12 = iVar19 + 0x1bf8;
              goto LAB_0001a254;
            }
LAB_0001a0a4:
            iVar12 = *(int *)(iVar19 + 0x350);
            if (((iVar12 == 0) || (iVar6 = *(int *)(*(int *)(iVar12 + 0x68) + 0xc), iVar6 == 0)) ||
               (pcVar8 = *(code **)(iVar6 + 0x30), pcVar8 == (code *)0x0)) {
LAB_0001a156:
              uVar1 = 0xffffffff;
            }
            else {
              if ((*(int *)(DAT_0001a274 + 0xc) == 0) ||
                 (pcVar10 = *(code **)(*(int *)(DAT_0001a274 + 0xc) + 0x30), pcVar10 == (code *)0x0)
                 ) {
                iVar12 = (*pcVar8)(iVar12,iVar19 + 0x35c);
              }
              else {
                iVar12 = (*pcVar10)();
              }
              if (((iVar12 != 0) || (iVar12 = *(int *)(iVar19 + 0x364), iVar12 == 0)) ||
                 (iVar6 = *(int *)(iVar19 + 0x360), iVar6 == 0)) goto LAB_0001a156;
              iVar2 = __aeabi_uidiv(iVar6 * 1000,iVar12);
              uVar5 = iVar2 * DAT_0001a268;
              uVar1 = __aeabi_uidiv(iVar12,iVar6);
              uVar7 = 0;
            }
            bVar20 = uVar3 <= uVar7;
            if (uVar7 == uVar3) {
              bVar20 = uVar14 - uVar13 <= uVar5;
            }
            if (bVar20) {
              uVar3 = (uVar18 - uVar16) - (uint)(uVar17 < uVar14);
              bVar20 = uVar3 <= uVar7;
              if (uVar7 == uVar3) {
                bVar20 = uVar17 - uVar14 <= uVar5;
              }
              if (bVar20) goto LAB_0001a15c;
            }
            printk(DAT_0001a278,iVar19 + 0x1c,uVar17,uVar18,uVar14,uVar16,uVar13,uVar15,uVar1);
            goto LAB_0001a032;
          }
        }
        printk(DAT_0001a270,iVar19 + 0x1c,uVar17,uVar18,uVar14,uVar16,uVar13,uVar15);
        goto LAB_0001a032;
      }
    }
LAB_0001a2ae:
    printk(DAT_0001a42c,iVar19 + 0x1c);
  }
  else {
    if (iVar12 != 5) goto LAB_0001a206;
    iVar12 = *(int *)(iVar19 + 0x742c);
    if (iVar12 == 0) {
      printk(DAT_0001a428,iVar19 + 0x1c);
      iVar12 = 0x7430;
      goto LAB_00019fa4;
    }
    iVar6 = *(int *)(iVar19 + 0x7430);
    if (iVar6 == 0) goto LAB_0001a2ae;
    uVar15 = *(uint *)(iVar12 + 0x18);
    uVar16 = *(uint *)(iVar12 + 0x1c);
    uVar13 = *(uint *)(iVar6 + 0x18);
    uVar14 = *(uint *)(iVar6 + 0x1c);
    bVar20 = uVar16 <= uVar14;
    if (uVar14 == uVar16) {
      bVar20 = uVar15 <= uVar13;
    }
    if (bVar20) {
      uVar17 = uVar14 - uVar16;
      uVar18 = (uint)(uVar13 < uVar15);
      bVar20 = uVar17 - uVar18 <= uVar7;
      if (uVar7 == uVar17 - uVar18) {
        bVar20 = uVar13 - uVar15 <= uVar5;
      }
      if (bVar20) {
LAB_0001a370:
        *(undefined4 *)(*(int *)(iVar19 + 0x7430) + 0x170) =
             *(undefined4 *)(*(int *)(iVar19 + 0x742c) + 0x170);
        if ((*(int *)(*(int *)(iVar19 + 0xb6c) + 0x60c) == 2) &&
           (*(int *)(*(int *)(iVar19 + 0x1774) + 0x60c) == 2)) {
          iVar12 = iVar19;
          piVar11 = (int *)(iVar19 + 0x742c);
          do {
            disableIRQinterrupts();
            iVar2 = *(int *)(iVar12 + 0xb6c);
            iVar6 = *piVar11;
            piVar4 = *(int **)(iVar2 + 0x520);
            *(int *)(iVar2 + 0x520) = iVar6 + 0x280;
            *(int *)(iVar6 + 0x280) = iVar2 + 0x51c;
            *(int **)(iVar6 + 0x284) = piVar4;
            *piVar4 = iVar6 + 0x280;
            iVar6 = work_busy(*(int *)(iVar12 + 0xb6c) + 0x5fc);
            if (iVar6 == 0) {
              schedule_work(*(int *)(iVar12 + 0xb6c) + 0x5fc);
            }
            iVar12 = iVar12 + 0xc08;
            piVar11 = piVar11 + 1;
          } while (iVar19 + 0x1810 != iVar12);
          goto LAB_0001a206;
        }
        rkcif_vb_done_tasklet(iVar19 + 1000,*(undefined4 *)(iVar19 + 0x742c));
        uVar1 = *(undefined4 *)(iVar19 + 0x7430);
        iVar12 = iVar19 + 0xff0;
LAB_0001a254:
        rkcif_vb_done_tasklet(iVar12,uVar1);
        goto LAB_0001a206;
      }
      iVar12 = *(int *)(iVar19 + 0x350);
      if (((iVar12 == 0) || (iVar6 = *(int *)(*(int *)(iVar12 + 0x68) + 0xc), iVar6 == 0)) ||
         (pcVar8 = *(code **)(iVar6 + 0x30), pcVar8 == (code *)0x0)) {
LAB_0001a2f4:
        uVar1 = 0xffffffff;
      }
      else {
        if ((*(int *)(DAT_0001a438 + 0xc) == 0) ||
           (pcVar10 = *(code **)(*(int *)(DAT_0001a438 + 0xc) + 0x30), pcVar10 == (code *)0x0)) {
          iVar12 = (*pcVar8)(iVar12,iVar19 + 0x35c);
        }
        else {
          iVar12 = (*pcVar10)();
        }
        if (((iVar12 != 0) || (iVar12 = *(int *)(iVar19 + 0x364), iVar12 == 0)) ||
           (iVar6 = *(int *)(iVar19 + 0x360), iVar6 == 0)) goto LAB_0001a2f4;
        iVar2 = __aeabi_uidiv(iVar6 * 1000,iVar12);
        bVar20 = uVar17 == uVar18;
        if (uVar17 == uVar18) {
          bVar20 = uVar13 - uVar15 <= (uint)(DAT_0001a43c * iVar2);
        }
        if (bVar20) goto LAB_0001a370;
        uVar1 = __aeabi_uidiv(iVar12,iVar6);
      }
      printk(DAT_0001a434,iVar19 + 0x1c,uVar13,uVar14,uVar15,uVar16,uVar1);
    }
    else {
      printk(DAT_0001a430,iVar19 + 0x1c,uVar13,uVar14,uVar15,uVar16);
    }
  }
LAB_0001a032:
  if (*(int *)(iVar19 + 0x742c) != 0) {
    *(undefined4 *)(*(int *)(iVar19 + 0x742c) + 0x40) = 4;
    rkcif_buf_queue(*(undefined4 *)(iVar19 + 0x742c));
  }
  if (*(int *)(iVar19 + 0x7430) != 0) {
    *(undefined4 *)(*(int *)(iVar19 + 0x7430) + 0x40) = 4;
    rkcif_buf_queue(*(undefined4 *)(iVar19 + 0x7430));
  }
  if (*(int *)(iVar19 + 0x7434) != 0) {
    *(undefined4 *)(*(int *)(iVar19 + 0x7434) + 0x40) = 4;
    rkcif_buf_queue(*(undefined4 *)(iVar19 + 0x7434));
  }
LAB_0001a206:
  *(undefined4 *)(iVar19 + 0x742c) = 0;
  *(undefined4 *)(iVar19 + 0x7430) = 0;
  *(undefined4 *)(iVar19 + 0x7434) = 0;
  return;
}



/* ===== rkcif_buf_done_prepare @ 0001a440 size=540 ===== */

void rkcif_buf_done_prepare(byte *param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
  byte in_Q;
  
  iVar7 = *(int *)(param_1 + 4);
  iVar2 = param_2;
  iVar4 = param_3;
  if (param_2 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x74c);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x748);
    *(undefined4 *)(param_2 + 0x1c) = uVar5;
    iVar3 = *(int *)(param_1 + 0x51c);
    iVar4 = iVar3 + -1;
    *(int *)(param_2 + 0x170) = iVar4;
    if (param_1[0xbfe] != 0) {
      iVar2 = (uint)(byte)((iVar4 < 0) << 4 | (iVar4 == 0) << 3 | (iVar3 != 0) << 2 |
                           SBORROW4(iVar3,1) << 1 | in_Q) << 0x1b;
      disableIRQinterrupts();
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
      if (param_4 == 0) {
        pbVar1 = param_1 + 0x678;
      }
      else {
        pbVar1 = param_1 + 0x670;
      }
      *(undefined4 *)pbVar1 = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(pbVar1 + 4) = uVar5;
      iVar4 = *(int *)(param_2 + 0x18);
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
      *(int *)(param_1 + 0x758) = iVar4;
      *(undefined4 *)(param_1 + 0x75c) = uVar5;
    }
    if (*(int *)(*(int *)(param_1 + 0x578) + 0x14) == 4) {
      *(uint *)(param_2 + 0x170) = *(uint *)(param_2 + 0x170) >> 1;
    }
  }
  piVar9 = (int *)(iVar7 + 0x73a1);
  if ((*piVar9 == 0) || (*piVar9 == 7)) {
    if (((*(int *)(*(int *)(param_1 + 0x578) + 0x14) != 4) || (*(int *)(param_1 + 0x520) == 2)) &&
       (param_2 != 0)) {
      if (*(int *)(param_1 + 0x784) == 0) {
        rkcif_vb_done_tasklet(param_1,param_2);
        return;
      }
      rkcif_buf_done_with_tools();
      return;
    }
  }
  else if (*(char *)(iVar7 + 0x8030) == '\0') {
    if (param_2 != 0) {
      *(undefined4 *)(param_2 + 0x40) = 4;
      rkcif_buf_queue(param_2,iVar2,iVar4,4,param_1,param_2,param_3,param_4);
    }
    uVar5 = DAT_0001a684;
    if (*(int *)(iVar7 + 0x1500) == 2) {
      uVar5 = DAT_0001a680;
    }
    uVar8 = DAT_0001a684;
    if (*(int *)(iVar7 + 0x2108) == 2) {
      uVar8 = DAT_0001a680;
    }
    uVar10 = DAT_0001a684;
    if (*(int *)(iVar7 + 0x2d10) == 2) {
      uVar10 = DAT_0001a680;
    }
    uVar6 = DAT_0001a684;
    if (*(int *)(iVar7 + 0x8f8) == 2) {
      uVar6 = DAT_0001a680;
    }
    printk(DAT_0001a688,iVar7 + 0x1c,*param_1 & 7,uVar6,uVar5,uVar8,uVar10);
  }
  else {
    disableIRQinterrupts();
    if (param_3 == 0) {
      if (*(int *)(iVar7 + 0x742c) != 0) {
        uVar5 = DAT_0001a660;
        if (*piVar9 != 5) {
          uVar5 = DAT_0001a65c;
        }
        printk(DAT_0001a664,iVar7 + 0x1c,uVar5,*(undefined4 *)(param_1 + 0x51c),
               *(undefined4 *)(*(int *)(iVar7 + 0x742c) + 0x40));
        *(undefined4 *)(*(int *)(iVar7 + 0x742c) + 0x40) = 4;
        rkcif_buf_queue(*(undefined4 *)(iVar7 + 0x742c));
        *(undefined4 *)(iVar7 + 0x742c) = 0;
      }
      if (param_2 != 0) {
        *(int *)(iVar7 + 0x742c) = param_2;
      }
    }
    else {
      if (param_3 == 1) {
        if (*(int *)(iVar7 + 0x7430) != 0) {
          uVar5 = DAT_0001a66c;
          if (*piVar9 != 5) {
            uVar5 = DAT_0001a668;
          }
          printk(DAT_0001a670,iVar7 + 0x1c,uVar5,*(undefined4 *)(param_1 + 0x51c),
                 *(undefined4 *)(*(int *)(iVar7 + 0x7430) + 0x40));
          *(undefined4 *)(*(int *)(iVar7 + 0x7430) + 0x40) = 4;
          rkcif_buf_queue(*(undefined4 *)(iVar7 + 0x7430));
          *(undefined4 *)(iVar7 + 0x7430) = 0;
        }
        if (param_2 != 0) {
          *(int *)(iVar7 + 0x7430) = param_2;
        }
        bVar11 = *piVar9 == 5;
      }
      else {
        if (param_3 != 2) {
          return;
        }
        if (*(int *)(iVar7 + 0x7434) != 0) {
          uVar5 = DAT_0001a678;
          if (*piVar9 != 5) {
            uVar5 = DAT_0001a674;
          }
          printk(DAT_0001a67c,iVar7 + 0x1c,uVar5,*(undefined4 *)(param_1 + 0x51c),
                 *(undefined4 *)(*(int *)(iVar7 + 0x7434) + 0x40));
          *(undefined4 *)(*(int *)(iVar7 + 0x7434) + 0x40) = 4;
          rkcif_buf_queue(*(undefined4 *)(iVar7 + 0x7434));
          *(undefined4 *)(iVar7 + 0x7434) = 0;
        }
        if (param_2 != 0) {
          *(int *)(iVar7 + 0x7434) = param_2;
        }
        bVar11 = *piVar9 == 6;
      }
      if (bVar11) {
        rkcif_rdbk_frame_end(param_1);
      }
    }
  }
  return;
}



/* ===== rkcif_line_wake_up @ 0001a68c size=306 ===== */

void rkcif_line_wake_up(int param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 3000) & 1;
  uVar1 = *(undefined4 *)(param_1 + 0x538);
  if (uVar4 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x534);
  }
  if (*(char *)(param_1 + 0xbf8) != '\0') {
    *(undefined1 *)(param_1 + 0xc00) = 1;
    return;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x7ed4);
  disableIRQinterrupts();
  iVar3 = 0;
  if (*(int *)(param_1 + 0x52c) == param_1 + 0x52c) {
    *(undefined1 *)(param_1 + 0xc01) = 0;
    if (*(int *)(iVar2 + 0x194) != 0) {
      if ((*(uint *)(param_1 + 3000) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x538) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x534) = 0;
      }
      goto LAB_0001a748;
    }
    iVar2 = *(int *)(param_1 + 0xbc0);
    if (*(int *)(param_1 + 0x534) != *(int *)(param_1 + 0x538)) {
      if ((*(uint *)(param_1 + 3000) & 1) == 0) {
        *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x534);
        *(undefined4 *)(param_1 + 0x524) = 2;
      }
      else {
        *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x538);
        *(undefined4 *)(param_1 + 0x524) = 1;
      }
      *(undefined1 *)(param_1 + 0xc01) = 1;
      if (iVar2 < 2) {
        *(int *)(param_1 + 0xbc0) = iVar2 + 1;
      }
      iVar3 = 0;
      goto LAB_0001a748;
    }
    if (*(int *)(*(int *)(param_1 + 4) + 0x736c) < 9) {
      iVar3 = -0x16;
    }
    else {
      iVar3 = 0;
    }
    if (1 < iVar2) goto LAB_0001a748;
    iVar2 = iVar2 + 1;
  }
  else {
    if (*(int *)(iVar2 + 0x194) == 0) {
      if (*(int *)(param_1 + 0x534) == *(int *)(param_1 + 0x538)) {
        iVar3 = -0x16;
      }
      else {
        iVar3 = 0;
      }
    }
    iVar2 = *(int *)(param_1 + 0x52c) + -0x280;
    if ((*(uint *)(param_1 + 3000) & 1) == 0) {
      *(int *)(param_1 + 0x538) = iVar2;
    }
    else {
      *(int *)(param_1 + 0x534) = iVar2;
    }
    if (iVar2 != 0) {
      list_del(*(int *)(param_1 + 0x52c),uVar1);
      uVar1 = extraout_r1;
    }
    *(undefined1 *)(param_1 + 0xc01) = 1;
    if (*(int *)(param_1 + 0xbc0) == 0) goto LAB_0001a748;
    iVar2 = *(int *)(param_1 + 0xbc0) + -1;
  }
  *(int *)(param_1 + 0xbc0) = iVar2;
LAB_0001a748:
  if (iVar3 != 0) {
    return;
  }
  rkcif_buf_done_prepare(param_1,uVar1,param_2,uVar4);
  return;
}



/* ===== rkcif_update_stream @ 0001a7be size=1812 ===== */

void rkcif_update_stream(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 extraout_r1;
  int iVar4;
  int iVar5;
  uint extraout_r2;
  int *piVar6;
  uint extraout_r2_00;
  int iVar7;
  undefined4 extraout_r2_01;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int unaff_r7;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined4 local_38;
  
  if (*(int *)(param_2 + 0x520) == 3) {
    printk(DAT_0001ab08,param_1 + 0x1c,*param_2 & 7,*(undefined4 *)(param_2 + 0x51c));
    return;
  }
  if (param_2[0xbfe] == 0) {
    disableIRQinterrupts();
    if ((int)(*(uint *)(param_2 + 0x520) << 0x1f) < 0) {
      local_38 = *(undefined4 *)(param_2 + 0x534);
      uVar18 = ktime_get();
      pbVar8 = param_2 + 0x670;
    }
    else {
      if ((*(uint *)(param_2 + 0x520) & 2) == 0) {
        local_38 = 0;
        goto LAB_0001a81c;
      }
      local_38 = *(undefined4 *)(param_2 + 0x538);
      uVar18 = ktime_get();
      pbVar8 = param_2 + 0x678;
    }
    *(undefined8 *)pbVar8 = uVar18;
  }
  else {
    local_38 = 0;
  }
LAB_0001a81c:
  rkcif_deal_readout_time(param_2);
  iVar13 = *(int *)(param_2 + 4);
  if (param_2[0xbfe] != 0) {
    iVar5 = *(int *)(iVar13 + 0x34c);
    iVar10 = *(int *)(iVar13 + 0x7ed4);
    uVar16 = *(uint *)(param_2 + 0x520) & 1;
    uVar9 = *param_2 & 7;
    if (*(int *)(iVar5 + 4) - 4U < 3) {
      uVar15 = uVar9 - 1;
      if (uVar16 == 0) {
        uVar2 = get_reg_index_of_frm1_y_addr(uVar9);
        if (uVar15 < 3) {
          uVar18 = CONCAT44(uVar2,(uint)*(byte *)(uVar15 + DAT_0001aefc + 0x447));
        }
        else {
          uVar18 = CONCAT44(uVar2,0x3d);
        }
      }
      else {
        uVar2 = get_reg_index_of_frm0_y_addr();
        if (uVar15 < 3) {
          uVar18 = CONCAT44(uVar2,(uint)*(byte *)(uVar15 + DAT_0001aefc + 0x444));
        }
        else {
          uVar18 = CONCAT44(uVar2,0x3c);
        }
      }
    }
    else if (uVar16 == 0) {
      if (uVar9 < 4) {
        uVar3 = *(undefined1 *)(DAT_0001aefc + uVar9 + 0x1e);
      }
      else {
        uVar3 = 7;
      }
      uVar18 = get_dvp_reg_index_of_frm1_uv_addr(uVar9,uVar3);
    }
    else {
      uVar2 = get_dvp_reg_index_of_frm0_y_addr(uVar9);
      uVar18 = get_dvp_reg_index_of_frm0_uv_addr(extraout_r2_01,uVar2);
    }
    uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
    disableIRQinterrupts();
    iVar7 = 0;
    if (param_2[0xc01] != 0) {
      if (*(int *)(param_2 + 0x520) == 1) {
        iVar7 = *(int *)(param_2 + 0x534);
      }
      else if (*(int *)(param_2 + 0x520) == 2) {
        iVar7 = *(int *)(param_2 + 0x538);
      }
      else {
        iVar7 = 0;
      }
    }
    if (iVar7 != 0) {
      rkcif_write_register(iVar13,uVar2,*(undefined4 *)(iVar7 + 0x288));
      if (*(int *)(*(int *)(param_2 + 0x574) + 0x18) != 1) {
        rkcif_write_register(iVar13,(int)uVar18,*(undefined4 *)(iVar7 + 0x28c));
      }
      goto LAB_0001adda;
    }
    if (*(int *)(iVar10 + 0x194) == 0) {
      if (8 < *(int *)(iVar13 + 0x736c)) goto LAB_0001aea8;
      iVar10 = -0x16;
    }
    else {
      rkcif_write_register(iVar13,uVar2,*(undefined4 *)(iVar10 + 0x188));
      if (*(int *)(*(int *)(param_2 + 0x574) + 0x18) == 1) {
LAB_0001aea8:
        iVar10 = 0;
      }
      else {
        rkcif_write_register(iVar13,(int)uVar18,*(undefined4 *)(iVar10 + 0x188));
        iVar10 = 0;
      }
    }
    uVar2 = DAT_0001af04;
    if (*(int *)(iVar5 + 4) - 4U < 3) {
      uVar2 = DAT_0001af00;
    }
    printk(DAT_0001af08,iVar13 + 0x1c,uVar2,*param_2 & 7);
    goto joined_r0x0001aecc;
  }
  iVar5 = *(int *)(iVar13 + 0x34c);
  uVar9 = *(uint *)(param_2 + 0x520) & 1;
  if (*(int *)(iVar5 + 4) - 4U < 3) {
    if (uVar9 == 0) {
      uVar9 = get_reg_index_of_frm1_y_addr(param_3,extraout_r1,param_3 - 1);
      if (extraout_r2_00 < 3) {
        uVar16 = (uint)*(byte *)(extraout_r2_00 + DAT_0001ab0c + 0x447);
      }
      else {
        uVar16 = 0x3d;
      }
    }
    else {
      uVar9 = get_reg_index_of_frm0_y_addr();
      if (extraout_r2 < 3) {
        uVar16 = (uint)*(byte *)(extraout_r2 + DAT_0001ab0c + 0x444);
      }
      else {
        uVar16 = 0x3c;
      }
    }
  }
  else if (uVar9 == 0) {
    if (param_3 < 4) {
      uVar9 = (uint)*(byte *)(DAT_0001ab0c + param_3 + 0x1e);
    }
    else {
      uVar9 = 7;
    }
    uVar16 = get_dvp_reg_index_of_frm1_uv_addr(param_3);
  }
  else {
    uVar9 = get_dvp_reg_index_of_frm0_y_addr(param_3);
    uVar16 = get_dvp_reg_index_of_frm0_uv_addr(param_3);
  }
  if (((*(int *)(iVar13 + 0x73a1) != 0) && ((*param_2 & 7) != 0)) &&
     (*(int *)(iVar13 + 0x742c) == 0)) {
    return;
  }
  if (*(int *)(param_2 + 0x790) == 0) {
    iVar17 = *(int *)(iVar13 + 0x7ed4);
    disableIRQinterrupts();
    iVar7 = *(int *)(param_2 + 0x520);
    if (*(byte **)(param_2 + 0x52c) == param_2 + 0x52c) {
      if ((*(uint *)(param_2 + 0x788) & 2) == 0) {
        iVar10 = 0;
        if (*(int *)(iVar17 + 0x194) == 0) {
          iVar12 = *(int *)(param_2 + 0x534);
          iVar14 = 0;
          if (((iVar12 != 0) && (iVar4 = *(int *)(param_2 + 0x538), iVar4 != 0)) &&
             (iVar12 != iVar4)) {
            if (iVar7 == 1) {
              *(int *)(param_2 + 0x534) = iVar4;
              iVar14 = iVar4;
            }
            else if (iVar7 == 2) {
              *(int *)(param_2 + 0x538) = iVar12;
              iVar14 = iVar12;
            }
          }
          if (*(int *)(param_2 + 0xbc0) < 2) {
            *(int *)(param_2 + 0xbc0) = *(int *)(param_2 + 0xbc0) + 1;
          }
          goto LAB_0001aa1c;
        }
        if (iVar7 == 1) {
          param_2[0x534] = 0;
          param_2[0x535] = 0;
          param_2[0x536] = 0;
          param_2[0x537] = 0;
        }
        else if (iVar7 == 2) {
          if (*(int *)(*(int *)(param_2 + 0x578) + 0x14) == 4) {
            iVar14 = *(int *)(param_2 + 0x534);
            goto LAB_0001ab02;
          }
          param_2[0x538] = 0;
          param_2[0x539] = 0;
          param_2[0x53a] = 0;
          param_2[0x53b] = 0;
        }
      }
      iVar14 = 0;
      iVar10 = iVar14;
    }
    else {
      iVar10 = 0;
      if (((*(int *)(iVar17 + 0x194) == 0) &&
          (*(int *)(param_2 + 0x534) == *(int *)(param_2 + 0x538))) &&
         (*(int *)(*(int *)(param_2 + 0x578) + 0x14) != 4)) {
        iVar10 = -0x16;
      }
      if (iVar7 == 1) {
        iVar7 = *(int *)(param_2 + 0x534);
        *(int *)(param_2 + 0x534) = *(int *)(param_2 + 0x52c) + -0x280;
        if (iVar7 == 0) {
          iVar10 = -0x16;
        }
        iVar14 = 0;
        if (*(int *)(param_2 + 0x52c) + -0x280 != 0) {
          list_del();
          iVar14 = *(int *)(param_2 + 0x534);
          if (2 < *DAT_0001ab10) {
            bVar1 = *param_2;
            uVar11 = *(undefined4 *)(iVar14 + 0x288);
            uVar2 = DAT_0001ab14;
LAB_0001aa18:
            printk(uVar2,iVar13 + 0x1c,bVar1 & 7,uVar11);
          }
        }
      }
      else if (iVar7 == 2) {
        iVar7 = *(int *)(param_2 + 0x538);
        if (iVar7 != 0) {
          unaff_r7 = iVar10;
        }
        iVar10 = unaff_r7;
        if (iVar7 == 0) {
          iVar10 = -0x16;
        }
        if (*(int *)(*(int *)(param_2 + 0x578) + 0x14) == 4) {
          iVar14 = *(int *)(param_2 + 0x534);
          if (iVar7 == iVar14) goto LAB_0001abbe;
LAB_0001ab02:
          *(int *)(param_2 + 0x538) = iVar14;
        }
        else {
          *(int *)(param_2 + 0x538) = *(int *)(param_2 + 0x52c) + -0x280;
          iVar14 = 0;
          if (*(int *)(param_2 + 0x52c) + -0x280 != 0) {
            list_del();
            iVar14 = *(int *)(param_2 + 0x538);
            if (2 < *DAT_0001ae20) {
              bVar1 = *param_2;
              uVar11 = *(undefined4 *)(iVar14 + 0x288);
              uVar2 = DAT_0001ae24;
              goto LAB_0001aa18;
            }
          }
        }
      }
      else {
LAB_0001abbe:
        iVar14 = 0;
      }
    }
LAB_0001aa1c:
    *(int *)(param_2 + 0x524) = *(int *)(param_2 + 0x520);
    if (iVar14 == 0) {
      if (-1 < *(int *)(param_2 + 0x788) << 0x1e) {
        if (*(int *)(iVar17 + 0x194) == 0) {
          if (2 < *DAT_0001ae20) {
            uVar2 = DAT_0001ae2c;
            if (*(int *)(iVar5 + 4) - 4U < 3) {
              uVar2 = DAT_0001ae28;
            }
            printk(DAT_0001ae34,iVar13 + 0x1c,*(undefined4 *)(param_2 + 0xbc0),uVar2,*param_2 & 7);
          }
          iVar10 = -0x16;
        }
        else {
          rkcif_write_register(iVar13,uVar9,*(undefined4 *)(iVar17 + 0x188));
          if (*(int *)(*(int *)(param_2 + 0x574) + 0x18) != 1) {
            rkcif_write_register(iVar13,uVar16,*(undefined4 *)(iVar17 + 0x188));
          }
          uVar2 = DAT_0001ae2c;
          if (*(int *)(iVar5 + 4) - 4U < 3) {
            uVar2 = DAT_0001ae28;
          }
          printk(DAT_0001ae30,iVar13 + 0x1c,uVar2,*param_2 & 7);
        }
        goto joined_r0x0001aecc;
      }
      rkcif_write_register(iVar13,uVar9,*(undefined4 *)(*(int *)(param_2 + 0x53c) + 0x54));
      if (*(int *)(param_2 + 0x520) == 1) {
        iVar5 = *(int *)(param_2 + 0x538);
LAB_0001ac1a:
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x2a8) == 0)) goto LAB_0001ac78;
        for (pbVar8 = *(byte **)(param_2 + 0x79c);
            (pbVar8 != param_2 + 0x79c && (*(int *)(iVar5 + 0x2a8) != *(int *)(pbVar8 + 8)));
            pbVar8 = *(byte **)pbVar8) {
        }
      }
      else {
        if (*(int *)(param_2 + 0x520) == 2) {
          iVar5 = *(int *)(param_2 + 0x534);
          goto LAB_0001ac1a;
        }
LAB_0001ac78:
        pbVar8 = (byte *)(*(int *)(param_2 + 0x53c) + 0x18);
      }
      rkcif_s_rx_buffer(iVar13,pbVar8);
      *(int *)(param_2 + 0xbb0) = *(int *)(param_2 + 0xbb0) + -1;
      if ((*(int *)(param_2 + 0x534) == 0) || (*(int *)(param_2 + 0x520) != 1)) {
        if ((*(int *)(param_2 + 0x538) == 0) || (*(int *)(param_2 + 0x520) != 2))
        goto joined_r0x0001aecc;
        param_2[0x538] = 0;
        param_2[0x539] = 0;
        param_2[0x53a] = 0;
        param_2[0x53b] = 0;
      }
      else {
        param_2[0x534] = 0;
        param_2[0x535] = 0;
        param_2[0x536] = 0;
        param_2[0x537] = 0;
      }
      if (*(int *)(param_2 + 0x798) != 0) {
        *(int *)(param_2 + 0x798) = *(int *)(param_2 + 0x798) + -1;
      }
    }
    else {
      if ((*(int *)(*(int *)(param_2 + 0x578) + 0x14) == 4) && (*(int *)(param_2 + 0x520) == 2)) {
        iVar5 = param_3 * 0x68 + iVar13;
        rkcif_write_register
                  (iVar13,uVar9,*(int *)(iVar14 + 0x288) + (*(uint *)(iVar5 + 0x71dc) >> 1));
        if (*(int *)(*(int *)(param_2 + 0x574) + 0x18) != 1) {
          iVar5 = *(int *)(iVar14 + 0x28c) + (*(uint *)(iVar5 + 0x71dc) >> 1);
LAB_0001aa76:
          rkcif_write_register(iVar13,uVar16,iVar5);
        }
      }
      else {
        rkcif_write_register(iVar13,uVar9,*(int *)(iVar14 + 0x288));
        if (*(int *)(*(int *)(param_2 + 0x574) + 0x18) != 1) {
          iVar5 = *(int *)(iVar14 + 0x28c);
          goto LAB_0001aa76;
        }
      }
      if (*(int *)(param_2 + 0x788) << 0x1e < 0) {
        if (*(int *)(param_2 + 0x798) < 2) {
          *(int *)(param_2 + 0x798) = *(int *)(param_2 + 0x798) + 1;
        }
        if (*(int *)(param_2 + 0x520) == 1) {
          iVar5 = *(int *)(param_2 + 0x538);
LAB_0001aaa2:
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0x2a8) != 0)) {
            for (pbVar8 = *(byte **)(param_2 + 0x79c);
                (pbVar8 != param_2 + 0x79c && (*(int *)(iVar5 + 0x2a8) != *(int *)(pbVar8 + 8)));
                pbVar8 = *(byte **)pbVar8) {
            }
            if (pbVar8 != (byte *)0x0) {
              rkcif_s_rx_buffer(iVar13);
            }
          }
        }
        else if (*(int *)(param_2 + 0x520) == 2) {
          iVar5 = *(int *)(param_2 + 0x534);
          goto LAB_0001aaa2;
        }
        *(int *)(param_2 + 0xbb0) = *(int *)(param_2 + 0xbb0) + -1;
      }
    }
joined_r0x0001aecc:
    if (iVar10 != 0) {
      return;
    }
LAB_0001adda:
    if ((param_2[0xbfe] == 0) && (*(int *)(param_2 + 0x788) << 0x1f < 0)) {
      rkcif_buf_done_prepare(param_2,local_38,param_3);
    }
    if ((1 < *(int *)(param_1 + 0x736c) - 6U) && (*(int *)(param_1 + 0x736c) != 8)) {
      return;
    }
    rkcif_luma_isr(param_1 + 0x7448,param_3,*(int *)(param_1 + 0x904) + -1);
    return;
  }
  if (-1 < *(int *)(param_2 + 0x788) << 0x1e) {
    return;
  }
  if (*(int *)(param_2 + 0x798) == 0) {
    return;
  }
  disableIRQinterrupts();
  rkcif_write_register(iVar13,uVar9,*(undefined4 *)(*(int *)(param_2 + 0x53c) + 0x54));
  if (*(int *)(param_2 + 0x520) == 1) {
    iVar10 = *(int *)(param_2 + 0x538);
LAB_0001a8ba:
    if ((iVar10 != 0) && (*(int *)(iVar10 + 0x2a8) != 0)) {
      for (pbVar8 = *(byte **)(param_2 + 0x79c);
          (pbVar8 != param_2 + 0x79c && (*(int *)(iVar10 + 0x2a8) != *(int *)(pbVar8 + 8)));
          pbVar8 = *(byte **)pbVar8) {
      }
      goto LAB_0001a8d8;
    }
  }
  else if (*(int *)(param_2 + 0x520) == 2) {
    iVar10 = *(int *)(param_2 + 0x534);
    goto LAB_0001a8ba;
  }
  pbVar8 = (byte *)(*(int *)(param_2 + 0x53c) + 0x18);
LAB_0001a8d8:
  if (pbVar8 != (byte *)0x0) {
    rkcif_s_rx_buffer(iVar13);
  }
  *(int *)(param_2 + 0xbb0) = *(int *)(param_2 + 0xbb0) + -1;
  if (*(int *)(param_2 + 0x520) == 1) {
    iVar13 = *(int *)(param_2 + 0x534);
    if (iVar13 != 0) {
      piVar6 = *(int **)(param_2 + 0x530);
      *(int *)(param_2 + 0x530) = iVar13 + 0x280;
      *(byte **)(iVar13 + 0x280) = param_2 + 0x52c;
      *(int **)(iVar13 + 0x284) = piVar6;
      *piVar6 = iVar13 + 0x280;
      param_2[0x534] = 0;
      param_2[0x535] = 0;
      param_2[0x536] = 0;
      param_2[0x537] = 0;
    }
  }
  else if ((*(int *)(param_2 + 0x520) == 2) && (iVar13 = *(int *)(param_2 + 0x538), iVar13 != 0)) {
    piVar6 = *(int **)(param_2 + 0x530);
    *(int *)(param_2 + 0x530) = iVar13 + 0x280;
    *(byte **)(iVar13 + 0x280) = param_2 + 0x52c;
    *(int **)(iVar13 + 0x284) = piVar6;
    *piVar6 = iVar13 + 0x280;
    param_2[0x538] = 0;
    param_2[0x539] = 0;
    param_2[0x53a] = 0;
    param_2[0x53b] = 0;
  }
  *(int *)(param_2 + 0x798) = *(int *)(param_2 + 0x798) + -1;
  return;
}



/* ===== rkcif_irq_handle_toisp @ 0001af0c size=600 ===== */

void rkcif_irq_handle_toisp(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  
  iVar13 = *(int *)(param_1 + 0x7ee0);
  if ((iVar13 == 0) || (*(int *)(iVar13 + 0x1d8) != 0)) {
    return;
  }
  bVar1 = false;
  iVar15 = 0;
  do {
    iVar3 = *(int *)(iVar13 + 0x1f8);
    if (iVar3 == 1) {
      if (iVar15 == 0) goto LAB_0001af3e;
LAB_0001b0f2:
      if (bVar1) goto LAB_0001af3e;
    }
    else {
      if (((iVar3 != 2) && (iVar3 != 3)) || (iVar15 == 0)) goto LAB_0001b0f2;
LAB_0001af3e:
      iVar3 = iVar15 * 3;
      uVar4 = 1 << iVar3 + 0x14;
      uVar16 = 1 << iVar3 + 0xf;
      uVar5 = 1 << iVar3 + 0x15;
      iVar17 = 3;
      uVar6 = 1 << iVar3 + 0x16;
      uVar7 = 1 << iVar3 + 0xe;
      uVar14 = 1 << iVar3 + 0x10;
      uVar12 = param_2;
      do {
        if ((uVar4 & uVar12) == 0) {
          if ((uVar5 & uVar12) != 0) {
            iVar3 = 1;
            goto LAB_0001afba;
          }
          if ((uVar6 & uVar12) != 0) {
            iVar3 = 2;
            goto LAB_0001afba;
          }
        }
        else {
          iVar3 = 0;
LAB_0001afba:
          iVar2 = *(int *)(iVar13 + 0x138);
          uVar9 = *(uint *)(iVar13 + iVar3 * 8 + 0x1e4);
          iVar11 = iVar2;
          if (uVar9 != 0x18) {
            uVar8 = uVar9 & 3;
            if (-1 < (int)-uVar9) {
              uVar8 = -(-uVar9 & 3);
            }
            iVar11 = uVar8 * 0xc08 + iVar2;
          }
          pbVar10 = (byte *)(iVar11 + 1000);
          if (*(char *)(iVar11 + 0xfe0) != '\0') {
            if (2 < *DAT_0001b164) {
              printk(DAT_0001b168,iVar2 + 0x1c,*pbVar10 & 7);
            }
            rkcif_stream_stop(pbVar10);
            *(undefined1 *)(iVar11 + 0xfe0) = 0;
            __wake_up(iVar11 + 0x8fc,3,1);
          }
          if (9 < *(int *)(*(int *)(iVar11 + 0x3ec) + 0x736c)) {
            rkcif_modify_frame_skip_config(pbVar10);
          }
          if ((*(int *)(*(int *)(iVar11 + 0x3ec) + 0x8038) != 0) &&
             (*(uint *)(iVar11 + 0x904) < 0xf)) {
            printk(DAT_0001b16c,*(int *)(iVar13 + 0x138) + 0x1c,*pbVar10 & 7,
                   *(uint *)(iVar11 + 0x904) - 1);
          }
          uVar9 = ~uVar5;
          if ((iVar3 != 1) && (uVar9 = ~uVar6, iVar3 != 2)) {
            uVar9 = ~uVar4;
          }
          uVar12 = uVar12 & uVar9;
        }
        if ((uVar12 & uVar7) == 0) {
          if ((uVar12 & uVar16) != 0) {
            iVar3 = 1;
            goto LAB_0001b060;
          }
          if ((uVar12 & uVar14) != 0) {
            iVar3 = 2;
            goto LAB_0001b060;
          }
        }
        else {
          iVar3 = 0;
LAB_0001b060:
          iVar11 = *(int *)(iVar13 + 0x138);
          uVar9 = *(uint *)(iVar13 + iVar3 * 8 + 0x1e4);
          if (uVar9 != 0x18) {
            uVar8 = uVar9 & 3;
            if (-1 < (int)-uVar9) {
              uVar8 = -(-uVar9 & 3);
            }
            iVar11 = uVar8 * 0xc08 + iVar11;
          }
          uVar9 = *(int *)(iVar11 + 0x904) + 1;
          *(uint *)(iVar11 + 0x904) = uVar9;
          if ((*(int *)(*(int *)(iVar11 + 0x3ec) + 0x8038) != 0) && (uVar9 < 0xf)) {
            printk(DAT_0001b170,*(int *)(iVar13 + 0x138) + 0x1c,*(byte *)(iVar11 + 1000) & 7);
          }
          if (*(int *)(iVar11 + 0xb74) != 0) {
            rkcif_enable_dma_capture((byte *)(iVar11 + 1000),0);
          }
          if (*(char *)(iVar11 + 0xfeb) != '\0') {
            *(undefined1 *)(iVar11 + 0xfeb) = 0;
            rkcif_scale_start(*(undefined4 *)(iVar11 + 0xb68));
          }
          uVar9 = ~uVar16;
          if ((iVar3 != 1) && (uVar9 = ~uVar14, iVar3 != 2)) {
            uVar9 = ~uVar7;
          }
          uVar12 = uVar12 & uVar9;
        }
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      bVar1 = true;
    }
    if (iVar15 != 0) {
      return;
    }
    iVar15 = 1;
  } while( true );
}



/* ===== rkcif_irq_global @ 0001b174 size=82 ===== */

uint rkcif_irq_global(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = rkcif_read_register(param_1,0x92);
  if (uVar1 != 0) {
    if (0 < *DAT_0001b1c8) {
      printk(DAT_0001b1cc,param_1 + 0x1c,uVar1);
    }
    uVar2 = DAT_0001b1d0;
    if (((uVar1 & 1) == 0) && (uVar2 = DAT_0001b1d4, -1 < (int)(uVar1 << 0x1e))) {
      rkcif_irq_handle_scale(param_1,uVar1);
    }
    else {
      printk(uVar2,param_1 + 0x1c,uVar1);
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== rkcif_irq_pingpong_v1 @ 0001b1d8 size=4930 ===== */

void rkcif_irq_pingpong_v1(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar14;
  uint extraout_r2_01;
  undefined4 extraout_r2_02;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  uint *puVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  undefined8 uVar25;
  uint local_60;
  int local_54;
  
  if (*(int *)(param_1 + 0x34c) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x34c) + 4) - 4U < 3) {
      uVar3 = rkcif_read_register(param_1,0x5b);
      uVar4 = rkcif_read_register(param_1,0x5e);
      if (uVar3 != 0) {
        rkcif_write_register(param_1,0x5b,uVar3);
        if (0 < *DAT_0001b4bc) {
          printk(DAT_0001b4c0,param_1 + 0x1c,uVar3);
        }
        uVar5 = DAT_0001b4d4;
        uVar2 = DAT_0001b4cc;
        uVar8 = DAT_0001b4c8;
        if ((uVar3 & 0xf000000) == 0) {
          if ((uVar3 & 0xb0000) == 0) {
            if ((int)(uVar3 << 0xd) < 0) {
              uVar4 = *(uint *)(param_1 + 0x7f00);
              *(uint *)(param_1 + 0x7f00) = uVar4 + 1;
              *(uint *)(param_1 + 0x7f04) = *(int *)(param_1 + 0x7f04) + (uint)(0xfffffffe < uVar4);
              uVar5 = uVar2;
            }
            else {
              if ((uVar3 & DAT_0001b4d0) == 0) {
                iVar22 = 4;
                local_60 = uVar3;
                do {
                  iVar6 = rkcif_csi_g_mipi_id(param_1 + 0xc,local_60);
                  if (-1 < iVar6) {
                    iVar11 = iVar6 * 0xc08;
                    iVar12 = param_1 + iVar11 + 1000;
                    iVar13 = *(int *)(param_1 + 0x7ee0);
                    if ((iVar13 == 0) || (*(int *)(iVar13 + 0x1d8) != 0)) {
                      iVar15 = iVar6 * 0xc08 + param_1;
                      *(int *)(iVar15 + 0xfac) = *(int *)(iVar15 + 0xfac) + 1;
                    }
                    iVar15 = iVar6 * 0xc08 + param_1;
                    if ((*(char *)(iVar15 + 0xfe0) == '\0') || (*(int *)(iVar15 + 0xb70) != 0)) {
                      iVar15 = iVar6 * 0xc08 + param_1;
                      if (*(int *)(iVar15 + 0x8f8) == 2) {
                        *(undefined1 *)(iVar15 + 0xfed) = 1;
                        switch(iVar6) {
                        case 0:
                          *(uint *)(param_1 + 0x908) = (local_60 & 0x3ff) >> 8;
                          local_60 = local_60 & 0xfffffcff;
                          break;
                        case 1:
                          *(uint *)(param_1 + 0x1510) = (local_60 & 0xfff) >> 10;
                          local_60 = local_60 & 0xfffff3ff;
                          break;
                        case 2:
                          *(uint *)(param_1 + 0x2118) = (local_60 & 0x3fff) >> 0xc;
                          local_60 = local_60 & 0xffffcfff;
                          break;
                        case 3:
                          *(uint *)(param_1 + 0x2d20) = (local_60 & 0xffff) >> 0xe;
                          local_60 = local_60 & 0xffff3fff;
                        }
                        iVar15 = iVar6 * 0xc08 + param_1;
                        if (((*(int *)(*(int *)(iVar15 + 0x3ec) + 0x8038) != 0) &&
                            (uVar10 = *(uint *)(iVar15 + 0x904), uVar10 < 0xf)) &&
                           ((iVar13 == 0 || (*(int *)(iVar13 + 0x1d8) != 0)))) {
                          iVar13 = iVar6 * 0xc08 + param_1;
                          bVar1 = *(byte *)(iVar13 + 1000);
                          uVar8 = *(undefined4 *)(iVar13 + 0x908);
                          ktime_get();
                          printk(DAT_0001b7a0,param_1 + 0x1c,bVar1 & 7,uVar10 - 1,uVar8);
                        }
                        if (*(char *)(iVar6 * 0xc08 + param_1 + 0xfe2) != '\0') {
                          rkcif_dynamic_crop(iVar12);
                        }
                        iVar13 = iVar6 * 0xc08 + param_1;
                        uVar10 = *(uint *)(iVar13 + 0xb70);
                        if ((int)(uVar10 << 0x1f) < 0) {
                          if (*(int *)(param_1 + 0x803c) != 0) {
                            iVar15 = *(int *)(iVar13 + 0x3ec);
                            disableIRQinterrupts();
                            if ((*(byte *)(iVar13 + 1000) & 7) == 0) {
                              uVar10 = *(uint *)(*(int *)(iVar15 + 0x7ed4) + 0x160);
                              if (-1 < (int)((uVar10 >> (*(uint *)(iVar15 + 0x7ff4) & 0xff)) << 0x1f
                                            )) goto LAB_0001b768;
                              bVar24 = true;
                              *(uint *)(*(int *)(iVar15 + 0x7ed4) + 0x160) =
                                   uVar10 & ~(1 << (*(uint *)(iVar15 + 0x7ff4) & 0xff));
                              iVar13 = *(int *)(iVar15 + 0x7ed4);
                              if ((*(int *)(iVar13 + 0x160) == 0) && (*(int *)(iVar13 + 0x164) != 0)
                                 ) {
                                *(int *)(iVar13 + 0x160) = *(int *)(iVar13 + 0x164);
                                *(undefined4 *)(*(int *)(iVar15 + 0x7ed4) + 0x164) = 0;
                              }
                            }
                            else {
LAB_0001b768:
                              bVar24 = *(int *)(iVar15 + 0x742c) != 0;
                            }
                            if (!bVar24) goto LAB_0001b588;
                          }
                          rkcif_update_stream(param_1,iVar12,iVar6);
                        }
                        else if ((uVar10 & 2) == 0) {
                          iVar15 = uVar10 << 0x1b;
                          if (iVar15 < 0) {
                            if (*(int *)(iVar13 + 0x908) == 3) goto LAB_0001b786;
                            iVar14 = 0;
                            local_54 = iVar14;
                            if (*(char *)(iVar13 + 0xfe6) == '\0') {
                              disableIRQinterrupts();
                              if (*(int *)(iVar13 + 0x908) << 0x1f < 0) {
                                local_54 = *(int *)(iVar13 + 0x934);
                                puVar18 = (undefined8 *)(iVar13 + 0xa58);
                                uVar25 = ktime_get();
                              }
                              else {
                                if (-1 < *(int *)(iVar13 + 0x908) << 0x1e) goto LAB_0001bba0;
                                local_54 = *(int *)(iVar13 + 0x938);
                                puVar18 = (undefined8 *)(iVar13 + 0xa60);
                                uVar25 = ktime_get();
                              }
                              iVar15 = (int)((ulonglong)uVar25 >> 0x20);
                              *puVar18 = uVar25;
                            }
LAB_0001bba0:
                            if (*(int *)(param_1 + 0x7edc) == 1) {
                              rkcif_deal_readout_time(iVar12);
                              iVar15 = extraout_r1_01;
                            }
                            iVar17 = iVar6 * 0xc08 + param_1;
                            iVar23 = *(int *)(iVar17 + 0x3ec);
                            iVar13 = *(int *)(iVar23 + 0x7ed4);
                            uVar10 = *(uint *)(iVar17 + 0x908) & 1;
                            iVar17 = *(int *)(iVar23 + 0x34c);
                            if (*(int *)(iVar17 + 4) - 4U < 3) {
                              if (uVar10 == 0) {
                                uVar8 = get_reg_index_of_frm1_y_addr(iVar6,iVar15,iVar6 + -1);
                                if (extraout_r2_00 < 3) {
                                  uVar25 = CONCAT44(uVar8,(uint)*(byte *)(extraout_r2_00 +
                                                                          DAT_0001c014 + 0x447));
                                }
                                else {
                                  uVar25 = CONCAT44(uVar8,0x3d);
                                }
                              }
                              else {
                                uVar8 = get_reg_index_of_frm0_y_addr();
                                if (extraout_r2 < 3) {
                                  uVar25 = CONCAT44(uVar8,(uint)*(byte *)(extraout_r2 + DAT_0001c014
                                                                         + 0x444));
                                }
                                else {
                                  uVar25 = CONCAT44(uVar8,0x3c);
                                }
                              }
                            }
                            else if (uVar10 == 0) {
                              if (iVar6 < 4) {
                                uVar9 = *(undefined1 *)(DAT_0001c014 + iVar6 + 0x1e);
                              }
                              else {
                                uVar9 = 7;
                              }
                              uVar25 = get_dvp_reg_index_of_frm1_uv_addr(iVar6,uVar9);
                            }
                            else {
                              uVar8 = get_dvp_reg_index_of_frm0_y_addr(iVar6);
                              uVar25 = get_dvp_reg_index_of_frm0_uv_addr(iVar6,uVar8);
                            }
                            uVar8 = (undefined4)((ulonglong)uVar25 >> 0x20);
                            disableIRQinterrupts();
                            if (*(int *)(iVar12 + 0x544) == iVar11 + 0x92c + param_1) {
                              iVar15 = iVar6 * 0xc08 + param_1;
                              if (*(int *)(iVar13 + 0x194) == 0) {
                                iVar16 = *(int *)(iVar15 + 0x934);
                                iVar19 = 0;
                                if (((iVar16 != 0) && (iVar7 = *(int *)(iVar15 + 0x938), iVar7 != 0)
                                    ) && (iVar16 != iVar7)) {
                                  if (*(int *)(iVar15 + 0x908) == 1) {
                                    *(int *)(iVar15 + 0x934) = iVar7;
                                    iVar19 = iVar7;
                                  }
                                  else if (*(int *)(iVar15 + 0x908) == 2) {
                                    *(int *)(iVar15 + 0x938) = iVar16;
                                    iVar19 = iVar16;
                                  }
                                }
                                iVar16 = iVar6 * 0xc08 + param_1;
                                iVar15 = *(int *)(iVar16 + 0xfa8);
                                if (iVar15 < 2) {
                                  *(int *)(iVar16 + 0xfa8) = iVar15 + 1;
                                }
                              }
                              else if (*(int *)(iVar15 + 0x908) == 1) {
                                iVar19 = 0;
                                *(undefined4 *)(iVar15 + 0x934) = 0;
                              }
                              else {
                                if (*(int *)(iVar15 + 0x908) != 2) goto LAB_0001be3e;
                                if (*(int *)(*(int *)(iVar15 + 0x960) + 0x14) == 4) {
                                  iVar19 = *(int *)(iVar15 + 0x934);
                                }
                                else {
                                  iVar19 = 0;
                                }
                                *(int *)(iVar15 + 0x938) = iVar19;
                              }
                            }
                            else {
                              if (((*(int *)(iVar13 + 0x194) == 0) &&
                                  (iVar15 = iVar6 * 0xc08 + param_1,
                                  *(int *)(iVar15 + 0x934) == *(int *)(iVar15 + 0x938))) &&
                                 (*(int *)(*(int *)(iVar15 + 0x960) + 0x14) != 4)) {
                                iVar14 = -0x16;
                              }
                              iVar15 = iVar6 * 0xc08 + param_1;
                              if (*(int *)(iVar15 + 0x908) == 1) {
                                iVar19 = *(int *)(iVar15 + 0x934);
                                iVar16 = *(int *)(iVar15 + 0x92c) + -0x280;
                                *(int *)(iVar15 + 0x934) = iVar16;
                                if (iVar19 == 0) {
                                  iVar14 = -0x16;
                                }
                                iVar19 = 0;
                                if (iVar16 != 0) {
                                  list_del(*(int *)(iVar15 + 0x92c),uVar8);
                                  iVar19 = *(int *)(iVar15 + 0x934);
                                  uVar8 = extraout_r1_02;
                                }
                              }
                              else if (*(int *)(iVar15 + 0x908) == 2) {
                                if (*(int *)(iVar15 + 0x938) == 0) {
                                  iVar14 = -0x16;
                                }
                                if (*(int *)(*(int *)(iVar15 + 0x960) + 0x14) == 4) {
                                  iVar19 = *(int *)(iVar15 + 0x934);
                                  if (*(int *)(iVar15 + 0x938) == iVar19) goto LAB_0001be3e;
                                  *(int *)(iVar15 + 0x938) = iVar19;
                                }
                                else {
                                  iVar16 = *(int *)(iVar15 + 0x92c) + -0x280;
                                  *(int *)(iVar15 + 0x938) = iVar16;
                                  iVar19 = 0;
                                  if (iVar16 != 0) {
                                    list_del(*(int *)(iVar15 + 0x92c),uVar8);
                                    iVar19 = *(int *)(iVar15 + 0x938);
                                    uVar8 = extraout_r1_03;
                                  }
                                }
                              }
                              else {
LAB_0001be3e:
                                iVar19 = 0;
                              }
                            }
                            iVar15 = iVar6 * 0xc08 + param_1;
                            *(int *)(iVar15 + 0x90c) = *(int *)(iVar15 + 0x908);
                            if (iVar19 == 0) {
                              if (*(int *)(iVar13 + 0x194) == 0) {
                                if (2 < *DAT_0001c024) {
                                  uVar8 = DAT_0001c01c;
                                  if (*(int *)(iVar17 + 4) - 4U < 3) {
                                    uVar8 = DAT_0001c018;
                                  }
                                  printk(DAT_0001c028,iVar23 + 0x1c,*(undefined4 *)(iVar15 + 0xfa8),
                                         uVar8,*(byte *)(iVar15 + 1000) & 7);
                                }
                                iVar14 = -0x16;
                              }
                              else {
                                rkcif_write_register(iVar23,uVar8,*(undefined4 *)(iVar13 + 0x188));
                                if (*(int *)(*(int *)(iVar15 + 0x95c) + 0x18) != 1) {
                                  rkcif_write_register
                                            (iVar23,(int)uVar25,*(undefined4 *)(iVar13 + 0x188));
                                }
                                uVar8 = DAT_0001c01c;
                                if (*(int *)(iVar17 + 4) - 4U < 3) {
                                  uVar8 = DAT_0001c018;
                                }
                                printk(DAT_0001c020,iVar23 + 0x1c,uVar8,
                                       *(byte *)(iVar6 * 0xc08 + param_1 + 1000) & 7);
                              }
                            }
                            else if ((*(int *)(*(int *)(iVar15 + 0x960) + 0x14) == 4) &&
                                    (*(int *)(iVar15 + 0x908) == 2)) {
                              iVar13 = iVar6 * 0x68 + iVar23;
                              rkcif_write_register
                                        (iVar23,uVar8,
                                         *(int *)(iVar19 + 0x288) +
                                         (*(uint *)(iVar13 + 0x71dc) >> 1));
                              if (*(int *)(*(int *)(iVar15 + 0x95c) + 0x18) != 1) {
                                iVar13 = *(int *)(iVar19 + 0x28c) +
                                         (*(uint *)(iVar13 + 0x71dc) >> 1);
LAB_0001bcd4:
                                rkcif_write_register(iVar23,(int)uVar25,iVar13);
                              }
                            }
                            else {
                              rkcif_write_register(iVar23,uVar8,*(int *)(iVar19 + 0x288));
                              if (*(int *)(*(int *)(iVar6 * 0xc08 + param_1 + 0x95c) + 0x18) != 1) {
                                iVar13 = *(int *)(iVar19 + 0x28c);
                                goto LAB_0001bcd4;
                              }
                            }
                            if ((iVar14 == 0) && (local_54 != 0)) {
                              iVar13 = iVar6 * 0xc08 + param_1;
                              uVar8 = *(undefined4 *)(iVar13 + 0xb34);
                              *(undefined4 *)(local_54 + 0x18) = *(undefined4 *)(iVar13 + 0xb30);
                              *(undefined4 *)(local_54 + 0x1c) = uVar8;
                              *(int *)(local_54 + 0x170) = *(int *)(iVar13 + 0x904) + -1;
                              rkcif_rockit_buf_done(iVar12,local_54);
                            }
                          }
                        }
                        else if (*(int *)(iVar13 + 0x908) == 3) {
LAB_0001b786:
                          printk(DAT_0001b7ac,param_1 + 0x1c,*(byte *)(iVar13 + 1000) & 7,
                                 *(undefined4 *)(iVar13 + 0x904));
                        }
                        else {
                          if (*(int *)(iVar13 + 0x908) << 0x1f < 0) {
                            uVar25 = ktime_get();
                            puVar18 = (undefined8 *)(iVar13 + 0xa58);
LAB_0001b7c2:
                            *puVar18 = uVar25;
                          }
                          else if (*(int *)(iVar13 + 0x908) << 0x1e < 0) {
                            uVar25 = ktime_get();
                            puVar18 = (undefined8 *)(iVar13 + 0xa60);
                            goto LAB_0001b7c2;
                          }
                          if (*(int *)(param_1 + 0x7edc) == 1) {
                            rkcif_deal_readout_time(iVar12);
                          }
                          iVar13 = iVar6 * 0xc08 + param_1;
                          if (*(char *)(iVar13 + 0xfe6) == '\0') {
                            iVar15 = *(int *)(iVar13 + 0x3ec);
                            iVar14 = *(int *)(iVar15 + 0x7ee0);
                            uVar10 = *(uint *)(iVar13 + 0x908) & 1;
                            if (*(int *)(*(int *)(iVar15 + 0x34c) + 4) - 4U < 3) {
                              if (uVar10 == 0) {
                                uVar10 = get_reg_index_of_frm1_y_addr(iVar6);
                              }
                              else {
                                uVar10 = get_reg_index_of_frm0_y_addr();
                              }
                            }
                            else if (uVar10 == 0) {
                              if (iVar6 < 4) {
                                uVar10 = (uint)*(byte *)(DAT_0001bb54 + iVar6 + 0x1e);
                              }
                              else {
                                uVar10 = 7;
                              }
                            }
                            else {
                              uVar10 = get_dvp_reg_index_of_frm0_y_addr(iVar6);
                            }
                            disableIRQinterrupts();
                            if (*(int *)(iVar12 + 0xba8) == iVar11 + 0xf90 + param_1) {
                              iVar13 = 0;
                              if (*(int *)(iVar14 + 0x1d8) != 0) {
                                iVar17 = iVar6 * 0xc08 + param_1;
                                iVar13 = *(int *)(iVar17 + 0xfa8);
                                if (iVar13 < 2) {
                                  *(int *)(iVar17 + 0xfa8) = iVar13 + 1;
                                }
                                iVar17 = iVar6 * 0xc08 + param_1;
                                if (*(int *)(*(int *)(iVar15 + 0x7ed4) + 0x194) == 0) {
                                  iVar23 = *(int *)(iVar17 + 0x924);
                                  iVar13 = iVar23;
                                  if (((iVar23 != 0) &&
                                      (iVar19 = *(int *)(iVar17 + 0x928), iVar13 = iVar19,
                                      iVar19 != 0)) && (iVar13 = 0, iVar23 != iVar19)) {
                                    if (*(int *)(iVar17 + 0x908) == 1) {
                                      *(int *)(iVar17 + 0x924) = iVar19;
                                      iVar13 = iVar19;
                                      iVar19 = iVar23;
                                    }
                                    else if (*(int *)(iVar17 + 0x908) == 2) {
                                      *(int *)(iVar17 + 0x928) = iVar23;
                                      iVar13 = iVar23;
                                    }
                                    else {
                                      iVar19 = 0;
                                    }
                                    iVar17 = iVar6 * 0xc08 + param_1;
                                    if (*(int *)(*(int *)(iVar17 + 0x3ec) + 0x8038) != 0) {
                                      printk(DAT_0001bb58,*(int *)(iVar17 + 0x3ec) + 0x1c,
                                             *(byte *)(iVar17 + 1000) & 7,
                                             *(undefined4 *)(*(int *)(iVar17 + 0x928) + 0x54));
                                    }
                                    goto LAB_0001ba22;
                                  }
                                }
                                else {
                                  iVar13 = 0;
                                  if (*(int *)(iVar17 + 0x908) == 1) {
                                    iVar19 = *(int *)(iVar17 + 0x924);
                                    *(undefined4 *)(iVar17 + 0x924) = 0;
                                  }
                                  else {
                                    iVar19 = *(int *)(iVar17 + 0x928);
                                    *(undefined4 *)(iVar17 + 0x928) = 0;
                                  }
LAB_0001ba22:
                                  if (iVar19 != 0) {
                                    iVar17 = iVar6 * 0xc08 + param_1;
                                    if (*(int *)(iVar6 * 0xc08 + param_1 + 0x904) == 1) {
                                      *(undefined1 *)(iVar19 + 0x3d) = 1;
                                    }
                                    *(int *)(iVar19 + 0x30) = *(int *)(iVar17 + 0x904) + -1;
                                    uVar8 = *(undefined4 *)(iVar17 + 0xb34);
                                    *(undefined4 *)(iVar19 + 0x28) = *(undefined4 *)(iVar17 + 0xb30)
                                    ;
                                    *(undefined4 *)(iVar19 + 0x2c) = uVar8;
                                    *(undefined4 *)(iVar17 + 0xfdc) =
                                         *(undefined4 *)(iVar17 + 0x904);
                                    if (*(int *)(iVar15 + 0x73a1) == 0) {
                                      rkcif_s_rx_buffer(iVar15,iVar19 + 0x18);
                                    }
                                    else {
                                      rkcif_rdbk_frame_end_toisp(iVar12,iVar19);
                                    }
                                    goto LAB_0001b8e4;
                                  }
                                }
                                iVar17 = iVar6 * 0xc08 + param_1;
                                if ((*(int *)(*(int *)(iVar17 + 0x3ec) + 0x8038) != 0) &&
                                   (*(int *)(*(int *)(iVar15 + 0x7ed4) + 0x194) != 0)) {
                                  printk(DAT_0001bb5c,*(int *)(iVar17 + 0x3ec) + 0x1c,
                                         *(byte *)(iVar17 + 1000) & 7,*(int *)(iVar17 + 0x904) + -1)
                                  ;
                                }
                              }
                            }
                            else {
                              iVar17 = iVar6 * 0xc08 + param_1;
                              if (*(int *)(iVar17 + 0x908) == 1) {
                                iVar23 = *(int *)(iVar17 + 0x924);
                                if (iVar23 == *(int *)(iVar17 + 0x928)) {
                                  iVar23 = 0;
                                }
                                iVar13 = *(int *)(iVar17 + 0xf90) + -4;
                                if (iVar13 != 0) {
                                  list_del();
                                  *(int *)(iVar17 + 0x924) = iVar13;
                                  iVar23 = extraout_r1;
                                }
                                if ((iVar14 == 0) || (*(int *)(iVar14 + 0x1d8) != 2)) {
                                  iVar23 = iVar6 * 0xc08 + param_1;
                                  iVar17 = *(int *)(iVar23 + 0x928);
LAB_0001b976:
                                  rkcif_s_rx_buffer(iVar15,iVar17 + 0x18);
                                  *(int *)(iVar23 + 0xf98) = *(int *)(iVar23 + 0xf98) + -1;
                                }
                                else {
LAB_0001b872:
                                  if (iVar23 == 0) goto LAB_0001b8e4;
                                  iVar17 = iVar6 * 0xc08 + param_1;
                                  if (*(int *)(iVar6 * 0xc08 + param_1 + 0x904) == 1) {
                                    *(undefined1 *)(iVar23 + 0x3d) = 1;
                                  }
                                  *(int *)(iVar23 + 0x30) = *(int *)(iVar17 + 0x904) + -1;
                                  uVar8 = *(undefined4 *)(iVar17 + 0xb34);
                                  *(undefined4 *)(iVar23 + 0x28) = *(undefined4 *)(iVar17 + 0xb30);
                                  *(undefined4 *)(iVar23 + 0x2c) = uVar8;
                                  *(undefined4 *)(iVar17 + 0xfdc) = *(undefined4 *)(iVar17 + 0x904);
                                  if (*(int *)(iVar15 + 0x73a1) == 0) {
                                    rkcif_s_rx_buffer(iVar15,iVar23 + 0x18);
                                  }
                                  else {
                                    rkcif_rdbk_frame_end_toisp(iVar12);
                                  }
                                  iVar17 = iVar6 * 0xc08 + param_1;
                                  *(int *)(iVar17 + 0xf98) = *(int *)(iVar17 + 0xf98) + -1;
                                }
                              }
                              else {
                                if (*(int *)(iVar17 + 0x908) == 2) {
                                  iVar23 = *(int *)(iVar17 + 0x928);
                                  if (*(int *)(iVar17 + 0x924) == iVar23) {
                                    iVar23 = 0;
                                  }
                                  iVar13 = *(int *)(iVar17 + 0xf90) + -4;
                                  if (iVar13 != 0) {
                                    list_del();
                                    *(int *)(iVar17 + 0x928) = iVar13;
                                    iVar23 = extraout_r1_00;
                                  }
                                  if ((iVar14 == 0) || (*(int *)(iVar14 + 0x1d8) != 2)) {
                                    iVar23 = iVar6 * 0xc08 + param_1;
                                    iVar17 = *(int *)(iVar23 + 0x924);
                                    goto LAB_0001b976;
                                  }
                                  goto LAB_0001b872;
                                }
                                iVar13 = 0;
                              }
                              iVar23 = iVar6 * 0xc08 + param_1;
                              iVar17 = *(int *)(iVar23 + 0xfa8);
                              if (iVar17 != 0) {
                                *(int *)(iVar23 + 0xfa8) = iVar17 + -1;
                              }
                            }
LAB_0001b8e4:
                            iVar17 = iVar6 * 0xc08 + param_1;
                            *(undefined4 *)(iVar17 + 0x90c) = *(undefined4 *)(iVar17 + 0x908);
                            if (iVar13 == 0) {
                              if (((*(int *)(*(int *)(iVar15 + 0x7ed4) + 0x194) != 0) &&
                                  (iVar14 != 0)) && (*(int *)(iVar14 + 0x1d8) == 2)) {
                                rkcif_write_register
                                          (iVar15,uVar10,
                                           *(undefined4 *)(*(int *)(iVar15 + 0x7ed4) + 0x188));
                              }
                            }
                            else {
                              rkcif_write_register(iVar15,uVar10,*(undefined4 *)(iVar13 + 0x54));
                              if ((1 < *(int *)(iVar15 + 0x8038)) &&
                                 (*(uint *)(iVar17 + 0x904) < 0xf)) {
                                printk(DAT_0001bb50,iVar15 + 0x1c,*(byte *)(iVar17 + 1000) & 7,
                                       *(uint *)(iVar17 + 0x904) - 1,uVar10,
                                       *(undefined4 *)(iVar13 + 0x54));
                              }
                            }
                          }
                        }
LAB_0001b588:
                        if (9 < *(int *)(param_1 + 0x736c)) {
                          rkcif_modify_frame_skip_config(iVar12);
                        }
                        iVar13 = iVar6 * 0xc08 + param_1;
                        if (*(char *)(iVar13 + 0xfee) != '\0') {
                          *(undefined1 *)(iVar13 + 0xfee) = 0;
                          if (*(int *)(param_1 + 0x73a1) == 5) {
                            bVar24 = (*(byte *)(iVar13 + 1000) & 7) == 1;
LAB_0001b5c4:
                            if (!bVar24) {
                              iVar13 = iVar6 * 0xc08 + param_1;
                              iVar23 = *(int *)(iVar13 + 0x924);
                              iVar15 = *(int *)(*(int *)(iVar13 + 0x3ec) + 0x7ee0);
                              disableIRQinterrupts();
                              iVar14 = param_1 + iVar11;
                              iVar13 = iVar14;
                              for (iVar17 = 0; iVar17 < *(int *)(iVar15 + 0x288);
                                  iVar17 = iVar17 + 1) {
                                if (((iVar13 != -0xb90) && (*(char *)(iVar14 + 0xbff) == '\0')) &&
                                   (iVar23 != iVar13 + 0xb90)) {
                                  piVar21 = *(int **)(iVar15 + 0x284);
                                  *(int *)(iVar15 + 0x284) = iVar13 + 0xb9c;
                                  *(int *)(iVar14 + 0xb9c) = iVar15 + 0x280;
                                  *(int **)(iVar14 + 0xba0) = piVar21;
                                  *piVar21 = iVar13 + 0xb9c;
                                }
                                iVar13 = iVar13 + 0x80;
                                iVar14 = iVar14 + 0x80;
                              }
                              schedule_work(iVar15 + 0x26c);
                              goto LAB_0001b606;
                            }
                          }
                          else if (*(int *)(param_1 + 0x73a1) == 6) {
                            bVar24 = (*(byte *)(iVar13 + 1000) & 7) == 2;
                            goto LAB_0001b5c4;
                          }
                          sditf_change_to_online(*(int *)(param_1 + 0x7ee0));
                        }
LAB_0001b606:
                        disableIRQinterrupts();
                        iVar13 = iVar6 * 0xc08 + param_1;
                        if (*(char *)(iVar13 + 0xfec) != '\0') {
                          __wake_up(iVar11 + 0x8fc + param_1,3,1,0);
                          *(undefined1 *)(iVar13 + 0xfec) = 0;
                        }
                        iVar11 = iVar6 * 0xc08 + param_1;
                        if ((-1 < *(int *)(iVar11 + 0xb70) << 0x1e) &&
                           (*(int *)(iVar11 + 0xfa8) == 2)) {
                          *(undefined4 *)(iVar11 + 0xb78) = 1;
                          rkcif_stop_dma_capture(iVar12);
                        }
                        iVar11 = iVar6 * 0xc08 + param_1;
                        if (*(char *)(iVar11 + 0xfeb) != '\0') {
                          *(undefined1 *)(iVar11 + 0xfeb) = 0;
                          rkcif_scale_start(*(undefined4 *)(iVar11 + 0xb68));
                        }
                        rkcif_detect_wake_up_mode_change(iVar12);
                        if ((*(int *)(param_1 + 0x736c) < 9) && (iVar6 == 0)) {
                          uVar10 = *(uint *)(param_1 + 0xb60);
                          if (((local_60 & 3) == 0) && (1 < uVar10)) {
                            printk(DAT_0001b7a8,param_1 + 0x1c,DAT_0001b7a4,uVar3,uVar10);
                            *(undefined4 *)(param_1 + 0xb60) = 0;
                            *(undefined1 *)(param_1 + 0xfe5) = 1;
                          }
                          else {
                            *(uint *)(param_1 + 0xb60) = uVar10 - 1;
                          }
                        }
                        rkcif_monitor_reset_event(param_1);
                        uVar10 = *(uint *)(param_1 + 0x7f40);
                        *(uint *)(param_1 + 0x7f40) = uVar10 + 1;
                        *(uint *)(param_1 + 0x7f44) =
                             *(int *)(param_1 + 0x7f44) + (uint)(0xfffffffe < uVar10);
                      }
                    }
                    else {
                      rkcif_stream_stop(iVar12);
                      *(undefined1 *)(iVar15 + 0xfe0) = 0;
                      __wake_up(iVar11 + 0x8fc + param_1,3,1,0);
                    }
                  }
                  iVar22 = iVar22 + -1;
                } while (iVar22 != 0);
                iVar22 = param_1 + 1000;
                uVar3 = 0;
                do {
                  if ((3 << ((uVar3 & 0x7f) << 1) & local_60) != 0) {
                    if (uVar3 == 0) {
                      rkcif_deal_sof(param_1);
                    }
                    else {
                      disableIRQinterrupts();
                      uVar25 = ktime_get();
                      *(undefined8 *)(iVar22 + 0x748) = uVar25;
                      *(int *)(iVar22 + 0x51c) = *(int *)(iVar22 + 0x51c) + 1;
                    }
                    *(undefined1 *)(iVar22 + 0xc05) = 0;
                    disableIRQinterrupts();
                    if ((*(char *)(iVar22 + 0xbf8) != '\0') &&
                       (iVar6 = *(int *)(iVar22 + 0x788), iVar6 != 0)) {
                      if (iVar6 << 0x1f < 0) {
                        *(undefined4 *)(iVar22 + 0x790) = 1;
                      }
                      else if (iVar6 << 0x1e < 0) {
                        *(undefined4 *)(iVar22 + 0x790) = 2;
                      }
                      *(undefined1 *)(iVar22 + 0xc07) = 1;
                    }
                    if ((*(int *)(iVar22 + 0x790) != 0) &&
                       (iVar6 = rkcif_stop_dma_capture(iVar22), iVar6 == 0)) {
                      *(undefined1 *)(iVar22 + 0xc04) = 1;
                    }
                    if (*(int *)(iVar22 + 0x78c) != 0) {
                      rkcif_enable_dma_capture(iVar22,0);
                    }
                  }
                  if ((1 << (uVar3 + 0x14 & 0xff) & local_60) != 0) {
                    if (*(char *)(iVar22 + 0xbff) != '\0') {
                      puVar20 = (uint *)(iVar22 + 3000);
                      uVar10 = *puVar20;
                      *puVar20 = uVar10 + 1;
                      *(uint *)(iVar22 + 0xbbc) =
                           *(int *)(iVar22 + 0xbbc) + (uint)(0xfffffffe < uVar10);
                      if ((1 < *(int *)(param_1 + 0x8038)) && (*(uint *)(iVar22 + 0x51c) < 0xf)) {
                        printk(DAT_0001b4d8,param_1 + 0x1c);
                      }
                      if ((*(int *)(param_1 + 0x7ee0) == 0) ||
                         (*(int *)(*(int *)(param_1 + 0x7ee0) + 0x1d8) != 2)) {
                        rkcif_line_wake_up(iVar22,*(byte *)(uVar3 * 0xc08 + param_1 + 1000) & 7);
                      }
                      else {
                        if ((int)(*puVar20 << 0x1f) < 0) {
                          *(undefined4 *)(iVar22 + 0x520) = 1;
                          iVar6 = *(int *)(iVar22 + 0x53c);
                        }
                        else {
                          *(undefined4 *)(iVar22 + 0x520) = 2;
                          iVar6 = *(int *)(iVar22 + 0x540);
                        }
                        if (iVar6 == 0) {
                          printk(DAT_0001b4e0,*(int *)(iVar22 + 4) + 0x1c,DAT_0001b4dc);
                        }
                        else if (*(char *)(iVar22 + 0xbf8) == '\0') {
                          iVar13 = *(int *)(iVar22 + 4);
                          iVar11 = *(int *)(iVar13 + 0x34c);
                          disableIRQinterrupts();
                          iVar12 = iVar22 + 0xba8;
                          if (*(int *)(iVar22 + 0xba8) == iVar12) {
                            if (*(int *)(iVar22 + 0xbc0) < 2) {
                              *(int *)(iVar22 + 0xbc0) = *(int *)(iVar22 + 0xbc0) + 1;
                            }
                            iVar15 = *(int *)(iVar22 + 0x53c);
                            if (((iVar15 != 0) && (iVar14 = *(int *)(iVar22 + 0x540), iVar14 != 0))
                               && (iVar15 != iVar14)) {
                              if ((*puVar20 & 1) == 0) {
                                *(int *)(iVar22 + 0x540) = iVar15;
                              }
                              else {
                                *(int *)(iVar22 + 0x53c) = iVar14;
                              }
                              iVar15 = *(int *)(iVar22 + 0x53c);
                              bVar24 = false;
                              if (*(int *)(*(int *)(iVar22 + 4) + 0x8038) != 0) {
                                printk(DAT_0001c02c,*(int *)(iVar22 + 4) + 0x1c,
                                       *(byte *)(uVar3 * 0xc08 + param_1 + 1000) & 7,
                                       *(undefined4 *)(*(int *)(iVar22 + 0x540) + 0x54));
                                bVar24 = false;
                              }
                              goto LAB_0001c430;
                            }
                            iVar11 = -0x16;
                          }
                          else {
                            iVar15 = *(int *)(iVar22 + 0xba8) + -4;
                            if ((*puVar20 & 1) == 0) {
                              if (iVar15 != 0) {
                                list_del();
                                *(int *)(iVar22 + 0x540) = iVar15;
                              }
                              bVar24 = false;
                            }
                            else {
                              if (iVar15 != 0) {
                                list_del();
                                *(int *)(iVar22 + 0x53c) = iVar15;
                              }
                              bVar24 = true;
                            }
                            if (*(int *)(iVar22 + 0xbc0) != 0) {
                              *(int *)(iVar22 + 0xbc0) = *(int *)(iVar22 + 0xbc0) + -1;
                            }
LAB_0001c430:
                            if (iVar15 != 0) {
                              uVar10 = *(byte *)(uVar3 * 0xc08 + param_1 + 1000) & 7;
                              if (*(int *)(iVar11 + 4) - 4U < 3) {
                                if (bVar24) {
                                  uVar10 = get_reg_index_of_frm0_y_addr();
                                }
                                else {
                                  uVar10 = get_reg_index_of_frm1_y_addr();
                                }
                              }
                              else if (bVar24) {
                                uVar10 = get_dvp_reg_index_of_frm0_y_addr();
                              }
                              else if (uVar10 < 4) {
                                uVar10 = (uint)*(byte *)(uVar10 + DAT_0001c3a0 + 0x1e);
                              }
                              else {
                                uVar10 = 7;
                              }
                              rkcif_write_register(iVar13,uVar10,*(undefined4 *)(iVar15 + 0x54));
                              if ((1 < *(int *)(iVar13 + 0x8038)) &&
                                 (*(uint *)(iVar22 + 0x51c) < 0xf)) {
                                printk(DAT_0001c39c,iVar13 + 0x1c,
                                       *(byte *)(uVar3 * 0xc08 + param_1 + 1000) & 7,
                                       *(uint *)(iVar22 + 0x51c) - 1,uVar10,
                                       *(undefined4 *)(iVar15 + 0x54));
                              }
                            }
                            iVar11 = 0;
                          }
                          if (2 < *DAT_0001c5c0) {
                            printk(DAT_0001c5c4,*(int *)(iVar22 + 4) + 0x1c,0x1f65,
                                   *(undefined4 *)(iVar22 + 0x51c),*(undefined4 *)(iVar22 + 0xbf0),
                                   *(undefined4 *)(iVar6 + 0x54));
                          }
                          if ((iVar11 == 0) && (*(int *)(iVar22 + 0x7a4) << 0x1c < 0)) {
                            iVar13 = *(int *)(*(int *)(iVar22 + 4) + 0x7ee0);
                            disableIRQinterrupts();
                            iVar11 = *(int *)(iVar22 + 4);
                            if ((*(char *)(iVar11 + 0x8035) != '\0') &&
                               ((*(int *)(iVar22 + 0x51c) + -1 == *(int *)(iVar22 + 0xbf0) &&
                                (*(char *)(iVar11 + 0x8036) != '\0')))) {
                              *(uint *)(iVar22 + 0x7a4) = *(uint *)(iVar22 + 0x7a4) & 0xfffffff7 | 2
                              ;
                              *(undefined4 *)(iVar11 + 0x7ffc) = 0;
                              *(undefined1 *)(iVar22 + 0xbfe) = 0;
                              if (*(int *)(*(int *)(iVar22 + 4) + 0x73a1) == 0) {
LAB_0001c4f2:
                                *(undefined4 *)(iVar22 + 0x790) = 2;
                                rkcif_stop_dma_capture(iVar22);
                              }
                              else {
                                iVar11 = *(int *)(iVar13 + 0x13c);
                                if (iVar11 == 5) {
                                  bVar24 = (*(byte *)(uVar3 * 0xc08 + param_1 + 1000) & 7) == 1;
LAB_0001c4f0:
                                  if (bVar24) goto LAB_0001c4f2;
                                }
                                else if (iVar11 == 6) {
                                  bVar24 = (*(byte *)(uVar3 * 0xc08 + param_1 + 1000) & 7) == 2;
                                  goto LAB_0001c4f0;
                                }
                              }
                              *(undefined1 *)(iVar6 + 0x3f) = 1;
                              iVar11 = *(int *)(iVar13 + 0x13c);
                              if (iVar11 == 5) {
                                bVar24 = (*(byte *)(uVar3 * 0xc08 + param_1 + 1000) & 7) == 1;
                              }
                              else {
                                if (iVar11 != 6) goto LAB_0001c57a;
                                bVar24 = (*(byte *)(uVar3 * 0xc08 + param_1 + 1000) & 7) == 2;
                              }
                              if (!bVar24) {
                                iVar13 = *(int *)(iVar22 + 4);
                                iVar11 = *(int *)(iVar13 + 0x34c);
                                *(int *)(iVar22 + 0xba8) = iVar12;
                                *(int *)(iVar22 + 0xbac) = iVar12;
                                *(int *)(iVar22 + 0x53c) = iVar6;
                                *(int *)(iVar22 + 0x540) = iVar6;
                                if (*(int *)(iVar11 + 4) - 4U < 3) {
                                  uVar8 = get_reg_index_of_frm0_y_addr();
                                  uVar25 = get_reg_index_of_frm1_y_addr(extraout_r2_02,uVar8);
                                }
                                else {
                                  uVar8 = get_dvp_reg_index_of_frm0_y_addr
                                                    (*(byte *)(uVar3 * 0xc08 + param_1 + 1000) & 7);
                                  if (extraout_r2_01 < 4) {
                                    uVar25 = CONCAT44(uVar8,(uint)*(byte *)(extraout_r2_01 +
                                                                            DAT_0001c3a0 + 0x1e));
                                  }
                                  else {
                                    uVar25 = CONCAT44(uVar8,7);
                                  }
                                }
                                rkcif_write_register
                                          (iVar13,(int)((ulonglong)uVar25 >> 0x20),
                                           *(undefined4 *)(iVar6 + 0x54));
                                rkcif_write_register
                                          (iVar13,(int)uVar25,*(undefined4 *)(iVar6 + 0x54));
                                *(undefined1 *)(iVar22 + 0xc06) = 1;
                              }
                            }
LAB_0001c57a:
                            *(int *)(iVar6 + 0x30) = *(int *)(iVar22 + 0x51c) + -1;
                            uVar8 = *(undefined4 *)(iVar22 + 0x74c);
                            *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar22 + 0x748);
                            *(undefined4 *)(iVar6 + 0x2c) = uVar8;
                            *(undefined4 *)(iVar22 + 0xbf4) = *(undefined4 *)(iVar22 + 0x51c);
                            if (*(int *)(*(int *)(iVar22 + 4) + 0x73a1) == 0) {
                              rkcif_s_rx_buffer(*(int *)(iVar22 + 4),iVar6 + 0x18);
                            }
                            else {
                              rkcif_rdbk_frame_end_toisp(iVar22,iVar6);
                            }
                            *(int *)(iVar22 + 0xbb0) = *(int *)(iVar22 + 0xbb0) + -1;
                          }
                        }
                        else {
                          *(undefined1 *)(iVar22 + 0xc00) = 1;
                        }
                      }
                      rkcif_modify_line_int(iVar22,0);
                      *(undefined1 *)(iVar22 + 0xbff) = 0;
                    }
                    if (0 < *DAT_0001b4bc) {
                      printk(DAT_0001b4e8,param_1 + 0x1c,DAT_0001b4e4,uVar4 & 0x3fff);
                    }
                  }
                  uVar3 = uVar3 + 1;
                  iVar22 = iVar22 + 0xc08;
                  if (uVar3 == 4) {
                    return;
                  }
                } while( true );
              }
              uVar4 = *(uint *)(param_1 + 0x7f48);
              *(uint *)(param_1 + 0x7f48) = uVar4 + 1;
              *(uint *)(param_1 + 0x7f4c) = *(int *)(param_1 + 0x7f4c) + (uint)(0xfffffffe < uVar4);
            }
            printk(uVar5,param_1 + 0x1c,uVar3);
            return;
          }
          uVar10 = *(uint *)(param_1 + 0x7ef8);
          *(uint *)(param_1 + 0x7ef8) = uVar10 + 1;
          *(uint *)(param_1 + 0x7efc) = *(int *)(param_1 + 0x7efc) + (uint)(0xfffffffe < uVar10);
        }
        else {
          uVar10 = *(uint *)(param_1 + 0x7f08);
          *(uint *)(param_1 + 0x7f08) = uVar10 + 1;
          *(uint *)(param_1 + 0x7f0c) = *(int *)(param_1 + 0x7f0c) + (uint)(0xfffffffe < uVar10);
          rkcif_write_register_or(param_1,0x39,0xa0000);
          uVar8 = DAT_0001b4c4;
        }
        printk(uVar8,param_1 + 0x1c,uVar3,uVar4);
        return;
      }
    }
    else {
      uVar3 = rkcif_read_register(param_1,2);
      if (uVar3 != 0) {
        rkcif_write_register(param_1,2,uVar3);
        if ((uVar3 & 0x3c00000) != 0) {
          uVar4 = *(uint *)(param_1 + 0x7f30);
          *(uint *)(param_1 + 0x7f30) = uVar4 + 1;
          *(uint *)(param_1 + 0x7f34) = *(int *)(param_1 + 0x7f34) + (uint)(0xfffffffe < uVar4);
          rkcif_write_register_or(param_1,0,0xa0000);
          printk(DAT_0001c3a4,param_1 + 0x1c,uVar3);
        }
        uVar8 = DAT_0001c3a8;
        if ((int)(uVar3 << 0xf) < 0) {
          uVar4 = *(uint *)(param_1 + 0x7f18);
          *(uint *)(param_1 + 0x7f18) = uVar4 + 1;
          *(uint *)(param_1 + 0x7f1c) = *(int *)(param_1 + 0x7f1c) + (uint)(0xfffffffe < uVar4);
          printk(uVar8,param_1 + 0x1c,uVar3);
        }
        uVar8 = DAT_0001c3ac;
        if ((int)(uVar3 << 0xe) < 0) {
          uVar4 = *(uint *)(param_1 + 0x7f38);
          *(uint *)(param_1 + 0x7f38) = uVar4 + 1;
          *(uint *)(param_1 + 0x7f3c) = *(int *)(param_1 + 0x7f3c) + (uint)(0xfffffffe < uVar4);
          printk(uVar8,param_1 + 0x1c,uVar3);
        }
        uVar8 = DAT_0001c3b4;
        if ((uVar3 & DAT_0001c3b0) != 0) {
          uVar4 = *(uint *)(param_1 + 0x7f48);
          *(uint *)(param_1 + 0x7f48) = uVar4 + 1;
          *(uint *)(param_1 + 0x7f4c) = *(int *)(param_1 + 0x7f4c) + (uint)(0xfffffffe < uVar4);
          printk(uVar8,param_1 + 0x1c,uVar3);
        }
        iVar22 = param_1 + 1000;
        iVar6 = 4;
        do {
          if ((uVar3 & 0x300) == 0) {
            if ((uVar3 & 0xc00) != 0) {
              if ((uVar3 & 0xc00) == 0xc00) {
                printk(DAT_0001c3bc,param_1 + 0x1c);
              }
              iVar11 = 1;
              goto LAB_0001c20e;
            }
            if ((uVar3 & 0x3000) != 0) {
              if ((uVar3 & 0x3000) == 0x3000) {
                printk(DAT_0001c3c0,param_1 + 0x1c);
              }
              iVar11 = 2;
              goto LAB_0001c20e;
            }
            if ((uVar3 & 0xc000) != 0) {
              if ((uVar3 & 0xc000) == 0xc000) {
                printk(DAT_0001c3c4,param_1 + 0x1c);
              }
              iVar11 = 3;
              goto LAB_0001c20e;
            }
          }
          else {
            if ((uVar3 & 0x300) == 0x300) {
              printk(DAT_0001c3b8,param_1 + 0x1c);
            }
            iVar11 = 0;
LAB_0001c20e:
            iVar12 = iVar11 * 0xc08;
            iVar22 = iVar12 + 1000 + param_1;
            if ((*(int *)(param_1 + 0x7ee0) == 0) ||
               (*(int *)(*(int *)(param_1 + 0x7ee0) + 0x1d8) != 0)) {
              iVar13 = iVar11 * 0xc08 + param_1;
              *(int *)(iVar13 + 0xfac) = *(int *)(iVar13 + 0xfac) + 1;
            }
            uVar4 = 0xc08;
            iVar13 = iVar11 * 0xc08 + param_1;
            if (*(char *)(iVar13 + 0xfe0) == '\0') {
              if (*(int *)(iVar13 + 0x8f8) == 2) {
                *(undefined1 *)(iVar13 + 0xfed) = 1;
                if (iVar11 == 2) {
                  uVar4 = uVar3 & 0x3fff;
                  uVar3 = uVar3 & 0xffffcfff;
                  *(uint *)(param_1 + 0x2118) = uVar4 >> 0xc;
                }
                else if (iVar11 == 3) {
                  uVar4 = uVar3 & 0xffff;
                  uVar3 = uVar3 & 0xffff3fff;
                  *(uint *)(param_1 + 0x2d20) = uVar4 >> 0xe;
                }
                else {
                  if (iVar11 != 1) {
                    uVar10 = (uVar3 & 0x3ff) >> 8;
                    uVar3 = uVar3 & 0xfffffcff;
                    *(uint *)(param_1 + 0x908) = uVar10;
                  }
                  else {
                    uVar4 = (uVar3 & 0xfff) >> 10;
                    uVar3 = uVar3 & 0xfffff3ff;
                    uVar10 = 0x1510;
                  }
                  if (iVar11 == 1) {
                    *(uint *)(param_1 + uVar10) = uVar4;
                  }
                }
                if (*(int *)(iVar11 * 0xc08 + param_1 + 0xb70) != 0) {
                  rkcif_update_stream(param_1,iVar22,iVar11);
                }
                if (*(int *)(iVar11 * 0xc08 + param_1 + 0xb74) != 0) {
                  rkcif_enable_dma_capture(iVar22,0);
                }
                if (*(int *)(iVar11 * 0xc08 + param_1 + 0xb78) != 0) {
                  rkcif_stop_dma_capture(iVar22);
                  __wake_up(iVar12 + 0x8fc + param_1,3,1,0);
                }
                uVar4 = *(uint *)(param_1 + 0x7f40);
                *(uint *)(param_1 + 0x7f40) = uVar4 + 1;
                *(uint *)(param_1 + 0x7f44) =
                     *(int *)(param_1 + 0x7f44) + (uint)(0xfffffffe < uVar4);
              }
            }
            else {
              rkcif_stream_stop(iVar22);
              *(undefined1 *)(iVar13 + 0xfe0) = 0;
              __wake_up(iVar12 + 0x8fc + param_1,3,1);
            }
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if ((uVar3 & 3) != 0) {
          *(undefined1 *)(iVar22 + 0xc05) = 0;
          rkcif_deal_sof(param_1);
        }
        if (*(char *)(iVar22 + 0xbfa) != '\0') {
          rkcif_dynamic_crop(iVar22);
          return;
        }
      }
    }
  }
  return;
}



/* ===== rkcif_irq_pingpong @ 0001c5c8 size=1828 ===== */

void rkcif_irq_pingpong(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint extraout_r1;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  int local_40;
  
  if (*(int *)(param_1 + 0x34c) == 0) {
    return;
  }
  if ((*(int *)(*(int *)(param_1 + 0x34c) + 4) - 4U < 3) &&
     ((*(int *)(param_1 + 0x736c) - 5U < 2 || (*(int *)(param_1 + 0x736c) == 8)))) {
    uVar3 = rkcif_read_register(param_1,0x5b);
    uVar4 = rkcif_read_register(param_1,0x5e);
    rkcif_write_register(param_1,0x5b,uVar3);
    uVar5 = DAT_0001c88c;
    uVar1 = DAT_0001c888;
    uVar8 = DAT_0001c884;
    if ((uVar3 & DAT_0001c880) != 0) {
      uVar9 = *(uint *)(param_1 + 0x7ef8);
      *(uint *)(param_1 + 0x7ef8) = uVar9 + 1;
      *(uint *)(param_1 + 0x7efc) = *(int *)(param_1 + 0x7efc) + (uint)(0xfffffffe < uVar9);
      printk(uVar8,param_1 + 0x1c,uVar3,uVar4);
      return;
    }
    if ((int)(uVar3 << 0xc) < 0) {
      uVar4 = *(uint *)(param_1 + 0x7f00);
      *(uint *)(param_1 + 0x7f00) = uVar4 + 1;
      *(uint *)(param_1 + 0x7f04) = *(int *)(param_1 + 0x7f04) + (uint)(0xfffffffe < uVar4);
      uVar5 = uVar1;
    }
    else {
      if ((uVar3 & 0x1f0000) == 0) {
        if ((uVar3 & 3) == 3) {
          printk(DAT_0001c894,param_1 + 0x1c,DAT_0001c890);
        }
        iVar14 = 4;
        do {
          iVar6 = rkcif_csi_g_mipi_id(param_1 + 0xc,uVar3);
          if (-1 < iVar6) {
            iVar16 = iVar6 * 0xc08;
            iVar10 = param_1 + iVar16;
            iVar17 = param_1 + iVar16 + 1000;
            if ((*(char *)(iVar10 + 0xfe0) == '\0') || (*(char *)(iVar10 + 0xfe8) == '\0')) {
              if (*(int *)(iVar6 * 0xc08 + param_1 + 0x8f8) == 2) {
                switch(iVar6) {
                case 0:
                  uVar9 = uVar3 & 0x3ff;
                  uVar3 = uVar3 & 0xfffffcff;
                  *(uint *)(param_1 + 0x908) = uVar9 >> 8;
                  break;
                case 1:
                  uVar9 = uVar3 & 0xfff;
                  uVar3 = uVar3 & 0xfffff3ff;
                  *(uint *)(param_1 + 0x1510) = uVar9 >> 10;
                  break;
                case 2:
                  uVar9 = uVar3 & 0x3fff;
                  uVar3 = uVar3 & 0xffffcfff;
                  *(uint *)(param_1 + 0x2118) = uVar9 >> 0xc;
                  break;
                case 3:
                  uVar9 = uVar3 & 0xffff;
                  uVar3 = uVar3 & 0xffff3fff;
                  *(uint *)(param_1 + 0x2d20) = uVar9 >> 0xe;
                }
                if (*(char *)(iVar6 * 0xc08 + param_1 + 0xfe2) != '\0') {
                  rkcif_dynamic_crop(iVar17);
                }
                rkcif_update_stream(param_1,iVar17,iVar6);
                rkcif_detect_wake_up_mode_change(iVar17);
                rkcif_monitor_reset_event(param_1);
                if (iVar6 == 0) {
                  uVar9 = *(uint *)(param_1 + 0xb60);
                  if (((uVar3 & 3) == 0) && (1 < uVar9)) {
                    printk(DAT_0001c898,param_1 + 0x1c,DAT_0001c890,0,uVar9);
                    *(undefined4 *)(param_1 + 0xb60) = 0;
                    *(undefined1 *)(param_1 + 0xfe5) = 1;
                  }
                  else {
                    *(uint *)(param_1 + 0xb60) = uVar9 - 1;
                  }
                }
                uVar9 = *(uint *)(param_1 + 0x7f40);
                *(uint *)(param_1 + 0x7f40) = uVar9 + 1;
                *(uint *)(param_1 + 0x7f44) =
                     *(int *)(param_1 + 0x7f44) + (uint)(0xfffffffe < uVar9);
              }
            }
            else {
              rkcif_stream_stop(iVar17);
              *(undefined1 *)(iVar10 + 0xfe0) = 0;
              __wake_up(iVar16 + 0x8fc + param_1,3,1);
            }
          }
          uVar8 = DAT_0001c8a0;
          piVar2 = DAT_0001c89c;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        piVar15 = (int *)(param_1 + 0x904);
        uVar9 = 0;
        do {
          if ((3 << ((uVar9 & 0x7f) << 1) & uVar3) != 0) {
            if (uVar9 == 0) {
              rkcif_deal_sof(param_1);
            }
            else {
              disableIRQinterrupts();
              uVar18 = ktime_get();
              *piVar15 = *piVar15 + 1;
              *(undefined8 *)(piVar15 + 0x8b) = uVar18;
            }
            *(undefined1 *)((int)piVar15 + 0x6e9) = 0;
          }
          if ((1 << (uVar9 + 0x15 & 0xff) & uVar3) != 0) {
            if (*(char *)((int)piVar15 + 0x6e3) != '\0') {
              uVar12 = piVar15[0x1a7];
              piVar15[0x1a7] = uVar12 + 1;
              piVar15[0x1a8] = piVar15[0x1a8] + (uint)(0xfffffffe < uVar12);
              rkcif_line_wake_up(piVar15 + -0x147,*(byte *)(uVar9 * 0xc08 + param_1 + 1000) & 7);
              rkcif_modify_line_int(piVar15 + -0x147,0);
              *(undefined1 *)((int)piVar15 + 0x6e3) = 0;
            }
            if (0 < *piVar2) {
              printk(uVar8,param_1 + 0x1c,DAT_0001c890,uVar4 & 0x3fff);
            }
          }
          uVar9 = uVar9 + 1;
          piVar15 = piVar15 + 0x302;
        } while (uVar9 != 4);
        return;
      }
      uVar4 = *(uint *)(param_1 + 0x7f48);
      *(uint *)(param_1 + 0x7f48) = uVar4 + 1;
      *(uint *)(param_1 + 0x7f4c) = *(int *)(param_1 + 0x7f4c) + (uint)(0xfffffffe < uVar4);
    }
    printk(uVar5,param_1 + 0x1c,uVar3);
    return;
  }
  uVar3 = rkcif_read_register(param_1,2);
  uVar4 = rkcif_read_register(param_1,0x1d);
  uVar9 = rkcif_read_register(param_1,0x1f);
  uVar12 = rkcif_read_register(param_1,0x20);
  uVar7 = rkcif_read_register(param_1,0);
  rkcif_write_register(param_1,2,uVar3);
  uVar8 = DAT_0001cba8;
  if ((int)(uVar3 << 0x19) < 0) {
    uVar11 = *(uint *)(param_1 + 0x7f10);
    *(uint *)(param_1 + 0x7f10) = uVar11 + 1;
    *(uint *)(param_1 + 0x7f14) = *(int *)(param_1 + 0x7f14) + (uint)(0xfffffffe < uVar11);
    printk(uVar8,param_1 + 0x1c);
  }
  uVar8 = DAT_0001cbac;
  if ((uVar3 & 0x30) != 0) {
    uVar11 = *(uint *)(param_1 + 0x7f18);
    *(uint *)(param_1 + 0x7f18) = uVar11 + 1;
    *(uint *)(param_1 + 0x7f1c) = *(int *)(param_1 + 0x7f1c) + (uint)(0xfffffffe < uVar11);
    printk(uVar8,param_1 + 0x1c);
  }
  uVar8 = DAT_0001cbb0;
  if ((int)(uVar3 << 0x1d) < 0) {
    uVar11 = *(uint *)(param_1 + 0x7f20);
    *(uint *)(param_1 + 0x7f20) = uVar11 + 1;
    *(uint *)(param_1 + 0x7f24) = *(int *)(param_1 + 0x7f24) + (uint)(0xfffffffe < uVar11);
    printk(uVar8,param_1 + 0x1c);
  }
  uVar8 = DAT_0001cbb4;
  if ((int)(uVar3 << 0x1c) < 0) {
    uVar11 = *(uint *)(param_1 + 0x7f28);
    *(uint *)(param_1 + 0x7f28) = uVar11 + 1;
    *(uint *)(param_1 + 0x7f2c) = *(int *)(param_1 + 0x7f2c) + (uint)(0xfffffffe < uVar11);
    printk(uVar8,param_1 + 0x1c);
  }
  uVar8 = DAT_0001cbb8;
  if ((uVar3 & 0xfc) != 0) {
    uVar11 = *(uint *)(param_1 + 0x7f48);
    *(uint *)(param_1 + 0x7f48) = uVar11 + 1;
    *(uint *)(param_1 + 0x7f4c) = *(int *)(param_1 + 0x7f4c) + (uint)(0xfffffffe < uVar11);
    printk(uVar8,param_1 + 0x1c,uVar3);
  }
  if (((int)(uVar3 << 0x16) < 0) && (*(char *)(param_1 + 0xfe0) != '\0')) {
    rkcif_write_register(param_1,0,uVar7 & 0xfffffffe);
  }
  iVar14 = param_1 + 1000;
  if (5 < *(int *)(param_1 + 0x736c)) {
    local_40 = 4;
    do {
      if ((int)(uVar3 << 0x1f) < 0) {
        if ((uVar4 & 3) == 3) {
          printk(DAT_0001cd3c,param_1 + 0x1c);
        }
        uVar9 = rkcif_read_register(param_1,1);
        uVar3 = uVar3 & 0xfffffffe;
        iVar6 = 0;
        rkcif_write_register(param_1,1,uVar9 | 0x400);
        *(undefined4 *)(param_1 + 0x7ff8) = 0;
LAB_0001cc2c:
        iVar16 = iVar6 * 0xc08;
        iVar10 = param_1 + iVar16;
        iVar14 = iVar16 + 1000 + param_1;
        if (*(char *)(iVar10 + 0xfe0) == '\0') {
          if (*(int *)(iVar10 + 0x8f8) == 2) {
            if (iVar6 == 2) {
              iVar10 = 0x2118;
              uVar9 = (uVar4 & 0x3ff) >> 8;
LAB_0001cd26:
              *(uint *)(param_1 + iVar10) = uVar9;
            }
            else {
              if (iVar6 == 3) {
                iVar10 = 0x2d20;
                uVar9 = (uVar4 & 0x3fff) >> 0xc;
                goto LAB_0001cd26;
              }
              if (iVar6 == 1) {
                iVar10 = 0x1510;
                uVar9 = (uVar4 & 0x3f) >> 4;
                goto LAB_0001cd26;
              }
              *(uint *)(param_1 + 0x908) = uVar4 & 3;
            }
            if ((uVar4 >> 0x10) - 0xfffd < 2) {
              printk(DAT_0001cd4c,param_1 + 0x1c,uVar4 >> 0x10,uVar4);
              rkcif_write_register(param_1,0x1d,0);
            }
            rkcif_update_stream(param_1,iVar14,iVar6);
            uVar9 = *(uint *)(param_1 + 0x7f40);
            *(uint *)(param_1 + 0x7f40) = uVar9 + 1;
            *(uint *)(param_1 + 0x7f44) = *(int *)(param_1 + 0x7f44) + (uint)(0xfffffffe < uVar9);
          }
        }
        else {
          rkcif_stream_stop(iVar14);
          *(undefined1 *)(iVar10 + 0xfe0) = 0;
          __wake_up(iVar16 + 0x8fc + param_1,3,1);
        }
      }
      else {
        if ((int)(uVar3 << 0x14) < 0) {
          if ((uVar4 & 0x30) == 0x30) {
            printk(DAT_0001cd40,param_1 + 0x1c);
          }
          uVar3 = uVar3 & 0xfffff7ff;
          iVar6 = 1;
          goto LAB_0001cc2c;
        }
        if ((int)(uVar3 << 0x13) < 0) {
          if ((uVar4 & 0x300) == 0x300) {
            printk(DAT_0001cd44,param_1 + 0x1c);
          }
          uVar3 = uVar3 & 0xffffefff;
          iVar6 = 2;
          goto LAB_0001cc2c;
        }
        if ((int)(uVar3 << 0x12) < 0) {
          if ((uVar4 & 0x3000) == 0x3000) {
            printk(DAT_0001cd48,param_1 + 0x1c);
          }
          uVar3 = uVar3 & 0xffffdfff;
          iVar6 = 3;
          goto LAB_0001cc2c;
        }
      }
      local_40 = local_40 + -1;
    } while (local_40 != 0);
    goto LAB_0001cb3e;
  }
  if (-1 < (int)(uVar3 << 0x1f)) goto LAB_0001cb3e;
  uVar7 = rkcif_read_register(param_1,1);
  rkcif_write_register(param_1,1,uVar7 | 0x400);
  *(undefined4 *)(param_1 + 0x7ff8) = 0;
  if (*(char *)(param_1 + 0xfe0) != '\0') {
    rkcif_stream_stop(iVar14);
    iVar14 = *(int *)(param_1 + 0x3ec);
    *(undefined1 *)(param_1 + 0xfe0) = 0;
    iVar6 = *(int *)(iVar14 + 0x7ed4);
    disableIRQinterrupts();
    if ((*(int *)(*(int *)(iVar14 + 0x34c) + 4) == 2) && (*(int *)(iVar6 + 0x194) != 0)) {
      uVar8 = get_dvp_reg_index_of_frm0_y_addr(*(byte *)(param_1 + 1000) & 7);
      rkcif_write_register(iVar14,uVar8,*(undefined4 *)(iVar6 + 0x188));
      uVar8 = get_dvp_reg_index_of_frm0_uv_addr(*(byte *)(param_1 + 1000) & 7);
      rkcif_write_register(iVar14,uVar8,*(undefined4 *)(iVar6 + 0x188));
      uVar3 = *(byte *)(param_1 + 1000) & 7;
      if (uVar3 < 4) {
        uVar9 = uVar3 + DAT_0001cbbc;
        uVar4 = extraout_r1;
      }
      else {
        uVar4 = 7;
        uVar9 = uVar3;
      }
      if (uVar3 < 4) {
        uVar4 = (uint)*(byte *)(uVar9 + 0x1e);
      }
      rkcif_write_register(iVar14,uVar4,*(undefined4 *)(iVar6 + 0x188));
      uVar8 = get_dvp_reg_index_of_frm1_uv_addr(*(byte *)(param_1 + 1000) & 7);
      rkcif_write_register(iVar14,uVar8,*(undefined4 *)(iVar6 + 0x188));
    }
    __wake_up(param_1 + 0x8fc,3,1,0);
    return;
  }
  if ((uVar4 == DAT_0001cbc0) || (uVar4 == DAT_0001cbc0 + 0x10000)) {
    printk(DAT_0001cbc4,param_1 + 0x1c,uVar4 >> 0x10,uVar4);
    rkcif_write_register(param_1,0x1d,0);
  }
  if ((*(uint *)(param_1 + 0x968) != (uVar9 & 0x1fff)) || ((uVar4 & 3) == 0)) {
    *(undefined4 *)(param_1 + 0x7ff8) = 1;
    printk(DAT_0001cbc8,param_1 + 0x1c,uVar3,uVar4,uVar12 & 0x1fff,uVar9 & 0x1fff);
    return;
  }
  if ((int)(uVar4 << 0x1f) < 0) {
    iVar6 = *(int *)(param_1 + 0x91c);
    uVar8 = 1;
LAB_0001cae4:
    *(undefined4 *)(param_1 + 0x908) = uVar8;
  }
  else {
    iVar6 = 0;
    if ((uVar4 & 2) != 0) {
      iVar6 = *(int *)(param_1 + 0x920);
      uVar8 = 2;
      goto LAB_0001cae4;
    }
  }
  disableIRQinterrupts();
  if (*(int *)(param_1 + 0x908) << 0x1f < 0) {
    uVar18 = ktime_get();
    puVar13 = (undefined8 *)(param_1 + 0xa58);
LAB_0001cafe:
    *puVar13 = uVar18;
  }
  else if (*(int *)(param_1 + 0x908) << 0x1e < 0) {
    uVar18 = ktime_get();
    puVar13 = (undefined8 *)(param_1 + 0xa60);
    goto LAB_0001cafe;
  }
  iVar10 = rkcif_assign_new_buffer_oneframe(iVar14,0);
  if ((iVar6 != 0) && (iVar10 == 0)) {
    *(undefined4 *)(iVar6 + 0x170) = *(undefined4 *)(param_1 + 0x904);
    rkcif_vb_done_tasklet(iVar14,iVar6);
  }
  *(int *)(param_1 + 0x904) = *(int *)(param_1 + 0x904) + 1;
  uVar4 = *(uint *)(param_1 + 0x7f40);
  *(uint *)(param_1 + 0x7f40) = uVar4 + 1;
  *(uint *)(param_1 + 0x7f44) = *(int *)(param_1 + 0x7f44) + (uint)(0xfffffffe < uVar4);
LAB_0001cb3e:
  if (((uVar3 & 0x401) == 0x400) && (*(int *)(param_1 + 0x7ff8) == 0 && (uVar3 & 0x3fc) == 0)) {
    rkcif_deal_sof(param_1);
    uVar3 = rkcif_read_register(param_1,1);
    rkcif_write_register(param_1,1,uVar3 & 0xfffffbff);
    *(undefined4 *)(param_1 + 0x7ff8) = 1;
  }
  if (*(char *)(iVar14 + 0xbfa) == '\0') {
    return;
  }
  rkcif_dynamic_crop(iVar14);
  return;
}



/* ===== rkcif_irq_lite_lvds @ 0001cd50 size=348 ===== */

void rkcif_irq_lite_lvds(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(int *)(*(int *)(param_1 + 0x34c) + 4) == 4) && (*(int *)(param_1 + 0x736c) == 7)) {
    uVar1 = rkcif_read_register(param_1,0x5b);
    uVar2 = rkcif_read_register(param_1,0x5c);
    rkcif_write_register(param_1,0x5b,uVar1);
    if ((uVar1 & DAT_0001ceb0) != 0) {
      printk(DAT_0001ceb4,param_1 + 0x1c,uVar1,uVar2);
      return;
    }
    uVar2 = DAT_0001ceb8;
    if (((int)(uVar1 << 0xc) < 0) || (uVar2 = DAT_0001cebc, (uVar1 & 0x1f0000) != 0)) {
      printk(uVar2,param_1 + 0x1c,uVar1);
      return;
    }
    iVar6 = 4;
    do {
      iVar3 = rkcif_csi_g_mipi_id(param_1 + 0xc,uVar1);
      if (-1 < iVar3) {
        iVar5 = iVar3 * 0xc08;
        iVar7 = param_1 + iVar5;
        if (*(char *)(iVar7 + 0xfe0) == '\0') {
          if (*(int *)(iVar7 + 0x8f8) == 2) {
            switch(iVar3) {
            case 0:
              uVar4 = uVar1 & 0x3ff;
              uVar1 = uVar1 & 0xfffffcff;
              *(uint *)(param_1 + 0x908) = uVar4 >> 8;
              break;
            case 1:
              uVar4 = uVar1 & 0xfff;
              uVar1 = uVar1 & 0xfffff3ff;
              *(uint *)(param_1 + 0x1510) = uVar4 >> 10;
              break;
            case 2:
              uVar4 = uVar1 & 0x3fff;
              uVar1 = uVar1 & 0xffffcfff;
              *(uint *)(param_1 + 0x2118) = uVar4 >> 0xc;
              break;
            case 3:
              uVar4 = uVar1 & 0xffff;
              uVar1 = uVar1 & 0xffff3fff;
              *(uint *)(param_1 + 0x2d20) = uVar4 >> 0xe;
            }
            rkcif_update_stream(param_1);
            rkcif_monitor_reset_event(param_1);
            uVar4 = *(uint *)(param_1 + 0x7f40);
            *(uint *)(param_1 + 0x7f40) = uVar4 + 1;
            *(uint *)(param_1 + 0x7f44) = *(int *)(param_1 + 0x7f44) + (uint)(0xfffffffe < uVar4);
          }
        }
        else {
          rkcif_stream_stop(iVar5 + 1000 + param_1);
          *(undefined1 *)(iVar7 + 0xfe0) = 0;
          __wake_up(iVar5 + 0x8fc + param_1,3,1);
        }
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (((int)(uVar1 << 0x1f) < 0) && (param_1 != -0x7b38)) {
      rkcif_lvds_event_inc_sof_part_7(param_1);
    }
    if (((int)(uVar1 << 0x1e) < 0) && (param_1 != -0x7b38)) {
      rkcif_lvds_event_inc_sof_part_7(param_1);
      return;
    }
  }
  return;
}



/* ===== rkcif_csi2_s_power @ 0001cec0 size=4 ===== */

undefined4 rkcif_csi2_s_power(void)

{
  return 0;
}



/* ===== rkcif_csi2_ioctl @ 0001cec4 size=18 ===== */

undefined4 rkcif_csi2_ioctl(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001cedc;
  if (param_2 == DAT_0001ced8) {
    *(undefined4 *)(param_1 + 0x344) = *param_3;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== csi2_notifier_unbind @ 0001cee0 size=50 ===== */

void csi2_notifier_unbind(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0xc4) <= iVar1) {
      return;
    }
    iVar2 = iVar1 * 0x10;
    if (param_2 == *(int *)(param_1 + 0xa0 + iVar2)) break;
    iVar1 = iVar1 + 1;
  }
  if (param_1 + -600 + iVar2 + 0x2f8 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + -600 + iVar2 + 0x2f8) = 0;
  return;
}



/* ===== csi2_remove @ 0001cf12 size=12 ===== */

undefined4 csi2_remove(int param_1)

{
  v4l2_async_unregister_subdev(*(undefined4 *)(param_1 + 0x50));
  return 0;
}



/* ===== csi2_parse_endpoint @ 0001cf1e size=36 ===== */

undefined4 csi2_parse_endpoint(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x40);
  if (*param_2 == 0) {
    iVar2 = param_2[9];
    iVar3 = param_2[10];
    iVar4 = param_2[0xb];
    *(int *)(iVar5 + 0x284) = param_2[8];
    *(int *)(iVar5 + 0x288) = iVar2;
    *(int *)(iVar5 + 0x28c) = iVar3;
    *(int *)(iVar5 + 0x290) = iVar4;
    uVar1 = 0;
  }
  else {
    _dev_err(param_1,DAT_0001cf44,param_3,param_4,param_4);
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== csi2_find_err_vc @ 0001cf48 size=44 ===== */

void csi2_find_err_vc(int param_1,char *param_2,undefined4 param_3)

{
  char *__format;
  uint uVar1;
  char *pcVar2;
  
  __format = DAT_0001cf74;
  uVar1 = 0;
  *param_2 = '\0';
  pcVar2 = param_2;
  do {
    if ((param_1 >> (uVar1 & 0xff)) << 0x1f < 0) {
      snprintf(param_2,0xc,__format,param_2,uVar1,pcVar2,param_3);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 4);
  return;
}



/* ===== rk_csirx_irq2_handler @ 0001cf78 size=210 ===== */

void rk_csirx_irq2_handler(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  char acStack_9c [128];
  int local_1c;
  
  piVar1 = DAT_0001d04c;
  iVar3 = *(int *)(param_2 + 0x40);
  local_1c = *DAT_0001d04c;
  memset(acStack_9c,0,0x80);
  local_a8 = 0;
  local_a4 = 0;
  uStack_a0 = 0;
  uVar2 = *(uint *)(*(int *)(iVar3 + 0x250) + 0x24);
  DataSynchronizationBarrier(0xf);
  if (uVar2 != 0) {
    if ((uVar2 & 0xf) != 0) {
      csi2_find_err_vc(uVar2 & 0xf,&local_a8);
      snprintf(acStack_9c,0x80,DAT_0001d050,acStack_9c,&local_a8);
    }
    if ((uVar2 & 0xf0) != 0) {
      csi2_find_err_vc((uVar2 & 0xff) >> 4,&local_a8);
      snprintf(acStack_9c,0x80,DAT_0001d054,acStack_9c,&local_a8);
    }
    if ((uVar2 & 0xf00) != 0) {
      csi2_find_err_vc((uVar2 & 0xfff) >> 8,&local_a8);
      snprintf(acStack_9c,0x80,DAT_0001d058,acStack_9c,&local_a8);
    }
    if ((uVar2 & 0xf000) != 0) {
      csi2_find_err_vc((uVar2 & 0xffff) >> 0xc,&local_a8);
      snprintf(acStack_9c,0x80,DAT_0001d05c,acStack_9c,&local_a8);
    }
    if ((int)(uVar2 << 7) < 0) {
      snprintf(acStack_9c,0x80,DAT_0001d060);
    }
    printk(DAT_0001d064,*(undefined4 *)(iVar3 + 0x348),uVar2,acStack_9c);
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}



/* ===== rk_csirx_irq1_handler @ 0001d068 size=494 ===== */

void rk_csirx_irq1_handler(undefined4 param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  char *__format;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  char acStack_9c [128];
  int local_1c;
  
  piVar2 = DAT_0001d258;
  iVar6 = *(int *)(param_2 + 0x40);
  bVar1 = false;
  local_1c = *DAT_0001d258;
  memset(acStack_9c,0,0x80);
  local_a8 = 0;
  local_a4 = 0;
  uStack_a0 = 0;
  uVar7 = *(uint *)(*(int *)(iVar6 + 0x250) + 0x20);
  DataSynchronizationBarrier(0xf);
  if (uVar7 == 0) goto LAB_0001d1c4;
  uVar4 = uVar7 & 0xf;
  if (uVar4 == 0) {
LAB_0001d0a6:
    bVar1 = false;
  }
  else {
    uVar5 = *(int *)(iVar6 + 800) + 1;
    *(uint *)(iVar6 + 800) = uVar5;
    if (**(int **)(iVar6 + 0x314) == 6) {
      if (uVar5 < *(uint *)(iVar6 + 0x334)) {
        csi2_find_err_vc(uVar4,&local_a8);
        snprintf(acStack_9c,0x80,DAT_0001d27c,acStack_9c,&local_a8);
      }
      else {
        if (*(char *)(iVar6 + 0x2f3) == '\0') goto LAB_0001d0a6;
        csi2_find_err_vc(uVar4,&local_a8);
        snprintf(acStack_9c,0x80,DAT_0001d27c,acStack_9c,&local_a8);
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(*(int *)(iVar6 + 0x250) + 0x28) = 0xf;
        *(undefined1 *)(iVar6 + 0x2f3) = 0;
      }
    }
    else {
      bVar1 = true;
      csi2_find_err_vc(uVar4,&local_a8);
      snprintf(acStack_9c,0x80,DAT_0001d27c,acStack_9c,&local_a8);
    }
  }
  if ((uVar7 & 0xf0) != 0) {
    *(int *)(iVar6 + 0x324) = *(int *)(iVar6 + 0x324) + 1;
    csi2_find_err_vc((uVar7 & 0xff) >> 4,&local_a8);
    snprintf(acStack_9c,0x80,DAT_0001d25c,acStack_9c,&local_a8);
    if (**(int **)(iVar6 + 0x314) < 6) {
      bVar1 = true;
    }
  }
  if ((uVar7 & 0xf00) != 0) {
    *(int *)(iVar6 + 0x328) = *(int *)(iVar6 + 0x328) + 1;
    csi2_find_err_vc((uVar7 & 0xfff) >> 8,&local_a8);
    snprintf(acStack_9c,0x80,DAT_0001d260,acStack_9c,&local_a8);
  }
  if ((uVar7 & 0xf000) != 0) {
    bVar1 = true;
    *(int *)(iVar6 + 0x32c) = *(int *)(iVar6 + 0x32c) + 1;
    csi2_find_err_vc((uVar7 & 0xffff) >> 0xc,&local_a8);
    snprintf(acStack_9c,0x80,DAT_0001d264,acStack_9c,&local_a8);
  }
  if ((uVar7 & 0xf000000) != 0) {
    bVar1 = true;
    *(int *)(iVar6 + 0x330) = *(int *)(iVar6 + 0x330) + 1;
    csi2_find_err_vc((uVar7 & 0xfffffff) >> 0x18,&local_a8);
    snprintf(acStack_9c,0x80,DAT_0001d268,acStack_9c,&local_a8);
  }
  __format = DAT_0001d26c;
  if ((uVar7 & 0x10000000) != 0) {
    bVar1 = true;
    *(int *)(iVar6 + 0x330) = *(int *)(iVar6 + 0x330) + 1;
    snprintf(acStack_9c,0x80,__format);
  }
  if ((uVar7 & 0xf0000) != 0) {
    csi2_find_err_vc((uVar7 & 0xfffff) >> 0x10,&local_a8);
    snprintf(acStack_9c,0x80,DAT_0001d270,acStack_9c,&local_a8);
  }
  printk(DAT_0001d274,*(undefined4 *)(iVar6 + 0x348),uVar7,acStack_9c);
  uVar3 = DAT_0001d278;
  if (bVar1) {
    uVar7 = *(int *)(iVar6 + 0x334) + 1;
    *(uint *)(iVar6 + 0x334) = uVar7;
    atomic_notifier_call_chain
              (uVar3,(*(uint *)(iVar6 + 0x324) & 0xff) << 8 | uVar7 & 0xff,iVar6 + 0x344);
  }
LAB_0001d1c4:
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}



/* ===== csi2_link_setup @ 0001d280 size=98 ===== */

uint csi2_link_setup(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  mutex_lock(param_1 + 0x294);
  param_4 = param_4 & 1;
  if (*(int *)(param_2 + 0x1c) << 0x1e < 0) {
    iVar1 = (*(ushort *)(param_2 + 0x14) - 1) + param_1;
    if (param_4 == 0) {
      *(undefined1 *)(iVar1 + 0x2e8) = 0;
      goto LAB_0001d2b6;
    }
    if (*(char *)(iVar1 + 0x2e8) == '\0') {
      *(undefined1 *)(iVar1 + 0x2e8) = 1;
      param_4 = 0;
      goto LAB_0001d2b6;
    }
  }
  else {
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      goto LAB_0001d2b6;
    }
    if (*(int *)(param_1 + 0x2e4) == 0) {
      *(undefined4 *)(param_1 + 0x2e4) = uVar2;
      param_4 = 0;
      goto LAB_0001d2b6;
    }
  }
  param_4 = 0xfffffff0;
LAB_0001d2b6:
  mutex_unlock(param_1 + 0x294);
  return param_4;
}



/* ===== get_remote_sensor @ 0001d2e2 size=40 ===== */

undefined4 get_remote_sensor(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  iVar1 = media_entity_remote_pad(uVar2);
  if (iVar1 == 0) {
    printk(DAT_0001d30c,param_1 + 0x74);
    uVar2 = 0;
  }
  else {
    iVar1 = media_entity_remote_pad(uVar2);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  return uVar2;
}



/* ===== csi2_g_mbus_config @ 0001d310 size=88 ===== */

undefined4 csi2_g_mbus_config(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  
  iVar1 = get_remote_sensor();
  if (((iVar1 != 0) && (iVar3 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c), iVar3 != 0)) &&
     (pcVar4 = *(code **)(iVar3 + 0x3c), pcVar4 != (code *)0x0)) {
    if ((*(int *)(DAT_0001d368 + 0x1c) == 0) ||
       (pcVar5 = *(code **)(*(int *)(DAT_0001d368 + 0x1c) + 0x3c), pcVar5 == (code *)0x0)) {
      iVar1 = (*pcVar4)(iVar1,0,param_3,pcVar4,param_4);
    }
    else {
      iVar1 = (*pcVar5)(iVar1,0,param_3);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  *param_3 = 5;
  uVar2 = *(uint *)(param_1 + 0x284);
  param_3[1] = uVar2;
  param_3[1] = 1 << (*(byte *)(param_1 + 0x28d) - 1 & 0xff) | uVar2;
  return 0;
}



/* ===== rkcif_csi2_subscribe_event @ 0001d36c size=32 ===== */

undefined4 rkcif_csi2_subscribe_event(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((*param_3 != 4) && (*param_3 != 0x1001)) {
    return 0xffffffea;
  }
  uVar1 = v4l2_event_subscribe(param_2,param_3,4,0);
  return uVar1;
}



/* ===== csi2_notifier_bound @ 0001d38c size=156 ===== */

int csi2_notifier_bound(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(param_1 + -600);
  iVar2 = *(int *)(param_1 + 0xc4);
  if (iVar2 == 2) {
    iVar4 = -0x10;
    printk(DAT_0001d42c,param_1 + -0x1e0,DAT_0001d428);
  }
  else {
    puVar3 = puVar5 + iVar2 * 4;
    *(int *)(param_1 + 0xc4) = iVar2 + 1;
    puVar3[0xbe] = param_2;
    for (uVar1 = 0; uVar1 < *(ushort *)(param_2 + 0x20); uVar1 = uVar1 + 1) {
      puVar3 = (undefined4 *)(*(int *)(*(int *)(param_2 + 0x2c) + uVar1 * 0x20 + 0x1c) << 0x1e);
      if ((int)puVar3 < 0) goto LAB_0001d3ec;
    }
    if (*(ushort *)(param_2 + 0x20) == uVar1) {
      iVar4 = -6;
      _dev_err(*puVar5,DAT_0001d430,param_2 + 0x74,puVar3,param_1);
    }
    else {
LAB_0001d3ec:
      iVar4 = media_create_pad_link(param_2,uVar1 & 0xffff,param_1 + -0x254,0,0,param_2,param_3);
      if (iVar4 == 0) {
        iVar4 = media_entity_setup_link(*(int *)(param_1 + -0x224) + -0x10,1);
        if (iVar4 == 0) {
          return 0;
        }
        param_2 = puVar5[iVar2 * 4 + 0xbe];
      }
      _dev_err(*puVar5,DAT_0001d434,param_2 + 0x74);
    }
  }
  return iVar4;
}



/* ===== csi2_set_selection @ 0001d438 size=94 ===== */

int csi2_set_selection(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  code *pcVar8;
  
  iVar1 = get_remote_sensor();
  if (iVar1 == 0) {
    iVar2 = -0x13;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    iVar2 = DAT_0001d49c;
    if ((iVar5 != 0) && (pcVar6 = *(code **)(iVar5 + 0x1c), pcVar6 != (code *)0x0)) {
      if ((*(int *)(DAT_0001d498 + 0x1c) == 0) ||
         (pcVar8 = *(code **)(*(int *)(DAT_0001d498 + 0x1c) + 0x1c), pcVar8 == (code *)0x0)) {
        iVar2 = (*pcVar6)(iVar1,param_2,param_3);
      }
      else {
        iVar2 = (*pcVar8)(iVar1,param_2,param_3);
      }
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(param_3 + 0x14);
        uVar4 = *(undefined4 *)(param_3 + 0x18);
        uVar7 = *(undefined4 *)(param_3 + 0x1c);
        *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_3 + 0x10);
        *(undefined4 *)(param_1 + 0x2d4) = uVar3;
        *(undefined4 *)(param_1 + 0x2d8) = uVar4;
        *(undefined4 *)(param_1 + 0x2dc) = uVar7;
      }
    }
  }
  return iVar2;
}



/* ===== csi2_get_set_fmt @ 0001d4a0 size=90 ===== */

int csi2_get_set_fmt(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  code *pcVar8;
  
  iVar1 = get_remote_sensor();
  if (iVar1 == 0) {
    iVar2 = -0x13;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    iVar2 = DAT_0001d500;
    if ((iVar5 != 0) && (pcVar6 = *(code **)(iVar5 + 0x10), pcVar6 != (code *)0x0)) {
      if ((*(int *)(DAT_0001d4fc + 0x1c) == 0) ||
         (pcVar8 = *(code **)(*(int *)(DAT_0001d4fc + 0x1c) + 0x10), pcVar8 == (code *)0x0)) {
        iVar2 = (*pcVar6)(iVar1,0,param_3,pcVar6,param_4);
      }
      else {
        iVar2 = (*pcVar8)(iVar1,0,param_3);
      }
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(param_3 + 0xc);
        uVar4 = *(undefined4 *)(param_3 + 0x10);
        uVar7 = *(undefined4 *)(param_3 + 0x14);
        *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(param_1 + 0x2a4) = uVar3;
        *(undefined4 *)(param_1 + 0x2a8) = uVar4;
        *(undefined4 *)(param_1 + 0x2ac) = uVar7;
        uVar3 = *(undefined4 *)(param_3 + 0x1c);
        uVar4 = *(undefined4 *)(param_3 + 0x20);
        uVar7 = *(undefined4 *)(param_3 + 0x24);
        *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_3 + 0x18);
        *(undefined4 *)(param_1 + 0x2b4) = uVar3;
        *(undefined4 *)(param_1 + 0x2b8) = uVar4;
        *(undefined4 *)(param_1 + 700) = uVar7;
        uVar3 = *(undefined4 *)(param_3 + 0x2c);
        uVar4 = *(undefined4 *)(param_3 + 0x30);
        uVar7 = *(undefined4 *)(param_3 + 0x34);
        *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_3 + 0x28);
        *(undefined4 *)(param_1 + 0x2c4) = uVar3;
        *(undefined4 *)(param_1 + 0x2c8) = uVar4;
        *(undefined4 *)(param_1 + 0x2cc) = uVar7;
      }
    }
  }
  return iVar2;
}



/* ===== csi2_get_selection @ 0001d504 size=330 ===== */

undefined4 csi2_get_selection(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar1 = get_remote_sensor();
  if (param_3 == (int *)0x0) {
    if (0 < *(int *)(DAT_0001d650 + 4)) {
      printk(DAT_0001d654,param_1 + 0x74);
    }
    return 0xffffffea;
  }
  uVar2 = param_3[1];
  if (4 < uVar2) {
    if (*(int *)(DAT_0001d650 + 4) < 1) {
      return 0xffffffea;
    }
    printk(DAT_0001d658,param_1 + 0x74);
    return 0xffffffea;
  }
  if (param_3[2] == 0) {
    if (*param_3 == 0) {
      piVar7 = (int *)(param_2 + 0x30);
    }
    else {
      piVar7 = (int *)(param_1 + 0x2d0);
    }
    iVar1 = piVar7[1];
    iVar3 = piVar7[2];
    iVar4 = piVar7[3];
    param_3[4] = *piVar7;
    param_3[5] = iVar1;
    param_3[6] = iVar3;
    param_3[7] = iVar4;
  }
  else {
    if (param_3[2] != 2) {
      return 0xffffffea;
    }
    piVar7 = param_3 + 4;
    if (*param_3 != 1) {
      if (*(ushort *)(param_1 + 0x20) <= uVar2) {
        uVar2 = 0;
      }
      param_2 = uVar2 * 0x50 + param_2;
      iVar1 = *(int *)(param_2 + 0x34);
      iVar3 = *(int *)(param_2 + 0x38);
      iVar4 = *(int *)(param_2 + 0x3c);
      *piVar7 = *(int *)(param_2 + 0x30);
      param_3[5] = iVar1;
      param_3[6] = iVar3;
      param_3[7] = iVar4;
      return 0;
    }
    param_3[1] = 0;
    if (((iVar1 != 0) && (iVar3 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c), iVar3 != 0)) &&
       (pcVar5 = *(code **)(iVar3 + 0x18), pcVar5 != (code *)0x0)) {
      if ((*(int *)(DAT_0001d65c + 0x1c) == 0) ||
         (pcVar6 = *(code **)(*(int *)(DAT_0001d65c + 0x1c) + 0x18), pcVar6 == (code *)0x0)) {
        iVar3 = (*pcVar5)(iVar1,param_2,param_3);
      }
      else {
        iVar3 = (*pcVar6)(iVar1,param_2,param_3);
      }
      if (iVar3 == 0) goto LAB_0001d5a2;
    }
    local_78 = 1;
    uStack_74 = 0;
    if (((iVar1 != 0) && (iVar3 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c), iVar3 != 0)) &&
       (pcVar5 = *(code **)(iVar3 + 0x10), pcVar5 != (code *)0x0)) {
      if ((*(int *)(DAT_0001d65c + 0x1c) == 0) ||
         (pcVar6 = *(code **)(*(int *)(DAT_0001d65c + 0x1c) + 0x10), pcVar6 == (code *)0x0)) {
        iVar1 = (*pcVar5)(iVar1,0,&local_78);
      }
      else {
        iVar1 = (*pcVar6)(iVar1,0,&local_78);
      }
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x2a0) = local_70;
        *(undefined4 *)(param_1 + 0x2a4) = uStack_6c;
        *(undefined4 *)(param_1 + 0x2a8) = uStack_68;
        *(undefined4 *)(param_1 + 0x2ac) = uStack_64;
        *(undefined4 *)(param_1 + 0x2b0) = local_60;
        *(undefined4 *)(param_1 + 0x2b4) = uStack_5c;
        *(undefined4 *)(param_1 + 0x2b8) = uStack_58;
        *(undefined4 *)(param_1 + 700) = uStack_54;
        *(undefined4 *)(param_1 + 0x2c0) = local_50;
        *(undefined4 *)(param_1 + 0x2c4) = uStack_4c;
        *(undefined4 *)(param_1 + 0x2c8) = uStack_48;
        *(undefined4 *)(param_1 + 0x2cc) = uStack_44;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[6] = *(int *)(param_1 + 0x2a0);
        param_3[7] = *(int *)(param_1 + 0x2a4);
LAB_0001d5a2:
        iVar1 = param_3[5];
        iVar3 = param_3[6];
        iVar4 = param_3[7];
        *(int *)(param_1 + 0x2d0) = *piVar7;
        *(int *)(param_1 + 0x2d4) = iVar1;
        *(int *)(param_1 + 0x2d8) = iVar3;
        *(int *)(param_1 + 0x2dc) = iVar4;
        return 0;
      }
    }
    iVar1 = *(int *)(param_1 + 0x2d4);
    iVar3 = *(int *)(param_1 + 0x2d8);
    iVar4 = *(int *)(param_1 + 0x2dc);
    *piVar7 = *(int *)(param_1 + 0x2d0);
    param_3[5] = iVar1;
    param_3[6] = iVar3;
    param_3[7] = iVar4;
  }
  return 0;
}



/* ===== csi2_probe @ 0001d660 size=652 ===== */

uint csi2_probe(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  piVar5 = *(int **)(param_1 + 0x174);
  uVar1 = of_match_node(DAT_0001d8ec,piVar5,param_3,param_4,param_1,param_2,param_3,param_4);
  if (uVar1 < 0xfffff001) {
    iVar4 = param_1 + 0x10;
    iVar7 = *(int *)(uVar1 + 0xc0);
    piVar2 = (int *)devm_kmalloc(iVar4,0x350,0xdc0);
    if (piVar2 == (int *)0x0) {
      uVar1 = 0xfffffff4;
    }
    else {
      piVar2[0xc6] = iVar7;
      piVar8 = piVar2 + 1;
      *piVar2 = iVar4;
      uVar3 = DAT_0001d8f0;
      piVar6 = piVar2 + 0x1e;
      piVar2[0xd3] = *piVar5;
      v4l2_subdev_init(piVar8,uVar3);
      iVar7 = DAT_0001d8f4;
      piVar2[0x27] = iVar4;
      piVar2[0x2a] = iVar4;
      piVar2[0xf] = iVar7;
      uVar3 = DAT_0001d8fc;
      piVar2[0x17] = DAT_0001d8f8;
      piVar2[0x19] = piVar2[0x19] | 0xc;
      iVar7 = strscpy(piVar6,uVar3,0x20);
      if (iVar7 < 0) {
        printk(DAT_0001d900,piVar6);
      }
      *(int **)(param_1 + 0x50) = piVar8;
      iVar7 = devm_clk_bulk_get_all(iVar4,piVar2 + 0x92);
      piVar2[0x93] = iVar7;
      uVar3 = DAT_0001d904;
      if (iVar7 < 0) {
        piVar2[0x93] = 0;
        _dev_err(iVar4,uVar3);
      }
      uVar1 = devm_reset_control_array_get(iVar4,0,1);
      piVar2[0x94] = uVar1;
      if (0xfffff000 < uVar1) {
        if (uVar1 != 0xfffffdfb) {
          _dev_err(iVar4,DAT_0001d908);
        }
        piVar2[0x94] = 0;
      }
      piVar5 = (int *)platform_get_resource(param_1,0x200,0);
      uVar1 = devm_ioremap_resource(iVar4,piVar5);
      piVar2[0x95] = uVar1;
      if (0xfffff000 < uVar1) {
        iVar9 = *piVar5;
        iVar7 = piVar5[1];
        _dev_warn(iVar4,DAT_0001d90c);
        uVar1 = devm_ioremap(iVar4,iVar9,(iVar7 + 1) - iVar9);
        piVar2[0x95] = uVar1;
        if (0xfffff000 < uVar1) {
          _dev_err(iVar4,DAT_0001d910);
          return piVar2[0x95];
        }
      }
      iVar7 = platform_get_irq_byname(param_1,DAT_0001d914);
      if (iVar7 < 1) {
        printk(DAT_0001d940,piVar6);
      }
      else {
        uVar3 = dev_driver_string(iVar4);
        iVar9 = devm_request_threaded_irq(iVar4,iVar7,DAT_0001d918,0,0,uVar3,iVar4);
        if (iVar9 < 0) {
          printk(DAT_0001d91c,piVar6);
        }
        piVar2[0xcf] = iVar7;
      }
      iVar7 = platform_get_irq_byname(param_1,DAT_0001d920);
      if (iVar7 < 1) {
        printk(DAT_0001d944,piVar6);
      }
      else {
        uVar3 = dev_driver_string(iVar4);
        iVar4 = devm_request_threaded_irq(iVar4,iVar7,DAT_0001d924,0,0,uVar3,iVar4);
        if (iVar4 < 0) {
          printk(DAT_0001d928,piVar6);
        }
        piVar2[0xd0] = iVar7;
      }
      __mutex_init(piVar2 + 0xa6,DAT_0001d930,DAT_0001d92c);
      uVar1 = *(uint *)(piVar2[0xc6] + 4);
      iVar4 = 0;
      while (iVar4 < (int)uVar1) {
        if (iVar4 == 0) {
          iVar7 = 1;
        }
        else {
          iVar7 = 2;
        }
        piVar2[iVar4 * 8 + 0x39] = iVar7;
        iVar4 = iVar4 + 1;
      }
      piVar2[0x41] = 6;
      piVar2[0xb5] = 0;
      piVar2[0xb6] = 0;
      piVar2[0x39] = 5;
      piVar2[0xd2] = 0;
      piVar2[0xab] = 0x2006;
      piVar2[0xac] = 1;
      piVar2[0xa9] = 0x280;
      piVar2[0xaa] = 0x1e0;
      piVar2[0xb7] = 0x280;
      piVar2[0xb8] = 0x1e0;
      uVar1 = media_entity_pads_init(piVar8,uVar1 & 0xffff,piVar2 + 0x32);
      if (-1 < (int)uVar1) {
        piVar5 = piVar2 + 0x96;
        v4l2_async_notifier_init(piVar5);
        uVar1 = v4l2_async_notifier_parse_fwnode_endpoints_by_port
                          (*piVar2,piVar5,0x1c,0,DAT_0001d934);
        iVar4 = DAT_0001d938;
        if (-1 < (int)uVar1) {
          piVar2[0x30] = (int)piVar5;
          piVar2[0x96] = iVar4;
          uVar1 = v4l2_async_subdev_notifier_register(piVar8,piVar5);
          if (uVar1 == 0) {
            uVar1 = v4l2_async_register_subdev(piVar8);
            if (uVar1 == 0) {
              printk(DAT_0001d948,piVar6,piVar2[0x1a] + 0x10);
            }
          }
          else {
            printk(DAT_0001d93c,piVar6,uVar1);
            v4l2_async_notifier_cleanup(piVar5);
          }
        }
      }
    }
  }
  return uVar1;
}



/* ===== csi2_s_stream @ 0001d94c size=782 ===== */

int csi2_s_stream(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined1 uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int local_2c;
  int local_28;
  uint local_24;
  
  mutex_lock(param_1 + 0x294);
  iVar4 = *(int *)(param_1 + 0x2e4) + 0x74;
  uVar9 = DAT_0001db94;
  if (param_2 != 0) {
    uVar9 = DAT_0001db90;
  }
  _dev_err(*(undefined4 *)(param_1 + -4),DAT_0001db98,uVar9,*(int *)(param_1 + 0x2e4),iVar4);
  if (*(uint *)(param_1 + 0x2e0) == (uint)(param_2 == 0)) {
    iVar8 = param_1 + -4;
    uVar9 = DAT_0001db9c;
    if (param_2 == 0) {
      uVar9 = DAT_0001dba0;
    }
    _dev_err(*(undefined4 *)(param_1 + -4),DAT_0001dba4,uVar9,DAT_0001dba0,iVar4);
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x31c) = 0;
      csi2_hw_do_reset(iVar8);
      uVar10 = *(undefined4 *)(param_1 + 0x244);
      uVar9 = *(undefined4 *)(param_1 + 0x248);
      iVar3 = clk_bulk_prepare(uVar9,uVar10);
      if (iVar3 == 0) {
        iVar3 = clk_bulk_enable(uVar9,uVar10);
        piVar2 = DAT_0001dbb4;
        if (iVar3 == 0) {
          iVar4 = *(int *)(param_1 + 0x2f4);
          local_2c = iVar3;
          if (((iVar4 == 0) || (iVar3 = *(int *)(*(int *)(iVar4 + 0x68) + 0x1c), iVar3 == 0)) ||
             (pcVar7 = *(code **)(iVar3 + 0x3c), pcVar7 == (code *)0x0)) {
LAB_0001dbde:
            printk(DAT_0001dca0,param_1 + 0x74);
          }
          else {
            if ((DAT_0001dbb4[7] == 0) ||
               (pcVar5 = *(code **)(DAT_0001dbb4[7] + 0x3c), pcVar5 == (code *)0x0)) {
              iVar4 = (*pcVar7)(iVar4,0,&local_28);
            }
            else {
              iVar4 = (*pcVar5)(iVar4,0,&local_28);
            }
            if (iVar4 != 0) goto LAB_0001dbde;
            get_remote_terminal_sensor(param_1,&local_2c);
            if (((local_2c == 0) || (**(int **)(local_2c + 0x68) == 0)) ||
               (pcVar7 = *(code **)(**(int **)(local_2c + 0x68) + 0x18), pcVar7 == (code *)0x0)) {
LAB_0001da28:
              if (0 < *(int *)(DAT_0001dbb8 + 4)) {
                printk(DAT_0001dbbc,param_1 + 0x74);
              }
              *(undefined4 *)(param_1 + 0x340) = 0;
            }
            else {
              if ((*piVar2 == 0) || (pcVar5 = *(code **)(*piVar2 + 0x18), pcVar5 == (code *)0x0)) {
                iVar4 = (*pcVar7)(local_2c,DAT_0001dbc0,param_1 + 0x340);
              }
              else {
                iVar4 = (*pcVar5)(local_2c,DAT_0001dbc0);
              }
              if (iVar4 != 0) goto LAB_0001da28;
            }
            *(uint *)(param_1 + 0x284) = local_24;
            switch(local_24 & 0xf) {
            case 1:
              uVar6 = 1;
              break;
            case 2:
              uVar6 = 2;
              break;
            default:
              printk(DAT_0001dbc4,param_1 + 0x74);
              uVar6 = 0;
              break;
            case 4:
              uVar6 = 3;
              break;
            case 8:
              uVar6 = 4;
            }
            *(undefined1 *)(param_1 + 0x28d) = uVar6;
          }
          iVar3 = *(int *)(param_1 + 0x340);
          iVar4 = *(int *)(param_1 + 0x250);
          bVar1 = *(byte *)(param_1 + 0x28d);
          csi2_g_mbus_config(param_1,0,&local_28);
          DataSynchronizationBarrier(0xe);
          arm_heavy_mb();
          *(uint *)(iVar4 + 4) = bVar1 - 1;
          if (iVar3 == 1) {
            uVar11 = local_28 == 6 | DAT_0001dca8;
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(uint *)(iVar4 + 0x40) = uVar11;
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(undefined4 *)(iVar4 + 0x28) = DAT_0001dca4;
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(undefined4 *)(iVar4 + 0x2c) = 0xff00;
          }
          else {
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(uint *)(iVar4 + 0x40) = local_28 == 6 | 0xc204000;
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(undefined4 *)(iVar4 + 0x28) = 0;
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(undefined4 *)(iVar4 + 0x2c) = 0xf000;
            *(undefined1 *)(param_1 + 0x2f3) = 1;
          }
          DataSynchronizationBarrier(0xe);
          arm_heavy_mb();
          *(undefined4 *)(iVar4 + 0x10) = 1;
          iVar4 = *(int *)(param_1 + 0x2e4);
          if (iVar4 == 0) {
            iVar3 = -0x13;
LAB_0001db10:
            csi2_disable(iVar8);
            uVar9 = *(undefined4 *)(param_1 + 0x244);
            uVar10 = *(undefined4 *)(param_1 + 0x248);
            clk_bulk_disable(uVar10,uVar9);
            clk_bulk_unprepare(uVar10,uVar9);
            goto LAB_0001dc92;
          }
          iVar3 = *(int *)(*(int *)(iVar4 + 0x68) + 0xc);
          if ((iVar3 != 0) && (pcVar7 = *(code **)(iVar3 + 0x28), pcVar7 != (code *)0x0)) {
            if ((DAT_0001dbb4[3] == 0) ||
               (pcVar5 = *(code **)(DAT_0001dbb4[3] + 0x28), pcVar5 == (code *)0x0)) {
              iVar3 = (*pcVar7)(iVar4,1);
            }
            else {
              iVar3 = (*pcVar5)();
            }
            if ((iVar3 != 0) && (iVar3 != DAT_0001dbc8)) goto LAB_0001db10;
          }
          *(undefined4 *)(param_1 + 800) = 0;
          *(undefined4 *)(param_1 + 0x324) = 0;
          *(undefined4 *)(param_1 + 0x328) = 0;
          *(undefined4 *)(param_1 + 0x32c) = 0;
          *(undefined4 *)(param_1 + 0x330) = 0;
          *(undefined4 *)(param_1 + 0x334) = 0;
          iVar4 = 1;
          goto LAB_0001dc80;
        }
        clk_bulk_unprepare(uVar9,uVar10);
      }
      _dev_err(*(undefined4 *)(param_1 + -4),DAT_0001dba8);
      printk(DAT_0001dbb0,param_1 + 0x74,DAT_0001dbac);
      goto LAB_0001dc92;
    }
    iVar4 = *(int *)(param_1 + 0x2e4);
    if (((iVar4 != 0) && (iVar3 = *(int *)(*(int *)(iVar4 + 0x68) + 0xc), iVar3 != 0)) &&
       (pcVar7 = *(code **)(iVar3 + 0x28), pcVar7 != (code *)0x0)) {
      if ((DAT_0001dbb4[3] == 0) ||
         (pcVar5 = *(code **)(DAT_0001dbb4[3] + 0x28), pcVar5 == (code *)0x0)) {
        (*pcVar7)(iVar4,0);
      }
      else {
        (*pcVar5)(iVar4,0);
      }
    }
    csi2_disable(iVar8);
    csi2_hw_do_reset(iVar8);
    uVar10 = *(undefined4 *)(param_1 + 0x244);
    uVar9 = *(undefined4 *)(param_1 + 0x248);
    clk_bulk_disable(uVar9,uVar10);
    clk_bulk_unprepare(uVar9,uVar10);
    iVar4 = -1;
  }
  else if (param_2 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = 1;
  }
LAB_0001dc80:
  iVar3 = 0;
  iVar4 = iVar4 + *(int *)(param_1 + 0x2e0);
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  else {
    *(int *)(param_1 + 0x2e0) = iVar4;
  }
LAB_0001dc92:
  mutex_unlock(param_1 + 0x294);
  return iVar3;
}



/* ===== rkcif_csi2_register_notifier @ 0001dcac size=8 ===== */

void rkcif_csi2_register_notifier(undefined4 param_1)

{
  atomic_notifier_chain_register(DAT_0001dcb4,param_1);
  return;
}



/* ===== rkcif_csi2_unregister_notifier @ 0001dcb8 size=8 ===== */

void rkcif_csi2_unregister_notifier(undefined4 param_1)

{
  atomic_notifier_chain_unregister(DAT_0001dcc0,param_1);
  return;
}



/* ===== rkcif_csi2_event_reset_pipe @ 0001dcc4 size=60 ===== */

void rkcif_csi2_event_reset_pipe(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_a0;
  undefined1 auStack_9c [96];
  undefined4 local_3c;
  int local_14;
  
  piVar1 = DAT_0001dd00;
  local_14 = *DAT_0001dd00;
  if (param_1 != 0) {
    memset(auStack_9c,0,0x84);
    local_a0 = 0x1001;
    local_3c = param_2;
    v4l2_event_queue(*(undefined4 *)(param_1 + 0xa4),&local_a0);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== rkcif_csi2_event_inc_sof @ 0001dd04 size=84 ===== */

void rkcif_csi2_event_inc_sof(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_a0;
  undefined1 auStack_9c [4];
  int local_98;
  int local_14;
  
  piVar2 = DAT_0001dd58;
  local_14 = *DAT_0001dd58;
  if (param_1 != 0) {
    memset(auStack_9c,0,0x84);
    local_a0 = 4;
    piVar3 = (int *)(param_1 + 800);
    HintPreloadData(piVar3);
    do {
      ExclusiveAccess(piVar3);
      local_98 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = local_98 + 1;
    v4l2_event_queue(*(undefined4 *)(param_1 + 0xa4),&local_a0);
  }
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== rkcif_csi2_get_sof @ 0001dd5c size=10 ===== */

int rkcif_csi2_get_sof(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 800) + -1;
  }
  return iVar1;
}



/* ===== rkcif_csi2_set_sof @ 0001dd66 size=8 ===== */

void rkcif_csi2_set_sof(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 800) = param_2;
  }
  return;
}



/* ===== rkcif_csi2_plat_drv_init @ 0001dd6e size=8 ===== */

void rkcif_csi2_plat_drv_init(void)

{
  __platform_driver_register(DAT_0001dd7c,DAT_0001dd78);
  return;
}



/* ===== rkcif_luma_vb2_queue_setup @ 0001dd80 size=44 ===== */

undefined4
rkcif_luma_vb2_queue_setup(int param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *param_3 = 1;
  uVar2 = *param_2;
  if (uVar2 < 2) {
    uVar2 = 2;
  }
  if (7 < uVar2) {
    uVar2 = 8;
  }
  *param_2 = uVar2;
  *param_4 = 200;
  *(int *)(iVar1 + 0x510) = iVar1 + 0x510;
  *(int *)(iVar1 + 0x514) = iVar1 + 0x510;
  return 0;
}



/* ===== rkcif_luma_enum_fmt_meta_cap @ 0001ddac size=44 ===== */

undefined4 rkcif_luma_enum_fmt_meta_cap(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_devdata();
  if ((*param_3 == 0) && (param_3[1] == **(int **)(iVar1 + 0x298))) {
    param_3[0xb] = *(int *)(*(int *)(iVar1 + 0x130) + 0x51c);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== rkcif_luma_fh_open @ 0001ddd8 size=44 ===== */

int rkcif_luma_fh_open(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = video_devdata();
  iVar2 = *(int *)(iVar1 + 0x130);
  iVar1 = v4l2_fh_open(param_1);
  if ((iVar1 == 0) && (iVar1 = v4l2_pipeline_pm_get(iVar2 + 0x1d0), iVar1 < 0)) {
    vb2_fop_release(param_1);
  }
  return iVar1;
}



/* ===== rkcif_luma_g_fmt_meta_cap @ 0001de04 size=54 ===== */

undefined4 rkcif_luma_g_fmt_meta_cap(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = video_devdata();
  iVar3 = *(int *)(iVar1 + 0x130);
  if (*param_3 == **(int **)(iVar1 + 0x298)) {
    uVar2 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[1] = *(int *)(iVar3 + 0x51c);
    param_3[2] = *(int *)(iVar3 + 0x520);
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== rkcif_luma_readout_task @ 0001de3a size=202 ===== */

void rkcif_luma_readout_task(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_f8 [2];
  int local_f0;
  int iStack_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 auStack_e0 [49];
  
  uVar1 = DAT_0001df04;
  do {
    while( true ) {
      do {
        if ((*(int *)(param_1 + 0x5e8) == *(int *)(param_1 + 0x5ec)) ||
           (iVar2 = __kfifo_out(param_1 + 0x5e8,local_f8,0xd8), iVar2 == 0)) {
          return;
        }
      } while (local_f8[0] != 0);
      if (*(int *)(param_1 + 0x510) != param_1 + 0x510) break;
LAB_0001de7a:
      iVar2 = *(int *)(param_1 + 0x45c);
      uVar3 = uVar1;
LAB_0001de82:
      printk(uVar3,iVar2 + 0x10);
    }
    piVar4 = *(int **)(param_1 + 0x510);
    iVar2 = *piVar4;
    piVar6 = (int *)piVar4[1];
    *(int **)(iVar2 + 4) = piVar6;
    *piVar6 = iVar2;
    *piVar4 = 0x100;
    piVar4[1] = 0x122;
    if (piVar4 + -0xa0 == (int *)0x0) goto LAB_0001de7a;
    puVar5 = (undefined4 *)piVar4[2];
    if (puVar5 == (undefined4 *)0x0) {
      iVar2 = *(int *)(param_1 + 0x45c);
      uVar3 = DAT_0001df08;
      goto LAB_0001de82;
    }
    puVar8 = auStack_e0;
    puVar5[1] = local_e4;
    *puVar5 = local_e8;
    iVar2 = 0;
    do {
      iVar7 = 0;
      puVar10 = puVar8;
      do {
        iVar9 = iVar2 * 0x10 + iVar7;
        iVar7 = iVar7 + 1;
        puVar5[iVar9 + 2] = *puVar10;
        puVar10 = puVar10 + 1;
      } while (iVar7 != 0x10);
      iVar2 = iVar2 + 1;
      puVar8 = puVar8 + 0x10;
    } while (iVar2 != 3);
    if (piVar4[-0x9c] != 0) {
      piVar4[-0x8b] = 200;
    }
    piVar4[-0x44] = local_e4;
    piVar4[-0x9a] = local_f0;
    piVar4[-0x99] = iStack_ec;
    vb2_buffer_done(piVar4 + -0xa0,5);
  } while( true );
}



/* ===== rkcif_luma_querycap @ 0001df0c size=66 ===== */

undefined4 rkcif_luma_querycap(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = video_devdata();
  piVar2 = *(int **)(*(int *)(*(int *)(iVar1 + 0x130) + 0x508) + 8);
  strlcpy(param_3,*(undefined4 *)piVar2[0xe],0x10,(undefined4 *)piVar2[0xe],param_4);
  strlcpy(param_3 + 0x10,*(undefined4 *)piVar2[0xe],0x20);
  iVar1 = piVar2[0xb];
  if (iVar1 == 0) {
    iVar1 = *piVar2;
  }
  snprintf((char *)(param_3 + 0x30),0x20,DAT_0001df50,iVar1);
  return 0;
}



/* ===== rkcif_luma_vb2_buf_queue @ 0001df54 size=70 ===== */

void rkcif_luma_vb2_buf_queue(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uStack_10;
  
  iVar5 = *(int *)(*param_1 + 0x28);
  uStack_10 = param_4;
  iVar2 = vb2_plane_vaddr(param_1,0);
  param_1[0xa2] = iVar2;
  *(int *)(((uint)&uStack_10 & 0xffffe000) + 4) =
       *(int *)(((uint)&uStack_10 & 0xffffe000) + 4) + 0x200;
  piVar4 = *(int **)(iVar5 + 0x514);
  piVar3 = param_1 + 0xa0;
  *(int **)(iVar5 + 0x514) = piVar3;
  uVar1 = DAT_0001df9c;
  param_1[0xa0] = iVar5 + 0x510;
  param_1[0xa1] = (int)piVar4;
  *piVar4 = (int)piVar3;
  __local_bh_enable_ip(uVar1,0x200,piVar3,uStack_10);
  return;
}



/* ===== rkcif_luma_vb2_start_streaming @ 0001dfa0 size=56 ===== */

void rkcif_luma_vb2_start_streaming(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined1 *)(iVar3 + 0x5e4) = 1;
  *(undefined2 *)(iVar3 + 0x614) = 0;
  *(undefined1 *)(iVar3 + 0x616) = 0;
  *(undefined4 *)(iVar3 + 0x5ec) = 0;
  *(undefined4 *)(iVar3 + 0x5e8) = 0;
  piVar2 = (int *)(iVar3 + 0x604);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  return;
}



/* ===== tasklet_disable @ 0001dfd8 size=28 ===== */

void tasklet_disable(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  return;
}



/* ===== rkcif_luma_vb2_stop_streaming @ 0001dff4 size=114 ===== */

void rkcif_luma_vb2_stop_streaming(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  iVar4 = *(int *)(param_1 + 0x28);
  disableIRQinterrupts();
  *(undefined1 *)(iVar4 + 0x5e4) = 0;
  tasklet_disable(iVar4 + 0x5fc,param_2,0,
                  (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b);
  *(int *)(((uint)&stack0xffffffe8 & 0xffffe000) + 4) =
       *(int *)(((uint)&stack0xffffffe8 & 0xffffe000) + 4) + 0x200;
  iVar5 = 8;
  do {
    if (*(int *)(iVar4 + 0x510) == iVar4 + 0x510) break;
    piVar1 = *(int **)(iVar4 + 0x510);
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *piVar1 = 0x100;
    piVar1[1] = 0x122;
    vb2_buffer_done(piVar1 + -0xa0,6);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  __local_bh_enable_ip(DAT_0001e068,0x200);
  return;
}



/* ===== rkcif_luma_fop_release @ 0001e06c size=34 ===== */

int rkcif_luma_fop_release(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = video_devdata();
  iVar2 = *(int *)(iVar1 + 0x130);
  iVar1 = vb2_fop_release(param_1);
  if (iVar1 == 0) {
    v4l2_pipeline_pm_put(iVar2 + 0x1d0);
  }
  return iVar1;
}



/* ===== rkcif_luma_isr @ 0001e08e size=462 ===== */

void rkcif_luma_isr(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  byte in_Q;
  undefined8 uVar11;
  
  if (*(char *)(param_1 + 0x5e4) != '\0') {
    uVar4 = *(uint *)(*(int *)(param_1 + 0x508) + 0x73a1) & 0xff;
    if (uVar4 == 5) {
      iVar2 = 1;
    }
    else if (uVar4 == 6) {
      iVar2 = 2;
    }
    else {
      iVar2 = 0;
      if (uVar4 != 0) {
        return;
      }
    }
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x614) == '\0') {
        uVar4 = rkcif_read_register(*(undefined4 *)(param_1 + 0x508),0x81);
        rkcif_write_register(*(undefined4 *)(param_1 + 0x508),0x81,uVar4 & 0xffffff0f | 8);
        puVar6 = (undefined4 *)(param_1 + 0x630);
        do {
          uVar1 = rkcif_read_register(*(undefined4 *)(param_1 + 0x508),0x82);
          puVar5 = puVar6 + 1;
          *puVar6 = uVar1;
          puVar6 = puVar5;
        } while ((undefined4 *)(param_1 + 0x670) != puVar5);
        *(undefined1 *)(param_1 + 0x614) = 1;
      }
    }
    else if (param_2 == 1) {
      if (*(char *)(param_1 + 0x615) == '\0') {
        uVar4 = rkcif_read_register(*(undefined4 *)(param_1 + 0x508),0x81);
        rkcif_write_register(*(undefined4 *)(param_1 + 0x508),0x81,uVar4 & 0xffffff0f | 0x18);
        puVar6 = (undefined4 *)(param_1 + 0x670);
        do {
          uVar1 = rkcif_read_register(*(undefined4 *)(param_1 + 0x508),0x82);
          puVar5 = puVar6 + 1;
          *puVar6 = uVar1;
          puVar6 = puVar5;
        } while (puVar5 != (undefined4 *)(param_1 + 0x6b0));
        *(undefined1 *)(param_1 + 0x615) = 1;
      }
    }
    else if ((param_2 == 2) && (*(char *)(param_1 + 0x616) == '\0')) {
      uVar4 = rkcif_read_register(*(undefined4 *)(param_1 + 0x508),0x81);
      rkcif_write_register(*(undefined4 *)(param_1 + 0x508),0x81,uVar4 & 0xffffff0f | 0x28);
      puVar6 = (undefined4 *)(param_1 + 0x6b0);
      do {
        uVar1 = rkcif_read_register(*(undefined4 *)(param_1 + 0x508),0x82);
        puVar5 = puVar6 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar5;
      } while ((undefined4 *)(param_1 + 0x6f0) != puVar5);
      *(undefined1 *)(param_1 + 0x616) = 1;
    }
    cVar9 = *(char *)(param_1 + 0x614);
    if (iVar2 == 2) {
      if (cVar9 == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x615) == '\0') {
        return;
      }
      cVar9 = *(char *)(param_1 + 0x616);
    }
    else if (iVar2 == 1) {
      if (cVar9 == '\0') {
        return;
      }
      cVar9 = *(char *)(param_1 + 0x615);
    }
    if (cVar9 != '\0') {
      *(undefined4 *)(param_1 + 0x618) = 0;
      uVar11 = ktime_get();
      *(undefined8 *)(param_1 + 0x620) = uVar11;
      *(undefined4 *)(param_1 + 0x62c) = param_3;
      if (iVar2 == 2) {
        uVar1 = 7;
      }
      else if (iVar2 == 1) {
        uVar1 = 3;
      }
      else {
        uVar1 = 1;
      }
      *(undefined4 *)(param_1 + 0x628) = uVar1;
      uVar4 = *(int *)(param_1 + 0x5e8) - *(int *)(param_1 + 0x5ec);
      cVar9 = uVar4 <= *(uint *)(param_1 + 0x5f0);
      cVar10 = SBORROW4(*(uint *)(param_1 + 0x5f0),uVar4);
      if ((bool)cVar9) {
        cVar8 = '\0';
        cVar7 = '\0';
        __kfifo_in(param_1 + 0x5e8,(void *)(param_1 + 0x618),0xd8);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x45c);
        cVar9 = 0xffffffef < uVar4;
        cVar10 = SCARRY4(uVar4,0x10);
        iVar2 = uVar4 + 0x10;
        cVar7 = iVar2 < 0;
        cVar8 = iVar2 == 0;
        printk(DAT_0001e25c,iVar2);
      }
      disableIRQinterrupts();
      uVar3 = *(uint *)(param_1 + 0x600);
      uVar4 = uVar3 | 1;
      *(uint *)(param_1 + 0x600) = uVar4;
      if (-1 < (int)(uVar3 << 0x1f)) {
        __tasklet_schedule(param_1 + 0x5fc,uVar4,
                           (uint)(byte)(cVar7 << 4 | cVar8 << 3 | cVar9 << 2 | cVar10 << 1 | in_Q)
                           << 0x1b);
      }
      *(undefined2 *)(param_1 + 0x614) = 0;
      *(undefined1 *)(param_1 + 0x616) = 0;
      memset((void *)(param_1 + 0x618),0,0xd8);
    }
  }
  return;
}



/* ===== rkcif_start_luma @ 0001e260 size=78 ===== */

void rkcif_start_luma(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2[4] == 1) {
    if (*param_2 - 0x3001U < 0x13) {
      uVar2 = 1 << (*param_2 - 0x3001U & 0xff);
      iVar1 = 1;
      if ((uVar2 & DAT_0001e2b0) == 0) {
        if ((uVar2 & 0x4a000) == 0) {
          iVar1 = 0;
          if ((uVar2 & 0xc1) != 0) {
            iVar1 = 3;
          }
        }
        else {
          iVar1 = 2;
        }
      }
    }
    else {
      iVar1 = 0;
    }
    rkcif_write_register(*(undefined4 *)(param_1 + 0x508),0x81,iVar1 << 1 | 1);
    *(undefined1 *)(param_1 + 0x50c) = 1;
  }
  return;
}



/* ===== rkcif_stop_luma @ 0001e2b4 size=24 ===== */

void rkcif_stop_luma(int param_1)

{
  rkcif_write_register(*(undefined4 *)(param_1 + 0x508),0x81,0);
  *(undefined1 *)(param_1 + 0x50c) = 0;
  return;
}



/* ===== rkcif_register_luma_vdev @ 0001e2cc size=300 ===== */

int rkcif_register_luma_vdev(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = param_1 + 0x71;
  puVar4 = param_1 + 0x144;
  param_1[0x144] = puVar4;
  param_1[0x145] = puVar4;
  puVar6 = param_1 + 0x74;
  param_1[0x142] = param_3;
  strlcpy(param_1 + 0x11c,DAT_0001e3f8,0x20,puVar4,param_1,param_2);
  __mutex_init(puVar5,DAT_0001e400,DAT_0001e3fc);
  uVar2 = DAT_0001e408;
  uVar1 = DAT_0001e404;
  param_1[0x138] = puVar5;
  param_1[0x131] = uVar1;
  iVar3 = DAT_0001e40c;
  param_1[0x130] = uVar2;
  param_1[0x117] = param_2;
  param_1[0xad] = iVar3;
  param_1[7] = iVar3 + 0x24;
  uVar1 = DAT_0001e410;
  param_1[0xae] = 0x4800000;
  param_1[5] = puVar5;
  param_1[8] = uVar1;
  param_1[0xc] = 0x2b0;
  param_1[0xd] = 0x2000;
  *param_1 = 0xd;
  param_1[1] = 3;
  param_1[0x11a] = param_1;
  param_1[0x125] = 0;
  param_1[10] = param_1;
  param_1[2] = *(undefined4 *)(param_1[0x142] + 8);
  vb2_queue_init(param_1);
  uVar1 = DAT_0001e414;
  param_1[0xc0] = param_1;
  param_1[0x141] = 1;
  param_1[0x147] = uVar1;
  param_1[0x148] = 200;
  iVar3 = media_entity_pads_init(puVar6,0,param_1 + 0x13a);
  if (-1 < iVar3) {
    iVar3 = __video_register_device(puVar6,0,0xffffffff,1,*(undefined4 *)param_1[0xad]);
    if (iVar3 < 0) {
      _dev_err(param_1 + 0xb0,DAT_0001e418);
    }
    else {
      iVar3 = __kfifo_alloc(param_1 + 0x17a,0x798,1,0xcc0);
      if (iVar3 == 0) {
        tasklet_init(param_1 + 0x17f,DAT_0001e420,param_1);
        tasklet_disable(param_1 + 0x17f);
        return 0;
      }
      _dev_err(param_1 + 0xb0,DAT_0001e41c,iVar3);
      video_unregister_device(puVar6);
    }
  }
  vb2_queue_release(param_1[0x11a]);
  return iVar3;
}



/* ===== rkcif_unregister_luma_vdev @ 0001e424 size=40 ===== */

void rkcif_unregister_luma_vdev(int param_1)

{
  __kfifo_free(param_1 + 0x5e8);
  tasklet_kill(param_1 + 0x5fc);
  video_unregister_device(param_1 + 0x1d0);
  vb2_queue_release(*(undefined4 *)(param_1 + 0x468));
  return;
}



/* ===== rkcif_hw_shutdown @ 0001e44c size=132 ===== */

void rkcif_hw_shutdown(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_1 + 0x50);
  iVar1 = pm_runtime_get_if_active(param_1 + 0x10,0);
  if (iVar1 < 1) {
    return;
  }
  if ((*(int *)(iVar4 + 0x94) - 9U < 2) || (*(int *)(iVar4 + 0x94) == 0xb)) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    **(undefined4 **)(iVar4 + 8) = 0;
  }
  else {
    piVar5 = (int *)(iVar4 + 0xa0);
    for (iVar1 = 0; iVar1 < *(int *)(iVar4 + 0xbc); iVar1 = iVar1 + 1) {
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x71a8) != 0) {
        if (*(int *)(iVar2 + 0x7edc) == 1) {
          uVar3 = 0x39;
        }
        else {
          uVar3 = 0;
        }
        rkcif_write_register(iVar2,uVar3,0,*(int *)(iVar2 + 0x7edc),param_4);
      }
      piVar5 = piVar5 + 1;
    }
  }
  if (0 < *(int *)(iVar4 + 4)) {
    disable_irq();
  }
  __pm_runtime_idle(param_1 + 0x10,5);
  return;
}



/* ===== rkcif_plat_remove @ 0001e4d0 size=40 ===== */

undefined4 rkcif_plat_remove(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  __pm_runtime_disable(param_1 + 0x10,1);
  if (*(int *)(iVar1 + 0x94) < 5) {
    rkcif_plat_uninit(*(undefined4 *)(iVar1 + 0xa0));
  }
  rkcif_csi2_unregister_notifier(iVar1 + 0x170);
  return 0;
}



/* ===== rkcif_irq_handler @ 0001e4f8 size=104 ===== */

undefined4 rkcif_irq_handler(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 0x40);
  if (*(int *)(iVar2 + 0x94) < 9) {
    iVar1 = 0;
  }
  else {
    iVar1 = rkcif_irq_global(*(undefined4 *)(iVar2 + 0xa0));
    if (iVar1 != 0) {
      rkcif_write_register(*(undefined4 *)(iVar2 + 0xa0),0x92,iVar1);
    }
  }
  piVar3 = (int *)(iVar2 + 0xa0);
  for (iVar4 = 0; iVar4 < *(int *)(iVar2 + 0xbc); iVar4 = iVar4 + 1) {
    if (*(code **)(*piVar3 + 0x7ed8) != (code *)0x0) {
      (**(code **)(*piVar3 + 0x7ed8))(param_1);
      if ((8 < *(int *)(iVar2 + 0x94)) && (iVar1 != 0)) {
        rkcif_irq_handle_toisp(*piVar3,iVar1);
      }
    }
    piVar3 = piVar3 + 1;
  }
  return 1;
}



/* ===== rkcif_plat_hw_probe @ 0001e560 size=748 ===== */

uint rkcif_plat_hw_probe(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  uint *puVar13;
  
  uVar12 = *(undefined4 *)(param_1 + 0x174);
  uVar2 = of_match_node(DAT_0001e84c,uVar12);
  if (0xfffff000 < uVar2) {
    return uVar2;
  }
  iVar9 = param_1 + 0x10;
  piVar10 = *(int **)(uVar2 + 0xc0);
  piVar3 = (int *)devm_kmalloc(iVar9,0x1ac,0xdc0);
  if (piVar3 == (int *)0x0) {
LAB_0001e598:
    uVar2 = 0xfffffff4;
  }
  else {
    *(int **)(param_1 + 0x50) = piVar3;
    *piVar3 = iVar9;
    uVar2 = platform_get_irq(param_1,0);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar4 = dev_driver_string(iVar9);
    uVar5 = devm_request_threaded_irq(iVar9,uVar2,DAT_0001e850,0,0x80,uVar4,iVar9);
    if ((int)uVar5 < 0) {
      _dev_err(iVar9,DAT_0001e854,uVar5);
      return uVar5;
    }
    piVar3[1] = uVar2;
    piVar3[0x31] = (int)piVar10;
    iVar8 = *piVar10;
    *(undefined1 *)(piVar3 + 0x5b) = 0;
    piVar3[0x53] = 0;
    piVar3[0x25] = iVar8;
    if (*piVar10 < 5) {
      uVar4 = platform_get_resource(param_1,0x200);
      uVar2 = devm_ioremap_resource(iVar9,uVar4);
      piVar3[2] = uVar2;
      if (0xfffff000 < uVar2) {
        return uVar2;
      }
    }
    else {
      piVar6 = (int *)platform_get_resource_byname(param_1,0x200,DAT_0001e858);
      iVar8 = devm_ioremap_resource(iVar9,piVar6);
      piVar3[2] = iVar8;
      if (iVar8 == -0x10) {
        uVar2 = devm_ioremap(iVar9,*piVar6,(piVar6[1] + 1) - *piVar6);
        piVar3[2] = uVar2;
        if (0xfffff000 < uVar2) {
          _dev_err(iVar9,DAT_0001e85c);
          return piVar3[2];
        }
      }
    }
    iVar8 = of_find_property(uVar12,DAT_0001e860,0);
    if (iVar8 != 0) {
      _dev_info(iVar9,DAT_0001e864);
      *(undefined1 *)(piVar3 + 0x6a) = 1;
    }
    uVar2 = syscon_regmap_lookup_by_phandle(uVar12,DAT_0001e868);
    piVar3[4] = uVar2;
    if (0xfffff000 < uVar2) {
      _dev_warn(iVar9,DAT_0001e86c);
    }
    if ((0xf < piVar10[3]) || (0xf < piVar10[4])) {
      _dev_err(iVar9,DAT_0001e88c,piVar10[3],0xf,piVar10[4],0xf);
      return 0xffffffea;
    }
    puVar13 = (uint *)(piVar3 + 5);
    for (iVar8 = 0; iVar8 < piVar10[3]; iVar8 = iVar8 + 1) {
      uVar2 = devm_clk_get(iVar9,*(undefined4 *)(piVar10[1] + iVar8 * 4));
      if (0xfffff000 < uVar2) {
        _dev_err(iVar9,DAT_0001e890,*(undefined4 *)(piVar10[1] + iVar8 * 4));
        return uVar2;
      }
      *puVar13 = uVar2;
      puVar13 = puVar13 + 1;
    }
    puVar13 = (uint *)(piVar3 + 0x16);
    piVar3[0x14] = piVar10[3];
    for (iVar8 = 0; uVar1 = DAT_0001e874, uVar4 = DAT_0001e870, iVar8 < piVar10[4];
        iVar8 = iVar8 + 1) {
      iVar7 = *(int *)(piVar10[2] + iVar8 * 4);
      uVar2 = 0;
      if ((iVar7 == 0) ||
         (uVar2 = __devm_reset_control_get(iVar9,iVar7,0,0,0,1), uVar2 < 0xfffff001)) {
        *puVar13 = uVar2;
      }
      else {
        *puVar13 = 0;
        _dev_err(iVar9,DAT_0001e890,*(undefined4 *)(piVar10[2] + iVar8 * 4));
      }
      puVar13 = puVar13 + 1;
    }
    piVar3[0x26] = piVar10[5];
    *(undefined2 *)((int)piVar3 + 0x1a6) = 0x101;
    __mutex_init(piVar3 + 0x32,uVar1,uVar4);
    uVar4 = DAT_0001e878;
    piVar3[0x30] = 0;
    iVar8 = of_parse_phandle(*(undefined4 *)(param_1 + 0x174),uVar4);
    uVar4 = DAT_0001e87c;
    if (iVar8 == 0) {
LAB_0001e6ee:
      uVar11 = 0;
      _dev_info(iVar9,uVar4);
    }
    else {
      iVar8 = of_device_is_available();
      uVar11 = (undefined1)iVar8;
      uVar4 = DAT_0001e894;
      if (iVar8 == 0) goto LAB_0001e6ee;
    }
    *(undefined1 *)(piVar3 + 0x69) = uVar11;
    iVar8 = of_reserved_mem_device_init_by_idx(iVar9,*(undefined4 *)(param_1 + 0x174),0);
    if (iVar8 != 0) {
      _dev_info(iVar9,DAT_0001e880);
    }
    if ((char)piVar3[0x69] != '\0') {
      *(undefined1 *)((int)piVar3 + 0x1a7) = 0;
    }
    piVar3[0x27] = DAT_0001e884;
    if (*piVar10 < 5) {
      iVar8 = devm_kmalloc(iVar9,0x8050,0xdc0);
      if (iVar8 == 0) goto LAB_0001e598;
      iVar7 = piVar3[0x25];
      *(int *)(iVar8 + 8) = iVar9;
      *(int **)(iVar8 + 0x7ed4) = piVar3;
      *(int *)(iVar8 + 0x736c) = iVar7;
      piVar3[0x28] = iVar8;
      piVar3[0x2f] = 1;
      uVar2 = rkcif_plat_init(iVar8,uVar12,0);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    __mutex_init(piVar3 + 0x32,DAT_0001e874,DAT_0001e870);
    pm_runtime_enable(iVar9);
    if ((4 < *piVar10) && (*piVar10 != 7)) {
      __platform_driver_register(DAT_0001e89c,DAT_0001e898);
      __platform_driver_register(DAT_0001e8a0,DAT_0001e898);
    }
    piVar3[0x5e] = 1;
    uVar2 = 0;
    piVar3[0x5c] = DAT_0001e888;
    rkcif_csi2_register_notifier(piVar3 + 0x5c);
  }
  return uVar2;
}



/* ===== rkcif_disable_sys_clk @ 0001e8a4 size=36 ===== */

void rkcif_disable_sys_clk(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x14 + iVar1 * 4);
    clk_disable(uVar2);
    clk_unprepare(uVar2);
  }
  return;
}



/* ===== rkcif_runtime_suspend @ 0001e8c8 size=52 ===== */

undefined4 rkcif_runtime_suspend(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(int *)(param_1 + 0x40) + 0xc0);
  HintPreloadData(piVar4);
  do {
    ExclusiveAccess(piVar4);
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return 0;
  }
  rkcif_disable_sys_clk();
  uVar2 = pinctrl_pm_select_sleep_state(param_1);
  return uVar2;
}



/* ===== rkcif_enable_sys_clk @ 0001e8fc size=118 ===== */

int rkcif_enable_sys_clk(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x14);
  do {
    if (*(int *)(param_1 + 0x50) <= iVar2) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      DataSynchronizationBarrier(0xf);
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x124) = 0;
      return 0;
    }
    uVar4 = *puVar3;
    iVar1 = clk_prepare(uVar4);
    if (iVar1 == 0) {
      iVar1 = clk_enable(uVar4);
      if (iVar1 != 0) {
        clk_unprepare(uVar4);
        goto LAB_0001e94c;
      }
    }
    else {
LAB_0001e94c:
      if (iVar1 < 0) {
        for (puVar3 = (undefined4 *)(param_1 + (iVar2 + 4) * 4);
            (undefined4 *)(param_1 + 0x10) != puVar3; puVar3 = puVar3 + -1) {
          uVar4 = *puVar3;
          clk_disable(uVar4);
          clk_unprepare(uVar4);
        }
        return iVar1;
      }
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while( true );
}



/* ===== rkcif_hw_soft_reset @ 0001e972 size=50 ===== */

void rkcif_hw_soft_reset(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + 0x58);
  do {
    piVar2 = piVar1 + 1;
    if (*piVar1 != 0) {
      reset_control_assert();
    }
    piVar1 = piVar2;
  } while (piVar2 != (int *)(param_1 + 0x94));
  (**(code **)(DAT_0001e9a4 + 4))(DAT_0001e9a8);
  piVar1 = (int *)(param_1 + 0x58);
  do {
    piVar2 = piVar1 + 1;
    if (*piVar1 != 0) {
      reset_control_deassert();
    }
    piVar1 = piVar2;
  } while (piVar2 != (int *)(param_1 + 0x94));
  return;
}



/* ===== rkcif_runtime_resume @ 0001e9ac size=60 ===== */

int rkcif_runtime_resume(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x40);
  piVar3 = (int *)(iVar4 + 0xc0);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + 1;
  if (iVar2 + 1 < 2) {
    iVar2 = pinctrl_pm_select_default_state();
    if (iVar2 < 0) {
      return iVar2;
    }
    rkcif_enable_sys_clk(iVar4);
    rkcif_hw_soft_reset(iVar4,1);
  }
  return 0;
}



/* ===== init_module @ 0001e9e8 size=22 ===== */

void init_module(void)

{
  int iVar1;
  
  iVar1 = __platform_driver_register(DAT_0001ea04,DAT_0001ea00);
  if (iVar1 == 0) {
    rkcif_csi2_plat_drv_init();
    return;
  }
  return;
}



/* ===== sditf_get_selection @ 0001ea08 size=6 ===== */

undefined4 sditf_get_selection(void)

{
  return 0xffffffea;
}



/* ===== sditf_notifier_unbind @ 0001ea0e size=8 ===== */

void sditf_notifier_unbind(int param_1)

{
  *(undefined4 *)(param_1 + 0x264) = 0;
  return;
}



/* ===== sditf_channel_enable @ 0001ea16 size=376 ===== */

undefined4 sditf_channel_enable(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r7;
  int iVar8;
  bool bVar9;
  
  iVar3 = *(int *)(param_1 + 0x13c);
  iVar5 = *(int *)(param_1 + 0x138);
  uVar7 = *(uint *)(param_1 + 0x1cc);
  iVar6 = *(int *)(param_1 + 0x1d0);
  if ((iVar3 == 0) || (iVar3 == 7)) {
    bVar9 = *(int *)(iVar5 + 0x7edc) == 1;
    if (bVar9) {
      iVar3 = *(int *)(iVar5 + 0x7ff4);
    }
    else {
      iVar3 = 0x18;
    }
    *(undefined1 *)(param_1 + 0x1e0) = 1;
    if (bVar9) {
      iVar3 = iVar3 << 2;
    }
    *(int *)(param_1 + 0x1e4) = iVar3;
    if (param_2 == 0) {
      unaff_r7 = 0x4000;
    }
    uVar2 = iVar3 << 3 | 1;
    if (param_2 != 0) {
      unaff_r7 = 0x20000;
    }
  }
  else if (iVar3 == 5) {
    iVar3 = *(int *)(iVar5 + 0x7ff4);
    if (param_2 == 0) {
      unaff_r7 = 0xc000;
    }
    else {
      unaff_r7 = 0x60000;
    }
    *(undefined1 *)(param_1 + 0x1e0) = 1;
    iVar4 = iVar3 * 4;
    iVar8 = iVar4 + 1;
    *(undefined1 *)(param_1 + 0x1e8) = 1;
    *(int *)(param_1 + 0x1e4) = iVar8;
    *(int *)(param_1 + 0x1ec) = iVar4;
    uVar2 = iVar3 << 0xd | iVar8 * 8 | 0x101;
  }
  else if (iVar3 == 6) {
    iVar4 = *(int *)(iVar5 + 0x7ff4);
    *(undefined1 *)(param_1 + 0x1e0) = 1;
    *(undefined1 *)(param_1 + 0x1e8) = 1;
    iVar3 = iVar4 * 4;
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    *(int *)(param_1 + 0x1ec) = iVar3 + 1;
    *(int *)(param_1 + 0x1e4) = iVar3 + 2;
    *(int *)(param_1 + 500) = iVar3;
    if (param_2 == 0) {
      unaff_r7 = 0x1c000;
    }
    else {
      unaff_r7 = 0xe0000;
    }
    uVar2 = (iVar3 + 1) * 0x800 | (iVar3 + 2) * 8 | iVar4 << 0x15 | 0x10101;
  }
  else {
    uVar2 = 0;
    unaff_r7 = uVar2;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x1f8) == 3) {
      uVar7 = (uVar7 >> 1) + 0x80;
    }
    rkcif_write_register(iVar5,0xa5,uVar2);
    if ((uVar7 != 0) && (iVar6 != 0)) {
      rkcif_write_register(iVar5,0xa7,0);
      uVar7 = uVar7 | iVar6 << 0x10;
      uVar1 = 0xa6;
LAB_0001eb3c:
      rkcif_write_register(iVar5,uVar1,uVar7);
      rv1106_sdmmc_get_lock();
      rkcif_write_register_or(iVar5,0x91,unaff_r7);
      rv1106_sdmmc_put_lock();
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1f8) == 3) {
      iVar3 = (uVar7 >> 1) - 0x80;
      uVar7 = (uVar7 >> 1) + 0x80;
    }
    else {
      iVar3 = 0;
    }
    rkcif_write_register(iVar5,0xa8,uVar2);
    if ((uVar7 != 0) && (iVar6 != 0)) {
      rkcif_write_register(iVar5,0xaa,iVar3);
      uVar7 = uVar7 | iVar6 << 0x10;
      uVar1 = 0xa9;
      goto LAB_0001eb3c;
    }
  }
  return 0xffffffea;
}



/* ===== sditf_channel_disable @ 0001eb8e size=100 ===== */

void sditf_channel_disable(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0x138);
  iVar1 = *(int *)(param_1 + 0x13c);
  if ((iVar1 == 0) || (iVar1 == 7)) {
    if (param_2 == 0) {
      uVar2 = 0x100000;
    }
    else {
      uVar2 = 0x800000;
    }
  }
  else if (iVar1 == 5) {
    if (param_2 == 0) {
      uVar2 = 0x300000;
    }
    else {
      uVar2 = 0x1800000;
    }
  }
  else if (iVar1 == 6) {
    if (param_2 == 0) {
      uVar2 = 0x700000;
    }
    else {
      uVar2 = 0x3800000;
    }
  }
  else {
    uVar2 = 0;
  }
  rv1106_sdmmc_get_lock();
  rkcif_write_register_or(uVar3,0x91,uVar2);
  rv1106_sdmmc_put_lock();
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  return;
}



/* ===== rkcif_subdev_remove @ 0001ebf2 size=14 ===== */

undefined4 rkcif_subdev_remove(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __pm_runtime_disable(param_1 + 0x10,1,param_3,param_4,param_4);
  return 0;
}



/* ===== sditf_g_mbus_config @ 0001ec00 size=92 ===== */

undefined4 sditf_g_mbus_config(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  code *pcVar4;
  
  iVar3 = *(int *)(param_1 + 0x104);
  if (*(int *)(iVar3 + 0x34c) == 0) {
    rkcif_update_sensor_info(iVar3 + 1000);
  }
  if (*(int **)(iVar3 + 0x34c) == (int *)0x0) {
    *param_3 = 5;
    param_3[1] = 0x110;
    uVar1 = 0;
  }
  else {
    iVar3 = **(int **)(iVar3 + 0x34c);
    if (iVar3 == 0) {
      uVar1 = 0xffffffed;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar3 + 0x68) + 0x1c);
      uVar1 = DAT_0001ec60;
      if ((iVar2 != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x3c), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        if ((*(int *)(DAT_0001ec5c + 0x1c) != 0) &&
           (pcVar4 = *(code **)(*(int *)(DAT_0001ec5c + 0x1c) + 0x3c), pcVar4 != (code *)0x0)) {
          UNRECOVERED_JUMPTABLE = pcVar4;
        }
                    /* WARNING: Could not recover jumptable at 0x0001ec3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)(iVar3,0,param_3);
        return uVar1;
      }
    }
  }
  return uVar1;
}



/* ===== sditf_get_hdr_mode @ 0001ec64 size=108 ===== */

void sditf_get_hdr_mode(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auStack_9c [136];
  int local_14;
  
  piVar1 = DAT_0001ecd0;
  iVar3 = *(int *)(param_1 + 0x138);
  local_14 = *DAT_0001ecd0;
  if (*(int *)(iVar3 + 0x350) == 0) {
    rkcif_update_sensor_info(iVar3 + 1000);
  }
  iVar3 = *(int *)(iVar3 + 0x350);
  if (((iVar3 != 0) && (**(int **)(iVar3 + 0x68) != 0)) &&
     (pcVar2 = *(code **)(**(int **)(iVar3 + 0x68) + 0x18), pcVar2 != (code *)0x0)) {
    if ((*DAT_0001ecd4 == 0) || (pcVar4 = *(code **)(*DAT_0001ecd4 + 0x18), pcVar4 == (code *)0x0))
    {
      iVar3 = (*pcVar2)(iVar3,DAT_0001ecd8,auStack_9c);
    }
    else {
      iVar3 = (*pcVar4)(iVar3,DAT_0001ecd8,auStack_9c);
    }
    if (iVar3 == 0) {
      memcpy((void *)(param_1 + 0x13c),auStack_9c,0x88);
      goto LAB_0001ecb0;
    }
  }
  *(undefined4 *)(param_1 + 0x13c) = 0;
LAB_0001ecb0:
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== sditf_g_frame_interval @ 0001ecdc size=72 ===== */

undefined4 sditf_g_frame_interval(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x104);
  if (*(int *)(iVar3 + 0x350) == 0) {
    rkcif_update_sensor_info(iVar3 + 1000);
  }
  iVar3 = *(int *)(iVar3 + 0x350);
  if (iVar3 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar3 + 0x68) + 0xc);
    uVar1 = DAT_0001ed28;
    if ((iVar2 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(int *)(DAT_0001ed24 + 0xc) != 0) &&
         (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(DAT_0001ed24 + 0xc) + 0x30),
         UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001ed12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001ed18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(iVar3,param_2);
      return uVar1;
    }
  }
  return uVar1;
}



/* ===== sditf_get_set_fmt @ 0001ed2c size=648 ===== */

int sditf_get_set_fmt(int param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 local_100;
  undefined4 local_fc;
  uint local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  
  iVar6 = *(int *)(param_1 + 0x104);
  if ((*(int *)(iVar6 + 0x350) == 0) &&
     (rkcif_update_sensor_info(iVar6 + 1000), *(int *)(iVar6 + 0x350) == 0)) {
    iVar6 = *(int *)(param_1 + 0x234);
    *param_3 = 1;
    if (iVar6 == 0) {
      param_3[4] = 0x3007;
      param_3[1] = 0;
      param_3[2] = 0x280;
      param_3[3] = 0x1e0;
      return 0;
    }
    param_3[1] = 0;
    iVar6 = *(int *)(param_1 + 0x234);
    if (iVar6 != 0) {
      iVar2 = *(int *)(*(int *)(iVar6 + 0x68) + 0x1c);
      iVar5 = DAT_0001efc8;
      if ((iVar2 != 0) && (pcVar4 = *(code **)(iVar2 + 0x10), pcVar4 != (code *)0x0)) {
        iVar2 = *(int *)(DAT_0001efb4 + 0x1c);
        if ((iVar2 == 0) || (*(code **)(iVar2 + 0x10) == (code *)0x0)) {
          iStack_114 = (*pcVar4)(iVar6,0,param_3);
        }
        else {
          iStack_114 = (**(code **)(iVar2 + 0x10))();
        }
        iVar5 = iStack_114;
        if (iStack_114 == 0) {
          local_110 = 2;
          local_118 = 1;
          iVar6 = *(int *)(param_1 + 0x234);
          if (((iVar6 != 0) && (iVar5 = *(int *)(*(int *)(iVar6 + 0x68) + 0x1c), iVar5 != 0)) &&
             (pcVar4 = *(code **)(iVar5 + 0x18), pcVar4 != (code *)0x0)) {
            if ((iVar2 == 0) || (*(code **)(iVar2 + 0x18) == (code *)0x0)) {
              iVar6 = (*pcVar4)(iVar6,0,&local_118);
            }
            else {
              iVar6 = (**(code **)(iVar2 + 0x18))(iVar6,0);
            }
            if (iVar6 == 0) {
              param_3[2] = local_100;
              param_3[3] = local_fc;
            }
          }
          *(undefined4 *)(param_1 + 0x198) = param_3[2];
          *(undefined4 *)(param_1 + 0x19c) = param_3[3];
          rkcif_mbus_pixelcode_to_v4l2(param_3[4]);
          return 0;
        }
      }
      goto LAB_0001ee2e;
    }
  }
  else {
    sditf_get_hdr_mode(param_1 + -0x34);
    *param_3 = 1;
    param_3[1] = 0;
    iVar2 = *(int *)(iVar6 + 0x350);
    if (iVar2 != 0) {
      iVar3 = *(int *)(*(int *)(iVar2 + 0x68) + 0x1c);
      iVar5 = DAT_0001efc8;
      if ((iVar3 != 0) && (pcVar4 = *(code **)(iVar3 + 0x10), pcVar4 != (code *)0x0)) {
        iVar3 = *(int *)(DAT_0001efb4 + 0x1c);
        if ((iVar3 == 0) || (*(code **)(iVar3 + 0x10) == (code *)0x0)) {
          iStack_114 = (*pcVar4)(iVar2,0,param_3);
        }
        else {
          iStack_114 = (**(code **)(iVar3 + 0x10))();
        }
        iVar5 = iStack_114;
        if (iStack_114 == 0) {
          local_110 = 2;
          local_118 = 1;
          iVar2 = *(int *)(iVar6 + 0x350);
          if (((iVar2 != 0) && (iVar5 = *(int *)(*(int *)(iVar2 + 0x68) + 0x1c), iVar5 != 0)) &&
             (pcVar4 = *(code **)(iVar5 + 0x18), pcVar4 != (code *)0x0)) {
            if ((iVar3 == 0) || (*(code **)(iVar3 + 0x18) == (code *)0x0)) {
              iVar2 = (*pcVar4)(iVar2,0,&local_118);
            }
            else {
              iVar2 = (**(code **)(iVar3 + 0x18))(iVar2,0);
            }
            if (iVar2 == 0) {
              param_3[2] = local_100;
              param_3[3] = local_fc;
            }
          }
          *(undefined4 *)(param_1 + 0x198) = param_3[2];
          *(undefined4 *)(param_1 + 0x19c) = param_3[3];
          local_d0 = rkcif_mbus_pixelcode_to_v4l2(param_3[4]);
          local_d8 = *(uint *)(param_1 + 0x198);
          local_d4 = *(undefined4 *)(param_1 + 0x19c);
          iVar2 = rkcif_find_output_fmt(0,local_d0);
          if (*(int *)(param_1 + 0x1c4) == 3) {
            bVar1 = false;
            if (((local_d8 >> 1) * (uint)*(byte *)(iVar2 + 0x16) & 0x78) != 0) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
          }
          if (2 < *DAT_0001efc0) {
            printk(DAT_0001efc4,iVar6 + 0x1c,DAT_0001efb8,param_3[2],param_3[3],
                   *(undefined4 *)(param_1 + 0x108));
          }
          iVar2 = *(int *)(param_1 + 0x108);
          if ((iVar2 == 0) || (iVar2 == 7)) {
            iVar6 = iVar6 + 1000;
          }
          else if (iVar2 == 5) {
            if (bVar1) {
              *(undefined1 *)(iVar6 + 0xfea) = 1;
              *(undefined1 *)(iVar6 + 0xfe3) = 0;
            }
            else {
              *(undefined1 *)(iVar6 + 0xfe3) = 1;
            }
            rkcif_set_fmt(iVar6 + 1000,&local_d8,0);
            iVar6 = iVar6 + 0xff0;
          }
          else {
            if (iVar2 != 6) {
              return 0;
            }
            if (bVar1) {
              *(undefined1 *)(iVar6 + 0xfea) = 1;
              *(undefined1 *)(iVar6 + 0xfe3) = 0;
              *(undefined1 *)(iVar6 + 0x1beb) = 0;
              iVar2 = 0x1bf2;
            }
            else {
              *(undefined1 *)(iVar6 + 0xfe3) = 1;
              iVar2 = 0x1beb;
            }
            *(undefined1 *)(iVar6 + iVar2) = 1;
            rkcif_set_fmt(iVar6 + 1000,&local_d8,0);
            rkcif_set_fmt(iVar6 + 0xff0,&local_d8,0);
            iVar6 = iVar6 + 0x1bf8;
          }
          rkcif_set_fmt(iVar6,&local_d8,0);
          return 0;
        }
      }
      goto LAB_0001ee2e;
    }
  }
  iVar5 = -0x13;
LAB_0001ee2e:
  printk(DAT_0001efbc,param_1 + 0x74,DAT_0001efb8);
  return iVar5;
}



/* ===== div_u64_rem @ 0001efcc size=38 ===== */

undefined8 div_u64_rem(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = __aeabi_uidivmod(param_1,param_3,param_3,0,param_4);
    uVar1 = 0;
  }
  else {
    __do_div64();
    uVar2 = CONCAT44(extraout_r1,extraout_r2);
    uVar1 = extraout_r3;
  }
  *param_4 = (int)((ulonglong)uVar2 >> 0x20);
  return CONCAT44(uVar1,(int)uVar2);
}



/* ===== sditf_ioctl @ 0001eff2 size=504 ===== */

uint sditf_ioctl(int param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  code *pcVar8;
  int iVar9;
  char *__haystack;
  undefined1 auStack_70 [88];
  
  iVar9 = *(int *)(param_1 + 0x104);
  if (param_2 == DAT_0001f1ec) {
    if (*(int *)(iVar9 + 0x350) == 0) {
      rkcif_update_sensor_info(iVar9 + 1000);
    }
    iVar9 = *(int *)(iVar9 + 0x350);
    if (iVar9 == 0) {
      return 0xffffffea;
    }
    if (**(int **)(iVar9 + 0x68) == 0) {
      return DAT_0001f214;
    }
    pcVar7 = *(code **)(**(int **)(iVar9 + 0x68) + 0x18);
    if (pcVar7 != (code *)0x0) {
      if ((*DAT_0001f210 != 0) && (pcVar8 = *(code **)(*DAT_0001f210 + 0x18), pcVar8 != (code *)0x0)
         ) {
        uVar3 = (*pcVar8)(iVar9,DAT_0001f1ec,param_3);
        return uVar3;
      }
      uVar3 = (*pcVar7)(iVar9,DAT_0001f1ec,param_3);
      return uVar3;
    }
    return DAT_0001f214;
  }
  if (param_2 != DAT_0001f1f0) {
    if (param_2 != DAT_0001f1f4) {
      return 0xffffffea;
    }
    *(undefined4 *)(param_1 + 0x254) = *param_3;
    sditf_get_set_fmt(param_1,0,auStack_70);
    iVar9 = *(int *)(param_1 + 0x104);
    iVar6 = *(int *)(param_1 + 0x1a4);
    if (*(int *)(param_1 + 0x108) == 5) {
      if (iVar6 != 2) {
        uVar5 = *(undefined4 *)(param_1 + 0x254);
LAB_0001f102:
        uVar3 = rkcif_init_rx_buf(iVar9 + 1000,uVar5);
        return uVar3;
      }
      if (*(char *)(iVar9 + 0x8035) != '\0') {
        *(uint *)(iVar9 + 0x801c) = *(uint *)(iVar9 + 0x801c) >> 1;
      }
      uVar3 = rkcif_init_rx_buf(iVar9 + 1000,*(undefined4 *)(param_1 + 0x254));
      if (*(char *)(iVar9 + 0x8035) != '\0') {
        *(int *)(iVar9 + 0x8018) = *(int *)(iVar9 + 0x8018) + *(int *)(iVar9 + 0x801c);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x254);
      iVar9 = iVar9 + 0xff0;
    }
    else {
      if (*(int *)(param_1 + 0x108) != 6) {
        if (iVar6 != 2) {
          return 0xffffffea;
        }
        uVar5 = *(undefined4 *)(param_1 + 0x254);
        goto LAB_0001f102;
      }
      if (iVar6 != 2) {
        uVar3 = rkcif_init_rx_buf(iVar9 + 1000,*(undefined4 *)(param_1 + 0x254));
        uVar4 = rkcif_init_rx_buf(iVar9 + 0xff0,*(undefined4 *)(param_1 + 0x254));
        return uVar4 | uVar3;
      }
      uVar5 = 6;
      if (*(char *)(iVar9 + 0x8035) != '\0') {
        lVar1 = (ulonglong)*(uint *)(iVar9 + 0x801c) * (ulonglong)DAT_0001f20c;
        uVar5 = (undefined4)lVar1;
        *(uint *)(iVar9 + 0x801c) = (uint)((ulonglong)lVar1 >> 0x21);
      }
      uVar3 = rkcif_init_rx_buf(iVar9 + 1000,*(undefined4 *)(param_1 + 0x254),uVar5);
      if (*(char *)(iVar9 + 0x8035) != '\0') {
        *(int *)(iVar9 + 0x8018) = *(int *)(iVar9 + 0x8018) + *(int *)(iVar9 + 0x801c);
      }
      uVar4 = rkcif_init_rx_buf(iVar9 + 0xff0,*(undefined4 *)(param_1 + 0x254));
      uVar3 = uVar3 | uVar4;
      if (*(char *)(iVar9 + 0x8035) != '\0') {
        *(int *)(iVar9 + 0x8018) = *(int *)(iVar9 + 0x8018) + *(int *)(iVar9 + 0x801c);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x254);
      iVar9 = iVar9 + 0x1bf8;
    }
    uVar4 = rkcif_init_rx_buf(iVar9,uVar5);
    return uVar4 | uVar3;
  }
  *(undefined4 *)(param_1 + 0x1a0) = *param_3;
  __haystack = *(char **)(param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = param_3[1];
  iVar6 = *(int *)(param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1a8) = param_3[2];
  if (iVar6 == 1) {
    uVar5 = 0;
    goto LAB_0001f03c;
  }
  pcVar2 = strstr(__haystack,DAT_0001f200);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = strstr(__haystack,DAT_0001f204);
    if (pcVar2 != (char *)0x0) {
      uVar5 = 2;
      goto LAB_0001f03c;
    }
    pcVar2 = strstr(__haystack,DAT_0001f208);
    if (pcVar2 != (char *)0x0) {
      uVar5 = 3;
      goto LAB_0001f03c;
    }
  }
  uVar5 = 1;
LAB_0001f03c:
  *(undefined4 *)(param_1 + 0x1c4) = uVar5;
  printk(DAT_0001f1fc,iVar9 + 0x1c,DAT_0001f1f8,iVar6,__haystack,*(undefined4 *)(param_1 + 0x1c4));
  *(char *)(param_3 + 2) = (char)*(undefined4 *)(iVar9 + 0x8040);
  *(char *)((int)param_3 + 9) = (char)*(undefined4 *)(param_1 + 0x25c);
  return 0;
}



/* ===== sditf_fwnode_parse @ 0001f218 size=100 ===== */

undefined4 sditf_fwnode_parse(undefined4 param_1,int *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = DAT_0001f280;
  if (*param_2 == 0) {
    iVar3 = param_2[3];
    if (iVar3 - 5U < 2) {
      *(int *)(param_3 + 0x1c) = iVar3;
      *(int *)(param_3 + 0x20) = param_2[8];
      bVar1 = *(byte *)((int)param_2 + 0x29);
    }
    else {
      uVar2 = DAT_0001f284;
      if (iVar3 != 4) goto LAB_0001f220;
      *(undefined4 *)(param_3 + 0x1c) = 4;
      bVar1 = *(byte *)((int)param_2 + 0x1b);
    }
    *(uint *)(param_3 + 0x24) = (uint)bVar1;
    switch(*(undefined4 *)(param_3 + 0x24)) {
    case 1:
      uVar4 = *(uint *)(param_3 + 0x20) | 1;
      break;
    case 2:
      uVar4 = *(uint *)(param_3 + 0x20) | 2;
      break;
    case 3:
      uVar4 = *(uint *)(param_3 + 0x20) | 4;
      break;
    case 4:
      uVar4 = *(uint *)(param_3 + 0x20) | 8;
      break;
    default:
      goto switchD_0001f246_default;
    }
    uVar2 = 0;
    *(uint *)(param_3 + 0x20) = uVar4;
  }
  else {
LAB_0001f220:
    _dev_err(param_1,uVar2);
switchD_0001f246_default:
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== sditf_buffree_work @ 0001f288 size=96 ===== */

void sditf_buffree_work(int param_1)

{
  int ***pppiVar1;
  int ***pppiVar2;
  int ***local_20;
  undefined4 *local_1c;
  
  disableIRQinterrupts();
  local_20 = *(int ****)(param_1 + 0x14);
  local_20[1] = (int **)&local_20;
  local_1c = *(undefined4 **)(param_1 + 0x18);
  *local_1c = &local_20;
  *(int *)(param_1 + 0x14) = param_1 + 0x14;
  *(int *)(param_1 + 0x18) = param_1 + 0x14;
  while ((int ****)local_20 != &local_20) {
    if ((int ****)local_20 != (int ****)0xc) {
      pppiVar1 = (int ***)*local_20;
      pppiVar2 = (int ***)local_20[1];
      pppiVar1[1] = (int **)pppiVar2;
      *pppiVar2 = (int **)pppiVar1;
      *local_20 = (int **)0x100;
      local_20[1] = (int **)0x122;
      rkcif_free_reserved_mem_buf(*(undefined4 *)(param_1 + -0x134));
    }
  }
  return;
}



/* ===== rkcif_sditf_get_ctrl @ 0001f2e8 size=106 ===== */

undefined4 rkcif_sditf_get_ctrl(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (((*(int *)(param_1 + 0x28) == DAT_0001f354) &&
      (iVar2 = *(int *)(*(int *)(iVar3 + -200) + 0x350), iVar2 != 0)) &&
     (iVar5 = param_1, iVar2 = v4l2_ctrl_find(*(undefined4 *)(iVar2 + 0x70)), iVar2 != 0)) {
    uVar4 = v4l2_ctrl_g_ctrl_int64();
    iVar2 = (int)uVar4;
    *(int *)(param_1 + 0x84) = iVar2;
    __v4l2_ctrl_s_ctrl_int64
              (*(undefined4 *)(iVar3 + -4),(int)((ulonglong)uVar4 >> 0x20),iVar2,iVar2 >> 0x1f,iVar5
               ,param_2,param_3);
    if (2 < *DAT_0001f358) {
      printk(DAT_0001f35c,*(int *)(iVar3 + -200) + 0x1c,DAT_0001f360,
             *(int *)(*(int *)(iVar3 + -200) + 0x350) + 0x74,*(undefined4 *)(param_1 + 0x84));
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== sditf_notifier_bound @ 0001f364 size=110 ===== */

undefined4 sditf_notifier_bound(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x264) = param_2;
  if (*(int *)(param_1 + 0x288) == 1) {
    printk(DAT_0001f3d8,param_2 + 0x74,DAT_0001f3d4,1,param_1);
    uVar1 = 0xfffffff0;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x5c) + 0x1c) << 0x1f < 0) {
      iVar2 = media_create_pad_link(param_2,0,param_1 + 0x30,0,1,param_2);
      if (iVar2 != 0) {
        printk(DAT_0001f3dc,param_1 + 0xa4,*(int *)(param_1 + 0x264) + 0x74);
      }
    }
    *(int *)(param_1 + 0x264) = param_2;
    uVar1 = DAT_0001f3e0;
    *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + 1;
    printk(uVar1,param_2 + 0x74);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rkcif_subdev_probe @ 0001f3e4 size=552 ===== */

int rkcif_subdev_probe(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int *__dest;
  undefined8 uVar10;
  
  iVar9 = param_1 + 0x10;
  uVar7 = *(undefined4 *)(param_1 + 0x174);
  piVar1 = (int *)devm_kmalloc(iVar9,0x2a0,0xdc0);
  uVar3 = DAT_0001f618;
  if (piVar1 == (int *)0x0) {
    return -0xc;
  }
  piVar6 = piVar1 + 0xd;
  *piVar1 = iVar9;
  v4l2_subdev_init(piVar6,uVar3);
  pcVar4 = DAT_0001f61c;
  __dest = piVar1 + 0x2a;
  piVar1[0x25] = piVar1[0x25] | 4;
  strcpy((char *)__dest,pcVar4);
  iVar5 = *piVar1;
  *(int **)(param_1 + 0x50) = piVar6;
  piVar1[0x36] = iVar9;
  iVar5 = of_parse_phandle(*(undefined4 *)(iVar5 + 0x164),DAT_0001f620,0);
  uVar3 = DAT_0001f624;
  if (((iVar5 == 0) || (iVar2 = of_device_is_available(), uVar3 = DAT_0001f624, iVar2 == 0)) ||
     (iVar5 = of_find_device_by_node(iVar5), uVar3 = DAT_0001f628, iVar5 == 0)) {
    _dev_err(*piVar1,uVar3);
    return -0x13;
  }
  iVar5 = *(int *)(iVar5 + 0x50);
  if (iVar5 == 0) {
    _dev_err(*piVar1,DAT_0001f62c);
    return -0x16;
  }
  *(int **)(iVar5 + (*(int *)(iVar5 + 0x8040) + 0x1fb8) * 4) = piVar1;
  piVar1[0x4e] = iVar5;
  *(int *)(iVar5 + 0x8040) = *(int *)(iVar5 + 0x8040) + 1;
  iVar5 = of_property_read_variable_u32_array(uVar7,DAT_0001f630,piVar1 + 0xa4,1,0);
  iVar2 = piVar1[0x4e];
  uVar3 = 1;
  if (iVar5 < 0) {
    *(undefined1 *)(piVar1 + 0xa5) = 0;
    piVar1[0xa4] = 0;
  }
  else {
    *(undefined1 *)(piVar1 + 0xa5) = 1;
  }
  if ((char)piVar1[0xa5] == '\0') {
    piVar1[0x45] = 2;
  }
  else {
    piVar1[0x45] = 1;
    uVar3 = 2;
    piVar1[0x4d] = 2;
  }
  piVar1[0x13] = 0x4001;
  iVar5 = media_entity_pads_init(piVar6,uVar3,piVar1 + 0x3e);
  if (iVar5 < 0) {
    return iVar5;
  }
  piVar8 = piVar1 + 0x80;
  iVar5 = v4l2_ctrl_handler_init_class(piVar8,1,0);
  if (iVar5 == 0) {
    iVar5 = v4l2_ctrl_new_std(piVar8,DAT_0001f634,DAT_0001f638,0,0,0,DAT_0001f610,DAT_0001f614,1,0,
                              DAT_0001f610,DAT_0001f614);
    piVar1[0x7f] = iVar5;
    if (iVar5 != 0) {
      *(uint *)(iVar5 + 0x7c) = *(uint *)(iVar5 + 0x7c) | 0x80;
    }
    piVar1[0x29] = (int)piVar8;
    if (piVar1[0x8d] == 0) {
      pcVar4 = (char *)(*(undefined4 **)(iVar2 + 8))[0xb];
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)**(undefined4 **)(iVar2 + 8);
      }
      strncpy((char *)__dest,pcVar4,0x20);
      piVar1[0x76] = 1;
      piVar1[0x73] = 0;
      piVar1[0x74] = 0;
      piVar1[0x7e] = 0;
      *(undefined1 *)(piVar1 + 0x78) = 0;
      *(undefined1 *)(piVar1 + 0x7a) = 0;
      *(undefined1 *)(piVar1 + 0x7c) = 0;
      if ((char)piVar1[0xa5] != '\0') {
        piVar8 = piVar1 + 1;
        v4l2_async_notifier_init(piVar8);
        iVar2 = v4l2_async_notifier_parse_fwnode_endpoints_by_port
                          (*piVar1,piVar8,0x28,0,DAT_0001f63c);
        iVar5 = DAT_0001f640;
        if (-1 < iVar2) {
          piVar1[0x3c] = (int)piVar8;
          piVar1[1] = iVar5;
          uVar10 = v4l2_async_subdev_notifier_register(piVar6,piVar8);
          if ((int)uVar10 == 0) {
            v4l2_async_register_subdev(piVar6,(int)((ulonglong)uVar10 >> 0x20),0);
          }
          else {
            printk(DAT_0001f644,__dest);
            v4l2_async_notifier_cleanup(piVar8);
          }
        }
      }
      piVar1[0xa6] = 0;
      piVar1[0xa7] = 0;
      piVar1[0x9b] = -0x20;
      piVar1[0x9c] = (int)(piVar1 + 0x9c);
      piVar1[0x9d] = (int)(piVar1 + 0x9c);
      piVar1[0x9e] = DAT_0001f648;
      piVar1[0xa0] = (int)(piVar1 + 0xa0);
      piVar1[0xa1] = (int)(piVar1 + 0xa0);
      goto LAB_0001f5f4;
    }
    v4l2_ctrl_handler_free(piVar8);
    iVar5 = piVar1[0x8d];
  }
  if (iVar5 < 0) {
    return iVar5;
  }
LAB_0001f5f4:
  pm_runtime_enable(iVar9);
  return 0;
}



/* ===== sditf_s_power @ 0001f64c size=250 ===== */

uint sditf_s_power(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = (int *)(param_1 + 0x264);
  iVar6 = *(int *)(param_1 + 0x104);
  if (param_2 == 0) {
    HintPreloadData(piVar5);
    do {
      ExclusiveAccess(piVar5);
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 + -1 != 0) {
      return 0;
    }
  }
  else {
    HintPreloadData(piVar5);
    do {
      ExclusiveAccess(piVar5);
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + 1;
    if (1 < iVar4 + 1) {
      return 0;
    }
  }
  if (*(int *)(iVar6 + 0x736c) < 9) {
    return 0;
  }
  if (2 < *DAT_0001f748) {
    printk(DAT_0001f750,iVar6 + 0x1c,DAT_0001f74c,*(undefined4 *)(param_1 + 0x1c4),
           *(undefined4 *)(param_1 + 0x108),param_2,param_3);
  }
  mutex_lock(iVar6 + 0x7378);
  if (param_2 == 0) {
    v4l2_pipeline_pm_put(iVar6 + 0x5c0);
    __pm_runtime_idle(*(undefined4 *)(iVar6 + 8),4);
    uVar2 = 0;
  }
  else {
    iVar4 = *(int *)(iVar6 + 8);
    uVar2 = __pm_runtime_resume(iVar4,4);
    if ((int)uVar2 < 0) {
      piVar5 = (int *)(iVar4 + 0xd4);
      HintPreloadData(piVar5);
      do {
        ExclusiveAccess(piVar5);
        if (*piVar5 == 0) goto LAB_0001f726;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = *piVar5 + -1;
    }
    else {
      uVar2 = 0;
    }
LAB_0001f726:
    uVar3 = v4l2_pipeline_pm_get(iVar6 + 0x5c0);
    uVar2 = uVar2 | uVar3;
  }
  printk(DAT_0001f754,iVar6 + 0x860,param_2,*(undefined4 *)(iVar6 + 0x600));
  mutex_unlock(iVar6 + 0x7378);
  return uVar2;
}



/* ===== sditf_s_stream @ 0001f758 size=564 ===== */

undefined4 sditf_s_stream(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_70 [92];
  
  piVar5 = (int *)(param_1 + 0x268);
  if (param_2 == 0) {
    HintPreloadData(piVar5);
    do {
      ExclusiveAccess(piVar5);
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar3 + -1;
    if (iVar3 + -1 != 0) {
      return 0;
    }
  }
  else {
    HintPreloadData(piVar5);
    do {
      ExclusiveAccess(piVar5);
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar3 + 1;
    if (1 < iVar3 + 1) {
      return 0;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x104) + 0x736c) < 9) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1a4) == 1) {
    return 0;
  }
  if (2 < *DAT_0001f98c) {
    printk(DAT_0001f994,*(int *)(param_1 + 0x104) + 0x1c,DAT_0001f990,
           *(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x108),param_2);
  }
  iVar7 = param_1 + -0x34;
  iVar3 = *(int *)(param_1 + 0x104);
  if (param_2 != 0) {
    iVar4 = 0;
    piVar5 = (int *)(*(int *)(iVar3 + 0x7ed4) + 0xa0);
    for (iVar2 = 0; iVar2 < *(int *)(*(int *)(iVar3 + 0x7ed4) + 0xbc); iVar2 = iVar2 + 1) {
      if ((*piVar5 != 0) && (*(int *)(*piVar5 + 0x8040) != 0)) {
        iVar4 = iVar4 + 1;
      }
      piVar5 = piVar5 + 1;
    }
    *(bool *)(iVar3 + 0x8036) = *(char *)(iVar3 + 0x8035) != '\0' && iVar4 == 1;
    sditf_get_set_fmt(param_1,0,auStack_70);
    if (*(int *)(param_1 + 0x1a4) == 0) {
      iVar2 = *(int *)(param_1 + 0x1c4);
      uVar6 = 0;
      if (iVar2 == 1) {
LAB_0001f808:
        sditf_channel_enable(iVar7,uVar6);
      }
      else {
        if (iVar2 == 2) {
          sditf_channel_enable(iVar7,1);
          uVar6 = 2;
          goto LAB_0001f830;
        }
        if (iVar2 == 3) {
          sditf_channel_enable(iVar7);
          uVar6 = 1;
          goto LAB_0001f808;
        }
      }
      uVar6 = 2;
    }
    else if (*(int *)(param_1 + 0x1a4) == 2) {
      uVar6 = 8;
    }
    else {
      uVar6 = 2;
    }
LAB_0001f830:
    iVar7 = *(int *)(param_1 + 0x108);
    if ((iVar7 == 0) || (iVar7 == 7)) {
      iVar3 = iVar3 + 1000;
    }
    else if (iVar7 == 5) {
      rkcif_do_start_stream(iVar3 + 1000,uVar6);
      iVar3 = iVar3 + 0xff0;
    }
    else {
      if (iVar7 != 6) goto LAB_0001f844;
      rkcif_do_start_stream(iVar3 + 1000,uVar6);
      rkcif_do_start_stream(iVar3 + 0xff0,uVar6);
      iVar3 = iVar3 + 0x1bf8;
    }
    rkcif_do_start_stream(iVar3,uVar6);
LAB_0001f844:
    *(int *)(param_1 + 0x24c) = param_1 + 0x24c;
    *(int *)(param_1 + 0x250) = param_1 + 0x24c;
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x1c4);
  if (iVar2 == 1) {
    uVar6 = 0;
LAB_0001f8b0:
    sditf_channel_disable(iVar7,uVar6);
  }
  else {
    if (iVar2 == 2) {
LAB_0001f904:
      uVar6 = 1;
      goto LAB_0001f8b0;
    }
    if (iVar2 == 3) {
      sditf_channel_disable(iVar7,0);
      goto LAB_0001f904;
    }
  }
  iVar7 = *(int *)(param_1 + 0x108);
  if (*(int *)(param_1 + 0x1a4) == 2) {
    uVar6 = 8;
  }
  else {
    uVar6 = 2;
  }
  if ((iVar7 == 0) || (iVar7 == 7)) {
    iVar3 = iVar3 + 1000;
  }
  else if (iVar7 == 5) {
    rkcif_do_stop_stream(iVar3 + 1000,uVar6);
    iVar3 = iVar3 + 0xff0;
  }
  else {
    if (iVar7 != 6) goto LAB_0001f8d6;
    rkcif_do_stop_stream(iVar3 + 1000,uVar6);
    rkcif_do_stop_stream(iVar3 + 0xff0,uVar6);
    iVar3 = iVar3 + 0x1bf8;
  }
  rkcif_do_stop_stream(iVar3,uVar6);
LAB_0001f8d6:
  iVar7 = *(int *)(param_1 + 0x104);
  uVar6 = *(undefined4 *)(param_1 + 0x254);
  iVar3 = iVar7 + 1000;
  if (*(int *)(param_1 + 0x108) == 5) {
    rkcif_free_rx_buf(iVar3,uVar6);
    uVar6 = *(undefined4 *)(param_1 + 0x254);
    iVar3 = iVar7 + 0xff0;
  }
  else if (*(int *)(param_1 + 0x108) == 6) {
    rkcif_free_rx_buf(iVar3,uVar6);
    rkcif_free_rx_buf(iVar7 + 0xff0,*(undefined4 *)(param_1 + 0x254));
    uVar6 = *(undefined4 *)(param_1 + 0x254);
    iVar3 = iVar7 + 0x1bf8;
  }
  rkcif_free_rx_buf(iVar3,uVar6);
  *(undefined1 *)(iVar7 + 0x8035) = 0;
  return 0;
}



/* ===== sditf_change_to_online @ 0001f998 size=158 ===== */

void sditf_change_to_online(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (iVar2 == 1) {
LAB_0001f9ae:
    sditf_channel_enable(param_1,uVar1);
  }
  else {
    if (iVar2 == 2) {
      uVar1 = 1;
      goto LAB_0001f9ae;
    }
    if (iVar2 == 3) {
      sditf_channel_enable();
      uVar1 = 1;
      goto LAB_0001f9ae;
    }
  }
  iVar2 = *(int *)(param_1 + 0x13c);
  if (iVar2 == 0) {
    rkcif_free_rx_buf(iVar3 + 1000,*(undefined4 *)(param_1 + 0x288));
    *(undefined1 *)(iVar3 + 0xfe6) = 0;
  }
  else {
    if (iVar2 == 5) {
      rkcif_free_rx_buf(iVar3 + 0xff0,*(undefined4 *)(param_1 + 0x288));
      iVar2 = 0x1bee;
      *(undefined1 *)(iVar3 + 0xfe6) = 0;
    }
    else {
      if (iVar2 != 6) goto LAB_0001f9c8;
      rkcif_free_rx_buf(iVar3 + 0x1bf8,*(undefined4 *)(param_1 + 0x288));
      *(undefined1 *)(iVar3 + 0xfe6) = 0;
      *(undefined1 *)(iVar3 + 0x1bee) = 0;
      iVar2 = 0x27f6;
    }
    *(undefined1 *)(iVar3 + iVar2) = 0;
  }
LAB_0001f9c8:
  *(undefined4 *)(iVar3 + 0x8004) = 0;
  *(undefined4 *)(iVar3 + 0x7ffc) = 0;
  *(undefined4 *)(iVar3 + 0x8000) = 0;
  return;
}



/* ===== sditf_s_rx_buffer @ 0001fa36 size=698 ===== */

undefined4 sditf_s_rx_buffer(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_24 [4];
  
  iVar7 = *(int *)(param_1 + 0x104);
  if (param_2 == 0) {
    printk(DAT_0001fcf0,iVar7 + 0x1c);
    return 0xffffffea;
  }
  iVar4 = *(int *)(iVar7 + 0x73a1);
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0x1c) != 0) {
      return 0xffffffea;
    }
LAB_0001fa66:
    iVar4 = iVar7 + 1000;
  }
  else if (iVar4 == 5) {
    if (*(int *)(param_2 + 0x1c) != 0) {
      bVar8 = *(int *)(param_2 + 0x1c) == 1;
LAB_0001fa7c:
      if (!bVar8) {
        return 0xffffffea;
      }
      goto LAB_0001fa66;
    }
LAB_0001fa74:
    iVar4 = iVar7 + 0xff0;
  }
  else {
    if (iVar4 != 6) {
      return 0xffffffea;
    }
    iVar4 = *(int *)(param_2 + 0x1c);
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        bVar8 = iVar4 == 2;
        goto LAB_0001fa7c;
      }
      goto LAB_0001fa74;
    }
    iVar4 = iVar7 + 0x1bf8;
  }
  if (iVar4 == 0) {
    return 0xffffffea;
  }
  iVar1 = to_cif_rx_buf(param_2);
  disableIRQinterrupts();
  *(int *)(iVar4 + 0xbb0) = *(int *)(iVar4 + 0xbb0) + 1;
  *(int *)(iVar4 + 0xbf0) = *(int *)(param_2 + 0x18) + 1;
  if ((iVar4 + 0xba8 == *(int *)(iVar4 + 0xba8)) || (*(char *)(iVar7 + 0x8035) == '\0')) {
    if (*(char *)(param_2 + 0x27) == '\0') {
      piVar3 = *(int **)(iVar4 + 0xbac);
      *(int *)(iVar4 + 0xbac) = iVar1 + 4;
      *(int *)(iVar1 + 4) = iVar4 + 0xba8;
      *(int **)(iVar1 + 8) = piVar3;
      *piVar3 = iVar1 + 4;
      rkcif_assign_check_buffer_update_toisp(iVar4);
      if (*(int *)(iVar7 + 0x8038) != 0) {
        memset((void *)(*(int *)(iVar1 + 100) + *(int *)(iVar4 + 0x594) * -3 +
                       *(int *)(iVar1 + 0x60)),0,*(int *)(iVar4 + 0x594) * 3);
        if (*(char *)(iVar7 + 0x8035) == '\0') {
          (**(code **)(*(int *)(*(int *)(iVar7 + 0x7ed4) + 0x9c) + 0x14))
                    (*(undefined4 *)(iVar1 + 0x5c));
        }
        else {
          dma_sync_single_for_device
                    (*(undefined4 *)(iVar7 + 8),
                     *(int *)(iVar1 + 0x54) + *(int *)(iVar1 + 100) + *(int *)(iVar4 + 0x594) * -3,
                     *(int *)(iVar4 + 0x594) * 3,2);
        }
      }
      goto LAB_0001fb04;
    }
  }
  else {
    if ((*(int *)(param_2 + 0x1c) != 0) && (*(char *)(param_2 + 0x27) != '\0')) goto LAB_0001fb12;
    disableIRQinterrupts();
    piVar3 = *(int **)(param_1 + 0x250);
    *(int *)(param_1 + 0x250) = iVar1 + 0xc;
    *(int *)(iVar1 + 0xc) = param_1 + 0x24c;
    *(int **)(iVar1 + 0x10) = piVar3;
    *piVar3 = iVar1 + 0xc;
    queue_work_on(1,*DAT_0001fcf4,param_1 + 0x238);
LAB_0001fb04:
    if (*(char *)(param_2 + 0x27) == '\0') goto LAB_0001fb12;
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (*(char *)(iVar4 + 0xc05) == '\0') {
      *(undefined1 *)(iVar4 + 0xc06) = 1;
    }
    else {
      sditf_change_to_online(param_1 + -0x34);
    }
    if (2 < *DAT_0001fd00) {
      printk(DAT_0001fd04,iVar7 + 0x1c);
    }
  }
LAB_0001fb12:
  uVar5 = *(uint *)(param_2 + 0x20);
  if ((uVar5 == 0) || (*(int *)(iVar7 + 0x8044) != 0)) {
    if (uVar5 < *(uint *)(iVar7 + 0x8048)) {
      *(uint *)(iVar7 + 0x8048) = uVar5;
      uVar5 = DAT_0001fcf8;
      if (*(char *)(iVar7 + 0x8035) == '\0') {
        uVar5 = DAT_0001fcfc;
      }
      iVar4 = *(int *)(param_2 + 0x20) * 1000;
      if (uVar5 < (uint)(iVar4 + *(int *)(iVar7 + 0x804c))) {
        uVar5 = iVar4 - uVar5;
      }
      iVar4 = div_u64_rem(uVar5,0,*(int *)(iVar7 + 0x804c),auStack_24);
      *(int *)(iVar7 + 0x8044) = iVar4;
      *(int *)(iVar7 + 0x8004) = *(int *)(iVar7 + 0x39c) - iVar4;
    }
    if ((*(int *)(iVar7 + 0x8038) != 0) && (*(uint *)(param_2 + 0x18) < 0xf)) {
      printk(DAT_0001fd10,iVar7 + 0x1c,*(undefined4 *)(param_2 + 0x20),*(uint *)(param_2 + 0x18),
             *(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(iVar7 + 0x8044),
             *(undefined4 *)(iVar1 + 0x54));
    }
  }
  else {
    if (*(int *)(iVar7 + 0x804c) == 0) {
      uVar2 = rkcif_get_linetime(iVar4);
      *(undefined4 *)(iVar7 + 0x804c) = uVar2;
    }
    uVar5 = DAT_0001fcf8;
    *(undefined4 *)(iVar7 + 0x8048) = *(undefined4 *)(param_2 + 0x20);
    if (*(char *)(iVar7 + 0x8035) == '\0') {
      uVar5 = DAT_0001fcfc;
    }
    iVar4 = *(int *)(param_2 + 0x20) * 1000;
    if (uVar5 < (uint)(iVar4 + *(int *)(iVar7 + 0x804c))) {
      uVar5 = iVar4 - uVar5;
    }
    iVar4 = div_u64_rem(uVar5,0,*(int *)(iVar7 + 0x804c),auStack_24);
    *(int *)(iVar7 + 0x8044) = iVar4;
    iVar6 = *(int *)(iVar7 + 0x39c) - iVar4;
    *(int *)(iVar7 + 0x8004) = iVar6;
    if ((*(int *)(iVar7 + 0x8038) != 0) && (*(uint *)(param_2 + 0x18) < 0xf)) {
      printk(DAT_0001fd08,iVar7 + 0x1c,DAT_0001fd0c,*(undefined4 *)(param_2 + 0x20),
             *(undefined4 *)(iVar7 + 0x804c),iVar4,iVar6,*(uint *)(param_2 + 0x18),
             *(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(iVar1 + 0x54));
    }
  }
  return 0;
}



/* ===== rkcif_proc_open @ 0001fd14 size=22 ===== */

void rkcif_proc_open(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = PDE_DATA();
  single_open(param_2,DAT_0001fd2c,uVar1);
  return;
}



/* ===== div_u64_rem @ 0001fd30 size=38 ===== */

undefined8 div_u64_rem(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = __aeabi_uidivmod(param_1,param_3,param_3,0,param_4);
    uVar1 = 0;
  }
  else {
    __do_div64();
    uVar2 = CONCAT44(extraout_r1,extraout_r2);
    uVar1 = extraout_r3;
  }
  *param_4 = (int)((ulonglong)uVar2 >> 0x20);
  return CONCAT44(uVar1,(int)uVar2);
}



/* ===== rkcif_proc_show @ 0001fd56 size=1112 ===== */

undefined4 rkcif_proc_show(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined1 auStack_2c [8];
  
  iVar10 = *(int *)(param_1 + 0x40);
  if (iVar10 == 0) {
    seq_puts(param_1,DAT_000202a4);
  }
  else {
    uVar17 = 10;
    seq_printf(param_1,DAT_00020088,0,1,10);
    iVar5 = *(int *)(iVar10 + 0x739c);
    uVar1 = DAT_0002025c;
    if ((iVar5 != 0) && (uVar1 = DAT_0002008c, iVar5 != 1)) {
      uVar1 = DAT_00020090;
    }
    seq_printf(param_1,DAT_00020094,uVar1,iVar5,uVar17);
    uVar1 = DAT_0002012c;
    uVar6 = *(uint *)(iVar10 + 0x7fd0);
    iVar5 = 0;
    uVar8 = DAT_000200a0;
    if (uVar6 < 4) {
      uVar8 = *(undefined4 *)(DAT_0002009c + uVar6 * 4);
    }
    seq_printf(param_1,DAT_00020098,uVar8,uVar6,uVar17);
    iVar11 = *(int *)(iVar10 + 0x7ed4);
    puVar12 = (undefined4 *)(iVar11 + 0x14);
    for (; iVar5 < *(int *)(iVar11 + 0x50); iVar5 = iVar5 + 1) {
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0xc4) + 4) + iVar5 * 4);
      uVar17 = clk_get_rate(*puVar12);
      seq_printf(param_1,uVar1,uVar8,uVar17);
      puVar12 = puVar12 + 1;
    }
    if (0 < *(int *)(iVar10 + 0x71a8)) {
      seq_puts(param_1,DAT_000200a4);
      seq_printf(param_1,DAT_000200a8,*(int *)(iVar10 + 0x350) + 0x74);
      uVar17 = DAT_00020130;
      uVar1 = DAT_000200b4;
      iVar5 = *(int *)(iVar10 + 0x354);
      uVar6 = *(uint *)(iVar10 + 0x358);
      if (iVar5 - 1U < 2) {
        uVar8 = DAT_000200b0;
        if (iVar5 != 1) {
          uVar8 = DAT_000200ac;
        }
        seq_printf(param_1,DAT_000200b8,uVar8);
        uVar8 = uVar17;
        if ((uVar6 & 4) == 0) {
          uVar8 = uVar1;
        }
        seq_printf(param_1,DAT_000200bc,uVar8);
        if ((uVar6 & 0x10) == 0) {
          uVar17 = uVar1;
        }
        seq_printf(param_1,DAT_000200c0,uVar17);
      }
      else {
        uVar1 = DAT_00020278;
        if (((iVar5 != 5) && (uVar1 = DAT_0002027c, iVar5 != 6)) &&
           (uVar1 = DAT_00020260, iVar5 != 4)) {
          uVar1 = DAT_00020264;
        }
        seq_printf(param_1,DAT_00020268,uVar1);
        seq_printf(param_1,DAT_0002026c,*(undefined4 *)(iVar10 + 0x38c));
        seq_puts(param_1,DAT_00020270);
        uVar1 = DAT_000202a8;
        uVar17 = DAT_00020280;
        if ((uVar6 & 0xf0) != 0) {
          iVar5 = 0;
          do {
            if ((int)((uVar6 >> (iVar5 + 4U & 0xff)) << 0x1f) < 0) {
              seq_printf(param_1,uVar1,iVar5);
            }
            iVar5 = iVar5 + 1;
            uVar17 = DAT_00020274;
          } while (iVar5 != 4);
        }
        seq_puts(param_1,uVar17);
      }
      iVar5 = *(int *)(iVar10 + 0x73a1);
      uVar1 = DAT_00020284;
      if (((iVar5 != 0) && (uVar1 = DAT_00020288, iVar5 != 7)) && (uVar1 = DAT_000200c4, iVar5 != 5)
         ) {
        uVar1 = DAT_000200c8;
      }
      seq_printf(param_1,DAT_000200cc,uVar1);
      iVar5 = DAT_0002009c;
      iVar4 = 0;
      iVar11 = DAT_0002009c + 0x10;
      do {
        if (**(int **)(iVar10 + 0x960) == *(int *)(iVar4 * 8 + iVar11 + 4)) {
          uVar1 = *(undefined4 *)(DAT_0002009c + iVar4 * 8 + 0x10);
          break;
        }
        iVar4 = iVar4 + 1;
        uVar1 = DAT_00020264;
      } while (iVar4 != 0xa1);
      uVar17 = __aeabi_uidiv(*(undefined4 *)(iVar10 + 0x364),*(undefined4 *)(iVar10 + 0x360));
      seq_printf(param_1,DAT_000200d0,uVar1,*(undefined4 *)(iVar10 + 0x398),
                 *(undefined4 *)(iVar10 + 0x39c),uVar17);
      seq_printf(param_1,DAT_000200d4,*(undefined4 *)(iVar10 + 0x3b0),
                 *(undefined4 *)(iVar10 + 0x3b4),*(undefined4 *)(iVar10 + 0x3b8),
                 *(undefined4 *)(iVar10 + 0x3bc));
      disableIRQinterrupts();
      uVar6 = *(uint *)(iVar10 + 0xa58);
      uVar7 = *(uint *)(iVar10 + 0xa5c);
      uVar13 = *(uint *)(iVar10 + 0xa60);
      uVar14 = *(uint *)(iVar10 + 0xa64);
      bVar15 = uVar7 <= uVar14;
      if (uVar14 == uVar7) {
        bVar15 = uVar6 <= uVar13;
      }
      if (bVar15) {
        iVar4 = uVar13 - uVar6;
        iVar3 = (uVar14 - uVar7) - (uint)(uVar13 < uVar6);
      }
      else {
        iVar4 = uVar6 - uVar13;
        iVar3 = (uVar7 - uVar14) - (uint)(uVar6 < uVar13);
      }
      uVar16 = div_u64_rem(iVar4,iVar3,DAT_000200d8,auStack_2c);
      seq_puts(param_1,DAT_000200dc);
      iVar4 = 0;
      do {
        if (*(int *)(*(int *)(iVar10 + 0x95c) + 8) == *(int *)(iVar11 + iVar4 * 8 + 4)) {
          uVar1 = *(undefined4 *)(iVar5 + iVar4 * 8 + 0x10);
          break;
        }
        iVar4 = iVar4 + 1;
        uVar1 = DAT_00020264;
      } while (iVar4 != 0xa1);
      uVar17 = *(undefined4 *)(iVar10 + 0x71e4);
      uVar8 = *(undefined4 *)(iVar10 + 0x71e0);
      uVar9 = *(undefined4 *)(iVar10 + 0x71d8);
      seq_printf(param_1,DAT_000200e0,uVar1,*(undefined4 *)(iVar10 + 0x71d4),uVar9,uVar8,uVar17);
      uVar1 = DAT_000200e8;
      if (*(char *)(iVar10 + 0xfe3) == '\0') {
        uVar1 = DAT_000200e4;
      }
      seq_printf(param_1,DAT_000200ec,uVar1,DAT_000200e4,uVar9,uVar8,uVar17);
      seq_printf(param_1,DAT_000200f0,*(int *)(iVar10 + 0x904) + -1);
      if (*(int *)(iVar10 + 0x7edc) == 1) {
        uVar1 = div_u64_rem(*(undefined4 *)(iVar10 + 0xb50),*(undefined4 *)(iVar10 + 0xb54),
                            DAT_000200d8,auStack_2c);
        seq_printf(param_1,DAT_000200f4,uVar1);
        iVar5 = *(int *)(iVar10 + 0x73a1);
        if ((iVar5 == 0) || (iVar5 == 7)) {
          uVar2 = div_u64_rem(*(undefined4 *)(iVar10 + 0xb48),*(undefined4 *)(iVar10 + 0xb4c),
                              DAT_000200d8,auStack_2c);
          uVar1 = DAT_000200f8;
        }
        else {
          uVar1 = div_u64_rem(*(undefined4 *)(iVar10 + 0xb48),*(undefined4 *)(iVar10 + 0xb4c),
                              DAT_0002028c,auStack_2c);
          seq_printf(param_1,DAT_00020290,uVar1);
          uVar2 = div_u64_rem(*(undefined4 *)(iVar10 + 0xb58),*(undefined4 *)(iVar10 + 0xb5c),
                              DAT_0002028c,auStack_2c);
          uVar1 = DAT_00020294;
        }
        seq_printf(param_1,uVar1,uVar2);
      }
      seq_printf(param_1,DAT_000200fc,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar9,uVar8,
                 uVar17);
      uVar16 = div_u64_rem(1000,0,(int)uVar16,auStack_2c);
      seq_printf(param_1,DAT_00020100,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      seq_puts(param_1,DAT_00020104);
      uVar7 = *(uint *)(iVar10 + 0x7f40);
      uVar6 = *(uint *)(iVar10 + 0x7f48);
      seq_printf(param_1,DAT_00020108,uVar7 + uVar6,
                 *(int *)(iVar10 + 0x7f44) + *(int *)(iVar10 + 0x7f4c) + (uint)CARRY4(uVar7,uVar6));
      if (*(int *)(iVar10 + 0x354) - 1U < 2) {
        seq_printf(param_1,DAT_0002010c,*(undefined4 *)(iVar10 + 0x7f10),
                   *(undefined4 *)(iVar10 + 0x7f14));
        seq_printf(param_1,DAT_00020110,*(undefined4 *)(iVar10 + 0x7f28),
                   *(undefined4 *)(iVar10 + 0x7f2c));
        seq_printf(param_1,DAT_00020114,*(undefined4 *)(iVar10 + 0x7f20),
                   *(undefined4 *)(iVar10 + 0x7f24));
        seq_printf(param_1,DAT_00020118,*(undefined4 *)(iVar10 + 0x7f18),
                   *(undefined4 *)(iVar10 + 0x7f1c));
        seq_printf(param_1,DAT_0002011c,*(undefined4 *)(iVar10 + 0x7f38),
                   *(undefined4 *)(iVar10 + 0x7f3c));
        uVar17 = *(undefined4 *)(iVar10 + 0x7f30);
        uVar8 = *(undefined4 *)(iVar10 + 0x7f34);
        uVar1 = DAT_00020120;
      }
      else {
        seq_printf(param_1,DAT_00020298,*(undefined4 *)(iVar10 + 0x7ef8),
                   *(undefined4 *)(iVar10 + 0x7efc));
        seq_printf(param_1,DAT_0002029c,*(undefined4 *)(iVar10 + 0x7f00),
                   *(undefined4 *)(iVar10 + 0x7f04));
        uVar17 = *(undefined4 *)(iVar10 + 0x7f08);
        uVar8 = *(undefined4 *)(iVar10 + 0x7f0c);
        uVar1 = DAT_000202a0;
      }
      seq_printf(param_1,uVar1,uVar17,uVar8);
      seq_printf(param_1,DAT_00020124,*(uint *)(iVar10 + 0x7f48),*(undefined4 *)(iVar10 + 0x7f4c));
      seq_printf(param_1,DAT_00020128,*(uint *)(iVar10 + 0x7f40),*(undefined4 *)(iVar10 + 0x7f44));
    }
  }
  return 0;
}



/* ===== rkcif_proc_init @ 000202ac size=60 ===== */

undefined4 rkcif_proc_init(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (*(int **)(param_1 + 8))[0xb];
  if (iVar1 == 0) {
    iVar1 = **(int **)(param_1 + 8);
  }
  iVar1 = proc_create_data(iVar1,0x124,0,DAT_000202e8,param_1,param_2);
  *(int *)(param_1 + 0x7ef0) = iVar1;
  if (iVar1 == 0) {
    piVar2 = *(int **)(param_1 + 8);
    iVar1 = piVar2[0xb];
    if (iVar1 == 0) {
      iVar1 = *piVar2;
    }
    _dev_err(piVar2,DAT_000202ec,iVar1);
    uVar3 = 0xffffffed;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== rkcif_proc_cleanup @ 000202f0 size=14 ===== */

void rkcif_proc_cleanup(int param_1)

{
  int iVar1;
  
  iVar1 = (*(int **)(param_1 + 8))[0xb];
  if (iVar1 == 0) {
    iVar1 = **(int **)(param_1 + 8);
  }
  remove_proc_entry(iVar1,0);
  return;
}



/* ===== list_del @ 00020300 size=22 ===== */

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



/* ===== rkcif_scale_enum_fmt_vid_cap @ 00020316 size=28 ===== */

undefined4 rkcif_scale_enum_fmt_vid_cap(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if (*param_3 < 4) {
    uVar1 = 0;
    param_3[0xb] = *(uint *)(*param_3 * 0x1c + DAT_00020334 + 8);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== rkcif_scale_fop_release @ 00020338 size=44 ===== */

int rkcif_scale_fop_release(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = video_devdata();
  iVar3 = *(int *)(iVar1 + -0x1d4);
  iVar2 = vb2_fop_release(param_1);
  if (iVar2 == 0) {
    v4l2_pipeline_pm_put(iVar1);
  }
  __pm_runtime_idle(*(undefined4 *)(iVar3 + 8),4);
  return iVar2;
}



/* ===== rkcif_scale_enum_frameintervals @ 00020364 size=128 ===== */

int rkcif_scale_enum_frameintervals(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 auStack_38 [4];
  int local_34;
  int local_30;
  
  iVar1 = video_devdata();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x130) + 4);
  if (*param_3 != 0) {
    return -0x16;
  }
  if ((iVar1 == -0x350) || (iVar2 = *(int *)(iVar1 + 0x350), iVar2 == 0)) {
    printk(DAT_000203e8,iVar1 + 0x1c,DAT_000203e4);
    return -0x13;
  }
  iVar1 = *(int *)(*(int *)(iVar2 + 0x68) + 0xc);
  if ((iVar1 != 0) && (pcVar4 = *(code **)(iVar1 + 0x30), pcVar4 != (code *)0x0)) {
    if ((*(int *)(DAT_000203ec + 0xc) == 0) ||
       (pcVar3 = *(code **)(*(int *)(DAT_000203ec + 0xc) + 0x30), pcVar3 == (code *)0x0)) {
      iVar1 = (*pcVar4)(iVar2,auStack_38);
    }
    else {
      iVar1 = (*pcVar3)();
    }
    if (iVar1 == 0) goto LAB_000203c0;
    if (iVar1 != DAT_000203f0) {
      return iVar1;
    }
  }
  local_34 = 1;
  local_30 = 0x1e;
LAB_000203c0:
  param_3[4] = 2;
  param_3[9] = 1;
  param_3[10] = 1;
  param_3[7] = 1;
  param_3[8] = 1;
  param_3[5] = local_34;
  param_3[6] = local_30;
  return 0;
}



/* ===== rkcif_scale_vb2_queue_setup @ 000203f4 size=80 ===== */

undefined4
rkcif_scale_vb2_queue_setup(int *param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[10];
  iVar3 = *(int *)(iVar2 + 0x5e4);
  iVar4 = *(int *)(iVar2 + 4);
  *param_3 = (uint)*(byte *)(iVar3 + 0x15);
  for (uVar1 = 0; uVar1 < *(byte *)(iVar3 + 0x15); uVar1 = uVar1 + 1) {
    param_4[uVar1] = *(undefined4 *)(uVar1 * 0x14 + iVar2 + 0x538);
  }
  if (0 < *DAT_00020444) {
    printk(DAT_0002044c,iVar4 + 0x1c,*(undefined4 *)(DAT_00020448 + *param_1 * 4),*param_2,*param_4,
           param_2,param_3);
  }
  return 0;
}



/* ===== rkcif_scale_stop @ 00020450 size=56 ===== */

void rkcif_scale_stop(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sbyte sVar1;
  
  sVar1 = (*param_1 & 7) * '\b';
  rkcif_write_register_and
            (*(undefined4 *)(param_1 + 4),0x93,~(0x1f << sVar1 + 3 | 3 << sVar1 + 1 | 1 << sVar1),
             1 << sVar1,param_4);
  param_1[0x608] = 1;
  param_1[0x609] = 0;
  param_1[0x60a] = 0;
  param_1[0x60b] = 0;
  param_1[0x618] = 0;
  param_1[0x619] = 0;
  param_1[0x61a] = 0;
  param_1[0x61b] = 0;
  return;
}



/* ===== rkcif_scale_enum_input @ 00020488 size=32 ===== */

undefined4 rkcif_scale_enum_input(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000204a8;
  if (*param_3 == 0) {
    param_3[9] = 2;
    strscpy(param_3 + 1,uVar1,0x20);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== rkcif_scale_vb2_buf_queue @ 000204ac size=246 ===== */

void rkcif_scale_vb2_buf_queue(int *param_1)

{
  int *piVar1;
  void *__s;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  piVar1 = DAT_000205a8;
  piVar5 = param_1 + 0xa2;
  iVar7 = *(int *)(*param_1 + 0x28);
  iVar3 = *(int *)(iVar7 + 0x5e4);
  iVar10 = *(int *)(*(int *)(iVar7 + 4) + 0x7ed4);
  memset(piVar5,0,0x20);
  piVar9 = piVar5;
  for (iVar8 = 0; uVar4 = (uint)*(byte *)(iVar3 + 0x15), iVar8 < (int)uVar4; iVar8 = iVar8 + 1) {
    __s = (void *)vb2_plane_vaddr(param_1,iVar8);
    if (*(char *)(iVar10 + 0x1a6) == '\0') {
      piVar2 = (int *)vb2_plane_cookie(param_1,iVar8);
      iVar6 = *piVar2;
    }
    else {
      piVar2 = (int *)vb2_plane_cookie(param_1,iVar8);
      iVar6 = *(int *)(*piVar2 + 0xc);
    }
    *piVar9 = iVar6;
    if (((*piVar1 != 0) && (__s != (void *)0x0)) && (*(char *)(iVar10 + 0x1a4) == '\0')) {
      iVar6 = iVar8 * 0x14 + iVar7;
      memset(__s,0,*(size_t *)(iVar6 + 0x538));
      if (0 < *piVar1) {
        printk(DAT_000205a4,*(int *)(iVar7 + 4) + 0x1c,*(undefined4 *)(iVar6 + 0x538));
      }
    }
    piVar9 = piVar9 + 1;
  }
  if (uVar4 == 1) {
    for (iVar8 = 0; iVar8 < (int)(*(byte *)(iVar3 + 0x14) - 1); iVar8 = iVar8 + 1) {
      iVar10 = *piVar5;
      piVar5 = piVar5 + 1;
      *piVar5 = *(int *)(iVar7 + 0x528) * *(int *)(iVar8 * 0x14 + iVar7 + 0x53c) + iVar10;
    }
  }
  disableIRQinterrupts();
  piVar5 = *(int **)(iVar7 + 0x518);
  *(int **)(iVar7 + 0x518) = param_1 + 0xa0;
  param_1[0xa0] = iVar7 + 0x514;
  param_1[0xa1] = (int)piVar5;
  *piVar5 = (int)(param_1 + 0xa0);
  return;
}



/* ===== rkcif_scale_vb2_stop_streaming @ 000205ac size=238 ===== */

void rkcif_scale_vb2_stop_streaming(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_2c [20];
  
  iVar2 = *(int *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(iVar2 + 0x510);
  iVar5 = *(int *)(iVar2 + 4) + 0x7384;
  mutex_lock(iVar5);
  *(undefined1 *)(iVar2 + 0x61c) = 1;
  _cond_resched();
  if (*(int *)(iVar2 + 0x608) == 2) {
    init_wait_entry(auStack_2c,0);
    iVar3 = 300;
    while( true ) {
      prepare_to_wait_event(iVar2 + 0x51c,auStack_2c,2);
      if (*(int *)(iVar2 + 0x608) != 2) break;
      if (iVar3 == 0) goto LAB_00020600;
      iVar3 = schedule_timeout(iVar3);
    }
    if (iVar3 == 0) {
      iVar3 = 1;
    }
LAB_00020600:
    finish_wait(iVar2 + 0x51c,auStack_2c);
    if (iVar3 == 0) {
      rkcif_scale_stop(iVar2);
      *(undefined1 *)(iVar2 + 0x61c) = 0;
    }
  }
  iVar3 = *(int *)(iVar2 + 0x5fc);
  iVar4 = iVar2 + 0x514;
  if (iVar3 != 0) {
    piVar1 = *(int **)(iVar2 + 0x518);
    *(int *)(iVar2 + 0x518) = iVar3 + 0x280;
    *(int *)(iVar3 + 0x280) = iVar4;
    *(int **)(iVar3 + 0x284) = piVar1;
    *piVar1 = iVar3 + 0x280;
  }
  iVar3 = *(int *)(iVar2 + 0x600);
  if ((iVar3 != 0) && (iVar3 != *(int *)(iVar2 + 0x5fc))) {
    piVar1 = *(int **)(iVar2 + 0x518);
    *(int *)(iVar2 + 0x518) = iVar3 + 0x280;
    *(int *)(iVar3 + 0x280) = iVar4;
    *(int **)(iVar3 + 0x284) = piVar1;
    *piVar1 = iVar3 + 0x280;
  }
  *(undefined4 *)(iVar2 + 0x5fc) = 0;
  *(undefined4 *)(iVar2 + 0x600) = 0;
  while (*(int *)(iVar2 + 0x514) != iVar4) {
    iVar3 = *(int *)(iVar2 + 0x514);
    list_del();
    vb2_buffer_done(iVar3 + -0x280,6);
  }
  mutex_unlock(iVar5);
  rkcif_do_stop_stream(uVar6,4);
  return;
}



/* ===== rkcif_scale_g_ch @ 0002069a size=106 ===== */

undefined4 rkcif_scale_g_ch(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xc) == 0) {
    if ((param_2 & 0x30) == 0) {
      if ((param_2 & 0xc0) == 0) {
        if ((param_2 & 0x300) == 0) {
          uVar1 = 0xffffffea;
        }
        else {
          if ((param_2 & 0x300) == 0x300) {
            printk(DAT_00020710,param_1 + 0x10,param_3,0,param_4);
          }
          uVar1 = 3;
        }
      }
      else {
        if ((param_2 & 0xc0) == 0xc0) {
          printk(DAT_0002070c,param_1 + 0x10,param_3,0xc0,param_4);
        }
        uVar1 = 2;
      }
    }
    else {
      if ((param_2 & 0x30) == 0x30) {
        printk(DAT_00020708,param_1 + 0x10,param_3,0x30,param_4);
      }
      uVar1 = 1;
    }
  }
  else {
    if ((param_2 & 0xc) == 0xc) {
      printk(DAT_00020704,param_1 + 0x10,param_3,0xc,param_4);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rkcif_scale_set_fmt @ 00020714 size=578 ===== */

int rkcif_scale_set_fmt(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  iVar5 = *(int *)(param_1 + 0x510);
  iVar12 = *(int *)(param_1 + 4);
  if (*(int *)(iVar12 + 0x350) == 0) {
    rkcif_update_sensor_info(iVar12 + 1000);
  }
  iVar2 = *(int *)(iVar12 + 0x350);
  if (iVar2 == 0) {
LAB_000207be:
    iVar2 = DAT_00020968;
    iVar6 = 0;
    iVar8 = DAT_00020968;
    do {
      uVar4 = *(uint *)(iVar8 + 8);
      if (param_2[2] == uVar4) {
        iVar8 = *(int *)(param_1 + 0x5f4);
        if ((iVar8 == 0) || (iVar11 = *(int *)(param_1 + 0x5f8), iVar11 == 0)) {
          iVar11 = 0x1e0;
          iVar8 = 0x280;
        }
        uVar3 = __aeabi_uidiv(iVar8,*param_2);
        if (uVar3 < 9) {
          iVar9 = 8;
          *(undefined4 *)(param_1 + 0x610) = 0;
        }
        else if (uVar3 < 0x11) {
          *(undefined4 *)(param_1 + 0x610) = 1;
          iVar9 = 0x10;
        }
        else {
          *(undefined4 *)(param_1 + 0x610) = 2;
          iVar9 = 0x20;
        }
        iVar10 = iVar9 * 2;
        iVar8 = __aeabi_uidiv(iVar9 * -2 & iVar8 + -1 + iVar10,iVar10);
        *param_2 = iVar8 << 1;
        iVar8 = __aeabi_uidiv(iVar11,iVar10);
        *(undefined1 *)(param_2 + 3) = 1;
        cVar1 = *(char *)(iVar6 * 0x1c + iVar2 + 0x15);
        *(undefined1 *)((int)param_2 + 0xd) = 0;
        *(undefined1 *)((int)param_2 + 0xe) = 0;
        *(undefined1 *)((int)param_2 + 0xf) = 0;
        *(undefined1 *)((int)param_2 + 0xb7) = 0;
        uVar3 = DAT_00020978;
        *(char *)(param_2 + 0x2d) = cVar1;
        param_2[1] = iVar8 << 1;
        if (uVar4 != uVar3) {
          if (uVar4 < uVar3) {
            uVar3 = uVar3 + 0xfc2116fb;
          }
          else {
            if (uVar4 == DAT_00020970) goto LAB_000208b8;
            uVar3 = DAT_00020970 + 0xaf5;
          }
          if (uVar4 != uVar3) {
            printk(DAT_00020974,iVar12 + 0x1c);
            uVar4 = 0;
            goto LAB_000208dc;
          }
        }
LAB_000208b8:
        uVar3 = (uint)*(byte *)(iVar2 + iVar6 * 0x1c);
        uVar4 = uVar3;
        if (uVar3 < 8) {
          uVar4 = 8;
        }
        if (uVar3 < 9) {
          uVar4 = 8;
        }
        else if (uVar3 < 0x11) {
          uVar4 = 0x10;
        }
        else if (uVar4 < 0x19) {
          uVar4 = 0x18;
        }
        else if (uVar4 < 0x20) {
          uVar4 = 0x20;
        }
LAB_000208dc:
        uVar4 = (*param_2 * uVar4 >> 3) + 7 & 0xfffffff8;
        iVar12 = uVar4 * param_2[1];
        if (2 < *DAT_0002097c) {
          printk(DAT_00020980,*(int *)(iVar5 + 4) + 0x1c,DAT_0002095c,0,iVar12,iVar12);
        }
        if (cVar1 == '\x01') {
          param_2[6] = uVar4;
          param_2[5] = iVar12;
        }
        if (param_3 == 0) {
          *(int *)(param_1 + 0x5e4) = iVar6 * 0x1c + iVar2;
          memcpy((void *)(param_1 + 0x524),param_2,0xc0);
          printk(DAT_00020984,*(int *)(iVar5 + 4) + 0x1c,DAT_0002095c,*param_2,param_2[1],
                 *(undefined4 *)(param_1 + 0x5f4),*(undefined4 *)(param_1 + 0x5f8));
        }
        return 0;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x1c;
    } while (iVar6 != 4);
    iVar8 = -1;
    printk(DAT_0002096c,*(int *)(param_1 + 4) + 0x1c);
  }
  else {
    local_80 = 1;
    uStack_7c = 0;
    iVar6 = *(int *)(*(int *)(iVar2 + 0x68) + 0x1c);
    iVar8 = DAT_00020964;
    if ((iVar6 != 0) && (pcVar7 = *(code **)(iVar6 + 0x10), pcVar7 != (code *)0x0)) {
      iVar6 = *(int *)(DAT_00020958 + 0x1c);
      if ((iVar6 == 0) || (*(code **)(iVar6 + 0x10) == (code *)0x0)) {
        iStack_bc = (*pcVar7)(iVar2,0,&local_80);
      }
      else {
        iStack_bc = (**(code **)(iVar6 + 0x10))();
      }
      iVar8 = iStack_bc;
      if (iStack_bc == 0) {
        local_b8 = 2;
        local_c0 = 1;
        iVar2 = *(int *)(iVar12 + 0x350);
        if (((iVar2 != 0) && (iVar8 = *(int *)(*(int *)(iVar2 + 0x68) + 0x1c), iVar8 != 0)) &&
           (pcVar7 = *(code **)(iVar8 + 0x18), pcVar7 != (code *)0x0)) {
          if ((iVar6 == 0) || (*(code **)(iVar6 + 0x18) == (code *)0x0)) {
            iVar2 = (*pcVar7)(iVar2,0,&local_c0);
          }
          else {
            iVar2 = (**(code **)(iVar6 + 0x18))(iVar2,0);
          }
          if (iVar2 == 0) {
            local_78 = local_a8;
            local_74 = local_a4;
          }
        }
        *(undefined4 *)(param_1 + 0x5f4) = local_78;
        *(undefined4 *)(param_1 + 0x5f8) = local_74;
        goto LAB_000207be;
      }
    }
    printk(DAT_00020960,*(int *)(param_1 + 4) + 0x1c,DAT_0002095c);
  }
  return iVar8;
}



/* ===== rkcif_scale_fh_open @ 00020988 size=144 ===== */

int rkcif_scale_fh_open(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = video_devdata();
  iVar6 = *(int *)(iVar2 + -0x1d4);
  iVar3 = rkcif_update_sensor_info(*(undefined4 *)(iVar2 + 0x338));
  if (iVar3 < 0) {
    printk(DAT_00020a18,iVar2 + 0x2a0,iVar3);
  }
  else {
    iVar5 = *(int *)(iVar6 + 8);
    iVar3 = __pm_runtime_resume(iVar5,4);
    if (iVar3 < 0) {
      piVar4 = (int *)(iVar5 + 0xd4);
      HintPreloadData(piVar4);
      do {
        ExclusiveAccess(piVar4);
        if (*piVar4 == 0) goto LAB_000209ec;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + -1;
LAB_000209ec:
      printk(DAT_00020a1c,iVar6 + 0x1c);
    }
    iVar3 = v4l2_fh_open(param_1);
    if ((iVar3 == 0) && (iVar3 = v4l2_pipeline_pm_get(iVar2), iVar3 < 0)) {
      vb2_fop_release(param_1);
    }
  }
  return iVar3;
}



/* ===== rkcif_scale_try_fmt_vid_cap_mplane @ 00020a20 size=22 ===== */

void rkcif_scale_try_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = video_devdata();
  rkcif_scale_set_fmt(*(undefined4 *)(iVar1 + 0x130),param_3 + 4,1);
  return;
}



/* ===== rkcif_scale_g_fmt_vid_cap_mplane @ 00020a36 size=28 ===== */

undefined4 rkcif_scale_g_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = video_devdata();
  memcpy((void *)(param_3 + 4),(void *)(*(int *)(iVar1 + 0x130) + 0x524),0xc0);
  return 0;
}



/* ===== rkcif_scale_s_fmt_vid_cap_mplane @ 00020a52 size=44 ===== */

undefined4 rkcif_scale_s_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_devdata();
  iVar1 = *(int *)(iVar1 + 0x130);
  if (*(int *)(iVar1 + 0x17c) == 0) {
    uVar2 = rkcif_scale_set_fmt(iVar1,param_3 + 4);
    return uVar2;
  }
  printk(DAT_00020a84,*(int *)(iVar1 + 4) + 0x1c,DAT_00020a80);
  return 0xfffffff0;
}



/* ===== rkcif_scale_querycap @ 00020a88 size=64 ===== */

undefined4
rkcif_scale_querycap(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = video_devdata();
  piVar2 = *(int **)(*(int *)(*(int *)(iVar1 + 0x130) + 4) + 8);
  strscpy(param_3,*(undefined4 *)piVar2[0xe],0x10,(undefined4 *)piVar2[0xe],param_4);
  strscpy(param_3 + 0x10,*(undefined4 *)piVar2[0xe],0x20);
  iVar1 = piVar2[0xb];
  if (iVar1 == 0) {
    iVar1 = *piVar2;
  }
  snprintf((char *)(param_3 + 0x30),0x20,DAT_00020ac8,iVar1);
  return 0;
}



/* ===== rkcif_scale_ioctl_default @ 00020acc size=112 ===== */

undefined4
rkcif_scale_ioctl_default
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = video_devdata();
  piVar5 = DAT_00020b40;
  iVar8 = *(int *)(iVar6 + 0x130);
  iVar6 = *(int *)(iVar8 + 4);
  if (param_4 == DAT_00020b3c) {
    iVar9 = *DAT_00020b40;
    *(undefined4 *)(iVar8 + 0x604) = *param_5;
    if (iVar9 < 3) {
      return 0;
    }
    uVar1 = *(undefined1 *)((int)param_5 + 3);
    uVar2 = *(undefined1 *)((int)param_5 + 2);
    uVar3 = *(undefined1 *)((int)param_5 + 1);
    uVar4 = *(undefined1 *)param_5;
    uVar7 = DAT_00020b48;
  }
  else {
    if (param_4 != DAT_00020b3c + 0x3fffffff) {
      return 0xffffffea;
    }
    *param_5 = *(undefined4 *)(iVar8 + 0x604);
    if (*piVar5 < 3) {
      return 0;
    }
    uVar1 = *(undefined1 *)((int)param_5 + 3);
    uVar2 = *(undefined1 *)((int)param_5 + 2);
    uVar3 = *(undefined1 *)((int)param_5 + 1);
    uVar4 = *(undefined1 *)param_5;
    uVar7 = DAT_00020b44;
  }
  printk(uVar7,iVar6 + 0x1c,uVar4,uVar3,uVar2,uVar1,param_3);
  return 0;
}



/* ===== rkcif_scale_enum_framesizes @ 00020b4c size=134 ===== */

undefined4 rkcif_scale_enum_framesizes(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [108];
  
  iVar1 = video_devdata();
  iVar4 = DAT_00020bd4;
  iVar1 = *(int *)(*(int *)(iVar1 + 0x130) + 4);
  if (*param_3 < 3) {
    iVar2 = 0;
    iVar3 = DAT_00020bd4;
    do {
      if (param_3[1] == *(uint *)(iVar3 + 8)) {
        local_88 = 0x280;
        local_84 = 0x1e0;
        if ((iVar1 != -0x350) && (iVar1 = *(int *)(iVar1 + 0x350), iVar1 != 0)) {
          get_input_fmt(iVar1,auStack_90,0,auStack_80);
        }
        if (*param_3 < 3) {
          iVar4 = (int)*(char *)(*param_3 + iVar4 + 0xc5);
        }
        else {
          iVar4 = 0x20;
        }
        param_3[2] = 1;
        iVar1 = __aeabi_uidiv(local_88,iVar4 << 1);
        param_3[3] = iVar1 << 1;
        iVar4 = __aeabi_uidiv(local_84,iVar4 << 1);
        param_3[4] = iVar4 << 1;
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 != 4);
  }
  return 0xffffffea;
}



/* ===== rkcif_scale_start @ 00020bd8 size=566 ===== */

undefined4 rkcif_scale_start(byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  byte in_Q;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar4 = iVar5 + 0x7384;
  mutex_lock(iVar4);
  if (*(int *)(param_1 + 0x608) == 2) {
    printk(DAT_00020e10,iVar5 + 0x1c);
    uVar6 = 0xfffffff0;
  }
  else {
    iVar5 = *(int *)(param_1 + 4);
    uVar7 = *param_1 & 7;
    if (*(int *)(iVar5 + 0x7edc) == 0) {
      iVar2 = 0x18;
    }
    else {
      iVar2 = uVar7 + *(int *)(iVar5 + 0x7ff4) * 4;
    }
    *(int *)(param_1 + 0x5e8) = *(int *)(param_1 + 0x524);
    *(undefined4 *)(param_1 + 0x5ec) = *(undefined4 *)(param_1 + 0x528);
    iVar8 = uVar7 * 8;
    *(int *)(param_1 + 0x60c) = iVar2;
    *(uint *)(param_1 + 0x5f0) =
         ((uint)**(byte **)(param_1 + 0x5e4) * *(int *)(param_1 + 0x524) >> 3) + 7 & 0xfffffff8;
    uVar1 = rkcif_read_register(iVar5,0x93);
    if ((uVar1 & 1 << iVar8) == 0) {
      uVar1 = uVar7 - 1;
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x510) + 4);
      if (uVar1 < 3) {
        uVar3 = (uint)*(byte *)(DAT_00020e18 + uVar1 + 200);
        uVar9 = *(undefined1 *)(DAT_00020e18 + uVar1 + 0xcb);
      }
      else {
        uVar3 = 0x95;
        uVar9 = 0x96;
      }
      disableIRQinterrupts();
      if ((*(int *)(param_1 + 0x5fc) == 0) && (*(byte **)(param_1 + 0x514) != param_1 + 0x514)) {
        *(int *)(param_1 + 0x5fc) = *(int *)(param_1 + 0x514) + -0x280;
        list_del(*(int *)(param_1 + 0x514),uVar3);
        uVar3 = extraout_r1;
      }
      if (*(int *)(param_1 + 0x5fc) != 0) {
        rkcif_write_register(uVar6,uVar3,*(undefined4 *)(*(int *)(param_1 + 0x5fc) + 0x288));
      }
      if ((*(int *)(param_1 + 0x600) == 0) && (*(byte **)(param_1 + 0x514) != param_1 + 0x514)) {
        *(int *)(param_1 + 0x600) = *(int *)(param_1 + 0x514) + -0x280;
        list_del();
      }
      if (*(int *)(param_1 + 0x600) != 0) {
        rkcif_write_register(uVar6,uVar9,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x288));
      }
      rkcif_write_register_or
                (iVar5,0x94,1 << (*param_1 & 7) + 0x10,
                 (uint)(byte)(((int)(uVar7 - 3) < 0) << 4 | (uVar1 == 2) << 3 | (1 < uVar1) << 2 |
                              SBORROW4(uVar1,2) << 1 | in_Q) << 0x1b);
      uVar3 = 3 << (uVar7 + 1) * 2 | 1 << uVar7 + 10;
      rkcif_write_register_and(iVar5,0x92,~uVar3);
      rkcif_write_register_or(iVar5,0x91,uVar3 | 3);
      rkcif_write_register(iVar5,0x94,0xf0f2);
      rkcif_write_register(iVar5,uVar7 + 0xa1,*(undefined4 *)(param_1 + 0x604));
      if (uVar1 < 3) {
        uVar3 = uVar1 + DAT_00020e18;
        uVar7 = extraout_r1_00;
      }
      else {
        uVar7 = 0x97;
        uVar3 = uVar1;
      }
      if (uVar1 < 3) {
        uVar7 = (uint)*(byte *)(uVar3 + 0xce);
      }
      rkcif_write_register(iVar5,uVar7,*(undefined4 *)(param_1 + 0x5f0));
      uVar6 = 0;
      rkcif_write_register_or
                (iVar5,0x93,
                 (*(uint *)(param_1 + 0x60c) & 0x1f) << iVar8 + 3 | 1 << iVar8 |
                 (*(uint *)(param_1 + 0x610) & 3) << iVar8 + 1);
      param_1[0x618] = 0;
      param_1[0x619] = 0;
      param_1[0x61a] = 0;
      param_1[0x61b] = 0;
      param_1[0x608] = 2;
      param_1[0x609] = 0;
      param_1[0x60a] = 0;
      param_1[0x60b] = 0;
      goto LAB_00020e00;
    }
    uVar6 = 0xffffffea;
    printk(DAT_00020e14,iVar5 + 0x1c,uVar7);
  }
  if (*(int *)(param_1 + 0x600) != 0) {
    vb2_buffer_done(*(int *)(param_1 + 0x600),3);
  }
  if (*(int *)(param_1 + 0x5fc) != 0) {
    vb2_buffer_done(*(int *)(param_1 + 0x5fc),3);
  }
  while (*(byte **)(param_1 + 0x514) != param_1 + 0x514) {
    iVar5 = *(int *)(param_1 + 0x514);
    vb2_buffer_done(iVar5 + -0x280,3);
    list_del(iVar5);
  }
LAB_00020e00:
  mutex_unlock(iVar4);
  return uVar6;
}



/* ===== rkcif_scale_vb2_start_streaming @ 00020e1c size=44 ===== */

int rkcif_scale_vb2_start_streaming(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x510);
  if (*(int *)(iVar2 + 0x510) == 2) {
    *(undefined1 *)(iVar2 + 0xc03) = 1;
  }
  else {
    iVar1 = rkcif_scale_start();
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  rkcif_do_start_stream(iVar2,4);
  return 0;
}



/* ===== rkcif_irq_handle_scale @ 00020e48 size=544 ===== */

void rkcif_irq_handle_scale(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  bool bVar11;
  byte in_Q;
  uint in_cpsr;
  undefined8 uVar12;
  
  if ((param_2 & 0x3c00) != 0) {
    printk(DAT_00021068,param_1 + 0x1c,param_2);
    return;
  }
  iVar6 = param_1;
  uVar3 = param_2;
  iVar1 = rkcif_scale_g_ch(param_1 + 0xc);
  if (-1 < iVar1) {
    iVar1 = 4;
    do {
      iVar2 = rkcif_scale_g_ch(param_1 + 0xc,param_2);
      if (-1 < iVar2) {
        iVar8 = iVar2 * 0x620;
        iVar9 = param_1 + iVar8;
        if (*(int *)(iVar9 + 0x4618) == 2) {
          if (*(char *)(iVar9 + 0x462c) == '\0') {
            uVar3 = (iVar2 + 1) * 2;
            uVar5 = param_2 >> (uVar3 & 0xff);
            *(uint *)(iVar9 + 0x4624) = uVar5 & 3;
            param_2 = param_2 & ~(3 << (uVar3 & 0xff));
            if ((uVar5 & 1) == 0) {
              if ((int)(uVar5 << 0x1e) < 0) {
                iVar6 = 0x4610;
                goto LAB_00020ef8;
              }
              iVar9 = 0;
            }
            else {
              iVar6 = 0x460c;
LAB_00020ef8:
              iVar9 = *(int *)(iVar9 + iVar6);
            }
            iVar6 = *(int *)(iVar2 * 0x620 + param_1 + 0x4014);
            uVar3 = iVar2 - 1;
            if ((uVar5 & 1) == 0) {
              bVar11 = iVar2 + -3 < 0;
              if (uVar3 < 3) {
                uVar10 = *(undefined1 *)(uVar3 + DAT_0002106c + 0xcb);
              }
              else {
                uVar10 = 0x96;
              }
            }
            else {
              bVar11 = iVar2 + -3 < 0;
              if (uVar3 < 3) {
                uVar10 = *(undefined1 *)(uVar3 + DAT_0002106c + 200);
              }
              else {
                uVar10 = 0x95;
              }
            }
            uVar3 = (uint)(byte)(bVar11 << 4 | (uVar3 == 2) << 3 | (1 < uVar3) << 2 |
                                 SBORROW4(uVar3,2) << 1 | in_Q) << 0x1b;
            disableIRQinterrupts();
            if (*(int *)(iVar8 + param_1 + 0x4524) == iVar8 + 0x4524 + param_1) {
LAB_00020f34:
              iVar4 = 0;
              uVar5 = in_cpsr;
            }
            else {
              iVar4 = iVar2 * 0x620 + param_1;
              if (*(int *)(iVar4 + 0x4624) != 1) {
                if (*(int *)(iVar4 + 0x4624) == 2) {
                  iVar7 = *(int *)(iVar4 + 0x4524) + -0x280;
                  *(int *)(iVar4 + 0x4610) = iVar7;
                  if (iVar7 != 0) {
                    list_del();
                    iVar7 = 0x4610;
                    iVar4 = extraout_r1_00;
                    goto LAB_00020fe8;
                  }
                }
                goto LAB_00020f34;
              }
              iVar7 = *(int *)(iVar4 + 0x4524) + -0x280;
              *(int *)(iVar4 + 0x460c) = iVar7;
              if (iVar7 == 0) goto LAB_00020f34;
              list_del();
              iVar7 = 0x460c;
              iVar4 = extraout_r1;
LAB_00020fe8:
              iVar4 = *(int *)(iVar4 + iVar7);
              uVar5 = in_cpsr;
            }
            in_cpsr = uVar5 & 0xffffff00;
            in_Q = (uVar5 >> 0x1b & 1) != 0;
            if (iVar4 == 0) {
              iVar8 = iVar2 * 0x620 + param_1;
              printk(DAT_00021070,iVar6 + 0x1c,*(byte *)(iVar8 + 0x4010) & 7,iVar8,iVar6,uVar3,
                     param_3);
            }
            else {
              rkcif_write_register(iVar6,uVar10,*(undefined4 *)(iVar4 + 0x288));
              if (iVar9 != 0) {
                uVar12 = ktime_get();
                iVar4 = iVar2 * 0x620 + param_1;
                *(undefined8 *)(iVar9 + 0x18) = uVar12;
                *(undefined4 *)(iVar9 + 0x170) = *(undefined4 *)(iVar4 + 0x4628);
                iVar4 = *(int *)(iVar4 + 0x45f4);
                for (uVar5 = 0; uVar5 < *(byte *)(iVar4 + 0x15); uVar5 = uVar5 + 1) {
                  if (uVar5 < *(uint *)(iVar9 + 0x10)) {
                    *(undefined4 *)(iVar9 + 0x54 + uVar5 * 0x20) =
                         *(undefined4 *)(iVar8 + 0x4548 + param_1 + uVar5 * 0x14);
                  }
                }
                uVar12 = ktime_get();
                *(undefined8 *)(iVar9 + 0x18) = uVar12;
                vb2_buffer_done(iVar9,5);
              }
            }
            iVar2 = iVar2 * 0x620 + param_1;
            *(int *)(iVar2 + 0x4628) = *(int *)(iVar2 + 0x4628) + 1;
            if (*(int *)(*(int *)(iVar2 + 0x4520) + 0x78c) != 0) {
              rkcif_enable_dma_capture(*(int *)(iVar2 + 0x4520),0);
            }
          }
          else {
            rkcif_scale_stop();
            *(undefined1 *)(iVar9 + 0x462c) = 0;
            __wake_up(iVar8 + 0x452c + param_1,3,1,0,iVar6,uVar3);
          }
        }
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



/* ===== rkcif_init_scale_vdev @ 00021074 size=184 ===== */

void rkcif_init_scale_vdev(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__s;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_cc [180];
  
  iVar3 = param_2 * 0x620;
  __s = (void *)(iVar3 + 0x4010 + param_1);
  memset(__s,0,0x620);
  memset(auStack_cc,0,0xb4);
  iVar2 = param_1 + iVar3;
  *(int *)(iVar2 + 0x4014) = param_1;
  uStack_d0 = DAT_00021134;
  *(int *)(iVar2 + 0x4520) = param_2 * 0xc08 + 1000 + param_1;
  *(void **)(param_2 * 0xc08 + param_1 + 0xb68) = __s;
  *(byte *)(iVar2 + 0x4010) = *(byte *)(iVar2 + 0x4010) & 0xf8 | (byte)param_2 & 7;
  *(undefined4 *)(iVar2 + 0x461c) = 0;
  *(undefined4 *)(iVar2 + 0x4628) = 0;
  local_d8 = 0x280;
  uStack_d4 = 0x1e0;
  *(undefined4 *)(iVar2 + 0x4618) = 1;
  *(undefined1 *)(iVar2 + 0x462c) = 0;
  *(undefined4 *)(iVar2 + 0x4614) = 0;
  iVar1 = param_1 + iVar3 + 0x4524;
  *(int *)(param_1 + iVar3 + 0x4524) = iVar1;
  *(int *)(iVar2 + 0x4528) = iVar1;
  __init_waitqueue_head(iVar3 + 0x452c + param_1,DAT_00021130,DAT_0002112c);
  rkcif_scale_set_fmt(__s,&local_d8,0);
  return;
}



/* ===== rkcif_register_scale_vdevs @ 00021138 size=364 ===== */

int rkcif_register_scale_vdevs(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = DAT_000212c4;
  iVar9 = 0;
  iVar7 = param_1 + 0x4010;
  iVar6 = param_1;
  iVar11 = param_2;
  while( true ) {
    if (param_2 <= iVar9) {
      return 0;
    }
    iVar2 = iVar9 * 0x620 + param_1;
    uVar4 = *(byte *)(iVar2 + 0x4010) & 7;
    if (3 < uVar4) break;
    iVar2 = iVar7 + 0x1cc;
    iVar10 = iVar7 + 8;
    strscpy(iVar7 + 0x478,*(undefined4 *)(iVar8 + uVar4 * 4 + 0xd4),0x20);
    __mutex_init(iVar2,DAT_000212a8,DAT_000212a4);
    uVar1 = DAT_000212b0;
    uVar5 = DAT_000212ac;
    *(int *)(iVar7 + 0x4e8) = iVar2;
    *(undefined4 *)(iVar7 + 0x4c8) = uVar5;
    *(undefined4 *)(iVar7 + 0x4cc) = uVar1;
    *(int *)(iVar7 + 0x464) = *(int *)(iVar7 + 4) + 0xc;
    iVar6 = DAT_000212b8;
    uVar5 = DAT_000212b4;
    *(int *)(iVar7 + 0x470) = iVar10;
    *(undefined4 *)(iVar7 + 0x2c0) = uVar5;
    *(undefined4 *)(iVar7 + 0x49c) = 0;
    *(undefined4 *)(iVar7 + 0x50c) = 1;
    *(int *)(iVar7 + 700) = iVar6;
    *(int *)(iVar7 + 0x308) = iVar7;
    puVar3 = *(undefined4 **)(*(int *)(iVar7 + 4) + 0x7ed4);
    *(int *)(iVar7 + 0x30) = iVar7;
    *(undefined4 *)(iVar7 + 8) = 9;
    *(undefined4 *)(iVar7 + 0xc) = 0x11;
    *(int *)(iVar7 + 0x24) = iVar6 + 0x24;
    uVar5 = puVar3[0x27];
    *(int *)(iVar7 + 0x1c) = iVar2;
    *(undefined4 *)(iVar7 + 0x28) = uVar5;
    *(undefined4 *)(iVar7 + 0x38) = 0x2b0;
    *(undefined4 *)(iVar7 + 0x44) = 3;
    *(undefined4 *)(iVar7 + 0x3c) = 0x2000;
    *(undefined4 *)(iVar7 + 0x10) = *puVar3;
    *(ushort *)(iVar7 + 0x18) = *(ushort *)(iVar7 + 0x18) | 0x201;
    *(undefined4 *)(iVar7 + 0x40) = 4;
    if (*(char *)((int)puVar3 + 0x1a7) != '\0') {
      *(undefined4 *)(iVar7 + 0x14) = 0x40;
    }
    vb2_queue_init(iVar10);
    *(int *)(iVar7 + 0x470) = iVar10;
    iVar10 = media_entity_pads_init(iVar7 + 0x1d8,1,iVar7 + 0x4f0);
    if (iVar10 < 0) goto LAB_00021238;
    iVar6 = **(int **)(iVar7 + 700);
    iVar10 = __video_register_device(iVar7 + 0x1d8,0,0xffffffff,1);
    if (iVar10 < 0) {
      _dev_err(iVar7 + 0x2c8,DAT_000212c0);
      goto LAB_00021238;
    }
    iVar9 = iVar9 + 1;
    iVar7 = iVar7 + 0x620;
  }
  iVar10 = -0x16;
  printk(DAT_000212bc,*(int *)(iVar2 + 0x4014) + 0x1c,iVar2,0x4014,iVar6,iVar11,param_3);
LAB_00021238:
  vb2_queue_release(*(undefined4 *)(iVar7 + 0x470));
  param_1 = param_1 + 0x41e8;
  for (iVar8 = 0; iVar9 != iVar8; iVar8 = iVar8 + 1) {
    video_unregister_device(param_1);
    vb2_queue_release(*(undefined4 *)(param_1 + 0x298));
    param_1 = param_1 + 0x620;
  }
  return iVar10;
}



/* ===== rkcif_unregister_scale_vdevs @ 000212c8 size=40 ===== */

void rkcif_unregister_scale_vdevs(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0x41e8;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    video_unregister_device(param_1);
    vb2_queue_release(*(undefined4 *)(param_1 + 0x298));
    param_1 = param_1 + 0x620;
  }
  return;
}



/* ===== rkcif_shm_vunmap @ 000212f0 size=22 ===== */

void rkcif_shm_vunmap(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  vunmap(*puVar1);
  *puVar1 = 0;
  puVar1[1] = puVar1[1] + -1;
  return;
}



/* ===== rkcif_shm_release @ 00021306 size=24 ===== */

void rkcif_shm_release(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  if (puVar1[1] != 0) {
    rkcif_shm_vunmap(param_1,*puVar1);
  }
  kfree(puVar1);
  return;
}



/* ===== rkcif_shm_vmap @ 0002131e size=34 ===== */

void rkcif_shm_vmap(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x3c);
  uVar1 = vmap(puVar2 + 3,puVar2[2],4,*DAT_00021340 | 0x200);
  puVar2[1] = puVar2[1] + 1;
  *puVar2 = uVar1;
  return;
}



/* ===== rkcif_shm_mmap @ 00021344 size=80 ===== */

undefined4 rkcif_shm_mmap(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  piVar2 = DAT_00021398;
  piVar1 = DAT_00021394;
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar6 = *param_2;
  piVar5 = (int *)(iVar4 + 0xc);
  piVar7 = param_2;
  for (iVar3 = 0; iVar3 < *(int *)(iVar4 + 8); iVar3 = iVar3 + 1) {
    remap_pfn_range(param_2,iVar6 + iVar3 * 0x1000,*piVar2 + (*piVar5 - *piVar1 >> 5),0x1000,
                    param_2[9],piVar7);
    piVar5 = piVar5 + 1;
  }
  return 0;
}



/* ===== rkcif_shm_end_cpu_access @ 0002139c size=22 ===== */

undefined4
rkcif_shm_end_cpu_access(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 0x1c);
  dma_sync_sg_for_device(0,*puVar1,puVar1[1],param_2,param_4);
  return 0;
}



/* ===== rkcif_shm_begin_cpu_access @ 000213b2 size=22 ===== */

undefined4
rkcif_shm_begin_cpu_access(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 0x1c);
  dma_sync_sg_for_cpu(0,*puVar1,puVar1[1],param_2,param_4);
  return 0;
}



/* ===== rkcif_shm_unmap_dma_buf @ 000213c8 size=38 ===== */

void rkcif_shm_unmap_dma_buf(int param_1,undefined4 *param_2,undefined4 param_3)

{
  dma_unmap_sg_attrs(*(undefined4 *)(param_1 + 4),*param_2,param_2[2],param_3,0x20,param_2);
  sg_free_table(param_2);
  kfree(param_2);
  return;
}



/* ===== rkcif_shm_map_dma_buf @ 000213ee size=82 ===== */

undefined4 * rkcif_shm_map_dma_buf(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*param_1 + 0x3c);
  puVar1 = (undefined4 *)
           kmem_cache_alloc(*(undefined4 *)(DAT_00021440 + 0x10),0xcc0,param_3,DAT_00021440,param_1,
                            param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0xfffffff4;
  }
  else {
    iVar2 = *(int *)(iVar3 + 8);
    sg_alloc_table_from_pages(puVar1,iVar3 + 0xc,iVar2,0,iVar2 << 0xc,0xcc0);
    iVar3 = dma_map_sg_attrs(param_1[1],*puVar1,puVar1[2],param_2,0x20);
    if (0 < iVar3) {
      puVar1[1] = iVar3;
    }
  }
  return puVar1;
}



/* ===== rkcif_alloc_buffer @ 00021444 size=288 ===== */

undefined4 rkcif_alloc_buffer(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  
  if (*(char *)(param_2 + 0x24) == '\0') {
    uVar6 = 0x10;
  }
  else {
    uVar6 = 0;
  }
  puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x7ed4) + 0x9c);
  if (*(int *)(param_2 + 0x1c) == 0) {
    uVar3 = 0xffffffea;
    iVar9 = param_1;
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0x7ed4) + 0x1a7) != '\0') {
      uVar6 = uVar6 | 0x40;
    }
    uVar7 = *(int *)(param_2 + 0x1c) + 0xfffU & 0xfffff000;
    *(uint *)(param_2 + 0x1c) = uVar7;
    iVar9 = 0xcc4;
    uVar6 = (*(code *)*puVar8)(**(undefined4 **)(param_1 + 0x7ed4),uVar6,uVar7,0,0xcc4,param_2);
    if ((uVar6 != 0) && (uVar6 < 0xfffff001)) {
      *(uint *)(param_2 + 0x14) = uVar6;
      if (*(char *)(*(int *)(param_1 + 0x7ed4) + 0x1a6) == '\0') {
        puVar5 = (undefined4 *)(*(code *)puVar8[0xc])();
        *(undefined4 *)(param_2 + 0xc) = *puVar5;
      }
      else {
        piVar2 = (int *)(*(code *)puVar8[0xc])();
        *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*piVar2 + 0xc);
        (*(code *)puVar8[5])(uVar6);
      }
      if (*(char *)(param_2 + 0x24) != '\0') {
        uVar3 = (*(code *)puVar8[0xb])(uVar6);
        *(undefined4 *)(param_2 + 0x18) = uVar3;
      }
      if (*(char *)(param_2 + 0x25) != '\0') {
        uVar3 = (*(code *)puVar8[2])(uVar6,2);
        *(undefined4 *)(param_2 + 8) = uVar3;
        if (*(char *)(param_2 + 0x26) != '\0') {
          iVar4 = dma_buf_fd(uVar3,0x80000);
          *(int *)(param_2 + 0x20) = iVar4;
          if (iVar4 < 0) {
            dma_buf_put(*(undefined4 *)(param_2 + 8));
            uVar3 = *(undefined4 *)(param_2 + 0x20);
            goto LAB_000214fc;
          }
          piVar2 = (int *)(*(int *)(*(int *)(param_2 + 8) + 4) + 0x1c);
          HintPreloadData(piVar2);
          do {
            ExclusiveAccess(piVar2);
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = *piVar2 + 1;
        }
      }
      if (0 < *DAT_0002156c) {
        printk(DAT_00021570,param_1 + 0x1c,DAT_00021564,*(int *)(param_2 + 0xc),
               *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0xc),*(int *)(param_2 + 0x1c));
      }
      return 0;
    }
    uVar3 = 0xfffffff4;
  }
LAB_000214fc:
  _dev_err(*(undefined4 *)(param_1 + 8),DAT_00021568,DAT_00021564,uVar3,iVar9);
  return uVar3;
}



/* ===== rkcif_free_buffer @ 00021574 size=82 ===== */

void rkcif_free_buffer(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7ed4) + 0x9c);
    if (0 < *DAT_000215c8) {
      printk(DAT_000215cc,param_1 + 0x1c,DAT_000215d0,*(int *)(param_2 + 0xc),
             *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0xc),param_2,param_3);
    }
    if (*(int *)(param_2 + 8) != 0) {
      dma_buf_put();
    }
    (**(code **)(iVar1 + 4))(*(undefined4 *)(param_2 + 0x14));
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0x1000000;
  }
  return;
}



/* ===== rkcif_alloc_common_dummy_buf @ 000215d4 size=336 ===== */

int rkcif_alloc_common_dummy_buf(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar8 = *(int *)(param_1 + 0x7ed4);
  iVar9 = iVar8 + 200;
  mutex_lock(iVar9);
  if ((*(int *)(param_2 + 0x14) == 0) && (*(int *)(param_2 + 0x1c) != 0)) {
    if (*(char *)(iVar8 + 0x1a4) != '\0') {
      puVar5 = *(undefined4 **)(param_1 + 0x7ed4);
      uVar7 = *(int *)(param_2 + 0x1c) + 0xfff;
      iVar1 = __alloc_pages_nodemask(0xcc4,0,0);
      uVar10 = uVar7 >> 0xc;
      if (iVar1 == 0) {
        iVar8 = -0xc;
      }
      else {
        piVar2 = (int *)kvmalloc_node(uVar10 * 4,0xcc0,0xffffffff);
        if (piVar2 == (int *)0x0) {
          iVar8 = -0xc;
        }
        else {
          for (piVar3 = piVar2; piVar3 != piVar2 + uVar10; piVar3 = piVar3 + 1) {
            *piVar3 = iVar1;
          }
          piVar3 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_00021724 + 0x10),0xcc0);
          if (piVar3 == (int *)0x0) {
            iVar8 = -0xc;
          }
          else {
            iVar8 = sg_alloc_table_from_pages(piVar3,piVar2,uVar10,0,uVar7 & 0xfffff000,0xcc0);
            if (iVar8 == 0) {
              uVar4 = dma_map_sg_attrs(*puVar5,*piVar3,piVar3[1],0,0);
              iVar1 = *DAT_00021730;
              uVar6 = *(undefined4 *)(*piVar3 + 0xc);
              *(int **)(param_2 + 0x10) = piVar2;
              *(int **)(param_2 + 0x14) = piVar3;
              *(undefined4 *)(param_2 + 0xc) = uVar6;
              if (0 < iVar1) {
                printk(DAT_00021738,param_1 + 0x1c,DAT_00021734,uVar6,uVar4,
                       *(undefined4 *)(param_2 + 0x1c));
                goto LAB_000215f6;
              }
              goto LAB_000215f4;
            }
            kfree(piVar3);
          }
          kvfree(piVar2);
        }
        __free_pages(iVar1,0);
LAB_00021694:
        if (-1 < iVar8) goto LAB_000215f6;
      }
      printk(DAT_0002172c,param_1 + 0x1c,DAT_00021728,iVar8);
      goto LAB_000215f6;
    }
    iVar8 = rkcif_alloc_buffer(param_1,param_2);
    if (iVar8 != 0) goto LAB_00021694;
    if (0 < *DAT_00021730) {
      printk(DAT_0002173c,param_1 + 0x1c,DAT_00021728,*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x1c));
      goto LAB_000215f6;
    }
  }
LAB_000215f4:
  iVar8 = 0;
LAB_000215f6:
  mutex_unlock(iVar9);
  return iVar8;
}



/* ===== rkcif_free_common_dummy_buf @ 00021740 size=110 ===== */

void rkcif_free_common_dummy_buf(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x7ed4);
  iVar3 = iVar1 + 200;
  iVar4 = param_2;
  mutex_lock(iVar3);
  if (*(char *)(iVar1 + 0x1a4) == '\0') {
    rkcif_free_buffer(param_1,param_2);
  }
  else {
    puVar2 = *(undefined4 **)(param_2 + 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      dma_unmap_sg_attrs(**(undefined4 **)(param_1 + 0x7ed4),*puVar2,puVar2[1],0,0,iVar4);
      sg_free_table(puVar2);
      kfree(puVar2);
      __free_pages(**(undefined4 **)(param_2 + 0x10),0);
      kvfree(*(undefined4 *)(param_2 + 0x10));
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
  }
  mutex_unlock(iVar3);
  return;
}



/* ===== rkcif_alloc_reserved_mem_buf @ 000217ae size=190 ===== */

undefined4 rkcif_alloc_reserved_mem_buf(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_1c;
  
  iVar4 = param_2[0x19];
  iVar3 = *param_2 * iVar4 + *(int *)(param_1 + 0x8018);
  param_2[0x15] = iVar3;
  if ((uint)(*(int *)(param_1 + 0x8018) + *(int *)(param_1 + 0x801c)) < (uint)(iVar4 + iVar3)) {
    uVar1 = 0xffffffea;
  }
  else {
    param_2[0x1c] = iVar3;
    param_2[0x1d] = iVar4;
    param_2[9] = iVar3;
    *(undefined1 *)((int)param_2 + 0x3e) = 1;
    memset(&local_2c,0,0x14);
    uVar5 = iVar4 + 0xfffU >> 0xc;
    local_34 = DAT_0002186c;
    local_30 = DAT_00021870;
    iVar3 = __kmalloc((uVar5 + 3) * 4,0xcc0);
    piVar2 = DAT_00021874;
    if (iVar3 == 0) {
      iVar3 = -0xc;
    }
    else {
      *(undefined4 *)(iVar3 + 4) = 0;
      *(uint *)(iVar3 + 8) = uVar5;
      iVar6 = *piVar2;
      iVar7 = *DAT_00021878;
      piVar2 = (int *)(iVar3 + 0xc);
      for (iVar4 = 0; iVar4 < (int)uVar5; iVar4 = iVar4 + 1) {
        *piVar2 = iVar6 + (((uint)(param_2[0x1c] + iVar4 * 0x1000) >> 0xc) - iVar7) * 0x20;
        piVar2 = piVar2 + 1;
      }
      local_28 = uVar5 << 0xc;
      local_2c = DAT_0002187c;
      local_24 = 2;
      local_1c = iVar3;
      iVar3 = dma_buf_export(&local_34);
    }
    param_2[0x14] = iVar3;
    if ((char)param_2[0x1b] == '\0') {
      uVar1 = 0;
    }
    else {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x10) + 0x34))();
      param_2[0x18] = iVar3;
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== rkcif_free_reserved_mem_buf @ 00021880 size=158 ===== */

void rkcif_free_reserved_mem_buf(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  
  if (*(char *)(param_2 + 0x6f) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x8038) != 0) {
    printk(DAT_00021920,param_1 + 0x1c,*(undefined4 *)(param_2 + 0x54));
  }
  iVar1 = *(int *)(param_1 + 0x7ee0);
  uVar2 = DAT_00021924;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x294) == '\0') {
      iVar1 = iVar1 + 0xf8;
    }
    else {
      iVar1 = iVar1 + 0x118;
    }
    iVar1 = media_entity_remote_pad(iVar1);
    uVar2 = DAT_00021928;
    if (iVar1 != 0) {
      if ((((*(char *)(param_2 + 0x3c) != '\0') && (iVar1 = *(int *)(iVar1 + 0x10), iVar1 != 0)) &&
          (**(int **)(iVar1 + 0x68) != 0)) &&
         (pcVar3 = *(code **)(**(int **)(iVar1 + 0x68) + 0x18), pcVar3 != (code *)0x0)) {
        if ((*DAT_0002192c == 0) ||
           (pcVar4 = *(code **)(*DAT_0002192c + 0x18), pcVar4 == (code *)0x0)) {
          (*pcVar3)(iVar1,DAT_00021930,param_2 + 0x18,pcVar3,param_4);
        }
        else {
          (*pcVar4)(iVar1,DAT_00021930);
        }
      }
      if (*(char *)(param_2 + 0x6c) != '\0') {
        (**(code **)(*(int *)(*(int *)(param_2 + 0x50) + 0x10) + 0x38))
                  (*(int *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x60));
      }
      *(undefined1 *)(param_2 + 0x6f) = 1;
      return;
    }
  }
  printk(uVar2,param_1 + 0x1c);
  return;
}



/* ===== list_del @ 00021934 size=22 ===== */

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



/* ===== rkcif_tools_enum_fmt_vid_cap @ 0002194a size=28 ===== */

undefined4 rkcif_tools_enum_fmt_vid_cap(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if (*param_3 < 0xc) {
    uVar1 = 0;
    param_3[0xb] = *(uint *)(*param_3 * 0x1c + DAT_00021968 + 8);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== rkcif_tools_ioctl_default @ 0002196c size=4 ===== */

undefined4 rkcif_tools_ioctl_default(void)

{
  return 0;
}



/* ===== rkcif_tools_fop_release @ 00021970 size=42 ===== */

undefined4 rkcif_tools_fop_release(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = video_devdata();
  iVar3 = *(int *)(iVar1 + -0x1d4);
  iVar2 = vb2_fop_release(param_1);
  if (iVar2 == 0) {
    v4l2_pipeline_pm_put(iVar1);
  }
  __pm_runtime_idle(*(undefined4 *)(iVar3 + 8),4);
  return 0;
}



/* ===== rkcif_tools_set_fmt @ 0002199a size=78 ===== */

undefined4 rkcif_tools_set_fmt(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x510);
  puVar2 = param_2;
  iVar3 = param_3;
  memcpy(param_2,(void *)(iVar1 + 0x57c),0xc0);
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x5f4) = *(undefined4 *)(iVar1 + 0x574);
    memcpy((void *)(param_1 + 0x534),param_2,0xc0);
    if (2 < *DAT_000219e8) {
      printk(DAT_000219f0,*(int *)(iVar1 + 4) + 0x1c,DAT_000219ec,*param_2,param_2[1],puVar2,iVar3);
    }
  }
  return 0;
}



/* ===== rkcif_tools_enum_frameintervals @ 000219f4 size=128 ===== */

int rkcif_tools_enum_frameintervals(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 auStack_38 [4];
  int local_34;
  int local_30;
  
  iVar1 = video_devdata();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x130) + 4);
  if (*param_3 != 0) {
    return -0x16;
  }
  if ((iVar1 == -0x350) || (iVar2 = *(int *)(iVar1 + 0x350), iVar2 == 0)) {
    printk(DAT_00021a78,iVar1 + 0x1c,DAT_00021a74);
    return -0x13;
  }
  iVar1 = *(int *)(*(int *)(iVar2 + 0x68) + 0xc);
  if ((iVar1 != 0) && (pcVar4 = *(code **)(iVar1 + 0x30), pcVar4 != (code *)0x0)) {
    if ((*(int *)(DAT_00021a7c + 0xc) == 0) ||
       (pcVar3 = *(code **)(*(int *)(DAT_00021a7c + 0xc) + 0x30), pcVar3 == (code *)0x0)) {
      iVar1 = (*pcVar4)(iVar2,auStack_38);
    }
    else {
      iVar1 = (*pcVar3)();
    }
    if (iVar1 == 0) goto LAB_00021a50;
    if (iVar1 != DAT_00021a80) {
      return iVar1;
    }
  }
  local_34 = 1;
  local_30 = 0x1e;
LAB_00021a50:
  param_3[4] = 2;
  param_3[9] = 1;
  param_3[10] = 1;
  param_3[7] = 1;
  param_3[8] = 1;
  param_3[5] = local_34;
  param_3[6] = local_30;
  return 0;
}



/* ===== rkcif_tools_vb2_queue_setup @ 00021a84 size=80 ===== */

undefined4
rkcif_tools_vb2_queue_setup(int *param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[10];
  iVar3 = *(int *)(iVar2 + 0x5f4);
  iVar4 = *(int *)(iVar2 + 4);
  *param_3 = (uint)*(byte *)(iVar3 + 0x15);
  for (uVar1 = 0; uVar1 < *(byte *)(iVar3 + 0x15); uVar1 = uVar1 + 1) {
    param_4[uVar1] = *(undefined4 *)(uVar1 * 0x14 + iVar2 + 0x548);
  }
  if (0 < *DAT_00021ad4) {
    printk(DAT_00021adc,iVar4 + 0x1c,*(undefined4 *)(DAT_00021ad8 + *param_1 * 4),*param_2,*param_4,
           param_2,param_3);
  }
  return 0;
}



/* ===== rkcif_tools_enum_input @ 00021ae0 size=32 ===== */

undefined4 rkcif_tools_enum_input(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00021b00;
  if (*param_3 == 0) {
    param_3[9] = 2;
    strscpy(param_3 + 1,uVar1,0x20);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== rkcif_tools_vb2_buf_queue @ 00021b04 size=246 ===== */

void rkcif_tools_vb2_buf_queue(int *param_1)

{
  int *piVar1;
  void *__s;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  piVar1 = DAT_00021c00;
  piVar5 = param_1 + 0xa2;
  iVar7 = *(int *)(*param_1 + 0x28);
  iVar3 = *(int *)(iVar7 + 0x5f4);
  iVar10 = *(int *)(*(int *)(iVar7 + 4) + 0x7ed4);
  memset(piVar5,0,0x20);
  piVar9 = piVar5;
  for (iVar8 = 0; uVar4 = (uint)*(byte *)(iVar3 + 0x15), iVar8 < (int)uVar4; iVar8 = iVar8 + 1) {
    __s = (void *)vb2_plane_vaddr(param_1,iVar8);
    if (*(char *)(iVar10 + 0x1a6) == '\0') {
      piVar2 = (int *)vb2_plane_cookie(param_1,iVar8);
      iVar6 = *piVar2;
    }
    else {
      piVar2 = (int *)vb2_plane_cookie(param_1,iVar8);
      iVar6 = *(int *)(*piVar2 + 0xc);
    }
    *piVar9 = iVar6;
    if (((*piVar1 != 0) && (__s != (void *)0x0)) && (*(char *)(iVar10 + 0x1a4) == '\0')) {
      iVar6 = iVar8 * 0x14 + iVar7;
      memset(__s,0,*(size_t *)(iVar6 + 0x548));
      if (0 < *piVar1) {
        printk(DAT_00021bfc,*(int *)(iVar7 + 4) + 0x1c,*(undefined4 *)(iVar6 + 0x548));
      }
    }
    piVar9 = piVar9 + 1;
  }
  if (uVar4 == 1) {
    for (iVar8 = 0; iVar8 < (int)(*(byte *)(iVar3 + 0x14) - 1); iVar8 = iVar8 + 1) {
      iVar10 = *piVar5;
      piVar5 = piVar5 + 1;
      *piVar5 = *(int *)(iVar7 + 0x538) * *(int *)(iVar8 * 0x14 + iVar7 + 0x54c) + iVar10;
    }
  }
  disableIRQinterrupts();
  piVar5 = *(int **)(iVar7 + 0x518);
  *(int **)(iVar7 + 0x518) = param_1 + 0xa0;
  param_1[0xa0] = iVar7 + 0x514;
  param_1[0xa1] = (int)piVar5;
  *piVar5 = (int)(param_1 + 0xa0);
  return;
}



/* ===== rkcif_tools_vb2_start_streaming @ 00021c04 size=122 ===== */

undefined4
rkcif_tools_vb2_start_streaming
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(iVar2 + 4);
  iVar4 = iVar3 + 0x7390;
  mutex_lock(iVar4);
  if (*(int *)(iVar2 + 0x60c) == 2) {
    printk(DAT_00021c80,iVar3 + 0x1c,extraout_r2,2,param_4);
    if (*(int *)(iVar2 + 0x5f8) != 0) {
      vb2_buffer_done(*(int *)(iVar2 + 0x5f8),3);
      *(undefined4 *)(iVar2 + 0x5f8) = 0;
    }
    while (*(int *)(iVar2 + 0x514) != iVar2 + 0x514) {
      iVar3 = *(int *)(iVar2 + 0x514);
      vb2_buffer_done(iVar3 + -0x280,3);
      list_del(iVar3);
    }
    mutex_unlock(iVar4);
    uVar1 = 0xffffffea;
  }
  else {
    *(undefined4 *)(iVar2 + 0x614) = 0;
    *(undefined4 *)(iVar2 + 0x60c) = 2;
    mutex_unlock(iVar4);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rkcif_tools_work @ 00021c84 size=504 ===== */

void rkcif_tools_work(int param_1)

{
  bool bVar1;
  void *__src;
  void *__dest;
  undefined4 *puVar2;
  size_t __n;
  int iVar3;
  int iVar4;
  int *unaff_r4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  bool bVar11;
  byte in_Q;
  uint in_cpsr;
  uint uVar12;
  
  iVar3 = *(int *)(param_1 + -8);
  pbVar9 = *(byte **)(param_1 + -0xec);
  bVar1 = false;
  iVar8 = 0;
  do {
    disableIRQinterrupts();
    iVar10 = param_1 + -0xe0;
    if (iVar10 != *(int *)(param_1 + -0xe0)) {
      iVar8 = *(int *)(param_1 + -0xe0) + -0x280;
      if (iVar8 != 0) {
        list_del(*(int *)(param_1 + -0xe0),
                 (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b);
      }
    }
    uVar12 = in_cpsr & 0xffffff00;
    if (iVar8 == 0) {
      printk(DAT_00021e7c,*(int *)(pbVar9 + 4) + 0x1c,*pbVar9 & 7);
      return;
    }
    iVar6 = param_1 + -0xd8;
    if (iVar6 != *(int *)(param_1 + -0xd8)) {
      for (piVar5 = *(int **)(param_1 + -0xd8); unaff_r4 = piVar5 + -1, (int *)iVar6 != piVar5;
          piVar5 = (int *)*piVar5) {
        if (*unaff_r4 == iVar8) {
          bVar1 = true;
          goto LAB_00021d2a;
        }
      }
    }
    if (!bVar1) {
      unaff_r4 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_00021e80 + 0x14),0xdc0);
      puVar2 = *(undefined4 **)(param_1 + -0xd4);
      *unaff_r4 = iVar8;
      unaff_r4[1] = iVar6;
      unaff_r4[2] = (int)puVar2;
      *(int **)(param_1 + -0xd4) = unaff_r4 + 1;
      *puVar2 = unaff_r4 + 1;
    }
LAB_00021d2a:
    unaff_r4[6] = 2;
    unaff_r4[3] = *(int *)(iVar8 + 0x170);
    iVar6 = *(int *)(iVar8 + 0x1c);
    unaff_r4[4] = *(int *)(iVar8 + 0x18);
    unaff_r4[5] = iVar6;
    if (*(char *)(param_1 + 0x1c) != '\0') {
      disableIRQinterrupts();
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0;
      rkcif_vb_done_tasklet(pbVar9,iVar8);
      disableIRQinterrupts();
      while (iVar10 != *(int *)(param_1 + -0xe0)) {
        if (*(int *)(param_1 + -0xe0) != 0x280) {
          list_del();
          rkcif_vb_done_tasklet(pbVar9);
        }
      }
      __wake_up(param_1 + -0xd0,3,1,0);
      return;
    }
    rkcif_vb_done_tasklet(pbVar9,iVar8);
    if (*(int **)(param_1 + -0xe8) == (int *)(param_1 + -0xe8)) {
LAB_00021dd8:
      rkcif_buf_queue(*unaff_r4);
    }
    else {
      iVar6 = *(int *)(param_1 + -0xe8) + -0x280;
      *(int *)(param_1 + -4) = iVar6;
      if ((iVar6 == 0) || (*(int *)(param_1 + 0x10) != 2)) goto LAB_00021dd8;
      list_del();
      uVar7 = 0;
      while ((int)uVar7 < (int)(uint)*(byte *)(iVar3 + 0x15)) {
        __n = *(size_t *)(param_1 + -0xb4 + uVar7 * 0x14);
        __src = (void *)vb2_plane_vaddr(iVar8,uVar7);
        __dest = (void *)vb2_plane_vaddr(*(undefined4 *)(param_1 + -4),uVar7);
        if ((__src == (void *)0x0) || (__dest == (void *)0x0)) break;
        iVar6 = *(int *)(param_1 + -4);
        bVar11 = uVar7 < *(uint *)(iVar6 + 0x10);
        if (bVar11) {
          iVar6 = iVar6 + uVar7 * 0x20;
        }
        uVar7 = uVar7 + 1;
        if (bVar11) {
          *(size_t *)(iVar6 + 0x54) = __n;
        }
        memcpy(__dest,__src,__n);
      }
      rkcif_buf_queue(*unaff_r4);
      iVar6 = unaff_r4[3];
      *(int *)(*(int *)(param_1 + -4) + 0x170) = iVar6;
      iVar4 = *(int *)(param_1 + -4);
      *(int *)(iVar4 + 0x18) = iVar6;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      vb2_buffer_done(*(undefined4 *)(param_1 + -4));
      *(undefined4 *)(param_1 + -4) = 0;
    }
    disableIRQinterrupts();
    if (iVar10 == *(int *)(param_1 + -0xe0)) {
      return;
    }
    in_cpsr = uVar12 & 0xffffff00;
    in_Q = (uVar12 >> 0x1b & 1) != 0;
    in_OV = (uVar12 >> 0x1c & 1) != 0;
    in_CY = (uVar12 >> 0x1d & 1) != 0;
    in_ZR = (uVar12 >> 0x1e & 1) != 0;
    in_NG = (int)uVar12 < 0;
  } while( true );
}



/* ===== rkcif_tools_fh_open @ 00021e84 size=144 ===== */

int rkcif_tools_fh_open(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = video_devdata();
  iVar6 = *(int *)(iVar2 + -0x1d4);
  iVar3 = rkcif_update_sensor_info(*(undefined4 *)(iVar2 + 0x338));
  if (iVar3 < 0) {
    printk(DAT_00021f14,iVar2 + 0x2a0,iVar3);
  }
  else {
    iVar5 = *(int *)(iVar6 + 8);
    iVar3 = __pm_runtime_resume(iVar5,4);
    if (iVar3 < 0) {
      piVar4 = (int *)(iVar5 + 0xd4);
      HintPreloadData(piVar4);
      do {
        ExclusiveAccess(piVar4);
        if (*piVar4 == 0) goto LAB_00021ee8;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + -1;
LAB_00021ee8:
      printk(DAT_00021f18,iVar6 + 0x1c);
    }
    iVar3 = v4l2_fh_open(param_1);
    if ((iVar3 == 0) && (iVar3 = v4l2_pipeline_pm_get(iVar2), iVar3 < 0)) {
      vb2_fop_release(param_1);
    }
  }
  return iVar3;
}



/* ===== rkcif_tools_try_fmt_vid_cap_mplane @ 00021f1c size=22 ===== */

void rkcif_tools_try_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = video_devdata();
  rkcif_tools_set_fmt(*(undefined4 *)(iVar1 + 0x130),param_3 + 4,1);
  return;
}



/* ===== rkcif_tools_g_fmt_vid_cap_mplane @ 00021f32 size=28 ===== */

undefined4 rkcif_tools_g_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = video_devdata();
  memcpy((void *)(param_3 + 4),(void *)(*(int *)(iVar1 + 0x130) + 0x534),0xc0);
  return 0;
}



/* ===== rkcif_tools_s_fmt_vid_cap_mplane @ 00021f4e size=44 ===== */

undefined4 rkcif_tools_s_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_devdata();
  iVar1 = *(int *)(iVar1 + 0x130);
  if (*(int *)(iVar1 + 0x17c) == 0) {
    uVar2 = rkcif_tools_set_fmt(iVar1,param_3 + 4);
    return uVar2;
  }
  printk(DAT_00021f80,*(int *)(iVar1 + 4) + 0x1c,DAT_00021f7c);
  return 0xfffffff0;
}



/* ===== rkcif_tools_querycap @ 00021f84 size=64 ===== */

undefined4
rkcif_tools_querycap(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = video_devdata();
  piVar2 = *(int **)(*(int *)(*(int *)(iVar1 + 0x130) + 4) + 8);
  strscpy(param_3,*(undefined4 *)piVar2[0xe],0x10,(undefined4 *)piVar2[0xe],param_4);
  strscpy(param_3 + 0x10,*(undefined4 *)piVar2[0xe],0x20);
  iVar1 = piVar2[0xb];
  if (iVar1 == 0) {
    iVar1 = *piVar2;
  }
  snprintf((char *)(param_3 + 0x30),0x20,DAT_00021fc4,iVar1);
  return 0;
}



/* ===== rkcif_tools_enum_framesizes @ 00021fc8 size=100 ===== */

undefined4 rkcif_tools_enum_framesizes(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_88 [8];
  uint local_80;
  uint local_7c;
  undefined1 auStack_78 [104];
  
  iVar1 = video_devdata();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x130) + 4);
  if (*param_3 < 0xc) {
    iVar3 = 0;
    iVar2 = DAT_0002202c;
    do {
      if (param_3[1] == *(uint *)(iVar2 + 8)) {
        local_80 = 0x280;
        local_7c = 0x1e0;
        if ((iVar1 != -0x350) && (iVar1 = *(int *)(iVar1 + 0x350), iVar1 != 0)) {
          get_input_fmt(iVar1,auStack_88,0,auStack_78);
        }
        param_3[2] = 1;
        param_3[3] = local_80;
        param_3[4] = local_7c;
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar3 != 0xc);
  }
  return 0xffffffea;
}



/* ===== rkcif_tools_vb2_stop_streaming @ 00022030 size=230 ===== */

void rkcif_tools_vb2_stop_streaming(int param_1)

{
  undefined4 extraout_r1;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_2c [24];
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(iVar2 + 4) + 0x7390;
  mutex_lock(iVar4);
  *(undefined1 *)(iVar2 + 0x618) = 1;
  _cond_resched();
  if (*(int *)(iVar2 + 0x60c) == 2) {
    init_wait_entry(auStack_2c,0);
    iVar3 = 300;
    while( true ) {
      prepare_to_wait_event(iVar2 + 0x52c,auStack_2c,2);
      if (*(int *)(iVar2 + 0x60c) != 2) break;
      if (iVar3 == 0) goto LAB_0002207e;
      iVar3 = schedule_timeout(iVar3);
    }
    if (iVar3 == 0) {
      iVar3 = 1;
    }
LAB_0002207e:
    finish_wait(iVar2 + 0x52c,auStack_2c);
    if (iVar3 == 0) {
      disableIRQinterrupts();
      *(undefined4 *)(iVar2 + 0x60c) = 1;
      *(undefined4 *)(iVar2 + 0x614) = 0;
      *(undefined1 *)(iVar2 + 0x618) = 0;
    }
  }
  iVar3 = *(int *)(iVar2 + 0x5f8);
  if (iVar3 != 0) {
    piVar1 = *(int **)(iVar2 + 0x518);
    *(int *)(iVar2 + 0x518) = iVar3 + 0x280;
    *(int *)(iVar3 + 0x280) = iVar2 + 0x514;
    *(int **)(iVar3 + 0x284) = piVar1;
    *piVar1 = iVar3 + 0x280;
  }
  *(undefined4 *)(iVar2 + 0x5f8) = 0;
  while (*(int *)(iVar2 + 0x514) != iVar2 + 0x514) {
    iVar3 = *(int *)(iVar2 + 0x514);
    list_del();
    vb2_buffer_done(iVar3 + -0x280,6);
  }
  while (*(int *)(iVar2 + 0x524) != iVar2 + 0x524) {
    list_del(*(int *)(iVar2 + 0x524),*(int *)(iVar2 + 0x524) + -4);
    kfree(extraout_r1);
  }
  mutex_unlock(iVar4);
  return;
}



/* ===== rkcif_init_tools_vdev @ 00022116 size=236 ===== */

void rkcif_init_tools_vdev(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__s;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [184];
  
  iVar3 = param_2 * 0x620;
  iVar2 = param_1 + iVar3;
  __s = (void *)(iVar3 + 0x5eb0 + param_1);
  memset(__s,0,0x620);
  memset(auStack_d4,0,0xb4);
  *(int *)(iVar2 + 0x5eb4) = param_1;
  uStack_d8 = DAT_00022210;
  *(int *)(iVar2 + 0x63c0) = param_2 * 0xc08 + 1000 + param_1;
  *(void **)(param_2 * 0xc08 + param_1 + 0xb6c) = __s;
  *(byte *)(iVar2 + 0x5eb0) = *(byte *)(iVar2 + 0x5eb0) & 0xf8 | (byte)param_2 & 7;
  *(undefined4 *)(iVar2 + 0x64c4) = 0;
  local_e0 = 0x280;
  uStack_dc = 0x1e0;
  *(undefined4 *)(iVar2 + 0x64bc) = 1;
  iVar1 = param_1 + iVar3 + 0x63c4;
  *(int *)(param_1 + iVar3 + 0x63c4) = iVar1;
  *(int *)(iVar2 + 0x63c8) = iVar1;
  iVar1 = param_1 + iVar3 + 0x63cc;
  *(int *)(param_1 + iVar3 + 0x63cc) = iVar1;
  *(int *)(iVar2 + 0x63d0) = iVar1;
  iVar1 = param_1 + iVar3 + 0x63d4;
  *(int *)(param_1 + iVar3 + 0x63d4) = iVar1;
  *(int *)(iVar2 + 0x63d8) = iVar1;
  rkcif_tools_set_fmt(__s,&local_e0);
  __init_waitqueue_head(iVar3 + 0x63dc + param_1,DAT_00022208,DAT_00022204);
  *(undefined4 *)(iVar2 + 0x64ac) = 0xffffffe0;
  iVar1 = param_1 + iVar3 + 0x64b0;
  *(int *)(param_1 + iVar3 + 0x64b0) = iVar1;
  *(int *)(iVar2 + 0x64b4) = iVar1;
  *(undefined4 *)(iVar2 + 0x64b8) = DAT_0002220c;
  return;
}



/* ===== rkcif_register_tools_vdevs @ 00022214 size=360 ===== */

int rkcif_register_tools_vdevs(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = DAT_000223a0;
  iVar8 = 0;
  iVar6 = param_1 + 0x5eb0;
  iVar9 = param_1;
  iVar10 = param_2;
  while( true ) {
    if (param_2 <= iVar8) {
      return 0;
    }
    iVar2 = iVar8 * 0x620 + param_1;
    uVar4 = *(byte *)(iVar2 + 0x5eb0) & 7;
    if (2 < uVar4) break;
    iVar9 = iVar6 + 0x1cc;
    iVar2 = iVar6 + 8;
    strscpy(iVar6 + 0x478,*(undefined4 *)(iVar7 + uVar4 * 4 + 0x1a8),0x20);
    __mutex_init(iVar9,DAT_00022380,DAT_0002237c);
    uVar5 = DAT_00022384;
    *(int *)(iVar6 + 0x4e8) = iVar9;
    *(int *)(iVar6 + 0x470) = iVar2;
    *(undefined4 *)(iVar6 + 0x4cc) = uVar5;
    uVar5 = DAT_00022388;
    *(undefined4 *)(iVar6 + 0x50c) = 1;
    *(int *)(iVar6 + 0x308) = iVar6;
    *(undefined4 *)(iVar6 + 700) = uVar5;
    *(undefined4 *)(iVar6 + 0x4c8) = DAT_0002238c;
    *(int *)(iVar6 + 0x464) = *(int *)(iVar6 + 4) + 0xc;
    *(undefined4 *)(iVar6 + 0x2c0) = DAT_00022390;
    *(undefined4 *)(iVar6 + 0x49c) = 0;
    puVar3 = *(undefined4 **)(*(int *)(iVar6 + 4) + 0x7ed4);
    *(undefined4 *)(iVar6 + 8) = 9;
    *(undefined4 *)(iVar6 + 0xc) = 0x11;
    uVar5 = DAT_00022394;
    *(int *)(iVar6 + 0x30) = iVar6;
    *(undefined4 *)(iVar6 + 0x24) = uVar5;
    uVar5 = puVar3[0x27];
    *(undefined4 *)(iVar6 + 0x44) = 1;
    *(int *)(iVar6 + 0x1c) = iVar9;
    *(undefined4 *)(iVar6 + 0x28) = uVar5;
    *(undefined4 *)(iVar6 + 0x38) = 0x2b0;
    *(undefined4 *)(iVar6 + 0x3c) = 0x2000;
    *(undefined4 *)(iVar6 + 0x10) = *puVar3;
    *(ushort *)(iVar6 + 0x18) = *(ushort *)(iVar6 + 0x18) | 0x201;
    *(undefined4 *)(iVar6 + 0x40) = 4;
    if (*(char *)((int)puVar3 + 0x1a7) != '\0') {
      *(undefined4 *)(iVar6 + 0x14) = 0x40;
    }
    vb2_queue_init(iVar2);
    *(int *)(iVar6 + 0x470) = iVar2;
    iVar1 = media_entity_pads_init(iVar6 + 0x1d8,1,iVar6 + 0x4f0);
    if (iVar1 < 0) goto LAB_00022310;
    iVar9 = **(int **)(iVar6 + 700);
    iVar1 = __video_register_device(iVar6 + 0x1d8,0,0xffffffff,1);
    if (iVar1 < 0) {
      _dev_err(iVar6 + 0x2c8,DAT_0002239c);
      goto LAB_00022310;
    }
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + 0x620;
  }
  iVar1 = -0x16;
  printk(DAT_00022398,*(int *)(iVar2 + 0x5eb4) + 0x1c,iVar2,0x5eb4,iVar9,iVar10,param_3);
LAB_00022310:
  vb2_queue_release(*(undefined4 *)(iVar6 + 0x470));
  param_1 = param_1 + 0x6088;
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    video_unregister_device(param_1);
    vb2_queue_release(*(undefined4 *)(param_1 + 0x298));
    param_1 = param_1 + 0x620;
  }
  return iVar1;
}



/* ===== rkcif_unregister_tools_vdevs @ 000223a4 size=40 ===== */

void rkcif_unregister_tools_vdevs(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0x6088;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    video_unregister_device(param_1);
    vb2_queue_release(*(undefined4 *)(param_1 + 0x298));
    param_1 = param_1 + 0x620;
  }
  return;
}



/* ===== rkcif_rockit_get_stream @ 000223cc size=130 ===== */

int rkcif_rockit_get_stream(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  
  iVar4 = *DAT_00022454;
  if (iVar4 == 0) {
    printk(DAT_0002245c,DAT_00022458,0x22,DAT_00022454,param_4);
    return 0;
  }
  if (param_1 == 0) {
    uVar3 = 0x26;
    uVar2 = DAT_00022464;
LAB_00022422:
    printk(uVar2,DAT_00022458,uVar3);
switchD_00022430_default:
    iVar4 = 0;
  }
  else {
    iVar7 = *(int *)(iVar4 + 0x18);
    bVar6 = 0;
    do {
      if (iVar7 <= (int)(uint)bVar6) goto LAB_00022414;
      iVar5 = (uint)bVar6 * 0x368 + iVar4;
      bVar6 = bVar6 + 1;
      iVar1 = strcmp(*(char **)(iVar5 + 0x88),*(char **)(param_1 + 4));
    } while (iVar1 != 0);
    iVar4 = *(int *)(iVar5 + 0x8c);
    if (iVar4 == 0) {
LAB_00022414:
      uVar3 = 0x33;
      uVar2 = DAT_00022460;
      goto LAB_00022422;
    }
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      iVar4 = iVar4 + 1000;
      break;
    case 1:
      iVar4 = iVar4 + 0xff0;
      break;
    case 2:
      iVar4 = iVar4 + 0x1bf8;
      break;
    case 3:
      iVar4 = iVar4 + 0x2800;
      break;
    default:
      goto switchD_00022430_default;
    }
  }
  return iVar4;
}



/* ===== rkcif_rockit_function_register @ 00022468 size=62 ===== */

int rkcif_rockit_function_register(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*DAT_000224a8 == 0) {
    printk(DAT_000224b0,DAT_000224ac,0x169,DAT_000224a8,param_4);
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_000224b8;
    if (((param_2 != 0) && (iVar1 = param_1, param_2 == 1)) &&
       (*(int *)(*DAT_000224a8 + 0x14f8) = param_1, param_1 == 0)) {
      printk(DAT_000224b4,DAT_000224ac,0x174,0x14f8,param_4);
    }
  }
  return iVar1;
}



/* ===== rkcif_rockit_get_cifdev @ 000224bc size=82 ===== */

undefined4
rkcif_rockit_get_cifdev(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = *DAT_00022510;
  if (iVar2 == 0) {
    uVar3 = 0x182;
    uVar1 = DAT_00022518;
  }
  else {
    if (param_1 != (int *)0x0) {
      for (iVar4 = 0; iVar4 < *(int *)(iVar2 + 0x18); iVar4 = iVar4 + 1) {
        param_1[iVar4] = *(int *)(iVar2 + 0x88 + iVar4 * 0x368);
      }
      if (*param_1 != 0) {
        return 0;
      }
      return 0xffffffea;
    }
    uVar3 = 0x187;
    uVar1 = DAT_0002251c;
  }
  printk(uVar1,DAT_00022514,uVar3,DAT_00022510,param_4);
  return 0xffffffea;
}



/* ===== rkcif_rockit_pause_stream @ 00022520 size=188 ===== */

undefined4 rkcif_rockit_pause_stream(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  pbVar1 = (byte *)rkcif_rockit_get_stream();
  if (pbVar1 == (byte *)0x0) {
    printk(DAT_000225e0,DAT_000225dc,0x113);
    uVar2 = 0xffffffea;
  }
  else {
    rkcif_do_stop_stream(pbVar1,0x10);
    iVar8 = *(int *)(*(int *)(*(int *)(pbVar1 + 4) + 0x7ed4) + 0x9c);
    iVar3 = *DAT_000225e4;
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar6 = *pbVar1 & 7;
      if (uVar6 < 4) {
        iVar4 = *(int *)(*(int *)(pbVar1 + 4) + 0x7ff4) * 0x368;
        iVar5 = 5;
        *(undefined1 *)(uVar6 * 0x48 + iVar4 + iVar3 + 0xd0) = 0;
        piVar7 = (int *)(uVar6 * 0x48 + iVar4 + 0x90 + iVar3);
        do {
          iVar3 = *piVar7;
          if (iVar3 != 0) {
            if (*(int *)(iVar3 + 0x2b4) != 0) {
              (**(code **)(iVar8 + 0x28))();
              (**(code **)(iVar8 + 0x20))(*(undefined4 *)(iVar3 + 0x2b4));
              dma_buf_put(*(undefined4 *)(iVar3 + 0x2b0));
            }
            kfree(*piVar7);
            *piVar7 = 0;
            piVar7[5] = 0;
          }
          iVar5 = iVar5 + -1;
          piVar7 = piVar7 + 1;
        } while (iVar5 != 0);
        pbVar1[0x54c] = 0;
        pbVar1[0x54d] = 0;
        pbVar1[0x54e] = 0;
        pbVar1[0x54f] = 0;
        pbVar1[0x550] = 0;
        pbVar1[0x551] = 0;
        pbVar1[0x552] = 0;
        pbVar1[0x553] = 0;
        *(byte **)(pbVar1 + 0x544) = pbVar1 + 0x544;
        *(byte **)(pbVar1 + 0x548) = pbVar1 + 0x544;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== rkcif_rockit_config_stream @ 000225e8 size=90 ===== */

undefined4
rkcif_rockit_config_stream
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = param_4;
  pbVar1 = (byte *)rkcif_rockit_get_stream();
  if (pbVar1 == (byte *)0x0) {
    printk(DAT_00022648,DAT_00022644,0x126);
  }
  else {
    *(undefined4 *)(pbVar1 + 0x580) = param_3;
    *(undefined4 *)(pbVar1 + 0x584) = param_4;
    *(undefined4 *)(pbVar1 + 0x57c) = param_2;
    pbVar1[0x594] = 0;
    pbVar1[0x595] = 0;
    pbVar1[0x596] = 0;
    pbVar1[0x597] = 0;
    iVar2 = rkcif_set_fmt(pbVar1,pbVar1 + 0x57c,0);
    if (-1 < iVar2) {
      return 0;
    }
    printk(DAT_0002264c,DAT_00022644,0x12f,*pbVar1 & 7,uVar3);
  }
  return 0xffffffea;
}



/* ===== rkcif_rockit_resume_stream @ 00022650 size=62 ===== */

undefined4 rkcif_rockit_resume_stream(void)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)rkcif_rockit_get_stream();
  if (pbVar1 == (byte *)0x0) {
    printk(DAT_00022694,DAT_00022690,0x13f);
  }
  else {
    iVar2 = rkcif_do_start_stream(pbVar1,0x10);
    if (-1 < iVar2) {
      return 0;
    }
    printk(DAT_00022698,DAT_00022690,0x145,*pbVar1 & 7);
  }
  return 0xffffffea;
}



/* ===== rkcif_rockit_buf_queue @ 0002269c size=572 ===== */

undefined4 rkcif_rockit_buf_queue(char *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int extraout_r3;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  pcVar9 = param_1;
  pbVar2 = (byte *)rkcif_rockit_get_stream();
  if (pbVar2 == (byte *)0x0) {
    uVar7 = 0x5b;
    uVar10 = DAT_000228dc;
    iVar12 = extraout_r3;
LAB_000226b0:
    printk(uVar10,DAT_000228d8,uVar7,iVar12,pcVar9,param_2);
  }
  else {
    iVar15 = *(int *)(pbVar2 + 4);
    pcVar9 = *(char **)(iVar15 + 0x7ff4);
    uVar14 = *pbVar2 & 7;
    iVar16 = *(int *)(*(int *)(iVar15 + 0x7ed4) + 0x9c);
    if (3 < uVar14) {
      return 0xffffffea;
    }
    iVar8 = uVar14 * 0x48;
    iVar13 = *DAT_000228e0;
    iVar12 = (int)pcVar9 * 0x368;
    *(undefined4 *)(iVar8 + iVar12 + iVar13 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x3c) == 0) {
      return 0xffffffea;
    }
    iVar11 = 0;
    piVar5 = (int *)(iVar8 + 0xa4 + iVar12 + iVar13);
    piVar4 = piVar5;
    do {
      if (*piVar4 == *(int *)(param_1 + 0xc)) {
        *param_1 = '\0';
        goto LAB_00022728;
      }
      iVar11 = iVar11 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar11 != 5);
    if (*param_1 == '\0') {
LAB_00022728:
      iVar16 = 0;
      piVar5 = (int *)(iVar8 + 0x90 + iVar12 + iVar13);
      do {
        iVar11 = *piVar5;
        if (*(int *)(param_1 + 0xc) == piVar5[5]) break;
        iVar16 = iVar16 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar16 != 5);
    }
    else {
      iVar8 = 0;
      while( true ) {
        iVar12 = *piVar5;
        if (iVar12 == 0) break;
        iVar8 = iVar8 + 1;
        piVar5 = piVar5 + 1;
        if (iVar8 == 5) {
          return 0xffffffea;
        }
      }
      iVar11 = kmem_cache_alloc(*(undefined4 *)(DAT_000228e4 + 0x28),0xdc0);
      iVar8 = iVar13 + ((int)pcVar9 * 0xda + uVar14 * 0x12 + iVar8) * 4;
      *(int *)(iVar8 + 0x90) = iVar11;
      if (iVar11 == 0) {
        uVar7 = 0x7a;
        uVar10 = DAT_000228e8;
        param_2 = iVar12;
        goto LAB_000226b0;
      }
      *(undefined4 *)(iVar8 + 0xa4) = *(undefined4 *)(param_1 + 0xc);
      puVar6 = *(undefined4 **)(param_1 + 0x3c);
      *(undefined4 *)(iVar11 + 0x2b8) = *(undefined4 *)(param_1 + 0x20);
      uVar3 = (**(code **)(iVar16 + 0x1c))
                        (**(undefined4 **)(*(int *)(pbVar2 + 4) + 0x7ed4),puVar6,*puVar6,iVar12,
                         pcVar9,iVar12,param_3);
      param_2 = iVar12;
      if (0xfffff000 < uVar3) {
        printk(DAT_000228ec,DAT_000228d8,0x8c);
        param_2 = iVar12;
      }
      uVar10 = *(undefined4 *)(param_1 + 0x3c);
      *(uint *)(iVar11 + 0x2b4) = uVar3;
      *(undefined4 *)(iVar11 + 0x2b0) = uVar10;
      iVar8 = (**(code **)(iVar16 + 0x24))(uVar3);
      if (iVar8 != 0) {
        printk(DAT_000228f0,DAT_000228d8,0x93);
      }
      if (*(char *)(*(int *)(*(int *)(pbVar2 + 4) + 0x7ed4) + 0x1a6) == '\0') {
        puVar6 = (undefined4 *)(**(code **)(iVar16 + 0x30))(uVar3);
        uVar10 = *puVar6;
      }
      else {
        piVar5 = (int *)(**(code **)(iVar16 + 0x30))();
        uVar10 = *(undefined4 *)(*piVar5 + 0xc);
      }
      *(undefined4 *)(iVar11 + 0x2c8) = uVar10;
      piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x3c) + 4) + 0x1c);
      HintPreloadData(piVar5);
      do {
        ExclusiveAccess(piVar5);
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = *piVar5 + 1;
    }
    piVar5 = (int *)(iVar11 + 0x288);
    piVar4 = piVar5;
    for (iVar16 = 0; iVar16 < (int)(uint)*(byte *)(*(int *)(pbVar2 + 0x574) + 0x15);
        iVar16 = iVar16 + 1) {
      *piVar4 = *(int *)(iVar11 + 0x2c8);
      piVar4 = piVar4 + 1;
    }
    if (*(byte *)(*(int *)(pbVar2 + 0x574) + 0x15) == 1) {
      for (iVar16 = 0; iVar16 < (int)(*(byte *)(*(int *)(pbVar2 + 0x574) + 0x14) - 1);
          iVar16 = iVar16 + 1) {
        iVar8 = *piVar5;
        piVar5 = piVar5 + 1;
        *piVar5 = *(int *)(pbVar2 + 0x580) * *(int *)(pbVar2 + iVar16 * 0x14 + 0x594) + iVar8;
      }
    }
    if (1 < *DAT_000228f4) {
      printk(DAT_000228f8,iVar15 + 0x1c,*pbVar2 & 7,*(undefined4 *)(iVar11 + 0x288),pcVar9,param_2);
    }
    if (*(char *)(iVar13 + (int)pcVar9 * 0x368 + uVar14 * 0x48 + 0xd0) == '\0') {
      disableIRQinterrupts();
      piVar5 = *(int **)(pbVar2 + 0x548);
      *(int *)(pbVar2 + 0x548) = iVar11 + 0x280;
      *(byte **)(iVar11 + 0x280) = pbVar2 + 0x544;
      *(int **)(iVar11 + 0x284) = piVar5;
      *piVar5 = iVar11 + 0x280;
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== rkcif_rockit_buf_done @ 000228fc size=156 ===== */

undefined4 rkcif_rockit_buf_done(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(iVar5 + 0x7ff4);
  iVar2 = *DAT_00022998;
  if (((iVar2 == 0) || (*(code **)(iVar2 + 0x14f8) == (code *)0x0)) ||
     (bVar1 = *param_1, 3 < (bVar1 & 7))) {
    uVar3 = 0xffffffea;
  }
  else {
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_2 + 0x2b8);
    *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_2 + 0x2b0);
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(iVar2 + 0x74) = uVar3;
    *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(param_2 + 0x170);
    *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_1 + 0x580);
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_1 + 0x57c);
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x584);
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x57c);
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x580);
    piVar4 = *(int **)(iVar5 + 8);
    iVar5 = piVar4[0xb];
    if (iVar5 == 0) {
      iVar5 = *piVar4;
    }
    *(int *)(iVar2 + 4) = iVar5;
    *(undefined4 *)(iVar2 + 0x1c) =
         *(undefined4 *)((bVar1 & 7) * 0x48 + iVar6 * 0x368 + iVar2 + 0xb8);
    *(bool *)(iVar2 + 1) = *(byte **)(param_1 + 0x544) == param_1 + 0x544;
    (**(code **)(iVar2 + 0x14f8))(iVar2);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== rkcif_rockit_dev_init @ 0002299c size=94 ===== */

void rkcif_rockit_dev_init(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = DAT_000229fc;
  if (*DAT_000229fc == 0) {
    iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_00022a00 + 0x34),0xdc0);
    *piVar5 = iVar1;
    if (iVar1 == 0) {
      return;
    }
  }
  iVar4 = *piVar5;
  iVar1 = *(int *)(*(int *)(param_1 + 0x7ed4) + 0xbc);
  *(int *)(iVar4 + 0x18) = iVar1;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x7ed4) + (iVar3 + 0x28) * 4);
    if (iVar2 != 0) {
      piVar5 = *(int **)(iVar2 + 8);
      iVar2 = piVar5[0xb];
      if (iVar2 == 0) {
        iVar2 = *piVar5;
      }
      *(int *)(iVar4 + 0x88) = iVar2;
      *(undefined4 *)(iVar4 + 0x8c) =
           *(undefined4 *)(*(int *)(param_1 + 0x7ed4) + (iVar3 + 0x28) * 4);
    }
    iVar4 = iVar4 + 0x368;
  }
  return;
}



/* ===== rkcif_rockit_dev_deinit @ 00022a04 size=16 ===== */

void rkcif_rockit_dev_deinit(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00022a14;
  kfree(*DAT_00022a14);
  *puVar1 = 0;
  return;
}



/* ===== subdev_notifier_bound @ 00022a18 size=84 ===== */

undefined4 subdev_notifier_bound(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x158);
  if (iVar2 == 2) {
    printk(DAT_00022a70,param_1 + -0x1d4,DAT_00022a6c,2,param_4);
    uVar1 = 0xfffffff0;
  }
  else {
    iVar3 = iVar2 * 0x94 + param_1 + -0x1f0;
    *(undefined4 *)(iVar3 + 0x25c) = *(undefined4 *)(param_3 + 0x24);
    uVar1 = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(iVar3 + 0x224) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(iVar3 + 0x228) = uVar1;
    *(int *)(iVar3 + 0x220) = param_2;
    uVar1 = DAT_00022a74;
    *(int *)(param_1 + 0x158) = iVar2 + 1;
    printk(uVar1,param_2 + 0x74,(undefined4 *)(param_3 + 0x1c),iVar2 + 1,param_4);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rkcif_plat_probe @ 00022a78 size=426 ===== */

uint rkcif_plat_probe(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int local_40;
  int local_3c;
  
  uVar8 = *(undefined4 *)(param_1 + 0x174);
  iVar6 = param_1 + 0x10;
  sprintf(DAT_00022c28,DAT_00022c24,0,1,10);
  _dev_info(iVar6,DAT_00022c2c,DAT_00022c28);
  uVar2 = of_match_node(DAT_00022c30,uVar8);
  if (uVar2 < 0xfffff001) {
    puVar9 = *(undefined4 **)(uVar2 + 0xc0);
    iVar3 = devm_kmalloc(iVar6,0x8050,0xdc0);
    if (iVar3 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      *(int *)(param_1 + 0x50) = iVar3;
      *(int *)(iVar3 + 8) = iVar6;
      iVar4 = sysfs_create_group(iVar6,DAT_00022c34);
      if (iVar4 == 0) {
        rkcif_attach_hw(iVar3);
        iVar4 = of_property_read_variable_u32_array
                          (*(undefined4 *)(*(int *)(iVar3 + 8) + 0x164),DAT_00022c38,iVar3 + 0x7ffc,
                           1,0);
        uVar1 = DAT_00022c3c;
        if (iVar4 < 0) {
          *(undefined4 *)(iVar3 + 0x7ffc) = 0;
        }
        _dev_info(*(undefined4 *)(iVar3 + 8),uVar1,*(undefined4 *)(iVar3 + 0x7ffc));
        uVar2 = rkcif_plat_init(iVar3,uVar8,*puVar9);
        if (uVar2 == 0) {
          iVar7 = *(int *)(iVar3 + 8);
          iVar4 = of_parse_phandle(*(undefined4 *)(iVar7 + 0x164),DAT_00022c40,0);
          if (iVar4 == 0) {
            _dev_info(iVar7,DAT_00022c44);
          }
          else {
            uVar5 = of_address_to_resource(iVar4,0,&local_40);
            if (uVar5 != 0) {
              _dev_err(iVar7,DAT_00022c54);
              return uVar5;
            }
            *(int *)(iVar3 + 0x8018) = local_40;
            *(int *)(iVar3 + 0x801c) = (local_3c + 1) - local_40;
            *(undefined1 *)(iVar3 + 0x8035) = 1;
            _dev_info(iVar7,DAT_00022c58);
          }
          iVar4 = rkcif_proc_init(iVar3);
          if (iVar4 != 0) {
            iVar4 = *(int *)(param_1 + 0x3c);
            if (iVar4 == 0) {
              iVar4 = *(int *)(param_1 + 0x10);
            }
            _dev_warn(iVar6,DAT_00022c48,iVar4);
          }
          *(undefined4 *)(iVar3 + 0x7fd0) = 0;
          *(undefined4 *)(iVar3 + 0x7fac) = 0xffffffff;
          *(undefined4 *)(iVar3 + 0x7f9c) = 0xffffffff;
          *(undefined4 *)(iVar3 + 0x7fa0) = 0xffffffff;
          *(undefined4 *)(iVar3 + 0x7f90) = 0xffffffff;
          *(undefined4 *)(iVar3 + 0x7f88) = 0;
          *(undefined4 *)(iVar3 + 0x7f8c) = 0;
          *(undefined4 *)(iVar3 + 0x7f94) = 0;
          *(undefined4 *)(iVar3 + 0x7f98) = 0;
          *(undefined4 *)(iVar3 + 0x7fb0) = 0;
          *(undefined4 *)(iVar3 + 0x7fc0) = 0;
          *(undefined4 *)(iVar3 + 0x7fc4) = 0;
          uVar8 = DAT_00022c4c;
          *(undefined2 *)(iVar3 + 0x7fc8) = 0;
          *(undefined1 *)(iVar3 + 0x7fca) = 0;
          init_timer_key(iVar3 + 0x7f50,uVar8,0,0,0);
          *(undefined4 *)(iVar3 + 0x7fd8) = 0xffffffe0;
          *(int *)(iVar3 + 0x7fdc) = iVar3 + 0x7fdc;
          uVar8 = DAT_00022c50;
          *(int *)(iVar3 + 0x7fe0) = iVar3 + 0x7fdc;
          *(undefined4 *)(iVar3 + 0x7fe4) = uVar8;
          if (*(int *)(iVar3 + 0x736c) == 10) {
            rkcif_rockit_dev_init(iVar3);
          }
          pm_runtime_enable(iVar6);
        }
        else {
          rkcif_detach_hw(iVar3);
        }
      }
      else {
        uVar2 = 0xffffffed;
      }
    }
  }
  return uVar2;
}



/* ===== rkcif_create_dummy_buf @ 00022c5c size=238 ===== */

undefined4 rkcif_create_dummy_buf(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int local_68;
  undefined1 auStack_64 [4];
  int local_60;
  int local_5c;
  int iStack_58;
  undefined4 local_4c;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar9 = 0;
  uVar11 = 0;
  iVar6 = *(int *)(iVar4 + 0x7ed4);
  piVar13 = (int *)(iVar6 + 0xa0);
  do {
    if (*(int *)(iVar6 + 0xbc) <= iVar9) {
      *(uint *)(iVar6 + 0x198) = uVar11;
      *(undefined2 *)(iVar6 + 0x1a0) = 0x101;
      iVar9 = rkcif_alloc_buffer(iVar4,iVar6 + 0x17c);
      if (iVar9 == 0) {
        printk(DAT_00022d60,iVar4 + 0x1c,*(undefined4 *)(iVar6 + 0x198));
        uVar5 = 0;
      }
      else {
        uVar5 = 0xfffffff4;
        printk(DAT_00022d4c,iVar4 + 0x1c);
      }
      return uVar5;
    }
    iVar12 = *piVar13;
    if (*(int *)(iVar12 + 0x350) != 0) {
      iVar10 = 0;
      do {
        memset(auStack_64,0,0x3c);
        iVar1 = *(int *)(iVar12 + 0x350);
        local_4c = 1;
        local_68 = iVar10;
        if (((iVar1 == 0) || (iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c), iVar2 == 0)) ||
           (pcVar3 = *(code **)(iVar2 + 0xc), pcVar3 == (code *)0x0)) break;
        if ((*(int *)(DAT_00022d50 + 0x1c) == 0) ||
           (pcVar7 = *(code **)(*(int *)(DAT_00022d50 + 0x1c) + 0xc), pcVar7 == (code *)0x0)) {
          iVar1 = (*pcVar3)(iVar1,0,&local_68);
        }
        else {
          iVar1 = (*pcVar7)(iVar1,0,&local_68);
        }
        if (iVar1 != 0) break;
        uVar8 = iStack_58 * local_5c * 2;
        if (local_60 == 0x100a) {
          uVar8 = iStack_58 * local_5c * 3;
        }
        if (0 < *DAT_00022d54) {
          printk(DAT_00022d5c,iVar4 + 0x1c,DAT_00022d58,local_5c,iStack_58);
        }
        iVar10 = iVar10 + 1;
        if (uVar11 < uVar8) {
          uVar11 = uVar8;
        }
      } while (iVar10 != 0x20);
    }
    iVar9 = iVar9 + 1;
    piVar13 = piVar13 + 1;
  } while( true );
}



/* ===== rkcif_lvds_event_reset_pipe @ 00022d64 size=64 ===== */

void rkcif_lvds_event_reset_pipe(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_a0;
  undefined1 auStack_9c [96];
  undefined4 local_3c;
  int local_14;
  
  piVar1 = DAT_00022da4;
  local_14 = *DAT_00022da4;
  if (param_1 != -0x7b38) {
    memset(auStack_9c,0,0x84);
    local_a0 = 0x1001;
    local_3c = param_2;
    v4l2_event_queue(*(undefined4 *)(param_1 + 0x7bdc),&local_a0);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== rkcif_dvp_event_reset_pipe @ 00022da8 size=64 ===== */

void rkcif_dvp_event_reset_pipe(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_a0;
  undefined1 auStack_9c [96];
  undefined4 local_3c;
  int local_14;
  
  piVar1 = DAT_00022de8;
  local_14 = *DAT_00022de8;
  if (param_1 != -0x7e08) {
    memset(auStack_9c,0,0x84);
    local_a0 = 0x1001;
    local_3c = param_2;
    v4l2_event_queue(*(undefined4 *)(param_1 + 0x7eac),&local_a0);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== rkcif_init_reset_work @ 00022dec size=224 ===== */

void rkcif_init_reset_work(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 + -0x7f34;
  printk(DAT_00022ecc,iVar3,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x84));
  disableIRQinterrupts();
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar4 = *(int *)(param_1 + -0xbe8);
  piVar1 = (int *)(param_1 + -0x7658);
  for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
    if (*piVar1 == 2) {
      *(int *)(param_1 + ((*(byte *)(iVar2 * 0xc08 + param_1 + -0x7b68) & 7) + 10) * 4) =
           piVar1[0x1ad];
    }
    piVar1 = piVar1 + 0x302;
  }
  if (*(char *)(param_1 + 0x7d) == '\0') {
    iVar2 = schedule_work(param_1 + 0x88);
    if (iVar2 == 0) {
      printk(DAT_00022ed8,iVar3);
    }
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x84);
  }
  else {
    piVar1 = *(int **)(param_1 + -0x7c04);
    if (piVar1[1] - 5U < 2) {
      rkcif_csi2_event_reset_pipe(*piVar1 + -4);
    }
    else if (piVar1[1] == 4) {
      rkcif_lvds_event_reset_pipe();
    }
    else {
      rkcif_dvp_event_reset_pipe(param_1 + -0x7f50,*(undefined4 *)(param_1 + 0x84));
    }
    if (2 < *DAT_00022ed0) {
      printk(DAT_00022ed4,iVar3,piVar1[1]);
      return;
    }
  }
  return;
}



/* ===== rkcif_do_start_stream @ 00022edc size=1598 ===== */

void rkcif_do_start_stream(byte *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  code *pcVar15;
  int iVar16;
  int local_e0;
  int *local_d4;
  int local_c8;
  int local_c4 [2];
  uint local_bc;
  uint local_b8;
  undefined1 auStack_b4 [136];
  int local_2c;
  
  iVar12 = *(int *)(param_1 + 4);
  local_2c = *DAT_00023178;
  iVar16 = iVar12 + 0x1c;
  iVar7 = *(int *)(iVar12 + 0x7ed4);
  local_c8 = 0;
  iVar8 = *(int *)(iVar12 + 0x34c);
  printk(DAT_0002317c,iVar16,*param_1 & 7);
  puVar13 = *(undefined4 **)(iVar12 + 0x7ed4);
  local_c4[0] = 0;
  mutex_lock(puVar13 + 0x32);
  if (*(char *)(puVar13 + 0x5b) == '\0') {
    memset(puVar13 + 0x35,0,0x9c);
    uVar10 = 0;
    local_d4 = puVar13 + 0x28;
    for (local_e0 = 0; local_e0 < (int)puVar13[0x2f]; local_e0 = local_e0 + 1) {
      iVar14 = *local_d4;
      if (*(int *)(iVar14 + 0x8040) == 1) {
        iVar6 = *(int *)(iVar14 + 0x350);
        if (iVar6 == 0) {
          uVar10 = 0xffffffed;
        }
        else {
          uVar10 = DAT_00023190;
          if ((**(int **)(iVar6 + 0x68) != 0) &&
             (pcVar9 = *(code **)(**(int **)(iVar6 + 0x68) + 0x18), pcVar9 != (code *)0x0)) {
            if ((*DAT_00023188 == 0) ||
               (pcVar15 = *(code **)(*DAT_00023188 + 0x18), pcVar15 == (code *)0x0)) {
              uVar10 = (*pcVar9)(iVar6,DAT_0002318c,local_c4);
            }
            else {
              uVar10 = (*pcVar15)(iVar6,DAT_0002318c,local_c4);
            }
            goto LAB_00023058;
          }
        }
      }
      else {
        piVar4 = (int *)(iVar14 + 0x7ee0);
        for (iVar6 = 0; iVar6 < *(int *)(iVar14 + 0x8040); iVar6 = iVar6 + 1) {
          iVar2 = *(int *)(*piVar4 + 0x268);
          if (iVar2 == 0) {
            uVar3 = 0xffffffed;
          }
          else {
            uVar3 = DAT_00023190;
            if ((**(int **)(iVar2 + 0x68) != 0) &&
               (pcVar9 = *(code **)(**(int **)(iVar2 + 0x68) + 0x18), pcVar9 != (code *)0x0)) {
              if ((*DAT_00023188 != 0) &&
                 (pcVar15 = *(code **)(*DAT_00023188 + 0x18), pcVar15 != (code *)0x0)) {
                pcVar9 = pcVar15;
              }
              uVar3 = (*pcVar9)(iVar2,DAT_0002318c,local_c4);
            }
          }
          uVar10 = uVar10 | uVar3;
          if (local_c4[0] != 0) break;
          piVar4 = piVar4 + 1;
        }
LAB_00023058:
        if (uVar10 == 0) {
          if (local_c4[0] == 1) {
            iVar6 = puVar13[0x46];
            puVar13[iVar6 + 0x3f] = iVar14;
            puVar13[0x46] = iVar6 + 1;
            puVar13[0x54] = puVar13[0x54] + 1;
            *(undefined4 *)(iVar14 + 0x803c) = 1;
            puVar13[0x57] = puVar13[0x57] | 1 << (*(uint *)(iVar14 + 0x7ff4) & 0xff);
          }
          else {
            if (local_c4[0] == 2) {
              iVar6 = puVar13[0x3c];
              puVar13[iVar6 + 0x35] = iVar14;
              puVar13[0x3c] = iVar6 + 1;
            }
            else {
              if (local_c4[0] != 3) goto LAB_00023098;
              iVar6 = puVar13[0x50];
              puVar13[iVar6 + 0x49] = iVar14;
              puVar13[0x50] = iVar6 + 1;
            }
            puVar13[0x54] = puVar13[0x54] + 1;
            *(int *)(iVar14 + 0x803c) = local_c4[0];
            puVar13[0x57] = puVar13[0x57] | 1 << (*(uint *)(iVar14 + 0x7ff4) & 0xff);
          }
        }
      }
LAB_00023098:
      local_d4 = local_d4 + 1;
    }
    if (puVar13[0x3c] == 1) {
      if (puVar13[0x46] == 0) {
        if (puVar13[0x50] != 0) {
          puVar13[0x53] = 2;
          goto LAB_00022fa6;
        }
        _dev_info(*puVar13,DAT_00023194);
      }
      else {
        puVar13[0x53] = 1;
LAB_00022fa6:
        *(undefined1 *)(puVar13 + 0x5b) = 1;
      }
      _dev_info(*puVar13,DAT_00023184,puVar13[0x3c],puVar13[0x46],puVar13[0x50]);
    }
  }
  mutex_unlock(puVar13 + 0x32);
  mutex_lock(iVar12 + 0x7378);
  if ((*(uint *)(param_1 + 0x7a4) & 1) == param_2) {
    printk(DAT_00023180,iVar16);
    iVar14 = -0x10;
  }
  else {
    if (*(int *)(param_1 + 0x788) == 0) {
      param_1[0x778] = 0;
      param_1[0x779] = 0;
      param_1[0x77a] = 0;
      param_1[0x77b] = 0;
    }
    param_1[0xbff] = param_1[0xbfe];
    if ((*(int *)(iVar12 + 0x34c) != 0) && (iVar14 = rkcif_update_sensor_info(param_1), iVar14 < 0))
    {
      printk(DAT_00023198,iVar16,iVar14);
      goto LAB_00023160;
    }
    iVar14 = *(int *)(iVar12 + 0x350);
    if (iVar14 != 0) {
      if ((**(int **)(iVar14 + 0x68) == 0) ||
         (pcVar9 = *(code **)(**(int **)(iVar14 + 0x68) + 0x18), pcVar9 == (code *)0x0)) {
LAB_00023248:
        *(undefined1 *)(iVar12 + 0x73a1) = 0;
        *(undefined1 *)(iVar12 + 0x73a2) = 0;
        *(undefined1 *)(iVar12 + 0x73a3) = 0;
        *(undefined1 *)(iVar12 + 0x73a4) = 0;
      }
      else {
        if ((*DAT_0002346c == 0) ||
           (pcVar15 = *(code **)(*DAT_0002346c + 0x18), pcVar15 == (code *)0x0)) {
          iVar14 = (*pcVar9)(iVar14,DAT_00023470,auStack_b4);
        }
        else {
          iVar14 = (*pcVar15)(iVar14,DAT_00023470,auStack_b4);
        }
        if (iVar14 != 0) goto LAB_00023248;
        memcpy((void *)(iVar12 + 0x73a1),auStack_b4,0x88);
      }
      iVar14 = *(int *)(iVar12 + 0x350);
      if (((iVar14 == 0) || (iVar6 = *(int *)(*(int *)(iVar14 + 0x68) + 0xc), iVar6 == 0)) ||
         (pcVar9 = *(code **)(iVar6 + 0x30), pcVar9 == (code *)0x0)) {
LAB_000231e6:
        uVar5 = DAT_00023474[1];
        *(undefined4 *)(iVar12 + 0x360) = *DAT_00023474;
        *(undefined4 *)(iVar12 + 0x364) = uVar5;
      }
      else {
        if ((DAT_0002346c[3] == 0) ||
           (pcVar15 = *(code **)(DAT_0002346c[3] + 0x30), pcVar15 == (code *)0x0)) {
          iVar14 = (*pcVar9)(iVar14,iVar12 + 0x35c);
        }
        else {
          iVar14 = (*pcVar15)();
        }
        if (iVar14 != 0) goto LAB_000231e6;
      }
      iVar14 = *(int *)(iVar12 + 0x350);
      if (((iVar14 == 0) || (**(int **)(iVar14 + 0x68) == 0)) ||
         (pcVar9 = *(code **)(**(int **)(iVar14 + 0x68) + 0x18), pcVar9 == (code *)0x0)) {
LAB_000231fc:
        local_c8 = 0;
      }
      else {
        if ((*DAT_0002346c == 0) ||
           (pcVar15 = *(code **)(*DAT_0002346c + 0x18), pcVar15 == (code *)0x0)) {
          iVar14 = (*pcVar9)(iVar14,DAT_0002347c,&local_c8);
        }
        else {
          iVar14 = (*pcVar15)(iVar14,DAT_0002347c,&local_c8);
        }
        if (iVar14 != 0) goto LAB_000231fc;
      }
      rkcif_sync_crop_info(param_1);
    }
    iVar14 = *(int *)(param_1 + 4);
    uVar5 = DAT_00023480;
    if (*(int *)(iVar14 + 0x350) == 0) {
LAB_00023236:
      printk(uVar5,iVar14 + 0x1c);
    }
    else {
      piVar4 = (int *)get_input_fmt(*(int *)(iVar14 + 0x350),local_c4,*param_1 & 7,
                                    (*param_1 & 7) * 0x68 + iVar14 + 0x71c8);
      *(int **)(param_1 + 0x578) = piVar4;
      uVar5 = DAT_00023478;
      if (piVar4 == (int *)0x0) goto LAB_00023236;
      if (*piVar4 - 0x5002U < 2) {
        param_1[0xbf9] = 0;
LAB_000232c6:
        iVar7 = iVar7 + 200;
        mutex_lock(iVar7);
        if ((((*(int *)(iVar12 + 0x34c) == 0) || (*(int *)(*(int *)(iVar12 + 0x34c) + 4) != 2)) &&
            (*(char *)(iVar12 + 0x8033) == '\0')) ||
           (((*(int *)(*(int *)(iVar12 + 0x7ed4) + 0x194) != 0 || (param_2 != 1)) ||
            (iVar14 = rkcif_create_dummy_buf(param_1), -1 < iVar14)))) {
          mutex_unlock(iVar7);
          if (*(int *)(param_1 + 0x7a4) == 0) {
            pbVar11 = param_1 + 0xbd8;
            HintPreloadData(pbVar11);
            do {
              ExclusiveAccess(pbVar11);
              bVar1 = (bool)hasExclusiveAccess(pbVar11);
            } while (!bVar1);
            *(int *)pbVar11 = *(int *)pbVar11 + -1;
            iVar14 = (**(code **)(iVar12 + 0x71bc))(iVar12 + 0x7110,param_1 + 0x1d8,1);
            uVar5 = DAT_0002349c;
            if (iVar14 < 0) goto LAB_00023312;
            if (((*(int *)(iVar8 + 4) != 1) && (local_c8 != 2)) ||
               (iVar14 = (**(code **)(iVar12 + 0x71c4))(iVar12 + 0x7110,1), -1 < iVar14))
            goto LAB_000233a6;
          }
          else {
LAB_000233a6:
            if (((*(int *)(iVar12 + 0x736c) < 5) || (*(int *)(iVar12 + 0x34c) == 0)) ||
               (2 < *(int *)(*(int *)(iVar12 + 0x34c) + 4) - 4U)) {
              iVar14 = rkcif_stream_start(param_1,param_2);
            }
            else {
              iVar14 = rkcif_csi_stream_start(param_1,param_2);
            }
            if (-1 < iVar14) {
              if (*(int *)(param_1 + 0x7a4) != 0) {
LAB_000234d0:
                if ((1 < *(int *)(iVar12 + 0x736c) - 6U) && (*(int *)(iVar12 + 0x736c) != 8))
                goto LAB_00023500;
                iVar7 = *(int *)(iVar12 + 0x73a1);
                if (iVar7 == 0) {
                  iVar7 = *(int *)(iVar12 + 0x8f8);
LAB_000234ee:
                  if (iVar7 == 2) {
                    rkcif_start_luma(iVar12 + 0x7448,*(undefined4 *)(iVar12 + 0x960));
                  }
                }
                else if (iVar7 == 5) {
                  if (*(int *)(iVar12 + 0x8f8) == 2) {
                    iVar7 = *(int *)(iVar12 + 0x1500);
                    goto LAB_000234ee;
                  }
                }
                else if (((iVar7 == 6) && (*(int *)(iVar12 + 0x8f8) == 2)) &&
                        (*(int *)(iVar12 + 0x1500) == 2)) {
                  iVar7 = *(int *)(iVar12 + 0x2108);
                  goto LAB_000234ee;
                }
LAB_00023500:
                *(undefined1 *)(iVar12 + 0x8031) = 0;
                *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) | param_2;
                rkcif_monitor_reset_event(iVar12);
                goto LAB_00023160;
              }
              iVar7 = iVar12 + 0x7110;
              iVar14 = media_pipeline_start(param_1 + 0x1d8,iVar7);
              if (iVar14 < 0) {
                printk(DAT_00023498,iVar16,iVar14);
              }
              else {
                if (((*(int *)(iVar8 + 4) == 1) || (local_c8 == 2)) ||
                   (iVar14 = (**(code **)(iVar12 + 0x71c4))(iVar7,1), -1 < iVar14))
                goto LAB_000234d0;
                rkcif_stream_stop(param_1);
              }
              (**(code **)(iVar12 + 0x71c4))(iVar7,0);
            }
          }
          __pm_runtime_idle(*(undefined4 *)(iVar12 + 8),4);
        }
        else {
          mutex_unlock(iVar7);
          uVar5 = DAT_00023484;
LAB_00023312:
          printk(uVar5,iVar16,iVar14);
        }
        goto LAB_00022f54;
      }
      uVar10 = *(uint *)(param_1 + 0x63c);
      uVar5 = DAT_00023488;
      if ((local_bc < *(uint *)(param_1 + 0x644) + uVar10) ||
         (local_b8 < (uint)(*(int *)(param_1 + 0x648) + *(int *)(param_1 + 0x640))))
      goto LAB_00023236;
      if (*(int *)(iVar14 + 0x34c) == 0) goto LAB_000232c6;
      iVar6 = *(int *)(*(int *)(iVar14 + 0x34c) + 4);
      if (iVar6 - 5U < 2) {
        if (((((int)uVar10 < 1) || (0xe < (uint)piVar4[2])) ||
            (iVar6 = (int)*(char *)(DAT_0002348c + piVar4[2] + 0x9d8), iVar6 < 1)) ||
           (__aeabi_idivmod(uVar10,iVar6), uVar5 = DAT_00023490, extraout_r1 == 0))
        goto LAB_000232c6;
      }
      else {
        if (((iVar6 != 4) || ((uVar10 & 3) == 0)) || ((*(uint *)(param_1 + 0x644) & 3) == 0))
        goto LAB_000232c6;
        iVar6 = 4;
        uVar5 = DAT_00023494;
      }
      printk(uVar5,iVar14 + 0x1c,iVar6);
    }
    iVar14 = -0x16;
  }
LAB_00022f54:
  if (*(int *)(param_1 + 0x538) != 0) {
    vb2_buffer_done(*(int *)(param_1 + 0x538),3);
  }
  if (*(int *)(param_1 + 0x534) != 0) {
    vb2_buffer_done(*(int *)(param_1 + 0x534),3);
  }
  while (*(byte **)(param_1 + 0x52c) != param_1 + 0x52c) {
    iVar7 = *(int *)(param_1 + 0x52c);
    vb2_buffer_done(iVar7 + -0x280,3);
    list_del(iVar7);
  }
LAB_00023160:
  mutex_unlock(iVar12 + 0x7378);
  if (local_2c != *DAT_00023178) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar14);
  }
  return;
}



/* ===== rkcif_start_streaming @ 00023574 size=8 ===== */

void rkcif_start_streaming(int param_1)

{
  rkcif_do_start_stream(*(undefined4 *)(param_1 + 0x28),1);
  return;
}



/* ===== csi2_disable @ 0002357c size=44 ===== */

void csi2_disable(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x254);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar1 + 0x10) = 0;
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
  return;
}



/* ===== csi2_hw_do_reset @ 000235a8 size=32 ===== */

void csi2_hw_do_reset(int param_1)

{
  reset_control_assert(*(undefined4 *)(param_1 + 0x250));
  (**(code **)(DAT_000235c8 + 4))(DAT_000235cc);
  reset_control_deassert(*(undefined4 *)(param_1 + 0x250));
  return;
}



/* ===== get_remote_terminal_sensor @ 000235d0 size=86 ===== */

void get_remote_terminal_sensor(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a4 [144];
  
  iVar3 = *param_1;
  iVar2 = iVar3 + 0xd8;
  mutex_lock(iVar2);
  iVar3 = media_graph_walk_init(auStack_a4,iVar3);
  if (iVar3 == 0) {
    media_graph_walk_start(auStack_a4,param_1);
    iVar3 = DAT_00023628;
    do {
      iVar1 = media_graph_walk_next(auStack_a4);
      if (iVar1 == 0) break;
    } while (*(int *)(iVar1 + 0x18) != iVar3);
    mutex_unlock(iVar2);
    media_graph_walk_cleanup(auStack_a4);
    *param_2 = iVar1;
  }
  else {
    mutex_unlock(iVar2);
    *param_2 = 0;
  }
  return;
}



/* ===== rkcif_csi2_plat_drv_exit @ 0002362c size=6 ===== */

void rkcif_csi2_plat_drv_exit(void)

{
  platform_driver_unregister(DAT_00023634);
  return;
}



/* ===== cleanup_module @ 00023638 size=16 ===== */

void cleanup_module(void)

{
  platform_driver_unregister(DAT_00023648);
  rkcif_csi2_plat_drv_exit();
  return;
}



/* ===== <EXTERNAL>::vb2_queue_init @ 0002d000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_queue_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002d004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::completion_done @ 0002d008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void completion_done(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_device_unregister @ 0002d010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_device_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regmap_write @ 0002d014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regmap_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_request_threaded_irq @ 0002d018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_request_threaded_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_queue_release @ 0002d01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_queue_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion_timeout @ 0002d020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_kmalloc @ 0002d024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_variable_u32_array @ 0002d028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_variable_u32_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__msecs_to_jiffies @ 0002d030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __msecs_to_jiffies(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_driver_unregister @ 0002d034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_driver_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_find_device_by_node @ 0002d038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_find_device_by_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_irq @ 0002d03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_device_init @ 0002d040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_device_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002d048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::complete @ 0002d04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void complete(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_address_to_resource @ 0002d050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_address_to_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_work_on @ 0002d054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kfifo_in @ 0002d060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kfifo_in(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_free_table @ 0002d068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_free_table(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_unregister_subdev @ 0002d06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_unregister_subdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_swait_queue_head @ 0002d070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_swait_queue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::finish_wait @ 0002d074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void finish_wait(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_alloc_table_from_pages @ 0002d078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_alloc_table_from_pages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_sync_sg_for_cpu @ 0002d084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_sync_sg_for_cpu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_get_if_active @ 0002d088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_get_if_active(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_init_class @ 0002d08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_init_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap @ 0002d090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_sync_single_for_device @ 0002d094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_sync_single_for_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_disable @ 0002d098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002d09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::reset_control_assert @ 0002d0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void reset_control_assert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::remap_pfn_range @ 0002d0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void remap_pfn_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vunmap @ 0002d0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vunmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 0002d0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_unprepare @ 0002d0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_remote_pad @ 0002d0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_remote_pad(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__media_device_register @ 0002d0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __media_device_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_heavy_mb @ 0002d0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_heavy_mb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_create_data @ 0002d0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_create_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_subdev_init @ 0002d0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_subdev_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prepare_to_wait_event @ 0002d0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void prepare_to_wait_event(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__wake_up @ 0002d0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_fh_open @ 0002d0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_fh_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_resource_byname @ 0002d0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_resource_byname(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kfifo_free @ 0002d0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kfifo_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_get @ 0002d0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wake_up_process @ 0002d0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wake_up_process(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_create_pad_link @ 0002d0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_create_pad_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_driver_string @ 0002d0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_driver_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_pm_select_default_state @ 0002d0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_pm_select_default_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_register_subdev @ 0002d0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_register_subdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_reset_control_array_get @ 0002d100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_reset_control_array_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_prepare @ 0002d104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule_timeout @ 0002d108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_irq_byname @ 0002d10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_irq_byname(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_register_subdev_sensor_common @ 0002d110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_register_subdev_sensor_common(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 0002d114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atomic_notifier_chain_register @ 0002d118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void atomic_notifier_chain_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::video_devdata @ 0002d11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void video_devdata(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscon_regmap_lookup_by_phandle @ 0002d120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void syscon_regmap_lookup_by_phandle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_export @ 0002d124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_export(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 0002d128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_fop_release @ 0002d12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_fop_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep_range @ 0002d130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usleep_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_find @ 0002d134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__free_pages @ 0002d138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __free_pages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 0002d13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 0002d140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kvmalloc_node @ 0002d148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kvmalloc_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_plane_cookie @ 0002d14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_plane_cookie(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::work_busy @ 0002d150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void work_busy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_enable @ 0002d154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tasklet_kill @ 0002d158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tasklet_kill(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_unregister_subdev @ 0002d15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_unregister_subdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__do_div64 @ 0002d160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __do_div64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_wait_entry @ 0002d168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_wait_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 0002d16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 0002d174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_pm_select_sleep_state @ 0002d178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_pm_select_sleep_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kstrtoint @ 0002d184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kstrtoint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_graph_walk_cleanup @ 0002d188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_graph_walk_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mod_timer @ 0002d18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mod_timer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tasklet_init @ 0002d190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tasklet_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_resource @ 0002d198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002d19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::reset_control_deassert @ 0002d1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void reset_control_deassert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 0002d1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlcpy @ 0002d1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strlcpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0002d1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 0002d1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__tasklet_schedule @ 0002d1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __tasklet_schedule(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_put @ 0002d1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_buffer_done @ 0002d1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_buffer_done(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_plane_vaddr @ 0002d1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_plane_vaddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_register @ 0002d1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_fd @ 0002d1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vmap @ 0002d1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_find_property @ 0002d1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_find_property(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_pads_init @ 0002d1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_pads_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_graph_walk_next @ 0002d1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_graph_walk_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::video_unregister_device @ 0002d1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void video_unregister_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_match_node @ 0002d1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_match_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysfs_create_group @ 0002d1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sysfs_create_group(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__local_bh_enable_ip @ 0002d1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __local_bh_enable_ip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_ctrl_s_ctrl_int64 @ 0002d1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_ctrl_s_ctrl_int64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 0002d1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 0002d1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_device_is_available @ 0002d1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_device_is_available(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_event_subscribe @ 0002d1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_event_subscribe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rv1106_sdmmc_get_lock @ 0002d204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rv1106_sdmmc_get_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_pipeline_start @ 0002d20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_pipeline_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_pipeline_pm_put @ 0002d210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_pipeline_pm_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_sync_sg_for_device @ 0002d218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_sync_sg_for_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_pipeline_stop @ 0002d21c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_pipeline_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002d220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_warn @ 0002d224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0002d228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::PDE_DATA @ 0002d22c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void PDE_DATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atomic_notifier_call_chain @ 0002d230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void atomic_notifier_call_chain(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_g_ctrl_int64 @ 0002d234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_g_ctrl_int64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 0002d238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_reserved_mem_device_init_by_idx @ 0002d23c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_reserved_mem_device_init_by_idx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_register @ 0002d240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002d248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__platform_driver_register @ 0002d250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __platform_driver_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kthread_create_on_node @ 0002d254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kthread_create_on_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_parse_fwnode_endpoints @ 0002d258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_parse_fwnode_endpoints(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__devm_reset_control_get @ 0002d25c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __devm_reset_control_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysfs_remove_group @ 0002d260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sysfs_remove_group(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__alloc_pages_nodemask @ 0002d264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __alloc_pages_nodemask(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_get_rate @ 0002d26c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_get_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002d270 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_setup_link @ 0002d274 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_setup_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strscpy @ 0002d278 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strscpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atomic_notifier_chain_unregister @ 0002d27c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void atomic_notifier_chain_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regmap_read @ 0002d280 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regmap_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 0002d284 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 0002d288 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_init @ 0002d28c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_timer_key @ 0002d290 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_timer_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__video_register_device @ 0002d294 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __video_register_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap_resource @ 0002d298 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_cleanup @ 0002d29c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::remove_proc_entry @ 0002d2a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void remove_proc_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_subdev_notifier_register @ 0002d2ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_subdev_notifier_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ktime_get @ 0002d2b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ktime_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_printf @ 0002d2b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_printf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_device_register_subdev_nodes @ 0002d2bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_device_register_subdev_nodes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 0002d2c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_new_std @ 0002d2c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_new_std(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_pipeline_pm_get @ 0002d2cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_pipeline_pm_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_bulk_get_all @ 0002d2d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_bulk_get_all(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_clr_unready_dev @ 0002d2d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_clr_unready_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_alias_get_id @ 0002d2d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_alias_get_id(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_parse_fwnode_endpoints_by_port @ 0002d2dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_parse_fwnode_endpoints_by_port(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_free @ 0002d2e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_disable @ 0002d2e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_unregister @ 0002d2e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_puts @ 0002d2ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_puts(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_graph_walk_start @ 0002d2f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_graph_walk_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_graph_walk_init @ 0002d2f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_graph_walk_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_prepare @ 0002d2fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_unmap_sg_attrs @ 0002d304 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_unmap_sg_attrs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_parse_phandle @ 0002d308 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_parse_phandle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_event_queue @ 0002d30c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_event_queue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kfifo_alloc @ 0002d310 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kfifo_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::del_timer @ 0002d314 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void del_timer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kvfree @ 0002d320 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kvfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::single_open @ 0002d324 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void single_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 0002d328 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_enable @ 0002d334 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kfifo_out @ 0002d338 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kfifo_out(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rv1106_sdmmc_put_lock @ 0002d33c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rv1106_sdmmc_put_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 0002d340 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_idle @ 0002d344 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_idle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_register_subdev @ 0002d348 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_register_subdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 0002d34c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_map_sg_attrs @ 0002d354 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_map_sg_attrs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::disable_irq @ 0002d35c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void disable_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_unprepare @ 0002d364 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


