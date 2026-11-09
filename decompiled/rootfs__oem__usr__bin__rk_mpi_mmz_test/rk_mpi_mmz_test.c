// rk_mpi_mmz_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010e90 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2PhysAddr @ 00010eb4 size=12 ===== */

void RK_MPI_MMZ_Handle2PhysAddr(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Handle2PhysAddr_0002300c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010ec0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023010)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010ecc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023014)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCacheVaddrStart @ 00010ed8 size=12 ===== */

void RK_MPI_MMZ_FlushCacheVaddrStart(void)

{
  (*(code *)PTR_RK_MPI_MMZ_FlushCacheVaddrStart_00023018)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010ee4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002301c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Fd2Handle @ 00010ef0 size=12 ===== */

void RK_MPI_MMZ_Fd2Handle(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Fd2Handle_00023020)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00010efc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00023024)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010f08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00023028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2Fd @ 00010f14 size=12 ===== */

void RK_MPI_MMZ_Handle2Fd(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Handle2Fd_0002302c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_PhyAddr2Handle @ 00010f20 size=12 ===== */

void RK_MPI_MMZ_PhyAddr2Handle(void)

{
  (*(code *)PTR_RK_MPI_MMZ_PhyAddr2Handle_00023030)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_VirAddr2Handle @ 00010f2c size=12 ===== */

void RK_MPI_MMZ_VirAddr2Handle(void)

{
  (*(code *)PTR_RK_MPI_MMZ_VirAddr2Handle_00023034)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_GetSize @ 00010f38 size=12 ===== */

void RK_MPI_MMZ_GetSize(void)

{
  (*(code *)PTR_RK_MPI_MMZ_GetSize_00023038)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00010f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002303c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010f5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023044)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 00010f68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00023048)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00010f74 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0002304c)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00010f80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00023050)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010f8c size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00023054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_IsCacheable @ 00010f98 size=12 ===== */

void RK_MPI_MMZ_IsCacheable(void)

{
  (*(code *)PTR_RK_MPI_MMZ_IsCacheable_00023058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Free @ 00010fa4 size=12 ===== */

void RK_MPI_MMZ_Free(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Free_0002305c)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00010fb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00023060)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCachePaddrStart @ 00010fbc size=12 ===== */

void RK_MPI_MMZ_FlushCachePaddrStart(void)

{
  (*(code *)PTR_RK_MPI_MMZ_FlushCachePaddrStart_00023064)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00010fc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00023068)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCacheEnd @ 00010fd4 size=12 ===== */

void RK_MPI_MMZ_FlushCacheEnd(void)

{
  (*(code *)PTR_RK_MPI_MMZ_FlushCacheEnd_0002306c)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010fe0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023070)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCacheVaddrEnd @ 00010fec size=12 ===== */

void RK_MPI_MMZ_FlushCacheVaddrEnd(void)

{
  (*(code *)PTR_RK_MPI_MMZ_FlushCacheVaddrEnd_00023074)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010ff8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023078)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 00011004 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_0002307c)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::abort @ 00011010 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023080)();
  return;
}



/* ===== <EXTERNAL>::exit @ 0001101c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00023084)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCachePaddrEnd @ 00011028 size=12 ===== */

void RK_MPI_MMZ_FlushCachePaddrEnd(void)

{
  (*(code *)PTR_RK_MPI_MMZ_FlushCachePaddrEnd_00023088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCacheStart @ 00011034 size=12 ===== */

void RK_MPI_MMZ_FlushCacheStart(void)

{
  (*(code *)PTR_RK_MPI_MMZ_FlushCacheStart_0002308c)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011040 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00023090)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2VirAddr @ 0001104c size=12 ===== */

void RK_MPI_MMZ_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Handle2VirAddr_00023094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 00011058 size=12 ===== */

void RK_MPI_MMZ_Alloc(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Alloc_00023098)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011064 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002309c)();
  return;
}



/* ===== main @ 00011070 size=1532 ===== */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  void *__s;
  undefined4 uVar3;
  uint __n;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  void *pvVar15;
  uint local_100;
  int iStack_fc;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [100];
  
  uStack_d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_d0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_cc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_c4 = uStack_d4;
  uStack_bc = uStack_d4;
  memcpy(auStack_90,&DAT_00012768,0x60);
  argparse_init(auStack_b8,auStack_90,&DAT_00012934,0);
  argparse_describe(auStack_b8,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_b8,param_1,param_2);
  iVar2 = RK_MPI_MMZ_Alloc(&local_dc,0x100000,1);
  if (iVar2 < 0) {
    RK_LOG(4,0x17171700,"alloc mmz fail","unit_test_mpi_mmz",0x4c);
    RK_LOG(2,0x17171700,"test running failed!",&DAT_00012950,0xb5);
    uVar3 = 0xa0018012;
  }
  else {
    __s = (void *)RK_MPI_MMZ_Handle2VirAddr(local_dc);
    lVar13 = RK_MPI_MMZ_Handle2PhysAddr(local_dc);
    iVar2 = (int)((ulonglong)lVar13 >> 0x20);
    uVar6 = (uint)lVar13;
    uVar3 = RK_MPI_MMZ_Handle2Fd(local_dc);
    __n = RK_MPI_MMZ_GetSize(local_dc);
    uVar4 = RK_MPI_MMZ_IsCacheable(local_dc);
    lVar1 = lVar13 + 1;
    uVar12 = VectorShiftRight(CONCAT44(__n,__n),0x20);
    iVar10 = iVar2 - (uint)(uVar6 == 0);
    uVar7 = __n + uVar6;
    iVar11 = ((int)__n >> 0x1f) + iVar2 + (uint)CARRY4(__n,uVar6);
    iVar2 = iVar11 - (uint)(uVar7 == 0);
    pvVar15 = __s;
    RK_LOG(4,0x17171700,"alloc buffer: fd=%d, len=%d, paddr=0x%x, vaddr=%p, cacheable=%d",
           "unit_test_mpi_mmz",0x56,uVar3,__n);
    uVar3 = RK_MPI_MMZ_Fd2Handle(uVar3);
    uVar5 = RK_MPI_MMZ_VirAddr2Handle(__s);
    RK_LOG(4,0x17171700,"MB: %p %p %p","unit_test_mpi_mmz",0x59,local_dc,uVar3,uVar5,lVar13,pvVar15,
           uVar4);
    uVar3 = RK_MPI_MMZ_VirAddr2Handle((int)__s + 1);
    RK_LOG(4,0x17171700,"vaddr+1: %p, mb: %p","unit_test_mpi_mmz",0x5c,(int)__s + 1,uVar3);
    uVar3 = RK_MPI_MMZ_VirAddr2Handle((int)__s + -1);
    RK_LOG(4,0x17171700,"vaddr-1: %p, mb: %p","unit_test_mpi_mmz",0x5f,(int)__s + -1,uVar3);
    uVar3 = RK_MPI_MMZ_VirAddr2Handle((int)__s + __n);
    iVar8 = (int)__s + (__n - 1);
    RK_LOG(4,0x17171700,"vaddr+len: %p, mb: %p","unit_test_mpi_mmz",0x62,(int)__s + __n,uVar3);
    uVar3 = RK_MPI_MMZ_VirAddr2Handle(iVar8);
    RK_LOG(4,0x17171700,"vaddr+len-1: %p, mb: %p","unit_test_mpi_mmz",0x65,iVar8,uVar3);
    uVar3 = RK_MPI_MMZ_PhyAddr2Handle((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    RK_LOG(4,0x17171700,"paddr+1: 0x%x, mb: %p","unit_test_mpi_mmz",0x68,iVar8,lVar1,uVar3);
    uVar3 = RK_MPI_MMZ_PhyAddr2Handle(uVar6 - 1,iVar10);
    RK_LOG(4,0x17171700,"paddr-1: 0x%x, mb: %p","unit_test_mpi_mmz",0x6b,iVar8,uVar6 - 1,iVar10,
           uVar3);
    uVar3 = RK_MPI_MMZ_PhyAddr2Handle(uVar7,iVar11);
    puVar9 = (undefined8 *)((int)__s + (__n - 10));
    RK_LOG(4,0x17171700,"paddr+len: 0x%x, mb: %p","unit_test_mpi_mmz",0x6e,iVar8,uVar7,iVar11,uVar3)
    ;
    uVar3 = RK_MPI_MMZ_PhyAddr2Handle(uVar7 - 1,iVar2);
    RK_LOG(4,0x17171700,"paddr+len-1: 0x%x, mb: %p","unit_test_mpi_mmz",0x71,iVar8,uVar7 - 1,iVar2,
           uVar3);
    iVar2 = RK_MPI_MMZ_VirAddr2Handle(puVar9);
    if (iVar2 == 0) {
      iVar2 = -1;
      iVar8 = iVar2;
    }
    else {
      iVar8 = RK_MPI_MMZ_Handle2VirAddr();
      iVar8 = (int)puVar9 - iVar8;
      iVar2 = RK_MPI_MMZ_Handle2Fd(iVar2);
    }
    uVar6 = uVar7 - 10;
    iVar11 = iVar11 - (uint)(uVar7 < 10);
    puVar14 = puVar9;
    RK_LOG(4,0x17171700,"vaddr+len-10: %p, fd: %d, offset: %d","unit_test_mpi_mmz",0x76,puVar9,iVar2
           ,iVar8,uVar3);
    iVar2 = RK_MPI_MMZ_PhyAddr2Handle(uVar6,iVar11);
    if (iVar2 == 0) {
      iVar2 = -1;
      iVar8 = iVar2;
    }
    else {
      uVar7 = RK_MPI_MMZ_Handle2PhysAddr();
      iVar8 = (uVar6 & 0xff) - (uVar7 & 0xff);
      iVar2 = RK_MPI_MMZ_Handle2Fd(iVar2);
    }
    RK_LOG(4,0x17171700,"paddr+len-10: 0x%x, fd: %d, offset: %d","unit_test_mpi_mmz",0x7a,puVar14,
           uVar6,iVar11,iVar2,iVar8);
    RK_MPI_MMZ_FlushCacheStart(local_dc,0,0,1);
    memset(__s,0x5a,__n);
    RK_MPI_MMZ_FlushCacheEnd(local_dc,0,0,1);
    RK_MPI_MMZ_FlushCacheStart(local_dc,0x1000,0x1000,2);
    memset(__s,0x5a,__n);
    RK_MPI_MMZ_FlushCacheEnd(local_dc,0x1000,0x1000,2);
    RK_MPI_MMZ_FlushCacheVaddrStart(puVar9,0x1000,1);
    *puVar9 = 0x5a5a5a5a5a5a5a5a;
    *(undefined8 *)((int)puVar9 + 2) = 0x5a5a5a5a5a5a5a5a;
    RK_MPI_MMZ_FlushCacheVaddrEnd(puVar9,0x1000,1);
    local_100 = (uint)uVar12;
    iStack_fc = (int)((ulonglong)uVar12 >> 0x20);
    iVar2 = uVar6 + (local_100 - 10);
    iVar11 = iVar11 + (iStack_fc - (uint)(local_100 < 10)) + (uint)CARRY4(uVar6,local_100 - 10);
    RK_MPI_MMZ_FlushCachePaddrStart(iVar2,iVar11,0x1000,1);
    *puVar9 = 0x5a5a5a5a5a5a5a5a;
    *(undefined8 *)((int)puVar9 + 2) = 0x5a5a5a5a5a5a5a5a;
    RK_MPI_MMZ_FlushCachePaddrEnd(iVar2,iVar11,0x1000,1);
    usleep(100000);
    RK_MPI_MMZ_Free(local_dc);
    RK_LOG(4,0x17171700,"test running ok.",&DAT_00012950,0xb2);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== _start @ 0001166c size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023040)
            (DAT_000116a0,param_2,&stack0x00000004,DAT_000116a4,DAT_0001169c,param_1);
  return;
}



/* ===== FUN_000116a8 @ 000116a8 size=32 ===== */

void FUN_000116a8(void)

{
  if (DAT_000116cc == DAT_000116c8) {
    return;
  }
  if (DAT_000116d0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000116c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000116d0)();
  return;
}



/* ===== _FINI_0 @ 0001170c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011748;
  if (*DAT_00011748 != '\0') {
    return;
  }
  FUN_000116a8();
  if (DAT_0001174c != 0) {
    __deregister_frame_info(DAT_00011750);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011754 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011778 != 0) {
    __register_frame_info(DAT_00011780,DAT_0001177c);
  }
  if ((DAT_00011704 - DAT_00011700 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011708 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000116fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011708)();
  return;
}



/* ===== unit_test_mpi_mmz @ 00011784 size=1348 ===== */

/* unit_test_mpi_mmz(_rkTestMMZCtx const*) */

int unit_test_mpi_mmz(_rkTestMMZCtx *param_1)

{
  longlong lVar1;
  int iVar2;
  void *__s;
  undefined4 uVar3;
  uint __n;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  void *pvVar15;
  uint local_58;
  int iStack_54;
  undefined4 local_34 [2];
  
  iVar2 = RK_MPI_MMZ_Alloc(local_34,0x100000,1);
  if (iVar2 < 0) {
    RK_LOG(4,0x17171700,"alloc mmz fail","unit_test_mpi_mmz",0x4c);
    return iVar2;
  }
  __s = (void *)RK_MPI_MMZ_Handle2VirAddr(local_34[0]);
  lVar13 = RK_MPI_MMZ_Handle2PhysAddr(local_34[0]);
  iVar2 = (int)((ulonglong)lVar13 >> 0x20);
  uVar6 = (uint)lVar13;
  uVar3 = RK_MPI_MMZ_Handle2Fd(local_34[0]);
  __n = RK_MPI_MMZ_GetSize(local_34[0]);
  uVar4 = RK_MPI_MMZ_IsCacheable(local_34[0]);
  lVar1 = lVar13 + 1;
  uVar12 = VectorShiftRight(CONCAT44(__n,__n),0x20);
  iVar10 = iVar2 - (uint)(uVar6 == 0);
  uVar7 = __n + uVar6;
  iVar11 = ((int)__n >> 0x1f) + iVar2 + (uint)CARRY4(__n,uVar6);
  iVar2 = iVar11 - (uint)(uVar7 == 0);
  pvVar15 = __s;
  RK_LOG(4,0x17171700,"alloc buffer: fd=%d, len=%d, paddr=0x%x, vaddr=%p, cacheable=%d",
         "unit_test_mpi_mmz",0x56,uVar3,__n);
  uVar3 = RK_MPI_MMZ_Fd2Handle(uVar3);
  uVar5 = RK_MPI_MMZ_VirAddr2Handle(__s);
  RK_LOG(4,0x17171700,"MB: %p %p %p","unit_test_mpi_mmz",0x59,local_34[0],uVar3,uVar5,lVar13,pvVar15
         ,uVar4);
  uVar3 = RK_MPI_MMZ_VirAddr2Handle((int)__s + 1);
  RK_LOG(4,0x17171700,"vaddr+1: %p, mb: %p","unit_test_mpi_mmz",0x5c,(int)__s + 1,uVar3);
  uVar3 = RK_MPI_MMZ_VirAddr2Handle((int)__s + -1);
  RK_LOG(4,0x17171700,"vaddr-1: %p, mb: %p","unit_test_mpi_mmz",0x5f,(int)__s + -1,uVar3);
  uVar3 = RK_MPI_MMZ_VirAddr2Handle((int)__s + __n);
  iVar8 = (int)__s + (__n - 1);
  RK_LOG(4,0x17171700,"vaddr+len: %p, mb: %p","unit_test_mpi_mmz",0x62,(int)__s + __n,uVar3);
  uVar3 = RK_MPI_MMZ_VirAddr2Handle(iVar8);
  RK_LOG(4,0x17171700,"vaddr+len-1: %p, mb: %p","unit_test_mpi_mmz",0x65,iVar8,uVar3);
  uVar3 = RK_MPI_MMZ_PhyAddr2Handle((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  RK_LOG(4,0x17171700,"paddr+1: 0x%x, mb: %p","unit_test_mpi_mmz",0x68,iVar8,lVar1,uVar3);
  uVar3 = RK_MPI_MMZ_PhyAddr2Handle(uVar6 - 1,iVar10);
  RK_LOG(4,0x17171700,"paddr-1: 0x%x, mb: %p","unit_test_mpi_mmz",0x6b,iVar8,uVar6 - 1,iVar10,uVar3)
  ;
  uVar3 = RK_MPI_MMZ_PhyAddr2Handle(uVar7,iVar11);
  puVar9 = (undefined8 *)((int)__s + (__n - 10));
  RK_LOG(4,0x17171700,"paddr+len: 0x%x, mb: %p","unit_test_mpi_mmz",0x6e,iVar8,uVar7,iVar11,uVar3);
  uVar3 = RK_MPI_MMZ_PhyAddr2Handle(uVar7 - 1,iVar2);
  RK_LOG(4,0x17171700,"paddr+len-1: 0x%x, mb: %p","unit_test_mpi_mmz",0x71,iVar8,uVar7 - 1,iVar2,
         uVar3);
  iVar2 = RK_MPI_MMZ_VirAddr2Handle(puVar9);
  if (iVar2 == 0) {
    iVar2 = -1;
    iVar8 = iVar2;
  }
  else {
    iVar8 = RK_MPI_MMZ_Handle2VirAddr();
    iVar8 = (int)puVar9 - iVar8;
    iVar2 = RK_MPI_MMZ_Handle2Fd(iVar2);
  }
  uVar6 = uVar7 - 10;
  iVar11 = iVar11 - (uint)(uVar7 < 10);
  puVar14 = puVar9;
  RK_LOG(4,0x17171700,"vaddr+len-10: %p, fd: %d, offset: %d","unit_test_mpi_mmz",0x76,puVar9,iVar2,
         iVar8,uVar3);
  iVar2 = RK_MPI_MMZ_PhyAddr2Handle(uVar6,iVar11);
  if (iVar2 == 0) {
    iVar2 = -1;
    iVar8 = iVar2;
  }
  else {
    uVar7 = RK_MPI_MMZ_Handle2PhysAddr();
    iVar8 = (uVar6 & 0xff) - (uVar7 & 0xff);
    iVar2 = RK_MPI_MMZ_Handle2Fd(iVar2);
  }
  RK_LOG(4,0x17171700,"paddr+len-10: 0x%x, fd: %d, offset: %d","unit_test_mpi_mmz",0x7a,puVar14,
         uVar6,iVar11,iVar2,iVar8);
  RK_MPI_MMZ_FlushCacheStart(local_34[0],0,0,1);
  memset(__s,0x5a,__n);
  RK_MPI_MMZ_FlushCacheEnd(local_34[0],0,0,1);
  RK_MPI_MMZ_FlushCacheStart(local_34[0],0x1000,0x1000,2);
  memset(__s,0x5a,__n);
  RK_MPI_MMZ_FlushCacheEnd(local_34[0],0x1000,0x1000,2);
  RK_MPI_MMZ_FlushCacheVaddrStart(puVar9,0x1000,1);
  *puVar9 = 0x5a5a5a5a5a5a5a5a;
  *(undefined8 *)((int)puVar9 + 2) = 0x5a5a5a5a5a5a5a5a;
  RK_MPI_MMZ_FlushCacheVaddrEnd(puVar9,0x1000,1);
  local_58 = (uint)uVar12;
  iStack_54 = (int)((ulonglong)uVar12 >> 0x20);
  iVar2 = uVar6 + (local_58 - 10);
  iVar11 = iVar11 + (iStack_54 - (uint)(local_58 < 10)) + (uint)CARRY4(uVar6,local_58 - 10);
  RK_MPI_MMZ_FlushCachePaddrStart(iVar2,iVar11,0x1000,1);
  *puVar9 = 0x5a5a5a5a5a5a5a5a;
  *(undefined8 *)((int)puVar9 + 2) = 0x5a5a5a5a5a5a5a5a;
  RK_MPI_MMZ_FlushCachePaddrEnd(iVar2,iVar11,0x1000,1);
  usleep(100000);
  RK_MPI_MMZ_Free(local_34[0]);
  return 0;
}



/* ===== FUN_00011cc8 @ 00011cc8 size=64 ===== */

void FUN_00011cc8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x2a40;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x2a24;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011d08 @ 00011d08 size=588 ===== */

undefined4 FUN_00011d08(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_00011d3c_default;
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
    goto LAB_00011d78;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_00011d78:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00011f50:
                    /* WARNING: Subroutine does not return */
        FUN_00011cc8(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_00011f38:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00011cc8(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00011cc8(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00011f50;
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
    if (iVar4 != 0) goto LAB_00011f38;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00011cc8(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00011f50;
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
switchD_00011d3c_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 00011f68 size=48 ===== */

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



/* ===== argparse_describe @ 00011f98 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00011fac size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_000120a4;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_000120a4:
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
          if (piVar7[2] != 0) goto LAB_00012188;
LAB_000121a0:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_000122fc;
LAB_000121ac:
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
          if (piVar7[2] == 0) goto LAB_000121a0;
          if ((char)piVar7[1] == '\0') {
LAB_00012188:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_000121a0;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00012188;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_000121ac;
LAB_000122fc:
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



/* ===== argparse_parse @ 000123c8 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_00012428;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_00012428:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00012434:
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
            if (piVar11[8] == 0) goto LAB_000125ec;
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
          while (iVar5 = FUN_00011d08(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00012578;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_000126e4;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_000126e4;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_00011d08(param_1);
              if (iVar5 == -2) goto LAB_000126e4;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_000126e4:
          pcVar10 = *(char **)param_1[6];
          goto LAB_000125f0;
        }
        goto LAB_000125ec;
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
LAB_00012544:
                if (*pcVar3 == '\0') goto LAB_00012560;
                if (*pcVar3 == '=') goto code_r0x00012558;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00012744;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00012598;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00012544;
                }
              }
            }
LAB_00012598:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_000125f0;
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
        goto LAB_0001246c;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00012558:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00012560:
  iVar5 = FUN_00011d08(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_000125ec:
    pcVar10 = (char *)*__src;
LAB_000125f0:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00012578:
  param_2 = param_1[5];
LAB_0001246c:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00012434;
}



/* ===== argparse_help_cb @ 00012748 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 00012758 size=16 ===== */

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



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_IsCacheable @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_IsCacheable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_PhyAddr2Handle @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_PhyAddr2Handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Fd2Handle @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Fd2Handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCacheVaddrStart @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_FlushCacheVaddrStart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCacheVaddrEnd @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_FlushCacheVaddrEnd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCachePaddrStart @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_FlushCachePaddrStart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCacheEnd @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_FlushCacheEnd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_VirAddr2Handle @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_VirAddr2Handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCachePaddrEnd @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_FlushCachePaddrEnd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_FlushCacheStart @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_FlushCacheStart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2Fd @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Handle2Fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_GetSize @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_GetSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2VirAddr @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2PhysAddr @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Handle2PhysAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Free @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


