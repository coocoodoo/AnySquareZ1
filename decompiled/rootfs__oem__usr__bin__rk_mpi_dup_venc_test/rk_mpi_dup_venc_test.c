// rk_mpi_dup_venc_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000116c8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000116ec size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002a00c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000116f8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002a010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00011704 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_0002a014)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00011710 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002a018)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 0001171c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002a01c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::usleep @ 00011728 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002a020)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00011734 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0002a024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00011740 size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_0002a028)();
  return;
}



/* ===== <EXTERNAL>::mkdir @ 0001174c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0002a02c)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011758 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002a030)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011764 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002a034)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 0001177c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002a03c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011788 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002a040)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 00011794 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002a044)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000117a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002a048)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 000117ac size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_0002a04c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnParam @ 000117b8 size=12 ===== */

void RK_MPI_VENC_SetChnParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnParam_0002a050)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 000117c4 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0002a054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000117d0 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0002a058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_InsertUserData @ 000117dc size=12 ===== */

void RK_MPI_VENC_InsertUserData(void)

{
  (*(code *)PTR_RK_MPI_VENC_InsertUserData_0002a05c)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 000117e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002a060)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 000117f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002a064)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00011800 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002a068)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetRcParam @ 0001180c size=12 ===== */

void RK_MPI_VENC_GetRcParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetRcParam_0002a06c)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011818 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0002a070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00011824 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_0002a074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 00011830 size=12 ===== */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
  (*(code *)PTR_RK_MPI_CAL_COMM_GetHorStride_0002a078)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 0001183c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002a07c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 00011848 size=12 ===== */

void RK_MPI_VENC_SetRcParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetRcParam_0002a080)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00011854 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0002a084)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetChnAttr @ 00011860 size=12 ===== */

void RK_MPI_VENC_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetChnAttr_0002a088)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0001186c size=12 ===== */

void __aeabi_uidiv(void)

{
  (*(code *)PTR___aeabi_uidiv_0002a08c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 00011878 size=12 ===== */

void RK_MPI_MB_CreatePool(void)

{
  (*(code *)PTR_RK_MPI_MB_CreatePool_0002a090)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00011884 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002a094)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00011890 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002a098)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 0001189c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002a09c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 000118a8 size=12 ===== */

void RK_MPI_MB_DestroyPool(void)

{
  (*(code *)PTR_RK_MPI_MB_DestroyPool_0002a0a0)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000118b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002a0a4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnAttr @ 000118c0 size=12 ===== */

void RK_MPI_VENC_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnAttr_0002a0a8)();
  return;
}



/* ===== <EXTERNAL>::strtof @ 000118cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_0002a0ac)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::abort @ 000118d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002a0b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 000118e4 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_0002a0b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 000118f0 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0002a0b8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRoiAttr @ 000118fc size=12 ===== */

void RK_MPI_VENC_SetRoiAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetRoiAttr_0002a0bc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00011908 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0002a0c0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00011914 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_0002a0c4)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00011920 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002a0c8)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0001192c size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_0002a0cc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetRoiAttr @ 00011938 size=12 ===== */

void RK_MPI_VENC_GetRoiAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetRoiAttr_0002a0d0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00011944 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_0002a0d4)();
  return;
}



/* ===== <EXTERNAL>::free @ 00011950 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002a0d8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strerror @ 0001195c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002a0dc)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetChnParam @ 00011968 size=12 ===== */

void RK_MPI_VENC_GetChnParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetChnParam_0002a0e0)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00011974 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002a0e4)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00011980 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002a0e8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetPicBufferSize @ 0001198c size=12 ===== */

void RK_MPI_CAL_COMM_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_COMM_GetPicBufferSize_0002a0ec)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011998 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002a0f0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 000119a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0002a0f4)(__th);
  return iVar1;
}



/* ===== main @ 000119b0 size=428 ===== */

int main(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [40];
  undefined4 local_d8;
  undefined1 auStack_d4 [4];
  undefined *local_d0;
  char *local_c8;
  code *local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  char *local_a8;
  undefined4 local_98;
  undefined1 local_94;
  char *local_90;
  undefined4 *local_8c;
  char *local_88;
  undefined4 local_78;
  char *local_70;
  undefined4 *local_6c;
  char *local_68;
  undefined4 local_58;
  char *local_50;
  undefined4 *local_4c;
  char *local_48;
  
  uStack_10c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_108 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_104 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_110 = 0;
  memset(auStack_d4,0,0xbc);
  local_d0 = &DAT_00018fa8;
  local_c8 = "show this help message and exit";
  local_c4 = argparse_help_cb;
  local_a8 = "basic options:";
  local_90 = "output";
  local_88 = "the directory of encoder output";
  local_70 = "channel_index";
  local_68 = "venc channel index. default(0).";
  local_50 = "insert_user_data";
  local_48 = "insert user data flag(0:disable 1:enable) default(0)";
  local_98 = 6;
  local_bc = 1;
  local_b8 = 1;
  local_d8 = 2;
  local_94 = 0x6f;
  local_78 = 4;
  local_58 = 4;
  local_6c = &uStack_10c;
  local_4c = &uStack_104;
  local_8c = &local_110;
  argparse_init(auStack_100,&local_d8,&DAT_00018f38,0);
  argparse_describe(auStack_100,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_100,param_1,param_2);
  puts("cmd parse result:");
  printf("output file name       : %s\n",local_110);
  printf("channel index          : %d\n",uStack_10c);
  iVar1 = RK_MPI_SYS_Init();
  if (iVar1 == 0) {
    venc_get_stream(&local_110);
    iVar1 = RK_MPI_SYS_Exit();
    if (iVar1 == 0) {
      RK_LOG(2,0x17171700,"test running success!",&DAT_00018f64,0x1a8);
    }
  }
  return iVar1;
}



/* ===== _start @ 00011b5c size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002a038)
            (DAT_00011b90,param_2,&stack0x00000004,DAT_00011b94,DAT_00011b8c,param_1);
  return;
}



/* ===== FUN_00011b98 @ 00011b98 size=32 ===== */

void FUN_00011b98(void)

{
  if (DAT_00011bbc == DAT_00011bb8) {
    return;
  }
  if (DAT_00011bc0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011bc0)();
  return;
}



/* ===== _FINI_0 @ 00011bfc size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011c38;
  if (*DAT_00011c38 != '\0') {
    return;
  }
  FUN_00011b98();
  if (DAT_00011c3c != 0) {
    __deregister_frame_info(DAT_00011c40);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011c44 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011c68 != 0) {
    __register_frame_info(DAT_00011c70,DAT_00011c6c);
  }
  if ((DAT_00011bf4 - DAT_00011bf0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011bf8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011bf8)();
  return;
}



/* ===== dump_venc_roi_attr @ 00011c74 size=192 ===== */

/* dump_venc_roi_attr(rkVENC_ROI_ATTR_S*, int) */

void dump_venc_roi_attr(rkVENC_ROI_ATTR_S *param_1,int param_2)

{
  printf("%s, index %d:\n","dump_venc_roi_attr",param_2);
  printf("bEnable: %d\n",*(undefined4 *)(param_1 + 4));
  printf("stRect.s32X: %d\n",*(undefined4 *)(param_1 + 0x14));
  printf("      .s32Y: %d\n",*(undefined4 *)(param_1 + 0x18));
  printf("      .u32Width: %d\n",*(undefined4 *)(param_1 + 0x1c));
  printf("      .u32Height: %d\n",*(undefined4 *)(param_1 + 0x20));
  printf("bIntra: %d\n",*(undefined4 *)(param_1 + 0x10));
  printf("bAbsQp: %d\n",*(undefined4 *)(param_1 + 8));
  printf("u32Index: %d\n",*(undefined4 *)param_1);
  printf("s32Qp: %d\n",*(undefined4 *)(param_1 + 0xc));
  puts("************************************************************");
  return;
}



/* ===== venc_get_stream @ 00011d34 size=2348 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* venc_get_stream(void*) */

undefined4 venc_get_stream(void *param_1)

{
  FILE *__s;
  void *__ptr;
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char local_7fc [4];
  char acStack_7f8 [4];
  char acStack_7f4 [4];
  char acStack_7f0 [4];
  char local_7ec [4];
  char acStack_7e8 [4];
  undefined2 uStack_7e4;
  undefined1 local_7e2;
  undefined4 local_7e0;
  undefined4 uStack_7dc;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 uStack_7cc;
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 local_7c0;
  undefined4 uStack_7bc;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined1 auStack_7b0 [16];
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  undefined4 local_794;
  undefined4 local_790;
  undefined4 local_76c;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_760;
  undefined4 local_75c;
  int local_758;
  undefined4 local_754;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_748;
  undefined4 local_740;
  undefined4 local_738;
  undefined4 local_734;
  undefined4 local_730;
  undefined4 local_72c;
  undefined4 local_728;
  undefined4 local_708;
  undefined4 local_704;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  char acStack_6d0 [256];
  undefined4 local_5d0;
  int iStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 local_5c0;
  int iStack_5bc;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  int iStack_5b0;
  undefined4 *local_1d0 [107];
  
  memset(acStack_6d0,0,0x100);
  uVar4 = *(undefined4 *)((int)param_1 + 4);
  memset(&local_758,0,0x88);
  RK_MPI_VENC_GetChnAttr(uVar4,&local_758);
  printf("%s:\n","dump_venc_chn_attr");
  printf("stVencAttr.enType: %d\n",local_758);
  printf("          .u32MaxPicWidth: %d\n",local_754);
  printf("          .u32MaxPicHeight: %d\n",local_750);
  printf("          .enPixelFormat: %d\n",local_74c);
  printf("          .enMirror: %d\n",local_748);
  printf("          .u32Profile: %d\n",local_740);
  printf("          .u32PicWidth: %d\n",local_738);
  printf("          .u32PicHeight: %d\n",local_734);
  printf("          .u32VirWidth: %d\n",local_730);
  printf("          .u32VirHeight: %d\n",local_72c);
  printf("          .u32StreamBufCnt: %d\n",local_728);
  printf("stRcAttr.enRcMode: %d\n",local_708);
  switch(local_708) {
  case 1:
    pcVar2 = "        .stH264Cbr.u32Gop: %d\n";
    goto LAB_00011ea4;
  case 2:
    pcVar2 = "        .stH264Vbr.u32Gop: %d\n";
    goto LAB_00012418;
  case 3:
    pcVar2 = "        .stH264Avbr.u32Gop: %d\n";
    goto LAB_00012464;
  case 4:
    pcVar2 = "        .stH264FixQp.u32Gop: %d\n";
    goto LAB_000124f8;
  case 5:
    printf("        .stMjpegCbr.u32BitRate: %d\n",local_6f4);
    pcVar2 = "                   .u32StatTime: %d\n";
    local_6f4 = local_6f0;
    break;
  case 6:
    printf("        .stMjpegVbr.u32BitRate: %d\n",local_6f4);
    printf("                   .u32MaxBitRate: %d\n",local_6f0);
    printf("                   .u32MinBitRate: %d\n",local_6ec);
    pcVar2 = "                   .u32StatTime: %d\n";
    local_6f4 = local_6e8;
    break;
  case 7:
    pcVar2 = "        .stMjpegFixQp.u32Qfactor: %d\n";
    break;
  case 8:
    pcVar2 = "        .stH265Cbr.u32Gop: %d\n";
LAB_00011ea4:
    printf(pcVar2,local_704);
    printf("                  .u32BitRate: %d\n",local_6f0);
    local_6e4 = local_6ec;
LAB_00011ec0:
    printf("                  .u32StatTime: %d\n",local_6e4);
    printf("                  .u32SrcFrameRateNum: %d\n",local_700);
    printf("                  .u32SrcFrameRateDen: %d\n",local_6fc);
    printf("                  .fr32DstFrameRateNum: %d\n",local_6f8);
    printf("                  .fr32DstFrameRateDen: %d\n",local_6f4);
    goto switchD_00011e64_default;
  case 9:
    pcVar2 = "        .stH265Vbr.u32Gop: %d\n";
LAB_00012418:
    printf(pcVar2,local_704);
    printf("                  .u32BitRate: %d\n",local_6f0);
    printf("                  .u32MaxBitRate: %d\n",local_6ec);
    printf("                  .u32MinBitRate: %d\n",local_6e8);
    goto LAB_00011ec0;
  case 10:
    pcVar2 = "        .stH265Avbr.u32Gop: %d\n";
LAB_00012464:
    printf(pcVar2,local_704);
    printf("                   .u32BitRate: %d\n",local_6f0);
    printf("                   .u32MaxBitRate: %d\n",local_6ec);
    printf("                   .u32MinBitRate: %d\n",local_6e8);
    printf("                   .u32StatTime: %d\n",local_6e4);
    printf("                   .u32SrcFrameRateNum: %d\n",local_700);
    printf("                   .u32SrcFrameRateDen: %d\n",local_6fc);
    printf("                   .fr32DstFrameRateNum: %d\n",local_6f8);
    printf("                   .fr32DstFrameRateDen: %d\n",local_6f4);
    goto switchD_00011e64_default;
  case 0xb:
    pcVar2 = "        .stH265FixQp.u32Gop: %d\n";
LAB_000124f8:
    printf(pcVar2,local_704);
    printf("                    .u32IQp: %d\n",local_6f0);
    printf("                    .u32PQp: %d\n",local_6ec);
    printf("                    .u32SrcFrameRateNum: %d\n",local_700);
    printf("                    .u32SrcFrameRateDen: %d\n",local_6fc);
    printf("                    .fr32DstFrameRateNum: %d\n",local_6f8);
    printf("                    .fr32DstFrameRateDen: %d\n",local_6f4);
  default:
    goto switchD_00011e64_default;
  }
  printf(pcVar2,local_6f4);
  printf("                   .u32SrcFrameRateNum: %d\n",local_704);
  printf("                   .u32SrcFrameRateDen: %d\n",local_700);
  printf("                   .fr32DstFrameRateNum: %d\n",local_6fc);
  printf("                   .fr32DstFrameRateDen: %d\n",local_6f8);
switchD_00011e64_default:
  printf("stGopAttr.enGopMode: %d\n",local_6e0);
  printf("         .s32VirIdrLen: %d\n",local_6dc);
  printf("         .u32MaxLtrCount: %d\n",local_6d8);
  puts("************************************************************");
  TEST_VENC_SET_BitRate(&local_708,0x400,0x400);
  RK_MPI_VENC_SetChnAttr(uVar4,&local_758);
  memset(auStack_7b0,0,0x58);
  RK_MPI_VENC_GetChnParam(uVar4,auStack_7b0);
  printf("%s:\n","dump_venc_chn_param");
  printf("stCropCfg.enCropType: %d\n",local_7a0);
  printf("         .stCropRect.s32X: %d\n",local_79c);
  printf("                    .s32Y: %d\n",local_798);
  printf("                    .u32Width: %d\n",local_794);
  printf("                    .u32Height: %d\n",local_790);
  printf("stFrameRate.bEnable: %d\n",local_76c);
  printf("           .s32SrcFrmRateNum: %d\n",local_768);
  printf("           .s32SrcFrmRateDen: %d\n",local_764);
  printf("           .s32DstFrmRateNum: %d\n",local_760);
  printf("           .s32DstFrmRateDen: %d\n",local_75c);
  puts("************************************************************");
  RK_MPI_VENC_SetChnParam(uVar4,auStack_7b0);
  uStack_7dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_7d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_7d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_7e0 = 0;
  local_7d0 = 0;
  local_7c8 = 0;
  local_7c0 = 0;
  local_7b8 = 0;
  uStack_7cc = uStack_7dc;
  uStack_7c4 = uStack_7dc;
  uStack_7bc = uStack_7dc;
  uStack_7b4 = uStack_7dc;
  RK_MPI_VENC_GetRcParam(uVar4);
  printf("%s:\n","dump_venc_rc_param");
  printf("s32FirstFrameStartQp: %d\n",local_7e0);
  if (local_758 == 9) {
    printf("stParamMjpeg.u32Qfactor: %d\n",uStack_7dc);
    printf("stParamMjpeg.u32MaxQfactor: %d\n",local_7d8);
    printf("stParamMjpeg.u32MinQfactor: %d\n",local_7d4);
  }
  else {
    if (local_758 == 0xc) {
      pcVar2 = "stParamH265.u32StepQp: %d\n";
    }
    else {
      if (local_758 != 8) goto LAB_000120b0;
      pcVar2 = "stParamH264.u32StepQp: %d\n";
    }
    printf(pcVar2,uStack_7dc);
    printf("           .u32MaxQp: %d\n",local_7d8);
    printf("           .u32MinQp: %d\n",local_7d4);
    printf("           .u32MaxIQp: %d\n",local_7d0);
    printf("           .u32MinIQp: %d\n",uStack_7cc);
    printf("           .s32DeltIpQp: %d\n",local_7c8);
    printf("           .s32MaxReEncodeTimes: %d\n",uStack_7c4);
    printf("           .u32FrmMinQp: %d\n",uStack_7bc);
    printf("           .u32FrmMinIQp: %d\n",uStack_7b4);
  }
LAB_000120b0:
  puts("************************************************************");
  uVar6 = 0;
  iVar3 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  RK_MPI_VENC_SetRcParam(uVar4,&local_7e0);
  iVar5 = 0;
  do {
    while( true ) {
      local_5d0 = uVar6;
      iStack_5cc = iVar3;
      uStack_5c8 = uVar7;
      uStack_5c4 = uVar8;
      local_5c0 = uVar6;
      iStack_5bc = iVar3;
      local_5b8 = uVar6;
      uStack_5b4 = uVar6;
      iStack_5b0 = iVar3;
      RK_MPI_VENC_GetRoiAttr(uVar4,iVar5);
      dump_venc_roi_attr((rkVENC_ROI_ATTR_S *)&local_5d0,iVar5);
      iVar5 = iVar5 + 1;
      if (iStack_5cc != 0) break;
      if (iVar5 == 8) {
        iVar3 = *(int *)((int)param_1 + 0xc);
        goto joined_r0x000122c4;
      }
    }
    RK_MPI_VENC_SetRoiAttr(uVar4,&local_5d0);
  } while (iVar5 != 8);
  iVar3 = *(int *)((int)param_1 + 0xc);
joined_r0x000122c4:
  if (iVar3 != 0) {
    uStack_7e4 = (undefined2)unique0x1000053e;
    local_7e2 = (undefined1)((uint)unique0x1000053e >> 0x10);
    local_7fc = (char  [4])s_this_is_rockchip_user_data_00018e40._0_4_;
    acStack_7f8 = (char  [4])s_this_is_rockchip_user_data_00018e40._4_4_;
    acStack_7f4 = (char  [4])s_this_is_rockchip_user_data_00018e40._8_4_;
    acStack_7f0 = (char  [4])s_this_is_rockchip_user_data_00018e40._12_4_;
    local_7ec = (char  [4])s_this_is_rockchip_user_data_00018e40._16_4_;
    acStack_7e8 = (char  [4])s_this_is_rockchip_user_data_00018e40._20_4_;
    RK_MPI_VENC_InsertUserData(uVar4,local_7fc,0x1b);
    snprintf((char *)&local_5d0,0x400,"rockchip continuous user data:%d",0);
    sVar1 = strlen((char *)&local_5d0);
    RK_MPI_VENC_InsertUserData(uVar4,&local_5d0,sVar1);
  }
  __s = (FILE *)0x0;
  if (*(char **)param_1 != (char *)0x0) {
    mkdir(*(char **)param_1,0x1ff);
    snprintf(acStack_6d0,0x100,"%s/test_%d.bin",*(undefined4 *)param_1,
             *(undefined4 *)((int)param_1 + 4));
    __s = fopen64(acStack_6d0,"wb");
    if (__s == (FILE *)0x0) {
      RK_LOG(2,0x17171700,"chn %d can\'t open file %s in get picture thread!\n","venc_get_stream",
             0x143,uVar4,acStack_6d0);
      return 0;
    }
  }
  local_1d0[0] = malloc(0x88);
  iVar3 = 0;
  do {
    while( true ) {
      if (*(int *)((int)param_1 + 8) != 0) goto LAB_00012274;
      iVar5 = RK_MPI_VENC_GetStream(uVar4,local_1d0,0xffffffff);
      if (-1 < iVar5) break;
      if (*(int *)((int)param_1 + 8) != 0) goto LAB_00012274;
      usleep(1000);
    }
    iVar3 = iVar3 + 1;
    iVar5 = iVar3;
    RK_LOG(4,0x17171700,"get chn %d stream %d","venc_get_stream",0x151,uVar4,iVar3);
    if (*(int *)param_1 != 0) {
      __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1d0[0]);
      fwrite(__ptr,1,local_1d0[0][1],__s);
      fflush(__s);
    }
    RK_MPI_VENC_ReleaseStream(uVar4,local_1d0);
  } while (local_1d0[0][5] != 1);
  RK_LOG(4,0x17171700,"chn %d reach EOS stream","venc_get_stream",0x159,uVar4,iVar5);
LAB_00012274:
  if (local_1d0[0] != (undefined4 *)0x0) {
    free(local_1d0[0]);
  }
  if (__s != (FILE *)0x0) {
    fclose(__s);
  }
  return 0;
}



/* ===== FUN_0001268c @ 0001268c size=64 ===== */

void FUN_0001268c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x9168;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x914c;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000126cc @ 000126cc size=588 ===== */

undefined4 FUN_000126cc(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_00012700_default;
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
    goto LAB_0001273c;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_0001273c:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00012914:
                    /* WARNING: Subroutine does not return */
        FUN_0001268c(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_000128fc:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_0001268c(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0001268c(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00012914;
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
    if (iVar4 != 0) goto LAB_000128fc;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0001268c(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00012914;
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
switchD_00012700_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 0001292c size=48 ===== */

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



/* ===== argparse_describe @ 0001295c size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00012970 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_00012a68;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_00012a68:
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
          if (piVar7[2] != 0) goto LAB_00012b4c;
LAB_00012b64:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_00012cc0;
LAB_00012b70:
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
          if (piVar7[2] == 0) goto LAB_00012b64;
          if ((char)piVar7[1] == '\0') {
LAB_00012b4c:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_00012b64;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00012b4c;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00012b70;
LAB_00012cc0:
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
        fprintf(stdout,"%*s%s\n",uVar3 + 2,&DAT_000183d0,piVar7[4]);
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



/* ===== argparse_parse @ 00012d8c size=892 ===== */

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
        if (uVar4 == 0) goto LAB_00012dec;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_00012dec:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00012df8:
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
            if (piVar11[8] == 0) goto LAB_00012fb0;
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
          while (iVar5 = FUN_000126cc(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00012f3c;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_000130a8;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_000130a8;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_000126cc(param_1);
              if (iVar5 == -2) goto LAB_000130a8;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_000130a8:
          pcVar10 = *(char **)param_1[6];
          goto LAB_00012fb4;
        }
        goto LAB_00012fb0;
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
LAB_00012f08:
                if (*pcVar3 == '\0') goto LAB_00012f24;
                if (*pcVar3 == '=') goto code_r0x00012f1c;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00013108;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00012f5c;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00012f08;
                }
              }
            }
LAB_00012f5c:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_00012fb4;
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
        goto LAB_00012e30;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00012f1c:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00012f24:
  iVar5 = FUN_000126cc(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_00012fb0:
    pcVar10 = (char *)*__src;
LAB_00012fb4:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00012f3c:
  param_2 = param_1[5];
LAB_00012e30:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00012df8;
}



/* ===== argparse_help_cb @ 0001310c size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_0001311c @ 0001311c size=840 ===== */

undefined4 FUN_0001311c(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  void *__ptr;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  uint uVar8;
  undefined8 uVar9;
  size_t local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined1 local_130 [8];
  int local_128;
  int local_124;
  size_t local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  int local_100 [5];
  undefined4 local_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [32];
  undefined4 local_90;
  undefined4 uStack_8c;
  
  local_124 = RK_MPI_VENC_GetChnAttr(param_1[4],auStack_b0);
  if (local_124 != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_VENC_GetChnAttr failed 0x%x","TEST_VENC_SendVencFrameProc",0x147,
           local_124);
    return 0;
  }
  local_128 = param_1[0xb];
  local_11c = RK_MPI_CAL_COMM_GetPicBufferSize(local_130,&local_140);
  if (local_11c != 0) {
    RK_LOG(2,0x17171700,"get picture buffer size failed. err 0x%x","TEST_VENC_SendVencFrameProc",
           0x150,local_11c);
    return 0;
  }
  uStack_110 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_10c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_118 = param_1[7];
  local_114 = 0;
  local_120 = local_140;
  local_108 = 0;
  uStack_104 = uStack_110;
  uVar9 = RK_MPI_MB_CreatePool(&local_120);
  uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
  param_1[3] = (int)uVar9;
  uVar8 = 0;
  do {
    if (*param_1 != 1) goto LAB_000132ec;
    iVar3 = RK_MPI_MB_GetMB(param_1[3],uVar7,local_140,0,1);
    __ptr = (void *)RK_MPI_MB_Handle2VirAddr();
    uVar2 = uStack_8c;
    uVar7 = local_90;
    if ((FILE *)param_1[1] == (FILE *)0x0) {
      uVar4 = RK_MPI_CAL_COMM_GetHorStride(local_13c,param_1[0xb]);
      iVar5 = TEST_COMM_FillImage(__ptr,uVar7,uVar2,uVar4,uStack_138,param_1[0xb],uVar8);
      if (iVar5 != 0) {
        RK_MPI_MB_ReleaseMB(iVar3);
LAB_000132dc:
        if (iVar3 != 0) {
          RK_MPI_MB_ReleaseMB(iVar3);
        }
        goto LAB_000132ec;
      }
LAB_00013214:
      RK_MPI_SYS_MmzFlushCache(iVar3,0);
      uStack_b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iStack_e8 = param_1[0xb];
      bVar1 = false;
      uStack_b8 = 0;
    }
    else {
      sVar6 = fread(__ptr,1,local_140,(FILE *)param_1[1]);
      if (sVar6 != 0) goto LAB_00013214;
      RK_MPI_SYS_MmzFlushCache(iVar3);
      uStack_b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iStack_e8 = param_1[0xb];
      uStack_b8 = 0x80000000;
      bVar1 = true;
    }
    local_bc = 0;
    local_c4 = 0;
    local_cc = 0;
    local_d4 = 0;
    local_dc = 0;
    local_ec = 0;
    local_100[0] = iVar3;
    uStack_d8 = uStack_b4;
    uStack_d0 = uStack_b4;
    uStack_c8 = uStack_b4;
    uStack_c0 = uStack_b4;
    while( true ) {
      while( true ) {
        if (*param_1 == 0) goto LAB_000132dc;
        iVar5 = RK_MPI_VENC_SendFrame(param_1[4],local_100,100);
        if (-1 < iVar5) break;
        usleep(10000);
      }
      usleep(100000);
      uVar8 = uVar8 + 1;
      if ((param_1[10] == 0) || (uVar8 < (uint)param_1[10])) break;
      if (0 < param_1[8] && param_1[8] < (int)uVar8) goto LAB_000132dc;
    }
    RK_MPI_MB_ReleaseMB(iVar3);
    uVar7 = extraout_r1;
  } while (!bVar1);
  RK_LOG(4,0x17171700,"chn %d reach EOS.","TEST_VENC_SendVencFrameProc",0x195,param_1[4]);
LAB_000132ec:
  RK_LOG(4,0x17171700,"chn %d frame %d","TEST_VENC_SendVencFrameProc",0x19d,0,uVar8);
  return 0;
}



/* ===== FUN_00013464 @ 00013464 size=528 ===== */

undefined4 FUN_00013464(int *param_1)

{
  int iVar1;
  FILE *__s;
  void *pvVar2;
  int iVar3;
  char acStack_240 [128];
  undefined4 *local_1c0 [5];
  int local_1ac;
  
  local_1c0[0] = malloc(0x88);
  iVar3 = 0;
LAB_000134a0:
  do {
    if (*param_1 != 1) {
LAB_00013658:
      if (local_1c0[0] != (undefined4 *)0x0) {
        free(local_1c0[0]);
      }
      return 0;
    }
    iVar1 = RK_MPI_VENC_GetStream(param_1[4],local_1c0,100);
    if (-1 < iVar1) {
      snprintf(acStack_240,0x80,"/data/rgn/venc_frame%d.jpg",iVar3);
      iVar3 = iVar3 + 1;
      __s = fopen64(acStack_240,"wb");
      if (param_1[1] != 0) {
        pvVar2 = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        RK_MPI_SYS_MmzFlushCache(*local_1c0[0],1);
        fwrite(pvVar2,1,local_1c0[0][1],(FILE *)param_1[1]);
        fflush((FILE *)param_1[1]);
      }
      if (__s != (FILE *)0x0) {
        pvVar2 = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        RK_MPI_SYS_MmzFlushCache(*local_1c0[0],1);
        fwrite(pvVar2,1,local_1c0[0][1],__s);
        fflush(__s);
        fclose(__s);
      }
      if (local_1c0[0][5] == 1) {
        RK_LOG(4,0x17171700,"get chn %d stream %d","TEST_VENC_GetVencStreamProc",0xfe,param_1[4],
               local_1ac + 1);
        RK_LOG(4,0x17171700,"chn %d reach EOS stream","TEST_VENC_GetVencStreamProc",0xff,param_1[4])
        ;
        RK_MPI_VENC_ReleaseStream(param_1[4],local_1c0);
        goto LAB_00013658;
      }
      RK_MPI_VENC_ReleaseStream(param_1[4],local_1c0);
      RK_LOG(4,0x17171700,"==get franme cnt: %d","TEST_VENC_GetVencStreamProc",0x105,iVar3);
      goto LAB_000134a0;
    }
    usleep(1000);
  } while( true );
}



/* ===== TEST_VENC_Create @ 00013678 size=132 ===== */

void TEST_VENC_Create(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 unaff_r5;
  undefined1 auStack_8c [8];
  undefined4 local_84;
  int local_7c;
  undefined4 local_78;
  undefined4 local_60;
  
  memset(auStack_8c,0,0x84);
  if (param_1[5] == 8) {
    local_78 = 100;
  }
  local_84 = param_1[7];
  local_7c = param_1[2] * param_1[1];
  local_60 = param_1[3];
  VectorTableLookup(param_1,local_60,2);
  uVar1 = VectorTableLookup(unaff_r5,local_60,2);
  RK_MPI_VENC_CreateChn(*param_1,uVar1,local_60,local_7c,param_1[5]);
  return;
}



/* ===== TEST_VENC_Start @ 00013710 size=656 ===== */

int TEST_VENC_Start(int *param_1)

{
  int *piVar1;
  int iVar2;
  FILE *pFVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 unaff_r5;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 local_a4;
  int local_a0;
  undefined1 auStack_9c [8];
  int local_94;
  int local_8c;
  undefined4 local_88;
  int local_70;
  
  local_a4 = 0xffffffff;
  memset(auStack_9c,0,0x84);
  local_a0 = param_1[5];
  if (local_a0 == 8) {
    local_88 = 100;
  }
  local_94 = param_1[7];
  local_8c = param_1[2] * param_1[1];
  local_70 = param_1[3];
  VectorTableLookup(param_1,local_70,2);
  uVar4 = VectorTableLookup(unaff_r5,local_70,2);
  iVar2 = RK_MPI_VENC_CreateChn(*param_1,uVar4);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = RK_MPI_VENC_StartRecvFrame(*param_1,&local_a4);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = *param_1;
  if ((char *)param_1[8] != (char *)0x0) {
    pFVar3 = fopen64((char *)param_1[8],"r");
    iVar5 = iVar2 * 0x38;
    iVar2 = *param_1;
    *(FILE **)(&DAT_0002af84 + iVar5) = pFVar3;
    if (*(int *)(&DAT_0002af84 + iVar2 * 0x38) == 0) {
      pcVar7 = "TEST_VENC_StartSendFrame";
      iVar2 = param_1[8];
      uVar4 = 0x1a9;
      goto LAB_00013964;
    }
  }
  *(undefined4 *)(&DAT_0002af80 + iVar2 * 0x38) = 1;
  piVar1 = (int *)(&DAT_0002af90 + iVar2 * 0x38);
  piVar9 = param_1;
  do {
    piVar10 = piVar9;
    piVar8 = piVar1;
    piVar9 = piVar10 + 4;
    iVar2 = piVar10[1];
    iVar5 = piVar10[2];
    iVar6 = piVar10[3];
    *piVar8 = *piVar10;
    piVar8[1] = iVar2;
    piVar8[2] = iVar5;
    piVar8[3] = iVar6;
    piVar1 = piVar8 + 4;
  } while (piVar9 != param_1 + 8);
  iVar2 = piVar10[5];
  piVar8[4] = *piVar9;
  piVar8[5] = iVar2;
  iVar2 = pthread_create((pthread_t *)(&DAT_0002af88 + *param_1 * 0x38),(pthread_attr_t *)0x0,
                         FUN_0001311c,&DAT_0002af80 + *param_1 * 0x38);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = *param_1;
  if ((char *)param_1[9] != (char *)0x0) {
    pFVar3 = fopen64((char *)param_1[9],"wb");
    iVar5 = iVar2 * 0x38;
    iVar2 = *param_1;
    *(FILE **)(&DAT_0002a184 + iVar5) = pFVar3;
    if (*(int *)(&DAT_0002a184 + iVar2 * 0x38) == 0) {
      iVar2 = param_1[9];
      uVar4 = 0x117;
      pcVar7 = "TEST_VENC_StartGetStream";
LAB_00013964:
      RK_LOG(2,0x17171700,"can\'t open file %s!",pcVar7,uVar4,iVar2);
      return -1;
    }
  }
  *(undefined4 *)(&DAT_0002a180 + iVar2 * 0x38) = 1;
  piVar1 = (int *)(&DAT_0002a190 + iVar2 * 0x38);
  piVar9 = param_1;
  do {
    piVar10 = piVar9;
    piVar8 = piVar1;
    piVar9 = piVar10 + 4;
    iVar2 = piVar10[1];
    iVar5 = piVar10[2];
    iVar6 = piVar10[3];
    *piVar8 = *piVar10;
    piVar8[1] = iVar2;
    piVar8[2] = iVar5;
    piVar8[3] = iVar6;
    piVar1 = piVar8 + 4;
  } while (piVar9 != param_1 + 8);
  iVar2 = piVar10[5];
  piVar8[4] = *piVar9;
  piVar8[5] = iVar2;
  iVar2 = pthread_create((pthread_t *)(&DAT_0002a188 + *param_1 * 0x38),(pthread_attr_t *)0x0,
                         FUN_00013464,&DAT_0002a180 + *param_1 * 0x38);
  return iVar2;
}



/* ===== TEST_VENC_Stop @ 000139b0 size=228 ===== */

int TEST_VENC_Stop(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x38;
  if (*(int *)(&DAT_0002af80 + iVar1) == 1) {
    *(undefined4 *)(&DAT_0002af80 + iVar1) = 0;
    pthread_join(*(pthread_t *)(&DAT_0002af88 + iVar1),(void **)0x0);
    if (*(FILE **)(&DAT_0002af84 + iVar1) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_0002af84 + iVar1));
      *(undefined4 *)(&DAT_0002af84 + iVar1) = 0;
    }
  }
  iVar1 = param_1 * 0x38;
  if (*(int *)(&DAT_0002a180 + iVar1) == 1) {
    *(undefined4 *)(&DAT_0002a180 + iVar1) = 0;
    pthread_join(*(pthread_t *)(&DAT_0002a188 + iVar1),(void **)0x0);
    if (*(FILE **)(&DAT_0002a184 + iVar1) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_0002a184 + iVar1));
      *(undefined4 *)(&DAT_0002a184 + iVar1) = 0;
    }
  }
  iVar1 = RK_MPI_VENC_StopRecvFrame(param_1);
  if (((iVar1 == 0) && (iVar1 = RK_MPI_VENC_DestroyChn(param_1), iVar1 == 0)) &&
     (*(int *)(&DAT_0002af8c + param_1 * 0x38) != 0)) {
    RK_MPI_MB_DestroyPool();
  }
  return iVar1;
}



/* ===== TEST_VENC_SnapStart @ 00013a94 size=312 ===== */

int TEST_VENC_SnapStart(int *param_1)

{
  int *piVar1;
  int iVar2;
  FILE *pFVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_1c [2];
  
  local_1c[0] = param_1[4];
  iVar2 = RK_MPI_VENC_StartRecvFrame(*param_1,local_1c);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = *param_1;
  if ((char *)param_1[8] != (char *)0x0) {
    pFVar3 = fopen64((char *)param_1[8],"r");
    iVar4 = iVar2 * 0x38;
    iVar2 = *param_1;
    *(FILE **)(&DAT_0002af84 + iVar4) = pFVar3;
    if (*(int *)(&DAT_0002af84 + iVar2 * 0x38) == 0) {
      RK_LOG(2,0x17171700,"can\'t open file %s!","TEST_VENC_StartSendFrame",0x1a9,param_1[8]);
      return -1;
    }
  }
  *(undefined4 *)(&DAT_0002af80 + iVar2 * 0x38) = 1;
  piVar7 = param_1;
  piVar1 = (int *)(&DAT_0002af90 + iVar2 * 0x38);
  do {
    piVar8 = piVar1;
    piVar6 = piVar7;
    piVar7 = piVar6 + 4;
    iVar2 = piVar6[1];
    iVar4 = piVar6[2];
    iVar5 = piVar6[3];
    *piVar8 = *piVar6;
    piVar8[1] = iVar2;
    piVar8[2] = iVar4;
    piVar8[3] = iVar5;
    piVar1 = piVar8 + 4;
  } while (piVar7 != param_1 + 8);
  iVar2 = piVar6[5];
  piVar8[4] = *piVar7;
  piVar8[5] = iVar2;
  iVar2 = pthread_create((pthread_t *)(&DAT_0002af88 + *param_1 * 0x38),(pthread_attr_t *)0x0,
                         FUN_0001311c,&DAT_0002af80 + *param_1 * 0x38);
  return iVar2;
}



/* ===== TEST_VENC_SnapStop @ 00013bcc size=156 ===== */

int TEST_VENC_SnapStop(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x38;
  if (*(int *)(&DAT_0002af80 + iVar1) == 1) {
    *(undefined4 *)(&DAT_0002af80 + iVar1) = 0;
    pthread_join(*(pthread_t *)(&DAT_0002af88 + iVar1),(void **)0x0);
    if (*(FILE **)(&DAT_0002af84 + iVar1) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_0002af84 + iVar1));
      *(undefined4 *)(&DAT_0002af84 + iVar1) = 0;
    }
  }
  iVar1 = RK_MPI_VENC_StopRecvFrame(param_1);
  if (((iVar1 == 0) && (iVar1 = RK_MPI_VENC_DestroyChn(param_1), iVar1 == 0)) &&
     (*(int *)(&DAT_0002af8c + param_1 * 0x38) != 0)) {
    RK_MPI_MB_DestroyPool();
    return 0;
  }
  return iVar1;
}



/* ===== TEST_VENC_SnapProcess @ 00013c68 size=424 ===== */

undefined4 TEST_VENC_SnapProcess(undefined4 *param_1)

{
  FILE *__s;
  int iVar1;
  void *__ptr;
  undefined4 uVar2;
  undefined4 *local_1b0 [5];
  int local_19c;
  
  __s = (FILE *)0x0;
  if (((char *)param_1[9] == (char *)0x0) ||
     (__s = fopen64((char *)param_1[9],"wb"), __s != (FILE *)0x0)) {
    local_1b0[0] = malloc(0x88);
    while( true ) {
      while (iVar1 = RK_MPI_VENC_GetStream(*param_1,local_1b0,100), iVar1 < 0) {
        usleep(1000);
      }
      if (__s != (FILE *)0x0) {
        __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1b0[0]);
        RK_MPI_SYS_MmzFlushCache(*local_1b0[0],1);
        fwrite(__ptr,1,local_1b0[0][1],__s);
        fflush(__s);
      }
      if (local_1b0[0][5] == 1) break;
      RK_MPI_VENC_ReleaseStream(*param_1,local_1b0);
    }
    RK_LOG(4,0x17171700,"get chn %d stream %d","TEST_VENC_SnapProcess",200,*param_1,local_19c + 1);
    RK_LOG(4,0x17171700,"chn %d reach EOS stream","TEST_VENC_SnapProcess",0xc9,*param_1);
    RK_MPI_VENC_ReleaseStream(*param_1,local_1b0);
    if (local_1b0[0] != (undefined4 *)0x0) {
      free(local_1b0[0]);
    }
    uVar2 = 0;
    if (__s != (FILE *)0x0) {
      fclose(__s);
      uVar2 = 0;
    }
  }
  else {
    RK_LOG(2,0x17171700,"can\'t open file %s!","TEST_VENC_SnapProcess",0xb8,param_1[9]);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_VENC_SET_BitRate @ 00013e10 size=104 ===== */

undefined4
TEST_VENC_SET_BitRate(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 1:
  case 8:
    param_1[6] = param_2;
    return 0;
  case 2:
  case 3:
  case 9:
  case 10:
    param_1[6] = param_2;
    uVar1 = 0;
    param_1[7] = param_3;
    param_1[8] = param_4;
    break;
  default:
    uVar1 = 0xa0048008;
    break;
  case 5:
    param_1[5] = param_2;
    return 0;
  case 6:
    param_1[5] = param_2;
    param_1[6] = param_3;
    param_1[7] = param_4;
    return 0;
  }
  return uVar1;
}



/* ===== TEST_VENC_SET_StatTime @ 00013ea0 size=80 ===== */

undefined4 TEST_VENC_SET_StatTime(undefined4 *param_1,undefined4 param_2)

{
  switch(*param_1) {
  case 1:
  case 8:
    param_1[7] = param_2;
    return 0;
  case 2:
  case 3:
  case 9:
  case 10:
    param_1[9] = param_2;
    return 0;
  default:
    return 0xa0048008;
  case 5:
    param_1[6] = param_2;
    return 0;
  case 6:
    param_1[8] = param_2;
    return 0;
  }
}



/* ===== TEST_VENC_SET_GopSize @ 00013f18 size=44 ===== */

undefined4 TEST_VENC_SET_GopSize(undefined4 *param_1,undefined4 param_2)

{
  switch(*param_1) {
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
    param_1[1] = param_2;
    return 0;
  default:
    return 0xa0048008;
  }
}



/* ===== TEST_VENC_SET_FrameRate @ 00013f6c size=96 ===== */

undefined4 TEST_VENC_SET_FrameRate(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
    uVar1 = 0;
    param_1[2] = param_2;
    param_1[4] = param_2;
    param_1[3] = 1;
    param_1[5] = 1;
    break;
  default:
    uVar1 = 0xa0048008;
    break;
  case 5:
  case 6:
    param_1[1] = param_2;
    param_1[3] = param_2;
    param_1[2] = 1;
    param_1[4] = 1;
    return 0;
  }
  return uVar1;
}



/* ===== TEST_VENC_SET_FixQp @ 00013ff4 size=100 ===== */

undefined4 TEST_VENC_SET_FixQp(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 7) {
    param_1[5] = param_2;
    return 0;
  }
  if (iVar1 != 0xb) {
    if (iVar1 != 4) {
      return 0xa0048008;
    }
    param_1[6] = param_2;
    param_1[7] = param_3;
    param_1[8] = param_4;
    return 0;
  }
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  return 0;
}



/* ===== TEST_COMM_FillImage @ 000146d8 size=14224 ===== */

undefined4
TEST_COMM_FillImage(undefined8 *param_1,uint param_2,uint param_3,uint param_4,int param_5,
                   uint param_6,uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 *puVar87;
  undefined1 *puVar88;
  undefined1 *puVar89;
  undefined1 *puVar90;
  undefined4 uVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  char cVar98;
  uint uVar99;
  int iVar100;
  int iVar101;
  code *pcVar102;
  int iVar103;
  undefined8 *puVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  int iVar110;
  undefined8 *puVar111;
  undefined8 *puVar112;
  longlong lVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  uint local_110;
  uint local_b4;
  undefined8 *local_b0;
  
  uVar107 = param_5 * param_4;
  puVar104 = (undefined8 *)((int)param_1 + uVar107);
  local_110 = param_4;
  local_b0 = param_1;
  if (param_6 < 0x10006) {
    if (param_6 < 0x10000) {
      cVar95 = (char)param_7;
      if (param_6 == 8) {
        if (param_3 == 0) {
          return 0;
        }
        if (param_2 == 0) {
          return 0;
        }
        uVar106 = param_2 & 0xfffffff0;
        auVar133._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar133._0_8_ = 0x1000000010;
        auVar147._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar147._0_8_ = 0x400000004;
        auVar121._8_8_ = DAT_00016918;
        auVar121._0_8_ = DAT_00016910;
        auVar184._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar184._0_8_ = 0x800000008;
        auVar181._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar181._0_8_ = 0xc0000000c;
        uVar107 = 0;
        do {
          cVar94 = cVar95 * '\x03' + (char)uVar107;
          if (param_2 - 1 < 0xf) {
            uVar105 = 0;
LAB_00016b94:
            uVar99 = uVar105 + 1;
            *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
            if (uVar99 < param_2) {
              uVar108 = uVar105 + 2;
              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
              if (uVar108 < param_2) {
                uVar99 = uVar105 + 3;
                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 4;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 5;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 6;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 7;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 8;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 9;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 10;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 0xb;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 0xc;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xd;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar105 = uVar105 + 0xe;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar105 < param_2) {
                                        *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar81._8_8_ = uVar67;
            auVar81._0_8_ = uVar67;
            puVar111 = param_1;
            auVar157 = auVar121;
            do {
              auVar173 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar147 << 0x40 | auVar147),4);
              auVar167 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar181 << 0x40 | auVar181),4);
              auVar185 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar184 << 0x40 | auVar184),4);
              auVar179._0_8_ = VectorCopyNarrow(auVar157,4);
              auVar179._8_8_ = VectorCopyNarrow(auVar173,4);
              auVar157 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar133 << 0x40 | auVar133),4);
              auVar173._0_8_ = VectorCopyNarrow(auVar185,4);
              auVar173._8_8_ = VectorCopyNarrow(auVar167,4);
              auVar167._0_8_ = VectorCopyNarrow(auVar179,2);
              auVar167._8_8_ = VectorCopyNarrow(auVar173,2);
              auVar167 = VectorAdd(auVar167,auVar81,1);
              *puVar111 = auVar167._0_8_;
              puVar111[1] = auVar167._8_8_;
              puVar111 = puVar111 + 2;
            } while (puVar111 != (undefined8 *)(uVar106 + (int)param_1));
            uVar105 = uVar106;
            if (param_2 != uVar106) goto LAB_00016b94;
          }
          uVar107 = uVar107 + 1;
          param_1 = (undefined8 *)((int)param_1 + param_4);
        } while (param_3 != uVar107);
        uVar107 = param_2 >> 1;
        cVar94 = cVar95 * '\x05' + '@';
        if (uVar107 == 0) {
          return 0;
        }
        auVar157._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar157._0_8_ = 0x1000000010;
        auVar185._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar185._0_8_ = 0x400000004;
        auVar45._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar45._0_8_ = 0x800000008;
        auVar46._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar46._0_8_ = 0xc0000000c;
        uVar106 = (param_2 >> 5) * 0x10;
        uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
        uVar67 = CONCAT44(uVar91,uVar91);
        auVar82._8_8_ = uVar67;
        auVar82._0_8_ = uVar67;
        uVar105 = 0;
        auVar126._8_8_ = DAT_00016f38;
        auVar126._0_8_ = DAT_00016f30;
        do {
          cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
          if (uVar107 - 1 < 0xf) {
            uVar99 = 0;
LAB_00016d80:
            uVar108 = uVar99 + 1;
            *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
            *(char *)((int)puVar104 + uVar99 * 2) = cVar94 + (char)uVar99;
            if (uVar108 < uVar107) {
              uVar109 = uVar99 + 2;
              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
              *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
              if (uVar109 < uVar107) {
                uVar108 = uVar99 + 3;
                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 4;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 5;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 6;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 7;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 8;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 9;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 10;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 0xb;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 0xc;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xd;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar99 = uVar99 + 0xe;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2) =
                                           cVar94 + (char)uVar108;
                                      if (uVar99 < uVar107) {
                                        *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
                                        *(char *)((int)puVar104 + uVar99 * 2) =
                                             cVar94 + (char)uVar99;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            puVar111 = puVar104;
            auVar133 = auVar126;
            do {
              auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar185 << 0x40 | auVar185),4);
              auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar46 << 0x40 | auVar46),4);
              auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar45 << 0x40 | auVar45),4);
              auVar180._0_8_ = VectorCopyNarrow(auVar133,4);
              auVar180._8_8_ = VectorCopyNarrow(auVar184,4);
              auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar157 << 0x40 | auVar157),4);
              auVar174._0_8_ = VectorCopyNarrow(auVar181,4);
              auVar174._8_8_ = VectorCopyNarrow(auVar147,4);
              auVar168._0_8_ = VectorCopyNarrow(auVar180,2);
              auVar168._8_8_ = VectorCopyNarrow(auVar174,2);
              VectorAdd(auVar168,auVar82,1);
              puVar87 = (undefined1 *)0x380;
              puVar88 = (undefined1 *)0x390;
              lVar113 = 8;
              puVar112 = puVar111;
              while( true ) {
                *(undefined1 *)puVar112 = *puVar87;
                *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                puVar112 = (undefined8 *)((int)puVar112 + 2);
                lVar113 = lVar113 + -1;
                if (lVar113 == 0) break;
                puVar87 = puVar87 + 1;
                puVar88 = puVar88 + 1;
              }
              puVar87 = (undefined1 *)0x388;
              puVar88 = (undefined1 *)0x398;
              lVar113 = 8;
              while( true ) {
                *(undefined1 *)puVar112 = *puVar87;
                *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                puVar112 = (undefined8 *)((int)puVar112 + 2);
                lVar113 = lVar113 + -1;
                if (lVar113 == 0) break;
                puVar87 = puVar87 + 1;
                puVar88 = puVar88 + 1;
              }
              puVar111 = puVar111 + 4;
            } while (puVar111 != puVar104 + (param_2 >> 5) * 4);
            uVar99 = uVar106;
            if (uVar106 != uVar107) goto LAB_00016d80;
          }
          uVar105 = uVar105 + 1;
          puVar104 = (undefined8 *)((int)puVar104 + param_4);
          if (param_3 == uVar105) {
            return 0;
          }
        } while( true );
      }
      if (param_6 < 9) {
        if (param_6 == 4) {
          if (param_3 == 0) {
            return 0;
          }
          if (param_2 != 0) {
            uVar105 = param_2 & 0xfffffff0;
            auVar29._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar29._0_8_ = 0x1000000010;
            auVar30._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar30._0_8_ = 0x400000004;
            auVar31._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar31._0_8_ = 0x800000008;
            auVar117._8_8_ = DAT_00016218;
            auVar117._0_8_ = DAT_00016210;
            auVar32._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar32._0_8_ = 0xc0000000c;
            uVar106 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar106;
              if (param_2 - 1 < 0xf) {
                uVar99 = 0;
LAB_000162e8:
                uVar108 = uVar99 + 1;
                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                if (uVar108 < param_2) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                  if (uVar109 < param_2) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                    if (uVar108 < param_2) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                      if (uVar109 < param_2) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                        if (uVar108 < param_2) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                          if (uVar109 < param_2) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                            if (uVar108 < param_2) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                              if (uVar109 < param_2) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                if (uVar108 < param_2) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                  if (uVar109 < param_2) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                    if (uVar108 < param_2) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                      if (uVar109 < param_2) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                        if (uVar108 < param_2) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108
                                          ;
                                          if (uVar99 < param_2) {
                                            *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99
                                            ;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar77._8_8_ = uVar67;
                auVar77._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar117;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar30 << 0x40 | auVar30),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar32 << 0x40 | auVar32),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar31 << 0x40 | auVar31),4)
                  ;
                  auVar165._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar165._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar29 << 0x40 | auVar29),4)
                  ;
                  auVar155._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar155._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar141._0_8_ = VectorCopyNarrow(auVar165,2);
                  auVar141._8_8_ = VectorCopyNarrow(auVar155,2);
                  auVar147 = VectorAdd(auVar141,auVar77,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while ((undefined8 *)((int)param_1 + uVar105) != puVar111);
                uVar99 = uVar105;
                if (uVar105 != param_2) goto LAB_000162e8;
              }
              uVar106 = uVar106 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar106);
          }
          param_3 = param_3 >> 1;
          if (param_3 == 0) {
            return 0;
          }
          uVar106 = param_2 >> 1;
          if (uVar106 == 0) {
            return 0;
          }
          uVar105 = 0;
          puVar111 = puVar104;
          do {
            uVar99 = ((param_7 & 0xff) * 2 - 0x80 & 0xff) + uVar105;
            uVar105 = uVar105 + 1;
            memset(puVar111,uVar99 & 0xff,uVar106);
            puVar111 = (undefined8 *)((int)puVar111 + (param_4 >> 1));
          } while (uVar105 != param_3);
          auVar33._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar33._0_8_ = 0x1000000010;
          auVar34._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar34._0_8_ = 0x400000004;
          uVar105 = (param_2 >> 5) * 0x10;
          auVar35._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar35._0_8_ = 0x800000008;
          cVar95 = cVar95 * '\x05' + '@';
          auVar36._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar36._0_8_ = 0xc0000000c;
          puVar104 = (undefined8 *)((int)puVar104 + (uVar107 >> 2));
          auVar118._8_8_ = DAT_00016218;
          auVar118._0_8_ = DAT_00016210;
          uVar107 = 0;
          uVar91 = CONCAT22(CONCAT11(cVar95,cVar95),CONCAT11(cVar95,cVar95));
          uVar67 = CONCAT44(uVar91,uVar91);
          auVar78._8_8_ = uVar67;
          auVar78._0_8_ = uVar67;
          do {
            if (uVar106 - 1 < 0xf) {
              uVar99 = 0;
LAB_00016510:
              uVar108 = uVar99 + 1;
              *(char *)((int)puVar104 + uVar99) = cVar95 + (char)uVar99;
              if (uVar108 < uVar106) {
                uVar109 = uVar99 + 2;
                *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                if (uVar109 < uVar106) {
                  uVar108 = uVar99 + 3;
                  *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                  if (uVar108 < uVar106) {
                    uVar109 = uVar99 + 4;
                    *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                    if (uVar109 < uVar106) {
                      uVar108 = uVar99 + 5;
                      *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                      if (uVar108 < uVar106) {
                        uVar109 = uVar99 + 6;
                        *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                        if (uVar109 < uVar106) {
                          uVar108 = uVar99 + 7;
                          *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                          if (uVar108 < uVar106) {
                            uVar109 = uVar99 + 8;
                            *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                            if (uVar109 < uVar106) {
                              uVar108 = uVar99 + 9;
                              *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                              if (uVar108 < uVar106) {
                                uVar109 = uVar99 + 10;
                                *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                if (uVar109 < uVar106) {
                                  uVar108 = uVar99 + 0xb;
                                  *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                  if (uVar108 < uVar106) {
                                    uVar109 = uVar99 + 0xc;
                                    *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                    if (uVar109 < uVar106) {
                                      uVar108 = uVar99 + 0xd;
                                      *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                      if (uVar108 < uVar106) {
                                        uVar99 = uVar99 + 0xe;
                                        *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                        if (uVar99 < uVar106) {
                                          *(char *)((int)puVar104 + uVar99) = cVar95 + (char)uVar99;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              puVar111 = puVar104;
              auVar133 = auVar118;
              do {
                auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar34 << 0x40 | auVar34),4);
                auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar36 << 0x40 | auVar36),4);
                auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar35 << 0x40 | auVar35),4);
                auVar166._0_8_ = VectorCopyNarrow(auVar133,4);
                auVar166._8_8_ = VectorCopyNarrow(auVar184,4);
                auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar33 << 0x40 | auVar33),4);
                auVar156._0_8_ = VectorCopyNarrow(auVar181,4);
                auVar156._8_8_ = VectorCopyNarrow(auVar147,4);
                auVar142._0_8_ = VectorCopyNarrow(auVar166,2);
                auVar142._8_8_ = VectorCopyNarrow(auVar156,2);
                auVar147 = VectorAdd(auVar142,auVar78,1);
                *puVar111 = auVar147._0_8_;
                puVar111[1] = auVar147._8_8_;
                puVar111 = puVar111 + 2;
              } while (puVar104 + (param_2 >> 5) * 2 != puVar111);
              uVar99 = uVar105;
              if (uVar106 != uVar105) goto LAB_00016510;
            }
            uVar107 = uVar107 + 1;
            puVar104 = (undefined8 *)((int)puVar104 + (param_4 >> 1));
            if (uVar107 == param_3) {
              return 0;
            }
          } while( true );
        }
        if (param_6 < 5) {
          if (param_6 == 0) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar106 = param_2 & 0xfffffff0;
            auVar55._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar55._0_8_ = 0x1000000010;
            auVar56._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar56._0_8_ = 0x400000004;
            auVar57._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar57._0_8_ = 0x800000008;
            auVar122._8_8_ = DAT_000177f0;
            auVar122._0_8_ = DAT_000177e8;
            auVar58._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar58._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_000178b8:
                uVar99 = uVar105 + 1;
                *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 2;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 3;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 4;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 5;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 6;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 7;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 8;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 9;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 10;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xb;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar108 = uVar105 + 0xc;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar108 < param_2) {
                                        uVar99 = uVar105 + 0xd;
                                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                        if (uVar99 < param_2) {
                                          uVar105 = uVar105 + 0xe;
                                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                          if (uVar105 < param_2) {
                                            *(char *)((int)param_1 + uVar105) =
                                                 cVar94 + (char)uVar105;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar85._8_8_ = uVar67;
                auVar85._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar122;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar56 << 0x40 | auVar56),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar58 << 0x40 | auVar58),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar57 << 0x40 | auVar57),4)
                  ;
                  auVar169._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar169._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar55 << 0x40 | auVar55),4)
                  ;
                  auVar158._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar158._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar145._0_8_ = VectorCopyNarrow(auVar169,2);
                  auVar145._8_8_ = VectorCopyNarrow(auVar158,2);
                  auVar147 = VectorAdd(auVar145,auVar85,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while ((undefined8 *)((int)param_1 + uVar106) != puVar111);
                uVar105 = uVar106;
                if (param_2 != uVar106) goto LAB_000178b8;
              }
              uVar107 = uVar107 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar107);
            if (param_3 >> 1 == 0) {
              return 0;
            }
            cVar94 = cVar95 * '\x05' + '@';
            uVar107 = param_2 >> 1;
            if (uVar107 == 0) {
              return 0;
            }
            auVar59._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar59._0_8_ = 0x1000000010;
            auVar60._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar60._0_8_ = 0x400000004;
            auVar61._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar61._0_8_ = 0x800000008;
            auVar62._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar62._0_8_ = 0xc0000000c;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar86._8_8_ = uVar67;
            auVar86._0_8_ = uVar67;
            uVar105 = 0;
            auVar129._8_8_ = DAT_000177f0;
            auVar129._0_8_ = DAT_000177e8;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00017ab0:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                       cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                         cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                        *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                          *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                                            *(char *)((int)puVar104 + uVar99 * 2 + 1) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar129;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar60 << 0x40 | auVar60),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar62 << 0x40 | auVar62),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar61 << 0x40 | auVar61),4)
                  ;
                  auVar170._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar170._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar59 << 0x40 | auVar59),4)
                  ;
                  auVar159._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar159._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar146._0_8_ = VectorCopyNarrow(auVar170,2);
                  auVar146._8_8_ = VectorCopyNarrow(auVar159,2);
                  VectorAdd(auVar146,auVar86,1);
                  puVar87 = (undefined1 *)0x3e0;
                  puVar88 = (undefined1 *)0x3f0;
                  lVar113 = 8;
                  puVar112 = puVar111;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar87 = (undefined1 *)0x3e8;
                  puVar88 = (undefined1 *)0x3f8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar111 = puVar111 + 4;
                } while (puVar104 + (param_2 >> 5) * 4 != puVar111);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00017ab0;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + param_4);
              if (uVar105 == param_3 >> 1) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 2) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar106 = param_2 & 0xfffffff0;
            auVar17._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar17._0_8_ = 0x1000000010;
            auVar18._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar18._0_8_ = 0x400000004;
            auVar119._8_8_ = DAT_00015420;
            auVar119._0_8_ = DAT_00015418;
            auVar19._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar19._0_8_ = 0x800000008;
            auVar20._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar20._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_00015780:
                uVar99 = uVar105 + 1;
                *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 2;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 3;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 4;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 5;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 6;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 7;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 8;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 9;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 10;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xb;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar108 = uVar105 + 0xc;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar108 < param_2) {
                                        uVar99 = uVar105 + 0xd;
                                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                        if (uVar99 < param_2) {
                                          uVar105 = uVar105 + 0xe;
                                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                          if (uVar105 < param_2) {
                                            *(char *)((int)param_1 + uVar105) =
                                                 cVar94 + (char)uVar105;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar74._8_8_ = uVar67;
                auVar74._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar119;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar18 << 0x40 | auVar18),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar20 << 0x40 | auVar20),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar19 << 0x40 | auVar19),4)
                  ;
                  auVar162._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar162._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar17 << 0x40 | auVar17),4)
                  ;
                  auVar152._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar152._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar138._0_8_ = VectorCopyNarrow(auVar162,2);
                  auVar138._8_8_ = VectorCopyNarrow(auVar152,2);
                  auVar147 = VectorAdd(auVar138,auVar74,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while ((undefined8 *)((int)param_1 + uVar106) != puVar111);
                uVar105 = uVar106;
                if (uVar106 != param_2) goto LAB_00015780;
              }
              uVar107 = uVar107 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar107);
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar21._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar21._0_8_ = 0x1000000010;
            auVar22._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar22._0_8_ = 0x400000004;
            auVar23._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar23._0_8_ = 0x800000008;
            auVar24._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar24._0_8_ = 0xc0000000c;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar75._8_8_ = uVar67;
            auVar75._0_8_ = uVar67;
            uVar105 = 0;
            auVar124._8_8_ = DAT_00015b28;
            auVar124._0_8_ = DAT_00015b20;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00015970:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                       cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                         cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                        *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                          *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                                            *(char *)((int)puVar104 + uVar99 * 2 + 1) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar124;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar22 << 0x40 | auVar22),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar24 << 0x40 | auVar24),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar23 << 0x40 | auVar23),4)
                  ;
                  auVar163._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar163._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar21 << 0x40 | auVar21),4)
                  ;
                  auVar153._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar153._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar139._0_8_ = VectorCopyNarrow(auVar163,2);
                  auVar139._8_8_ = VectorCopyNarrow(auVar153,2);
                  VectorAdd(auVar139,auVar75,1);
                  puVar87 = (undefined1 *)0x3c0;
                  puVar88 = (undefined1 *)0x3d0;
                  lVar113 = 8;
                  puVar112 = puVar111;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar87 = (undefined1 *)0x3c8;
                  puVar88 = (undefined1 *)0x3d8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar111 = puVar111 + 4;
                } while (puVar104 + (param_2 >> 5) * 4 != puVar111);
                uVar99 = uVar106;
                if (uVar106 != uVar107) goto LAB_00015970;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + param_4);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
        else {
          if (param_6 == 6) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar106 = param_2 & 0xfffffff0;
            auVar37._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar37._0_8_ = 0x1000000010;
            auVar38._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar38._0_8_ = 0x400000004;
            auVar120._8_8_ = DAT_00016918;
            auVar120._0_8_ = DAT_00016910;
            auVar39._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar39._0_8_ = 0x800000008;
            auVar40._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar40._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_00016708:
                uVar99 = uVar105 + 1;
                *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 2;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 3;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 4;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 5;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 6;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 7;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 8;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 9;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 10;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xb;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar108 = uVar105 + 0xc;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar108 < param_2) {
                                        uVar99 = uVar105 + 0xd;
                                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                        if (uVar99 < param_2) {
                                          uVar105 = uVar105 + 0xe;
                                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                          if (uVar105 < param_2) {
                                            *(char *)((int)param_1 + uVar105) =
                                                 cVar94 + (char)uVar105;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar79._8_8_ = uVar67;
                auVar79._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar120;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar38 << 0x40 | auVar38),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar40 << 0x40 | auVar40),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar39 << 0x40 | auVar39),4)
                  ;
                  auVar177._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar177._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar37 << 0x40 | auVar37),4)
                  ;
                  auVar171._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar171._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar143._0_8_ = VectorCopyNarrow(auVar177,2);
                  auVar143._8_8_ = VectorCopyNarrow(auVar171,2);
                  auVar147 = VectorAdd(auVar143,auVar79,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while (puVar111 != (undefined8 *)(uVar106 + (int)param_1));
                uVar105 = uVar106;
                if (param_2 != uVar106) goto LAB_00016708;
              }
              uVar107 = uVar107 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar107);
            if (param_3 >> 1 == 0) {
              return 0;
            }
            cVar94 = cVar95 * '\x05' + '@';
            uVar107 = param_2 >> 1;
            if (uVar107 == 0) {
              return 0;
            }
            auVar41._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar41._0_8_ = 0x1000000010;
            auVar42._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar42._0_8_ = 0x400000004;
            auVar43._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar43._0_8_ = 0x800000008;
            auVar44._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar44._0_8_ = 0xc0000000c;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar80._8_8_ = uVar67;
            auVar80._0_8_ = uVar67;
            uVar105 = 0;
            auVar125._8_8_ = DAT_00016918;
            auVar125._0_8_ = DAT_00016910;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00016920:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
                *(char *)((int)puVar104 + uVar99 * 2) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                        *(char *)((int)puVar104 + uVar109 * 2) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                          *(char *)((int)puVar104 + uVar108 * 2) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
                                            *(char *)((int)puVar104 + uVar99 * 2) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar125;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar42 << 0x40 | auVar42),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar44 << 0x40 | auVar44),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar43 << 0x40 | auVar43),4)
                  ;
                  auVar178._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar178._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar41 << 0x40 | auVar41),4)
                  ;
                  auVar172._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar172._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar144._0_8_ = VectorCopyNarrow(auVar178,2);
                  auVar144._8_8_ = VectorCopyNarrow(auVar172,2);
                  VectorAdd(auVar144,auVar80,1);
                  puVar87 = (undefined1 *)0x3a0;
                  puVar88 = (undefined1 *)0x3b0;
                  lVar113 = 8;
                  puVar112 = puVar111;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar87 = (undefined1 *)0x3a8;
                  puVar88 = (undefined1 *)0x3b8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar111 = puVar111 + 4;
                } while (puVar111 != puVar104 + (param_2 >> 5) * 4);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00016920;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + param_4);
              if (uVar105 == param_3 >> 1) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 7) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar105 = param_2 & 0xfffffff0;
            auVar9._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar9._0_8_ = 0x1000000010;
            auVar10._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar10._0_8_ = 0x400000004;
            auVar11._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar11._0_8_ = 0x800000008;
            auVar114._8_8_ = DAT_00015420;
            auVar114._0_8_ = DAT_00015418;
            auVar12._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar12._0_8_ = 0xc0000000c;
            uVar106 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar106;
              if (param_2 - 1 < 0xf) {
                uVar99 = 0;
LAB_000150c4:
                uVar108 = uVar99 + 1;
                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                if (uVar108 < param_2) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                  if (uVar109 < param_2) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                    if (uVar108 < param_2) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                      if (uVar109 < param_2) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                        if (uVar108 < param_2) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                          if (uVar109 < param_2) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                            if (uVar108 < param_2) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                              if (uVar109 < param_2) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                if (uVar108 < param_2) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                  if (uVar109 < param_2) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                    if (uVar108 < param_2) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                      if (uVar109 < param_2) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                        if (uVar108 < param_2) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108
                                          ;
                                          if (uVar99 < param_2) {
                                            *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99
                                            ;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar72._8_8_ = uVar67;
                auVar72._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar114;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar10 << 0x40 | auVar10),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar12 << 0x40 | auVar12),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar11 << 0x40 | auVar11),4)
                  ;
                  auVar160._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar160._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar9 << 0x40 | auVar9),4);
                  auVar150._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar150._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar136._0_8_ = VectorCopyNarrow(auVar160,2);
                  auVar136._8_8_ = VectorCopyNarrow(auVar150,2);
                  auVar147 = VectorAdd(auVar136,auVar72,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while (puVar111 != (undefined8 *)(uVar105 + (int)param_1));
                uVar99 = uVar105;
                if (uVar105 != param_2) goto LAB_000150c4;
              }
              uVar106 = uVar106 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar106);
            uVar106 = param_2 >> 1;
            if (uVar106 == 0) {
              return 0;
            }
            uVar105 = 0;
            puVar111 = puVar104;
            do {
              uVar99 = uVar105 >> 1;
              uVar105 = uVar105 + 1;
              memset(puVar111,((param_7 & 0xff) * 2 - 0x80 & 0xff) + uVar99 & 0xff,uVar106);
              puVar111 = (undefined8 *)((int)puVar111 + (param_4 >> 1));
            } while (param_3 != uVar105);
            auVar13._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar13._0_8_ = 0x1000000010;
            auVar14._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar14._0_8_ = 0x400000004;
            auVar15._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar15._0_8_ = 0x800000008;
            cVar95 = cVar95 * '\x05' + '@';
            puVar104 = (undefined8 *)((int)puVar104 + (uVar107 >> 1));
            auVar16._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar16._0_8_ = 0xc0000000c;
            uVar107 = (param_2 >> 5) * 0x10;
            auVar115._8_8_ = DAT_00015420;
            auVar115._0_8_ = DAT_00015418;
            uVar105 = 0;
            uVar91 = CONCAT22(CONCAT11(cVar95,cVar95),CONCAT11(cVar95,cVar95));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar73._8_8_ = uVar67;
            auVar73._0_8_ = uVar67;
            do {
              if (uVar106 - 1 < 0xf) {
                uVar99 = 0;
LAB_000152e4:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99) = cVar95 + (char)uVar99;
                if (uVar108 < uVar106) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                  if (uVar109 < uVar106) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                    if (uVar108 < uVar106) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                      if (uVar109 < uVar106) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                        if (uVar108 < uVar106) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                          if (uVar109 < uVar106) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                            if (uVar108 < uVar106) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                              if (uVar109 < uVar106) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                if (uVar108 < uVar106) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                  if (uVar109 < uVar106) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                    if (uVar108 < uVar106) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                      if (uVar109 < uVar106) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                        if (uVar108 < uVar106) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108) =
                                               cVar95 + (char)uVar108;
                                          if (uVar99 < uVar106) {
                                            *(char *)((int)puVar104 + uVar99) =
                                                 cVar95 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar115;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar14 << 0x40 | auVar14),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar16 << 0x40 | auVar16),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar15 << 0x40 | auVar15),4)
                  ;
                  auVar161._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar161._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar13 << 0x40 | auVar13),4)
                  ;
                  auVar151._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar151._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar137._0_8_ = VectorCopyNarrow(auVar161,2);
                  auVar137._8_8_ = VectorCopyNarrow(auVar151,2);
                  auVar147 = VectorAdd(auVar137,auVar73,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while (puVar111 != puVar104 + (param_2 >> 5) * 2);
                uVar99 = uVar107;
                if (uVar106 != uVar107) goto LAB_000152e4;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + (param_4 >> 1));
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
      }
      else {
        if (param_6 == 0xb) {
          if (param_3 == 0) {
            return 0;
          }
          if (param_2 == 0) {
            return 0;
          }
          uVar106 = param_2 & 0xfffffff0;
          auVar25._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar25._0_8_ = 0x1000000010;
          auVar26._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar26._0_8_ = 0x400000004;
          auVar116._8_8_ = DAT_00016218;
          auVar116._0_8_ = DAT_00016210;
          auVar27._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar27._0_8_ = 0x800000008;
          auVar28._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar28._0_8_ = 0xc0000000c;
          uVar107 = 0;
          do {
            cVar94 = cVar95 * '\x03' + (char)uVar107;
            if (param_2 - 1 < 0xf) {
              uVar105 = 0;
LAB_000160a8:
              uVar99 = uVar105 + 1;
              *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
              if (uVar99 < param_2) {
                uVar108 = uVar105 + 2;
                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                if (uVar108 < param_2) {
                  uVar99 = uVar105 + 3;
                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                  if (uVar99 < param_2) {
                    uVar108 = uVar105 + 4;
                    *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                    if (uVar108 < param_2) {
                      uVar99 = uVar105 + 5;
                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                      if (uVar99 < param_2) {
                        uVar108 = uVar105 + 6;
                        *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                        if (uVar108 < param_2) {
                          uVar99 = uVar105 + 7;
                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                          if (uVar99 < param_2) {
                            uVar108 = uVar105 + 8;
                            *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                            if (uVar108 < param_2) {
                              uVar99 = uVar105 + 9;
                              *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                              if (uVar99 < param_2) {
                                uVar108 = uVar105 + 10;
                                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                if (uVar108 < param_2) {
                                  uVar99 = uVar105 + 0xb;
                                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                  if (uVar99 < param_2) {
                                    uVar108 = uVar105 + 0xc;
                                    *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                    if (uVar108 < param_2) {
                                      uVar99 = uVar105 + 0xd;
                                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                      if (uVar99 < param_2) {
                                        uVar105 = uVar105 + 0xe;
                                        *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                        if (uVar105 < param_2) {
                                          *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105
                                          ;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
              uVar67 = CONCAT44(uVar91,uVar91);
              auVar76._8_8_ = uVar67;
              auVar76._0_8_ = uVar67;
              puVar104 = param_1;
              auVar133 = auVar116;
              do {
                auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar26 << 0x40 | auVar26),4);
                auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar28 << 0x40 | auVar28),4);
                auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar27 << 0x40 | auVar27),4);
                auVar164._0_8_ = VectorCopyNarrow(auVar133,4);
                auVar164._8_8_ = VectorCopyNarrow(auVar184,4);
                auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar25 << 0x40 | auVar25),4);
                auVar154._0_8_ = VectorCopyNarrow(auVar181,4);
                auVar154._8_8_ = VectorCopyNarrow(auVar147,4);
                auVar140._0_8_ = VectorCopyNarrow(auVar164,2);
                auVar140._8_8_ = VectorCopyNarrow(auVar154,2);
                auVar147 = VectorAdd(auVar140,auVar76,1);
                *puVar104 = auVar147._0_8_;
                puVar104[1] = auVar147._8_8_;
                puVar104 = puVar104 + 2;
              } while (puVar104 != (undefined8 *)(uVar106 + (int)param_1));
              uVar105 = uVar106;
              if (param_2 != uVar106) goto LAB_000160a8;
            }
            uVar107 = uVar107 + 1;
            param_1 = (undefined8 *)((int)param_1 + param_4);
            if (param_3 == uVar107) {
              return 0;
            }
          } while( true );
        }
        if (param_6 < 0xc) {
          if (param_6 == 9) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar51._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar51._0_8_ = 0x1000000010;
            auVar52._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar52._0_8_ = 0x400000004;
            auVar53._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar53._0_8_ = 0x800000008;
            auVar54._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar54._0_8_ = 0xc0000000c;
            auVar66._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar66._0_8_ = 0x101010101010101;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar84._8_8_ = uVar67;
            auVar84._0_8_ = uVar67;
            uVar105 = 0;
            auVar128._8_8_ = DAT_000177f0;
            auVar128._0_8_ = DAT_000177e8;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_000174cc:
                uVar108 = uVar99 + 1;
                cVar92 = cVar93 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar94 + (char)uVar99;
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar98;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar93 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar93 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar93 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108
                                  ;
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) =
                                         cVar94 + (char)uVar109;
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                           cVar94 + (char)uVar108;
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) =
                                             cVar94 + (char)uVar109;
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                               cVar94 + (char)uVar108;
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                                          if (uVar99 < uVar107) {
                                            cVar93 = cVar93 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) =
                                                 cVar94 + (char)uVar99;
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) =
                                                 cVar93 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar98;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar93,cVar93),CONCAT11(cVar93,cVar93));
                auVar97._12_4_ = uVar91;
                auVar97._8_4_ = uVar91;
                puVar104 = param_1;
                auVar133 = auVar128;
                do {
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar52 << 0x40 | auVar52),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar54 << 0x40 | auVar54),4)
                  ;
                  puVar112 = puVar104 + 8;
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar53 << 0x40 | auVar53),4)
                  ;
                  auVar187._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar187._8_8_ = VectorCopyNarrow(auVar181,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar51 << 0x40 | auVar51),4)
                  ;
                  auVar183._0_8_ = VectorCopyNarrow(auVar184,4);
                  auVar183._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar131._0_8_ = VectorCopyNarrow(auVar187,2);
                  auVar131._8_8_ = VectorCopyNarrow(auVar183,2);
                  auVar97._4_4_ = uVar91;
                  auVar97._0_4_ = uVar91;
                  auVar147 = VectorAdd(auVar131,auVar131,1);
                  VectorAdd(auVar131,auVar84,1);
                  auVar147 = VectorAdd(auVar147,auVar97,1);
                  VectorAdd(auVar147,*(undefined1 (*) [16])(auVar66 << 0x40 | auVar66),1);
                  puVar87 = (undefined1 *)0x380;
                  puVar88 = (undefined1 *)0x390;
                  puVar89 = (undefined1 *)0x3a0;
                  puVar90 = (undefined1 *)0x3b0;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x388;
                  puVar88 = (undefined1 *)0x398;
                  puVar89 = (undefined1 *)0x3a8;
                  puVar90 = (undefined1 *)0x3b8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_000174cc;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 10) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar5._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar5._0_8_ = 0x1000000010;
            auVar6._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar6._0_8_ = 0xc0000000c;
            auVar64._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar64._0_8_ = 0x101010101010101;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar70._8_8_ = uVar67;
            auVar70._0_8_ = uVar67;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar105 = 0;
            auVar123._8_8_ = DAT_00014b90;
            auVar123._0_8_ = DAT_00014b88;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00014cc4:
                uVar108 = uVar99 + 1;
                cVar92 = cVar93 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4) = cVar98;
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar93 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar93 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar93 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108
                                  ;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) =
                                         cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            cVar93 = cVar93 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) =
                                                 cVar93 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4) = cVar98;
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar93,cVar93),CONCAT11(cVar93,cVar93));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar71._8_8_ = uVar67;
                auVar71._0_8_ = uVar67;
                puVar104 = param_1;
                auVar133 = auVar123;
                do {
                  auVar7._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                  auVar7._0_8_ = 0x800000008;
                  auVar8._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                  auVar8._0_8_ = 0x400000004;
                  puVar112 = puVar104 + 8;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar7 << 0x40 | auVar7),4);
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar8 << 0x40 | auVar8),4);
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar6 << 0x40 | auVar6),4);
                  auVar176._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar176._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar5 << 0x40 | auVar5),4);
                  auVar135._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar135._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar149._0_8_ = VectorCopyNarrow(auVar176,2);
                  auVar149._8_8_ = VectorCopyNarrow(auVar135,2);
                  auVar147 = VectorAdd(auVar149,auVar149,1);
                  VectorAdd(auVar149,auVar70,1);
                  auVar147 = VectorAdd(auVar147,auVar71,1);
                  VectorAdd(auVar147,*(undefined1 (*) [16])(auVar64 << 0x40 | auVar64),1);
                  puVar87 = (undefined1 *)0x3f0;
                  puVar88 = (undefined1 *)0x400;
                  puVar89 = (undefined1 *)0x410;
                  puVar90 = (undefined1 *)0x420;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x3f8;
                  puVar88 = (undefined1 *)0x408;
                  puVar89 = (undefined1 *)0x418;
                  puVar90 = (undefined1 *)0x428;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00014cc4;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
        else {
          if (param_6 == 0x11) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar47._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar47._0_8_ = 0x1000000010;
            auVar48._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar48._0_8_ = 0x400000004;
            auVar49._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar49._0_8_ = 0x800000008;
            auVar50._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar50._0_8_ = 0xc0000000c;
            auVar65._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar65._0_8_ = 0x101010101010101;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar83._8_8_ = uVar67;
            auVar83._0_8_ = uVar67;
            uVar105 = 0;
            auVar127._8_8_ = DAT_00016f38;
            auVar127._0_8_ = DAT_00016f30;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00017078:
                uVar108 = uVar99 + 1;
                cVar92 = cVar93 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar94 + (char)uVar99;
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar98;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar93 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar93 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar93 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108
                                  ;
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) =
                                         cVar94 + (char)uVar109;
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) =
                                           cVar94 + (char)uVar108;
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) =
                                             cVar94 + (char)uVar109;
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) =
                                               cVar94 + (char)uVar108;
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                                          if (uVar99 < uVar107) {
                                            cVar93 = cVar93 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) =
                                                 cVar94 + (char)uVar99;
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) =
                                                 cVar93 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar98;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar93,cVar93),CONCAT11(cVar93,cVar93));
                auVar96._12_4_ = uVar91;
                auVar96._8_4_ = uVar91;
                puVar104 = param_1;
                auVar133 = auVar127;
                do {
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar48 << 0x40 | auVar48),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar50 << 0x40 | auVar50),4)
                  ;
                  puVar112 = puVar104 + 8;
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar49 << 0x40 | auVar49),4)
                  ;
                  auVar186._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar186._8_8_ = VectorCopyNarrow(auVar181,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar47 << 0x40 | auVar47),4)
                  ;
                  auVar182._0_8_ = VectorCopyNarrow(auVar184,4);
                  auVar182._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar130._0_8_ = VectorCopyNarrow(auVar186,2);
                  auVar130._8_8_ = VectorCopyNarrow(auVar182,2);
                  auVar96._4_4_ = uVar91;
                  auVar96._0_4_ = uVar91;
                  auVar147 = VectorAdd(auVar130,auVar130,1);
                  VectorAdd(auVar130,auVar83,1);
                  auVar147 = VectorAdd(auVar147,auVar96,1);
                  VectorAdd(auVar147,*(undefined1 (*) [16])(auVar65 << 0x40 | auVar65),1);
                  puVar87 = (undefined1 *)0x380;
                  puVar88 = (undefined1 *)0x390;
                  puVar89 = (undefined1 *)0x3a0;
                  puVar90 = (undefined1 *)0x3b0;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x388;
                  puVar88 = (undefined1 *)0x398;
                  puVar89 = (undefined1 *)0x3a8;
                  puVar90 = (undefined1 *)0x3b8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00017078;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 0x12) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar1._0_8_ = 0x400000004;
            auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar2._0_8_ = 0x800000008;
            auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar3._0_8_ = 0xc0000000c;
            auVar63._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar63._0_8_ = 0x101010101010101;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar68._8_8_ = uVar67;
            auVar68._0_8_ = uVar67;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar105 = 0;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar98 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00014860:
                uVar108 = uVar99 + 1;
                cVar92 = cVar98 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar93;
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar98 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar98 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar98 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar98 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar98 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar98 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar98 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar98 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar98 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar98 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar98 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108
                                      ;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar98 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar98 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            cVar98 = cVar98 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar98;
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) =
                                                 cVar98 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar98,cVar98),CONCAT11(cVar98,cVar98));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar69._8_8_ = uVar67;
                auVar69._0_8_ = uVar67;
                auVar132._8_8_ = DAT_00014b90;
                auVar132._0_8_ = DAT_00014b88;
                puVar104 = param_1;
                do {
                  auVar133 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),4);
                  auVar147 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar3 << 0x40 | auVar3),4);
                  puVar112 = puVar104 + 8;
                  auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),4);
                  auVar175._0_8_ = VectorCopyNarrow(auVar132,4);
                  auVar175._8_8_ = VectorCopyNarrow(auVar133,4);
                  auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                  auVar4._0_8_ = 0x1000000010;
                  auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar4 << 0x40 | auVar4),4);
                  auVar134._0_8_ = VectorCopyNarrow(auVar184,4);
                  auVar134._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar148._0_8_ = VectorCopyNarrow(auVar175,2);
                  auVar148._8_8_ = VectorCopyNarrow(auVar134,2);
                  auVar133 = VectorAdd(auVar148,auVar148,1);
                  VectorAdd(auVar148,auVar68,1);
                  auVar133 = VectorAdd(auVar133,auVar69,1);
                  VectorAdd(auVar133,*(undefined1 (*) [16])(auVar63 << 0x40 | auVar63),1);
                  puVar87 = (undefined1 *)0x330;
                  puVar88 = (undefined1 *)0x340;
                  puVar89 = (undefined1 *)0x350;
                  puVar90 = (undefined1 *)0x360;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x338;
                  puVar88 = (undefined1 *)0x348;
                  puVar89 = (undefined1 *)0x358;
                  puVar90 = (undefined1 *)0x368;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00014860;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
      }
      goto LAB_000161d8;
    }
  }
  else if (param_6 < 0x1000e) {
    if (param_6 < 0x1000a) {
      if (0x10007 < param_6) {
LAB_00015b50:
        pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
        if (DAT_0002bd84 == 0) {
          if ((int)param_4 < (int)(param_2 * 4)) {
            RK_LOG(3,0x17171700,
                   "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
                   "util_check_stride_by_pixel",0x1bf,param_4,param_2,4);
            RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
                   "util_check_stride_by_pixel",0x1c1,param_4,4,param_4 << 2);
            goto LAB_00017d54;
          }
        }
        else {
LAB_00017d54:
          local_110 = param_4 << 2;
          DAT_0002bd84 = 1;
        }
        if (DAT_0002bd80 == 0) {
          uVar107 = local_110 + 0x1f & 0xffffffe0;
          if (local_110 == uVar107) goto LAB_00015c28;
          RK_LOG(3,0x17171700,
                 "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
                 ,"util_check_8_pixel_aligned",0x1cd,"32bit RGB",4);
          RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
                 "util_check_8_pixel_aligned",0x1cf,uVar107);
        }
        local_110 = local_110 + 0x1f & 0xffffffe0;
        DAT_0002bd80 = 1;
LAB_00015c28:
        if (param_3 == 0) {
          return 0;
        }
        param_7 = param_7 & 0xff;
        if (param_2 == 0) {
          return 0;
        }
        local_b4 = 0;
        do {
          uVar107 = 0;
          iVar110 = ((param_7 * 2 - 0x80 & 0xff) + (int)local_b4 / 2 & 0xff) - 0x80;
          puVar104 = local_b0;
          do {
            while( true ) {
              iVar101 = ((param_7 * 5 + 0x40 & 0xff) + ((int)uVar107 >> 1) & 0xff) - 0x80;
              uVar106 = ((param_7 * 3 & 0xff) + local_b4 & 0xff) + uVar107 & 0xff;
              iVar100 = uVar106 + (iVar101 * 0x168 >> 8);
              iVar103 = uVar106 - (iVar101 * 0xb8 + iVar110 * 0x58 >> 8);
              iVar101 = 0;
              if ((-1 < iVar100) && (iVar101 = iVar100, 0xfe < iVar100)) {
                iVar101 = 0xff;
              }
              iVar100 = 0;
              if ((-1 < iVar103) && (iVar100 = iVar103, 0xfe < iVar103)) {
                iVar100 = 0xff;
              }
              if ((int)(uVar106 + (iVar110 * 0x1c7 >> 8)) < 0) break;
              uVar107 = uVar107 + 1;
              (*pcVar102)();
              puVar104 = (undefined8 *)((int)puVar104 + 4);
              if (param_2 == uVar107) goto LAB_00015d70;
            }
            uVar107 = uVar107 + 1;
            (*pcVar102)(puVar104,iVar101,iVar100,0,1);
            puVar104 = (undefined8 *)((int)puVar104 + 4);
          } while (param_2 != uVar107);
LAB_00015d70:
          local_b0 = (undefined8 *)((int)local_b0 + local_110);
          local_b4 = local_b4 + 1;
          if (param_3 == local_b4) {
            return 0;
          }
        } while( true );
      }
      pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
      if (DAT_0002bd84 == 0) {
        if ((int)param_4 < (int)(param_2 * 3)) {
          iVar110 = param_4 * 2;
          RK_LOG(3,0x17171700,
                 "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
                 "util_check_stride_by_pixel",0x1bf,param_4,param_2,3);
          RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
                 "util_check_stride_by_pixel",0x1c1,param_4,3,param_4 * 3);
          goto LAB_00017de0;
        }
      }
      else {
        iVar110 = param_4 << 1;
LAB_00017de0:
        local_110 = iVar110 + param_4;
        DAT_0002bd84 = 1;
      }
      if (DAT_0002bd80 == 0) {
        uVar107 = local_110 + 0x17 & 0xffffffe8;
        if (uVar107 == local_110) goto LAB_00015534;
        RK_LOG(3,0x17171700,
               "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
               ,"util_check_8_pixel_aligned",0x1cd,"24bit RGB",3);
        RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
               "util_check_8_pixel_aligned",0x1cf,uVar107);
      }
      local_110 = local_110 + 0x17 & 0xffffffe8;
      DAT_0002bd80 = 1;
LAB_00015534:
      if (param_3 == 0) {
        return 0;
      }
      param_7 = param_7 & 0xff;
      if (param_2 == 0) {
        return 0;
      }
      local_b4 = 0;
      do {
        uVar107 = 0;
        iVar110 = ((param_7 * 2 - 0x80 & 0xff) + (int)local_b4 / 2 & 0xff) - 0x80;
        puVar104 = local_b0;
        do {
          while( true ) {
            iVar101 = ((param_7 * 5 + 0x40 & 0xff) + ((int)uVar107 >> 1) & 0xff) - 0x80;
            uVar106 = ((param_7 * 3 & 0xff) + local_b4 & 0xff) + uVar107 & 0xff;
            iVar100 = uVar106 + (iVar101 * 0x168 >> 8);
            iVar103 = uVar106 - (iVar101 * 0xb8 + iVar110 * 0x58 >> 8);
            iVar101 = 0;
            if ((-1 < iVar100) && (iVar101 = iVar100, 0xfe < iVar100)) {
              iVar101 = 0xff;
            }
            iVar100 = 0;
            if ((-1 < iVar103) && (iVar100 = iVar103, 0xfe < iVar103)) {
              iVar100 = 0xff;
            }
            if ((int)(uVar106 + (iVar110 * 0x1c7 >> 8)) < 0) break;
            uVar107 = uVar107 + 1;
            (*pcVar102)();
            puVar104 = (undefined8 *)((int)puVar104 + 3);
            if (param_2 == uVar107) goto LAB_0001567c;
          }
          uVar107 = uVar107 + 1;
          (*pcVar102)(puVar104,iVar101,iVar100,0,1);
          puVar104 = (undefined8 *)((int)puVar104 + 3);
        } while (param_2 != uVar107);
LAB_0001567c:
        local_b0 = (undefined8 *)((int)local_b0 + local_110);
        local_b4 = local_b4 + 1;
        if (param_3 == local_b4) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (param_6 < 0x10010) {
LAB_000161d8:
      RK_LOG(2,0x17171700,"filling function do not support type %d\n","TEST_COMM_FillImage",0x2ea,
             param_6);
      return 0xffffffff;
    }
    if (param_6 < 0x10014) goto LAB_00015b50;
    if (0x10016 < param_6) goto LAB_000161d8;
  }
  pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
  if (DAT_0002bd84 == 0) {
    if ((int)param_4 < (int)(param_2 * 2)) {
      RK_LOG(3,0x17171700,
             "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
             "util_check_stride_by_pixel",0x1bf,param_4,param_2,2);
      RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
             "util_check_stride_by_pixel",0x1c1,param_4,2,param_4 << 1);
      goto LAB_00017cd0;
    }
  }
  else {
LAB_00017cd0:
    local_110 = param_4 << 1;
    DAT_0002bd84 = 1;
  }
  if (DAT_0002bd80 == 0) {
    uVar107 = local_110 + 0xf & 0xfffffff0;
    if (local_110 == uVar107) goto LAB_00015e84;
    RK_LOG(3,0x17171700,
           "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
           ,"util_check_8_pixel_aligned",0x1cd,"16bit RGB",2);
    RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
           "util_check_8_pixel_aligned",0x1cf,uVar107);
  }
  local_110 = local_110 + 0xf & 0xfffffff0;
  DAT_0002bd80 = 1;
LAB_00015e84:
  if (param_3 != 0) {
    param_7 = param_7 & 0xff;
    if (param_2 != 0) {
      local_b4 = 0;
      do {
        uVar107 = 0;
        iVar110 = ((param_7 * 2 - 0x80 & 0xff) + (int)local_b4 / 2 & 0xff) - 0x80;
        puVar104 = local_b0;
        do {
          while( true ) {
            iVar101 = ((param_7 * 5 + 0x40 & 0xff) + ((int)uVar107 >> 1) & 0xff) - 0x80;
            uVar106 = ((param_7 * 3 & 0xff) + local_b4 & 0xff) + uVar107 & 0xff;
            iVar100 = uVar106 + (iVar101 * 0x168 >> 8);
            iVar103 = uVar106 - (iVar101 * 0xb8 + iVar110 * 0x58 >> 8);
            iVar101 = 0;
            if ((-1 < iVar100) && (iVar101 = iVar100, 0xfe < iVar100)) {
              iVar101 = 0xff;
            }
            iVar100 = 0;
            if ((-1 < iVar103) && (iVar100 = iVar103, 0xfe < iVar103)) {
              iVar100 = 0xff;
            }
            if ((int)(uVar106 + (iVar110 * 0x1c7 >> 8)) < 0) break;
            uVar107 = uVar107 + 1;
            (*pcVar102)();
            puVar104 = (undefined8 *)((int)puVar104 + 2);
            if (param_2 == uVar107) goto LAB_00015fcc;
          }
          uVar107 = uVar107 + 1;
          (*pcVar102)(puVar104,iVar101,iVar100,0,1);
          puVar104 = (undefined8 *)((int)puVar104 + 2);
        } while (param_2 != uVar107);
LAB_00015fcc:
        local_b0 = (undefined8 *)((int)local_b0 + local_110);
        local_b4 = local_b4 + 1;
      } while (param_3 != local_b4);
    }
  }
  return 0;
}



/* ===== TEST_COMM_CompareImageFuzzy @ 00017ee8 size=1236 ===== */

undefined4 TEST_COMM_CompareImageFuzzy(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint in_fpscr;
  double in_d0;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  iVar4 = __aeabi_uidiv(param_3,param_4);
  uVar14 = param_4 * iVar4;
  if (param_5 == 0) {
    dVar24 = 0.0;
    dVar26 = 0.0;
    iVar4 = 0;
    uVar15 = 0;
  }
  else {
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0x100000001;
    auVar1 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
    uVar11 = uVar14 & 0xfffffff0;
    auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar2._0_8_ = 0x2000000020;
    auVar2 = *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2);
    iVar8 = 0;
    iVar16 = 0;
    iVar4 = 0;
    uVar15 = 0;
    do {
      if (uVar14 != 0) {
        if (uVar14 - 1 < 0xf) {
          uVar13 = 0;
          uVar10 = uVar13;
LAB_00018024:
          iVar5 = (uint)*(byte *)(param_1 + uVar10 + iVar8) -
                  (uint)*(byte *)(param_2 + uVar10 + iVar8);
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          uVar6 = uVar10 + 1;
          if (0x20 < iVar5) {
            uVar13 = uVar13 + 1;
          }
          if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
            iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                    (uint)*(byte *)(param_2 + uVar6 + iVar8);
            uVar6 = uVar10 + 2;
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (0x20 < iVar5) {
              uVar13 = uVar13 + 1;
            }
            if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
              iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                      (uint)*(byte *)(param_2 + uVar6 + iVar8);
              uVar6 = uVar10 + 3;
              if (iVar5 < 0) {
                iVar5 = -iVar5;
              }
              if (0x20 < iVar5) {
                uVar13 = uVar13 + 1;
              }
              if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                        (uint)*(byte *)(param_2 + uVar6 + iVar8);
                uVar6 = uVar10 + 4;
                if (iVar5 < 0) {
                  iVar5 = -iVar5;
                }
                if (0x20 < iVar5) {
                  uVar13 = uVar13 + 1;
                }
                if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                  iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                          (uint)*(byte *)(param_2 + uVar6 + iVar8);
                  if (iVar5 < 0) {
                    iVar5 = -iVar5;
                  }
                  uVar6 = uVar10 + 5;
                  if (0x20 < iVar5) {
                    uVar13 = uVar13 + 1;
                  }
                  if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                    iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                            (uint)*(byte *)(param_2 + uVar6 + iVar8);
                    if (iVar5 < 0) {
                      iVar5 = -iVar5;
                    }
                    uVar6 = uVar10 + 6;
                    if (0x20 < iVar5) {
                      uVar13 = uVar13 + 1;
                    }
                    if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                      iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                              (uint)*(byte *)(param_2 + uVar6 + iVar8);
                      if (iVar5 < 0) {
                        iVar5 = -iVar5;
                      }
                      uVar6 = uVar10 + 7;
                      if (0x20 < iVar5) {
                        uVar13 = uVar13 + 1;
                      }
                      if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                        iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                (uint)*(byte *)(param_2 + uVar6 + iVar8);
                        if (iVar5 < 0) {
                          iVar5 = -iVar5;
                        }
                        uVar6 = uVar10 + 8;
                        if (0x20 < iVar5) {
                          uVar13 = uVar13 + 1;
                        }
                        if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                          iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                  (uint)*(byte *)(param_2 + uVar6 + iVar8);
                          if (iVar5 < 0) {
                            iVar5 = -iVar5;
                          }
                          uVar6 = uVar10 + 9;
                          if (0x20 < iVar5) {
                            uVar13 = uVar13 + 1;
                          }
                          if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                            iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                    (uint)*(byte *)(param_2 + uVar6 + iVar8);
                            if (iVar5 < 0) {
                              iVar5 = -iVar5;
                            }
                            uVar6 = uVar10 + 10;
                            if (0x20 < iVar5) {
                              uVar13 = uVar13 + 1;
                            }
                            if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                              iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                      (uint)*(byte *)(param_2 + uVar6 + iVar8);
                              if (iVar5 < 0) {
                                iVar5 = -iVar5;
                              }
                              uVar6 = uVar10 + 0xb;
                              if (0x20 < iVar5) {
                                uVar13 = uVar13 + 1;
                              }
                              if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                                iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                        (uint)*(byte *)(param_2 + uVar6 + iVar8);
                                if (iVar5 < 0) {
                                  iVar5 = -iVar5;
                                }
                                uVar6 = uVar10 + 0xc;
                                if (0x20 < iVar5) {
                                  uVar13 = uVar13 + 1;
                                }
                                if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                                  iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                          (uint)*(byte *)(param_2 + uVar6 + iVar8);
                                  if (iVar5 < 0) {
                                    iVar5 = -iVar5;
                                  }
                                  uVar6 = uVar10 + 0xd;
                                  if (0x20 < iVar5) {
                                    uVar13 = uVar13 + 1;
                                  }
                                  if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                                    uVar10 = uVar10 + 0xe;
                                    iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                            (uint)*(byte *)(param_2 + uVar6 + iVar8);
                                    if (iVar5 < 0) {
                                      iVar5 = -iVar5;
                                    }
                                    if (0x20 < iVar5) {
                                      uVar13 = uVar13 + 1;
                                    }
                                    if (uVar10 <= uVar14 && uVar14 - uVar10 != 0) {
                                      iVar5 = (uint)*(byte *)(param_1 + uVar10 + iVar8) -
                                              (uint)*(byte *)(param_2 + uVar10 + iVar8);
                                      if (iVar5 < 0) {
                                        iVar5 = -iVar5;
                                      }
                                      if (0x20 < iVar5) {
                                        uVar13 = uVar13 + 1;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pauVar12 = (undefined1 (*) [16])(param_1 + iVar8);
          auVar28 = (undefined1  [16])0x0;
          puVar3 = *pauVar12;
          pauVar9 = (undefined1 (*) [16])(param_2 + iVar8);
          do {
            auVar17 = *pauVar12;
            pauVar12 = pauVar12 + 1;
            auVar19 = *pauVar9;
            pauVar9 = pauVar9 + 1;
            auVar29 = VectorCopyLong(auVar17._0_8_,1,1);
            auVar25 = VectorCopyLong(auVar17._8_8_,1,1);
            auVar18 = VectorCopyLong(auVar19._0_8_,1,1);
            auVar20 = VectorCopyLong(auVar19._8_8_,1,1);
            auVar23 = VectorCopyLong(auVar29._0_8_,2,1);
            auVar17 = VectorCopyLong(auVar18._0_8_,2,1);
            auVar29 = VectorCopyLong(auVar29._8_8_,2,1);
            auVar19 = VectorCopyLong(auVar18._8_8_,2,1);
            auVar30 = VectorCopyLong(auVar25._0_8_,2,1);
            auVar18 = VectorCopyLong(auVar20._0_8_,2,1);
            auVar23 = VectorSub(auVar23,auVar17,4);
            auVar29 = VectorSub(auVar29,auVar19,4);
            auVar25 = VectorCopyLong(auVar25._8_8_,2,1);
            auVar17 = VectorCopyLong(auVar20._8_8_,2,1);
            auVar19 = VectorAbsolute(auVar23,4);
            auVar20 = VectorAbsolute(auVar29,4);
            auVar23 = VectorSub(auVar30,auVar18,4);
            auVar18 = VectorSub(auVar25,auVar17,4);
            auVar23 = VectorAbsolute(auVar23,4);
            auVar17 = VectorCompareGreaterThanOrEqual(auVar2,auVar19,4,0);
            auVar20 = VectorCompareGreaterThanOrEqual(auVar2,auVar20,4,0);
            auVar19 = VectorAbsolute(auVar18,4);
            auVar23 = VectorCompareGreaterThanOrEqual(auVar2,auVar23,4,0);
            auVar17 = VectorBitwiseSelect(auVar17,(undefined1  [16])0x0,auVar1);
            auVar18 = VectorBitwiseSelect(auVar20,(undefined1  [16])0x0,auVar1);
            auVar19 = VectorCompareGreaterThanOrEqual(auVar2,auVar19,4,0);
            auVar20 = VectorBitwiseSelect(auVar23,(undefined1  [16])0x0,auVar1);
            auVar17 = VectorAdd(auVar17,auVar18,4);
            auVar19 = VectorBitwiseSelect(auVar19,(undefined1  [16])0x0,auVar1);
            auVar17 = VectorAdd(auVar17,auVar20,4);
            auVar17 = VectorAdd(auVar17,auVar19,4);
            auVar28 = VectorAdd(auVar28,auVar17,4);
          } while (pauVar12 != (undefined1 (*) [16])(puVar3 + uVar11));
          uVar27 = VectorAdd(auVar28._0_8_,auVar28._8_8_,4);
          uVar27 = VectorPairwiseAdd(uVar27,uVar27,4);
          uVar13 = (uint)uVar27;
          uVar10 = uVar11;
          if (uVar14 - uVar11 != 0) goto LAB_00018024;
        }
        iVar4 = iVar4 + uVar13;
        if (uVar15 < uVar13) {
          uVar15 = uVar13;
        }
      }
      iVar16 = iVar16 + 1;
      iVar8 = iVar8 + param_3;
    } while (param_5 != iVar16);
    dVar26 = (double)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
    dVar24 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
  }
  dVar21 = (double)VectorUnsignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
  dVar22 = (double)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
  RK_LOG(4,0x17171700,"max line diff(%d), stride(%d), diff rate act(%f) VS exp(%f)",
         "TEST_COMM_CompareImageFuzzy",0x30d,uVar15,uVar14);
  RK_LOG(4,0x17171700,"total pixel diff(%d), pixel number(%d), diff rate act(%f) VS exp(%f)",
         "TEST_COMM_CompareImageFuzzy",0x30f,iVar4,param_5 * uVar14);
  if (dVar24 / dVar21 <= in_d0 + in_d0) {
    uVar7 = 0;
  }
  else if (in_d0 * 0.5 < (dVar26 / dVar21) / dVar22) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



/* ===== _fini @ 000183bc size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002c000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 0002c004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 0002c010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002c014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 0002c018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0002c01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002c020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002c024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0002c028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetChnAttr @ 0002c02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002c030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRoiAttr @ 0002c034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetRoiAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002c038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002c03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 0002c040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetRcParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0002c044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002c048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002c04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0002c050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 0002c054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 0002c058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002c05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 0002c060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002c064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 0002c068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_DestroyPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0002c06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0002c070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 0002c074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_CreatePool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0002c078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnAttr @ 0002c07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0002c080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0002c084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002c088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0002c08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0002c090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002c094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002c098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002c09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetPicBufferSize @ 0002c0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_COMM_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002c0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_InsertUserData @ 0002c0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_InsertUserData(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0002c0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0002c0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 0002c0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 0002c0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0002c0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002c0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0002c0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002c0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 0002c0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002c0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002c0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002c0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0002c0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnParam @ 0002c0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetChnParam @ 0002c0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetChnParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002c0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetRoiAttr @ 0002c0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetRoiAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002c0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetRcParam @ 0002c0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetRcParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 0002c0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


