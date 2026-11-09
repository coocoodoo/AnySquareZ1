// phy-rockchip-csi2-dphy.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== rockchip_csi2_dphy_fwnode_parse @ 000101c0 size=98 ===== */

undefined4
rockchip_csi2_dphy_fwnode_parse(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_2;
  uVar2 = DAT_00010228;
  if (iVar3 == 0) {
    iVar3 = param_2[3];
    if (iVar3 == 5) {
      *(undefined4 *)(param_3 + 0x1c) = 5;
      *(int *)(param_3 + 0x20) = param_2[8];
      bVar1 = *(byte *)((int)param_2 + 0x29);
    }
    else {
      uVar2 = DAT_0001022c;
      if (iVar3 != 4) goto LAB_000101c8;
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
      goto switchD_000101ec_default;
    }
    uVar2 = 0;
    *(uint *)(param_3 + 0x20) = uVar4;
  }
  else {
LAB_000101c8:
    _dev_err(param_1,uVar2,param_3,iVar3,param_4);
switchD_000101ec_default:
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== csi2_dphy_runtime_resume @ 00010230 size=108 ===== */

int csi2_dphy_runtime_resume(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(*(int *)(iVar2 + 0x1ac) + 0x20);
  if (iVar1 == 1) {
    if (*(int *)(iVar2 + -0x34) != 0) {
      uVar3 = *(undefined4 *)(*(int *)(iVar2 + -0x34) + 8);
      iVar1 = clk_prepare(uVar3);
      if ((iVar1 == 0) && (iVar1 = clk_enable(uVar3), iVar1 != 0)) {
        clk_unprepare(uVar3);
        return 0;
      }
    }
  }
  else {
    puVar4 = *(undefined4 **)(iVar2 + -0x38);
    if (puVar4 != (undefined4 *)0x0) {
      uVar3 = puVar4[0x41];
      uVar5 = puVar4[8];
      iVar1 = clk_bulk_prepare(uVar3,uVar5,iVar1,iVar2,param_4);
      if (iVar1 == 0) {
        iVar1 = clk_bulk_enable(uVar3,uVar5);
        if (iVar1 == 0) {
          return 0;
        }
        clk_bulk_unprepare(uVar3,uVar5);
      }
      _dev_err(*puVar4,DAT_0001029c);
      return iVar1;
    }
  }
  return 0;
}



/* ===== csi2_dphy_runtime_suspend @ 000102a0 size=70 ===== */

undefined4
csi2_dphy_runtime_suspend(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(*(int *)(iVar2 + 0x1ac) + 0x20);
  if (iVar1 == 1) {
    if (*(int *)(iVar2 + -0x34) != 0) {
      uVar3 = *(undefined4 *)(*(int *)(iVar2 + -0x34) + 8);
      clk_disable(uVar3);
      clk_unprepare(uVar3);
    }
  }
  else {
    iVar2 = *(int *)(iVar2 + -0x38);
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x104);
      uVar4 = *(undefined4 *)(iVar2 + 0x20);
      clk_bulk_disable(uVar3,uVar4,iVar1,iVar2,param_4);
      clk_bulk_unprepare(uVar3,uVar4);
    }
  }
  return 0;
}



/* ===== rockchip_csi2_dphy_remove @ 000102e6 size=14 ===== */

undefined4
rockchip_csi2_dphy_remove(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __pm_runtime_disable(param_1 + 0x10,1,param_3,param_4,param_4);
  return 0;
}



/* ===== get_remote_sensor @ 000102f4 size=40 ===== */

undefined4 get_remote_sensor(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  iVar1 = media_entity_remote_pad(uVar2);
  if (iVar1 == 0) {
    printk(DAT_0001031c,param_1 + 0x74);
    uVar2 = 0;
  }
  else {
    iVar1 = media_entity_remote_pad(uVar2);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  return uVar2;
}



/* ===== csi2_dphy_update_sensor_mbus @ 00010320 size=502 ===== */

int csi2_dphy_update_sensor_mbus(int param_1)

{
  int *piVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 local_b0;
  uint local_ac;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  int local_a0;
  
  iVar2 = get_remote_sensor();
  piVar1 = DAT_00010520;
  if (iVar2 != 0) {
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x19c); iVar3 = iVar3 + 1) {
      iVar6 = iVar3 * 0x40;
      if (iVar2 == *(int *)(param_1 + 0x110 + iVar6)) {
        if (param_1 + iVar6 == -0x110) {
          return -0x13;
        }
        iVar3 = *(int *)(*(int *)(iVar2 + 0x68) + 0x1c);
        if (iVar3 == 0) {
          return DAT_00010540;
        }
        pcVar4 = *(code **)(iVar3 + 0x3c);
        if (pcVar4 == (code *)0x0) {
          return DAT_00010540;
        }
        if ((DAT_00010520[7] == 0) ||
           (pcVar7 = *(code **)(DAT_00010520[7] + 0x3c), pcVar7 == (code *)0x0)) {
          iVar3 = (*pcVar4)(iVar2,0,&local_b0);
        }
        else {
          iVar3 = (*pcVar7)(iVar2,0,&local_b0);
        }
        if (iVar3 != 0) {
          return iVar3;
        }
        *(undefined4 *)(param_1 + iVar6 + 0x114) = local_b0;
        *(uint *)(param_1 + iVar6 + 0x118) = local_ac;
        switch(local_ac & 0xf) {
        case 1:
          uVar5 = 1;
          break;
        case 2:
          uVar5 = 2;
          break;
        default:
          return -0x16;
        case 4:
          uVar5 = 3;
          break;
        case 8:
          uVar5 = 4;
        }
        *(undefined4 *)(iVar6 + param_1 + 0x14c) = uVar5;
        if (((*(int *)(*(int *)(param_1 + 0x1ac) + 0x20) == 0) && (**(int **)(iVar2 + 0x68) != 0))
           && (pcVar4 = *(code **)(**(int **)(iVar2 + 0x68) + 0x18), pcVar4 != (code *)0x0)) {
          iVar3 = *piVar1;
          if ((iVar3 == 0) || (pcVar7 = *(code **)(iVar3 + 0x18), pcVar7 == (code *)0x0)) {
            iVar3 = (*pcVar4)(iVar2,DAT_00010528,auStack_a8);
          }
          else {
            iVar3 = (*pcVar7)(iVar2,DAT_00010528,auStack_a8);
          }
          if (iVar3 == 0) {
            _dev_info(*(undefined4 *)(param_1 + -0x44),DAT_0001052c,local_a0,local_a4);
            iVar3 = *(int *)(param_1 + -0x38);
            if (local_a0 == 0) {
              if (*(int *)(*(int *)(iVar3 + 0x18) + 0x28) == 1) {
                uVar5 = *(undefined4 *)(param_1 + 0x1a0);
                __aeabi_idivmod(uVar5,3);
                if (extraout_r1 == 2) {
                  _dev_err(*(undefined4 *)(param_1 + -0x44),DAT_00010534,DAT_00010530,uVar5);
                  *(undefined4 *)(param_1 + 0x1a8) = 1;
LAB_00010482:
                  iVar3 = -0x16;
                  goto LAB_000103ca;
                }
              }
              uVar5 = 1;
LAB_00010494:
              *(undefined4 *)(param_1 + 0x1a8) = uVar5;
            }
            else {
              if (local_a0 == 1) {
                if (*(int *)(*(int *)(iVar3 + 0x18) + 0x28) == 2) goto LAB_000104b0;
                uVar8 = *(undefined4 *)(param_1 + 0x1a0);
                __aeabi_idivmod(uVar8,3);
                uVar5 = DAT_00010534;
                if (extraout_r1_00 == 2) goto LAB_000104d4;
LAB_000104de:
                uVar5 = 2;
                goto LAB_00010494;
              }
              if (local_a0 == 2) {
                if (*(int *)(*(int *)(iVar3 + 0x18) + 0x28) != 2) {
                  uVar8 = *(undefined4 *)(param_1 + 0x1a0);
                  __aeabi_idivmod(uVar8,3);
                  uVar5 = DAT_0001053c;
                  if (extraout_r1_01 == 2) goto LAB_000104de;
LAB_000104d4:
                  _dev_err(*(undefined4 *)(param_1 + -0x44),uVar5,DAT_00010530,uVar8);
                  goto LAB_00010482;
                }
LAB_000104b0:
                _dev_err(*(undefined4 *)(param_1 + -0x44),DAT_00010538,DAT_00010530);
                goto LAB_00010482;
              }
            }
            *(undefined4 *)(iVar3 + 0x110) = *(undefined4 *)(param_1 + 0x1a8);
            iVar3 = 0;
            goto LAB_000103ca;
          }
        }
        iVar3 = 0;
LAB_000103ca:
        if (*(int *)(*(int *)(param_1 + 0x1ac) + 0x20) != 1) {
          return iVar3;
        }
        if (**(int **)(iVar2 + 0x68) == 0) {
          return 0;
        }
        pcVar4 = *(code **)(**(int **)(iVar2 + 0x68) + 0x18);
        if (pcVar4 == (code *)0x0) {
          return 0;
        }
        iVar3 = *piVar1;
        if ((iVar3 != 0) && (pcVar7 = *(code **)(iVar3 + 0x18), pcVar7 != (code *)0x0)) {
          (*pcVar7)(iVar2,DAT_00010524);
          return 0;
        }
        (*pcVar4)(iVar2,DAT_00010524,param_1 + 0x1b0);
        return 0;
      }
    }
  }
  return -0x13;
}



/* ===== csi2_dphy_get_selection @ 00010544 size=62 ===== */

undefined4 csi2_dphy_get_selection(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar4;
  
  iVar1 = get_remote_sensor();
  if (iVar1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    uVar2 = DAT_00010588;
    if ((iVar3 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x18), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(int *)(DAT_00010584 + 0x1c) != 0) &&
         (pcVar4 = *(code **)(*(int *)(DAT_00010584 + 0x1c) + 0x18), pcVar4 != (code *)0x0)) {
        UNRECOVERED_JUMPTABLE = pcVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0001056e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar1,0,param_3);
      return uVar2;
    }
  }
  return uVar2;
}



/* ===== csi2_dphy_g_frame_interval @ 0001058c size=58 ===== */

undefined4 csi2_dphy_g_frame_interval(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar4;
  
  iVar1 = get_remote_sensor();
  if (iVar1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x68) + 0xc);
    uVar2 = DAT_000105cc;
    if ((iVar3 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(int *)(DAT_000105c8 + 0xc) != 0) &&
         (pcVar4 = *(code **)(*(int *)(DAT_000105c8 + 0xc) + 0x30), pcVar4 != (code *)0x0)) {
        UNRECOVERED_JUMPTABLE = pcVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x000105b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}



/* ===== rockchip_csi2_dphy_probe @ 000105d0 size=686 ===== */

undefined4
rockchip_csi2_dphy_probe(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *__format;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int extraout_r1;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = param_1 + 0x10;
  piVar1 = (int *)devm_kmalloc(iVar10,0x2c0,0xdc0,param_4,param_1,param_2,param_3);
  if (piVar1 == (int *)0x0) {
    return 0xfffffff4;
  }
  *piVar1 = iVar10;
  iVar2 = of_match_device(DAT_00010880,iVar10);
  if (iVar2 == 0) {
    return 0xffffffea;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x174);
  piVar1[0x7c] = *(int *)(iVar2 + 0xc0);
  uVar4 = of_alias_get_id(uVar3);
  iVar2 = *piVar1;
  if (uVar4 < 0x10) {
    piVar1[0x79] = uVar4;
  }
  else {
    piVar1[0x79] = 0;
  }
  if (*(int *)(piVar1[0x7c] + 0x20) == 1) {
    uVar4 = devm_phy_optional_get(iVar2,DAT_00010884);
    if (uVar4 < 0xfffff001) {
      iVar9 = *(int *)(uVar4 + 0x40);
      uVar4 = 0;
      iVar2 = *(int *)(iVar9 + 0x3c);
      *(int **)(iVar9 + (iVar2 + 0xc) * 4) = piVar1;
      *(int *)(iVar9 + 0x3c) = iVar2 + 1;
      piVar1[4] = iVar9;
    }
    else {
      _dev_err(*piVar1,DAT_00010888,uVar4);
    }
    memcpy(piVar1 + 0x7d,DAT_0001088c,0xcc);
    if (uVar4 == 0) {
LAB_000106f2:
      piVar6 = piVar1 + 0x11;
      __mutex_init(piVar1 + 0x42,DAT_000108a8,DAT_000108a4);
      v4l2_subdev_init(piVar6,DAT_000108ac);
      __format = DAT_000108b0;
      piVar1[0x29] = piVar1[0x29] | 4;
      snprintf((char *)(piVar1 + 0x2e),0x20,__format,piVar1[0x79]);
      piVar1[0x3a] = iVar10;
      piVar1[0x54] = 6;
      *(int **)(param_1 + 0x50) = piVar6;
      piVar1[0x4c] = 5;
      piVar1[0x17] = 0x5002;
      iVar2 = media_entity_pads_init(piVar6,2,piVar1 + 0x45);
      if (-1 < iVar2) {
        piVar11 = piVar1 + 5;
        v4l2_async_notifier_init(piVar11);
        iVar9 = v4l2_async_notifier_parse_fwnode_endpoints_by_port
                          (*piVar1,piVar11,0x28,0,DAT_000108c0);
        iVar2 = DAT_000108c4;
        if (-1 < iVar9) {
          piVar1[0x40] = (int)piVar11;
          piVar1[5] = iVar2;
          iVar2 = v4l2_async_subdev_notifier_register(piVar6,piVar11);
          if (iVar2 == 0) {
            iVar2 = v4l2_async_register_subdev(piVar6);
          }
          else {
            _dev_err(*piVar1,DAT_000108c8,iVar2);
            v4l2_async_notifier_cleanup(piVar11);
          }
          if (-1 < iVar2) {
            pm_runtime_enable(iVar10);
            _dev_info(iVar10,DAT_000108cc,piVar1[0x79]);
            return 0;
          }
        }
      }
      if (*(int *)(piVar1[0x7c] + 0x20) == 1) {
        iVar10 = piVar1[4];
        iVar2 = *(int *)(iVar10 + 0x3c);
        piVar6 = (int *)(iVar10 + 0x30);
        for (iVar9 = 0; iVar9 < iVar2; iVar9 = iVar9 + 1) {
          if ((*piVar6 != 0) && (*(int *)(*piVar6 + 0x1e4) == piVar1[0x79])) {
            *(undefined4 *)(iVar10 + (iVar9 + 0xc) * 4) = 0;
            *(int *)(iVar10 + 0x3c) = iVar2 + -1;
            return 0;
          }
          piVar6 = piVar6 + 1;
        }
      }
      else {
        iVar10 = piVar1[3];
        iVar2 = *(int *)(iVar10 + 0x10c);
        piVar6 = (int *)(iVar10 + 0x28);
        for (iVar9 = 0; iVar9 < iVar2; iVar9 = iVar9 + 1) {
          if ((*piVar6 != 0) && (*(int *)(*piVar6 + 0x1e4) == piVar1[0x79])) {
            *(undefined4 *)(iVar10 + (iVar9 + 10) * 4) = 0;
            *(int *)(iVar10 + 0x10c) = iVar2 + -1;
            return 0;
          }
          piVar6 = piVar6 + 1;
        }
      }
      return 0;
    }
  }
  else {
    __aeabi_idivmod(piVar1[0x79],3);
    if (extraout_r1 == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = 2;
    }
    iVar2 = of_parse_phandle(*(undefined4 *)(iVar2 + 0x164),DAT_00010894,0);
    if ((iVar2 == 0) || (iVar5 = of_device_is_available(), iVar5 == 0)) {
      iVar2 = piVar1[0x79];
      uVar3 = DAT_00010898;
    }
    else {
      iVar2 = of_find_device_by_node(iVar2);
      if (iVar2 == 0) {
        iVar2 = piVar1[0x79];
        uVar3 = DAT_0001089c;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x50);
        if (iVar2 != 0) {
          iVar7 = *(int *)(iVar2 + 0x10c);
          iVar5 = *(int *)(iVar2 + 0x110);
          if (iVar5 == 0) {
            *(int *)(iVar2 + 0x110) = iVar9;
          }
          else {
            piVar6 = (int *)(iVar2 + 0x28);
            for (iVar12 = 0; iVar13 = *(int *)(iVar2 + 0x28), iVar12 < iVar7; iVar12 = iVar12 + 1) {
              iVar13 = *piVar6;
              if (iVar5 == *(int *)(*piVar6 + 0x1ec)) break;
              piVar6 = piVar6 + 1;
            }
            if (iVar5 != iVar9) {
              uVar3 = DAT_000108b4;
              if (iVar9 != 1) {
                uVar3 = DAT_000108b8;
              }
              uVar8 = DAT_000108b8;
              if (iVar5 == 1) {
                uVar8 = DAT_000108b4;
              }
              _dev_err(*piVar1,DAT_000108bc,uVar8,*(undefined4 *)(iVar13 + 0x1e4),uVar3);
              goto LAB_00010656;
            }
          }
          *(int **)(iVar2 + (iVar7 + 10) * 4) = piVar1;
          *(int *)(iVar2 + 0x10c) = iVar7 + 1;
          piVar1[3] = iVar2;
          goto LAB_000106f2;
        }
        iVar2 = piVar1[0x79];
        uVar3 = DAT_000108a0;
      }
    }
    _dev_err(*piVar1,uVar3,iVar2);
  }
LAB_00010656:
  _dev_err(iVar10,DAT_00010890,piVar1[0x79]);
  return 0xffffffed;
}



/* ===== rockchip_csi2_dphy_notifier_bound @ 000108d0 size=178 ===== */

int rockchip_csi2_dphy_notifier_bound(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x1cc);
  if (iVar4 == 2) {
    iVar5 = -0x10;
  }
  else {
    *(int *)(param_1 + 0x1cc) = iVar4 + 1;
    iVar5 = param_1 + iVar4 * 0x40;
    *(undefined4 *)(iVar5 + 0x17c) = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(iVar5 + 0x144) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(iVar5 + 0x148) = uVar2;
    *(int *)(iVar5 + 0x140) = param_2;
    _dev_info(*(undefined4 *)(param_1 + -0x14),DAT_00010984,*(undefined4 *)(param_1 + 0x1d0),
              param_2 + 0x74,*(undefined4 *)(param_3 + 0x1c),param_2,param_3);
    iVar1 = *(int *)(iVar5 + 0x140);
    for (uVar3 = 0; uVar3 < *(ushort *)(iVar1 + 0x20); uVar3 = uVar3 + 1) {
      if (*(int *)(*(int *)(iVar1 + 0x2c) + uVar3 * 0x20 + 0x1c) << 0x1e < 0) goto LAB_0001094a;
    }
    if (*(ushort *)(iVar1 + 0x20) == uVar3) {
      iVar5 = -6;
      _dev_err(*(undefined4 *)(param_1 + -0x14),DAT_00010988,iVar1 + 0x74);
    }
    else {
LAB_0001094a:
      iVar5 = media_create_pad_link
                        (iVar1,uVar3 & 0xffff,param_1 + 0x30,0,*(int *)(param_1 + 0x1cc) == 1);
      if (iVar5 != 0) {
        _dev_err(*(undefined4 *)(param_1 + -0x14),DAT_0001098c,
                 *(int *)(iVar4 * 0x40 + param_1 + 0x140) + 0x74);
      }
    }
  }
  return iVar5;
}



/* ===== csi2_dphy_s_power @ 00010990 size=18 ===== */

void csi2_dphy_s_power(int param_1,int param_2)

{
  if (param_2 != 0) {
    __pm_runtime_resume(*(undefined4 *)(param_1 + -0x44),4);
    return;
  }
  __pm_runtime_idle(*(undefined4 *)(param_1 + -0x44),5);
  return;
}



/* ===== csi2_dphy_s_stream @ 000109a2 size=442 ===== */

void csi2_dphy_s_stream(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  int iStack_4c;
  int local_2c;
  
  local_2c = *DAT_00010b68;
  mutex_lock(param_1 + 0xc4);
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x1a4) == '\0') {
      iVar4 = *(int *)(param_1 + -0x38);
      iVar8 = *(int *)(param_1 + -0x34);
      iVar2 = get_remote_sensor(param_1);
      memset(&local_54,0,0x28);
      local_58 = DAT_00010b6c;
      if (iVar2 == 0) {
        iVar2 = -0x13;
        goto LAB_000109fc;
      }
      iVar7 = param_1 + 0x74;
      iVar3 = v4l2_ctrl_find(*(undefined4 *)(iVar2 + 0x70));
      if (iVar3 == 0) {
        printk(DAT_00010b78,iVar7);
        iVar2 = -0x20;
        goto LAB_000109fc;
      }
      local_54 = v4l2_ctrl_g_ctrl();
      iVar2 = v4l2_querymenu(*(undefined4 *)(iVar2 + 0x70),&local_58);
      if (iVar2 < 0) {
        printk(DAT_00010b7c,iVar7);
        goto LAB_000109fc;
      }
      if (local_50 == 0 && iStack_4c == 0) {
        printk(DAT_00010b80,iVar7);
        iVar2 = -0x16;
        goto LAB_000109fc;
      }
      uVar5 = iStack_4c * 2 + (uint)CARRY4(local_50,local_50);
      uVar1 = (ulonglong)DAT_00010b64 * (ulonglong)(local_50 * 2) +
              ((ulonglong)DAT_00010b60 * (ulonglong)(local_50 * 2) >> 0x20);
      uVar9 = (uint)(uVar1 >> 0x20);
      uVar10 = (uint)((ulonglong)DAT_00010b60 * (ulonglong)uVar5 + (uVar1 & 0xffffffff) >> 0x20);
      uVar1 = (ulonglong)DAT_00010b64 * (ulonglong)uVar5 +
              (ulonglong)CONCAT14(CARRY4(uVar10,uVar9),uVar10 + uVar9) >> 0x12;
      *(ulonglong *)(param_1 + 0x194) = uVar1;
      printk(DAT_00010b84,iVar7,*(undefined4 *)(param_1 + 0x1a0),(int)(uVar1 >> 0x20),uVar1);
      csi2_dphy_update_sensor_mbus(param_1);
      if (*(int *)(*(int *)(param_1 + 0x1ac) + 0x20) == 1) {
        if (iVar8 != 0) {
          pcVar6 = *(code **)(iVar8 + 0x60);
          goto LAB_00010af2;
        }
      }
      else {
        pcVar6 = *(code **)(iVar4 + 0x114);
LAB_00010af2:
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(param_1 + -0x44,param_1);
        }
      }
      *(undefined1 *)(param_1 + 0x1a4) = 1;
    }
    iVar2 = 0;
    goto LAB_000109fc;
  }
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    iVar2 = 0;
    goto LAB_000109fc;
  }
  if (*(int *)(*(int *)(param_1 + 0x1ac) + 0x20) == 1) {
    if (*(int *)(param_1 + -0x34) != 0) {
      pcVar6 = *(code **)(*(int *)(param_1 + -0x34) + 100);
      goto LAB_00010b26;
    }
  }
  else {
    pcVar6 = *(code **)(*(int *)(param_1 + -0x38) + 0x118);
LAB_00010b26:
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(param_1 + -0x44,param_1);
    }
  }
  iVar2 = 0;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  _dev_info(*(undefined4 *)(param_1 + -0x44),DAT_00010b8c,DAT_00010b88,
            *(undefined4 *)(param_1 + 0x1a0));
LAB_000109fc:
  mutex_unlock(param_1 + 0xc4);
  _dev_info(*(undefined4 *)(param_1 + -0x44),DAT_00010b74,DAT_00010b70,param_2,
            *(undefined4 *)(param_1 + 0x1a0));
  if (local_2c != *DAT_00010b68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== rockchip_csi2_dphy_notifier_unbind @ 00010b90 size=48 ===== */

void rockchip_csi2_dphy_notifier_unbind(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x1cc) <= iVar2) {
      return;
    }
    iVar1 = iVar2 * 0x40;
    if (param_2 == *(int *)(param_1 + 0x140 + iVar1)) break;
    iVar2 = iVar2 + 1;
  }
  if (param_1 + iVar1 == -0x140) {
    return;
  }
  *(undefined4 *)(param_1 + iVar1 + 0x140) = 0;
  return;
}



/* ===== csi2_dphy_g_mbus_config @ 00010bc0 size=76 ===== */

undefined4 csi2_dphy_g_mbus_config(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = get_remote_sensor();
  if (iVar1 != 0) {
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x19c); iVar3 = iVar3 + 1) {
      iVar4 = iVar3 * 0x40;
      if (iVar1 == *(int *)(param_1 + 0x110 + iVar4)) {
        if (param_1 + iVar4 == -0x110) {
          return 0xffffffed;
        }
        csi2_dphy_update_sensor_mbus(param_1);
        uVar2 = *(undefined4 *)(param_1 + iVar4 + 0x118);
        *param_3 = *(undefined4 *)(param_1 + iVar4 + 0x114);
        param_3[1] = uVar2;
        return 0;
      }
    }
  }
  return 0xffffffed;
}



/* ===== csi2_dphy_get_set_fmt @ 00010c0c size=132 ===== */

int csi2_dphy_get_set_fmt(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  
  iVar1 = get_remote_sensor();
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x19c); iVar2 = iVar2 + 1) {
      iVar5 = iVar2 * 0x40;
      if (iVar1 == *(int *)(param_1 + 0x110 + iVar5)) {
        if (param_1 + iVar5 == -0x110) {
          return -0x13;
        }
        iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
        if (iVar2 == 0) {
          return DAT_00010c94;
        }
        pcVar3 = *(code **)(iVar2 + 0x10);
        if (pcVar3 == (code *)0x0) {
          return DAT_00010c94;
        }
        if ((*(int *)(DAT_00010c90 + 0x1c) == 0) ||
           (pcVar4 = *(code **)(*(int *)(DAT_00010c90 + 0x1c) + 0x10), pcVar4 == (code *)0x0)) {
          iVar1 = (*pcVar3)(iVar1,0,param_3,pcVar3,param_4);
        }
        else {
          iVar1 = (*pcVar4)(iVar1,0,param_3);
        }
        if (iVar1 == 0) {
          if (param_3[1] != 0) {
            return 0;
          }
          if (*param_3 == 1) {
            param_1 = param_1 + iVar5;
            iVar1 = param_3[3];
            iVar2 = param_3[4];
            iVar5 = param_3[5];
            *(int *)(param_1 + 0x11c) = param_3[2];
            *(int *)(param_1 + 0x120) = iVar1;
            *(int *)(param_1 + 0x124) = iVar2;
            *(int *)(param_1 + 0x128) = iVar5;
            iVar1 = param_3[7];
            iVar2 = param_3[8];
            iVar5 = param_3[9];
            *(int *)(param_1 + 300) = param_3[6];
            *(int *)(param_1 + 0x130) = iVar1;
            *(int *)(param_1 + 0x134) = iVar2;
            *(int *)(param_1 + 0x138) = iVar5;
            iVar1 = param_3[0xb];
            iVar2 = param_3[0xc];
            iVar5 = param_3[0xd];
            *(int *)(param_1 + 0x13c) = param_3[10];
            *(int *)(param_1 + 0x140) = iVar1;
            *(int *)(param_1 + 0x144) = iVar2;
            *(int *)(param_1 + 0x148) = iVar5;
            return 0;
          }
          return 0;
        }
        return iVar1;
      }
    }
  }
  return -0x13;
}



/* ===== rockchip_csi2_dphy_init @ 00010c98 size=8 ===== */

void rockchip_csi2_dphy_init(void)

{
  __platform_driver_register(DAT_00010ca4,DAT_00010ca0);
  return;
}



/* ===== init_module @ 00010ca8 size=8 ===== */

void init_module(void)

{
  __platform_driver_register(DAT_00010cb4,DAT_00010cb0);
  return;
}



/* ===== cleanup_module @ 00010cb8 size=6 ===== */

void cleanup_module(void)

{
  platform_driver_unregister(DAT_00010cc0);
  return;
}



/* ===== <EXTERNAL>::devm_kmalloc @ 00012000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_querymenu @ 00012004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_querymenu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_driver_unregister @ 00012008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_driver_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_find_device_by_node @ 0001200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_find_device_by_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00012010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_disable @ 0001201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00012020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_unprepare @ 00012024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_remote_pad @ 00012028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_remote_pad(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_subdev_init @ 0001202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_subdev_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_create_pad_link @ 00012030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_create_pad_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_prepare @ 00012034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00012038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

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



/* ===== <EXTERNAL>::v4l2_ctrl_find @ 00012040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 00012044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_enable @ 00012048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_match_device @ 0001204c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_match_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 00012050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 00012054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_pads_init @ 00012058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_pads_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 0001205c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 00012060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_device_is_available @ 00012064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_device_is_available(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00012068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__platform_driver_register @ 0001206c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __platform_driver_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_phy_optional_get @ 00012070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_phy_optional_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 00012074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 00012078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_init @ 0001207c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_cleanup @ 00012080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_subdev_notifier_register @ 00012084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_subdev_notifier_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_g_ctrl @ 00012088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_g_ctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_alias_get_id @ 0001208c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_alias_get_id(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_parse_fwnode_endpoints_by_port @ 00012090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_parse_fwnode_endpoints_by_port(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_disable @ 00012094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_prepare @ 00012098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_parse_phandle @ 000120a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_parse_phandle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 000120a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_enable @ 000120ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 000120b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_idle @ 000120b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_idle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_register_subdev @ 000120b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_register_subdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_unprepare @ 000120bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


