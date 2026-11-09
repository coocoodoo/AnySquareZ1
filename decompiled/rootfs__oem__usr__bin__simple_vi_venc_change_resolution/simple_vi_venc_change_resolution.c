// simple_vi_venc_change_resolution — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010b74 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010b98 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002300c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00010ba4 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00023010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010bb0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00010bbc size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00023018)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00010bc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002301c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00010bd4 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00023020)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00010be0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00023024)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00010bec size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_00023028)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00010bf8 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_0002302c)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010c04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023030)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00010c1c size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00023038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00010c28 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0002303c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010c34 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00023040)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010c40 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00023044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00010c4c size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_00023048)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010c58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002304c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00010c64 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_00023050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00010c70 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_00023054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00010c7c size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_00023058)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010c88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002305c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010c94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023060)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnAttr @ 00010ca0 size=12 ===== */

void RK_MPI_VENC_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnAttr_00023064)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00010cac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00010cb8 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0002306c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00010cc4 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_00023070)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00010cd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00023074)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010cdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00023078)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00010ce8 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_0002307c)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 00010cf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00023080)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00010d00 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00023084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00010d0c size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00023088)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010d18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002308c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010d24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00023090)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010d30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00023094)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00010d3c size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_00023098)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010d48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002309c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010d54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000230a0)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010d60 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000230a4)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010d6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000230a8)(__th);
  return iVar1;
}



/* ===== FUN_00010d78 @ 00010d78 size=1012 ===== */

int FUN_00010d78(int param_1,char **param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  pthread_t local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined1 auStack_a4 [8];
  undefined4 local_9c;
  undefined4 local_98;
  int local_90;
  int local_8c;
  int iStack_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_48;
  
  puVar1 = DAT_00011170;
  iVar6 = 0;
  uVar9 = 8;
  iVar7 = 0x438;
  iVar8 = 0x780;
  uVar4 = DAT_0001116c;
  while (iVar2 = getopt(param_1,param_2,DAT_00011174), iVar2 != -1) {
    if (iVar2 == 0x65) {
      pcVar5 = (char *)*puVar1;
      iVar2 = strcmp(pcVar5,DAT_000111bc);
      if (iVar2 == 0) {
        uVar9 = 8;
        uVar4 = DAT_0001116c;
      }
      else {
        iVar2 = strcmp(pcVar5,DAT_000111c0);
        if (iVar2 == 0) {
          uVar9 = 0xc;
          uVar4 = DAT_000111cc;
        }
        else {
          iVar2 = strcmp(pcVar5,DAT_000111c4);
          pcVar5 = DAT_000111c8;
          if (iVar2 != 0) goto LAB_00010f44;
          uVar9 = 9;
          uVar4 = DAT_000111d0;
        }
      }
    }
    else if (iVar2 < 0x66) {
      if (iVar2 == 0x49) {
        iVar6 = atoi((char *)*puVar1);
      }
      else {
        if (iVar2 != 99) {
LAB_00010e6c:
          pcVar5 = *param_2;
          puts(DAT_000111a0);
          printf(DAT_000111a4,pcVar5);
          puts(DAT_000111a8);
          puts(DAT_000111ac);
          puts(DAT_000111b0);
          puts(DAT_000111b4);
          pcVar5 = DAT_000111b8;
LAB_00010f44:
          puts(pcVar5);
          return 0;
        }
        iVar2 = atoi((char *)*puVar1);
        *DAT_00011184 = iVar2;
      }
    }
    else if (iVar2 == 0x68) {
      iVar7 = atoi((char *)*puVar1);
    }
    else {
      if (iVar2 != 0x77) goto LAB_00010e6c;
      iVar8 = atoi((char *)*puVar1);
    }
  }
  printf(DAT_00011178,uVar4);
  printf(DAT_0001117c,iVar8,iVar7);
  printf(DAT_00011180,iVar6);
  printf(DAT_00011188,*DAT_00011184);
  signal(2,DAT_0001118c);
  iVar3 = RK_MPI_SYS_Init();
  if (iVar3 == 0) {
    FUN_00011658();
    FUN_00011744(iVar6,iVar8,iVar7);
    printf(DAT_000111d8,DAT_000111d4);
    memset(auStack_a4,0,0x7c);
    local_60 = 1;
    local_48 = 0x2800;
    local_5c = 0x3c;
    local_98 = 100;
    local_9c = DAT_000111dc;
    local_ac = 0x900;
    local_a8 = 0x510;
    local_80 = 2;
    local_b0 = uVar9;
    local_90 = iVar8;
    local_8c = iVar7;
    iStack_88 = iVar8;
    local_84 = iVar7;
    RK_MPI_VENC_CreateChn(0,&local_b0);
    local_bc = iVar2;
    RK_MPI_VENC_StartRecvFrame(0,&local_bc);
    local_bc = 8;
    local_b0 = 4;
    local_b8 = iVar3;
    local_b4 = iVar6;
    local_ac = iVar3;
    local_a8 = iVar3;
    puts(DAT_000111e0);
    iVar8 = RK_MPI_SYS_Bind(&local_bc,&local_b0);
    if (iVar8 == 0) {
      pthread_create(&local_c0,(pthread_attr_t *)0x0,DAT_000111e8,(void *)0x0);
      pcVar5 = DAT_000111ec;
      while (*pcVar5 == '\0') {
        usleep(50000);
      }
      pthread_join(local_c0,(void **)0x0);
      iVar8 = RK_MPI_SYS_UnBind(&local_bc,&local_b0);
      if (iVar8 != 0) {
        RK_LOG(2,DAT_00011198,DAT_000111f0,DAT_00011194,0x179,iVar8);
      }
      uVar4 = RK_MPI_VI_DisableChn(0,iVar6);
      RK_LOG(2,DAT_00011198,DAT_000111f4,DAT_00011194,0x17d,uVar4);
      iVar8 = RK_MPI_VENC_StopRecvFrame(0);
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = RK_MPI_VENC_DestroyChn();
      if (iVar8 != 0) {
        RK_LOG(2,DAT_00011198,DAT_000111f8,DAT_00011194,0x186,iVar8);
      }
      iVar8 = RK_MPI_VI_DisableDev(0);
      RK_LOG(2,DAT_00011198,DAT_000111fc,DAT_00011194,0x18a,iVar8);
      goto LAB_00010e28;
    }
    uVar9 = 0x16b;
    uVar4 = DAT_000111e4;
  }
  else {
    uVar9 = 0x154;
    iVar8 = -1;
    uVar4 = DAT_00011190;
  }
  RK_LOG(2,DAT_00011198,uVar4,DAT_00011194,uVar9);
LAB_00010e28:
  RK_LOG(2,DAT_00011198,DAT_0001119c,DAT_00011194,0x18d,iVar8);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 00011200 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023034)
            (DAT_00011234,param_2,&stack0x00000004,DAT_00011238,DAT_00011230,param_1);
  return;
}



/* ===== FUN_0001123c @ 0001123c size=32 ===== */

void FUN_0001123c(void)

{
  if (DAT_00011260 == DAT_0001125c) {
    return;
  }
  if (DAT_00011264 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011264)();
  return;
}



/* ===== _FINI_0 @ 000112a0 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000112dc;
  if (*DAT_000112dc != '\0') {
    return;
  }
  FUN_0001123c();
  if (DAT_000112e0 != 0) {
    __deregister_frame_info(DAT_000112e4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000112e8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001130c != 0) {
    __register_frame_info(DAT_00011314,DAT_00011310);
  }
  if ((DAT_00011298 - DAT_00011294 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001129c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001129c)();
  return;
}



/* ===== FUN_0001134c @ 0001134c size=68 ===== */

longlong FUN_0001134c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  timespec local_10;
  undefined4 uStack_8;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  uStack_8 = param_3;
  clock_gettime(1,&local_10);
  lVar1 = FUN_000119a8(local_10.tv_nsec,local_10.tv_nsec >> 0x1f,1000,0);
  return (longlong)local_10.tv_sec * (longlong)DAT_00011390 + lVar1;
}



/* ===== FUN_00011394 @ 00011394 size=652 ===== */

undefined4 FUN_00011394(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined1 auStack_248 [4];
  undefined4 local_244;
  undefined4 uStack_240;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  void *local_1c0 [5];
  undefined4 local_1ac;
  
  printf(DAT_00011624,DAT_00011620);
  local_1c0[0] = malloc(0x88);
  uVar2 = DAT_0001162c;
  pcVar1 = DAT_00011628;
  uVar9 = 0;
  uVar10 = 0;
  local_2c8 = 0;
  local_2cc = 8;
  local_2c4 = 0;
  local_2c0 = 4;
  local_2bc = 0;
  local_2b8 = 0;
  do {
    if (*pcVar1 != '\0') {
LAB_000115dc:
      free(local_1c0[0]);
      return 0;
    }
    iVar3 = RK_MPI_VENC_GetStream(0,local_1c0,500);
    if (iVar3 == 0) {
      uVar12 = FUN_0001134c();
      uVar6 = *(uint *)((int)local_1c0[0] + 8);
      iVar7 = *(int *)((int)local_1c0[0] + 0xc);
      iVar3 = (uint)uVar12 - uVar6;
      iVar5 = (int)((ulonglong)uVar12 >> 0x20) - (iVar7 + (uint)((uint)uVar12 < uVar6));
      uVar8 = *(undefined4 *)((int)local_1c0[0] + 4);
      uVar11 = local_1ac;
      RK_LOG(5,uVar2,DAT_00011630,DAT_00011634,0x61,uVar10,local_1ac,uVar8,uVar6,iVar7,iVar3,iVar5);
      iVar4 = RK_MPI_VENC_ReleaseStream(0,local_1c0);
      if (iVar4 != 0) {
        RK_LOG(2,uVar2,DAT_00011638,DAT_00011634,0x65,iVar4,uVar11,uVar8,uVar6,iVar7,iVar3,iVar5);
      }
      uVar10 = uVar10 + 1;
    }
    FUN_00011988(uVar10,100);
    if (extraout_r1 == 0) {
      puts(DAT_0001163c);
      if (8 < uVar9) {
        uVar9 = 0;
      }
      iVar3 = RK_MPI_SYS_UnBind(&local_2cc,&local_2c0);
      if (iVar3 != 0) {
        RK_LOG(2,uVar2,DAT_00011640,DAT_00011634,0x73,iVar3);
      }
      uVar11 = *(undefined4 *)(DAT_00011644 + uVar9 * 0xc);
      uVar8 = *(undefined4 *)(DAT_00011644 + uVar9 * 0xc + 4);
      local_244 = 0x900;
      uStack_240 = 0x510;
      local_228 = uVar11;
      local_224 = uVar8;
      local_220 = uVar11;
      uStack_21c = uVar8;
      RK_MPI_VENC_SetChnAttr(0,auStack_248);
      local_250 = 0x900;
      uStack_24c = 0x510;
      local_290 = 0xffffffff;
      local_28c = 0xffffffff;
      local_2b4 = uVar11;
      uStack_2b0 = uVar8;
      iVar3 = RK_MPI_VI_SetChnAttr(0,0,&local_2b4);
      if (iVar3 == 0) {
        RK_LOG(5,uVar2,DAT_00011654,DAT_00011634,0x8d,uVar11,uVar8);
      }
      else {
        RK_LOG(5,uVar2,DAT_00011648,DAT_00011634,0x8a,uVar11,uVar8,iVar3);
      }
      iVar3 = RK_MPI_SYS_Bind(&local_2cc,&local_2c0);
      if (iVar3 != 0) {
        RK_LOG(2,uVar2,DAT_0001164c,DAT_00011634,0x93,iVar3,uVar8);
      }
      uVar9 = uVar9 + 1;
    }
    usleep(10000);
    if (*DAT_00011650 < uVar10) {
      *pcVar1 = '\x01';
      goto LAB_000115dc;
    }
    usleep(10000);
  } while( true );
}



/* ===== FUN_00011658 @ 00011658 size=208 ===== */

undefined4 FUN_00011658(void)

{
  int iVar1;
  char *__format;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  int local_48;
  
  puts(DAT_00011728);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_68 = 0;
  local_5c = 0;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  memset(&local_4c,0,0x44);
  iVar1 = RK_MPI_VI_GetDevAttr(0,&local_68);
  if (iVar1 == DAT_0001172c) {
    iVar1 = RK_MPI_VI_SetDevAttr(0,&local_68);
    __format = DAT_00011730;
    if (iVar1 != 0) goto LAB_000116fc;
  }
  else {
    puts(DAT_0001173c);
  }
  iVar1 = RK_MPI_VI_GetDevIsEnable(0);
  if (iVar1 == 0) {
    puts(DAT_00011740);
    return 0;
  }
  iVar1 = RK_MPI_VI_EnableDev(0);
  __format = DAT_00011734;
  if ((iVar1 == 0) &&
     (local_4c = iVar1, local_48 = iVar1, iVar1 = RK_MPI_VI_SetDevBindPipe(0,&local_4c),
     __format = DAT_00011738, iVar1 == 0)) {
    return 0;
  }
LAB_000116fc:
  printf(__format,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00011744 @ 00011744 size=156 ===== */

uint FUN_00011744(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [24];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  memset(auStack_74,0,0x58);
  local_40 = 1;
  local_1c = 1;
  local_18 = 0x900;
  uStack_14 = 0x510;
  local_4c = 2;
  local_5c = 2;
  local_58 = 0xffffffff;
  local_54 = 0xffffffff;
  local_7c = param_2;
  local_78 = param_3;
  uVar1 = RK_MPI_VI_SetChnAttr(0,param_1,&local_7c);
  uVar2 = RK_MPI_VI_EnableChn(0,param_1);
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    printf(DAT_000117e0,uVar1);
  }
  return uVar1;
}



/* ===== FUN_000118b4 @ 000118b4 size=196 ===== */

uint FUN_000118b4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool in_NG;
  bool bVar6;
  
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if (in_NG) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}



/* ===== FUN_00011988 @ 00011988 size=48 ===== */

void FUN_00011988(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000118b4();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000119a8 @ 000119a8 size=76 ===== */

void FUN_000119a8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000119f4();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000119f4 @ 000119f4 size=328 ===== */

undefined8 FUN_000119f4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00011b3c size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

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



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnAttr @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnAttr(void)

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



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

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



/* ===== <EXTERNAL>::raise @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

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



/* ===== <EXTERNAL>::strcmp @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

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



/* ===== <EXTERNAL>::clock_gettime @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


