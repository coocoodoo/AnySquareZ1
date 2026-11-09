// simple_venc_jpeg — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010d14 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010d38 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002200c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00010d44 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00022010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010d50 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00010d5c size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00022018)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00010d68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002201c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00022020)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00010d80 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00022024)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00010d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00022028)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::sleep @ 00010d98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0002202c)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00010da4 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_00022030)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00010db0 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00022034)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010dbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00022038)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00010dd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00022040)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00010de0 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00022044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00010dec size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00022048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnParam @ 00010df8 size=12 ===== */

void RK_MPI_VENC_SetChnParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnParam_0002204c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010e04 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00022050)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010e10 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00022054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00010e1c size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_00022058)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010e28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002205c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00010e34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00022060)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00010e40 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_00022064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00010e4c size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_00022068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00010e58 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_0002206c)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010e64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00022070)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010e70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022074)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010e7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022078)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010e88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002207c)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00010e94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00022080)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00010ea0 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_00022084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010eac size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00022088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00010eb8 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_0002208c)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00010ec4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00022090)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00010ed0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00022094)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00010edc size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_00022098)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 00010ee8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0002209c)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00010ef4 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_000220a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00010f00 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_000220a4)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010f0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000220a8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010f18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000220ac)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 00010f24 size=12 ===== */

void RK_MPI_VENC_SetJpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetJpegParam_000220b0)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00010f30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000220b4)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00010f3c size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_000220b8)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010f48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000220bc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010f54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000220c0)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010f60 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000220c4)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010f6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000220c8)(__th);
  return iVar1;
}



/* ===== FUN_00010f78 @ 00010f78 size=1048 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00010f78(int param_1,char **param_2)

{
  undefined4 *puVar1;
  char *__format;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_168;
  pthread_t local_164 [3];
  int local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  char acStack_148 [68];
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 auStack_ec [16];
  int local_dc;
  undefined4 local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_88;
  
  puVar1 = DAT_00011394;
  pcVar6 = DAT_00011390;
  iVar7 = 0;
  iVar5 = 0x438;
  iVar8 = 0x780;
  while (iVar2 = getopt(param_1,param_2,pcVar6), iVar2 != -1) {
    if (iVar2 == 0x68) {
      iVar5 = atoi((char *)*puVar1);
    }
    else if (iVar2 == 0x77) {
      iVar8 = atoi((char *)*puVar1);
    }
    else {
      if (iVar2 != 0x49) {
        pcVar6 = *param_2;
        puts(DAT_000113c0);
        printf(DAT_000113c4,pcVar6);
        puts(DAT_000113c8);
        puts(DAT_000113cc);
        puts(DAT_000113d0);
        puts(DAT_000113d4);
        return 0;
      }
      iVar7 = atoi((char *)*puVar1);
    }
  }
  printf(DAT_0001139c,DAT_00011398);
  printf(DAT_000113a0,iVar8,iVar5);
  printf(DAT_000113a4,iVar7);
  printf(DAT_000113a8,0xffffffff);
  signal(2,DAT_000113ac);
  iVar2 = RK_MPI_SYS_Init();
  if (iVar2 == 0) {
    FUN_0001174c();
    FUN_00011838(iVar7,iVar8,iVar5);
    printf(DAT_000113dc,DAT_000113d8);
    memset(auStack_ec,0,0x84);
    memset(acStack_148,0,0x58);
    local_a0 = 7;
    local_88 = 0x2800;
    local_9c = 0x3c;
    local_c0 = 2;
    local_f0 = 0xf;
    local_d8 = 100;
    local_dc = (iVar5 * iVar8 * 3) / 2;
    local_d0 = iVar8;
    local_cc = iVar5;
    local_c8 = iVar8;
    local_c4 = iVar5;
    RK_MPI_VENC_CreateChn(0,&local_f0);
    local_100 = 0x19;
    local_fc = 1;
    local_f8 = 10;
    local_f4 = 1;
    local_104 = iVar2;
    RK_MPI_VENC_SetChnParam(0,acStack_148);
    local_154 = 1;
    RK_MPI_VENC_StartRecvFrame(0,&local_154);
    local_164[1] = 8;
    local_154 = 4;
    local_164[2] = iVar2;
    local_158 = iVar7;
    local_150 = iVar2;
    local_14c = iVar2;
    puts(DAT_000113e0);
    iVar8 = RK_MPI_SYS_Bind(local_164 + 1,&local_154);
    if (iVar8 == 0) {
      pthread_create(local_164,(pthread_attr_t *)0x0,DAT_000113e8,(void *)0x0);
      local_f0 = 0x4d;
      RK_MPI_VENC_SetJpegParam(0,&local_f0);
      __format = DAT_000113f4;
      puVar1 = DAT_000113f0;
      pcVar6 = DAT_000113ec;
      while (*pcVar6 == '\0') {
        fgets(acStack_148,0x40,(FILE *)*puVar1);
        printf(__format,acStack_148);
        pcVar3 = strstr(acStack_148,DAT_000113f8);
        if (pcVar3 != (char *)0x0) {
          puts(DAT_000113fc);
          *pcVar6 = '\x01';
          break;
        }
        local_168 = 1;
        iVar8 = RK_MPI_VENC_StartRecvFrame(0,&local_168);
        if (iVar8 != 0) {
          puts(DAT_00011410);
          break;
        }
        usleep(30000);
      }
      sleep(1);
      pthread_join(local_164[0],(void **)0x0);
      iVar8 = RK_MPI_SYS_UnBind(local_164 + 1,&local_154);
      if (iVar8 != 0) {
        RK_LOG(2,DAT_000113b8,DAT_00011400,DAT_000113b4,0x12f,iVar8);
      }
      uVar4 = RK_MPI_VI_DisableChn(0,iVar7);
      RK_LOG(2,DAT_000113b8,DAT_00011404,DAT_000113b4,0x133,uVar4);
      iVar7 = RK_MPI_VENC_StopRecvFrame(0);
      if (iVar7 != 0) {
        return iVar7;
      }
      iVar7 = RK_MPI_VENC_DestroyChn();
      if (iVar7 != 0) {
        RK_LOG(2,DAT_000113b8,DAT_00011408,DAT_000113b4,0x13c,iVar7);
      }
      iVar8 = RK_MPI_VI_DisableDev(0);
      RK_LOG(2,DAT_000113b8,DAT_0001140c,DAT_000113b4,0x140,iVar8);
      goto LAB_00011020;
    }
    uVar9 = 0x10c;
    uVar4 = DAT_000113e4;
  }
  else {
    uVar9 = 0xf6;
    iVar8 = -1;
    uVar4 = DAT_000113b0;
  }
  RK_LOG(2,DAT_000113b8,uVar4,DAT_000113b4,uVar9);
LAB_00011020:
  RK_LOG(2,DAT_000113b8,DAT_000113bc,DAT_000113b4,0x143,iVar8);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 00011414 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002203c)
            (DAT_00011448,param_2,&stack0x00000004,DAT_0001144c,DAT_00011444,param_1);
  return;
}



/* ===== FUN_00011450 @ 00011450 size=32 ===== */

void FUN_00011450(void)

{
  if (DAT_00011474 == DAT_00011470) {
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



/* ===== _FINI_0 @ 000114b4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000114f0;
  if (*DAT_000114f0 != '\0') {
    return;
  }
  FUN_00011450();
  if (DAT_000114f4 != 0) {
    __deregister_frame_info(DAT_000114f8);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000114fc size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011520 != 0) {
    __register_frame_info(DAT_00011528,DAT_00011524);
  }
  if ((DAT_000114ac - DAT_000114a8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000114b0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000114a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000114b0)();
  return;
}



/* ===== FUN_00011560 @ 00011560 size=68 ===== */

longlong FUN_00011560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  timespec local_10;
  undefined4 uStack_8;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  uStack_8 = param_3;
  clock_gettime(1,&local_10);
  lVar1 = FUN_000118bc(local_10.tv_nsec,local_10.tv_nsec >> 0x1f,1000,0);
  return (longlong)local_10.tv_sec * (longlong)DAT_000115a4 + lVar1;
}



/* ===== FUN_000115a8 @ 000115a8 size=372 ===== */

undefined4 FUN_000115a8(void)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  FILE *pFVar5;
  int iVar6;
  void *__ptr;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  char acStack_240 [128];
  undefined4 *local_1c0 [5];
  undefined4 local_1ac;
  
  printf(DAT_00011720,DAT_0001171c);
  local_1c0[0] = malloc(0x88);
  uVar3 = DAT_00011728;
  piVar2 = DAT_00011724;
  pcVar1 = DAT_0001172c;
  while (piVar4 = DAT_00011730, *pcVar1 == '\0') {
    memset(acStack_240,0,0x80);
    sprintf(acStack_240,DAT_00011738,DAT_00011734,*piVar2);
    pFVar5 = fopen64(acStack_240,DAT_0001173c);
    *piVar4 = (int)pFVar5;
    iVar6 = RK_MPI_VENC_GetStream(0,local_1c0,500);
    if (iVar6 == 0) {
      if (*piVar4 != 0) {
        __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        fwrite(__ptr,1,local_1c0[0][1],(FILE *)*piVar4);
        fflush((FILE *)*piVar4);
      }
      uVar12 = FUN_00011560();
      uVar8 = local_1c0[0][2];
      iVar9 = local_1c0[0][3];
      iVar10 = (uint)uVar12 - uVar8;
      iVar11 = (int)((ulonglong)uVar12 >> 0x20) - (iVar9 + (uint)((uint)uVar12 < uVar8));
      uVar7 = local_1c0[0][1];
      uVar13 = local_1ac;
      RK_LOG(5,uVar3,DAT_00011740,DAT_00011744,0x48,*piVar2,local_1ac,uVar7,uVar8,iVar9,iVar10,
             iVar11);
      iVar6 = RK_MPI_VENC_ReleaseStream(0,local_1c0);
      if (iVar6 != 0) {
        RK_LOG(2,uVar3,DAT_00011748,DAT_00011744,0x4c,iVar6,uVar13,uVar7,uVar8,iVar9,iVar10,iVar11);
      }
      *piVar2 = *piVar2 + 1;
      pcVar1 = DAT_0001172c;
    }
  }
  free(local_1c0[0]);
  return 0;
}



/* ===== FUN_0001174c @ 0001174c size=208 ===== */

undefined4 FUN_0001174c(void)

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
  
  puts(DAT_0001181c);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_68 = 0;
  local_5c = 0;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  memset(&local_4c,0,0x44);
  iVar1 = RK_MPI_VI_GetDevAttr(0,&local_68);
  if (iVar1 == DAT_00011820) {
    iVar1 = RK_MPI_VI_SetDevAttr(0,&local_68);
    __format = DAT_00011824;
    if (iVar1 != 0) goto LAB_000117f0;
  }
  else {
    puts(DAT_00011830);
  }
  iVar1 = RK_MPI_VI_GetDevIsEnable(0);
  if (iVar1 == 0) {
    puts(DAT_00011834);
    return 0;
  }
  iVar1 = RK_MPI_VI_EnableDev(0);
  __format = DAT_00011828;
  if ((iVar1 == 0) &&
     (local_4c = iVar1, local_48 = iVar1, iVar1 = RK_MPI_VI_SetDevBindPipe(0,&local_4c),
     __format = DAT_0001182c, iVar1 == 0)) {
    return 0;
  }
LAB_000117f0:
  printf(__format,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00011838 @ 00011838 size=128 ===== */

uint FUN_00011838(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [24];
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_40;
  
  memset(auStack_74,0,100);
  local_40 = 4;
  local_4c = 2;
  local_5c = 2;
  local_7c = param_2;
  local_78 = param_3;
  uVar1 = RK_MPI_VI_SetChnAttr(0,param_1,&local_7c);
  uVar2 = RK_MPI_VI_EnableChn(0,param_1);
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    printf(DAT_000118b8,uVar1);
  }
  return uVar1;
}



/* ===== FUN_000118bc @ 000118bc size=76 ===== */

void FUN_000118bc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00011908();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00011908 @ 00011908 size=328 ===== */

undefined8 FUN_00011908(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00011a50 size=16 ===== */

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



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

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



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetJpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00023088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00023090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00023094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00023098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0002309c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000230a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 000230a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000230a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnParam @ 000230ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000230b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000230b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000230b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000230bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000230c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000230c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


