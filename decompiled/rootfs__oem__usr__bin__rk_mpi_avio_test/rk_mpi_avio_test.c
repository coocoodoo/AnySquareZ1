// rk_mpi_avio_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010ca8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010ccc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002300c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc @ 00010cd8 size=12 ===== */

void RK_MPI_SYS_MmzAlloc(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzAlloc_00023010)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010ce4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023014)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023018)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002301c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 00010d08 size=12 ===== */

void RK_MPI_MB_Handle2Fd(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2Fd_00023020)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023024)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00023028)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010d38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023030)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 00010d44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00023034)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00010d50 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00023038)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00010d5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002303c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010d68 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00023040)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00010d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00023044)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010d80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00023048)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00010d8c size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_0002304c)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010d98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023050)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 00010da4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_00023054)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::abort @ 00010db0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 00010dbc size=12 ===== */

void RK_MPI_SYS_Free(void)

{
  (*(code *)PTR_RK_MPI_SYS_Free_0002305c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010dc8 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00023060)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00010dd4 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_00023064)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00010de0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00023068)(__status);
  return;
}



/* ===== <EXTERNAL>::free @ 00010dec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002306c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strerror @ 00010df8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00023070)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010e04 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023074)();
  return;
}



/* ===== main @ 00010e10 size=144 ===== */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [100];
  
  memcpy(auStack_70,&DAT_0001210c,0x60);
  argparse_init(auStack_98,auStack_70,&DAT_000121bc,0);
  argparse_describe(auStack_98,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_98,param_1,param_2);
  argparse_usage(auStack_98);
  test_video_stream(0);
  test_video_stream(1);
  test_video_stream(2);
  return 0;
}



/* ===== _start @ 00010ea0 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002302c)
            (DAT_00010ed4,param_2,&stack0x00000004,DAT_00010ed8,DAT_00010ed0,param_1);
  return;
}



/* ===== FUN_00010edc @ 00010edc size=32 ===== */

void FUN_00010edc(void)

{
  if (DAT_00010f00 == DAT_00010efc) {
    return;
  }
  if (DAT_00010f04 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f04)();
  return;
}



/* ===== _FINI_0 @ 00010f40 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010f7c;
  if (*DAT_00010f7c != '\0') {
    return;
  }
  FUN_00010edc();
  if (DAT_00010f80 != 0) {
    __deregister_frame_info(DAT_00010f84);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010f88 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010fac != 0) {
    __register_frame_info(DAT_00010fb4,DAT_00010fb0);
  }
  if ((DAT_00010f38 - DAT_00010f34 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010f3c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f3c)();
  return;
}



/* ===== test_video_stream_buffer_free @ 00010fb8 size=32 ===== */

/* test_video_stream_buffer_free(void*) */

undefined4 test_video_stream_buffer_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return 0;
  }
  return 0;
}



/* ===== test_dump_vstream_info @ 00010fd8 size=164 ===== */

/* test_dump_vstream_info(rkVDEC_STREAM_S*) */

undefined4 test_dump_vstream_info(rkVDEC_STREAM_S *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)param_1;
  RK_LOG(4,0x17171700,"test dump vtsream info:","test_dump_vstream_info",0x28);
  uVar1 = RK_MPI_MB_Handle2VirAddr(uVar3);
  uVar2 = RK_MPI_MB_Handle2Fd(uVar3);
  RK_LOG(4,0x17171700,"mb (%p), data(%p), fd(%d), len(%d), pts(%lld), eos(%d)",
         "test_dump_vstream_info",0x2b,uVar3,uVar1,uVar2,*(undefined4 *)(param_1 + 4));
  return 0;
}



/* ===== test_video_stream @ 0001107c size=772 ===== */

/* test_video_stream(int) */

undefined4 test_video_stream(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *__ptr;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  void *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  code *local_20;
  void *pvStack_1c;
  
  if (param_1 == 1) {
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_50 = 0;
    local_3c = 0;
    local_5c = 100;
    uStack_30 = 0;
    local_58 = 0x32;
    uStack_54 = 0;
    local_2c = uStack_38;
    local_40 = malloc(0xfa);
    uStack_28 = 0xfa;
    uStack_24 = 0;
    local_20 = test_video_stream_buffer_free;
    pvStack_1c = local_40;
    RK_MPI_SYS_CreateMB(&local_60,&local_40);
    uVar1 = local_60;
    RK_LOG(4,0x17171700,"test dump vtsream info:","test_dump_vstream_info",0x28);
    uVar2 = RK_MPI_MB_Handle2VirAddr(uVar1);
    uVar3 = RK_MPI_MB_Handle2Fd(uVar1);
    RK_LOG(4,0x17171700,"mb (%p), data(%p), fd(%d), len(%d), pts(%lld), eos(%d)",
           "test_dump_vstream_info",0x2b,uVar1,uVar2,uVar3,local_5c);
    RK_MPI_SYS_Free(local_60);
    return 0;
  }
  if (param_1 == 2) {
    __ptr = malloc(0xfa);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_50 = 0;
    local_2c = 0;
    local_5c = 100;
    local_58 = 0x32;
    uStack_54 = 0;
    local_3c = 0;
    uStack_28 = 0xfa;
    uStack_24 = 0;
    local_20 = (code *)0x0;
    local_40 = __ptr;
    pvStack_1c = (void *)uStack_38;
    RK_MPI_SYS_CreateMB(&local_60,&local_40);
    uVar1 = local_60;
    RK_LOG(4,0x17171700,"test dump vtsream info:","test_dump_vstream_info",0x28);
    uVar2 = RK_MPI_MB_Handle2VirAddr(uVar1);
    uVar3 = RK_MPI_MB_Handle2Fd(uVar1);
    RK_LOG(4,0x17171700,"mb (%p), data(%p), fd(%d), len(%d), pts(%lld), eos(%d)",
           "test_dump_vstream_info",0x2b,uVar1,uVar2,uVar3,local_5c);
    RK_MPI_SYS_Free(local_60);
    if (__ptr != (void *)0x0) {
      free(__ptr);
      return 0;
    }
  }
  else if (param_1 == 0) {
    local_58 = 0x32;
    uStack_54 = 0;
    local_5c = param_1;
    local_50 = param_1;
    RK_MPI_SYS_MmzAlloc(&local_60,0,0,0xfa);
    uVar1 = local_60;
    RK_LOG(4,0x17171700,"test dump vtsream info:","test_dump_vstream_info",0x28);
    uVar2 = RK_MPI_MB_Handle2VirAddr(uVar1);
    uVar3 = RK_MPI_MB_Handle2Fd(uVar1);
    RK_LOG(4,0x17171700,"mb (%p), data(%p), fd(%d), len(%d), pts(%lld), eos(%d)",
           "test_dump_vstream_info",0x2b,uVar1,uVar2,uVar3,local_5c);
    RK_MPI_MB_ReleaseMB(local_60);
    return 0;
  }
  return 0;
}



/* ===== unit_test_mpi_vaio_struct @ 00011380 size=748 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unit_test_mpi_vaio_struct() */

undefined4 unit_test_mpi_vaio_struct(void)

{
  undefined4 uVar1;
  void *__ptr;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  void *local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  code *local_30;
  void *pvStack_2c;
  
  iVar5 = 1;
  iVar4 = 0;
  while( true ) {
    if (iVar4 == 2) {
      __ptr = malloc(0xfa);
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_60 = 0;
      uStack_3c = 0;
      local_6c = 100;
      local_68 = 0x32;
      uStack_64 = 0;
      local_4c = 0;
      local_38 = 0xfa;
      uStack_34 = 0;
      local_30 = (code *)0x0;
      local_50 = __ptr;
      pvStack_2c = (void *)uStack_48;
      RK_MPI_SYS_CreateMB(&local_70,&local_50);
      uVar1 = local_70;
      RK_LOG(4,0x17171700,"test dump vtsream info:","test_dump_vstream_info",0x28);
      uVar2 = RK_MPI_MB_Handle2VirAddr(uVar1);
      uVar3 = RK_MPI_MB_Handle2Fd(uVar1);
      RK_LOG(4,0x17171700,"mb (%p), data(%p), fd(%d), len(%d), pts(%lld), eos(%d)",
             "test_dump_vstream_info",0x2b,uVar1,uVar2,uVar3,local_6c);
      RK_MPI_SYS_Free(local_70);
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      return 0;
    }
    local_60 = 0;
    local_6c = 0;
    local_68 = 0x32;
    uStack_64 = 0;
    RK_MPI_SYS_MmzAlloc(&local_70,0,0,0xfa);
    uVar1 = local_70;
    RK_LOG(4,0x17171700,"test dump vtsream info:","test_dump_vstream_info",0x28);
    uVar2 = RK_MPI_MB_Handle2VirAddr(uVar1);
    uVar3 = RK_MPI_MB_Handle2Fd(uVar1);
    RK_LOG(4,0x17171700,"mb (%p), data(%p), fd(%d), len(%d), pts(%lld), eos(%d)",
           "test_dump_vstream_info",0x2b,uVar1,uVar2,uVar3,local_6c);
    RK_MPI_MB_ReleaseMB(local_70);
    iVar4 = iVar5;
    if (iVar5 == 3) break;
    while (iVar5 = iVar4 + 1, iVar4 == 1) {
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_60 = 0;
      local_4c = 0;
      local_6c = 100;
      local_40 = 0;
      local_68 = 0x32;
      uStack_64 = 0;
      uStack_3c = uStack_48;
      local_50 = malloc(0xfa);
      local_38 = 0xfa;
      uStack_34 = 0;
      local_30 = test_video_stream_buffer_free;
      pvStack_2c = local_50;
      RK_MPI_SYS_CreateMB(&local_70,&local_50);
      uVar1 = local_70;
      RK_LOG(4,0x17171700,"test dump vtsream info:","test_dump_vstream_info",0x28);
      uVar2 = RK_MPI_MB_Handle2VirAddr(uVar1);
      uVar3 = RK_MPI_MB_Handle2Fd(uVar1);
      RK_LOG(4,0x17171700,"mb (%p), data(%p), fd(%d), len(%d), pts(%lld), eos(%d)",
             "test_dump_vstream_info",0x2b,uVar1,uVar2,uVar3,local_6c);
      RK_MPI_SYS_Free(local_70);
      iVar4 = iVar5;
    }
  }
  return 0;
}



/* ===== FUN_0001166c @ 0001166c size=64 ===== */

void FUN_0001166c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x2274;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x2258;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000116ac @ 000116ac size=588 ===== */

undefined4 FUN_000116ac(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_000116e0_default;
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
    goto LAB_0001171c;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_0001171c:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_000118f4:
                    /* WARNING: Subroutine does not return */
        FUN_0001166c(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_000118dc:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_0001166c(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0001166c(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_000118f4;
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
    if (iVar4 != 0) goto LAB_000118dc;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0001166c(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_000118f4;
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
switchD_000116e0_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 0001190c size=48 ===== */

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



/* ===== argparse_describe @ 0001193c size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00011950 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_00011a48;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_00011a48:
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
          if (piVar7[2] != 0) goto LAB_00011b2c;
LAB_00011b44:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_00011ca0;
LAB_00011b50:
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
          if (piVar7[2] == 0) goto LAB_00011b44;
          if ((char)piVar7[1] == '\0') {
LAB_00011b2c:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_00011b44;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00011b2c;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00011b50;
LAB_00011ca0:
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



/* ===== argparse_parse @ 00011d6c size=892 ===== */

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
        if (uVar4 == 0) goto LAB_00011dcc;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_00011dcc:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00011dd8:
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
            if (piVar11[8] == 0) goto LAB_00011f90;
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
          while (iVar5 = FUN_000116ac(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00011f1c;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00012088;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00012088;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_000116ac(param_1);
              if (iVar5 == -2) goto LAB_00012088;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00012088:
          pcVar10 = *(char **)param_1[6];
          goto LAB_00011f94;
        }
        goto LAB_00011f90;
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
LAB_00011ee8:
                if (*pcVar3 == '\0') goto LAB_00011f04;
                if (*pcVar3 == '=') goto code_r0x00011efc;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_000120e8;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00011f3c;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00011ee8;
                }
              }
            }
LAB_00011f3c:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_00011f94;
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
        goto LAB_00011e10;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00011efc:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00011f04:
  iVar5 = FUN_000116ac(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_00011f90:
    pcVar10 = (char *)*__src;
LAB_00011f94:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00011f1c:
  param_2 = param_1[5];
LAB_00011e10:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00011dd8;
}



/* ===== argparse_help_cb @ 000120ec size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 000120fc size=16 ===== */

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



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00024004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2Fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzAlloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


