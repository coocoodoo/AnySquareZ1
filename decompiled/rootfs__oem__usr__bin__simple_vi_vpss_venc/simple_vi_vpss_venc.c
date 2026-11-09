// simple_vi_vpss_venc — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010d78 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010d9c size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002300c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00010da8 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00023010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010db4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00010dc0 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00023018)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00010dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002301c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023020)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00010de4 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00023024)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00010df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00023028)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00010dfc size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0002302c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00010e08 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00023030)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010e14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023034)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00010e2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002303c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00010e38 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00023040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00010e44 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00023044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010e50 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00023048)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010e5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002304c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 00010e68 size=12 ===== */

void RK_MPI_VPSS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_EnableChn_00023050)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010e74 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00023054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00010e80 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_00023058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 00010e8c size=12 ===== */

void RK_MPI_VPSS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StartGrp_0002305c)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010e98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00023060)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00010ea4 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_00023064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 00010eb0 size=12 ===== */

void RK_MPI_VPSS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnAttr_00023068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00010ebc size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_0002306c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00010ec8 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_00023070)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010ed4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023074)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010ee0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023078)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 00010eec size=12 ===== */

void RK_MPI_VPSS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_CreateGrp_0002307c)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010ef8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023080)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010f04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 00010f10 size=12 ===== */

void RK_MPI_VPSS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StopGrp_00023088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00010f1c size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0002308c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010f28 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00023090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00010f34 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_00023094)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00010f40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00023098)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010f4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002309c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00010f58 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_000230a0)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 00010f64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_000230a4)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00010f70 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_000230a8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00010f7c size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_000230ac)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010f88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000230b0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010f94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000230b4)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000230b8)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00010fac size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_000230bc)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010fb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000230c0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000230c4)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 00010fd0 size=12 ===== */

void RK_MPI_VPSS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DestroyGrp_000230c8)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010fdc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000230cc)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010fe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000230d0)(__th);
  return iVar1;
}



/* ===== FUN_00010ff4 @ 00010ff4 size=1344 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00010ff4(int param_1,char **param_2)

{
  undefined4 *puVar1;
  int iVar2;
  FILE *pFVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  int local_dc;
  pthread_t local_cc [3];
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_9c;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_48;
  
  puVar1 = DAT_00011538;
  iVar6 = 0;
  uVar9 = 8;
  pcVar8 = (char *)0x0;
  iVar5 = 0x2d0;
  iVar7 = 0x500;
  iVar11 = 0x438;
  local_dc = 0x780;
  uVar4 = DAT_00011534;
LAB_0001102c:
  do {
    iVar2 = getopt(param_1,param_2,DAT_0001153c);
    if (iVar2 == -1) break;
    if (iVar2 != 99) {
      if (iVar2 < 100) {
        if (iVar2 == 0x49) {
          iVar6 = atoi((char *)*puVar1);
          goto LAB_0001102c;
        }
        if (iVar2 == 0x57) {
          local_dc = atoi((char *)*puVar1);
          goto LAB_0001102c;
        }
        if (iVar2 == 0x48) {
          iVar11 = atoi((char *)*puVar1);
          goto LAB_0001102c;
        }
      }
      else {
        if (iVar2 == 0x68) {
          iVar5 = atoi((char *)*puVar1);
          goto LAB_0001102c;
        }
        if (iVar2 < 0x69) {
          if (iVar2 == 0x65) {
            pcVar10 = (char *)*puVar1;
            iVar2 = strcmp(pcVar10,DAT_00011590);
            if (iVar2 == 0) {
              uVar9 = 8;
              uVar4 = DAT_00011534;
            }
            else {
              iVar2 = strcmp(pcVar10,DAT_00011594);
              if (iVar2 == 0) {
                uVar9 = 0xc;
                uVar4 = DAT_000115a0;
              }
              else {
                iVar2 = strcmp(pcVar10,DAT_00011598);
                pcVar10 = DAT_0001159c;
                if (iVar2 != 0) goto LAB_00011218;
                uVar9 = 9;
                uVar4 = DAT_000115a4;
              }
            }
            goto LAB_0001102c;
          }
        }
        else {
          if (iVar2 == 0x6f) {
            pcVar8 = (char *)*puVar1;
            goto LAB_0001102c;
          }
          if (iVar2 == 0x77) {
            iVar7 = atoi((char *)*puVar1);
            goto LAB_0001102c;
          }
        }
      }
      pcVar8 = *param_2;
      puts(DAT_00011568);
      printf(DAT_0001156c,pcVar8);
      puts(DAT_00011570);
      puts(DAT_00011574);
      puts(DAT_00011578);
      puts(DAT_0001157c);
      puts(DAT_00011580);
      puts(DAT_00011584);
      puts(DAT_00011588);
      pcVar10 = DAT_0001158c;
LAB_00011218:
      puts(pcVar10);
      return 0;
    }
    iVar2 = atoi((char *)*puVar1);
    *DAT_00011554 = iVar2;
  } while( true );
  printf(DAT_00011540,uVar4);
  printf(DAT_00011544,local_dc,iVar11);
  printf(DAT_00011548,iVar7,iVar5);
  printf(DAT_0001154c,pcVar8);
  printf(DAT_00011550,iVar6);
  printf(DAT_00011558,*DAT_00011554);
  if (pcVar8 != (char *)0x0) {
    pFVar3 = fopen64(pcVar8,DAT_0001155c);
    *DAT_00011560 = pFVar3;
    if (pFVar3 == (FILE *)0x0) {
      printf(DAT_00011564,pcVar8);
      return 0;
    }
  }
  signal(2,DAT_000115a8);
  iVar2 = RK_MPI_SYS_Init();
  if (iVar2 == 0) {
    FUN_00011930();
    FUN_00011a1c(iVar6,local_dc,iVar11);
    FUN_00011ab4(0,iVar7,iVar5);
    printf(DAT_000115d0,DAT_000115cc);
    memset(&local_ac,0,0x84);
    local_60 = 1;
    local_48 = 0x2800;
    local_5c = 0x3c;
    local_80 = 2;
    local_9c = (iVar5 * iVar7 * 3) / 2;
    local_b0 = uVar9;
    local_90 = iVar7;
    local_8c = iVar5;
    local_88 = iVar7;
    local_84 = iVar5;
    RK_MPI_VENC_CreateChn(0,&local_b0);
    local_bc = 0xffffffff;
    RK_MPI_VENC_StartRecvFrame(0,&local_bc);
    local_cc[1] = 8;
    local_bc = 6;
    local_cc[2] = iVar2;
    local_c0 = iVar6;
    local_b8 = iVar2;
    local_b4 = iVar2;
    puts(DAT_000115d4);
    iVar11 = RK_MPI_SYS_Bind(local_cc + 1,&local_bc);
    if (iVar11 == 0) {
      local_b0 = 4;
      local_ac = iVar11;
      local_a8 = iVar11;
      puts(DAT_000115dc);
      iVar11 = RK_MPI_SYS_Bind(&local_bc,&local_b0);
      pcVar8 = DAT_000115e8;
      if (iVar11 == 0) {
        pthread_create(local_cc,(pthread_attr_t *)0x0,DAT_000115e4,(void *)0x0);
        while (*pcVar8 == '\0') {
          usleep(50000);
        }
        pthread_join(local_cc[0],(void **)0x0);
        goto LAB_0001128c;
      }
      uVar9 = 0x16c;
      uVar4 = DAT_000115e0;
    }
    else {
      uVar9 = 0x162;
      uVar4 = DAT_000115d8;
    }
  }
  else {
    uVar9 = 0x14d;
    uVar4 = DAT_000115ac;
  }
  RK_LOG(2,DAT_000115b4,uVar4,DAT_000115b0,uVar9);
LAB_0001128c:
  iVar11 = RK_MPI_SYS_UnBind(&local_bc,&local_b0);
  if (iVar11 != 0) {
    RK_LOG(2,DAT_000115b4,DAT_000115b8,DAT_000115b0,0x17c,iVar11);
  }
  iVar11 = RK_MPI_SYS_UnBind(local_cc + 1,&local_bc);
  if (iVar11 != 0) {
    RK_LOG(2,DAT_000115b4,DAT_000115b8,DAT_000115b0,0x181,iVar11);
  }
  uVar4 = RK_MPI_VI_DisableChn(0,iVar6);
  RK_LOG(2,DAT_000115b4,DAT_000115bc,DAT_000115b0,0x185,uVar4);
  RK_MPI_VPSS_StopGrp(0);
  RK_MPI_VPSS_DestroyGrp(0);
  iVar11 = RK_MPI_VENC_StopRecvFrame(0);
  if (iVar11 == 0) {
    iVar7 = RK_MPI_VENC_DestroyChn();
    if (iVar7 != 0) {
      RK_LOG(2,DAT_000115b4,DAT_000115c0,DAT_000115b0,400,iVar7);
    }
    uVar4 = RK_MPI_VI_DisableDev(0);
    RK_LOG(2,DAT_000115b4,DAT_000115c4,DAT_000115b0,0x194,uVar4);
    RK_LOG(2,DAT_000115b4,DAT_000115c8,DAT_000115b0,0x196,uVar4);
    RK_MPI_SYS_Exit();
  }
  return iVar11;
}



/* ===== entry @ 000115ec size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023038)
            (DAT_00011620,param_2,&stack0x00000004,DAT_00011624,DAT_0001161c,param_1);
  return;
}



/* ===== FUN_00011628 @ 00011628 size=32 ===== */

void FUN_00011628(void)

{
  if (DAT_0001164c == DAT_00011648) {
    return;
  }
  if (DAT_00011650 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011650)();
  return;
}



/* ===== _FINI_0 @ 0001168c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000116c8;
  if (*DAT_000116c8 != '\0') {
    return;
  }
  FUN_00011628();
  if (DAT_000116cc != 0) {
    __deregister_frame_info(DAT_000116d0);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000116d4 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000116f8 != 0) {
    __register_frame_info(DAT_00011700,DAT_000116fc);
  }
  if ((DAT_00011684 - DAT_00011680 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011688 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001167c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011688)();
  return;
}



/* ===== FUN_00011738 @ 00011738 size=68 ===== */

longlong FUN_00011738(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  timespec local_10;
  undefined4 uStack_8;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  uStack_8 = param_3;
  clock_gettime(1,&local_10);
  lVar1 = FUN_00011b68(local_10.tv_nsec,local_10.tv_nsec >> 0x1f,1000,0);
  return (longlong)local_10.tv_sec * (longlong)DAT_0001177c + lVar1;
}



/* ===== FUN_00011780 @ 00011780 size=392 ===== */

undefined4 FUN_00011780(void)

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
  
  printf(DAT_0001190c,DAT_00011908);
  local_1c0[0] = malloc(0x88);
  uVar2 = DAT_00011914;
  pcVar1 = DAT_00011910;
  uVar8 = 0;
  while (*pcVar1 == '\0') {
    iVar4 = RK_MPI_VENC_GetStream(0,local_1c0,0xffffffff);
    piVar3 = DAT_00011918;
    if (iVar4 == 0) {
      if (*DAT_00011918 != 0) {
        __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        fwrite(__ptr,1,local_1c0[0][1],(FILE *)*piVar3);
        fflush((FILE *)*piVar3);
      }
      uVar11 = FUN_00011738();
      uVar5 = local_1c0[0][2];
      iVar6 = local_1c0[0][3];
      iVar9 = (uint)uVar11 - uVar5;
      iVar10 = (int)((ulonglong)uVar11 >> 0x20) - (iVar6 + (uint)((uint)uVar11 < uVar5));
      uVar7 = local_1c0[0][1];
      uVar12 = local_1ac;
      RK_LOG(5,uVar2,DAT_0001191c,DAT_00011920,0x47,uVar8,local_1ac,uVar7,uVar5,iVar6,iVar9,iVar10);
      iVar4 = RK_MPI_VENC_ReleaseStream(0,local_1c0);
      if (iVar4 != 0) {
        RK_LOG(2,uVar2,DAT_00011924,DAT_00011920,0x4b,iVar4,uVar12,uVar7,uVar5,iVar6,iVar9,iVar10);
      }
      uVar8 = uVar8 + 1;
    }
    else {
      RK_LOG(2,uVar2,DAT_0001192c,DAT_00011920,0x4f,iVar4);
    }
    if (*DAT_00011928 < uVar8) {
      *pcVar1 = '\x01';
    }
    usleep(10000);
  }
  if ((FILE *)*DAT_00011918 != (FILE *)0x0) {
    fclose((FILE *)*DAT_00011918);
  }
  free(local_1c0[0]);
  return 0;
}



/* ===== FUN_00011930 @ 00011930 size=208 ===== */

undefined4 FUN_00011930(void)

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
  
  puts(DAT_00011a00);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_68 = 0;
  local_5c = 0;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  memset(&local_4c,0,0x44);
  iVar1 = RK_MPI_VI_GetDevAttr(0,&local_68);
  if (iVar1 == DAT_00011a04) {
    iVar1 = RK_MPI_VI_SetDevAttr(0,&local_68);
    __format = DAT_00011a08;
    if (iVar1 != 0) goto LAB_000119d4;
  }
  else {
    puts(DAT_00011a14);
  }
  iVar1 = RK_MPI_VI_GetDevIsEnable(0);
  if (iVar1 == 0) {
    puts(DAT_00011a18);
    return 0;
  }
  iVar1 = RK_MPI_VI_EnableDev(0);
  __format = DAT_00011a0c;
  if ((iVar1 == 0) &&
     (local_4c = iVar1, local_48 = iVar1, iVar1 = RK_MPI_VI_SetDevBindPipe(0,&local_4c),
     __format = DAT_00011a10, iVar1 == 0)) {
    return 0;
  }
LAB_000119d4:
  printf(__format,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00011a1c @ 00011a1c size=140 ===== */

uint FUN_00011a1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [24];
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_40;
  
  printf(DAT_00011aa8,DAT_00011aac);
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
    printf(DAT_00011ab0,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00011ab4 @ 00011ab4 size=172 ===== */

int FUN_00011ab4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  printf(DAT_00011b64,DAT_00011b60);
  local_70 = 0;
  local_78 = 0x1000;
  local_74 = 0x1000;
  local_60 = 0;
  local_68 = 0xffffffff;
  local_64 = 0xffffffff;
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  local_5c = 0;
  local_48 = 0;
  local_4c = 0;
  local_44 = 0;
  local_58 = param_2;
  local_54 = param_3;
  iVar1 = RK_MPI_VPSS_CreateGrp(0,&local_78);
  if (((iVar1 == 0) && (iVar1 = RK_MPI_VPSS_SetChnAttr(0,param_1,&local_5c), iVar1 == 0)) &&
     (iVar1 = RK_MPI_VPSS_EnableChn(0,param_1), iVar1 == 0)) {
    iVar1 = RK_MPI_VPSS_StartGrp();
  }
  return iVar1;
}



/* ===== FUN_00011b68 @ 00011b68 size=76 ===== */

void FUN_00011b68(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00011bb4();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00011bb4 @ 00011bb4 size=328 ===== */

undefined8 FUN_00011bb4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00011cfc size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_CreateGrp(void)

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



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

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



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000240b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 000240b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000240b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000240bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000240c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000240c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000240c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000240cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


