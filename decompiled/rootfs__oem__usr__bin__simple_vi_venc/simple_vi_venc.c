// simple_vi_venc — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010c14 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010c38 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002200c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00010c44 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00022010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010c50 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00010c5c size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00022018)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00010c68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002201c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010c74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00022020)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00010c80 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00022024)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00010c8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00022028)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00010c98 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0002202c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00010ca4 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00022030)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010cb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00022034)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00010cc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002203c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00010cd4 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00022040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00010ce0 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00022044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010cec size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00022048)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010cf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002204c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010d04 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00022050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00010d10 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_00022054)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010d1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00022058)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00010d28 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_0002205c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00010d34 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_00022060)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00010d40 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_00022064)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010d4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00022068)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010d58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002206c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022070)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010d70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00022074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00010d7c size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_00022078)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010d88 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0002207c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00010d94 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_00022080)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00010da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00022084)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010dac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00022088)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00010db8 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_0002208c)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 00010dc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00022090)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00010dd0 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00022094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00010ddc size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00022098)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010de8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002209c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010df4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000220a0)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010e00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000220a4)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00010e0c size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_000220a8)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010e18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000220ac)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010e24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000220b0)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010e30 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000220b4)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010e3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000220b8)(__th);
  return iVar1;
}



/* ===== FUN_00010e48 @ 00010e48 size=1120 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00010e48(int param_1,char **param_2)

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
  
  puVar1 = DAT_000112ac;
  iVar7 = 0;
  uVar10 = 8;
  pcVar9 = (char *)0x0;
  iVar5 = 0x438;
  iVar8 = 0x780;
  uVar4 = DAT_000112a8;
  while (iVar2 = getopt(param_1,param_2,DAT_000112b0), iVar2 != -1) {
    if (iVar2 == 0x65) {
      pcVar6 = (char *)*puVar1;
      iVar2 = strcmp(pcVar6,DAT_000112f8);
      if (iVar2 == 0) {
        uVar10 = 8;
        uVar4 = DAT_000112a8;
      }
      else {
        iVar2 = strcmp(pcVar6,DAT_000112fc);
        if (iVar2 == 0) {
          uVar10 = 0xc;
          uVar4 = DAT_00011308;
        }
        else {
          iVar2 = strcmp(pcVar6,DAT_00011300);
          pcVar6 = DAT_00011304;
          if (iVar2 != 0) goto LAB_0001101c;
          uVar10 = 9;
          uVar4 = DAT_0001130c;
        }
      }
    }
    else if (iVar2 < 0x66) {
      if (iVar2 == 0x49) {
        iVar7 = atoi((char *)*puVar1);
      }
      else {
        if (iVar2 != 99) {
LAB_00010f30:
          pcVar9 = *param_2;
          puts(DAT_000112d8);
          printf(DAT_000112dc,pcVar9);
          puts(DAT_000112e0);
          puts(DAT_000112e4);
          puts(DAT_000112e8);
          puts(DAT_000112ec);
          puts(DAT_000112f0);
          pcVar6 = DAT_000112f4;
LAB_0001101c:
          puts(pcVar6);
          return 0;
        }
        iVar2 = atoi((char *)*puVar1);
        *DAT_000112c4 = iVar2;
      }
    }
    else if (iVar2 == 0x6f) {
      pcVar9 = (char *)*puVar1;
    }
    else if (iVar2 == 0x77) {
      iVar8 = atoi((char *)*puVar1);
    }
    else {
      if (iVar2 != 0x68) goto LAB_00010f30;
      iVar5 = atoi((char *)*puVar1);
    }
  }
  printf(DAT_000112b4,uVar4);
  printf(DAT_000112b8,iVar8,iVar5);
  printf(DAT_000112bc,pcVar9);
  printf(DAT_000112c0,iVar7);
  printf(DAT_000112c8,*DAT_000112c4);
  if (pcVar9 != (char *)0x0) {
    pFVar3 = fopen64(pcVar9,DAT_000112cc);
    *DAT_000112d0 = pFVar3;
    if (pFVar3 == (FILE *)0x0) {
      printf(DAT_000112d4,pcVar9);
      return 0;
    }
  }
  signal(2,DAT_00011310);
  iVar2 = RK_MPI_SYS_Init();
  if (iVar2 == 0) {
    FUN_00011694();
    FUN_00011780(iVar7,iVar8,iVar5);
    printf(DAT_00011328,DAT_00011324);
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
    puts(DAT_0001132c);
    iVar5 = RK_MPI_SYS_Bind(local_c0 + 1,&local_b0);
    if (iVar5 == 0) {
      pthread_create(local_c0,(pthread_attr_t *)0x0,DAT_00011334,(void *)0x0);
      pcVar9 = DAT_00011338;
      while (*pcVar9 == '\0') {
        usleep(50000);
      }
      pthread_join(local_c0[0],(void **)0x0);
      iVar5 = RK_MPI_SYS_UnBind(local_c0 + 1,&local_b0);
      if (iVar5 != 0) {
        RK_LOG(2,DAT_0001131c,DAT_0001133c,DAT_00011318,0x139,iVar5);
      }
      uVar4 = RK_MPI_VI_DisableChn(0,iVar7);
      RK_LOG(2,DAT_0001131c,DAT_00011340,DAT_00011318,0x13d,uVar4);
      iVar5 = RK_MPI_VENC_StopRecvFrame(0);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = RK_MPI_VENC_DestroyChn();
      if (iVar5 != 0) {
        RK_LOG(2,DAT_0001131c,DAT_00011344,DAT_00011318,0x146,iVar5);
      }
      iVar5 = RK_MPI_VI_DisableDev(0);
      RK_LOG(2,DAT_0001131c,DAT_00011348,DAT_00011318,0x14a,iVar5);
      goto LAB_00011088;
    }
    uVar10 = 299;
    uVar4 = DAT_00011330;
  }
  else {
    uVar10 = 0x114;
    iVar5 = -1;
    uVar4 = DAT_00011314;
  }
  RK_LOG(2,DAT_0001131c,uVar4,DAT_00011318,uVar10);
LAB_00011088:
  RK_LOG(2,DAT_0001131c,DAT_00011320,DAT_00011318,0x14d,iVar5);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 0001134c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00022038)
            (DAT_00011380,param_2,&stack0x00000004,DAT_00011384,DAT_0001137c,param_1);
  return;
}



/* ===== FUN_00011388 @ 00011388 size=32 ===== */

void FUN_00011388(void)

{
  if (DAT_000113ac == DAT_000113a8) {
    return;
  }
  if (DAT_000113b0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000113a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000113b0)();
  return;
}



/* ===== _FINI_0 @ 000113ec size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011428;
  if (*DAT_00011428 != '\0') {
    return;
  }
  FUN_00011388();
  if (DAT_0001142c != 0) {
    __deregister_frame_info(DAT_00011430);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011434 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011458 != 0) {
    __register_frame_info(DAT_00011460,DAT_0001145c);
  }
  if ((DAT_000113e4 - DAT_000113e0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000113e8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000113dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000113e8)();
  return;
}



/* ===== FUN_00011498 @ 00011498 size=68 ===== */

longlong FUN_00011498(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  timespec local_10;
  undefined4 uStack_8;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  uStack_8 = param_3;
  clock_gettime(1,&local_10);
  lVar1 = FUN_00011804(local_10.tv_nsec,local_10.tv_nsec >> 0x1f,1000,0);
  return (longlong)local_10.tv_sec * (longlong)DAT_000114dc + lVar1;
}



/* ===== FUN_000114e0 @ 000114e0 size=396 ===== */

undefined4 FUN_000114e0(void)

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
  
  printf(DAT_00011670,DAT_0001166c);
  local_1c0[0] = malloc(0x88);
  uVar2 = DAT_00011678;
  pcVar1 = DAT_00011674;
  uVar8 = 0;
  do {
    if (*pcVar1 != '\0') {
LAB_00011614:
      if ((FILE *)*DAT_0001167c != (FILE *)0x0) {
        fclose((FILE *)*DAT_0001167c);
      }
      free(local_1c0[0]);
      return 0;
    }
    iVar4 = RK_MPI_VENC_GetStream(0,local_1c0,0xffffffff);
    piVar3 = DAT_0001167c;
    if (iVar4 == 0) {
      if (*DAT_0001167c != 0) {
        __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        fwrite(__ptr,1,local_1c0[0][1],(FILE *)*piVar3);
        fflush((FILE *)*piVar3);
      }
      uVar11 = FUN_00011498();
      uVar5 = local_1c0[0][2];
      iVar6 = local_1c0[0][3];
      iVar9 = (uint)uVar11 - uVar5;
      iVar10 = (int)((ulonglong)uVar11 >> 0x20) - (iVar6 + (uint)((uint)uVar11 < uVar5));
      uVar7 = local_1c0[0][1];
      uVar12 = local_1ac;
      RK_LOG(5,uVar2,DAT_00011680,DAT_00011684,0x44,uVar8,local_1ac,uVar7,uVar5,iVar6,iVar9,iVar10);
      iVar4 = RK_MPI_VENC_ReleaseStream(0,local_1c0);
      if (iVar4 != 0) {
        RK_LOG(2,uVar2,DAT_00011688,DAT_00011684,0x48,iVar4,uVar12,uVar7,uVar5,iVar6,iVar9,iVar10);
      }
      uVar8 = uVar8 + 1;
    }
    else {
      RK_LOG(2,uVar2,DAT_00011690,DAT_00011684,0x4c,iVar4);
    }
    if (*DAT_0001168c < uVar8) {
      *pcVar1 = '\x01';
      goto LAB_00011614;
    }
    usleep(10000);
  } while( true );
}



/* ===== FUN_00011694 @ 00011694 size=208 ===== */

undefined4 FUN_00011694(void)

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
  
  puts(DAT_00011764);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_68 = 0;
  local_5c = 0;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  memset(&local_4c,0,0x44);
  iVar1 = RK_MPI_VI_GetDevAttr(0,&local_68);
  if (iVar1 == DAT_00011768) {
    iVar1 = RK_MPI_VI_SetDevAttr(0,&local_68);
    __format = DAT_0001176c;
    if (iVar1 != 0) goto LAB_00011738;
  }
  else {
    puts(DAT_00011778);
  }
  iVar1 = RK_MPI_VI_GetDevIsEnable(0);
  if (iVar1 == 0) {
    puts(DAT_0001177c);
    return 0;
  }
  iVar1 = RK_MPI_VI_EnableDev(0);
  __format = DAT_00011770;
  if ((iVar1 == 0) &&
     (local_4c = iVar1, local_48 = iVar1, iVar1 = RK_MPI_VI_SetDevBindPipe(0,&local_4c),
     __format = DAT_00011774, iVar1 == 0)) {
    return 0;
  }
LAB_00011738:
  printf(__format,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00011780 @ 00011780 size=128 ===== */

uint FUN_00011780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    printf(DAT_00011800,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00011804 @ 00011804 size=76 ===== */

void FUN_00011804(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00011850();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00011850 @ 00011850 size=328 ===== */

undefined8 FUN_00011850(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00011998 size=16 ===== */

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



/* ===== <EXTERNAL>::fopen64 @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00023088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00023090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00023094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00023098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0002309c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000230a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000230a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000230a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000230ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000230b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000230b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


