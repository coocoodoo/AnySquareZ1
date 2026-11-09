// rk_mpi_af_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011134 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00011158 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002400c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011164 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00024010)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00011170 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00024014)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 0001117c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024018)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011188 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002401c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011194 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00024020)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AF_Destroy @ 000111a0 size=12 ===== */

void RK_MPI_AF_Destroy(void)

{
  (*(code *)PTR_RK_MPI_AF_Destroy_00024024)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000111ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00024028)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000111b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002402c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 000111d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00024034)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::strlen @ 000111dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00024038)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 000111e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002403c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000111f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00024040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00011200 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00024044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0001120c size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00024048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AF_SendFrame @ 00011218 size=12 ===== */

void RK_MPI_AF_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_AF_SendFrame_0002404c)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00024050)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011230 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00024054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 0001123c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00024058)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011248 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0002405c)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00011254 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00024060)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00011260 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00024064)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AF_GetFrame @ 0001126c size=12 ===== */

void RK_MPI_AF_GetFrame(void)

{
  (*(code *)PTR_RK_MPI_AF_GetFrame_00024068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AF_ReleaseFrame @ 00011278 size=12 ===== */

void RK_MPI_AF_ReleaseFrame(void)

{
  (*(code *)PTR_RK_MPI_AF_ReleaseFrame_0002406c)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00011284 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00024070)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00011290 size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_00024074)();
  return;
}



/* ===== <EXTERNAL>::memset @ 0001129c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00024078)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000112a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002407c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 000112b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_00024080)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::abort @ 000112c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00024084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 000112cc size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00024088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AF_Create @ 000112d8 size=12 ===== */

void RK_MPI_AF_Create(void)

{
  (*(code *)PTR_RK_MPI_AF_Create_0002408c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 000112e4 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_00024090)();
  return;
}



/* ===== <EXTERNAL>::exit @ 000112f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00024094)(__status);
  return;
}



/* ===== <EXTERNAL>::strstr @ 000112fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00024098)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::free @ 00011308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002409c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011314 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000240a0)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00011320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000240a4)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 0001132c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000240a8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011338 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000240ac)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00011344 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000240b0)(__th);
  return iVar1;
}



/* ===== main @ 00011350 size=1132 ===== */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  _rkTEST_AF_CTX_S *__ptr;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_270 [40];
  undefined4 local_248 [2];
  undefined *local_240;
  char *local_238;
  code *local_234;
  undefined4 local_22c;
  undefined4 local_228;
  char *local_218;
  undefined4 local_208;
  undefined1 local_204;
  char *local_200;
  _rkTEST_AF_CTX_S *local_1fc;
  char *local_1f8;
  undefined4 local_1e8;
  undefined1 local_1e4;
  char *local_1e0;
  _rkTEST_AF_CTX_S *local_1dc;
  char *local_1d8;
  undefined4 local_1c8;
  char *local_1c0;
  _rkTEST_AF_CTX_S *local_1bc;
  char *local_1b8;
  undefined4 local_1a8;
  char *local_1a0;
  _rkTEST_AF_CTX_S *local_19c;
  char *local_198;
  undefined4 local_188;
  char *local_180;
  _rkTEST_AF_CTX_S *local_17c;
  char *local_178;
  undefined4 local_168;
  char *local_160;
  _rkTEST_AF_CTX_S *local_15c;
  char *local_158;
  undefined4 local_148;
  char *local_140;
  _rkTEST_AF_CTX_S *local_13c;
  char *local_138;
  undefined4 local_128;
  char *local_120;
  _rkTEST_AF_CTX_S *local_11c;
  char *local_118;
  undefined4 local_108;
  char *local_100;
  _rkTEST_AF_CTX_S *local_fc;
  char *local_f8;
  undefined4 local_e8;
  char *local_e0;
  _rkTEST_AF_CTX_S *local_dc;
  char *local_d8;
  undefined4 local_c8;
  char *local_c0;
  _rkTEST_AF_CTX_S *local_bc;
  char *local_b8;
  undefined4 local_a8;
  char *local_a0;
  _rkTEST_AF_CTX_S *local_9c;
  char *local_98;
  undefined4 local_88;
  char *local_80;
  _rkTEST_AF_CTX_S *local_7c;
  char *local_78;
  undefined4 local_68;
  undefined1 local_64;
  char *local_60;
  _rkTEST_AF_CTX_S *local_5c;
  char *local_58;
  
  __ptr = malloc(0x48);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar3 = 0;
  *(undefined8 *)(__ptr + 0x3c) = 0;
  *(undefined4 *)__ptr = 1;
  *(undefined8 *)(__ptr + 0x40) = 0;
  *(undefined4 *)(__ptr + 0x38) = 1;
  *(undefined4 *)(__ptr + 4) = 0;
  *(undefined4 *)(__ptr + 8) = uVar2;
  *(undefined4 *)(__ptr + 0xc) = uVar4;
  *(undefined4 *)(__ptr + 0x10) = uVar5;
  *(undefined4 *)(__ptr + 0x14) = 0;
  *(undefined4 *)(__ptr + 0x18) = uVar2;
  *(undefined4 *)(__ptr + 0x1c) = uVar4;
  *(undefined4 *)(__ptr + 0x20) = uVar5;
  *(undefined4 *)(__ptr + 0x24) = 0;
  *(undefined4 *)(__ptr + 0x28) = uVar2;
  *(undefined4 *)(__ptr + 0x2c) = uVar4;
  *(undefined4 *)(__ptr + 0x30) = uVar5;
  *(undefined4 *)(__ptr + 0x34) = 0;
  memset(local_248,0,0x220);
  local_238 = "show this help message and exit";
  local_218 = "basic options:";
  local_1f8 = "input file name , e.g.(./*.pcm). <required>";
  local_1d8 = "output file name, e.g.(./ao). default(required).";
  local_1b8 = "set audio filter type, default(required)";
  local_198 = "3a configs patch, default(NULL)";
  local_178 = "the sample rate of input data. <required>";
  local_158 = "the channels of input data. <required>";
  local_138 = "the bit width of input data. <required>";
  local_120 = "out_rate";
  local_22c = 1;
  local_228 = 1;
  local_204 = 0x69;
  local_1bc = __ptr + 0xc;
  local_188 = 4;
  local_240 = &DAT_00013134;
  local_168 = 4;
  local_148 = 4;
  local_234 = argparse_help_cb;
  local_128 = 4;
  local_200 = "input";
  local_1e0 = "output";
  local_1c0 = "af_type";
  local_1a0 = "3a_cfgs";
  local_180 = "input_rate";
  local_160 = "input_ch";
  local_140 = "input_bit";
  local_248[0] = 2;
  local_208 = 6;
  local_1e8 = 6;
  local_1c8 = 6;
  local_1a8 = 6;
  local_1e4 = 0x6f;
  local_118 = "the sample rate of out data. <required>";
  local_1dc = __ptr + 8;
  local_19c = __ptr + 0x10;
  local_15c = __ptr + 0x1c;
  local_11c = __ptr + 0x18;
  local_fc = __ptr + 0x20;
  local_dc = __ptr + 0x28;
  local_bc = __ptr + 0x2c;
  local_9c = __ptr + 0x34;
  local_7c = __ptr + 0x30;
  local_100 = "out_ch";
  local_f8 = "the channels of out data. <required>";
  local_108 = 4;
  local_e0 = "out_bit";
  local_e8 = 4;
  local_d8 = "the bit width of out data. <required>";
  local_c8 = 4;
  local_c0 = "input_ch_layout";
  local_a8 = 4;
  local_b8 = "the channels layout of input data. <required>";
  local_88 = 4;
  local_a0 = "input_rec_layout";
  local_68 = 4;
  local_98 = "the mic channels layout of input data. <required>";
  local_80 = "input_ref_layout";
  local_78 = "the ref channels layout of input data. <required>";
  local_60 = "loop_count";
  local_58 = "loop running count. can be any count. default(1)";
  local_64 = 0x6e;
  local_1fc = __ptr + 4;
  local_17c = __ptr + 0x14;
  local_13c = __ptr + 0x24;
  local_5c = __ptr;
  argparse_init(auStack_270,local_248,&DAT_0001309c,0);
  argparse_describe(auStack_270,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_270,param_1,param_2);
  mpi_af_test_show_options(__ptr);
  uVar2 = *(undefined4 *)(__ptr + 0x14);
  uVar4 = *(undefined4 *)(__ptr + 0x1c);
  uVar5 = *(undefined4 *)(__ptr + 0xc);
  RK_LOG(4,0x17171700,
         "ctx->srcFilePath : %s, ctx->chAfType: %s, ctx->s32InputRate : %d, ctx->s32InputCh: %d",
         &DAT_00013104,0x1aa,*(undefined4 *)(__ptr + 4),uVar5,uVar2,uVar4);
  if ((((*(int *)(__ptr + 4) == 0) || (*(int *)(__ptr + 0xc) == 0)) || (*(int *)(__ptr + 0x14) < 1))
     || (*(int *)(__ptr + 0x1c) < 1)) {
    argparse_usage(auStack_270);
  }
  else {
    RK_MPI_SYS_Init();
    if (0 < *(int *)__ptr) {
      do {
        RK_LOG(4,0x17171700,"start running loop count  = %d",&DAT_00013104,0x1b6,iVar3,uVar5,uVar2,
               uVar4);
        *(undefined4 *)(__ptr + 0x40) = 1;
        if (8 < *(int *)(__ptr + 0x38)) {
          RK_LOG(2,0x17171700,"af chn(%d) > max_chn(%d)","unit_test_mpi_af",0x137,
                 *(int *)(__ptr + 0x38),8,uVar2,uVar4);
          break;
        }
        iVar1 = FUN_00011fc8(__ptr);
        if (iVar1 != 0) break;
        iVar1 = iVar3 + 1;
        RK_LOG(4,0x17171700,"end running loop count  = %d",&DAT_00013104,0x1bb,iVar3);
        iVar3 = iVar1;
      } while (iVar1 < *(int *)__ptr);
    }
  }
  free(__ptr);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== _start @ 000117bc size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00024030)
            (DAT_000117f0,param_2,&stack0x00000004,DAT_000117f4,DAT_000117ec,param_1);
  return;
}



/* ===== FUN_000117f8 @ 000117f8 size=32 ===== */

void FUN_000117f8(void)

{
  if (DAT_0001181c == DAT_00011818) {
    return;
  }
  if (DAT_00011820 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011820)();
  return;
}



/* ===== _FINI_0 @ 0001185c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011898;
  if (*DAT_00011898 != '\0') {
    return;
  }
  FUN_000117f8();
  if (DAT_0001189c != 0) {
    __deregister_frame_info(DAT_000118a0);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000118a4 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000118c8 != 0) {
    __register_frame_info(DAT_000118d0,DAT_000118cc);
  }
  if ((DAT_00011854 - DAT_00011850 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011858 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001184c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011858)();
  return;
}



/* ===== send_af_thread @ 000118d4 size=564 ===== */

/* send_af_thread(void*) */

undefined4 send_af_thread(void *param_1)

{
  FILE *__stream;
  void *__ptr;
  size_t sVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *local_80;
  size_t sStack_7c;
  undefined4 local_78;
  size_t sStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_68;
  size_t sStack_64;
  uint local_60;
  size_t sStack_5c;
  undefined4 local_58;
  size_t sStack_54;
  void *local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  void *local_2c;
  
  sStack_7c = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_70 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_80 = (undefined4 *)0x0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uVar7 = 0;
  sStack_74 = sStack_7c;
  sStack_64 = sStack_7c;
  sStack_5c = sStack_7c;
  sStack_54 = sStack_7c;
  if (*(char **)((int)param_1 + 4) != (char *)0x0) {
    __stream = fopen64(*(char **)((int)param_1 + 4),"rb");
    if (__stream != (FILE *)0x0) {
      __ptr = calloc(0x400,1);
      sVar5 = 0;
      uVar4 = 0;
      do {
        while( true ) {
          sVar1 = fread(__ptr,1,0x400,__stream);
          iVar6 = *(int *)((int)param_1 + 0x1c);
          sStack_74 = 1;
          local_68 = uVar4;
          sStack_64 = sVar5;
          local_60 = uVar4;
          sStack_5c = sVar1;
          if (iVar6 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
            if (iVar6 != 2) {
              RK_LOG(2,0x17171700,"channel = %d not support","find_af_sound_mode",0x5a,iVar6);
              uVar7 = 9;
            }
          }
          uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = VectorShiftRight(CONCAT44(sVar1,sVar1),0x20);
          local_3c = 0;
          local_58 = 0;
          local_4c = 0;
          local_70 = uVar7;
          local_50 = __ptr;
          uStack_30 = uStack_48;
          local_2c = __ptr;
          RK_MPI_SYS_CreateMB(&local_78,&local_50);
          sStack_7c = 0;
          local_80 = &local_78;
          iVar6 = RK_MPI_AF_SendFrame(*(undefined4 *)((int)param_1 + 0x3c),&local_80,0xffffffff);
          if (iVar6 != 0) break;
          sVar5 = sVar5 + (0xfffffffe < uVar4);
          RK_MPI_MB_ReleaseMB(local_78);
          uVar4 = uVar4 + 1;
          if ((int)sVar1 < 1) goto LAB_00011a34;
        }
        sVar5 = sVar5 + (0xfffffffe < uVar4);
        RK_LOG(2,0x17171700,"send frame error, seq = %d","send_af_thread",0xd8,uVar4);
        RK_MPI_MB_ReleaseMB(local_78);
        uVar4 = uVar4 + 1;
      } while (0 < (int)sVar1);
LAB_00011a34:
      RK_LOG(4,0x17171700,&DAT_00012e14,"send_af_thread",0xde);
      fclose(__stream);
      goto LAB_00011a64;
    }
    uVar7 = *(undefined4 *)((int)param_1 + 4);
  }
  piVar2 = __errno_location();
  __ptr = (void *)0x0;
  pcVar3 = strerror(*piVar2);
  RK_LOG(2,0x17171700,"open save file %s failed because %s.","send_af_thread",0xbc,uVar7,pcVar3);
LAB_00011a64:
  free(__ptr);
  return 0;
}



/* ===== receive_af_thread @ 00011b08 size=576 ===== */

/* receive_af_thread(void*) */

undefined4 receive_af_thread(void *param_1)

{
  FILE *__s;
  int iVar1;
  void *__ptr;
  int *piVar2;
  char *pcVar3;
  size_t __n;
  undefined4 uVar4;
  size_t sVar5;
  void *pvVar6;
  undefined4 *local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_48 = 0;
  local_50 = (undefined4 *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_44 = uStack_4c;
  uStack_34 = uStack_4c;
  uStack_2c = uStack_4c;
  uStack_24 = uStack_4c;
  if (*(char **)((int)param_1 + 8) == (char *)0x0) {
    piVar2 = __errno_location();
    uVar4 = *(undefined4 *)((int)param_1 + 4);
    pcVar3 = strerror(*piVar2);
    RK_LOG(2,0x17171700,"open save file %s failed because %s.","receive_af_thread",0x10b,uVar4,
           pcVar3);
    return 0;
  }
  __s = fopen64(*(char **)((int)param_1 + 8),"wb+");
  if (__s == (FILE *)0x0) {
    piVar2 = __errno_location();
    uVar4 = *(undefined4 *)((int)param_1 + 8);
    pcVar3 = strerror(*piVar2);
    RK_LOG(2,0x17171700,"failed to open output file %s, error: %s.","receive_af_thread",0x105,uVar4,
           pcVar3);
    return 0;
  }
  while( true ) {
    while( true ) {
      local_50 = (undefined4 *)0x0;
      iVar1 = RK_MPI_AF_GetFrame(*(undefined4 *)((int)param_1 + 0x3c),&local_50,0xffffffff);
      if (iVar1 == 0) break;
      RK_LOG(2,0x17171700,"get frame error, seq = %d","receive_af_thread",0x115,0);
    }
    __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_50,0x17171700,"get frame error, seq = %d");
    __n = local_50[7];
    if ((int)__n < 1) break;
    RK_LOG(6,0x17171700,"get frame (size: %d, outdata: %p)","receive_af_thread",0x11a,__n,__ptr);
    fwrite(__ptr,1,__n,__s);
    RK_MPI_AF_ReleaseFrame(*(undefined4 *)((int)param_1 + 0x3c),&local_50);
  }
  sVar5 = __n;
  pvVar6 = __ptr;
  RK_LOG(6,0x17171700,"get frame (size: %d, outdata: %p)","receive_af_thread",0x11a,__n,__ptr);
  if (__n == 0) {
    fwrite(__ptr,1,0,__s);
    RK_MPI_AF_ReleaseFrame(*(undefined4 *)((int)param_1 + 0x3c),&local_50);
  }
  else {
    RK_MPI_AF_ReleaseFrame(*(undefined4 *)((int)param_1 + 0x3c),&local_50);
  }
  RK_LOG(4,0x17171700,"get eos stream.","receive_af_thread",0x122,sVar5,pvVar6);
  fclose(__s);
  return 0;
}



/* ===== test_init_af_resample @ 00011d48 size=352 ===== */

/* test_init_af_resample(_rkTEST_AF_CTX_S*) */

undefined4 test_init_af_resample(_rkTEST_AF_CTX_S *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_130 [4];
  undefined8 local_12c;
  undefined8 local_124;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  
  memset(auStack_130,0,0x124);
  iVar2 = *(int *)(param_1 + 0x24);
  local_12c = 0x200000002;
  local_124 = VectorTranspose(*(undefined8 *)(param_1 + 0x1c),4);
  if (iVar2 == 0x10) {
    local_11c = 1;
  }
  else if (iVar2 == 0x18) {
    local_11c = 2;
  }
  else if (iVar2 == 8) {
    local_11c = 0;
  }
  else {
    RK_LOG(2,0x17171700,"bitwidth(%d) not support","find_af_bit_width",0x49,iVar2);
    local_11c = 5;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  local_118 = *(undefined4 *)(param_1 + 0x18);
  uStack_114 = *(undefined4 *)(param_1 + 0x20);
  if (iVar2 == 0x10) {
    local_110 = 1;
  }
  else if (iVar2 == 0x18) {
    local_110 = 2;
  }
  else if (iVar2 == 8) {
    local_110 = 0;
  }
  else {
    RK_LOG(2,0x17171700,"bitwidth(%d) not support","find_af_bit_width",0x49,iVar2);
    local_110 = 5;
  }
  iVar2 = RK_MPI_AF_Create(*(undefined4 *)(param_1 + 0x3c),auStack_130);
  uVar1 = 0;
  if (iVar2 != 0) {
    RK_LOG(2,0x17171700,"create af chn %d err:0x%x\n","test_init_af_resample",0x73,0,iVar2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== test_init_af_ag @ 00011ea8 size=280 ===== */

/* test_init_af_ag(_rkTEST_AF_CTX_S*) */

undefined4 test_init_af_ag(_rkTEST_AF_CTX_S *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_138;
  undefined4 local_130;
  char acStack_12c [256];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  memset(&local_138,0,0x124);
  uVar2 = 2;
  local_138 = DAT_00011fc0;
  local_130 = 2;
  snprintf(acStack_12c,0x100,"%s",*(undefined4 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x24);
  local_2c = *(undefined4 *)(param_1 + 0x14);
  if (iVar1 == 0x10) {
    uVar2 = 1;
  }
  else if (iVar1 != 0x18) {
    if (iVar1 == 8) {
      uVar2 = 0;
    }
    else {
      RK_LOG(2,0x17171700,"bitwidth(%d) not support","find_af_bit_width",0x49,iVar1);
      uVar2 = 5;
    }
  }
  local_28 = *(undefined4 *)(param_1 + 0x1c);
  local_20 = *(undefined4 *)(param_1 + 0x2c);
  local_18 = *(undefined4 *)(param_1 + 0x34);
  local_1c = *(undefined4 *)(param_1 + 0x30);
  local_24 = uVar2;
  iVar1 = RK_MPI_AF_Create(*(undefined4 *)(param_1 + 0x3c),&local_138);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"create af chn %d err:0x%x\n","test_init_af_ag",0x8c,0,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00011fc8 @ 00011fc8 size=364 ===== */

undefined4 FUN_00011fc8(void *param_1)

{
  pthread_t *__newthread;
  char *pcVar1;
  int iVar2;
  _rkTEST_AF_CTX_S *p_Var3;
  pthread_t *ppVar4;
  _rkTEST_AF_CTX_S *p_Var5;
  char *__haystack;
  pthread_t local_2a8 [7];
  pthread_t pStack_28c;
  pthread_t local_288 [8];
  _rkTEST_AF_CTX_S a_Stack_268 [580];
  
  if (*(int *)((int)param_1 + 0x38) < 1) {
    return 0;
  }
  p_Var5 = a_Stack_268;
  ppVar4 = local_2a8;
  iVar2 = 0;
  p_Var3 = p_Var5;
  do {
    *(int *)(p_Var3 + 0x3c) = iVar2;
    memcpy(a_Stack_268,param_1,0x48);
    __haystack = *(char **)(p_Var3 + 0xc);
    pcVar1 = strstr(__haystack,"resample");
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(__haystack,"3a");
      if (pcVar1 != (char *)0x0) {
        test_init_af_ag(p_Var3);
      }
    }
    else {
      test_init_af_resample(p_Var3);
    }
    pthread_create(ppVar4,(pthread_attr_t *)0x0,send_af_thread,a_Stack_268);
    __newthread = local_288 + iVar2;
    iVar2 = iVar2 + 1;
    pthread_create(__newthread,(pthread_attr_t *)0x0,receive_af_thread,a_Stack_268);
    p_Var3 = p_Var3 + 0x48;
    ppVar4 = ppVar4 + 1;
  } while (iVar2 < *(int *)((int)param_1 + 0x38));
  if (0 < *(int *)((int)param_1 + 0x38)) {
    ppVar4 = &pStack_28c;
    iVar2 = 0;
    do {
      while( true ) {
        pthread_join(local_2a8[iVar2],(void **)0x0);
        ppVar4 = ppVar4 + 1;
        pthread_join(*ppVar4,(void **)0x0);
        if (*(int *)(p_Var5 + 0x44) != 0) break;
        iVar2 = iVar2 + 1;
        p_Var5 = p_Var5 + 0x48;
        if (*(int *)((int)param_1 + 0x38) <= iVar2) {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
      RK_MPI_AF_Destroy(*(undefined4 *)(p_Var5 + 0x3c));
      p_Var5 = p_Var5 + 0x48;
    } while (iVar2 < *(int *)((int)param_1 + 0x38));
  }
  return 0;
}



/* ===== test_init_af @ 00012134 size=92 ===== */

/* test_init_af(_rkTEST_AF_CTX_S*) */

undefined4 test_init_af(_rkTEST_AF_CTX_S *param_1)

{
  char *pcVar1;
  char *__haystack;
  
  __haystack = *(char **)(param_1 + 0xc);
  pcVar1 = strstr(__haystack,"resample");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strstr(__haystack,"3a");
    if (pcVar1 != (char *)0x0) {
      test_init_af_ag(param_1);
      return 0;
    }
  }
  else {
    test_init_af_resample(param_1);
  }
  return 0;
}



/* ===== test_deinit_af @ 00012190 size=40 ===== */

/* test_deinit_af(_rkTEST_AF_CTX_S*) */

undefined4 test_deinit_af(_rkTEST_AF_CTX_S *param_1)

{
  if (*(int *)(param_1 + 0x44) != 0) {
    RK_MPI_AF_Destroy(*(undefined4 *)(param_1 + 0x3c));
    return 0;
  }
  return 0;
}



/* ===== unit_test_mpi_af @ 000121b8 size=96 ===== */

/* unit_test_mpi_af(_rkTEST_AF_CTX_S*) */

undefined4 unit_test_mpi_af(_rkTEST_AF_CTX_S *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x40) = 1;
  if (*(int *)(param_1 + 0x38) < 9) {
    uVar1 = FUN_00011fc8();
    return uVar1;
  }
  RK_LOG(2,0x17171700,"af chn(%d) > max_chn(%d)","unit_test_mpi_af",0x137,*(int *)(param_1 + 0x38),8
        );
  return 0xffffffff;
}



/* ===== mpi_af_test_show_options @ 00012218 size=248 ===== */

/* mpi_af_test_show_options(_rkTEST_AF_CTX_S const*) */

void mpi_af_test_show_options(_rkTEST_AF_CTX_S *param_1)

{
  puts("cmd parse result:");
  printf("loop count            : %d\n",*(undefined4 *)param_1);
  printf("input  file name      : %s\n",*(undefined4 *)(param_1 + 4));
  printf("output file name      : %s\n",*(undefined4 *)(param_1 + 8));
  printf("af type               : %s\n",*(undefined4 *)(param_1 + 0xc));
  printf("af config patch       : %s\n",*(undefined4 *)(param_1 + 0x10));
  printf("input rate            : %d\n",*(undefined4 *)(param_1 + 0x14));
  printf("output rate           : %d\n",*(undefined4 *)(param_1 + 0x18));
  printf("input channel         : %d\n",*(undefined4 *)(param_1 + 0x1c));
  printf("output channel        : %d\n",*(undefined4 *)(param_1 + 0x20));
  printf("input bitwidth        : %d\n",*(undefined4 *)(param_1 + 0x24));
  printf("output bitwidth       : %d\n",*(undefined4 *)(param_1 + 0x28));
  printf("input chnLayout       : %d\n",*(undefined4 *)(param_1 + 0x2c));
  printf("input refLayout      : %d\n",*(undefined4 *)(param_1 + 0x30));
  printf("input recLayout      : %d\n",*(undefined4 *)(param_1 + 0x34));
  return;
}



/* ===== FUN_00012310 @ 00012310 size=64 ===== */

void FUN_00012310(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x35d4;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x35b8;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012350 @ 00012350 size=588 ===== */

undefined4 FUN_00012350(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_00012384_default;
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
    goto LAB_000123c0;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_000123c0:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00012598:
                    /* WARNING: Subroutine does not return */
        FUN_00012310(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_00012580:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00012310(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00012310(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00012598;
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
    if (iVar4 != 0) goto LAB_00012580;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00012310(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00012598;
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
switchD_00012384_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 000125b0 size=48 ===== */

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



/* ===== argparse_describe @ 000125e0 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 000125f4 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_000126ec;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_000126ec:
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
          if (piVar7[2] != 0) goto LAB_000127d0;
LAB_000127e8:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_00012944;
LAB_000127f4:
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
          if (piVar7[2] == 0) goto LAB_000127e8;
          if ((char)piVar7[1] == '\0') {
LAB_000127d0:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_000127e8;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_000127d0;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_000127f4;
LAB_00012944:
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



/* ===== argparse_parse @ 00012a10 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_00012a70;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_00012a70:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00012a7c:
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
            if (piVar11[8] == 0) goto LAB_00012c34;
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
          while (iVar5 = FUN_00012350(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00012bc0;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00012d2c;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00012d2c;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_00012350(param_1);
              if (iVar5 == -2) goto LAB_00012d2c;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00012d2c:
          pcVar10 = *(char **)param_1[6];
          goto LAB_00012c38;
        }
        goto LAB_00012c34;
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
LAB_00012b8c:
                if (*pcVar3 == '\0') goto LAB_00012ba8;
                if (*pcVar3 == '=') goto code_r0x00012ba0;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00012d8c;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00012be0;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00012b8c;
                }
              }
            }
LAB_00012be0:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_00012c38;
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
        goto LAB_00012ab4;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00012ba0:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00012ba8:
  iVar5 = FUN_00012350(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_00012c34:
    pcVar10 = (char *)*__src;
LAB_00012c38:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00012bc0:
  param_2 = param_1[5];
LAB_00012ab4:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00012a7c;
}



/* ===== argparse_help_cb @ 00012d90 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 00012da0 size=16 ===== */

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



/* ===== <EXTERNAL>::__deregister_frame_info @ 00025010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AF_SendFrame @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AF_SendFrame(void)

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



/* ===== <EXTERNAL>::RK_MPI_AF_Create @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AF_Create(void)

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



/* ===== <EXTERNAL>::fputc @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

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



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

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



/* ===== <EXTERNAL>::memmove @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00025074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00025078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 0002507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AF_GetFrame @ 00025080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AF_GetFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00025084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00025088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AF_Destroy @ 00025090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AF_Destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00025094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00025098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000250a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000250a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 000250a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 000250ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AF_ReleaseFrame @ 000250b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AF_ReleaseFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


