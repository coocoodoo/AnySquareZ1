// libarc4.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== arc4_setkey @ 00010050 size=74 ===== */

undefined4 arc4_setkey(int param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  *(undefined4 *)(param_1 + 0x400) = 1;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  do {
    *(int *)(param_1 + iVar2 * 4) = iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x100);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + -4);
  uVar5 = 0;
  do {
    pbVar1 = (byte *)(param_2 + uVar3);
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
    iVar2 = *piVar4;
    if (param_3 <= uVar3) {
      uVar3 = 0;
    }
    uVar5 = *pbVar1 + uVar5 + iVar2 & 0xff;
    *piVar4 = *(int *)(param_1 + uVar5 * 4);
    *(int *)(param_1 + uVar5 * 4) = iVar2;
  } while ((int *)(param_1 + 0x3fc) != piVar4);
  return 0;
}



/* ===== arc4_crypt @ 0001009a size=98 ===== */

void arc4_crypt(int param_1,byte *param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (param_4 != 0) {
    uVar7 = *(uint *)(param_1 + 0x400);
    iVar3 = *(int *)(param_1 + uVar7 * 4);
    uVar4 = *(int *)(param_1 + 0x404) + iVar3 & 0xff;
    iVar8 = *(int *)(param_1 + uVar4 * 4);
    pbVar1 = param_2;
    do {
      uVar5 = uVar4;
      *(int *)(param_1 + uVar5 * 4) = iVar3;
      uVar6 = iVar3 + iVar8;
      *(int *)(param_1 + uVar7 * 4) = iVar8;
      uVar7 = uVar7 + 1 & 0xff;
      iVar3 = *(int *)(param_1 + uVar7 * 4);
      uVar4 = uVar5 + iVar3 & 0xff;
      iVar8 = *(int *)(param_1 + uVar4 * 4);
      pbVar2 = pbVar1 + 1;
      *pbVar1 = (byte)*(undefined4 *)(param_1 + (uVar6 & 0xff) * 4) ^ *param_3;
      pbVar1 = pbVar2;
      param_3 = param_3 + 1;
    } while (pbVar2 != param_2 + param_4);
    *(uint *)(param_1 + 0x400) = uVar7;
    *(uint *)(param_1 + 0x404) = uVar5;
  }
  return;
}


