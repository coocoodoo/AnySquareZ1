// sample_avs — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010d48 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010d6c size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002500c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010d78 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00025010)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00025014)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_AVS_GetFinalLutBufferSize @ 00010d90 size=12 ===== */

void RK_MPI_CAL_AVS_GetFinalLutBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_AVS_GetFinalLutBufferSize_00025018)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010d9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002501c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::usleep @ 00010da8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00025020)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::sleep @ 00010db4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00025024)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00010dc0 size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_00025028)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002502c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00010de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00025034)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StopGrp @ 00010df0 size=12 ===== */

void RK_MPI_AVS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_StopGrp_00025038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetFinalLut @ 00010dfc size=12 ===== */

void RK_MPI_AVS_GetFinalLut(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetFinalLut_0002503c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ReleaseChnFrame @ 00010e08 size=12 ===== */

void RK_MPI_AVS_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_ReleaseChnFrame_00025040)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00010e14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00025044)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DestroyGrp @ 00010e20 size=12 ===== */

void RK_MPI_AVS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_DestroyGrp_00025048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StartGrp @ 00010e2c size=12 ===== */

void RK_MPI_AVS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_StartGrp_0002504c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010e38 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00025050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SendPipeFrame @ 00010e44 size=12 ===== */

void RK_MPI_AVS_SendPipeFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_SendPipeFrame_00025054)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010e50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00025058)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_EnableChn @ 00010e5c size=12 ===== */

void RK_MPI_AVS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AVS_EnableChn_0002505c)();
  return;
}



/* ===== <EXTERNAL>::fread @ 00010e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00025060)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010e74 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00025064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 00010e80 size=12 ===== */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
  (*(code *)PTR_RK_MPI_CAL_COMM_GetHorStride_00025068)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010e8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002506c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 00010e98 size=12 ===== */

void RK_MPI_MB_CreatePool(void)

{
  (*(code *)PTR_RK_MPI_MB_CreatePool_00025070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00010ea4 size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_00025074)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010eb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00025078)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010ebc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002507c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnFrame @ 00010ec8 size=12 ===== */

void RK_MPI_AVS_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetChnFrame_00025080)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00010ed4 size=12 ===== */

void RK_MPI_MB_DestroyPool(void)

{
  (*(code *)PTR_RK_MPI_MB_DestroyPool_00025084)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010ee0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00025088)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002508c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00010ef8 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_00025090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 00010f04 size=12 ===== */

void RK_MPI_SYS_Free(void)

{
  (*(code *)PTR_RK_MPI_SYS_Free_00025094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010f10 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00025098)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00010f1c size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_0002509c)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00010f28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000250a0)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetChnAttr @ 00010f34 size=12 ===== */

void RK_MPI_AVS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_AVS_SetChnAttr_000250a4)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010f40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000250a8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010f4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000250ac)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010f58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000250b0)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00010f64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000250b4)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010f70 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_000250b8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_CreateGrp @ 00010f7c size=12 ===== */

void RK_MPI_AVS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_CreateGrp_000250bc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 00010f88 size=12 ===== */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_TDE_GetPicBufferSize_000250c0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DisableChn @ 00010f94 size=12 ===== */

void RK_MPI_AVS_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AVS_DisableChn_000250c4)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000250c8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010fac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000250cc)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010fb8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000250d0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000250d4)(__th);
  return iVar1;
}



/* ===== FUN_00010fd0 @ 00010fd0 size=892 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00010fd0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *__s;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  pthread_t local_50;
  pthread_t local_4c [3];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  puVar1 = DAT_0001134c;
  local_4c[2] = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar5 = 0;
  local_4c[1] = 0;
  local_50 = 0;
  local_38 = 0;
  local_4c[0] = 0;
  local_30 = 0;
  uStack_34 = local_4c[2];
  uStack_2c = local_4c[2];
  if (param_1 < 2) {
LAB_00011008:
    FUN_00011b50(*param_2);
  }
  else {
    __s = malloc(0x278);
    iVar8 = 0xf00;
    iVar7 = 0x780;
    iVar6 = 0x438;
    memset(__s,0,0x278);
    signal(2,DAT_00011350);
    local_60 = 0x438;
    local_5c = -1;
    local_58 = 2;
    local_64 = 0;
    local_68 = DAT_00011354;
    while( true ) {
      iVar4 = getopt_long(param_1,param_2,DAT_00011358,DAT_0001135c,0);
      if (iVar4 == -1) break;
      if (iVar4 == 0x69) {
        uVar5 = *puVar1;
      }
      else if (iVar4 < 0x6a) {
        if (iVar4 == 0x48) {
          iVar6 = atoi((char *)*puVar1);
        }
        else if (iVar4 < 0x49) {
          if (iVar4 != 0x41) goto LAB_00011008;
          local_68 = *puVar1;
        }
        else if (iVar4 == 0x57) {
          iVar8 = atoi((char *)*puVar1);
        }
        else {
          if (iVar4 != 0x68) goto LAB_00011008;
          local_60 = atoi((char *)*puVar1);
        }
      }
      else if (iVar4 == 0x6e) {
        local_58 = atoi((char *)*puVar1);
      }
      else if (iVar4 < 0x6f) {
        if (iVar4 != 0x6c) goto LAB_00011008;
        local_5c = atoi((char *)*puVar1);
      }
      else if (iVar4 == 0x6f) {
        local_64 = *puVar1;
      }
      else {
        if (iVar4 != 0x77) goto LAB_00011008;
        iVar7 = atoi((char *)*puVar1);
      }
    }
    printf(DAT_00011360,uVar5);
    printf(DAT_00011364,0);
    printf(DAT_00011368,local_68);
    printf(DAT_00011370,DAT_0001136c);
    printf(DAT_00011374,uVar5);
    printf(DAT_00011378,local_64);
    iVar4 = RK_MPI_SYS_Init();
    uVar2 = DAT_0001137c;
    if (iVar4 == 0) {
      __s[0x9c] = local_64;
      __s[0xe] = local_68;
      __s[1] = local_5c;
      __s[4] = uVar2;
      __s[0x16] = 1;
      __s[3] = local_60;
      __s[0xd] = 1;
      __s[0x15] = local_60;
      __s[0xb] = local_58;
      __s[0x48] = uVar2;
      __s[0x9d] = uVar5;
      __s[6] = 0;
      __s[7] = 0;
      __s[10] = 0;
      __s[0x1e] = 0;
      __s[0xc] = 0;
      __s[0x49] = 0xffffffff;
      __s[0x4a] = 0xffffffff;
      __s[0x79] = 0;
      *__s = 2;
      __s[2] = iVar7;
      __s[5] = local_4c + 1;
      __s[0x46] = iVar8;
      __s[0x47] = iVar6;
      __s[0x14] = iVar7;
      __s[0x7c] = 0xffffffff;
      __s[0x7a] = 0;
      __s[0x7d] = 0xffffffff;
      __s[0x7b] = 1;
      __s[0x7e] = 3;
      __s[0x77] = iVar8;
      __s[0x78] = iVar6;
      iVar7 = FUN_00011be4(__s);
      iVar8 = FUN_00011e9c(__s);
      if (iVar7 != 0 || iVar8 != 0) {
        RK_LOG(2,DAT_00011388,DAT_00011380,DAT_00011384,0x17c);
      }
      pthread_create(&local_50,(pthread_attr_t *)0x0,DAT_0001138c,__s);
      pcVar3 = DAT_00011394;
      pthread_create(local_4c,(pthread_attr_t *)0x0,DAT_00011390,__s);
      printf(DAT_0001139c,DAT_00011398);
      while (*pcVar3 == '\0') {
        sleep(1);
      }
      printf(DAT_000113a0,DAT_00011398);
      *DAT_000113a4 = 1;
      pthread_join(local_4c[0],(void **)0x0);
      *DAT_000113a8 = 1;
      pthread_join(local_50,(void **)0x0);
      FUN_000120ac(__s);
      FUN_00012180(__s);
    }
    RK_MPI_SYS_Exit();
    free(__s);
  }
  return 0;
}



/* ===== entry @ 000113ac size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00025030)
            (DAT_000113e0,param_2,&stack0x00000004,DAT_000113e4,DAT_000113dc,param_1);
  return;
}



/* ===== FUN_000113e8 @ 000113e8 size=32 ===== */

void FUN_000113e8(void)

{
  if (DAT_0001140c == DAT_00011408) {
    return;
  }
  if (DAT_00011410 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011410)();
  return;
}



/* ===== _FINI_0 @ 0001144c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011488;
  if (*DAT_00011488 != '\0') {
    return;
  }
  FUN_000113e8();
  if (DAT_0001148c != 0) {
    __deregister_frame_info(DAT_00011490);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011494 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000114b8 != 0) {
    __register_frame_info(DAT_000114c0,DAT_000114bc);
  }
  if ((DAT_00011444 - DAT_00011440 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011448 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011448)();
  return;
}



/* ===== FUN_000114c4 @ 000114c4 size=524 ===== */

undefined4 FUN_000114c4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  FILE *__s;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_140;
  size_t local_13c [4];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  char acStack_120 [260];
  
  memset(acStack_120,0,0x100);
  local_140 = (void *)0x0;
  __s = (FILE *)0x0;
  if (*(int *)(param_1 + 0x270) != 0) {
    snprintf(acStack_120,0x100,DAT_000116d0,*(int *)(param_1 + 0x270),
             *(undefined4 *)(param_1 + 0x18));
    __s = fopen64(acStack_120,DAT_000116d4);
    if (__s == (FILE *)0x0) {
      printf(DAT_000116d8,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x270));
      *DAT_000116dc = 1;
      return 0;
    }
  }
  pcVar3 = DAT_000116f4;
  uVar2 = DAT_000116f0;
  uVar1 = DAT_000116ec;
  iVar6 = 0;
  do {
    if (*pcVar3 != '\0') {
LAB_0001166c:
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      RK_LOG(2,DAT_000116f0,DAT_000116e8,DAT_000116ec,0x103);
      return 0;
    }
    iVar5 = FUN_00011fe4(param_1,&local_140);
    iVar4 = iVar6;
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 4) <= iVar6 && 0 < *(int *)(param_1 + 4)) {
        FUN_0001205c(param_1);
        *DAT_000116dc = 1;
        goto LAB_0001166c;
      }
      if (__s != (FILE *)0x0) {
        local_13c[3] = *(undefined4 *)(param_1 + 0x224);
        local_12c = *(undefined4 *)(param_1 + 0x228);
        local_13c[0] = 0;
        local_124 = *(undefined4 *)(param_1 + 0x240);
        local_13c[1] = 0;
        local_13c[2] = 0;
        local_128 = *(undefined4 *)(param_1 + 0x238);
        iVar4 = RK_MPI_CAL_TDE_GetPicBufferSize(local_13c + 3,local_13c);
        if (iVar4 == 0) {
          fwrite(local_140,1,local_13c[0],__s);
          fflush(__s);
        }
        else {
          RK_LOG(2,uVar2,DAT_000116e0,uVar1,0xed,iVar4);
        }
      }
      FUN_00013494(*(undefined4 *)(param_1 + 600),*(undefined4 *)(param_1 + 0x25c),1000,0);
      iVar4 = iVar6 + 1;
      RK_LOG(2,uVar2,DAT_000116e4,uVar1,0xf7,*(undefined4 *)(param_1 + 0x18),local_140,local_13c[0],
             iVar6);
      FUN_0001205c(param_1);
    }
    usleep(1000);
    iVar6 = iVar4;
  } while( true );
}



/* ===== FUN_000116f8 @ 000116f8 size=1016 ===== */

undefined4 FUN_000116f8(int param_1)

{
  char *__format;
  char *__modes;
  size_t sVar1;
  size_t sVar2;
  FILE *pFVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  void *__ptr;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  size_t sVar12;
  size_t sVar13;
  size_t sVar14;
  size_t local_444;
  size_t sStack_440;
  size_t local_43c;
  size_t local_438;
  size_t local_434;
  size_t local_430;
  size_t sStack_42c;
  size_t local_428;
  size_t sStack_424;
  size_t local_420;
  size_t sStack_41c;
  size_t local_418;
  size_t sStack_414;
  size_t local_410;
  size_t sStack_40c;
  size_t local_408 [4];
  size_t local_3f8;
  size_t sStack_3f4;
  size_t local_3f0;
  size_t sStack_3ec;
  size_t local_3e8 [4];
  size_t local_3d8;
  size_t sStack_3d4;
  size_t local_3d0;
  size_t sStack_3cc;
  char acStack_3c8 [256];
  size_t asStack_2c8 [169];
  
  sVar6 = 0;
  sVar12 = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  sVar14 = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  sVar1 = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  memset(acStack_3c8,0,0x100);
  local_408[0] = sVar6;
  local_408[1] = sVar12;
  local_408[2] = sVar14;
  local_408[3] = sVar1;
  local_3f8 = sVar6;
  sStack_3f4 = sVar12;
  local_3f0 = sVar6;
  sStack_3ec = sVar12;
  memset(asStack_2c8,0,0x280);
  local_438 = *(size_t *)(param_1 + 8);
  local_434 = *(size_t *)(param_1 + 0xc);
  local_444 = sVar6;
  sStack_440 = sVar6;
  local_43c = sVar12;
  local_430 = sVar6;
  sStack_42c = sVar12;
  local_428 = sVar6;
  sStack_424 = sVar12;
  local_420 = sVar14;
  sStack_41c = sVar1;
  local_418 = sVar6;
  sStack_414 = sVar12;
  local_410 = sVar6;
  sStack_40c = sVar12;
  local_3e8[0] = sVar6;
  local_3e8[1] = sVar12;
  local_3e8[2] = sVar14;
  local_3e8[3] = sVar1;
  local_3d8 = sVar6;
  sStack_3d4 = sVar12;
  local_3d0 = sVar6;
  sStack_3cc = sVar12;
  sVar1 = RK_MPI_CAL_TDE_GetPicBufferSize(&local_438,&local_444);
  if (sVar1 == 0) {
    sVar13 = sVar12;
    for (uVar10 = 0; __modes = DAT_00011b0c, __format = DAT_00011b08,
        uVar10 < *(uint *)(param_1 + 0x2c); uVar10 = uVar10 + 1) {
      local_428 = local_444;
      local_420 = 3;
      local_410 = 1;
      sStack_424 = sVar1;
      sStack_41c = sVar6;
      local_418 = sVar13;
      sStack_414 = sVar14;
      sStack_40c = sVar12;
      sVar2 = RK_MPI_MB_CreatePool(&local_428);
      local_3e8[uVar10] = sVar2;
    }
    if (*(int *)(param_1 + 0x274) != 0) {
      for (uVar10 = 0; uVar10 < *(uint *)(param_1 + 0x2c); uVar10 = uVar10 + 1) {
        snprintf(acStack_3c8,0x100,__format,*(undefined4 *)(param_1 + 0x274),uVar10);
        pFVar3 = fopen64(acStack_3c8,__modes);
        local_408[uVar10] = (size_t)pFVar3;
        if (pFVar3 == (FILE *)0x0) {
          piVar4 = __errno_location();
          pcVar5 = strerror(*piVar4);
          RK_LOG(2,DAT_00011af8,DAT_00011b04,DAT_00011af0,0x7f,acStack_3c8,pcVar5);
          *(undefined4 *)(param_1 + 0x274) = 0;
        }
      }
    }
    iVar11 = 0;
    while (uVar10 = 0, *DAT_00011afc == '\0') {
      for (; uVar10 < *(uint *)(param_1 + 0x2c); uVar10 = uVar10 + 1) {
        sVar6 = RK_MPI_MB_GetMB(local_3e8[uVar10]);
        if (sVar6 == 0) {
          uVar10 = uVar10 - 1;
        }
        else {
          asStack_2c8[uVar10 * 0x14] = sVar6;
          asStack_2c8[uVar10 * 0x14 + 6] = 0;
          asStack_2c8[uVar10 * 0x14 + 8] = 0;
          asStack_2c8[uVar10 * 0x14 + 1] = local_438;
          asStack_2c8[uVar10 * 0x14 + 2] = local_434;
          asStack_2c8[uVar10 * 0x14 + 3] = sStack_440;
          asStack_2c8[uVar10 * 0x14 + 4] = local_43c;
          if (*(int *)(param_1 + 0x274) == 0) {
            uVar8 = RK_MPI_MB_Handle2VirAddr();
            sVar12 = local_434;
            sVar6 = local_438;
            uVar9 = RK_MPI_CAL_COMM_GetHorStride
                              (asStack_2c8[uVar10 * 0x14 + 1],asStack_2c8[uVar10 * 0x14 + 6]);
            iVar7 = FUN_00012a1c(uVar8,sVar6,sVar12,uVar9,asStack_2c8[uVar10 * 0x14 + 4],
                                 asStack_2c8[uVar10 * 0x14 + 6],iVar11 + uVar10);
            if (iVar7 != 0) {
              RK_LOG(2,DAT_00011af8,DAT_00011b18,DAT_00011af0,0xa3,iVar7);
              *DAT_00011b14 = 1;
            }
          }
          else {
            __ptr = (void *)RK_MPI_MB_Handle2VirAddr();
            fread(__ptr,1,local_444,(FILE *)local_408[uVar10]);
          }
          RK_MPI_SYS_MmzFlushCache(asStack_2c8[uVar10 * 0x14],0);
          iVar7 = RK_MPI_AVS_SendPipeFrame
                            (*(undefined4 *)(param_1 + 0x18),uVar10,asStack_2c8 + uVar10 * 0x14,1000
                            );
          if (iVar7 != 0) {
            RK_LOG(2,DAT_00011af8,DAT_00011b10,DAT_00011af0,0xaa,iVar7);
            *DAT_00011b14 = 1;
          }
          RK_MPI_MB_ReleaseMB(asStack_2c8[uVar10 * 0x14]);
          asStack_2c8[uVar10 * 0x14] = 0;
        }
      }
      iVar11 = iVar11 + 1;
      usleep(33000);
    }
    for (uVar10 = 0; uVar10 < *(uint *)(param_1 + 0x2c); uVar10 = uVar10 + 1) {
      if ((FILE *)local_408[uVar10] != (FILE *)0x0) {
        fclose((FILE *)local_408[uVar10]);
        local_408[uVar10] = 0;
      }
      if (local_3e8[uVar10] != 0xffffffff) {
        RK_MPI_MB_DestroyPool();
      }
    }
    RK_LOG(2,DAT_00011af8,DAT_00011b00,DAT_00011af0,0xbd);
  }
  else {
    RK_LOG(2,DAT_00011af8,DAT_00011af4,DAT_00011af0,0x6c,sVar1);
  }
  return 0;
}



/* ===== FUN_00011b50 @ 00011b50 size=104 ===== */

void FUN_00011b50(undefined4 param_1)

{
  puts(DAT_00011bb8);
  printf(DAT_00011bbc,param_1);
  puts(DAT_00011bc0);
  puts(DAT_00011bc4);
  puts(DAT_00011bc8);
  puts(DAT_00011bcc);
  puts(DAT_00011bd0);
  puts(DAT_00011bd4);
  puts(DAT_00011bd8);
  puts(DAT_00011bdc);
  puts(DAT_00011be0);
  return;
}



/* ===== FUN_00011be4 @ 00011be4 size=652 ===== */

int FUN_00011be4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 in_q4 [16];
  undefined1 auVar10 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  size_t local_9c [4];
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  size_t local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_34 = in_q4._0_8_;
  uStack_2c = in_q4._8_8_;
  iVar2 = RK_MPI_AVS_CreateGrp(param_1[6],param_1 + 10);
  if (iVar2 != 0) {
    RK_LOG(2,DAT_00011e78,DAT_00011e74,DAT_00011e70,0x25,iVar2);
    return iVar2;
  }
  if (*param_1 == 2) {
    local_9c[3] = param_1[2];
    auVar10._8_8_ = 0;
    auVar10._0_8_ = in_q4._8_8_;
    auVar10 = auVar10 << 0x40;
    local_8c = param_1[3];
    local_9c[0] = 0;
    local_88 = 0;
    local_9c[1] = 0;
    local_9c[2] = 0;
    iVar2 = RK_MPI_CAL_AVS_GetFinalLutBufferSize(local_9c + 3,local_9c);
    uVar1 = DAT_00011e80;
    uVar14 = DAT_00011e78;
    uVar5 = DAT_00011e70;
    if ((iVar2 == 0) && (local_9c[0] != 0)) {
      uVar9 = 0;
      uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar8 = &local_80;
      local_80 = 0;
      local_70 = auVar10._0_8_;
      uStack_7c = uVar11;
      uStack_78 = uVar12;
      uStack_74 = uVar13;
      local_68 = local_70;
      for (uVar7 = 0; uVar7 < (uint)param_1[0xb]; uVar7 = uVar7 + 1) {
        uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iVar2 = param_1[5];
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_60 = uVar9;
        uStack_5c = uVar11;
        uStack_58 = uVar12;
        uStack_54 = uVar13;
        uStack_44 = uStack_4c;
        uStack_3c = uStack_4c;
        pvVar3 = malloc(local_9c[0]);
        *(void **)(iVar2 + uVar7 * 4) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          RK_LOG(2,DAT_00011e78,DAT_00011e8c,DAT_00011e70,0x3b);
          return -1;
        }
        RK_LOG(5,uVar14,uVar1,uVar5,0x3f,iVar2,uVar7,pvVar3);
        uVar6 = *(undefined4 *)(param_1[5] + uVar7 * 4);
        local_48 = local_9c[0];
        uStack_44 = 0;
        uVar15 = uVar7;
        local_60 = uVar6;
        uStack_3c = uVar6;
        RK_LOG(5,uVar14,DAT_00011e90,uVar5,0x44,param_1[5],uVar7,uVar6);
        puVar4 = puVar8 + 4;
        puVar8 = puVar8 + 1;
        iVar2 = RK_MPI_SYS_CreateMB(puVar4,&local_60);
        if (iVar2 != 0) {
          RK_LOG(2,DAT_00011e78,DAT_00011e94,DAT_00011e70,0x48,iVar2,uVar15,uVar6);
          return iVar2;
        }
      }
      RK_LOG(2,DAT_00011e78,DAT_00011e84,DAT_00011e70,0x4c);
      iVar2 = RK_MPI_AVS_GetFinalLut(param_1[6],&local_80);
      uVar7 = 0;
      if (iVar2 == 0) {
        for (; uVar7 < (uint)param_1[0xb]; uVar7 = uVar7 + 1) {
          RK_MPI_SYS_Free(*(undefined4 *)((int)&local_70 + uVar7 * 4));
        }
        goto LAB_00011e50;
      }
      uVar14 = 0x4f;
      uVar5 = DAT_00011e88;
    }
    else {
      uVar14 = 0x32;
      uVar5 = DAT_00011e7c;
    }
    RK_LOG(2,DAT_00011e78,uVar5,DAT_00011e70,uVar14,iVar2);
  }
  else {
LAB_00011e50:
    RK_LOG(2,DAT_00011e78,DAT_00011e98,DAT_00011e70,0x57);
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_00011e9c @ 00011e9c size=300 ===== */

int FUN_00011e9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x18) < 2) {
    if (*(int *)(param_1 + 0x1c) < 2) {
      iVar4 = 0;
      iVar3 = param_1;
      iVar6 = param_1;
      while( true ) {
        if ((*(int *)(iVar3 + 0x1dc) != 0) && (*(int *)(iVar3 + 0x1e0) != 0)) {
          iVar1 = RK_MPI_AVS_SetChnAttr
                            (*(undefined4 *)(param_1 + 0x18),iVar4,iVar3 + 0x1dc,
                             *(int *)(iVar3 + 0x1e0),iVar6,param_2,param_3);
          if (iVar1 != 0) {
            uVar5 = 0x6f;
            uVar2 = DAT_00011fd8;
            goto LAB_00011f58;
          }
          iVar1 = RK_MPI_AVS_EnableChn(*(undefined4 *)(param_1 + 0x18),iVar4);
          if (iVar1 != 0) {
            uVar5 = 0x75;
            uVar2 = DAT_00011fdc;
            goto LAB_00011f58;
          }
        }
        iVar3 = iVar3 + 0x20;
        if (iVar4 == 1) break;
        iVar4 = 1;
      }
      iVar1 = RK_MPI_AVS_StartGrp(*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        return 0;
      }
      uVar5 = 0x7d;
      uVar2 = DAT_00011fe0;
LAB_00011f58:
      RK_LOG(2,DAT_00011fd0,uVar2,DAT_00011fcc,uVar5,iVar1);
      return iVar1;
    }
    uVar5 = 0x65;
    uVar2 = DAT_00011fd4;
  }
  else {
    uVar5 = 0x60;
    uVar2 = DAT_00011fc8;
  }
  RK_LOG(2,DAT_00011fd0,uVar2,DAT_00011fcc,uVar5,2);
  return -1;
}



/* ===== FUN_00011fe4 @ 00011fe4 size=108 ===== */

undefined4 FUN_00011fe4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AVS_GetChnFrame
                    (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_1 + 0x220
                     ,0xffffffff);
  if (iVar1 == 0) {
    uVar2 = RK_MPI_MB_Handle2VirAddr(*(undefined4 *)(param_1 + 0x220));
    *param_2 = uVar2;
  }
  else {
    RK_LOG(2,DAT_00012054,DAT_00012050,DAT_00012058,0x8d,*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  return 0;
}



/* ===== FUN_0001205c @ 0001205c size=68 ===== */

undefined4 FUN_0001205c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_AVS_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_1 + 0x220
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000120a8,DAT_000120a4,DAT_000120a0,0x98,iVar1);
  }
  return 0;
}



/* ===== FUN_000120ac @ 000120ac size=196 ===== */

int FUN_000120ac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_MPI_AVS_StopGrp(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    if ((((*(int *)(param_1 + 0x1dc) != 0) && (*(int *)(param_1 + 0x1e0) != 0)) &&
        (iVar2 = RK_MPI_AVS_DisableChn(*(undefined4 *)(param_1 + 0x18),0), iVar2 != 0)) ||
       (((*(int *)(param_1 + 0x1fc) != 0 && (*(int *)(param_1 + 0x200) != 0)) &&
        (iVar2 = RK_MPI_AVS_DisableChn(*(undefined4 *)(param_1 + 0x18),1), iVar2 != 0)))) {
      iVar1 = iVar2;
      RK_LOG(2,DAT_00012178,DAT_0001217c,DAT_00012170,0xab,iVar1);
    }
  }
  else {
    RK_LOG(2,DAT_00012178,DAT_00012174,DAT_00012170,0xa2,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00012180 @ 00012180 size=140 ===== */

int FUN_00012180(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *__ptr;
  uint uVar2;
  
  iVar1 = RK_MPI_AVS_DestroyGrp(param_1[6]);
  if (iVar1 == 0) {
    if (*param_1 == 2) {
      for (uVar2 = 0; uVar2 < (uint)param_1[0xb]; uVar2 = uVar2 + 1) {
        __ptr = *(void **)(param_1[5] + uVar2 * 4);
        if (__ptr != (void *)0x0) {
          free(__ptr);
          *(undefined4 *)(param_1[5] + uVar2 * 4) = 0;
        }
      }
    }
  }
  else {
    RK_LOG(2,DAT_00012214,DAT_00012210,DAT_0001220c,0xb9,iVar1,param_3);
  }
  return iVar1;
}



/* ===== FUN_00012218 @ 00012218 size=192 ===== */

void FUN_00012218(int *param_1,int *param_2,int *param_3,int param_4,int param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)param_6;
  uVar4 = uVar5 * 3 + param_5 + param_4 & 0xff;
  iVar1 = (uVar5 * 5 + 0x40 + param_4 / 2 & 0xff) - 0x80;
  iVar3 = (uVar5 * 2 + -0x80 + param_5 / 2 & 0xff) - 0x80;
  iVar2 = uVar4 - (iVar3 * 0x58 + iVar1 * 0xb8 >> 8);
  iVar3 = uVar4 + (iVar3 * 0x1c7 >> 8);
  iVar1 = uVar4 + (iVar1 * 0x168 >> 8);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  *param_1 = iVar1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  *param_2 = iVar2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xfe < iVar3) {
    iVar3 = 0xff;
  }
  *param_3 = iVar3;
  return;
}



/* ===== FUN_00012904 @ 00012904 size=128 ===== */

uint FUN_00012904(uint param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  if (param_1 != 0) {
    return param_1;
  }
  bVar1 = param_4 * param_2 - param_3 != 0 && param_3 <= param_4 * param_2;
  if (bVar1) {
    RK_LOG(3,DAT_0001298c,DAT_00012984,DAT_00012988,0x1b7,param_3,param_2,param_4);
    RK_LOG(3,DAT_0001298c,DAT_00012990,DAT_00012988,0x1b9,param_3,param_4,param_3 * param_4);
  }
  return (uint)bVar1;
}



/* ===== FUN_00012994 @ 00012994 size=120 ===== */

int FUN_00012994(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((param_1 == 0) && (uVar1 = (param_2 + param_3 * 8) - 1 & param_3 * -8, param_2 != uVar1)) {
    RK_LOG(3,DAT_00012a10,DAT_00012a0c,DAT_00012a14,0x1c6,param_4,param_3,param_4);
    RK_LOG(3,DAT_00012a10,DAT_00012a18,DAT_00012a14,0x1c8,uVar1);
    param_1 = 1;
  }
  return param_1;
}



/* ===== FUN_00012a1c @ 00012a1c size=2632 ===== */

undefined4
FUN_00012a1c(char *param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
            uint param_7)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  code *pcVar9;
  char *pcVar10;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 auStack_2c [2];
  
  puVar3 = DAT_00013478;
  uVar4 = param_5 * param_4;
  if (DAT_00013464 < param_6) {
    if (DAT_00013474 < param_6) {
      if (DAT_00013488 <= param_6) {
        if (param_6 <= DAT_00013488 + 3) goto LAB_00012bdc;
        if (param_6 <= DAT_00013488 + 6) goto LAB_00012c74;
      }
      goto LAB_00012a80;
    }
    if (param_6 < DAT_00013474 - 3) {
      if (param_6 <= DAT_00013474 - 6) {
        uVar4 = 0;
        pcVar9 = *(code **)(DAT_0001347c + (param_6 - 0x10000) * 4);
        iVar5 = FUN_00012904(*DAT_00013478,param_2,param_4,3);
        if (iVar5 != 0) {
          param_4 = param_4 * 3;
          *puVar3 = 1;
        }
        puVar3 = DAT_00013480;
        iVar5 = FUN_00012994(*DAT_00013480,param_4,3,DAT_00013490);
        if (iVar5 != 0) {
          param_4 = param_4 + 0x17 & 0xffffffe8;
          *puVar3 = 1;
        }
        for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
            FUN_00012218(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
            (*pcVar9)(param_1 + uVar6 * 3,local_34,local_30,auStack_2c[0],1);
          }
          param_1 = param_1 + param_4;
        }
        return 0;
      }
LAB_00012bdc:
      uVar4 = 0;
      pcVar9 = *(code **)(DAT_0001347c + (param_6 - 0x10000) * 4);
      iVar5 = FUN_00012904(*DAT_00013478,param_2,param_4,4);
      if (iVar5 != 0) {
        param_4 = param_4 << 2;
        *puVar3 = 1;
      }
      puVar3 = DAT_00013480;
      iVar5 = FUN_00012994(*DAT_00013480,param_4,4,DAT_00013484);
      if (iVar5 != 0) {
        param_4 = param_4 + 0x1f & 0xffffffe0;
        *puVar3 = 1;
      }
      for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
        for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
          FUN_00012218(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
          (*pcVar9)(param_1 + uVar6 * 4,local_34,local_30,auStack_2c[0],1);
        }
        param_1 = param_1 + param_4;
      }
      return 0;
    }
  }
  else if (param_6 < 0x10000) {
    cVar2 = (char)param_7;
    if (param_6 == 8) {
      pcVar8 = param_1;
      for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
        for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
          pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
        }
        pcVar8 = pcVar8 + param_4;
      }
      param_1 = param_1 + uVar4 + 1;
      for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
        for (uVar6 = 0; param_2 >> 1 != uVar6; uVar6 = uVar6 + 1) {
          param_1[uVar6 * 2] = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
          param_1[uVar6 * 2 + -1] = cVar2 * '\x05' + '@' + (char)uVar6;
        }
        param_1 = param_1 + param_4;
      }
      return 0;
    }
    if (param_6 < 9) {
      if (param_6 == 4) {
        pcVar8 = param_1;
        for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
          for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
            pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
          }
          pcVar8 = pcVar8 + param_4;
        }
        param_2 = param_2 >> 1;
        pcVar8 = param_1 + param_2 + uVar4;
        for (uVar7 = 0; uVar6 >> 1 != uVar7; uVar7 = uVar7 + 1) {
          for (pcVar10 = pcVar8 + -param_2; pcVar10 != pcVar8; pcVar10 = pcVar10 + 1) {
            *pcVar10 = cVar2 * '\x02' + -0x80 + (char)uVar7;
          }
          pcVar8 = pcVar8 + (param_4 >> 1);
        }
        param_1 = param_1 + (uVar4 >> 2) + uVar4;
        for (uVar4 = 0; uVar7 != uVar4; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; param_2 != uVar6; uVar6 = uVar6 + 1) {
            param_1[uVar6] = cVar2 * '\x05' + '@' + (char)uVar6;
          }
          param_1 = param_1 + (param_4 >> 1);
        }
        return 0;
      }
      if (param_6 < 5) {
        if (param_6 == 0) {
          pcVar8 = param_1;
          for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
            for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
              pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
            }
            pcVar8 = pcVar8 + param_4;
          }
          param_1 = param_1 + uVar4 + 1;
          for (uVar4 = 0; uVar6 >> 1 != uVar4; uVar4 = uVar4 + 1) {
            for (uVar7 = 0; param_2 >> 1 != uVar7; uVar7 = uVar7 + 1) {
              param_1[uVar7 * 2 + -1] = cVar2 * '\x02' + -0x80 + (char)uVar4;
              param_1[uVar7 * 2] = cVar2 * '\x05' + '@' + (char)uVar7;
            }
            param_1 = param_1 + param_4;
          }
          return 0;
        }
        if (param_6 == 2) {
          pcVar8 = param_1;
          for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
            for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
              pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
            }
            pcVar8 = pcVar8 + param_4;
          }
          param_1 = param_1 + uVar4 + 1;
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            for (uVar6 = 0; param_2 >> 1 != uVar6; uVar6 = uVar6 + 1) {
              param_1[uVar6 * 2 + -1] = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
              param_1[uVar6 * 2] = cVar2 * '\x05' + '@' + (char)uVar6;
            }
            param_1 = param_1 + param_4;
          }
          return 0;
        }
      }
      else {
        if (param_6 == 6) {
          pcVar8 = param_1;
          for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
            for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
              pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
            }
            pcVar8 = pcVar8 + param_4;
          }
          param_1 = param_1 + uVar4 + 1;
          for (uVar4 = 0; uVar6 >> 1 != uVar4; uVar4 = uVar4 + 1) {
            for (uVar7 = 0; param_2 >> 1 != uVar7; uVar7 = uVar7 + 1) {
              param_1[uVar7 * 2] = cVar2 * '\x02' + -0x80 + (char)uVar4;
              param_1[uVar7 * 2 + -1] = cVar2 * '\x05' + '@' + (char)uVar7;
            }
            param_1 = param_1 + param_4;
          }
          return 0;
        }
        if (param_6 == 7) {
          pcVar8 = param_1;
          for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
            for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
              pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
            }
            pcVar8 = pcVar8 + param_4;
          }
          param_2 = param_2 >> 1;
          pcVar8 = param_1 + param_2 + uVar4;
          for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
            for (pcVar10 = pcVar8 + -param_2; pcVar8 != pcVar10; pcVar10 = pcVar10 + 1) {
              *pcVar10 = cVar2 * '\x02' + -0x80 + (char)(uVar6 >> 1);
            }
            pcVar8 = pcVar8 + (param_4 >> 1);
          }
          param_1 = param_1 + (uVar4 >> 1) + uVar4;
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            for (uVar6 = 0; param_2 != uVar6; uVar6 = uVar6 + 1) {
              param_1[uVar6] = cVar2 * '\x05' + '@' + (char)uVar6;
            }
            param_1 = param_1 + (param_4 >> 1);
          }
          return 0;
        }
      }
    }
    else {
      if (param_6 == 0xb) {
        for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
            param_1[uVar6] = cVar2 * '\x03' + (char)uVar4 + (char)uVar6;
          }
          param_1 = param_1 + param_4;
        }
        return 0;
      }
      if (param_6 < 0xc) {
        if (param_6 == 9) {
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            uVar6 = ((param_7 & 0xff) * 3 & 0xff) + uVar4;
            uVar7 = 0;
            pcVar8 = param_1;
            while( true ) {
              if (param_2 >> 1 == uVar7) break;
              cVar1 = (char)uVar6;
              *pcVar8 = cVar1;
              uVar6 = (uVar6 & 0xff) + 2;
              pcVar8[2] = cVar1 + '\x01';
              cVar1 = (char)uVar7;
              uVar7 = uVar7 + 1;
              pcVar8[1] = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
              pcVar8[3] = cVar2 * '\x05' + '@' + cVar1;
              pcVar8 = pcVar8 + 4;
            }
            param_1 = param_1 + param_4 * 2;
          }
          return 0;
        }
        if (param_6 == 10) {
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            uVar6 = ((param_7 & 0xff) * 3 & 0xff) + uVar4;
            uVar7 = 0;
            pcVar8 = param_1;
            while( true ) {
              if (param_2 >> 1 == uVar7) break;
              cVar1 = (char)uVar6;
              pcVar8[1] = cVar1;
              uVar6 = (uVar6 & 0xff) + 2;
              pcVar8[3] = cVar1 + '\x01';
              cVar1 = (char)uVar7;
              uVar7 = uVar7 + 1;
              *pcVar8 = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
              pcVar8[2] = cVar2 * '\x05' + '@' + cVar1;
              pcVar8 = pcVar8 + 4;
            }
            param_1 = param_1 + param_4 * 2;
          }
          return 0;
        }
      }
      else {
        if (param_6 == 0x11) {
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            uVar6 = ((param_7 & 0xff) * 3 & 0xff) + uVar4;
            uVar7 = 0;
            pcVar8 = param_1;
            while( true ) {
              if (param_2 >> 1 == uVar7) break;
              cVar1 = (char)uVar6;
              *pcVar8 = cVar1;
              uVar6 = (uVar6 & 0xff) + 2;
              pcVar8[2] = cVar1 + '\x01';
              cVar1 = (char)uVar7;
              uVar7 = uVar7 + 1;
              pcVar8[3] = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
              pcVar8[1] = cVar2 * '\x05' + '@' + cVar1;
              pcVar8 = pcVar8 + 4;
            }
            param_1 = param_1 + param_4 * 2;
          }
          return 0;
        }
        if (param_6 == 0x12) {
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            uVar6 = ((param_7 & 0xff) * 3 & 0xff) + uVar4;
            uVar7 = 0;
            pcVar8 = param_1;
            while( true ) {
              if (param_2 >> 1 == uVar7) break;
              cVar1 = (char)uVar6;
              pcVar8[1] = cVar1;
              uVar6 = (uVar6 & 0xff) + 2;
              pcVar8[3] = cVar1 + '\x01';
              cVar1 = (char)uVar7;
              uVar7 = uVar7 + 1;
              pcVar8[2] = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
              *pcVar8 = cVar2 * '\x05' + '@' + cVar1;
              pcVar8 = pcVar8 + 4;
            }
            param_1 = param_1 + param_4 * 2;
          }
          return 0;
        }
      }
    }
LAB_00012a80:
    RK_LOG(2,DAT_0001346c,DAT_00013468,DAT_00013470,0x2df,param_6);
    return 0xffffffff;
  }
LAB_00012c74:
  uVar4 = 0;
  pcVar9 = *(code **)(DAT_0001347c + (param_6 - 0x10000) * 4);
  iVar5 = FUN_00012904(*DAT_00013478,param_2,param_4,2);
  if (iVar5 != 0) {
    param_4 = param_4 << 1;
    *puVar3 = 1;
  }
  puVar3 = DAT_00013480;
  iVar5 = FUN_00012994(*DAT_00013480,param_4,2,DAT_0001348c);
  if (iVar5 != 0) {
    param_4 = param_4 + 0xf & 0xfffffff0;
    *puVar3 = 1;
  }
  for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
    for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
      FUN_00012218(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
      (*pcVar9)(param_1 + uVar6 * 2,local_34,local_30,auStack_2c[0],1);
    }
    param_1 = param_1 + param_4;
  }
  return 0;
}



/* ===== FUN_00013494 @ 00013494 size=76 ===== */

void FUN_00013494(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000134e0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000134e0 @ 000134e0 size=328 ===== */

undefined8 FUN_000134e0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00013628 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00026000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002600c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00026014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_CreatePool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetFinalLut @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetFinalLut(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StartGrp @ 00026028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SendPipeFrame @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_SendPipeFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DisableChn @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DestroyGrp @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_AVS_GetFinalLutBufferSize @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_AVS_GetFinalLutBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_CreateGrp @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_CreateGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_EnableChn @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetChnAttr @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnFrame @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ReleaseChnFrame @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StopGrp @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 000260c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_DestroyPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000260c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000260cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000260d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


