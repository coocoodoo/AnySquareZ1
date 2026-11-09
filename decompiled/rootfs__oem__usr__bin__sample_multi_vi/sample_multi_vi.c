// sample_multi_vi — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000114ac size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000114d0 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002500c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 000114dc size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_00025010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 000114e8 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_00025014)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000114f4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00025018)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00011500 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_0002501c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 0001150c size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_00025020)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00011518 size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_00025024)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00011524 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00025028)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 00011530 size=12 ===== */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_switch_scene_0002502c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 0001153c size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00025030)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 00011548 size=12 ===== */

void RK_MPI_VI_StopPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StopPipe_00025034)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011554 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00025038)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011560 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002503c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 0001156c size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_00025040)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00011578 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00025044)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00011584 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_00025048)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00011590 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_0002504c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0001159c size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00025050)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 000115a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_00025054)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000115b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00025058)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 000115c0 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_0002505c)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 000115cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00025060)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 000115e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00025068)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 000115f0 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_0002506c)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 000115fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_00025070)(__stream);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011608 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00025074)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011614 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00025078)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00011620 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_0002507c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 0001162c size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00025080)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 00011638 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_00025084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011644 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00025088)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00011650 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_0002508c)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 0001165c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00025090)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011668 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00025094)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00011674 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_00025098)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00011680 size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_0002509c)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 0001168c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000250a0)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 00011698 size=12 ===== */

void RK_MPI_VI_StartPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StartPipe_000250a4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 000116a4 size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_000250a8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 000116b0 size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_000250ac)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 000116bc size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_000250b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000116c8 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_000250b4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 000116d4 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_000250b8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000116e0 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_000250bc)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 000116ec size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_000250c0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000116f8 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_000250c4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00011704 size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_000250c8)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011710 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_000250cc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 0001171c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000250d0)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00011728 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_000250d4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00011734 size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_000250d8)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011740 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_000250dc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 0001174c size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_000250e0)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00011758 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_000250e4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00011764 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_000250e8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00011770 size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_000250ec)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 0001177c size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_000250f0)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00011788 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000250f4)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011794 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000250f8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 000117a0 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_000250fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 000117ac size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00025100)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000117b8 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00025104)();
  return;
}



/* ===== <EXTERNAL>::free @ 000117c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00025108)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000117d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002510c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000117dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00025110)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000117e8 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00025114)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000117f4 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_00025118)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00011800 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002511c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 0001180c size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_00025120)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00011818 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00025124)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00011824 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00025128)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011830 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002512c)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 0001183c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00025130)(__th);
  return iVar1;
}



/* ===== FUN_00011848 @ 00011848 size=1616 ===== */

int FUN_00011848(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  __start_routine *__start_routine;
  char *pcVar2;
  void *__s;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  char *__nptr;
  undefined4 uVar14;
  int local_84;
  int local_80;
  char *local_7c;
  int local_78;
  int local_74;
  int local_70;
  pthread_t local_64 [4];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  char *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 < 2) {
LAB_00011860:
    FUN_000121e4(*param_2);
  }
  else {
    __s = malloc(0x1560);
    iVar11 = 0;
    iVar13 = 0;
    iVar10 = 2;
    memset(__s,0,0x1560);
    signal(2,DAT_00011e98);
    local_80 = 0;
    local_84 = 1;
    local_7c = (char *)0x0;
    local_74 = -1;
    local_70 = 0x438;
    local_78 = 0x780;
    pcVar8 = (char *)0x0;
    pcVar2 = local_7c;
    while (local_7c = pcVar2, iVar3 = getopt_long(param_1,param_2,DAT_00011ea0,DAT_00011e9c,0),
          iVar3 != -1) {
      __nptr = (char *)*DAT_00011ec0;
      pcVar2 = local_7c;
      if (iVar3 == 0x69) {
        local_84 = atoi(__nptr);
      }
      else if (iVar3 < 0x6a) {
        if (iVar3 == 99) {
          local_80 = atoi(__nptr);
        }
        else if (iVar3 < 100) {
          if (iVar3 != 0x61) goto LAB_00011860;
          pcVar8 = __nptr;
          if (__nptr == (char *)0x0) {
            pcVar9 = (char *)param_2[*DAT_00011ec4];
            pcVar8 = pcVar9;
            if ((pcVar9 != (char *)0x0) && (pcVar8 = __nptr, *pcVar9 != '-')) {
              *DAT_00011ec4 = *DAT_00011ec4 + 1;
              pcVar8 = pcVar9;
            }
          }
        }
        else if (iVar3 == 0x66) {
          iVar13 = strcmp(__nptr,DAT_00011ecc);
          if (iVar13 != 0) {
            iVar13 = strcmp(__nptr,DAT_00011ed0);
            if (iVar13 == 0) {
              iVar13 = 2;
            }
            else {
              iVar13 = strcmp(__nptr,DAT_00011ed4);
              if (iVar13 == 0) {
                iVar13 = 10;
              }
              else {
                iVar13 = strcmp(__nptr,DAT_00011ed8);
                if (iVar13 == 0) {
                  iVar13 = 0x10000;
                }
                else {
                  iVar3 = strcmp(__nptr,DAT_00011edc);
                  iVar13 = DAT_00011ee8;
                  if (iVar3 != 0) {
                    uVar14 = 0xd9;
                    uVar7 = DAT_00011ee0;
                    goto LAB_00011b10;
                  }
                }
                local_80 = 1;
              }
            }
          }
        }
        else {
          if (iVar3 != 0x68) goto LAB_00011860;
          local_70 = atoi(__nptr);
        }
      }
      else {
        pcVar2 = __nptr;
        if (iVar3 != 0x6f) {
          if (iVar3 < 0x70) {
            if (iVar3 == 0x6c) {
              local_74 = atoi(__nptr);
              pcVar2 = local_7c;
            }
            else {
              if (iVar3 != 0x6e) goto LAB_00011860;
              iVar10 = atoi(__nptr);
              pcVar2 = local_7c;
            }
          }
          else if (iVar3 == 0x77) {
            local_78 = atoi(__nptr);
            pcVar2 = local_7c;
          }
          else {
            if (iVar3 != 0xd5) goto LAB_00011860;
            iVar11 = atoi(__nptr);
            pcVar2 = local_7c;
            if (iVar11 != 0) {
              if (iVar11 == 1) {
                iVar11 = 0x10;
              }
              else {
                if (iVar11 != 2) {
                  uVar14 = 0xfb;
                  uVar7 = DAT_00011ec8;
LAB_00011b10:
                  RK_LOG(2,DAT_00011ee4,uVar7,DAT_00011ebc,uVar14);
                  FUN_000121e4(*param_2);
                  goto LAB_00011b24;
                }
                iVar11 = 0x20;
              }
            }
          }
        }
      }
    }
    printf(DAT_00011ea4,iVar10);
    printf(DAT_00011ea8,local_7c);
    printf(DAT_00011eac,pcVar8);
    if (pcVar8 != (char *)0x0) {
      printf(DAT_00011eb0,pcVar8);
      printf(DAT_00011eb4,0);
      iVar3 = -1;
      if (local_84 == 0) {
        for (iVar4 = 0; iVar4 < iVar10; iVar4 = iVar4 + 1) {
          iVar5 = FUN_00012830(iVar4,iVar11,0,pcVar8);
          iVar6 = FUN_00012dec(iVar4);
          if (iVar5 != 0 || iVar6 != 0) {
            uVar14 = 0x113;
            uVar7 = DAT_00011eec;
            goto LAB_00011bec;
          }
        }
      }
      else {
        local_64[1] = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        local_64[2] = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        local_64[3] = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_64[0] = 0;
        local_34 = 0;
        local_54 = 0;
        local_4c = 0;
        local_3c = 0;
        uStack_30 = 0;
        uStack_50 = local_64[1];
        uStack_48 = local_64[1];
        local_44 = iVar10;
        local_40 = pcVar8;
        uStack_38 = local_64[1];
        uStack_2c = local_64[1];
        iVar4 = FUN_00012b58(0,iVar11,0,0,0,local_64);
        if (iVar4 != 0) {
          uVar14 = 0x11f;
          uVar7 = DAT_00011eb8;
          goto LAB_00011bec;
        }
      }
    }
    iVar11 = RK_MPI_SYS_Init();
    if (iVar11 == 0) {
      pvVar12 = __s;
      for (iVar11 = 0; iVar11 < iVar10; iVar11 = iVar11 + 1) {
        *(undefined4 *)((int)pvVar12 + 0xc0) = 1;
        *(int *)((int)pvVar12 + 0x10) = local_78;
        *(char **)((int)pvVar12 + 0x388) = local_7c;
        *(int *)((int)pvVar12 + 0x14) = local_70;
        *(int *)((int)pvVar12 + 0x1c) = iVar11;
        *(int *)((int)pvVar12 + 0x20) = iVar11;
        *(int *)((int)pvVar12 + 0x24) = local_80;
        *(undefined4 *)((int)pvVar12 + 0xd0) = 2;
        *(undefined4 *)((int)pvVar12 + 0xdc) = 4;
        *(int *)((int)pvVar12 + 8) = local_84;
        *(int *)((int)pvVar12 + 0xa8) = iVar13;
        *(undefined4 *)((int)pvVar12 + 0xb4) = 0;
        *(int *)((int)pvVar12 + 0x18) = local_74;
        *(undefined4 *)((int)pvVar12 + 0xc4) = 0xffffffff;
        *(undefined4 *)((int)pvVar12 + 200) = 0xffffffff;
        FUN_00012284(pvVar12);
        pvVar12 = (void *)((int)pvVar12 + 0x390);
      }
      iVar13 = 0;
      pvVar12 = __s;
      while ((__start_routine = DAT_00011ef4, iVar13 < iVar10 && (*(int *)((int)pvVar12 + 8) != 0)))
      {
        puVar1 = (undefined4 *)((int)pvVar12 + 0x20);
        pvVar12 = (void *)((int)pvVar12 + 0x390);
        iVar11 = RK_MPI_VI_StartPipe(*puVar1);
        if (iVar11 != 0) {
          RK_LOG(2,DAT_00011ee4,DAT_00011ef8,DAT_00011ebc,0x145,iVar11,
                 *(undefined4 *)((int)__s + iVar13 * 0x390 + 0x20));
          goto LAB_00011c28;
        }
        iVar13 = iVar13 + 1;
      }
      for (iVar13 = 0; iVar13 < iVar10; iVar13 = iVar13 + 1) {
        pthread_create(local_64 + iVar13,(pthread_attr_t *)0x0,__start_routine,
                       (void *)(iVar13 * 0x390 + (int)__s));
      }
      printf(DAT_00011f00,DAT_00011efc);
      pcVar2 = DAT_00011f04;
      while (*pcVar2 == '\0') {
        sleep(1);
      }
      printf(DAT_00011f08,DAT_00011efc);
      for (iVar13 = 0; uVar14 = DAT_00011f0c, uVar7 = DAT_00011ebc, iVar13 < iVar10;
          iVar13 = iVar13 + 1) {
        pthread_join(local_64[iVar13],(void **)0x0);
      }
      iVar13 = 0;
      for (pvVar12 = __s; (iVar13 < iVar10 && (*(int *)((int)pvVar12 + 8) != 0));
          pvVar12 = (void *)((int)pvVar12 + 0x390)) {
        iVar11 = RK_MPI_VI_StopPipe(*(undefined4 *)((int)pvVar12 + 0x20));
        if (iVar11 != 0) {
          RK_LOG(2,DAT_00011ee4,uVar14,uVar7,0x15e,iVar11,*(undefined4 *)((int)pvVar12 + 0x20));
        }
        iVar13 = iVar13 + 1;
      }
      for (iVar13 = 0; iVar13 < iVar10; iVar13 = iVar13 + 1) {
        FUN_00012708((void *)(iVar13 * 0x390 + (int)__s));
      }
    }
LAB_00011c28:
    RK_MPI_SYS_Exit();
    if (pcVar8 != (char *)0x0) {
      if (local_84 == 0) {
        for (iVar13 = 0; iVar13 < iVar10; iVar13 = iVar13 + 1) {
          iVar3 = FUN_00012ce4(iVar13);
          if (iVar3 != 0) {
            uVar14 = 0x16e;
            uVar7 = DAT_00011f10;
            iVar4 = iVar3;
            goto LAB_00011bec;
          }
        }
      }
      else {
        iVar3 = FUN_00012d6c(0);
        if (iVar3 != 0) {
          uVar14 = 0x175;
          uVar7 = DAT_00011ef0;
          iVar4 = iVar3;
LAB_00011bec:
          RK_LOG(2,DAT_00011ee4,uVar7,DAT_00011ebc,uVar14,iVar4);
          return iVar3;
        }
      }
    }
LAB_00011b24:
    free(__s);
  }
  return 0;
}



/* ===== entry @ 00011f14 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00025064)
            (DAT_00011f48,param_2,&stack0x00000004,DAT_00011f4c,DAT_00011f44,param_1);
  return;
}



/* ===== FUN_00011f50 @ 00011f50 size=32 ===== */

void FUN_00011f50(void)

{
  if (DAT_00011f74 == DAT_00011f70) {
    return;
  }
  if (DAT_00011f78 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011f78)();
  return;
}



/* ===== _FINI_0 @ 00011fb4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011ff0;
  if (*DAT_00011ff0 != '\0') {
    return;
  }
  FUN_00011f50();
  if (DAT_00011ff4 != 0) {
    __deregister_frame_info(DAT_00011ff8);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011ffc size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00012020 != 0) {
    __register_frame_info(DAT_00012028,DAT_00012024);
  }
  if ((DAT_00011fac - DAT_00011fa8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011fb0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011fb0)();
  return;
}



/* ===== FUN_0001202c @ 0001202c size=368 ===== */

undefined4 FUN_0001202c(int param_1)

{
  char *pcVar1;
  char *__format;
  FILE *__s;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  void *local_11c;
  char acStack_118 [256];
  
  memset(acStack_118,0,0x100);
  pcVar1 = DAT_0001219c;
  local_11c = (void *)0x0;
  __s = (FILE *)0x0;
  if (*(int *)(param_1 + 0x388) != 0) {
    snprintf(acStack_118,0x100,DAT_000121a0,*(int *)(param_1 + 0x388),
             *(undefined4 *)(param_1 + 0x1c));
    __s = fopen64(acStack_118,DAT_000121a4);
    if (__s == (FILE *)0x0) {
      printf(DAT_000121a8,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x388));
      *pcVar1 = '\x01';
      return 0;
    }
  }
  __format = DAT_000121ac;
  iVar4 = 0;
  do {
    if (*pcVar1 != '\0') {
LAB_0001217c:
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return 0;
    }
    iVar2 = FUN_000125bc(param_1,&local_11c);
    iVar3 = iVar4;
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x18) <= iVar4 && 0 < *(int *)(param_1 + 0x18)) {
        FUN_000126b8(param_1);
        *pcVar1 = '\x01';
        goto LAB_0001217c;
      }
      if (__s != (FILE *)0x0) {
        fwrite(local_11c,1,*(size_t *)(param_1 + 0x358),__s);
        fflush(__s);
      }
      uVar5 = FUN_00013250(*(undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x354),1000,0)
      ;
      iVar3 = iVar4 + 1;
      printf(__format,*(undefined4 *)(param_1 + 0x1c),local_11c,*(undefined4 *)(param_1 + 0x35c),
             *(undefined4 *)(param_1 + 0x358),*(undefined4 *)(param_1 + 0x35c),iVar4,
             *(undefined4 *)(param_1 + 0x34c),(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      FUN_000126b8(param_1);
    }
    usleep(1000);
    iVar4 = iVar3;
  } while( true );
}



/* ===== FUN_000121e4 @ 000121e4 size=112 ===== */

void FUN_000121e4(undefined4 param_1)

{
  puts(DAT_00012254);
  printf(DAT_00012258,param_1);
  puts(DAT_0001225c);
  puts(DAT_00012260);
  puts(DAT_00012264);
  puts(DAT_00012268);
  puts(DAT_0001226c);
  puts(DAT_00012270);
  puts(DAT_00012274);
  puts(DAT_00012278);
  puts(DAT_0001227c);
  puts(DAT_00012280);
  return;
}



/* ===== FUN_00012284 @ 00012284 size=764 ===== */

int FUN_00012284(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  
  iVar1 = RK_MPI_VI_GetDevAttr(param_1[7],param_1 + 0x10);
  if (iVar1 == DAT_00012580) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_000122fc;
    uVar7 = 0x29;
    uVar5 = DAT_00012584;
  }
  else {
    RK_LOG(2,DAT_0001258c,DAT_00012590,DAT_00012588,0x2d);
LAB_000122fc:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_0001258c,DAT_000125a0,DAT_00012588,0x42);
LAB_000123b8:
      param_1[0x28] = param_1[4];
      param_1[0x29] = param_1[5];
      iVar1 = RK_MPI_VI_SetChnAttr(param_1[8],param_1[9],param_1 + 0x28);
      if (iVar1 == 0) {
        if (*param_1 != 0) {
          uVar4 = param_1[3];
          uVar6 = param_1[5];
          local_1c = 0;
          uStack_18 = 0;
          local_14 = 0;
          if ((uVar4 < 0x80) || (uVar6 < uVar4)) {
            uVar7 = 0x51;
            uVar5 = DAT_000125a8;
LAB_00012438:
            RK_LOG(2,DAT_0001258c,uVar5,DAT_00012588,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_000125ac;
            goto LAB_00012438;
          }
        }
        if (param_1[2] == 0) {
          iVar1 = RK_MPI_VI_EnableChn();
        }
        else {
          iVar1 = RK_MPI_VI_EnableChnExt(param_1[8],param_1[9]);
        }
        if (iVar1 == 0) {
          if ((param_1[1] == 0) ||
             (iVar1 = RK_MPI_VI_SetEptz(param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],
                                        param_1[0xd],param_1[0xe],param_1[0xf]), iVar1 == 0)) {
            iVar1 = 0;
            if (param_1[0x43] == 0) {
              return 0;
            }
            iVar3 = RK_MPI_VI_ChnSaveFile(param_1[8],param_1[9],param_1 + 0x43);
            uVar7 = 0x75;
            uVar2 = 5;
            uVar5 = DAT_000125b8;
            goto LAB_00012578;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_000125b4;
          goto LAB_0001236c;
        }
        RK_LOG(2,DAT_0001258c,DAT_000125b0,DAT_00012588,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_000125a4;
LAB_0001236c:
        RK_LOG(2,DAT_0001258c,uVar5,DAT_00012588,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_0001259c;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_000123b8;
        uVar7 = 0x3e;
        uVar5 = DAT_00012598;
        goto LAB_0001236c;
      }
      uVar7 = 0x36;
      uVar5 = DAT_00012594;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_00012578:
  RK_LOG(uVar2,DAT_0001258c,uVar5,DAT_00012588,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_000125bc @ 000125bc size=236 ===== */

undefined4 FUN_000125bc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_VI_GetChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,0xffffffff);
  if (iVar1 == 0) {
    uVar2 = RK_MPI_MB_Handle2VirAddr(*(undefined4 *)(param_1 + 0x318));
    *param_2 = uVar2;
    uVar2 = RK_MPI_VI_QueryChnStatus
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       param_1 + 0x368);
    RK_LOG(5,DAT_000126ac,DAT_000126a8,DAT_000126b0,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_000126ac,DAT_000126b4,DAT_000126b0,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_000126b8 @ 000126b8 size=68 ===== */

undefined4 FUN_000126b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00012704,DAT_00012700,DAT_000126fc,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_00012708 @ 00012708 size=104 ===== */

uint FUN_00012708(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = RK_MPI_VI_DisableChn();
  }
  else {
    uVar1 = RK_MPI_VI_DisableChnExt
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_3,
                       *(int *)(param_1 + 8),param_1,param_2,param_3);
  }
  uVar2 = RK_MPI_VI_DisableDev(*(undefined4 *)(param_1 + 0x1c));
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    RK_LOG(2,DAT_00012778,DAT_00012774,DAT_00012770,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00012830 @ 00012830 size=236 ===== */

undefined4 FUN_00012830(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_00012928;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00012924);
    __format = DAT_00012934;
    if (param_4 == 0) {
      puts(DAT_0001292c);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00012930 + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_00012938,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_0001293c,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00012940,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_00012948,DAT_00012944);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00012920,DAT_0001291c);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001294c @ 0001294c size=488 ===== */

int FUN_0001294c(int param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *__format;
  int iVar6;
  ushort *__s;
  int *piVar7;
  int iVar8;
  int local_108;
  int local_104 [8];
  int local_e4 [8];
  undefined1 auStack_c4 [8];
  undefined1 local_bc;
  ushort *local_90;
  undefined1 local_8c;
  ushort *local_88;
  int local_84;
  char acStack_48 [36];
  
  memset(&local_108,0,0x44);
  iVar3 = DAT_00012b38;
  __format = DAT_00012b34;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_00012b38 + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_00012b54);
          goto LAB_00012b24;
        }
        printf(DAT_00012b3c,piVar7[1],piVar7[9]);
        memset(auStack_c4,0,0x9c);
        iVar4 = rk_aiq_user_api2_aldch_v21_GetAttrib(iVar6,auStack_c4);
        if (iVar4 == 0) {
          __s = *(ushort **)(param_3 + iVar8 * 4);
          if (param_2 == (ushort *)0x2) {
            local_bc = 1;
            local_8c = 1;
            local_90 = param_2;
            local_88 = __s;
            if (__s == (ushort *)0x0) {
              puts(DAT_00012b40);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_00012b48,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_00012b4c;
            if (pcVar5 == (char *)0x0) goto LAB_00012aa4;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_00012b50,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_00012b44,iVar6);
            return iVar6;
          }
        }
        piVar7 = piVar7 + 1;
      }
    }
    else {
      iVar4 = 0;
    }
  }
  else {
LAB_00012aa4:
    printf(__format,__s);
LAB_00012b24:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_00012b58 @ 00012b58 size=352 ===== */

undefined4
FUN_00012b58(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            int param_6)

{
  char *__format;
  char *__format_00;
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined1 *__dest;
  char acStack_558 [304];
  undefined1 auStack_428 [1028];
  
  uVar1 = DAT_00012cdc;
  __format_00 = DAT_00012cd8;
  __format = DAT_00012cd4;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_00012cc8, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_00012cc0;
      if (iVar3 != 0) goto LAB_00012bb0;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_00012cc4;
      if (iVar3 != 0) goto LAB_00012bb0;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_00012ccc;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_0001294c(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_00012cd0;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_00012ce0);
        return 0;
      }
    }
LAB_00012bb0:
    puts(__s);
  }
  else {
    printf(DAT_00012cbc,DAT_00012cb8,8);
  }
  return 0xffffffff;
}



/* ===== FUN_00012ce4 @ 00012ce4 size=112 ===== */

undefined4 FUN_00012ce4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00012d54;
  if ((param_1 < 8) && (*(int *)(DAT_00012d54 + param_1 * 4) != 0)) {
    puts(DAT_00012d60);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_00012d64);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_00012d68);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_00012d5c,DAT_00012d58,param_1);
  return 0xffffffff;
}



/* ===== FUN_00012d6c @ 00012d6c size=104 ===== */

undefined4 FUN_00012d6c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00012dd4;
  if (param_1 < 8) {
    if (*(int *)(DAT_00012dd4 + param_1 * 4) != 0) {
      puts(DAT_00012de0);
      rk_aiq_uapi2_camgroup_stop(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_00012de4);
      rk_aiq_uapi2_camgroup_destroy(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_00012de8);
      *(undefined4 *)(iVar1 + param_1 * 4) = 0;
      return 0;
    }
  }
  printf(DAT_00012ddc,DAT_00012dd8);
  return 0xffffffff;
}



/* ===== FUN_00012dec @ 00012dec size=152 ===== */

undefined4 FUN_00012dec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00012e84;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00012e84 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_00012e90 + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_00012e98);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_00012ea0);
        return 0;
      }
      puts(DAT_00012e9c);
    }
    else {
      puts(DAT_00012e94);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00012e8c,DAT_00012e88);
  }
  return 0xffffffff;
}



/* ===== FUN_00013250 @ 00013250 size=76 ===== */

void FUN_00013250(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0001329c();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0001329c @ 0001329c size=328 ===== */

undefined8 FUN_0001329c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 000133e4 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00026014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 00026028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StartPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

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



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StopPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 000260c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 000260c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 000260cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000260d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000260d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000260d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 000260dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000260e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 000260e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000260e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000260ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 000260f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 000260f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 000260f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 000260fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00026100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00026104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00026108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 0002610c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00026110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00026114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00026118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0002611c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00026120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00026124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00026128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002612c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


