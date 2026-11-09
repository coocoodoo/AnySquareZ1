// ld-uClibc-1.0.31.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _FINI_0 @ 000110d0 size=100 ===== */

void _FINI_0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = DAT_00011134;
  for (uVar3 = 0; uVar3 < *(uint *)(iVar1 + 0x110f0); uVar3 = uVar3 + 1) {
    piVar2 = *(int **)(*(int *)(iVar1 + 0x110ec) + uVar3 * 4);
    if ((*(ushort *)((int)piVar2 + 0x4e) & 8) == 0) {
      *(ushort *)((int)piVar2 + 0x4e) = *(ushort *)((int)piVar2 + 0x4e) | 8;
      _dl_run_fini_array(piVar2);
      if (piVar2[0x28] != 0) {
        (*(code *)(piVar2[0x28] + *piVar2))();
      }
    }
  }
  return;
}



/* ===== _start @ 00011138 size=68 ===== */

void processEntry _start(undefined4 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0001584c();
  iVar2 = *(int *)(DAT_0001117c + 0x11150 + DAT_00011180);
  iVar1 = param_2 - iVar2;
  (&param_2)[iVar2] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x00011178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(DAT_0001117c + 0x11150 + DAT_00011184),iVar1,
             &stack0x00000004 + iVar2 * 4,&stack0x00000004 + iVar2 * 4 + iVar1 * 4 + 4);
  return;
}



/* ===== __GI__dl_initial_error_catch_tsd @ 00011188 size=20 ===== */

int __GI__dl_initial_error_catch_tsd(void)

{
  return DAT_0001119c + 0x11198;
}



/* ===== FUN_000111a0 @ 000111a0 size=60 ===== */

undefined4 FUN_000111a0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((char)param_3[1] != '\0') {
    if ((char)param_3[1] == '\x16') {
      iVar1 = *param_1;
      *(int *)(iVar1 + *param_3) = *(int *)(iVar1 + *param_3) + iVar1;
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== _dl_debug_state @ 000111dc size=12 ===== */

void _dl_debug_state(void)

{
  return;
}



/* ===== FUN_000111e8 @ 000111e8 size=92 ===== */

int FUN_000111e8(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 0x5c);
  uVar1 = *(ushort *)(param_2 + 0x4e);
  piVar3 = param_1 + 1;
  *param_1 = param_2;
  *(ushort *)(param_2 + 0x4e) = uVar1 | 0x20;
  for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    if ((*(ushort *)(piVar4[1] + 0x4e) & 0x20) == 0) {
      iVar2 = FUN_000111e8(piVar3);
      piVar3 = piVar3 + iVar2;
    }
  }
  return (int)piVar3 - (int)param_1 >> 2;
}



/* ===== FUN_00011244 @ 00011244 size=156 ===== */

int * FUN_00011244(int *param_1,int param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if ((param_1[1] != 0) || ((*(byte *)(param_1 + 3) & 0xf) == 6)) {
    if (*(short *)((int)param_1 + 0xe) == 0) {
      param_4 = param_4 & 1;
    }
    else {
      param_4 = 0;
    }
    if (param_4 == 0) {
      uVar4 = *(byte *)(param_1 + 3) & 0xf;
      bVar7 = uVar4 != 5;
      bVar6 = uVar4 - 5 == 1;
      if (1 < uVar4 - 5) {
        bVar7 = 1 < uVar4;
        bVar6 = uVar4 == 2;
      }
      if (!bVar7 || bVar6) {
        pbVar2 = (byte *)(param_3 + -1);
        pbVar1 = (byte *)(param_2 + *param_1 + -1);
        do {
          pbVar1 = pbVar1 + 1;
          uVar5 = (uint)*pbVar1;
          pbVar2 = pbVar2 + 1;
          uVar4 = (uint)*pbVar2;
          if (uVar5 == 0) {
            iVar3 = -uVar4;
            goto LAB_000112bc;
          }
        } while (uVar5 == uVar4);
        iVar3 = uVar5 - uVar4;
LAB_000112bc:
        if (iVar3 != 0) {
          param_1 = (int *)0x0;
        }
        return param_1;
      }
    }
  }
  return (int *)0x0;
}



/* ===== FUN_000112e0 @ 000112e0 size=52 ===== */

undefined4 FUN_000112e0(void)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  software_interrupt(0);
  **(undefined4 **)(iRam0001130c + 0x112f4 + iRam00011310) = 0xffffffe2;
  UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(DAT_00011354 + 0x11324 + DAT_00011358);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00011340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(0xffffffe2);
  return uVar1;
}



/* ===== _dl_realloc @ 00011314 size=64 ===== */

undefined4 _dl_realloc(void)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(DAT_00011354 + 0x11324 + DAT_00011358);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00011340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



/* ===== _dl_next_tls_modid @ 0001135c size=176 ===== */

void _dl_next_tls_modid(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar3 = DAT_0001140c + 0x1136c;
  puVar7 = *(uint **)(iVar3 + DAT_00011410);
  uVar2 = *puVar7;
  if (**(char **)(iVar3 + DAT_00011414) != '\0') {
    uVar1 = **(int **)(iVar3 + DAT_00011418) + 1;
    if (uVar1 <= uVar2) {
      iVar6 = 0;
      puVar4 = (uint *)**(int **)(iVar3 + DAT_0001141c);
      do {
        while( true ) {
          uVar5 = *puVar4;
          if (uVar5 <= uVar1 - iVar6) break;
          if (puVar4[(uVar1 - iVar6) * 3 + 4] == 0) goto LAB_000113d8;
          uVar1 = uVar1 + 1;
        }
        puVar4 = (uint *)puVar4[1];
        iVar6 = iVar6 + uVar5;
      } while (puVar4 != (uint *)0x0);
LAB_000113d8:
      if (uVar1 <= uVar2) {
        return;
      }
    }
    **(char **)(iVar3 + DAT_00011414) = '\0';
  }
  *puVar7 = uVar2 + 1;
  return;
}



/* ===== _dl_determine_tlsoffset @ 00011420 size=292 ===== */

void _dl_determine_tlsoffset(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  iVar5 = DAT_00011544 + 0x1143c;
  uVar1 = 0;
  uVar9 = 0;
  uVar8 = 0x10;
  iVar10 = **(int **)(iVar5 + DAT_00011548);
  uVar4 = 8;
  do {
    iVar12 = *(int *)(iVar10 + 0x1c);
    if (iVar12 == 0) {
      **(uint **)(iVar5 + DAT_0001154c) = uVar4;
      **(uint **)(iVar5 + DAT_00011550) = uVar4 + 0x68f & 0xfffffff0;
      **(uint **)(iVar5 + DAT_00011554) = uVar8;
      return;
    }
    uVar11 = *(uint *)(iVar12 + 0x20);
    uVar7 = *(uint *)(iVar12 + 0x1c);
    uVar2 = -*(int *)(iVar12 + 0x24) & uVar11 - 1;
    if (uVar8 < uVar11) {
      uVar8 = uVar11;
    }
    if (uVar9 - uVar1 < uVar7) {
LAB_000114f8:
      uVar3 = -uVar11 & (uVar4 - 1) + uVar11;
      if (uVar3 - uVar4 < uVar2) {
        uVar3 = uVar3 + uVar11;
      }
      uVar11 = uVar3 - uVar2;
      *(uint *)(iVar12 + 0x28) = uVar11;
      bVar13 = uVar9 - uVar1 < uVar11 - uVar4;
      if (bVar13) {
        uVar1 = uVar4;
      }
      uVar4 = (uVar7 - uVar2) + uVar3;
      if (bVar13) {
        uVar9 = uVar11;
      }
    }
    else {
      uVar3 = (uVar1 - 1) + uVar11 & -uVar11;
      if (uVar3 - uVar1 < uVar2) {
        uVar3 = uVar3 + uVar11;
      }
      uVar6 = (uVar7 - uVar2) + uVar3;
      if (uVar9 < uVar6) goto LAB_000114f8;
      *(uint *)(iVar12 + 0x28) = uVar3 - uVar2;
      uVar1 = uVar6;
    }
    iVar10 = iVar10 + 0xc;
  } while( true );
}



/* ===== _dl_get_tls_static_info @ 00011558 size=52 ===== */

void _dl_get_tls_static_info(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001158c + 0x11568;
  *param_1 = **(undefined4 **)(iVar1 + DAT_00011590);
  *param_2 = **(undefined4 **)(iVar1 + DAT_00011594);
  return;
}



/* ===== _dl_allocate_tls_init @ 00011598 size=304 ===== */

void _dl_allocate_tls_init(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  uVar12 = 0;
  puVar13 = (uint *)*param_1;
  puVar6 = (uint *)**(int **)(DAT_000116c8 + 0x115a8 + DAT_000116cc);
  puVar3 = *(uint **)(DAT_000116c8 + 0x115a8 + DAT_000116d0);
  uVar11 = 0;
  while( true ) {
    uVar2 = (uint)(uVar11 == 0);
    puVar7 = puVar6 + uVar2 * 3;
    while( true ) {
      uVar1 = *puVar3;
      uVar4 = uVar11 + uVar2;
      if (*puVar6 <= uVar2) break;
      if (uVar1 < uVar4) goto LAB_000116bc;
      uVar1 = puVar7[4];
      if (uVar1 != 0) {
        iVar8 = *(int *)(uVar1 + 0x2c);
        if (uVar12 < puVar7[2]) {
          uVar12 = puVar7[2];
        }
        if (*(int *)(uVar1 + 0x28) == 0) {
          puVar13[iVar8 * 2] = 0xffffffff;
          *(undefined1 *)(puVar13 + iVar8 * 2 + 1) = 0;
        }
        else {
          puVar5 = (undefined1 *)((int)param_1 + *(int *)(uVar1 + 0x28));
          puVar13[iVar8 * 2] = (uint)puVar5;
          *(undefined1 *)(puVar13 + iVar8 * 2 + 1) = 1;
          iVar8 = *(int *)(uVar1 + 0x18);
          puVar9 = (undefined1 *)(*(int *)(uVar1 + 0x14) + -1);
          for (puVar10 = puVar5; puVar10 != puVar5 + iVar8; puVar10 = puVar10 + 1) {
            puVar9 = puVar9 + 1;
            *puVar10 = *puVar9;
          }
          iVar8 = *(int *)(uVar1 + 0x1c);
          for (puVar10 = puVar5 + *(int *)(uVar1 + 0x18); puVar5 + iVar8 != puVar10;
              puVar10 = puVar10 + 1) {
            *puVar10 = 0;
          }
        }
      }
      uVar2 = uVar2 + 1;
      puVar7 = puVar7 + 3;
    }
    if (uVar1 <= uVar4) break;
    puVar6 = (uint *)puVar6[1];
    uVar11 = uVar4;
  }
LAB_000116bc:
  *puVar13 = uVar12;
  return;
}



/* ===== _dl_run_init_array @ 000116d4 size=60 ===== */

void _dl_run_init_array(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1[0x34] == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1[0x34] + *param_1);
  puVar2 = (undefined4 *)((param_1[0x36] & 0xfffffffcU) + (int)puVar1);
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (*(code *)*puVar1)();
  }
  return;
}



/* ===== _dl_app_init_array @ 00011710 size=40 ===== */

void _dl_app_init_array(void)

{
  _dl_run_init_array(**(undefined4 **)(DAT_00011738 + 0x11720 + DAT_0001173c));
  return;
}



/* ===== _dl_run_fini_array @ 00011740 size=60 ===== */

void _dl_run_fini_array(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1[0x35] == 0) {
    return;
  }
  puVar2 = (undefined4 *)(param_1[0x35] + *param_1);
  puVar1 = (undefined4 *)((param_1[0x37] & 0xfffffffcU) + (int)puVar2);
  while (puVar2 != puVar1) {
    puVar1 = puVar1 + -1;
    (*(code *)*puVar1)();
  }
  return;
}



/* ===== _dl_app_fini_array @ 0001177c size=40 ===== */

void _dl_app_fini_array(void)

{
  _dl_run_fini_array(**(undefined4 **)(DAT_000117a4 + 0x1178c + DAT_000117a8));
  return;
}



/* ===== _dl_getenv @ 000117ac size=84 ===== */

char * _dl_getenv(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar5;
  char *pcVar4;
  
  puVar2 = (undefined4 *)(param_2 + -4);
LAB_000117bc:
  do {
    puVar2 = puVar2 + 1;
    if ((char *)*puVar2 == (char *)0x0) {
      return (char *)0x0;
    }
    pcVar5 = (char *)(param_1 + -1);
    pcVar4 = (char *)*puVar2;
    do {
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar4;
      if (cVar1 == '\0') goto LAB_000117bc;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar3;
    } while (cVar1 == *pcVar5);
    if ((cVar1 == '=') && (*pcVar5 == '\0')) {
      return pcVar3;
    }
  } while( true );
}



/* ===== _dl_unsetenv @ 00011800 size=124 ===== */

void _dl_unsetenv(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = *param_2;
  piVar3 = param_2;
  if (iVar4 == 0) {
    *param_2 = *param_2;
    return;
  }
  do {
    pcVar5 = (char *)(iVar4 + -1);
    pcVar6 = (char *)(param_1 + -1);
    do {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
      if (cVar1 == '\0') goto LAB_00011844;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == *pcVar6);
    if ((cVar1 != '=') || (piVar2 = param_2, *pcVar6 != '\0')) {
LAB_00011844:
      piVar2 = param_2 + 1;
      *param_2 = *piVar3;
    }
    piVar3 = piVar3 + 1;
    iVar4 = *piVar3;
    param_2 = piVar2;
    if (iVar4 == 0) {
      *piVar2 = *piVar3;
      return;
    }
  } while( true );
}



/* ===== _dl_free @ 0001187c size=60 ===== */

void _dl_free(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(DAT_000118b8 + 0x1188c + DAT_000118bc);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000118a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ===== _dl_deallocate_tls @ 000118c0 size=164 ===== */

void _dl_deallocate_tls(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = 0;
  iVar3 = DAT_00011964 + 0x118e8;
  while (uVar2 < *(uint *)(iVar1 + -8)) {
    uVar2 = uVar2 + 1;
    if ((*(char *)(iVar1 + 4 + uVar2 * 8) == '\0') && (*(int *)(iVar1 + uVar2 * 8) != -1)) {
      _dl_free();
    }
  }
  if (**(int **)(iVar3 + DAT_00011968) != iVar1) {
    _dl_free(iVar1 + -8);
  }
  if (param_2 == 0) {
    return;
  }
  iVar1 = **(int **)(iVar3 + DAT_0001196c);
  _dl_free((int)param_1 - (iVar1 + 0x48fU & -iVar1));
  return;
}



/* ===== _dl_find_hash @ 00011970 size=608 ===== */

int _dl_find_hash(int param_1,int *param_2,int *param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  if (((param_5 == (int *)0x0) || (iVar3 = *param_5, iVar3 == 0)) ||
     ((*(byte *)(iVar3 + 0xd) & 3) != 3)) {
    piVar13 = (int *)0x0;
    uVar14 = 0xffffffff;
    iVar3 = 0;
    for (; param_2 != (int *)0x0 && iVar3 == 0; param_2 = (int *)param_2[2]) {
      iVar12 = param_2[1];
      iVar15 = 0;
LAB_00011ad4:
      if (iVar15 != iVar12) {
        piVar13 = *(int **)(*param_2 + iVar15 * 4);
        uVar7 = (uint)(param_3 != (int *)0x0) & (piVar13[0x14] ^ 0x100U) >> 8 ^ 1;
        if (param_3 == piVar13) {
          uVar7 = 1;
        }
        if (uVar7 == 0) {
          for (puVar8 = (undefined4 *)param_3[0x18]; puVar8 != (undefined4 *)0x0;
              puVar8 = (undefined4 *)*puVar8) {
            if ((int *)puVar8[1] == piVar13) goto LAB_00011a04;
          }
        }
        else {
LAB_00011a04:
          if ((((param_4 & 2) == 0) || (piVar13[0xf] != 1)) && (uVar7 = piVar13[0x15], uVar7 != 0))
          {
            iVar9 = piVar13[0x21];
            if (uVar14 == 0xffffffff) {
              uVar14 = 0;
              pbVar5 = (byte *)(param_1 + -1);
              while( true ) {
                pbVar5 = pbVar5 + 1;
                if (*pbVar5 == 0) break;
                uVar14 = (uint)*pbVar5 + uVar14 * 0x10;
                uVar14 = uVar14 & 0xfffffff ^ uVar14 >> 0x18 & 0xf0;
              }
            }
            uVar10 = 0;
            for (uVar4 = uVar7; uVar6 = uVar14, -1 < (int)uVar4; uVar4 = uVar4 << 1) {
              uVar10 = uVar10 + 1;
            }
            do {
              uVar10 = uVar10 - 1;
              if ((uVar10 < 3) || (uVar4 = uVar7 << (uVar10 & 0xff), (int)uVar4 < 0))
              goto LAB_00011a6c;
              do {
                if (uVar6 < uVar4) break;
                uVar6 = uVar6 - uVar4;
                uVar1 = uVar4 * 2;
                uVar2 = uVar4 & 0x7fffffff;
                uVar4 = uVar1;
              } while (uVar7 <= uVar1 && uVar2 >> 0x1e == 0);
            } while( true );
          }
        }
        goto LAB_00011ad0;
      }
      iVar3 = 0;
LAB_00011ae4:
    }
    if (iVar3 == 0) {
      return 0;
    }
    param_3 = piVar13;
    if (param_5 == (int *)0x0) goto LAB_00011b90;
  }
  *param_5 = iVar3;
  param_5[1] = (int)param_3;
LAB_00011b90:
  if ((*(byte *)(iVar3 + 0xc) & 0xf) == 6) {
    return *(int *)(iVar3 + 4);
  }
  if (1 < (*(byte *)(iVar3 + 0xc) >> 4) - 1) {
    return 0;
  }
  return *param_3 + *(int *)(iVar3 + 4);
LAB_00011a6c:
  for (; uVar7 <= uVar6; uVar6 = uVar6 - uVar7) {
  }
  iVar11 = piVar13[0x20];
  for (iVar16 = *(int *)(piVar13[0x16] + uVar6 * 4); iVar16 != 0;
      iVar16 = *(int *)(piVar13[0x1a] + iVar16 * 4)) {
    iVar3 = FUN_00011244(iVar9 + iVar16 * 0x10,iVar11,param_1,param_4);
    if (iVar3 != 0) goto LAB_00011ae4;
  }
LAB_00011ad0:
  iVar15 = iVar15 + 1;
  goto LAB_00011ad4;
}



/* ===== _dl_dprintf @ 00011bd0 size=944 ===== */

/* WARNING: Removing unreachable block (ram,0x00011c34) */
/* WARNING: Removing unreachable block (ram,0x00011f60) */

void _dl_dprintf(uint param_1,char *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint *local_4c;
  char local_36 [6];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  local_8 = param_3;
  iVar13 = DAT_00011f80 + 0x11bf4;
  if (param_2 == (char *)0x0) {
    return;
  }
  piVar11 = *(int **)(iVar13 + DAT_00011f84);
  software_interrupt(0);
  piVar9 = (int *)(param_2 + -1);
  pcVar5 = (char *)0x0;
  while( true ) {
    do {
      piVar9 = (int *)((int)piVar9 + 1);
    } while (*(char *)piVar9 != '\0');
    if ((uint)((int)piVar9 - (int)param_2) < *piVar11 - 1U) break;
    software_interrupt(0);
    piVar9 = *(int **)(iVar13 + DAT_00011f88);
    if (0xfffff000 < param_1) {
      *piVar9 = -param_1;
    }
    software_interrupt(0);
    *piVar9 = -0x14;
  }
  pcVar6 = param_2;
  do {
    local_36[3] = *pcVar6;
    pcVar6[-(int)param_2] = local_36[3];
    pcVar6 = pcVar6 + 1;
  } while (local_36[3] != '\0');
  local_4c = &local_8;
  while (pcVar6 = pcVar5, pcVar5 != (char *)0x0) {
    do {
      pcVar7 = pcVar6;
      cVar8 = *pcVar7;
      pcVar6 = pcVar7 + 1;
    } while (cVar8 != '%' && cVar8 != '\0');
    pcVar5 = pcVar5 + -1;
    if (cVar8 != '%') goto LAB_00011f10;
    *pcVar7 = '\0';
    do {
      pcVar5 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    software_interrupt(0);
    if (0xfffff000 < param_1) {
      **(int **)(iVar13 + DAT_00011f88) = -param_1;
    }
    pcVar5 = pcVar7 + 2;
    bVar1 = pcVar7[1];
    if (bVar1 == 0x70) {
LAB_00011db8:
      uVar12 = *local_4c;
      pcVar6 = local_36 + 2;
      do {
        pcVar7 = pcVar6;
        cVar8 = (char)(uVar12 & 0xf);
        if ((uVar12 & 0xf) < 10) {
          cVar8 = cVar8 + '0';
        }
        else {
          cVar8 = cVar8 + 'W';
        }
        uVar12 = uVar12 >> 4;
        *pcVar7 = cVar8;
        pcVar6 = pcVar7 + -1;
      } while (uVar12 != 0);
      pcVar7[-1] = 'x';
      pcVar6 = pcVar7 + -3;
      pcVar7[-2] = '0';
      do {
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
LAB_00011e48:
      local_4c = local_4c + 1;
      puVar2 = local_4c;
    }
    else {
      puVar2 = local_4c;
      if (bVar1 < 0x71) {
        if ((bVar1 == 100) || (bVar1 == 0x69)) {
          uVar12 = *local_4c;
          pcVar6 = local_36 + 3;
          do {
            pcVar7 = pcVar6;
            uVar3 = 0x1b;
            uVar10 = uVar12;
            do {
              uVar4 = 10 << (uVar3 & 0xff);
              do {
                if (uVar10 < uVar4) break;
                uVar10 = uVar10 - uVar4;
                uVar4 = uVar4 * 2;
              } while (uVar4 - 10 < 0x7ffffff6);
              uVar3 = uVar3 - 1;
            } while (uVar3 != 2);
            for (; 9 < uVar10; uVar10 = uVar10 - 10) {
            }
            pcVar7[-1] = (char)uVar10 + '0';
            uVar12 = DAT_00011f9c * (uVar12 - uVar10 >> 1);
            pcVar6 = pcVar7 + -1;
          } while (uVar12 != 0);
          pcVar7 = pcVar7 + -2;
          do {
            pcVar7 = pcVar7 + 1;
          } while (*pcVar7 != '\0');
          goto LAB_00011e48;
        }
      }
      else if (bVar1 == 0x73) {
        puVar2 = local_4c + 1;
        if (*local_4c != 0) {
          pcVar6 = (char *)(*local_4c - 1);
          do {
            pcVar6 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          goto LAB_00011e48;
        }
      }
      else if (bVar1 == 0x78) goto LAB_00011db8;
    }
    local_4c = puVar2;
    software_interrupt(0);
    if (0xfffff000 < param_1) {
      **(int **)(iVar13 + DAT_00011f88) = -param_1;
    }
  }
LAB_00011f48:
  software_interrupt(0);
  return;
LAB_00011f10:
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  software_interrupt(0);
  if (0xfffff000 < param_1) {
    **(int **)(iVar13 + DAT_00011f88) = -param_1;
  }
  goto LAB_00011f48;
}



/* ===== _dl_nothread_init_static_tls @ 00011fa0 size=184 ===== */

void _dl_nothread_init_static_tls(int param_1)

{
  uint uVar1;
  uint extraout_r1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int extraout_r2;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  piVar3 = (int *)coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar1 = *(uint *)(param_1 + 0x2c);
  puVar6 = (undefined4 *)((int)piVar3 + *(int *)(param_1 + 0x28));
  iVar4 = *piVar3;
  iVar7 = DAT_00012058 + 0x11fd0;
  if (*(uint *)(iVar4 + -8) < uVar1) {
    _dl_dprintf(2,DAT_0001205c + 0x11fe4);
    software_interrupt(0);
    param_1 = -0x1e;
    puVar6 = *(undefined4 **)(iVar7 + DAT_00012060);
    *puVar6 = 0xffffffe2;
    uVar1 = extraout_r1;
    iVar4 = extraout_r2;
  }
  *(undefined4 **)(iVar4 + uVar1 * 8) = puVar6;
  *(undefined1 *)(iVar4 + uVar1 * 8 + 4) = 1;
  iVar4 = *(int *)(param_1 + 0x18);
  puVar5 = (undefined1 *)(*(int *)(param_1 + 0x14) + -1);
  for (puVar2 = puVar6; (undefined4 *)((int)puVar6 + iVar4) != puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1)) {
    puVar5 = puVar5 + 1;
    *(undefined1 *)puVar2 = *puVar5;
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  for (puVar5 = (undefined1 *)((int)puVar6 + *(int *)(param_1 + 0x18));
      puVar5 != (undefined1 *)((int)puVar6 + iVar4); puVar5 = puVar5 + 1) {
    *puVar5 = 0;
  }
  return;
}



/* ===== _dl_linux_resolver @ 00012064 size=180 ===== */

void _dl_linux_resolver(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_00012118 + 0x12094;
  iVar5 = *(int *)(param_1[0x32] + param_2 * 8);
  iVar4 = *param_1;
  iVar3 = param_1[0x20] +
          *(int *)(param_1[0x21] + (*(uint *)(param_1[0x32] + param_2 * 8 + 4) >> 8) * 0x10);
  puVar1 = (undefined4 *)_dl_find_hash(iVar3,**(int **)(iVar2 + DAT_0001211c) + 0x40,param_1,1,0);
  if (puVar1 == (undefined4 *)0x0) {
    _dl_dprintf(2,DAT_00012124 + 0x120e8,**(undefined4 **)(iVar2 + DAT_00012120),iVar3);
    iVar5 = 1;
    software_interrupt(0);
    puVar1 = *(undefined4 **)(iVar2 + DAT_00012128);
    *puVar1 = 0xffffffff;
  }
  *(undefined4 **)(iVar5 + iVar4) = puVar1;
  return;
}



/* ===== FUN_0001212c @ 0001212c size=300 ===== */

int FUN_0001212c(int param_1,undefined4 param_2,int param_3,uint param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = (param_4 & 0xfffffff8) + param_3;
  iVar2 = *(int *)(param_1 + 0x84);
  iVar8 = 0;
  iVar4 = DAT_00012258 + 0x12160;
  iVar10 = *(int *)(param_1 + 0x80);
  iVar5 = DAT_0001225c + 0x12170;
  iVar9 = DAT_00012260 + 0x12180;
  iVar6 = DAT_00012264 + 0x12188;
  for (; param_3 != iVar3; param_3 = param_3 + 8) {
    uVar7 = *(uint *)(param_3 + 4);
    iVar1 = (*param_5)(param_1,param_2,param_3,iVar2,iVar10);
    if (iVar1 != 0) {
      uVar7 = uVar7 >> 8;
      _dl_dprintf(2,iVar4,**(undefined4 **)(iVar9 + DAT_00012268));
      if (uVar7 != 0) {
        _dl_dprintf(2,iVar6,iVar10 + *(int *)(iVar2 + uVar7 * 0x10));
      }
      if (iVar1 < 0) {
        param_1 = 1;
        _dl_dprintf(2,DAT_0001226c + 0x12228,*(undefined1 *)(param_3 + 4));
        software_interrupt(0);
        **(int **)(iVar9 + DAT_00012270) = iVar1;
      }
      _dl_dprintf(2,iVar5);
      iVar8 = iVar8 + iVar1;
    }
  }
  return iVar8;
}



/* ===== _dl_parse_lazy_relocation_information @ 00012274 size=52 ===== */

void _dl_parse_lazy_relocation_information
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001212c(*param_1,0,param_2,param_3,DAT_000122a8 + 0x1228c);
  return;
}



/* ===== _dl_parse_relocation_information @ 000122ac size=40 ===== */

void _dl_parse_relocation_information(undefined4 *param_1)

{
  FUN_0001212c(*param_1);
  return;
}



/* ===== _dl_fixup @ 000122d8 size=328 ===== */

int _dl_fixup(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ushort uVar7;
  int iVar8;
  int *piVar9;
  
  if ((param_1[4] == 0) || (iVar8 = _dl_fixup(), iVar8 == 0)) {
    piVar6 = (int *)*param_1;
    if (piVar6[0x22] == 0) {
      iVar4 = piVar6[0x2c];
      if (iVar4 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = ~*(ushort *)((int)piVar6 + 0x4e) & 1;
      }
      iVar8 = 0;
      if (uVar7 != 0) {
        iVar8 = piVar6[0x3d];
        iVar5 = piVar6[0x2d];
        if (iVar8 != 0) {
          iVar1 = iVar8 * 8;
          iVar2 = *piVar6;
          iVar5 = iVar5 + iVar8 * -8;
          piVar9 = (int *)(iVar4 + -8);
          do {
            piVar9 = piVar9 + 2;
            iVar8 = iVar8 + -1;
            *(int *)(iVar2 + *piVar9) = *(int *)(iVar2 + *piVar9) + iVar2;
          } while (iVar8 != 0);
          iVar4 = iVar4 + iVar1;
        }
        iVar8 = _dl_parse_relocation_information(param_1,param_2,iVar4,iVar5);
        *(ushort *)((int)piVar6 + 0x4e) = *(ushort *)((int)piVar6 + 0x4e) | 1;
      }
      iVar4 = piVar6[0x32];
      if (piVar6[0x33] != 0) {
        param_3 = 2;
      }
      if ((iVar4 != 0) &&
         (((*(ushort *)((int)piVar6 + 0x4e) & 2) == 0 ||
          ((param_3 != 0 && ((param_3 & piVar6[0x14]) == 0)))))) {
        uVar3 = piVar6[0x14];
        piVar6[0x14] = param_3 | uVar3;
        if (((param_3 | uVar3) & 2) == 0) {
          _dl_parse_lazy_relocation_information(param_1,iVar4,piVar6[0x1d]);
        }
        else {
          iVar4 = _dl_parse_relocation_information(param_1,param_2,iVar4);
          iVar8 = iVar8 + iVar4;
        }
        *(ushort *)((int)piVar6 + 0x4e) = *(ushort *)((int)piVar6 + 0x4e) | 2;
      }
    }
    else {
      iVar8 = 1;
    }
  }
  return iVar8;
}



/* ===== _dl_malloc @ 00012420 size=284 ===== */

/* WARNING: Removing unreachable block (ram,0x000124b8) */
/* WARNING: Removing unreachable block (ram,0x000124e4) */

void _dl_malloc(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = DAT_00012550;
  UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(DAT_0001253c + 0x12438 + DAT_00012540);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001244c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (**(uint **)(DAT_0001253c + 0x12438 + DAT_00012544) <
      (uint)((*(int *)(DAT_00012548 + 0x12474) - *(int *)(DAT_00012548 + 0x12478)) + param_1)) {
    software_interrupt(0);
    *(undefined4 *)(DAT_00012550 + 0x124e8) = 0;
    *(undefined4 *)(iVar1 + 0x124ec) = 0;
  }
  *(uint *)(DAT_0001255c + 0x12534) = *(int *)(DAT_0001255c + 0x12534) + param_1 + 7U & 0xfffffff8;
  return;
}



/* ===== _dl_calloc @ 00012560 size=96 ===== */

void _dl_calloc(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(DAT_000125c0 + 0x12570 + DAT_000125c4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00012590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puVar1 = (undefined1 *)_dl_malloc(param_1 * param_2);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  puVar2 = puVar1 + param_1 * param_2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return;
}



/* ===== _dl_tls_setup @ 000125c8 size=104 ===== */

undefined4 _dl_tls_setup(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)_dl_calloc(1,0x308);
  iVar2 = DAT_00012630 + 0x125ec;
  **(undefined4 **)(iVar2 + DAT_00012634) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x40;
    **(undefined4 **)(iVar2 + DAT_00012638) = 1;
    **(undefined4 **)(iVar2 + DAT_0001263c) = 1;
    _dl_determine_tlsoffset();
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_00012640 @ 00012640 size=68 ===== */

int * FUN_00012640(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = **(int **)(DAT_00012684 + 0x12654 + DAT_00012688);
  piVar2 = (int *)_dl_calloc(iVar1 + 0x10,8);
  piVar3 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar1 + 0xe;
    *param_1 = (int)(piVar2 + 2);
    piVar3 = param_1;
  }
  return piVar3;
}



/* ===== _dl_update_slotinfo @ 0001268c size=588 ===== */

uint _dl_update_slotinfo(uint param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint local_30;
  
  puVar5 = (undefined4 *)coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar16 = DAT_000128d8 + 0x126ac;
  puVar8 = (uint *)*puVar5;
  puVar10 = (uint *)**(undefined4 **)(iVar16 + DAT_000128dc);
  uVar6 = param_1;
  for (puVar4 = puVar10; *puVar4 <= uVar6; puVar4 = (uint *)puVar4[1]) {
    uVar6 = uVar6 - *puVar4;
  }
  uVar6 = puVar4[uVar6 * 3 + 2];
  if (*puVar8 < uVar6) {
    iVar11 = 0;
    local_30 = 0;
    do {
      uVar15 = (uint)(iVar11 == 0);
      puVar4 = puVar10 + uVar15 * 3;
      for (; uVar3 = *puVar10, uVar15 < uVar3; uVar15 = uVar15 + 1) {
        if ((puVar4[2] <= uVar6) && (*puVar8 < puVar4[2])) {
          uVar3 = puVar4[4];
          if (uVar3 == 0) {
            if (((char)(puVar8 + (iVar11 + uVar15) * 2)[1] == '\0') &&
               (puVar8[(iVar11 + uVar15) * 2] != 0xffffffff)) {
              _dl_free();
              puVar8[(iVar11 + uVar15) * 2] = 0xffffffff;
            }
          }
          else {
            uVar12 = puVar8[-2];
            uVar17 = *(uint *)(uVar3 + 0x2c);
            if (uVar12 < uVar17) {
              iVar7 = **(int **)(iVar16 + DAT_000128e0) + 0xe;
              if ((uint *)**(undefined4 **)(iVar16 + DAT_000128e4) == puVar8) {
                piVar1 = (int *)_dl_malloc((**(int **)(iVar16 + DAT_000128e0) + 0x10) * 8);
                if (piVar1 == (int *)0x0) {
LAB_00012810:
                  piVar1 = (int *)FUN_000112e0();
                }
                puVar9 = (undefined1 *)((int)puVar8 + -9);
                for (piVar2 = piVar1; piVar1 + uVar12 * 2 != piVar2;
                    piVar2 = (int *)((int)piVar2 + 1)) {
                  puVar9 = puVar9 + 1;
                  *(undefined1 *)piVar2 = *puVar9;
                }
              }
              else {
                piVar1 = (int *)_dl_realloc(puVar8 + -2);
                if (piVar1 == (int *)0x0) goto LAB_00012810;
              }
              piVar2 = piVar1 + (uVar12 + 2) * 2;
              *piVar1 = iVar7;
              piVar13 = piVar2 + (iVar7 - uVar12) * 2;
              for (; piVar13 != piVar2; piVar2 = (int *)((int)piVar2 + 1)) {
                *(undefined1 *)piVar2 = 0;
              }
              puVar8 = (uint *)(piVar1 + 2);
              *puVar5 = puVar8;
            }
            puVar14 = puVar8 + uVar17 * 2;
            if (((char)puVar14[1] == '\0') && (puVar8[uVar17 * 2] != 0xffffffff)) {
              _dl_free();
            }
            *(undefined1 *)(puVar14 + 1) = 0;
            *puVar14 = 0xffffffff;
            if (param_1 == uVar17) {
              local_30 = uVar3;
            }
          }
        }
        puVar4 = puVar4 + 3;
      }
      puVar10 = (uint *)puVar10[1];
      iVar11 = iVar11 + uVar3;
    } while (puVar10 != (uint *)0x0);
    *puVar8 = uVar6;
  }
  else {
    local_30 = 0;
  }
  return local_30;
}



/* ===== _dl_try_allocate_static_tls @ 000128e8 size=208 ===== */

undefined4 _dl_try_allocate_static_tls(int param_1)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = DAT_000129b8 + 0x12900;
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 <= **(uint **)(iVar6 + DAT_000129bc)) {
    puVar2 = *(uint **)(iVar6 + DAT_000129c0);
    uVar4 = (*puVar2 - 1) + uVar3 & -uVar3;
    uVar3 = uVar4 + *(int *)(param_1 + 0x1c);
    if (uVar3 <= **(uint **)(iVar6 + DAT_000129c4)) {
      *(uint *)(param_1 + 0x28) = uVar4;
      uVar1 = *(ushort *)(param_1 + 0x4e);
      *puVar2 = uVar3;
      if ((uVar1 & 1) == 0) {
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
      }
      else {
        puVar5 = (undefined4 *)coproc_movefrom_User_R_Thread_and_Process_ID();
        if (*(int *)*puVar5 != **(int **)(iVar6 + DAT_000129c8)) {
          _dl_update_slotinfo(*(undefined4 *)(param_1 + 0x2c));
        }
        (*(code *)**(undefined4 **)(iVar6 + DAT_000129cc))(param_1);
      }
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== _dl_memalign @ 000129d0 size=132 ===== */

void _dl_memalign(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  
  UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(DAT_00012a54 + 0x129e0 + DAT_00012a58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000129ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar2 = 0;
  for (uVar3 = 0; uVar3 < param_1; uVar3 = 1 << uVar3) {
    uVar3 = uVar2 & 0xff;
    uVar2 = uVar2 + 1;
  }
  iVar1 = _dl_malloc(uVar3 - (*(int *)(DAT_00012a5c + 0x12a18) + param_2 & uVar3 - 1));
  if (iVar1 == 0) {
    return;
  }
  _dl_malloc(param_2);
  return;
}



/* ===== _dl_allocate_tls_storage @ 00012a60 size=148 ===== */

int _dl_allocate_tls_storage(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(DAT_00012af4 + 0x12a70 + DAT_00012af8);
  iVar1 = **(int **)(DAT_00012af4 + 0x12a70 + DAT_00012afc);
  iVar3 = (iVar1 + 0x48fU & -iVar1) + *piVar4;
  iVar1 = _dl_memalign(iVar1,iVar3);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1 + (iVar3 - *piVar4);
    for (puVar2 = (undefined1 *)(iVar3 + -0x490); puVar2 != (undefined1 *)(iVar3 + 8);
        puVar2 = puVar2 + 1) {
      *puVar2 = 0;
    }
    iVar3 = FUN_00012640();
    if (iVar3 == 0) {
      _dl_free(iVar1);
    }
  }
  return iVar3;
}



/* ===== _dl_allocate_tls @ 00012b00 size=40 ===== */

void _dl_allocate_tls(int param_1)

{
  if (param_1 == 0) {
    _dl_allocate_tls_storage();
  }
  else {
    FUN_00012640();
  }
  _dl_allocate_tls_init();
  return;
}



/* ===== init_tls @ 00012b28 size=260 ===== */

int * init_tls(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int extraout_r2;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  
  iVar6 = DAT_00012c2c + 0x12b40;
  iVar7 = **(int **)(iVar6 + DAT_00012c30);
  **(int **)(iVar6 + DAT_00012c34) = iVar7;
  piVar8 = *(int **)(iVar6 + DAT_00012c38);
  if (*piVar8 != 0) {
    return (int *)0x0;
  }
  iVar7 = iVar7 + 0x3f;
  piVar2 = (int *)_dl_calloc(iVar7 * 0xc + 8,1);
  iVar4 = 0xc;
  **(int **)(iVar6 + DAT_00012c3c) = (int)piVar2;
  iVar1 = DAT_00012c40;
  piVar3 = piVar2 + 2;
  *piVar2 = iVar7;
  piVar2[1] = 0;
  puVar5 = (undefined4 *)**(undefined4 **)(iVar6 + iVar1);
  iVar7 = 0;
  do {
    if (puVar5 == (undefined4 *)0x0) {
      _dl_determine_tlsoffset();
      uVar9 = _dl_allocate_tls_storage();
      piVar3 = (int *)((ulonglong)uVar9 >> 0x20);
      piVar2 = (int *)uVar9;
      iVar4 = extraout_r2;
      if (piVar2 != (int *)0x0) {
        iVar4 = *piVar2;
        *piVar8 = iVar4;
        software_interrupt(0);
        if (piVar2 < (int *)0xfffff001) {
          *(undefined1 *)((int)&DAT_00012c30 + DAT_00012c4c) = 1;
          return piVar2;
        }
      }
      piVar8 = (int *)0x1;
      software_interrupt(0);
      puVar5 = *(undefined4 **)(iVar6 + DAT_00012c44);
      *puVar5 = 0xffffffe2;
    }
    if (puVar5[7] != 0) {
      iVar7 = iVar7 + 1;
      *(undefined4 **)((int)piVar3 + iVar4 * iVar7 + 8) = puVar5;
    }
    puVar5 = (undefined4 *)puVar5[3];
  } while( true );
}



/* ===== FUN_00012c50 @ 00012c50 size=88 ===== */

void FUN_00012c50(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 extraout_r2;
  undefined1 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)_dl_malloc();
  if (puVar1 == (undefined4 *)0x0) {
    software_interrupt(0);
    puVar3 = *(undefined4 **)(DAT_00012ca8 + 0x12c6c + DAT_00012cac);
    *puVar3 = 0xffffffff;
    uVar2 = extraout_r2;
    do {
      puVar1 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = uVar2;
LAB_00012c9c:
      puVar3 = puVar1;
    } while (puVar1 != param_1);
    return;
  }
  param_1 = (undefined4 *)((int)puVar1 + (int)param_1);
  uVar2 = 0;
  goto LAB_00012c9c;
}



/* ===== _dl_allocate_static_tls @ 00012cb0 size=596 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dl_allocate_static_tls(void)

{
  uint uVar1;
  int iVar2;
  uint extraout_r1;
  int *extraout_r2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_r4;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint unaff_r8;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined4 *local_40;
  int iStack_3c;
  uint local_34;
  
  iVar2 = _dl_try_allocate_static_tls();
  local_34 = iRam00012cf8 + 77000;
  bVar14 = iVar2 == 0;
  if (bVar14) {
    return;
  }
  _dl_dprintf(2,iRam00012cfc + 0x12ce0);
  software_interrupt(0);
  puVar5 = *(undefined4 **)(local_34 + iRam00012d00);
  *puVar5 = 0xffffffe2;
  iVar2 = _DAT_ffffffe2;
  piVar3 = extraout_r2;
  if (bVar14) {
    local_34 = extraout_r1 & unaff_r8 >> 5;
    piVar3 = (int *)((int)extraout_r1 >> 0x1e & 0xffffffe2);
  }
  iVar8 = *piVar3;
  uVar7 = piVar3[1] & 0xff;
  uVar1 = (uint)piVar3[1] >> 8;
  iVar10 = DAT_00012f04 + 0x12d3c;
  puVar9 = puVar5 + uVar1 * 4;
  iVar11 = _DAT_ffffffe2 + iVar8;
  iStack_3c = 0;
  iVar4 = -0x1e;
  local_40 = puVar9;
  if (uVar1 == 0) {
    iVar6 = puVar9[1];
  }
  else if (*(byte *)(puVar9 + 3) >> 4 == 0) {
    iVar6 = _DAT_ffffffe2 + puVar9[1];
  }
  else {
    uVar12 = uVar7 - 0x11;
    bVar14 = 0x15 < uVar7;
    bVar15 = uVar7 == 0x16;
    if (!bVar15) {
      bVar14 = 1 < uVar12;
    }
    bVar16 = uVar12 == 2;
    if (!bVar14 || (bVar15 || bVar16)) {
      uVar12 = 1;
    }
    if (bVar14 && (!bVar15 && !bVar16)) {
      uVar12 = 0;
    }
    if (uVar7 == 0x14) {
      uVar13 = 2;
    }
    else {
      uVar13 = 0;
    }
    iVar6 = _dl_find_hash(unaff_r4 + puVar5[uVar1 * 4],extraout_r1,0xffffffe2,uVar12 | uVar13,
                          &local_40);
    iVar4 = iStack_3c;
    if (((iVar6 == 0) && ((*(byte *)(puVar9 + 3) & 0xf) != 6)) && (*(byte *)(puVar9 + 3) >> 4 != 2))
    {
      uVar7 = 1;
      goto LAB_00012e90;
    }
  }
  switch(uVar7) {
  case 0:
    goto LAB_00012e90;
  case 1:
    _dl_dprintf(2,DAT_00012f08 + 0x12e50);
    software_interrupt(0);
    **(undefined4 **)(iVar10 + DAT_00012f0c) = 0xffffffff;
    goto LAB_00012e6c;
  case 2:
    goto LAB_00012eb8;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    iVar6 = *(int *)(iVar4 + 0x2c);
    goto LAB_00012eb0;
  case 0x12:
LAB_00012eb8:
    iVar4 = *(int *)(iVar2 + iVar8);
    goto LAB_00012e74;
  case 0x13:
    if (*(int *)(iVar4 + 0x28) == 0) {
      _dl_allocate_static_tls(iVar4);
    }
    iVar4 = *(int *)(iVar4 + 0x28);
    iVar6 = iVar6 + *(int *)(iVar2 + iVar8);
    goto LAB_00012e74;
  case 0x14:
    iVar2 = puVar9[2];
    for (iVar4 = 0; iVar2 != iVar4; iVar4 = iVar4 + 1) {
      *(undefined1 *)(iVar11 + iVar4) = *(undefined1 *)(iVar6 + iVar4);
    }
    goto LAB_00012e8c;
  case 0x15:
    goto LAB_00012eb0;
  case 0x16:
    goto LAB_00012eb0;
  case 0x17:
LAB_00012e6c:
    iVar6 = *(int *)(iVar2 + iVar8);
    iVar4 = _DAT_ffffffe2;
LAB_00012e74:
    iVar6 = iVar6 + iVar4;
LAB_00012eb0:
    *(int *)(iVar2 + iVar8) = iVar6;
LAB_00012e8c:
    uVar7 = 0;
    goto LAB_00012e90;
  }
  uVar7 = 0xffffffff;
LAB_00012e90:
                    /* WARNING: Could not recover jumptable at 0x00012e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x12ce0)(uVar7);
  return;
}



/* ===== _dl_add_to_slotinfo @ 00012f10 size=236 ===== */

void _dl_add_to_slotinfo(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = DAT_00012ffc + 0x12f2c;
  uVar7 = *(uint *)(param_1 + 0x2c);
  puVar5 = (uint *)**(undefined4 **)(iVar6 + DAT_00013000);
LAB_00012f34:
  do {
    puVar2 = puVar5;
    if (uVar7 < *puVar2) goto LAB_00012fc4;
    puVar5 = (uint *)puVar2[1];
    uVar7 = uVar7 - *puVar2;
  } while (puVar5 != (uint *)0x0);
  puVar1 = (uint *)_dl_malloc(0x2f0);
  puVar2[1] = (uint)puVar1;
  if (puVar1 == (uint *)0x0) {
    uVar7 = 1;
    iVar3 = DAT_00013008 + 0x12f80;
    **(int **)(iVar6 + DAT_00013004) = **(int **)(iVar6 + DAT_00013004) + 1;
    _dl_dprintf(2,iVar3);
    software_interrupt(0);
    **(undefined4 **)(iVar6 + DAT_0001300c) = 0xffffff81;
    goto LAB_00012f34;
  }
  *puVar1 = 0x3e;
  puVar1[1] = 0;
  for (puVar5 = puVar1 + 2; puVar2 = puVar1, puVar1 + 0xbc != puVar5;
      puVar5 = (uint *)((int)puVar5 + 1)) {
    *(undefined1 *)puVar5 = 0;
  }
LAB_00012fc4:
  iVar3 = DAT_00013004;
  puVar2[uVar7 * 3 + 4] = param_1;
  puVar5 = *(uint **)(iVar6 + iVar3);
  uVar4 = *puVar5 + 1;
  puVar2[uVar7 * 3 + 2] = uVar4;
  *puVar5 = uVar4;
  return;
}



/* ===== __tls_get_addr @ 00013010 size=332 ===== */

undefined1 * __tls_get_addr(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  undefined4 *puVar4;
  undefined4 *extraout_r2;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  
  puVar10 = (undefined4 *)coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar9 = DAT_0001315c + 0x13030;
  piVar8 = (int *)*puVar10;
  if (*piVar8 == **(int **)(iVar9 + DAT_00013160)) {
    iVar7 = 0;
  }
  else {
    iVar7 = _dl_update_slotinfo(*param_1);
    piVar8 = (int *)*puVar10;
  }
  puVar10 = (undefined4 *)*param_1;
  puVar2 = (undefined1 *)piVar8[(int)puVar10 * 2];
  iVar1 = (int)puVar10 * 2;
  if (puVar2 == (undefined1 *)0xffffffff) {
    if (iVar7 != 0) goto LAB_00013098;
    puVar4 = (undefined4 *)**(undefined4 **)(iVar9 + DAT_00013164);
    do {
      puVar3 = (undefined4 *)*puVar4;
      if (puVar10 < puVar3) {
        iVar7 = puVar4[(int)puVar10 * 3 + 4];
LAB_00013098:
        puVar2 = (undefined1 *)
                 _dl_memalign(*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar7 + 0x1c));
        if (puVar2 != (undefined1 *)0x0) goto LAB_000130f0;
        _dl_dprintf(2,DAT_0001316c + 0x130c8,DAT_00013168 + 0x130c4,0x2a6);
        param_1 = (int *)0x1;
        software_interrupt(0);
        puVar10 = *(undefined4 **)(iVar9 + DAT_00013170);
        *puVar10 = 0xffffffff;
        puVar3 = extraout_r1;
        puVar4 = extraout_r2;
      }
      puVar10 = (undefined4 *)((int)puVar10 - (int)puVar3);
      puVar4 = (undefined4 *)puVar4[1];
    } while( true );
  }
LAB_0001313c:
  return puVar2 + param_1[1];
LAB_000130f0:
  iVar9 = *(int *)(iVar7 + 0x18);
  puVar5 = (undefined1 *)(*(int *)(iVar7 + 0x14) + -1);
  for (puVar6 = puVar2; puVar2 + iVar9 != puVar6; puVar6 = puVar6 + 1) {
    puVar5 = puVar5 + 1;
    *puVar6 = *puVar5;
  }
  iVar9 = *(int *)(iVar7 + 0x1c);
  for (puVar6 = puVar2 + *(int *)(iVar7 + 0x18); puVar6 != puVar2 + iVar9; puVar6 = puVar6 + 1) {
    *puVar6 = 0;
  }
  iVar9 = *param_1;
  piVar8[iVar1] = (int)puVar2;
  *(undefined1 *)(piVar8 + iVar9 * 2 + 1) = 0;
  goto LAB_0001313c;
}



/* ===== _dl_protect_relro @ 00013174 size=172 ===== */

void _dl_protect_relro(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *extraout_r12;
  
  iVar2 = DAT_00013220 + 0x13190;
  uVar1 = -**(int **)(iVar2 + DAT_00013224) & *param_1 + param_1[0x40];
  if (uVar1 != (*param_1 + param_1[0x40] + param_1[0x41] & -**(int **)(iVar2 + DAT_00013224))) {
    software_interrupt(0);
    if (uVar1 < 0xfffff001) goto LAB_00013214;
    **(int **)(iVar2 + DAT_00013228) = -uVar1;
    do {
      _dl_dprintf(2,DAT_0001322c + 0x131fc,param_1[1]);
      software_interrupt(0);
      uVar1 = 0;
      **(undefined4 **)(iVar2 + DAT_00013228) = 0;
      param_1 = extraout_r12;
LAB_00013214:
    } while ((int)uVar1 < 0);
    return;
  }
  return;
}



/* ===== _dl_strdup @ 00013230 size=64 ===== */

void _dl_strdup(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + -1);
  pcVar3 = pcVar4;
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  iVar2 = _dl_malloc(pcVar3 + (1 - param_1));
  pcVar3 = (char *)(iVar2 + -1);
  do {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar3 = pcVar3 + 1;
    *pcVar3 = cVar1;
  } while (cVar1 != '\0');
  return;
}



/* ===== FUN_00013270 @ 00013270 size=160 ===== */

/* WARNING: Removing unreachable block (ram,0x000132d8) */
/* WARNING: Removing unreachable block (ram,0x000132e0) */
/* WARNING: Removing unreachable block (ram,0x000132ec) */

void FUN_00013270(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00013310 + 0x13298;
  software_interrupt(0);
  **(undefined4 **)(iVar1 + DAT_00013318) = 100;
  if (param_1 != 0) {
    **(int **)(iVar1 + DAT_0001331c) = param_1;
  }
  return;
}



/* ===== _dl_add_elf_hash_table @ 00013320 size=240 ===== */

undefined4 *
_dl_add_elf_hash_table(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar1 = (undefined4 *)_dl_malloc(0x118);
  iVar7 = DAT_00013410 + 0x13350;
  for (puVar6 = puVar1; puVar6 != puVar1 + 0x46; puVar6 = (undefined4 *)((int)puVar6 + 1)) {
    *(undefined1 *)puVar6 = 0;
  }
  piVar3 = *(int **)(iVar7 + DAT_00013414);
  iVar7 = *piVar3;
  if (iVar7 == 0) {
    *piVar3 = (int)puVar1;
  }
  else {
    do {
      iVar4 = iVar7;
      iVar7 = *(int *)(iVar4 + 0xc);
    } while (*(int *)(iVar4 + 0xc) != 0);
    *(undefined4 **)(iVar4 + 0xc) = puVar1;
    puVar1[4] = iVar4;
  }
  puVar1[3] = 0;
  *(undefined2 *)((int)puVar1 + 0x4e) = 0;
  uVar2 = _dl_strdup(param_1);
  piVar3 = *(int **)(param_3 + 0x10);
  puVar1[0xf] = 3;
  puVar1[1] = uVar2;
  puVar1[2] = param_4;
  if (piVar3 != (int *)0x0) {
    iVar7 = *piVar3;
    puVar1[0x15] = iVar7;
    iVar4 = piVar3[1];
    puVar1[0x16] = piVar3 + 2;
    puVar1[0x1a] = piVar3 + 2 + iVar7;
    puVar1[0x19] = iVar4;
  }
  puVar5 = (undefined4 *)(param_3 + -4);
  *puVar1 = param_2;
  puVar6 = puVar1 + 0x1b;
  do {
    puVar5 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar6 = puVar6 + 1;
  } while (puVar5 != (undefined4 *)(param_3 + 0x88));
  return puVar1;
}



/* ===== FUN_00013418 @ 00013418 size=276 ===== */

int FUN_00013418(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_68;
  undefined4 local_64;
  
  iVar6 = *(int *)(param_3 + 0x3c);
  iVar7 = DAT_0001352c + 0x13448;
  iVar5 = param_2 + *(int *)(iVar6 + 0x1c);
  iVar1 = _dl_add_elf_hash_table(param_1[1],*param_1,param_1 + 0x1b,param_1[2],0);
  *(int *)(iVar1 + 0x38) = param_2;
  uVar2 = *(uint *)(iVar1 + 4);
  software_interrupt(0);
  if (uVar2 < 0xfffff001) {
    if (-1 < (int)uVar2) {
      *(undefined4 *)(iVar1 + 0x10c) = 0;
      *(undefined4 *)(iVar1 + 0x108) = local_68;
      *(undefined4 *)(iVar1 + 0x110) = local_64;
    }
  }
  else {
    **(int **)(iVar7 + DAT_00013530) = -uVar2;
  }
  iVar7 = DAT_00013534;
  uVar2 = (uint)*(ushort *)(iVar6 + 0x2c);
  iVar6 = 0;
  *(int *)(iVar1 + 0xfc) = iVar5;
  *(uint *)(iVar1 + 0xf8) = uVar2;
  do {
    iVar4 = iVar5 + iVar6 * 0x20;
    if ((int)uVar2 <= iVar6) {
LAB_000134c4:
      *(undefined4 *)(iVar1 + 0x3c) = 2;
      if (param_4 == 0) {
        piVar3 = (int *)FUN_00012c50(0x18);
      }
      else {
        piVar3 = (int *)FUN_00012c50(0x18);
        *(int **)(param_4 + 0x10) = piVar3;
        piVar3[5] = param_4;
      }
      *piVar3 = iVar1;
      *(undefined4 *)(iVar1 + 0x50) = 0x102;
      return iVar1;
    }
    if (*(int *)(iVar5 + iVar6 * 0x20) == iVar7) {
      *(undefined4 *)(iVar1 + 0x100) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(iVar1 + 0x104) = *(undefined4 *)(iVar4 + 0x14);
      goto LAB_000134c4;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}



/* ===== _dl_parse_dynamic_info @ 00013538 size=320 ===== */

undefined4 _dl_parse_dynamic_info(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          piVar1 = param_1;
          param_1 = piVar1 + 2;
          iVar3 = *piVar1;
          if (iVar3 == 0) {
            if (param_4 == 0) {
              return uVar2;
            }
            if (*(int *)(param_2 + 0x10) != 0) {
              *(int *)(param_2 + 0x10) = param_4 + *(int *)(param_2 + 0x10);
            }
            if (*(int *)(param_2 + 0xc) != 0) {
              *(int *)(param_2 + 0xc) = param_4 + *(int *)(param_2 + 0xc);
            }
            if (*(int *)(param_2 + 0x14) != 0) {
              *(int *)(param_2 + 0x14) = param_4 + *(int *)(param_2 + 0x14);
            }
            if (*(int *)(param_2 + 0x18) != 0) {
              *(int *)(param_2 + 0x18) = param_4 + *(int *)(param_2 + 0x18);
            }
            if (*(int *)(param_2 + 0x44) != 0) {
              *(int *)(param_2 + 0x44) = param_4 + *(int *)(param_2 + 0x44);
            }
            if (*(int *)(param_2 + 0x5c) != 0) {
              *(int *)(param_2 + 0x5c) = param_4 + *(int *)(param_2 + 0x5c);
            }
            return uVar2;
          }
          if (iVar3 < 0x22) break;
          if (iVar3 < 0x70000000) {
            if (iVar3 == 0x6ffffffa) {
              *(int *)(param_2 + 0x88) = piVar1[1];
            }
            else if (iVar3 == 0x6ffffffb) {
              uVar4 = piVar1[1];
              if ((uVar4 & 1) != 0) {
                *(undefined4 *)(param_2 + 0x60) = 1;
              }
              if ((uVar4 & 8) != 0) {
                uVar2 = 0x1000;
              }
            }
          }
        }
        *(int *)(param_2 + iVar3 * 4) = piVar1[1];
        if (iVar3 != 0x15) break;
        piVar1[1] = param_3;
      }
      if (iVar3 != 0x18) break;
LAB_000135f0:
      *(undefined4 *)(param_2 + 0x60) = 1;
    }
    if (iVar3 == 0x1e) {
      if ((piVar1[1] & 8U) != 0) goto LAB_000135f0;
    }
    else if (iVar3 == 0x16) {
      *(undefined4 *)(param_2 + 0x58) = 1;
    }
    else if ((iVar3 == 0x1d) || ((iVar3 == 0xf && (*(int *)(param_2 + 0x74) != 0)))) {
      *(undefined4 *)(param_2 + 0x3c) = 0;
    }
  } while( true );
}



/* ===== _dl_load_elf_shared_library @ 00013678 size=2780 ===== */

/* WARNING: Removing unreachable block (ram,0x00013e44) */
/* WARNING: Removing unreachable block (ram,0x00013ec0) */
/* WARNING: Removing unreachable block (ram,0x00013c3c) */
/* WARNING: Removing unreachable block (ram,0x000137ec) */
/* WARNING: Removing unreachable block (ram,0x00013844) */

int * _dl_load_elf_shared_library(uint param_1,int *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  bool bVar20;
  int local_128;
  int local_124;
  int local_120;
  int *local_110;
  int local_10c;
  int local_f4;
  int local_f0;
  ushort local_ec;
  undefined1 auStack_b4 [12];
  int local_a8;
  int local_5c;
  
  iVar16 = DAT_00014154 + 0x136a0;
  software_interrupt(0);
  if (0xfffff000 < param_3) {
    **(int **)(iVar16 + DAT_00014158) = -param_3;
LAB_000136c8:
    **(undefined4 **)(iVar16 + DAT_0001415c) = 1;
    return (int *)0x0;
  }
  if ((int)param_3 < 0) goto LAB_000136c8;
  software_interrupt(0);
  if (0xfffff000 < param_3) {
    **(int **)(iVar16 + DAT_00014158) = -param_3;
LAB_00013714:
    **(undefined4 **)(iVar16 + DAT_0001415c) = 1;
    software_interrupt(0);
    if (param_3 < 0xfffff001) {
      return (int *)0x0;
    }
    **(int **)(iVar16 + DAT_00014158) = -param_3;
    return (int *)0x0;
  }
  if ((int)param_3 < 0) goto LAB_00013714;
  if (((param_1 & 0x4000000) == 0) || (piVar14 = (int *)(local_ec & 0x800), (local_ec & 0x800) != 0)
     ) {
    for (piVar14 = (int *)**(undefined4 **)(iVar16 + DAT_00014160); piVar14 != (int *)0x0;
        piVar14 = (int *)piVar14[3]) {
      if ((piVar14[0x43] == 0 && piVar14[0x42] == local_f4) && (piVar14[0x44] == local_f0)) {
        *(short *)(piVar14 + 0x13) = (short)piVar14[0x13] + 1;
        *(ushort *)((int)piVar14 + 0x4e) = *(ushort *)((int)piVar14 + 0x4e) | 0x10;
        software_interrupt(0);
        goto LAB_00013894;
      }
    }
    if ((param_1 & 4) != 0) goto LAB_0001376c;
    piVar8 = *(int **)(iVar16 + DAT_00014164);
    software_interrupt(0);
    software_interrupt(0);
    if (0xfffff000 < param_3) {
      **(int **)(iVar16 + DAT_00014158) = -param_3;
    }
    if (iRam00000000 == DAT_00014170) {
      if (iRam00000010 == DAT_00014178) {
        uVar15 = 0;
        bVar1 = true;
        uVar13 = 0xffffffff;
        iVar3 = DAT_00014180 + 0x139e4;
        local_110 = (int *)0x0;
        local_10c = 0;
        piVar12 = piRam0000001c;
        for (iVar17 = 0; piVar19 = piRam0000001c, iVar17 < (int)(uint)uRam0000002c;
            iVar17 = iVar17 + 1) {
          if (*piVar12 == 2) {
            if (local_10c != 0) {
              _dl_dprintf(2,iVar3,**(undefined4 **)(iVar16 + DAT_0001416c),param_3);
            }
            local_10c = piVar12[2];
          }
          piVar19 = local_110;
          if (*piVar12 == 1) {
            uVar9 = piVar12[2];
            if ((uVar13 == 0xffffffff) && (0x1000000 < uVar9)) {
              bVar1 = false;
              uVar13 = uVar9;
            }
            else if ((bVar1) && (uVar9 <= uVar13)) {
              uVar13 = uVar9;
            }
            if (uVar15 < uVar9 + piVar12[5]) {
              uVar15 = uVar9 + piVar12[5];
            }
LAB_00013b2c:
            local_110 = piVar19;
            piVar12 = piVar12 + 8;
          }
          else if ((*piVar12 != 7) || (piVar19 = piVar12, piVar12[5] != 0)) goto LAB_00013b2c;
        }
        uVar15 = -*piVar8 & uVar13;
        if (bVar1) {
          uVar15 = 0;
        }
        software_interrupt(0);
        if (uVar15 < 0xfffff001) {
          uVar9 = uVar15 - (-*piVar8 & uVar13);
          local_124 = 0;
          local_120 = 0;
          *(uint *)(DAT_00014188 + 0x13b94) = uVar9;
          iVar17 = DAT_00014190;
          iVar3 = DAT_0001418c;
          uVar13 = uVar15;
          if (!bVar1) {
            uVar13 = 0;
          }
          local_128 = 0;
          for (; local_120 < (int)(uint)uRam0000002c; local_120 = local_120 + 1) {
            if (*piVar19 == DAT_00014198) {
              local_128 = piVar19[2];
              local_124 = piVar19[5];
            }
            else if (*piVar19 == 1) {
              uVar2 = -*piVar8;
              uVar18 = piVar19[2] & uVar2;
              if ((piVar19[6] & 2U) == 0) {
                uVar10 = uVar15;
                if (!bVar1) {
                  uVar10 = *(uint *)(iVar3 + 0x13bbc);
                }
                if ((uVar2 & piVar19[1] & 0xfff) == 0) {
                  uVar10 = uVar10 + uVar18;
                  software_interrupt(0);
                  if (uVar10 < 0xfffff001) goto LAB_00013c74;
LAB_00013e28:
                  **(int **)(iVar16 + DAT_00014158) = -uVar10;
                }
              }
              else {
                uVar10 = uVar15;
                if (!bVar1) {
                  uVar10 = *(uint *)(iVar17 + 0x13bc8);
                }
                if ((uVar2 & piVar19[1] & 0xfff) == 0) {
                  uVar18 = uVar18 + uVar10;
                  software_interrupt(0);
                  if (uVar18 < 0xfffff001) {
                    puVar7 = (undefined1 *)(uVar18 + (*piVar8 - 1U & piVar19[2]) + piVar19[4]);
                    iVar5 = piVar19[4] + piVar19[2];
                    uVar2 = piVar19[5] - piVar19[4];
                    uVar10 = *piVar8 + -1 + iVar5 & -*piVar8;
                    uVar6 = uVar10 - iVar5;
                    if (uVar6 < uVar2) {
                      puVar11 = puVar7 + uVar6;
                    }
                    else {
                      puVar11 = puVar7 + uVar2;
                    }
                    for (; puVar7 != puVar11; puVar7 = puVar7 + 1) {
                      *puVar7 = 0;
                    }
                    if (uVar10 < (uint)(piVar19[2] + piVar19[5])) {
                      uVar10 = uVar13 + uVar10;
                      software_interrupt(0);
                      if (0xfffff000 < uVar10) goto LAB_00013e28;
                    }
                    if (uVar18 != 0) goto LAB_00013c74;
                  }
                  else {
                    **(int **)(iVar16 + DAT_00014158) = -uVar18;
                  }
                }
              }
              software_interrupt(0);
              if (0xfffff000 < uVar9) {
                **(int **)(iVar16 + DAT_00014158) = -uVar9;
              }
              goto LAB_00013a64;
            }
LAB_00013c74:
            piVar19 = piVar19 + 8;
          }
          if (bVar1) {
            local_10c = local_10c + uVar9;
          }
          if (local_10c != 0) {
            iVar3 = 0x8c;
            puVar7 = auStack_b4;
            while (bVar20 = iVar3 != 0, iVar3 = iVar3 + -1, bVar20) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            uVar13 = _dl_parse_dynamic_info(local_10c,auStack_b4,0,uVar9);
            iVar3 = DAT_000141a0;
            if (local_5c != 0) {
              uVar2 = uVar13;
              piVar14 = piRam0000001c;
              for (iVar17 = 0; iVar17 < (int)(uint)uRam0000002c; iVar17 = iVar17 + 1) {
                if ((*piVar14 == 1) && ((piVar14[6] & 2U) == 0)) {
                  if (!bVar1) {
                    uVar2 = *(uint *)(iVar3 + 0x140dc);
                  }
                  if (bVar1) {
                    uVar2 = uVar15;
                  }
                  uVar2 = (-*piVar8 & piVar14[2]) + uVar2;
                  software_interrupt(0);
                  if (0xfffff000 < uVar2) {
                    uVar2 = -uVar2;
                    **(uint **)(iVar16 + DAT_00014158) = uVar2;
                  }
                }
                piVar14 = piVar14 + 8;
              }
            }
            software_interrupt(0);
            if (0xfffff000 < param_3) {
              **(int **)(iVar16 + DAT_00014158) = -param_3;
            }
            piVar14 = (int *)_dl_add_elf_hash_table(param_3,uVar9,auStack_b4,local_10c,0);
            piVar14[0xe] = uVar15;
            piVar14[0x43] = 0;
            piVar14[0x40] = local_128;
            piVar14[0x41] = local_124;
            piVar14[0x42] = local_f4;
            piVar14[0x44] = local_f0;
            piVar14[0x3f] = (int)piRam0000001c + uVar15;
            piVar14[0x3e] = (uint)uRam0000002c;
            piVar14[0x14] = param_1 | uVar13;
            if (local_110 != (int *)0x0) {
              piVar14[7] = local_110[5];
              uVar15 = local_110[2];
              iVar3 = local_110[7];
              piVar14[8] = iVar3;
              uVar13 = 0;
              if (iVar3 != 0) {
                uVar13 = iVar3 - 1U & uVar15;
              }
              piVar14[9] = uVar13;
              iVar3 = local_110[4];
              piVar14[5] = uVar15;
              piVar14[6] = iVar3;
              iVar3 = _dl_next_tls_modid();
              piVar14[0xb] = iVar3;
              if (piVar14[5] != 0) {
                piVar14[5] = *piVar14 + local_110[2];
              }
            }
            iVar3 = *param_2;
            if (iVar3 != 0) {
              uVar4 = _dl_malloc(0x18);
              *(undefined4 *)(iVar3 + 0x10) = uVar4;
              puVar11 = *(undefined1 **)(*param_2 + 0x10);
              puVar7 = puVar11 + 0x18;
              for (; puVar11 != puVar7; puVar11 = puVar11 + 1) {
                *puVar11 = 0;
              }
              iVar3 = *(int *)(*param_2 + 0x10);
              *(int *)(iVar3 + 0x14) = *param_2;
              *param_2 = iVar3;
            }
            *(int **)*param_2 = piVar14;
            iVar3 = piVar14[0x13];
            *(short *)(piVar14 + 0x13) = (short)iVar3 + 1;
            if ((piVar14[0x14] & 0x1000U) != 0) {
              *(short *)(piVar14 + 0x13) = (short)iVar3 + 2;
            }
            piVar14[0xf] = 0;
            if (local_a8 != 0) {
              uVar4 = *(undefined4 *)(iVar16 + DAT_0001419c);
              *(int **)(local_a8 + 4) = piVar14;
              *(undefined4 *)(local_a8 + 8) = uVar4;
            }
            software_interrupt(0);
            param_3 = 0;
LAB_00013894:
            if (param_3 < 0xfffff001) {
              return piVar14;
            }
            goto LAB_00013958;
          }
          iVar3 = DAT_00014194 + 0x13c10;
          **(undefined4 **)(iVar16 + DAT_0001415c) = 7;
          _dl_dprintf(2,iVar3,**(undefined4 **)(iVar16 + DAT_0001416c),param_3);
          software_interrupt(0);
          goto LAB_0001376c;
        }
        **(int **)(iVar16 + DAT_00014158) = -uVar15;
LAB_00013a64:
        _dl_dprintf(2,DAT_00014184 + 0x13a80,**(undefined4 **)(iVar16 + DAT_0001416c),0x2a8,param_3)
        ;
        **(undefined4 **)(iVar16 + DAT_0001415c) = 6;
      }
      else {
        iVar3 = DAT_0001417c + 0x13998;
        if ((short)iRam00000010 == 3) {
          uVar4 = 4;
        }
        else {
          uVar4 = 5;
        }
        **(undefined4 **)(iVar16 + DAT_0001415c) = uVar4;
        _dl_dprintf(2,iVar3,**(undefined4 **)(iVar16 + DAT_0001416c),param_3);
      }
    }
    else {
      _dl_dprintf(2,DAT_00014174 + 0x13900,**(undefined4 **)(iVar16 + DAT_0001416c),param_3);
      **(undefined4 **)(iVar16 + DAT_0001415c) = 3;
    }
    software_interrupt(0);
    if (0xfffff000 < param_3) {
      **(int **)(iVar16 + DAT_00014158) = -param_3;
    }
    software_interrupt(0);
    param_3 = 0;
  }
  else {
LAB_0001376c:
    software_interrupt(0);
  }
  if (param_3 < 0xfffff001) {
    return (int *)0x0;
  }
LAB_00013958:
  **(int **)(iVar16 + DAT_00014158) = -param_3;
  return piVar14;
}



/* ===== FUN_000141a4 @ 000141a4 size=564 ===== */

int FUN_000141a4(int param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined1 auStack_840 [6];
  char acStack_83a [2058];
  undefined4 local_30;
  int local_2c;
  int iVar6;
  
  local_2c = param_1;
  local_30 = param_4;
  if (param_3 != 0) {
    pcVar9 = acStack_83a + 1;
    iVar3 = param_3;
LAB_000141ec:
    do {
      pcVar7 = (char *)(param_3 + 1);
      if (*pcVar7 == ':') {
        iVar8 = (param_3 + 1) - iVar3;
        param_3 = param_3 + 2;
      }
      else {
        param_3 = param_3 + 1;
        if (*pcVar7 != '\0') goto LAB_000141ec;
        pcVar7 = (char *)(iVar3 + -1);
        do {
          pcVar7 = pcVar7 + 1;
        } while (*pcVar7 != '\0');
        iVar8 = (int)pcVar7 - iVar3;
        param_3 = 0;
      }
      if (iVar8 < 7) {
        if (iVar8 == 0) {
          pcVar4 = acStack_83a + 1;
          pcVar7 = (char *)(DAT_000143e0 + 0x143ac);
          do {
            cVar1 = *pcVar7;
            pcVar4 = pcVar4 + 1;
            *pcVar4 = cVar1;
            pcVar7 = pcVar7 + 1;
            pcVar2 = pcVar9;
          } while (cVar1 != '\0');
        }
        else {
LAB_00014378:
          pcVar4 = (char *)(iVar3 + -1);
          pcVar7 = acStack_83a + 2;
          do {
            pcVar4 = pcVar4 + 1;
            pcVar2 = pcVar7 + 1;
            *pcVar7 = *pcVar4;
            pcVar7 = pcVar2;
          } while (acStack_83a + iVar8 + 2 != pcVar2);
          acStack_83a[iVar8 + 2] = '\0';
          pcVar2 = pcVar9;
        }
LAB_000142ec:
        do {
          pcVar7 = pcVar2;
          pcVar2 = pcVar7 + 1;
        } while (pcVar7[1] != '\0');
        pcVar4 = (char *)(DAT_000143dc + 0x14308);
        do {
          cVar1 = *pcVar4;
          pcVar7 = pcVar7 + 1;
          *pcVar7 = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = (char *)(local_2c + -1);
        pcVar7 = pcVar9;
        do {
          pcVar2 = pcVar7;
          pcVar7 = pcVar2 + 1;
        } while (pcVar2[1] != '\0');
        do {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar2 = pcVar2 + 1;
          *pcVar2 = cVar1;
        } while (cVar1 != '\0');
        if ((acStack_83a[2] == '/') &&
           (iVar3 = _dl_load_elf_shared_library(param_2,local_30,acStack_83a + 2), iVar3 != 0)) {
          return iVar3;
        }
      }
      else {
        pcVar4 = (char *)(iVar3 + -1);
        pcVar7 = (char *)(DAT_000143d8 + 0x14238);
        do {
          pcVar4 = pcVar4 + 1;
          if (*pcVar4 != *pcVar7) goto LAB_00014378;
          pcVar7 = pcVar7 + 1;
        } while (pcVar4 != (char *)(iVar3 + 6));
        if ((((uint)(iVar8 != 7) & param_2 >> 0x1a) == 0) && (param_5 != 0)) {
          pcVar4 = (char *)(param_5 + -1);
          pcVar7 = pcVar4;
          do {
            pcVar7 = pcVar7 + 1;
          } while (*pcVar7 != '\0');
          iVar5 = (int)pcVar7 - param_5;
          do {
            iVar6 = iVar5;
            iVar5 = iVar6 + -1;
            if (iVar5 < 0) goto LAB_0001425c;
          } while (*(char *)(param_5 + iVar5) != '/');
          if (iVar5 != 0) {
            pcVar7 = acStack_83a + 2;
            do {
              pcVar4 = pcVar4 + 1;
              pcVar2 = pcVar7 + 1;
              *pcVar7 = *pcVar4;
              pcVar7 = pcVar2;
            } while (pcVar2 != acStack_83a + iVar6 + 1);
            pcVar7 = acStack_83a + iVar6;
            for (pcVar4 = (char *)(iVar3 + 7); (char *)(iVar3 + iVar8) != pcVar4;
                pcVar4 = pcVar4 + 1) {
              pcVar7 = pcVar7 + 1;
              *pcVar7 = *pcVar4;
            }
            auStack_840[iVar5 + iVar8 + 1] = 0;
            pcVar2 = pcVar9;
            goto LAB_000142ec;
          }
        }
      }
LAB_0001425c:
      iVar3 = param_3;
    } while (param_3 != 0);
  }
  return 0;
}



/* ===== _dl_load_shared_library @ 000143e4 size=632 ===== */

int _dl_load_shared_library(undefined4 param_1,undefined4 param_2,int param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar4 = DAT_0001465c + 0x14400;
  pcVar7 = param_4 + -1;
  piVar5 = *(int **)(iVar4 + DAT_00014660);
  *piVar5 = 0;
  pcVar6 = pcVar7;
  do {
    pcVar6 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  pcVar2 = (char *)0x0;
  if ((uint)((int)pcVar6 - (int)param_4) < 0x401) {
    while( true ) {
      pcVar7 = pcVar7 + 1;
      if (*pcVar7 == '\0') break;
      if (*pcVar7 == '/') {
        pcVar2 = pcVar7;
      }
    }
    pcVar6 = param_4;
    if (((pcVar2 != (char *)0x0) && (pcVar6 = pcVar2 + 1, param_4 != pcVar6)) &&
       (iVar1 = _dl_load_elf_shared_library(param_1,param_2,param_4), iVar1 != 0)) {
      return iVar1;
    }
    if (((param_3 != 0) && (*(int *)(param_3 + 0xa8) != 0)) &&
       (iVar1 = FUN_000141a4(pcVar6,param_1,*(int *)(param_3 + 0xa8) + *(int *)(param_3 + 0x80),
                             param_2,*(undefined4 *)(param_3 + 4)), iVar1 != 0)) {
      return iVar1;
    }
    if ((**(int **)(iVar4 + DAT_00014668) != 0) &&
       (iVar1 = FUN_000141a4(pcVar6,param_1,**(int **)(iVar4 + DAT_00014668),param_2,0), iVar1 != 0)
       ) {
      return iVar1;
    }
    if (((param_3 != 0) && (*(int *)(param_3 + 0xe0) != 0)) &&
       (iVar1 = FUN_000141a4(pcVar6,param_1,*(int *)(param_3 + 0xe0) + *(int *)(param_3 + 0x80),
                             param_2,0), iVar1 != 0)) {
      return iVar1;
    }
    piVar3 = *(int **)(iVar4 + DAT_0001466c);
    iVar1 = *(int *)(*piVar3 + 0xa8);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_000141a4(pcVar6,param_1,iVar1 + *(int *)(*piVar3 + 0x80),param_2,0), iVar1 != 0)
       ) {
      return iVar1;
    }
    iVar1 = FUN_000141a4(pcVar6,param_1,**(undefined4 **)(iVar4 + DAT_00014670),param_2,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_000141a4(pcVar6,param_1,DAT_00014674 + 0x14510,param_2,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = *(int *)(*piVar3 + 0xe0);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_000141a4(pcVar6,param_1,iVar1 + *(int *)(*piVar3 + 0x80),param_2,0), iVar1 != 0)
       ) {
      return iVar1;
    }
    iVar1 = *(int *)(*piVar3 + 0xa8);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_000141a4(pcVar6,param_1,iVar1 + *(int *)(*piVar3 + 0x80),param_2,0), iVar1 != 0)
       ) {
      return iVar1;
    }
  }
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    **(int **)(iVar4 + DAT_00014664) = 1;
  }
  else {
    **(int **)(iVar4 + DAT_00014664) = iVar1;
  }
  return 0;
}



/* ===== _dl_get_ready_to_run @ 00014678 size=4312 ===== */

undefined4
_dl_get_ready_to_run
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint *extraout_r1;
  undefined4 uVar7;
  undefined4 extraout_r2;
  int iVar8;
  uint uVar9;
  undefined4 extraout_r2_00;
  byte *pbVar10;
  char *pcVar11;
  undefined4 extraout_r2_01;
  int *piVar12;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined1 *puVar24;
  int *piVar25;
  int iVar26;
  undefined4 *puVar27;
  int *piVar30;
  bool bVar31;
  undefined8 uVar32;
  int aiStack_198 [6];
  int *local_180;
  int local_17c;
  int *local_178;
  undefined4 *local_174;
  int *local_170;
  int *local_16c;
  int local_168;
  int local_164;
  uint local_160;
  undefined4 local_15c;
  int local_158;
  uint *local_154;
  int *local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  int local_140 [71];
  undefined4 *puVar28;
  int *piVar29;
  
  piVar30 = aiStack_198 + 4;
  piVar21 = local_140;
  uVar22 = 0x118;
  uVar7 = 0;
  iVar20 = DAT_00015650 + 0x146a8;
  piVar14 = piVar21;
  local_168 = param_1;
  local_15c = param_4;
  do {
    bVar31 = uVar22 == 0;
    uVar22 = uVar22 - 1;
    if (bVar31) {
      iVar13 = *(int *)(param_3 + 0x34);
      local_180 = *(int **)(iVar20 + DAT_00015654);
      if (iVar13 == 0) {
        iVar13 = 0x1000;
      }
      *local_180 = iVar13;
      iVar8 = DAT_00015658;
      *(int *)(DAT_00015658 + 0x146e8) = iVar13;
      *(undefined4 *)(iVar8 + 0x146ec) = 0;
      FUN_00013270(*param_5);
      if (*(int *)(param_3 + 0x4c) == *(int *)(iVar20 + DAT_0001565c)) {
        _dl_dprintf(2,DAT_00015660 + 0x14710);
        iVar13 = 1;
        uVar7 = extraout_r2;
      }
      else {
        local_150 = (int *)0x0;
        uVar22 = _dl_getenv(DAT_00015668 + 0x14744,local_15c);
        if (uVar22 == 0) {
          local_160 = 0;
        }
        else {
          local_160 = 2;
        }
        local_170 = *(int **)(iVar20 + DAT_0001566c);
        local_174 = *(undefined4 **)(iVar20 + DAT_00015670);
        if (*(int *)(param_3 + 0x5c) == -1) {
          software_interrupt(0);
          if (0xfffff000 < uVar22) {
            **(int **)(iVar20 + DAT_00015664) = -uVar22;
            uVar22 = 0xffffffff;
          }
          uVar9 = uVar22 & 0xffff;
          software_interrupt(0);
          if (0xfffff000 < uVar22) {
            **(int **)(iVar20 + DAT_00015664) = -uVar22;
            uVar22 = 0xffffffff;
          }
          uVar19 = uVar22 & 0xffff;
          software_interrupt(0);
          if (0xfffff000 < uVar22) {
            **(int **)(iVar20 + DAT_00015664) = -uVar22;
            uVar22 = 0xffffffff;
          }
          uVar15 = uVar22 & 0xffff;
          software_interrupt(0);
          if (0xfffff000 < uVar22) {
            **(int **)(iVar20 + DAT_00015664) = -uVar22;
            uVar22 = 0xffffffff;
          }
          if (uVar9 != uVar19 || (uVar22 & 0xffff) != uVar15) goto LAB_0001477c;
LAB_000148a8:
          iVar13 = DAT_00015680 + 0x148c0;
          *local_170 = 0;
          uVar7 = _dl_getenv(iVar13,local_15c);
          *local_174 = uVar7;
          uVar7 = _dl_getenv(DAT_00015684 + 0x148dc,local_15c);
          **(undefined4 **)(iVar20 + DAT_0001567c) = uVar7;
        }
        else {
LAB_0001477c:
          if (((*(int *)(param_3 + 0x5c) != -1) &&
              (*(int *)(param_3 + 0x5c) == *(int *)(param_3 + 100))) &&
             (*(int *)(param_3 + 0x6c) == *(int *)(param_3 + 0x74))) goto LAB_000148a8;
          iVar13 = DAT_00015674 + 0x147a0;
          *local_170 = 1;
          uVar7 = _dl_getenv(iVar13,local_15c);
          iVar13 = DAT_00015678 + 0x147b4;
          *local_174 = uVar7;
          do {
            _dl_unsetenv(iVar13,local_15c);
            iVar13 = iVar13 + -1;
            do {
              iVar8 = iVar13;
              iVar13 = iVar8 + 1;
            } while (*(char *)(iVar8 + 1) != '\0');
            iVar13 = iVar8 + 2;
          } while (*(char *)(iVar8 + 2) != '\0');
          **(undefined4 **)(iVar20 + DAT_0001567c) = 0;
          local_160 = 2;
        }
        iVar13 = *(int *)(param_3 + 0x2c);
        **(int **)(iVar20 + DAT_00015688) = DAT_0001568c + 0x14900;
        **(int **)(iVar20 + DAT_00015690) = DAT_00015694 + 0x14914;
        iVar8 = *(int *)(param_3 + 0x1c);
        for (iVar16 = 0; iVar13 != iVar16; iVar16 = iVar16 + 1) {
          if (*(int *)(iVar8 + iVar16 * 0x20) == 6) {
            local_140[0] = iVar8 - *(int *)(iVar8 + iVar16 * 0x20 + 8);
            break;
          }
        }
        iVar13 = 0;
        puVar2 = (undefined4 *)FUN_00012c50(0x14);
        local_158 = *(int *)(param_3 + 0x1c);
        local_17c = 0;
        local_154 = (uint *)0x0;
        local_164 = 0;
        while( true ) {
          local_16c = (int *)((int)local_154 * 0x20);
          iVar8 = (int)local_16c + local_158;
          if (*(uint *)(param_3 + 0x2c) <= local_154) break;
          iVar16 = *(int *)(local_158 + (int)local_154 * 0x20);
          if (iVar16 == DAT_00015698) {
            local_17c = *(int *)(iVar8 + 8);
            iVar13 = *(int *)(iVar8 + 0x14);
          }
          if ((local_164 == 0) && (iVar16 == 1)) {
            local_164 = *piVar21 + *(int *)(iVar8 + 8);
          }
          else if (iVar16 == 2) {
            local_178 = piVar21 + 0x1b;
            _dl_parse_dynamic_info(*piVar21 + *(int *)(iVar8 + 8),local_178,puVar2);
            if (piVar21[0x31] != 0) {
              iVar16 = *(int *)(param_3 + 0x1c);
              for (uVar22 = 0; iVar26 = iVar16 + uVar22 * 0x20, uVar22 < *(uint *)(param_3 + 0x2c);
                  uVar22 = uVar22 + 1) {
                if ((*(int *)(iVar16 + uVar22 * 0x20) == 1) && ((*(uint *)(iVar26 + 0x18) & 2) == 0)
                   ) {
                  uVar9 = -*local_180 & *(int *)(iVar26 + 8) + *piVar21;
                  software_interrupt(0);
                  if (0xfffff000 < uVar9) {
                    **(int **)(iVar20 + DAT_00015664) = -uVar9;
                  }
                }
              }
            }
            iVar16 = *piVar21;
            iVar26 = *(int *)(iVar8 + 8);
            puVar23 = *(undefined4 **)(iVar20 + DAT_000156dc);
            *piVar30 = *(undefined4 *)(iVar8 + 0x10);
            piVar21 = (int *)_dl_add_elf_hash_table(*puVar23,iVar16,local_178,iVar16 + iVar26);
            piVar14 = *(int **)(iVar20 + DAT_000156a8);
            iVar16 = *piVar14;
            *(undefined4 *)(iVar16 + 0x3c) = 1;
            *(undefined4 *)(iVar16 + 0xfc) = *(undefined4 *)(param_3 + 0x1c);
            *(undefined4 *)(iVar16 + 0xf8) = *(undefined4 *)(param_3 + 0x2c);
            local_150 = (int *)FUN_00012c50(0x18);
            iVar16 = *piVar14;
            **(undefined4 **)(iVar20 + DAT_000156e0) = local_150;
            *local_150 = iVar16;
            piVar21[0xe] = local_164;
            piVar21[0x14] = local_160 | 0x100;
            *(short *)(piVar21 + 0x13) = (short)piVar21[0x13] + 1;
            iVar26 = piVar21[0x1e];
            if (iVar26 != 0) {
              uVar7 = *(undefined4 *)(iVar20 + DAT_000156e4);
              *(int *)(iVar26 + 4) = iVar16;
              *(undefined4 *)(iVar26 + 8) = uVar7;
            }
          }
          if (*(int *)((int)local_16c + local_158) == 3) {
            *(int *)(local_168 + 4) = *piVar21 + *(int *)(iVar8 + 8);
            pcVar3 = (char *)_dl_strdup();
            pcVar5 = pcVar3 + -1;
            pcVar11 = (char *)0x0;
            while( true ) {
              pcVar5 = pcVar5 + 1;
              if (*pcVar5 == '\0') break;
              if (*pcVar5 == '/') {
                pcVar11 = pcVar5;
              }
            }
            if (pcVar11 == (char *)0x0) {
              pcVar11 = pcVar3;
            }
            *pcVar11 = '\0';
            **(undefined4 **)(iVar20 + DAT_0001569c) = pcVar3;
          }
          if (*(int *)((int)local_16c + local_158) == 7) {
            if (*(int *)(iVar8 + 0x14) != 0) {
              piVar21[7] = *(int *)(iVar8 + 0x14);
              iVar16 = *(int *)(iVar8 + 0x1c);
              uVar9 = *(uint *)(iVar8 + 8);
              piVar21[8] = iVar16;
              uVar22 = 0;
              if (iVar16 != 0) {
                uVar22 = iVar16 - 1U & uVar9;
              }
              piVar21[9] = uVar22;
              iVar8 = *(int *)(iVar8 + 0x10);
              piVar21[5] = uVar9;
              piVar21[6] = iVar8;
              piVar21[0xb] = 1;
              **(undefined4 **)(iVar20 + DAT_000156a0) = 1;
            }
            break;
          }
          local_154 = (uint *)((int)local_154 + 1);
        }
        piVar21[0x41] = iVar13;
        piVar21[0x40] = local_17c;
        if (piVar21[5] != 0) {
          piVar21[5] = piVar21[5] + *piVar21;
        }
        local_158 = _dl_getenv(DAT_000156a4 + 0x14a98,local_15c);
        local_178 = (int *)(uint)(local_158 != 0);
        local_164 = *(int *)(param_3 + 0x3c);
        local_154 = *(uint **)(iVar20 + DAT_000156a8);
        puVar2[1] = *local_154;
        *puVar2 = 1;
        puVar2[4] = local_164;
        puVar2[2] = DAT_000156ac + 0x14af8;
        local_16c = *(int **)(iVar20 + DAT_000156b0);
        *local_16c = (int)puVar2;
        pcVar11 = (char *)*local_174;
        if ((char *)*local_174 != (char *)0x0) {
          do {
            pcVar3 = pcVar11;
            cVar1 = *pcVar3;
            pcVar11 = pcVar3 + 1;
          } while (cVar1 == '\t' || (cVar1 == ' ' || cVar1 == ':'));
          iVar8 = DAT_000156e8 + 0x14ee8;
          iVar13 = DAT_000156ec + 0x14eec;
          local_174 = (undefined4 *)(DAT_000156f0 + 0x14ef0);
          while (pcVar11 = pcVar3, *pcVar3 != '\0') {
            do {
              pcVar5 = pcVar11;
              cVar1 = *pcVar5;
              if ((cVar1 == '\0' || cVar1 == ':') || (cVar1 == ' ')) break;
              pcVar11 = pcVar5 + 1;
            } while (cVar1 != '\t');
            *pcVar5 = '\0';
            uVar7 = 0;
            if (*local_170 != 0) {
              pcVar11 = pcVar3 + -1;
              do {
                pcVar11 = pcVar11 + 1;
                if (*pcVar11 == '/') goto LAB_00014f9c;
              } while (*pcVar11 != '\0');
              uVar7 = 0x4000000;
            }
            *piVar30 = (int)local_178;
            puVar23 = (undefined4 *)_dl_load_shared_library(uVar7,&local_150,0,pcVar3);
            puVar2 = local_174;
            if (puVar23 == (undefined4 *)0x0) {
              if (local_158 == 0) {
                _dl_dprintf(2,iVar8,**(undefined4 **)(iVar20 + DAT_000156dc),pcVar3);
              }
              else {
                _dl_dprintf(1,iVar13,pcVar3);
              }
            }
            else {
              puVar23[0x14] = local_160 | 0x100;
              if ((local_158 != 0) && ((*(ushort *)((int)puVar23 + 0x4e) & 0x10) == 0)) {
                pbVar18 = (byte *)(pcVar3 + -1);
                pbVar10 = (byte *)(**(int **)(iVar20 + DAT_000156dc) + -1);
                do {
                  pbVar10 = pbVar10 + 1;
                  uVar22 = (uint)*pbVar10;
                  pbVar18 = pbVar18 + 1;
                  uVar9 = (uint)*pbVar18;
                  if (uVar22 == 0) {
                    iVar16 = -uVar9;
                    goto LAB_00015038;
                  }
                } while (uVar22 == uVar9);
                iVar16 = uVar22 - uVar9;
LAB_00015038:
                if (iVar16 != 0) {
                  *piVar30 = *puVar23;
                  _dl_dprintf(1,puVar2,pcVar3,puVar23[1]);
                }
              }
            }
LAB_00014f9c:
            *pcVar5 = cVar1;
            do {
              pcVar3 = pcVar5;
              cVar1 = *pcVar3;
              pcVar5 = pcVar3 + 1;
            } while (cVar1 == '\t' || (cVar1 == ' ' || cVar1 == ':'));
          }
        }
        iVar8 = DAT_000156b8;
        iVar13 = DAT_000156b4;
        piVar21 = (int *)0x0;
        uVar22 = *local_154;
        *(undefined4 *)(DAT_000156b4 + 0x14b38) = 0;
        local_174 = (undefined4 *)(iVar8 + 0x14b3c);
        for (; iVar16 = DAT_000156f4, iVar8 = DAT_000156bc, uVar9 = *(uint *)(iVar13 + 0x14b38),
            uVar22 != 0; uVar22 = *(uint *)(uVar22 + 0xc)) {
          piVar14 = (int *)(*(int *)(uVar22 + 8) + 4);
          *(uint *)(iVar13 + 0x14b38) = uVar9 + 1;
          local_170 = (int *)(iVar16 + 0x1508c);
LAB_0001508c:
          if (piVar14[-1] != 0) {
            if (piVar14[-1] == 1) {
              pcVar3 = (char *)(*(int *)(uVar22 + 0x80) + *piVar14);
              pcVar11 = pcVar3 + -1;
              do {
                pcVar11 = pcVar11 + 1;
              } while (*pcVar11 != '\0');
              while (pcVar5 = pcVar11 + -1, pcVar3 != pcVar11) {
                if (pcVar11[-1] != '/') goto LAB_000150dc;
                *pcVar5 = '\0';
                pcVar11 = pcVar5;
              }
              goto LAB_00015100;
            }
            goto LAB_00015220;
          }
        }
        uVar22 = *local_154;
        bVar31 = *(int *)(uVar22 + 0x3c) == 1;
        if (bVar31) {
          *(uint *)(iVar13 + 0x14b38) = uVar9 - 1;
        }
        if (bVar31) {
          uVar22 = *(uint *)(uVar22 + 0xc);
        }
        iVar13 = _dl_malloc(*(int *)(iVar8 + 0x14b64) << 2);
        puVar17 = (uint *)(iVar13 + -4);
        *(int *)(iVar8 + 0x14b60) = iVar13;
        for (; uVar22 != 0; uVar22 = *(uint *)(uVar22 + 0xc)) {
          puVar17 = puVar17 + 1;
          *puVar17 = uVar22;
        }
        local_170 = *(int **)(DAT_000156c0 + 0x14ba8);
        for (iVar8 = *(int *)(*local_154 + 0xc); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0xc)) {
          piVar14 = (int *)0x0;
          do {
            piVar12 = piVar14;
            piVar14 = (int *)((int)piVar12 + 1);
          } while (*(int *)(iVar13 + (int)piVar12 * 4) != iVar8);
          for (; piVar14 < local_170; piVar14 = (int *)((int)piVar14 + 1)) {
            iVar16 = *(int *)(iVar13 + (int)piVar14 * 4);
            piVar25 = *(int **)(iVar16 + 0x5c);
            while( true ) {
              if (piVar25 == (int *)0x0) goto LAB_000152c4;
              if (piVar25[1] == iVar8) break;
              piVar25 = (int *)*piVar25;
            }
            iVar26 = (int)piVar12 * 4;
            for (puVar2 = (undefined4 *)(iVar13 + (int)piVar14 * 4);
                puVar2 != (undefined4 *)(iVar13 + iVar26); puVar2 = puVar2 + -1) {
              *puVar2 = puVar2[-1];
            }
            piVar12 = (int *)((int)piVar12 + 1);
            *(int *)(iVar13 + iVar26) = iVar16;
LAB_000152c4:
          }
        }
        if (piVar21 == (int *)0x0) {
          uVar9 = uVar9 + 1;
          piVar21 = (int *)FUN_00013418(local_168,local_164,param_3,local_150);
          *(short *)(piVar21 + 0x13) = (short)piVar21[0x13] + 1;
        }
        *(undefined2 *)((int)piVar21 + 0x4e) = 3;
        iVar13 = _dl_malloc(uVar9 << 2);
        *(int *)(DAT_000156c4 + 0x14c18) = iVar13;
        puVar17 = (uint *)(iVar13 + -4);
        for (uVar22 = *local_154; uVar22 != 0; uVar22 = *(uint *)(uVar22 + 0xc)) {
          puVar17 = puVar17 + 1;
          *puVar17 = uVar22;
        }
        uVar22 = *local_154;
        piVar21 = (int *)(uVar22 + 0x40);
        *piVar21 = iVar13;
        *(uint *)(uVar22 + 0x44) = uVar9;
        iVar13 = _dl_malloc(uVar9 << 2);
        local_164 = DAT_000156cc + 0x14c48;
        piVar14 = (int *)0x4;
        puVar2 = (undefined4 *)(DAT_000156c8 + 0x14c44);
        for (iVar8 = *(int *)(*local_154 + 0xc); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0xc)) {
          local_174 = puVar2;
          local_170 = piVar14;
          local_168 = FUN_000111e8(iVar13,*(undefined4 *)
                                           (*(int *)((int)puVar2 + 0x1c) + (int)piVar14));
          iVar16 = local_168 * 4;
          puVar4 = (undefined1 *)_dl_malloc(iVar16);
          *(int *)(iVar8 + 0x44) = local_168;
          puVar6 = (undefined1 *)(iVar13 + -1);
          puVar24 = puVar4 + iVar16;
          *(undefined1 **)(iVar8 + 0x40) = puVar4;
          for (; puVar24 != puVar4; puVar4 = puVar4 + 1) {
            puVar6 = puVar6 + 1;
            *puVar4 = *puVar6;
          }
          iVar16 = *(int *)(local_164 + 0x1c);
          for (uVar22 = 1; uVar22 < uVar9; uVar22 = uVar22 + 1) {
            iVar26 = *(int *)(iVar16 + uVar22 * 4);
            *(ushort *)(iVar26 + 0x4e) = *(ushort *)(iVar26 + 0x4e) & 0xffdf;
          }
          piVar14 = local_170 + 1;
          puVar2 = local_174;
        }
        _dl_free(iVar13);
        if (local_158 == 0) {
          cVar1 = *(char *)(DAT_000156d0 + 0x14c98);
          uVar22 = init_tls();
          uVar9 = DAT_000156d4 + 0x14ca0;
          software_interrupt(0);
          if (uVar9 < 0xfffff001) {
            if ((int)uVar9 < 0) goto LAB_00014cbc;
            puVar17 = &local_14c;
            software_interrupt(0);
            uVar19 = uVar9;
            if (0xfffff000 < uVar9) {
              **(int **)(iVar20 + DAT_00015664) = -uVar9;
              uVar19 = 0xffffffff;
            }
            software_interrupt(0);
            if (0xfffff000 < uVar9) {
              **(int **)(iVar20 + DAT_00015664) = -uVar9;
            }
            if (uVar19 != 4) goto LAB_00014cbc;
          }
          else {
            **(int **)(iVar20 + DAT_00015664) = -uVar9;
LAB_00014cbc:
            puVar17 = (uint *)0x0;
            local_14c = DAT_000156d8;
            software_interrupt(0);
            if (&local_148 < (uint *)0xfffff001) {
              local_14c = DAT_000156d8 ^ local_148 ^ local_144;
            }
            else {
              **(int **)(iVar20 + DAT_00015664) = -(int)&local_148;
            }
          }
          **(uint **)(iVar20 + DAT_00015700) = local_14c;
          if (**(int **)(iVar20 + DAT_000156e0) != 0) {
            uVar32 = _dl_fixup(**(int **)(iVar20 + DAT_000156e0),piVar21,local_160);
            puVar17 = (uint *)((ulonglong)uVar32 >> 0x20);
            if ((int)uVar32 != 0) {
              iVar13 = -1;
              uVar7 = extraout_r2_02;
              goto LAB_00014714;
            }
          }
          for (uVar9 = *local_154; uVar9 != 0; uVar9 = *(uint *)(uVar9 + 0xc)) {
            if (*(int *)(uVar9 + 0x104) != 0) {
              _dl_protect_relro(uVar9,puVar17);
              puVar17 = extraout_r1;
            }
          }
          if ((cVar1 == '\0') && (**(int **)(iVar20 + DAT_000156a0) != 0)) {
            **(int **)(iVar20 + DAT_00015704) = **(int **)(iVar20 + DAT_00015704) + 1;
          }
          _dl_allocate_tls_init(uVar22);
          if ((*(char *)(DAT_00015708 + 0x15484) != '\0') ||
             (software_interrupt(0), uVar22 < 0xfffff001)) {
            *piVar30 = 0;
            uVar32 = _dl_find_hash(DAT_00015710 + 0x154ac,piVar21,0);
            if ((undefined4 *)uVar32 != (undefined4 *)0x0) {
              *(undefined4 *)uVar32 = local_15c;
            }
            piVar14 = (int *)*local_154;
            while( true ) {
              if (piVar14 == (int *)0x0) break;
              uVar22 = 0;
              piVar12 = (int *)piVar14[0x3f];
              while( true ) {
                if ((uint)piVar14[0x3e] <= uVar22) break;
                if (((*piVar12 == 1) && ((piVar12[6] & 2U) == 0)) &&
                   (uVar32 = CONCAT44(piVar14[0x31],(int)uVar32), piVar14[0x31] != 0)) {
                  uVar9 = piVar12[2] + *piVar14 & -**(int **)(iVar20 + DAT_00015744);
                  iVar13 = (**(int **)(iVar20 + DAT_00015744) - 1U & piVar12[2]) + piVar12[4];
                  uVar32 = CONCAT44(iVar13,uVar9);
                  software_interrupt(0);
                  if (0xfffff000 < uVar9) {
                    uVar32 = CONCAT44(iVar13,-uVar9);
                    **(int **)(iVar20 + DAT_00015748) = -uVar9;
                  }
                }
                uVar22 = uVar22 + 1;
                piVar12 = piVar12 + 8;
              }
              piVar14 = (int *)piVar14[3];
            }
            *(undefined4 *)(*local_16c + 0xc) = 1;
            _dl_debug_state((int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
            piVar14 = (int *)*local_154;
            if (piVar14[0x3b] != 0) {
              puVar2 = (undefined4 *)(piVar14[0x3b] + *piVar14);
              puVar23 = (undefined4 *)((piVar14[0x3c] & 0xfffffffcU) + (int)puVar2);
              for (; puVar23 != puVar2; puVar2 = puVar2 + 1) {
                (*(code *)*puVar2)();
              }
            }
            iVar13 = DAT_00015718;
            iVar8 = *(int *)(DAT_00015714 + 0x1550c);
            while (iVar8 = iVar8 + -1, iVar8 != -1) {
              piVar14 = *(int **)(*(int *)(iVar13 + 0x1550c) + iVar8 * 4);
              piVar14[0x17] = 0;
              if ((*(ushort *)((int)piVar14 + 0x4e) & 4) == 0) {
                *(ushort *)((int)piVar14 + 0x4e) = *(ushort *)((int)piVar14 + 0x4e) | 4;
                if (piVar14[0x27] != 0) {
                  (*(code *)(piVar14[0x27] + *piVar14))();
                }
                _dl_run_init_array(piVar14);
              }
            }
            *piVar30 = 0;
            uVar7 = _dl_find_hash(DAT_0001571c + 0x15530,piVar21,0,1);
            **(undefined4 **)(iVar20 + DAT_00015720) = uVar7;
            *piVar30 = 0;
            uVar7 = _dl_find_hash(DAT_00015724 + 0x15558,piVar21,0,1);
            **(undefined4 **)(iVar20 + DAT_00015728) = uVar7;
            *piVar30 = 0;
            uVar7 = _dl_find_hash(DAT_0001572c + 0x15580,piVar21,0,1);
            **(undefined4 **)(iVar20 + DAT_00015730) = uVar7;
            *piVar30 = 0;
            uVar7 = _dl_find_hash(DAT_00015734 + 0x155a8,piVar21,0,1);
            **(undefined4 **)(iVar20 + DAT_00015738) = uVar7;
            *piVar30 = 0;
            uVar7 = _dl_find_hash(DAT_0001573c + 0x155d0,piVar21,0,1);
            **(undefined4 **)(iVar20 + DAT_00015740) = uVar7;
            *(undefined4 *)(*local_16c + 0xc) = 0;
            _dl_debug_state();
            return *(undefined4 *)(param_3 + 0x4c);
          }
          iVar13 = 0x1e;
          uVar7 = extraout_r2_03;
        }
        else {
          iVar13 = 0;
          uVar22 = 0;
          uVar7 = extraout_r2_00;
        }
      }
LAB_00014714:
      software_interrupt(0);
      piVar14 = *(int **)(iVar20 + DAT_00015664);
      *piVar14 = -iVar13;
    }
    *(char *)piVar14 = (char)uVar7;
    piVar14 = (int *)((int)piVar14 + 1);
  } while( true );
  while (pcVar5 = pcVar11 + -1, pcVar11[-1] != '/') {
LAB_000150dc:
    pcVar11 = pcVar5;
    if (pcVar3 == pcVar11) goto LAB_00015100;
  }
  if (pcVar11 + -1 == pcVar3) {
    pcVar11 = pcVar3;
  }
LAB_00015100:
  pbVar18 = (byte *)(pcVar11 + -1);
  pbVar10 = (byte *)(DAT_000156f8 + 0x15110);
  do {
    pbVar18 = pbVar18 + 1;
    uVar9 = (uint)*pbVar18;
    uVar19 = (uint)*pbVar10;
    if (uVar9 == 0) {
      iVar8 = -uVar19;
      goto LAB_00015120;
    }
    pbVar10 = pbVar10 + 1;
  } while (uVar9 == uVar19);
  iVar8 = uVar9 - uVar19;
LAB_00015120:
  if (iVar8 == 0) {
    if (piVar21 == (int *)0x0) {
      piVar12 = (int *)FUN_00013418(local_168,local_164,param_3,local_150);
    }
    else {
      *(ushort *)((int)piVar21 + 0x4e) = *(ushort *)((int)piVar21 + 0x4e) | 0x10;
      piVar12 = piVar21;
    }
    *(short *)(piVar12 + 0x13) = (short)piVar12[0x13] + 1;
    piVar21 = piVar12;
  }
  else {
    *piVar30 = (int)local_178;
    piVar12 = (int *)_dl_load_shared_library(0,&local_150,uVar22,pcVar3);
    if (piVar12 == (int *)0x0) {
      if (local_158 == 0) {
        _dl_dprintf(2,DAT_000156fc + 0x15240,**(undefined4 **)(iVar20 + DAT_000156dc),pcVar3);
        iVar13 = 0x10;
        uVar7 = extraout_r2_01;
        goto LAB_00014714;
      }
      _dl_dprintf(1,local_170,pcVar3);
      goto LAB_00015220;
    }
  }
  uVar7 = *(undefined4 *)(uVar22 + 0x5c);
  puVar27 = piVar30 + -2;
  puVar28 = piVar30 + -2;
  piVar29 = piVar30 + -2;
  piVar30[1] = (int)piVar12;
  *piVar30 = uVar7;
  *(int **)(uVar22 + 0x5c) = piVar30;
  piVar12[0x14] = local_160 | 0x100;
  piVar30 = piVar30 + -2;
  if ((local_158 != 0) && (piVar30 = puVar27, (*(ushort *)((int)piVar12 + 0x4e) & 0x10) == 0)) {
    *piVar29 = *piVar12;
    _dl_dprintf(1,local_174,pcVar3,piVar12[1]);
    piVar30 = puVar28;
  }
LAB_00015220:
  piVar14 = piVar14 + 2;
  goto LAB_0001508c;
}



/* ===== FUN_0001584c @ 0001584c size=612 ===== */

/* WARNING: Removing unreachable block (ram,0x00015a30) */
/* WARNING: Removing unreachable block (ram,0x0001592c) */
/* WARNING: Removing unreachable block (ram,0x00015a38) */
/* WARNING: Removing unreachable block (ram,0x00015934) */

void FUN_0001584c(int *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  code *pcVar4;
  code **ppcVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int *piVar11;
  bool bVar12;
  undefined1 auStack_1b1 [61];
  code *local_174;
  undefined4 local_158;
  code *local_138 [2];
  code *local_130;
  undefined1 auStack_cc [8];
  int local_c4;
  int local_88;
  int local_84;
  int local_70;
  int local_44;
  
  piVar11 = param_1 + 1;
  iVar9 = DAT_00015ab4 + 0x15870;
  pcVar10 = (code *)(piVar11 + *param_1 + 1);
  pcVar3 = pcVar10;
  do {
    do {
      pcVar6 = pcVar3;
      pcVar3 = pcVar6 + 4;
    } while (*(int *)pcVar6 != 0);
    local_158 = 0xffffffff;
    for (pcVar6 = pcVar6 + 0xb; uVar2 = *(uint *)(pcVar6 + -7), uVar2 != 0; pcVar6 = pcVar6 + 8) {
      if (uVar2 < 0xf) {
        pcVar3 = pcVar6 + -8;
        pcVar4 = (code *)(auStack_1b1 + uVar2 * 8);
        do {
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
          *pcVar4 = *pcVar3;
        } while (pcVar3 != pcVar6);
      }
    }
    if (local_174 == (code *)0x0) {
      local_174 = FUN_0001584c + -*(int *)(iVar9 + DAT_00015ab8);
    }
    pcVar3 = local_174;
    if (local_174 == (code *)0x0) {
      pcVar6 = (code *)(DAT_00015acc + 0x15990);
LAB_00015904:
      pcVar3 = pcVar6 + -1;
      do {
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != (code)0x0);
      pcVar3 = pcVar3 + -(int)pcVar6;
      software_interrupt(0);
      piVar7 = *(int **)(iVar9 + DAT_00015ac8);
      iVar1 = 0;
    }
    else {
      if (((*(uint *)(local_174 + 4) & 0xff00ff) != DAT_00015abc) ||
         (*(int *)local_174 != DAT_00015ac0)) {
        pcVar6 = (code *)(DAT_00015ac4 + 0x15900);
        if (pcVar6 < local_174) {
          pcVar6 = local_174 + (int)pcVar6;
        }
        goto LAB_00015904;
      }
      iVar8 = 0x118;
      iVar1 = *(int *)((int)&DAT_000159a4 + DAT_000159a4);
      ppcVar5 = local_138;
      while (bVar12 = iVar8 != 0, iVar8 = iVar8 + -1, bVar12) {
        *(undefined1 *)ppcVar5 = 0;
        ppcVar5 = (code **)((int)ppcVar5 + 1);
      }
      local_138[0] = local_174;
      local_130 = local_174 + iVar1;
      _dl_parse_dynamic_info(local_174 + iVar1,auStack_cc,0,local_174);
      if (local_88 == 0) {
LAB_00015a70:
        if (local_c4 == 0 || local_70 == 0) {
          *(int **)((int)&DAT_00015abc + DAT_00015ad4) = piVar11 + -1;
          _dl_get_ready_to_run(local_138,pcVar3,auStack_1b1 + 1,pcVar10,piVar11);
          return;
        }
      }
      else {
        iVar1 = local_84;
        if (local_44 != 0) {
          iVar1 = local_84 + local_44 * -8;
          piVar7 = (int *)(local_88 + -8);
          iVar8 = local_44;
          do {
            piVar7 = piVar7 + 2;
            iVar8 = iVar8 + -1;
            *(code **)(pcVar3 + *piVar7) = pcVar3 + *(int *)(pcVar3 + *piVar7);
          } while (iVar8 != 0);
        }
        if (iVar1 == 0) goto LAB_00015a70;
      }
      pcVar6 = (code *)(DAT_00015ad0 + 0x15a04);
      if (pcVar6 < pcVar3) {
        pcVar6 = pcVar3 + (int)pcVar6;
      }
      pcVar3 = pcVar6 + -1;
      do {
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != (code)0x0);
      pcVar3 = pcVar3 + -(int)pcVar6;
      software_interrupt(0);
      piVar7 = *(int **)(iVar9 + DAT_00015ac8);
      iVar1 = 0xe;
    }
    piVar11 = (int *)0x1;
    software_interrupt(0);
    *piVar7 = -iVar1;
  } while( true );
}



/* ===== _dl_linux_resolve @ 00015ae0 size=32 ===== */

void _dl_linux_resolve(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_r12;
  int unaff_lr;
  
  UNRECOVERED_JUMPTABLE =
       (code *)_dl_linux_resolver(*(undefined4 *)(unaff_lr + -4),~(unaff_lr - in_r12 >> 2));
                    /* WARNING: Could not recover jumptable at 0x00015afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== __aeabi_read_tp @ 00015b00 size=8 ===== */

void __aeabi_read_tp(void)

{
  (*(code *)&LAB_ffff0fe0)();
  return;
}


