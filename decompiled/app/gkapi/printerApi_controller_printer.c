// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/printer   functions: 62
/* printerApi/controller/printer.PrinterController.StartPrint @ 0065f934 (size 5548) */

/* WARNING: Removing unreachable block (ram,0x0065fc38) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_StartPrint(void)

{
  uint ***pppuVar1;
  uint ***pppuVar2;
  int ***pppiVar3;
  uint ***pppuVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int ***extraout_r3;
  uint ***extraout_r3_00;
  int iVar8;
  uint *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int ***in_stack_0000000c;
  int **in_stack_00000010;
  uint ***in_stack_00000014;
  uint ***in_stack_00000018;
  int in_stack_0000001c;
  uint ***in_stack_00000020;
  uint ***in_stack_00000024;
  undefined ****ppppuStack_258;
  uint ***pppuStack_254;
  uint ***pppuStack_250;
  uint ***pppuStack_24c;
  uint ***pppuStack_248;
  uint ***pppuStack_244;
  int ***pppiStack_240;
  int ***pppiStack_23c;
  undefined4 uStack_238;
  int **ppiStack_224;
  uint ***pppuStack_220;
  int ***pppiStack_21c;
  byte bStack_215;
  int ***pppiStack_214;
  int **ppiStack_210;
  uint ***pppuStack_20c;
  uint ***pppuStack_208;
  int ***pppiStack_204;
  int ***pppiStack_200;
  uint ***pppuStack_1fc;
  uint ***pppuStack_1f8;
  int ***pppiStack_1f4;
  int ***pppiStack_1f0;
  int ***pppiStack_1ec;
  int ***pppiStack_1e8;
  int ***pppiStack_1e4;
  int ***pppiStack_1e0;
  int ***pppiStack_1dc;
  int ***pppiStack_1d8;
  int **ppiStack_1d4;
  int **ppiStack_1d0;
  int **ppiStack_1cc;
  int **ppiStack_1c8;
  int **ppiStack_1c4;
  int **ppiStack_1c0;
  int **ppiStack_1bc;
  uint ***pppuStack_1b8;
  uint ***pppuStack_1b4;
  int **appiStack_1b0 [12];
  int **appiStack_180 [12];
  int **appiStack_150 [12];
  undefined1 auStack_120 [20];
  int **ppiStack_10c;
  undefined *puStack_108;
  uint ***pppuStack_104;
  int ***pppiStack_100;
  uint ***pppuStack_fc;
  uint ***pppuStack_f8;
  uint ***pppuStack_f4;
  undefined4 uStack_f0;
  int ***pppiStack_ec;
  uint ***pppuStack_e8;
  int ***pppiStack_e4;
  uint ***pppuStack_d8;
  uint ***pppuStack_d4;
  uint uStack_d0;
  int ***pppiStack_cc;
  uint ***pppuStack_c8;
  int ***pppiStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint ***pppuStack_b8;
  uint ***pppuStack_b4;
  uint ***pppuStack_b0;
  uint ***pppuStack_ac;
  uint ***pppuStack_a8;
  uint ***pppuStack_a4;
  uint ***pppuStack_a0;
  int **ppiStack_9c;
  int **ppiStack_98;
  int **ppiStack_94;
  int **ppiStack_90;
  int **ppiStack_8c;
  int **ppiStack_88;
  int **ppiStack_84;
  uint ***pppuStack_80;
  uint ***pppuStack_7c;
  uint ***pppuStack_78;
  uint ***pppuStack_74;
  uint ***pppuStack_70;
  undefined *puStack_54;
  uint **ppuStack_4c;
  int iStack_48;
  uint ***pppuStack_44;
  int **ppiStack_3c;
  uint ***pppuStack_38;
  uint ***pppuStack_34;
  uint **ppuStack_30;
  uint ***pppuStack_2c;
  undefined *puStack_28;
  uint ***pppuStack_24;
  int **ppiStack_20;
  uint ***pppuStack_1c;
  uint **ppuStack_18;
  uint ***pppuStack_14;
  uint **ppuStack_10;
  uint ***pppuStack_c;
  undefined *puStack_8;
  uint ***pppuStack_4;
  
  while (&pppiStack_1dc <= *(undefined *****)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x660fe8;
    FUN_00096bb8();
  }
  ppppuStack_258 = (undefined ****)in_stack_00000014;
  pppuStack_254 = in_stack_00000018;
  printerApi_controller_printer_parseScriptFilename();
  if (pppuStack_248 != (uint ***)0x0) {
    ppppuStack_258 = (undefined ****)pppuStack_244;
    (**(code **)((int)pppuStack_248 + 0xc))();
    pppuStack_80 = pppuStack_254;
    pppuStack_1b8 = pppuStack_250;
    FUN_00098a28(0,&ppuStack_10);
    ppppuStack_258 = (undefined ****)in_stack_00000014;
    pppuStack_254 = in_stack_00000018;
    FUN_0008a578();
    ppuStack_10 = (uint **)PTR_SUB_006601f4;
    pppuStack_c = pppuStack_250;
    ppppuStack_258 = (undefined ****)pppuStack_80;
    pppuStack_254 = pppuStack_1b8;
    FUN_0008a578();
    puStack_8 = PTR_SUB_006601f4;
    pppuStack_4 = pppuStack_250;
    ppppuStack_258 = (undefined ****)PTR_DAT_006601f8;
    pppuStack_254 = (uint ***)0x2c;
    pppuStack_250 = &ppuStack_10;
    pppuStack_24c = (uint ***)0x2;
    pppuStack_248 = (uint ***)0x2;
    printerApi_common_logger_Errorf();
    ppuStack_18 = (uint **)0x0;
    pppuStack_14 = (uint ***)0x0;
    ppppuStack_258 = *(undefined *****)PTR_DAT_006601fc;
    pppuStack_254 = *(uint ****)PTR_DAT_00660200;
    FUN_0008a4bc();
    ppuStack_18 = (uint **)PTR_DAT_00660204;
    pppuStack_14 = pppuStack_250;
    ppppuStack_258 = (undefined ****)PTR_DAT_00660208;
    pppuStack_254 = (uint ***)0x2;
    pppuStack_250 = &ppuStack_18;
    pppuStack_24c = (uint ***)0x1;
    pppuStack_248 = (uint ***)0x1;
    FUN_001331ac();
    pppiStack_1d8 = pppiStack_240;
    pppuStack_a0 = pppuStack_244;
    ppiStack_84 = *(int ***)PTR_DAT_0066020c;
    ppiStack_1bc = *(int ***)PTR_DAT_00660210;
    ppppuStack_258 = (undefined ****)PTR_DAT_00660214;
    FUN_0001eed8();
    pppuStack_254[1] = (uint **)pppiStack_1d8;
    pppuVar4 = pppuStack_254;
    if (*(int *)PTR_DAT_00660218 != 0) {
      pppuVar4 = (uint ***)FUN_00098688();
      *unaff_r8 = (uint)pppuStack_a0;
      unaff_r8[1] = (uint)ppiStack_84;
    }
    *pppuVar4 = (uint **)pppuStack_a0;
    pppuVar4[3] = (uint **)ppiStack_1bc;
    pppuVar4[2] = (uint **)ppiStack_84;
    in_stack_00000020 = (uint ***)PTR_DAT_0066021c;
    in_stack_00000024 = pppuVar4;
                    /* WARNING: Could not recover jumptable at 0x0065faf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  pppuStack_f4 = pppuStack_250;
  pppiStack_204 = (int ***)pppuStack_24c;
  FUN_00098a28(0,&ppuStack_10);
  ppppuStack_258 = (undefined ****)in_stack_00000014;
  pppuStack_254 = in_stack_00000018;
  FUN_0008a578();
  ppuStack_10 = (uint **)PTR_SUB_006601f4;
  pppuStack_c = pppuStack_250;
  ppppuStack_258 = (undefined ****)pppuStack_f4;
  pppuStack_254 = (uint ***)pppiStack_204;
  FUN_0008a578();
  puStack_8 = PTR_SUB_006601f4;
  pppuStack_4 = pppuStack_250;
  ppppuStack_258 = (undefined ****)PTR_DAT_00660220;
  pppuStack_254 = (uint ***)&DAT_0000002d;
  pppuStack_250 = &ppuStack_10;
  pppuStack_24c = (uint ***)0x2;
  pppuStack_248 = (uint ***)0x2;
  printerApi_common_logger_Infof();
  if ((int)pppiStack_204 < 1) {
    uVar5 = 0;
  }
  else {
    ppppuStack_258 = (undefined ****)pppuStack_f4;
    pppuStack_254 = (uint ***)PTR_DAT_00660224;
    pppuStack_250 = (uint ***)0x1;
    FUN_000150d4();
    uVar5 = (uint)pppuStack_24c & 0xff;
  }
  if (uVar5 == 0) {
    iVar8 = *(int *)(*(int *)(*(int *)PTR_DAT_00660228 + 8) + 0x16c);
    puVar7 = *(undefined **)(*(int *)(*(int *)PTR_DAT_00660228 + 8) + 0x168);
    if (iVar8 == 0) {
      iVar8 = 0x18;
      puVar7 = PTR_DAT_0066022c;
    }
    FUN_00098a28(0,&ppuStack_4c,pppiStack_204,puVar7);
    pppuStack_44 = pppuStack_f4;
    ppppuStack_258 = (undefined ****)&ppuStack_4c;
    pppuStack_254 = (uint ***)0x2;
    pppuStack_250 = (uint ***)0x2;
    iStack_48 = iVar8;
    FUN_00159184();
    pppuStack_fc = pppuStack_24c;
    pppuStack_20c = pppuStack_248;
  }
  else {
    ppppuStack_258 = (undefined ****)pppuStack_f4;
    pppuStack_254 = (uint ***)pppiStack_204;
    internal_filepathlite_Clean();
    pppuStack_fc = pppuStack_250;
    pppuStack_20c = pppuStack_24c;
  }
  if ((int)pppiStack_204 < 1) {
    bStack_215 = 0;
  }
  else {
    ppppuStack_258 = (undefined ****)pppuStack_f4;
    pppuStack_254 = (uint ***)PTR_DAT_00660224;
    pppuStack_250 = (uint ***)0x1;
    FUN_000150d4();
    bStack_215 = (byte)pppuStack_24c;
  }
  pppiVar3 = pppiStack_204;
  FUN_00098a20(0,&ppuStack_30);
  ppppuStack_258 = (undefined ****)pppuStack_f4;
  pppuStack_254 = (uint ***)pppiVar3;
  FUN_0008a578();
  ppuStack_30 = (uint **)PTR_SUB_006601f4;
  pppuStack_2c = pppuStack_250;
  ppppuStack_258 = (undefined ****)pppuStack_fc;
  pppuStack_254 = pppuStack_20c;
  FUN_0008a578();
  puStack_28 = PTR_SUB_006601f4;
  pppuStack_24 = pppuStack_250;
  ppiStack_20 = (int **)PTR_DAT_00660230;
  pppuStack_1c = (uint ***)(PTR_DAT_00660234 + (uint)bStack_215 * 8);
  ppppuStack_258 = (undefined ****)PTR_DAT_00660238;
  pppuStack_254 = (uint ***)0x34;
  pppuStack_250 = &ppuStack_30;
  pppuStack_24c = (uint ***)0x3;
  pppuStack_248 = (uint ***)0x3;
  printerApi_common_logger_Debugf();
  ppppuStack_258 = (undefined ****)pppuStack_fc;
  pppuStack_254 = pppuStack_20c;
  printerApi_common_threemf_Detect();
  pppuStack_208 = pppuStack_20c;
  pppuStack_f8 = pppuStack_fc;
  if (((uint)pppuStack_250 & 0xff) != 0) {
    uVar6 = FUN_0010cf30();
    FUN_00098e14(uVar6,&ppppuStack_258,auStack_120);
    ppiStack_3c = (int **)
                  PTR_printerApi_controller_printer_PrinterController_StartPrint_func1_0066023c;
    pppuStack_34 = pppuStack_20c;
    pppuStack_38 = pppuStack_fc;
    ppppuStack_258 = *(undefined *****)PTR_DAT_00660240;
    pppuStack_254 = (uint ***)&ppiStack_3c;
    printerApi_service_localtask___UILocalTaskContext__WithLock();
    if (pppuStack_250 != (uint ***)0x0) {
      in_stack_00000020 = pppuStack_250;
      in_stack_00000024 = pppuStack_24c;
                    /* WARNING: Could not recover jumptable at 0x00660fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_00098ddc(0,PTR_DAT_00660244,&pppuStack_7c);
    pppuStack_74 = (uint ***)0x0;
    pppuStack_70 = (uint ***)0x0;
    FUN_00098ddc(0,&pppuStack_7c,&pppuStack_e8);
    uStack_c0 = *(undefined4 *)(*(int *)PTR_DAT_00660240 + 0x20);
    pppuStack_d8 = pppuStack_fc;
    pppuStack_d4 = pppuStack_20c;
    uStack_d0 = 0;
    pppuStack_c8 = (uint ***)0x0;
    uStack_bc = 0;
    pppiStack_cc = extraout_r3;
    pppiStack_c4 = extraout_r3;
    FUN_00098ddc(uStack_c0,&pppuStack_e8,appiStack_150);
    ppppuStack_258 = (undefined ****)PTR_DAT_00660248;
    pppuStack_254 = (uint ***)appiStack_150;
    FUN_0001cd7c();
    ppppuStack_258 = *(undefined *****)PTR_DAT_0066024c;
    pppuStack_254 = (uint ***)PTR_DAT_00660250;
    printerApi_service_event___Dispatcher__Dispatch();
    ppppuStack_258 = (undefined ****)PTR_s_unzippingcancelledtask_namelocal_0077568d_0x6c9_00660254;
    pppuStack_254 = (uint ***)&DAT_00000009;
    printerApi_service_k3c_PublishLocalPrintStatus();
    iVar8 = *(int *)(*(int *)(*(int *)PTR_DAT_00660228 + 8) + 0x16c);
    puStack_108 = *(undefined **)(*(int *)(*(int *)PTR_DAT_00660228 + 8) + 0x168);
    if (iVar8 == 0) {
      iVar8 = 0x18;
      puStack_108 = PTR_DAT_0066022c;
    }
    FUN_00098ddc(puStack_108,PTR_DAT_00660258,&pppuStack_7c,iVar8);
    pppuStack_7c = pppuStack_fc;
    pppuStack_78 = pppuStack_20c;
    pppuStack_74 = (uint ***)puStack_108;
    puStack_54 = PTR_DAT_0066025c;
    ppppuStack_258 = (undefined ****)&pppiStack_214;
    FUN_00098ddc(pppuStack_fc,&pppuStack_7c,&pppuStack_254);
    printerApi_service_file_processor___Processor__Process();
    if (pppuStack_220 != (uint ***)0x0) {
      pppiStack_ec = pppiStack_21c;
      pppuStack_1fc = pppuStack_220;
      ppppuStack_258 = *(undefined *****)PTR_DAT_00660240;
      printerApi_service_localtask___UILocalTaskContext__Reset();
      if (pppuStack_1fc == (uint ***)0x0) {
        ppuStack_18 = (uint **)0x0;
      }
      else {
        ppuStack_18 = pppuStack_1fc[1];
      }
      pppuStack_14 = (uint ***)pppiStack_ec;
      ppppuStack_258 = (undefined ****)PTR_DAT_00660260;
      pppuStack_254 = (uint ***)0x15;
      pppuStack_250 = &ppuStack_18;
      pppuStack_24c = (uint ***)0x1;
      pppuStack_248 = (uint ***)0x1;
      printerApi_common_logger_Errorf();
      pppuStack_250 = *(uint ****)PTR_DAT_00660264;
      pppuStack_24c = *(uint ****)PTR_DAT_00660268;
      ppppuStack_258 = (undefined ****)pppuStack_1fc;
      pppuStack_254 = (uint ***)pppiStack_ec;
      FUN_000a2c04();
      if ((char)pppuStack_248 != '\0') {
        ppuStack_18 = (uint **)0x0;
        pppuStack_14 = (uint ***)0x0;
        ppppuStack_258 = *(undefined *****)PTR_DAT_0066026c;
        pppuStack_254 = *(uint ****)PTR_DAT_00660270;
        FUN_0008a4bc();
        ppuStack_18 = (uint **)PTR_DAT_00660204;
        pppuStack_14 = pppuStack_250;
        ppppuStack_258 = (undefined ****)PTR_DAT_00660208;
        pppuStack_254 = (uint ***)0x2;
        pppuStack_250 = &ppuStack_18;
        pppuStack_24c = (uint ***)0x1;
        pppuStack_248 = (uint ***)0x1;
        FUN_001331ac();
        pppiStack_1dc = pppiStack_240;
        pppuStack_a4 = pppuStack_244;
        ppiStack_88 = *(int ***)PTR_DAT_00660274;
        ppiStack_1c0 = *(int ***)PTR_DAT_00660278;
        ppppuStack_258 = (undefined ****)PTR_DAT_00660214;
        FUN_0001eed8();
        pppuStack_254[1] = (uint **)pppiStack_1dc;
        pppuVar4 = pppuStack_254;
        if (*(int *)PTR_DAT_00660218 != 0) {
          pppuVar4 = (uint ***)FUN_00098688();
          *unaff_r8 = (uint)pppuStack_a4;
          unaff_r8[1] = (uint)ppiStack_88;
        }
        *pppuVar4 = (uint **)pppuStack_a4;
        pppuVar4[3] = (uint **)ppiStack_1c0;
        pppuVar4[2] = (uint **)ppiStack_88;
        in_stack_00000020 = (uint ***)PTR_DAT_0066021c;
        in_stack_00000024 = pppuVar4;
                    /* WARNING: Could not recover jumptable at 0x00660078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      pppuStack_250 = *(uint ****)PTR_DAT_0066027c;
      pppuStack_24c = *(uint ****)PTR_DAT_00660280;
      ppppuStack_258 = (undefined ****)pppuStack_1fc;
      pppuStack_254 = (uint ***)pppiStack_ec;
      FUN_000a2c04();
      if ((char)pppuStack_248 == '\0') {
        pppuStack_250 = *(uint ****)PTR_DAT_00660284;
        pppuStack_24c = *(uint ****)PTR_DAT_00660288;
        ppppuStack_258 = (undefined ****)pppuStack_1fc;
        pppuStack_254 = (uint ***)pppiStack_ec;
        FUN_000a2c04();
        if ((char)pppuStack_248 == '\0') {
          pppuStack_250 = *(uint ****)PTR_DAT_0066028c;
          pppuStack_24c = *(uint ****)PTR_DAT_00660290;
          ppppuStack_258 = (undefined ****)pppuStack_1fc;
          pppuStack_254 = (uint ***)pppiStack_ec;
          FUN_000a2c04();
          uVar5 = (uint)pppuStack_248 & 0xff;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 1;
      }
      if (uVar5 != 0) {
        ppuStack_18 = (uint **)0x0;
        pppuStack_14 = (uint ***)0x0;
        ppppuStack_258 = *(undefined *****)PTR_DAT_006601fc;
        pppuStack_254 = *(uint ****)PTR_DAT_00660200;
        FUN_0008a4bc();
        ppuStack_18 = (uint **)PTR_DAT_00660204;
        pppuStack_14 = pppuStack_250;
        ppppuStack_258 = (undefined ****)PTR_DAT_00660208;
        pppuStack_254 = (uint ***)0x2;
        pppuStack_250 = &ppuStack_18;
        pppuStack_24c = (uint ***)0x1;
        pppuStack_248 = (uint ***)0x1;
        FUN_001331ac();
        pppiStack_1e0 = pppiStack_240;
        pppuStack_a8 = pppuStack_244;
        ppiStack_8c = *(int ***)PTR_DAT_0066020c;
        ppiStack_1c4 = *(int ***)PTR_DAT_00660210;
        ppppuStack_258 = (undefined ****)PTR_DAT_00660214;
        FUN_0001eed8();
        pppuStack_254[1] = (uint **)pppiStack_1e0;
        pppuVar4 = pppuStack_254;
        if (*(int *)PTR_DAT_00660218 != 0) {
          pppuVar4 = (uint ***)FUN_00098688();
          *unaff_r8 = (uint)pppuStack_a8;
          unaff_r8[1] = (uint)ppiStack_8c;
        }
        *pppuVar4 = (uint **)pppuStack_a8;
        pppuVar4[3] = (uint **)ppiStack_1c4;
        pppuVar4[2] = (uint **)ppiStack_8c;
        in_stack_00000020 = (uint ***)PTR_DAT_00660b3c;
        in_stack_00000024 = pppuVar4;
                    /* WARNING: Could not recover jumptable at 0x006602c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      ppuStack_18 = (uint **)0x0;
      pppuStack_14 = (uint ***)0x0;
      ppppuStack_258 = *(undefined *****)PTR_DAT_00660b40;
      pppuStack_254 = *(uint ****)PTR_DAT_00660b44;
      FUN_0008a4bc();
      ppuStack_18 = (uint **)PTR_DAT_00660b48;
      pppuStack_14 = pppuStack_250;
      ppppuStack_258 = (undefined ****)PTR_DAT_00660b4c;
      pppuStack_254 = (uint ***)0x2;
      pppuStack_250 = &ppuStack_18;
      pppuStack_24c = (uint ***)0x1;
      pppuStack_248 = (uint ***)0x1;
      FUN_001331ac();
      pppiStack_1e4 = pppiStack_240;
      pppuStack_ac = pppuStack_244;
      ppiStack_90 = *(int ***)PTR_DAT_00660b50;
      ppiStack_1c8 = *(int ***)PTR_DAT_00660b54;
      ppppuStack_258 = (undefined ****)PTR_DAT_00660b58;
      FUN_0001eed8();
      pppuStack_254[1] = (uint **)pppiStack_1e4;
      pppuVar4 = pppuStack_254;
      if (*(int *)PTR_DAT_00660b5c != 0) {
        pppuVar4 = (uint ***)FUN_00098688();
        *unaff_r8 = (uint)pppuStack_ac;
        unaff_r8[1] = (uint)ppiStack_90;
      }
      *pppuVar4 = (uint **)pppuStack_ac;
      pppuVar4[3] = (uint **)ppiStack_1c8;
      pppuVar4[2] = (uint **)ppiStack_90;
      in_stack_00000020 = (uint ***)PTR_DAT_00660b3c;
      in_stack_00000024 = pppuVar4;
                    /* WARNING: Could not recover jumptable at 0x006603b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    ppiStack_10c = ppiStack_224;
    ppppuStack_258 = (undefined ****)PTR_DAT_00660b60;
    FUN_0001eed8();
    *pppuStack_254 =
         (uint **)PTR_printerApi_controller_printer_PrinterController_StartPrint_func3_00660b64;
    pppiStack_23c = (int ***)pppuStack_254;
    if (*(int *)PTR_DAT_00660b5c != 0) {
      pppiStack_23c = (int ***)FUN_00098678();
      *unaff_r8 = (uint)ppiStack_10c;
    }
    pppiStack_23c[1] = ppiStack_10c;
    ppppuStack_258 = *(undefined *****)PTR_DAT_00660b68;
    pppuStack_24c = (uint ***)ppiStack_10c[2];
    pppuStack_248 = (uint ***)ppiStack_10c[3];
    pppuStack_244 = (uint ***)ppiStack_10c[4];
    pppiStack_240 = (int ***)ppiStack_10c[5];
    pppuStack_254 = pppuStack_fc;
    pppuStack_250 = pppuStack_20c;
    printerApi_service_localtask___UILocalTaskContext__Set();
    pppuStack_f8 = (uint ***)ppiStack_10c[2];
    pppuStack_208 = (uint ***)ppiStack_10c[3];
    FUN_00098e14(ppiStack_10c,auStack_120,&ppppuStack_258);
    FUN_0010327c();
    pppuStack_1f8 = pppuStack_244;
    pppiStack_1f4 = pppiStack_240;
    FUN_00098a20(0,&ppuStack_30);
    ppppuStack_258 = (undefined ****)pppuStack_fc;
    pppuStack_254 = pppuStack_20c;
    FUN_0008a578();
    ppuStack_30 = (uint **)PTR_SUB_00660b6c;
    pppuStack_2c = pppuStack_250;
    ppppuStack_258 = (undefined ****)ppiStack_10c[2];
    pppuStack_254 = (uint ***)ppiStack_10c[3];
    FUN_0008a578();
    puStack_28 = PTR_SUB_00660b6c;
    pppuStack_24 = pppuStack_250;
    ppppuStack_258 = (undefined ****)pppuStack_1f8;
    pppuStack_254 = (uint ***)pppiStack_1f4;
    FUN_0008a4bc();
    ppiStack_20 = (int **)PTR_DAT_00660b70;
    pppuStack_1c = pppuStack_250;
    ppppuStack_258 = (undefined ****)PTR_DAT_00660b74;
    pppuStack_254 = (uint ***)0x41;
    pppuStack_250 = &ppuStack_30;
    pppuStack_24c = (uint ***)0x3;
    pppuStack_248 = (uint ***)0x3;
    printerApi_common_logger_Infof();
    if (0xd < (int)pppiStack_1f4 ||
        pppiStack_1f4 == (int ***)&DAT_0000000d && _UNK_00660b78 < pppuStack_1f8) {
      FUN_00098a28(0,&ppuStack_10,pppiStack_1f4);
      FUN_0008a4bc();
      ppuStack_10 = (uint **)PTR_DAT_00660b70;
      pppuStack_c = pppuStack_250;
      ppppuStack_258 = (undefined ****)pppuStack_fc;
      pppuStack_254 = pppuStack_20c;
      FUN_0008a578();
      puStack_8 = PTR_SUB_00660b6c;
      pppuStack_4 = pppuStack_250;
      ppppuStack_258 = (undefined ****)PTR_DAT_00660b7c;
      pppuStack_254 = (uint ***)0x2f;
      pppuStack_250 = &ppuStack_10;
      pppuStack_24c = (uint ***)0x2;
      pppuStack_248 = (uint ***)0x2;
      printerApi_common_logger_Warnf();
    }
    ppppuStack_258 = *(undefined *****)PTR_DAT_00660b68;
    pppuStack_254 = (uint ***)0x64;
    printerApi_service_localtask___UILocalTaskContext__UpdateProgress();
    ppppuStack_258 = *(undefined *****)PTR_DAT_00660b68;
    pppuStack_254 = (uint ***)PTR_PTR_00660b80;
    printerApi_service_localtask___UILocalTaskContext__WithLock();
    ppppuStack_258 = (undefined ****)PTR_s_unzipedstandbycn_codeis_rfidOnPa_00774847_0x1a9_00660b84;
    pppuStack_254 = (uint ***)0x7;
    printerApi_service_k3c_PublishLocalPrintStatus();
  }
  ppppuStack_258 = (undefined ****)pppuStack_f8;
  pppuStack_254 = pppuStack_208;
  FUN_00148fb4();
  if (pppuStack_24c == (uint ***)0x0) {
    ppuStack_18 = (uint **)0x0;
    pppuStack_14 = (uint ***)0x0;
    ppppuStack_258 = (undefined ****)in_stack_00000014;
    pppuStack_254 = in_stack_00000018;
    FUN_0008a578();
    ppuStack_18 = (uint **)PTR_SUB_00660b6c;
    pppuStack_14 = pppuStack_250;
    ppppuStack_258 = (undefined ****)PTR_DAT_00660b88;
    pppuStack_254 = (uint ***)0x35;
    pppuStack_250 = &ppuStack_18;
    pppuStack_24c = (uint ***)0x1;
    pppuStack_248 = (uint ***)0x1;
    printerApi_common_logger_Errorf();
    ppuStack_18 = (uint **)0x0;
    pppuStack_14 = (uint ***)0x0;
    ppppuStack_258 = *(undefined *****)PTR_DAT_00660b8c;
    pppuStack_254 = *(uint ****)PTR_DAT_00660b90;
    FUN_0008a4bc();
    ppuStack_18 = (uint **)PTR_DAT_00660b48;
    pppuStack_14 = pppuStack_250;
    ppppuStack_258 = (undefined ****)PTR_DAT_00660b4c;
    pppuStack_254 = (uint ***)0x2;
    pppuStack_250 = &ppuStack_18;
    pppuStack_24c = (uint ***)0x1;
    pppuStack_248 = (uint ***)0x1;
    FUN_001331ac();
    pppiStack_1e8 = pppiStack_240;
    pppuStack_b0 = pppuStack_244;
    ppiStack_94 = *(int ***)PTR_DAT_00660b94;
    ppiStack_1cc = *(int ***)PTR_DAT_00660b98;
    ppppuStack_258 = (undefined ****)PTR_DAT_00660b58;
    FUN_0001eed8();
    pppuStack_254[1] = (uint **)pppiStack_1e8;
    pppuVar4 = pppuStack_254;
    if (*(int *)PTR_DAT_00660b5c != 0) {
      pppuVar4 = (uint ***)FUN_00098688();
      *unaff_r8 = (uint)pppuStack_b0;
      unaff_r8[1] = (uint)ppiStack_94;
    }
    *pppuVar4 = (uint **)pppuStack_b0;
    pppuVar4[3] = (uint **)ppiStack_1cc;
    pppuVar4[2] = (uint **)ppiStack_94;
    in_stack_00000020 = (uint ***)PTR_DAT_00660b3c;
    in_stack_00000024 = pppuVar4;
                    /* WARNING: Could not recover jumptable at 0x0066078c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppppuStack_258 = (undefined ****)pppuStack_f8;
  pppuStack_254 = pppuStack_208;
  FUN_00098e14(pppuStack_f8,PTR_DAT_00660b9c,&pppuStack_250);
  printerApi_common_file_WaitFileReadable();
  if (pppiStack_23c != (int ***)0x0) {
    uStack_f0 = uStack_238;
    pppiStack_200 = pppiStack_23c;
    ppppuStack_258 = (undefined ****)pppuStack_fc;
    pppuStack_254 = pppuStack_20c;
    printerApi_common_threemf_Detect();
    if ((char)pppuStack_250 == '\0') {
      uVar5 = 0;
    }
    else if (pppuStack_208 == pppuStack_20c) {
      ppppuStack_258 = (undefined ****)pppuStack_f8;
      pppuStack_254 = pppuStack_fc;
      pppuStack_250 = pppuStack_20c;
      FUN_000150d4();
      uVar5 = (uint)pppuStack_24c & 0xff ^ 1;
    }
    else {
      uVar5 = 1;
    }
    if (uVar5 != 0) {
      FUN_00098a20(0,&ppuStack_30,pppuStack_208,pppuStack_20c);
      ppppuStack_258 = (undefined ****)pppuStack_fc;
      FUN_0008a578();
      ppuStack_30 = (uint **)PTR_SUB_00660b6c;
      pppuStack_2c = pppuStack_250;
      ppppuStack_258 = (undefined ****)pppuStack_f8;
      pppuStack_254 = pppuStack_208;
      FUN_0008a578();
      puStack_28 = PTR_SUB_00660b6c;
      pppuStack_24 = pppuStack_250;
      if (pppiStack_200 == (int ***)0x0) {
        ppiStack_20 = (int **)0x0;
      }
      else {
        ppiStack_20 = pppiStack_200[1];
      }
      pppuStack_1c = (uint ***)uStack_f0;
      ppppuStack_258 = (undefined ****)PTR_DAT_00660ba0;
      pppuStack_254 = (uint ***)0x3b;
      pppuStack_250 = &ppuStack_30;
      pppuStack_24c = (uint ***)0x3;
      pppuStack_248 = (uint ***)0x3;
      printerApi_common_logger_Errorf();
      ppppuStack_258 = *(undefined *****)PTR_DAT_00660b68;
      printerApi_service_localtask___UILocalTaskContext__Reset();
      ppuStack_18 = (uint **)0x0;
      pppuStack_14 = (uint ***)0x0;
      ppppuStack_258 = *(undefined *****)PTR_DAT_00660b40;
      pppuStack_254 = *(uint ****)PTR_DAT_00660b44;
      FUN_0008a4bc();
      ppuStack_18 = (uint **)PTR_DAT_00660b48;
      pppuStack_14 = pppuStack_250;
      ppppuStack_258 = (undefined ****)PTR_DAT_00660b4c;
      pppuStack_254 = (uint ***)0x2;
      pppuStack_250 = &ppuStack_18;
      pppuStack_24c = (uint ***)0x1;
      pppuStack_248 = (uint ***)0x1;
      FUN_001331ac();
      pppiStack_1ec = pppiStack_240;
      pppuStack_b4 = pppuStack_244;
      ppiStack_98 = *(int ***)PTR_DAT_00660b50;
      ppiStack_1d0 = *(int ***)PTR_DAT_00660b54;
      ppppuStack_258 = (undefined ****)PTR_DAT_00660b58;
      FUN_0001eed8();
      pppuStack_254[1] = (uint **)pppiStack_1ec;
      pppuVar4 = pppuStack_254;
      if (*(int *)PTR_DAT_00660b5c != 0) {
        pppuVar4 = (uint ***)FUN_00098688();
        *unaff_r8 = (uint)pppuStack_b4;
        unaff_r8[1] = (uint)ppiStack_98;
      }
      *pppuVar4 = (uint **)pppuStack_b4;
      pppuVar4[3] = (uint **)ppiStack_1d0;
      pppuVar4[2] = (uint **)ppiStack_98;
      in_stack_00000020 = (uint ***)PTR_DAT_00660b3c;
      in_stack_00000024 = pppuVar4;
                    /* WARNING: Could not recover jumptable at 0x006609dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_00098a20(0,&ppuStack_30,pppuStack_208,pppuStack_20c);
    ppppuStack_258 = (undefined ****)pppuStack_f8;
    FUN_0008a578();
    ppuStack_30 = (uint **)PTR_SUB_00660b6c;
    pppuStack_2c = pppuStack_250;
    ppppuStack_258 = (undefined ****)in_stack_00000014;
    pppuStack_254 = in_stack_00000018;
    FUN_0008a578();
    puStack_28 = PTR_SUB_00660b6c;
    pppuStack_24 = pppuStack_250;
    if (pppiStack_200 == (int ***)0x0) {
      ppiStack_20 = (int **)0x0;
    }
    else {
      ppiStack_20 = pppiStack_200[1];
    }
    pppuStack_1c = (uint ***)uStack_f0;
    ppppuStack_258 = (undefined ****)PTR_DAT_00660ba4;
    pppuStack_254 = (uint ***)0x43;
    pppuStack_250 = &ppuStack_30;
    pppuStack_24c = (uint ***)0x3;
    pppuStack_248 = (uint ***)0x3;
    printerApi_common_logger_Errorf();
    ppuStack_18 = (uint **)0x0;
    pppuStack_14 = (uint ***)0x0;
    ppppuStack_258 = *(undefined *****)PTR_DAT_00660b8c;
    pppuStack_254 = *(uint ****)PTR_DAT_00660b90;
    FUN_0008a4bc();
    ppuStack_18 = (uint **)PTR_DAT_00660b48;
    pppuStack_14 = pppuStack_250;
    ppppuStack_258 = (undefined ****)PTR_DAT_00660b4c;
    pppuStack_254 = (uint ***)0x2;
    pppuStack_250 = &ppuStack_18;
    pppuStack_24c = (uint ***)0x1;
    pppuStack_248 = (uint ***)0x1;
    FUN_001331ac();
    pppiStack_1f0 = pppiStack_240;
    pppuStack_b8 = pppuStack_244;
    ppiStack_9c = *(int ***)PTR_DAT_00660b94;
    ppiStack_1d4 = *(int ***)PTR_DAT_00660b98;
    ppppuStack_258 = (undefined ****)PTR_DAT_00660b58;
    FUN_0001eed8();
    pppuStack_254[1] = (uint **)pppiStack_1f0;
    pppuVar4 = pppuStack_254;
    if (*(int *)PTR_DAT_00660b5c != 0) {
      pppuVar4 = (uint ***)FUN_00098688();
      *unaff_r8 = (uint)pppuStack_b8;
      unaff_r8[1] = (uint)ppiStack_9c;
    }
    *pppuVar4 = (uint **)pppuStack_b8;
    pppuVar4[3] = (uint **)ppiStack_1d4;
    pppuVar4[2] = (uint **)ppiStack_9c;
    in_stack_00000020 = (uint ***)PTR_DAT_00660ff0;
    in_stack_00000024 = pppuVar4;
                    /* WARNING: Could not recover jumptable at 0x00660bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppppuStack_258 = (undefined ****)pppuStack_fc;
  pppuStack_254 = pppuStack_20c;
  printerApi_common_threemf_Detect();
  if ((char)pppuStack_250 != '\0') {
    if (pppuStack_208 == pppuStack_20c) {
      ppppuStack_258 = (undefined ****)pppuStack_f8;
      pppuStack_254 = pppuStack_fc;
      pppuStack_250 = pppuStack_20c;
      FUN_000150d4();
      uVar5 = (uint)pppuStack_24c & 0xff ^ 1;
    }
    else {
      uVar5 = 1;
    }
    if (uVar5 != 0) {
      ppppuStack_258 = *(undefined *****)PTR_DAT_00660ff4;
      printerApi_service_localtask___UILocalTaskContext__GetInfo();
      pppiVar3 = pppiStack_240;
      pppuVar2 = pppuStack_244;
      pppuVar1 = pppuStack_248;
      pppuVar4 = pppuStack_24c;
      pppuStack_104 = pppuStack_254;
      FUN_00098ddc(pppuStack_254,PTR_DAT_00660ff8,&pppuStack_7c,pppuStack_250);
      pppuStack_74 = pppuStack_f8;
      pppuStack_70 = pppuStack_208;
      FUN_00098ddc(pppuStack_f8,&pppuStack_7c,&pppuStack_e8);
      uStack_bc = *(undefined4 *)(*(int *)PTR_DAT_00660ff4 + 0x18);
      pppuStack_d8 = pppuStack_104;
      uStack_d0 = (uint)pppuVar4;
      pppiStack_cc = (int ***)pppuVar1;
      pppuStack_c8 = pppuVar2;
      pppiStack_c4 = pppiVar3;
      uStack_c0 = 0;
      pppuStack_d4 = extraout_r3_00;
      FUN_00098ddc(0,&pppuStack_e8,appiStack_180);
      ppppuStack_258 = (undefined ****)PTR_DAT_00660ffc;
      pppuStack_254 = (uint ***)appiStack_180;
      FUN_0001cd7c();
      ppppuStack_258 = *(undefined *****)PTR_DAT_00661000;
      pppuStack_254 = (uint ***)PTR_DAT_00661004;
      printerApi_service_event___Dispatcher__Dispatch();
      goto LAB_00660d68;
    }
  }
  FUN_00098ddc(pppuStack_208,PTR_DAT_00660ff8,&pppuStack_7c);
  pppuStack_74 = pppuStack_f8;
  pppuStack_70 = pppuStack_208;
  FUN_00098ddc(pppuStack_f8,&pppuStack_7c,appiStack_1b0);
  ppppuStack_258 = (undefined ****)PTR_DAT_00660ffc;
  pppuStack_254 = (uint ***)appiStack_1b0;
  FUN_0001cd7c();
  ppppuStack_258 = *(undefined *****)PTR_DAT_00661000;
  pppuStack_254 = (uint ***)PTR_DAT_00661004;
  printerApi_service_event___Dispatcher__Dispatch();
LAB_00660d68:
  *(undefined4 *)PTR_DAT_00661008 = 0;
  *(undefined4 *)PTR_DAT_0066100c = 0;
  *(undefined4 *)PTR_DAT_00661010 = 0;
  ppppuStack_258 = *(undefined *****)PTR_DAT_00661014;
  if (ppppuStack_258 != (undefined ****)0x0) {
    printerApi_cloud___printerHandler__tryPublishLowStorageWarn();
  }
  ppppuStack_258 = (undefined ****)pppuStack_f8;
  pppuStack_254 = pppuStack_208;
  printerApi_service_k3c_wrapper_FormatPrintFileScript();
  in_stack_00000014 = pppuStack_250;
  in_stack_00000018 = pppuStack_24c;
  pppiStack_100 = in_stack_0000000c;
  ppiStack_210 = in_stack_00000010;
  pppuStack_254 = *(uint ****)PTR_DAT_00661018;
  ppppuStack_258 = (undefined ****)PTR_DAT_0066101c;
  pppuStack_250 = (uint ***)in_stack_0000000c;
  pppuStack_24c = (uint ***)in_stack_00000010;
  FUN_0008e314();
  in_stack_0000000c = pppiStack_100;
  in_stack_00000010 = ppiStack_210;
  if ((char)pppuStack_244 != '\0') {
    in_stack_0000000c = (int ***)*pppuStack_248;
    in_stack_00000010 = (int **)pppuStack_248[1];
  }
  ppppuStack_258 = (undefined ****)PTR_DAT_00661020;
  pppuStack_254 = (uint ***)&stack0x00000004;
  FUN_0001cd7c();
  ppppuStack_258 = (undefined ****)PTR_DAT_00661020;
  pppuStack_254 = pppuStack_250;
  pppuStack_250 = (uint ***)PTR_DAT_00661024;
  pppuStack_24c = (uint ***)in_stack_0000001c;
  printerApi_service_k3c_Call();
  if (pppuStack_248 == (uint ***)0x0) {
    if (*(int *)(in_stack_0000001c + 0x1c) != 0) {
      uVar6 = FUN_00098e0c(in_stack_0000001c,*(int *)(in_stack_0000001c + 0x1c),&pppuStack_7c);
      FUN_00098e0c(uVar6,&pppuStack_7c,&pppuStack_e8);
      FUN_00098a28(0,&ppuStack_10);
      ppppuStack_258 = (undefined ****)pppuStack_e8;
      pppuStack_254 = (uint ***)pppiStack_e4;
      FUN_0008a578();
      ppuStack_10 = (uint **)PTR_SUB_00661028;
      pppuStack_c = pppuStack_250;
      ppppuStack_258 = (undefined ****)pppuStack_d8;
      pppuStack_254 = pppuStack_d4;
      FUN_0008a578();
      puStack_8 = PTR_SUB_00661028;
      pppuStack_4 = pppuStack_250;
      ppppuStack_258 =
           (undefined ****)PTR_s___s___sonErrorapp_uidoffline_top_00774847_0x1e8_0066102c;
      pppuStack_254 = (uint ***)&DAT_00000007;
      pppuStack_250 = &ppuStack_10;
      pppuStack_24c = (uint ***)0x2;
      pppuStack_248 = (uint ***)0x2;
      FUN_001331ac();
      pppiStack_214 = pppiStack_240;
      pppuStack_1b4 = pppuStack_244;
      ppppuStack_258 = (undefined ****)PTR_DAT_00661030;
      FUN_0001eed8();
      pppuStack_254[1] = (uint **)pppiStack_214;
      pppuVar4 = pppuStack_254;
      if (*(int *)PTR_DAT_00661034 != 0) {
        pppuVar4 = (uint ***)FUN_00098678();
        *unaff_r8 = (uint)pppuStack_1b4;
      }
      *pppuVar4 = (uint **)pppuStack_1b4;
      in_stack_00000020 = (uint ***)PTR_DAT_00661038;
      in_stack_00000024 = pppuVar4;
                    /* WARNING: Could not recover jumptable at 0x00660f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    ppppuStack_258 = *(undefined *****)PTR_DAT_00661014;
    printerApi_cloud___printerHandler__ForceUpdateObjectStatus();
    if (pppuStack_254 != (uint ***)0x0) {
      ppuStack_18 = (uint **)PTR_SUB_00661028;
      pppuStack_14 = (uint ***)PTR_DAT_0066103c;
      ppppuStack_258 = (undefined ****)&ppuStack_18;
      pppuStack_254 = (uint ***)0x1;
      pppuStack_250 = (uint ***)0x1;
      printerApi_common_logger_Error();
    }
    in_stack_00000020 = (uint ***)0x0;
    in_stack_00000024 = (uint ***)0x0;
                    /* WARNING: Could not recover jumptable at 0x00660fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  in_stack_00000020 = pppuStack_248;
  in_stack_00000024 = pppuStack_244;
                    /* WARNING: Could not recover jumptable at 0x00660fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.StartPrint.func3 @ 00661040 (size 64) */

void printerApi_controller_printer_PrinterController_StartPrint_func3(void)

{
  int iVar1;
  int unaff_r7;
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  iVar1 = *(int *)(*(int *)(unaff_r7 + 4) + 0x18);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x10))();
  }
  return;
}



/* printerApi/controller/printer.PrinterController.StartPrint.func1 @ 00661080 (size 1852) */

/* WARNING: Removing unreachable block (ram,0x00661484) */
/* WARNING: Removing unreachable block (ram,0x006614c4) */
/* WARNING: Removing unreachable block (ram,0x006614e0) */
/* WARNING: Removing unreachable block (ram,0x006614e4) */
/* WARNING: Removing unreachable block (ram,0x006615d8) */
/* WARNING: Removing unreachable block (ram,0x006615cc) */
/* WARNING: Removing unreachable block (ram,0x006615ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_StartPrint_func1(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  undefined4 *extraout_r2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar4;
  undefined4 *in_stack_00000004;
  char cStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  undefined1 auStack_4 [4];
  
  while (auStack_4 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x6617b8;
    FUN_00096b54();
  }
  if ((in_stack_00000004[1] == 0) || (in_stack_00000004[3] == 0)) {
    if (in_stack_00000004[8] != 0) {
      FUN_00017cc4();
      puVar2 = in_stack_00000004;
      if (*DAT_006617c8 != 0) {
        uVar4 = FUN_00098678(in_stack_00000004,in_stack_00000004[8]);
        *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
        puVar2 = (undefined4 *)uVar4;
      }
      puVar2[8] = 0;
    }
  }
  else {
    FUN_00098a28(0,auStack_10,in_stack_00000004,in_stack_00000004[1],unaff_lr);
    FUN_0008a578();
    auStack_10[0] = DAT_006617c0;
    FUN_0008a578();
    uStack_8 = DAT_006617c0;
    cStack_70 = '\x02';
    printerApi_common_logger_Infof();
    puVar2 = in_stack_00000004;
    if ((undefined4 *)in_stack_00000004[6] != (undefined4 *)0x0) {
      (**(code **)in_stack_00000004[6])();
      if (*DAT_006617c8 != 0) {
        uVar4 = FUN_00098678(in_stack_00000004,in_stack_00000004[6]);
        *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
        puVar2 = (undefined4 *)uVar4;
      }
      puVar2[6] = 0;
    }
    if (puVar2[8] != 0) {
      FUN_00017cc4();
      puVar2 = in_stack_00000004;
      if (*DAT_006617c8 != 0) {
        uVar4 = FUN_00098678(in_stack_00000004,in_stack_00000004[8]);
        *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
        puVar2 = (undefined4 *)uVar4;
      }
      puVar2[8] = 0;
    }
    uVar1 = 0;
    puVar2[1] = 0;
    if (*DAT_006617c8 != 0) {
      uVar4 = FUN_00098698(0,*puVar2);
      uVar1 = (undefined4)uVar4;
      *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
      unaff_r8[1] = extraout_r2[2];
      unaff_r8[2] = extraout_r2[4];
      puVar2 = extraout_r2;
    }
    *puVar2 = 0;
    puVar2[3] = uVar1;
    puVar2[2] = 0;
    puVar2[5] = uVar1;
    puVar2[4] = 0;
    puVar2[7] = uVar1;
  }
  uVar1 = *(undefined4 *)(*(int *)(*DAT_006617cc + 8) + 0x168);
  if (*(int *)(*(int *)(*DAT_006617cc + 8) + 0x16c) == 0) {
    uVar1 = DAT_006617d0;
  }
  printerApi_common_threemf_PreCheck();
  if (iStack_68 == 0) {
    FUN_00017058();
    if (*DAT_006617c8 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = in_stack_00000004[8];
      uVar1 = extraout_r1;
    }
    in_stack_00000004[8] = uVar1;
    return;
  }
  FUN_000a2c04();
  if (cStack_70 != '\0') {
    uStack_18 = 0;
    if (iStack_68 != 0) {
      uStack_18 = *(undefined4 *)(iStack_68 + 4);
    }
    printerApi_common_logger_Errorf();
    uStack_18 = 0;
    puStack_14 = (undefined4 *)0x0;
    FUN_0008a4bc();
    uStack_18 = DAT_006617e8;
    puStack_14 = &uStack_18;
    FUN_001331ac();
    uVar1 = *DAT_006617f0;
    uVar3 = *DAT_006617f4;
    FUN_0001eed8();
    puVar2 = (undefined4 *)0x2;
    _DAT_00000006 = iStack_68;
    if (*DAT_006617c8 != 0) {
      puVar2 = (undefined4 *)FUN_00098688();
      *unaff_r8 = uStack_6c;
      unaff_r8[1] = uVar1;
    }
    *puVar2 = uStack_6c;
    puVar2[3] = uVar3;
    puVar2[2] = uVar1;
    return;
  }
  FUN_000a2c04();
  FUN_000a2c04();
  uStack_18 = 0;
  if (iStack_68 != 0) {
    uStack_18 = *(undefined4 *)(iStack_68 + 4);
  }
  printerApi_common_logger_Errorf();
  uStack_18 = 0;
  puStack_14 = (undefined4 *)0x0;
  FUN_0008a4bc();
  uStack_18 = DAT_006617e8;
  puStack_14 = &uStack_18;
  FUN_001331ac();
  uVar1 = *DAT_00661830;
  uVar3 = *DAT_00661834;
  FUN_0001eed8();
  puVar2 = (undefined4 *)0x2;
  _DAT_00000006 = iStack_68;
  if (*DAT_006617c8 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uStack_6c;
    unaff_r8[1] = uVar1;
  }
  *puVar2 = uStack_6c;
  puVar2[3] = uVar3;
  puVar2[2] = uVar1;
  return;
}



/* printerApi/controller/printer.parseScriptFilename @ 0066183c (size 1196) */

/* WARNING: Removing unreachable block (ram,0x00661858) */

void printerApi_controller_printer_parseScriptFilename(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 8) == 0) {
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00661d18;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0xf;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x00661cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x4c))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x44) = *(int *)((int)register0x00000054 + 8);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00661cec;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
      FUN_00146be8();
      if (*(int *)((int)register0x00000054 + -0x2c) != 2) {
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00661d14;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0x36;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x00661c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x4c))();
        return;
      }
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x30);
      if (puVar1[1] != 0x11) {
LAB_006618d8:
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        uVar2 = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0x48) = *puVar1;
        *(undefined4 *)((int)register0x00000054 + -0x44) = uVar2;
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_00661cf4;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00661cf8;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0x43;
        *(undefined1 **)((int)register0x00000054 + -0x40) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x00661954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x4c))();
        return;
      }
      *(undefined4 **)((int)register0x00000054 + -0x14) = puVar1;
      *(undefined4 *)((int)register0x00000054 + -0x48) = *puVar1;
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00661cf0;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0x11;
      FUN_000150d4();
      if (*(char *)((int)register0x00000054 + -0x3c) == '\0') {
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x14);
        goto LAB_006618d8;
      }
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar2;
      FUN_00148fb4();
      if (*(int *)((int)register0x00000054 + -0x3c) < 9) {
LAB_006619b0:
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00661d00;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0x1a;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x006619f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x4c))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00661cfc;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 9;
      FUN_000150d4();
      if (*(char *)((int)register0x00000054 + -0x3c) == '\0') goto LAB_006619b0;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00661cfc;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 9;
      FUN_000150d4();
      if (*(char *)((int)register0x00000054 + -0x3c) == '\0') {
        iVar5 = *(int *)((int)register0x00000054 + -0x1c);
        iVar3 = *(int *)((int)register0x00000054 + -0xc);
      }
      else {
        iVar3 = (9 - *(int *)((int)register0x00000054 + -0x1c) >> 0x1f & 9U) +
                *(int *)((int)register0x00000054 + -0xc);
        iVar5 = *(int *)((int)register0x00000054 + -0x1c) + -9;
      }
      if (iVar5 == 0) {
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00661d10;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0x11;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x00661c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x4c))();
        return;
      }
      if (iVar5 < 1) {
        cVar7 = '\0';
      }
      else {
        *(int *)((int)register0x00000054 + -0x18) = iVar3;
        *(int *)((int)register0x00000054 + -0x24) = iVar5;
        *(int *)((int)register0x00000054 + -0x48) = iVar3;
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00661d04;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 1;
        FUN_000150d4();
        cVar7 = *(char *)((int)register0x00000054 + -0x3c);
        iVar5 = *(int *)((int)register0x00000054 + -0x24);
        iVar3 = *(int *)((int)register0x00000054 + -0x18);
      }
      if (cVar7 == '\0') {
        *(int *)((int)register0x00000054 + -0x48) = iVar3;
        *(int *)((int)register0x00000054 + -0x44) = iVar5;
        FUN_00148fb4();
        iVar3 = *(int *)((int)register0x00000054 + -0x40);
        iVar5 = *(int *)((int)register0x00000054 + -0x3c);
        goto LAB_00661b80;
      }
      *(int *)((int)register0x00000054 + -0x48) = iVar3;
      *(int *)((int)register0x00000054 + -0x44) = iVar5;
      FUN_00148fb4();
      uVar6 = *(uint *)((int)register0x00000054 + -0x3c);
      if ((int)uVar6 < 2) goto LAB_00661b20;
      iVar3 = *(int *)((int)register0x00000054 + -0x40);
      if ((int)uVar6 < 1) {
        cVar7 = '\0';
        goto LAB_00661b00;
      }
      uVar4 = uVar6 - 1;
      bVar9 = uVar6 == uVar4;
      if (uVar4 <= uVar6) {
        *(uint *)((int)register0x00000054 + -0x20) = uVar6;
        *(int *)((int)register0x00000054 + -0x10) = iVar3;
        *(uint *)((int)register0x00000054 + -0x48) = uVar4 + iVar3;
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00661d04;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 1;
        FUN_000150d4();
        cVar7 = *(char *)((int)register0x00000054 + -0x3c);
        uVar6 = *(uint *)((int)register0x00000054 + -0x20);
        iVar3 = *(int *)((int)register0x00000054 + -0x10);
LAB_00661b00:
        if (cVar7 == '\0') {
LAB_00661b20:
          *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00661d08;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 0x2e;
          *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
          FUN_00130144();
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x00661b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x4c))();
          return;
        }
        iVar3 = ((int)(2 - uVar6) >> 0x1f & 1U) + iVar3;
        iVar5 = uVar6 - 2;
LAB_00661b80:
        if (iVar5 != 0) {
          *(int *)((int)register0x00000054 + 0xc) = iVar3;
          *(int *)((int)register0x00000054 + 0x10) = iVar5;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00661bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x4c))();
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00661d0c;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0x1f;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x00661bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x4c))();
        return;
      }
      param_1 = FUN_00098758();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x4c);
      if (bVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x661ce4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.ReportPrintStatus @ 00661d1c (size 148) */

void printerApi_controller_printer_ReportPrintStatus(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_cloud___printerHandler__ReportPrintStatus();
  return;
}



/* printerApi/controller/printer.printResumeFailureRespCode @ 00661db8 (size 268) */

/* WARNING: Removing unreachable block (ram,0x00661e38) */

void printerApi_controller_printer_printResumeFailureRespCode(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x661ec0;
    FUN_00096bb8();
  }
  if (in_stack_00000004 == 0) {
    in_stack_0000000c = *(undefined4 *)PTR_DAT_00661ed8;
    in_stack_00000010 = *(undefined4 *)PTR_DAT_00661edc;
    in_stack_00000014 = *(undefined4 *)PTR_DAT_00661ee0;
    in_stack_00000018 = *(undefined4 *)PTR_DAT_00661ee4;
                    /* WARNING: Could not recover jumptable at 0x00661eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (**(code **)(in_stack_00000004 + 0xc))();
  printerApi_cloud_RespCode_GetRespCodeByMsg();
  if (puStack_4 != (undefined4 *)0x0) {
    in_stack_00000014 = puStack_4[2];
    in_stack_00000018 = puStack_4[3];
    in_stack_0000000c = *puStack_4;
    in_stack_00000010 = puStack_4[1];
                    /* WARNING: Could not recover jumptable at 0x00661e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (**(code **)(in_stack_00000004 + 0xc))();
  in_stack_00000014 = *(undefined4 *)PTR_DAT_00661ec8;
  in_stack_00000018 = *(undefined4 *)PTR_DAT_00661ecc;
  in_stack_0000000c = *(undefined4 *)PTR_DAT_00661ed0;
  in_stack_00000010 = *(undefined4 *)PTR_DAT_00661ed4;
                    /* WARNING: Could not recover jumptable at 0x00661e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.k3cResponseError @ 00661ee8 (size 544) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_k3cResponseError(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 uStack_6c;
  int iStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [24];
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x662104;
    FUN_00096bb8();
  }
  if ((in_stack_00000004 != 0) && (*(int *)(in_stack_00000004 + 0x1c) != 0)) {
    FUN_0001eed8();
    uStack_4 = uStack_6c;
    uVar3 = *(undefined4 *)(*(int *)(in_stack_00000004 + 0x1c) + 8);
    FUN_0016a168();
    if (iStack_5c != 0) {
      puStack_c = (undefined *)0x0;
      uStack_8 = 0;
      uVar3 = *(undefined4 *)(*(int *)(in_stack_00000004 + 0x1c) + 4);
      FUN_00093e34();
      FUN_0008a578();
      puStack_c = PTR_SUB_00662114;
      uStack_8 = uVar3;
      FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x006620e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    uVar1 = FUN_00098e0c(0,uStack_4,auStack_34);
    FUN_00098e0c(uVar1,auStack_34,auStack_4c);
    FUN_00098a28(0,&puStack_1c);
    FUN_0008a578();
    puStack_1c = PTR_SUB_00662114;
    uStack_18 = uVar3;
    FUN_0008a578();
    puStack_14 = PTR_SUB_00662114;
    uStack_10 = uVar3;
    FUN_001331ac();
    FUN_0001eed8();
    puVar2 = (undefined4 *)&DAT_00000007;
    _DAT_0000000b = uStack_58;
    if (*(int *)PTR_DAT_00662120 != 0) {
      puVar2 = (undefined4 *)FUN_00098678();
      *unaff_r8 = 0;
    }
    *puVar2 = 0;
    in_stack_00000008 = PTR_DAT_00662124;
    in_stack_0000000c = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00662050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  in_stack_00000008 = (undefined *)0x0;
  in_stack_0000000c = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x006620f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.PausePrint @ 0066212c (size 528) */

/* WARNING: Removing unreachable block (ram,0x006622b8) */
/* WARNING: Removing unreachable block (ram,0x0066231c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_PausePrint(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  char cStack_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x662338;
    FUN_00096bb8();
  }
  if ((in_stack_00000018 == 0xb) && (FUN_000150d4(), cStack_30 != '\0')) {
    printerApi_cloud___printerHandler__ReportPrintStatus();
  }
  else {
    printerApi_cloud___printerHandler__ReportPrintStatus();
  }
  FUN_0008e314();
  in_stack_00000010 = _DAT_00000009;
  in_stack_0000000c = _DAT_00000005;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  in_stack_00000020 = 5;
  in_stack_00000024 = 6;
                    /* WARNING: Could not recover jumptable at 0x00662318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.StopPrint @ 00662380 (size 484) */

/* WARNING: Removing unreachable block (ram,0x006624c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_StopPrint(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  char cStack_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x662560;
    FUN_00096bb8();
  }
  uVar1 = *(undefined4 *)PTR_DAT_00662568;
  (*(code *)**(undefined4 **)PTR_DAT_00662578)();
  uVar3 = in_stack_00000008;
  uVar2 = in_stack_00000004;
  FUN_0008e314();
  cStack_24 = (char)uVar1;
  if (cStack_24 != '\0') {
    uVar2 = _DAT_0000000a;
    uVar3 = _DAT_0000000e;
  }
  in_stack_00000004 = uVar2;
  in_stack_00000008 = uVar3;
  FUN_0001cd7c();
  (*(code *)**(undefined4 **)PTR_DAT_00662590)();
  in_stack_00000020 = 10;
  in_stack_00000024 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x006624c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.ResumePrint @ 006625a8 (size 1772) */

/* WARNING: Removing unreachable block (ram,0x0066291c) */
/* WARNING: Removing unreachable block (ram,0x00662a24) */
/* WARNING: Removing unreachable block (ram,0x00662a8c) */
/* WARNING: Removing unreachable block (ram,0x00662a90) */
/* WARNING: Removing unreachable block (ram,0x00662a98) */
/* WARNING: Removing unreachable block (ram,0x00662a9c) */
/* WARNING: Removing unreachable block (ram,0x00662b68) */
/* WARNING: Removing unreachable block (ram,0x00662b78) */
/* WARNING: Removing unreachable block (ram,0x00662b80) */
/* WARNING: Removing unreachable block (ram,0x00662aa4) */
/* WARNING: Removing unreachable block (ram,0x00662b0c) */
/* WARNING: Removing unreachable block (ram,0x00662b10) */
/* WARNING: Removing unreachable block (ram,0x00662bd0) */
/* WARNING: Removing unreachable block (ram,0x00662938) */
/* WARNING: Removing unreachable block (ram,0x00662950) */
/* WARNING: Removing unreachable block (ram,0x006627d8) */
/* WARNING: Removing unreachable block (ram,0x00662850) */
/* WARNING: Removing unreachable block (ram,0x00662958) */
/* WARNING: Removing unreachable block (ram,0x0066295c) */
/* WARNING: Removing unreachable block (ram,0x006629bc) */
/* WARNING: Removing unreachable block (ram,0x006629c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_ResumePrint(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined *in_stack_00000020;
  undefined4 in_stack_00000024;
  char cStack_70;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x662c90;
    FUN_00096bb8();
  }
  if ((*(int *)(*(int *)PTR_DAT_00662c98 + 0x3d8) == 1) &&
     ((*(int *)PTR_DAT_00662c9c == 0 || (*(char *)(*(int *)PTR_DAT_00662c9c + 0x1c) == '\0')))) {
    iVar1 = *(int *)PTR_DAT_00662ca0;
    iVar3 = *(int *)PTR_DAT_00662ca4;
    iVar4 = *(int *)PTR_DAT_00662cac;
  }
  else if ((*(char *)(*(int *)PTR_DAT_00662c98 + 0x404) == '\0') ||
          ((*(int *)PTR_DAT_00662c9c != 0 && (*(char *)(*(int *)PTR_DAT_00662c9c + 0x1c) != '\0'))))
  {
    iVar1 = *(int *)PTR_DAT_00662cb0;
    iVar3 = *(int *)PTR_DAT_00662cb4;
    iVar4 = *(int *)PTR_DAT_00662cbc;
  }
  else {
    iVar1 = *(int *)PTR_DAT_00662ca0;
    iVar3 = *(int *)PTR_DAT_00662ca4;
    iVar4 = *(int *)PTR_DAT_00662cac;
  }
  if (((iVar3 == *(int *)PTR_DAT_00662cb4 && iVar1 == *(int *)PTR_DAT_00662cb0) &&
      (iVar4 == *(int *)PTR_DAT_00662cbc)) && (FUN_000150d4(), cStack_70 != '\0')) {
    uVar2 = printerApi_cloud___printerHandler__ReportPrintStatus();
    printerApi_service_k3c_GetResponses(uVar2);
    FUN_0008e314();
    in_stack_00000008 = _DAT_0000000a;
    in_stack_00000004 = _DAT_00000006;
    FUN_0001cd7c();
    printerApi_service_k3c_Call();
    printerApi_common_logger_Errorf();
    printerApi_controller_printer_printResumeFailureRespCode();
    printerApi_cloud___printerHandler__ReportPrintStatus();
    in_stack_00000020 = (undefined *)0x6;
    in_stack_00000024 = 8;
                    /* WARNING: Could not recover jumptable at 0x00662918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0001cd7c();
  printerApi_common_logger_Errorf();
  printerApi_cloud_RespCode_RespCode_ToErrorDto();
  in_stack_00000020 = PTR_DAT_00662cfc;
  in_stack_00000024 = 1;
                    /* WARNING: Could not recover jumptable at 0x00662c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.Restart @ 00662d00 (size 224) */

void printerApi_controller_printer_PrinterController_Restart(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x662ddc;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00662dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00662dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.RestartFirmware @ 00662df4 (size 224) */

void printerApi_controller_printer_PrinterController_RestartFirmware(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x662ed0;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00662ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00662eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.SetPrevAutoLevel @ 00662ee8 (size 224) */

void printerApi_controller_printer_PrinterController_SetPrevAutoLevel(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x662fc4;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00662fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00662fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.SetPrevResonance @ 00662fdc (size 224) */

void printerApi_controller_printer_PrinterController_SetPrevResonance(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6630b8;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x006630ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00663098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.SetFlowCali @ 006630d0 (size 224) */

void printerApi_controller_printer_PrinterController_SetFlowCali(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6631ac;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x006631a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0066318c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.SetExtruDiameter @ 006631c4 (size 288) */

void printerApi_controller_printer_PrinterController_SetExtruDiameter(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_18;
  char cStack_14;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6632e0;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_14 != '\0') {
    uVar1 = *puStack_18;
    uVar2 = puStack_18[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_18 == (undefined4 *)0x0) {
    FUN_0008a578();
    printerApi_service_event___Dispatcher__Dispatch();
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x006632d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00663280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.EmergencyStop @ 00663308 (size 224) */

void printerApi_controller_printer_PrinterController_EmergencyStop(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6633e4;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x006633d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006633c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.SetAutoLeveling @ 006633fc (size 224) */

void printerApi_controller_printer_PrinterController_SetAutoLeveling(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6634d8;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x006634cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006634b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.SetPrintSpeed @ 006634f0 (size 224) */

void printerApi_controller_printer_PrinterController_SetPrintSpeed(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6635cc;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x006635c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006635ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.GetMachineCode @ 006635e4 (size 260) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_GetMachineCode(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 uVar2;
  int extraout_r3;
  int iVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6636e4;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  printerApi_common_config_GetMachineCode(uStack_28);
  uVar2 = _UNK_006636f0;
  FUN_0008e7bc();
  puStack_18[1] = uStack_24;
  puVar1 = puStack_18;
  if (*_UNK_006636f4 != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uStack_28;
    unaff_r8[1] = *puVar1;
  }
  *puVar1 = uStack_28;
  FUN_001707f4();
  *(undefined4 *)(in_stack_0000001c + 0x14) = 0xb;
  *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_18;
  iVar3 = in_stack_0000001c;
  if (*_UNK_006636f4 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
    uVar2 = extraout_r2;
    iVar3 = extraout_r3;
  }
  *(undefined4 *)(iVar3 + 0x10) = uVar2;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x006636d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.QueryResumePrint @ 006636f8 (size 2212) */

/* WARNING: Removing unreachable block (ram,0x00663d50) */
/* WARNING: Removing unreachable block (ram,0x0066382c) */

void printerApi_controller_printer_PrinterController_QueryResumePrint(void)

{
  undefined4 uVar1;
  uint uVar2;
  int **extraout_r2;
  int **extraout_r3;
  undefined4 *puVar3;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int **in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000001c;
  int **in_stack_00000020;
  int **in_stack_00000024;
  int **ppiStack_1e0;
  int **ppiStack_1dc;
  int **ppiStack_1d8;
  undefined *puStack_1d4;
  int **ppiStack_1d0;
  undefined **ppuStack_1cc;
  int **ppiStack_1c8;
  undefined **ppuStack_1a8;
  undefined4 uStack_1a4;
  int iStack_194;
  undefined4 uStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int **ppiStack_17c;
  undefined4 uStack_178;
  undefined4 *puStack_174;
  int iStack_170;
  undefined **ppuStack_16c;
  undefined **ppuStack_168;
  undefined4 *puStack_164;
  int **ppiStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined *puStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 *puStack_144;
  undefined **ppuStack_140;
  int **ppiStack_13c;
  undefined *puStack_138;
  int iStack_134;
  undefined4 uStack_128;
  int iStack_124;
  undefined1 uStack_120;
  undefined4 uStack_11c;
  undefined **ppuStack_118;
  int **ppiStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 *puStack_100;
  undefined **ppuStack_fc;
  int **ppiStack_f8;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_c4;
  int **ppiStack_bc;
  undefined **ppuStack_b8;
  undefined **ppuStack_b4;
  int **ppiStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  undefined **ppuStack_a4;
  int **ppiStack_a0;
  int **ppiStack_9c;
  undefined *puStack_98;
  int iStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined1 uStack_88;
  int *piStack_78;
  int *piStack_74;
  undefined8 uStack_70;
  int *piStack_68;
  int *piStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  int **ppiStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_10;
  undefined **ppuStack_c;
  int **ppiStack_8;
  int **ppiStack_4;
  
  while (&puStack_164 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x663fec;
    FUN_00096bb8();
  }
  ppiStack_114 = in_stack_00000004;
  uStack_178 = in_stack_00000008;
  ppiStack_1dc = *(int ***)PTR_DAT_00663f90;
  ppiStack_1e0 = (int **)PTR_DAT_00663f94;
  ppiStack_1d8 = in_stack_00000004;
  puStack_1d4 = (undefined *)in_stack_00000008;
  FUN_0008e314();
  in_stack_00000004 = ppiStack_114;
  in_stack_00000008 = uStack_178;
  if ((char)ppuStack_1cc != '\0') {
    in_stack_00000004 = (int **)*ppiStack_1d0;
    in_stack_00000008 = ppiStack_1d0[1];
  }
  ppiStack_1e0 = (int **)PTR_DAT_00663f98;
  ppiStack_1dc = (int **)&stack0x00000004;
  FUN_0001cd7c();
  ppiStack_1e0 = (int **)PTR_DAT_00663f98;
  ppiStack_1dc = ppiStack_1d8;
  ppiStack_1d8 = (int **)PTR_DAT_00663f9c;
  puStack_1d4 = (undefined *)in_stack_0000001c;
  printerApi_service_k3c_Call();
  if (ppiStack_1d0 != (int **)0x0) {
    puStack_164 = ppiStack_1d0;
    ppuStack_b8 = ppuStack_1cc;
    FUN_00098e0c(ppuStack_1cc,*(undefined4 *)(in_stack_0000001c + 0x1c),&ppuStack_b4);
    FUN_00098a28(0,&puStack_1c);
    ppiStack_1e0 = (int **)ppuStack_b4;
    ppiStack_1dc = ppiStack_b0;
    FUN_0008a578();
    puStack_1c = PTR_SUB_00663fb4;
    puStack_18 = (undefined *)ppiStack_1d8;
    ppiStack_1e0 = (int **)ppuStack_a4;
    ppiStack_1dc = ppiStack_a0;
    FUN_0008a578();
    puStack_14 = PTR_SUB_00663fb4;
    puStack_10 = (undefined *)ppiStack_1d8;
    ppiStack_1e0 = (int **)PTR_s___s___sonErrorapp_uidoffline_top_00774847_0x1e8_00663fd4;
    ppiStack_1dc = (int **)0x7;
    ppiStack_1d8 = (int **)&puStack_1c;
    puStack_1d4 = (undefined *)0x2;
    ppiStack_1d0 = (int **)0x2;
    FUN_001331ac();
    piStack_24 = (int *)0x0;
    ppiStack_20 = (int **)0x0;
    ppiStack_1e0 = (int **)ppuStack_1cc;
    ppiStack_1dc = ppiStack_1c8;
    FUN_0008a578();
    piStack_24 = (int *)PTR_SUB_00663fb4;
    ppiStack_20 = ppiStack_1d8;
    ppiStack_1e0 = (int **)PTR_DAT_00663fe0;
    ppiStack_1dc = (int **)0x1f;
    ppiStack_1d8 = &piStack_24;
    puStack_1d4 = (undefined *)0x1;
    ppiStack_1d0 = (int **)0x1;
    printerApi_common_logger_Errorf();
    in_stack_00000020 = (int **)puStack_164;
    in_stack_00000024 = (int **)ppuStack_b8;
                    /* WARNING: Could not recover jumptable at 0x00663f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (*(int *)(in_stack_0000001c + 0x1c) != 0) {
    FUN_00098e0c(in_stack_0000001c,*(int *)(in_stack_0000001c + 0x1c),&ppuStack_b4);
    FUN_00098a28(0,&puStack_1c);
    ppiStack_1e0 = (int **)ppuStack_b4;
    ppiStack_1dc = ppiStack_b0;
    FUN_0008a578();
    puStack_1c = PTR_SUB_00663fb4;
    puStack_18 = (undefined *)ppiStack_1d8;
    ppiStack_1e0 = (int **)ppuStack_a4;
    ppiStack_1dc = ppiStack_a0;
    FUN_0008a578();
    puStack_14 = PTR_SUB_00663fb4;
    puStack_10 = (undefined *)ppiStack_1d8;
    ppiStack_1e0 = (int **)PTR_s___s___sonErrorapp_uidoffline_top_00774847_0x1e8_00663fd4;
    ppiStack_1dc = (int **)0x7;
    ppiStack_1d8 = (int **)&puStack_1c;
    puStack_1d4 = (undefined *)0x2;
    ppiStack_1d0 = (int **)0x2;
    FUN_001331ac();
    piStack_24 = (int *)0x0;
    ppiStack_20 = (int **)0x0;
    ppiStack_1e0 = (int **)ppuStack_1cc;
    ppiStack_1dc = ppiStack_1c8;
    FUN_0008a578();
    piStack_24 = (int *)PTR_SUB_00663fb4;
    ppiStack_20 = ppiStack_1d8;
    ppiStack_1e0 = (int **)PTR_DAT_00663fd8;
    ppiStack_1dc = (int **)0x1f;
    ppiStack_1d8 = &piStack_24;
    puStack_1d4 = (undefined *)0x1;
    ppiStack_1d0 = (int **)0x1;
    printerApi_common_logger_Errorf();
    in_stack_00000024 = *(int ***)(in_stack_0000001c + 0x1c);
    in_stack_00000020 = (int **)PTR_DAT_00663fdc;
                    /* WARNING: Could not recover jumptable at 0x00663e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  ppiStack_1e0 = (int **)PTR_DAT_00663fa0;
  FUN_0001eed8();
  ppiStack_4 = ppiStack_1dc;
  ppiStack_1e0 = *(int ***)(in_stack_0000001c + 0x10);
  ppiStack_1d8 = *(int ***)(in_stack_0000001c + 0x18);
  puStack_1d4 = PTR_DAT_00663fa4;
  ppiStack_1d0 = ppiStack_1dc;
  ppiStack_1dc = *(int ***)(in_stack_0000001c + 0x14);
  FUN_0016a168();
  if ((int **)ppuStack_1cc != (int **)0x0) {
    ppuStack_168 = ppuStack_1cc;
    piStack_24 = (int *)ppuStack_1cc[1];
    ppiStack_bc = ppiStack_1c8;
    ppiStack_20 = ppiStack_1c8;
    ppiStack_1e0 = (int **)PTR_DAT_00663fa8;
    ppiStack_1dc = (int **)0x24;
    ppiStack_1d8 = &piStack_24;
    puStack_1d4 = (undefined *)0x1;
    ppiStack_1d0 = (int **)0x1;
    printerApi_common_logger_Errorf();
    in_stack_00000020 = (int **)ppuStack_168;
    in_stack_00000024 = ppiStack_bc;
                    /* WARNING: Could not recover jumptable at 0x00663874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00098a00(0,&ppuStack_b4);
  uVar1 = printerApi_service_poweroff_resume_GetPrintRecord();
  ppuStack_16c = ppuStack_1a8;
  uVar1 = FUN_00098dcc(uVar1,&ppiStack_1e0,&ppuStack_b4,uStack_1a4);
  FUN_00098dcc(uVar1,&ppuStack_b4,&uStack_150);
  if ((int **)ppuStack_16c == (int **)0x0) {
    uVar2 = 0;
  }
  else {
    ppiStack_1d8 = *(int ***)PTR_DAT_00663fac;
    puStack_1d4 = *(undefined **)PTR_DAT_00663fb0;
    ppiStack_1e0 = (int **)ppuStack_16c;
    ppiStack_1dc = extraout_r3;
    FUN_00122c24();
    uVar2 = (uint)ppiStack_1d0 & 0xff ^ 1;
  }
  if (uVar2 != 0) {
    (*(code *)ppuStack_16c[3])();
    piStack_24 = (int *)0x0;
    ppiStack_20 = (int **)0x0;
    ppiStack_1e0 = ppiStack_1dc;
    ppiStack_1dc = ppiStack_1d8;
    FUN_0008a578();
    piStack_24 = (int *)PTR_SUB_00663fb4;
    ppiStack_20 = ppiStack_1d8;
    ppiStack_1e0 = (int **)PTR_DAT_00663fb8;
    ppiStack_1dc = (int **)&DAT_00000027;
    ppiStack_1d8 = &piStack_24;
    puStack_1d4 = (undefined *)0x1;
    ppiStack_1d0 = (int **)0x1;
    printerApi_common_logger_Errorf();
  }
  ppiStack_17c = ppiStack_13c;
  ppuStack_118 = ppuStack_140;
  iStack_188 = iStack_124;
  uStack_15c = uStack_128;
  iStack_180 = iStack_134;
  puStack_154 = puStack_138;
  iStack_184 = iStack_14c;
  uStack_158 = uStack_150;
  puStack_174 = puStack_144;
  uStack_110 = uStack_148;
  uStack_18c = uStack_11c;
  if ((ppiStack_13c == (int **)0x0) || (puVar3 = puStack_144, iStack_134 == 0)) {
    FUN_000989ec(0,&ppuStack_b4);
    uVar1 = printerApi_service_poweroff_resume_ReadResumeGuard();
    iStack_170 = iStack_194;
    uVar1 = FUN_00098da4(uVar1,&ppiStack_1e0,&ppuStack_b4);
    FUN_00098da4(uVar1,&ppuStack_b4,&uStack_10c);
    puVar3 = puStack_174;
    if (iStack_170 == 0) {
      if ((ppiStack_17c == (int **)0x0) && (ppiStack_f8 != (int **)0x0)) {
        ppiStack_160 = ppiStack_f8;
        ppuStack_c = ppuStack_fc;
        piStack_24 = (int *)0x0;
        ppiStack_20 = (int **)0x0;
        ppiStack_1e0 = (int **)ppuStack_fc;
        ppiStack_1dc = ppiStack_f8;
        FUN_0008a578();
        piStack_24 = (int *)PTR_SUB_00663fb4;
        ppiStack_20 = ppiStack_1d8;
        ppiStack_1e0 = (int **)PTR_DAT_00663fbc;
        ppiStack_1dc = (int **)&DAT_00000028;
        ppiStack_1d8 = &piStack_24;
        puStack_1d4 = (undefined *)0x1;
        ppiStack_1d0 = (int **)0x1;
        printerApi_common_logger_Infof();
        ppiStack_17c = ppiStack_160;
        ppuStack_118 = ppuStack_c;
      }
      if ((iStack_188 == 0) && (iStack_e8 != 0)) {
        iStack_188 = iStack_e8;
        uStack_15c = uStack_ec;
      }
      if ((iStack_180 == 0) && (ppiStack_17c != (int **)0x0)) {
        iStack_180 = 3;
        puStack_154 = PTR_DAT_00663fc0;
      }
      if ((iStack_184 == 0) && (iStack_108 != 0)) {
        iStack_184 = iStack_108;
        uStack_158 = uStack_10c;
      }
      uStack_18c = uStack_c4;
      puVar3 = puStack_174;
      if ((puStack_174 == (undefined4 *)0x0) && (puStack_100 != (undefined4 *)0x0)) {
        puVar3 = puStack_100;
        uStack_110 = uStack_104;
      }
    }
  }
  ppiStack_1e0 = (int **)PTR_DAT_00663fc4;
  puStack_174 = puVar3;
  FUN_0001eed8();
  ppiStack_8 = ppiStack_1dc;
  FUN_000989a4(0,&ppuStack_b4);
  ppuStack_b4 = (undefined **)*ppiStack_4;
  ppiStack_b0 = (int **)ppiStack_4[1];
  piStack_ac = ppiStack_4[2];
  piStack_a8 = ppiStack_4[3];
  ppuStack_a4 = (undefined **)ppiStack_4[4];
  ppiStack_a0 = (int **)ppuStack_118;
  ppiStack_9c = ppiStack_17c;
  puStack_98 = puStack_154;
  iStack_94 = iStack_180;
  uStack_90 = uStack_15c;
  iStack_8c = iStack_188;
  uStack_88 = uStack_120;
  piStack_78 = ppiStack_4[5];
  piStack_74 = ppiStack_4[6];
  uStack_70 = *(undefined8 *)(ppiStack_4 + 7);
  piStack_68 = ppiStack_4[9];
  piStack_64 = ppiStack_4[10];
  uStack_60 = *(undefined8 *)(ppiStack_4 + 0xb);
  uStack_58 = *(undefined8 *)(ppiStack_4 + 0xd);
  uStack_50 = *(undefined8 *)(ppiStack_4 + 0xf);
  uStack_38 = uStack_158;
  iStack_34 = iStack_184;
  uStack_30 = uStack_110;
  puStack_2c = puStack_174;
  uStack_28 = uStack_18c;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00663fc8 != 0) {
    ppiStack_1e0 = (int **)PTR_DAT_00663fc4;
    ppiStack_1d8 = (int **)&ppuStack_b4;
    ppiStack_1dc = extraout_r2;
    uVar1 = FUN_00022914();
  }
  FUN_00098d1c(uVar1,&ppuStack_b4);
  if (*(int *)PTR_DAT_00663fc8 != 0) {
    FUN_00098688();
    *puVar3 = ppiStack_8;
    puVar3[1] = *(undefined4 *)PTR_DAT_00663fcc;
  }
  *(int ***)PTR_DAT_00663fcc = ppiStack_8;
  if (*ppiStack_8 != (int *)0x1) {
    ppiStack_1e0 = (int **)((uint)ppiStack_1e0 & 0xffffff00);
    uVar1 = printerApi_service_poweroff_resume_CleanupTempArtifacts();
    FUN_00098e14(uVar1,&ppiStack_1dc,&ppuStack_b4);
  }
  ppiStack_1e0 = (int **)PTR_DAT_00663fd0;
  FUN_0005e168();
  in_stack_00000020 = (int **)0x0;
  in_stack_00000024 = (int **)0x0;
                    /* WARNING: Could not recover jumptable at 0x00663d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.SdcardResumePrint @ 00663ff0 (size 876) */

/* WARNING: Removing unreachable block (ram,0x006642ec) */
/* WARNING: Removing unreachable block (ram,0x0066406c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_SdcardResumePrint(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int iStack_68;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x664360;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  if ((in_stack_00000014 == 1) &&
     (printerApi_cloud___printerHandler__PreparePoweroffResume(), iStack_68 != 0)) {
    puStack_c = *(undefined **)(iStack_68 + 4);
    printerApi_common_logger_Errorf();
                    /* WARNING: Could not recover jumptable at 0x006640b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00098a20(0,&uStack_30);
  uVar4 = in_stack_00000010;
  uVar3 = in_stack_0000000c;
  puVar1 = PTR_DAT_00664374;
  uVar5 = *(undefined4 *)PTR_DAT_00664370;
  FUN_0008e314();
  if ((char)uStack_58 != '\0') {
    uVar3 = *puStack_5c;
    uVar4 = puStack_5c[1];
  }
  uStack_20 = in_stack_00000004;
  uStack_1c = in_stack_00000008;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  FUN_0008b6b8();
  puStack_10 = puVar1;
  puStack_c = (undefined *)0x0;
  uStack_8 = 0;
  FUN_0001cec0();
  puStack_c = PTR_DAT_00664378;
  uStack_8 = uVar5;
  FUN_001331ac();
  uStack_14 = uStack_58;
  FUN_0008e7bc();
  puVar2 = (undefined4 *)0x1;
  _DAT_00000005 = puStack_54;
  if (*(int *)PTR_DAT_00664384 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uStack_14;
    unaff_r8[1] = *puVar2;
  }
  *puVar2 = uStack_14;
  puStack_28 = PTR_DAT_00664374;
  puStack_24 = puStack_10;
  FUN_00155144();
  puStack_4 = puStack_54;
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (puStack_54 != (undefined4 *)0x0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0066434c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  printerApi_service_store_setPrinterState();
  if (in_stack_00000014 == 1) {
    *(undefined1 *)(*(int *)PTR_DAT_0066439c + 0x78) = 1;
  }
  else {
    *(undefined1 *)(*(int *)PTR_DAT_0066439c + 0x79) = 1;
  }
  FUN_0005e168();
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00664328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.SetVelocityLimit @ 006643a4 (size 224) */

void printerApi_controller_printer_PrinterController_SetVelocityLimit(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000010, uVar1 = in_stack_0000000c,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x664480;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_0000000c = uVar1;
  in_stack_00000010 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_0000001c = 0;
    in_stack_00000020 = 0;
                    /* WARNING: Could not recover jumptable at 0x00664474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00664460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.SyncLog @ 00664498 (size 636) */

void printerApi_controller_printer_PrinterController_SyncLog(void)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined *in_stack_00000020;
  undefined4 *in_stack_00000024;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined **ppuStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x664710;
    FUN_00096bb8();
  }
  if (*(int *)(*(int *)(*(int *)PTR_DAT_00664718 + 8) + 0x144) == 0) {
    puStack_58 = (undefined4 *)PTR_DAT_0066472c;
    FUN_0001eed8();
    puStack_54[1] = 0x12;
    *puStack_54 = PTR_DAT_00664730;
    in_stack_00000020 = PTR_DAT_00664734;
    in_stack_00000024 = puStack_54;
                    /* WARNING: Could not recover jumptable at 0x00664704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&puStack_58,auStack_14);
  FUN_00098e14(uVar1,auStack_14,&puStack_58);
  puStack_44 = PTR_DAT_0066471c;
  uStack_40 = 0xe;
  FUN_000f8b64();
  FUN_00098a28(0,&uStack_2c,uStack_38,uStack_3c);
  uStack_2c = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00664718 + 8) + 0x140);
  uStack_28 = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00664718 + 8) + 0x144);
  puStack_58 = &uStack_2c;
  puStack_54 = (undefined4 *)0x2;
  ppuStack_50 = (undefined **)0x2;
  FUN_00159184();
  puStack_30 = puStack_4c;
  uStack_34 = uStack_48;
  puStack_58 = puStack_4c;
  puStack_54 = (undefined4 *)uStack_48;
  ppuStack_50 = (undefined **)0x1ed;
  FUN_001255a0();
  if (puStack_4c == (undefined4 *)0x0) {
    puStack_1c = (undefined *)0x0;
    uStack_18 = 0;
    puStack_58 = puStack_30;
    puStack_54 = (undefined4 *)uStack_34;
    FUN_0008a578();
    puStack_1c = PTR_SUB_00664724;
    uStack_18 = ppuStack_50;
    puStack_58 = (undefined4 *)PTR_DAT_00664728;
    puStack_54 = (undefined4 *)0x18;
    ppuStack_50 = &puStack_1c;
    puStack_4c = (undefined4 *)0x1;
    uStack_48 = 1;
    printerApi_common_logger_Errorf();
    ppuStack_50 = *(undefined ***)(*(int *)(*(int *)PTR_DAT_00664718 + 8) + 0x128);
    puStack_4c = *(undefined4 **)(*(int *)(*(int *)PTR_DAT_00664718 + 8) + 300);
    puStack_58 = puStack_30;
    puStack_54 = (undefined4 *)uStack_34;
    printerApi_controller_printer_syncFile();
    ppuStack_50 = *(undefined ***)(*(int *)(*(int *)PTR_DAT_00664718 + 8) + 0x130);
    puStack_4c = *(undefined4 **)(*(int *)(*(int *)PTR_DAT_00664718 + 8) + 0x134);
    puStack_58 = puStack_30;
    puStack_54 = (undefined4 *)uStack_34;
    printerApi_controller_printer_syncFile();
    ppuStack_50 = *(undefined ***)(*(int *)(*(int *)PTR_DAT_00664718 + 8) + 0x138);
    puStack_4c = *(undefined4 **)(*(int *)(*(int *)PTR_DAT_00664718 + 8) + 0x13c);
    puStack_58 = puStack_30;
    puStack_54 = (undefined4 *)uStack_34;
    printerApi_controller_printer_syncFile();
    in_stack_00000020 = (undefined *)0x0;
    in_stack_00000024 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x006646d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puStack_1c = (undefined *)puStack_4c[1];
  uStack_18 = uStack_48;
  puStack_58 = (undefined4 *)PTR_DAT_00664720;
  puStack_54 = (undefined4 *)0xf;
  ppuStack_50 = &puStack_1c;
  puStack_4c = (undefined4 *)0x1;
  uStack_48 = 1;
  FUN_00130144();
  in_stack_00000020 = puStack_44;
  in_stack_00000024 = (undefined4 *)uStack_40;
                    /* WARNING: Could not recover jumptable at 0x006645d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.SetPrintAcc @ 00664738 (size 380) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_SetPrintAcc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_28;
  char cStack_24;
  undefined4 *puStack_20;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6648b8;
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  FUN_0008e314();
  if (cStack_24 != '\0') {
    uVar1 = *puStack_28;
    uVar2 = puStack_28[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_00155144();
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (puStack_20 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
    (*pcRam00000000)();
                    /* WARNING: Could not recover jumptable at 0x006648a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*(code *)*puStack_20)();
                    /* WARNING: Could not recover jumptable at 0x0066487c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.MachineReset @ 006648dc (size 336) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_MachineReset(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined1 *puStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x664a28;
    param_1 = FUN_00096bb8();
  }
  FUN_00098e0c(param_1,&stack0x00000004,&puStack_40);
  iStack_28 = in_stack_0000001c;
  printerApi_controller_printer_PrinterController_CloseLanPrint();
  iVar2 = *(int *)(*(int *)(*_UNK_00664a30 + 8) + 0x16c);
  uVar1 = *(undefined4 *)(*(int *)(*_UNK_00664a30 + 8) + 0x168);
  if (iVar2 == 0) {
    iVar2 = 0x18;
    uVar1 = _UNK_00664a34;
  }
  FUN_00098a28(0,auStack_10,uVar1,iVar2);
  uStack_4 = 3;
  uStack_8 = _UNK_00664a38;
  puStack_40 = auStack_10;
  iStack_3c = 2;
  uStack_38 = 2;
  FUN_00159184();
  puStack_40 = puStack_34;
  iStack_3c = iStack_30;
  uStack_38 = 0;
  FUN_001575d0();
  if (iStack_28 == 0) {
    puStack_14 = puStack_34;
    iStack_1c = iStack_30;
    iVar2 = 0;
    while (iVar2 < iStack_1c) {
      puStack_40 = *(undefined1 **)(puStack_14 + iVar2 * 8);
      iStack_3c = *(int *)(puStack_14 + iVar2 * 8 + 4);
      iStack_18 = iVar2;
      FUN_00127c60();
      iVar2 = iStack_18 + 1;
    }
    puStack_40 = (undefined1 *)0x24;
    iStack_3c = 0;
    uStack_38 = 0;
    puStack_34 = (undefined1 *)0x0;
    FUN_000f65f0();
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00664a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000020 = iStack_28;
  in_stack_00000024 = uStack_24;
                    /* WARNING: Could not recover jumptable at 0x006649b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.ReportUIWorkStatus @ 00664a3c (size 1008) */

/* WARNING: Removing unreachable block (ram,0x00664d58) */

void printerApi_controller_printer_PrinterController_ReportUIWorkStatus(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int extraout_r1;
  undefined4 *extraout_r2;
  undefined *extraout_r2_00;
  undefined1 *puVar7;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar8;
  int in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack_74;
  undefined4 *puStack_68;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  undefined *puVar6;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x664e28;
    FUN_00096bb8();
  }
  if ((in_stack_00000014 != 0) && (in_stack_00000014 != 1)) {
    FUN_00098a20(0,&puStack_1c);
    puStack_1c = PTR_SUB_00664e30;
    puStack_18 = PTR_DAT_00664e34;
    FUN_0001cec0();
    puStack_14 = PTR_DAT_00664e38;
    puStack_c = PTR_SUB_00664e30;
    puStack_8 = PTR_DAT_00664e3c;
    printerApi_common_logger_Error();
    puVar1 = PTR_DAT_00664e40;
    FUN_0001eed8();
    puStack_4 = (undefined4 *)0x3;
    FUN_0008b6b8();
    FUN_0008e7bc();
    *puStack_68 = PTR_DAT_00664e38;
    puVar3 = puStack_68;
    if (*(int *)PTR_DAT_00664e4c != 0) {
      uVar2 = FUN_00098678(puStack_68[1]);
      *unaff_r8 = uVar2;
      puVar3 = extraout_r2;
    }
    puVar3[1] = PTR_DAT_00664e50;
    puVar6 = PTR_s_messagestreamsloki_go_symbol_all_00774847_0x219_00664e54;
    FUN_0008e7bc();
    *puStack_68 = PTR_SUB_00664e30;
    puVar3 = puStack_68;
    if (*(int *)PTR_DAT_00664e4c != 0) {
      uVar8 = FUN_00098678(puStack_68,puStack_68[1]);
      puVar3 = (undefined4 *)uVar8;
      *unaff_r8 = (int)((ulonglong)uVar8 >> 0x20);
    }
    puVar3[1] = PTR_DAT_00664e58;
    FUN_001707f4();
    puStack_4[1] = 7;
    puStack_4[2] = puStack_68;
    puVar3 = puStack_4;
    if (*(int *)PTR_DAT_00664e4c != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r2_00;
      unaff_r8[1] = *extraout_r3;
      puVar6 = extraout_r2_00;
      puVar3 = extraout_r3;
    }
    *puVar3 = puVar6;
    iVar4 = in_stack_00000018;
    if (*(int *)PTR_DAT_00664e4c != 0) {
      iVar4 = FUN_00098688();
      *unaff_r8 = extraout_r3_00;
      unaff_r8[1] = *(undefined4 *)(iVar4 + 0x1c);
      puVar3 = extraout_r3_00;
    }
    *(undefined4 **)(iVar4 + 0x1c) = puVar3;
    puStack_24 = (undefined *)0x0;
    puStack_20 = (undefined *)0x0;
    FUN_0001cec0();
    puStack_24 = PTR_DAT_00664e38;
    puStack_20 = puVar1;
    FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x00664c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  internal_runtime_atomic_Load();
  FUN_00098a18(0,&puStack_44,uStack_74);
  puStack_44 = PTR_SUB_00664e30;
  puStack_40 = PTR_DAT_00664e64;
  FUN_0001cec0();
  puStack_3c = PTR_DAT_00664e38;
  puStack_34 = PTR_SUB_00664e30;
  puStack_30 = PTR_DAT_00664e68;
  FUN_0001cec0();
  puStack_2c = PTR_DAT_00664e38;
  printerApi_common_logger_Debug();
  if (in_stack_00000014 == 1) {
    printerApi_cloud_ReportWorkBusyStatus();
    printerApi_common_logger_Debug();
  }
  else {
    printerApi_cloud_ReportWorkFreeStatus();
    printerApi_common_logger_Debug();
  }
  FUN_0001eed8();
  puVar1 = PTR_DAT_00664e84;
  puVar6 = PTR_DAT_00664e80;
  puVar7 = (undefined1 *)0x2;
  do {
    puVar5 = puVar6 + 1;
    *puVar7 = *puVar6;
    puVar6 = puVar5;
    puVar7 = puVar7 + 1;
  } while ((int)puVar5 <= (int)puVar1);
  *(undefined4 *)(in_stack_00000018 + 0x14) = 0x11;
  *(undefined4 *)(in_stack_00000018 + 0x18) = 0x11;
  iVar4 = in_stack_00000018;
  if (*(int *)PTR_DAT_00664e4c != 0) {
    FUN_00098688();
    *unaff_r8 = 2;
    unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0x10);
    iVar4 = extraout_r1;
  }
  *(undefined4 *)(iVar4 + 0x10) = 2;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
                    /* WARNING: Could not recover jumptable at 0x00664e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.syncFile @ 00664e88 (size 328) */

/* WARNING: Removing unreachable block (ram,0x00664ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_syncFile(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x664fcc;
    FUN_00096bb8();
  }
  if (in_stack_00000010 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00664fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar1 = in_stack_0000000c;
  iVar2 = in_stack_00000010;
  internal_filepathlite_Base();
  FUN_00098a28(0,&uStack_20,uStack_34,uStack_38,UNRECOVERED_JUMPTABLE_00,uVar1,iVar2);
  uStack_1c = in_stack_00000008;
  uStack_20 = in_stack_00000004;
  FUN_00159184();
  uVar1 = in_stack_0000000c;
  printerApi_controller_printer_copyFile();
  if (iStack_30 != 0) {
    FUN_00098a28(0,&uStack_10);
    FUN_0008a578();
    uStack_10 = _UNK_00664fd4;
    uStack_c = uVar1;
    if (iStack_30 == 0) {
      uStack_8 = 0;
    }
    else {
      uStack_8 = *(undefined4 *)(iStack_30 + 4);
    }
    printerApi_common_logger_Errorf();
  }
                    /* WARNING: Could not recover jumptable at 0x00664fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.copyFile @ 00664fdc (size 404) */

/* WARNING: Removing unreachable block (ram,0x0066509c) */

void printerApi_controller_printer_copyFile(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 uStack_3c;
  int iStack_38;
  undefined *apuStack_18 [2];
  undefined *apuStack_10 [2];
  undefined **ppuStack_8;
  undefined **ppuStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x665174;
    FUN_00096bb8();
  }
  ppuStack_8 = (undefined **)0x0;
  ppuStack_4 = (undefined **)0x0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  FUN_0012576c(0);
  if (iStack_38 == 0) {
    apuStack_10[0] = PTR_printerApi_controller_printer_copyFile_deferwrap1_0066517c;
    ppuStack_8 = apuStack_10;
    FUN_0012576c(uStack_3c);
    apuStack_18[0] = PTR_printerApi_controller_printer_copyFile_deferwrap2_00665180;
    ppuStack_4 = apuStack_18;
    FUN_000e40d4();
    (*(code *)*ppuStack_4)();
    (*(code *)*ppuStack_8)();
                    /* WARNING: Could not recover jumptable at 0x00665150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00665160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.copyFile.deferwrap2 @ 0066518c (size 96) */

void printerApi_controller_printer_copyFile_deferwrap2(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 auStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)auStack_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    auStack_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/controller/printer.copyFile.deferwrap1 @ 006651ec (size 96) */

void printerApi_controller_printer_copyFile_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 auStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)auStack_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    auStack_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/controller/printer.PrinterController.OpenLanPrint @ 0066524c (size 204) */

void printerApi_controller_printer_PrinterController_OpenLanPrint(void)

{
  int iVar1;
  int extraout_r1;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x665314;
    FUN_00096bb8();
  }
  printerApi_common_config_OpLanPrint();
  printerApi_cloud_Stop();
  if (*(int *)PTR_DAT_00665320 == 0) {
    FUN_0001eed8();
    iVar1 = 3;
    if (*(int *)PTR_DAT_00665328 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)PTR_DAT_00665320;
      iVar1 = extraout_r1;
    }
    *(int *)PTR_DAT_00665320 = iVar1;
    if (*(int *)PTR_DAT_00665328 != 0) {
      uVar2 = FUN_00098678(*(undefined4 *)(iVar1 + 0xc));
      iVar1 = (int)((ulonglong)uVar2 >> 0x20);
      *unaff_r8 = (int)uVar2;
    }
    *(undefined **)(iVar1 + 0xc) = PTR_DAT_0066532c;
  }
  printerApi_service_broker___MqttServer__StartMqttBroker();
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00665308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.CloseLanPrint @ 00665330 (size 200) */

void printerApi_controller_printer_PrinterController_CloseLanPrint(void)

{
  int iVar1;
  int extraout_r1;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6653f4;
    FUN_00096bb8();
  }
  printerApi_common_config_OpLanPrint();
  if (*(int *)PTR_DAT_00665400 == 0) {
    FUN_0001eed8();
    iVar1 = 5;
    if (*(int *)PTR_DAT_00665408 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)PTR_DAT_00665400;
      iVar1 = extraout_r1;
    }
    *(int *)PTR_DAT_00665400 = iVar1;
    if (*(int *)PTR_DAT_00665408 != 0) {
      uVar2 = FUN_00098678(*(undefined4 *)(iVar1 + 0xc));
      iVar1 = (int)((ulonglong)uVar2 >> 0x20);
      *unaff_r8 = (int)uVar2;
    }
    *(undefined **)(iVar1 + 0xc) = PTR_DAT_0066540c;
  }
  printerApi_service_broker___MqttServer__StopMqttBroker();
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x006653e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.QueryLanPrintStatus @ 00665410 (size 196) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_QueryLanPrintStatus(void)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  int extraout_r3;
  int iVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  uint uStack_24;
  uint *puStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6654d0;
    FUN_00096bb8();
  }
  printerApi_common_config_LanPrintIsOpen();
  FUN_0008b6b8();
  uVar1 = _UNK_006654dc;
  FUN_0008e7bc();
  *puStack_14 = uStack_24 & 0xff;
  FUN_001707f4();
  *(undefined4 *)(in_stack_0000001c + 0x14) = 4;
  *(uint **)(in_stack_0000001c + 0x18) = puStack_14;
  iVar2 = in_stack_0000001c;
  if (*_UNK_006654e0 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
    uVar1 = extraout_r2;
    iVar2 = extraout_r3;
  }
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x006654c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.SdcardResumePrint.func1 @ 006654e4 (size 76) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_SdcardResumePrint_func1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x66552c;
    FUN_00096bb8();
  }
  FUN_000953d0();
  printerApi_cloud___printerHandler__LastStop();
                    /* WARNING: Could not recover jumptable at 0x00665520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.QueryResumePrint.func1 @ 0066553c (size 76) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_printer_PrinterController_QueryResumePrint_func1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x665584;
    FUN_00096bb8();
  }
  FUN_000953d0();
  printerApi_cloud___printerHandler__LastStop();
                    /* WARNING: Could not recover jumptable at 0x00665578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/printer.PrinterController.StartPrint.func2 @ 00665594 (size 424) */

void printerApi_controller_printer_PrinterController_StartPrint_func2(void)

{
  int iVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined *puStack_18;
  int iStack_14;
  undefined *puStack_10;
  undefined *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x665738;
    FUN_00096bb8();
  }
  if (in_stack_00000010 == 0 && in_stack_0000000c == 0) {
                    /* WARNING: Could not recover jumptable at 0x006655cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_000869d0();
  iVar1 = in_stack_00000010;
  FUN_000869d0();
  FUN_00098a20(0,&puStack_18,
               (int)(longlong)
                    ((*(double *)PTR_DAT_00665740 * (double)CONCAT44(uStack_3c,uStack_40)) /
                    (double)CONCAT44(uStack_3c,uStack_40)));
  FUN_0001cec0();
  puStack_18 = PTR_DAT_00665744;
  iStack_14 = iVar1;
  FUN_000869d0();
  FUN_0008a4bc();
  puStack_10 = PTR_DAT_0066574c;
  FUN_000869d0();
  FUN_0008a4bc();
  puStack_8 = PTR_DAT_0066574c;
  printerApi_common_logger_Debugf();
  printerApi_service_localtask___UILocalTaskContext__UpdateProgress();
                    /* WARNING: Could not recover jumptable at 0x0066572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/printer.PrinterController.StartPrint.func4 @ 00665758 (size 120) */

void printerApi_controller_printer_PrinterController_StartPrint_func4(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar1;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (*(int *)(in_stack_00000004 + 0x20) != 0) {
    FUN_00017cc4();
    if (*DAT_006657d4 != 0) {
      uVar1 = FUN_00098678(in_stack_00000004,*(undefined4 *)(in_stack_00000004 + 0x20));
      in_stack_00000004 = (int)uVar1;
      *unaff_r8 = (int)((ulonglong)uVar1 >> 0x20);
    }
    *(undefined4 *)(in_stack_00000004 + 0x20) = 0;
  }
  return;
}



/* printerApi/controller/printer.(*PrinterController).CloseLanPrint @ 006657d8 (size 132) */

void printerApi_controller_printer___PrinterController__CloseLanPrint(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_CloseLanPrint();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x66583c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).EmergencyStop @ 0066585c (size 132) */

void printerApi_controller_printer___PrinterController__EmergencyStop(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_EmergencyStop();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006658ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6658c0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).GetMachineCode @ 006658e0 (size 132) */

void printerApi_controller_printer___PrinterController__GetMachineCode(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_GetMachineCode();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665944;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).MachineReset @ 00665964 (size 132) */

void printerApi_controller_printer___PrinterController__MachineReset(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_MachineReset();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006659b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6659c8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).OpenLanPrint @ 006659e8 (size 132) */

void printerApi_controller_printer___PrinterController__OpenLanPrint(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_OpenLanPrint();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665a4c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).PausePrint @ 00665a6c (size 132) */

void printerApi_controller_printer___PrinterController__PausePrint(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_PausePrint();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665ad0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).QueryLanPrintStatus @ 00665af0 (size 132) */

void printerApi_controller_printer___PrinterController__QueryLanPrintStatus(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_QueryLanPrintStatus();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665b54;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).QueryResumePrint @ 00665b74 (size 132) */

void printerApi_controller_printer___PrinterController__QueryResumePrint(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_QueryResumePrint();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665bd8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).ReportUIWorkStatus @ 00665bf8 (size 132) */

void printerApi_controller_printer___PrinterController__ReportUIWorkStatus(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x20);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e14(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        printerApi_controller_printer_PrinterController_ReportUIWorkStatus();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665c5c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).Restart @ 00665c7c (size 132) */

void printerApi_controller_printer___PrinterController__Restart(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_Restart();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665ce0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).RestartFirmware @ 00665d00 (size 132) */

void printerApi_controller_printer___PrinterController__RestartFirmware(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_RestartFirmware();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665d64;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).ResumePrint @ 00665d84 (size 132) */

void printerApi_controller_printer___PrinterController__ResumePrint(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_ResumePrint();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665de8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).SdcardResumePrint @ 00665e08 (size 132) */

void printerApi_controller_printer___PrinterController__SdcardResumePrint(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x20);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e14(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        printerApi_controller_printer_PrinterController_SdcardResumePrint();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665e6c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).SetAutoLeveling @ 00665e8c (size 132) */

void printerApi_controller_printer___PrinterController__SetAutoLeveling(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_SetAutoLeveling();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665ef0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).SetExtruDiameter @ 00665f10 (size 132) */

void printerApi_controller_printer___PrinterController__SetExtruDiameter(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_SetExtruDiameter();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665f74;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).SetFlowCali @ 00665f94 (size 132) */

void printerApi_controller_printer___PrinterController__SetFlowCali(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_SetFlowCali();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00665fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x665ff8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).SetPrevAutoLevel @ 00666018 (size 132) */

void printerApi_controller_printer___PrinterController__SetPrevAutoLevel(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_SetPrevAutoLevel();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00666068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x66607c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).SetPrevResonance @ 0066609c (size 132) */

void printerApi_controller_printer___PrinterController__SetPrevResonance(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_SetPrevResonance();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006660ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x666100;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).SetPrintAcc @ 00666120 (size 132) */

void printerApi_controller_printer___PrinterController__SetPrintAcc(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_SetPrintAcc();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00666170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x666184;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).SetPrintSpeed @ 006661a4 (size 132) */

void printerApi_controller_printer___PrinterController__SetPrintSpeed(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_SetPrintSpeed();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006661f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x666208;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).SetVelocityLimit @ 00666228 (size 132) */

void printerApi_controller_printer___PrinterController__SetVelocityLimit(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x20);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e14(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        printerApi_controller_printer_PrinterController_SetVelocityLimit();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00666278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x66628c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).StartPrint @ 006662ac (size 132) */

void printerApi_controller_printer___PrinterController__StartPrint(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_StartPrint();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006662fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x666310;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).StopPrint @ 00666330 (size 132) */

void printerApi_controller_printer___PrinterController__StopPrint(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_StopPrint();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00666380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x666394;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/printer.(*PrinterController).SyncLog @ 006663b4 (size 132) */

void printerApi_controller_printer___PrinterController__SyncLog(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_printer_PrinterController_SyncLog();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00666404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x666418;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



