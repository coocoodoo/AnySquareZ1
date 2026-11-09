// rk_mpi_adec_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011204 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00011228 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002400c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011234 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00024010)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00011240 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00024014)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 0001124c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024018)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002401c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_ReleaseFrame @ 00011264 size=12 ===== */

void RK_MPI_ADEC_ReleaseFrame(void)

{
  (*(code *)PTR_RK_MPI_ADEC_ReleaseFrame_00024020)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00024024)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001127c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00024028)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00011294 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00024030)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendStream @ 000112a0 size=12 ===== */

void RK_MPI_ADEC_SendStream(void)

{
  (*(code *)PTR_RK_MPI_ADEC_SendStream_00024034)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 000112ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00024038)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 000112b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002403c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_UnRegisterDecoder @ 000112c4 size=12 ===== */

void RK_MPI_ADEC_UnRegisterDecoder(void)

{
  (*(code *)PTR_RK_MPI_ADEC_UnRegisterDecoder_00024040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_RegisterDecoder @ 000112d0 size=12 ===== */

void RK_MPI_ADEC_RegisterDecoder(void)

{
  (*(code *)PTR_RK_MPI_ADEC_RegisterDecoder_00024044)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 000112dc size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00024048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000112e8 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0002404c)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 000112f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00024050)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011300 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00024054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 0001130c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00024058)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011318 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0002405c)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00011324 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00024060)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00011330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00024064)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendEndOfStream @ 0001133c size=12 ===== */

void RK_MPI_ADEC_SendEndOfStream(void)

{
  (*(code *)PTR_RK_MPI_ADEC_SendEndOfStream_00024068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_CreateChn @ 00011348 size=12 ===== */

void RK_MPI_ADEC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_ADEC_CreateChn_0002406c)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00011354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00024070)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_GetFrame @ 00011360 size=12 ===== */

void RK_MPI_ADEC_GetFrame(void)

{
  (*(code *)PTR_RK_MPI_ADEC_GetFrame_00024074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 0001136c size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_00024078)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011378 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002407c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011384 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00024080)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011390 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00024084)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_QueryChnStat @ 0001139c size=12 ===== */

void RK_MPI_ADEC_QueryChnStat(void)

{
  (*(code *)PTR_RK_MPI_ADEC_QueryChnStat_00024088)();
  return;
}



/* ===== <EXTERNAL>::strtof @ 000113a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_0002408c)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_DestroyChn @ 000113b4 size=12 ===== */

void RK_MPI_ADEC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_ADEC_DestroyChn_00024090)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000113c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00024094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 000113cc size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00024098)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 000113d8 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_0002409c)();
  return;
}



/* ===== <EXTERNAL>::exit @ 000113e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_000240a0)(__status);
  return;
}



/* ===== <EXTERNAL>::strstr @ 000113f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000240a4)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::free @ 000113fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000240a8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011408 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000240ac)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00011414 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000240b0)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00011420 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000240b4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_ClearChnBuf @ 0001142c size=12 ===== */

void RK_MPI_ADEC_ClearChnBuf(void)

{
  (*(code *)PTR_RK_MPI_ADEC_ClearChnBuf_000240b8)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011438 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000240bc)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00011444 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000240c0)(__th);
  return iVar1;
}



/* ===== main @ 00011450 size=1152 ===== */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  _rkMpiADECCtx *__ptr;
  int iVar2;
  int iVar3;
  undefined1 auStack_1e0 [40];
  undefined4 local_1b8 [2];
  undefined *local_1b0;
  char *local_1a8;
  code *local_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  char *local_188;
  undefined4 local_178;
  undefined1 local_174;
  char *local_170;
  _rkMpiADECCtx *local_16c;
  char *local_168;
  undefined4 local_158;
  undefined1 local_154;
  char *local_150;
  _rkMpiADECCtx *local_14c;
  char *local_148;
  undefined4 local_138;
  char *local_130;
  _rkMpiADECCtx *local_12c;
  char *local_128;
  undefined4 local_118;
  char *local_110;
  _rkMpiADECCtx *local_10c;
  char *local_108;
  undefined4 local_f8;
  undefined1 local_f4;
  char *local_f0;
  _rkMpiADECCtx *local_ec;
  char *local_e8;
  undefined4 local_d8;
  undefined1 local_d4;
  char *local_d0;
  _rkMpiADECCtx *local_cc;
  char *local_c8;
  undefined4 local_b8;
  undefined1 local_b4;
  char *local_b0;
  _rkMpiADECCtx *local_ac;
  char *local_a8;
  undefined4 local_98;
  char *local_90;
  _rkMpiADECCtx *local_8c;
  char *local_88;
  undefined4 local_78;
  char *local_70;
  _rkMpiADECCtx *local_6c;
  char *local_68;
  undefined4 local_58;
  char *local_50;
  _rkMpiADECCtx *local_4c;
  char *local_48;
  
  __ptr = malloc(0x38);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar3 = 0;
  *(undefined4 *)(__ptr + 0x10) = 0;
  *(undefined4 *)(__ptr + 0x14) = uVar1;
  *(undefined4 *)(__ptr + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(__ptr + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(__ptr + 0x34) = 0xffffffff;
  *(undefined4 *)(__ptr + 0x20) = 0;
  *(undefined4 *)(__ptr + 0x24) = uVar1;
  *(undefined4 *)(__ptr + 0x1c) = 0;
  *(undefined4 *)(__ptr + 0x28) = 0;
  *(undefined4 *)(__ptr + 0x2c) = uVar1;
  *(undefined4 *)(__ptr + 0x18) = 0;
  *(undefined8 *)__ptr = 0;
  *(undefined4 *)(__ptr + 0x30) = 0;
  *(undefined8 *)(__ptr + 8) = 0x100000001;
  memset(local_1b8,0,0x1a0);
  local_174 = 0x69;
  local_1b0 = &DAT_000133c0;
  local_138 = 4;
  local_118 = 4;
  local_d8 = 4;
  local_1a8 = "show this help message and exit";
  local_b8 = 4;
  local_1a4 = argparse_help_cb;
  local_188 = "basic options:";
  local_170 = "input";
  local_168 = "input file name , e.g.(./*.mp3). <required>";
  local_150 = "codec";
  local_148 = "codec, e.g.(mp2/g711a/g711u/g726). <required>";
  local_130 = "input_ch";
  local_128 = "the number of input stream channels. <required>";
  local_110 = "input_rate";
  local_108 = "the sample rate of input stream. <required>";
  local_f0 = "output";
  local_e8 = "output file name, e.g.(./*.pcm). default(NULL).";
  local_d0 = "loop_count";
  local_c8 = "loop running count. default(1)";
  local_b0 = "channel_count";
  local_1b8[0] = 2;
  local_178 = 6;
  local_19c = 1;
  local_198 = 1;
  local_158 = 6;
  local_f8 = 6;
  local_154 = 0x43;
  local_f4 = 0x6f;
  local_d4 = 0x6e;
  local_b4 = 99;
  local_a8 = "the count of adec channel. default(1).";
  local_98 = 4;
  local_78 = 4;
  local_58 = 4;
  local_14c = __ptr + 0x18;
  local_12c = __ptr + 0x14;
  local_ec = __ptr + 4;
  local_cc = __ptr + 8;
  local_ac = __ptr + 0xc;
  local_8c = __ptr + 0x1c;
  local_6c = __ptr + 0x28;
  local_4c = __ptr + 0x2c;
  local_90 = "dec_mode";
  local_88 = "the audio stream decode mode, range(0: pack mode, 1: stream mode), default(0)";
  local_70 = "query_stat";
  local_68 = "query adec statistics info, range(0: query, 1: not query), default(0)";
  local_50 = "clr_buf";
  local_48 = "clear buffer of channel, range(0, 1), default(0)";
  local_16c = __ptr;
  local_10c = __ptr + 0x10;
  argparse_init(auStack_1e0,local_1b8,&DAT_000132e8,0);
  argparse_describe(auStack_1e0,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_1e0,param_1,param_2);
  puts("cmd parse result:");
  printf("input  file name       : %s\n",*(undefined4 *)__ptr);
  printf("output file name       : %s\n",*(undefined4 *)(__ptr + 4));
  printf("loop count             : %d\n",*(undefined4 *)(__ptr + 8));
  printf("channel number         : %d\n",*(undefined4 *)(__ptr + 0xc));
  printf("input sample rate      : %d\n",*(undefined4 *)(__ptr + 0x10));
  printf("input channel          : %d\n",*(undefined4 *)(__ptr + 0x14));
  printf("input codec name       : %s\n",*(undefined4 *)(__ptr + 0x18));
  printf("input decode mode      : %d\n",*(undefined4 *)(__ptr + 0x1c));
  printf("query stat             : %d\n",*(undefined4 *)(__ptr + 0x28));
  printf("clear buf              : %d\n",*(undefined4 *)(__ptr + 0x2c));
  if ((((*(int *)__ptr == 0) || (*(int *)(__ptr + 0x14) < 1)) || (*(int *)(__ptr + 0x10) < 1)) ||
     (*(int *)(__ptr + 0x18) == 0)) {
    argparse_usage(auStack_1e0);
  }
  else {
    RK_MPI_SYS_Init();
    if (0 < *(int *)(__ptr + 8)) {
      do {
        RK_LOG(4,0x17171700,"start running loop count  = %d",&DAT_0001335c,0x200,iVar3);
        iVar2 = unit_test_mpi_adec(__ptr);
        if (iVar2 != 0) break;
        iVar2 = iVar3 + 1;
        RK_LOG(4,0x17171700,"end running loop count  = %d",&DAT_0001335c,0x205,iVar3);
        iVar3 = iVar2;
      } while (iVar2 < *(int *)(__ptr + 8));
    }
  }
  if (*(int *)(__ptr + 0x34) != -1) {
    RK_LOG(5,0x17171700,"unregister ext audio decoder","unregister_ext_adec",0x16f);
    iVar3 = RK_MPI_ADEC_UnRegisterDecoder(*(undefined4 *)(__ptr + 0x34));
    if (iVar3 != 0) {
      RK_LOG(2,0x17171700,"adec unregister decoder fail, ret = 0x%x","unregister_ext_adec",0x172,
             iVar3);
    }
  }
  free(__ptr);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== _start @ 000118d0 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002402c)
            (DAT_00011904,param_2,&stack0x00000004,DAT_00011908,DAT_00011900,param_1);
  return;
}



/* ===== FUN_0001190c @ 0001190c size=32 ===== */

void FUN_0001190c(void)

{
  if (DAT_00011930 == DAT_0001192c) {
    return;
  }
  if (DAT_00011934 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011934)();
  return;
}



/* ===== _FINI_0 @ 00011970 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000119ac;
  if (*DAT_000119ac != '\0') {
    return;
  }
  FUN_0001190c();
  if (DAT_000119b0 != 0) {
    __deregister_frame_info(DAT_000119b4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000119b8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000119dc != 0) {
    __register_frame_info(DAT_000119e4,DAT_000119e0);
  }
  if ((DAT_00011968 - DAT_00011964 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001196c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001196c)();
  return;
}



/* ===== FUN_00011a08 @ 00011a08 size=424 ===== */

undefined4 FUN_00011a08(undefined4 *param_1)

{
  FILE *__stream;
  void *__ptr;
  size_t sVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 local_68;
  size_t local_64;
  uint local_60;
  int iStack_5c;
  int local_58;
  undefined4 local_54;
  void *local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  size_t local_38;
  int iStack_34;
  undefined1 *local_30;
  void *local_2c;
  
  uVar8 = param_1[8];
  uVar7 = param_1[9];
  __stream = fopen64((char *)*param_1,"rb");
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    uVar7 = *param_1;
    pcVar4 = strerror(*piVar3);
    RK_LOG(2,0x17171700,"failed to open input file(%s), error: %s","send_stream_thread",0xd4,uVar7,
           pcVar4);
  }
  else {
    uVar5 = 0;
    iVar6 = 0;
    while( true ) {
      __ptr = calloc(0x400,1);
      sVar1 = fread(__ptr,1,0x400,__stream);
      if (sVar1 == 0) break;
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_54 = 1;
      local_4c = 0;
      local_58 = uVar5 + 1;
      local_30 = &LAB_000119e8;
      iStack_34 = (int)sVar1 >> 0x1f;
      local_40 = 0;
      local_64 = sVar1;
      local_60 = uVar5;
      iStack_5c = iVar6;
      local_50 = __ptr;
      uStack_3c = uStack_48;
      local_38 = sVar1;
      local_2c = __ptr;
      RK_MPI_SYS_CreateMB(&local_68,&local_50);
      while (iVar2 = RK_MPI_ADEC_SendStream(uVar7,&local_68,uVar8), iVar2 != 0) {
        RK_LOG(2,0x17171700,"fail to send adec stream.","send_stream_thread",0xf7);
      }
      bVar9 = 0xfffffffe < uVar5;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + (uint)bVar9;
      RK_MPI_MB_ReleaseMB(local_68);
    }
    RK_LOG(4,0x17171700,"read eos packet, now send eos packet!","send_stream_thread",0xe0);
    RK_MPI_ADEC_SendEndOfStream(uVar7,0);
    free(__ptr);
    fclose(__stream);
  }
  return 0;
}



/* ===== query_adec_flow_graph_stat @ 00011bb0 size=280 ===== */

/* query_adec_flow_graph_stat(int) */

void query_adec_flow_graph_stat(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar4 = RK_MPI_ADEC_QueryChnStat();
  if (iVar4 != 0) {
    return;
  }
  RK_LOG(4,0x17171700,"query adec flow status:","query_adec_flow_graph_stat",0x39);
  RK_LOG(4,0x17171700,"EOS flag : %d","query_adec_flow_graph_stat",0x3a,0);
  RK_LOG(4,0x17171700,"total number of channel buffer : %d","query_adec_flow_graph_stat",0x3b,uVar1)
  ;
  RK_LOG(4,0x17171700,"free number of channel buffer : %d","query_adec_flow_graph_stat",0x3c,uVar2);
  RK_LOG(4,0x17171700,"busy number of channel buffer : %d","query_adec_flow_graph_stat",0x3d,uVar3);
  return;
}



/* ===== FUN_00011cc8 @ 00011cc8 size=588 ===== */

undefined4 FUN_00011cc8(int param_1)

{
  bool bVar1;
  int *__ptr;
  void *__ptr_00;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  size_t __size;
  undefined4 uVar6;
  FILE *local_30;
  
  __ptr = calloc(8,1);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x24);
  local_30 = *(FILE **)(param_1 + 4);
  if ((local_30 == (FILE *)0x0) ||
     (local_30 = fopen64((char *)local_30,"wb+"), local_30 != (FILE *)0x0)) {
    do {
      while (iVar2 = RK_MPI_ADEC_GetFrame(iVar5,__ptr,uVar6), iVar2 == 0) {
        __ptr_00 = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)*__ptr);
        __size = *(size_t *)(*__ptr + 0x1c);
        bVar1 = (int)__size < 1;
        if (__ptr_00 != (void *)0x0) {
          RK_LOG(6,0x17171700,"get frame data = %p, size = %d","receive_data_thread",0x127,__ptr_00,
                 __size);
          if (local_30 != (FILE *)0x0) {
            fwrite(__ptr_00,__size,1,local_30);
            fflush(local_30);
          }
          RK_MPI_ADEC_ReleaseFrame(iVar5,__ptr);
        }
        if (*(int *)(param_1 + 0x28) != 0) goto LAB_00011e20;
LAB_00011dc8:
        if (*(int *)(param_1 + 0x2c) != 0) goto LAB_00011e3c;
LAB_00011dd4:
        if (bVar1) goto LAB_00011e78;
      }
      RK_LOG(2,0x17171700,"fail to get adec frame.","receive_data_thread",0x131);
      bVar1 = false;
      if (*(int *)(param_1 + 0x28) == 0) goto LAB_00011dc8;
LAB_00011e20:
      query_adec_flow_graph_stat(iVar5);
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(int *)(param_1 + 0x2c) == 0) goto LAB_00011dd4;
LAB_00011e3c:
      RK_LOG(4,0x17171700,"test clear chn(%d) buf","receive_data_thread",0x13a,iVar5);
      RK_MPI_ADEC_ClearChnBuf(iVar5);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    } while (!bVar1);
LAB_00011e78:
    RK_LOG(4,0x17171700,"get eos packet.","receive_data_thread",0x140);
    free(__ptr);
    if (local_30 != (FILE *)0x0) {
      fclose(local_30);
    }
  }
  else {
    piVar3 = __errno_location();
    uVar6 = *(undefined4 *)(param_1 + 4);
    pcVar4 = strerror(*piVar3);
    RK_LOG(2,0x17171700,"failed to open output file %s, error: %s.","receive_data_thread",0x11a,
           uVar6,pcVar4);
    free(__ptr);
  }
  return 0;
}



/* ===== test_init_mpi_adec @ 00011f18 size=364 ===== */

/* test_init_mpi_adec(_rkMpiADECCtx*) */

undefined4 test_init_mpi_adec(_rkMpiADECCtx *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *__haystack;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  puVar1 = calloc(0x3c,1);
  iVar3 = puVar1[5];
  *(undefined4 **)(param_1 + 0x30) = puVar1;
  if (iVar3 == 0) {
    uVar6 = vrev(*(undefined8 *)(param_1 + 0x10),4);
    *(undefined8 *)(puVar1 + 5) = uVar6;
    puVar1[7] = 4;
  }
  __haystack = *(char **)(param_1 + 0x18);
  pcVar2 = strstr(__haystack,"mp2");
  iVar3 = *(int *)(param_1 + 0x1c);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = strstr(__haystack,"g726");
    if (pcVar2 == (char *)0x0) {
      pcVar2 = strstr(__haystack,"g711a");
      if (pcVar2 == (char *)0x0) {
        pcVar2 = strstr(__haystack,"g711u");
        if (pcVar2 == (char *)0x0) {
          if (iVar3 == 1) {
            RK_LOG(2,0x17171700,"test not find codec id : %s","test_find_audio_codec_id",0x8c,
                   __haystack);
            return 0xffffffff;
          }
          uVar4 = 0x40000001;
        }
        else {
          uVar4 = 0x40000003;
        }
      }
      else {
        uVar4 = 0x40000002;
      }
    }
    else {
      uVar4 = 0x40000008;
    }
  }
  else {
    uVar4 = 0x7f000006;
  }
  uVar6 = DAT_00012088;
  puVar1[4] = uVar4;
  *puVar1 = uVar4;
  puVar1[1] = iVar3;
  *(undefined8 *)(puVar1 + 2) = uVar6;
  iVar3 = RK_MPI_ADEC_CreateChn(uVar5,puVar1);
  uVar4 = 0;
  if (iVar3 != 0) {
    RK_LOG(2,0x17171700,"create adec chn %d err:0x%x\n","test_init_mpi_adec",0xb1,uVar5,iVar3);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== test_deinit_mpi_adec @ 00012090 size=144 ===== */

/* test_deinit_mpi_adec(_rkMpiADECCtx*) */

undefined4 test_deinit_mpi_adec(_rkMpiADECCtx *param_1)

{
  void *__ptr;
  
  RK_MPI_ADEC_DestroyChn(*(undefined4 *)(param_1 + 0x24));
  __ptr = *(void **)(param_1 + 0x30);
  if (__ptr != (void *)0x0) {
    if (*(void **)((int)__ptr + 0x20) != (void *)0x0) {
      free(*(void **)((int)__ptr + 0x20));
      *(undefined4 *)((int)__ptr + 0x20) = 0;
    }
    *(undefined4 *)((int)__ptr + 0x24) = 0;
    if (*(int *)((int)__ptr + 0x38) != 0) {
      RK_LOG(5,0x17171700,"please add code here to free pstResv","adec_destroy_chn_attr",0x58);
    }
    free(__ptr);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return 0;
}



/* ===== register_ext_adec @ 00012120 size=192 ===== */

/* register_ext_adec(_rkMpiADECCtx*) */

undefined4 register_ext_adec(_rkMpiADECCtx *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined2 local_30;
  undefined4 local_2e;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = DAT_00013028;
  uStack_34 = DAT_00013024;
  local_38 = DAT_00013020;
  uStack_2a = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_26 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  local_2e = 0;
  uStack_22 = (undefined2)uStack_14;
  local_30 = (undefined2)uVar2;
  local_20 = 0;
  uStack_1e = 0;
  local_3c = 0x40000002;
  uStack_1c = uStack_2a;
  uStack_18 = uStack_26;
  RK_LOG(5,0x17171700,"register ext audio decoder","register_ext_adec",0x161);
  iVar1 = RK_MPI_ADEC_RegisterDecoder(param_1 + 0x34,&local_3c);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"adec register decoder fail, ret = 0x%x","register_ext_adec",0x164,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== unregister_ext_adec @ 000121e0 size=164 ===== */

/* unregister_ext_adec(_rkMpiADECCtx*) */

undefined4 unregister_ext_adec(_rkMpiADECCtx *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (_rkMpiADECCtx *)0x0) && (*(int *)(param_1 + 0x34) != -1)) {
    RK_LOG(5,0x17171700,"unregister ext audio decoder","unregister_ext_adec",0x16f);
    iVar1 = RK_MPI_ADEC_UnRegisterDecoder(*(undefined4 *)(param_1 + 0x34));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
      uVar2 = 0;
    }
    else {
      RK_LOG(2,0x17171700,"adec unregister decoder fail, ret = 0x%x","unregister_ext_adec",0x172,
             iVar1);
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 0;
}



/* ===== unit_test_mpi_adec @ 00012284 size=764 ===== */

/* unit_test_mpi_adec(_rkMpiADECCtx*) */

undefined4 unit_test_mpi_adec(_rkMpiADECCtx *param_1)

{
  int iVar1;
  pthread_t *__newthread;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  _rkMpiADECCtx *__arg;
  void *pvVar6;
  _rkMpiADECCtx *p_Var7;
  _rkMpiADECCtx *p_Var8;
  pthread_t *ppVar9;
  _rkMpiADECCtx *p_Var10;
  _rkMpiADECCtx *p_Var11;
  _rkMpiADECCtx *p_Var12;
  bool bVar13;
  pthread_t local_828 [32];
  pthread_t apStack_7a8 [32];
  _rkMpiADECCtx local_728 [56];
  _rkMpiADECCtx a_Stack_6f0 [1740];
  
  iVar4 = *(int *)(param_1 + 0xc);
  if (0x20 < iVar4) {
    RK_LOG(2,0x17171700,"adec chn(%d) > max_chn(%d)","unit_test_mpi_adec",0x183,iVar4,0x20);
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
  if (0 < iVar4) {
    p_Var7 = local_728;
    iVar4 = 0;
    p_Var8 = p_Var7;
    p_Var11 = param_1;
    ppVar9 = apStack_7a8;
    __arg = p_Var7;
    do {
      while( true ) {
        do {
          p_Var10 = p_Var8;
          p_Var12 = p_Var11 + 0x10;
          uVar2 = *(undefined4 *)(p_Var11 + 4);
          uVar3 = *(undefined4 *)(p_Var11 + 8);
          uVar5 = *(undefined4 *)(p_Var11 + 0xc);
          *(undefined4 *)p_Var10 = *(undefined4 *)p_Var11;
          *(undefined4 *)(p_Var10 + 4) = uVar2;
          *(undefined4 *)(p_Var10 + 8) = uVar3;
          *(undefined4 *)(p_Var10 + 0xc) = uVar5;
          p_Var8 = p_Var10 + 0x10;
          p_Var11 = p_Var12;
        } while (p_Var12 != param_1 + 0x30);
        uVar2 = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(p_Var10 + 0x10) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(p_Var10 + 0x14) = uVar2;
        *(int *)(__arg + 0x24) = iVar4;
        *(undefined4 *)(__arg + 0x30) = 0;
        iVar1 = test_init_mpi_adec(__arg);
        if (iVar1 == -1) {
          p_Var8 = a_Stack_6f0;
          do {
            RK_MPI_ADEC_DestroyChn(*(undefined4 *)(p_Var7 + 0x24));
            pvVar6 = *(void **)(p_Var7 + 0x30);
            if (pvVar6 != (void *)0x0) {
              if (*(void **)((int)pvVar6 + 0x20) != (void *)0x0) {
                free(*(void **)((int)pvVar6 + 0x20));
                *(undefined4 *)((int)pvVar6 + 0x20) = 0;
              }
              *(undefined4 *)((int)pvVar6 + 0x24) = 0;
              if (*(int *)((int)pvVar6 + 0x38) != 0) {
                RK_LOG(5,0x17171700,"please add code here to free pstResv","adec_destroy_chn_attr",
                       0x58);
              }
              free(pvVar6);
              *(undefined4 *)(p_Var7 + 0x30) = 0;
            }
            bVar13 = a_Stack_6f0 + iVar4 * 0x38 != p_Var8;
            p_Var7 = p_Var8;
            p_Var8 = p_Var8 + 0x38;
          } while (bVar13);
          return 0xffffffff;
        }
        if (*(int *)(param_1 + 0x1c) == 1) break;
        pthread_create(ppVar9,(pthread_attr_t *)0x0,FUN_00011cc8,__arg);
        iVar1 = *(int *)(param_1 + 0xc);
        iVar4 = iVar4 + 1;
        ppVar9 = ppVar9 + 1;
        p_Var8 = __arg + 0x38;
        p_Var11 = param_1;
        __arg = __arg + 0x38;
        if (iVar1 <= iVar4) goto LAB_0001236c;
      }
      __newthread = local_828 + iVar4;
      iVar4 = iVar4 + 1;
      pthread_create(__newthread,(pthread_attr_t *)0x0,FUN_00011a08,__arg);
      pthread_create(ppVar9,(pthread_attr_t *)0x0,FUN_00011cc8,__arg);
      iVar1 = *(int *)(param_1 + 0xc);
      ppVar9 = ppVar9 + 1;
      p_Var8 = __arg + 0x38;
      p_Var11 = param_1;
      __arg = __arg + 0x38;
    } while (iVar4 < iVar1);
LAB_0001236c:
    if (0 < iVar1) {
      iVar4 = 0;
      ppVar9 = apStack_7a8;
      do {
        pthread_join(local_828[iVar4],(void **)0x0);
        iVar4 = iVar4 + 1;
        pthread_join(*ppVar9,(void **)0x0);
        RK_MPI_ADEC_DestroyChn(*(undefined4 *)(p_Var7 + 0x24));
        pvVar6 = *(void **)(p_Var7 + 0x30);
        if (pvVar6 != (void *)0x0) {
          if (*(void **)((int)pvVar6 + 0x20) != (void *)0x0) {
            free(*(void **)((int)pvVar6 + 0x20));
            *(undefined4 *)((int)pvVar6 + 0x20) = 0;
          }
          *(undefined4 *)((int)pvVar6 + 0x24) = 0;
          if (*(int *)((int)pvVar6 + 0x38) != 0) {
            RK_LOG(5,0x17171700,"please add code here to free pstResv","adec_destroy_chn_attr",0x58)
            ;
          }
          free(pvVar6);
          *(undefined4 *)(p_Var7 + 0x30) = 0;
        }
        p_Var7 = p_Var7 + 0x38;
        ppVar9 = ppVar9 + 1;
      } while (iVar4 < *(int *)(param_1 + 0xc));
    }
  }
  return 0;
}



/* ===== FUN_00012580 @ 00012580 size=64 ===== */

void FUN_00012580(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x389c;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x3880;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000125c0 @ 000125c0 size=588 ===== */

undefined4 FUN_000125c0(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_000125f4_default;
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
    goto LAB_00012630;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_00012630:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00012808:
                    /* WARNING: Subroutine does not return */
        FUN_00012580(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_000127f0:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00012580(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00012580(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00012808;
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
    if (iVar4 != 0) goto LAB_000127f0;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00012580(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00012808;
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
switchD_000125f4_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 00012820 size=48 ===== */

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



/* ===== argparse_describe @ 00012850 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00012864 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_0001295c;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_0001295c:
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
          if (piVar7[2] != 0) goto LAB_00012a40;
LAB_00012a58:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_00012bb4;
LAB_00012a64:
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
          if (piVar7[2] == 0) goto LAB_00012a58;
          if ((char)piVar7[1] == '\0') {
LAB_00012a40:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_00012a58;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00012a40;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00012a64;
LAB_00012bb4:
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



/* ===== argparse_parse @ 00012c80 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_00012ce0;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_00012ce0:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00012cec:
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
            if (piVar11[8] == 0) goto LAB_00012ea4;
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
          while (iVar5 = FUN_000125c0(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00012e30;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00012f9c;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00012f9c;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_000125c0(param_1);
              if (iVar5 == -2) goto LAB_00012f9c;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00012f9c:
          pcVar10 = *(char **)param_1[6];
          goto LAB_00012ea8;
        }
        goto LAB_00012ea4;
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
LAB_00012dfc:
                if (*pcVar3 == '\0') goto LAB_00012e18;
                if (*pcVar3 == '=') goto code_r0x00012e10;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00012ffc;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00012e50;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00012dfc;
                }
              }
            }
LAB_00012e50:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_00012ea8;
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
        goto LAB_00012d24;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00012e10:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00012e18:
  iVar5 = FUN_000125c0(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_00012ea4:
    pcVar10 = (char *)*__src;
LAB_00012ea8:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00012e30:
  param_2 = param_1[5];
LAB_00012d24:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00012cec;
}



/* ===== argparse_help_cb @ 00013000 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 00013010 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00025000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00025004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 00025010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00025018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00025028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0002502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00025034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00025038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00025040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00025044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00025048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0002504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_RegisterDecoder @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_RegisterDecoder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00025058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00025060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_ReleaseFrame @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_ReleaseFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00025074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00025078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0002507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00025080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_QueryChnStat @ 00025084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_QueryChnStat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendEndOfStream @ 00025088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_SendEndOfStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_ClearChnBuf @ 0002508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_ClearChnBuf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_DestroyChn @ 00025090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00025094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00025098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000250a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000250a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_GetFrame @ 000250a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_GetFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_CreateChn @ 000250ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000250b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_UnRegisterDecoder @ 000250b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_UnRegisterDecoder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000250b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 000250bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 000250c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendStream @ 000250c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_SendStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


