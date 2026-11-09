// simple_vi_rockiva — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010f40 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010f64 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002300c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00010f70 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_00023010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010f7c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00010f88 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00023018)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00010f94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002301c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023020)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::ROCKIVA_PushFrame @ 00010fac size=12 ===== */

void ROCKIVA_PushFrame(void)

{
  (*(code *)PTR_ROCKIVA_PushFrame_00023024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00010fb8 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00023028)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00010fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002302c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010fd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00023030)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00010fdc size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_00023034)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00010fe8 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_00023038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 00010ff4 size=12 ===== */

void RK_MPI_MB_Handle2Fd(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2Fd_0002303c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00011000 size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_00023040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0001100c size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00023044)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011018 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023048)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::ROCKIVA_Release @ 00011024 size=12 ===== */

void ROCKIVA_Release(void)

{
  (*(code *)PTR_ROCKIVA_Release_0002304c)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 0001103c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00023054)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::ROCKIVA_SetFrameReleaseCallback @ 00011048 size=12 ===== */

void ROCKIVA_SetFrameReleaseCallback(void)

{
  (*(code *)PTR_ROCKIVA_SetFrameReleaseCallback_00023058)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00011054 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002305c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00011060 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00023060)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 0001106c size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_00023064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnParam @ 00011078 size=12 ===== */

void RK_MPI_VENC_SetChnParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnParam_00023068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011084 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0002306c)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00011090 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00023070)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 0001109c size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00023074)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 000110a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00023078)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 000110b4 size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_0002307c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 000110c0 size=12 ===== */

void RK_MPI_MB_CreatePool(void)

{
  (*(code *)PTR_RK_MPI_MB_CreatePool_00023080)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000110cc size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_00023084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000110d8 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_00023088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000110e4 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_0002308c)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 000110f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023090)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 000110fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023094)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ROCKIVA_Init @ 00011108 size=12 ===== */

void ROCKIVA_Init(void)

{
  (*(code *)PTR_ROCKIVA_Init_00023098)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002309c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ROCKIVA_FACE_Init @ 00011120 size=12 ===== */

void ROCKIVA_FACE_Init(void)

{
  (*(code *)PTR_ROCKIVA_FACE_Init_000230a0)();
  return;
}



/* ===== <EXTERNAL>::abort @ 0001112c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_000230a4)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00011138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000230a8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00011144 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_000230ac)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00011150 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_000230b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0001115c size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_000230b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00011168 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_000230b8)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00011174 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000230bc)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00011180 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_000230c0)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 0001118c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_000230c4)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00011198 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_000230c8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000111a4 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_000230cc)();
  return;
}



/* ===== <EXTERNAL>::free @ 000111b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000230d0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000111bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000230d4)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 000111c8 size=12 ===== */

void RK_MPI_VENC_SetJpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetJpegParam_000230d8)();
  return;
}



/* ===== <EXTERNAL>::printf @ 000111d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000230dc)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000111e0 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_000230e0)();
  return;
}



/* ===== <EXTERNAL>::puts @ 000111ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000230e4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 000111f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000230e8)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00011204 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000230ec)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011210 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000230f0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 0001121c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000230f4)(__th);
  return iVar1;
}



/* ===== FUN_00011228 @ 00011228 size=1152 ===== */

undefined4 FUN_00011228(int param_1,char **param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  pthread_t pVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  pthread_t local_41f4;
  pthread_t local_41f0;
  undefined4 local_41ec;
  int local_41ac;
  undefined4 local_41a8;
  undefined4 local_41a4;
  undefined4 local_41a0;
  undefined4 local_419c;
  undefined4 local_4198;
  undefined4 uStack_4194;
  undefined4 local_4190;
  undefined4 local_418c;
  undefined4 uStack_4188;
  undefined4 local_4184;
  undefined4 local_4180;
  undefined4 uStack_417c;
  undefined4 local_4178;
  undefined4 uStack_4174;
  undefined4 local_4170;
  undefined4 uStack_416c;
  undefined4 local_4168;
  undefined4 local_4148;
  undefined4 local_4144;
  undefined4 local_4130;
  undefined4 local_4110;
  undefined1 auStack_410c [16132];
  undefined1 auStack_208 [5];
  undefined1 local_203;
  undefined4 local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  undefined2 uStack_17a;
  undefined2 uStack_16e;
  undefined2 uStack_16a;
  undefined4 local_164;
  undefined1 local_15c;
  undefined2 uStack_15a;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  int local_13c;
  undefined4 local_134;
  undefined1 local_12c;
  undefined2 local_124;
  undefined1 local_122;
  
  piVar2 = DAT_000116b0;
  puVar1 = DAT_000116ac;
  pcVar7 = DAT_000116a8;
  iVar9 = 0x438;
  iVar8 = 0x780;
  while (pVar4 = getopt(param_1,param_2,pcVar7), piVar3 = DAT_000116b0, pVar4 != 0xffffffff) {
    if (pVar4 == 0x68) {
      iVar9 = atoi((char *)*puVar1);
    }
    else if (pVar4 == 0x77) {
      iVar8 = atoi((char *)*puVar1);
    }
    else {
      if (pVar4 != 0x49) {
        pcVar7 = *param_2;
        puts(DAT_000116d4);
        printf(DAT_000116d8,pcVar7);
        puts(DAT_000116dc);
        puts(DAT_000116e0);
        puts(DAT_000116e4);
        return 0;
      }
      iVar5 = atoi((char *)*puVar1);
      *piVar2 = iVar5;
    }
  }
  printf(DAT_000116b4,iVar8,iVar9);
  printf(DAT_000116b8,0);
  printf(DAT_000116bc,*piVar3);
  signal(2,DAT_000116c0);
  iVar5 = RK_MPI_SYS_Init();
  if (iVar5 == 0) {
    FUN_00011e6c();
    FUN_00011f58(*piVar3,iVar8,iVar9);
    iVar8 = *piVar3;
    printf(DAT_000116ec,DAT_000116e8);
    uVar6 = DAT_000116f0;
    memset(&uStack_4194,0,0x84);
    memset(&local_41f0,0,0x58);
    local_4144 = 0x3c;
    local_4148 = 7;
    local_4184 = uVar6;
    local_4130 = 0x2800;
    local_4198 = 0xf;
    local_4180 = 100;
    local_4178 = 0xf0;
    uStack_4174 = 0x140;
    local_4170 = 0xf0;
    uStack_416c = 0x140;
    local_4168 = 5;
    RK_MPI_VENC_CreateChn(iVar8,&local_4198);
    local_41a8 = 0x19;
    local_41a4 = 1;
    local_41a0 = 10;
    local_419c = 1;
    local_41ac = iVar5;
    RK_MPI_VENC_SetChnParam(iVar8,&local_41f0);
    memset(auStack_410c,0,0xc4);
    local_4110 = 0x4d;
    RK_MPI_VENC_SetJpegParam(iVar8,&local_4110);
    local_41f4 = pVar4;
    RK_MPI_VENC_StartRecvFrame(iVar8,&local_41f4);
    local_4198 = DAT_000116f0;
    uStack_4188 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_4184 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *DAT_000116f4 = uVar6;
    local_418c = 0;
    uStack_4194 = 0;
    local_4190 = 3;
    local_4180 = 1;
    uStack_417c = uStack_4188;
    uVar6 = RK_MPI_MB_CreatePool(&local_4198);
    *DAT_000116f8 = uVar6;
    memset(&local_4110,0,0x40e8);
    local_13c = FUN_00011fdc(&local_4110);
    if (local_13c != 0) {
      return 0xffffffff;
    }
    printf(DAT_00011700,DAT_000116fc);
    local_124 = 1;
    local_134 = 10000;
    local_122 = 0;
    local_12c = 0;
    uStack_17a = 0x32;
    uStack_16e = 0x3c;
    uStack_16a = 0;
    local_15c = 1;
    local_164 = 10;
    uStack_15a = 0x1001;
    local_158 = 0x3f800000;
    local_154 = 0x3f800000;
    local_150 = 0x3f800000;
    local_14c = 0x3f800000;
    local_144 = 1;
    local_203 = 0;
    local_148 = DAT_00011704;
    local_200 = 4;
    local_1fc = DAT_00011708;
    local_1f8 = DAT_00011708 + 8000;
    local_1f4 = DAT_00011708 + 0x1f401f40;
    local_1f0 = DAT_00011708 + 0x1f400000;
    local_41f0 = DAT_0001170c;
    local_41ec = DAT_00011710;
    iVar8 = ROCKIVA_FACE_Init(local_4110,auStack_208,DAT_0001170c,DAT_00011710);
    if (iVar8 != 0) {
      printf(DAT_00011728,iVar8);
      return 0xffffffff;
    }
    pthread_create(&local_41f4,(pthread_attr_t *)0x0,DAT_00011714,&local_4110);
    pcVar7 = DAT_0001171c;
    pthread_create(&local_41f0,(pthread_attr_t *)0x0,DAT_00011718,(void *)0x0);
    while (*pcVar7 == '\0') {
      usleep(50000);
    }
    pthread_join(local_41f4,(void **)0x0);
    pthread_join(local_41f0,(void **)0x0);
    uVar6 = RK_MPI_VI_DisableChn(0);
    RK_LOG(2,DAT_000116cc,DAT_00011720,DAT_000116c8,0x221,uVar6);
    uVar6 = RK_MPI_VI_DisableDev(0);
    RK_LOG(2,DAT_000116cc,DAT_00011724,DAT_000116c8,0x223,uVar6);
    ROCKIVA_Release(local_4110);
  }
  else {
    RK_LOG(2,DAT_000116cc,DAT_000116c4,DAT_000116c8,0x1f7);
    uVar6 = 0xffffffff;
  }
  RK_LOG(2,DAT_000116cc,DAT_000116d0,DAT_000116c8,0x226,uVar6);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 0001172c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023050)
            (DAT_00011760,param_2,&stack0x00000004,DAT_00011764,DAT_0001175c,param_1);
  return;
}



/* ===== FUN_00011768 @ 00011768 size=32 ===== */

void FUN_00011768(void)

{
  if (DAT_0001178c == DAT_00011788) {
    return;
  }
  if (DAT_00011790 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011790)();
  return;
}



/* ===== _FINI_0 @ 000117cc size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011808;
  if (*DAT_00011808 != '\0') {
    return;
  }
  FUN_00011768();
  if (DAT_0001180c != 0) {
    __deregister_frame_info(DAT_00011810);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011814 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011838 != 0) {
    __register_frame_info(DAT_00011840,DAT_0001183c);
  }
  if ((DAT_000117c4 - DAT_000117c0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000117c8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000117bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000117c8)();
  return;
}



/* ===== FUN_00011848 @ 00011848 size=60 ===== */

void FUN_00011848(int param_1)

{
  char *__format;
  uint uVar1;
  
  __format = DAT_00011884;
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
    printf(__format,*(undefined4 *)(param_1 + 8 + uVar1 * 0x28));
  }
  return;
}



/* ===== FUN_000118bc @ 000118bc size=336 ===== */

void FUN_000118bc(undefined4 *param_1)

{
  size_t *psVar1;
  undefined4 uVar2;
  void *__dest;
  undefined4 local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint uStack_168;
  undefined4 local_160;
  undefined4 local_158;
  char acStack_124 [264];
  
  psVar1 = DAT_00011a0c;
  printf(DAT_00011a10,*param_1,(int)*(short *)(param_1 + 2),(int)*(short *)((int)param_1 + 10),
         (int)*(short *)(param_1 + 3),(int)*(short *)((int)param_1 + 0xe),param_1[0x484],
         param_1[0x485],param_1[0x487],param_1[0x489],param_1[0x48a]);
  memset(acStack_124,0,0x104);
  snprintf(acStack_124,0x104,DAT_00011a14,DAT_00011a18,*param_1,(uint)*(ushort *)(param_1 + 4),
           param_1[0x48c],(uint)*(ushort *)(param_1 + 0x48e),
           (uint)*(ushort *)((int)param_1 + 0x123a),param_1[0x489]);
  memset(&local_178,0,0x50);
  uVar2 = RK_MPI_MB_GetMB(*DAT_00011a1c,DAT_00011a1c,*psVar1,0,1);
  __dest = (void *)RK_MPI_MB_Handle2VirAddr();
  memcpy(__dest,(void *)param_1[0x492],*psVar1);
  RK_MPI_SYS_MmzFlushCache(uVar2,0);
  local_174 = (uint)*(ushort *)(param_1 + 0x48e);
  local_170 = (uint)*(ushort *)((int)param_1 + 0x123a);
  local_160 = 0;
  local_158 = 0;
  local_178 = uVar2;
  local_16c = local_174;
  uStack_168 = local_170;
  RK_MPI_VENC_SendFrame(0,&local_178,0xffffffff);
  RK_MPI_MB_ReleaseMB(uVar2);
  return;
}



/* ===== FUN_00011a20 @ 00011a20 size=44 ===== */

void FUN_00011a20(undefined4 *param_1,int param_2)

{
  printf(DAT_00011a4c,*param_1);
  if (param_2 != 0) {
    return;
  }
  FUN_000118bc(param_1);
  return;
}



/* ===== FUN_00011a50 @ 00011a50 size=68 ===== */

longlong FUN_00011a50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  timespec local_10;
  undefined4 uStack_8;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  uStack_8 = param_3;
  clock_gettime(1,&local_10);
  lVar1 = FUN_00012054(local_10.tv_nsec,local_10.tv_nsec >> 0x1f,1000,0);
  return (longlong)local_10.tv_sec * (longlong)DAT_00011a94 + lVar1;
}



/* ===== FUN_00011a98 @ 00011a98 size=360 ===== */

undefined4 FUN_00011a98(void)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  FILE *pFVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  char acStack_a8 [132];
  
  iVar12 = 0;
  printf(DAT_00011c04,DAT_00011c00);
  pvVar5 = malloc(0x88);
  uVar3 = DAT_00011c10;
  pcVar2 = DAT_00011c0c;
  piVar1 = DAT_00011c08;
  *DAT_00011c08 = (int)pvVar5;
  while (*pcVar2 == '\0') {
    iVar6 = RK_MPI_VENC_GetStream(0,piVar1,2000);
    if (iVar6 == 0) {
      memset(acStack_a8,0,0x80);
      sprintf(acStack_a8,DAT_00011c14,iVar12);
      puVar4 = DAT_00011c1c;
      pFVar7 = fopen64(acStack_a8,DAT_00011c18);
      *puVar4 = pFVar7;
      if (pFVar7 != (FILE *)0x0) {
        pvVar5 = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)*piVar1);
        fwrite(pvVar5,1,*(size_t *)(*piVar1 + 4),(FILE *)*puVar4);
        fflush((FILE *)*puVar4);
        fclose((FILE *)*puVar4);
      }
      uVar15 = FUN_00011a50();
      iVar6 = *piVar1;
      uVar8 = *(uint *)(iVar6 + 8);
      iVar9 = *(int *)(iVar6 + 0xc);
      iVar13 = (uint)uVar15 - uVar8;
      iVar14 = (int)((ulonglong)uVar15 >> 0x20) - (iVar9 + (uint)((uint)uVar15 < uVar8));
      uVar10 = *(undefined4 *)(iVar6 + 4);
      iVar11 = piVar1[5];
      RK_LOG(5,uVar3,DAT_00011c20,DAT_00011c24,0x66,iVar12,iVar11,uVar10,uVar8,iVar9,iVar13,iVar14);
      iVar6 = RK_MPI_VENC_ReleaseStream(0,piVar1);
      if (iVar6 != 0) {
        RK_LOG(2,uVar3,DAT_00011c28,DAT_00011c24,0x6a,iVar6,iVar11,uVar10,uVar8,iVar9,iVar13,iVar14)
        ;
      }
      iVar12 = iVar12 + 1;
    }
    usleep(10000);
  }
  free((void *)*piVar1);
  return 0;
}



/* ===== FUN_00011c2c @ 00011c2c size=532 ===== */

undefined4 FUN_00011c2c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *__ptr;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [13];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  uVar2 = DAT_00011e4c;
  puVar1 = DAT_00011e48;
  iVar8 = 0;
  printf(DAT_00011e44,DAT_00011e40);
  __ptr = malloc(0x28);
  while (*DAT_00011e50 == '\0') {
    uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar7 = *puVar1;
    *__ptr = 0;
    __ptr[1] = uVar11;
    __ptr[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    __ptr[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    __ptr[4] = 0;
    __ptr[5] = uVar11;
    __ptr[6] = 0;
    __ptr[7] = uVar11;
    __ptr[8] = 0;
    __ptr[9] = uVar11;
    iVar3 = RK_MPI_VI_GetChnFrame(0,uVar7,local_80,0x14a);
    if (iVar3 == 0) {
      uVar9 = FUN_00011a50();
      uVar4 = RK_MPI_MB_Handle2VirAddr(local_80[0]);
      uVar5 = RK_MPI_MB_Handle2Fd(local_80[0]);
      uVar11 = local_40;
      uVar7 = uStack_3c;
      uVar10 = FUN_00012054(local_48,uStack_44,1000,0);
      RK_LOG(5,uVar2,DAT_00011e54,DAT_00011e58,0x8e,uVar4,iVar8,local_4c,uVar10,uVar11,uVar7);
      uVar6 = RK_MPI_VI_QueryChnStatus(0,*puVar1,&local_a0);
      uVar9 = VectorSub(uVar9,CONCAT44(uStack_44,local_48),8);
      uVar11 = local_88;
      uVar7 = local_84;
      uVar4 = local_a0;
      uVar12 = local_98;
      uVar13 = local_94;
      uVar14 = local_90;
      uVar15 = local_9c;
      uVar16 = local_8c;
      RK_LOG(5,uVar2,DAT_00011e5c,DAT_00011e58,0x99,uVar6,local_88,local_84,local_a0,local_98,
             local_94,local_90,local_9c,local_8c,uVar9);
      uVar6 = *param_1;
      *(short *)(__ptr + 2) = (short)local_88;
      __ptr[6] = 0;
      __ptr[7] = 0;
      *(short *)((int)__ptr + 10) = (short)local_84;
      __ptr[3] = 7;
      __ptr[8] = uVar5;
      *__ptr = local_98;
      ROCKIVA_PushFrame(uVar6,__ptr,0);
      usleep(DAT_00011e60);
      iVar3 = RK_MPI_VI_ReleaseChnFrame(0,*puVar1,local_80);
      if (iVar3 != 0) {
        RK_LOG(2,uVar2,DAT_00011e64,DAT_00011e58,0xa9,iVar3,uVar11,uVar7,uVar4,uVar12,uVar13,uVar14,
               uVar15,uVar16,uVar9);
      }
      iVar8 = iVar8 + 1;
    }
    else {
      RK_LOG(2,uVar2,DAT_00011e68,DAT_00011e58,0xad,iVar3);
    }
  }
  free(__ptr);
  return 0;
}



/* ===== FUN_00011e6c @ 00011e6c size=208 ===== */

undefined4 FUN_00011e6c(void)

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
  
  puts(DAT_00011f3c);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_68 = 0;
  local_5c = 0;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  memset(&local_4c,0,0x44);
  iVar1 = RK_MPI_VI_GetDevAttr(0,&local_68);
  if (iVar1 == DAT_00011f40) {
    iVar1 = RK_MPI_VI_SetDevAttr(0,&local_68);
    __format = DAT_00011f44;
    if (iVar1 != 0) goto LAB_00011f10;
  }
  else {
    puts(DAT_00011f50);
  }
  iVar1 = RK_MPI_VI_GetDevIsEnable(0);
  if (iVar1 == 0) {
    puts(DAT_00011f54);
    return 0;
  }
  iVar1 = RK_MPI_VI_EnableDev(0);
  __format = DAT_00011f48;
  if ((iVar1 == 0) &&
     (local_4c = iVar1, local_48 = iVar1, iVar1 = RK_MPI_VI_SetDevBindPipe(0,&local_4c),
     __format = DAT_00011f4c, iVar1 == 0)) {
    return 0;
  }
LAB_00011f10:
  printf(__format,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00011f58 @ 00011f58 size=128 ===== */

uint FUN_00011f58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  local_40 = 1;
  local_4c = 2;
  local_5c = 2;
  local_7c = param_2;
  local_78 = param_3;
  uVar1 = RK_MPI_VI_SetChnAttr(0,param_1,&local_7c);
  uVar2 = RK_MPI_VI_EnableChn(0,param_1);
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    printf(DAT_00011fd8,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00011fdc @ 00011fdc size=100 ===== */

undefined4 FUN_00011fdc(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  printf(DAT_00012044,DAT_00012040);
  strcpy((char *)(param_1 + 0x22),DAT_00012048);
  iVar1 = ROCKIVA_Init(param_1,0,param_1 + 1,param_1);
  if (iVar1 == 0) {
    ROCKIVA_SetFrameReleaseCallback(*param_1,DAT_00012050);
    uVar2 = 0;
  }
  else {
    printf(DAT_0001204c,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00012054 @ 00012054 size=76 ===== */

void FUN_00012054(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000120a0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000120a0 @ 000120a0 size=328 ===== */

undefined8 FUN_000120a0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 000121e8 size=16 ===== */

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



/* ===== <EXTERNAL>::ROCKIVA_SetFrameReleaseCallback @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_SetFrameReleaseCallback(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_CreatePool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_Init @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_Release @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_Release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetJpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_FACE_Init @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_FACE_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 000240b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_PushFrame @ 000240b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_PushFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 000240b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000240bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 000240c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2Fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000240c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 000240c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000240cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 000240d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000240d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000240d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnParam @ 000240dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000240e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000240e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000240e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000240ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000240f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


