// libpostproc.so.56.6.100 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010900 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::av_malloc @ 00010924 size=12 ===== */

void av_malloc(void)

{
  (*(code *)PTR_av_malloc_0002a00c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010930 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002a010)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 0001093c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002a014)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010948 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002a018)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::memmove @ 00010954 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002a01c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::av_rescale @ 00010960 size=12 ===== */

void av_rescale(void)

{
  (*(code *)PTR_av_rescale_0002a020)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 0001096c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002a024)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010978 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002a028)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010984 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002a02c)();
  return;
}



/* ===== <EXTERNAL>::av_free @ 00010990 size=12 ===== */

void av_free(void)

{
  (*(code *)PTR_av_free_0002a030)();
  return;
}



/* ===== <EXTERNAL>::av_strtok @ 0001099c size=12 ===== */

void av_strtok(void)

{
  (*(code *)PTR_av_strtok_0002a034)();
  return;
}



/* ===== <EXTERNAL>::av_get_cpu_flags @ 000109a8 size=12 ===== */

void av_get_cpu_flags(void)

{
  (*(code *)PTR_av_get_cpu_flags_0002a038)();
  return;
}



/* ===== <EXTERNAL>::av_strlcpy @ 000109b4 size=12 ===== */

void av_strlcpy(void)

{
  (*(code *)PTR_av_strlcpy_0002a03c)();
  return;
}



/* ===== <EXTERNAL>::av_mallocz @ 000109c0 size=12 ===== */

void av_mallocz(void)

{
  (*(code *)PTR_av_mallocz_0002a040)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 000109cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002a044)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::strlen @ 000109d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002a048)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 000109e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002a04c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::av_log @ 000109f0 size=12 ===== */

void av_log(void)

{
  (*(code *)PTR_av_log_0002a050)();
  return;
}



/* ===== pp_get_context @ 000109fc size=232 ===== */

int * processEntry pp_get_context(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint in_r2;
  uint uVar3;
  
  piVar1 = (int *)av_mallocz(0x540);
  if (piVar1 != (int *)0x0) {
    *piVar1 = DAT_00010ae4 + 0x10c3c;
    if ((in_r2 & 8) == 0) {
      uVar3 = 1;
      piVar1[0x140] = 1;
    }
    else {
      piVar1[0x140] = in_r2 & 3;
      uVar3 = (in_r2 & 0x3f) >> 4;
    }
    piVar1[0x141] = uVar3;
    if ((in_r2 & 0x80000) == 0) {
      piVar1[0x13d] = (uint)((int)in_r2 < 0);
      if ((in_r2 & 0x20000000) != 0) {
        piVar1[0x13d] = piVar1[0x13d] | 2;
      }
      if ((in_r2 & 0x40000000) != 0) {
        piVar1[0x13d] = piVar1[0x13d] | 4;
      }
      if ((in_r2 & 0x10000000) != 0) {
        piVar1[0x13d] = piVar1[0x13d] | 1;
      }
    }
    else {
      iVar2 = av_get_cpu_flags();
      piVar1[0x13d] = iVar2;
    }
    FUN_000115d4(piVar1,param_1);
    piVar1[0x13c] = -1;
  }
  return piVar1;
}



/* ===== pp_free_context @ 00010ae8 size=148 ===== */

void pp_free_context(void *param_1)

{
  av_free(*(undefined4 *)((int)param_1 + 0x20));
  av_free(*(undefined4 *)((int)param_1 + 0x24));
  av_free(*(undefined4 *)((int)param_1 + 0x28));
  av_free(*(undefined4 *)((int)param_1 + 0x2c));
  av_free(*(undefined4 *)((int)param_1 + 0x30));
  av_free(*(undefined4 *)((int)param_1 + 0x34));
  av_free(*(undefined4 *)((int)param_1 + 4));
  av_free(*(undefined4 *)((int)param_1 + 8));
  av_free(*(undefined4 *)((int)param_1 + 0x38));
  av_free(*(undefined4 *)((int)param_1 + 0x3c));
  av_free(*(undefined4 *)((int)param_1 + 0x40));
  av_free(*(undefined4 *)((int)param_1 + 0x4a0));
  av_free(*(undefined4 *)((int)param_1 + 0x4a4));
  av_free(*(undefined4 *)((int)param_1 + 0x4a8));
  memset(param_1,0,0x540);
  av_free(param_1);
  return;
}



/* ===== FUN_00010b7c @ 00010b7c size=72 ===== */

void FUN_00010b7c(void)

{
  code *pcVar1;
  
  if (DAT_00010bc8 + 0x10b94 == DAT_00010bc4 + 0x10b8c) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010bcc + 0x10b9c + DAT_00010bd0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00010c38 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010cac + 0x10c54;
  if (*(char *)(DAT_00010ca8 + 0x10c48) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010cb0) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010cb4 + 0x10c74));
  }
  FUN_00010b7c();
  if (*(int *)(iVar1 + DAT_00010cb8) != 0) {
    __deregister_frame_info(DAT_00010cbc + 0x10c94);
  }
  *(undefined1 *)(DAT_00010cc0 + 0x10ca4) = 1;
  return;
}



/* ===== _INIT_0 @ 00010cc4 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010cfc + 0x10cd4 + DAT_00010d00) != 0) {
    __register_frame_info(DAT_00010d08 + 0x10cf4,DAT_00010d04 + 0x10cf0);
  }
  if (((DAT_00010c2c + 0x10bec) - (DAT_00010c28 + 0x10be4) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010c30 + 0x10bf4 + DAT_00010c34);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00010d0c @ 00010d0c size=404 ===== */

void FUN_00010d0c(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  
  iVar8 = param_2 * 2;
  param_1 = param_1 + param_2 * 3;
  pbVar10 = (byte *)(param_1 + iVar8) + iVar8;
  pbVar5 = (byte *)(param_1 + -1);
  pbVar1 = pbVar10 + iVar8;
  pbVar7 = pbVar1 + param_2;
  pbVar2 = pbVar7 + param_2;
  pbVar9 = pbVar2 + iVar8;
  local_38 = pbVar9 + iVar8;
  pbVar4 = (byte *)(param_1 + iVar8);
  pbVar6 = local_38 + param_2 * -7;
  local_34 = local_38 + param_2 * -7 + param_2 * -2;
  local_30 = pbVar1 + param_2 * 3;
  do {
    while( true ) {
      pbVar5 = pbVar5 + 1;
      uVar3 = (int)(((short)(ushort)*pbVar10 * 9 + ((uint)*pbVar4 * 9 - (uint)*pbVar5)) -
                   (uint)*pbVar1) >> 4;
      if ((uVar3 & 0xffffff00) != 0) {
        uVar3 = (int)~uVar3 >> 0x1f;
      }
      *local_34 = (byte)uVar3;
      uVar3 = (int)(((short)(ushort)*pbVar1 * 9 + ((uint)*pbVar10 * 9 - (uint)*pbVar4)) -
                   (uint)*pbVar2) >> 4;
      if ((uVar3 & 0xffffff00) != 0) {
        uVar3 = (int)~uVar3 >> 0x1f;
      }
      *pbVar6 = (byte)uVar3;
      uVar3 = (int)(((short)(ushort)*pbVar2 * 9 + ((uint)*pbVar1 * 9 - (uint)*pbVar10)) -
                   (uint)*pbVar9) >> 4;
      if ((uVar3 & 0xffffff00) != 0) {
        uVar3 = (int)~uVar3 >> 0x1f;
      }
      *pbVar7 = (byte)uVar3;
      iVar8 = ((short)(ushort)*pbVar9 * 9 + ((uint)*pbVar2 * 9 - (uint)*pbVar1)) - (uint)*local_38;
      uVar3 = iVar8 >> 4;
      if ((uVar3 & 0xffffff00) == 0) break;
      *local_30 = (char)~(byte)(iVar8 >> 0x1c) >> 7;
      pbVar1 = pbVar1 + 1;
      pbVar2 = pbVar2 + 1;
      pbVar4 = pbVar4 + 1;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
      local_38 = local_38 + 1;
      local_34 = local_34 + 1;
      local_30 = local_30 + 1;
      if (pbVar5 == (byte *)(param_1 + 7)) {
        return;
      }
    }
    *local_30 = (byte)uVar3;
    pbVar1 = pbVar1 + 1;
    pbVar2 = pbVar2 + 1;
    pbVar4 = pbVar4 + 1;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar10 + 1;
    local_38 = local_38 + 1;
    local_34 = local_34 + 1;
    local_30 = local_30 + 1;
  } while (pbVar5 != (byte *)(param_1 + 7));
  return;
}



/* ===== FUN_00010ea0 @ 00010ea0 size=436 ===== */

void FUN_00010ea0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  
  param_1 = param_1 + param_2 * 4;
  pbVar9 = (byte *)(param_1 + param_2) + param_2;
  pbVar8 = pbVar9 + param_2;
  pbVar7 = pbVar8 + param_2 * 4;
  local_3c = (byte *)(param_1 + -1);
  pbVar11 = pbVar7 + param_2 * -2;
  local_34 = pbVar11 + param_2 * 3;
  pbVar12 = local_34 + param_2 * -2;
  pbVar5 = (byte *)(param_3 + -1);
  pbVar4 = pbVar12 + param_2 * 3 + param_2 * -5;
  pbVar10 = (byte *)(param_1 + param_2);
  local_38 = pbVar12 + param_2 * 3;
  do {
    while( true ) {
      bVar1 = *pbVar10;
      local_3c = local_3c + 1;
      pbVar5 = pbVar5 + 1;
      uVar3 = (int)((((short)(ushort)*pbVar9 * 4 +
                     (short)(ushort)bVar1 * 2 + ((uint)*local_3c * 4 - (uint)*pbVar5)) -
                    (uint)*pbVar8) + 4) >> 3;
      if ((uVar3 & 0xffffff00) != 0) {
        uVar3 = (int)~uVar3 >> 0x1f;
      }
      *pbVar10 = (byte)uVar3;
      bVar2 = *pbVar4;
      uVar3 = (int)((((short)(ushort)bVar2 * 4 +
                     (short)(ushort)bVar2 * 2 + ((uint)*pbVar9 * 4 - (uint)bVar1)) - (uint)*pbVar11)
                   + 4) >> 3;
      if ((uVar3 & 0xffffff00) != 0) {
        uVar3 = (int)~uVar3 >> 0x1f;
      }
      *pbVar8 = (byte)uVar3;
      bVar1 = *pbVar12;
      uVar3 = (int)((((short)(ushort)bVar1 * 4 +
                     (short)(ushort)bVar1 * 2 + ((uint)*pbVar4 * 4 - (uint)bVar2)) - (uint)*pbVar7)
                   + 4) >> 3;
      if ((uVar3 & 0xffffff00) != 0) {
        uVar3 = (int)~uVar3 >> 0x1f;
      }
      *pbVar11 = (byte)uVar3;
      bVar2 = *local_34;
      iVar6 = (((short)(ushort)bVar2 * 4 +
               (short)(ushort)bVar2 * 2 + ((uint)*pbVar12 * 4 - (uint)bVar1)) - (uint)*local_38) + 4
      ;
      uVar3 = iVar6 >> 3;
      if ((uVar3 & 0xffffff00) == 0) break;
      *pbVar7 = (char)~(byte)(iVar6 >> 0x1b) >> 7;
      *pbVar5 = bVar2;
      pbVar4 = pbVar4 + 1;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
      pbVar11 = pbVar11 + 1;
      pbVar12 = pbVar12 + 1;
      local_38 = local_38 + 1;
      local_34 = local_34 + 1;
      if (local_3c == (byte *)(param_1 + 7)) {
        return;
      }
    }
    *pbVar7 = (byte)uVar3;
    *pbVar5 = bVar2;
    pbVar4 = pbVar4 + 1;
    pbVar7 = pbVar7 + 1;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar10 + 1;
    pbVar11 = pbVar11 + 1;
    pbVar12 = pbVar12 + 1;
    local_38 = local_38 + 1;
    local_34 = local_34 + 1;
  } while (local_3c != (byte *)(param_1 + 7));
  return;
}



/* ===== FUN_00011054 @ 00011054 size=656 ===== */

void FUN_00011054(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  
  param_1 = param_1 + param_2 * 4;
  pbVar11 = (byte *)(param_1 + param_2);
  pbVar8 = pbVar11 + param_2;
  local_3c = (byte *)(param_4 + -1);
  pbVar12 = pbVar8 + param_2 * 5;
  pbVar10 = pbVar12 + param_2;
  local_40 = (byte *)(param_1 + -1);
  local_38 = (byte *)(param_3 + -1);
  local_34 = pbVar10 + param_2;
  iVar4 = -param_2;
  pbVar6 = local_34 + param_2 * -4;
  pbVar5 = pbVar6 + iVar4 + iVar4;
  pbVar9 = pbVar12 + iVar4;
  pbVar13 = pbVar6 + iVar4;
  do {
    local_3c = local_3c + 1;
    bVar1 = *local_3c;
    local_38 = local_38 + 1;
    local_40 = local_40 + 1;
    bVar2 = *local_40;
    uVar7 = (int)((short)(ushort)bVar2 * 6 +
                  (((uint)*pbVar11 + (uint)bVar1) * 2 - ((uint)*local_38 + (uint)*pbVar8)) + 4) >> 3
    ;
    if ((uVar7 & 0xffffff00) != 0) {
      uVar7 = (int)~uVar7 >> 0x1f;
    }
    *local_40 = (byte)uVar7;
    bVar3 = *pbVar11;
    uVar7 = (int)((short)(ushort)bVar3 * 6 +
                  (((uint)*pbVar8 + (uint)bVar2) * 2 - ((uint)*pbVar5 + (uint)bVar1)) + 4) >> 3;
    if ((uVar7 & 0xffffff00) != 0) {
      uVar7 = (int)~uVar7 >> 0x1f;
    }
    *pbVar11 = (byte)uVar7;
    bVar1 = *pbVar8;
    uVar7 = (int)((short)(ushort)bVar1 * 6 +
                  (((uint)*pbVar5 + (uint)bVar3) * 2 - ((uint)*pbVar13 + (uint)bVar2)) + 4) >> 3;
    if ((uVar7 & 0xffffff00) != 0) {
      uVar7 = (int)~uVar7 >> 0x1f;
    }
    *pbVar8 = (byte)uVar7;
    bVar2 = *pbVar5;
    uVar7 = (int)((short)(ushort)bVar2 * 6 +
                  (((uint)*pbVar13 + (uint)bVar1) * 2 - ((uint)*pbVar6 + (uint)bVar3)) + 4) >> 3;
    if ((uVar7 & 0xffffff00) != 0) {
      uVar7 = (int)~uVar7 >> 0x1f;
    }
    *pbVar5 = (byte)uVar7;
    bVar3 = *pbVar13;
    uVar7 = (int)((short)(ushort)bVar3 * 6 +
                  (((uint)*pbVar6 + (uint)bVar2) * 2 - ((uint)*pbVar9 + (uint)bVar1)) + 4) >> 3;
    if ((uVar7 & 0xffffff00) != 0) {
      uVar7 = (int)~uVar7 >> 0x1f;
    }
    *pbVar13 = (byte)uVar7;
    bVar1 = *pbVar6;
    uVar7 = (int)((short)(ushort)bVar1 * 6 +
                  (((uint)*pbVar9 + (uint)bVar3) * 2 - ((uint)*pbVar12 + (uint)bVar2)) + 4) >> 3;
    if ((uVar7 & 0xffffff00) != 0) {
      uVar7 = (int)~uVar7 >> 0x1f;
    }
    *pbVar6 = (byte)uVar7;
    bVar2 = *pbVar9;
    uVar7 = (int)((short)(ushort)bVar2 * 6 +
                  (((uint)*pbVar12 + (uint)bVar1) * 2 - ((uint)*pbVar10 + (uint)bVar3)) + 4) >> 3;
    if ((uVar7 & 0xffffff00) != 0) {
      uVar7 = (int)~uVar7 >> 0x1f;
    }
    *pbVar9 = (byte)uVar7;
    bVar3 = *pbVar12;
    uVar7 = (int)((short)(ushort)bVar3 * 6 +
                  (((uint)*pbVar10 + (uint)bVar2) * 2 - ((uint)*local_34 + (uint)bVar1)) + 4) >> 3;
    if ((uVar7 & 0xffffff00) != 0) {
      uVar7 = (int)~uVar7 >> 0x1f;
    }
    *pbVar12 = (byte)uVar7;
    *local_38 = bVar2;
    *local_3c = bVar3;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar10 + 1;
    pbVar11 = pbVar11 + 1;
    pbVar12 = pbVar12 + 1;
    pbVar13 = pbVar13 + 1;
    local_34 = local_34 + 1;
  } while (local_38 != (byte *)(param_3 + 7));
  return;
}



/* ===== FUN_000112e4 @ 000112e4 size=736 ===== */

void FUN_000112e4(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  iVar4 = param_1 + param_2 * 4;
  uVar3 = *(uint *)(iVar4 + param_2);
  uVar5 = *(uint *)(param_1 + param_2 * 4);
  iVar2 = iVar4 + param_2;
  iVar9 = iVar2 + param_2;
  uVar10 = ((uVar3 ^ *param_3) >> 1 & 0x7f7f7f7f) + (uVar3 & *param_3);
  *(uint *)(param_1 + param_2 * 4) = (uVar10 | uVar5) - ((uVar10 ^ uVar5) >> 1 & 0x7f7f7f7f);
  uVar7 = *(uint *)(iVar4 + param_2 * 2);
  iVar11 = iVar9 + param_2;
  uVar5 = ((uVar7 ^ uVar5) >> 1 & 0x7f7f7f7f) + (uVar5 & uVar7);
  *(uint *)(iVar4 + param_2) = (uVar5 | uVar3) - ((uVar5 ^ uVar3) >> 1 & 0x7f7f7f7f);
  uVar10 = *(uint *)(iVar2 + param_2 * 2);
  iVar1 = iVar11 + param_2;
  uVar5 = ((uVar3 ^ uVar10) >> 1 & 0x7f7f7f7f) + (uVar3 & uVar10);
  *(uint *)(iVar4 + param_2 * 2) = (uVar7 | uVar5) - ((uVar7 ^ uVar5) >> 1 & 0x7f7f7f7f);
  uVar8 = *(uint *)(iVar9 + param_2 * 2);
  uVar5 = ((uVar7 ^ uVar8) >> 1 & 0x7f7f7f7f) + (uVar7 & uVar8);
  *(uint *)(iVar2 + param_2 * 2) = (uVar10 | uVar5) - ((uVar10 ^ uVar5) >> 1 & 0x7f7f7f7f);
  uVar3 = *(uint *)(iVar11 + param_2 * 2);
  iVar6 = iVar1 + param_2;
  uVar5 = ((uVar10 ^ uVar3) >> 1 & 0x7f7f7f7f) + (uVar10 & uVar3);
  *(uint *)(iVar9 + param_2 * 2) = (uVar8 | uVar5) - ((uVar8 ^ uVar5) >> 1 & 0x7f7f7f7f);
  uVar5 = *(uint *)(iVar1 + param_2 * 2);
  uVar10 = ((uVar8 ^ uVar5) >> 1 & 0x7f7f7f7f) + (uVar8 & uVar5);
  *(uint *)(iVar11 + param_2 * 2) = (uVar3 | uVar10) - ((uVar3 ^ uVar10) >> 1 & 0x7f7f7f7f);
  uVar10 = *(uint *)(iVar6 + param_2 * 2);
  iVar2 = param_2 + 4;
  uVar3 = ((uVar3 ^ uVar10) >> 1 & 0x7f7f7f7f) + (uVar3 & uVar10);
  *(uint *)(iVar1 + param_2 * 2) = (uVar5 | uVar3) - ((uVar5 ^ uVar3) >> 1 & 0x7f7f7f7f);
  uVar3 = *(uint *)(iVar6 + param_2 * 3);
  iVar9 = iVar4 + iVar2;
  iVar11 = iVar9 + param_2;
  uVar5 = ((uVar5 ^ uVar3) >> 1 & 0x7f7f7f7f) + (uVar5 & uVar3);
  *(uint *)(iVar6 + param_2 * 2) = (uVar10 | uVar5) - ((uVar10 ^ uVar5) >> 1 & 0x7f7f7f7f);
  *param_3 = uVar10;
  uVar10 = *(uint *)(iVar4 + iVar2);
  uVar5 = *(uint *)(iVar4 + 4);
  uVar3 = ((param_3[1] ^ uVar10) >> 1 & 0x7f7f7f7f) + (param_3[1] & uVar10);
  *(uint *)(iVar4 + 4) = (uVar5 | uVar3) - ((uVar5 ^ uVar3) >> 1 & 0x7f7f7f7f);
  uVar3 = *(uint *)(iVar9 + param_2);
  iVar6 = iVar11 + param_2;
  uVar5 = ((uVar5 ^ uVar3) >> 1 & 0x7f7f7f7f) + (uVar5 & uVar3);
  *(uint *)(iVar4 + iVar2) = (uVar10 | uVar5) - ((uVar10 ^ uVar5) >> 1 & 0x7f7f7f7f);
  uVar7 = *(uint *)(iVar9 + param_2 * 2);
  iVar1 = iVar6 + param_2;
  uVar5 = ((uVar10 ^ uVar7) >> 1 & 0x7f7f7f7f) + (uVar10 & uVar7);
  *(uint *)(iVar9 + param_2) = (uVar3 | uVar5) - ((uVar3 ^ uVar5) >> 1 & 0x7f7f7f7f);
  uVar10 = *(uint *)(iVar11 + param_2 * 2);
  iVar2 = iVar1 + param_2;
  uVar5 = ((uVar3 ^ uVar10) >> 1 & 0x7f7f7f7f) + (uVar3 & uVar10);
  *(uint *)(iVar9 + param_2 * 2) = (uVar7 | uVar5) - ((uVar7 ^ uVar5) >> 1 & 0x7f7f7f7f);
  uVar3 = *(uint *)(iVar6 + param_2 * 2);
  uVar5 = ((uVar7 ^ uVar3) >> 1 & 0x7f7f7f7f) + (uVar7 & uVar3);
  *(uint *)(iVar11 + param_2 * 2) = (uVar10 | uVar5) - ((uVar10 ^ uVar5) >> 1 & 0x7f7f7f7f);
  uVar5 = *(uint *)(iVar1 + param_2 * 2);
  uVar10 = ((uVar10 ^ uVar5) >> 1 & 0x7f7f7f7f) + (uVar10 & uVar5);
  *(uint *)(iVar6 + param_2 * 2) = (uVar3 | uVar10) - ((uVar3 ^ uVar10) >> 1 & 0x7f7f7f7f);
  uVar10 = *(uint *)(iVar2 + param_2 * 2);
  uVar3 = ((uVar3 ^ uVar10) >> 1 & 0x7f7f7f7f) + (uVar3 & uVar10);
  *(uint *)(iVar1 + param_2 * 2) = (uVar5 | uVar3) - ((uVar5 ^ uVar3) >> 1 & 0x7f7f7f7f);
  uVar3 = *(uint *)(iVar2 + param_2 * 3);
  uVar5 = ((uVar5 ^ uVar3) >> 1 & 0x7f7f7f7f) + (uVar5 & uVar3);
  *(uint *)(iVar2 + param_2 * 2) = (uVar10 | uVar5) - ((uVar10 ^ uVar5) >> 1 & 0x7f7f7f7f);
  param_3[1] = uVar10;
  return;
}



/* ===== FUN_000115d4 @ 000115d4 size=384 ===== */

void FUN_000115d4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar5;
  
  *(int *)(param_1 + 0x4fc) = param_4;
  *(int *)(param_1 + 0x4f8) = param_5;
  iVar1 = param_3 + 0xf >> 4;
  av_free(*(undefined4 *)(param_1 + 0x38));
  uVar2 = av_mallocz(param_4 * 0x18 + 0x20);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  av_free(*(undefined4 *)(param_1 + 0x3c));
  uVar2 = av_mallocz(param_4 * 0x18);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  av_free(*(undefined4 *)(param_1 + 4));
  uVar2 = av_mallocz(0x100);
  *(undefined4 *)(param_1 + 4) = uVar2;
  av_free(*(undefined4 *)(param_1 + 8));
  iVar3 = av_mallocz(0x800);
  iVar6 = param_3 * param_2;
  *(int *)(param_1 + 8) = iVar3;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0x3f;
  }
  iVar6 = (iVar6 >> 6) * 0xf;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  piVar4 = (int *)(iVar3 + -8);
  do {
    piVar5 = piVar4 + 2;
    *piVar5 = iVar6 >> 8;
    piVar4[3] = iVar6 >> 0x1f;
    piVar4 = piVar5;
  } while (piVar5 != (int *)(iVar3 + 0x7f8));
  puVar7 = (undefined4 *)(param_1 + 0x20);
  do {
    av_free(*puVar7);
    uVar2 = av_mallocz((param_4 * iVar1 + 0x440) * 0x10);
    puVar8 = puVar7 + 1;
    *puVar7 = uVar2;
    av_free(puVar7[3]);
    uVar2 = av_mallocz(((param_3 + 7U & 0xfffffff8) + 0x88) * 0x80);
    puVar7[3] = uVar2;
    puVar7 = puVar8;
  } while ((undefined4 *)(param_1 + 0x2c) != puVar8);
  av_free(*(undefined4 *)(param_1 + 0x40));
  param_5 = param_5 * iVar1;
  uVar2 = av_mallocz((param_2 + 0x10) * 2);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  av_free(*(undefined4 *)(param_1 + 0x4a4));
  uVar2 = av_mallocz(param_5);
  *(undefined4 *)(param_1 + 0x4a4) = uVar2;
  av_free(*(undefined4 *)(param_1 + 0x4a0));
  uVar2 = av_mallocz(param_5);
  *(undefined4 *)(param_1 + 0x4a0) = uVar2;
  av_free(*(undefined4 *)(param_1 + 0x4a8));
  uVar2 = av_mallocz(param_2 + 0xf >> 4);
  *(undefined4 *)(param_1 + 0x4a8) = uVar2;
  return;
}



/* ===== FUN_00011754 @ 00011754 size=2748 ===== */

void FUN_00011754(byte *param_1,int param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  int local_124;
  uint *local_120;
  uint local_54;
  uint local_50 [11];
  
  iVar29 = param_2 * 2;
  uVar30 = (uint)param_1[param_2];
  iVar1 = param_2 * 3;
  uVar8 = (uint)param_1[param_2 + 1];
  uVar28 = (uint)param_1[param_2 + 2];
  uVar27 = (uint)param_1[param_2 + 3];
  uVar19 = param_3;
  if (uVar30 <= uVar8) {
    uVar19 = uVar8;
  }
  uVar9 = (uint)param_1[iVar29 + 1];
  if (uVar8 < uVar30) {
    uVar19 = uVar30;
  }
  uVar31 = (uint)param_1[iVar29];
  uVar10 = (uint)param_1[iVar29 + 2];
  if ((int)uVar19 < (int)uVar28) {
    uVar19 = uVar28;
  }
  uVar26 = (uint)param_1[param_2 + 4];
  uVar23 = (uint)param_1[param_2 + 5];
  if ((int)uVar19 < (int)uVar27) {
    uVar19 = uVar27;
  }
  uVar11 = (uint)param_1[iVar29 + 3];
  uVar22 = (uint)param_1[param_2 + 6];
  if ((int)uVar19 < (int)uVar26) {
    uVar19 = uVar26;
  }
  uVar12 = (uint)param_1[iVar29 + 4];
  if ((int)uVar19 < (int)uVar23) {
    uVar19 = uVar23;
  }
  uVar21 = (uint)param_1[param_2 + 7];
  if ((int)uVar19 < (int)uVar22) {
    uVar19 = uVar22;
  }
  uVar13 = (uint)param_1[iVar29 + 5];
  if ((int)uVar19 < (int)uVar21) {
    uVar19 = uVar21;
  }
  uVar14 = (uint)param_1[iVar29 + 6];
  if ((int)uVar19 < (int)uVar31) {
    uVar19 = uVar31;
  }
  uVar38 = (uint)param_1[iVar29 + 7];
  uVar39 = (uint)param_1[iVar1];
  uVar40 = (uint)param_1[iVar1 + 1];
  uVar41 = (uint)param_1[iVar1 + 2];
  uVar15 = (uint)param_1[iVar1 + 3];
  if ((int)uVar19 < (int)uVar9) {
    uVar19 = uVar9;
  }
  uVar42 = (uint)param_1[iVar1 + 4];
  if ((int)uVar19 < (int)uVar10) {
    uVar19 = uVar10;
  }
  uVar43 = (uint)param_1[iVar1 + 5];
  uVar44 = (uint)param_1[iVar1 + 6];
  uVar32 = (uint)param_1[iVar1 + 7];
  if ((int)uVar19 < (int)uVar11) {
    uVar19 = uVar11;
  }
  iVar29 = param_2 * 4;
  if ((int)uVar19 < (int)uVar12) {
    uVar19 = uVar12;
  }
  iVar1 = param_2 * 5;
  uVar45 = (uint)param_1[iVar29];
  if ((int)uVar19 < (int)uVar13) {
    uVar19 = uVar13;
  }
  uVar46 = (uint)param_1[iVar29 + 1];
  if ((int)uVar19 < (int)uVar14) {
    uVar19 = uVar14;
  }
  uVar16 = (uint)param_1[iVar29 + 3];
  uVar47 = (uint)param_1[iVar29 + 2];
  uVar48 = (uint)param_1[iVar29 + 4];
  if ((int)uVar19 < (int)uVar38) {
    uVar19 = uVar38;
  }
  uVar49 = (uint)param_1[iVar29 + 5];
  uVar50 = (uint)param_1[iVar29 + 6];
  uVar33 = (uint)param_1[iVar29 + 7];
  if ((int)uVar19 < (int)uVar39) {
    uVar19 = uVar39;
  }
  if ((int)uVar19 < (int)uVar40) {
    uVar19 = uVar40;
  }
  iVar29 = param_2 * 6;
  uVar51 = (uint)param_1[iVar1];
  if ((int)uVar19 < (int)uVar41) {
    uVar19 = uVar41;
  }
  uVar52 = (uint)param_1[iVar1 + 1];
  uVar53 = (uint)param_1[iVar1 + 2];
  if ((int)uVar19 < (int)uVar15) {
    uVar19 = uVar15;
  }
  uVar17 = (uint)param_1[iVar1 + 3];
  uVar54 = (uint)param_1[iVar1 + 4];
  uVar55 = (uint)param_1[iVar1 + 5];
  if ((int)uVar19 < (int)uVar42) {
    uVar19 = uVar42;
  }
  uVar56 = (uint)param_1[iVar1 + 6];
  uVar34 = (uint)param_1[iVar1 + 7];
  if ((int)uVar19 < (int)uVar43) {
    uVar19 = uVar43;
  }
  iVar1 = param_2 * 7;
  uVar57 = (uint)param_1[iVar29];
  if ((int)uVar19 < (int)uVar44) {
    uVar19 = uVar44;
  }
  uVar58 = (uint)param_1[iVar29 + 1];
  if ((int)uVar19 < (int)uVar32) {
    uVar19 = uVar32;
  }
  uVar59 = (uint)param_1[iVar29 + 2];
  if ((int)uVar19 < (int)uVar45) {
    uVar19 = uVar45;
  }
  uVar60 = (uint)param_1[iVar29 + 3];
  if ((int)uVar19 < (int)uVar46) {
    uVar19 = uVar46;
  }
  uVar61 = (uint)param_1[iVar29 + 4];
  if ((int)uVar19 < (int)uVar47) {
    uVar19 = uVar47;
  }
  uVar62 = (uint)param_1[iVar29 + 5];
  if ((int)uVar19 < (int)uVar16) {
    uVar19 = uVar16;
  }
  uVar63 = (uint)param_1[iVar29 + 6];
  uVar35 = (uint)param_1[iVar29 + 7];
  if ((int)uVar19 < (int)uVar48) {
    uVar19 = uVar48;
  }
  iVar29 = param_2 * 8;
  uVar64 = (uint)param_1[iVar1];
  if ((int)uVar19 < (int)uVar49) {
    uVar19 = uVar49;
  }
  uVar65 = (uint)param_1[iVar1 + 1];
  if ((int)uVar19 < (int)uVar50) {
    uVar19 = uVar50;
  }
  uVar66 = (uint)param_1[iVar1 + 2];
  uVar67 = (uint)param_1[iVar1 + 3];
  uVar68 = (uint)param_1[iVar1 + 4];
  uVar69 = (uint)param_1[iVar1 + 5];
  uVar3 = (uint)param_1[iVar1 + 7];
  uVar70 = (uint)param_1[iVar1 + 6];
  if ((int)uVar19 < (int)uVar33) {
    uVar19 = uVar33;
  }
  uVar36 = (uint)param_1[iVar29];
  if ((int)uVar19 < (int)uVar51) {
    uVar19 = uVar51;
  }
  uVar18 = (uint)param_1[iVar29 + 1];
  if ((int)uVar19 < (int)uVar52) {
    uVar19 = uVar52;
  }
  uVar71 = (uint)param_1[iVar29 + 2];
  if ((int)uVar19 < (int)uVar53) {
    uVar19 = uVar53;
  }
  uVar72 = (uint)param_1[iVar29 + 3];
  if ((int)uVar19 < (int)uVar17) {
    uVar19 = uVar17;
  }
  uVar73 = (uint)param_1[iVar29 + 4];
  if ((int)uVar19 < (int)uVar54) {
    uVar19 = uVar54;
  }
  uVar74 = (uint)param_1[iVar29 + 5];
  if ((int)uVar19 < (int)uVar55) {
    uVar19 = uVar55;
  }
  uVar75 = (uint)param_1[iVar29 + 6];
  uVar5 = (uint)param_1[iVar29 + 7];
  if ((int)uVar19 < (int)uVar56) {
    uVar19 = uVar56;
  }
  if ((int)uVar19 < (int)uVar34) {
    uVar19 = uVar34;
  }
  if ((int)uVar19 < (int)uVar57) {
    uVar19 = uVar57;
  }
  if ((int)uVar19 < (int)uVar58) {
    uVar19 = uVar58;
  }
  if ((int)uVar19 < (int)uVar59) {
    uVar19 = uVar59;
  }
  if ((int)uVar19 < (int)uVar60) {
    uVar19 = uVar60;
  }
  if ((int)uVar19 < (int)uVar61) {
    uVar19 = uVar61;
  }
  if ((int)uVar19 < (int)uVar62) {
    uVar19 = uVar62;
  }
  if ((int)uVar19 < (int)uVar63) {
    uVar19 = uVar63;
  }
  if ((int)uVar19 < (int)uVar35) {
    uVar19 = uVar35;
  }
  if ((int)uVar19 < (int)uVar64) {
    uVar19 = uVar64;
  }
  if ((int)uVar19 < (int)uVar65) {
    uVar19 = uVar65;
  }
  if ((int)uVar19 < (int)uVar66) {
    uVar19 = uVar66;
  }
  if ((int)uVar19 < (int)uVar67) {
    uVar19 = uVar67;
  }
  if ((int)uVar19 < (int)uVar68) {
    uVar19 = uVar68;
  }
  if ((int)uVar19 < (int)uVar69) {
    uVar19 = uVar69;
  }
  if ((int)uVar19 < (int)uVar70) {
    uVar19 = uVar70;
  }
  if ((int)uVar19 < (int)uVar3) {
    uVar19 = uVar3;
  }
  if ((int)uVar19 < (int)uVar36) {
    uVar19 = uVar36;
  }
  if ((int)uVar19 < (int)uVar18) {
    uVar19 = uVar18;
  }
  if ((int)uVar19 < (int)uVar71) {
    uVar19 = uVar71;
  }
  if ((int)uVar19 < (int)uVar72) {
    uVar19 = uVar72;
  }
  if ((int)uVar19 < (int)uVar73) {
    uVar19 = uVar73;
  }
  if ((int)uVar19 < (int)uVar74) {
    uVar19 = uVar74;
  }
  if ((int)uVar19 < (int)uVar75) {
    uVar19 = uVar75;
  }
  if ((int)uVar19 < (int)uVar5) {
    uVar19 = uVar5;
  }
  if (uVar30 <= uVar8) {
    uVar8 = uVar30;
  }
  if (uVar28 <= uVar8) {
    uVar8 = uVar28;
  }
  if (uVar27 <= uVar8) {
    uVar8 = uVar27;
  }
  if (uVar26 <= uVar8) {
    uVar8 = uVar26;
  }
  if (uVar23 <= uVar8) {
    uVar8 = uVar23;
  }
  if (uVar22 <= uVar8) {
    uVar8 = uVar22;
  }
  if (uVar21 <= uVar8) {
    uVar8 = uVar21;
  }
  if (uVar31 <= uVar8) {
    uVar8 = uVar31;
  }
  if (uVar9 <= uVar8) {
    uVar8 = uVar9;
  }
  if (uVar10 <= uVar8) {
    uVar8 = uVar10;
  }
  if (uVar11 <= uVar8) {
    uVar8 = uVar11;
  }
  if (uVar12 <= uVar8) {
    uVar8 = uVar12;
  }
  if (uVar13 <= uVar8) {
    uVar8 = uVar13;
  }
  if (uVar14 <= uVar8) {
    uVar8 = uVar14;
  }
  if (uVar38 <= uVar8) {
    uVar8 = uVar38;
  }
  if (uVar39 <= uVar8) {
    uVar8 = uVar39;
  }
  if (uVar40 <= uVar8) {
    uVar8 = uVar40;
  }
  if (uVar41 <= uVar8) {
    uVar8 = uVar41;
  }
  if (uVar15 <= uVar8) {
    uVar8 = uVar15;
  }
  if (uVar42 <= uVar8) {
    uVar8 = uVar42;
  }
  if (uVar43 <= uVar8) {
    uVar8 = uVar43;
  }
  if (uVar44 <= uVar8) {
    uVar8 = uVar44;
  }
  if (uVar32 <= uVar8) {
    uVar8 = uVar32;
  }
  if (uVar45 <= uVar8) {
    uVar8 = uVar45;
  }
  if (uVar46 <= uVar8) {
    uVar8 = uVar46;
  }
  if (uVar47 <= uVar8) {
    uVar8 = uVar47;
  }
  if (uVar16 <= uVar8) {
    uVar8 = uVar16;
  }
  if (uVar48 <= uVar8) {
    uVar8 = uVar48;
  }
  if (uVar49 <= uVar8) {
    uVar8 = uVar49;
  }
  if (uVar50 <= uVar8) {
    uVar8 = uVar50;
  }
  if (uVar33 <= uVar8) {
    uVar8 = uVar33;
  }
  if (uVar51 <= uVar8) {
    uVar8 = uVar51;
  }
  if (uVar52 <= uVar8) {
    uVar8 = uVar52;
  }
  if (uVar53 <= uVar8) {
    uVar8 = uVar53;
  }
  if (uVar17 <= uVar8) {
    uVar8 = uVar17;
  }
  if (uVar54 <= uVar8) {
    uVar8 = uVar54;
  }
  if (uVar55 <= uVar8) {
    uVar8 = uVar55;
  }
  if (uVar56 <= uVar8) {
    uVar8 = uVar56;
  }
  if (uVar34 <= uVar8) {
    uVar8 = uVar34;
  }
  if (uVar57 <= uVar8) {
    uVar8 = uVar57;
  }
  if (uVar58 <= uVar8) {
    uVar8 = uVar58;
  }
  if (uVar59 <= uVar8) {
    uVar8 = uVar59;
  }
  if (uVar60 <= uVar8) {
    uVar8 = uVar60;
  }
  if (uVar61 <= uVar8) {
    uVar8 = uVar61;
  }
  if (uVar62 <= uVar8) {
    uVar8 = uVar62;
  }
  if (uVar63 <= uVar8) {
    uVar8 = uVar63;
  }
  if (uVar35 <= uVar8) {
    uVar8 = uVar35;
  }
  if (uVar64 <= uVar8) {
    uVar8 = uVar64;
  }
  if (uVar65 <= uVar8) {
    uVar8 = uVar65;
  }
  if (uVar66 <= uVar8) {
    uVar8 = uVar66;
  }
  if (uVar67 <= uVar8) {
    uVar8 = uVar67;
  }
  if (uVar68 <= uVar8) {
    uVar8 = uVar68;
  }
  if (uVar69 <= uVar8) {
    uVar8 = uVar69;
  }
  if (uVar70 <= uVar8) {
    uVar8 = uVar70;
  }
  if (uVar3 <= uVar8) {
    uVar8 = uVar3;
  }
  if (uVar36 <= uVar8) {
    uVar8 = uVar36;
  }
  if (uVar18 <= uVar8) {
    uVar8 = uVar18;
  }
  if (uVar71 <= uVar8) {
    uVar8 = uVar71;
  }
  if (uVar72 <= uVar8) {
    uVar8 = uVar72;
  }
  if (uVar73 <= uVar8) {
    uVar8 = uVar73;
  }
  if (uVar74 <= uVar8) {
    uVar8 = uVar74;
  }
  if (uVar75 <= uVar8) {
    uVar8 = uVar75;
  }
  if (uVar5 <= uVar8) {
    uVar8 = uVar5;
  }
  if (0x13 < (int)(uVar19 - uVar8)) {
    puVar37 = &local_54;
    iVar29 = (int)(uVar19 + uVar8 + 1) >> 1;
    pbVar7 = param_1;
    do {
      while( true ) {
        uVar19 = (uint)(iVar29 < (int)(uint)pbVar7[-1]);
        if (iVar29 < (int)(uint)*pbVar7) {
          uVar19 = uVar19 + 2;
        }
        if (iVar29 < (int)(uint)pbVar7[1]) {
          uVar19 = uVar19 + 4;
        }
        if (iVar29 < (int)(uint)pbVar7[2]) {
          uVar19 = uVar19 + 8;
        }
        if (iVar29 < (int)(uint)pbVar7[3]) {
          uVar19 = uVar19 + 0x10;
        }
        if (iVar29 < (int)(uint)pbVar7[4]) {
          uVar19 = uVar19 + 0x20;
        }
        if (iVar29 < (int)(uint)pbVar7[5]) {
          uVar19 = uVar19 + 0x40;
        }
        if (iVar29 < (int)(uint)pbVar7[6]) {
          uVar19 = uVar19 + 0x80;
        }
        if (iVar29 < (int)(uint)pbVar7[7]) {
          uVar19 = uVar19 + 0x100;
        }
        if ((int)(uint)pbVar7[8] <= iVar29) break;
        pbVar7 = pbVar7 + param_2;
        uVar19 = uVar19 + 0x200 | ~(uVar19 + 0x200) << 0x10;
        puVar37 = puVar37 + 1;
        *puVar37 = uVar19 & uVar19 << 1 & (int)uVar19 >> 1;
        if (puVar37 == local_50 + 9) goto LAB_00011ffc;
      }
      uVar19 = uVar19 | ~uVar19 << 0x10;
      pbVar7 = pbVar7 + param_2;
      puVar37 = puVar37 + 1;
      *puVar37 = uVar19 & (int)uVar19 >> 1 & uVar19 << 1;
    } while (puVar37 != local_50 + 9);
LAB_00011ffc:
    iVar29 = (int)param_3 / 2 + 1;
    local_124 = (1 - param_2) - (int)param_1;
    param_1 = param_1 + param_2 + 7;
    local_120 = local_50;
    do {
      pbVar4 = param_1 + (-8 - param_2);
      puVar37 = local_120 + 1;
      uVar19 = *local_120;
      pbVar6 = param_1 + param_2 + -8;
      pbVar7 = param_1 + -8;
      do {
        pbVar20 = pbVar7 + 1;
        if (((int)uVar19 >> ((uint)(pbVar7 + local_124 + 1) & 0xff) & 1U) != 0) {
          bVar2 = *pbVar20;
          iVar24 = (uint)bVar2 - iVar29;
          iVar25 = iVar29 + (uint)bVar2;
          iVar1 = (int)((short)(ushort)pbVar6[1] * 2 +
                        (short)(ushort)pbVar7[2] * 2 +
                        (short)(ushort)bVar2 * 4 +
                        (short)(ushort)*pbVar7 * 2 +
                        (short)(ushort)pbVar4[1] * 2 + (uint)*pbVar4 + (uint)pbVar4[2] +
                        (uint)*pbVar6 + (uint)pbVar6[2] + 8) >> 4;
          if (iVar25 < iVar1) {
            *pbVar20 = (byte)iVar25;
          }
          else {
            if (iVar24 <= iVar1) {
              iVar24 = iVar1;
            }
            *pbVar20 = (byte)iVar24;
          }
        }
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar20;
      } while (pbVar20 != param_1);
      param_1 = param_1 + param_2;
      local_124 = local_124 - param_2;
      local_120 = puVar37;
    } while (local_50 + 8 != puVar37);
  }
  return;
}



/* ===== FUN_00012210 @ 00012210 size=22240 ===== */

void FUN_00012210(int param_1,size_t param_2,void *param_3,size_t param_4,size_t param_5,int param_6
                 ,int param_7,int param_8,int param_9,void *param_10)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  char cVar17;
  ulonglong uVar18;
  uint uVar19;
  size_t sVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  void *pvVar32;
  int iVar33;
  byte *pbVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  byte *pbVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  char cVar54;
  int iVar55;
  uint uVar56;
  uint uVar57;
  int iVar58;
  undefined4 *puVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  uint uVar64;
  uint uVar65;
  int iVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint *puVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  uint uVar77;
  int iVar78;
  void *pvVar79;
  int iVar80;
  void *pvVar81;
  undefined4 *puVar82;
  undefined4 *puVar83;
  size_t __n;
  uint uVar84;
  int iVar85;
  int iVar86;
  size_t sVar87;
  int iVar88;
  void *pvVar89;
  uint uVar90;
  int iVar91;
  byte *pbVar92;
  byte *pbVar93;
  uint *puVar94;
  int iVar95;
  int iVar96;
  uint uVar97;
  void *pvVar98;
  uint uVar99;
  int iVar100;
  uint uVar101;
  byte *pbVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  size_t sVar108;
  uint uVar109;
  uint uVar110;
  uint *puVar111;
  int iVar112;
  int iVar113;
  uint uVar114;
  uint uVar115;
  uint *puVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  int iVar120;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint *puVar124;
  uint *puVar125;
  undefined4 uVar126;
  byte *pbVar127;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  uint uVar135;
  uint uVar136;
  uint uVar137;
  int iVar138;
  uint uVar139;
  uint uVar140;
  uint uVar141;
  uint uVar142;
  uint uVar143;
  uint uVar144;
  uint uVar145;
  uint uVar146;
  uint uVar147;
  uint uVar148;
  uint uVar149;
  uint uVar150;
  byte bVar151;
  int iVar152;
  byte *pbVar153;
  char *pcVar154;
  uint uVar155;
  uint uVar156;
  uint uVar157;
  uint *puVar158;
  int iVar159;
  undefined4 uVar160;
  size_t __n_00;
  int iVar161;
  uint uVar162;
  char *pcVar163;
  uint uVar164;
  uint uVar165;
  uint uVar166;
  uint *puVar167;
  byte *pbVar168;
  bool bVar169;
  undefined8 uVar170;
  undefined8 uVar171;
  undefined8 uVar172;
  byte *local_858;
  uint *local_84c;
  uint *local_848;
  uint *local_840;
  uint *local_83c;
  uint *local_838;
  uint *local_834;
  uint *local_830;
  uint *local_82c;
  uint *local_828;
  uint *local_824;
  uint *local_820;
  byte *local_81c;
  uint *local_814;
  byte *local_810;
  uint *local_808;
  uint *local_804;
  uint *local_800;
  uint *local_7fc;
  uint *local_7f8;
  uint *local_7f4;
  int local_7f0;
  byte *local_7ec;
  byte *local_7e8;
  uint local_7e4;
  int local_7e0;
  int local_7dc;
  void *local_7cc;
  int local_7b8;
  int local_7ac;
  int local_7a4;
  int local_7a0;
  int local_794;
  int local_78c;
  int local_698;
  int local_664;
  int local_658;
  void *local_654;
  int local_64c;
  int local_648;
  size_t local_63c;
  int local_630;
  int local_604;
  int local_5f8;
  uint local_5f0;
  uint uStack_5ec;
  uint local_5e8;
  uint uStack_5e4;
  uint local_5a4;
  uint local_5a0 [5];
  uint local_58c;
  uint local_588;
  uint local_584;
  uint local_580;
  uint local_57c;
  int aiStack_578 [2];
  uint *local_570;
  uint local_568;
  uint uStack_564;
  uint local_560;
  uint uStack_55c;
  int aiStack_558 [6];
  int local_540;
  int local_53c;
  int local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_518;
  undefined8 local_4f8;
  int local_d4;
  int local_cc;
  int local_c8;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  memcpy(aiStack_578,param_10,0x540);
  iVar55 = *(int *)((int)param_10 + 0x504);
  puVar71 = *(uint **)((int)param_10 + 8);
  iVar72 = *(int *)((int)param_10 + 0x38);
  iVar73 = *(int *)((int)param_10 + 0x3c);
  iVar74 = *(int *)((int)param_10 + 0x40);
  uVar170 = *(undefined8 *)((int)param_10 + 0x48);
  uVar171 = *(undefined8 *)((int)param_10 + 0x50);
  iVar75 = *(int *)((int)param_10 + 0x4a4);
  local_828 = *(uint **)((int)param_10 + 0x4ac);
  local_7f8 = *(uint **)((int)param_10 + 0x4b0);
  local_5f8 = *(int *)((int)param_10 + 0x4f0);
  iVar76 = *(int *)((int)param_10 + 0x500);
  if (param_9 != 0) {
    uVar77 = 4 - iVar76;
  }
  else {
    uVar77 = 4;
  }
  iVar22 = *(int *)((int)param_10 + 0x514);
  uVar40 = *(uint *)((int)param_10 + 0x508);
  iVar23 = *(int *)((int)param_10 + 0x518);
  uVar41 = *(uint *)((int)param_10 + 0x50c);
  iVar24 = *(int *)((int)param_10 + 0x51c);
  uVar25 = *(undefined4 *)((int)param_10 + 0x520);
  iVar26 = *(int *)((int)param_10 + 0x524);
  iVar27 = *(int *)((int)param_10 + 0x528);
  iVar28 = *(int *)((int)param_10 + 0x52c);
  iVar29 = *(int *)((int)param_10 + 0x530);
  iVar30 = *(int *)((int)param_10 + 0x534);
  local_7e4 = uVar40;
  uVar19 = uVar77;
  if (param_9 != 0) {
    local_7e4 = uVar41;
    uVar19 = 4 - iVar55;
  }
  iVar78 = iVar73;
  if ((int)param_2 < 1) {
    iVar78 = iVar73 + param_2 * -0x17;
  }
  if ((int)param_4 < 1) {
    pvVar79 = (void *)(iVar72 + param_4 * -0x17 + 0x20);
  }
  else {
    pvVar79 = (void *)(iVar72 + 0x20);
  }
  uVar56 = local_7e4 & 0x2000000;
  if ((uVar56 != 0) && ((local_7e4 & 0x4400) == 0)) {
    av_log(param_10,0x18,DAT_000178f4 + 0x17820);
  }
  uVar57 = local_7e4 & 0x40000;
  if (uVar57 == 0) {
    if ((local_7e4 & 0xc20000) == 0) {
      if ((local_7e4 & 0x90401) == 0) {
        if ((local_7e4 & 0x200) == 0) {
          if ((local_7e4 & 4) == 0) {
            local_7f4 = (uint *)0xffffffff;
            local_604 = 8;
            local_7f0 = 0;
            local_7dc = 0;
          }
          else {
            local_7f0 = -1;
            local_7dc = 1;
            local_604 = 9;
            local_7f4 = (uint *)0x0;
          }
        }
        else {
          local_7dc = 3;
          local_7f4 = (uint *)0x2;
          local_7f0 = -3;
          local_604 = 0xb;
        }
      }
      else {
        local_7dc = 5;
        local_7f4 = (uint *)0x4;
        local_7f0 = -5;
        local_604 = 0xd;
      }
    }
    else {
      local_7dc = 6;
      local_604 = 0xe;
      local_7f4 = (uint *)0x5;
      local_7f0 = -6;
    }
  }
  else {
    local_7dc = 8;
    local_7f4 = (uint *)0x7;
    local_7f0 = -8;
    local_604 = 0x10;
  }
  if (param_9 == 0) {
    local_5f8 = local_5f8 + 1;
    if (local_5f8 == 1) {
      uVar18 = (ulonglong)((longlong)(int)param_5 * (longlong)param_6) >> 6;
      iVar80 = (int)(uVar18 >> 0x20);
      uVar70 = (uint)uVar18;
      uVar84 = (iVar80 << 4 |
               ((uint)((ulonglong)((longlong)(int)param_5 * (longlong)param_6) >> 0x20) & 0x3f) >> 2
               ) - (iVar80 + (uint)(uVar70 * 0x10 < uVar70));
      uVar70 = uVar70 * 0xf >> 8 | uVar84 * 0x1000000;
      uVar84 = uVar84 >> 8;
      *puVar71 = uVar70;
      puVar71[1] = uVar84;
    }
    else {
      uVar70 = *puVar71;
      uVar84 = puVar71[1];
    }
    uVar99 = 0;
    uVar64 = 0;
    puVar125 = puVar71;
    uVar65 = uVar70;
    uVar90 = uVar84;
    while( true ) {
      bVar169 = CARRY4(uVar99,uVar65);
      uVar99 = uVar99 + uVar65;
      uVar64 = uVar64 + uVar90 + (uint)bVar169;
      if (puVar71 + 0x1fe == puVar125) break;
      uVar65 = puVar125[2];
      uVar90 = puVar125[3];
      puVar125 = puVar125 + 2;
    }
    uVar172 = VectorShiftRight(CONCAT44(uVar25,uVar25),0x20);
    uVar172 = av_rescale(uVar99,uVar64,iVar24,iVar24 >> 0x1f,uVar172);
    uVar90 = (uint)((ulonglong)uVar172 >> 0x20);
    uVar65 = (uint)uVar172;
    bVar169 = uVar90 <= uVar64;
    if (uVar64 == uVar90) {
      bVar169 = uVar65 <= uVar99;
    }
    if (bVar169) {
      iVar120 = 0xfe;
      uVar162 = uVar99 - puVar71[0x1fe];
      uVar132 = uVar64 - (puVar71[0x1ff] + (uint)(uVar99 < puVar71[0x1fe]));
      puVar125 = puVar71 + 0x1fe;
      do {
        bVar169 = uVar90 <= uVar132;
        if (uVar132 == uVar90) {
          bVar169 = uVar65 <= uVar162;
        }
        if (!bVar169) break;
        uVar133 = puVar125[-2];
        bVar169 = uVar162 < uVar133;
        uVar162 = uVar162 - uVar133;
        uVar132 = uVar132 - (puVar125[-1] + (uint)bVar169);
        iVar120 = iVar120 + -1;
        puVar125 = puVar125 + -2;
      } while (iVar120 != 0);
      iVar44 = 1;
      uVar162 = uVar99 - uVar70;
      uVar64 = uVar64 - (uVar84 + (uVar99 < uVar70));
      puVar125 = puVar71;
      do {
        bVar169 = uVar64 <= uVar90;
        if (uVar90 == uVar64) {
          bVar169 = uVar162 <= uVar65;
        }
        if (bVar169 && (uVar90 != uVar64 || uVar65 != uVar162)) {
          iVar44 = iVar44 - iVar120;
          iVar80 = iVar44 >> 0x1f;
          goto LAB_00014108;
        }
        uVar84 = puVar125[2];
        iVar44 = iVar44 + 1;
        bVar169 = uVar162 < uVar84;
        uVar162 = uVar162 - uVar84;
        uVar64 = uVar64 - (puVar125[3] + (uint)bVar169);
        puVar125 = puVar125 + 2;
      } while (iVar44 != 0x100);
      iVar44 = 0x100 - iVar120;
      iVar80 = iVar44 >> 0x1f;
    }
    else {
      iVar44 = -0xff;
      iVar80 = -1;
      iVar120 = 0xff;
    }
LAB_00014108:
    iVar112 = iVar23 - iVar22;
    uVar84 = av_rescale(iVar112,iVar112 >> 0x1f,0x400,0,iVar44,iVar80);
    uVar70 = iVar120 - iVar22;
    local_5f0 = uVar70 * 0x10000 | uVar70 & 0xffff;
    uStack_5ec = uVar70 * 0x10000 | uVar70 & 0xffff;
    local_5e8 = uVar84 << 0x10 | uVar84 & 0xffff;
    uStack_5e4 = uVar84 << 0x10 | uVar84 & 0xffff;
    if ((local_7e4 & 8) == 0) {
      local_664 = 0x10000;
    }
    else {
      local_664 = av_rescale(iVar112,iVar112 >> 0x1f,0x10000,0,iVar44,iVar80);
    }
  }
  else {
    local_664 = 0x10000;
    local_5e8 = 0x1000100;
    uStack_5e4 = 0x1000100;
    local_5f0 = 0;
    uStack_5ec = 0;
  }
  iVar80 = param_1 + param_2 * -8;
  pvVar81 = (void *)((int)pvVar79 + param_4);
  if ((int)param_5 < 1) {
    local_630 = param_4 << 3;
  }
  else {
    iVar44 = param_4 * 4;
    local_630 = param_4 * 8;
    iVar120 = param_4 * 0xc;
    puVar125 = (uint *)((int)pvVar81 + param_4 * 6);
    local_83c = (uint *)((int)pvVar81 + param_4 * 7);
    local_84c = (uint *)((int)pvVar81 + param_4 * 0xc);
    local_840 = (uint *)((int)pvVar81 + param_4 * 10);
    local_848 = (uint *)((int)pvVar79 + param_4 * 10);
    local_830 = (uint *)((int)pvVar79 + param_4 * 6);
    iVar112 = 0;
    local_834 = (uint *)((int)pvVar81 + local_630);
    local_82c = puVar125;
    do {
      iVar42 = iVar112 + iVar80;
      iVar58 = (iVar112 >> 2 & 6U) + local_7dc;
      iVar159 = param_2 * iVar58;
      iVar31 = (int)pvVar81 + iVar112;
      iVar58 = param_4 * iVar58;
      puVar82 = (undefined4 *)((int)pvVar81 + local_630 + iVar112);
      HintPreloadData(iVar42 + iVar159 + 0x20);
      HintPreloadData(iVar42 + iVar159 + param_2 + 0x20);
      HintPreloadData(iVar31 + iVar58 + 0x20);
      iVar42 = 8;
      HintPreloadData(iVar31 + iVar58 + param_4 + 0x20);
      puVar59 = (undefined4 *)(iVar80 + param_2 * 8 + iVar112);
      puVar83 = puVar82;
      if ((local_7e4 & 8) == 0) {
        do {
          uVar126 = *puVar59;
          iVar42 = iVar42 + -1;
          uVar160 = puVar59[1];
          puVar59 = (undefined4 *)((int)puVar59 + param_2);
          *puVar83 = uVar126;
          puVar83[1] = uVar160;
          puVar83 = (undefined4 *)((int)puVar83 + param_4);
        } while (iVar42 != 0);
      }
      else {
        do {
          uVar126 = *puVar59;
          iVar42 = iVar42 + -1;
          uVar160 = puVar59[1];
          puVar59 = (undefined4 *)((int)puVar59 + param_2);
          *puVar83 = uVar126;
          puVar83[1] = uVar160;
          puVar83 = (undefined4 *)((int)puVar83 + param_4);
        } while (iVar42 != 0);
      }
      iVar42 = 5;
      puVar83 = puVar82;
      do {
        iVar42 = iVar42 + -1;
        uVar126 = puVar82[1];
        puVar83 = (undefined4 *)((int)puVar83 - param_4);
        *puVar83 = *puVar82;
        puVar83[1] = uVar126;
      } while (iVar42 != 0);
      if ((local_7e4 & 0x10000) == 0) {
        if ((local_7e4 & 0x20000) == 0) {
          if ((local_7e4 & 0x80000) == 0) {
            if (uVar57 == 0) {
              if ((local_7e4 & 0x400000) == 0) {
                if ((local_7e4 & 0x800000) != 0) {
                  FUN_00011054(iVar31,param_4,iVar74 + iVar112,iVar74 + param_5 + iVar112);
                }
              }
              else {
                FUN_00010ea0(iVar31,param_4,iVar74 + iVar112);
              }
            }
            else {
              FUN_00010d0c(iVar31,param_4);
            }
          }
          else {
            pbVar34 = (byte *)((int)pvVar81 + iVar112 + iVar44 + -1);
            pbVar168 = (byte *)((int)pvVar81 + iVar112 + param_4 * 7 + -1);
            local_858 = (byte *)((int)pvVar81 + iVar112 + param_4 * 8 + -1);
            pbVar153 = (byte *)((int)pvVar81 + iVar112 + param_4 * 0xb + -1);
            local_838 = (uint *)((int)pvVar81 + iVar112 + iVar120 + -1);
            pbVar39 = (byte *)((int)puVar125 + iVar112);
            pbVar127 = (byte *)((int)pvVar81 + iVar112 + param_4 * 5);
            pbVar38 = (byte *)((int)pvVar81 + iVar112 + param_4 * 10);
            pbVar93 = (byte *)((int)pvVar81 + iVar112 + param_4 * 9);
            do {
              pbVar34 = pbVar34 + 1;
              bVar21 = *pbVar34;
              bVar151 = *pbVar39;
              bVar12 = *pbVar127;
              bVar14 = (byte)((uint)bVar12 - (uint)bVar151 >> 0x18);
              bVar15 = (byte)((uint)bVar21 - (uint)bVar12 >> 0x18);
              bVar16 = (byte)((uint)bVar151 - (uint)bVar21 >> 0x18);
              *pbVar127 = ((char)(bVar15 ^ bVar14) >> 7 | bVar12) &
                          ((char)(bVar15 ^ bVar16) >> 7 | bVar21) &
                          ((char)(bVar16 ^ bVar14) >> 7 | bVar151);
              bVar21 = *pbVar39;
              local_858 = local_858 + 1;
              bVar151 = *local_858;
              pbVar168 = pbVar168 + 1;
              bVar12 = *pbVar168;
              bVar14 = (byte)((uint)bVar21 - (uint)bVar12 >> 0x18);
              bVar15 = (byte)((uint)bVar12 - (uint)bVar151 >> 0x18);
              bVar16 = (byte)((uint)bVar151 - (uint)bVar21 >> 0x18);
              *pbVar168 = ((char)(bVar14 ^ bVar15) >> 7 | bVar12) &
                          ((char)(bVar14 ^ bVar16) >> 7 | bVar21) &
                          ((char)(bVar16 ^ bVar15) >> 7 | bVar151);
              bVar21 = *pbVar38;
              bVar151 = *local_858;
              bVar12 = *pbVar93;
              bVar14 = (byte)((uint)bVar21 - (uint)bVar151 >> 0x18);
              bVar15 = (byte)((uint)bVar12 - (uint)bVar21 >> 0x18);
              bVar16 = (byte)((uint)bVar151 - (uint)bVar12 >> 0x18);
              *pbVar93 = ((char)(bVar16 ^ bVar15) >> 7 | bVar12) &
                         ((char)(bVar16 ^ bVar14) >> 7 | bVar151) &
                         ((char)(bVar14 ^ bVar15) >> 7 | bVar21);
              bVar21 = *pbVar38;
              local_838 = (uint *)((int)local_838 + 1);
              bVar151 = *(byte *)local_838;
              pbVar153 = pbVar153 + 1;
              bVar12 = *pbVar153;
              bVar14 = (byte)((uint)bVar21 - (uint)bVar12 >> 0x18);
              bVar15 = (byte)((uint)bVar151 - (uint)bVar21 >> 0x18);
              bVar16 = (byte)((uint)bVar12 - (uint)bVar151 >> 0x18);
              *pbVar153 = ((char)(bVar14 ^ bVar16) >> 7 | bVar12) &
                          ((char)(bVar14 ^ bVar15) >> 7 | bVar21) &
                          ((char)(bVar15 ^ bVar16) >> 7 | bVar151);
              pbVar39 = pbVar39 + 1;
              pbVar127 = pbVar127 + 1;
              pbVar38 = pbVar38 + 1;
              pbVar93 = pbVar93 + 1;
            } while ((byte *)((int)pvVar81 + iVar112 + iVar44 + 7) != pbVar34);
          }
        }
        else {
          FUN_000112e4(iVar31,param_4,iVar74 + iVar112);
        }
      }
      else {
        uVar84 = *local_82c;
        uVar70 = *(uint *)((int)pvVar81 + iVar112 + iVar44);
        *local_830 = (uVar70 | uVar84) - ((uVar70 ^ uVar84) >> 1 & 0x7f7f7f7f);
        uVar70 = *local_834;
        *local_83c = (uVar84 | uVar70) - ((uVar84 ^ uVar70) >> 1 & 0x7f7f7f7f);
        uVar84 = *local_840;
        *local_848 = (uVar70 | uVar84) - ((uVar70 ^ uVar84) >> 1 & 0x7f7f7f7f);
        *(uint *)((int)pvVar79 + iVar112 + iVar120) =
             (uVar84 | *local_84c) - ((uVar84 ^ *local_84c) >> 1 & 0x7f7f7f7f);
        uVar70 = local_82c[1];
        uVar84 = *(uint *)((int)pvVar81 + iVar112 + iVar44 + 4);
        local_830[1] = (uVar84 | uVar70) - ((uVar84 ^ uVar70) >> 1 & 0x7f7f7f7f);
        uVar84 = local_834[1];
        local_83c[1] = (uVar70 | uVar84) - ((uVar70 ^ uVar84) >> 1 & 0x7f7f7f7f);
        uVar70 = local_840[1];
        local_848[1] = (uVar84 | uVar70) - ((uVar84 ^ uVar70) >> 1 & 0x7f7f7f7f);
        *(uint *)((int)pvVar79 + iVar112 + iVar120 + 4) =
             (uVar70 | local_84c[1]) - ((uVar70 ^ local_84c[1]) >> 1 & 0x7f7f7f7f);
      }
      iVar112 = iVar112 + 8;
      local_82c = local_82c + 2;
      local_830 = local_830 + 2;
      local_834 = local_834 + 2;
      local_83c = local_83c + 2;
      local_840 = local_840 + 2;
      local_848 = local_848 + 2;
      local_84c = local_84c + 2;
    } while (iVar112 != (param_5 - 1 & 0xfffffff8) + 8);
  }
  __n = param_4;
  if ((int)param_4 < 0) {
    __n = -param_4;
  }
  if (__n == param_5) {
    pvVar32 = (void *)((int)pvVar81 + local_630);
    pvVar98 = param_3;
    iVar80 = local_7dc;
    if ((int)param_4 < 1) {
      pvVar32 = (void *)((int)pvVar32 + (int)local_7f4 * param_4);
      pvVar98 = (void *)((int)param_3 + (int)local_7f4 * param_4);
      iVar80 = local_7f0;
    }
    memcpy(pvVar98,pvVar32,iVar80 * param_4);
  }
  else if (local_7dc != 0) {
    iVar80 = 0;
    pvVar98 = (void *)((int)pvVar81 + local_630);
    pvVar32 = param_3;
    do {
      iVar80 = iVar80 + 1;
      pvVar32 = memcpy(pvVar32,pvVar98,param_5);
      pvVar98 = (void *)((int)pvVar98 + param_4);
      pvVar32 = (void *)((int)pvVar32 + param_4);
    } while (iVar80 != local_7dc);
  }
  iVar80 = DAT_000131ac;
  if (0 < param_6) {
    uVar84 = param_6 - 1;
    iVar112 = param_4 * 6;
    iVar120 = param_4 * 3;
    iVar159 = local_7dc * param_2;
    pvVar32 = (void *)((int)param_3 + uVar84 * param_4);
    iVar31 = iVar120 + 7;
    local_63c = -(param_6 * param_4);
    local_648 = 0;
    iVar42 = local_630 - param_4;
    iVar58 = param_4 + 1;
    iVar44 = param_8;
    if (param_8 < 0) {
      iVar44 = -param_8;
    }
    iVar1 = param_4 * 8;
    __n_00 = param_2;
    if ((int)param_2 < 0) {
      __n_00 = -param_2;
    }
    local_658 = param_6;
    local_698 = 0;
    local_7b8 = 8;
    local_654 = param_3;
    local_64c = param_1;
    do {
      iVar85 = param_6 - local_658;
      iVar60 = (param_6 + 0xf) - local_658;
      local_7a0 = local_64c;
      iVar86 = iVar85 >> (uVar19 & 0xff);
      iVar61 = param_8 * iVar86;
      iVar86 = iVar44 * iVar86;
      if (iVar60 < param_6) {
        local_7cc = local_654;
      }
      else {
        uVar70 = local_658 - local_7dc & ~(local_658 - local_7dc >> 0x1f);
        pvVar98 = (void *)(iVar159 + local_64c);
        pvVar89 = (void *)(iVar78 + iVar159);
        if ((int)param_2 < 1) {
          iVar91 = uVar70 - 1;
          uVar70 = -uVar70;
          iVar91 = param_2 * iVar91;
          pvVar98 = (void *)((int)pvVar98 + iVar91);
          pvVar89 = (void *)(iVar78 + iVar159 + iVar91);
        }
        memcpy(pvVar89,pvVar98,param_2 * uVar70);
        iVar91 = local_658;
        if (local_658 < 8) {
          iVar91 = 8;
        }
        if (iVar91 < local_604) {
          pvVar98 = (void *)(iVar91 * param_2 + iVar78);
          do {
            iVar91 = iVar91 + 1;
            memcpy(pvVar98,(void *)(uVar84 * param_2 + param_1),__n_00);
            pvVar98 = (void *)((int)pvVar98 + param_2);
          } while (local_604 != iVar91);
        }
        iVar138 = local_658 + 1;
        pvVar98 = (void *)((int)local_654 - param_4);
        iVar91 = iVar138;
        iVar161 = local_658;
        if (local_7dc < local_658) {
          iVar91 = local_604 + -7;
          iVar161 = local_7dc;
        }
        pvVar89 = pvVar79;
        if ((int)param_4 < 1) {
          iVar91 = -iVar91;
          pvVar98 = (void *)((int)pvVar98 + iVar161 * param_4);
          pvVar89 = (void *)((int)pvVar79 + iVar161 * param_4);
        }
        memcpy(pvVar89,pvVar98,param_4 * iVar91);
        local_7cc = pvVar81;
        local_7a0 = iVar78;
        if (iVar138 <= local_7dc) {
          pvVar98 = (void *)((int)pvVar79 + local_648 + param_6 * param_4 + param_4);
          do {
            iVar138 = iVar138 + 1;
            pvVar98 = memcpy(pvVar98,pvVar32,__n);
            pvVar98 = (void *)((int)pvVar98 + param_4);
          } while (iVar138 != local_7dc + 1);
        }
      }
      uVar70 = (local_7e4 & 7) >> 2;
      if (iVar85 < 1) {
        uVar70 = 0;
      }
      if ((int)param_5 < 1) {
        local_81c = (byte *)0x0;
      }
      else {
        local_81c = (byte *)0x0;
        do {
          pbVar39 = local_81c;
          sVar87 = (int)local_81c + 0x20U;
          if ((int)param_5 <= (int)((int)local_81c + 0x20U)) {
            sVar87 = param_5;
          }
          iVar161 = sVar87 - (int)local_81c;
          iVar91 = iVar161 + 7;
          if (-1 < iVar161) {
            iVar91 = iVar161;
          }
          iVar91 = iVar91 >> 3;
          if (7 < iVar161) {
            if (param_9 == 0) {
              iVar138 = (int)local_81c >> (uVar77 & 0xff);
              iVar62 = param_7 + iVar61;
              iVar33 = iVar75 + iVar86;
              cVar54 = *(char *)(iVar62 + iVar138);
              cVar13 = *(char *)(iVar33 + iVar138);
              puVar125 = puVar71 + (uint)*(byte *)(local_7a0 + param_2 * 0xc + 4) * 2;
              uVar65 = *puVar125;
              *puVar125 = uVar65 + 1;
              puVar125[1] = puVar125[1] + (uint)(0xfffffffe < uVar65);
              local_98 = local_664 * cVar13 + 0x8000 >> 0x10;
              local_b8 = local_664 * cVar54 + 0x8000 >> 0x10;
              if (0xf < iVar161) {
                iVar161 = (int)((int)local_81c + 8U) >> (uVar77 & 0xff);
                cVar54 = *(char *)(iVar62 + iVar161);
                cVar13 = *(char *)(iVar33 + iVar161);
                puVar125 = puVar71 + (uint)*(byte *)(local_7a0 + param_2 * 0xc + 0xc) * 2;
                uVar65 = *puVar125;
                *puVar125 = uVar65 + 1;
                puVar125[1] = puVar125[1] + (uint)(0xfffffffe < uVar65);
                local_b4 = local_664 * cVar54 + 0x8000 >> 0x10;
                local_94 = local_664 * cVar13 + 0x8000 >> 0x10;
                if (iVar91 != 2) {
                  iVar138 = local_7a0 + param_2 * 0xc;
                  iVar161 = (int)((int)local_81c + 0x10U) >> (uVar77 & 0xff);
                  cVar54 = *(char *)(iVar62 + iVar161);
                  cVar13 = *(char *)(iVar33 + iVar161);
                  puVar125 = puVar71 + (uint)*(byte *)(iVar138 + 0x14) * 2;
                  uVar65 = *puVar125;
                  *puVar125 = uVar65 + 1;
                  puVar125[1] = puVar125[1] + (uint)(0xfffffffe < uVar65);
                  local_b0 = local_664 * cVar54 + 0x8000 >> 0x10;
                  local_90 = local_664 * cVar13 + 0x8000 >> 0x10;
                  if (iVar91 != 3) {
                    iVar91 = (int)((int)local_81c + 0x18U) >> (uVar77 & 0xff);
                    puVar125 = puVar71 + (uint)*(byte *)(iVar138 + 0x1c) * 2;
                    cVar54 = *(char *)(iVar62 + iVar91);
                    cVar13 = *(char *)(iVar33 + iVar91);
                    uVar65 = *puVar125;
                    *puVar125 = uVar65 + 1;
                    puVar125[1] = puVar125[1] + (uint)(0xfffffffe < uVar65);
                    local_ac = local_664 * cVar54 + 0x8000 >> 0x10;
                    local_8c = local_664 * cVar13 + 0x8000 >> 0x10;
                  }
                }
              }
            }
            else {
              iVar138 = (int)local_81c >> (uVar77 & 0xff);
              iVar33 = iVar75 + iVar86;
              iVar62 = param_7 + iVar61;
              local_98 = (int)*(char *)(iVar33 + iVar138);
              local_b8 = (int)*(char *)(iVar62 + iVar138);
              if (0xf < iVar161) {
                iVar161 = (int)((int)local_81c + 8U) >> (uVar77 & 0xff);
                local_94 = (int)*(char *)(iVar33 + iVar161);
                local_b4 = (int)*(char *)(iVar62 + iVar161);
                if (iVar91 != 2) {
                  iVar161 = (int)((int)local_81c + 0x10U) >> (uVar77 & 0xff);
                  local_90 = (int)*(char *)(iVar33 + iVar161);
                  local_b0 = (int)*(char *)(iVar62 + iVar161);
                  if (iVar91 != 3) {
                    iVar91 = (int)((int)local_81c + 0x18U) >> (uVar77 & 0xff);
                    local_8c = (int)*(char *)(iVar33 + iVar91);
                    local_ac = (int)*(char *)(iVar62 + iVar91);
                  }
                }
              }
            }
          }
          if ((int)local_81c < (int)sVar87) {
            iVar91 = param_4 * 7;
            puVar125 = (uint *)((int)local_7cc + param_4 * 5);
            local_800 = (uint *)((int)local_7cc + param_4 * 4);
            local_808 = local_800 + param_4;
            local_7fc = (uint *)((int)local_7cc + param_4 * 6);
            iVar161 = param_4 * 9;
            local_804 = (uint *)((int)local_7cc + param_4 * 10);
            iVar138 = param_4 * 0xc;
            local_7f4 = (uint *)((int)local_7cc + iVar161);
            local_7f8 = (uint *)((int)local_7cc + param_4 * 0xb);
            iVar33 = param_4 * 5 + iVar42;
            local_834 = (uint *)((int)local_7cc + iVar91);
            pbVar127 = local_81c;
            local_84c = local_7f8;
            local_848 = local_800;
            local_840 = (uint *)((int)local_7cc + iVar138);
            local_83c = local_7fc;
            local_838 = puVar125;
            local_830 = local_808;
            local_82c = local_804;
            local_828 = local_7f4;
            do {
              iVar43 = (local_7a0 - (int)local_81c) + (int)pbVar127;
              iVar88 = ((int)pbVar127 >> 2 & 6U) + local_7dc;
              iVar62 = (int)local_7cc + ((int)pbVar127 - (int)local_81c);
              iVar63 = param_2 * iVar88;
              iVar88 = param_4 * iVar88;
              HintPreloadData(iVar43 + iVar63 + 0x20);
              HintPreloadData(iVar43 + iVar63 + param_2 + 0x20);
              HintPreloadData(iVar62 + iVar88 + 0x20);
              HintPreloadData(iVar62 + iVar88 + param_4 + 0x20);
              puVar83 = (undefined4 *)
                        ((int)local_7cc + (int)pbVar127 + (param_4 * local_7dc - (int)local_81c));
              puVar59 = (undefined4 *)(((iVar159 + local_7a0) - (int)local_81c) + (int)pbVar127);
              iVar43 = 8;
              if ((local_7e4 & 8) == 0) {
                do {
                  uVar160 = *puVar59;
                  iVar43 = iVar43 + -1;
                  uVar126 = puVar59[1];
                  puVar59 = (undefined4 *)((int)puVar59 + param_2);
                  *puVar83 = uVar160;
                  puVar83[1] = uVar126;
                  puVar83 = (undefined4 *)((int)puVar83 + param_4);
                } while (iVar43 != 0);
              }
              else {
                do {
                  uVar160 = *puVar59;
                  iVar43 = iVar43 + -1;
                  uVar126 = puVar59[1];
                  puVar59 = (undefined4 *)((int)puVar59 + param_2);
                  *puVar83 = uVar160;
                  puVar83[1] = uVar126;
                  puVar83 = (undefined4 *)((int)puVar83 + param_4);
                } while (iVar43 != 0);
              }
              if ((local_7e4 & 0x10000) == 0) {
                if ((local_7e4 & 0x20000) == 0) {
                  if ((local_7e4 & 0x80000) == 0) {
                    if (uVar57 == 0) {
                      if ((local_7e4 & 0x400000) == 0) {
                        if ((local_7e4 & 0x800000) != 0) {
                          FUN_00011054(iVar62,param_4,iVar74 + (int)pbVar127,
                                       param_5 + iVar74 + (int)pbVar127);
                        }
                      }
                      else {
                        pbVar93 = (byte *)((int)local_848 + -1);
                        local_820 = local_840;
                        local_824 = local_84c;
                        puVar94 = local_838;
                        puVar111 = local_83c;
                        puVar116 = local_834;
                        puVar124 = local_828;
                        pbVar38 = (byte *)(iVar74 + (int)pbVar127);
                        puVar158 = local_82c;
                        puVar167 = local_830;
                        local_810 = (byte *)((int)local_7cc +
                                            (int)pbVar127 + ((param_4 + iVar33) - (int)local_81c));
                        do {
                          pbVar93 = pbVar93 + 1;
                          uVar90 = *puVar94;
                          uVar65 = (int)((((short)(ushort)(byte)*puVar111 * 4 +
                                          (short)(ushort)(byte)uVar90 * 2 +
                                          ((uint)*pbVar93 * 4 - (uint)*pbVar38)) -
                                         (uint)(byte)*puVar116) + 4) >> 3;
                          if ((uVar65 & 0xffffff00) != 0) {
                            uVar65 = (int)~uVar65 >> 0x1f;
                          }
                          *(byte *)puVar94 = (byte)uVar65;
                          bVar21 = (byte)*puVar167;
                          uVar65 = (int)((((short)(ushort)bVar21 * 4 +
                                          (short)(ushort)bVar21 * 2 +
                                          ((uint)(byte)*puVar111 * 4 - (uint)(byte)uVar90)) -
                                         (uint)(byte)*puVar124) + 4) >> 3;
                          if ((uVar65 & 0xffffff00) != 0) {
                            uVar65 = (int)~uVar65 >> 0x1f;
                          }
                          *(byte *)puVar116 = (byte)uVar65;
                          bVar151 = (byte)*puVar158;
                          uVar65 = (int)((((short)(ushort)bVar151 * 4 +
                                          (short)(ushort)bVar151 * 2 +
                                          ((uint)(byte)*puVar167 * 4 - (uint)bVar21)) -
                                         (uint)(byte)*local_824) + 4) >> 3;
                          if ((uVar65 & 0xffffff00) != 0) {
                            uVar65 = (int)~uVar65 >> 0x1f;
                          }
                          *(byte *)puVar124 = (byte)uVar65;
                          bVar21 = (byte)*local_820;
                          uVar65 = (int)((((short)(ushort)bVar21 * 4 +
                                          (short)(ushort)bVar21 * 2 +
                                          ((uint)(byte)*puVar158 * 4 - (uint)bVar151)) -
                                         (uint)*local_810) + 4) >> 3;
                          if ((uVar65 & 0xffffff00) != 0) {
                            uVar65 = (int)~uVar65 >> 0x1f;
                          }
                          *(byte *)local_824 = (byte)uVar65;
                          *pbVar38 = bVar21;
                          puVar94 = (uint *)((int)puVar94 + 1);
                          puVar111 = (uint *)((int)puVar111 + 1);
                          puVar116 = (uint *)((int)puVar116 + 1);
                          puVar124 = (uint *)((int)puVar124 + 1);
                          pbVar38 = pbVar38 + 1;
                          puVar158 = (uint *)((int)puVar158 + 1);
                          puVar167 = (uint *)((int)puVar167 + 1);
                          local_824 = (uint *)((int)local_824 + 1);
                          local_820 = (uint *)((int)local_820 + 1);
                          local_810 = local_810 + 1;
                        } while (pbVar93 != (byte *)((int)local_848 + 7));
                      }
                    }
                    else {
                      pbVar92 = (byte *)(iVar31 + param_4 * -4 + (int)local_848);
                      pbVar102 = (byte *)((int)local_7cc +
                                         (int)pbVar127 + ((iVar120 + -1) - (int)local_81c));
                      pbVar38 = (byte *)((int)local_7f4 + ((int)pbVar127 - (int)local_81c));
                      pbVar93 = (byte *)((int)local_7f8 + ((int)pbVar127 - (int)local_81c));
                      puVar94 = local_834;
                      pbVar168 = (byte *)((int)puVar125 + ((int)pbVar127 - (int)local_81c));
                      pbVar34 = (byte *)((int)local_7cc + iVar138 + ((int)pbVar127 - (int)local_81c)
                                        );
                      pbVar153 = (byte *)((int)local_7cc +
                                         (int)pbVar127 + (param_4 * 0xd - (int)local_81c));
                      local_824 = (uint *)((int)local_7cc +
                                          (int)pbVar127 + (param_4 * 10 - (int)local_81c));
                      local_820 = (uint *)((int)local_7cc +
                                          (int)pbVar127 + (param_4 * 0xf - (int)local_81c));
                      local_814 = (uint *)((int)local_7cc +
                                          (int)pbVar127 + (param_4 * 8 - (int)local_81c));
                      local_810 = (undefined1 *)
                                  ((int)local_7cc + (int)pbVar127 + (iVar112 - (int)local_81c));
                      do {
                        while( true ) {
                          pbVar102 = pbVar102 + 1;
                          uVar65 = (int)(((short)(ushort)(byte)*puVar94 * 9 +
                                         ((uint)*pbVar168 * 9 - (uint)*pbVar102)) - (uint)*pbVar38)
                                   >> 4;
                          if ((uVar65 & 0xffffff00) != 0) {
                            uVar65 = (int)~uVar65 >> 0x1f;
                          }
                          *local_810 = (char)uVar65;
                          uVar65 = (int)(((short)(ushort)*pbVar38 * 9 +
                                         ((uint)(byte)*puVar94 * 9 - (uint)*pbVar168)) -
                                        (uint)*pbVar93) >> 4;
                          if ((uVar65 & 0xffffff00) != 0) {
                            uVar65 = (int)~uVar65 >> 0x1f;
                          }
                          *(char *)local_814 = (char)uVar65;
                          uVar65 = (int)(((short)(ushort)*pbVar93 * 9 +
                                         ((uint)*pbVar38 * 9 - (uint)(byte)*puVar94)) -
                                        (uint)*pbVar153) >> 4;
                          if ((uVar65 & 0xffffff00) != 0) {
                            uVar65 = (int)~uVar65 >> 0x1f;
                          }
                          *(char *)local_824 = (char)uVar65;
                          iVar62 = ((short)(ushort)*pbVar153 * 9 +
                                   ((uint)*pbVar93 * 9 - (uint)*pbVar38)) - (uint)(byte)*local_820;
                          uVar65 = iVar62 >> 4;
                          if ((uVar65 & 0xffffff00) == 0) break;
                          *pbVar34 = (char)~(byte)(iVar62 >> 0x1c) >> 7;
                          pbVar38 = pbVar38 + 1;
                          pbVar93 = pbVar93 + 1;
                          puVar94 = (uint *)((int)puVar94 + 1);
                          pbVar168 = pbVar168 + 1;
                          pbVar34 = pbVar34 + 1;
                          pbVar153 = pbVar153 + 1;
                          local_824 = (uint *)((int)local_824 + 1);
                          local_820 = (uint *)((int)local_820 + 1);
                          local_814 = (uint *)((int)local_814 + 1);
                          local_810 = local_810 + 1;
                          if (pbVar92 == pbVar102) goto LAB_00012db8;
                        }
                        *pbVar34 = (byte)uVar65;
                        pbVar38 = pbVar38 + 1;
                        pbVar93 = pbVar93 + 1;
                        puVar94 = (uint *)((int)puVar94 + 1);
                        pbVar168 = pbVar168 + 1;
                        pbVar34 = pbVar34 + 1;
                        pbVar153 = pbVar153 + 1;
                        local_824 = (uint *)((int)local_824 + 1);
                        local_820 = (uint *)((int)local_820 + 1);
                        local_814 = (uint *)((int)local_814 + 1);
                        local_810 = local_810 + 1;
                      } while (pbVar102 != pbVar92);
                    }
                  }
                  else {
                    pbVar34 = (byte *)((int)local_7cc +
                                      (int)pbVar127 + (param_4 * 8 - (int)local_81c) + -1);
                    pbVar168 = (byte *)((int)local_7cc +
                                       (int)pbVar127 + (param_4 * 0xb - (int)local_81c) + -1);
                    local_820 = (uint *)((int)local_7cc +
                                        (int)pbVar127 + (iVar33 - (int)local_81c) + -1);
                    pbVar153 = (byte *)((int)local_7cc +
                                       (int)pbVar127 + ((param_4 * 7 + -1) - (int)local_81c));
                    local_824 = (uint *)((int)local_848 + -1);
                    puVar94 = local_838;
                    puVar111 = local_83c;
                    pbVar38 = (byte *)((int)local_7cc +
                                      (int)pbVar127 + (param_4 * 10 - (int)local_81c));
                    pbVar93 = (byte *)((int)local_7cc +
                                      (int)pbVar127 + (param_4 * 9 - (int)local_81c));
                    do {
                      bVar21 = (byte)*puVar111;
                      bVar151 = (byte)*puVar94;
                      local_824 = (uint *)((int)local_824 + 1);
                      bVar12 = *(byte *)local_824;
                      bVar14 = (byte)((uint)bVar151 - (uint)bVar21 >> 0x18);
                      bVar15 = (byte)((uint)bVar12 - (uint)bVar151 >> 0x18);
                      bVar16 = (byte)((uint)bVar21 - (uint)bVar12 >> 0x18);
                      *(byte *)puVar94 =
                           ((char)(bVar15 ^ bVar16) >> 7 | bVar12) &
                           ((char)(bVar15 ^ bVar14) >> 7 | bVar151) &
                           ((char)(bVar16 ^ bVar14) >> 7 | bVar21);
                      pbVar34 = pbVar34 + 1;
                      bVar21 = *pbVar34;
                      bVar151 = (byte)*puVar111;
                      pbVar153 = pbVar153 + 1;
                      bVar12 = *pbVar153;
                      bVar14 = (byte)((uint)bVar21 - (uint)bVar151 >> 0x18);
                      bVar15 = (byte)((uint)bVar12 - (uint)bVar21 >> 0x18);
                      bVar16 = (byte)((uint)bVar151 - (uint)bVar12 >> 0x18);
                      *pbVar153 = ((char)(bVar16 ^ bVar14) >> 7 | bVar151) &
                                  ((char)(bVar16 ^ bVar15) >> 7 | bVar12) &
                                  ((char)(bVar14 ^ bVar15) >> 7 | bVar21);
                      bVar21 = *pbVar38;
                      bVar151 = *pbVar34;
                      bVar12 = *pbVar93;
                      bVar14 = (byte)((uint)bVar21 - (uint)bVar151 >> 0x18);
                      bVar15 = (byte)((uint)bVar12 - (uint)bVar21 >> 0x18);
                      bVar16 = (byte)((uint)bVar151 - (uint)bVar12 >> 0x18);
                      *pbVar93 = ((char)(bVar16 ^ bVar14) >> 7 | bVar151) &
                                 ((char)(bVar16 ^ bVar15) >> 7 | bVar12) &
                                 ((char)(bVar14 ^ bVar15) >> 7 | bVar21);
                      local_820 = (uint *)((int)local_820 + 1);
                      bVar21 = *(byte *)local_820;
                      bVar151 = *pbVar38;
                      pbVar168 = pbVar168 + 1;
                      bVar12 = *pbVar168;
                      bVar14 = (byte)((uint)bVar21 - (uint)bVar151 >> 0x18);
                      bVar15 = (byte)((uint)bVar151 - (uint)bVar12 >> 0x18);
                      bVar16 = (byte)((uint)bVar12 - (uint)bVar21 >> 0x18);
                      *pbVar168 = ((char)(bVar15 ^ bVar14) >> 7 | bVar151) &
                                  ((char)(bVar15 ^ bVar16) >> 7 | bVar12) &
                                  ((char)(bVar14 ^ bVar16) >> 7 | bVar21);
                      puVar94 = (uint *)((int)puVar94 + 1);
                      puVar111 = (uint *)((int)puVar111 + 1);
                      pbVar38 = pbVar38 + 1;
                      pbVar93 = pbVar93 + 1;
                    } while (local_824 != (uint *)((int)local_848 + 7));
                  }
                }
                else {
                  uVar99 = *local_838;
                  uVar90 = *local_848;
                  uVar65 = ((*(uint *)(iVar74 + (int)pbVar127) ^ uVar99) >> 1 & 0x7f7f7f7f) +
                           (*(uint *)(iVar74 + (int)pbVar127) & uVar99);
                  *local_848 = (uVar90 | uVar65) - ((uVar90 ^ uVar65) >> 1 & 0x7f7f7f7f);
                  uVar65 = *local_83c;
                  uVar90 = ((uVar90 ^ uVar65) >> 1 & 0x7f7f7f7f) + (uVar90 & uVar65);
                  *local_838 = (uVar99 | uVar90) - ((uVar99 ^ uVar90) >> 1 & 0x7f7f7f7f);
                  uVar64 = *local_834;
                  uVar90 = ((uVar99 ^ uVar64) >> 1 & 0x7f7f7f7f) + (uVar99 & uVar64);
                  *local_83c = (uVar65 | uVar90) - ((uVar65 ^ uVar90) >> 1 & 0x7f7f7f7f);
                  uVar99 = *local_830;
                  uVar65 = ((uVar65 ^ uVar99) >> 1 & 0x7f7f7f7f) + (uVar65 & uVar99);
                  *local_834 = (uVar64 | uVar65) - ((uVar64 ^ uVar65) >> 1 & 0x7f7f7f7f);
                  uVar90 = *local_828;
                  uVar65 = ((uVar64 ^ uVar90) >> 1 & 0x7f7f7f7f) + (uVar64 & uVar90);
                  *local_830 = (uVar99 | uVar65) - ((uVar99 ^ uVar65) >> 1 & 0x7f7f7f7f);
                  uVar64 = *local_82c;
                  uVar65 = ((uVar99 ^ uVar64) >> 1 & 0x7f7f7f7f) + (uVar99 & uVar64);
                  *local_828 = (uVar90 | uVar65) - ((uVar90 ^ uVar65) >> 1 & 0x7f7f7f7f);
                  uVar65 = *local_84c;
                  uVar90 = ((uVar90 ^ uVar65) >> 1 & 0x7f7f7f7f) + (uVar90 & uVar65);
                  *local_82c = (uVar64 | uVar90) - ((uVar64 ^ uVar90) >> 1 & 0x7f7f7f7f);
                  uVar90 = ((uVar64 ^ *local_840) >> 1 & 0x7f7f7f7f) + (uVar64 & *local_840);
                  *local_84c = (uVar65 | uVar90) - ((uVar65 ^ uVar90) >> 1 & 0x7f7f7f7f);
                  *(uint *)(iVar74 + (int)pbVar127) = uVar65;
                  uVar65 = *(uint *)(iVar74 + 4 + (int)pbVar127);
                  uVar99 = local_838[1];
                  uVar90 = local_848[1];
                  uVar65 = ((uVar65 ^ uVar99) >> 1 & 0x7f7f7f7f) + (uVar65 & uVar99);
                  local_848[1] = (uVar90 | uVar65) - ((uVar90 ^ uVar65) >> 1 & 0x7f7f7f7f);
                  uVar65 = local_83c[1];
                  uVar90 = ((uVar90 ^ uVar65) >> 1 & 0x7f7f7f7f) + (uVar90 & uVar65);
                  local_838[1] = (uVar99 | uVar90) - ((uVar99 ^ uVar90) >> 1 & 0x7f7f7f7f);
                  uVar64 = local_834[1];
                  uVar90 = ((uVar99 ^ uVar64) >> 1 & 0x7f7f7f7f) + (uVar99 & uVar64);
                  local_83c[1] = (uVar65 | uVar90) - ((uVar65 ^ uVar90) >> 1 & 0x7f7f7f7f);
                  uVar99 = local_830[1];
                  uVar65 = ((uVar65 ^ uVar99) >> 1 & 0x7f7f7f7f) + (uVar65 & uVar99);
                  local_834[1] = (uVar64 | uVar65) - ((uVar64 ^ uVar65) >> 1 & 0x7f7f7f7f);
                  uVar90 = local_828[1];
                  uVar65 = ((uVar64 ^ uVar90) >> 1 & 0x7f7f7f7f) + (uVar64 & uVar90);
                  local_830[1] = (uVar99 | uVar65) - ((uVar99 ^ uVar65) >> 1 & 0x7f7f7f7f);
                  uVar64 = local_82c[1];
                  uVar65 = ((uVar99 ^ uVar64) >> 1 & 0x7f7f7f7f) + (uVar99 & uVar64);
                  local_828[1] = (uVar90 | uVar65) - ((uVar90 ^ uVar65) >> 1 & 0x7f7f7f7f);
                  uVar65 = local_84c[1];
                  uVar90 = ((uVar90 ^ uVar65) >> 1 & 0x7f7f7f7f) + (uVar90 & uVar65);
                  local_82c[1] = (uVar64 | uVar90) - ((uVar64 ^ uVar90) >> 1 & 0x7f7f7f7f);
                  uVar90 = ((uVar64 ^ local_840[1]) >> 1 & 0x7f7f7f7f) + (uVar64 & local_840[1]);
                  local_84c[1] = (uVar65 | uVar90) - ((uVar65 ^ uVar90) >> 1 & 0x7f7f7f7f);
                  *(uint *)(iVar74 + 4 + (int)pbVar127) = uVar65;
                }
              }
              else {
                uVar90 = *local_83c;
                *local_838 = (*local_848 | uVar90) - ((*local_848 ^ uVar90) >> 1 & 0x7f7f7f7f);
                uVar65 = *local_830;
                *local_834 = (uVar90 | uVar65) - ((uVar90 ^ uVar65) >> 1 & 0x7f7f7f7f);
                uVar90 = *local_82c;
                *local_828 = (uVar65 | uVar90) - ((uVar65 ^ uVar90) >> 1 & 0x7f7f7f7f);
                *local_84c = (uVar90 | *local_840) - ((uVar90 ^ *local_840) >> 1 & 0x7f7f7f7f);
                uVar90 = local_83c[1];
                local_838[1] = (local_848[1] | uVar90) - ((local_848[1] ^ uVar90) >> 1 & 0x7f7f7f7f)
                ;
                uVar65 = local_830[1];
                local_834[1] = (uVar90 | uVar65) - ((uVar90 ^ uVar65) >> 1 & 0x7f7f7f7f);
                uVar90 = local_82c[1];
                local_828[1] = (uVar65 | uVar90) - ((uVar65 ^ uVar90) >> 1 & 0x7f7f7f7f);
                local_84c[1] = (uVar90 | local_840[1]) - ((uVar90 ^ local_840[1]) >> 1 & 0x7f7f7f7f)
                ;
              }
LAB_00012db8:
              pbVar127 = (byte *)((int)pbVar127 + 8);
              local_848 = local_848 + 2;
              local_83c = local_83c + 2;
              local_838 = local_838 + 2;
              local_830 = local_830 + 2;
              local_834 = local_834 + 2;
              local_82c = local_82c + 2;
              local_828 = local_828 + 2;
              local_840 = local_840 + 2;
              local_84c = local_84c + 2;
            } while ((int)pbVar127 < (int)sVar87);
            uVar65 = ~(uint)local_81c + sVar87 >> 3;
            iVar33 = (uVar65 + 1) * 8;
            pvVar89 = (void *)((int)local_7cc + iVar33);
            local_848 = (uint *)((int)local_7cc + param_4 * 5);
            pvVar98 = local_7cc;
            local_84c = (uint *)aiStack_578;
            local_840 = (void *)((int)local_7cc + 8);
            do {
              if (local_7b8 < param_6) {
                uVar90 = local_84c[0x130];
                if ((local_7e4 & 0x200) == 0) {
                  if ((local_7e4 & 1) == 0) {
                    if ((local_7e4 & 0x400) != 0) {
                      iVar62 = ((int)(iVar29 * local_84c[0x138]) >> 8) + 1;
                      local_820 = local_804;
                      local_838 = (uint *)((int)local_800 + -1);
                      local_830 = local_808;
                      local_814 = local_7f8;
                      local_828 = local_7fc;
                      local_82c = local_848;
                      uVar64 = iVar62 * 2 + 1;
                      local_834 = (uint *)((int)pvVar98 + iVar91);
                      local_824 = (uint *)((int)pvVar98 + iVar161);
                      local_7ec = (byte *)((param_4 * 10 - iVar42) + (int)pvVar98);
                      local_7e8 = (byte *)((int)pvVar98 + iVar138);
                      do {
                        while( true ) {
                          local_838 = (uint *)((int)local_838 + 1);
                          uVar132 = (uint)*(byte *)local_838;
                          uVar117 = (uint)(byte)*local_830;
                          uVar118 = (uint)(byte)*local_82c;
                          iVar43 = *local_7ec - uVar132;
                          uVar162 = (uint)(byte)*local_828;
                          uVar133 = (uint)((uint)(iVar62 + iVar43) < uVar64);
                          bVar21 = (byte)*local_834;
                          uVar99 = (uint)bVar21;
                          if ((uVar132 - uVar118) + iVar62 < uVar64) {
                            uVar133 = uVar133 + 1;
                          }
                          uVar101 = (uint)(byte)*local_824;
                          if ((uVar118 - uVar162) + iVar62 < uVar64) {
                            uVar133 = uVar133 + 1;
                          }
                          uVar119 = (uint)(byte)*local_820;
                          iVar63 = uVar99 - uVar117;
                          if ((uVar162 - uVar99) + iVar62 < uVar64) {
                            uVar133 = uVar133 + 1;
                          }
                          uVar114 = (uint)(byte)*local_814;
                          if ((uint)(iVar62 + iVar63) < uVar64) {
                            uVar133 = uVar133 + 1;
                          }
                          uVar139 = (uint)*local_7e8;
                          if ((uVar117 - uVar101) + iVar62 < uVar64) {
                            uVar133 = uVar133 + 1;
                          }
                          if ((uVar101 - uVar119) + iVar62 < uVar64) {
                            uVar133 = uVar133 + 1;
                          }
                          if ((uVar119 - uVar114) + iVar62 < uVar64) {
                            uVar133 = uVar133 + 1;
                          }
                          if ((uVar114 - uVar139) + iVar62 < uVar64) {
                            uVar133 = uVar133 + 1;
                          }
                          if (iVar30 < (int)uVar133) break;
                          uVar133 = (uVar117 - uVar99) * 5 + (uVar162 - uVar101) * 2;
                          iVar43 = (uVar133 ^ (int)uVar133 >> 0x1f) - ((int)uVar133 >> 0x1f);
                          if (iVar43 < (int)(uVar90 << 3)) {
                            iVar88 = (uVar162 - uVar118) * 5 + (uVar132 - uVar99) * 2;
                            iVar95 = (uVar119 - uVar101) * 5 + (uVar117 - uVar114) * 2;
                            uVar162 = iVar63 / 2;
                            if (iVar88 < 0) {
                              iVar88 = -iVar88;
                            }
                            if (iVar95 < 0) {
                              iVar95 = -iVar95;
                            }
                            if (iVar95 < iVar88) {
                              iVar88 = iVar95;
                            }
                            uVar132 = iVar43 - iVar88;
                            uVar132 = (int)((uVar132 & ~((int)uVar132 >> 0x1f)) * 5 + 0x20) >> 6;
                            if (-1 < (int)uVar133) {
                              uVar132 = -uVar132;
                            }
                            if (iVar63 < 2) {
                              uVar132 = uVar132 & (int)uVar132 >> 0x1f;
                              if ((int)uVar132 <= (int)uVar162) {
                                uVar132 = uVar162;
                              }
                            }
                            else {
                              uVar132 = uVar132 & ~((int)uVar132 >> 0x1f);
                              if ((int)uVar162 < (int)uVar132) {
                                uVar132 = uVar162;
                              }
                            }
                            if (uVar56 == 0) {
                              cVar54 = (char)uVar132;
                              bVar21 = bVar21 - cVar54;
                            }
                            else {
                              cVar54 = '\0';
                              if (uVar132 != 0) {
                                if ((int)uVar132 < 0) {
                                  iVar43 = 0x20;
                                }
                                else {
                                  iVar43 = -0x20;
                                }
                                uVar99 = uVar99 - iVar43;
                                if ((uVar99 & 0xffffff00) != 0) {
                                  uVar99 = (int)~uVar99 >> 0x1f;
                                }
                                *(byte *)local_834 = (byte)uVar99;
                                uVar99 = (uint)(byte)*local_830 + iVar43;
                                if ((uVar99 & 0xffffff00) != 0) {
                                  uVar99 = (int)~uVar99 >> 0x1f;
                                }
                                *(byte *)local_830 = (byte)uVar99;
                                cVar54 = '\0';
                                bVar21 = (byte)*local_834;
                              }
                            }
                            *(byte *)local_834 = bVar21;
                            *(byte *)local_830 = cVar54 + (byte)*local_830;
                          }
LAB_00014968:
                          local_834 = (uint *)((int)local_834 + 1);
                          local_830 = (uint *)((int)local_830 + 1);
                          local_82c = (uint *)((int)local_82c + 1);
                          local_828 = (uint *)((int)local_828 + 1);
                          local_824 = (uint *)((int)local_824 + 1);
                          local_820 = (uint *)((int)local_820 + 1);
                          local_814 = (uint *)((int)local_814 + 1);
                          local_7ec = local_7ec + 1;
                          local_7e8 = local_7e8 + 1;
                          if ((uint *)((int)local_800 + 7) == local_838) goto LAB_00013390;
                        }
                        uVar128 = uVar118;
                        uVar133 = uVar132;
                        if (uVar132 <= uVar118) {
                          uVar128 = uVar132;
                          uVar133 = uVar118;
                        }
                        if (uVar99 < uVar162) {
                          if (uVar133 <= uVar162) {
                            uVar133 = uVar162;
                          }
                          if (uVar99 < uVar128) {
                            uVar128 = uVar99;
                          }
                        }
                        else {
                          if (uVar133 <= uVar99) {
                            uVar133 = uVar99;
                          }
                          if (uVar162 < uVar128) {
                            uVar128 = uVar162;
                          }
                        }
                        if (uVar101 < uVar117) {
                          if (uVar133 <= uVar117) {
                            uVar133 = uVar117;
                          }
                          if (uVar101 < uVar128) {
                            uVar128 = uVar101;
                          }
                          if (uVar119 <= uVar114) goto LAB_00014af4;
LAB_000168cc:
                          if (uVar133 <= uVar119) {
                            uVar133 = uVar119;
                          }
                          if (uVar114 < uVar128) {
                            uVar128 = uVar114;
                          }
                        }
                        else {
                          if (uVar133 <= uVar101) {
                            uVar133 = uVar101;
                          }
                          if (uVar117 < uVar128) {
                            uVar128 = uVar117;
                          }
                          if (uVar114 < uVar119) goto LAB_000168cc;
LAB_00014af4:
                          if (uVar133 <= uVar114) {
                            uVar133 = uVar114;
                          }
                          if (uVar119 < uVar128) {
                            uVar128 = uVar119;
                          }
                        }
                        if ((int)(uVar90 << 1) <= (int)(uVar133 - uVar128)) goto LAB_00014968;
                        if (iVar43 < 0) {
                          iVar43 = -iVar43;
                        }
                        iVar63 = uVar139 - uVar114;
                        uVar133 = (uint)*local_7ec;
                        if ((int)uVar90 <= iVar43) {
                          uVar133 = uVar132;
                        }
                        if (iVar63 < 0) {
                          iVar63 = -iVar63;
                        }
                        if ((int)uVar90 <= iVar63) {
                          uVar139 = uVar114;
                        }
                        bVar169 = uVar56 == 0;
                        iVar88 = uVar132 + uVar133 * 4 + uVar118 + uVar162 + 4;
                        iVar100 = (iVar88 - uVar133) + uVar99;
                        iVar95 = (iVar100 - uVar133) + uVar117;
                        iVar43 = (iVar95 - uVar133) + uVar101;
                        iVar63 = (iVar43 - uVar133) + uVar119;
                        iVar113 = (iVar63 - uVar132) + uVar114;
                        uVar133 = iVar63 - uVar132;
                        if (bVar169) {
                          uVar133 = uVar132;
                        }
                        if (bVar169) {
                          uVar133 = uVar133 << 1;
                        }
                        iVar96 = (iVar113 - uVar118) + uVar139;
                        iVar66 = (iVar96 - uVar162) + uVar139;
                        iVar152 = (iVar66 - uVar99) + uVar139;
                        if (!bVar169) {
                          uVar133 = 0x100;
                          *(byte *)local_814 = 0x80;
                          *(byte *)local_820 = 0x80;
                          *(byte *)local_824 = 0x80;
                          *(byte *)local_830 = 0x80;
                          *(byte *)local_834 = 0x80;
                          *(byte *)local_828 = 0x80;
                          *(byte *)local_82c = 0x80;
                        }
                        *(byte *)local_838 = (byte)((int)(iVar88 + iVar95 + uVar133) >> 4);
                        *(byte *)local_82c =
                             (byte)((short)(ushort)(byte)*local_82c * 2 + iVar100 + iVar43 >> 4);
                        *(byte *)local_828 =
                             (byte)((short)(ushort)(byte)*local_828 * 2 + iVar95 + iVar63 >> 4);
                        *(byte *)local_834 =
                             (byte)((short)(ushort)(byte)*local_834 * 2 + iVar43 + iVar113 >> 4);
                        *(byte *)local_830 =
                             (byte)((short)(ushort)(byte)*local_830 * 2 + iVar63 + iVar96 >> 4);
                        *(byte *)local_824 =
                             (byte)((short)(ushort)(byte)*local_824 * 2 + iVar113 + iVar66 >> 4);
                        *(byte *)local_820 =
                             (byte)((short)(ushort)(byte)*local_820 * 2 + iVar96 + iVar152 >> 4);
                        *(byte *)local_814 =
                             (byte)((int)((short)(ushort)(byte)*local_814 * 2 +
                                         iVar66 + (iVar152 - uVar117) + uVar139) >> 4);
                        local_834 = (uint *)((int)local_834 + 1);
                        local_830 = (uint *)((int)local_830 + 1);
                        local_82c = (uint *)((int)local_82c + 1);
                        local_828 = (uint *)((int)local_828 + 1);
                        local_824 = (uint *)((int)local_824 + 1);
                        local_820 = (uint *)((int)local_820 + 1);
                        local_814 = (uint *)((int)local_814 + 1);
                        local_7ec = local_7ec + 1;
                        local_7e8 = local_7e8 + 1;
                      } while ((uint *)((int)local_800 + 7) != local_838);
                    }
                  }
                  else {
                    iVar43 = 7;
                    uVar99 = (uint)(byte)*local_800;
                    iVar63 = ((int)(iVar29 * local_84c[0x138]) >> 8) + 1;
                    uVar162 = iVar63 * 2 + 1;
                    iVar62 = 0;
                    puVar125 = local_800;
                    puVar94 = local_848;
                    uVar64 = uVar99;
                    do {
                      pbVar127 = (byte *)((int)puVar125 + param_4);
                      if ((uVar64 - *pbVar127) + iVar63 < uVar162) {
                        iVar62 = iVar62 + 1;
                      }
                      if (((uint)*(byte *)((int)puVar125 + 1) -
                          (uint)*(byte *)((int)puVar125 + iVar58)) + iVar63 < uVar162) {
                        iVar62 = iVar62 + 1;
                      }
                      if (((uint)*(byte *)((int)puVar125 + 2) - (uint)*(byte *)((int)puVar94 + 2)) +
                          iVar63 < uVar162) {
                        iVar62 = iVar62 + 1;
                      }
                      if (((uint)*(byte *)((int)puVar125 + 3) - (uint)*(byte *)((int)puVar94 + 3)) +
                          iVar63 < uVar162) {
                        iVar62 = iVar62 + 1;
                      }
                      if (((uint)(byte)puVar125[1] - (uint)*(byte *)((int)puVar94 + 4)) + iVar63 <
                          uVar162) {
                        iVar62 = iVar62 + 1;
                      }
                      pbVar38 = (byte *)((int)puVar125 + 6);
                      if (((uint)*(byte *)((int)puVar125 + 5) - (uint)*(byte *)((int)puVar94 + 5)) +
                          iVar63 < uVar162) {
                        iVar62 = iVar62 + 1;
                      }
                      pbVar93 = (byte *)((int)puVar94 + 7);
                      pbVar168 = (byte *)((int)puVar125 + 7);
                      puVar125 = (uint *)((int)puVar125 + param_4);
                      if (((uint)*pbVar38 - (uint)*(byte *)((int)puVar94 + 6)) + iVar63 < uVar162) {
                        iVar62 = iVar62 + 1;
                      }
                      puVar94 = (uint *)((int)puVar94 + param_4);
                      if (((uint)*pbVar168 - (uint)*pbVar93) + iVar63 < uVar162) {
                        iVar62 = iVar62 + 1;
                      }
                      iVar43 = iVar43 + -1;
                      uVar64 = (uint)*pbVar127;
                    } while (iVar43 != 0);
                    if (iVar30 < iVar62) {
                      iVar62 = uVar90 * 2;
                      uVar64 = uVar90 * 4;
                      if ((((((uVar99 - (byte)*local_7f4) + iVar62 <= uVar64) &&
                            (((uint)*(byte *)((int)local_7fc + 1) -
                             (uint)*(byte *)((int)local_7f8 + 1)) + iVar62 <= uVar64)) &&
                           (((uint)*(byte *)((int)local_808 + 2) -
                            (uint)*(byte *)((int)local_848 + 2)) + iVar62 <= uVar64)) &&
                          ((((uint)*(byte *)((int)local_804 + 3) -
                            (uint)*(byte *)((int)pvVar98 + param_4 * 7 + 3)) + iVar62 <= uVar64 &&
                           (((uint)(byte)local_800[1] - (uint)(byte)local_7f4[1]) + iVar62 <= uVar64
                           )))) && ((((uint)*(byte *)((int)local_7fc + 5) -
                                     (uint)*(byte *)((int)local_7f8 + 5)) + iVar62 <= uVar64 &&
                                    ((((uint)*(byte *)((int)local_808 + 6) -
                                      (uint)*(byte *)((int)local_848 + 6)) + iVar62 <= uVar64 &&
                                     (((uint)*(byte *)((int)local_804 + 7) -
                                      (uint)*(byte *)((int)pvVar98 + iVar31 + param_4 * 4)) + iVar62
                                      <= uVar64)))))) {
                        local_838 = (uint *)(iVar120 + -1 + (int)pvVar98);
                        pbVar127 = (byte *)(iVar112 + (int)pvVar98);
                        local_834 = (uint *)((int)pvVar98 + param_4 * 5);
                        local_82c = (uint *)(param_4 * 7 + (int)pvVar98);
                        local_828 = (uint *)(param_4 * 8 + (int)pvVar98);
                        local_824 = (uint *)((int)pvVar98 + iVar161);
                        local_820 = (uint *)(param_4 * 10 + (int)pvVar98);
                        local_814 = (uint *)((int)pvVar98 + param_4 * 0xb);
                        local_810 = (byte *)((int)pvVar98 + param_4 * 4);
                        local_7ec = (byte *)((int)pvVar98 + iVar138);
                        while( true ) {
                          local_838 = (uint *)((int)local_838 + 1);
                          uVar64 = *local_828;
                          iVar62 = *(byte *)local_838 - uVar99;
                          if (iVar62 < 0) {
                            iVar62 = -iVar62;
                          }
                          uVar132 = (uint)(byte)*local_814;
                          uVar162 = (uint)*(byte *)local_838;
                          if ((int)uVar90 <= iVar62) {
                            uVar162 = uVar99;
                          }
                          bVar21 = *pbVar127;
                          iVar62 = uVar99 + uVar162 * 4 + (uint)(byte)*local_834 + (uint)bVar21 + 4;
                          uVar118 = *local_82c;
                          iVar63 = (iVar62 - uVar162) + (uint)(byte)uVar118;
                          uVar117 = uVar132 - *local_7ec;
                          uVar133 = (int)uVar117 >> 0x1f;
                          iVar43 = (uVar117 ^ uVar133) - uVar133;
                          uVar133 = uVar90;
                          if (iVar43 < (int)uVar90) {
                            uVar133 = (uint)*local_7ec;
                          }
                          if ((int)uVar90 <= iVar43) {
                            uVar133 = uVar132;
                          }
                          iVar113 = (iVar63 - uVar162) + (uint)(byte)uVar64;
                          iVar100 = (iVar113 - uVar162) + (uint)(byte)*local_824;
                          iVar88 = (iVar100 - uVar162) + (uint)(byte)*local_820;
                          iVar43 = (iVar88 - uVar99) + uVar132;
                          iVar152 = (iVar43 - (uint)(byte)*local_834) + uVar133;
                          *local_810 = (byte)((short)uVar99 * 2 + iVar62 + iVar113 >> 4);
                          iVar95 = (iVar152 - (uint)bVar21) + uVar133;
                          iVar62 = (iVar95 - (uint)(byte)uVar118) + uVar133;
                          *(byte *)local_834 =
                               (byte)((short)(ushort)(byte)*local_834 * 2 + iVar63 + iVar100 >> 4);
                          *pbVar127 = (byte)((short)(ushort)*pbVar127 * 2 + iVar113 + iVar88 >> 4);
                          *(byte *)local_82c =
                               (byte)((short)(ushort)(byte)*local_82c * 2 + iVar100 + iVar43 >> 4);
                          *(byte *)local_828 =
                               (byte)((short)(ushort)(byte)*local_828 * 2 + iVar88 + iVar152 >> 4);
                          *(byte *)local_824 =
                               (byte)((short)(ushort)(byte)*local_824 * 2 + iVar43 + iVar95 >> 4);
                          *(byte *)local_820 =
                               (byte)((short)(ushort)(byte)*local_820 * 2 + iVar152 + iVar62 >> 4);
                          *(byte *)local_814 =
                               (byte)((int)((short)(ushort)(byte)*local_814 * 2 +
                                           (iVar62 - (uint)(byte)uVar64) + uVar133 + iVar95) >> 4);
                          if ((uint *)((int)pvVar98 + iVar31) == local_838) break;
                          uVar99 = (uint)local_810[1];
                          pbVar127 = pbVar127 + 1;
                          local_834 = (uint *)((int)local_834 + 1);
                          local_82c = (uint *)((int)local_82c + 1);
                          local_828 = (uint *)((int)local_828 + 1);
                          local_824 = (uint *)((int)local_824 + 1);
                          local_820 = (uint *)((int)local_820 + 1);
                          local_814 = (uint *)((int)local_814 + 1);
                          local_810 = local_810 + 1;
                          local_7ec = local_7ec + 1;
                        }
                      }
                    }
                    else {
                      pbVar127 = (byte *)(param_4 * 7 + (int)pvVar98);
                      pbVar38 = (byte *)(iVar112 + (int)pvVar98);
                      pbVar93 = (byte *)((int)pvVar98 + param_4 * 8);
                      local_83c = (uint *)((int)pvVar98 + iVar161);
                      do {
                        pbVar168 = pbVar93 + 1;
                        uVar132 = (uint)*pbVar93;
                        uVar162 = (uint)*pbVar127;
                        uVar64 = (int)(uVar162 - uVar132) / 2;
                        uVar99 = (uVar132 - uVar162) * 5 +
                                 ((uint)*pbVar38 - (uint)(byte)*local_83c) * 2;
                        iVar62 = (uVar99 ^ (int)uVar99 >> 0x1f) - ((int)uVar99 >> 0x1f);
                        if (iVar62 < (int)(uVar90 << 3)) {
                          iVar63 = ((uint)*pbVar38 - (uint)pbVar168[param_4 * -3 + -1]) * 5 +
                                   (pbVar168[param_4 * -4 + -1] - uVar162) * 2;
                          iVar43 = ((uint)pbVar168[iVar42 + -1 + param_4 * -5] -
                                   (uint)(byte)*local_83c) * 5 +
                                   (uVar132 - pbVar168[local_630 + -1 + param_4 * -5]) * 2;
                          if (iVar43 < 0) {
                            iVar43 = -iVar43;
                          }
                          if (iVar63 < 0) {
                            iVar63 = -iVar63;
                          }
                          if (iVar63 < iVar43) {
                            iVar43 = iVar63;
                          }
                          uVar133 = iVar62 - iVar43;
                          uVar133 = (int)((uVar133 & ~((int)uVar133 >> 0x1f)) * 5 + 0x20) >> 6;
                          if (-1 < (int)uVar99) {
                            uVar133 = -uVar133;
                          }
                          uVar99 = uVar133 & (int)uVar133 >> 0x1f;
                          uVar133 = uVar133 & ~((int)uVar133 >> 0x1f);
                          if ((int)(uVar162 - uVar132) < 2) {
                            uVar133 = uVar64;
                            if ((int)uVar64 < (int)uVar99) {
                              uVar133 = uVar99;
                            }
                          }
                          else if ((int)uVar64 < (int)uVar133) {
                            uVar133 = uVar64;
                          }
                          *pbVar127 = *pbVar127 - (char)uVar133;
                          *pbVar93 = (char)uVar133 + *pbVar93;
                        }
                        pbVar127 = pbVar127 + 1;
                        pbVar38 = pbVar38 + 1;
                        pbVar93 = pbVar168;
                        local_83c = (uint *)((int)local_83c + 1);
                      } while ((byte *)(param_4 * 8 + (int)local_840) != pbVar168);
                    }
                  }
                }
                else {
                  pcVar163 = (char *)(param_4 * 5 + (int)pvVar98);
                  pcVar154 = (char *)(param_4 * 10 + (int)pvVar98);
                  pbVar127 = (byte *)(iVar161 + (int)pvVar98);
                  pbVar38 = (byte *)(param_4 * 8 + (int)pvVar98);
                  pbVar93 = (byte *)(iVar91 + (int)pvVar98);
                  pbVar168 = (byte *)(iVar112 + (int)pvVar98);
                  do {
                    pbVar34 = pbVar127 + 1;
                    iVar62 = (uint)*pbVar168 - (uint)*pbVar93;
                    uVar64 = (uint)*pbVar93 - (uint)*pbVar38;
                    iVar43 = (uint)*pbVar38 - (uint)*pbVar127;
                    if (iVar62 < 0) {
                      iVar62 = -iVar62;
                    }
                    if (iVar43 < 0) {
                      iVar43 = -iVar43;
                    }
                    uVar99 = ((uVar64 ^ (int)uVar64 >> 0x1f) - ((int)uVar64 >> 0x1f)) -
                             (iVar62 + iVar43 >> 1);
                    uVar99 = uVar99 & ~((int)uVar99 >> 0x1f);
                    if ((int)uVar99 < (int)(uVar90 * 2)) {
                      if (-1 < (int)uVar64) {
                        uVar99 = -uVar99;
                      }
                      cVar54 = (char)((uVar99 << 0x15) >> 0x18);
                      *pcVar163 = cVar54 + *pcVar163;
                      cVar13 = (char)((uVar99 << 0x16) >> 0x18);
                      *pbVar168 = cVar13 + *pbVar168;
                      cVar17 = (char)(uVar99 * 0x600000 >> 0x18);
                      *pbVar93 = cVar17 + *pbVar93;
                      *pbVar38 = *pbVar38 - cVar17;
                      *pbVar127 = *pbVar127 - cVar13;
                      *pcVar154 = *pcVar154 - cVar54;
                    }
                    pcVar163 = pcVar163 + 1;
                    pcVar154 = pcVar154 + 1;
                    pbVar127 = pbVar34;
                    pbVar38 = pbVar38 + 1;
                    pbVar93 = pbVar93 + 1;
                    pbVar168 = pbVar168 + 1;
                  } while ((byte *)(iVar161 + (int)local_840) != pbVar34);
                }
              }
LAB_00013390:
              pvVar98 = (void *)((int)pvVar98 + 8);
              local_840 = (uint *)((int)local_840 + 8);
              local_7f4 = local_7f4 + 2;
              local_7fc = local_7fc + 2;
              local_7f8 = local_7f8 + 2;
              local_808 = local_808 + 2;
              local_848 = (uint *)((int)local_848 + 8);
              local_804 = local_804 + 2;
              local_800 = local_800 + 2;
              local_84c = local_84c + 1;
            } while (pvVar98 != pvVar89);
            if ((int)local_81c < 8) {
              local_838 = (uint *)((int)local_81c + 8);
              local_828 = (uint *)local_b8;
              local_7f8 = (uint *)local_98;
              uVar170 = local_518;
              uVar171 = local_4f8;
              if ((int)local_838 < (int)sVar87) {
                iVar91 = 1;
                local_7cc = (void *)((int)local_7cc + 8);
                goto LAB_00013468;
              }
            }
            else {
              local_838 = (uint *)local_81c;
              iVar91 = 0;
LAB_00013468:
              local_83c = (uint *)((int)local_7cc + param_4);
              local_82c = (uint *)((int)local_83c + param_4);
              local_840 = (uint *)((int)local_7cc + -9);
              local_834 = (uint *)((int)local_82c + param_4 * 2);
              local_830 = (uint *)((int)local_834 + param_4 * 2);
              local_810 = (byte *)(aiStack_578 + iVar91 + 0x130);
              local_808 = (uint *)(aiStack_578 + (iVar91 + 0xc) * 2);
              do {
                local_828 = *(uint **)local_810;
                local_7f8 = *(uint **)((int)local_810 + 0x20);
                uVar170 = *(undefined8 *)local_808;
                uVar171 = *(undefined8 *)(local_808 + 8);
                if ((local_7e4 & 0x2000) == 0) {
                  if ((local_7e4 & 2) == 0) {
                    if ((local_7e4 & 0x4000) != 0) {
                      pbVar127 = (byte *)((int)local_840 + 5);
                      iVar91 = ((int)local_7f8 * iVar29 >> 8) + 1;
                      local_84c = (uint *)0x8;
                      uVar90 = iVar91 * 2 + 1;
                      do {
                        uVar118 = (uint)*pbVar127;
                        uVar133 = (uint)pbVar127[1];
                        iVar161 = pbVar127[-1] - uVar118;
                        uVar132 = (uint)pbVar127[2];
                        bVar21 = pbVar127[3];
                        uVar64 = (uint)bVar21;
                        bVar151 = pbVar127[4];
                        uVar99 = (uint)bVar151;
                        uVar162 = (uint)((uint)(iVar161 + iVar91) < uVar90);
                        uVar117 = (uint)pbVar127[5];
                        if ((uVar118 - uVar133) + iVar91 < uVar90) {
                          uVar162 = uVar162 + 1;
                        }
                        if ((uVar133 - uVar132) + iVar91 < uVar90) {
                          uVar162 = uVar162 + 1;
                        }
                        iVar138 = uVar64 - uVar99;
                        uVar101 = (uint)pbVar127[6];
                        if ((uVar132 - uVar64) + iVar91 < uVar90) {
                          uVar162 = uVar162 + 1;
                        }
                        uVar119 = (uint)pbVar127[7];
                        if ((uint)(iVar138 + iVar91) < uVar90) {
                          uVar162 = uVar162 + 1;
                        }
                        uVar114 = (uint)pbVar127[8];
                        if ((uVar99 - uVar117) + iVar91 < uVar90) {
                          uVar162 = uVar162 + 1;
                        }
                        if ((uVar117 - uVar101) + iVar91 < uVar90) {
                          uVar162 = uVar162 + 1;
                        }
                        if ((uVar101 - uVar119) + iVar91 < uVar90) {
                          uVar162 = uVar162 + 1;
                        }
                        if ((uVar119 - uVar114) + iVar91 < uVar90) {
                          uVar162 = uVar162 + 1;
                        }
                        if (iVar30 < (int)uVar162) {
                          uVar139 = uVar118;
                          uVar162 = uVar133;
                          if (uVar118 <= uVar133) {
                            uVar139 = uVar133;
                            uVar162 = uVar118;
                          }
                          if (uVar64 < uVar132) {
                            if (uVar139 < uVar132) {
                              uVar139 = uVar132;
                            }
                            if (uVar64 <= uVar162) {
                              uVar162 = uVar64;
                            }
                          }
                          else {
                            if (uVar139 < uVar64) {
                              uVar139 = uVar64;
                            }
                            if (uVar132 <= uVar162) {
                              uVar162 = uVar132;
                            }
                          }
                          if (uVar117 < uVar99) {
                            if (uVar139 < uVar99) {
                              uVar139 = uVar99;
                            }
                            if (uVar117 <= uVar162) {
                              uVar162 = uVar117;
                            }
                          }
                          else {
                            if (uVar139 < uVar117) {
                              uVar139 = uVar117;
                            }
                            if (uVar99 <= uVar162) {
                              uVar162 = uVar99;
                            }
                          }
                          if (uVar119 < uVar101) {
                            if (uVar139 < uVar101) {
                              uVar139 = uVar101;
                            }
                            if (uVar119 <= uVar162) {
                              uVar162 = uVar119;
                            }
                          }
                          else {
                            if (uVar139 < uVar119) {
                              uVar139 = uVar119;
                            }
                            if (uVar101 <= uVar162) {
                              uVar162 = uVar101;
                            }
                          }
                          if ((int)(uVar139 - uVar162) < (int)local_828 << 1) {
                            iVar138 = uVar114 - uVar119;
                            if (iVar161 < 0) {
                              iVar161 = -iVar161;
                            }
                            uVar162 = (uint)pbVar127[-1];
                            if ((int)local_828 <= iVar161) {
                              uVar162 = uVar118;
                            }
                            if (iVar138 < 0) {
                              iVar138 = -iVar138;
                            }
                            if ((int)local_828 <= iVar138) {
                              uVar114 = uVar119;
                            }
                            iVar161 = uVar118 + uVar162 * 4 + uVar133 + uVar132 + 4;
                            iVar138 = (iVar161 - uVar162) + uVar64;
                            iVar62 = (iVar138 - uVar162) + uVar99;
                            iVar43 = (iVar62 - uVar162) + uVar117;
                            iVar63 = (iVar43 - uVar162) + uVar101;
                            iVar113 = (iVar63 - uVar118) + uVar119;
                            iVar100 = (iVar113 - uVar133) + uVar114;
                            iVar88 = (iVar100 - uVar132) + uVar114;
                            iVar95 = (iVar88 - uVar64) + uVar114;
                            if (uVar56 == 0) {
                              iVar152 = uVar119 << 1;
                              local_78c = uVar118 << 1;
                              local_7a4 = uVar132 << 1;
                              local_794 = uVar133 << 1;
                              local_7ac = uVar64 << 1;
                              local_7cc = (void *)(uVar99 << 1);
                              local_7e0 = uVar117 << 1;
                              local_848 = (uint *)(uVar101 << 1);
                            }
                            else {
                              iVar152 = 0x100;
                              local_848 = (uint *)0x100;
                              local_7e0 = 0x100;
                              local_7cc = (void *)0x100;
                              local_7ac = 0x100;
                              local_7a4 = 0x100;
                              local_794 = 0x100;
                              local_78c = 0x100;
                            }
                            *pbVar127 = (byte)(iVar62 + iVar161 + local_78c >> 4);
                            pbVar127[1] = (byte)(iVar43 + iVar138 + local_794 >> 4);
                            pbVar127[2] = (byte)(iVar63 + iVar62 + local_7a4 >> 4);
                            pbVar127[3] = (byte)(iVar113 + iVar43 + local_7ac >> 4);
                            pbVar127[4] = (byte)(iVar100 + iVar63 + (int)local_7cc >> 4);
                            pbVar127[5] = (byte)(iVar88 + iVar113 + local_7e0 >> 4);
                            pbVar127[6] = (byte)(iVar95 + iVar100 + (int)local_848 >> 4);
                            pbVar127[7] = (byte)((int)((iVar95 - uVar99) + uVar114 + iVar88 +
                                                      iVar152) >> 4);
                          }
                        }
                        else {
                          uVar162 = (uVar99 - uVar64) * 5 + (uVar132 - uVar117) * 2;
                          iVar161 = (uVar162 ^ (int)uVar162 >> 0x1f) - ((int)uVar162 >> 0x1f);
                          if (iVar161 < (int)local_828 << 3) {
                            iVar62 = (uVar101 - uVar117) * 5 + (uVar99 - uVar119) * 2;
                            iVar43 = (uVar132 - uVar133) * 5 + (uVar118 - uVar64) * 2;
                            if (iVar62 < 0) {
                              iVar62 = -iVar62;
                            }
                            if (iVar43 < 0) {
                              iVar43 = -iVar43;
                            }
                            if (iVar62 <= iVar43) {
                              iVar43 = iVar62;
                            }
                            uVar133 = iVar161 - iVar43;
                            uVar132 = iVar138 / 2;
                            uVar133 = (int)((uVar133 & ~((int)uVar133 >> 0x1f)) * 5 + 0x20) >> 6;
                            if (-1 < (int)uVar162) {
                              uVar133 = -uVar133;
                            }
                            if (iVar138 < 2) {
                              uVar133 = uVar133 & (int)uVar133 >> 0x1f;
                              if ((int)uVar132 <= (int)uVar133) {
                                uVar132 = uVar133;
                              }
                            }
                            else {
                              uVar133 = uVar133 & ~((int)uVar133 >> 0x1f);
                              if ((int)uVar133 < (int)uVar132) {
                                uVar132 = uVar133;
                              }
                            }
                            if (uVar56 == 0) {
                              bVar21 = bVar21 - (char)uVar132;
                              bVar151 = (char)uVar132 + bVar151;
                            }
                            else if (uVar132 != 0) {
                              if ((int)uVar132 < 0) {
                                iVar161 = 0x20;
                              }
                              else {
                                iVar161 = -0x20;
                              }
                              uVar64 = uVar64 - iVar161;
                              uVar99 = iVar161 + uVar99;
                              if ((uVar64 & 0xffffff00) != 0) {
                                uVar64 = (int)~uVar64 >> 0x1f;
                              }
                              bVar21 = (byte)uVar64;
                              if ((uVar99 & 0xffffff00) != 0) {
                                uVar99 = (int)~uVar99 >> 0x1f;
                              }
                              bVar151 = (byte)uVar99;
                            }
                            pbVar127[3] = bVar21;
                            pbVar127[4] = bVar151;
                          }
                        }
                        local_84c = (uint *)((int)local_84c + -1);
                        pbVar127 = pbVar127 + param_4;
                      } while (local_84c != (uint *)0x0);
                    }
                  }
                  else {
                    iVar138 = param_4 - 4;
                    iVar161 = param_4 - 3;
                    local_824 = (uint *)(uint)*(byte *)((int)local_840 + 9);
                    iVar91 = ((int)local_7f8 * iVar29 >> 8) + 1;
                    local_848 = (uint *)(uint)*(byte *)((int)local_840 + 10);
                    uVar64 = iVar91 * 2 + 1;
                    local_820 = (uint *)(uint)*(byte *)((int)local_840 + 0xb);
                    uVar90 = (uint)(((uint)*(byte *)((int)local_840 + 5) -
                                    (uint)*(byte *)((int)local_840 + 6)) + iVar91 < uVar64);
                    if (((uint)*(byte *)((int)local_840 + 6) - (uint)*(byte *)((int)local_840 + 7))
                        + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_840 + 7) - (uint)*(byte *)((int)local_840 + 8))
                        + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_840 + 8) - (int)local_824) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    local_84c = (uint *)(uint)*(byte *)((int)local_840 + 0xc);
                    if ((uint)(((int)local_824 - (int)local_848) + iVar91) < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((uint)(((int)local_848 - (int)local_820) + iVar91) < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    uVar99 = (uint)*(byte *)((int)local_83c + -2);
                    if ((uint)(((int)local_820 - (int)local_84c) + iVar91) < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_83c + -4) - (uint)*(byte *)((int)local_83c + -3)
                        ) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((*(byte *)((int)local_83c + -3) - uVar99) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((uVar99 - *(byte *)((int)local_83c + -1)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    uVar162 = (uint)*(byte *)((int)local_82c + -3);
                    if (((uint)*(byte *)((int)local_83c + -1) - (uint)(byte)*local_83c) + iVar91 <
                        uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)(byte)*local_83c - (uint)*(byte *)((int)local_83c + 1)) + iVar91 <
                        uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_83c + 1) - (uint)*(byte *)((int)local_83c + 2))
                        + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    uVar132 = (uint)(byte)*local_82c;
                    if (((uint)*(byte *)((int)local_83c + 2) - (uint)*(byte *)((int)local_83c + 3))
                        + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((*(byte *)((int)local_82c + -4) - uVar162) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((uVar162 - *(byte *)((int)local_82c + -2)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_82c + -2) - (uint)*(byte *)((int)local_82c + -1)
                        ) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((*(byte *)((int)local_82c + -1) - uVar132) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    iVar43 = param_4 - 2;
                    iVar62 = param_4 - 1;
                    if ((uVar132 - *(byte *)((int)local_82c + 1)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    uVar133 = (uint)*(byte *)((int)local_82c + iVar62);
                    if (((uint)*(byte *)((int)local_82c + 1) - (uint)*(byte *)((int)local_82c + 2))
                        + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_82c + 2) - (uint)*(byte *)((int)local_82c + 3))
                        + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_82c + iVar138) -
                        (uint)*(byte *)((int)local_82c + iVar161)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_82c + iVar161) -
                        (uint)*(byte *)((int)local_82c + iVar43)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((*(byte *)((int)local_82c + iVar43) - uVar133) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    iVar88 = param_4 + 2;
                    iVar63 = param_4 + 3;
                    uVar118 = (uint)*(byte *)((int)local_82c + iVar88);
                    if ((uVar133 - *(byte *)((int)local_82c + param_4)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_82c + param_4) -
                        (uint)*(byte *)((int)local_82c + iVar58)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((*(byte *)((int)local_82c + iVar58) - uVar118) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((uVar118 - *(byte *)((int)local_82c + iVar63)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    uVar117 = (uint)*(byte *)((int)local_834 + 1);
                    if (((uint)*(byte *)((int)local_834 + -4) - (uint)*(byte *)((int)local_834 + -3)
                        ) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_834 + -3) - (uint)*(byte *)((int)local_834 + -2)
                        ) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_834 + -2) - (uint)*(byte *)((int)local_834 + -1)
                        ) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    uVar101 = (uint)*(byte *)((int)local_834 + iVar43);
                    if (((uint)*(byte *)((int)local_834 + -1) - (uint)(byte)*local_834) + iVar91 <
                        uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((byte)*local_834 - uVar117) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((uVar117 - *(byte *)((int)local_834 + 2)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_834 + 2) - (uint)*(byte *)((int)local_834 + 3))
                        + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_834 + iVar138) -
                        (uint)*(byte *)((int)local_834 + iVar161)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((*(byte *)((int)local_834 + iVar161) - uVar101) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((uVar101 - *(byte *)((int)local_834 + iVar62)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_834 + iVar62) -
                        (uint)*(byte *)((int)local_834 + param_4)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    uVar119 = (uint)*(byte *)((int)local_830 + -3);
                    if (((uint)*(byte *)((int)local_834 + param_4) -
                        (uint)*(byte *)((int)local_834 + iVar58)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_834 + iVar58) -
                        (uint)*(byte *)((int)local_834 + iVar88)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_834 + iVar88) -
                        (uint)*(byte *)((int)local_834 + iVar63)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((*(byte *)((int)local_830 + -4) - uVar119) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    uVar114 = (uint)(byte)*local_830;
                    if ((uVar119 - *(byte *)((int)local_830 + -2)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_830 + -2) - (uint)*(byte *)((int)local_830 + -1)
                        ) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((*(byte *)((int)local_830 + -1) - uVar114) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((uVar114 - *(byte *)((int)local_830 + 1)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_830 + 1) - (uint)*(byte *)((int)local_830 + 2))
                        + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_830 + 2) - (uint)*(byte *)((int)local_830 + 3))
                        + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_830 + iVar138) -
                        (uint)*(byte *)((int)local_830 + iVar161)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    uVar139 = (uint)*(byte *)((int)local_830 + iVar62);
                    if (((uint)*(byte *)((int)local_830 + iVar161) -
                        (uint)*(byte *)((int)local_830 + iVar43)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    uVar128 = (uint)*(byte *)((int)local_830 + iVar88);
                    if ((*(byte *)((int)local_830 + iVar43) - uVar139) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((uVar139 - *(byte *)((int)local_830 + param_4)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if (((uint)*(byte *)((int)local_830 + param_4) -
                        (uint)*(byte *)((int)local_830 + iVar58)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((*(byte *)((int)local_830 + iVar58) - uVar128) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    if ((uVar128 - *(byte *)((int)local_830 + iVar63)) + iVar91 < uVar64) {
                      uVar90 = uVar90 + 1;
                    }
                    pbVar127 = (byte *)((int)local_840 + 5);
                    if (iVar30 < (int)uVar90) {
                      iVar91 = (int)local_828 * 2;
                      uVar90 = (int)local_828 * 4;
                      if ((((((uint)*(byte *)((int)local_840 + 5) - (int)local_848) + iVar91 <=
                             uVar90) &&
                           ((uVar99 - *(byte *)((int)local_83c + 3)) + iVar91 <= uVar90)) &&
                          ((uVar132 - uVar162) + iVar91 <= uVar90)) &&
                         ((((uVar118 - uVar133) + iVar91 <= uVar90 &&
                           ((*(byte *)((int)local_834 + -4) - uVar117) + iVar91 <= uVar90)) &&
                          (((uVar101 - *(byte *)((int)local_834 + iVar63)) + iVar91 <= uVar90 &&
                           (((uVar114 - uVar119) + iVar91 <= uVar90 &&
                            ((uVar128 - uVar139) + iVar91 <= uVar90)))))))) {
                        local_814 = (uint *)0x8;
                        while( true ) {
                          uVar90 = (uint)*pbVar127;
                          iVar91 = pbVar127[-1] - uVar90;
                          bVar21 = pbVar127[1];
                          bVar151 = pbVar127[2];
                          if (iVar91 < 0) {
                            iVar91 = -iVar91;
                          }
                          bVar12 = pbVar127[3];
                          uVar64 = (uint)pbVar127[-1];
                          if ((int)local_828 <= iVar91) {
                            uVar64 = uVar90;
                          }
                          iVar91 = (uint)pbVar127[8] - (int)local_84c;
                          iVar161 = uVar90 + uVar64 * 4 + (uint)bVar21 + (uint)bVar151 + 4;
                          if (iVar91 < 0) {
                            iVar91 = -iVar91;
                          }
                          iVar138 = (iVar161 - uVar64) + (uint)bVar12;
                          iVar63 = (iVar138 - uVar64) + (int)local_824;
                          iVar43 = (iVar63 - uVar64) + (int)local_848;
                          iVar62 = (iVar43 - uVar64) + (int)local_820;
                          puVar125 = (uint *)(uint)pbVar127[8];
                          if ((int)local_828 <= iVar91) {
                            puVar125 = local_84c;
                          }
                          iVar91 = (iVar62 - uVar90) + (int)local_84c;
                          iVar88 = (iVar91 - (uint)bVar21) + (int)puVar125;
                          iVar100 = (iVar88 - (uint)bVar151) + (int)puVar125;
                          local_814 = (uint *)((int)local_814 + -1);
                          iVar95 = (iVar100 - (uint)bVar12) + (int)puVar125;
                          *pbVar127 = (byte)((short)(ushort)*pbVar127 * 2 + iVar63 + iVar161 >> 4);
                          pbVar127[3] = (byte)((short)(ushort)bVar12 * 2 + iVar91 + iVar43 >> 4);
                          pbVar127[1] = (byte)((short)(ushort)bVar21 * 2 + iVar43 + iVar138 >> 4);
                          pbVar127[2] = (byte)((short)(ushort)bVar151 * 2 + iVar62 + iVar63 >> 4);
                          pbVar127[5] = (byte)((short)local_848 * 2 + iVar100 + iVar91 >> 4);
                          pbVar127[6] = (byte)((short)local_820 * 2 + iVar95 + iVar88 >> 4);
                          pbVar127[7] = (byte)((short)local_84c * 2 +
                                               (iVar95 - (int)local_824) + (int)puVar125 + iVar100
                                              >> 4);
                          pbVar127[4] = (byte)((short)local_824 * 2 + iVar88 + iVar62 >> 4);
                          pbVar127 = pbVar127 + param_4;
                          if (local_814 == (uint *)0x0) break;
                          local_84c = (uint *)(uint)pbVar127[7];
                          local_824 = (uint *)(uint)pbVar127[4];
                          local_848 = (uint *)(uint)pbVar127[5];
                          local_820 = (uint *)(uint)pbVar127[6];
                        }
                      }
                    }
                    else {
                      iVar91 = 8;
                      while( true ) {
                        uVar64 = (uint)pbVar127[3];
                        uVar99 = ((int)local_824 - uVar64) * 5 +
                                 ((uint)pbVar127[2] - (int)local_848) * 2;
                        uVar90 = (int)(uVar64 - (int)local_824) / 2;
                        iVar161 = (uVar99 ^ (int)uVar99 >> 0x1f) - ((int)uVar99 >> 0x1f);
                        if (iVar161 < (int)local_828 * 8) {
                          iVar138 = ((uint)pbVar127[6] - (int)local_848) * 5 +
                                    ((int)local_824 - (uint)pbVar127[7]) * 2;
                          iVar62 = ((uint)pbVar127[2] - (uint)pbVar127[1]) * 5 +
                                   (*pbVar127 - uVar64) * 2;
                          if (iVar138 < 0) {
                            iVar138 = -iVar138;
                          }
                          if (iVar62 < 0) {
                            iVar62 = -iVar62;
                          }
                          if (iVar62 < iVar138) {
                            iVar138 = iVar62;
                          }
                          uVar162 = iVar161 - iVar138;
                          uVar162 = (int)((uVar162 & ~((int)uVar162 >> 0x1f)) * 5 + 0x20) >> 6;
                          if (-1 < (int)uVar99) {
                            uVar162 = -uVar162;
                          }
                          uVar99 = uVar162 & (int)uVar162 >> 0x1f;
                          uVar162 = uVar162 & ~((int)uVar162 >> 0x1f);
                          if ((int)(uVar64 - (int)local_824) < 2) {
                            if ((int)uVar99 < (int)uVar90) {
                              uVar99 = uVar90;
                            }
                          }
                          else {
                            uVar99 = uVar162;
                            if ((int)uVar90 <= (int)uVar162) {
                              uVar99 = uVar90;
                            }
                          }
                          pbVar127[3] = pbVar127[3] - (char)uVar99;
                          pbVar127[4] = (char)uVar99 + (char)local_824;
                        }
                        iVar91 = iVar91 + -1;
                        pbVar127 = pbVar127 + param_4;
                        if (iVar91 == 0) break;
                        local_824 = (uint *)(uint)pbVar127[4];
                        local_848 = (uint *)(uint)pbVar127[5];
                      }
                    }
                  }
                }
                else {
                  pbVar127 = (byte *)((int)local_840 + 5);
                  if (*(int *)(iVar80 + 0x13098) == 0 && *(int *)(iVar80 + 0x1309c) == 0) {
                    uVar90 = 0xfffffe00;
                    iVar91 = 0;
                    local_84c = (uint *)(iVar80 + 0x12898);
                    do {
                      uVar64 = uVar90;
                      if (iVar91 < 0x80) {
                        uVar64 = iVar91 << 1;
                      }
                      uVar99 = uVar64 * 3;
                      uVar162 = uVar64 * 5;
                      uVar132 = uVar64 + 0xf;
                      if (-1 < (int)uVar64) {
                        uVar132 = uVar64;
                      }
                      uVar132 = (uVar132 & 0xfff) >> 4;
                      uVar64 = uVar64 * 7;
                      if ((int)uVar99 < 0) {
                        uVar99 = uVar99 + 0xf;
                      }
                      uVar99 = (uVar99 & 0xfff) >> 4;
                      if ((int)uVar162 < 0) {
                        uVar162 = uVar162 + 0xf;
                      }
                      uVar162 = (uVar162 & 0xfff) >> 4;
                      if ((int)uVar64 < 0) {
                        uVar64 = uVar64 + 0xf;
                      }
                      iVar91 = iVar91 + 1;
                      uVar90 = uVar90 + 2;
                      local_84c[2] = uVar99 * -0x100 & 0xffff |
                                     -uVar132 & 0xff | uVar162 * -0x1000000 |
                                     uVar162 * -0x10000 & 0xff0000;
                      local_84c[3] = (uVar64 & 0xfff) >> 4 |
                                     uVar99 << 0x10 | uVar132 << 0x18 | uVar162 << 8;
                      local_84c = local_84c + 2;
                    } while (iVar91 != 0x100);
                  }
                  iVar91 = 8;
                  do {
                    uVar64 = (uint)pbVar127[1] - (uint)pbVar127[2];
                    uVar90 = (int)uVar64 >> 0x1f;
                    iVar161 = (uint)pbVar127[5] - (uint)pbVar127[6];
                    uVar99 = (uint)pbVar127[3] - (uint)pbVar127[4];
                    if (iVar161 < 0) {
                      iVar161 = -iVar161;
                    }
                    uVar90 = ((uVar99 ^ (int)uVar99 >> 0x1f) - ((int)uVar99 >> 0x1f)) -
                             (int)(iVar161 + ((uVar64 ^ uVar90) - uVar90)) / 2;
                    uVar90 = uVar90 & ~((int)uVar90 >> 0x1f);
                    if ((int)uVar90 < (int)local_828) {
                      if (-1 < (int)uVar99) {
                        uVar90 = -uVar90;
                      }
                      iVar161 = uVar90 * 3;
                      uVar99 = uVar90 + 7;
                      uVar64 = uVar90;
                      if ((int)uVar90 < 0) {
                        uVar90 = uVar90 + 3;
                        uVar64 = uVar99;
                      }
                      if (iVar161 < 0) {
                        iVar161 = iVar161 + 7;
                      }
                      cVar54 = (char)((int)uVar64 >> 3);
                      cVar17 = (char)((int)uVar90 >> 2);
                      cVar13 = (char)(iVar161 >> 3);
                      pbVar127[1] = pbVar127[1] + cVar54;
                      pbVar127[6] = pbVar127[6] - cVar54;
                      pbVar127[2] = pbVar127[2] + cVar17;
                      pbVar127[5] = pbVar127[5] - cVar17;
                      pbVar127[3] = pbVar127[3] + cVar13;
                      pbVar127[4] = pbVar127[4] - cVar13;
                    }
                    iVar91 = iVar91 + -1;
                    pbVar127 = pbVar127 + param_4;
                  } while (iVar91 != 0);
                }
                if (uVar70 != 0) {
                  uVar90 = (uint)*(byte *)((int)local_840 + 1);
                  uVar162 = (uint)*(byte *)((int)local_840 + 2);
                  uVar132 = (uint)*(byte *)((int)local_840 + 3);
                  uVar99 = (uint)*(byte *)((int)local_840 + 4);
                  uVar64 = uVar162;
                  if (uVar162 <= uVar90) {
                    uVar64 = uVar90;
                  }
                  uVar133 = (uint)*(byte *)((int)local_840 + 5);
                  uVar118 = (uint)*(byte *)((int)local_840 + 6);
                  if (uVar64 < uVar132) {
                    uVar64 = uVar132;
                  }
                  uVar117 = (uint)*(byte *)((int)local_840 + 7);
                  if (uVar64 < uVar99) {
                    uVar64 = uVar99;
                  }
                  uVar101 = (uint)*(byte *)((int)local_840 + 8);
                  if (uVar64 < uVar133) {
                    uVar64 = uVar133;
                  }
                  if (uVar64 < uVar118) {
                    uVar64 = uVar118;
                  }
                  if (uVar64 < uVar117) {
                    uVar64 = uVar117;
                  }
                  uVar114 = (uint)*(byte *)((int)local_83c + -8);
                  uVar139 = (uint)*(byte *)((int)local_83c + -7);
                  uVar119 = (uint)*(byte *)((int)local_83c + -3);
                  if (uVar64 < uVar101) {
                    uVar64 = uVar101;
                  }
                  uVar128 = (uint)*(byte *)((int)local_83c + -6);
                  if (uVar64 < uVar114) {
                    uVar64 = uVar114;
                  }
                  uVar129 = (uint)*(byte *)((int)local_83c + -5);
                  uVar134 = (uint)*(byte *)((int)local_83c + -4);
                  if (uVar64 < uVar139) {
                    uVar64 = uVar139;
                  }
                  uVar140 = (uint)*(byte *)((int)local_83c + -2);
                  uVar67 = (uint)*(byte *)((int)local_83c + -1);
                  if (uVar64 < uVar128) {
                    uVar64 = uVar128;
                  }
                  if (uVar64 < uVar129) {
                    uVar64 = uVar129;
                  }
                  uVar35 = (uint)*(byte *)((int)local_82c + -8);
                  iVar161 = param_4 - 8;
                  uVar141 = (uint)*(byte *)((int)local_82c + -7);
                  iVar91 = param_4 - 6;
                  if (uVar64 < uVar134) {
                    uVar64 = uVar134;
                  }
                  iVar138 = param_4 - 7;
                  if (uVar64 < uVar119) {
                    uVar64 = uVar119;
                  }
                  uVar155 = (uint)*(byte *)((int)local_82c + -6);
                  uVar164 = (uint)*(byte *)((int)local_82c + -4);
                  uVar36 = (uint)*(byte *)((int)local_82c + -5);
                  uVar121 = (uint)*(byte *)((int)local_82c + -2);
                  uVar156 = (uint)*(byte *)((int)local_82c + -3);
                  uVar165 = (uint)*(byte *)((int)local_82c + -1);
                  uVar122 = (uint)*(byte *)((int)local_82c + iVar161);
                  uVar135 = (uint)*(byte *)((int)local_82c + iVar91);
                  iVar62 = param_4 - 4;
                  iVar43 = param_4 - 5;
                  if (uVar64 < uVar140) {
                    uVar64 = uVar140;
                  }
                  uVar130 = (uint)*(byte *)((int)local_82c + iVar138);
                  iVar63 = param_4 - 3;
                  uVar136 = (uint)*(byte *)((int)local_82c + iVar43);
                  uVar123 = (uint)*(byte *)((int)local_82c + iVar62);
                  if (uVar64 < uVar67) {
                    uVar64 = uVar67;
                  }
                  iVar88 = param_4 - 2;
                  if (uVar64 < uVar35) {
                    uVar64 = uVar35;
                  }
                  uVar68 = (uint)*(byte *)((int)local_82c + iVar63);
                  uVar131 = (uint)*(byte *)((int)local_82c + iVar88);
                  iVar95 = param_4 - 1;
                  if (uVar64 < uVar141) {
                    uVar64 = uVar141;
                  }
                  if (uVar64 < uVar155) {
                    uVar64 = uVar155;
                  }
                  if (uVar64 < uVar36) {
                    uVar64 = uVar36;
                  }
                  uVar45 = (uint)*(byte *)((int)local_834 + -6);
                  uVar143 = (uint)*(byte *)((int)local_834 + -7);
                  uVar137 = (uint)*(byte *)((int)local_82c + iVar95);
                  uVar144 = (uint)*(byte *)((int)local_834 + -5);
                  uVar142 = (uint)*(byte *)((int)local_834 + -8);
                  if (uVar64 < uVar164) {
                    uVar64 = uVar164;
                  }
                  uVar46 = (uint)*(byte *)((int)local_834 + -4);
                  uVar145 = (uint)*(byte *)((int)local_834 + -3);
                  uVar146 = (uint)*(byte *)((int)local_834 + -1);
                  if (uVar64 < uVar156) {
                    uVar64 = uVar156;
                  }
                  uVar47 = (uint)*(byte *)((int)local_834 + -2);
                  uVar147 = (uint)*(byte *)((int)local_834 + iVar138);
                  if (uVar64 < uVar121) {
                    uVar64 = uVar121;
                  }
                  uVar48 = (uint)*(byte *)((int)local_834 + iVar161);
                  uVar148 = (uint)*(byte *)((int)local_834 + iVar43);
                  if (uVar64 < uVar165) {
                    uVar64 = uVar165;
                  }
                  uVar49 = (uint)*(byte *)((int)local_834 + iVar91);
                  uVar149 = (uint)*(byte *)((int)local_834 + iVar63);
                  uVar150 = (uint)*(byte *)((int)local_834 + iVar95);
                  if (uVar64 < uVar122) {
                    uVar64 = uVar122;
                  }
                  uVar50 = (uint)*(byte *)((int)local_834 + iVar62);
                  if (uVar64 < uVar130) {
                    uVar64 = uVar130;
                  }
                  uVar51 = (uint)*(byte *)((int)local_834 + iVar88);
                  uVar103 = (uint)*(byte *)((int)local_830 + -7);
                  uVar104 = (uint)*(byte *)((int)local_830 + -6);
                  if (uVar64 < uVar135) {
                    uVar64 = uVar135;
                  }
                  uVar52 = (uint)*(byte *)((int)local_830 + -8);
                  uVar105 = (uint)*(byte *)((int)local_830 + -5);
                  uVar106 = (uint)*(byte *)((int)local_830 + -4);
                  if (uVar64 < uVar136) {
                    uVar64 = uVar136;
                  }
                  uVar107 = (uint)*(byte *)((int)local_830 + -3);
                  if (uVar64 < uVar123) {
                    uVar64 = uVar123;
                  }
                  sVar108 = (size_t)*(byte *)((int)local_830 + -2);
                  uVar97 = (uint)*(byte *)((int)local_830 + iVar91);
                  if (uVar64 < uVar68) {
                    uVar64 = uVar68;
                  }
                  if (uVar64 < uVar131) {
                    uVar64 = uVar131;
                  }
                  uVar109 = (uint)*(byte *)((int)local_830 + -1);
                  if (uVar64 < uVar137) {
                    uVar64 = uVar137;
                  }
                  uVar115 = (uint)*(byte *)((int)local_830 + iVar161);
                  if (uVar64 < uVar142) {
                    uVar64 = uVar142;
                  }
                  uVar110 = (uint)*(byte *)((int)local_830 + iVar138);
                  if (uVar64 < uVar143) {
                    uVar64 = uVar143;
                  }
                  if (uVar64 < uVar45) {
                    uVar64 = uVar45;
                  }
                  uVar166 = (uint)*(byte *)((int)local_830 + iVar43);
                  uVar157 = (uint)*(byte *)((int)local_830 + iVar62);
                  uVar37 = (uint)*(byte *)((int)local_830 + iVar63);
                  if (uVar64 < uVar144) {
                    uVar64 = uVar144;
                  }
                  uVar53 = (uint)*(byte *)((int)local_830 + iVar88);
                  uVar69 = (uint)*(byte *)((int)local_830 + iVar95);
                  if (uVar64 < uVar46) {
                    uVar64 = uVar46;
                  }
                  if (uVar64 < uVar145) {
                    uVar64 = uVar145;
                  }
                  if (uVar64 < uVar47) {
                    uVar64 = uVar47;
                  }
                  if (uVar64 < uVar146) {
                    uVar64 = uVar146;
                  }
                  if (uVar64 < uVar48) {
                    uVar64 = uVar48;
                  }
                  if (uVar64 < uVar147) {
                    uVar64 = uVar147;
                  }
                  if (uVar64 < uVar49) {
                    uVar64 = uVar49;
                  }
                  if (uVar64 < uVar148) {
                    uVar64 = uVar148;
                  }
                  if (uVar64 < uVar50) {
                    uVar64 = uVar50;
                  }
                  if (uVar64 < uVar149) {
                    uVar64 = uVar149;
                  }
                  if (uVar64 < uVar51) {
                    uVar64 = uVar51;
                  }
                  if (uVar64 < uVar150) {
                    uVar64 = uVar150;
                  }
                  if (uVar64 < uVar52) {
                    uVar64 = uVar52;
                  }
                  if (uVar64 < uVar103) {
                    uVar64 = uVar103;
                  }
                  if (uVar64 < uVar104) {
                    uVar64 = uVar104;
                  }
                  if (uVar64 < uVar105) {
                    uVar64 = uVar105;
                  }
                  if (uVar64 < uVar106) {
                    uVar64 = uVar106;
                  }
                  if (uVar64 < uVar107) {
                    uVar64 = uVar107;
                  }
                  if (uVar64 < sVar108) {
                    uVar64 = sVar108;
                  }
                  if (uVar64 < uVar109) {
                    uVar64 = uVar109;
                  }
                  if (uVar64 < uVar115) {
                    uVar64 = uVar115;
                  }
                  if (uVar64 < uVar110) {
                    uVar64 = uVar110;
                  }
                  if (uVar64 < uVar97) {
                    uVar64 = uVar97;
                  }
                  if (uVar64 < uVar166) {
                    uVar64 = uVar166;
                  }
                  if (uVar64 < uVar157) {
                    uVar64 = uVar157;
                  }
                  if (uVar64 < uVar37) {
                    uVar64 = uVar37;
                  }
                  if (uVar64 < uVar53) {
                    uVar64 = uVar53;
                  }
                  if (uVar64 < uVar69) {
                    uVar64 = uVar69;
                  }
                  if (uVar162 <= uVar90) {
                    uVar90 = uVar162;
                  }
                  if (uVar132 <= uVar90) {
                    uVar90 = uVar132;
                  }
                  if (uVar99 <= uVar90) {
                    uVar90 = uVar99;
                  }
                  if (uVar133 <= uVar90) {
                    uVar90 = uVar133;
                  }
                  if (uVar118 <= uVar90) {
                    uVar90 = uVar118;
                  }
                  if (uVar117 <= uVar90) {
                    uVar90 = uVar117;
                  }
                  if (uVar101 <= uVar90) {
                    uVar90 = uVar101;
                  }
                  if (uVar114 <= uVar90) {
                    uVar90 = uVar114;
                  }
                  if (uVar139 <= uVar90) {
                    uVar90 = uVar139;
                  }
                  if (uVar128 <= uVar90) {
                    uVar90 = uVar128;
                  }
                  if (uVar129 <= uVar90) {
                    uVar90 = uVar129;
                  }
                  if (uVar134 <= uVar90) {
                    uVar90 = uVar134;
                  }
                  if (uVar119 <= uVar90) {
                    uVar90 = uVar119;
                  }
                  if (uVar140 <= uVar90) {
                    uVar90 = uVar140;
                  }
                  if (uVar67 <= uVar90) {
                    uVar90 = uVar67;
                  }
                  if (uVar35 <= uVar90) {
                    uVar90 = uVar35;
                  }
                  if (uVar141 <= uVar90) {
                    uVar90 = uVar141;
                  }
                  if (uVar155 <= uVar90) {
                    uVar90 = uVar155;
                  }
                  if (uVar36 <= uVar90) {
                    uVar90 = uVar36;
                  }
                  if (uVar164 <= uVar90) {
                    uVar90 = uVar164;
                  }
                  if (uVar156 <= uVar90) {
                    uVar90 = uVar156;
                  }
                  if (uVar121 <= uVar90) {
                    uVar90 = uVar121;
                  }
                  if (uVar165 <= uVar90) {
                    uVar90 = uVar165;
                  }
                  if (uVar122 <= uVar90) {
                    uVar90 = uVar122;
                  }
                  if (uVar130 <= uVar90) {
                    uVar90 = uVar130;
                  }
                  if (uVar135 <= uVar90) {
                    uVar90 = uVar135;
                  }
                  if (uVar136 <= uVar90) {
                    uVar90 = uVar136;
                  }
                  if (uVar123 <= uVar90) {
                    uVar90 = uVar123;
                  }
                  if (uVar90 < uVar68) {
                    uVar68 = uVar90;
                  }
                  if (uVar131 <= uVar68) {
                    uVar68 = uVar131;
                  }
                  if (uVar137 <= uVar68) {
                    uVar68 = uVar137;
                  }
                  if (uVar142 <= uVar68) {
                    uVar68 = uVar142;
                  }
                  if (uVar143 <= uVar68) {
                    uVar68 = uVar143;
                  }
                  if (uVar45 <= uVar68) {
                    uVar68 = uVar45;
                  }
                  if (uVar144 <= uVar68) {
                    uVar68 = uVar144;
                  }
                  if (uVar46 <= uVar68) {
                    uVar68 = uVar46;
                  }
                  if (uVar145 <= uVar68) {
                    uVar68 = uVar145;
                  }
                  if (uVar47 <= uVar68) {
                    uVar68 = uVar47;
                  }
                  if (uVar146 <= uVar68) {
                    uVar68 = uVar146;
                  }
                  if (uVar48 <= uVar68) {
                    uVar68 = uVar48;
                  }
                  if (uVar147 <= uVar68) {
                    uVar68 = uVar147;
                  }
                  if (uVar49 <= uVar68) {
                    uVar68 = uVar49;
                  }
                  if (uVar148 <= uVar68) {
                    uVar68 = uVar148;
                  }
                  if (uVar50 <= uVar68) {
                    uVar68 = uVar50;
                  }
                  if (uVar149 <= uVar68) {
                    uVar68 = uVar149;
                  }
                  if (uVar51 <= uVar68) {
                    uVar68 = uVar51;
                  }
                  if (uVar150 <= uVar68) {
                    uVar68 = uVar150;
                  }
                  if (uVar52 <= uVar68) {
                    uVar68 = uVar52;
                  }
                  if (uVar103 <= uVar68) {
                    uVar68 = uVar103;
                  }
                  if (uVar104 <= uVar68) {
                    uVar68 = uVar104;
                  }
                  if (uVar105 <= uVar68) {
                    uVar68 = uVar105;
                  }
                  if (uVar106 <= uVar68) {
                    uVar68 = uVar106;
                  }
                  if (uVar107 <= uVar68) {
                    uVar68 = uVar107;
                  }
                  if (sVar108 <= uVar68) {
                    uVar68 = sVar108;
                  }
                  if (uVar109 <= uVar68) {
                    uVar68 = uVar109;
                  }
                  if (uVar115 <= uVar68) {
                    uVar68 = uVar115;
                  }
                  if (uVar110 <= uVar68) {
                    uVar68 = uVar110;
                  }
                  if (uVar97 <= uVar68) {
                    uVar68 = uVar97;
                  }
                  if (uVar166 <= uVar68) {
                    uVar68 = uVar166;
                  }
                  if (uVar157 <= uVar68) {
                    uVar68 = uVar157;
                  }
                  if (uVar37 <= uVar68) {
                    uVar68 = uVar37;
                  }
                  if (uVar53 <= uVar68) {
                    uVar68 = uVar53;
                  }
                  if (uVar69 <= uVar68) {
                    uVar68 = uVar69;
                  }
                  if (0x13 < (int)(uVar64 - uVar68)) {
                    uVar90 = (int)(uVar68 + uVar64 + 1) >> 1;
                    pbVar127 = (byte *)((int)local_840 + (1 - param_4));
                    puVar125 = &local_5a4;
                    do {
                      uVar64 = (uint)(uVar90 < pbVar127[-1]);
                      if (uVar90 < *pbVar127) {
                        uVar64 = uVar64 + 2;
                      }
                      if (uVar90 < pbVar127[1]) {
                        uVar64 = uVar64 + 4;
                      }
                      if (uVar90 < pbVar127[2]) {
                        uVar64 = uVar64 + 8;
                      }
                      if (uVar90 < pbVar127[3]) {
                        uVar64 = uVar64 + 0x10;
                      }
                      if (uVar90 < pbVar127[4]) {
                        uVar64 = uVar64 + 0x20;
                      }
                      if (uVar90 < pbVar127[5]) {
                        uVar64 = uVar64 + 0x40;
                      }
                      if (uVar90 < pbVar127[6]) {
                        uVar64 = uVar64 + 0x80;
                      }
                      pbVar38 = pbVar127 + 8;
                      if (uVar90 < pbVar127[7]) {
                        uVar64 = uVar64 + 0x100;
                      }
                      sVar20 = param_4;
                      if (uVar90 < *pbVar38) {
                        uVar64 = uVar64 + 0x200;
                        pbVar127 = pbVar127 + param_4;
                        sVar20 = sVar108;
                      }
                      sVar108 = sVar20;
                      uVar64 = uVar64 | ~uVar64 << 0x10;
                      if (*pbVar38 <= uVar90) {
                        pbVar127 = pbVar127 + sVar108;
                      }
                      puVar125 = puVar125 + 1;
                      *puVar125 = uVar64 & uVar64 << 1 & (int)uVar64 >> 1;
                    } while (puVar125 != &local_57c);
                    local_5a0[0] = local_5a0[2] & local_5a0[0] & local_5a0[1];
                    uVar132 = local_5a0[1] & local_5a0[2] & local_5a0[3];
                    uVar118 = local_5a0[3] & local_5a0[2] & local_5a0[4];
                    uVar133 = local_5a0[4] & local_5a0[3] & local_58c;
                    uVar90 = local_5a0[4] & local_58c & local_588;
                    uVar64 = local_58c & local_588 & local_584;
                    pbVar127 = (byte *)((int)local_840 + 8);
                    uVar162 = local_584 & local_580 & local_57c;
                    uVar99 = local_588 & local_584 & local_580;
                    local_81c = (byte *)((int)local_840 + -param_4);
                    iVar91 = (int)local_828 / 2 + 1;
                    local_5a0[1] = uVar132 | (int)uVar132 >> 0x10;
                    local_824 = (uint *)-(int)local_840;
                    local_814 = (uint *)((int)local_83c + -9);
                    local_5a0[0] = local_5a0[0] | (int)local_5a0[0] >> 0x10;
                    local_5a0[2] = uVar118 | (int)uVar118 >> 0x10;
                    local_5a0[3] = uVar133 | (int)uVar133 >> 0x10;
                    local_5a0[4] = uVar90 | (int)uVar90 >> 0x10;
                    local_820 = local_840;
                    local_58c = uVar64 | (int)uVar64 >> 0x10;
                    local_588 = uVar99 | (int)uVar99 >> 0x10;
                    local_584 = uVar162 | (int)uVar162 >> 0x10;
                    local_848 = (uint *)local_5a0[0];
                    local_800 = local_5a0;
                    while( true ) {
                      puVar125 = local_820;
                      pbVar38 = local_81c;
                      puVar94 = local_814;
                      do {
                        pbVar93 = (byte *)((int)puVar125 + 1);
                        if (((int)local_848 >> ((uint)((int)puVar125 + (int)local_824 + 1) & 0xff) &
                            1U) != 0) {
                          bVar21 = *pbVar93;
                          iVar62 = (uint)bVar21 + iVar91;
                          iVar138 = (uint)bVar21 - iVar91;
                          iVar161 = (int)((short)(ushort)*(byte *)((int)puVar94 + 1) * 2 +
                                          (short)(ushort)*(byte *)((int)puVar125 + 2) * 2 +
                                          (short)(ushort)bVar21 * 4 +
                                          (short)(ushort)*(byte *)puVar125 * 2 +
                                          (short)(ushort)pbVar38[1] * 2 + (uint)*pbVar38 +
                                          (uint)pbVar38[2] + (uint)*(byte *)puVar94 +
                                          (uint)*(byte *)((int)puVar94 + 2) + 8) >> 4;
                          if (iVar62 < iVar161) {
                            *pbVar93 = (byte)iVar62;
                          }
                          else {
                            if (iVar138 < iVar161) {
                              iVar138 = iVar161;
                            }
                            *pbVar93 = (byte)iVar138;
                          }
                        }
                        pbVar38 = pbVar38 + 1;
                        puVar94 = (uint *)((int)puVar94 + 1);
                        puVar125 = (uint *)pbVar93;
                      } while (pbVar93 != pbVar127);
                      pbVar127 = pbVar127 + param_4;
                      local_820 = (uint *)((int)local_820 + param_4);
                      local_81c = local_81c + param_4;
                      local_814 = (uint *)((int)local_814 + param_4);
                      local_824 = (uint *)((int)local_824 - param_4);
                      if (&local_584 == local_800) break;
                      local_800 = local_800 + 1;
                      local_848 = (uint *)*local_800;
                    }
                  }
                }
                local_804 = (uint *)((int)local_840 + 8);
                if ((local_7e4 & 0x100000) != 0) {
                  iVar161 = 8;
                  iVar43 = ((iVar85 >> 3) + 1) * 0x100 + ((int)local_838 >> 3);
                  iVar62 = aiStack_558[param_9 + 3];
                  pbVar93 = (byte *)(aiStack_558[param_9] + (int)local_838 + local_698);
                  iVar138 = iVar62 + iVar43 * 4;
                  pbVar38 = (byte *)((int)local_840 + 9);
                  iVar91 = 0;
                  *(int *)(iVar138 + 0x1fc) = iVar26;
                  *(int *)(iVar138 + 0x200) = iVar27;
                  *(int *)(iVar138 + 0x204) = iVar28;
                  pbVar127 = pbVar93;
                  do {
                    pbVar4 = pbVar38 + -8;
                    iVar161 = iVar161 + -1;
                    bVar21 = *pbVar127;
                    pbVar5 = pbVar38 + -7;
                    pbVar168 = pbVar127 + 1;
                    pbVar34 = pbVar127 + 2;
                    pbVar6 = pbVar38 + -6;
                    pbVar153 = pbVar127 + 3;
                    pbVar7 = pbVar38 + -4;
                    pbVar92 = pbVar127 + 5;
                    pbVar8 = pbVar38 + -5;
                    pbVar102 = pbVar127 + 4;
                    pbVar9 = pbVar38 + -3;
                    pbVar2 = pbVar127 + 6;
                    pbVar10 = pbVar38 + -2;
                    pbVar3 = pbVar127 + 7;
                    pbVar127 = pbVar127 + param_4;
                    pbVar11 = pbVar38 + -1;
                    pbVar38 = pbVar38 + param_4;
                    iVar91 = ((uint)*pbVar3 - (uint)*pbVar11) * ((uint)*pbVar3 - (uint)*pbVar11) +
                             ((uint)*pbVar2 - (uint)*pbVar10) * ((uint)*pbVar2 - (uint)*pbVar10) +
                             ((uint)*pbVar92 - (uint)*pbVar9) * ((uint)*pbVar92 - (uint)*pbVar9) +
                             ((uint)*pbVar102 - (uint)*pbVar7) * ((uint)*pbVar102 - (uint)*pbVar7) +
                             ((uint)*pbVar153 - (uint)*pbVar8) * ((uint)*pbVar153 - (uint)*pbVar8) +
                             ((uint)*pbVar34 - (uint)*pbVar6) * ((uint)*pbVar34 - (uint)*pbVar6) +
                             ((uint)*pbVar168 - (uint)*pbVar5) * ((uint)*pbVar168 - (uint)*pbVar5) +
                             ((uint)bVar21 - (uint)*pbVar4) * ((uint)bVar21 - (uint)*pbVar4) +
                             iVar91;
                  } while (iVar161 != 0);
                  iVar88 = *(int *)(iVar138 + -4);
                  iVar63 = *(int *)(iVar138 + -0x400);
                  iVar161 = *(int *)(iVar138 + 4);
                  iVar138 = *(int *)(iVar138 + 0x400);
                  *(int *)(iVar62 + iVar43 * 4) = iVar91;
                  uVar90 = (uint)(iVar88 + iVar63 + 4 + iVar161 + iVar138 + iVar91 * 4) >> 3;
                  if (iVar27 < (int)uVar90) {
                    if ((int)uVar90 < iVar28) {
                      iVar91 = 8;
                      iVar161 = (int)local_83c - param_4;
                      do {
                        iVar91 = iVar91 + -1;
                        bVar21 = (byte)(((uint)*(byte *)(iVar161 + -8) + (uint)*pbVar93 + 1) *
                                        0x800000 >> 0x18);
                        *(byte *)(iVar161 + -8) = bVar21;
                        *pbVar93 = bVar21;
                        bVar21 = (byte)(((uint)*(byte *)(iVar161 + -7) + (uint)pbVar93[1] + 1) *
                                        0x800000 >> 0x18);
                        *(byte *)(iVar161 + -7) = bVar21;
                        pbVar93[1] = bVar21;
                        bVar21 = (byte)(((uint)*(byte *)(iVar161 + -6) + (uint)pbVar93[2] + 1) *
                                        0x800000 >> 0x18);
                        *(byte *)(iVar161 + -6) = bVar21;
                        pbVar93[2] = bVar21;
                        bVar21 = (byte)(((uint)*(byte *)(iVar161 + -5) + (uint)pbVar93[3] + 1) *
                                        0x800000 >> 0x18);
                        *(byte *)(iVar161 + -5) = bVar21;
                        pbVar93[3] = bVar21;
                        bVar21 = (byte)(((uint)*(byte *)(iVar161 + -4) + (uint)pbVar93[4] + 1) *
                                        0x800000 >> 0x18);
                        *(byte *)(iVar161 + -4) = bVar21;
                        pbVar93[4] = bVar21;
                        bVar21 = (byte)(((uint)*(byte *)(iVar161 + -3) + (uint)pbVar93[5] + 1) *
                                        0x800000 >> 0x18);
                        *(byte *)(iVar161 + -3) = bVar21;
                        pbVar93[5] = bVar21;
                        bVar21 = (byte)(((uint)*(byte *)(iVar161 + -2) + (uint)pbVar93[6] + 1) *
                                        0x800000 >> 0x18);
                        *(byte *)(iVar161 + -2) = bVar21;
                        pbVar93[6] = bVar21;
                        bVar21 = (byte)(((uint)*(byte *)(iVar161 + -1) + (uint)pbVar93[7] + 1) *
                                        0x800000 >> 0x18);
                        *(byte *)(iVar161 + -1) = bVar21;
                        pbVar93[7] = bVar21;
                        iVar161 = iVar161 + param_4;
                        pbVar93 = pbVar93 + param_4;
                      } while (iVar91 != 0);
                    }
                    else {
                      iVar91 = 8;
                      iVar161 = (int)local_83c - param_4;
                      do {
                        iVar91 = iVar91 + -1;
                        *pbVar93 = *(byte *)(iVar161 + -8);
                        pbVar93[1] = *(byte *)(iVar161 + -7);
                        pbVar93[2] = *(byte *)(iVar161 + -6);
                        pbVar93[3] = *(byte *)(iVar161 + -5);
                        pbVar93[4] = *(byte *)(iVar161 + -4);
                        pbVar93[5] = *(byte *)(iVar161 + -3);
                        pbVar93[6] = *(byte *)(iVar161 + -2);
                        pbVar127 = (byte *)(iVar161 + -1);
                        iVar161 = iVar161 + param_4;
                        pbVar93[7] = *pbVar127;
                        pbVar93 = pbVar93 + param_4;
                      } while (iVar91 != 0);
                    }
                  }
                  else {
                    iVar161 = 8;
                    iVar91 = (int)local_83c - param_4;
                    if ((int)uVar90 < iVar26) {
                      do {
                        iVar161 = iVar161 + -1;
                        bVar21 = (byte)(((short)(ushort)*pbVar93 * 7 + (uint)*(byte *)(iVar91 + -8)
                                        + 4) * 0x200000 >> 0x18);
                        *(byte *)(iVar91 + -8) = bVar21;
                        *pbVar93 = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[1] * 7 +
                                         (uint)*(byte *)(iVar91 + -7) + 4) * 0x200000 >> 0x18);
                        *(byte *)(iVar91 + -7) = bVar21;
                        pbVar93[1] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[2] * 7 +
                                         (uint)*(byte *)(iVar91 + -6) + 4) * 0x200000 >> 0x18);
                        *(byte *)(iVar91 + -6) = bVar21;
                        pbVar93[2] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[3] * 7 +
                                         (uint)*(byte *)(iVar91 + -5) + 4) * 0x200000 >> 0x18);
                        *(byte *)(iVar91 + -5) = bVar21;
                        pbVar93[3] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[4] * 7 +
                                         (uint)*(byte *)(iVar91 + -4) + 4) * 0x200000 >> 0x18);
                        *(byte *)(iVar91 + -4) = bVar21;
                        pbVar93[4] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[5] * 7 +
                                         (uint)*(byte *)(iVar91 + -3) + 4) * 0x200000 >> 0x18);
                        *(byte *)(iVar91 + -3) = bVar21;
                        pbVar93[5] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[6] * 7 +
                                         (uint)*(byte *)(iVar91 + -2) + 4) * 0x200000 >> 0x18);
                        *(byte *)(iVar91 + -2) = bVar21;
                        pbVar93[6] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[7] * 7 +
                                         (uint)*(byte *)(iVar91 + -1) + 4) * 0x200000 >> 0x18);
                        *(byte *)(iVar91 + -1) = bVar21;
                        pbVar93[7] = bVar21;
                        iVar91 = iVar91 + param_4;
                        pbVar93 = pbVar93 + param_4;
                      } while (iVar161 != 0);
                    }
                    else {
                      do {
                        iVar161 = iVar161 + -1;
                        bVar21 = (byte)(((short)(ushort)*pbVar93 * 3 + (uint)*(byte *)(iVar91 + -8)
                                        + 2) * 0x400000 >> 0x18);
                        *(byte *)(iVar91 + -8) = bVar21;
                        *pbVar93 = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[1] * 3 +
                                         (uint)*(byte *)(iVar91 + -7) + 2) * 0x400000 >> 0x18);
                        *(byte *)(iVar91 + -7) = bVar21;
                        pbVar93[1] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[2] * 3 +
                                         (uint)*(byte *)(iVar91 + -6) + 2) * 0x400000 >> 0x18);
                        *(byte *)(iVar91 + -6) = bVar21;
                        pbVar93[2] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[3] * 3 +
                                         (uint)*(byte *)(iVar91 + -5) + 2) * 0x400000 >> 0x18);
                        *(byte *)(iVar91 + -5) = bVar21;
                        pbVar93[3] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[4] * 3 +
                                         (uint)*(byte *)(iVar91 + -4) + 2) * 0x400000 >> 0x18);
                        *(byte *)(iVar91 + -4) = bVar21;
                        pbVar93[4] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[5] * 3 +
                                         (uint)*(byte *)(iVar91 + -3) + 2) * 0x400000 >> 0x18);
                        *(byte *)(iVar91 + -3) = bVar21;
                        pbVar93[5] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[6] * 3 +
                                         (uint)*(byte *)(iVar91 + -2) + 2) * 0x400000 >> 0x18);
                        *(byte *)(iVar91 + -2) = bVar21;
                        pbVar93[6] = bVar21;
                        bVar21 = (byte)(((short)(ushort)pbVar93[7] * 3 +
                                         (uint)*(byte *)(iVar91 + -1) + 2) * 0x400000 >> 0x18);
                        *(byte *)(iVar91 + -1) = bVar21;
                        pbVar93[7] = bVar21;
                        iVar91 = iVar91 + param_4;
                        pbVar93 = pbVar93 + param_4;
                      } while (iVar161 != 0);
                    }
                  }
                }
                local_83c = (uint *)((int)local_83c + 8);
                local_838 = (uint *)((int)local_838 + 8);
                local_82c = (uint *)((int)local_82c + 8);
                local_834 = (uint *)((int)local_834 + 8);
                local_830 = (uint *)((int)local_830 + 8);
                local_840 = local_804;
                local_810 = (byte *)((int)local_810 + 4);
                local_808 = local_808 + 2;
              } while ((int)local_838 < (int)sVar87);
            }
            local_7ec = (byte *)((int)pbVar39 + 8);
            local_81c = (byte *)((int)local_7ec + uVar65 * 8);
            local_7a0 = local_7a0 + iVar33;
            local_7cc = pvVar89;
          }
        } while ((int)local_81c < (int)param_5);
      }
      if (uVar70 != 0) {
        FUN_00011754((int)local_7cc + (-8 - param_4),param_4,local_828);
      }
      if ((local_7e4 & 0x100000) != 0) {
        iVar91 = 8;
        iVar161 = ((int)local_81c >> 3) + ((iVar85 >> 3) + 1) * 0x100;
        iVar86 = aiStack_558[param_9 + 3];
        iVar85 = iVar86 + iVar161 * 4;
        pbVar127 = (byte *)(aiStack_558[param_9] + (int)local_81c + local_698);
        *(int *)(iVar85 + 0x1fc) = iVar26;
        iVar61 = 0;
        *(int *)(iVar85 + 0x200) = iVar27;
        *(int *)(iVar85 + 0x204) = iVar28;
        pbVar39 = pbVar127;
        pvVar98 = local_7cc;
        do {
          iVar91 = iVar91 + -1;
          iVar95 = (uint)*pbVar39 - (uint)*(byte *)((int)pvVar98 + -8);
          iVar63 = (uint)pbVar39[1] - (uint)*(byte *)((int)pvVar98 + -7);
          iVar43 = (uint)pbVar39[2] - (uint)*(byte *)((int)pvVar98 + -6);
          iVar88 = (uint)pbVar39[3] - (uint)*(byte *)((int)pvVar98 + -5);
          iVar62 = (uint)pbVar39[4] - (uint)*(byte *)((int)pvVar98 + -4);
          iVar33 = (uint)pbVar39[5] - (uint)*(byte *)((int)pvVar98 + -3);
          iVar100 = (uint)pbVar39[6] - (uint)*(byte *)((int)pvVar98 + -2);
          pbVar38 = pbVar39 + 7;
          pbVar39 = pbVar39 + param_4;
          pbVar93 = (byte *)((int)pvVar98 + -1);
          pvVar98 = (void *)((int)pvVar98 + param_4);
          iVar138 = (uint)*pbVar38 - (uint)*pbVar93;
          iVar61 = iVar138 * iVar138 +
                   iVar100 * iVar100 +
                   iVar33 * iVar33 +
                   iVar62 * iVar62 +
                   iVar88 * iVar88 + iVar43 * iVar43 + iVar63 * iVar63 + iVar95 * iVar95 + iVar61;
        } while (iVar91 != 0);
        iVar33 = *(int *)(iVar85 + -0x400);
        iVar138 = *(int *)(iVar85 + -4);
        iVar91 = *(int *)(iVar85 + 4);
        iVar85 = *(int *)(iVar85 + 0x400);
        *(int *)(iVar86 + iVar161 * 4) = iVar61;
        uVar70 = (uint)(iVar33 + iVar138 + 4 + iVar91 + iVar85 + iVar61 * 4) >> 3;
        if (iVar27 < (int)uVar70) {
          if ((int)uVar70 < iVar28) {
            iVar86 = 8;
            do {
              iVar86 = iVar86 + -1;
              bVar21 = (byte)(((uint)*pbVar127 + (uint)*(byte *)((int)local_7cc + -8) + 1) *
                              0x800000 >> 0x18);
              *(byte *)((int)local_7cc + -8) = bVar21;
              *pbVar127 = bVar21;
              bVar21 = (byte)(((uint)*(byte *)((int)local_7cc + -7) + (uint)pbVar127[1] + 1) *
                              0x800000 >> 0x18);
              *(byte *)((int)local_7cc + -7) = bVar21;
              pbVar127[1] = bVar21;
              bVar21 = (byte)(((uint)pbVar127[2] + (uint)*(byte *)((int)local_7cc + -6) + 1) *
                              0x800000 >> 0x18);
              *(byte *)((int)local_7cc + -6) = bVar21;
              pbVar127[2] = bVar21;
              bVar21 = (byte)(((uint)pbVar127[3] + (uint)*(byte *)((int)local_7cc + -5) + 1) *
                              0x800000 >> 0x18);
              *(byte *)((int)local_7cc + -5) = bVar21;
              pbVar127[3] = bVar21;
              bVar21 = (byte)(((uint)pbVar127[4] + (uint)*(byte *)((int)local_7cc + -4) + 1) *
                              0x800000 >> 0x18);
              *(byte *)((int)local_7cc + -4) = bVar21;
              pbVar127[4] = bVar21;
              bVar21 = (byte)(((uint)pbVar127[5] + (uint)*(byte *)((int)local_7cc + -3) + 1) *
                              0x800000 >> 0x18);
              *(byte *)((int)local_7cc + -3) = bVar21;
              pbVar127[5] = bVar21;
              bVar21 = (byte)(((uint)pbVar127[6] + (uint)*(byte *)((int)local_7cc + -2) + 1) *
                              0x800000 >> 0x18);
              *(byte *)((int)local_7cc + -2) = bVar21;
              pbVar127[6] = bVar21;
              bVar21 = (byte)(((uint)pbVar127[7] + (uint)*(byte *)((int)local_7cc + -1) + 1) *
                              0x800000 >> 0x18);
              *(byte *)((int)local_7cc + -1) = bVar21;
              pbVar127[7] = bVar21;
              local_7cc = (void *)((int)local_7cc + param_4);
              pbVar127 = pbVar127 + param_4;
            } while (iVar86 != 0);
          }
          else {
            iVar86 = 8;
            do {
              iVar86 = iVar86 + -1;
              *pbVar127 = *(byte *)((int)local_7cc + -8);
              pbVar127[1] = *(byte *)((int)local_7cc + -7);
              pbVar127[2] = *(byte *)((int)local_7cc + -6);
              pbVar127[3] = *(byte *)((int)local_7cc + -5);
              pbVar127[4] = *(byte *)((int)local_7cc + -4);
              pbVar127[5] = *(byte *)((int)local_7cc + -3);
              pbVar127[6] = *(byte *)((int)local_7cc + -2);
              pbVar39 = (byte *)((int)local_7cc + -1);
              local_7cc = (void *)((int)local_7cc + param_4);
              pbVar127[7] = *pbVar39;
              pbVar127 = pbVar127 + param_4;
            } while (iVar86 != 0);
          }
        }
        else {
          iVar86 = 8;
          if ((int)uVar70 < iVar26) {
            do {
              iVar86 = iVar86 + -1;
              bVar21 = (byte)(((short)(ushort)*pbVar127 * 7 + (uint)*(byte *)((int)local_7cc + -8) +
                              4) * 0x200000 >> 0x18);
              *(byte *)((int)local_7cc + -8) = bVar21;
              *pbVar127 = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[1] * 7 + (uint)*(byte *)((int)local_7cc + -7)
                              + 4) * 0x200000 >> 0x18);
              *(byte *)((int)local_7cc + -7) = bVar21;
              pbVar127[1] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[2] * 7 + (uint)*(byte *)((int)local_7cc + -6)
                              + 4) * 0x200000 >> 0x18);
              *(byte *)((int)local_7cc + -6) = bVar21;
              pbVar127[2] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[3] * 7 + (uint)*(byte *)((int)local_7cc + -5)
                              + 4) * 0x200000 >> 0x18);
              *(byte *)((int)local_7cc + -5) = bVar21;
              pbVar127[3] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[4] * 7 + (uint)*(byte *)((int)local_7cc + -4)
                              + 4) * 0x200000 >> 0x18);
              *(byte *)((int)local_7cc + -4) = bVar21;
              pbVar127[4] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[5] * 7 + (uint)*(byte *)((int)local_7cc + -3)
                              + 4) * 0x200000 >> 0x18);
              *(byte *)((int)local_7cc + -3) = bVar21;
              pbVar127[5] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[6] * 7 + (uint)*(byte *)((int)local_7cc + -2)
                              + 4) * 0x200000 >> 0x18);
              *(byte *)((int)local_7cc + -2) = bVar21;
              pbVar127[6] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[7] * 7 + (uint)*(byte *)((int)local_7cc + -1)
                              + 4) * 0x200000 >> 0x18);
              *(byte *)((int)local_7cc + -1) = bVar21;
              pbVar127[7] = bVar21;
              local_7cc = (void *)((int)local_7cc + param_4);
              pbVar127 = pbVar127 + param_4;
            } while (iVar86 != 0);
          }
          else {
            do {
              iVar86 = iVar86 + -1;
              bVar21 = (byte)(((short)(ushort)*pbVar127 * 3 + (uint)*(byte *)((int)local_7cc + -8) +
                              2) * 0x400000 >> 0x18);
              *(byte *)((int)local_7cc + -8) = bVar21;
              *pbVar127 = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[1] * 3 + (uint)*(byte *)((int)local_7cc + -7)
                              + 2) * 0x400000 >> 0x18);
              *(byte *)((int)local_7cc + -7) = bVar21;
              pbVar127[1] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[2] * 3 + (uint)*(byte *)((int)local_7cc + -6)
                              + 2) * 0x400000 >> 0x18);
              *(byte *)((int)local_7cc + -6) = bVar21;
              pbVar127[2] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[3] * 3 + (uint)*(byte *)((int)local_7cc + -5)
                              + 2) * 0x400000 >> 0x18);
              *(byte *)((int)local_7cc + -5) = bVar21;
              pbVar127[3] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[4] * 3 + (uint)*(byte *)((int)local_7cc + -4)
                              + 2) * 0x400000 >> 0x18);
              *(byte *)((int)local_7cc + -4) = bVar21;
              pbVar127[4] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[5] * 3 + (uint)*(byte *)((int)local_7cc + -3)
                              + 2) * 0x400000 >> 0x18);
              *(byte *)((int)local_7cc + -3) = bVar21;
              pbVar127[5] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[6] * 3 + (uint)*(byte *)((int)local_7cc + -2)
                              + 2) * 0x400000 >> 0x18);
              *(byte *)((int)local_7cc + -2) = bVar21;
              pbVar127[6] = bVar21;
              bVar21 = (byte)(((short)(ushort)pbVar127[7] * 3 + (uint)*(byte *)((int)local_7cc + -1)
                              + 2) * 0x400000 >> 0x18);
              *(byte *)((int)local_7cc + -1) = bVar21;
              pbVar127[7] = bVar21;
              local_7cc = (void *)((int)local_7cc + param_4);
              pbVar127 = pbVar127 + param_4;
            } while (iVar86 != 0);
          }
        }
      }
      if (param_6 <= iVar60) {
        if (__n == param_5) {
          if ((int)param_4 < 1) {
            pvVar98 = (void *)((int)pvVar81 + local_648 + uVar84 * param_4);
            pvVar89 = pvVar32;
            sVar87 = local_63c;
          }
          else {
            pvVar89 = local_654;
            sVar87 = param_6 * param_4 + local_648;
            pvVar98 = pvVar81;
          }
          memcpy(pvVar89,pvVar98,sVar87);
        }
        else {
          iVar86 = 0;
          pvVar98 = local_654;
          pvVar89 = pvVar81;
          do {
            iVar86 = iVar86 + 1;
            pvVar98 = memcpy(pvVar98,pvVar89,param_5);
            pvVar89 = (void *)((int)pvVar89 + param_4);
            pvVar98 = (void *)((int)pvVar98 + param_4);
          } while (iVar86 < local_658);
        }
      }
      local_7b8 = local_7b8 + 8;
      local_658 = local_658 + -8;
      local_654 = (void *)((int)local_654 + iVar1);
      local_63c = local_63c + iVar1;
      local_698 = local_698 + iVar1;
      local_64c = local_64c + param_2 * 8;
      local_648 = local_648 - local_630;
    } while ((param_6 + -8) - (uVar84 & 0xfffffff8) != local_658);
  }
  local_568 = local_5f0;
  uStack_564 = uStack_5ec;
  local_560 = local_5e8;
  uStack_55c = uStack_5e4;
  local_cc = (int)local_828;
  local_c8 = (int)local_7f8;
  local_88 = local_5f8;
  local_570 = puVar71;
  local_540 = iVar72;
  local_53c = iVar73;
  local_538 = iVar74;
  local_d4 = iVar75;
  local_78 = iVar76;
  local_74 = iVar55;
  local_70 = uVar40;
  local_6c = uVar41;
  local_64 = iVar22;
  local_60 = iVar23;
  local_5c = iVar24;
  local_58 = uVar25;
  local_54 = iVar26;
  local_50 = iVar27;
  local_4c = iVar28;
  local_48 = iVar29;
  local_44 = iVar30;
  local_530 = uVar170;
  local_528 = uVar171;
  memcpy(param_10,aiStack_578,0x540);
  return;
}



/* ===== pp_get_mode_by_name_and_quality @ 000178f8 size=2568 ===== */

/* WARNING: Type propagation algorithm not settling */

uint * pp_get_mode_by_name_and_quality(char *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  size_t sVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  int *piVar23;
  char *pcVar24;
  int iVar25;
  char **ppcVar26;
  int local_288;
  char *local_280;
  int local_260;
  undefined1 auStack_24c [4];
  char *local_248;
  char *local_244 [10];
  char acStack_21c [504];
  
  iVar19 = DAT_00018300 + 0x17914;
  if (param_1 == (char *)0x0) {
    av_log(0,0x10,DAT_000183a8 + 0x182f4);
    return (uint *)0x0;
  }
  iVar4 = strcmp(param_1,(char *)(DAT_00018304 + 0x17924));
  if (iVar4 == 0) {
    pcVar6 = *(char **)(iVar19 + DAT_00018320);
    iVar19 = DAT_00018324 + 97000;
    while( true ) {
      pcVar8 = strchr(pcVar6,10);
      pcVar24 = pcVar8 + (2 - (int)pcVar6);
      if (pcVar8 == (char *)0x0) break;
      if ((char *)0x1f3 < pcVar24) {
        pcVar24 = (char *)0x1f4;
      }
      av_strlcpy(acStack_21c,pcVar6,pcVar24);
      av_log(0,0x20,iVar19,acStack_21c);
      pcVar6 = strchr(pcVar6,10);
      pcVar6 = pcVar6 + 1;
    }
  }
  else {
    puVar5 = (uint *)av_malloc(0x34);
    if (puVar5 != (uint *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[7] = 700;
      puVar5[8] = 0x5dc;
      puVar5[9] = 3000;
      puVar5[4] = 0xea;
      puVar5[3] = 0x10;
      puVar5[10] = 0x20;
      puVar5[0xb] = 0x27;
      puVar5[5] = 1;
      puVar5[6] = 100;
      memset(acStack_21c,0,500);
      av_strlcpy(acStack_21c,param_1,499);
      iVar19 = DAT_0001830c;
      iVar20 = DAT_0001830c + 0x179dc;
      av_log(0,0x30,DAT_00018308 + 0x179d4,param_1);
      iVar4 = DAT_00018314 + 0x179f8;
      iVar17 = DAT_00018310 + 0x179f4;
      local_260 = 1000000;
      local_280 = acStack_21c;
LAB_00017a1c:
      pcVar6 = (char *)av_strtok(local_280,iVar20,auStack_24c);
      if (pcVar6 != (char *)0x0) {
        sVar7 = strlen(pcVar6);
        pcVar8 = (char *)av_strtok(pcVar6,iVar19 + 0x179e0,auStack_24c);
        iVar12 = DAT_00018328;
        if (pcVar8 != (char *)0x0) {
          pcVar24 = pcVar8;
          av_log(0,0x30,iVar4,pcVar6,pcVar8);
          pcVar6 = (char *)(DAT_0001832c + 0x17b80);
          bVar1 = *pcVar8 != '-';
          bVar3 = true;
          if (*pcVar8 == '-') {
            pcVar8 = pcVar8 + 1;
          }
          local_288 = -1;
          iVar21 = 0;
          iVar25 = local_260;
          do {
            pcVar9 = (char *)av_strtok(0,iVar17,auStack_24c);
            iVar11 = iVar25;
            if (pcVar9 == (char *)0x0) break;
            av_log(0,0x30,iVar12 + 0x17b70,pcVar9,pcVar24);
            iVar10 = strcmp(pcVar6,pcVar9);
            iVar11 = param_2;
            if ((iVar10 != 0) &&
               (iVar10 = strcmp((char *)(DAT_00018330 + 0x17c04),pcVar9), iVar10 != 0)) {
              iVar11 = strcmp((char *)(DAT_00018334 + 0x17c1c),pcVar9);
              if ((iVar11 == 0) ||
                 (iVar11 = strcmp((char *)(DAT_00018338 + 0x17c34),pcVar9), iVar11 == 0)) {
                local_288 = 0;
                iVar11 = iVar25;
              }
              else {
                iVar11 = strcmp((char *)(DAT_00018354 + 0x17e94),pcVar9);
                if ((iVar11 == 0) ||
                   (iVar11 = strcmp((char *)(DAT_00018358 + 0x17eac),pcVar9), iVar11 == 0)) {
                  local_288 = 1;
                  iVar11 = iVar25;
                }
                else {
                  iVar11 = strcmp((char *)(DAT_0001835c + 0x17ec4),pcVar9);
                  if ((iVar11 == 0) ||
                     (iVar11 = strcmp((char *)(DAT_00018360 + 0x17edc),pcVar9), iVar11 == 0)) {
                    bVar3 = false;
                    iVar11 = iVar25;
                  }
                  else {
                    local_244[iVar21] = pcVar9;
                    iVar21 = iVar21 + 1;
                    iVar11 = iVar25;
                  }
                }
              }
            }
            iVar25 = iVar11;
          } while (iVar21 < 9);
          local_280 = local_280 + sVar7 + 1;
          puVar22 = (undefined4 *)(DAT_0001833c + 0x17c80);
          pcVar6 = (char *)(DAT_00018340 + 0x17c88);
          bVar16 = false;
          local_244[iVar21] = (char *)0x0;
          do {
            pcVar24 = local_280 + -1;
            iVar12 = strcmp(pcVar6,pcVar8);
            if (iVar12 == 0) {
              pcVar6 = (char *)puVar22[1];
              sVar7 = strlen(pcVar6);
              local_280[-1] = ',';
              sVar13 = strlen(pcVar24);
              local_280 = pcVar24;
              if ((char *)0x1f2 < pcVar24 + sVar7 + (sVar13 - (int)acStack_21c)) {
                puVar5[2] = puVar5[2] + 1;
                break;
              }
              memmove(pcVar24 + sVar7,pcVar24,sVar13 + 1);
              memcpy(pcVar24,pcVar6,sVar7);
              bVar16 = true;
            }
            puVar22 = puVar22 + 2;
            pcVar6 = (char *)*puVar22;
          } while (pcVar6 != (char *)0x0);
          pcVar6 = (char *)(DAT_00018348 + 0x17d38);
          pcVar9 = (char *)(DAT_0001834c + 0x17d40);
          pcVar24 = (char *)(DAT_00018350 + 0x17d4c);
          piVar23 = (int *)(DAT_00018344 + 0x17d64);
          do {
            iVar12 = strcmp(pcVar6,pcVar8);
            if ((iVar12 == 0) || (iVar12 = strcmp(pcVar9,pcVar8), iVar12 == 0)) {
              pcVar6 = local_244[0];
              uVar18 = piVar23[3];
              uVar15 = *puVar5;
              uVar14 = puVar5[1];
              *puVar5 = uVar15 & ~uVar18;
              puVar5[1] = ~uVar18 & uVar14;
              if (!bVar1) {
                uVar14 = puVar5[2];
                goto LAB_000182b0;
              }
              bVar16 = bVar3;
              if (iVar11 < piVar23[1]) {
                bVar16 = false;
              }
              if (bVar16) {
                *puVar5 = uVar15 | uVar18;
              }
              if (((local_288 == 1) || ((local_288 == -1 && (*piVar23 != 0)))) &&
                 (piVar23[2] <= iVar11)) {
                puVar5[1] = uVar18 | uVar14;
              }
              bVar16 = bVar1;
              if (uVar18 == 8) {
                puVar5[3] = 0x10;
                puVar5[4] = 0xea;
                if (local_244[0] != (char *)0x0) {
                  iVar12 = strcmp(local_244[0],pcVar24);
                  if ((iVar12 == 0) ||
                     (iVar12 = strcmp(pcVar6,(char *)(DAT_00018364 + 0x17f6c)), iVar12 == 0)) {
                    iVar21 = iVar21 + -1;
                    puVar5[3] = 0;
                    puVar5[4] = 0xff;
                  }
                  pcVar6 = local_244[1];
                  if (local_244[1] != (char *)0x0) {
                    iVar12 = strcmp(local_244[1],(char *)(DAT_00018368 + 0x17fa0));
                    if ((iVar12 == 0) ||
                       (iVar12 = strcmp(pcVar6,(char *)(DAT_0001836c + 0x17fb8)), iVar12 == 0)) {
                      iVar21 = iVar21 + -1;
                      puVar5[3] = 0;
                      puVar5[4] = 0xff;
                    }
                    pcVar6 = local_244[2];
                    if (local_244[2] != (char *)0x0) {
                      iVar12 = strcmp(local_244[2],(char *)(DAT_00018370 + 0x17fec));
                      if ((iVar12 == 0) ||
                         (iVar12 = strcmp(pcVar6,(char *)(DAT_00018374 + 0x18004)), iVar12 == 0)) {
                        iVar21 = iVar21 + -1;
                        puVar5[3] = 0;
                        puVar5[4] = 0xff;
                      }
                      pcVar6 = local_244[3];
                      if (local_244[3] != (char *)0x0) {
                        iVar12 = strcmp(local_244[3],(char *)(DAT_00018378 + 0x18038));
                        if ((iVar12 == 0) ||
                           (iVar12 = strcmp(pcVar6,(char *)(DAT_0001837c + 0x18050)), iVar12 == 0))
                        {
                          iVar21 = iVar21 + -1;
                          puVar5[3] = 0;
                          puVar5[4] = 0xff;
                        }
                        pcVar6 = local_244[4];
                        if (local_244[4] != (char *)0x0) {
                          iVar12 = strcmp(local_244[4],(char *)(DAT_00018380 + 0x18074));
                          if ((iVar12 == 0) ||
                             (iVar12 = strcmp(pcVar6,(char *)(DAT_00018384 + 0x1808c)), iVar12 == 0)
                             ) {
                            iVar21 = iVar21 + -1;
                            puVar5[3] = 0;
                            puVar5[4] = 0xff;
                          }
                          pcVar6 = local_244[5];
                          if (local_244[5] != (char *)0x0) {
                            iVar12 = strcmp(local_244[5],(char *)(DAT_00018388 + 0x180b0));
                            if ((iVar12 == 0) ||
                               (iVar12 = strcmp(pcVar6,(char *)(DAT_0001838c + 0x180c8)),
                               iVar12 == 0)) {
                              iVar21 = iVar21 + -1;
                              puVar5[3] = 0;
                              puVar5[4] = 0xff;
                            }
                            pcVar6 = local_244[6];
                            if (local_244[6] != (char *)0x0) {
                              iVar12 = strcmp(local_244[6],(char *)(DAT_00018390 + 0x180ec));
                              if ((iVar12 == 0) ||
                                 (iVar12 = strcmp(pcVar6,(char *)(DAT_00018394 + 0x18104)),
                                 iVar12 == 0)) {
                                iVar21 = iVar21 + -1;
                                puVar5[3] = 0;
                                puVar5[4] = 0xff;
                              }
                              pcVar6 = local_244[7];
                              if (local_244[7] != (char *)0x0) {
                                iVar12 = strcmp(local_244[7],(char *)(DAT_00018398 + 0x18128));
                                if ((iVar12 == 0) ||
                                   (iVar12 = strcmp(pcVar6,(char *)(DAT_0001839c + 0x18140)),
                                   iVar12 == 0)) {
                                  iVar21 = iVar21 + -1;
                                  puVar5[3] = 0;
                                  puVar5[4] = 0xff;
                                }
                                pcVar6 = local_244[8];
                                if ((local_244[8] != (char *)0x0) &&
                                   ((iVar12 = strcmp(local_244[8],(char *)(DAT_000183a0 + 0x18164)),
                                    iVar12 == 0 ||
                                    (iVar12 = strcmp(pcVar6,(char *)(DAT_000183a4 + 0x1817c)),
                                    iVar12 == 0)))) {
                                  iVar21 = iVar21 + -1;
                                  puVar5[3] = 0;
                                  puVar5[4] = 0xff;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else if (uVar18 == 0x100000) {
                if (local_244[0] != (char *)0x0) {
                  ppcVar26 = local_244;
                  iVar12 = 0;
                  do {
                    ppcVar26 = ppcVar26 + 1;
                    uVar14 = strtol(pcVar6,&local_248,0);
                    puVar5[iVar12 + 7] = uVar14;
                    if (local_248 != pcVar6) {
                      iVar12 = iVar12 + 1;
                      iVar21 = iVar21 + -1;
                      if (2 < iVar12) break;
                    }
                    pcVar6 = *ppcVar26;
                  } while (pcVar6 != (char *)0x0);
                }
              }
              else if (uVar18 - 1 < 2 || (uVar18 == 0x4000 || uVar18 == 0x400)) {
                if (local_244[0] != (char *)0x0) {
                  ppcVar26 = local_244;
                  bVar2 = false;
                  do {
                    ppcVar26 = ppcVar26 + 1;
                    uVar14 = strtol(pcVar6,&local_248,0);
                    if (local_248 == pcVar6) break;
                    iVar21 = iVar21 + -1;
                    if (bVar2) {
                      puVar5[0xb] = uVar14;
                      break;
                    }
                    pcVar6 = *ppcVar26;
                    puVar5[10] = uVar14;
                    bVar2 = bVar1;
                  } while (pcVar6 != (char *)0x0);
                }
              }
              else if (((uVar18 == 0x200000) && (puVar5[0xc] = 0xf, local_244[0] != (char *)0x0)) &&
                      (uVar14 = strtol(local_244[0],&local_248,0), local_248 != pcVar6)) {
                iVar21 = iVar21 + -1;
                puVar5[0xc] = uVar14;
              }
            }
            pcVar9 = (char *)piVar23[4];
            if (pcVar9 == (char *)0x0) goto LAB_000182a4;
            pcVar6 = (char *)piVar23[5];
            piVar23 = piVar23 + 6;
          } while( true );
        }
        puVar5[2] = puVar5[2] + 1;
      }
      av_log(0,0x30,DAT_00018318 + 0x17a80,*puVar5,puVar5[1]);
      if (puVar5[2] == 0) {
        return puVar5;
      }
      av_log(0,0x10,DAT_0001831c + 0x17ab8,puVar5[2],param_1);
      av_free(puVar5);
    }
  }
  return (uint *)0x0;
LAB_000182a4:
  uVar14 = puVar5[2];
  if (!bVar16) {
    uVar14 = uVar14 + 1;
  }
LAB_000182b0:
  puVar5[2] = uVar14 + iVar21;
  goto LAB_00017a1c;
}



/* ===== pp_free_mode @ 000183ac size=4 ===== */

void pp_free_mode(void)

{
  (*(code *)PTR_av_free_0002a030)();
  return;
}



/* ===== pp_postprocess @ 000183b0 size=1568 ===== */

void pp_postprocess(undefined4 *param_1,uint *param_2,undefined4 *param_3,int *param_4,int param_5,
                   int param_6,int param_7,int param_8,uint *param_9,int param_10,uint param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  size_t sVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint *puVar19;
  void *pvVar20;
  void *pvVar21;
  int local_48;
  
  iVar2 = *param_4;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  uVar4 = (int)*param_2 >> 0x1f;
  iVar5 = (*param_2 ^ uVar4) - uVar4;
  iVar1 = *(int *)(param_10 + 0x4fc);
  if (iVar5 <= iVar2) {
    iVar5 = iVar2;
  }
  local_48 = param_8;
  if (param_8 < 0) {
    param_8 = -param_8;
  }
  uVar4 = param_5 + 0xf >> 4;
  iVar3 = *(int *)(param_10 + 0x4f8);
  iVar2 = param_6 + 0xf >> 4;
  if ((iVar1 < iVar5) || (iVar3 < param_8)) {
    if (iVar3 <= param_8) {
      iVar3 = param_8;
    }
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    FUN_000115d4(param_10,param_5,param_6,iVar5,iVar3);
    uVar10 = *param_9 & 0x200000;
    if (param_7 != 0) goto LAB_0001845c;
LAB_0001877c:
    param_7 = *(int *)(param_10 + 0x4a8);
    if (uVar10 != 0) goto LAB_00018468;
    if ((int)uVar4 < 1) goto LAB_00018494;
    uVar10 = 0;
    iVar5 = param_7;
    while( true ) {
      *(undefined1 *)(iVar5 + uVar10) = 1;
      uVar10 = uVar10 + 1;
      if (uVar4 == uVar10) break;
      iVar5 = *(int *)(param_10 + 0x4a8);
    }
    param_8 = 0;
    local_48 = 0;
  }
  else {
    uVar10 = *param_9 & 0x200000;
    if (param_7 == 0) goto LAB_0001877c;
LAB_0001845c:
    if (uVar10 == 0) goto LAB_0001849c;
    param_7 = *(int *)(param_10 + 0x4a8);
LAB_00018468:
    if (0 < (int)uVar4) {
      uVar10 = 0;
      iVar5 = param_7;
      while( true ) {
        *(char *)(iVar5 + uVar10) = (char)param_9[0xc];
        uVar10 = uVar10 + 1;
        if (uVar4 == uVar10) break;
        iVar5 = *(int *)(param_10 + 0x4a8);
      }
    }
LAB_00018494:
    param_8 = 0;
    local_48 = 0;
  }
LAB_0001849c:
  if ((param_11 & 0x10) == 0) {
    if ((param_11 & 7) == 3) goto LAB_000185a4;
    if (local_48 < 0) {
      if ((0 < iVar2) && (param_8 != 0)) {
        pbVar15 = (byte *)(param_7 + -1);
        pbVar12 = (byte *)(param_7 + param_8 + -1);
        iVar5 = -param_7;
        iVar1 = 0;
        pbVar11 = pbVar15;
        do {
          do {
            pbVar15 = pbVar15 + 1;
            pbVar15[*(int *)(param_10 + 0x4a4) + iVar5] = *pbVar15 & 0x3f;
          } while (pbVar12 != pbVar15);
          iVar1 = iVar1 + 1;
          pbVar15 = pbVar11 + local_48;
          iVar5 = iVar5 + (param_8 - local_48);
          pbVar12 = pbVar12 + local_48;
          pbVar11 = pbVar15;
        } while (iVar2 != iVar1);
      }
      goto LAB_000185a4;
    }
    if ((int)uVar4 <= iVar2 * local_48) {
      uVar4 = iVar2 * local_48;
    }
    iVar2 = (int)uVar4 >> 2;
  }
  else {
    if ((int)uVar4 <= iVar2 * param_8) {
      uVar4 = iVar2 * param_8;
    }
    iVar2 = (int)uVar4 >> 2;
    if (iVar2 < 1) {
      uVar10 = 0;
    }
    else {
      iVar5 = 0;
      do {
        *(uint *)(*(int *)(param_10 + 0x4a0) + iVar5) = *(uint *)(param_7 + iVar5) >> 1 & 0x7f7f7f7f
        ;
        iVar5 = iVar5 + 4;
      } while (iVar2 * 4 != iVar5);
      uVar10 = uVar4 & 0xfffffffc;
    }
    if ((int)uVar10 < (int)uVar4) {
      pcVar6 = (char *)(param_7 + (uVar10 - 1));
      do {
        pcVar7 = pcVar6 + 1;
        pcVar6[*(int *)(param_10 + 0x4a0) + (1 - param_7)] = *pcVar7 >> 1;
        pcVar6 = pcVar7;
      } while ((char *)(param_7 + -1 + uVar4) != pcVar7);
    }
    param_7 = *(int *)(param_10 + 0x4a0);
    local_48 = param_8;
    if ((param_11 & 7) == 3) goto LAB_000185a4;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 * 4;
    iVar5 = 0;
    do {
      *(uint *)(*(int *)(param_10 + 0x4a4) + iVar5) = *(uint *)(param_7 + iVar5) & 0x3f3f3f3f;
      iVar5 = iVar5 + 4;
    } while (iVar2 != iVar5);
  }
  if (iVar2 < (int)uVar4) {
    pbVar11 = (byte *)(param_7 + iVar2 + -1);
    do {
      pbVar12 = pbVar11 + 1;
      pbVar11[*(int *)(param_10 + 0x4a4) + (1 - param_7)] = *pbVar12 & 0x3f;
      pbVar11 = pbVar12;
    } while ((byte *)(uVar4 + param_7 + -1) != pbVar12);
  }
LAB_000185a4:
  puVar19 = (uint *)(param_10 + 0x508);
  av_log(param_10,0x30,DAT_000189d0 + 0x185cc,*param_9,param_9[1]);
  uVar4 = param_9[1];
  uVar10 = param_9[2];
  uVar13 = param_9[3];
  uVar16 = *param_1;
  uVar17 = *param_2;
  uVar18 = *param_3;
  iVar2 = *param_4;
  *puVar19 = *param_9;
  *(uint *)(param_10 + 0x50c) = uVar4;
  *(uint *)(param_10 + 0x510) = uVar10;
  *(uint *)(param_10 + 0x514) = uVar13;
  uVar4 = param_9[5];
  uVar10 = param_9[6];
  uVar13 = param_9[7];
  *(uint *)(param_10 + 0x518) = param_9[4];
  *(uint *)(param_10 + 0x51c) = uVar4;
  *(uint *)(param_10 + 0x520) = uVar10;
  *(uint *)(param_10 + 0x524) = uVar13;
  uVar4 = param_9[9];
  uVar10 = param_9[10];
  uVar13 = param_9[0xb];
  *(uint *)(param_10 + 0x528) = param_9[8];
  *(uint *)(param_10 + 0x52c) = uVar4;
  *(uint *)(param_10 + 0x530) = uVar10;
  *(uint *)(param_10 + 0x534) = uVar13;
  *(uint *)(param_10 + 0x538) = param_9[0xc];
  FUN_00012210(uVar16,uVar17,uVar18,iVar2,param_5,param_6,param_7,local_48,0,param_10);
  pvVar20 = (void *)param_1[1];
  if ((((pvVar20 != (void *)0x0) && (param_1[2] != 0)) &&
      (pvVar21 = (void *)param_3[1], pvVar21 != (void *)0x0)) && (param_3[2] != 0)) {
    sVar9 = param_5 >> (*(uint *)(param_10 + 0x500) & 0xff);
    uVar10 = param_2[1];
    param_6 = param_6 >> (*(uint *)(param_10 + 0x504) & 0xff);
    uVar4 = param_4[1];
    if (param_9[1] != 0) {
      uVar13 = param_9[1];
      uVar17 = param_9[2];
      uVar14 = param_9[3];
      *puVar19 = *param_9;
      *(uint *)(param_10 + 0x50c) = uVar13;
      *(uint *)(param_10 + 0x510) = uVar17;
      *(uint *)(param_10 + 0x514) = uVar14;
      uVar13 = param_9[5];
      uVar17 = param_9[6];
      uVar14 = param_9[7];
      *(uint *)(param_10 + 0x518) = param_9[4];
      *(uint *)(param_10 + 0x51c) = uVar13;
      *(uint *)(param_10 + 0x520) = uVar17;
      *(uint *)(param_10 + 0x524) = uVar14;
      uVar13 = param_9[9];
      uVar17 = param_9[10];
      uVar14 = param_9[0xb];
      *(uint *)(param_10 + 0x528) = param_9[8];
      *(uint *)(param_10 + 0x52c) = uVar13;
      *(uint *)(param_10 + 0x530) = uVar17;
      *(uint *)(param_10 + 0x534) = uVar14;
      *(uint *)(param_10 + 0x538) = param_9[0xc];
      FUN_00012210(pvVar20,uVar10,pvVar21,uVar4,sVar9,param_6,param_7,local_48,1,param_10);
      uVar4 = param_9[1];
      uVar10 = param_9[2];
      uVar13 = param_9[3];
      uVar17 = param_2[2];
      uVar16 = param_1[2];
      uVar18 = param_3[2];
      iVar2 = param_4[2];
      *puVar19 = *param_9;
      *(uint *)(param_10 + 0x50c) = uVar4;
      *(uint *)(param_10 + 0x510) = uVar10;
      *(uint *)(param_10 + 0x514) = uVar13;
      uVar4 = param_9[5];
      uVar10 = param_9[6];
      uVar13 = param_9[7];
      *(uint *)(param_10 + 0x518) = param_9[4];
      *(uint *)(param_10 + 0x51c) = uVar4;
      *(uint *)(param_10 + 0x520) = uVar10;
      *(uint *)(param_10 + 0x524) = uVar13;
      uVar4 = param_9[9];
      uVar10 = param_9[10];
      uVar13 = param_9[0xb];
      *(uint *)(param_10 + 0x528) = param_9[8];
      *(uint *)(param_10 + 0x52c) = uVar4;
      *(uint *)(param_10 + 0x530) = uVar10;
      *(uint *)(param_10 + 0x534) = uVar13;
      *(uint *)(param_10 + 0x538) = param_9[0xc];
      FUN_00012210(uVar16,uVar17,uVar18,iVar2);
      return;
    }
    if ((uVar10 == uVar4) && (param_2[2] == param_4[2])) {
      iVar2 = param_6;
      if ((int)uVar10 < 1) {
        iVar2 = uVar10 * (param_6 + -1);
        pvVar20 = (void *)((int)pvVar20 + iVar2);
        pvVar21 = (void *)((int)pvVar21 + iVar2);
        iVar2 = -param_6;
      }
      memcpy(pvVar21,pvVar20,uVar10 * iVar2);
      sVar8 = param_2[2];
      pvVar20 = (void *)param_3[2];
      sVar9 = sVar8;
      if (0 < (int)sVar8) {
        sVar9 = param_6 * sVar8;
      }
      pvVar21 = (void *)param_1[2];
      if ((int)sVar8 < 1) {
        iVar2 = sVar9 * (param_6 + -1);
        sVar9 = sVar9 * -param_6;
        pvVar21 = (void *)((int)pvVar21 + iVar2);
        pvVar20 = (void *)((int)pvVar20 + iVar2);
      }
      memcpy(pvVar20,pvVar21,sVar9);
      return;
    }
    if (0 < param_6) {
      iVar2 = 0;
      while( true ) {
        memcpy((void *)(uVar4 * iVar2 + (int)pvVar21),(void *)(uVar10 * iVar2 + (int)pvVar20),sVar9)
        ;
        iVar5 = param_4[2] * iVar2;
        iVar1 = param_2[2] * iVar2;
        iVar2 = iVar2 + 1;
        memcpy((void *)(iVar5 + param_3[2]),(void *)(iVar1 + param_1[2]),sVar9);
        if (param_6 == iVar2) break;
        pvVar21 = (void *)param_3[1];
        uVar4 = param_4[1];
        pvVar20 = (void *)param_1[1];
        uVar10 = param_2[1];
      }
    }
  }
  return;
}



/* ===== postproc_version @ 000189d4 size=12 ===== */

undefined4 postproc_version(void)

{
  return 0x380664;
}



/* ===== postproc_configuration @ 000189e0 size=12 ===== */

int postproc_configuration(void)

{
  return (int)&DAT_000189ec + DAT_000189ec;
}



/* ===== postproc_license @ 000189f0 size=16 ===== */

int postproc_license(void)

{
  return DAT_00018a00 + 0x18a11;
}



/* ===== _DT_FINI @ 00018a04 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::av_malloc @ 0002b000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_malloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002b004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002b008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002b00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0002b010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_rescale @ 0002b014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_rescale(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0002b018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002b01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002b020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002b024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_free @ 0002b028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strtok @ 0002b02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strtok(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002b030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_cpu_flags @ 0002b034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_cpu_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strlcpy @ 0002b038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strlcpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_mallocz @ 0002b03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_mallocz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002b040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002b044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0002b048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log @ 0002b04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


