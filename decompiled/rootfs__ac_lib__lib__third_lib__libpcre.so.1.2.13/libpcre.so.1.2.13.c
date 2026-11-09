// libpcre.so.1.2.13 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010c84 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== pcre_compile2 @ 00010cb4 size=12 ===== */

void pcre_compile2(void)

{
  (*(code *)PTR_pcre_compile2_00059f44)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00010cc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00059f48)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010ccc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00059f4c)(__dest);
  return pvVar1;
}



/* ===== pcre_fullinfo @ 00010cd8 size=12 ===== */

void pcre_fullinfo(void)

{
  (*(code *)PTR_pcre_fullinfo_00059f50)();
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010ce4 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00059f54)();
  return;
}



/* ===== <EXTERNAL>::tolower @ 00010cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tolower_00059f58)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00010cfc size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00059f5c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010d14 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00059f64)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00010d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00059f68)(__s1);
  return iVar1;
}



/* ===== pcre_get_stringtable_entries @ 00010d2c size=12 ===== */

void pcre_get_stringtable_entries(void)

{
  (*(code *)PTR_pcre_get_stringtable_entries_00059f6c)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 00010d38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00059f70)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010d44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00059f74)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00059f78)(__s1);
  return iVar1;
}



/* ===== pcre_get_stringnumber @ 00010d5c size=12 ===== */

void pcre_get_stringnumber(void)

{
  (*(code *)PTR_pcre_get_stringnumber_00059f7c)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010d68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00059f80)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::toupper @ 00010d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int toupper(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_toupper_00059f84)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010d80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00059f88)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010d8c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00059f8c)();
  return;
}



/* ===== entry @ 00010d98 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00010de4 + 0x10db0 == DAT_00010de0 + 0x10da8) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010de8 + 0x10db8 + DAT_00010dec);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00010e54 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010ec8 + 0x10e70;
  if (*(char *)(DAT_00010ec4 + 0x10e64) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010ecc) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010ed0 + 0x10e90));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00010ed4) != 0) {
    __deregister_frame_info(DAT_00010ed8 + 0x10eb0);
  }
  *(undefined1 *)(DAT_00010edc + 0x10ec0) = 1;
  return;
}



/* ===== _INIT_0 @ 00010ee0 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010f18 + 0x10ef0 + DAT_00010f1c) != 0) {
    __register_frame_info(DAT_00010f24 + 0x10f10,DAT_00010f20 + 0x10f0c);
  }
  if (((DAT_00010e48 + 0x10e08) - (DAT_00010e44 + 0x10e00) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010e4c + 0x10e10 + DAT_00010e50);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00010f28 @ 00010f28 size=8 ===== */

uint FUN_00010f28(uint param_1)

{
  return param_1 << 0x18 | (param_1 >> 8 & 0xff) << 0x10 | (param_1 >> 0x10 & 0xff) << 8 |
         param_1 >> 0x18;
}



/* ===== pcre_pattern_to_host_byte_order @ 00010f30 size=376 ===== */

undefined4 pcre_pattern_to_host_byte_order(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 extraout_r2;
  int *extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  undefined4 *extraout_r3_04;
  int extraout_r3_05;
  int extraout_r3_06;
  undefined8 uVar5;
  
  iVar1 = DAT_000110a8;
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (*param_1 == DAT_000110a8) {
    if ((param_1[3] & 1U) == 0) {
      return 0xffffffe4;
    }
    param_1[0xc] = param_3;
  }
  else {
    if (*param_1 != DAT_000110ac) {
      return 0xfffffffc;
    }
    uVar2 = FUN_00010f28(param_1[3]);
    if ((uVar2 & 1) == 0) {
      return 0xffffffe4;
    }
    *extraout_r3 = iVar1;
    uVar3 = FUN_00010f28(extraout_r3[1]);
    *(undefined4 *)(extraout_r3_00 + 4) = uVar3;
    uVar3 = FUN_00010f28(*(undefined4 *)(extraout_r3_00 + 8));
    *(undefined4 *)(extraout_r3_01 + 8) = uVar3;
    *(uint *)(extraout_r3_01 + 0xc) = uVar2;
    uVar3 = FUN_00010f28(*(undefined4 *)(extraout_r3_01 + 0x10));
    *(undefined4 *)(extraout_r3_02 + 0x10) = uVar3;
    uVar5 = FUN_00010f28(*(undefined4 *)(extraout_r3_02 + 0x14));
    puVar4 = (uint *)((ulonglong)uVar5 >> 0x20);
    *(int *)(extraout_r3_03 + 0x14) = (int)uVar5;
    *(ushort *)(extraout_r3_03 + 0x18) =
         *(ushort *)(extraout_r3_03 + 0x18) << 8 | *(ushort *)(extraout_r3_03 + 0x18) >> 8;
    *(ushort *)(extraout_r3_03 + 0x1a) =
         *(ushort *)(extraout_r3_03 + 0x1a) << 8 | *(ushort *)(extraout_r3_03 + 0x1a) >> 8;
    *(ushort *)(extraout_r3_03 + 0x1c) =
         *(ushort *)(extraout_r3_03 + 0x1c) << 8 | *(ushort *)(extraout_r3_03 + 0x1c) >> 8;
    *(ushort *)(extraout_r3_03 + 0x1e) =
         *(ushort *)(extraout_r3_03 + 0x1e) << 8 | *(ushort *)(extraout_r3_03 + 0x1e) >> 8;
    *(ushort *)(extraout_r3_03 + 0x20) =
         *(ushort *)(extraout_r3_03 + 0x20) << 8 | *(ushort *)(extraout_r3_03 + 0x20) >> 8;
    *(ushort *)(extraout_r3_03 + 0x22) =
         *(ushort *)(extraout_r3_03 + 0x22) << 8 | *(ushort *)(extraout_r3_03 + 0x22) >> 8;
    *(ushort *)(extraout_r3_03 + 0x24) =
         *(ushort *)(extraout_r3_03 + 0x24) << 8 | *(ushort *)(extraout_r3_03 + 0x24) >> 8;
    *(ushort *)(extraout_r3_03 + 0x26) =
         *(ushort *)(extraout_r3_03 + 0x26) >> 8 | *(ushort *)(extraout_r3_03 + 0x26) << 8;
    *(ushort *)(extraout_r3_03 + 0x28) =
         *(ushort *)(extraout_r3_03 + 0x28) >> 8 | *(ushort *)(extraout_r3_03 + 0x28) << 8;
    *(undefined4 *)(extraout_r3_03 + 0x30) = extraout_r2;
    if (puVar4 != (uint *)0x0) {
      if ((*puVar4 & 1) == 0) {
        return 0;
      }
      uVar3 = FUN_00010f28(*(undefined4 *)puVar4[1]);
      *extraout_r3_04 = uVar3;
      uVar3 = FUN_00010f28(extraout_r3_04[1]);
      *(undefined4 *)(extraout_r3_05 + 4) = uVar3;
      uVar3 = FUN_00010f28(*(undefined4 *)(extraout_r3_05 + 0x28));
      *(undefined4 *)(extraout_r3_06 + 0x28) = uVar3;
    }
  }
  return 0;
}



/* ===== FUN_000110b0 @ 000110b0 size=140 ===== */

void FUN_000110b0(byte *param_1,int param_2)

{
  uint uVar1;
  
  do {
    uVar1 = (uint)*param_1;
    if (uVar1 < 0x81) {
      if (uVar1 < 0x7e) {
        if (uVar1 < 4) {
          return;
        }
        if (uVar1 < 6) {
          if (param_2 == 0) {
            return;
          }
        }
        else if (uVar1 != 0x76) {
          return;
        }
      }
      else {
        if (param_2 == 0) {
          return;
        }
        do {
          param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                              (uint)(*(ushort *)(param_1 + 1) >> 8));
          uVar1 = (uint)*param_1;
        } while (uVar1 == 0x77);
      }
    }
    else if (4 < (uVar1 + 0x73 & 0xff)) {
      return;
    }
    param_1 = param_1 + *(byte *)(*(int *)(DAT_0001113c + 0x110bc + DAT_00011140) + uVar1);
  } while( true );
}



/* ===== FUN_00011144 @ 00011144 size=1440 ===== */

void FUN_00011144(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *local_34;
  byte *local_30;
  int local_2c;
  
  iVar11 = DAT_000116e4 + 0x11164;
  piVar6 = *(int **)(iVar11 + DAT_000116e8);
  local_2c = *piVar6;
  pbVar7 = (byte *)(param_1 + 3);
  iVar3 = 0;
  iVar12 = -1;
LAB_0001118c:
  iVar10 = iVar3;
  pbVar9 = pbVar7;
  uVar5 = (uint)*pbVar9;
  switch(uVar5) {
  case 0:
    goto LAB_00011474;
  case 1:
    goto LAB_0001157c;
  case 2:
    goto LAB_0001157c;
  case 3:
    goto LAB_0001157c;
  case 4:
    goto LAB_0001157c;
  case 5:
    goto LAB_0001157c;
  case 6:
    goto LAB_00011608;
  case 7:
    goto LAB_00011608;
  case 8:
    goto LAB_00011608;
  case 9:
    goto LAB_00011608;
  case 10:
    goto LAB_00011608;
  case 0xb:
    goto LAB_00011608;
  case 0xc:
    goto LAB_00011608;
  case 0xd:
    goto LAB_00011608;
  case 0xe:
    goto LAB_000116bc;
  case 0xf:
    goto LAB_00011604;
  case 0x10:
LAB_00011604:
    pbVar9 = pbVar9 + 2;
    goto LAB_00011608;
  case 0x11:
    break;
  case 0x12:
    goto LAB_00011608;
  case 0x13:
    goto LAB_00011608;
  case 0x14:
    goto LAB_00011608;
  case 0x15:
LAB_00011608:
    pbVar7 = pbVar9 + 1;
    iVar3 = iVar10 + 1;
    goto LAB_0001118c;
  case 0x16:
    break;
  case 0x17:
    goto LAB_0001157c;
  case 0x18:
    goto LAB_0001157c;
  case 0x19:
    goto LAB_0001157c;
  case 0x1a:
    goto LAB_0001157c;
  case 0x1b:
    goto LAB_0001157c;
  case 0x1c:
    goto LAB_0001157c;
  case 0x1d:
    goto LAB_0001158c;
  case 0x1e:
    goto LAB_0001158c;
  case 0x1f:
    goto LAB_0001158c;
  case 0x20:
LAB_0001158c:
    iVar3 = iVar10 + 1;
    pbVar7 = pbVar9 + 2;
    if (param_2 != 0) {
      bVar2 = pbVar9[1];
LAB_000115a0:
      if (0xbf < bVar2) {
        pbVar7 = pbVar7 + *(byte *)(*(int *)(iVar11 + DAT_000116f0) + (bVar2 & 0x3f));
      }
    }
    goto LAB_0001118c;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    break;
  case 0x26:
    break;
  case 0x27:
    break;
  case 0x28:
    break;
  case 0x29:
    goto LAB_000115c0;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
    break;
  case 0x2d:
    break;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    break;
  case 0x36:
    goto LAB_000115c0;
  case 0x37:
    break;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    break;
  case 0x3e:
    break;
  case 0x3f:
    break;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    goto LAB_000115c0;
  case 0x44:
    break;
  case 0x45:
    break;
  case 0x46:
    break;
  case 0x47:
    break;
  case 0x48:
    break;
  case 0x49:
    break;
  case 0x4a:
    break;
  case 0x4b:
    break;
  case 0x4c:
    break;
  case 0x4d:
    break;
  case 0x4e:
    break;
  case 0x4f:
    break;
  case 0x50:
LAB_000115c0:
    iVar3 = iVar10 + ((*(ushort *)(pbVar9 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar9 + 1) >> 8));
    pbVar7 = pbVar9 + 4;
    if (param_2 != 0) {
      bVar2 = pbVar9[3];
      goto LAB_000115a0;
    }
    goto LAB_0001118c;
  case 0x51:
    break;
  case 0x52:
    break;
  case 0x53:
    break;
  case 0x54:
    break;
  case 0x55:
    break;
  case 0x56:
    break;
  case 0x57:
    break;
  case 0x58:
    break;
  case 0x59:
    break;
  case 0x5a:
    break;
  case 0x5b:
    break;
  case 0x5c:
    break;
  case 0x5d:
    puVar1 = (ushort *)(pbVar9 + 1);
    if (pbVar9[3] - 0xf < 2) {
      pbVar9 = pbVar9 + 2;
    }
    pbVar7 = pbVar9 + 4;
    iVar3 = iVar10 + ((*puVar1 & 0xff) << 8 | (uint)(*puVar1 >> 8));
    goto LAB_0001118c;
  case 0x5e:
    break;
  case 0x5f:
    break;
  case 0x60:
    break;
  case 0x61:
    break;
  case 0x62:
  default:
switchD_00011194_default:
    iVar3 = -4;
    goto LAB_000116a4;
  case 99:
    goto switchD_00011194_default;
  case 100:
    goto switchD_00011194_default;
  case 0x65:
    goto switchD_00011194_default;
  case 0x66:
    goto switchD_00011194_default;
  case 0x67:
    goto switchD_00011194_default;
  case 0x68:
    goto switchD_00011194_default;
  case 0x69:
    goto switchD_00011194_default;
  case 0x6a:
    goto switchD_00011194_default;
  case 0x6b:
    goto switchD_00011194_default;
  case 0x6c:
    goto switchD_00011194_default;
  case 0x6d:
    goto switchD_00011194_default;
  case 0x6e:
    goto LAB_00011614;
  case 0x6f:
    goto LAB_00011614;
  case 0x70:
LAB_00011614:
    if (uVar5 == 0x70) {
      uVar5 = (*(ushort *)(pbVar9 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar9 + 1) >> 8);
    }
    else {
      uVar5 = (uint)*(byte *)(*(int *)(iVar11 + DAT_000116ec) + 0x6e);
    }
    pbVar7 = pbVar9 + uVar5;
    uVar5 = *pbVar7 - 0x62 & 0xff;
    if (0xb < uVar5) {
LAB_00011698:
      iVar3 = iVar10 + 1;
      goto LAB_0001118c;
    }
    uVar5 = 1 << uVar5;
    if ((uVar5 & 0x73f) == 0) {
      if ((uVar5 & 0x8c0) == 0) goto LAB_00011698;
      uVar5 = (*(ushort *)(pbVar7 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar7 + 1) >> 8);
      if (uVar5 == ((*(ushort *)(pbVar7 + 3) & 0xff) << 8 | (uint)(*(ushort *)(pbVar7 + 3) >> 8))) {
        pbVar7 = pbVar7 + 5;
        iVar3 = iVar10 + uVar5;
        goto LAB_0001118c;
      }
    }
    break;
  case 0x71:
    break;
  case 0x72:
    break;
  case 0x73:
    break;
  case 0x74:
    break;
  case 0x75:
    if (param_3 == 0) {
      iVar3 = -3;
    }
    else {
      pbVar4 = (byte *)(*(int *)(param_4 + 0x14) +
                       ((*(ushort *)(pbVar9 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar9 + 1) >> 8)
                       ));
      pbVar7 = pbVar4;
      do {
        pbVar7 = pbVar7 + ((*(ushort *)(pbVar7 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar7 + 1) >> 8));
      } while (*pbVar7 == 0x77);
      piVar8 = param_5;
      if (pbVar9 < pbVar7 && pbVar4 < pbVar9) break;
      for (; piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
        if ((byte *)piVar8[1] == pbVar4) goto LAB_000116d4;
      }
      local_34 = param_5;
      local_30 = pbVar4;
      iVar3 = FUN_00011144(pbVar4 + 2,param_2,1,param_4,&local_34);
      if (-1 < iVar3) {
        iVar10 = iVar10 + iVar3;
        goto LAB_0001146c;
      }
    }
    goto LAB_000116a4;
  case 0x76:
    goto LAB_0001157c;
  case 0x77:
    goto LAB_00011474;
  case 0x78:
    goto LAB_00011474;
  case 0x79:
    break;
  case 0x7a:
    break;
  case 0x7b:
    break;
  case 0x7c:
    goto LAB_0001157c;
  case 0x7d:
    goto LAB_00011544;
  case 0x7e:
    goto LAB_00011544;
  case 0x7f:
    goto LAB_00011544;
  case 0x80:
LAB_00011544:
    do {
      pbVar9 = pbVar9 + ((*(ushort *)(pbVar9 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(pbVar9 + 1) >> 8));
    } while (*pbVar9 == 0x77);
    goto LAB_0001146c;
  case 0x81:
    goto LAB_00011424;
  case 0x82:
    goto LAB_00011424;
  case 0x83:
    goto LAB_00011424;
  case 0x84:
    break;
  case 0x85:
    goto LAB_00011424;
  case 0x86:
    break;
  case 0x87:
LAB_00011424:
    if (uVar5 == 0x85) {
      iVar3 = 2;
    }
    else {
      iVar3 = 0;
    }
    iVar3 = FUN_00011144(pbVar9 + iVar3,param_2,param_3,param_4,param_5);
    if (iVar3 < 0) goto LAB_000116a4;
    iVar10 = iVar10 + iVar3;
    do {
      pbVar9 = pbVar9 + ((*(ushort *)(pbVar9 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(pbVar9 + 1) >> 8));
    } while (*pbVar9 == 0x77);
LAB_0001146c:
    pbVar7 = pbVar9 + 3;
    iVar3 = iVar10;
    goto LAB_0001118c;
  case 0x88:
    break;
  case 0x89:
    break;
  case 0x8a:
    break;
  case 0x8b:
    break;
  case 0x8c:
    break;
  case 0x8d:
    goto LAB_0001157c;
  case 0x8e:
    goto LAB_0001157c;
  case 0x8f:
    goto LAB_0001157c;
  case 0x90:
    goto LAB_0001157c;
  case 0x91:
    goto LAB_0001157c;
  case 0x92:
    break;
  case 0x93:
    break;
  case 0x94:
    break;
  case 0x95:
    goto LAB_00011560;
  case 0x96:
    goto LAB_0001157c;
  case 0x97:
    goto LAB_00011560;
  case 0x98:
    goto LAB_0001157c;
  case 0x99:
    goto LAB_00011560;
  case 0x9a:
    goto LAB_0001157c;
  case 0x9b:
LAB_00011560:
    uVar5 = (uint)pbVar9[1] + (uint)*(byte *)(*(int *)(iVar11 + DAT_000116ec) + uVar5);
    goto LAB_00011574;
  case 0x9c:
    goto LAB_0001157c;
  case 0x9d:
    goto LAB_0001157c;
  case 0x9e:
    goto LAB_00011474;
  case 0x9f:
LAB_00011474:
    if ((iVar12 < 0) || (iVar12 == iVar10)) {
      iVar3 = iVar10;
      if (uVar5 != 0x77) goto LAB_000116a4;
      pbVar7 = pbVar9 + 3;
      iVar3 = 0;
      iVar12 = iVar10;
      goto LAB_0001118c;
    }
    break;
  case 0xa0:
LAB_0001157c:
    uVar5 = (uint)*(byte *)(*(int *)(iVar11 + DAT_000116ec) + uVar5);
LAB_00011574:
    pbVar7 = pbVar9 + uVar5;
    iVar3 = iVar10;
    goto LAB_0001118c;
  case 0xa1:
  }
LAB_000116d4:
  iVar3 = -1;
  goto LAB_000116a4;
LAB_000116bc:
  iVar3 = -2;
LAB_000116a4:
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}



/* ===== FUN_000116f4 @ 000116f4 size=1528 ===== */

void FUN_000116f4(byte *param_1,byte *param_2,int param_3,int param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  byte *pbVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  int *local_34;
  byte *local_30;
  int local_2c;
  
  iVar13 = DAT_00011cec + 0x11714;
  piVar5 = *(int **)(iVar13 + DAT_00011cf0);
  local_2c = *piVar5;
  iVar6 = *(int *)(iVar13 + DAT_00011cf4);
  param_1 = param_1 + *(byte *)(iVar6 + (uint)*param_1);
  while( true ) {
    uVar15 = FUN_000110b0(param_1,1);
    pbVar4 = (byte *)((ulonglong)uVar15 >> 0x20);
    param_1 = (byte *)uVar15;
    if (param_2 <= param_1) break;
    uVar11 = (uint)*param_1;
    if (uVar11 == 0x7d) {
      do {
        param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(param_1 + 1) >> 8));
        uVar11 = (uint)*param_1;
      } while (uVar11 == 0x77);
      goto switchD_000119c4_default;
    }
    if (uVar11 == 0x75) {
      puVar7 = *(ushort **)(param_4 + 0x10);
      if (puVar7 != (ushort *)0x0) {
        pbVar4 = param_1 + 1;
      }
      pbVar12 = (byte *)(*(int *)(param_4 + 0x14) +
                        ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(param_1 + 1) >> 8)));
      pbVar8 = pbVar12;
      if (puVar7 != (ushort *)0x0) {
        for (; puVar7 < *(ushort **)(param_4 + 0x20); puVar7 = puVar7 + 1) {
          if (((*puVar7 & 0xff) << 8 | (uint)(*puVar7 >> 8)) ==
              (int)pbVar4 - *(int *)(param_4 + 0x14)) goto LAB_00011884;
        }
        if (*(short *)(pbVar12 + 1) == 0) break;
      }
      do {
        pbVar8 = pbVar8 + ((*(ushort *)(pbVar8 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar8 + 1) >> 8));
      } while (*pbVar8 == 0x77);
      piVar9 = param_5;
      if (pbVar8 < param_1 || param_1 < pbVar12) {
        for (; piVar9 != (int *)0x0; piVar9 = (int *)*piVar9) {
          if ((byte *)piVar9[1] == pbVar12) goto switchD_000119c4_default;
        }
        local_34 = param_5;
        local_30 = pbVar12;
        while (iVar2 = FUN_000116f4(pbVar12,param_2,param_3,param_4,&local_34), iVar2 == 0) {
          pbVar12 = pbVar12 + ((*(ushort *)(pbVar12 + 1) & 0xff) << 8 |
                              (uint)(*(ushort *)(pbVar12 + 1) >> 8));
          if (*pbVar12 != 0x77) goto LAB_00011850;
        }
      }
      goto switchD_000119c4_default;
    }
    uVar10 = uVar11 + 0x6e & 0xff;
    bVar14 = 0xa0 < uVar11;
    if (uVar11 != 0xa1) {
      bVar14 = 1 < uVar10;
    }
    if (!bVar14 || (uVar11 == 0xa1 || uVar10 == 2)) {
      param_1 = param_1 + *(byte *)(iVar6 + uVar11);
      do {
        param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(param_1 + 1) >> 8));
        uVar11 = (uint)*param_1;
      } while (uVar11 == 0x77);
      goto switchD_000119c4_default;
    }
    if ((uVar11 + 0x78 & 0xff) < 4) {
      do {
        param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(param_1 + 1) >> 8));
        uVar11 = (uint)*param_1;
      } while (uVar11 == 0x77);
      goto switchD_000119c4_default;
    }
    if (((uVar11 + 0x7f & 0xff) < 7) || (uVar11 == 0x8c)) {
      uVar10 = (*(ushort *)(param_1 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 1) >> 8);
      if (uVar10 != 0) {
        if ((uVar11 != 0x87) || (pbVar4 = param_1 + uVar10, param_1[uVar10] == 0x77)) {
          iVar2 = 0;
          do {
            if ((iVar2 == 0) &&
               (iVar2 = FUN_000116f4(param_1,param_2,param_3,param_4,param_5), iVar2 != 0)) {
              iVar2 = 1;
            }
            param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(param_1 + 1) >> 8));
          } while (*param_1 == 0x77);
          pbVar4 = param_1;
          if (iVar2 == 0) goto LAB_00011850;
        }
        param_1 = pbVar4;
        uVar11 = (uint)*param_1;
        goto switchD_000119c4_default;
      }
      break;
    }
    switch(uVar11) {
    case 6:
      goto LAB_00011850;
    case 7:
      goto LAB_00011850;
    case 8:
      goto LAB_00011850;
    case 9:
      goto LAB_00011850;
    case 10:
      goto LAB_00011850;
    case 0xb:
      goto LAB_00011850;
    case 0xc:
      goto LAB_00011850;
    case 0xd:
      goto LAB_00011850;
    case 0xe:
      goto LAB_00011850;
    case 0xf:
      goto LAB_00011850;
    case 0x10:
      goto LAB_00011850;
    case 0x11:
      goto LAB_00011850;
    case 0x12:
      goto LAB_00011850;
    case 0x13:
      goto LAB_00011850;
    case 0x14:
      goto LAB_00011850;
    case 0x15:
      goto LAB_00011850;
    case 0x16:
      goto LAB_00011850;
    case 0x17:
      break;
    case 0x18:
      break;
    case 0x19:
      break;
    case 0x1a:
      break;
    case 0x1b:
      break;
    case 0x1c:
      break;
    case 0x1d:
      goto LAB_00011850;
    case 0x1e:
      goto LAB_00011850;
    case 0x1f:
      goto LAB_00011850;
    case 0x20:
      goto LAB_00011850;
    case 0x21:
      goto LAB_00011ca0;
    case 0x22:
      goto LAB_00011ca0;
    case 0x23:
      goto LAB_00011850;
    case 0x24:
      goto LAB_00011850;
    case 0x25:
      goto LAB_00011ca0;
    case 0x26:
      goto LAB_00011ca0;
    case 0x27:
      goto LAB_00011ccc;
    case 0x28:
      goto LAB_00011ccc;
    case 0x29:
      goto LAB_00011850;
    case 0x2a:
      goto LAB_00011ca0;
    case 0x2b:
      goto LAB_00011850;
    case 0x2c:
      goto LAB_00011ca0;
    case 0x2d:
      goto LAB_00011ccc;
    case 0x2e:
      goto LAB_00011ca0;
    case 0x2f:
      goto LAB_00011ca0;
    case 0x30:
      goto LAB_00011850;
    case 0x31:
      goto LAB_00011850;
    case 0x32:
      goto LAB_00011ca0;
    case 0x33:
      goto LAB_00011ca0;
    case 0x34:
      goto LAB_00011ccc;
    case 0x35:
      goto LAB_00011ccc;
    case 0x36:
      goto LAB_00011850;
    case 0x37:
      goto LAB_00011ca0;
    case 0x38:
      goto LAB_00011850;
    case 0x39:
      goto LAB_00011ca0;
    case 0x3a:
      goto LAB_00011ccc;
    case 0x3b:
      goto LAB_00011ca0;
    case 0x3c:
      goto LAB_00011ca0;
    case 0x3d:
      goto LAB_00011850;
    case 0x3e:
      goto LAB_00011850;
    case 0x3f:
      goto LAB_00011ca0;
    case 0x40:
      goto LAB_00011ca0;
    case 0x41:
      goto LAB_00011ccc;
    case 0x42:
      goto LAB_00011ccc;
    case 0x43:
      goto LAB_00011850;
    case 0x44:
      goto LAB_00011ca0;
    case 0x45:
      goto LAB_00011850;
    case 0x46:
      goto LAB_00011ca0;
    case 0x47:
      goto LAB_00011ccc;
    case 0x48:
      goto LAB_00011ca0;
    case 0x49:
      goto LAB_00011ca0;
    case 0x4a:
      goto LAB_00011850;
    case 0x4b:
      goto LAB_00011850;
    case 0x4c:
      goto LAB_00011ca0;
    case 0x4d:
      goto LAB_00011ca0;
    case 0x4e:
      goto LAB_00011ccc;
    case 0x4f:
      goto LAB_00011ccc;
    case 0x50:
      goto LAB_00011850;
    case 0x51:
      goto LAB_00011ca0;
    case 0x52:
      goto LAB_00011850;
    case 0x53:
LAB_00011ca0:
      if (param_3 != 0) {
        bVar1 = param_1[1];
LAB_00011cac:
        if (0xbf < bVar1) {
          bVar1 = *(byte *)(*(int *)(iVar13 + DAT_00011cf8) + (bVar1 & 0x3f));
LAB_00011cc4:
          param_1 = param_1 + bVar1;
        }
      }
      break;
    case 0x54:
LAB_00011ccc:
      if (param_3 == 0) break;
      bVar1 = param_1[3];
      goto LAB_00011cac;
    case 0x55:
      goto LAB_00011c84;
    case 0x56:
      goto LAB_00011c84;
    case 0x57:
      goto LAB_00011850;
    case 0x58:
      goto LAB_00011850;
    case 0x59:
      goto LAB_00011c84;
    case 0x5a:
      goto LAB_00011c84;
    case 0x5b:
      goto LAB_00011c98;
    case 0x5c:
      goto LAB_00011c98;
    case 0x5d:
      goto LAB_00011850;
    case 0x5e:
      goto LAB_00011c84;
    case 0x5f:
      goto LAB_00011850;
    case 0x60:
LAB_00011c84:
      bVar1 = param_1[1];
LAB_00011c88:
      if (bVar1 - 0xf < 2) {
        param_1 = param_1 + 2;
      }
      break;
    case 0x61:
LAB_00011c98:
      bVar1 = param_1[3];
      goto LAB_00011c88;
    case 0x62:
      break;
    case 99:
      break;
    case 100:
      break;
    case 0x65:
      break;
    case 0x66:
      break;
    case 0x67:
      break;
    case 0x68:
      break;
    case 0x69:
      break;
    case 0x6a:
      break;
    case 0x6b:
      break;
    case 0x6c:
      break;
    case 0x6d:
      break;
    case 0x6e:
      goto LAB_00011c74;
    case 0x6f:
LAB_00011c74:
      pbVar4 = param_1 + *(byte *)(iVar6 + 0x6e);
LAB_00011c34:
      uVar10 = *pbVar4 - 0x62 & 0xff;
      if ((uVar10 < 0xc) &&
         ((uVar10 = 1 << uVar10, (uVar10 & 0x533) != 0 ||
          (((uVar10 & 0x8c0) != 0 && (*(short *)(pbVar4 + 1) == 0)))))) break;
LAB_00011850:
      uVar3 = 0;
      goto LAB_00011888;
    case 0x70:
      pbVar4 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                         (uint)(*(ushort *)(param_1 + 1) >> 8));
      param_1 = pbVar4;
      goto LAB_00011c34;
    case 0x71:
      break;
    case 0x72:
      break;
    case 0x73:
      break;
    case 0x74:
      break;
    case 0x75:
      break;
    case 0x76:
      break;
    case 0x77:
      goto LAB_00011884;
    case 0x78:
      goto LAB_00011884;
    case 0x79:
      goto LAB_00011884;
    case 0x7a:
      goto LAB_00011884;
    case 0x7b:
      goto LAB_00011884;
    case 0x7c:
      break;
    case 0x7d:
      break;
    case 0x7e:
      break;
    case 0x7f:
      break;
    case 0x80:
      break;
    case 0x81:
      break;
    case 0x82:
      break;
    case 0x83:
      break;
    case 0x84:
      break;
    case 0x85:
      break;
    case 0x86:
      break;
    case 0x87:
      break;
    case 0x88:
      break;
    case 0x89:
      break;
    case 0x8a:
      break;
    case 0x8b:
      break;
    case 0x8c:
      break;
    case 0x8d:
      break;
    case 0x8e:
      break;
    case 0x8f:
      break;
    case 0x90:
      break;
    case 0x91:
      break;
    case 0x92:
      break;
    case 0x93:
      break;
    case 0x94:
      break;
    case 0x95:
      goto LAB_00011cdc;
    case 0x96:
      break;
    case 0x97:
      goto LAB_00011cdc;
    case 0x98:
      break;
    case 0x99:
      goto LAB_00011cdc;
    case 0x9a:
      break;
    case 0x9b:
LAB_00011cdc:
      bVar1 = param_1[1];
      goto LAB_00011cc4;
    }
switchD_000119c4_default:
    param_1 = param_1 + *(byte *)(iVar6 + uVar11);
  }
LAB_00011884:
  uVar3 = 1;
LAB_00011888:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_00011cfc @ 00011cfc size=124 ===== */

undefined4 FUN_00011cfc(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar2 = (char *)(param_1 + 2);
  do {
    cVar1 = *pcVar2;
    if (cVar1 == '\0') {
      return 0;
    }
    if (cVar1 == '\\') {
      if (1 < (byte)pcVar2[1] - 0x5c) goto LAB_00011d2c;
      pcVar2 = pcVar2 + 1;
    }
    else {
      if (cVar1 == '[') {
        bVar3 = pcVar2[1] == *(char *)(param_1 + 1);
      }
      else {
        bVar3 = cVar1 == ']';
      }
      if (bVar3) {
        return 0;
      }
LAB_00011d2c:
      if ((cVar1 == *(char *)(param_1 + 1)) && (pcVar2[1] == ']')) {
        *param_2 = pcVar2;
        return 1;
      }
    }
    pcVar2 = pcVar2 + 1;
  } while( true );
}



/* ===== FUN_00011d78 @ 00011d78 size=408 ===== */

void FUN_00011d78(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  bool bVar7;
  
  iVar2 = DAT_00011f10 + 0x11d90;
  pbVar3 = param_1;
LAB_00011d8c:
  do {
    while( true ) {
      uVar4 = (uint)*pbVar3;
      if (uVar4 == 0) {
        for (puVar6 = (ushort *)(*(int *)(param_4 + 0x10) + param_5);
            puVar6 < *(ushort **)(param_4 + 0x20); puVar6 = puVar6 + 1) {
          iVar2 = param_2 + ((*puVar6 & 0xff) << 8 | (uint)(*puVar6 >> 8));
          *(char *)((int)puVar6 + 1) = (char)iVar2;
          *(char *)puVar6 = (char)((uint)iVar2 >> 8);
        }
        return;
      }
      if (uVar4 != 0x75) break;
      for (puVar6 = (ushort *)(*(int *)(param_4 + 0x10) + param_5);
          puVar6 < *(ushort **)(param_4 + 0x20); puVar6 = puVar6 + 1) {
        if ((byte *)(*(int *)(param_4 + 0x14) + ((*puVar6 & 0xff) << 8 | (uint)(*puVar6 >> 8))) ==
            pbVar3 + 1) goto LAB_00011dfc;
      }
      uVar4 = (*(ushort *)(pbVar3 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar3 + 1) >> 8);
      if (param_1 <= (byte *)(*(int *)(param_4 + 0x14) + uVar4)) {
        iVar5 = uVar4 + param_2;
        pbVar3[2] = (byte)iVar5;
        pbVar3[1] = (byte)((uint)iVar5 >> 8);
      }
LAB_00011dfc:
      pbVar3 = pbVar3 + 3;
    }
    if (uVar4 == 0x70) {
      pbVar3 = pbVar3 + ((*(ushort *)(pbVar3 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(pbVar3 + 1) >> 8));
      goto LAB_00011d8c;
    }
    if (uVar4 < 0x61) {
      if (uVar4 < 0x5e) {
        if (uVar4 < 0x55) goto LAB_00011e54;
        if (uVar4 < 0x5b) goto LAB_00011e24;
LAB_00011eac:
        bVar1 = pbVar3[3];
      }
      else {
LAB_00011e24:
        bVar1 = pbVar3[1];
      }
      if (bVar1 - 0xf < 2) {
        pbVar3 = pbVar3 + 2;
      }
    }
    else {
      if (uVar4 != 0x97) {
        if (uVar4 < 0x98) {
          if (uVar4 == 0x61) goto LAB_00011eac;
          bVar7 = uVar4 == 0x95;
        }
        else {
          if (uVar4 == 0x99) goto LAB_00011eb4;
          bVar7 = uVar4 == 0x9b;
        }
        if (!bVar7) goto LAB_00011e54;
      }
LAB_00011eb4:
      pbVar3 = pbVar3 + pbVar3[1];
    }
LAB_00011e54:
    pbVar3 = pbVar3 + *(byte *)(*(int *)(iVar2 + DAT_00011f14) + uVar4);
    if (((param_3 != 0) && (uVar4 - 0x1d < 0x38)) && (0xbf < pbVar3[-1])) {
      pbVar3 = pbVar3 + *(byte *)(*(int *)(iVar2 + DAT_00011f18) + (pbVar3[-1] & 0x3f));
    }
  } while( true );
}



/* ===== FUN_00011f1c @ 00011f1c size=384 ===== */

int FUN_00011f1c(byte *param_1,uint param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  iVar7 = *(int *)(DAT_0001209c + 0x11f3c + DAT_000120a0);
  do {
    pbVar1 = (byte *)FUN_000110b0(param_1 + *(byte *)(iVar7 + (uint)*param_1),0);
    uVar4 = (uint)*pbVar1;
    uVar5 = uVar4 + 0x78 & 0xff;
    bVar10 = uVar5 != 0;
    bVar8 = uVar5 == 1;
    if (1 < uVar5) {
      bVar10 = uVar4 != 0x83;
      bVar8 = uVar4 == 0x84;
    }
    uVar5 = param_2;
    uVar6 = param_4;
    if (!bVar10 || bVar8) {
LAB_00011fcc:
      iVar2 = FUN_00011f1c(pbVar1,uVar5,param_3,uVar6);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      uVar3 = uVar4 + 0x76 & 0xff;
      if (1 < uVar3) {
        uVar3 = uVar4 - 0x85;
      }
      if (uVar3 < 2) {
        uVar4 = 1;
        uVar5 = (uint)(*(ushort *)(pbVar1 + 3) >> 8);
        if (((*(ushort *)(pbVar1 + 3) & 0xff) << 8 | uVar5) < 0x20) {
          uVar4 = 1 << uVar5;
        }
        uVar5 = uVar4 | param_2;
        goto LAB_00011fcc;
      }
      if (uVar4 == 0x7d) goto LAB_00011fcc;
      if (uVar4 == 0x87) {
        if (pbVar1[(*(ushort *)(pbVar1 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar1 + 1) >> 8)] !=
            0x77) {
          return 0;
        }
        goto LAB_00011fcc;
      }
      uVar6 = param_4 + 1;
      if (uVar4 - 0x81 < 2) goto LAB_00011fcc;
      iVar2 = uVar4 - 0x55;
      bVar8 = 0x5d < uVar4;
      bVar10 = uVar4 == 0x5e;
      if (!bVar10) {
        bVar8 = iVar2 != 0;
      }
      bVar9 = iVar2 != 1;
      if (!bVar8 || (bVar10 || !bVar9)) {
        iVar2 = 1;
      }
      if (bVar8 && (!bVar10 && bVar9)) {
        iVar2 = 0;
      }
      if (bVar8 && (!bVar10 && bVar9)) {
        bVar8 = 0x1a < uVar4;
        if (uVar4 != 0x1b) {
          bVar8 = uVar4 != 1;
        }
        if (bVar8 && (uVar4 != 0x1b && uVar4 != 2)) {
          return iVar2;
        }
      }
      else {
        if (pbVar1[1] != 0xd) {
          return 0;
        }
        uVar4 = param_4;
        if ((int)param_4 < 1) {
          uVar4 = *(uint *)(param_3 + 0x50) & param_2;
        }
        if (uVar4 != 0) {
          return 0;
        }
        if (*(int *)(param_3 + 0x70) != 0) {
          return 0;
        }
      }
    }
    param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(param_1 + 1) >> 8));
    if (*param_1 != 0x77) {
      return 1;
    }
  } while( true );
}



/* ===== FUN_000120a4 @ 000120a4 size=496 ===== */

int FUN_000120a4(byte *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  
  uVar1 = DAT_0001229c;
  iVar8 = *(int *)(DAT_00012294 + 0x120c4 + DAT_00012298);
  uVar12 = param_2;
  iVar13 = param_3;
  do {
    pbVar2 = (byte *)FUN_000110b0(param_1 + *(byte *)(iVar8 + (uint)*param_1),0);
    uVar4 = (uint)*pbVar2;
    if (uVar4 == 0x87) {
      pbVar7 = pbVar2 + 3;
      if (pbVar2[3] == 0x76) {
        pbVar7 = pbVar7 + *(byte *)(iVar8 + 0x76);
      }
      uVar4 = *pbVar7 + 0x73 & 0xff;
      if ((uVar4 < 0x11) && ((uVar1 & 1 << uVar4) != 0)) {
        return 0;
      }
      iVar3 = FUN_000120a4(pbVar7,param_2,param_3,param_4,1,uVar12,iVar13);
      if (iVar3 == 0) {
        return 0;
      }
      do {
        pbVar7 = pbVar7 + ((*(ushort *)(pbVar7 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar7 + 1) >> 8));
      } while (*pbVar7 == 0x77);
      pbVar2 = (byte *)FUN_000110b0(pbVar7 + 3,0);
      uVar4 = (uint)*pbVar2;
    }
    bVar11 = uVar4 != 0x88;
    bVar9 = uVar4 - 0x88 == 1;
    if (1 < uVar4 - 0x88) {
      bVar11 = uVar4 != 0x83;
      bVar9 = uVar4 == 0x84;
    }
    uVar5 = param_2;
    uVar6 = param_4;
    iVar3 = param_5;
    if (!bVar11 || bVar9) {
LAB_000121c4:
      iVar3 = FUN_000120a4(pbVar2,uVar5,param_3,uVar6,iVar3,uVar12,iVar13);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      bVar11 = uVar4 != 0x8a;
      bVar9 = uVar4 - 0x8a == 1;
      if (1 < uVar4 - 0x8a) {
        bVar11 = uVar4 != 0x85;
        bVar9 = uVar4 == 0x86;
      }
      if (!bVar11 || bVar9) {
        uVar4 = 1;
        uVar5 = (uint)(*(ushort *)(pbVar2 + 3) >> 8);
        if (((*(ushort *)(pbVar2 + 3) & 0xff) << 8 | uVar5) < 0x20) {
          uVar4 = 1 << uVar5;
        }
        uVar5 = uVar4 | param_2;
        goto LAB_000121c4;
      }
      if (uVar4 == 0x7d) {
        iVar3 = 1;
        goto LAB_000121c4;
      }
      if (uVar4 - 0x81 < 2) {
        uVar6 = param_4 + 1;
        goto LAB_000121c4;
      }
      iVar3 = uVar4 - 0x55;
      bVar9 = 0x5d < uVar4;
      bVar11 = uVar4 == 0x5e;
      if (!bVar11) {
        bVar9 = iVar3 != 0;
      }
      bVar10 = iVar3 != 1;
      if (!bVar9 || (bVar11 || !bVar10)) {
        iVar3 = 1;
      }
      if (bVar9 && (!bVar11 && bVar10)) {
        iVar3 = 0;
      }
      if (!bVar9 || (bVar11 || !bVar10)) {
        if (pbVar2[1] != 0xc) {
          return 0;
        }
        uVar4 = param_4;
        if ((int)param_4 < 1) {
          uVar4 = *(uint *)(param_3 + 0x50) & param_2;
        }
        if (uVar4 != 0) {
          return 0;
        }
        if (param_5 != 0 || *(int *)(param_3 + 0x70) != 0) {
          return 0;
        }
      }
      else if (1 < uVar4 - 0x1b) {
        return iVar3;
      }
    }
    param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(param_1 + 1) >> 8));
    if (*param_1 != 0x77) {
      return 1;
    }
  } while( true );
}



/* ===== FUN_000122a0 @ 000122a0 size=440 ===== */

void FUN_000122a0(char *param_1,undefined4 *param_2,char *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  char *local_28;
  int local_24;
  
  piVar9 = *(int **)(DAT_00012458 + 0x122b4 + DAT_0001245c);
  local_24 = *piVar9;
  *param_2 = 0xffffffff;
  pcVar6 = (char *)0xffffffff;
  uVar8 = 0;
  local_28 = param_1;
  do {
    bVar5 = *param_1 + 0x7b;
    if (1 < bVar5) {
      bVar5 = *param_1 + 0x76;
    }
    if (bVar5 < 2) {
      iVar1 = 5;
    }
    else {
      iVar1 = 3;
    }
    pbVar2 = (byte *)FUN_000110b0(param_1 + iVar1,1);
    bVar5 = *pbVar2;
    if (0x31 < bVar5) {
      if (bVar5 < 0x87) {
        if (bVar5 < 0x81) {
          if (bVar5 != 0x38) {
            if (bVar5 == 0x7d) goto LAB_000123e8;
            if (bVar5 != 0x36) goto LAB_0001233c;
            pbVar2 = pbVar2 + 2;
          }
LAB_000123bc:
          if (param_3 != (char *)0x0) {
            uVar3 = (uint)pbVar2[1];
            pcVar7 = param_3;
            if (pcVar6 != (char *)0xffffffff) goto LAB_00012384;
            goto LAB_00012420;
          }
          goto LAB_0001233c;
        }
      }
      else if (1 < (byte)(bVar5 + 0x76)) goto LAB_0001233c;
LAB_000123e8:
      uVar4 = FUN_000122a0(pbVar2,&local_28,bVar5 == 0x7d);
      if ((-1 < (int)local_28) &&
         ((uVar3 = uVar4, pcVar7 = local_28, pcVar6 == (char *)0xffffffff ||
          (uVar3 = uVar8, pcVar7 = pcVar6, local_28 == pcVar6 && uVar8 == uVar4))))
      goto LAB_00012420;
LAB_0001233c:
      uVar3 = 0;
      goto LAB_00012340;
    }
    if (0x2f < bVar5) goto LAB_000123bc;
    if (bVar5 < 0x25) {
      if ((bVar5 < 0x23) && (bVar5 != 0x1d)) {
        if (bVar5 == 0x1e) goto LAB_000123bc;
        goto LAB_0001233c;
      }
    }
    else if (bVar5 == 0x29) {
      pbVar2 = pbVar2 + 2;
    }
    else if (bVar5 != 0x2b) goto LAB_0001233c;
    if (param_3 == (char *)0x0) goto LAB_0001233c;
    uVar3 = (uint)pbVar2[1];
    if (pcVar6 == (char *)0xffffffff) {
      pcVar7 = (char *)0x0;
    }
    else {
LAB_00012384:
      pcVar7 = pcVar6;
      if (uVar8 != uVar3) goto LAB_0001233c;
    }
LAB_00012420:
    param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(param_1 + 1) >> 8));
    pcVar6 = pcVar7;
    uVar8 = uVar3;
  } while (*param_1 == 'w');
  *param_2 = pcVar7;
LAB_00012340:
  if (local_24 == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00012460 @ 00012460 size=172 ===== */

undefined4 FUN_00012460(int param_1)

{
  void *__dest;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = iVar1 * 2;
  if (0x63fff < iVar2) {
    iVar2 = 0x64000;
  }
  iVar3 = DAT_0001250c + 0x12484;
  if ((iVar1 < 0x64000) && (99 < iVar2 - iVar1)) {
    __dest = (void *)(*(code *)**(undefined4 **)(iVar3 + DAT_00012510))(iVar2);
    if (__dest != (void *)0x0) {
      memcpy(__dest,*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0x3c));
      *(int *)(param_1 + 0x20) = (int)__dest + (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10))
      ;
      if (0x1000 < *(int *)(param_1 + 0x3c)) {
        (*(code *)**(undefined4 **)(iVar3 + DAT_00012514))();
      }
      *(void **)(param_1 + 0x10) = __dest;
      *(int *)(param_1 + 0x3c) = iVar2;
      return 0;
    }
    return 0x15;
  }
  return 0x48;
}



/* ===== FUN_00012518 @ 00012518 size=788 ===== */

int FUN_00012518(int param_1,undefined4 *param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint local_3c;
  
  iVar13 = DAT_0001282c + 0x12538;
  local_3c = param_6;
  if (0xfe < param_6) {
    local_3c = 0xff;
  }
  uVar7 = param_3 & 0x800;
  iVar11 = 0;
  if ((param_3 & 1) != 0) {
    if (uVar7 != 0) {
      iVar11 = 0;
      uVar8 = param_5;
      uVar6 = param_5;
LAB_00012574:
      param_5 = uVar6;
      if (uVar8 <= param_6) {
        uVar12 = uVar8 + 1;
        uVar6 = uVar8 + 0x7f;
        if (-1 < (int)uVar8) {
          uVar6 = uVar8;
        }
        uVar4 = uVar8 & 0x7f;
        if (-1 < (int)-uVar8) {
          uVar4 = -(-uVar8 & 0x7f);
        }
        iVar2 = *(int *)(iVar13 + DAT_00012838) +
                (uint)*(ushort *)
                       (*(int *)(iVar13 + DAT_00012830) +
                       ((short)(ushort)*(byte *)(*(int *)(iVar13 + DAT_00012834) + ((int)uVar6 >> 7)
                                                ) * 0x80 + uVar4) * 2) * 8;
        uVar4 = (uint)*(byte *)(iVar2 + 3);
        uVar6 = param_5;
        if (uVar4 == 0) goto LAB_000126e0;
        iVar2 = FUN_00012840(param_1,param_2,param_3 & 0xfffffffe,param_4,
                             *(int *)(iVar13 + DAT_0001283c) + uVar4 * 4,uVar8);
        uVar8 = uVar12;
        goto LAB_00012640;
      }
      goto LAB_0001257c;
    }
    for (iVar11 = 0; iVar11 + param_5 <= local_3c; iVar11 = iVar11 + 1) {
      bVar1 = *(byte *)(*(int *)(param_4 + 4) + iVar11 + param_5);
      uVar8 = (uint)(bVar1 >> 3);
      *(byte *)(param_1 + uVar8) = *(byte *)(param_1 + uVar8) | (byte)(1 << (bVar1 & 7));
    }
  }
LAB_0001257c:
  iVar11 = iVar11 - param_5;
  uVar8 = param_5;
  if (uVar7 == 0 && 0xff < param_6) {
    param_6 = 0xff;
  }
  for (; uVar8 <= local_3c; uVar8 = uVar8 + 1) {
    *(byte *)(param_1 + (uVar8 >> 3)) = *(byte *)(param_1 + (uVar8 >> 3)) | (byte)(1 << (uVar8 & 7))
    ;
  }
  if (param_5 < 0x100) {
    param_5 = 0x100;
  }
  if (param_5 <= param_6) {
    puVar9 = (undefined1 *)*param_2;
    if (uVar7 != 0) {
      if (param_5 < param_6) {
        puVar10 = puVar9 + 1;
        *puVar9 = 2;
        iVar13 = FUN_00032ac4(param_5,puVar10);
        iVar2 = FUN_00032ac4(param_6,puVar10 + iVar13);
        puVar9 = puVar10 + iVar13 + iVar2;
      }
      else if (param_5 == param_6) {
        *puVar9 = 1;
        iVar13 = FUN_00032ac4(param_6,puVar9 + 1);
        puVar9 = puVar9 + 1 + iVar13;
      }
    }
    *param_2 = puVar9;
  }
  return iVar11 + uVar8;
LAB_000126e0:
  uVar4 = uVar8 + *(int *)(iVar2 + 4);
  bVar14 = uVar8 == uVar4;
  uVar8 = uVar12;
  uVar12 = uVar4;
  if (bVar14) goto LAB_00012574;
  for (; uVar8 <= param_6; uVar8 = uVar8 + 1) {
    uVar5 = uVar8 + 0x7f;
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
    }
    uVar3 = uVar8 & 0x7f;
    if (-1 < (int)-uVar8) {
      uVar3 = -(-uVar8 & 0x7f);
    }
    iVar2 = *(int *)(iVar13 + DAT_00012838) +
            (uint)*(ushort *)
                   (*(int *)(iVar13 + DAT_00012830) +
                   ((short)(ushort)*(byte *)(*(int *)(iVar13 + DAT_00012834) + ((int)uVar5 >> 7)) *
                    0x80 + uVar3) * 2) * 8;
    if ((*(char *)(iVar2 + 3) != '\0') || (uVar12 + 1 != uVar8 + *(int *)(iVar2 + 4))) break;
    uVar12 = uVar12 + 1;
  }
  if (uVar4 < param_5) {
    uVar6 = uVar4;
    if (param_5 - 1 <= uVar12) goto LAB_00012574;
    if (uVar12 <= param_6) goto LAB_00012628;
  }
  else if (uVar12 <= param_6) goto LAB_00012574;
  if (uVar4 <= param_6 + 1) {
    param_6 = uVar12;
    uVar6 = param_5;
    if ((local_3c < uVar12) && (local_3c = uVar12, 0xfe < uVar12)) {
      local_3c = 0xff;
    }
    goto LAB_00012574;
  }
LAB_00012628:
  iVar2 = FUN_00012518(param_1,param_2,param_3 & 0xfffffffe,param_4,uVar4,uVar12);
LAB_00012640:
  iVar11 = iVar11 + iVar2;
  uVar6 = param_5;
  goto LAB_00012574;
}



/* ===== FUN_00012840 @ 00012840 size=148 ===== */

int FUN_00012840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int *param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  uVar6 = param_3;
  for (; iVar3 = *param_5, iVar3 != -1; param_5 = param_5 + iVar4 + 1) {
    if (iVar3 == param_6) {
      iVar4 = 0;
    }
    else {
      piVar2 = param_5;
      iVar1 = 0;
      do {
        iVar4 = iVar1;
        piVar2 = piVar2 + 1;
        iVar1 = iVar4 + 1;
      } while (*piVar2 == iVar4 + 1 + iVar3);
      iVar3 = FUN_00012518(param_1,param_2,param_3,param_4,iVar3,param_5[iVar4],uVar6);
      iVar5 = iVar5 + iVar3;
    }
  }
  return iVar5;
}



/* ===== FUN_000128d4 @ 000128d4 size=164 ===== */

int FUN_000128d4(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar2 = 0;
  uVar6 = param_3;
  iVar1 = DAT_00012978;
  if (*param_5 != 0) {
    iVar2 = FUN_00012518();
    iVar1 = DAT_00012978;
  }
  while (piVar5 = param_5, *param_5 != -1) {
    do {
      iVar4 = piVar5[1];
      param_5 = piVar5 + 1;
      iVar3 = *piVar5;
      piVar5 = param_5;
    } while (iVar4 == iVar3 + 1);
    if (iVar4 == -1) {
      iVar4 = -1;
      if ((param_3 & 0x800) != 0) {
        iVar4 = iVar1;
      }
    }
    else {
      iVar4 = iVar4 + -1;
    }
    iVar3 = FUN_00012518(param_1,param_2,param_3,param_4,iVar3 + 1,iVar4,uVar6);
    iVar2 = iVar2 + iVar3;
  }
  return iVar2;
}



/* ===== FUN_0001297c @ 0001297c size=132 ===== */

bool FUN_0001297c(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (*param_1 - 0x30 < 10) {
    pbVar2 = param_1 + 1;
    do {
      pbVar1 = pbVar2;
      pbVar2 = pbVar1 + 1;
      uVar3 = (uint)*pbVar1;
    } while (uVar3 - 0x30 < 10);
    if (uVar3 == 0x7d) {
      return true;
    }
    if (uVar3 == 0x2c) {
      if (pbVar1[1] == 0x7d) {
        return true;
      }
      if (pbVar1[1] - 0x30 < 10) {
        do {
          pbVar2 = pbVar2 + 1;
        } while (*pbVar2 - 0x30 < 10);
        return *pbVar2 == 0x7d;
      }
    }
  }
  return false;
}



/* ===== FUN_00012a00 @ 00012a00 size=2016 ===== */

uint FUN_00012a00(int *param_1,uint *param_2,undefined4 *param_3,uint param_4,uint param_5,
                 int param_6)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  
  iVar5 = *param_1;
  uVar13 = (param_5 & 0xfff) >> 0xb;
  uVar14 = param_5 & 0x800;
  bVar1 = *(byte *)(iVar5 + 1);
  uVar8 = (uint)bVar1;
  uVar3 = uVar13;
  if (uVar8 < 0xc0) {
    uVar3 = 0;
  }
  if (uVar3 == 0) {
    pbVar6 = (byte *)(iVar5 + 2);
  }
  else {
    uVar3 = (uint)*(byte *)(iVar5 + 2);
    if ((bVar1 & 0x20) == 0) {
      pbVar6 = (byte *)(iVar5 + 3);
      uVar8 = uVar3 & 0x3f | (uVar8 & 0x1f) << 6;
    }
    else {
      uVar4 = (uint)*(byte *)(iVar5 + 3);
      if ((bVar1 & 0x10) == 0) {
        pbVar6 = (byte *)(iVar5 + 4);
        uVar8 = (uVar3 & 0x3f) << 6 | (uVar8 & 0xf) << 0xc | uVar4 & 0x3f;
      }
      else {
        uVar10 = (uint)*(byte *)(iVar5 + 4);
        if ((bVar1 & 8) == 0) {
          pbVar6 = (byte *)(iVar5 + 5);
          uVar8 = (uVar4 & 0x3f) << 6 | (uVar8 & 7) << 0x12 | uVar10 & 0x3f | (uVar3 & 0x3f) << 0xc;
        }
        else if ((bVar1 & 4) == 0) {
          pbVar6 = (byte *)(iVar5 + 6);
          uVar8 = (uVar10 & 0x3f) << 6 |
                  (uVar8 & 3) << 0x18 | *(byte *)(iVar5 + 5) & 0x3f | (uVar3 & 0x3f) << 0x12 |
                  (uVar4 & 0x3f) << 0xc;
        }
        else {
          pbVar6 = (byte *)(iVar5 + 7);
          uVar8 = (*(byte *)(iVar5 + 5) & 0x3f) << 6 |
                  (uVar8 & 1) << 0x1e | *(byte *)(iVar5 + 6) & 0x3f | (uVar3 & 0x3f) << 0x18 |
                  (uVar4 & 0x3f) << 0x12 | (uVar10 & 0x3f) << 0xc;
        }
      }
    }
  }
  pbVar11 = pbVar6 + -1;
  if (uVar8 == 0) {
    uVar7 = 1;
    goto LAB_00012ecc;
  }
  uVar4 = uVar8 - 0x30;
  uVar3 = uVar8;
  if (uVar4 < 0x4b) {
    uVar3 = (uint)*(short *)(DAT_000131e0 + 0x12a88 + uVar4 * 2);
    if (uVar3 != 0) {
      if ((int)uVar3 < 1) goto LAB_00012a98;
      goto LAB_000130b8;
    }
    uVar10 = 0;
    if (uVar8 == 99) {
      uVar8 = (uint)*pbVar6;
      pbVar12 = pbVar6;
      if (uVar8 == 0) {
        uVar7 = 2;
      }
      else {
        if (uVar8 < 0x80) {
          if (uVar8 - 0x61 < 0x1a) {
            uVar8 = uVar8 - 0x20;
          }
          uVar8 = uVar8 ^ 0x40;
          goto LAB_00012c3c;
        }
        uVar7 = 0x44;
      }
      *param_3 = uVar7;
      goto LAB_00012c3c;
    }
    pbVar12 = pbVar11;
    if (uVar8 < 100) {
      if (uVar8 < 0x3a) {
        if (uVar8 < 0x31) {
          if (uVar8 != 0x30) goto LAB_00012be8;
        }
        else {
          if (param_6 == 0) {
            while( true ) {
              uVar3 = pbVar12[1] - 0x30;
              if (9 < (uVar3 & 0xff)) break;
              if (DAT_000131f0 < (int)uVar4) goto LAB_00012f94;
              uVar4 = uVar4 * 10 + uVar3;
              pbVar12 = pbVar12 + 1;
            }
            bVar16 = SBORROW4(uVar4,param_4);
            iVar5 = uVar4 - param_4;
            bVar15 = uVar4 == param_4;
            if ((int)param_4 < (int)uVar4) {
              bVar16 = SBORROW4(uVar4,7);
              iVar5 = uVar4 - 7;
              bVar15 = uVar4 == 7;
            }
            if (bVar15 || iVar5 < 0 != bVar16) {
              uVar10 = -uVar4;
              goto LAB_00012c3c;
            }
          }
          uVar8 = (uint)pbVar6[-1];
          pbVar12 = pbVar11;
          if (0x37 < uVar8) goto LAB_00012c3c;
        }
        uVar8 = uVar8 - 0x30;
        if ((*pbVar6 - 0x30 & 0xff) < 8) {
          uVar8 = (*pbVar6 - 0x30) + uVar8 * 8;
          pbVar11 = pbVar6;
          if ((pbVar6[1] - 0x30 & 0xff) < 8) {
            uVar8 = (pbVar6[1] - 0x30) + uVar8 * 8;
            pbVar11 = pbVar6 + 1;
          }
        }
        pbVar12 = pbVar11;
        if (uVar14 != 0 || uVar8 < 0x100) goto LAB_00012c3c;
        uVar7 = 0x33;
      }
      else {
        if (uVar8 == 0x4c) goto LAB_00012c34;
        if (uVar8 != 0x55) goto LAB_00012be8;
        uVar3 = param_5 & 0x2000000;
joined_r0x00012c10:
        pbVar12 = pbVar11;
        if (uVar3 != 0) goto LAB_00012c3c;
LAB_00012c34:
        uVar7 = 0x25;
      }
LAB_00012c38:
      *param_3 = uVar7;
      pbVar12 = pbVar11;
      goto LAB_00012c3c;
    }
    if (uVar8 == 0x6f) {
      if (*pbVar6 == 0x7b) {
        if (pbVar6[1] != 0x7d) {
          uVar4 = DAT_000131ec;
          if (uVar14 == 0) {
            uVar4 = 0xff;
          }
          pbVar6 = pbVar6 + 1;
          do {
            pbVar11 = pbVar6;
            uVar8 = 0;
            while( true ) {
              uVar3 = (uint)*pbVar11;
              pbVar6 = pbVar11 + 1;
              if (7 < uVar3 - 0x30) {
                if (uVar3 == 0x7d) goto LAB_00012da4;
                uVar7 = 0x50;
                goto LAB_00012c38;
              }
              if (uVar8 == 0 && uVar3 == 0x30) break;
              uVar3 = (uVar3 + uVar8 * 8) - 0x30;
              pbVar11 = pbVar6;
              uVar8 = uVar3;
              if (uVar4 < uVar3) goto LAB_00013028;
            }
          } while( true );
        }
        uVar7 = 0x56;
      }
      else {
        uVar7 = 0x51;
      }
      goto LAB_00012c38;
    }
    if (0x6f < uVar8) {
      if (uVar8 != 0x75) {
        if (uVar8 == 0x78) {
          uVar4 = (uint)*pbVar6;
          if ((param_5 & 0x2000000) != 0) {
            if (((*(byte *)(DAT_000131e4 + 0x12c94 + uVar4 + 0x96) & 8) != 0) &&
               (uVar3 = (uint)pbVar6[1], (*(byte *)(DAT_000131e4 + 0x12c94 + uVar3 + 0x96) & 8) != 0
               )) {
              if (uVar4 < 0x61) {
                if (uVar4 < 0x41) {
                  iVar5 = 0x30;
                }
                else {
                  iVar5 = 0x37;
                }
              }
              else {
                uVar4 = uVar4 - 0x20;
                iVar5 = 0x37;
              }
              if (0x60 < uVar3) {
                uVar3 = uVar3 - 0x20;
              }
              if (uVar3 < 0x41) {
                iVar9 = 0x30;
              }
              else {
                iVar9 = 0x37;
              }
              uVar8 = (uVar3 + (uVar4 - iVar5) * 0x10) - iVar9;
              pbVar12 = pbVar6 + 1;
            }
            goto LAB_00012c3c;
          }
          if (uVar4 == 0x7b) {
            pbVar11 = pbVar6 + 1;
            if (pbVar6[1] != 0x7d) {
              uVar8 = DAT_000131ec;
              if (uVar14 == 0) {
                uVar8 = 0xff;
              }
              uVar3 = 0;
              do {
                while( true ) {
                  uVar14 = (uint)*pbVar11;
                  pbVar6 = pbVar11 + 1;
                  bVar1 = *(byte *)(DAT_000131fc + uVar14 + 0x1317e);
                  uVar10 = bVar1 & 8;
                  if ((bVar1 & 8) == 0) {
                    if (uVar14 != 0x7d) {
                      uVar7 = 0x4f;
                      uVar8 = uVar3;
                      goto LAB_00012c38;
                    }
                    if (0x7ff < uVar3 - 0xd800) {
                      uVar13 = 0;
                    }
                    if (uVar13 == 0) goto LAB_000130b8;
                    goto LAB_00012dbc;
                  }
                  pbVar11 = pbVar6;
                  if (uVar3 != 0 || uVar14 != 0x30) break;
                  uVar3 = 0;
                }
                if (0x60 < uVar14) {
                  uVar14 = uVar14 - 0x20;
                }
                if (uVar14 < 0x41) {
                  iVar5 = 0x30;
                }
                else {
                  iVar5 = 0x37;
                }
                uVar3 = (uVar14 + uVar3 * 0x10) - iVar5;
              } while (uVar3 <= uVar8);
              do {
                pbVar11 = pbVar6;
                uVar10 = (byte)FUN_00013204[DAT_00013200 + (uint)*pbVar11 + 6] & 8;
                pbVar6 = pbVar11 + 1;
              } while (((byte)FUN_00013204[DAT_00013200 + (uint)*pbVar11 + 6] & 8) != 0);
              goto LAB_0001303c;
            }
            uVar7 = 0x56;
            goto LAB_00012ecc;
          }
          bVar1 = *(byte *)(DAT_000131f4 + uVar4 + 0x130ee);
          uVar3 = bVar1 & 8;
          if ((bVar1 & 8) != 0) {
            if (0x60 < uVar4) {
              uVar4 = uVar4 - 0x20;
            }
            if (uVar4 < 0x41) {
              iVar5 = 0x30;
            }
            else {
              iVar5 = 0x37;
            }
            uVar3 = uVar4 - iVar5;
            uVar8 = (uint)pbVar6[1];
            pbVar11 = pbVar6;
            if ((*(byte *)(DAT_000131f8 + uVar8 + 0x1310e) & 8) != 0) {
              if (0x60 < uVar8) {
                uVar8 = uVar8 - 0x20;
              }
              if (uVar8 < 0x41) {
                iVar5 = 0x30;
              }
              else {
                iVar5 = 0x37;
              }
              uVar3 = (uVar8 + uVar3 * 0x10) - iVar5;
              pbVar11 = pbVar6 + 1;
            }
          }
          goto LAB_000130b8;
        }
        goto LAB_00012be8;
      }
      if ((param_5 & 0x2000000) == 0) goto LAB_00012c34;
      if (((((*(byte *)(DAT_000131e0 + 0x12a88 + (uint)*pbVar6 + 0x96) & 8) == 0) ||
           (iVar5 = DAT_000131e8 + 0x12d28, (*(byte *)(iVar5 + (uint)pbVar6[1] + 0x96) & 8) == 0))
          || ((*(byte *)(iVar5 + (uint)pbVar6[2] + 0x96) & 8) == 0)) ||
         ((*(byte *)(iVar5 + (uint)pbVar6[3] + 0x96) & 8) == 0)) goto LAB_00012c3c;
      uVar8 = 0;
      do {
        pbVar11 = pbVar11 + 1;
        uVar3 = (uint)*pbVar11;
        if (0x60 < uVar3) {
          uVar3 = uVar3 - 0x20;
        }
        if (uVar3 < 0x41) {
          iVar5 = 0x30;
        }
        else {
          iVar5 = 0x37;
        }
        uVar8 = (uVar3 + uVar8 * 0x10) - iVar5;
      } while (pbVar6 + 3 != pbVar11);
      uVar3 = DAT_000131ec;
      if (uVar14 == 0) {
        uVar3 = 0xff;
      }
      if (uVar3 < uVar8) {
        uVar7 = 0x4c;
      }
      else {
LAB_00012da4:
        if (0x7ff < uVar8 - 0xd800) {
          uVar13 = 0;
        }
        uVar3 = uVar8;
        pbVar12 = pbVar11;
        if (uVar13 == 0) goto LAB_00012c3c;
LAB_00012dbc:
        uVar7 = 0x49;
        uVar8 = uVar3;
      }
      goto LAB_00012c38;
    }
    if (uVar8 != 0x67) {
      if (uVar8 == 0x6c) goto LAB_00012c34;
LAB_00012be8:
      if ((param_5 & 0x40) == 0) {
        uVar10 = 0;
        goto LAB_00012c3c;
      }
      uVar7 = 3;
      goto LAB_00012c38;
    }
    if (param_6 != 0) goto LAB_00012c3c;
    bVar1 = *pbVar6;
    if (bVar1 == 0x27 || bVar1 == 0x3c) {
      uVar10 = 0x1b;
      goto LAB_00012c3c;
    }
    pbVar2 = pbVar6;
    if (bVar1 == 0x7b) {
      do {
        uVar3 = (uint)pbVar2[1];
        if (uVar3 == 0 || uVar3 == 0x7d) {
          bVar15 = true;
          goto LAB_00012e1c;
        }
        bVar15 = 0x2c < uVar3;
        if (uVar3 != 0x2d) {
          bVar15 = 8 < uVar3 - 0x30;
        }
        pbVar2 = pbVar2 + 1;
      } while (!bVar15 || (uVar3 == 0x2d || uVar3 - 0x30 == 9));
      uVar10 = 0x1c;
      goto LAB_00012c3c;
    }
    bVar15 = false;
    pbVar6 = pbVar11;
LAB_00012e1c:
    pbVar12 = pbVar6 + 1;
    uVar3 = 0;
    if (*pbVar12 == 0x2d) {
      pbVar6 = pbVar6 + 1;
    }
    while( true ) {
      pbVar11 = pbVar6 + 1;
      uVar13 = pbVar6[1] - 0x30;
      if (9 < (uVar13 & 0xff)) break;
      if (DAT_000131f0 < (int)uVar3) goto LAB_00012eb0;
      uVar3 = uVar3 * 10 + uVar13;
      pbVar6 = pbVar11;
    }
    pbVar2 = pbVar6;
    if ((!bVar15) || (pbVar2 = pbVar11, pbVar6[1] == 0x7d)) {
      pbVar11 = pbVar2;
      if (uVar3 == 0) {
        uVar7 = 0x3a;
        uVar10 = 0;
        goto LAB_00012c38;
      }
      if (*pbVar12 == 0x2d) {
        if ((int)param_4 < (int)uVar3) {
          uVar7 = 0xf;
          goto LAB_00012ecc;
        }
        uVar3 = param_4 - (uVar3 - 1);
      }
LAB_00012a98:
      uVar10 = -uVar3;
      pbVar12 = pbVar11;
      if ((uVar3 != 0xfffffff4) || (pbVar11[1] != 0x7b)) goto LAB_00012c3c;
      uVar3 = FUN_0001297c(pbVar11 + 2);
      goto joined_r0x00012c10;
    }
    uVar7 = 0x39;
    goto LAB_00012ecc;
  }
  goto LAB_000130b8;
LAB_00012f94:
  do {
    pbVar11 = pbVar12 + 1;
    pbVar6 = pbVar12 + 2;
    pbVar12 = pbVar11;
  } while (*pbVar6 - 0x30 < 10);
  goto LAB_00012ec8;
LAB_00013028:
  do {
    pbVar11 = pbVar6;
    pbVar6 = pbVar11 + 1;
  } while (*pbVar11 - 0x30 < 8);
LAB_0001303c:
  uVar7 = 0x22;
  uVar8 = uVar3;
  goto LAB_00012c38;
LAB_00012eb0:
  do {
    pbVar11 = pbVar6 + 1;
    pbVar12 = pbVar6 + 2;
    pbVar6 = pbVar11;
  } while (*pbVar12 - 0x30 < 10);
LAB_00012ec8:
  uVar7 = 0x3d;
LAB_00012ecc:
  *param_3 = uVar7;
  uVar3 = uVar8;
LAB_000130b8:
  uVar10 = 0;
  uVar8 = uVar3;
  pbVar12 = pbVar11;
LAB_00012c3c:
  if (((param_5 & 0x20000000) != 0) && (uVar10 - 6 < 6)) {
    uVar10 = uVar10 + 0x17;
  }
  *param_1 = (int)pbVar12;
  *param_2 = uVar8;
  return uVar10;
}



/* ===== FUN_00013204 @ 00013204 size=72 ===== */

uint FUN_00013204(uint param_1)

{
  uint uVar1;
  
  if (0x61 < param_1) {
    return param_1;
  }
  if (0x54 < param_1) {
    return 0x55;
  }
  if (0x47 < param_1) {
    return 0x48;
  }
  if (0x3a < param_1) {
    return 0x3b;
  }
  if (param_1 < 0x2e) {
    uVar1 = 0x21;
  }
  else {
    uVar1 = 0x2e;
  }
  return uVar1;
}



/* ===== FUN_0001324c @ 0001324c size=1320 ===== */

ushort * FUN_0001324c(byte *param_1,int param_2,int param_3,uint *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint *puVar3;
  int extraout_r2;
  uint *puVar4;
  uint *extraout_r3;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  
  puVar5 = (ushort *)(param_1 + 1);
  uVar9 = (uint)*param_1;
  iVar7 = DAT_00013774 + 0x13268;
  *param_4 = uVar9;
  if (uVar9 - 0x21 < 0x41) {
    uVar14 = FUN_00013204(uVar9);
    param_2 = (int)((ulonglong)uVar14 >> 0x20);
    uVar11 = (uint)uVar14;
    uVar10 = uVar9 - uVar11 & 0xff;
    bVar13 = 0xb < uVar10;
    if (uVar10 != 0xc) {
      bVar13 = 1 < uVar10 - 6;
    }
    uVar9 = uVar9 - uVar11 & 0xfd;
    if (!bVar13 || (uVar10 == 0xc || uVar10 - 6 == 2)) {
      puVar5 = (ushort *)(param_1 + 3);
    }
    bVar13 = 7 < uVar9;
    bVar12 = uVar9 != 8;
    if (bVar12) {
      bVar13 = uVar10 != 2;
    }
    if (bVar13 && (bVar12 && uVar10 != 3)) {
      uVar9 = 1;
    }
    if (!bVar13 || (!bVar12 || uVar10 == 3)) {
      uVar9 = 0;
    }
    extraout_r3[1] = uVar9;
    if (uVar11 == 0x3b) {
      uVar9 = 0x1f;
LAB_00013320:
      *extraout_r3 = uVar9;
    }
    else {
      if (0x3b < uVar11) {
        if (uVar11 == 0x48) {
          uVar9 = 0x20;
        }
        else {
          if (uVar11 != 0x55) goto LAB_000132d8;
          uVar9 = (uint)(byte)*puVar5;
          puVar5 = (ushort *)((int)puVar5 + 1);
        }
        goto LAB_00013320;
      }
      if (uVar11 == 0x21) {
        uVar9 = 0x1d;
        goto LAB_00013320;
      }
      if (uVar11 == 0x2e) {
        uVar9 = 0x1e;
        goto LAB_00013320;
      }
    }
LAB_000132d8:
    uVar9 = (uint)(byte)*extraout_r3;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  else {
    param_4[1] = 0;
  }
  if (uVar9 < 0x1b) {
    if (0x10 < uVar9) {
      return puVar5;
    }
    if (5 < uVar9) {
      if (uVar9 < 0xe) {
        return puVar5;
      }
      if (0xe < uVar9) {
        if ((byte)*puVar5 == 9) {
          puVar4 = (uint *)((uint)*(byte *)((int)puVar5 + 1) * 4 + -4 +
                           *(int *)(iVar7 + DAT_00013784));
          puVar3 = param_4 + 1;
          while (puVar3 != param_4 + 7) {
            puVar4 = puVar4 + 1;
            uVar11 = *puVar4;
            puVar3 = puVar3 + 1;
            *puVar3 = uVar11;
            if (uVar11 == 0xffffffff) {
              if (uVar9 == 0x10) {
                uVar9 = 0x1d;
              }
              else {
                uVar9 = 0x1f;
              }
              *param_4 = uVar9;
              return puVar5 + 1;
            }
          }
          param_4[2] = (uint)(byte)puVar5[1];
          bVar2 = *(byte *)((int)puVar5 + 3);
        }
        else {
          param_4[2] = (uint)(byte)*puVar5;
          bVar2 = *(byte *)((int)puVar5 + 1);
        }
        param_4[3] = (uint)bVar2;
        return puVar5 + 1;
      }
    }
    return (ushort *)0x0;
  }
  if (uVar9 == 0x1f) {
LAB_0001344c:
    bVar2 = (byte)*puVar5;
    uVar9 = (uint)bVar2;
    if (param_2 == 0 || uVar9 < 0xc0) {
      puVar6 = (ushort *)((int)puVar5 + 1);
    }
    else {
      uVar11 = (uint)*(byte *)((int)puVar5 + 1);
      if ((bVar2 & 0x20) == 0) {
        puVar6 = puVar5 + 1;
        uVar9 = uVar11 & 0x3f | (uVar9 & 0x1f) << 6;
      }
      else {
        uVar10 = (uint)(byte)puVar5[1];
        if ((bVar2 & 0x10) == 0) {
          puVar6 = (ushort *)((int)puVar5 + 3);
          uVar9 = (uVar11 & 0x3f) << 6 | (uVar9 & 0xf) << 0xc | uVar10 & 0x3f;
        }
        else {
          uVar8 = (uint)*(byte *)((int)puVar5 + 3);
          if ((bVar2 & 8) == 0) {
            puVar6 = puVar5 + 2;
            uVar9 = (uVar10 & 0x3f) << 6 |
                    (uVar9 & 7) << 0x12 | uVar8 & 0x3f | (uVar11 & 0x3f) << 0xc;
          }
          else if ((bVar2 & 4) == 0) {
            puVar6 = (ushort *)((int)puVar5 + 5);
            uVar9 = (uVar8 & 0x3f) << 6 |
                    (uVar9 & 3) << 0x18 | (byte)puVar5[2] & 0x3f | (uVar11 & 0x3f) << 0x12 |
                    (uVar10 & 0x3f) << 0xc;
          }
          else {
            puVar6 = puVar5 + 3;
            uVar9 = ((byte)puVar5[2] & 0x3f) << 6 |
                    (uVar9 & 1) << 0x1e | *(byte *)((int)puVar5 + 5) & 0x3f |
                    (uVar11 & 0x3f) << 0x18 | (uVar10 & 0x3f) << 0x12 | (uVar8 & 0x3f) << 0xc;
          }
        }
      }
    }
    param_4[2] = uVar9;
    goto LAB_00013488;
  }
  if (uVar9 < 0x20) {
    if (uVar9 == 0x1d) goto LAB_0001344c;
    if (uVar9 != 0x1e) {
      return (ushort *)0x0;
    }
    uVar9 = 0x1d;
  }
  else {
    if (uVar9 != 0x20) {
      if (2 < uVar9 - 0x6e) {
        return (ushort *)0x0;
      }
      if (uVar9 == 0x70) {
        puVar6 = (ushort *)((int)puVar5 + (((*puVar5 & 0xff) << 8 | (uint)(*puVar5 >> 8)) - 1));
      }
      else {
        puVar6 = puVar5 + 0x10;
      }
      uVar9 = (byte)*puVar6 - 0x62 & 0xff;
      if (0xb < uVar9) goto LAB_0001343c;
      uVar9 = 1 << uVar9;
      if ((uVar9 & 0x533) == 0) {
        if ((uVar9 & 0x8c0) != 0) {
          pbVar1 = (byte *)((int)puVar6 + 1);
          puVar6 = (ushort *)((int)puVar6 + 5);
          param_4[1] = (uint)(*(short *)pbVar1 == 0);
          goto LAB_0001343c;
        }
        if ((uVar9 & 0x20c) == 0) goto LAB_0001343c;
      }
      else {
        param_4[1] = 1;
      }
      puVar6 = (ushort *)((int)puVar6 + 1);
LAB_0001343c:
      param_4[2] = (int)puVar6 - (int)puVar5;
      return puVar6;
    }
    uVar9 = 0x1f;
  }
  *param_4 = uVar9;
  bVar2 = (byte)*puVar5;
  uVar9 = (uint)bVar2;
  if (param_2 == 0 || uVar9 < 0xc0) {
    puVar6 = (ushort *)((int)puVar5 + 1);
  }
  else {
    uVar11 = (uint)*(byte *)((int)puVar5 + 1);
    if ((bVar2 & 0x20) == 0) {
      puVar6 = puVar5 + 1;
      uVar9 = uVar11 & 0x3f | (uVar9 & 0x1f) << 6;
    }
    else {
      uVar10 = (uint)(byte)puVar5[1];
      if ((bVar2 & 0x10) == 0) {
        puVar6 = (ushort *)((int)puVar5 + 3);
        uVar9 = (uVar11 & 0x3f) << 6 | (uVar9 & 0xf) << 0xc | uVar10 & 0x3f;
      }
      else {
        uVar8 = (uint)*(byte *)((int)puVar5 + 3);
        if ((bVar2 & 8) == 0) {
          puVar6 = puVar5 + 2;
          uVar9 = (uVar10 & 0x3f) << 6 | (uVar9 & 7) << 0x12 | uVar8 & 0x3f | (uVar11 & 0x3f) << 0xc
          ;
        }
        else if ((bVar2 & 4) == 0) {
          puVar6 = (ushort *)((int)puVar5 + 5);
          uVar9 = (uVar8 & 0x3f) << 6 |
                  (uVar9 & 3) << 0x18 | (byte)puVar5[2] & 0x3f | (uVar11 & 0x3f) << 0x12 |
                  (uVar10 & 0x3f) << 0xc;
        }
        else {
          puVar6 = puVar5 + 3;
          uVar9 = ((byte)puVar5[2] & 0x3f) << 6 |
                  (uVar9 & 1) << 0x1e | *(byte *)((int)puVar5 + 5) & 0x3f | (uVar11 & 0x3f) << 0x18
                  | (uVar10 & 0x3f) << 0x12 | (uVar8 & 0x3f) << 0xc;
        }
      }
    }
  }
  param_4[2] = uVar9;
  if (uVar9 < 0x80) {
LAB_000133b0:
    uVar11 = (uint)*(byte *)(param_3 + uVar9);
  }
  else {
    bVar13 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      bVar13 = param_2 == 0;
    }
    if (bVar13) goto LAB_000133b0;
    uVar11 = uVar9 + *(int *)(*(int *)(iVar7 + DAT_00013780) +
                              (uint)*(ushort *)
                                     (*(int *)(iVar7 + DAT_00013778) +
                                     ((uVar9 & 0x7f) +
                                     (uint)*(byte *)(*(int *)(iVar7 + DAT_0001377c) +
                                                    ((int)uVar9 >> 7)) * 0x80) * 2) * 8 + 4);
  }
  param_4[3] = uVar11;
  if (uVar9 != uVar11) {
    param_4[4] = 0xffffffff;
    return puVar6;
  }
LAB_00013488:
  param_4[3] = 0xffffffff;
  return puVar6;
}



/* ===== FUN_00013788 @ 00013788 size=376 ===== */

void FUN_00013788(int *param_1,undefined4 *param_2,uint *param_3,uint *param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char local_4c [32];
  int local_2c;
  
  iVar7 = DAT_00013900 + 0x137a4;
  piVar3 = *(int **)(iVar7 + DAT_00013904);
  local_2c = *piVar3;
  iVar4 = *param_1;
  cVar1 = *(char *)(iVar4 + 1);
  pcVar6 = (char *)(iVar4 + 1);
  if (cVar1 != '\0') {
    *param_2 = 0;
    if (cVar1 != '{') {
      local_4c[1] = 0;
      local_4c[0] = cVar1;
LAB_000138c0:
      iVar4 = DAT_00013910;
      iVar8 = 0;
      *param_1 = (int)pcVar6;
      iVar4 = **(int **)(iVar7 + iVar4);
      while (iVar9 = iVar4, iVar8 < iVar9) {
        iVar4 = iVar9 + iVar8 >> 1;
        iVar10 = *(int *)(iVar7 + DAT_00013908) + iVar4 * 6;
        iVar2 = strcmp(local_4c,(char *)(*(int *)(iVar7 + DAT_0001390c) +
                                        (uint)*(ushort *)
                                               (*(int *)(iVar7 + DAT_00013908) + iVar4 * 6)));
        if (iVar2 == 0) {
          uVar5 = 1;
          *param_3 = (uint)*(ushort *)(iVar10 + 2);
          *param_4 = (uint)*(ushort *)(iVar10 + 4);
          goto LAB_0001388c;
        }
        if (0 < iVar2) {
          iVar8 = iVar4 + 1;
          iVar4 = iVar9;
        }
      }
      uVar5 = 0x2f;
      goto LAB_000138e8;
    }
    if (*(char *)(iVar4 + 2) == '^') {
      pcVar6 = (char *)(iVar4 + 2);
      *param_2 = 1;
    }
    iVar4 = 0;
    do {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
      if (cVar1 == '\0') break;
      if (cVar1 == '}') {
        local_4c[iVar4] = '\0';
        goto LAB_000138c0;
      }
      local_4c[iVar4] = cVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x1f);
  }
  uVar5 = 0x2e;
LAB_000138e8:
  *param_5 = uVar5;
  uVar5 = 0;
  *param_1 = (int)pcVar6;
LAB_0001388c:
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}



/* ===== FUN_00013914 @ 00013914 size=3312 ===== */

void FUN_00013914(byte *param_1,int param_2,int param_3,uint *****param_4,byte *param_5,int *param_6
                 )

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint ****ppppuVar4;
  int iVar5;
  undefined4 *puVar6;
  uint ****ppppuVar7;
  uint *****pppppuVar8;
  byte bVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint *****pppppuVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint ****ppppuVar16;
  uint *****pppppuVar17;
  byte *pbVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  char cVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  uint ****local_74;
  uint ****local_4c;
  int local_48;
  uint ***local_44;
  uint ***local_40;
  int local_2c;
  
  iVar2 = DAT_0001460c;
  iVar19 = DAT_00014604 + 0x13934;
  piVar10 = *(int **)(iVar19 + DAT_00014608);
  local_2c = *piVar10;
  bVar3 = 0;
  iVar11 = DAT_00014610 + 0x13974;
  iVar12 = DAT_00014610 + 0x13c55;
LAB_00013980:
  do {
    while (uVar20 = (uint)*param_1, pbVar18 = param_1, uVar20 == 0x76) {
      uVar20 = (uint)*(byte *)(*(int *)(iVar19 + DAT_00014614) + 0x76);
LAB_00013998:
      param_1 = pbVar18 + uVar20;
    }
    while (uVar20 == 0x77) {
      pbVar18 = pbVar18 + ((*(ushort *)(pbVar18 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar18 + 1) >> 8));
      uVar20 = (uint)*pbVar18;
    }
    if (uVar20 < 0x84) {
      if (uVar20 < 0x81) {
        if (uVar20 == 0x78) {
          if (param_4[1] == (uint ****)0x0) goto switchD_00013af4_default;
          if (5 < pbVar18[-((*(ushort *)(pbVar18 + 1) & 0xff) << 8 |
                           (uint)(*(ushort *)(pbVar18 + 1) >> 8))] - 0x7d) {
            uVar20 = (uint)*(byte *)(*(int *)(iVar19 + DAT_00014614) + 0x78);
            goto LAB_00013998;
          }
          bVar3 = bVar3 ^ 1;
        }
        else {
          if ((uVar20 != 0x7b) && (uVar20 != 0)) goto LAB_00013a24;
          bVar3 = 0;
          if (param_4[1] != (uint ****)0x0) {
            bVar3 = 1;
          }
        }
        goto LAB_000139f0;
      }
LAB_00013b8c:
      param_1 = pbVar18 + *(byte *)(*(int *)(iVar19 + DAT_00014614) + uVar20);
      for (pbVar18 = pbVar18 + ((*(ushort *)(pbVar18 + 1) & 0xff) << 8 |
                               (uint)(*(ushort *)(pbVar18 + 1) >> 8)); *pbVar18 == 0x77;
          pbVar18 = pbVar18 + ((*(ushort *)(pbVar18 + 1) & 0xff) << 8 |
                              (uint)(*(ushort *)(pbVar18 + 1) >> 8))) {
        if (*param_6 == 0) goto switchD_00013af4_default;
        *param_6 = *param_6 + -1;
        iVar5 = FUN_00013914(param_1,param_2,param_3,param_4,param_5,param_6);
        if (iVar5 == 0) goto switchD_00013af4_default;
        param_1 = pbVar18 + 3;
      }
      bVar3 = 1;
      goto LAB_00013980;
    }
    if (uVar20 == 0x85) goto LAB_00013b8c;
    if ((0x84 < uVar20) && ((uVar20 + 0x6e & 0xff) < 2)) {
      bVar9 = pbVar18[1];
      pbVar21 = pbVar18 + 1;
      bVar23 = 0x84 < bVar9;
      if (bVar9 != 0x85) {
        bVar23 = 1 < (byte)(bVar9 + 0x7f);
      }
      if (!bVar23 || (bVar9 == 0x85 || (byte)(bVar9 + 0x7f) == 2)) {
        do {
          pbVar21 = pbVar21 + ((*(ushort *)(pbVar21 + 1) & 0xff) << 8 |
                              (uint)(*(ushort *)(pbVar21 + 1) >> 8));
        } while (*pbVar21 == 0x77);
        if (*param_6 != 0) {
          *param_6 = *param_6 + -1;
          iVar5 = FUN_00013914(pbVar21 + 3,param_2,param_3,param_4,param_5,param_6);
          if (iVar5 != 0) {
            uVar20 = (uint)*(byte *)(*(int *)(iVar19 + DAT_00014614) + uVar20);
            goto LAB_00013998;
          }
        }
      }
      goto switchD_00013af4_default;
    }
LAB_00013a24:
    param_1 = (byte *)FUN_0001324c(pbVar18,param_2,*(undefined4 *)(param_3 + 4),&local_4c);
    if (param_1 == (byte *)0x0) goto switchD_00013af4_default;
    pppppuVar13 = (uint *****)*param_4;
    if (pppppuVar13 == (uint *****)0x1d) {
      local_74 = (uint ****)(param_4 + 2);
      pppppuVar13 = &local_4c;
LAB_00014084:
      pppppuVar8 = (uint *****)local_4c;
      pbVar18 = param_5;
      if (pppppuVar13 == &local_4c) {
        pbVar18 = param_1;
      }
LAB_00014098:
      ppppuVar7 = (uint ****)*local_74;
      ppppuVar16 = *pppppuVar13;
      if (ppppuVar16 == (uint ****)0x13) {
        if (ppppuVar7 == (uint ****)0x180e) goto switchD_00013af4_default;
        if (ppppuVar7 < (uint ****)0x180f) {
          if (ppppuVar7 == (uint ****)0x20) goto switchD_00013af4_default;
          if (&DAT_00000021 <= ppppuVar7) {
            if (ppppuVar7 != (uint ****)0xa0) {
              bVar23 = ppppuVar7 == (uint ****)0x1680;
              goto LAB_00014248;
            }
            goto switchD_00013af4_default;
          }
          bVar23 = ppppuVar7 == (uint ****)0x9;
        }
        else {
          if (ppppuVar7 == (uint ****)0x202f) goto switchD_00013af4_default;
          if (ppppuVar7 < (uint ****)0x2030) {
            bVar25 = (uint ****)0x9 < ppppuVar7 + -0x800;
            bVar23 = ppppuVar7 + -0x800 == (uint ****)0xa;
            goto LAB_000142e4;
          }
          if (ppppuVar7 == (uint ****)0x205f) goto switchD_00013af4_default;
          bVar23 = ppppuVar7 == (uint ****)0x3000;
        }
      }
      else {
        if ((uint ****)0x13 < ppppuVar16) {
          if (ppppuVar16 != (uint ****)0x19) {
            if ((uint ****)0x19 < ppppuVar16) {
              if (ppppuVar16 == (uint ****)0x6e) {
                if (ppppuVar7 < (uint ****)0x100) {
LAB_000145d4:
                  bVar9 = pbVar18[((uint)ppppuVar7 >> 3) - (int)pppppuVar13[2]] >>
                          ((uint)ppppuVar7 & 7);
LAB_0001410c:
                  bVar23 = (bVar9 & 1) == 0;
                  goto LAB_00014264;
                }
                goto LAB_0001422c;
              }
              if ((uint ****)0x6e < ppppuVar16) {
                if (ppppuVar16 == (uint ****)0x6f) {
                  if (ppppuVar7 < (uint ****)0x100) goto LAB_000145d4;
                }
                else if (ppppuVar16 == (uint ****)0x70) {
                  iVar5 = FUN_00034784(ppppuVar7,pbVar18 + (2 - (int)pppppuVar13[2]),param_2);
                  bVar23 = iVar5 == 0;
                  goto LAB_0001419c;
                }
                goto switchD_00013af4_default;
              }
              if (ppppuVar16 != (uint ****)0x1d) {
                if (ppppuVar16 == (uint ****)0x1f) {
                  pppppuVar8 = pppppuVar13 + 2;
                  while (ppppuVar7 != *pppppuVar8) {
                    pppppuVar8 = pppppuVar8 + 1;
                    if (*pppppuVar8 == (uint ****)0xffffffff) goto switchD_00013af4_default;
                  }
                  bVar23 = ppppuVar7 == (uint ****)0xffffffff;
                  goto LAB_00014248;
                }
                goto switchD_00013af4_default;
              }
              pppppuVar8 = pppppuVar13 + 2;
              do {
                if (ppppuVar7 == *pppppuVar8) goto switchD_00013af4_default;
                pppppuVar8 = pppppuVar8 + 1;
              } while (*pppppuVar8 != (uint ****)0xffffffff);
              goto LAB_0001422c;
            }
            if (ppppuVar16 != (uint ****)0x15) {
              if (ppppuVar16 < (uint ****)0x15) {
                if (ppppuVar7 == (uint ****)0x85) goto LAB_0001422c;
                if (ppppuVar7 < (uint ****)0x86) {
                  bVar25 = (undefined1 *)0x2 < (undefined1 *)((int)ppppuVar7 + -10);
                  bVar23 = (undefined1 *)((int)ppppuVar7 + -10) == (undefined1 *)0x3;
                }
                else {
                  bVar25 = ppppuVar7 != (uint ****)0x2028;
                  bVar23 = ppppuVar7 == (uint ****)0x2029;
                }
LAB_0001432c:
                if (bVar25 && !bVar23) goto switchD_00013af4_default;
                goto LAB_0001422c;
              }
              if (ppppuVar16 != (uint ****)0x17) {
                bVar23 = ppppuVar16 == (uint ****)0x18;
                goto LAB_0001419c;
              }
            }
          }
LAB_00014370:
          if (ppppuVar7 != (uint ****)0x85) {
            if (ppppuVar7 < (uint ****)0x86) {
              bVar25 = (undefined1 *)0x2 < (undefined1 *)((int)ppppuVar7 + -10);
              bVar23 = (undefined1 *)((int)ppppuVar7 + -10) == (undefined1 *)0x3;
            }
            else {
              bVar25 = ppppuVar7 != (uint ****)0x2028;
              bVar23 = ppppuVar7 == (uint ****)0x2029;
            }
LAB_000142e4:
            if (bVar25 && !bVar23) goto LAB_0001422c;
          }
          goto switchD_00013af4_default;
        }
        if (ppppuVar16 == (uint ****)0xa) {
          if (ppppuVar7 < (uint ****)0x100) {
            bVar23 = (*(byte *)(*(int *)(param_3 + 0xc) + (int)ppppuVar7) & 0x10) == 0;
            goto LAB_000140e4;
          }
          goto switchD_00013af4_default;
        }
        if (ppppuVar16 < (uint ****)0xb) {
          if (ppppuVar16 == (uint ****)0x7) {
            if ((uint ****)0xff < ppppuVar7) goto LAB_0001422c;
            bVar23 = (*(byte *)(*(int *)(param_3 + 0xc) + (int)ppppuVar7) & 4) == 0;
LAB_00014264:
            if (bVar23) goto LAB_0001422c;
            goto switchD_00013af4_default;
          }
          if (ppppuVar16 < (uint ****)0x8) {
            if ((ppppuVar16 != (uint ****)0x6) || ((uint ****)0xff < ppppuVar7))
            goto switchD_00013af4_default;
            bVar23 = (*(byte *)(*(int *)(param_3 + 0xc) + (int)ppppuVar7) & 4) == 0;
          }
          else {
            if (ppppuVar16 != (uint ****)0x8) {
              if (ppppuVar16 == (uint ****)0x9) {
                if ((uint ****)0xff < ppppuVar7) goto LAB_0001422c;
                bVar9 = *(byte *)(*(int *)(param_3 + 0xc) + (int)ppppuVar7);
                goto LAB_0001410c;
              }
              goto switchD_00013af4_default;
            }
            if ((uint ****)0xff < ppppuVar7) goto switchD_00013af4_default;
            bVar23 = (*(byte *)(*(int *)(param_3 + 0xc) + (int)ppppuVar7) & 1) == 0;
          }
LAB_000140e4:
          if (bVar23) goto switchD_00013af4_default;
          goto LAB_0001422c;
        }
        if ((uint ****)0x10 < ppppuVar16) {
          if (ppppuVar16 == (uint ****)0x11) goto LAB_00014370;
          if (ppppuVar16 != (uint ****)0x12) goto switchD_00013af4_default;
          if (ppppuVar7 == (uint ****)0x180e) goto LAB_0001422c;
          if (ppppuVar7 < (uint ****)0x180f) {
            if (ppppuVar7 != (uint ****)0x20) {
              if (ppppuVar7 < (uint ****)0x21) {
                bVar23 = ppppuVar7 == (uint ****)0x9;
              }
              else {
                if (ppppuVar7 == (uint ****)0xa0) goto LAB_0001422c;
                bVar23 = ppppuVar7 == (uint ****)0x1680;
              }
LAB_0001419c:
              if (!bVar23) goto switchD_00013af4_default;
            }
          }
          else if (ppppuVar7 != (uint ****)0x202f) {
            if (ppppuVar7 < (uint ****)0x2030) {
              bVar25 = (uint ****)0x9 < ppppuVar7 + -0x800;
              bVar23 = ppppuVar7 + -0x800 == (uint ****)0xa;
              goto LAB_0001432c;
            }
            if (ppppuVar7 != (uint ****)0x205f) {
              bVar23 = ppppuVar7 == (uint ****)0x3000;
              goto LAB_0001419c;
            }
          }
          goto LAB_0001422c;
        }
        if (ppppuVar16 < (uint ****)0xf) {
          if (ppppuVar16 == (uint ****)0xb) {
            if (ppppuVar7 < (uint ****)0xff) {
              bVar23 = (*(byte *)(*(int *)(param_3 + 0xc) + (int)ppppuVar7) & 0x10) == 0;
              goto LAB_00014264;
            }
            goto LAB_0001422c;
          }
          goto switchD_00013af4_default;
        }
        if (ppppuVar16 == (uint ****)0xf) {
          pppppuVar8 = (uint *****)0x1;
        }
        if (ppppuVar16 != (uint ****)0xf) {
          pppppuVar8 = (uint *****)0x0;
        }
        ppppuVar4 = (uint ****)((int)ppppuVar7 + 0x7f);
        if (-1 < (int)ppppuVar7) {
          ppppuVar4 = ppppuVar7;
        }
        uVar20 = (uint)ppppuVar7 & 0x7f;
        if (-1 < -(int)ppppuVar7) {
          uVar20 = -(-(int)ppppuVar7 & 0x7fU);
        }
        uVar20 = (uint)*(ushort *)
                        (*(int *)(iVar19 + DAT_00014630) +
                        (uVar20 + (uint)*(byte *)(*(int *)(iVar19 + DAT_00014634) +
                                                 ((int)ppppuVar4 >> 7)) * 0x80) * 2);
        iVar5 = *(int *)(iVar19 + DAT_00014638) + uVar20 * 8;
        switch(pppppuVar13[2]) {
        case (uint ****)0x1:
          uVar20 = (uint)*(byte *)(iVar5 + 1);
          pppppuVar17 = (uint *****)(uVar20 - 8);
          bVar23 = 4 < uVar20;
          bVar25 = uVar20 == 5;
          if (!bVar25) {
            bVar23 = pppppuVar17 != (uint *****)0x0;
          }
          bVar24 = pppppuVar17 == (uint *****)0x1;
          if (!bVar23 || (bVar25 || bVar24)) {
            pppppuVar17 = (uint *****)0x1;
          }
          if (bVar23 && (!bVar25 && !bVar24)) {
            pppppuVar17 = (uint *****)0x0;
          }
          goto LAB_00014458;
        case (uint ****)0x2:
          ppppuVar7 = *(uint *****)
                       (*(int *)(iVar19 + DAT_0001463c) + (uint)*(byte *)(iVar5 + 1) * 4);
          break;
        case (uint ****)0x3:
          ppppuVar7 = (uint ****)(uint)*(byte *)(iVar5 + 1);
          break;
        case (uint ****)0x4:
          ppppuVar7 = (uint ****)(uint)*(byte *)(*(int *)(iVar19 + DAT_00014638) + uVar20 * 8);
          break;
        case (uint ****)0x5:
          bVar23 = (*(uint *)(*(int *)(iVar19 + DAT_0001463c) + (uint)*(byte *)(iVar5 + 1) * 4) &
                   0xfffffffd) == 1;
          goto LAB_000144c0;
        case (uint ****)0x6:
          goto LAB_000144cc;
        case (uint ****)0x7:
LAB_000144cc:
          if (ppppuVar7 != (uint ****)0x180e) {
            if ((uint ****)0x180e < ppppuVar7) {
              if (ppppuVar7 < (uint ****)0x202a) {
                if (ppppuVar7 < (uint ****)0x2028) {
                  bVar25 = (uint ****)0x9 < ppppuVar7 + -0x800;
                  bVar23 = ppppuVar7 + -0x800 == (uint ****)0xa;
                  goto LAB_000144f0;
                }
              }
              else if ((ppppuVar7 != (uint ****)0x205f) && (ppppuVar7 != (uint ****)0x3000)) {
                bVar23 = ppppuVar7 == (uint ****)0x202f;
LAB_00014520:
                if (!bVar23) goto LAB_000144f4;
              }
              goto LAB_00014488;
            }
            if (ppppuVar7 == (uint ****)0x20) goto LAB_00014488;
            if ((uint ****)0x20 < ppppuVar7) {
              if ((ppppuVar7 != (uint ****)0xa0) && (ppppuVar7 != (uint ****)0x1680)) {
                bVar23 = ppppuVar7 == (uint ****)0x85;
                goto LAB_00014520;
              }
              goto LAB_00014488;
            }
            bVar25 = (undefined1 *)0x3 < (undefined1 *)((int)ppppuVar7 + -9);
            bVar23 = (undefined1 *)((int)ppppuVar7 + -9) == (undefined1 *)0x4;
LAB_000144f0:
            if (!bVar25 || bVar23) goto LAB_00014488;
LAB_000144f4:
            bVar23 = *(int *)(*(int *)(iVar19 + DAT_0001463c) + (uint)*(byte *)(iVar5 + 1) * 4) == 6
            ;
LAB_000144c0:
            pppppuVar17 = (uint *****)(uint)bVar23;
LAB_00014458:
            bVar23 = pppppuVar17 == pppppuVar8;
            goto LAB_00014480;
          }
          goto LAB_00014488;
        case (uint ****)0x8:
          bVar23 = (uint *****)
                   (uint)(ppppuVar7 == (uint ****)0x5f ||
                         (*(uint *)(*(int *)(iVar19 + DAT_0001463c) + (uint)*(byte *)(iVar5 + 1) * 4
                                   ) & 0xfffffffd) == 1) == pppppuVar8;
          goto LAB_00014480;
        case (uint ****)0x9:
          puVar6 = (undefined4 *)
                   ((uint)*(byte *)(iVar5 + 3) * 4 + -4 + *(int *)(iVar19 + DAT_00014640));
          do {
            puVar6 = puVar6 + 1;
            if (ppppuVar7 < (uint ****)*puVar6) {
              pppppuVar8 = (uint *****)(uint)(ppppuVar16 != (uint ****)0xf);
              break;
            }
          } while (ppppuVar7 != (uint ****)*puVar6);
          goto LAB_00014488;
        default:
          goto switchD_00013af4_default;
        }
        bVar23 = (uint *****)(uint)(ppppuVar7 == pppppuVar13[3]) == pppppuVar8;
LAB_00014480:
        if (bVar23) {
          pppppuVar8 = (uint *****)0x1;
        }
        else {
          pppppuVar8 = (uint *****)0x0;
        }
LAB_00014488:
        bVar23 = pppppuVar8 == (uint *****)0x0;
      }
LAB_00014248:
      if (bVar23) goto switchD_00013af4_default;
LAB_0001422c:
      local_74 = local_74 + 1;
      pppppuVar8 = (uint *****)local_74;
      if ((uint ****)*local_74 == (uint ****)0xffffffff) goto LAB_00013db4;
      goto LAB_00014098;
    }
    if ((uint *****)local_4c == (uint *****)0x1d) {
      local_74 = &local_44;
      pppppuVar13 = param_4;
      goto LAB_00014084;
    }
    if ((uint *****)local_4c == (uint *****)0x6e || pppppuVar13 == (uint *****)0x6e) {
      if (pppppuVar13 != (uint *****)0x6e) {
        if (param_2 == 0) goto LAB_00013ca4;
        goto LAB_00013ce4;
      }
LAB_00013cac:
      pbVar18 = param_5 + -(int)param_4[2];
      pppppuVar13 = &local_4c;
LAB_00013cb8:
      ppppuVar7 = *pppppuVar13;
      if (ppppuVar7 == (uint ****)0xa) {
        bVar9 = 1;
LAB_00013df0:
        pbVar21 = (byte *)(*(int *)(param_3 + 8) + 0xa0);
LAB_00013d90:
        pbVar15 = pbVar18;
        if (bVar9 == 0) {
          do {
            pbVar14 = pbVar15 + 1;
            if ((*pbVar15 & *pbVar21) != 0) goto switchD_00013af4_default;
            pbVar15 = pbVar14;
            pbVar21 = pbVar21 + 1;
          } while (pbVar18 + 0x20 != pbVar14);
        }
        else {
          do {
            pbVar14 = pbVar15 + 1;
            if ((*pbVar15 & ~*pbVar21) != 0) goto switchD_00013af4_default;
            pbVar15 = pbVar14;
            pbVar21 = pbVar21 + 1;
          } while (pbVar18 + 0x20 != pbVar14);
        }
        goto LAB_00013db4;
      }
      if (ppppuVar7 < (uint ****)0xb) {
        if (ppppuVar7 == (uint ****)0x7) {
          bVar9 = 0;
        }
        else {
          if ((uint ****)0x7 < ppppuVar7) {
            if (ppppuVar7 == (uint ****)0x8) {
              bVar9 = 1;
            }
            else {
              if (ppppuVar7 != (uint ****)0x9) goto switchD_00013af4_default;
              bVar9 = 0;
            }
            pbVar21 = *(byte **)(param_3 + 8);
            goto LAB_00013d90;
          }
          if (ppppuVar7 != (uint ****)0x6) goto switchD_00013af4_default;
          bVar9 = 1;
        }
        pbVar21 = (byte *)(*(int *)(param_3 + 8) + 0x40);
        goto LAB_00013d90;
      }
      if (ppppuVar7 < (uint ****)0x70) {
        if ((uint ****)0x6d < ppppuVar7) {
          pbVar21 = param_1;
          if (pppppuVar13 != &local_4c) {
            pbVar21 = param_5;
          }
          pbVar21 = pbVar21 + -(int)pppppuVar13[2];
          bVar9 = 0;
          goto LAB_00013d90;
        }
        if (ppppuVar7 == (uint ****)0xb) {
          bVar9 = 0;
          goto LAB_00013df0;
        }
        goto switchD_00013af4_default;
      }
      if (ppppuVar7 != (uint ****)0x70) goto switchD_00013af4_default;
      pbVar21 = param_1;
      if (pppppuVar13 != &local_4c) {
        pbVar21 = param_5;
      }
      bVar1 = pbVar21[-(int)pppppuVar13[2] + 2];
      bVar9 = bVar1 & 4;
      if ((bVar1 & 4) != 0) goto switchD_00013af4_default;
      if ((bVar1 & 2) != 0) {
        pbVar21 = pbVar21 + -(int)pppppuVar13[2] + 3;
        goto LAB_00013d90;
      }
      if (local_48 == 0) {
        bVar3 = ~bVar1 & 1;
LAB_000139f0:
        if (local_2c == *piVar10) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar3);
      }
    }
    else {
      if ((param_2 == 0) &&
         (pppppuVar13 == (uint *****)0x6f || (uint *****)local_4c == (uint *****)0x6f)) {
LAB_00013ca4:
        if (pppppuVar13 == (uint *****)0x6f) goto LAB_00013cac;
LAB_00013ce4:
        pbVar18 = param_1 + -(int)local_44;
        pppppuVar13 = param_4;
        goto LAB_00013cb8;
      }
      if (1 < (int)pppppuVar13 - 0xfU) {
        if (((int)pppppuVar13 - 6U < 0x11) && ((int)local_4c - 6U < 0x15)) {
          cVar22 = *(char *)(((int)pppppuVar13 - 6U) * 0x15 + iVar2 + ((int)local_4c - 6U) + 0x13c55
                            );
          goto LAB_00013e2c;
        }
        goto switchD_00013af4_default;
      }
      if ((uint *****)local_4c == (uint *****)0x18) goto LAB_00013db4;
      if (1 < (int)local_4c - 0xfU) goto switchD_00013af4_default;
      uVar20 = (uint)*(byte *)((int)local_44 + (int)param_4[2] * 0xb + DAT_00014618 + 0x13c56);
      cVar22 = pppppuVar13 == (uint *****)local_4c;
      bVar23 = pppppuVar13 == (uint *****)0x10;
      switch(uVar20) {
      case 1:
        cVar22 = bVar23 && (uint *****)local_4c == (uint *****)0x10;
        break;
      case 2:
        if (param_4[3] == (uint ****)local_40) {
          cVar22 = !(bool)cVar22;
        }
        break;
      case 3:
        cVar22 = pppppuVar13 != (uint *****)local_4c;
        break;
      case 4:
        if ((uint *****)local_4c != (uint *****)0x10) goto switchD_00013af4_default;
        iVar5 = (int)param_4[3] * 0x1e + DAT_0001461c + 0x13e60 + (int)local_40;
LAB_00013e68:
        bVar23 = *(char *)(iVar5 + 0x20f) == cVar22;
        goto LAB_00013e70;
      case 5:
        if (pppppuVar13 == (uint *****)0x10) {
          iVar5 = (int)local_40 * 0x1e + DAT_00014620 + 0x13e94 + (int)param_4[3];
          goto LAB_00013e68;
        }
        goto switchD_00013af4_default;
      case 6:
        goto LAB_00013ea0;
      case 7:
        goto LAB_00013ea0;
      case 8:
LAB_00013ea0:
        iVar5 = DAT_00014624 + 0x14195 + (uVar20 - 6) * 4;
        if ((uint *****)local_4c == (uint *****)0x10) {
          if (((uint ****)local_40 ==
               (uint ****)(uint)*(byte *)(DAT_00014624 + 0x14195 + (uVar20 - 6) * 4)) ||
             ((uint ****)local_40 == (uint ****)(uint)*(byte *)(iVar5 + 1))) {
            bVar25 = false;
          }
          else if (pppppuVar13 == (uint *****)0x10 &&
                   (uint ****)(uint)*(byte *)(iVar5 + 2) == (uint ****)local_40) {
            bVar25 = false;
          }
          else {
            bVar25 = true;
          }
          bVar23 = bVar23 == bVar25;
LAB_00013e70:
          if (!bVar23) goto switchD_00013af4_default;
          goto LAB_00013db4;
        }
        goto switchD_00013af4_default;
      case 9:
        goto LAB_00013f00;
      case 10:
        goto LAB_00013f00;
      case 0xb:
LAB_00013f00:
        iVar5 = DAT_00014628 + 0x141f5 + (uVar20 - 9) * 4;
        if (pppppuVar13 == (uint *****)0x10) {
          ppppuVar7 = param_4[3];
          if ((ppppuVar7 == (uint ****)(uint)*(byte *)(DAT_00014628 + 0x141f5 + (uVar20 - 9) * 4))
             || (ppppuVar7 == (uint ****)(uint)*(byte *)(iVar5 + 1))) {
            bVar23 = false;
          }
          else {
            bVar23 = false;
            if ((uint *****)local_4c == (uint *****)0x10) {
              bVar23 = (uint ****)(uint)*(byte *)(iVar5 + 2) == ppppuVar7;
            }
LAB_00013f48:
            bVar23 = !bVar23;
          }
LAB_00013f58:
          bVar23 = ((uint *****)local_4c == (uint *****)0x10) == bVar23;
          goto LAB_00013e70;
        }
        goto switchD_00013af4_default;
      case 0xc:
        goto LAB_00013f60;
      case 0xd:
        goto LAB_00013f60;
      case 0xe:
LAB_00013f60:
        iVar5 = DAT_0001462c + 0x14255 + (uVar20 - 0xc) * 4;
        if ((uint *****)local_4c == (uint *****)0x10) {
          bVar25 = false;
          if ((*(char *)((int)local_40 +
                        (uint)*(byte *)(DAT_0001462c + 0x14255 + (uVar20 - 0xc) * 4) * 0x1e +
                        DAT_0001462c + 0x13f74 + 0x20f) != '\0') &&
             (bVar25 = false,
             *(char *)((int)local_40 +
                      (uint)*(byte *)(iVar5 + 1) * 0x1e + DAT_0001462c + 0x13f74 + 0x20f) != '\0'))
          {
            if (pppppuVar13 == (uint *****)0x10 &&
                (uint ****)(uint)*(byte *)(iVar5 + 3) == (uint ****)local_40) {
              bVar25 = false;
            }
            else {
              bVar25 = true;
            }
          }
          bVar23 = bVar23 == bVar25;
          goto LAB_00013e70;
        }
        goto switchD_00013af4_default;
      case 0xf:
        goto LAB_00013fd4;
      case 0x10:
        goto LAB_00013fd4;
      case 0x11:
LAB_00013fd4:
        iVar5 = iVar12 + (uVar20 - 0xf) * 4;
        if (pppppuVar13 == (uint *****)0x10) {
          ppppuVar7 = param_4[3];
          if ((*(char *)((int)ppppuVar7 +
                        (uint)*(byte *)(iVar12 + (uVar20 - 0xf) * 4) * 0x1e + iVar11 + 0x20f) !=
               '\0') &&
             (*(char *)((int)ppppuVar7 + (uint)*(byte *)(iVar5 + 1) * 0x1e + iVar11 + 0x20f) != '\0'
             )) {
            bVar23 = (uint *****)local_4c == (uint *****)0x10 &&
                     (uint ****)(uint)*(byte *)(iVar5 + 3) == ppppuVar7;
            goto LAB_00013f48;
          }
          bVar23 = false;
          goto LAB_00013f58;
        }
      default:
        goto switchD_00013af4_default;
      }
LAB_00013e2c:
      if (cVar22 == '\0') {
switchD_00013af4_default:
        bVar3 = 0;
        goto LAB_000139f0;
      }
LAB_00013db4:
      if (local_48 == 0) {
        bVar3 = 1;
        goto LAB_000139f0;
      }
    }
  } while( true );
}



/* ===== FUN_00014644 @ 00014644 size=376 ===== */

byte * FUN_00014644(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar3 = DAT_000147bc + 0x14650;
  while( true ) {
    uVar2 = (uint)*param_1;
    if (uVar2 == 0) {
      return (byte *)0x0;
    }
    if (uVar2 != 0x70) break;
    param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(param_1 + 1) >> 8));
  }
  do {
    if (uVar2 == 0x7c) {
      if ((int)param_3 < 0) {
        return param_1;
      }
      bVar1 = *(byte *)(*(int *)(iVar3 + DAT_000147c0) + 0x7c);
LAB_00014794:
      param_1 = param_1 + bVar1;
    }
    else {
      uVar4 = uVar2 + 0x7b & 0xff;
      if (1 < uVar4) {
        uVar4 = uVar2 + 0x76 & 0xff;
      }
      if (uVar4 < 2) {
        if (param_3 ==
            ((*(ushort *)(param_1 + 3) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 3) >> 8))) {
          return param_1;
        }
        iVar5 = *(int *)(iVar3 + DAT_000147c0);
LAB_00014748:
        bVar1 = *(byte *)(iVar5 + uVar2);
        goto LAB_00014794;
      }
      if (uVar2 < 0x61) {
        if (uVar2 < 0x5e) {
          if (uVar2 < 0x55) goto LAB_000146dc;
          if (uVar2 < 0x5b) goto LAB_000146ac;
LAB_00014750:
          bVar1 = param_1[3];
        }
        else {
LAB_000146ac:
          bVar1 = param_1[1];
        }
        if (bVar1 - 0xf < 2) {
          param_1 = param_1 + 2;
        }
      }
      else {
        if (uVar2 != 0x97) {
          if (uVar2 < 0x98) {
            if (uVar2 == 0x61) goto LAB_00014750;
            bVar6 = uVar2 == 0x95;
          }
          else {
            if (uVar2 == 0x99) goto LAB_00014758;
            bVar6 = uVar2 == 0x9b;
          }
          if (!bVar6) goto LAB_000146dc;
        }
LAB_00014758:
        param_1 = param_1 + param_1[1];
      }
LAB_000146dc:
      param_1 = param_1 + *(byte *)(*(int *)(iVar3 + DAT_000147c0) + uVar2);
      if (((param_2 != 0) && (uVar2 - 0x1d < 0x38)) && (0xbf < param_1[-1])) {
        uVar2 = param_1[-1] & 0x3f;
        iVar5 = *(int *)(iVar3 + DAT_000147c4);
        goto LAB_00014748;
      }
    }
    while( true ) {
      uVar2 = (uint)*param_1;
      if (uVar2 == 0) {
        return (byte *)0x0;
      }
      if (uVar2 != 0x70) break;
      param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(param_1 + 1) >> 8));
    }
  } while( true );
}



/* ===== FUN_000147c8 @ 000147c8 size=20096 ===== */

void FUN_000147c8(uint param_1,int *param_2,int *param_3,int *param_4,int param_5,int param_6,
                 int param_7,int param_8,uint *param_9,uint *param_10,uint *param_11,uint *param_12,
                 int param_13,int param_14,int *param_15)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  undefined4 uVar17;
  byte *pbVar18;
  short sVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  size_t sVar28;
  size_t sVar29;
  ushort uVar30;
  int iVar31;
  int *piVar32;
  byte *__src;
  int iVar33;
  int iVar34;
  int iVar35;
  uint *puVar36;
  uint uVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  byte *pbVar40;
  byte *pbVar41;
  int iVar42;
  int *piVar43;
  uint uVar44;
  uint uVar45;
  byte *pbVar46;
  ushort *puVar47;
  char *pcVar48;
  uint uVar49;
  undefined4 *puVar50;
  byte *pbVar51;
  byte *pbVar52;
  byte bVar53;
  byte *pbVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  uint local_1a4;
  uint local_19c;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  ushort *local_174;
  uint local_170;
  int local_16c;
  byte *local_15c;
  byte *local_158;
  byte *local_154;
  uint local_150;
  uint local_14c;
  byte *local_148;
  uint local_140;
  uint local_13c;
  uint local_138;
  byte *local_134;
  uint local_12c;
  int local_128;
  byte *local_124;
  uint local_118;
  uint local_114;
  uint local_10c;
  byte *local_e4;
  byte *local_e0;
  int local_b0;
  int local_ac;
  byte *local_a8;
  byte *local_a4;
  byte *local_a0;
  byte *local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  ushort local_80;
  undefined2 local_7e;
  int local_7c;
  byte *local_78;
  undefined1 auStack_74 [8];
  byte local_6c [4];
  undefined4 auStack_68 [7];
  byte local_4c [4];
  byte local_48;
  byte local_47;
  byte local_41;
  int local_2c;
  byte bVar5;
  
  iVar31 = DAT_000157e0 + 0x1481c;
  piVar32 = *(int **)(iVar31 + DAT_000157e4);
  local_2c = *piVar32;
  pbVar40 = (byte *)*param_3;
  __src = (byte *)*param_2;
  if (((code *)**(undefined4 **)(iVar31 + DAT_000157e8) == (code *)0x0) ||
     (iVar7 = (*(code *)**(undefined4 **)(iVar31 + DAT_000157e8))(), iVar7 == 0)) {
    local_7c = param_13;
    local_78 = __src;
    iVar7 = *(int *)(param_14 + 0x20);
    iVar33 = *(int *)(param_14 + 0x10);
    local_b0 = param_7 + 6;
    if (*__src == 0x85) {
      uVar30 = *(ushort *)(__src + 3) << 8 | *(ushort *)(__src + 3) >> 8;
      local_80 = uVar30;
      local_84 = *(undefined4 *)(param_14 + 0x24);
      local_7e = 0;
      *(undefined4 **)(param_14 + 0x24) = &local_84;
    }
    else {
      uVar30 = 0;
    }
    __src[1] = 0;
    __src[2] = 0;
    local_13c = 0;
    local_15c = __src + param_7 + 3;
    uVar20 = *(uint *)(param_14 + 0x40);
    local_118 = 0;
    local_124 = (byte *)0x0;
    if (param_15 == (int *)0x0) {
      piVar21 = (int *)0x0;
    }
    else {
      piVar21 = &local_b0;
    }
    if (piVar21 == (int *)0x0) {
      iVar22 = 3;
      piVar23 = (int *)0x0;
    }
    else {
      iVar22 = 5;
      piVar23 = &local_ac;
    }
    local_140 = 0xfffffffe;
    local_138 = 0xfffffffe;
    local_194 = param_1;
    local_148 = __src;
    local_114 = uVar20;
LAB_0001496c:
    if (param_6 != 0) {
      *(uint *)(param_14 + 0x40) = uVar20;
    }
    if (param_5 != 0) {
      local_124 = local_15c + 1;
      *local_15c = 0x7c;
      local_15c[1] = 0;
      local_15c[2] = 0;
      local_15c = local_15c + 3;
      local_b0 = local_b0 + 3;
    }
    iVar9 = DAT_000157ec;
    local_ac = 0;
    local_a4 = pbVar40;
    uVar24 = local_194 & 0x800;
    pbVar41 = (byte *)0x0;
    local_19c = 0;
    uVar25 = (local_194 & 0xfff) >> 0xb;
    local_10c = 0;
    local_16c = 0;
    local_e0 = (byte *)(local_194 & 0x200);
    bVar55 = local_e0 == (byte *)0x0;
    local_154 = (byte *)0x0;
    if (bVar55) {
      local_e0 = (byte *)0x0;
    }
    local_158 = (byte *)0x0;
    local_e4 = local_e0;
    if (!bVar55) {
      local_e4 = (byte *)0x1;
      local_e0 = (byte *)0x0;
    }
    local_150 = 0;
    if (bVar55) {
      local_e0 = (byte *)0x1;
    }
    local_170 = 0;
    local_128 = 0;
    local_12c = local_194 & 1;
    local_184 = 0xfffffffe;
    local_17c = 0xfffffffe;
    local_190 = 0xfffffffe;
    local_1a4 = 0xfffffffe;
    local_134 = local_15c;
    local_178 = 0;
    local_180 = 0;
    local_18c = 0;
    local_188 = 0;
    pbVar51 = local_15c;
LAB_00014a7c:
    uVar27 = local_18c;
    uVar45 = local_190;
    uVar44 = (uint)*local_a4;
    if (uVar44 == 0 && local_158 != (byte *)0x0) {
      local_a4 = local_158;
      uVar44 = (uint)*local_158;
      local_158 = (byte *)0x0;
    }
    iVar34 = *(int *)(param_14 + 0x10);
    iVar26 = *(int *)(param_14 + 0x3c);
    if (piVar21 == (int *)0x0) {
      if ((uint)(iVar34 + iVar26) < *(uint *)(param_14 + 0x20)) {
        iVar31 = 0x34;
        goto LAB_00014ae8;
      }
    }
    else {
      if ((byte *)(iVar34 + iVar26 + -100) < pbVar51) {
        if (pbVar51 < (byte *)(iVar34 + iVar26)) {
          iVar31 = 0x57;
        }
        else {
          iVar31 = 0x34;
        }
        goto LAB_00014ae8;
      }
      if (pbVar51 < local_134) {
        pbVar51 = local_134;
      }
      if (0x7fffffeb - *piVar21 < (int)pbVar51 - (int)local_134) goto LAB_00014b2c;
      *piVar21 = *piVar21 + ((int)pbVar51 - (int)local_134);
      if (pbVar41 == (byte *)0x0) {
        local_134 = local_15c;
        pbVar51 = local_15c;
      }
      else {
        local_134 = pbVar51;
        if (local_15c < pbVar41) {
          memmove(local_15c,pbVar41,(int)pbVar51 - (int)pbVar41);
          pbVar51 = pbVar51 + -((int)pbVar41 - (int)local_15c);
          pbVar41 = local_15c;
          local_134 = pbVar51;
        }
      }
    }
    pbVar40 = local_a4;
    pbVar52 = pbVar51;
    if (uVar44 == 0) {
LAB_00014bf0:
      if ((local_194 & 8) != 0) goto code_r0x00014bfc;
      goto LAB_00014c04;
    }
    if (uVar44 != 0x5c) {
      if (local_170 == 0) goto LAB_00014bf0;
LAB_000195e0:
      if (local_154 != (byte *)0x0 && piVar21 == (int *)0x0) {
        pbVar40 = local_a4 +
                  (-((*(ushort *)(local_154 + 2) & 0xff) << 8 |
                    (uint)(*(ushort *)(local_154 + 2) >> 8)) - *(int *)(param_14 + 0x18));
        local_154[5] = (byte)pbVar40;
        local_154[4] = (byte)((uint)pbVar40 >> 8);
      }
      if ((local_194 & 0x4000) == 0) {
        local_154 = (byte *)0x0;
      }
      else {
        *pbVar51 = 0x76;
        pbVar51[1] = 0xff;
        pbVar52 = pbVar51 + 6;
        pbVar51[2] = (byte)((uint)((int)local_a4 - *(int *)(param_14 + 0x18)) >> 8);
        pbVar51[3] = (char)local_a4 - (char)*(undefined4 *)(param_14 + 0x18);
        pbVar51[4] = 0;
        pbVar51[5] = 0;
        local_154 = pbVar51;
      }
      goto LAB_00019684;
    }
    if (local_a4[1] == 0x45) {
      local_170 = 0;
    }
    else {
      if (local_170 != 0) goto LAB_000195e0;
      if (local_a4[1] != 0x51) goto LAB_00014bf0;
      local_170 = 1;
    }
    local_a4 = local_a4 + 1;
    goto LAB_00015218;
  }
  pbVar40 = (byte *)0x55;
  param_3 = param_4;
  goto LAB_00014af8;
code_r0x00014bfc:
  while (pbVar54 = local_a4, (*(byte *)(*(int *)(param_14 + 0xc) + uVar44) & 1) != 0) {
    local_a4 = local_a4 + 1;
    uVar44 = (uint)pbVar54[1];
  }
  if (uVar44 == 0x23) {
    local_a4 = local_a4 + 1;
    while (*local_a4 != 0) {
      if (*(int *)(param_14 + 0x84) == 0) {
        bVar55 = false;
        if ((local_a4 <= *(byte **)(param_14 + 0x1c) + -*(int *)(param_14 + 0x88)) &&
           (*(byte *)(param_14 + 0x8c) == *local_a4)) {
          if (*(int *)(param_14 + 0x88) == 1) {
            bVar55 = true;
          }
          else {
            bVar55 = local_a4[1] == *(byte *)(param_14 + 0x8d);
          }
        }
      }
      else if (local_a4 < *(byte **)(param_14 + 0x1c)) {
        iVar26 = FUN_000326d8();
        bVar55 = false;
        if (iVar26 != 0) {
          bVar55 = true;
        }
      }
      else {
        bVar55 = false;
      }
      if (bVar55) {
        local_a4 = local_a4 + *(int *)(param_14 + 0x88);
        break;
      }
      local_a4 = local_a4 + 1;
      if (uVar24 != 0) {
        for (; (*local_a4 & 0xc0) == 0x80; local_a4 = local_a4 + 1) {
        }
      }
    }
  }
  if (pbVar40 < local_a4) goto LAB_00014a7c;
LAB_00014c04:
  if (uVar44 == 0x28) {
    if ((local_a4[1] != 0x3f) || (local_a4[2] != 0x23)) {
      uVar8 = 0;
      goto LAB_00014dac;
    }
    for (local_a4 = local_a4 + 3; bVar53 = *local_a4, bVar53 != 0 && bVar53 != 0x29;
        local_a4 = local_a4 + 1) {
    }
    if (bVar53 == 0) goto LAB_00014d6c;
    goto LAB_00015218;
  }
  uVar8 = uVar44 - 0x2a;
  bVar55 = 0x3e < uVar44;
  bVar56 = uVar44 == 0x3f;
  if (!bVar56) {
    bVar55 = uVar8 != 0;
  }
  bVar57 = uVar8 == 1;
  if (!bVar55 || (bVar56 || bVar57)) {
    uVar8 = 1;
  }
  if (bVar55 && (!bVar56 && !bVar57)) {
    uVar8 = 0;
  }
  if (!bVar55 || (bVar56 || bVar57)) {
    uVar8 = 1;
  }
  if ((bVar55 && (!bVar56 && !bVar57)) && (uVar44 == 0x7b)) {
    iVar26 = FUN_0001297c(local_a4 + 1);
    uVar8 = 0;
    if (iVar26 != 0) {
      uVar8 = 1;
    }
  }
LAB_00014dac:
  uVar49 = (uint)(local_158 == (byte *)0x0);
  if (local_154 == (byte *)0x0) {
    uVar49 = 0;
  }
  if (((uVar8 ^ 1) & uVar49) != 0) {
    bVar55 = local_128 == 1;
    local_128 = local_128 + -1;
    if (bVar55) {
      local_128 = 0;
    }
    else if (piVar21 == (int *)0x0) {
      pbVar40 = local_a4 +
                (-((*(ushort *)(local_154 + 2) & 0xff) << 8 |
                  (uint)(*(ushort *)(local_154 + 2) >> 8)) - *(int *)(param_14 + 0x18));
      local_154[5] = (byte)pbVar40;
      local_154[4] = (byte)((uint)pbVar40 >> 8);
      local_154 = (byte *)0x0;
    }
    else {
      local_154 = (byte *)0x0;
    }
  }
  pbVar40 = local_a4;
  if (((local_194 & 0x4000) != 0) && (((uVar8 ^ 1) & (uint)(local_158 == (byte *)0x0)) != 0)) {
    *pbVar51 = 0x76;
    pbVar51[1] = 0xff;
    pbVar52 = pbVar51 + 6;
    pbVar51[2] = (byte)((uint)((int)local_a4 - *(int *)(param_14 + 0x18)) >> 8);
    pbVar51[3] = (char)local_a4 - (char)*(undefined4 *)(param_14 + 0x18);
    pbVar51[4] = 0;
    pbVar51[5] = 0;
    local_154 = pbVar51;
  }
  if (uVar44 == 0x2e) {
    if (local_1a4 == 0xfffffffe) {
      local_1a4 = 0xffffffff;
    }
    local_16c = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
    if ((local_194 & 4) == 0) {
      bVar53 = 0xc;
    }
    else {
      bVar53 = 0xd;
    }
    pbVar51 = pbVar52 + 1;
    *pbVar52 = bVar53;
LAB_000151a8:
    local_184 = local_1a4;
    local_17c = local_190;
    local_178 = local_188;
    local_180 = local_18c;
    pbVar41 = pbVar52;
    goto LAB_00015218;
  }
  pbVar51 = pbVar52;
  if (0x2e < uVar44) {
    if (uVar44 == 0x5d) {
      if ((*(uint *)(param_14 + 0x60) & 0x2000000) != 0) {
        iVar31 = 0x40;
        goto LAB_00014ae8;
      }
LAB_00019684:
      local_4c[0] = (byte)uVar44;
      uVar45 = uVar25;
      if (uVar44 < 0xc0) {
        uVar45 = 0;
      }
      if (uVar45 == 0) {
LAB_0001634c:
        iVar26 = 1;
      }
      else {
        iVar26 = 1;
        while (pbVar40 = local_a4, (local_a4[1] & 0xc0) == 0x80) {
          local_a4 = local_a4 + 1;
          local_4c[iVar26] = pbVar40[1];
          iVar26 = iVar26 + 1;
        }
      }
LAB_0001623c:
      local_16c = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
      pbVar41 = pbVar52;
      if (uVar24 == 0) {
        if ((local_194 & 1) == 0) {
          bVar53 = 0x1d;
        }
        else {
          bVar53 = 0x1e;
        }
LAB_00018fd0:
        *pbVar52 = bVar53;
        pbVar40 = local_4c;
        pbVar51 = pbVar52;
        while (pbVar51 != pbVar52 + iVar26) {
          pbVar51 = pbVar51 + 1;
          *pbVar51 = *pbVar40;
          pbVar40 = pbVar40 + 1;
        }
        uVar45 = (uint)local_4c[0];
        pbVar51 = pbVar52 + iVar26 + 1;
        if (uVar45 == 10 || uVar45 == 0xd) {
          *(uint *)(param_14 + 100) = *(uint *)(param_14 + 100) | 0x800;
        }
        uVar27 = local_12c ^ 1;
        if (iVar26 == 1) {
          uVar27 = 1;
        }
        if (local_1a4 == 0xfffffffe) {
          if (uVar27 == 0) {
            local_17c = local_190;
            local_180 = local_18c;
            local_190 = 0xffffffff;
            goto LAB_00016320;
          }
          local_17c = local_190;
          local_180 = local_18c;
          if (iVar26 != 1) {
            local_190 = *(uint *)(param_14 + 0x68);
            local_18c = (uint)pbVar51[-1];
          }
          local_1a4 = local_12c;
          local_188 = uVar45;
LAB_0001538c:
          local_184 = 0xffffffff;
          pbVar41 = pbVar52;
        }
        else {
          if (uVar27 == 0) goto LAB_000151a8;
          local_184 = local_1a4;
          local_17c = local_190;
          local_178 = local_188;
          local_180 = local_18c;
          local_190 = local_12c | *(uint *)(param_14 + 0x68);
          local_18c = (uint)pbVar51[-1];
        }
      }
      else {
        if ((local_194 & 1) == 0) {
          bVar53 = 0x1d;
          goto LAB_00018fd0;
        }
        uVar45 = (uint)local_4c[0];
        if (0xbf < uVar45) {
          uVar27 = (uint)local_4c[1];
          if ((local_4c[0] & 0x20) == 0) {
            uVar45 = (uVar45 & 0x1f) << 6;
            uVar27 = uVar27 & 0x3f;
          }
          else {
            uVar44 = (uint)local_4c[2];
            if ((local_4c[0] & 0x10) != 0) {
              uVar8 = (uint)local_4c[3];
              if ((local_4c[0] & 8) == 0) {
                uVar45 = (uVar45 & 7) << 0x12 | uVar8 & 0x3f | (uVar27 & 0x3f) << 0xc;
                uVar27 = (uVar44 & 0x3f) << 6;
              }
              else {
                if ((local_4c[0] & 4) != 0) {
                  uVar45 = (local_48 & 0x3f) << 6 |
                           (uVar45 & 1) << 0x1e | local_47 & 0x3f | (uVar27 & 0x3f) << 0x18 |
                           (uVar44 & 0x3f) << 0x12 | (uVar8 & 0x3f) << 0xc;
                  goto LAB_000162b4;
                }
                uVar27 = (uVar45 & 3) << 0x18 | local_48 & 0x3f | (uVar27 & 0x3f) << 0x12 |
                         (uVar44 & 0x3f) << 0xc;
                uVar45 = (uVar8 & 0x3f) << 6;
              }
              uVar45 = uVar45 | uVar27;
              goto LAB_000162b4;
            }
            uVar45 = (uVar45 & 0xf) << 0xc | uVar44 & 0x3f;
            uVar27 = (uVar27 & 0x3f) << 6;
          }
          uVar45 = uVar27 | uVar45;
        }
LAB_000162b4:
        bVar53 = *(byte *)(*(int *)(iVar31 + DAT_00015820) +
                           (uint)*(ushort *)
                                  (*(int *)(iVar31 + DAT_00015818) +
                                  ((uVar45 & 0x7f) +
                                  (uint)*(byte *)(*(int *)(iVar31 + DAT_0001581c) +
                                                 ((int)uVar45 >> 7)) * 0x80) * 2) * 8 + 3);
        if (bVar53 == 0) {
          bVar53 = 0x1e;
          goto LAB_00018fd0;
        }
        pbVar52[2] = bVar53;
        pbVar51 = pbVar52 + 3;
        *pbVar52 = 0x10;
        pbVar52[1] = 9;
        if (local_1a4 != 0xfffffffe) goto LAB_00015218;
LAB_00016320:
        local_1a4 = 0xffffffff;
        local_184 = local_1a4;
      }
    }
    else {
      if (0x5d < uVar44) {
        if (uVar44 == 0x7b) {
          if (uVar8 != 0) {
            uVar45 = 0;
            local_a4 = local_a4 + 1;
            do {
              pbVar40 = local_a4 + 1;
              uVar27 = *local_a4 - 0x30;
              if (9 < (uVar27 & 0xff)) {
                uVar27 = uVar45;
                if (*local_a4 == 0x7d) goto LAB_000164e8;
                if (local_a4[1] == 0x7d) {
                  local_19c = 0xffffffff;
                  local_a4 = pbVar40;
                  uVar27 = local_19c;
                  goto LAB_000164e8;
                }
                uVar27 = 0;
                local_a4 = pbVar40;
                goto LAB_0001651c;
              }
              uVar45 = uVar45 * 10 + uVar27;
              local_a4 = pbVar40;
            } while ((int)uVar45 < 0x10000);
            goto LAB_000164d8;
          }
        }
        else {
          if (uVar44 == 0x7c) goto LAB_00014fbc;
          if (uVar44 == 0x5e) {
            pbVar51 = pbVar52 + 1;
            if ((local_194 & 2) != 0) {
              if (local_1a4 == 0xfffffffe) {
                local_184 = 0xffffffff;
                local_1a4 = 0xffffffff;
              }
              *pbVar52 = 0x1c;
              goto LAB_00014fb0;
            }
            *pbVar52 = 0x1b;
            pbVar41 = (byte *)0x0;
            goto LAB_00015218;
          }
        }
        goto LAB_00019684;
      }
      if (uVar44 != 0x5b) {
        if (uVar44 < 0x5c) {
          if (uVar44 == 0x3f) {
            if (pbVar41 == (byte *)0x0) goto LAB_00016504;
            uVar45 = 0;
            local_190 = local_17c;
            local_1a4 = local_184;
            local_18c = local_180;
            local_188 = local_178;
            local_19c = 1;
            goto LAB_00014f5c;
          }
          goto LAB_00019684;
        }
        local_a0 = local_a4;
        iVar26 = FUN_00012a00(&local_a4,&local_94,param_4,*(undefined4 *)(param_14 + 0x40),local_194
                              ,0);
        pbVar40 = local_a4;
        if (*param_4 != 0) goto LAB_00014af8;
        if (iVar26 != 0) {
          if (local_1a4 == 0xfffffffe && 5 < iVar26) {
            if (0x16 < iVar26) {
              local_1a4 = 0xfffffffe;
              goto LAB_00018ba0;
            }
            local_1a4 = 0xffffffff;
LAB_00018d8c:
            if (iVar26 - 0xfU < 2) {
              local_8c = 0;
              local_88 = 0;
              iVar34 = FUN_00013788(&local_a4,&local_90,&local_8c,&local_88,param_4);
              pbVar40 = local_a4;
              if (iVar34 == 0) goto LAB_00014af8;
              local_16c = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
              if ((iVar26 == 0x10) == local_90) {
                bVar53 = 0xf;
              }
              else {
                bVar53 = 0x10;
              }
              *pbVar52 = bVar53;
              pbVar52[1] = (byte)local_8c;
              pbVar52[2] = (byte)local_88;
              pbVar41 = pbVar52;
              pbVar51 = pbVar52 + 3;
            }
            else {
              bVar55 = iVar26 != 0;
              if (iVar26 != 1) {
                bVar55 = iVar26 != 4;
              }
              if ((!bVar55 || (iVar26 == 1 || iVar26 == 5)) && (*(int *)(param_14 + 0x48) == 0)) {
                *(undefined4 *)(param_14 + 0x48) = 1;
              }
              if (iVar26 - 0x1dU < 6) {
                local_158 = local_a4 + 1;
                local_a4 = (byte *)(*(int *)(DAT_00018194 + (iVar26 - 0x1dU) * 4 + 0x18ee8) + -1);
              }
              else {
                pbVar41 = pbVar52;
                if (0x10 < iVar26 - 6U) {
                  pbVar41 = (byte *)0x0;
                }
                local_16c = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
                uVar45 = uVar25;
                if (iVar26 != 0xe) {
                  uVar45 = 1;
                }
                if (uVar45 == 0) {
                  iVar26 = 0xd;
                }
                pbVar51 = pbVar52 + 1;
                *pbVar52 = (byte)iVar26;
              }
            }
            local_184 = local_1a4;
            local_17c = local_190;
            local_178 = local_188;
            local_180 = local_18c;
            goto LAB_00015218;
          }
LAB_00018ba0:
          if (iVar26 == 0x1b) {
            if (local_a4[1] == 0x3c) {
              uVar44 = 0x3e;
            }
            else {
              uVar44 = 0x27;
            }
            if (((local_a4[2] - 0x2b & 0xfd) == 0) || (local_a4[2] - 0x30 < 10)) {
              pbVar40 = local_a4 + 2;
              do {
                pbVar40 = pbVar40 + 1;
              } while (*pbVar40 - 0x30 < 10);
              if (*pbVar40 != uVar44) {
                iVar31 = 0x39;
                local_a4 = local_a4 + 1;
                goto LAB_00014ae8;
              }
              local_16c = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
              local_184 = local_1a4;
              local_a4 = local_a4 + 2;
              local_17c = local_190;
              local_178 = local_188;
              local_180 = local_18c;
              goto LAB_00018424;
            }
            local_184 = local_1a4;
            local_17c = local_190;
            local_178 = local_188;
            local_180 = local_18c;
            local_a4 = local_a4 + 1;
LAB_0001813c:
            bVar55 = true;
LAB_00017eac:
            pbVar40 = local_a4;
            pbVar41 = local_a4 + 1;
            local_a4 = pbVar41;
            if (pbVar40[1] - 0x30 < 10) {
LAB_00017920:
              iVar31 = 0x54;
              goto LAB_00014ae8;
            }
            while ((*(byte *)(*(int *)(param_14 + 0xc) + (uint)*local_a4) & 0x10) != 0) {
              local_a4 = local_a4 + 1;
            }
            sVar29 = (int)local_a4 - (int)pbVar41;
            if (piVar21 == (int *)0x0) {
              local_174 = *(ushort **)(param_14 + 0x2c);
              iVar34 = *(int *)(param_14 + 0x30);
              iVar26 = 0;
              while( true ) {
                if (iVar34 <= iVar26) goto LAB_00017ac8;
                iVar14 = strncmp((char *)pbVar41,(char *)(local_174 + 1),sVar29);
                if ((iVar14 == 0) && (*(char *)((int)local_174 + sVar29 + 2) == '\0')) break;
                iVar26 = iVar26 + 1;
                local_174 = (ushort *)((int)local_174 + *(int *)(param_14 + 0x34));
              }
              uVar45 = (*local_174 & 0xff) << 8 | (uint)(*local_174 >> 8);
            }
            else {
              if (sVar29 == 0) {
                iVar31 = 0x3e;
                goto LAB_00014ae8;
              }
              if (*local_a4 != uVar44) {
LAB_00017f70:
                iVar31 = 0x2a;
                goto LAB_00014ae8;
              }
              if (0x20 < (int)sVar29) {
LAB_00017fb8:
                iVar31 = 0x30;
                goto LAB_00014ae8;
              }
              puVar50 = *(undefined4 **)(param_14 + 0x28);
              iVar26 = 0;
              if (!bVar55) {
                uVar44 = *(uint *)(param_14 + 0x54);
              }
              uVar45 = 0;
              if (!bVar55) {
                *(uint *)(param_14 + 0x54) = uVar44 + 1;
              }
              iVar34 = *piVar21;
              *piVar21 = iVar34 + 0xe;
              if (*(int *)(param_14 + 0x7c) != 0) {
                *piVar21 = iVar34 + 0x1a;
              }
              iVar34 = *(int *)(param_14 + 0x30);
              for (; iVar26 < iVar34; iVar26 = iVar26 + 1) {
                if ((sVar29 == puVar50[1]) &&
                   (iVar14 = strncmp((char *)pbVar41,(char *)*puVar50,sVar29), iVar14 == 0)) {
                  uVar45 = puVar50[2];
                  if (bVar55) goto LAB_00018508;
                  for (piVar43 = *(int **)(param_14 + 0x24); piVar43 != (int *)0x0;
                      piVar43 = (int *)*piVar43) {
                    if (uVar45 == *(ushort *)(piVar43 + 1)) {
                      *(undefined2 *)((int)piVar43 + 6) = 1;
                      break;
                    }
                  }
                }
                puVar50 = puVar50 + 3;
              }
            }
            if (bVar55) goto LAB_00018508;
            if ((piVar21 == (int *)0x0) && (*(int *)(param_14 + 0x78) != 0)) {
              iVar34 = 1;
              iVar14 = *(int *)(param_14 + 0x34);
              iVar13 = *(int *)(param_14 + 0x30);
              puVar47 = local_174;
              while ((puVar47 = (ushort *)((int)puVar47 + iVar14), iVar34 + iVar26 < iVar13 &&
                     (iVar15 = strcmp((char *)(local_174 + 1),(char *)(puVar47 + 1)), iVar15 == 0)))
              {
                iVar34 = iVar34 + 1;
              }
              if (iVar34 != 1) {
                pbVar51 = pbVar52 + 5;
                local_16c = *(int *)(param_14 + 0x20);
                iVar14 = *(int *)(param_14 + 0x10);
                pbVar52[2] = (byte)iVar26;
                if (local_1a4 == 0xfffffffe) {
                  local_1a4 = 0xffffffff;
                }
                local_16c = local_16c - iVar14;
                pbVar52[4] = (byte)iVar34;
                if ((local_194 & 1) == 0) {
                  bVar53 = 0x73;
                }
                else {
                  bVar53 = 0x74;
                }
                *pbVar52 = bVar53;
                pbVar52[1] = (byte)((uint)iVar26 >> 8);
                pbVar52[3] = (byte)((uint)iVar34 >> 8);
                for (; pbVar41 = pbVar52, local_174 < puVar47;
                    local_174 = (ushort *)((int)local_174 + *(int *)(param_14 + 0x34))) {
                  uVar45 = (uint)(*local_174 >> 8);
                  uVar27 = (*local_174 & 0xff) << 8 | uVar45;
                  if (uVar27 < 0x20) {
                    uVar45 = 1 << uVar45;
                  }
                  else {
                    uVar45 = 1;
                  }
                  *(uint *)(param_14 + 0x50) = *(uint *)(param_14 + 0x50) | uVar45;
                  piVar43 = *(int **)(param_14 + 0x24);
                  if (*(int *)(param_14 + 0x4c) < (int)uVar27) {
                    *(uint *)(param_14 + 0x4c) = uVar27;
                  }
                  for (; piVar43 != (int *)0x0; piVar43 = (int *)*piVar43) {
                    if (uVar27 == *(ushort *)(piVar43 + 1)) {
                      *(undefined2 *)((int)piVar43 + 6) = 1;
                      break;
                    }
                  }
                }
                goto LAB_00015218;
              }
            }
          }
          else {
            if (iVar26 == 0x1c) {
              bVar53 = local_a4[1];
              if (bVar53 != 0x7b && (bVar53 != 0x3c && bVar53 != 0x27)) {
                iVar31 = 0x45;
                goto LAB_00014ae8;
              }
              bVar55 = false;
              if (local_a4[1] == 0x3c) {
                local_184 = local_1a4;
                local_17c = local_190;
                local_178 = local_188;
                local_180 = local_18c;
                uVar44 = 0x3e;
                local_a4 = local_a4 + 1;
              }
              else {
                local_184 = local_1a4;
                if (local_a4[1] == 0x27) {
                  uVar44 = 0x27;
                }
                else {
                  uVar44 = 0x7d;
                }
                local_17c = local_190;
                local_178 = local_188;
                local_180 = local_18c;
                local_a4 = local_a4 + 1;
              }
              goto LAB_00017eac;
            }
            if (-1 < iVar26) goto LAB_00018d8c;
            uVar45 = -iVar26;
            local_184 = local_1a4;
            local_17c = local_190;
            local_178 = local_188;
            local_180 = local_18c;
          }
          local_16c = *(int *)(param_14 + 0x20);
          iVar26 = *(int *)(param_14 + 0x10);
          pbVar52[2] = (byte)uVar45;
          if (local_1a4 == 0xfffffffe) {
            local_184 = 0xffffffff;
            local_1a4 = 0xffffffff;
          }
          local_16c = local_16c - iVar26;
          if ((local_194 & 1) == 0) {
            bVar53 = 0x71;
          }
          else {
            bVar53 = 0x72;
          }
          *pbVar52 = bVar53;
          pbVar52[1] = (byte)(uVar45 >> 8);
          uVar27 = 1;
          if ((int)uVar45 < 0x20) {
            uVar27 = 1 << (uVar45 & 0xff);
          }
          *(uint *)(param_14 + 0x50) = *(uint *)(param_14 + 0x50) | uVar27;
          piVar43 = *(int **)(param_14 + 0x24);
          if (*(int *)(param_14 + 0x4c) < (int)uVar45) {
            *(uint *)(param_14 + 0x4c) = uVar45;
          }
          for (; pbVar41 = pbVar52, pbVar51 = pbVar52 + 3, piVar43 != (int *)0x0;
              piVar43 = (int *)*piVar43) {
            if (uVar45 == *(ushort *)(piVar43 + 1)) {
              *(undefined2 *)((int)piVar43 + 6) = 1;
              break;
            }
          }
          goto LAB_00015218;
        }
        uVar45 = uVar25;
        if (local_94 < 0x80) {
          uVar45 = 0;
        }
        if (uVar45 == 0) {
          local_4c[0] = (byte)local_94;
          goto LAB_0001634c;
        }
        iVar26 = FUN_00032ac4(local_94,local_4c);
        goto LAB_0001623c;
      }
      pbVar54 = local_a4 + 1;
      iVar26 = strncmp((char *)pbVar54,(char *)(DAT_000157f0 + 0x151f8),6);
      if (iVar26 != 0) {
        iVar26 = strncmp((char *)pbVar54,(char *)(DAT_000157f8 + 0x15234),6);
        if (iVar26 == 0) {
          local_158 = pbVar40 + 7;
          local_a4 = (byte *)(DAT_000157fc + 0x1572a);
          goto LAB_00015254;
        }
        local_16c = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
        uVar45 = pbVar40[1] - 0x2e & 0xff;
        if (((uVar45 < 0x10) && ((~(0x9001U >> uVar45) & 1) == 0)) &&
           (iVar26 = FUN_00011cfc(pbVar40,&local_a0), iVar26 != 0)) {
          if (local_a4[1] == 0x3a) {
            iVar31 = 0xd;
          }
          else {
            iVar31 = 0x1f;
          }
          goto LAB_00014ae8;
        }
        local_14c = 0;
        pcVar48 = (char *)(DAT_00015800 + 0x152d0);
        while( true ) {
          while( true ) {
            pbVar40 = local_a4;
            pbVar41 = local_a4 + 1;
            uVar45 = (uint)local_a4[1];
            if (uVar45 != 0x5c) break;
            pbVar51 = local_a4 + 2;
            pbVar54 = local_a4 + 2;
            local_a4 = pbVar54;
            if (*pbVar51 != 0x45) {
              local_a4 = pbVar41;
              iVar26 = strncmp((char *)pbVar54,pcVar48,3);
              if (iVar26 != 0) goto LAB_00015394;
              local_a4 = pbVar40 + 4;
            }
          }
          uVar27 = local_14c ^ 1;
          if (uVar45 != 0x5e) {
            uVar27 = 0;
          }
          if (uVar27 == 0) break;
          local_14c = 1;
          local_a4 = pbVar41;
        }
        local_a4 = pbVar41;
        if ((uVar45 != 0x5d) || ((*(uint *)(param_14 + 0x60) & 0x2000000) == 0)) {
LAB_00015394:
          iVar34 = DAT_00015808;
          iVar26 = DAT_00015804;
          auStack_68[0] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          pbVar41 = pbVar52 + 4;
          local_9c = pbVar41;
          local_6c[0] = 0;
          local_6c[1] = 0;
          local_6c[2] = 0;
          local_6c[3] = 0;
          auStack_68[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          auStack_68[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          auStack_68[3] = 0;
          auStack_68[4] = auStack_68[0];
          auStack_68[5] = 0;
          auStack_68[6] = auStack_68[0];
          if (uVar45 != 0) {
            local_17c = 0;
            local_180 = 0;
            bVar55 = false;
            pbVar51 = (byte *)(DAT_00015808 + 0x158d0);
            iVar13 = 0;
            iVar14 = 0;
LAB_000153f4:
            uVar27 = uVar25;
            if (uVar45 < 0xc0) {
              uVar27 = 0;
            }
            if (uVar27 != 0) {
              bVar53 = *local_a4;
              uVar45 = (uint)bVar53;
              if (0xbf < uVar45) {
                uVar27 = (uint)local_a4[1];
                if ((bVar53 & 0x20) == 0) {
                  local_a4 = local_a4 + 1;
                  uVar45 = uVar27 & 0x3f | (uVar45 & 0x1f) << 6;
                }
                else {
                  uVar44 = (uint)local_a4[2];
                  if ((bVar53 & 0x10) == 0) {
                    local_a4 = local_a4 + 2;
                    uVar45 = (uVar27 & 0x3f) << 6 | (uVar45 & 0xf) << 0xc | uVar44 & 0x3f;
                  }
                  else {
                    uVar8 = (uint)local_a4[3];
                    if ((bVar53 & 8) == 0) {
                      local_a4 = local_a4 + 3;
                      uVar45 = (uVar44 & 0x3f) << 6 |
                               (uVar45 & 7) << 0x12 | uVar8 & 0x3f | (uVar27 & 0x3f) << 0xc;
                    }
                    else {
                      pbVar40 = local_a4 + 4;
                      if ((bVar53 & 4) == 0) {
                        local_a4 = local_a4 + 4;
                        uVar45 = (uVar8 & 0x3f) << 6 |
                                 (uVar45 & 3) << 0x18 | *pbVar40 & 0x3f | (uVar27 & 0x3f) << 0x12 |
                                 (uVar44 & 0x3f) << 0xc;
                      }
                      else {
                        local_a4 = local_a4 + 5;
                        uVar45 = (*pbVar40 & 0x3f) << 6 |
                                 (uVar45 & 1) << 0x1e | *local_a4 & 0x3f | (uVar27 & 0x3f) << 0x18 |
                                 (uVar44 & 0x3f) << 0x12 | (uVar8 & 0x3f) << 0xc;
                      }
                    }
                  }
                }
              }
            }
            if (pbVar41 < local_9c) {
              if (piVar21 != (int *)0x0) {
                *piVar21 = (int)(local_9c + (*piVar21 - (int)pbVar41));
                local_9c = pbVar41;
              }
              bVar55 = true;
            }
            iVar15 = iVar13;
            iVar42 = iVar14;
            uVar27 = local_170;
            if (local_170 != 0) {
              if ((uVar45 == 0x5c) && (local_a4[1] == 0x45)) {
                uVar27 = 0;
                local_a4 = local_a4 + 1;
                goto LAB_000154c0;
              }
              goto LAB_00015cf8;
            }
            if (uVar45 == 0x5b) {
              uVar44 = local_a4[1] - 0x2e & 0xff;
              if (((0xf < uVar44) || ((~(0x9001U >> uVar44) & 1) != 0)) ||
                 (iVar15 = FUN_00011cfc(local_a4,&local_a0), pbVar40 = local_a0, iVar15 == 0))
              goto LAB_00015cf8;
              iVar15 = *(int *)(param_14 + 8);
              if (local_a4[1] == 0x3a) {
                pbVar54 = local_a4 + 2;
                if (local_a4[2] == 0x5e) {
                  local_170 = 1;
                  local_180 = 1;
                  pbVar54 = local_a4 + 3;
                }
                local_a4 = pbVar54;
                pbVar54 = local_a4;
                sVar29 = (int)local_a0 - (int)local_a4;
                pcVar48 = (char *)(iVar34 + 0x1583e);
                pbVar46 = pbVar51;
                while( true ) {
                  iVar42 = (int)pbVar46 - (int)pbVar51;
                  uVar45 = (uint)*pbVar46;
                  if (uVar45 == 0) {
                    iVar31 = 0x1e;
                    goto LAB_00014ae8;
                  }
                  if ((sVar29 == uVar45) &&
                     (iVar11 = strncmp((char *)pbVar54,pcVar48,sVar29), iVar11 == 0)) break;
                  pcVar48 = pcVar48 + uVar45 + 1;
                  pbVar46 = pbVar46 + 1;
                }
                if (iVar42 < 3) {
                  uVar45 = local_194 & 1;
                }
                else {
                  uVar45 = 0;
                }
                if (uVar45 != 0) {
                  iVar42 = 0;
                }
                if ((local_194 & 0x20000000) != 0) {
                  if (local_170 == 0) {
                    iVar11 = 0;
                  }
                  else {
                    iVar11 = 0xe;
                  }
                  iVar11 = *(int *)(DAT_000196b0 + 0x19414 + (iVar42 + iVar11) * 4);
                  if (iVar11 != 0) {
                    local_158 = pbVar40 + 1;
                    local_a4 = (byte *)(iVar11 + -1);
                    goto LAB_00015abc;
                  }
                  if (iVar42 == 9) {
                    bVar53 = 0xc;
                  }
                  else if (iVar42 == 10) {
                    bVar53 = 0xd;
                  }
                  else {
                    if (iVar42 != 8) {
                      if ((local_170 != 0) && ((bVar55 || (pbVar40[2] != 0x5d)))) {
                        pbVar40 = local_9c + 1;
                        *local_9c = 2;
                        local_9c = pbVar40;
                        iVar14 = FUN_00032ac4(0x100,pbVar40);
                        local_9c = local_9c + iVar14;
                        iVar14 = FUN_00032ac4(DAT_000196b4);
                        local_9c = local_9c + iVar14;
                      }
                      goto LAB_000194b4;
                    }
                    bVar53 = 0xb;
                  }
                  if (local_170 == 0) {
                    bVar16 = 3;
                  }
                  else {
                    bVar16 = 4;
                  }
                  *local_9c = bVar16;
                  pbVar40 = local_9c + 2;
                  local_9c[1] = bVar53;
                  local_9c = local_9c + 3;
                  *pbVar40 = 0;
                  local_a4 = local_a0 + 1;
                  local_17c = 1;
                  goto LAB_00015abc;
                }
LAB_000194b4:
                pbVar40 = local_4c;
                puVar38 = (undefined4 *)(iVar15 + *(int *)(DAT_000196b8 + iVar42 * 0xc + 0x199bc));
                puVar50 = puVar38;
                do {
                  puVar39 = puVar50 + 2;
                  uVar10 = puVar50[1];
                  *(undefined4 *)pbVar40 = *puVar50;
                  *(undefined4 *)(pbVar40 + 4) = uVar10;
                  pbVar40 = pbVar40 + 8;
                  puVar50 = puVar39;
                } while (puVar39 != puVar38 + 8);
                iVar13 = *(int *)(DAT_000196bc + 0x19504 + iVar42 * 0xc + 0x4f8);
                iVar14 = *(int *)(DAT_000196bc + 0x19504 + iVar42 * 0xc + 0x4fc);
                if (iVar13 < 0) {
                  if (iVar14 < 0) goto LAB_00015944;
                }
                else {
                  pbVar46 = (byte *)(iVar15 + 0x20 + iVar13);
                  pbVar40 = (byte *)(iVar15 + iVar13);
                  pbVar54 = local_4c;
                  if (iVar14 < 0) {
                    do {
                      pbVar18 = pbVar40 + 1;
                      *pbVar54 = *pbVar54 & ~*pbVar40;
                      pbVar40 = pbVar18;
                      pbVar54 = pbVar54 + 1;
                    } while (pbVar46 != pbVar18);
LAB_00015944:
                    iVar14 = -iVar14;
                  }
                  else {
                    do {
                      pbVar18 = pbVar40 + 1;
                      *pbVar54 = *pbVar54 | *pbVar40;
                      pbVar40 = pbVar18;
                      pbVar54 = pbVar54 + 1;
                    } while (pbVar46 != pbVar18);
                  }
                }
                if (iVar14 == 1) {
                  local_4c[1] = local_4c[1] & 0xc3;
                }
                else if (iVar14 == 2) {
                  local_41 = local_41 & 0x7f;
                }
                if (local_170 == 0) {
                  iVar14 = 0x20;
                  pbVar40 = local_4c;
                  pbVar54 = local_6c;
                  do {
                    iVar14 = iVar14 + -1;
                    *pbVar54 = *pbVar54 | *pbVar40;
                    pbVar40 = pbVar40 + 1;
                    pbVar54 = pbVar54 + 1;
                  } while (iVar14 != 0);
                }
                else {
                  iVar14 = 0x20;
                  pbVar40 = local_4c;
                  pbVar54 = local_6c;
                  do {
                    iVar14 = iVar14 + -1;
                    *pbVar54 = ~*pbVar40 | *pbVar54;
                    pbVar40 = pbVar40 + 1;
                    pbVar54 = pbVar54 + 1;
                  } while (iVar14 != 0);
                }
                iVar14 = 2;
                iVar13 = 1;
                local_a4 = local_a0 + 1;
                goto LAB_00015abc;
              }
              iVar31 = 0x1f;
            }
            else {
              if (uVar45 != 0x5c) goto LAB_00015cf8;
              iVar11 = FUN_00012a00(&local_a4,&local_94,param_4,*(undefined4 *)(param_14 + 0x40),
                                    local_194,1);
              pbVar40 = local_a4;
              if (*param_4 != 0) goto LAB_00014af8;
              uVar45 = local_94;
              if (iVar11 == 0) goto LAB_00015cf8;
              if (iVar11 == 5) {
                uVar45 = 8;
                goto LAB_00015cf8;
              }
              if (iVar11 == 0xc) {
                iVar31 = 0x47;
              }
              else {
                uVar27 = 0;
                if (iVar11 == 0x1a) {
                  if ((local_a4[1] != 0x5c) || (local_a4[2] != 0x45)) {
                    uVar27 = 1;
                    goto LAB_000154c0;
                  }
                  local_a4 = local_a4 + 2;
                  goto LAB_00015abc;
                }
                if (iVar11 == 0x19) goto LAB_00015abc;
                iVar35 = *(int *)(param_14 + 8);
                iVar15 = iVar13 + 1;
                iVar42 = iVar14 + 2;
                switch(iVar11) {
                case 6:
                  pbVar54 = (byte *)(iVar35 + 0x3f);
                  pbVar40 = local_6c;
                  do {
                    pbVar54 = pbVar54 + 1;
                    *pbVar40 = ~*pbVar54 | *pbVar40;
                    pbVar40 = pbVar40 + 1;
                  } while ((byte *)(iVar35 + 0x5f) != pbVar54);
                  goto LAB_00015b14;
                case 7:
                  pbVar54 = (byte *)(iVar35 + 0x3f);
                  pbVar40 = local_6c;
                  do {
                    pbVar54 = pbVar54 + 1;
                    *pbVar40 = *pbVar40 | *pbVar54;
                    pbVar40 = pbVar40 + 1;
                  } while ((byte *)(iVar35 + 0x5f) != pbVar54);
                  goto LAB_000154c0;
                case 8:
                  pbVar54 = (byte *)(iVar35 + -1);
                  pbVar40 = local_6c;
                  do {
                    pbVar54 = pbVar54 + 1;
                    *pbVar40 = ~*pbVar54 | *pbVar40;
                    pbVar40 = pbVar40 + 1;
                  } while ((byte *)(iVar35 + 0x1f) != pbVar54);
                  goto LAB_00015b14;
                case 9:
                  pbVar54 = (byte *)(iVar35 + -1);
                  pbVar40 = local_6c;
                  do {
                    pbVar54 = pbVar54 + 1;
                    *pbVar40 = *pbVar40 | *pbVar54;
                    pbVar40 = pbVar40 + 1;
                  } while ((byte *)(iVar35 + 0x1f) != pbVar54);
                  goto LAB_000154c0;
                case 10:
                  pbVar54 = (byte *)(iVar35 + 0x9f);
                  pbVar40 = local_6c;
                  do {
                    pbVar54 = pbVar54 + 1;
                    *pbVar40 = ~*pbVar54 | *pbVar40;
                    pbVar40 = pbVar40 + 1;
                  } while ((byte *)(iVar35 + 0xbf) != pbVar54);
LAB_00015b14:
                  local_180 = 1;
                  goto LAB_000154c0;
                case 0xb:
                  pbVar54 = (byte *)(iVar35 + 0x9f);
                  pbVar40 = local_6c;
                  do {
                    pbVar54 = pbVar54 + 1;
                    *pbVar40 = *pbVar40 | *pbVar54;
                    pbVar40 = pbVar40 + 1;
                  } while ((byte *)(iVar35 + 0xbf) != pbVar54);
                  goto LAB_000154c0;
                case 0xc:
                  break;
                case 0xd:
                  break;
                case 0xe:
                  break;
                case 0xf:
                  goto LAB_00015c38;
                case 0x10:
LAB_00015c38:
                  local_8c = 0;
                  local_88 = 0;
                  iVar14 = FUN_00013788(&local_a4,&local_90,&local_8c,&local_88,param_4);
                  pbVar40 = local_a4;
                  if (iVar14 != 0) {
                    if ((iVar11 == 0x10) == local_90) {
                      bVar53 = 4;
                    }
                    else {
                      bVar53 = 3;
                    }
                    *local_9c = bVar53;
                    pbVar40 = local_9c + 2;
                    local_9c[1] = (byte)local_8c;
                    local_9c = local_9c + 3;
                    *pbVar40 = (byte)local_88;
                    local_17c = 1;
                    iVar15 = iVar13;
                    goto LAB_000154c0;
                  }
                  goto LAB_00014af8;
                case 0x11:
                  break;
                case 0x12:
                  iVar14 = DAT_00015810;
                  goto LAB_00015bfc;
                case 0x13:
                  iVar14 = DAT_00015810;
                  goto LAB_00015bd4;
                case 0x14:
                  iVar14 = DAT_00015814;
LAB_00015bfc:
                  FUN_000128d4(local_6c,&local_9c,local_194,param_14,
                               *(undefined4 *)(iVar31 + iVar14));
                  goto LAB_000154c0;
                case 0x15:
                  iVar14 = DAT_00015814;
LAB_00015bd4:
                  FUN_00012840(local_6c,&local_9c,local_194,param_14,
                               *(undefined4 *)(iVar31 + iVar14),0xffffffff);
                  goto LAB_000154c0;
                case 0x16:
                  break;
                case 0x17:
                  break;
                case 0x18:
                  break;
                case 0x19:
                  break;
                case 0x1a:
                  break;
                case 0x1b:
                  break;
                case 0x1c:
                  break;
                case 0x1d:
                  goto LAB_00015aa0;
                case 0x1e:
                  goto LAB_00015aa0;
                case 0x1f:
                  goto LAB_00015aa0;
                case 0x20:
                  goto LAB_00015aa0;
                case 0x21:
                  goto LAB_00015aa0;
                case 0x22:
LAB_00015aa0:
                  local_158 = local_a4;
                  local_a4 = (byte *)(*(int *)(iVar26 + iVar11 * 4 + 0x153dc) + -1);
                  iVar14 = iVar42;
LAB_00015abc:
                  uVar27 = 0;
                  iVar15 = iVar13;
                  iVar42 = iVar14;
                  goto LAB_000154c0;
                }
                if ((local_194 & 0x40) == 0) {
                  uVar27 = local_170;
                  uVar45 = (uint)*local_a4;
LAB_00015cf8:
                  for (; (pbVar40 = local_a4, local_a4[1] == 0x5c && (local_a4[2] == 0x45));
                      local_a4 = local_a4 + 2) {
                    uVar27 = 0;
                  }
                  if (uVar45 == 10 || uVar45 == 0xd) {
                    *(uint *)(param_14 + 100) = *(uint *)(param_14 + 100) | 0x800;
                  }
                  if ((uVar27 == 0) && (pbVar54 = local_a4, local_a4[1] == 0x2d)) {
                    do {
                      local_a4 = pbVar54 + 2;
                      if (*local_a4 != 0x5c) break;
                      pbVar46 = pbVar54 + 3;
                      pbVar54 = local_a4;
                    } while (*pbVar46 == 0x45);
                    do {
                      if ((*local_a4 != 0x5c) || (local_a4[1] != 0x51)) goto LAB_00015e7c;
                      if ((local_a4[2] != 0x5c) || (local_a4[3] != 0x45)) goto LAB_00015ed8;
                      local_a4 = local_a4 + 4;
                    } while( true );
                  }
                  goto LAB_00015d40;
                }
                iVar31 = 7;
              }
            }
            goto LAB_00014ae8;
          }
LAB_000193d4:
          iVar31 = 6;
          goto LAB_00014ae8;
        }
        if (local_14c == 0) {
          bVar53 = 0x9d;
        }
        else {
          bVar53 = 0xd;
        }
        pbVar51 = pbVar52 + 1;
        *pbVar52 = bVar53;
        if (local_1a4 != 0xfffffffe) {
          local_184 = local_1a4;
          local_178 = local_188;
          pbVar41 = pbVar52;
          goto LAB_00015218;
        }
        local_178 = local_188;
        local_1a4 = 0xffffffff;
        goto LAB_0001538c;
      }
      local_158 = pbVar40 + 7;
      local_a4 = (byte *)(DAT_000157f4 + 0x156e8);
    }
    goto LAB_00015218;
  }
  if (uVar44 != 0x28) {
    if (0x28 < uVar44) {
      if (uVar44 == 0x2a) {
        uVar45 = 0;
        local_19c = 0xffffffff;
        goto LAB_000164fc;
      }
      if (uVar44 < 0x2a) goto LAB_00014fbc;
      if (uVar44 == 0x2b) {
        if (pbVar41 == (byte *)0x0) goto LAB_00016504;
        uVar45 = 1;
        local_19c = 0xffffffff;
LAB_00014f5c:
        uVar27 = 2;
        goto LAB_000165b0;
      }
      goto LAB_00019684;
    }
    if (uVar44 == 0) goto LAB_00014fbc;
    if (uVar44 != 0x24) goto LAB_00019684;
    if ((local_194 & 2) == 0) {
      bVar53 = 0x19;
    }
    else {
      bVar53 = 0x1a;
    }
    pbVar51 = pbVar52 + 1;
    *pbVar52 = bVar53;
    goto LAB_00014fb0;
  }
  pbVar41 = local_a4 + 1;
  if (local_a4[1] != 0x2a) {
LAB_0001767c:
    local_16c = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
    uVar44 = local_194;
    if (local_a4[1] == 0x3f) {
      local_a4 = local_a4 + 2;
      bVar53 = pbVar40[2];
      if (bVar53 < 0x3a) {
        if (bVar53 < 0x30) {
          if (bVar53 == 0x27) goto LAB_00017f0c;
          if (bVar53 < 0x28) {
            if (bVar53 != 0x21) {
              if (bVar53 == 0x26) {
                uVar44 = 0x29;
                goto LAB_0001813c;
              }
              goto LAB_000176d0;
            }
            local_a4 = pbVar40 + 3;
            if (pbVar40[3] == 0x29) {
              bVar53 = pbVar40[4];
              bVar55 = 0x3e < bVar53;
              if (bVar53 != 0x3f) {
                bVar55 = bVar53 != 0x2a;
              }
              if ((bVar55 && (bVar53 != 0x3f && bVar53 != 0x2b)) &&
                 ((bVar53 != 0x7b || (iVar26 = FUN_0001297c(pbVar40 + 5), iVar26 == 0)))) {
                pbVar51 = pbVar52 + 1;
                *pbVar52 = 0x9d;
                goto LAB_00017d40;
              }
            }
            iVar26 = 0;
            uVar8 = 0x7e;
            *(int *)(param_14 + 0x5c) = *(int *)(param_14 + 0x5c) + 1;
            iVar34 = iVar26;
            goto LAB_00017cd8;
          }
          if ((bVar53 == 0x2b) || (bVar53 == 0x2d)) goto LAB_00018420;
          if (bVar53 != 0x28) goto LAB_000176d0;
          local_a0 = local_a4;
          if ((pbVar40[3] == 0x3f) && (pbVar40[4] == 0x43)) {
            pbVar41 = pbVar40 + 4;
            do {
              pbVar51 = pbVar41;
              pbVar41 = pbVar51 + 1;
              uVar8 = (uint)*pbVar41;
            } while (uVar8 - 0x30 < 10);
            if (uVar8 == 0x29) {
              local_a0 = local_a4 + (int)(pbVar51 + ~(uint)pbVar40 + 1);
            }
            if (*local_a0 != 0x28) goto LAB_000177c8;
          }
          if ((local_a0[1] == 0x3f) &&
             ((bVar53 = local_a0[2], bVar53 == 0x21 || bVar53 == 0x3d ||
              ((bVar53 == 0x3c && (local_a0[3] == 0x21 || local_a0[3] == 0x3d)))))) {
            iVar26 = 0;
            *(undefined4 *)(param_14 + 0x80) = 1;
            goto LAB_00017c20;
          }
          pbVar52[3] = 0x8d;
          local_a4 = pbVar40 + 3;
          uVar8 = (uint)pbVar40[3];
          if (uVar8 == 0x52) {
            if (pbVar40[4] == 0x26) {
              local_a4 = pbVar40 + 5;
              uVar8 = 0xffffffff;
              pbVar52[3] = 0x8f;
              goto LAB_0001790c;
            }
LAB_00017964:
            if (9 < uVar8 - 0x30) {
              uVar8 = 0;
              goto LAB_0001790c;
            }
            uVar49 = 0;
LAB_00017978:
            uVar37 = 0;
            while ((*local_a4 - 0x30 & 0xff) < 10) {
              if (DAT_00018190 < (int)uVar37) goto LAB_00017990;
              uVar37 = uVar37 * 10 + (*local_a4 - 0x30);
              local_a4 = local_a4 + 1;
            }
            pbVar40 = (byte *)0x0;
            iVar26 = 3;
            sVar29 = 0xffffffff;
            uVar8 = 0;
          }
          else {
            if (uVar8 == 0x3c) {
              local_a4 = pbVar40 + 4;
              uVar8 = 0x3e;
            }
            else {
              if (uVar8 != 0x27) {
                if ((uVar8 - 0x2b & 0xfd) != 0) goto LAB_00017964;
                local_a4 = pbVar40 + 4;
                uVar49 = (uint)pbVar40[3];
                goto LAB_00017978;
              }
              local_a4 = pbVar40 + 4;
              uVar8 = 0x27;
            }
LAB_0001790c:
            pbVar40 = local_a4;
            if (*local_a4 - 0x30 < 10) goto LAB_00017920;
            if ((*(byte *)(*(int *)(param_14 + 0xc) + (uint)*local_a4) & 0x10) == 0) {
LAB_000177c8:
              iVar31 = 0x1c;
              goto LAB_00014ae8;
            }
            pbVar41 = local_a4 + 1;
            do {
              pbVar51 = pbVar41;
              pbVar41 = pbVar51 + 1;
              bVar53 = *(byte *)(*(int *)(param_14 + 0xc) + (uint)*pbVar51);
              uVar37 = bVar53 & 0x10;
            } while ((bVar53 & 0x10) != 0);
            sVar29 = (int)pbVar51 - (int)local_a4;
            local_a4 = pbVar51;
            if ((0 < (int)uVar8) && (local_a4 = pbVar41, (uint)*pbVar51 != (uVar8 & 0xff)))
            goto LAB_00017a78;
            uVar49 = 0xffffffff;
            iVar26 = iVar22;
          }
          pbVar41 = local_a4 + 1;
          bVar53 = *local_a4;
          local_a4 = pbVar41;
          if (bVar53 != 0x29) {
LAB_00017a78:
            iVar31 = 0x1a;
            local_a4 = local_a4 + -1;
            goto LAB_00014ae8;
          }
          if (piVar21 == (int *)0x0) {
            if (uVar49 == 0xffffffff) {
              local_174 = *(ushort **)(param_14 + 0x2c);
              iVar14 = *(int *)(param_14 + 0x30);
              for (iVar34 = 0; iVar34 < iVar14; iVar34 = iVar34 + 1) {
                iVar13 = strncmp((char *)pbVar40,(char *)(local_174 + 1),sVar29);
                if ((iVar13 == 0) && (*(char *)((int)local_174 + sVar29 + 2) == '\0')) {
                  iVar13 = 1;
                  uVar2 = *local_174;
                  uVar8 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
                  if (*(int *)(param_14 + 0x4c) < (int)uVar8) {
                    *(uint *)(param_14 + 0x4c) = uVar8;
                  }
                  goto LAB_00017bc4;
                }
                local_174 = (ushort *)((int)local_174 + *(int *)(param_14 + 0x34));
              }
              if (uVar8 != 0) goto LAB_00017ac8;
              if (*pbVar40 == 0x52) {
                iVar34 = 0;
                for (iVar14 = 1; iVar14 < (int)sVar29; iVar14 = iVar14 + 1) {
                  if (9 < pbVar40[iVar14] - 0x30) goto LAB_00017ac8;
                  if (DAT_00018190 < iVar34) goto LAB_000179a4;
                  iVar34 = iVar34 * 10 + (uint)pbVar40[iVar14] + -0x30;
                }
                if (iVar34 == 0) {
                  iVar34 = 0xffff;
                }
                pbVar52[3] = 0x8f;
                pbVar52[4] = (byte)((uint)iVar34 >> 8);
                pbVar52[5] = (byte)iVar34;
              }
              else {
                if ((sVar29 != 6) ||
                   (iVar26 = strncmp((char *)pbVar40,(char *)(DAT_00018184 + 0x17c98),6),
                   iVar26 != 0)) goto LAB_00017ac8;
                pbVar52[3] = 0x91;
                iVar26 = 1;
              }
            }
            else {
              if (uVar37 == 0) {
                iVar31 = 0x23;
                goto LAB_00014ae8;
              }
              if (uVar49 != 0) {
                if (uVar49 == 0x2d) {
                  uVar37 = (*(int *)(param_14 + 0x40) + 1) - uVar37;
                }
                else {
                  uVar37 = uVar37 + *(int *)(param_14 + 0x40);
                }
                if ((int)uVar37 < 1) goto LAB_00017ac8;
              }
              if (*(int *)(param_14 + 0x44) < (int)uVar37) goto LAB_00017ac8;
              pbVar52[4] = (byte)(uVar37 >> 8);
              pbVar52[5] = (byte)uVar37;
              if (*(int *)(param_14 + 0x4c) < (int)uVar37) {
                *(uint *)(param_14 + 0x4c) = uVar37;
              }
            }
          }
          goto LAB_00017c20;
        }
LAB_00018420:
        uVar44 = 0x29;
LAB_00018424:
        pbVar40 = local_a4;
        bVar53 = *local_a4;
        if (bVar53 == 0x2b) {
          local_a4 = local_a4 + 1;
          if (9 < pbVar40[1] - 0x30) {
            iVar31 = 0x3f;
            goto LAB_00014ae8;
          }
        }
        else if (bVar53 == 0x2d) {
          if (9 < local_a4[1] - 0x30) goto LAB_000176d0;
          local_a4 = local_a4 + 1;
        }
        uVar45 = 0;
        while (pbVar40 = local_a4, *local_a4 - 0x30 < 10) {
          if (DAT_00018190 < (int)uVar45) goto LAB_0001848c;
          local_a4 = local_a4 + 1;
          uVar45 = (uVar45 * 10 + (uint)*pbVar40) - 0x30;
        }
        if (*local_a4 != uVar44) {
LAB_00018418:
          iVar31 = 0x1d;
          goto LAB_00014ae8;
        }
        if (bVar53 == 0x2d) {
          if (uVar45 == 0) {
LAB_000184ec:
            iVar31 = 0x3a;
            goto LAB_00014ae8;
          }
          uVar45 = (*(int *)(param_14 + 0x40) + 1) - uVar45;
          if ((int)uVar45 < 1) goto LAB_00017ac8;
        }
        else if (bVar53 == 0x2b) {
          if (uVar45 == 0) goto LAB_000184ec;
          uVar45 = uVar45 + *(int *)(param_14 + 0x40);
        }
LAB_00018508:
        uVar27 = *(uint *)(param_14 + 0x14);
        local_16c = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
        if (piVar21 == (int *)0x0) {
          *pbVar52 = 0;
          if (uVar45 != 0) {
            uVar27 = FUN_00014644(*(undefined4 *)(param_14 + 0x14),uVar25,uVar45);
          }
          if (uVar27 == 0) {
            if (*(int *)(param_14 + 0x44) < (int)uVar45) {
LAB_00017ac8:
              iVar31 = 0xf;
              goto LAB_00014ae8;
            }
            iVar26 = *(int *)(param_14 + 0x14);
            if ((uint)(*(int *)(param_14 + 0x10) + *(int *)(param_14 + 0x3c) + -100) <=
                *(uint *)(param_14 + 0x20)) {
              iVar34 = FUN_00012460(param_14);
              *param_4 = iVar34;
              pbVar40 = local_a4;
              if (iVar34 != 0) goto LAB_00014af8;
            }
            uVar27 = iVar26 + uVar45;
            **(undefined1 **)(param_14 + 0x20) =
                 (char)((uint)((int)(pbVar52 + 1) - *(int *)(param_14 + 0x14)) >> 8);
            *(char *)(*(int *)(param_14 + 0x20) + 1) =
                 (char)(pbVar52 + 1) - (char)*(undefined4 *)(param_14 + 0x14);
            *(int *)(param_14 + 0x20) = *(int *)(param_14 + 0x20) + 2;
          }
          else {
            bVar55 = param_8 == 0;
            if (param_8 < 1) {
              bVar55 = *(short *)(uVar27 + 1) == 0;
            }
            if (bVar55) {
              piVar43 = &local_7c;
LAB_00018664:
              if ((uint)piVar43[1] < uVar27) goto LAB_00018698;
              iVar26 = FUN_000116f4(piVar43[1],pbVar52,uVar25,param_14,0);
              if (iVar26 != 0) goto code_r0x0001868c;
            }
          }
        }
        pbVar51 = pbVar52 + 3;
        *pbVar52 = 0x75;
        pbVar52[1] = (byte)(uVar27 - *(int *)(param_14 + 0x14) >> 8);
        pbVar52[2] = (char)uVar27 - (char)*(undefined4 *)(param_14 + 0x14);
        if (local_1a4 == 0xfffffffe) {
          local_178 = local_188;
          local_150 = 0;
          local_1a4 = 0xffffffff;
          local_184 = 0xffffffff;
          pbVar41 = pbVar52;
        }
        else {
          local_184 = local_1a4;
          local_178 = local_188;
          local_150 = 0;
          pbVar41 = pbVar52;
        }
        goto LAB_00015218;
      }
      if (bVar53 == 0x3e) {
        local_a4 = pbVar40 + 3;
        iVar26 = 0;
        iVar34 = 0;
        uVar8 = 0x81;
      }
      else {
        if (0x3e < bVar53) {
          if (bVar53 == 0x50) {
            local_a4 = pbVar40 + 3;
            uVar8 = (uint)pbVar40[3];
            if (uVar8 - 0x3d < 2) {
              uVar44 = 0x29;
              bVar55 = uVar8 == 0x3e;
              goto LAB_00017eac;
            }
            if (uVar8 != 0x3c) {
              iVar31 = 0x29;
              goto LAB_00014ae8;
            }
LAB_00017f0c:
            pbVar41 = local_a4 + 1;
            pbVar40 = local_a4 + 1;
            if (*local_a4 == 0x3c) {
              uVar8 = 0x3e;
            }
            else {
              uVar8 = 0x27;
            }
            local_a4 = pbVar41;
            if (*pbVar40 - 0x30 < 10) goto LAB_00017920;
            while ((*(byte *)(*(int *)(param_14 + 0xc) + (uint)*local_a4) & 0x10) != 0) {
              local_a4 = local_a4 + 1;
            }
            sVar29 = (int)local_a4 - (int)pbVar41;
            iVar26 = *(int *)(param_14 + 0x40) + 1;
            if (piVar21 != (int *)0x0) {
              if (*local_a4 != uVar8) goto LAB_00017f70;
              iVar34 = *(int *)(param_14 + 0x30);
              if (9999 < iVar34) {
                iVar31 = 0x31;
                goto LAB_00014ae8;
              }
              if ((*(int *)(param_14 + 0x34) <= (int)(sVar29 + 2)) &&
                 (*(size_t *)(param_14 + 0x34) = sVar29 + 3, 0x20 < (int)sVar29)) goto LAB_00017fb8;
              puVar50 = *(undefined4 **)(param_14 + 0x28);
              for (iVar14 = 0; iVar14 < iVar34; iVar14 = iVar14 + 1) {
                iVar13 = puVar50[2];
                if ((sVar29 == puVar50[1]) &&
                   (iVar15 = strncmp((char *)pbVar41,(char *)*puVar50,sVar29), iVar15 == 0)) {
                  if (iVar13 == iVar26) goto LAB_000180e0;
                  if ((local_194 & 0x80000) == 0) {
                    iVar31 = 0x2b;
                    goto LAB_00014ae8;
                  }
                  *(undefined4 *)(param_14 + 0x78) = 1;
                }
                else if (iVar13 == iVar26) {
                  iVar31 = 0x41;
                  goto LAB_00014ae8;
                }
                puVar50 = puVar50 + 3;
              }
              iVar14 = *(int *)(param_14 + 0x38);
              if (iVar14 <= iVar34) {
                pvVar12 = (void *)(*(code *)**(undefined4 **)(iVar31 + DAT_00018188))(iVar14 * 0x18)
                ;
                if (pvVar12 == (void *)0x0) {
                  iVar31 = 0x15;
                  goto LAB_00014ae8;
                }
                memcpy(pvVar12,*(void **)(param_14 + 0x28),*(int *)(param_14 + 0x38) * 0xc);
                if (0x14 < *(int *)(param_14 + 0x38)) {
                  (*(code *)**(undefined4 **)(iVar31 + DAT_0001818c))
                            (*(undefined4 *)(param_14 + 0x28));
                }
                *(void **)(param_14 + 0x28) = pvVar12;
                *(int *)(param_14 + 0x38) = iVar14 * 2;
              }
              iVar13 = *(int *)(param_14 + 0x30);
              iVar14 = iVar13 * 0xc;
              iVar34 = *(int *)(param_14 + 0x28) + iVar14;
              *(byte **)(*(int *)(param_14 + 0x28) + iVar14) = pbVar41;
              *(size_t *)(iVar34 + 4) = sVar29;
              *(int *)(iVar34 + 8) = iVar26;
              *(int *)(param_14 + 0x30) = iVar13 + 1;
            }
LAB_000180e0:
            local_a4 = local_a4 + 1;
            goto LAB_000180ec;
          }
          if (bVar53 < 0x51) {
            if (bVar53 == 0x43) {
              iVar26 = 0;
              *pbVar52 = 0x76;
              local_a4 = pbVar40 + 3;
              while (*local_a4 - 0x30 < 10) {
                pbVar40 = local_a4 + 1;
                iVar26 = iVar26 * 10 + (uint)*local_a4 + -0x30;
                local_a4 = pbVar40;
                if (0xff < iVar26) {
                  iVar31 = 0x26;
                  goto LAB_00014ae8;
                }
              }
              if (*local_a4 != 0x29) {
                iVar31 = 0x27;
                goto LAB_00014ae8;
              }
              pbVar52[1] = (byte)iVar26;
              pbVar51 = pbVar52 + 6;
              pbVar52[2] = (byte)((uint)(local_a4 + (1 - *(int *)(param_14 + 0x18))) >> 8);
              pbVar52[3] = ((char)local_a4 - (char)*(undefined4 *)(param_14 + 0x18)) + 1;
              pbVar41 = (byte *)0x0;
              pbVar52[4] = 0;
              pbVar52[5] = 0;
              local_128 = 1;
              local_154 = pbVar52;
              goto LAB_00015218;
            }
          }
          else {
            if (bVar53 == 0x52) {
              local_a4 = pbVar40 + 3;
              if (pbVar40[3] != 0x29) goto LAB_00018418;
              uVar45 = 0;
              goto LAB_00018508;
            }
            if (bVar53 == 0x7c) {
              iVar34 = 1;
              *(undefined4 *)(param_14 + 0x7c) = 1;
              goto LAB_000177f4;
            }
          }
LAB_000176d0:
          local_88 = 0;
          local_8c = 0;
          puVar36 = &local_8c;
LAB_000176e4:
          pbVar40 = local_a4;
          bVar53 = *local_a4;
          if (bVar53 != 0x29 && bVar53 != 0x3a) {
            local_a4 = local_a4 + 1;
            bVar53 = *pbVar40;
            if (bVar53 == 0x58) {
              uVar44 = *puVar36 | 0x40;
            }
            else {
              if (bVar53 < 0x59) {
                if (bVar53 == 0x4a) {
                  *puVar36 = *puVar36 | 0x80000;
                  *(uint *)(param_14 + 100) = *(uint *)(param_14 + 100) | 0x400;
                }
                else {
                  if (bVar53 == 0x55) {
                    uVar44 = *puVar36 | 0x200;
                    goto LAB_00018700;
                  }
                  puVar36 = &local_88;
                  if (bVar53 != 0x2d) goto LAB_000186d0;
                }
                goto LAB_000176e4;
              }
              if (bVar53 == 0x6d) {
                uVar44 = *puVar36 | 2;
              }
              else {
                if (bVar53 < 0x6e) {
                  if (bVar53 == 0x69) {
                    uVar44 = *puVar36 | 1;
                    goto LAB_00018700;
                  }
LAB_000186d0:
                  *param_4 = 0xc;
                  local_a4 = pbVar40;
                  goto LAB_00014af8;
                }
                if (bVar53 == 0x73) {
                  uVar44 = *puVar36 | 4;
                }
                else {
                  if (bVar53 != 0x78) goto LAB_000186d0;
                  uVar44 = *puVar36 | 8;
                }
              }
            }
LAB_00018700:
            *puVar36 = uVar44;
            goto LAB_000176e4;
          }
          if (bVar53 != 0x29) {
            local_a4 = local_a4 + 1;
          }
          uVar44 = (local_194 | local_8c) & ~local_88;
          if (bVar53 == 0x29) {
            bVar55 = (uVar44 & 0x200) != 0;
            local_e4 = (byte *)(uint)bVar55;
            local_e0 = (byte *)(uint)!bVar55;
            local_12c = uVar44 & 1;
            local_194 = uVar44;
LAB_00017d40:
            pbVar41 = (byte *)0x0;
            goto LAB_00015218;
          }
          goto LAB_000187a0;
        }
        if (bVar53 == 0x3c) {
          uVar8 = (uint)pbVar40[3];
          if (uVar8 == 0x21) {
            local_a4 = pbVar40 + 4;
            iVar26 = 0;
            *(int *)(param_14 + 0x5c) = *(int *)(param_14 + 0x5c) + 1;
            iVar34 = 0;
            uVar8 = 0x80;
          }
          else {
            if (uVar8 != 0x3d) {
              if ((*(byte *)(*(int *)(param_14 + 0xc) + uVar8) & 0x10) == 0) {
                iVar31 = 0x18;
                local_a4 = pbVar40 + 3;
                goto LAB_00014ae8;
              }
              goto LAB_00017f0c;
            }
            local_a4 = pbVar40 + 4;
            iVar26 = 0;
            *(int *)(param_14 + 0x5c) = *(int *)(param_14 + 0x5c) + 1;
            iVar34 = 0;
            uVar8 = 0x7f;
          }
        }
        else {
          if (bVar53 < 0x3d) {
            if (bVar53 != 0x3a) goto LAB_000176d0;
            iVar34 = 0;
LAB_000177f4:
            local_a4 = pbVar40 + 3;
            goto LAB_00017804;
          }
          local_a4 = pbVar40 + 3;
          iVar26 = 0;
          iVar34 = 0;
          uVar8 = 0x7d;
          *(int *)(param_14 + 0x5c) = *(int *)(param_14 + 0x5c) + 1;
        }
      }
    }
    else {
      local_a4 = pbVar41;
      if ((local_194 & 0x1000) == 0) {
LAB_000180ec:
        iVar26 = 2;
        iVar34 = 0;
        iVar14 = *(int *)(param_14 + 0x40) + 1;
        uVar8 = 0x85;
        *(int *)(param_14 + 0x40) = iVar14;
        pbVar52[3] = (byte)((uint)iVar14 >> 8);
        pbVar52[4] = (byte)*(undefined4 *)(param_14 + 0x40);
      }
      else {
LAB_000187a0:
        iVar34 = 0;
LAB_00017804:
        iVar26 = 0;
        uVar8 = 0x83;
      }
    }
LAB_00017cd8:
    iVar14 = *(int *)(param_14 + 0x58) + 1;
    *(int *)(param_14 + 0x58) = iVar14;
    if (0xfa < iVar14) {
      iVar31 = 0x52;
      goto LAB_00014ae8;
    }
    if ((uVar8 - 0x7d < 4) && (*(int *)(param_14 + 0x80) != 0)) {
      *(undefined4 *)(param_14 + 0x80) = 0;
      pbVar41 = (byte *)0x0;
    }
    else {
      local_16c = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
      pbVar41 = pbVar52;
    }
    *pbVar52 = (byte)uVar8;
    iVar14 = 0;
    uVar49 = *(uint *)(param_14 + 0x68);
    uVar37 = *(uint *)(param_14 + 0x40);
    local_ac = 0;
    local_a8 = pbVar52;
    iVar26 = FUN_000147c8(uVar44,&local_a8,&local_a4,param_4,uVar8 - 0x7f < 2,iVar34,iVar26,
                          (uint)(uVar8 == 0x87) + param_8,&local_90,&local_88,&local_98,&local_8c,
                          &local_7c,param_14,piVar23);
    pbVar40 = local_a4;
    if (iVar26 == 0) goto LAB_00014af8;
    *(int *)(param_14 + 0x58) = *(int *)(param_14 + 0x58) + -1;
    if (uVar8 == 0x81) {
      if (*(uint *)(param_14 + 0x40) <= uVar37) {
        *pbVar52 = 0x82;
      }
    }
    else if (uVar8 - 0x7d < 4) {
      *(int *)(param_14 + 0x5c) = *(int *)(param_14 + 0x5c) + -1;
    }
    else {
      pbVar40 = pbVar52;
      if (piVar21 == (int *)0x0 && uVar8 == 0x87) {
        do {
          iVar14 = iVar14 + 1;
          pbVar40 = pbVar40 + ((*(ushort *)(pbVar40 + 1) & 0xff) << 8 |
                              (uint)(*(ushort *)(pbVar40 + 1) >> 8));
        } while (*pbVar40 != 0x78);
        if (pbVar52[3] == 0x91) {
          uVar8 = 0x91;
          if (iVar14 != 1) {
            iVar31 = 0x36;
            goto LAB_00014ae8;
          }
        }
        else {
          if (2 < iVar14) {
            iVar31 = 0x1b;
            goto LAB_00014ae8;
          }
          uVar8 = 0x87;
          if (iVar14 == 1) {
            local_8c = 0xffffffff;
            local_88 = 0xffffffff;
          }
        }
      }
    }
    if (*local_a4 != 0x29) {
      iVar31 = 0xe;
      goto LAB_00014ae8;
    }
    if (piVar21 == (int *)0x0) {
      pbVar51 = local_a8;
      if (uVar8 != 0x91) {
        local_150 = 0;
        if (uVar8 < 0x81) {
          if (((uVar8 == 0x7d) && (-1 < (int)local_8c)) && (-1 < (int)local_88)) {
            local_190 = local_8c;
            local_18c = local_98;
          }
          local_178 = local_188;
          local_17c = uVar45;
          local_180 = uVar27;
          local_184 = local_1a4;
        }
        else {
          uVar44 = local_188;
          if (local_1a4 == 0xfffffffe) {
            if ((int)local_88 < 0) {
              local_184 = 0xffffffff;
              local_1a4 = 0xffffffff;
            }
            else {
              local_1a4 = local_88;
              local_150 = 1;
              local_184 = 0xffffffff;
              uVar44 = local_90;
            }
          }
          else {
            if ((-1 < (int)local_88) && ((int)local_8c < 0)) {
              local_98 = local_90;
              local_8c = uVar49 | local_88;
            }
            local_184 = local_1a4;
          }
          if (-1 < (int)local_8c) {
            local_190 = local_8c;
            local_18c = local_98;
          }
          local_178 = local_188;
          local_17c = uVar45;
          local_180 = uVar27;
          local_188 = uVar44;
        }
      }
    }
    else {
      iVar26 = *piVar21;
      if (0x7fffffeb - iVar26 < local_ac + -6) goto LAB_00014b2c;
      pbVar52[3] = 0x78;
      *piVar21 = iVar26 + local_ac + -6;
      pbVar52[1] = 0;
      pbVar52[2] = 3;
      pbVar52[4] = 0;
      pbVar52[5] = 3;
      pbVar51 = pbVar52 + 6;
    }
    goto LAB_00015218;
  }
  if ((local_a4[2] != 0x3a) && ((*(byte *)(*(int *)(param_14 + 0xc) + (uint)local_a4[2]) & 2) == 0))
  goto LAB_0001767c;
  pbVar40 = local_a4 + 2;
  local_a4 = pbVar40;
  while( true ) {
    bVar53 = *(byte *)(*(int *)(param_14 + 0xc) + (uint)*local_a4);
    pbVar41 = (byte *)(bVar53 & 2);
    if ((bVar53 & 2) == 0) break;
    local_a4 = local_a4 + 1;
  }
  sVar29 = (int)local_a4 - (int)pbVar40;
  pbVar51 = pbVar41;
  if (*local_a4 == 0x3a) {
    pbVar51 = local_a4 + 1;
    for (local_a4 = pbVar51; *local_a4 != 0 && *local_a4 != 0x29; local_a4 = local_a4 + 1) {
    }
    pbVar41 = local_a4 + -(int)pbVar51;
    if ((byte *)0xff < pbVar41) {
      iVar31 = 0x4b;
      goto LAB_00014ae8;
    }
  }
  if (*local_a4 != 0x29) {
LAB_00017440:
    iVar31 = 0x3c;
    goto LAB_00014ae8;
  }
  iVar26 = 0;
  iVar34 = DAT_00018180 + 0x17494;
  pcVar48 = (char *)(DAT_00018180 + 0x1793a);
  iVar14 = DAT_00018180 + 0x17aac;
  while( true ) {
    sVar28 = *(size_t *)(iVar26 * 0xc + iVar14);
    if ((sVar29 == sVar28) && (iVar13 = strncmp((char *)pbVar40,pcVar48,sVar29), iVar13 == 0))
    break;
    iVar26 = iVar26 + 1;
    pcVar48 = pcVar48 + sVar28 + 1;
    if (iVar26 == 9) goto LAB_00017440;
  }
  iVar34 = iVar34 + iVar26 * 0xc;
  uVar45 = *(uint *)(iVar34 + 0x61c);
  if (uVar45 == 0x9e) {
    if (pbVar41 != (byte *)0x0) {
LAB_000174fc:
      iVar31 = 0x3b;
      goto LAB_00014ae8;
    }
    piVar43 = *(int **)(param_14 + 0x24);
    *(undefined4 *)(param_14 + 0x6c) = 1;
    for (; piVar43 != (int *)0x0; piVar43 = (int *)*piVar43) {
      if (piVar21 == (int *)0x0) {
        *pbVar52 = 0xa0;
        pbVar40 = pbVar52 + 3;
        pbVar52[1] = (byte)((ushort)*(undefined2 *)(piVar43 + 1) >> 8);
        pbVar52[2] = (byte)*(undefined2 *)(piVar43 + 1);
      }
      else {
        *piVar21 = *piVar21 + 3;
        pbVar40 = pbVar52;
      }
      pbVar52 = pbVar40;
    }
    if (*(int *)(param_14 + 0x5c) < 1) {
      bVar53 = 0x9e;
    }
    else {
      bVar53 = 0x9f;
    }
    *pbVar52 = bVar53;
    if (local_1a4 == 0xfffffffe) {
      local_1a4 = 0xffffffff;
    }
    pbVar41 = (byte *)0x0;
    pbVar51 = pbVar52 + 1;
    goto LAB_00015218;
  }
  if (pbVar41 == (byte *)0x0) {
    if ((int)uVar45 < 0) {
      iVar31 = 0x42;
      goto LAB_00014ae8;
    }
    *pbVar52 = (byte)uVar45;
    pbVar40 = pbVar52;
  }
  else {
    uVar45 = *(uint *)(iVar34 + 0x620);
    if ((int)uVar45 < 0) goto LAB_000174fc;
    pbVar40 = pbVar52 + 2;
    *pbVar52 = (byte)uVar45;
    if (piVar21 == (int *)0x0) {
      pbVar52[1] = (byte)pbVar41;
      pvVar12 = memcpy(pbVar40,pbVar51,(size_t)pbVar41);
      pbVar40 = (byte *)((int)pvVar12 + (int)pbVar41);
    }
    else {
      iVar26 = *piVar21;
      pbVar52[1] = 0;
      *piVar21 = (int)(pbVar41 + iVar26);
    }
    *pbVar40 = 0;
  }
  switch(uVar45 & 0xff) {
  case 0x96:
    break;
  case 0x97:
    break;
  case 0x98:
    break;
  case 0x99:
    break;
  case 0x9a:
    goto LAB_00017640;
  case 0x9b:
LAB_00017640:
    *(uint *)(param_14 + 100) = *(uint *)(param_14 + 100) | 0x1000;
  default:
    goto switchD_000175bc_default;
  }
  *(undefined4 *)(param_14 + 0x70) = 1;
switchD_000175bc_default:
  pbVar41 = (byte *)0x0;
  pbVar51 = pbVar40 + 1;
LAB_00015218:
  local_a4 = local_a4 + 1;
  pbVar52 = pbVar51;
LAB_00015254:
  pbVar51 = pbVar52;
  goto LAB_00014a7c;
  while (uVar27 = uVar27 * 10 + (*local_a4 - 0x30), local_a4 = pbVar40, (int)uVar27 < 0x10000) {
LAB_0001651c:
    pbVar40 = local_a4 + 1;
    if (9 < (*local_a4 - 0x30 & 0xff)) {
      if ((int)uVar45 <= (int)uVar27) goto LAB_000164e8;
      iVar26 = 4;
      pbVar40 = local_a4;
      goto LAB_000164dc;
    }
  }
LAB_000164d8:
  iVar26 = 5;
LAB_000164dc:
  *param_4 = iVar26;
  local_a4 = pbVar40;
  uVar45 = local_10c;
  uVar27 = local_19c;
LAB_000164e8:
  local_19c = uVar27;
  pbVar40 = local_a4;
  if (*param_4 != 0) goto LAB_00014af8;
LAB_000164fc:
  if (pbVar41 == (byte *)0x0) {
LAB_00016504:
    iVar31 = 9;
    goto LAB_00014ae8;
  }
  if (uVar45 == 0) {
    local_188 = local_178;
    local_18c = local_180;
    local_1a4 = local_184;
    local_190 = local_17c;
  }
  if (uVar45 == local_19c) {
    uVar27 = 0;
  }
  else {
    uVar27 = 2;
  }
LAB_000165b0:
  local_a8 = pbVar41;
  pbVar40 = local_a4;
  if ((local_194 & 8) != 0) {
    do {
      pbVar40 = pbVar40 + 1;
LAB_000165c8:
    } while ((*(byte *)(*(int *)(param_14 + 0xc) + (uint)*pbVar40) & 1) != 0);
    if (*pbVar40 != 0x23) {
      local_a4 = pbVar40 + -1;
      goto LAB_000166bc;
    }
    pbVar40 = pbVar40 + 1;
    while (*pbVar40 != 0) {
      pbVar51 = *(byte **)(param_14 + 0x1c);
      if (*(int *)(param_14 + 0x84) == 0) {
        bVar55 = false;
        if ((pbVar40 <= pbVar51 + -*(int *)(param_14 + 0x88)) &&
           (*(byte *)(param_14 + 0x8c) == *pbVar40)) {
          if (*(int *)(param_14 + 0x88) == 1) {
            bVar55 = true;
          }
          else {
            bVar55 = pbVar40[1] == *(byte *)(param_14 + 0x8d);
          }
        }
      }
      else if (pbVar40 < pbVar51) {
        iVar26 = FUN_000326d8(pbVar40,*(int *)(param_14 + 0x84),pbVar51,param_14 + 0x88,uVar25);
        bVar55 = false;
        if (iVar26 != 0) {
          bVar55 = true;
        }
      }
      else {
        bVar55 = false;
      }
      if (bVar55) {
        pbVar40 = pbVar40 + *(int *)(param_14 + 0x88);
        break;
      }
      pbVar40 = pbVar40 + 1;
      pbVar51 = pbVar40;
      if (uVar24 != 0) {
        do {
          pbVar40 = pbVar51;
          pbVar51 = pbVar40 + 1;
        } while ((*pbVar40 & 0xc0) == 0x80);
      }
    }
    goto LAB_000165c8;
  }
LAB_000166bc:
  if (((local_a4[1] == 0x28) && (local_a4[2] == 0x3f)) && (local_a4[3] == 0x23)) {
    for (local_a4 = local_a4 + 4; bVar53 = *local_a4, bVar53 != 0 && bVar53 != 0x29;
        local_a4 = local_a4 + 1) {
    }
    if (bVar53 == 0) {
LAB_00014d6c:
      iVar31 = 0x12;
      goto LAB_00014ae8;
    }
  }
  if (local_a4[1] == 0x2b) {
    local_a4 = local_a4 + 1;
    pbVar54 = (byte *)0x0;
    bVar55 = true;
  }
  else {
    pbVar54 = local_e4;
    if (local_a4[1] == 0x3f) {
      local_a4 = local_a4 + 1;
      pbVar54 = local_e0;
    }
    bVar55 = false;
  }
  if (*pbVar41 == 0x75) {
    *(undefined2 *)(pbVar41 + 3) = *(undefined2 *)pbVar41;
    pbVar41[5] = pbVar41[2];
    *pbVar41 = 0x81;
    pbVar41[2] = 6;
    pbVar41[8] = 6;
    pbVar52 = pbVar52 + 6;
    pbVar41[1] = 0;
    local_ac = 9;
    pbVar41[6] = 0x78;
    pbVar41[7] = 0;
    if (((piVar21 == (int *)0x0) &&
        (uVar44 = *(uint *)(param_14 + 0x20), *(int *)(param_14 + 0x10) + 2U <= uVar44)) &&
       (pbVar40 = (byte *)(uint)CONCAT11(*(undefined1 *)(uVar44 - 2),*(undefined1 *)(uVar44 - 1)),
       pbVar40 == pbVar41 + (1 - *(int *)(param_14 + 0x14)))) {
      pbVar40 = pbVar40 + 3;
      *(char *)(uVar44 - 2) = (char)((uint)pbVar40 >> 8);
      *(char *)(*(int *)(param_14 + 0x20) + -1) = (char)pbVar40;
    }
  }
  uVar44 = (uint)*pbVar41;
  bVar53 = (byte)(uVar45 >> 8);
  cVar6 = (char)pbVar54;
  pbVar51 = pbVar41;
  if (uVar44 - 0x1d < 4) {
    uVar8 = uVar44 - 0x1e & 0xff;
    if (uVar8 < 3) {
      local_14c._0_1_ = *(char *)(DAT_00015824 + uVar8 + 0x16d80);
    }
    else {
      local_14c._0_1_ = '\0';
    }
    uVar8 = (uint)pbVar52[-1];
    if ((uVar24 == 0) || (pbVar40 = pbVar52, (uVar8 & 0xc0) != 0x80)) {
      if (1 < (int)uVar45 && uVar44 < 0x1f) {
        local_190 = local_12c | *(uint *)(param_14 + 0x68);
        local_18c = uVar8;
      }
    }
    else {
      do {
        pbVar40 = pbVar40 + -1;
      } while ((*pbVar40 & 0xc0) == 0x80);
      memcpy(auStack_74,pbVar40,(int)pbVar52 - (int)pbVar40);
      uVar8 = (int)pbVar52 - (int)pbVar40 | 0x10000000;
    }
LAB_0001683c:
    if (uVar44 - 0xf < 2) {
      uVar44 = (uint)pbVar41[1];
      uVar49 = (uint)pbVar41[2];
    }
    else {
      uVar49 = 0xffffffff;
      uVar44 = uVar49;
    }
    if (local_19c != 0) {
      cVar6 = cVar6 + (byte)local_14c;
      bVar4 = (byte)uVar44;
      bVar16 = (byte)uVar49;
      bVar5 = (byte)uVar8;
      if (uVar45 == 0) {
        if (local_19c == 0xffffffff) {
LAB_00016a44:
          bVar53 = cVar6 + 0x21;
        }
        else {
          if (local_19c != 1) {
            *pbVar41 = cVar6 + 0x27;
            pbVar41[1] = (byte)(local_19c >> 8);
            pbVar41[2] = (byte)local_19c;
            pbVar40 = pbVar41 + 3;
            goto LAB_0001689c;
          }
LAB_00016894:
          bVar53 = cVar6 + 0x25;
        }
LAB_00016898:
        pbVar40 = pbVar41 + 1;
        *pbVar41 = bVar53;
      }
      else if (uVar45 == 1) {
        if (local_19c == 0xffffffff) {
          bVar53 = cVar6 + 0x23;
          goto LAB_00016898;
        }
        pbVar51 = pbVar52;
        if (local_19c == 1) goto LAB_00016be0;
        pbVar52[2] = (byte)(local_19c - 1);
        pbVar40 = pbVar52 + 3;
        *pbVar52 = cVar6 + 0x27;
        pbVar52[1] = (byte)(local_19c - 1 >> 8);
      }
      else {
        pbVar41[2] = (byte)uVar45;
        *pbVar41 = (byte)local_14c + 0x29;
        pbVar41[1] = bVar53;
        pbVar40 = pbVar41 + 3;
        if ((int)local_19c < 0) {
          if ((uVar24 == 0) || ((uVar8 & 0x10000000) == 0)) {
            pbVar41[3] = bVar5;
            if (uVar44 == 0xffffffff) {
              pbVar41 = pbVar41 + 4;
            }
            else {
              pbVar41[4] = bVar4;
              pbVar41[5] = bVar16;
              pbVar41 = pbVar41 + 6;
            }
          }
          else {
            pvVar12 = memcpy(pbVar40,auStack_74,uVar8 & 7);
            pbVar41 = (byte *)((int)pvVar12 + (uVar8 & 7));
          }
          goto LAB_00016a44;
        }
        if (local_19c != uVar45) {
          if ((uVar24 == 0) || ((uVar8 & 0x10000000) == 0)) {
            pbVar41[3] = bVar5;
            pbVar40 = pbVar41 + 4;
          }
          else {
            pvVar12 = memcpy(pbVar40,auStack_74,uVar8 & 7);
            pbVar40 = (byte *)((int)pvVar12 + (uVar8 & 7));
          }
          pbVar41 = pbVar40;
          if (uVar44 != 0xffffffff) {
            pbVar41 = pbVar40 + 2;
            *pbVar40 = bVar4;
            pbVar40[1] = bVar16;
          }
          local_19c = local_19c - uVar45;
          if (local_19c == 1) goto LAB_00016894;
          *pbVar41 = cVar6 + 0x27;
          pbVar40 = pbVar41 + 3;
          pbVar41[1] = (byte)(local_19c >> 8);
          pbVar41[2] = (byte)local_19c;
        }
      }
LAB_0001689c:
      if ((uVar24 == 0) || ((uVar8 & 0x10000000) == 0)) {
        pbVar41 = pbVar40 + 1;
        *pbVar40 = bVar5;
      }
      else {
        pvVar12 = memcpy(pbVar40,auStack_74,uVar8 & 7);
        pbVar41 = (byte *)((int)pvVar12 + (uVar8 & 7));
      }
      pbVar51 = pbVar41;
      if (uVar44 != 0xffffffff) {
        pbVar51 = pbVar41 + 2;
        *pbVar41 = bVar4;
        pbVar41[1] = bVar16;
      }
LAB_000168e0:
      if (bVar55) goto LAB_000171c4;
    }
  }
  else {
    if (uVar44 < 0x17) {
      local_14c._0_1_ = '4';
      uVar8 = uVar44;
      goto LAB_0001683c;
    }
    if (uVar44 - 0x6e < 7) {
      if (local_19c != 0) {
        if (uVar45 == 0) {
          if (local_19c == 0xffffffff) {
            bVar53 = cVar6 + 0x62;
          }
          else {
            if (local_19c != 1) goto LAB_00016b64;
            bVar53 = cVar6 + 0x66;
          }
        }
        else {
          if ((uVar45 != 1) || (local_19c != 0xffffffff)) {
LAB_00016b64:
            pbVar52[1] = bVar53;
            pbVar51 = pbVar52 + 5;
            *pbVar52 = cVar6 + 0x68;
            pbVar52[2] = (byte)uVar45;
            if (local_19c == 0xffffffff) {
              local_19c = 0;
            }
            pbVar52[3] = (byte)(local_19c >> 8);
            pbVar52[4] = (byte)local_19c;
            goto LAB_000168e0;
          }
          bVar53 = cVar6 + 100;
        }
        pbVar51 = pbVar52 + 1;
        *pbVar52 = bVar53;
        goto LAB_000168e0;
      }
      goto LAB_00016be0;
    }
    if (10 < uVar44 - 0x7d) {
      pbVar51 = pbVar52;
      if (uVar44 != 0x9d) {
        iVar31 = 0xb;
        goto LAB_00014ae8;
      }
      goto LAB_00016be0;
    }
    sVar29 = (int)pbVar52 - (int)pbVar41;
    iVar26 = local_16c;
    if (uVar44 == 0x87) {
      pbVar51 = pbVar52;
      if (pbVar41[3] != 0x91) goto LAB_00016d14;
      goto LAB_00016be0;
    }
    if (uVar44 < 0x81) {
      pbVar51 = pbVar52;
      if (uVar45 != 0) goto LAB_00016be0;
      if (local_19c < 2) goto LAB_00016c20;
      local_19c = 1;
LAB_00016c2c:
      pbVar51 = pbVar52 + 1;
      *pbVar52 = 0;
      FUN_00011d78(pbVar41,1,uVar25,param_14,local_16c);
      pbVar52 = memmove(pbVar41 + 1,pbVar41,sVar29);
      if (local_19c == 0) {
        *pbVar41 = 0xa1;
        goto LAB_00016be0;
      }
      *pbVar41 = cVar6 + 0x92;
      pbVar46 = (byte *)0x0;
      pbVar40 = pbVar41;
LAB_00016c88:
      local_19c = local_19c - 1;
      pbVar41 = pbVar52;
    }
    else {
LAB_00016d14:
      if (uVar45 == 0) {
LAB_00016c20:
        if ((int)local_19c < 2) goto LAB_00016c2c;
        pbVar40 = (byte *)0x0;
        pbVar51 = pbVar52 + 4;
        *pbVar52 = 0;
        FUN_00011d78(pbVar41,4,uVar25,param_14,local_16c);
        pbVar52 = memmove(pbVar41 + 4,pbVar41,sVar29);
        pbVar46 = pbVar41 + 2;
        *pbVar41 = cVar6 + 0x92;
        pbVar41[1] = 0x83;
        pbVar41[2] = 0;
        pbVar41[3] = 0;
        goto LAB_00016c88;
      }
      if (uVar45 != 1) {
        if (piVar21 == (int *)0x0) {
          iVar14 = 1;
          iVar34 = local_16c;
          if ((local_150 & local_190 >> 0x1f) != 0) {
            local_190 = local_1a4;
            local_18c = local_188;
          }
          do {
            iVar26 = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
            memcpy(pbVar52,pbVar41,sVar29);
            while ((uint)(*(int *)(param_14 + 0x10) +
                         ((*(int *)(param_14 + 0x3c) + -100) - iVar26) + iVar34) <
                   *(uint *)(param_14 + 0x20)) {
              iVar13 = FUN_00012460(param_14);
              *param_4 = iVar13;
              pbVar40 = local_a4;
              if (iVar13 != 0) goto LAB_00014af8;
            }
            for (puVar47 = (ushort *)(*(int *)(param_14 + 0x10) + iVar34);
                puVar47 < (ushort *)(*(int *)(param_14 + 0x10) + iVar26); puVar47 = puVar47 + 1) {
              **(undefined1 **)(param_14 + 0x20) =
                   (char)(sVar29 + ((*puVar47 & 0xff) << 8 | (uint)(*puVar47 >> 8)) >> 8);
              *(char *)(*(int *)(param_14 + 0x20) + 1) = *(char *)((int)puVar47 + 1) + (char)sVar29;
              *(int *)(param_14 + 0x20) = *(int *)(param_14 + 0x20) + 2;
            }
            iVar14 = iVar14 + 1;
            pbVar52 = pbVar52 + sVar29;
            iVar34 = iVar26;
          } while (iVar14 < (int)uVar45);
        }
        else {
          iVar34 = local_ac * (uVar45 - 1);
          lVar3 = (longlong)(int)(uVar45 - 1) * (longlong)local_ac;
          if (((int)(uint)((uint)lVar3 < 0x80000000) <= (int)((ulonglong)lVar3 >> 0x20)) ||
             (0x7fffffeb - *piVar21 < iVar34)) goto LAB_00014b2c;
          *piVar21 = iVar34 + *piVar21;
        }
      }
      pbVar46 = (byte *)0x0;
      pbVar40 = pbVar46;
      pbVar51 = pbVar52;
      if (0 < (int)local_19c) {
        local_19c = local_19c - uVar45;
      }
    }
    if (-1 < (int)local_19c) {
      if (piVar21 == (int *)0x0 || local_19c == 0) {
        uVar44 = local_19c;
        while (uVar44 = uVar44 - 1, uVar44 != 0xffffffff) {
          if (uVar44 == 0) {
            pbVar54 = pbVar46;
          }
          iVar34 = *(int *)(param_14 + 0x20) - *(int *)(param_14 + 0x10);
          *pbVar51 = cVar6 + 0x92;
          if (uVar44 == 0) {
            pbVar52 = pbVar51 + 1;
            pbVar46 = pbVar54;
          }
          else {
            sVar19 = 0;
            if (pbVar46 != (byte *)0x0) {
              sVar19 = (short)(pbVar51 + 2) - (short)pbVar46;
            }
            pbVar51[1] = 0x83;
            pbVar52 = pbVar51 + 4;
            pbVar51[2] = (byte)((ushort)sVar19 >> 8);
            pbVar51[3] = (byte)sVar19;
            pbVar46 = pbVar51 + 2;
          }
          memcpy(pbVar52,pbVar41,sVar29);
          while ((uint)(*(int *)(param_14 + 0x10) +
                       ((*(int *)(param_14 + 0x3c) + -100) - iVar34) + iVar26) <
                 *(uint *)(param_14 + 0x20)) {
            iVar14 = FUN_00012460(param_14);
            *param_4 = iVar14;
            pbVar40 = local_a4;
            if (iVar14 != 0) goto LAB_00014af8;
          }
          puVar47 = (ushort *)(*(int *)(param_14 + 0x10) + iVar26);
          if (uVar44 == 0) {
            iVar26 = 1;
          }
          else {
            iVar26 = 4;
          }
          for (; puVar47 < (ushort *)(*(int *)(param_14 + 0x10) + iVar34); puVar47 = puVar47 + 1) {
            **(undefined1 **)(param_14 + 0x20) =
                 (char)(sVar29 + ((*puVar47 & 0xff) << 8 | (uint)(*puVar47 >> 8)) + iVar26 >> 8);
            *(char *)(*(int *)(param_14 + 0x20) + 1) =
                 (char)iVar26 + (char)sVar29 + *(char *)((int)puVar47 + 1);
            *(int *)(param_14 + 0x20) = *(int *)(param_14 + 0x20) + 2;
          }
          pbVar51 = pbVar52 + sVar29;
          iVar26 = iVar34;
          pbVar54 = pbVar46;
        }
      }
      else {
        lVar3 = (longlong)(int)local_19c * (longlong)(local_ac + 7);
        iVar26 = local_19c * (local_ac + 7) + -6;
        if (((int)(uint)((uint)lVar3 < 0x80000000) <= (int)((ulonglong)lVar3 >> 0x20)) ||
           (0x7fffffeb - *piVar21 < iVar26)) goto LAB_00014b2c;
        *piVar21 = iVar26 + *piVar21;
      }
      while (pbVar46 != (byte *)0x0) {
        pbVar40 = pbVar51 + (1 - (int)pbVar46);
        uVar2 = *(ushort *)(pbVar51 + (1 - (int)pbVar40));
        *pbVar51 = 0x78;
        uVar44 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
        if (uVar44 == 0) {
          pbVar46 = (byte *)0x0;
        }
        else {
          pbVar46 = pbVar46 + -uVar44;
        }
        bVar53 = (byte)((uint)pbVar40 >> 8);
        pbVar51[1] = bVar53;
        pbVar51[2] = (byte)pbVar40;
        pbVar51[1 - (int)pbVar40] = bVar53;
        pbVar51[2 - (int)pbVar40] = (byte)pbVar40;
        pbVar51 = pbVar51 + 3;
      }
      goto LAB_000168e0;
    }
    pbVar41 = pbVar51 + (-3 - (uint)CONCAT11(pbVar51[-2],pbVar51[-1]));
    bVar56 = bVar55;
    if (1 < (byte)(*pbVar41 + 0x7f)) {
      bVar56 = false;
    }
    if (bVar56) {
      *pbVar41 = 0x83;
    }
    bVar53 = *pbVar41;
    if ((byte)(bVar53 + 0x7f) < 2) {
      pbVar51[-3] = cVar6 + 0x79;
      goto LAB_000168e0;
    }
    pbVar52 = pbVar41;
    if (piVar21 == (int *)0x0) {
      do {
        iVar26 = FUN_000116f4(pbVar52,pbVar51 + -3,uVar25,param_14,0);
        if (iVar26 != 0) {
          *pbVar41 = bVar53 + 5;
          goto LAB_00017118;
        }
        pbVar52 = pbVar52 + ((*(ushort *)(pbVar52 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar52 + 1) >> 8));
      } while (*pbVar52 == 0x77);
    }
    if ((bVar53 == 0x87) &&
       (pbVar41[(*(ushort *)(pbVar41 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar41 + 1) >> 8)] !=
        0x77)) {
      *pbVar41 = 0x8c;
    }
LAB_00017118:
    if (!bVar55) {
      pbVar51[-3] = cVar6 + 0x79;
      goto LAB_00016be0;
    }
    bVar53 = *pbVar41;
    if (bVar53 == 0x8c || bVar53 == 0x87) {
      *pbVar51 = 0;
      FUN_00011d78(pbVar41,3,uVar25,param_14,local_16c);
      iVar26 = ((int)pbVar51 - (int)pbVar41) + 3;
      memmove(pbVar41 + 3,pbVar41,(int)pbVar51 - (int)pbVar41);
      if (*pbVar41 == 0x87) {
        bVar53 = 0x84;
      }
      else {
        bVar53 = 0x89;
      }
      *pbVar41 = bVar53;
      pbVar51[3] = 0x7b;
      bVar53 = (byte)((uint)iVar26 >> 8);
      pbVar51[4] = bVar53;
      bVar16 = (byte)iVar26;
      pbVar51[5] = bVar16;
      pbVar41[1] = bVar53;
      pbVar41[2] = bVar16;
      pbVar51 = pbVar51 + 6;
    }
    else {
      *pbVar41 = bVar53 + 1;
      pbVar51[-3] = 0x7b;
    }
    if (pbVar40 != (byte *)0x0) {
      *pbVar40 = 0x94;
    }
    if ((int)uVar45 < 2) goto LAB_00016be0;
LAB_000171c4:
    uVar44 = (uint)*local_a8;
    if (uVar44 == 0x43) {
LAB_000171f0:
      pbVar40 = local_a8 + *(byte *)(*(int *)(iVar31 + DAT_00018178) + uVar44);
      local_a8 = pbVar40;
      if ((uVar24 != 0) && (0xbf < pbVar40[-1])) {
        local_a8 = (byte *)(uint)*(byte *)(*(int *)(iVar31 + DAT_0001817c) + (pbVar40[-1] & 0x3f));
LAB_00017390:
        local_a8 = pbVar40 + (int)local_a8;
LAB_00017394:
      }
    }
    else {
      if (0x43 < uVar44) {
        if (uVar44 < 0x70) {
          if (uVar44 < 0x6e) {
            if (uVar44 == 0x50) goto LAB_000171f0;
            if (uVar44 != 0x5d) goto LAB_000172a0;
            if (local_a8[3] - 0xf < 2) {
              iVar26 = 2;
            }
            else {
              iVar26 = 0;
            }
            pbVar40 = (byte *)((uint)*(byte *)(*(int *)(iVar31 + DAT_00018178) + 0x5d) + iVar26);
            goto LAB_00017390;
          }
          local_a8 = local_a8 + 0x21;
        }
        else {
          if (uVar44 != 0x70) goto LAB_000172a0;
          local_a8 = local_a8 +
                     ((*(ushort *)(local_a8 + 1) & 0xff) << 8 |
                     (uint)(*(ushort *)(local_a8 + 1) >> 8));
        }
        goto LAB_00017394;
      }
      if (uVar44 == 0x29) goto LAB_000171f0;
      if (uVar44 < 0x2a) {
        if (uVar44 - 0x1d < 4) goto LAB_000171f0;
      }
      else if (uVar44 == 0x36) goto LAB_000171f0;
    }
LAB_000172a0:
    sVar29 = (int)pbVar51 - (int)local_a8;
    if (0 < (int)sVar29) {
      if ((*local_a8 < 0x76) && (bVar53 = *(byte *)(iVar9 + (uint)*local_a8 + 0x1500b), bVar53 != 0)
         ) {
        *local_a8 = bVar53;
      }
      else {
        *pbVar51 = 0;
        FUN_00011d78(local_a8,3,uVar25,param_14,local_16c);
        memmove(local_a8 + 3,local_a8,sVar29);
        *local_a8 = 0x81;
        pbVar51[3] = 0x78;
        bVar16 = (byte)(sVar29 + 3);
        bVar53 = (byte)(sVar29 + 3 >> 8);
        pbVar51[4] = bVar53;
        pbVar51[5] = bVar16;
        local_a8[1] = bVar53;
        local_a8[2] = bVar16;
        pbVar51 = pbVar51 + 6;
      }
    }
  }
LAB_00016be0:
  *(uint *)(param_14 + 0x68) = *(uint *)(param_14 + 0x68) | uVar27;
  local_10c = uVar45;
LAB_00014fb0:
  pbVar41 = (byte *)0x0;
  goto LAB_00015218;
LAB_00015ed8:
  uVar27 = 1;
  local_a4 = local_a4 + 2;
LAB_00015e7c:
  bVar53 = *local_a4;
  uVar44 = (uint)bVar53;
  if (uVar44 != 0) {
    uVar8 = uVar27 ^ 1;
    if (uVar44 != 0x5d) {
      uVar8 = 0;
    }
    if (uVar8 == 0) {
      local_88 = uVar44;
      if ((uVar24 != 0) && (0xbf < uVar44)) {
        if ((bVar53 & 0x20) == 0) {
          local_a4 = local_a4 + 1;
          local_88 = (uVar44 & 0x1f) << 6 | *local_a4 & 0x3f;
        }
        else if ((bVar53 & 0x10) == 0) {
          local_88 = (uVar44 & 0xf) << 0xc | local_a4[2] & 0x3f | (local_a4[1] & 0x3f) << 6;
          local_a4 = local_a4 + 2;
        }
        else if ((bVar53 & 8) == 0) {
          local_88 = (uVar44 & 7) << 0x12 | local_a4[3] & 0x3f | (local_a4[1] & 0x3f) << 0xc |
                     (local_a4[2] & 0x3f) << 6;
          local_a4 = local_a4 + 3;
        }
        else {
          pbVar40 = local_a4 + 4;
          if ((bVar53 & 4) == 0) {
            pbVar54 = local_a4 + 1;
            pbVar46 = local_a4 + 2;
            pbVar18 = local_a4 + 3;
            local_a4 = local_a4 + 4;
            local_88 = (uVar44 & 3) << 0x18 | *pbVar40 & 0x3f | (*pbVar54 & 0x3f) << 0x12 |
                       (*pbVar46 & 0x3f) << 0xc | (*pbVar18 & 0x3f) << 6;
          }
          else {
            pbVar54 = local_a4 + 5;
            pbVar46 = local_a4 + 1;
            pbVar18 = local_a4 + 2;
            pbVar1 = local_a4 + 3;
            local_a4 = local_a4 + 5;
            local_88 = (uVar44 & 1) << 0x1e | *pbVar54 & 0x3f | (*pbVar46 & 0x3f) << 0x18 |
                       (*pbVar18 & 0x3f) << 0x12 | (*pbVar1 & 0x3f) << 0xc | (*pbVar40 & 0x3f) << 6;
          }
        }
      }
      if ((uVar27 ^ 1) != 0) {
        if (local_88 == 0x5c) {
          iVar15 = FUN_00012a00(&local_a4,&local_88,param_4,*(undefined4 *)(param_14 + 0x40),
                                local_194,1);
          pbVar40 = local_a4;
          if (*param_4 != 0) goto LAB_00014af8;
          if (iVar15 != 0) {
            if (iVar15 != 5) goto LAB_00016108;
            local_88 = 8;
          }
        }
        else if ((((local_88 == 0x5b) && (uVar44 = local_a4[1] - 0x2e & 0xff, uVar44 < 0x10)) &&
                 ((~(0x9001U >> uVar44) & 1) == 0)) &&
                (iVar15 = FUN_00011cfc(local_a4,&local_a0), iVar15 != 0)) {
LAB_00016108:
          iVar31 = 0x53;
          goto LAB_00014ae8;
        }
      }
      if (local_88 < uVar45) {
        iVar31 = 8;
        goto LAB_00014ae8;
      }
      pbVar40 = local_a4;
      if (uVar45 != local_88) {
        if (local_88 == 10 || local_88 == 0xd) {
          *(uint *)(param_14 + 100) = *(uint *)(param_14 + 100) | 0x800;
        }
        iVar14 = FUN_00012518(local_6c,&local_9c,local_194,param_14,uVar45,local_88);
        iVar15 = iVar13 + iVar14;
        iVar42 = 2;
        goto LAB_000154c0;
      }
    }
  }
LAB_00015d40:
  local_a4 = pbVar40;
  if (iVar14 < 2) {
    iVar14 = iVar14 + 1;
    uVar44 = (local_17c | uVar27) ^ 1;
    if (iVar14 != 1) {
      uVar44 = 0;
    }
    if (uVar44 != 0) {
      if (local_a4[1] == 0x5d) {
        local_a4 = local_a4 + 1;
        if (local_14c == 0) {
          uVar27 = uVar25;
          if (uVar45 < 0x80) {
            uVar27 = 0;
          }
          if (uVar27 != 0) {
            iVar26 = FUN_00032ac4(uVar45,local_4c);
            local_170 = local_14c;
            local_17c = local_190;
            local_180 = local_18c;
            goto LAB_0001623c;
          }
          local_4c[0] = (byte)uVar45;
          local_170 = local_14c;
          local_17c = local_190;
          local_180 = local_18c;
          goto LAB_0001634c;
        }
        if (local_1a4 == 0xfffffffe) {
          local_1a4 = 0xffffffff;
        }
        if (uVar24 == 0) {
          if ((local_194 & 1) == 0) {
            bVar53 = 0x1f;
          }
          else {
            bVar53 = 0x20;
          }
        }
        else if ((local_194 & 1) == 0) {
          bVar53 = 0x1f;
        }
        else {
          uVar27 = uVar45 + 0x7f;
          if (-1 < (int)uVar45) {
            uVar27 = uVar45;
          }
          uVar44 = uVar45 & 0x7f;
          if (-1 < (int)-uVar45) {
            uVar44 = -(-uVar45 & 0x7f);
          }
          uVar27 = (uint)*(byte *)(*(int *)(iVar31 + DAT_00015820) +
                                   (uint)*(ushort *)
                                          (*(int *)(iVar31 + DAT_00015818) +
                                          (uVar44 + (uint)*(byte *)(*(int *)(iVar31 + DAT_0001581c)
                                                                   + ((int)uVar27 >> 7)) * 0x80) * 2
                                          ) * 8 + 3);
          if (uVar27 != 0) {
            pbVar51 = pbVar52 + 3;
            *pbVar52 = 0xf;
            pbVar52[1] = 9;
            goto LAB_00015e2c;
          }
          bVar53 = 0x20;
        }
        *pbVar52 = bVar53;
        uVar27 = uVar25;
        if (uVar45 < 0x80) {
          uVar27 = 0;
        }
        if (uVar27 == 0) {
          pbVar51 = pbVar52 + 2;
          pbVar52[1] = (byte)uVar45;
        }
        else {
          iVar26 = FUN_00032ac4(uVar45,pbVar52 + 1);
          pbVar51 = pbVar52 + 1 + iVar26;
        }
        goto LAB_000161f4;
      }
      iVar14 = 1;
      uVar27 = 0;
    }
  }
  iVar15 = FUN_00012518(local_6c,&local_9c,local_194,param_14,uVar45,uVar45);
  iVar15 = iVar13 + iVar15;
  iVar42 = iVar14;
LAB_000154c0:
  pbVar40 = local_a4;
  local_a4 = local_a4 + 1;
  uVar45 = (uint)pbVar40[1];
  if (uVar45 == 0) {
    if (local_158 == (byte *)0x0) goto LAB_000193d4;
    local_a4 = local_158 + 1;
    uVar45 = (uint)local_158[1];
    if (uVar45 == 0) goto LAB_000193d4;
    local_158 = (byte *)0x0;
  }
  uVar44 = uVar27;
  if (uVar45 != 0x5d) {
    uVar44 = 1;
  }
  iVar13 = iVar15;
  iVar14 = iVar42;
  local_170 = uVar27;
  if (uVar44 == 0) goto code_r0x00015518;
  goto LAB_000153f4;
code_r0x00015518:
  if (pbVar41 < local_9c) {
    if (local_1a4 == 0xfffffffe) {
      local_1a4 = 0xffffffff;
    }
LAB_00015544:
    if ((local_180 == 1 && local_17c == 0) && ((local_194 & 0x20000000) == 0)) goto LAB_000163b4;
    if (((uVar25 & local_180) != 0) && ((local_194 & 0x20000000) == 0 && local_14c == 0)) {
      pbVar40 = local_9c + 1;
      *local_9c = 2;
      local_9c = pbVar40;
      iVar26 = FUN_00032ac4(0x100,pbVar40);
      local_9c = local_9c + iVar26;
      iVar26 = FUN_00032ac4(DAT_0001580c);
      local_9c = local_9c + iVar26;
    }
    pbVar40 = local_9c;
    pbVar51 = local_9c + 1;
    local_9c = pbVar51;
    *pbVar40 = 0;
    *pbVar52 = 0x70;
    bVar53 = (byte)local_14c;
    if (local_17c != 0) {
      bVar53 = (byte)local_14c | 4;
    }
    pbVar52[3] = bVar53;
    if (0 < iVar15) {
      pbVar52[3] = pbVar52[3] | 2;
      memmove(pbVar52 + 0x24,pbVar52 + 4,(int)pbVar51 - (int)(pbVar52 + 4));
      if (((local_17c ^ 1) & local_14c) != 0) {
        iVar26 = 0x20;
        pbVar41 = local_6c;
        do {
          iVar26 = iVar26 + -1;
          *pbVar41 = ~*pbVar41;
          pbVar41 = pbVar41 + 1;
        } while (iVar26 != 0);
      }
      pbVar51 = local_6c;
      pbVar41 = pbVar52 + 4;
      do {
        uVar10 = *(undefined4 *)pbVar51;
        uVar17 = *(undefined4 *)(pbVar51 + 4);
        pbVar51 = pbVar51 + 8;
        *(undefined4 *)pbVar41 = uVar10;
        *(undefined4 *)(pbVar41 + 4) = uVar17;
        pbVar41 = pbVar41 + 8;
      } while (pbVar51 != local_4c);
      pbVar51 = pbVar40 + 0x21;
    }
    uVar27 = (int)pbVar51 - (int)pbVar52;
    pbVar52[1] = (byte)(uVar27 >> 8);
LAB_00015e2c:
    pbVar52[2] = (byte)uVar27;
  }
  else {
    if (local_1a4 == 0xfffffffe) {
      local_1a4 = 0xffffffff;
    }
    if (bVar55) goto LAB_00015544;
LAB_000163b4:
    if (piVar21 != (int *)0x0) {
      *piVar21 = (int)(local_9c + (*piVar21 - (int)pbVar41));
    }
    if (local_14c == local_180) {
      bVar53 = 0x6e;
    }
    else {
      bVar53 = 0x6f;
    }
    *pbVar52 = bVar53;
    if (piVar21 == (int *)0x0) {
      if (local_14c != 0) {
        iVar26 = 0x20;
        pbVar40 = local_6c;
        do {
          iVar26 = iVar26 + -1;
          *pbVar40 = ~*pbVar40;
          pbVar40 = pbVar40 + 1;
        } while (iVar26 != 0);
      }
      pbVar41 = local_6c;
      pbVar40 = pbVar52 + 1;
      do {
        uVar10 = *(undefined4 *)pbVar41;
        uVar17 = *(undefined4 *)(pbVar41 + 4);
        pbVar41 = pbVar41 + 8;
        *(undefined4 *)pbVar40 = uVar10;
        *(undefined4 *)(pbVar40 + 4) = uVar17;
        pbVar40 = pbVar40 + 8;
      } while (pbVar41 != local_4c);
    }
    pbVar51 = pbVar52 + 0x21;
  }
LAB_000161f4:
  local_170 = 0;
  pbVar41 = pbVar52;
  local_184 = local_1a4;
  local_180 = local_18c;
  local_17c = local_190;
  local_178 = local_188;
  goto LAB_00015218;
LAB_00014fbc:
  if (piVar21 != (int *)0x0) {
    if (0x7fffffeb - *piVar21 < (int)pbVar52 - (int)local_134) {
LAB_00014b2c:
      iVar31 = 0x14;
      goto LAB_00014ae8;
    }
    *piVar21 = *piVar21 + ((int)pbVar52 - (int)local_134);
  }
  uVar24 = *(uint *)(param_14 + 0x40);
  if (*(uint *)(param_14 + 0x40) <= local_114) {
    uVar24 = local_114;
  }
  if (param_15 != (int *)0x0) goto LAB_00019180;
  if (*local_148 == 0x77) {
    if ((int)local_138 < 0) {
LAB_00015068:
      if ((int)(~local_1a4 & local_190) < 0) {
        local_190 = local_1a4;
        local_18c = local_188;
      }
    }
    else if (local_138 != local_1a4 || local_118 != local_188) {
      if ((int)local_140 < 0) {
        local_140 = local_138;
        local_13c = local_118;
      }
      local_138 = 0xffffffff;
      goto LAB_00015068;
    }
    if (((local_140 ^ local_190) & 0xfffffffd) == 0 && local_18c == local_13c) {
      local_140 = local_140 | local_190;
      local_13c = local_18c;
    }
    else {
      local_140 = 0xffffffff;
    }
  }
  else {
    local_140 = local_190;
    local_138 = local_1a4;
    local_13c = local_18c;
    local_118 = local_188;
  }
  if (param_5 != 0) {
    *pbVar52 = 0;
    iVar9 = FUN_00011144(local_148,(local_194 & 0xfff) >> 0xb,0,param_14,0);
    if (iVar9 == -3) {
      *(undefined4 *)(param_14 + 0x74) = 1;
    }
    else {
      if (iVar9 < 0) {
        if (iVar9 == -2) {
          iVar31 = 0x24;
        }
        else if (iVar9 == -4) {
          iVar31 = 0x46;
        }
        else {
          iVar31 = 0x19;
        }
        *param_4 = iVar31;
        *param_3 = (int)pbVar40;
        goto LAB_00015150;
      }
      if (*(int *)(param_14 + 0x48) < iVar9) {
        *(int *)(param_14 + 0x48) = iVar9;
      }
      *local_124 = (byte)((uint)iVar9 >> 8);
      local_124[1] = (byte)iVar9;
    }
  }
LAB_00019180:
  if (*pbVar40 != 0x7c) goto code_r0x00019190;
  if (param_15 == (int *)0x0) {
    *pbVar52 = 0x77;
    pbVar52[2] = (byte)((int)pbVar52 - (int)local_148);
    local_15c = pbVar52 + 3;
    pbVar52[1] = (byte)((uint)((int)pbVar52 - (int)local_148) >> 8);
    local_78 = pbVar52;
  }
  else {
    local_15c = (byte *)(*param_2 + param_7 + 3);
    local_b0 = local_b0 + 3;
    pbVar52 = local_148;
  }
  pbVar40 = pbVar40 + 1;
  local_148 = pbVar52;
  local_114 = uVar24;
  goto LAB_0001496c;
code_r0x00019190:
  if (param_15 == (int *)0x0) {
    uVar20 = (int)pbVar52 - (int)local_148;
    do {
      uVar25 = (*(ushort *)(local_148 + 1) & 0xff) << 8 | (uint)(*(ushort *)(local_148 + 1) >> 8);
      local_148[2] = (byte)uVar20;
      local_148[1] = (byte)(uVar20 >> 8);
      uVar20 = uVar25;
      local_148 = local_148 + -uVar25;
    } while (uVar25 != 0);
  }
  *pbVar52 = 0x78;
  pbVar41 = pbVar52 + 3;
  pbVar52[2] = (byte)((int)pbVar52 - (int)__src);
  pbVar52[1] = (byte)((uint)((int)pbVar52 - (int)__src) >> 8);
  if (uVar30 != 0) {
    if (*(short *)(*(int *)(param_14 + 0x24) + 6) != 0) {
      pbVar52[3] = 0;
      FUN_00011d78(__src,3,(local_194 & 0xfff) >> 0xb,param_14,iVar7 - iVar33);
      sVar29 = (int)pbVar41 - (int)__src;
      pbVar41 = pbVar52 + 9;
      memmove(__src + 3,__src,sVar29);
      *__src = 0x81;
      bVar16 = (byte)(pbVar52 + (6 - (int)__src));
      __src[2] = bVar16;
      bVar53 = (byte)((uint)(pbVar52 + (6 - (int)__src)) >> 8);
      __src[1] = bVar53;
      pbVar52[8] = bVar16;
      pbVar52[6] = 0x78;
      pbVar52[7] = bVar53;
      local_b0 = local_b0 + 6;
    }
    *(undefined4 *)(param_14 + 0x24) = **(undefined4 **)(param_14 + 0x24);
  }
  *(uint *)(param_14 + 0x40) = uVar24;
  *param_2 = (int)pbVar41;
  *param_3 = (int)pbVar40;
  *param_9 = local_118;
  *param_10 = local_138;
  *param_11 = local_13c;
  *param_12 = local_140;
  if (param_15 != (int *)0x0) {
    if (0x7fffffeb - *param_15 < local_b0) {
      pbVar40 = (byte *)0x14;
      param_3 = param_4;
      goto LAB_00014af8;
    }
    *param_15 = *param_15 + local_b0;
  }
  uVar10 = 1;
  goto LAB_00015154;
LAB_0001848c:
  for (; *local_a4 - 0x30 < 10; local_a4 = local_a4 + 1) {
  }
  goto LAB_000179a4;
LAB_00017bc4:
  if (iVar14 <= iVar34 + iVar13) goto LAB_00017bd8;
  local_174 = (ushort *)((int)local_174 + *(int *)(param_14 + 0x34));
  iVar15 = strncmp((char *)pbVar40,(char *)(local_174 + 1),sVar29);
  if ((iVar15 != 0) || (*(char *)((int)local_174 + sVar29 + 2) != '\0')) goto LAB_00017bd8;
  iVar13 = iVar13 + 1;
  goto LAB_00017bc4;
LAB_00017bd8:
  if (iVar13 == 1) {
    pbVar52[4] = (byte)uVar2;
    pbVar52[5] = (byte)(uVar2 >> 8);
  }
  else {
    iVar26 = iVar26 + 2;
    pbVar52[7] = (byte)iVar13;
    pbVar52[4] = (byte)((uint)iVar34 >> 8);
    pbVar52[5] = (byte)iVar34;
    pbVar52[6] = (byte)((uint)iVar13 >> 8);
    pbVar52[3] = pbVar52[3] + 1;
  }
LAB_00017c20:
  iVar34 = 0;
  uVar8 = 0x87;
  goto LAB_00017cd8;
code_r0x0001868c:
  piVar43 = (int *)*piVar43;
  if (piVar43 == (int *)0x0) {
LAB_00018698:
    iVar31 = 0x28;
    goto LAB_00014ae8;
  }
  goto LAB_00018664;
LAB_00017990:
  for (; *local_a4 - 0x30 < 10; local_a4 = local_a4 + 1) {
  }
LAB_000179a4:
  iVar31 = 0x3d;
LAB_00014ae8:
  *param_4 = iVar31;
  pbVar40 = local_a4;
LAB_00014af8:
  *param_3 = (int)pbVar40;
LAB_00015150:
  uVar10 = 0;
LAB_00015154:
  if (local_2c != *piVar32) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}



/* ===== pcre_compile2 @ 000196c0 size=4324 ===== */

void pcre_compile2(char *param_1,uint param_2,uint *param_3,undefined4 *param_4,int *param_5,
                  int param_6)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  byte bVar14;
  char *pcVar15;
  char *pcVar16;
  char *__s2;
  char *__s2_00;
  char *__s2_01;
  char *__s2_02;
  char *__s2_03;
  char *__s2_04;
  uint uVar17;
  void *__s1;
  undefined4 uVar18;
  int iVar19;
  char *__s1_00;
  uint uVar20;
  byte *pbVar21;
  undefined4 *puVar22;
  int iVar23;
  void *__s2_05;
  uint uVar24;
  undefined4 *puVar25;
  undefined1 *__src;
  byte *pbVar26;
  int iVar27;
  uint local_1248;
  int local_11f0;
  uint local_11ec;
  uint local_11e8;
  uint local_11e4;
  uint local_11e0;
  uint local_11dc;
  byte *local_11d8;
  char *local_11d4;
  undefined4 local_11d0;
  undefined1 auStack_11cc [4];
  uint local_11c8;
  int local_11ac;
  int local_11a8;
  int local_11a4;
  int local_11a0;
  byte *local_119c;
  byte *local_1198;
  char *local_1194;
  char *local_1190;
  byte *local_118c;
  uint local_1188;
  undefined4 *local_1184;
  undefined4 *local_1180;
  uint local_117c;
  uint local_1178;
  int local_1174;
  int local_1170;
  uint local_116c;
  uint local_1168;
  uint local_1164;
  undefined4 local_1160;
  undefined4 local_115c;
  undefined4 local_1158;
  uint local_1154;
  uint local_1150;
  uint local_114c;
  uint local_1148;
  uint local_1144;
  uint local_1140;
  uint local_113c;
  uint local_1138;
  undefined4 local_1134;
  undefined4 local_1130;
  uint local_112c;
  undefined4 local_1128;
  undefined4 local_1124;
  undefined2 local_1120;
  undefined4 local_111c [60];
  byte local_102c [4096];
  int local_2c;
  
  iVar27 = DAT_0001a650 + 0x196e8;
  local_1184 = local_111c;
  piVar9 = *(int **)(iVar27 + DAT_0001a654);
  local_2c = *piVar9;
  local_1174 = 0x14;
  local_11f0 = 1;
  local_11dc = 0;
  local_11d4 = param_1;
  if (param_4 == (undefined4 *)0x0) {
    if (param_3 != (uint *)0x0) {
      *param_3 = 99;
    }
  }
  else {
    *param_4 = 0;
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    if (param_5 == (int *)0x0) {
      local_11dc = 0x10;
      goto LAB_00019910;
    }
    *param_5 = 0;
    uVar17 = DAT_0001a670;
    if (param_6 == 0) {
      param_6 = *(int *)(iVar27 + DAT_0001a658);
    }
    local_11a8 = param_6 + 0x100;
    local_11a4 = param_6 + 0x200;
    local_11a0 = param_6 + 0x340;
    local_11ac = param_6;
    if ((DAT_0001a65c & param_2) != 0) {
      local_11dc = 0x11;
      goto LAB_00019bfc;
    }
    uVar11 = param_2 & 0x1ffff;
    pcVar15 = (char *)(DAT_0001a660 + 0x19820);
    iVar23 = **(int **)(iVar27 + DAT_0001a664);
    pcVar16 = (char *)(DAT_0001a668 + 0x19834);
    __s2 = (char *)(DAT_0001a66c + 0x19844);
    local_1248 = 0xffffffff;
    __s2_00 = (char *)(DAT_0001a674 + 0x19854);
    __s2_01 = (char *)(DAT_0001a678 + 0x19860);
    __s2_02 = (char *)(DAT_0001a67c + 0x1986c);
    __s2_03 = (char *)(DAT_0001a680 + 0x19878);
    __s2_04 = (char *)(DAT_0001a684 + 0x19884);
    local_1148 = 0;
    uVar20 = 0xffffffff;
    iVar6 = 0;
    while ((uVar24 = local_1248, param_1[iVar6] == '(' && ((param_1 + iVar6)[1] == '*'))) {
      __s1_00 = param_1 + iVar6 + 2;
      iVar19 = strncmp(__s1_00,pcVar15,5);
      if (iVar19 == 0) {
        iVar6 = iVar6 + 7;
LAB_0001998c:
        param_2 = param_2 | 0x800;
      }
      else {
        iVar19 = strncmp(__s1_00,pcVar16,4);
        if (iVar19 == 0) {
          iVar6 = iVar6 + 6;
          goto LAB_0001998c;
        }
        iVar19 = strncmp(__s1_00,__s2,4);
        if (iVar19 == 0) {
          param_2 = param_2 | 0x20000000;
          iVar6 = iVar6 + 6;
        }
        else {
          iVar19 = strncmp(__s1_00,__s2_00,0x10);
          if (iVar19 == 0) {
            param_2 = param_2 | 0x20000;
            iVar6 = iVar6 + 0x12;
          }
          else {
            iVar19 = strncmp(__s1_00,__s2_01,0xd);
            if (iVar19 == 0) {
              param_2 = param_2 | 0x4000000;
              iVar6 = iVar6 + 0xf;
            }
            else {
              iVar19 = strncmp(__s1_00,__s2_02,0xc);
              if (iVar19 == 0) {
                iVar19 = iVar6 + 0xe;
                uVar3 = 0;
                while( true ) {
                  uVar7 = (uint)(byte)param_1[iVar19];
                  iVar19 = iVar19 + 1;
                  uVar10 = ((*(ushort *)(iVar23 + uVar7 * 2) ^ 8) & 0xf) >> 3;
                  if (uVar17 < uVar3) {
                    uVar10 = 1;
                  }
                  if (uVar10 != 0) break;
                  uVar3 = (uVar3 * 10 + uVar7) - 0x30;
                }
                if (uVar7 != 0x29) break;
                iVar6 = iVar19;
                if (uVar3 < local_1248) {
                  local_1148 = local_1148 | 0x2000;
                  local_1248 = uVar3;
                }
              }
              else {
                iVar19 = strncmp(__s1_00,__s2_03,0x10);
                if (iVar19 == 0) {
                  iVar19 = iVar6 + 0x12;
                  uVar3 = 0;
                  while( true ) {
                    uVar7 = (uint)(byte)param_1[iVar19];
                    iVar19 = iVar19 + 1;
                    uVar10 = ((*(ushort *)(iVar23 + uVar7 * 2) ^ 8) & 0xf) >> 3;
                    if (uVar17 < uVar3) {
                      uVar10 = 1;
                    }
                    if (uVar10 != 0) break;
                    uVar3 = (uVar3 * 10 + uVar7) - 0x30;
                  }
                  if (uVar7 != 0x29) break;
                  iVar6 = iVar19;
                  if (uVar3 < uVar20) {
                    local_1148 = local_1148 | 0x4000;
                    uVar20 = uVar3;
                  }
                }
                else {
                  iVar19 = strncmp(__s1_00,__s2_04,3);
                  if (iVar19 == 0) {
                    iVar6 = iVar6 + 5;
                    uVar24 = 0x100000;
LAB_0001a7f8:
                    param_2 = param_2 & 0xff8fffff;
                  }
                  else {
                    iVar19 = strncmp(__s1_00,(char *)(DAT_0001a68c + 0x19a68),3);
                    if (iVar19 == 0) {
                      iVar6 = iVar6 + 5;
                      uVar24 = 0x200000;
                      goto LAB_0001a7f8;
                    }
                    iVar19 = strncmp(__s1_00,(char *)(DAT_0001a690 + 0x19a8c),5);
                    if (iVar19 == 0) {
                      iVar6 = iVar6 + 7;
                      uVar24 = 0x300000;
                      goto LAB_0001a7f8;
                    }
                    iVar19 = strncmp(__s1_00,(char *)(DAT_0001a694 + 0x19ab0),4);
                    if (iVar19 == 0) {
                      iVar6 = iVar6 + 6;
                      uVar24 = 0x400000;
                      goto LAB_0001a7f8;
                    }
                    iVar19 = strncmp(__s1_00,(char *)(DAT_0001a698 + 0x19ad4),8);
                    if (iVar19 == 0) {
                      iVar6 = iVar6 + 10;
                      uVar24 = 0x500000;
                      goto LAB_0001a7f8;
                    }
                    iVar19 = strncmp(__s1_00,(char *)(DAT_0001a69c + 0x19af8),0xc);
                    if (iVar19 == 0) {
                      uVar24 = 0x800000;
                    }
                    else {
                      iVar19 = strncmp(__s1_00,(char *)(DAT_0001a6a0 + 0x19b1c),0xc);
                      if (iVar19 != 0) break;
                      uVar24 = 0x1000000;
                    }
                    iVar6 = iVar6 + 0xe;
                    param_2 = param_2 & 0xfe7fffff;
                  }
                  param_2 = param_2 | uVar24;
                }
              }
            }
          }
        }
      }
    }
    uVar17 = (param_2 & 0xfff) >> 0xb;
    if ((uVar11 >> 0x10 & (param_2 & 0xfff) >> 0xb) == 0) {
      if ((((param_2 & 0x800) == 0) || ((param_2 & 0x2000) != 0)) ||
         (local_11dc = FUN_00034404(param_1,0xffffffff,param_5), local_11dc == 0)) {
        if ((param_2 & 0x1800000) == 0x1800000) {
LAB_00019bf4:
          local_11dc = 0x38;
          goto LAB_00019bfc;
        }
        uVar11 = param_2 & 0x700000;
        if (uVar11 == 0x200000) {
LAB_00019e2c:
          uVar8 = 10;
LAB_00019c68:
          local_1128 = 0;
          local_1120 = CONCAT11(local_1120._1_1_,uVar8);
          local_1124 = 1;
        }
        else {
          if (uVar11 < 0x200001) {
            if (uVar11 == 0) goto LAB_00019e2c;
            if (uVar11 != 0x100000) goto LAB_00019bf4;
            uVar8 = 0xd;
            goto LAB_00019c68;
          }
          if (uVar11 == 0x400000) {
            local_1128 = 1;
          }
          else if (uVar11 == 0x500000) {
            local_1128 = 2;
          }
          else {
            if (uVar11 != 0x300000) goto LAB_00019bf4;
            local_1128 = 0;
            local_1124 = 2;
            local_1120 = 0xa0d;
          }
        }
        local_1170 = 0x1000;
        local_1160 = 0;
        local_115c = 0;
        local_1168 = 0;
        local_116c = 0;
        local_117c = 0;
        local_1178 = 0;
        local_1180 = (undefined4 *)0x0;
        local_1134 = 0;
        local_1130 = 0;
        local_1158 = 0;
        local_112c = 0;
        local_119c = local_102c;
        local_1198 = local_102c;
        local_1194 = param_1;
        local_118c = local_102c;
        sVar4 = strlen(param_1);
        local_1190 = param_1 + sVar4;
        local_11d4 = local_11d4 + iVar6;
        local_102c[0] = 0x83;
        local_1144 = 0;
        local_1154 = 0;
        local_1150 = 0;
        local_1164 = 0;
        local_1188 = 0;
        local_11d8 = local_102c;
        local_114c = param_2;
        FUN_000147c8(param_2,&local_11d8,&local_11d4,&local_11dc,0,0,0,0,&local_11e4,&local_11ec,
                     &local_11e0,&local_11e8,0,&local_11ac,&local_11f0);
        uVar11 = local_11dc;
        if (local_11dc == 0) {
          if (local_11f0 < 0x10001) {
            iVar23 = local_1178 * local_117c + local_11f0 + 0x38;
            puVar22 = (undefined4 *)(*(code *)**(undefined4 **)(iVar27 + DAT_0001a6a4))(iVar23);
            if (puVar22 == (undefined4 *)0x0) {
              local_11dc = 0x15;
            }
            else {
              *puVar22 = DAT_0001a6a8;
              puVar22[1] = iVar23;
              puVar22[2] = local_114c;
              puVar22[5] = uVar20;
              puVar22[3] = local_1148;
              local_1248 = local_117c;
              puVar22[4] = uVar24;
              *(undefined2 *)((int)puVar22 + 0x22) = 0x38;
              *(short *)((int)puVar22 + 0x26) = (short)local_117c;
              iVar23 = DAT_0001a658;
              *(short *)(puVar22 + 9) = (short)local_1178;
              puVar22[6] = 0;
              *(undefined2 *)(puVar22 + 10) = 0;
              iVar23 = *(int *)(iVar27 + iVar23);
              *(undefined2 *)((int)puVar22 + 0x2a) = 0;
              if (param_6 == iVar23) {
                param_6 = 0;
              }
              puVar22[0xb] = 0;
              puVar22[0xc] = param_6;
              puVar22[0xd] = 0;
              local_1168 = local_116c;
              puVar12 = puVar22 + 0xe;
              local_1154 = uVar11;
              iVar23 = (local_1178 & 0xffff) * (local_117c & 0xffff);
              local_1150 = uVar11;
              local_116c = uVar11;
              local_1164 = uVar11;
              local_112c = uVar11;
              pbVar26 = (byte *)((int)puVar22 + iVar23 + 0x38);
              local_118c = local_119c;
              local_1144 = uVar11;
              local_1140 = uVar11;
              local_113c = uVar11;
              local_1138 = uVar11;
              local_1188 = uVar11;
              local_1198 = pbVar26;
              local_1180 = puVar12;
              if (0 < (int)local_117c) {
                local_117c = uVar11;
                puVar25 = local_1184;
                do {
                  uVar20 = local_1178;
                  uVar11 = local_117c;
                  __s1 = (void *)*puVar25;
                  sVar4 = puVar25[1];
                  __s2_05 = (void *)((int)local_1180 + 2);
                  uVar18 = puVar25[2];
                  for (iVar19 = 0; __src = (undefined1 *)((int)__s2_05 + -2), iVar19 < (int)uVar11;
                      iVar19 = iVar19 + 1) {
                    iVar5 = memcmp(__s1,__s2_05,sVar4);
                    if (iVar5 == 0) {
                      if (*(char *)((int)__s2_05 + sVar4) != '\0') {
LAB_00019fa4:
                        memmove(__src + uVar20,__src,uVar20 * (uVar11 - iVar19));
                        break;
                      }
                    }
                    else if (iVar5 < 0) goto LAB_00019fa4;
                    __s2_05 = (void *)((int)__s2_05 + uVar20);
                  }
                  *__src = (char)((uint)uVar18 >> 8);
                  *(char *)((int)__s2_05 + -1) = (char)uVar18;
                  memcpy(__s2_05,__s1,sVar4);
                  __src[sVar4 + 2] = 0;
                  local_117c = local_117c + 1;
                  local_1248 = local_1248 - 1;
                  puVar25 = puVar25 + 3;
                } while (local_1248 != 0);
                if (0x14 < local_1174) {
                  (*(code *)**(undefined4 **)(iVar27 + DAT_0001a6b4))(local_1184);
                }
                local_1174 = 0;
              }
              *(undefined1 *)((int)puVar12 + iVar23) = 0x83;
              local_11d8 = pbVar26;
              local_11d4 = param_1 + iVar6;
              FUN_000147c8(puVar22[2],&local_11d8,&local_11d4,&local_11dc,0,0,0,0,&local_11e4,
                           &local_11ec,&local_11e0,&local_11e8,0,&local_11ac,0);
              *(short *)((int)puVar22 + 0x1e) = (short)local_116c;
              *(short *)(puVar22 + 8) = (short)local_1160;
              *(short *)(puVar22 + 7) = (short)local_1164;
              puVar22[3] = local_1148 | 1;
              if (local_1140 != 0) {
                local_11e0 = 0;
                local_11e8 = 0xffffffff;
              }
              if ((local_11dc == 0) && (*local_11d4 != '\0')) {
                local_11dc = 0x16;
              }
              pbVar13 = local_11d8 + 1;
              *local_11d8 = 0;
              if (local_11f0 < (int)pbVar13 - (int)pbVar26) {
                local_11dc = 0x17;
              }
              local_11d8 = pbVar13;
              if (local_119c < local_118c) {
                iVar6 = 0;
                uVar11 = 0xffffffff;
                while( true ) {
                  if ((local_11dc != 0) || (local_118c <= local_119c)) goto LAB_0001a144;
                  pbVar13 = local_118c + -2;
                  uVar20 = (uint)CONCAT11(local_118c[-2],local_118c[-1]);
                  local_118c = pbVar13;
                  if ((uVar20 == 0) || ((pbVar26 + uVar20)[-1] != 0x75)) break;
                  uVar24 = (uint)CONCAT11(pbVar26[uVar20],pbVar26[uVar20 + 1]);
                  if (uVar11 != uVar24) {
                    iVar6 = FUN_00014644(pbVar26,uVar17,uVar24);
                  }
                  uVar11 = uVar24;
                  if (iVar6 == 0) {
                    local_11dc = 0x35;
                  }
                  else {
                    pbVar26[uVar20] = (byte)((uint)(iVar6 - (int)pbVar26) >> 8);
                    pbVar26[uVar20 + 1] = (byte)(iVar6 - (int)pbVar26);
                  }
                }
                local_11dc = 10;
              }
LAB_0001a144:
              if (0x1000 < local_1170) {
                (*(code *)**(undefined4 **)(iVar27 + DAT_0001a6b4))(local_119c);
              }
              local_119c = (byte *)0x0;
              if (local_11dc == 0) {
                if (*(ushort *)(puVar22 + 8) <= *(ushort *)((int)puVar22 + 0x1e)) {
                  if ((param_2 & 0x20000) == 0) {
                    pbVar13 = pbVar26;
                    while (uVar11 = (uint)*pbVar13, uVar11 < 0xa2) {
                      if (0x40 < uVar11 - 0x21) {
                        if (2 < uVar11 - 0x6e) goto LAB_0001a354;
                        if (uVar11 == 0x70) {
                          pbVar21 = pbVar13 + ((*(ushort *)(pbVar13 + 1) & 0xff) << 8 |
                                              (uint)(*(ushort *)(pbVar13 + 1) >> 8));
                        }
                        else {
                          pbVar21 = pbVar13 + 0x21;
                        }
                        uVar11 = (uint)*pbVar21;
                        if (7 < uVar11 - 0x62) goto switchD_0001a25c_default;
                        uVar18 = FUN_0001324c(pbVar13,uVar17,local_11a8,auStack_11cc);
                        local_11c8 = ~uVar11 & 1;
                        local_11d0 = 999;
                        iVar6 = FUN_00013914(uVar18,uVar17,&local_11ac,auStack_11cc,uVar18,
                                             &local_11d0);
                        if (iVar6 == 0) goto switchD_0001a25c_default;
                        switch(uVar11) {
                        case 100:
                          break;
                        case 0x65:
                          break;
                        case 0x66:
                          goto LAB_0001a4a0;
                        case 0x67:
LAB_0001a4a0:
                          bVar14 = 0x6c;
                          goto LAB_0001a490;
                        case 0x68:
                          goto LAB_0001a4a8;
                        case 0x69:
LAB_0001a4a8:
                          bVar14 = 0x6d;
                          goto LAB_0001a490;
                        default:
                          bVar14 = 0x6a;
                          goto LAB_0001a490;
                        }
                        bVar14 = 0x6b;
LAB_0001a490:
                        *pbVar21 = bVar14;
                        goto switchD_0001a25c_default;
                      }
                      iVar6 = FUN_00013204(uVar11);
                      uVar11 = (uVar11 + 0x21) - iVar6;
                      uVar20 = uVar11 & 0xff;
                      uVar11 = uVar11 & 0xfd;
                      if (uVar20 < 0x29) {
                        iVar6 = FUN_0001324c(pbVar13,uVar17,local_11a8,auStack_11cc);
                        if (uVar11 != 0x21) goto LAB_0001a204;
                        local_11c8 = 1;
                      }
                      else {
                        iVar6 = 0;
LAB_0001a204:
                        local_11c8 = (uint)(uVar11 == 0x25);
                      }
                      if (iVar6 == 0) {
                        local_11d0 = 1000;
                        goto switchD_0001a25c_default;
                      }
                      local_11d0 = 999;
                      iVar6 = FUN_00013914(iVar6,uVar17,&local_11ac,auStack_11cc,iVar6,&local_11d0);
                      if (iVar6 == 0) goto switchD_0001a25c_default;
                      bVar14 = *pbVar13;
                      switch(uVar20) {
                      case 0x21:
                        bVar14 = bVar14 + 9;
                        break;
                      case 0x22:
                        goto LAB_0001a3c8;
                      case 0x23:
LAB_0001a3c8:
                        bVar14 = bVar14 + 8;
                        break;
                      case 0x24:
                        goto LAB_0001a3d0;
                      case 0x25:
LAB_0001a3d0:
                        bVar14 = bVar14 + 7;
                        break;
                      case 0x26:
                        goto LAB_0001a3d8;
                      case 0x27:
LAB_0001a3d8:
                        bVar14 = bVar14 + 6;
                        break;
                      case 0x28:
                        bVar14 = bVar14 + 5;
                        break;
                      default:
                        goto switchD_0001a25c_default;
                      }
                      *pbVar13 = bVar14;
switchD_0001a25c_default:
                      uVar11 = (uint)*pbVar13;
LAB_0001a354:
                      if (uVar11 < 0x61) {
                        if (uVar11 < 0x5e) {
                          if (uVar11 < 0x5b) {
                            if (0x54 < uVar11) goto LAB_0001a4fc;
                            if (uVar11 != 0) goto LAB_0001a37c;
                            break;
                          }
LAB_0001a510:
                          bVar14 = pbVar13[3];
                        }
                        else {
LAB_0001a4fc:
                          bVar14 = pbVar13[1];
                        }
                        if (bVar14 - 0xf < 2) {
                          pbVar13 = pbVar13 + 2;
                        }
                      }
                      else if (uVar11 == 0x95) {
LAB_0001a4f0:
                        pbVar13 = pbVar13 + pbVar13[1];
                      }
                      else if (uVar11 < 0x96) {
                        if (uVar11 == 0x61) goto LAB_0001a510;
                        if (uVar11 == 0x70) {
                          pbVar13 = pbVar13 + ((*(ushort *)(pbVar13 + 1) & 0xff) << 8 |
                                              (uint)(*(ushort *)(pbVar13 + 1) >> 8));
                        }
                      }
                      else if (((uVar11 == 0x99) || (uVar11 == 0x9b)) || (uVar11 == 0x97))
                      goto LAB_0001a4f0;
LAB_0001a37c:
                      pbVar13 = pbVar13 + *(byte *)(*(int *)(iVar27 + DAT_0001a6ac) + uVar11);
                      if ((((param_2 & 0x800) != 0) && (uVar11 - 0x1d < 0x38)) &&
                         (0xbf < pbVar13[-1])) {
                        pbVar13 = pbVar13 + *(byte *)(*(int *)(iVar27 + DAT_0001a6b0) +
                                                     (pbVar13[-1] & 0x3f));
                      }
                    }
                    if (local_11dc != 0) goto LAB_0001a72c;
                  }
                  pbVar13 = pbVar26;
                  if (local_1138 != 0) {
                    while (iVar6 = FUN_00014644(pbVar13,uVar17,0xffffffff), iVar6 != 0) {
                      uVar2 = *(ushort *)(iVar6 + 1);
                      if ((uVar2 & 0xff) == 0 && uVar2 >> 8 == 0) {
                        iVar23 = CONCAT11(*(undefined1 *)(iVar6 + -2),*(undefined1 *)(iVar6 + -1)) -
                                 3;
                        uVar8 = *(undefined1 *)(iVar6 + iVar23);
                        *(char *)(iVar6 + iVar23) = (char)(uVar2 >> 8);
                        uVar11 = FUN_00011144(iVar6,(puVar22[2] & 0xfff) >> 0xb,1,&local_11ac,0);
                        *(undefined1 *)(iVar6 + iVar23) = uVar8;
                        if ((int)uVar11 < 0) {
                          if (uVar11 == 0xfffffffe) {
                            local_11dc = 0x24;
                          }
                          else if (uVar11 == 0xfffffffc) {
                            local_11dc = 0x46;
                          }
                          else {
                            local_11dc = 0x19;
                          }
                          goto LAB_0001a72c;
                        }
                        if ((int)local_1164 < (int)uVar11) {
                          local_1164 = uVar11;
                        }
                        *(char *)(iVar6 + 1) = (char)(uVar11 >> 8);
                        *(char *)(iVar6 + 2) = (char)uVar11;
                      }
                      pbVar13 = (byte *)(iVar6 + 3);
                    }
                    if (local_11dc != 0) goto LAB_0001a72c;
                  }
                  uVar11 = puVar22[2];
                  if ((uVar11 & 0x10) == 0) {
                    iVar27 = FUN_00011f1c(pbVar26,0,&local_11ac);
                    if (iVar27 == 0) {
                      if ((int)local_11ec < 0) {
                        local_11e4 = FUN_000122a0(pbVar26,&local_11ec);
                      }
                      if ((int)local_11ec < 0) {
                        iVar27 = FUN_000120a4(pbVar26,0,&local_11ac,0,0);
                        if (iVar27 == 0) goto LAB_0001a5c8;
                        uVar11 = puVar22[3] | 0x100;
                      }
                      else {
                        *(ushort *)(puVar22 + 6) = (ushort)(byte)local_11e4;
                        if (((local_11ec & 1) != 0) &&
                           ((uint)*(byte *)(local_11a8 + (local_11e4 & 0xff)) != (local_11e4 & 0xff)
                           )) {
                          puVar22[3] = puVar22[3] | 0x20;
                        }
                        uVar11 = puVar22[3] | 0x10;
                      }
                      puVar22[3] = uVar11;
                    }
                    else {
                      puVar22[2] = uVar11 | 0x10;
                    }
                  }
LAB_0001a5c8:
                  pbVar13 = local_11d8;
                  if ((-1 < (int)local_11e8) &&
                     (((puVar22[2] & 0x10) == 0 || ((local_11e8 & 2) != 0)))) {
                    *(ushort *)((int)puVar22 + 0x1a) = (ushort)(byte)local_11e0;
                    if (((local_11e8 & 1) != 0) &&
                       ((uint)*(byte *)(local_11a8 + (local_11e0 & 0xff)) != (local_11e0 & 0xff))) {
                      puVar22[3] = puVar22[3] | 0x80;
                    }
                    puVar22[3] = puVar22[3] | 0x40;
                  }
                  do {
                    iVar27 = FUN_000116f4(pbVar26,pbVar13,uVar17,&local_11ac,0);
                    if (iVar27 != 0) {
                      puVar22[3] = puVar22[3] | 0x8000;
                      break;
                    }
                    pbVar26 = pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                                        (uint)(*(ushort *)(pbVar26 + 1) >> 8));
                  } while (*pbVar26 == 0x77);
                  goto LAB_00019768;
                }
                local_11dc = 0xf;
              }
LAB_0001a72c:
              (*(code *)**(undefined4 **)(iVar27 + DAT_0001a6b4))(puVar22);
            }
          }
          else {
            local_11dc = 0x14;
          }
        }
LAB_00019bfc:
        if (0x14 < local_1174) {
          (*(code *)**(undefined4 **)(iVar27 + DAT_0001a6b4))(local_1184);
        }
        *param_5 = (int)local_11d4 - (int)param_1;
      }
      else {
        local_11dc = 0x2c;
      }
    }
    else {
      local_11dc = 0x4e;
    }
LAB_00019910:
    pcVar15 = (char *)(DAT_0001a688 + 0x19fa4);
    for (uVar17 = local_11dc; pcVar16 = pcVar15, 0 < (int)uVar17; uVar17 = uVar17 - 1) {
      do {
        pcVar15 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar15;
      } while (cVar1 != '\0');
      if (*pcVar15 == '\0') {
        pcVar15 = (char *)(DAT_0001a6b8 + 0x1a7b0);
        break;
      }
    }
    *param_4 = pcVar15;
    if (param_3 != (uint *)0x0) {
      *param_3 = local_11dc;
    }
  }
  puVar22 = (undefined4 *)0x0;
LAB_00019768:
  if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar22);
  }
  return;
}



/* ===== pcre_compile @ 0001a810 size=32 ===== */

void pcre_compile(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  pcre_compile2(param_1,param_2,0,param_3,param_4,param_5,param_3);
  return;
}



/* ===== pcre_config @ 0001a830 size=144 ===== */

undefined4 pcre_config(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001a8c0;
  switch(param_1) {
  case 0:
    goto LAB_0001a874;
  case 1:
    goto LAB_0001a8a0;
  case 2:
    uVar1 = 2;
    break;
  case 3:
LAB_0001a8a0:
    uVar1 = 10;
    break;
  case 4:
    break;
  case 5:
    goto LAB_0001a874;
  case 6:
LAB_0001a874:
    uVar1 = 1;
    break;
  case 7:
    break;
  case 8:
    goto LAB_0001a894;
  case 9:
    goto LAB_0001a894;
  case 10:
    goto LAB_0001a884;
  case 0xb:
LAB_0001a894:
    *param_2 = 0;
    return 0;
  case 0xc:
LAB_0001a884:
    *param_2 = 0;
switchD_0001a834_default:
    return 0xfffffffd;
  case 0xd:
    uVar1 = 0xfa;
    break;
  default:
    goto switchD_0001a834_default;
  }
  *param_2 = uVar1;
  return 0;
}



/* ===== FUN_0001a8c4 @ 0001a8c4 size=17848 ===== */

void FUN_0001a8c4(int *param_1,byte *param_2,byte *param_3,int param_4,int *param_5,uint param_6,
                 uint *param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint *puVar17;
  byte bVar18;
  bool bVar19;
  int iVar20;
  int *piVar21;
  byte *pbVar22;
  byte *pbVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  byte *pbVar37;
  uint uVar38;
  byte *pbVar39;
  uint *puVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  byte *local_2058;
  uint local_2050;
  uint local_204c;
  uint local_2040;
  int local_203c;
  byte *local_2030;
  byte *local_202c;
  uint *local_201c;
  byte *local_2018;
  int local_2004;
  uint *local_1fe8;
  uint local_1fd8;
  int local_1fac;
  uint local_1fa8;
  byte *local_1fa4;
  undefined4 local_1fa0;
  uint local_1f9c;
  int *local_1f98;
  byte *local_1f94;
  int local_1f90;
  int local_1f8c;
  int local_1f88;
  undefined4 local_1f84;
  undefined4 local_1f80;
  int local_1f7c;
  uint local_1f78;
  uint local_1f74;
  undefined4 local_1f70;
  int local_1f6c [1000];
  undefined1 auStack_fcc [4000];
  int local_2c;
  
  iVar20 = DAT_0001b1e8 + 0x1a908;
  piVar21 = *(int **)(iVar20 + DAT_0001b1ec);
  local_2c = *piVar21;
  pbVar22 = (byte *)param_1[1];
  pbVar23 = (byte *)param_1[2];
  iVar24 = *param_1;
  uVar25 = param_1[7] & 0x800;
  param_9 = param_9 + 1;
  iVar2 = ((param_8 + -2) / 6) * 6;
  uVar26 = iVar2 / 6;
  iVar27 = param_1[4];
  local_1fe8 = param_7 + 2;
  local_201c = local_1fe8 + uVar26 * 3;
  bVar18 = *param_2 + 0x7b;
  if (1 < bVar18) {
    bVar18 = *param_2 + 0x76;
  }
  if (bVar18 < 2) {
    iVar9 = 5;
  }
  else {
    iVar9 = 3;
  }
  local_2030 = param_2;
  local_202c = param_3;
  if (param_2[iVar9] == 0x7c) {
    uVar7 = 0;
    do {
      uVar28 = (*(ushort *)(param_2 + 4) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 4) >> 8);
      if (uVar7 < uVar28) {
        uVar7 = uVar28;
      }
      param_2 = param_2 + ((*(ushort *)(param_2 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(param_2 + 1) >> 8));
    } while (*param_2 == 0x77);
    if (uVar25 == 0) {
      if (param_3 + -uVar7 < pbVar22) {
        uVar7 = (int)param_3 - (int)pbVar22;
      }
      local_202c = param_3 + -uVar7;
      uVar32 = uVar7;
    }
    else {
      for (uVar32 = 0; pbVar22 < local_202c && (int)uVar32 < (int)uVar7; uVar32 = uVar32 + 1) {
        do {
          local_202c = local_202c + -1;
          if (local_202c <= pbVar22) break;
        } while ((*local_202c & 0xc0) == 0x80);
      }
    }
    puVar17 = local_201c;
    uVar7 = 0;
    if (local_202c < (byte *)param_1[3]) {
      param_1[3] = (int)local_202c;
    }
    do {
      uVar29 = (*(ushort *)(local_2030 + 4) & 0xff) << 8 | (uint)(*(ushort *)(local_2030 + 4) >> 8);
      uVar28 = uVar7;
      if ((int)uVar29 <= (int)uVar32) {
        uVar28 = uVar7 + 1;
        if ((int)uVar26 <= (int)uVar7) goto LAB_0001bdcc;
        *puVar17 = -((int)local_2030 - iVar24) - 6;
        puVar17[1] = 0;
        puVar17[2] = uVar32 - uVar29;
        puVar17 = puVar17 + 3;
      }
      local_2030 = local_2030 +
                   ((*(ushort *)(local_2030 + 1) & 0xff) << 8 |
                   (uint)(*(ushort *)(local_2030 + 1) >> 8));
      uVar7 = uVar28;
    } while (*local_2030 == 0x77);
  }
  else if ((param_9 == 1) && ((param_1[6] & 0x20000U) != 0)) {
    do {
      local_2030 = local_2030 +
                   ((*(ushort *)(local_2030 + 1) & 0xff) << 8 |
                   (uint)(*(ushort *)(local_2030 + 1) >> 8));
    } while (*local_2030 == 0x77);
    uVar28 = param_7[1];
    if (*param_7 == 0) {
      memcpy(local_201c,local_1fe8,uVar28 * 0xc);
    }
  }
  else {
    if (bVar18 < 2) {
      iVar9 = 5;
    }
    else {
      iVar9 = 3;
    }
    uVar7 = 0;
    puVar17 = local_201c;
    do {
      uVar28 = uVar7 + 1;
      if ((int)uVar26 <= (int)uVar7) goto LAB_0001bdcc;
      puVar17[1] = 0;
      iVar30 = iVar9 - iVar24;
      iVar9 = 3;
      *puVar17 = (uint)(local_2030 + iVar30);
      local_2030 = local_2030 +
                   ((*(ushort *)(local_2030 + 1) & 0xff) << 8 |
                   (uint)(*(ushort *)(local_2030 + 1) >> 8));
      uVar7 = uVar28;
      puVar17 = puVar17 + 3;
    } while (*local_2030 == 0x77);
  }
  bVar41 = uVar25 != 0;
  param_6 = param_6 & 0xfffffffe;
  iVar30 = iVar27 + 0x340;
  iVar31 = iVar27 + 0x100;
  *param_7 = 0;
  iVar9 = DAT_0001b1f0;
  local_203c = -1;
  local_2058 = local_202c;
  bVar19 = false;
LAB_0001abb4:
  param_7[1] = uVar28;
  *param_7 = *param_7 ^ 1;
  if (local_2058 < pbVar23) {
    bVar18 = *local_2058;
    uVar7 = (uint)bVar18;
    if (uVar7 < 0xc0 || !bVar41) {
      local_2050 = 1;
    }
    else {
      uVar32 = (uint)local_2058[1];
      if ((bVar18 & 0x20) == 0) {
        uVar7 = uVar32 & 0x3f | (uVar7 & 0x1f) << 6;
        local_2050 = 2;
      }
      else {
        uVar29 = (uint)local_2058[2];
        if ((bVar18 & 0x10) == 0) {
          uVar7 = (uVar32 & 0x3f) << 6 | (uVar7 & 0xf) << 0xc | uVar29 & 0x3f;
          local_2050 = 3;
        }
        else {
          uVar38 = (uint)local_2058[3];
          if ((bVar18 & 8) == 0) {
            uVar7 = (uVar29 & 0x3f) << 6 |
                    (uVar7 & 7) << 0x12 | uVar38 & 0x3f | (uVar32 & 0x3f) << 0xc;
            local_2050 = 4;
          }
          else if ((bVar18 & 4) == 0) {
            uVar7 = (uVar38 & 0x3f) << 6 |
                    (uVar7 & 3) << 0x18 | local_2058[4] & 0x3f | (uVar32 & 0x3f) << 0x12 |
                    (uVar29 & 0x3f) << 0xc;
            local_2050 = 5;
          }
          else {
            local_2050 = 6;
            uVar7 = (local_2058[4] & 0x3f) << 6 |
                    (uVar7 & 1) << 0x1e | local_2058[5] & 0x3f | (uVar32 & 0x3f) << 0x18 |
                    (uVar29 & 0x3f) << 0x12 | (uVar38 & 0x3f) << 0xc;
          }
        }
      }
    }
  }
  else {
    uVar7 = 0xffffffff;
    local_2050 = 0;
  }
  uVar32 = uVar7 + 0x7f;
  if (-1 < (int)uVar7) {
    uVar32 = uVar7;
  }
  uVar29 = uVar7 & 0x7f;
  iVar1 = (int)uVar32 >> 7;
  if (-1 < (int)-uVar7) {
    uVar29 = -(-uVar7 & 0x7f);
  }
  bVar4 = false;
  local_1fd8 = 0;
  local_2004 = 0;
  bVar3 = false;
  puVar17 = local_201c + uVar28 * 3;
  uVar32 = uVar28;
  puVar40 = local_1fe8;
  uVar28 = 0;
LAB_0001aca0:
  if ((int)uVar32 <= local_2004) goto code_r0x0001acac;
  puVar10 = local_201c + local_2004 * 3;
  uVar38 = local_201c[local_2004 * 3];
  puVar13 = puVar17;
  uVar36 = uVar32;
  if ((int)uVar38 < 0) {
    uVar33 = puVar10[2];
    if ((int)uVar33 < 1) {
      uVar38 = -uVar38;
      *puVar10 = uVar38;
      goto LAB_0001afcc;
    }
    uVar32 = uVar28 + 1;
    if ((int)uVar28 < (int)uVar26) {
      *puVar40 = uVar38;
      uVar28 = puVar10[1];
      puVar17 = puVar40 + 3;
      puVar40[2] = uVar33 - 1;
      puVar40[1] = uVar28;
      puVar40 = puVar17;
      uVar28 = uVar32;
      if (bVar19) {
        bVar3 = bVar19;
      }
      goto LAB_0001afb0;
    }
    goto LAB_0001bdcc;
  }
LAB_0001afcc:
  puVar34 = local_201c + 1;
  for (iVar11 = 0; local_2004 != iVar11; iVar11 = iVar11 + 1) {
    if ((puVar34[-1] == uVar38) && (*puVar34 == puVar10[1])) goto LAB_0001afb0;
    puVar34 = puVar34 + 3;
  }
  pbVar37 = (byte *)(iVar24 + uVar38);
  local_204c = (uint)*(byte *)(iVar24 + uVar38);
  if ((local_2050 == 0) && (*(char *)(DAT_0001b1f4 + 0x1b010 + local_204c) != '\0')) {
    bVar19 = true;
  }
  uVar33 = (uint)*(byte *)(iVar9 + local_204c + 0x1ac52);
  if (uVar33 == 0) {
    uVar35 = 0xffffffff;
    iVar11 = 0;
    goto switchD_0001b088_default;
  }
  bVar18 = pbVar37[uVar33];
  uVar35 = (uint)bVar18;
  if ((uVar25 == 0) || (uVar35 < 0xc0)) {
    iVar11 = 1;
  }
  else {
    uVar12 = (uint)pbVar37[uVar33 + 1];
    if ((bVar18 & 0x20) == 0) {
      iVar11 = 2;
      uVar35 = (uVar35 & 0x1f) << 6 | uVar12 & 0x3f;
    }
    else {
      uVar8 = (uint)pbVar37[uVar33 + 2];
      if ((bVar18 & 0x10) == 0) {
        iVar11 = 3;
        uVar35 = (uVar35 & 0xf) << 0xc | uVar8 & 0x3f | (uVar12 & 0x3f) << 6;
      }
      else {
        uVar5 = (uint)pbVar37[uVar33 + 3];
        if ((bVar18 & 8) == 0) {
          iVar11 = 4;
          uVar35 = (uVar35 & 7) << 0x12 | uVar5 & 0x3f | (uVar12 & 0x3f) << 0xc |
                   (uVar8 & 0x3f) << 6;
        }
        else if ((bVar18 & 4) == 0) {
          iVar11 = 5;
          uVar35 = (uVar35 & 3) << 0x18 | pbVar37[uVar33 + 4] & 0x3f | (uVar12 & 0x3f) << 0x12 |
                   (uVar8 & 0x3f) << 0xc | (uVar5 & 0x3f) << 6;
        }
        else {
          uVar35 = pbVar37[uVar33 + 5] & 0x3f | (uVar35 & 1) << 0x1e | (uVar12 & 0x3f) << 0x18 |
                   (uVar8 & 0x3f) << 0x12 | (uVar5 & 0x3f) << 0xc |
                   (pbVar37[uVar33 + 4] & 0x3f) << 6;
          iVar11 = 6;
        }
      }
    }
  }
  if (local_204c < 0x55) goto switchD_0001b088_default;
  switch(uVar35) {
  case 0xe:
    goto switchD_0001b210_default;
  case 0xf:
    goto LAB_0001b1f8;
  case 0x10:
LAB_0001b1f8:
    local_204c = local_204c + 300;
    break;
  case 0x11:
    local_204c = local_204c + 0x154;
    break;
  case 0x12:
    goto LAB_0001b9a4;
  case 0x13:
LAB_0001b9a4:
    local_204c = local_204c + 0x168;
    break;
  case 0x14:
    goto LAB_0001b9b0;
  case 0x15:
LAB_0001b9b0:
    local_204c = local_204c + 0x17c;
    break;
  case 0x16:
    local_204c = local_204c + 0x140;
  }
switchD_0001b088_default:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_204c) {
  case 2:
    if (local_2058 != pbVar22) goto LAB_0001afb0;
    if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
    *puVar17 = uVar38 + 1;
    puVar17[1] = 0;
    puVar13 = puVar17 + 3;
    uVar36 = uVar32 + 1;
    goto LAB_0001afb0;
  case 3:
    if (local_2058 != pbVar22 + param_4) goto LAB_0001afb0;
    if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
    *puVar17 = uVar38 + 1;
    puVar17[1] = 0;
    puVar13 = puVar17 + 3;
    uVar36 = uVar32 + 1;
    goto LAB_0001afb0;
  case 4:
    break;
  case 5:
    goto LAB_0001c5d4;
  case 6:
LAB_0001c5d4:
    if (pbVar22 < local_2058) {
      pbVar37 = local_2058 + -1;
      if (pbVar37 < (byte *)param_1[3]) {
        param_1[3] = (int)pbVar37;
      }
      pbVar39 = pbVar37;
      if (uVar25 != 0) {
        do {
          pbVar37 = pbVar39;
          pbVar39 = pbVar37 + -1;
        } while ((*pbVar37 & 0xc0) == 0x80);
      }
      bVar18 = *pbVar37;
      uVar35 = (uint)bVar18;
      if (0xbf < uVar35 && bVar41) {
        uVar33 = (uint)pbVar37[1];
        if ((bVar18 & 0x20) == 0) {
          uVar35 = uVar33 & 0x3f | (uVar35 & 0x1f) << 6;
        }
        else {
          uVar12 = (uint)pbVar37[2];
          if ((bVar18 & 0x10) == 0) {
            uVar35 = (uVar35 & 0xf) << 0xc | uVar12 & 0x3f;
            uVar33 = (uVar33 & 0x3f) << 6;
          }
          else {
            uVar8 = (uint)pbVar37[3];
            if ((bVar18 & 8) != 0) {
              if ((bVar18 & 4) == 0) {
                uVar35 = (uVar8 & 0x3f) << 6 |
                         (uVar35 & 3) << 0x18 | pbVar37[4] & 0x3f | (uVar33 & 0x3f) << 0x12 |
                         (uVar12 & 0x3f) << 0xc;
              }
              else {
                uVar35 = (pbVar37[4] & 0x3f) << 6 |
                         (uVar35 & 1) << 0x1e | pbVar37[5] & 0x3f | (uVar33 & 0x3f) << 0x18 |
                         (uVar12 & 0x3f) << 0x12 | (uVar8 & 0x3f) << 0xc;
              }
              goto LAB_0001c654;
            }
            uVar33 = (uVar35 & 7) << 0x12 | uVar8 & 0x3f | (uVar33 & 0x3f) << 0xc;
            uVar35 = (uVar12 & 0x3f) << 6;
          }
          uVar35 = uVar35 | uVar33;
        }
      }
LAB_0001c654:
      uVar12 = local_2050;
      if ((param_1[7] & 0x20000000U) == 0) {
        uVar33 = 0;
        if (uVar35 < 0x100) {
          uVar33 = (*(byte *)(iVar30 + uVar35) & 0x1f) >> 4;
        }
        if (local_2050 != 0) {
LAB_0001c8c0:
          if (0xff < uVar7) goto LAB_0001c8d4;
          uVar12 = (*(byte *)(iVar30 + uVar7) & 0x1f) >> 4;
        }
      }
      else {
        if (uVar35 == 0x5f) {
          uVar33 = 1;
        }
        else {
          uVar33 = (uint)((*(uint *)(*(int *)(iVar20 + DAT_0001d224) +
                                    (uint)*(byte *)(*(int *)(iVar20 + DAT_0001d234) +
                                                    (uint)*(ushort *)
                                                           (*(int *)(iVar20 + DAT_0001d22c) +
                                                           ((uVar35 & 0x7f) +
                                                           (uint)*(byte *)(*(int *)(iVar20 + 
                                                  DAT_0001d230) + ((int)uVar35 >> 7)) * 0x80) * 2) *
                                                  8 + 1) * 4) & 0xfffffffd) == 1);
        }
        if (local_2050 != 0) goto LAB_0001c84c;
      }
    }
    else if (local_2050 == 0) {
      uVar33 = 0;
LAB_0001c8d4:
      uVar12 = 0;
    }
    else {
      uVar33 = 0;
      if ((param_1[7] & 0x20000000U) == 0) goto LAB_0001c8c0;
      uVar33 = 0;
LAB_0001c84c:
      if (uVar7 == 0x5f) {
        uVar12 = 1;
      }
      else {
        uVar12 = (uint)((*(uint *)(*(int *)(iVar20 + DAT_0001d224) +
                                  (uint)*(byte *)(*(int *)(iVar20 + DAT_0001d234) +
                                                  (uint)*(ushort *)
                                                         (*(int *)(iVar20 + DAT_0001d22c) +
                                                         (uVar29 + (uint)*(byte *)(*(int *)(iVar20 +
                                                                                                                                                                                      
                                                  DAT_0001d230) + iVar1) * 0x80) * 2) * 8 + 1) * 4)
                        & 0xfffffffd) == 1);
      }
    }
    if ((uint)(local_204c == 4) == ((uVar33 ^ uVar12) & 1)) goto LAB_0001afb0;
    if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
    *puVar17 = uVar38 + 1;
    puVar17[1] = 0;
    puVar13 = puVar17 + 3;
    uVar36 = uVar32 + 1;
    goto LAB_0001afb0;
  case 7:
    goto LAB_0001c568;
  case 8:
    goto LAB_0001c4f0;
  case 9:
    goto LAB_0001c568;
  case 10:
    goto LAB_0001c4f0;
  case 0xb:
LAB_0001c568:
    if ((local_2050 != 0) &&
       ((0xff < uVar7 ||
        (iVar11 = DAT_0001d20c + 0x1c58c + local_204c,
        *(byte *)(iVar11 + 0x152) != (*(byte *)(iVar30 + uVar7) & *(byte *)(iVar11 + 0x144)))))) {
      if ((int)uVar28 < (int)uVar26) {
        *puVar40 = uVar38 + 1;
        puVar40[1] = 0;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
        goto LAB_0001afb0;
      }
      goto LAB_0001bdcc;
    }
    goto LAB_0001afb0;
  case 0xc:
LAB_0001c4f0:
    if ((local_2050 != 0 && uVar7 < 0x100) &&
       (iVar11 = DAT_0001d208 + 0x1c520 + local_204c,
       *(byte *)(iVar11 + 0x152) != (*(byte *)(iVar30 + uVar7) & *(byte *)(iVar11 + 0x144)))) {
      if ((int)uVar28 < (int)uVar26) {
        *puVar40 = uVar38 + 1;
        puVar40[1] = 0;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
        goto LAB_0001afb0;
      }
      goto LAB_0001bdcc;
    }
    goto LAB_0001afb0;
  case 0xd:
    if (local_2050 == 0) goto LAB_0001afb0;
    pbVar37 = (byte *)param_1[2];
    if (param_1[8] == 0) {
      if ((pbVar37 + -param_1[9] < local_2058) || (*local_2058 != *(byte *)(param_1 + 10))) {
        bVar43 = true;
      }
      else {
        bVar43 = false;
        if ((param_1[9] != 1) && (bVar43 = false, local_2058[1] != *(byte *)((int)param_1 + 0x29)))
        {
          bVar43 = true;
        }
      }
    }
    else if (local_2058 < pbVar37) {
      iVar11 = FUN_000326d8(local_2058,param_1[8],pbVar37,param_1 + 9,bVar41);
      bVar43 = iVar11 == 0;
    }
    else {
      bVar43 = true;
    }
    if (bVar43) {
      if ((((local_2058 + 1 < (byte *)param_1[2]) || ((param_1[6] & 0x8000000U) == 0)) ||
          (param_1[8] != 0)) || ((param_1[9] != 2 || (*(byte *)(param_1 + 10) != uVar7)))) {
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        *puVar40 = uVar38 + 1;
        puVar40[1] = 0;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
      else {
        bVar19 = true;
        bVar4 = true;
      }
    }
    goto LAB_0001afb0;
  case 0xe:
    if (local_2050 == 0) goto LAB_0001afb0;
    if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
    *puVar40 = uVar38 + 1;
    puVar40[1] = 0;
    puVar40 = puVar40 + 3;
    uVar28 = uVar28 + 1;
    goto LAB_0001afb0;
  case 0xf:
    break;
  case 0x10:
    goto LAB_0001c8e4;
  case 0x11:
LAB_0001c8e4:
    if (local_2050 == 0) goto LAB_0001afb0;
    uVar32 = (uint)*(ushort *)
                    (*(int *)(iVar20 + DAT_0001d22c) +
                    (uVar29 + (uint)*(byte *)(*(int *)(iVar20 + DAT_0001d230) + iVar1) * 0x80) * 2);
    iVar11 = *(int *)(iVar20 + DAT_0001d234) + uVar32 * 8;
    switch(pbVar37[1]) {
    case 0:
      goto LAB_0001ca4c;
    case 1:
      uVar33 = (uint)*(byte *)(iVar11 + 1);
      uVar32 = uVar33 - 8;
      bVar43 = 4 < uVar33;
      bVar44 = uVar33 == 5;
      if (!bVar44) {
        bVar43 = uVar32 != 0;
      }
      bVar42 = uVar32 == 1;
      if (!bVar43 || (bVar44 || bVar42)) {
        uVar32 = 1;
      }
      if (bVar43 && (!bVar44 && !bVar42)) {
        uVar32 = 0;
      }
      break;
    case 2:
      bVar18 = pbVar37[2];
      uVar32 = *(uint *)(*(int *)(iVar20 + DAT_0001d224) + (uint)*(byte *)(iVar11 + 1) * 4);
      goto LAB_0001c9e0;
    case 3:
      bVar18 = *(byte *)(iVar11 + 1);
      goto LAB_0001c9f4;
    case 4:
      bVar18 = *(byte *)(*(int *)(iVar20 + DAT_0001d234) + uVar32 * 8);
LAB_0001c9f4:
      uVar32 = (uint)bVar18;
      bVar18 = pbVar37[2];
LAB_0001c9e0:
      bVar43 = uVar32 == bVar18;
LAB_0001c9e4:
      uVar32 = (uint)bVar43;
      break;
    case 5:
      bVar43 = (*(uint *)(*(int *)(iVar20 + DAT_0001d224) + (uint)*(byte *)(iVar11 + 1) * 4) &
               0xfffffffd) == 1;
      goto LAB_0001c9e4;
    case 6:
      goto LAB_0001ca24;
    case 7:
LAB_0001ca24:
      if (uVar7 == 0x180e) goto LAB_0001ca4c;
      if (0x180e < uVar7) {
        if (uVar7 < 0x202a) {
          if (uVar7 < 0x2028) {
            bVar44 = 9 < uVar7 - 0x2000;
            bVar43 = uVar7 - 0x2000 == 10;
            goto LAB_0001ca48;
          }
        }
        else if ((uVar7 != 0x205f) && (uVar7 != 0x3000)) {
          bVar43 = uVar7 == 0x202f;
LAB_0001ca68:
          if (!bVar43) goto LAB_0001ca6c;
        }
        goto LAB_0001ca4c;
      }
      if (uVar7 == 0x20) goto LAB_0001ca4c;
      if (0x20 < uVar7) {
        if ((uVar7 != 0xa0) && (uVar7 != 0x1680)) {
          bVar43 = uVar7 == 0x85;
          goto LAB_0001ca68;
        }
        goto LAB_0001ca4c;
      }
      bVar44 = 3 < uVar7 - 9;
      bVar43 = uVar7 - 9 == 4;
LAB_0001ca48:
      if (!bVar44 || bVar43) goto LAB_0001ca4c;
LAB_0001ca6c:
      bVar43 = *(int *)(*(int *)(iVar20 + DAT_0001d224) + (uint)*(byte *)(iVar11 + 1) * 4) == 6;
      goto LAB_0001c9e4;
    case 8:
      uVar32 = (uint)(uVar7 == 0x5f ||
                     (*(uint *)(*(int *)(iVar20 + DAT_0001d224) + (uint)*(byte *)(iVar11 + 1) * 4) &
                     0xfffffffd) == 1);
      break;
    case 9:
      puVar17 = (uint *)((uint)pbVar37[2] * 4 + -4 + *(int *)(iVar20 + DAT_0001d228));
      do {
        puVar17 = puVar17 + 1;
        if (uVar7 < *puVar17) {
          uVar32 = 0;
          goto LAB_0001c984;
        }
      } while (*puVar17 != uVar7);
LAB_0001ca4c:
      uVar32 = 1;
      break;
    case 10:
      if (uVar7 == 0x24 || (uVar7 & 0xffffffdf) == 0x40) goto LAB_0001ca4c;
      uVar32 = (uint)(0xdfff < uVar7);
      if (uVar7 - 0xa0 < 0xd760) {
        uVar32 = 1;
      }
      break;
    default:
      uVar32 = (uint)(local_204c != 0x10);
    }
LAB_0001c984:
    if ((local_204c == 0x10) != uVar32) goto LAB_0001afb0;
    if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
    *puVar40 = uVar38 + 3;
    puVar40[1] = 0;
    puVar40 = puVar40 + 3;
    uVar28 = uVar28 + 1;
    goto LAB_0001afb0;
  case 0x12:
    if (local_2050 == 0) goto LAB_0001afb0;
    if (uVar7 == 0xd) {
      uVar32 = uVar28 + 1;
      if (local_2058 + 1 < pbVar23) {
        if (local_2058[1] == 10) {
          if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
          *puVar40 = ~uVar38;
          puVar40[1] = 0;
          puVar40[2] = 1;
          puVar40 = puVar40 + 3;
          uVar28 = uVar32;
        }
        else {
          if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
          *puVar40 = uVar38 + 1;
          puVar40[1] = 0;
          puVar40 = puVar40 + 3;
          uVar28 = uVar32;
        }
      }
      else {
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        puVar40[1] = 0;
        uVar33 = param_1[6];
        puVar17 = puVar40 + 3;
        *puVar40 = uVar38 + 1;
        puVar40 = puVar17;
        uVar28 = uVar32;
        if ((uVar33 & 0x8000000) != 0) {
          bVar3 = true;
        }
      }
    }
    else if (uVar7 < 0xe) {
      if (uVar7 == 10) {
LAB_0001f42c:
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        *puVar40 = uVar38 + 1;
        puVar40[1] = 0;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
      else if (9 < uVar7) goto LAB_0001f420;
    }
    else if ((uVar7 == 0x85) || ((0x84 < uVar7 && (uVar7 - 0x2028 < 2)))) {
LAB_0001f420:
      if ((param_1[6] & 0x800000U) == 0) goto LAB_0001f42c;
    }
    goto LAB_0001afb0;
  case 0x13:
    if ((local_2050 != 0) && (uVar7 != 0x180e)) {
      if (uVar7 < 0x180f) {
        if (uVar7 == 0x20) goto LAB_0001afb0;
        if (uVar7 < 0x21) {
          bVar43 = uVar7 == 9;
        }
        else {
          if (uVar7 == 0xa0) goto LAB_0001afb0;
          bVar43 = uVar7 == 0x1680;
        }
LAB_0001f618:
        if (!bVar43) {
LAB_0001f66c:
          if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
          *puVar40 = uVar38 + 1;
          puVar40[1] = 0;
          puVar40 = puVar40 + 3;
          uVar28 = uVar28 + 1;
        }
      }
      else if (uVar7 != 0x202f) {
        if (uVar7 < 0x2030) {
          if (10 < uVar7 - 0x2000) goto LAB_0001f66c;
        }
        else if (uVar7 != 0x205f) {
          bVar43 = uVar7 == 0x3000;
          goto LAB_0001f618;
        }
      }
    }
    goto LAB_0001afb0;
  case 0x14:
    if (local_2050 == 0) goto LAB_0001afb0;
    if (uVar7 != 0x180e) {
      if (uVar7 < 0x180f) {
        if (uVar7 != 0x20) {
          if (uVar7 < 0x21) {
            bVar43 = uVar7 == 9;
          }
          else {
            if (uVar7 == 0xa0) goto LAB_0001f70c;
            bVar43 = uVar7 == 0x1680;
          }
LAB_0001f6d8:
          if (!bVar43) goto LAB_0001afb0;
        }
      }
      else if (uVar7 != 0x202f) {
        if (uVar7 < 0x2030) {
          if (10 < uVar7 - 0x2000) goto LAB_0001afb0;
        }
        else if (uVar7 != 0x205f) {
          bVar43 = uVar7 == 0x3000;
          goto LAB_0001f6d8;
        }
      }
    }
LAB_0001f70c:
    if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
    *puVar40 = uVar38 + 1;
    puVar40[1] = 0;
    puVar40 = puVar40 + 3;
    uVar28 = uVar28 + 1;
    goto LAB_0001afb0;
  case 0x15:
    if ((local_2050 != 0) && (uVar7 != 0x85)) {
      if (uVar7 < 0x86) {
        bVar44 = 2 < uVar7 - 10;
        bVar43 = uVar7 - 10 == 3;
      }
      else {
        bVar44 = uVar7 != 0x2028;
        bVar43 = uVar7 == 0x2029;
      }
      if (!bVar44 || bVar43) goto LAB_0001afb0;
      if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
      *puVar40 = uVar38 + 1;
      puVar40[1] = 0;
      puVar40 = puVar40 + 3;
      uVar28 = uVar28 + 1;
    }
    goto LAB_0001afb0;
  case 0x16:
    if (local_2050 == 0) goto LAB_0001afb0;
    if (uVar7 != 0x85) {
      if (uVar7 < 0x86) {
        bVar44 = 2 < uVar7 - 10;
        bVar43 = uVar7 - 10 == 3;
      }
      else {
        bVar44 = uVar7 != 0x2028;
        bVar43 = uVar7 == 0x2029;
      }
      if (bVar44 && !bVar43) goto LAB_0001afb0;
    }
    if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
    *puVar40 = uVar38 + 1;
    puVar40[1] = 0;
    puVar40 = puVar40 + 3;
    uVar28 = uVar28 + 1;
    goto LAB_0001afb0;
  case 0x17:
    if (local_2050 == 0) goto LAB_0001afb0;
    local_204c = 0;
    local_2040 = (uint)*(byte *)(*(int *)(iVar20 + DAT_0001f644) +
                                 (uint)*(ushort *)
                                        (*(int *)(iVar20 + DAT_0001f63c) +
                                        ((short)(ushort)*(byte *)(*(int *)(iVar20 + DAT_0001f640) +
                                                                 iVar1) * 0x80 + uVar29) * 2) * 8 +
                                2);
    for (pbVar37 = local_2058 + local_2050; pbVar37 < pbVar23; pbVar37 = pbVar37 + iVar11) {
      bVar18 = *pbVar37;
      uVar32 = (uint)bVar18;
      if ((uVar25 == 0) || (uVar32 < 0xc0)) {
        iVar11 = 1;
      }
      else {
        uVar33 = (uint)pbVar37[1];
        if ((bVar18 & 0x20) == 0) {
          iVar11 = 2;
          uVar32 = (uVar32 & 0x1f) << 6 | uVar33 & 0x3f;
        }
        else {
          uVar35 = (uint)pbVar37[2];
          if ((bVar18 & 0x10) == 0) {
            iVar11 = 3;
            uVar32 = (uVar32 & 0xf) << 0xc | uVar35 & 0x3f | (uVar33 & 0x3f) << 6;
          }
          else {
            uVar12 = (uint)pbVar37[3];
            if ((bVar18 & 8) == 0) {
              iVar11 = 4;
              uVar32 = (uVar32 & 7) << 0x12 | uVar12 & 0x3f | (uVar33 & 0x3f) << 0xc |
                       (uVar35 & 0x3f) << 6;
            }
            else if ((bVar18 & 4) == 0) {
              iVar11 = 5;
              uVar32 = (uVar32 & 3) << 0x18 | pbVar37[4] & 0x3f | (uVar33 & 0x3f) << 0x12 |
                       (uVar35 & 0x3f) << 0xc | (uVar12 & 0x3f) << 6;
            }
            else {
              iVar11 = 6;
              uVar32 = (uVar32 & 1) << 0x1e | pbVar37[5] & 0x3f | (uVar33 & 0x3f) << 0x18 |
                       (uVar35 & 0x3f) << 0x12 | (uVar12 & 0x3f) << 0xc | (pbVar37[4] & 0x3f) << 6;
            }
          }
        }
      }
      uVar32 = (uint)*(byte *)(*(int *)(iVar20 + DAT_0001f644) +
                               (uint)*(ushort *)
                                      (*(int *)(iVar20 + DAT_0001f63c) +
                                      ((short)(ushort)*(byte *)(*(int *)(iVar20 + DAT_0001f640) +
                                                               ((int)uVar32 >> 7)) * 0x80 +
                                      (uVar32 & 0x7f)) * 2) * 8 + 2);
      if ((*(uint *)(*(int *)(iVar20 + DAT_0001f638) + local_2040 * 4) & 1 << uVar32) == 0)
      goto LAB_0001f224;
      local_204c = local_204c + 1;
      local_2040 = uVar32;
    }
    if ((param_1[6] & 0x8000000U) != 0) {
      bVar3 = true;
    }
LAB_0001f224:
    if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
    puVar40[1] = 0;
    *puVar40 = ~uVar38;
    puVar40[2] = local_204c;
    puVar40 = puVar40 + 3;
    uVar28 = uVar28 + 1;
    goto LAB_0001afb0;
  case 0x18:
    if (local_2050 == 0) {
      if ((param_1[6] & 0x8000000U) != 0) {
        bVar19 = true;
        goto LAB_0001afb0;
      }
LAB_0001c0a8:
      if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
      *puVar17 = uVar38 + 1;
      puVar17[1] = 0;
      puVar13 = puVar17 + 3;
      uVar36 = uVar32 + 1;
    }
    else {
      pbVar37 = (byte *)param_1[2];
      if (param_1[8] == 0) {
        if (((local_2058 <= pbVar37 + -param_1[9]) && (*local_2058 == *(byte *)(param_1 + 10))) &&
           ((param_1[9] == 1 || (local_2058[1] == *(byte *)((int)param_1 + 0x29)))))
        goto LAB_0001c10c;
      }
      else if ((local_2058 < pbVar37) &&
              (iVar11 = FUN_000326d8(local_2058,param_1[8],pbVar37,param_1 + 9,bVar41), iVar11 != 0)
              ) {
LAB_0001c10c:
        if (local_2058 == pbVar23 + -param_1[9]) goto LAB_0001c0a8;
      }
    }
    goto LAB_0001afb0;
  case 0x19:
    if (local_2058 < pbVar23) goto LAB_0001afb0;
    if ((param_1[6] & 0x8000000U) == 0) {
      if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
      puVar17[1] = 0;
      *puVar17 = uVar38 + 1;
      puVar13 = puVar17 + 3;
      uVar36 = uVar32 + 1;
    }
    else {
      bVar19 = true;
    }
    goto LAB_0001afb0;
  case 0x1a:
    if ((param_1[6] & 0x100U) != 0) goto LAB_0001afb0;
    if (local_2050 == 0) {
      if ((param_1[6] & 0x8000000U) == 0) {
LAB_0001c18c:
        if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
        *puVar17 = uVar38 + 1;
        puVar17[1] = 0;
        puVar13 = puVar17 + 3;
        uVar36 = uVar32 + 1;
      }
      else {
        bVar19 = true;
      }
    }
    else {
      if ((param_1[7] & 0x20U) == 0) {
        pbVar37 = (byte *)param_1[2];
        if (param_1[8] == 0) {
          if (((local_2058 <= pbVar37 + -param_1[9]) && (*local_2058 == *(byte *)(param_1 + 10))) &&
             ((param_1[9] == 1 || (local_2058[1] == *(byte *)((int)param_1 + 0x29)))))
          goto LAB_0001c1fc;
        }
        else if ((local_2058 < pbVar37) &&
                (iVar11 = FUN_000326d8(local_2058,param_1[8],pbVar37,param_1 + 9,bVar41),
                iVar11 != 0)) {
LAB_0001c1fc:
          if (local_2058 == pbVar23 + -param_1[9]) goto LAB_0001c18c;
        }
      }
      if (((((byte *)param_1[2] <= local_2058 + 1) && ((param_1[6] & DAT_0001d204) != 0)) &&
          (param_1[8] == 0)) && ((param_1[9] == 2 && (*(byte *)(param_1 + 10) == uVar7)))) {
        if ((param_1[6] & 0x8000000U) == 0) {
          bVar19 = true;
          bVar4 = true;
        }
        else {
          if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
          puVar40[1] = 0;
          *puVar40 = ~uVar38;
          puVar40[2] = 1;
          puVar40 = puVar40 + 3;
          uVar28 = uVar28 + 1;
          bVar3 = true;
        }
      }
    }
    goto LAB_0001afb0;
  case 0x1b:
    if ((param_1[6] & 0x100U) == 0) {
      if (local_2050 == 0) {
        if ((param_1[6] & 0x8000000U) == 0) goto LAB_0001c2fc;
        bVar19 = true;
      }
      else {
        if ((param_1[7] & 0x20U) == 0) {
          pbVar37 = (byte *)param_1[2];
          if (param_1[8] == 0) {
            if (((local_2058 <= pbVar37 + -param_1[9]) && (*local_2058 == *(byte *)(param_1 + 10)))
               && ((param_1[9] == 1 || (local_2058[1] == *(byte *)((int)param_1 + 0x29)))))
            goto LAB_0001c2fc;
          }
          else if ((local_2058 < pbVar37) &&
                  (iVar11 = FUN_000326d8(local_2058,param_1[8],pbVar37,param_1 + 9,bVar41),
                  iVar11 != 0)) {
LAB_0001c2fc:
            if ((int)uVar32 < (int)uVar26) {
              *puVar17 = uVar38 + 1;
              puVar17[1] = 0;
              puVar13 = puVar17 + 3;
              uVar36 = uVar32 + 1;
              goto LAB_0001afb0;
            }
            goto LAB_0001bdcc;
          }
        }
        if (((((byte *)param_1[2] <= local_2058 + 1) && ((param_1[6] & DAT_0001d204) != 0)) &&
            (param_1[8] == 0)) && ((param_1[9] == 2 && (*(byte *)(param_1 + 10) == uVar7)))) {
          if ((param_1[6] & 0x8000000U) != 0) {
            if ((int)uVar28 < (int)uVar26) {
              puVar40[1] = 0;
              *puVar40 = ~uVar38;
              puVar40[2] = 1;
              puVar40 = puVar40 + 3;
              uVar28 = uVar28 + 1;
              bVar3 = true;
              goto LAB_0001afb0;
            }
            goto LAB_0001bdcc;
          }
          bVar19 = true;
          bVar4 = true;
        }
      }
    }
    else {
      pbVar37 = (byte *)param_1[2];
      if (param_1[8] == 0) {
        bVar43 = false;
        if ((local_2058 <= pbVar37 + -param_1[9]) && (*local_2058 == *(byte *)(param_1 + 10))) {
          if (param_1[9] == 1) {
            bVar43 = true;
          }
          else {
            bVar43 = local_2058[1] == *(byte *)((int)param_1 + 0x29);
          }
        }
      }
      else if (local_2058 < pbVar37) {
        iVar11 = FUN_000326d8(local_2058,param_1[8],pbVar37,param_1 + 9,bVar41);
        bVar43 = false;
        if (iVar11 != 0) {
          bVar43 = true;
        }
      }
      else {
        bVar43 = false;
      }
      if (bVar43) {
        if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
        *puVar17 = uVar38 + 1;
        puVar17[1] = 0;
        puVar13 = puVar17 + 3;
        uVar36 = uVar32 + 1;
      }
    }
    goto LAB_0001afb0;
  case 0x1c:
    if ((local_2058 == pbVar22) && ((param_1[6] & 0x80U) == 0)) {
      if ((int)uVar32 < (int)uVar26) {
        puVar17[1] = 0;
        *puVar17 = uVar38 + 1;
        puVar13 = puVar17 + 3;
        uVar36 = uVar32 + 1;
        goto LAB_0001afb0;
      }
      goto LAB_0001bdcc;
    }
    goto LAB_0001afb0;
  case 0x1d:
    if ((local_2058 == pbVar22) && ((param_1[6] & 0x80U) == 0)) goto LAB_0001bdbc;
    if (local_2058 == pbVar23) goto LAB_0001afb0;
    pbVar37 = (byte *)param_1[1];
    if (param_1[8] == 0) {
      iVar11 = param_1[9];
      if (((pbVar37 + iVar11 <= local_2058) && (local_2058[-iVar11] == *(byte *)(param_1 + 10))) &&
         ((iVar11 == 1 || (local_2058[1 - iVar11] == *(byte *)((int)param_1 + 0x29))))) {
LAB_0001bdbc:
        if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
        *puVar17 = uVar38 + 1;
        puVar17[1] = 0;
        puVar13 = puVar17 + 3;
        uVar36 = uVar32 + 1;
      }
    }
    else if ((pbVar37 < local_2058) &&
            (iVar11 = FUN_000328c0(local_2058,param_1[8],pbVar37,param_1 + 9,bVar41), iVar11 != 0))
    goto LAB_0001bdbc;
    goto LAB_0001afb0;
  case 0x1e:
    if (local_2050 == 0 || uVar7 != uVar35) goto LAB_0001afb0;
    if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
    puVar40[1] = 0;
    *puVar40 = iVar11 + uVar38 + 1;
    puVar40 = puVar40 + 3;
    uVar28 = uVar28 + 1;
    goto LAB_0001afb0;
  case 0x1f:
    if (local_2050 == 0) goto LAB_0001afb0;
    if (uVar25 == 0) {
      if (*(char *)(iVar27 + uVar7) == *(char *)(iVar27 + uVar35)) {
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        *puVar40 = uVar38 + 2;
        puVar40[1] = 0;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
    }
    else if (uVar7 == uVar35) {
      if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
      puVar40[1] = 0;
      *puVar40 = iVar11 + uVar38 + 1;
      puVar40 = puVar40 + 3;
      uVar28 = uVar28 + 1;
    }
    else {
      if (uVar7 < 0x80) {
        uVar32 = (uint)*(byte *)(iVar31 + uVar7);
      }
      else {
        uVar32 = uVar7 + *(int *)(*(int *)(iVar20 + DAT_0001f644) +
                                  (uint)*(ushort *)
                                         (*(int *)(iVar20 + DAT_0001f63c) +
                                         (uVar29 + (uint)*(byte *)(*(int *)(iVar20 + DAT_0001f640) +
                                                                  iVar1) * 0x80) * 2) * 8 + 4);
      }
      if (uVar35 == uVar32) {
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        puVar40[1] = 0;
        *puVar40 = iVar11 + uVar38 + 1;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
    }
    goto LAB_0001afb0;
  case 0x20:
    if (local_2050 == 0 || uVar7 == uVar35) goto LAB_0001afb0;
    if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
    puVar40[1] = 0;
    *puVar40 = iVar11 + uVar38 + 1;
    puVar40 = puVar40 + 3;
    uVar28 = uVar28 + 1;
    goto LAB_0001afb0;
  case 0x21:
    if (local_2050 == 0) goto LAB_0001afb0;
    if (uVar35 < 0x80 || !bVar41) {
      uVar32 = (uint)*(byte *)(iVar31 + uVar35);
    }
    else {
      uVar32 = uVar35 + 0x7f;
      if (-1 < (int)uVar35) {
        uVar32 = uVar35;
      }
      uVar33 = uVar35 & 0x7f;
      if (-1 < (int)-uVar35) {
        uVar33 = -(-uVar35 & 0x7f);
      }
      uVar32 = uVar35 + *(int *)(*(int *)(iVar20 + DAT_0001f644) +
                                 (uint)*(ushort *)
                                        (*(int *)(iVar20 + DAT_0001f63c) +
                                        (uVar33 + (uint)*(byte *)(*(int *)(iVar20 + DAT_0001f640) +
                                                                 ((int)uVar32 >> 7)) * 0x80) * 2) *
                                 8 + 4);
    }
    if (uVar7 != uVar35 && uVar7 != uVar32) {
      if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
      puVar40[1] = 0;
      *puVar40 = iVar11 + uVar38 + 1;
      puVar40 = puVar40 + 3;
      uVar28 = uVar28 + 1;
    }
    goto LAB_0001afb0;
  case 0x22:
    goto LAB_0001fc2c;
  case 0x23:
    goto LAB_0001fc2c;
  case 0x24:
    goto LAB_0001f99c;
  case 0x25:
    goto LAB_0001f99c;
  case 0x26:
    goto LAB_0001fae4;
  case 0x27:
    goto LAB_0001fae4;
  case 0x28:
    goto LAB_0001fee0;
  case 0x29:
    goto LAB_0001fee0;
  case 0x2a:
    goto LAB_0001fcc8;
  case 0x2b:
    goto LAB_0001fc2c;
  case 0x2c:
    goto LAB_0001f99c;
  case 0x2d:
    goto LAB_0001fae4;
  case 0x2e:
    goto LAB_0001fee0;
  case 0x2f:
    goto LAB_0001faec;
  case 0x30:
    goto LAB_0001faec;
  case 0x31:
    goto LAB_0001f850;
  case 0x32:
    goto LAB_0001f850;
  case 0x33:
    goto LAB_0001f9a4;
  case 0x34:
    goto LAB_0001f9a4;
  case 0x35:
    goto LAB_0001fd6c;
  case 0x36:
    goto LAB_0001fd6c;
  case 0x37:
    goto LAB_0001fc34;
  case 0x38:
    goto LAB_0001faec;
  case 0x39:
    goto LAB_0001f850;
  case 0x3a:
    goto LAB_0001f9a4;
  case 0x3b:
    goto LAB_0001fd6c;
  case 0x3c:
    goto LAB_0001fc2c;
  case 0x3d:
    goto LAB_0001fc2c;
  case 0x3e:
    goto LAB_0001f99c;
  case 0x3f:
    goto LAB_0001f99c;
  case 0x40:
    goto LAB_0001fae4;
  case 0x41:
    goto LAB_0001fae4;
  case 0x42:
    goto LAB_0001fee0;
  case 0x43:
    goto LAB_0001fee0;
  case 0x44:
LAB_0001fcc8:
    if (local_2050 == 0) goto LAB_0001afb0;
    uVar32 = 0xffffffff;
LAB_0001fcd8:
    if ((int)local_204c < 0x3b == (uVar7 == uVar32 || uVar7 == uVar35)) {
      uVar32 = puVar10[1];
      if ((int)(uVar32 + 1) <
          (int)((*(ushort *)(pbVar37 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar37 + 1) >> 8))) {
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        *puVar40 = uVar38;
        puVar40[1] = uVar32 + 1;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
      else {
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        puVar40[1] = 0;
        *puVar40 = iVar11 + uVar38 + 3;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
    }
    goto LAB_0001afb0;
  case 0x45:
LAB_0001fc2c:
    bVar43 = false;
LAB_0001fafc:
    uVar36 = uVar32 + 1;
    if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
    puVar13 = puVar17 + 3;
    *puVar17 = iVar11 + uVar38 + 1;
    puVar17[1] = 0;
    if (local_2050 == 0) goto LAB_0001afb0;
    if (bVar43) {
      if (uVar35 < 0x80 || !bVar41) {
        uVar33 = (uint)*(byte *)(iVar31 + uVar35);
      }
      else {
        uVar33 = uVar35 + 0x7f;
        if (-1 < (int)uVar35) {
          uVar33 = uVar35;
        }
        uVar12 = uVar35 & 0x7f;
        if (-1 < (int)-uVar35) {
          uVar12 = -(-uVar35 & 0x7f);
        }
        uVar33 = uVar35 + *(int *)(*(int *)(iVar20 + DAT_0001f644) +
                                   (uint)*(ushort *)
                                          (*(int *)(iVar20 + DAT_0001f63c) +
                                          (uVar12 + (uint)*(byte *)(*(int *)(iVar20 + DAT_0001f640)
                                                                   + ((int)uVar33 >> 7)) * 0x80) * 2
                                          ) * 8 + 4);
      }
    }
    else {
      uVar33 = 0xffffffff;
    }
    if ((int)local_204c < 0x3b == (uVar7 == uVar33 || uVar7 == uVar35)) {
      if (local_204c != 0x44 && local_204c != 0x2a) {
        puVar17 = puVar13;
        uVar32 = uVar36;
      }
      if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
      *puVar40 = uVar38;
      puVar40[1] = 0;
      puVar13 = puVar17;
      uVar36 = uVar32;
      puVar40 = puVar40 + 3;
      uVar28 = uVar28 + 1;
    }
    goto LAB_0001afb0;
  case 0x46:
LAB_0001f99c:
    bVar43 = false;
LAB_0001f860:
    uVar33 = puVar10[1];
    if (0 < (int)uVar33) {
      uVar36 = uVar32 + 1;
      if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
      puVar13 = puVar17 + 3;
      *puVar17 = iVar11 + uVar38 + 1;
      puVar17[1] = 0;
    }
    if (local_2050 == 0) goto LAB_0001afb0;
    if (bVar43) {
      if (uVar35 < 0x80 || !bVar41) {
        uVar32 = (uint)*(byte *)(iVar31 + uVar35);
      }
      else {
        uVar32 = uVar35 + 0x7f;
        if (-1 < (int)uVar35) {
          uVar32 = uVar35;
        }
        uVar12 = uVar35 & 0x7f;
        if (-1 < (int)-uVar35) {
          uVar12 = -(-uVar35 & 0x7f);
        }
        uVar32 = uVar35 + *(int *)(*(int *)(iVar20 + DAT_0001f644) +
                                   (uint)*(ushort *)
                                          (*(int *)(iVar20 + DAT_0001f63c) +
                                          (uVar12 + (uint)*(byte *)(*(int *)(iVar20 + DAT_0001f640)
                                                                   + ((int)uVar32 >> 7)) * 0x80) * 2
                                          ) * 8 + 4);
      }
    }
    else {
      uVar32 = 0xffffffff;
    }
    if ((int)local_204c < 0x3b == (uVar7 == uVar32 || uVar7 == uVar35)) {
      if ((0 < (int)uVar33) && (local_204c == 0x45 || local_204c == 0x2b)) {
        uVar36 = uVar36 - 1;
        puVar13 = puVar13 + -3;
      }
      if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
      *puVar40 = uVar38;
      puVar40[1] = uVar33 + 1;
      puVar40 = puVar40 + 3;
      uVar28 = uVar28 + 1;
    }
    goto LAB_0001afb0;
  case 0x47:
LAB_0001fae4:
    bVar43 = false;
LAB_0001f9b4:
    uVar36 = uVar32 + 1;
    if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
    puVar17[1] = 0;
    uVar38 = iVar11 + uVar38 + 1;
    puVar13 = puVar17 + 3;
    *puVar17 = uVar38;
    if (local_2050 == 0) goto LAB_0001afb0;
    if (bVar43) {
      if (uVar35 < 0x80 || !bVar41) {
        uVar33 = (uint)*(byte *)(iVar31 + uVar35);
      }
      else {
        uVar33 = uVar35 + 0x7f;
        if (-1 < (int)uVar35) {
          uVar33 = uVar35;
        }
        uVar12 = uVar35 & 0x7f;
        if (-1 < (int)-uVar35) {
          uVar12 = -(-uVar35 & 0x7f);
        }
        uVar33 = uVar35 + *(int *)(*(int *)(iVar20 + DAT_0001f644) +
                                   (uint)*(ushort *)
                                          (*(int *)(iVar20 + DAT_0001f63c) +
                                          (uVar12 + (uint)*(byte *)(*(int *)(iVar20 + DAT_0001f640)
                                                                   + ((int)uVar33 >> 7)) * 0x80) * 2
                                          ) * 8 + 4);
      }
    }
    else {
      uVar33 = 0xffffffff;
    }
    if ((int)local_204c < 0x3b == (uVar7 == uVar33 || uVar7 == uVar35)) {
      if (local_204c != 0x46 && local_204c != 0x2c) {
        puVar17 = puVar13;
        uVar32 = uVar36;
      }
      if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
      *puVar40 = uVar38;
      puVar40[1] = 0;
      puVar13 = puVar17;
      uVar36 = uVar32;
      puVar40 = puVar40 + 3;
      uVar28 = uVar28 + 1;
    }
    goto LAB_0001afb0;
  case 0x48:
LAB_0001fee0:
    bVar43 = false;
LAB_0001fd7c:
    uVar36 = uVar32 + 1;
    if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
    puVar17[1] = 0;
    uVar33 = iVar11 + uVar38 + 3;
    puVar13 = puVar17 + 3;
    *puVar17 = uVar33;
    if (local_2050 == 0) goto LAB_0001afb0;
    if (bVar43) {
      if (uVar35 < 0x80 || !bVar41) {
        uVar12 = (uint)*(byte *)(iVar31 + uVar35);
      }
      else {
        uVar12 = uVar35 + 0x7f;
        if (-1 < (int)uVar35) {
          uVar12 = uVar35;
        }
        uVar8 = uVar35 & 0x7f;
        if (-1 < (int)-uVar35) {
          uVar8 = -(-uVar35 & 0x7f);
        }
        uVar12 = uVar35 + *(int *)(*(int *)(iVar20 + DAT_0001f644) +
                                   (uint)*(ushort *)
                                          (*(int *)(iVar20 + DAT_0001f63c) +
                                          (uVar8 + (uint)*(byte *)(*(int *)(iVar20 + DAT_0001f640) +
                                                                  ((int)uVar12 >> 7)) * 0x80) * 2) *
                                   8 + 4);
      }
    }
    else {
      uVar12 = 0xffffffff;
    }
    if ((int)local_204c < 0x3b == (uVar7 == uVar12 || uVar7 == uVar35)) {
      if (local_204c != 0x47 && local_204c != 0x2d) {
        puVar17 = puVar13;
        uVar32 = uVar36;
      }
      uVar35 = puVar10[1];
      puVar13 = puVar17;
      uVar36 = uVar32;
      if ((int)(uVar35 + 1) <
          (int)((*(ushort *)(pbVar37 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar37 + 1) >> 8))) {
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        *puVar40 = uVar38;
        puVar40[1] = uVar35 + 1;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
      else {
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        *puVar40 = uVar33;
        puVar40[1] = 0;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
    }
    goto LAB_0001afb0;
  case 0x49:
    goto LAB_0001faec;
  case 0x4a:
    goto LAB_0001faec;
  case 0x4b:
    goto LAB_0001f850;
  case 0x4c:
    goto LAB_0001f850;
  case 0x4d:
    goto LAB_0001f9a4;
  case 0x4e:
    goto LAB_0001f9a4;
  case 0x4f:
    goto LAB_0001fd6c;
  case 0x50:
    goto LAB_0001fd6c;
  case 0x51:
LAB_0001fc34:
    local_204c = local_204c - 0xd;
    if (local_2050 == 0) goto LAB_0001afb0;
    if (uVar35 < 0x80 || !bVar41) {
      uVar32 = (uint)*(byte *)(iVar31 + uVar35);
    }
    else {
      uVar32 = uVar35 + 0x7f;
      if (-1 < (int)uVar35) {
        uVar32 = uVar35;
      }
      uVar33 = uVar35 & 0x7f;
      if (-1 < (int)-uVar35) {
        uVar33 = -(-uVar35 & 0x7f);
      }
      uVar32 = uVar35 + *(int *)(*(int *)(iVar20 + DAT_0001f644) +
                                 (uint)*(ushort *)
                                        (*(int *)(iVar20 + DAT_0001f63c) +
                                        (uVar33 + (uint)*(byte *)(*(int *)(iVar20 + DAT_0001f640) +
                                                                 ((int)uVar32 >> 7)) * 0x80) * 2) *
                                 8 + 4);
    }
    goto LAB_0001fcd8;
  case 0x52:
LAB_0001faec:
    bVar43 = true;
    local_204c = local_204c - 0xd;
    goto LAB_0001fafc;
  case 0x53:
LAB_0001f850:
    bVar43 = true;
    local_204c = local_204c - 0xd;
    goto LAB_0001f860;
  case 0x54:
LAB_0001f9a4:
    bVar43 = true;
    local_204c = local_204c - 0xd;
    goto LAB_0001f9b4;
  case 0x55:
LAB_0001fd6c:
    bVar43 = true;
    local_204c = local_204c - 0xd;
    goto LAB_0001fd7c;
  case 0x56:
    goto LAB_0001ced8;
  case 0x57:
    goto LAB_0001ced8;
  case 0x58:
    goto LAB_0001cb74;
  case 0x59:
    goto LAB_0001cb74;
  case 0x5a:
    goto LAB_0001cd1c;
  case 0x5b:
    goto LAB_0001cd1c;
  case 0x5c:
    goto LAB_0001d264;
  case 0x5d:
    goto LAB_0001d264;
  case 0x5e:
    if (local_2050 == 0) goto LAB_0001afb0;
    if (((((uVar35 == 0xc) && ((byte *)param_1[2] <= local_2058 + 1)) &&
         ((param_1[6] & 0x8000000U) != 0)) && ((param_1[8] == 0 && (param_1[9] == 2)))) &&
       (*(byte *)(param_1 + 10) == uVar7)) {
      bVar19 = true;
      bVar4 = true;
    }
    else {
      bVar43 = 6 < uVar35;
      if (uVar35 != 7) {
        bVar43 = 0xfe < uVar7;
      }
      uVar32 = puVar10[1];
      if (!bVar43 || (uVar35 == 7 || uVar7 == 0xff)) {
        if (uVar7 < 0x100) {
          if (uVar35 != 0xc) {
            iVar11 = DAT_0001d21c + 0x1d1e8 + uVar35;
            bVar43 = *(byte *)(iVar11 + 0x152) ==
                     (*(byte *)(iVar30 + uVar7) & *(byte *)(iVar11 + 0x144));
            goto LAB_0001d10c;
          }
          pbVar39 = (byte *)param_1[2];
          if (param_1[8] == 0) {
            if ((pbVar39 + -param_1[9] < local_2058) || (*local_2058 != *(byte *)(param_1 + 10)))
            goto LAB_0001d15c;
            if (param_1[9] != 1) {
              bVar43 = local_2058[1] == *(byte *)((int)param_1 + 0x29);
              goto LAB_0001d10c;
            }
          }
          else if ((pbVar39 <= local_2058) ||
                  (iVar11 = FUN_000326d8(local_2058,param_1[8],pbVar39,param_1 + 9,bVar41),
                  iVar11 == 0)) goto LAB_0001d15c;
        }
      }
      else {
        bVar43 = (uVar35 & 0xfffffffd) == 9;
LAB_0001d10c:
        if (!bVar43) {
LAB_0001d15c:
          if ((int)(uVar32 + 1) <
              (int)((*(ushort *)(pbVar37 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar37 + 1) >> 8)))
          {
            if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
            *puVar40 = uVar38;
            puVar40[1] = uVar32 + 1;
            puVar40 = puVar40 + 3;
            uVar28 = uVar28 + 1;
          }
          else {
            if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
            *puVar40 = uVar38 + 4;
            puVar40[1] = 0;
            puVar40 = puVar40 + 3;
            uVar28 = uVar28 + 1;
          }
        }
      }
    }
    goto LAB_0001afb0;
  case 0x5f:
LAB_0001ced8:
    uVar36 = uVar32 + 1;
    if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
    puVar13 = puVar17 + 3;
    *puVar17 = uVar38 + 2;
    puVar17[1] = 0;
    if (local_2050 == 0) goto LAB_0001afb0;
    if ((((uVar35 == 0xc) && ((byte *)param_1[2] <= local_2058 + 1)) &&
        ((param_1[6] & 0x8000000U) != 0)) &&
       (((param_1[8] == 0 && (param_1[9] == 2)) && (*(byte *)(param_1 + 10) == uVar7)))) {
      bVar19 = true;
      bVar4 = true;
    }
    else {
      bVar43 = 6 < uVar35;
      if (uVar35 != 7) {
        bVar43 = 0xfe < uVar7;
      }
      if (!bVar43 || (uVar35 == 7 || uVar7 == 0xff)) {
        if (uVar7 < 0x100) {
          if (uVar35 == 0xc) {
            pbVar37 = (byte *)param_1[2];
            if (param_1[8] == 0) {
              if (((pbVar37 + -param_1[9] < local_2058) || (*local_2058 != *(byte *)(param_1 + 10)))
                 || ((param_1[9] != 1 && (local_2058[1] != *(byte *)((int)param_1 + 0x29)))))
              goto LAB_0001cf78;
            }
            else if ((pbVar37 <= local_2058) ||
                    (iVar11 = FUN_000326d8(local_2058,param_1[8],pbVar37,param_1 + 9,bVar41),
                    iVar11 == 0)) {
LAB_0001cf78:
              uVar36 = uVar32 + 1;
              if (local_204c == 0x5e) {
                uVar36 = uVar32;
                puVar13 = puVar17;
              }
              if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
              *puVar40 = uVar38;
              puVar40[1] = 0;
              puVar40 = puVar40 + 3;
              uVar28 = uVar28 + 1;
            }
          }
          else {
            iVar11 = DAT_0001d218 + 0x1d06c + uVar35;
            if (*(byte *)(iVar11 + 0x152) != (*(byte *)(iVar30 + uVar7) & *(byte *)(iVar11 + 0x144))
               ) goto LAB_0001cf78;
          }
        }
      }
      else if ((uVar35 & 0xfffffffd) != 9) goto LAB_0001cf78;
    }
    goto LAB_0001afb0;
  case 0x60:
LAB_0001cb74:
    uVar33 = puVar10[1];
    if (0 < (int)uVar33) {
      uVar36 = uVar32 + 1;
      if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
      puVar13 = puVar17 + 3;
      *puVar17 = uVar38 + 2;
      puVar17[1] = 0;
    }
    if (local_2050 == 0) goto LAB_0001afb0;
    if (((((uVar35 == 0xc) && ((byte *)param_1[2] <= local_2058 + 1)) &&
         ((param_1[6] & 0x8000000U) != 0)) && ((param_1[8] == 0 && (param_1[9] == 2)))) &&
       (*(byte *)(param_1 + 10) == uVar7)) {
      bVar19 = true;
      bVar4 = true;
    }
    else {
      bVar43 = 6 < uVar35;
      if (uVar35 != 7) {
        bVar43 = 0xfe < uVar7;
      }
      if (!bVar43 || (uVar35 == 7 || uVar7 == 0xff)) {
        if (uVar7 < 0x100) {
          if (uVar35 != 0xc) {
            iVar11 = DAT_0001d210 + 0x1cd00 + uVar35;
            bVar43 = *(byte *)(iVar11 + 0x152) ==
                     (*(byte *)(iVar30 + uVar7) & *(byte *)(iVar11 + 0x144));
            goto LAB_0001cc18;
          }
          pbVar37 = (byte *)param_1[2];
          if (param_1[8] == 0) {
            if ((pbVar37 + -param_1[9] < local_2058) || (*local_2058 != *(byte *)(param_1 + 10)))
            goto LAB_0001cc68;
            if (param_1[9] != 1) {
              bVar43 = local_2058[1] == *(byte *)((int)param_1 + 0x29);
              goto LAB_0001cc18;
            }
          }
          else if ((pbVar37 <= local_2058) ||
                  (iVar11 = FUN_000326d8(local_2058,param_1[8],pbVar37,param_1 + 9,bVar41),
                  iVar11 == 0)) goto LAB_0001cc68;
        }
      }
      else {
        bVar43 = (uVar35 & 0xfffffffd) == 9;
LAB_0001cc18:
        if (!bVar43) {
LAB_0001cc68:
          if (local_204c == 0x5f && 0 < (int)uVar33) {
            uVar36 = uVar36 - 1;
            puVar13 = puVar13 + -3;
          }
          if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
          *puVar40 = uVar38;
          puVar40[1] = uVar33 + 1;
          puVar40 = puVar40 + 3;
          uVar28 = uVar28 + 1;
        }
      }
    }
    goto LAB_0001afb0;
  case 0x61:
LAB_0001cd1c:
    uVar36 = uVar32 + 1;
    if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
    puVar17[1] = 0;
    puVar13 = puVar17 + 3;
    *puVar17 = uVar38 + 2;
    if (local_2050 == 0) goto LAB_0001afb0;
    if ((((uVar35 == 0xc) && ((byte *)param_1[2] <= local_2058 + 1)) &&
        ((param_1[6] & 0x8000000U) != 0)) &&
       (((param_1[8] == 0 && (param_1[9] == 2)) && (*(byte *)(param_1 + 10) == uVar7)))) {
      bVar19 = true;
      bVar4 = true;
    }
    else {
      bVar43 = 6 < uVar35;
      if (uVar35 != 7) {
        bVar43 = 0xfe < uVar7;
      }
      if (!bVar43 || (uVar35 == 7 || uVar7 == 0xff)) {
        if (uVar7 < 0x100) {
          if (uVar35 == 0xc) {
            pbVar37 = (byte *)param_1[2];
            if (param_1[8] == 0) {
              if (((pbVar37 + -param_1[9] < local_2058) || (*local_2058 != *(byte *)(param_1 + 10)))
                 || ((param_1[9] != 1 && (local_2058[1] != *(byte *)((int)param_1 + 0x29)))))
              goto LAB_0001cdbc;
            }
            else if ((pbVar37 <= local_2058) ||
                    (iVar11 = FUN_000326d8(local_2058,param_1[8],pbVar37,param_1 + 9,bVar41),
                    iVar11 == 0)) {
LAB_0001cdbc:
              uVar36 = uVar32 + 1;
              if (local_204c == 0x60) {
                uVar36 = uVar32;
                puVar13 = puVar17;
              }
              if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
              *puVar40 = uVar38 + 2;
              puVar40[1] = 0;
              puVar40 = puVar40 + 3;
              uVar28 = uVar28 + 1;
            }
          }
          else {
            iVar11 = DAT_0001d214 + 0x1ceb0 + uVar35;
            if (*(byte *)(iVar11 + 0x152) != (*(byte *)(iVar30 + uVar7) & *(byte *)(iVar11 + 0x144))
               ) goto LAB_0001cdbc;
          }
        }
      }
      else if ((uVar35 & 0xfffffffd) != 9) goto LAB_0001cdbc;
    }
    goto LAB_0001afb0;
  case 0x62:
LAB_0001d264:
    uVar36 = uVar32 + 1;
    if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
    *puVar17 = uVar38 + 4;
    puVar17[1] = 0;
    puVar13 = puVar17 + 3;
    if (local_2050 == 0) goto LAB_0001afb0;
    if ((((uVar35 == 0xc) && ((byte *)param_1[2] <= local_2058 + 1)) &&
        ((param_1[6] & 0x8000000U) != 0)) &&
       (((param_1[8] == 0 && (param_1[9] == 2)) && (*(byte *)(param_1 + 10) == uVar7)))) {
      bVar19 = true;
      bVar4 = true;
    }
    else {
      bVar43 = 6 < uVar35;
      if (uVar35 != 7) {
        bVar43 = 0xfe < uVar7;
      }
      uVar33 = puVar10[1];
      if (!bVar43 || (uVar35 == 7 || uVar7 == 0xff)) {
        if (uVar7 < 0x100) {
          if (uVar35 == 0xc) {
            pbVar39 = (byte *)param_1[2];
            if (param_1[8] == 0) {
              if (((pbVar39 + -param_1[9] < local_2058) || (*local_2058 != *(byte *)(param_1 + 10)))
                 || ((param_1[9] != 1 && (local_2058[1] != *(byte *)((int)param_1 + 0x29)))))
              goto LAB_0001d318;
            }
            else if ((pbVar39 <= local_2058) ||
                    (iVar11 = FUN_000326d8(local_2058,param_1[8],pbVar39,param_1 + 9,bVar41),
                    iVar11 == 0)) {
LAB_0001d318:
              puVar13 = puVar17 + 3;
              uVar36 = uVar32 + 1;
              if (local_204c == 0x61) {
                uVar36 = uVar32;
                puVar13 = puVar17;
              }
              if ((int)(uVar33 + 1) <
                  (int)((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                       (uint)(*(ushort *)(pbVar37 + 1) >> 8))) {
                if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
                *puVar40 = uVar38;
                puVar40[1] = uVar33 + 1;
                puVar40 = puVar40 + 3;
                uVar28 = uVar28 + 1;
              }
              else {
                if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
                *puVar40 = uVar38 + 4;
                puVar40[1] = 0;
                puVar40 = puVar40 + 3;
                uVar28 = uVar28 + 1;
              }
            }
          }
          else {
            iVar11 = DAT_0001d220 + 0x1d42c + uVar35;
            if (*(byte *)(iVar11 + 0x152) != (*(byte *)(iVar30 + uVar7) & *(byte *)(iVar11 + 0x144))
               ) goto LAB_0001d318;
          }
        }
      }
      else if ((uVar35 & 0xfffffffd) != 9) goto LAB_0001d318;
    }
    goto LAB_0001afb0;
  case 99:
    break;
  case 100:
    break;
  case 0x65:
    break;
  case 0x66:
    break;
  case 0x67:
    break;
  case 0x68:
    break;
  case 0x69:
    break;
  case 0x6a:
    break;
  case 0x6b:
    break;
  case 0x6c:
    break;
  case 0x6d:
    break;
  case 0x6e:
    break;
  case 0x6f:
    goto LAB_0001ff08;
  case 0x70:
    goto LAB_0001ff08;
  case 0x71:
LAB_0001ff08:
    uVar33 = local_2050;
    if (local_204c == 0x70) {
      local_2018 = pbVar37 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                             (uint)(*(ushort *)(pbVar37 + 1) >> 8));
      if (local_2050 != 0) {
        uVar33 = FUN_00034784(uVar7,pbVar37 + 3,bVar41);
      }
    }
    else {
      local_2018 = pbVar37 + 0x21;
      if (local_2050 != 0) {
        if (uVar7 < 0x100) {
          uVar33 = (int)(uint)pbVar37[(uVar7 >> 3) + 1] >> (uVar7 & 7) & 1;
        }
        else {
          uVar33 = (uint)(local_204c == 0x6f);
        }
      }
    }
    uVar35 = (int)local_2018 - iVar24;
    switch(*local_2018) {
    case 0x62:
      goto LAB_0001ffe4;
    case 99:
      goto LAB_0001ffe4;
    case 100:
      goto LAB_0002004c;
    case 0x65:
      goto LAB_0002004c;
    case 0x66:
      goto LAB_000200c4;
    case 0x67:
      goto LAB_000200c4;
    case 0x68:
      goto LAB_0002012c;
    case 0x69:
      goto LAB_0002012c;
    case 0x6a:
LAB_0001ffe4:
      if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
      *puVar17 = uVar35 + 1;
      puVar17[1] = 0;
      puVar13 = puVar17 + 3;
      uVar36 = uVar32 + 1;
      if (uVar33 == 0) break;
      if (*local_2018 == 0x6a) {
        puVar13 = puVar17;
        uVar36 = uVar32;
      }
      if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
      *puVar40 = uVar38;
      puVar40[1] = 0;
      puVar40 = puVar40 + 3;
      uVar28 = uVar28 + 1;
      break;
    case 0x6b:
LAB_0002004c:
      uVar12 = puVar10[1];
      if ((int)uVar12 < 1) {
        if (uVar33 != 0) goto LAB_0002009c;
      }
      else {
        if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
        *puVar17 = uVar35 + 1;
        puVar17[1] = 0;
        puVar13 = puVar17 + 3;
        uVar36 = uVar32 + 1;
        if (uVar33 == 0) break;
        if (*local_2018 != 0x6b) {
          puVar17 = puVar17 + 3;
          uVar32 = uVar32 + 1;
        }
LAB_0002009c:
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        *puVar40 = uVar38;
        puVar40[1] = uVar12 + 1;
        puVar13 = puVar17;
        uVar36 = uVar32;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
      break;
    case 0x6c:
LAB_000200c4:
      if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
      *puVar17 = uVar35 + 1;
      puVar17[1] = 0;
      puVar13 = puVar17 + 3;
      uVar36 = uVar32 + 1;
      if (uVar33 == 0) break;
      if (*local_2018 == 0x6c) {
        puVar13 = puVar17;
        uVar36 = uVar32;
      }
      if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
      *puVar40 = uVar35 + 1;
      puVar40[1] = 0;
      puVar40 = puVar40 + 3;
      uVar28 = uVar28 + 1;
      break;
    case 0x6d:
LAB_0002012c:
      uVar12 = puVar10[1];
      if ((int)((*(ushort *)(local_2018 + 1) & 0xff) << 8 | (uint)(*(ushort *)(local_2018 + 1) >> 8)
               ) <= (int)uVar12) {
        uVar36 = uVar32 + 1;
        if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
        puVar13 = puVar17 + 3;
        *puVar17 = uVar35 + 5;
        puVar17[1] = 0;
      }
      if (uVar33 == 0) break;
      uVar32 = (*(ushort *)(local_2018 + 3) & 0xff) << 8 | (uint)(*(ushort *)(local_2018 + 3) >> 8);
      if ((*local_2018 == 0x6d) &&
         ((int)((*(ushort *)(local_2018 + 1) & 0xff) << 8 | (uint)(*(ushort *)(local_2018 + 1) >> 8)
               ) <= (int)uVar12)) {
        uVar36 = uVar36 - 1;
        puVar13 = puVar13 + -3;
      }
      if (uVar32 == 0 || (int)(uVar12 + 1) < (int)uVar32) {
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        *puVar40 = uVar38;
        puVar40[1] = uVar12 + 1;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
      else {
        if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
        *puVar40 = uVar35 + 5;
        puVar40[1] = 0;
        puVar40 = puVar40 + 3;
        uVar28 = uVar28 + 1;
      }
      break;
    default:
      if (uVar33 == 0) break;
      if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
      *puVar40 = uVar35;
      puVar40[1] = 0;
      puVar40 = puVar40 + 3;
      uVar28 = uVar28 + 1;
    }
    goto LAB_0001afb0;
  case 0x72:
    break;
  case 0x73:
    break;
  case 0x74:
    break;
  case 0x75:
    break;
  case 0x76:
    iVar11 = iVar24 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                      (uint)(*(ushort *)(pbVar37 + 1) >> 8));
    if (*param_1 == iVar11) {
      uVar33 = 0;
    }
    else {
      uVar33 = (*(ushort *)(iVar11 + 3) & 0xff) << 8 | (uint)(*(ushort *)(iVar11 + 3) >> 8);
    }
    iVar6 = param_1[0xc];
    for (piVar14 = (int *)iVar6; piVar14 != (int *)0x0; piVar14 = (int *)*piVar14) {
      if ((piVar14[1] == uVar33) && ((byte *)piVar14[2] == local_2058)) {
        iVar11 = -0x1a;
        goto LAB_0001bb34;
      }
    }
    local_1fa4 = local_2058;
    param_1[0xc] = (int)&local_1fac;
    local_1fac = iVar6;
    local_1fa8 = uVar33;
    iVar11 = FUN_0001a8c4(param_1,iVar11,local_2058,(int)local_2058 - (int)pbVar22,local_1f6c,1000,
                          auStack_fcc,1000,param_9);
    param_1[0xc] = local_1fac;
    if (iVar11 != 0) {
      if (0 < iVar11) {
        iVar6 = (iVar11 + -1) * 2;
        piVar14 = local_1f6c + (iVar11 + -1) * 2;
        do {
          pbVar37 = (byte *)0x0;
          if (uVar25 != 0) {
            pbVar37 = pbVar22;
          }
          iVar11 = piVar14[1] - *piVar14;
          if (uVar25 != 0) {
            pbVar39 = pbVar37 + *piVar14;
            while (pbVar39 < pbVar37 + piVar14[1]) {
              pbVar15 = pbVar39 + 1;
              bVar18 = *pbVar39;
              pbVar39 = pbVar15;
              if ((bVar18 & 0xc0) == 0x80) {
                iVar11 = iVar11 + -1;
              }
            }
          }
          if (iVar11 < 1) {
            uVar36 = uVar32 + 1;
            if ((int)uVar26 <= (int)uVar32) goto LAB_000203c0;
            *puVar17 = uVar38 + 3;
            puVar17[1] = 0;
            puVar17 = puVar17 + 3;
          }
          else {
            if ((int)uVar26 <= (int)uVar28) goto LAB_000203c0;
            *puVar40 = 0xfffffffd - uVar38;
            puVar40[1] = 0;
            puVar40[2] = iVar11 - 1;
            puVar40 = puVar40 + 3;
            uVar36 = uVar32;
            uVar28 = uVar28 + 1;
          }
          iVar6 = iVar6 + -2;
          piVar14 = piVar14 + -2;
          puVar13 = puVar17;
          uVar32 = uVar36;
        } while (-1 < iVar6);
        goto LAB_0001afb0;
      }
      goto LAB_00020b0c;
    }
    iVar11 = -0x14;
    goto LAB_0001bb34;
  case 0x77:
    if ((code *)**(undefined4 **)(iVar20 + DAT_00020e70) != (code *)0x0) {
      local_1fa0 = 1;
      local_1f9c = (uint)pbVar37[1];
      local_1f98 = param_5;
      local_1f90 = (int)pbVar23 - (int)pbVar22;
      local_1f8c = (int)local_202c - (int)pbVar22;
      local_1f88 = (int)local_2058 - (int)pbVar22;
      local_1f78 = (*(ushort *)(pbVar37 + 2) & 0xff) << 8 | (uint)(*(ushort *)(pbVar37 + 2) >> 8);
      local_1f84 = 1;
      local_1f74 = (*(ushort *)(pbVar37 + 4) & 0xff) << 8 | (uint)(*(ushort *)(pbVar37 + 4) >> 8);
      local_1f80 = 0xffffffff;
      local_1f7c = param_1[0xb];
      local_1f70 = 0;
      local_1f94 = pbVar22;
      iVar11 = (*(code *)**(undefined4 **)(iVar20 + DAT_00020e70))(&local_1fa0);
      if (iVar11 < 0) goto LAB_0001bb34;
      if (iVar11 != 0) goto LAB_0001afb0;
    }
    if ((int)uVar32 < (int)uVar26) {
      *puVar17 = *(byte *)(*(int *)(iVar20 + DAT_00020e74) + 0x76) + uVar38;
      puVar17[1] = 0;
      puVar13 = puVar17 + 3;
      uVar36 = uVar32 + 1;
      goto LAB_0001afb0;
    }
    goto LAB_0001bdcc;
  case 0x78:
    do {
      pbVar37 = pbVar37 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar37 + 1) >> 8));
    } while (*pbVar37 == 0x77);
    if ((int)uVar32 < (int)uVar26) {
      *puVar17 = (int)pbVar37 - iVar24;
      puVar17[1] = 0;
      puVar13 = puVar17 + 3;
      uVar36 = uVar32 + 1;
      goto LAB_0001afb0;
    }
    goto LAB_0001bdcc;
  case 0x79:
    goto LAB_0001b9c8;
  case 0x7a:
    goto LAB_0001b9c8;
  case 0x7b:
    goto LAB_0001b9c8;
  case 0x7c:
LAB_0001b9c8:
    if (local_2030 == pbVar37) {
      if ((local_202c < local_2058) ||
         (((param_1[6] & 0x400U) == 0 &&
          (((param_1[6] & 0x10000000U) == 0 || (pbVar22 + param_1[5] < local_202c)))))) {
        if (local_203c == -1) {
          if ((int)param_6 < 2) goto LAB_0001ba98;
          local_203c = 1;
LAB_0001bad0:
          iVar11 = (local_203c + -1) * 2;
        }
        else {
          if ((local_203c != 0) && (local_203c = local_203c + 1, local_203c * 2 <= (int)param_6))
          goto LAB_0001bad0;
LAB_0001ba98:
          iVar11 = param_6 - 2;
          local_203c = 0;
        }
        if (0 < iVar11) {
          memmove(param_5 + 2,param_5,iVar11 << 2);
        }
        if (1 < (int)param_6) {
          *param_5 = (int)local_202c - (int)pbVar22;
          param_5[1] = (int)local_2058 - (int)pbVar22;
        }
        iVar11 = local_203c;
        if ((param_1[6] & 0x10000U) != 0) goto LAB_0001bb34;
      }
    }
    else {
      if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
      *puVar17 = uVar38 + 3;
      puVar17[1] = 0;
      if (local_204c != 0x78) {
        if ((int)(uVar32 + 1) < (int)uVar26) {
          puVar17[3] = uVar38 - ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(pbVar37 + 1) >> 8));
          puVar17[4] = 0;
          puVar13 = puVar17 + 6;
          uVar36 = uVar32 + 2;
          goto LAB_0001afb0;
        }
        goto LAB_0001bdcc;
      }
      puVar13 = puVar17 + 3;
      uVar36 = uVar32 + 1;
    }
    goto LAB_0001afb0;
  case 0x7d:
    break;
  case 0x7e:
    goto LAB_00020268;
  case 0x7f:
    goto LAB_00020268;
  case 0x80:
    goto LAB_00020268;
  case 0x81:
LAB_00020268:
    for (pbVar39 = pbVar37 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                             (uint)(*(ushort *)(pbVar37 + 1) >> 8)); *pbVar39 == 0x77;
        pbVar39 = pbVar39 + ((*(ushort *)(pbVar39 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar39 + 1) >> 8))) {
    }
    iVar11 = FUN_0001a8c4(param_1,pbVar37,local_2058,(int)local_2058 - (int)pbVar22,local_1f6c,2,
                          auStack_fcc,1000,param_9);
    if (iVar11 == -0x10) goto LAB_0001bb34;
    if ((uint)((local_204c & 0xfffffffd) == 0x7d) != -(iVar11 >> 0x1f)) {
      if ((int)uVar32 < (int)uVar26) {
        *puVar17 = (uint)(pbVar39 + (3 - iVar24));
        puVar17[1] = 0;
        puVar13 = puVar17 + 3;
        uVar36 = uVar32 + 1;
        goto LAB_0001afb0;
      }
LAB_000203c0:
      iVar11 = -0x13;
      goto LAB_0001bb34;
    }
    goto LAB_0001afb0;
  case 0x82:
    goto LAB_00020924;
  case 0x83:
LAB_00020924:
    iVar11 = FUN_0001a8c4(param_1,pbVar37,local_2058,(int)local_2058 - (int)pbVar22,local_1f6c,2,
                          auStack_fcc,1000,param_9);
    if (-1 < iVar11) {
      iVar11 = local_1f6c[1] - local_1f6c[0];
      do {
        pbVar37 = pbVar37 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar37 + 1) >> 8));
      } while (*pbVar37 == 0x77);
      iVar6 = (int)pbVar37 - iVar24;
      if (*pbVar37 - 0x79 < 2) {
        uVar38 = iVar6 - ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                         (uint)(*(ushort *)(pbVar37 + 1) >> 8));
      }
      else {
        uVar38 = 0xffffffff;
      }
      if (iVar11 == 0) {
        if ((int)uVar32 < (int)uVar26) {
          *puVar17 = iVar6 + 3U;
          puVar17[1] = 0;
          puVar13 = puVar17 + 3;
          uVar36 = uVar32 + 1;
          goto LAB_0001afb0;
        }
      }
      else {
        bVar43 = local_2004 + 1U == uVar32;
        if ((int)uVar32 <= (int)(local_2004 + 1U)) {
          bVar43 = uVar28 == 0;
        }
        if (bVar43) {
          local_2058 = local_2058 + iVar11;
          if (5 < iVar2) {
            *puVar40 = iVar6 + 3U;
            puVar40[1] = 0;
            if ((int)uVar38 < 0) {
              local_2050 = 0;
              puVar40 = puVar40 + 3;
              uVar28 = 1;
            }
            else {
              local_2050 = 0;
              *local_201c = uVar38;
              local_201c[1] = 0;
              local_2004 = -1;
              puVar13 = local_201c + 3;
              uVar36 = 1;
              puVar40 = puVar40 + 3;
              uVar28 = 1;
            }
            goto LAB_0001afb0;
          }
        }
        else {
          if (uVar25 != 0) {
            pbVar37 = pbVar22 + local_1f6c[0];
            while (pbVar37 < pbVar22 + local_1f6c[1]) {
              pbVar39 = pbVar37 + 1;
              bVar18 = *pbVar37;
              pbVar37 = pbVar39;
              if ((bVar18 & 0xc0) == 0x80) {
                iVar11 = iVar11 + -1;
              }
            }
          }
          if ((int)uVar28 < (int)uVar26) {
            puVar40[2] = iVar11 - 1U;
            *puVar40 = 0xfffffffd - iVar6;
            puVar40[1] = 0;
            if ((int)uVar38 < 0) {
              puVar40 = puVar40 + 3;
              uVar28 = uVar28 + 1;
            }
            else {
              if ((int)uVar26 <= (int)(uVar28 + 1)) goto LAB_000203c0;
              puVar40[3] = -uVar38;
              puVar40[4] = 0;
              puVar40[5] = iVar11 - 1U;
              puVar40 = puVar40 + 6;
              uVar28 = uVar28 + 2;
            }
            goto LAB_0001afb0;
          }
        }
      }
      goto LAB_000203c0;
    }
LAB_00020b0c:
    if (iVar11 == -1) goto LAB_0001afb0;
    goto LAB_0001bb34;
  case 0x84:
    goto LAB_0001bba8;
  case 0x85:
    goto LAB_0002077c;
  case 0x86:
    goto LAB_0001bbf8;
  case 0x87:
    goto LAB_0002077c;
  case 0x88:
    goto LAB_00020330;
  case 0x89:
LAB_0001bba8:
    do {
      if ((int)uVar26 <= (int)uVar32) goto LAB_0001bdcc;
      *puVar17 = (uint)(pbVar37 + (3 - iVar24));
      puVar17[1] = 0;
      pbVar37 = pbVar37 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar37 + 1) >> 8));
      puVar13 = puVar17 + 3;
      uVar36 = uVar32 + 1;
      uVar32 = uVar32 + 1;
      puVar17 = puVar17 + 3;
    } while (*pbVar37 == 0x77);
    goto LAB_0001afb0;
  case 0x8a:
    goto LAB_0002077c;
  case 0x8b:
LAB_0001bbf8:
    if ((int)uVar32 < (int)uVar26) {
      puVar17[1] = 0;
      *puVar17 = uVar38 + 5;
      pbVar37 = pbVar37 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar37 + 1) >> 8));
      while( true ) {
        puVar13 = puVar17 + 3;
        uVar32 = uVar32 + 1;
        uVar36 = uVar32;
        if (*pbVar37 != 0x77) break;
        if (uVar26 == uVar32) goto LAB_0001bdcc;
        *puVar13 = (uint)(pbVar37 + (3 - iVar24));
        puVar17[4] = 0;
        pbVar37 = pbVar37 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar37 + 1) >> 8));
        puVar17 = puVar13;
      }
      goto LAB_0001afb0;
    }
    goto LAB_0001bdcc;
  case 0x8c:
    goto LAB_0002077c;
  case 0x8d:
LAB_00020330:
    uVar33 = (*(ushort *)(pbVar37 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar37 + 1) >> 8);
    if (pbVar37[3] == 0x76) {
      if ((code *)**(undefined4 **)(iVar20 + DAT_0001f648) != (code *)0x0) {
        local_1fa0 = 1;
        local_1f9c = (uint)pbVar37[4];
        local_1f98 = param_5;
        local_1f90 = (int)pbVar23 - (int)pbVar22;
        local_1f8c = (int)local_202c - (int)pbVar22;
        local_1f88 = (int)local_2058 - (int)pbVar22;
        local_1f78 = (*(ushort *)(pbVar37 + 5) & 0xff) << 8 | (uint)(*(ushort *)(pbVar37 + 5) >> 8);
        local_1f84 = 1;
        local_1f74 = (*(ushort *)(pbVar37 + 7) & 0xff) << 8 | (uint)(*(ushort *)(pbVar37 + 7) >> 8);
        local_1f80 = 0xffffffff;
        local_1f7c = param_1[0xb];
        local_1f70 = 0;
        local_1f94 = pbVar22;
        iVar11 = (*(code *)**(undefined4 **)(iVar20 + DAT_0001f648))(&local_1fa0);
        if (iVar11 < 0) goto LAB_0001bb34;
        if (iVar11 != 0) goto LAB_0001afb0;
      }
      pbVar37 = pbVar37 + *(byte *)(*(int *)(iVar20 + DAT_0001f64c) + 0x76);
    }
    bVar18 = pbVar37[3];
    bVar43 = 0x8f < bVar18;
    if (bVar18 != 0x90) {
      bVar43 = bVar18 != 0x8d;
    }
    if (!bVar43 || (bVar18 == 0x90 || bVar18 == 0x8e)) {
LAB_000205b8:
      iVar11 = -0x11;
    }
    else {
      if (bVar18 == 0x9d || bVar18 == 0x91) {
joined_r0x000203bc:
        if ((int)uVar32 < (int)uVar26) {
          *puVar17 = uVar38 + uVar33 + 3;
          goto LAB_00020478;
        }
        goto LAB_000203c0;
      }
      uVar36 = (*(ushort *)(pbVar37 + 4) & 0xff) << 8 | (uint)(*(ushort *)(pbVar37 + 4) >> 8);
      if (bVar18 == 0x8f) {
        if (uVar36 != 0xffff) goto LAB_000205b8;
        if (param_1[0xc] == 0) goto joined_r0x000203bc;
        if ((int)uVar26 <= (int)uVar32) goto LAB_000203c0;
        puVar17[1] = 0;
        *puVar17 = uVar38 + 6;
LAB_000204cc:
        puVar13 = puVar17 + 3;
        uVar36 = uVar32 + 1;
        goto LAB_0001afb0;
      }
      for (pbVar39 = pbVar37 + 3 + uVar36; *pbVar39 == 0x77;
          pbVar39 = pbVar39 + ((*(ushort *)(pbVar39 + 1) & 0xff) << 8 |
                              (uint)(*(ushort *)(pbVar39 + 1) >> 8))) {
      }
      iVar11 = FUN_0001a8c4(param_1,pbVar37 + 3,local_2058,(int)local_2058 - (int)pbVar22,local_1f6c
                            ,1000,auStack_fcc,1000,param_9);
      if (iVar11 != -0x10) {
        if ((uint)((bVar18 & 0xfd) == 0x7d) == -(iVar11 >> 0x1f)) {
          if ((int)uVar32 < (int)uVar26) {
            *puVar17 = uVar38 + uVar33 + 3;
            goto LAB_00020478;
          }
        }
        else if ((int)uVar32 < (int)uVar26) {
          *puVar17 = (uint)(pbVar39 + (3 - iVar24));
LAB_00020478:
          puVar17[1] = 0;
          goto LAB_000204cc;
        }
        goto LAB_000203c0;
      }
    }
    goto LAB_0001bb34;
  case 0x8e:
    break;
  case 0x8f:
    break;
  case 0x90:
    break;
  case 0x91:
    break;
  case 0x92:
    break;
  case 0x93:
    goto LAB_0001bc78;
  case 0x94:
LAB_0001bc78:
    if ((int)uVar32 < (int)uVar26) {
      *puVar17 = uVar38 + 1;
      puVar17[1] = 0;
      for (pbVar37 = pbVar37 + ((*(ushort *)(pbVar37 + 2) & 0xff) << 8 |
                               (uint)(*(ushort *)(pbVar37 + 2) >> 8)) + 1; *pbVar37 == 0x77;
          pbVar37 = pbVar37 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                              (uint)(*(ushort *)(pbVar37 + 1) >> 8))) {
      }
      if ((int)(uVar32 + 1) < (int)uVar26) {
        puVar17[4] = 0;
        puVar17[3] = (uint)(pbVar37 + (3 - iVar24));
        puVar13 = puVar17 + 6;
        uVar36 = uVar32 + 2;
        goto LAB_0001afb0;
      }
    }
    goto LAB_0001bdcc;
  case 0x95:
LAB_0002077c:
    bVar43 = local_204c == 0x94;
    local_204c = 0;
    if (bVar43) {
      pbVar37 = pbVar37 + 1;
    }
    pbVar39 = local_2058;
    while (iVar11 = FUN_0001a8c4(param_1,pbVar37,pbVar39,(int)local_2058 - (int)pbVar22,local_1f6c,2
                                 ,auStack_fcc,1000,param_9), -1 < iVar11) {
      if (local_1f6c[1] - local_1f6c[0] == 0) goto LAB_00020810;
      pbVar39 = pbVar39 + (local_1f6c[1] - local_1f6c[0]);
      local_204c = local_204c + 1;
    }
    if (iVar11 != -1) goto LAB_0001bb34;
LAB_00020810:
    if ((int)local_204c < 1 && !bVar43) goto LAB_0001afb0;
    do {
      pbVar37 = pbVar37 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar37 + 1) >> 8));
    } while (*pbVar37 == 0x77);
    bVar43 = local_2004 + 1U == uVar32;
    if ((int)uVar32 <= (int)(local_2004 + 1U)) {
      bVar43 = uVar28 == 0;
    }
    if (bVar43) {
      if (iVar2 < 6) goto LAB_0001bdcc;
      puVar40[1] = 0;
      *puVar40 = ((int)pbVar37 - iVar24) + 3;
      local_2050 = 0;
      puVar40 = puVar40 + 3;
      uVar28 = 1;
      local_2058 = pbVar39;
    }
    else {
      iVar11 = (int)pbVar39 - (int)local_2058;
      pbVar15 = local_2058;
      if (uVar25 != 0) {
        while (pbVar15 < pbVar39) {
          pbVar16 = pbVar15 + 1;
          bVar18 = *pbVar15;
          pbVar15 = pbVar16;
          if ((bVar18 & 0xc0) == 0x80) {
            iVar11 = iVar11 + -1;
          }
        }
      }
      if ((int)uVar26 <= (int)uVar28) goto LAB_0001bdcc;
      puVar40[1] = 0;
      puVar40[2] = iVar11 - 1;
      *puVar40 = 0xfffffffd - ((int)pbVar37 - iVar24);
      puVar40 = puVar40 + 3;
      uVar28 = uVar28 + 1;
    }
LAB_0001afb0:
    local_2004 = local_2004 + 1;
    puVar17 = puVar13;
    uVar32 = uVar36;
    goto LAB_0001aca0;
  case 0x96:
    break;
  case 0x97:
    break;
  case 0x98:
    break;
  case 0x99:
    break;
  case 0x9a:
    break;
  case 0x9b:
    break;
  case 0x9c:
    break;
  case 0x9d:
    break;
  case 0x9e:
    local_1fd8 = local_1fd8 + 1;
    goto LAB_0001afb0;
  case 0x9f:
    break;
  case 0xa0:
    break;
  case 0xa1:
    break;
  case 0xa2:
    for (pbVar37 = pbVar37 + ((*(ushort *)(pbVar37 + 2) & 0xff) << 8 |
                             (uint)(*(ushort *)(pbVar37 + 2) >> 8)) + 1; *pbVar37 == 0x77;
        pbVar37 = pbVar37 + ((*(ushort *)(pbVar37 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar37 + 1) >> 8))) {
    }
    if ((int)uVar32 < (int)uVar26) {
      puVar17[1] = 0;
      *puVar17 = (uint)(pbVar37 + (3 - iVar24));
      puVar13 = puVar17 + 3;
      uVar36 = uVar32 + 1;
      goto LAB_0001afb0;
    }
    goto LAB_0001bdcc;
  case 0xa3:
    goto LAB_0001afb0;
  case 0xa4:
    goto LAB_0001afb0;
  case 0xa5:
    break;
  case 0xa6:
    break;
  case 0xa7:
    break;
  case 0xa8:
    break;
  case 0xa9:
    break;
  case 0xaa:
    break;
  case 0xab:
    break;
  case 0xac:
    break;
  case 0xad:
    break;
  case 0xae:
    break;
  case 0xaf:
    break;
  case 0xb0:
    break;
  case 0xb1:
    break;
  case 0xb2:
    break;
  case 0xb3:
    break;
  case 0xb4:
    break;
  case 0xb5:
    break;
  case 0xb6:
    break;
  case 0xb7:
    break;
  case 0xb8:
    break;
  case 0xb9:
    break;
  case 0xba:
    break;
  case 0xbb:
    break;
  case 0xbc:
    break;
  case 0xbd:
    break;
  case 0xbe:
    break;
  case 0xbf:
    break;
  case 0xc0:
    break;
  case 0xc1:
    break;
  case 0xc2:
    break;
  case 0xc3:
    break;
  case 0xc4:
    break;
  case 0xc5:
    break;
  case 0xc6:
    break;
  case 199:
    break;
  case 200:
    break;
  case 0xc9:
    break;
  case 0xca:
    break;
  case 0xcb:
    break;
  case 0xcc:
    break;
  case 0xcd:
    break;
  case 0xce:
    break;
  case 0xcf:
    break;
  case 0xd0:
    break;
  case 0xd1:
    break;
  case 0xd2:
    break;
  case 0xd3:
    break;
  case 0xd4:
    break;
  case 0xd5:
    break;
  case 0xd6:
    break;
  case 0xd7:
    break;
  case 0xd8:
    break;
  case 0xd9:
    break;
  case 0xda:
    break;
  case 0xdb:
    break;
  case 0xdc:
    break;
  case 0xdd:
    break;
  case 0xde:
    break;
  case 0xdf:
    break;
  case 0xe0:
    break;
  case 0xe1:
    break;
  case 0xe2:
    break;
  case 0xe3:
    break;
  case 0xe4:
    break;
  case 0xe5:
    break;
  case 0xe6:
    break;
  case 0xe7:
    break;
  case 0xe8:
    break;
  case 0xe9:
    break;
  case 0xea:
    break;
  case 0xeb:
    break;
  case 0xec:
    break;
  case 0xed:
    break;
  case 0xee:
    break;
  case 0xef:
    break;
  case 0xf0:
    break;
  case 0xf1:
    break;
  case 0xf2:
    break;
  case 0xf3:
    break;
  case 0xf4:
    break;
  case 0xf5:
    break;
  case 0xf6:
    break;
  case 0xf7:
    break;
  case 0xf8:
    break;
  case 0xf9:
    break;
  case 0xfa:
    break;
  case 0xfb:
    break;
  case 0xfc:
    break;
  case 0xfd:
    break;
  case 0xfe:
    break;
  case 0xff:
    break;
  case 0x100:
  }
switchD_0001b210_default:
  iVar11 = -0x10;
  goto LAB_0001bb34;
code_r0x0001acac:
  if (uVar28 == 0) goto code_r0x0001acb4;
  local_2058 = local_2058 + local_2050;
  puVar17 = local_201c;
  local_201c = local_1fe8;
  local_1fe8 = puVar17;
  bVar19 = bVar3;
  goto LAB_0001abb4;
LAB_0001bdcc:
  iVar11 = -0x13;
  goto LAB_0001bb34;
code_r0x0001acb4:
  if (param_9 != 1) {
    bVar19 = false;
  }
  iVar11 = local_203c;
  if (((bVar19) && (param_7[1] != local_1fd8)) &&
     (((param_1[6] & 0x8000000U) != 0 || (((uint)(local_203c == -1) & (uint)param_1[6] >> 0xf) != 0)
      ))) {
    if (bVar4) {
      iVar11 = -0xc;
    }
    else if ((pbVar23 <= local_2058) && ((byte *)param_1[3] < local_2058)) {
      iVar11 = -0xc;
    }
  }
LAB_0001bb34:
  local_203c = iVar11;
  if (local_2c == *piVar21) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_203c);
}



/* ===== pcre_dfa_exec @ 00020e78 size=2772 ===== */

void pcre_dfa_exec(int *param_1,uint *param_2,byte *param_3,int param_4,int param_5,uint param_6,
                  int *param_7,int param_8,uint *param_9,int param_10)

{
  byte *pbVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  bool bVar19;
  bool bVar20;
  uint local_b0;
  uint local_ac;
  uint local_a4;
  uint local_90;
  byte *local_84;
  int local_64;
  int local_60;
  byte *local_5c;
  byte *local_58;
  byte *local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  undefined2 local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar14 = DAT_0002194c + 0x20e94;
  piVar4 = *(int **)(iVar14 + DAT_00021950);
  local_2c = *piVar4;
  if ((DAT_00021954 & param_6) != 0) {
    iVar14 = -3;
    goto LAB_00020f84;
  }
  if ((param_9 == (uint *)0x0 || (param_1 == (int *)0x0 || param_3 == (byte *)0x0)) ||
     (param_7 == (int *)0x0 && 0 < param_8)) {
    iVar14 = -2;
    goto LAB_00020f84;
  }
  if (param_8 < 0) {
    iVar14 = -0xf;
    goto LAB_00020f84;
  }
  if (param_10 < 0x14) {
    iVar14 = -0x13;
    goto LAB_00020f84;
  }
  if (param_4 < 0) {
    iVar14 = -0x20;
    goto LAB_00020f84;
  }
  if (param_4 < param_5 || param_5 < 0) {
    iVar14 = -0x18;
    goto LAB_00020f84;
  }
  if (*param_1 != DAT_00021958) {
    if (*param_1 == DAT_0002195c) {
      iVar14 = -0x1d;
    }
    else {
      iVar14 = -4;
    }
    goto LAB_00020f84;
  }
  if ((param_1[3] & 1U) == 0) {
    iVar14 = -0x1c;
    goto LAB_00020f84;
  }
  if (((param_6 & 0x20000) != 0) &&
     ((((*param_9 & 0xfffffffe) != 0 || ((int)param_9[1] < 1)) ||
      ((int)((param_10 - 2U) / 3) < (int)param_9[1])))) {
    iVar14 = -0x1e;
    goto LAB_00020f84;
  }
  local_50 = param_1[0xc];
  local_34 = 0;
  if (param_2 == (uint *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar5 = *param_2;
    uVar16 = 0;
    if ((uVar5 & 1) != 0) {
      uVar16 = param_2[1];
    }
    if ((uVar5 & 0x12) != 0) {
      iVar14 = -0x12;
      goto LAB_00020f84;
    }
    if ((uVar5 & 4) != 0) {
      local_34 = param_2[3];
    }
    if ((uVar5 & 8) != 0) {
      local_50 = param_2[4];
    }
  }
  pbVar11 = param_3 + param_5;
  pbVar18 = param_3 + param_4;
  local_84 = pbVar11 + -1;
  local_44 = param_1[2];
  uVar6 = local_44 & 0x800;
  uVar12 = local_44 & 0x10;
  uVar5 = local_44 & 0xfff;
  local_48 = param_6;
  uVar7 = param_6 & DAT_00021960;
  local_60 = (int)param_1 +
             (uint)*(ushort *)(param_1 + 9) * (uint)*(ushort *)((int)param_1 + 0x26) +
             (uint)*(ushort *)((int)param_1 + 0x22);
  local_4c = param_5;
  if (((param_6 & 0x1800000) == 0) && ((local_44 & 0x1800000) != 0)) {
    local_48 = param_6 | local_44 & 0x1800000;
  }
  uVar8 = param_6 & 0x700000;
  if (uVar8 == 0) {
    uVar8 = local_44 & 0x700000;
  }
  local_5c = param_3;
  local_58 = pbVar18;
  if (uVar8 == 0x200000) {
LAB_000211ac:
    uVar3 = 10;
LAB_000211b8:
    local_40 = 0;
    local_38 = CONCAT11(local_38._1_1_,uVar3);
    local_3c = 1;
  }
  else {
    if (uVar8 < 0x200001) {
      if (uVar8 == 0) goto LAB_000211ac;
      if (uVar8 != 0x100000) {
LAB_000210f8:
        iVar14 = -0x17;
        goto LAB_00020f84;
      }
      uVar3 = 0xd;
      goto LAB_000211b8;
    }
    if (uVar8 == 0x400000) {
      local_40 = 1;
    }
    else if (uVar8 == 0x500000) {
      local_40 = 2;
    }
    else {
      if (uVar8 != 0x300000) goto LAB_000210f8;
      local_40 = 0;
      local_3c = 2;
      local_38 = 0xa0d;
    }
  }
  if ((uVar6 != 0) && ((param_6 & 0x2000) == 0)) {
    iVar2 = FUN_00034404(param_3,param_4,&local_64);
    if (iVar2 != 0) {
      if (1 < param_8) {
        param_7[1] = iVar2;
        *param_7 = local_64;
      }
      if (iVar2 < 6) {
        if ((param_6 & 0x8000000) == 0) {
          iVar14 = -10;
        }
        else {
          iVar14 = -0x19;
        }
      }
      else {
        iVar14 = -10;
      }
LAB_00020f84:
      if (local_2c == *piVar4) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar14);
    }
    bVar19 = param_5 == 0;
    iVar2 = param_5;
    if (0 < param_5) {
      iVar2 = param_4 - param_5;
      bVar19 = param_4 == param_5;
    }
    if ((!bVar19 && iVar2 < 0 == (0 < param_5 && SBORROW4(param_4,param_5))) &&
       ((param_3[param_5] & 0xc0) == 0x80)) {
      iVar14 = -0xb;
      goto LAB_00020f84;
    }
  }
  if (local_50 == 0) {
    local_50 = *(uint *)(iVar14 + DAT_00021964);
  }
  uVar9 = param_1[3];
  uVar8 = param_1[2];
  if (uVar12 == 0 && uVar7 == 0) {
    uVar10 = 0;
    if ((uVar9 & 0x10) != 0) {
      uVar17 = (uint)*(byte *)(param_1 + 6);
      local_ac = uVar17;
      if ((uVar9 & 0x20) != 0) {
        local_ac = (uint)*(byte *)(local_50 + uVar17 + 0x100);
      }
      uVar15 = 1;
      local_b0 = uVar10;
      goto LAB_0002129c;
    }
    if (((uVar9 & 0x100) == 0 && uVar16 != 0) && ((*(uint *)(uVar16 + 4) & 1) != 0)) {
      uVar15 = uVar10;
      uVar17 = uVar10;
      local_b0 = uVar16 + 8;
      local_ac = uVar10;
      goto LAB_0002129c;
    }
  }
  uVar15 = 0;
  uVar17 = uVar15;
  local_b0 = uVar15;
  local_ac = uVar15;
LAB_0002129c:
  if ((uVar9 & 0x40) == 0) {
    local_a4 = 0;
    bVar19 = false;
    local_90 = 0;
  }
  else {
    local_a4 = (uint)*(byte *)((int)param_1 + 0x1a);
    local_90 = local_a4;
    if ((uVar9 & 0x80) != 0) {
      local_90 = (uint)*(byte *)(local_50 + local_a4 + 0x100);
    }
    bVar19 = true;
  }
  uVar10 = param_6 & DAT_00021968;
LAB_0002130c:
  do {
    if ((param_6 & 0x20000) == 0) {
      pbVar13 = pbVar18;
      if ((uVar8 & 0x40000) != 0) {
        pbVar13 = pbVar11;
        if (uVar6 == 0) {
          for (; pbVar13 < local_58; pbVar13 = pbVar13 + 1) {
            if (local_40 == 0) {
              if (((pbVar13 <= local_58 + -local_3c) && (*pbVar13 == (byte)local_38)) &&
                 ((local_3c == 1 || (pbVar13[1] == local_38._1_1_)))) break;
            }
            else {
              iVar14 = FUN_000326d8(pbVar13,local_40,local_58,&local_3c,0);
              if (iVar14 != 0) break;
            }
          }
        }
        else {
LAB_000213d0:
          if (pbVar13 < local_58) {
            if (local_40 == 0) {
              if (((pbVar13 <= local_58 + -local_3c) && (*pbVar13 == (byte)local_38)) &&
                 ((local_3c == 1 || (pbVar13[1] == local_38._1_1_)))) goto LAB_00021404;
            }
            else {
              iVar14 = FUN_000326d8(pbVar13,local_40,local_58,&local_3c,1);
              if (iVar14 != 0) goto LAB_00021404;
            }
            do {
              pbVar13 = pbVar13 + 1;
              if (pbVar18 <= pbVar13) break;
            } while ((*pbVar13 & 0xc0) == 0x80);
            goto LAB_000213d0;
          }
        }
      }
LAB_00021404:
      if (((param_6 | param_1[2]) & 0x4000000) == 0) {
        if (uVar15 == 0) {
          if ((uVar9 & 0x100) == 0) {
            pbVar1 = pbVar11;
            if (local_b0 != 0) {
              do {
                pbVar11 = pbVar1;
                if (pbVar13 <= pbVar11) break;
                pbVar1 = pbVar11 + 1;
              } while (((int)(uint)*(byte *)(local_b0 + (*pbVar11 >> 3)) >> (*pbVar11 & 7) & 1U) ==
                       0);
            }
          }
          else if (local_5c + param_5 < pbVar11) {
            if (uVar6 == 0) {
              for (; pbVar11 < pbVar13; pbVar11 = pbVar11 + 1) {
                if (local_40 == 0) {
                  if (((local_5c + local_3c <= pbVar11) && (pbVar11[-local_3c] == (byte)local_38))
                     && ((local_3c == 1 || (pbVar11[1 - local_3c] == local_38._1_1_)))) break;
                }
                else if ((local_5c < pbVar11) &&
                        (iVar14 = FUN_000328c0(pbVar11,local_40,local_5c,&local_3c,0), iVar14 != 0))
                break;
              }
            }
            else {
LAB_000215c0:
              if (pbVar11 < pbVar13) {
                if (local_40 == 0) {
                  if (((local_5c + local_3c <= pbVar11) && (pbVar11[-local_3c] == (byte)local_38))
                     && ((local_3c == 1 || (pbVar11[1 - local_3c] == local_38._1_1_))))
                  goto LAB_000215fc;
                }
                else if ((local_5c < pbVar11) &&
                        (iVar14 = FUN_000328c0(pbVar11,local_40,local_5c,&local_3c,1), iVar14 != 0))
                goto LAB_000215fc;
                do {
                  pbVar11 = pbVar11 + 1;
                  if (pbVar13 == pbVar11) break;
                } while ((*pbVar11 & 0xc0) == 0x80);
                goto LAB_000215c0;
              }
            }
LAB_000215fc:
            if (pbVar11[-1] == 0xd) {
              bVar20 = local_40 != 1;
              if (local_40 - 1U < 2) {
                bVar20 = pbVar13 <= pbVar11;
              }
              if ((!bVar20) && (*pbVar11 == 10)) {
                pbVar11 = pbVar11 + 1;
              }
            }
          }
        }
        else {
          pbVar1 = pbVar11;
          if (uVar17 == local_ac) {
            do {
              pbVar11 = pbVar1;
              if (pbVar13 <= pbVar11) break;
              pbVar1 = pbVar11 + 1;
            } while (*pbVar11 != uVar17);
          }
          else {
            do {
              pbVar11 = pbVar1;
              if (pbVar13 <= pbVar11) break;
              pbVar1 = pbVar11 + 1;
            } while (local_ac != *pbVar11 && uVar17 != *pbVar11);
          }
        }
      }
      if (((param_6 | param_1[2]) & 0x4000000) == 0 && uVar10 == 0) {
        if (((uVar16 != 0) && ((*(uint *)(uVar16 + 4) & 2) != 0)) &&
           ((uint)((int)pbVar18 - (int)pbVar11) < *(uint *)(uVar16 + 0x28))) break;
        if (((bVar19) && ((int)pbVar18 - (int)pbVar11 < 1000)) &&
           (pbVar13 = pbVar11 + uVar15, local_84 < pbVar13)) {
          if (local_a4 == local_90) {
            do {
              local_84 = pbVar13;
              if (pbVar18 <= local_84) goto LAB_000214e4;
              pbVar13 = local_84 + 1;
            } while (*local_84 != local_a4);
          }
          else {
            do {
              local_84 = pbVar13;
              if (pbVar18 <= local_84) goto LAB_000214e4;
              pbVar13 = local_84 + 1;
            } while (*local_84 != local_90 && *local_84 != local_a4);
          }
        }
      }
    }
    local_30 = 0;
    local_54 = pbVar11;
    iVar14 = FUN_0001a8c4(&local_60,local_60,pbVar11,param_5,param_7,param_8,param_9,param_10,0);
    if ((uVar12 != 0 || uVar7 != 0) || iVar14 != -1) {
      if (iVar14 == -0xc && 1 < param_8) {
        *param_7 = (int)local_54 - (int)param_3;
        param_7[1] = param_4;
        if (param_8 != 2) {
          param_7[2] = (int)pbVar11 - (int)param_3;
        }
        iVar14 = -0xc;
      }
      goto LAB_00020f84;
    }
    if ((uVar8 & 0x40000) != 0) {
      if (local_40 == 0) {
        bVar20 = false;
        if ((pbVar11 <= local_58 + -local_3c) && (*pbVar11 == (byte)local_38)) {
          if (local_3c == 1) {
            bVar20 = true;
          }
          else {
            bVar20 = pbVar11[1] == local_38._1_1_;
          }
        }
      }
      else if (pbVar11 < local_58) {
        iVar14 = FUN_000326d8(pbVar11,local_40,local_58,&local_3c,uVar5 >> 0xb);
        bVar20 = false;
        if (iVar14 != 0) {
          bVar20 = true;
        }
      }
      else {
        bVar20 = false;
      }
      if (bVar20) break;
    }
    pbVar11 = pbVar11 + 1;
    pbVar13 = pbVar11;
    if (uVar6 != 0) {
      do {
        pbVar11 = pbVar13;
        if (pbVar18 <= pbVar11) {
          if (pbVar11 == pbVar18) goto LAB_0002130c;
          goto LAB_000214e4;
        }
        pbVar13 = pbVar11 + 1;
      } while ((*pbVar11 & 0xc0) == 0x80);
    }
    if (pbVar18 < pbVar11) break;
    if ((((pbVar11 < pbVar18 && pbVar11[-1] == 0xd) && (*pbVar11 == 10)) &&
        ((param_1[3] & 0x800U) == 0)) && ((local_40 - 1U < 2 || (local_3c == 2)))) {
      pbVar11 = pbVar11 + 1;
    }
  } while( true );
LAB_000214e4:
  iVar14 = -1;
  goto LAB_00020f84;
}



/* ===== FUN_0002196c @ 0002196c size=952 ===== */

int FUN_0002196c(int param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  
  iVar10 = DAT_00021d24 + 0x2198c;
  pbVar8 = (byte *)(*(int *)(param_4 + 0x74) + *(int *)(*(int *)(param_4 + 0xc) + param_1 * 4));
  if (-1 < param_3) {
    if (param_5 == 0) {
      pbVar5 = param_2 + param_3;
      pbVar6 = param_2;
      do {
        if (pbVar6 == pbVar5) goto LAB_00021aec;
        if (*(byte **)(param_4 + 0x78) <= pbVar6) {
          return -2;
        }
        bVar3 = *pbVar8;
        bVar4 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar8 = pbVar8 + 1;
      } while (bVar3 == bVar4);
    }
    else {
      pbVar5 = param_2;
      if (*(int *)(param_4 + 0x4c) != 0) {
        pbVar6 = pbVar8 + param_3;
        while (pbVar8 < pbVar6) {
          if (*(byte **)(param_4 + 0x78) <= pbVar5) {
            return -2;
          }
          bVar3 = *pbVar5;
          uVar7 = (uint)bVar3;
          if (uVar7 < 0xc0) {
            pbVar5 = pbVar5 + 1;
          }
          else {
            uVar13 = (uint)pbVar5[1];
            if ((bVar3 & 0x20) == 0) {
              pbVar5 = pbVar5 + 2;
              uVar7 = uVar13 & 0x3f | (uVar7 & 0x1f) << 6;
            }
            else {
              uVar9 = (uint)pbVar5[2];
              if ((bVar3 & 0x10) == 0) {
                pbVar5 = pbVar5 + 3;
                uVar7 = (uVar13 & 0x3f) << 6 | (uVar7 & 0xf) << 0xc | uVar9 & 0x3f;
              }
              else {
                uVar11 = (uint)pbVar5[3];
                if ((bVar3 & 8) == 0) {
                  pbVar5 = pbVar5 + 4;
                  uVar7 = (uVar9 & 0x3f) << 6 |
                          (uVar7 & 7) << 0x12 | uVar11 & 0x3f | (uVar13 & 0x3f) << 0xc;
                }
                else {
                  pbVar1 = pbVar5 + 4;
                  if ((bVar3 & 4) == 0) {
                    pbVar5 = pbVar5 + 5;
                    uVar7 = (uVar11 & 0x3f) << 6 |
                            (uVar7 & 3) << 0x18 | *pbVar1 & 0x3f | (uVar13 & 0x3f) << 0x12 |
                            (uVar9 & 0x3f) << 0xc;
                  }
                  else {
                    pbVar2 = pbVar5 + 5;
                    pbVar5 = pbVar5 + 6;
                    uVar7 = (*pbVar1 & 0x3f) << 6 |
                            (uVar7 & 1) << 0x1e | *pbVar2 & 0x3f | (uVar13 & 0x3f) << 0x18 |
                            (uVar9 & 0x3f) << 0x12 | (uVar11 & 0x3f) << 0xc;
                  }
                }
              }
            }
          }
          bVar3 = *pbVar8;
          uVar13 = (uint)bVar3;
          if (uVar13 < 0xc0) {
            pbVar8 = pbVar8 + 1;
          }
          else {
            uVar9 = (uint)pbVar8[1];
            if ((bVar3 & 0x20) == 0) {
              pbVar8 = pbVar8 + 2;
              uVar13 = uVar9 & 0x3f | (uVar13 & 0x1f) << 6;
            }
            else {
              uVar11 = (uint)pbVar8[2];
              if ((bVar3 & 0x10) == 0) {
                pbVar8 = pbVar8 + 3;
                uVar13 = (uVar9 & 0x3f) << 6 | (uVar13 & 0xf) << 0xc | uVar11 & 0x3f;
              }
              else {
                uVar12 = (uint)pbVar8[3];
                if ((bVar3 & 8) == 0) {
                  pbVar8 = pbVar8 + 4;
                  uVar13 = (uVar11 & 0x3f) << 6 |
                           (uVar13 & 7) << 0x12 | uVar12 & 0x3f | (uVar9 & 0x3f) << 0xc;
                }
                else {
                  pbVar1 = pbVar8 + 4;
                  if ((bVar3 & 4) == 0) {
                    pbVar8 = pbVar8 + 5;
                    uVar13 = (uVar12 & 0x3f) << 6 |
                             (uVar13 & 3) << 0x18 | *pbVar1 & 0x3f | (uVar9 & 0x3f) << 0x12 |
                             (uVar11 & 0x3f) << 0xc;
                  }
                  else {
                    pbVar2 = pbVar8 + 5;
                    pbVar8 = pbVar8 + 6;
                    uVar13 = (*pbVar1 & 0x3f) << 6 |
                             (uVar13 & 1) << 0x1e | *pbVar2 & 0x3f | (uVar9 & 0x3f) << 0x18 |
                             (uVar11 & 0x3f) << 0x12 | (uVar12 & 0x3f) << 0xc;
                  }
                }
              }
            }
          }
          if ((uVar7 != uVar13) &&
             (iVar15 = *(int *)(iVar10 + DAT_00021d30) +
                       (uint)*(ushort *)
                              (*(int *)(iVar10 + DAT_00021d28) +
                              ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_00021d2c) +
                                                       ((int)uVar13 >> 7)) * 0x80 + (uVar13 & 0x7f))
                              * 2) * 8, uVar13 + *(int *)(iVar15 + 4) != uVar7)) {
            puVar14 = (uint *)((uint)*(byte *)(iVar15 + 3) * 4 + -4 +
                              *(int *)(iVar10 + DAT_00021d34));
            do {
              puVar14 = puVar14 + 1;
              if (uVar7 < *puVar14) {
                return -1;
              }
            } while (*puVar14 != uVar7);
          }
        }
LAB_00021aec:
        return (int)pbVar5 - (int)param_2;
      }
      pbVar8 = pbVar8 + -1;
      do {
        if (param_2 + param_3 == pbVar5) goto LAB_00021aec;
        if (*(byte **)(param_4 + 0x78) <= pbVar5) {
          return -2;
        }
        pbVar8 = pbVar8 + 1;
        bVar3 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (*(char *)(*(int *)(param_4 + 0x38) + (uint)*pbVar8) ==
               *(char *)(*(int *)(param_4 + 0x38) + (uint)bVar3));
    }
  }
  return -1;
}



/* ===== FUN_00021d38 @ 00021d38 size=61008 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00021d38(undefined4 ******param_1,byte *param_2,undefined4 ******param_3,uint param_4,
                 uint *param_5,undefined4 *******param_6,uint param_7)

{
  byte bVar1;
  size_t sVar2;
  uint uVar3;
  ushort *puVar4;
  size_t __n;
  ushort uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 ******ppppppuVar8;
  ushort uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  undefined4 ******ppppppuVar27;
  byte *pbVar28;
  size_t __n_00;
  undefined4 *puVar29;
  undefined4 ******ppppppuVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  byte bVar35;
  byte *local_138;
  uint local_134;
  undefined4 ******local_12c;
  undefined4 *******local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  undefined4 *******local_100;
  undefined4 ******local_fc;
  uint *local_f8;
  uint local_f4;
  undefined1 *local_f0;
  uint local_ec;
  uint local_e8;
  undefined4 ******local_e4;
  undefined4 local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined1 auStack_ac [120];
  undefined1 auStack_34 [8];
  int local_2c;
  
  local_128 = param_6;
  iVar10 = DAT_00022ce4 + 0x21d68;
  piVar11 = *(int **)(iVar10 + DAT_00022ce8);
  local_2c = *piVar11;
  if (param_2 != (byte *)0x0) {
    local_120 = 0;
    local_118 = 0;
    local_134 = param_4;
    local_12c = param_3;
LAB_0002229c:
    uVar12 = param_5[0x13];
    uVar3 = *param_5;
    *param_5 = uVar3 + 1;
    if (uVar3 < param_5[1]) {
      if (param_7 < param_5[2]) {
        local_138 = param_2;
        if (param_5[0x26] == 2) {
          local_100 = local_128;
          param_5[0x26] = 0;
          local_128 = &local_100;
          local_fc = param_1;
        }
LAB_000222f4:
        param_2 = local_138;
        ppppppuVar27 = param_1;
        uVar14 = DAT_00022d10;
        uVar20 = DAT_00022d04;
        uVar13 = (uint)*param_2;
        param_1 = ppppppuVar27;
        pbVar26 = param_2;
        local_138 = param_2;
        switch(uVar13) {
        case 0:
          goto LAB_00022ff4;
        case 1:
          goto LAB_00023a78;
        case 2:
          bVar34 = ppppppuVar27 == (undefined4 ******)(param_5[0x1d] + param_5[0x25]);
          goto LAB_00023a80;
        case 3:
          local_138 = param_2 + 1;
          local_12c = ppppppuVar27;
          goto LAB_000222f4;
        case 4:
          goto LAB_00023d20;
        case 5:
LAB_00023d20:
          if (uVar12 == 0) {
            if ((undefined4 ******)param_5[0x1d] == ppppppuVar27) {
              uVar3 = 0;
            }
            else {
              if (ppppppuVar27 <= (undefined4 ******)param_5[0x21]) {
                param_5[0x21] = (uint)((int)ppppppuVar27 + -1);
              }
              uVar3 = (uint)*(byte *)((int)ppppppuVar27 + -1);
              if (param_5[0x15] == 0) {
                uVar3 = (*(byte *)(param_5[0x10] + uVar3) & 0x1f) >> 4;
              }
              else if (uVar3 == 0x5f) {
                uVar3 = 1;
              }
              else {
                uVar3 = (uint)((*(uint *)(*(int *)(iVar10 + DAT_00024d64) +
                                         (uint)*(byte *)(*(int *)(iVar10 + DAT_00024d74) +
                                                         (uint)*(ushort *)
                                                                (*(int *)(iVar10 + DAT_00024d6c) +
                                                                ((short)(ushort)*(byte *)(*(int *)(
                                                  iVar10 + DAT_00024d70) + ((int)uVar3 >> 7)) * 0x80
                                                  + (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) & 0xfffffffd)
                              == 1);
              }
            }
            if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00023e08;
            uVar20 = (uint)*(byte *)ppppppuVar27;
            if (param_5[0x15] == 0) {
              bVar35 = *(byte *)(param_5[0x10] + uVar20);
LAB_00024214:
              uVar14 = (bVar35 & 0x1f) >> 4;
            }
            else {
              if (uVar20 == 0x5f) goto LAB_0002421c;
              iVar19 = *(int *)(iVar10 + DAT_00024d64);
              iVar17 = *(int *)(iVar10 + DAT_00024d6c);
              uVar9 = (ushort)*(byte *)(*(int *)(iVar10 + DAT_00024d70) + ((int)uVar20 >> 7));
              uVar5 = 0x80;
LAB_00023fb4:
              uVar14 = (uint)((*(uint *)(iVar19 + (uint)*(byte *)(*(int *)(iVar10 + DAT_00024d74) +
                                                                  (uint)*(ushort *)
                                                                         (iVar17 + ((int)(short)
                                                  uVar5 * (int)(short)uVar9 + (uVar20 & 0x7f)) * 2)
                                                  * 8 + 1) * 4) & 0xfffffffd) == 1);
            }
          }
          else {
            ppppppuVar30 = ppppppuVar27;
            if ((undefined4 ******)param_5[0x1d] == ppppppuVar27) {
LAB_00023f40:
              uVar3 = 0;
            }
            else {
              do {
                ppppppuVar8 = ppppppuVar30;
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar8 + -1);
              } while ((*(byte *)ppppppuVar30 & 0xc0) == 0x80);
              if (ppppppuVar30 < (undefined4 ******)param_5[0x21]) {
                param_5[0x21] = (uint)ppppppuVar30;
              }
              bVar35 = *(byte *)ppppppuVar30;
              uVar3 = (uint)bVar35;
              if (0xbf < uVar3) {
                if ((bVar35 & 0x20) == 0) {
                  uVar20 = (uVar3 & 0x1f) << 6;
                  uVar3 = *(byte *)ppppppuVar8 & 0x3f;
                }
                else {
                  if ((bVar35 & 0x10) == 0) {
                    uVar20 = (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar8 + 1) & 0x3f;
                    uVar3 = (uint)*(byte *)ppppppuVar8;
                  }
                  else if ((bVar35 & 8) == 0) {
                    uVar20 = (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar8 + 2) & 0x3f |
                             (*(byte *)ppppppuVar8 & 0x3f) << 0xc;
                    uVar3 = (uint)*(byte *)((int)ppppppuVar8 + 1);
                  }
                  else if ((bVar35 & 4) == 0) {
                    uVar20 = (uVar3 & 3) << 0x18 | *(byte *)((int)ppppppuVar8 + 3) & 0x3f |
                             (*(byte *)ppppppuVar8 & 0x3f) << 0x12 |
                             (*(byte *)((int)ppppppuVar8 + 1) & 0x3f) << 0xc;
                    uVar3 = (uint)*(byte *)((int)ppppppuVar8 + 2);
                  }
                  else {
                    uVar20 = (uVar3 & 1) << 0x1e | *(byte *)(ppppppuVar8 + 1) & 0x3f |
                             (*(byte *)ppppppuVar8 & 0x3f) << 0x18 |
                             (*(byte *)((int)ppppppuVar8 + 1) & 0x3f) << 0x12 |
                             (*(byte *)((int)ppppppuVar8 + 2) & 0x3f) << 0xc;
                    uVar3 = (uint)*(byte *)((int)ppppppuVar8 + 3);
                  }
                  uVar3 = (uVar3 & 0x3f) << 6;
                }
                uVar3 = uVar3 | uVar20;
              }
              if (param_5[0x15] == 0) {
                if ((0xff < uVar3) || ((*(byte *)(param_5[0x10] + uVar3) & 0x10) == 0))
                goto LAB_00023f40;
              }
              else if (uVar3 != 0x5f) {
                uVar3 = (uint)((*(uint *)(*(int *)(iVar10 + DAT_00024d64) +
                                         (uint)*(byte *)(*(int *)(iVar10 + DAT_00024d74) +
                                                         (uint)*(ushort *)
                                                                (*(int *)(iVar10 + DAT_00024d6c) +
                                                                ((short)(ushort)*(byte *)(*(int *)(
                                                  iVar10 + DAT_00024d70) + ((int)uVar3 >> 7)) * 0x80
                                                  + (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) & 0xfffffffd)
                              == 1);
                goto LAB_00023dfc;
              }
              uVar3 = 1;
            }
LAB_00023dfc:
            if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
              bVar35 = *(byte *)ppppppuVar27;
              uVar20 = (uint)bVar35;
              if (0xbf < uVar20) {
                if ((bVar35 & 0x20) == 0) {
                  uVar14 = (uVar20 & 0x1f) << 6;
                  uVar20 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f;
                }
                else {
                  if ((bVar35 & 0x10) == 0) {
                    uVar14 = (uVar20 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
                    uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
                  }
                  else if ((bVar35 & 8) == 0) {
                    uVar14 = (uVar20 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                             (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
                    uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 2);
                  }
                  else if ((bVar35 & 4) == 0) {
                    uVar14 = (uVar20 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                             (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
                             (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
                    uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 3);
                  }
                  else {
                    uVar14 = (uVar20 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                             (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
                             (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                             (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
                    uVar20 = (uint)*(byte *)(ppppppuVar27 + 1);
                  }
                  uVar20 = (uVar20 & 0x3f) << 6;
                }
                uVar20 = uVar20 | uVar14;
              }
              if (param_5[0x15] == 0) {
                uVar14 = 0;
                if (uVar20 < 0x100) {
                  bVar35 = *(byte *)(param_5[0x10] + uVar20);
                  goto LAB_00024214;
                }
              }
              else {
                if (uVar20 != 0x5f) {
                  iVar19 = *(int *)(iVar10 + DAT_00024d64);
                  iVar17 = *(int *)(iVar10 + DAT_00024d6c);
                  uVar5 = (ushort)*(byte *)(*(int *)(iVar10 + DAT_00024d70) + ((int)uVar20 >> 7));
                  uVar9 = 0x80;
                  goto LAB_00023fb4;
                }
LAB_0002421c:
                uVar14 = 1;
              }
            }
            else {
LAB_00023e08:
              uVar14 = 0;
              if (param_5[0x22] != 0) {
                if (((undefined4 ******)param_5[0x21] < ppppppuVar27) &&
                   (param_5[0x19] = 1, 1 < (int)param_5[0x22])) {
LAB_00023c68:
                  uVar3 = 0xfffffff4;
                  goto LAB_00021dc8;
                }
                uVar14 = 0;
              }
            }
          }
          if (*param_2 == 5) {
            uVar14 = (uint)(uVar14 == uVar3);
          }
          else {
            uVar14 = uVar14 ^ uVar3;
          }
          local_138 = param_2 + 1;
          if (uVar14 != 0) goto LAB_000221ac;
          goto LAB_000222f4;
        case 6:
          if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
            bVar35 = *(byte *)ppppppuVar27;
            uVar3 = (uint)bVar35;
            if (uVar12 == 0 || uVar3 < 0xc0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            }
            else {
              uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
              if ((bVar35 & 0x20) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
                uVar3 = uVar20 & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                uVar3 = (uVar20 & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
              }
              else if ((bVar35 & 8) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                        (uVar20 & 0x3f) << 0xc;
                param_1 = ppppppuVar27 + 1;
              }
              else if ((bVar35 & 4) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                        (uVar20 & 0x3f) << 0x12 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
              }
              else {
                uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                        (uVar20 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12
                        | (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
              }
              if (0xff < uVar3) goto LAB_000243bc;
            }
            bVar34 = (*(byte *)(param_5[0x10] + uVar3) & 4) == 0;
            goto LAB_000243b8;
          }
          goto LAB_000242c4;
        case 7:
          if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
            bVar35 = *(byte *)ppppppuVar27;
            uVar3 = (uint)bVar35;
            if (uVar12 == 0 || uVar3 < 0xc0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            }
            else {
              uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
              if ((bVar35 & 0x20) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
                uVar3 = uVar20 & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                uVar3 = (uVar20 & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
              }
              else if ((bVar35 & 8) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                        (uVar20 & 0x3f) << 0xc;
                param_1 = ppppppuVar27 + 1;
              }
              else if ((bVar35 & 4) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                        (uVar20 & 0x3f) << 0x12 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
              }
              else {
                uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                        (uVar20 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12
                        | (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
              }
              if (0xff < uVar3) goto LAB_000221ac;
            }
            bVar34 = (*(byte *)(param_5[0x10] + uVar3) & 4) == 0;
            goto LAB_0002453c;
          }
          goto LAB_000242c4;
        case 8:
          if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
            bVar35 = *(byte *)ppppppuVar27;
            uVar3 = (uint)bVar35;
            if (uVar12 == 0 || uVar3 < 0xc0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            }
            else {
              uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
              if ((bVar35 & 0x20) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
                uVar3 = uVar20 & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                uVar3 = (uVar20 & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
              }
              else if ((bVar35 & 8) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                        (uVar20 & 0x3f) << 0xc;
                param_1 = ppppppuVar27 + 1;
              }
              else if ((bVar35 & 4) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                        (uVar20 & 0x3f) << 0x12 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
              }
              else {
                uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                        (uVar20 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12
                        | (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
              }
              if (0xff < uVar3) goto LAB_000243bc;
            }
            bVar34 = (*(byte *)(param_5[0x10] + uVar3) & 1) == 0;
            goto LAB_000243b8;
          }
          goto LAB_000242c4;
        case 9:
          if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
            bVar35 = *(byte *)ppppppuVar27;
            uVar3 = (uint)bVar35;
            if (uVar12 == 0 || uVar3 < 0xc0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            }
            else {
              uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
              if ((bVar35 & 0x20) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
                uVar3 = uVar20 & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                uVar3 = (uVar20 & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
              }
              else if ((bVar35 & 8) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                        (uVar20 & 0x3f) << 0xc;
                param_1 = ppppppuVar27 + 1;
              }
              else if ((bVar35 & 4) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                        (uVar20 & 0x3f) << 0x12 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
              }
              else {
                uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                        (uVar20 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12
                        | (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
              }
              if (0xff < uVar3) goto LAB_000221ac;
            }
            bVar34 = (*(byte *)(param_5[0x10] + uVar3) & 1) == 0;
            goto LAB_0002453c;
          }
          goto LAB_000242c4;
        case 10:
          if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
            bVar35 = *(byte *)ppppppuVar27;
            uVar3 = (uint)bVar35;
            if (uVar12 == 0 || uVar3 < 0xc0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            }
            else {
              uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
              if ((bVar35 & 0x20) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
                uVar3 = uVar20 & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                uVar3 = (uVar20 & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
              }
              else if ((bVar35 & 8) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                        (uVar20 & 0x3f) << 0xc;
                param_1 = ppppppuVar27 + 1;
              }
              else if ((bVar35 & 4) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                        (uVar20 & 0x3f) << 0x12 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
              }
              else {
                uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                        (uVar20 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12
                        | (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
              }
              if (0xff < uVar3) goto LAB_000243bc;
            }
            bVar34 = (*(byte *)(param_5[0x10] + uVar3) & 0x10) == 0;
LAB_000243b8:
            if (bVar34) goto LAB_000243bc;
            goto LAB_000221ac;
          }
          goto LAB_000242c4;
        case 0xb:
          if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
            bVar35 = *(byte *)ppppppuVar27;
            uVar3 = (uint)bVar35;
            if (uVar12 == 0 || uVar3 < 0xc0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            }
            else {
              uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
              if ((bVar35 & 0x20) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
                uVar3 = uVar20 & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                uVar3 = (uVar20 & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
              }
              else if ((bVar35 & 8) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                        (uVar20 & 0x3f) << 0xc;
                param_1 = ppppppuVar27 + 1;
              }
              else if ((bVar35 & 4) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                        (uVar20 & 0x3f) << 0x12 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
              }
              else {
                uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                        (uVar20 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12
                        | (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
              }
              if (0xff < uVar3) goto LAB_000221ac;
            }
            bVar34 = (*(byte *)(param_5[0x10] + uVar3) & 0x10) == 0;
LAB_0002453c:
            if (!bVar34) goto LAB_000243bc;
            goto LAB_000221ac;
          }
          goto LAB_000242c4;
        case 0xc:
          ppppppuVar30 = (undefined4 ******)param_5[0x1e];
          if (param_5[6] == 0) {
            bVar34 = false;
            if ((ppppppuVar27 <= (undefined4 ******)((int)ppppppuVar30 - param_5[7])) &&
               (*(byte *)ppppppuVar27 == (byte)param_5[0xd])) {
              if (param_5[7] == 1) {
                bVar34 = true;
              }
              else {
                bVar34 = *(byte *)((int)ppppppuVar27 + 1) == *(byte *)((int)param_5 + 0x35);
              }
            }
          }
          else if (ppppppuVar27 < ppppppuVar30) {
            iVar19 = FUN_000326d8(ppppppuVar27,param_5[6],ppppppuVar30,param_5 + 7,uVar12);
            bVar34 = false;
            if (iVar19 != 0) {
              bVar34 = true;
            }
          }
          else {
            bVar34 = false;
          }
          if (!bVar34) {
            if (((((param_5[0x22] == 0) || (ppppppuVar27 != (undefined4 ******)(param_5[0x1e] - 1)))
                 || (param_5[6] != 0)) ||
                ((param_5[7] != 2 || (*(byte *)ppppppuVar27 != (byte)param_5[0xd])))) ||
               (param_5[0x19] = 1, (int)param_5[0x22] < 2)) goto LAB_000242b8;
            goto LAB_00023c68;
          }
          goto LAB_000221ac;
        case 0xd:
LAB_000242b8:
          if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            ppppppuVar27 = param_1;
            if (uVar12 != 0) {
              do {
                param_1 = ppppppuVar27;
                if (param_1 == (undefined4 ******)param_5[0x1e]) break;
                ppppppuVar27 = (undefined4 ******)((int)param_1 + 1);
              } while (((uint)*param_1 & 0xc0) == 0x80);
            }
            goto LAB_00023aa8;
          }
          goto LAB_000242c4;
        case 0xe:
          if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            goto LAB_00023aa8;
          }
          goto LAB_000242c4;
        case 0xf:
          goto LAB_000254d8;
        case 0x10:
LAB_000254d8:
          if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
          bVar35 = *(byte *)ppppppuVar27;
          uVar3 = (uint)bVar35;
          if (uVar12 == 0 || uVar3 < 0xc0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
          }
          else if ((bVar35 & 0x20) == 0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
            uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
          }
          else if ((bVar35 & 0x10) == 0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
            uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
                    (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
          }
          else if ((bVar35 & 8) == 0) {
            param_1 = ppppppuVar27 + 1;
            uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                    (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                    (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
          }
          else if ((bVar35 & 4) == 0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
            uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                    (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                    (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
                    (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
          }
          else {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
            uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                    (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                    (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
                    (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                    (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
          }
          uVar20 = (uint)*(ushort *)
                          (*(int *)(iVar10 + DAT_00024d6c) +
                          ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_00024d70) +
                                                   ((int)uVar3 >> 7)) * 0x80 + (uVar3 & 0x7f)) * 2);
          iVar19 = *(int *)(iVar10 + DAT_00024d74) + uVar20 * 8;
          switch(param_2[1]) {
          case 0:
            goto LAB_000257f8;
          case 1:
            bVar35 = *(byte *)(iVar19 + 1);
            bVar34 = 4 < bVar35;
            bVar32 = bVar35 == 5;
            if (!bVar32) {
              bVar34 = bVar35 != 8;
            }
            bVar31 = bVar35 == 9;
            if (!bVar34 || (bVar32 || bVar31)) {
              bVar35 = 1;
            }
            if (bVar34 && (!bVar32 && !bVar31)) {
              bVar35 = 0;
            }
            goto LAB_000256ec;
          case 2:
            if ((*(uint *)(*(int *)(iVar10 + DAT_00024d64) + (uint)*(byte *)(iVar19 + 1) * 4) ==
                (uint)param_2[2]) != (uVar13 == 0x10)) goto LAB_000221ac;
            break;
          case 3:
            if ((param_2[2] == *(byte *)(iVar19 + 1)) != (uVar13 == 0x10)) goto LAB_000221ac;
            break;
          case 4:
            if ((param_2[2] == *(byte *)(*(int *)(iVar10 + DAT_00024d74) + uVar20 * 8)) !=
                (uVar13 == 0x10)) goto LAB_000221ac;
            break;
          case 5:
            bVar35 = (*(uint *)(*(int *)(iVar10 + DAT_00024d64) + (uint)*(byte *)(iVar19 + 1) * 4) &
                     0xfffffffd) == 1;
            goto LAB_000256ec;
          case 6:
            goto LAB_000257d0;
          case 7:
LAB_000257d0:
            if (uVar3 != 0x180e) {
              if (uVar3 < 0x180f) {
                if (uVar3 != 0x20) {
                  if (uVar3 < 0x21) {
                    bVar32 = 3 < uVar3 - 9;
                    bVar34 = uVar3 - 9 == 4;
LAB_000257f4:
                    if (bVar32 && !bVar34) {
LAB_00025820:
                      if ((*(int *)(*(int *)(iVar10 + DAT_00024d64) +
                                   (uint)*(byte *)(iVar19 + 1) * 4) != 6) == (uVar13 == 0xf)) break;
                      goto LAB_000221ac;
                    }
                  }
                  else if ((uVar3 != 0xa0) && (uVar3 != 0x1680)) {
                    bVar34 = uVar3 == 0x85;
                    goto LAB_0002581c;
                  }
                }
              }
              else if (uVar3 < 0x202a) {
                if (uVar3 < 0x2028) {
                  bVar32 = 9 < uVar3 - 0x2000;
                  bVar34 = uVar3 - 0x2000 == 10;
                  goto LAB_000257f4;
                }
              }
              else if ((uVar3 != 0x205f) && (uVar3 != 0x3000)) {
                bVar34 = uVar3 == 0x202f;
LAB_0002581c:
                if (!bVar34) goto LAB_00025820;
              }
            }
LAB_000257f8:
            bVar34 = uVar13 == 0xf;
            goto LAB_00025800;
          case 8:
            bVar35 = uVar3 == 0x5f ||
                     (*(uint *)(*(int *)(iVar10 + DAT_00024d64) + (uint)*(byte *)(iVar19 + 1) * 4) &
                     0xfffffffd) == 1;
            goto LAB_000256ec;
          case 9:
            puVar22 = (uint *)((uint)param_2[2] * 4 + -4 + *(int *)(iVar10 + DAT_00024d68));
            do {
              puVar22 = puVar22 + 1;
              if (uVar3 < *puVar22) {
                bVar34 = uVar13 == 0x10;
                goto LAB_00025800;
              }
            } while (*puVar22 != uVar3);
            if (uVar13 != 0x10) goto LAB_000221ac;
            break;
          case 10:
            if (uVar3 == 0x24 || (uVar3 & 0xffffffdf) == 0x40) {
              bVar35 = 1;
            }
            else {
              bVar35 = 0xdfff < uVar3;
              if (uVar3 - 0xa0 < 0xd760) {
                bVar35 = 1;
              }
            }
LAB_000256ec:
            bVar34 = (uVar13 == 0xf) == (bool)bVar35;
LAB_00025800:
            if (bVar34) goto LAB_000221ac;
            break;
          default:
            goto switchD_00029140_default;
          }
LAB_00022248:
          local_138 = pbVar26 + 3;
          goto LAB_000222f4;
        case 0x11:
          if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
          bVar35 = *(byte *)ppppppuVar27;
          uVar3 = (uint)bVar35;
          if (uVar12 == 0 || uVar3 < 0xc0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
          }
          else if ((bVar35 & 0x20) == 0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
            uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
          }
          else if ((bVar35 & 0x10) == 0) {
            uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
                    (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
          }
          else if ((bVar35 & 8) == 0) {
            uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                    (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                    (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
            param_1 = ppppppuVar27 + 1;
          }
          else if ((bVar35 & 4) == 0) {
            uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                    (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                    (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
                    (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
          }
          else {
            uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                    (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                    (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
                    (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                    (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
          }
          if (uVar3 == 0xd) {
            if (param_1 < (undefined4 ******)param_5[0x1e]) {
              if (*(byte *)param_1 == 10) {
                param_1 = (undefined4 ******)((int)param_1 + 1);
              }
              goto LAB_000243bc;
            }
            if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < param_1)) &&
               (param_5[0x19] = 1, 1 < (int)param_5[0x22])) {
              uVar3 = 0xfffffff4;
              goto LAB_00021dc8;
            }
          }
          else {
            if (uVar3 < 0xe) {
              if (uVar3 == 10) goto LAB_000243bc;
              if (uVar3 < 10) goto LAB_000231ec;
            }
            else if ((uVar3 != 0x85) && ((uVar3 < 0x85 || (1 < uVar3 - 0x2028)))) goto LAB_000231ec;
            if (param_5[0x1a] != 0) goto LAB_000221ac;
          }
          goto LAB_000243bc;
        case 0x12:
          if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
            bVar35 = *(byte *)ppppppuVar27;
            uVar3 = (uint)bVar35;
            if (uVar12 == 0 || uVar3 < 0xc0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            }
            else {
              uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
              if ((bVar35 & 0x20) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
                uVar3 = uVar20 & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                uVar3 = (uVar20 & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
              }
              else if ((bVar35 & 8) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                        (uVar20 & 0x3f) << 0xc;
                param_1 = ppppppuVar27 + 1;
              }
              else if ((bVar35 & 4) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                        (uVar20 & 0x3f) << 0x12 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
              }
              else {
                uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                        (uVar20 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12
                        | (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
              }
            }
            if (uVar3 != 0x180e) {
              if (uVar3 < 0x180f) {
                if (uVar3 == 0x20) goto LAB_000231ec;
                if (uVar3 < 0x21) {
                  bVar34 = uVar3 == 9;
                }
                else {
                  if (uVar3 == 0xa0) goto LAB_000231ec;
                  bVar34 = uVar3 == 0x1680;
                }
              }
              else {
                if (uVar3 == 0x202f) goto LAB_000231ec;
                if (uVar3 < 0x2030) {
                  bVar32 = 9 < uVar3 - 0x2000;
                  bVar34 = uVar3 - 0x2000 == 10;
                  goto LAB_00024fec;
                }
                if (uVar3 == 0x205f) goto LAB_000231ec;
                bVar34 = uVar3 == 0x3000;
              }
              if (!bVar34) goto LAB_000243bc;
            }
            goto LAB_000231ec;
          }
          goto LAB_000242c4;
        case 0x13:
          if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
          bVar35 = *(byte *)ppppppuVar27;
          uVar3 = (uint)bVar35;
          if (uVar12 == 0 || uVar3 < 0xc0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
          }
          else {
            uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
            if ((bVar35 & 0x20) == 0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
              uVar3 = uVar20 & 0x3f | (uVar3 & 0x1f) << 6;
            }
            else if ((bVar35 & 0x10) == 0) {
              uVar3 = (uVar20 & 0x3f) << 6 |
                      (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
            }
            else if ((bVar35 & 8) == 0) {
              uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                      (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                      (uVar20 & 0x3f) << 0xc;
              param_1 = ppppppuVar27 + 1;
            }
            else if ((bVar35 & 4) == 0) {
              uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                      (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                      (uVar20 & 0x3f) << 0x12 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
            }
            else {
              uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                      (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                      (uVar20 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                      (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
            }
          }
          if (uVar3 != 0x180e) {
            if (uVar3 < 0x180f) {
              if (uVar3 == 0x20) goto LAB_000243bc;
              if (uVar3 < 0x21) {
                bVar34 = uVar3 == 9;
              }
              else {
                if (uVar3 == 0xa0) goto LAB_000243bc;
                bVar34 = uVar3 == 0x1680;
              }
LAB_0002506c:
              if (!bVar34) goto LAB_000231ec;
            }
            else if (uVar3 != 0x202f) {
              if (uVar3 < 0x2030) {
                bVar32 = 9 < uVar3 - 0x2000;
                bVar34 = uVar3 - 0x2000 == 10;
                goto LAB_000251b4;
              }
              if (uVar3 != 0x205f) {
                bVar34 = uVar3 == 0x3000;
                goto LAB_0002506c;
              }
            }
          }
          goto LAB_000243bc;
        case 0x14:
          if (ppppppuVar27 < (undefined4 ******)param_5[0x1e]) {
            bVar35 = *(byte *)ppppppuVar27;
            uVar3 = (uint)bVar35;
            if (uVar12 == 0 || uVar3 < 0xc0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            }
            else {
              uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
              if ((bVar35 & 0x20) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
                uVar3 = uVar20 & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                uVar3 = (uVar20 & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
              }
              else if ((bVar35 & 8) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                        (uVar20 & 0x3f) << 0xc;
                param_1 = ppppppuVar27 + 1;
              }
              else if ((bVar35 & 4) == 0) {
                uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                        (uVar20 & 0x3f) << 0x12 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
              }
              else {
                uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                        (uVar20 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12
                        | (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
              }
            }
            if (uVar3 != 0x85) {
              if (uVar3 < 0x86) {
                bVar32 = 2 < uVar3 - 10;
                bVar34 = uVar3 - 10 == 3;
              }
              else {
                bVar32 = uVar3 != 0x2028;
                bVar34 = uVar3 == 0x2029;
              }
LAB_00024fec:
              if (bVar32 && !bVar34) goto LAB_000243bc;
            }
            goto LAB_000231ec;
          }
          goto LAB_000242c4;
        case 0x15:
          if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
          bVar35 = *(byte *)ppppppuVar27;
          uVar3 = (uint)bVar35;
          if (uVar12 == 0 || uVar3 < 0xc0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
          }
          else {
            uVar20 = (uint)*(byte *)((int)ppppppuVar27 + 1);
            if ((bVar35 & 0x20) == 0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
              uVar3 = uVar20 & 0x3f | (uVar3 & 0x1f) << 6;
            }
            else if ((bVar35 & 0x10) == 0) {
              uVar3 = (uVar20 & 0x3f) << 6 |
                      (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
            }
            else if ((bVar35 & 8) == 0) {
              uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                      (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                      (uVar20 & 0x3f) << 0xc;
              param_1 = ppppppuVar27 + 1;
            }
            else if ((bVar35 & 4) == 0) {
              uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                      (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                      (uVar20 & 0x3f) << 0x12 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
            }
            else {
              uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                      (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                      (uVar20 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                      (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
            }
          }
          if (uVar3 != 0x85) {
            if (uVar3 < 0x86) {
              bVar32 = 2 < uVar3 - 10;
              bVar34 = uVar3 - 10 == 3;
            }
            else {
              bVar32 = uVar3 != 0x2028;
              bVar34 = uVar3 == 0x2029;
            }
LAB_000251b4:
            if (bVar32 && !bVar34) goto LAB_000231ec;
          }
LAB_000243bc:
          local_138 = param_2 + 1;
          goto LAB_000222f4;
        case 0x16:
          ppppppuVar30 = (undefined4 ******)param_5[0x1e];
          if (ppppppuVar30 <= ppppppuVar27) goto LAB_000242c4;
          bVar35 = *(byte *)ppppppuVar27;
          uVar3 = (uint)bVar35;
          if (uVar12 == 0 || uVar3 < 0xc0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
          }
          else if ((bVar35 & 0x20) == 0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
            uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
          }
          else if ((bVar35 & 0x10) == 0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
            uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
                    (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
          }
          else if ((bVar35 & 8) == 0) {
            param_1 = ppppppuVar27 + 1;
            uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                    (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                    (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
          }
          else if ((bVar35 & 4) == 0) {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
            uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                    (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                    (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
                    (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
          }
          else {
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
            uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                    (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                    (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
                    (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                    (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
          }
          uVar3 = (uint)*(byte *)(*(int *)(iVar10 + DAT_00024d74) +
                                  (uint)*(ushort *)
                                         (*(int *)(iVar10 + DAT_00024d6c) +
                                         ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_00024d70) +
                                                                  ((int)uVar3 >> 7)) * 0x80 +
                                         (uVar3 & 0x7f)) * 2) * 8 + 2);
          for (; param_1 < ppppppuVar30; param_1 = (undefined4 ******)((int)param_1 + iVar19)) {
            bVar35 = *(byte *)param_1;
            uVar20 = (uint)bVar35;
            if ((uVar12 == 0) || (uVar20 < 0xc0)) {
              iVar19 = 1;
            }
            else if ((bVar35 & 0x20) == 0) {
              iVar19 = 2;
              uVar20 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar20 & 0x1f) << 6;
            }
            else if ((bVar35 & 0x10) == 0) {
              iVar19 = 3;
              uVar20 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                       (uVar20 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
            }
            else if ((bVar35 & 8) == 0) {
              iVar19 = 4;
              uVar20 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                       (uVar20 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                       (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
            }
            else if ((bVar35 & 4) == 0) {
              iVar19 = 5;
              uVar20 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                       (uVar20 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                       (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                       (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
            }
            else {
              iVar19 = 6;
              uVar20 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                       (uVar20 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                       (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                       (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                       (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
            }
            uVar20 = (uint)*(byte *)(*(int *)(iVar10 + DAT_00024d74) +
                                     (uint)*(ushort *)
                                            (*(int *)(iVar10 + DAT_00024d6c) +
                                            ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_00024d70
                                                                              ) + ((int)uVar20 >> 7)
                                                                     ) * 0x80 + (uVar20 & 0x7f)) * 2
                                            ) * 8 + 2);
            if ((*(uint *)(*(int *)(iVar10 + DAT_00024d78) + uVar3 * 4) & 1 << uVar20) == 0) break;
            uVar3 = uVar20;
          }
          if (((param_5[0x22] == 0 || param_1 < ppppppuVar30) ||
              (param_1 <= (undefined4 ******)param_5[0x21])) ||
             (param_5[0x19] = 1, (int)param_5[0x22] < 2)) goto LAB_00023aa8;
          uVar3 = 0xfffffff4;
          goto LAB_00021dc8;
        case 0x17:
          goto LAB_00023c98;
        case 0x18:
LAB_00023c88:
          if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00023c40;
          goto LAB_000221ac;
        case 0x19:
          if (param_5[0x12] != 0) goto LAB_000221ac;
          if (param_5[0x16] != 0) goto LAB_00023c88;
LAB_00023c98:
          ppppppuVar30 = (undefined4 ******)param_5[0x1e];
          if (ppppppuVar30 <= ppppppuVar27) {
LAB_00023c40:
            if (((param_5[0x22] == 0) || (ppppppuVar27 <= (undefined4 ******)param_5[0x21])) ||
               (param_5[0x19] = 1, (int)param_5[0x22] < 2)) goto LAB_00023aa8;
            goto LAB_00023c68;
          }
          if (param_5[6] == 0) {
            if (((ppppppuVar27 <= (undefined4 ******)((int)ppppppuVar30 - param_5[7])) &&
                (*(byte *)ppppppuVar27 == (byte)param_5[0xd])) &&
               ((param_5[7] == 1 ||
                (*(byte *)((int)ppppppuVar27 + 1) == *(byte *)((int)param_5 + 0x35)))))
            goto LAB_00023ccc;
          }
          else {
            iVar19 = FUN_000326d8(ppppppuVar27,param_5[6],ppppppuVar30,param_5 + 7,uVar12);
            if (iVar19 != 0) {
LAB_00023ccc:
              if (ppppppuVar27 == (undefined4 ******)(param_5[0x1e] - param_5[7]))
              goto LAB_00023c40;
            }
          }
LAB_00023b90:
          uVar12 = param_5[0x22];
          if (((uVar12 == 0) || ((byte *)((int)ppppppuVar27 + 1) < (byte *)param_5[0x1e])) ||
             ((param_5[6] != 0 ||
              ((param_5[7] != 2 || (*(byte *)ppppppuVar27 != (byte)param_5[0xd]))))))
          goto LAB_000221ac;
          goto LAB_00023bd4;
        case 0x1a:
          ppppppuVar30 = (undefined4 ******)param_5[0x1e];
          if (ppppppuVar27 < ppppppuVar30) {
            if (param_5[6] == 0) {
              if (((undefined4 ******)((int)ppppppuVar30 - param_5[7]) < ppppppuVar27) ||
                 (*(byte *)ppppppuVar27 != (byte)param_5[0xd])) {
                bVar34 = true;
              }
              else {
                bVar34 = false;
                if ((param_5[7] != 1) &&
                   (bVar34 = false,
                   *(byte *)((int)ppppppuVar27 + 1) != *(byte *)((int)param_5 + 0x35))) {
                  bVar34 = true;
                }
              }
            }
            else {
              iVar19 = FUN_000326d8(ppppppuVar27,param_5[6],ppppppuVar30,param_5 + 7,uVar12);
              bVar34 = iVar19 == 0;
            }
            if (!bVar34) goto LAB_00023aa8;
            goto LAB_00023b90;
          }
          if (param_5[0x12] == 0) goto LAB_00023c40;
          goto LAB_000221ac;
        case 0x1b:
          if ((param_5[0x11] == 0) || ((undefined4 ******)param_5[0x1d] != ppppppuVar27)) {
LAB_00023a78:
            bVar34 = (undefined4 ******)param_5[0x1d] == ppppppuVar27;
LAB_00023a80:
            if (bVar34) goto LAB_00023aa8;
          }
          goto LAB_000221ac;
        case 0x1c:
          ppppppuVar30 = (undefined4 ******)param_5[0x1d];
          if ((param_5[0x11] != 0) && (ppppppuVar30 == ppppppuVar27)) goto LAB_000221ac;
          if (ppppppuVar30 != ppppppuVar27) {
            if ((undefined4 ******)param_5[0x1e] == ppppppuVar27) goto LAB_000221ac;
            if (param_5[6] == 0) {
              uVar3 = param_5[7];
              if ((ppppppuVar27 < (undefined4 ******)((int)ppppppuVar30 + uVar3)) ||
                 (*(char *)((int)ppppppuVar27 - uVar3) != (char)param_5[0xd])) goto LAB_000221ac;
              if (uVar3 != 1) {
                bVar34 = *(byte *)((int)ppppppuVar27 + (1 - uVar3)) ==
                         *(byte *)((int)param_5 + 0x35);
                goto LAB_00023a80;
              }
            }
            else if ((ppppppuVar27 <= ppppppuVar30) ||
                    (iVar19 = FUN_000328c0(ppppppuVar27,param_5[6],ppppppuVar30,param_5 + 7,uVar12),
                    iVar19 == 0)) goto LAB_000221ac;
          }
LAB_00023aa8:
          local_138 = param_2 + 1;
          goto LAB_000222f4;
        case 0x1d:
          ppppppuVar30 = (undefined4 ******)param_5[0x1e];
          if (uVar12 == 0) {
            if ((int)ppppppuVar30 - (int)ppppppuVar27 < 1) goto LAB_000242c4;
            if (param_2[1] != *(byte *)ppppppuVar27) goto LAB_000221ac;
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            local_138 = param_2 + 2;
          }
          else {
            bVar35 = param_2[1];
            if (bVar35 < 0xc0) {
              iVar19 = 1;
            }
            else if ((bVar35 & 0x20) == 0) {
              iVar19 = 2;
            }
            else if ((bVar35 & 0x10) == 0) {
              iVar19 = 3;
            }
            else if ((bVar35 & 8) == 0) {
              iVar19 = 4;
            }
            else if ((bVar35 & 4) == 0) {
              iVar19 = 5;
            }
            else {
              iVar19 = 6;
            }
            if ((int)ppppppuVar30 - (int)ppppppuVar27 < iVar19) {
              uVar12 = param_5[0x22];
              bVar32 = ppppppuVar27 <= ppppppuVar30;
              bVar34 = ppppppuVar30 == ppppppuVar27;
              goto LAB_00027050;
            }
            while (local_138 = local_138 + 1,
                  (undefined4 ******)((int)ppppppuVar27 + iVar19) != param_1) {
              bVar35 = *(byte *)param_1;
              param_1 = (undefined4 ******)((int)param_1 + 1);
              if (*local_138 != bVar35) goto LAB_000221ac;
            }
          }
          goto LAB_000222f4;
        case 0x1e:
          if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
          bVar35 = *(byte *)ppppppuVar27;
          uVar20 = (uint)bVar35;
          bVar1 = param_2[1];
          uVar3 = (uint)bVar1;
          if (uVar12 == 0) {
            if (*(char *)(param_5[0xe] + uVar3) != *(char *)(param_5[0xe] + uVar20))
            goto LAB_000221ac;
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            local_138 = param_2 + 2;
          }
          else {
            if (uVar3 < 0xc0) {
              iVar19 = 1;
            }
            else if ((bVar1 & 0x20) == 0) {
              iVar19 = 2;
              uVar3 = param_2[2] & 0x3f | (uVar3 & 0x1f) << 6;
            }
            else if ((bVar1 & 0x10) == 0) {
              iVar19 = 3;
              uVar3 = (param_2[2] & 0x3f) << 6 | (uVar3 & 0xf) << 0xc | param_2[3] & 0x3f;
            }
            else if ((bVar1 & 8) == 0) {
              iVar19 = 4;
              uVar3 = (param_2[3] & 0x3f) << 6 |
                      (uVar3 & 7) << 0x12 | param_2[4] & 0x3f | (param_2[2] & 0x3f) << 0xc;
            }
            else if ((bVar1 & 4) == 0) {
              iVar19 = 5;
              uVar3 = (param_2[4] & 0x3f) << 6 |
                      (uVar3 & 3) << 0x18 | param_2[5] & 0x3f | (param_2[2] & 0x3f) << 0x12 |
                      (param_2[3] & 0x3f) << 0xc;
            }
            else {
              iVar19 = 6;
              uVar3 = (param_2[5] & 0x3f) << 6 |
                      (uVar3 & 1) << 0x1e | param_2[6] & 0x3f | (param_2[2] & 0x3f) << 0x18 |
                      (param_2[3] & 0x3f) << 0x12 | (param_2[4] & 0x3f) << 0xc;
            }
            if (uVar3 < 0x80) {
              if (*(char *)(param_5[0xe] + uVar3) != *(char *)(param_5[0xe] + uVar20))
              goto LAB_000221ac;
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
              local_138 = param_2 + 2;
            }
            else {
              if (uVar20 < 0xc0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
                uVar20 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar20 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
                uVar20 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
                         (uVar20 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                param_1 = ppppppuVar27 + 1;
                uVar20 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                         (uVar20 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                         (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
                uVar20 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                         (uVar20 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                         (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
                         (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
              }
              else {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
                uVar20 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                         (uVar20 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                         (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
                         (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                         (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
              }
              local_138 = param_2 + iVar19 + 1;
              if (uVar3 != uVar20) {
                uVar14 = uVar3 & 0x7f;
                if (-1 < (int)-uVar3) {
                  uVar14 = -(-uVar3 & 0x7f);
                }
                if (uVar3 + *(int *)(*(int *)(iVar10 + DAT_00026d88) +
                                     (uint)*(ushort *)
                                            (*(int *)(iVar10 + DAT_00026d80) +
                                            ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_00026d84
                                                                              ) + (uVar3 >> 7)) *
                                             0x80 + uVar14) * 2) * 8 + 4) != uVar20)
                goto LAB_000221ac;
              }
            }
          }
          goto LAB_000222f4;
        case 0x1f:
          goto LAB_00027c90;
        case 0x20:
LAB_00027c90:
          if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
          bVar35 = param_2[1];
          uVar3 = (uint)bVar35;
          if (uVar12 == 0) {
            if ((uVar3 == *(byte *)ppppppuVar27) ||
               ((uVar13 == 0x20 &&
                ((uint)*(byte *)(param_5[0xf] + uVar3) == (uint)*(byte *)ppppppuVar27))))
            goto LAB_000221ac;
            param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            local_138 = param_2 + 2;
          }
          else {
            if (uVar3 < 0xc0) {
              local_138 = param_2 + 2;
            }
            else if ((bVar35 & 0x20) == 0) {
              local_138 = param_2 + 3;
              uVar3 = param_2[2] & 0x3f | (uVar3 & 0x1f) << 6;
            }
            else if ((bVar35 & 0x10) == 0) {
              uVar3 = (param_2[2] & 0x3f) << 6 | (uVar3 & 0xf) << 0xc | param_2[3] & 0x3f;
              local_138 = param_2 + 4;
            }
            else if ((bVar35 & 8) == 0) {
              uVar3 = (param_2[3] & 0x3f) << 6 |
                      (uVar3 & 7) << 0x12 | param_2[4] & 0x3f | (param_2[2] & 0x3f) << 0xc;
              local_138 = param_2 + 5;
            }
            else if ((bVar35 & 4) == 0) {
              uVar3 = (param_2[4] & 0x3f) << 6 |
                      (uVar3 & 3) << 0x18 | param_2[5] & 0x3f | (param_2[2] & 0x3f) << 0x12 |
                      (param_2[3] & 0x3f) << 0xc;
              local_138 = param_2 + 6;
            }
            else {
              uVar3 = (param_2[5] & 0x3f) << 6 |
                      (uVar3 & 1) << 0x1e | param_2[6] & 0x3f | (param_2[2] & 0x3f) << 0x18 |
                      (param_2[3] & 0x3f) << 0x12 | (param_2[4] & 0x3f) << 0xc;
              local_138 = param_2 + 7;
            }
            bVar35 = *(byte *)ppppppuVar27;
            uVar20 = (uint)bVar35;
            if (uVar20 < 0xc0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 1);
            }
            else if ((bVar35 & 0x20) == 0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 2);
              uVar20 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar20 & 0x1f) << 6;
            }
            else if ((bVar35 & 0x10) == 0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 3);
              uVar20 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
                       (uVar20 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
            }
            else if ((bVar35 & 8) == 0) {
              param_1 = ppppppuVar27 + 1;
              uVar20 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                       (uVar20 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                       (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
            }
            else if ((bVar35 & 4) == 0) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 5);
              uVar20 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                       (uVar20 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                       (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
                       (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
            }
            else {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + 6);
              uVar20 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                       (uVar20 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                       (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
                       (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                       (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
            }
            if (uVar13 == 0x1f) {
              if (uVar20 == uVar3) goto LAB_000221ac;
            }
            else {
              if (uVar3 < 0x80) {
                uVar14 = (uint)*(byte *)(param_5[0xf] + uVar3);
              }
              else {
                uVar14 = uVar3 + *(int *)(*(int *)(iVar10 + DAT_00028f9c) +
                                          (uint)*(ushort *)
                                                 (*(int *)(iVar10 + DAT_00028f80) +
                                                 ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_00028f8c) + ((int)uVar3 >> 7)) * 0x80 +
                                                 (uVar3 & 0x7f)) * 2) * 8 + 4);
              }
              if (uVar20 == uVar14 || uVar20 == uVar3) goto LAB_000221ac;
            }
          }
          goto LAB_000222f4;
        case 0x21:
          goto LAB_00027670;
        case 0x22:
          goto LAB_00027670;
        case 0x23:
          goto LAB_00027670;
        case 0x24:
          goto LAB_00027670;
        case 0x25:
          goto LAB_00027670;
        case 0x26:
          goto LAB_00027670;
        case 0x27:
          goto LAB_00027618;
        case 0x28:
          goto LAB_00027618;
        case 0x29:
          goto LAB_0002742c;
        case 0x2a:
          goto LAB_00027620;
        case 0x2b:
          goto LAB_00027640;
        case 0x2c:
          goto LAB_0002765c;
        case 0x2d:
          goto LAB_00027450;
        case 0x2e:
          goto LAB_00027670;
        case 0x2f:
          goto LAB_00027670;
        case 0x30:
          goto LAB_00027670;
        case 0x31:
          goto LAB_00027670;
        case 0x32:
          goto LAB_00027670;
        case 0x33:
LAB_00027670:
          pbVar26 = param_2 + 1;
          if (uVar13 < 0x2e) {
            iVar19 = 0x21;
          }
          else {
            iVar19 = 0x2e;
          }
          local_110 = uVar13 - iVar19 & 1;
          pbVar28 = (byte *)(DAT_00026d8c + 0x276a0 + (uVar13 - iVar19));
          uVar20 = (uint)*pbVar28;
          local_11c = (uint)pbVar28[0xb];
          if (local_11c == 0) {
            local_11c = 0x7fffffff;
          }
          bVar34 = false;
LAB_00027488:
          bVar35 = *pbVar26;
          uVar14 = (uint)bVar35;
          if (uVar12 == 0) {
            local_138 = pbVar26 + 1;
          }
          else {
            if (uVar14 < 0xc0) {
              __n_00 = 1;
            }
            else if ((bVar35 & 0x20) == 0) {
              __n_00 = 2;
              uVar14 = pbVar26[1] & 0x3f | (uVar14 & 0x1f) << 6;
            }
            else if ((bVar35 & 0x10) == 0) {
              __n_00 = 3;
              uVar14 = (pbVar26[1] & 0x3f) << 6 | (uVar14 & 0xf) << 0xc | pbVar26[2] & 0x3f;
            }
            else if ((bVar35 & 8) == 0) {
              __n_00 = 4;
              uVar14 = (pbVar26[2] & 0x3f) << 6 |
                       (uVar14 & 7) << 0x12 | pbVar26[3] & 0x3f | (pbVar26[1] & 0x3f) << 0xc;
            }
            else if ((bVar35 & 4) == 0) {
              __n_00 = 5;
              uVar14 = (pbVar26[3] & 0x3f) << 6 |
                       (uVar14 & 3) << 0x18 | pbVar26[4] & 0x3f | (pbVar26[1] & 0x3f) << 0x12 |
                       (pbVar26[2] & 0x3f) << 0xc;
            }
            else {
              __n_00 = 6;
              uVar14 = (pbVar26[4] & 0x3f) << 6 |
                       (uVar14 & 1) << 0x1e | pbVar26[5] & 0x3f | (pbVar26[1] & 0x3f) << 0x18 |
                       (pbVar26[2] & 0x3f) << 0x12 | (pbVar26[3] & 0x3f) << 0xc;
            }
            param_2 = pbVar26 + __n_00;
            local_138 = param_2;
            if (__n_00 != 1) {
              if ((uVar13 < 0x2e) ||
                 (uVar3 = uVar14 + *(int *)(*(int *)(iVar10 + DAT_00026d88) +
                                            (uint)*(ushort *)
                                                   (*(int *)(iVar10 + DAT_00026d80) +
                                                   ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_00026d84) + ((int)uVar14 >> 7)) * 0x80 +
                                                  (uVar14 & 0x7f)) * 2) * 8 + 4), uVar14 == uVar3))
              {
                __n = 0;
              }
              else {
                __n = FUN_00032ac4(uVar3,auStack_34);
              }
              for (iVar19 = 1; iVar19 <= (int)uVar20; iVar19 = iVar19 + 1) {
                ppppppuVar30 = (undefined4 ******)param_5[0x1e];
                if ((((undefined4 ******)((int)ppppppuVar30 - __n_00) < ppppppuVar27) ||
                    (iVar17 = memcmp(ppppppuVar27,pbVar26,__n_00), sVar2 = __n_00, iVar17 != 0)) &&
                   (((int)__n < 1 ||
                    (((undefined4 ******)((int)ppppppuVar30 - __n) < ppppppuVar27 ||
                     (iVar17 = memcmp(ppppppuVar27,auStack_34,__n), sVar2 = __n, iVar17 != 0))))))
                goto LAB_00027858;
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + sVar2);
              }
              param_1 = ppppppuVar27;
              if (local_11c != uVar20) {
                if (local_110 != 0) {
                  goto LAB_00027574;
                }
                for (; (int)uVar20 < (int)local_11c; uVar20 = uVar20 + 1) {
                  ppppppuVar30 = (undefined4 ******)param_5[0x1e];
                  if ((((undefined4 ******)((int)ppppppuVar30 - __n_00) < param_1) ||
                      (iVar19 = memcmp(param_1,pbVar26,__n_00), sVar2 = __n_00, iVar19 != 0)) &&
                     (((int)__n < 1 ||
                      (((undefined4 ******)((int)ppppppuVar30 - __n) < param_1 ||
                       (iVar19 = memcmp(param_1,auStack_34,__n), sVar2 = __n, iVar19 != 0)))))) {
                    if ((param_5[0x22] != 0 && ppppppuVar30 <= param_1) &&
                       (((undefined4 ******)param_5[0x21] < param_1 &&
                        (param_5[0x19] = 1, 1 < (int)param_5[0x22])))) {
                      uVar3 = 0xfffffff4;
                      goto LAB_00021dc8;
                    }
                    break;
                  }
                  param_1 = (undefined4 ******)((int)param_1 + sVar2);
                }
                if (!bVar34) goto LAB_00027900;
              }
              goto LAB_000222f4;
            }
          }
          param_2 = local_138;
          if (uVar13 < 0x2e) {
            ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar20);
            while (ppppppuVar30 != ppppppuVar27) {
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar27;
              ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
              if (bVar35 != uVar14) goto LAB_000221ac;
            }
            param_1 = ppppppuVar27;
            if (local_11c != uVar20) {
              if (local_110 != 0) {
                ppppppuVar27 = ppppppuVar30;
                goto LAB_00027bf8;
              }
              ppppppuVar30 = ppppppuVar27;
              while (ppppppuVar8 = ppppppuVar30,
                    (int)((int)ppppppuVar8 + (uVar20 - (int)ppppppuVar27)) < (int)local_11c) {
                if ((undefined4 ******)param_5[0x1e] <= ppppppuVar8) {
                  if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < ppppppuVar8)) &&
                     (param_5[0x19] = 1, 1 < (int)param_5[0x22])) {
                    uVar3 = 0xfffffff4;
                    goto LAB_00021dc8;
                  }
                  break;
                }
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar8 + 1);
                if (*(byte *)ppppppuVar8 != uVar14) break;
              }
              param_1 = ppppppuVar8;
              if (!bVar34) goto LAB_00027bac;
            }
          }
          else {
            ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar20);
            uVar13 = (uint)*(byte *)(param_5[0xf] + uVar14);
            while (ppppppuVar27 != ppppppuVar30) {
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_0002659c;
              bVar35 = *(byte *)ppppppuVar27;
              ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
              if (uVar14 != bVar35 && uVar13 != bVar35) goto LAB_000221ac;
            }
            param_1 = ppppppuVar27;
            if (local_11c != uVar20) {
              if (local_110 != 0) {
                iVar10 = uVar20 - (int)ppppppuVar27;
                goto LAB_000279e4;
              }
              ppppppuVar30 = ppppppuVar27;
              while (param_1 = ppppppuVar30,
                    (int)((int)param_1 + (uVar20 - (int)ppppppuVar27)) < (int)local_11c) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) {
                  if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < param_1)) &&
                     (param_5[0x19] = 1, 1 < (int)param_5[0x22])) {
                    uVar3 = 0xfffffff4;
                    goto LAB_00021dc8;
                  }
                  break;
                }
                ppppppuVar30 = (undefined4 ******)((int)param_1 + 1);
                if (uVar14 != *(byte *)param_1 && uVar13 != *(byte *)param_1) break;
              }
              ppppppuVar30 = param_1;
              if (!bVar34) goto LAB_00027ae4;
            }
          }
          goto LAB_000222f4;
        case 0x34:
          goto LAB_00027618;
        case 0x35:
LAB_00027618:
          bVar34 = false;
LAB_00027454:
          pbVar26 = param_2 + 3;
          uVar20 = 0;
          local_11c = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8)
          ;
          local_110 = (uint)(uVar13 == 0x35 || uVar13 == 0x28);
          goto LAB_00027488;
        case 0x36:
LAB_0002742c:
          pbVar26 = param_2 + 3;
          uVar20 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          bVar34 = false;
          local_11c = uVar20;
LAB_00027448:
          local_110 = 0;
          goto LAB_00027488;
        case 0x37:
LAB_00027620:
          local_11c = 0x7fffffff;
LAB_00027634:
          uVar20 = 0;
          pbVar26 = param_2 + 1;
          bVar34 = true;
          local_110 = 0;
          goto LAB_00027488;
        case 0x38:
LAB_00027640:
          uVar20 = 1;
          local_11c = 0x7fffffff;
          pbVar26 = param_2 + 1;
          bVar34 = true;
          goto LAB_00027448;
        case 0x39:
LAB_0002765c:
          local_11c = 1;
          goto LAB_00027634;
        case 0x3a:
LAB_00027450:
          bVar34 = true;
          goto LAB_00027454;
        case 0x3b:
          goto LAB_00028100;
        case 0x3c:
          goto LAB_00028100;
        case 0x3d:
          goto LAB_00028100;
        case 0x3e:
          goto LAB_00028100;
        case 0x3f:
          goto LAB_00028100;
        case 0x40:
          goto LAB_00028100;
        case 0x41:
          goto LAB_00028080;
        case 0x42:
          goto LAB_00028080;
        case 0x43:
          goto LAB_00028014;
        case 0x44:
          goto LAB_000280b0;
        case 0x45:
          goto LAB_000280c4;
        case 0x46:
          goto LAB_000280d8;
        case 0x47:
          goto LAB_000280e8;
        case 0x48:
          goto LAB_00028100;
        case 0x49:
          goto LAB_00028100;
        case 0x4a:
          goto LAB_00028100;
        case 0x4b:
          goto LAB_00028100;
        case 0x4c:
          goto LAB_00028100;
        case 0x4d:
LAB_00028100:
          pbVar26 = param_2 + 1;
          if (uVar13 < 0x48) {
            iVar19 = 0x3b;
          }
          else {
            iVar19 = 0x48;
          }
          uVar18 = uVar13 - iVar19 & 1;
          pbVar28 = (byte *)(DAT_00028f84 + 0x2812c + (uVar13 - iVar19));
          uVar14 = (uint)*pbVar28;
          uVar20 = (uint)pbVar28[0xb];
          if (uVar20 == 0) {
            uVar20 = 0x7fffffff;
            uVar3 = 0;
          }
          else {
LAB_000280a8:
            uVar3 = 0;
          }
LAB_00028030:
          bVar35 = *pbVar26;
          uVar24 = (uint)bVar35;
          ppppppuVar30 = ppppppuVar27;
          if (uVar12 == 0 || uVar24 < 0xc0) {
            local_138 = pbVar26 + 1;
            if (uVar13 < 0x48) {
              if (uVar12 != 0) goto LAB_000289ec;
              ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
              while (ppppppuVar8 != ppppppuVar30) {
                ppppppuVar27 = ppppppuVar30;
                if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                bVar35 = *(byte *)ppppppuVar30;
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 1);
                if (bVar35 == uVar24) goto LAB_000221ac;
              }
              goto LAB_00028a44;
            }
          }
          else {
            if ((bVar35 & 0x20) == 0) {
              local_138 = pbVar26 + 2;
              uVar24 = pbVar26[1] & 0x3f | (uVar24 & 0x1f) << 6;
            }
            else if ((bVar35 & 0x10) == 0) {
              uVar24 = (pbVar26[1] & 0x3f) << 6 | (uVar24 & 0xf) << 0xc | pbVar26[2] & 0x3f;
              local_138 = pbVar26 + 3;
            }
            else if ((bVar35 & 8) == 0) {
              uVar24 = (pbVar26[2] & 0x3f) << 6 |
                       (uVar24 & 7) << 0x12 | pbVar26[3] & 0x3f | (pbVar26[1] & 0x3f) << 0xc;
              local_138 = pbVar26 + 4;
            }
            else if ((bVar35 & 4) == 0) {
              uVar24 = (pbVar26[3] & 0x3f) << 6 |
                       (uVar24 & 3) << 0x18 | pbVar26[4] & 0x3f | (pbVar26[1] & 0x3f) << 0x12 |
                       (pbVar26[2] & 0x3f) << 0xc;
              local_138 = pbVar26 + 5;
            }
            else {
              uVar24 = (pbVar26[4] & 0x3f) << 6 |
                       (uVar24 & 1) << 0x1e | pbVar26[5] & 0x3f | (pbVar26[1] & 0x3f) << 0x18 |
                       (pbVar26[2] & 0x3f) << 0x12 | (pbVar26[3] & 0x3f) << 0xc;
              local_138 = pbVar26 + 6;
            }
            if (uVar13 < 0x48) {
LAB_000289ec:
              for (iVar19 = 1; iVar19 <= (int)uVar14; iVar19 = iVar19 + 1) {
                ppppppuVar27 = ppppppuVar30;
                if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                bVar35 = *(byte *)ppppppuVar30;
                uVar13 = (uint)bVar35;
                if (uVar13 < 0xc0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                }
                else if ((bVar35 & 0x20) == 0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                  uVar13 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar13 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                  uVar13 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                           (uVar13 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  ppppppuVar27 = ppppppuVar30 + 1;
                  uVar13 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                           (uVar13 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                           (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                  uVar13 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                           (uVar13 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                           (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                           (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
                }
                else {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                  uVar13 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                           (uVar13 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                           (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                           (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                           (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
                }
                if (uVar24 == uVar13) goto LAB_000221ac;
                ppppppuVar30 = ppppppuVar27;
              }
LAB_00028a44:
              param_1 = ppppppuVar30;
              if (uVar20 != uVar14) {
                if (uVar18 != 0) {
                  if (uVar12 != 0) goto LAB_00028a60;
                  ppppppuVar27 = ppppppuVar30;
                  goto LAB_00028d58;
                }
                param_2 = local_138;
                if (uVar12 == 0) {
                  ppppppuVar27 = ppppppuVar30;
                  while (ppppppuVar8 = ppppppuVar27,
                        (int)((int)ppppppuVar8 + (uVar14 - (int)ppppppuVar30)) < (int)uVar20) {
                    if ((undefined4 ******)param_5[0x1e] <= ppppppuVar8) {
                      if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < ppppppuVar8))
                         && (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_00028de8;
                      break;
                    }
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar8 + 1);
                    if (*(byte *)ppppppuVar8 == uVar24) break;
                  }
                  param_1 = ppppppuVar8;
                  if (uVar3 == 0) goto LAB_0002905c;
                }
                else {
                  for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                    if ((undefined4 ******)param_5[0x1e] <= param_1) {
                      if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < param_1)) &&
                         (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_00028de8;
                      break;
                    }
                    bVar35 = *(byte *)param_1;
                    uVar13 = (uint)bVar35;
                    if (uVar13 < 0xc0) {
                      iVar19 = 1;
                    }
                    else if ((bVar35 & 0x20) == 0) {
                      uVar13 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar13 & 0x1f) << 6;
                      iVar19 = 2;
                    }
                    else if ((bVar35 & 0x10) == 0) {
                      uVar13 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                               (uVar13 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                      iVar19 = 3;
                    }
                    else if ((bVar35 & 8) == 0) {
                      uVar13 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                               (uVar13 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                               (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                      iVar19 = 4;
                    }
                    else if ((bVar35 & 4) == 0) {
                      uVar13 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                               (uVar13 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                               (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                               (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                      iVar19 = 5;
                    }
                    else {
                      uVar13 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                               (uVar13 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                               (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                               (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                               (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                      iVar19 = 6;
                    }
                    if (uVar13 == uVar24) break;
                    param_1 = (undefined4 ******)((int)param_1 + iVar19);
                  }
                  if (uVar3 == 0) goto LAB_00028e58;
                }
              }
              goto LAB_000222f4;
            }
          }
          if (uVar24 < 0x80 || uVar12 == 0) {
            uVar13 = (uint)*(byte *)(param_5[0xf] + uVar24);
            if (uVar12 != 0) goto LAB_000282dc;
            ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
            while (ppppppuVar27 != ppppppuVar30) {
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00028318;
              bVar35 = *(byte *)ppppppuVar27;
              ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
              if (bVar35 == uVar24 || bVar35 == uVar13) goto LAB_000221ac;
            }
          }
          else {
            uVar13 = uVar24 + *(int *)(*(int *)(iVar10 + DAT_00028f9c) +
                                       (uint)*(ushort *)
                                              (*(int *)(iVar10 + DAT_00028f80) +
                                              ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_00028f8c) + ((int)uVar24 >> 7)) * 0x80 +
                                              (uVar24 & 0x7f)) * 2) * 8 + 4);
LAB_000282dc:
            for (iVar19 = 1; iVar19 <= (int)uVar14; iVar19 = iVar19 + 1) {
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar27;
              uVar25 = (uint)bVar35;
              if (uVar25 < 0xc0) {
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
                uVar25 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar25 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
                uVar25 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
                         (uVar25 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar30 = ppppppuVar27 + 1;
                uVar25 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                         (uVar25 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                         (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
                uVar25 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                         (uVar25 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                         (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
                         (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
                uVar25 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                         (uVar25 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                         (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
                         (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                         (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
              }
              if (uVar25 == uVar13 || uVar25 == uVar24) goto LAB_000221ac;
              ppppppuVar27 = ppppppuVar30;
            }
          }
          param_1 = ppppppuVar27;
          if (uVar20 != uVar14) {
            if (uVar18 != 0) {
              if (uVar12 != 0) goto LAB_000283a8;
              iVar10 = uVar14 - (int)ppppppuVar27;
              goto LAB_000286a0;
            }
            param_2 = local_138;
            if (uVar12 == 0) {
              ppppppuVar30 = ppppppuVar27;
              while (ppppppuVar8 = ppppppuVar30,
                    (int)((int)ppppppuVar8 + (uVar14 - (int)ppppppuVar27)) < (int)uVar20) {
                if ((undefined4 ******)param_5[0x1e] <= ppppppuVar8) {
                  if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < ppppppuVar8)) &&
                     (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_0002873c;
                  break;
                }
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar8 + 1);
                if (*(byte *)ppppppuVar8 == uVar13 || *(byte *)ppppppuVar8 == uVar24) break;
              }
              param_1 = ppppppuVar8;
              if (uVar3 == 0) goto LAB_00028998;
            }
            else {
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) {
                  if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < param_1)) &&
                     (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_0002873c;
                  break;
                }
                bVar35 = *(byte *)param_1;
                uVar18 = (uint)bVar35;
                if (uVar18 < 0xc0) {
                  iVar19 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  uVar18 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar18 & 0x1f) << 6;
                  iVar19 = 2;
                }
                else if ((bVar35 & 0x10) == 0) {
                  uVar18 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                           (uVar18 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                  iVar19 = 3;
                }
                else if ((bVar35 & 8) == 0) {
                  uVar18 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                           (uVar18 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                  iVar19 = 4;
                }
                else if ((bVar35 & 4) == 0) {
                  uVar18 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                           (uVar18 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                           (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                  iVar19 = 5;
                }
                else {
                  uVar18 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                           (uVar18 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                           (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                           (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                  iVar19 = 6;
                }
                if (uVar18 == uVar13 || uVar18 == uVar24) break;
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              if (uVar3 == 0) goto LAB_000287b0;
            }
          }
          goto LAB_000222f4;
        case 0x4e:
          goto LAB_00028080;
        case 0x4f:
LAB_00028080:
          pbVar26 = param_2 + 3;
          uVar14 = 0;
          uVar20 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          if (uVar13 == 0x4f || uVar13 == 0x42) {
            uVar18 = 1;
          }
          else {
            uVar18 = 0;
          }
          goto LAB_000280a8;
        case 0x50:
LAB_00028014:
          pbVar26 = param_2 + 3;
          uVar3 = 0;
          uVar14 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          uVar20 = uVar14;
LAB_0002802c:
          uVar18 = 0;
          goto LAB_00028030;
        case 0x51:
LAB_000280b0:
          pbVar26 = param_2 + 1;
          uVar20 = 0x7fffffff;
LAB_000280bc:
          uVar14 = 0;
          uVar3 = 1;
          goto LAB_0002802c;
        case 0x52:
LAB_000280c4:
          uVar14 = 1;
          pbVar26 = param_2 + 1;
          uVar20 = 0x7fffffff;
          uVar3 = uVar14;
          goto LAB_0002802c;
        case 0x53:
LAB_000280d8:
          pbVar26 = param_2 + 1;
          uVar20 = 1;
          goto LAB_000280bc;
        case 0x54:
LAB_000280e8:
          pbVar26 = param_2 + 3;
          uVar20 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          goto LAB_000280bc;
        case 0x55:
          goto LAB_000291d4;
        case 0x56:
          goto LAB_000291d4;
        case 0x57:
          goto LAB_000291d4;
        case 0x58:
          goto LAB_000291d4;
        case 0x59:
          goto LAB_000291d4;
        case 0x5a:
LAB_000291d4:
          pbVar26 = param_2 + 1;
          local_114 = uVar13 - 0x55 & 1;
          pbVar28 = (byte *)(DAT_00028f88 + 0x291f4 + (uVar13 - 0x55));
          uVar14 = (uint)*pbVar28;
          uVar20 = (uint)pbVar28[0xb];
          if (uVar20 == 0) {
            uVar20 = 0x7fffffff;
          }
          bVar34 = false;
LAB_000290f4:
          local_138 = pbVar26 + 1;
          uVar13 = (uint)*pbVar26;
          if (1 < uVar13 - 0xf) {
            if (uVar14 == 0) goto LAB_00030c40;
            if (uVar13 == 0x16) {
              ppppppuVar8 = (undefined4 ******)param_5[0x1e];
              iVar19 = 1;
              ppppppuVar30 = ppppppuVar27;
              do {
                ppppppuVar27 = ppppppuVar30;
                if (ppppppuVar8 <= ppppppuVar30) goto LAB_000242c4;
                bVar35 = *(byte *)ppppppuVar30;
                uVar3 = (uint)bVar35;
                if (uVar12 == 0 || uVar3 < 0xc0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                }
                else if ((bVar35 & 0x20) == 0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                  uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                  uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                          (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  ppppppuVar27 = ppppppuVar30 + 1;
                  uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                          (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                          (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                  uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                          (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                          (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                          (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
                }
                else {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                  uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                          (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                          (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                          (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                          (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
                }
                uVar3 = (uint)*(byte *)(*(int *)(iVar10 + DAT_00030c58) +
                                        (uint)*(ushort *)
                                               (*(int *)(iVar10 + DAT_00030c50) +
                                               ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_00030c54) + ((int)uVar3 >> 7)) * 0x80 +
                                               (uVar3 & 0x7f)) * 2) * 8 + 2);
                for (; ppppppuVar27 < ppppppuVar8;
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + iVar17)) {
                  bVar35 = *(byte *)ppppppuVar27;
                  uVar18 = (uint)bVar35;
                  if ((uVar12 == 0) || (uVar18 < 0xc0)) {
                    iVar17 = 1;
                  }
                  else if ((bVar35 & 0x20) == 0) {
                    iVar17 = 2;
                    uVar18 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar18 & 0x1f) << 6;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    iVar17 = 3;
                    uVar18 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
                             (uVar18 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
                  }
                  else if ((bVar35 & 8) == 0) {
                    iVar17 = 4;
                    uVar18 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                             (uVar18 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                             (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
                  }
                  else if ((bVar35 & 4) == 0) {
                    iVar17 = 5;
                    uVar18 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                             (uVar18 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                             (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
                             (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
                  }
                  else {
                    iVar17 = 6;
                    uVar18 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                             (uVar18 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                             (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
                             (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                             (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
                  }
                  uVar18 = (uint)*(byte *)(*(int *)(iVar10 + DAT_00030c58) +
                                           (uint)*(ushort *)
                                                  (*(int *)(iVar10 + DAT_00030c50) +
                                                  ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_00030c54) + ((int)uVar18 >> 7)) * 0x80 +
                                                  (uVar18 & 0x7f)) * 2) * 8 + 2);
                  if ((*(uint *)(*(int *)(iVar10 + DAT_0002b10c) + uVar3 * 4) & 1 << uVar18) == 0)
                  break;
                  uVar3 = uVar18;
                }
                if (((param_5[0x22] != 0 && ppppppuVar8 <= ppppppuVar27) &&
                    ((undefined4 ******)param_5[0x21] < ppppppuVar27)) &&
                   (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_0002a758;
                iVar19 = iVar19 + 1;
                ppppppuVar30 = ppppppuVar27;
              } while (iVar19 <= (int)uVar14);
              goto LAB_00030c40;
            }
            if (uVar12 == 0) {
              switch(uVar13 - 6) {
              case 0:
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00028318;
                  bVar35 = *(byte *)ppppppuVar27;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                  if ((*(byte *)(param_5[0x10] + (uint)bVar35) & 4) != 0) goto LAB_000221ac;
                } while (ppppppuVar27 != ppppppuVar30);
                break;
              case 1:
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00028318;
                  bVar35 = *(byte *)ppppppuVar27;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                  if ((*(byte *)(param_5[0x10] + (uint)bVar35) & 4) == 0) goto LAB_000221ac;
                } while (ppppppuVar27 != ppppppuVar30);
                break;
              case 2:
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00028318;
                  bVar35 = *(byte *)ppppppuVar27;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                  if ((*(byte *)(param_5[0x10] + (uint)bVar35) & 1) != 0) goto LAB_000221ac;
                } while (ppppppuVar30 != ppppppuVar27);
                break;
              case 3:
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00028318;
                  bVar35 = *(byte *)ppppppuVar27;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                  if ((*(byte *)(param_5[0x10] + (uint)bVar35) & 1) == 0) goto LAB_000221ac;
                } while (ppppppuVar27 != ppppppuVar30);
                break;
              case 4:
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00028318;
                  bVar35 = *(byte *)ppppppuVar27;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                  if ((*(byte *)(param_5[0x10] + (uint)bVar35) & 0x10) != 0) goto LAB_000221ac;
                } while (ppppppuVar27 != ppppppuVar30);
                break;
              case 5:
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00028318;
                  bVar35 = *(byte *)ppppppuVar27;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                  if ((*(byte *)(param_5[0x10] + (uint)bVar35) & 0x10) == 0) goto LAB_000221ac;
                } while (ppppppuVar27 != ppppppuVar30);
                break;
              case 6:
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                do {
                  ppppppuVar8 = (undefined4 ******)param_5[0x1e];
                  if (ppppppuVar8 <= ppppppuVar27) goto LAB_000242c4;
                  if (param_5[6] == 0) {
                    bVar32 = false;
                    if ((ppppppuVar27 <= (undefined4 ******)((int)ppppppuVar8 - param_5[7])) &&
                       (*(byte *)ppppppuVar27 == (byte)param_5[0xd])) {
                      if (param_5[7] == 1) {
                        bVar32 = true;
                      }
                      else {
                        bVar32 = *(byte *)((int)ppppppuVar27 + 1) == *(byte *)((int)param_5 + 0x35);
                      }
                    }
                  }
                  else {
                    iVar19 = FUN_000326d8(ppppppuVar27,param_5[6],ppppppuVar8,param_5 + 7,0);
                    bVar32 = false;
                    if (iVar19 != 0) {
                      bVar32 = true;
                    }
                  }
                  if (bVar32) goto LAB_000221ac;
                  if (((((param_5[0x22] != 0) &&
                        ((byte *)param_5[0x1e] <= (byte *)((int)ppppppuVar27 + 1))) &&
                       (param_5[6] == 0)) &&
                      ((param_5[7] == 2 && (*(byte *)ppppppuVar27 == (byte)param_5[0xd])))) &&
                     (param_5[0x19] = 1, 1 < (int)param_5[0x22])) {
                    uVar3 = 0xfffffff4;
                    goto LAB_00021dc8;
                  }
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                } while (ppppppuVar30 != ppppppuVar27);
                break;
              case 7:
                goto LAB_0002b690;
              case 8:
LAB_0002b690:
                if ((undefined4 ******)(param_5[0x1e] - uVar14) < ppppppuVar27) goto LAB_000242c4;
LAB_0002a930:
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                break;
              case 9:
                goto switchD_00029140_default;
              case 10:
                goto switchD_00029140_default;
              case 0xb:
                iVar19 = 1;
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  bVar35 = *(byte *)ppppppuVar30;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  if (bVar35 < 0xd) {
                    if (bVar35 < 0xb) {
                      if (bVar35 != 10) goto LAB_000231ec;
                    }
                    else {
LAB_0002b6fc:
                      if (param_5[0x1a] != 0) goto LAB_000221ac;
                    }
                  }
                  else {
                    if (bVar35 != 0xd) {
                      if (bVar35 == 0x85) goto LAB_0002b6fc;
                      goto LAB_000231ec;
                    }
                    if ((ppppppuVar27 < (undefined4 ******)param_5[0x1e]) &&
                       (*(byte *)((int)ppppppuVar30 + 1) == 10)) {
                      ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                    }
                  }
                  iVar19 = iVar19 + 1;
                  ppppppuVar30 = ppppppuVar27;
                } while (iVar19 <= (int)uVar14);
                break;
              case 0xc:
                ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  bVar35 = *(byte *)ppppppuVar30;
                  if (((bVar35 == 0x20) || (bVar35 == 0xa0)) || (bVar35 == 9)) goto LAB_000231ec;
                  ppppppuVar30 = ppppppuVar27;
                } while (ppppppuVar8 != ppppppuVar27);
                break;
              case 0xd:
                ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  bVar35 = *(byte *)ppppppuVar30;
                  if (((bVar35 != 0x20) && (bVar35 != 0xa0)) && (bVar35 != 9)) goto LAB_000231ec;
                  ppppppuVar30 = ppppppuVar27;
                } while (ppppppuVar8 != ppppppuVar27);
                break;
              case 0xe:
                ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  bVar35 = *(byte *)ppppppuVar30;
                  if ((9 < bVar35) && ((bVar35 < 0xe || (bVar35 == 0x85)))) goto LAB_000231ec;
                  ppppppuVar30 = ppppppuVar27;
                } while (ppppppuVar8 != ppppppuVar27);
                break;
              case 0xf:
                ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  bVar35 = *(byte *)ppppppuVar30;
                  if ((bVar35 < 10) || ((0xd < bVar35 && (bVar35 != 0x85)))) goto LAB_000231ec;
                  ppppppuVar30 = ppppppuVar27;
                } while (ppppppuVar8 != ppppppuVar27);
                break;
              default:
                goto switchD_00029140_default;
              }
            }
            else {
              switch(uVar13 - 6) {
              case 0:
                iVar19 = 1;
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  bVar35 = *(byte *)ppppppuVar30;
                  uVar3 = (uint)bVar35;
                  if (uVar3 < 0xc0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  }
                  else if ((bVar35 & 0x20) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                    uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
                  }
                  else if ((bVar35 & 8) == 0) {
                    ppppppuVar27 = ppppppuVar30 + 1;
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
                  }
                  else if ((bVar35 & 4) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
                  }
                  else {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                    uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
                  }
                  if ((uVar3 < 0x80) && ((*(byte *)(param_5[0x10] + uVar3) & 4) != 0))
                  goto LAB_000221ac;
                  iVar19 = iVar19 + 1;
                  ppppppuVar30 = ppppppuVar27;
                } while (iVar19 <= (int)uVar14);
                break;
              case 1:
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00028318;
                  bVar35 = *(byte *)ppppppuVar27;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                  if ((0x7f < bVar35) || ((*(byte *)(param_5[0x10] + (uint)bVar35) & 4) == 0))
                  goto LAB_000221ac;
                } while (ppppppuVar27 != ppppppuVar30);
                break;
              case 2:
                iVar19 = 1;
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
                  if ((*(byte *)ppppppuVar27 < 0x80) &&
                     ((*(byte *)(param_5[0x10] + (uint)*(byte *)ppppppuVar27) & 1) != 0))
                  goto LAB_000221ac;
                  do {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                    if (ppppppuVar27 == (undefined4 ******)param_5[0x1e]) break;
                  } while ((*(byte *)ppppppuVar27 & 0xc0) == 0x80);
                  iVar19 = iVar19 + 1;
                } while (iVar19 <= (int)uVar14);
                break;
              case 3:
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00028318;
                  bVar35 = *(byte *)ppppppuVar27;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                  if ((0x7f < bVar35) || ((*(byte *)(param_5[0x10] + (uint)bVar35) & 1) == 0))
                  goto LAB_000221ac;
                } while (ppppppuVar27 != ppppppuVar30);
                break;
              case 4:
                iVar19 = 1;
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
                  if ((*(byte *)ppppppuVar27 < 0x80) &&
                     ((*(byte *)(param_5[0x10] + (uint)*(byte *)ppppppuVar27) & 0x10) != 0))
                  goto LAB_000221ac;
                  do {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                    if (ppppppuVar27 == (undefined4 ******)param_5[0x1e]) break;
                  } while ((*(byte *)ppppppuVar27 & 0xc0) == 0x80);
                  iVar19 = iVar19 + 1;
                } while (iVar19 <= (int)uVar14);
                break;
              case 5:
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + uVar14);
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00028318;
                  bVar35 = *(byte *)ppppppuVar27;
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                  if ((0x7f < bVar35) || ((*(byte *)(param_5[0x10] + (uint)bVar35) & 0x10) == 0))
                  goto LAB_000221ac;
                } while (ppppppuVar27 != ppppppuVar30);
                break;
              case 6:
                iVar19 = 1;
                do {
                  ppppppuVar30 = (undefined4 ******)param_5[0x1e];
                  if (ppppppuVar30 <= ppppppuVar27) goto LAB_000242c4;
                  if (param_5[6] == 0) {
                    bVar32 = false;
                    if ((ppppppuVar27 <= (undefined4 ******)((int)ppppppuVar30 - param_5[7])) &&
                       (*(byte *)ppppppuVar27 == (byte)param_5[0xd])) {
                      if (param_5[7] == 1) {
                        bVar32 = true;
                      }
                      else {
                        bVar32 = *(byte *)((int)ppppppuVar27 + 1) == *(byte *)((int)param_5 + 0x35);
                      }
                    }
                  }
                  else {
                    iVar17 = FUN_000326d8(ppppppuVar27,param_5[6],ppppppuVar30,param_5 + 7,uVar12);
                    bVar32 = false;
                    if (iVar17 != 0) {
                      bVar32 = true;
                    }
                  }
                  if (bVar32) goto LAB_000221ac;
                  if ((((param_5[0x22] != 0) &&
                       ((byte *)param_5[0x1e] <= (byte *)((int)ppppppuVar27 + 1))) &&
                      (param_5[6] == 0)) &&
                     (((param_5[7] == 2 && (*(byte *)ppppppuVar27 == (byte)param_5[0xd])) &&
                      (param_5[0x19] = 1, 1 < (int)param_5[0x22])))) goto LAB_0002a758;
                  do {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                    if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) break;
                  } while ((*(byte *)ppppppuVar27 & 0xc0) == 0x80);
                  iVar19 = iVar19 + 1;
                } while (iVar19 <= (int)uVar14);
                break;
              case 7:
                iVar19 = 1;
                do {
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
                  do {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                    if (ppppppuVar27 == (undefined4 ******)param_5[0x1e]) break;
                  } while ((*(byte *)ppppppuVar27 & 0xc0) == 0x80);
                  iVar19 = iVar19 + 1;
                } while (iVar19 <= (int)uVar14);
                break;
              case 8:
                if (ppppppuVar27 <= (undefined4 ******)(param_5[0x1e] - uVar14)) goto LAB_0002a930;
                goto LAB_000221ac;
              case 9:
                goto switchD_00029140_default;
              case 10:
                goto switchD_00029140_default;
              case 0xb:
                iVar19 = 1;
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  bVar35 = *(byte *)ppppppuVar30;
                  uVar3 = (uint)bVar35;
                  if (uVar3 < 0xc0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  }
                  else if ((bVar35 & 0x20) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                    uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
                  }
                  else if ((bVar35 & 8) == 0) {
                    ppppppuVar27 = ppppppuVar30 + 1;
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
                  }
                  else if ((bVar35 & 4) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
                  }
                  else {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                    uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
                  }
                  if (uVar3 == 0xd) {
                    if ((ppppppuVar27 < (undefined4 ******)param_5[0x1e]) &&
                       (*(byte *)ppppppuVar27 == 10)) {
                      ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
                    }
                  }
                  else {
                    if (uVar3 < 0xe) {
                      if (uVar3 == 10) goto LAB_0002aafc;
                      if (uVar3 < 10) goto LAB_000231ec;
                    }
                    else if ((uVar3 != 0x85) && ((uVar3 < 0x85 || (1 < uVar3 - 0x2028))))
                    goto LAB_000231ec;
                    if (param_5[0x1a] != 0) goto LAB_000221ac;
                  }
LAB_0002aafc:
                  iVar19 = iVar19 + 1;
                  ppppppuVar30 = ppppppuVar27;
                } while (iVar19 <= (int)uVar14);
                break;
              case 0xc:
                iVar19 = 1;
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  bVar35 = *(byte *)ppppppuVar30;
                  uVar3 = (uint)bVar35;
                  if (uVar3 < 0xc0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  }
                  else if ((bVar35 & 0x20) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                    uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
                  }
                  else if ((bVar35 & 8) == 0) {
                    ppppppuVar27 = ppppppuVar30 + 1;
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
                  }
                  else if ((bVar35 & 4) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
                  }
                  else {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                    uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
                  }
                  if (uVar3 == 0x180e) goto LAB_000231ec;
                  if (uVar3 < 0x180f) {
                    if (uVar3 == 0x20) goto LAB_000231ec;
                    if (uVar3 < 0x21) {
                      bVar32 = uVar3 == 9;
                    }
                    else {
                      if (uVar3 == 0xa0) goto LAB_000231ec;
                      bVar32 = uVar3 == 0x1680;
                    }
LAB_0002ab74:
                    if (bVar32) goto LAB_000231ec;
                  }
                  else {
                    if (uVar3 == 0x202f) goto LAB_000231ec;
                    if (0x202f < uVar3) {
                      if (uVar3 != 0x205f) {
                        bVar32 = uVar3 == 0x3000;
                        goto LAB_0002ab74;
                      }
                      goto LAB_000231ec;
                    }
                    if (uVar3 - 0x2000 < 0xb) goto LAB_000231ec;
                  }
                  iVar19 = iVar19 + 1;
                  ppppppuVar30 = ppppppuVar27;
                } while (iVar19 <= (int)uVar14);
                break;
              case 0xd:
                iVar19 = 1;
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  bVar35 = *(byte *)ppppppuVar30;
                  uVar3 = (uint)bVar35;
                  if (uVar3 < 0xc0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  }
                  else if ((bVar35 & 0x20) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                    uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
                  }
                  else if ((bVar35 & 8) == 0) {
                    ppppppuVar27 = ppppppuVar30 + 1;
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
                  }
                  else if ((bVar35 & 4) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
                  }
                  else {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                    uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
                  }
                  if (uVar3 != 0x180e) {
                    if (uVar3 < 0x180f) {
                      if (uVar3 != 0x20) {
                        if (uVar3 < 0x21) {
                          bVar32 = uVar3 == 9;
                        }
                        else {
                          if (uVar3 == 0xa0) goto LAB_0002aeac;
                          bVar32 = uVar3 == 0x1680;
                        }
LAB_0002ad54:
                        if (!bVar32) goto LAB_000231ec;
                      }
                    }
                    else if (uVar3 != 0x202f) {
                      if (uVar3 < 0x2030) {
                        if (10 < uVar3 - 0x2000) goto LAB_000231ec;
                      }
                      else if (uVar3 != 0x205f) {
                        bVar32 = uVar3 == 0x3000;
                        goto LAB_0002ad54;
                      }
                    }
                  }
LAB_0002aeac:
                  iVar19 = iVar19 + 1;
                  ppppppuVar30 = ppppppuVar27;
                } while (iVar19 <= (int)uVar14);
                break;
              case 0xe:
                iVar19 = 1;
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  bVar35 = *(byte *)ppppppuVar30;
                  uVar3 = (uint)bVar35;
                  if (uVar3 < 0xc0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  }
                  else if ((bVar35 & 0x20) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                    uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
                  }
                  else if ((bVar35 & 8) == 0) {
                    ppppppuVar27 = ppppppuVar30 + 1;
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
                  }
                  else if ((bVar35 & 4) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
                  }
                  else {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                    uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
                  }
                  if (uVar3 == 0x85) goto LAB_000231ec;
                  if (uVar3 < 0x86) {
                    bVar31 = 2 < uVar3 - 10;
                    bVar32 = uVar3 - 10 == 3;
                  }
                  else {
                    bVar31 = uVar3 != 0x2028;
                    bVar32 = uVar3 == 0x2029;
                  }
                  if (!bVar31 || bVar32) goto LAB_000231ec;
                  iVar19 = iVar19 + 1;
                  ppppppuVar30 = ppppppuVar27;
                } while (iVar19 <= (int)uVar14);
                break;
              case 0xf:
                iVar19 = 1;
                ppppppuVar30 = ppppppuVar27;
                do {
                  ppppppuVar27 = ppppppuVar30;
                  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
                  bVar35 = *(byte *)ppppppuVar30;
                  uVar3 = (uint)bVar35;
                  if (uVar3 < 0xc0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  }
                  else if ((bVar35 & 0x20) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                    uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
                  }
                  else if ((bVar35 & 8) == 0) {
                    ppppppuVar27 = ppppppuVar30 + 1;
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
                  }
                  else if ((bVar35 & 4) == 0) {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                    uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
                  }
                  else {
                    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                    uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                            (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
                  }
                  if (uVar3 != 0x85) {
                    if (uVar3 < 0x86) {
                      bVar31 = 2 < uVar3 - 10;
                      bVar32 = uVar3 - 10 == 3;
                    }
                    else {
                      bVar31 = uVar3 != 0x2028;
                      bVar32 = uVar3 == 0x2029;
                    }
                    if (bVar31 && !bVar32) goto LAB_000231ec;
                  }
                  iVar19 = iVar19 + 1;
                  ppppppuVar30 = ppppppuVar27;
                } while (iVar19 <= (int)uVar14);
                break;
              default:
                goto switchD_00029140_default;
              }
            }
LAB_00030c40:
            uVar3 = 0xffffffff;
            goto LAB_0002928c;
          }
          uVar3 = (uint)pbVar26[1];
          local_120 = (uint)(uVar13 == 0xf);
          local_138 = pbVar26 + 3;
          local_118 = (uint)pbVar26[2];
          if (uVar14 == 0) goto LAB_0002928c;
          switch(uVar3) {
          case 0:
            if (uVar13 == 0xf) goto LAB_000221ac;
            iVar19 = 1;
            do {
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar27;
              if (uVar12 == 0 || bVar35 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 2);
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 3);
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar27 = ppppppuVar27 + 1;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 5);
              }
              else {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 6);
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 <= (int)uVar14);
            local_120 = 0;
            uVar3 = 0;
            break;
          case 1:
            iVar19 = 1;
            ppppppuVar30 = ppppppuVar27;
            do {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              uVar3 = (uint)bVar35;
              if (uVar12 == 0 || uVar3 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
              }
              uVar3 = (uint)*(byte *)(*(int *)(iVar10 + DAT_00028f9c) +
                                      (uint)*(ushort *)
                                             (*(int *)(iVar10 + DAT_00028f94) +
                                             ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_00028f8c) + ((int)uVar3 >> 7)) * 0x80 +
                                             (uVar3 & 0x7f)) * 2) * 8 + 1);
              uVar18 = uVar3 - 8;
              bVar32 = 4 < uVar3;
              bVar31 = uVar3 == 5;
              if (!bVar31) {
                bVar32 = uVar18 != 0;
              }
              bVar33 = uVar18 == 1;
              if (!bVar32 || (bVar31 || bVar33)) {
                uVar18 = 1;
              }
              if (bVar32 && (!bVar31 && !bVar33)) {
                uVar18 = 0;
              }
              if (uVar18 == local_120) goto LAB_000221ac;
              iVar19 = iVar19 + 1;
              ppppppuVar30 = ppppppuVar27;
            } while (iVar19 <= (int)uVar14);
            uVar3 = 1;
            break;
          case 2:
            iVar19 = 1;
            ppppppuVar30 = ppppppuVar27;
            do {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              uVar3 = (uint)bVar35;
              if (uVar12 == 0 || uVar3 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
              }
              if ((*(uint *)(*(int *)(iVar10 + DAT_00028f90) +
                            (uint)*(byte *)(*(int *)(iVar10 + DAT_00028f9c) +
                                            (uint)*(ushort *)
                                                   (*(int *)(iVar10 + DAT_00028f94) +
                                                   ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_00028f98) + ((int)uVar3 >> 7)) * 0x80 +
                                                  (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) == local_118)
                  == local_120) goto LAB_000221ac;
              iVar19 = iVar19 + 1;
              ppppppuVar30 = ppppppuVar27;
            } while (iVar19 <= (int)uVar14);
            uVar3 = 2;
            break;
          case 3:
            iVar19 = 1;
            ppppppuVar30 = ppppppuVar27;
            do {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              uVar3 = (uint)bVar35;
              if (uVar12 == 0 || uVar3 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
              }
              if ((*(byte *)(*(int *)(iVar10 + DAT_00028f9c) +
                             (uint)*(ushort *)
                                    (*(int *)(iVar10 + DAT_00028f94) +
                                    ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_00028f98) +
                                                             ((int)uVar3 >> 7)) * 0x80 +
                                    (uVar3 & 0x7f)) * 2) * 8 + 1) == local_118) == local_120)
              goto LAB_000221ac;
              iVar19 = iVar19 + 1;
              ppppppuVar30 = ppppppuVar27;
            } while (iVar19 <= (int)uVar14);
            uVar3 = 3;
            break;
          case 4:
            iVar19 = 1;
            ppppppuVar30 = ppppppuVar27;
            do {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              uVar3 = (uint)bVar35;
              if (uVar12 == 0 || uVar3 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
              }
              if ((*(byte *)(*(int *)(iVar10 + DAT_00028f9c) +
                            (uint)*(ushort *)
                                   (*(int *)(iVar10 + DAT_00028f94) +
                                   ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_00028f98) +
                                                            ((int)uVar3 >> 7)) * 0x80 +
                                   (uVar3 & 0x7f)) * 2) * 8) == local_118) == local_120)
              goto LAB_000221ac;
              iVar19 = iVar19 + 1;
              ppppppuVar30 = ppppppuVar27;
            } while (iVar19 <= (int)uVar14);
            uVar3 = 4;
            break;
          case 5:
            iVar19 = 1;
            ppppppuVar30 = ppppppuVar27;
            do {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              uVar3 = (uint)bVar35;
              if (uVar12 == 0 || uVar3 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
              }
              if (((*(uint *)(*(int *)(iVar10 + DAT_00028f90) +
                             (uint)*(byte *)(*(int *)(iVar10 + DAT_00028f9c) +
                                             (uint)*(ushort *)
                                                    (*(int *)(iVar10 + DAT_00028f94) +
                                                    ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_00028f98) + ((int)uVar3 >> 7)) * 0x80 +
                                                  (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) & 0xfffffffd)
                  == 1) == local_120) goto LAB_000221ac;
              iVar19 = iVar19 + 1;
              ppppppuVar30 = ppppppuVar27;
            } while (iVar19 <= (int)uVar14);
            uVar3 = 5;
            break;
          case 6:
            goto LAB_00029c58;
          case 7:
LAB_00029c58:
            iVar19 = 1;
            ppppppuVar30 = ppppppuVar27;
            do {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              uVar18 = (uint)bVar35;
              if (uVar12 == 0 || uVar18 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                uVar18 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar18 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                uVar18 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                         (uVar18 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                uVar18 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                         (uVar18 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                         (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                uVar18 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                         (uVar18 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                         (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                         (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                uVar18 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                         (uVar18 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                         (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                         (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                         (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
              }
              if (uVar18 == 0x180e) {
LAB_00029ce0:
                bVar32 = uVar13 == 0xf;
              }
              else {
                if (0x180e < uVar18) {
                  if (uVar18 < 0x202a) {
                    if (uVar18 < 0x2028) {
                      bVar31 = 9 < uVar18 - 0x2000;
                      bVar32 = uVar18 - 0x2000 == 10;
                      goto LAB_00029cdc;
                    }
                  }
                  else if ((uVar18 != 0x205f) && (uVar18 != 0x3000)) {
                    bVar32 = uVar18 == 0x202f;
LAB_00029e38:
                    if (!bVar32) goto LAB_00029e3c;
                  }
                  goto LAB_00029ce0;
                }
                if (uVar18 == 0x20) goto LAB_00029ce0;
                if (0x20 < uVar18) {
                  if ((uVar18 != 0xa0) && (uVar18 != 0x1680)) {
                    bVar32 = uVar18 == 0x85;
                    goto LAB_00029e38;
                  }
                  goto LAB_00029ce0;
                }
                bVar31 = 3 < uVar18 - 9;
                bVar32 = uVar18 - 9 == 4;
LAB_00029cdc:
                if (!bVar31 || bVar32) goto LAB_00029ce0;
LAB_00029e3c:
                bVar32 = (*(int *)(*(int *)(iVar10 + DAT_00028f90) +
                                  (uint)*(byte *)(*(int *)(iVar10 + DAT_00028f9c) +
                                                  (uint)*(ushort *)
                                                         (*(int *)(iVar10 + DAT_00028f94) +
                                                         ((short)(ushort)*(byte *)(*(int *)(iVar10 +
                                                                                                                                                                                      
                                                  DAT_00028f98) + ((int)uVar18 >> 7)) * 0x80 +
                                                  (uVar18 & 0x7f)) * 2) * 8 + 1) * 4) == 6) ==
                         local_120;
              }
              if (bVar32) goto LAB_000221ac;
              iVar19 = iVar19 + 1;
              ppppppuVar30 = ppppppuVar27;
            } while (iVar19 <= (int)uVar14);
            break;
          case 8:
            iVar19 = 1;
            ppppppuVar30 = ppppppuVar27;
            do {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              uVar3 = (uint)bVar35;
              if (uVar12 == 0 || uVar3 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
              }
              if (local_120 ==
                  (uVar3 == 0x5f ||
                  (*(uint *)(*(int *)(iVar10 + DAT_00028f90) +
                            (uint)*(byte *)(*(int *)(iVar10 + DAT_00028f9c) +
                                            (uint)*(ushort *)
                                                   (*(int *)(iVar10 + DAT_00028f94) +
                                                   ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_00028f98) + ((int)uVar3 >> 7)) * 0x80 +
                                                  (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) & 0xfffffffd)
                  == 1)) goto LAB_000221ac;
              iVar19 = iVar19 + 1;
              ppppppuVar30 = ppppppuVar27;
            } while (iVar19 <= (int)uVar14);
            uVar3 = 8;
            break;
          case 9:
            iVar19 = 1;
            ppppppuVar30 = ppppppuVar27;
            do {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              uVar3 = (uint)bVar35;
              if (uVar12 == 0 || uVar3 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
              }
              puVar22 = (uint *)(local_118 * 4 + -4 + *(int *)(iVar10 + DAT_0002b108));
              do {
                puVar22 = puVar22 + 1;
                if (uVar3 < *puVar22) {
                  if (uVar13 == 0xf) goto LAB_0002a150;
                  goto LAB_000221ac;
                }
              } while (*puVar22 != uVar3);
              if (uVar13 == 0xf) goto LAB_000221ac;
LAB_0002a150:
              iVar19 = iVar19 + 1;
              ppppppuVar30 = ppppppuVar27;
            } while (iVar19 <= (int)uVar14);
            uVar3 = 9;
            break;
          case 10:
            iVar19 = 1;
            ppppppuVar30 = ppppppuVar27;
            do {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              uVar3 = (uint)bVar35;
              if (uVar12 == 0 || uVar3 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar27 = ppppppuVar30 + 1;
                uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                        (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                        (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                        (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
              }
              if (uVar3 == 0x24 || (uVar3 & 0xffffffdf) == 0x40) {
                uVar18 = 1;
              }
              else {
                uVar18 = (uint)(0xdfff < uVar3);
                if (uVar3 - 0xa0 < 0xd760) {
                  uVar18 = 1;
                }
              }
              if (uVar18 == local_120) goto LAB_000221ac;
              iVar19 = iVar19 + 1;
              ppppppuVar30 = ppppppuVar27;
            } while (iVar19 <= (int)uVar14);
            uVar3 = 10;
            break;
          default:
            goto switchD_00029140_default;
          }
LAB_0002928c:
          param_1 = ppppppuVar27;
          if (uVar20 == uVar14) goto LAB_000222f4;
          if (local_114 != 0) {
            if (uVar3 != 0xffffffff) {
              switch(uVar3) {
              case 0:
                goto LAB_0002c174;
              case 1:
                goto LAB_0002bfcc;
              case 2:
                goto LAB_0002bed8;
              case 3:
                goto LAB_0002bdf0;
              case 4:
                goto LAB_0002bd0c;
              case 5:
                goto LAB_0002bc14;
              case 6:
                goto LAB_0002bb54;
              case 7:
                goto LAB_0002bb54;
              case 8:
                goto LAB_0002ba54;
              case 9:
                goto LAB_0002c0c0;
              case 10:
                break;
              default:
                goto switchD_00029140_default;
              }
              goto LAB_0002b98c;
            }
            if (uVar13 == 0x16) goto LAB_0002cd60;
            if (uVar12 != 0) {
              goto LAB_0002d178;
            }
            goto LAB_0002d238;
          }
          param_2 = local_138;
          if (uVar3 != 0xffffffff) {
            switch(uVar3) {
            case 0:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002da48;
                bVar35 = *(byte *)param_1;
                if (uVar12 == 0 || bVar35 < 0xc0) {
                  iVar19 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  iVar19 = 2;
                }
                else if ((bVar35 & 0x10) == 0) {
                  iVar19 = 3;
                }
                else if ((bVar35 & 8) == 0) {
                  iVar19 = 4;
                }
                else if ((bVar35 & 4) == 0) {
                  iVar19 = 5;
                }
                else {
                  iVar19 = 6;
                }
                if (local_120 != 0) break;
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 1:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002da48;
                bVar35 = *(byte *)param_1;
                uVar18 = (uint)bVar35;
                uVar13 = uVar3;
                if (uVar12 != 0 && 0xbf < uVar18) {
                  if ((bVar35 & 0x20) == 0) {
                    uVar18 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar18 & 0x1f) << 6;
                    uVar13 = 2;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    uVar18 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                             (uVar18 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                    uVar13 = 3;
                  }
                  else if ((bVar35 & 8) == 0) {
                    uVar18 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                             (uVar18 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                             (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                    uVar13 = 4;
                  }
                  else if ((bVar35 & 4) == 0) {
                    uVar18 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                             (uVar18 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                             (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                             (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                    uVar13 = 5;
                  }
                  else {
                    uVar18 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                             (uVar18 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                             (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                             (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                             (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                    uVar13 = 6;
                  }
                }
                uVar18 = (uint)*(byte *)(*(int *)(iVar10 + DAT_0002d134) +
                                         (uint)*(ushort *)
                                                (*(int *)(iVar10 + DAT_0002d12c) +
                                                ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_0002d130) + ((int)uVar18 >> 7)) * 0x80 +
                                                (uVar18 & 0x7f)) * 2) * 8 + 1);
                uVar24 = uVar18 - 8;
                bVar32 = 4 < uVar18;
                bVar31 = uVar18 == 5;
                if (!bVar31) {
                  bVar32 = uVar24 != 0;
                }
                bVar33 = uVar24 == 1;
                if (!bVar32 || (bVar31 || bVar33)) {
                  uVar24 = 1;
                }
                if (bVar32 && (!bVar31 && !bVar33)) {
                  uVar24 = 0;
                }
                if (uVar24 == local_120) break;
                param_1 = (undefined4 ******)((int)param_1 + uVar13);
              }
              break;
            case 2:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002da48;
                bVar35 = *(byte *)param_1;
                uVar13 = (uint)bVar35;
                if (uVar12 == 0 || uVar13 < 0xc0) {
                  uVar18 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  uVar13 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar13 & 0x1f) << 6;
                  uVar18 = uVar3;
                }
                else if ((bVar35 & 0x10) == 0) {
                  uVar18 = 3;
                  uVar13 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                           (uVar13 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  uVar18 = 4;
                  uVar13 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                           (uVar13 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  uVar18 = 5;
                  uVar13 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                           (uVar13 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                           (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                }
                else {
                  uVar18 = 6;
                  uVar13 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                           (uVar13 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                           (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                           (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                }
                if ((*(uint *)(*(int *)(iVar10 + DAT_0002d128) +
                              (uint)*(byte *)(*(int *)(iVar10 + DAT_0002d134) +
                                              (uint)*(ushort *)
                                                     (*(int *)(iVar10 + DAT_0002d12c) +
                                                     ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_0002d130) + ((int)uVar13 >> 7)) * 0x80 +
                                                  (uVar13 & 0x7f)) * 2) * 8 + 1) * 4) == local_118)
                    == local_120) break;
                param_1 = (undefined4 ******)((int)param_1 + uVar18);
              }
              break;
            case 3:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002da48;
                bVar35 = *(byte *)param_1;
                uVar13 = (uint)bVar35;
                if (uVar12 == 0 || uVar13 < 0xc0) {
                  uVar18 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  uVar13 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar13 & 0x1f) << 6;
                  uVar18 = 2;
                }
                else if ((bVar35 & 0x10) == 0) {
                  uVar13 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                           (uVar13 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                  uVar18 = uVar3;
                }
                else if ((bVar35 & 8) == 0) {
                  uVar18 = 4;
                  uVar13 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                           (uVar13 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  uVar18 = 5;
                  uVar13 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                           (uVar13 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                           (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                }
                else {
                  uVar18 = 6;
                  uVar13 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                           (uVar13 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                           (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                           (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                }
                if ((*(byte *)(*(int *)(iVar10 + DAT_0002d134) +
                               (uint)*(ushort *)
                                      (*(int *)(iVar10 + DAT_0002d12c) +
                                      ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002d130) +
                                                               ((int)uVar13 >> 7)) * 0x80 +
                                      (uVar13 & 0x7f)) * 2) * 8 + 1) == local_118) == local_120)
                break;
                param_1 = (undefined4 ******)((int)param_1 + uVar18);
              }
              break;
            case 4:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002da48;
                bVar35 = *(byte *)param_1;
                uVar13 = (uint)bVar35;
                if (uVar12 == 0 || uVar13 < 0xc0) {
                  uVar18 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  uVar13 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar13 & 0x1f) << 6;
                  uVar18 = 2;
                }
                else if ((bVar35 & 0x10) == 0) {
                  uVar13 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                           (uVar13 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                  uVar18 = 3;
                }
                else if ((bVar35 & 8) == 0) {
                  uVar13 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                           (uVar13 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                  uVar18 = uVar3;
                }
                else if ((bVar35 & 4) == 0) {
                  uVar18 = 5;
                  uVar13 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                           (uVar13 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                           (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                }
                else {
                  uVar18 = 6;
                  uVar13 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                           (uVar13 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                           (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                           (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                }
                if ((*(byte *)(*(int *)(iVar10 + DAT_0002f110) +
                              (uint)*(ushort *)
                                     (*(int *)(iVar10 + DAT_0002f108) +
                                     ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002f10c) +
                                                              ((int)uVar13 >> 7)) * 0x80 +
                                     (uVar13 & 0x7f)) * 2) * 8) == local_118) == local_120) break;
                param_1 = (undefined4 ******)((int)param_1 + uVar18);
              }
              break;
            case 5:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002da48;
                bVar35 = *(byte *)param_1;
                uVar13 = (uint)bVar35;
                if (uVar12 == 0 || uVar13 < 0xc0) {
                  uVar18 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  uVar13 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar13 & 0x1f) << 6;
                  uVar18 = 2;
                }
                else if ((bVar35 & 0x10) == 0) {
                  uVar13 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                           (uVar13 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                  uVar18 = 3;
                }
                else if ((bVar35 & 8) == 0) {
                  uVar13 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                           (uVar13 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                  uVar18 = 4;
                }
                else if ((bVar35 & 4) == 0) {
                  uVar13 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                           (uVar13 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                           (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                  uVar18 = uVar3;
                }
                else {
                  uVar18 = 6;
                  uVar13 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                           (uVar13 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                           (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                           (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                           (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                }
                if (((*(uint *)(*(int *)(iVar10 + DAT_0002f114) +
                               (uint)*(byte *)(*(int *)(iVar10 + DAT_0002f110) +
                                               (uint)*(ushort *)
                                                      (*(int *)(iVar10 + DAT_0002f108) +
                                                      ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_0002f10c) + ((int)uVar13 >> 7)) * 0x80 +
                                                  (uVar13 & 0x7f)) * 2) * 8 + 1) * 4) & 0xfffffffd)
                    == 1) == local_120) break;
                param_1 = (undefined4 ******)((int)param_1 + uVar18);
              }
              break;
            case 6:
              goto LAB_0002e560;
            case 7:
LAB_0002e560:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002da48;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar12 == 0 || uVar3 < 0xc0) {
                  iVar19 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  iVar19 = 2;
                  uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  iVar19 = 3;
                  uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  iVar19 = 4;
                  uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                          (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  iVar19 = 5;
                  uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                          (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                }
                else {
                  iVar19 = 6;
                  uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                }
                if (uVar3 == 0x180e) {
LAB_0002e54c:
                  if (local_120 != 0) break;
                }
                else {
                  if (0x180e < uVar3) {
                    if (uVar3 < 0x202a) {
                      if (uVar3 < 0x2028) {
                        bVar31 = 9 < uVar3 - 0x2000;
                        bVar32 = uVar3 - 0x2000 == 10;
                        goto LAB_0002e548;
                      }
                    }
                    else if ((uVar3 != 0x205f) && (uVar3 != 0x3000)) {
                      bVar32 = uVar3 == 0x202f;
LAB_0002e6a8:
                      if (!bVar32) goto LAB_0002e6ac;
                    }
                    goto LAB_0002e54c;
                  }
                  if (uVar3 == 0x20) goto LAB_0002e54c;
                  if (0x20 < uVar3) {
                    if ((uVar3 != 0xa0) && (uVar3 != 0x1680)) {
                      bVar32 = uVar3 == 0x85;
                      goto LAB_0002e6a8;
                    }
                    goto LAB_0002e54c;
                  }
                  bVar31 = 3 < uVar3 - 9;
                  bVar32 = uVar3 - 9 == 4;
LAB_0002e548:
                  if (!bVar31 || bVar32) goto LAB_0002e54c;
LAB_0002e6ac:
                  if ((*(int *)(*(int *)(iVar10 + DAT_0002f114) +
                               (uint)*(byte *)(*(int *)(iVar10 + DAT_0002f110) +
                                               (uint)*(ushort *)
                                                      (*(int *)(iVar10 + DAT_0002f108) +
                                                      ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_0002f10c) + ((int)uVar3 >> 7)) * 0x80 +
                                                  (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) == 6) ==
                      local_120) break;
                }
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 8:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002da48;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar12 == 0 || uVar3 < 0xc0) {
                  iVar19 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  iVar19 = 2;
                  uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  iVar19 = 3;
                  uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  iVar19 = 4;
                  uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                          (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  iVar19 = 5;
                  uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                          (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                }
                else {
                  iVar19 = 6;
                  uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                }
                if ((uVar3 == 0x5f ||
                    (*(uint *)(*(int *)(iVar10 + DAT_0002f114) +
                              (uint)*(byte *)(*(int *)(iVar10 + DAT_0002f110) +
                                              (uint)*(ushort *)
                                                     (*(int *)(iVar10 + DAT_0002f108) +
                                                     ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_0002f10c) + ((int)uVar3 >> 7)) * 0x80 +
                                                  (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) & 0xfffffffd)
                    == 1) == local_120) break;
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 9:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002da48;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar12 == 0 || uVar3 < 0xc0) {
                  iVar19 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  iVar19 = 2;
                  uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  iVar19 = 3;
                  uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  iVar19 = 4;
                  uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                          (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  iVar19 = 5;
                  uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                          (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                }
                else {
                  iVar19 = 6;
                  uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                }
                puVar22 = (uint *)(local_118 * 4 + -4 + *(int *)(iVar10 + DAT_0002d124));
                do {
                  puVar22 = puVar22 + 1;
                  if (uVar3 < *puVar22) {
                    if (local_120 != 0) goto LAB_0002da30;
                    goto LAB_0002dad8;
                  }
                } while (*puVar22 != uVar3);
                if (local_120 != 0) break;
LAB_0002da30:
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 10:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002da48;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar12 == 0 || uVar3 < 0xc0) {
                  iVar19 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  iVar19 = 2;
                  uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  iVar19 = 3;
                  uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  iVar19 = 4;
                  uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                          (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  iVar19 = 5;
                  uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                          (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                }
                else {
                  iVar19 = 6;
                  uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                }
                if (uVar3 == 0x24 || (uVar3 & 0xffffffdf) == 0x40) {
                  uVar13 = 1;
                }
                else {
                  uVar13 = (uint)(0xdfff < uVar3);
                  if (uVar3 - 0xa0 < 0xd760) {
                    uVar13 = 1;
                  }
                }
                if (uVar13 == local_120) break;
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            default:
              goto switchD_00029140_default;
            }
            goto LAB_0002dad8;
          }
          if (uVar13 == 0x16) {
            for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
              ppppppuVar30 = (undefined4 ******)param_5[0x1e];
              if (ppppppuVar30 <= param_1) {
                if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < param_1)) &&
                   (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_0002d830;
                break;
              }
              bVar35 = *(byte *)param_1;
              uVar3 = (uint)bVar35;
              if (uVar12 == 0 || uVar3 < 0xc0) {
                ppppppuVar8 = (undefined4 ******)((int)param_1 + 1);
              }
              else if ((bVar35 & 0x20) == 0) {
                ppppppuVar8 = (undefined4 ******)((int)param_1 + 2);
                uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                ppppppuVar8 = (undefined4 ******)((int)param_1 + 3);
                uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                ppppppuVar8 = param_1 + 1;
                uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                        (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                ppppppuVar8 = (undefined4 ******)((int)param_1 + 5);
                uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                        (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                        (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
              }
              else {
                ppppppuVar8 = (undefined4 ******)((int)param_1 + 6);
                uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                        (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                        (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                        (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
              }
              uVar3 = (uint)*(byte *)(*(int *)(iVar10 + DAT_0002f110) +
                                      (uint)*(ushort *)
                                             (*(int *)(iVar10 + DAT_0002f108) +
                                             ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_0002f10c) + ((int)uVar3 >> 7)) * 0x80 +
                                             (uVar3 & 0x7f)) * 2) * 8 + 2);
              for (; ppppppuVar8 < ppppppuVar30;
                  ppppppuVar8 = (undefined4 ******)((int)ppppppuVar8 + iVar19)) {
                bVar35 = *(byte *)ppppppuVar8;
                uVar13 = (uint)bVar35;
                if ((uVar12 == 0) || (uVar13 < 0xc0)) {
                  iVar19 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  iVar19 = 2;
                  uVar13 = *(byte *)((int)ppppppuVar8 + 1) & 0x3f | (uVar13 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  iVar19 = 3;
                  uVar13 = (*(byte *)((int)ppppppuVar8 + 1) & 0x3f) << 6 |
                           (uVar13 & 0xf) << 0xc | *(byte *)((int)ppppppuVar8 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  iVar19 = 4;
                  uVar13 = (*(byte *)((int)ppppppuVar8 + 2) & 0x3f) << 6 |
                           (uVar13 & 7) << 0x12 | *(byte *)((int)ppppppuVar8 + 3) & 0x3f |
                           (*(byte *)((int)ppppppuVar8 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  iVar19 = 5;
                  uVar13 = (*(byte *)((int)ppppppuVar8 + 3) & 0x3f) << 6 |
                           (uVar13 & 3) << 0x18 | *(byte *)(ppppppuVar8 + 1) & 0x3f |
                           (*(byte *)((int)ppppppuVar8 + 1) & 0x3f) << 0x12 |
                           (*(byte *)((int)ppppppuVar8 + 2) & 0x3f) << 0xc;
                }
                else {
                  iVar19 = 6;
                  uVar13 = (*(byte *)(ppppppuVar8 + 1) & 0x3f) << 6 |
                           (uVar13 & 1) << 0x1e | *(byte *)((int)ppppppuVar8 + 5) & 0x3f |
                           (*(byte *)((int)ppppppuVar8 + 1) & 0x3f) << 0x18 |
                           (*(byte *)((int)ppppppuVar8 + 2) & 0x3f) << 0x12 |
                           (*(byte *)((int)ppppppuVar8 + 3) & 0x3f) << 0xc;
                }
                uVar13 = (uint)*(byte *)(*(int *)(iVar10 + DAT_0002f110) +
                                         (uint)*(ushort *)
                                                (*(int *)(iVar10 + DAT_0002f108) +
                                                ((short)(ushort)*(byte *)(*(int *)(iVar10 + 
                                                  DAT_0002f10c) + ((int)uVar13 >> 7)) * 0x80 +
                                                (uVar13 & 0x7f)) * 2) * 8 + 2);
                if ((*(uint *)(*(int *)(iVar10 + DAT_0002f118) + uVar3 * 4) & 1 << uVar13) == 0)
                break;
                uVar3 = uVar13;
              }
              if (((param_5[0x22] != 0 && ppppppuVar30 <= ppppppuVar8) &&
                  ((undefined4 ******)param_5[0x21] < ppppppuVar8)) &&
                 (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_0002d830;
              param_1 = ppppppuVar8;
            }
            if (!bVar34) goto LAB_0002ed64;
            goto LAB_000222f4;
          }
          if (uVar12 != 0) {
            switch(uVar13 - 6) {
            case 0:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002f438;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar3 < 0xc0) {
                  iVar19 = 1;
LAB_0002fc90:
                  if ((*(byte *)(param_5[0x10] + uVar3) & 4) != 0) break;
                }
                else {
                  if ((bVar35 & 0x20) == 0) {
                    uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                    iVar19 = 2;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                    iVar19 = 3;
                  }
                  else if ((bVar35 & 8) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                    iVar19 = 4;
                  }
                  else if ((bVar35 & 4) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                    iVar19 = 5;
                  }
                  else {
                    uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                    iVar19 = 6;
                  }
                  if (uVar3 < 0x100) goto LAB_0002fc90;
                }
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 1:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002f438;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar3 < 0xc0) {
                  iVar19 = 1;
                }
                else {
                  if ((bVar35 & 0x20) == 0) {
                    uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                    iVar19 = 2;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                    iVar19 = 3;
                  }
                  else if ((bVar35 & 8) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                    iVar19 = 4;
                  }
                  else if ((bVar35 & 4) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                    iVar19 = 5;
                  }
                  else {
                    uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                    iVar19 = 6;
                  }
                  if (0xff < uVar3) break;
                }
                if ((*(byte *)(param_5[0x10] + uVar3) & 4) == 0) break;
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 2:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002f438;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar3 < 0xc0) {
                  iVar19 = 1;
LAB_0002ffc8:
                  if ((*(byte *)(param_5[0x10] + uVar3) & 1) != 0) break;
                }
                else {
                  if ((bVar35 & 0x20) == 0) {
                    uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                    iVar19 = 2;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                    iVar19 = 3;
                  }
                  else if ((bVar35 & 8) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                    iVar19 = 4;
                  }
                  else if ((bVar35 & 4) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                    iVar19 = 5;
                  }
                  else {
                    uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                    iVar19 = 6;
                  }
                  if (uVar3 < 0x100) goto LAB_0002ffc8;
                }
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 3:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002f438;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar3 < 0xc0) {
                  iVar19 = 1;
                }
                else {
                  if ((bVar35 & 0x20) == 0) {
                    uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                    iVar19 = 2;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                    iVar19 = 3;
                  }
                  else if ((bVar35 & 8) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                    iVar19 = 4;
                  }
                  else if ((bVar35 & 4) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                    iVar19 = 5;
                  }
                  else {
                    uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                    iVar19 = 6;
                  }
                  if (0xff < uVar3) break;
                }
                if ((*(byte *)(param_5[0x10] + uVar3) & 1) == 0) break;
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 4:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002f438;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar3 < 0xc0) {
                  iVar19 = 1;
LAB_00030300:
                  if ((*(byte *)(param_5[0x10] + uVar3) & 0x10) != 0) break;
                }
                else {
                  if ((bVar35 & 0x20) == 0) {
                    uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                    iVar19 = 2;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                    iVar19 = 3;
                  }
                  else if ((bVar35 & 8) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                    iVar19 = 4;
                  }
                  else if ((bVar35 & 4) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                    iVar19 = 5;
                  }
                  else {
                    uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                    iVar19 = 6;
                  }
                  if (uVar3 < 0x100) goto LAB_00030300;
                }
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 5:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002f438;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar3 < 0xc0) {
                  iVar19 = 1;
                }
                else {
                  if ((bVar35 & 0x20) == 0) {
                    uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                    iVar19 = 2;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                    iVar19 = 3;
                  }
                  else if ((bVar35 & 8) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                            (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                    iVar19 = 4;
                  }
                  else if ((bVar35 & 4) == 0) {
                    uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                            (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                    iVar19 = 5;
                  }
                  else {
                    uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                            (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                            (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                            (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                            (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                    iVar19 = 6;
                  }
                  if (0xff < uVar3) break;
                }
                if ((*(byte *)(param_5[0x10] + uVar3) & 0x10) == 0) break;
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 6:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                ppppppuVar30 = (undefined4 ******)param_5[0x1e];
                if (ppppppuVar30 <= param_1) goto LAB_0002f438;
                if (param_5[6] == 0) {
                  bVar32 = false;
                  if ((param_1 <= (undefined4 ******)((int)ppppppuVar30 - param_5[7])) &&
                     (*(byte *)param_1 == (byte)param_5[0xd])) {
                    if (param_5[7] == 1) {
                      bVar32 = true;
                    }
                    else {
                      bVar32 = *(byte *)((int)param_1 + 1) == *(byte *)((int)param_5 + 0x35);
                    }
                  }
                }
                else {
                  iVar19 = FUN_000326d8(param_1,param_5[6],ppppppuVar30,param_5 + 7,uVar12);
                  bVar32 = false;
                  if (iVar19 != 0) {
                    bVar32 = true;
                  }
                }
                if (bVar32) break;
                if (((((param_5[0x22] != 0) && ((byte *)param_5[0x1e] <= (byte *)((int)param_1 + 1))
                      ) && (param_5[6] == 0)) &&
                    ((param_5[7] == 2 && (*(byte *)param_1 == (byte)param_5[0xd])))) &&
                   (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_0002d830;
                do {
                  param_1 = (undefined4 ******)((int)param_1 + 1);
                  if ((undefined4 ******)param_5[0x1e] <= param_1) break;
                } while ((*(byte *)param_1 & 0xc0) == 0x80);
              }
              break;
            case 7:
              if (uVar20 == 0x7fffffff) {
                param_1 = (undefined4 ******)param_5[0x1e];
LAB_0002f438:
                uVar3 = param_5[0x22];
                if ((uVar3 != 0) && ((undefined4 ******)param_5[0x21] < param_1)) {
LAB_0002f684:
                  param_5[0x19] = 1;
                  if (1 < (int)uVar3) goto LAB_0002d830;
                }
              }
              else {
                for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                  if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002f438;
                  do {
                    param_1 = (undefined4 ******)((int)param_1 + 1);
                    if (param_1 == (undefined4 ******)param_5[0x1e]) break;
                  } while ((*(byte *)param_1 & 0xc0) == 0x80);
                }
              }
              break;
            case 8:
              param_1 = (undefined4 ******)param_5[0x1e];
              if ((uint)((int)param_1 - (int)ppppppuVar27) < uVar20 - uVar14) {
                uVar3 = param_5[0x22];
                if ((uVar3 != 0) && ((undefined4 ******)param_5[0x21] < param_1)) goto LAB_0002f684;
              }
              else {
                param_1 = (undefined4 ******)((int)ppppppuVar27 + (uVar20 - uVar14));
              }
              break;
            case 9:
              goto switchD_00029140_default;
            case 10:
              goto switchD_00029140_default;
            case 0xb:
              ppppppuVar30 = ppppppuVar27;
              for (; param_1 = ppppppuVar30, (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_0002f438;
                bVar35 = *(byte *)ppppppuVar30;
                uVar3 = (uint)bVar35;
                if (uVar3 < 0xc0) {
                  iVar19 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  iVar19 = 2;
                  uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  iVar19 = 3;
                  uVar3 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                          (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  iVar19 = 4;
                  uVar3 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                          (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                          (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  iVar19 = 5;
                  uVar3 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                          (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                          (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                          (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
                }
                else {
                  iVar19 = 6;
                  uVar3 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                          (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                          (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                          (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                          (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
                }
                if (uVar3 == 0xd) {
                  param_1 = (undefined4 ******)((int)ppppppuVar30 + 1);
                  if ((undefined4 ******)param_5[0x1e] <= param_1) break;
                  if (*(byte *)((int)ppppppuVar30 + 1) == 10) {
                    param_1 = (undefined4 ******)((int)ppppppuVar30 + 2);
                  }
                }
                else {
                  if (uVar3 != 10) {
                    if (param_5[0x1a] != 0) break;
                    bVar32 = 0x84 < uVar3;
                    if (uVar3 != 0x85) {
                      bVar32 = uVar3 != 0xb;
                    }
                    if ((bVar32 && (uVar3 != 0x85 && uVar3 != 0xc)) && (1 < uVar3 - 0x2028)) break;
                  }
                  param_1 = (undefined4 ******)((int)ppppppuVar30 + iVar19);
                }
                ppppppuVar30 = param_1;
              }
              break;
            case 0xc:
              goto LAB_0002f9f0;
            case 0xd:
LAB_0002f9f0:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002f438;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar3 < 0xc0) {
                  iVar19 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  iVar19 = 2;
                  uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  iVar19 = 3;
                  uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  iVar19 = 4;
                  uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                          (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  iVar19 = 5;
                  uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                          (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                }
                else {
                  iVar19 = 6;
                  uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                }
                if (uVar3 == 0x180e) {
LAB_0002fa6c:
                  bVar32 = true;
                }
                else {
                  if (0x180e < uVar3) {
                    if (uVar3 != 0x202f) {
                      if (uVar3 < 0x2030) {
                        if (uVar3 - 0x2000 < 0xb) {
                          bVar32 = true;
                        }
                        else {
                          bVar32 = false;
                        }
                      }
                      else {
                        if (uVar3 == 0x205f) goto LAB_0002fa6c;
                        bVar32 = uVar3 == 0x3000;
                      }
                      goto LAB_0002f9d0;
                    }
                    goto LAB_0002fa6c;
                  }
                  if (uVar3 == 0x20) goto LAB_0002fa6c;
                  if (uVar3 < 0x21) {
                    bVar32 = uVar3 == 9;
                  }
                  else {
                    if (uVar3 == 0xa0) goto LAB_0002fa6c;
                    bVar32 = uVar3 == 0x1680;
                  }
                }
LAB_0002f9d0:
                if ((uVar13 == 0x12) == bVar32) break;
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            case 0xe:
              goto LAB_0002fb04;
            case 0xf:
LAB_0002fb04:
              for (; (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_0002f438;
                bVar35 = *(byte *)param_1;
                uVar3 = (uint)bVar35;
                if (uVar3 < 0xc0) {
                  iVar19 = 1;
                }
                else if ((bVar35 & 0x20) == 0) {
                  iVar19 = 2;
                  uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  iVar19 = 3;
                  uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  iVar19 = 4;
                  uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                          (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  iVar19 = 5;
                  uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                          (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                }
                else {
                  iVar19 = 6;
                  uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                          (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                          (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                          (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                          (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                }
                if (uVar3 == 0x85) {
                  bVar32 = true;
                }
                else {
                  if (uVar3 < 0x86) {
                    bVar31 = 2 < uVar3 - 10;
                    bVar32 = uVar3 - 10 == 3;
                  }
                  else {
                    bVar31 = uVar3 != 0x2028;
                    bVar32 = uVar3 == 0x2029;
                  }
                  if (bVar31 && !bVar32) {
                    bVar32 = false;
                  }
                  else {
                    bVar32 = true;
                  }
                }
                if ((uVar13 == 0x14) == bVar32) break;
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              break;
            default:
              goto switchD_00029140_default;
            }
            if (!bVar34) goto LAB_0002f4d4;
            goto LAB_000222f4;
          }
          switch(uVar13 - 6) {
          case 0:
            ppppppuVar30 = ppppppuVar27;
            do {
              param_1 = ppppppuVar30;
              if ((int)uVar20 <= (int)((int)param_1 + (uVar14 - (int)ppppppuVar27))) break;
              if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_000308e8;
              ppppppuVar30 = (undefined4 ******)((int)param_1 + 1);
            } while ((*(byte *)(param_5[0x10] + (uint)*(byte *)param_1) & 4) == 0);
            break;
          case 1:
            ppppppuVar30 = ppppppuVar27;
            do {
              param_1 = ppppppuVar30;
              if ((int)uVar20 <= (int)((int)param_1 + (uVar14 - (int)ppppppuVar27))) break;
              if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_000308e8;
              ppppppuVar30 = (undefined4 ******)((int)param_1 + 1);
            } while ((*(byte *)(param_5[0x10] + (uint)*(byte *)param_1) & 4) != 0);
            break;
          case 2:
            ppppppuVar30 = ppppppuVar27;
            do {
              param_1 = ppppppuVar30;
              if ((int)uVar20 <= (int)((int)param_1 + (uVar14 - (int)ppppppuVar27))) break;
              if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_000308e8;
              ppppppuVar30 = (undefined4 ******)((int)param_1 + 1);
            } while ((*(byte *)(param_5[0x10] + (uint)*(byte *)param_1) & 1) == 0);
            break;
          case 3:
            ppppppuVar30 = ppppppuVar27;
            do {
              param_1 = ppppppuVar30;
              if ((int)uVar20 <= (int)((int)param_1 + (uVar14 - (int)ppppppuVar27))) break;
              if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_000308e8;
              ppppppuVar30 = (undefined4 ******)((int)param_1 + 1);
            } while ((*(byte *)(param_5[0x10] + (uint)*(byte *)param_1) & 1) != 0);
            break;
          case 4:
            ppppppuVar30 = ppppppuVar27;
            do {
              param_1 = ppppppuVar30;
              if ((int)uVar20 <= (int)((int)param_1 + (uVar14 - (int)ppppppuVar27))) break;
              if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_000308e8;
              ppppppuVar30 = (undefined4 ******)((int)param_1 + 1);
            } while ((*(byte *)(param_5[0x10] + (uint)*(byte *)param_1) & 0x10) == 0);
            break;
          case 5:
            ppppppuVar30 = ppppppuVar27;
            do {
              param_1 = ppppppuVar30;
              if ((int)uVar20 <= (int)((int)param_1 + (uVar14 - (int)ppppppuVar27))) break;
              if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_000308e8;
              ppppppuVar30 = (undefined4 ******)((int)param_1 + 1);
            } while ((*(byte *)(param_5[0x10] + (uint)*(byte *)param_1) & 0x10) != 0);
            break;
          case 6:
            for (; (int)((int)param_1 + (uVar14 - (int)ppppppuVar27)) < (int)uVar20;
                param_1 = (undefined4 ******)((int)param_1 + 1)) {
              ppppppuVar30 = (undefined4 ******)param_5[0x1e];
              if (ppppppuVar30 <= param_1) goto LAB_000308e8;
              if (param_5[6] == 0) {
                bVar32 = false;
                if ((param_1 <= (undefined4 ******)((int)ppppppuVar30 - param_5[7])) &&
                   (*(byte *)param_1 == (byte)param_5[0xd])) {
                  if (param_5[7] == 1) {
                    bVar32 = true;
                  }
                  else {
                    bVar32 = *(byte *)((int)param_1 + 1) == *(byte *)((int)param_5 + 0x35);
                  }
                }
              }
              else {
                iVar19 = FUN_000326d8(param_1,param_5[6],ppppppuVar30,param_5 + 7,0);
                bVar32 = false;
                if (iVar19 != 0) {
                  bVar32 = true;
                }
              }
              if (bVar32) break;
              if ((((param_5[0x22] != 0) && ((byte *)param_5[0x1e] <= (byte *)((int)param_1 + 1)))
                  && (param_5[6] == 0)) &&
                 (((param_5[7] == 2 && (*(byte *)param_1 == (byte)param_5[0xd])) &&
                  (param_5[0x19] = 1, 1 < (int)param_5[0x22])))) goto LAB_0002d830;
            }
            break;
          case 7:
            goto LAB_00030a80;
          case 8:
LAB_00030a80:
            param_1 = (undefined4 ******)param_5[0x1e];
            if (uVar20 - uVar14 <= (uint)((int)param_1 - (int)ppppppuVar27)) {
              param_1 = (undefined4 ******)((int)ppppppuVar27 + (uVar20 - uVar14));
              break;
            }
            uVar3 = param_5[0x22];
            if ((uVar3 == 0) || (param_1 <= (undefined4 ******)param_5[0x21])) break;
            goto LAB_00030aac;
          case 9:
            goto switchD_00029140_default;
          case 10:
            goto switchD_00029140_default;
          case 0xb:
            ppppppuVar30 = ppppppuVar27;
            for (; param_1 = ppppppuVar30, (int)uVar14 < (int)uVar20; uVar14 = uVar14 + 1) {
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000308e8;
              bVar35 = *(byte *)ppppppuVar30;
              if (bVar35 == 0xd) {
                param_1 = (undefined4 ******)((int)ppppppuVar30 + 1);
                if ((undefined4 ******)param_5[0x1e] <= param_1) break;
                if (*(byte *)((int)ppppppuVar30 + 1) == 10) {
                  param_1 = (undefined4 ******)((int)ppppppuVar30 + 2);
                }
              }
              else {
                if (bVar35 != 10) {
                  if (param_5[0x1a] != 0) break;
                  bVar32 = 0x84 < bVar35;
                  if (bVar35 != 0x85) {
                    bVar32 = bVar35 != 0xb;
                  }
                  if (bVar32 && (bVar35 != 0x85 && bVar35 != 0xc)) break;
                }
                param_1 = (undefined4 ******)((int)ppppppuVar30 + 1);
              }
              ppppppuVar30 = param_1;
            }
            break;
          case 0xc:
            ppppppuVar30 = ppppppuVar27;
            while (param_1 = ppppppuVar30,
                  (int)((int)param_1 + (uVar14 - (int)ppppppuVar27)) < (int)uVar20) {
              if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_000308e8;
              bVar35 = *(byte *)param_1;
              if (((bVar35 == 0x20) || (bVar35 == 0xa0)) ||
                 (ppppppuVar30 = (undefined4 ******)((int)param_1 + 1), bVar35 == 9)) break;
            }
            break;
          case 0xd:
            ppppppuVar30 = ppppppuVar27;
            do {
              param_1 = ppppppuVar30;
              if ((int)uVar20 <= (int)((int)param_1 + (uVar14 - (int)ppppppuVar27))) break;
              if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_000308e8;
              ppppppuVar30 = (undefined4 ******)((int)param_1 + 1);
              bVar35 = *(byte *)param_1;
            } while (((bVar35 == 0x20) || (bVar35 == 0xa0)) || (bVar35 == 9));
            break;
          case 0xe:
            ppppppuVar30 = ppppppuVar27;
            while (param_1 = ppppppuVar30,
                  (int)((int)param_1 + (uVar14 - (int)ppppppuVar27)) < (int)uVar20) {
              if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_000308e8;
              bVar35 = *(byte *)param_1;
              ppppppuVar30 = (undefined4 ******)((int)param_1 + 1);
              if ((9 < bVar35) && ((bVar35 < 0xe || (bVar35 == 0x85)))) break;
            }
            break;
          case 0xf:
            ppppppuVar30 = ppppppuVar27;
            while (param_1 = ppppppuVar30,
                  (int)((int)param_1 + (uVar14 - (int)ppppppuVar27)) < (int)uVar20) {
              if ((undefined4 ******)param_5[0x1e] <= param_1) goto LAB_000308e8;
              bVar35 = *(byte *)param_1;
              if ((bVar35 < 10) ||
                 ((ppppppuVar30 = (undefined4 ******)((int)param_1 + 1), 0xd < bVar35 &&
                  (bVar35 != 0x85)))) break;
            }
            break;
          default:
            goto switchD_00029140_default;
          }
          goto LAB_00030954;
        case 0x5b:
          goto LAB_000290c8;
        case 0x5c:
LAB_000290c8:
          pbVar26 = param_2 + 3;
          uVar14 = 0;
          bVar34 = false;
          local_114 = (uint)(uVar13 == 0x5c);
          uVar20 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          goto LAB_000290f4;
        case 0x5d:
          pbVar26 = param_2 + 3;
          uVar14 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          bVar34 = false;
          local_114 = 1;
          uVar20 = uVar14;
          goto LAB_000290f4;
        case 0x5e:
          pbVar26 = param_2 + 1;
          uVar20 = 0x7fffffff;
          goto LAB_000291b4;
        case 0x5f:
          uVar14 = 1;
          pbVar26 = param_2 + 1;
          bVar34 = true;
          local_114 = 0;
          uVar20 = 0x7fffffff;
          goto LAB_000290f4;
        case 0x60:
          pbVar26 = param_2 + 1;
          uVar20 = 1;
          goto LAB_000291b4;
        case 0x61:
          pbVar26 = param_2 + 3;
          uVar20 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
LAB_000291b4:
          bVar34 = true;
          uVar14 = 0;
          local_114 = 0;
          goto LAB_000290f4;
        case 0x62:
          break;
        case 99:
          break;
        case 100:
          break;
        case 0x65:
          break;
        case 0x66:
          break;
        case 0x67:
          break;
        case 0x68:
          break;
        case 0x69:
          break;
        case 0x6a:
          break;
        case 0x6b:
          break;
        case 0x6c:
          break;
        case 0x6d:
          break;
        case 0x6e:
          goto LAB_00026098;
        case 0x6f:
LAB_00026098:
          uVar3 = (uint)param_2[0x21];
          local_138 = param_2 + 0x21;
          uVar20 = uVar3 - 0x62;
          if ((uVar20 & 0xff) < 0xc) {
            uVar14 = 1 << (uVar20 & 0xff);
            if ((uVar14 & 0x8c0) == 0) {
              if ((uVar14 & 0x73f) == 0) goto LAB_00026170;
              local_138 = param_2 + 0x22;
              if (7 < (int)uVar20) {
                uVar14 = 0;
              }
              else {
                uVar14 = uVar20 & 1;
              }
              uVar3 = (uint)(7 < (int)uVar20);
              pbVar26 = (byte *)(DAT_00026d78 + 0x260fc + uVar20);
              uVar20 = (uint)*pbVar26;
              uVar18 = (uint)pbVar26[0xb];
              if (uVar18 == 0) {
                uVar18 = 0x7fffffff;
              }
            }
            else {
              uVar20 = (*(ushort *)(param_2 + 0x22) & 0xff) << 8 |
                       (uint)(*(ushort *)(param_2 + 0x22) >> 8);
              uVar14 = (uint)(uVar3 == 0x69);
              uVar18 = (*(ushort *)(param_2 + 0x24) & 0xff) << 8 |
                       (uint)(*(ushort *)(param_2 + 0x24) >> 8);
              uVar3 = (uint)(uVar3 == 0x6d);
              local_138 = param_2 + 0x26;
              if (uVar18 == 0) {
                uVar18 = 0x7fffffff;
              }
            }
          }
          else {
LAB_00026170:
            uVar14 = 0;
            uVar18 = 1;
            uVar20 = 1;
            uVar3 = uVar14;
          }
          ppppppuVar30 = ppppppuVar27;
          if (uVar12 == 0) {
            ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + uVar20);
            while (ppppppuVar8 != ppppppuVar30) {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 1);
              if (((int)(uint)param_2[(bVar35 >> 3) + 1] >> (bVar35 & 7) & 1U) == 0)
              goto LAB_000221ac;
            }
          }
          else {
            for (iVar19 = 1; iVar19 <= (int)uVar20; iVar19 = iVar19 + 1) {
              ppppppuVar27 = ppppppuVar30;
              if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
              bVar35 = *(byte *)ppppppuVar30;
              uVar24 = (uint)bVar35;
              if (uVar24 < 0xc0) {
                ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 1);
LAB_000263bc:
                if (((int)(uint)param_2[(uVar24 >> 3) + 1] >> (uVar24 & 7) & 1U) == 0)
                goto LAB_000221ac;
              }
              else {
                if ((bVar35 & 0x20) == 0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 2);
                  uVar24 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f | (uVar24 & 0x1f) << 6;
                }
                else if ((bVar35 & 0x10) == 0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 3);
                  uVar24 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
                           (uVar24 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
                }
                else if ((bVar35 & 8) == 0) {
                  ppppppuVar27 = ppppppuVar30 + 1;
                  uVar24 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
                           (uVar24 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                           (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
                }
                else if ((bVar35 & 4) == 0) {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 5);
                  uVar24 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
                           (uVar24 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                           (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                           (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
                }
                else {
                  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar30 + 6);
                  uVar24 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
                           (uVar24 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                           (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                           (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                           (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
                }
                if (uVar24 < 0x100) goto LAB_000263bc;
                if (uVar13 == 0x6e) goto LAB_000221ac;
              }
              ppppppuVar30 = ppppppuVar27;
            }
          }
          param_1 = ppppppuVar30;
          if (uVar18 != uVar20) {
            if (uVar14 != 0) {
              if (uVar12 != 0) goto LAB_000261fc;
              ppppppuVar27 = ppppppuVar30;
              goto LAB_00026550;
            }
            if (uVar12 == 0) {
              ppppppuVar27 = ppppppuVar30;
              while (param_1 = ppppppuVar27,
                    (int)((int)param_1 + (uVar20 - (int)ppppppuVar30)) < (int)uVar18) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) {
                  if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < param_1)) &&
                     (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_00026604;
                  break;
                }
                ppppppuVar27 = (undefined4 ******)((int)param_1 + 1);
                if (((int)(uint)param_2[(*(byte *)param_1 >> 3) + 1] >> (*(byte *)param_1 & 7) & 1U)
                    == 0) break;
              }
              if (uVar3 == 0) goto LAB_00026884;
            }
            else {
              for (; (int)uVar20 < (int)uVar18; uVar20 = uVar20 + 1) {
                if ((undefined4 ******)param_5[0x1e] <= param_1) {
                  if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < param_1)) &&
                     (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_00026604;
                  break;
                }
                bVar35 = *(byte *)param_1;
                uVar14 = (uint)bVar35;
                if (uVar14 < 0xc0) {
                  iVar19 = 1;
LAB_00026804:
                  if (((int)(uint)param_2[(uVar14 >> 3) + 1] >> (uVar14 & 7) & 1U) == 0) break;
                }
                else {
                  if ((bVar35 & 0x20) == 0) {
                    iVar19 = 2;
                    uVar14 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar14 & 0x1f) << 6;
                  }
                  else if ((bVar35 & 0x10) == 0) {
                    iVar19 = 3;
                    uVar14 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                             (uVar14 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
                  }
                  else if ((bVar35 & 8) == 0) {
                    iVar19 = 4;
                    uVar14 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                             (uVar14 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                             (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
                  }
                  else if ((bVar35 & 4) == 0) {
                    iVar19 = 5;
                    uVar14 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                             (uVar14 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                             (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                             (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
                  }
                  else {
                    iVar19 = 6;
                    uVar14 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                             (uVar14 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                             (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                             (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                             (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
                  }
                  if (uVar14 < 0x100) goto LAB_00026804;
                  if (uVar13 == 0x6e) break;
                }
                param_1 = (undefined4 ******)((int)param_1 + iVar19);
              }
              if (uVar3 == 0) goto LAB_0002667c;
            }
          }
          goto LAB_000222f4;
        case 0x70:
          pbVar26 = param_2 + 3;
          uVar3 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          local_138 = param_2 + uVar3;
          uVar20 = (uint)param_2[uVar3];
          uVar3 = uVar20 - 0x62;
          if ((uVar3 & 0xff) < 0xc) {
            uVar14 = 1 << (uVar3 & 0xff);
            if ((uVar14 & 0x8c0) == 0) {
              if ((uVar14 & 0x73f) == 0) goto LAB_00026a68;
              if ((int)uVar3 < 8) {
                uVar14 = uVar3 & 1;
              }
              else {
                uVar14 = 0;
              }
              uVar20 = (uint)((int)uVar3 >= 8);
              local_138 = local_138 + 1;
              pbVar28 = (byte *)(DAT_00026d7c + 0x2693c + uVar3);
              uVar13 = (uint)*pbVar28;
              uVar18 = (uint)pbVar28[0xb];
              if (uVar18 == 0) {
                uVar18 = 0x7fffffff;
              }
            }
            else {
              uVar13 = (*(ushort *)(local_138 + 1) & 0xff) << 8 |
                       (uint)(*(ushort *)(local_138 + 1) >> 8);
              uVar14 = (uint)(uVar20 == 0x69);
              uVar20 = (uint)(uVar20 == 0x6d);
              uVar18 = (*(ushort *)(local_138 + 3) & 0xff) << 8 |
                       (uint)(*(ushort *)(local_138 + 3) >> 8);
              if (uVar18 == 0) {
                uVar18 = 0x7fffffff;
              }
              local_138 = local_138 + 5;
            }
          }
          else {
LAB_00026a68:
            uVar14 = 0;
            uVar18 = 1;
            uVar13 = 1;
            uVar20 = uVar14;
          }
          for (iVar19 = 1; iVar19 <= (int)uVar13; iVar19 = iVar19 + 1) {
            if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00026a8c;
            bVar35 = *(byte *)ppppppuVar27;
            uVar3 = (uint)bVar35;
            if (uVar12 == 0 || uVar3 < 0xc0) {
              ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
            }
            else if ((bVar35 & 0x20) == 0) {
              ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
              uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
            }
            else if ((bVar35 & 0x10) == 0) {
              ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
              uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
                      (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
            }
            else if ((bVar35 & 8) == 0) {
              ppppppuVar30 = ppppppuVar27 + 1;
              uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
                      (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
                      (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
            }
            else if ((bVar35 & 4) == 0) {
              ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
              uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
                      (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
                      (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
                      (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
            }
            else {
              ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
              uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
                      (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
                      (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
                      (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
                      (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
            }
            iVar17 = FUN_00034784(uVar3,pbVar26,uVar12);
            if (iVar17 == 0) goto LAB_000221ac;
            ppppppuVar27 = ppppppuVar30;
          }
          param_1 = ppppppuVar27;
          if (uVar18 != uVar13) {
            if (uVar14 != 0) goto LAB_00026968;
            for (; (int)uVar13 < (int)uVar18; uVar13 = uVar13 + 1) {
              if ((undefined4 ******)param_5[0x1e] <= param_1) {
                if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < param_1)) &&
                   (param_5[0x19] = 1, 1 < (int)param_5[0x22])) {
                  uVar3 = 0xfffffff4;
                  goto LAB_00021dc8;
                }
                break;
              }
              bVar35 = *(byte *)param_1;
              uVar3 = (uint)bVar35;
              if (uVar12 == 0 || uVar3 < 0xc0) {
                iVar19 = 1;
              }
              else if ((bVar35 & 0x20) == 0) {
                iVar19 = 2;
                uVar3 = *(byte *)((int)param_1 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
              }
              else if ((bVar35 & 0x10) == 0) {
                iVar19 = 3;
                uVar3 = (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                        (uVar3 & 0xf) << 0xc | *(byte *)((int)param_1 + 2) & 0x3f;
              }
              else if ((bVar35 & 8) == 0) {
                iVar19 = 4;
                uVar3 = (*(byte *)((int)param_1 + 2) & 0x3f) << 6 |
                        (uVar3 & 7) << 0x12 | *(byte *)((int)param_1 + 3) & 0x3f |
                        (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc;
              }
              else if ((bVar35 & 4) == 0) {
                iVar19 = 5;
                uVar3 = (*(byte *)((int)param_1 + 3) & 0x3f) << 6 |
                        (uVar3 & 3) << 0x18 | *(byte *)(param_1 + 1) & 0x3f |
                        (*(byte *)((int)param_1 + 1) & 0x3f) << 0x12 |
                        (*(byte *)((int)param_1 + 2) & 0x3f) << 0xc;
              }
              else {
                iVar19 = 6;
                uVar3 = (*(byte *)(param_1 + 1) & 0x3f) << 6 |
                        (uVar3 & 1) << 0x1e | *(byte *)((int)param_1 + 5) & 0x3f |
                        (*(byte *)((int)param_1 + 1) & 0x3f) << 0x18 |
                        (*(byte *)((int)param_1 + 2) & 0x3f) << 0x12 |
                        (*(byte *)((int)param_1 + 3) & 0x3f) << 0xc;
              }
              iVar17 = FUN_00034784(uVar3,pbVar26,uVar12);
              if (iVar17 == 0) break;
              param_1 = (undefined4 ******)((int)param_1 + iVar19);
            }
            if (uVar20 == 0) goto LAB_00026e10;
          }
          goto LAB_000222f4;
        case 0x71:
          goto LAB_00025de8;
        case 0x72:
LAB_00025de8:
          local_138 = param_2 + 3;
          bVar34 = uVar13 == 0x72;
          uVar3 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          iVar19 = uVar3 * 2;
          if (iVar19 < (int)local_134) {
            iVar17 = *(int *)(param_5[3] + uVar3 * 8);
            if (iVar17 < 0) goto LAB_00025e3c;
            iVar23 = *(int *)(param_5[3] + uVar3 * 8 + 4);
LAB_00025dd8:
            uVar20 = iVar23 - iVar17;
          }
          else {
LAB_00025e3c:
            uVar3 = param_5[0x14];
LAB_00025d64:
            uVar20 = -(uint)(uVar3 == 0);
          }
          uVar3 = *local_138 - 0x62;
          switch(uVar3) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            goto LAB_00025f10;
          case 7:
LAB_00025f10:
            uVar14 = (uint)(*local_138 == 0x69);
            uVar13 = (*(ushort *)(local_138 + 1) & 0xff) << 8 |
                     (uint)(*(ushort *)(local_138 + 1) >> 8);
            uVar18 = (*(ushort *)(local_138 + 3) & 0xff) << 8 |
                     (uint)(*(ushort *)(local_138 + 3) >> 8);
            if (uVar18 == 0) {
              uVar18 = 0x7fffffff;
            }
            local_138 = local_138 + 5;
            goto LAB_00025e70;
          default:
            iVar17 = FUN_0002196c(iVar19,ppppppuVar27,uVar20,param_5,bVar34);
            if (iVar17 < 0) goto LAB_00025f78;
            param_1 = (undefined4 ******)((int)ppppppuVar27 + iVar17);
            goto LAB_000222f4;
          }
          uVar14 = uVar3 & 1;
          local_138 = local_138 + 1;
          pbVar26 = (byte *)(DAT_00026d74 + 0x25e64 + uVar3);
          uVar13 = (uint)*pbVar26;
          uVar18 = (uint)pbVar26[0xb];
          if (uVar18 == 0) {
            uVar18 = 0x7fffffff;
          }
LAB_00025e70:
          if ((uVar20 != 0) && (((uint)(uVar13 == 0) & uVar20 >> 0x1f) == 0)) {
            for (iVar23 = 1; iVar23 <= (int)uVar13; iVar23 = iVar23 + 1) {
              iVar17 = FUN_0002196c(iVar19,ppppppuVar27,uVar20,param_5,bVar34);
              if (iVar17 < 0) goto LAB_00025f78;
              ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + iVar17);
            }
            param_1 = ppppppuVar27;
            if (uVar18 != uVar13) {
              ppppppuVar30 = ppppppuVar27;
              if (uVar14 != 0) goto LAB_00025ea4;
              goto LAB_00026044;
            }
          }
          goto LAB_000222f4;
        case 0x73:
          goto LAB_00025d10;
        case 0x74:
LAB_00025d10:
          iVar19 = 0;
          uVar3 = param_5[0x14];
          bVar34 = uVar13 == 0x74;
          uVar20 = (*(ushort *)(param_2 + 3) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 3) >> 8);
          puVar4 = (ushort *)
                   (param_5[9] *
                    ((*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8))
                   + param_5[0xc]);
          local_138 = param_2 + 5;
          while (bVar32 = uVar20 != 0, uVar20 = uVar20 - 1, bVar32) {
            uVar14 = (*puVar4 & 0xff) << 8 | (uint)(*puVar4 >> 8);
            iVar19 = uVar14 * 2;
            if (iVar19 < (int)local_134) {
              iVar17 = *(int *)(param_5[3] + uVar14 * 8);
              if (-1 < iVar17) {
                iVar23 = *(int *)(param_5[3] + (iVar19 + 1) * 4);
                goto LAB_00025dd8;
              }
            }
            puVar4 = (ushort *)((int)puVar4 + param_5[9]);
          }
          goto LAB_00025d64;
        case 0x75:
          pbVar26 = (byte *)param_5[0x1c];
          uVar3 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          pbVar28 = pbVar26 + uVar3;
          if (pbVar26 == pbVar28) {
            uVar20 = 0;
          }
          else {
            uVar20 = (*(ushort *)(pbVar28 + 3) & 0xff) << 8 | (uint)(*(ushort *)(pbVar28 + 3) >> 8);
          }
          puVar7 = (uint *)param_5[0x29];
          for (puVar22 = puVar7; puVar22 != (uint *)0x0; puVar22 = (uint *)*puVar22) {
            if ((puVar22[1] == uVar20) && ((undefined4 ******)puVar22[5] == ppppppuVar27)) {
              uVar3 = 0xffffffe6;
              goto LAB_00021dc8;
            }
          }
          local_e8 = param_5[0x24];
          local_ec = param_5[4];
          param_5[0x29] = (uint)&local_f8;
          local_f8 = puVar7;
          local_f4 = uVar20;
          local_e4 = ppppppuVar27;
          if ((int)local_ec < 0x1f) {
            local_f0 = auStack_ac;
          }
          else {
            local_f0 = (undefined1 *)
                       (*(code *)**(undefined4 **)(iVar10 + DAT_00022d00))(local_ec << 2);
            if (local_f0 == (undefined1 *)0x0) {
              uVar3 = 0xfffffffa;
              goto LAB_00021dc8;
            }
          }
          uVar20 = DAT_00022d04;
          memcpy(local_f0,(void *)param_5[3],local_ec << 2);
          bVar35 = pbVar26[uVar3];
          iVar19 = *(int *)(iVar10 + DAT_00022d08);
          while( true ) {
            if (0x87 < bVar35) {
              param_5[0x26] = 2;
            }
            uVar3 = FUN_00021d38(ppppppuVar27,pbVar28 + *(byte *)(iVar19 + (uint)*pbVar28),local_12c
                                 ,local_134,param_5,local_128,param_7 + 1);
            memcpy((void *)param_5[3],local_f0,local_ec << 2);
            param_5[0x24] = local_e8;
            param_5[0x29] = (uint)local_f8;
            if (uVar3 == uVar20 || uVar3 == 1) break;
            if (uVar3 + 0x3e4 < 5) {
              if (local_f0 == auStack_ac) goto LAB_000221ac;
              (*(code *)**(undefined4 **)(iVar10 + DAT_00022d0c))(local_f0);
              uVar3 = (uint)(uVar3 == uVar20 || uVar3 == 1);
              goto LAB_00021dc8;
            }
            if (uVar3 != 0) {
              if (local_f0 != auStack_ac) {
                (*(code *)**(undefined4 **)(iVar10 + DAT_00022d0c))(local_f0);
              }
              goto LAB_00021dc8;
            }
            param_5[0x29] = (uint)&local_f8;
            pbVar28 = pbVar28 + ((*(ushort *)(pbVar28 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(pbVar28 + 1) >> 8));
            if (*pbVar28 != 0x77) {
              param_5[0x29] = (uint)local_f8;
              if (local_f0 == auStack_ac) goto LAB_000221ac;
              (*(code *)**(undefined4 **)(iVar10 + DAT_00022d0c))(local_f0);
              goto LAB_00021dc8;
            }
          }
          if (local_f0 != auStack_ac) {
            (*(code *)**(undefined4 **)(iVar10 + DAT_00022d0c))(local_f0);
          }
          param_1 = (undefined4 ******)param_5[0x20];
          local_138 = param_2 + 3;
          local_12c = (undefined4 ******)param_5[0x1f];
          goto LAB_000222f4;
        case 0x76:
          if ((code *)**(undefined4 **)(iVar10 + DAT_00022cfc) != (code *)0x0) {
            local_d4 = param_5[0x1d];
            local_e0 = 2;
            local_dc = (uint)param_2[1];
            local_d8 = param_5[3];
            local_d0 = param_5[0x1e] - local_d4;
            local_cc = (int)local_12c - local_d4;
            local_c8 = (int)ppppppuVar27 - local_d4;
            local_b8 = (*(ushort *)(param_2 + 2) & 0xff) << 8 |
                       (uint)(*(ushort *)(param_2 + 2) >> 8);
            local_b4 = (*(ushort *)(param_2 + 4) & 0xff) << 8 |
                       (uint)(*(ushort *)(param_2 + 4) >> 8);
            local_c4 = (int)local_134 / 2;
            local_c0 = (uint)(ushort)param_5[0x24];
            if (local_c0 == 0) {
              local_c0 = 0xffffffff;
            }
            local_bc = param_5[0x2a];
            local_b0 = param_5[0x2c];
            uVar3 = (*(code *)**(undefined4 **)(iVar10 + DAT_00022cfc))(&local_e0);
            if (0 < (int)uVar3) {
              uVar3 = 0;
              goto LAB_00021dc8;
            }
            if (uVar3 != 0) goto LAB_00021dc8;
          }
          local_138 = param_2 + 6;
          goto LAB_000222f4;
        case 0x77:
          do {
            local_138 = local_138 +
                        ((*(ushort *)(local_138 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(local_138 + 1) >> 8));
          } while (*local_138 == 0x77);
          goto LAB_000222f4;
        case 0x78:
          goto LAB_00023730;
        case 0x79:
          goto LAB_00023730;
        case 0x7a:
          goto LAB_00023730;
        case 0x7b:
LAB_00023730:
          pbVar26 = param_2 + -((*(ushort *)(param_2 + 1) & 0xff) << 8 |
                               (uint)(*(ushort *)(param_2 + 1) >> 8));
          uVar3 = (uint)*pbVar26;
          if (uVar3 < 0x88 && uVar3 != 0x81) {
            ppppppuVar30 = (undefined4 ******)0x0;
          }
          else {
            ppppppuVar30 = local_128[1];
            local_128 = (undefined4 *******)*local_128;
          }
          bVar34 = 0x81 < uVar3;
          if (uVar3 != 0x82) {
            bVar34 = 2 < uVar3 - 0x7d;
          }
          if (!bVar34 || (uVar3 == 0x82 || uVar3 - 0x7d == 3)) {
            param_5[0x20] = (uint)ppppppuVar27;
            param_5[0x23] = local_134;
            param_5[0x1f] = (uint)local_12c;
            uVar3 = 1;
            goto LAB_00021dc8;
          }
          uVar20 = uVar3 + 0x7b & 0xff;
          if (1 < uVar20) {
            uVar20 = uVar3 + 0x76 & 0xff;
          }
          if (uVar20 < 2) {
            uVar3 = (*(ushort *)(pbVar26 + 3) & 0xff) << 8 | (uint)(*(ushort *)(pbVar26 + 3) >> 8);
            iVar19 = uVar3 * 2;
            if ((param_5[0x29] != 0) && (*(uint *)(param_5[0x29] + 4) == uVar3)) {
              param_5[0x20] = (uint)ppppppuVar27;
              param_5[0x1f] = (uint)local_12c;
              uVar3 = 1;
              goto LAB_00021dc8;
            }
            uVar20 = param_5[0x24] & 0xffff0000 | uVar3;
            param_5[0x24] = uVar20;
            if (iVar19 < (int)param_5[5]) {
              if ((int)local_134 < iVar19) {
                uVar20 = param_5[3];
                for (puVar29 = (undefined4 *)(uVar20 + local_134 * 4);
                    puVar29 < (undefined4 *)(uVar20 + uVar3 * 8); puVar29 = puVar29 + 1) {
                  *puVar29 = 0xffffffff;
                }
              }
              uVar20 = param_5[3];
              *(undefined4 *)(uVar20 + uVar3 * 8) =
                   *(undefined4 *)(uVar20 + (param_5[4] - uVar3) * 4);
              *(uint *)(uVar20 + uVar3 * 8 + 4) = (int)ppppppuVar27 - param_5[0x1d];
              if ((int)local_134 <= iVar19) {
                local_134 = iVar19 + 2;
              }
            }
            else {
              param_5[0x24] = uVar20 | 0x10000;
            }
          }
          bVar35 = *param_2;
          if (bVar35 == 0x7b) {
            param_5[0x20] = (uint)ppppppuVar27;
            param_5[0x1f] = (uint)local_12c;
            uVar3 = DAT_00022d10;
            param_5[0x23] = local_134;
            goto LAB_00021dc8;
          }
          if (ppppppuVar27 != ppppppuVar30 && bVar35 != 0x78) {
            if (bVar35 == 0x7a) {
              uVar3 = FUN_00021d38(ppppppuVar27,param_2 + 3,local_12c,local_134,param_5,local_128,
                                   param_7 + 1);
              if (uVar3 != 0) goto LAB_00021dc8;
              if (*pbVar26 == 0x81) {
                uVar3 = FUN_00021d38(ppppppuVar27,pbVar26,local_12c,local_134,param_5,local_128,
                                     param_7 + 1);
                if (uVar3 == 0) {
                  uVar3 = 0xfffffc1b;
                  param_5[0x2d] = (uint)pbVar26;
                }
              }
              else {
                param_2 = pbVar26;
                if (*pbVar26 < 0x88) goto LAB_0002229c;
                uVar3 = FUN_00021d38(ppppppuVar27,pbVar26,local_12c,local_134,param_5,local_128,
                                     param_7 + 1);
              }
              goto LAB_00021dc8;
            }
            uVar3 = FUN_00021d38(ppppppuVar27,pbVar26,local_12c,local_134,param_5,local_128,
                                 param_7 + 1);
            if (uVar3 == 0xfffffc1b) {
              bVar34 = (byte *)param_5[0x2d] == pbVar26;
            }
            else {
              bVar34 = uVar3 == 0;
            }
            if (!bVar34) goto LAB_00021dc8;
            param_2 = param_2 + 3;
            if (*pbVar26 != 0x81) goto LAB_0002229c;
            uVar3 = FUN_00021d38(ppppppuVar27,param_2,local_12c,local_134,param_5,local_128,
                                 param_7 + 1);
            if (uVar3 == 0) {
              uVar3 = 0xfffffc1b;
              param_5[0x2d] = (uint)pbVar26;
            }
            goto LAB_00021dc8;
          }
          local_138 = param_2 + 3;
          if (*pbVar26 == 0x81) {
            uVar3 = FUN_00021d38(ppppppuVar27,param_2 + 3,local_12c,local_134,param_5,local_128,
                                 param_7 + 1);
            if (uVar3 == 0) {
              uVar3 = 0xfffffc1b;
              param_5[0x2d] = (uint)pbVar26;
            }
            goto LAB_00021dc8;
          }
          goto LAB_000222f4;
        case 0x7c:
          uVar3 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          if (uVar12 == 0) {
            ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 - uVar3);
            if (ppppppuVar27 < (undefined4 ******)param_5[0x1d]) goto LAB_000221ac;
          }
          else {
            while (bVar34 = uVar3 != 0, uVar3 = uVar3 - 1, bVar34) {
              ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + -1);
              if ((undefined4 ******)((int)ppppppuVar27 + -1) < (undefined4 ******)param_5[0x1d])
              goto LAB_000221ac;
              do {
                ppppppuVar27 = ppppppuVar30;
                ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + -1);
              } while (((uint)*ppppppuVar27 & 0xc0) == 0x80);
            }
          }
          if (ppppppuVar27 < (undefined4 ******)param_5[0x21]) {
            param_5[0x21] = (uint)ppppppuVar27;
          }
          goto LAB_00022fd4;
        case 0x7d:
          goto LAB_00023080;
        case 0x7e:
          goto LAB_00023184;
        case 0x7f:
LAB_00023080:
          uVar14 = param_5[0x2b];
          if (param_5[0x26] == 1) {
            param_5[0x26] = 0;
            bVar34 = true;
          }
          else {
            bVar34 = false;
          }
          do {
            uVar3 = FUN_00021d38(ppppppuVar27,param_2 + 3,local_12c,local_134,param_5,0,param_7 + 1)
            ;
            if (uVar3 == uVar20 || uVar3 == 1) {
              local_12c = (undefined4 ******)param_5[0x1f];
              break;
            }
            param_5[0x2b] = uVar14;
            if (uVar3 == 0xfffffc20) {
              if (param_2 + ((*(ushort *)(param_2 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(param_2 + 1) >> 8)) <= (byte *)param_5[0x1f])
              goto LAB_00021dc8;
              if (*param_2 != 0x77) {
                bVar32 = param_2[(*(ushort *)(param_2 + 1) & 0xff) << 8 |
                                 (uint)(*(ushort *)(param_2 + 1) >> 8)] == 0x77;
                goto LAB_00023130;
              }
            }
            else {
              bVar32 = uVar3 == 0;
LAB_00023130:
              if (!bVar32) goto LAB_00021dc8;
            }
            param_2 = param_2 + ((*(ushort *)(param_2 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(param_2 + 1) >> 8));
          } while (*param_2 == 0x77);
          if (*param_2 == 0x78) goto LAB_000221ac;
          if (bVar34) goto LAB_000230f0;
          do {
            param_2 = param_2 + ((*(ushort *)(param_2 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(param_2 + 1) >> 8));
          } while (*param_2 == 0x77);
          local_134 = param_5[0x23];
          local_138 = param_2 + 3;
          goto LAB_000222f4;
        case 0x80:
LAB_00023184:
          uVar20 = param_5[0x2b];
          if (param_5[0x26] == 1) {
            param_5[0x26] = 0;
            bVar34 = true;
          }
          else {
            bVar34 = false;
          }
          do {
            uVar3 = FUN_00021d38(ppppppuVar27,param_2 + 3,local_12c,local_134,param_5,0,param_7 + 1)
            ;
            param_5[0x2b] = uVar20;
            if ((int)uVar3 < -0x3e0) {
              if (-0x3e5 < (int)uVar3) goto LAB_0002323c;
              if (uVar3 == DAT_00022d04) goto LAB_000231ec;
              goto LAB_00021dc8;
            }
            if (uVar3 != 0) {
              if (uVar3 == 1) goto LAB_000231ec;
              if (uVar3 != 0xfffffc20) goto LAB_00021dc8;
              if ((param_2 + ((*(ushort *)(param_2 + 1) & 0xff) << 8 |
                             (uint)(*(ushort *)(param_2 + 1) >> 8)) <= (byte *)param_5[0x1f]) ||
                 ((*param_2 != 0x77 &&
                  (param_2[(*(ushort *)(param_2 + 1) & 0xff) << 8 |
                           (uint)(*(ushort *)(param_2 + 1) >> 8)] != 0x77)))) goto LAB_0002323c;
            }
            param_2 = param_2 + ((*(ushort *)(param_2 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(param_2 + 1) >> 8));
          } while (*param_2 == 0x77);
          goto LAB_00023254;
        case 0x81:
          goto LAB_00022710;
        case 0x82:
          uVar20 = param_5[0x2b];
          do {
            uVar3 = FUN_00021d38(ppppppuVar27,pbVar26 + 3,local_12c,local_134,param_5,local_128,
                                 param_7 + 1);
            if (uVar3 == 1) {
              local_12c = (undefined4 ******)param_5[0x1f];
              break;
            }
            if (uVar3 == 0xfffffc20) {
              if (pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar26 + 1) >> 8)) <= (byte *)param_5[0x1f])
              goto LAB_00021dc8;
              if (*pbVar26 != 0x77) {
                bVar34 = pbVar26[(*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                                 (uint)(*(ushort *)(pbVar26 + 1) >> 8)] == 0x77;
                goto LAB_000221e8;
              }
            }
            else {
              bVar34 = uVar3 == 0;
LAB_000221e8:
              if (!bVar34) goto LAB_00021dc8;
            }
            uVar5 = *(ushort *)(pbVar26 + 1);
            param_5[0x2b] = uVar20;
            pbVar26 = pbVar26 + ((uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8));
          } while (*pbVar26 == 0x77);
          if (*pbVar26 != 0x82 && *pbVar26 != 0x77) goto LAB_000221ac;
          do {
            pbVar26 = pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(pbVar26 + 1) >> 8));
            bVar35 = *pbVar26;
          } while (bVar35 == 0x77);
          param_1 = (undefined4 ******)param_5[0x20];
          local_134 = param_5[0x23];
          if (bVar35 == 0x78 || ppppppuVar27 == param_1) goto LAB_00022248;
          if (bVar35 == 0x7a) {
            uVar3 = FUN_00021d38(param_1,pbVar26 + 3,local_12c,local_134,param_5,local_128,
                                 param_7 + 1);
            if (uVar3 != 0) goto LAB_00021dc8;
          }
          else {
            uVar3 = FUN_00021d38(param_1,param_2,local_12c,local_134,param_5,local_128,param_7 + 1);
            if (uVar3 != 0) goto LAB_00021dc8;
            param_2 = pbVar26 + 3;
          }
          goto LAB_0002229c;
        case 0x83:
          goto LAB_00022710;
        case 0x84:
          goto LAB_00022a4c;
        case 0x85:
          goto LAB_000225b4;
        case 0x86:
          goto LAB_00022870;
        case 0x87:
          goto LAB_00022b94;
        case 0x88:
          goto LAB_00022710;
        case 0x89:
LAB_00022a4c:
          bVar34 = false;
LAB_00022a54:
          uVar20 = param_5[0x1c];
          bVar32 = false;
          uVar18 = param_5[0x24];
          iVar19 = *(int *)(iVar10 + DAT_00022d08);
          pbVar26 = param_2;
          do {
            while( true ) {
              if (0x87 < uVar13) {
                param_5[0x26] = 2;
              }
              uVar3 = FUN_00021d38(ppppppuVar27,pbVar26 + *(byte *)(iVar19 + (uint)*pbVar26),
                                   local_12c,local_134,param_5,local_128,param_7 + 1);
              if (uVar3 != uVar14) break;
              local_134 = param_5[0x23];
              pbVar26 = param_2 + (param_5[0x1c] - uVar20);
              local_12c = (undefined4 ******)param_5[0x1f];
              if ((undefined4 ******)param_5[0x20] == ppppppuVar27) goto LAB_00022af8;
              bVar32 = true;
              ppppppuVar27 = (undefined4 ******)param_5[0x20];
            }
            if (uVar3 == 0xfffffc20) {
              if (pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar26 + 1) >> 8)) <= (byte *)param_5[0x1f])
              goto LAB_00021dc8;
              if (*pbVar26 != 0x77) {
                bVar31 = pbVar26[(*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                                 (uint)(*(ushort *)(pbVar26 + 1) >> 8)] == 0x77;
                goto LAB_00022b54;
              }
            }
            else {
              bVar31 = uVar3 == 0;
LAB_00022b54:
              if (!bVar31) goto LAB_00021dc8;
            }
            pbVar26 = pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(pbVar26 + 1) >> 8));
            if (*pbVar26 != 0x77) goto LAB_00022b88;
            param_5[0x24] = uVar18;
          } while( true );
        case 0x8a:
LAB_000225b4:
          uVar12 = (*(ushort *)(param_2 + 3) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 3) >> 8);
          if ((int)(uVar12 * 2) < (int)param_5[5]) {
            uVar3 = param_5[3];
            iVar19 = uVar12 * 8 + 4;
            uVar15 = *(undefined4 *)(uVar3 + iVar19);
            uVar6 = *(undefined4 *)(uVar3 + uVar12 * 8);
            uVar16 = *(undefined4 *)(uVar3 + (param_5[4] - uVar12) * 4);
            uVar20 = param_5[0x24];
            uVar14 = param_5[0x2b];
            *(uint *)(uVar3 + (param_5[4] - uVar12) * 4) = (int)ppppppuVar27 - param_5[0x1d];
            iVar10 = *(int *)(iVar10 + DAT_00022d08);
            goto LAB_0002262c;
          }
LAB_00022710:
          iVar19 = *(int *)(iVar10 + DAT_00022d08);
          goto LAB_00022720;
        case 0x8b:
LAB_00022870:
          bVar34 = false;
LAB_00022878:
          uVar20 = (*(ushort *)(param_2 + 3) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 3) >> 8);
          if ((int)param_5[5] <= (int)(uVar20 * 2)) goto LAB_00022a54;
          uVar14 = param_5[0x1c];
          bVar32 = false;
          uVar3 = param_5[3];
          uVar6 = *(undefined4 *)(uVar3 + uVar20 * 8);
          iVar19 = uVar20 * 8 + 4;
          uVar15 = *(undefined4 *)(uVar3 + iVar19);
          uVar16 = *(undefined4 *)(uVar3 + (param_5[4] - uVar20) * 4);
          local_124 = param_5[0x24];
          iVar17 = *(int *)(iVar10 + DAT_00022d08);
          pbVar26 = param_2;
          do {
            while( true ) {
              *(uint *)(param_5[3] + (param_5[4] - uVar20) * 4) = (int)ppppppuVar27 - param_5[0x1d];
              if (0x87 < uVar13) {
                param_5[0x26] = 2;
              }
              uVar3 = FUN_00021d38(ppppppuVar27,pbVar26 + *(byte *)(iVar17 + (uint)*pbVar26),
                                   local_12c,local_134,param_5,local_128,param_7 + 1);
              if (uVar3 != DAT_00022d10) break;
              local_134 = param_5[0x23];
              pbVar26 = param_2 + (param_5[0x1c] - uVar14);
              local_12c = (undefined4 ******)param_5[0x1f];
              if ((undefined4 ******)param_5[0x20] == ppppppuVar27) goto LAB_0002297c;
              local_124 = param_5[0x24];
              bVar32 = true;
              ppppppuVar27 = (undefined4 ******)param_5[0x20];
            }
            if (uVar3 == 0xfffffc20) {
              if (pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar26 + 1) >> 8)) <= (byte *)param_5[0x1f])
              goto LAB_00021dc8;
              if (*pbVar26 != 0x77) {
                bVar31 = pbVar26[(*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                                 (uint)(*(ushort *)(pbVar26 + 1) >> 8)] == 0x77;
                goto LAB_000229e4;
              }
            }
            else {
              bVar31 = uVar3 == 0;
LAB_000229e4:
              if (!bVar31) goto LAB_00021dc8;
            }
            param_5[0x24] = local_124;
            pbVar26 = pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(pbVar26 + 1) >> 8));
          } while (*pbVar26 == 0x77);
          if (!bVar32) {
            uVar3 = param_5[3];
            *(undefined4 *)(uVar3 + uVar20 * 8) = uVar6;
            *(undefined4 *)(uVar3 + iVar19) = uVar15;
            *(undefined4 *)(uVar3 + (param_5[4] - uVar20) * 4) = uVar16;
            if (bVar34) goto LAB_00022994;
            goto LAB_000221ac;
          }
          goto LAB_00022994;
        case 0x8c:
LAB_00022b94:
          local_138 = param_2 + 3;
          uVar20 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          if (param_2[3] == 0x76) {
            if ((code *)**(undefined4 **)(iVar10 + DAT_00022cfc) != (code *)0x0) {
              local_d4 = param_5[0x1d];
              local_e0 = 2;
              local_dc = (uint)param_2[4];
              local_d8 = param_5[3];
              local_d0 = param_5[0x1e] - local_d4;
              local_cc = (int)local_12c - local_d4;
              local_c8 = (int)ppppppuVar27 - local_d4;
              local_b8 = (*(ushort *)(param_2 + 5) & 0xff) << 8 |
                         (uint)(*(ushort *)(param_2 + 5) >> 8);
              local_b4 = (*(ushort *)(param_2 + 7) & 0xff) << 8 |
                         (uint)(*(ushort *)(param_2 + 7) >> 8);
              local_c4 = (int)local_134 / 2;
              local_c0 = (uint)(ushort)param_5[0x24];
              if (local_c0 == 0) {
                local_c0 = 0xffffffff;
              }
              local_bc = param_5[0x2a];
              local_b0 = param_5[0x2c];
              uVar3 = (*(code *)**(undefined4 **)(iVar10 + DAT_00022cfc))(&local_e0);
              if (0 < (int)uVar3) {
                uVar3 = 0;
                goto LAB_00021dc8;
              }
              if (uVar3 != 0) goto LAB_00021dc8;
            }
            uVar3 = (uint)*(byte *)(*(int *)(iVar10 + DAT_00022d08) + 0x76);
            local_138 = local_138 + uVar3;
            uVar20 = uVar20 - uVar3;
          }
          uVar14 = (uint)*local_138;
          switch(uVar14) {
          case 0x8d:
            uVar3 = (*(ushort *)(local_138 + 1) & 0xff) << 8 |
                    (uint)(*(ushort *)(local_138 + 1) >> 8);
            if (((int)local_134 <= (int)(uVar3 * 2)) || (*(int *)(param_5[3] + uVar3 * 8) < 0))
            goto LAB_00022df4;
            goto LAB_00022d44;
          case 0x8e:
            uVar3 = (*(ushort *)(local_138 + 3) & 0xff) << 8 |
                    (uint)(*(ushort *)(local_138 + 3) >> 8);
            puVar4 = (ushort *)
                     (param_5[9] *
                      ((*(ushort *)(local_138 + 1) & 0xff) << 8 |
                      (uint)(*(ushort *)(local_138 + 1) >> 8)) + param_5[0xc]);
            while (bVar34 = uVar3 != 0, uVar3 = uVar3 - 1, bVar34) {
              uVar18 = (*puVar4 & 0xff) << 8 | (uint)(*puVar4 >> 8);
              if (((int)(uVar18 * 2) < (int)local_134) && (-1 < *(int *)(param_5[3] + uVar18 * 8)))
              goto LAB_00022d44;
              puVar4 = (ushort *)((int)puVar4 + param_5[9]);
            }
            goto LAB_00022df4;
          case 0x8f:
            if ((param_5[0x29] != 0) &&
               ((uVar3 = (*(ushort *)(local_138 + 1) & 0xff) << 8 |
                         (uint)(*(ushort *)(local_138 + 1) >> 8), uVar3 == 0xffff ||
                (*(uint *)(param_5[0x29] + 4) == uVar3)))) goto LAB_00022d44;
            goto LAB_00022df4;
          case 0x90:
            if (param_5[0x29] != 0) {
              uVar3 = (*(ushort *)(local_138 + 3) & 0xff) << 8 |
                      (uint)(*(ushort *)(local_138 + 3) >> 8);
              puVar4 = (ushort *)
                       (param_5[9] *
                        ((*(ushort *)(local_138 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(local_138 + 1) >> 8)) + param_5[0xc]);
              while (bVar34 = uVar3 != 0, uVar3 = uVar3 - 1, bVar34) {
                if (*(uint *)(param_5[0x29] + 4) == ((*puVar4 & 0xff) << 8 | (uint)(*puVar4 >> 8)))
                goto LAB_00022d44;
                puVar4 = (ushort *)((int)puVar4 + param_5[9]);
              }
            }
            goto LAB_00022df4;
          case 0x91:
            goto LAB_00022df4;
          case 0x92:
            break;
          case 0x93:
            break;
          case 0x94:
            break;
          case 0x95:
            break;
          case 0x96:
            break;
          case 0x97:
            break;
          case 0x98:
            break;
          case 0x99:
            break;
          case 0x9a:
            break;
          case 0x9b:
            break;
          case 0x9c:
            break;
          case 0x9d:
            goto LAB_00022df4;
          }
          param_5[0x26] = 1;
          uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,0,param_7 + 1);
          if (uVar3 != 1) {
            if (uVar3 == 0 || uVar3 == 0xfffffc20) {
LAB_00022df4:
              bVar34 = false;
              goto LAB_00022d58;
            }
            goto LAB_00021dc8;
          }
          uVar3 = param_5[0x23];
          if ((int)param_5[0x23] <= (int)local_134) {
            uVar3 = local_134;
          }
          if (*local_138 == 0x92) {
            local_138 = local_138 + 1;
          }
          for (local_138 = local_138 +
                           ((*(ushort *)(local_138 + 1) & 0xff) << 8 |
                           (uint)(*(ushort *)(local_138 + 1) >> 8)); *local_138 == 0x77;
              local_138 = local_138 +
                          ((*(ushort *)(local_138 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(local_138 + 1) >> 8))) {
          }
          local_138 = local_138 + (3 - (uint)*(byte *)(*(int *)(iVar10 + DAT_00022d08) + uVar14));
          local_134 = uVar3;
LAB_00022d44:
          uVar20 = (uint)*(byte *)(*(int *)(iVar10 + DAT_00022d08) + uVar14);
          bVar34 = true;
LAB_00022d58:
          local_138 = local_138 + uVar20;
          if ((bVar34) || (local_138[-3] == 0x77)) goto LAB_00022d74;
          goto LAB_000222f4;
        case 0x8d:
          break;
        case 0x8e:
          break;
        case 0x8f:
          break;
        case 0x90:
          break;
        case 0x91:
          break;
        case 0x92:
          pbVar26 = param_2 + 1;
          uVar3 = FUN_00021d38(ppppppuVar27,pbVar26,local_12c,local_134,param_5,local_128,
                               param_7 + 1);
          if (uVar3 == 0) {
            do {
              pbVar26 = pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                                  (uint)(*(ushort *)(pbVar26 + 1) >> 8));
            } while (*pbVar26 == 0x77);
            goto LAB_00022994;
          }
          goto LAB_00021dc8;
        case 0x93:
          pbVar26 = param_2 + 1;
          do {
            pbVar26 = pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(pbVar26 + 1) >> 8));
          } while (*pbVar26 == 0x77);
          uVar3 = FUN_00021d38(ppppppuVar27,pbVar26 + 3,local_12c,local_134,param_5,local_128,
                               param_7 + 1);
          local_138 = param_2 + 1;
          if (uVar3 != 0) goto LAB_00021dc8;
          goto LAB_000222f4;
        case 0x94:
          uVar13 = (uint)param_2[1];
          param_2 = param_2 + 1;
          bVar34 = true;
          if (uVar13 != 0x8b && uVar13 != 0x86) goto LAB_00022a54;
          goto LAB_00022878;
        case 0x95:
          param_5[0x2b] = 0;
          iVar19 = DAT_00022d08;
          pbVar26 = param_2 + 2;
          param_5[0x2c] = (uint)pbVar26;
          uVar3 = FUN_00021d38(ppppppuVar27,
                               param_2 + (uint)*(byte *)(*(int *)(iVar10 + iVar19) + (uint)*param_2)
                                         + (uint)param_2[1],local_12c,local_134,param_5,local_128,
                               param_7 + 1);
          bVar34 = uVar3 != 0;
          if (uVar3 != 1) {
            bVar34 = uVar3 != 0xfffffc19;
          }
          if ((bVar34 && (uVar3 != 1 && uVar3 != 0xfffffc1a)) || (param_5[0x2b] != 0)) {
            if ((uVar3 == 0xfffffc1f) &&
               (iVar10 = strcmp((char *)pbVar26,(char *)param_5[0x1f]), iVar10 == 0)) {
              param_5[0x1f] = (uint)ppppppuVar27;
              uVar3 = DAT_00022cec;
            }
          }
          else {
            param_5[0x2b] = (uint)pbVar26;
          }
          goto LAB_00021dc8;
        case 0x96:
          uVar3 = FUN_00021d38(ppppppuVar27,
                               param_2 + *(byte *)(*(int *)(iVar10 + DAT_00022d08) + 0x96),local_12c
                               ,local_134,param_5,local_128,param_7 + 1);
          goto LAB_00021f28;
        case 0x97:
          param_5[0x2b] = 0;
          iVar19 = DAT_00022d08;
          param_5[0x2c] = (uint)(param_2 + 2);
          uVar3 = FUN_00021d38(ppppppuVar27,
                               param_2 + (uint)*(byte *)(*(int *)(iVar10 + iVar19) + (uint)*param_2)
                                         + (uint)param_2[1],local_12c,local_134,param_5,local_128,
                               param_7 + 1);
          if ((uVar3 == DAT_00022d04 || uVar3 == 1) && (param_5[0x2b] == 0)) {
            param_5[0x2b] = (uint)(param_2 + 2);
          }
LAB_00021f28:
          if (uVar3 == 0) {
            uVar3 = DAT_00022cf4;
          }
          goto LAB_00021dc8;
        case 0x98:
          uVar3 = FUN_00021d38(ppppppuVar27,
                               param_2 + *(byte *)(*(int *)(iVar10 + DAT_00022d08) + 0x98),local_12c
                               ,local_134,param_5,local_128,param_7 + 1);
          if (uVar3 == 0) {
            param_5[0x1f] = (uint)ppppppuVar27;
            uVar3 = DAT_00022cec;
          }
          goto LAB_00021dc8;
        case 0x99:
          uVar3 = param_5[10];
          param_5[10] = uVar3 + 1;
          uVar20 = (uint)*(byte *)(*(int *)(iVar10 + DAT_00022d08) + (uint)*param_2);
          if (param_5[0xb] < uVar3 + 1) {
            uVar3 = FUN_00021d38(ppppppuVar27,param_2 + uVar20 + param_2[1],local_12c,local_134,
                                 param_5,local_128,param_7 + 1);
            if (uVar3 == 0) {
              uVar3 = 0xfffffc1f;
              param_5[0x1f] = (uint)(param_2 + 2);
            }
            goto LAB_00021dc8;
          }
          local_138 = param_2 + uVar20 + param_2[1];
          goto LAB_000222f4;
        case 0x9a:
          uVar3 = FUN_00021d38(ppppppuVar27,
                               param_2 + *(byte *)(*(int *)(iVar10 + DAT_00022d08) + 0x9a),local_12c
                               ,local_134,param_5,local_128,param_7 + 1);
          if (uVar3 == 0) {
            param_5[0x1f] = (uint)param_2;
            uVar3 = DAT_00022cf8;
          }
          goto LAB_00021dc8;
        case 0x9b:
          param_5[0x2b] = 0;
          iVar19 = DAT_00022d08;
          param_5[0x2c] = (uint)(param_2 + 2);
          uVar3 = FUN_00021d38(ppppppuVar27,
                               param_2 + (uint)*(byte *)(*(int *)(iVar10 + iVar19) + (uint)*param_2)
                                         + (uint)param_2[1],local_12c,local_134,param_5,local_128,
                               param_7 + 1);
          if ((uVar3 == DAT_00022d04 || uVar3 == 1) && (param_5[0x2b] == 0)) {
            param_5[0x2b] = (uint)(param_2 + 2);
          }
          if (uVar3 == 0) {
            param_5[0x1f] = (uint)param_2;
            uVar3 = 0xfffffc20;
          }
          goto LAB_00021dc8;
        case 0x9c:
          uVar3 = FUN_00021d38(ppppppuVar27,
                               param_2 + *(byte *)(*(int *)(iVar10 + DAT_00022d08) + 0x9c),local_12c
                               ,local_134,param_5,local_128,param_7 + 1);
          if (uVar3 == 0) {
            uVar3 = DAT_00022cf0;
          }
          goto LAB_00021dc8;
        case 0x9d:
          goto LAB_000231ec;
        case 0x9e:
          goto LAB_00022ff4;
        case 0x9f:
LAB_00022ff4:
          if (((uVar13 != 0x9f && ppppppuVar27 == local_12c) && (param_5[0x29] == 0)) &&
             ((param_5[0x17] != 0 ||
              ((param_5[0x18] != 0 &&
               (local_12c == (undefined4 ******)(param_5[0x1d] + param_5[0x25])))))))
          goto LAB_000221ac;
          param_5[0x20] = (uint)ppppppuVar27;
          param_5[0x23] = local_134;
          param_5[0x1f] = (uint)local_12c;
          uVar3 = DAT_00022d04;
          if (uVar13 == 0) {
            uVar3 = 1;
          }
          goto LAB_00021dc8;
        case 0xa0:
          uVar3 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
          iVar19 = uVar3 * 2;
          uVar20 = param_5[0x24] & 0xffff0000 | uVar3;
          param_5[0x24] = uVar20;
          if (iVar19 < (int)param_5[5]) {
            uVar20 = param_5[3];
            puVar29 = (undefined4 *)(uVar20 + uVar3 * 8);
            *(undefined4 *)(uVar20 + uVar3 * 8) = *(undefined4 *)(uVar20 + (param_5[4] - uVar3) * 4)
            ;
            puVar29[1] = (int)ppppppuVar27 - param_5[0x1d];
            if ((int)local_134 <= iVar19) {
              for (puVar21 = (undefined4 *)(uVar20 + local_134 * 4); puVar21 < puVar29;
                  puVar21 = puVar21 + 1) {
                *puVar21 = 0xffffffff;
              }
              local_134 = iVar19 + 2;
            }
          }
          else {
            param_5[0x24] = uVar20 | 0x10000;
          }
          goto LAB_00022fd4;
        case 0xa1:
          param_2 = param_2 + 1;
          do {
            param_2 = param_2 + ((*(ushort *)(param_2 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(param_2 + 1) >> 8));
          } while (*param_2 == 0x77);
          local_138 = param_2 + 3;
          goto LAB_000222f4;
        }
        uVar3 = 0xfffffffb;
        goto LAB_00021dc8;
      }
      uVar3 = 0xffffffeb;
    }
    else {
      uVar3 = 0xfffffff8;
    }
    goto LAB_00021dc8;
  }
  uVar12 = 0;
  if (param_7 != 0) {
    uVar12 = (int)&param_7 - (int)param_1;
  }
  if (param_7 != 0) {
    uVar3 = ((int)uVar12 >> 0x1f) - (uVar12 ^ (int)uVar12 >> 0x1f);
  }
  else {
    uVar3 = FUN_00021d38(&param_7,0,uVar12,uVar12,uVar12,uVar12,1);
  }
  goto LAB_00021dc8;
LAB_00022d74:
  param_2 = local_138;
  if (uVar13 == 0x8c) goto code_r0x00022d80;
  goto LAB_0002229c;
code_r0x00022d80:
  param_5[0x26] = 2;
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  goto LAB_00021dc8;
LAB_0002297c:
  do {
    pbVar26 = pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(pbVar26 + 1) >> 8));
  } while (*pbVar26 == 0x77);
  goto LAB_00022994;
LAB_0002262c:
  do {
    if (0x87 < uVar13) {
      param_5[0x26] = 2;
    }
    uVar3 = FUN_00021d38(ppppppuVar27,param_2 + *(byte *)(iVar10 + (uint)*param_2),local_12c,
                         local_134,param_5,local_128,param_7 + 1);
    if (uVar3 == 0xfffffc1b) goto LAB_000226e0;
    if (uVar3 == 0xfffffc20) {
      if (param_2 + ((*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8))
          <= (byte *)param_5[0x1f]) goto LAB_00021dc8;
      if (*param_2 != 0x77) {
        bVar34 = param_2[(*(ushort *)(param_2 + 1) & 0xff) << 8 |
                         (uint)(*(ushort *)(param_2 + 1) >> 8)] == 0x77;
        goto LAB_000226b0;
      }
    }
    else {
      bVar34 = uVar3 == 0;
LAB_000226b0:
      if (!bVar34) goto LAB_00021dc8;
    }
    param_5[0x24] = uVar20;
    uVar5 = *(ushort *)(param_2 + 1);
    param_5[0x2b] = uVar14;
    param_2 = param_2 + ((uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8));
  } while (*param_2 == 0x77);
  uVar3 = 0;
LAB_000226e0:
  uVar20 = param_5[3];
  *(undefined4 *)(uVar20 + uVar12 * 8) = uVar6;
  *(undefined4 *)(uVar20 + iVar19) = uVar15;
  *(undefined4 *)(uVar20 + (param_5[4] - uVar12) * 4) = uVar16;
  goto LAB_00021dc8;
LAB_00022b88:
  if (!bVar34 && !bVar32) goto LAB_000221ac;
LAB_00022994:
  param_1 = ppppppuVar27;
  local_138 = pbVar26 + 3;
  goto LAB_000222f4;
LAB_00022af8:
  do {
    pbVar26 = pbVar26 + ((*(ushort *)(pbVar26 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(pbVar26 + 1) >> 8));
  } while (*pbVar26 == 0x77);
  goto LAB_00022994;
LAB_00022720:
  if (uVar13 < 0x88 && uVar13 != 0x81) {
    if ((param_5[0x1b] == 0) &&
       (param_2[(*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8)] !=
        0x77)) goto code_r0x0002276c;
  }
  else {
    param_5[0x26] = 2;
  }
  uVar12 = param_5[0x2b];
  uVar20 = param_5[0x24];
  uVar3 = FUN_00021d38(ppppppuVar27,param_2 + *(byte *)(iVar19 + (uint)*param_2),local_12c,local_134
                       ,param_5,local_128,param_7 + 1);
  if (uVar3 == 0xfffffc20) {
    if (((byte *)param_5[0x1f] <
         param_2 + ((*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8)))
       && ((*param_2 == 0x77 ||
           (param_2[(*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8)]
            == 0x77)))) {
LAB_000227f8:
      uVar5 = *(ushort *)(param_2 + 1);
      param_5[0x2b] = uVar12;
      param_2 = param_2 + ((uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8));
      if (*param_2 == 0x77) goto code_r0x00022814;
      goto LAB_000221ac;
    }
  }
  else {
    if (uVar3 == 0) goto LAB_000227f8;
    if (uVar3 == 0xfffffc1b) {
      if (*param_2 != 0x81) {
        for (; uVar12 = (*(ushort *)(param_2 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(param_2 + 1) >> 8), *param_2 == 0x77;
            param_2 = param_2 + uVar12) {
        }
        param_2 = param_2 + -uVar12;
      }
      if ((byte *)param_5[0x2d] != param_2) goto LAB_00021dc8;
      goto LAB_000221ac;
    }
  }
  goto LAB_00021dc8;
code_r0x0002276c:
  param_2 = param_2 + *(byte *)(iVar19 + (uint)*param_2);
  goto LAB_0002229c;
code_r0x00022814:
  param_5[0x24] = uVar20;
  goto LAB_00022720;
LAB_0002323c:
  do {
    param_2 = param_2 + ((*(ushort *)(param_2 + 1) & 0xff) << 8 |
                        (uint)(*(ushort *)(param_2 + 1) >> 8));
  } while (*param_2 == 0x77);
LAB_00023254:
  if (bVar34) {
LAB_000230f0:
    uVar3 = 1;
    goto LAB_00021dc8;
  }
LAB_00022fd4:
  param_1 = ppppppuVar27;
  local_138 = param_2 + 3;
  goto LAB_000222f4;
LAB_00026044:
  if ((int)uVar18 <= (int)uVar13) goto LAB_0002604c;
  iVar10 = FUN_0002196c(iVar19,ppppppuVar30,uVar20,param_5,bVar34);
  if (iVar10 < 0) {
    if ((((iVar10 == -2) && (param_5[0x22] != 0)) && (param_5[0x21] < param_5[0x1e])) &&
       (param_5[0x19] = 1, 1 < (int)param_5[0x22])) {
      uVar3 = 0xfffffff4;
      goto LAB_00021dc8;
    }
    goto LAB_0002604c;
  }
  uVar13 = uVar13 + 1;
  ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + iVar10);
  goto LAB_00026044;
LAB_0002604c:
  if (ppppppuVar30 < ppppppuVar27) goto LAB_000221ac;
  uVar3 = FUN_00021d38(ppppppuVar30,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 - uVar20);
  goto LAB_0002604c;
LAB_00025ea4:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar18 <= (int)uVar13) goto LAB_000221ac;
  iVar17 = FUN_0002196c(iVar19,ppppppuVar27,uVar20,param_5,bVar34);
  if (iVar17 < 0) goto LAB_00025f78;
  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + iVar17);
  uVar13 = uVar13 + 1;
  goto LAB_00025ea4;
LAB_00025f78:
  uVar12 = param_5[0x22];
  if (iVar17 == -2) {
    ppppppuVar27 = (undefined4 ******)param_5[0x1e];
  }
  if ((uVar12 == 0) || (ppppppuVar27 < (undefined4 ******)param_5[0x1e])) goto LAB_000221ac;
  goto LAB_00025f98;
LAB_00026968:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar18 <= (int)uVar13) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_00026a8c;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar30 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  iVar10 = FUN_00034784(uVar3,pbVar26,uVar12);
  if (iVar10 == 0) goto LAB_000221ac;
  uVar13 = uVar13 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_00026968;
LAB_00026a8c:
  uVar12 = param_5[0x22];
  if (uVar12 != 0) {
    bVar34 = ppppppuVar27 <= (undefined4 ******)param_5[0x21];
    goto LAB_00026aa0;
  }
  goto LAB_000221ac;
LAB_00026e10:
  uVar3 = FUN_00021d38(param_1,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 == 0) {
    bVar34 = param_1 <= ppppppuVar27;
    param_1 = (undefined4 ******)((int)param_1 + -1);
    if (bVar34) goto LAB_000221ac;
    ppppppuVar30 = param_1;
    if (uVar12 != 0) {
      do {
        param_1 = ppppppuVar30;
        ppppppuVar30 = (undefined4 ******)((int)param_1 + -1);
      } while (((uint)*param_1 & 0xc0) == 0x80);
    }
    goto LAB_00026e10;
  }
  goto LAB_00021dc8;
LAB_000261fc:
  uVar3 = FUN_00021d38(ppppppuVar30,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar18 <= (int)uVar20) goto LAB_000221ac;
  ppppppuVar27 = ppppppuVar30;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar30;
  uVar12 = (uint)bVar35;
  if (uVar12 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 1);
LAB_00026530:
    if (((int)(uint)param_2[(uVar12 >> 3) + 1] >> (uVar12 & 7) & 1U) == 0) goto LAB_000221ac;
  }
  else {
    if ((bVar35 & 0x20) == 0) {
      pbVar26 = (byte *)((int)ppppppuVar30 + 1);
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 2);
      uVar12 = *pbVar26 & 0x3f | (uVar12 & 0x1f) << 6;
    }
    else if ((bVar35 & 0x10) == 0) {
      uVar12 = (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 6 |
               (uVar12 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 3);
    }
    else if ((bVar35 & 8) == 0) {
      uVar12 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
               (uVar12 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
               (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
      ppppppuVar30 = ppppppuVar30 + 1;
    }
    else if ((bVar35 & 4) == 0) {
      uVar12 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
               (uVar12 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
               (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
               (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 5);
    }
    else {
      uVar12 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
               (uVar12 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
               (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
               (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
               (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 6);
    }
    if (uVar12 < 0x100) goto LAB_00026530;
    if (uVar13 == 0x6e) goto LAB_000221ac;
  }
  uVar20 = uVar20 + 1;
  goto LAB_000261fc;
  while( true ) {
    if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_0002659c;
    bVar35 = *(byte *)ppppppuVar27;
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
    if (((int)(uint)param_2[(bVar35 >> 3) + 1] >> (bVar35 & 7) & 1U) == 0) break;
LAB_00026550:
    uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
    if (uVar3 != 0) goto LAB_00021dc8;
    if ((int)uVar18 <= (int)((int)ppppppuVar27 + (uVar20 - (int)ppppppuVar30))) break;
  }
  goto LAB_000221ac;
LAB_00026884:
  if (param_1 < ppppppuVar30) goto LAB_000221ac;
  uVar3 = FUN_00021d38(param_1,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  param_1 = (undefined4 ******)((int)param_1 + -1);
  goto LAB_00026884;
LAB_00026604:
  uVar3 = 0xfffffff4;
  goto LAB_00021dc8;
LAB_0002667c:
  uVar3 = FUN_00021d38(param_1,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if (param_1 <= ppppppuVar30) goto LAB_000221ac;
  do {
    param_1 = (undefined4 ******)((int)param_1 + -1);
  } while ((*(byte *)param_1 & 0xc0) == 0x80);
  goto LAB_0002667c;
LAB_0002a758:
  uVar3 = 0xfffffff4;
  goto LAB_00021dc8;
LAB_0002b98c:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar30 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  uVar13 = local_114;
  if ((uVar3 != 0x24 && (uVar3 & 0xffffffdf) != 0x40) &&
     (uVar13 = (uint)(0xdfff < uVar3), uVar3 - 0xa0 < 0xd760)) {
    uVar13 = 1;
  }
  if (uVar13 == local_120) goto LAB_000221ac;
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002b98c;
LAB_0002c0c0:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar30 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  puVar22 = (uint *)(local_118 * 4 + -4 + *(int *)(iVar10 + DAT_0002d124));
  do {
    puVar22 = puVar22 + 1;
    if (uVar3 < *puVar22) {
      if (local_120 != 0) goto LAB_0002c168;
      goto LAB_000221ac;
    }
  } while (*puVar22 != uVar3);
  if (local_120 != 0) goto LAB_000221ac;
LAB_0002c168:
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002c0c0;
LAB_0002ba54:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar30 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  if ((uVar3 == 0x5f ||
      (*(uint *)(*(int *)(iVar10 + DAT_0002b110) +
                (uint)*(byte *)(*(int *)(iVar10 + DAT_0002b11c) +
                                (uint)*(ushort *)
                                       (*(int *)(iVar10 + DAT_0002b114) +
                                       ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002b118) +
                                                                ((int)uVar3 >> 7)) * 0x80 +
                                       (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) & 0xfffffffd) == 1) ==
      local_120) goto LAB_000221ac;
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002ba54;
LAB_0002bb54:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar30 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  if (uVar3 == 0x180e) {
LAB_0002bbf8:
    if (local_120 != 0) goto LAB_000221ac;
  }
  else {
    if (0x180e < uVar3) {
      if (uVar3 < 0x202a) {
        if (uVar3 < 0x2028) {
          bVar32 = 9 < uVar3 - 0x2000;
          bVar34 = uVar3 - 0x2000 == 10;
          goto LAB_0002bbf4;
        }
      }
      else if ((uVar3 != 0x205f) && (uVar3 != 0x3000)) {
        bVar34 = uVar3 == 0x202f;
LAB_0002c91c:
        if (!bVar34) goto LAB_0002c920;
      }
      goto LAB_0002bbf8;
    }
    if (uVar3 == 0x20) goto LAB_0002bbf8;
    if (0x20 < uVar3) {
      if ((uVar3 != 0xa0) && (uVar3 != 0x1680)) {
        bVar34 = uVar3 == 0x85;
        goto LAB_0002c91c;
      }
      goto LAB_0002bbf8;
    }
    bVar32 = 3 < uVar3 - 9;
    bVar34 = uVar3 - 9 == 4;
LAB_0002bbf4:
    if (!bVar32 || bVar34) goto LAB_0002bbf8;
LAB_0002c920:
    if ((*(int *)(*(int *)(iVar10 + DAT_0002d128) +
                 (uint)*(byte *)(*(int *)(iVar10 + DAT_0002d134) +
                                 (uint)*(ushort *)
                                        (*(int *)(iVar10 + DAT_0002d12c) +
                                        ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002d130) +
                                                                 ((int)uVar3 >> 7)) * 0x80 +
                                        (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) == 6) == local_120)
    goto LAB_000221ac;
  }
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002bb54;
LAB_0002bc14:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar30 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  if (((*(uint *)(*(int *)(iVar10 + DAT_0002b110) +
                 (uint)*(byte *)(*(int *)(iVar10 + DAT_0002b11c) +
                                 (uint)*(ushort *)
                                        (*(int *)(iVar10 + DAT_0002b114) +
                                        ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002b118) +
                                                                 ((int)uVar3 >> 7)) * 0x80 +
                                        (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) & 0xfffffffd) == 1) ==
      local_120) goto LAB_000221ac;
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002bc14;
LAB_0002bd0c:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar30 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  if ((*(byte *)(*(int *)(iVar10 + DAT_0002b11c) +
                (uint)*(ushort *)
                       (*(int *)(iVar10 + DAT_0002b114) +
                       ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002b118) + ((int)uVar3 >> 7)
                                                ) * 0x80 + (uVar3 & 0x7f)) * 2) * 8) == local_118)
      == local_120) goto LAB_000221ac;
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002bd0c;
LAB_0002bdf0:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar30 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  if ((*(byte *)(*(int *)(iVar10 + DAT_0002b11c) +
                 (uint)*(ushort *)
                        (*(int *)(iVar10 + DAT_0002b114) +
                        ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002b118) +
                                                 ((int)uVar3 >> 7)) * 0x80 + (uVar3 & 0x7f)) * 2) *
                 8 + 1) == local_118) == local_120) goto LAB_000221ac;
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002bdf0;
LAB_0002bed8:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar30 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  if ((*(uint *)(*(int *)(iVar10 + DAT_0002b110) +
                (uint)*(byte *)(*(int *)(iVar10 + DAT_0002b11c) +
                                (uint)*(ushort *)
                                       (*(int *)(iVar10 + DAT_0002b114) +
                                       ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002b118) +
                                                                ((int)uVar3 >> 7)) * 0x80 +
                                       (uVar3 & 0x7f)) * 2) * 8 + 1) * 4) == local_118) == local_120
     ) goto LAB_000221ac;
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002bed8;
LAB_0002bfcc:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar30 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  uVar3 = (uint)*(byte *)(*(int *)(iVar10 + DAT_0002b11c) +
                          (uint)*(ushort *)
                                 (*(int *)(iVar10 + DAT_0002b114) +
                                 ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002b118) +
                                                          ((int)uVar3 >> 7)) * 0x80 + (uVar3 & 0x7f)
                                 ) * 2) * 8 + 1);
  bVar34 = 4 < uVar3;
  bVar32 = uVar3 == 5;
  if (!bVar32) {
    bVar34 = uVar3 != 8;
  }
  bVar31 = uVar3 == 9;
  if (!bVar34 || (bVar32 || bVar31)) {
    uVar3 = 1;
  }
  if (bVar34 && (!bVar32 && !bVar31)) {
    uVar3 = 0;
  }
  if (uVar3 == local_120) goto LAB_000221ac;
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002bfcc;
LAB_0002c174:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  if (uVar12 == 0 || bVar35 < 0xc0) {
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 2);
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 3);
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar27 = ppppppuVar27 + 1;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 5);
  }
  else {
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 6);
  }
  if (local_120 != 0) goto LAB_000221ac;
  uVar14 = uVar14 + 1;
  goto LAB_0002c174;
LAB_0002cd60:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  ppppppuVar30 = (undefined4 ******)param_5[0x1e];
  if (ppppppuVar30 <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar12 == 0 || uVar3 < 0xc0) {
    ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + 3);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
  }
  else if ((bVar35 & 8) == 0) {
    ppppppuVar8 = ppppppuVar27 + 1;
    uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
            (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
  }
  else if ((bVar35 & 4) == 0) {
    ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + 5);
    uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
            (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
  }
  else {
    ppppppuVar8 = (undefined4 ******)((int)ppppppuVar27 + 6);
    uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
            (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
            (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
            (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
            (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
  }
  uVar3 = (uint)*(byte *)(*(int *)(iVar10 + DAT_0002d134) +
                          (uint)*(ushort *)
                                 (*(int *)(iVar10 + DAT_0002d12c) +
                                 ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002d130) +
                                                          ((int)uVar3 >> 7)) * 0x80 + (uVar3 & 0x7f)
                                 ) * 2) * 8 + 2);
  for (; ppppppuVar8 < ppppppuVar30; ppppppuVar8 = (undefined4 ******)((int)ppppppuVar8 + uVar13)) {
    bVar35 = *(byte *)ppppppuVar8;
    uVar18 = (uint)bVar35;
    uVar13 = local_114;
    if ((uVar12 != 0) && (0xbf < uVar18)) {
      if ((bVar35 & 0x20) == 0) {
        uVar18 = *(byte *)((int)ppppppuVar8 + 1) & 0x3f | (uVar18 & 0x1f) << 6;
        uVar13 = 2;
      }
      else if ((bVar35 & 0x10) == 0) {
        uVar18 = (*(byte *)((int)ppppppuVar8 + 1) & 0x3f) << 6 |
                 (uVar18 & 0xf) << 0xc | *(byte *)((int)ppppppuVar8 + 2) & 0x3f;
        uVar13 = 3;
      }
      else if ((bVar35 & 8) == 0) {
        uVar18 = (*(byte *)((int)ppppppuVar8 + 2) & 0x3f) << 6 |
                 (uVar18 & 7) << 0x12 | *(byte *)((int)ppppppuVar8 + 3) & 0x3f |
                 (*(byte *)((int)ppppppuVar8 + 1) & 0x3f) << 0xc;
        uVar13 = 4;
      }
      else if ((bVar35 & 4) == 0) {
        uVar18 = (*(byte *)((int)ppppppuVar8 + 3) & 0x3f) << 6 |
                 (uVar18 & 3) << 0x18 | *(byte *)(ppppppuVar8 + 1) & 0x3f |
                 (*(byte *)((int)ppppppuVar8 + 1) & 0x3f) << 0x12 |
                 (*(byte *)((int)ppppppuVar8 + 2) & 0x3f) << 0xc;
        uVar13 = 5;
      }
      else {
        uVar18 = (*(byte *)(ppppppuVar8 + 1) & 0x3f) << 6 |
                 (uVar18 & 1) << 0x1e | *(byte *)((int)ppppppuVar8 + 5) & 0x3f |
                 (*(byte *)((int)ppppppuVar8 + 1) & 0x3f) << 0x18 |
                 (*(byte *)((int)ppppppuVar8 + 2) & 0x3f) << 0x12 |
                 (*(byte *)((int)ppppppuVar8 + 3) & 0x3f) << 0xc;
        uVar13 = 6;
      }
    }
    uVar18 = (uint)*(byte *)(*(int *)(iVar10 + DAT_0002d134) +
                             (uint)*(ushort *)
                                    (*(int *)(iVar10 + DAT_0002d12c) +
                                    ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002d130) +
                                                             ((int)uVar18 >> 7)) * 0x80 +
                                    (uVar18 & 0x7f)) * 2) * 8 + 2);
    if ((*(uint *)(*(int *)(iVar10 + DAT_0002d120) + uVar3 * 4) & 1 << uVar18) == 0) break;
    uVar3 = uVar18;
  }
  if (((param_5[0x22] != 0 && ppppppuVar30 <= ppppppuVar8) &&
      ((undefined4 ******)param_5[0x21] < ppppppuVar8)) &&
     (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_0002d154;
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar8;
  goto LAB_0002cd60;
LAB_0002d238:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  ppppppuVar30 = (undefined4 ******)param_5[0x1e];
  if (ppppppuVar30 <= ppppppuVar27) goto LAB_000242c4;
  if (uVar13 == 0xc) {
    if (param_5[6] == 0) {
      bVar34 = false;
      if ((ppppppuVar27 <= (undefined4 ******)((int)ppppppuVar30 - param_5[7])) &&
         (*(byte *)ppppppuVar27 == (byte)param_5[0xd])) {
        if (param_5[7] == 1) {
          bVar34 = true;
        }
        else {
          bVar34 = *(byte *)((int)ppppppuVar27 + 1) == *(byte *)((int)param_5 + 0x35);
        }
      }
    }
    else {
      iVar10 = FUN_000326d8(ppppppuVar27,param_5[6],ppppppuVar30,param_5 + 7,0);
      bVar34 = false;
      if (iVar10 != 0) {
        bVar34 = true;
      }
    }
    if (bVar34) goto LAB_000221ac;
  }
  ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
  uVar12 = (uint)*(byte *)ppppppuVar27;
  switch(uVar13) {
  case 6:
    bVar35 = *(byte *)(param_5[0x10] + uVar12) & 4;
    goto joined_r0x0002d954;
  case 7:
    bVar34 = (*(byte *)(param_5[0x10] + uVar12) & 4) == 0;
    goto LAB_0002d91c;
  case 8:
    bVar35 = *(byte *)(param_5[0x10] + uVar12) & 1;
    goto joined_r0x0002d954;
  case 9:
    bVar34 = (*(byte *)(param_5[0x10] + uVar12) & 1) == 0;
    goto LAB_0002d91c;
  case 10:
    bVar35 = *(byte *)(param_5[0x10] + uVar12) & 0x10;
joined_r0x0002d954:
    if (bVar35 != 0) goto LAB_000221ac;
    break;
  case 0xb:
    bVar34 = (*(byte *)(param_5[0x10] + uVar12) & 0x10) == 0;
LAB_0002d91c:
    if (bVar34) goto LAB_000221ac;
    break;
  case 0xc:
    if (((((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x1e] <= ppppppuVar30)) &&
         (param_5[6] == 0)) && ((param_5[7] == 2 && ((byte)param_5[0xd] == uVar12)))) &&
       (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_0002d830;
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    goto switchD_00029140_default;
  case 0x10:
    goto switchD_00029140_default;
  case 0x11:
    if (uVar12 < 0xd) {
      if (uVar12 < 0xb) {
        bVar34 = uVar12 == 10;
        goto LAB_0002d84c;
      }
    }
    else {
      if (uVar12 == 0xd) {
        if ((ppppppuVar30 < (undefined4 ******)param_5[0x1e]) &&
           (*(byte *)((int)ppppppuVar27 + 1) == 10)) {
          ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
        }
        break;
      }
      if (uVar12 != 0x85) goto LAB_000231ec;
    }
    if (param_5[0x1a] != 0) goto LAB_000221ac;
    break;
  case 0x12:
    if ((uVar12 == 0x20) || (uVar12 == 0xa0)) goto LAB_000231ec;
    bVar34 = uVar12 == 9;
LAB_0002d8ac:
    if (bVar34) goto LAB_000231ec;
    break;
  case 0x13:
    if ((uVar12 != 0x20) && (uVar12 != 0xa0)) {
      bVar34 = uVar12 == 9;
LAB_0002d84c:
      if (!bVar34) goto LAB_000231ec;
    }
    break;
  case 0x14:
    if (9 < uVar12) {
      if (0xd < uVar12) {
        bVar34 = uVar12 == 0x85;
        goto LAB_0002d8ac;
      }
      goto LAB_000231ec;
    }
    break;
  case 0x15:
    if (uVar12 < 10) goto LAB_000231ec;
    if (0xd < uVar12) {
      bVar34 = uVar12 == 0x85;
      goto LAB_0002d84c;
    }
    break;
  default:
    goto switchD_00029140_default;
  }
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002d238;
LAB_0002d178:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  ppppppuVar30 = (undefined4 ******)param_5[0x1e];
  if (ppppppuVar30 <= ppppppuVar27) goto LAB_000242c4;
  if (uVar13 == 0xc) {
    if (param_5[6] == 0) {
      bVar34 = false;
      if ((ppppppuVar27 <= (undefined4 ******)((int)ppppppuVar30 - param_5[7])) &&
         (*(byte *)ppppppuVar27 == (byte)param_5[0xd])) {
        if (param_5[7] == 1) {
          bVar34 = true;
        }
        else {
          bVar34 = *(byte *)((int)ppppppuVar27 + 1) == *(byte *)((int)param_5 + 0x35);
        }
      }
    }
    else {
      iVar10 = FUN_000326d8(ppppppuVar27,param_5[6],ppppppuVar30,param_5 + 7,uVar12);
      bVar34 = false;
      if (iVar10 != 0) {
        bVar34 = true;
      }
    }
    if (bVar34) goto LAB_000221ac;
  }
  bVar35 = *(byte *)ppppppuVar27;
  uVar3 = (uint)bVar35;
  if (uVar3 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 1);
    switch(uVar13 - 6) {
    case 0:
LAB_0002d6d8:
      bVar35 = *(byte *)(param_5[0x10] + uVar3) & 4;
joined_r0x0002d750:
      if (bVar35 != 0) goto LAB_000221ac;
      break;
    case 1:
LAB_0002d6ec:
      if (uVar3 < 0x100) {
        bVar34 = (*(byte *)(param_5[0x10] + uVar3) & 4) == 0;
        goto LAB_0002d700;
      }
      goto LAB_000221ac;
    case 2:
LAB_0002d708:
      if (uVar3 < 0x100) {
        bVar35 = *(byte *)(param_5[0x10] + uVar3) & 1;
        goto joined_r0x0002d750;
      }
      break;
    case 3:
LAB_0002d724:
      if (uVar3 < 0x100) {
        bVar34 = (*(byte *)(param_5[0x10] + uVar3) & 1) == 0;
        goto LAB_0002d700;
      }
      goto LAB_000221ac;
    case 4:
LAB_0002d73c:
      if (uVar3 < 0x100) {
        bVar35 = *(byte *)(param_5[0x10] + uVar3) & 0x10;
        goto joined_r0x0002d750;
      }
      break;
    case 5:
LAB_0002d758:
      if (0xff < uVar3) goto LAB_000221ac;
      bVar34 = (*(byte *)(param_5[0x10] + uVar3) & 0x10) == 0;
LAB_0002d700:
      if (bVar34) goto LAB_000221ac;
      break;
    case 6:
LAB_0002d4f0:
      if ((((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x1e] <= ppppppuVar30)) &&
          (param_5[6] == 0)) &&
         (((param_5[7] == 2 && ((byte)param_5[0xd] == uVar3)) &&
          (param_5[0x19] = 1, 1 < (int)param_5[0x22])))) goto LAB_0002d154;
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      goto switchD_00029140_default;
    case 10:
      goto switchD_00029140_default;
    case 0xb:
LAB_0002d544:
      if (uVar3 == 0xd) {
        if ((ppppppuVar30 < (undefined4 ******)param_5[0x1e]) && (*(byte *)ppppppuVar30 == 10)) {
          ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 1);
        }
      }
      else {
        if (uVar3 < 0xe) {
          if (uVar3 == 10) break;
          if (uVar3 < 10) goto LAB_000231ec;
        }
        else if ((uVar3 != 0x85) && ((uVar3 < 0x85 || (1 < uVar3 - 0x2028)))) goto LAB_000231ec;
        if (param_5[0x1a] != 0) goto LAB_000221ac;
      }
      break;
    case 0xc:
LAB_0002d5a8:
      if (uVar3 == 0x180e) goto LAB_000231ec;
      if (uVar3 < 0x180f) {
        if (uVar3 == 0x20) goto LAB_000231ec;
        if (uVar3 < 0x21) {
          bVar34 = uVar3 == 9;
        }
        else {
          if (uVar3 == 0xa0) goto LAB_000231ec;
          bVar34 = uVar3 == 0x1680;
        }
      }
      else {
        if (uVar3 == 0x202f) goto LAB_000231ec;
        if (uVar3 < 0x2030) {
          bVar32 = 9 < uVar3 - 0x2000;
          bVar34 = uVar3 - 0x2000 == 10;
          goto LAB_0002d5f8;
        }
        if (uVar3 == 0x205f) goto LAB_000231ec;
        bVar34 = uVar3 == 0x3000;
      }
      if (bVar34) goto LAB_000231ec;
      break;
    case 0xd:
LAB_0002d614:
      if (uVar3 != 0x180e) {
        if (uVar3 < 0x180f) {
          if (uVar3 != 0x20) {
            if (uVar3 < 0x21) {
              bVar34 = uVar3 == 9;
            }
            else {
              if (uVar3 == 0xa0) break;
              bVar34 = uVar3 == 0x1680;
            }
LAB_0002d634:
            if (!bVar34) goto LAB_000231ec;
          }
        }
        else if (uVar3 != 0x202f) {
          if (uVar3 < 0x2030) {
            bVar32 = 9 < uVar3 - 0x2000;
            bVar34 = uVar3 - 0x2000 == 10;
            goto LAB_0002d664;
          }
          if (uVar3 != 0x205f) {
            bVar34 = uVar3 == 0x3000;
            goto LAB_0002d634;
          }
        }
      }
      break;
    case 0xe:
LAB_0002d680:
      if (uVar3 == 0x85) goto LAB_000231ec;
      if (uVar3 < 0x86) {
        bVar32 = 2 < uVar3 - 10;
        bVar34 = uVar3 - 10 == 3;
      }
      else {
        bVar32 = uVar3 != 0x2028;
        bVar34 = uVar3 == 0x2029;
      }
LAB_0002d5f8:
      if (!bVar32 || bVar34) goto LAB_000231ec;
      break;
    case 0xf:
LAB_0002d6a8:
      if (uVar3 != 0x85) {
        if (uVar3 < 0x86) {
          bVar32 = 2 < uVar3 - 10;
          bVar34 = uVar3 - 10 == 3;
        }
        else {
          bVar32 = uVar3 != 0x2028;
          bVar34 = uVar3 == 0x2029;
        }
LAB_0002d664:
        if (bVar32 && !bVar34) goto LAB_000231ec;
      }
      break;
    default:
      goto switchD_00029140_default;
    }
  }
  else {
    if ((bVar35 & 0x20) == 0) {
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 2);
      uVar3 = *(byte *)((int)ppppppuVar27 + 1) & 0x3f | (uVar3 & 0x1f) << 6;
    }
    else if ((bVar35 & 0x10) == 0) {
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 3);
      uVar3 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
              (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
    }
    else if ((bVar35 & 8) == 0) {
      ppppppuVar30 = ppppppuVar27 + 1;
      uVar3 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
              (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
              (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
    }
    else if ((bVar35 & 4) == 0) {
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 5);
      uVar3 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
              (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
              (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
              (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
    }
    else {
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar27 + 6);
      uVar3 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
              (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
              (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
              (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
              (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
    }
    switch(uVar13 - 6) {
    case 0:
      if (uVar3 < 0x100) goto LAB_0002d6d8;
      break;
    case 1:
      goto LAB_0002d6ec;
    case 2:
      goto LAB_0002d708;
    case 3:
      goto LAB_0002d724;
    case 4:
      goto LAB_0002d73c;
    case 5:
      goto LAB_0002d758;
    case 6:
      goto LAB_0002d4f0;
    case 7:
      break;
    case 8:
      break;
    case 9:
      goto switchD_00029140_default;
    case 10:
switchD_00029140_default:
      uVar3 = 0xfffffff2;
      goto LAB_00021dc8;
    case 0xb:
      goto LAB_0002d544;
    case 0xc:
      goto LAB_0002d5a8;
    case 0xd:
      goto LAB_0002d614;
    case 0xe:
      goto LAB_0002d680;
    case 0xf:
      goto LAB_0002d6a8;
    default:
      goto switchD_00029140_default;
    }
  }
  uVar14 = uVar14 + 1;
  ppppppuVar27 = ppppppuVar30;
  goto LAB_0002d178;
LAB_0002d154:
  uVar3 = 0xfffffff4;
  goto LAB_00021dc8;
LAB_0002da48:
  if (((param_5[0x22] != 0) && ((undefined4 ******)param_5[0x21] < param_1)) &&
     (param_5[0x19] = 1, 1 < (int)param_5[0x22])) goto LAB_0002d830;
LAB_0002dad8:
  if (!bVar34) goto LAB_0002dae4;
  goto LAB_000222f4;
LAB_0002dae4:
  if (ppppppuVar27 < param_1) {
    uVar3 = FUN_00021d38(param_1,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
    if (uVar3 != 0) goto LAB_00021dc8;
    param_1 = (undefined4 ******)((int)param_1 + -1);
    ppppppuVar30 = param_1;
    if (uVar12 != 0) {
      do {
        param_1 = ppppppuVar30;
        ppppppuVar30 = (undefined4 ******)((int)param_1 + -1);
      } while (((uint)*param_1 & 0xc0) == 0x80);
    }
    goto LAB_0002dae4;
  }
  goto LAB_0002229c;
LAB_0002ed64:
  if (param_1 <= ppppppuVar27) goto LAB_0002229c;
  uVar3 = FUN_00021d38(param_1,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  ppppppuVar30 = (undefined4 ******)((int)param_1 + -1);
  ppppppuVar8 = ppppppuVar30;
  if (uVar12 == 0) {
    uVar3 = (uint)*(byte *)((int)param_1 + -1);
  }
  else {
    do {
      ppppppuVar30 = ppppppuVar8;
      bVar35 = *(byte *)ppppppuVar30;
      uVar3 = (uint)bVar35;
      ppppppuVar8 = (undefined4 ******)((int)ppppppuVar30 + -1);
    } while ((uVar3 & 0xc0) == 0x80);
    if (0xbf < uVar3) {
      if ((bVar35 & 0x20) == 0) {
        uVar20 = (uVar3 & 0x1f) << 6;
        uVar3 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f;
      }
      else {
        if ((bVar35 & 0x10) == 0) {
          uVar20 = (uVar3 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
          uVar3 = (uint)*(byte *)((int)ppppppuVar30 + 1);
        }
        else if ((bVar35 & 8) == 0) {
          uVar20 = (uVar3 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                   (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
          uVar3 = (uint)*(byte *)((int)ppppppuVar30 + 2);
        }
        else if ((bVar35 & 4) == 0) {
          uVar20 = (uVar3 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                   (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                   (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
          uVar3 = (uint)*(byte *)((int)ppppppuVar30 + 3);
        }
        else {
          uVar20 = (uVar3 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                   (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                   (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                   (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
          uVar3 = (uint)*(byte *)(ppppppuVar30 + 1);
        }
        uVar3 = (uVar3 & 0x3f) << 6;
      }
      uVar3 = uVar3 | uVar20;
    }
  }
  uVar3 = (uint)*(byte *)(*(int *)(iVar10 + DAT_0002f110) +
                          (uint)*(ushort *)
                                 (*(int *)(iVar10 + DAT_0002f108) +
                                 ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002f10c) +
                                                          ((int)uVar3 >> 7)) * 0x80 + (uVar3 & 0x7f)
                                 ) * 2) * 8 + 2);
  do {
    param_1 = ppppppuVar30;
    if (param_1 <= ppppppuVar27) goto LAB_0002229c;
    ppppppuVar30 = (undefined4 ******)((int)param_1 + -1);
    ppppppuVar8 = ppppppuVar30;
    if (uVar12 == 0) {
      uVar20 = (uint)*(byte *)((int)param_1 + -1);
    }
    else {
      do {
        ppppppuVar30 = ppppppuVar8;
        bVar35 = *(byte *)ppppppuVar30;
        uVar20 = (uint)bVar35;
        ppppppuVar8 = (undefined4 ******)((int)ppppppuVar30 + -1);
      } while ((uVar20 & 0xc0) == 0x80);
      if (0xbf < uVar20) {
        if ((bVar35 & 0x20) == 0) {
          uVar14 = (uVar20 & 0x1f) << 6;
          uVar20 = *(byte *)((int)ppppppuVar30 + 1) & 0x3f;
        }
        else {
          if ((bVar35 & 0x10) == 0) {
            uVar14 = (uVar20 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f;
            uVar20 = (uint)*(byte *)((int)ppppppuVar30 + 1);
          }
          else if ((bVar35 & 8) == 0) {
            uVar14 = (uVar20 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
                     (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0xc;
            uVar20 = (uint)*(byte *)((int)ppppppuVar30 + 2);
          }
          else if ((bVar35 & 4) == 0) {
            uVar14 = (uVar20 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f |
                     (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x12 |
                     (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
            uVar20 = (uint)*(byte *)((int)ppppppuVar30 + 3);
          }
          else {
            uVar14 = (uVar20 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
                     (*(byte *)((int)ppppppuVar30 + 1) & 0x3f) << 0x18 |
                     (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
                     (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
            uVar20 = (uint)*(byte *)(ppppppuVar30 + 1);
          }
          uVar20 = (uVar20 & 0x3f) << 6;
        }
        uVar20 = uVar20 | uVar14;
      }
    }
    uVar14 = (uint)*(byte *)(*(int *)(iVar10 + DAT_0002f110) +
                             (uint)*(ushort *)
                                    (*(int *)(iVar10 + DAT_0002f108) +
                                    ((short)(ushort)*(byte *)(*(int *)(iVar10 + DAT_0002f10c) +
                                                             ((int)uVar20 >> 7)) * 0x80 +
                                    (uVar20 & 0x7f)) * 2) * 8 + 2);
    uVar20 = 1 << uVar3;
    uVar3 = uVar14;
  } while ((*(uint *)(*(int *)(iVar10 + DAT_0002f118) + uVar14 * 4) & uVar20) != 0);
  goto LAB_0002ed64;
LAB_0002f4d4:
  if (ppppppuVar27 < param_1) {
    uVar3 = FUN_00021d38(param_1,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
    if (uVar3 != 0) goto LAB_00021dc8;
    ppppppuVar30 = (undefined4 ******)((int)param_1 + -1);
    do {
      param_1 = ppppppuVar30;
      ppppppuVar30 = (undefined4 ******)((int)param_1 + -1);
    } while ((*(byte *)param_1 & 0xc0) == 0x80);
    if ((uVar13 == 0x11 && (*(byte *)param_1 == 10 && ppppppuVar27 < param_1)) &&
       (*(byte *)((int)param_1 + -1) == 0xd)) {
      param_1 = (undefined4 ******)((int)param_1 + -1);
    }
    goto LAB_0002f4d4;
  }
  goto LAB_0002229c;
LAB_000308e8:
  uVar3 = param_5[0x22];
  if ((uVar3 != 0) && ((undefined4 ******)param_5[0x21] < param_1)) {
LAB_00030aac:
    param_5[0x19] = 1;
    if (1 < (int)uVar3) goto LAB_0002d830;
  }
LAB_00030954:
  if (!bVar34) goto LAB_00030960;
  goto LAB_000222f4;
LAB_0002d830:
  uVar3 = 0xfffffff4;
  goto LAB_00021dc8;
LAB_00030960:
  ppppppuVar30 = param_1;
  param_1 = ppppppuVar27;
  if (ppppppuVar27 != ppppppuVar30) {
    uVar3 = FUN_00021d38(ppppppuVar30,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
    if (uVar3 != 0) goto LAB_00021dc8;
    param_1 = (undefined4 ******)((int)ppppppuVar30 + -1);
    if (((ppppppuVar27 < param_1 && uVar13 == 0x11) && (*(byte *)((int)ppppppuVar30 + -1) == 10)) &&
       (*(byte *)((int)ppppppuVar30 + -2) == 0xd)) {
      param_1 = (undefined4 ******)((int)ppppppuVar30 + -2);
    }
    goto LAB_00030960;
  }
  goto LAB_0002229c;
LAB_00028a60:
  uVar3 = FUN_00021d38(ppppppuVar30,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  ppppppuVar27 = ppppppuVar30;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar30) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar30;
  uVar12 = (uint)bVar35;
  if (uVar12 < 0xc0) {
    ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 1);
  }
  else {
    uVar3 = (uint)*(byte *)((int)ppppppuVar30 + 1);
    if ((bVar35 & 0x20) == 0) {
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 2);
      uVar12 = uVar3 & 0x3f | (uVar12 & 0x1f) << 6;
    }
    else if ((bVar35 & 0x10) == 0) {
      uVar12 = (uVar3 & 0x3f) << 6 | (uVar12 & 0xf) << 0xc | *(byte *)((int)ppppppuVar30 + 2) & 0x3f
      ;
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 3);
    }
    else if ((bVar35 & 8) == 0) {
      uVar12 = (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 6 |
               (uVar12 & 7) << 0x12 | *(byte *)((int)ppppppuVar30 + 3) & 0x3f |
               (uVar3 & 0x3f) << 0xc;
      ppppppuVar30 = ppppppuVar30 + 1;
    }
    else if ((bVar35 & 4) == 0) {
      uVar12 = (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 6 |
               (uVar12 & 3) << 0x18 | *(byte *)(ppppppuVar30 + 1) & 0x3f | (uVar3 & 0x3f) << 0x12 |
               (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0xc;
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 5);
    }
    else {
      uVar12 = (*(byte *)(ppppppuVar30 + 1) & 0x3f) << 6 |
               (uVar12 & 1) << 0x1e | *(byte *)((int)ppppppuVar30 + 5) & 0x3f |
               (uVar3 & 0x3f) << 0x18 | (*(byte *)((int)ppppppuVar30 + 2) & 0x3f) << 0x12 |
               (*(byte *)((int)ppppppuVar30 + 3) & 0x3f) << 0xc;
      ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + 6);
    }
  }
  if (uVar12 == uVar24) goto LAB_000221ac;
  uVar14 = uVar14 + 1;
  goto LAB_00028a60;
  while( true ) {
    if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_0002659c;
    bVar35 = *(byte *)ppppppuVar27;
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
    if (bVar35 == uVar24) break;
LAB_00028d58:
    uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
    if (uVar3 != 0) goto LAB_00021dc8;
    if ((int)uVar20 <= (int)((int)ppppppuVar27 + (uVar14 - (int)ppppppuVar30))) break;
  }
  goto LAB_000221ac;
LAB_0002905c:
  param_1 = ppppppuVar30;
  if (ppppppuVar30 == ppppppuVar8) goto LAB_0002229c;
  uVar3 = FUN_00021d38(ppppppuVar8,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  ppppppuVar8 = (undefined4 ******)((int)ppppppuVar8 + -1);
  goto LAB_0002905c;
LAB_00028de8:
  uVar3 = 0xfffffff4;
  goto LAB_00021dc8;
LAB_00028e58:
  if (param_1 <= ppppppuVar30) goto LAB_0002229c;
  uVar3 = FUN_00021d38(param_1,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  do {
    param_1 = (undefined4 ******)((int)param_1 + -1);
  } while ((*(byte *)param_1 & 0xc0) == 0x80);
  goto LAB_00028e58;
LAB_00028318:
  uVar12 = param_5[0x22];
  if (uVar12 == 0) goto LAB_000221ac;
  bVar34 = ppppppuVar27 <= (undefined4 ******)param_5[0x21];
  goto LAB_00026aa0;
LAB_000283a8:
  uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)uVar20 <= (int)uVar14) goto LAB_000221ac;
  if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_000242c4;
  bVar35 = *(byte *)ppppppuVar27;
  uVar12 = (uint)bVar35;
  if (uVar12 < 0xc0) {
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
  }
  else if ((bVar35 & 0x20) == 0) {
    pbVar26 = (byte *)((int)ppppppuVar27 + 1);
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 2);
    uVar12 = *pbVar26 & 0x3f | (uVar12 & 0x1f) << 6;
  }
  else if ((bVar35 & 0x10) == 0) {
    uVar12 = (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 6 |
             (uVar12 & 0xf) << 0xc | *(byte *)((int)ppppppuVar27 + 2) & 0x3f;
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 3);
  }
  else if ((bVar35 & 8) == 0) {
    uVar12 = (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 6 |
             (uVar12 & 7) << 0x12 | *(byte *)((int)ppppppuVar27 + 3) & 0x3f |
             (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0xc;
    ppppppuVar27 = ppppppuVar27 + 1;
  }
  else if ((bVar35 & 4) == 0) {
    uVar12 = (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 6 |
             (uVar12 & 3) << 0x18 | *(byte *)(ppppppuVar27 + 1) & 0x3f |
             (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x12 |
             (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0xc;
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 5);
  }
  else {
    uVar12 = (*(byte *)(ppppppuVar27 + 1) & 0x3f) << 6 |
             (uVar12 & 1) << 0x1e | *(byte *)((int)ppppppuVar27 + 5) & 0x3f |
             (*(byte *)((int)ppppppuVar27 + 1) & 0x3f) << 0x18 |
             (*(byte *)((int)ppppppuVar27 + 2) & 0x3f) << 0x12 |
             (*(byte *)((int)ppppppuVar27 + 3) & 0x3f) << 0xc;
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 6);
  }
  if (uVar12 == uVar13 || uVar12 == uVar24) goto LAB_000221ac;
  uVar14 = uVar14 + 1;
  goto LAB_000283a8;
  while( true ) {
    if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_0002659c;
    bVar35 = *(byte *)ppppppuVar27;
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
    if (bVar35 == uVar24 || bVar35 == uVar13) break;
LAB_000286a0:
    uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
    if (uVar3 != 0) goto LAB_00021dc8;
    if ((int)uVar20 <= (int)((int)ppppppuVar27 + iVar10)) break;
  }
  goto LAB_000221ac;
LAB_00028998:
  param_1 = ppppppuVar27;
  if (ppppppuVar27 == ppppppuVar8) goto LAB_0002229c;
  uVar3 = FUN_00021d38(ppppppuVar8,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  ppppppuVar8 = (undefined4 ******)((int)ppppppuVar8 + -1);
  goto LAB_00028998;
LAB_0002873c:
  uVar3 = 0xfffffff4;
  goto LAB_00021dc8;
LAB_000287b0:
  if (param_1 <= ppppppuVar27) goto LAB_0002229c;
  uVar3 = FUN_00021d38(param_1,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  do {
    param_1 = (undefined4 ******)((int)param_1 + -1);
  } while ((*(byte *)param_1 & 0xc0) == 0x80);
  goto LAB_000287b0;
LAB_00027574:
  uVar3 = FUN_00021d38(ppppppuVar27,param_2,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  if ((int)local_11c <= (int)uVar20) goto LAB_000221ac;
  ppppppuVar30 = (undefined4 ******)param_5[0x1e];
  if ((((undefined4 ******)((int)ppppppuVar30 - __n_00) < ppppppuVar27) ||
      (iVar10 = memcmp(ppppppuVar27,pbVar26,__n_00), sVar2 = __n_00, iVar10 != 0)) &&
     (((int)__n < 1 ||
      (((undefined4 ******)((int)ppppppuVar30 - __n) < ppppppuVar27 ||
       (iVar10 = memcmp(ppppppuVar27,auStack_34,__n), sVar2 = __n, iVar10 != 0))))))
  goto LAB_00027858;
  ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + sVar2);
  uVar20 = uVar20 + 1;
  goto LAB_00027574;
LAB_00027858:
  uVar12 = param_5[0x22];
  bVar32 = ppppppuVar27 <= ppppppuVar30;
  bVar34 = ppppppuVar30 == ppppppuVar27;
LAB_00027050:
  uVar3 = (uint)(!bVar32 || bVar34);
  if (uVar12 == 0) {
    uVar3 = 0;
  }
LAB_00027064:
  if (uVar3 != 0) {
LAB_00025f98:
    bVar34 = ppppppuVar27 <= (undefined4 ******)param_5[0x21];
LAB_00026aa0:
    if (!bVar34) {
LAB_00023bd4:
      param_5[0x19] = 1;
      if (1 < (int)uVar12) {
        uVar3 = 0xfffffff4;
        goto LAB_00021dc8;
      }
    }
  }
  goto LAB_000221ac;
LAB_00027900:
  if (param_1 <= ppppppuVar27) goto LAB_0002229c;
  uVar3 = FUN_00021d38(param_1,param_2,local_12c,local_134,param_5,local_128,param_7 + 1);
  if (uVar3 != 0) goto LAB_00021dc8;
  do {
    param_1 = (undefined4 ******)((int)param_1 + -1);
  } while ((*(byte *)param_1 & 0xc0) == 0x80);
  goto LAB_00027900;
  while( true ) {
    if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_0002659c;
    bVar35 = *(byte *)ppppppuVar27;
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
    if (bVar35 != uVar14) break;
LAB_00027bf8:
    uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
    if (uVar3 != 0) goto LAB_00021dc8;
    if ((int)local_11c <= (int)((int)ppppppuVar27 + (uVar20 - (int)ppppppuVar30))) break;
  }
  goto LAB_000221ac;
LAB_00027bac:
  param_1 = ppppppuVar27;
  if (ppppppuVar27 == ppppppuVar8) goto LAB_0002229c;
  uVar3 = FUN_00021d38(ppppppuVar8,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  ppppppuVar8 = (undefined4 ******)((int)ppppppuVar8 + -1);
  if (uVar3 != 0) goto LAB_00021dc8;
  goto LAB_00027bac;
LAB_0002659c:
  uVar12 = param_5[0x22];
  if (uVar12 == 0) goto LAB_000221ac;
  bVar34 = ppppppuVar27 <= (undefined4 ******)param_5[0x21];
  goto LAB_00026aa0;
LAB_00027ae4:
  param_1 = ppppppuVar27;
  if (ppppppuVar27 == ppppppuVar30) goto LAB_0002229c;
  uVar3 = FUN_00021d38(ppppppuVar30,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
  ppppppuVar30 = (undefined4 ******)((int)ppppppuVar30 + -1);
  if (uVar3 != 0) goto LAB_00021dc8;
  goto LAB_00027ae4;
LAB_000231ec:
  uVar3 = 0;
  goto LAB_00021dc8;
LAB_000242c4:
  uVar12 = param_5[0x22];
  uVar3 = uVar12;
  goto LAB_00027064;
  while( true ) {
    if ((undefined4 ******)param_5[0x1e] <= ppppppuVar27) goto LAB_0002659c;
    bVar35 = *(byte *)ppppppuVar27;
    ppppppuVar27 = (undefined4 ******)((int)ppppppuVar27 + 1);
    if (uVar14 != bVar35 && uVar13 != bVar35) break;
LAB_000279e4:
    uVar3 = FUN_00021d38(ppppppuVar27,local_138,local_12c,local_134,param_5,local_128,param_7 + 1);
    if (uVar3 != 0) goto LAB_00021dc8;
    if ((int)local_11c <= (int)((int)ppppppuVar27 + iVar10)) break;
  }
LAB_000221ac:
  uVar3 = 0;
LAB_00021dc8:
  if (local_2c != *piVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== pcre_exec @ 00030c5c size=3840 ===== */

/* WARNING: Type propagation algorithm not settling */

void pcre_exec(int *param_1,uint *param_2,byte *param_3,int param_4,int param_5,uint param_6,
              int *param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  uint local_148;
  uint local_140;
  uint local_13c;
  int local_138;
  uint local_130;
  uint local_11c;
  byte *local_114;
  byte *local_110;
  byte *local_f8;
  int local_e8 [3];
  uint local_dc;
  int *local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined2 local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  byte *local_70;
  byte *local_6c;
  byte *local_68;
  int local_64;
  byte *local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  
  iVar10 = DAT_00031b5c + 0x30c80;
  piVar11 = *(int **)(iVar10 + DAT_00031b60);
  local_2c = *piVar11;
  if ((param_1 == (int *)0x0) &&
     (param_5 == DAT_00031b64 &&
      (param_4 == DAT_00031b64 && (param_3 == (byte *)0x0 && param_2 == (uint *)0x0)))) {
    iVar16 = -4;
    goto LAB_00030d98;
  }
  if ((DAT_00031b68 & param_6) != 0) {
    iVar16 = -3;
    goto LAB_00030d98;
  }
  if ((param_3 == (byte *)0x0 || param_1 == (int *)0x0) || (param_7 == (int *)0x0 && 0 < param_8)) {
    iVar16 = -2;
    goto LAB_00030d98;
  }
  if (param_8 < 0) {
    iVar16 = -0xf;
    goto LAB_00030d98;
  }
  if (param_4 < 0) {
    iVar16 = -0x20;
    goto LAB_00030d98;
  }
  if (param_4 < param_5 || param_5 < 0) {
    iVar16 = -0x18;
    goto LAB_00030d98;
  }
  if (*param_1 != DAT_00031b6c) {
    if (*param_1 == DAT_00031b70) {
      iVar16 = -0x1d;
    }
    else {
      iVar16 = -4;
    }
    goto LAB_00030d98;
  }
  if ((param_1[3] & 1U) == 0) {
    iVar16 = -0x1c;
    goto LAB_00030d98;
  }
  uVar4 = param_1[2] & 0x800;
  uVar12 = (param_1[2] & 0xfffU) >> 0xb;
  if ((param_6 & 0x8000000) == 0) {
    local_5c = (param_6 & 0xffff) >> 0xf;
  }
  else {
    local_5c = 2;
  }
  pbVar5 = param_3 + param_5;
  local_98 = uVar12;
  if ((uVar4 != 0) && ((param_6 & 0x2000) == 0)) {
    iVar16 = FUN_00034404(param_3,param_4,local_e8);
    if (iVar16 != 0) {
      if (1 < param_8) {
        param_7[1] = iVar16;
        *param_7 = local_e8[0];
      }
      if (iVar16 < 6) {
        if ((int)local_5c < 2) {
          iVar16 = -10;
        }
        else {
          iVar16 = -0x19;
        }
      }
      else {
        iVar16 = -10;
      }
      goto LAB_00030d98;
    }
    if ((param_5 < param_4 && 0 < param_5) && ((param_3[param_5] & 0xc0) == 0x80)) {
      iVar16 = -0xb;
      goto LAB_00030d98;
    }
  }
  local_c4 = (uint)*(ushort *)((int)param_1 + 0x26);
  local_b4 = (int)param_1 + (uint)*(ushort *)((int)param_1 + 0x22);
  local_c0 = (uint)*(ushort *)(param_1 + 9);
  local_e8[2] = DAT_00031b74;
  local_dc = DAT_00031b74;
  local_3c = 0;
  local_ac = param_1[0xc];
  if (param_2 == (uint *)0x0) {
    local_140 = 0;
  }
  else {
    uVar22 = *param_2;
    local_140 = 0;
    if ((uVar22 & 1) != 0) {
      local_140 = param_2[1];
    }
    if ((uVar22 & 2) != 0) {
      local_e8[2] = param_2[2];
    }
    if ((uVar22 & 0x10) != 0) {
      local_dc = param_2[5];
    }
    if ((uVar22 & 4) != 0) {
      local_3c = param_2[3];
    }
    if ((uVar22 & 8) != 0) {
      local_ac = param_2[4];
    }
  }
  uVar22 = param_1[3];
  if (((uVar22 & 0x2000) != 0) && ((uint)param_1[4] < (uint)local_e8[2])) {
    local_e8[2] = param_1[4];
  }
  if (((uVar22 & 0x4000) != 0) && ((uint)param_1[5] < local_dc)) {
    local_dc = param_1[5];
  }
  if (local_ac == 0) {
    local_ac = *(uint *)(iVar10 + DAT_00031b78);
  }
  local_74 = (int)param_1 + local_c0 * local_c4 + (uint)*(ushort *)((int)param_1 + 0x22);
  uVar17 = param_1[2];
  local_50 = param_5;
  pbVar6 = param_3 + param_4;
  local_a0 = (param_6 & 0xff) >> 7;
  local_9c = (param_6 & 0x1ff) >> 8;
  local_88 = (param_6 & 0x7ff) >> 10;
  local_84 = (param_6 & 0x1fffffff) >> 0x1c;
  local_78 = (uVar22 & 0x1fff) >> 0xc;
  local_a8 = local_ac + 0x100;
  local_8c = (uVar17 & 0x3f) >> 5;
  local_a4 = local_ac + 0x340;
  uVar13 = param_6 & 0x1800000;
  local_90 = (uVar17 & 0x3fffffff) >> 0x1d;
  local_94 = (uVar17 & 0x3ffffff) >> 0x19;
  local_b8 = 0;
  local_80 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_70 = param_3;
  local_6c = pbVar6;
  if (uVar13 != 0x800000) {
    if (uVar13 == 0x1000000) {
      local_7c = 0;
      goto LAB_0003102c;
    }
    if (uVar13 == 0) {
      local_7c = 0;
      if ((uVar17 & 0x1800000) != 0) {
        local_7c = (uVar17 & 0xffffff) >> 0x17;
      }
      goto LAB_0003102c;
    }
LAB_00031018:
    iVar16 = -0x17;
    goto LAB_00030d98;
  }
  local_7c = 1;
LAB_0003102c:
  uVar13 = param_6 & 0x700000;
  if (uVar13 == 0) {
    uVar13 = uVar17 & 0x700000;
  }
  if (uVar13 == 0x200000) {
LAB_00031140:
    uVar9 = 10;
LAB_0003105c:
    local_cc = 0;
    local_b0 = CONCAT11(local_b0._1_1_,uVar9);
    local_c8 = 1;
  }
  else {
    if (uVar13 < 0x200001) {
      if (uVar13 == 0) goto LAB_00031140;
      if (uVar13 != 0x100000) goto LAB_00031018;
      uVar9 = 0xd;
      goto LAB_0003105c;
    }
    if (uVar13 == 0x400000) {
      local_cc = 1;
    }
    else if (uVar13 == 0x500000) {
      local_cc = 2;
    }
    else {
      if (uVar13 != 0x300000) goto LAB_00031018;
      local_cc = 0;
      local_c8 = 2;
      local_b0 = 0xa0d;
    }
  }
  if ((local_5c != 0) && ((param_1[3] & 0x200U) != 0)) {
    iVar16 = -0xd;
LAB_00030d98:
    if (local_2c != *piVar11) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar16);
    }
    return;
  }
  uVar13 = (uint)*(ushort *)(param_1 + 8);
  iVar16 = (param_8 / 3) * 3;
  if ((uVar13 == 0) || ((int)uVar13 < iVar16 / 3)) {
    local_d8 = param_7;
    bVar1 = false;
  }
  else {
    iVar16 = (uVar13 + 1) * 3;
    local_d8 = (int *)(*(code *)**(undefined4 **)(iVar10 + DAT_00031b7c))((uVar13 + 1) * 0xc);
    if (local_d8 == (int *)0x0) {
      iVar16 = -6;
      goto LAB_00030d98;
    }
    bVar1 = true;
  }
  local_d0 = (iVar16 << 1) / 3;
  local_54 = 0;
  if (local_d8 != (int *)0x0) {
    piVar15 = local_d8 + iVar16;
    piVar7 = piVar15 + -(uint)*(ushort *)((int)param_1 + 0x1e);
    if (piVar15 + -(uint)*(ushort *)((int)param_1 + 0x1e) < local_d8 + 2) {
      piVar7 = local_d8 + 2;
    }
    while (piVar15 = piVar15 + -1, piVar7 <= piVar15) {
      *piVar15 = -1;
    }
    if ((param_8 != 0) && (*local_d8 = -1, param_8 != 1)) {
      local_d8[1] = -1;
    }
  }
  uVar20 = (uVar17 | param_6) & 0x10;
  uVar13 = param_1[3];
  if (uVar20 == 0) {
    local_138 = 0;
    if ((uVar13 & 0x10) == 0) {
      if (((uVar22 & 0x100) == 0 && local_140 != 0) && ((*(uint *)(local_140 + 4) & 1) != 0)) {
        local_138 = local_140 + 8;
      }
      iVar21 = 0;
      local_148 = 0;
      local_13c = 0;
    }
    else {
      local_148 = (uint)*(byte *)(param_1 + 6);
      local_13c = local_148;
      if ((uVar13 & 0x20) != 0) {
        local_13c = (uint)*(byte *)(local_a8 + local_148);
      }
      iVar21 = 1;
    }
  }
  else {
    iVar21 = 0;
    local_138 = 0;
    local_13c = 0;
    local_148 = 0;
  }
  if ((uVar13 & 0x40) == 0) {
    local_130 = 0;
    bVar2 = false;
    local_11c = 0;
  }
  else {
    local_130 = (uint)*(byte *)((int)param_1 + 0x1a);
    local_11c = local_130;
    if ((uVar13 & 0x80) != 0) {
      local_11c = (uint)*(byte *)(local_a8 + local_130);
    }
    bVar2 = true;
  }
  local_f8 = pbVar5 + -1;
  local_110 = (byte *)0x0;
  local_114 = (byte *)0x0;
  pbVar19 = pbVar5;
  local_d4 = iVar16;
  do {
    pbVar18 = pbVar6;
    if ((uVar17 & 0x40000) != 0) {
      pbVar18 = pbVar19;
      if (uVar4 == 0) {
        for (; pbVar18 < local_6c; pbVar18 = pbVar18 + 1) {
          if (local_cc == 0) {
            if (((pbVar18 <= local_6c + -local_c8) && (*pbVar18 == (byte)local_b0)) &&
               ((local_c8 == 1 || (pbVar18[1] == local_b0._1_1_)))) break;
          }
          else {
            iVar16 = FUN_000326d8(pbVar18,local_cc,local_6c,&local_c8,0);
            if (iVar16 != 0) break;
          }
        }
      }
      else {
LAB_000313b0:
        if (pbVar18 < local_6c) {
          if (local_cc == 0) {
            if (((pbVar18 <= local_6c + -local_c8) && (*pbVar18 == (byte)local_b0)) &&
               ((local_c8 == 1 || (pbVar18[1] == local_b0._1_1_)))) goto LAB_000313e4;
          }
          else {
            iVar16 = FUN_000326d8(pbVar18,local_cc,local_6c,&local_c8,1);
            if (iVar16 != 0) goto LAB_000313e4;
          }
          do {
            pbVar18 = pbVar18 + 1;
            if (pbVar6 <= pbVar18) break;
          } while ((*pbVar18 & 0xc0) == 0x80);
          goto LAB_000313b0;
        }
      }
    }
LAB_000313e4:
    if (((param_6 | param_1[2]) & 0x4000000) == 0) {
      if (iVar21 == 0) {
        if ((uVar22 & 0x100) == 0) {
          pbVar3 = pbVar19;
          if (local_138 != 0) {
            do {
              pbVar19 = pbVar3;
              if (pbVar18 <= pbVar19) break;
              pbVar3 = pbVar19 + 1;
            } while (((int)(uint)*(byte *)(local_138 + (uint)(*pbVar19 >> 3)) >> (*pbVar19 & 7) & 1U
                     ) == 0);
          }
        }
        else if (local_70 + param_5 < pbVar19) {
          if (uVar4 == 0) {
            for (; pbVar19 < pbVar18; pbVar19 = pbVar19 + 1) {
              if (local_cc == 0) {
                if (((local_70 + local_c8 <= pbVar19) && (pbVar19[-local_c8] == (byte)local_b0)) &&
                   ((local_c8 == 1 || (pbVar19[1 - local_c8] == local_b0._1_1_)))) break;
              }
              else if ((local_70 < pbVar19) &&
                      (iVar16 = FUN_000328c0(pbVar19,local_cc,local_70,&local_c8,0), iVar16 != 0))
              break;
            }
          }
          else {
LAB_00031614:
            if (pbVar19 < pbVar18) {
              if (local_cc == 0) {
                if (((local_70 + local_c8 <= pbVar19) && (pbVar19[-local_c8] == (byte)local_b0)) &&
                   ((local_c8 == 1 || (pbVar19[1 - local_c8] == local_b0._1_1_))))
                goto LAB_00031650;
              }
              else if ((local_70 < pbVar19) &&
                      (iVar16 = FUN_000328c0(pbVar19,local_cc,local_70,&local_c8,1), iVar16 != 0))
              goto LAB_00031650;
              do {
                pbVar19 = pbVar19 + 1;
                if (pbVar18 == pbVar19) break;
              } while ((*pbVar19 & 0xc0) == 0x80);
              goto LAB_00031614;
            }
          }
LAB_00031650:
          if (pbVar19[-1] == 0xd) {
            bVar23 = local_cc != 1;
            if (local_cc - 1U < 2) {
              bVar23 = pbVar18 <= pbVar19;
            }
            if ((!bVar23) && (*pbVar19 == 10)) {
              pbVar19 = pbVar19 + 1;
            }
          }
        }
      }
      else {
        pbVar3 = pbVar19;
        if (local_148 == local_13c) {
          do {
            pbVar19 = pbVar3;
            if (pbVar18 <= pbVar19) break;
            pbVar3 = pbVar19 + 1;
          } while (*pbVar19 != local_148);
        }
        else {
          do {
            pbVar19 = pbVar3;
            if (pbVar18 <= pbVar19) break;
            pbVar3 = pbVar19 + 1;
          } while (local_13c != *pbVar19 && local_148 != *pbVar19);
        }
      }
    }
    if (((param_6 | param_1[2]) & 0x4000000) == 0 && local_5c == 0) {
      iVar16 = 0;
      if (((local_140 != 0) && ((*(uint *)(local_140 + 4) & 2) != 0)) &&
         ((uint)((int)pbVar6 - (int)pbVar19) < *(uint *)(local_140 + 0x28))) goto LAB_0003172c;
      if (((bVar2) && ((int)pbVar6 - (int)pbVar19 < 1000)) &&
         (pbVar18 = pbVar19 + iVar21, local_f8 < pbVar18)) {
        if (local_130 == local_11c) {
          do {
            local_f8 = pbVar18;
            if (pbVar6 <= local_f8) goto LAB_0003172c;
            pbVar18 = local_f8 + 1;
          } while (*local_f8 != local_130);
        }
        else {
          do {
            local_f8 = pbVar18;
            if (pbVar6 <= local_f8) goto LAB_0003172c;
            pbVar18 = local_f8 + 1;
          } while (*local_f8 != local_130 && *local_f8 != local_11c);
        }
      }
    }
    local_e8[1] = 0;
    local_4c = 0;
    local_58 = 0;
    local_bc = 0;
    local_68 = pbVar19;
    local_60 = pbVar19;
    iVar16 = FUN_00021d38(pbVar19,local_74,pbVar19,2,local_e8 + 1,0,0);
    if (local_80 != 0 && local_114 == (byte *)0x0) {
      local_114 = local_60;
      local_110 = pbVar19;
    }
    if (iVar16 == DAT_00031b84) {
      pbVar18 = local_68;
      if (local_68 <= pbVar19) goto LAB_00031b10;
    }
    else {
      if (iVar16 < DAT_00031b84) {
        if (iVar16 == -0x3e4) break;
        bVar23 = iVar16 == DAT_00031b84 + -1;
      }
      else {
        if (iVar16 == -0x3e0) goto LAB_00031b10;
        if (iVar16 < -0x3e0) {
          local_b8 = local_bc;
          pbVar18 = pbVar19;
          goto LAB_00031830;
        }
        bVar23 = iVar16 == 0;
      }
      if (!bVar23) goto LAB_0003172c;
LAB_00031b10:
      local_b8 = 0;
      pbVar3 = pbVar19 + 1;
      pbVar18 = pbVar19 + 1;
      if (uVar4 != 0) {
        do {
          pbVar18 = pbVar3;
          if (pbVar6 <= pbVar18) break;
          pbVar3 = pbVar18 + 1;
        } while ((*pbVar18 & 0xc0) == 0x80);
      }
    }
LAB_00031830:
    if ((uVar17 & 0x40000) != 0) {
      if (local_cc == 0) {
        bVar23 = false;
        if ((pbVar19 <= local_6c + -local_c8) && (*pbVar19 == (byte)local_b0)) {
          if (local_c8 == 1) {
            bVar23 = true;
          }
          else {
            bVar23 = pbVar19[1] == local_b0._1_1_;
          }
        }
      }
      else if (pbVar19 < local_6c) {
        iVar16 = FUN_000326d8(pbVar19,local_cc,local_6c,&local_c8,uVar12);
        bVar23 = false;
        if (iVar16 != 0) {
          bVar23 = true;
        }
      }
      else {
        bVar23 = false;
      }
      if (bVar23) break;
    }
    bVar23 = pbVar6 == pbVar18;
    if (pbVar18 <= pbVar6) {
      bVar23 = uVar20 == 0;
    }
    if (!bVar23) break;
    pbVar19 = pbVar18;
    if (((((pbVar5 < pbVar18) && (pbVar18 < pbVar6 && pbVar18[-1] == 0xd)) && (*pbVar18 == 10)) &&
        ((param_1[3] & 0x800U) == 0)) && ((local_cc - 1U < 2 || (local_c8 == 2)))) {
      pbVar19 = pbVar18 + 1;
    }
    local_38 = 0;
  } while( true );
  iVar16 = 0;
LAB_0003172c:
  piVar7 = local_d8;
  if (iVar16 == DAT_00031b64 || iVar16 == 1) {
    iVar16 = (param_8 / 3) * 6;
    iVar21 = iVar16 / 3;
    if (bVar1) {
      if (0xb < iVar16) {
        memcpy(param_7 + 2,local_d8 + 2,(iVar21 + -2) * 4);
      }
      if (iVar21 < local_58) {
        local_54 = local_54 | 0x10000;
      }
      (*(code *)**(undefined4 **)(iVar10 + DAT_00031b80))(piVar7);
    }
    if (((local_54 & 0x10000) == 0) || (local_58 < iVar21)) {
      iVar16 = local_58 / 2;
    }
    else {
      iVar16 = 0;
    }
    if (param_7 != (int *)0x0 && local_58 / 2 <= (int)(uint)*(ushort *)((int)param_1 + 0x1e)) {
      piVar7 = param_7 + local_58;
      iVar10 = (*(ushort *)((int)param_1 + 0x1e) + 1) * 2;
      if (param_8 < iVar10) {
        iVar10 = param_8;
      }
      for (; piVar7 < param_7 + iVar10; piVar7 = piVar7 + 1) {
        *piVar7 = -1;
      }
    }
    if (param_8 < 2) {
      iVar16 = 0;
    }
    else {
      *param_7 = (int)local_68 - (int)local_70;
      param_7[1] = local_64 - (int)local_70;
    }
    if ((param_2 == (uint *)0x0) || ((*param_2 & 0x20) == 0)) goto LAB_00030d98;
    puVar14 = (undefined4 *)param_2[6];
    uVar8 = local_38;
  }
  else {
    if (bVar1) {
      (*(code *)**(undefined4 **)(iVar10 + DAT_00031b80))(local_d8);
    }
    if (iVar16 != 0 && iVar16 != -0xc) goto LAB_00030d98;
    if (local_110 == (byte *)0x0) {
      iVar16 = -1;
    }
    else {
      if (1 < param_8) {
        *param_7 = (int)local_114 - (int)param_3;
        param_7[1] = param_4;
        if (param_8 != 2) {
          param_7[2] = (int)local_110 - (int)param_3;
        }
      }
      iVar16 = -0xc;
      local_38 = 0;
    }
    if ((param_2 == (uint *)0x0) || ((*param_2 & 0x20) == 0)) goto LAB_00030d98;
    puVar14 = (undefined4 *)param_2[6];
    uVar8 = local_34;
  }
  *puVar14 = uVar8;
  goto LAB_00030d98;
}



/* ===== pcre_fullinfo @ 00031b88 size=636 ===== */

undefined4 pcre_fullinfo(int *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_4 == (uint *)0x0 || param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)0x0;
    if ((*param_2 & 1) != 0) {
      puVar4 = (uint *)param_2[1];
    }
  }
  if (*param_1 != DAT_00031e08) {
    if (*param_1 == DAT_00031e0c) {
      return 0xffffffe3;
    }
    return 0xfffffffc;
  }
  uVar2 = param_1[3];
  if ((uVar2 & 1) == 0) {
    return 0xffffffe4;
  }
  switch(param_3) {
  case 0:
    *param_4 = DAT_00031e10 & param_1[2];
    return param_3;
  case 1:
    uVar2 = param_1[1];
    break;
  case 2:
    uVar2 = (uint)*(ushort *)((int)param_1 + 0x1e);
    break;
  case 3:
    uVar2 = (uint)*(ushort *)(param_1 + 8);
    break;
  case 4:
    if ((uVar2 & 0x10) == 0) {
      if ((uVar2 & 0x100) == 0) {
        uVar2 = 0xfffffffe;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = (uint)*(ushort *)(param_1 + 6);
    }
    break;
  case 5:
    if ((puVar4 != (uint *)0x0) && (puVar1 = puVar4 + 1, puVar4 = (uint *)0x0, (*puVar1 & 1) != 0))
    {
      puVar4 = (uint *)(param_2[1] + 8);
    }
    goto LAB_00031c90;
  case 6:
    if ((uVar2 & 0x40) != 0) {
      uVar2 = (uint)*(ushort *)((int)param_1 + 0x1a);
      break;
    }
    goto LAB_00031d2c;
  case 7:
    uVar2 = (uint)*(ushort *)(param_1 + 9);
    break;
  case 8:
    uVar2 = (uint)*(ushort *)((int)param_1 + 0x26);
    break;
  case 9:
    uVar2 = (int)param_1 + (uint)*(ushort *)((int)param_1 + 0x22);
    break;
  case 10:
    if (puVar4 != (uint *)0x0) {
      puVar4 = (uint *)*puVar4;
    }
LAB_00031c90:
    *param_4 = (uint)puVar4;
    return 0;
  case 0xb:
    uVar2 = *(uint *)(DAT_00031e04 + 0x31ba4 + DAT_00031e14);
    break;
  case 0xc:
    uVar3 = ((uVar2 ^ 0x200) & 0x3ff) >> 9;
    goto LAB_00031cdc;
  case 0xd:
    uVar3 = (uVar2 & 0x7ff) >> 10;
    goto LAB_00031cdc;
  case 0xe:
    uVar3 = (uVar2 & 0xfff) >> 0xb;
    goto LAB_00031cdc;
  case 0xf:
    if ((puVar4 != (uint *)0x0) && ((puVar4[1] & 2) != 0)) {
      uVar2 = puVar4[10];
      break;
    }
LAB_00031d2c:
    uVar2 = 0xffffffff;
    break;
  case 0x10:
    uVar2 = 0;
    if (param_2 != (uint *)0x0) {
      if ((*param_2 & 0x40) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        if (param_2[7] != 0) {
          uVar2 = 1;
        }
      }
    }
    *param_4 = uVar2;
    return 0;
  case 0x11:
    *param_4 = 0;
    return 0;
  case 0x12:
    uVar2 = (uint)*(ushort *)(param_1 + 7);
    break;
  case 0x13:
    uVar3 = 0;
    if ((uVar2 & 0x10) != 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 6);
    }
    goto LAB_00031cdc;
  case 0x14:
    if ((uVar2 & 0x10) == 0) {
      uVar3 = uVar2 >> 7 & 2;
    }
    else {
      uVar3 = 1;
    }
    goto LAB_00031cdc;
  case 0x15:
    uVar3 = 0;
    if ((uVar2 & 0x40) != 0) {
      uVar3 = (uint)*(ushort *)((int)param_1 + 0x1a);
    }
    goto LAB_00031cdc;
  case 0x16:
    uVar3 = (uVar2 & 0x7f) >> 6;
    goto LAB_00031cdc;
  case 0x17:
    if ((uVar2 & 0x2000) == 0) {
      return 0xffffffdf;
    }
    uVar2 = param_1[4];
    break;
  case 0x18:
    if ((uVar2 & 0x4000) == 0) {
      return 0xffffffdf;
    }
    uVar2 = param_1[5];
    break;
  case 0x19:
    uVar3 = (uVar2 & 0xffff) >> 0xf;
LAB_00031cdc:
    *param_4 = uVar3;
    return 0;
  default:
    return 0xfffffffd;
  }
  *param_4 = uVar2;
  return 0;
}



/* ===== pcre_get_stringnumber @ 00031e18 size=244 ===== */

void pcre_get_stringnumber(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  ushort *puVar9;
  int local_30;
  char *local_2c;
  int local_28;
  int local_24;
  
  piVar8 = *(int **)(DAT_00031f0c + 0x31e38 + DAT_00031f10);
  local_24 = *piVar8;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  uVar5 = pcre_fullinfo(param_1,0,8,&local_2c);
  if (uVar5 == 0) {
    if (0 < (int)local_2c) {
      uVar5 = pcre_fullinfo(param_1,0,7,&local_30);
      if ((uVar5 != 0) ||
         (uVar5 = pcre_fullinfo(param_1,0,9,&local_28), iVar4 = local_28, iVar3 = local_30,
         uVar5 != 0)) goto LAB_00031e64;
      pcVar7 = (char *)0x0;
      pcVar1 = local_2c;
      while (local_2c = pcVar1, (int)pcVar7 < (int)local_2c) {
        pcVar1 = (char *)((int)(local_2c + (int)pcVar7) >> 1);
        puVar9 = (ushort *)((int)pcVar1 * iVar3 + iVar4);
        iVar6 = strcmp(param_2,(char *)(puVar9 + 1));
        if (iVar6 == 0) {
          uVar2 = *puVar9;
          uVar5 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
          goto LAB_00031e64;
        }
        if (0 < iVar6) {
          pcVar7 = pcVar1 + 1;
          pcVar1 = local_2c;
        }
      }
    }
    uVar5 = 0xfffffff9;
  }
LAB_00031e64:
  if (local_24 != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}



/* ===== pcre_get_stringtable_entries @ 00031f14 size=384 ===== */

void pcre_get_stringtable_entries(undefined4 param_1,char *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_38;
  int local_34;
  uint uStack_30;
  int local_2c;
  
  piVar4 = *(int **)(DAT_00032094 + 0x31f34 + DAT_00032098);
  local_2c = *piVar4;
  iVar2 = pcre_fullinfo(param_1,0,8,&local_34);
  if (iVar2 == 0) {
    if (0 < local_34) {
      iVar2 = pcre_fullinfo(param_1,0,7,&local_38);
      if ((iVar2 != 0) ||
         (iVar2 = pcre_fullinfo(param_1,0,9,&uStack_30), iVar1 = local_34, iVar2 != 0))
      goto LAB_00031f70;
      iVar6 = 0;
      iVar2 = local_34;
      while (local_34 = iVar2, iVar6 < local_34) {
        iVar2 = local_34 + iVar6 >> 1;
        uVar7 = iVar2 * local_38 + uStack_30;
        iVar3 = strcmp(param_2,(char *)(uVar7 + 2));
        if (iVar3 == 0) {
          uVar5 = uVar7;
          while ((uStack_30 < uVar5 &&
                 (iVar2 = strcmp(param_2,(char *)(uVar5 + (2 - local_38))), iVar2 == 0))) {
            uVar5 = uVar5 - local_38;
          }
          while ((uVar7 < local_38 * (iVar1 + -1) + uStack_30 &&
                 (iVar2 = strcmp(param_2,(char *)(uVar7 + local_38 + 2)), iVar2 == 0))) {
            uVar7 = uVar7 + local_38;
          }
          *param_3 = uVar5;
          *param_4 = uVar7;
          iVar2 = local_38;
          goto LAB_00031f70;
        }
        if (0 < iVar3) {
          iVar6 = iVar2 + 1;
          iVar2 = local_34;
        }
      }
    }
    iVar2 = -7;
  }
LAB_00031f70:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== FUN_0003209c @ 0003209c size=192 ===== */

void FUN_0003209c(int param_1,ushort *param_2,ushort *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  int *piVar4;
  ushort *local_1c;
  ushort *local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0003215c + 0x320bc + DAT_00032160);
  local_14 = *piVar4;
  local_1c = param_2;
  local_18 = param_3;
  if (((*(uint *)(param_1 + 8) & 0x80000) == 0) && ((*(uint *)(param_1 + 0xc) & 0x400) == 0)) {
    uVar1 = pcre_get_stringnumber();
  }
  else {
    uVar2 = pcre_get_stringtable_entries(param_1,param_2,&local_1c,&local_18,param_1);
    uVar1 = uVar2;
    puVar3 = local_1c;
    if (0 < (int)uVar2) {
      while ((uVar1 = (*puVar3 & 0xff) << 8 | (uint)(*puVar3 >> 8), puVar3 <= local_18 &&
             ((param_4 <= (int)uVar1 || (*(int *)(param_3 + uVar1 * 4) < 0))))) {
        puVar3 = (ushort *)((int)puVar3 + uVar2);
      }
    }
  }
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== pcre_copy_substring @ 00032164 size=96 ===== */

size_t pcre_copy_substring(int param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                          )

{
  size_t __n;
  int iVar1;
  
  if (param_4 < param_3 && -1 < param_4) {
    iVar1 = *(int *)(param_2 + param_4 * 8);
    __n = *(int *)(param_2 + (param_4 * 2 + 1) * 4) - iVar1;
    if ((int)__n < param_6) {
      memcpy(param_5,(void *)(param_1 + iVar1),__n);
      *(undefined1 *)((int)param_5 + __n) = 0;
    }
    else {
      __n = 0xfffffffa;
    }
  }
  else {
    __n = 0xfffffff9;
  }
  return __n;
}



/* ===== pcre_copy_named_substring @ 000321c4 size=76 ===== */

void pcre_copy_named_substring
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0003209c(param_1,param_5);
  if (iVar1 < 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pcre_copy_substring_00059f40)(param_2,param_3,param_4);
  return;
}



/* ===== pcre_get_substring_list @ 00032204 size=216 ===== */

undefined4 pcre_get_substring_list(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *__dest;
  int iVar6;
  size_t __n;
  
  iVar1 = 4;
  iVar4 = 0;
  while (iVar4 < param_3 * 2) {
    iVar6 = *(int *)(param_2 + 4 + iVar4 * 4);
    iVar1 = iVar1 + 5;
    iVar5 = *(int *)(param_2 + iVar4 * 4);
    iVar4 = iVar4 + 2;
    if (iVar5 < iVar6) {
      iVar1 = iVar1 + (iVar6 - iVar5);
    }
  }
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(DAT_000322dc + 0x32234 + DAT_000322e0))(iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *param_4 = puVar2;
    iVar1 = 0;
    __dest = puVar2 + param_3 + 1;
    while (iVar1 < param_3 * 2) {
      iVar6 = *(int *)(param_2 + 4 + iVar1 * 4);
      iVar4 = *(int *)(param_2 + iVar1 * 4);
      iVar1 = iVar1 + 2;
      if (iVar4 < iVar6) {
        __n = iVar6 - iVar4;
      }
      else {
        __n = 0;
      }
      pvVar3 = memcpy(__dest,(void *)(param_1 + iVar4),__n);
      *puVar2 = pvVar3;
      __dest = (undefined4 *)((undefined1 *)((int)pvVar3 + __n) + 1);
      *(undefined1 *)((int)pvVar3 + __n) = 0;
      puVar2 = puVar2 + 1;
    }
    *puVar2 = 0;
    return 0;
  }
  return 0xfffffffa;
}



/* ===== pcre_free_substring_list @ 000322e4 size=24 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pcre_free_substring_list(void *__ptr)

{
  (*(code *)**(undefined4 **)(DAT_000322fc + 0x322f4 + DAT_00032300))(__ptr);
  return;
}



/* ===== pcre_get_substring @ 00032304 size=132 ===== */

size_t pcre_get_substring(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  void *__dest;
  size_t __n;
  
  if (param_4 < param_3 && -1 < param_4) {
    __n = *(int *)(param_2 + param_4 * 8 + 4) - *(int *)(param_2 + param_4 * 8);
    __dest = (void *)(*(code *)**(undefined4 **)(DAT_00032388 + 0x32324 + DAT_0003238c))(__n + 1);
    if (__dest == (void *)0x0) {
      __n = 0xfffffffa;
    }
    else {
      memcpy(__dest,(void *)(param_1 + *(int *)(param_2 + param_4 * 8)),__n);
      *(undefined1 *)((int)__dest + __n) = 0;
      *param_5 = __dest;
    }
  }
  else {
    __n = 0xfffffff9;
  }
  return __n;
}



/* ===== pcre_get_named_substring @ 00032390 size=72 ===== */

void pcre_get_named_substring
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0003209c(param_1,param_5);
  if (iVar1 < 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pcre_get_substring_00059f60)(param_2,param_3,param_4);
  return;
}



/* ===== pcre_free_substring @ 000323cc size=24 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pcre_free_substring(void *__ptr)

{
  (*(code *)**(undefined4 **)(DAT_000323e4 + 0x323dc + DAT_000323e8))(__ptr);
  return;
}



/* ===== pcre_jit_stack_alloc @ 000323ec size=8 ===== */

undefined4 pcre_jit_stack_alloc(void)

{
  return 0;
}



/* ===== pcre_jit_stack_free @ 000323f4 size=4 ===== */

void pcre_jit_stack_free(void)

{
  return;
}



/* ===== pcre_assign_jit_stack @ 000323f8 size=4 ===== */

void pcre_assign_jit_stack(void)

{
  return;
}



/* ===== pcre_jit_free_unused_memory @ 000323fc size=4 ===== */

void pcre_jit_free_unused_memory(void)

{
  return;
}



/* ===== pcre_maketables @ 00032400 size=712 ===== */

int pcre_maketables(void)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  void *__s;
  int iVar9;
  int *piVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *__s_00;
  
  iVar9 = DAT_000326c8 + 0x32418;
  iVar3 = (*(code *)**(undefined4 **)(iVar9 + DAT_000326cc))(0x440);
  if (iVar3 != 0) {
    iVar8 = 0;
    do {
      iVar4 = tolower(iVar8);
      *(char *)(iVar3 + iVar8) = (char)iVar4;
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x100);
    iVar8 = 0;
    piVar10 = *(int **)(iVar9 + DAT_000326d0);
    puVar11 = (undefined1 *)(iVar3 + 0x100);
    do {
      if ((*(ushort *)(*piVar10 + iVar8 * 2) & 2) == 0) {
        iVar9 = tolower(iVar8);
        uVar2 = (undefined1)iVar9;
      }
      else {
        iVar9 = toupper(iVar8);
        uVar2 = (undefined1)iVar9;
      }
      iVar8 = iVar8 + 1;
      *puVar11 = uVar2;
      puVar11 = puVar11 + 1;
    } while (iVar8 != 0x100);
    __s = (void *)(iVar3 + 0x200);
    memset(__s,0,0x140);
    uVar6 = 0;
    do {
      iVar9 = uVar6 * 2;
      iVar8 = (int)uVar6 >> 3;
      if ((*(ushort *)(*piVar10 + iVar9) & 8) != 0) {
        *(byte *)((int)__s + iVar8 + 0x40) =
             *(byte *)((int)__s + iVar8 + 0x40) | (byte)(1 << (uVar6 & 7));
      }
      if ((*(ushort *)(*piVar10 + iVar9) & 1) != 0) {
        *(byte *)((int)__s + iVar8 + 0x60) =
             *(byte *)((int)__s + iVar8 + 0x60) | (byte)(1 << (uVar6 & 7));
      }
      if ((*(ushort *)(*piVar10 + iVar9) & 2) != 0) {
        *(byte *)((int)__s + iVar8 + 0x80) =
             *(byte *)((int)__s + iVar8 + 0x80) | (byte)(1 << (uVar6 & 7));
      }
      if ((*(ushort *)(*piVar10 + iVar9) & 0x800) != 0) {
        *(byte *)((int)__s + iVar8 + 0xa0) =
             *(byte *)((int)__s + iVar8 + 0xa0) | (byte)(1 << (uVar6 & 7));
      }
      if (uVar6 == 0x5f) {
        *(byte *)(iVar3 + 0x2ab) = *(byte *)(iVar3 + 0x2ab) | 0x80;
      }
      if ((*(ushort *)(*piVar10 + iVar9) & 0x20) != 0) {
        *(byte *)((int)__s + iVar8) = *(byte *)((int)__s + iVar8) | (byte)(1 << (uVar6 & 7));
      }
      if ((*(ushort *)(*piVar10 + iVar9) & 0x10) != 0) {
        *(byte *)((int)__s + iVar8 + 0x20) =
             *(byte *)((int)__s + iVar8 + 0x20) | (byte)(1 << (uVar6 & 7));
      }
      if ((*(ushort *)(*piVar10 + iVar9) & 0x80) != 0) {
        *(byte *)((int)__s + iVar8 + 0xc0) =
             *(byte *)((int)__s + iVar8 + 0xc0) | (byte)(1 << (uVar6 & 7));
      }
      if ((*(ushort *)(*piVar10 + iVar9) & 0x40) != 0) {
        *(byte *)((int)__s + iVar8 + 0xe0) =
             *(byte *)((int)__s + iVar8 + 0xe0) | (byte)(1 << (uVar6 & 7));
      }
      if ((*(ushort *)(*piVar10 + iVar9) & 0x400) != 0) {
        *(byte *)((int)__s + iVar8 + 0x100) =
             *(byte *)((int)__s + iVar8 + 0x100) | (byte)(1 << (uVar6 & 7));
      }
      if ((*(ushort *)(*piVar10 + iVar9) & 0x200) != 0) {
        *(byte *)((int)__s + iVar8 + 0x120) =
             *(byte *)((int)__s + iVar8 + 0x120) | (byte)(1 << (uVar6 & 7));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x100);
    __s_00 = (char *)(DAT_000326d4 + 0x3265c);
    iVar9 = 0;
    pcVar12 = (char *)(iVar3 + 0x340);
    do {
      uVar1 = *(ushort *)(*piVar10 + iVar9 * 2);
      cVar7 = -(char)((int)((uint)uVar1 << 0x1a) >> 0x1f);
      if ((uVar1 & 4) != 0) {
        cVar7 = cVar7 + '\x02';
      }
      if ((uVar1 & 8) != 0) {
        cVar7 = cVar7 + '\x04';
      }
      uVar6 = (uVar1 & 0xfff) >> 0xb;
      if ((uVar1 & 0x10) != 0) {
        cVar7 = cVar7 + '\b';
      }
      if (iVar9 == 0x5f) {
        uVar6 = 1;
      }
      iVar8 = iVar9 + 1;
      if (uVar6 != 0) {
        cVar7 = cVar7 + '\x10';
      }
      pcVar5 = strchr(__s_00,iVar9);
      if (pcVar5 != (char *)0x0) {
        cVar7 = cVar7 + -0x80;
      }
      *pcVar12 = cVar7;
      iVar9 = iVar8;
      pcVar12 = pcVar12 + 1;
    } while (iVar8 != 0x100);
  }
  return iVar3;
}



/* ===== FUN_000326d8 @ 000326d8 size=488 ===== */

undefined4 FUN_000326d8(byte *param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = *param_1;
  uVar6 = (uint)bVar1;
  if ((param_5 != 0) && (0xbf < uVar6)) {
    uVar5 = (uint)param_1[1];
    if ((bVar1 & 0x20) == 0) {
      uVar6 = (uVar6 & 0x1f) << 6 | uVar5 & 0x3f;
    }
    else {
      uVar4 = (uint)param_1[2];
      if ((bVar1 & 0x10) == 0) {
        uVar4 = (uVar6 & 0xf) << 0xc | uVar4 & 0x3f;
        uVar6 = (uVar5 & 0x3f) << 6;
      }
      else {
        uVar3 = (uint)param_1[3];
        if ((bVar1 & 8) != 0) {
          if ((bVar1 & 4) == 0) {
            uVar6 = (uVar6 & 3) << 0x18 | param_1[4] & 0x3f | (uVar5 & 0x3f) << 0x12 |
                    (uVar4 & 0x3f) << 0xc | (uVar3 & 0x3f) << 6;
          }
          else {
            uVar6 = (uVar6 & 1) << 0x1e | param_1[5] & 0x3f | (uVar5 & 0x3f) << 0x18 |
                    (uVar4 & 0x3f) << 0x12 | (uVar3 & 0x3f) << 0xc | (param_1[4] & 0x3f) << 6;
          }
          goto LAB_00032710;
        }
        uVar6 = (uVar6 & 7) << 0x12 | uVar3 & 0x3f | (uVar5 & 0x3f) << 0xc;
        uVar4 = (uVar4 & 0x3f) << 6;
      }
      uVar6 = uVar6 | uVar4;
    }
  }
LAB_00032710:
  if (param_2 == 2) {
    if (uVar6 == 10) {
LAB_00032858:
      *param_4 = 1;
      return 1;
    }
    if (uVar6 != 0xd) {
      return 0;
    }
    if (param_1 < (byte *)(param_3 + -1)) {
      uVar2 = 2;
      if (param_1[1] != 10) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
    *param_4 = uVar2;
  }
  else {
    if (uVar6 == 0xd) {
      if (param_1 < (byte *)(param_3 + -1)) {
        if (param_1[1] == 10) {
          uVar2 = 2;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      if (uVar6 < 0xe) {
        if (uVar6 < 10) {
          return 0;
        }
        goto LAB_00032858;
      }
      if (uVar6 == 0x85) {
        if (param_5 == 0) {
          uVar2 = 1;
        }
        else {
          uVar2 = 2;
        }
      }
      else {
        if (uVar6 < 0x85) {
          return 0;
        }
        if (1 < uVar6 - 0x2028) {
          return 0;
        }
        uVar2 = 3;
      }
    }
    *param_4 = uVar2;
  }
  return 1;
}



/* ===== FUN_000328c0 @ 000328c0 size=516 ===== */

undefined4 FUN_000328c0(int param_1,int param_2,byte *param_3,undefined4 *param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  pbVar8 = (byte *)(param_1 + -1);
  pbVar2 = pbVar8;
  if (param_5 == 0) {
    uVar3 = (uint)*(byte *)(param_1 + -1);
  }
  else {
    do {
      pbVar8 = pbVar2;
      bVar1 = *pbVar8;
      uVar3 = (uint)bVar1;
      pbVar2 = pbVar8 + -1;
    } while ((uVar3 & 0xc0) == 0x80);
    if (0xbf < uVar3) {
      uVar7 = (uint)pbVar8[1];
      if ((bVar1 & 0x20) == 0) {
        uVar3 = uVar7 & 0x3f | (uVar3 & 0x1f) << 6;
      }
      else {
        uVar6 = (uint)pbVar8[2];
        if ((bVar1 & 0x10) == 0) {
          uVar3 = (uVar3 & 0xf) << 0xc | uVar6 & 0x3f;
          uVar7 = (uVar7 & 0x3f) << 6;
        }
        else {
          uVar5 = (uint)pbVar8[3];
          if ((bVar1 & 8) != 0) {
            if ((bVar1 & 4) == 0) {
              uVar3 = (uVar5 & 0x3f) << 6 |
                      (uVar3 & 3) << 0x18 | pbVar8[4] & 0x3f | (uVar7 & 0x3f) << 0x12 |
                      (uVar6 & 0x3f) << 0xc;
            }
            else {
              uVar3 = (pbVar8[4] & 0x3f) << 6 |
                      (uVar3 & 1) << 0x1e | pbVar8[5] & 0x3f | (uVar7 & 0x3f) << 0x18 |
                      (uVar6 & 0x3f) << 0x12 | (uVar5 & 0x3f) << 0xc;
            }
            goto LAB_00032918;
          }
          uVar7 = (uVar3 & 7) << 0x12 | uVar5 & 0x3f | (uVar7 & 0x3f) << 0xc;
          uVar3 = (uVar6 & 0x3f) << 6;
        }
        uVar3 = uVar3 | uVar7;
      }
    }
  }
LAB_00032918:
  if (param_2 == 2) {
    if (uVar3 != 10) {
      if (uVar3 != 0xd) {
        return 0;
      }
LAB_00032a48:
      *param_4 = 1;
      return 1;
    }
    if (param_3 < pbVar8) {
      uVar4 = 2;
      if (pbVar8[-1] != 0xd) {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 1;
    }
    *param_4 = uVar4;
  }
  else {
    if (uVar3 < 0xe) {
      if (10 < uVar3) goto LAB_00032a48;
      if (uVar3 != 10) {
        return 0;
      }
      if (param_3 < pbVar8) {
        if (pbVar8[-1] == 0xd) {
          uVar4 = 2;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 1;
      }
    }
    else if (uVar3 == 0x85) {
      if (param_5 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      if (uVar3 < 0x85) {
        return 0;
      }
      if (1 < uVar3 - 0x2028) {
        return 0;
      }
      uVar4 = 3;
    }
    *param_4 = uVar4;
  }
  return 1;
}



/* ===== FUN_00032ac4 @ 00032ac4 size=140 ===== */

int FUN_00032ac4(uint param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  iVar7 = DAT_00032b50 + 0x32ad8;
  iVar2 = 0;
  piVar4 = *(int **)(iVar7 + DAT_00032b58);
  do {
    iVar3 = iVar2;
    if (**(int **)(iVar7 + DAT_00032b54) <= iVar3) break;
    iVar6 = *piVar4;
    iVar2 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar6 < (int)param_1);
  pbVar8 = param_2 + iVar3;
  pbVar5 = pbVar8 + -iVar3;
  for (; bVar1 = (byte)param_1, pbVar8 != pbVar5; pbVar8 = pbVar8 + -1) {
    param_1 = param_1 >> 6;
    *pbVar8 = bVar1 & 0x3f | 0x80;
  }
  *param_2 = bVar1 | (byte)*(undefined4 *)(*(int *)(iVar7 + DAT_00032b5c) + iVar3 * 4);
  return iVar3 + 1;
}



/* ===== pcre_refcount @ 00032b60 size=108 ===== */

uint pcre_refcount(int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (*param_1 != DAT_00032bcc) {
    return 0xfffffffc;
  }
  if ((param_1[3] & 1U) == 0) {
    return 0xffffffe4;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (-uVar1 == param_2 || -param_2 < (int)uVar1) {
    uVar1 = uVar1 + param_2;
    if (0xfffe < (int)uVar1) {
      uVar1 = 0xffff;
    }
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  *(short *)(param_1 + 10) = (short)uVar1;
  return uVar1;
}



/* ===== FUN_00032bd0 @ 00032bd0 size=2336 ===== */

void FUN_00032bd0(int param_1,char *param_2,int param_3,uint param_4,int *param_5,int *param_6)

{
  ushort *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int local_58;
  int local_4c;
  ushort *local_48;
  int *local_34;
  byte *local_30;
  int local_2c;
  
  iVar14 = DAT_000334f0 + 0x32bf0;
  piVar5 = *(int **)(iVar14 + DAT_000334f4);
  local_2c = *piVar5;
  uVar6 = param_4 & 0x800;
  uVar7 = (param_4 & 0xfff) >> 0xb;
  iVar8 = *param_6;
  *param_6 = iVar8 + 1;
  if (iVar8 < 0x3e9) {
    iVar8 = 0;
    bVar2 = 0;
    bVar4 = *param_2 + 0x76;
    if (1 < bVar4) {
      bVar4 = *param_2 + 0x7b;
    }
    local_4c = -1;
    if (bVar4 < 2) {
      pbVar11 = (byte *)(param_2 + 5);
    }
    else {
      pbVar11 = (byte *)(param_2 + 3);
    }
LAB_00032c78:
    pbVar12 = pbVar11;
    uVar9 = (uint)*pbVar12;
    switch(uVar9) {
    case 0:
      goto LAB_00032fa4;
    case 1:
      goto LAB_00033004;
    case 2:
      goto LAB_00033004;
    case 3:
      goto LAB_00033118;
    case 4:
      goto LAB_00033004;
    case 5:
      goto LAB_00033004;
    case 6:
      goto LAB_000330e8;
    case 7:
      goto LAB_000330e8;
    case 8:
      goto LAB_000330e8;
    case 9:
      goto LAB_000330e8;
    case 10:
      goto LAB_000330e8;
    case 0xb:
      goto LAB_000330e8;
    case 0xc:
      goto LAB_000330e8;
    case 0xd:
      goto LAB_000330e8;
    case 0xe:
      if (uVar6 == 0) goto LAB_000330e8;
      goto LAB_00033100;
    case 0xf:
      goto LAB_000330e4;
    case 0x10:
LAB_000330e4:
      pbVar12 = pbVar12 + 2;
      goto LAB_000330e8;
    case 0x11:
      goto LAB_000330e8;
    case 0x12:
      goto LAB_000330e8;
    case 0x13:
      goto LAB_000330e8;
    case 0x14:
      goto LAB_000330e8;
    case 0x15:
      goto LAB_000330e8;
    case 0x16:
LAB_000330e8:
      iVar8 = iVar8 + 1;
      pbVar11 = pbVar12 + 1;
      goto LAB_00032c78;
    case 0x17:
      goto LAB_00033004;
    case 0x18:
      goto LAB_00033004;
    case 0x19:
      goto LAB_00033004;
    case 0x1a:
      goto LAB_00033004;
    case 0x1b:
      goto LAB_00033004;
    case 0x1c:
      goto LAB_00033004;
    case 0x1d:
      goto LAB_00033044;
    case 0x1e:
      goto LAB_00033044;
    case 0x1f:
      goto LAB_00033044;
    case 0x20:
      goto LAB_00033044;
    case 0x21:
      break;
    case 0x22:
      break;
    case 0x23:
      goto LAB_00033044;
    case 0x24:
      goto LAB_00033044;
    case 0x25:
      break;
    case 0x26:
      break;
    case 0x27:
      break;
    case 0x28:
      break;
    case 0x29:
      goto LAB_0003309c;
    case 0x2a:
      break;
    case 0x2b:
      goto LAB_00033044;
    case 0x2c:
      break;
    case 0x2d:
      break;
    case 0x2e:
      break;
    case 0x2f:
      break;
    case 0x30:
      goto LAB_00033044;
    case 0x31:
      goto LAB_00033044;
    case 0x32:
      break;
    case 0x33:
      break;
    case 0x34:
      break;
    case 0x35:
      break;
    case 0x36:
      goto LAB_0003309c;
    case 0x37:
      break;
    case 0x38:
      goto LAB_00033044;
    case 0x39:
      break;
    case 0x3a:
      break;
    case 0x3b:
      break;
    case 0x3c:
      break;
    case 0x3d:
      goto LAB_00033044;
    case 0x3e:
      goto LAB_00033044;
    case 0x3f:
      break;
    case 0x40:
      break;
    case 0x41:
      break;
    case 0x42:
      break;
    case 0x43:
      goto LAB_0003309c;
    case 0x44:
      break;
    case 0x45:
      goto LAB_00033044;
    case 0x46:
      break;
    case 0x47:
      break;
    case 0x48:
      break;
    case 0x49:
      break;
    case 0x4a:
      goto LAB_00033044;
    case 0x4b:
      goto LAB_00033044;
    case 0x4c:
      break;
    case 0x4d:
      break;
    case 0x4e:
      break;
    case 0x4f:
      break;
    case 0x50:
LAB_0003309c:
      pbVar11 = pbVar12 + 4;
      iVar8 = iVar8 + ((*(ushort *)(pbVar12 + 1) & 0xff) << 8 |
                      (uint)(*(ushort *)(pbVar12 + 1) >> 8));
      if (uVar6 != 0) {
        uVar9 = (uint)pbVar12[3];
        goto LAB_0003305c;
      }
      goto LAB_00032c78;
    case 0x51:
      break;
    case 0x52:
LAB_00033044:
      iVar8 = iVar8 + 1;
      pbVar11 = pbVar12 + 2;
      if (uVar6 != 0) {
        uVar9 = (uint)pbVar12[1];
        goto LAB_0003305c;
      }
      goto LAB_00032c78;
    case 0x53:
      break;
    case 0x54:
      break;
    case 0x55:
      goto LAB_00033108;
    case 0x56:
      goto LAB_00033108;
    case 0x57:
      goto LAB_0003307c;
    case 0x58:
      goto LAB_0003307c;
    case 0x59:
      goto LAB_00033108;
    case 0x5a:
      goto LAB_00033108;
    case 0x5b:
      goto LAB_00033124;
    case 0x5c:
      goto LAB_00033124;
    case 0x5d:
      iVar8 = iVar8 + ((*(ushort *)(pbVar12 + 1) & 0xff) << 8 |
                      (uint)(*(ushort *)(pbVar12 + 1) >> 8));
      if (pbVar12[3] - 0xf < 2) {
        uVar9 = 6;
      }
      else {
        uVar9 = 4;
      }
      goto LAB_00033094;
    case 0x5e:
      goto LAB_00033108;
    case 0x5f:
LAB_0003307c:
      iVar8 = iVar8 + 1;
      if (pbVar12[1] - 0xf < 2) {
        uVar9 = 4;
      }
      else {
        uVar9 = 2;
      }
      goto LAB_00033094;
    case 0x60:
LAB_00033108:
      bVar4 = pbVar12[1];
LAB_0003310c:
      if (bVar4 - 0xf < 2) {
        pbVar12 = pbVar12 + 2;
      }
      goto LAB_00033118;
    case 0x61:
LAB_00033124:
      bVar4 = pbVar12[3];
      goto LAB_0003310c;
    case 0x62:
      goto switchD_00032c80_caseD_62;
    case 99:
      goto switchD_00032c80_default;
    case 100:
      goto switchD_00032c80_default;
    case 0x65:
      goto switchD_00032c80_default;
    case 0x66:
      goto switchD_00032c80_default;
    case 0x67:
      goto switchD_00032c80_default;
    case 0x68:
      goto switchD_00032c80_default;
    case 0x69:
      goto switchD_00032c80_default;
    case 0x6a:
      goto switchD_00032c80_default;
    case 0x6b:
      goto switchD_00032c80_default;
    case 0x6c:
      goto switchD_00032c80_default;
    case 0x6d:
      goto switchD_00032c80_default;
    case 0x6e:
      goto LAB_0003312c;
    case 0x6f:
      goto LAB_0003312c;
    case 0x70:
LAB_0003312c:
      if (uVar9 == 0x70) {
        uVar9 = (*(ushort *)(pbVar12 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar12 + 1) >> 8);
      }
      else {
        uVar9 = (uint)*(byte *)(*(int *)(iVar14 + DAT_000334f8) + 0x6e);
      }
      pbVar11 = pbVar12 + uVar9;
      uVar9 = *pbVar11 - 0x62 & 0xff;
      if (0xb < uVar9) {
LAB_000331ac:
        iVar8 = iVar8 + 1;
        goto LAB_00032c78;
      }
      uVar9 = 1 << uVar9;
      if ((uVar9 & 0x533) == 0) {
        if ((uVar9 & 0x8c0) != 0) {
          iVar8 = iVar8 + ((*(ushort *)(pbVar11 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar11 + 1) >> 8));
          pbVar11 = pbVar11 + 5;
          goto LAB_00032c78;
        }
        if ((uVar9 & 0x20c) == 0) goto LAB_000331ac;
        iVar8 = iVar8 + 1;
      }
      pbVar11 = pbVar11 + 1;
      goto LAB_00032c78;
    case 0x71:
      goto LAB_00033320;
    case 0x72:
LAB_00033320:
      if ((param_4 & 0x2000000) == 0) {
        pbVar3 = (byte *)FUN_00014644(param_3,uVar7,
                                      *(ushort *)(pbVar12 + 1) << 8 | *(ushort *)(pbVar12 + 1) >> 8)
        ;
        pbVar11 = pbVar3;
        if (pbVar3 == (byte *)0x0) {
LAB_00033274:
          iVar13 = -2;
          goto LAB_00032f14;
        }
        do {
          pbVar11 = pbVar11 + ((*(ushort *)(pbVar11 + 1) & 0xff) << 8 |
                              (uint)(*(ushort *)(pbVar11 + 1) >> 8));
        } while (*pbVar11 == 0x77);
        piVar10 = param_5;
        if (pbVar12 < pbVar11 && pbVar3 < pbVar12) {
LAB_00033390:
          bVar2 = 1;
          local_58 = 0;
        }
        else {
          for (; piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
            if ((byte *)piVar10[1] == pbVar3) goto LAB_00033390;
          }
          local_34 = param_5;
          local_30 = pbVar3;
          local_58 = FUN_00032bd0(param_1,pbVar3,param_3,param_4,&local_34,param_6);
        }
      }
      else {
        local_58 = 0;
      }
      pbVar11 = pbVar12 + 3;
LAB_00033208:
      uVar9 = *pbVar11 - 0x62 & 0xff;
      if (uVar9 < 0xc) {
        uVar9 = 1 << uVar9;
        if ((uVar9 & 0x533) == 0) {
          if ((uVar9 & 0x8c0) == 0) {
            if ((uVar9 & 0x20c) != 0) {
              pbVar11 = pbVar11 + 1;
            }
            goto LAB_00033248;
          }
          puVar1 = (ushort *)(pbVar11 + 1);
          pbVar11 = pbVar11 + 5;
          uVar9 = (*puVar1 & 0xff) << 8 | (uint)(*puVar1 >> 8);
        }
        else {
          pbVar11 = pbVar11 + 1;
          uVar9 = 0;
        }
      }
      else {
LAB_00033248:
        uVar9 = 1;
      }
      iVar8 = uVar9 * local_58 + iVar8;
      goto LAB_00032c78;
    case 0x73:
      goto LAB_000331b4;
    case 0x74:
LAB_000331b4:
      if ((param_4 & 0x2000000) == 0) {
        uVar9 = (*(ushort *)(pbVar12 + 3) & 0xff) << 8 | (uint)(*(ushort *)(pbVar12 + 3) >> 8);
        local_48 = (ushort *)
                   (param_1 +
                   (uint)*(ushort *)(param_1 + 0x24) *
                   ((*(ushort *)(pbVar12 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar12 + 1) >> 8))
                   + (uint)*(ushort *)(param_1 + 0x22));
        local_58 = 0x7fffffff;
        while (bVar15 = uVar9 != 0, uVar9 = uVar9 - 1, bVar15) {
          pbVar3 = (byte *)FUN_00014644(param_3,uVar7,*local_48 << 8 | *local_48 >> 8);
          pbVar11 = pbVar3;
          if (pbVar3 == (byte *)0x0) goto LAB_00033274;
          do {
            pbVar11 = pbVar11 + ((*(ushort *)(pbVar11 + 1) & 0xff) << 8 |
                                (uint)(*(ushort *)(pbVar11 + 1) >> 8));
          } while (*pbVar11 == 0x77);
          piVar10 = param_5;
          if (pbVar12 < pbVar11 && pbVar3 < pbVar12) {
LAB_00033318:
            bVar2 = 1;
            local_58 = 0;
            break;
          }
          for (; piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
            if ((byte *)piVar10[1] == pbVar3) goto LAB_00033318;
          }
          local_34 = param_5;
          local_30 = pbVar3;
          iVar13 = FUN_00032bd0(param_1,pbVar3,param_3,param_4,&local_34,param_6);
          local_48 = (ushort *)((int)local_48 + (uint)*(ushort *)(param_1 + 0x24));
          if (iVar13 <= local_58) {
            local_58 = iVar13;
          }
        }
      }
      else {
        local_58 = 0;
      }
      pbVar11 = pbVar12 + 5;
      goto LAB_00033208;
    case 0x75:
      pbVar3 = (byte *)(param_3 +
                       ((*(ushort *)(pbVar12 + 1) & 0xff) << 8 |
                       (uint)(*(ushort *)(pbVar12 + 1) >> 8)));
      pbVar11 = pbVar3;
      do {
        pbVar11 = pbVar11 + ((*(ushort *)(pbVar11 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar11 + 1) >> 8));
      } while (*pbVar11 == 0x77);
      piVar10 = param_5;
      if (pbVar12 < pbVar11 && pbVar3 < pbVar12) {
LAB_00033450:
        bVar2 = 1;
      }
      else {
        for (; piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
          if ((byte *)piVar10[1] == pbVar3) goto LAB_00033450;
        }
        local_34 = param_5;
        local_30 = pbVar3;
        iVar13 = FUN_00032bd0(param_1,pbVar3,param_3,param_4,&local_34,param_6);
        iVar8 = iVar8 + iVar13;
      }
      goto LAB_00032f9c;
    case 0x76:
      goto LAB_00033004;
    case 0x77:
      goto LAB_00032fa4;
    case 0x78:
      goto LAB_00032fa4;
    case 0x79:
      goto LAB_00032fa4;
    case 0x7a:
      goto LAB_00032fa4;
    case 0x7b:
LAB_00032fa4:
      iVar13 = iVar8;
      if (-1 < local_4c) {
        bVar15 = (bool)(bVar2 ^ 1);
        if (local_4c <= iVar8) {
          bVar15 = false;
        }
        if (!bVar15) {
          iVar13 = local_4c;
        }
      }
      if (uVar9 != 0x77) goto LAB_00032f14;
      iVar8 = 0;
      bVar2 = 0;
      pbVar11 = pbVar12 + 3;
      local_4c = iVar13;
      goto LAB_00032c78;
    case 0x7c:
      goto LAB_00033004;
    case 0x7d:
      goto LAB_00032fec;
    case 0x7e:
      goto LAB_00032fec;
    case 0x7f:
      goto LAB_00032fec;
    case 0x80:
LAB_00032fec:
      do {
        pbVar12 = pbVar12 + ((*(ushort *)(pbVar12 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar12 + 1) >> 8));
      } while (*pbVar12 == 0x77);
      goto LAB_00033004;
    case 0x81:
      goto LAB_00032f54;
    case 0x82:
      goto LAB_00032f54;
    case 0x83:
      goto LAB_00032f54;
    case 0x84:
      goto LAB_00032f54;
    case 0x85:
      goto LAB_00032f54;
    case 0x86:
      goto LAB_00032f54;
    case 0x87:
      goto LAB_00032f30;
    case 0x88:
      goto LAB_00032f54;
    case 0x89:
      goto LAB_00032f54;
    case 0x8a:
      goto LAB_00032f54;
    case 0x8b:
LAB_00032f54:
      iVar13 = FUN_00032bd0(param_1,pbVar12,param_3,param_4,param_5,param_6);
      if (iVar13 < 0) goto LAB_00032f14;
      iVar8 = iVar8 + iVar13;
      do {
        pbVar12 = pbVar12 + ((*(ushort *)(pbVar12 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar12 + 1) >> 8));
      } while (*pbVar12 == 0x77);
LAB_00032f9c:
      pbVar11 = pbVar12 + 3;
      goto LAB_00032c78;
    case 0x8c:
LAB_00032f30:
      uVar9 = (*(ushort *)(pbVar12 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pbVar12 + 1) >> 8);
      pbVar11 = pbVar12 + uVar9;
      if (pbVar12[uVar9] == 0x77) goto LAB_00032f54;
      goto LAB_00032f4c;
    case 0x8d:
      goto LAB_00033004;
    case 0x8e:
      goto LAB_00033004;
    case 0x8f:
      goto LAB_00033004;
    case 0x90:
      goto LAB_00033004;
    case 0x91:
LAB_00033004:
      iVar13 = *(int *)(iVar14 + DAT_000334f8);
      uVar9 = (uint)*pbVar12;
LAB_00033010:
      uVar9 = (uint)*(byte *)(iVar13 + uVar9);
LAB_00033094:
      pbVar11 = pbVar12 + uVar9;
      goto LAB_00032c78;
    case 0x92:
      goto LAB_00033018;
    case 0x93:
      goto LAB_00033018;
    case 0x94:
      goto LAB_00033018;
    case 0x95:
      goto LAB_000334c8;
    case 0x96:
      goto LAB_00033118;
    case 0x97:
      goto LAB_000334c8;
    case 0x98:
      goto LAB_00033118;
    case 0x99:
      goto LAB_000334c8;
    case 0x9a:
      goto LAB_00033118;
    case 0x9b:
LAB_000334c8:
      uVar9 = (uint)*(byte *)(*(int *)(iVar14 + DAT_000334f8) + uVar9) + (uint)pbVar12[1];
      goto LAB_00033094;
    case 0x9c:
      goto LAB_00033118;
    case 0x9d:
      goto LAB_00033118;
    case 0x9e:
      goto LAB_00033100;
    case 0x9f:
      goto LAB_00033100;
    case 0xa0:
LAB_00033118:
      iVar13 = *(int *)(iVar14 + DAT_000334f8);
      goto LAB_00033010;
    case 0xa1:
LAB_00033018:
      pbVar11 = pbVar12 + *(byte *)(*(int *)(iVar14 + DAT_000334f8) + uVar9);
      do {
        pbVar11 = pbVar11 + ((*(ushort *)(pbVar11 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar11 + 1) >> 8));
      } while (*pbVar11 == 0x77);
LAB_00032f4c:
      pbVar11 = pbVar11 + 3;
      goto LAB_00032c78;
    default:
      goto switchD_00032c80_default;
    }
    pbVar11 = pbVar12 + *(byte *)(*(int *)(iVar14 + DAT_000334f8) + uVar9);
    if (uVar6 != 0) {
      uVar9 = (uint)pbVar11[-1];
LAB_0003305c:
      if (0xbf < uVar9) {
        pbVar11 = pbVar11 + *(byte *)(*(int *)(iVar14 + DAT_000334fc) + (uVar9 & 0x3f));
      }
    }
    goto LAB_00032c78;
  }
LAB_00033100:
  iVar13 = -1;
LAB_00032f14:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar13);
switchD_00032c80_caseD_62:
switchD_00032c80_default:
  iVar13 = -3;
  goto LAB_00032f14;
}



/* ===== FUN_00033500 @ 00033500 size=88 ===== */

void FUN_00033500(int param_1,int param_2,int param_3,int *param_4)

{
  undefined1 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  pbVar2 = (byte *)(param_1 + -1);
  do {
    pbVar2 = pbVar2 + 1;
    iVar4 = *param_4 + iVar3;
    iVar3 = iVar3 + 1;
    *pbVar2 = ~*(byte *)(iVar4 + param_2) | *pbVar2;
  } while (iVar3 != param_3);
  if (iVar3 == 0x20) {
    return;
  }
  puVar1 = (undefined1 *)(param_1 + 0x17);
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xff;
  } while ((undefined1 *)(param_1 + 0x1f) != puVar1);
  return;
}



/* ===== FUN_00033558 @ 00033558 size=568 ===== */

void FUN_00033558(int param_1,byte *param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *local_24;
  int iStack_20;
  int local_1c;
  
  iVar8 = DAT_00033790 + 0x33578;
  piVar4 = *(int **)(iVar8 + DAT_00033794);
  local_1c = *piVar4;
  pbVar5 = param_2 + 1;
  bVar3 = *param_2;
  uVar1 = (uint)bVar3;
  *(byte *)(param_1 + (uint)(bVar3 >> 3)) =
       *(byte *)(param_1 + (uint)(bVar3 >> 3)) | (byte)(1 << (uVar1 & 7));
  if (uVar1 < 0x80) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 & 1;
  }
  local_24 = param_2;
  iStack_20 = param_3;
  if (param_5 == 0) {
    if ((param_3 == 0) || ((*(byte *)(*(int *)(param_4 + 0xc) + uVar1) & 2) == 0))
    goto LAB_0003363c;
    bVar3 = *(byte *)(*(int *)(param_4 + 4) + uVar1);
    uVar1 = (uint)(bVar3 >> 3);
    bVar3 = *(byte *)(param_1 + uVar1) | (byte)(1 << (bVar3 & 7));
  }
  else {
    bVar3 = *param_2;
    uVar1 = (uint)bVar3;
    if (0xbf < uVar1) {
      uVar2 = (uint)param_2[1];
      if ((bVar3 & 0x20) == 0) {
        pbVar5 = param_2 + 2;
        uVar1 = uVar2 & 0x3f | (uVar1 & 0x1f) << 6;
      }
      else {
        uVar7 = (uint)param_2[2];
        if ((bVar3 & 0x10) == 0) {
          pbVar5 = param_2 + 3;
          uVar1 = (uVar2 & 0x3f) << 6 | (uVar1 & 0xf) << 0xc | uVar7 & 0x3f;
        }
        else {
          uVar6 = (uint)param_2[3];
          if ((bVar3 & 8) == 0) {
            pbVar5 = param_2 + 4;
            uVar1 = (uVar7 & 0x3f) << 6 | (uVar1 & 7) << 0x12 | uVar6 & 0x3f | (uVar2 & 0x3f) << 0xc
            ;
          }
          else if ((bVar3 & 4) == 0) {
            uVar1 = (uVar6 & 0x3f) << 6 |
                    (uVar1 & 3) << 0x18 | param_2[4] & 0x3f | (uVar2 & 0x3f) << 0x12 |
                    (uVar7 & 0x3f) << 0xc;
            pbVar5 = param_2 + 5;
          }
          else {
            pbVar5 = param_2 + 6;
            uVar1 = (param_2[4] & 0x3f) << 6 |
                    (uVar1 & 1) << 0x1e | param_2[5] & 0x3f | (uVar2 & 0x3f) << 0x18 |
                    (uVar7 & 0x3f) << 0x12 | (uVar6 & 0x3f) << 0xc;
          }
        }
      }
    }
    if (param_3 == 0) goto LAB_0003363c;
    iVar8 = *(int *)(iVar8 + DAT_000337a0) +
            (uint)*(ushort *)
                   (*(int *)(iVar8 + DAT_00033798) +
                   ((uVar1 & 0x7f) +
                   (uint)*(byte *)(*(int *)(iVar8 + DAT_0003379c) + ((int)uVar1 >> 7)) * 0x80) * 2)
            * 8;
    FUN_00032ac4(uVar1 + *(int *)(iVar8 + 4),&local_24,iVar8,uVar1,param_1);
    uVar1 = (uint)local_24 >> 3 & 0x1f;
    bVar3 = *(byte *)(param_1 + uVar1) | (byte)(1 << ((uint)local_24 & 7));
  }
  *(byte *)(param_1 + uVar1) = bVar3;
LAB_0003363c:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar5);
}



/* ===== FUN_000337a4 @ 000337a4 size=204 ===== */

void FUN_000337a4(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  byte local_2c [8];
  int local_24;
  
  piVar4 = *(int **)(DAT_00033870 + 0x337c4 + DAT_00033874);
  iVar1 = 0;
  local_24 = *piVar4;
  pbVar2 = (byte *)(param_1 + -1);
  do {
    pbVar2 = pbVar2 + 1;
    iVar5 = *param_4 + iVar1;
    iVar1 = iVar1 + 1;
    *pbVar2 = *(byte *)(iVar5 + param_2) | *pbVar2;
  } while (iVar1 != param_3);
  if (iVar1 != 0x20) {
    uVar3 = 0x80;
    do {
      if (((int)(uint)*(byte *)(*param_4 + (uVar3 >> 3)) >> (uVar3 & 7) & 1U) != 0) {
        FUN_00032ac4(uVar3,local_2c);
        *(byte *)(param_1 + (uint)(local_2c[0] >> 3)) =
             *(byte *)(param_1 + (uint)(local_2c[0] >> 3)) | (byte)(1 << (local_2c[0] & 7));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x100);
  }
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00033878 @ 00033878 size=2240 ===== */

void FUN_00033878(char *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte bVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined4 unaff_r8;
  int iVar12;
  byte local_34 [8];
  int local_2c;
  
  iVar12 = DAT_00034138 + 0x33898;
  if (param_3 != 0) {
    unaff_r8 = 0x10;
  }
  piVar7 = *(int **)(iVar12 + DAT_0003413c);
  if (param_3 == 0) {
    unaff_r8 = 0x20;
  }
  local_2c = *piVar7;
  uVar8 = 1;
LAB_000338bc:
  bVar6 = *param_1 + 0x76;
  if (1 < bVar6) {
    bVar6 = *param_1 + 0x7b;
  }
  if (bVar6 < 2) {
    pbVar10 = (byte *)(param_1 + 5);
  }
  else {
    pbVar10 = (byte *)(param_1 + 3);
  }
LAB_000338e4:
  switch(*pbVar10) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    goto LAB_00034110;
  case 5:
    goto LAB_00034110;
  case 6:
    goto LAB_00033e1c;
  case 7:
    uVar4 = 0x40;
    goto LAB_00033e40;
  case 8:
    uVar4 = 0;
    goto LAB_00033e28;
  case 9:
    uVar4 = 0;
    goto LAB_00033e40;
  case 10:
    uVar4 = 0xa0;
    goto LAB_00033e28;
  case 0xb:
    uVar4 = 0xa0;
LAB_00033e40:
    FUN_000337a4(param_2,uVar4,unaff_r8,param_4 + 8);
    goto LAB_00033bd0;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    if (pbVar10[1] == 9) {
      puVar11 = (uint *)(*(int *)(iVar12 + DAT_00034140) + (uint)pbVar10[2] * 4);
      goto LAB_00033bc0;
    }
    break;
  case 0x11:
    goto LAB_00033de4;
  case 0x12:
    break;
  case 0x13:
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 2;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
    if (param_3 != 0) {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 4;
      bVar6 = *(byte *)(param_2 + 0x1c) | 0xe;
      goto LAB_00033ddc;
    }
    *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) | 1;
    goto LAB_00033bd0;
  case 0x14:
    break;
  case 0x15:
LAB_00033de4:
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 0x3c;
    if (param_3 == 0) {
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x20;
    }
    else {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 4;
      bVar6 = *(byte *)(param_2 + 0x1c) | 4;
LAB_00033ddc:
      *(byte *)(param_2 + 0x1c) = bVar6;
    }
    goto LAB_00033bd0;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    goto LAB_00033d68;
  case 0x1e:
    goto LAB_00033d88;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    goto LAB_00033d0c;
  case 0x22:
    goto LAB_00033d0c;
  case 0x23:
    goto LAB_00033d68;
  case 0x24:
    goto LAB_00033d68;
  case 0x25:
    goto LAB_00033d0c;
  case 0x26:
    goto LAB_00033d0c;
  case 0x27:
    goto LAB_00033d40;
  case 0x28:
    goto LAB_00033d40;
  case 0x29:
    pbVar10 = pbVar10 + 2;
    goto LAB_00033d68;
  case 0x2a:
    goto LAB_00033d0c;
  case 0x2b:
LAB_00033d68:
    uVar4 = 0;
LAB_00033d78:
    FUN_00033558(param_2,pbVar10 + 1,uVar4,param_4,param_3);
    goto LAB_00033bd0;
  case 0x2c:
LAB_00033d0c:
    uVar4 = 0;
    pbVar10 = pbVar10 + 1;
LAB_00033d1c:
    pbVar10 = (byte *)FUN_00033558(param_2,pbVar10,uVar4,param_4,param_3);
    goto LAB_000338e4;
  case 0x2d:
LAB_00033d40:
    uVar4 = 0;
LAB_00033d4c:
    pbVar10 = pbVar10 + 3;
    goto LAB_00033d1c;
  case 0x2e:
    goto LAB_00033d2c;
  case 0x2f:
    goto LAB_00033d2c;
  case 0x30:
    goto LAB_00033d88;
  case 0x31:
    goto LAB_00033d88;
  case 0x32:
    goto LAB_00033d2c;
  case 0x33:
    goto LAB_00033d2c;
  case 0x34:
    goto LAB_00033d54;
  case 0x35:
    goto LAB_00033d54;
  case 0x36:
    pbVar10 = pbVar10 + 2;
    goto LAB_00033d88;
  case 0x37:
    goto LAB_00033d2c;
  case 0x38:
LAB_00033d88:
    uVar4 = 1;
    goto LAB_00033d78;
  case 0x39:
LAB_00033d2c:
    uVar4 = 1;
    pbVar10 = pbVar10 + 1;
    goto LAB_00033d1c;
  case 0x3a:
LAB_00033d54:
    uVar4 = 1;
    goto LAB_00033d4c;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    break;
  case 0x3e:
    break;
  case 0x3f:
    break;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x45:
    break;
  case 0x46:
    break;
  case 0x47:
    break;
  case 0x48:
    break;
  case 0x49:
    break;
  case 0x4a:
    break;
  case 0x4b:
    break;
  case 0x4c:
    break;
  case 0x4d:
    break;
  case 0x4e:
    break;
  case 0x4f:
    break;
  case 0x50:
    break;
  case 0x51:
    break;
  case 0x52:
    break;
  case 0x53:
    break;
  case 0x54:
    break;
  case 0x55:
    goto LAB_00033e90;
  case 0x56:
    goto LAB_00033e90;
  case 0x57:
    goto LAB_00034110;
  case 0x58:
    goto LAB_00034110;
  case 0x59:
    goto LAB_00033e90;
  case 0x5a:
    goto LAB_00033e90;
  case 0x5b:
    goto LAB_00033e8c;
  case 0x5c:
    goto LAB_00033e8c;
  case 0x5d:
    goto LAB_00033c7c;
  case 0x5e:
    goto LAB_00033e90;
  case 0x5f:
    goto LAB_00034110;
  case 0x60:
    goto LAB_00033e90;
  case 0x61:
LAB_00033e8c:
    pbVar10 = pbVar10 + 2;
LAB_00033e90:
    switch(pbVar10[1]) {
    case 6:
      uVar4 = 0x40;
      goto LAB_00033f74;
    case 7:
      uVar4 = 0x40;
      goto LAB_00033f8c;
    case 8:
      uVar4 = 0;
      goto LAB_00033f74;
    case 9:
      uVar4 = 0;
      goto LAB_00033f8c;
    case 10:
      uVar4 = 0xa0;
LAB_00033f74:
      FUN_00033500(param_2,uVar4,unaff_r8,param_4 + 8);
LAB_00033f28:
      pbVar10 = pbVar10 + 2;
      goto LAB_000338e4;
    case 0xb:
      uVar4 = 0xa0;
LAB_00033f8c:
      FUN_000337a4(param_2,uVar4,unaff_r8,param_4 + 8);
      goto LAB_00033f28;
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
      goto LAB_00033f30;
    case 0x12:
      break;
    case 0x13:
      *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 2;
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
      if (param_3 != 0) {
        *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 4;
        bVar6 = *(byte *)(param_2 + 0x1c) | 0xe;
        goto LAB_00033f24;
      }
      *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) | 1;
      goto LAB_00033f28;
    case 0x14:
      break;
    case 0x15:
LAB_00033f30:
      *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 0x3c;
      if (param_3 == 0) {
        *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x20;
      }
      else {
        *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 4;
        bVar6 = *(byte *)(param_2 + 0x1c) | 4;
LAB_00033f24:
        *(byte *)(param_2 + 0x1c) = bVar6;
      }
      goto LAB_00033f28;
    }
    break;
  case 0x62:
  default:
switchD_000338ec_default:
    uVar2 = 3;
    goto LAB_00033b80;
  case 99:
    goto switchD_000338ec_default;
  case 100:
    goto switchD_000338ec_default;
  case 0x65:
    goto switchD_000338ec_default;
  case 0x66:
    goto switchD_000338ec_default;
  case 0x67:
    goto switchD_000338ec_default;
  case 0x68:
    goto switchD_000338ec_default;
  case 0x69:
    goto switchD_000338ec_default;
  case 0x6a:
    goto switchD_000338ec_default;
  case 0x6b:
    goto switchD_000338ec_default;
  case 0x6c:
    goto switchD_000338ec_default;
  case 0x6d:
    goto switchD_000338ec_default;
  case 0x6e:
    goto LAB_00034014;
  case 0x6f:
LAB_00033ff0:
    if (param_3 != 0) {
      *(byte *)(param_2 + 0x18) =
           ~((byte)~(byte)(((uint)*(byte *)(param_2 + 0x18) << 0x1c) >> 0x18) >> 4);
      *(undefined4 *)(param_2 + 0x19) = 0xffffffff;
      *(undefined4 *)(param_2 + 0x1c) = 0xffffffff;
    }
LAB_00034014:
    if (*pbVar10 == 0x70) {
      pbVar3 = (byte *)(pbVar10[3] & 2);
      if ((pbVar10[3] & 2) != 0) {
        pbVar3 = pbVar10 + 4;
      }
      pbVar10 = pbVar10 + ((*(ushort *)(pbVar10 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar10 + 1) >> 8));
    }
    else {
      pbVar3 = pbVar10 + 1;
      pbVar10 = pbVar10 + 0x21;
    }
    if (pbVar3 != (byte *)0x0) {
      pbVar9 = (byte *)(param_2 + -1);
      pbVar5 = pbVar3 + -1;
      if (param_3 == 0) {
        do {
          pbVar9 = pbVar9 + 1;
          pbVar5 = pbVar5 + 1;
          *pbVar9 = *pbVar9 | *pbVar5;
        } while ((byte *)(param_2 + 0x1f) != pbVar9);
      }
      else {
        do {
          pbVar9 = pbVar9 + 1;
          pbVar5 = pbVar5 + 1;
          *pbVar9 = *pbVar9 | *pbVar5;
        } while ((byte *)(param_2 + 0xf) != pbVar9);
        uVar2 = 0x80;
        do {
          if (((int)(uint)pbVar3[uVar2 >> 3] >> (uVar2 & 7) & 1U) != 0) {
            uVar1 = uVar2 & 0x1ff;
            uVar2 = (uVar2 & 0xc0) + 0x3f;
            *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | (byte)(1 << (uVar1 >> 6));
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 0x100);
      }
    }
    uVar2 = *pbVar10 - 0x62 & 0xff;
    if (0xb < uVar2) goto LAB_00033bd0;
    uVar2 = 1 << uVar2;
    if ((uVar2 & 0x533) == 0) {
      if (((uVar2 & 0x8c0) == 0) || (*(short *)(pbVar10 + 1) != 0)) goto LAB_00033bd0;
      pbVar10 = pbVar10 + 5;
    }
    else {
LAB_00034110:
      pbVar10 = pbVar10 + 1;
    }
    goto LAB_000338e4;
  case 0x70:
    bVar6 = pbVar10[3];
    if ((bVar6 & 4) == 0) {
      uVar2 = bVar6 & 4;
      if ((bVar6 & 3) != 1) goto LAB_00033ff0;
      goto LAB_00033b80;
    }
    break;
  case 0x71:
    break;
  case 0x72:
    break;
  case 0x73:
    break;
  case 0x74:
    break;
  case 0x75:
    break;
  case 0x76:
    goto LAB_00033c84;
  case 0x77:
    uVar8 = 2;
    goto LAB_00033bd0;
  case 0x78:
    goto LAB_00033b7c;
  case 0x79:
    goto LAB_00033b7c;
  case 0x7a:
    goto LAB_00033b7c;
  case 0x7b:
LAB_00033b7c:
    uVar2 = 2;
    goto LAB_00033b80;
  case 0x7c:
    break;
  case 0x7d:
    goto LAB_00033c38;
  case 0x7e:
    goto LAB_00033c8c;
  case 0x7f:
    goto LAB_00033c8c;
  case 0x80:
LAB_00033c8c:
    do {
      pbVar10 = pbVar10 + ((*(ushort *)(pbVar10 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar10 + 1) >> 8));
    } while (*pbVar10 == 0x77);
    goto LAB_00033c7c;
  case 0x81:
    goto LAB_00033c38;
  case 0x82:
    goto LAB_00033c38;
  case 0x83:
    goto LAB_00033c38;
  case 0x84:
    goto LAB_00033c38;
  case 0x85:
    goto LAB_00033c38;
  case 0x86:
    goto LAB_00033c38;
  case 0x87:
    break;
  case 0x88:
    goto LAB_00033c38;
  case 0x89:
    goto LAB_00033c38;
  case 0x8a:
    goto LAB_00033c38;
  case 0x8b:
LAB_00033c38:
    uVar2 = FUN_00033878(pbVar10,param_2,param_3,param_4);
    if (uVar2 == 3 || uVar2 == 0) goto LAB_00033b80;
    if (uVar2 == 1) goto LAB_00033bd0;
    do {
      pbVar10 = pbVar10 + ((*(ushort *)(pbVar10 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar10 + 1) >> 8));
    } while (*pbVar10 == 0x77);
LAB_00033c7c:
    pbVar10 = pbVar10 + 3;
    goto LAB_000338e4;
  case 0x8c:
    break;
  case 0x8d:
    break;
  case 0x8e:
    break;
  case 0x8f:
    break;
  case 0x90:
    break;
  case 0x91:
    break;
  case 0x92:
    goto LAB_00033ca8;
  case 0x93:
    goto LAB_00033ca8;
  case 0x94:
LAB_00033ca8:
    pbVar10 = pbVar10 + 1;
    uVar2 = FUN_00033878(pbVar10,param_2,param_3,param_4);
    if (uVar2 != 3 && uVar2 != 0) {
      do {
        pbVar10 = pbVar10 + ((*(ushort *)(pbVar10 + 1) & 0xff) << 8 |
                            (uint)(*(ushort *)(pbVar10 + 1) >> 8));
      } while (*pbVar10 == 0x77);
      goto LAB_00033c7c;
    }
    goto LAB_00033b80;
  case 0x95:
    break;
  case 0x96:
    break;
  case 0x97:
    break;
  case 0x98:
    break;
  case 0x99:
    break;
  case 0x9a:
    break;
  case 0x9b:
    break;
  case 0x9c:
    break;
  case 0x9d:
    break;
  case 0x9e:
    break;
  case 0x9f:
    break;
  case 0xa0:
    break;
  case 0xa1:
    pbVar10 = pbVar10 + 1;
    do {
      pbVar10 = pbVar10 + ((*(ushort *)(pbVar10 + 1) & 0xff) << 8 |
                          (uint)(*(ushort *)(pbVar10 + 1) >> 8));
    } while (*pbVar10 == 0x77);
    goto LAB_00033c7c;
  }
  uVar2 = 0;
  goto LAB_00033b80;
LAB_00033c84:
  pbVar10 = pbVar10 + 6;
  goto LAB_000338e4;
LAB_00033bc0:
  uVar2 = *puVar11;
  if (uVar2 != 0xffffffff) {
    if (param_3 == 0) {
      if (uVar2 < 0x100) goto LAB_00033c0c;
      *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 0x80;
      puVar11 = puVar11 + 1;
    }
    else {
      FUN_00032ac4(uVar2,local_34);
      uVar2 = (uint)local_34[0];
LAB_00033c0c:
      *(byte *)(param_2 + (uVar2 >> 3)) =
           *(byte *)(param_2 + (uVar2 >> 3)) | (byte)(1 << (uVar2 & 7));
      puVar11 = puVar11 + 1;
    }
    goto LAB_00033bc0;
  }
LAB_00033bd0:
  param_1 = param_1 + ((*(ushort *)(param_1 + 1) & 0xff) << 8 |
                      (uint)(*(ushort *)(param_1 + 1) >> 8));
  uVar2 = uVar8;
  if (*param_1 != 'w') {
LAB_00033b80:
    if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    return;
  }
  goto LAB_000338bc;
LAB_00033e1c:
  uVar4 = 0x40;
LAB_00033e28:
  FUN_00033500(param_2,uVar4,unaff_r8,param_4 + 8);
  goto LAB_00033bd0;
}



/* ===== pcre_study @ 00034144 size=620 ===== */

void pcre_study(int *param_1,uint param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_4c [10];
  
  iVar7 = DAT_000343b0 + 0x34164;
  piVar6 = *(int **)(iVar7 + DAT_000343b4);
  local_4c[8] = *piVar6;
  puVar5 = (undefined4 *)0x0;
  local_e4 = 0;
  *param_3 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != DAT_000343b8)) {
    iVar7 = DAT_000343bc + 0x3419c;
  }
  else if ((param_1[3] & 1U) == 0) {
    iVar7 = DAT_000343c0 + 0x341cc;
  }
  else {
    if ((param_2 & 0xfffffff0) != 0) {
      iVar7 = DAT_000343c4 + 0x341e0;
LAB_000341dc:
      *param_3 = iVar7;
      goto LAB_000341a0;
    }
    iVar8 = (int)param_1 +
            (uint)*(ushort *)(param_1 + 9) * (uint)*(ushort *)((int)param_1 + 0x26) +
            (uint)*(ushort *)((int)param_1 + 0x22);
    bVar1 = false;
    if ((param_1[2] & 0x10U) == 0 && (param_1[3] & 0x110U) == 0) {
      local_e0 = param_1[0xc];
      if (local_e0 == 0) {
        pcre_fullinfo(param_1,0,0xb,&local_e0);
      }
      local_4c[1] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_4c[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_4c[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_dc = local_e0;
      local_d8 = local_e0 + 0x100;
      local_d4 = local_e0 + 0x200;
      local_d0 = local_e0 + 0x340;
      local_4c[0] = 0;
      local_4c[4] = 0;
      local_4c[6] = 0;
      local_4c[5] = local_4c[1];
      local_4c[7] = local_4c[1];
      iVar2 = FUN_00033878(iVar8,local_4c,(param_1[2] & 0xfffU) >> 0xb,&local_dc);
      bVar1 = iVar2 == 1;
      if (iVar2 == 3) {
        iVar7 = DAT_000343c8 + 0x3428c;
        goto LAB_00034198;
      }
    }
    iVar8 = FUN_00032bd0(param_1,iVar8,iVar8,param_1[2],0,&local_e4);
    if (iVar8 == -3) {
      iVar7 = DAT_000343d0 + 0x342dc;
    }
    else {
      if (iVar8 != -2) {
        bVar4 = bVar1;
        if (0 < iVar8) {
          bVar4 = true;
        }
        if ((!bVar4) && (puVar5 = (undefined4 *)0x0, (param_2 & 8) == 0)) goto LAB_000341a0;
        puVar5 = (undefined4 *)(*(code *)**(undefined4 **)(iVar7 + DAT_000343d4))(0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 1;
          puVar5[1] = puVar5 + 8;
          puVar5[8] = 0x2c;
          puVar5[9] = 0;
          if (bVar1) {
            puVar5[9] = 1;
            piVar9 = local_4c;
            piVar3 = puVar5 + 10;
            do {
              iVar7 = *piVar9;
              iVar2 = piVar9[1];
              piVar9 = piVar9 + 2;
              *piVar3 = iVar7;
              piVar3[1] = iVar2;
              piVar3 = piVar3 + 2;
            } while (piVar9 != local_4c + 8);
          }
          else {
            puVar5[10] = 0;
            puVar5[0xb] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            puVar5[0xc] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            puVar5[0xd] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            puVar5[0xe] = 0;
            puVar5[0xf] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            puVar5[0x10] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            puVar5[0x11] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          }
          if (iVar8 < 1) {
            puVar5[0x12] = 0;
          }
          else {
            puVar5[0x12] = iVar8;
            puVar5[9] = puVar5[9] | 2;
          }
          goto LAB_000341a0;
        }
        iVar7 = DAT_000343d8 + 0x3431c;
        goto LAB_000341dc;
      }
      iVar7 = DAT_000343cc + 0x342d0;
    }
  }
LAB_00034198:
  *param_3 = iVar7;
  puVar5 = (undefined4 *)0x0;
LAB_000341a0:
  if (local_4c[8] != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar5);
  }
  return;
}



/* ===== pcre_free_study @ 000343dc size=32 ===== */

void pcre_free_study(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)**(undefined4 **)(DAT_000343fc + 0x343ec + DAT_00034400))();
  return;
}



/* ===== FUN_00034404 @ 00034404 size=872 ===== */

byte * FUN_00034404(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  pbVar4 = param_1;
  pbVar5 = param_1;
  if (param_2 < 0) {
    do {
      pbVar3 = pbVar4;
      pbVar4 = pbVar3 + 1;
    } while (*pbVar3 != 0);
    param_2 = (int)pbVar3 - (int)param_1;
  }
  do {
    iVar8 = param_2 + -1;
    if (param_2 < 1) {
      return (byte *)0x0;
    }
    bVar1 = *pbVar5;
    uVar7 = (uint)bVar1;
    param_2 = iVar8;
    if ((bVar1 & 0x80) == 0) goto LAB_00034760;
    if (uVar7 < 0xc0) {
      *param_3 = (int)pbVar5 - (int)param_1;
      return (byte *)0x14;
    }
    if (0xfd < uVar7) {
      *param_3 = (int)pbVar5 - (int)param_1;
      return &DAT_00000015;
    }
    uVar6 = (uint)*(byte *)(*(int *)(DAT_0003476c + 0x34418 + DAT_00034770) + (uVar7 & 0x3f));
    if (iVar8 < (int)uVar6) {
      *param_3 = (int)pbVar5 - (int)param_1;
      return (byte *)(uVar6 - iVar8);
    }
    bVar2 = pbVar5[1];
    pbVar4 = pbVar5 + 1;
    param_2 = iVar8 - uVar6;
    if ((bVar2 & 0xc0) != 0x80) {
      *param_3 = (int)(pbVar4 + (-1 - (int)param_1));
      return (byte *)0x6;
    }
    switch(uVar6) {
    case 1:
      pbVar5 = pbVar4;
      if ((bVar1 & 0x3e) == 0) {
        *param_3 = (int)(pbVar4 + (-1 - (int)param_1));
        return (byte *)0xf;
      }
      break;
    case 2:
      pbVar4 = pbVar5 + 2;
      if ((pbVar5[2] & 0xc0) != 0x80) {
        pbVar5 = pbVar4 + (-2 - (int)param_1);
        goto LAB_0003453c;
      }
      pbVar5 = pbVar4;
      if (uVar7 == 0xe0) {
        if ((bVar2 & 0x20) == 0) {
          *param_3 = (int)(pbVar4 + (-2 - (int)param_1));
          return (byte *)0x10;
        }
      }
      else if (0x9f < bVar2 && uVar7 == 0xed) {
        *param_3 = (int)(pbVar4 + (-2 - (int)param_1));
        return (byte *)0xe;
      }
      break;
    case 3:
      if ((pbVar5[2] & 0xc0) != 0x80) goto LAB_000345ac;
      pbVar4 = pbVar5 + 3;
      if ((pbVar5[3] & 0xc0) != 0x80) {
        pbVar5 = pbVar4 + (-3 - (int)param_1);
        goto LAB_000345d0;
      }
      pbVar5 = pbVar4;
      if (uVar7 == 0xf0) {
        if ((bVar2 & 0x30) == 0) {
          *param_3 = (int)(pbVar4 + (-3 - (int)param_1));
          return (byte *)0x11;
        }
      }
      else if ((0xf4 < uVar7) || (0x8f < bVar2 && uVar7 == 0xf4)) {
        *param_3 = (int)(pbVar4 + (-3 - (int)param_1));
        return (byte *)0xd;
      }
      break;
    case 4:
      if ((pbVar5[2] & 0xc0) == 0x80) {
        if ((pbVar5[3] & 0xc0) == 0x80) {
          pbVar4 = pbVar5 + 4;
          if ((pbVar5[4] & 0xc0) != 0x80) {
            *param_3 = (int)(pbVar4 + (-4 - (int)param_1));
LAB_000346d8:
            return &DAT_00000009;
          }
          if ((uVar7 == 0xf8) && ((bVar2 & 0x38) == 0)) {
            *param_3 = (int)(pbVar4 + (-4 - (int)param_1));
            return (byte *)0x12;
          }
          uVar7 = 4;
          goto LAB_00034730;
        }
LAB_00034658:
        pbVar5 = pbVar5 + -(int)param_1;
LAB_000345d0:
        *param_3 = (int)pbVar5;
        return (byte *)0x8;
      }
      goto LAB_000345ac;
    case 5:
      if ((pbVar5[2] & 0xc0) == 0x80) {
        if ((pbVar5[3] & 0xc0) == 0x80) {
          if ((pbVar5[4] & 0xc0) != 0x80) {
            *param_3 = (int)pbVar5 - (int)param_1;
            goto LAB_000346d8;
          }
          pbVar4 = pbVar5 + 5;
          if ((pbVar5[5] & 0xc0) != 0x80) {
            *param_3 = (int)(pbVar4 + (-5 - (int)param_1));
            return (byte *)0xa;
          }
          if ((uVar7 == 0xfc) && ((bVar2 & 0x3c) == 0)) {
            *param_3 = (int)(pbVar4 + (-5 - (int)param_1));
            return (byte *)0x13;
          }
          uVar7 = 5;
          goto LAB_00034730;
        }
        goto LAB_00034658;
      }
LAB_000345ac:
      pbVar5 = pbVar5 + -(int)param_1;
LAB_0003453c:
      *param_3 = (int)pbVar5;
      return &DAT_00000007;
    default:
      uVar7 = uVar6;
      pbVar5 = pbVar4;
      if (3 < uVar6) {
LAB_00034730:
        iVar8 = -uVar7 - (int)param_1;
        if (uVar6 == 4) {
          param_1 = (byte *)0xb;
        }
        *param_3 = (int)(pbVar4 + iVar8);
        if (uVar6 != 4) {
          param_1 = (byte *)0xc;
        }
        return param_1;
      }
    }
LAB_00034760:
    pbVar5 = pbVar5 + 1;
  } while( true );
}



/* ===== pcre_version @ 00034774 size=12 ===== */

int pcre_version(void)

{
  return (int)&DAT_00034780 + DAT_00034780;
}



/* ===== FUN_00034784 @ 00034784 size=1924 ===== */

uint FUN_00034784(uint param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  
  bVar1 = *param_2;
  uVar15 = bVar1 & 1;
  iVar12 = DAT_00034f08 + 0x347a4;
  if (param_1 < 0x100) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 2) == 0) {
        return uVar15;
      }
      uVar15 = (int)(uint)param_2[(param_1 >> 3) + 1] >> (param_1 & 7);
LAB_000347c4:
      return uVar15 & 1;
    }
    if ((bVar1 & 2) != 0) {
      if (((int)(uint)param_2[(param_1 >> 3) + 1] >> (param_1 & 7) & 1U) != 0) {
LAB_000347f4:
        uVar15 = ~(uint)bVar1;
        goto LAB_000347c4;
      }
      goto LAB_00034804;
    }
  }
  else if ((bVar1 & 2) != 0) {
LAB_00034804:
    param_2 = param_2 + 0x21;
    goto LAB_00034808;
  }
  param_2 = param_2 + 1;
LAB_00034808:
  uVar7 = param_1 + 0x7f;
  if (-1 < (int)param_1) {
    uVar7 = param_1;
  }
  uVar14 = param_1 & 0x7f;
  if (-1 < (int)-param_1) {
    uVar14 = -(-param_1 & 0x7f);
  }
LAB_00034880:
  do {
    while( true ) {
      bVar3 = *param_2;
      if (bVar3 == 0) {
        return uVar15;
      }
      bVar2 = param_2[1];
      uVar8 = (uint)bVar2;
      if (bVar3 == 1) goto code_r0x0003484c;
      if (bVar3 == 2) break;
      uVar4 = (uint)*(ushort *)
                     (*(int *)(iVar12 + DAT_00034f0c) +
                     ((short)(ushort)*(byte *)(*(int *)(iVar12 + DAT_00034f10) + ((int)uVar7 >> 7))
                      * 0x80 + uVar14) * 2);
      iVar6 = *(int *)(iVar12 + DAT_00034f14) + uVar4 * 8;
      switch(uVar8) {
      case 0:
        goto LAB_00034d48;
      case 1:
        uVar8 = (uint)*(byte *)(iVar6 + 1);
        uVar4 = uVar8 - 8;
        bVar18 = 4 < uVar8;
        bVar19 = uVar8 == 5;
        if (!bVar19) {
          bVar18 = uVar4 != 0;
        }
        bVar17 = uVar4 == 1;
        if (!bVar18 || (bVar19 || bVar17)) {
          uVar4 = 1;
        }
        if (bVar18 && (!bVar19 && !bVar17)) {
          uVar4 = 0;
        }
        break;
      case 2:
        uVar8 = (uint)param_2[2];
        uVar16 = *(uint *)(*(int *)(iVar12 + DAT_00034f18) + (uint)*(byte *)(iVar6 + 1) * 4);
        goto LAB_00034cdc;
      case 3:
        uVar16 = (uint)param_2[2];
        uVar8 = (uint)*(byte *)(iVar6 + 1);
        goto LAB_00034cdc;
      case 4:
        uVar16 = (uint)param_2[2];
        uVar8 = (uint)*(byte *)(*(int *)(iVar12 + DAT_00034f14) + uVar4 * 8);
LAB_00034cdc:
        bVar18 = uVar16 == uVar8;
LAB_00034ce0:
        uVar4 = (uint)bVar18;
        break;
      case 5:
        bVar18 = (*(uint *)(*(int *)(iVar12 + DAT_00034f18) + (uint)*(byte *)(iVar6 + 1) * 4) &
                 0xfffffffd) == 1;
        goto LAB_00034ce0;
      case 6:
        goto LAB_00034d20;
      case 7:
LAB_00034d20:
        if (param_1 != 0x180e) {
          if (0x180e < param_1) {
            if (param_1 < 0x202a) {
              if (param_1 < 0x2028) {
                bVar19 = 9 < param_1 - 0x2000;
                bVar18 = param_1 - 0x2000 == 10;
                goto LAB_00034d44;
              }
            }
            else if ((param_1 != 0x205f) && (param_1 != 0x3000)) {
              bVar18 = param_1 == 0x202f;
LAB_00034d6c:
              if (!bVar18) goto LAB_00034d70;
            }
            goto LAB_00034d48;
          }
          if (param_1 == 0x20) goto LAB_00034d48;
          if (0x20 < param_1) {
            if ((param_1 != 0xa0) && (param_1 != 0x1680)) {
              bVar18 = param_1 == 0x85;
              goto LAB_00034d6c;
            }
            goto LAB_00034d48;
          }
          bVar19 = 3 < param_1 - 9;
          bVar18 = param_1 - 9 == 4;
LAB_00034d44:
          if (!bVar19 || bVar18) goto LAB_00034d48;
LAB_00034d70:
          bVar18 = *(int *)(*(int *)(iVar12 + DAT_00034f18) + (uint)*(byte *)(iVar6 + 1) * 4) == 6;
          goto LAB_00034ce0;
        }
LAB_00034d48:
        bVar18 = bVar3 == 3;
        goto LAB_00034d4c;
      case 8:
        bVar18 = param_1 == 0x5f;
        if (!bVar18) {
          bVar18 = (*(uint *)(*(int *)(iVar12 + DAT_00034f18) + (uint)*(byte *)(iVar6 + 1) * 4) &
                   0xfffffffd) == 1;
        }
LAB_00034de8:
        uVar4 = (uint)bVar18;
        break;
      case 9:
        return 0;
      case 10:
        if (0x9f < param_1) {
          bVar19 = 0x7fe < param_1 - 0xd800;
          bVar18 = param_1 - 0xd800 == 0x7ff;
LAB_00034e24:
          uVar4 = (uint)(bVar19 && !bVar18);
          break;
        }
        bVar18 = (uint)(bVar3 == 3) == (uint)(param_1 == 0x24 || (param_1 & 0xffffffdf) == 0x40);
        goto LAB_00034d4c;
      case 0xb:
        iVar9 = *(int *)(*(int *)(iVar12 + DAT_00034f18) + (uint)*(byte *)(iVar6 + 1) * 4);
        if (iVar9 == 6) {
LAB_00034ec4:
          uVar4 = 0;
        }
        else {
          if (iVar9 != 0) goto LAB_00034ef0;
          uVar4 = 0;
          if (*(byte *)(iVar6 + 1) == 1) {
            if (param_1 != 0x61c && param_1 != 0x180e) goto LAB_00034e74;
            uVar4 = 0;
          }
        }
        break;
      case 0xc:
        uVar8 = (uint)*(byte *)(iVar6 + 1);
        if (uVar8 - 0x1b < 2) goto LAB_00034ec4;
        if (*(int *)(*(int *)(iVar12 + DAT_00034f18) + uVar8 * 4) != 0) goto LAB_00034ef0;
        uVar4 = 0;
        if (param_1 != 0x61c && uVar8 == 1) {
LAB_00034e74:
          bVar19 = 2 < param_1 - 0x2066;
          bVar18 = param_1 - 0x2066 == 3;
          goto LAB_00034e24;
        }
        break;
      case 0xd:
        iVar6 = *(int *)(*(int *)(iVar12 + DAT_00034f18) + (uint)*(byte *)(iVar6 + 1) * 4);
        if (iVar6 != 4) {
          bVar18 = param_1 == 0x7f;
          if (param_1 < 0x80) {
            bVar18 = iVar6 == 5;
          }
          goto LAB_00034de8;
        }
LAB_00034ef0:
        uVar4 = 1;
        break;
      default:
        return 0;
      }
      bVar18 = uVar4 == (bVar3 == 3);
LAB_00034d4c:
      if (bVar18) goto LAB_000347f4;
      param_2 = param_2 + 3;
    }
    uVar4 = (uint)param_2[2];
    if (uVar8 < 0xc0) {
      pbVar13 = param_2 + 2;
      uVar16 = uVar4;
    }
    else {
      uVar10 = (uint)param_2[3];
      if ((bVar2 & 0x20) == 0) {
        pbVar13 = param_2 + 3;
        uVar8 = uVar4 & 0x3f | (uVar8 & 0x1f) << 6;
        uVar16 = uVar10;
      }
      else {
        uVar11 = (uint)param_2[4];
        if ((bVar2 & 0x10) == 0) {
          uVar8 = (uVar4 & 0x3f) << 6 | (uVar8 & 0xf) << 0xc | uVar10 & 0x3f;
          pbVar13 = param_2 + 4;
          uVar16 = uVar11;
        }
        else {
          uVar5 = (uint)param_2[5];
          if ((bVar2 & 8) == 0) {
            uVar8 = (uVar10 & 0x3f) << 6 |
                    (uVar8 & 7) << 0x12 | uVar11 & 0x3f | (uVar4 & 0x3f) << 0xc;
            pbVar13 = param_2 + 5;
            uVar16 = uVar5;
          }
          else {
            uVar16 = (uint)param_2[6];
            if ((bVar2 & 4) == 0) {
              uVar8 = (uVar11 & 0x3f) << 6 |
                      (uVar8 & 3) << 0x18 | uVar5 & 0x3f | (uVar4 & 0x3f) << 0x12 |
                      (uVar10 & 0x3f) << 0xc;
              pbVar13 = param_2 + 6;
            }
            else {
              uVar8 = (uVar5 & 0x3f) << 6 |
                      (uVar8 & 1) << 0x1e | uVar16 & 0x3f | (uVar4 & 0x3f) << 0x18 |
                      (uVar10 & 0x3f) << 0x12 | (uVar11 & 0x3f) << 0xc;
              pbVar13 = param_2 + 7;
              uVar16 = (uint)param_2[7];
            }
          }
        }
      }
    }
    if (uVar16 < 0xc0) {
      param_2 = pbVar13 + 1;
    }
    else {
      uVar4 = (uint)pbVar13[1];
      if ((uVar16 & 0x20) == 0) {
        param_2 = pbVar13 + 2;
        uVar16 = uVar4 & 0x3f | (uVar16 & 0x1f) << 6;
      }
      else {
        uVar10 = (uint)pbVar13[2];
        if ((uVar16 & 0x10) == 0) {
          param_2 = pbVar13 + 3;
          uVar16 = (uVar4 & 0x3f) << 6 | (uVar16 & 0xf) << 0xc | uVar10 & 0x3f;
        }
        else {
          uVar11 = (uint)pbVar13[3];
          if ((uVar16 & 8) == 0) {
            param_2 = pbVar13 + 4;
            uVar16 = (uVar10 & 0x3f) << 6 |
                     (uVar16 & 7) << 0x12 | uVar11 & 0x3f | (uVar4 & 0x3f) << 0xc;
          }
          else if ((uVar16 & 4) == 0) {
            param_2 = pbVar13 + 5;
            uVar16 = (uVar11 & 0x3f) << 6 |
                     (uVar16 & 3) << 0x18 | pbVar13[4] & 0x3f | (uVar4 & 0x3f) << 0x12 |
                     (uVar10 & 0x3f) << 0xc;
          }
          else {
            param_2 = pbVar13 + 6;
            uVar16 = (pbVar13[4] & 0x3f) << 6 |
                     (uVar16 & 1) << 0x1e | pbVar13[5] & 0x3f | (uVar4 & 0x3f) << 0x18 |
                     (uVar10 & 0x3f) << 0x12 | (uVar11 & 0x3f) << 0xc;
          }
        }
      }
    }
  } while (uVar16 < param_1 || param_1 < uVar8);
  goto LAB_000347f4;
code_r0x0003484c:
  if (uVar8 < 0xc0) {
    pbVar13 = param_2 + 2;
  }
  else {
    uVar4 = (uint)param_2[2];
    if ((bVar2 & 0x20) == 0) {
      pbVar13 = param_2 + 3;
      uVar8 = uVar4 & 0x3f | (uVar8 & 0x1f) << 6;
    }
    else {
      uVar16 = (uint)param_2[3];
      if ((bVar2 & 0x10) == 0) {
        pbVar13 = param_2 + 4;
        uVar8 = (uVar4 & 0x3f) << 6 | (uVar8 & 0xf) << 0xc | uVar16 & 0x3f;
      }
      else {
        uVar10 = (uint)param_2[4];
        if ((bVar2 & 8) == 0) {
          pbVar13 = param_2 + 5;
          uVar8 = (uVar16 & 0x3f) << 6 | (uVar8 & 7) << 0x12 | uVar10 & 0x3f | (uVar4 & 0x3f) << 0xc
          ;
        }
        else if ((bVar2 & 4) == 0) {
          pbVar13 = param_2 + 6;
          uVar8 = (uVar10 & 0x3f) << 6 |
                  (uVar8 & 3) << 0x18 | param_2[5] & 0x3f | (uVar4 & 0x3f) << 0x12 |
                  (uVar16 & 0x3f) << 0xc;
        }
        else {
          pbVar13 = param_2 + 7;
          uVar8 = (param_2[5] & 0x3f) << 6 |
                  (uVar8 & 1) << 0x1e | param_2[6] & 0x3f | (uVar4 & 0x3f) << 0x18 |
                  (uVar16 & 0x3f) << 0x12 | (uVar10 & 0x3f) << 0xc;
        }
      }
    }
  }
  param_2 = pbVar13;
  if (uVar8 == param_1) goto LAB_000347f4;
  goto LAB_00034880;
}



/* ===== _fini @ 00034f1c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::memmove @ 0005b000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0005b00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0005b010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tolower @ 0005b014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0005b018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 0005b01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0005b020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0005b024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0005b028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0005b02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0005b030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0005b034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0005b038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0005b03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::toupper @ 0005b040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int toupper(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0005b044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0005b048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0005b04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


