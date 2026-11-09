// simple_vi_venc_wrap — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010c34 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010c58 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002300c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00010c64 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00023010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetDeBreathEffect @ 00010c70 size=12 ===== */

void RK_MPI_VENC_SetDeBreathEffect(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetDeBreathEffect_00023014)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010c7c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023018)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00010c88 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_0002301c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00010c94 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00023020)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00010ca0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00023024)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010cac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023028)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00010cb8 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_0002302c)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00010cc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00023030)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00010cd0 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_00023034)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00010cdc size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00023038)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010ce8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002303c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010d00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00023044)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00010d0c size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00023048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 00010d18 size=12 ===== */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRefBufShareAttr_0002304c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010d24 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00023050)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010d30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00023054)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00010d3c size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_00023058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00010d48 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_0002305c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00010d54 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_00023060)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00010d60 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_00023064)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010d6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023068)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010d78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002306c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023070)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00010d90 size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_00023074)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00010d9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023078)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00010da8 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0002307c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010db4 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00023080)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00010dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00023084)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00010dcc size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_00023088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00010dd8 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_0002308c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00010de4 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00023090)();
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00023094)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00023098)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010e08 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0002309c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00010e14 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_000230a0)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010e20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000230a4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010e2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000230a8)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00010e38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000230ac)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010e44 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000230b0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010e50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000230b4)(__th);
  return iVar1;
}



/* ===== FUN_00010e5c @ 00010e5c size=1596 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00010e5c(undefined4 param_1,undefined4 *param_2)

{
  pthread_t *ppVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  void *pvVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  int local_28c;
  int local_288;
  int local_284;
  uint local_274 [5];
  pthread_t local_260 [6];
  undefined4 local_248;
  undefined4 uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  int local_238;
  int local_234 [64];
  char acStack_134 [264];
  
  puVar3 = DAT_0001149c;
  puVar2 = DAT_00011498;
  iVar18 = 0;
  iVar15 = 0;
  iVar17 = 0xa00;
  uVar16 = 0x438;
  iVar14 = 0x780;
  *DAT_00011498 = 1;
  local_284 = 0xc;
  local_288 = 0;
  local_28c = 0x5a0;
LAB_00010eac:
  iVar8 = getopt_long(param_1,param_2,DAT_000114a0,DAT_000114a4,0);
  if (iVar8 == -1) goto code_r0x00010ed4;
  if (iVar8 == 0x57) {
    iVar17 = atoi((char *)*puVar3);
    goto LAB_00010eac;
  }
  if (iVar8 < 0x58) {
    if (iVar8 == 0x48) {
      local_28c = atoi((char *)*puVar3);
      goto LAB_00010eac;
    }
    if (iVar8 < 0x49) {
      if (iVar8 == 0x43) {
        local_284 = atoi((char *)*puVar3);
      }
      else {
        if (iVar8 != 0x44) {
LAB_00010f78:
          uVar10 = *param_2;
          puts(DAT_000114cc);
          printf(DAT_000114d0,uVar10);
          puts(DAT_000114d4);
          puts(DAT_000114d8);
          puts(DAT_000114dc);
          puts(DAT_000114e0);
          puts(DAT_000114e4);
          puts(DAT_000114e8);
          puts(DAT_000114ec);
          puts(DAT_000114f0);
          puts(DAT_000114f4);
          return 0;
        }
        iVar18 = atoi((char *)*puVar3);
      }
      goto LAB_00010eac;
    }
    if (iVar8 == 0x49) {
      iVar15 = atoi((char *)*puVar3);
      goto LAB_00010eac;
    }
    if (iVar8 != 0x4c) goto LAB_00010f78;
    uVar12 = atoi((char *)*puVar3);
    puVar13 = DAT_000114f8;
  }
  else {
    if (iVar8 == 0x6f) {
      local_288 = atoi((char *)*puVar3);
      goto LAB_00010eac;
    }
    if (iVar8 < 0x70) {
      if (iVar8 != 0x68) {
        if (iVar8 != 0x6c) goto LAB_00010f78;
        uVar12 = atoi((char *)*puVar3);
        puVar13 = DAT_000114ac;
        goto LAB_00011030;
      }
      uVar16 = atoi((char *)*puVar3);
      goto LAB_00010eac;
    }
    if (iVar8 != 0x72) {
      if (iVar8 != 0x77) goto LAB_00010f78;
      iVar14 = atoi((char *)*puVar3);
      goto LAB_00010eac;
    }
    uVar12 = atoi((char *)*puVar3);
    puVar13 = DAT_00011498;
  }
LAB_00011030:
  *puVar13 = uVar12;
  goto LAB_00010eac;
code_r0x00010ed4:
  printf(DAT_000114a8,iVar14,uVar16);
  puVar13 = DAT_000114ac;
  printf(DAT_000114b0,iVar17,local_28c);
  printf(DAT_000114b4,local_288);
  printf(DAT_000114b8,iVar15);
  printf(DAT_000114bc,*puVar13);
  signal(2,DAT_000114c0);
  iVar8 = RK_MPI_SYS_Init();
  pcVar11 = DAT_00011504;
  piVar5 = DAT_00011500;
  if (iVar8 != 0) {
    printf(DAT_000114c4);
    iVar14 = -1;
    goto LAB_00010f3c;
  }
  *DAT_000114fc = local_28c;
  piVar4 = DAT_00011508;
  *piVar5 = iVar17;
  *piVar4 = iVar18;
  puts(pcVar11);
  local_260[4] = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_260[5] = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_23c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_260[3] = 0;
  local_248 = 0;
  uStack_244 = local_260[4];
  iStack_240 = local_260[5];
  memset(&local_238,0,0x44);
  iVar18 = RK_MPI_VI_GetDevAttr(0,local_260 + 3);
  piVar4 = DAT_000114fc;
  if (iVar18 == DAT_0001150c) {
    iVar18 = RK_MPI_VI_SetDevAttr(0,local_260 + 3);
    pcVar11 = DAT_00011510;
    if (iVar18 == 0) goto LAB_00011158;
LAB_0001117c:
    printf(pcVar11);
  }
  else {
    puts(DAT_0001154c);
LAB_00011158:
    iVar18 = RK_MPI_VI_GetDevIsEnable(0);
    if (iVar18 == 0) {
      puts(DAT_00011554);
    }
    else {
      iVar18 = RK_MPI_VI_EnableDev(0);
      pcVar11 = DAT_00011514;
      if ((iVar18 != 0) ||
         (local_238 = iVar18, local_234[0] = iVar18, iVar18 = RK_MPI_VI_SetDevBindPipe(0,&local_238)
         , pcVar11 = DAT_00011550, iVar18 != 0)) goto LAB_0001117c;
    }
  }
  piVar6 = DAT_00011518;
  memset(DAT_00011518 + 2,0,0x5c);
  piVar6[0xc] = 3;
  piVar6[0xf] = 4;
  if (iVar14 < iVar17) {
    piVar6[0x19] = iVar17;
  }
  else {
    piVar6[0x19] = iVar14;
  }
  *piVar6 = iVar14;
  piVar6[1] = uVar16;
  if ((int)uVar16 < local_28c) {
    piVar6[0x1a] = local_28c;
  }
  else {
    piVar6[0x1a] = uVar16;
  }
  piVar6[8] = 1;
  iVar17 = RK_MPI_VI_SetChnAttr(0,iVar15,piVar6);
  ppVar1 = DAT_0001151c;
  pcVar11 = DAT_00011520;
  if (iVar17 == 0) {
    ppVar1[0] = 0;
    ppVar1[1] = 0;
    uVar12 = *puVar2;
    ppVar1[1] = 0;
    pcVar11 = DAT_00011558;
    ppVar1[2] = 0;
    if (uVar12 == 0) {
LAB_00011468:
      iVar17 = RK_MPI_VI_EnableChn(0,iVar15);
      pcVar11 = DAT_0001155c;
      if (iVar17 == 0) {
        pcVar11 = DAT_00011560;
        iVar17 = iVar15;
      }
      goto LAB_00011484;
    }
    uVar12 = *DAT_000114f8;
    bVar19 = uVar16 == uVar12;
    if (uVar12 <= uVar16) {
      bVar19 = uVar12 == 0x7f;
    }
    if ((uVar12 <= uVar16 && 0x7e < uVar12) && !bVar19) {
      ppVar1[1] = uVar12;
      *ppVar1 = 1;
      ppVar1[2] = uVar12 * iVar14 * 3 >> 1;
      printf(pcVar11);
      RK_MPI_VI_SetChnWrapBufAttr(0,iVar15,ppVar1);
      goto LAB_00011468;
    }
    puts(DAT_00011524);
  }
  else {
LAB_00011484:
    printf(pcVar11,iVar17);
  }
  pcVar11 = DAT_0001152c;
  piVar7 = DAT_00011528;
  *DAT_00011528 = local_288;
  local_238 = local_288;
  strcpy((char *)local_234,pcVar11);
  snprintf(acStack_134,0x100,DAT_00011530,iVar15);
  RK_MPI_VI_ChnSaveFile(0,0,&local_238);
  local_274[2] = 8;
  iVar18 = *piVar5;
  piVar7[1] = local_284;
  iVar14 = *piVar6;
  iVar17 = piVar6[1];
  piVar7[4] = piVar6[2];
  piVar7[0x1b] = 0x2800;
  piVar7[0x16] = 0x3c;
  iVar8 = *piVar4;
  piVar7[2] = iVar18;
  piVar7[0xb] = iVar14;
  piVar7[0xc] = iVar17;
  piVar7[3] = iVar8;
  local_260[1] = 0;
  local_260[2] = 0;
  piVar7[9] = iVar14;
  piVar7[10] = iVar17;
  piVar7[99] = 0;
  piVar7[0xd] = 5;
  piVar7[0x15] = 1;
  piVar7[0x21] = 1;
  local_274[3] = 0;
  piVar7[6] = (uint)(iVar8 * iVar18 * 3) >> 1;
  local_260[0] = *ppVar1;
  local_274[1] = 0;
  local_274[0] = *puVar13;
  local_274[4] = iVar15;
  RK_MPI_VENC_CreateChn(0,piVar7 + 1);
  RK_MPI_VENC_SetChnBufWrapAttr(piVar7[99],local_260);
  RK_MPI_VENC_SetChnRefBufShareAttr(piVar7[99],local_274 + 1);
  if (*DAT_00011508 != 0) {
    local_260[3] = 1;
    local_260[4] = 0;
    local_260[5] = *DAT_00011508;
    RK_MPI_VENC_SetDeBreathEffect(0,local_260 + 3);
  }
  RK_MPI_VENC_StartRecvFrame(piVar7[99],local_274);
  local_260[5] = piVar7[99];
  local_260[3] = 4;
  local_260[4] = 0;
  iVar14 = RK_MPI_SYS_Bind(local_274 + 2,local_260 + 3);
  pcVar11 = DAT_00011538;
  if (iVar14 == 0) {
    pvVar9 = malloc(0x88);
    *DAT_0001153c = pvVar9;
    pthread_create(local_260,(pthread_attr_t *)0x0,DAT_00011540,(void *)0x0);
    while (*pcVar11 == '\0') {
      usleep(50000);
    }
    pthread_join(local_260[0],(void **)0x0);
    uVar10 = RK_MPI_VI_DisableChn(0);
    printf(DAT_00011544,uVar10);
    iVar17 = RK_MPI_VI_DisableDev(0);
    pcVar11 = DAT_00011548;
    iVar14 = iVar17;
  }
  else {
    iVar17 = piVar7[99];
    pcVar11 = DAT_00011534;
  }
  printf(pcVar11,iVar17);
LAB_00010f3c:
  printf(DAT_000114c8,iVar14);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 00011564 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023040)
            (DAT_00011598,param_2,&stack0x00000004,DAT_0001159c,DAT_00011594,param_1);
  return;
}



/* ===== FUN_000115a0 @ 000115a0 size=32 ===== */

void FUN_000115a0(void)

{
  if (DAT_000115c4 == DAT_000115c0) {
    return;
  }
  if (DAT_000115c8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000115bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000115c8)();
  return;
}



/* ===== _FINI_0 @ 00011604 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011640;
  if (*DAT_00011640 != '\0') {
    return;
  }
  FUN_000115a0();
  if (DAT_00011644 != 0) {
    __deregister_frame_info(DAT_00011648);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001164c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011670 != 0) {
    __register_frame_info(DAT_00011678,DAT_00011674);
  }
  if ((DAT_000115fc - DAT_000115f8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011600 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000115f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011600)();
  return;
}



/* ===== FUN_000116b0 @ 000116b0 size=68 ===== */

longlong FUN_000116b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  timespec local_10;
  undefined4 uStack_8;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  uStack_8 = param_3;
  clock_gettime(1,&local_10);
  lVar1 = FUN_0001182c(local_10.tv_nsec,local_10.tv_nsec >> 0x1f,1000,0);
  return (longlong)local_10.tv_sec * (longlong)DAT_000116f4 + lVar1;
}



/* ===== FUN_000116f8 @ 000116f8 size=272 ===== */

undefined4 FUN_000116f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *__ptr;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar6 = 0;
  printf(DAT_0001180c,DAT_00011808,param_3,param_4,param_1,param_2,param_3,param_4);
  piVar2 = DAT_00011814;
  pcVar1 = DAT_00011810;
  while( true ) {
    piVar3 = DAT_00011818;
    if (*pcVar1 != '\0') {
      return 0;
    }
    iVar4 = RK_MPI_VENC_GetStream(DAT_00011818[99],DAT_00011814,0xffffffff);
    if (iVar4 == 0) {
      if (*piVar3 != 0) {
        __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)*piVar2);
        fwrite(__ptr,1,*(size_t *)(*piVar2 + 4),(FILE *)piVar3[100]);
        fflush((FILE *)piVar3[100]);
      }
      uVar7 = FUN_000116b0();
      iVar4 = *piVar2;
      uVar5 = *(uint *)(iVar4 + 8);
      printf(DAT_0001181c,uVar6,piVar2[5],*(undefined4 *)(iVar4 + 4),uVar5,*(int *)(iVar4 + 0xc),
             (uint)uVar7 - uVar5,
             (int)((ulonglong)uVar7 >> 0x20) - (*(int *)(iVar4 + 0xc) + (uint)((uint)uVar7 < uVar5))
            );
      iVar4 = RK_MPI_VENC_ReleaseStream(piVar3[99],piVar2);
      if (iVar4 != 0) {
        printf(DAT_00011820);
      }
      uVar6 = uVar6 + 1;
    }
    else {
      printf(DAT_00011828);
    }
    if (*DAT_00011824 < uVar6) break;
    usleep(1000);
  }
  *pcVar1 = '\x01';
  return 0;
}



/* ===== FUN_0001182c @ 0001182c size=76 ===== */

void FUN_0001182c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00011878();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00011878 @ 00011878 size=328 ===== */

undefined8 FUN_00011878(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  bVar8 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar8 = param_3 <= param_1;
  }
  if (bVar8) {
    if (param_4 == 0) {
      iVar3 = LZCOUNT(param_3) + 0x20;
    }
    else {
      iVar3 = LZCOUNT(param_4);
    }
    if (param_2 == 0) {
      iVar6 = LZCOUNT(param_1) + 0x20;
    }
    else {
      iVar6 = LZCOUNT(param_2);
    }
    uVar7 = iVar3 - iVar6;
    uVar2 = param_4 << (uVar7 & 0xff) | param_3 << (uVar7 - 0x20 & 0xff) |
            param_3 >> (0x20 - uVar7 & 0xff);
    param_3 = param_3 << (uVar7 & 0xff);
    bVar8 = uVar2 <= param_2;
    if (param_2 == uVar2) {
      bVar8 = param_3 <= param_1;
    }
    if (bVar8) {
      bVar8 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = param_2 - (uVar2 + bVar8);
      uVar9 = CONCAT44(0 << (uVar7 & 0xff) | 1 << (uVar7 - 0x20 & 0xff) |
                       1U >> (0x20 - uVar7 & 0xff),1 << (uVar7 & 0xff));
    }
    else {
      uVar9 = 0;
    }
    if (uVar7 != 0) {
      uVar1 = param_3 >> 1 | uVar2 << 0x1f;
      uVar2 = uVar2 >> 1;
      uVar4 = uVar7;
      do {
        bVar8 = uVar2 <= param_2;
        if (param_2 == uVar2) {
          bVar8 = uVar1 <= param_1;
        }
        if (bVar8) {
          bVar8 = param_1 < uVar1;
          uVar5 = param_1 - uVar1;
          param_1 = uVar5 * 2 + 1;
          param_2 = (param_2 - (uVar2 + bVar8)) * 2 + (uint)CARRY4(uVar5,uVar5) +
                    (uint)(0xfffffffe < uVar5 * 2);
        }
        else {
          bVar8 = CARRY4(param_1,param_1);
          param_1 = param_1 * 2;
          param_2 = param_2 * 2 + (uint)bVar8;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar10 = CONCAT44(param_2,param_1);
      param_1 = param_1 >> (uVar7 & 0xff) | param_2 << (0x20 - uVar7 & 0xff) |
                param_2 >> (uVar7 - 0x20 & 0xff);
      param_2 = param_2 >> (uVar7 & 0xff);
      uVar9 = VectorAdd(uVar9,uVar10,8);
      uVar9 = VectorSub(uVar9,CONCAT44(param_2 << (uVar7 & 0xff) | param_1 << (uVar7 - 0x20 & 0xff)
                                       | param_1 >> (0x20 - uVar7 & 0xff),param_1 << (uVar7 & 0xff))
                        ,8);
    }
  }
  else {
    uVar9 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return uVar9;
}



/* ===== _fini @ 000119c0 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

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



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

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



/* ===== <EXTERNAL>::usleep @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetDeBreathEffect @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetDeBreathEffect(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000240b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


