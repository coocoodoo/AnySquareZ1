// simple_vi_tde — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010ccc size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010cf0 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002300c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010cfc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc @ 00010d08 size=12 ===== */

void RK_MPI_SYS_MmzAlloc(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzAlloc_00023014)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023018)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00010d20 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_0002301c)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_Open @ 00010d2c size=12 ===== */

void RK_TDE_Open(void)

{
  (*(code *)PTR_RK_TDE_Open_00023020)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00010d38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00023024)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00010d44 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_00023028)();
  return;
}



/* ===== <EXTERNAL>::prctl @ 00010d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0002302c)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00010d5c size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00023030)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00023038)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_TDE_QuickCopy @ 00010d80 size=12 ===== */

void RK_TDE_QuickCopy(void)

{
  (*(code *)PTR_RK_TDE_QuickCopy_0002303c)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00010d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00023040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00010d98 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00023044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010da4 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00023048)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010db0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002304c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010dbc size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00023050)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_EndJob @ 00010dc8 size=12 ===== */

void RK_TDE_EndJob(void)

{
  (*(code *)PTR_RK_TDE_EndJob_00023054)();
  return;
}



/* ===== <EXTERNAL>::fileno @ 00010dd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_00023058)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00010de0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002305c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00010dec size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_00023060)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_WaitForDone @ 00010df8 size=12 ===== */

void RK_TDE_WaitForDone(void)

{
  (*(code *)PTR_RK_TDE_WaitForDone_00023064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00010e04 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_00023068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00010e10 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_0002306c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00010e1c size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_00023070)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010e28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023074)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010e34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023078)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010e40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002307c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010e4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023080)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_BeginJob @ 00010e58 size=12 ===== */

void RK_TDE_BeginJob(void)

{
  (*(code *)PTR_RK_TDE_BeginJob_00023084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 00010e64 size=12 ===== */

void RK_MPI_SYS_Free(void)

{
  (*(code *)PTR_RK_MPI_SYS_Free_00023088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010e70 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0002308c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00010e7c size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00023090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00010e88 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00023094)();
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010e94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00023098)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fsync @ 00010ea0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_0002309c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010eac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000230a0)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010eb8 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_000230a4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00010ec4 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_000230a8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 00010ed0 size=12 ===== */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_TDE_GetPicBufferSize_000230ac)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010edc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000230b0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010ee8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000230b4)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::RK_TDE_CancelJob @ 00010ef4 size=12 ===== */

void RK_TDE_CancelJob(void)

{
  (*(code *)PTR_RK_TDE_CancelJob_000230b8)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_Close @ 00010f00 size=12 ===== */

void RK_TDE_Close(void)

{
  (*(code *)PTR_RK_TDE_Close_000230bc)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010f0c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000230c0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010f18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000230c4)(__th);
  return iVar1;
}



/* ===== FUN_00010f24 @ 00010f24 size=1080 ===== */

undefined4 FUN_00010f24(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *__nptr;
  undefined4 uVar6;
  pthread_t *ppVar7;
  char *pcVar8;
  pthread_t pVar9;
  char *pcVar10;
  pthread_t pVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  int iStack_dc;
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
  pthread_t local_9c;
  pthread_t local_98;
  undefined1 auStack_94 [24];
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_60;
  pthread_t local_38;
  pthread_t local_34;
  
  uVar6 = DAT_00011360;
  if (param_1 < 2) {
LAB_00010f3c:
    FUN_000114f4(*param_2);
    return 0;
  }
  signal(2,DAT_0001135c);
  uVar12 = DAT_00011364;
  signal(0xf,DAT_0001135c);
  puVar1 = DAT_00011368;
  pcVar8 = (char *)0x0;
LAB_00010f80:
  iVar3 = getopt_long(param_1,param_2,uVar12,uVar6,0);
  if (iVar3 != -1) {
    __nptr = (char *)*puVar1;
    if (iVar3 == 0x6c) {
      __nptr = (char *)atoi(__nptr);
      ppVar7 = DAT_000113bc;
    }
    else {
      if (iVar3 < 0x6d) {
        if (iVar3 != 0x61) {
          if (iVar3 == 0x68) {
            __nptr = (char *)atoi(__nptr);
            ppVar7 = DAT_00011380;
            goto LAB_00011134;
          }
          goto LAB_00010f3c;
        }
        pcVar8 = __nptr;
        if (__nptr == (char *)0x0) {
          pcVar10 = (char *)param_2[*DAT_000113b8];
          pcVar8 = pcVar10;
          if ((pcVar10 != (char *)0x0) && (pcVar8 = __nptr, *pcVar10 != '-')) {
            *DAT_000113b8 = *DAT_000113b8 + 1;
            pcVar8 = pcVar10;
          }
        }
        goto LAB_00010f80;
      }
      ppVar7 = DAT_00011370;
      if (iVar3 == 0x6f) goto LAB_00011134;
      if (iVar3 != 0x77) goto LAB_00010f3c;
      __nptr = (char *)atoi(__nptr);
      ppVar7 = DAT_0001137c;
    }
LAB_00011134:
    *ppVar7 = (pthread_t)__nptr;
    goto LAB_00010f80;
  }
  printf(DAT_0001136c,0);
  printf(DAT_00011374,*DAT_00011370);
  printf(DAT_00011378,pcVar8);
  iVar3 = RK_MPI_SYS_Init();
  if (iVar3 != 0) goto LAB_000110e8;
  uVar6 = 0;
  uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  pVar11 = *DAT_0001137c;
  pVar9 = *DAT_00011380;
  local_fc = 0;
  local_f0 = 0;
  uStack_f8 = uVar12;
  uStack_f4 = uVar13;
  uStack_ec = uVar12;
  uStack_e8 = uVar13;
  uStack_e4 = uVar14;
  iVar3 = RK_MPI_VI_GetDevAttr(0,&local_fc);
  if (iVar3 == DAT_00011384) {
    iVar3 = RK_MPI_VI_SetDevAttr(0,&local_fc);
    if (iVar3 == 0) goto LAB_000111a4;
    RK_LOG(2,DAT_00011388,DAT_0001138c,DAT_00011390,0xdf,iVar3);
    uVar6 = 0xe0;
LAB_0001104c:
    FUN_0001154c(DAT_00011394,uVar6);
  }
  else {
    RK_LOG(2,DAT_00011388,DAT_000113c0,DAT_00011390,0xe4);
LAB_000111a4:
    iVar3 = RK_MPI_VI_GetDevIsEnable(0);
    if (iVar3 != 0) {
      iVar3 = RK_MPI_VI_EnableDev(0);
      if (iVar3 == 0) {
        uStack_c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        local_e0 = 1;
        local_a8 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uStack_a4 = 0;
        iStack_dc = iVar3;
        local_d8 = uVar6;
        uStack_d4 = uVar12;
        uStack_d0 = uVar13;
        uStack_cc = uVar14;
        uStack_bc = uStack_c4;
        uStack_b4 = uStack_c4;
        uStack_ac = uStack_c4;
        uStack_a0 = uStack_c4;
        iVar3 = RK_MPI_VI_SetDevBindPipe(0,&local_e0);
        if (iVar3 == 0) goto LAB_0001129c;
        RK_LOG(2,DAT_00011388,DAT_000113c8,DAT_00011390,0xf7,iVar3);
        uVar6 = 0xf8;
        goto LAB_0001124c;
      }
      RK_LOG(2,DAT_00011388,DAT_000113c4,DAT_00011390,0xed,iVar3);
      uVar6 = 0xee;
      goto LAB_0001104c;
    }
    RK_LOG(2,DAT_00011388,DAT_000113d0,DAT_00011390,0xfc);
LAB_0001129c:
    memset(auStack_94,0,0x5c);
    local_60 = 4;
    local_7c = 1;
    uStack_78 = 0xffffffff;
    local_6c = 2;
    local_74 = 0xffffffff;
    local_9c = pVar11;
    local_98 = pVar9;
    local_38 = pVar11;
    local_34 = pVar9;
    iVar3 = RK_MPI_VI_SetChnAttr(0,0,&local_9c);
    if (iVar3 == 0) {
      iVar3 = RK_MPI_VI_EnableChn();
      if (iVar3 != 0) {
        RK_LOG(2,DAT_00011388,DAT_000113d8,DAT_00011390,0x116,iVar3);
        uVar6 = 0x117;
        goto LAB_0001124c;
      }
    }
    else {
      RK_LOG(2,DAT_00011388,DAT_000113d4,DAT_00011390,0x10e,iVar3);
      uVar6 = 0x10f;
LAB_0001124c:
      FUN_0001154c(DAT_00011394,uVar6);
      uVar6 = RK_MPI_VI_DisableDev(0);
      RK_LOG(2,DAT_00011388,DAT_000113cc,DAT_00011390,0x120,uVar6);
    }
  }
  pthread_create(&local_9c,(pthread_attr_t *)0x0,DAT_00011398,(void *)0x0);
  printf(DAT_000113a0,DAT_0001139c);
  piVar2 = DAT_000113a4;
  while (*piVar2 == 0) {
    sleep(1);
  }
  printf(DAT_000113a8,DAT_0001139c);
  *DAT_000113ac = 1;
  pthread_join(local_9c,(void **)0x0);
  uVar4 = RK_MPI_VI_DisableChn(0);
  uVar5 = RK_MPI_VI_DisableDev(0);
  if ((uVar4 | uVar5) != 0) {
    RK_LOG(2,DAT_00011388,DAT_000113b4,DAT_000113b0,0x233,uVar4 | uVar5);
  }
LAB_000110e8:
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 000113dc size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023034)
            (DAT_00011410,param_2,&stack0x00000004,DAT_00011414,DAT_0001140c,param_1);
  return;
}



/* ===== FUN_00011418 @ 00011418 size=32 ===== */

void FUN_00011418(void)

{
  if (DAT_0001143c == DAT_00011438) {
    return;
  }
  if (DAT_00011440 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011440)();
  return;
}



/* ===== _FINI_0 @ 0001147c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000114b8;
  if (*DAT_000114b8 != '\0') {
    return;
  }
  FUN_00011418();
  if (DAT_000114bc != 0) {
    __deregister_frame_info(DAT_000114c0);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000114c4 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000114e8 != 0) {
    __register_frame_info(DAT_000114f0,DAT_000114ec);
  }
  if ((DAT_00011474 - DAT_00011470 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011478 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001146c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011478)();
  return;
}



/* ===== FUN_000114f4 @ 000114f4 size=64 ===== */

void FUN_000114f4(undefined4 param_1)

{
  puts(DAT_00011534);
  printf(DAT_00011538,param_1);
  puts(DAT_0001153c);
  puts(DAT_00011540);
  puts(DAT_00011544);
  puts(DAT_00011548);
  return;
}



/* ===== FUN_0001154c @ 0001154c size=56 ===== */

void FUN_0001154c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_0001158c,DAT_00011584,DAT_00011588,0x51,param_1,param_2,param_4);
  *DAT_00011590 = 1;
  return;
}



/* ===== FUN_00011594 @ 00011594 size=1328 ===== */

undefined4 FUN_00011594(void)

{
  undefined4 uVar1;
  int iVar2;
  FILE *__stream;
  int iVar3;
  int iVar4;
  int iVar5;
  void *__ptr;
  undefined4 uVar6;
  size_t local_22c [4];
  int local_21c;
  undefined4 local_218;
  undefined4 local_214;
  int local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  int local_1cc;
  undefined4 local_1c8 [13];
  undefined4 local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  int local_178 [13];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  char acStack_128 [260];
  
  prctl(0xf,DAT_00011ac4);
  memset(acStack_128,0,0x100);
  local_22c[0] = 0;
  local_1f8 = 0;
  local_22c[1] = 0;
  local_22c[2] = 0;
  memset(local_1c8,0,0x50);
  memset(local_178,0,0x50);
  local_200 = 0x2c0;
  local_1fc = 0x240;
  iVar2 = RK_MPI_CAL_TDE_GetPicBufferSize(&local_200,local_22c);
  if (iVar2 != 0) {
    RK_LOG(2,DAT_00011ac8,DAT_00011acc,DAT_00011ad0,0x145,iVar2);
    uVar6 = 0x146;
LAB_00011634:
    FUN_0001154c(DAT_00011ad4,uVar6);
    return 0;
  }
  local_22c[3] = RK_MPI_SYS_MmzAlloc(local_178,0,0,local_22c[0]);
  if (local_22c[3] != 0) {
    RK_LOG(2,DAT_00011ac8,DAT_00011ad8,DAT_00011ad0,0x14c,local_22c[3]);
    uVar6 = 0x14d;
    goto LAB_00011634;
  }
  local_214 = 0x240;
  uStack_1d4 = 0x240;
  local_1e4 = *DAT_00011adc;
  local_204 = 0x240;
  local_1e8 = *DAT_00011ae0;
  local_218 = 0x2c0;
  local_1d0 = 0x2c0;
  local_208 = 0x2c0;
  iVar2 = 0;
  __stream = (FILE *)0x0;
  local_21c = local_22c[3];
  local_210 = local_22c[3];
  local_20c = local_22c[3];
  local_1ec = local_22c[3];
  local_1e0 = local_22c[3];
  local_1d8 = local_22c[3];
  local_1cc = local_22c[3];
  if (*DAT_00011ae4 == 0) {
LAB_00011774:
    iVar3 = RK_TDE_Open();
    uVar1 = DAT_00011ad0;
    uVar6 = DAT_00011ac8;
    if (iVar3 == 0) {
      iVar3 = 0;
      do {
        while( true ) {
          if (*DAT_00011af4 != 0) {
            RK_LOG(2,DAT_00011ac8,DAT_00011af8,DAT_00011ad0,0x1bc);
            goto LAB_00011888;
          }
          iVar4 = RK_MPI_VI_GetChnFrame(0,0,local_1c8,2000);
          if (iVar4 == 0) break;
          RK_LOG(2,uVar6,DAT_00011b30,uVar1,0x1b9,iVar4,0,0);
        }
        iVar4 = *DAT_00011b00;
        if (0 < iVar4 && iVar4 <= iVar3) {
          RK_LOG(2,DAT_00011ac8,DAT_00011b04,DAT_00011ad0,0x17b,iVar4);
          RK_MPI_VI_ReleaseChnFrame(0,0,local_1c8);
          RK_LOG(2,DAT_00011ac8,DAT_00011b08,DAT_00011b0c,0x57,DAT_00011ad4,0x17d);
          *DAT_00011b10 = 1;
          goto LAB_00011888;
        }
        iVar4 = RK_TDE_BeginJob();
        if (iVar4 == DAT_00011b14) {
          RK_LOG(2,DAT_00011ac8,DAT_00011b18,DAT_00011ad0,0x183);
          RK_MPI_VI_ReleaseChnFrame(0,0,local_1c8);
          uVar6 = 0x185;
          goto LAB_000118d4;
        }
        local_1f0 = local_1c8[0];
        local_1dc = local_178[0];
        local_144 = local_194;
        local_140 = local_190;
        local_13c = uStack_18c;
        iVar5 = RK_TDE_QuickCopy(iVar4,&local_1f0,local_22c + 3,&local_1dc,&local_210);
        if (iVar5 != 0) {
          RK_LOG(2,DAT_00011ac8,DAT_00011b1c,DAT_00011ad0,400,iVar5);
          RK_MPI_VI_ReleaseChnFrame(0,0,local_1c8);
          RK_TDE_CancelJob(iVar4);
          uVar6 = 0x193;
          goto LAB_000118d4;
        }
        iVar5 = RK_TDE_EndJob(iVar4,0,1,0xffffffff);
        if (iVar5 != 0) {
          RK_LOG(2,DAT_00011ac8,DAT_00011b20,DAT_00011ad0,0x199,iVar5);
          RK_MPI_VI_ReleaseChnFrame(0,0,local_1c8);
          RK_TDE_CancelJob(iVar4);
          uVar6 = 0x19c;
          goto LAB_000118d4;
        }
        iVar4 = RK_TDE_WaitForDone(iVar4);
        if (iVar4 != 0) {
          RK_LOG(2,DAT_00011ac8,DAT_00011b24,DAT_00011ad0,0x1a2,iVar4);
          RK_MPI_VI_ReleaseChnFrame(0,0,local_1c8);
          uVar6 = 0x1a4;
          goto LAB_000118d4;
        }
        if (__stream != (FILE *)0x0) {
          __ptr = (void *)RK_MPI_MB_Handle2VirAddr(local_178[0]);
          fwrite(__ptr,1,local_22c[0],__stream);
          fflush(__stream);
        }
        iVar3 = iVar3 + 1;
        RK_LOG(2,uVar6,DAT_00011b28,uVar1,0x1ae,iVar3);
        iVar4 = RK_MPI_VI_ReleaseChnFrame(0,0,local_1c8);
      } while (iVar4 == 0);
      RK_LOG(2,DAT_00011ac8,DAT_00011b2c,DAT_00011ad0,0x1b3,iVar4,0,0);
      uVar6 = 0x1b4;
LAB_000118d4:
      FUN_0001154c(DAT_00011ad4,uVar6);
LAB_00011888:
      RK_TDE_Close();
      goto LAB_00011738;
    }
    RK_LOG(2,DAT_00011ac8,DAT_00011afc,DAT_00011ad0,0x172,iVar3);
    uVar6 = 0x173;
  }
  else {
    snprintf(acStack_128,0x100,DAT_00011ae8,*DAT_00011ae4);
    __stream = fopen64(acStack_128,DAT_00011aec);
    if (__stream != (FILE *)0x0) {
      iVar2 = fileno(__stream);
      goto LAB_00011774;
    }
    RK_LOG(2,DAT_00011ac8,DAT_00011af0,DAT_00011ad0,0x168,acStack_128);
    uVar6 = 0x169;
  }
  FUN_0001154c(DAT_00011ad4,uVar6);
LAB_00011738:
  if (local_178[0] != 0) {
    RK_MPI_SYS_Free();
    local_178[0] = 0;
  }
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  fsync(iVar2);
  fclose(__stream);
  return 0;
}



/* ===== FUN_00011b34 @ 00011b34 size=88 ===== */

void FUN_00011b34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fprintf((FILE *)*DAT_00011b8c,DAT_00011b90,param_1,DAT_00011b8c,param_1,param_2,param_3,param_4);
  RK_LOG(2,DAT_00011b9c,DAT_00011b98,DAT_00011ba0,0x57,DAT_00011b94,0x5d);
  *DAT_00011ba4 = 1;
  return;
}



/* ===== _fini @ 00011ba8 size=16 ===== */

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



/* ===== <EXTERNAL>::pthread_create @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_WaitForDone @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_WaitForDone(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_BeginJob @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_BeginJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_Close @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_Close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_QuickCopy @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_QuickCopy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_CancelJob @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_CancelJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzAlloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_Open @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_Open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_EndJob @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_EndJob(void)

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


