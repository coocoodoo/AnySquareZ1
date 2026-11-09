// rk_mpi_ao_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000116a0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000116c4 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002600c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000116d0 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00026010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SendFrame @ 000116dc size=12 ===== */

void RK_MPI_AO_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_AO_SendFrame_00026014)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000116e8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00026018)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetTrackMode @ 000116f4 size=12 ===== */

void RK_MPI_AO_GetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AO_GetTrackMode_0002601c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00011700 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00026020)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetChnParams @ 0001170c size=12 ===== */

void RK_MPI_AO_SetChnParams(void)

{
  (*(code *)PTR_RK_MPI_AO_SetChnParams_00026024)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00011718 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00026028)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_ClearChnBuf @ 00011724 size=12 ===== */

void RK_MPI_AO_ClearChnBuf(void)

{
  (*(code *)PTR_RK_MPI_AO_ClearChnBuf_0002602c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00011730 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00026030)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableChn @ 0001173c size=12 ===== */

void RK_MPI_AO_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AO_EnableChn_00026034)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011748 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00026038)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011754 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002603c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableReSmp @ 00011760 size=12 ===== */

void RK_MPI_AO_EnableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AO_EnableReSmp_00026040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_ClrPubAttr @ 0001176c size=12 ===== */

void RK_MPI_AO_ClrPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AO_ClrPubAttr_00026044)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00011778 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00026048)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00011790 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00026050)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendStream @ 0001179c size=12 ===== */

void RK_MPI_ADEC_SendStream(void)

{
  (*(code *)PTR_RK_MPI_ADEC_SendStream_00026054)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 000117a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00026058)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 000117b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002605c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000117c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00026060)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_WaitEos @ 000117cc size=12 ===== */

void RK_MPI_AO_WaitEos(void)

{
  (*(code *)PTR_RK_MPI_AO_WaitEos_00026064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_ResumeChn @ 000117d8 size=12 ===== */

void RK_MPI_AO_ResumeChn(void)

{
  (*(code *)PTR_RK_MPI_AO_ResumeChn_00026068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 000117e4 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0002606c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_Disable @ 000117f0 size=12 ===== */

void RK_MPI_AO_Disable(void)

{
  (*(code *)PTR_RK_MPI_AO_Disable_00026070)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 000117fc size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00026074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011808 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00026078)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_PauseChn @ 00011814 size=12 ===== */

void RK_MPI_AO_PauseChn(void)

{
  (*(code *)PTR_RK_MPI_AO_PauseChn_0002607c)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011820 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00026080)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 0001182c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00026084)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00011838 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00026088)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetTrackMode @ 00011844 size=12 ===== */

void RK_MPI_AO_SetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AO_SetTrackMode_0002608c)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011850 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00026090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetMute @ 0001185c size=12 ===== */

void RK_MPI_AO_SetMute(void)

{
  (*(code *)PTR_RK_MPI_AO_SetMute_00026094)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00011868 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00026098)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetMute @ 00011874 size=12 ===== */

void RK_MPI_AO_GetMute(void)

{
  (*(code *)PTR_RK_MPI_AO_GetMute_0002609c)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00011880 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_000260a0)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetVolume @ 0001188c size=12 ===== */

void RK_MPI_AO_SetVolume(void)

{
  (*(code *)PTR_RK_MPI_AO_SetVolume_000260a4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendEndOfStream @ 00011898 size=12 ===== */

void RK_MPI_ADEC_SendEndOfStream(void)

{
  (*(code *)PTR_RK_MPI_ADEC_SendEndOfStream_000260a8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_CreateChn @ 000118a4 size=12 ===== */

void RK_MPI_ADEC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_ADEC_CreateChn_000260ac)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_QueryFileStatus @ 000118b0 size=12 ===== */

void RK_MPI_AO_QueryFileStatus(void)

{
  (*(code *)PTR_RK_MPI_AO_QueryFileStatus_000260b0)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 000118bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000260b4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableChn @ 000118c8 size=12 ===== */

void RK_MPI_AO_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AO_DisableChn_000260b8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetPubAttr @ 000118d4 size=12 ===== */

void RK_MPI_AO_GetPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AO_GetPubAttr_000260bc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_Enable @ 000118e0 size=12 ===== */

void RK_MPI_AO_Enable(void)

{
  (*(code *)PTR_RK_MPI_AO_Enable_000260c0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 000118ec size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_000260c4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableReSmp @ 000118f8 size=12 ===== */

void RK_MPI_AO_DisableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AO_DisableReSmp_000260c8)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00011904 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000260cc)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011910 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_000260d0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 0001191c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_000260d4)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_DestroyChn @ 00011928 size=12 ===== */

void RK_MPI_ADEC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_ADEC_DestroyChn_000260d8)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00011934 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_000260dc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_QueryChnStat @ 00011940 size=12 ===== */

void RK_MPI_AO_QueryChnStat(void)

{
  (*(code *)PTR_RK_MPI_AO_QueryChnStat_000260e0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0001194c size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_000260e4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SaveFile @ 00011958 size=12 ===== */

void RK_MPI_AO_SaveFile(void)

{
  (*(code *)PTR_RK_MPI_AO_SaveFile_000260e8)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00011964 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_000260ec)(__status);
  return;
}



/* ===== <EXTERNAL>::free @ 00011970 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000260f0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetPubAttr @ 0001197c size=12 ===== */

void RK_MPI_AO_SetPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AO_SetPubAttr_000260f4)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011988 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000260f8)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00011994 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000260fc)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetVolume @ 000119a0 size=12 ===== */

void RK_MPI_AO_GetVolume(void)

{
  (*(code *)PTR_RK_MPI_AO_GetVolume_00026100)();
  return;
}



/* ===== <EXTERNAL>::puts @ 000119ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00026104)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000119b8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00026108)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 000119c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0002610c)(__th);
  return iVar1;
}



/* ===== main @ 000119d0 size=2708 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  _rkMpiAOCtx *__src;
  int iVar7;
  int iVar8;
  pthread_t local_55c [5];
  undefined4 local_548;
  undefined8 local_544;
  undefined1 auStack_538 [40];
  longlong local_510;
  undefined8 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 local_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  _rkMpiAOCtx a_Stack_4d0 [20];
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4ac;
  int local_49c;
  uint local_460;
  undefined4 local_418 [2];
  undefined *local_410;
  char *local_408;
  code *local_404;
  undefined4 local_3fc;
  undefined4 local_3f8;
  char *local_3e8;
  undefined4 local_3d8;
  undefined1 local_3d4;
  char *local_3d0;
  _rkMpiAOCtx *local_3cc;
  char *local_3c8;
  undefined4 local_3b8;
  char *local_3b0;
  _rkMpiAOCtx *local_3ac;
  char *local_3a8;
  undefined4 local_398;
  char *local_390;
  _rkMpiAOCtx *local_38c;
  char *local_388;
  undefined4 local_378;
  char *local_370;
  _rkMpiAOCtx *local_36c;
  char *local_368;
  undefined4 local_358;
  char *local_350;
  _rkMpiAOCtx *local_34c;
  char *local_348;
  undefined4 local_338;
  undefined1 local_334;
  char *local_330;
  _rkMpiAOCtx *local_32c;
  char *local_328;
  undefined4 local_318;
  undefined1 local_314;
  char *local_310;
  _rkMpiAOCtx *local_30c;
  char *local_308;
  undefined4 local_2f8;
  undefined1 local_2f4;
  char *local_2f0;
  _rkMpiAOCtx *local_2ec;
  char *local_2e8;
  undefined4 local_2d8;
  undefined *local_2d0;
  _rkMpiAOCtx *local_2cc;
  char *local_2c8;
  undefined4 local_2b8;
  char *local_2b0;
  _rkMpiAOCtx *local_2ac;
  char *local_2a8;
  undefined4 local_298;
  char *local_290;
  _rkMpiAOCtx *local_28c;
  char *local_288;
  undefined4 local_278;
  char *local_270;
  _rkMpiAOCtx *local_26c;
  char *local_268;
  undefined4 local_258;
  char *local_250;
  _rkMpiAOCtx *local_24c;
  char *local_248;
  undefined4 local_238;
  char *local_230;
  _rkMpiAOCtx *local_22c;
  char *local_228;
  undefined4 local_218;
  char *local_210;
  _rkMpiAOCtx *local_20c;
  char *local_208;
  undefined4 local_1f8;
  char *local_1f0;
  _rkMpiAOCtx *local_1ec;
  char *local_1e8;
  undefined4 local_1d8;
  char *local_1d0;
  _rkMpiAOCtx *local_1cc;
  char *local_1c8;
  undefined4 local_1b8;
  char *local_1b0;
  _rkMpiAOCtx *local_1ac;
  char *local_1a8;
  undefined4 local_198;
  char *local_190;
  _rkMpiAOCtx *local_18c;
  char *local_188;
  undefined4 local_178;
  char *local_170;
  _rkMpiAOCtx *local_16c;
  char *local_168;
  undefined4 local_158;
  char *local_150;
  _rkMpiAOCtx *local_14c;
  char *local_148;
  undefined4 local_138;
  char *local_130;
  _rkMpiAOCtx *local_12c;
  char *local_128;
  undefined4 local_118;
  char *local_110;
  _rkMpiAOCtx *local_10c;
  char *local_108;
  undefined4 local_f8;
  char *local_f0;
  _rkMpiAOCtx *local_ec;
  char *local_e8;
  undefined4 local_d8;
  char *local_d0;
  _rkMpiAOCtx *local_cc;
  char *local_c8;
  undefined4 local_b8;
  char *local_b0;
  _rkMpiAOCtx *local_ac;
  char *local_a8;
  undefined4 local_98;
  char *local_90;
  _rkMpiAOCtx *local_8c;
  char *local_88;
  undefined4 local_78;
  undefined1 local_74;
  undefined *local_70;
  _rkMpiAOCtx *local_6c;
  char *local_68;
  undefined4 local_58;
  char *local_50;
  _rkMpiAOCtx *local_4c;
  char *local_48;
  
  __src = calloc(0xb8,1);
  uVar6 = DAT_00011e18;
  uVar5 = DAT_00011e10;
  uVar4 = DAT_00011e08;
  uVar3 = DAT_00011e00;
  uVar2 = DAT_00011df8;
  uVar1 = DAT_00011df0;
  *(undefined4 *)__src = 0;
  *(undefined4 *)(__src + 4) = 0;
  *(undefined8 *)(__src + 8) = uVar1;
  *(undefined8 *)(__src + 0x10) = uVar2;
  *(undefined4 *)(__src + 0x30) = 0;
  *(undefined8 *)(__src + 0x18) = uVar3;
  *(undefined8 *)(__src + 0x20) = uVar4;
  *(undefined4 *)(__src + 0x68) = 0;
  *(undefined8 *)(__src + 0x38) = uVar5;
  *(undefined8 *)(__src + 0x40) = uVar6;
  *(undefined4 *)(__src + 0x6c) = 0;
  *(undefined4 *)(__src + 0x48) = 0;
  *(undefined4 *)(__src + 0x4c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(__src + 0x50) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(__src + 0x54) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(__src + 0x70) = 0;
  *(undefined4 *)(__src + 0x58) = 0;
  *(undefined4 *)(__src + 0x5c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(__src + 0x60) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(__src + 100) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(__src + 0x74) = 0;
  *(undefined4 *)(__src + 0x2c) = 0x400;
  *(undefined4 *)(__src + 0x28) = 4;
  memset(local_418,0,0x400);
  local_3b8 = 4;
  local_398 = 4;
  local_378 = 4;
  local_410 = &DAT_00014574;
  local_358 = 4;
  local_408 = "show this help message and exit";
  local_318 = 4;
  local_404 = argparse_help_cb;
  local_2f8 = 4;
  local_3e8 = "basic options:";
  local_3d0 = "input";
  local_3c8 = "input file name , e.g.(./*.pcm). <required>";
  local_3b0 = "input_ch";
  local_3a8 = "the sample rate of input data. <required>";
  local_388 = "the sample rate of input data. <required>";
  local_390 = "input_rate";
  local_370 = "device_ch";
  local_3d8 = 6;
  local_338 = 6;
  local_368 = "the number of sound card channels. default(2).";
  local_350 = "device_rate";
  local_348 = "the sample rate of open sound card.  default(48000).";
  local_330 = "output";
  local_328 = "output file name, e.g.(./ao). default(NULL).";
  local_310 = "loop_count";
  local_308 = "loop running count. can be any count. default(1)";
  local_418[0] = 2;
  local_3fc = 1;
  local_3f8 = 1;
  local_3d4 = 0x69;
  local_334 = 0x6f;
  local_314 = 0x6e;
  local_2f4 = 99;
  local_2f0 = "channel_count";
  local_2e8 = "the count of ao channel. default(1).";
  local_2d0 = &DAT_00014754;
  local_2c8 = "the bit width of open sound card, range(8, 16, 24), default(16)";
  local_2b0 = "period_size";
  local_2a8 = "the period size for open sound card, default(1024)";
  local_290 = "period_count";
  local_288 = "the period count for open sound card, default(4)";
  local_270 = "sound_card_name";
  local_268 = "the sound name for open sound card, default(NULL)";
  local_250 = "set_volume";
  local_248 = "set volume test, range(0, 100), default(100)";
  local_230 = "set_mute";
  local_228 = "set mute test, range(0, 1), default(0)";
  local_210 = "set_fade";
  local_208 = "set fade rate, range(0, 7), default(0)";
  local_1f0 = "set_track_mode";
  local_1e8 = 
  "set track mode test, range(0:normal, 1:both_left, 2:both_right, 3:exchange, 4:mix,5:left_mute, 6:right_mute, 7:both_mute), default(0)"
  ;
  local_1d0 = "get_volume";
  local_1c8 = "get volume test, range(0, 1), default(0)";
  local_1b0 = "get_mute";
  local_1a8 = "get mute test, range(0, 1), default(0)";
  local_278 = 6;
  local_2d8 = 4;
  local_2b8 = 4;
  local_298 = 4;
  local_258 = 4;
  local_238 = 4;
  local_218 = 4;
  local_1f8 = 4;
  local_1d8 = 4;
  local_1b8 = 4;
  local_198 = 4;
  local_58 = 6;
  local_178 = 4;
  local_158 = 4;
  local_190 = "get_track_mode";
  local_138 = 4;
  local_118 = 4;
  local_188 = "get track mode test, range(0, 1), default(0)";
  local_f8 = 4;
  local_d8 = 4;
  local_170 = "query_stat";
  local_b8 = 4;
  local_98 = 4;
  local_168 = "query ao statistics info, range(0, 1), default(0)";
  local_78 = 4;
  local_150 = "pause_resume";
  local_148 = "test ao chn pause and resume function, range(0, 1), default(0)";
  local_130 = "save_file";
  local_128 = "test ao save file, if enabled, must set output file, range(0, 1), default(0)";
  local_110 = "query_file_stat";
  local_108 = "query file status, range(0, 1), default(0)";
  local_f0 = "clr_buf";
  local_e8 = "clear buffer of channel, range(0, 1), default(0)";
  local_d0 = "clr_attr";
  local_c8 = "clear attribute of channel, range(0, 1), default(0)";
  local_b0 = "get_attr";
  local_a8 = "get attribute of device, range(0, 1), default(0)";
  local_90 = "loopback_mode";
  local_88 = "configure the loopback mode during ao runtime";
  local_70 = &DAT_00014c6c;
  local_68 = "test mode(default 0; \n\t0:ao send frame \n\t1:adec(g726) bind one ao \n\t";
  local_50 = "enc_path";
  local_74 = 0x6d;
  local_48 = "adec input file name , e.g.(./*.g726). <required>";
  local_3ac = __src + 0x18;
  local_38c = __src + 0x14;
  local_36c = __src + 0x1c;
  local_34c = __src + 0x10;
  local_32c = __src + 4;
  local_30c = __src + 8;
  local_2ec = __src + 0xc;
  local_2cc = __src + 0x20;
  local_2ac = __src + 0x2c;
  local_28c = __src + 0x28;
  local_26c = __src + 0x30;
  local_24c = __src + 0x38;
  local_22c = __src + 0x3c;
  local_20c = __src + 0x40;
  local_1ec = __src + 0x44;
  local_1cc = __src + 0x48;
  local_1ac = __src + 0x4c;
  local_18c = __src + 0x50;
  local_16c = __src + 0x54;
  local_14c = __src + 0x58;
  local_12c = __src + 0x5c;
  local_10c = __src + 0x60;
  local_ec = __src + 100;
  local_cc = __src + 0x68;
  local_ac = __src + 0x6c;
  local_8c = __src + 0x70;
  local_6c = __src + 0x74;
  local_4c = __src + 0x78;
  local_3cc = __src;
  argparse_init(auStack_538,local_418,&DAT_00014470,0);
  argparse_describe(auStack_538,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_538,param_1,param_2);
  puts("cmd parse result:");
  printf("input  file name      : %s\n",*(undefined4 *)__src);
  printf("output file name      : %s\n",*(undefined4 *)(__src + 4));
  printf("loop count            : %d\n",*(undefined4 *)(__src + 8));
  printf("channel number        : %d\n",*(undefined4 *)(__src + 0xc));
  printf("open sound rate       : %d\n",*(undefined4 *)(__src + 0x10));
  printf("open sound channel    : %d\n",*(undefined4 *)(__src + 0x1c));
  printf("input stream rate     : %d\n",*(undefined4 *)(__src + 0x14));
  printf("input channel         : %d\n",*(undefined4 *)(__src + 0x18));
  printf("bit_width             : %d\n",*(undefined4 *)(__src + 0x20));
  printf("period_count          : %d\n",*(undefined4 *)(__src + 0x28));
  printf("period_size           : %d\n",*(undefined4 *)(__src + 0x2c));
  printf("sound card name       : %s\n",*(undefined4 *)(__src + 0x30));
  printf("device id             : %d\n",*(undefined4 *)(__src + 0x24));
  printf("set volume            : %d\n",*(undefined4 *)(__src + 0x38));
  printf("set mute              : %d\n",*(undefined4 *)(__src + 0x3c));
  printf("set track_mode        : %d\n",*(undefined4 *)(__src + 0x44));
  printf("get volume            : %d\n",*(undefined4 *)(__src + 0x48));
  printf("get mute              : %d\n",*(undefined4 *)(__src + 0x4c));
  printf("get track_mode        : %d\n",*(undefined4 *)(__src + 0x50));
  printf("query stat            : %d\n",*(undefined4 *)(__src + 0x54));
  printf("pause and resume chn  : %d\n",*(undefined4 *)(__src + 0x58));
  printf("save file             : %d\n",*(undefined4 *)(__src + 0x5c));
  printf("query save file stat  : %d\n",*(undefined4 *)(__src + 0x60));
  printf("clear buf             : %d\n",*(undefined4 *)(__src + 100));
  printf("get attribute         : %d\n",*(undefined4 *)(__src + 0x6c));
  printf("clear attribute       : %d\n",*(undefined4 *)(__src + 0x68));
  printf("set loopback mode     : %d\n",*(undefined4 *)(__src + 0x70));
  printf("adec input file name  : %s\n",*(undefined4 *)(__src + 0x78));
  if (((*(int *)__src == 0) || (*(int *)(__src + 0x18) < 1)) || (*(int *)(__src + 0x14) < 1)) {
    argparse_usage(auStack_538);
  }
  else {
    RK_MPI_SYS_Init();
    iVar8 = *(int *)(__src + 0x74);
    if (iVar8 == 0) {
      if (0 < *(int *)(__src + 8)) {
        iVar8 = 0;
        do {
          RK_LOG(4,0x17171700,"start running loop count  = %d",&DAT_00014504,0x2ee,iVar8);
          iVar7 = unit_test_mpi_ao(__src);
          if (iVar7 != 0) break;
          iVar7 = iVar8 + 1;
          RK_LOG(4,0x17171700,"end running loop count  = %d",&DAT_00014504,0x2f3,iVar8);
          iVar8 = iVar7;
        } while (iVar7 < *(int *)(__src + 8));
      }
    }
    else if (iVar8 == 1) {
      iVar8 = test_open_device_ao(__src);
      if (iVar8 == 0) {
        memcpy(a_Stack_4d0,__src,0xb8);
        local_510 = (ulonglong)local_460 << 0x20;
        local_49c = iVar8;
        iVar8 = RK_MPI_AO_SetChnParams(local_4ac,0,&local_510);
        if (iVar8 != 0) {
          RK_LOG(2,0x17171700,"ao set channel params, aoChn = %d","test_set_channel_params_ao",0xe6,
                 0);
        }
        test_init_mpi_ao(a_Stack_4d0);
        RK_MPI_AO_SetTrackMode(*(undefined4 *)(__src + 0x24),10);
        uStack_4ec = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_4e8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_4d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_4fc = local_4b8;
        local_4f0 = 0;
        local_4f8 = local_4bc;
        local_4e4 = 0;
        local_500 = 0x40000008;
        local_510 = DAT_00011e20;
        local_508 = DAT_00011e28;
        local_4f4 = 4;
        uStack_4e0 = uStack_4ec;
        uStack_4dc = uStack_4e8;
        iVar8 = RK_MPI_ADEC_CreateChn(0,&local_510);
        if (iVar8 != 0) {
          RK_LOG(2,0x17171700,"create adec chn %d err:0x%x\n","test_adec_bind_ao_loop",0x223,0,iVar8
                );
        }
        local_55c[2] = 0;
        local_55c[3] = 0;
        local_55c[1] = 0xd;
        local_544 = 0;
        local_548 = 0xb;
        iVar8 = RK_MPI_SYS_Bind(local_55c + 1,&local_548);
        if (iVar8 != 0) {
          RK_LOG(2,0x17171700,"===bind ai to aenc failed===\n","test_adec_bind_ao_loop",0x235);
          goto LAB_00012308;
        }
        pthread_create(local_55c,(pthread_attr_t *)0x0,FUN_000125dc,__src);
        pthread_join(local_55c[0],(void **)0x0);
      }
      iVar8 = RK_MPI_SYS_UnBind(local_55c + 1,&local_548);
      if (iVar8 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_SYS_UnBind fail %x","test_adec_bind_ao_loop",0x242,iVar8);
      }
      deinit_mpi_ao(0,0);
      iVar8 = RK_MPI_ADEC_DestroyChn(0);
      if (iVar8 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_ADEC_DestroyChn fail %x","test_adec_bind_ao_loop",0x247,iVar8);
      }
    }
    else {
      RK_LOG(2,0x17171700,"no support such test mode:%d",&DAT_00014504,0x2fc,iVar8);
    }
  }
LAB_00012308:
  free(__src);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== _start @ 000124a4 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002604c)
            (DAT_000124d8,param_2,&stack0x00000004,DAT_000124dc,DAT_000124d4,param_1);
  return;
}



/* ===== FUN_000124e0 @ 000124e0 size=32 ===== */

void FUN_000124e0(void)

{
  if (DAT_00012504 == DAT_00012500) {
    return;
  }
  if (DAT_00012508 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000124fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012508)();
  return;
}



/* ===== _FINI_0 @ 00012544 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00012580;
  if (*DAT_00012580 != '\0') {
    return;
  }
  FUN_000124e0();
  if (DAT_00012584 != 0) {
    __deregister_frame_info(DAT_00012588);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001258c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000125b0 != 0) {
    __register_frame_info(DAT_000125b8,DAT_000125b4);
  }
  if ((DAT_0001253c - DAT_00012538 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00012540 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012540)();
  return;
}



/* ===== FUN_000125dc @ 000125dc size=416 ===== */

undefined4 FUN_000125dc(int param_1)

{
  FILE *__stream;
  void *__ptr;
  size_t sVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_60;
  size_t local_5c;
  uint local_58;
  int iStack_54;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 *local_28;
  void *local_24;
  
  __stream = fopen64(*(char **)(param_1 + 0x78),"rb");
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    uVar5 = *(undefined4 *)(param_1 + 0x78);
    pcVar4 = strerror(*piVar3);
    RK_LOG(2,0x17171700,"failed to open input file(%s), error: %s","send_stream_thread",0x1d6,uVar5,
           pcVar4);
  }
  else {
    uVar6 = 0;
    iVar7 = 0;
    while( true ) {
      __ptr = calloc(0x400,1);
      sVar1 = fread(__ptr,1,0x400,__stream);
      if (sVar1 == 0) break;
      uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_30 = VectorShiftRight(CONCAT44(sVar1,sVar1),0x20);
      local_44 = 0;
      local_50 = uVar6 + 1;
      local_4c = 1;
      local_28 = &LAB_000125bc;
      local_38 = 0;
      local_5c = sVar1;
      local_58 = uVar6;
      iStack_54 = iVar7;
      local_48 = __ptr;
      uStack_34 = uStack_40;
      local_24 = __ptr;
      RK_MPI_SYS_CreateMB(&local_60,&local_48);
      while (iVar2 = RK_MPI_ADEC_SendStream(0,&local_60,1), iVar2 != 0) {
        RK_LOG(2,0x17171700,"fail to send adec stream.","send_stream_thread",0x1f8);
      }
      bVar8 = 0xfffffffe < uVar6;
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + (uint)bVar8;
      RK_MPI_MB_ReleaseMB(local_60);
    }
    RK_LOG(4,0x17171700,"read eos packet, now send eos packet!","send_stream_thread",0x1e1);
    RK_MPI_ADEC_SendEndOfStream(0,0);
    free(__ptr);
    fclose(__stream);
  }
  return 0;
}



/* ===== sendDataThread @ 0001277c size=676 ===== */

/* sendDataThread(void*) */

undefined4 sendDataThread(void *param_1)

{
  int iVar1;
  FILE *__stream;
  void *__ptr;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_68;
  int iStack_64;
  size_t local_5c;
  undefined4 local_58;
  void *local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  void *local_2c;
  
  iVar1 = *(int *)((int)param_1 + 0x34);
  RK_LOG(4,0x17171700,"params->s32ChnIndex : %d","sendDataThread",0xf8,iVar1);
  __stream = fopen64(*(char **)param_1,"rb");
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    uVar6 = *(undefined4 *)param_1;
    pcVar4 = strerror(*piVar3);
    RK_LOG(2,0x17171700,"open save file %s failed because %s.","sendDataThread",0x104,uVar6,pcVar4);
    RK_MPI_AO_WaitEos(*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34),
                      0xffffffff);
    __ptr = (void *)0x0;
  }
  else {
    __ptr = calloc(0x400,1);
    uVar7 = 0;
    iVar8 = 0;
    do {
      sVar2 = fread(__ptr,1,0x400,__stream);
      iVar5 = *(int *)((int)param_1 + 0x20);
      bVar9 = 0xfffffffe < uVar7;
      local_68 = uVar7;
      iStack_64 = iVar8;
      local_5c = sVar2;
      if (iVar5 == 0x10) {
        local_74 = 1;
        iVar5 = iVar1;
      }
      else if (iVar5 == 0x18) {
        local_74 = 2;
        iVar5 = iVar1;
      }
      else if (iVar5 == 8) {
        local_74 = 0;
        iVar5 = iVar1;
      }
      else {
        RK_LOG(2,0x17171700,"bitwidth(%d) not support","find_bit_width",0x76,iVar5);
        local_74 = 5;
      }
      iVar1 = *(int *)((int)param_1 + 0x18);
      if (iVar1 == 1) {
        local_70 = 0;
        iVar1 = iVar5;
      }
      else if (iVar1 == 2) {
        local_70 = 1;
        iVar1 = iVar5;
      }
      else {
        RK_LOG(2,0x17171700,"channel = %d not support","find_sound_mode",0x62,iVar1);
        local_70 = 9;
      }
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = VectorShiftRight(CONCAT44(sVar2,sVar2),0x20);
      local_58 = 0;
      local_3c = 0;
      local_4c = 0;
      local_50 = __ptr;
      uStack_30 = uStack_48;
      local_2c = __ptr;
      RK_MPI_SYS_CreateMB(&local_78,&local_50);
      while (iVar5 = RK_MPI_AO_SendFrame(*(undefined4 *)((int)param_1 + 0x24),
                                         *(undefined4 *)((int)param_1 + 0x34),&local_78,0xffffffff),
            iVar5 < 0) {
        RK_LOG(2,0x17171700,"send frame fail, result = %d, TimeStamp = %lld, s32MilliSec = %d",
               "sendDataThread",0x11d,iVar5,local_68,iStack_64,0xffffffff);
        iVar1 = iVar5;
      }
      RK_MPI_MB_ReleaseMB(local_78);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + (uint)bVar9;
    } while (0 < (int)sVar2);
    RK_LOG(4,0x17171700,&DAT_00014264,"sendDataThread",0x123,iVar1);
    RK_MPI_AO_WaitEos(*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34),
                      0xffffffff);
    fclose(__stream);
  }
  free(__ptr);
  return 0;
}



/* ===== query_ao_flow_graph_stat @ 00012a20 size=236 ===== */

/* query_ao_flow_graph_stat(int, int) */

void query_ao_flow_graph_stat(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_14 = 0;
  uStack_10 = 0;
  local_c = 0;
  iVar1 = RK_MPI_AO_QueryChnStat(param_1,param_2,&local_14);
  if (iVar1 != 0) {
    return;
  }
  RK_LOG(4,0x17171700,"query ao flow status:","query_ao_flow_graph_stat",0x51);
  RK_LOG(4,0x17171700,"total number of channel buffer : %d","query_ao_flow_graph_stat",0x52,local_14
        );
  RK_LOG(4,0x17171700,"free number of channel buffer : %d","query_ao_flow_graph_stat",0x53,uStack_10
        );
  RK_LOG(4,0x17171700,"busy number of channel buffer : %d","query_ao_flow_graph_stat",0x54,local_c);
  return;
}



/* ===== commandThread @ 00012b0c size=1272 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* commandThread(void*) */

undefined4 commandThread(void *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_21c;
  uint local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_204;
  char local_114 [4];
  char acStack_110 [4];
  char acStack_10c [4];
  char acStack_108 [4];
  undefined1 local_104;
  undefined4 local_14;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x38);
  local_214 = *(undefined4 *)((int)param_1 + 0x40);
  uVar2 = (uint)(*(int *)((int)param_1 + 0x3c) != 0);
  local_218 = 0;
  uVar4 = uVar2;
  local_210 = local_214;
  RK_LOG(4,0x17171700,"test info : mute = %d, volume = %d","commandThread",0x13b,uVar2,uVar1);
  RK_MPI_AO_SetMute(*(undefined4 *)((int)param_1 + 0x24),uVar2,&local_218);
  RK_MPI_AO_SetVolume(*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x38));
  uVar2 = *(uint *)((int)param_1 + 0x44);
  if (uVar2 == 0) {
    iVar3 = *(int *)((int)param_1 + 0x48);
  }
  else {
    RK_LOG(4,0x17171700,"test info : set track mode = %d","commandThread",0x141,uVar2,uVar1);
    RK_MPI_AO_SetTrackMode
              (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x44));
    iVar3 = *(int *)((int)param_1 + 0x48);
    *(undefined4 *)((int)param_1 + 0x44) = 0;
    uVar4 = uVar2;
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)param_1 + 0x4c);
  }
  else {
    local_218 = 0;
    RK_MPI_AO_GetVolume(*(undefined4 *)((int)param_1 + 0x24),&local_218);
    uVar4 = local_218;
    RK_LOG(4,0x17171700,"test info : get volume = %d","commandThread",0x149,local_218);
    iVar3 = *(int *)((int)param_1 + 0x4c);
    *(undefined4 *)((int)param_1 + 0x48) = 0;
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)param_1 + 0x50);
  }
  else {
    local_21c = 0;
    RK_MPI_AO_GetMute(*(undefined4 *)((int)param_1 + 0x24),&local_21c,&local_218);
    uVar4 = local_21c;
    RK_LOG(4,0x17171700,"test info : is mute = %d","commandThread",0x151,local_21c);
    iVar3 = *(int *)((int)param_1 + 0x50);
    *(undefined4 *)((int)param_1 + 0x4c) = 0;
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)param_1 + 0x54);
  }
  else {
    RK_MPI_AO_GetTrackMode(*(undefined4 *)((int)param_1 + 0x24),&local_218);
    uVar4 = local_218;
    RK_LOG(4,0x17171700,"test info : get track mode = %d","commandThread",0x158,local_218);
    *(undefined4 *)((int)param_1 + 0x50) = 0;
    iVar3 = *(int *)((int)param_1 + 0x54);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)param_1 + 0x5c);
  }
  else {
    query_ao_flow_graph_stat(*(int *)((int)param_1 + 0x24),*(int *)((int)param_1 + 0x34));
    *(undefined4 *)((int)param_1 + 0x54) = 0;
    iVar3 = *(int *)((int)param_1 + 0x5c);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)param_1 + 0x60);
  }
  else {
    memset(&local_218,0,0x208);
    if (*(int *)((int)param_1 + 4) != 0) {
      local_218 = 1;
      local_14 = 0x100000;
      local_114[0] = s_ao_save_file_bin_000140d8[0];
      local_114[1] = s_ao_save_file_bin_000140d8[1];
      local_114[2] = s_ao_save_file_bin_000140d8[2];
      local_114[3] = s_ao_save_file_bin_000140d8[3];
      acStack_110[0] = s_ao_save_file_bin_000140d8[4];
      acStack_110[1] = s_ao_save_file_bin_000140d8[5];
      acStack_110[2] = s_ao_save_file_bin_000140d8[6];
      acStack_110[3] = s_ao_save_file_bin_000140d8[7];
      acStack_10c[0] = s_ao_save_file_bin_000140d8[8];
      acStack_10c[1] = s_ao_save_file_bin_000140d8[9];
      acStack_10c[2] = s_ao_save_file_bin_000140d8[10];
      acStack_10c[3] = s_ao_save_file_bin_000140d8[0xb];
      acStack_108[0] = s_ao_save_file_bin_000140d8[0xc];
      acStack_108[1] = s_ao_save_file_bin_000140d8[0xd];
      acStack_108[2] = s_ao_save_file_bin_000140d8[0xe];
      acStack_108[3] = s_ao_save_file_bin_000140d8[0xf];
      local_104 = (undefined1)ram0x000140e8;
      snprintf((char *)&local_214,0x100,"%s",*(int *)((int)param_1 + 4));
    }
    RK_MPI_AO_SaveFile(*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34),
                       &local_218);
    *(undefined4 *)((int)param_1 + 0x5c) = 0;
    iVar3 = *(int *)((int)param_1 + 0x60);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)param_1 + 0x58);
  }
  else {
    RK_MPI_AO_QueryFileStatus
              (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34),&local_218)
    ;
    uVar4 = local_218;
    RK_LOG(4,0x17171700,"test info : query save file status = %d","commandThread",0x171,local_218);
    *(undefined4 *)((int)param_1 + 0x60) = 0;
    iVar3 = *(int *)((int)param_1 + 0x58);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)param_1 + 100);
  }
  else {
    usleep(500000);
    RK_MPI_AO_PauseChn(*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34));
    RK_LOG(4,0x17171700,"pause test","commandThread",0x178,uVar4);
    usleep(1000000);
    RK_MPI_AO_ResumeChn(*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34));
    RK_LOG(4,0x17171700,"resume test","commandThread",0x17b);
    *(undefined4 *)((int)param_1 + 0x58) = 0;
    iVar3 = *(int *)((int)param_1 + 100);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)param_1 + 0x68);
  }
  else {
    RK_MPI_AO_ClearChnBuf(*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34))
    ;
    *(undefined4 *)((int)param_1 + 100) = 0;
    iVar3 = *(int *)((int)param_1 + 0x68);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)param_1 + 0x6c);
  }
  else {
    RK_MPI_AO_ClrPubAttr(*(undefined4 *)((int)param_1 + 0x24));
    *(undefined4 *)((int)param_1 + 0x68) = 0;
    iVar3 = *(int *)((int)param_1 + 0x6c);
  }
  if (iVar3 == 0) {
    s_ao_save_file_bin_000140d8[0] = (char)s_ao_save_file_bin_000140d8._0_4_;
    s_ao_save_file_bin_000140d8[1] = SUB41(s_ao_save_file_bin_000140d8._0_4_,1);
    s_ao_save_file_bin_000140d8[2] = SUB41(s_ao_save_file_bin_000140d8._0_4_,2);
    s_ao_save_file_bin_000140d8[3] = SUB41(s_ao_save_file_bin_000140d8._0_4_,3);
    s_ao_save_file_bin_000140d8[4] = (char)s_ao_save_file_bin_000140d8._4_4_;
    s_ao_save_file_bin_000140d8[5] = SUB41(s_ao_save_file_bin_000140d8._4_4_,1);
    s_ao_save_file_bin_000140d8[6] = SUB41(s_ao_save_file_bin_000140d8._4_4_,2);
    s_ao_save_file_bin_000140d8[7] = SUB41(s_ao_save_file_bin_000140d8._4_4_,3);
    s_ao_save_file_bin_000140d8[8] = (char)s_ao_save_file_bin_000140d8._8_4_;
    s_ao_save_file_bin_000140d8[9] = SUB41(s_ao_save_file_bin_000140d8._8_4_,1);
    s_ao_save_file_bin_000140d8[10] = SUB41(s_ao_save_file_bin_000140d8._8_4_,2);
    s_ao_save_file_bin_000140d8[0xb] = SUB41(s_ao_save_file_bin_000140d8._8_4_,3);
    s_ao_save_file_bin_000140d8[0xc] = (char)s_ao_save_file_bin_000140d8._12_4_;
    s_ao_save_file_bin_000140d8[0xd] = SUB41(s_ao_save_file_bin_000140d8._12_4_,1);
    s_ao_save_file_bin_000140d8[0xe] = SUB41(s_ao_save_file_bin_000140d8._12_4_,2);
    s_ao_save_file_bin_000140d8[0xf] = SUB41(s_ao_save_file_bin_000140d8._12_4_,3);
    return 0;
  }
  RK_MPI_AO_GetPubAttr(*(undefined4 *)((int)param_1 + 0x24),&local_218);
  RK_LOG(4,0x17171700,"input stream rate = %d","commandThread",0x18c,local_20c);
  RK_LOG(4,0x17171700,"input stream sound mode = %d","commandThread",0x18d,local_204);
  RK_LOG(4,0x17171700,"open sound card rate = %d","commandThread",0x18e,local_214);
  RK_LOG(4,0x17171700,"open sound card channel = %d","commandThread",399,local_218);
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  return 0;
}



/* ===== test_open_device_ao @ 00013004 size=360 ===== */

/* test_open_device_ao(_rkMpiAOCtx*) */

undefined4 test_open_device_ao(_rkMpiAOCtx *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char acStack_50 [68];
  
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  memset(&local_78,0,0x68);
  if (*(int *)(param_1 + 0x30) != 0) {
    snprintf(acStack_50,0x40,"%s");
  }
  iVar1 = *(int *)(param_1 + 0x20);
  local_78 = *(undefined4 *)(param_1 + 0x1c);
  local_68 = 1;
  local_70 = 1;
  uStack_74 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 != 0x10) {
    if (iVar1 == 0x18) {
      local_68 = 2;
    }
    else {
      if (iVar1 != 8) {
        RK_LOG(2,0x17171700,"bitwidth(%d) not support","find_bit_width",0x76,iVar1);
        return 0xffffffff;
      }
      local_68 = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  local_6c = *(undefined4 *)(param_1 + 0x14);
  if (iVar1 == 1) {
    local_64 = 0;
  }
  else {
    if (iVar1 != 2) {
      RK_LOG(2,0x17171700,"channel = %d not support","find_sound_mode",0x62,iVar1);
      return 0xffffffff;
    }
    local_64 = 1;
  }
  local_58 = *(undefined4 *)(param_1 + 0x2c);
  local_5c = *(undefined4 *)(param_1 + 0x28);
  local_60 = 0;
  local_54 = 2;
  RK_MPI_AO_SetPubAttr(uVar2,&local_78);
  RK_MPI_AO_Enable(uVar2);
  return 0;
}



/* ===== test_init_mpi_ao @ 0001316c size=184 ===== */

/* test_init_mpi_ao(_rkMpiAOCtx*) */

undefined4 test_init_mpi_ao(_rkMpiAOCtx *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AO_EnableChn(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34));
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AO_EnableReSmp
                      (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x14));
    uVar2 = 0;
    if (iVar1 != 0) {
      RK_LOG(2,0x17171700,"ao enable channel fail, reason = %x, aoChn = %d","test_init_mpi_ao",0xb4,
             iVar1,*(undefined4 *)(param_1 + 0x34));
      uVar2 = 0xffffffff;
    }
  }
  else {
    RK_LOG(2,0x17171700,"ao enable channel fail, aoChn = %d, reason = %x","test_init_mpi_ao",0xac,
           *(undefined4 *)(param_1 + 0x34),iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== deinit_mpi_ao @ 00013434 size=160 ===== */

/* deinit_mpi_ao(int, int) */

undefined4 deinit_mpi_ao(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AO_DisableReSmp();
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AO_DisableChn(param_1,param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      RK_LOG(2,0x17171700,"ao disable channel fail, reason = %d","deinit_mpi_ao",0xc4,iVar1);
      uVar2 = 0xffffffff;
    }
  }
  else {
    RK_LOG(2,0x17171700,"ao disable resample fail, reason = %d","deinit_mpi_ao",0xbe,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== test_close_device_ao @ 000134d4 size=84 ===== */

/* test_close_device_ao(_rkMpiAOCtx*) */

undefined4 test_close_device_ao(_rkMpiAOCtx *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AO_Disable(*(undefined4 *)(param_1 + 0x24));
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"ao disable fail, reason = %d","test_close_device_ao",0xcf,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== unit_test_mpi_ao @ 00013528 size=644 ===== */

/* unit_test_mpi_ao(_rkMpiAOCtx*) */

undefined4 unit_test_mpi_ao(_rkMpiAOCtx *param_1)

{
  int iVar1;
  int iVar2;
  _rkMpiAOCtx *__dest;
  undefined4 uVar3;
  _rkMpiAOCtx *p_Var4;
  pthread_t *ppVar5;
  undefined4 uVar6;
  undefined4 local_270;
  undefined4 local_26c;
  pthread_t apStack_268 [6];
  _rkMpiAOCtx a_Stack_250 [560];
  
  if (*(int *)(param_1 + 0xc) < 4) {
    iVar2 = test_open_device_ao(param_1);
    if (iVar2 == 0) {
      if (0 < *(int *)(param_1 + 0xc)) {
        p_Var4 = a_Stack_250;
        iVar2 = 0;
        __dest = p_Var4;
        ppVar5 = apStack_268;
        do {
          memcpy(__dest,param_1,0xb8);
          local_26c = *(undefined4 *)(__dest + 0x70);
          *(int *)(__dest + 0x34) = iVar2;
          local_270 = 0;
          iVar1 = RK_MPI_AO_SetChnParams(*(undefined4 *)(__dest + 0x24),iVar2,&local_270);
          if (iVar1 != 0) {
            RK_LOG(2,0x17171700,"ao set channel params, aoChn = %d","test_set_channel_params_ao",
                   0xe6,iVar2);
          }
          test_init_mpi_ao(__dest);
          pthread_create(ppVar5,(pthread_attr_t *)0x0,sendDataThread,__dest);
          pthread_create(apStack_268 + iVar2 + 3,(pthread_attr_t *)0x0,commandThread,__dest);
          iVar2 = iVar2 + 1;
          ppVar5 = ppVar5 + 1;
          __dest = __dest + 0xb8;
        } while (iVar2 < *(int *)(param_1 + 0xc));
        if (0 < *(int *)(param_1 + 0xc)) {
          iVar2 = 0;
          ppVar5 = apStack_268;
          do {
            pthread_join(*ppVar5,(void **)0x0);
            pthread_join(apStack_268[iVar2 + 3],(void **)0x0);
            uVar3 = *(undefined4 *)(p_Var4 + 0x24);
            uVar6 = *(undefined4 *)(p_Var4 + 0x34);
            iVar1 = RK_MPI_AO_DisableReSmp(uVar3,uVar6);
            if (iVar1 == 0) {
              iVar1 = RK_MPI_AO_DisableChn(uVar3,uVar6);
              if (iVar1 != 0) {
                RK_LOG(2,0x17171700,"ao disable channel fail, reason = %d","deinit_mpi_ao",0xc4,
                       iVar1);
              }
            }
            else {
              RK_LOG(2,0x17171700,"ao disable resample fail, reason = %d","deinit_mpi_ao",0xbe,iVar1
                    );
            }
            iVar2 = iVar2 + 1;
            p_Var4 = p_Var4 + 0xb8;
            ppVar5 = ppVar5 + 1;
          } while (iVar2 < *(int *)(param_1 + 0xc));
        }
      }
      iVar2 = RK_MPI_AO_Disable(*(undefined4 *)(param_1 + 0x24));
      if (iVar2 != 0) {
        RK_LOG(2,0x17171700,"ao disable fail, reason = %d","test_close_device_ao",0xcf,iVar2);
      }
      return 0;
    }
  }
  else {
    RK_LOG(2,0x17171700,"ao chn(%d) > max_chn(%d)","unit_test_mpi_ao");
  }
  return 0xffffffff;
}



/* ===== FUN_0001359c @ 0001359c size=64 ===== */

void FUN_0001359c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x51bc;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x51a0;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000135dc @ 000135dc size=588 ===== */

undefined4 FUN_000135dc(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  char *local_24 [2];
  
  pfVar5 = (float *)param_2[3];
  local_24[0] = (char *)0x0;
  if (pfVar5 == (float *)0x0) goto switchD_00013610_default;
  switch(*param_2) {
  case 2:
    if ((param_3 & 1) == 0) {
      fVar6 = (float)((int)*pfVar5 + 1);
    }
    else {
      fVar6 = (float)((int)*pfVar5 - 1);
    }
    if ((int)fVar6 < 0) {
      *pfVar5 = 0.0;
      break;
    }
    goto LAB_0001364c;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_0001364c:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00013824:
                    /* WARNING: Subroutine does not return */
        FUN_0001359c(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      fVar6 = (float)strtol(*(char **)(iVar4 + 4),local_24,0);
      *pfVar5 = fVar6;
    }
    else {
      fVar6 = (float)strtol(pcVar3,local_24,0);
      *pfVar5 = fVar6;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar4 = *piVar2;
    if (iVar4 != 0) {
LAB_0001380c:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_0001359c(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0001359c(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00013824;
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      fVar6 = strtof(*(char **)(iVar4 + 4),local_24);
      *pfVar5 = fVar6;
    }
    else {
      fVar6 = strtof(pcVar3,local_24);
      *pfVar5 = fVar6;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar4 = *piVar2;
    if (iVar4 != 0) goto LAB_0001380c;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0001359c(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00013824;
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      *pfVar5 = *(float *)(iVar4 + 4);
    }
    else {
      *pfVar5 = *(float *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
switchD_00013610_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 0001383c size=48 ===== */

undefined4
argparse_init(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[5] = 0;
  param_1[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[8] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[8] = 0;
  param_1[9] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  return 0;
}



/* ===== argparse_describe @ 0001386c size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00013880 size=1052 ===== */

undefined4 argparse_usage(undefined4 *param_1)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 == (undefined4 *)0x0) {
    fwrite("Usage:\n",1,7,stdout);
  }
  else {
    puVar6 = puVar8 + 1;
    fprintf(stdout,"Usage: %s\n",*puVar8);
    if ((char *)puVar8[1] != (char *)0x0) {
      cVar1 = *(char *)puVar8[1];
      while (cVar1 != '\0') {
        fprintf(stdout,"   or: %s\n");
        puVar6 = puVar6 + 1;
        if ((char *)*puVar6 == (char *)0x0) break;
        cVar1 = *(char *)*puVar6;
      }
    }
  }
  if (param_1[3] != 0) {
    fprintf(stdout,"%s\n");
  }
  if (stdout->_chain == (_IO_FILE *)0x0) {
    fputc(10,stdout);
  }
  else {
    pcVar5 = stdout->_IO_write_base;
    if (pcVar5 < stdout->_IO_buf_base) {
      stdout->_IO_write_base = pcVar5 + 1;
      *pcVar5 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  piVar7 = (int *)*param_1;
  iVar13 = *piVar7;
  if (iVar13 != 0) {
    uVar10 = 0;
    piVar11 = piVar7;
    iVar12 = iVar13;
    do {
      pcVar5 = (char *)piVar11[2];
      if ((char)piVar11[1] == '\0') {
        iVar9 = 0;
        iVar4 = 0;
        if (pcVar5 != (char *)0x0) goto LAB_00013978;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_00013978:
        sVar2 = strlen(pcVar5);
        iVar4 = sVar2 + iVar9 + 2;
      }
      if (((iVar12 == 4) || (iVar12 == 5)) || (iVar12 == 6)) {
        iVar4 = iVar4 + 6;
      }
      piVar11 = piVar11 + 8;
      iVar12 = *piVar11;
      uVar3 = iVar4 + 3U & 0xfffffffc;
      if (uVar10 < uVar3) {
        uVar10 = uVar3;
      }
    } while (iVar12 != 0);
    uVar10 = uVar10 + 4;
    do {
      if (iVar13 == 1) {
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else {
          pcVar5 = stdout->_IO_write_base;
          if (pcVar5 < stdout->_IO_buf_base) {
            stdout->_IO_write_base = pcVar5 + 1;
            *pcVar5 = '\n';
          }
          else {
            __fputc_unlocked(10,stdout);
          }
        }
        fputs((char *)piVar7[4],stdout);
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else {
          pcVar5 = stdout->_IO_write_base;
          if (pcVar5 < stdout->_IO_buf_base) {
            stdout->_IO_write_base = pcVar5 + 1;
            *pcVar5 = '\n';
          }
          else {
            __fputc_unlocked(10);
          }
        }
      }
      else {
        uVar3 = fprintf(stdout,"    ");
        if ((char)piVar7[1] == '\0') {
          if (piVar7[2] != 0) goto LAB_00013a5c;
LAB_00013a74:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_00013bd0;
LAB_00013a80:
          if (iVar13 == 5) {
            iVar13 = fprintf(stdout,"=<flt>");
            uVar3 = uVar3 + iVar13;
          }
          else if (iVar13 == 6) {
            iVar13 = fprintf(stdout,"=<str>");
            uVar3 = uVar3 + iVar13;
          }
        }
        else {
          iVar13 = fprintf(stdout,"-%c");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] == 0) goto LAB_00013a74;
          if ((char)piVar7[1] == '\0') {
LAB_00013a5c:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_00013a74;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00013a5c;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00013a80;
LAB_00013bd0:
          iVar13 = fprintf(stdout,"=<int>");
          uVar3 = uVar3 + iVar13;
        }
        if (uVar10 < uVar3) {
          uVar3 = uVar10;
          if (stdout->_chain == (_IO_FILE *)0x0) {
            fputc(10,stdout);
          }
          else {
            pcVar5 = stdout->_IO_write_base;
            if (pcVar5 < stdout->_IO_buf_base) {
              stdout->_IO_write_base = pcVar5 + 1;
              *pcVar5 = '\n';
            }
            else {
              __fputc_unlocked(10);
            }
          }
        }
        else {
          uVar3 = uVar10 - uVar3;
        }
        fprintf(stdout,"%*s%s\n",uVar3 + 2,"",piVar7[4]);
      }
      piVar7 = piVar7 + 8;
      iVar13 = *piVar7;
    } while (iVar13 != 0);
  }
  if (param_1[4] != 0) {
    fprintf(stdout,"%s\n");
  }
  return 0;
}



/* ===== argparse_parse @ 00013c9c size=892 ===== */

void argparse_parse(int *param_1,int param_2,int param_3)

{
  char cVar1;
  void *__dest;
  size_t __n;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char cVar8;
  undefined4 *__src;
  uint *puVar9;
  char *pcVar10;
  int *piVar11;
  char *__s;
  char *__s1;
  
  __src = (undefined4 *)(param_3 + 4);
  puVar9 = (uint *)*param_1;
  param_2 = param_2 + -1;
  param_1[7] = param_3;
  param_1[6] = (int)__src;
  uVar4 = *puVar9;
  param_1[5] = param_2;
  if (uVar4 != 0) {
    do {
      while (6 < uVar4) {
        fprintf(stderr,"wrong option type: %d");
        puVar9 = puVar9 + 8;
        uVar4 = *puVar9;
        if (uVar4 == 0) goto LAB_00013cfc;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_00013cfc:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00013d08:
  if (param_2 == 0) {
    __dest = (void *)(param_1[7] + param_1[8] * 4);
  }
  else {
    pcVar10 = (char *)*__src;
    if ((*pcVar10 == '-') && (pcVar10[1] != '\0')) {
      if (pcVar10[1] != '-') {
        piVar11 = (int *)*param_1;
        param_1[9] = (int)(pcVar10 + 1);
        if (*piVar11 != 0) {
          cVar1 = (char)piVar11[1];
          while (cVar1 != pcVar10[1]) {
            if (piVar11[8] == 0) goto LAB_00013ec0;
            cVar1 = (char)piVar11[9];
            piVar11 = piVar11 + 8;
          }
          if (pcVar10[2] == '\0') {
            pcVar10 = (char *)0x0;
          }
          else {
            pcVar10 = pcVar10 + 2;
          }
          param_1[9] = (int)pcVar10;
          while (iVar5 = FUN_000135dc(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00013e4c;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00013fb8;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00013fb8;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_000135dc(param_1);
              if (iVar5 == -2) goto LAB_00013fb8;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00013fb8:
          pcVar10 = *(char **)param_1[6];
          goto LAB_00013ec4;
        }
        goto LAB_00013ec0;
      }
      cVar1 = pcVar10[2];
      if (cVar1 != '\0') {
        piVar11 = (int *)*param_1;
        iVar5 = *piVar11;
        if (iVar5 != 0) {
          __s1 = pcVar10 + 2;
          do {
            __s = (char *)piVar11[2];
            if (__s != (char *)0x0) {
              __n = strlen(__s);
              iVar2 = strncmp(__s1,__s,__n);
              if ((iVar2 == 0) && (pcVar3 = __s1 + __n, pcVar3 != (char *)0x0)) {
                uVar6 = 2;
LAB_00013e18:
                if (*pcVar3 == '\0') goto LAB_00013e34;
                if (*pcVar3 == '=') goto code_r0x00013e2c;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00014018;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00013e6c;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00013e18;
                }
              }
            }
LAB_00013e6c:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_00013ec4;
      }
      param_2 = param_2 + -1;
      __src = __src + 1;
      param_1[5] = param_2;
      param_1[6] = (int)__src;
      __dest = (void *)(param_1[7] + param_1[8] * 4);
    }
    else {
      iVar5 = param_1[8];
      __dest = (void *)(param_1[7] + iVar5 * 4);
      if ((param_1[2] & 1U) == 0) {
        param_1[8] = iVar5 + 1;
        *(char **)(param_1[7] + iVar5 * 4) = pcVar10;
        goto LAB_00013d40;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00013e2c:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00013e34:
  iVar5 = FUN_000135dc(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_00013ec0:
    pcVar10 = (char *)*__src;
LAB_00013ec4:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00013e4c:
  param_2 = param_1[5];
LAB_00013d40:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00013d08;
}



/* ===== argparse_help_cb @ 0001401c size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 0001402c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00027000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00027004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 00027010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00027014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00027018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002701c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableChn @ 00027020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_Enable @ 00027024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_Enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00027028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_ClrPubAttr @ 0002702c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_ClrPubAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00027030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00027034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_ResumeChn @ 00027038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_ResumeChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002703c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00027040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00027044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00027048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002704c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SendFrame @ 00027050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00027054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00027058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_PauseChn @ 0002705c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_PauseChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_QueryFileStatus @ 00027060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_QueryFileStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetTrackMode @ 00027064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_GetTrackMode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00027068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0002706c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00027070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SaveFile @ 00027074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetChnParams @ 00027078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetChnParams(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetTrackMode @ 0002707c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetTrackMode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00027080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00027084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00027088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0002708c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00027090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00027094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00027098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002709c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000270a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 000270a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendEndOfStream @ 000270a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_SendEndOfStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetMute @ 000270ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetMute(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_DestroyChn @ 000270b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000270b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetMute @ 000270b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_GetMute(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetVolume @ 000270bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetVolume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000270c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000270c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetPubAttr @ 000270c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_GetPubAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000270cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableReSmp @ 000270d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_DisableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_WaitEos @ 000270d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_WaitEos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableChn @ 000270d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000270dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000270e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000270e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_ClearChnBuf @ 000270e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_ClearChnBuf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetVolume @ 000270ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_GetVolume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_CreateChn @ 000270f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_QueryChnStat @ 000270f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_QueryChnStat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_Disable @ 000270f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_Disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetPubAttr @ 000270fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetPubAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableReSmp @ 00027100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_EnableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00027104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00027108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002710c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendStream @ 00027110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_SendStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


