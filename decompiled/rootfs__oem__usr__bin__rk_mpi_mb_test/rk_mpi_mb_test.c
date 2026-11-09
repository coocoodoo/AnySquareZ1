// rk_mpi_mb_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010f40 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010f64 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002300c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010f70 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023010)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010f7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023014)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010f88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023018)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010f94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002301c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::operator.delete @ 00010fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00023020)(param_1);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 00010fac size=12 ===== */

void RK_MPI_MB_Handle2Fd(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2Fd_00023024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00010fb8 size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_00023028)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00010fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002302c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_end_cleanup @ 00010fdc size=12 ===== */

void __cxa_end_cleanup(void)

{
  (*(code *)PTR___cxa_end_cleanup_00023034)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010fe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023038)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 00010ff4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002303c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00011000 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00023040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_VirAddr2Handle @ 0001100c size=12 ===== */

void RK_MPI_MB_VirAddr2Handle(void)

{
  (*(code *)PTR_RK_MPI_MB_VirAddr2Handle_00023044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011018 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00023048)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011024 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002304c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011030 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00023050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2UniqueId @ 0001103c size=12 ===== */

void RK_MPI_MB_Handle2UniqueId(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2UniqueId_00023054)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011048 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00023058)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00011054 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0002305c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 00011060 size=12 ===== */

void RK_MPI_MB_CreatePool(void)

{
  (*(code *)PTR_RK_MPI_MB_CreatePool_00023060)();
  return;
}



/* ===== <EXTERNAL>::operator.new @ 0001106c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00023064)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_InquireUserCnt @ 00011078 size=12 ===== */

void RK_MPI_MB_InquireUserCnt(void)

{
  (*(code *)PTR_RK_MPI_MB_InquireUserCnt_00023068)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00011084 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002306c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2PhysAddr @ 00011090 size=12 ===== */

void RK_MPI_MB_Handle2PhysAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2PhysAddr_00023070)();
  return;
}



/* ===== <EXTERNAL>::memset @ 0001109c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023074)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 000110a8 size=12 ===== */

void RK_MPI_MB_DestroyPool(void)

{
  (*(code *)PTR_RK_MPI_MB_DestroyPool_00023078)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000110b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002307c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 000110c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_00023080)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::abort @ 000110cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 000110d8 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00023088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 000110e4 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_0002308c)();
  return;
}



/* ===== <EXTERNAL>::exit @ 000110f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00023090)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2PoolId @ 000110fc size=12 ===== */

void RK_MPI_MB_Handle2PoolId(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2PoolId_00023094)();
  return;
}



/* ===== <EXTERNAL>::__gxx_personality_v0 @ 00011108 size=12 ===== */

void __gxx_personality_v0(void)

{
  (*(code *)PTR___gxx_personality_v0_00023098)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002309c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_UniqueId2Fd @ 00011120 size=12 ===== */

void RK_MPI_MB_UniqueId2Fd(void)

{
  (*(code *)PTR_RK_MPI_MB_UniqueId2Fd_000230a0)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001112c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000230a4)();
  return;
}



/* ===== main @ 00011138 size=736 ===== */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 auStack_1a8 [2];
  undefined1 auStack_1a0 [40];
  undefined4 local_178 [2];
  undefined *local_170;
  char *local_168;
  code *local_164;
  undefined4 local_15c;
  undefined4 local_158;
  char *local_148;
  undefined4 local_138;
  undefined1 local_134;
  undefined *local_130;
  int local_12c;
  char *local_128;
  undefined4 local_118;
  undefined1 local_114;
  char *local_110;
  _rkTestMbCtx *local_10c;
  char *local_108;
  undefined4 local_f8;
  undefined1 local_f4;
  char *local_f0;
  int local_ec;
  char *local_e8;
  undefined4 local_d8;
  undefined1 local_d4;
  char *local_d0;
  undefined8 *local_cc;
  char *local_c8;
  undefined4 local_b8;
  undefined1 local_b4;
  char *local_b0;
  undefined4 *local_ac;
  char *local_a8;
  undefined4 local_98;
  undefined1 local_94;
  char *local_90;
  undefined4 *local_8c;
  char *local_88;
  undefined4 local_78;
  undefined1 local_74;
  char *local_70;
  undefined4 *local_6c;
  char *local_68;
  undefined4 local_58;
  undefined1 local_54;
  char *local_50;
  undefined4 *local_4c;
  char *local_48;
  
  uStack_1b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_1b8 = 0;
  local_1c8 = DAT_00011418;
  local_1c0 = DAT_00011420;
  local_1b0 = 0x200;
  local_1ac = 0;
  auStack_1a8[0] = uStack_1b4;
  memset(local_178,0,0x160);
  local_170 = &DAT_00012590;
  local_168 = "show this help message and exit";
  local_164 = argparse_help_cb;
  local_148 = "basic options:";
  local_130 = &DAT_000125c8;
  local_128 = "the count of looping. default(1).";
  local_110 = "mb_count";
  local_108 = "the count of mb. default(1).";
  local_f0 = "mb_size";
  local_e8 = "mb size. default(4MB).";
  local_d0 = "pool_count";
  local_c8 = "the count of pool. default(1).";
  local_b0 = "pre_alloc";
  local_a8 = "pre alloc or not. default(0). 0: no 1: yes.";
  local_90 = "remap_mode";
  local_88 = "remapping mode. default(2). 0: none, 256: no cache, 512: cached";
  local_114 = 99;
  local_15c = 1;
  local_158 = 1;
  local_d4 = 0x70;
  local_134 = 0x6e;
  local_94 = 0x72;
  local_f4 = 0x73;
  local_b4 = 0x61;
  local_178[0] = 2;
  local_138 = 4;
  local_118 = 4;
  local_f8 = 4;
  local_d8 = 4;
  local_b8 = 4;
  local_98 = 4;
  local_78 = 4;
  local_74 = 0x74;
  local_70 = "alloc_type";
  local_58 = 4;
  local_68 = "alloc type. default(0). 0: DMA, 1: malloc";
  local_50 = "dma_type";
  local_48 = "dma type. default(0). 0: IOMMU, 1: CMA";
  local_54 = 100;
  local_12c = (int)&local_1c0 + 4;
  local_ec = (int)&local_1c8 + 4;
  local_cc = &local_1c0;
  local_ac = &uStack_1b4;
  local_8c = &local_1b0;
  local_6c = &local_1ac;
  local_4c = auStack_1a8;
  local_10c = (_rkTestMbCtx *)&local_1c8;
  argparse_init(auStack_1a0,local_178,&DAT_0001256c,0);
  argparse_describe(auStack_1a0,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_1a0,param_1,param_2);
  iVar1 = RK_MPI_SYS_Init();
  if (iVar1 == 0) {
    iVar1 = unit_test_mpi_mb((_rkTestMbCtx *)&local_1c8);
    if (iVar1 == 0) {
      RK_MPI_SYS_Exit();
      RK_LOG(4,0x17171701,"test running ok.",&DAT_00012588,0xe2);
      return 0;
    }
  }
  else {
    RK_LOG(2,0x17171701,"rk mpi sys init fail!",&DAT_00012588,0xd7);
  }
  RK_LOG(2,0x17171701,"test running failed!",&DAT_00012588,0xe5);
  return 0xa0018012;
}



/* ===== _start @ 00011428 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023030)
            (DAT_0001145c,param_2,&stack0x00000004,DAT_00011460,DAT_00011458,param_1);
  return;
}



/* ===== FUN_00011464 @ 00011464 size=32 ===== */

void FUN_00011464(void)

{
  if (DAT_00011488 == DAT_00011484) {
    return;
  }
  if (DAT_0001148c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001148c)();
  return;
}



/* ===== _FINI_0 @ 000114c8 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011504;
  if (*DAT_00011504 != '\0') {
    return;
  }
  FUN_00011464();
  if (DAT_00011508 != 0) {
    __deregister_frame_info(DAT_0001150c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011510 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011534 != 0) {
    __register_frame_info(DAT_0001153c,DAT_00011538);
  }
  if ((DAT_000114c0 - DAT_000114bc >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000114c4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000114b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000114c4)();
  return;
}



/* ===== std::vector<void*,std::allocator<void*>>::_M_realloc_insert<void*&> @ 00011540 size=256 ===== */

/* void std::vector<void*, std::allocator<void*>
   >::_M_realloc_insert<void*&>(__gnu_cxx::__normal_iterator<void**, std::vector<void*,
   std::allocator<void*> > >, void*&) */

void __thiscall
std::vector<void*,std::allocator<void*>>::_M_realloc_insert<void*&>
          (vector<void*,std::allocator<void*>> *this,void *param_2,undefined4 *param_3)

{
  uint uVar1;
  void *__dest;
  size_t __n;
  void *__dest_00;
  uint uVar2;
  int iVar3;
  void *__src;
  void *pvVar4;
  int iVar5;
  
  __src = *(void **)this;
  pvVar4 = *(void **)(this + 4);
  __n = (int)param_2 - (int)__src;
  uVar1 = (int)pvVar4 - (int)__src >> 2;
  if (uVar1 == 0) {
    uVar2 = 1;
LAB_00011638:
    uVar2 = uVar2 << 2;
LAB_0001157c:
    __dest = operator_new(uVar2);
    iVar3 = (int)__dest + uVar2;
  }
  else {
    uVar2 = uVar1 * 2;
    if ((uVar2 < uVar1) || (0x3fffffff < uVar2)) {
      uVar2 = 0xfffffffc;
      goto LAB_0001157c;
    }
    if (uVar2 != 0) goto LAB_00011638;
    iVar3 = 0;
    __dest = (void *)0x0;
  }
  __dest_00 = (void *)((int)__dest + __n + 4);
  *(undefined4 *)((int)__dest + __n) = *param_3;
  iVar5 = (int)__dest_00 + ((int)pvVar4 - (int)param_2);
  if (param_2 == __src) {
    if (param_2 != pvVar4) goto LAB_000115d0;
  }
  else {
    memmove(__dest,__src,__n);
    if (param_2 == pvVar4) goto LAB_000115f8;
LAB_000115d0:
    memcpy(__dest_00,param_2,(int)pvVar4 - (int)param_2);
  }
  if (__src == (void *)0x0) {
    *(void **)this = __dest;
    *(int *)(this + 4) = iVar5;
    *(int *)(this + 8) = iVar3;
    return;
  }
LAB_000115f8:
  operator_delete(__src);
  *(void **)this = __dest;
  *(int *)(this + 4) = iVar5;
  *(int *)(this + 8) = iVar3;
  return;
}



/* ===== unit_test_mpi_mb @ 00011640 size=1012 ===== */

/* unit_test_mpi_mb(_rkTestMbCtx const*) */

int unit_test_mpi_mb(_rkTestMbCtx *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int local_70;
  int local_64;
  int local_5c;
  int *local_58;
  int *piStack_54;
  int *local_50;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_48 = *(int *)(param_1 + 4);
  local_40 = *(undefined4 *)param_1;
  local_3c = *(undefined4 *)(param_1 + 0x18);
  iVar4 = -1;
  local_34 = *(int *)(param_1 + 0x20) << 0xc;
  iStack_44 = local_48 >> 0x1f;
  local_38 = *(int *)(param_1 + 0x1c);
  local_64 = *(int *)(param_1 + 0xc);
  local_58 = (int *)0x0;
  piStack_54 = (int *)0x0;
  local_70 = -1;
  local_50 = (int *)0x0;
  local_2c = 0;
  do {
    if (0 < *(int *)(param_1 + 8)) {
      iVar6 = 0;
      do {
        iVar1 = RK_MPI_MB_CreatePool(&local_48);
        if (iVar1 == -1) {
          iVar6 = -0x5ffe7fc0;
          goto LAB_00011728;
        }
        RK_LOG(4,0x17171701,"pool id %d","unit_test_mpi_mb",0x48,iVar1);
        iVar1 = *(int *)(param_1 + 8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
      if (0 < iVar1) {
        iVar7 = 0;
        piVar3 = piStack_54;
        do {
          if (piVar3 != local_58) {
            piStack_54 = local_58;
          }
          piVar3 = local_58;
          if (0 < *(int *)param_1) {
            iVar6 = 0;
            do {
              local_5c = RK_MPI_MB_GetMB(iVar7,0,local_48,iStack_44,0);
              if (local_5c == 0) {
                iVar6 = -0x5ffe7ff3;
                goto LAB_00011728;
              }
              lVar8 = RK_MPI_MB_Handle2PhysAddr();
              if ((((local_34 == 0x1000) && (local_38 == 0 && lVar8 == 0)) ||
                  (iVar1 = RK_MPI_MB_Handle2PoolId(local_5c), iVar1 != iVar7)) ||
                 ((iVar1 = RK_MPI_MB_InquireUserCnt(local_5c), iVar1 != 1 ||
                  (iVar1 = RK_MPI_MB_Handle2VirAddr(local_5c), iVar1 == 0)))) {
                RK_MPI_MB_ReleaseMB(local_5c);
LAB_00011948:
                iVar6 = -0x5ffe7fee;
                goto LAB_00011728;
              }
              iVar2 = RK_MPI_MB_Handle2Fd();
              if (local_38 == 0) {
                if (-1 < iVar2) {
                  iVar4 = RK_MPI_MB_VirAddr2Handle(iVar1);
                  if (local_5c != iVar4) {
                    RK_MPI_MB_ReleaseMB(local_5c);
                    goto LAB_00011948;
                  }
                  local_70 = RK_MPI_MB_Handle2UniqueId();
                  if (-1 < local_70) {
                    iVar4 = RK_MPI_MB_UniqueId2Fd();
                    goto LAB_000118c0;
                  }
                }
                RK_MPI_MB_ReleaseMB(local_5c);
                goto LAB_00011948;
              }
LAB_000118c0:
              RK_LOG(4,0x17171701,
                     "get poolId(%d) from mb(%p) refsCount(%d) phyAddr(0x%llx) virAddr(%p) fd(%d) uniqueId(%d) dupFd(%d)"
                     ,"unit_test_mpi_mb",0x85,iVar7,local_5c,1,lVar8,iVar1,iVar2,local_70,iVar4);
              if (-1 < iVar4) {
                close(iVar4);
                iVar4 = -1;
              }
              if (piStack_54 == local_50) {
                std::vector<void*,std::allocator<void*>>::_M_realloc_insert<void*&>
                          ((vector<void*,std::allocator<void*>> *)&local_58,piStack_54,&local_5c);
              }
              else {
                *piStack_54 = local_5c;
                piStack_54 = piStack_54 + 1;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)param_1);
            piVar3 = local_58;
            if (local_58 != piStack_54) {
              do {
                piVar5 = piVar3 + 1;
                iVar6 = RK_MPI_MB_ReleaseMB(*piVar3);
                if (iVar6 != 0) goto LAB_00011728;
                piVar3 = piVar5;
              } while (piStack_54 != piVar5);
            }
            iVar1 = *(int *)(param_1 + 8);
            piVar3 = piStack_54;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            iVar6 = RK_MPI_MB_DestroyPool(iVar1);
            if (iVar6 != 0) goto LAB_00011728;
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 8));
        }
      }
    }
    local_64 = local_64 + -1;
    RK_LOG(4,0x17171701,"looping times %d","unit_test_mpi_mb",0x9c,
           *(int *)(param_1 + 0xc) - local_64);
  } while (0 < local_64);
  iVar6 = 0;
LAB_00011770:
  if (local_58 != (int *)0x0) {
    operator_delete(local_58);
  }
  return iVar6;
LAB_00011728:
  piVar3 = local_58;
  if (piStack_54 != local_58) {
    do {
      piVar5 = piVar3 + 1;
      RK_MPI_MB_ReleaseMB(*piVar3);
      piVar3 = piVar5;
    } while (piStack_54 != piVar5);
  }
  if (0 < *(int *)(param_1 + 8)) {
    iVar4 = 0;
    do {
      RK_MPI_MB_DestroyPool(iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  goto LAB_00011770;
}



/* ===== FUN_00011a48 @ 00011a48 size=64 ===== */

void FUN_00011a48(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x2824;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x2808;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011a88 @ 00011a88 size=588 ===== */

undefined4 FUN_00011a88(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_00011abc_default;
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
    goto LAB_00011af8;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_00011af8:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00011cd0:
                    /* WARNING: Subroutine does not return */
        FUN_00011a48(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_00011cb8:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00011a48(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00011a48(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00011cd0;
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
    if (iVar4 != 0) goto LAB_00011cb8;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00011a48(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00011cd0;
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
switchD_00011abc_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 00011ce8 size=48 ===== */

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



/* ===== argparse_describe @ 00011d18 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00011d2c size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_00011e24;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_00011e24:
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
          if (piVar7[2] != 0) goto LAB_00011f08;
LAB_00011f20:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_0001207c;
LAB_00011f2c:
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
          if (piVar7[2] == 0) goto LAB_00011f20;
          if ((char)piVar7[1] == '\0') {
LAB_00011f08:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_00011f20;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00011f08;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00011f2c;
LAB_0001207c:
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



/* ===== argparse_parse @ 00012148 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_000121a8;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_000121a8:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x000121b4:
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
            if (piVar11[8] == 0) goto LAB_0001236c;
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
          while (iVar5 = FUN_00011a88(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_000122f8;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00012464;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00012464;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_00011a88(param_1);
              if (iVar5 == -2) goto LAB_00012464;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00012464:
          pcVar10 = *(char **)param_1[6];
          goto LAB_00012370;
        }
        goto LAB_0001236c;
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
LAB_000122c4:
                if (*pcVar3 == '\0') goto LAB_000122e0;
                if (*pcVar3 == '=') goto code_r0x000122d8;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_000124c4;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00012318;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_000122c4;
                }
              }
            }
LAB_00012318:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_00012370;
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
        goto LAB_000121ec;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x000122d8:
  param_1[9] = (int)(pcVar3 + 1);
LAB_000122e0:
  iVar5 = FUN_00011a88(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_0001236c:
    pcVar10 = (char *)*__src;
LAB_00012370:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_000122f8:
  param_2 = param_1[5];
LAB_000121ec:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x000121b4;
}



/* ===== argparse_help_cb @ 000124c8 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 000124d8 size=16 ===== */

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



/* ===== <EXTERNAL>::__cxa_end_cleanup @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_CreatePool(void)

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



/* ===== <EXTERNAL>::fputs @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2PoolId @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2PoolId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2PhysAddr @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2PhysAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

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



/* ===== <EXTERNAL>::close @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_InquireUserCnt @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_InquireUserCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2UniqueId @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2UniqueId(void)

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



/* ===== <EXTERNAL>::memcpy @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__gxx_personality_v0 @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

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



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

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



/* ===== <EXTERNAL>::fputc @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2Fd(void)

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



/* ===== <EXTERNAL>::RK_MPI_MB_UniqueId2Fd @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_UniqueId2Fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_DestroyPool(void)

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



/* ===== <EXTERNAL>::RK_MPI_MB_VirAddr2Handle @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_VirAddr2Handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


