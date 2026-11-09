// libexpat.so.1.8.7 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001209c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::memcmp @ 000120c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0003ef58)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 000120cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0003ef5c)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000120d8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003ef60)();
  return;
}



/* ===== <EXTERNAL>::getpid @ 000120e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0003ef64)();
  return _Var1;
}



/* ===== <EXTERNAL>::memset @ 000120f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003ef68)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::malloc @ 000120fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003ef6c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::memmove @ 00012108 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0003ef70)(__dest);
  return pvVar1;
}



/* ===== XML_ParserCreate_MM @ 00012114 size=12 ===== */

void XML_ParserCreate_MM(void)

{
  (*(code *)PTR_XML_ParserCreate_MM_0003ef74)();
  return;
}



/* ===== XML_GetBuffer @ 00012120 size=12 ===== */

void XML_GetBuffer(void)

{
  (*(code *)PTR_XML_GetBuffer_0003ef78)();
  return;
}



/* ===== <EXTERNAL>::__isnanf @ 0001212c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __isnanf(float __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___isnanf_0003ef7c)();
  return iVar1;
}



/* ===== <EXTERNAL>::getrandom @ 00012138 size=12 ===== */

void getrandom(void)

{
  (*(code *)PTR_getrandom_0003ef80)();
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00012144 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0003ef84)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012150 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003ef88)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 0001215c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0003ef8c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00012168 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0003ef90)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::close @ 00012174 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0003ef94)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00012180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0003ef98)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 0001218c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0003ef9c)();
  return piVar1;
}



/* ===== <EXTERNAL>::fputs @ 00012198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0003efa0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__assert @ 000121a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_0003efa4)(__assertion);
  return;
}



/* ===== <EXTERNAL>::getenv @ 000121b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0003efa8)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::open64 @ 000121bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0003efac)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000121d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003efb4)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000121e0 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0003efb8)();
  return;
}



/* ===== XML_ParserFree @ 000121ec size=12 ===== */

void XML_ParserFree(void)

{
  (*(code *)PTR_XML_ParserFree_0003efbc)();
  return;
}



/* ===== entry @ 000121f8 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00012244 + 0x12210 == DAT_00012240 + 0x12208) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012248 + 0x12218 + DAT_0001224c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000122b4 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00012328 + 0x122d0;
  if (*(char *)(DAT_00012324 + 0x122c4) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001232c) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00012330 + 0x122f0));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00012334) != 0) {
    __deregister_frame_info(DAT_00012338 + 0x12310);
  }
  *(undefined1 *)(DAT_0001233c + 0x12320) = 1;
  return;
}



/* ===== _INIT_0 @ 00012340 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00012378 + 0x12350 + DAT_0001237c) != 0) {
    __register_frame_info(DAT_00012384 + 0x12370,DAT_00012380 + 0x1236c);
  }
  if (((DAT_000122a8 + 0x12268) - (DAT_000122a4 + 0x12260) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000122ac + 0x12270 + DAT_000122b0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00012388 @ 00012388 size=344 ===== */

void FUN_00012388(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar8 = param_1[4];
  uVar9 = param_1[5];
  local_60 = param_1[6];
  local_5c = param_1[7];
  iVar10 = 0;
  do {
    iVar10 = iVar10 + 1;
    uVar6 = local_58 + uVar1;
    uVar7 = uStack_54 + uVar3 + (uint)CARRY4(local_58,uVar1);
    uVar5 = local_60 + uVar8;
    uVar2 = (uVar1 << 0xd | uVar3 >> 0x13) ^ uVar6;
    uVar4 = (uVar3 << 0xd | uVar1 >> 0x13) ^ uVar7;
    uVar8 = local_5c + uVar9 + (uint)CARRY4(local_60,uVar8);
    uVar1 = (local_60 << 0x10 | local_5c >> 0x10) ^ uVar5;
    uVar3 = (local_5c << 0x10 | local_60 >> 0x10) ^ uVar8;
    local_58 = uVar1 + uVar7;
    uStack_54 = uVar3 + uVar6 + (uint)CARRY4(uVar1,uVar7);
    local_60 = local_58 ^ (uVar1 << 0x15 | uVar3 >> 0xb);
    local_5c = uStack_54 ^ (uVar3 << 0x15 | uVar1 >> 0xb);
    uVar9 = uVar5 + uVar2;
    uVar8 = uVar8 + uVar4 + (uint)CARRY4(uVar5,uVar2);
    uVar1 = (uVar2 << 0x11 | uVar4 >> 0xf) ^ uVar9;
    uVar3 = (uVar4 << 0x11 | uVar2 >> 0xf) ^ uVar8;
  } while (param_2 != iVar10);
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[6] = local_60;
  param_1[7] = local_5c;
  return;
}



/* ===== FUN_000124e0 @ 000124e0 size=176 ===== */

uint * FUN_000124e0(uint *param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar5 = param_2;
LAB_000124f8:
  do {
    puVar3 = (uint *)param_1[10];
    if (puVar5 < param_2 + param_3) {
      if (puVar3 < param_1 + 10) {
        param_1[10] = (uint)((int)puVar3 + 1);
        *(undefined1 *)puVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        goto LAB_000124f8;
      }
    }
    else if (puVar3 < param_1 + 10) {
      return param_1;
    }
    uVar2 = param_1[8];
    uVar4 = param_1[9];
    param_1[6] = uVar2 ^ param_1[6];
    param_1[7] = uVar4 ^ param_1[7];
    FUN_00012388(param_1,2);
    uVar1 = param_1[0xc];
    *param_1 = uVar2 ^ *param_1;
    param_1[1] = uVar4 ^ param_1[1];
    param_1[10] = (uint)(param_1 + 8);
    param_1[0xc] = uVar1 + 8;
    param_1[0xd] = param_1[0xd] + (uint)(0xfffffff7 < uVar1);
    if (param_2 + param_3 <= puVar5) {
      return param_1;
    }
  } while( true );
}



/* ===== FUN_00012590 @ 00012590 size=372 ===== */

undefined8 FUN_00012590(uint *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar4 = 0;
  uVar1 = (undefined1)(param_1[10] - (int)(param_1 + 8));
  uVar2 = CONCAT11(uVar1,uVar1);
  uVar3 = CONCAT22(uVar2,uVar2);
  uVar6 = VectorShiftRight(CONCAT44(uVar3,uVar3),0x38);
  uVar5 = ((int)uVar6 + param_1[0xc]) * 0x1000000;
  switch(param_1[10] - (int)(param_1 + 8) & 0xff) {
  case 1:
    goto LAB_00012680;
  case 2:
    goto LAB_00012664;
  case 3:
    goto LAB_00012648;
  case 4:
    goto LAB_0001262c;
  case 5:
    goto LAB_00012618;
  case 6:
    break;
  case 7:
    uVar5 = uVar5 | (uint)*(byte *)((int)param_1 + 0x26) << 0x10;
    break;
  default:
    goto switchD_000125cc_default;
  }
  uVar5 = uVar5 | (uint)*(byte *)((int)param_1 + 0x25) << 8;
LAB_00012618:
  uVar5 = uVar5 | (byte)param_1[9];
LAB_0001262c:
  uVar4 = (uint)*(byte *)((int)param_1 + 0x23) << 0x18;
LAB_00012648:
  uVar4 = uVar4 | (uint)*(byte *)((int)param_1 + 0x22) << 0x10;
LAB_00012664:
  uVar4 = uVar4 | (uint)*(byte *)((int)param_1 + 0x21) << 8;
LAB_00012680:
  uVar4 = uVar4 | (byte)param_1[8];
switchD_000125cc_default:
  param_1[6] = param_1[6] ^ uVar4;
  param_1[7] = param_1[7] ^ uVar5;
  FUN_00012388(param_1,2);
  *param_1 = uVar4 ^ *param_1;
  param_1[1] = uVar5 ^ param_1[1];
  param_1[4] = param_1[4] ^ 0xff;
  param_1[5] = param_1[5];
  FUN_00012388(param_1,4);
  return CONCAT44(param_1[1] ^ param_1[3] ^ param_1[5] ^ param_1[7],
                  *param_1 ^ param_1[2] ^ param_1[4] ^ param_1[6]);
}



/* ===== FUN_00012704 @ 00012704 size=84 ===== */

void FUN_00012704(int param_1,int *param_2)

{
  int *piVar1;
  
  while (param_2 != (int *)0x0) {
    if (*(code **)(param_1 + 0x68) != (code *)0x0) {
      (**(code **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 4),*(undefined4 *)*param_2);
    }
    piVar1 = (int *)param_2[1];
    param_2[1] = *(int *)(param_1 + 0x174);
    *(int **)(param_1 + 0x174) = param_2;
    *(int *)(*param_2 + 4) = param_2[2];
    param_2 = piVar1;
  }
  return;
}



/* ===== FUN_00012760 @ 00012760 size=104 ===== */

void FUN_00012760(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  do {
    pcVar2 = param_1;
    if (*pcVar2 == '\0') {
      return;
    }
    param_1 = pcVar2 + 1;
    pcVar3 = pcVar2;
  } while (*pcVar2 != '\r');
  do {
    pcVar4 = pcVar3 + 1;
    pcVar1 = pcVar2 + 1;
    if (*pcVar2 == '\r') {
      *pcVar3 = '\n';
      if (pcVar2[1] == '\n') {
        pcVar1 = pcVar2 + 2;
      }
    }
    else {
      *pcVar3 = *pcVar2;
    }
    pcVar2 = pcVar1;
    pcVar3 = pcVar4;
  } while (*pcVar2 != '\0');
  *pcVar4 = '\0';
  return;
}



/* ===== FUN_000127c8 @ 000127c8 size=244 ===== */

void FUN_000127c8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_34;
  int local_30;
  int local_2c;
  
  piVar2 = *(int **)(DAT_000128bc + 0x127e8 + DAT_000128c0);
  local_2c = *piVar2;
  local_34 = param_3;
  if (*(char *)(param_2 + 0x44) == '\0') {
    if (*(int *)(param_1 + 0x90) == param_2) {
      piVar3 = (int *)(param_1 + 0x11c);
      piVar4 = (int *)(param_1 + 0x120);
    }
    else {
      piVar3 = *(int **)(param_1 + 0x128);
      piVar4 = piVar3 + 1;
    }
    do {
      local_30 = *(int *)(param_1 + 0x2c);
      uVar1 = (**(code **)(param_2 + 0x38))
                        (param_2,&local_34,param_4,&local_30,*(undefined4 *)(param_1 + 0x30));
      *piVar4 = local_34;
      (**(code **)(param_1 + 0x50))
                (*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x2c),
                 local_30 - *(int *)(param_1 + 0x2c));
      *piVar3 = local_34;
    } while (1 < uVar1);
  }
  else {
    (**(code **)(param_1 + 0x50))(*(undefined4 *)(param_1 + 4),param_3,param_4 - param_3);
  }
  if (local_2c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_000128c4 @ 000128c4 size=316 ===== */

int FUN_000128c4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (param_4 != 0 || param_5 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(param_1 + 0x14) + iVar2 * 0xc) == param_2) {
        return 1;
      }
    }
    if (((param_4 != 0) && (*(int *)(param_1 + 8) == 0)) && (*(char *)(param_2 + 9) == '\0')) {
      *(int *)(param_1 + 8) = param_2;
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == iVar1) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 8;
      iVar1 = (**(code **)(param_6 + 0xc))(0x60);
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        return iVar2;
      }
    }
    else {
      if (((0x3fffffff < iVar1) || (DAT_00012a00 < (uint)(iVar1 * 2))) ||
         (iVar2 = (**(code **)(param_6 + 0x10))(*(undefined4 *)(param_1 + 0x14),iVar1 * 0x18),
         iVar2 == 0)) {
        return 0;
      }
      *(int *)(param_1 + 0x10) = iVar1 * 2;
      *(int *)(param_1 + 0x14) = iVar2;
    }
  }
  iVar2 = *(int *)(param_1 + 0xc) * 0xc;
  iVar1 = *(int *)(param_1 + 0x14) + iVar2;
  *(int *)(*(int *)(param_1 + 0x14) + iVar2) = param_2;
  if (param_3 == 0) {
    iVar2 = 1;
  }
  *(int *)(iVar1 + 8) = param_5;
  *(char *)(iVar1 + 4) = (char)param_3;
  if (param_3 == 0) {
    *(char *)(param_2 + 8) = (char)iVar2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return 1;
}



/* ===== FUN_00012a04 @ 00012a04 size=124 ===== */

void FUN_00012a04(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar2 = DAT_00012a80;
  pcVar4 = param_1 + -1;
  pcVar3 = param_1;
  while( true ) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
    if (cVar1 == '\0') break;
    if (((byte)(cVar1 - 10) < 0x17) && ((uVar2 & 1 << (uint)(byte)(cVar1 - 10)) != 0)) {
      if ((pcVar3 != param_1) && (pcVar3[-1] != ' ')) {
        *pcVar3 = ' ';
        pcVar3 = pcVar3 + 1;
      }
    }
    else {
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    }
  }
  if ((pcVar3 != param_1) && (pcVar3[-1] == ' ')) {
    pcVar3 = pcVar3 + -1;
  }
  *pcVar3 = '\0';
  return;
}



/* ===== FUN_00012a84 @ 00012a84 size=76 ===== */

void FUN_00012a84(int *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
    (**(code **)(param_1[4] + 8))(*(undefined4 *)(*param_1 + uVar1 * 4));
    *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
  }
  param_1[3] = 0;
  return;
}



/* ===== FUN_00012ad0 @ 00012ad0 size=60 ===== */

void FUN_00012ad0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if ((uint)param_1[2] <= uVar2) break;
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    (**(code **)(param_1[4] + 8))(*(undefined4 *)(*param_1 + iVar1));
  }
                    /* WARNING: Could not recover jumptable at 0x00012af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[4] + 8))();
  return;
}



/* ===== FUN_00012b0c @ 00012b0c size=28 ===== */

void FUN_00012b0c(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    iVar1 = iVar1 + param_2[2] * 4;
  }
  param_1[1] = iVar1;
  return;
}



/* ===== FUN_00012b28 @ 00012b28 size=48 ===== */

int FUN_00012b28(int *param_1)

{
  int *piVar1;
  
  do {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)param_1[1]) {
      return 0;
    }
    *param_1 = (int)(piVar1 + 1);
  } while (*piVar1 == 0);
  return *piVar1;
}



/* ===== FUN_00012b58 @ 00012b58 size=76 ===== */

void FUN_00012b58(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (param_1[1] == 0) {
    param_1[1] = (undefined4 *)*param_1;
  }
  else {
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      *puVar2 = param_1[1];
      param_1[1] = puVar2;
      puVar2 = puVar1;
    }
  }
  *param_1 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* ===== FUN_00012ba4 @ 00012ba4 size=80 ===== */

void FUN_00012ba4(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    (**(code **)(param_1[5] + 8))();
  }
  piVar1 = (int *)param_1[1];
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    (**(code **)(param_1[5] + 8))();
  }
  return;
}



/* ===== FUN_00012bf4 @ 00012bf4 size=292 ===== */

int FUN_00012bf4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x160);
  if (*(int *)(iVar5 + 0xb8) == 0) {
    puVar1 = (undefined4 *)(**(code **)(param_1 + 0xc))(*(int *)(param_1 + 0x1d0) << 2);
    *(undefined4 **)(iVar5 + 0xb8) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return -1;
    }
    *puVar1 = 0;
  }
  uVar4 = *(uint *)(iVar5 + 0xac);
  if (uVar4 <= *(uint *)(iVar5 + 0xb0)) {
    if (*(int *)(iVar5 + 0xa4) == 0) {
      iVar2 = (**(code **)(param_1 + 0xc))(0x380);
      if (iVar2 == 0) {
        return -1;
      }
      iVar3 = 0x20;
    }
    else {
      if ((DAT_00012d18 < uVar4) ||
         (iVar2 = (**(code **)(param_1 + 0x10))(*(int *)(iVar5 + 0xa4),uVar4 * 0x38), iVar2 == 0)) {
        return -1;
      }
      iVar3 = *(int *)(iVar5 + 0xac) << 1;
    }
    *(int *)(iVar5 + 0xac) = iVar3;
    *(int *)(iVar5 + 0xa4) = iVar2;
  }
  iVar3 = *(int *)(iVar5 + 0xb0);
  iVar6 = *(int *)(iVar5 + 0xa4);
  *(int *)(iVar5 + 0xb0) = iVar3 + 1;
  iVar2 = iVar3 * 0x1c + iVar6;
  if (*(int *)(iVar5 + 0xb4) != 0) {
    iVar5 = *(int *)(*(int *)(iVar5 + 0xb8) + (*(int *)(iVar5 + 0xb4) + 0x3fffffff) * 4) * 0x1c +
            iVar6;
    if (*(int *)(iVar5 + 0x10) != 0) {
      *(int *)(*(int *)(iVar5 + 0x10) * 0x1c + iVar6 + 0x18) = iVar3;
    }
    *(int *)(iVar5 + 0x10) = iVar3;
    if (*(int *)(iVar5 + 0x14) == 0) {
      *(int *)(iVar5 + 0xc) = iVar3;
    }
    *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
  }
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  return iVar3;
}



/* ===== FUN_00012d1c @ 00012d1c size=300 ===== */

void FUN_00012d1c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 auStack_428 [256];
  undefined4 local_28;
  undefined4 local_24;
  code *local_20;
  int local_1c;
  
  iVar5 = DAT_00012e48 + 0x12d34;
  pcVar7 = *(code **)(param_1 + 0x7c);
  piVar6 = *(int **)(iVar5 + DAT_00012e4c);
  local_1c = *piVar6;
  if (pcVar7 != (code *)0x0) {
    iVar3 = 0;
    puVar2 = auStack_428;
    do {
      *puVar2 = 0xffffffff;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 != 0x100);
    local_24 = 0;
    local_28 = 0;
    local_20 = (code *)0x0;
    iVar3 = (*pcVar7)(*(undefined4 *)(param_1 + 0xf4),param_2,auStack_428);
    if (iVar3 != 0) {
      pcVar7 = *(code **)(param_1 + 0xc);
      FUN_00029148();
      iVar3 = (*pcVar7)();
      *(int *)(param_1 + 0xec) = iVar3;
      if (iVar3 == 0) {
        if (local_20 != (code *)0x0) {
          (*local_20)(local_28);
        }
        uVar1 = 1;
        goto LAB_00012e08;
      }
      iVar4 = DAT_00012e54;
      if (*(char *)(param_1 + 0xe8) == '\0') {
        iVar4 = DAT_00012e50;
      }
      iVar5 = (**(code **)(iVar5 + iVar4))(iVar3,auStack_428,local_24,local_28);
      if (iVar5 != 0) {
        *(int *)(param_1 + 0x90) = iVar5;
        uVar1 = 0;
        *(undefined4 *)(param_1 + 0xf0) = local_28;
        *(code **)(param_1 + 0xf8) = local_20;
        goto LAB_00012e08;
      }
    }
    if (local_20 != (code *)0x0) {
      (*local_20)(local_28);
    }
  }
  uVar1 = 0x12;
LAB_00012e08:
  if (local_1c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



/* ===== FUN_00012e58 @ 00012e58 size=816 ===== */

undefined4
FUN_00012e58(int param_1,undefined4 *param_2,int param_3,char *param_4,undefined4 *param_5)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  byte bVar7;
  undefined4 *puVar8;
  size_t __n;
  bool bVar9;
  char *pcVar10;
  bool bVar11;
  
  pcVar10 = (char *)*param_2;
  if (*param_4 == '\0') {
    bVar9 = false;
    if (pcVar10 != (char *)0x0) {
      return 0x1c;
    }
  }
  else {
    if ((((pcVar10 != (char *)0x0) && (*pcVar10 == 'x')) && (pcVar10[1] == 'm')) &&
       (pcVar10[2] == 'l')) {
      if (pcVar10[3] != 'n') {
        bVar9 = pcVar10[3] == '\0';
        goto LAB_00012ee0;
      }
      if ((pcVar10[4] == 's') && (pcVar10[5] == '\0')) {
        return 0x27;
      }
    }
    bVar9 = false;
  }
LAB_00012ee0:
  bVar2 = true;
  bVar6 = true;
  for (__n = 0; bVar1 = param_4[__n], bVar1 != 0; __n = __n + 1) {
    bVar7 = bVar6 ^ 1;
    if (0x24 < (int)__n) {
      bVar7 = 1;
    }
    if (bVar7 == 0) {
      bVar6 = *(byte *)(__n + DAT_0001318c + 0x12f00) == bVar1;
    }
    else {
      bVar6 = false;
    }
    if ((bVar2 & (bVar9 ^ 1U)) != 0) {
      if ((int)__n < 0x1e) {
        bVar2 = *(byte *)(DAT_00013188 + 0x12f1d + __n) == bVar1;
      }
      else {
        bVar2 = false;
      }
    }
    if ((*(char *)(param_1 + 0xe8) != '\0') && (*(byte *)(param_1 + 0x1d4) == bVar1)) {
      if (bVar1 < 0x5c) {
        if (0x3e < bVar1) goto LAB_00012fb8;
        if (bVar1 < 0x3c) {
          if (0x22 < bVar1) goto LAB_00012fb8;
          bVar11 = bVar1 == 0x21;
        }
        else {
          bVar11 = bVar1 == 0x3d;
        }
      }
      else if (bVar1 < 0x7b) {
        if ((0x60 < bVar1) || (bVar1 == 0x5d)) goto LAB_00012fb8;
        bVar11 = bVar1 == 0x5f;
      }
      else {
        bVar11 = bVar1 == 0x7e;
      }
      if (!bVar11) {
        return 2;
      }
    }
LAB_00012fb8:
  }
  if (__n != 0x24) {
    bVar6 = false;
  }
  if (bVar9 != bVar6) {
    if (bVar9 == false) {
      uVar3 = 0x28;
    }
    else {
      uVar3 = 0x26;
    }
    return uVar3;
  }
  if (__n != 0x1d) {
    bVar2 = false;
  }
  if (bVar2 != false) {
    return 0x28;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x174);
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    __n = __n + 1;
  }
  if (puVar8 != (undefined4 *)0x0) {
    if ((int)puVar8[6] < (int)__n) {
      if (0x7fffffe7 < (int)__n) {
        return 1;
      }
      iVar4 = (**(code **)(param_1 + 0x10))
                        (puVar8[4],__n + 0x18,param_3,*(code **)(param_1 + 0x10),param_4);
      if (iVar4 == 0) {
        return 1;
      }
      puVar8[4] = iVar4;
      puVar8[6] = __n + 0x18;
    }
    *(undefined4 *)(param_1 + 0x174) = puVar8[1];
LAB_00013070:
    puVar8[5] = __n;
    memcpy((void *)puVar8[4],param_4,__n);
    if (*(char *)(param_1 + 0x1d4) != '\0') {
      *(char *)(puVar8[4] + __n + -1) = *(char *)(param_1 + 0x1d4);
    }
    *puVar8 = param_2;
    puVar8[3] = param_3;
    puVar8[2] = param_2[1];
    puVar5 = puVar8;
    if ((*param_4 == '\0') && (param_2 == (undefined4 *)(*(int *)(param_1 + 0x160) + 0x98))) {
      puVar5 = (undefined4 *)0x0;
    }
    param_2[1] = puVar5;
    puVar8[1] = *param_5;
    *param_5 = puVar8;
    if ((param_3 != 0) && (*(code **)(param_1 + 100) != (code *)0x0)) {
      if (param_2[1] == 0) {
        param_4 = (char *)0x0;
      }
      (**(code **)(param_1 + 100))(*(undefined4 *)(param_1 + 4),*param_2,param_4);
    }
    return 0;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1 + 0xc))(0x1c);
  if (puVar8 != (undefined4 *)0x0 && (int)__n < 0x7fffffe8) {
    iVar4 = (**(code **)(param_1 + 0xc))(__n + 0x18);
    puVar8[4] = iVar4;
    if (iVar4 != 0) {
      puVar8[6] = __n + 0x18;
      goto LAB_00013070;
    }
    (**(code **)(param_1 + 0x14))(puVar8);
  }
  return 1;
}



/* ===== FUN_00013190 @ 00013190 size=200 ===== */

undefined4 FUN_00013190(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = *(int **)(param_1 + 0x168);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    iVar1 = piVar4[9];
    iVar6 = piVar4[6] + 1;
    pvVar3 = (void *)(iVar1 + iVar6);
    if ((void *)piVar4[1] == pvVar3) break;
    if (0x7fffffffU - iVar6 < (uint)piVar4[2]) {
      return 0;
    }
    iVar5 = piVar4[2] + iVar6;
    if (piVar4[10] - iVar1 < iVar5) {
      iVar1 = (**(code **)(param_1 + 0x10))(iVar1,iVar5);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = piVar4[9];
      if (piVar4[3] == iVar2) {
        piVar4[3] = iVar1;
      }
      piVar4[9] = iVar1;
      if (piVar4[4] != 0) {
        piVar4[4] = iVar1 + (piVar4[4] - iVar2);
      }
      pvVar3 = (void *)(iVar1 + iVar6);
      piVar4[10] = iVar1 + iVar5;
    }
    pvVar3 = memcpy(pvVar3,(void *)piVar4[1],piVar4[2]);
    piVar4[1] = (int)pvVar3;
    piVar4 = (int *)*piVar4;
  }
  return 1;
}



/* ===== FUN_00013258 @ 00013258 size=56 ===== */

void FUN_00013258(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  while (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    (*(code *)*param_2)(*(undefined4 *)(param_1 + 0x10));
    (*(code *)*param_2)(param_1);
    param_1 = iVar1;
  }
  return;
}



/* ===== FUN_00013290 @ 00013290 size=92 ===== */

undefined4 FUN_00013290(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_000132f4;
  if (*(char *)(param_1 + 0xe8) == '\0') {
    iVar1 = DAT_000132f0;
  }
  iVar1 = (**(code **)(DAT_000132ec + 0x132b0 + iVar1))
                    (param_1 + 0x94,param_1 + 0x90,*(undefined4 *)(param_1 + 0xe4));
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00012d1c(param_1,*(undefined4 *)(param_1 + 0xe4));
  return uVar2;
}



/* ===== FUN_000132f8 @ 000132f8 size=132 ===== */

void FUN_000132f8(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 0x1f0);
  iVar2 = *(int *)(param_2 + 500);
  if (uVar1 != 0 || iVar2 != 0) {
    FUN_0002b040(param_1,*(uint *)(param_2 + 0x1f8) + uVar1,
                 *(int *)(param_2 + 0x1fc) + iVar2 + (uint)CARRY4(*(uint *)(param_2 + 0x1f8),uVar1))
    ;
    FUN_0002b040(uVar1,iVar2);
  }
  if (*(int *)(param_2 + 0x1d8) != 0) {
    __assert((char *)(DAT_00013384 + 0x13374),(char *)(DAT_00013380 + 0x1336c),0x1ddc);
  }
  return;
}



/* ===== FUN_00013388 @ 00013388 size=136 ===== */

void FUN_00013388(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = DAT_00013410 + 0x133a4;
  do {
    iVar2 = param_1;
    param_1 = *(int *)(iVar2 + 0x1d8);
  } while (*(int *)(iVar2 + 0x1d8) != 0);
  if (0 < *(int *)(iVar2 + 0x200)) {
    fVar4 = (float)FUN_000132f8(iVar2);
    puVar1 = *(undefined4 **)(iVar3 + DAT_00013414);
    fprintf((FILE *)*puVar1,(char *)(DAT_00013418 + 0x13400),iVar2,puVar1,
            *(undefined4 *)(iVar2 + 0x1f0),*(undefined4 *)(iVar2 + 500),
            *(undefined4 *)(iVar2 + 0x1f8),*(undefined4 *)(iVar2 + 0x1fc),(double)fVar4,param_2);
  }
  return;
}



/* ===== FUN_0001341c @ 0001341c size=12 ===== */

void FUN_0001341c(undefined4 param_1)

{
  FUN_00013388(param_1,(int)&DAT_00013428 + DAT_00013428);
  return;
}



/* ===== FUN_0001342c @ 0001342c size=220 ===== */

void FUN_0001342c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r0;
  undefined4 *extraout_r1;
  undefined4 extraout_r2;
  int iVar1;
  int iVar2;
  int extraout_r12;
  
  iVar2 = DAT_00013508 + 0x1344c;
  if (*(int *)(param_1 + 0x1d8) != 0) {
    __assert((char *)(DAT_00013514 + 0x13470),(char *)(DAT_00013510 + 0x13468),0x1e65);
    param_1 = extraout_r0;
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    iVar2 = extraout_r12;
  }
  if (0 < *(int *)(param_1 + 0x21c)) {
    if (*(char *)((int)param_2 + 0x21) == '\0') {
      iVar1 = DAT_0001351c + 0x134b8;
    }
    else {
      iVar1 = (int)&DAT_00013508 + DAT_00013528;
    }
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00013518),(char *)(DAT_00013524 + 0x134f4),param_1
            ,*(undefined4 *)(param_1 + 0x210),*(int *)(param_1 + 0x214),
            *(undefined4 *)(param_1 + 0x218),(*(int *)(param_1 + 0x214) + 0x7fffffff) * 2,
            DAT_00013520 + 0x134d4,iVar1,*param_2,param_3,param_2[2],param_4);
  }
  return;
}



/* ===== FUN_0001352c @ 0001352c size=84 ===== */

void FUN_0001352c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_00013580;
  do {
    iVar2 = param_1;
    param_1 = *(int *)(iVar2 + 0x1d8);
  } while (*(int *)(iVar2 + 0x1d8) != 0);
  *(int *)(iVar2 + 0x210) = *(int *)(iVar2 + 0x210) + 1;
  uVar3 = *(int *)(iVar2 + 0x214) + 1;
  *(uint *)(iVar2 + 0x214) = uVar3;
  if (*(uint *)(iVar2 + 0x218) < uVar3) {
    *(uint *)(iVar2 + 0x218) = *(uint *)(iVar2 + 0x218) + 1;
  }
  FUN_0001342c(iVar2,param_2,iVar1 + 0x1356c,param_3);
  return;
}



/* ===== FUN_00013584 @ 00013584 size=64 ===== */

void FUN_00013584(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x1d8);
  } while (*(int *)(iVar1 + 0x1d8) != 0);
  FUN_0001342c(iVar1,param_2,DAT_000135c4 + 0x135ac,param_3);
  *(int *)(iVar1 + 0x214) = *(int *)(iVar1 + 0x214) + -1;
  return;
}



/* ===== FUN_000135c8 @ 000135c8 size=68 ===== */

void * FUN_000135c8(void *param_1,undefined4 *param_2)

{
  char *pcVar1;
  void *__dest;
  size_t __n;
  
  __n = 0;
  do {
    pcVar1 = (char *)((int)param_1 + __n);
    __n = __n + 1;
  } while (*pcVar1 != '\0');
  __dest = (void *)(*(code *)*param_2)(__n);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,__n);
  }
  return __dest;
}



/* ===== FUN_0001360c @ 0001360c size=144 ===== */

void FUN_0001360c(char *param_1)

{
  char *__nptr;
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  char *local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_0001369c + 0x1361c + DAT_000136a0);
  local_14 = *piVar3;
  local_18 = param_1;
  __nptr = getenv(param_1);
  if (__nptr == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    piVar1 = __errno_location();
    *piVar1 = 0;
    local_18 = __nptr;
    uVar2 = strtoul(__nptr,&local_18,10);
    if ((*piVar1 != 0) || (*local_18 != '\0')) {
      uVar2 = 0;
      *piVar1 = 0;
    }
  }
  if (local_14 == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_000136a4 @ 000136a4 size=96 ===== */

undefined4 FUN_000136a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00013708 + 0x136c4;
  iVar1 = FUN_0001360c(DAT_00013704 + 0x136c0);
  if (iVar1 != 0) {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_0001370c),(char *)(DAT_00013710 + 0x136f4),param_1
            ,8,param_2,4);
  }
  return param_2;
}



/* ===== FUN_00013714 @ 00013714 size=424 ===== */

void FUN_00013714(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[0x45] = DAT_000138bc + 0x13728;
  FUN_0002ae34(param_1 + 0x3f);
  if (param_2 != 0) {
    uVar2 = FUN_000135c8(param_2,param_1 + 3);
    param_1[0x39] = uVar2;
  }
  param_1[0x59] = 0;
  FUN_00029414(param_1 + 0x25,param_1 + 0x24,0);
  param_1[6] = param_1[2];
  param_1[7] = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_1;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0x65) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  uVar2 = 0;
  uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined2 *)(param_1 + 0x57) = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined2 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  iVar4 = DAT_000138c0;
  param_1[0x7c] = 0;
  param_1[0x7d] = uVar5;
  param_1[0x7e] = uVar6;
  param_1[0x7f] = uVar7;
  param_1[0x80] = 0;
  param_1[0x81] = uVar5;
  param_1[0x82] = uVar6;
  param_1[0x83] = uVar7;
  uVar3 = FUN_0001360c(iVar4 + 0x13878);
  uVar1 = DAT_000138c4;
  param_1[0x80] = uVar3;
  param_1[0x81] = uVar1;
  param_1[0x82] = 0x800000;
  param_1[0x83] = 0;
  iVar4 = DAT_000138c8 + 0x138ac;
  param_1[0x84] = uVar2;
  param_1[0x85] = uVar5;
  param_1[0x86] = uVar6;
  param_1[0x87] = uVar7;
  uVar2 = FUN_0001360c(iVar4);
  param_1[0x87] = uVar2;
  return;
}



/* ===== FUN_000138cc @ 000138cc size=220 ===== */

void FUN_000138cc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  undefined1 *local_38;
  undefined8 local_30;
  int local_24;
  
  piVar2 = *(int **)(DAT_000139c8 + 0x138e0 + DAT_000139cc);
  local_24 = *piVar2;
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x1d8);
  } while (param_1 != 0);
  local_48 = *(uint *)(iVar1 + 0x1ec);
  local_60 = DAT_000139a8;
  uStack_5c = DAT_000139ac;
  local_58 = DAT_000139b0 ^ local_48;
  local_50 = DAT_000139b8;
  uStack_4c = DAT_000139bc;
  uStack_54 = DAT_000139b4;
  local_48 = local_48 ^ DAT_000139c0;
  uStack_44 = DAT_000139c4;
  local_38 = auStack_40;
  local_30 = 0;
  for (iVar1 = 0; *(char *)(param_2 + iVar1) != '\0'; iVar1 = iVar1 + 1) {
  }
  FUN_000124e0(&local_60,param_2);
  FUN_00012590(&local_60);
  if (local_24 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_000139d0 @ 000139d0 size=756 ===== */

int * FUN_000139d0(undefined4 param_1,int *param_2,int param_3,size_t param_4)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  int *piVar16;
  char *pcVar17;
  
  if (param_2[2] == 0) {
    if (param_4 == 0) {
      return (int *)0x0;
    }
    *(undefined1 *)(param_2 + 1) = 6;
    param_2[2] = 0x40;
    pvVar2 = (void *)(**(code **)param_2[4])(0x100);
    *param_2 = (int)pvVar2;
    if (pvVar2 == (void *)0x0) {
      param_2[2] = 0;
      return (int *)0x0;
    }
    memset(pvVar2,0,0x100);
    uVar3 = FUN_000138cc(param_1,param_3);
    uVar3 = param_2[2] - 1U & uVar3;
  }
  else {
    uVar5 = FUN_000138cc(param_1,param_3);
    iVar15 = param_2[2];
    uVar9 = 0;
    for (uVar3 = uVar5 & iVar15 - 1U; piVar16 = *(int **)(*param_2 + uVar3 * 4),
        piVar16 != (int *)0x0; uVar3 = uVar3 - uVar9) {
      pcVar17 = (char *)(param_3 + -1);
      pcVar7 = (char *)(*piVar16 + -1);
      while( true ) {
        pcVar17 = pcVar17 + 1;
        pcVar7 = pcVar7 + 1;
        if (*pcVar7 != *pcVar17) break;
        if (*pcVar7 == '\0') {
          return piVar16;
        }
      }
      if (uVar9 == 0) {
        uVar9 = (iVar15 - 1U & 0x3ff) >> 2 &
                (-iVar15 & uVar5) >> (*(byte *)(param_2 + 1) - 1 & 0xff) | 1;
      }
      if (uVar3 < uVar9) {
        uVar3 = iVar15 + uVar3;
      }
    }
    if (param_4 == 0) {
      return (int *)0x0;
    }
    if ((uint)param_2[3] >> (uint)(byte)((char)param_2[1] - 1) != 0) {
      bVar14 = (char)param_2[1] + 1;
      uVar9 = (uint)bVar14;
      if (0x1f < uVar9) {
        return (int *)0x0;
      }
      uVar1 = 1 << uVar9;
      if (0x3fffffff < uVar1) {
        return (int *)0x0;
      }
      pvVar2 = (void *)(**(code **)param_2[4])(4 << uVar9);
      if (pvVar2 == (void *)0x0) {
        return (int *)0x0;
      }
      uVar3 = uVar1 - 1;
      memset(pvVar2,0,4 << uVar9);
      uVar10 = (uVar3 & 0x3ff) >> 2;
      for (uVar11 = 0; uVar11 < (uint)param_2[2]; uVar11 = uVar11 + 1) {
        puVar12 = *(undefined4 **)(*param_2 + uVar11 * 4);
        if (puVar12 != (undefined4 *)0x0) {
          uVar6 = FUN_000138cc(param_1,*puVar12);
          uVar8 = 0;
          for (uVar13 = uVar3 & uVar6; *(int *)((int)pvVar2 + uVar13 * 4) != 0;
              uVar13 = uVar13 - uVar8) {
            if (uVar8 == 0) {
              uVar8 = uVar10 & (uVar6 & -uVar1) >> (uVar9 - 1 & 0xff) | 1;
            }
            if (uVar13 < uVar8) {
              uVar13 = uVar13 + uVar1;
            }
          }
          *(undefined4 *)((int)pvVar2 + uVar13 * 4) = *(undefined4 *)(*param_2 + uVar11 * 4);
        }
      }
      (**(code **)(param_2[4] + 8))();
      *(byte *)(param_2 + 1) = bVar14;
      *param_2 = (int)pvVar2;
      uVar11 = 0;
      param_2[2] = uVar1;
      for (uVar3 = uVar5 & uVar3; *(int *)((int)pvVar2 + uVar3 * 4) != 0; uVar3 = uVar3 - uVar11) {
        if (uVar11 == 0) {
          uVar11 = uVar10 & (-uVar1 & uVar5) >> (uVar9 - 1 & 0xff) | 1;
        }
        if (uVar3 < uVar11) {
          uVar3 = uVar3 + uVar1;
        }
      }
    }
  }
  iVar15 = *param_2;
  uVar4 = (**(code **)param_2[4])(param_4);
  *(undefined4 *)(iVar15 + uVar3 * 4) = uVar4;
  pvVar2 = *(void **)(*param_2 + uVar3 * 4);
  if (pvVar2 == (void *)0x0) {
    return (int *)0x0;
  }
  memset(pvVar2,0,param_4);
  **(int **)(*param_2 + uVar3 * 4) = param_3;
  param_2[3] = param_2[3] + 1;
  return *(int **)(*param_2 + uVar3 * 4);
}



/* ===== FUN_00013cc4 @ 00013cc4 size=448 ===== */

undefined4 FUN_00013cc4(int *param_1)

{
  int iVar1;
  void *__src;
  int iVar2;
  int *piVar3;
  int *__dest;
  int iVar4;
  int iVar5;
  
  piVar3 = (int *)param_1[1];
  iVar4 = param_1[4];
  if (piVar3 != (int *)0x0) {
    if (iVar4 == 0) {
      *param_1 = (int)piVar3;
      param_1[1] = *piVar3;
      *piVar3 = 0;
      iVar4 = *param_1 + 8;
      param_1[4] = iVar4;
      param_1[2] = iVar4 + *(int *)(*param_1 + 4);
      param_1[3] = iVar4;
      return 1;
    }
    if (param_1[2] - iVar4 < piVar3[1]) {
      iVar2 = *piVar3;
      *piVar3 = *param_1;
      iVar4 = param_1[1];
      *param_1 = iVar4;
      param_1[1] = iVar2;
      memcpy((void *)(iVar4 + 8),(void *)param_1[4],param_1[2] - param_1[4]);
      iVar4 = *param_1 + 8;
      param_1[3] = iVar4 + (param_1[3] - param_1[4]);
      param_1[4] = iVar4;
      param_1[2] = iVar4 + *(int *)(*param_1 + 4);
      return 1;
    }
  }
  iVar2 = param_1[2] - iVar4;
  if ((*param_1 == 0) || (iVar4 != *param_1 + 8)) {
    if (iVar2 < 0) {
      return 0;
    }
    if (iVar2 < 0x400) {
      iVar2 = 0x400;
    }
    else {
      iVar2 = iVar2 * 2;
      if (iVar2 < 0) {
        return 0;
      }
    }
    if (iVar2 + 8 < 0) {
      return 0;
    }
    piVar3 = (int *)(**(code **)param_1[5])();
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar3[1] = iVar2;
    *piVar3 = *param_1;
    __dest = piVar3 + 2;
    __src = (void *)param_1[4];
    *param_1 = (int)piVar3;
    if ((void *)param_1[3] != __src) {
      __dest = memcpy(__dest,__src,param_1[3] - (int)__src);
    }
    param_1[3] = (int)__dest + (param_1[3] - param_1[4]);
  }
  else {
    iVar2 = iVar2 * 2;
    if ((iVar2 < 1) || (iVar2 + 8 < 0)) {
      return 0;
    }
    iVar5 = param_1[3];
    iVar1 = (**(code **)(param_1[5] + 4))();
    if (iVar1 == 0) {
      return 0;
    }
    *param_1 = iVar1;
    *(int *)(iVar1 + 4) = iVar2;
    __dest = (int *)(*param_1 + 8);
    param_1[3] = (int)__dest + (iVar5 - iVar4);
  }
  param_1[4] = (int)__dest;
  param_1[2] = (int)__dest + iVar2;
  return 1;
}



/* ===== FUN_00013e84 @ 00013e84 size=92 ===== */

undefined4 FUN_00013e84(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  while( true ) {
    if ((*(int *)(param_1 + 0xc) == *(int *)(param_1 + 8)) &&
       (iVar3 = FUN_00013cc4(param_1), iVar3 == 0)) break;
    pcVar4 = *(char **)(param_1 + 0xc);
    *(char **)(param_1 + 0xc) = pcVar4 + 1;
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
      return uVar2;
    }
  }
  return 0;
}



/* ===== FUN_00013ee0 @ 00013ee0 size=232 ===== */

undefined4 FUN_00013ee0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = (char *)*param_2;
  do {
    pcVar3 = pcVar7;
    if (*pcVar3 == '\0') {
      return 1;
    }
    pcVar7 = pcVar3 + 1;
  } while (*pcVar3 != ':');
  iVar6 = *(int *)(param_1 + 0x160);
  pcVar7 = (char *)*param_2;
  while( true ) {
    if (pcVar3 == pcVar7) {
      if ((*(int *)(iVar6 + 0x58) != *(int *)(iVar6 + 0x5c)) ||
         (iVar2 = FUN_00013cc4(iVar6 + 0x50), iVar2 != 0)) {
        puVar4 = *(undefined1 **)(iVar6 + 0x5c);
        *(undefined1 **)(iVar6 + 0x5c) = puVar4 + 1;
        *puVar4 = 0;
        piVar1 = (int *)FUN_000139d0(param_1,iVar6 + 0x3c,*(undefined4 *)(iVar6 + 0x60),8);
        if (piVar1 != (int *)0x0) {
          if (*piVar1 == *(int *)(iVar6 + 0x60)) {
            *(undefined4 *)(iVar6 + 0x60) = *(undefined4 *)(iVar6 + 0x5c);
          }
          else {
            *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x60);
          }
          param_2[1] = piVar1;
          return 1;
        }
      }
      return 0;
    }
    if ((*(int *)(iVar6 + 0x58) == *(int *)(iVar6 + 0x5c)) &&
       (iVar2 = FUN_00013cc4(iVar6 + 0x50), iVar2 == 0)) break;
    pcVar5 = *(char **)(iVar6 + 0x5c);
    *(char **)(iVar6 + 0x5c) = pcVar5 + 1;
    *pcVar5 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  }
  return 0;
}



/* ===== FUN_00013fc8 @ 00013fc8 size=136 ===== */

undefined4 FUN_00013fc8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_24 [2];
  
  local_24[0] = param_3;
  if ((*(int *)(param_1 + 0xc) != 0) || (iVar2 = FUN_00013cc4(), iVar2 != 0)) {
    do {
      uVar1 = (**(code **)(param_2 + 0x38))
                        (param_2,local_24,param_4,param_1 + 0xc,*(undefined4 *)(param_1 + 8));
      if (uVar1 < 2) {
        return *(undefined4 *)(param_1 + 0x10);
      }
      iVar2 = FUN_00013cc4(param_1);
    } while (iVar2 != 0);
  }
  return 0;
}



/* ===== FUN_00014050 @ 00014050 size=92 ===== */

undefined4 FUN_00014050(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00013fc8();
  if ((iVar1 != 0) &&
     ((*(int *)(param_1 + 0xc) != *(int *)(param_1 + 8) ||
      (iVar1 = FUN_00013cc4(param_1), iVar1 != 0)))) {
    puVar2 = *(undefined1 **)(param_1 + 0xc);
    *(undefined1 **)(param_1 + 0xc) = puVar2 + 1;
    *puVar2 = 0;
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}



/* ===== FUN_000140ac @ 000140ac size=116 ===== */

int * FUN_000140ac(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x160);
  iVar1 = FUN_00014050(iVar3 + 0x50);
  if ((iVar1 != 0) &&
     (piVar2 = (int *)FUN_000139d0(param_1,iVar3 + 0x14,iVar1,0x18), piVar2 != (int *)0x0)) {
    if (*piVar2 != iVar1) {
      *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar3 + 0x60);
      return piVar2;
    }
    *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(iVar3 + 0x5c);
    iVar1 = FUN_00013ee0(param_1,piVar2);
    if (iVar1 != 0) {
      return piVar2;
    }
  }
  return (int *)0x0;
}



/* ===== FUN_00014120 @ 00014120 size=216 ===== */

undefined4 FUN_00014120(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_000127c8();
    }
    return 1;
  }
  param_3 = param_3 + *(int *)(param_2 + 0x40) * 2;
  iVar4 = param_1 + 0x19c;
  iVar1 = (**(code **)(param_2 + 0x1c))(param_2,param_3);
  iVar2 = FUN_00014050(iVar4,param_2,param_3,param_3 + iVar1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
    uVar3 = (**(code **)(param_2 + 0x20))(param_2,param_3 + iVar1);
    iVar1 = FUN_00014050(iVar4,param_2,uVar3,param_4 + *(int *)(param_2 + 0x40) * -2);
    if (iVar1 != 0) {
      FUN_00012760();
      (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 4),iVar2,iVar1);
      FUN_00012b58(iVar4);
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_000141f8 @ 000141f8 size=128 ===== */

undefined4 FUN_000141f8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_000127c8();
    }
  }
  else {
    iVar1 = FUN_00014050(param_1 + 0x19c,param_2,param_3 + *(int *)(param_2 + 0x40) * 4,
                         param_4 + *(int *)(param_2 + 0x40) * -3);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00012760();
    (**(code **)(param_1 + 0x44))(*(undefined4 *)(param_1 + 4),iVar1);
    FUN_00012b58(param_1 + 0x19c);
  }
  return 1;
}



/* ===== FUN_00014278 @ 00014278 size=532 ===== */

undefined4 * FUN_00014278(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  
  iVar8 = *(int *)(param_1 + 0x160);
  iVar10 = iVar8 + 0x50;
  if ((*(int *)(iVar8 + 0x5c) != *(int *)(iVar8 + 0x58)) ||
     (iVar6 = FUN_00013cc4(iVar10), iVar6 != 0)) {
    puVar2 = *(undefined1 **)(iVar8 + 0x5c);
    *(undefined1 **)(iVar8 + 0x5c) = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = (undefined1 *)FUN_00014050(iVar10,param_2,param_3,param_4);
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = (undefined4 *)FUN_000139d0(param_1,iVar8 + 0x28,puVar2 + 1,0xc);
      if (puVar3 != (undefined4 *)0x0) {
        if ((undefined1 *)*puVar3 != puVar2 + 1) {
          iVar10 = *(int *)(iVar8 + 0x60);
LAB_0001445c:
          *(int *)(iVar8 + 0x5c) = iVar10;
          return puVar3;
        }
        *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)(iVar8 + 0x5c);
        if (*(char *)(param_1 + 0xe8) == '\0') {
          return puVar3;
        }
        puVar7 = puVar2;
        if (((((puVar2[1] == 'x') && (puVar2[2] == 'm')) && (puVar2[3] == 'l')) &&
            ((puVar2[4] == 'n' && (puVar2[5] == 's')))) &&
           (cVar1 = puVar2[6], cVar1 == ':' || cVar1 == '\0')) {
          if (cVar1 == '\0') {
            puVar3[1] = iVar8 + 0x98;
          }
          else {
            uVar4 = FUN_000139d0(param_1,iVar8 + 0x3c,puVar2 + 7,8);
            puVar3[1] = uVar4;
          }
          *(undefined1 *)((int)puVar3 + 9) = 1;
          return puVar3;
        }
        do {
          puVar9 = puVar7;
          if (puVar9[1] == '\0') {
            return puVar3;
          }
          puVar7 = puVar9 + 1;
        } while (puVar9[1] != ':');
        while( true ) {
          if (puVar9 == puVar2) break;
          if ((*(int *)(iVar8 + 0x5c) == *(int *)(iVar8 + 0x58)) &&
             (iVar6 = FUN_00013cc4(iVar10), iVar6 == 0)) {
            return (undefined4 *)0x0;
          }
          puVar7 = *(undefined1 **)(iVar8 + 0x5c);
          *(undefined1 **)(iVar8 + 0x5c) = puVar7 + 1;
          puVar2 = puVar2 + 1;
          *puVar7 = *puVar2;
        }
        if ((*(int *)(iVar8 + 0x5c) != *(int *)(iVar8 + 0x58)) ||
           (iVar10 = FUN_00013cc4(iVar10), iVar10 != 0)) {
          puVar2 = *(undefined1 **)(iVar8 + 0x5c);
          *(undefined1 **)(iVar8 + 0x5c) = puVar2 + 1;
          *puVar2 = 0;
          piVar5 = (int *)FUN_000139d0(param_1,iVar8 + 0x3c,*(undefined4 *)(iVar8 + 0x60),8);
          puVar3[1] = piVar5;
          if (piVar5 != (int *)0x0) {
            iVar10 = *(int *)(iVar8 + 0x60);
            if (*piVar5 == iVar10) {
              *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)(iVar8 + 0x5c);
              return puVar3;
            }
            goto LAB_0001445c;
          }
        }
      }
    }
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_0001448c @ 0001448c size=532 ===== */

void FUN_0001448c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_34 [8];
  int local_2c;
  
  iVar10 = 0;
  piVar7 = *(int **)(DAT_000146a0 + 0x144ac + DAT_000146a4);
  iVar11 = 0;
  local_2c = *piVar7;
  FUN_00012b0c(auStack_34,param_4);
  do {
    puVar1 = (undefined4 *)FUN_00012b28(auStack_34);
    if (puVar1 == (undefined4 *)0x0) {
      uVar3 = 1;
LAB_000144fc:
      if (local_2c == *piVar7) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    iVar2 = FUN_00013e84(param_3,*puVar1);
    if ((iVar2 == 0) || (iVar2 = FUN_000139d0(param_1,param_2,iVar2,0x24), iVar2 == 0)) {
LAB_000144f8:
      uVar3 = 0;
      goto LAB_000144fc;
    }
    if (puVar1[4] == 0) {
      puVar8 = (undefined1 *)puVar1[1];
      iVar4 = puVar1[2];
      puVar9 = puVar8;
      if ((*(int *)(param_3 + 0xc) != 0) || (iVar5 = FUN_00013cc4(param_3), iVar5 != 0)) {
        for (; 0 < (int)(puVar8 + (iVar4 - (int)puVar9)); puVar9 = puVar9 + 1) {
          if ((*(int *)(param_3 + 8) == *(int *)(param_3 + 0xc)) &&
             (iVar5 = FUN_00013cc4(param_3), iVar5 == 0)) goto LAB_000144f8;
          puVar6 = *(undefined1 **)(param_3 + 0xc);
          *(undefined1 **)(param_3 + 0xc) = puVar6 + 1;
          *puVar6 = *puVar9;
        }
        iVar4 = *(int *)(param_3 + 0x10);
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0xc);
        if (iVar4 != 0) {
          *(int *)(iVar2 + 4) = iVar4;
          *(undefined4 *)(iVar2 + 8) = puVar1[2];
          goto LAB_000145a8;
        }
      }
      goto LAB_000144f8;
    }
    iVar4 = FUN_00013e84(param_3);
    if (iVar4 == 0) goto LAB_000144f8;
    *(int *)(iVar2 + 0x10) = iVar4;
    iVar4 = puVar1[5];
    if (iVar4 != 0) {
      if (iVar4 == iVar11) {
        *(int *)(iVar2 + 0x14) = iVar10;
      }
      else {
        iVar10 = FUN_00013e84(param_3,iVar4);
        if (iVar10 == 0) goto LAB_000144f8;
        *(int *)(iVar2 + 0x14) = iVar10;
        iVar11 = iVar4;
      }
    }
    if (puVar1[6] != 0) {
      iVar4 = FUN_00013e84(param_3);
      if (iVar4 == 0) goto LAB_000144f8;
      *(int *)(iVar2 + 0x18) = iVar4;
    }
LAB_000145a8:
    if (puVar1[7] != 0) {
      iVar4 = FUN_00013e84(param_3);
      if (iVar4 == 0) goto LAB_000144f8;
      *(int *)(iVar2 + 0x1c) = iVar4;
    }
    *(undefined1 *)(iVar2 + 0x21) = *(undefined1 *)((int)puVar1 + 0x21);
    *(undefined1 *)(iVar2 + 0x22) = *(undefined1 *)((int)puVar1 + 0x22);
  } while( true );
}



/* ===== FUN_000146a8 @ 000146a8 size=584 ===== */

undefined4 FUN_000146a8(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  iVar10 = *(int *)(param_1 + 0x160);
  iVar9 = param_1 + 0x19c;
  pcVar8 = param_2;
  pcVar7 = param_2;
  iVar2 = param_1;
  while( true ) {
    while( true ) {
      while( true ) {
        if (*pcVar7 == '\0') {
          return 1;
        }
        cVar1 = *pcVar8;
        iVar5 = *(int *)(param_1 + 0x1a8);
        iVar3 = *(int *)(param_1 + 0x1a4);
        if (cVar1 != '\0' && cVar1 != '\f') break;
        if ((iVar3 == iVar5) && (iVar3 = FUN_00013cc4(iVar9), iVar3 == 0)) {
          return 0;
        }
        puVar6 = *(undefined1 **)(param_1 + 0x1a8);
        *(undefined1 **)(param_1 + 0x1a8) = puVar6 + 1;
        *puVar6 = 0;
        iVar3 = FUN_000139d0(param_1,iVar10,*(undefined4 *)(param_1 + 0x1ac),0,iVar2,param_2,param_3
                            );
        if (iVar3 != 0) {
          *(undefined1 *)(iVar3 + 0x20) = 1;
        }
        if (*pcVar8 != '\0') {
          pcVar8 = pcVar8 + 1;
        }
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1ac);
        pcVar7 = pcVar8;
      }
      if (cVar1 != '=') break;
      pcVar4 = pcVar8;
      if (*(int *)(param_1 + 0x1ac) == iVar5) {
        piVar11 = (int *)(iVar10 + 0x98);
      }
      else {
        if ((iVar3 == iVar5) && (iVar3 = FUN_00013cc4(iVar9), iVar3 == 0)) {
          return 0;
        }
        puVar6 = *(undefined1 **)(param_1 + 0x1a8);
        *(undefined1 **)(param_1 + 0x1a8) = puVar6 + 1;
        *puVar6 = 0;
        piVar11 = (int *)FUN_000139d0(param_1,iVar10 + 0x3c,*(undefined4 *)(param_1 + 0x1ac),8,iVar2
                                      ,param_2,param_3);
        if (piVar11 == (int *)0x0) {
          return 0;
        }
        if (*piVar11 == *(int *)(param_1 + 0x1ac)) {
          iVar2 = FUN_00013e84(iVar10 + 0x50);
          *piVar11 = iVar2;
          if (iVar2 == 0) {
            return 0;
          }
        }
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1ac);
      }
      while( true ) {
        pcVar8 = pcVar4 + 1;
        if (*pcVar8 == '\f' || *pcVar8 == '\0') break;
        if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
           (iVar2 = FUN_00013cc4(iVar9), iVar2 == 0)) {
          return 0;
        }
        pcVar7 = *(char **)(param_1 + 0x1a8);
        *(char **)(param_1 + 0x1a8) = pcVar7 + 1;
        *pcVar7 = *pcVar8;
        pcVar4 = pcVar8;
      }
      if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
         (iVar2 = FUN_00013cc4(iVar9), iVar2 == 0)) {
        return 0;
      }
      puVar6 = *(undefined1 **)(param_1 + 0x1a8);
      *(undefined1 **)(param_1 + 0x1a8) = puVar6 + 1;
      *puVar6 = 0;
      iVar2 = param_1 + 0x170;
      iVar3 = FUN_00012e58(param_1,piVar11,0,*(undefined4 *)(param_1 + 0x1ac));
      if (iVar3 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1ac);
      pcVar7 = pcVar8;
      if (*pcVar8 != '\0') {
        pcVar8 = pcVar4 + 2;
        pcVar7 = pcVar8;
      }
    }
    if ((iVar3 == iVar5) && (iVar3 = FUN_00013cc4(iVar9), iVar3 == 0)) break;
    pcVar4 = *(char **)(param_1 + 0x1a8);
    *(char **)(param_1 + 0x1a8) = pcVar4 + 1;
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  }
  return 0;
}



/* ===== FUN_000148f0 @ 000148f0 size=400 ===== */

void FUN_000148f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ssize_t sVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  uint local_30;
  timeval tStack_2c;
  int local_24;
  
  piVar8 = *(int **)(DAT_00014a80 + 0x14900 + DAT_00014a84);
  local_24 = *piVar8;
  if (*(int *)(param_1 + 0x1ec) == 0) {
    uVar7 = 0;
    do {
      iVar1 = getrandom((int)&local_30 + uVar7,4 - uVar7,1);
      if ((0 < iVar1) && (uVar7 = uVar7 + iVar1, 3 < uVar7)) {
        iVar1 = DAT_00014aa4 + 0x14a78;
        uVar7 = local_30;
        goto LAB_00014a00;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    iVar1 = open64((char *)(DAT_00014a88 + 0x14970),0);
    uVar7 = 0;
    if (-1 < iVar1) goto LAB_000149b0;
    do {
      uVar7 = 0;
      iVar3 = gettimeofday(&tStack_2c,(__timezone_ptr_t)0x0);
      if (iVar3 == 0) {
        local_30 = getpid();
        local_30 = local_30 ^ tStack_2c.tv_usec;
        iVar1 = DAT_00014aa0 + 0x14a64;
        uVar7 = local_30 * 0x7fffffff;
        goto LAB_00014a00;
      }
      __assert((char *)(DAT_00014a94 + 0x149b0),(char *)(DAT_00014a90 + 0x149a8),0x371);
LAB_000149b0:
      do {
        sVar4 = read(iVar1,(void *)((int)&local_30 + uVar7),4 - uVar7);
        if ((0 < sVar4) && (uVar7 = uVar7 + sVar4, 3 < uVar7)) {
          bVar6 = true;
          goto LAB_000149e4;
        }
      } while (*piVar2 == 4);
      bVar6 = false;
LAB_000149e4:
      close(iVar1);
    } while (!bVar6);
    iVar1 = DAT_00014a98 + 0x14a04;
    uVar7 = local_30;
LAB_00014a00:
    uVar5 = FUN_000136a4(iVar1,uVar7);
    *(undefined4 *)(param_1 + 0x1ec) = uVar5;
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {
    uVar5 = 1;
  }
  else {
    uVar5 = FUN_000146a8(param_1,DAT_00014a9c + 0x14abb);
  }
  if (local_24 == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}



/* ===== XML_ParserReset @ 00014aa8 size=516 ===== */

void XML_ParserReset(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_2c [8];
  int local_24;
  
  piVar6 = *(int **)(DAT_00014cac + 0x14ab8 + DAT_00014cb0);
  local_24 = *piVar6;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1d8) != 0)) {
    uVar1 = 0;
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 0x168);
    while (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar4;
      *puVar4 = *(undefined4 *)(param_1 + 0x16c);
      iVar5 = puVar4[0xb];
      while (iVar5 != 0) {
        iVar2 = *(int *)(iVar5 + 4);
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + 0x174);
        *(int *)(param_1 + 0x174) = iVar5;
        iVar5 = iVar2;
      }
      puVar4[0xb] = 0;
      *(undefined4 **)(param_1 + 0x16c) = puVar4;
      puVar4 = puVar3;
    }
    iVar5 = *(int *)(param_1 + 0x128);
    while (iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_1 + 300);
      *(int *)(param_1 + 300) = iVar5;
      iVar5 = iVar2;
    }
    iVar5 = *(int *)(param_1 + 0x170);
    while (iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 4);
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + 0x174);
      *(int *)(param_1 + 0x174) = iVar5;
      iVar5 = iVar2;
    }
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0xec));
    if (*(code **)(param_1 + 0xf8) != (code *)0x0) {
      (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xf0));
    }
    FUN_00012b58(param_1 + 0x19c);
    FUN_00012b58(param_1 + 0x1b4);
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0xe4));
    *(undefined4 *)(param_1 + 0xe4) = 0;
    FUN_00013714(param_1,param_2);
    iVar5 = *(int *)(param_1 + 0x160);
    FUN_00012b0c(auStack_2c,iVar5 + 0x14);
    while (iVar2 = FUN_00012b28(auStack_2c), iVar2 != 0) {
      if (*(int *)(iVar2 + 0x10) != 0) {
        (**(code **)(param_1 + 0x14))(*(undefined4 *)(iVar2 + 0x14));
      }
    }
    FUN_00012a84(iVar5);
    *(undefined1 *)(iVar5 + 0x83) = 0;
    FUN_00012a84(iVar5 + 0x84);
    FUN_00012a84(iVar5 + 0x14);
    FUN_00012a84(iVar5 + 0x28);
    FUN_00012a84(iVar5 + 0x3c);
    FUN_00012b58(iVar5 + 0x50);
    FUN_00012b58(iVar5 + 0x68);
    *(undefined4 *)(iVar5 + 0x98) = 0;
    *(undefined4 *)(iVar5 + 0x9c) = 0;
    *(undefined1 *)(iVar5 + 0xa0) = 0;
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(iVar5 + 0xb8));
    *(undefined4 *)(iVar5 + 0xb8) = 0;
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(iVar5 + 0xa4));
    *(undefined4 *)(iVar5 + 0xa4) = 0;
    uVar1 = 1;
    *(undefined4 *)(iVar5 + 0xb4) = 0;
    *(undefined4 *)(iVar5 + 0xac) = 0;
    *(undefined4 *)(iVar5 + 0xb0) = 0;
    *(undefined4 *)(iVar5 + 0xa8) = 0;
    *(undefined2 *)(iVar5 + 0x80) = 1;
    *(undefined1 *)(iVar5 + 0x82) = 0;
  }
  if (local_24 == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



/* ===== XML_SetEncoding @ 00014cb4 size=104 ===== */

bool XML_SetEncoding(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return false;
  }
  if ((*(uint *)(param_1 + 0x1dc) & 0xfffffffd) != 1) {
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0xe4));
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
      return true;
    }
    iVar1 = FUN_000135c8(param_2,param_1 + 0xc);
    *(int *)(param_1 + 0xe4) = iVar1;
    return iVar1 != 0;
  }
  return false;
}



/* ===== XML_ParserFree @ 00014d1c size=552 ===== */

void XML_ParserFree(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_2c [8];
  int local_24;
  
  piVar5 = *(int **)(DAT_00014f44 + 0x14d2c + DAT_00014f48);
  local_24 = *piVar5;
  if (param_1 != 0) {
    piVar3 = *(int **)(param_1 + 0x168);
    do {
      piVar4 = piVar3;
      if (piVar3 == (int *)0x0) {
        piVar4 = *(int **)(param_1 + 0x16c);
        if (piVar4 == (int *)0x0) goto LAB_00014d98;
        *(undefined4 *)(param_1 + 0x16c) = 0;
      }
      piVar3 = (int *)*piVar4;
      (**(code **)(param_1 + 0x14))(piVar4[9]);
      FUN_00013258(piVar4[0xb],param_1 + 0x14);
      (**(code **)(param_1 + 0x14))(piVar4);
    } while( true );
  }
LAB_00014f28:
  if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00014d98:
  iVar1 = *(int *)(param_1 + 0x128);
  do {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 300);
      if (iVar1 == 0) break;
      *(undefined4 *)(param_1 + 300) = 0;
    }
    iVar1 = *(int *)(iVar1 + 8);
    (**(code **)(param_1 + 0x14))();
  } while( true );
  FUN_00013258(*(undefined4 *)(param_1 + 0x174),param_1 + 0x14);
  FUN_00013258(*(undefined4 *)(param_1 + 0x170),param_1 + 0x14);
  FUN_00012ba4(param_1 + 0x19c);
  FUN_00012ba4(param_1 + 0x1b4);
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0xe4));
  if ((*(char *)(param_1 + 0x1e4) == '\0') && (iVar1 = *(int *)(param_1 + 0x160), iVar1 != 0)) {
    iVar6 = *(int *)(param_1 + 0x1d8);
    FUN_00012b0c(auStack_2c,iVar1 + 0x14);
    while (iVar2 = FUN_00012b28(auStack_2c), iVar2 != 0) {
      if (*(int *)(iVar2 + 0x10) != 0) {
        (**(code **)(param_1 + 0x14))(*(undefined4 *)(iVar2 + 0x14));
      }
    }
    FUN_00012ad0(iVar1);
    FUN_00012ad0(iVar1 + 0x84);
    FUN_00012ad0(iVar1 + 0x14);
    FUN_00012ad0(iVar1 + 0x28);
    FUN_00012ad0(iVar1 + 0x3c);
    FUN_00012ba4(iVar1 + 0x50);
    FUN_00012ba4(iVar1 + 0x68);
    if (iVar6 == 0) {
      (**(code **)(param_1 + 0x14))(*(undefined4 *)(iVar1 + 0xb8));
      (**(code **)(param_1 + 0x14))(*(undefined4 *)(iVar1 + 0xa4));
    }
    (**(code **)(param_1 + 0x14))(iVar1);
  }
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x184));
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x1cc));
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 8));
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x2c));
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x188));
  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0xec));
  if (*(code **)(param_1 + 0xf8) != (code *)0x0) {
    (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xf0));
  }
  (**(code **)(param_1 + 0x14))(param_1);
  goto LAB_00014f28;
}



/* ===== FUN_00014f4c @ 00014f4c size=708 ===== */

void * FUN_00014f4c(int param_1,undefined4 *param_2,undefined1 *param_3,int param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_00015210 + 0x14f6c;
  if (param_2 == (undefined4 *)0x0) {
    pvVar1 = malloc(0x220);
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
    *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)(iVar4 + DAT_00015214);
    *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)(iVar4 + DAT_00015218);
    uVar3 = *(undefined4 *)(iVar4 + DAT_0001521c);
  }
  else {
    pvVar1 = (void *)(*(code *)*param_2)(0x220);
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
    *(undefined4 *)((int)pvVar1 + 0xc) = *param_2;
    *(undefined4 *)((int)pvVar1 + 0x10) = param_2[1];
    uVar3 = param_2[2];
  }
  *(undefined4 *)((int)pvVar1 + 0x14) = uVar3;
  *(undefined4 *)((int)pvVar1 + 8) = 0;
  *(undefined4 *)((int)pvVar1 + 0x20) = 0;
  *(undefined4 *)((int)pvVar1 + 0x178) = 0x10;
  iVar4 = (**(code **)((int)pvVar1 + 0xc))(0x100);
  *(int *)((int)pvVar1 + 0x184) = iVar4;
  if (iVar4 != 0) {
    iVar4 = (**(code **)((int)pvVar1 + 0xc))(0x400);
    *(int *)((int)pvVar1 + 0x2c) = iVar4;
    if (iVar4 != 0) {
      *(int *)((int)pvVar1 + 0x30) = iVar4 + 0x400;
      iVar4 = (int)pvVar1 + 0xc;
      if (param_4 != 0) {
        *(int *)((int)pvVar1 + 0x160) = param_4;
LAB_00015148:
        *(int *)((int)pvVar1 + 0x1b0) = iVar4;
        *(undefined4 *)((int)pvVar1 + 0x174) = 0;
        *(undefined4 *)((int)pvVar1 + 0x16c) = 0;
        *(undefined4 *)((int)pvVar1 + 300) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1d0) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1cc) = 0;
        *(undefined4 *)((int)pvVar1 + 0x7c) = 0;
        *(undefined4 *)((int)pvVar1 + 0xf4) = 0;
        *(undefined1 *)((int)pvVar1 + 0x1d4) = 0x21;
        *(undefined4 *)((int)pvVar1 + 0x188) = 0;
        *(undefined4 *)((int)pvVar1 + 0x18c) = 0;
        *(undefined1 *)((int)pvVar1 + 400) = 0;
        *(undefined4 *)((int)pvVar1 + 0xe4) = 0;
        *(undefined2 *)((int)pvVar1 + 0xe8) = 0;
        *(undefined4 *)((int)pvVar1 + 0x19c) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1a0) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1ac) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1a8) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1a4) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1b4) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1b8) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1c4) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1c0) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1bc) = 0;
        *(int *)((int)pvVar1 + 0x1c8) = iVar4;
        FUN_00013714(pvVar1,param_1);
        if ((param_1 != 0) && (*(int *)((int)pvVar1 + 0xe4) == 0)) {
          XML_ParserFree(pvVar1);
          return (void *)0x0;
        }
        if (param_3 == (undefined1 *)0x0) {
          uVar3 = FUN_000293e8();
          *(undefined4 *)((int)pvVar1 + 0xe0) = uVar3;
          return pvVar1;
        }
        *(undefined1 *)((int)pvVar1 + 0xe8) = 1;
        uVar3 = FUN_000294e0();
        *(undefined4 *)((int)pvVar1 + 0xe0) = uVar3;
        *(undefined1 *)((int)pvVar1 + 0x1d4) = *param_3;
        return pvVar1;
      }
      puVar2 = (undefined4 *)(**(code **)((int)pvVar1 + 0xc))(0xbc);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[0x14] = 0;
        puVar2[0x15] = 0;
        puVar2[0x18] = 0;
        puVar2[0x17] = 0;
        puVar2[0x16] = 0;
        puVar2[0x19] = iVar4;
        puVar2[0x1a] = 0;
        puVar2[0x1b] = 0;
        puVar2[0x1e] = 0;
        puVar2[0x1d] = 0;
        puVar2[0x1c] = 0;
        puVar2[0x1f] = iVar4;
        *(undefined1 *)(puVar2 + 1) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[4] = iVar4;
        *(undefined1 *)(puVar2 + 6) = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[5] = 0;
        puVar2[9] = iVar4;
        *(undefined1 *)(puVar2 + 0xb) = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        puVar2[10] = 0;
        puVar2[0xe] = iVar4;
        *(undefined1 *)(puVar2 + 0x10) = 0;
        puVar2[0x11] = 0;
        puVar2[0x12] = 0;
        puVar2[0xf] = 0;
        puVar2[0x13] = iVar4;
        puVar2[0x23] = 0;
        puVar2[0x24] = 0;
        puVar2[0x25] = iVar4;
        puVar2[0x26] = 0;
        puVar2[0x27] = 0;
        *(undefined1 *)(puVar2 + 0x28) = 0;
        puVar2[0x2e] = 0;
        puVar2[0x29] = 0;
        puVar2[0x2d] = 0;
        puVar2[0x2b] = 0;
        puVar2[0x2c] = 0;
        puVar2[0x2a] = 0;
        puVar2[0x20] = 1;
        puVar2[0x21] = 0;
        *(undefined1 *)(puVar2 + 0x22) = 0;
      }
      *(undefined4 **)((int)pvVar1 + 0x160) = puVar2;
      if (puVar2 != (undefined4 *)0x0) goto LAB_00015148;
      (**(code **)((int)pvVar1 + 0x14))(*(undefined4 *)((int)pvVar1 + 0x2c));
    }
    (**(code **)((int)pvVar1 + 0x14))(*(undefined4 *)((int)pvVar1 + 0x184));
  }
  (**(code **)((int)pvVar1 + 0x14))(pvVar1);
  return (void *)0x0;
}



/* ===== XML_ParserCreate_MM @ 00015220 size=8 ===== */

void XML_ParserCreate_MM(void)

{
  FUN_00014f4c();
  return;
}



/* ===== XML_ParserCreate @ 00015228 size=12 ===== */

void XML_ParserCreate(undefined4 param_1)

{
  XML_ParserCreate_MM(param_1,0);
  return;
}



/* ===== XML_ParserCreateNS @ 00015234 size=76 ===== */

void XML_ParserCreateNS(undefined4 param_1,byte param_2)

{
  int *piVar1;
  ushort local_10;
  undefined2 uStack_e;
  int local_c;
  
  piVar1 = *(int **)(DAT_00015280 + 0x15244 + DAT_00015284);
  local_c = *piVar1;
  uStack_e = (undefined2)((uint)param_1 >> 0x10);
  local_10 = (ushort)param_2;
  XML_ParserCreate_MM(param_1,0,&local_10);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== XML_ExternalEntityParserCreate @ 00015288 size=1536 ===== */

void XML_ExternalEntityParserCreate(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 *puVar28;
  int *piVar29;
  int *piVar30;
  undefined4 *puVar31;
  int *piVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 auStack_38 [8];
  undefined1 local_30;
  undefined1 local_2f;
  int local_2c;
  
  piVar4 = *(int **)(DAT_00015888 + 0x152a0 + DAT_0001588c);
  local_2c = *piVar4;
  if (param_1 != (undefined4 *)0x0) {
    iVar5 = param_1[0xe];
    iVar35 = param_1[0x58];
    iVar6 = param_1[0xf];
    iVar33 = param_1[0xd];
    iVar7 = param_1[0x10];
    iVar8 = param_1[0x11];
    iVar9 = param_1[0x12];
    iVar10 = param_1[0x13];
    iVar11 = param_1[0x14];
    iVar12 = param_1[0x17];
    iVar13 = param_1[0x18];
    iVar14 = param_1[0x19];
    iVar15 = param_1[0x1a];
    iVar16 = param_1[0x1b];
    iVar17 = param_1[0x1c];
    iVar18 = param_1[0x1e];
    iVar19 = param_1[0x1f];
    iVar20 = param_1[0x20];
    iVar21 = param_1[0x21];
    piVar32 = (int *)*param_1;
    iVar22 = param_1[0x22];
    piVar30 = (int *)param_1[1];
    iVar23 = param_1[0x23];
    puVar31 = (undefined4 *)param_1[0x1d];
    iVar24 = param_1[0x55];
    iVar34 = param_1[0x7b];
    uVar1 = *(undefined1 *)(param_1 + 0x4c);
    iVar25 = param_1[0x7a];
    iVar26 = param_1[0x44];
    uVar2 = *(undefined1 *)((int)param_1 + 0xe9);
    iVar27 = iVar35;
    if (param_2 != 0) {
      iVar27 = 0;
    }
    puVar28 = (undefined1 *)0x0;
    if (*(char *)(param_1 + 0x3a) != '\0') {
      local_30 = *(undefined1 *)(param_1 + 0x75);
      local_2f = 0;
      puVar28 = &local_30;
    }
    piVar29 = (int *)FUN_00014f4c(param_3,param_1 + 3,puVar28,iVar27);
    if (piVar29 != (int *)0x0) {
      piVar29[0xd] = iVar33;
      piVar29[0xe] = iVar5;
      piVar29[0xf] = iVar6;
      if (piVar32 != piVar30) {
        piVar30 = piVar29;
      }
      piVar29[0x10] = iVar7;
      piVar29[0x11] = iVar8;
      piVar29[0x12] = iVar9;
      piVar29[0x13] = iVar10;
      piVar29[0x14] = iVar11;
      piVar29[0x17] = iVar12;
      piVar29[0x18] = iVar13;
      piVar29[0x19] = iVar14;
      piVar29[0x1a] = iVar15;
      piVar29[0x1b] = iVar16;
      piVar29[0x1c] = iVar17;
      piVar29[0x1e] = iVar18;
      piVar29[0x1f] = iVar19;
      piVar29[0x20] = iVar20;
      if (param_1 != puVar31) {
        piVar29[0x1d] = (int)puVar31;
      }
      piVar29[0x21] = iVar21;
      *piVar29 = (int)piVar32;
      piVar29[0x22] = iVar22;
      piVar29[1] = (int)piVar30;
      piVar29[0x23] = iVar23;
      piVar29[0x7b] = iVar34;
      piVar29[0x55] = iVar24;
      piVar29[0x76] = (int)param_1;
      *(undefined1 *)(piVar29 + 0x4c) = uVar1;
      *(undefined1 *)((int)piVar29 + 0xe9) = uVar2;
      piVar29[0x7a] = iVar25;
      piVar29[0x44] = iVar26;
      if (param_2 == 0) {
        *(undefined1 *)(piVar29 + 0x79) = 1;
        FUN_0002ae5c();
        iVar27 = DAT_00015894 + 0x15880;
        goto LAB_0001585c;
      }
      iVar5 = piVar29[0x58];
      FUN_00012b0c(auStack_38,iVar35 + 0x3c);
      iVar27 = iVar5 + 0x50;
      do {
        puVar31 = (undefined4 *)FUN_00012b28(auStack_38);
        if (puVar31 == (undefined4 *)0x0) {
          FUN_00012b0c(auStack_38,iVar35 + 0x28);
          goto LAB_00015568;
        }
        iVar6 = FUN_00013e84(iVar27,*puVar31);
      } while ((iVar6 != 0) && (iVar6 = FUN_000139d0(param_1,iVar5 + 0x3c,iVar6,8), iVar6 != 0));
      goto LAB_00015548;
    }
  }
  goto LAB_000152bc;
LAB_00015568:
  puVar31 = (undefined4 *)FUN_00012b28(auStack_38);
  if (puVar31 != (undefined4 *)0x0) {
    if ((*(int *)(iVar5 + 0x5c) == *(int *)(iVar5 + 0x58)) &&
       (iVar6 = FUN_00013cc4(iVar27), iVar6 == 0)) goto LAB_00015548;
    puVar28 = *(undefined1 **)(iVar5 + 0x5c);
    *(undefined1 **)(iVar5 + 0x5c) = puVar28 + 1;
    *puVar28 = 0;
    iVar6 = FUN_00013e84(iVar27,*puVar31);
    if ((iVar6 == 0) || (iVar6 = FUN_000139d0(param_1,iVar5 + 0x28,iVar6 + 1,0xc), iVar6 == 0))
    goto LAB_00015548;
    *(undefined1 *)(iVar6 + 8) = *(undefined1 *)(puVar31 + 2);
    if (puVar31[1] != 0) {
      *(undefined1 *)(iVar6 + 9) = *(undefined1 *)((int)puVar31 + 9);
      if ((undefined4 *)puVar31[1] == (undefined4 *)(iVar35 + 0x98)) {
        *(int *)(iVar6 + 4) = iVar5 + 0x98;
      }
      else {
        uVar3 = FUN_000139d0(param_1,iVar5 + 0x3c,*(undefined4 *)puVar31[1],0);
        *(undefined4 *)(iVar6 + 4) = uVar3;
      }
    }
    goto LAB_00015568;
  }
  FUN_00012b0c(auStack_38,iVar35 + 0x14);
  while (puVar31 = (undefined4 *)FUN_00012b28(auStack_38), puVar31 != (undefined4 *)0x0) {
    iVar6 = FUN_00013e84(iVar27,*puVar31);
    if ((iVar6 == 0) || (iVar6 = FUN_000139d0(param_1,iVar5 + 0x14,iVar6,0x18), iVar6 == 0))
    goto LAB_00015548;
    if (puVar31[3] != 0) {
      iVar7 = (*(code *)piVar29[3])(puVar31[3] * 0xc);
      *(int *)(iVar6 + 0x14) = iVar7;
      if (iVar7 == 0) goto LAB_00015548;
    }
    if ((undefined4 *)puVar31[2] != (undefined4 *)0x0) {
      uVar3 = FUN_000139d0(param_1,iVar5 + 0x28,*(undefined4 *)puVar31[2],0);
      *(undefined4 *)(iVar6 + 8) = uVar3;
    }
    uVar3 = puVar31[3];
    *(undefined4 *)(iVar6 + 0xc) = uVar3;
    *(undefined4 *)(iVar6 + 0x10) = uVar3;
    if ((undefined4 *)puVar31[1] != (undefined4 *)0x0) {
      uVar3 = FUN_000139d0(param_1,iVar5 + 0x3c,*(undefined4 *)puVar31[1],0);
      *(undefined4 *)(iVar6 + 4) = uVar3;
    }
    for (iVar7 = 0; iVar7 < *(int *)(iVar6 + 0xc); iVar7 = iVar7 + 1) {
      iVar9 = iVar7 * 0xc;
      iVar8 = *(int *)(iVar6 + 0x14);
      uVar3 = FUN_000139d0(param_1,iVar5 + 0x28,**(undefined4 **)(puVar31[5] + iVar9),0);
      *(undefined4 *)(iVar8 + iVar9) = uVar3;
      *(undefined1 *)(*(int *)(iVar6 + 0x14) + iVar9 + 4) = *(undefined1 *)(puVar31[5] + iVar9 + 4);
      iVar8 = *(int *)(iVar6 + 0x14);
      if (*(int *)(puVar31[5] + iVar9 + 8) == 0) {
        *(undefined4 *)(iVar8 + iVar9 + 8) = 0;
      }
      else {
        uVar3 = FUN_00013e84(iVar27);
        *(undefined4 *)(iVar8 + iVar9 + 8) = uVar3;
        if (*(int *)(*(int *)(iVar6 + 0x14) + iVar9 + 8) == 0) goto LAB_00015548;
      }
    }
  }
  iVar6 = FUN_0001448c(param_1,iVar5,iVar27,iVar35);
  if ((iVar6 != 0) &&
     (iVar27 = FUN_0001448c(param_1,iVar5 + 0x84,iVar27,iVar35 + 0x84), iVar27 != 0)) {
    *(undefined1 *)(iVar5 + 0x83) = *(undefined1 *)(iVar35 + 0x83);
    *(undefined1 *)(iVar5 + 0x80) = *(undefined1 *)(iVar35 + 0x80);
    *(undefined1 *)(iVar5 + 0x81) = *(undefined1 *)(iVar35 + 0x81);
    *(undefined1 *)(iVar5 + 0x82) = *(undefined1 *)(iVar35 + 0x82);
    *(undefined1 *)(iVar5 + 0xa0) = *(undefined1 *)(iVar35 + 0xa0);
    *(undefined4 *)(iVar5 + 0xa4) = *(undefined4 *)(iVar35 + 0xa4);
    *(undefined4 *)(iVar5 + 0xa8) = *(undefined4 *)(iVar35 + 0xa8);
    *(undefined4 *)(iVar5 + 0xac) = *(undefined4 *)(iVar35 + 0xac);
    *(undefined4 *)(iVar5 + 0xb4) = *(undefined4 *)(iVar35 + 0xb4);
    *(undefined4 *)(iVar5 + 0xb8) = *(undefined4 *)(iVar35 + 0xb8);
    iVar27 = FUN_000146a8(piVar29,param_2);
    if (iVar27 != 0) {
      iVar27 = DAT_00015890 + 0x15860;
LAB_0001585c:
      piVar29[0x45] = iVar27;
      goto LAB_000152c0;
    }
  }
LAB_00015548:
  XML_ParserFree(piVar29);
LAB_000152bc:
  piVar29 = (int *)0x0;
LAB_000152c0:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar29);
  }
  return;
}



/* ===== XML_UseParserAsHandlerArg @ 00015898 size=12 ===== */

void XML_UseParserAsHandlerArg(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 4) = param_1;
  }
  return;
}



/* ===== XML_UseForeignDTD @ 000158a4 size=52 ===== */

undefined4 XML_UseForeignDTD(int param_1,undefined1 param_2)

{
  if (param_1 == 0) {
    return 0x29;
  }
  if ((*(uint *)(param_1 + 0x1dc) & 0xfffffffd) != 1) {
    *(undefined1 *)(param_1 + 0x1e5) = param_2;
    return 0;
  }
  return 0x1a;
}



/* ===== XML_SetReturnNSTriplet @ 000158d8 size=40 ===== */

void XML_SetReturnNSTriplet(int param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x1dc) & 0xfffffffd) == 1) {
    return;
  }
  *(bool *)(param_1 + 0xe9) = param_2 != 0;
  return;
}



/* ===== XML_SetUserData @ 00015900 size=32 ===== */

void XML_SetUserData(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  *param_1 = param_2;
  if (param_1[1] == iVar1) {
    param_1[1] = param_2;
  }
  return;
}



/* ===== XML_SetBase @ 00015920 size=68 ===== */

undefined4 XML_SetBase(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  else {
    iVar1 = FUN_00013e84(*(int *)(param_1 + 0x160) + 0x50);
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0x164) = iVar1;
  }
  return 1;
}



/* ===== XML_GetBase @ 00015964 size=12 ===== */

undefined4 XML_GetBase(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x164);
  }
  return uVar1;
}



/* ===== XML_GetSpecifiedAttributeCount @ 00015970 size=16 ===== */

undefined4 XML_GetSpecifiedAttributeCount(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x17c);
  }
  return uVar1;
}



/* ===== XML_GetIdAttributeIndex @ 00015980 size=16 ===== */

undefined4 XML_GetIdAttributeIndex(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x180);
  }
  return uVar1;
}



/* ===== XML_SetElementHandler @ 00015990 size=16 ===== */

void XML_SetElementHandler(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x34) = param_2;
    *(undefined4 *)(param_1 + 0x38) = param_3;
  }
  return;
}



/* ===== XML_SetStartElementHandler @ 000159a0 size=12 ===== */

void XML_SetStartElementHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x34) = param_2;
  }
  return;
}



/* ===== XML_SetEndElementHandler @ 000159ac size=12 ===== */

void XML_SetEndElementHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
  }
  return;
}



/* ===== XML_SetCharacterDataHandler @ 000159b8 size=12 ===== */

void XML_SetCharacterDataHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return;
}



/* ===== XML_SetProcessingInstructionHandler @ 000159c4 size=12 ===== */

void XML_SetProcessingInstructionHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x40) = param_2;
  }
  return;
}



/* ===== XML_SetCommentHandler @ 000159d0 size=12 ===== */

void XML_SetCommentHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = param_2;
  }
  return;
}



/* ===== XML_SetCdataSectionHandler @ 000159dc size=16 ===== */

void XML_SetCdataSectionHandler(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = param_2;
    *(undefined4 *)(param_1 + 0x4c) = param_3;
  }
  return;
}



/* ===== XML_SetStartCdataSectionHandler @ 000159ec size=12 ===== */

void XML_SetStartCdataSectionHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = param_2;
  }
  return;
}



/* ===== XML_SetEndCdataSectionHandler @ 000159f8 size=12 ===== */

void XML_SetEndCdataSectionHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = param_2;
  }
  return;
}



/* ===== XML_SetDefaultHandler @ 00015a04 size=20 ===== */

void XML_SetDefaultHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = param_2;
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  return;
}



/* ===== XML_SetDefaultHandlerExpand @ 00015a18 size=20 ===== */

void XML_SetDefaultHandlerExpand(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = param_2;
    *(undefined1 *)(param_1 + 0x130) = 1;
  }
  return;
}



/* ===== XML_SetDoctypeDeclHandler @ 00015a2c size=16 ===== */

void XML_SetDoctypeDeclHandler(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x54) = param_2;
    *(undefined4 *)(param_1 + 0x58) = param_3;
  }
  return;
}



/* ===== XML_SetStartDoctypeDeclHandler @ 00015a3c size=12 ===== */

void XML_SetStartDoctypeDeclHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x54) = param_2;
  }
  return;
}



/* ===== XML_SetEndDoctypeDeclHandler @ 00015a48 size=12 ===== */

void XML_SetEndDoctypeDeclHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x58) = param_2;
  }
  return;
}



/* ===== XML_SetUnparsedEntityDeclHandler @ 00015a54 size=12 ===== */

void XML_SetUnparsedEntityDeclHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x5c) = param_2;
  }
  return;
}



/* ===== XML_SetNotationDeclHandler @ 00015a60 size=12 ===== */

void XML_SetNotationDeclHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
  }
  return;
}



/* ===== XML_SetNamespaceDeclHandler @ 00015a6c size=16 ===== */

void XML_SetNamespaceDeclHandler(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 100) = param_2;
    *(undefined4 *)(param_1 + 0x68) = param_3;
  }
  return;
}



/* ===== XML_SetStartNamespaceDeclHandler @ 00015a7c size=12 ===== */

void XML_SetStartNamespaceDeclHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 100) = param_2;
  }
  return;
}



/* ===== XML_SetEndNamespaceDeclHandler @ 00015a88 size=12 ===== */

void XML_SetEndNamespaceDeclHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = param_2;
  }
  return;
}



/* ===== XML_SetNotStandaloneHandler @ 00015a94 size=12 ===== */

void XML_SetNotStandaloneHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = param_2;
  }
  return;
}



/* ===== XML_SetExternalEntityRefHandler @ 00015aa0 size=12 ===== */

void XML_SetExternalEntityRefHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x70) = param_2;
  }
  return;
}



/* ===== XML_SetExternalEntityRefHandlerArg @ 00015aac size=24 ===== */

void XML_SetExternalEntityRefHandlerArg(int param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    param_2 = param_1;
  }
  *(int *)(param_1 + 0x74) = param_2;
  return;
}



/* ===== XML_SetSkippedEntityHandler @ 00015ac4 size=12 ===== */

void XML_SetSkippedEntityHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x78) = param_2;
  }
  return;
}



/* ===== XML_SetUnknownEncodingHandler @ 00015ad0 size=16 ===== */

void XML_SetUnknownEncodingHandler(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x7c) = param_2;
    *(undefined4 *)(param_1 + 0xf4) = param_3;
  }
  return;
}



/* ===== XML_SetElementDeclHandler @ 00015ae0 size=12 ===== */

void XML_SetElementDeclHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x80) = param_2;
  }
  return;
}



/* ===== XML_SetAttlistDeclHandler @ 00015aec size=12 ===== */

void XML_SetAttlistDeclHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x84) = param_2;
  }
  return;
}



/* ===== XML_SetEntityDeclHandler @ 00015af8 size=12 ===== */

void XML_SetEntityDeclHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
  }
  return;
}



/* ===== XML_SetXmlDeclHandler @ 00015b04 size=12 ===== */

void XML_SetXmlDeclHandler(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x8c) = param_2;
  }
  return;
}



/* ===== XML_SetParamEntityParsing @ 00015b10 size=36 ===== */

bool XML_SetParamEntityParsing(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  if (param_1 == 0) {
    return false;
  }
  bVar1 = (*(uint *)(param_1 + 0x1dc) & 0xfffffffd) != 1;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x1e8) = param_2;
  }
  return bVar1;
}



/* ===== XML_SetHashSalt @ 00015b34 size=56 ===== */

bool XML_SetHashSalt(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  do {
    iVar1 = param_1;
    if (iVar1 == 0) {
      return false;
    }
    param_1 = *(int *)(iVar1 + 0x1d8);
  } while (*(int *)(iVar1 + 0x1d8) != 0);
  bVar2 = (*(uint *)(iVar1 + 0x1dc) & 0xfffffffd) != 1;
  if (bVar2) {
    *(undefined4 *)(iVar1 + 0x1ec) = param_2;
  }
  return bVar2;
}



/* ===== XML_ParseBuffer @ 00015b6c size=312 ===== */

undefined4 XML_ParseBuffer(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x1dc);
  if (iVar2 == 2) {
    uVar1 = 0x24;
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 != 0) {
LAB_00015bf0:
        uVar1 = 1;
        iVar2 = *(int *)(param_1 + 0x1c) + param_2;
        *(undefined4 *)(param_1 + 0x1dc) = 1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_2;
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x18);
        *(int *)(param_1 + 0x1c) = iVar2;
        *(int *)(param_1 + 0x28) = iVar2;
        *(char *)(param_1 + 0x1e0) = (char)param_3;
        iVar2 = (**(code **)(param_1 + 0x114))
                          (param_1,*(undefined4 *)(param_1 + 0x18),iVar2,param_1 + 0x18);
        *(int *)(param_1 + 0x118) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x11c);
          *(int *)(param_1 + 0x114) = DAT_00015ca4 + 0x15c50;
          return 0;
        }
        if (*(uint *)(param_1 + 0x1dc) < 2) {
          if (param_3 != 0) {
            *(undefined4 *)(param_1 + 0x1dc) = 2;
            return 1;
          }
        }
        else if (*(uint *)(param_1 + 0x1dc) == 3) {
          uVar1 = 2;
        }
        else {
          uVar1 = 1;
        }
        (**(code **)(*(int *)(param_1 + 0x90) + 0x30))
                  (*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x124),
                   *(undefined4 *)(param_1 + 0x18),param_1 + 0x194);
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x18);
        return uVar1;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar1 = 0x2a;
      }
      else {
        if ((*(int *)(param_1 + 0x1d8) != 0) || (iVar2 = FUN_000148f0(), iVar2 != 0))
        goto LAB_00015bf0;
        uVar1 = 1;
      }
      *(undefined4 *)(param_1 + 0x118) = uVar1;
      return 0;
    }
    uVar1 = 0x21;
  }
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  return 0;
}



/* ===== XML_GetBuffer @ 00015ca8 size=588 ===== */

undefined4 XML_GetBuffer(int param_1,int param_2)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 < 0) goto LAB_00015cbc;
  if (*(int *)(param_1 + 0x1dc) == 2) {
    uVar2 = 0x24;
    goto LAB_00015cc0;
  }
  if (*(int *)(param_1 + 0x1dc) == 3) {
    uVar2 = 0x21;
    goto LAB_00015cc0;
  }
  iVar4 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar1 = iVar6;
  if (iVar4 == 0) {
    if (param_2 == 0) goto LAB_00015d0c;
    if (iVar6 != 0) goto LAB_00015d2c;
  }
  else if (iVar6 == 0) {
    if (param_2 == 0) goto LAB_00015d0c;
  }
  else {
    if (param_2 <= iVar4 - iVar6) goto LAB_00015d0c;
LAB_00015d2c:
    iVar1 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = iVar6 - *(int *)(param_1 + 0x18);
    }
  }
  param_2 = param_2 + iVar1;
  if (-1 < param_2) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      if ((*(int *)(param_1 + 8) != 0) && (iVar5 = iVar1 - *(int *)(param_1 + 8), 0x3ff < iVar5)) {
        iVar5 = 0x400;
      }
    }
    if (iVar5 <= 0x7fffffff - param_2) {
      param_2 = param_2 + iVar5;
      if (iVar4 == 0) {
        if (param_2 < 1) goto LAB_00015d98;
LAB_00015ed4:
        iVar6 = 0x400;
LAB_00015dcc:
        do {
          iVar1 = iVar6 * 2;
          bVar7 = param_2 == iVar1;
          iVar4 = param_2 + iVar6 * -2;
          if (param_2 > iVar1) {
            bVar7 = iVar1 == 0;
            iVar4 = iVar1;
          }
          iVar6 = iVar1;
        } while (!bVar7 && iVar4 < 0 == (param_2 <= iVar1 && SBORROW4(param_2,iVar1)));
        if ((iVar1 < 1) ||
           (__dest = (void *)(**(code **)(param_1 + 0xc))(iVar1), __dest == (void *)0x0))
        goto LAB_00015cbc;
        iVar4 = *(int *)(param_1 + 0x18);
        *(void **)(param_1 + 0x20) = (void *)((int)__dest + iVar1);
        if (iVar4 == 0) {
          *(void **)(param_1 + 0x1c) = __dest;
          *(void **)(param_1 + 8) = __dest;
          *(void **)(param_1 + 0x18) = __dest;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x1c);
          if (iVar1 != 0) {
            iVar1 = iVar1 - iVar4;
          }
          memcpy(__dest,(void *)(iVar4 - iVar5),iVar5 + iVar1);
          (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 8));
          *(void **)(param_1 + 8) = __dest;
          if (*(int *)(param_1 + 0x1c) == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = 0;
            if (*(int *)(param_1 + 0x18) != 0) {
              iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
            }
          }
          *(int *)(param_1 + 0x1c) = (int)__dest + iVar5 + iVar1;
          *(int *)(param_1 + 0x18) = (int)__dest + iVar5;
        }
      }
      else {
        iVar3 = 0;
        if (*(int *)(param_1 + 8) != 0) {
          iVar3 = iVar4 - *(int *)(param_1 + 8);
        }
        if (iVar3 < param_2) {
          if (iVar1 == 0) goto LAB_00015ed4;
          iVar6 = iVar4 - iVar1;
          if (iVar4 - iVar1 == 0) {
            iVar6 = 0x400;
          }
          goto LAB_00015dcc;
        }
LAB_00015d98:
        if (iVar1 == 0) {
          if (iVar5 < 0) {
            iVar4 = 0;
            goto LAB_00015e84;
          }
        }
        else {
          if (*(int *)(param_1 + 8) == 0) {
            bVar7 = false;
            iVar4 = 0;
            iVar3 = iVar5;
          }
          else {
            iVar4 = iVar1 - *(int *)(param_1 + 8);
            bVar7 = SBORROW4(iVar5,iVar4);
            iVar3 = iVar5 - iVar4;
          }
          if (iVar3 < 0 != bVar7) {
LAB_00015e84:
            memmove(*(void **)(param_1 + 8),(void *)((int)*(void **)(param_1 + 8) + (iVar4 - iVar5))
                    ,(iVar6 - iVar1) + iVar5);
            iVar1 = -(iVar4 - iVar5);
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar1;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
LAB_00015d0c:
      return *(undefined4 *)(param_1 + 0x1c);
    }
  }
LAB_00015cbc:
  uVar2 = 1;
LAB_00015cc0:
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  return 0;
}



/* ===== XML_Parse @ 00015ef4 size=396 ===== */

undefined4 XML_Parse(int param_1,void *param_2,uint param_3,int param_4)

{
  void *__dest;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = param_3 >> 0x1f;
  }
  if (uVar3 == 0) {
    if (param_2 != (void *)0x0 || param_3 == 0) {
      iVar2 = *(int *)(param_1 + 0x1dc);
      if (iVar2 == 2) {
        uVar1 = 0x24;
      }
      else {
        if (iVar2 != 3) {
          if (((iVar2 == 0) && (*(int *)(param_1 + 0x1d8) == 0)) &&
             (iVar2 = FUN_000148f0(), iVar2 == 0)) {
            *(undefined4 *)(param_1 + 0x118) = 1;
            return 0;
          }
          *(undefined4 *)(param_1 + 0x1dc) = 1;
          if (param_3 != 0) {
            __dest = (void *)XML_GetBuffer(param_1,param_3);
            if (__dest == (void *)0x0) {
              return 0;
            }
            memcpy(__dest,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000121d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar1 = (*(code *)PTR_XML_ParseBuffer_0003efb0)(param_1,param_3,param_4);
            return uVar1;
          }
          *(char *)(param_1 + 0x1e0) = (char)param_4;
          if (param_4 != 0) {
            *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x18);
            *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
            iVar2 = (**(code **)(param_1 + 0x114))
                              (param_1,*(undefined4 *)(param_1 + 0x18),
                               *(undefined4 *)(param_1 + 0x1c),param_1 + 0x18);
            *(int *)(param_1 + 0x118) = iVar2;
            if (iVar2 != 0) {
              *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x11c);
              *(int *)(param_1 + 0x114) = DAT_00016074 + 0x1603c;
              return 0;
            }
            if (1 < *(uint *)(param_1 + 0x1dc)) {
              if (*(uint *)(param_1 + 0x1dc) == 3) {
                (**(code **)(*(int *)(param_1 + 0x90) + 0x30))
                          (*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x124),
                           *(undefined4 *)(param_1 + 0x18),param_1 + 0x194);
                *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x18);
                return 2;
              }
              return 1;
            }
            *(undefined4 *)(param_1 + 0x1dc) = 2;
            return 1;
          }
          return 1;
        }
        uVar1 = 0x21;
      }
      goto LAB_00015f28;
    }
  }
  else if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0x29;
LAB_00015f28:
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  return 0;
}



/* ===== XML_StopParser @ 00016078 size=104 ===== */

undefined4 XML_StopParser(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1dc) == 2) {
    uVar1 = 0x24;
LAB_000160b4:
    *(undefined4 *)(param_1 + 0x118) = uVar1;
    return 0;
  }
  if (*(int *)(param_1 + 0x1dc) == 3) {
    if (param_2 != 0) {
      uVar1 = 0x21;
      goto LAB_000160b4;
    }
  }
  else if (param_2 != 0) {
    if (*(char *)(param_1 + 0x1e4) != '\0') {
      uVar1 = 0x25;
      goto LAB_000160b4;
    }
    uVar1 = 3;
    goto LAB_000160a4;
  }
  uVar1 = 2;
LAB_000160a4:
  *(undefined4 *)(param_1 + 0x1dc) = uVar1;
  return 1;
}



/* ===== XML_ResumeParser @ 000160e0 size=192 ===== */

undefined4 XML_ResumeParser(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1dc) == 3) {
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x1dc) = 1;
      iVar1 = (**(code **)(param_1 + 0x114))
                        (param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),
                         param_1 + 0x18);
      *(int *)(param_1 + 0x118) = iVar1;
      if (iVar1 == 0) {
        if (*(uint *)(param_1 + 0x1dc) < 2) {
          if (*(char *)(param_1 + 0x1e0) != '\0') {
            *(undefined4 *)(param_1 + 0x1dc) = 2;
            return 1;
          }
        }
        else if (*(uint *)(param_1 + 0x1dc) == 3) {
          uVar2 = 2;
        }
        else {
          uVar2 = 1;
        }
        (**(code **)(*(int *)(param_1 + 0x90) + 0x30))
                  (*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x124),
                   *(undefined4 *)(param_1 + 0x18),param_1 + 0x194);
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x18);
        return uVar2;
      }
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x11c);
      *(int *)(param_1 + 0x114) = DAT_000161a0 + 0x16140;
    }
    else {
      *(undefined4 *)(param_1 + 0x118) = 0x22;
    }
  }
  return 0;
}



/* ===== XML_GetParsingStatus @ 000161a4 size=76 ===== */

void XML_GetParsingStatus(int param_1,undefined4 *param_2)

{
  int extraout_r0;
  undefined4 uVar1;
  undefined4 *extraout_r3;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    __assert((char *)(DAT_000161f8 + 0x161e0),(char *)(DAT_000161f4 + 0x161dc),0x8ba);
    param_1 = extraout_r0;
    param_2 = extraout_r3;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1e0);
  *param_2 = *(undefined4 *)(param_1 + 0x1dc);
  param_2[1] = uVar1;
  return;
}



/* ===== XML_GetErrorCode @ 000161fc size=16 ===== */

undefined4 XML_GetErrorCode(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x29;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x118);
  }
  return uVar1;
}



/* ===== XML_GetCurrentByteIndex @ 0001620c size=48 ===== */

int XML_GetCurrentByteIndex(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x11c) != 0)) {
    return *(int *)(param_1 + 0x24) - (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x11c));
  }
  return -1;
}



/* ===== XML_GetCurrentByteCount @ 0001623c size=44 ===== */

int XML_GetCurrentByteCount(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x11c) != 0) {
      iVar1 = *(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x11c);
    }
    return iVar1;
  }
  return 0;
}



/* ===== XML_GetInputContext @ 00016268 size=88 ===== */

undefined4 XML_GetInputContext(int param_1,int *param_2,int *param_3)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      return 0;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = *(int *)(param_1 + 0x11c) - *(int *)(param_1 + 8);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8);
    }
    return *(undefined4 *)(param_1 + 8);
  }
  return 0;
}



/* ===== XML_GetCurrentLineNumber @ 000162c0 size=76 ===== */

int XML_GetCurrentLineNumber(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x11c) != 0) &&
     (*(uint *)(param_1 + 0x124) <= *(uint *)(param_1 + 0x11c))) {
    (**(code **)(*(int *)(param_1 + 0x90) + 0x30))();
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x11c);
  }
  return *(int *)(param_1 + 0x194) + 1;
}



/* ===== XML_GetCurrentColumnNumber @ 0001630c size=72 ===== */

undefined4 XML_GetCurrentColumnNumber(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x11c) != 0) &&
     (*(uint *)(param_1 + 0x124) <= *(uint *)(param_1 + 0x11c))) {
    (**(code **)(*(int *)(param_1 + 0x90) + 0x30))();
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x11c);
  }
  return *(undefined4 *)(param_1 + 0x198);
}



/* ===== XML_FreeContentModel @ 00016354 size=20 ===== */

void XML_FreeContentModel(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00016364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))(param_2);
  return;
}



/* ===== XML_MemMalloc @ 00016368 size=20 ===== */

void XML_MemMalloc(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00016378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xc))(param_2);
  return;
}



/* ===== XML_MemRealloc @ 0001637c size=28 ===== */

void XML_MemRealloc(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00016394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_2,param_3);
  return;
}



/* ===== XML_MemFree @ 00016398 size=20 ===== */

void XML_MemFree(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000163a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))(param_2);
  return;
}



/* ===== XML_DefaultCurrent @ 000163ac size=52 ===== */

void XML_DefaultCurrent(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x128);
    if (puVar2 == (undefined4 *)0x0) {
      uVar4 = *(undefined4 *)(param_1 + 0x120);
      uVar3 = *(undefined4 *)(param_1 + 0x11c);
      uVar1 = *(undefined4 *)(param_1 + 0x90);
    }
    else {
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar1 = *(undefined4 *)(param_1 + 0xe0);
    }
    FUN_000127c8(param_1,uVar1,uVar3,uVar4);
    return;
  }
  return;
}



/* ===== XML_ErrorString @ 000163e0 size=712 ===== */

int XML_ErrorString(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return DAT_000166a8 + 0x164a8;
  case 2:
    return DAT_000166ac + 0x164b4;
  case 3:
    return DAT_000166b0 + 0x164c0;
  case 4:
    return DAT_000166b4 + 0x164cc;
  case 5:
    return DAT_000166b8 + 0x164d8;
  case 6:
    return DAT_000166bc + 0x164e4;
  case 7:
    return DAT_000166c0 + 0x164f0;
  case 8:
    return DAT_000166c4 + 0x164fc;
  case 9:
    return DAT_000166c8 + 0x16508;
  case 10:
    return DAT_000166cc + 0x16514;
  case 0xb:
    return DAT_000166d0 + 0x16520;
  case 0xc:
    return DAT_000166d4 + 0x1652c;
  case 0xd:
    return DAT_000166d8 + 0x16538;
  case 0xe:
    return DAT_000166dc + 0x16544;
  case 0xf:
    return DAT_000166e0 + 0x16550;
  case 0x10:
    return DAT_000166e4 + 0x1655c;
  case 0x11:
    return DAT_000166e8 + 0x16568;
  case 0x12:
    return DAT_000166ec + 0x16574;
  case 0x13:
    return DAT_000166f0 + 0x16580;
  case 0x14:
    return DAT_000166f4 + 0x1658c;
  case 0x15:
    return DAT_000166f8 + 0x16598;
  case 0x16:
    return DAT_000166fc + 0x165a4;
  case 0x17:
    return DAT_00016700 + 0x165b0;
  case 0x18:
    return DAT_00016704 + 0x165bc;
  case 0x19:
    return DAT_00016708 + 0x165c8;
  case 0x1a:
    return DAT_0001670c + 0x165d4;
  case 0x1b:
    return DAT_00016710 + 0x165e0;
  case 0x1c:
    return DAT_00016714 + 0x165ec;
  case 0x1d:
    return DAT_00016718 + 0x165f8;
  case 0x1e:
    return DAT_0001671c + 0x16604;
  case 0x1f:
    return DAT_00016720 + 0x16610;
  case 0x20:
    return DAT_00016724 + 0x1661c;
  case 0x21:
    return DAT_00016728 + 0x16628;
  case 0x22:
    return DAT_0001672c + 0x16634;
  case 0x23:
    return DAT_00016730 + 0x16640;
  case 0x24:
    return DAT_00016734 + 0x1664c;
  case 0x25:
    return DAT_00016738 + 0x16658;
  case 0x26:
    return DAT_0001673c + 0x16664;
  case 0x27:
    return DAT_00016740 + 0x16670;
  case 0x28:
    return DAT_00016744 + 0x1667c;
  case 0x29:
    return DAT_00016748 + 0x16688;
  case 0x2a:
    return DAT_0001674c + 0x16694;
  case 0x2b:
    return DAT_00016750 + 0x166a0;
  default:
    return 0;
  }
}



/* ===== XML_ExpatVersion @ 00016754 size=12 ===== */

int XML_ExpatVersion(void)

{
  return (int)&DAT_00016760 + DAT_00016760;
}



/* ===== XML_ExpatVersionInfo @ 00016764 size=20 ===== */

void XML_ExpatVersionInfo(undefined4 *param_1)

{
  *param_1 = 2;
  param_1[1] = 4;
  param_1[2] = 7;
  return;
}



/* ===== XML_GetFeatureList @ 00016778 size=12 ===== */

int XML_GetFeatureList(void)

{
  return (int)&DAT_00016784 + DAT_00016784;
}



/* ===== XML_SetBillionLaughsAttackProtectionMaximumAmplification @ 00016788 size=84 ===== */

undefined4 XML_SetBillionLaughsAttackProtectionMaximumAmplification(float param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x1d8) == 0) {
      iVar2 = __isnanf(param_1);
      if (iVar2 == 0) {
        uVar1 = 0;
        if (1.0 <= param_1) {
          *(float *)(param_2 + 0x204) = param_1;
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



/* ===== XML_SetBillionLaughsAttackProtectionActivationThreshold @ 000167dc size=36 ===== */

bool XML_SetBillionLaughsAttackProtectionActivationThreshold
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  
  if (param_1 == 0) {
    return false;
  }
  bVar1 = *(int *)(param_1 + 0x1d8) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x208) = param_3;
    *(undefined4 *)(param_1 + 0x20c) = param_4;
  }
  return bVar1;
}



/* ===== FUN_00016830 @ 00016830 size=4148 ===== */

int FUN_00016830(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    break;
  case 1:
    return DAT_00017864 + 0x16c48;
  case 2:
    return (int)&DAT_00017864 + DAT_00017c6c;
  case 3:
    return DAT_00017868 + 0x16c54;
  case 4:
    return DAT_0001786c + 0x16c60;
  case 5:
    return DAT_00017870 + 0x16c6c;
  case 6:
    return DAT_00017874 + 0x16c78;
  case 7:
    return DAT_00017878 + 0x16c84;
  case 8:
    return DAT_0001787c + 0x16c90;
  case 9:
    return DAT_00017880 + 0x16c9c;
  case 10:
    return DAT_00017884 + 0x16ca8;
  case 0xb:
    return DAT_00017888 + 0x16cb4;
  case 0xc:
    return DAT_0001788c + 0x16cc0;
  case 0xd:
    return DAT_00017890 + 0x16ccc;
  case 0xe:
    return DAT_00017894 + 0x16cd8;
  case 0xf:
    return DAT_00017898 + 0x16ce4;
  case 0x10:
    return DAT_0001789c + 0x16cf0;
  case 0x11:
    return DAT_000178a0 + 0x16cfc;
  case 0x12:
    return DAT_000178a4 + 0x16d08;
  case 0x13:
    return DAT_000178a8 + 0x16d14;
  case 0x14:
    return DAT_000178ac + 0x16d20;
  case 0x15:
    return DAT_000178b0 + 0x16d2c;
  case 0x16:
    return DAT_000178b4 + 0x16d38;
  case 0x17:
    return DAT_000178b8 + 0x16d44;
  case 0x18:
    return DAT_000178bc + 0x16d50;
  case 0x19:
    return DAT_000178c0 + 0x16d5c;
  case 0x1a:
    return DAT_000178c4 + 0x16d68;
  case 0x1b:
    return DAT_000178c8 + 0x16d74;
  case 0x1c:
    return DAT_000178cc + 0x16d80;
  case 0x1d:
    return DAT_000178d0 + 0x16d8c;
  case 0x1e:
    return DAT_000178d4 + 0x16d98;
  case 0x1f:
    return DAT_000178d8 + 0x16da4;
  case 0x20:
    return DAT_000178dc + 0x16db0;
  case 0x21:
    return DAT_000178e0 + 0x16dbc;
  case 0x22:
    return DAT_000178e4 + 0x16dc8;
  case 0x23:
    return DAT_000178e8 + 0x16dd4;
  case 0x24:
    return DAT_000178ec + 0x16de0;
  case 0x25:
    return DAT_000178f0 + 0x16dec;
  case 0x26:
    return DAT_000178f4 + 0x16df8;
  case 0x27:
    return DAT_000178f8 + 0x16e04;
  case 0x28:
    return DAT_000178fc + 0x16e10;
  case 0x29:
    return DAT_00017900 + 0x16e1c;
  case 0x2a:
    return DAT_00017904 + 0x16e28;
  case 0x2b:
    return DAT_00017908 + 0x16e34;
  case 0x2c:
    return DAT_0001790c + 0x16e40;
  case 0x2d:
    return DAT_00017910 + 0x16e4c;
  case 0x2e:
    return DAT_00017914 + 0x16e58;
  case 0x2f:
    return DAT_00017918 + 0x16e64;
  case 0x30:
    return DAT_0001791c + 0x16e70;
  case 0x31:
    return DAT_00017920 + 0x16e7c;
  case 0x32:
    return DAT_00017924 + 0x16e88;
  case 0x33:
    return DAT_00017928 + 0x16e94;
  case 0x34:
    return DAT_0001792c + 0x16ea0;
  case 0x35:
    return DAT_00017930 + 0x16eac;
  case 0x36:
    return DAT_00017934 + 0x16eb8;
  case 0x37:
    return DAT_00017938 + 0x16ec4;
  case 0x38:
    return DAT_0001793c + 0x16ed0;
  case 0x39:
    return DAT_00017940 + 0x16edc;
  case 0x3a:
    return DAT_00017944 + 0x16ee8;
  case 0x3b:
    return DAT_00017948 + 0x16ef4;
  case 0x3c:
    return DAT_0001794c + 0x16f00;
  case 0x3d:
    return DAT_00017950 + 0x16f0c;
  case 0x3e:
    return DAT_00017954 + 0x16f18;
  case 0x3f:
    return DAT_00017958 + 0x16f24;
  case 0x40:
    return DAT_0001795c + 94000;
  case 0x41:
    return DAT_00017960 + 0x16f3c;
  case 0x42:
    return DAT_00017964 + 0x16f48;
  case 0x43:
    return DAT_00017968 + 0x16f54;
  case 0x44:
    return DAT_0001796c + 0x16f60;
  case 0x45:
    return DAT_00017970 + 0x16f6c;
  case 0x46:
    return DAT_00017974 + 0x16f78;
  case 0x47:
    return DAT_00017978 + 0x16f84;
  case 0x48:
    return DAT_0001797c + 0x16f90;
  case 0x49:
    return DAT_00017980 + 0x16f9c;
  case 0x4a:
    return DAT_00017984 + 0x16fa8;
  case 0x4b:
    return DAT_00017988 + 0x16fb4;
  case 0x4c:
    return DAT_0001798c + 0x16fc0;
  case 0x4d:
    return DAT_00017990 + 0x16fcc;
  case 0x4e:
    return DAT_00017994 + 0x16fd8;
  case 0x4f:
    return DAT_00017998 + 0x16fe4;
  case 0x50:
    return DAT_0001799c + 0x16ff0;
  case 0x51:
    return DAT_000179a0 + 0x16ffc;
  case 0x52:
    return DAT_000179a4 + 0x17008;
  case 0x53:
    return DAT_000179a8 + 0x17014;
  case 0x54:
    return DAT_000179ac + 0x17020;
  case 0x55:
    return DAT_000179b0 + 0x1702c;
  case 0x56:
    return DAT_000179b4 + 0x17038;
  case 0x57:
    return DAT_000179b8 + 0x17044;
  case 0x58:
    return DAT_000179bc + 0x17050;
  case 0x59:
    return DAT_000179c0 + 0x1705c;
  case 0x5a:
    return DAT_000179c4 + 0x17068;
  case 0x5b:
    return DAT_000179c8 + 0x17074;
  case 0x5c:
    return DAT_000179cc + 0x17080;
  case 0x5d:
    return DAT_000179d0 + 0x1708c;
  case 0x5e:
    return DAT_000179d4 + 0x17098;
  case 0x5f:
    return DAT_000179d8 + 0x170a4;
  case 0x60:
    return DAT_000179dc + 0x170b0;
  case 0x61:
    return DAT_000179e0 + 0x170bc;
  case 0x62:
    return DAT_000179e4 + 0x170c8;
  case 99:
    return DAT_000179e8 + 0x170d4;
  case 100:
    return DAT_000179ec + 0x170e0;
  case 0x65:
    return DAT_000179f0 + 0x170ec;
  case 0x66:
    return DAT_000179f4 + 0x170f8;
  case 0x67:
    return DAT_000179f8 + 0x17104;
  case 0x68:
    return DAT_000179fc + 0x17110;
  case 0x69:
    return DAT_00017a00 + 0x1711c;
  case 0x6a:
    return DAT_00017a04 + 0x17128;
  case 0x6b:
    return DAT_00017a08 + 0x17134;
  case 0x6c:
    return DAT_00017a0c + 0x17140;
  case 0x6d:
    return DAT_00017a10 + 0x1714c;
  case 0x6e:
    return DAT_00017a14 + 0x17158;
  case 0x6f:
    return DAT_00017a18 + 0x17164;
  case 0x70:
    return DAT_00017a1c + 0x17170;
  case 0x71:
    return DAT_00017a20 + 0x1717c;
  case 0x72:
    return DAT_00017a24 + 0x17188;
  case 0x73:
    return DAT_00017a28 + 0x17194;
  case 0x74:
    return DAT_00017a2c + 0x171a0;
  case 0x75:
    return DAT_00017a30 + 0x171ac;
  case 0x76:
    return DAT_00017a34 + 0x171b8;
  case 0x77:
    return DAT_00017a38 + 0x171c4;
  case 0x78:
    return DAT_00017a3c + 0x171d0;
  case 0x79:
    return DAT_00017a40 + 0x171dc;
  case 0x7a:
    return DAT_00017a44 + 0x171e8;
  case 0x7b:
    return DAT_00017a48 + 0x171f4;
  case 0x7c:
    return DAT_00017a4c + 0x17200;
  case 0x7d:
    return DAT_00017a50 + 0x1720c;
  case 0x7e:
    return DAT_00017a54 + 0x17218;
  case 0x7f:
    return DAT_00017a58 + 0x17224;
  case 0x80:
    return DAT_00017a5c + 0x17230;
  case 0x81:
    return DAT_00017a60 + 0x1723c;
  case 0x82:
    return DAT_00017a64 + 0x17248;
  case 0x83:
    return DAT_00017a68 + 0x17254;
  case 0x84:
    return DAT_00017a6c + 0x17260;
  case 0x85:
    return DAT_00017a70 + 0x1726c;
  case 0x86:
    return DAT_00017a74 + 0x17278;
  case 0x87:
    return DAT_00017a78 + 0x17284;
  case 0x88:
    return DAT_00017a7c + 0x17290;
  case 0x89:
    return DAT_00017a80 + 0x1729c;
  case 0x8a:
    return DAT_00017a84 + 0x172a8;
  case 0x8b:
    return DAT_00017a88 + 0x172b4;
  case 0x8c:
    return DAT_00017a8c + 0x172c0;
  case 0x8d:
    return DAT_00017a90 + 0x172cc;
  case 0x8e:
    return DAT_00017a94 + 0x172d8;
  case 0x8f:
    return DAT_00017a98 + 0x172e4;
  case 0x90:
    return DAT_00017a9c + 0x172f0;
  case 0x91:
    return DAT_00017aa0 + 0x172fc;
  case 0x92:
    return DAT_00017aa4 + 0x17308;
  case 0x93:
    return DAT_00017aa8 + 0x17314;
  case 0x94:
    return DAT_00017aac + 0x17320;
  case 0x95:
    return DAT_00017ab0 + 0x1732c;
  case 0x96:
    return DAT_00017ab4 + 0x17338;
  case 0x97:
    return DAT_00017ab8 + 0x17344;
  case 0x98:
    return DAT_00017abc + 0x17350;
  case 0x99:
    return DAT_00017ac0 + 0x1735c;
  case 0x9a:
    return DAT_00017ac4 + 0x17368;
  case 0x9b:
    return DAT_00017ac8 + 0x17374;
  case 0x9c:
    return DAT_00017acc + 0x17380;
  case 0x9d:
    return DAT_00017ad0 + 0x1738c;
  case 0x9e:
    return DAT_00017ad4 + 0x17398;
  case 0x9f:
    return DAT_00017ad8 + 0x173a4;
  case 0xa0:
    return DAT_00017adc + 0x173b0;
  case 0xa1:
    return DAT_00017ae0 + 0x173bc;
  case 0xa2:
    return DAT_00017ae4 + 0x173c8;
  case 0xa3:
    return DAT_00017ae8 + 0x173d4;
  case 0xa4:
    return DAT_00017aec + 0x173e0;
  case 0xa5:
    return DAT_00017af0 + 0x173ec;
  case 0xa6:
    return DAT_00017af4 + 0x173f8;
  case 0xa7:
    return DAT_00017af8 + 0x17404;
  case 0xa8:
    return DAT_00017afc + 0x17410;
  case 0xa9:
    return DAT_00017b00 + 0x1741c;
  case 0xaa:
    return DAT_00017b04 + 0x17428;
  case 0xab:
    return DAT_00017b08 + 0x17434;
  case 0xac:
    return DAT_00017b0c + 0x17440;
  case 0xad:
    return DAT_00017b10 + 0x1744c;
  case 0xae:
    return DAT_00017b14 + 0x17458;
  case 0xaf:
    return DAT_00017b18 + 0x17464;
  case 0xb0:
    return DAT_00017b1c + 0x17470;
  case 0xb1:
    return DAT_00017b20 + 0x1747c;
  case 0xb2:
    return DAT_00017b24 + 0x17488;
  case 0xb3:
    return DAT_00017b28 + 0x17494;
  case 0xb4:
    return DAT_00017b2c + 0x174a0;
  case 0xb5:
    return DAT_00017b30 + 0x174ac;
  case 0xb6:
    return DAT_00017b34 + 0x174b8;
  case 0xb7:
    return DAT_00017b38 + 0x174c4;
  case 0xb8:
    return DAT_00017b3c + 0x174d0;
  case 0xb9:
    return DAT_00017b40 + 0x174dc;
  case 0xba:
    return DAT_00017b44 + 0x174e8;
  case 0xbb:
    return DAT_00017b48 + 0x174f4;
  case 0xbc:
    return DAT_00017b4c + 0x17500;
  case 0xbd:
    return DAT_00017b50 + 0x1750c;
  case 0xbe:
    return DAT_00017b54 + 0x17518;
  case 0xbf:
    return DAT_00017b58 + 0x17524;
  case 0xc0:
    return DAT_00017b5c + 0x17530;
  case 0xc1:
    return DAT_00017b60 + 0x1753c;
  case 0xc2:
    return DAT_00017b64 + 0x17548;
  case 0xc3:
    return DAT_00017b68 + 0x17554;
  case 0xc4:
    return DAT_00017b6c + 0x17560;
  case 0xc5:
    return DAT_00017b70 + 0x1756c;
  case 0xc6:
    return DAT_00017b74 + 0x17578;
  case 199:
    return DAT_00017b78 + 0x17584;
  case 200:
    return DAT_00017b7c + 0x17590;
  case 0xc9:
    return DAT_00017b80 + 0x1759c;
  case 0xca:
    return DAT_00017b84 + 0x175a8;
  case 0xcb:
    return DAT_00017b88 + 0x175b4;
  case 0xcc:
    return DAT_00017b8c + 0x175c0;
  case 0xcd:
    return DAT_00017b90 + 0x175cc;
  case 0xce:
    return DAT_00017b94 + 0x175d8;
  case 0xcf:
    return DAT_00017b98 + 0x175e4;
  case 0xd0:
    return DAT_00017b9c + 0x175f0;
  case 0xd1:
    return DAT_00017ba0 + 0x175fc;
  case 0xd2:
    return DAT_00017ba4 + 0x17608;
  case 0xd3:
    return DAT_00017ba8 + 0x17614;
  case 0xd4:
    return DAT_00017bac + 0x17620;
  case 0xd5:
    return DAT_00017bb0 + 0x1762c;
  case 0xd6:
    return DAT_00017bb4 + 0x17638;
  case 0xd7:
    return DAT_00017bb8 + 0x17644;
  case 0xd8:
    return DAT_00017bbc + 0x17650;
  case 0xd9:
    return DAT_00017bc0 + 0x1765c;
  case 0xda:
    return DAT_00017bc4 + 0x17668;
  case 0xdb:
    return DAT_00017bc8 + 0x17674;
  case 0xdc:
    return DAT_00017bcc + 0x17680;
  case 0xdd:
    return DAT_00017bd0 + 0x1768c;
  case 0xde:
    return DAT_00017bd4 + 0x17698;
  case 0xdf:
    return DAT_00017bd8 + 0x176a4;
  case 0xe0:
    return DAT_00017bdc + 0x176b0;
  case 0xe1:
    return DAT_00017be0 + 0x176bc;
  case 0xe2:
    return DAT_00017be4 + 0x176c8;
  case 0xe3:
    return DAT_00017be8 + 0x176d4;
  case 0xe4:
    return DAT_00017bec + 0x176e0;
  case 0xe5:
    return DAT_00017bf0 + 0x176ec;
  case 0xe6:
    return DAT_00017bf4 + 0x176f8;
  case 0xe7:
    return DAT_00017bf8 + 0x17704;
  case 0xe8:
    return DAT_00017bfc + 0x17710;
  case 0xe9:
    return DAT_00017c00 + 0x1771c;
  case 0xea:
    return DAT_00017c04 + 0x17728;
  case 0xeb:
    return DAT_00017c08 + 0x17734;
  case 0xec:
    return DAT_00017c0c + 0x17740;
  case 0xed:
    return DAT_00017c10 + 0x1774c;
  case 0xee:
    return DAT_00017c14 + 0x17758;
  case 0xef:
    return DAT_00017c18 + 0x17764;
  case 0xf0:
    return DAT_00017c1c + 0x17770;
  case 0xf1:
    return DAT_00017c20 + 0x1777c;
  case 0xf2:
    return DAT_00017c24 + 0x17788;
  case 0xf3:
    return DAT_00017c28 + 0x17794;
  case 0xf4:
    return DAT_00017c2c + 0x177a0;
  case 0xf5:
    return DAT_00017c30 + 0x177ac;
  case 0xf6:
    return DAT_00017c34 + 0x177b8;
  case 0xf7:
    return DAT_00017c38 + 0x177c4;
  case 0xf8:
    return DAT_00017c3c + 0x177d0;
  case 0xf9:
    return DAT_00017c40 + 0x177dc;
  case 0xfa:
    return DAT_00017c44 + 0x177e8;
  case 0xfb:
    return DAT_00017c48 + 0x177f4;
  case 0xfc:
    return DAT_00017c4c + 0x17800;
  case 0xfd:
    return DAT_00017c50 + 0x1780c;
  case 0xfe:
    return DAT_00017c54 + 0x17818;
  case 0xff:
    return DAT_00017c58 + 0x17824;
  default:
    __assert((char *)(DAT_00017c64 + 0x1784c),(char *)(DAT_00017c60 + 0x17848),0x20a5);
  }
  return DAT_00017c68 + 0x17858;
}



/* ===== FUN_00017c70 @ 00017c70 size=652 ===== */

void FUN_00017c70(int param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4,int param_5
                 )

{
  int extraout_r0;
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int extraout_r3;
  int iVar7;
  FILE *pFVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  int *piVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  undefined4 local_34;
  undefined1 local_30;
  int local_2c;
  
  iVar9 = DAT_00017efc + 0x17c90;
  iVar12 = 0;
  piVar3 = *(int **)(iVar9 + DAT_00017f00);
  local_2c = *piVar3;
  iVar7 = param_1;
  do {
    iVar4 = *(int *)(iVar7 + 0x1d8);
    if (iVar4 == 0) {
      uVar14 = (int)param_3 - (int)param_2;
      if (param_5 == 0 && param_1 == iVar7) {
        piVar15 = (int *)(iVar7 + 0x1f0);
        uVar2 = *(uint *)(iVar7 + 0x1f0);
        uVar5 = *(uint *)(iVar7 + 500);
      }
      else {
        uVar2 = *(uint *)(iVar7 + 0x1f8);
        uVar5 = *(uint *)(iVar7 + 0x1fc);
        piVar15 = (int *)(iVar7 + 0x1f8);
      }
      uVar6 = ~((int)uVar14 >> 0x1f);
      bVar17 = uVar6 <= uVar5;
      bVar16 = uVar5 == uVar6;
      uVar6 = ~uVar14;
      if (bVar16) {
        bVar17 = uVar6 <= uVar2;
      }
      uVar11 = uVar14;
      if (bVar17 && (!bVar16 || uVar2 != uVar6)) {
        uVar11 = 0;
      }
      if (bVar17 && (!bVar16 || uVar2 != uVar6)) goto LAB_00017e6c;
      *piVar15 = uVar2 + uVar11;
      piVar15[1] = uVar5 + ((int)uVar14 >> 0x1f) + (uint)CARRY4(uVar2,uVar11);
      uVar2 = *(uint *)(iVar7 + 0x1f0);
      uVar6 = *(uint *)(iVar7 + 0x1f8);
      uVar5 = *(int *)(iVar7 + 0x1fc) + *(int *)(iVar7 + 500) + (uint)CARRY4(uVar6,uVar2);
      fVar18 = (float)FUN_000132f8(iVar7);
      bVar17 = *(uint *)(iVar7 + 0x20c) <= uVar5;
      if (uVar5 == *(uint *)(iVar7 + 0x20c)) {
        bVar17 = *(uint *)(iVar7 + 0x208) <= uVar6 + uVar2;
      }
      if (bVar17) {
        if (fVar18 <= *(float *)(iVar7 + 0x204)) {
          uVar11 = 1;
        }
        else {
          uVar11 = 0;
        }
      }
      else {
        uVar11 = 1;
      }
      if (*(int *)(iVar7 + 0x200) < 2) goto LAB_00017e6c;
      FUN_00013388(iVar7,DAT_00017f04 + 0x17d84);
      if (*(int *)(iVar7 + 0x1d8) == 0) {
        puVar10 = *(undefined4 **)(iVar9 + DAT_00017f14);
        if (param_5 == 0) {
          iVar9 = DAT_00017f2c + 0x17e94;
        }
        else {
          iVar9 = DAT_00017f18 + 0x17de4;
        }
        fprintf((FILE *)*puVar10,(char *)(DAT_00017f20 + 0x17e14),uVar14,iVar9,iVar12,param_4,10,
                DAT_00017f1c + 0x17df4);
        local_34 = *(undefined4 *)(DAT_00017f24 + 0x17e2c);
        local_30 = *(undefined1 *)(DAT_00017f24 + 0x17e30);
        if (*(int *)(iVar7 + 0x200) < 3 && 0x18 < (int)uVar14) {
          puVar13 = param_2 + 10;
          for (; pFVar8 = (FILE *)*puVar10, puVar13 != param_2; param_2 = param_2 + 1) {
            pcVar1 = (char *)FUN_00016830(*param_2);
            fputs(pcVar1,pFVar8);
          }
          fprintf(pFVar8,(char *)&local_34);
          for (puVar13 = param_3 + -10; pFVar8 = (FILE *)*puVar10, param_3 != puVar13;
              puVar13 = puVar13 + 1) {
            pcVar1 = (char *)FUN_00016830(*puVar13);
            fputs(pcVar1,pFVar8);
          }
        }
        else {
          for (; pFVar8 = (FILE *)*puVar10, param_2 < param_3; param_2 = param_2 + 1) {
            pcVar1 = (char *)FUN_00016830(*param_2);
            fputs(pcVar1,pFVar8);
          }
        }
        fputs((char *)(DAT_00017f28 + 0x17e6c),(FILE *)*puVar10);
LAB_00017e6c:
        if (local_2c == *piVar3) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar11);
      }
      __assert((char *)(DAT_00017f10 + 0x17db4),(char *)(DAT_00017f0c + 0x17dac),0x1dfd);
      param_1 = extraout_r0;
      iVar4 = extraout_r3;
    }
    iVar12 = iVar12 + 1;
    iVar7 = iVar4;
  } while( true );
}



/* ===== FUN_00017f30 @ 00017f30 size=80 ===== */

undefined4
FUN_00017f30(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6)

{
  undefined4 uVar1;
  
  if (((4 < param_2 + 4U) || ((1 << (param_2 + 4U & 0xff) & 0x1dU) == 0)) && (param_6 != 2)) {
    uVar1 = FUN_00017c70(param_1,param_3,param_4,param_5);
    return uVar1;
  }
  return 1;
}



/* ===== FUN_00017f80 @ 00017f80 size=520 ===== */

void FUN_00017f80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_30;
  int local_2c;
  
  piVar4 = *(int **)(DAT_00018188 + 0x17fa0 + DAT_0001818c);
  local_2c = *piVar4;
  *(int *)(param_1 + 0x114) = DAT_00018190 + 0x17fcc;
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  do {
    local_30 = 0;
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x90))
                      (*(undefined4 **)(param_1 + 0x90),param_2,param_3,&local_30);
    iVar2 = FUN_00017f30(param_1,iVar1,param_2,local_30,0x160b,0);
    if (iVar2 == 0) {
      FUN_0001341c(param_1);
      uVar3 = 0x2b;
      goto LAB_00018020;
    }
    *(undefined4 *)(param_1 + 0x120) = local_30;
    if (iVar1 == -1) {
      if (*(char *)(param_1 + 0x1e0) == '\0') {
LAB_00018164:
        uVar3 = 0;
        *param_4 = param_2;
      }
      else {
        uVar3 = 5;
      }
      goto LAB_00018020;
    }
    if (iVar1 < 0) {
      if (iVar1 != -4) {
        if (iVar1 == -2) {
          if (*(char *)(param_1 + 0x1e0) == '\0') goto LAB_00018164;
          uVar3 = 6;
          goto LAB_00018020;
        }
        if (iVar1 != -0xf) goto LAB_00018068;
        if ((*(int *)(param_1 + 0x50) != 0) &&
           (FUN_000127c8(param_1,*(undefined4 *)(param_1 + 0x90),param_2),
           *(int *)(param_1 + 0x1dc) == 2)) {
LAB_00018118:
          uVar3 = 0x23;
          goto LAB_00018020;
        }
        *param_4 = local_30;
        goto LAB_000180f4;
      }
      goto LAB_000180d8;
    }
    if (iVar1 == 0xb) {
      iVar1 = FUN_00014120(param_1,*(undefined4 *)(param_1 + 0x90),param_2);
LAB_00018130:
      if (iVar1 == 0) {
        uVar3 = 1;
        goto LAB_00018020;
      }
    }
    else {
      if (iVar1 < 0xc) {
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x11c) = local_30;
          uVar3 = 4;
        }
        else {
LAB_00018068:
          uVar3 = 9;
        }
        goto LAB_00018020;
      }
      if (iVar1 == 0xd) {
        iVar1 = FUN_000141f8(param_1,*(undefined4 *)(param_1 + 0x90),param_2);
        goto LAB_00018130;
      }
      if (iVar1 != 0xf) goto LAB_00018068;
      if (*(int *)(param_1 + 0x50) != 0) {
        FUN_000127c8(param_1,*(undefined4 *)(param_1 + 0x90),param_2);
      }
    }
    *(undefined4 *)(param_1 + 0x11c) = local_30;
    if (*(int *)(param_1 + 0x1dc) == 2) goto LAB_00018118;
    param_2 = local_30;
    if (*(int *)(param_1 + 0x1dc) == 3) {
LAB_000180d8:
      *param_4 = param_2;
LAB_000180f4:
      uVar3 = 0;
LAB_00018020:
      if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar3);
      }
      return;
    }
  } while( true );
}



/* ===== FUN_00018194 @ 00018194 size=704 ===== */

void FUN_00018194(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5
                 ,char param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined4 *unaff_r10;
  bool bVar9;
  int *local_38;
  int *local_34;
  int local_30;
  int local_2c;
  
  piVar6 = *(int **)(DAT_00018454 + 0x181bc + DAT_00018458);
  bVar9 = *(int *)(param_1 + 0x90) == param_2;
  local_2c = *piVar6;
  if (bVar9) {
    puVar7 = (undefined4 *)(param_1 + 0x11c);
    unaff_r10 = (undefined4 *)(param_1 + 0x120);
  }
  else {
    puVar7 = *(undefined4 **)(param_1 + 0x128);
  }
  local_38 = (int *)*param_3;
  if (bVar9) {
    *(int **)(param_1 + 0x11c) = local_38;
  }
  else {
    unaff_r10 = puVar7 + 1;
  }
  *puVar7 = local_38;
  *param_3 = 0;
  do {
    local_34 = local_38;
    iVar1 = (**(code **)(param_2 + 8))(param_2,local_38,param_4,&local_34);
    iVar2 = FUN_00017f30(param_1,iVar1,local_38,local_34,0xfc3,param_7);
    if (iVar2 == 0) {
      FUN_0001341c(param_1);
      uVar3 = 0x2b;
      goto LAB_00018258;
    }
    *unaff_r10 = local_34;
    if (iVar1 == 0) {
      *puVar7 = local_34;
      uVar3 = 4;
      goto LAB_00018258;
    }
    if (iVar1 < 1) {
      if (iVar1 == -2) {
        if (param_6 == '\0') {
          uVar3 = 6;
          goto LAB_00018258;
        }
      }
      else {
        if ((iVar1 < -1) && (iVar1 != -4)) {
LAB_00018298:
          *puVar7 = local_34;
          uVar3 = 0x17;
          goto LAB_00018258;
        }
        if (param_6 == '\0') {
          uVar3 = 0x14;
          goto LAB_00018258;
        }
      }
      break;
    }
    if (iVar1 == 7) {
      pcVar8 = *(code **)(param_1 + 0x3c);
      if (pcVar8 == (code *)0x0) {
LAB_000183ec:
        if (*(int *)(param_1 + 0x50) != 0) {
          FUN_000127c8(param_1,param_2,local_38);
        }
      }
      else {
        iVar1 = 1;
        piVar5 = &local_30;
        local_30 = CONCAT31(local_30._1_3_,10);
LAB_000183bc:
        (*pcVar8)(*(undefined4 *)(param_1 + 4),piVar5,iVar1);
      }
    }
    else {
      if (iVar1 == 0x28) {
        if (*(code **)(param_1 + 0x4c) == (code *)0x0) {
          if (*(int *)(param_1 + 0x50) != 0) {
            FUN_000127c8(param_1,param_2,local_38);
          }
        }
        else {
          (**(code **)(param_1 + 0x4c))(*(undefined4 *)(param_1 + 4));
        }
        *param_3 = local_34;
        *param_5 = local_34;
        if (*(int *)(param_1 + 0x1dc) == 2) {
          uVar3 = 0x23;
        }
        else {
          uVar3 = 0;
        }
        goto LAB_00018258;
      }
      if (iVar1 != 6) goto LAB_00018298;
      pcVar8 = *(code **)(param_1 + 0x3c);
      if (pcVar8 == (code *)0x0) goto LAB_000183ec;
      if (*(char *)(param_2 + 0x44) != '\0') {
        iVar1 = (int)local_34 - (int)local_38;
        piVar5 = local_38;
        goto LAB_000183bc;
      }
      while( true ) {
        local_30 = *(int *)(param_1 + 0x2c);
        uVar4 = (**(code **)(param_2 + 0x38))
                          (param_2,&local_38,local_34,&local_30,*(undefined4 *)(param_1 + 0x30));
        *unaff_r10 = local_34;
        (*pcVar8)(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x2c),
                  local_30 - *(int *)(param_1 + 0x2c));
        if (uVar4 < 2) break;
        *puVar7 = local_38;
      }
    }
    local_38 = local_34;
    *puVar7 = local_34;
    if (*(int *)(param_1 + 0x1dc) == 2) {
      uVar3 = 0x23;
      goto LAB_00018258;
    }
  } while (*(int *)(param_1 + 0x1dc) != 3);
  *param_5 = local_38;
  uVar3 = 0;
LAB_00018258:
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0001845c @ 0001845c size=1204 ===== */

void FUN_0001845c(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  byte local_35;
  int local_34;
  undefined1 local_30 [4];
  int local_2c;
  
  iVar9 = *(int *)(param_1 + 0x160);
  piVar5 = *(int **)(DAT_00018914 + 0x18494 + DAT_00018910);
  local_2c = *piVar5;
LAB_000184a8:
  do {
    while( true ) {
      while( true ) {
        iVar3 = param_4;
        local_34 = iVar3;
        iVar1 = (**(code **)(param_2 + 0x10))(param_2,iVar3,param_5,&local_34);
        iVar2 = FUN_00017f30(param_1,iVar1,iVar3,local_34,0x16f2,param_7);
        if (iVar2 == 0) {
          iVar1 = 0x2b;
          FUN_0001341c(param_1);
          goto LAB_00018500;
        }
        if (iVar1 != 6) break;
        iVar1 = FUN_00013fc8(param_6,param_2,iVar3,local_34);
        param_4 = local_34;
        if (iVar1 == 0) goto LAB_000186a8;
      }
      if (6 < iVar1) break;
      if (iVar1 != -3) {
        if (iVar1 < -2) {
          if (iVar1 == -4) {
            iVar1 = 0;
          }
          else {
LAB_00018540:
            if (*(int *)(param_1 + 0x90) == param_2) {
              *(int *)(param_1 + 0x11c) = iVar3;
            }
            iVar1 = 0x17;
          }
        }
        else {
          if (iVar1 == -1) {
            if (*(int *)(param_1 + 0x90) == param_2) {
              *(int *)(param_1 + 0x11c) = iVar3;
            }
          }
          else {
            if (iVar1 != 0) goto LAB_00018540;
            if (*(int *)(param_1 + 0x90) == param_2) {
              *(int *)(param_1 + 0x11c) = local_34;
            }
          }
          iVar1 = 4;
        }
        goto LAB_00018500;
      }
      local_34 = iVar3 + *(int *)(param_2 + 0x40);
LAB_00018590:
      iVar1 = *(int *)(param_6 + 0xc);
      if ((param_3 != 0) ||
         ((param_4 = local_34, *(int *)(param_6 + 0x10) != iVar1 &&
          (param_4 = local_34, *(char *)(iVar1 + -1) != ' ')))) {
        if ((*(int *)(param_6 + 8) == iVar1) && (iVar1 = FUN_00013cc4(param_6), iVar1 == 0)) {
LAB_000186a8:
          iVar1 = 1;
          goto LAB_00018500;
        }
        pbVar6 = *(byte **)(param_6 + 0xc);
        *(byte **)(param_6 + 0xc) = pbVar6 + 1;
        bVar4 = 0x20;
LAB_000185d0:
        *pbVar6 = bVar4;
        param_4 = local_34;
      }
    }
    if (iVar1 != 9) {
      if (iVar1 < 10) {
        bVar10 = iVar1 == 7;
      }
      else {
        if (iVar1 == 10) {
          iVar1 = (**(code **)(param_2 + 0x28))(param_2,iVar3);
          if (iVar1 < 0) {
            if (*(int *)(param_1 + 0x90) == param_2) {
              *(int *)(param_1 + 0x11c) = iVar3;
            }
            iVar1 = 0xe;
            goto LAB_00018500;
          }
          if ((param_3 != 0 || iVar1 != 0x20) ||
             ((param_4 = local_34, *(int *)(param_6 + 0xc) != *(int *)(param_6 + 0x10) &&
              (param_4 = local_34, *(char *)(*(int *)(param_6 + 0xc) + -1) != ' ')))) {
            iVar1 = FUN_00028f20(iVar1,local_30);
            for (iVar2 = 0; param_4 = local_34, iVar2 < iVar1; iVar2 = iVar2 + 1) {
              if ((*(int *)(param_6 + 0xc) == *(int *)(param_6 + 8)) &&
                 (iVar3 = FUN_00013cc4(param_6), iVar3 == 0)) goto LAB_000186a8;
              puVar7 = *(undefined1 **)(param_6 + 0xc);
              *(undefined1 **)(param_6 + 0xc) = puVar7 + 1;
              *puVar7 = local_30[iVar2];
            }
          }
          goto LAB_000184a8;
        }
        bVar10 = iVar1 == 0x27;
      }
      if (!bVar10) goto LAB_00018540;
      goto LAB_00018590;
    }
    local_35 = (**(code **)(param_2 + 0x2c))
                         (param_2,iVar3 + *(int *)(param_2 + 0x40),
                          local_34 - *(int *)(param_2 + 0x40));
    if (local_35 != 0) {
      FUN_00017f30(param_1,9,&local_35,&local_34,0x1737,1);
      if ((*(int *)(param_6 + 0xc) != *(int *)(param_6 + 8)) ||
         (iVar1 = FUN_00013cc4(param_6), iVar1 != 0)) {
        pbVar6 = *(byte **)(param_6 + 0xc);
        *(byte **)(param_6 + 0xc) = pbVar6 + 1;
        bVar4 = local_35;
        goto LAB_000185d0;
      }
      goto LAB_000186a8;
    }
    iVar1 = FUN_00014050(param_1 + 0x1b4,param_2,iVar3 + *(int *)(param_2 + 0x40),
                         local_34 - *(int *)(param_2 + 0x40));
    if (iVar1 == 0) goto LAB_000186a8;
    iVar2 = FUN_000139d0(param_1,iVar9,iVar1,0);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c4);
    if (param_6 == iVar9 + 0x50) {
      bVar10 = false;
      if (*(int *)(param_1 + 0x10c) != 0) {
        if (*(char *)(iVar9 + 0x82) == '\0') {
          uVar8 = (uint)*(byte *)(iVar9 + 0x81);
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x128);
        }
        bVar10 = uVar8 == 0;
      }
    }
    else if (*(char *)(iVar9 + 0x81) == '\0') {
      bVar10 = true;
    }
    else {
      bVar10 = *(char *)(iVar9 + 0x82) != '\0';
    }
    if (bVar10) {
      if (iVar2 == 0) {
        iVar1 = 0xb;
        goto LAB_00018500;
      }
      if (*(char *)(iVar2 + 0x22) == '\0') {
        iVar1 = 0x18;
        goto LAB_00018500;
      }
    }
    else {
      param_4 = local_34;
      if (iVar2 == 0) goto LAB_000184a8;
    }
    if (*(char *)(iVar2 + 0x20) != '\0') {
      if (*(int *)(param_1 + 0x90) == param_2) {
        *(int *)(param_1 + 0x11c) = iVar3;
      }
      iVar1 = 0xc;
      goto LAB_00018500;
    }
    if (*(int *)(iVar2 + 0x1c) != 0) {
      if (*(int *)(param_1 + 0x90) == param_2) {
        *(int *)(param_1 + 0x11c) = iVar3;
      }
      iVar1 = 0xf;
      goto LAB_00018500;
    }
    iVar1 = *(int *)(iVar2 + 4);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x90) == param_2) {
        *(int *)(param_1 + 0x11c) = iVar3;
      }
      iVar1 = 0x10;
      goto LAB_00018500;
    }
    iVar3 = *(int *)(iVar2 + 8);
    *(undefined1 *)(iVar2 + 0x20) = 1;
    FUN_0001352c(param_1,iVar2,0x1788);
    iVar1 = FUN_0001845c(param_1,*(undefined4 *)(param_1 + 0xe0),param_3,*(undefined4 *)(iVar2 + 4),
                         iVar1 + iVar3,param_6,1);
    FUN_00013584(param_1,iVar2,0x178f);
    *(undefined1 *)(iVar2 + 0x20) = 0;
    param_4 = local_34;
    if (iVar1 != 0) {
LAB_00018500:
      if (local_2c == *piVar5) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar1);
    }
  } while( true );
}



/* ===== FUN_00018918 @ 00018918 size=152 ===== */

int FUN_00018918(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = FUN_0001845c();
  if (iVar1 == 0) {
    if (((param_3 == 0) && (iVar2 = *(int *)(param_6 + 0xc), *(int *)(param_6 + 0x10) != iVar2)) &&
       (*(char *)(iVar2 + -1) == ' ')) {
      *(int *)(param_6 + 0xc) = iVar2 + -1;
    }
    if ((*(int *)(param_6 + 0xc) == *(int *)(param_6 + 8)) &&
       (iVar2 = FUN_00013cc4(param_6), iVar2 == 0)) {
      iVar1 = 1;
    }
    else {
      puVar3 = *(undefined1 **)(param_6 + 0xc);
      *(undefined1 **)(param_6 + 0xc) = puVar3 + 1;
      *puVar3 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_000189b0 @ 000189b0 size=2740 ===== */

void FUN_000189b0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,int *param_5,
                 undefined4 param_6)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 uVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  char *pcVar21;
  int iVar22;
  char *pcVar23;
  int iVar24;
  size_t sVar25;
  int iVar26;
  size_t __n;
  int iVar27;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  undefined1 *local_58;
  undefined8 local_50;
  int local_44;
  
  piVar13 = *(int **)(DAT_0001933c + 0x189e4 + DAT_00019338);
  local_44 = *piVar13;
  iVar14 = *(int *)(param_1 + 0x160);
  local_a8 = FUN_000139d0(param_1,iVar14 + 0x14,*param_4,0);
  if ((local_a8 != 0) ||
     (((iVar5 = FUN_00013e84(iVar14 + 0x50,*param_4), iVar5 != 0 &&
       (local_a8 = FUN_000139d0(param_1,iVar14 + 0x14,iVar5,0x18), local_a8 != 0)) &&
      ((*(char *)(param_1 + 0xe8) == '\0' || (iVar5 = FUN_00013ee0(param_1,local_a8), iVar5 != 0))))
     )) {
    iVar15 = *(int *)(local_a8 + 0xc);
    iVar5 = (**(code **)(param_2 + 0x24))
                      (param_2,param_3,*(undefined4 *)(param_1 + 0x178),
                       *(undefined4 *)(param_1 + 0x184));
    if (iVar5 <= 0x7fffffff - iVar15) {
      iVar22 = *(int *)(param_1 + 0x178);
      iVar9 = iVar15 + iVar5;
      if (iVar22 < iVar9) {
        if ((iVar15 < 0x7ffffff0) && (iVar5 <= 0x7fffffef - iVar15)) {
          uVar10 = iVar9 + 0x10;
          *(uint *)(param_1 + 0x178) = uVar10;
          if ((uVar10 < 0xfffffff || iVar9 == 0xfffffef) &&
             (iVar9 = (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x184),uVar10 * 0x10),
             iVar9 != 0)) {
            *(int *)(param_1 + 0x184) = iVar9;
            if (iVar22 < iVar5) {
              (**(code **)(param_2 + 0x24))(param_2,param_3,iVar5);
            }
            goto LAB_00018b58;
          }
          *(int *)(param_1 + 0x178) = iVar22;
        }
      }
      else {
LAB_00018b58:
        iVar22 = *(int *)(param_1 + 0x184);
        iVar26 = 0;
        iVar9 = 0;
        for (local_a0 = 0; local_a0 < iVar5; local_a0 = local_a0 + 1) {
          iVar24 = *(int *)(*(int *)(param_1 + 0x184) + local_a0 * 0x10);
          iVar6 = (**(code **)(param_2 + 0x1c))(param_2,iVar24);
          piVar17 = (int *)FUN_00014278(param_1,param_2,iVar24,iVar24 + iVar6);
          if (piVar17 == (int *)0x0) goto LAB_00018a38;
          if (*(char *)(*piVar17 + -1) != '\0') {
            if (*(int *)(param_1 + 0x90) == param_2) {
              *(undefined4 *)(param_1 + 0x11c) =
                   *(undefined4 *)(*(int *)(param_1 + 0x184) + local_a0 * 0x10);
            }
LAB_00018c04:
            iVar6 = 8;
            goto LAB_00018a3c;
          }
          *(undefined1 *)(*piVar17 + -1) = 1;
          *(int *)(iVar22 + iVar9 * 4) = *piVar17;
          iVar6 = *(int *)(param_1 + 0x184) + local_a0 * 0x10;
          if (*(char *)(iVar6 + 0xc) == '\0') {
            iVar24 = 0;
            if ((char)piVar17[2] != '\0') {
              for (; iVar24 < iVar15; iVar24 = iVar24 + 1) {
                if (*(int **)(*(int *)(local_a8 + 0x14) + iVar24 * 0xc) == piVar17) {
                  uVar11 = *(undefined1 *)(*(int *)(local_a8 + 0x14) + iVar24 * 0xc + 4);
                  goto LAB_00018c84;
                }
              }
            }
            uVar11 = 1;
LAB_00018c84:
            iVar6 = FUN_00018918(param_1,param_2,uVar11,*(undefined4 *)(iVar6 + 4),
                                 *(undefined4 *)(iVar6 + 8),param_1 + 0x19c,param_6);
            if (iVar6 != 0) goto LAB_00018a3c;
            *(undefined4 *)(iVar22 + iVar9 * 4 + 4) = *(undefined4 *)(param_1 + 0x1ac);
          }
          else {
            iVar6 = FUN_00014050(param_1 + 0x19c,param_2,*(undefined4 *)(iVar6 + 4),
                                 *(undefined4 *)(iVar6 + 8));
            *(int *)(iVar22 + iVar9 * 4 + 4) = iVar6;
            if (iVar6 == 0) goto LAB_00018a38;
          }
          *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
          if (piVar17[1] == 0) {
            iVar9 = iVar9 + 2;
          }
          else if (*(char *)((int)piVar17 + 9) == '\0') {
            iVar9 = iVar9 + 2;
            iVar26 = iVar26 + 1;
            *(undefined1 *)(*piVar17 + -1) = 2;
          }
          else {
            iVar6 = FUN_00012e58(param_1,piVar17[1],piVar17,*(undefined4 *)(iVar22 + iVar9 * 4 + 4),
                                 param_5);
            if (iVar6 != 0) goto LAB_00018a3c;
          }
        }
        *(int *)(param_1 + 0x17c) = iVar9;
        if ((*(int **)(local_a8 + 8) == (int *)0x0) ||
           (iVar5 = **(int **)(local_a8 + 8), *(char *)(iVar5 + -1) == '\0')) {
          iVar6 = -1;
LAB_00018d70:
          *(int *)(param_1 + 0x180) = iVar6;
        }
        else {
          for (iVar6 = 0; iVar6 < iVar9; iVar6 = iVar6 + 2) {
            if (iVar5 == *(int *)(iVar22 + iVar6 * 4)) goto LAB_00018d70;
          }
        }
        for (iVar5 = 0; iVar5 < iVar15; iVar5 = iVar5 + 1) {
          iVar6 = iVar5 * 0xc;
          iVar27 = *(int *)(local_a8 + 0x14);
          piVar17 = *(int **)(iVar27 + iVar6);
          iVar24 = *piVar17;
          if ((*(char *)(iVar24 + -1) == '\0') && (*(int *)(iVar27 + iVar6 + 8) != 0)) {
            if (piVar17[1] == 0) {
              *(undefined1 *)(iVar24 + -1) = 1;
            }
            else {
              if (*(char *)((int)piVar17 + 9) != '\0') {
                iVar6 = FUN_00012e58(param_1);
                if (iVar6 == 0) goto LAB_00018e64;
                goto LAB_00018a3c;
              }
              iVar26 = iVar26 + 1;
              *(undefined1 *)(iVar24 + -1) = 2;
            }
            iVar24 = iVar9 * 4;
            *(undefined4 *)(iVar22 + iVar9 * 4) = **(undefined4 **)(iVar27 + iVar6);
            iVar9 = iVar9 + 2;
            *(undefined4 *)(iVar22 + iVar24 + 4) = *(undefined4 *)(iVar27 + iVar6 + 8);
          }
LAB_00018e64:
        }
        *(undefined4 *)(iVar22 + iVar9 * 4) = 0;
        iVar5 = 0;
        if (iVar26 == 0) {
LAB_000192b0:
          for (; iVar5 < iVar9; iVar5 = iVar5 + 2) {
            *(undefined1 *)(*(int *)(iVar22 + iVar5 * 4) + -1) = 0;
          }
        }
        else {
          bVar1 = *(byte *)(param_1 + 400);
          uVar10 = (uint)bVar1;
          if (0x1f < uVar10) goto LAB_00018a38;
          if ((iVar26 << 1) >> uVar10 == 0) {
            iVar15 = *(int *)(param_1 + 0x18c);
            iVar5 = 1 << uVar10;
            local_a4 = iVar5;
            if (iVar15 == 0) goto LAB_00018edc;
          }
          else {
            do {
              iVar5 = iVar26 >> uVar10;
              uVar10 = uVar10 + 1 & 0xff;
            } while (iVar5 != 0);
            iVar6 = 1;
            if (uVar10 < 3) {
              uVar10 = 3;
            }
            *(char *)(param_1 + 400) = (char)uVar10;
            uVar10 = (uint)*(byte *)(param_1 + 400);
            if (((0x1f < uVar10) || (iVar5 = 1 << uVar10, DAT_00019340 < (uint)(1 << uVar10))) ||
               (iVar15 = (**(code **)(param_1 + 0x10))
                                   (*(undefined4 *)(param_1 + 0x188),0xc << uVar10), iVar15 == 0)) {
              *(byte *)(param_1 + 400) = bVar1;
              goto LAB_00018a3c;
            }
            *(int *)(param_1 + 0x188) = iVar15;
            local_a4 = iVar5;
LAB_00018edc:
            do {
              iVar5 = iVar5 + -1;
              *(undefined4 *)(*(int *)(param_1 + 0x188) + iVar5 * 0xc) = 0xffffffff;
            } while (iVar5 != 0);
            iVar15 = -1;
          }
          iVar15 = iVar15 + -1;
          *(int *)(param_1 + 0x18c) = iVar15;
          uVar4 = DAT_00019320;
          uVar3 = DAT_00019318;
          for (iVar5 = 0; iVar5 < iVar9; iVar5 = iVar5 + 2) {
            pcVar23 = *(char **)(iVar22 + iVar5 * 4);
            iVar6 = param_1;
            if (pcVar23[-1] == '\x02') {
              do {
                iVar24 = iVar6;
                iVar6 = *(int *)(iVar24 + 0x1d8);
              } while (iVar6 != 0);
              local_68 = *(uint *)(iVar24 + 0x1ec);
              local_80 = uVar3;
              local_78 = DAT_00019328 ^ local_68;
              uStack_74 = DAT_0001932c;
              local_70 = uVar4;
              local_68 = DAT_00019330 ^ local_68;
              uStack_64 = DAT_00019334;
              local_58 = auStack_60;
              local_50 = 0;
              pcVar23[-1] = '\0';
              iVar6 = FUN_000139d0(param_1,iVar14 + 0x28,pcVar23,0);
              if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == 0)) goto LAB_00018a38;
              puVar20 = *(undefined4 **)(*(int *)(iVar6 + 4) + 4);
              if (puVar20 == (undefined4 *)0x0) goto LAB_0001947c;
              for (iVar6 = 0; iVar6 < (int)puVar20[5]; iVar6 = iVar6 + 1) {
                uVar11 = *(undefined1 *)(puVar20[4] + iVar6);
                if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
                   (iVar24 = FUN_00013cc4(param_1 + 0x19c), iVar24 == 0)) goto LAB_00018a38;
                puVar19 = *(undefined1 **)(param_1 + 0x1a8);
                *(undefined1 **)(param_1 + 0x1a8) = puVar19 + 1;
                *puVar19 = uVar11;
              }
              FUN_000124e0(&local_80);
              do {
                pcVar21 = pcVar23 + 1;
                cVar2 = *pcVar23;
                pcVar23 = pcVar21;
              } while (cVar2 != ':');
              for (iVar6 = 0; pcVar21[iVar6] != '\0'; iVar6 = iVar6 + 1) {
              }
              FUN_000124e0(&local_80,pcVar21);
              do {
                if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
                   (iVar6 = FUN_00013cc4(param_1 + 0x19c), iVar6 == 0)) goto LAB_00018a38;
                pcVar23 = *(char **)(param_1 + 0x1a8);
                *(char **)(param_1 + 0x1a8) = pcVar23 + 1;
                cVar2 = *pcVar21;
                *pcVar23 = cVar2;
                pcVar21 = pcVar21 + 1;
              } while (cVar2 != '\0');
              uVar8 = FUN_00012590(&local_80);
              uVar18 = uVar8 & local_a4 - 1U;
              uVar10 = 0;
              while( true ) {
                iVar24 = uVar18 * 0xc;
                iVar6 = *(int *)(param_1 + 0x188) + iVar24;
                if (*(int *)(*(int *)(param_1 + 0x188) + iVar24) != iVar15) break;
                if (*(uint *)(iVar6 + 4) == uVar8) {
                  pcVar23 = (char *)(*(int *)(param_1 + 0x1ac) + -1);
                  pcVar21 = (char *)(*(int *)(iVar6 + 8) + -1);
                  while( true ) {
                    pcVar23 = pcVar23 + 1;
                    pcVar21 = pcVar21 + 1;
                    if (*pcVar21 != *pcVar23) break;
                    if (*pcVar21 == '\0') goto LAB_00018c04;
                  }
                  if (*pcVar23 == '\0') goto LAB_00018c04;
                }
                if (uVar10 == 0) {
                  uVar10 = (local_a4 - 1U & 0x3ff) >> 2 &
                           (-local_a4 & uVar8) >> (*(byte *)(param_1 + 400) - 1 & 0xff) | 1;
                }
                if ((int)uVar18 < (int)uVar10) {
                  uVar18 = local_a4 + uVar18;
                }
                uVar18 = uVar18 - uVar10;
              }
              if (*(char *)(param_1 + 0xe9) != '\0') {
                *(undefined1 *)(*(int *)(param_1 + 0x1a8) + -1) = *(undefined1 *)(param_1 + 0x1d4);
                pcVar23 = *(char **)*puVar20;
                do {
                  if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
                     (iVar6 = FUN_00013cc4(param_1 + 0x19c), iVar6 == 0)) goto LAB_00018a38;
                  pcVar21 = *(char **)(param_1 + 0x1a8);
                  *(char **)(param_1 + 0x1a8) = pcVar21 + 1;
                  cVar2 = *pcVar23;
                  *pcVar21 = cVar2;
                  pcVar23 = pcVar23 + 1;
                } while (cVar2 != '\0');
              }
              iVar26 = iVar26 + -1;
              uVar16 = *(undefined4 *)(param_1 + 0x1ac);
              *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
              *(undefined4 *)(iVar22 + iVar5 * 4) = uVar16;
              *(int *)(*(int *)(param_1 + 0x188) + iVar24) = iVar15;
              *(uint *)(*(int *)(param_1 + 0x188) + iVar24 + 4) = uVar8;
              *(undefined4 *)(*(int *)(param_1 + 0x188) + iVar24 + 8) = uVar16;
              if (iVar26 == 0) {
                iVar5 = iVar5 + 2;
                goto LAB_000192b0;
              }
            }
            else {
              pcVar23[-1] = '\0';
            }
          }
        }
        for (iVar5 = *param_5; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
          *(undefined1 *)(**(int **)(iVar5 + 0xc) + -1) = 0;
        }
        iVar6 = 0;
        if (*(char *)(param_1 + 0xe8) == '\0') goto LAB_00018a3c;
        if (*(int *)(local_a8 + 4) == 0) {
          puVar20 = *(undefined4 **)(iVar14 + 0x9c);
          if (puVar20 == (undefined4 *)0x0) goto LAB_00018a3c;
          pcVar23 = (char *)*param_4;
        }
        else {
          puVar20 = *(undefined4 **)(*(int *)(local_a8 + 4) + 4);
          if (puVar20 == (undefined4 *)0x0) {
LAB_0001947c:
            iVar6 = 0x1b;
            goto LAB_00018a3c;
          }
          pcVar21 = (char *)*param_4;
          do {
            pcVar23 = pcVar21 + 1;
            cVar2 = *pcVar21;
            pcVar21 = pcVar23;
          } while (cVar2 != ':');
        }
        pcVar21 = (char *)0x0;
        if (*(char *)(param_1 + 0xe9) != '\0') {
          iVar14 = *(int *)*puVar20;
          pcVar21 = (char *)0x0;
          if (iVar14 != 0) {
            pcVar12 = (char *)(iVar14 + -1);
            do {
              pcVar21 = pcVar12 + (2 - iVar14);
              pcVar12 = pcVar12 + 1;
            } while (*pcVar12 != '\0');
          }
        }
        param_4[1] = pcVar23;
        param_4[4] = puVar20[5];
        uVar16 = *(undefined4 *)*puVar20;
        param_4[5] = pcVar21;
        param_4[2] = uVar16;
        __n = 0;
        do {
          sVar25 = __n;
          __n = sVar25 + 1;
        } while (pcVar23[sVar25] != '\0');
        iVar14 = puVar20[5];
        if ((iVar14 <= 0x7fffffff - (int)pcVar21) &&
           ((int)__n <= 0x7fffffff - (int)(pcVar21 + iVar14))) {
          pcVar12 = pcVar21 + iVar14 + __n;
          if ((int)pcVar12 <= (int)puVar20[6]) {
LAB_00019090:
            pvVar7 = memcpy((void *)(puVar20[4] + puVar20[5]),pcVar23,__n);
            if (pcVar21 != (char *)0x0) {
              *(undefined1 *)((int)pvVar7 + sVar25) = *(undefined1 *)(param_1 + 0x1d4);
              memcpy((void *)((int)pvVar7 + sVar25 + 1),*(void **)*puVar20,(size_t)pcVar21);
            }
            iVar6 = 0;
            *param_4 = puVar20[4];
            goto LAB_00018a3c;
          }
          if ((int)pcVar12 < 0x7fffffe8) {
            pvVar7 = (void *)(**(code **)(param_1 + 0xc))(pcVar12 + 0x18);
            if (pvVar7 != (void *)0x0) {
              puVar20[6] = pcVar12 + 0x18;
              memcpy(pvVar7,(void *)puVar20[4],puVar20[5]);
              for (piVar17 = *(int **)(param_1 + 0x168); piVar17 != (int *)0x0;
                  piVar17 = (int *)*piVar17) {
                if (piVar17[3] == puVar20[4]) {
                  piVar17[3] = (int)pvVar7;
                }
              }
              (**(code **)(param_1 + 0x14))();
              puVar20[4] = pvVar7;
              goto LAB_00019090;
            }
          }
        }
      }
    }
  }
LAB_00018a38:
  iVar6 = 1;
LAB_00018a3c:
  if (local_44 != *piVar13) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}



/* ===== FUN_00019490 @ 00019490 size=1036 ===== */

void FUN_00019490(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_34;
  undefined1 local_30 [4];
  int local_2c;
  
  iVar8 = 1;
  iVar6 = *(int *)(param_1 + 0x160);
  piVar3 = *(int **)(DAT_0001989c + 0x194b0 + DAT_000198a0);
  iVar7 = iVar6 + 0x68;
  local_2c = *piVar3;
  uVar4 = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x110) = 1;
  if ((*(int *)(iVar6 + 0x68) != 0) || (iVar1 = FUN_00013cc4(iVar7), iVar1 != 0)) {
LAB_000194f0:
    local_34 = param_3;
    iVar8 = (**(code **)(param_2 + 0x14))(param_2,param_3,param_4,&local_34);
    iVar1 = FUN_00017f30(param_1,iVar8,param_3,local_34,0x17c7,param_5);
    if (iVar1 == 0) {
      iVar8 = 0x2b;
      FUN_0001341c(param_1);
      goto LAB_00019548;
    }
    if (iVar8 != 6) {
      if (iVar8 < 7) {
        if (iVar8 == -3) {
          local_34 = param_3 + *(int *)(param_2 + 0x40);
LAB_000195ec:
          if ((*(int *)(iVar6 + 0x70) == *(int *)(iVar6 + 0x74)) &&
             (iVar8 = FUN_00013cc4(iVar7), iVar8 == 0)) goto LAB_0001965c;
          puVar5 = *(undefined1 **)(iVar6 + 0x74);
          *(undefined1 **)(iVar6 + 0x74) = puVar5 + 1;
          *puVar5 = 10;
          param_3 = local_34;
          goto LAB_000194f0;
        }
        if (-3 < iVar8) {
          if (iVar8 == -1) {
            if (*(int *)(param_1 + 0x90) == param_2) {
              *(int *)(param_1 + 0x11c) = param_3;
            }
          }
          else {
            if (iVar8 != 0) goto LAB_000195a0;
            if (*(int *)(param_1 + 0x90) == param_2) {
              *(int *)(param_1 + 0x11c) = local_34;
            }
          }
          iVar8 = 4;
          goto LAB_00019548;
        }
        if (iVar8 == -4) {
LAB_0001968c:
          iVar8 = 0;
          goto LAB_00019548;
        }
      }
      else {
        if (iVar8 == 9) goto LAB_000197bc;
        if (9 < iVar8) {
          if (iVar8 == 10) {
            iVar8 = (**(code **)(param_2 + 0x28))(param_2,param_3);
            if (iVar8 < 0) {
              iVar8 = 0xe;
              if (*(int *)(param_1 + 0x90) == param_2) {
                *(int *)(param_1 + 0x11c) = param_3;
              }
              goto LAB_00019548;
            }
            iVar8 = FUN_00028f20(iVar8,local_30);
            for (iVar1 = 0; param_3 = local_34, iVar1 < iVar8; iVar1 = iVar1 + 1) {
              if ((*(int *)(iVar6 + 0x70) == *(int *)(iVar6 + 0x74)) &&
                 (iVar2 = FUN_00013cc4(iVar7), iVar2 == 0)) goto LAB_0001965c;
              puVar5 = *(undefined1 **)(iVar6 + 0x74);
              *(undefined1 **)(iVar6 + 0x74) = puVar5 + 1;
              *puVar5 = local_30[iVar1];
            }
          }
          else {
            if (iVar8 != 0x1c) goto LAB_000195a0;
            if ((*(char *)(param_1 + 0x1e4) == '\0') && (*(int *)(param_1 + 0x90) == param_2)) {
              *(int *)(param_1 + 0x11c) = param_3;
              iVar8 = 10;
              goto LAB_00019548;
            }
            iVar8 = FUN_00014050(param_1 + 0x19c,param_2,param_3 + *(int *)(param_2 + 0x40),
                                 local_34 - *(int *)(param_2 + 0x40));
            if (iVar8 == 0) goto LAB_0001965c;
            iVar1 = FUN_000139d0(param_1,iVar6 + 0x84,iVar8,0);
            *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1ac);
            if (iVar1 == 0) {
              *(undefined1 *)(iVar6 + 0x80) = *(undefined1 *)(iVar6 + 0x82);
              goto LAB_0001968c;
            }
            if (*(char *)(iVar1 + 0x20) != '\0') {
              iVar8 = 0xc;
              if (*(int *)(param_1 + 0x90) == param_2) {
                *(int *)(param_1 + 0x11c) = param_3;
              }
              goto LAB_00019548;
            }
            if (*(int *)(iVar1 + 0x10) != 0) {
              if (*(int *)(param_1 + 0x70) != 0) {
                *(undefined1 *)(iVar6 + 0x83) = 0;
                *(undefined1 *)(iVar1 + 0x20) = 1;
                FUN_0001352c(param_1,iVar1,0x17f2);
                iVar8 = (**(code **)(param_1 + 0x70))
                                  (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(iVar1 + 0x14),
                                   *(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x18));
                if (iVar8 == 0) {
                  iVar8 = 0x15;
                  FUN_00013584(param_1,iVar1,0x17f6);
                  *(undefined1 *)(iVar1 + 0x20) = 0;
                  goto LAB_00019548;
                }
                FUN_00013584(param_1,iVar1,0x17fb);
                *(undefined1 *)(iVar1 + 0x20) = 0;
                param_3 = local_34;
                if (*(char *)(iVar6 + 0x83) != '\0') goto LAB_000194f0;
              }
              *(undefined1 *)(iVar6 + 0x80) = *(undefined1 *)(iVar6 + 0x82);
              param_3 = local_34;
              goto LAB_000194f0;
            }
            *(undefined1 *)(iVar1 + 0x20) = 1;
            FUN_0001352c(param_1,iVar1,0x1803);
            iVar8 = FUN_00019490(param_1,*(undefined4 *)(param_1 + 0xe0),*(int *)(iVar1 + 4),
                                 *(int *)(iVar1 + 4) + *(int *)(iVar1 + 8),1);
            FUN_00013584(param_1,iVar1,0x1808);
            *(undefined1 *)(iVar1 + 0x20) = 0;
            param_3 = local_34;
            if (iVar8 != 0) goto LAB_00019548;
          }
          goto LAB_000194f0;
        }
        if (iVar8 == 7) goto LAB_000195ec;
      }
LAB_000195a0:
      iVar8 = 0x17;
      if (*(int *)(param_1 + 0x90) == param_2) {
        *(int *)(param_1 + 0x11c) = param_3;
      }
      goto LAB_00019548;
    }
LAB_000197bc:
    iVar8 = FUN_00013fc8(iVar7,param_2,param_3,local_34);
    param_3 = local_34;
    if (iVar8 == 0) goto LAB_0001965c;
    goto LAB_000194f0;
  }
  goto LAB_00019564;
LAB_0001965c:
  iVar8 = 1;
LAB_00019548:
  *(undefined4 *)(param_1 + 0x110) = uVar4;
LAB_00019564:
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8);
  }
  return;
}



/* ===== FUN_000198a4 @ 000198a4 size=216 ===== */

void FUN_000198a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_30;
  int local_2c;
  
  piVar4 = *(int **)(DAT_0001997c + 0x198c4 + DAT_00019980);
  puVar3 = *(undefined4 **)(param_1 + 0x90);
  local_2c = *piVar4;
  local_30 = param_2;
  do {
    iVar1 = (*(code *)*puVar3)(puVar3,local_30,param_3,&local_30);
  } while (0 < iVar1);
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    if (iVar1 != 0) {
      *param_4 = param_2;
      uVar2 = 0;
      goto LAB_00019958;
    }
  }
  else {
    if (iVar1 == -1) {
      uVar2 = 5;
      goto LAB_00019958;
    }
    if (iVar1 != 0) {
      if (iVar1 == -2) {
        uVar2 = 6;
      }
      else {
        uVar2 = FUN_00019490(param_1,puVar3,param_2,param_3,0);
      }
      goto LAB_00019958;
    }
  }
  uVar2 = 4;
LAB_00019958:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_00019984 @ 00019984 size=408 ===== */

void FUN_00019984(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 local_30;
  int local_2c;
  
  uVar5 = *param_3;
  piVar3 = *(int **)(DAT_00019b20 + 0x199bc + DAT_00019b1c);
  local_2c = *piVar3;
  puVar4 = *(undefined4 **)(param_1 + 0x90);
  bVar7 = puVar4 == param_2;
  if (bVar7) {
    *(undefined4 *)(param_1 + 0x11c) = uVar5;
    puVar6 = (undefined4 *)(param_1 + 0x11c);
    puVar4 = (undefined4 *)(param_1 + 0x120);
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 0x128);
  }
  *puVar6 = uVar5;
  if (!bVar7) {
    puVar4 = puVar6 + 1;
  }
  *param_3 = 0;
  local_30 = uVar5;
  iVar1 = (*(code *)param_2[3])(param_2,uVar5,param_4,&local_30);
  iVar2 = FUN_00017f30(param_1,iVar1,uVar5,local_30,0x105b,0);
  if (iVar2 == 0) {
    FUN_0001341c(param_1);
    uVar5 = 0x2b;
    goto LAB_00019a44;
  }
  *puVar4 = local_30;
  if (iVar1 == -1) {
LAB_00019b00:
    if (param_6 == '\0') {
      uVar5 = 2;
      goto LAB_00019a44;
    }
  }
  else {
    if (-1 < iVar1) {
      if (iVar1 == 0) {
        *puVar6 = local_30;
        uVar5 = 4;
        goto LAB_00019a44;
      }
      if (iVar1 == 0x2a) {
        if (*(int *)(param_1 + 0x50) != 0) {
          FUN_000127c8(param_1,param_2,uVar5);
        }
        *param_3 = local_30;
        *param_5 = local_30;
        if (*(int *)(param_1 + 0x1dc) == 2) {
          uVar5 = 0x23;
        }
        else {
          uVar5 = 0;
        }
        goto LAB_00019a44;
      }
LAB_00019a88:
      *puVar6 = local_30;
      uVar5 = 0x17;
      goto LAB_00019a44;
    }
    if (iVar1 == -4) goto LAB_00019b00;
    if (iVar1 != -2) goto LAB_00019a88;
    if (param_6 == '\0') {
      uVar5 = 6;
      goto LAB_00019a44;
    }
  }
  *param_5 = uVar5;
  uVar5 = 0;
LAB_00019a44:
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}



/* ===== FUN_00019b24 @ 00019b24 size=732 ===== */

void FUN_00019b24(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar2 = DAT_00019e00 + 0x19b44;
  piVar4 = *(int **)(iVar2 + DAT_00019e04);
  local_28 = -1;
  local_24 = *piVar4;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  iVar1 = FUN_00017c70(param_1,param_3,param_4,0x10b7,0);
  if (iVar1 == 0) {
    iVar1 = 0x2b;
    FUN_0001341c(param_1);
    goto LAB_00019b94;
  }
  iVar1 = DAT_00019e0c;
  if (*(char *)(param_1 + 0xe8) == '\0') {
    iVar1 = DAT_00019e08;
  }
  iVar2 = (**(code **)(iVar2 + iVar1))
                    (param_2,*(undefined4 *)(param_1 + 0x90),param_3,param_4,param_1 + 0x11c,
                     &local_30,&local_2c,&local_38,&local_34,&local_28);
  iVar1 = local_38;
  if (iVar2 == 0) {
    if (param_2 == 0) {
      iVar1 = 0x1e;
    }
    else {
      iVar1 = 0x1f;
    }
    goto LAB_00019b94;
  }
  if (((param_2 == 0) && (local_28 == 1)) &&
     (*(undefined1 *)(*(int *)(param_1 + 0x160) + 0x82) = 1, *(int *)(param_1 + 0x1e8) == 1)) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  if (*(int *)(param_1 + 0x8c) == 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_000127c8(param_1,*(undefined4 *)(param_1 + 0x90),param_3,param_4);
    }
    iVar2 = 0;
    iVar3 = iVar2;
LAB_00019cec:
    iVar1 = local_38;
    if (*(int *)(param_1 + 0xe4) == 0) {
      if (local_34 == 0) {
        if (local_38 != 0) {
          if (iVar2 == 0) {
            iVar3 = *(int *)(param_1 + 0x90);
            iVar2 = (**(code **)(iVar3 + 0x1c))(iVar3,local_38);
            iVar2 = FUN_00014050(param_1 + 0x1b4,iVar3,iVar1,iVar1 + iVar2);
            if (iVar2 == 0) goto LAB_00019c9c;
          }
          iVar1 = FUN_00012d1c(param_1,iVar2);
          FUN_00012b58(param_1 + 0x1b4);
          if (iVar1 == 0x12) {
            *(int *)(param_1 + 0x11c) = local_38;
          }
          goto LAB_00019b94;
        }
      }
      else {
        if ((*(int *)(local_34 + 0x40) != *(int *)(*(int *)(param_1 + 0x90) + 0x40)) ||
           (*(int *)(local_34 + 0x40) == 2 && local_34 != *(int *)(param_1 + 0x90))) {
          iVar1 = 0x13;
          *(int *)(param_1 + 0x11c) = local_38;
          goto LAB_00019b94;
        }
        *(int *)(param_1 + 0x90) = local_34;
      }
    }
    iVar1 = 0;
    if (iVar2 != 0 || iVar3 != 0) {
      iVar1 = 0;
      FUN_00012b58(param_1 + 0x1b4);
    }
  }
  else {
    iVar2 = 0;
    if (local_38 == 0) {
LAB_00019ca4:
      iVar3 = 0;
      if ((local_30 == 0) ||
         (iVar3 = FUN_00014050(param_1 + 0x1b4,*(int *)(param_1 + 0x90),local_30,
                               local_2c - *(int *)(*(int *)(param_1 + 0x90) + 0x40)), iVar3 != 0)) {
        (**(code **)(param_1 + 0x8c))(*(undefined4 *)(param_1 + 4),iVar3,iVar2,local_28);
        goto LAB_00019cec;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x90);
      iVar2 = (**(code **)(iVar3 + 0x1c))(iVar3,local_38);
      iVar2 = FUN_00014050(param_1 + 0x1b4,iVar3,iVar1,iVar1 + iVar2);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x1c0);
        goto LAB_00019ca4;
      }
    }
LAB_00019c9c:
    iVar1 = 1;
  }
LAB_00019b94:
  if (local_24 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}



/* ===== FUN_00019e10 @ 00019e10 size=6736 ===== */

int FUN_00019e10(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
                int *param_7,byte param_8,char param_9,undefined4 param_10)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  byte bVar12;
  undefined1 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined4 extraout_r3;
  int *piVar23;
  int iVar24;
  code *pcVar25;
  int *piVar26;
  int *piVar27;
  bool bVar28;
  bool bVar29;
  int *local_48;
  int *local_40;
  
  cVar3 = param_9;
  bVar2 = param_8;
  iVar24 = *(int *)(param_1 + 0x160);
  if (*(undefined4 **)(param_1 + 0x90) == param_2) {
    local_48 = (int *)(param_1 + 0x11c);
    piVar27 = (int *)(param_1 + 0x120);
  }
  else {
    local_48 = *(int **)(param_1 + 0x128);
    piVar27 = local_48 + 1;
  }
  iVar20 = DAT_0001ae20 + 0x19f76;
  do {
    *local_48 = param_3;
    *piVar27 = param_6;
    if (param_5 < 1) {
      if (param_5 == 0) {
        bVar12 = 0;
      }
      else {
        bVar12 = bVar2 & 1;
      }
      if (bVar12 != 0) goto LAB_00019ea0;
      switch(param_5) {
      case 0:
        *local_48 = param_6;
        return 4;
      case -0xf:
        param_5 = 0xf;
        goto LAB_00019f90;
      case -0xe:
        break;
      case -0xd:
        break;
      case -0xc:
        break;
      case -0xb:
        break;
      case -10:
        break;
      case -9:
        break;
      case -8:
        break;
      case -7:
        break;
      case -6:
        break;
      case -5:
        break;
      case -4:
        if (*(undefined4 **)(param_1 + 0x90) == param_2) {
          if (*(char *)(param_1 + 0x1e4) == '\0') {
            return 3;
          }
        }
        else if (*(char *)(*(int *)(param_1 + 0x128) + 0x14) == '\0') {
          *param_7 = param_3;
          return 0;
        }
        iVar24 = (**(code **)(param_1 + 0xfc))(param_1 + 0xfc,0xfffffffc,param_4,param_4,param_2);
        if (iVar24 == -1) {
          return 0x1d;
        }
LAB_00019ea0:
        *param_7 = param_3;
        return 0;
      case -3:
        break;
      case -2:
        return 6;
      case -1:
        return 5;
      }
      param_5 = -param_5;
      param_6 = param_4;
    }
LAB_00019f90:
    iVar4 = (**(code **)(param_1 + 0xfc))(param_1 + 0xfc,param_5,param_3,param_6,param_2);
    if (((iVar4 < 1) || ((2 < iVar4 && (iVar4 != 0x39)))) &&
       (iVar5 = FUN_00017f30(param_1,param_5,param_3,param_6,0x1264,param_10), iVar5 == 0)) {
      FUN_0001341c(param_1);
      return 0x2b;
    }
    iVar5 = DAT_0001ae24;
    switch(iVar4) {
    case 0:
      bVar29 = param_5 == 0xe;
      goto LAB_0001b738;
    case 1:
      uVar10 = 0;
      goto LAB_0001a014;
    case 2:
      if (*(char *)(param_1 + 0x1e5) != '\0') {
        uVar13 = *(undefined1 *)(iVar24 + 0x81);
        *(undefined1 *)(iVar24 + 0x81) = 1;
        if ((*(int *)(param_1 + 0x1e8) != 0) && (*(int *)(param_1 + 0x70) != 0)) {
          iVar20 = FUN_000139d0(param_1,iVar24 + 0x84,DAT_0001ae2c + 0x1a4d8,0x24);
          if (iVar20 == 0) {
            return 1;
          }
          *(undefined4 *)(iVar20 + 0x14) = *(undefined4 *)(param_1 + 0x164);
          *(undefined1 *)(iVar24 + 0x83) = 0;
          iVar20 = (**(code **)(param_1 + 0x70))
                             (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(iVar20 + 0x14),
                              *(undefined4 *)(iVar20 + 0x10),*(undefined4 *)(iVar20 + 0x18));
          if (iVar20 == 0) {
            return 0x15;
          }
          if (*(char *)(iVar24 + 0x83) == '\0') {
            *(undefined1 *)(iVar24 + 0x81) = uVar13;
          }
          else if (((*(char *)(iVar24 + 0x82) == '\0') &&
                   (*(code **)(param_1 + 0x6c) != (code *)0x0)) &&
                  (iVar24 = (**(code **)(param_1 + 0x6c))(*(undefined4 *)(param_1 + 4)), iVar24 == 0
                  )) {
            return 0x16;
          }
        }
      }
      *(int *)(param_1 + 0x114) = DAT_0001ae30 + 0x1a458;
      iVar24 = FUN_0001cb28(param_1,param_3,param_4,param_7);
      return iVar24;
    case 3:
      iVar4 = *(int *)(param_1 + 0x54);
      goto LAB_0001b744;
    case 4:
      if (*(int *)(param_1 + 0x54) == 0) {
        *(undefined4 *)(param_1 + 0x140) = 0;
        break;
      }
      iVar4 = FUN_00014050(param_1 + 0x19c,param_2,param_3,param_6);
      *(int *)(param_1 + 0x13c) = iVar4;
      if (iVar4 == 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
      *(undefined4 *)(param_1 + 0x144) = 0;
      *(undefined4 *)(param_1 + 0x140) = 0;
      goto LAB_0001a078;
    case 5:
      bVar29 = true;
      *(undefined1 *)(param_1 + 0x1e5) = 0;
      *(undefined1 *)(iVar24 + 0x81) = 1;
      if (*(int *)(param_1 + 0x54) == 0) {
        *(int *)(param_1 + 0x140) = DAT_0001ae60 + 0x1ab9c;
      }
      else {
        iVar5 = FUN_00014050(param_1 + 0x19c,param_2,param_3 + param_2[0x10],param_6 - param_2[0x10]
                            );
        *(int *)(param_1 + 0x140) = iVar5;
        if (iVar5 == 0) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
        bVar29 = false;
      }
      if ((((*(char *)(iVar24 + 0x82) == '\0') && (*(int *)(param_1 + 0x1e8) == 0)) &&
          (*(code **)(param_1 + 0x6c) != (code *)0x0)) &&
         (iVar5 = (**(code **)(param_1 + 0x6c))(*(undefined4 *)(param_1 + 4)), iVar5 == 0)) {
        return 0x16;
      }
      if (*(int *)(param_1 + 0x138) == 0) {
        iVar5 = FUN_000139d0(param_1,iVar24 + 0x84,DAT_0001ae5c + 0x1ab14,0x24);
        *(int *)(param_1 + 0x138) = iVar5;
        if (iVar5 == 0) {
          return 1;
        }
        *(undefined4 *)(iVar5 + 0x18) = 0;
      }
      goto LAB_0001aa1c;
    case 6:
      bVar29 = false;
      *(undefined1 *)(param_1 + 0x1e5) = 0;
      iVar5 = FUN_000139d0(param_1,iVar24 + 0x84,iVar5 + 0x1a21c,0x24);
      *(int *)(param_1 + 0x138) = iVar5;
      if (iVar5 == 0) {
        return 1;
      }
      *(undefined1 *)(iVar24 + 0x81) = 1;
      if (*(int *)(param_1 + 0x54) == 0) goto LAB_0001a210;
      iVar5 = (*(code *)param_2[0xd])(param_2,param_3,param_6,local_48);
      if (iVar5 == 0) {
        return 0x20;
      }
      iVar5 = FUN_00014050(param_1 + 0x19c,param_2,param_3 + param_2[0x10],param_6 - param_2[0x10]);
      if (iVar5 == 0) {
        return 1;
      }
      FUN_00012a04();
      *(int *)(param_1 + 0x144) = iVar5;
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
      goto LAB_0001a198;
    case 7:
      if (*(code **)(param_1 + 0x54) == (code *)0x0) break;
      (**(code **)(param_1 + 0x54))
                (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x13c),
                 *(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144),1);
      *(undefined4 *)(param_1 + 0x13c) = 0;
      goto LAB_0001a0dc;
    case 8:
      if (cVar3 != '\x01') {
        return 4;
      }
      bVar29 = *(int *)(param_1 + 0x13c) == 0;
      if (!bVar29) {
        (**(code **)(param_1 + 0x54))
                  (*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x13c),
                   *(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144),0);
        FUN_00012b58(param_1 + 0x19c);
      }
      if ((*(int *)(param_1 + 0x140) != 0) || (*(char *)(param_1 + 0x1e5) != '\0')) {
        uVar13 = *(undefined1 *)(iVar24 + 0x81);
        *(undefined1 *)(iVar24 + 0x81) = 1;
        if ((*(int *)(param_1 + 0x1e8) != 0) && (*(int *)(param_1 + 0x70) != 0)) {
          iVar4 = FUN_000139d0(param_1,iVar24 + 0x84,DAT_0001ae28 + 0x1a3d8,0x24);
          if (iVar4 == 0) {
            return 1;
          }
          if (*(char *)(param_1 + 0x1e5) != '\0') {
            *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_1 + 0x164);
          }
          *(undefined1 *)(iVar24 + 0x83) = 0;
          iVar4 = (**(code **)(param_1 + 0x70))
                            (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(iVar4 + 0x14),
                             *(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x18));
          if (iVar4 == 0) {
            return 0x15;
          }
          if (*(char *)(iVar24 + 0x83) == '\0') {
            if (*(int *)(param_1 + 0x140) == 0) {
              *(undefined1 *)(iVar24 + 0x81) = uVar13;
            }
          }
          else if (((*(char *)(iVar24 + 0x82) == '\0') &&
                   (*(code **)(param_1 + 0x6c) != (code *)0x0)) &&
                  (iVar4 = (**(code **)(param_1 + 0x6c))(*(undefined4 *)(param_1 + 4)), iVar4 == 0))
          {
            return 0x16;
          }
        }
        *(undefined1 *)(param_1 + 0x1e5) = 0;
      }
      if (*(code **)(param_1 + 0x58) == (code *)0x0) goto LAB_0001a208;
      (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 4));
      goto LAB_0001a078;
    case 9:
      iVar4 = (*(code *)param_2[0xb])(param_2,param_3,param_6);
      if (iVar4 != 0) goto LAB_0001ad1c;
      if (*(char *)(iVar24 + 0x80) == '\0') goto LAB_0001ad14;
      iVar4 = FUN_00014050(iVar24 + 0x50,param_2,param_3,param_6);
      if (iVar4 == 0) {
        return 1;
      }
      piVar8 = (int *)FUN_000139d0(param_1,iVar24,iVar4,0x24);
      *(int **)(param_1 + 0x138) = piVar8;
      if (piVar8 == (int *)0x0) {
        return 1;
      }
      if (*piVar8 == iVar4) {
        *(undefined4 *)(iVar24 + 0x60) = *(undefined4 *)(iVar24 + 0x5c);
        *(undefined4 *)(*(int *)(param_1 + 0x138) + 0x18) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x138) + 0x21) = 0;
        bVar29 = false;
        if (*(int *)(param_1 + 0x1d8) == 0) {
          bVar29 = *(int *)(param_1 + 0x128) == 0;
        }
        *(bool *)(*(int *)(param_1 + 0x138) + 0x22) = bVar29;
        goto LAB_0001acb4;
      }
      *(undefined4 *)(iVar24 + 0x5c) = *(undefined4 *)(iVar24 + 0x60);
      *(undefined4 *)(param_1 + 0x138) = 0;
      break;
    case 10:
      if (*(char *)(iVar24 + 0x80) != '\0') {
        iVar4 = FUN_00014050(iVar24 + 0x50,param_2,param_3,param_6);
        if (iVar4 == 0) {
          return 1;
        }
        piVar8 = (int *)FUN_000139d0(param_1,iVar24 + 0x84,iVar4,0x24);
        *(int **)(param_1 + 0x138) = piVar8;
        if (piVar8 == (int *)0x0) {
          return 1;
        }
        bVar29 = false;
        if (*piVar8 == iVar4) {
          *(undefined4 *)(iVar24 + 0x60) = *(undefined4 *)(iVar24 + 0x5c);
          *(undefined4 *)(*(int *)(param_1 + 0x138) + 0x18) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0x138) + 0x21) = 1;
          if (*(int *)(param_1 + 0x1d8) == 0) {
            bVar29 = *(int *)(param_1 + 0x128) == 0;
          }
          *(bool *)(*(int *)(param_1 + 0x138) + 0x22) = bVar29;
          goto LAB_0001acb4;
        }
      }
LAB_0001ad14:
      *(undefined4 *)(iVar24 + 0x5c) = *(undefined4 *)(iVar24 + 0x60);
LAB_0001ad1c:
      *(undefined4 *)(param_1 + 0x138) = 0;
      break;
    case 0xb:
      if (*(char *)(iVar24 + 0x80) != '\0') {
LAB_0001acb4:
        iVar4 = *(int *)(param_1 + 0x88);
        goto LAB_0001b744;
      }
      break;
    case 0xc:
      if (*(char *)(iVar24 + 0x80) == '\0') break;
      iVar4 = FUN_00019490(param_1,param_2,param_3 + param_2[0x10],param_6 - param_2[0x10],2);
      if (*(int *)(param_1 + 0x138) == 0) {
        *(undefined4 *)(iVar24 + 0x74) = *(undefined4 *)(iVar24 + 0x78);
LAB_0001a980:
        if (iVar4 != 0) {
          return iVar4;
        }
        break;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x138) + 4) = *(undefined4 *)(iVar24 + 0x78);
      *(int *)(*(int *)(param_1 + 0x138) + 8) = *(int *)(iVar24 + 0x74) - *(int *)(iVar24 + 0x78);
      *(undefined4 *)(iVar24 + 0x78) = *(undefined4 *)(iVar24 + 0x74);
      if (*(int *)(param_1 + 0x88) == 0) goto LAB_0001a980;
      *piVar27 = param_3;
      puVar7 = *(undefined4 **)(param_1 + 0x138);
      (**(code **)(param_1 + 0x88))
                (*(undefined4 *)(param_1 + 4),*puVar7,*(undefined1 *)((int)puVar7 + 0x21),puVar7[1],
                 puVar7[2],*(undefined4 *)(param_1 + 0x164),0,0,0);
      goto LAB_0001a974;
    case 0xd:
      bVar29 = true;
LAB_0001aa1c:
      if ((*(char *)(iVar24 + 0x80) != '\0') && (iVar5 = *(int *)(param_1 + 0x138), iVar5 != 0)) {
        uVar10 = FUN_00014050(iVar24 + 0x50,param_2,param_3 + param_2[0x10],param_6 - param_2[0x10])
        ;
        *(undefined4 *)(iVar5 + 0x10) = uVar10;
        if (*(int *)(*(int *)(param_1 + 0x138) + 0x10) == 0) {
          return 1;
        }
        bVar28 = iVar4 == 0xd;
        *(undefined4 *)(*(int *)(param_1 + 0x138) + 0x14) = *(undefined4 *)(param_1 + 0x164);
        *(undefined4 *)(iVar24 + 0x60) = *(undefined4 *)(iVar24 + 0x5c);
        iVar4 = *(int *)(param_1 + 0x88);
LAB_0001a1f0:
        if (iVar4 == 0) {
          bVar28 = false;
        }
        if (bVar28) goto LAB_0001a078;
      }
      goto LAB_0001a208;
    case 0xe:
LAB_0001a210:
      iVar5 = (*(code *)param_2[0xd])(param_2,param_3,param_6,local_48);
      if (iVar5 == 0) {
        return 0x20;
      }
      bVar29 = true;
LAB_0001a198:
      if ((*(char *)(iVar24 + 0x80) != '\0') && (*(int *)(param_1 + 0x138) != 0)) {
        iVar5 = FUN_00014050(iVar24 + 0x50,param_2,param_3 + param_2[0x10],param_6 - param_2[0x10]);
        if (iVar5 == 0) {
          return 1;
        }
        FUN_00012a04();
        bVar28 = iVar4 == 0xe;
        *(int *)(*(int *)(param_1 + 0x138) + 0x18) = iVar5;
        *(undefined4 *)(iVar24 + 0x60) = *(undefined4 *)(iVar24 + 0x5c);
        iVar4 = *(int *)(param_1 + 0x88);
        goto LAB_0001a1f0;
      }
      goto LAB_0001a208;
    case 0xf:
      if (((*(char *)(iVar24 + 0x80) == '\0') || (*(int *)(param_1 + 0x138) == 0)) ||
         (*(int *)(param_1 + 0x88) == 0)) break;
      *piVar27 = param_3;
      puVar7 = *(undefined4 **)(param_1 + 0x138);
      pcVar25 = *(code **)(param_1 + 0x88);
      uVar13 = *(undefined1 *)((int)puVar7 + 0x21);
      uVar15 = 0;
      uVar10 = puVar7[6];
      uVar16 = puVar7[4];
      uVar17 = puVar7[5];
LAB_0001ab24:
      (*pcVar25)(*(undefined4 *)(param_1 + 4),*puVar7,uVar13,0,0,uVar17,uVar16,uVar10,uVar15);
      goto LAB_0001a078;
    case 0x10:
      if ((*(char *)(iVar24 + 0x80) != '\0') && (iVar4 = *(int *)(param_1 + 0x138), iVar4 != 0)) {
        uVar10 = FUN_00014050(iVar24 + 0x50,param_2,param_3,param_6);
        *(undefined4 *)(iVar4 + 0x1c) = uVar10;
        if (*(int *)(*(int *)(param_1 + 0x138) + 0x1c) == 0) {
          return 1;
        }
        *(undefined4 *)(iVar24 + 0x60) = *(undefined4 *)(iVar24 + 0x5c);
        if (*(int *)(param_1 + 0x5c) != 0) {
          *piVar27 = param_3;
          puVar7 = *(undefined4 **)(param_1 + 0x138);
          (**(code **)(param_1 + 0x5c))
                    (*(undefined4 *)(param_1 + 4),*puVar7,puVar7[5],puVar7[4],puVar7[6],puVar7[7]);
          goto LAB_0001a078;
        }
        if (*(int *)(param_1 + 0x88) != 0) {
          *piVar27 = param_3;
          puVar7 = *(undefined4 **)(param_1 + 0x138);
          pcVar25 = *(code **)(param_1 + 0x88);
          uVar15 = puVar7[7];
          uVar10 = puVar7[6];
          uVar16 = puVar7[4];
          uVar17 = puVar7[5];
          uVar13 = 0;
          goto LAB_0001ab24;
        }
      }
      break;
    case 0x11:
      iVar4 = *(int *)(param_1 + 0x60);
      goto LAB_0001b744;
    case 0x12:
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
      if (*(int *)(param_1 + 0x60) == 0) break;
      iVar4 = FUN_00014050(param_1 + 0x19c,param_2,param_3,param_6);
      *(int *)(param_1 + 0x14c) = iVar4;
      if (iVar4 == 0) {
        return 1;
      }
LAB_0001adb8:
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
      goto LAB_0001a078;
    case 0x13:
      if ((*(int *)(param_1 + 0x14c) == 0) || (*(int *)(param_1 + 0x60) == 0)) {
        bVar29 = true;
      }
      else {
        iVar4 = FUN_00014050(param_1 + 0x19c,param_2,param_3 + param_2[0x10],param_6 - param_2[0x10]
                            );
        if (iVar4 == 0) {
          return 1;
        }
        *piVar27 = param_3;
        (**(code **)(param_1 + 0x60))
                  (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14c),
                   *(undefined4 *)(param_1 + 0x164),iVar4,*(undefined4 *)(param_1 + 0x150));
        bVar29 = false;
      }
      goto LAB_0001aee0;
    case 0x14:
      if ((*(int *)(param_1 + 0x150) == 0) || (*(int *)(param_1 + 0x60) == 0)) {
        bVar29 = true;
      }
      else {
        *piVar27 = param_3;
        (**(code **)(param_1 + 0x60))
                  (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14c),
                   *(undefined4 *)(param_1 + 0x164),0,*(undefined4 *)(param_1 + 0x150));
        bVar29 = false;
      }
LAB_0001aee0:
      FUN_00012b58(param_1 + 0x19c);
      goto LAB_0001a208;
    case 0x15:
      iVar4 = (*(code *)param_2[0xd])(param_2,param_3,param_6,local_48);
      if (iVar4 == 0) {
        return 0x20;
      }
      if (*(int *)(param_1 + 0x14c) != 0) {
        iVar4 = FUN_00014050(param_1 + 0x19c,param_2,param_3 + param_2[0x10],param_6 - param_2[0x10]
                            );
        if (iVar4 == 0) {
          return 1;
        }
        FUN_00012a04();
        *(int *)(param_1 + 0x150) = iVar4;
        goto LAB_0001adb8;
      }
      break;
    case 0x16:
      iVar4 = FUN_00014278(param_1,param_2,param_3,param_6);
      *(int *)(param_1 + 0x158) = iVar4;
      if (iVar4 == 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined2 *)(param_1 + 0x15c) = 0;
      goto LAB_0001a490;
    case 0x17:
      *(undefined1 *)(param_1 + 0x15c) = 1;
      iVar4 = DAT_0001ae34 + 0x1a5fa;
      goto LAB_0001a4f0;
    case 0x18:
      *(undefined1 *)(param_1 + 0x15d) = 1;
      iVar4 = DAT_0001ae38 + 0x1a620;
      goto LAB_0001a4f0;
    case 0x19:
      iVar4 = DAT_0001ae3c + 0x1a630;
      goto LAB_0001a51c;
    case 0x1a:
      iVar4 = DAT_0001ae40 + 0x1a64d;
      goto LAB_0001a4f0;
    case 0x1b:
      iVar4 = DAT_0001ae44 + 0x1a668;
      goto LAB_0001a4f0;
    case 0x1c:
      iVar4 = DAT_0001ae48 + 0x1a67c;
LAB_0001a51c:
      iVar4 = iVar4 + 3;
      goto LAB_0001a4f0;
    case 0x1d:
      iVar4 = DAT_0001ae4c + 0x1a698;
      goto LAB_0001a4f0;
    case 0x1e:
      iVar4 = DAT_0001ae50 + 0x1a6b0;
LAB_0001a4f0:
      *(int *)(param_1 + 0x148) = iVar4;
LAB_0001a490:
      if (*(char *)(iVar24 + 0x80) != '\0') {
        iVar4 = *(int *)(param_1 + 0x84);
LAB_0001b744:
        if (iVar4 != 0) goto LAB_0001a078;
      }
      break;
    case 0x1f:
      goto LAB_0001a578;
    case 0x20:
LAB_0001a578:
      if ((*(char *)(iVar24 + 0x80) == '\0') || (*(int *)(param_1 + 0x84) == 0)) break;
      if (*(int *)(param_1 + 0x148) == 0) {
        iVar5 = iVar20;
        if (iVar4 == 0x20) {
          iVar5 = DAT_0001ae54 + 0x1a6ae;
        }
      }
      else {
        iVar5 = DAT_0001ae58 + 0x1a6c8;
      }
      pcVar18 = (char *)(iVar5 + -1);
      while (pcVar18 = pcVar18 + 1, *pcVar18 != '\0') {
        if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
           (iVar4 = FUN_00013cc4(param_1 + 0x19c), iVar4 == 0)) {
          return 1;
        }
        pcVar11 = *(char **)(param_1 + 0x1a8);
        *(char **)(param_1 + 0x1a8) = pcVar11 + 1;
        *pcVar11 = *pcVar18;
      }
      if (*(int *)(param_1 + 0x1ac) == 0) {
        return 1;
      }
      iVar4 = FUN_00013fc8(param_1 + 0x19c,param_2,param_3,param_6);
      if (iVar4 == 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x1ac);
      goto LAB_0001a078;
    case 0x21:
      goto LAB_0001a490;
    case 0x22:
      iVar4 = FUN_000140ac(param_1,param_2,param_3,param_6);
      *(int *)(param_1 + 0x154) = iVar4;
      if (iVar4 == 0) {
        return 1;
      }
      goto LAB_0001a490;
    case 0x23:
      goto LAB_0001a644;
    case 0x24:
LAB_0001a644:
      if (*(char *)(iVar24 + 0x80) != '\0') {
        iVar5 = FUN_000128c4(*(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x158),
                             *(undefined1 *)(param_1 + 0x15c),*(undefined1 *)(param_1 + 0x15d),0,
                             param_1);
        if (iVar5 == 0) {
          return 1;
        }
        if ((*(int *)(param_1 + 0x84) != 0) &&
           (pcVar18 = *(char **)(param_1 + 0x148), pcVar18 != (char *)0x0)) {
          if ((*pcVar18 == '(') || ((*pcVar18 == 'N' && (pcVar18[1] == 'O')))) {
            if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
               (iVar5 = FUN_00013cc4(param_1 + 0x19c), iVar5 == 0)) {
              return 1;
            }
            puVar21 = *(undefined1 **)(param_1 + 0x1a8);
            *(undefined1 **)(param_1 + 0x1a8) = puVar21 + 1;
            *puVar21 = 0x29;
            if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
               (iVar5 = FUN_00013cc4(param_1 + 0x19c), iVar5 == 0)) {
              return 1;
            }
            puVar21 = *(undefined1 **)(param_1 + 0x1a8);
            *(undefined1 **)(param_1 + 0x1a8) = puVar21 + 1;
            *puVar21 = 0;
            *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x1ac);
            *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
          }
          *piVar27 = param_3;
          puVar14 = *(undefined4 **)(param_1 + 0x158);
          puVar7 = *(undefined4 **)(param_1 + 0x154);
          bVar29 = iVar4 == 0x24;
          uVar10 = 0;
LAB_0001a740:
          (**(code **)(param_1 + 0x84))
                    (*(undefined4 *)(param_1 + 4),*puVar7,*puVar14,*(undefined4 *)(param_1 + 0x148),
                     uVar10,bVar29);
LAB_0001a0dc:
          FUN_00012b58(param_1 + 0x19c);
          goto LAB_0001a078;
        }
      }
      break;
    case 0x25:
      goto LAB_0001a770;
    case 0x26:
LAB_0001a770:
      if (*(char *)(iVar24 + 0x80) == '\0') break;
      iVar5 = FUN_00018918(param_1,param_2,*(undefined1 *)(param_1 + 0x15c),param_3 + param_2[0x10],
                           param_6 - param_2[0x10],iVar24 + 0x50,2);
      if (iVar5 != 0) {
        return iVar5;
      }
      uVar10 = *(undefined4 *)(iVar24 + 0x60);
      *(undefined4 *)(iVar24 + 0x60) = *(undefined4 *)(iVar24 + 0x5c);
      iVar5 = FUN_000128c4(*(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x158),
                           *(undefined1 *)(param_1 + 0x15c),0,uVar10,param_1);
      if (iVar5 == 0) {
        return 1;
      }
      if ((*(int *)(param_1 + 0x84) == 0) ||
         (pcVar18 = *(char **)(param_1 + 0x148), pcVar18 == (char *)0x0)) break;
      if ((*pcVar18 == '(') || ((*pcVar18 == 'N' && (pcVar18[1] == 'O')))) {
        if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
           (iVar5 = FUN_00013cc4(param_1 + 0x19c), iVar5 == 0)) {
          return 1;
        }
        puVar21 = *(undefined1 **)(param_1 + 0x1a8);
        *(undefined1 **)(param_1 + 0x1a8) = puVar21 + 1;
        *puVar21 = 0x29;
        if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
           (iVar5 = FUN_00013cc4(param_1 + 0x19c), iVar5 == 0)) {
          return 1;
        }
        puVar21 = *(undefined1 **)(param_1 + 0x1a8);
        *(undefined1 **)(param_1 + 0x1a8) = puVar21 + 1;
        *puVar21 = 0;
        *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x1ac);
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
      }
      *piVar27 = param_3;
      puVar14 = *(undefined4 **)(param_1 + 0x158);
      bVar29 = iVar4 == 0x26;
      puVar7 = *(undefined4 **)(param_1 + 0x154);
      goto LAB_0001a740;
    case 0x27:
      goto LAB_0001b118;
    case 0x28:
      if (*(int *)(param_1 + 0x80) == 0) break;
      iVar4 = FUN_000140ac(param_1,param_2,param_3,param_6);
      *(int *)(param_1 + 0x154) = iVar4;
      if (iVar4 == 0) {
        return 1;
      }
      *(undefined4 *)(iVar24 + 0xb4) = 0;
      *(undefined4 *)(iVar24 + 0xb0) = 0;
      *(undefined1 *)(iVar24 + 0xa0) = 1;
      goto LAB_0001a078;
    case 0x29:
      goto LAB_0001b3d0;
    case 0x2a:
LAB_0001b3d0:
      if (*(char *)(iVar24 + 0xa0) != '\0') {
        if (*(int *)(param_1 + 0x80) != 0) {
          puVar7 = (undefined4 *)(**(code **)(param_1 + 0xc))(0x14);
          if (puVar7 == (undefined4 *)0x0) {
            return 1;
          }
          puVar7[1] = 0;
          uVar10 = extraout_r3;
          if (iVar4 == 0x29) {
            uVar10 = 2;
          }
          puVar7[2] = 0;
          if (iVar4 != 0x29) {
            uVar10 = 1;
          }
          puVar7[3] = 0;
          puVar7[4] = 0;
          *puVar7 = uVar10;
          *piVar27 = param_3;
          (**(code **)(param_1 + 0x80))
                    (*(undefined4 *)(param_1 + 4),**(undefined4 **)(param_1 + 0x154));
          *(undefined1 *)(iVar24 + 0xa0) = 0;
          goto LAB_0001a078;
        }
        *(undefined1 *)(iVar24 + 0xa0) = 0;
      }
      break;
    case 0x2b:
      if (*(char *)(iVar24 + 0xa0) != '\0') {
        iVar4 = *(int *)(*(int *)(iVar24 + 0xb8) + (*(int *)(iVar24 + 0xb4) + 0x3fffffff) * 4);
        iVar5 = *(int *)(iVar24 + 0xa4);
        uVar10 = 3;
LAB_0001b0e8:
        *(undefined4 *)(iVar5 + iVar4 * 0x1c) = uVar10;
        goto LAB_0001b118;
      }
      break;
    case 0x2c:
      uVar22 = *(uint *)(param_1 + 0x1d0);
      if (uVar22 <= *(uint *)(param_1 + 0x100)) {
        if (uVar22 == 0) goto LAB_0001b0a0;
        if ((int)uVar22 < 0) {
          return 1;
        }
        *(uint *)(param_1 + 0x1d0) = uVar22 << 1;
        iVar4 = (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x1cc));
        if (iVar4 == 0) {
          *(uint *)(param_1 + 0x1d0) = *(uint *)(param_1 + 0x1d0) >> 1;
          return 1;
        }
        *(int *)(param_1 + 0x1cc) = iVar4;
        if (*(int *)(iVar24 + 0xb8) != 0) {
          if (0x3fffffff < *(uint *)(param_1 + 0x1d0)) {
            return 1;
          }
          iVar4 = (**(code **)(param_1 + 0x10))
                            (*(int *)(iVar24 + 0xb8),*(uint *)(param_1 + 0x1d0) << 2);
          if (iVar4 == 0) {
            return 1;
          }
          *(int *)(iVar24 + 0xb8) = iVar4;
        }
      }
      while (*(undefined1 *)(*(int *)(param_1 + 0x1cc) + *(int *)(param_1 + 0x100)) = 0,
            *(char *)(iVar24 + 0xa0) != '\0') {
        iVar4 = FUN_00012bf4(param_1);
        if (iVar4 < 0) {
          return 1;
        }
        if (*(int *)(iVar24 + 0xb8) != 0) {
          uVar10 = 6;
          *(int *)(*(int *)(iVar24 + 0xb8) + *(int *)(iVar24 + 0xb4) * 4) = iVar4;
          *(int *)(iVar24 + 0xb4) = *(int *)(iVar24 + 0xb4) + 1;
          iVar5 = *(int *)(iVar24 + 0xa4);
          goto LAB_0001b0e8;
        }
        __assert((char *)(DAT_0001ae70 + 0x1b0a0),(char *)(DAT_0001ae6c + 0x1b098),0x14d1);
LAB_0001b0a0:
        *(undefined4 *)(param_1 + 0x1d0) = 0x20;
        iVar4 = (**(code **)(param_1 + 0xc))();
        *(int *)(param_1 + 0x1cc) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x1d0) = 0;
          return 1;
        }
      }
      break;
    case 0x2d:
      uVar10 = 0;
      goto LAB_0001b534;
    case 0x2e:
      uVar10 = 2;
      goto LAB_0001b534;
    case 0x2f:
      uVar10 = 1;
      goto LAB_0001b534;
    case 0x30:
      uVar10 = 3;
LAB_0001b534:
      if (*(char *)(iVar24 + 0xa0) != '\0') {
        iVar4 = *(int *)(param_1 + 0x80);
        iVar5 = *(int *)(iVar24 + 0xb4) + -1;
        *(int *)(iVar24 + 0xb4) = iVar5;
        bVar29 = iVar4 == 0;
        *(undefined4 *)
         (*(int *)(*(int *)(iVar24 + 0xb8) + iVar5 * 4) * 0x1c + *(int *)(iVar24 + 0xa4) + 4) =
             uVar10;
        if (*(int *)(iVar24 + 0xb4) == 0) {
          if (iVar4 != 0) {
            iVar4 = *(int *)(param_1 + 0x160);
            if (DAT_0001ae74 < *(uint *)(iVar4 + 0xb0)) {
              return 1;
            }
            uVar22 = *(uint *)(iVar4 + 0xb0) * 0x14;
            uVar19 = ~*(uint *)(iVar4 + 0xa8);
            if (uVar19 <= uVar22 && uVar22 - uVar19 != 0) {
              return 1;
            }
            piVar8 = (int *)(**(code **)(param_1 + 0xc))(uVar22 + *(uint *)(iVar4 + 0xa8));
            if (piVar8 == (int *)0x0) {
              return 1;
            }
            piVar9 = piVar8 + 5;
            piVar23 = piVar8 + *(int *)(iVar4 + 0xb0) * 5;
            piVar8[3] = 0;
            local_40 = piVar23;
            for (; piVar8 < piVar23; piVar8 = piVar8 + 5) {
              iVar5 = piVar8[3] * 0x1c;
              iVar6 = *(int *)(*(int *)(iVar4 + 0xa4) + iVar5);
              *piVar8 = iVar6;
              piVar8[1] = *(int *)(*(int *)(iVar4 + 0xa4) + iVar5 + 4);
              if (iVar6 == 4) {
                piVar8[2] = (int)local_40;
                pcVar18 = (char *)(*(int *)(*(int *)(iVar4 + 0xa4) + iVar5 + 8) + -1);
                do {
                  pcVar18 = pcVar18 + 1;
                  cVar1 = *pcVar18;
                  piVar26 = (int *)((int)local_40 + 1);
                  *(char *)local_40 = cVar1;
                  local_40 = piVar26;
                } while (cVar1 != '\0');
                piVar8[3] = 0;
                piVar8[4] = 0;
              }
              else {
                piVar8[2] = 0;
                iVar6 = *(int *)(*(int *)(iVar4 + 0xa4) + iVar5 + 0x14);
                piVar8[4] = (int)piVar9;
                piVar8[3] = iVar6;
                iVar5 = *(int *)(*(int *)(iVar4 + 0xa4) + iVar5 + 0xc);
                for (uVar22 = 0; uVar22 < (uint)piVar8[3]; uVar22 = uVar22 + 1) {
                  piVar9[3] = iVar5;
                  piVar9 = piVar9 + 5;
                  iVar5 = *(int *)(iVar5 * 0x1c + *(int *)(iVar4 + 0xa4) + 0x18);
                }
              }
            }
            *piVar27 = param_3;
            (**(code **)(param_1 + 0x80))
                      (*(undefined4 *)(param_1 + 4),**(undefined4 **)(param_1 + 0x154));
          }
          *(undefined1 *)(iVar24 + 0xa0) = 0;
          *(undefined4 *)(iVar24 + 0xa8) = 0;
        }
LAB_0001a208:
        bVar29 = !bVar29;
LAB_0001b738:
        if (bVar29) goto LAB_0001a078;
      }
      break;
    case 0x31:
      cVar1 = *(char *)(*(int *)(param_1 + 0x1cc) + *(int *)(param_1 + 0x100));
      if (cVar1 == ',') {
        return 2;
      }
      if (*(char *)(iVar24 + 0xa0) == '\0' || cVar1 != '\0') {
LAB_0001b1a0:
        bVar29 = true;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar24 + 0xb8) + (*(int *)(iVar24 + 0xb4) + 0x3fffffff) * 4) *
                0x1c;
        if (*(int *)(*(int *)(iVar24 + 0xa4) + iVar4) == 3) goto LAB_0001b1a0;
        *(undefined4 *)(*(int *)(iVar24 + 0xa4) + iVar4) = 5;
        bVar29 = *(int *)(param_1 + 0x80) == 0;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x1cc) + *(int *)(param_1 + 0x100)) = 0x7c;
      goto LAB_0001a208;
    case 0x32:
      if (*(char *)(*(int *)(param_1 + 0x1cc) + *(int *)(param_1 + 0x100)) == '|') {
        return 2;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x1cc) + *(int *)(param_1 + 0x100)) = 0x2c;
      if (*(char *)(iVar24 + 0xa0) != '\0') goto LAB_0001b118;
      break;
    case 0x33:
      iVar4 = 0;
      goto LAB_0001b47c;
    case 0x34:
      iVar4 = 2;
      goto LAB_0001b47c;
    case 0x35:
      iVar4 = 1;
      goto LAB_0001b47c;
    case 0x36:
      iVar4 = 3;
LAB_0001b47c:
      if (*(char *)(iVar24 + 0xa0) == '\0') break;
      iVar5 = param_6;
      if (iVar4 != 0) {
        iVar5 = param_6 - param_2[0x10];
      }
      iVar6 = FUN_00012bf4(param_1);
      if (iVar6 < 0) {
        return 1;
      }
      iVar6 = iVar6 * 0x1c;
      *(undefined4 *)(*(int *)(iVar24 + 0xa4) + iVar6) = 4;
      *(int *)(*(int *)(iVar24 + 0xa4) + iVar6 + 4) = iVar4;
      piVar8 = (int *)FUN_000140ac(param_1,param_2,param_3,iVar5);
      if (piVar8 == (int *)0x0) {
        return 1;
      }
      iVar4 = *piVar8;
      pcVar18 = (char *)(iVar4 + -1);
      *(int *)(*(int *)(iVar24 + 0xa4) + iVar6 + 8) = iVar4;
      do {
        pcVar11 = pcVar18 + (2 - iVar4);
        pcVar18 = pcVar18 + 1;
      } while (*pcVar18 != '\0');
      if ((char *)~*(uint *)(iVar24 + 0xa8) < pcVar11) {
        return 1;
      }
      *(char **)(iVar24 + 0xa8) = pcVar11 + *(uint *)(iVar24 + 0xa8);
LAB_0001b118:
      iVar4 = *(int *)(param_1 + 0x80);
      goto LAB_0001b744;
    case 0x37:
      iVar4 = FUN_00014120(param_1,param_2,param_3,param_6);
      goto LAB_0001b710;
    case 0x38:
      iVar4 = FUN_000141f8(param_1,param_2,param_3,param_6);
LAB_0001b710:
      if (iVar4 == 0) {
        return 1;
      }
      goto LAB_0001a078;
    case 0x39:
      uVar10 = 1;
LAB_0001a014:
      iVar4 = FUN_00019b24(param_1,uVar10,param_3,param_6);
      if (iVar4 != 0) {
        return iVar4;
      }
      param_2 = *(undefined4 **)(param_1 + 0x90);
      goto LAB_0001a078;
    case 0x3a:
      if (*(int *)(param_1 + 0x50) != 0) {
        FUN_000127c8(param_1,param_2,param_3,param_6);
      }
      iVar4 = FUN_00019984(param_1,param_2,&param_6,param_4,param_7,bVar2);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (param_6 == 0) {
        *(int *)(param_1 + 0x114) = DAT_0001ae64 + 0x1afc0;
        return 0;
      }
      goto LAB_0001a078;
    case 0x3b:
      goto LAB_0001b1a8;
    case 0x3c:
LAB_0001b1a8:
      bVar29 = true;
      *(undefined1 *)(iVar24 + 0x81) = 1;
      if (*(int *)(param_1 + 0x1e8) != 0) {
        iVar5 = FUN_00014050(iVar24 + 0x50,param_2,param_3 + param_2[0x10],param_6 - param_2[0x10]);
        if (iVar5 == 0) {
          return 1;
        }
        iVar6 = FUN_000139d0(param_1,iVar24 + 0x84,iVar5,0);
        *(undefined4 *)(iVar24 + 0x5c) = *(undefined4 *)(iVar24 + 0x60);
        if (*(int *)(param_1 + 0x10c) == 0) {
LAB_0001b248:
          if (iVar6 == 0) {
            *(undefined1 *)(iVar24 + 0x80) = *(undefined1 *)(iVar24 + 0x82);
            if ((iVar4 != 0x3c) || (*(code **)(param_1 + 0x78) == (code *)0x0)) break;
            (**(code **)(param_1 + 0x78))(*(undefined4 *)(param_1 + 4),iVar5,1);
            goto LAB_0001a078;
          }
        }
        else {
          if (*(char *)(iVar24 + 0x82) == '\0') {
            uVar22 = (uint)*(byte *)(iVar24 + 0x81);
          }
          else {
            uVar22 = *(uint *)(param_1 + 0x128);
          }
          if (uVar22 != 0) goto LAB_0001b248;
          if (iVar6 == 0) {
            return 0xb;
          }
          if (*(char *)(iVar6 + 0x22) == '\0') {
            return 0x18;
          }
        }
        if (*(char *)(iVar6 + 0x20) != '\0') {
          return 0xc;
        }
        if (*(int *)(iVar6 + 4) == 0) {
          if (*(int *)(param_1 + 0x70) == 0) {
            *(undefined1 *)(iVar24 + 0x80) = *(undefined1 *)(iVar24 + 0x82);
            break;
          }
          *(undefined1 *)(iVar24 + 0x83) = 0;
          *(undefined1 *)(iVar6 + 0x20) = 1;
          FUN_0001352c(param_1,iVar6,0x1536);
          iVar4 = (**(code **)(param_1 + 0x70))
                            (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(iVar6 + 0x14),
                             *(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x18));
          if (iVar4 == 0) {
            FUN_00013584(param_1,iVar6,0x153a);
            *(undefined1 *)(iVar6 + 0x20) = 0;
            return 0x15;
          }
          FUN_00013584(param_1,iVar6,0x153e);
          *(undefined1 *)(iVar6 + 0x20) = 0;
          bVar29 = false;
          if (*(char *)(iVar24 + 0x83) != '\0') goto LAB_0001b354;
          *(undefined1 *)(iVar24 + 0x80) = *(undefined1 *)(iVar24 + 0x82);
        }
        else {
          iVar4 = FUN_0001ba18(param_1,iVar6,iVar4 == 0x3c);
LAB_0001a974:
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        goto LAB_0001a078;
      }
      *(undefined1 *)(iVar24 + 0x80) = *(undefined1 *)(iVar24 + 0x82);
LAB_0001b354:
      if (((*(char *)(iVar24 + 0x82) == '\0') && (*(code **)(param_1 + 0x6c) != (code *)0x0)) &&
         (iVar4 = (**(code **)(param_1 + 0x6c))(*(undefined4 *)(param_1 + 4)), iVar4 == 0)) {
        return 0x16;
      }
      goto LAB_0001a208;
    case -1:
      if (param_5 == 0xc) {
        return 0x11;
      }
      if (param_5 == 0x1c) {
        return 10;
      }
      return 2;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_000127c8(param_1,param_2,param_3,param_6);
    }
LAB_0001a078:
    param_3 = param_6;
    if (*(int *)(param_1 + 0x1dc) == 2) {
      return 0x23;
    }
    if (*(int *)(param_1 + 0x1dc) == 3) goto LAB_00019ea0;
    param_5 = (*(code *)*param_2)(param_2,param_6,param_4,&param_6);
  } while( true );
}



/* ===== FUN_0001b8b8 @ 0001b8b8 size=156 ===== */

void FUN_0001b8b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_0001b954 + 0x1b8d8 + DAT_0001b958);
  iVar2 = *piVar3;
  uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x90))();
  FUN_00019e10(param_1,*(undefined4 *)(param_1 + 0x90),param_2,param_3,uVar1,param_2,param_4,
               *(char *)(param_1 + 0x1e0) == '\0',1,0);
  if (iVar2 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001b95c @ 0001b95c size=68 ===== */

void FUN_0001b95c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00013290();
  if (iVar1 != 0) {
    return;
  }
  *(int *)(param_1 + 0x114) = DAT_0001b9a0 + 0x1b994;
  FUN_0001b8b8(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_0001b9a4 @ 0001b9a4 size=112 ===== */

void FUN_0001b9a4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_14;
  
  local_14 = param_2;
  iVar1 = FUN_00019984(param_1,*(undefined4 *)(param_1 + 0x90),&local_14,param_3,param_4,
                       *(char *)(param_1 + 0x1e0) == '\0',param_3);
  if ((iVar1 == 0) && (local_14 != 0)) {
    *(int *)(param_1 + 0x114) = DAT_0001ba14 + 0x1ba04;
    FUN_0001b8b8(param_1,local_14,param_3,param_4);
  }
  return;
}



/* ===== FUN_0001ba18 @ 0001ba18 size=436 ===== */

void FUN_0001ba18(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int local_2c;
  
  puVar4 = *(undefined4 **)(param_1 + 300);
  piVar2 = *(int **)(DAT_0001bbcc + 0x1ba2c + DAT_0001bbd0);
  local_2c = *piVar2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(param_1 + 0xc))(0x18);
    if (puVar4 == (undefined4 *)0x0) {
      iVar7 = 1;
      goto LAB_0001bb54;
    }
  }
  else {
    *(undefined4 *)(param_1 + 300) = puVar4[2];
  }
  *(undefined1 *)(param_2 + 0x20) = 1;
  FUN_0001352c(param_1,param_2,0x165b);
  *(undefined4 *)(param_2 + 0xc) = 0;
  puVar4[2] = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 **)(param_1 + 0x128) = puVar4;
  puVar4[3] = param_2;
  uVar3 = *(undefined4 *)(param_1 + 0x134);
  *puVar4 = 0;
  puVar4[4] = uVar3;
  *(undefined1 *)(puVar4 + 5) = param_3;
  puVar4[1] = 0;
  iVar5 = *(int *)(param_2 + 4);
  iVar6 = iVar5 + *(int *)(param_2 + 8);
  local_30 = iVar5;
  if (*(char *)(param_2 + 0x21) == '\0') {
    iVar7 = FUN_0001bbd8(param_1,*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0xe0),
                         iVar5,iVar6,&local_30,0,1);
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 0xe0))
                      (*(undefined4 **)(param_1 + 0xe0),iVar5,iVar6,&local_30);
    iVar7 = FUN_00019e10(param_1,*(undefined4 *)(param_1 + 0xe0),iVar5,iVar6,uVar3,local_30,
                         &local_30,0,0,1);
  }
  iVar1 = DAT_0001bbd4;
  if (iVar7 == 0) {
    if ((local_30 == iVar6) || (*(int *)(param_1 + 0x1dc) != 3)) {
      FUN_00013584(param_1,param_2,0x167d);
      *(undefined1 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x128) = puVar4[2];
      puVar4[2] = *(undefined4 *)(param_1 + 300);
      *(undefined4 **)(param_1 + 300) = puVar4;
    }
    else {
      *(int *)(param_2 + 0xc) = local_30 - iVar5;
      *(int *)(param_1 + 0x114) = iVar1 + 0x1bb54;
    }
  }
LAB_0001bb54:
  if (local_2c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}



/* ===== FUN_0001bbd8 @ 0001bbd8 size=3904 ===== */

void FUN_0001bbd8(int param_1,int param_2,int param_3,uint *param_4,uint *param_5,
                 undefined4 *param_6,char param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  size_t sVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  code *pcVar15;
  void *__s2;
  int iVar16;
  char *pcVar17;
  undefined4 uVar18;
  int iVar19;
  bool bVar20;
  undefined4 *local_7c;
  uint *local_54;
  uint *local_50;
  undefined4 local_4c;
  uint local_48 [6];
  uint uStack_30;
  int local_2c;
  
  piVar11 = *(int **)(DAT_0001cb1c + 0x1bc14 + DAT_0001cb18);
  local_2c = *piVar11;
  iVar12 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x90) == param_3) {
    local_7c = (undefined4 *)(param_1 + 0x11c);
    puVar13 = (undefined4 *)(param_1 + 0x120);
  }
  else {
    local_7c = *(undefined4 **)(param_1 + 0x128);
    puVar13 = local_7c + 1;
  }
  *local_7c = param_4;
  local_54 = param_4;
  do {
    local_50 = local_54;
    iVar2 = (**(code **)(param_3 + 4))(param_3,local_54,param_5,&local_50);
    puVar9 = local_50;
    if (((iVar2 + 5U & 0xfffffffd) == 0) && (puVar9 = local_54, param_7 == '\0')) {
      puVar9 = param_5;
    }
    iVar3 = FUN_00017f30(param_1,iVar2,local_54,puVar9,0xacc,param_8);
    if (iVar3 == 0) {
      iVar2 = 0x2b;
      FUN_0001341c(param_1);
      goto LAB_0001bccc;
    }
    *puVar13 = local_50;
    switch(iVar2) {
    case 0:
      iVar2 = 4;
      *local_7c = local_50;
      goto LAB_0001bccc;
    case 1:
      goto LAB_0001c3c4;
    case 2:
LAB_0001c3c4:
      puVar4 = *(undefined4 **)(param_1 + 0x16c);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(**(code **)(param_1 + 0xc))(0x30);
        if (puVar4 != (undefined4 *)0x0) {
          iVar2 = (**(code **)(param_1 + 0xc))(0x20);
          puVar4[9] = iVar2;
          if (iVar2 != 0) {
            puVar4[10] = iVar2 + 0x20;
            goto LAB_0001c41c;
          }
          (**(code **)(param_1 + 0x14))(puVar4);
        }
        goto LAB_0001c1e4;
      }
      *(undefined4 *)(param_1 + 0x16c) = *puVar4;
LAB_0001c41c:
      puVar4[0xb] = 0;
      *puVar4 = *(undefined4 *)(param_1 + 0x168);
      *(undefined4 **)(param_1 + 0x168) = puVar4;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[1] = (int)local_54 + *(int *)(param_3 + 0x40);
      uVar18 = (**(code **)(param_3 + 0x1c))(param_3);
      puVar4[2] = uVar18;
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
      local_48[0] = puVar4[1];
      uVar8 = local_48[0] + puVar4[2];
      local_4c = (undefined1 *)puVar4[9];
      while( true ) {
        iVar2 = (**(code **)(param_3 + 0x38))(param_3,local_48,uVar8,&local_4c,puVar4[10] + -1);
        iVar3 = puVar4[9];
        bVar20 = iVar2 != 0;
        if (iVar2 != 1) {
          bVar20 = uVar8 <= local_48[0];
        }
        iVar2 = (int)local_4c - iVar3;
        if (bVar20) break;
        iVar16 = (puVar4[10] - iVar3) * 2;
        iVar3 = (**(code **)(param_1 + 0x10))(iVar3,iVar16);
        if (iVar3 == 0) goto LAB_0001c1e4;
        puVar4[9] = iVar3;
        local_4c = (undefined1 *)(iVar3 + iVar2);
        puVar4[10] = iVar3 + iVar16;
      }
      puVar4[6] = iVar2;
      puVar4[3] = iVar3;
      *local_4c = 0;
      iVar2 = FUN_000189b0(param_1,param_3,local_54,puVar4 + 3,puVar4 + 0xb,param_8);
      if (iVar2 == 0) {
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          if (*(int *)(param_1 + 0x50) != 0) {
            FUN_000127c8(param_1,param_3,local_54,local_50);
          }
        }
        else {
          (**(code **)(param_1 + 0x34))
                    (*(undefined4 *)(param_1 + 4),puVar4[3],*(undefined4 *)(param_1 + 0x184));
        }
        FUN_00012b58(param_1 + 0x19c);
        break;
      }
      goto LAB_0001bccc;
    case 3:
      goto LAB_0001c588;
    case 4:
LAB_0001c588:
      local_4c = (undefined1 *)0x0;
      iVar3 = (int)local_54 + *(int *)(param_3 + 0x40);
      iVar2 = (**(code **)(param_3 + 0x1c))(param_3,iVar3);
      local_48[0] = FUN_00014050(param_1 + 0x19c,param_3,iVar3,iVar3 + iVar2);
      if (local_48[0] == 0) goto LAB_0001c1e4;
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
      iVar2 = FUN_000189b0(param_1,param_3,local_54,local_48,&local_4c,2);
      if (iVar2 != 0) {
        FUN_00012704(param_1,local_4c);
        goto LAB_0001bccc;
      }
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
      pcVar15 = *(code **)(param_1 + 0x34);
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(*(undefined4 *)(param_1 + 4),local_48[0],*(undefined4 *)(param_1 + 0x184));
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        if ((pcVar15 == (code *)0x0) && (*(int *)(param_1 + 0x50) != 0)) {
          FUN_000127c8(param_1,param_3,local_54,local_50);
        }
      }
      else {
        if (*(int *)(param_1 + 0x34) != 0) {
          *local_7c = *puVar13;
        }
        (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 4),local_48[0]);
      }
      FUN_00012b58(param_1 + 0x19c);
      FUN_00012704(param_1,local_4c);
LAB_0001c684:
      if ((*(int *)(param_1 + 0x134) == 0) && (*(int *)(param_1 + 0x1dc) != 2)) {
        if (*(int *)(param_1 + 0x1dc) == 3) {
          *(int *)(param_1 + 0x114) = DAT_0001cb20 + 0x1c6b0;
          break;
        }
        iVar2 = FUN_00017f80(param_1,local_50,param_5,param_6);
        goto LAB_0001bccc;
      }
      break;
    case 5:
      if (*(int *)(param_1 + 0x134) == param_2) goto LAB_0001bde0;
      puVar4 = *(undefined4 **)(param_1 + 0x168);
      *(undefined4 *)(param_1 + 0x168) = *puVar4;
      *puVar4 = *(undefined4 *)(param_1 + 0x16c);
      *(undefined4 **)(param_1 + 0x16c) = puVar4;
      __s2 = (void *)((int)local_54 + *(int *)(param_3 + 0x40) * 2);
      sVar7 = (**(code **)(param_3 + 0x1c))(param_3,__s2);
      if ((puVar4[2] == sVar7) && (iVar2 = memcmp((void *)puVar4[1],__s2,puVar4[2]), iVar2 == 0)) {
        *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
        if (*(int *)(param_1 + 0x38) == 0) {
          if (*(int *)(param_1 + 0x50) != 0) {
            FUN_000127c8(param_1,param_3,local_54,local_50);
          }
        }
        else {
          if (*(char *)(param_1 + 0xe8) != '\0' && puVar4[4] != 0) {
            pcVar10 = (char *)(puVar4[4] + -1);
            pcVar17 = (char *)(puVar4[3] + puVar4[7]);
            while( true ) {
              pcVar10 = pcVar10 + 1;
              if (*pcVar10 == '\0') break;
              *pcVar17 = *pcVar10;
              pcVar17 = pcVar17 + 1;
            }
            if (*(char *)(param_1 + 0xe9) != '\0' && puVar4[5] != 0) {
              pcVar10 = (char *)(puVar4[5] + -1);
              *pcVar17 = *(char *)(param_1 + 0x1d4);
              while( true ) {
                pcVar17 = pcVar17 + 1;
                pcVar10 = pcVar10 + 1;
                if (*pcVar10 == '\0') break;
                *pcVar17 = *pcVar10;
              }
            }
            *pcVar17 = '\0';
          }
          (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 4),puVar4[3]);
        }
        while (piVar5 = (int *)puVar4[0xb], piVar5 != (int *)0x0) {
          if (*(code **)(param_1 + 0x68) != (code *)0x0) {
            (**(code **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 4),*(undefined4 *)*piVar5);
          }
          puVar4[0xb] = *(undefined4 *)(puVar4[0xb] + 4);
          piVar5[1] = *(int *)(param_1 + 0x174);
          *(int **)(param_1 + 0x174) = piVar5;
          *(int *)(*piVar5 + 4) = piVar5[2];
        }
        goto LAB_0001c684;
      }
      *local_7c = __s2;
      iVar2 = 7;
      goto LAB_0001bccc;
    case 6:
      pcVar15 = *(code **)(param_1 + 0x3c);
      if (pcVar15 == (code *)0x0) goto switchD_0001bcfc_default;
      if (*(char *)(param_3 + 0x44) != '\0') {
        iVar2 = (int)local_50 - (int)local_54;
        puVar9 = local_54;
        goto LAB_0001c8dc;
      }
      while( true ) {
        local_48[0] = *(uint *)(param_1 + 0x2c);
        uVar8 = (**(code **)(param_3 + 0x38))
                          (param_3,&local_54,local_50,local_48,*(undefined4 *)(param_1 + 0x30));
        *puVar13 = local_54;
        (*pcVar15)(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x2c),
                   local_48[0] - *(int *)(param_1 + 0x2c));
        if (uVar8 < 2) break;
        *local_7c = local_54;
      }
      break;
    case 7:
      pcVar15 = *(code **)(param_1 + 0x3c);
      if (pcVar15 == (code *)0x0) goto switchD_0001bcfc_default;
      iVar2 = 1;
      local_48[0] = CONCAT31(local_48[0]._1_3_,10);
      puVar9 = local_48;
LAB_0001c8dc:
      uVar18 = *(undefined4 *)(param_1 + 4);
      goto LAB_0001c8b8;
    case 8:
      if (*(code **)(param_1 + 0x48) == (code *)0x0) {
        if (*(int *)(param_1 + 0x50) != 0) {
          FUN_000127c8(param_1,param_3,local_54);
        }
      }
      else {
        (**(code **)(param_1 + 0x48))(*(undefined4 *)(param_1 + 4));
      }
      iVar2 = FUN_00018194(param_1,param_3,&local_50,param_5,param_6,param_7,param_8);
      if (iVar2 != 0) goto LAB_0001bccc;
      if (local_50 == (uint *)0x0) {
        *(int *)(param_1 + 0x114) = DAT_0001cb24 + 0x1c944;
        goto LAB_0001bccc;
      }
      break;
    case 9:
      cVar1 = (**(code **)(param_3 + 0x2c))
                        (param_3,(int)local_54 + *(int *)(param_3 + 0x40),
                         (int)local_50 - *(int *)(param_3 + 0x40));
      local_4c = (undefined1 *)CONCAT31(local_4c._1_3_,cVar1);
      if (cVar1 != '\0') {
        puVar4 = &local_4c;
        FUN_00017f30(param_1,9,puVar4,(int)&local_4c + 1,0xb0e,1);
        pcVar15 = *(code **)(param_1 + 0x3c);
        if (pcVar15 == (code *)0x0) goto LAB_0001bec0;
LAB_0001bf88:
        (*pcVar15)(*(undefined4 *)(param_1 + 4),puVar4);
        break;
      }
      puVar4 = (undefined4 *)
               FUN_00014050(iVar12 + 0x50,param_3,(int)local_54 + *(int *)(param_3 + 0x40),
                            (int)local_50 - *(int *)(param_3 + 0x40));
      if (puVar4 == (undefined4 *)0x0) goto LAB_0001c1e4;
      piVar5 = (int *)FUN_000139d0(param_1,iVar12,puVar4,0);
      *(undefined4 *)(iVar12 + 0x5c) = *(undefined4 *)(iVar12 + 0x60);
      if ((*(char *)(iVar12 + 0x81) == '\0') || (*(char *)(iVar12 + 0x82) != '\0')) {
        if (piVar5 == (int *)0x0) {
          iVar2 = 0xb;
          goto LAB_0001bccc;
        }
        if (*(char *)((int)piVar5 + 0x22) == '\0') {
          iVar2 = 0x18;
          goto LAB_0001bccc;
        }
      }
      else if (piVar5 == (int *)0x0) {
        pcVar15 = *(code **)(param_1 + 0x78);
        if (pcVar15 != (code *)0x0) goto LAB_0001bf88;
        goto LAB_0001bec0;
      }
      if ((char)piVar5[8] == '\0') {
        if (piVar5[7] == 0) {
          if (piVar5[1] == 0) {
            if (*(int *)(param_1 + 0x70) != 0) {
              *(undefined1 *)(piVar5 + 8) = 1;
              iVar2 = *(int *)(param_1 + 0x160);
              bVar20 = false;
              if (*(int *)(iVar2 + 0x9c) == 0) {
LAB_0001c0a4:
                FUN_00012b0c(local_48,iVar2 + 0x3c);
                while (piVar6 = (int *)FUN_00012b28(local_48), piVar6 != (int *)0x0) {
                  if (piVar6[1] != 0) {
                    if (bVar20) {
                      if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
                         (iVar3 = FUN_00013cc4(param_1 + 0x19c), iVar3 == 0)) goto LAB_0001c1dc;
                      puVar14 = *(undefined1 **)(param_1 + 0x1a8);
                      *(undefined1 **)(param_1 + 0x1a8) = puVar14 + 1;
                      *puVar14 = 0xc;
                    }
                    pcVar17 = (char *)(*piVar6 + -1);
                    while( true ) {
                      pcVar17 = pcVar17 + 1;
                      if (*pcVar17 == '\0') break;
                      if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
                         (iVar3 = FUN_00013cc4(param_1 + 0x19c), iVar3 == 0)) goto LAB_0001c1dc;
                      pcVar10 = *(char **)(param_1 + 0x1a8);
                      *(char **)(param_1 + 0x1a8) = pcVar10 + 1;
                      *pcVar10 = *pcVar17;
                    }
                    if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
                       (iVar3 = FUN_00013cc4(param_1 + 0x19c), iVar3 == 0)) goto LAB_0001c1dc;
                    puVar14 = *(undefined1 **)(param_1 + 0x1a8);
                    iVar16 = 0;
                    *(undefined1 **)(param_1 + 0x1a8) = puVar14 + 1;
                    *puVar14 = 0x3d;
                    iVar3 = *(int *)(piVar6[1] + 0x14);
                    if (*(char *)(param_1 + 0x1d4) != '\0') {
                      iVar3 = iVar3 + -1;
                    }
                    for (; bVar20 = true, iVar16 < iVar3; iVar16 = iVar16 + 1) {
                      if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
                         (iVar19 = FUN_00013cc4(param_1 + 0x19c), iVar19 == 0)) goto LAB_0001c1dc;
                      iVar19 = *(int *)(piVar6[1] + 0x10);
                      puVar14 = *(undefined1 **)(param_1 + 0x1a8);
                      *(undefined1 **)(param_1 + 0x1a8) = puVar14 + 1;
                      *puVar14 = *(undefined1 *)(iVar19 + iVar16);
                    }
                  }
                }
                FUN_00012b0c(local_48,iVar2);
                while (piVar6 = (int *)FUN_00012b28(local_48), piVar6 != (int *)0x0) {
                  if ((char)piVar6[8] != '\0') {
                    if (bVar20) {
                      if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
                         (iVar2 = FUN_00013cc4(param_1 + 0x19c), iVar2 == 0)) goto LAB_0001c1dc;
                      puVar14 = *(undefined1 **)(param_1 + 0x1a8);
                      *(undefined1 **)(param_1 + 0x1a8) = puVar14 + 1;
                      *puVar14 = 0xc;
                    }
                    pcVar17 = (char *)(*piVar6 + -1);
                    while( true ) {
                      pcVar17 = pcVar17 + 1;
                      bVar20 = true;
                      if (*pcVar17 == '\0') break;
                      if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
                         (iVar2 = FUN_00013cc4(param_1 + 0x19c), iVar2 == 0)) goto LAB_0001c1dc;
                      pcVar10 = *(char **)(param_1 + 0x1a8);
                      *(char **)(param_1 + 0x1a8) = pcVar10 + 1;
                      *pcVar10 = *pcVar17;
                    }
                  }
                }
                if ((*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1a4)) ||
                   (iVar2 = FUN_00013cc4(param_1 + 0x19c), iVar2 != 0)) {
                  puVar14 = *(undefined1 **)(param_1 + 0x1a8);
                  *(undefined1 **)(param_1 + 0x1a8) = puVar14 + 1;
                  *puVar14 = 0;
                  iVar2 = *(int *)(param_1 + 0x1ac);
                  *(undefined1 *)(piVar5 + 8) = 0;
                  if (iVar2 == 0) goto LAB_0001c1e4;
                  iVar2 = (**(code **)(param_1 + 0x70))
                                    (*(undefined4 *)(param_1 + 0x74),iVar2,piVar5[5],piVar5[4],
                                     piVar5[6]);
                  if (iVar2 != 0) {
                    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1ac);
                    break;
                  }
                  iVar2 = 0x15;
                  goto LAB_0001bccc;
                }
              }
              else if ((*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1a4)) ||
                      (iVar3 = FUN_00013cc4(param_1 + 0x19c), iVar3 != 0)) {
                puVar14 = *(undefined1 **)(param_1 + 0x1a8);
                iVar3 = 0;
                *(undefined1 **)(param_1 + 0x1a8) = puVar14 + 1;
                *puVar14 = 0x3d;
                iVar16 = *(int *)(*(int *)(iVar2 + 0x9c) + 0x14);
                if (*(char *)(param_1 + 0x1d4) != '\0') {
                  iVar16 = iVar16 + -1;
                }
                for (; iVar3 < iVar16; iVar3 = iVar3 + 1) {
                  if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1a4)) &&
                     (iVar19 = FUN_00013cc4(param_1 + 0x19c), iVar19 == 0)) goto LAB_0001c1dc;
                  iVar19 = *(int *)(*(int *)(iVar2 + 0x9c) + 0x10);
                  puVar14 = *(undefined1 **)(param_1 + 0x1a8);
                  *(undefined1 **)(param_1 + 0x1a8) = puVar14 + 1;
                  *puVar14 = *(undefined1 *)(iVar19 + iVar3);
                }
                bVar20 = true;
                goto LAB_0001c0a4;
              }
              *(undefined1 *)(piVar5 + 8) = 0;
              goto LAB_0001c1e4;
            }
          }
          else {
            if (*(char *)(param_1 + 0x130) != '\0') {
              iVar2 = FUN_0001ba18(param_1,piVar5,0);
              if (iVar2 == 0) break;
              goto LAB_0001bccc;
            }
            pcVar15 = *(code **)(param_1 + 0x78);
            if (pcVar15 != (code *)0x0) {
              puVar4 = (undefined4 *)*piVar5;
              goto LAB_0001bf88;
            }
          }
LAB_0001bec0:
          if (*(int *)(param_1 + 0x50) == 0) break;
          goto LAB_0001bed0;
        }
        iVar2 = 0xf;
      }
      else {
        iVar2 = 0xc;
      }
      goto LAB_0001bccc;
    case 10:
      iVar2 = (**(code **)(param_3 + 0x28))(param_3,local_54);
      if (iVar2 < 0) {
        iVar2 = 0xe;
        goto LAB_0001bccc;
      }
      pcVar15 = *(code **)(param_1 + 0x3c);
      if (pcVar15 == (code *)0x0) goto LAB_0001bec0;
      uVar18 = *(undefined4 *)(param_1 + 4);
      puVar9 = &uStack_30;
      iVar2 = FUN_00028f20(iVar2,puVar9);
LAB_0001c8b8:
      (*pcVar15)(uVar18,puVar9,iVar2);
      break;
    case 0xb:
      iVar2 = FUN_00014120(param_1,param_3,local_54);
      goto LAB_0001cac8;
    case 0xc:
      iVar2 = 0x11;
      goto LAB_0001bccc;
    case 0xd:
      iVar2 = FUN_000141f8(param_1,param_3,local_54);
LAB_0001cac8:
      if (iVar2 != 0) break;
      goto LAB_0001c1e4;
    case -5:
      if (param_7 == '\0') {
        pcVar15 = *(code **)(param_1 + 0x3c);
        if (pcVar15 == (code *)0x0) {
          if (*(int *)(param_1 + 0x50) != 0) {
            FUN_000127c8(param_1,param_3,local_54,param_5);
          }
        }
        else {
          if (*(char *)(param_3 + 0x44) == '\0') {
            local_48[0] = *(uint *)(param_1 + 0x2c);
            (**(code **)(param_3 + 0x38))
                      (param_3,&local_54,param_5,local_48,*(undefined4 *)(param_1 + 0x30));
            puVar9 = *(uint **)(param_1 + 0x2c);
            pcVar15 = *(code **)(param_1 + 0x3c);
            iVar12 = local_48[0] - (int)puVar9;
          }
          else {
            iVar12 = (int)param_5 - (int)local_54;
            puVar9 = local_54;
          }
          (*pcVar15)(*(undefined4 *)(param_1 + 4),puVar9,iVar12);
        }
        if (param_2 == 0) {
          *local_7c = param_5;
          goto LAB_0001bda4;
        }
        if (*(int *)(param_1 + 0x134) == param_2) {
LAB_0001bde8:
          *param_6 = param_5;
          goto LAB_0001bdf0;
        }
        *local_7c = param_5;
LAB_0001bde0:
        iVar2 = 0xd;
        goto LAB_0001bccc;
      }
      goto LAB_0001bd60;
    case -4:
      if (param_7 == '\0') {
        if (param_2 < 1) goto LAB_0001bda4;
        if (*(int *)(param_1 + 0x134) != param_2) goto LAB_0001bde0;
      }
      goto LAB_0001bd60;
    case -3:
      if (param_7 == '\0') {
        *puVar13 = param_5;
        if (*(code **)(param_1 + 0x3c) == (code *)0x0) {
          if (*(int *)(param_1 + 0x50) != 0) {
            FUN_000127c8(param_1,param_3,local_54,param_5);
          }
        }
        else {
          local_48[0] = CONCAT31(local_48[0]._1_3_,10);
          (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 4),local_48,1);
        }
        if (param_2 != 0) {
          if (*(int *)(param_1 + 0x134) == param_2) goto LAB_0001bde8;
          goto LAB_0001bde0;
        }
LAB_0001bda4:
        iVar2 = 3;
        goto LAB_0001bccc;
      }
      goto LAB_0001bd60;
    case -2:
      if (param_7 == '\0') {
        iVar2 = 6;
        goto LAB_0001bccc;
      }
      goto LAB_0001bd60;
    case -1:
      if (param_7 == '\0') {
        iVar2 = 5;
        goto LAB_0001bccc;
      }
      goto LAB_0001bd60;
    default:
switchD_0001bcfc_default:
      if (*(int *)(param_1 + 0x50) != 0) {
LAB_0001bed0:
        FUN_000127c8(param_1,param_3,local_54,local_50);
      }
    }
    local_54 = local_50;
    *local_7c = local_50;
    if (*(int *)(param_1 + 0x1dc) == 2) {
      iVar2 = 0x23;
      goto LAB_0001bccc;
    }
  } while (*(int *)(param_1 + 0x1dc) != 3);
LAB_0001bd60:
  *param_6 = local_54;
LAB_0001bdf0:
  iVar2 = 0;
LAB_0001bccc:
  if (local_2c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
LAB_0001c1dc:
  *(undefined1 *)(piVar5 + 8) = 0;
LAB_0001c1e4:
  iVar2 = 1;
  goto LAB_0001bccc;
}



/* ===== FUN_0001cb28 @ 0001cb28 size=80 ===== */

uint FUN_0001cb28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0001bbd8(param_1,0,*(undefined4 *)(param_1 + 0x90),param_2,param_3,param_4,
                       *(char *)(param_1 + 0x1e0) == '\0',0);
  if (uVar1 == 0) {
    iVar2 = FUN_00013190(param_1);
    uVar1 = (uint)(iVar2 == 0);
  }
  return uVar1;
}



/* ===== FUN_0001cb78 @ 0001cb78 size=80 ===== */

uint FUN_0001cb78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0001bbd8(param_1,1,*(undefined4 *)(param_1 + 0x90),param_2,param_3,param_4,
                       *(char *)(param_1 + 0x1e0) == '\0',1);
  if (uVar1 == 0) {
    iVar2 = FUN_00013190(param_1);
    uVar1 = (uint)(iVar2 == 0);
  }
  return uVar1;
}



/* ===== FUN_0001cbc8 @ 0001cbc8 size=168 ===== */

void FUN_0001cbc8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_14;
  
  local_14 = param_2;
  iVar1 = FUN_00018194(param_1,*(undefined4 *)(param_1 + 0x90),&local_14,param_3,param_4,
                       *(char *)(param_1 + 0x1e0) == '\0',0);
  if ((iVar1 == 0) && (local_14 != 0)) {
    if (*(int *)(param_1 + 0x1d8) == 0) {
      *(int *)(param_1 + 0x114) = DAT_0001cc74 + 0x1cc64;
      FUN_0001cb28(param_1,local_14,param_3,param_4);
    }
    else {
      *(int *)(param_1 + 0x114) = DAT_0001cc70 + 0x1cc40;
      FUN_0001cb78(param_1,local_14,param_3,param_4);
    }
  }
  return;
}



/* ===== FUN_0001cc78 @ 0001cc78 size=544 ===== */

void FUN_0001cc78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_30;
  int local_2c;
  
  iVar5 = *(int *)(param_1 + 0x128);
  if (iVar5 == 0) {
    param_1 = 0x17;
  }
  piVar2 = *(int **)(DAT_0001ce98 + 0x1cca4 + DAT_0001ce9c);
  local_2c = *piVar2;
  if (iVar5 != 0) {
    iVar3 = *(int *)(iVar5 + 0xc);
    puVar7 = *(undefined4 **)(param_1 + 0xe0);
    iVar6 = *(int *)(iVar3 + 4) + *(int *)(iVar3 + 0xc);
    iVar4 = *(int *)(iVar3 + 4) + *(int *)(iVar3 + 8);
    local_30 = iVar6;
    if (*(char *)(iVar3 + 0x21) == '\0') {
      iVar6 = FUN_0001bbd8(param_1,*(undefined4 *)(iVar5 + 0x10),puVar7,iVar6,iVar4,&local_30,0,1);
    }
    else {
      uVar1 = (*(code *)*puVar7)(puVar7,iVar6,iVar4,&local_30);
      iVar6 = FUN_00019e10(param_1,*(undefined4 *)(param_1 + 0xe0),iVar6,iVar4,uVar1,local_30,
                           &local_30,0,1,1);
    }
    if (iVar6 == 0) {
      if ((local_30 == iVar4) || (*(int *)(param_1 + 0x1dc) != 3)) {
        FUN_00013584(param_1,iVar3,0x16af);
        *(undefined1 *)(iVar3 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(iVar5 + 8);
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_1 + 300);
        *(int *)(param_1 + 300) = iVar5;
        if (*(char *)(iVar3 + 0x21) == '\0') {
          *(int *)(param_1 + 0x114) = DAT_0001cea4 + 0x1ce58;
          FUN_0001bbd8(param_1,*(int *)(param_1 + 0x1d8) != 0,*(undefined4 *)(param_1 + 0x90),
                       param_2,param_3,param_4,*(char *)(param_1 + 0x1e0) == '\0',0);
        }
        else {
          *(int *)(param_1 + 0x114) = DAT_0001cea0 + 0x1cdbc;
          uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x90))
                            (*(undefined4 **)(param_1 + 0x90),param_2,param_3,&local_30);
          FUN_00019e10(param_1,*(undefined4 *)(param_1 + 0x90),param_2,param_3,uVar1,local_30,
                       param_4,*(char *)(param_1 + 0x1e0) == '\0',1,0);
        }
      }
      else {
        *(int *)(iVar3 + 0xc) = local_30 - *(int *)(iVar3 + 4);
      }
    }
  }
  if (local_2c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0001cea8 @ 0001cea8 size=272 ===== */

void FUN_0001cea8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_0001cfb8 + 0x1cec8 + DAT_0001cfbc);
  iVar2 = *piVar3;
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x90) + 4))();
  *(undefined4 *)(param_1 + 0x120) = param_2;
  if (iVar1 == -1) {
    if (*(char *)(param_1 + 0x1e0) != '\0') {
      iVar1 = 5;
      goto LAB_0001cf9c;
    }
LAB_0001cf94:
    *param_4 = param_2;
    iVar1 = 0;
  }
  else {
    if (iVar1 == 0xc) {
      iVar1 = FUN_00019b24(param_1,1,param_2);
      if (iVar1 != 0) goto LAB_0001cf9c;
      if (*(int *)(param_1 + 0x1dc) == 2) {
        iVar1 = 0x23;
        goto LAB_0001cf9c;
      }
      if (*(int *)(param_1 + 0x1dc) == 3) {
        *param_4 = param_2;
        goto LAB_0001cf9c;
      }
    }
    else if (iVar1 == -2) {
      if (*(char *)(param_1 + 0x1e0) != '\0') {
        iVar1 = 6;
        goto LAB_0001cf9c;
      }
      goto LAB_0001cf94;
    }
    *(int *)(param_1 + 0x114) = DAT_0001cfc0 + 0x1cf70;
    *(undefined4 *)(param_1 + 0x134) = 1;
    iVar1 = FUN_0001cb78(param_1,param_2,param_3,param_4);
  }
LAB_0001cf9c:
  if (iVar2 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}



/* ===== FUN_0001d0f4 @ 0001d0f4 size=360 ===== */

void FUN_0001d0f4(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = FUN_00013290();
  if (iVar2 != 0) {
    return;
  }
  *(int *)(param_1 + 0x114) = DAT_0001d138 + 0x1d12c;
  piVar4 = *(int **)(DAT_0001d0e8 + 0x1cfe4 + DAT_0001d0ec);
  iVar3 = *piVar4;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x90) + 4))();
  if (iVar2 == -1) {
    if (*(char *)(param_1 + 0x1e0) != '\0') {
      *(int *)(param_1 + 0x11c) = param_2;
      uVar1 = 5;
      goto LAB_0001d06c;
    }
LAB_0001d0d4:
    *param_4 = param_2;
    uVar1 = 0;
  }
  else {
    if (iVar2 == 0xe) {
      iVar2 = FUN_00017f30(param_1,0xe,param_2,param_2,0xa50,0);
      if (iVar2 == 0) {
        FUN_0001341c(param_1);
        uVar1 = 0x2b;
        goto LAB_0001d06c;
      }
      if ((param_2 == param_3) && (*(char *)(param_1 + 0x1e0) == '\0')) {
        *param_4 = param_2;
        uVar1 = 0;
        goto LAB_0001d06c;
      }
    }
    else if (iVar2 == -2) {
      if (*(char *)(param_1 + 0x1e0) != '\0') {
        *(int *)(param_1 + 0x11c) = param_2;
        uVar1 = 6;
        goto LAB_0001d06c;
      }
      goto LAB_0001d0d4;
    }
    *(int *)(param_1 + 0x114) = DAT_0001d0f0 + 0x1d0b4;
    uVar1 = FUN_0001cea8(param_1,param_2,param_3,param_4);
  }
LAB_0001d06c:
  if (iVar3 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_0001d454 @ 0001d454 size=896 ===== */

void FUN_0001d454(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  
  iVar3 = FUN_00013290();
  if (iVar3 != 0) {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x160) + 0x83) = 1;
  if (*(int *)(param_1 + 0x110) == 0) {
    *(int *)(param_1 + 0x114) = DAT_0001d4d8 + 0x1d4c8;
    piVar4 = *(int **)(DAT_0001d448 + 0x1d310 + DAT_0001d44c);
    iStack_24 = *piVar4;
    local_28 = param_2;
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x90))();
    if (iVar3 < 1) {
      if (*(char *)(param_1 + 0x1e0) == '\0' && iVar3 != 0) {
        *param_4 = param_2;
        uVar2 = 0;
        goto LAB_0001d3c4;
      }
      if (iVar3 == -1) {
        uVar2 = 5;
        goto LAB_0001d3c4;
      }
      if (iVar3 == 0) {
        uVar2 = 4;
        goto LAB_0001d3c4;
      }
      if (iVar3 == -2) {
        uVar2 = 6;
        goto LAB_0001d3c4;
      }
    }
    else if (iVar3 == 0xe) {
      iVar3 = FUN_00017c70(param_1,param_2,local_28,0x11bb,0);
      param_2 = local_28;
      if (iVar3 == 0) {
        FUN_0001341c(param_1);
        uVar2 = 0x2b;
        goto LAB_0001d3c4;
      }
      iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x90))
                        (*(undefined4 **)(param_1 + 0x90),local_28,param_3,&local_28);
    }
    *(int *)(param_1 + 0x114) = DAT_0001d450 + 0x1d408;
    iStack_30 = 1;
    iStack_2c = 0;
    uVar2 = FUN_00019e10(param_1,*(undefined4 *)(param_1 + 0x90),param_2,param_3,iVar3,local_28,
                         param_4,*(char *)(param_1 + 0x1e0) == '\0');
LAB_0001d3c4:
    if (iStack_24 == *piVar4) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  *(int *)(param_1 + 0x114) = DAT_0001d4d4 + 0x1d4a4;
  piVar4 = *(int **)(DAT_0001d2e4 + 0x1d15c + DAT_0001d2e8);
  iStack_2c = *piVar4;
  *(int *)(param_1 + 0x11c) = param_2;
  iStack_30 = param_2;
  while( true ) {
    iVar3 = iStack_30;
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x90))
                      (*(undefined4 **)(param_1 + 0x90),iStack_30,param_3,&iStack_30);
    *(int *)(param_1 + 0x120) = iStack_30;
    if (iVar1 < 1) break;
    if (iVar1 == 0xc) {
      iVar3 = FUN_00019b24(param_1,0,iVar3,iStack_30);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x1dc) == 2) {
          iVar3 = 0x23;
        }
        else {
          iVar3 = DAT_0001d2ec + 0x1d260;
          *param_4 = iStack_30;
          *(int *)(param_1 + 0x114) = iVar3;
          iVar3 = FUN_000198a4(param_1,iStack_30,param_3,param_4);
        }
      }
      goto LAB_0001d200;
    }
    if (iVar1 == 0xe && iStack_30 == param_3) {
      if (*(char *)(param_1 + 0x1e0) == '\0') {
        iVar3 = FUN_00017c70(param_1,param_2,iStack_30,0x1186,0);
        if (iVar3 == 0) {
          FUN_0001341c(param_1);
          iVar3 = 0x2b;
        }
        else {
          *param_4 = iStack_30;
          iVar3 = 0;
        }
        goto LAB_0001d200;
      }
    }
    else if (iVar1 == 0x1d) {
      *param_4 = iStack_30;
      iVar3 = 2;
      goto LAB_0001d200;
    }
    *(int *)(param_1 + 0x11c) = iStack_30;
  }
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    if (iVar1 != 0) {
      *param_4 = param_2;
      iVar3 = 0;
      goto LAB_0001d200;
    }
  }
  else {
    if (iVar1 == -1) {
      iVar3 = 5;
      goto LAB_0001d200;
    }
    if (iVar1 != 0) {
      if (iVar1 == -2) {
        iVar3 = 6;
      }
      else {
        iVar3 = FUN_00019490(param_1,*(undefined4 *)(param_1 + 0x90),param_2,param_3,0);
      }
      goto LAB_0001d200;
    }
  }
  iVar3 = 4;
LAB_0001d200:
  if (iStack_2c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}



/* ===== FUN_0001d910 @ 0001d910 size=808 ===== */

undefined4 FUN_0001d910(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  
  iVar7 = param_3 - (int)param_2;
  if (iVar7 < 1) {
    return 0xffffffff;
  }
  bVar1 = *(byte *)(param_1 + (uint)*param_2 + 0x48);
  if (bVar1 == 0x13) {
    pbVar4 = param_2 + 1;
    if (param_3 - (int)pbVar4 < 1) {
      return 0xffffffff;
    }
    if (param_2[1] == 0x78) {
      pbVar4 = param_2 + 2;
      if (param_3 - (int)pbVar4 < 1) {
        return 0xffffffff;
      }
      if (*(byte *)(param_1 + (uint)param_2[2] + 0x48) - 0x18 < 2) {
        pbVar3 = param_2 + 3;
        do {
          pbVar4 = pbVar3;
          if (param_3 - (int)pbVar4 < 1) {
            return 0xffffffff;
          }
          uVar5 = (uint)*(byte *)(param_1 + (uint)*pbVar4 + 0x48);
          if (uVar5 == 0x12) {
LAB_0001db10:
            *param_4 = pbVar4 + 1;
            return 10;
          }
        } while ((0x11 < uVar5) && (pbVar3 = pbVar4 + 1, uVar5 - 0x18 < 2));
      }
    }
    else if (*(char *)(param_1 + (uint)param_2[1] + 0x48) == '\x19') {
      pbVar3 = param_2 + 2;
      do {
        pbVar4 = pbVar3;
        if (param_3 - (int)pbVar4 < 1) {
          return 0xffffffff;
        }
        cVar2 = *(char *)(param_1 + (uint)*pbVar4 + 0x48);
        if (cVar2 == '\x12') goto LAB_0001db10;
        pbVar3 = pbVar4 + 1;
      } while (cVar2 == '\x19');
    }
    *param_4 = pbVar4;
  }
  else {
    if (bVar1 < 0x14) {
      if (bVar1 == 6) {
        if (iVar7 < 3) {
          return 0xfffffffe;
        }
        iVar7 = (**(code **)(param_1 + 0x164))();
        if (iVar7 == 0) {
          pcVar6 = *(code **)(param_1 + 0x158);
          goto LAB_0001d9e4;
        }
      }
      else if (bVar1 == 7) {
        if (iVar7 < 4) {
          return 0xfffffffe;
        }
        iVar7 = (**(code **)(param_1 + 0x168))();
        if (iVar7 == 0) {
          pcVar6 = *(code **)(param_1 + 0x15c);
          goto LAB_0001da1c;
        }
      }
      else if (bVar1 == 5) {
        if (iVar7 == 1) {
          return 0xfffffffe;
        }
        iVar7 = (**(code **)(param_1 + 0x160))();
        if (iVar7 == 0) {
          pcVar6 = *(code **)(param_1 + 0x154);
LAB_0001d9ac:
          iVar7 = (*pcVar6)(param_1,param_2);
          if (iVar7 != 0) {
            param_2 = param_2 + 2;
LAB_0001db24:
            do {
              iVar7 = param_3 - (int)param_2;
              if (iVar7 < 1) {
                return 0xffffffff;
              }
              switch(*(undefined1 *)(param_1 + (uint)*param_2 + 0x48)) {
              case 5:
                goto LAB_0001dbb0;
              case 6:
                if (iVar7 < 3) {
                  return 0xfffffffe;
                }
                iVar7 = (**(code **)(param_1 + 0x164))(param_1,param_2);
                if (iVar7 != 0) goto switchD_0001db44_default;
                pcVar6 = *(code **)(param_1 + 0x14c);
LAB_0001d9e4:
                iVar7 = (*pcVar6)(param_1,param_2);
                if (iVar7 == 0) goto switchD_0001db44_default;
                param_2 = param_2 + 3;
                goto LAB_0001db24;
              case 7:
                if (iVar7 < 4) {
                  return 0xfffffffe;
                }
                iVar7 = (**(code **)(param_1 + 0x168))(param_1,param_2);
                if (iVar7 != 0) goto switchD_0001db44_default;
                pcVar6 = *(code **)(param_1 + 0x150);
LAB_0001da1c:
                iVar7 = (*pcVar6)(param_1,param_2);
                if (iVar7 == 0) goto switchD_0001db44_default;
                param_2 = param_2 + 4;
                goto LAB_0001db24;
              case 8:
                goto switchD_0001db44_default;
              case 9:
                goto switchD_0001db44_default;
              case 10:
                goto switchD_0001db44_default;
              case 0xb:
                goto switchD_0001db44_default;
              case 0xc:
                goto switchD_0001db44_default;
              case 0xd:
                goto switchD_0001db44_default;
              case 0xe:
                goto switchD_0001db44_default;
              case 0xf:
                goto switchD_0001db44_default;
              case 0x10:
                goto switchD_0001db44_default;
              case 0x11:
                goto switchD_0001db44_default;
              case 0x12:
                *param_4 = param_2 + 1;
                return 9;
              case 0x13:
                goto switchD_0001db44_default;
              case 0x14:
                goto switchD_0001db44_default;
              case 0x15:
                goto switchD_0001db44_default;
              case 0x16:
                break;
              case 0x17:
                goto switchD_0001db44_default;
              case 0x18:
                break;
              case 0x19:
                break;
              case 0x1a:
                break;
              case 0x1b:
                break;
              case 0x1c:
                goto switchD_0001db44_default;
              case 0x1d:
              default:
                goto switchD_0001db44_default;
              }
LAB_0001db20:
              param_2 = param_2 + 1;
            } while( true );
          }
        }
      }
    }
    else {
      if (bVar1 == 0x18) goto LAB_0001db20;
      if ((bVar1 != 0x1d) && (bVar1 == 0x16)) goto LAB_0001db20;
    }
switchD_0001db44_default:
    *param_4 = param_2;
  }
  return 0;
LAB_0001dbb0:
  if (iVar7 == 1) {
    return 0xfffffffe;
  }
  iVar7 = (**(code **)(param_1 + 0x160))(param_1,param_2);
  if (iVar7 != 0) goto switchD_0001db44_default;
  pcVar6 = *(code **)(param_1 + 0x148);
  goto LAB_0001d9ac;
}



/* ===== FUN_0001dc38 @ 0001dc38 size=20 ===== */

undefined4 FUN_0001dc38(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_3 - (int)param_2;
  if (iVar2 < 1) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)(param_1 + (uint)*param_2 + 0x48)) {
  case 5:
    if (iVar2 == 1) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x160))();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(param_1 + 0x154);
LAB_0001de4c:
      iVar2 = (*pcVar1)(param_1,param_2);
      if (iVar2 != 0) {
        param_2 = param_2 + 2;
LAB_0001de14:
        do {
          iVar2 = param_3 - (int)param_2;
          if (iVar2 < 1) {
            return 0xffffffff;
          }
          switch(*(undefined1 *)(param_1 + (uint)*param_2 + 0x48)) {
          case 5:
            goto LAB_0001de28;
          case 6:
            if (iVar2 < 3) {
              return 0xfffffffe;
            }
            iVar2 = (**(code **)(param_1 + 0x164))(param_1,param_2);
            if (iVar2 != 0) goto switchD_0001dc74_default;
            pcVar1 = *(code **)(param_1 + 0x14c);
LAB_0001dd30:
            iVar2 = (*pcVar1)(param_1,param_2);
            if (iVar2 == 0) goto switchD_0001dc74_default;
            param_2 = param_2 + 3;
            goto LAB_0001de14;
          case 7:
            if (iVar2 < 4) {
              return 0xfffffffe;
            }
            iVar2 = (**(code **)(param_1 + 0x168))(param_1,param_2);
            if (iVar2 != 0) goto switchD_0001dc74_default;
            pcVar1 = *(code **)(param_1 + 0x150);
LAB_0001dd68:
            iVar2 = (*pcVar1)(param_1,param_2);
            if (iVar2 == 0) goto switchD_0001dc74_default;
            param_2 = param_2 + 4;
            goto LAB_0001de14;
          case 8:
            goto switchD_0001dc74_default;
          case 9:
            goto switchD_0001dc74_default;
          case 10:
            goto switchD_0001dc74_default;
          case 0xb:
            goto switchD_0001dc74_default;
          case 0xc:
            goto switchD_0001dc74_default;
          case 0xd:
            goto switchD_0001dc74_default;
          case 0xe:
            goto switchD_0001dc74_default;
          case 0xf:
            goto switchD_0001dc74_default;
          case 0x10:
            goto switchD_0001dc74_default;
          case 0x11:
            goto switchD_0001dc74_default;
          case 0x12:
            *param_4 = param_2 + 1;
            return 0x1c;
          case 0x13:
            goto switchD_0001dc74_default;
          case 0x14:
            goto switchD_0001dc74_default;
          case 0x15:
            goto switchD_0001dc74_default;
          case 0x16:
            break;
          case 0x17:
            goto switchD_0001dc74_default;
          case 0x18:
            break;
          case 0x19:
            break;
          case 0x1a:
            break;
          case 0x1b:
            break;
          case 0x1c:
            goto switchD_0001dc74_default;
          case 0x1d:
          default:
            goto switchD_0001dc74_default;
          }
LAB_0001de10:
          param_2 = param_2 + 1;
        } while( true );
      }
      break;
    }
    break;
  case 6:
    if (iVar2 < 3) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x164))();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(param_1 + 0x158);
      goto LAB_0001dd30;
    }
    break;
  case 7:
    if (iVar2 < 4) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x168))();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(param_1 + 0x15c);
      goto LAB_0001dd68;
    }
    break;
  case 8:
    break;
  case 9:
    goto LAB_0001dd84;
  case 10:
    goto LAB_0001dd84;
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
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    goto LAB_0001dd84;
  case 0x16:
    goto LAB_0001de10;
  case 0x17:
    break;
  case 0x18:
    goto LAB_0001de10;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
LAB_0001dd84:
    *param_4 = param_2;
    return 0x16;
  }
switchD_0001dc74_default:
  *param_4 = param_2;
  return 0;
LAB_0001de28:
  if (iVar2 == 1) {
    return 0xfffffffe;
  }
  iVar2 = (**(code **)(param_1 + 0x160))(param_1,param_2);
  if (iVar2 != 0) goto switchD_0001dc74_default;
  pcVar1 = *(code **)(param_1 + 0x148);
  goto LAB_0001de4c;
}



/* ===== FUN_0001dc4c @ 0001dc4c size=636 ===== */

undefined4 FUN_0001dc4c(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  int in_r12;
  
  switch(*(undefined1 *)(param_1 + (uint)*param_2 + 0x48)) {
  case 5:
    if (in_r12 == 1) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x160))();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(param_1 + 0x154);
LAB_0001de4c:
      iVar2 = (*pcVar1)(param_1,param_2);
      if (iVar2 != 0) {
        param_2 = param_2 + 2;
LAB_0001de14:
        do {
          iVar2 = param_3 - (int)param_2;
          if (iVar2 < 1) {
            return 0xffffffff;
          }
          switch(*(undefined1 *)(param_1 + (uint)*param_2 + 0x48)) {
          case 5:
            goto LAB_0001de28;
          case 6:
            if (iVar2 < 3) {
              return 0xfffffffe;
            }
            iVar2 = (**(code **)(param_1 + 0x164))(param_1,param_2);
            if (iVar2 != 0) goto switchD_0001dc74_default;
            pcVar1 = *(code **)(param_1 + 0x14c);
LAB_0001dd30:
            iVar2 = (*pcVar1)(param_1,param_2);
            if (iVar2 == 0) goto switchD_0001dc74_default;
            param_2 = param_2 + 3;
            goto LAB_0001de14;
          case 7:
            if (iVar2 < 4) {
              return 0xfffffffe;
            }
            iVar2 = (**(code **)(param_1 + 0x168))(param_1,param_2);
            if (iVar2 != 0) goto switchD_0001dc74_default;
            pcVar1 = *(code **)(param_1 + 0x150);
LAB_0001dd68:
            iVar2 = (*pcVar1)(param_1,param_2);
            if (iVar2 == 0) goto switchD_0001dc74_default;
            param_2 = param_2 + 4;
            goto LAB_0001de14;
          case 8:
            goto switchD_0001dc74_default;
          case 9:
            goto switchD_0001dc74_default;
          case 10:
            goto switchD_0001dc74_default;
          case 0xb:
            goto switchD_0001dc74_default;
          case 0xc:
            goto switchD_0001dc74_default;
          case 0xd:
            goto switchD_0001dc74_default;
          case 0xe:
            goto switchD_0001dc74_default;
          case 0xf:
            goto switchD_0001dc74_default;
          case 0x10:
            goto switchD_0001dc74_default;
          case 0x11:
            goto switchD_0001dc74_default;
          case 0x12:
            *param_4 = param_2 + 1;
            return 0x1c;
          case 0x13:
            goto switchD_0001dc74_default;
          case 0x14:
            goto switchD_0001dc74_default;
          case 0x15:
            goto switchD_0001dc74_default;
          case 0x16:
            break;
          case 0x17:
            goto switchD_0001dc74_default;
          case 0x18:
            break;
          case 0x19:
            break;
          case 0x1a:
            break;
          case 0x1b:
            break;
          case 0x1c:
            goto switchD_0001dc74_default;
          case 0x1d:
          default:
            goto switchD_0001dc74_default;
          }
LAB_0001de10:
          param_2 = param_2 + 1;
        } while( true );
      }
      break;
    }
    break;
  case 6:
    if (in_r12 < 3) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x164))();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(param_1 + 0x158);
      goto LAB_0001dd30;
    }
    break;
  case 7:
    if (in_r12 < 4) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x168))();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(param_1 + 0x15c);
      goto LAB_0001dd68;
    }
    break;
  case 8:
    break;
  case 9:
    goto LAB_0001dd84;
  case 10:
    goto LAB_0001dd84;
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
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    goto LAB_0001dd84;
  case 0x16:
    goto LAB_0001de10;
  case 0x17:
    break;
  case 0x18:
    goto LAB_0001de10;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
LAB_0001dd84:
    *param_4 = param_2;
    return 0x16;
  }
switchD_0001dc74_default:
  *param_4 = param_2;
  return 0;
LAB_0001de28:
  if (iVar2 == 1) {
    return 0xfffffffe;
  }
  iVar2 = (**(code **)(param_1 + 0x160))(param_1,param_2);
  if (iVar2 != 0) goto switchD_0001dc74_default;
  pcVar1 = *(code **)(param_1 + 0x148);
  goto LAB_0001de4c;
}



/* ===== FUN_0001dec8 @ 0001dec8 size=356 ===== */

undefined4 FUN_0001dec8(uint param_1,int param_2,byte *param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
LAB_0001dee0:
  pbVar4 = param_3;
  iVar3 = param_4 - (int)pbVar4;
  if (iVar3 < 1) {
    return 0xffffffff;
  }
  uVar2 = (uint)*(byte *)(param_2 + (uint)*pbVar4 + 0x48);
  switch(uVar2) {
  case 0:
    goto LAB_0001df64;
  case 1:
    goto LAB_0001df64;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    if (iVar3 == 1) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_2 + 0x160))(param_2,pbVar4);
    if (iVar3 != 0) goto LAB_0001df64;
    param_3 = pbVar4 + 2;
    goto LAB_0001dee0;
  case 6:
    if (iVar3 < 3) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_2 + 0x164))(param_2,pbVar4);
    if (iVar3 != 0) goto LAB_0001df64;
    param_3 = pbVar4 + 3;
    goto LAB_0001dee0;
  case 7:
    if (iVar3 < 4) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_2 + 0x168))(param_2,pbVar4);
    if (iVar3 != 0) goto LAB_0001df64;
    param_3 = pbVar4 + 4;
    goto LAB_0001dee0;
  case 8:
LAB_0001df64:
    *param_5 = pbVar4;
    return 0;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    goto LAB_0001dfcc;
  case 0xd:
LAB_0001dfcc:
    param_3 = pbVar4 + 1;
    if (uVar2 == param_1) {
      if (param_4 - (int)param_3 < 1) {
        return 0xffffffe5;
      }
      *param_5 = param_3;
      uVar2 = (uint)*(byte *)(param_2 + (uint)pbVar4[1] + 0x48);
      if (0x1e < uVar2) {
        return 0;
      }
      if ((DAT_0001e02c & 1 << uVar2) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x1b;
      }
      return uVar1;
    }
    goto LAB_0001dee0;
  }
  param_3 = pbVar4 + 1;
  goto LAB_0001dee0;
}



/* ===== FUN_0001e030 @ 0001e030 size=408 ===== */

undefined4 FUN_0001e030(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
LAB_0001e048:
  pbVar2 = param_2;
  iVar1 = param_3 - (int)pbVar2;
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)(param_1 + (uint)*pbVar2 + 0x48)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    if (param_3 - (int)(pbVar2 + 1) < 1) {
      return 0xffffffff;
    }
    param_2 = pbVar2 + 1;
    if (pbVar2[1] == 0x21) {
      if (param_3 - (int)(pbVar2 + 2) < 1) {
        return 0xffffffff;
      }
      param_2 = pbVar2 + 2;
      if (pbVar2[2] == 0x5b) {
        iVar3 = iVar3 + 1;
        goto LAB_0001e0f0;
      }
    }
    goto LAB_0001e048;
  case 3:
  default:
    param_2 = pbVar2 + 1;
    goto LAB_0001e048;
  case 4:
    if (param_3 - (int)(pbVar2 + 1) < 1) {
      return 0xffffffff;
    }
    param_2 = pbVar2 + 1;
    if (pbVar2[1] == 0x5d) {
      if (param_3 - (int)(pbVar2 + 2) < 1) {
        return 0xffffffff;
      }
      param_2 = pbVar2 + 2;
      if (pbVar2[2] == 0x3e) {
        if (iVar3 == 0) {
          *param_4 = pbVar2 + 3;
          return 0x2a;
        }
        iVar3 = iVar3 + -1;
        param_2 = pbVar2 + 3;
      }
    }
    goto LAB_0001e048;
  case 5:
    if (iVar1 == 1) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x160))(param_1,pbVar2);
    if (iVar1 == 0) {
      param_2 = pbVar2 + 2;
      goto LAB_0001e048;
    }
    break;
  case 6:
    if (iVar1 < 3) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x164))(param_1,pbVar2);
    if (iVar1 != 0) break;
LAB_0001e0f0:
    param_2 = pbVar2 + 3;
    goto LAB_0001e048;
  case 7:
    if (iVar1 < 4) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x168))(param_1,pbVar2);
    if (iVar1 != 0) break;
    param_2 = pbVar2 + 4;
    goto LAB_0001e048;
  case 8:
  }
  *param_4 = pbVar2;
  return 0;
}



/* ===== FUN_0001e1c8 @ 0001e1c8 size=148 ===== */

undefined4 FUN_0001e1c8(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  pbVar2 = (byte *)(param_2 + 1);
LAB_0001e1dc:
  do {
    do {
      while( true ) {
        pbVar1 = pbVar2;
        if ((param_3 + -1) - (int)pbVar1 < 1) {
          return 1;
        }
        pbVar2 = pbVar1 + 1;
        uVar3 = (uint)*pbVar1;
        uVar4 = *(byte *)(param_1 + uVar3 + 0x48) - 9 & 0xff;
        if (uVar4 < 0x1b) break;
LAB_0001e248:
        if ((uVar3 != 0x24) && (uVar3 != 0x40)) goto LAB_0001e234;
      }
      uVar4 = 1 << uVar4;
    } while ((uVar4 & DAT_0001e25c) != 0);
    if ((uVar4 & 0x22000) != 0) {
      if ((*pbVar1 & 0x80) != 0) goto LAB_0001e248;
      goto LAB_0001e1dc;
    }
    if ((uVar4 & 0x1000) == 0) goto LAB_0001e248;
    if (uVar3 == 9) {
LAB_0001e234:
      *param_4 = pbVar1;
      return 0;
    }
  } while( true );
}



/* ===== FUN_0001e260 @ 0001e260 size=608 ===== */

void FUN_0001e260(int param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  
  iVar4 = 1;
  cVar5 = '\0';
  iVar1 = 0;
switchD_0001e294_default:
  pbVar3 = param_2;
  param_2 = pbVar3 + 1;
  iVar2 = iVar1;
  switch(*(undefined1 *)(param_1 + (uint)*param_2 + 0x48)) {
  case 3:
    if (iVar1 < param_3) goto LAB_0001e40c;
    goto switchD_0001e294_default;
  case 4:
    goto switchD_0001e294_default;
  case 5:
    if (iVar4 == 0) {
      if (iVar1 < param_3) {
        *(byte **)(param_4 + iVar1 * 0x10) = param_2;
        *(undefined1 *)(param_4 + iVar1 * 0x10 + 0xc) = 1;
      }
      iVar4 = 1;
    }
    param_2 = pbVar3 + 2;
    goto switchD_0001e294_default;
  case 6:
    if (iVar4 == 0) {
      if (iVar1 < param_3) {
        *(byte **)(param_4 + iVar1 * 0x10) = param_2;
        *(undefined1 *)(param_4 + iVar1 * 0x10 + 0xc) = 1;
      }
      iVar4 = 1;
    }
    param_2 = pbVar3 + 3;
    goto switchD_0001e294_default;
  case 7:
    if (iVar4 == 0) {
      if (iVar1 < param_3) {
        *(byte **)(param_4 + iVar1 * 0x10) = param_2;
        *(undefined1 *)(param_4 + iVar1 * 0x10 + 0xc) = 1;
      }
      iVar4 = 1;
    }
    param_2 = pbVar3 + 4;
    goto switchD_0001e294_default;
  case 8:
    goto switchD_0001e294_default;
  case 9:
    goto LAB_0001e48c;
  case 10:
LAB_0001e48c:
    if (iVar4 == 1) {
LAB_0001e3d4:
      iVar4 = 0;
      iVar1 = iVar2;
    }
    else if (iVar1 < param_3 && iVar4 == 2) {
LAB_0001e40c:
      *(undefined1 *)(param_4 + iVar1 * 0x10 + 0xc) = 0;
    }
    goto switchD_0001e294_default;
  case 0xb:
    goto LAB_0001e4b4;
  case 0xc:
    if (iVar4 == 2) {
      bVar6 = cVar5 == '\f';
      goto LAB_0001e3c0;
    }
    if (iVar1 < param_3) {
      *(byte **)(param_4 + iVar1 * 0x10 + 4) = pbVar3 + 2;
    }
    cVar5 = '\f';
LAB_0001e3b4:
    iVar4 = 2;
    goto switchD_0001e294_default;
  case 0xd:
    if (iVar4 != 2) {
      if (iVar1 < param_3) {
        *(byte **)(param_4 + iVar1 * 0x10 + 4) = pbVar3 + 2;
      }
      cVar5 = '\r';
      goto LAB_0001e3b4;
    }
    bVar6 = cVar5 == '\r';
LAB_0001e3c0:
    if (bVar6) {
      iVar2 = iVar1 + 1;
      if (iVar1 < param_3) {
        *(byte **)(param_4 + iVar1 * 0x10 + 8) = param_2;
        iVar2 = iVar1 + 1;
      }
      goto LAB_0001e3d4;
    }
    goto switchD_0001e294_default;
  case 0xe:
    goto switchD_0001e294_default;
  case 0xf:
    goto switchD_0001e294_default;
  case 0x10:
    goto switchD_0001e294_default;
  case 0x11:
LAB_0001e4b4:
    if (iVar4 != 2) {
      return;
    }
    goto switchD_0001e294_default;
  case 0x12:
    goto switchD_0001e294_default;
  case 0x13:
    goto switchD_0001e294_default;
  case 0x14:
    goto switchD_0001e294_default;
  case 0x15:
    if (iVar4 == 1) goto LAB_0001e3d4;
    if (iVar1 < param_3 && iVar4 == 2) {
      iVar4 = param_4 + iVar1 * 0x10;
      if ((*(char *)(iVar4 + 0xc) != '\0') &&
         (((*(byte **)(iVar4 + 4) == param_2 || *param_2 != 0x20 || (pbVar3[2] == 0x20)) ||
          (*(char *)(param_1 + (uint)pbVar3[2] + 0x48) == cVar5)))) {
        *(undefined1 *)(iVar4 + 0xc) = 0;
      }
      goto LAB_0001e3b4;
    }
    goto switchD_0001e294_default;
  case 0x16:
    break;
  case 0x17:
    goto switchD_0001e294_default;
  case 0x18:
    break;
  case 0x19:
    goto switchD_0001e294_default;
  case 0x1a:
    goto switchD_0001e294_default;
  case 0x1b:
    goto switchD_0001e294_default;
  case 0x1c:
    goto switchD_0001e294_default;
  case 0x1d:
    break;
  default:
    goto switchD_0001e294_default;
  }
  if (iVar4 == 0) {
    if (iVar1 < param_3) {
      *(byte **)(param_4 + iVar1 * 0x10) = param_2;
      *(undefined1 *)(param_4 + iVar1 * 0x10 + 0xc) = 1;
    }
    iVar4 = 1;
  }
  goto switchD_0001e294_default;
}



/* ===== FUN_0001e69c @ 0001e69c size=324 ===== */

undefined4
FUN_0001e69c(int param_1,undefined4 *param_2,byte *param_3,undefined4 *param_4,ushort *param_5)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort *puVar5;
  byte *pbVar6;
  
  puVar5 = (ushort *)*param_4;
  pbVar6 = (byte *)*param_2;
LAB_0001e6ac:
  do {
    if (param_3 <= pbVar6 || param_5 <= puVar5) {
      if (pbVar6 < param_3) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0;
      }
LAB_0001e6c4:
      *param_2 = pbVar6;
      *param_4 = puVar5;
      return uVar3;
    }
    bVar1 = *pbVar6;
    cVar2 = *(char *)(param_1 + (uint)bVar1 + 0x48);
    if (cVar2 == '\x06') {
      if ((int)param_3 - (int)pbVar6 < 3) {
LAB_0001e7d8:
        uVar3 = 1;
        goto LAB_0001e6c4;
      }
      *puVar5 = pbVar6[2] & 0x3f | (ushort)bVar1 << 0xc | (pbVar6[1] & 0x3f) << 6;
      puVar5 = puVar5 + 1;
      pbVar6 = pbVar6 + 3;
      goto LAB_0001e6ac;
    }
    if (cVar2 == '\a') {
      if ((int)param_5 - (int)puVar5 < 3) {
        uVar3 = 2;
        goto LAB_0001e6c4;
      }
      if ((int)param_3 - (int)pbVar6 < 4) goto LAB_0001e7d8;
      uVar4 = (pbVar6[1] & 0x3f) << 0xc | (bVar1 & 7) << 0x12 | pbVar6[3] & 0x3f |
              (pbVar6[2] & 0x3f) << 6;
      *puVar5 = (ushort)(uVar4 - 0x10000 >> 10) | 0xd800;
      puVar5[1] = (ushort)((uVar4 << 0x16) >> 0x16) | 0xdc00;
      puVar5 = puVar5 + 2;
      pbVar6 = pbVar6 + 4;
    }
    else if (cVar2 == '\x05') {
      if ((int)param_3 - (int)pbVar6 < 2) goto LAB_0001e7d8;
      *puVar5 = pbVar6[1] & 0x3f | (bVar1 & 0x1f) << 6;
      puVar5 = puVar5 + 1;
      pbVar6 = pbVar6 + 2;
    }
    else {
      *puVar5 = (ushort)bVar1;
      puVar5 = puVar5 + 1;
      pbVar6 = pbVar6 + 1;
    }
  } while( true );
}



/* ===== FUN_0001e7e0 @ 0001e7e0 size=172 ===== */

undefined4
FUN_0001e7e0(undefined4 param_1,int *param_2,byte *param_3,undefined4 *param_4,byte *param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  while( true ) {
    while( true ) {
      pbVar2 = (byte *)*param_2;
      if (pbVar2 == param_3) {
        return 0;
      }
      bVar1 = *pbVar2;
      pbVar3 = (byte *)*param_4;
      if (-1 < (char)bVar1) break;
      if ((int)param_5 - (int)pbVar3 < 2) {
        return 2;
      }
      *param_4 = pbVar3 + 1;
      *pbVar3 = bVar1 >> 6 | 0xc0;
      pbVar2 = (byte *)*param_4;
      *param_4 = pbVar2 + 1;
      *pbVar2 = bVar1 & 0x3f | 0x80;
      *param_2 = *param_2 + 1;
    }
    if (param_5 == pbVar3) break;
    *param_2 = (int)(pbVar2 + 1);
    pbVar3 = (byte *)*param_4;
    *param_4 = pbVar3 + 1;
    *pbVar3 = *pbVar2;
  }
  return 2;
}



/* ===== FUN_0001e88c @ 0001e88c size=84 ===== */

undefined4
FUN_0001e88c(undefined4 param_1,undefined4 *param_2,byte *param_3,uint *param_4,uint param_5)

{
  byte bVar1;
  byte *pbVar2;
  ushort *puVar3;
  
  while( true ) {
    pbVar2 = (byte *)*param_2;
    if (param_3 <= pbVar2) {
      return 0;
    }
    if (param_5 <= *param_4) break;
    *param_2 = pbVar2 + 1;
    bVar1 = *pbVar2;
    puVar3 = (ushort *)*param_4;
    *param_4 = (uint)(puVar3 + 1);
    *puVar3 = (ushort)bVar1;
  }
  if (*param_4 != param_5) {
    return 0;
  }
  return 2;
}



/* ===== FUN_0001e8e0 @ 0001e8e0 size=84 ===== */

undefined4
FUN_0001e8e0(undefined4 param_1,undefined4 *param_2,undefined1 *param_3,uint *param_4,uint param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  while( true ) {
    puVar1 = (undefined1 *)*param_2;
    if (param_3 <= puVar1) {
      return 0;
    }
    if (param_5 <= *param_4) break;
    *param_2 = puVar1 + 1;
    puVar2 = (undefined1 *)*param_4;
    *param_4 = (uint)(puVar2 + 1);
    *puVar2 = *puVar1;
  }
  if (*param_4 != param_5) {
    return 0;
  }
  return 2;
}



/* ===== FUN_0001e934 @ 0001e934 size=76 ===== */

undefined4 FUN_0001e934(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (0xdf < param_1) {
    if (param_1 != 0xff) {
      return 0x1d;
    }
    if (param_2 - 0xfeU < 2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x1d;
    }
    return uVar1;
  }
  if (0xdb < param_1) {
    return 8;
  }
  if (param_1 < 0xd8) {
    uVar1 = 0x1d;
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}



/* ===== FUN_0001e980 @ 0001e980 size=464 ===== */

undefined4
FUN_0001e980(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar7 = (byte *)*param_2;
  pbVar5 = pbVar7 + (param_3 - (int)pbVar7 & 0xfffffffe);
  do {
    if (pbVar5 <= pbVar7) {
      *param_2 = pbVar7;
      return 0;
    }
    bVar1 = pbVar7[1];
    uVar4 = (uint)bVar1;
    bVar2 = *pbVar7;
    pbVar6 = (byte *)*param_4;
    pbVar8 = pbVar7;
    if (uVar4 < 8) {
      if ((uVar4 == 0) && ((bVar2 & 0x80) == 0)) {
        if (pbVar6 == param_5) goto LAB_0001ea78;
        *param_4 = pbVar6 + 1;
        *pbVar6 = bVar2;
      }
      else {
        if ((int)param_5 - (int)pbVar6 < 2) {
LAB_0001ea78:
          *param_2 = pbVar7;
          return 2;
        }
        *param_4 = pbVar6 + 1;
        *pbVar6 = bVar1 << 2 | bVar2 >> 6 | 0xc0;
LAB_0001e9fc:
        pbVar7 = (byte *)*param_4;
        *param_4 = pbVar7 + 1;
        *pbVar7 = bVar2 & 0x3f | 0x80;
      }
    }
    else {
      if (3 < (uVar4 + 0x28 & 0xff)) {
        if ((int)param_5 - (int)pbVar6 < 3) goto LAB_0001ea78;
        *param_4 = pbVar6 + 1;
        *pbVar6 = bVar1 >> 4 | 0xe0;
        pbVar7 = (byte *)*param_4;
        *param_4 = pbVar7 + 1;
        *pbVar7 = (bVar1 & 0xf) << 2 | bVar2 >> 6 | 0x80;
        goto LAB_0001e9fc;
      }
      if ((int)param_5 - (int)pbVar6 < 4) goto LAB_0001ea78;
      if ((int)pbVar5 - (int)pbVar7 < 4) {
        *param_2 = pbVar7;
        return 1;
      }
      pbVar8 = pbVar7 + 2;
      uVar4 = ((uVar4 & 3) << 2 | (uint)(bVar2 >> 6)) + 1;
      *param_4 = pbVar6 + 1;
      *pbVar6 = (byte)(uVar4 >> 2) | 0xf0;
      pbVar6 = (byte *)*param_4;
      *param_4 = pbVar6 + 1;
      *pbVar6 = (byte)(((uint)bVar2 << 0x1a) >> 0x1c) | (char)uVar4 * '\x10' & 0x30U | 0x80;
      bVar1 = pbVar7[3];
      bVar3 = *pbVar8;
      pbVar7 = (byte *)*param_4;
      *param_4 = pbVar7 + 1;
      *pbVar7 = (bVar1 & 3) << 2 | (bVar2 & 3) << 4 | bVar3 >> 6 | 0x80;
      pbVar7 = (byte *)*param_4;
      *param_4 = pbVar7 + 1;
      *pbVar7 = bVar3 & 0x3f | 0x80;
    }
    pbVar7 = pbVar8 + 2;
  } while( true );
}



/* ===== FUN_0001eb50 @ 0001eb50 size=144 ===== */

undefined4
FUN_0001eb50(undefined4 param_1,int *param_2,int param_3,int *param_4,undefined2 *param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  uVar3 = param_3 - *param_2 & 0xfffffffe;
  puVar5 = (undefined2 *)(*param_2 + uVar3);
  if (((int)((int)param_5 - *param_4 & 0xfffffffeU) < (int)uVar3) &&
     ((*(byte *)((int)puVar5 + -1) & 0xf8) == 0xd8)) {
    puVar5 = puVar5 + -1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  while( true ) {
    if (puVar5 <= (undefined2 *)*param_2) {
      return uVar2;
    }
    puVar4 = (undefined2 *)*param_4;
    if (param_5 <= puVar4) break;
    uVar1 = *(undefined2 *)*param_2;
    *param_4 = (int)(puVar4 + 1);
    *puVar4 = uVar1;
    *param_2 = *param_2 + 2;
  }
  if (puVar4 == param_5) {
    uVar2 = 2;
  }
  return uVar2;
}



/* ===== FUN_0001ebe0 @ 0001ebe0 size=464 ===== */

undefined4
FUN_0001ebe0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar7 = (byte *)*param_2;
  pbVar5 = pbVar7 + (param_3 - (int)pbVar7 & 0xfffffffe);
  do {
    if (pbVar5 <= pbVar7) {
      *param_2 = pbVar7;
      return 0;
    }
    bVar1 = *pbVar7;
    uVar4 = (uint)bVar1;
    bVar2 = pbVar7[1];
    pbVar6 = (byte *)*param_4;
    pbVar8 = pbVar7;
    if (uVar4 < 8) {
      if ((uVar4 == 0) && ((bVar2 & 0x80) == 0)) {
        if (pbVar6 == param_5) goto LAB_0001ecd8;
        *param_4 = pbVar6 + 1;
        *pbVar6 = bVar2;
      }
      else {
        if ((int)param_5 - (int)pbVar6 < 2) {
LAB_0001ecd8:
          *param_2 = pbVar7;
          return 2;
        }
        *param_4 = pbVar6 + 1;
        *pbVar6 = bVar1 << 2 | bVar2 >> 6 | 0xc0;
LAB_0001ec5c:
        pbVar7 = (byte *)*param_4;
        *param_4 = pbVar7 + 1;
        *pbVar7 = bVar2 & 0x3f | 0x80;
      }
    }
    else {
      if (3 < (uVar4 + 0x28 & 0xff)) {
        if ((int)param_5 - (int)pbVar6 < 3) goto LAB_0001ecd8;
        *param_4 = pbVar6 + 1;
        *pbVar6 = bVar1 >> 4 | 0xe0;
        pbVar7 = (byte *)*param_4;
        *param_4 = pbVar7 + 1;
        *pbVar7 = (bVar1 & 0xf) << 2 | bVar2 >> 6 | 0x80;
        goto LAB_0001ec5c;
      }
      if ((int)param_5 - (int)pbVar6 < 4) goto LAB_0001ecd8;
      if ((int)pbVar5 - (int)pbVar7 < 4) {
        *param_2 = pbVar7;
        return 1;
      }
      pbVar8 = pbVar7 + 2;
      uVar4 = ((uVar4 & 3) << 2 | (uint)(bVar2 >> 6)) + 1;
      *param_4 = pbVar6 + 1;
      *pbVar6 = (byte)(uVar4 >> 2) | 0xf0;
      pbVar6 = (byte *)*param_4;
      *param_4 = pbVar6 + 1;
      *pbVar6 = (byte)(((uint)bVar2 << 0x1a) >> 0x1c) | (char)uVar4 * '\x10' & 0x30U | 0x80;
      bVar1 = *pbVar8;
      bVar3 = pbVar7[3];
      pbVar7 = (byte *)*param_4;
      *param_4 = pbVar7 + 1;
      *pbVar7 = (bVar1 & 3) << 2 | (bVar2 & 3) << 4 | bVar3 >> 6 | 0x80;
      pbVar7 = (byte *)*param_4;
      *param_4 = pbVar7 + 1;
      *pbVar7 = bVar3 & 0x3f | 0x80;
    }
    pbVar7 = pbVar8 + 2;
  } while( true );
}



/* ===== FUN_0001edb0 @ 0001edb0 size=144 ===== */

undefined4
FUN_0001edb0(undefined4 param_1,int *param_2,int param_3,int *param_4,undefined2 *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  uVar4 = param_3 - *param_2 & 0xfffffffe;
  puVar6 = (undefined1 *)(*param_2 + uVar4);
  if (((int)((int)param_5 - *param_4 & 0xfffffffeU) < (int)uVar4) && ((puVar6[-2] & 0xf8) == 0xd8))
  {
    puVar6 = puVar6 + -2;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  while( true ) {
    puVar7 = (undefined1 *)*param_2;
    if (puVar6 <= puVar7) {
      return uVar3;
    }
    puVar5 = (undefined2 *)*param_4;
    if (param_5 <= puVar5) break;
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    *param_4 = (int)(puVar5 + 1);
    *puVar5 = CONCAT11(uVar1,uVar2);
    *param_2 = *param_2 + 2;
  }
  if (puVar5 == param_5) {
    uVar3 = 2;
  }
  return uVar3;
}



/* ===== FUN_0001f06c @ 0001f06c size=748 ===== */

undefined4 FUN_0001f06c(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 *extraout_r3_01;
  undefined4 *extraout_r3_02;
  undefined4 *extraout_r3_03;
  undefined4 *extraout_r3_04;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_3 - (int)param_2;
  if (iVar7 < 2) {
    return 0xffffffff;
  }
  uVar5 = (uint)param_2[1];
  bVar1 = *param_2;
  uVar3 = (uint)bVar1;
  if (uVar5 == 0) {
    uVar2 = (uint)*(byte *)(param_1 + uVar3 + 0x48);
  }
  else {
    uVar2 = FUN_0001e934(uVar5,uVar3);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (uVar2 != 0x13) {
    if ((int)uVar2 < 0x14) {
      if (uVar2 == 6) {
LAB_0001f1c8:
        if (iVar7 == 2) {
          return 0xfffffffe;
        }
      }
      else if (uVar2 == 7) {
LAB_0001f1d8:
        if (iVar7 < 4) {
          return 0xfffffffe;
        }
      }
      goto switchD_0001f128_default;
    }
    if (uVar2 != 0x18) {
      if (uVar2 == 0x1d) {
        if ((*(uint *)(DAT_0001f35c + 0x1f1a8 +
                      ((uint)(bVar1 >> 5) +
                      (uint)*(byte *)(DAT_0001f35c + 0x1f1a8 + uVar5 + 0x600) * 8) * 4) >>
             (uVar3 & 0x1f) & 1) != 0) goto LAB_0001f0e4;
      }
      else if (uVar2 == 0x16) goto LAB_0001f0e4;
switchD_0001f128_default:
      *param_4 = param_2;
      return 0;
    }
LAB_0001f0e4:
    iVar6 = DAT_0001f358 + 0x1f0f4;
    pbVar4 = param_2;
    do {
      param_2 = pbVar4 + 2;
      iVar7 = param_3 - (int)param_2;
      if (iVar7 < 2) {
        return 0xffffffff;
      }
      uVar5 = (uint)pbVar4[3];
      bVar1 = *param_2;
      uVar3 = (uint)bVar1;
      if (uVar5 == 0) {
        uVar2 = (uint)*(byte *)(param_1 + uVar3 + 0x48);
      }
      else {
        uVar2 = FUN_0001e934(uVar5,uVar3);
        param_3 = extraout_r2_00;
        param_4 = extraout_r3_00;
      }
      switch(uVar2) {
      case 5:
        goto switchD_0001f128_default;
      case 6:
        goto LAB_0001f1c8;
      case 7:
        goto LAB_0001f1d8;
      case 8:
        goto switchD_0001f128_default;
      case 9:
        goto switchD_0001f128_default;
      case 10:
        goto switchD_0001f128_default;
      case 0xb:
        goto switchD_0001f128_default;
      case 0xc:
        goto switchD_0001f128_default;
      case 0xd:
        goto switchD_0001f128_default;
      case 0xe:
        goto switchD_0001f128_default;
      case 0xf:
        goto switchD_0001f128_default;
      case 0x10:
        goto switchD_0001f128_default;
      case 0x11:
        goto switchD_0001f128_default;
      case 0x12:
        *param_4 = pbVar4 + 4;
        return 9;
      case 0x13:
        goto switchD_0001f128_default;
      case 0x14:
        goto switchD_0001f128_default;
      case 0x15:
        goto switchD_0001f128_default;
      case 0x16:
        pbVar4 = param_2;
        break;
      case 0x17:
        goto switchD_0001f128_default;
      case 0x18:
        pbVar4 = param_2;
        break;
      case 0x19:
        pbVar4 = param_2;
        break;
      case 0x1a:
        pbVar4 = param_2;
        break;
      case 0x1b:
        pbVar4 = param_2;
        break;
      case 0x1c:
        goto switchD_0001f128_default;
      case 0x1d:
        pbVar4 = param_2;
        if ((*(uint *)(iVar6 + ((uint)(bVar1 >> 5) + (uint)*(byte *)(iVar6 + uVar5 + 0x500) * 8) * 4
                      ) >> (uVar3 & 0x1f) & 1) == 0) {
          *param_4 = param_2;
          return 0;
        }
        break;
      default:
        goto switchD_0001f128_default;
      }
    } while( true );
  }
  pbVar4 = param_2 + 2;
  if (param_3 - (int)pbVar4 < 2) {
    return 0xffffffff;
  }
  if (param_2[3] == 0) {
    if (param_2[2] == 0x78) {
      pbVar4 = param_2 + 4;
      if (param_3 - (int)pbVar4 < 2) {
        return 0xffffffff;
      }
      if (param_2[5] == 0) {
        uVar3 = (uint)*(byte *)(param_1 + (uint)param_2[4] + 0x48);
      }
      else {
        uVar3 = FUN_0001e934();
        param_3 = extraout_r2_01;
        param_4 = extraout_r3_01;
      }
      if (uVar3 - 0x18 < 2) {
        param_2 = param_2 + 6;
        while( true ) {
          if (param_3 - (int)param_2 < 2) {
            return 0xffffffff;
          }
          if (param_2[1] == 0) {
            uVar3 = (uint)*(byte *)(param_1 + (uint)*param_2 + 0x48);
          }
          else {
            uVar3 = FUN_0001e934();
            param_3 = extraout_r2_02;
            param_4 = extraout_r3_02;
          }
          if (uVar3 == 0x12) break;
          if (((int)uVar3 < 0x12) || (1 < uVar3 - 0x18)) goto switchD_0001f128_default;
          param_2 = param_2 + 2;
        }
        goto LAB_0001f2f4;
      }
      goto LAB_0001f24c;
    }
    uVar3 = (uint)*(byte *)(param_1 + (uint)param_2[2] + 0x48);
  }
  else {
    uVar3 = FUN_0001e934();
    param_3 = extraout_r2_03;
    param_4 = extraout_r3_03;
  }
  if (uVar3 == 0x19) {
    param_2 = param_2 + 4;
    while( true ) {
      if (param_3 - (int)param_2 < 2) {
        return 0xffffffff;
      }
      if (param_2[1] == 0) {
        uVar3 = (uint)*(byte *)(param_1 + (uint)*param_2 + 0x48);
      }
      else {
        uVar3 = FUN_0001e934();
        param_3 = extraout_r2_04;
        param_4 = extraout_r3_04;
      }
      if (uVar3 == 0x12) break;
      if (uVar3 != 0x19) goto switchD_0001f128_default;
      param_2 = param_2 + 2;
    }
LAB_0001f2f4:
    *param_4 = param_2 + 2;
    return 10;
  }
LAB_0001f24c:
  *param_4 = pbVar4;
  return 0;
}



/* ===== FUN_0001f360 @ 0001f360 size=540 ===== */

undefined4 FUN_0001f360(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_3 - (int)param_2;
  if (iVar7 < 2) {
    return 0xffffffff;
  }
  uVar5 = (uint)param_2[1];
  bVar1 = *param_2;
  uVar4 = (uint)bVar1;
  if (uVar5 == 0) {
    uVar3 = (uint)*(byte *)(param_1 + uVar4 + 0x48);
  }
  else {
    uVar3 = FUN_0001e934(uVar5,uVar4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  switch(uVar3) {
  case 6:
LAB_0001f46c:
    if (iVar7 == 2) {
      return 0xfffffffe;
    }
    break;
  case 7:
LAB_0001f47c:
    if (iVar7 < 4) {
      return 0xfffffffe;
    }
    break;
  case 8:
    break;
  case 9:
    goto LAB_0001f484;
  case 10:
    goto LAB_0001f484;
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
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    goto LAB_0001f484;
  case 0x16:
    goto LAB_0001f448;
  case 0x17:
    break;
  case 0x18:
LAB_0001f448:
    iVar6 = DAT_0001f580 + 0x1f458;
    pbVar2 = param_2;
    do {
      param_2 = pbVar2 + 2;
      iVar7 = param_3 - (int)param_2;
      if (iVar7 < 2) {
        return 0xffffffff;
      }
      uVar5 = (uint)pbVar2[3];
      bVar1 = *param_2;
      uVar4 = (uint)bVar1;
      if (uVar5 == 0) {
        uVar3 = (uint)*(byte *)(param_1 + uVar4 + 0x48);
      }
      else {
        uVar3 = FUN_0001e934(uVar5,uVar4);
        param_3 = extraout_r2_00;
        param_4 = extraout_r3_00;
      }
      switch(uVar3) {
      case 5:
        goto switchD_0001f3a4_default;
      case 6:
        goto LAB_0001f46c;
      case 7:
        goto LAB_0001f47c;
      case 8:
        goto switchD_0001f3a4_default;
      case 9:
        goto switchD_0001f3a4_default;
      case 10:
        goto switchD_0001f3a4_default;
      case 0xb:
        goto switchD_0001f3a4_default;
      case 0xc:
        goto switchD_0001f3a4_default;
      case 0xd:
        goto switchD_0001f3a4_default;
      case 0xe:
        goto switchD_0001f3a4_default;
      case 0xf:
        goto switchD_0001f3a4_default;
      case 0x10:
        goto switchD_0001f3a4_default;
      case 0x11:
        goto switchD_0001f3a4_default;
      case 0x12:
        *param_4 = pbVar2 + 4;
        return 0x1c;
      case 0x13:
        goto switchD_0001f3a4_default;
      case 0x14:
        goto switchD_0001f3a4_default;
      case 0x15:
        goto switchD_0001f3a4_default;
      case 0x16:
        pbVar2 = param_2;
        break;
      case 0x17:
        goto switchD_0001f3a4_default;
      case 0x18:
        pbVar2 = param_2;
        break;
      case 0x19:
        pbVar2 = param_2;
        break;
      case 0x1a:
        pbVar2 = param_2;
        break;
      case 0x1b:
        pbVar2 = param_2;
        break;
      case 0x1c:
        goto switchD_0001f3a4_default;
      case 0x1d:
        pbVar2 = param_2;
        if ((*(uint *)(iVar6 + ((uint)(bVar1 >> 5) + (uint)*(byte *)(iVar6 + uVar5 + 0x500) * 8) * 4
                      ) >> (uVar4 & 0x1f) & 1) == 0) {
          *param_4 = param_2;
          return 0;
        }
        break;
      default:
        goto switchD_0001f3a4_default;
      }
    } while( true );
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    if ((*(uint *)(DAT_0001f57c + 0x1f424 +
                  ((uint)(bVar1 >> 5) + (uint)*(byte *)(DAT_0001f57c + 0x1f424 + uVar5 + 0x600) * 8)
                  * 4) >> (uVar4 & 0x1f) & 1) != 0) goto LAB_0001f448;
    break;
  case 0x1e:
LAB_0001f484:
    *param_4 = param_2;
    return 0x16;
  }
switchD_0001f3a4_default:
  *param_4 = param_2;
  return 0;
}



/* ===== FUN_0001f584 @ 0001f584 size=292 ===== */

undefined4 FUN_0001f584(uint param_1,int param_2,byte *param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  byte *extraout_r2;
  byte *pbVar3;
  int extraout_r3;
  int iVar4;
  
LAB_0001f594:
  iVar4 = param_4 - (int)param_3;
  if (iVar4 < 2) {
    return 0xffffffff;
  }
  if (param_3[1] == 0) {
    uVar1 = (uint)*(byte *)(param_2 + (uint)*param_3 + 0x48);
    pbVar3 = param_3;
  }
  else {
    uVar1 = FUN_0001e934();
    pbVar3 = extraout_r2;
    param_4 = extraout_r3;
  }
  switch(uVar1) {
  case 0:
    goto LAB_0001f62c;
  case 1:
    goto LAB_0001f62c;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    if (iVar4 == 2) {
      return 0xfffffffe;
    }
    param_3 = pbVar3 + 3;
    goto LAB_0001f594;
  case 7:
    if (iVar4 < 4) {
      return 0xfffffffe;
    }
    param_3 = pbVar3 + 4;
    goto LAB_0001f594;
  case 8:
LAB_0001f62c:
    *param_5 = pbVar3;
    return 0;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    goto LAB_0001f638;
  case 0xd:
LAB_0001f638:
    param_3 = pbVar3 + 2;
    if (uVar1 == param_1) {
      if (param_4 - (int)param_3 < 2) {
        return 0xffffffe5;
      }
      *param_5 = param_3;
      if (pbVar3[3] == 0) {
        uVar1 = (uint)*(byte *)(param_2 + (uint)pbVar3[2] + 0x48);
      }
      else {
        uVar1 = FUN_0001e934();
      }
      if (0x1e < uVar1) {
        return 0;
      }
      if ((DAT_0001f6a8 & 1 << (uVar1 & 0xff)) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x1b;
      }
      return uVar2;
    }
    goto LAB_0001f594;
  }
  param_3 = pbVar3 + 2;
  goto LAB_0001f594;
}



/* ===== FUN_0001f6ac @ 0001f6ac size=392 ===== */

undefined4 FUN_0001f6ac(int param_1,byte *param_2,byte *param_3,undefined4 *param_4)

{
  uint uVar1;
  byte *extraout_r2;
  undefined4 *extraout_r3;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (((int)param_3 - (int)param_2 & 1U) != 0) {
    param_3 = param_2 + ((int)param_3 - (int)param_2 & 0xfffffffe);
  }
LAB_0001f6cc:
  pbVar2 = param_2;
  iVar4 = (int)param_3 - (int)pbVar2;
  if (iVar4 < 2) {
    return 0xffffffff;
  }
  if (pbVar2[1] == 0) {
    uVar1 = (uint)*(byte *)(param_1 + (uint)*pbVar2 + 0x48);
  }
  else {
    uVar1 = FUN_0001e934();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  switch(uVar1) {
  case 0:
    goto LAB_0001f750;
  case 1:
    goto LAB_0001f750;
  case 2:
    param_2 = pbVar2 + 2;
    if ((int)param_3 - (int)param_2 < 2) {
      return 0xffffffff;
    }
    if ((pbVar2[3] == 0) && (pbVar2[2] == 0x21)) {
      param_2 = pbVar2 + 4;
      if ((int)param_3 - (int)param_2 < 2) {
        return 0xffffffff;
      }
      if ((pbVar2[5] == 0) && (pbVar2[4] == 0x5b)) {
        iVar3 = iVar3 + 1;
        param_2 = pbVar2 + 6;
      }
    }
    goto LAB_0001f6cc;
  case 3:
    break;
  case 4:
    param_2 = pbVar2 + 2;
    if ((int)param_3 - (int)param_2 < 2) {
      return 0xffffffff;
    }
    if ((pbVar2[3] == 0) && (pbVar2[2] == 0x5d)) {
      param_2 = pbVar2 + 4;
      if ((int)param_3 - (int)param_2 < 2) {
        return 0xffffffff;
      }
      if ((pbVar2[5] == 0) && (pbVar2[4] == 0x3e)) {
        if (iVar3 == 0) {
          *param_4 = pbVar2 + 6;
          return 0x2a;
        }
        iVar3 = iVar3 + -1;
        param_2 = pbVar2 + 6;
      }
    }
    goto LAB_0001f6cc;
  case 5:
    break;
  case 6:
    if (iVar4 == 2) {
      return 0xfffffffe;
    }
    param_2 = pbVar2 + 3;
    goto LAB_0001f6cc;
  case 7:
    goto LAB_0001f740;
  case 8:
LAB_0001f750:
    *param_4 = pbVar2;
    return 0;
  }
  param_2 = pbVar2 + 2;
  goto LAB_0001f6cc;
LAB_0001f740:
  if (iVar4 < 4) {
    return 0xfffffffe;
  }
  param_2 = pbVar2 + 4;
  goto LAB_0001f6cc;
}



/* ===== FUN_0001f834 @ 0001f834 size=200 ===== */

undefined4 FUN_0001f834(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r2;
  undefined4 *extraout_r3;
  byte *pbVar5;
  uint uVar6;
  
  uVar3 = DAT_0001f8fc;
  param_3 = param_3 + -2;
LAB_0001f84c:
  do {
    pbVar5 = param_2 + 2;
    if (param_3 - (int)pbVar5 < 2) {
      return 1;
    }
    bVar1 = param_2[3];
    bVar2 = *pbVar5;
    uVar6 = (uint)bVar2;
    if (bVar1 == 0) {
      uVar4 = (uint)*(byte *)(param_1 + uVar6 + 0x48);
    }
    else {
      uVar4 = FUN_0001e934(bVar1,uVar6);
      param_3 = extraout_r2;
      param_4 = extraout_r3;
    }
    param_2 = pbVar5;
    if (uVar4 - 9 < 0x1b) {
      uVar4 = 1 << (uVar4 - 9 & 0xff);
      if ((uVar4 & uVar3) != 0) goto LAB_0001f84c;
      if ((uVar4 & 0x22000) == 0) {
        if ((uVar4 & 0x1000) == 0) goto LAB_0001f8f0;
        if ((bVar1 == 0) && (uVar6 == 9)) goto LAB_0001f8bc;
        goto LAB_0001f84c;
      }
      if (bVar1 != 0) goto LAB_0001f8bc;
      if ((bVar2 & 0x80) == 0) goto LAB_0001f84c;
    }
    else {
LAB_0001f8f0:
      if (bVar1 != 0) goto LAB_0001f8bc;
    }
    if ((uVar6 != 0x24) && (uVar6 != 0x40)) {
LAB_0001f8bc:
      *param_4 = pbVar5;
      return 0;
    }
  } while( true );
}



/* ===== FUN_0001f900 @ 0001f900 size=616 ===== */

int FUN_0001f900(int param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r3;
  int extraout_r3_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar6 = 1;
  iVar4 = 0;
  uVar7 = 0;
switchD_0001f950_default:
  pbVar2 = param_2;
  param_2 = pbVar2 + 2;
  bVar1 = pbVar2[3];
  uVar8 = (uint)*param_2;
  if (bVar1 == 0) {
    uVar3 = (uint)*(byte *)(param_1 + uVar8 + 0x48);
  }
  else {
    uVar3 = FUN_0001e934(bVar1,uVar8);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  iVar5 = iVar4;
  switch(uVar3) {
  case 3:
    if (iVar4 < param_3) goto LAB_0001fa8c;
    goto switchD_0001f950_default;
  case 4:
    goto switchD_0001f950_default;
  case 5:
    break;
  case 6:
    if ((iVar6 == 0) && (iVar6 = 1, iVar4 < param_3)) {
      *(byte **)(param_4 + iVar4 * 0x10) = param_2;
      *(undefined1 *)(param_4 + iVar4 * 0x10 + 0xc) = 1;
    }
    param_2 = pbVar2 + 3;
    goto switchD_0001f950_default;
  case 7:
    if ((iVar6 == 0) && (iVar6 = 1, iVar4 < param_3)) {
      *(byte **)(param_4 + iVar4 * 0x10) = param_2;
      *(undefined1 *)(param_4 + iVar4 * 0x10 + 0xc) = 1;
    }
    param_2 = pbVar2 + 4;
    goto switchD_0001f950_default;
  case 8:
    goto switchD_0001f950_default;
  case 9:
    goto LAB_0001fb2c;
  case 10:
LAB_0001fb2c:
    if (iVar6 == 1) {
LAB_0001fa6c:
      iVar6 = 0;
      iVar4 = iVar5;
    }
    else if (iVar4 < param_3 && iVar6 == 2) {
LAB_0001fa8c:
      *(undefined1 *)(param_4 + iVar4 * 0x10 + 0xc) = 0;
    }
    goto switchD_0001f950_default;
  case 0xb:
    goto LAB_0001fb54;
  case 0xc:
    if (iVar6 == 2) {
      bVar9 = uVar7 == 0xc;
      goto LAB_0001fa58;
    }
LAB_0001fa38:
    if (iVar4 < param_3) {
      *(byte **)(param_4 + iVar4 * 0x10 + 4) = pbVar2 + 4;
    }
LAB_0001fa4c:
    iVar6 = 2;
    uVar7 = uVar3;
    goto switchD_0001f950_default;
  case 0xd:
    if (iVar6 != 2) goto LAB_0001fa38;
    bVar9 = uVar7 == 0xd;
LAB_0001fa58:
    if (bVar9) {
      iVar5 = iVar4 + 1;
      if (iVar4 < param_3) {
        *(byte **)(param_4 + iVar4 * 0x10 + 8) = param_2;
        iVar5 = iVar4 + 1;
      }
      goto LAB_0001fa6c;
    }
    goto switchD_0001f950_default;
  case 0xe:
    goto switchD_0001f950_default;
  case 0xf:
    goto switchD_0001f950_default;
  case 0x10:
    goto switchD_0001f950_default;
  case 0x11:
LAB_0001fb54:
    if (iVar6 != 2) {
      return iVar4;
    }
    goto switchD_0001f950_default;
  case 0x12:
    goto switchD_0001f950_default;
  case 0x13:
    goto switchD_0001f950_default;
  case 0x14:
    goto switchD_0001f950_default;
  case 0x15:
    if (iVar6 == 1) goto LAB_0001fa6c;
    if (iVar4 < param_3 && iVar6 == 2) {
      iVar6 = param_4 + iVar4 * 0x10;
      uVar3 = uVar7;
      if (*(char *)(iVar6 + 0xc) != '\0') {
        if ((*(byte **)(iVar6 + 4) != param_2 && bVar1 == 0) && (uVar8 == 0x20)) {
          if (pbVar2[5] == 0) {
            if (pbVar2[4] == 0x20) goto LAB_0001fb14;
            uVar8 = (uint)*(byte *)(param_1 + (uint)pbVar2[4] + 0x48);
          }
          else {
            uVar8 = FUN_0001e934();
            param_3 = extraout_r2_00;
            param_4 = extraout_r3_00;
          }
          if (uVar7 != uVar8) goto LAB_0001fa4c;
        }
LAB_0001fb14:
        *(undefined1 *)(iVar6 + 0xc) = 0;
      }
      goto LAB_0001fa4c;
    }
    goto switchD_0001f950_default;
  case 0x16:
    break;
  case 0x17:
    goto switchD_0001f950_default;
  case 0x18:
    break;
  case 0x19:
    goto switchD_0001f950_default;
  case 0x1a:
    goto switchD_0001f950_default;
  case 0x1b:
    goto switchD_0001f950_default;
  case 0x1c:
    goto switchD_0001f950_default;
  case 0x1d:
    break;
  default:
    goto switchD_0001f950_default;
  }
  if ((iVar6 == 0) && (iVar6 = 1, iVar4 < param_3)) {
    *(byte **)(param_4 + iVar4 * 0x10) = param_2;
    *(undefined1 *)(param_4 + iVar4 * 0x10 + 0xc) = 1;
  }
  goto switchD_0001f950_default;
}



/* ===== FUN_0001fd7c @ 0001fd7c size=128 ===== */

int FUN_0001fd7c(int param_1,byte *param_2)

{
  uint uVar1;
  byte *extraout_r2;
  byte *extraout_r3;
  byte *pbVar2;
  
  pbVar2 = param_2;
  while( true ) {
    while( true ) {
      while( true ) {
        if (pbVar2[1] == 0) {
          uVar1 = (uint)*(byte *)(param_1 + (uint)*pbVar2 + 0x48);
        }
        else {
          uVar1 = FUN_0001e934();
          param_2 = extraout_r2;
          pbVar2 = extraout_r3;
        }
        if (uVar1 != 7) break;
        pbVar2 = pbVar2 + 4;
      }
      if (7 < (int)uVar1) break;
      if (uVar1 == 5) goto LAB_0001fde4;
      if (uVar1 != 6) goto LAB_0001fdc4;
      pbVar2 = pbVar2 + 3;
    }
    if (((int)uVar1 < 0x16) || ((0x1b < (int)uVar1 && (uVar1 != 0x1d)))) break;
LAB_0001fde4:
    pbVar2 = pbVar2 + 2;
  }
LAB_0001fdc4:
  return (int)pbVar2 - (int)param_2;
}



/* ===== FUN_0001fdfc @ 0001fdfc size=76 ===== */

byte * FUN_0001fdfc(int param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_r2;
  byte *extraout_r3;
  
  uVar1 = DAT_0001fe48;
  while( true ) {
    if (param_2[1] == 0) {
      uVar2 = (uint)*(byte *)(param_1 + (uint)*param_2 + 0x48);
    }
    else {
      uVar2 = FUN_0001e934();
      param_1 = extraout_r2;
      param_2 = extraout_r3;
    }
    if ((0x15 < uVar2) || ((uVar1 & 1 << (uVar2 & 0xff)) == 0)) break;
    param_2 = param_2 + 2;
  }
  return param_2;
}



/* ===== FUN_0001fe4c @ 0001fe4c size=244 ===== */

void FUN_0001fe4c(int param_1,byte *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int extraout_r2;
  int extraout_r2_00;
  int *extraout_r3;
  int *extraout_r3_00;
  byte *pbVar2;
  
LAB_0001fe5c:
  if (param_3 - (int)param_2 < 2) {
    return;
  }
  if (param_2[1] == 0) {
    uVar1 = (uint)*(byte *)(param_1 + (uint)*param_2 + 0x48);
  }
  else {
    uVar1 = FUN_0001e934();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  switch(uVar1) {
  case 5:
    break;
  case 6:
    param_2 = param_2 + 3;
    goto LAB_0001feb0;
  case 7:
    param_2 = param_2 + 4;
    goto LAB_0001feb0;
  case 8:
    break;
  case 9:
    pbVar2 = param_2 + 2;
    *param_4 = *param_4 + 1;
    if (1 < param_3 - (int)pbVar2) {
      if (param_2[3] == 0) {
        uVar1 = (uint)*(byte *)(param_1 + (uint)param_2[2] + 0x48);
      }
      else {
        uVar1 = FUN_0001e934();
        param_3 = extraout_r2_00;
        param_4 = extraout_r3_00;
      }
      if (uVar1 == 10) {
        pbVar2 = param_2 + 4;
      }
    }
    param_2 = pbVar2;
    param_4[1] = 0;
    goto LAB_0001fe5c;
  case 10:
    goto LAB_0001fec8;
  }
  param_2 = param_2 + 2;
LAB_0001feb0:
  param_4[1] = param_4[1] + 1;
  goto LAB_0001fe5c;
LAB_0001fec8:
  param_2 = param_2 + 2;
  param_4[1] = 0;
  *param_4 = *param_4 + 1;
  goto LAB_0001fe5c;
}



/* ===== FUN_0002016c @ 0002016c size=748 ===== */

undefined4 FUN_0002016c(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 *extraout_r3_01;
  undefined4 *extraout_r3_02;
  undefined4 *extraout_r3_03;
  undefined4 *extraout_r3_04;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_3 - (int)param_2;
  if (iVar7 < 2) {
    return 0xffffffff;
  }
  uVar5 = (uint)*param_2;
  bVar1 = param_2[1];
  uVar3 = (uint)bVar1;
  if (uVar5 == 0) {
    uVar2 = (uint)*(byte *)(param_1 + uVar3 + 0x48);
  }
  else {
    uVar2 = FUN_0001e934(uVar5,uVar3);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (uVar2 != 0x13) {
    if ((int)uVar2 < 0x14) {
      if (uVar2 == 6) {
LAB_000202c8:
        if (iVar7 == 2) {
          return 0xfffffffe;
        }
      }
      else if (uVar2 == 7) {
LAB_000202d8:
        if (iVar7 < 4) {
          return 0xfffffffe;
        }
      }
      goto switchD_00020228_default;
    }
    if (uVar2 != 0x18) {
      if (uVar2 == 0x1d) {
        if ((*(uint *)(DAT_0002045c + 0x202a8 +
                      ((uint)(bVar1 >> 5) +
                      (uint)*(byte *)(DAT_0002045c + 0x202a8 + uVar5 + 0x600) * 8) * 4) >>
             (uVar3 & 0x1f) & 1) != 0) goto LAB_000201e4;
      }
      else if (uVar2 == 0x16) goto LAB_000201e4;
switchD_00020228_default:
      *param_4 = param_2;
      return 0;
    }
LAB_000201e4:
    iVar6 = DAT_00020458 + 0x201f4;
    pbVar4 = param_2;
    do {
      param_2 = pbVar4 + 2;
      iVar7 = param_3 - (int)param_2;
      if (iVar7 < 2) {
        return 0xffffffff;
      }
      uVar5 = (uint)*param_2;
      bVar1 = pbVar4[3];
      uVar3 = (uint)bVar1;
      if (uVar5 == 0) {
        uVar2 = (uint)*(byte *)(param_1 + uVar3 + 0x48);
      }
      else {
        uVar2 = FUN_0001e934(uVar5,uVar3);
        param_3 = extraout_r2_00;
        param_4 = extraout_r3_00;
      }
      switch(uVar2) {
      case 5:
        goto switchD_00020228_default;
      case 6:
        goto LAB_000202c8;
      case 7:
        goto LAB_000202d8;
      case 8:
        goto switchD_00020228_default;
      case 9:
        goto switchD_00020228_default;
      case 10:
        goto switchD_00020228_default;
      case 0xb:
        goto switchD_00020228_default;
      case 0xc:
        goto switchD_00020228_default;
      case 0xd:
        goto switchD_00020228_default;
      case 0xe:
        goto switchD_00020228_default;
      case 0xf:
        goto switchD_00020228_default;
      case 0x10:
        goto switchD_00020228_default;
      case 0x11:
        goto switchD_00020228_default;
      case 0x12:
        *param_4 = pbVar4 + 4;
        return 9;
      case 0x13:
        goto switchD_00020228_default;
      case 0x14:
        goto switchD_00020228_default;
      case 0x15:
        goto switchD_00020228_default;
      case 0x16:
        pbVar4 = param_2;
        break;
      case 0x17:
        goto switchD_00020228_default;
      case 0x18:
        pbVar4 = param_2;
        break;
      case 0x19:
        pbVar4 = param_2;
        break;
      case 0x1a:
        pbVar4 = param_2;
        break;
      case 0x1b:
        pbVar4 = param_2;
        break;
      case 0x1c:
        goto switchD_00020228_default;
      case 0x1d:
        pbVar4 = param_2;
        if ((*(uint *)(iVar6 + ((uint)(bVar1 >> 5) + (uint)*(byte *)(iVar6 + uVar5 + 0x500) * 8) * 4
                      ) >> (uVar3 & 0x1f) & 1) == 0) {
          *param_4 = param_2;
          return 0;
        }
        break;
      default:
        goto switchD_00020228_default;
      }
    } while( true );
  }
  pbVar4 = param_2 + 2;
  if (param_3 - (int)pbVar4 < 2) {
    return 0xffffffff;
  }
  if (param_2[2] == 0) {
    if (param_2[3] == 0x78) {
      pbVar4 = param_2 + 4;
      if (param_3 - (int)pbVar4 < 2) {
        return 0xffffffff;
      }
      if (param_2[4] == 0) {
        uVar3 = (uint)*(byte *)(param_1 + (uint)param_2[5] + 0x48);
      }
      else {
        uVar3 = FUN_0001e934();
        param_3 = extraout_r2_01;
        param_4 = extraout_r3_01;
      }
      if (uVar3 - 0x18 < 2) {
        param_2 = param_2 + 6;
        while( true ) {
          if (param_3 - (int)param_2 < 2) {
            return 0xffffffff;
          }
          if (*param_2 == 0) {
            uVar3 = (uint)*(byte *)(param_1 + (uint)param_2[1] + 0x48);
          }
          else {
            uVar3 = FUN_0001e934();
            param_3 = extraout_r2_02;
            param_4 = extraout_r3_02;
          }
          if (uVar3 == 0x12) break;
          if (((int)uVar3 < 0x12) || (1 < uVar3 - 0x18)) goto switchD_00020228_default;
          param_2 = param_2 + 2;
        }
        goto LAB_000203f4;
      }
      goto LAB_0002034c;
    }
    uVar3 = (uint)*(byte *)(param_1 + (uint)param_2[3] + 0x48);
  }
  else {
    uVar3 = FUN_0001e934();
    param_3 = extraout_r2_03;
    param_4 = extraout_r3_03;
  }
  if (uVar3 == 0x19) {
    param_2 = param_2 + 4;
    while( true ) {
      if (param_3 - (int)param_2 < 2) {
        return 0xffffffff;
      }
      if (*param_2 == 0) {
        uVar3 = (uint)*(byte *)(param_1 + (uint)param_2[1] + 0x48);
      }
      else {
        uVar3 = FUN_0001e934();
        param_3 = extraout_r2_04;
        param_4 = extraout_r3_04;
      }
      if (uVar3 == 0x12) break;
      if (uVar3 != 0x19) goto switchD_00020228_default;
      param_2 = param_2 + 2;
    }
LAB_000203f4:
    *param_4 = param_2 + 2;
    return 10;
  }
LAB_0002034c:
  *param_4 = pbVar4;
  return 0;
}



/* ===== FUN_00020460 @ 00020460 size=540 ===== */

undefined4 FUN_00020460(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_3 - (int)param_2;
  if (iVar7 < 2) {
    return 0xffffffff;
  }
  uVar5 = (uint)*param_2;
  bVar1 = param_2[1];
  uVar4 = (uint)bVar1;
  if (uVar5 == 0) {
    uVar3 = (uint)*(byte *)(param_1 + uVar4 + 0x48);
  }
  else {
    uVar3 = FUN_0001e934(uVar5,uVar4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  switch(uVar3) {
  case 6:
LAB_0002056c:
    if (iVar7 == 2) {
      return 0xfffffffe;
    }
    break;
  case 7:
LAB_0002057c:
    if (iVar7 < 4) {
      return 0xfffffffe;
    }
    break;
  case 8:
    break;
  case 9:
    goto LAB_00020584;
  case 10:
    goto LAB_00020584;
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
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    goto LAB_00020584;
  case 0x16:
    goto LAB_00020548;
  case 0x17:
    break;
  case 0x18:
LAB_00020548:
    iVar6 = DAT_00020680 + 0x20558;
    pbVar2 = param_2;
    do {
      param_2 = pbVar2 + 2;
      iVar7 = param_3 - (int)param_2;
      if (iVar7 < 2) {
        return 0xffffffff;
      }
      uVar5 = (uint)*param_2;
      bVar1 = pbVar2[3];
      uVar4 = (uint)bVar1;
      if (uVar5 == 0) {
        uVar3 = (uint)*(byte *)(param_1 + uVar4 + 0x48);
      }
      else {
        uVar3 = FUN_0001e934(uVar5,uVar4);
        param_3 = extraout_r2_00;
        param_4 = extraout_r3_00;
      }
      switch(uVar3) {
      case 5:
        goto switchD_000204a4_default;
      case 6:
        goto LAB_0002056c;
      case 7:
        goto LAB_0002057c;
      case 8:
        goto switchD_000204a4_default;
      case 9:
        goto switchD_000204a4_default;
      case 10:
        goto switchD_000204a4_default;
      case 0xb:
        goto switchD_000204a4_default;
      case 0xc:
        goto switchD_000204a4_default;
      case 0xd:
        goto switchD_000204a4_default;
      case 0xe:
        goto switchD_000204a4_default;
      case 0xf:
        goto switchD_000204a4_default;
      case 0x10:
        goto switchD_000204a4_default;
      case 0x11:
        goto switchD_000204a4_default;
      case 0x12:
        *param_4 = pbVar2 + 4;
        return 0x1c;
      case 0x13:
        goto switchD_000204a4_default;
      case 0x14:
        goto switchD_000204a4_default;
      case 0x15:
        goto switchD_000204a4_default;
      case 0x16:
        pbVar2 = param_2;
        break;
      case 0x17:
        goto switchD_000204a4_default;
      case 0x18:
        pbVar2 = param_2;
        break;
      case 0x19:
        pbVar2 = param_2;
        break;
      case 0x1a:
        pbVar2 = param_2;
        break;
      case 0x1b:
        pbVar2 = param_2;
        break;
      case 0x1c:
        goto switchD_000204a4_default;
      case 0x1d:
        pbVar2 = param_2;
        if ((*(uint *)(iVar6 + ((uint)(bVar1 >> 5) + (uint)*(byte *)(iVar6 + uVar5 + 0x500) * 8) * 4
                      ) >> (uVar4 & 0x1f) & 1) == 0) {
          *param_4 = param_2;
          return 0;
        }
        break;
      default:
        goto switchD_000204a4_default;
      }
    } while( true );
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    if ((*(uint *)(DAT_0002067c + 0x20524 +
                  ((uint)(bVar1 >> 5) + (uint)*(byte *)(DAT_0002067c + 0x20524 + uVar5 + 0x600) * 8)
                  * 4) >> (uVar4 & 0x1f) & 1) != 0) goto LAB_00020548;
    break;
  case 0x1e:
LAB_00020584:
    *param_4 = param_2;
    return 0x16;
  }
switchD_000204a4_default:
  *param_4 = param_2;
  return 0;
}



/* ===== FUN_00020684 @ 00020684 size=292 ===== */

undefined4 FUN_00020684(uint param_1,int param_2,char *param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  char *extraout_r2;
  char *pcVar3;
  int extraout_r3;
  int iVar4;
  
LAB_00020694:
  iVar4 = param_4 - (int)param_3;
  if (iVar4 < 2) {
    return 0xffffffff;
  }
  if (*param_3 == '\0') {
    uVar1 = (uint)*(byte *)(param_2 + (uint)(byte)param_3[1] + 0x48);
    pcVar3 = param_3;
  }
  else {
    uVar1 = FUN_0001e934();
    pcVar3 = extraout_r2;
    param_4 = extraout_r3;
  }
  switch(uVar1) {
  case 0:
    goto LAB_0002072c;
  case 1:
    goto LAB_0002072c;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    if (iVar4 == 2) {
      return 0xfffffffe;
    }
    param_3 = pcVar3 + 3;
    goto LAB_00020694;
  case 7:
    if (iVar4 < 4) {
      return 0xfffffffe;
    }
    param_3 = pcVar3 + 4;
    goto LAB_00020694;
  case 8:
LAB_0002072c:
    *param_5 = pcVar3;
    return 0;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    goto LAB_00020738;
  case 0xd:
LAB_00020738:
    param_3 = pcVar3 + 2;
    if (uVar1 == param_1) {
      if (param_4 - (int)param_3 < 2) {
        return 0xffffffe5;
      }
      *param_5 = param_3;
      if (pcVar3[2] == '\0') {
        uVar1 = (uint)*(byte *)(param_2 + (uint)(byte)pcVar3[3] + 0x48);
      }
      else {
        uVar1 = FUN_0001e934();
      }
      if (0x1e < uVar1) {
        return 0;
      }
      if ((DAT_000207a8 & 1 << (uVar1 & 0xff)) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x1b;
      }
      return uVar2;
    }
    goto LAB_00020694;
  }
  param_3 = pcVar3 + 2;
  goto LAB_00020694;
}



/* ===== FUN_000207ac @ 000207ac size=392 ===== */

undefined4 FUN_000207ac(int param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  uint uVar1;
  char *extraout_r2;
  undefined4 *extraout_r3;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (((int)param_3 - (int)param_2 & 1U) != 0) {
    param_3 = param_2 + ((int)param_3 - (int)param_2 & 0xfffffffe);
  }
LAB_000207cc:
  pcVar2 = param_2;
  iVar4 = (int)param_3 - (int)pcVar2;
  if (iVar4 < 2) {
    return 0xffffffff;
  }
  if (*pcVar2 == '\0') {
    uVar1 = (uint)*(byte *)(param_1 + (uint)(byte)pcVar2[1] + 0x48);
  }
  else {
    uVar1 = FUN_0001e934();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  switch(uVar1) {
  case 0:
    goto LAB_00020850;
  case 1:
    goto LAB_00020850;
  case 2:
    param_2 = pcVar2 + 2;
    if ((int)param_3 - (int)param_2 < 2) {
      return 0xffffffff;
    }
    if ((pcVar2[2] == '\0') && (pcVar2[3] == '!')) {
      param_2 = pcVar2 + 4;
      if ((int)param_3 - (int)param_2 < 2) {
        return 0xffffffff;
      }
      if ((pcVar2[4] == '\0') && (pcVar2[5] == '[')) {
        iVar3 = iVar3 + 1;
        param_2 = pcVar2 + 6;
      }
    }
    goto LAB_000207cc;
  case 3:
    break;
  case 4:
    param_2 = pcVar2 + 2;
    if ((int)param_3 - (int)param_2 < 2) {
      return 0xffffffff;
    }
    if ((pcVar2[2] == '\0') && (pcVar2[3] == ']')) {
      param_2 = pcVar2 + 4;
      if ((int)param_3 - (int)param_2 < 2) {
        return 0xffffffff;
      }
      if ((pcVar2[4] == '\0') && (pcVar2[5] == '>')) {
        if (iVar3 == 0) {
          *param_4 = pcVar2 + 6;
          return 0x2a;
        }
        iVar3 = iVar3 + -1;
        param_2 = pcVar2 + 6;
      }
    }
    goto LAB_000207cc;
  case 5:
    break;
  case 6:
    if (iVar4 == 2) {
      return 0xfffffffe;
    }
    param_2 = pcVar2 + 3;
    goto LAB_000207cc;
  case 7:
    goto LAB_00020840;
  case 8:
LAB_00020850:
    *param_4 = pcVar2;
    return 0;
  }
  param_2 = pcVar2 + 2;
  goto LAB_000207cc;
LAB_00020840:
  if (iVar4 < 4) {
    return 0xfffffffe;
  }
  param_2 = pcVar2 + 4;
  goto LAB_000207cc;
}



/* ===== FUN_00020934 @ 00020934 size=200 ===== */

undefined4 FUN_00020934(int param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r2;
  undefined4 *extraout_r3;
  char *pcVar5;
  uint uVar6;
  
  uVar3 = DAT_000209fc;
  param_3 = param_3 + -2;
LAB_0002094c:
  do {
    pcVar5 = param_2 + 2;
    if (param_3 - (int)pcVar5 < 2) {
      return 1;
    }
    cVar1 = *pcVar5;
    bVar2 = param_2[3];
    uVar6 = (uint)bVar2;
    if (cVar1 == '\0') {
      uVar4 = (uint)*(byte *)(param_1 + uVar6 + 0x48);
    }
    else {
      uVar4 = FUN_0001e934(cVar1,uVar6);
      param_3 = extraout_r2;
      param_4 = extraout_r3;
    }
    param_2 = pcVar5;
    if (uVar4 - 9 < 0x1b) {
      uVar4 = 1 << (uVar4 - 9 & 0xff);
      if ((uVar4 & uVar3) != 0) goto LAB_0002094c;
      if ((uVar4 & 0x22000) == 0) {
        if ((uVar4 & 0x1000) == 0) goto LAB_000209f0;
        if ((cVar1 == '\0') && (uVar6 == 9)) goto LAB_000209bc;
        goto LAB_0002094c;
      }
      if (cVar1 != '\0') goto LAB_000209bc;
      if ((bVar2 & 0x80) == 0) goto LAB_0002094c;
    }
    else {
LAB_000209f0:
      if (cVar1 != '\0') goto LAB_000209bc;
    }
    if ((uVar6 != 0x24) && (uVar6 != 0x40)) {
LAB_000209bc:
      *param_4 = pcVar5;
      return 0;
    }
  } while( true );
}



/* ===== FUN_00020a00 @ 00020a00 size=616 ===== */

int FUN_00020a00(int param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r3;
  int extraout_r3_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar6 = 1;
  iVar4 = 0;
  uVar7 = 0;
switchD_00020a50_default:
  pcVar2 = param_2;
  param_2 = pcVar2 + 2;
  cVar1 = *param_2;
  uVar8 = (uint)(byte)pcVar2[3];
  if (cVar1 == '\0') {
    uVar3 = (uint)*(byte *)(param_1 + uVar8 + 0x48);
  }
  else {
    uVar3 = FUN_0001e934(cVar1,uVar8);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  iVar5 = iVar4;
  switch(uVar3) {
  case 3:
    if (iVar4 < param_3) goto LAB_00020b8c;
    goto switchD_00020a50_default;
  case 4:
    goto switchD_00020a50_default;
  case 5:
    break;
  case 6:
    if ((iVar6 == 0) && (iVar6 = 1, iVar4 < param_3)) {
      *(char **)(param_4 + iVar4 * 0x10) = param_2;
      *(undefined1 *)(param_4 + iVar4 * 0x10 + 0xc) = 1;
    }
    param_2 = pcVar2 + 3;
    goto switchD_00020a50_default;
  case 7:
    if ((iVar6 == 0) && (iVar6 = 1, iVar4 < param_3)) {
      *(char **)(param_4 + iVar4 * 0x10) = param_2;
      *(undefined1 *)(param_4 + iVar4 * 0x10 + 0xc) = 1;
    }
    param_2 = pcVar2 + 4;
    goto switchD_00020a50_default;
  case 8:
    goto switchD_00020a50_default;
  case 9:
    goto LAB_00020c2c;
  case 10:
LAB_00020c2c:
    if (iVar6 == 1) {
LAB_00020b6c:
      iVar6 = 0;
      iVar4 = iVar5;
    }
    else if (iVar4 < param_3 && iVar6 == 2) {
LAB_00020b8c:
      *(undefined1 *)(param_4 + iVar4 * 0x10 + 0xc) = 0;
    }
    goto switchD_00020a50_default;
  case 0xb:
    goto LAB_00020c54;
  case 0xc:
    if (iVar6 == 2) {
      bVar9 = uVar7 == 0xc;
      goto LAB_00020b58;
    }
LAB_00020b38:
    if (iVar4 < param_3) {
      *(char **)(param_4 + iVar4 * 0x10 + 4) = pcVar2 + 4;
    }
LAB_00020b4c:
    iVar6 = 2;
    uVar7 = uVar3;
    goto switchD_00020a50_default;
  case 0xd:
    if (iVar6 != 2) goto LAB_00020b38;
    bVar9 = uVar7 == 0xd;
LAB_00020b58:
    if (bVar9) {
      iVar5 = iVar4 + 1;
      if (iVar4 < param_3) {
        *(char **)(param_4 + iVar4 * 0x10 + 8) = param_2;
        iVar5 = iVar4 + 1;
      }
      goto LAB_00020b6c;
    }
    goto switchD_00020a50_default;
  case 0xe:
    goto switchD_00020a50_default;
  case 0xf:
    goto switchD_00020a50_default;
  case 0x10:
    goto switchD_00020a50_default;
  case 0x11:
LAB_00020c54:
    if (iVar6 != 2) {
      return iVar4;
    }
    goto switchD_00020a50_default;
  case 0x12:
    goto switchD_00020a50_default;
  case 0x13:
    goto switchD_00020a50_default;
  case 0x14:
    goto switchD_00020a50_default;
  case 0x15:
    if (iVar6 == 1) goto LAB_00020b6c;
    if (iVar4 < param_3 && iVar6 == 2) {
      iVar6 = param_4 + iVar4 * 0x10;
      uVar3 = uVar7;
      if (*(char *)(iVar6 + 0xc) != '\0') {
        if ((*(char **)(iVar6 + 4) != param_2 && cVar1 == '\0') && (uVar8 == 0x20)) {
          if (pcVar2[4] == '\0') {
            if ((byte)pcVar2[5] == 0x20) goto LAB_00020c14;
            uVar8 = (uint)*(byte *)(param_1 + (uint)(byte)pcVar2[5] + 0x48);
          }
          else {
            uVar8 = FUN_0001e934();
            param_3 = extraout_r2_00;
            param_4 = extraout_r3_00;
          }
          if (uVar7 != uVar8) goto LAB_00020b4c;
        }
LAB_00020c14:
        *(undefined1 *)(iVar6 + 0xc) = 0;
      }
      goto LAB_00020b4c;
    }
    goto switchD_00020a50_default;
  case 0x16:
    break;
  case 0x17:
    goto switchD_00020a50_default;
  case 0x18:
    break;
  case 0x19:
    goto switchD_00020a50_default;
  case 0x1a:
    goto switchD_00020a50_default;
  case 0x1b:
    goto switchD_00020a50_default;
  case 0x1c:
    goto switchD_00020a50_default;
  case 0x1d:
    break;
  default:
    goto switchD_00020a50_default;
  }
  if ((iVar6 == 0) && (iVar6 = 1, iVar4 < param_3)) {
    *(char **)(param_4 + iVar4 * 0x10) = param_2;
    *(undefined1 *)(param_4 + iVar4 * 0x10 + 0xc) = 1;
  }
  goto switchD_00020a50_default;
}



/* ===== FUN_00020e7c @ 00020e7c size=128 ===== */

int FUN_00020e7c(int param_1,char *param_2)

{
  uint uVar1;
  char *extraout_r2;
  char *extraout_r3;
  char *pcVar2;
  
  pcVar2 = param_2;
  while( true ) {
    while( true ) {
      while( true ) {
        if (*pcVar2 == '\0') {
          uVar1 = (uint)*(byte *)(param_1 + (uint)(byte)pcVar2[1] + 0x48);
        }
        else {
          uVar1 = FUN_0001e934();
          param_2 = extraout_r2;
          pcVar2 = extraout_r3;
        }
        if (uVar1 != 7) break;
        pcVar2 = pcVar2 + 4;
      }
      if (7 < (int)uVar1) break;
      if (uVar1 == 5) goto LAB_00020ee4;
      if (uVar1 != 6) goto LAB_00020ec4;
      pcVar2 = pcVar2 + 3;
    }
    if (((int)uVar1 < 0x16) || ((0x1b < (int)uVar1 && (uVar1 != 0x1d)))) break;
LAB_00020ee4:
    pcVar2 = pcVar2 + 2;
  }
LAB_00020ec4:
  return (int)pcVar2 - (int)param_2;
}



/* ===== FUN_00020efc @ 00020efc size=76 ===== */

char * FUN_00020efc(int param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_r2;
  char *extraout_r3;
  
  uVar1 = DAT_00020f48;
  while( true ) {
    if (*param_2 == '\0') {
      uVar2 = (uint)*(byte *)(param_1 + (uint)(byte)param_2[1] + 0x48);
    }
    else {
      uVar2 = FUN_0001e934();
      param_1 = extraout_r2;
      param_2 = extraout_r3;
    }
    if ((0x15 < uVar2) || ((uVar1 & 1 << (uVar2 & 0xff)) == 0)) break;
    param_2 = param_2 + 2;
  }
  return param_2;
}



/* ===== FUN_00020f4c @ 00020f4c size=244 ===== */

void FUN_00020f4c(int param_1,char *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int extraout_r2;
  int extraout_r2_00;
  int *extraout_r3;
  int *extraout_r3_00;
  char *pcVar2;
  
LAB_00020f5c:
  if (param_3 - (int)param_2 < 2) {
    return;
  }
  if (*param_2 == '\0') {
    uVar1 = (uint)*(byte *)(param_1 + (uint)(byte)param_2[1] + 0x48);
  }
  else {
    uVar1 = FUN_0001e934();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  switch(uVar1) {
  case 5:
    break;
  case 6:
    param_2 = param_2 + 3;
    goto LAB_00020fb0;
  case 7:
    param_2 = param_2 + 4;
    goto LAB_00020fb0;
  case 8:
    break;
  case 9:
    pcVar2 = param_2 + 2;
    *param_4 = *param_4 + 1;
    if (1 < param_3 - (int)pcVar2) {
      if (param_2[2] == '\0') {
        uVar1 = (uint)*(byte *)(param_1 + (uint)(byte)param_2[3] + 0x48);
      }
      else {
        uVar1 = FUN_0001e934();
        param_3 = extraout_r2_00;
        param_4 = extraout_r3_00;
      }
      if (uVar1 == 10) {
        pcVar2 = param_2 + 4;
      }
    }
    param_2 = pcVar2;
    param_4[1] = 0;
    goto LAB_00020f5c;
  case 10:
    goto LAB_00020fc8;
  }
  param_2 = param_2 + 2;
LAB_00020fb0:
  param_4[1] = param_4[1] + 1;
  goto LAB_00020f5c;
LAB_00020fc8:
  param_2 = param_2 + 2;
  param_4[1] = 0;
  *param_4 = *param_4 + 1;
  goto LAB_00020f5c;
}



/* ===== FUN_00021040 @ 00021040 size=72 ===== */

undefined4 FUN_00021040(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    uVar2 = (uint)*param_1;
    uVar1 = (uint)*param_2;
    if (uVar2 - 0x61 < 0x1a) {
      uVar2 = uVar2 - 0x20 & 0xff;
    }
    if (uVar1 - 0x61 < 0x1a) {
      uVar1 = uVar1 - 0x20 & 0xff;
    }
    if (uVar2 != uVar1) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_00021098 @ 00021098 size=112 ===== */

void FUN_00021098(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 local_24 [2];
  byte *local_1c;
  byte local_18;
  undefined1 auStack_17 [3];
  int local_14;
  
  piVar2 = *(int **)(DAT_00021108 + 0x210b4 + DAT_0002110c);
  local_14 = *piVar2;
  local_24[0] = param_2;
  local_1c = &local_18;
  (**(code **)(param_1 + 0x38))(param_1,local_24,param_3,&local_1c,auStack_17);
  if (local_1c == &local_18) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)local_18;
  }
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



/* ===== FUN_00021110 @ 00021110 size=44 ===== */

bool FUN_00021110(int param_1)

{
  if (0x17 < param_1 - 9U) {
    return false;
  }
  return (DAT_0002113c & 1 << (param_1 - 9U & 0xff)) != 0;
}



/* ===== FUN_00021140 @ 00021140 size=92 ===== */

int FUN_00021140(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 >> 8;
  if (0xdf < iVar1) {
    if (iVar1 != 0xff) {
      return param_1;
    }
    if (param_1 - 0xfffeU < 2) {
      param_1 = -1;
    }
    return param_1;
  }
  if (iVar1 < 0xd8) {
    if (iVar1 != 0) {
      return param_1;
    }
    if (*(char *)(DAT_0002119c + param_1 + 0x2131c) == '\0') {
      param_1 = -1;
    }
    return param_1;
  }
  return -1;
}



/* ===== FUN_000213fc @ 000213fc size=84 ===== */

uint FUN_000213fc(int param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x16c))(*(undefined4 *)(param_1 + 0x170));
  if ((uVar1 & 0xffff0000) == 0) {
    return *(uint *)(DAT_00021450 + 0x21428 +
                    (((uVar1 & 0xff) >> 5) +
                    (uint)*(byte *)(DAT_00021450 + 0x21428 + ((int)uVar1 >> 8) + 0x500) * 8) * 4) &
           1 << (uVar1 & 0x1f);
  }
  return 0;
}



/* ===== FUN_00021454 @ 00021454 size=84 ===== */

uint FUN_00021454(int param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x16c))(*(undefined4 *)(param_1 + 0x170));
  if ((uVar1 & 0xffff0000) == 0) {
    return *(uint *)(DAT_000214a8 + 0x21480 +
                    (((uVar1 & 0xff) >> 5) +
                    (uint)*(byte *)(DAT_000214a8 + 0x21480 + ((int)uVar1 >> 8) + 0x600) * 8) * 4) &
           1 << (uVar1 & 0x1f);
  }
  return 0;
}



/* ===== FUN_000214ac @ 000214ac size=52 ===== */

uint FUN_000214ac(int param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x16c))(*(undefined4 *)(param_1 + 0x170));
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = FUN_00021140();
    return uVar1 >> 0x1f;
  }
  return 1;
}



/* ===== FUN_000214e0 @ 000214e0 size=164 ===== */

undefined4 FUN_000214e0(int param_1,undefined4 *param_2,byte *param_3,uint *param_4,uint param_5)

{
  short sVar1;
  byte *pbVar2;
  short *psVar3;
  
  while( true ) {
    pbVar2 = (byte *)*param_2;
    if (param_3 <= pbVar2) {
      return 0;
    }
    if (param_5 <= *param_4) break;
    sVar1 = *(short *)(param_1 + (*pbVar2 + 0xb8) * 2 + 4);
    if (sVar1 == 0) {
      sVar1 = (**(code **)(param_1 + 0x16c))(*(undefined4 *)(param_1 + 0x170));
      *param_2 = (byte *)*param_2 + (*(byte *)(param_1 + (uint)*(byte *)*param_2 + 0x48) - 3);
    }
    else {
      *param_2 = pbVar2 + 1;
    }
    psVar3 = (short *)*param_4;
    *param_4 = (uint)(psVar3 + 1);
    *psVar3 = sVar1;
  }
  if (*param_4 != param_5) {
    return 0;
  }
  return 2;
}



/* ===== FUN_00021584 @ 00021584 size=496 ===== */

undefined4
FUN_00021584(int param_1,int param_2,uint param_3,ushort *param_4,ushort *param_5,
            undefined4 *param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  int *piVar7;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar8;
  
  if (param_5 <= param_4) {
    return 0xfffffffc;
  }
  piVar7 = *(int **)(param_2 + 0x48);
  if (param_5 == (ushort *)((int)param_4 + 1)) {
    if (*(byte *)(param_2 + 0x45) - 3 < 3) {
      return 0xffffffff;
    }
    bVar1 = (byte)*param_4;
    if (bVar1 == 0xef) {
LAB_000215f0:
      if (*(byte *)(param_2 + 0x45) == 0) {
        uVar6 = param_3 & 1;
      }
      else {
        uVar6 = 0;
      }
      bVar8 = uVar6 == 0;
    }
    else {
      if (0xef < bVar1) {
        if (bVar1 < 0xfe) goto LAB_000216bc;
        goto LAB_000215f0;
      }
      if (bVar1 == 0) {
        return 0xffffffff;
      }
      bVar8 = bVar1 == 0x3c;
    }
    if (bVar8) {
      return 0xffffffff;
    }
LAB_000216bc:
    iVar2 = *(int *)(param_1 + (uint)*(byte *)(param_2 + 0x45) * 4);
  }
  else {
    uVar5 = *param_4 << 8 | *param_4 >> 8;
    if (uVar5 == 0xefbb) {
      if ((param_3 != 1) ||
         ((*(byte *)(param_2 + 0x45) != 0 && (2 < *(byte *)(param_2 + 0x45) - 3)))) {
        if (param_5 == param_4 + 1) {
          return 0xffffffff;
        }
        if ((byte)param_4[1] == 0xbf) {
          *param_6 = (byte *)((int)param_4 + 3);
          iVar2 = *(int *)(param_1 + 8);
          goto LAB_0002168c;
        }
      }
      goto LAB_000216bc;
    }
    if (0xefbb < uVar5) {
      if (uVar5 == 0xfeff) {
        if (*(char *)(param_2 + 0x45) == '\0') {
          uVar6 = param_3 & 1;
        }
        else {
          uVar6 = 0;
        }
        if (uVar6 == 0) {
          *param_6 = param_4 + 1;
          iVar2 = *(int *)(param_1 + 0x10);
LAB_0002168c:
          *piVar7 = iVar2;
          return 0xe;
        }
      }
      else {
        if (uVar5 != 0xfffe) goto LAB_00021628;
        if (*(char *)(param_2 + 0x45) == '\0') {
          uVar6 = param_3 & 1;
        }
        else {
          uVar6 = 0;
        }
        if (uVar6 == 0) {
          *param_6 = param_4 + 1;
          iVar2 = *(int *)(param_1 + 0x14);
          goto LAB_0002168c;
        }
      }
      goto LAB_000216bc;
    }
    if (uVar5 != 0x3c00) {
LAB_00021628:
      if ((byte)*param_4 == 0) {
        if ((param_3 != 1) || (*(char *)(param_2 + 0x45) != '\x05')) {
          iVar2 = *(int *)(param_1 + 0x10);
          goto LAB_000216e8;
        }
      }
      else {
        if (*(byte *)((int)param_4 + 1) == 0) {
          uVar6 = param_3 & 1;
        }
        else {
          uVar6 = 1;
        }
        if (uVar6 == 0) {
          puVar3 = *(undefined4 **)(param_1 + 0x14);
          *piVar7 = (int)puVar3;
          UNRECOVERED_JUMPTABLE = (code *)*puVar3;
          goto LAB_00021760;
        }
      }
      goto LAB_000216bc;
    }
    if (*(byte *)(param_2 + 0x45) - 3 < 2) {
      uVar6 = param_3 & 1;
    }
    else {
      uVar6 = 0;
    }
    if (uVar6 != 0) goto LAB_000216bc;
    iVar2 = *(int *)(param_1 + 0x14);
  }
LAB_000216e8:
  *piVar7 = iVar2;
  UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + param_3 * 4);
LAB_00021760:
                    /* WARNING: Could not recover jumptable at 0x00021768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)();
  return uVar4;
}



/* ===== FUN_00021774 @ 00021774 size=44 ===== */

void FUN_00021774(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00021584(DAT_000217a0 + 0x21a6c,param_1,0,param_2,param_3,param_4,param_3);
  return;
}



/* ===== FUN_000217a4 @ 000217a4 size=44 ===== */

void FUN_000217a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00021584(DAT_000217d0 + 0x21a9c,param_1,1,param_2,param_3,param_4,param_3);
  return;
}



/* ===== FUN_000217d4 @ 000217d4 size=44 ===== */

void FUN_000217d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00021584(DAT_00021800 + 0x21ae8,param_1,0,param_2,param_3,param_4,param_3);
  return;
}



/* ===== FUN_00021804 @ 00021804 size=44 ===== */

void FUN_00021804(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00021584(DAT_00021830 + 0x21b18,param_1,1,param_2,param_3,param_4,param_3);
  return;
}



/* ===== FUN_000218ec @ 000218ec size=332 ===== */

undefined4 FUN_000218ec(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar2 = (byte *)(param_2 + 1);
  do {
    while( true ) {
      while( true ) {
        pbVar4 = pbVar2;
        iVar3 = param_3 - (int)pbVar4;
        if (iVar3 < 1) {
          return 0xffffffff;
        }
        bVar1 = *(byte *)(param_1 + (uint)*pbVar4 + 0x48);
        if (bVar1 != 6) break;
        if (iVar3 < 3) {
          return 0xfffffffe;
        }
        iVar3 = (**(code **)(param_1 + 0x164))(param_1,pbVar4);
        if (iVar3 != 0) goto LAB_000219b8;
        pbVar2 = pbVar4 + 3;
      }
      if (6 < bVar1) break;
      if (bVar1 < 2) {
LAB_000219b8:
        *param_4 = pbVar4;
        return 0;
      }
      if (bVar1 == 5) {
        if (iVar3 == 1) {
          return 0xfffffffe;
        }
        iVar3 = (**(code **)(param_1 + 0x160))(param_1,pbVar4);
        if (iVar3 != 0) goto LAB_000219b8;
        pbVar2 = pbVar4 + 2;
      }
      else {
LAB_0002193c:
        pbVar2 = pbVar4 + 1;
      }
    }
    if (bVar1 == 8) goto LAB_000219b8;
    if (bVar1 < 8) {
      if (iVar3 < 4) {
        return 0xfffffffe;
      }
      iVar3 = (**(code **)(param_1 + 0x168))(param_1,pbVar4);
      if (iVar3 != 0) goto LAB_000219b8;
      pbVar2 = pbVar4 + 4;
    }
    else {
      if (bVar1 != 0x1b) goto LAB_0002193c;
      if (param_3 - (int)(pbVar4 + 1) < 1) {
        return 0xffffffff;
      }
      pbVar2 = pbVar4 + 1;
      if (pbVar4[1] == 0x2d) {
        if (param_3 - (int)(pbVar4 + 2) < 1) {
          return 0xffffffff;
        }
        if (pbVar4[2] != 0x3e) {
          *param_4 = pbVar4 + 2;
          return 0;
        }
        *param_4 = pbVar4 + 3;
        return 0xd;
      }
    }
  } while( true );
}



/* ===== FUN_00021a38 @ 00021a38 size=132 ===== */

undefined4 FUN_00021a38(char *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  
  *param_3 = 0xb;
  if (param_2 - (int)param_1 == 3) {
    if (*param_1 == 'X') {
      bVar1 = true;
    }
    else {
      if (*param_1 != 'x') {
        return 1;
      }
      bVar1 = false;
    }
    if (param_1[1] == 'M') {
      bVar1 = true;
    }
    else if (param_1[1] != 'm') {
      return 1;
    }
    if (param_1[2] == 'L') {
      return 0;
    }
    if (param_1[2] == 'l') {
      if (bVar1) {
        return 0;
      }
      *param_3 = 0xc;
    }
  }
  return 1;
}



/* ===== FUN_00021abc @ 00021abc size=1060 ===== */

void FUN_00021abc(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  int local_28;
  int local_24;
  int iStack_20;
  
  piVar5 = *(int **)(DAT_00021ee0 + 0x21ad8 + DAT_00021ee4);
  iVar2 = param_3 - (int)param_2;
  local_24 = *piVar5;
  local_28 = param_1;
  iStack_20 = param_3;
  if (iVar2 < 1) {
LAB_00021aec:
    iVar2 = -1;
    goto LAB_00021af0;
  }
  bVar1 = *(byte *)(param_1 + (uint)*param_2 + 0x48);
  if (bVar1 == 7) {
    if (iVar2 < 4) goto LAB_00021bf0;
    iVar2 = (**(code **)(param_1 + 0x168))();
    if ((iVar2 == 0) && (iVar2 = (**(code **)(param_1 + 0x15c))(param_1,param_2), iVar2 != 0)) {
      pbVar4 = param_2 + 4;
      goto LAB_00021b5c;
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 == 5) {
      if (iVar2 == 1) {
LAB_00021bf0:
        iVar2 = -2;
        goto LAB_00021af0;
      }
      iVar2 = (**(code **)(param_1 + 0x160))();
      if ((iVar2 == 0) && (iVar2 = (**(code **)(param_1 + 0x154))(param_1,param_2), iVar2 != 0)) {
        pbVar4 = param_2 + 2;
        goto LAB_00021b5c;
      }
    }
    else if (bVar1 == 6) {
      if (iVar2 < 3) goto LAB_00021bf0;
      iVar2 = (**(code **)(param_1 + 0x164))();
      if ((iVar2 == 0) && (iVar2 = (**(code **)(param_1 + 0x158))(param_1,param_2), iVar2 != 0)) {
        pbVar4 = param_2 + 3;
        goto LAB_00021b5c;
      }
    }
  }
  else if ((bVar1 == 0x18) || ((bVar1 != 0x1d && (bVar1 == 0x16)))) {
    pbVar4 = param_2 + 1;
LAB_00021b5c:
    do {
      iVar2 = param_3 - (int)pbVar4;
      if (iVar2 < 1) goto LAB_00021aec;
      pbVar3 = pbVar4;
      switch(*(undefined1 *)(param_1 + (uint)*pbVar4 + 0x48)) {
      case 5:
        if (iVar2 == 1) goto LAB_00021bf0;
        iVar2 = (**(code **)(param_1 + 0x160))(param_1,pbVar4);
        if ((iVar2 != 0) || (iVar2 = (**(code **)(param_1 + 0x148))(param_1,pbVar4), iVar2 == 0))
        goto switchD_00021b7c_default;
        pbVar4 = pbVar4 + 2;
        goto LAB_00021b5c;
      case 6:
        if (iVar2 < 3) goto LAB_00021bf0;
        iVar2 = (**(code **)(param_1 + 0x164))(param_1,pbVar4);
        if ((iVar2 != 0) || (iVar2 = (**(code **)(param_1 + 0x14c))(param_1,pbVar4), iVar2 == 0))
        goto switchD_00021b7c_default;
        pbVar4 = pbVar4 + 3;
        goto LAB_00021b5c;
      case 7:
        if (iVar2 < 4) goto LAB_00021bf0;
        iVar2 = (**(code **)(param_1 + 0x168))(param_1,pbVar4);
        if ((iVar2 != 0) || (iVar2 = (**(code **)(param_1 + 0x150))(param_1,pbVar4), iVar2 == 0))
        goto switchD_00021b7c_default;
        pbVar4 = pbVar4 + 4;
        goto LAB_00021b5c;
      case 8:
        goto switchD_00021b7c_default;
      case 9:
        goto LAB_00021d68;
      case 10:
        goto LAB_00021d68;
      case 0xb:
        goto switchD_00021b7c_default;
      case 0xc:
        goto switchD_00021b7c_default;
      case 0xd:
        goto switchD_00021b7c_default;
      case 0xe:
        goto switchD_00021b7c_default;
      case 0xf:
        iVar2 = FUN_00021a38(param_2,pbVar4,&local_28);
        if (iVar2 == 0) goto LAB_00021d84;
        pbVar3 = pbVar4 + 1;
        if (0 < param_3 - (int)pbVar3) {
          if (pbVar4[1] != 0x3e) goto switchD_00021b7c_default;
          goto LAB_00021e84;
        }
        goto LAB_00021aec;
      case 0x10:
        goto switchD_00021b7c_default;
      case 0x11:
        goto switchD_00021b7c_default;
      case 0x12:
        goto switchD_00021b7c_default;
      case 0x13:
        goto switchD_00021b7c_default;
      case 0x14:
        goto switchD_00021b7c_default;
      case 0x15:
LAB_00021d68:
        iVar2 = FUN_00021a38(param_2,pbVar4,&local_28);
        if (iVar2 != 0) {
          pbVar3 = pbVar4 + 1;
          goto LAB_00021db4;
        }
LAB_00021d84:
        *param_4 = pbVar4;
        iVar2 = 0;
        goto LAB_00021af0;
      case 0x16:
        break;
      case 0x17:
        goto switchD_00021b7c_default;
      case 0x18:
        break;
      case 0x19:
        break;
      case 0x1a:
        break;
      case 0x1b:
        break;
      case 0x1c:
        goto switchD_00021b7c_default;
      case 0x1d:
      default:
        goto switchD_00021b7c_default;
      }
      pbVar4 = pbVar4 + 1;
    } while( true );
  }
  *param_4 = param_2;
LAB_00021b38:
  iVar2 = 0;
LAB_00021af0:
  if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
LAB_00021db4:
  pbVar4 = pbVar3;
  iVar2 = param_3 - (int)pbVar4;
  if (iVar2 < 1) goto LAB_00021aec;
  pbVar3 = pbVar4;
  switch(*(undefined1 *)(param_1 + (uint)*pbVar4 + 0x48)) {
  case 0:
    goto switchD_00021b7c_default;
  case 1:
    goto switchD_00021b7c_default;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    if (iVar2 == 1) goto LAB_00021bf0;
    iVar2 = (**(code **)(param_1 + 0x160))(param_1,pbVar4);
    if (iVar2 != 0) goto switchD_00021b7c_default;
    pbVar3 = pbVar4 + 2;
    goto LAB_00021db4;
  case 6:
    if (iVar2 < 3) goto LAB_00021bf0;
    iVar2 = (**(code **)(param_1 + 0x164))(param_1,pbVar4);
    if (iVar2 != 0) goto switchD_00021b7c_default;
    pbVar3 = pbVar4 + 3;
    goto LAB_00021db4;
  case 7:
    if (iVar2 < 4) goto LAB_00021bf0;
    iVar2 = (**(code **)(param_1 + 0x168))(param_1,pbVar4);
    if (iVar2 != 0) goto switchD_00021b7c_default;
    pbVar3 = pbVar4 + 4;
    goto LAB_00021db4;
  case 8:
switchD_00021b7c_default:
    *param_4 = pbVar3;
    goto LAB_00021b38;
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
    if (0 < param_3 - (int)(pbVar4 + 1)) goto code_r0x00021e78;
    goto LAB_00021aec;
  }
  pbVar3 = pbVar4 + 1;
  goto LAB_00021db4;
code_r0x00021e78:
  pbVar3 = pbVar4 + 1;
  if (pbVar4[1] == 0x3e) goto LAB_00021e84;
  goto LAB_00021db4;
LAB_00021e84:
  *param_4 = pbVar4 + 2;
  iVar2 = local_28;
  goto LAB_00021af0;
}



/* ===== FUN_00021ee8 @ 00021ee8 size=4604 ===== */

void FUN_00021ee8(int param_1,byte *param_2,byte *param_3,undefined4 *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  int unaff_r8;
  byte *pbVar12;
  byte *pbVar13;
  byte *local_30;
  int local_2c;
  
  piVar7 = *(int **)(DAT_00022edc + 0x21f08 + DAT_00022ee0);
  if (param_3 <= param_2) {
    unaff_r8 = -4;
  }
  local_2c = *piVar7;
  if (param_3 <= param_2) goto LAB_00022208;
  switch(*(undefined1 *)(param_1 + (uint)*param_2 + 0x48)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    pbVar12 = param_2 + 1;
    iVar10 = (int)param_3 - (int)pbVar12;
    pbVar13 = local_30;
    if (iVar10 < 1) goto LAB_00021f7c;
    switch(*(undefined1 *)(param_1 + (uint)param_2[1] + 0x48)) {
    case 5:
      if (iVar10 == 1) goto LAB_000220a0;
      iVar10 = (**(code **)(param_1 + 0x160))(param_1,pbVar12);
      if ((iVar10 == 0) && (iVar10 = (**(code **)(param_1 + 0x154))(param_1,pbVar12), iVar10 != 0))
      {
        param_2 = param_2 + 3;
        goto LAB_00022008;
      }
      break;
    case 6:
      if (iVar10 < 3) goto LAB_000220a0;
      iVar10 = (**(code **)(param_1 + 0x164))(param_1,pbVar12);
      if ((iVar10 == 0) && (iVar10 = (**(code **)(param_1 + 0x158))(param_1,pbVar12), iVar10 != 0))
      {
        param_2 = param_2 + 4;
        goto LAB_00022008;
      }
      break;
    case 7:
      if (iVar10 < 4) goto LAB_000220a0;
      iVar10 = (**(code **)(param_1 + 0x168))(param_1,pbVar12);
      if ((iVar10 == 0) && (iVar10 = (**(code **)(param_1 + 0x15c))(param_1,pbVar12), iVar10 != 0))
      {
        param_2 = param_2 + 5;
        goto LAB_00022008;
      }
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
      unaff_r8 = FUN_00021abc(param_1,param_2 + 2,param_3,param_4);
      goto LAB_00022208;
    case 0x10:
      pbVar12 = param_2 + 2;
      if ((int)param_3 - (int)pbVar12 < 1) {
LAB_00021f7c:
        local_30 = pbVar13;
        unaff_r8 = -1;
        goto LAB_00022208;
      }
      cVar1 = *(char *)(param_1 + (uint)param_2[2] + 0x48);
      pbVar9 = local_30;
      if (cVar1 == '\x14') {
        if (5 < (int)param_3 - (int)(param_2 + 3)) {
          pbVar13 = (byte *)(DAT_00022ee4 + 0x228e0);
          pbVar12 = param_2 + 3;
          do {
            pbVar8 = pbVar12 + 1;
            if (*pbVar12 != *pbVar13) goto switchD_000227dc_default;
            pbVar13 = pbVar13 + 1;
            pbVar12 = pbVar8;
          } while (pbVar8 != param_2 + 9);
          *param_4 = pbVar8;
          unaff_r8 = 8;
          goto LAB_00022208;
        }
        goto LAB_00021f7c;
      }
      if (cVar1 == '\x1b') {
        pbVar12 = param_2 + 3;
        if ((int)param_3 - (int)pbVar12 < 1) goto LAB_00021f7c;
        if (param_2[3] == 0x2d) {
          unaff_r8 = FUN_000218ec(param_1,pbVar12,param_3,param_4);
          goto LAB_00022208;
        }
switchD_000227dc_default:
        local_30 = pbVar9;
        *param_4 = pbVar12;
      }
      else {
switchD_00022cf4_default:
        local_30 = pbVar9;
        *param_4 = pbVar12;
      }
      goto LAB_00022bb8;
    case 0x11:
      pbVar12 = param_2 + 2;
      iVar10 = (int)param_3 - (int)pbVar12;
      if (iVar10 < 1) goto LAB_00021f7c;
      bVar2 = *(byte *)(param_1 + (uint)param_2[2] + 0x48);
      if (bVar2 == 7) {
        if (iVar10 < 4) goto LAB_000220a0;
        iVar10 = (**(code **)(param_1 + 0x168))(param_1,pbVar12);
        if ((iVar10 == 0) && (iVar10 = (**(code **)(param_1 + 0x15c))(param_1,pbVar12), iVar10 != 0)
           ) {
          param_2 = param_2 + 6;
LAB_000222a8:
          do {
            iVar10 = (int)param_3 - (int)param_2;
            pbVar13 = local_30;
            if (iVar10 < 1) goto LAB_00021f7c;
            switch(*(undefined1 *)(param_1 + (uint)*param_2 + 0x48)) {
            case 5:
              if (iVar10 == 1) goto LAB_000220a0;
              iVar10 = (**(code **)(param_1 + 0x160))(param_1,param_2);
              if ((iVar10 != 0) ||
                 (iVar10 = (**(code **)(param_1 + 0x148))(param_1,param_2), iVar10 == 0))
              goto switchD_0002202c_default;
              param_2 = param_2 + 2;
              goto LAB_000222a8;
            case 6:
              if (iVar10 < 3) goto LAB_000220a0;
              iVar10 = (**(code **)(param_1 + 0x164))(param_1,param_2);
              if ((iVar10 != 0) ||
                 (iVar10 = (**(code **)(param_1 + 0x14c))(param_1,param_2), iVar10 == 0))
              goto switchD_0002202c_default;
LAB_0002234c:
              param_2 = param_2 + 3;
              goto LAB_000222a8;
            case 7:
              if (iVar10 < 4) goto LAB_000220a0;
              iVar10 = (**(code **)(param_1 + 0x168))(param_1,param_2);
              if ((iVar10 != 0) ||
                 (iVar10 = (**(code **)(param_1 + 0x150))(param_1,param_2), iVar10 == 0))
              goto switchD_0002202c_default;
LAB_00022388:
              param_2 = param_2 + 4;
              goto LAB_000222a8;
            case 8:
              goto switchD_0002202c_default;
            case 9:
              goto LAB_0002248c;
            case 10:
              goto LAB_0002248c;
            case 0xb:
              *param_4 = param_2 + 1;
              goto LAB_000224fc;
            case 0xc:
              goto switchD_0002202c_default;
            case 0xd:
              goto switchD_0002202c_default;
            case 0xe:
              goto switchD_0002202c_default;
            case 0xf:
              goto switchD_0002202c_default;
            case 0x10:
              goto switchD_0002202c_default;
            case 0x11:
              goto switchD_0002202c_default;
            case 0x12:
              goto switchD_0002202c_default;
            case 0x13:
              goto switchD_0002202c_default;
            case 0x14:
              goto switchD_0002202c_default;
            case 0x15:
LAB_0002248c:
              pbVar9 = param_2 + 1;
              goto LAB_00022490;
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
              goto switchD_0002202c_default;
            case 0x1d:
            default:
              goto switchD_0002202c_default;
            }
            param_2 = param_2 + 1;
          } while( true );
        }
      }
      else if (bVar2 < 8) {
        if (bVar2 == 5) {
          if (iVar10 == 1) goto LAB_000220a0;
          iVar10 = (**(code **)(param_1 + 0x160))(param_1,pbVar12);
          if ((iVar10 == 0) &&
             (iVar10 = (**(code **)(param_1 + 0x154))(param_1,pbVar12), iVar10 != 0))
          goto LAB_00022388;
        }
        else if (bVar2 == 6) {
          if (iVar10 < 3) goto LAB_000220a0;
          iVar10 = (**(code **)(param_1 + 0x164))(param_1,pbVar12);
          if ((iVar10 == 0) &&
             (iVar10 = (**(code **)(param_1 + 0x158))(param_1,pbVar12), iVar10 != 0)) {
            param_2 = param_2 + 5;
            goto LAB_000222a8;
          }
        }
      }
      else {
        if (bVar2 == 0x18) goto LAB_0002234c;
        if ((bVar2 != 0x1d) && (bVar2 == 0x16)) goto LAB_0002234c;
      }
      break;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      break;
    case 0x16:
      goto LAB_00022004;
    case 0x17:
      break;
    case 0x18:
LAB_00022004:
      param_2 = param_2 + 2;
LAB_00022008:
      bVar11 = false;
LAB_0002200c:
      iVar10 = (int)param_3 - (int)param_2;
      pbVar13 = local_30;
      if (iVar10 < 1) goto LAB_00021f7c;
      switch(*(undefined1 *)(param_1 + (uint)*param_2 + 0x48)) {
      case 5:
        if (iVar10 == 1) goto LAB_000220a0;
        iVar10 = (**(code **)(param_1 + 0x160))(param_1,param_2);
        if ((iVar10 != 0) || (iVar10 = (**(code **)(param_1 + 0x148))(param_1,param_2), iVar10 == 0)
           ) goto switchD_0002202c_default;
        param_2 = param_2 + 2;
        goto LAB_0002200c;
      case 6:
        if (iVar10 < 3) goto LAB_000220a0;
        iVar10 = (**(code **)(param_1 + 0x164))(param_1,param_2);
        if ((iVar10 != 0) || (iVar10 = (**(code **)(param_1 + 0x14c))(param_1,param_2), iVar10 == 0)
           ) goto switchD_0002202c_default;
        param_2 = param_2 + 3;
        goto LAB_0002200c;
      case 7:
        if (iVar10 < 4) goto LAB_000220a0;
        iVar10 = (**(code **)(param_1 + 0x168))(param_1,param_2);
        if ((iVar10 != 0) || (iVar10 = (**(code **)(param_1 + 0x150))(param_1,param_2), iVar10 == 0)
           ) goto switchD_0002202c_default;
        param_2 = param_2 + 4;
        goto LAB_0002200c;
      case 8:
        goto switchD_0002202c_default;
      case 9:
        goto LAB_0002270c;
      case 10:
        goto LAB_0002270c;
      case 0xb:
        goto LAB_00022e8c;
      case 0xc:
        goto switchD_0002202c_default;
      case 0xd:
        goto switchD_0002202c_default;
      case 0xe:
        goto switchD_0002202c_default;
      case 0xf:
        goto switchD_0002202c_default;
      case 0x10:
        goto switchD_0002202c_default;
      case 0x11:
        goto LAB_00022e9c;
      case 0x12:
        goto switchD_0002202c_default;
      case 0x13:
        goto switchD_0002202c_default;
      case 0x14:
        goto switchD_0002202c_default;
      case 0x15:
LAB_0002270c:
        param_2 = param_2 + 1;
        goto LAB_00022710;
      case 0x16:
        break;
      case 0x17:
        if (bVar11) goto switchD_0002202c_default;
        pbVar12 = param_2 + 1;
        iVar10 = (int)param_3 - (int)pbVar12;
        if (iVar10 < 1) goto LAB_00021f7c;
        bVar2 = *(byte *)(param_1 + (uint)param_2[1] + 0x48);
        if (bVar2 != 7) {
          if (bVar2 < 8) {
            if (bVar2 == 5) {
              if (iVar10 == 1) goto LAB_000220a0;
              iVar10 = (**(code **)(param_1 + 0x160))(param_1,pbVar12);
              if ((iVar10 == 0) &&
                 (iVar10 = (**(code **)(param_1 + 0x154))(param_1,pbVar12), iVar10 != 0)) {
                param_2 = param_2 + 3;
                goto LAB_00022644;
              }
            }
            else if (bVar2 == 6) {
              if (iVar10 < 3) goto LAB_000220a0;
              iVar10 = (**(code **)(param_1 + 0x164))(param_1,pbVar12);
              if ((iVar10 == 0) &&
                 (iVar10 = (**(code **)(param_1 + 0x158))(param_1,pbVar12), iVar10 != 0)) {
                param_2 = param_2 + 4;
                goto LAB_00022644;
              }
            }
          }
          else if ((bVar2 == 0x18) || ((bVar2 != 0x1d && (bVar2 == 0x16)))) {
            param_2 = param_2 + 2;
            goto LAB_00022644;
          }
LAB_00022620:
          *param_4 = pbVar12;
          unaff_r8 = 0;
          goto LAB_00022208;
        }
        if (iVar10 < 4) goto LAB_000220a0;
        iVar10 = (**(code **)(param_1 + 0x168))(param_1,pbVar12);
        if ((iVar10 != 0) || (iVar10 = (**(code **)(param_1 + 0x15c))(param_1,pbVar12), iVar10 == 0)
           ) goto LAB_00022620;
        param_2 = param_2 + 5;
LAB_00022644:
        bVar11 = true;
        goto LAB_0002200c;
      case 0x18:
        break;
      case 0x19:
        break;
      case 0x1a:
        break;
      case 0x1b:
        break;
      case 0x1c:
        goto switchD_0002202c_default;
      case 0x1d:
      default:
        goto switchD_0002202c_default;
      }
      param_2 = param_2 + 1;
      goto LAB_0002200c;
    case 0x19:
      break;
    case 0x1a:
      break;
    case 0x1b:
      break;
    case 0x1c:
      break;
    case 0x1d:
    }
switchD_00021f98_default:
    *param_4 = pbVar12;
    goto LAB_00022bb8;
  case 3:
    unaff_r8 = FUN_0001d910(param_1,param_2 + 1,param_3,param_4);
    goto LAB_00022208;
  case 4:
    pbVar12 = param_2 + 1;
    if ((int)param_3 - (int)pbVar12 < 1) {
LAB_000230e4:
      unaff_r8 = -5;
      goto LAB_00022208;
    }
    if (param_2[1] == 0x5d) {
      if ((int)param_3 - (int)(param_2 + 2) < 1) goto LAB_000230e4;
      pbVar9 = param_2 + 2;
      if (param_2[2] == 0x3e) {
switchD_000224b8_default:
        *param_4 = pbVar9;
        goto LAB_00022bb8;
      }
    }
    goto LAB_00022f64;
  case 5:
    if ((int)param_3 - (int)param_2 < 2) {
LAB_000220a0:
      unaff_r8 = -2;
      goto LAB_00022208;
    }
    iVar10 = (**(code **)(param_1 + 0x160))();
    if (iVar10 == 0) {
      pbVar12 = param_2 + 2;
      goto LAB_00022f64;
    }
    break;
  case 6:
    if ((int)param_3 - (int)param_2 < 3) goto LAB_000220a0;
    iVar10 = (**(code **)(param_1 + 0x164))();
    if (iVar10 == 0) {
      pbVar12 = param_2 + 3;
      goto LAB_00022f64;
    }
    break;
  case 7:
    if ((int)param_3 - (int)param_2 < 4) goto LAB_000220a0;
    iVar10 = (**(code **)(param_1 + 0x168))();
    if (iVar10 == 0) {
      pbVar12 = param_2 + 4;
      goto LAB_00022f64;
    }
    break;
  case 8:
    break;
  case 9:
    pbVar12 = param_2 + 1;
    if ((int)param_3 - (int)pbVar12 < 1) {
      unaff_r8 = -3;
      goto LAB_00022208;
    }
    if (*(char *)(param_1 + (uint)param_2[1] + 0x48) == '\n') {
      pbVar12 = param_2 + 2;
    }
    *param_4 = pbVar12;
    goto LAB_00022f18;
  case 10:
    *param_4 = param_2 + 1;
LAB_00022f18:
    unaff_r8 = 7;
    goto LAB_00022208;
  default:
    pbVar12 = param_2 + 1;
LAB_00022f64:
    while (iVar10 = (int)param_3 - (int)pbVar12, 0 < iVar10) {
      switch(*(undefined1 *)(param_1 + (uint)*pbVar12 + 0x48)) {
      case 0:
        goto LAB_00023030;
      case 1:
        goto LAB_00023030;
      case 2:
        goto LAB_00023030;
      case 3:
        goto LAB_00023030;
      case 4:
        if (iVar10 == 1) goto LAB_00023030;
        if (pbVar12[1] == 0x5d) {
          if (iVar10 == 2) goto LAB_00023030;
          if (pbVar12[2] == 0x3e) {
            pbVar12 = pbVar12 + 2;
            goto switchD_00021f98_default;
          }
        }
      default:
        pbVar12 = pbVar12 + 1;
        break;
      case 5:
        if ((iVar10 == 1) || (iVar10 = (**(code **)(param_1 + 0x160))(param_1,pbVar12), iVar10 != 0)
           ) goto LAB_00023030;
        pbVar12 = pbVar12 + 2;
        break;
      case 6:
        if ((iVar10 < 3) || (iVar10 = (**(code **)(param_1 + 0x164))(param_1,pbVar12), iVar10 != 0))
        goto LAB_00023030;
        pbVar12 = pbVar12 + 3;
        break;
      case 7:
        if ((3 < iVar10) && (iVar10 = (**(code **)(param_1 + 0x168))(param_1,pbVar12), iVar10 == 0))
        goto code_r0x000230a4;
        goto LAB_00023030;
      case 8:
        goto LAB_00023030;
      case 9:
        goto LAB_00023030;
      case 10:
        goto LAB_00023030;
      }
    }
LAB_00023030:
    *param_4 = pbVar12;
    unaff_r8 = 6;
    goto LAB_00022208;
  }
switchD_0002202c_default:
  *param_4 = param_2;
LAB_00022bb8:
  unaff_r8 = 0;
LAB_00022208:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(unaff_r8);
  }
  return;
code_r0x000230a4:
  pbVar12 = pbVar12 + 4;
  goto LAB_00022f64;
LAB_00022490:
  if (0 < (int)param_3 - (int)pbVar9) {
    pbVar12 = pbVar9 + 1;
    switch(*(undefined1 *)(param_1 + (uint)*pbVar9 + 0x48)) {
    case 9:
      pbVar9 = pbVar12;
      break;
    case 10:
      pbVar9 = pbVar12;
      break;
    case 0xb:
      *param_4 = pbVar9 + 1;
LAB_000224fc:
      unaff_r8 = 5;
      goto LAB_00022208;
    case 0xc:
      goto switchD_000224b8_default;
    case 0xd:
      goto switchD_000224b8_default;
    case 0xe:
      goto switchD_000224b8_default;
    case 0xf:
      goto switchD_000224b8_default;
    case 0x10:
      goto switchD_000224b8_default;
    case 0x11:
      goto switchD_000224b8_default;
    case 0x12:
      goto switchD_000224b8_default;
    case 0x13:
      goto switchD_000224b8_default;
    case 0x14:
      goto switchD_000224b8_default;
    case 0x15:
      pbVar9 = pbVar12;
      break;
    default:
      goto switchD_000224b8_default;
    }
    goto LAB_00022490;
  }
  goto LAB_00021f7c;
LAB_00022710:
  iVar10 = (int)param_3 - (int)param_2;
  if (0 < iVar10) {
    pbVar12 = param_2 + 1;
    switch(*(undefined1 *)(param_1 + (uint)*param_2 + 0x48)) {
    case 5:
      if (iVar10 == 1) goto LAB_000220a0;
      iVar10 = (**(code **)(param_1 + 0x160))(param_1,param_2);
      if ((iVar10 != 0) || (iVar10 = (**(code **)(param_1 + 0x154))(param_1,param_2), iVar10 == 0))
      goto switchD_0002202c_default;
      local_30 = param_2 + 2;
      break;
    case 6:
      if (iVar10 < 3) goto LAB_000220a0;
      iVar10 = (**(code **)(param_1 + 0x164))(param_1,param_2);
      if ((iVar10 != 0) || (iVar10 = (**(code **)(param_1 + 0x158))(param_1,param_2), iVar10 == 0))
      goto switchD_0002202c_default;
      local_30 = param_2 + 3;
      break;
    case 7:
      if (iVar10 < 4) goto LAB_000220a0;
      iVar10 = (**(code **)(param_1 + 0x168))(param_1,param_2);
      if ((iVar10 != 0) || (iVar10 = (**(code **)(param_1 + 0x15c))(param_1,param_2), iVar10 == 0))
      goto switchD_0002202c_default;
      local_30 = param_2 + 4;
      break;
    case 8:
      goto switchD_0002202c_default;
    case 9:
      param_2 = pbVar12;
      goto LAB_00022710;
    case 10:
      param_2 = pbVar12;
      goto LAB_00022710;
    case 0xb:
LAB_00022e8c:
      unaff_r8 = 2;
      *param_4 = param_2 + 1;
      goto LAB_00022208;
    case 0xc:
      goto switchD_0002202c_default;
    case 0xd:
      goto switchD_0002202c_default;
    case 0xe:
      goto switchD_0002202c_default;
    case 0xf:
      goto switchD_0002202c_default;
    case 0x10:
      goto switchD_0002202c_default;
    case 0x11:
LAB_00022e9c:
      if (0 < (int)param_3 - (int)(param_2 + 1)) {
        pbVar9 = param_2 + 1;
        if (param_2[1] == 0x3e) {
          unaff_r8 = 4;
          *param_4 = param_2 + 2;
          goto LAB_00022208;
        }
        goto switchD_000224b8_default;
      }
      goto LAB_00021f7c;
    case 0x12:
      goto switchD_0002202c_default;
    case 0x13:
      goto switchD_0002202c_default;
    case 0x14:
      goto switchD_0002202c_default;
    case 0x15:
      goto switchD_00022738_caseD_15;
    case 0x16:
      goto LAB_000227a4;
    case 0x17:
      goto switchD_0002202c_default;
    case 0x18:
LAB_000227a4:
      local_30 = param_2 + 1;
      break;
    case 0x19:
      goto switchD_0002202c_default;
    case 0x1a:
      goto switchD_0002202c_default;
    case 0x1b:
      goto switchD_0002202c_default;
    case 0x1c:
      goto switchD_0002202c_default;
    case 0x1d:
    default:
      goto switchD_0002202c_default;
    }
    uVar3 = DAT_00022ee8;
    bVar11 = false;
    goto LAB_000227b8;
  }
  goto LAB_00021f7c;
switchD_00022738_caseD_15:
  param_2 = pbVar12;
  goto LAB_00022710;
LAB_000227b8:
  iVar10 = (int)param_3 - (int)local_30;
  pbVar13 = local_30;
  if (iVar10 < 1) goto LAB_00021f7c;
  pbVar12 = local_30;
  pbVar9 = local_30;
  switch(*(undefined1 *)(param_1 + (uint)*local_30 + 0x48)) {
  case 5:
    if (iVar10 != 1) {
      iVar10 = (**(code **)(param_1 + 0x160))(param_1);
      pbVar9 = local_30;
      if (iVar10 == 0) {
        pcVar4 = *(code **)(param_1 + 0x148);
        goto LAB_0002293c;
      }
      goto switchD_000224b8_default;
    }
    goto LAB_000220a0;
  case 6:
    if (iVar10 < 3) goto LAB_000220a0;
    iVar10 = (**(code **)(param_1 + 0x164))(param_1);
    pbVar9 = local_30;
    if (iVar10 != 0) goto switchD_000224b8_default;
    pcVar4 = *(code **)(param_1 + 0x14c);
LAB_00022980:
    iVar10 = (*pcVar4)(param_1,local_30);
    pbVar9 = local_30;
    if (iVar10 == 0) goto switchD_000224b8_default;
    local_30 = local_30 + 3;
    goto LAB_000227b8;
  case 7:
    if (iVar10 < 4) goto LAB_000220a0;
    iVar10 = (**(code **)(param_1 + 0x168))(param_1);
    pbVar9 = local_30;
    if (iVar10 != 0) goto switchD_000224b8_default;
    pcVar4 = *(code **)(param_1 + 0x150);
LAB_000229c0:
    iVar10 = (*pcVar4)(param_1,local_30);
    pbVar9 = local_30;
    if (iVar10 == 0) goto switchD_000224b8_default;
    local_30 = local_30 + 4;
    goto LAB_000227b8;
  case 8:
    goto switchD_000227dc_default;
  case 9:
    goto LAB_00022b30;
  case 10:
    goto LAB_00022b30;
  case 0xb:
    goto switchD_000227dc_default;
  case 0xc:
    goto switchD_000227dc_default;
  case 0xd:
    goto switchD_000227dc_default;
  case 0xe:
    goto LAB_00022b74;
  case 0xf:
    goto switchD_000227dc_default;
  case 0x10:
    goto switchD_000227dc_default;
  case 0x11:
    goto switchD_000227dc_default;
  case 0x12:
    goto switchD_000227dc_default;
  case 0x13:
    goto switchD_000227dc_default;
  case 0x14:
    goto switchD_000227dc_default;
  case 0x15:
LAB_00022b30:
    while( true ) {
      pbVar13 = local_30 + 1;
      if ((int)param_3 - (int)pbVar13 < 1) goto LAB_00021f7c;
      uVar5 = (uint)*(byte *)(param_1 + (uint)local_30[1] + 0x48);
      local_30 = pbVar13;
      if (uVar5 == 0xe) break;
      pbVar9 = pbVar13;
      if ((0x15 < uVar5) || ((uVar3 & 1 << uVar5) == 0)) goto switchD_000224b8_default;
    }
LAB_00022b74:
    while( true ) {
      pbVar12 = local_30 + 1;
      pbVar13 = pbVar12;
      if ((int)param_3 - (int)pbVar12 < 1) goto LAB_00021f7c;
      uVar5 = (uint)*(byte *)(param_1 + (uint)local_30[1] + 0x48);
      if (uVar5 - 0xc < 2) break;
      pbVar9 = pbVar12;
      if ((0x15 < uVar5) || (local_30 = pbVar12, (uVar3 & 1 << uVar5) == 0))
      goto switchD_00022cf4_default;
    }
    local_30 = local_30 + 2;
LAB_00022bcc:
    while( true ) {
      iVar10 = (int)param_3 - (int)local_30;
      pbVar13 = local_30;
      if (iVar10 < 1) goto LAB_00021f7c;
      uVar6 = (uint)*(byte *)(param_1 + (uint)*local_30 + 0x48);
      if (uVar5 == uVar6) break;
      pbVar12 = local_30;
      pbVar9 = local_30;
      switch(uVar6) {
      case 0:
        goto switchD_000227dc_default;
      case 1:
        goto switchD_000227dc_default;
      case 2:
        goto switchD_000227dc_default;
      case 3:
        unaff_r8 = FUN_0001d910(param_1,local_30 + 1,param_3,&local_30);
        if (unaff_r8 < 1) {
          if (unaff_r8 == 0) goto LAB_00022a74;
          goto LAB_00022208;
        }
        break;
      case 4:
      default:
        local_30 = local_30 + 1;
        break;
      case 5:
        if (iVar10 == 1) goto LAB_000220a0;
        iVar10 = (**(code **)(param_1 + 0x160))(param_1);
        pbVar9 = local_30;
        if (iVar10 != 0) goto switchD_000224b8_default;
        local_30 = local_30 + 2;
        break;
      case 6:
        if (iVar10 < 3) goto LAB_000220a0;
        iVar10 = (**(code **)(param_1 + 0x164))(param_1);
        pbVar9 = local_30;
        if (iVar10 != 0) goto switchD_000224b8_default;
        local_30 = local_30 + 3;
        break;
      case 7:
        if (3 < iVar10) {
          iVar10 = (**(code **)(param_1 + 0x168))(param_1);
          pbVar9 = local_30;
          if (iVar10 == 0) goto code_r0x00022c94;
          goto switchD_000224b8_default;
        }
        goto LAB_000220a0;
      case 8:
        goto switchD_000227dc_default;
      }
    }
    pbVar12 = local_30 + 1;
    pbVar13 = pbVar12;
    if ((int)param_3 - (int)pbVar12 < 1) goto LAB_00021f7c;
    pbVar9 = pbVar12;
    switch(*(undefined1 *)(param_1 + (uint)local_30[1] + 0x48)) {
    case 9:
      local_30 = pbVar12;
      break;
    case 10:
      local_30 = pbVar12;
      break;
    case 0xb:
      local_30 = pbVar12;
LAB_00022e44:
      unaff_r8 = 1;
      *param_4 = local_30 + 1;
      goto LAB_00022208;
    case 0xc:
      goto switchD_00022cf4_default;
    case 0xd:
      goto switchD_00022cf4_default;
    case 0xe:
      goto switchD_00022cf4_default;
    case 0xf:
      goto switchD_00022cf4_default;
    case 0x10:
      goto switchD_00022cf4_default;
    case 0x11:
      local_30 = pbVar12;
LAB_00022e58:
      pbVar12 = local_30 + 1;
      pbVar13 = pbVar12;
      if (0 < (int)param_3 - (int)pbVar12) {
        pbVar9 = pbVar12;
        if (local_30[1] != 0x3e) goto switchD_00022cf4_default;
        unaff_r8 = 3;
        *param_4 = local_30 + 2;
        local_30 = pbVar12;
        goto LAB_00022208;
      }
      goto LAB_00021f7c;
    case 0x12:
      goto switchD_00022cf4_default;
    case 0x13:
      goto switchD_00022cf4_default;
    case 0x14:
      goto switchD_00022cf4_default;
    case 0x15:
      local_30 = pbVar12;
      break;
    default:
      goto switchD_00022cf4_default;
    }
LAB_00022d30:
    pbVar12 = local_30 + 1;
    iVar10 = (int)param_3 - (int)pbVar12;
    pbVar13 = pbVar12;
    if (iVar10 < 1) goto LAB_00021f7c;
    pbVar9 = pbVar12;
    switch(*(undefined1 *)(param_1 + (uint)local_30[1] + 0x48)) {
    case 5:
      goto LAB_00022dd8;
    case 6:
      local_30 = pbVar12;
      if (iVar10 < 3) goto LAB_000220a0;
      iVar10 = (**(code **)(param_1 + 0x164))(param_1);
      pbVar9 = local_30;
      if (iVar10 != 0) goto switchD_000224b8_default;
      pcVar4 = *(code **)(param_1 + 0x158);
      bVar11 = false;
      goto LAB_00022980;
    case 7:
      local_30 = pbVar12;
      if (iVar10 < 4) goto LAB_000220a0;
      iVar10 = (**(code **)(param_1 + 0x168))(param_1);
      pbVar9 = local_30;
      if (iVar10 != 0) goto switchD_000224b8_default;
      pcVar4 = *(code **)(param_1 + 0x15c);
      bVar11 = false;
      goto LAB_000229c0;
    case 8:
      goto switchD_000227dc_default;
    case 9:
      local_30 = pbVar12;
      goto LAB_00022d30;
    case 10:
      local_30 = pbVar12;
      goto LAB_00022d30;
    case 0xb:
      local_30 = pbVar12;
      goto LAB_00022e44;
    case 0xc:
      goto switchD_000227dc_default;
    case 0xd:
      goto switchD_000227dc_default;
    case 0xe:
      goto switchD_000227dc_default;
    case 0xf:
      goto switchD_000227dc_default;
    case 0x10:
      goto switchD_000227dc_default;
    case 0x11:
      local_30 = pbVar12;
      goto LAB_00022e58;
    case 0x12:
      goto switchD_000227dc_default;
    case 0x13:
      goto switchD_000227dc_default;
    case 0x14:
      goto switchD_000227dc_default;
    case 0x15:
      goto switchD_00022d5c_caseD_15;
    case 0x16:
      break;
    case 0x17:
      goto switchD_000227dc_default;
    case 0x18:
      break;
    case 0x19:
      goto switchD_000227dc_default;
    case 0x1a:
      goto switchD_000227dc_default;
    case 0x1b:
      goto switchD_000227dc_default;
    case 0x1c:
      goto switchD_000227dc_default;
    case 0x1d:
    default:
      goto switchD_000227dc_default;
    }
    local_30 = local_30 + 2;
    bVar11 = false;
    goto LAB_000227b8;
  case 0x16:
    break;
  case 0x17:
    if (bVar11) goto switchD_000227dc_default;
    pbVar13 = local_30 + 1;
    iVar10 = (int)param_3 - (int)pbVar13;
    if (iVar10 < 1) goto LAB_00021f7c;
    bVar2 = *(byte *)(param_1 + (uint)local_30[1] + 0x48);
    unaff_r8 = 0;
    if (bVar2 != 7) {
      if (bVar2 < 8) {
        if (bVar2 == 5) {
          local_30 = pbVar13;
          if (iVar10 == 1) goto LAB_000220a0;
          iVar10 = (**(code **)(param_1 + 0x160))(param_1,pbVar13);
          if ((iVar10 == 0) &&
             (iVar10 = (**(code **)(param_1 + 0x154))(param_1,local_30), iVar10 != 0)) {
            local_30 = local_30 + 2;
            goto LAB_00022a4c;
          }
        }
        else {
          if (bVar2 != 6) goto LAB_00022a24;
          local_30 = pbVar13;
          if (iVar10 < 3) goto LAB_000220a0;
          iVar10 = (**(code **)(param_1 + 0x164))(param_1,pbVar13);
          if ((iVar10 == 0) &&
             (iVar10 = (**(code **)(param_1 + 0x158))(param_1,local_30), iVar10 != 0)) {
            local_30 = local_30 + 3;
            goto LAB_00022a4c;
          }
        }
LAB_00022a74:
        *param_4 = local_30;
      }
      else {
        if ((bVar2 == 0x18) || ((bVar2 != 0x1d && (bVar2 == 0x16)))) {
          local_30 = local_30 + 2;
          goto LAB_00022a4c;
        }
LAB_00022a24:
        *param_4 = pbVar13;
        local_30 = pbVar13;
      }
      goto LAB_00022208;
    }
    local_30 = pbVar13;
    if (iVar10 < 4) goto LAB_000220a0;
    iVar10 = (**(code **)(param_1 + 0x168))(param_1,pbVar13);
    if ((iVar10 != 0) || (iVar10 = (**(code **)(param_1 + 0x15c))(param_1,local_30), iVar10 == 0))
    goto LAB_00022a74;
    local_30 = local_30 + 4;
LAB_00022a4c:
    bVar11 = true;
    goto LAB_000227b8;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    goto switchD_000227dc_default;
  case 0x1d:
  default:
    goto switchD_000227dc_default;
  }
  local_30 = local_30 + 1;
  goto LAB_000227b8;
code_r0x00022c94:
  local_30 = local_30 + 4;
  goto LAB_00022bcc;
switchD_00022d5c_caseD_15:
  local_30 = pbVar12;
  goto LAB_00022d30;
LAB_00022dd8:
  local_30 = pbVar12;
  if (iVar10 == 1) goto LAB_000220a0;
  iVar10 = (**(code **)(param_1 + 0x160))(param_1);
  pbVar9 = local_30;
  if (iVar10 != 0) goto switchD_000224b8_default;
  pcVar4 = *(code **)(param_1 + 0x154);
  bVar11 = false;
LAB_0002293c:
  iVar10 = (*pcVar4)(param_1,local_30);
  pbVar9 = local_30;
  if (iVar10 == 0) goto switchD_000224b8_default;
  local_30 = local_30 + 2;
  goto LAB_000227b8;
}



/* ===== FUN_00023460 @ 00023460 size=276 ===== */

undefined4 FUN_00023460(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  byte *pbVar2;
  int extraout_r2;
  undefined4 *extraout_r3;
  byte *pbVar3;
  int iVar4;
  
  pbVar2 = (byte *)(param_2 + 2);
  do {
    while( true ) {
      while( true ) {
        pbVar3 = pbVar2;
        iVar4 = param_3 - (int)pbVar3;
        if (iVar4 < 2) {
          return 0xffffffff;
        }
        if (pbVar3[1] == 0) {
          uVar1 = (uint)*(byte *)(param_1 + (uint)*pbVar3 + 0x48);
        }
        else {
          uVar1 = FUN_0001e934();
          param_3 = extraout_r2;
          param_4 = extraout_r3;
        }
        if (uVar1 != 6) break;
        if (iVar4 == 2) {
          return 0xfffffffe;
        }
        pbVar2 = pbVar3 + 3;
      }
      if (6 < (int)uVar1) break;
      if ((-1 < (int)uVar1) && ((int)uVar1 < 2)) goto LAB_00023550;
LAB_000234b8:
      pbVar2 = pbVar3 + 2;
    }
    if (uVar1 == 8) {
LAB_00023550:
      *param_4 = pbVar3;
      return 0;
    }
    if ((int)uVar1 < 8) {
      if (iVar4 < 4) {
        return 0xfffffffe;
      }
      pbVar2 = pbVar3 + 4;
    }
    else {
      if (uVar1 != 0x1b) goto LAB_000234b8;
      pbVar2 = pbVar3 + 2;
      if (param_3 - (int)pbVar2 < 2) {
        return 0xffffffff;
      }
      if ((pbVar3[3] == 0) && (pbVar3[2] == 0x2d)) {
        if (param_3 - (int)(pbVar3 + 4) < 2) {
          return 0xffffffff;
        }
        if ((pbVar3[5] == 0) && (pbVar3[4] == 0x3e)) {
          *param_4 = pbVar3 + 6;
          return 0xd;
        }
        *param_4 = pbVar3 + 4;
        return 0;
      }
    }
  } while( true );
}



/* ===== FUN_00023574 @ 00023574 size=160 ===== */

undefined4 FUN_00023574(char *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  
  *param_3 = 0xb;
  if ((param_2 - (int)param_1 == 6) && (param_1[1] == '\0')) {
    if (*param_1 == 'X') {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if (*param_1 != 'x') {
        return 1;
      }
    }
    if (param_1[3] == '\0') {
      if (param_1[2] == 'M') {
        bVar1 = true;
      }
      else if (param_1[2] != 'm') {
        return 1;
      }
      if (param_1[5] == '\0') {
        if (param_1[4] == 'L') {
          return 0;
        }
        if (param_1[4] == 'l') {
          if (bVar1) {
            return 0;
          }
          *param_3 = 0xc;
        }
      }
    }
  }
  return 1;
}



/* ===== FUN_00023614 @ 00023614 size=832 ===== */

void FUN_00023614(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int extraout_r2;
  uint extraout_r2_00;
  uint uVar3;
  uint extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  int local_30;
  int local_2c;
  int iStack_28;
  
  iVar6 = param_3 - (int)param_2;
  piVar8 = *(int **)(DAT_00023954 + 0x23630 + DAT_00023958);
  local_2c = *piVar8;
  local_30 = param_1;
  iStack_28 = param_3;
  if (iVar6 < 2) {
LAB_00023644:
    iVar6 = -1;
    goto LAB_00023648;
  }
  uVar3 = (uint)*param_2;
  if (param_2[1] == 0) {
    uVar1 = (uint)*(byte *)(param_1 + uVar3 + 0x48);
    iVar9 = 0;
  }
  else {
    uVar1 = FUN_0001e934(param_2[1],uVar3);
    iVar9 = extraout_r2;
    uVar3 = extraout_r3;
  }
  if (uVar1 == 0x16) {
LAB_000236ec:
    iVar6 = DAT_00023960 + 0x236fc;
    pbVar4 = param_2;
LAB_000236f8:
    pbVar7 = pbVar4 + 2;
    iVar9 = param_3 - (int)pbVar7;
    if (iVar9 < 2) goto LAB_00023644;
    uVar1 = (uint)pbVar4[3];
    uVar3 = (uint)*pbVar7;
    if (uVar1 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + uVar3 + 0x48);
    }
    else {
      uVar2 = FUN_0001e934(uVar1,uVar3);
      uVar3 = extraout_r2_00;
      iVar6 = extraout_r3_00;
    }
    pbVar5 = pbVar7;
    switch(uVar2) {
    case 5:
      goto LAB_000237f4;
    case 6:
      if (iVar9 != 2) goto LAB_000237f4;
      goto LAB_000237a4;
    case 7:
      if (iVar9 < 4) goto LAB_000237a4;
      goto LAB_000237f4;
    case 8:
      break;
    case 9:
      goto LAB_00023808;
    case 10:
      goto LAB_00023808;
    case 0xb:
      break;
    case 0xc:
      break;
    case 0xd:
      break;
    case 0xe:
      break;
    case 0xf:
      iVar6 = FUN_00023574(param_2,pbVar7,&local_30);
      if (iVar6 == 0) goto LAB_000237dc;
      pbVar5 = pbVar4 + 4;
      if (param_3 - (int)pbVar5 < 2) goto LAB_00023644;
      if ((pbVar4[5] == 0) && (pbVar4[4] == 0x3e)) goto LAB_000238e4;
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
LAB_00023808:
      iVar6 = FUN_00023574(param_2,pbVar7,&local_30);
      if (iVar6 != 0) {
        pbVar4 = pbVar4 + 4;
        goto LAB_00023824;
      }
      goto LAB_000237dc;
    case 0x16:
      pbVar4 = pbVar7;
      goto LAB_000236f8;
    case 0x17:
      break;
    case 0x18:
      pbVar4 = pbVar7;
      goto LAB_000236f8;
    case 0x19:
      pbVar4 = pbVar7;
      goto LAB_000236f8;
    case 0x1a:
      pbVar4 = pbVar7;
      goto LAB_000236f8;
    case 0x1b:
      pbVar4 = pbVar7;
      goto LAB_000236f8;
    case 0x1c:
      break;
    case 0x1d:
      goto LAB_000237b8;
    }
    *param_4 = pbVar5;
    goto LAB_000236a8;
  }
  if ((int)uVar1 < 0x17) {
    if (uVar1 == 6) {
      if (iVar6 == 2) goto LAB_000237a4;
    }
    else if ((uVar1 == 7) && (iVar6 < 4)) {
LAB_000237a4:
      iVar6 = -2;
      goto LAB_00023648;
    }
  }
  else if ((uVar1 == 0x18) ||
          ((uVar1 == 0x1d &&
           ((*(uint *)(DAT_0002395c + 0x236cc +
                      ((uVar3 >> 5) + (uint)*(byte *)(DAT_0002395c + 0x236cc + iVar9 + 0x600) * 8) *
                      4) >> (uVar3 & 0x1f) & 1) != 0)))) goto LAB_000236ec;
  *param_4 = param_2;
LAB_000236a8:
  iVar6 = 0;
  goto LAB_00023648;
LAB_000237b8:
  pbVar4 = pbVar7;
  if ((*(uint *)(iVar6 + ((uVar3 >> 5) + (uint)*(byte *)(iVar6 + uVar1 + 0x500) * 8) * 4) >>
       (uVar3 & 0x1f) & 1) == 0) goto LAB_000237dc;
  goto LAB_000236f8;
LAB_000237dc:
  *param_4 = pbVar7;
  iVar6 = 0;
  goto LAB_00023648;
LAB_00023824:
  pbVar7 = pbVar4;
  iVar6 = param_3 - (int)pbVar7;
  if (iVar6 < 2) goto LAB_00023644;
  if (pbVar7[1] == 0) {
    uVar3 = (uint)*(byte *)(param_1 + (uint)*pbVar7 + 0x48);
  }
  else {
    uVar3 = FUN_0001e934();
    iVar6 = extraout_r3_01;
  }
  switch(uVar3) {
  case 0:
    goto LAB_000237f4;
  case 1:
    goto LAB_000237f4;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    if (iVar6 == 2) goto LAB_000237a4;
    pbVar4 = pbVar7 + 3;
    goto LAB_00023824;
  case 7:
    if (iVar6 < 4) goto LAB_000237a4;
    pbVar4 = pbVar7 + 4;
    goto LAB_00023824;
  case 8:
LAB_000237f4:
    *param_4 = pbVar7;
    goto LAB_000236a8;
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
    pbVar4 = pbVar7 + 2;
    if (1 < param_3 - (int)pbVar4) goto code_r0x000238cc;
    goto LAB_00023644;
  }
  pbVar4 = pbVar7 + 2;
  goto LAB_00023824;
code_r0x000238cc:
  if ((pbVar7[3] != 0) || (pbVar7[2] != 0x3e)) goto LAB_00023824;
LAB_000238e4:
  *param_4 = pbVar7 + 4;
  iVar6 = local_30;
LAB_00023648:
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}



/* ===== FUN_00023964 @ 00023964 size=4444 ===== */

void FUN_00023964(int param_1,byte *param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *extraout_r2;
  byte *extraout_r2_00;
  byte *extraout_r2_01;
  byte *extraout_r2_02;
  byte *extraout_r2_03;
  byte *extraout_r2_04;
  byte *extraout_r2_05;
  byte *extraout_r2_06;
  int extraout_r2_07;
  byte *extraout_r2_08;
  byte *extraout_r2_09;
  byte *extraout_r2_10;
  byte *pbVar7;
  byte *extraout_r2_11;
  int *piVar8;
  uint extraout_r3;
  byte *extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  int extraout_r3_03;
  uint extraout_r3_04;
  uint extraout_r3_05;
  int extraout_r3_06;
  byte *extraout_r3_07;
  uint extraout_r3_08;
  byte *extraout_r3_09;
  int extraout_r3_10;
  byte *extraout_r3_11;
  uint extraout_r3_12;
  byte *extraout_r3_13;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte *local_30;
  int local_2c;
  
  piVar8 = *(int **)(DAT_00024904 + 0x23984 + DAT_00024908);
  local_2c = *piVar8;
  if (param_3 <= param_2) {
    uVar9 = 0xfffffffc;
    goto LAB_00023b30;
  }
  if (((int)param_3 - (int)param_2 & 1U) != 0) {
    uVar9 = (int)param_3 - (int)param_2 & 0xfffffffe;
    if (uVar9 == 0) {
      uVar9 = 0xffffffff;
      goto LAB_00023b30;
    }
    param_3 = param_2 + uVar9;
  }
  if (param_2[1] == 0) {
    uVar13 = (uint)*(byte *)(param_1 + (uint)*param_2 + 0x48);
  }
  else {
    uVar13 = FUN_0001e934();
  }
  switch(uVar13) {
  case 0:
    goto LAB_000249f4;
  case 1:
    goto LAB_000249f4;
  case 2:
    pbVar7 = param_2 + 2;
    iVar10 = (int)param_3 - (int)pbVar7;
    if (iVar10 < 2) {
      uVar9 = 0xffffffff;
      goto LAB_00023b30;
    }
    uVar11 = (uint)param_2[3];
    uVar9 = (uint)param_2[2];
    if (uVar11 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + uVar9 + 0x48);
    }
    else {
      uVar2 = FUN_0001e934(uVar11,uVar9);
      pbVar7 = extraout_r2;
      uVar9 = extraout_r3;
    }
    break;
  case 3:
    uVar9 = FUN_0001f06c(param_1,param_2 + 2,param_3,param_4);
    goto LAB_00023b30;
  case 4:
    pbVar7 = param_2 + 2;
    if ((int)param_3 - (int)pbVar7 < 2) {
      uVar9 = 0xfffffffb;
      goto LAB_00023b30;
    }
    if ((param_2[3] == 0) && (param_2[2] == 0x5d)) {
      if ((int)param_3 - (int)(param_2 + 4) < 2) {
        uVar9 = 0xfffffffb;
        goto LAB_00023b30;
      }
      if ((param_2[5] == 0) && (param_2[4] == 0x3e)) {
        *param_4 = param_2 + 4;
        uVar9 = 0;
        goto LAB_00023b30;
      }
    }
    goto LAB_00024994;
  case 5:
    if ((int)param_3 - (int)param_2 < 2) {
      uVar9 = 0xfffffffe;
      goto LAB_00023b30;
    }
  default:
    pbVar7 = param_2 + 2;
LAB_00024994:
    iVar10 = (int)param_3 - (int)pbVar7;
    if (iVar10 < 2) goto code_r0x000249a0;
    if (pbVar7[1] == 0) {
      uVar9 = (uint)*(byte *)(param_1 + (uint)*pbVar7 + 0x48);
    }
    else {
      uVar9 = FUN_0001e934();
      pbVar7 = extraout_r2_11;
    }
    switch(uVar9) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      if (3 < iVar10) {
        if ((pbVar7[3] == 0) && (pbVar7[2] == 0x5d)) {
          if (iVar10 < 6) break;
          if ((pbVar7[5] != 0) || (pbVar7[4] != 0x3e)) goto switchD_00024a24_default;
          *param_4 = pbVar7 + 4;
          uVar9 = 0;
          goto LAB_00023b30;
        }
        goto switchD_00024a24_default;
      }
      break;
    case 5:
    default:
switchD_00024a24_default:
      pbVar7 = pbVar7 + 2;
      goto LAB_00024994;
    case 6:
      if (iVar10 == 2) {
        *param_4 = pbVar7;
        goto LAB_00023b30;
      }
      pbVar7 = pbVar7 + 3;
      goto LAB_00024994;
    case 7:
      if (3 < iVar10) goto code_r0x00024a7c;
      *param_4 = pbVar7;
      uVar9 = 6;
      goto LAB_00023b30;
    case 8:
      break;
    case 9:
      break;
    case 10:
    }
    *param_4 = pbVar7;
    uVar9 = 6;
    goto LAB_00023b30;
  case 6:
    if ((int)param_3 - (int)param_2 < 3) {
      uVar9 = 0xfffffffe;
      goto LAB_00023b30;
    }
    pbVar7 = param_2 + 3;
    goto LAB_00024994;
  case 7:
    if ((int)param_3 - (int)param_2 < 4) {
      uVar9 = 0xfffffffe;
      goto LAB_00023b30;
    }
    pbVar7 = param_2 + 4;
    goto LAB_00024994;
  case 8:
LAB_000249f4:
    *param_4 = param_2;
    uVar9 = 0;
    goto LAB_00023b30;
  case 9:
    pbVar7 = param_2 + 2;
    if ((int)param_3 - (int)pbVar7 < 2) {
      uVar9 = 0xfffffffd;
    }
    else {
      if (param_2[3] == 0) {
        uVar9 = (uint)*(byte *)(param_1 + (uint)param_2[2] + 0x48);
      }
      else {
        uVar9 = FUN_0001e934();
        pbVar7 = extraout_r3_13;
      }
      if (uVar9 == 10) {
        pbVar7 = param_2 + 4;
      }
      *param_4 = pbVar7;
      uVar9 = 7;
    }
    goto LAB_00023b30;
  case 10:
    *param_4 = param_2 + 2;
    uVar9 = 7;
    goto LAB_00023b30;
  }
  switch(uVar2) {
  case 5:
    *param_4 = pbVar7;
    uVar9 = 0;
    goto LAB_00023b30;
  case 6:
    if (iVar10 == 2) {
      uVar9 = 0xfffffffe;
    }
    else {
      *param_4 = pbVar7;
      uVar9 = 0;
    }
    goto LAB_00023b30;
  case 7:
    if (iVar10 < 4) {
      uVar9 = 0xfffffffe;
    }
    else {
      *param_4 = pbVar7;
      uVar9 = 0;
    }
    goto LAB_00023b30;
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
    uVar9 = FUN_00023614(param_1,param_2 + 4,param_3,param_4);
    goto LAB_00023b30;
  case 0x10:
    pbVar7 = param_2 + 4;
    if ((int)param_3 - (int)pbVar7 < 2) {
      uVar9 = 0xffffffff;
    }
    else {
      if (param_2[5] == 0) {
        uVar9 = (uint)*(byte *)(param_1 + (uint)param_2[4] + 0x48);
      }
      else {
        uVar9 = FUN_0001e934();
        pbVar7 = extraout_r3_00;
      }
      if (uVar9 == 0x14) {
        pbVar7 = param_2 + 6;
        if ((int)param_3 - (int)pbVar7 < 0xc) {
          uVar9 = 0xffffffff;
        }
        else {
          pbVar6 = (byte *)(DAT_00024918 + 0x23c30);
          do {
            if ((pbVar7[1] != 0) || (*pbVar7 != *pbVar6)) {
              *param_4 = pbVar7;
              uVar9 = 0;
              goto LAB_00023b30;
            }
            pbVar7 = pbVar7 + 2;
            pbVar6 = pbVar6 + 1;
          } while (param_2 + 0x12 != pbVar7);
          *param_4 = param_2 + 0x12;
          uVar9 = 8;
        }
      }
      else if (uVar9 == 0x1b) {
        pbVar7 = param_2 + 6;
        if ((int)param_3 - (int)pbVar7 < 2) {
          uVar9 = 0xffffffff;
        }
        else if ((param_2[7] == 0) && (param_2[6] == 0x2d)) {
          uVar9 = FUN_00023460(param_1,pbVar7,param_3,param_4);
        }
        else {
          *param_4 = pbVar7;
          uVar9 = 0;
        }
      }
      else {
        *param_4 = pbVar7;
        uVar9 = 0;
      }
    }
    goto LAB_00023b30;
  case 0x11:
    pbVar7 = param_2 + 4;
    iVar10 = (int)param_3 - (int)pbVar7;
    if (iVar10 < 2) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar13 = (uint)param_2[5];
      uVar9 = (uint)param_2[4];
      if (uVar13 == 0) {
        uVar11 = (uint)*(byte *)(param_1 + uVar9 + 0x48);
      }
      else {
        uVar11 = FUN_0001e934(uVar13,uVar9);
        pbVar7 = extraout_r2_00;
        uVar9 = extraout_r3_01;
      }
      if (uVar11 == 7) {
        if (iVar10 < 4) {
          uVar9 = 0xfffffffe;
        }
        else {
          *param_4 = pbVar7;
          uVar9 = 0;
        }
      }
      else {
        if ((int)uVar11 < 8) {
          if (uVar11 == 5) {
            *param_4 = pbVar7;
            uVar9 = 0;
            goto LAB_00023b30;
          }
          if (uVar11 == 6) {
            if (iVar10 == 2) {
              uVar9 = 0xfffffffe;
            }
            else {
              *param_4 = pbVar7;
              uVar9 = 0;
            }
            goto LAB_00023b30;
          }
        }
        else {
          if (uVar11 == 0x18) {
LAB_00023d08:
            param_2 = param_2 + 6;
            iVar10 = DAT_0002491c + 0x23d18;
LAB_00023d14:
            iVar4 = (int)param_3 - (int)param_2;
            if (iVar4 < 2) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar13 = (uint)param_2[1];
              uVar9 = (uint)*param_2;
              if (uVar13 == 0) {
                uVar11 = (uint)*(byte *)(param_1 + uVar9 + 0x48);
              }
              else {
                uVar11 = FUN_0001e934(uVar13,uVar9);
                param_2 = extraout_r2_01;
                uVar9 = extraout_r3_02;
              }
              switch(uVar11) {
              case 5:
                *param_4 = param_2;
                uVar9 = 0;
                goto LAB_00023b30;
              case 6:
                if (iVar4 == 2) {
                  uVar9 = 0xfffffffe;
                }
                else {
                  *param_4 = param_2;
                  uVar9 = 0;
                }
                goto LAB_00023b30;
              case 7:
                if (iVar4 < 4) {
                  uVar9 = 0xfffffffe;
                }
                else {
                  *param_4 = param_2;
                  uVar9 = 0;
                }
                goto LAB_00023b30;
              case 8:
                break;
              case 9:
                goto LAB_00023ef8;
              case 10:
                goto LAB_00023ef8;
              case 0xb:
                uVar9 = 5;
                *param_4 = param_2 + 2;
                goto LAB_00023b30;
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
                break;
              case 0x12:
                break;
              case 0x13:
                break;
              case 0x14:
                break;
              case 0x15:
                goto LAB_00023ef8;
              case 0x16:
                goto LAB_00023f2c;
              case 0x17:
                goto LAB_00023f2c;
              case 0x18:
                goto LAB_00023f2c;
              case 0x19:
                goto LAB_00023f2c;
              case 0x1a:
                goto LAB_00023f2c;
              case 0x1b:
                goto LAB_00023f2c;
              case 0x1c:
                break;
              case 0x1d:
                if ((*(uint *)(iVar10 + ((uVar9 >> 5) + (uint)*(byte *)(iVar10 + uVar13 + 0x500) * 8
                                        ) * 4) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_00023f2c;
                *param_4 = param_2;
                uVar9 = 0;
                goto LAB_00023b30;
              }
              *param_4 = param_2;
              uVar9 = 0;
            }
            goto LAB_00023b30;
          }
          if (uVar11 == 0x1d) {
            if ((*(uint *)(DAT_00024920 + 0x23d38 +
                          ((uVar9 >> 5) +
                          (uint)*(byte *)(DAT_00024920 + 0x23d38 + uVar13 + 0x600) * 8) * 4) >>
                 (uVar9 & 0x1f) & 1) == 0) {
              *param_4 = pbVar7;
              uVar9 = 0;
              goto LAB_00023b30;
            }
            goto LAB_00023d08;
          }
          if (uVar11 == 0x16) goto LAB_00023d08;
        }
        *param_4 = pbVar7;
        uVar9 = 0;
      }
    }
    goto LAB_00023b30;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    goto LAB_00023af4;
  case 0x17:
    break;
  case 0x18:
LAB_00023af4:
    param_2 = param_2 + 4;
    iVar10 = 0;
    iVar4 = DAT_00024910 + 0x23b08;
    iVar5 = DAT_00024914 + 0x23b14;
LAB_00023b14:
    iVar12 = (int)param_3 - (int)param_2;
    if (iVar12 < 2) goto code_r0x00023b20;
    uVar11 = (uint)param_2[1];
    bVar1 = *param_2;
    uVar9 = (uint)bVar1;
    if (uVar11 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + uVar9 + 0x48);
    }
    else {
      uVar2 = FUN_0001e934(uVar11,uVar9);
      param_2 = extraout_r2_03;
      iVar10 = extraout_r3_03;
    }
    pbVar7 = param_2;
    switch(uVar2) {
    case 5:
      *param_4 = param_2;
      uVar9 = 0;
      goto LAB_00023b30;
    case 6:
      if (iVar12 == 2) {
        uVar9 = 0xfffffffe;
      }
      else {
        *param_4 = param_2;
        uVar9 = 0;
      }
      goto LAB_00023b30;
    case 7:
      if (iVar12 < 4) {
        uVar9 = 0xfffffffe;
      }
      else {
        *param_4 = param_2;
        uVar9 = 0;
      }
      goto LAB_00023b30;
    case 8:
      break;
    case 9:
      goto LAB_00024804;
    case 10:
      goto LAB_00024804;
    case 0xb:
      goto LAB_00024828;
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
      goto LAB_00024838;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      goto LAB_00024804;
    case 0x16:
      goto LAB_0002400c;
    case 0x17:
      if (iVar10 != 0) {
        *param_4 = param_2;
        uVar9 = 0;
        goto LAB_00023b30;
      }
      pbVar7 = param_2 + 2;
      iVar10 = (int)param_3 - (int)pbVar7;
      if (iVar10 < 2) {
        uVar9 = 0xffffffff;
        goto LAB_00023b30;
      }
      uVar2 = (uint)param_2[3];
      bVar1 = param_2[2];
      uVar11 = (uint)bVar1;
      if (uVar2 == 0) {
        uVar3 = (uint)*(byte *)(param_1 + uVar11 + 0x48);
        uVar9 = 0;
      }
      else {
        uVar3 = FUN_0001e934(uVar2,uVar11);
        param_2 = extraout_r2_04;
        uVar9 = extraout_r3_04;
      }
      if (uVar3 == 7) {
        if (iVar10 < 4) {
          uVar9 = 0xfffffffe;
        }
        else {
          *param_4 = pbVar7;
        }
        goto LAB_00023b30;
      }
      if ((int)uVar3 < 8) {
        if (uVar3 == 5) {
          *param_4 = pbVar7;
        }
        else if (uVar3 == 6) {
          if (iVar10 == 2) {
            uVar9 = 0xfffffffe;
          }
          else {
            *param_4 = pbVar7;
          }
        }
        else {
LAB_000240ac:
          *param_4 = pbVar7;
        }
        goto LAB_00023b30;
      }
      if (uVar3 != 0x18) {
        if (uVar3 == 0x1d) {
          if ((*(uint *)(iVar4 + ((uint)(bVar1 >> 5) + (uint)*(byte *)(iVar4 + uVar2 + 0x600) * 8) *
                                 4) >> (uVar11 & 0x1f) & 1) != 0) goto LAB_000240cc;
          *param_4 = pbVar7;
          goto LAB_00023b30;
        }
        if (uVar3 != 0x16) goto LAB_000240ac;
      }
LAB_000240cc:
      param_2 = param_2 + 4;
      iVar10 = 1;
      goto LAB_00023b14;
    case 0x18:
      goto LAB_0002400c;
    case 0x19:
      goto LAB_0002400c;
    case 0x1a:
      goto LAB_0002400c;
    case 0x1b:
      goto LAB_0002400c;
    case 0x1c:
      break;
    case 0x1d:
      if ((*(uint *)(iVar5 + ((uint)(bVar1 >> 5) + (uint)*(byte *)(iVar5 + uVar11 + 0x500) * 8) * 4)
           >> (uVar9 & 0x1f) & 1) == 0) {
        *param_4 = param_2;
        uVar9 = 0;
        goto LAB_00023b30;
      }
LAB_0002400c:
      param_2 = param_2 + 2;
      goto LAB_00023b14;
    }
    *param_4 = param_2;
    uVar9 = 0;
    goto LAB_00023b30;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    if ((*(uint *)(DAT_0002490c + 0x23ad4 +
                  ((uVar9 >> 5) + (uint)*(byte *)(DAT_0002490c + 0x23ad4 + uVar11 + 0x600) * 8) * 4)
         >> (uVar9 & 0x1f) & 1) != 0) goto LAB_00023af4;
    *param_4 = pbVar7;
    uVar9 = 0;
    goto LAB_00023b30;
  }
  *param_4 = pbVar7;
  uVar9 = 0;
LAB_00023b30:
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
code_r0x000249a0:
  *param_4 = pbVar7;
  uVar9 = 6;
  goto LAB_00023b30;
code_r0x00024a7c:
  pbVar7 = pbVar7 + 4;
  goto LAB_00024994;
code_r0x00023b20:
  uVar9 = 0xffffffff;
  goto LAB_00023b30;
LAB_00024804:
  param_2 = pbVar7 + 2;
  iVar10 = (int)param_3 - (int)param_2;
  if (1 < iVar10) {
    uVar11 = (uint)pbVar7[3];
    uVar9 = (uint)*param_2;
    if (uVar11 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + uVar9 + 0x48);
    }
    else {
      uVar2 = FUN_0001e934(uVar11,uVar9);
      param_2 = extraout_r2_05;
      uVar9 = extraout_r3_05;
    }
    pbVar7 = param_2;
    switch(uVar2) {
    case 5:
      *param_4 = param_2;
      uVar9 = 0;
      goto LAB_00023b30;
    case 6:
      if (iVar10 == 2) {
        uVar9 = 0xfffffffe;
      }
      else {
        *param_4 = param_2;
        uVar9 = 0;
      }
      goto LAB_00023b30;
    case 7:
      if (iVar10 < 4) {
        uVar9 = 0xfffffffe;
      }
      else {
        *param_4 = param_2;
        uVar9 = 0;
      }
      goto LAB_00023b30;
    case 8:
      break;
    case 9:
      goto LAB_00024804;
    case 10:
      goto LAB_00024804;
    case 0xb:
LAB_00024828:
      *param_4 = param_2 + 2;
      uVar9 = uVar13;
      goto LAB_00023b30;
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
LAB_00024838:
      if ((int)param_3 - (int)(param_2 + 2) < 2) {
        uVar9 = 0xffffffff;
      }
      else if ((param_2[3] == 0) && (param_2[2] == 0x3e)) {
        *param_4 = param_2 + 4;
        uVar9 = 4;
      }
      else {
        *param_4 = param_2 + 2;
        uVar9 = 0;
      }
      goto LAB_00023b30;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      goto switchD_00024158_caseD_15;
    case 0x16:
      goto LAB_000241f4;
    case 0x17:
      break;
    case 0x18:
      goto LAB_000241f4;
    case 0x19:
      break;
    case 0x1a:
      break;
    case 0x1b:
      break;
    case 0x1c:
      break;
    case 0x1d:
      if ((*(uint *)(DAT_00024924 + 0x241d4 +
                    ((uVar9 >> 5) + (uint)*(byte *)(DAT_00024924 + 0x241d4 + uVar11 + 0x600) * 8) *
                    4) >> (uVar9 & 0x1f) & 1) == 0) {
        *param_4 = param_2;
        uVar9 = 0;
        goto LAB_00023b30;
      }
LAB_000241f4:
      iVar10 = 0;
      local_30 = param_2 + 2;
      iVar4 = DAT_00024928 + 0x24208;
      goto LAB_00024208;
    }
    *param_4 = param_2;
    uVar9 = 0;
    goto LAB_00023b30;
  }
  goto code_r0x00024814;
LAB_00024208:
  iVar5 = (int)param_3 - (int)local_30;
  pbVar7 = local_30;
  if (iVar5 < 2) goto LAB_000243ac;
  uVar13 = (uint)local_30[1];
  bVar1 = *local_30;
  uVar9 = (uint)bVar1;
  if (uVar13 == 0) {
    uVar11 = (uint)*(byte *)(param_1 + uVar9 + 0x48);
    pbVar6 = local_30;
  }
  else {
    uVar11 = FUN_0001e934(uVar13,uVar9);
    pbVar6 = extraout_r2_06;
    iVar10 = extraout_r3_06;
  }
  switch(uVar11) {
  case 5:
    *param_4 = pbVar6;
    uVar9 = 0;
    goto LAB_00023b30;
  case 6:
    if (iVar5 == 2) goto LAB_0002436c;
    *param_4 = pbVar6;
    uVar9 = 0;
    goto LAB_00023b30;
  case 7:
    if (iVar5 < 4) {
LAB_0002436c:
      uVar9 = 0xfffffffe;
    }
    else {
      *param_4 = pbVar6;
      uVar9 = 0;
    }
    goto LAB_00023b30;
  case 8:
    break;
  case 9:
    goto LAB_000242b0;
  case 10:
    goto LAB_000242b0;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    goto LAB_00024480;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
LAB_000242b0:
    iVar10 = 1;
    while( true ) {
      pbVar7 = local_30 + 2;
      if ((int)param_3 - (int)pbVar7 < 2) goto LAB_000243ac;
      if (local_30[3] == 0) {
        uVar9 = (uint)*(byte *)(param_1 + (uint)local_30[2] + 0x48);
        local_30 = pbVar7;
      }
      else {
        local_30 = pbVar7;
        uVar9 = FUN_0001e934();
        iVar10 = extraout_r2_07;
        pbVar7 = extraout_r3_07;
      }
      if (uVar9 == 0xe) break;
      if ((0x15 < uVar9) || ((DAT_0002492c & iVar10 << (uVar9 & 0xff)) == 0)) {
        *param_4 = pbVar7;
        uVar9 = 0;
        goto LAB_00023b30;
      }
    }
LAB_00024480:
    while( true ) {
      pbVar7 = local_30 + 2;
      if ((int)param_3 - (int)pbVar7 < 2) goto LAB_000243ac;
      if (local_30[3] == 0) {
        uVar13 = (uint)*(byte *)(param_1 + (uint)local_30[2] + 0x48);
        pbVar6 = local_30;
        local_30 = pbVar7;
      }
      else {
        local_30 = pbVar7;
        uVar13 = FUN_0001e934();
        pbVar7 = extraout_r2_09;
        pbVar6 = extraout_r3_09;
      }
      if (uVar13 - 0xc < 2) break;
      if ((0x15 < uVar13) || ((DAT_0002492c & 1 << (uVar13 & 0xff)) == 0)) {
        *param_4 = pbVar7;
        uVar9 = 0;
        goto LAB_00023b30;
      }
    }
    local_30 = pbVar6 + 4;
LAB_000244f0:
    pbVar6 = local_30;
    iVar10 = (int)param_3 - (int)local_30;
    pbVar7 = local_30;
    if (iVar10 < 2) goto LAB_000243ac;
    if (local_30[1] == 0) {
      uVar9 = (uint)*(byte *)(param_1 + (uint)*local_30 + 0x48);
    }
    else {
      uVar9 = FUN_0001e934();
      iVar10 = extraout_r3_10;
    }
    if (uVar13 != uVar9) {
      switch(uVar9) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        *param_4 = pbVar6;
        uVar9 = 0;
        goto LAB_00023b30;
      case 3:
        uVar9 = FUN_0001f06c(param_1,pbVar6 + 2,param_3,&local_30);
        if ((int)uVar9 < 1) {
          if (uVar9 == 0) {
            *param_4 = local_30;
          }
          goto LAB_00023b30;
        }
        goto LAB_000244f0;
      case 4:
      default:
switchD_00024528_default:
        local_30 = pbVar6 + 2;
        goto LAB_000244f0;
      case 5:
        goto switchD_00024528_default;
      case 6:
        if (iVar10 == 2) goto LAB_0002436c;
        local_30 = pbVar6 + 3;
        goto LAB_000244f0;
      case 7:
        if (3 < iVar10) goto code_r0x00024570;
        goto LAB_0002436c;
      case 8:
      }
      *param_4 = pbVar6;
      uVar9 = 0;
      goto LAB_00023b30;
    }
    pbVar7 = pbVar6 + 2;
    if ((int)param_3 - (int)pbVar7 < 2) goto LAB_000243ac;
    local_30 = pbVar7;
    if (pbVar6[3] == 0) {
      uVar9 = (uint)*(byte *)(param_1 + (uint)pbVar6[2] + 0x48);
    }
    else {
      uVar9 = FUN_0001e934();
      pbVar7 = extraout_r3_11;
    }
    switch(uVar9) {
    case 9:
      goto LAB_00024640;
    case 10:
      goto LAB_00024640;
    case 0xb:
LAB_0002475c:
      *param_4 = local_30 + 2;
      uVar9 = 1;
      goto LAB_00023b30;
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
LAB_00024770:
      pbVar7 = local_30 + 2;
      if (1 < (int)param_3 - (int)pbVar7) {
        if ((local_30[3] == 0) && (local_30[2] == 0x3e)) {
          *param_4 = local_30 + 4;
          uVar9 = 3;
          local_30 = pbVar7;
        }
        else {
          *param_4 = pbVar7;
          uVar9 = 0;
          local_30 = pbVar7;
        }
        goto LAB_00023b30;
      }
      goto LAB_000243ac;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
LAB_00024640:
      pbVar6 = local_30;
      pbVar7 = local_30 + 2;
      iVar10 = (int)param_3 - (int)pbVar7;
      if (iVar10 < 2) goto LAB_000243ac;
      uVar13 = (uint)local_30[3];
      uVar9 = (uint)local_30[2];
      local_30 = pbVar7;
      if (uVar13 == 0) {
        uVar11 = (uint)*(byte *)(param_1 + uVar9 + 0x48);
      }
      else {
        uVar11 = FUN_0001e934(uVar13,uVar9);
        pbVar7 = extraout_r2_10;
        uVar9 = extraout_r3_12;
      }
      switch(uVar11) {
      case 5:
        *param_4 = pbVar7;
        uVar9 = 0;
        goto LAB_00023b30;
      case 6:
        if (iVar10 == 2) goto LAB_0002436c;
        *param_4 = pbVar7;
        uVar9 = 0;
        goto LAB_00023b30;
      case 7:
        if (iVar10 < 4) goto LAB_0002436c;
        *param_4 = pbVar7;
        uVar9 = 0;
        goto LAB_00023b30;
      case 8:
        break;
      case 9:
        goto LAB_00024640;
      case 10:
        goto LAB_00024640;
      case 0xb:
        goto LAB_0002475c;
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
        goto LAB_00024770;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x14:
        break;
      case 0x15:
        goto switchD_00024684_caseD_15;
      case 0x16:
        goto switchD_00024684_caseD_16;
      case 0x17:
        break;
      case 0x18:
        goto LAB_00024718;
      case 0x19:
        break;
      case 0x1a:
        break;
      case 0x1b:
        break;
      case 0x1c:
        break;
      case 0x1d:
        if ((*(uint *)(iVar4 + ((uVar9 >> 5) + (uint)*(byte *)(iVar4 + uVar13 + 0x600) * 8) * 4) >>
             (uVar9 & 0x1f) & 1) != 0) goto LAB_00024718;
        *param_4 = pbVar7;
        uVar9 = 0;
        goto LAB_00023b30;
      }
      *param_4 = pbVar7;
      uVar9 = 0;
      goto LAB_00023b30;
    }
    *param_4 = pbVar7;
    uVar9 = 0;
    goto LAB_00023b30;
  case 0x16:
    goto LAB_00024344;
  case 0x17:
    if (iVar10 != 0) {
      *param_4 = pbVar6;
      uVar9 = 0;
      goto LAB_00023b30;
    }
    pbVar7 = pbVar6 + 2;
    iVar10 = (int)param_3 - (int)pbVar7;
    if (iVar10 < 2) goto LAB_000243ac;
    uVar11 = (uint)pbVar6[3];
    bVar1 = pbVar6[2];
    uVar13 = (uint)bVar1;
    local_30 = pbVar7;
    if (uVar11 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + uVar13 + 0x48);
      uVar9 = 0;
    }
    else {
      uVar2 = FUN_0001e934(uVar11,uVar13);
      pbVar6 = extraout_r2_08;
      uVar9 = extraout_r3_08;
    }
    if (uVar2 == 7) {
      if (iVar10 < 4) goto LAB_0002436c;
      *param_4 = pbVar7;
      goto LAB_00023b30;
    }
    if ((int)uVar2 < 8) {
      if (uVar2 == 5) {
        *param_4 = pbVar7;
      }
      else if (uVar2 == 6) {
        if (iVar10 == 2) goto LAB_0002436c;
        *param_4 = pbVar7;
      }
      else {
LAB_000243f8:
        *param_4 = pbVar7;
      }
      goto LAB_00023b30;
    }
    if (uVar2 != 0x18) {
      if (uVar2 == 0x1d) {
        if ((*(uint *)(DAT_00024934 + 0x2443c +
                      ((uint)(bVar1 >> 5) +
                      (uint)*(byte *)(DAT_00024934 + 0x2443c + uVar11 + 0x600) * 8) * 4) >>
             (uVar13 & 0x1f) & 1) != 0) goto LAB_00024418;
        *param_4 = pbVar7;
        goto LAB_00023b30;
      }
      if (uVar2 != 0x16) goto LAB_000243f8;
    }
LAB_00024418:
    local_30 = pbVar6 + 4;
    iVar10 = 1;
    goto LAB_00024208;
  case 0x18:
    goto LAB_00024344;
  case 0x19:
    goto LAB_00024344;
  case 0x1a:
    goto LAB_00024344;
  case 0x1b:
    goto LAB_00024344;
  case 0x1c:
    break;
  case 0x1d:
    if ((*(uint *)(DAT_00024930 + 0x24324 +
                  ((uint)(bVar1 >> 5) + (uint)*(byte *)(DAT_00024930 + 0x24324 + uVar13 + 0x500) * 8
                  ) * 4) >> (uVar9 & 0x1f) & 1) == 0) {
      *param_4 = pbVar6;
      uVar9 = 0;
      goto LAB_00023b30;
    }
LAB_00024344:
    local_30 = pbVar6 + 2;
    goto LAB_00024208;
  }
  *param_4 = pbVar6;
  uVar9 = 0;
  goto LAB_00023b30;
switchD_00024684_caseD_16:
LAB_00024718:
  local_30 = pbVar6 + 4;
  iVar10 = 0;
  goto LAB_00024208;
switchD_00024684_caseD_15:
  goto LAB_00024640;
LAB_000243ac:
  local_30 = pbVar7;
  uVar9 = 0xffffffff;
  goto LAB_00023b30;
code_r0x00024570:
  local_30 = pbVar6 + 4;
  goto LAB_000244f0;
switchD_00024158_caseD_15:
  goto LAB_00024804;
code_r0x00024814:
  uVar9 = 0xffffffff;
  goto LAB_00023b30;
LAB_00023f2c:
  param_2 = param_2 + 2;
  goto LAB_00023d14;
LAB_00023ef8:
  pbVar7 = param_2 + 2;
  if (1 < (int)param_3 - (int)pbVar7) {
    if (param_2[3] == 0) {
      uVar9 = (uint)*(byte *)(param_1 + (uint)*pbVar7 + 0x48);
    }
    else {
      uVar9 = FUN_0001e934();
      pbVar7 = extraout_r2_02;
    }
    param_2 = pbVar7;
    switch(uVar9) {
    case 9:
      goto LAB_00023ef8;
    case 10:
      goto LAB_00023ef8;
    case 0xb:
      uVar9 = 5;
      *param_4 = pbVar7 + 2;
      goto LAB_00023b30;
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
      break;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      goto switchD_00023ea0_caseD_15;
    }
    *param_4 = pbVar7;
    uVar9 = 0;
    goto LAB_00023b30;
  }
  goto code_r0x00023f08;
switchD_00023ea0_caseD_15:
  goto LAB_00023ef8;
code_r0x00023f08:
  uVar9 = 0xffffffff;
  goto LAB_00023b30;
}



/* ===== FUN_00024dd0 @ 00024dd0 size=276 ===== */

undefined4 FUN_00024dd0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  char *pcVar2;
  int extraout_r2;
  undefined4 *extraout_r3;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)(param_2 + 2);
  do {
    while( true ) {
      while( true ) {
        pcVar3 = pcVar2;
        iVar4 = param_3 - (int)pcVar3;
        if (iVar4 < 2) {
          return 0xffffffff;
        }
        if (*pcVar3 == '\0') {
          uVar1 = (uint)*(byte *)(param_1 + (uint)(byte)pcVar3[1] + 0x48);
        }
        else {
          uVar1 = FUN_0001e934();
          param_3 = extraout_r2;
          param_4 = extraout_r3;
        }
        if (uVar1 != 6) break;
        if (iVar4 == 2) {
          return 0xfffffffe;
        }
        pcVar2 = pcVar3 + 3;
      }
      if (6 < (int)uVar1) break;
      if ((-1 < (int)uVar1) && ((int)uVar1 < 2)) goto LAB_00024ec0;
LAB_00024e28:
      pcVar2 = pcVar3 + 2;
    }
    if (uVar1 == 8) {
LAB_00024ec0:
      *param_4 = pcVar3;
      return 0;
    }
    if ((int)uVar1 < 8) {
      if (iVar4 < 4) {
        return 0xfffffffe;
      }
      pcVar2 = pcVar3 + 4;
    }
    else {
      if (uVar1 != 0x1b) goto LAB_00024e28;
      pcVar2 = pcVar3 + 2;
      if (param_3 - (int)pcVar2 < 2) {
        return 0xffffffff;
      }
      if ((pcVar3[2] == '\0') && (pcVar3[3] == '-')) {
        if (param_3 - (int)(pcVar3 + 4) < 2) {
          return 0xffffffff;
        }
        if ((pcVar3[4] == '\0') && (pcVar3[5] == '>')) {
          *param_4 = pcVar3 + 6;
          return 0xd;
        }
        *param_4 = pcVar3 + 4;
        return 0;
      }
    }
  } while( true );
}



/* ===== FUN_00024ee4 @ 00024ee4 size=160 ===== */

undefined4 FUN_00024ee4(char *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  
  *param_3 = 0xb;
  if ((param_2 - (int)param_1 == 6) && (*param_1 == '\0')) {
    if (param_1[1] == 'X') {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if (param_1[1] != 'x') {
        return 1;
      }
    }
    if (param_1[2] == '\0') {
      if (param_1[3] == 'M') {
        bVar1 = true;
      }
      else if (param_1[3] != 'm') {
        return 1;
      }
      if (param_1[4] == '\0') {
        if (param_1[5] == 'L') {
          return 0;
        }
        if (param_1[5] == 'l') {
          if (bVar1) {
            return 0;
          }
          *param_3 = 0xc;
        }
      }
    }
  }
  return 1;
}



/* ===== FUN_00024f84 @ 00024f84 size=832 ===== */

void FUN_00024f84(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int extraout_r2;
  uint extraout_r2_00;
  uint uVar3;
  uint extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  int local_30;
  int local_2c;
  int iStack_28;
  
  iVar6 = param_3 - (int)param_2;
  piVar8 = *(int **)(DAT_000252c4 + 0x24fa0 + DAT_000252c8);
  local_2c = *piVar8;
  local_30 = param_1;
  iStack_28 = param_3;
  if (iVar6 < 2) {
LAB_00024fb4:
    iVar6 = -1;
    goto LAB_00024fb8;
  }
  uVar3 = (uint)param_2[1];
  if (*param_2 == 0) {
    uVar1 = (uint)*(byte *)(param_1 + uVar3 + 0x48);
    iVar9 = 0;
  }
  else {
    uVar1 = FUN_0001e934(*param_2,uVar3);
    iVar9 = extraout_r2;
    uVar3 = extraout_r3;
  }
  if (uVar1 == 0x16) {
LAB_0002505c:
    iVar6 = DAT_000252d0 + 0x2506c;
    pbVar4 = param_2;
LAB_00025068:
    pbVar7 = pbVar4 + 2;
    iVar9 = param_3 - (int)pbVar7;
    if (iVar9 < 2) goto LAB_00024fb4;
    uVar1 = (uint)*pbVar7;
    uVar3 = (uint)pbVar4[3];
    if (uVar1 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + uVar3 + 0x48);
    }
    else {
      uVar2 = FUN_0001e934(uVar1,uVar3);
      uVar3 = extraout_r2_00;
      iVar6 = extraout_r3_00;
    }
    pbVar5 = pbVar7;
    switch(uVar2) {
    case 5:
      goto LAB_00025164;
    case 6:
      if (iVar9 != 2) goto LAB_00025164;
      goto LAB_00025114;
    case 7:
      if (iVar9 < 4) goto LAB_00025114;
      goto LAB_00025164;
    case 8:
      break;
    case 9:
      goto LAB_00025178;
    case 10:
      goto LAB_00025178;
    case 0xb:
      break;
    case 0xc:
      break;
    case 0xd:
      break;
    case 0xe:
      break;
    case 0xf:
      iVar6 = FUN_00024ee4(param_2,pbVar7,&local_30);
      if (iVar6 == 0) goto LAB_0002514c;
      pbVar5 = pbVar4 + 4;
      if (param_3 - (int)pbVar5 < 2) goto LAB_00024fb4;
      if ((pbVar4[4] == 0) && (pbVar4[5] == 0x3e)) goto LAB_00025254;
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
LAB_00025178:
      iVar6 = FUN_00024ee4(param_2,pbVar7,&local_30);
      if (iVar6 != 0) {
        pbVar4 = pbVar4 + 4;
        goto LAB_00025194;
      }
      goto LAB_0002514c;
    case 0x16:
      pbVar4 = pbVar7;
      goto LAB_00025068;
    case 0x17:
      break;
    case 0x18:
      pbVar4 = pbVar7;
      goto LAB_00025068;
    case 0x19:
      pbVar4 = pbVar7;
      goto LAB_00025068;
    case 0x1a:
      pbVar4 = pbVar7;
      goto LAB_00025068;
    case 0x1b:
      pbVar4 = pbVar7;
      goto LAB_00025068;
    case 0x1c:
      break;
    case 0x1d:
      goto LAB_00025128;
    }
    *param_4 = pbVar5;
    goto LAB_00025018;
  }
  if ((int)uVar1 < 0x17) {
    if (uVar1 == 6) {
      if (iVar6 == 2) goto LAB_00025114;
    }
    else if ((uVar1 == 7) && (iVar6 < 4)) {
LAB_00025114:
      iVar6 = -2;
      goto LAB_00024fb8;
    }
  }
  else if ((uVar1 == 0x18) ||
          ((uVar1 == 0x1d &&
           ((*(uint *)(DAT_000252cc + 0x2503c +
                      ((uVar3 >> 5) + (uint)*(byte *)(DAT_000252cc + 0x2503c + iVar9 + 0x600) * 8) *
                      4) >> (uVar3 & 0x1f) & 1) != 0)))) goto LAB_0002505c;
  *param_4 = param_2;
LAB_00025018:
  iVar6 = 0;
  goto LAB_00024fb8;
LAB_00025128:
  pbVar4 = pbVar7;
  if ((*(uint *)(iVar6 + ((uVar3 >> 5) + (uint)*(byte *)(iVar6 + uVar1 + 0x500) * 8) * 4) >>
       (uVar3 & 0x1f) & 1) == 0) goto LAB_0002514c;
  goto LAB_00025068;
LAB_0002514c:
  *param_4 = pbVar7;
  iVar6 = 0;
  goto LAB_00024fb8;
LAB_00025194:
  pbVar7 = pbVar4;
  iVar6 = param_3 - (int)pbVar7;
  if (iVar6 < 2) goto LAB_00024fb4;
  if (*pbVar7 == 0) {
    uVar3 = (uint)*(byte *)(param_1 + (uint)pbVar7[1] + 0x48);
  }
  else {
    uVar3 = FUN_0001e934();
    iVar6 = extraout_r3_01;
  }
  switch(uVar3) {
  case 0:
    goto LAB_00025164;
  case 1:
    goto LAB_00025164;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    if (iVar6 == 2) goto LAB_00025114;
    pbVar4 = pbVar7 + 3;
    goto LAB_00025194;
  case 7:
    if (iVar6 < 4) goto LAB_00025114;
    pbVar4 = pbVar7 + 4;
    goto LAB_00025194;
  case 8:
LAB_00025164:
    *param_4 = pbVar7;
    goto LAB_00025018;
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
    pbVar4 = pbVar7 + 2;
    if (1 < param_3 - (int)pbVar4) goto code_r0x0002523c;
    goto LAB_00024fb4;
  }
  pbVar4 = pbVar7 + 2;
  goto LAB_00025194;
code_r0x0002523c:
  if ((pbVar7[2] != 0) || (pbVar7[3] != 0x3e)) goto LAB_00025194;
LAB_00025254:
  *param_4 = pbVar7 + 4;
  iVar6 = local_30;
LAB_00024fb8:
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}



/* ===== FUN_000252d4 @ 000252d4 size=4444 ===== */

void FUN_000252d4(int param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *extraout_r2;
  byte *pbVar7;
  char *extraout_r2_00;
  byte *extraout_r2_01;
  byte *extraout_r2_02;
  byte *extraout_r2_03;
  byte *extraout_r2_04;
  byte *extraout_r2_05;
  byte *extraout_r2_06;
  int extraout_r2_07;
  byte *extraout_r2_08;
  byte *extraout_r2_09;
  byte *extraout_r2_10;
  char *pcVar8;
  char *extraout_r2_11;
  int *piVar9;
  uint extraout_r3;
  char *extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  int extraout_r3_03;
  uint extraout_r3_04;
  uint extraout_r3_05;
  int extraout_r3_06;
  byte *extraout_r3_07;
  uint extraout_r3_08;
  byte *extraout_r3_09;
  int extraout_r3_10;
  byte *extraout_r3_11;
  uint extraout_r3_12;
  char *extraout_r3_13;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte *local_30;
  int local_2c;
  
  piVar9 = *(int **)(DAT_00026274 + 0x252f4 + DAT_00026278);
  local_2c = *piVar9;
  if (param_3 <= param_2) {
    uVar10 = 0xfffffffc;
    goto LAB_000254a0;
  }
  if (((int)param_3 - (int)param_2 & 1U) != 0) {
    uVar10 = (int)param_3 - (int)param_2 & 0xfffffffe;
    if (uVar10 == 0) {
      uVar10 = 0xffffffff;
      goto LAB_000254a0;
    }
    param_3 = param_2 + uVar10;
  }
  if (*param_2 == '\0') {
    uVar15 = (uint)*(byte *)(param_1 + (uint)(byte)param_2[1] + 0x48);
  }
  else {
    uVar15 = FUN_0001e934();
  }
  switch(uVar15) {
  case 0:
    goto LAB_00026364;
  case 1:
    goto LAB_00026364;
  case 2:
    pcVar8 = param_2 + 2;
    iVar12 = (int)param_3 - (int)pcVar8;
    if (iVar12 < 2) {
      uVar10 = 0xffffffff;
      goto LAB_000254a0;
    }
    uVar13 = (uint)(byte)param_2[2];
    uVar10 = (uint)(byte)param_2[3];
    if (uVar13 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + uVar10 + 0x48);
    }
    else {
      uVar2 = FUN_0001e934(uVar13,uVar10);
      pcVar8 = extraout_r2;
      uVar10 = extraout_r3;
    }
    break;
  case 3:
    uVar10 = FUN_0002016c(param_1,param_2 + 2,param_3,param_4);
    goto LAB_000254a0;
  case 4:
    pcVar8 = param_2 + 2;
    if ((int)param_3 - (int)pcVar8 < 2) {
      uVar10 = 0xfffffffb;
      goto LAB_000254a0;
    }
    if ((param_2[2] == '\0') && (param_2[3] == ']')) {
      if ((int)param_3 - (int)(param_2 + 4) < 2) {
        uVar10 = 0xfffffffb;
        goto LAB_000254a0;
      }
      if ((param_2[4] == '\0') && (param_2[5] == '>')) {
        *param_4 = param_2 + 4;
        uVar10 = 0;
        goto LAB_000254a0;
      }
    }
    goto LAB_00026304;
  case 5:
    if ((int)param_3 - (int)param_2 < 2) {
      uVar10 = 0xfffffffe;
      goto LAB_000254a0;
    }
  default:
    pcVar8 = param_2 + 2;
LAB_00026304:
    iVar12 = (int)param_3 - (int)pcVar8;
    if (iVar12 < 2) goto code_r0x00026310;
    if (*pcVar8 == '\0') {
      uVar10 = (uint)*(byte *)(param_1 + (uint)(byte)pcVar8[1] + 0x48);
    }
    else {
      uVar10 = FUN_0001e934();
      pcVar8 = extraout_r2_11;
    }
    switch(uVar10) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      if (3 < iVar12) {
        if ((pcVar8[2] == '\0') && (pcVar8[3] == ']')) {
          if (iVar12 < 6) break;
          if ((pcVar8[4] != '\0') || (pcVar8[5] != '>')) goto switchD_00026394_default;
          *param_4 = pcVar8 + 4;
          uVar10 = 0;
          goto LAB_000254a0;
        }
        goto switchD_00026394_default;
      }
      break;
    case 5:
    default:
switchD_00026394_default:
      pcVar8 = pcVar8 + 2;
      goto LAB_00026304;
    case 6:
      if (iVar12 == 2) {
        *param_4 = pcVar8;
        goto LAB_000254a0;
      }
      pcVar8 = pcVar8 + 3;
      goto LAB_00026304;
    case 7:
      if (3 < iVar12) goto code_r0x000263ec;
      *param_4 = pcVar8;
      uVar10 = 6;
      goto LAB_000254a0;
    case 8:
      break;
    case 9:
      break;
    case 10:
    }
    *param_4 = pcVar8;
    uVar10 = 6;
    goto LAB_000254a0;
  case 6:
    if ((int)param_3 - (int)param_2 < 3) {
      uVar10 = 0xfffffffe;
      goto LAB_000254a0;
    }
    pcVar8 = param_2 + 3;
    goto LAB_00026304;
  case 7:
    if ((int)param_3 - (int)param_2 < 4) {
      uVar10 = 0xfffffffe;
      goto LAB_000254a0;
    }
    pcVar8 = param_2 + 4;
    goto LAB_00026304;
  case 8:
LAB_00026364:
    *param_4 = param_2;
    uVar10 = 0;
    goto LAB_000254a0;
  case 9:
    pcVar8 = param_2 + 2;
    if ((int)param_3 - (int)pcVar8 < 2) {
      uVar10 = 0xfffffffd;
    }
    else {
      if (param_2[2] == '\0') {
        uVar10 = (uint)*(byte *)(param_1 + (uint)(byte)param_2[3] + 0x48);
      }
      else {
        uVar10 = FUN_0001e934();
        pcVar8 = extraout_r3_13;
      }
      if (uVar10 == 10) {
        pcVar8 = param_2 + 4;
      }
      *param_4 = pcVar8;
      uVar10 = 7;
    }
    goto LAB_000254a0;
  case 10:
    *param_4 = param_2 + 2;
    uVar10 = 7;
    goto LAB_000254a0;
  }
  switch(uVar2) {
  case 5:
    *param_4 = pcVar8;
    uVar10 = 0;
    goto LAB_000254a0;
  case 6:
    if (iVar12 == 2) {
      uVar10 = 0xfffffffe;
    }
    else {
      *param_4 = pcVar8;
      uVar10 = 0;
    }
    goto LAB_000254a0;
  case 7:
    if (iVar12 < 4) {
      uVar10 = 0xfffffffe;
    }
    else {
      *param_4 = pcVar8;
      uVar10 = 0;
    }
    goto LAB_000254a0;
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
    uVar10 = FUN_00024f84(param_1,param_2 + 4,param_3,param_4);
    goto LAB_000254a0;
  case 0x10:
    pcVar8 = param_2 + 4;
    if ((int)param_3 - (int)pcVar8 < 2) {
      uVar10 = 0xffffffff;
    }
    else {
      if (param_2[4] == '\0') {
        uVar10 = (uint)*(byte *)(param_1 + (uint)(byte)param_2[5] + 0x48);
      }
      else {
        uVar10 = FUN_0001e934();
        pcVar8 = extraout_r3_00;
      }
      if (uVar10 == 0x14) {
        pcVar8 = param_2 + 6;
        if ((int)param_3 - (int)pcVar8 < 0xc) {
          uVar10 = 0xffffffff;
        }
        else {
          pcVar6 = (char *)(DAT_00026288 + 0x255a0);
          do {
            if ((*pcVar8 != '\0') || (pcVar8[1] != *pcVar6)) {
              *param_4 = pcVar8;
              uVar10 = 0;
              goto LAB_000254a0;
            }
            pcVar8 = pcVar8 + 2;
            pcVar6 = pcVar6 + 1;
          } while (param_2 + 0x12 != pcVar8);
          *param_4 = param_2 + 0x12;
          uVar10 = 8;
        }
      }
      else if (uVar10 == 0x1b) {
        pcVar8 = param_2 + 6;
        if ((int)param_3 - (int)pcVar8 < 2) {
          uVar10 = 0xffffffff;
        }
        else if ((param_2[6] == '\0') && (param_2[7] == '-')) {
          uVar10 = FUN_00024dd0(param_1,pcVar8,param_3,param_4);
        }
        else {
          *param_4 = pcVar8;
          uVar10 = 0;
        }
      }
      else {
        *param_4 = pcVar8;
        uVar10 = 0;
      }
    }
    goto LAB_000254a0;
  case 0x11:
    pcVar8 = param_2 + 4;
    iVar12 = (int)param_3 - (int)pcVar8;
    if (iVar12 < 2) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar15 = (uint)(byte)param_2[4];
      uVar10 = (uint)(byte)param_2[5];
      if (uVar15 == 0) {
        uVar13 = (uint)*(byte *)(param_1 + uVar10 + 0x48);
      }
      else {
        uVar13 = FUN_0001e934(uVar15,uVar10);
        pcVar8 = extraout_r2_00;
        uVar10 = extraout_r3_01;
      }
      if (uVar13 == 7) {
        if (iVar12 < 4) {
          uVar10 = 0xfffffffe;
        }
        else {
          *param_4 = pcVar8;
          uVar10 = 0;
        }
      }
      else {
        if ((int)uVar13 < 8) {
          if (uVar13 == 5) {
            *param_4 = pcVar8;
            uVar10 = 0;
            goto LAB_000254a0;
          }
          if (uVar13 == 6) {
            if (iVar12 == 2) {
              uVar10 = 0xfffffffe;
            }
            else {
              *param_4 = pcVar8;
              uVar10 = 0;
            }
            goto LAB_000254a0;
          }
        }
        else {
          if (uVar13 == 0x18) {
LAB_00025678:
            pbVar7 = (byte *)(param_2 + 6);
            iVar12 = DAT_0002628c + 0x25688;
LAB_00025684:
            iVar4 = (int)param_3 - (int)pbVar7;
            if (iVar4 < 2) {
              uVar10 = 0xffffffff;
            }
            else {
              uVar15 = (uint)*pbVar7;
              uVar10 = (uint)pbVar7[1];
              if (uVar15 == 0) {
                uVar13 = (uint)*(byte *)(param_1 + uVar10 + 0x48);
              }
              else {
                uVar13 = FUN_0001e934(uVar15,uVar10);
                pbVar7 = extraout_r2_01;
                uVar10 = extraout_r3_02;
              }
              switch(uVar13) {
              case 5:
                *param_4 = pbVar7;
                uVar10 = 0;
                goto LAB_000254a0;
              case 6:
                if (iVar4 == 2) {
                  uVar10 = 0xfffffffe;
                }
                else {
                  *param_4 = pbVar7;
                  uVar10 = 0;
                }
                goto LAB_000254a0;
              case 7:
                if (iVar4 < 4) {
                  uVar10 = 0xfffffffe;
                }
                else {
                  *param_4 = pbVar7;
                  uVar10 = 0;
                }
                goto LAB_000254a0;
              case 8:
                break;
              case 9:
                goto LAB_00025868;
              case 10:
                goto LAB_00025868;
              case 0xb:
                uVar10 = 5;
                *param_4 = pbVar7 + 2;
                goto LAB_000254a0;
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
                break;
              case 0x12:
                break;
              case 0x13:
                break;
              case 0x14:
                break;
              case 0x15:
                goto LAB_00025868;
              case 0x16:
                goto LAB_0002589c;
              case 0x17:
                goto LAB_0002589c;
              case 0x18:
                goto LAB_0002589c;
              case 0x19:
                goto LAB_0002589c;
              case 0x1a:
                goto LAB_0002589c;
              case 0x1b:
                goto LAB_0002589c;
              case 0x1c:
                break;
              case 0x1d:
                if ((*(uint *)(iVar12 + ((uVar10 >> 5) +
                                        (uint)*(byte *)(iVar12 + uVar15 + 0x500) * 8) * 4) >>
                     (uVar10 & 0x1f) & 1) != 0) goto LAB_0002589c;
                *param_4 = pbVar7;
                uVar10 = 0;
                goto LAB_000254a0;
              }
              *param_4 = pbVar7;
              uVar10 = 0;
            }
            goto LAB_000254a0;
          }
          if (uVar13 == 0x1d) {
            if ((*(uint *)(DAT_00026290 + 0x256a8 +
                          ((uVar10 >> 5) +
                          (uint)*(byte *)(DAT_00026290 + 0x256a8 + uVar15 + 0x600) * 8) * 4) >>
                 (uVar10 & 0x1f) & 1) == 0) {
              *param_4 = pcVar8;
              uVar10 = 0;
              goto LAB_000254a0;
            }
            goto LAB_00025678;
          }
          if (uVar13 == 0x16) goto LAB_00025678;
        }
        *param_4 = pcVar8;
        uVar10 = 0;
      }
    }
    goto LAB_000254a0;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    goto LAB_00025464;
  case 0x17:
    break;
  case 0x18:
LAB_00025464:
    pbVar7 = (byte *)(param_2 + 4);
    iVar12 = 0;
    iVar4 = DAT_00026280 + 0x25478;
    iVar5 = DAT_00026284 + 0x25484;
LAB_00025484:
    iVar14 = (int)param_3 - (int)pbVar7;
    if (iVar14 < 2) goto code_r0x00025490;
    uVar13 = (uint)*pbVar7;
    bVar1 = pbVar7[1];
    uVar10 = (uint)bVar1;
    if (uVar13 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + uVar10 + 0x48);
    }
    else {
      uVar2 = FUN_0001e934(uVar13,uVar10);
      pbVar7 = extraout_r2_03;
      iVar12 = extraout_r3_03;
    }
    pbVar11 = pbVar7;
    switch(uVar2) {
    case 5:
      *param_4 = pbVar7;
      uVar10 = 0;
      goto LAB_000254a0;
    case 6:
      if (iVar14 == 2) {
        uVar10 = 0xfffffffe;
      }
      else {
        *param_4 = pbVar7;
        uVar10 = 0;
      }
      goto LAB_000254a0;
    case 7:
      if (iVar14 < 4) {
        uVar10 = 0xfffffffe;
      }
      else {
        *param_4 = pbVar7;
        uVar10 = 0;
      }
      goto LAB_000254a0;
    case 8:
      break;
    case 9:
      goto LAB_00026174;
    case 10:
      goto LAB_00026174;
    case 0xb:
      goto LAB_00026198;
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
      goto LAB_000261a8;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      goto LAB_00026174;
    case 0x16:
      goto LAB_0002597c;
    case 0x17:
      if (iVar12 != 0) {
        *param_4 = pbVar7;
        uVar10 = 0;
        goto LAB_000254a0;
      }
      pbVar11 = pbVar7 + 2;
      iVar12 = (int)param_3 - (int)pbVar11;
      if (iVar12 < 2) {
        uVar10 = 0xffffffff;
        goto LAB_000254a0;
      }
      uVar2 = (uint)pbVar7[2];
      bVar1 = pbVar7[3];
      uVar13 = (uint)bVar1;
      if (uVar2 == 0) {
        uVar3 = (uint)*(byte *)(param_1 + uVar13 + 0x48);
        uVar10 = 0;
      }
      else {
        uVar3 = FUN_0001e934(uVar2,uVar13);
        pbVar7 = extraout_r2_04;
        uVar10 = extraout_r3_04;
      }
      if (uVar3 == 7) {
        if (iVar12 < 4) {
          uVar10 = 0xfffffffe;
        }
        else {
          *param_4 = pbVar11;
        }
        goto LAB_000254a0;
      }
      if ((int)uVar3 < 8) {
        if (uVar3 == 5) {
          *param_4 = pbVar11;
        }
        else if (uVar3 == 6) {
          if (iVar12 == 2) {
            uVar10 = 0xfffffffe;
          }
          else {
            *param_4 = pbVar11;
          }
        }
        else {
LAB_00025a1c:
          *param_4 = pbVar11;
        }
        goto LAB_000254a0;
      }
      if (uVar3 != 0x18) {
        if (uVar3 == 0x1d) {
          if ((*(uint *)(iVar4 + ((uint)(bVar1 >> 5) + (uint)*(byte *)(iVar4 + uVar2 + 0x600) * 8) *
                                 4) >> (uVar13 & 0x1f) & 1) != 0) goto LAB_00025a3c;
          *param_4 = pbVar11;
          goto LAB_000254a0;
        }
        if (uVar3 != 0x16) goto LAB_00025a1c;
      }
LAB_00025a3c:
      pbVar7 = pbVar7 + 4;
      iVar12 = 1;
      goto LAB_00025484;
    case 0x18:
      goto LAB_0002597c;
    case 0x19:
      goto LAB_0002597c;
    case 0x1a:
      goto LAB_0002597c;
    case 0x1b:
      goto LAB_0002597c;
    case 0x1c:
      break;
    case 0x1d:
      if ((*(uint *)(iVar5 + ((uint)(bVar1 >> 5) + (uint)*(byte *)(iVar5 + uVar13 + 0x500) * 8) * 4)
           >> (uVar10 & 0x1f) & 1) == 0) {
        *param_4 = pbVar7;
        uVar10 = 0;
        goto LAB_000254a0;
      }
LAB_0002597c:
      pbVar7 = pbVar7 + 2;
      goto LAB_00025484;
    }
    *param_4 = pbVar7;
    uVar10 = 0;
    goto LAB_000254a0;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    if ((*(uint *)(DAT_0002627c + 0x25444 +
                  ((uVar10 >> 5) + (uint)*(byte *)(DAT_0002627c + 0x25444 + uVar13 + 0x600) * 8) * 4
                  ) >> (uVar10 & 0x1f) & 1) != 0) goto LAB_00025464;
    *param_4 = pcVar8;
    uVar10 = 0;
    goto LAB_000254a0;
  }
  *param_4 = pcVar8;
  uVar10 = 0;
LAB_000254a0:
  if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
code_r0x00026310:
  *param_4 = pcVar8;
  uVar10 = 6;
  goto LAB_000254a0;
code_r0x000263ec:
  pcVar8 = pcVar8 + 4;
  goto LAB_00026304;
code_r0x00025490:
  uVar10 = 0xffffffff;
  goto LAB_000254a0;
LAB_00026174:
  pbVar7 = pbVar11 + 2;
  iVar12 = (int)param_3 - (int)pbVar7;
  if (1 < iVar12) {
    uVar13 = (uint)*pbVar7;
    uVar10 = (uint)pbVar11[3];
    if (uVar13 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + uVar10 + 0x48);
    }
    else {
      uVar2 = FUN_0001e934(uVar13,uVar10);
      pbVar7 = extraout_r2_05;
      uVar10 = extraout_r3_05;
    }
    pbVar11 = pbVar7;
    switch(uVar2) {
    case 5:
      *param_4 = pbVar7;
      uVar10 = 0;
      goto LAB_000254a0;
    case 6:
      if (iVar12 == 2) {
        uVar10 = 0xfffffffe;
      }
      else {
        *param_4 = pbVar7;
        uVar10 = 0;
      }
      goto LAB_000254a0;
    case 7:
      if (iVar12 < 4) {
        uVar10 = 0xfffffffe;
      }
      else {
        *param_4 = pbVar7;
        uVar10 = 0;
      }
      goto LAB_000254a0;
    case 8:
      break;
    case 9:
      goto LAB_00026174;
    case 10:
      goto LAB_00026174;
    case 0xb:
LAB_00026198:
      *param_4 = pbVar7 + 2;
      uVar10 = uVar15;
      goto LAB_000254a0;
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
LAB_000261a8:
      if ((int)param_3 - (int)(pbVar7 + 2) < 2) {
        uVar10 = 0xffffffff;
      }
      else if ((pbVar7[2] == 0) && (pbVar7[3] == 0x3e)) {
        *param_4 = pbVar7 + 4;
        uVar10 = 4;
      }
      else {
        *param_4 = pbVar7 + 2;
        uVar10 = 0;
      }
      goto LAB_000254a0;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      goto switchD_00025ac8_caseD_15;
    case 0x16:
      goto LAB_00025b64;
    case 0x17:
      break;
    case 0x18:
      goto LAB_00025b64;
    case 0x19:
      break;
    case 0x1a:
      break;
    case 0x1b:
      break;
    case 0x1c:
      break;
    case 0x1d:
      if ((*(uint *)(DAT_00026294 + 0x25b44 +
                    ((uVar10 >> 5) + (uint)*(byte *)(DAT_00026294 + 0x25b44 + uVar13 + 0x600) * 8) *
                    4) >> (uVar10 & 0x1f) & 1) == 0) {
        *param_4 = pbVar7;
        uVar10 = 0;
        goto LAB_000254a0;
      }
LAB_00025b64:
      iVar12 = 0;
      local_30 = pbVar7 + 2;
      iVar4 = DAT_00026298 + 0x25b78;
      goto LAB_00025b78;
    }
    *param_4 = pbVar7;
    uVar10 = 0;
    goto LAB_000254a0;
  }
  goto code_r0x00026184;
LAB_00025b78:
  iVar5 = (int)param_3 - (int)local_30;
  pbVar7 = local_30;
  if (iVar5 < 2) goto LAB_00025d1c;
  uVar15 = (uint)*local_30;
  bVar1 = local_30[1];
  uVar10 = (uint)bVar1;
  if (uVar15 == 0) {
    uVar13 = (uint)*(byte *)(param_1 + uVar10 + 0x48);
    pbVar11 = local_30;
  }
  else {
    uVar13 = FUN_0001e934(uVar15,uVar10);
    pbVar11 = extraout_r2_06;
    iVar12 = extraout_r3_06;
  }
  switch(uVar13) {
  case 5:
    *param_4 = pbVar11;
    uVar10 = 0;
    goto LAB_000254a0;
  case 6:
    if (iVar5 == 2) goto LAB_00025cdc;
    *param_4 = pbVar11;
    uVar10 = 0;
    goto LAB_000254a0;
  case 7:
    if (iVar5 < 4) {
LAB_00025cdc:
      uVar10 = 0xfffffffe;
    }
    else {
      *param_4 = pbVar11;
      uVar10 = 0;
    }
    goto LAB_000254a0;
  case 8:
    break;
  case 9:
    goto LAB_00025c20;
  case 10:
    goto LAB_00025c20;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    goto LAB_00025df0;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
LAB_00025c20:
    iVar12 = 1;
    while( true ) {
      pbVar7 = local_30 + 2;
      if ((int)param_3 - (int)pbVar7 < 2) goto LAB_00025d1c;
      if (local_30[2] == 0) {
        uVar10 = (uint)*(byte *)(param_1 + (uint)local_30[3] + 0x48);
        local_30 = pbVar7;
      }
      else {
        local_30 = pbVar7;
        uVar10 = FUN_0001e934();
        iVar12 = extraout_r2_07;
        pbVar7 = extraout_r3_07;
      }
      if (uVar10 == 0xe) break;
      if ((0x15 < uVar10) || ((DAT_0002629c & iVar12 << (uVar10 & 0xff)) == 0)) {
        *param_4 = pbVar7;
        uVar10 = 0;
        goto LAB_000254a0;
      }
    }
LAB_00025df0:
    while( true ) {
      pbVar7 = local_30 + 2;
      if ((int)param_3 - (int)pbVar7 < 2) goto LAB_00025d1c;
      if (local_30[2] == 0) {
        uVar15 = (uint)*(byte *)(param_1 + (uint)local_30[3] + 0x48);
        pbVar11 = local_30;
        local_30 = pbVar7;
      }
      else {
        local_30 = pbVar7;
        uVar15 = FUN_0001e934();
        pbVar7 = extraout_r2_09;
        pbVar11 = extraout_r3_09;
      }
      if (uVar15 - 0xc < 2) break;
      if ((0x15 < uVar15) || ((DAT_0002629c & 1 << (uVar15 & 0xff)) == 0)) {
        *param_4 = pbVar7;
        uVar10 = 0;
        goto LAB_000254a0;
      }
    }
    local_30 = pbVar11 + 4;
LAB_00025e60:
    pbVar11 = local_30;
    iVar12 = (int)param_3 - (int)local_30;
    pbVar7 = local_30;
    if (iVar12 < 2) goto LAB_00025d1c;
    if (*local_30 == 0) {
      uVar10 = (uint)*(byte *)(param_1 + (uint)local_30[1] + 0x48);
    }
    else {
      uVar10 = FUN_0001e934();
      iVar12 = extraout_r3_10;
    }
    if (uVar15 != uVar10) {
      switch(uVar10) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        *param_4 = pbVar11;
        uVar10 = 0;
        goto LAB_000254a0;
      case 3:
        uVar10 = FUN_0002016c(param_1,pbVar11 + 2,param_3,&local_30);
        if ((int)uVar10 < 1) {
          if (uVar10 == 0) {
            *param_4 = local_30;
          }
          goto LAB_000254a0;
        }
        goto LAB_00025e60;
      case 4:
      default:
switchD_00025e98_default:
        local_30 = pbVar11 + 2;
        goto LAB_00025e60;
      case 5:
        goto switchD_00025e98_default;
      case 6:
        if (iVar12 == 2) goto LAB_00025cdc;
        local_30 = pbVar11 + 3;
        goto LAB_00025e60;
      case 7:
        if (3 < iVar12) goto code_r0x00025ee0;
        goto LAB_00025cdc;
      case 8:
      }
      *param_4 = pbVar11;
      uVar10 = 0;
      goto LAB_000254a0;
    }
    pbVar7 = pbVar11 + 2;
    if ((int)param_3 - (int)pbVar7 < 2) goto LAB_00025d1c;
    local_30 = pbVar7;
    if (pbVar11[2] == 0) {
      uVar10 = (uint)*(byte *)(param_1 + (uint)pbVar11[3] + 0x48);
    }
    else {
      uVar10 = FUN_0001e934();
      pbVar7 = extraout_r3_11;
    }
    switch(uVar10) {
    case 9:
      goto LAB_00025fb0;
    case 10:
      goto LAB_00025fb0;
    case 0xb:
LAB_000260cc:
      *param_4 = local_30 + 2;
      uVar10 = 1;
      goto LAB_000254a0;
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
LAB_000260e0:
      pbVar7 = local_30 + 2;
      if (1 < (int)param_3 - (int)pbVar7) {
        if ((local_30[2] == 0) && (local_30[3] == 0x3e)) {
          *param_4 = local_30 + 4;
          uVar10 = 3;
          local_30 = pbVar7;
        }
        else {
          *param_4 = pbVar7;
          uVar10 = 0;
          local_30 = pbVar7;
        }
        goto LAB_000254a0;
      }
      goto LAB_00025d1c;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
LAB_00025fb0:
      pbVar11 = local_30;
      pbVar7 = local_30 + 2;
      iVar12 = (int)param_3 - (int)pbVar7;
      if (iVar12 < 2) goto LAB_00025d1c;
      uVar15 = (uint)local_30[2];
      uVar10 = (uint)local_30[3];
      local_30 = pbVar7;
      if (uVar15 == 0) {
        uVar13 = (uint)*(byte *)(param_1 + uVar10 + 0x48);
      }
      else {
        uVar13 = FUN_0001e934(uVar15,uVar10);
        pbVar7 = extraout_r2_10;
        uVar10 = extraout_r3_12;
      }
      switch(uVar13) {
      case 5:
        *param_4 = pbVar7;
        uVar10 = 0;
        goto LAB_000254a0;
      case 6:
        if (iVar12 == 2) goto LAB_00025cdc;
        *param_4 = pbVar7;
        uVar10 = 0;
        goto LAB_000254a0;
      case 7:
        if (iVar12 < 4) goto LAB_00025cdc;
        *param_4 = pbVar7;
        uVar10 = 0;
        goto LAB_000254a0;
      case 8:
        break;
      case 9:
        goto LAB_00025fb0;
      case 10:
        goto LAB_00025fb0;
      case 0xb:
        goto LAB_000260cc;
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
        goto LAB_000260e0;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x14:
        break;
      case 0x15:
        goto switchD_00025ff4_caseD_15;
      case 0x16:
        goto switchD_00025ff4_caseD_16;
      case 0x17:
        break;
      case 0x18:
        goto LAB_00026088;
      case 0x19:
        break;
      case 0x1a:
        break;
      case 0x1b:
        break;
      case 0x1c:
        break;
      case 0x1d:
        if ((*(uint *)(iVar4 + ((uVar10 >> 5) + (uint)*(byte *)(iVar4 + uVar15 + 0x600) * 8) * 4) >>
             (uVar10 & 0x1f) & 1) != 0) goto LAB_00026088;
        *param_4 = pbVar7;
        uVar10 = 0;
        goto LAB_000254a0;
      }
      *param_4 = pbVar7;
      uVar10 = 0;
      goto LAB_000254a0;
    }
    *param_4 = pbVar7;
    uVar10 = 0;
    goto LAB_000254a0;
  case 0x16:
    goto LAB_00025cb4;
  case 0x17:
    if (iVar12 != 0) {
      *param_4 = pbVar11;
      uVar10 = 0;
      goto LAB_000254a0;
    }
    pbVar7 = pbVar11 + 2;
    iVar12 = (int)param_3 - (int)pbVar7;
    if (iVar12 < 2) goto LAB_00025d1c;
    uVar13 = (uint)pbVar11[2];
    bVar1 = pbVar11[3];
    uVar15 = (uint)bVar1;
    local_30 = pbVar7;
    if (uVar13 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + uVar15 + 0x48);
      uVar10 = 0;
    }
    else {
      uVar2 = FUN_0001e934(uVar13,uVar15);
      pbVar11 = extraout_r2_08;
      uVar10 = extraout_r3_08;
    }
    if (uVar2 == 7) {
      if (iVar12 < 4) goto LAB_00025cdc;
      *param_4 = pbVar7;
      goto LAB_000254a0;
    }
    if ((int)uVar2 < 8) {
      if (uVar2 == 5) {
        *param_4 = pbVar7;
      }
      else if (uVar2 == 6) {
        if (iVar12 == 2) goto LAB_00025cdc;
        *param_4 = pbVar7;
      }
      else {
LAB_00025d68:
        *param_4 = pbVar7;
      }
      goto LAB_000254a0;
    }
    if (uVar2 != 0x18) {
      if (uVar2 == 0x1d) {
        if ((*(uint *)(DAT_000262a4 + 0x25dac +
                      ((uint)(bVar1 >> 5) +
                      (uint)*(byte *)(DAT_000262a4 + 0x25dac + uVar13 + 0x600) * 8) * 4) >>
             (uVar15 & 0x1f) & 1) != 0) goto LAB_00025d88;
        *param_4 = pbVar7;
        goto LAB_000254a0;
      }
      if (uVar2 != 0x16) goto LAB_00025d68;
    }
LAB_00025d88:
    local_30 = pbVar11 + 4;
    iVar12 = 1;
    goto LAB_00025b78;
  case 0x18:
    goto LAB_00025cb4;
  case 0x19:
    goto LAB_00025cb4;
  case 0x1a:
    goto LAB_00025cb4;
  case 0x1b:
    goto LAB_00025cb4;
  case 0x1c:
    break;
  case 0x1d:
    if ((*(uint *)(DAT_000262a0 + 0x25c94 +
                  ((uint)(bVar1 >> 5) + (uint)*(byte *)(DAT_000262a0 + 0x25c94 + uVar15 + 0x500) * 8
                  ) * 4) >> (uVar10 & 0x1f) & 1) == 0) {
      *param_4 = pbVar11;
      uVar10 = 0;
      goto LAB_000254a0;
    }
LAB_00025cb4:
    local_30 = pbVar11 + 2;
    goto LAB_00025b78;
  }
  *param_4 = pbVar11;
  uVar10 = 0;
  goto LAB_000254a0;
switchD_00025ff4_caseD_16:
LAB_00026088:
  local_30 = pbVar11 + 4;
  iVar12 = 0;
  goto LAB_00025b78;
switchD_00025ff4_caseD_15:
  goto LAB_00025fb0;
LAB_00025d1c:
  local_30 = pbVar7;
  uVar10 = 0xffffffff;
  goto LAB_000254a0;
code_r0x00025ee0:
  local_30 = pbVar11 + 4;
  goto LAB_00025e60;
switchD_00025ac8_caseD_15:
  goto LAB_00026174;
code_r0x00026184:
  uVar10 = 0xffffffff;
  goto LAB_000254a0;
LAB_0002589c:
  pbVar7 = pbVar7 + 2;
  goto LAB_00025684;
LAB_00025868:
  pbVar11 = pbVar7 + 2;
  if (1 < (int)param_3 - (int)pbVar11) {
    if (*pbVar11 == 0) {
      uVar10 = (uint)*(byte *)(param_1 + (uint)pbVar7[3] + 0x48);
    }
    else {
      uVar10 = FUN_0001e934();
      pbVar11 = extraout_r2_02;
    }
    pbVar7 = pbVar11;
    switch(uVar10) {
    case 9:
      goto LAB_00025868;
    case 10:
      goto LAB_00025868;
    case 0xb:
      uVar10 = 5;
      *param_4 = pbVar11 + 2;
      goto LAB_000254a0;
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
      break;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      goto switchD_00025810_caseD_15;
    }
    *param_4 = pbVar11;
    uVar10 = 0;
    goto LAB_000254a0;
  }
  goto code_r0x00025878;
switchD_00025810_caseD_15:
  goto LAB_00025868;
code_r0x00025878:
  uVar10 = 0xffffffff;
  goto LAB_000254a0;
}



/* ===== FUN_00026740 @ 00026740 size=432 ===== */

undefined4
FUN_00026740(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,int *param_7
            )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  if (param_2 != param_3) {
    FUN_00021098();
    iVar1 = FUN_00021110();
    if (iVar1 != 0) {
      do {
        param_2 = param_2 + *(int *)(param_1 + 0x40);
        FUN_00021098(param_1,param_2,param_3);
        iVar1 = FUN_00021110();
      } while (iVar1 != 0);
      if (param_3 == param_2) goto LAB_00026758;
      *param_4 = param_2;
      while (iVar1 = FUN_00021098(param_1,param_2,param_3), iVar1 != -1) {
        if (iVar1 == 0x3d) {
          *param_5 = param_2;
          goto LAB_000267e0;
        }
        iVar1 = FUN_00021110();
        if (iVar1 != 0) {
          *param_5 = param_2;
          do {
            param_2 = param_2 + *(int *)(param_1 + 0x40);
            uVar4 = FUN_00021098(param_1,param_2,param_3);
            uVar6 = FUN_00021110(uVar4,uVar4);
          } while ((int)uVar6 != 0);
          if ((int)((ulonglong)uVar6 >> 0x20) != 0x3d) {
            *param_7 = param_2;
            return 0;
          }
LAB_000267e0:
          if (*param_4 != param_2) {
            do {
              param_2 = param_2 + *(int *)(param_1 + 0x40);
              uVar2 = FUN_00021098(param_1,param_2,param_3);
              iVar1 = FUN_00021110();
            } while (iVar1 != 0);
            if (uVar2 == 0x22 || uVar2 == 0x27) {
              param_2 = param_2 + *(int *)(param_1 + 0x40);
              *param_6 = param_2;
              do {
                uVar3 = FUN_00021098(param_1,param_2,param_3);
                if (uVar3 == (uVar2 & 0xff)) {
                  *param_7 = param_2 + *(int *)(param_1 + 0x40);
                  return 1;
                }
                if ((0x19 < (uVar3 & 0xffffffdf) - 0x41) && (9 < uVar3 - 0x30)) {
                  bVar5 = 0x5e < uVar3;
                  if (uVar3 != 0x5f) {
                    bVar5 = uVar3 != 0x2d;
                  }
                  if (bVar5 && (uVar3 != 0x5f && uVar3 != 0x2e)) break;
                }
                param_2 = param_2 + *(int *)(param_1 + 0x40);
              } while( true );
            }
          }
          break;
        }
        param_2 = param_2 + *(int *)(param_1 + 0x40);
      }
    }
    *param_7 = param_2;
    return 0;
  }
LAB_00026758:
  *param_4 = 0;
  return 1;
}



/* ===== FUN_000268f0 @ 000268f0 size=836 ===== */

void FUN_000268f0(code *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                 int *param_7,int *param_8,int *param_9,undefined4 *param_10,undefined4 *param_11)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  piVar6 = *(int **)(DAT_00026c38 + 0x2691c + DAT_00026c34);
  local_2c = *piVar6;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_3c = param_4 + *(int *)(param_3 + 0x40) * 5;
  param_5 = param_5 + *(int *)(param_3 + 0x40) * -2;
  iVar1 = FUN_00026740(param_3,local_3c,param_5,&local_34,&local_30,&local_38,&local_3c);
  iVar3 = local_3c;
  if ((iVar1 != 0) && (local_34 != 0)) {
    iVar3 = (**(code **)(param_3 + 0x18))(param_3,local_34,local_30,DAT_00026c3c + 0x270ce);
    if (iVar3 == 0) {
      iVar3 = local_34;
      if (param_2 != 0) {
LAB_00026a64:
        iVar3 = (**(code **)(param_3 + 0x18))(param_3,local_34,local_30,DAT_00026c40 + 0x27186);
        if (iVar3 == 0) {
LAB_00026a90:
          iVar1 = DAT_00026c44;
          iVar4 = (**(code **)(param_3 + 0x18))(param_3,local_34,local_30,DAT_00026c44 + 0x271bb);
          iVar3 = local_34;
          if (param_2 == 0 && iVar4 != 0) {
            iVar3 = (**(code **)(param_3 + 0x18))
                              (param_3,local_38,local_3c - *(int *)(param_3 + 0x40),iVar1 + 0x271c6)
            ;
            if (iVar3 == 0) {
              iVar1 = (**(code **)(param_3 + 0x18))
                                (param_3,local_38,local_3c - *(int *)(param_3 + 0x40),
                                 iVar1 + 0x271ca);
              iVar3 = local_38;
              if (iVar1 == 0) goto LAB_00026c14;
              if (param_11 != (undefined4 *)0x0) {
                *param_11 = 0;
              }
            }
            else if (param_11 != (undefined4 *)0x0) {
              *param_11 = 1;
            }
            while( true ) {
              FUN_00021098(param_3,local_3c,param_5);
              iVar3 = FUN_00021110();
              if (iVar3 == 0) break;
              local_3c = local_3c + *(int *)(param_3 + 0x40);
            }
            iVar3 = local_3c;
            if (local_3c == param_5) goto LAB_00026a48;
LAB_00026c14:
            uVar2 = 0;
            *param_6 = iVar3;
            goto LAB_00026a4c;
          }
        }
        else {
          uVar5 = FUN_00021098(param_3,local_38,param_5);
          iVar3 = local_38;
          if ((uVar5 & 0xffffffdf) - 0x41 < 0x1a) {
            if (param_9 != (int *)0x0) {
              *param_9 = local_38;
            }
            if (param_10 != (undefined4 *)0x0) {
              uVar2 = (*param_1)(param_3,local_38,local_3c - *(int *)(param_3 + 0x40));
              *param_10 = uVar2;
            }
            iVar1 = FUN_00026740(param_3,local_3c,param_5,&local_34,&local_30,&local_38,&local_3c);
            iVar3 = local_3c;
            if (iVar1 != 0) {
              if (local_34 == 0) goto LAB_00026a48;
              goto LAB_00026a90;
            }
            goto LAB_00026c14;
          }
        }
      }
    }
    else {
      if (param_7 != (int *)0x0) {
        *param_7 = local_38;
      }
      if (param_8 != (int *)0x0) {
        *param_8 = local_3c;
      }
      iVar1 = FUN_00026740(param_3,local_3c,param_5,&local_34,&local_30,&local_38,&local_3c);
      iVar3 = local_3c;
      if (iVar1 != 0) {
        if (local_34 != 0) goto LAB_00026a64;
        if (param_2 == 0) {
LAB_00026a48:
          uVar2 = 1;
          goto LAB_00026a4c;
        }
      }
    }
  }
  *param_6 = iVar3;
  uVar2 = 0;
LAB_00026a4c:
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_00026c48 @ 00026c48 size=68 ===== */

int FUN_00026c48(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)(&LAB_00026f70 + DAT_00026c8c);
  do {
    iVar1 = FUN_00021040(param_1,*puVar3);
    if (iVar1 != 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 6);
  return -1;
}



/* ===== FUN_00028df0 @ 00028df0 size=156 ===== */

void FUN_00028df0(uint param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = *param_2;
  do {
    if (uVar2 <= param_1) {
LAB_00028e2c:
      *param_2 = uVar2;
      return;
    }
    bVar1 = *(byte *)(uVar2 - 1);
    if ((bVar1 & 0xf8) == 0xf0) {
      if (3 < iVar3 + 1U) {
        uVar2 = uVar2 + 3;
        goto LAB_00028e2c;
      }
LAB_00028e84:
      iVar3 = 0;
    }
    else {
      if ((bVar1 & 0xf0) == 0xe0) {
        if (iVar3 + 1U < 3) goto LAB_00028e84;
        uVar2 = uVar2 + 2;
        goto LAB_00028e2c;
      }
      if ((bVar1 & 0xe0) == 0xc0) {
        if (iVar3 + 1U < 2) goto LAB_00028e84;
        uVar2 = uVar2 + 1;
        goto LAB_00028e2c;
      }
      if ((bVar1 & 0x80) == 0) goto LAB_00028e2c;
    }
    iVar3 = iVar3 + 1;
    uVar2 = uVar2 - 1;
  } while( true );
}



/* ===== FUN_00028e8c @ 00028e8c size=148 ===== */

uint FUN_00028e8c(undefined4 param_1,int *param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t __n;
  bool bVar3;
  uint local_1c;
  
  iVar1 = *param_2;
  param_5 = param_5 - *param_4;
  iVar2 = param_3 - iVar1;
  if (param_5 < iVar2) {
    param_3 = iVar1 + param_5;
  }
  local_1c = param_3;
  FUN_00028df0(iVar1,&local_1c,iVar2,*param_4,param_1);
  bVar3 = param_3 <= local_1c;
  __n = local_1c - *param_2;
  if (bVar3) {
    param_3 = 0;
  }
  if (!bVar3) {
    param_3 = 1;
  }
  memcpy((void *)*param_4,(void *)*param_2,__n);
  if (param_5 < iVar2) {
    param_3 = 2;
  }
  *param_2 = *param_2 + __n;
  *param_4 = *param_4 + __n;
  return param_3;
}



/* ===== FUN_00028f20 @ 00028f20 size=204 ===== */

undefined4 FUN_00028f20(uint param_1,byte *param_2)

{
  byte bVar1;
  
  if (-1 < (int)param_1) {
    bVar1 = (byte)param_1;
    if ((int)param_1 < 0x80) {
      *param_2 = bVar1;
      return 1;
    }
    if ((int)param_1 < 0x800) {
      *param_2 = (byte)((int)param_1 >> 6) | 0xc0;
      param_2[1] = ~((byte)~(byte)(((param_1 & 0x3f) << 0x19) >> 0x18) >> 1);
      return 2;
    }
    if ((int)param_1 < 0x10000) {
      *param_2 = (byte)((int)param_1 >> 0xc) | 0xe0;
      param_2[1] = (byte)((param_1 << 0x14) >> 0x1a) | 0x80;
      param_2[2] = bVar1 & 0x3f | 0x80;
      return 3;
    }
    if ((int)param_1 < 0x110000) {
      *param_2 = (byte)((int)param_1 >> 0x12) | 0xf0;
      param_2[1] = (byte)((param_1 << 0xe) >> 0x1a) | 0x80;
      param_2[3] = bVar1 & 0x3f | 0x80;
      param_2[2] = (byte)((param_1 << 0x14) >> 0x1a) | 0x80;
      return 4;
    }
  }
  return 0;
}



/* ===== FUN_00028fec @ 00028fec size=260 ===== */

void FUN_00028fec(int param_1,undefined4 *param_2,byte *param_3,int *param_4,int param_5)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  int iStack_30;
  int local_2c;
  byte *pbStack_28;
  
  piVar4 = *(int **)(DAT_000290f0 + 0x2900c + DAT_000290f4);
  local_2c = *piVar4;
  iStack_30 = param_1;
  pbStack_28 = param_3;
  do {
    pbVar2 = (byte *)*param_2;
    if (pbVar2 == param_3) {
      uVar1 = 0;
LAB_00029074:
      if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar1);
      }
      return;
    }
    uVar3 = (uint)*(byte *)(param_1 + (*pbVar2 + 0xdd) * 4);
    if (uVar3 != 0) {
      if ((int)uVar3 <= param_5 - *param_4) {
        uVar5 = CONCAT44(param_1 + (*pbVar2 + 0xdd) * 4 + 1,uVar3);
        *param_2 = pbVar2 + 1;
        goto LAB_000290a4;
      }
LAB_00029070:
      uVar1 = 2;
      goto LAB_00029074;
    }
    uVar1 = (**(code **)(param_1 + 0x16c))(*(undefined4 *)(param_1 + 0x170),pbVar2);
    uVar5 = FUN_00028f20(uVar1,&iStack_30);
    if (param_5 - *param_4 < (int)uVar5) goto LAB_00029070;
    *param_2 = (byte *)*param_2 + (*(byte *)(param_1 + (uint)*(byte *)*param_2 + 0x48) - 3);
LAB_000290a4:
    memcpy((void *)*param_4,(void *)((ulonglong)uVar5 >> 0x20),(size_t)uVar5);
    *param_4 = *param_4 + (size_t)uVar5;
  } while( true );
}



/* ===== FUN_00029148 @ 00029148 size=8 ===== */

undefined4 FUN_00029148(void)

{
  return 0x774;
}



/* ===== FUN_00029150 @ 00029150 size=632 ===== */

void * FUN_00029150(void *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  void *pvVar10;
  undefined2 *puVar11;
  uint uVar12;
  
  pcVar7 = (char *)(DAT_000293c8 + 0x29325);
  memcpy(param_1,(void *)(DAT_000293c8 + 0x292dc),0x16c);
  iVar6 = DAT_000293d0;
  iVar5 = 0;
  while (iVar5 = iVar5 + 1, iVar5 != 0x80) {
    pcVar9 = pcVar7 + 1;
    cVar3 = *pcVar7;
    pcVar7 = pcVar9;
    if ((cVar3 != '\x1c' && cVar3 != '\0') && (*(int *)(param_2 + iVar5 * 4) != iVar5)) {
      return (void *)0x0;
    }
  }
  pcVar7 = (char *)((int)param_1 + 0x48);
  puVar11 = (undefined2 *)((int)param_1 + 0x174);
  iVar5 = DAT_000293cc + 0x291ac;
  uVar12 = 0;
  pvVar10 = param_1;
  do {
    uVar8 = *(uint *)(param_2 + uVar12 * 4);
    if (uVar8 == 0xffffffff) {
      *pcVar7 = '\x01';
      *puVar11 = 0xffff;
      *(undefined1 *)((int)pvVar10 + 0x374) = 1;
LAB_000291d8:
      *(undefined1 *)((int)pvVar10 + 0x375) = 0;
    }
    else if ((int)uVar8 < 0) {
      if (param_3 == 0 || (int)uVar8 < -4) {
        return (void *)0x0;
      }
      *pcVar7 = '\x03' - (char)uVar8;
      *(undefined1 *)((int)pvVar10 + 0x374) = 0;
      *puVar11 = 0;
    }
    else if ((int)uVar8 < 0x80) {
      cVar3 = *(char *)(iVar6 + uVar8 + 0x29368);
      if (uVar8 != uVar12 && (cVar3 != '\x1c' && cVar3 != '\0')) {
        return (void *)0x0;
      }
      *pcVar7 = cVar3;
      *(undefined1 *)((int)pvVar10 + 0x374) = 1;
      *(char *)((int)pvVar10 + 0x375) = (char)uVar8;
      if (uVar8 == 0) {
        uVar8 = 0xffff;
      }
      *puVar11 = (short)uVar8;
    }
    else {
      iVar2 = FUN_00021140(uVar8);
      if (iVar2 < 0) {
        *pcVar7 = '\0';
        *puVar11 = 0xffff;
        *(undefined1 *)((int)pvVar10 + 0x374) = 1;
        goto LAB_000291d8;
      }
      if (0xffff < (int)uVar8) {
        return (void *)0x0;
      }
      iVar2 = iVar5 + ((int)uVar8 >> 8);
      uVar4 = (uVar8 & 0xff) >> 5;
      if ((*(uint *)(iVar5 + (uVar4 + (uint)*(byte *)(iVar2 + 0x600) * 8) * 4) >> (uVar8 & 0x1f) & 1
          ) == 0) {
        if ((*(uint *)(iVar5 + (uVar4 + (uint)*(byte *)(iVar2 + 0x500) * 8) * 4) >> (uVar8 & 0x1f) &
            1) == 0) {
          cVar3 = '\x1c';
        }
        else {
          cVar3 = '\x1a';
        }
      }
      else {
        cVar3 = '\x16';
      }
      *pcVar7 = cVar3;
      uVar1 = FUN_00028f20(uVar8,(int)pvVar10 + 0x375);
      *(undefined1 *)((int)pvVar10 + 0x374) = uVar1;
      *puVar11 = (short)uVar8;
    }
    uVar12 = uVar12 + 1;
    pcVar7 = pcVar7 + 1;
    puVar11 = puVar11 + 1;
    pvVar10 = (void *)((int)pvVar10 + 4);
    if (uVar12 == 0x100) {
      *(int *)((int)param_1 + 0x16c) = param_3;
      *(undefined4 *)((int)param_1 + 0x170) = param_4;
      if (param_3 != 0) {
        iVar6 = DAT_000293d4 + 0x29274;
        *(int *)((int)param_1 + 0x148) = iVar6;
        *(int *)((int)param_1 + 0x14c) = iVar6;
        *(int *)((int)param_1 + 0x150) = iVar6;
        iVar6 = DAT_000293d8 + 0x29288;
        *(int *)((int)param_1 + 0x154) = iVar6;
        *(int *)((int)param_1 + 0x158) = iVar6;
        *(int *)((int)param_1 + 0x15c) = iVar6;
        iVar6 = DAT_000293dc + 0x2929c;
        *(int *)((int)param_1 + 0x160) = iVar6;
        *(int *)((int)param_1 + 0x164) = iVar6;
        *(int *)((int)param_1 + 0x168) = iVar6;
      }
      *(int *)((int)param_1 + 0x38) = DAT_000293e0 + 0x292b4;
      *(int *)((int)param_1 + 0x3c) = DAT_000293e4 + 0x292c0;
      return param_1;
    }
  } while( true );
}



/* ===== FUN_000293e8 @ 000293e8 size=16 ===== */

int FUN_000293e8(void)

{
  return DAT_000293f8 + 0x2971c;
}



/* ===== FUN_00029414 @ 00029414 size=100 ===== */

undefined4 FUN_00029414(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = 6;
  }
  else {
    iVar2 = FUN_00026c48();
    if (iVar2 == -1) {
      return 0;
    }
  }
  iVar1 = DAT_00029478;
  *(char *)((int)param_1 + 0x45) = (char)iVar2;
  *param_1 = iVar1 + 0x29454;
  iVar2 = DAT_0002947c;
  param_1[0x12] = (int)param_2;
  param_1[1] = iVar2 + 0x29464;
  param_1[0xc] = DAT_00029480 + 0x29470;
  *param_2 = (int)param_1;
  return 1;
}



/* ===== FUN_00029484 @ 00029484 size=88 ===== */

void FUN_00029484(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_000268f0(DAT_000294dc + 0x294d4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10);
  return;
}



/* ===== FUN_000294e0 @ 000294e0 size=16 ===== */

int FUN_000294e0(void)

{
  return DAT_000294f0 + 0x29aec;
}



/* ===== FUN_0002950c @ 0002950c size=100 ===== */

undefined4 FUN_0002950c(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = 6;
  }
  else {
    iVar2 = FUN_00026c48();
    if (iVar2 == -1) {
      return 0;
    }
  }
  iVar1 = DAT_00029570;
  *(char *)((int)param_1 + 0x45) = (char)iVar2;
  *param_1 = iVar1 + 0x2954c;
  iVar2 = DAT_00029574;
  param_1[0x12] = (int)param_2;
  param_1[1] = iVar2 + 0x2955c;
  param_1[0xc] = DAT_00029578 + 0x29568;
  *param_2 = (int)param_1;
  return 1;
}



/* ===== FUN_0002957c @ 0002957c size=88 ===== */

void FUN_0002957c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_000268f0(DAT_000295d4 + 0x295cc,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10);
  return;
}



/* ===== FUN_000295d8 @ 000295d8 size=24 ===== */

void FUN_000295d8(void)

{
  int iVar1;
  
  iVar1 = FUN_00029150();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x82) = 0x17;
  }
  return;
}



/* ===== FUN_00029628 @ 00029628 size=328 ===== */

undefined4 FUN_00029628(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  switch(param_2) {
  case 0xb:
    *param_1 = DAT_0002974c + 0x296d4;
    return 0x37;
  case 0xc:
    *param_1 = DAT_00029748 + 0x296c0;
    return 1;
  case 0xd:
    *param_1 = DAT_00029750 + 0x296e8;
    return 0x38;
  case 0xe:
    return 0;
  case 0xf:
    *param_1 = DAT_00029744 + 0x296a8;
    return 0;
  case 0x10:
    iVar1 = (**(code **)(param_5 + 0x18))
                      (param_5,param_3 + *(int *)(param_5 + 0x40) * 2,param_4,DAT_00029754 + 0x29700
                      );
    if (iVar1 != 0) {
      *param_1 = DAT_00029758 + 0x2971c;
      return 3;
    }
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
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
    *param_1 = DAT_0002975c + 0x29730;
    return 2;
  }
  if (param_1[4] == 0 && param_2 == 0x1c) {
    return 0x3b;
  }
  *param_1 = DAT_00029624 + 0x29614;
  return 0xffffffff;
}



/* ===== FUN_0002aac8 @ 0002aac8 size=228 ===== */

undefined4 FUN_0002aac8(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  switch(param_2) {
  case 0xb:
    return 0x37;
  case 0xc:
    break;
  case 0xd:
    return 0x38;
  case 0xe:
    return 0;
  case 0xf:
    return 0;
  case 0x10:
    iVar1 = (**(code **)(param_5 + 0x18))
                      (param_5,param_3 + *(int *)(param_5 + 0x40) * 2,param_4,DAT_0002abac + 0x2ab60
                      );
    if (iVar1 != 0) {
      *param_1 = DAT_0002abb0 + 0x2ab7c;
      return 3;
    }
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
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
    *param_1 = DAT_0002abb4 + 0x2ab90;
    return 2;
  }
  if (param_1[4] == 0 && param_2 == 0x1c) {
    return 0x3b;
  }
  *param_1 = DAT_00029624 + 0x29614;
  return 0xffffffff;
}



/* ===== FUN_0002ae34 @ 0002ae34 size=36 ===== */

void FUN_0002ae34(int *param_1)

{
  *param_1 = DAT_0002ae58 + 0x2ae40;
  param_1[4] = 1;
  param_1[3] = 0;
  param_1[5] = 0;
  return;
}



/* ===== FUN_0002ae5c @ 0002ae5c size=28 ===== */

void FUN_0002ae5c(int *param_1)

{
  *param_1 = DAT_0002ae78 + 0x2ae68;
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}



/* ===== FUN_0002b040 @ 0002b040 size=116 ===== */

uint FUN_0002b040(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0 && param_2 == 0) {
    return param_1;
  }
  uVar1 = param_1;
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = param_1;
  }
  iVar5 = 0x5b000000;
  if (param_2 == 0) {
    iVar5 = 0x4b000000;
  }
  uVar3 = LZCOUNT(uVar2);
  uVar4 = uVar3 - 8;
  iVar5 = iVar5 + -0x800000 + uVar4 * -0x800000;
  if (uVar3 < 8) {
    uVar4 = uVar2 << uVar3 + 0x18;
    uVar2 = (iVar5 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar4 >> 0x1f);
    if (uVar1 == 0 && (uVar4 & 0x7fffffff) == 0) {
      uVar2 = uVar2 & ~(uVar4 >> 0x1f);
    }
    return uVar2;
  }
  uVar3 = uVar1 << (uVar4 & 0xff);
  uVar2 = iVar5 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
          (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}



/* ===== _fini @ 0002b0cc size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::memcmp @ 00040000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 00040008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0004000c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00040010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 00040014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00040018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0004001c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00040020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__isnanf @ 00040024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __isnanf(float __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00040028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getrandom @ 0004002c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getrandom(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00040030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00040038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0004003c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00040040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 00040044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00040048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0004004c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00040050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00040054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00040058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0004005c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 00040060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00040064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00040068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0004006c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00040070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00040074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


