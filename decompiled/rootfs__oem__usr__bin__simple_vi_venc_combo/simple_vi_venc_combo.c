// simple_vi_venc_combo — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010cf8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010d1c size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002300c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00010d28 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00023010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010d34 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00010d40 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_00023018)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00010d4c size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_0002301c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 00010d58 size=12 ===== */

void RK_MPI_VENC_SetComboAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetComboAttr_00023020)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023024)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00010d70 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00023028)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00010d7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0002302c)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00010d88 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_00023030)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00010d94 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00023034)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023038)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00010db8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00023040)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010dc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00023044)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00010dd0 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00023048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00010ddc size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0002304c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010de8 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00023050)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010df4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00023054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010e00 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00023058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00010e0c size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_0002305c)();
  return;
}



/* ===== <EXTERNAL>::fileno @ 00010e18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_00023060)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00010e24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00023064)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00010e30 size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_00023068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00010e3c size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_0002306c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00010e48 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_00023070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00010e54 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_00023074)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010e60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023078)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010e6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002307c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010e78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023080)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010e84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00010e90 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_00023088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010e9c size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0002308c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00010ea8 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_00023090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00010eb4 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_00023094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00010ec0 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00023098)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00010ecc size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_0002309c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010ed8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000230a0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010ee4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000230a4)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fsync @ 00010ef0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_000230a8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010efc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000230ac)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010f08 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_000230b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00010f14 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_000230b4)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010f20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000230b8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010f2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000230bc)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010f38 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000230c0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000230c4)(__th);
  return iVar1;
}



/* ===== FUN_00010f50 @ 00010f50 size=1776 ===== */

undefined4 FUN_00010f50(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *__nptr;
  undefined4 uVar7;
  uint *puVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_110;
  int local_10c;
  pthread_t local_108;
  uint local_104;
  uint local_100;
  pthread_t local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint local_9c;
  uint local_98;
  int local_94 [6];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_60;
  uint local_38;
  uint local_34;
  
  uVar7 = DAT_00011644;
  local_110 = 0;
  local_10c = 1;
  if (param_1 < 2) {
LAB_00010f78:
    FUN_00011800(*param_2);
    return 0;
  }
  signal(2,DAT_00011640);
  uVar13 = DAT_00011648;
  signal(0xf,DAT_00011640);
  puVar1 = DAT_0001164c;
  pcVar9 = (char *)0x0;
LAB_00010fb8:
  iVar4 = getopt_long(param_1,param_2,uVar13,uVar7,0);
  if (iVar4 != -1) {
    __nptr = (char *)*puVar1;
    if (iVar4 == 0x6c) {
      __nptr = (char *)atoi(__nptr);
      puVar8 = DAT_000116b8;
    }
    else {
      if (iVar4 < 0x6d) {
        if (iVar4 == 0x68) {
          __nptr = (char *)atoi(__nptr);
          puVar8 = DAT_00011670;
          goto LAB_00011394;
        }
        if (iVar4 == 0x6a) {
          __nptr = (char *)atoi(__nptr);
          puVar8 = DAT_000116c4;
          goto LAB_00011394;
        }
        if (iVar4 != 0x61) goto LAB_00010f78;
        pcVar9 = __nptr;
        if (__nptr == (char *)0x0) {
          pcVar11 = (char *)param_2[*DAT_000116b4];
          pcVar9 = pcVar11;
          if ((pcVar11 != (char *)0x0) && (pcVar9 = __nptr, *pcVar11 != '-')) {
            *DAT_000116b4 = *DAT_000116b4 + 1;
            pcVar9 = pcVar11;
          }
        }
        goto LAB_00010fb8;
      }
      if (iVar4 == 0x72) {
        __nptr = (char *)atoi(__nptr);
        puVar8 = DAT_000116bc;
        if ((__nptr != (char *)0x0) && (__nptr != (char *)0x1)) {
          RK_LOG(2,DAT_00011664,DAT_000116c0,DAT_00011668,0x26c);
          goto LAB_00010f78;
        }
      }
      else {
        if (iVar4 != 0x77) {
          puVar8 = DAT_00011654;
          if (iVar4 == 0x6f) goto LAB_00011394;
          goto LAB_00010f78;
        }
        __nptr = (char *)atoi(__nptr);
        puVar8 = DAT_0001166c;
      }
    }
LAB_00011394:
    *puVar8 = (uint)__nptr;
    goto LAB_00010fb8;
  }
  printf(DAT_00011650,0);
  printf(DAT_00011658,*DAT_00011654);
  printf(DAT_0001165c,pcVar9);
  RK_LOG(2,DAT_00011664,DAT_00011660,DAT_00011668,0x28c);
  iVar4 = RK_MPI_SYS_Init();
  puVar2 = DAT_00011670;
  puVar8 = DAT_0001166c;
  if (iVar4 != 0) goto LAB_00011304;
  uVar7 = 0;
  uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar15 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_fc = 0;
  uVar12 = *DAT_0001166c;
  local_f0 = 0;
  uVar10 = *DAT_00011670;
  uStack_f8 = uVar13;
  uStack_f4 = uVar14;
  uStack_ec = uVar13;
  uStack_e8 = uVar14;
  uStack_e4 = uVar15;
  iVar4 = RK_MPI_VI_GetDevAttr(0,&local_fc);
  if (iVar4 == DAT_00011674) {
    iVar4 = RK_MPI_VI_SetDevAttr(0,&local_fc);
    if (iVar4 == 0) goto LAB_00011418;
    RK_LOG(2,DAT_00011664,DAT_00011678,DAT_0001167c,0x122,iVar4);
    uVar7 = 0x123;
LAB_000110a0:
    FUN_000118b8(DAT_00011680,uVar7);
  }
  else {
    RK_LOG(2,DAT_00011664,DAT_000116c8,DAT_0001167c,0x127);
LAB_00011418:
    iVar4 = RK_MPI_VI_GetDevIsEnable(0);
    if (iVar4 != 0) {
      iVar4 = RK_MPI_VI_EnableDev(0);
      if (iVar4 == 0) {
        uStack_c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        local_e0 = 1;
        local_a8 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uStack_a4 = 0;
        local_dc = iVar4;
        local_d8 = uVar7;
        uStack_d4 = uVar13;
        uStack_d0 = uVar14;
        uStack_cc = uVar15;
        uStack_bc = uStack_c4;
        uStack_b4 = uStack_c4;
        uStack_ac = uStack_c4;
        uStack_a0 = uStack_c4;
        iVar4 = RK_MPI_VI_SetDevBindPipe(0,&local_e0);
        if (iVar4 == 0) goto LAB_00011510;
        RK_LOG(2,DAT_00011664,DAT_000116d0,DAT_0001167c,0x13a,iVar4);
        uVar7 = 0x13b;
        goto LAB_000114c0;
      }
      RK_LOG(2,DAT_00011664,DAT_000116cc,DAT_0001167c,0x130,iVar4);
      uVar7 = 0x131;
      goto LAB_000110a0;
    }
    RK_LOG(2,DAT_00011664,DAT_000116d8,DAT_0001167c,0x13f);
LAB_00011510:
    memset(local_94,0,0x5c);
    local_6c = 3;
    local_60 = 4;
    local_7c = 1;
    local_78 = 0xffffffff;
    local_74 = 0xffffffff;
    local_9c = uVar12;
    local_98 = uVar10;
    local_38 = uVar12;
    local_34 = uVar10;
    iVar4 = RK_MPI_VI_SetChnAttr(0,0,&local_9c);
    if (iVar4 == 0) {
      if (*DAT_000116bc != 0) {
        local_104 = uVar10 >> 2;
        local_108 = 1;
        local_100 = local_104 * uVar12 * 3 >> 1;
        iVar4 = RK_MPI_VI_SetChnWrapBufAttr(0,0,&local_108);
        if (iVar4 != 0) {
          RK_LOG(2,DAT_00011664,DAT_000116e0,DAT_0001167c,0x15f,iVar4);
          uVar7 = 0x160;
          goto LAB_000114c0;
        }
      }
      iVar4 = RK_MPI_VI_EnableChn(0);
      if (iVar4 != 0) {
        RK_LOG(2,DAT_00011664,DAT_000116e4,DAT_0001167c,0x168,iVar4);
        uVar7 = 0x169;
        goto LAB_000114c0;
      }
    }
    else {
      RK_LOG(2,DAT_00011664,DAT_000116dc,DAT_0001167c,0x151,iVar4);
      uVar7 = 0x152;
LAB_000114c0:
      FUN_000118b8(DAT_00011680,uVar7);
      uVar7 = RK_MPI_VI_DisableDev(0);
      RK_LOG(2,DAT_00011664,DAT_000116d4,DAT_0001167c,0x172,uVar7);
    }
  }
  FUN_00011e64(local_110,*puVar8,*puVar2,8,0);
  FUN_00011e64(local_10c,*puVar8,*puVar2,0xf,1);
  local_e0 = 8;
  local_9c = 4;
  local_dc = 0;
  local_d8 = 0;
  local_98 = 0;
  local_94[0] = local_110;
  iVar4 = RK_MPI_SYS_Bind(&local_e0,&local_9c);
  if (iVar4 != 0) {
    RK_LOG(2,DAT_00011664,DAT_00011684,DAT_00011668,0x2a5,iVar4);
    FUN_000118b8(DAT_00011688,0x2a6);
  }
  pthread_create(&local_108,(pthread_attr_t *)0x0,DAT_0001168c,&local_110);
  piVar3 = DAT_00011694;
  pthread_create(&local_fc,(pthread_attr_t *)0x0,DAT_00011690,&local_10c);
  printf(DAT_00011698,DAT_00011688);
  while (*piVar3 == 0) {
    sleep(1);
  }
  printf(DAT_0001169c,DAT_00011688);
  iVar4 = DAT_000116a0;
  *(undefined4 *)(DAT_000116a0 + local_10c * 4) = 1;
  pthread_join(local_fc,(void **)0x0);
  iVar5 = RK_MPI_VENC_StopRecvFrame(local_10c);
  iVar6 = RK_MPI_VENC_DestroyChn(local_10c);
  if (iVar5 != 0 || iVar6 != 0) {
    RK_LOG(2,DAT_00011664,DAT_000116a4,DAT_00011668,0x2ba);
  }
  RK_LOG(2,DAT_00011664,DAT_000116a8,DAT_00011668,0x2bd);
  *(undefined4 *)(iVar4 + local_110 * 4) = 1;
  pthread_join(local_108,(void **)0x0);
  local_d8 = 0;
  local_e0 = 8;
  local_dc = 0;
  local_9c = 4;
  local_98 = 0;
  local_94[0] = local_110;
  iVar4 = RK_MPI_SYS_UnBind(&local_e0,&local_9c);
  if (iVar4 != 0) {
    RK_LOG(2,DAT_00011664,DAT_00011684,DAT_00011668,0x2cc,iVar4);
  }
  iVar4 = RK_MPI_VENC_StopRecvFrame(local_110);
  iVar5 = RK_MPI_VENC_DestroyChn(local_110);
  if (iVar4 != 0 || iVar5 != 0) {
    RK_LOG(2,DAT_00011664,DAT_000116a4,DAT_00011668,0x2d3);
  }
  RK_LOG(2,DAT_00011664,DAT_000116ac,DAT_00011668,0x2d7);
  uVar10 = RK_MPI_VI_DisableChn(0);
  uVar12 = RK_MPI_VI_DisableDev(0);
  if ((uVar10 | uVar12) != 0) {
    RK_LOG(2,DAT_00011664,DAT_000116b0,DAT_00011668,0x2dd,uVar10 | uVar12);
  }
LAB_00011304:
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 000116e8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002303c)
            (DAT_0001171c,param_2,&stack0x00000004,DAT_00011720,DAT_00011718,param_1);
  return;
}



/* ===== FUN_00011724 @ 00011724 size=32 ===== */

void FUN_00011724(void)

{
  if (DAT_00011748 == DAT_00011744) {
    return;
  }
  if (DAT_0001174c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001174c)();
  return;
}



/* ===== _FINI_0 @ 00011788 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000117c4;
  if (*DAT_000117c4 != '\0') {
    return;
  }
  FUN_00011724();
  if (DAT_000117c8 != 0) {
    __deregister_frame_info(DAT_000117cc);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000117d0 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000117f4 != 0) {
    __register_frame_info(DAT_000117fc,DAT_000117f8);
  }
  if ((DAT_00011780 - DAT_0001177c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011784 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011784)();
  return;
}



/* ===== FUN_00011800 @ 00011800 size=80 ===== */

void FUN_00011800(undefined4 param_1)

{
  puts(DAT_00011850);
  printf(DAT_00011854,param_1);
  puts(DAT_00011858);
  puts(DAT_0001185c);
  puts(DAT_00011860);
  puts(DAT_00011864);
  puts(DAT_00011868);
  puts(DAT_0001186c);
  return;
}



/* ===== FUN_00011870 @ 00011870 size=56 ===== */

void FUN_00011870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_000118b0,DAT_000118a8,DAT_000118ac,0x57,param_1,param_2,param_4);
  *DAT_000118b4 = 1;
  return;
}



/* ===== FUN_000118b8 @ 000118b8 size=56 ===== */

void FUN_000118b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_000118f8,DAT_000118f0,DAT_000118f4,0x51,param_1,param_2,param_4);
  *DAT_000118fc = 1;
  return;
}



/* ===== FUN_00011900 @ 00011900 size=684 ===== */

undefined4 FUN_00011900(int *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  void *__ptr;
  FILE *__stream;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_2c4;
  char acStack_2c0 [256];
  undefined4 *local_1c0 [103];
  
  iVar6 = *param_1;
  memset(acStack_2c0,0,0xff);
  memset(local_1c0,0,400);
  local_1c0[0] = malloc(0x88);
  uVar1 = DAT_00011bb0;
  uVar5 = DAT_00011bac;
  if (local_1c0[0] == (undefined4 *)0x0) {
    RK_LOG(2,DAT_00011bac,DAT_00011bb4,DAT_00011bb0,0xd1,iVar6);
    uVar5 = 0xd2;
LAB_00011970:
    FUN_000118b8(DAT_00011bb8,uVar5);
  }
  else {
    uVar7 = 0;
    uVar9 = uVar7;
    while (*(int *)(DAT_00011bd4 + iVar6 * 4) == 0) {
      iVar4 = RK_MPI_VENC_GetStream(iVar6,local_1c0,2000);
      piVar3 = DAT_00011bd8;
      if (iVar4 == 0) {
        __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        iVar4 = *piVar3;
        if (iVar4 != 0) {
          snprintf(acStack_2c0,0xff,DAT_00011bdc,iVar4,iVar6,uVar7);
          __stream = fopen64(acStack_2c0,DAT_00011be0);
          if (__stream == (FILE *)0x0) {
            RK_LOG(2,DAT_00011bac,DAT_00011be4,DAT_00011bb0,0xe0,iVar6,*piVar3);
            uVar5 = 0xe1;
            goto LAB_00011970;
          }
          iVar4 = fileno(__stream);
          fwrite(__ptr,1,local_1c0[0][1],__stream);
          fflush(__stream);
          fsync(iVar4);
          fclose(__stream);
        }
        uVar8 = uVar9 + 1;
        iVar4 = iVar6;
        RK_LOG(2,uVar5,DAT_00011bbc,uVar1,0xf0,iVar6,uVar9);
        uVar7 = uVar7 + 1;
        uVar10 = uVar9;
        RK_MPI_VENC_ReleaseStream(iVar6,local_1c0);
        puVar2 = DAT_00011bc8;
        if (*DAT_00011bc0 <= (int)uVar8 && 0 < *DAT_00011bc0) {
          FUN_00011870(DAT_00011bb8,0xf7);
          break;
        }
        uVar9 = uVar8;
        if (*DAT_00011bc8 <= uVar7) {
          RK_LOG(2,uVar5,DAT_00011bcc,uVar1,0xfc,iVar4,uVar10);
          RK_MPI_VENC_StopRecvFrame(iVar6);
          local_2c4 = *puVar2;
          iVar4 = RK_MPI_VENC_StartRecvFrame(iVar6,&local_2c4);
          uVar7 = 0;
          if (iVar4 != 0) {
            RK_LOG(2,uVar5,DAT_00011bd0,uVar1,0x102);
          }
        }
      }
      else {
        RK_LOG(2,uVar5,DAT_00011be8,uVar1,0x108,iVar4);
      }
    }
    if (local_1c0[0] != (undefined4 *)0x0) {
      free(local_1c0[0]);
      local_1c0[0] = (undefined4 *)0x0;
    }
    RK_LOG(2,DAT_00011bac,DAT_00011bc4,DAT_00011bb0,0x110,iVar6);
  }
  return 0;
}



/* ===== FUN_00011bec @ 00011bec size=532 ===== */

undefined4 FUN_00011bec(int *param_1)

{
  int *piVar1;
  int iVar2;
  FILE *__stream;
  int iVar3;
  void *__ptr;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  char acStack_2c0 [256];
  undefined4 *local_1c0 [103];
  
  piVar1 = DAT_00011e00;
  iVar6 = *param_1;
  memset(acStack_2c0,0,0xff);
  iVar7 = *piVar1;
  if (iVar7 == 0) {
    __stream = (FILE *)0x0;
    iVar7 = 0;
  }
  else {
    snprintf(acStack_2c0,0xff,DAT_00011e04,iVar7,iVar6);
    __stream = fopen64(acStack_2c0,DAT_00011e08);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00011e0c,DAT_00011e10,DAT_00011e14,0x90,iVar6,*piVar1);
      uVar4 = 0x91;
      goto LAB_00011c7c;
    }
    iVar7 = fileno(__stream);
  }
  memset(local_1c0,0,400);
  local_1c0[0] = malloc(0x88);
  piVar1 = DAT_00011e2c;
  iVar2 = DAT_00011e28;
  uVar4 = DAT_00011e0c;
  if (local_1c0[0] != (undefined4 *)0x0) {
    iVar8 = 0;
    do {
      do {
        if (*(int *)(iVar2 + iVar6 * 4) != 0) {
LAB_00011d98:
          if (__stream != (FILE *)0x0) {
            fsync(iVar7);
            fclose(__stream);
          }
          if (local_1c0[0] != (undefined4 *)0x0) {
            free(local_1c0[0]);
            local_1c0[0] = (undefined4 *)0x0;
          }
          RK_LOG(2,DAT_00011e0c,DAT_00011e24,DAT_00011e14,0xbd,iVar6);
          return 0;
        }
        iVar3 = RK_MPI_VENC_GetStream(iVar6,local_1c0,0xffffffff);
      } while (iVar3 != 0);
      __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
      iVar5 = *piVar1;
      bVar9 = iVar8 == iVar5;
      iVar3 = iVar8 - iVar5;
      if (iVar8 >= iVar5) {
        bVar9 = iVar5 == 0;
        iVar3 = iVar5;
      }
      if (!bVar9 && iVar3 < 0 == (iVar8 < iVar5 && SBORROW4(iVar8,iVar5))) {
        RK_MPI_VENC_ReleaseStream(iVar6,local_1c0);
        FUN_00011870(DAT_00011e18,0xa4);
        goto LAB_00011d98;
      }
      if (__stream != (FILE *)0x0) {
        fwrite(__ptr,1,local_1c0[0][1],__stream);
        fflush(__stream);
      }
      RK_LOG(2,uVar4,DAT_00011e20,DAT_00011e14,0xad,iVar6,iVar8);
      RK_MPI_VENC_ReleaseStream(iVar6,local_1c0);
      iVar8 = iVar8 + 1;
    } while( true );
  }
  RK_LOG(2,DAT_00011e0c,DAT_00011e1c,DAT_00011e14,0x99,iVar6);
  uVar4 = 0x9a;
LAB_00011c7c:
  FUN_000118b8(DAT_00011e18,uVar4);
  return 0;
}



/* ===== FUN_00011e64 @ 00011e64 size=556 ===== */

uint FUN_00011e64(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_8c;
  int local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 local_28;
  
  memset(&local_a0,0,0x88);
  if ((param_4 == 8) || (param_4 == 0xf)) {
    local_78 = param_2 + 1U & 0xfffffffe;
    local_74 = param_3 + 1 & 0xfffffffe;
    local_8c = param_3 * param_2 >> 1;
    local_70 = 3;
    if (param_4 == 8) {
      local_50 = 1;
      local_4c = 0x32;
      local_28 = 1;
      local_38 = 0x800;
    }
    else if (param_4 == 0xf) {
      local_50 = 5;
    }
    local_a0 = param_4;
    local_9c = param_2;
    local_98 = param_3;
    local_80 = param_2;
    local_7c = param_3;
    uVar1 = RK_MPI_VENC_CreateChn(param_1,&local_a0);
    if (uVar1 == 0) {
      if (*DAT_000120a4 != 0) {
        local_ac = 1;
        local_a8 = param_3 >> 2;
        local_a4 = uVar1;
        iVar2 = RK_MPI_VENC_SetChnBufWrapAttr(param_1,&local_ac);
        if (iVar2 != 0) {
          RK_LOG(2,DAT_00012090,DAT_000120a8,DAT_00012094,0x1b5,iVar2);
          uVar3 = 0x1b6;
          goto LAB_00011f6c;
        }
      }
      if (param_4 == 0xf) {
        local_b0 = *DAT_000120ac;
      }
      else {
        local_b0 = 0xffffffff;
      }
      uVar1 = RK_MPI_VENC_StartRecvFrame(param_1,&local_b0);
      if (uVar1 == 0) {
        if (param_5 == 0) {
          return 0;
        }
        local_ac = 1;
        local_a8 = uVar1;
        iVar2 = RK_MPI_VENC_SetComboAttr(param_1,&local_ac);
        if (iVar2 == 0) {
          return 0;
        }
        RK_LOG(2,DAT_00012090,DAT_000120b4,DAT_00012094,0x1d0,iVar2);
        uVar3 = 0x1d1;
        goto LAB_00011f6c;
      }
      RK_LOG(2,DAT_00012090,DAT_000120b0,DAT_00012094,0x1c3,uVar1);
      uVar3 = 0x1c4;
    }
    else {
      RK_LOG(2,DAT_00012090,DAT_00012098,DAT_00012094,0x1a8,uVar1,param_1);
      uVar3 = 0x1a9;
    }
    FUN_000118b8(DAT_0001209c,uVar3);
  }
  else {
    RK_LOG(2,DAT_00012090,DAT_000120a0,DAT_00012094,0x184);
    uVar3 = 0x185;
LAB_00011f6c:
    uVar1 = 0xffffffff;
    FUN_000118b8(DAT_0001209c,uVar3);
  }
  return uVar1;
}



/* ===== _fini @ 000120b8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00024000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetComboAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000240b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000240b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000240b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000240bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000240c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


