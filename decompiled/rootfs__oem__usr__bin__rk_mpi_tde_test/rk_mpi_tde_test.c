// rk_mpi_tde_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001157c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000115a0 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002500c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000115ac size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00025010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc @ 000115b8 size=12 ===== */

void RK_MPI_SYS_MmzAlloc(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzAlloc_00025014)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000115c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00025018)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetSize @ 000115d0 size=12 ===== */

void RK_MPI_MB_GetSize(void)

{
  (*(code *)PTR_RK_MPI_MB_GetSize_0002501c)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_QuickFill @ 000115dc size=12 ===== */

void RK_TDE_QuickFill(void)

{
  (*(code *)PTR_RK_TDE_QuickFill_00025020)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 000115e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00025024)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000115f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00025028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_TDE_Open @ 00011600 size=12 ===== */

void RK_TDE_Open(void)

{
  (*(code *)PTR_RK_TDE_Open_0002502c)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 0001160c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00025030)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00011624 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00025038)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_TDE_QuickCopy @ 00011630 size=12 ===== */

void RK_TDE_QuickCopy(void)

{
  (*(code *)PTR_RK_TDE_QuickCopy_0002503c)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 0001163c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00025040)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 00011648 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00025044)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011654 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00025048)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_TDE_Rotate @ 00011660 size=12 ===== */

void RK_TDE_Rotate(void)

{
  (*(code *)PTR_RK_TDE_Rotate_0002504c)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0001166c size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00025050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011678 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00025054)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011684 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00025058)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011690 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002505c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 0001169c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00025060)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 000116a8 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00025064)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_EndJob @ 000116b4 size=12 ===== */

void RK_TDE_EndJob(void)

{
  (*(code *)PTR_RK_TDE_EndJob_00025068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 000116c0 size=12 ===== */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
  (*(code *)PTR_RK_MPI_CAL_COMM_GetHorStride_0002506c)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 000116cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00025070)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_TDE_WaitForDone @ 000116d8 size=12 ===== */

void RK_TDE_WaitForDone(void)

{
  (*(code *)PTR_RK_TDE_WaitForDone_00025074)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 000116e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00025078)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_TDE_Bitblit @ 000116f0 size=12 ===== */

void RK_TDE_Bitblit(void)

{
  (*(code *)PTR_RK_TDE_Bitblit_0002507c)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 000116fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00025080)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011708 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00025084)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011714 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00025088)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_SetBufferStride @ 00011720 size=12 ===== */

void RK_MPI_MB_SetBufferStride(void)

{
  (*(code *)PTR_RK_MPI_MB_SetBufferStride_0002508c)();
  return;
}



/* ===== <EXTERNAL>::strtof @ 0001172c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_00025090)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::abort @ 00011738 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00025094)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_BeginJob @ 00011744 size=12 ===== */

void RK_TDE_BeginJob(void)

{
  (*(code *)PTR_RK_TDE_BeginJob_00025098)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00011750 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_0002509c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 0001175c size=12 ===== */

void RK_MPI_SYS_Free(void)

{
  (*(code *)PTR_RK_MPI_SYS_Free_000250a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00011768 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_000250a4)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00011774 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_000250a8)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_TDE_QuickResize @ 00011780 size=12 ===== */

void RK_TDE_QuickResize(void)

{
  (*(code *)PTR_RK_TDE_QuickResize_000250ac)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 0001178c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000250b0)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00011798 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000250b4)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 000117a4 size=12 ===== */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_TDE_GetPicBufferSize_000250b8)();
  return;
}



/* ===== <EXTERNAL>::puts @ 000117b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000250bc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_TDE_CancelJob @ 000117bc size=12 ===== */

void RK_TDE_CancelJob(void)

{
  (*(code *)PTR_RK_TDE_CancelJob_000250c0)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_Close @ 000117c8 size=12 ===== */

void RK_TDE_Close(void)

{
  (*(code *)PTR_RK_TDE_Close_000250c4)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000117d4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000250c8)();
  return;
}



/* ===== main @ 000117e0 size=1884 ===== */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_47c [40];
  int local_454;
  undefined4 local_450;
  int local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined1 auStack_440 [4];
  undefined4 local_43c [2];
  undefined4 local_434;
  int local_430;
  int local_42c [3];
  undefined4 local_420;
  int local_41c;
  int local_418 [2];
  undefined1 auStack_410 [4];
  undefined1 auStack_40c [4];
  undefined1 auStack_408 [4];
  undefined1 auStack_404 [4];
  undefined1 auStack_400 [4];
  undefined1 auStack_3fc [4];
  undefined1 auStack_3f8 [4];
  undefined1 auStack_3f4 [4];
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined1 auStack_3e0 [4];
  undefined1 auStack_3dc [4];
  undefined4 local_3d8 [2];
  undefined *local_3d0;
  char *local_3c8;
  code *local_3c4;
  undefined4 local_3bc;
  undefined4 local_3b8;
  char *local_3a8;
  undefined4 local_398;
  undefined1 local_394;
  char *local_390;
  _rkMpiTdeCtx *local_38c;
  char *local_388;
  undefined4 local_378;
  undefined1 local_374;
  char *local_370;
  int *local_36c;
  char *local_368;
  undefined4 local_358;
  undefined1 local_354;
  char *local_350;
  int *local_34c;
  char *local_348;
  undefined4 local_338;
  char *local_330;
  undefined4 *local_32c;
  char *local_328;
  undefined4 local_318;
  char *local_310;
  undefined4 *local_30c;
  char *local_308;
  undefined4 local_2f8;
  char *local_2f0;
  undefined4 *local_2ec;
  char *local_2e8;
  undefined4 local_2d8;
  undefined1 local_2d4;
  char *local_2d0;
  int *local_2cc;
  char *local_2c8;
  undefined4 local_2b8;
  undefined1 local_2b4;
  char *local_2b0;
  int *local_2ac;
  char *local_2a8;
  undefined4 local_298;
  char *local_290;
  undefined4 *local_28c;
  char *local_288;
  undefined4 local_278;
  undefined1 local_274;
  char *local_270;
  undefined4 *local_26c;
  char *local_268;
  undefined4 local_258;
  undefined1 local_254;
  char *local_250;
  int *local_24c;
  char *local_248;
  undefined4 local_238;
  undefined1 local_234;
  char *local_230;
  undefined4 *local_22c;
  char *local_228;
  undefined4 local_218;
  undefined1 local_214;
  char *local_210;
  undefined4 *local_20c;
  char *local_208;
  undefined4 local_1f8;
  undefined1 local_1f4;
  char *local_1f0;
  undefined4 *local_1ec;
  char *local_1e8;
  undefined4 local_1d8;
  undefined1 local_1d4;
  char *local_1d0;
  undefined4 *local_1cc;
  char *local_1c8;
  undefined4 local_1b8;
  undefined1 local_1b4;
  char *local_1b0;
  undefined4 *local_1ac;
  char *local_1a8;
  undefined4 local_198;
  char *local_190;
  undefined1 *local_18c;
  char *local_188;
  undefined4 local_178;
  char *local_170;
  undefined1 *local_16c;
  char *local_168;
  undefined4 local_158;
  char *local_150;
  undefined1 *local_14c;
  char *local_148;
  undefined4 local_138;
  char *local_130;
  undefined1 *local_12c;
  char *local_128;
  undefined4 local_118;
  char *local_110;
  undefined1 *local_10c;
  char *local_108;
  undefined4 local_f8;
  char *local_f0;
  undefined1 *local_ec;
  char *local_e8;
  undefined4 local_d8;
  char *local_d0;
  undefined1 *local_cc;
  char *local_c8;
  undefined4 local_b8;
  char *local_b0;
  undefined1 *local_ac;
  char *local_a8;
  undefined4 local_98;
  undefined1 local_94;
  char *local_90;
  undefined1 *local_8c;
  char *local_88;
  undefined4 local_78;
  undefined1 local_74;
  char *local_70;
  undefined1 *local_6c;
  char *local_68;
  undefined4 local_58;
  undefined1 local_54;
  char *local_50;
  undefined1 *local_4c;
  char *local_48;
  
  memset((_rkMpiTdeCtx *)&local_454,0,0x7c);
  local_44c = 1;
  local_448 = 1;
  local_444 = 1;
  memset(local_3d8,0,0x3c0);
  local_3d0 = &DAT_00013cd8;
  local_3c8 = "show this help message and exit";
  local_3c4 = argparse_help_cb;
  local_3a8 = "basic options:";
  local_390 = "input";
  local_388 = "input file name. e.g.(/userdata/1080p.nv12). <required>";
  local_370 = "src_width";
  local_368 = "src width. e.g.(1920). <required>";
  local_350 = "src_height";
  local_348 = "src height. e.g.(1080). <required>";
  local_330 = "src_vir_width";
  local_328 = "src vir width. e.g.(1920).";
  local_310 = "src_vir_height";
  local_308 = "src vir height. e.g.(1080).";
  local_2f0 = "src_compress";
  local_2e8 = "src compress mode. e.g.(1).";
  local_2d0 = "dst_width";
  local_2c8 = "dst width. e.g.(1920). <required>";
  local_3d8[0] = 2;
  local_394 = 0x69;
  local_374 = 0x77;
  local_354 = 0x68;
  local_2d4 = 0x57;
  local_378 = 4;
  local_398 = 6;
  local_358 = 4;
  local_338 = 4;
  local_318 = 4;
  local_2f8 = 4;
  local_2d8 = 4;
  local_3bc = 1;
  local_3b8 = 1;
  local_2b8 = 4;
  local_278 = 6;
  local_298 = 4;
  local_258 = 4;
  local_238 = 4;
  local_218 = 4;
  local_1f8 = 4;
  local_1d8 = 4;
  local_1b8 = 4;
  local_2b0 = "dst_height";
  local_2a8 = "dst height. e.g.(1080). <required>";
  local_290 = "dst_compress";
  local_288 = "dst compress mode. e.g.(1).";
  local_270 = "output";
  local_268 = "output file path. e.g.(/userdata/tde/). default(NULL).";
  local_250 = "loop_count";
  local_248 = "loop running count. can be any count. default(1)";
  local_230 = "job_number";
  local_228 = "the job number of vgs. default(1).";
  local_210 = "task_number";
  local_208 = "the task number of one job. default(1).";
  local_1f0 = "src_format";
  local_1e8 = "src pixel format. default(0. 0 is NV12).";
  local_1d0 = "dst_format";
  local_1c8 = "dst pixel format. default(0. 0 is NV12).";
  local_2b4 = 0x48;
  local_274 = 0x6f;
  local_254 = 0x6e;
  local_234 = 0x6a;
  local_214 = 0x74;
  local_1f4 = 0x66;
  local_1d4 = 0x46;
  local_1b4 = 0x70;
  local_1b0 = "operation";
  local_198 = 4;
  local_178 = 4;
  local_158 = 4;
  local_138 = 4;
  local_118 = 4;
  local_f8 = 4;
  local_d8 = 4;
  local_b8 = 4;
  local_98 = 4;
  local_78 = 4;
  local_1a8 = 
  "operation type. default(0).\n\t\t\t\t\t0: quick copy.\n\t\t\t\t\t1: quick resize.\n\t\t\t\t\t2: quick fill.\n\t\t\t\t\t3: rotation.\n\t\t\t\t\t4: mirror and flip.\n\t\t\t\t\t5: colorkey."
  ;
  local_190 = "src_rect_x";
  local_188 = "src rect x. default(0).";
  local_170 = "src_rect_y";
  local_168 = "src rect y. default(0).";
  local_150 = "src_rect_w";
  local_148 = "src rect width. default(src_width).";
  local_130 = "src_rect_h";
  local_128 = "src rect height. default(src_height).";
  local_110 = "dst_rect_x";
  local_108 = "dst rect x. default(0).";
  local_f0 = "dst_rect_y";
  local_e8 = "dst rect y. default(0).";
  local_d0 = "dst_rect_w";
  local_c8 = "dst rect width. default(dst_width).";
  local_b0 = "dst_rect_h";
  local_a8 = "dst rect height. default(dst_height).";
  local_90 = "fill color";
  local_88 = "fill color. default(0).";
  local_70 = "rotation";
  local_94 = 99;
  local_74 = 0x72;
  local_68 = "rotation angle. default(0). 0: 0. 1: 90. 2: 180. 3: 270";
  local_58 = 4;
  local_36c = local_42c;
  local_34c = &local_430;
  local_2ac = &local_41c;
  local_26c = &local_450;
  local_24c = &local_44c;
  local_20c = &local_444;
  local_1ec = &local_434;
  local_1cc = &local_420;
  local_1ac = local_43c;
  local_6c = auStack_440;
  local_50 = "mirror";
  local_48 = "mirror or flip. default(0). 0: none. 1: flip. 2: mirror. 3: both";
  local_54 = 0x6d;
  local_32c = &local_3f0;
  local_30c = &local_3ec;
  local_2ec = &local_3e8;
  local_2cc = local_418;
  local_28c = &local_3e4;
  local_18c = auStack_410;
  local_16c = auStack_40c;
  local_14c = auStack_408;
  local_12c = auStack_404;
  local_10c = auStack_400;
  local_ec = auStack_3fc;
  local_cc = auStack_3f8;
  local_ac = auStack_3f4;
  local_8c = auStack_3e0;
  local_4c = auStack_3dc;
  local_38c = (_rkMpiTdeCtx *)&local_454;
  local_22c = &local_448;
  argparse_init(auStack_47c,local_3d8,&DAT_00013c4c,0);
  argparse_describe(auStack_47c,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_47c,param_1,param_2);
  test_tde_set_default_paramter((_rkMpiTdeCtx *)&local_454);
  puts("cmd parse result: ");
  printf("input  file name       : %s\n",local_454);
  printf("output file name       : %s\n",local_450);
  printf("loop count             : %d\n",local_44c);
  printf("job number             : %d\n",local_448);
  printf("task number            : %d\n",local_444);
  printf("input width            : %d\n",local_42c[0]);
  printf("input height           : %d\n",local_430);
  printf("input vir width        : %d\n",local_3f0);
  printf("input vir height       : %d\n",local_3ec);
  printf("src compress mode      : %d\n",local_3e8);
  printf("dst compress mode      : %d\n",local_3e4);
  printf("input pixel format     : %d\n",local_434);
  printf("output width           : %d\n",local_418[0]);
  printf("output height          : %d\n",local_41c);
  printf("output pixel format    : %d\n",local_420);
  printf("operation type         : %d\n",local_43c[0]);
  if ((((local_454 == 0) || (local_42c[0] == 0)) || (local_430 == 0)) ||
     ((local_418[0] == 0 || (local_41c == 0)))) {
    argparse_usage(auStack_47c);
  }
  else {
    iVar1 = RK_MPI_SYS_Init();
    if ((iVar1 == 0) && (iVar1 = RK_TDE_Open(), iVar1 == 0)) {
      if (0 < local_44c) {
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 1;
          iVar2 = test_tde_job((_rkMpiTdeCtx *)&local_454);
          if (iVar2 != 0) goto LAB_00011ebc;
          RK_LOG(4,0x17171700,"Running mpi tde test loop count %d.","unit_test_mpi_tde",0x1a1,iVar1)
          ;
        } while (iVar1 < local_44c);
      }
      RK_TDE_Close();
      iVar1 = RK_MPI_SYS_Exit();
      if (iVar1 == 0) {
        RK_LOG(4,0x17171700,"test running ok!",&DAT_00013cd0,0x247);
        return 0;
      }
    }
  }
LAB_00011ebc:
  RK_LOG(4,0x17171700,"test runnning failed!",&DAT_00013cd0,0x24a);
  return 0xffffffff;
}



/* ===== _start @ 00011f3c size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00025034)
            (DAT_00011f70,param_2,&stack0x00000004,DAT_00011f74,DAT_00011f6c,param_1);
  return;
}



/* ===== FUN_00011f78 @ 00011f78 size=32 ===== */

void FUN_00011f78(void)

{
  if (DAT_00011f9c == DAT_00011f98) {
    return;
  }
  if (DAT_00011fa0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011fa0)();
  return;
}



/* ===== _FINI_0 @ 00011fdc size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00012018;
  if (*DAT_00012018 != '\0') {
    return;
  }
  FUN_00011f78();
  if (DAT_0001201c != 0) {
    __deregister_frame_info(DAT_00012020);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00012024 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00012048 != 0) {
    __register_frame_info(DAT_00012050,DAT_0001204c);
  }
  if ((DAT_00011fd4 - DAT_00011fd0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011fd8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011fd8)();
  return;
}



/* ===== test_tde_save_result @ 00012054 size=504 ===== */

/* test_tde_save_result(_rkMpiTdeCtx*, rkTDE_SURFACE_S*, int) */

int test_tde_save_result(_rkMpiTdeCtx *param_1,rkTDE_SURFACE_S *param_2,int param_3)

{
  void *__ptr;
  int iVar1;
  FILE *__s;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  size_t local_434 [3];
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  char acStack_418 [1024];
  
  memset(acStack_418,0,0x400);
  uVar4 = *(undefined4 *)param_2;
  __ptr = (void *)RK_MPI_MB_Handle2VirAddr(uVar4);
  local_424 = *(undefined4 *)(param_1 + 0x38);
  local_428 = *(undefined4 *)(param_1 + 0x3c);
  uStack_41c = *(undefined4 *)(param_1 + 0x70);
  local_420 = *(undefined4 *)(param_1 + 0x34);
  iVar1 = RK_MPI_CAL_TDE_GetPicBufferSize(&local_428,local_434);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"get picture buffer size failed. err 0x%x","test_tde_save_result",100,iVar1)
    ;
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) && ((iVar1 != 4 && (iVar1 != 5)))) {
    uVar5 = 0;
    goto LAB_000120f8;
  }
  uVar5 = *(undefined4 *)(&DAT_00013c20 + iVar1 * 8);
LAB_000120f8:
  snprintf(acStack_418,0x400,"%s%s_%dx%d_%d.bin",*(undefined4 *)(param_1 + 4),uVar5,local_428,
           local_424,param_3);
  __s = fopen64(acStack_418,"wb+");
  if (__s == (FILE *)0x0) {
    piVar2 = __errno_location();
    iVar1 = -1;
    pcVar3 = strerror(*piVar2);
    RK_LOG(2,0x17171700,"open path %s failed because %s.","test_tde_save_result",0x6e,acStack_418,
           pcVar3);
  }
  else {
    if (__ptr != (void *)0x0) {
      RK_LOG(4,0x17171700,"get frame:%p, size:%d, bBlk:%p","test_tde_save_result",0x73,__ptr,
             local_434[0],uVar4);
      RK_MPI_SYS_MmzFlushCache(uVar4,1);
      fwrite(__ptr,1,local_434[0],__s);
      fflush(__s);
    }
    fclose(__s);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== unit_test_tde_get_size @ 0001224c size=140 ===== */

/* unit_test_tde_get_size(_rkMpiTdeCtx*, unsigned int*) */

int unit_test_tde_get_size(_rkMpiTdeCtx *param_1,uint *param_2)

{
  int iVar1;
  uint local_2c [3];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_1c = *(undefined4 *)(param_1 + 0x24);
  local_20 = *(undefined4 *)(param_1 + 0x28);
  local_18 = *(undefined4 *)(param_1 + 0x20);
  uStack_14 = *(undefined4 *)(param_1 + 0x6c);
  iVar1 = RK_MPI_CAL_TDE_GetPicBufferSize(&local_20,local_2c);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"get picture buffer size failed. err 0x%x","unit_test_tde_get_size",0x89,
           iVar1);
    return iVar1;
  }
  *param_2 = local_2c[0];
  return 0;
}



/* ===== test_tde_read_file @ 000122d8 size=156 ===== */

/* test_tde_read_file(char const*, void*, unsigned int) */

undefined4 test_tde_read_file(char *param_1,void *param_2,uint param_3)

{
  FILE *__stream;
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  
  __stream = fopen64(param_1,"rb+");
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    RK_LOG(2,0x17171700,"open path %s failed because %s.","test_tde_read_file",0x97,param_1,pcVar3);
    uVar1 = 0xffffffff;
  }
  else {
    fread(param_2,1,param_3,__stream);
    fflush(__stream);
    fclose(__stream);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== test_tde_fill_src @ 00012374 size=64 ===== */

/* test_tde_fill_src(_rkMpiTdeCtx*, rkTDE_SURFACE_S*, rkTDE_RECT_S*) */

undefined4 test_tde_fill_src(_rkMpiTdeCtx *param_1,rkTDE_SURFACE_S *param_2,rkTDE_RECT_S *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0xc) = uVar4;
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_3 + 4) = uVar3;
  *(undefined4 *)(param_3 + 8) = uVar1;
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  return 0;
}



/* ===== test_tde_fill_dst @ 000123b4 size=64 ===== */

/* test_tde_fill_dst(_rkMpiTdeCtx*, rkTDE_SURFACE_S*, rkTDE_RECT_S*) */

undefined4 test_tde_fill_dst(_rkMpiTdeCtx *param_1,rkTDE_SURFACE_S *param_2,rkTDE_RECT_S *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(param_2 + 0xc) = uVar4;
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_3 + 4) = uVar3;
  *(undefined4 *)(param_3 + 8) = uVar1;
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  return 0;
}



/* ===== test_tde_quick_copy_resize_rotate_task @ 000123f4 size=104 ===== */

/* test_tde_quick_copy_resize_rotate_task(_rkMpiTdeCtx*, rkTDE_SURFACE_S*, rkTDE_RECT_S*,
   rkTDE_SURFACE_S*, rkTDE_RECT_S*) */

undefined4
test_tde_quick_copy_resize_rotate_task
          (_rkMpiTdeCtx *param_1,rkTDE_SURFACE_S *param_2,rkTDE_RECT_S *param_3,
          rkTDE_SURFACE_S *param_4,rkTDE_RECT_S *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0xc) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)param_3 = uVar3;
  *(undefined4 *)(param_3 + 8) = uVar1;
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(param_4 + 0xc) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_5 + 8) = uVar1;
  *(undefined4 *)(param_5 + 0xc) = uVar2;
  *(undefined4 *)param_5 = uVar3;
  return 0;
}



/* ===== test_tde_quick_fill_task @ 0001245c size=108 ===== */

/* test_tde_quick_fill_task(_rkMpiTdeCtx*, rkTDE_SURFACE_S*, rkTDE_SURFACE_S*, rkTDE_RECT_S*) */

undefined4
test_tde_quick_fill_task
          (_rkMpiTdeCtx *param_1,rkTDE_SURFACE_S *param_2,rkTDE_SURFACE_S *param_3,
          rkTDE_RECT_S *param_4)

{
  undefined4 uVar1;
  void *__dest;
  void *__src;
  size_t __n;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(param_3 + 0xc) = uVar5;
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  uVar1 = *(undefined4 *)param_3;
  *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)param_4 = uVar3;
  *(undefined4 *)(param_4 + 4) = uVar4;
  *(undefined4 *)(param_4 + 0xc) = uVar2;
  __dest = (void *)RK_MPI_MB_Handle2VirAddr(uVar1);
  __src = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)param_2);
  __n = RK_MPI_MB_GetSize(*(undefined4 *)param_2);
  memcpy(__dest,__src,__n);
  return 0;
}



/* ===== test_tde_bit_blit_task @ 000124c8 size=276 ===== */

/* test_tde_bit_blit_task(_rkMpiTdeCtx*, rkTDE_SURFACE_S*, rkTDE_RECT_S*, rkTDE_SURFACE_S*,
   rkTDE_RECT_S*, rkTDE_OPT_S*, int) */

undefined4
test_tde_bit_blit_task
          (_rkMpiTdeCtx *param_1,rkTDE_SURFACE_S *param_2,rkTDE_RECT_S *param_3,
          rkTDE_SURFACE_S *param_4,rkTDE_RECT_S *param_5,rkTDE_OPT_S *param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_7 == 4) {
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_6 + 8) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_6 + 0xc) = uVar2;
    *(undefined4 *)(param_6 + 0x10) = uVar4;
    *(undefined4 *)(param_6 + 0x14) = uVar3;
    *(undefined4 *)(param_6 + 0x18) = uVar1;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_2 + 0xc) = uVar5;
    *(undefined4 *)param_3 = uVar2;
    *(undefined4 *)(param_3 + 4) = uVar4;
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar1;
    uVar5 = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(param_4 + 0xc) = uVar5;
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    uVar4 = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)param_5 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_5 + 4) = uVar1;
    *(undefined4 *)(param_5 + 8) = uVar3;
    *(undefined4 *)(param_5 + 0xc) = uVar4;
    return 0;
  }
  if (param_7 != 5) {
    return 0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0xc) = uVar5;
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)param_3 = uVar4;
  *(undefined4 *)(param_3 + 8) = uVar3;
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  uVar5 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(param_4 + 0xc) = uVar5;
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  uVar3 = *(undefined4 *)(param_1 + 0x60);
  uVar4 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)param_5 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_5 + 4) = uVar2;
  *(undefined4 *)(param_5 + 8) = uVar1;
  *(undefined4 *)(param_5 + 0xc) = uVar3;
  *(undefined4 *)(param_6 + 4) = uVar4;
  *(undefined4 *)(param_6 + 0x1c) = 0xff;
  return 0;
}



/* ===== test_tde_add_task @ 000125dc size=704 ===== */

/* test_tde_add_task(_rkMpiTdeCtx*, int, rkTDE_SURFACE_S*, rkTDE_RECT_S*, rkTDE_SURFACE_S*,
   rkTDE_RECT_S*) */

undefined4
test_tde_add_task(_rkMpiTdeCtx *param_1,int param_2,rkTDE_SURFACE_S *param_3,rkTDE_RECT_S *param_4,
                 rkTDE_SURFACE_S *param_5,rkTDE_RECT_S *param_6)

{
  int iVar1;
  void *__dest;
  void *__src;
  size_t __n;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  local_40 = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x74);
  local_30 = 0;
  local_28 = 0;
  uStack_2c = uStack_3c;
  uStack_24 = uStack_3c;
  switch(iVar1) {
  case 0:
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 0xc) = uVar5;
    *(undefined4 *)(param_3 + 0x10) = uVar3;
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_4 + 4) = uVar3;
    *(undefined4 *)(param_4 + 8) = uVar2;
    *(undefined4 *)(param_4 + 0xc) = uVar5;
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_5 + 8) = uVar2;
    *(undefined4 *)(param_5 + 0xc) = uVar5;
    *(undefined4 *)(param_5 + 0x10) = uVar3;
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    uVar5 = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)param_6 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_6 + 4) = uVar2;
    *(undefined4 *)(param_6 + 8) = uVar3;
    *(undefined4 *)(param_6 + 0xc) = uVar5;
    iVar1 = RK_TDE_QuickCopy(param_2,param_3,param_4,param_5,param_6);
    break;
  case 1:
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 0xc) = uVar5;
    *(undefined4 *)(param_3 + 0x10) = uVar3;
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_4 + 4) = uVar3;
    *(undefined4 *)(param_4 + 8) = uVar2;
    *(undefined4 *)(param_4 + 0xc) = uVar5;
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_5 + 8) = uVar2;
    *(undefined4 *)(param_5 + 0xc) = uVar5;
    *(undefined4 *)(param_5 + 0x10) = uVar3;
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    uVar5 = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)param_6 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_6 + 4) = uVar2;
    *(undefined4 *)(param_6 + 8) = uVar3;
    *(undefined4 *)(param_6 + 0xc) = uVar5;
    iVar1 = RK_TDE_QuickResize(param_2,param_3,param_4,param_5,param_6);
    break;
  case 2:
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_5 + 8) = uVar2;
    *(undefined4 *)(param_5 + 0xc) = uVar3;
    *(undefined4 *)(param_5 + 0x10) = uVar4;
    uVar4 = *(undefined4 *)(param_1 + 0x60);
    uVar2 = *(undefined4 *)(param_1 + 0x54);
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_6 + 8) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_6 + 0xc) = uVar4;
    *(undefined4 *)param_6 = uVar2;
    *(undefined4 *)(param_6 + 4) = uVar3;
    __dest = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)param_5);
    __src = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)param_3);
    __n = RK_MPI_MB_GetSize(*(undefined4 *)param_3);
    memcpy(__dest,__src,__n);
    iVar1 = RK_TDE_QuickFill(param_2,param_5,param_6,uVar5);
    break;
  case 3:
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_3 + 8) = uVar5;
    *(undefined4 *)(param_3 + 0xc) = uVar3;
    *(undefined4 *)(param_3 + 0x10) = uVar4;
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_4 + 4) = uVar4;
    *(undefined4 *)(param_4 + 8) = uVar5;
    *(undefined4 *)(param_4 + 0xc) = uVar3;
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_5 + 8) = uVar5;
    *(undefined4 *)(param_5 + 0xc) = uVar3;
    *(undefined4 *)(param_5 + 0x10) = uVar4;
    uVar5 = *(undefined4 *)(param_1 + 0x58);
    uVar4 = *(undefined4 *)(param_1 + 0x5c);
    uVar3 = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)param_6 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_6 + 4) = uVar5;
    *(undefined4 *)(param_6 + 8) = uVar4;
    *(undefined4 *)(param_6 + 0xc) = uVar3;
    iVar1 = RK_TDE_Rotate(param_2,param_3,param_4,param_5,param_6,uVar2);
    break;
  case 4:
  case 5:
    test_tde_bit_blit_task(param_1,param_3,param_4,param_5,param_6,(rkTDE_OPT_S *)&local_40,iVar1);
    iVar1 = RK_TDE_Bitblit(param_2,param_5,param_6,param_3,param_4,param_5,param_6,&local_40);
    break;
  default:
    RK_LOG(2,0x17171700,"unknown operation type %d","test_tde_add_task",0x115,iVar1);
    return 0;
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_TDE_CancelJob(param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== test_tde_load_src_file @ 000128b4 size=372 ===== */

/* test_tde_load_src_file(_rkMpiTdeCtx*, void**) */

int test_tde_load_src_file(_rkMpiTdeCtx *param_1,void **param_2)

{
  int iVar1;
  void *__ptr;
  FILE *__stream;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  void *pvVar5;
  char *__filename;
  size_t local_3c [3];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_30 = *(undefined4 *)(param_1 + 0x28);
  local_2c = *(undefined4 *)(param_1 + 0x24);
  local_28 = *(undefined4 *)(param_1 + 0x20);
  uStack_24 = *(undefined4 *)(param_1 + 0x6c);
  iVar1 = RK_MPI_CAL_TDE_GetPicBufferSize(&local_30,local_3c);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_SYS_MmzAlloc(param_2,0,0,local_3c[0]);
    if (iVar1 == 0) {
      pvVar5 = *param_2;
      __ptr = (void *)RK_MPI_MB_Handle2VirAddr(pvVar5);
      __filename = *(char **)param_1;
      __stream = fopen64(__filename,"rb+");
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar1 = -1;
        pcVar4 = strerror(*piVar3);
        RK_LOG(2,0x17171700,"open path %s failed because %s.","test_tde_read_file",0x97,__filename,
               pcVar4);
      }
      else {
        fread(__ptr,1,local_3c[0],__stream);
        fflush(__stream);
        fclose(__stream);
        RK_MPI_SYS_MmzFlushCache(pvVar5,0);
        uVar2 = RK_MPI_CAL_COMM_GetHorStride
                          (*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x20));
        if (*(int *)(param_1 + 0x6c) != 1) {
          iVar1 = RK_MPI_MB_SetBufferStride(pvVar5,uVar2,*(undefined4 *)(param_1 + 0x68));
        }
      }
    }
    return iVar1;
  }
  RK_LOG(2,0x17171700,"get picture buffer size failed. err 0x%x","unit_test_tde_get_size",0x89,iVar1
        );
  return iVar1;
}



/* ===== test_tde_create_dstBlk @ 00012a28 size=96 ===== */

/* test_tde_create_dstBlk(_rkMpiTdeCtx*, void**) */

int test_tde_create_dstBlk(_rkMpiTdeCtx *param_1,void **param_2)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_14 = *(undefined4 *)(param_1 + 0x38);
  local_10 = *(undefined4 *)(param_1 + 0x34);
  local_18 = *(undefined4 *)(param_1 + 0x3c);
  uStack_c = *(undefined4 *)(param_1 + 0x70);
  iVar1 = RK_MPI_CAL_TDE_GetPicBufferSize(&local_18,local_24);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_SYS_MmzAlloc(param_2,0,0,local_24[0]);
  }
  return iVar1;
}



/* ===== test_tde_job @ 00012a88 size=1268 ===== */

/* test_tde_job(_rkMpiTdeCtx*) */

int test_tde_job(_rkMpiTdeCtx *param_1)

{
  int iVar1;
  int iVar2;
  void *__dest;
  void *__src;
  size_t __n;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  rkTDE_RECT_S *prVar6;
  rkTDE_RECT_S *prVar7;
  rkTDE_SURFACE_S *prVar8;
  rkTDE_SURFACE_S *prVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int local_38b4;
  int local_38a8;
  void *local_38a0;
  int local_389c;
  undefined4 local_3898;
  undefined4 uStack_3894;
  undefined4 uStack_3890;
  undefined4 uStack_388c;
  undefined4 local_3888;
  undefined4 uStack_3884;
  undefined4 local_3880;
  undefined4 uStack_387c;
  rkTDE_RECT_S arStack_3878 [4];
  undefined4 auStack_3874 [799];
  rkTDE_RECT_S arStack_2bf8 [4];
  undefined4 auStack_2bf4 [799];
  undefined4 local_1f78;
  undefined8 auStack_1f74 [499];
  undefined4 local_fd8;
  undefined4 local_fd4;
  undefined4 local_fd0;
  undefined4 local_fcc;
  
  local_38a0 = (void *)0x0;
  local_389c = 0;
  local_38b4 = test_tde_load_src_file(param_1,&local_38a0);
  if (local_38b4 == 0) {
    local_fd8 = *(undefined4 *)(param_1 + 0x3c);
    local_fd0 = *(undefined4 *)(param_1 + 0x34);
    local_fd4 = *(undefined4 *)(param_1 + 0x38);
    local_fcc = *(undefined4 *)(param_1 + 0x70);
    local_38b4 = RK_MPI_CAL_TDE_GetPicBufferSize(&local_fd8,&local_1f78);
    if ((local_38b4 == 0) &&
       (iVar1 = RK_MPI_SYS_MmzAlloc(&local_389c,0,0,local_1f78), local_38b4 = iVar1, iVar1 == 0)) {
      if (0 < *(int *)(param_1 + 0xc)) {
        local_38a8 = 0;
        do {
          iVar2 = RK_TDE_BeginJob();
          if (iVar2 == -0x5ff17fff) {
            RK_LOG(2,0x17171700,"start job fail","test_tde_job",0x16e);
            local_38b4 = iVar1;
            goto LAB_00012abc;
          }
          if (*(int *)(param_1 + 0x10) != 0) {
            uVar15 = 0;
            uVar16 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uVar17 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uVar18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            puVar10 = auStack_1f74;
            prVar6 = arStack_2bf8;
            prVar8 = (rkTDE_SURFACE_S *)&local_fd8;
            prVar7 = arStack_3878;
            uVar11 = 0;
            do {
              uVar3 = *(undefined4 *)(param_1 + 0x74);
              iVar4 = *(int *)(param_1 + 0x18);
              prVar9 = (rkTDE_SURFACE_S *)((int)puVar10 + -4);
              *(void **)prVar9 = local_38a0;
              *(int *)prVar8 = local_389c;
              local_3898 = uVar15;
              uStack_3894 = uVar16;
              uStack_3890 = uVar17;
              uStack_388c = uVar18;
              local_3888 = uVar15;
              uStack_3884 = uVar16;
              local_3880 = uVar15;
              uStack_387c = uVar16;
              switch(iVar4) {
              case 0:
                uVar13 = *(undefined4 *)(param_1 + 0x44);
                uVar21 = *(undefined8 *)(param_1 + 0x20);
                uVar22 = *(undefined8 *)(param_1 + 0x28);
                uVar3 = *(undefined4 *)(param_1 + 0x48);
                uVar19 = *(undefined8 *)(param_1 + 0x34);
                uVar20 = *(undefined8 *)(param_1 + 0x3c);
                uVar5 = *(undefined4 *)(param_1 + 0x50);
                *(undefined4 *)(prVar7 + 8) = *(undefined4 *)(param_1 + 0x4c);
                uVar12 = *(undefined4 *)(param_1 + 0x58);
                *(undefined4 *)(prVar7 + 0xc) = uVar5;
                *(undefined4 *)prVar7 = uVar13;
                *(undefined4 *)(prVar7 + 4) = uVar3;
                uVar3 = *(undefined4 *)(param_1 + 0x54);
                *puVar10 = uVar21;
                puVar10[1] = uVar22;
                *(undefined8 *)(prVar8 + 4) = uVar19;
                *(undefined8 *)(prVar8 + 0xc) = uVar20;
                *(undefined4 *)(prVar6 + 4) = uVar12;
                uVar13 = *(undefined4 *)(param_1 + 0x5c);
                uVar5 = *(undefined4 *)(param_1 + 0x60);
                *(undefined4 *)prVar6 = uVar3;
                *(undefined4 *)(prVar6 + 8) = uVar13;
                *(undefined4 *)(prVar6 + 0xc) = uVar5;
                iVar4 = RK_TDE_QuickCopy(iVar2,prVar9,prVar7,prVar8);
                break;
              case 1:
                uVar13 = *(undefined4 *)(param_1 + 0x44);
                uVar21 = *(undefined8 *)(param_1 + 0x20);
                uVar22 = *(undefined8 *)(param_1 + 0x28);
                uVar3 = *(undefined4 *)(param_1 + 0x48);
                uVar19 = *(undefined8 *)(param_1 + 0x34);
                uVar20 = *(undefined8 *)(param_1 + 0x3c);
                uVar5 = *(undefined4 *)(param_1 + 0x50);
                *(undefined4 *)(prVar7 + 8) = *(undefined4 *)(param_1 + 0x4c);
                uVar12 = *(undefined4 *)(param_1 + 0x58);
                *(undefined4 *)(prVar7 + 0xc) = uVar5;
                *(undefined4 *)prVar7 = uVar13;
                *(undefined4 *)(prVar7 + 4) = uVar3;
                uVar3 = *(undefined4 *)(param_1 + 0x54);
                *puVar10 = uVar21;
                puVar10[1] = uVar22;
                *(undefined8 *)(prVar8 + 4) = uVar19;
                *(undefined8 *)(prVar8 + 0xc) = uVar20;
                *(undefined4 *)(prVar6 + 4) = uVar12;
                uVar13 = *(undefined4 *)(param_1 + 0x5c);
                uVar5 = *(undefined4 *)(param_1 + 0x60);
                *(undefined4 *)prVar6 = uVar3;
                *(undefined4 *)(prVar6 + 8) = uVar13;
                *(undefined4 *)(prVar6 + 0xc) = uVar5;
                iVar4 = RK_TDE_QuickResize(iVar2,prVar9,prVar7,prVar8);
                break;
              case 2:
                uVar14 = *(undefined4 *)(param_1 + 0x54);
                uVar12 = *(undefined4 *)(param_1 + 0x58);
                uVar19 = *(undefined8 *)(param_1 + 0x3c);
                uVar13 = *(undefined4 *)(param_1 + 0x5c);
                uVar5 = *(undefined4 *)(param_1 + 0x60);
                *(undefined8 *)(prVar8 + 4) = *(undefined8 *)(param_1 + 0x34);
                *(undefined8 *)(prVar8 + 0xc) = uVar19;
                *(undefined4 *)prVar6 = uVar14;
                *(undefined4 *)(prVar6 + 4) = uVar12;
                *(undefined4 *)(prVar6 + 0xc) = uVar5;
                *(undefined4 *)(prVar6 + 8) = uVar13;
                __dest = (void *)RK_MPI_MB_Handle2VirAddr();
                __src = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)((int)puVar10 + -4));
                __n = RK_MPI_MB_GetSize(*(undefined4 *)((int)puVar10 + -4));
                memcpy(__dest,__src,__n);
                iVar4 = RK_TDE_QuickFill(iVar2,prVar8,prVar6,uVar3);
                break;
              case 3:
                uVar21 = *(undefined8 *)(param_1 + 0x20);
                uVar22 = *(undefined8 *)(param_1 + 0x28);
                uVar13 = *(undefined4 *)(param_1 + 0x48);
                uVar19 = *(undefined8 *)(param_1 + 0x34);
                uVar20 = *(undefined8 *)(param_1 + 0x3c);
                uVar3 = *(undefined4 *)(param_1 + 0x4c);
                *(undefined4 *)prVar7 = *(undefined4 *)(param_1 + 0x44);
                *(undefined4 *)(prVar7 + 4) = uVar13;
                *(undefined4 *)(prVar7 + 8) = uVar3;
                uVar3 = *(undefined4 *)(param_1 + 0x50);
                uVar13 = *(undefined4 *)(param_1 + 0x54);
                *puVar10 = uVar21;
                puVar10[1] = uVar22;
                *(undefined4 *)(prVar7 + 0xc) = uVar3;
                *(undefined8 *)(prVar8 + 4) = uVar19;
                *(undefined8 *)(prVar8 + 0xc) = uVar20;
                uVar3 = *(undefined4 *)(param_1 + 0x58);
                *(undefined4 *)prVar6 = uVar13;
                uVar13 = *(undefined4 *)(param_1 + 0x5c);
                *(undefined4 *)(prVar6 + 4) = uVar3;
                uVar3 = *(undefined4 *)(param_1 + 0x60);
                *(undefined4 *)(prVar6 + 8) = uVar13;
                *(undefined4 *)(prVar6 + 0xc) = uVar3;
                iVar4 = RK_TDE_Rotate(iVar2,prVar9,prVar7,prVar8);
                break;
              case 4:
              case 5:
                test_tde_bit_blit_task
                          (param_1,prVar9,prVar7,prVar8,prVar6,(rkTDE_OPT_S *)&local_3898,iVar4);
                iVar4 = RK_TDE_Bitblit(iVar2,prVar8,prVar6,prVar9,prVar7,prVar8,prVar6,
                                       (rkTDE_OPT_S *)&local_3898);
                break;
              default:
                RK_LOG(2,0x17171700,"unknown operation type %d","test_tde_add_task",0x115,iVar4);
                goto LAB_00012c80;
              }
              if (iVar4 != 0) {
                local_38b4 = -1;
                RK_TDE_CancelJob(iVar2);
                goto LAB_00012abc;
              }
LAB_00012c80:
              uVar11 = uVar11 + 1;
              prVar8 = prVar8 + 0x14;
              puVar10 = (undefined8 *)((int)puVar10 + 0x14);
              prVar7 = prVar7 + 0x10;
              prVar6 = prVar6 + 0x10;
            } while (uVar11 < *(uint *)(param_1 + 0x10));
          }
          local_38b4 = RK_TDE_EndJob(iVar2,0,1,10);
          if (local_38b4 != 0) {
            RK_TDE_CancelJob(iVar2);
            goto LAB_00012abc;
          }
          local_38a8 = local_38a8 + 1;
          RK_TDE_WaitForDone(iVar2);
        } while (local_38a8 < *(int *)(param_1 + 0xc));
      }
      local_38b4 = iVar1;
      if (0 < *(int *)(param_1 + 0x10)) {
        prVar8 = (rkTDE_SURFACE_S *)&local_fd8;
        iVar2 = 0;
        do {
          iVar4 = iVar2 + 1;
          local_38b4 = test_tde_save_result(param_1,prVar8,iVar2);
          prVar8 = prVar8 + 0x14;
          if (local_38b4 != 0) break;
          iVar2 = iVar4;
          local_38b4 = iVar1;
        } while (iVar4 < *(int *)(param_1 + 0x10));
      }
    }
  }
LAB_00012abc:
  if (local_389c != 0) {
    RK_MPI_SYS_Free();
  }
  if (local_38a0 != (void *)0x0) {
    RK_MPI_SYS_Free();
  }
  return local_38b4;
}



/* ===== unit_test_mpi_tde @ 00012f94 size=168 ===== */

/* unit_test_mpi_tde(_rkMpiTdeCtx*) */

int unit_test_mpi_tde(_rkMpiTdeCtx *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_TDE_Open();
  if (iVar1 != 0) {
    return -1;
  }
  if (0 < *(int *)(param_1 + 8)) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = test_tde_job(param_1);
      if (iVar2 != 0) {
        return iVar2;
      }
      RK_LOG(4,0x17171700,"Running mpi tde test loop count %d.","unit_test_mpi_tde",0x1a1,iVar1);
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  RK_TDE_Close();
  return 0;
}



/* ===== test_tde_set_default_paramter @ 0001303c size=104 ===== */

/* test_tde_set_default_paramter(_rkMpiTdeCtx*) */

undefined4 test_tde_set_default_paramter(_rkMpiTdeCtx *param_1)

{
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x3c);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x24);
  }
  return 0;
}



/* ===== FUN_000130a4 @ 000130a4 size=64 ===== */

void FUN_000130a4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x45f0;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x45d4;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000130e4 @ 000130e4 size=588 ===== */

undefined4 FUN_000130e4(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_00013118_default;
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
    goto LAB_00013154;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_00013154:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_0001332c:
                    /* WARNING: Subroutine does not return */
        FUN_000130a4(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_00013314:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_000130a4(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_000130a4(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_0001332c;
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
    if (iVar4 != 0) goto LAB_00013314;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_000130a4(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_0001332c;
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
switchD_00013118_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 00013344 size=48 ===== */

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



/* ===== argparse_describe @ 00013374 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00013388 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_00013480;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_00013480:
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
          if (piVar7[2] != 0) goto LAB_00013564;
LAB_0001357c:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_000136d8;
LAB_00013588:
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
          if (piVar7[2] == 0) goto LAB_0001357c;
          if ((char)piVar7[1] == '\0') {
LAB_00013564:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_0001357c;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00013564;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00013588;
LAB_000136d8:
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



/* ===== argparse_parse @ 000137a4 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_00013804;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_00013804:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00013810:
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
            if (piVar11[8] == 0) goto LAB_000139c8;
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
          while (iVar5 = FUN_000130e4(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00013954;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00013ac0;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00013ac0;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_000130e4(param_1);
              if (iVar5 == -2) goto LAB_00013ac0;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00013ac0:
          pcVar10 = *(char **)param_1[6];
          goto LAB_000139cc;
        }
        goto LAB_000139c8;
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
LAB_00013920:
                if (*pcVar3 == '\0') goto LAB_0001393c;
                if (*pcVar3 == '=') goto code_r0x00013934;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00013b20;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00013974;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00013920;
                }
              }
            }
LAB_00013974:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_000139cc;
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
        goto LAB_00013848;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00013934:
  param_1[9] = (int)(pcVar3 + 1);
LAB_0001393c:
  iVar5 = FUN_000130e4(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_000139c8:
    pcVar10 = (char *)*__src;
LAB_000139cc:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00013954:
  param_2 = param_1[5];
LAB_00013848:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00013810;
}



/* ===== argparse_help_cb @ 00013b24 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 00013b34 size=16 ===== */

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



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00026004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00026014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetSize @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_QuickFill @ 00026028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_QuickFill(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_EndJob @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_EndJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

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



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_Close @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_Close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_Rotate @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_Rotate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_WaitForDone @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_WaitForDone(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_SetBufferStride @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_SetBufferStride(void)

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



/* ===== <EXTERNAL>::fputs @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_Open @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_Open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_BeginJob @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_BeginJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzAlloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_QuickResize @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_QuickResize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_QuickCopy @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_QuickCopy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_Bitblit @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_Bitblit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 000260c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_CancelJob @ 000260c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_CancelJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 000260cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


