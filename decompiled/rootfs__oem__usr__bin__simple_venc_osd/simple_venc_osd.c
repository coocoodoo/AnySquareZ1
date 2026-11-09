// simple_venc_osd — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010d2c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010d50 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002300c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00010d5c size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00023010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010d68 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00010d74 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00023018)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00010d80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002301c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023020)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00010d98 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00023024)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00010da4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00023028)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00010db0 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0002302c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00010dbc size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00023030)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010dc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023034)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00010de0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002303c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 00010dec size=12 ===== */

void RK_MPI_RGN_Destroy(void)

{
  (*(code *)PTR_RK_MPI_RGN_Destroy_00023040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00010df8 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00023044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00010e04 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00023048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010e10 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0002304c)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010e1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00023050)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 00010e28 size=12 ===== */

void RK_MPI_RGN_SetBitMap(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetBitMap_00023054)();
  return;
}



/* ===== <EXTERNAL>::fread @ 00010e34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00023058)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 00010e40 size=12 ===== */

void RK_MPI_RGN_AttachToChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_AttachToChn_0002305c)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010e4c size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00023060)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00010e58 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_00023064)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010e64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00023068)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00010e70 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_0002306c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00010e7c size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_00023070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00010e88 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_00023074)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010e94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023078)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010ea0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002307c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 00010eac size=12 ===== */

void RK_MPI_RGN_Create(void)

{
  (*(code *)PTR_RK_MPI_RGN_Create_00023080)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010eb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023084)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010ec4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00010ed0 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0002308c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010edc size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00023090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00010ee8 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_00023094)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00010ef4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00023098)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010f00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002309c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00010f0c size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_000230a0)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 00010f18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_000230a4)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00010f24 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_000230a8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00010f30 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_000230ac)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010f3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000230b0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010f48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000230b4)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010f54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000230b8)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00010f60 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_000230bc)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010f6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000230c0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010f78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000230c4)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010f84 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000230c8)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010f90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000230cc)(__th);
  return iVar1;
}



/* ===== FUN_00010f9c @ 00010f9c size=1124 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00010f9c(int param_1,char **param_2)

{
  undefined4 *puVar1;
  int iVar2;
  FILE *pFVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  pthread_t local_c0 [3];
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_9c;
  undefined4 local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_48;
  
  puVar1 = DAT_00011404;
  iVar7 = 0;
  uVar10 = 8;
  pcVar9 = (char *)0x0;
  iVar5 = 0x438;
  iVar8 = 0x780;
  uVar4 = DAT_00011400;
  while (iVar2 = getopt(param_1,param_2,DAT_00011408), iVar2 != -1) {
    if (iVar2 == 0x65) {
      pcVar6 = (char *)*puVar1;
      iVar2 = strcmp(pcVar6,DAT_00011450);
      if (iVar2 == 0) {
        uVar10 = 8;
        uVar4 = DAT_00011400;
      }
      else {
        iVar2 = strcmp(pcVar6,DAT_00011454);
        if (iVar2 == 0) {
          uVar10 = 0xc;
          uVar4 = DAT_00011460;
        }
        else {
          iVar2 = strcmp(pcVar6,DAT_00011458);
          pcVar6 = DAT_0001145c;
          if (iVar2 != 0) goto LAB_00011170;
          uVar10 = 9;
          uVar4 = DAT_00011464;
        }
      }
    }
    else if (iVar2 < 0x66) {
      if (iVar2 == 0x49) {
        iVar7 = atoi((char *)*puVar1);
      }
      else {
        if (iVar2 != 99) {
LAB_00011084:
          pcVar9 = *param_2;
          puts(DAT_00011430);
          printf(DAT_00011434,pcVar9);
          puts(DAT_00011438);
          puts(DAT_0001143c);
          puts(DAT_00011440);
          puts(DAT_00011444);
          puts(DAT_00011448);
          pcVar6 = DAT_0001144c;
LAB_00011170:
          puts(pcVar6);
          return 0;
        }
        iVar2 = atoi((char *)*puVar1);
        *DAT_0001141c = iVar2;
      }
    }
    else if (iVar2 == 0x6f) {
      pcVar9 = (char *)*puVar1;
    }
    else if (iVar2 == 0x77) {
      iVar8 = atoi((char *)*puVar1);
    }
    else {
      if (iVar2 != 0x68) goto LAB_00011084;
      iVar5 = atoi((char *)*puVar1);
    }
  }
  printf(DAT_0001140c,uVar4);
  printf(DAT_00011410,iVar8,iVar5);
  printf(DAT_00011414,pcVar9);
  printf(DAT_00011418,iVar7);
  printf(DAT_00011420,*DAT_0001141c);
  if (pcVar9 != (char *)0x0) {
    pFVar3 = fopen64(pcVar9,DAT_00011424);
    *DAT_00011428 = pFVar3;
    if (pFVar3 == (FILE *)0x0) {
      printf(DAT_0001142c,pcVar9);
      return 0;
    }
  }
  signal(2,DAT_00011468);
  iVar2 = RK_MPI_SYS_Init();
  if (iVar2 == 0) {
    FUN_00011b40();
    FUN_00011c2c(iVar7,iVar8,iVar5);
    printf(DAT_00011480,DAT_0001147c);
    memset(&local_ac,0,0x84);
    local_60 = 1;
    local_48 = 0x2800;
    local_5c = 0x3c;
    local_98 = 100;
    local_80 = 2;
    local_9c = (iVar5 * iVar8 * 3) / 2;
    local_b0 = uVar10;
    local_90 = iVar8;
    local_8c = iVar5;
    local_88 = iVar8;
    local_84 = iVar5;
    RK_MPI_VENC_CreateChn(0,&local_b0);
    local_c0[1] = 0xffffffff;
    RK_MPI_VENC_StartRecvFrame(0,local_c0 + 1);
    local_c0[1] = 8;
    local_b0 = 4;
    local_c0[2] = iVar2;
    local_b4 = iVar7;
    local_ac = iVar2;
    local_a8 = iVar2;
    puts(DAT_00011484);
    iVar5 = RK_MPI_SYS_Bind(local_c0 + 1,&local_b0);
    if (iVar5 == 0) {
      FUN_000118c4();
      pcVar9 = DAT_00011490;
      pthread_create(local_c0,(pthread_attr_t *)0x0,DAT_0001148c,(void *)0x0);
      while (*pcVar9 == '\0') {
        usleep(50000);
      }
      pthread_join(local_c0[0],(void **)0x0);
      iVar5 = RK_MPI_SYS_UnBind(local_c0 + 1,&local_b0);
      if (iVar5 != 0) {
        RK_LOG(2,DAT_00011474,DAT_00011494,DAT_00011470,0x1db,iVar5);
      }
      uVar4 = RK_MPI_VI_DisableChn(0,iVar7);
      RK_LOG(2,DAT_00011474,DAT_00011498,DAT_00011470,0x1df,uVar4);
      iVar5 = RK_MPI_VENC_StopRecvFrame(0);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = RK_MPI_VENC_DestroyChn();
      if (iVar5 != 0) {
        RK_LOG(2,DAT_00011474,DAT_0001149c,DAT_00011470,0x1e8,iVar5);
      }
      iVar5 = RK_MPI_VI_DisableDev(0);
      RK_LOG(2,DAT_00011474,DAT_000114a0,DAT_00011470,0x1ec,iVar5);
      goto LAB_000111dc;
    }
    uVar10 = 0x1cd;
    uVar4 = DAT_00011488;
  }
  else {
    uVar10 = 0x1b6;
    iVar5 = -1;
    uVar4 = DAT_0001146c;
  }
  RK_LOG(2,DAT_00011474,uVar4,DAT_00011470,uVar10);
LAB_000111dc:
  RK_LOG(2,DAT_00011474,DAT_00011478,DAT_00011470,0x1ef,iVar5);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 000114a4 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023038)
            (DAT_000114d8,param_2,&stack0x00000004,DAT_000114dc,DAT_000114d4,param_1);
  return;
}



/* ===== FUN_000114e0 @ 000114e0 size=32 ===== */

void FUN_000114e0(void)

{
  if (DAT_00011504 == DAT_00011500) {
    return;
  }
  if (DAT_00011508 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000114fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011508)();
  return;
}



/* ===== _FINI_0 @ 00011544 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011580;
  if (*DAT_00011580 != '\0') {
    return;
  }
  FUN_000114e0();
  if (DAT_00011584 != 0) {
    __deregister_frame_info(DAT_00011588);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001158c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000115b0 != 0) {
    __register_frame_info(DAT_000115b8,DAT_000115b4);
  }
  if ((DAT_0001153c - DAT_00011538 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011540 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011540)();
  return;
}



/* ===== FUN_000115f0 @ 000115f0 size=48 ===== */

void FUN_000115f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; param_1 != 0 && uVar1 < 0x1000; uVar1 = uVar1 + 1) {
    *(undefined4 *)(param_1 + uVar1 * 4) = param_2;
  }
  return;
}



/* ===== FUN_00011620 @ 00011620 size=68 ===== */

longlong FUN_00011620(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  timespec local_10;
  undefined4 uStack_8;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  uStack_8 = param_3;
  clock_gettime(1,&local_10);
  lVar1 = FUN_00011cb0(local_10.tv_nsec,local_10.tv_nsec >> 0x1f,1000,0);
  return (longlong)local_10.tv_sec * (longlong)DAT_00011664 + lVar1;
}



/* ===== FUN_00011668 @ 00011668 size=396 ===== */

undefined4 FUN_00011668(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  void *__ptr;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 *local_1c0 [5];
  undefined4 local_1ac;
  
  printf(DAT_000117f8,DAT_000117f4);
  local_1c0[0] = malloc(0x88);
  uVar2 = DAT_00011800;
  pcVar1 = DAT_000117fc;
  uVar8 = 0;
  do {
    if (*pcVar1 != '\0') {
LAB_0001179c:
      if ((FILE *)*DAT_00011804 != (FILE *)0x0) {
        fclose((FILE *)*DAT_00011804);
      }
      free(local_1c0[0]);
      return 0;
    }
    iVar4 = RK_MPI_VENC_GetStream(0,local_1c0,0xffffffff);
    piVar3 = DAT_00011804;
    if (iVar4 == 0) {
      if (*DAT_00011804 != 0) {
        __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        fwrite(__ptr,1,local_1c0[0][1],(FILE *)*piVar3);
        fflush((FILE *)*piVar3);
      }
      uVar11 = FUN_00011620();
      uVar5 = local_1c0[0][2];
      iVar6 = local_1c0[0][3];
      iVar9 = (uint)uVar11 - uVar5;
      iVar10 = (int)((ulonglong)uVar11 >> 0x20) - (iVar6 + (uint)((uint)uVar11 < uVar5));
      uVar7 = local_1c0[0][1];
      uVar12 = local_1ac;
      RK_LOG(5,uVar2,DAT_00011808,DAT_0001180c,0x50,uVar8,local_1ac,uVar7,uVar5,iVar6,iVar9,iVar10);
      iVar4 = RK_MPI_VENC_ReleaseStream(0,local_1c0);
      if (iVar4 != 0) {
        RK_LOG(2,uVar2,DAT_00011810,DAT_0001180c,0x54,iVar4,uVar12,uVar7,uVar5,iVar6,iVar9,iVar10);
      }
      uVar8 = uVar8 + 1;
    }
    else {
      RK_LOG(2,uVar2,DAT_00011818,DAT_0001180c,0x58,iVar4);
    }
    if (*DAT_00011814 < uVar8) {
      *pcVar1 = '\x01';
      goto LAB_0001179c;
    }
    usleep(10000);
  } while( true );
}



/* ===== FUN_0001181c @ 0001181c size=152 ===== */

undefined4 FUN_0001181c(char *param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  FILE *__stream;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_5 * param_3;
  __stream = fopen64(param_1,DAT_000118b4);
  if (__stream == (FILE *)0x0) {
    RK_LOG(2,DAT_000118c0,DAT_000118bc,DAT_000118b8,0x73,param_1,param_3);
    uVar1 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    for (uVar4 = uVar3; uVar4 != param_4; uVar4 = uVar4 + 1) {
      fread((void *)(param_2 + (uVar3 >> (param_6 & 0xff))),1,uVar2 >> (param_6 & 0xff),__stream);
      uVar3 = uVar3 + uVar2;
    }
    fclose(__stream);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000118c4 @ 000118c4 size=580 ===== */

undefined4 FUN_000118c4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined1 auStack_4ac [4];
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_48c;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_454;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  void *local_40;
  
  uVar1 = DAT_00011b08;
  printf(DAT_00011b10,DAT_00011b0c);
  local_4b8 = 0;
  local_4bc = 4;
  local_4b4 = 0;
  local_468 = 0;
  local_464 = uVar1;
  local_460 = 0x80;
  local_45c = 0x80;
  local_454 = 0;
  iVar2 = RK_MPI_RGN_Create(0,&local_468);
  if (iVar2 == 0) {
    RK_LOG(4,DAT_00011b1c,DAT_00011b20,DAT_00011b14,0xa2,0);
    memset(auStack_4ac,0,0x44);
    local_4b0 = 1;
    local_48c = 1;
    local_480 = 0xffffff;
    local_47c = 0x10;
    local_478 = 0x10;
    uStack_474 = 100;
    local_4a8 = 100;
    local_4a4 = 100;
    iVar3 = RK_MPI_RGN_AttachToChn(0,&local_4bc,&local_4b0);
    if (iVar3 == 0) {
      RK_LOG(4,DAT_00011b1c,DAT_00011b28,DAT_00011b14,0xbf,iVar2);
      uVar5 = FUN_00011620();
      local_50 = uVar1;
      local_4c = 0x80;
      local_48 = 0x80;
      pvVar4 = malloc(0x10000);
      local_40 = pvVar4;
      iVar2 = FUN_0001181c(DAT_00011b2c,pvVar4,0x80,0x80,4,0);
      if (iVar2 != 0) {
        FUN_000115f0(pvVar4,DAT_00011b30);
        FUN_000115f0((int)pvVar4 + 0x4000,DAT_00011b34);
        FUN_000115f0((int)pvVar4 + 0x8000,0xffff);
        FUN_000115f0((int)pvVar4 + 0xc000,0xff);
      }
      iVar2 = RK_MPI_RGN_SetBitMap(0,&local_50);
      if (iVar2 == 0) {
        uVar6 = FUN_00011620();
        RK_LOG(4,DAT_00011b1c,DAT_00011b3c,DAT_00011b14,0xe1,0,(uint)uVar6 - (uint)uVar5,
               (int)((ulonglong)uVar6 >> 0x20) -
               ((int)((ulonglong)uVar5 >> 0x20) + (uint)((uint)uVar6 < (uint)uVar5)));
        return 0;
      }
      RK_LOG(2,DAT_00011b1c,DAT_00011b38,DAT_00011b14,0xdc,iVar2);
    }
    else {
      RK_LOG(2,DAT_00011b1c,DAT_00011b24,DAT_00011b14,0xbc,0,iVar3);
    }
  }
  else {
    RK_LOG(2,DAT_00011b1c,DAT_00011b18,DAT_00011b14,0x9e,0,iVar2);
    RK_MPI_RGN_Destroy(0);
  }
  return 0xffffffff;
}



/* ===== FUN_00011b40 @ 00011b40 size=208 ===== */

undefined4 FUN_00011b40(void)

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
  
  puts(DAT_00011c10);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_68 = 0;
  local_5c = 0;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  memset(&local_4c,0,0x44);
  iVar1 = RK_MPI_VI_GetDevAttr(0,&local_68);
  if (iVar1 == DAT_00011c14) {
    iVar1 = RK_MPI_VI_SetDevAttr(0,&local_68);
    __format = DAT_00011c18;
    if (iVar1 != 0) goto LAB_00011be4;
  }
  else {
    puts(DAT_00011c24);
  }
  iVar1 = RK_MPI_VI_GetDevIsEnable(0);
  if (iVar1 == 0) {
    puts(DAT_00011c28);
    return 0;
  }
  iVar1 = RK_MPI_VI_EnableDev(0);
  __format = DAT_00011c1c;
  if ((iVar1 == 0) &&
     (local_4c = iVar1, local_48 = iVar1, iVar1 = RK_MPI_VI_SetDevBindPipe(0,&local_4c),
     __format = DAT_00011c20, iVar1 == 0)) {
    return 0;
  }
LAB_00011be4:
  printf(__format,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00011c2c @ 00011c2c size=128 ===== */

uint FUN_00011c2c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    printf(DAT_00011cac,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00011cb0 @ 00011cb0 size=76 ===== */

void FUN_00011cb0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00011cfc();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00011cfc @ 00011cfc size=328 ===== */

undefined8 FUN_00011cfc(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00011e44 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Create(void)

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



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetBitMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 000240b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_AttachToChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000240b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000240b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000240bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000240c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000240c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000240c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


