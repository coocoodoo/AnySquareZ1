// rk_mpi_aenc_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000111c8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000111ec size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002400c)();
  return;
}



/* ===== <EXTERNAL>::poll @ 000111f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_00024010)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011204 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00024014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_RegisterEncoder @ 00011210 size=12 ===== */

void RK_MPI_AENC_RegisterEncoder(void)

{
  (*(code *)PTR_RK_MPI_AENC_RegisterEncoder_00024018)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 0001121c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002401c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011228 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024020)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011234 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00024024)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_UnRegisterEncoder @ 00011240 size=12 ===== */

void RK_MPI_AENC_UnRegisterEncoder(void)

{
  (*(code *)PTR_RK_MPI_AENC_UnRegisterEncoder_00024028)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 0001124c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002402c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00024030)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00011270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00024038)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::strlen @ 0001127c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002403c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 00011288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00024040)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_SendFrame @ 00011294 size=12 ===== */

void RK_MPI_AENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_AENC_SendFrame_00024044)();
  return;
}



/* ===== <EXTERNAL>::_exit @ 000112a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
  (*(code *)PTR__exit_00024048)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_CreateChn @ 000112ac size=12 ===== */

void RK_MPI_AENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_AENC_CreateChn_0002404c)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 000112b8 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00024050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000112c4 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00024054)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 000112d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00024058)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 000112dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002405c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 000112e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00024060)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_GetStream @ 000112f4 size=12 ===== */

void RK_MPI_AENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_AENC_GetStream_00024064)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011300 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00024068)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 0001130c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002406c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_DestroyChn @ 00011318 size=12 ===== */

void RK_MPI_AENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_AENC_DestroyChn_00024070)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00011324 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00024074)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::fputs @ 00011330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00024078)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 0001133c size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_0002407c)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011348 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00024080)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00024084)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011360 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00024088)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 0001136c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_0002408c)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 00011378 size=12 ===== */

void __aeabi_uldivmod(void)

{
  (*(code *)PTR___aeabi_uldivmod_00024090)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00011384 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00024094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_ReleaseStream @ 00011390 size=12 ===== */

void RK_MPI_AENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_AENC_ReleaseStream_00024098)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0001139c size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0002409c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 000113a8 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_000240a0)();
  return;
}



/* ===== <EXTERNAL>::exit @ 000113b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_000240a4)(__status);
  return;
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 000113c0 size=12 ===== */

void __aeabi_idiv(void)

{
  (*(code *)PTR___aeabi_idiv_000240a8)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 000113cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000240ac)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::free @ 000113d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000240b0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strerror @ 000113e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000240b4)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 000113f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000240b8)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 000113fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000240bc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011408 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000240c0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00011414 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000240c4)(__th);
  return iVar1;
}



/* ===== main @ 00011420 size=1096 ===== */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  _rkTEST_AENC_CTX_S *__ptr;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c8 [40];
  undefined4 local_1a0 [2];
  undefined *local_198;
  char *local_190;
  code *local_18c;
  undefined4 local_184;
  undefined4 local_180;
  char *local_170;
  undefined4 local_160;
  undefined1 local_15c;
  char *local_158;
  _rkTEST_AENC_CTX_S *local_154;
  char *local_150;
  undefined4 local_140;
  undefined1 local_13c;
  char *local_138;
  _rkTEST_AENC_CTX_S *local_134;
  char *local_130;
  undefined4 local_120;
  char *local_118;
  _rkTEST_AENC_CTX_S *local_114;
  char *local_110;
  undefined4 local_100;
  char *local_f8;
  _rkTEST_AENC_CTX_S *local_f4;
  char *local_f0;
  undefined4 local_e0;
  char *local_d8;
  _rkTEST_AENC_CTX_S *local_d4;
  char *local_d0;
  undefined4 local_c0;
  undefined1 local_bc;
  char *local_b8;
  _rkTEST_AENC_CTX_S *local_b4;
  char *local_b0;
  undefined4 local_a0;
  undefined1 local_9c;
  char *local_98;
  _rkTEST_AENC_CTX_S *local_94;
  char *local_90;
  undefined4 local_80;
  undefined1 local_7c;
  char *local_78;
  _rkTEST_AENC_CTX_S *local_74;
  char *local_70;
  undefined4 local_60;
  char *local_58;
  _rkTEST_AENC_CTX_S *local_54;
  char *local_50;
  
  __ptr = malloc(0x38);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar3 = 0;
  *(undefined4 *)(__ptr + 0x10) = 0;
  *(undefined4 *)(__ptr + 0x14) = uVar1;
  *(undefined4 *)(__ptr + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(__ptr + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(__ptr + 0x18) = 0x10;
  *(undefined4 *)(__ptr + 0x28) = 0;
  *(undefined4 *)(__ptr + 0x2c) = uVar1;
  *(undefined4 *)(__ptr + 0x1c) = 0;
  *(undefined4 *)(__ptr + 0x30) = 0;
  *(undefined4 *)(__ptr + 0x34) = uVar1;
  *(undefined4 *)(__ptr + 0x28) = 0x400;
  *(undefined4 *)(__ptr + 0x20) = 0;
  *(undefined4 *)(__ptr + 0x24) = uVar1;
  *(undefined4 *)(__ptr + 0x30) = 0xffffffff;
  *(undefined8 *)__ptr = 0;
  *(undefined8 *)(__ptr + 8) = 0x100000001;
  memset(local_1a0,0,0x180);
  local_190 = "show this help message and exit";
  local_170 = "basic options:";
  local_150 = "input file name , e.g.(./*.mp3). <required>";
  local_130 = "codec, e.g.(mp3/mp2/g711a/g726). <required>";
  local_110 = "the number of input stream channels. <required>";
  local_f0 = "the sample rate of input stream. <required>";
  local_d0 = "the input format of input stream. <required>";
  local_b0 = "output file name, e.g.(./*.pcm). default(NULL).";
  local_90 = "loop running count. default(1)";
  local_184 = 1;
  local_180 = 1;
  local_13c = 0x43;
  local_198 = &DAT_00013218;
  local_bc = 0x6f;
  local_18c = argparse_help_cb;
  local_9c = 0x6e;
  local_134 = __ptr + 0x1c;
  local_15c = 0x69;
  local_158 = "input";
  local_138 = "codec";
  local_118 = "input_ch";
  local_f8 = "input_rate";
  local_d8 = "input_format";
  local_b8 = "output";
  local_98 = "loop_count";
  local_1a0[0] = 2;
  local_160 = 6;
  local_140 = 6;
  local_c0 = 6;
  local_120 = 4;
  local_100 = 4;
  local_e0 = 4;
  local_a0 = 4;
  local_80 = 4;
  local_60 = 4;
  local_114 = __ptr + 0x14;
  local_d4 = __ptr + 0x18;
  local_b4 = __ptr + 4;
  local_94 = __ptr + 8;
  local_74 = __ptr + 0xc;
  local_54 = __ptr + 0x28;
  local_78 = "channel_count";
  local_70 = "the count of adec channel. default(1).";
  local_58 = "frame_size";
  local_50 = "the size of send frame. default(1024).";
  local_7c = 99;
  local_154 = __ptr;
  local_f4 = __ptr + 0x10;
  argparse_init(auStack_1c8,local_1a0,&DAT_00013120,0);
  argparse_describe(auStack_1c8,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_1c8,param_1,param_2);
  puts("cmd parse result:");
  printf("input  file name       : %s\n",*(undefined4 *)__ptr);
  printf("output file name       : %s\n",*(undefined4 *)(__ptr + 4));
  printf("loop count             : %d\n",*(undefined4 *)(__ptr + 8));
  printf("channel number         : %d\n",*(undefined4 *)(__ptr + 0xc));
  printf("input sample rate      : %d\n",*(undefined4 *)(__ptr + 0x10));
  printf("input channel          : %d\n",*(undefined4 *)(__ptr + 0x14));
  printf("input format           : %d\n",*(undefined4 *)(__ptr + 0x18));
  printf("input codec name       : %s\n",*(undefined4 *)(__ptr + 0x1c));
  if ((((*(int *)__ptr == 0) || (*(int *)(__ptr + 0x14) < 1)) || (*(int *)(__ptr + 0x10) < 1)) ||
     (*(int *)(__ptr + 0x1c) == 0)) {
    argparse_usage(auStack_1c8);
  }
  else {
    RK_MPI_SYS_Init();
    if (0 < *(int *)(__ptr + 8)) {
      do {
        RK_LOG(4,0x17171700,"start running loop count  = %d",&DAT_00013190,0x1ea,iVar3);
        iVar2 = unit_test_mpi_aenc(__ptr);
        if (iVar2 != 0) break;
        iVar2 = iVar3 + 1;
        RK_LOG(4,0x17171700,"end running loop count  = %d",&DAT_00013190,0x1ef,iVar3);
        iVar3 = iVar2;
      } while (iVar2 < *(int *)(__ptr + 8));
    }
  }
  if (*(int *)(__ptr + 0x30) != -1) {
    RK_LOG(5,0x17171700,"unregister external aenc","unregister_ext_aenc",0xad);
    iVar3 = RK_MPI_AENC_UnRegisterEncoder(*(undefined4 *)(__ptr + 0x30));
    if (iVar3 != 0) {
      RK_LOG(2,0x17171700,"aenc unregister decoder fail","unregister_ext_aenc",0xb0,iVar3);
    }
  }
  free(__ptr);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== _start @ 00011868 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00024034)
            (DAT_0001189c,param_2,&stack0x00000004,DAT_000118a0,DAT_00011898,param_1);
  return;
}



/* ===== FUN_000118a4 @ 000118a4 size=32 ===== */

void FUN_000118a4(void)

{
  if (DAT_000118c8 == DAT_000118c4) {
    return;
  }
  if (DAT_000118cc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000118c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000118cc)();
  return;
}



/* ===== _FINI_0 @ 00011908 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011944;
  if (*DAT_00011944 != '\0') {
    return;
  }
  FUN_000118a4();
  if (DAT_00011948 != 0) {
    __deregister_frame_info(DAT_0001194c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011950 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011974 != 0) {
    __register_frame_info(DAT_0001197c,DAT_00011978);
  }
  if ((DAT_00011900 - DAT_000118fc >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011904 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000118f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011904)();
  return;
}



/* ===== FUN_00011980 @ 00011980 size=424 ===== */

undefined4 FUN_00011980(int param_1)

{
  bool bVar1;
  size_t __size;
  FILE *__s;
  int iVar2;
  void *__ptr;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 local_40;
  size_t local_3c;
  undefined4 local_38;
  
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  __s = (FILE *)0x0;
  if ((*(char **)(param_1 + 4) == (char *)0x0) ||
     (__s = fopen64(*(char **)(param_1 + 4),"wb+"), __s != (FILE *)0x0)) {
LAB_000119d0:
    do {
      while (iVar2 = RK_MPI_AENC_GetStream(uVar5,&local_40,*(undefined4 *)(param_1 + 0x20)),
            iVar2 != 0) {
        RK_LOG(2,0x17171700,"fail to get aenc frame.","receive_stream_thread",0x15e);
      }
      __ptr = (void *)RK_MPI_MB_Handle2VirAddr(local_40);
      __size = local_3c;
      if ((int)local_3c < 1) {
        if (__ptr == (void *)0x0) break;
        bVar1 = true;
      }
      else {
        bVar1 = false;
        if (__ptr == (void *)0x0) goto LAB_000119d0;
      }
      RK_LOG(6,0x17171700,"get frame data = %p, size = %d, timeStamp = %lld","receive_stream_thread"
             ,0x155,__ptr,local_3c,local_38);
      if (__s != (FILE *)0x0) {
        fwrite(__ptr,__size,1,__s);
        fflush(__s);
      }
      RK_MPI_AENC_ReleaseStream(uVar5,&local_40);
    } while (!bVar1);
    RK_LOG(4,0x17171700,"get eos stream.","receive_stream_thread",0x162);
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  else {
    piVar3 = __errno_location();
    uVar5 = *(undefined4 *)(param_1 + 4);
    pcVar4 = strerror(*piVar3);
    RK_LOG(2,0x17171700,"failed to open output file %s, error: %s.","receive_stream_thread",0x143,
           uVar5,pcVar4);
  }
  return 0;
}



/* ===== FUN_00011b48 @ 00011b48 size=632 ===== */

undefined4 FUN_00011b48(undefined4 *param_1)

{
  FILE *__stream;
  int iVar1;
  void *__ptr;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t __nmemb;
  undefined8 uVar9;
  undefined8 uVar10;
  size_t sVar11;
  void *pvVar12;
  undefined4 local_88 [4];
  undefined8 local_78;
  int local_70;
  size_t local_6c;
  undefined4 local_68;
  void *local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  size_t local_48;
  int iStack_44;
  undefined1 *local_40;
  void *local_3c;
  
  iVar7 = param_1[6];
  uVar5 = param_1[9];
  __nmemb = param_1[10];
  if (iVar7 == 0x10) {
    iVar7 = 2;
  }
  else if (iVar7 == 0x20) {
    iVar7 = 4;
  }
  else if (iVar7 == 8) {
    iVar7 = 1;
  }
  else {
    RK_LOG(2,0x17171700,"test not find format : %d","find_audio_frame_size",0x69,iVar7);
    iVar7 = 2;
  }
  iVar6 = param_1[5];
  __stream = fopen64((char *)*param_1,"rb");
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    uVar5 = *param_1;
    pcVar4 = strerror(*piVar3);
    RK_LOG(2,0x17171700,"failed to open input file(%s), error: %s","send_frame_thread",0x103,uVar5,
           pcVar4);
  }
  else {
    iVar8 = 0;
    uVar9 = 0;
    while( true ) {
      __ptr = calloc(__nmemb,1);
      sVar2 = fread(__ptr,1,__nmemb,__stream);
      if (sVar2 != 0) {
        iVar1 = __aeabi_idiv(sVar2,iVar6 * iVar7);
        uVar10 = __aeabi_uldivmod((int)((longlong)iVar1 * 1000000),
                                  (int)((ulonglong)((longlong)iVar1 * 1000000) >> 0x20),param_1[4],
                                  (int)param_1[4] >> 0x1f);
      }
      else {
        uVar10 = 0;
        RK_LOG(4,0x17171700,"read eos frame, now send eos frame!","send_frame_thread",0x10e);
      }
      sVar11 = sVar2;
      pvVar12 = __ptr;
      RK_LOG(6,0x17171700,"send frame srcSize = %d, srcData = %p, timeStamp = %lld",
             "send_frame_thread",0x115,sVar2,__ptr);
      local_68 = 1;
      uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_44 = (int)sVar2 >> 0x1f;
      iVar8 = iVar8 + 1;
      local_40 = &LAB_00011b28;
      local_5c = 0;
      local_50 = 0;
      local_78 = uVar9;
      local_70 = iVar8;
      local_6c = sVar2;
      local_60 = __ptr;
      uStack_4c = uStack_58;
      local_48 = sVar2;
      local_3c = __ptr;
      RK_MPI_SYS_CreateMB(local_88,&local_60);
      iVar1 = RK_MPI_AENC_SendFrame(uVar5,local_88,0,param_1[8]);
      if (iVar1 == 0) {
        RK_MPI_MB_ReleaseMB(local_88[0]);
      }
      else {
        RK_LOG(6,0x17171700,"fail to send aenc stream.","send_frame_thread",0x124,sVar11,pvVar12);
        RK_MPI_MB_ReleaseMB(local_88[0]);
      }
      if (sVar2 == 0) break;
      uVar9 = VectorAdd(uVar9,uVar10,8);
    }
    fclose(__stream);
  }
  return 0;
}



/* ===== register_ext_aenc @ 00011dc0 size=208 ===== */

/* register_ext_aenc(_rkTEST_AENC_CTX_S*) */

undefined4 register_ext_aenc(_rkTEST_AENC_CTX_S *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = DAT_00012e6c;
  uStack_2c = DAT_00012e68;
  uStack_30 = DAT_00012e64;
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  local_34 = 0;
  local_24 = 0;
  _local_28 = CONCAT22((short)((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc)
                              >> 0x10),(short)uVar2);
  local_1c = 0;
  local_38 = 0x40000002;
  uStack_18 = 0;
  uStack_14 = uStack_20;
  RK_LOG(5,0x17171700,"register external aenc(%s)","register_ext_aenc",0xa0,&uStack_30);
  iVar1 = RK_MPI_AENC_RegisterEncoder(param_1 + 0x30,&local_38);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"aenc %s register decoder fail","register_ext_aenc",0xa3,&uStack_30,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== unregister_ext_aenc @ 00011e90 size=164 ===== */

/* unregister_ext_aenc(_rkTEST_AENC_CTX_S*) */

undefined4 unregister_ext_aenc(_rkTEST_AENC_CTX_S *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (_rkTEST_AENC_CTX_S *)0x0) && (*(int *)(param_1 + 0x30) != -1)) {
    RK_LOG(5,0x17171700,"unregister external aenc","unregister_ext_aenc",0xad);
    iVar1 = RK_MPI_AENC_UnRegisterEncoder(*(undefined4 *)(param_1 + 0x30));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      uVar2 = 0;
    }
    else {
      RK_LOG(2,0x17171700,"aenc unregister decoder fail","unregister_ext_aenc",0xb0,iVar1);
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 0;
}



/* ===== test_aenc_poll_event @ 00011f34 size=172 ===== */

/* test_aenc_poll_event(int, int) */

int test_aenc_poll_event(int param_1,int param_2)

{
  int iVar1;
  pollfd local_10;
  
  if (0 < param_2) {
    local_10.revents = 0;
    local_10.events = 0x3b;
    local_10.fd = param_2;
    iVar1 = poll(&local_10,1,param_1);
    if ((0 < iVar1) && ((local_10.revents & 0x38U) != 0)) {
      RK_LOG(2,0x17171700,"fd:%d polled error","test_aenc_poll_event",0xc5,param_2);
      iVar1 = -1;
    }
    return iVar1;
  }
  printf("\nASSERT at:\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n",
         "test_aenc_poll_event",0xbd,"fd > 0");
                    /* WARNING: Subroutine does not return */
  _exit(-1);
}



/* ===== test_init_mpi_aenc @ 00011fe0 size=464 ===== */

/* test_init_mpi_aenc(_rkTEST_AENC_CTX_S*) */

undefined4 test_init_mpi_aenc(_rkTEST_AENC_CTX_S *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  char *__haystack;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  __haystack = *(char **)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  pcVar2 = strstr(__haystack,"mp2");
  if (pcVar2 == (char *)0x0) {
    pcVar2 = strstr(__haystack,"mp3");
    if (pcVar2 == (char *)0x0) {
      pcVar2 = strstr(__haystack,"g726");
      if (pcVar2 == (char *)0x0) {
        pcVar2 = strstr(__haystack,"g711a");
        if (pcVar2 == (char *)0x0) {
          pcVar2 = strstr(__haystack,"g711u");
          if (pcVar2 == (char *)0x0) {
            RK_LOG(2,0x17171700,"test not find codec id : %s","test_find_audio_enc_codec_id",0x49,
                   __haystack);
            return 0xffffffff;
          }
          uVar5 = 0x40000003;
        }
        else {
          uVar5 = 0x40000002;
        }
      }
      else {
        uVar5 = 0x40000008;
      }
    }
    else {
      uVar5 = 0x4000001b;
    }
  }
  else {
    uVar5 = 0x7f000006;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 8) {
    uVar8 = 0;
  }
  else if (iVar4 == 0x10) {
    uVar8 = 1;
  }
  else if (iVar4 == 0x18) {
    uVar8 = 2;
  }
  else {
    RK_LOG(2,0x17171700,"test not find format : %s","test_find_audio_enc_format",0x56,iVar4);
    uVar8 = 0xffffffff;
  }
  puVar3 = malloc(0x2c);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  puVar3[8] = 0;
  puVar3[9] = uVar1;
  *(undefined4 **)(param_1 + 0x34) = puVar3;
  puVar3[9] = 0;
  puVar3[10] = uVar1;
  puVar3[2] = uVar5;
  puVar3[6] = 0;
  puVar3[7] = uVar1;
  puVar3[3] = uVar8;
  *puVar3 = uVar5;
  puVar3[4] = uVar7;
  puVar3[5] = uVar9;
  puVar3[10] = 0;
  puVar3[1] = 4;
  iVar4 = RK_MPI_AENC_CreateChn(uVar6,puVar3);
  uVar5 = 0;
  if (iVar4 != 0) {
    RK_LOG(2,0x17171700,"create aenc chn %d err:0x%x\n","test_init_mpi_aenc",0xe4,uVar6,iVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ===== unit_test_mpi_aenc @ 000121b0 size=532 ===== */

/* unit_test_mpi_aenc(_rkTEST_AENC_CTX_S*) */

undefined4 unit_test_mpi_aenc(_rkTEST_AENC_CTX_S *param_1)

{
  _rkTEST_AENC_CTX_S *p_Var1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  _rkTEST_AENC_CTX_S *__arg;
  _rkTEST_AENC_CTX_S *p_Var8;
  pthread_t *__newthread;
  pthread_t *ppVar9;
  _rkTEST_AENC_CTX_S *p_Var10;
  _rkTEST_AENC_CTX_S *p_Var11;
  _rkTEST_AENC_CTX_S *p_Var12;
  pthread_t local_828 [32];
  pthread_t apStack_7a8 [32];
  _rkTEST_AENC_CTX_S local_728 [1796];
  
  iVar5 = *(int *)(param_1 + 0xc);
  if (0x20 < iVar5) {
    RK_LOG(2,0x17171700,"aenc chn(%d) > max_chn(%d)","unit_test_mpi_aenc",0x177,iVar5,0x20);
    return 0xffffffff;
  }
  if (0 < iVar5) {
    p_Var8 = local_728;
    __newthread = local_828;
    iVar5 = 0;
    p_Var11 = param_1;
    p_Var1 = p_Var8;
    __arg = p_Var8;
    do {
      do {
        p_Var12 = p_Var1;
        p_Var10 = p_Var11;
        p_Var11 = p_Var10 + 0x10;
        uVar3 = *(undefined4 *)(p_Var10 + 4);
        uVar4 = *(undefined4 *)(p_Var10 + 8);
        uVar6 = *(undefined4 *)(p_Var10 + 0xc);
        *(undefined4 *)p_Var12 = *(undefined4 *)p_Var10;
        *(undefined4 *)(p_Var12 + 4) = uVar3;
        *(undefined4 *)(p_Var12 + 8) = uVar4;
        *(undefined4 *)(p_Var12 + 0xc) = uVar6;
        p_Var1 = p_Var12 + 0x10;
      } while (p_Var11 != param_1 + 0x30);
      uVar3 = *(undefined4 *)(p_Var10 + 0x14);
      iVar7 = 0;
      *(undefined4 *)(p_Var12 + 0x10) = *(undefined4 *)p_Var11;
      *(undefined4 *)(p_Var12 + 0x14) = uVar3;
      *(int *)(__arg + 0x24) = iVar5;
      *(undefined4 *)(__arg + 0x20) = 0xffffffff;
      *(undefined4 *)(__arg + 0x34) = 0;
      iVar2 = test_init_mpi_aenc(__arg);
      if (iVar2 == -1) {
        do {
          iVar2 = iVar7 + 1;
          RK_MPI_AENC_DestroyChn(iVar7);
          if (*(void **)(p_Var8 + 0x34) != (void *)0x0) {
            free(*(void **)(p_Var8 + 0x34));
            *(undefined4 *)(p_Var8 + 0x34) = 0;
          }
          p_Var8 = p_Var8 + 0x38;
          iVar7 = iVar2;
        } while (iVar5 + 1 != iVar2);
        return 0xffffffff;
      }
      ppVar9 = apStack_7a8;
      pthread_create(__newthread,(pthread_attr_t *)0x0,FUN_00011b48,__arg);
      pthread_create(ppVar9 + iVar5,(pthread_attr_t *)0x0,FUN_00011980,__arg);
      iVar5 = iVar5 + 1;
      __newthread = __newthread + 1;
      __arg = __arg + 0x38;
      p_Var11 = param_1;
      p_Var1 = __arg;
    } while (iVar5 < *(int *)(param_1 + 0xc));
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        while( true ) {
          pthread_join(local_828[iVar7],(void **)0x0);
          pthread_join(*ppVar9,(void **)0x0);
          RK_MPI_AENC_DestroyChn(iVar7);
          if (*(void **)(p_Var8 + 0x34) == (void *)0x0) break;
          free(*(void **)(p_Var8 + 0x34));
          iVar5 = *(int *)(param_1 + 0xc);
          iVar7 = iVar7 + 1;
          *(undefined4 *)(p_Var8 + 0x34) = 0;
          p_Var8 = p_Var8 + 0x38;
          ppVar9 = ppVar9 + 1;
          if (iVar5 <= iVar7) {
            return 0;
          }
        }
        iVar7 = iVar7 + 1;
        p_Var8 = p_Var8 + 0x38;
        ppVar9 = ppVar9 + 1;
      } while (iVar7 < *(int *)(param_1 + 0xc));
    }
  }
  return 0;
}



/* ===== FUN_000123c4 @ 000123c4 size=64 ===== */

void FUN_000123c4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x3650;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x3634;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012404 @ 00012404 size=588 ===== */

undefined4 FUN_00012404(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_00012438_default;
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
    goto LAB_00012474;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_00012474:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_0001264c:
                    /* WARNING: Subroutine does not return */
        FUN_000123c4(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_00012634:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_000123c4(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_000123c4(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_0001264c;
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
    if (iVar4 != 0) goto LAB_00012634;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_000123c4(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_0001264c;
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
switchD_00012438_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 00012664 size=48 ===== */

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



/* ===== argparse_describe @ 00012694 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 000126a8 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_000127a0;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_000127a0:
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
          if (piVar7[2] != 0) goto LAB_00012884;
LAB_0001289c:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_000129f8;
LAB_000128a8:
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
          if (piVar7[2] == 0) goto LAB_0001289c;
          if ((char)piVar7[1] == '\0') {
LAB_00012884:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_0001289c;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00012884;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_000128a8;
LAB_000129f8:
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



/* ===== argparse_parse @ 00012ac4 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_00012b24;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_00012b24:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00012b30:
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
            if (piVar11[8] == 0) goto LAB_00012ce8;
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
          while (iVar5 = FUN_00012404(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00012c74;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00012de0;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00012de0;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_00012404(param_1);
              if (iVar5 == -2) goto LAB_00012de0;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00012de0:
          pcVar10 = *(char **)param_1[6];
          goto LAB_00012cec;
        }
        goto LAB_00012ce8;
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
LAB_00012c40:
                if (*pcVar3 == '\0') goto LAB_00012c5c;
                if (*pcVar3 == '=') goto code_r0x00012c54;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00012e40;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00012c94;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00012c40;
                }
              }
            }
LAB_00012c94:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_00012cec;
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
        goto LAB_00012b68;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00012c54:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00012c5c:
  iVar5 = FUN_00012404(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_00012ce8:
    pcVar10 = (char *)*__src;
LAB_00012cec:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00012c74:
  param_2 = param_1[5];
LAB_00012b68:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00012b30;
}



/* ===== argparse_help_cb @ 00012e44 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 00012e54 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_AENC_SendFrame @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00025028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_UnRegisterEncoder @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_UnRegisterEncoder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00025034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00025038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00025040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_DestroyChn @ 00025044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00025048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_ReleaseStream @ 00025058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0002505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00025060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00025074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00025078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00025080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_exit @ 00025084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00025088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 0002508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_GetStream @ 00025090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_RegisterEncoder @ 00025094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_RegisterEncoder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00025098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_CreateChn @ 0002509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000250a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000250a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000250a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000250ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 000250b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 000250b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000250b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000250bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 000250c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 000250c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 000250c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


