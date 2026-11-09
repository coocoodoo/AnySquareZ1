// rk_mpi_sys_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011170 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00011194 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002400c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000111a0 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00024010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000111ac size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00024014)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000111b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024018)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 000111c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002401c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableChn @ 000111d0 size=12 ===== */

void RK_MPI_AO_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AO_EnableChn_00024020)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000111dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00024024)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000111e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00024028)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011200 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00024030)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 0001120c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00024034)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00011218 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00024038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_Disable @ 00011224 size=12 ===== */

void RK_MPI_AO_Disable(void)

{
  (*(code *)PTR_RK_MPI_AO_Disable_0002403c)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00011230 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00024040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0001123c size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00024044)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011248 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00024048)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011254 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0002404c)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00011260 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00024050)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_CreateChn @ 0001126c size=12 ===== */

void RK_MPI_ADEC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_ADEC_CreateChn_00024054)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00011278 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00024058)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableChn @ 00011284 size=12 ===== */

void RK_MPI_AO_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AO_DisableChn_0002405c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_Enable @ 00011290 size=12 ===== */

void RK_MPI_AO_Enable(void)

{
  (*(code *)PTR_RK_MPI_AO_Enable_00024060)();
  return;
}



/* ===== <EXTERNAL>::memset @ 0001129c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00024064)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000112a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00024068)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 000112b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_0002406c)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_DestroyChn @ 000112c0 size=12 ===== */

void RK_MPI_ADEC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_ADEC_DestroyChn_00024070)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000112cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00024074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_GetBindbyDest @ 000112d8 size=12 ===== */

void RK_MPI_SYS_GetBindbyDest(void)

{
  (*(code *)PTR_RK_MPI_SYS_GetBindbyDest_00024078)();
  return;
}



/* ===== <EXTERNAL>::exit @ 000112e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002407c)(__status);
  return;
}



/* ===== <EXTERNAL>::free @ 000112f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00024080)(__ptr);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetPubAttr @ 000112fc size=12 ===== */

void RK_MPI_AO_SetPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AO_SetPubAttr_00024084)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00024088)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_GetBindbySrc @ 00011314 size=12 ===== */

void RK_MPI_SYS_GetBindbySrc(void)

{
  (*(code *)PTR_RK_MPI_SYS_GetBindbySrc_0002408c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011320 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00024090)();
  return;
}



/* ===== main @ 00011330 size=480 ===== */

int main(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [40];
  undefined4 local_f8;
  undefined1 auStack_f4 [4];
  undefined *local_f0;
  char *local_e8;
  code *local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  char *local_c8;
  undefined4 local_b8;
  undefined1 local_b4;
  char *local_b0;
  _rkTestSysCtx *local_ac;
  char *local_a8;
  undefined4 local_98;
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
  
  uStack_12c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_124 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_130 = 0;
  local_134 = 1;
  local_128 = 1;
  memset(auStack_f4,0,0xdc);
  local_dc = 1;
  local_d8 = 1;
  local_f0 = &DAT_00012e48;
  local_e8 = "show this help message and exit";
  local_e4 = argparse_help_cb;
  local_c8 = "basic options:";
  local_b0 = "loop_count";
  local_a8 = "loop running count. default(1)";
  local_90 = "device_id";
  local_88 = "MODULE device id. default(0)";
  local_70 = "src_channel_id";
  local_68 = "source MODULE channel id. default(0)";
  local_50 = "dst_channel_count";
  local_48 = "the count of dst MODULE channel. default(1)";
  local_f8 = 2;
  local_b4 = 0x6e;
  local_6c = &uStack_12c;
  local_b8 = 4;
  local_4c = &local_128;
  local_98 = 4;
  local_78 = 4;
  local_58 = 4;
  local_ac = (_rkTestSysCtx *)&local_134;
  local_8c = &local_130;
  argparse_init(auStack_120,&local_f8,&DAT_00012d50,0);
  argparse_describe(auStack_120,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_120,param_1,param_2);
  iVar1 = RK_MPI_SYS_Init();
  if (iVar1 == 0) {
    iVar1 = unit_test_mpi_sys((_rkTestSysCtx *)&local_134);
    if (iVar1 == 0) {
      iVar1 = RK_MPI_SYS_Exit();
      if (iVar1 == 0) {
        RK_LOG(4,0x17171702,"test running ok.",&DAT_00012e40,0x169);
      }
    }
    else {
      RK_MPI_SYS_Exit();
      RK_LOG(2,0x17171702,"test running failed!",&DAT_00012e40,0x16e);
    }
  }
  return iVar1;
}



/* ===== _start @ 00011510 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002402c)
            (DAT_00011544,param_2,&stack0x00000004,DAT_00011548,DAT_00011540,param_1);
  return;
}



/* ===== FUN_0001154c @ 0001154c size=32 ===== */

void FUN_0001154c(void)

{
  if (DAT_00011570 == DAT_0001156c) {
    return;
  }
  if (DAT_00011574 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011574)();
  return;
}



/* ===== _FINI_0 @ 000115b0 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000115ec;
  if (*DAT_000115ec != '\0') {
    return;
  }
  FUN_0001154c();
  if (DAT_000115f0 != 0) {
    __deregister_frame_info(DAT_000115f4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000115f8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001161c != 0) {
    __register_frame_info(DAT_00011624,DAT_00011620);
  }
  if ((DAT_000115a8 - DAT_000115a4 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000115ac == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000115a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000115ac)();
  return;
}



/* ===== test_ao_dev_init @ 00011628 size=124 ===== */

/* test_ao_dev_init(_rkTestSysCtx*) */

undefined4 test_ao_dev_init(_rkTestSysCtx *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_70 [12];
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  memset(auStack_70,0,0x68);
  local_54 = 0x200;
  local_64 = DAT_000116a8;
  uStack_5c = DAT_000116b0;
  local_48 = DAT_00012b80;
  local_44 = (undefined2)DAT_00012b84;
  local_42 = (undefined1)((uint)DAT_00012b84 >> 0x10);
  local_50 = 0x400;
  uStack_4c = 2;
  RK_MPI_AO_SetPubAttr(uVar1,auStack_70);
  RK_MPI_AO_Enable(uVar1);
  return 0;
}



/* ===== test_ao_dev_deinit @ 000116b8 size=84 ===== */

/* test_ao_dev_deinit(_rkTestSysCtx*) */

undefined4 test_ao_dev_deinit(_rkTestSysCtx *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AO_Disable(*(undefined4 *)(param_1 + 4));
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171702,"failed to disable ao dev, err: %d","test_ao_dev_deinit",0x44,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== test_adec_create_chn_attr @ 00011710 size=88 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_adec_create_chn_attr() */

void test_adec_create_chn_attr(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = malloc(0x3c);
  uVar3 = DAT_00011770;
  uVar2 = DAT_00011768;
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(puVar4 + 6) = 0;
  *(undefined4 *)((int)puVar4 + 0x34) = uVar1;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined4 *)((int)puVar4 + 0x14) = uVar1;
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)puVar4 + 0x1c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)puVar4 + 0x14) = 1;
  *(undefined4 *)(puVar4 + 5) = 0;
  *(undefined4 *)((int)puVar4 + 0x2c) = uVar1;
  *(undefined4 *)(puVar4 + 3) = 8000;
  *(undefined4 *)((int)puVar4 + 0x34) = 0;
  *(undefined4 *)(puVar4 + 7) = uVar1;
  *(undefined4 *)((int)puVar4 + 0x1c) = 4;
  *puVar4 = uVar2;
  puVar4[1] = uVar3;
  *(undefined4 *)((int)puVar4 + 0x24) = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  return;
}



/* ===== test_adec_destroy_chn_attr @ 00011778 size=56 ===== */

/* test_adec_destroy_chn_attr(rkADEC_CH_ATTR_S**) */

void test_adec_destroy_chn_attr(rkADEC_CH_ATTR_S **param_1)

{
  rkADEC_CH_ATTR_S *__ptr;
  
  __ptr = *param_1;
  if (__ptr == (rkADEC_CH_ATTR_S *)0x0) {
    return;
  }
  if (*(void **)(__ptr + 0x20) != (void *)0x0) {
    free(*(void **)(__ptr + 0x20));
  }
  free(__ptr);
  *param_1 = (rkADEC_CH_ATTR_S *)0x0;
  return;
}



/* ===== test_adec_create_channel @ 000117b0 size=180 ===== */

/* test_adec_create_channel(_rkTestSysCtx*, int) */

undefined4 test_adec_create_channel(_rkTestSysCtx *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = malloc(0x3c);
  uVar2 = DAT_00011870;
  uVar1 = DAT_00011868;
  uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(puVar3 + 6) = 0;
  *(undefined4 *)((int)puVar3 + 0x34) = uVar5;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((int)puVar3 + 0x14) = uVar5;
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)puVar3 + 0x1c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)puVar3 + 0x14) = 1;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((int)puVar3 + 0x2c) = uVar5;
  *(undefined4 *)(puVar3 + 3) = 8000;
  *(undefined4 *)((int)puVar3 + 0x34) = 0;
  *(undefined4 *)(puVar3 + 7) = uVar5;
  *(undefined4 *)((int)puVar3 + 0x1c) = 4;
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  *(undefined4 *)((int)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  iVar4 = RK_MPI_ADEC_CreateChn(param_2,puVar3);
  uVar5 = 0;
  if (iVar4 != 0) {
    RK_LOG(2,0x17171702,"failed to create adec chn %d, err %d","test_adec_create_channel",0x78,
           param_2,iVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ===== test_adec_destroy_channel @ 00011878 size=140 ===== */

/* test_adec_destroy_channel(_rkTestSysCtx*, int) */

int test_adec_destroy_channel(_rkTestSysCtx *param_1,int param_2)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = RK_MPI_ADEC_DestroyChn(param_2);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171702,"failed to destroy adec channel(%d), err: %d","test_adec_destroy_channel",
           0x86,param_2,iVar1);
  }
  __ptr = *(void **)(param_1 + 0x10);
  if (__ptr != (void *)0x0) {
    if (*(void **)((int)__ptr + 0x20) != (void *)0x0) {
      free(*(void **)((int)__ptr + 0x20));
    }
    free(__ptr);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return iVar1;
}



/* ===== test_ao_enable_channel @ 00011904 size=92 ===== */

/* test_ao_enable_channel(_rkTestSysCtx*, int) */

undefined4 test_ao_enable_channel(_rkTestSysCtx *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AO_EnableChn(*(undefined4 *)(param_1 + 4));
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171702,"failed to enable ao chn %d, err %d","test_ao_enable_channel",0x93,param_2,
           iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== test_ao_disable_channel @ 00011960 size=92 ===== */

/* test_ao_disable_channel(_rkTestSysCtx*, int) */

undefined4 test_ao_disable_channel(_rkTestSysCtx *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AO_DisableChn(*(undefined4 *)(param_1 + 4));
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171702,"failed to disable ao channel(%d), err: %d","test_ao_disable_channel",0xa0,
           param_2,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== test_bind_adec_ao @ 000119bc size=64 ===== */

/* test_bind_adec_ao(_rkTestSysCtx*, int, int) */

void test_bind_adec_ao(_rkTestSysCtx *param_1,int param_2,int param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_1c = *(undefined4 *)(param_1 + 4);
  local_20 = 0xd;
  local_14 = 0xb;
  local_18 = param_2;
  local_10 = local_1c;
  local_c = param_3;
  RK_MPI_SYS_Bind(&local_20,&local_14);
  return;
}



/* ===== test_unbind_adec_ao @ 000119fc size=64 ===== */

/* test_unbind_adec_ao(_rkTestSysCtx*, int, int) */

void test_unbind_adec_ao(_rkTestSysCtx *param_1,int param_2,int param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_1c = *(undefined4 *)(param_1 + 4);
  local_20 = 0xd;
  local_14 = 0xb;
  local_18 = param_2;
  local_10 = local_1c;
  local_c = param_3;
  RK_MPI_SYS_UnBind(&local_20,&local_14);
  return;
}



/* ===== test_mpi_sys_get_bind_by_src @ 00011a3c size=252 ===== */

/* test_mpi_sys_get_bind_by_src(_rkTestSysCtx*, int) */

int test_mpi_sys_get_bind_by_src(_rkTestSysCtx *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 local_330;
  undefined4 local_32c;
  int local_328;
  uint local_324 [194];
  
  memset(local_324,0,0x304);
  local_32c = *(undefined4 *)(param_1 + 4);
  local_330 = 0xd;
  local_328 = param_2;
  iVar4 = RK_MPI_SYS_GetBindbySrc(&local_330,local_324);
  if (iVar4 == 0) {
    if (local_324[0] != 0) {
      puVar5 = local_324;
      uVar6 = 0;
      do {
        puVar1 = puVar5 + 3;
        puVar2 = puVar5 + 2;
        puVar3 = puVar5 + 1;
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 3;
        RK_LOG(5,0x17171702,"get dst channel(modId=%d, devId=%d, chnId=%d)",
               "test_mpi_sys_get_bind_by_src",0xd8,*puVar3,*puVar2,*puVar1);
      } while (uVar6 < local_324[0]);
    }
    return 0;
  }
  RK_LOG(2,0x17171702,"failed to RK_MPI_SYS_GetBindbySrc","test_mpi_sys_get_bind_by_src",0xdb);
  return iVar4;
}



/* ===== test_mpi_sys_get_bind_by_dest @ 00011b38 size=188 ===== */

/* test_mpi_sys_get_bind_by_dest(_rkTestSysCtx*, int) */

int test_mpi_sys_get_bind_by_dest(_rkTestSysCtx *param_1,int param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 4);
  local_20 = 0;
  local_14 = 0xb;
  uStack_1c = 0;
  local_18 = 0;
  local_c = param_2;
  iVar1 = RK_MPI_SYS_GetBindbyDest(&local_14,&local_20);
  if (iVar1 == 0) {
    RK_LOG(5,0x17171702,"get src channel(modId=%d, devId=%d, chnId=%d)",
           "test_mpi_sys_get_bind_by_dest",0xee,local_20,uStack_1c,local_18);
    return 0;
  }
  RK_LOG(2,0x17171702,"failed to RK_MPI_SYS_GetBindbyDest","test_mpi_sys_get_bind_by_dest",0xf0);
  return iVar1;
}



/* ===== unit_test_mpi_sys_bind @ 00011bf8 size=1108 ===== */

/* unit_test_mpi_sys_bind(_rkTestSysCtx*) */

undefined4 unit_test_mpi_sys_bind(_rkTestSysCtx *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *__ptr;
  int iVar7;
  int iVar8;
  undefined4 local_9c;
  undefined4 uStack_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  uVar6 = *(undefined4 *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 8);
  iVar8 = *(int *)(param_1 + 0xc);
  memset(&local_90,0,0x68);
  local_84 = DAT_00012018;
  uStack_7c = DAT_00012020;
  local_74 = 0x200;
  local_68 = DAT_00012b80;
  local_64 = (undefined2)DAT_00012b84;
  local_62 = (undefined1)((uint)DAT_00012b84 >> 0x10);
  local_70 = 0x400;
  local_6c = 2;
  RK_MPI_AO_SetPubAttr(uVar6,&local_90);
  RK_MPI_AO_Enable(uVar6);
  puVar3 = malloc(0x3c);
  uVar2 = DAT_00012030;
  uVar1 = DAT_00012028;
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(puVar3 + 6) = 0;
  *(undefined4 *)((int)puVar3 + 0x34) = uVar6;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((int)puVar3 + 0x14) = uVar6;
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)puVar3 + 0x1c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)puVar3 + 0x14) = 1;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((int)puVar3 + 0x2c) = uVar6;
  *(undefined4 *)(puVar3 + 3) = 8000;
  *(undefined4 *)((int)puVar3 + 0x34) = 0;
  *(undefined4 *)(puVar3 + 7) = uVar6;
  *(undefined4 *)((int)puVar3 + 0x1c) = 4;
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  *(undefined4 *)((int)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  iVar4 = RK_MPI_ADEC_CreateChn(iVar7,puVar3);
  if (iVar4 == 0) {
    if (iVar8 < 1) {
      test_mpi_sys_get_bind_by_src(param_1,iVar7);
    }
    else {
      iVar4 = 0;
      do {
        while( true ) {
          iVar5 = RK_MPI_AO_EnableChn(*(undefined4 *)(param_1 + 4),iVar4);
          if (iVar5 != 0) {
            RK_LOG(2,0x17171702,"failed to enable ao chn %d, err %d","test_ao_enable_channel",0x93,
                   iVar4,iVar5);
            goto LAB_00011e30;
          }
          uStack_98 = *(undefined4 *)(param_1 + 4);
          local_9c = 0xd;
          local_90 = 0xb;
          local_94 = iVar7;
          local_8c = uStack_98;
          local_88 = iVar4;
          iVar5 = RK_MPI_SYS_Bind(&local_9c,&local_90);
          if (iVar5 != 0) break;
          iVar5 = iVar4 + 1;
          RK_LOG(5,0x17171702,"succeed to bind ADEC(%d) AO(%d)","unit_test_mpi_sys_bind",0x10d,iVar7
                 ,iVar4);
          iVar4 = iVar5;
          if (iVar8 == iVar5) goto LAB_00011d94;
        }
        iVar4 = iVar4 + 1;
      } while (iVar8 != iVar4);
LAB_00011d94:
      test_mpi_sys_get_bind_by_src(param_1,iVar7);
      iVar4 = 0;
      do {
        while( true ) {
          local_8c = *(undefined4 *)(param_1 + 4);
          local_9c = 0;
          uStack_98 = 0;
          local_94 = 0;
          local_90 = 0xb;
          local_88 = iVar4;
          iVar5 = RK_MPI_SYS_GetBindbyDest(&local_90,&local_9c);
          if (iVar5 != 0) break;
          iVar4 = iVar4 + 1;
          RK_LOG(5,0x17171702,"get src channel(modId=%d, devId=%d, chnId=%d)",
                 "test_mpi_sys_get_bind_by_dest",0xee,local_9c,uStack_98,local_94);
          if (iVar8 == iVar4) goto LAB_00011e30;
        }
        iVar4 = iVar4 + 1;
        RK_LOG(2,0x17171702,"failed to RK_MPI_SYS_GetBindbyDest","test_mpi_sys_get_bind_by_dest",
               0xf0);
      } while (iVar8 != iVar4);
LAB_00011e30:
      iVar4 = 0;
      do {
        uStack_98 = *(undefined4 *)(param_1 + 4);
        local_9c = 0xd;
        local_90 = 0xb;
        local_94 = iVar7;
        local_8c = uStack_98;
        local_88 = iVar4;
        iVar5 = RK_MPI_SYS_UnBind(&local_9c,&local_90);
        if (iVar5 == 0) {
          RK_LOG(5,0x17171702,"succeed to unbind ADEC(%d) AO(%d)","unit_test_mpi_sys_bind",0x11c,
                 iVar7,iVar4);
        }
        iVar5 = RK_MPI_AO_DisableChn(*(undefined4 *)(param_1 + 4),iVar4);
        if (iVar5 != 0) {
          RK_LOG(2,0x17171702,"failed to disable ao channel(%d), err: %d","test_ao_disable_channel",
                 0xa0,iVar4,iVar5);
        }
        iVar4 = iVar4 + 1;
      } while (iVar8 != iVar4);
    }
    iVar4 = RK_MPI_ADEC_DestroyChn(iVar7);
    if (iVar4 != 0) {
      RK_LOG(2,0x17171702,"failed to destroy adec channel(%d), err: %d","test_adec_destroy_channel",
             0x86,iVar7,iVar4);
    }
    __ptr = *(void **)(param_1 + 0x10);
    if (__ptr != (void *)0x0) {
      if (*(void **)((int)__ptr + 0x20) != (void *)0x0) {
        free(*(void **)((int)__ptr + 0x20));
      }
      free(__ptr);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    RK_LOG(2,0x17171702,"failed to create adec chn %d, err %d","test_adec_create_channel",0x78,iVar7
           ,iVar4);
  }
  iVar4 = RK_MPI_AO_Disable(*(undefined4 *)(param_1 + 4));
  uVar6 = 0;
  if (iVar4 != 0) {
    RK_LOG(2,0x17171702,"failed to disable ao dev, err: %d","test_ao_dev_deinit",0x44,iVar4);
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



/* ===== unit_test_mpi_sys @ 0001206c size=116 ===== */

/* unit_test_mpi_sys(_rkTestSysCtx*) */

undefined4 unit_test_mpi_sys(_rkTestSysCtx *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)param_1;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = unit_test_mpi_sys_bind(param_1);
    RK_LOG(4,0x17171702,"looping times %d","unit_test_mpi_sys",0x131,*(int *)param_1 - iVar2);
  } while (0 < iVar2);
  return uVar1;
}



/* ===== FUN_000120e0 @ 000120e0 size=64 ===== */

void FUN_000120e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x2fe8;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x2fcc;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012120 @ 00012120 size=588 ===== */

undefined4 FUN_00012120(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_00012154_default;
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
    goto LAB_00012190;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_00012190:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00012368:
                    /* WARNING: Subroutine does not return */
        FUN_000120e0(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_00012350:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_000120e0(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_000120e0(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00012368;
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
    if (iVar4 != 0) goto LAB_00012350;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_000120e0(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00012368;
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
switchD_00012154_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 00012380 size=48 ===== */

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



/* ===== argparse_describe @ 000123b0 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 000123c4 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_000124bc;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_000124bc:
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
          if (piVar7[2] != 0) goto LAB_000125a0;
LAB_000125b8:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_00012714;
LAB_000125c4:
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
          if (piVar7[2] == 0) goto LAB_000125b8;
          if ((char)piVar7[1] == '\0') {
LAB_000125a0:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_000125b8;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_000125a0;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_000125c4;
LAB_00012714:
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



/* ===== argparse_parse @ 000127e0 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_00012840;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_00012840:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x0001284c:
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
            if (piVar11[8] == 0) goto LAB_00012a04;
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
          while (iVar5 = FUN_00012120(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00012990;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00012afc;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00012afc;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_00012120(param_1);
              if (iVar5 == -2) goto LAB_00012afc;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00012afc:
          pcVar10 = *(char **)param_1[6];
          goto LAB_00012a08;
        }
        goto LAB_00012a04;
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
LAB_0001295c:
                if (*pcVar3 == '\0') goto LAB_00012978;
                if (*pcVar3 == '=') goto code_r0x00012970;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00012b5c;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_000129b0;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_0001295c;
                }
              }
            }
LAB_000129b0:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_00012a08;
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
        goto LAB_00012884;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00012970:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00012978:
  iVar5 = FUN_00012120(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_00012a04:
    pcVar10 = (char *)*__src;
LAB_00012a08:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00012990:
  param_2 = param_1[5];
LAB_00012884:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x0001284c;
}



/* ===== argparse_help_cb @ 00012b60 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 00012b70 size=16 ===== */

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



/* ===== <EXTERNAL>::malloc @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00025018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableChn @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00025028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00025034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableChn @ 00025038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00025040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00025044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00025048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetPubAttr @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetPubAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00025058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0002505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00025060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_CreateChn @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_DestroyChn @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00025074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00025078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_Enable @ 0002507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_Enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_GetBindbySrc @ 00025080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_GetBindbySrc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_GetBindbyDest @ 00025084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_GetBindbyDest(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_Disable @ 00025088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_Disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00025090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


