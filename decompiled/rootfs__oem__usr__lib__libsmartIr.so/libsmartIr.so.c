// libsmartIr.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001083c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010860 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002200c)();
  return;
}



/* ===== std::pow<float,int> @ 0001086c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::pow<float,int>(float param_1,int param_2)

{
  (*(code *)PTR_pow<float,int>_00022010)(param_2);
  return;
}



/* ===== <EXTERNAL>::getenv @ 00010878 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00022014)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010884 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00022018)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010890 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002201c)(__size);
  return pvVar1;
}



/* ===== smart_ir_get_env_value @ 0001089c size=12 ===== */

void smart_ir_get_env_value(void)

{
  (*(code *)PTR_smart_ir_get_env_value_00022020)();
  return;
}



/* ===== <EXTERNAL>::strtoull @ 000108a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_00022024)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000108b4 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00022028)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_queryExpResInfo @ 000108c0 size=12 ===== */

void rk_aiq_user_api2_ae_queryExpResInfo(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_queryExpResInfo_0002202c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_getWorkingMode @ 000108cc size=12 ===== */

void rk_aiq_uapi2_sysctl_getWorkingMode(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_getWorkingMode_00022030)();
  return;
}



/* ===== <EXTERNAL>::pow @ 000108d8 size=12 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000108e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double pow(double __x,double __y)

{
  (*(code *)PTR_pow_00022034)(SUB84(__x,0),(int)((ulonglong)__x >> 0x20),SUB84(__y,0));
  return __x;
}



/* ===== smart_ir_get_log_level @ 000108e4 size=12 ===== */

void smart_ir_get_log_level(void)

{
  (*(code *)PTR_smart_ir_get_log_level_00022038)();
  return;
}



/* ===== <EXTERNAL>::free @ 000108f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002203c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::printf @ 000108fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022040)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_l2d @ 00010908 size=12 ===== */

void __aeabi_l2d(void)

{
  (*(code *)PTR___aeabi_l2d_00022044)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010914 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022048)();
  return;
}



/* ===== entry @ 00010920 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_0001096c + 0x10938 == DAT_00010968 + 0x10930) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010970 + 0x10940 + DAT_00010974);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000109dc size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010a50 + 0x109f8;
  if (*(char *)(DAT_00010a4c + 0x109ec) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010a54) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010a58 + 0x10a18));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00010a5c) != 0) {
    __deregister_frame_info(DAT_00010a60 + 0x10a38);
  }
  *(undefined1 *)(DAT_00010a64 + 0x10a48) = 1;
  return;
}



/* ===== _INIT_0 @ 00010a68 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010aa0 + 0x10a78 + DAT_00010aa4) != 0) {
    __register_frame_info(DAT_00010aac + 0x10a98,DAT_00010aa8 + 0x10a94);
  }
  if (((DAT_000109d0 + 0x10990) - (DAT_000109cc + 0x10988) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000109d4 + 0x10998 + DAT_000109d8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== smart_ir_get_env_value @ 00010ab0 size=80 ===== */

undefined4 smart_ir_get_env_value(char *param_1,ulonglong *param_2)

{
  char *__nptr;
  ulonglong uVar1;
  
  if ((param_1 != (char *)0x0 && param_2 != (ulonglong *)0x0) &&
     (__nptr = getenv(param_1), __nptr != (char *)0x0)) {
    uVar1 = strtoull(__nptr,(char **)0x0,0x10);
    *param_2 = uVar1;
    return 1;
  }
  return 0;
}



/* ===== smart_ir_get_log_level @ 00010b00 size=140 ===== */

void smart_ir_get_log_level(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  int *piVar1;
  undefined4 local_18;
  uint uStack_14;
  undefined4 uStack_10;
  int local_c;
  
  piVar1 = *(int **)(DAT_00010b8c + 0x10b18 + DAT_00010b90);
  local_c = *piVar1;
  local_18 = 0xff0;
  uStack_14 = 0;
  uStack_10 = param_3;
  smart_ir_get_env_value(DAT_00010b94 + 0x10b24,&local_18);
  printf((char *)(DAT_00010b98 + 0x10b48),extraout_r1,local_18,uStack_14);
  if ((uStack_14 & 8) != 0) {
    *(undefined1 *)(DAT_00010b9c + 0x10b6c) = 1;
  }
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}



/* ===== rk_smart_ir_init @ 00010ba0 size=104 ===== */

undefined4 * rk_smart_ir_init(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = malloc(0x2c);
  uVar1 = DAT_00010c08;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[2] = uVar1;
    uVar1 = DAT_00010c0c;
    *(undefined8 *)(puVar2 + 8) = 0;
    puVar2[3] = uVar1;
    puVar2[4] = 0x3f800000;
    puVar2[5] = 0x3f800000;
    uVar1 = DAT_00010c10;
    *(undefined8 *)(puVar2 + 9) = 0;
    puVar2[6] = uVar1;
    puVar2[7] = DAT_00010c14;
    puVar2[1] = 0xffffffff;
  }
  smart_ir_get_log_level();
  return puVar2;
}



/* ===== rk_smart_ir_deInit @ 00010c18 size=32 ===== */

undefined4 rk_smart_ir_deInit(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return 0;
  }
  return 0;
}



/* ===== rk_smart_ir_config @ 00010c38 size=180 ===== */

undefined4 rk_smart_ir_config(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 8) = *param_2;
  *(float *)(param_1 + 0xc) = fVar1;
  *(float *)(param_1 + 0x10) = fVar2;
  *(float *)(param_1 + 0x14) = fVar3;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  *(float *)(param_1 + 0x18) = param_2[4];
  *(float *)(param_1 + 0x1c) = fVar1;
  *(float *)(param_1 + 0x20) = fVar2;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  if (*(char *)(DAT_00010cec + 0x10c7c) != '\0') {
    printf((char *)(DAT_00010cf0 + 0x10ca0),fVar1,SUB84((double)*param_2,0),
           (int)((ulonglong)(double)*param_2 >> 0x20),(double)param_2[1],(double)param_2[2],
           (double)param_2[3],(double)param_2[4],(double)param_2[5],(uint)*(ushort *)(param_2 + 6));
  }
  return 0;
}



/* ===== rk_smart_ir_set_status @ 00010cf4 size=12 ===== */

undefined4 rk_smart_ir_set_status(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return 0;
}



/* ===== std::pow<float,int> @ 00010d00 size=16 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__promote_2<float, int, __gnu_cxx::__promote<float,
   std::__is_integer<float>::__value>::__type, __gnu_cxx::__promote<int,
   std::__is_integer<int>::__value>::__type>::__type std::pow<float, int>(float, int) */

void std::pow<float,int>(float param_1,int param_2)

{
  uint in_fpscr;
  double __y;
  
  __y = (double)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  pow((double)param_1,__y);
  return;
}



/* ===== rk_smart_ir_runOnce @ 00010d10 size=1080 ===== */

void rk_smart_ir_runOnce(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  short sVar5;
  ushort *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint in_fpscr;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  undefined4 local_188;
  int local_184 [3];
  byte local_178 [8];
  float local_170;
  float local_14c;
  float local_148;
  int local_54;
  
  piVar7 = *(int **)(DAT_00011154 + 0x10d34 + DAT_00011158);
  local_54 = *piVar7;
  if (param_1[1] == -1) {
    iVar9 = rk_aiq_uapi2_sysctl_getWorkingMode(*param_1,&local_188);
    if (iVar9 == 0) {
      param_1[1] = local_188;
    }
  }
  else {
    iVar9 = 0;
  }
  local_184[0] = 0;
  local_184[1] = 0;
  local_184[2] = 0;
  if (param_2[0x10ee] != 4) goto LAB_00011080;
  rk_aiq_user_api2_ae_queryExpResInfo(*param_1,local_178);
  fVar16 = DAT_0001114c;
  iVar10 = 0;
  puVar11 = param_2 + 0x1126;
  fVar18 = DAT_00011148;
  fVar19 = DAT_00011148;
  fVar17 = DAT_00011148;
  fVar22 = DAT_00011148;
  do {
    puVar12 = puVar11 + 8;
    dVar21 = (double)__aeabi_l2d(puVar11[2],puVar11[3]);
    dVar23 = (double)__aeabi_l2d(*puVar11,puVar11[1]);
    fVar20 = (float)(dVar23 / dVar21);
    dVar23 = (double)__aeabi_l2d(puVar11[4],puVar11[5]);
    fVar17 = fVar17 + fVar20 / fVar16;
    fVar15 = (float)(dVar23 / dVar21);
    fVar18 = fVar18 + fVar15 / fVar16;
    uVar13 = std::pow<float,int>(fVar20 - (float)param_1[4],2);
    uVar14 = std::pow<float,int>(fVar15 - (float)param_1[5],2);
    dVar21 = pow((double)(float)((double)CONCAT44(extraout_s1,uVar13) +
                                (double)CONCAT44(extraout_s1_00,uVar14)),0.5);
    in_fpscr = in_fpscr & 0xfffffff | (uint)((float)param_1[6] == (float)dVar21) << 0x1e |
               (uint)((float)dVar21 <= (float)param_1[6]) << 0x1d;
    bVar3 = (byte)(in_fpscr >> 0x18);
    if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) {
      fVar22 = fVar22 + fVar20;
      iVar10 = iVar10 + 1;
      fVar19 = fVar19 + fVar15;
    }
    puVar11 = puVar12;
  } while (param_2 + 0x182e != puVar12);
  uVar13 = std::pow<float,int>(fVar17 - (float)param_1[4],2);
  uVar14 = std::pow<float,int>(fVar18 - (float)param_1[5],2);
  dVar21 = pow((double)(float)((double)CONCAT44(extraout_s1_01,uVar13) +
                              (double)CONCAT44(extraout_s1_02,uVar14)),0.5);
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  fVar16 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
  uVar13 = std::pow<float,int>(fVar22 / fVar16 - (float)param_1[4],2);
  uVar14 = std::pow<float,int>(fVar19 / fVar16 - (float)param_1[5],2);
  dVar23 = pow((double)(float)((double)CONCAT44(extraout_s1_03,uVar13) +
                              (double)CONCAT44(extraout_s1_04,uVar14)),0.5);
  iVar10 = param_1[9];
  if ((iVar10 == 1) && (local_178[0] == 0)) {
    *(undefined2 *)(param_1 + 10) = 0;
  }
  fVar22 = (float)param_1[2];
  iVar4 = param_1[1];
  puVar6 = (ushort *)((int)param_2 + 0x54e);
  do {
    if (iVar4 == 0) {
      fVar19 = (float)param_2[0x10b5];
      fVar15 = (float)param_2[0x10b4] * DAT_00011150;
      fVar16 = (float)VectorSignedToFloat((uint)*puVar6,(byte)(in_fpscr >> 0x16) & 3);
    }
    else if (iVar4 == 0x10) {
      fVar19 = (float)param_2[0x10cd];
      fVar15 = (float)param_2[0x10cc] * DAT_00011150;
      fVar16 = (float)VectorSignedToFloat((uint)puVar6[0x828],(byte)(in_fpscr >> 0x16) & 3);
    }
    else {
      fVar19 = (float)param_2[0x10d9];
      fVar15 = (float)param_2[0x10d8] * DAT_00011150;
      fVar16 = (float)VectorSignedToFloat((uint)puVar6[0x1050],(byte)(in_fpscr >> 0x16) & 3);
    }
    fVar16 = fVar16 / (fVar15 * fVar19);
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fVar16 < fVar22) << 0x1f;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      iVar8 = 2;
    }
    else {
      fVar19 = (float)param_1[3];
      uVar2 = uVar1 | (uint)(fVar16 < fVar19) << 0x1f | (uint)(fVar16 == fVar19) << 0x1e;
      in_fpscr = uVar2 | (uint)(NAN(fVar16) || NAN(fVar19)) << 0x1c;
      bVar3 = (byte)(uVar2 >> 0x18);
      iVar8 = 0;
      if (iVar10 == 1 && (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
      {
        in_fpscr = uVar1 | (uint)((float)dVar23 < (float)param_1[7]) << 0x1f;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          iVar8 = 2;
        }
        else {
          iVar8 = 1;
        }
      }
    }
    puVar6 = puVar6 + 1;
    local_184[iVar8] = local_184[iVar8] + 1;
  } while ((ushort *)(param_2 + 0x1c4) != puVar6);
  if (iVar10 == 0) {
    iVar4 = local_184[1];
    if (local_184[1] < 0xb4) {
      iVar4 = 0xb4;
    }
    if (local_184[2] <= iVar4) goto LAB_00011128;
LAB_00010fd8:
    sVar5 = *(short *)(param_1 + 10) + 1;
  }
  else {
    iVar4 = local_184[2];
    if (local_184[2] < 0x87) {
      iVar4 = 0x87;
    }
    if (iVar4 < local_184[1]) goto LAB_00010fd8;
LAB_00011128:
    sVar5 = 0;
  }
  *(short *)(param_1 + 10) = sVar5;
  if (*(char *)(DAT_0001115c + 0x10ff0) != '\0') {
    if (iVar10 == 0) {
      iVar10 = DAT_00011168 + 0x1113c;
    }
    else {
      iVar10 = DAT_00011160 + 0x11048;
    }
    printf((char *)(DAT_00011164 + 0x1105c),*param_2,(uint)local_178[0],local_184[1],
           (double)local_170,(double)local_14c,(double)local_148,(double)fVar17,(double)fVar18,
           (double)(float)dVar21,(double)(float)dVar23,local_184[0],local_184[1],local_184[2],
           (uint)*(ushort *)(param_1 + 10),iVar10);
  }
LAB_00011080:
  if (*(ushort *)(param_1 + 8) < *(ushort *)(param_1 + 10)) {
    param_1[9] = (uint)(param_1[9] == 0);
    *(undefined2 *)(param_1 + 10) = 0;
  }
  *param_3 = param_1[9];
  if (local_54 == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar9);
}



/* ===== _fini @ 0001116c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_queryExpResInfo @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_queryExpResInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_getWorkingMode @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_getWorkingMode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pow @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double pow(double __x,double __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_l2d @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_l2d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


