// libivs.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000115a8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::clock_gettime @ 000115cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002600c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 000115d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00026010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 000115e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00026014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000115f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00026018)(__format);
  return iVar1;
}



/* ===== RK_IVS_GMM2_ChgFactorByGrad @ 000115fc size=12 ===== */

void RK_IVS_GMM2_ChgFactorByGrad(void)

{
  (*(code *)PTR_RK_IVS_GMM2_ChgFactorByGrad_0002601c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Thresh @ 00011608 size=12 ===== */

void RK_MPI_IVE_Thresh(void)

{
  (*(code *)PTR_RK_MPI_IVE_Thresh_00026020)();
  return;
}



/* ===== RK_IVS_DUMP @ 00011614 size=12 ===== */

void RK_IVS_DUMP(void)

{
  (*(code *)PTR_RK_IVS_DUMP_00026024)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011620 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00026028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::puts @ 0001162c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002602c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011638 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00026030)();
  return;
}



/* ===== <EXTERNAL>::feof @ 00011644 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_00026034)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011650 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00026038)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Free @ 0001165c size=12 ===== */

void RK_MPI_MMZ_Free(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Free_0002603c)();
  return;
}



/* ===== IVS_CalcStride @ 00011668 size=12 ===== */

void IVS_CalcStride(void)

{
  (*(code *)PTR_IVS_CalcStride_00026040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Erode @ 00011674 size=12 ===== */

void RK_MPI_IVE_Erode(void)

{
  (*(code *)PTR_RK_MPI_IVE_Erode_00026044)();
  return;
}



/* ===== IVS_CreateIveImage @ 00011680 size=12 ===== */

void IVS_CreateIveImage(void)

{
  (*(code *)PTR_IVS_CreateIveImage_00026048)();
  return;
}



/* ===== <EXTERNAL>::__tls_get_addr @ 0001168c size=12 ===== */

void __tls_get_addr(void)

{
  (*(code *)PTR___tls_get_addr_0002604c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Init @ 00011698 size=12 ===== */

void RK_MPI_IVE_Init(void)

{
  (*(code *)PTR_RK_MPI_IVE_Init_00026050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 000116a4 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00026054)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000116b0 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00026058)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 000116bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0002605c)(__stream);
  return iVar1;
}



/* ===== IVS_DestroyIveMem @ 000116c8 size=12 ===== */

void IVS_DestroyIveMem(void)

{
  (*(code *)PTR_IVS_DestroyIveMem_00026060)();
  return;
}



/* ===== RK_IVS_MD_BG_Process @ 000116d4 size=12 ===== */

void RK_IVS_MD_BG_Process(void)

{
  (*(code *)PTR_RK_IVS_MD_BG_Process_00026064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_CCL @ 000116e0 size=12 ===== */

void RK_MPI_IVE_CCL(void)

{
  (*(code *)PTR_RK_MPI_IVE_CCL_00026068)();
  return;
}



/* ===== <EXTERNAL>::rand @ 000116ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0002606c)();
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_GetSize @ 000116f8 size=12 ===== */

void RK_MPI_MMZ_GetSize(void)

{
  (*(code *)PTR_RK_MPI_MMZ_GetSize_00026070)();
  return;
}



/* ===== IVS_SYS_MmzFree @ 00011704 size=12 ===== */

void IVS_SYS_MmzFree(void)

{
  (*(code *)PTR_IVS_SYS_MmzFree_00026074)();
  return;
}



/* ===== IVS_CreateIveMem @ 00011710 size=12 ===== */

void IVS_CreateIveMem(void)

{
  (*(code *)PTR_IVS_CreateIveMem_00026078)();
  return;
}



/* ===== IVS_SYS_MmzFlush_End @ 0001171c size=12 ===== */

void IVS_SYS_MmzFlush_End(void)

{
  (*(code *)PTR_IVS_SYS_MmzFlush_End_0002607c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_MagAndAng @ 00011728 size=12 ===== */

void RK_MPI_IVE_MagAndAng(void)

{
  (*(code *)PTR_RK_MPI_IVE_MagAndAng_00026080)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Dilate @ 00011734 size=12 ===== */

void RK_MPI_IVE_Dilate(void)

{
  (*(code *)PTR_RK_MPI_IVE_Dilate_00026084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2Fd @ 00011740 size=12 ===== */

void RK_MPI_MMZ_Handle2Fd(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Handle2Fd_00026088)();
  return;
}



/* ===== <EXTERNAL>::fread @ 0001174c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002608c)(__ptr);
  return sVar1;
}



/* ===== RK_IVS_MD_REF_Process @ 00011758 size=12 ===== */

void RK_IVS_MD_REF_Process(void)

{
  (*(code *)PTR_RK_IVS_MD_REF_Process_00026090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2PhysAddr @ 00011764 size=12 ===== */

void RK_MPI_MB_Handle2PhysAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2PhysAddr_00026094)();
  return;
}



/* ===== <EXTERNAL>::fopen @ 00011770 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00026098)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 0001177c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002609c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Deinit @ 00011788 size=12 ===== */

void RK_MPI_IVE_Deinit(void)

{
  (*(code *)PTR_RK_MPI_IVE_Deinit_000260a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Sub @ 00011794 size=12 ===== */

void RK_MPI_IVE_Sub(void)

{
  (*(code *)PTR_RK_MPI_IVE_Sub_000260a4)();
  return;
}



/* ===== <EXTERNAL>::ftell @ 000117a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_000260a8)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000117ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_000260ac)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 000117b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_000260b0)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_GMM @ 000117c4 size=12 ===== */

void RK_MPI_IVE_GMM(void)

{
  (*(code *)PTR_RK_MPI_IVE_GMM_000260b4)();
  return;
}



/* ===== RK_IVS_GMM2_ReduFactor @ 000117d0 size=12 ===== */

void RK_IVS_GMM2_ReduFactor(void)

{
  (*(code *)PTR_RK_IVS_GMM2_ReduFactor_000260b8)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 000117dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000260bc)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000117e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_000260c0)(__mutex);
  return iVar1;
}



/* ===== IVS_SYS_MmzFlush_Start @ 000117f4 size=12 ===== */

void IVS_SYS_MmzFlush_Start(void)

{
  (*(code *)PTR_IVS_SYS_MmzFlush_Start_000260c4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_16BitTo8Bit @ 00011800 size=12 ===== */

void RK_MPI_IVE_16BitTo8Bit(void)

{
  (*(code *)PTR_RK_MPI_IVE_16BitTo8Bit_000260c8)();
  return;
}



/* ===== IVS_SYS_MmzAlloc @ 0001180c size=12 ===== */

void IVS_SYS_MmzAlloc(void)

{
  (*(code *)PTR_IVS_SYS_MmzAlloc_000260cc)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00011818 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_000260d0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_VirAddr2Handle @ 00011824 size=12 ===== */

void RK_MPI_MB_VirAddr2Handle(void)

{
  (*(code *)PTR_RK_MPI_MB_VirAddr2Handle_000260d4)();
  return;
}



/* ===== RK_IVS_MD_GMM2_ChgFactorByDiffFrm @ 00011830 size=12 ===== */

void RK_IVS_MD_GMM2_ChgFactorByDiffFrm(void)

{
  (*(code *)PTR_RK_IVS_MD_GMM2_ChgFactorByDiffFrm_000260d8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 0001183c size=12 ===== */

void RK_MPI_MMZ_Alloc(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Alloc_000260dc)();
  return;
}



/* ===== IVS_DestroyIveImage @ 00011848 size=12 ===== */

void IVS_DestroyIveImage(void)

{
  (*(code *)PTR_IVS_DestroyIveImage_000260e0)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011854 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000260e4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Add @ 00011860 size=12 ===== */

void RK_MPI_IVE_Add(void)

{
  (*(code *)PTR_RK_MPI_IVE_Add_000260e8)();
  return;
}



/* ===== <EXTERNAL>::raise @ 0001186c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000260ec)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011878 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000260f0)(__ptr);
  return;
}



/* ===== entry @ 00011888 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_000118d4 + 0x118a0 == DAT_000118d0 + 0x11898) {
    return;
  }
  pcVar1 = *(code **)(DAT_000118d8 + 0x118a8 + DAT_000118dc);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011944 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000119b8 + 0x11960;
  if (*(char *)(DAT_000119b4 + 0x11954) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000119bc) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000119c0 + 0x11980));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000119c4) != 0) {
    __deregister_frame_info(DAT_000119c8 + 0x119a0);
  }
  *(undefined1 *)(DAT_000119cc + 0x119b0) = 1;
  return;
}



/* ===== _INIT_0 @ 000119d0 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011a08 + 0x119e0 + DAT_00011a0c) != 0) {
    __register_frame_info(DAT_00011a14 + 0x11a00,DAT_00011a10 + 0x119fc);
  }
  if (((DAT_00011938 + 0x118f8) - (DAT_00011934 + 0x118f0) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001193c + 0x11900 + DAT_00011940);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== RK_IVS_MD_Init @ 00011a18 size=72 ===== */

undefined4 RK_IVS_MD_Init(void)

{
  int iVar1;
  undefined4 uVar2;
  
  pthread_mutex_init(*(pthread_mutex_t **)(DAT_00011a60 + 0x11a2c + DAT_00011a64),
                     (pthread_mutexattr_t *)0x0);
  iVar1 = RK_MPI_IVE_Init();
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== RK_IVS_MD_Exit @ 00011a68 size=68 ===== */

undefined4 RK_IVS_MD_Exit(void)

{
  int iVar1;
  undefined4 uVar2;
  
  pthread_mutex_destroy(*(pthread_mutex_t **)(DAT_00011aac + 0x11a7c + DAT_00011ab0));
  iVar1 = RK_MPI_IVE_Deinit();
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== RK_IVS_MD_CreateChn @ 00011ab4 size=1048 ===== */

undefined4 RK_IVS_MD_CreateChn(undefined4 param_1,int *param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar5 = param_2[3];
  iVar6 = param_2[4];
  if (*param_2 == 1) {
    puts((char *)(DAT_00011ecc + 0x11b04));
  }
  piVar1 = (int *)__tls_get_addr(DAT_00011ed0 + 0x11b14);
  *piVar1 = (int)param_2;
  pvVar2 = (void *)__tls_get_addr(DAT_00011ed4 + 0x11b30);
  memset(pvVar2,0,0x50);
  pvVar2 = (void *)__tls_get_addr(DAT_00011ed8 + 0x11b54);
  memset(pvVar2,0,0x50);
  pvVar2 = (void *)__tls_get_addr(DAT_00011edc + 0x11b78);
  memset(pvVar2,0,0x50);
  pvVar2 = (void *)__tls_get_addr(DAT_00011ee0 + 0x11b9c);
  memset(pvVar2,0,0x18);
  pvVar2 = (void *)__tls_get_addr(DAT_00011ee4 + 0x11bc0);
  memset(pvVar2,0,0x50);
  uVar3 = __tls_get_addr(DAT_00011ee8 + 0x11be4);
  iVar4 = IVS_CreateIveImage(uVar3,0,iVar5,iVar6);
  if (iVar4 == 0) {
    param_2[0xc] = iVar6 * iVar5;
    iVar4 = IVS_CreateIveMem(param_2 + 8,param_2[0xc]);
    if (iVar4 == 0) {
      uVar3 = __tls_get_addr(DAT_00011f04 + 0x11cd4);
      iVar4 = IVS_CreateIveImage(uVar3,0,iVar5,iVar6);
      if (iVar4 == 0) {
        if (*param_2 == 0) {
          uVar3 = __tls_get_addr(DAT_00011f14 + 0x11d58);
          iVar4 = IVS_CreateIveImage(uVar3,0,iVar5,iVar6);
          if (iVar4 == 0) {
            iVar4 = __tls_get_addr(DAT_00011f24 + 0x11de4);
            *(int *)(iVar4 + 0x10) = iVar6 * iVar5 * 0x14 + 0x10;
            iVar5 = __tls_get_addr(DAT_00011f28 + 0x11dfc);
            uVar7 = *(undefined4 *)(iVar5 + 0x10);
            uVar3 = __tls_get_addr(DAT_00011f2c + 0x11e14);
            iVar5 = IVS_CreateIveMem(uVar3,uVar7);
            if (iVar5 == 0) {
              iVar5 = __tls_get_addr(DAT_00011f3c + 0x11e80);
              pvVar2 = *(void **)(iVar5 + 8);
              iVar5 = __tls_get_addr(DAT_00011f40 + 0x11ea0);
              memset(pvVar2,0,*(size_t *)(iVar5 + 0x10));
            }
            else {
              printf((char *)(DAT_00011f34 + 0x11e54),DAT_00011f30 + 0x11e48,0xa1);
              printf((char *)(DAT_00011f38 + 0x11e68),iVar5);
            }
          }
          else {
            printf((char *)(DAT_00011f1c + 0x11da0),DAT_00011f18 + 0x11d94,0x99);
            printf((char *)(DAT_00011f20 + 0x11db4),iVar4);
          }
        }
      }
      else {
        printf((char *)(DAT_00011f0c + 0x11d1c),DAT_00011f08 + 0x11d10,0x91);
        printf((char *)(DAT_00011f10 + 0x11d30),iVar4);
      }
    }
    else {
      printf((char *)(DAT_00011efc + 0x11ca8),DAT_00011ef8 + 0x11c9c,0x8c);
      printf((char *)(DAT_00011f00 + 0x11cbc),iVar4);
    }
  }
  else {
    printf((char *)(DAT_00011ef0 + 0x11c2c),DAT_00011eec + 0x11c20,0x86);
    printf((char *)(DAT_00011ef4 + 0x11c40),iVar4);
  }
  return 0;
}



/* ===== RK_IVS_MD_DestroyChn @ 00011f44 size=344 ===== */

undefined4 RK_IVS_MD_DestroyChn(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = __tls_get_addr(DAT_0001209c + 0x11f60);
  if (*(int *)(iVar1 + 0x18) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    uVar2 = __tls_get_addr(DAT_000120a0 + 0x11f80);
    IVS_DestroyIveImage(uVar2);
  }
  piVar3 = (int *)__tls_get_addr(DAT_000120a4 + 0x11f9c);
  if (*(int *)(*piVar3 + 0x28) != 0 || *(int *)(*piVar3 + 0x2c) != 0) {
    piVar3 = (int *)__tls_get_addr(DAT_000120a8 + 0x11fc0);
    IVS_DestroyIveMem(*piVar3 + 0x20);
  }
  iVar1 = __tls_get_addr(DAT_000120ac + 0x11fe4);
  if (*(int *)(iVar1 + 0x18) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    uVar2 = __tls_get_addr(DAT_000120b0 + 0x12004);
    IVS_DestroyIveImage(uVar2);
  }
  iVar1 = __tls_get_addr(DAT_000120b4 + 0x12020);
  if (*(int *)(iVar1 + 0x18) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    uVar2 = __tls_get_addr(DAT_000120b8 + 0x12040);
    IVS_DestroyIveImage(uVar2);
  }
  iVar1 = __tls_get_addr(DAT_000120bc + 0x1205c);
  if (*(int *)(iVar1 + 8) != 0 || *(int *)(iVar1 + 0xc) != 0) {
    uVar2 = __tls_get_addr(DAT_000120c0 + 0x1207c);
    IVS_DestroyIveMem(uVar2);
  }
  return 0;
}



/* ===== RK_dump_file @ 000120c4 size=144 ===== */

undefined4
RK_dump_file(undefined4 param_1,char *param_2,void *param_3,undefined4 param_4,int param_5,
            int param_6)

{
  FILE *__s;
  undefined4 uVar1;
  
  __s = fopen(param_2,(char *)(DAT_00012154 + 0x120f0));
  if (__s == (FILE *)0x0) {
    printf((char *)(DAT_00012158 + 0x12118),param_2);
    uVar1 = 0xffffffff;
  }
  else {
    fwrite(param_3,param_6 * param_5,1,__s);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== RK_IVS_GMM2_ReduFactor @ 0001215c size=316 ===== */

void RK_IVS_GMM2_ReduFactor(int param_1)

{
  byte bVar1;
  int local_10;
  ushort local_c;
  ushort local_a;
  
  local_10 = *(int *)(param_1 + 0x18);
  IVS_SYS_MmzFlush_Start(local_10);
  for (local_a = 0; (uint)local_a < *(uint *)(param_1 + 0x40); local_a = local_a + 1) {
    for (local_c = 0; (uint)local_c < *(uint *)(param_1 + 0x3c); local_c = local_c + 1) {
      bVar1 = *(byte *)(local_10 + (uint)local_a * 2);
      if (bVar1 < 9) {
        bVar1 = 9;
      }
      *(byte *)(local_10 + (uint)local_c * 2) = bVar1 - 1;
      bVar1 = *(byte *)(local_10 + (uint)local_a * 2 + 1);
      if (bVar1 < 10) {
        bVar1 = 10;
      }
      *(byte *)(local_10 + (uint)local_a * 2 + 1) = bVar1 - 2;
    }
    local_10 = local_10 + *(int *)(param_1 + 0x30) * 2;
  }
  IVS_SYS_MmzFlush_End(local_10);
  return;
}



/* ===== RK_IVS_MD_GMM2_ChgFactorByDiffFrm @ 00012298 size=764 ===== */

/* WARNING: Removing unreachable block (ram,0x000122e8) */

undefined4 RK_IVS_MD_GMM2_ChgFactorByDiffFrm(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  ushort local_c;
  ushort local_a;
  
  local_1c = 0;
  local_20 = 1;
  local_24 = 10;
  local_10 = 0;
  local_2c = 0;
  local_1c = RK_MPI_IVE_Sub(auStack_28,param_1,param_2,param_3,&local_2c,1);
  if (local_1c == 0) {
    local_14 = *(int *)(param_3 + 0x18);
    IVS_SYS_MmzFlush_Start(local_14);
    for (local_a = 0; (uint)local_a < *(uint *)(param_1 + 0x40); local_a = local_a + 1) {
      for (local_c = 0; (uint)local_c < *(uint *)(param_1 + 0x3c); local_c = local_c + 1) {
        local_10 = local_10 + (uint)(local_24 < (int)(uint)*(byte *)(local_14 + (uint)local_c));
      }
      local_14 = local_14 + *(int *)(param_3 + 0x30);
    }
    IVS_SYS_MmzFlush_End(local_14);
    if (((int)(short)*(undefined4 *)(param_1 + 0x3c) * (int)(short)*(undefined4 *)(param_1 + 0x40) &
        0x7fffU) * 2 < (uint)(local_10 * 3)) {
      local_14 = *(int *)(param_3 + 0x18);
      local_18 = *(int *)(param_4 + 0x18);
      IVS_SYS_MmzFlush_Start(local_14);
      IVS_SYS_MmzFlush_Start(local_18);
      for (local_a = 0; (uint)local_a < *(uint *)(param_1 + 0x40); local_a = local_a + 1) {
        for (local_c = 0; (uint)local_c < *(uint *)(param_1 + 0x3c); local_c = local_c + 1) {
          if (local_24 < (int)(uint)*(byte *)(local_14 + (uint)local_c)) {
            *(undefined1 *)(local_18 + (uint)local_c * 2) = 0x14;
            *(undefined1 *)(local_18 + (uint)local_c * 2 + 1) = 200;
          }
        }
        local_14 = local_14 + *(int *)(param_3 + 0x30);
        local_18 = local_18 + *(int *)(param_4 + 0x30) * 2;
      }
      IVS_SYS_MmzFlush_End(local_14);
      IVS_SYS_MmzFlush_End(local_18);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    printf((char *)(DAT_00012598 + 0x1233c),DAT_00012594 + 0x12330,0x139);
    printf((char *)(DAT_0001259c + 0x12350),local_1c);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== RK_IVS_GMM2_ChgFactorByGrad @ 000125a0 size=1932 ===== */

void RK_IVS_GMM2_ChgFactorByGrad
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9,
               int param_10,undefined4 *param_11)

{
  ushort uVar1;
  undefined4 extraout_r1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 auStack_b0 [4];
  undefined2 local_ac;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined4 local_96;
  undefined1 local_92;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined1 auStack_3c [4];
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  ushort local_e;
  ushort local_c;
  ushort local_a;
  
  local_28 = 0;
  local_20 = 0;
  local_24 = 0;
  local_58 = *(undefined4 *)(DAT_00012d2c + 0x125e0);
  uStack_54 = *(undefined4 *)(DAT_00012d2c + 0x125e4);
  uStack_50 = *(undefined4 *)(DAT_00012d2c + 0x125e8);
  uStack_4c = *(undefined4 *)(DAT_00012d2c + 0x125ec);
  local_48 = *(undefined4 *)(DAT_00012d2c + 0x125f0);
  uStack_44 = *(undefined4 *)(DAT_00012d2c + 0x125f4);
  local_40 = (undefined1)*(undefined4 *)(DAT_00012d2c + 0x125f8);
  local_78 = 1;
  local_72 = 2;
  local_74 = 4;
  local_70 = *param_11;
  uStack_6c = param_11[1];
  uStack_68 = param_11[2];
  uStack_64 = param_11[3];
  local_60 = param_11[4];
  uStack_5c = param_11[5];
  local_2c = RK_MPI_IVE_CCL(auStack_3c,param_1,param_8,&local_78,1);
  if (local_2c != 0) {
    printf((char *)(DAT_00012d34 + 0x12678),DAT_00012d30 + 0x1266c,0x18b);
    printf((char *)(DAT_00012d38 + 0x1268c),local_2c);
    return;
  }
  local_30 = *(int *)(param_8 + 8);
  IVS_SYS_MmzFlush_Start(local_30);
  uVar4 = CONCAT44(extraout_r1,local_2c);
  if (*(char *)(local_30 + 5) != '\0') {
    local_aa = local_58;
    local_a6 = uStack_54;
    local_a2 = uStack_50;
    local_9e = uStack_4c;
    local_9a = local_48;
    local_96 = uStack_44;
    local_92 = local_40;
    local_ac = 0;
    local_90 = *param_11;
    uStack_8c = param_11[1];
    uStack_88 = param_11[2];
    uStack_84 = param_11[3];
    local_80 = param_11[4];
    uStack_7c = param_11[5];
    local_2c = RK_MPI_IVE_MagAndAng(auStack_3c,param_2,param_5,param_6,auStack_b0,local_28 != 0);
    if (local_2c != 0) {
      printf((char *)(DAT_00012d40 + 0x12770),DAT_00012d3c + 0x12764,0x19a);
      printf((char *)(DAT_00012d44 + 0x12784),local_2c);
      return;
    }
    local_b1 = 0;
    local_b8 = 3;
    local_b2 = 0xff;
    local_b4 = 0x3fc;
    local_2c = RK_MPI_IVE_16BitTo8Bit(auStack_3c,param_5,param_7,&local_b8,local_28 != 0);
    if (local_2c != 0) {
      printf((char *)(DAT_00012d4c + 0x12808),DAT_00012d48 + 0x127fc,0x1a4);
      printf((char *)(DAT_00012d50 + 0x1281c),local_2c);
      return;
    }
    local_2c = RK_MPI_IVE_MagAndAng(auStack_3c,param_3,param_5,param_6,auStack_b0,local_28 != 0);
    if (local_2c != 0) {
      printf((char *)(DAT_00012d58 + 0x12884),DAT_00012d54 + 0x12878,0x1aa);
      printf((char *)(DAT_00012d5c + 0x12898),local_2c);
      return;
    }
    local_2c = RK_MPI_IVE_16BitTo8Bit(auStack_3c,param_5,param_4,&local_b8,local_28 != 0);
    if (local_2c != 0) {
      printf((char *)(DAT_00012d64 + 0x128fc),DAT_00012d60 + 0x128f0,0x1b0);
      printf((char *)(DAT_00012d68 + 0x12910),local_2c);
      return;
    }
    local_bc = 0;
    uVar4 = RK_MPI_IVE_Sub(auStack_3c,param_7,param_4,param_9,&local_bc,1);
    local_2c = (int)uVar4;
    if (local_2c != 0) {
      printf((char *)(DAT_00012d70 + 0x12970),DAT_00012d6c + 0x12964,0x1b6);
      printf((char *)(DAT_00012d74 + 0x12984),local_2c);
      return;
    }
  }
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  local_2c = (int)uVar4;
  for (local_e = 0; local_e < 0xfe; local_e = local_e + 1) {
    uVar2 = 0xc;
    if (*(int *)(local_30 + (uint)local_e * 0xc + 0xc) != 0) {
      local_32 = *(ushort *)(local_30 + (uint)local_e * 0xc + 0x14);
      local_34 = *(ushort *)(local_30 + (uint)local_e * 0xc + 0x10);
      local_36 = *(ushort *)(local_30 + (uint)local_e * 0xc + 0x12);
      local_38 = *(ushort *)(local_30 + (uint)local_e * 0xc + 0x16);
      uVar2 = (uint)local_38;
      if (0x3b < (int)((uVar2 - local_32) * ((uint)local_36 - (uint)local_34))) {
        local_20 = 0;
        local_24 = 0;
        iVar3 = *(int *)(param_1 + 0x30) * (uint)local_32;
        uVar4 = VectorShiftRight(CONCAT44(iVar3,iVar3),0x20);
        local_14 = (int)uVar4 + *(int *)(param_1 + 0x18);
        uVar2 = *(uint *)(param_9 + 0x1c);
        iVar3 = *(int *)(param_9 + 0x30) * (uint)local_32;
        uVar4 = VectorShiftRight(CONCAT44(iVar3,iVar3),0x20);
        local_18 = (int)uVar4 + *(int *)(param_9 + 0x18);
        for (local_a = local_32; uVar1 = local_34, local_a < local_38; local_a = local_a + 1) {
          while (local_c = uVar1, local_c < local_36) {
            if ((*(char *)(local_14 + (uint)local_c) != '\0') &&
               (local_20 = local_20 + 1, *(char *)(local_18 + (uint)local_c) != '\0')) {
              local_24 = local_24 + 1;
            }
            uVar1 = local_c + 1;
          }
          local_14 = local_14 + *(int *)(param_1 + 0x30);
          local_18 = local_18 + *(int *)(param_9 + 0x30);
        }
        if ((local_24 < 10) || (local_24 * 100 < local_20)) {
          iVar3 = *(int *)(param_10 + 0x30) * (uint)local_32 * 2;
          uVar4 = VectorShiftRight(CONCAT44(iVar3,iVar3),0x20);
          local_1c = (int)uVar4 + *(int *)(param_10 + 0x18);
          uVar2 = *(uint *)(param_1 + 0x1c);
          iVar3 = *(int *)(param_1 + 0x30) * (uint)local_32;
          uVar4 = VectorShiftRight(CONCAT44(iVar3,iVar3),0x20);
          local_14 = (int)uVar4 + *(int *)(param_1 + 0x18);
          for (local_a = local_32; uVar1 = local_34, local_a < local_38; local_a = local_a + 1) {
            while (local_c = uVar1, local_c < local_36) {
              if (*(char *)(local_14 + (uint)local_c) != '\0') {
                *(undefined1 *)(local_1c + (uint)local_c * 2) = 0x10;
                *(undefined1 *)(local_1c + (uint)local_c * 2 + 1) = 200;
              }
              uVar1 = local_c + 1;
            }
            local_14 = local_14 + *(int *)(param_1 + 0x30);
            local_1c = local_1c + *(int *)(param_10 + 0x30) * 2;
          }
        }
      }
    }
  }
  IVS_SYS_MmzFlush_End(local_30,uVar2);
  return;
}



/* ===== RK_IVS_GMM2_AdjustmentFactor @ 00012d78 size=172 ===== */

undefined4
RK_IVS_GMM2_AdjustmentFactor
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  
  RK_IVS_GMM2_ReduFactor(param_1);
  iVar1 = RK_IVS_MD_GMM2_ChgFactorByDiffFrm(param_3,param_4,param_5,param_1);
  if (iVar1 != 1) {
    RK_IVS_GMM2_ChgFactorByGrad
              (param_2,param_3,param_4,param_9,param_6,param_7,param_8,param_10,param_5,param_1,
               param_11);
  }
  return 0;
}



/* ===== RK_IVS_DUMP @ 00012e24 size=56 ===== */

undefined4 RK_IVS_DUMP(void)

{
  return 0;
}



/* ===== RK_IVS_MD_REF_Process @ 00012e5c size=1804 ===== */

undefined4 RK_IVS_MD_REF_Process(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uStack_d8;
  byte bStack_d4;
  undefined2 uStack_ce;
  undefined1 uStack_cc;
  undefined2 uStack_ca;
  undefined3 uStack_c7;
  undefined1 uStack_c4;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  iVar13 = DAT_00013568 + 0x12e84;
  uVar2 = *(undefined4 *)(DAT_0001356c + 0x12e8c);
  uVar8 = *(undefined4 *)(DAT_0001356c + 0x12e90);
  uVar10 = *(undefined4 *)(DAT_0001356c + 0x12e94);
  uVar12 = *(undefined4 *)(DAT_0001356c + 0x12e98);
  uVar3 = *(undefined4 *)(DAT_0001356c + 0x12e9c);
  uVar9 = *(undefined4 *)(DAT_0001356c + 0x12ea0);
  uVar11 = *(undefined4 *)(DAT_0001356c + 0x12ea4);
  uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  bStack_d4 = (byte)uVar1;
  uStack_ce = (undefined2)((uint)uVar5 >> 8);
  uStack_cc = (undefined1)((uint)uVar5 >> 0x18);
  uStack_ca = (undefined2)((uint)uVar1 >> 8);
  uStack_c7 = (undefined3)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_c4 = (undefined1)
              ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc) >> 0x18);
  uStack_d8 = CONCAT13(0xff,(int3)uVar5);
  piVar4 = (int *)__tls_get_addr(DAT_00013570 + 0x12eec);
  local_18 = *(undefined4 *)(*piVar4 + 0xc);
  piVar4 = (int *)__tls_get_addr(DAT_00013574 + 0x12f0c);
  local_1c = *(undefined4 *)(*piVar4 + 0x10);
  memset(&local_a4,0,4);
  memset(&local_38,0,4);
  memset(&local_44,0,0xc);
  memset(&local_60,0,0x19);
  memset(&local_7c,0,0x19);
  memset(&local_a0,0,0x20);
  local_20 = DAT_00013578 + 0x12fa4;
  local_24 = DAT_0001357c + 0x12fb0;
  local_28 = DAT_00013580 + 0x12fbc;
  local_2c = DAT_00013584 + 0x12fc8;
  local_30 = DAT_00013588 + 0x12fd4;
  piVar4 = (int *)__tls_get_addr(DAT_0001358c + 0x12fe0);
  local_a4 = *(undefined4 *)(*piVar4 + 0x38);
  pthread_mutex_lock(*(pthread_mutex_t **)(iVar13 + DAT_00013590));
  if (param_3 == 0) {
    uVar5 = __tls_get_addr(DAT_00013598 + 0x13060);
    uVar6 = __tls_get_addr(DAT_0001359c + 0x13078);
    local_14 = RK_MPI_IVE_Add(auStack_34,param_2,uVar6,uVar5,&local_a4,1);
  }
  else {
    uVar5 = __tls_get_addr(DAT_00013594 + 0x1301c);
    local_14 = RK_MPI_IVE_Add(auStack_34,param_2,param_3,uVar5,&local_a4,1);
  }
  if (local_14 == 0) {
    iVar7 = __tls_get_addr(DAT_000135ac + 0x130fc);
    RK_IVS_DUMP(*(undefined4 *)(iVar7 + 0x18),local_18,local_1c,0,DAT_000135b0 + 0x1312c,local_20);
    local_38 = 0;
    uVar5 = __tls_get_addr(DAT_000135b4 + 0x13148);
    local_14 = RK_MPI_IVE_Sub(auStack_34,param_2,uVar5,param_2,&local_38,1);
    if (local_14 == 0) {
      RK_IVS_DUMP(*(undefined4 *)(param_2 + 0x18),local_18,local_1c,0,DAT_000135c4 + 0x131ec,
                  local_24);
      pthread_mutex_unlock(*(pthread_mutex_t **)(iVar13 + DAT_00013590));
      local_44 = 0;
      local_40 = 0x14;
      local_3f = 0xf0;
      local_3e = 0;
      local_3d = 0x80;
      local_3c = 0xff;
      uVar5 = __tls_get_addr(DAT_000135c8 + 0x13244);
      local_14 = RK_MPI_IVE_Thresh(auStack_34,param_2,uVar5,&local_44,1);
      if (local_14 == 0) {
        iVar13 = __tls_get_addr(DAT_000135d8 + 0x132c0);
        RK_IVS_DUMP(*(undefined4 *)(iVar13 + 0x18),local_18,local_1c,0,DAT_000135dc + 0x132f0,
                    local_28);
        local_60 = uVar2;
        uStack_5c = uVar8;
        uStack_58 = uVar10;
        uStack_54 = uVar12;
        local_50 = uVar3;
        uStack_4c = uVar9;
        local_48 = (char)uVar11;
        uVar5 = __tls_get_addr(DAT_000135e0 + 0x13324);
        local_14 = RK_MPI_IVE_Dilate(auStack_34,uVar5,param_2,&local_60,1);
        if (local_14 == 0) {
          RK_IVS_DUMP(*(undefined4 *)(param_2 + 0x18),local_18,local_1c,0,DAT_000135f0 + 0x133c0,
                      local_2c);
          uStack_74 = CONCAT13(0xff,(uint3)bStack_d4);
          uStack_70 = CONCAT22(uStack_ce,0xffff);
          local_7c = 0;
          uStack_78 = uStack_d8;
          local_6c = CONCAT22(uStack_ca,CONCAT11(0xff,uStack_cc));
          local_64 = uStack_c4;
          uStack_68 = CONCAT31(uStack_c7,(char)((uint)uVar1 >> 0x18));
          uVar5 = __tls_get_addr(DAT_000135f4 + 0x133f4);
          local_14 = RK_MPI_IVE_Erode(auStack_34,param_2,uVar5,&local_7c,1);
          if (local_14 == 0) {
            iVar13 = __tls_get_addr(DAT_00013604 + 0x13470);
            RK_IVS_DUMP(*(undefined4 *)(iVar13 + 0x18),local_18,local_1c,0,DAT_00013608 + 0x134a0,
                        local_30);
            piVar4 = (int *)__tls_get_addr(DAT_0001360c + 0x134b4);
            iVar13 = *piVar4;
            local_a0 = *(undefined4 *)(iVar13 + 0x18);
            uStack_9c = *(undefined4 *)(iVar13 + 0x1c);
            uStack_98 = *(undefined4 *)(iVar13 + 0x20);
            uStack_94 = *(undefined4 *)(iVar13 + 0x24);
            local_90 = *(undefined4 *)(iVar13 + 0x28);
            uStack_8c = *(undefined4 *)(iVar13 + 0x2c);
            uStack_88 = *(undefined4 *)(iVar13 + 0x30);
            uStack_84 = *(undefined4 *)(iVar13 + 0x34);
            uVar5 = __tls_get_addr(DAT_00013610 + 0x134e8);
            local_14 = RK_MPI_IVE_CCL(auStack_34,uVar5,param_4,&local_a0,1);
            if (local_14 != 0) {
              printf((char *)(DAT_00013618 + 0x13538),DAT_00013614 + 0x1352c,0x2a2);
              printf((char *)(DAT_0001361c + 0x1354c),local_14);
            }
          }
          else {
            printf((char *)(DAT_000135fc + 0x13444),DAT_000135f8 + 0x13438,0x297);
            printf((char *)(DAT_00013600 + 0x13458),local_14);
          }
        }
        else {
          printf((char *)(DAT_000135e8 + 0x13374),DAT_000135e4 + 0x13368,0x28c);
          printf((char *)(DAT_000135ec + 0x13388),local_14);
        }
      }
      else {
        printf((char *)(DAT_000135d0 + 0x13294),DAT_000135cc + 0x13288,0x281);
        printf((char *)(DAT_000135d4 + 0x132a8),local_14);
      }
    }
    else {
      printf((char *)(DAT_000135bc + 0x131a0),DAT_000135b8 + 0x13194,0x26f);
      printf((char *)(DAT_000135c0 + 0x131b4),local_14);
    }
  }
  else {
    printf((char *)(DAT_000135a4 + 0x130d0),DAT_000135a0 + 0x130c4,0x263);
    printf((char *)(DAT_000135a8 + 0x130e4),local_14);
  }
  return 0;
}



/* ===== RK_IVS_MD_BG_Process @ 00013620 size=1848 ===== */

undefined4
RK_IVS_MD_BG_Process
          (undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined4 uStack_ec;
  byte bStack_e8;
  undefined2 uStack_e2;
  undefined1 uStack_e0;
  undefined2 uStack_de;
  undefined3 uStack_db;
  undefined1 uStack_d8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  char local_51;
  undefined1 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined1 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined1 auStack_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  
  iVar15 = DAT_00013d58 + 0x13648;
  uVar2 = *(undefined4 *)(DAT_00013d5c + 0x13650);
  uVar10 = *(undefined4 *)(DAT_00013d5c + 0x13654);
  uVar12 = *(undefined4 *)(DAT_00013d5c + 0x13658);
  uVar14 = *(undefined4 *)(DAT_00013d5c + 0x1365c);
  uVar3 = *(undefined4 *)(DAT_00013d5c + 0x13660);
  uVar11 = *(undefined4 *)(DAT_00013d5c + 0x13664);
  uVar13 = *(undefined4 *)(DAT_00013d5c + 0x13668);
  uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  bStack_e8 = (byte)uVar1;
  uStack_e2 = (undefined2)((uint)uVar5 >> 8);
  uStack_e0 = (undefined1)((uint)uVar5 >> 0x18);
  uStack_de = (undefined2)((uint)uVar1 >> 8);
  uStack_db = (undefined3)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_d8 = (undefined1)
              ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc) >> 0x18);
  uStack_ec = CONCAT13(0xff,(int3)uVar5);
  piVar4 = (int *)__tls_get_addr(DAT_00013d60 + 0x136b0);
  local_1a = (undefined2)*(undefined4 *)(*piVar4 + 0xc);
  piVar4 = (int *)__tls_get_addr(DAT_00013d64 + 0x136d0);
  local_1c = (undefined2)*(undefined4 *)(*piVar4 + 0x10);
  memset(&local_54,0,0x1a);
  memset(&local_7c,0,0x19);
  memset(&local_98,0,0x19);
  memset(&local_b8,0,0x20);
  local_20 = DAT_00013d68 + 0x13740;
  local_24 = DAT_00013d6c + 0x1374c;
  local_28 = DAT_00013d70 + 0x13758;
  local_2c = DAT_00013d74 + 0x13764;
  local_30 = DAT_00013d78 + 0x13770;
  local_54 = 0;
  local_52 = 1;
  local_51 = '\x05';
  local_50 = 1;
  local_4e = 0x10;
  local_4c = 100;
  local_4a = 0x39b;
  local_48 = 4;
  local_46 = 9;
  local_44 = 0x2c8;
  local_42 = 0xe1;
  local_40 = 200;
  local_3e = 0x200;
  local_3c = 0x10;
  pthread_mutex_lock(*(pthread_mutex_t **)(iVar15 + DAT_00013d7c));
  if (local_51 == '\x01') {
    local_4a = 0x3e0;
  }
  if (param_3 != 0) {
    local_53 = 1;
    uVar5 = __tls_get_addr(DAT_00013d80 + 0x13824);
    uVar6 = __tls_get_addr(DAT_00013d84 + 0x1383c);
    uVar17 = 1;
    puVar16 = &local_54;
    uVar7 = __tls_get_addr(DAT_00013d88 + 0x13868);
    uVar8 = __tls_get_addr(DAT_00013d8c + 80000);
    local_34 = RK_MPI_IVE_GMM(auStack_38,param_3,uVar6,uVar5,uVar8,uVar7,puVar16,uVar17);
  }
  local_53 = 0;
  uVar5 = __tls_get_addr(DAT_00013d90 + 0x138b8);
  uVar6 = __tls_get_addr(DAT_00013d94 + 0x138d0);
  uVar17 = 1;
  puVar16 = &local_54;
  uVar7 = __tls_get_addr(DAT_00013d98 + 0x138fc);
  uVar8 = __tls_get_addr(DAT_00013d9c + 0x13914);
  local_34 = RK_MPI_IVE_GMM(auStack_38,param_2,uVar6,uVar5,uVar8,uVar7,puVar16,uVar17);
  if (local_34 == 0) {
    iVar9 = __tls_get_addr(DAT_00013dac + 0x1398c);
    RK_IVS_DUMP(*(undefined4 *)(iVar9 + 0x18),local_1a,local_1c,0,DAT_00013db0 + 0x139bc,local_2c);
    iVar9 = __tls_get_addr(DAT_00013db4 + 0x139d0);
    RK_IVS_DUMP(*(undefined4 *)(iVar9 + 0x18),local_1a,local_1c,0,DAT_00013db8 + 0x13a00,local_30);
    pthread_mutex_unlock(*(pthread_mutex_t **)(iVar15 + DAT_00013d7c));
    local_60 = 0;
    local_5c = 0x14;
    local_5b = 0xf0;
    local_5a = 0;
    local_59 = 0x80;
    local_58 = 0xff;
    uVar5 = __tls_get_addr(DAT_00013dbc + 0x13a58);
    local_34 = RK_MPI_IVE_Thresh(auStack_38,uVar5,param_2,&local_60,1);
    if (local_34 == 0) {
      RK_IVS_DUMP(*(undefined4 *)(param_2 + 0x18),local_1a,local_1c,0,DAT_00013dcc + 0x13af4,
                  local_28);
      local_7c = uVar2;
      uStack_78 = uVar10;
      uStack_74 = uVar12;
      uStack_70 = uVar14;
      local_6c = uVar3;
      uStack_68 = uVar11;
      local_64 = (char)uVar13;
      uVar5 = __tls_get_addr(DAT_00013dd0 + 0x13b28);
      local_34 = RK_MPI_IVE_Dilate(auStack_38,param_2,uVar5,&local_7c,1);
      if (local_34 == 0) {
        iVar15 = __tls_get_addr(DAT_00013de0 + 0x13ba4);
        RK_IVS_DUMP(*(undefined4 *)(iVar15 + 0x18),local_1a,local_1c,0,DAT_00013de4 + 0x13bd4,
                    local_20);
        uStack_90 = CONCAT13(0xff,(uint3)bStack_e8);
        uStack_8c = CONCAT22(uStack_e2,0xffff);
        local_98 = 0;
        uStack_94 = uStack_ec;
        local_88 = CONCAT22(uStack_de,CONCAT11(0xff,uStack_e0));
        local_80 = uStack_d8;
        uStack_84 = CONCAT31(uStack_db,(char)((uint)uVar1 >> 0x18));
        uVar5 = __tls_get_addr(DAT_00013de8 + 0x13c08);
        local_34 = RK_MPI_IVE_Erode(auStack_38,uVar5,param_2,&local_98,1);
        if (local_34 == 0) {
          RK_IVS_DUMP(*(undefined4 *)(param_2 + 0x18),local_1a,local_1c,0,DAT_00013df8 + 0x13ca4,
                      local_24);
          piVar4 = (int *)__tls_get_addr(DAT_00013dfc + 0x13cb8);
          iVar15 = *piVar4;
          local_b8 = *(undefined4 *)(iVar15 + 0x18);
          uStack_b4 = *(undefined4 *)(iVar15 + 0x1c);
          uStack_b0 = *(undefined4 *)(iVar15 + 0x20);
          uStack_ac = *(undefined4 *)(iVar15 + 0x24);
          local_a8 = *(undefined4 *)(iVar15 + 0x28);
          uStack_a4 = *(undefined4 *)(iVar15 + 0x2c);
          uStack_a0 = *(undefined4 *)(iVar15 + 0x30);
          uStack_9c = *(undefined4 *)(iVar15 + 0x34);
          local_34 = RK_MPI_IVE_CCL(auStack_38,param_2,param_5,&local_b8,1);
          if (local_34 != 0) {
            printf((char *)(DAT_00013e04 + 0x13d28),DAT_00013e00 + 0x13d1c,0x36a);
            printf((char *)(DAT_00013e08 + 0x13d3c),local_34);
          }
        }
        else {
          printf((char *)(DAT_00013df0 + 0x13c58),DAT_00013dec + 0x13c4c,0x35e);
          printf((char *)(DAT_00013df4 + 0x13c6c),local_34);
        }
      }
      else {
        printf((char *)(DAT_00013dd8 + 0x13b78),DAT_00013dd4 + 0x13b6c,0x353);
        printf((char *)(DAT_00013ddc + 0x13b8c),local_34);
      }
    }
    else {
      printf((char *)(DAT_00013dc4 + 0x13aa8),DAT_00013dc0 + 0x13a9c,0x341);
      printf((char *)(DAT_00013dc8 + 0x13abc),local_34);
    }
  }
  else {
    printf((char *)(DAT_00013da4 + 0x13960),DAT_00013da0 + 0x13954,0x325);
    printf((char *)(DAT_00013da8 + 0x13974),local_34);
  }
  return 0;
}



/* ===== RK_IVS_MD_Process @ 00013e0c size=252 ===== */

undefined4
RK_IVS_MD_Process(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  
  local_c = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00013f08 + 0x13e3c);
  if (*piVar1 == 0) {
    printf((char *)(DAT_00013f0c + 0x13e5c));
    local_c = 0xffffffff;
  }
  else {
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00013f10 + 0x13e78);
    if (*(int *)*puVar2 == 1) {
      local_c = RK_IVS_MD_REF_Process(param_1,param_2,param_3,param_5);
    }
    else {
      puVar2 = (undefined4 *)__tls_get_addr(DAT_00013f14 + 0x13eb8);
      if (*(int *)*puVar2 == 0) {
        local_c = RK_IVS_MD_BG_Process(param_1,param_2,param_3,param_4,param_5);
      }
    }
  }
  return local_c;
}



/* ===== RK_IVS_MD_GetBg @ 00013f18 size=268 ===== */

undefined4 RK_IVS_MD_GetBg(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *__dest;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = DAT_00014024 + 0x13f38;
  piVar1 = (int *)__tls_get_addr(DAT_00014028 + 0x13f40);
  if (*piVar1 == 0) {
    printf((char *)(DAT_0001402c + 0x13f60));
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)__tls_get_addr(DAT_00014030 + 0x13f78);
    uVar4 = *(uint *)(*piVar1 + 0xc);
    piVar1 = (int *)__tls_get_addr(DAT_00014034 + 0x13f98);
    uVar5 = *(uint *)(*piVar1 + 0x10);
    pthread_mutex_lock(*(pthread_mutex_t **)(iVar6 + DAT_00014038));
    __dest = *(void **)(param_2 + 0x18);
    iVar2 = __tls_get_addr(DAT_0001403c + 0x13fd8);
    memcpy(__dest,*(void **)(iVar2 + 0x18),(uVar5 & 0xffff) * (uVar4 & 0xffff));
    pthread_mutex_unlock(*(pthread_mutex_t **)(iVar6 + DAT_00014038));
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== IVS_CalcStride @ 00014040 size=100 ===== */

int IVS_CalcStride(int param_1,int param_2)

{
  int extraout_r1;
  int extraout_r1_00;
  
  FUN_000155f8(param_1,param_2);
  FUN_000155f8(param_2 - extraout_r1,param_2);
  return param_1 + extraout_r1_00;
}



/* ===== IVS_CreateIveImage @ 000140a4 size=1104 ===== */

undefined4 IVS_CreateIveImage(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  param_1[0x11] = param_2;
  param_1[0xf] = param_3;
  param_1[0x10] = param_4;
  uVar2 = IVS_CalcStride(param_3,0x10);
  switch(param_2) {
  case 0:
    goto LAB_00014160;
  case 1:
LAB_00014160:
    IVS_SYS_MmzAlloc(param_1,param_1 + 6,param_4 * uVar2);
    if (param_1[6] != 0 || param_1[7] != 0) {
      param_1[0xc] = uVar2;
      return 0;
    }
    return 0xffffffff;
  case 2:
    IVS_SYS_MmzAlloc(param_1,param_1 + 6,param_4 * uVar2 * 3 >> 1);
    if (param_1[6] != 0 || param_1[7] != 0) {
      param_1[0xc] = uVar2;
      param_1[0xd] = uVar2;
      uVar3 = VectorShiftRight(CONCAT44(param_4 * uVar2,param_4 * uVar2),0x20);
      param_1[2] = (uint)uVar3 + *param_1;
      param_1[3] = (int)((ulonglong)uVar3 >> 0x20) + param_1[1] + (uint)CARRY4((uint)uVar3,*param_1)
      ;
      uVar3 = VectorShiftRight(CONCAT44(param_4 * uVar2,param_4 * uVar2),0x20);
      param_1[8] = (uint)uVar3 + param_1[6];
      param_1[9] = (int)((ulonglong)uVar3 >> 0x20) + param_1[7] +
                   (uint)CARRY4((uint)uVar3,param_1[6]);
      return 0;
    }
    return 0xffffffff;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    goto LAB_000141a8;
  case 9:
LAB_000141a8:
    IVS_SYS_MmzAlloc(param_1,param_1 + 6,param_4 * uVar2 * 2);
    if (param_1[6] != 0 || param_1[7] != 0) {
      param_1[0xc] = uVar2;
      return 0;
    }
    return 0xffffffff;
  case 10:
    IVS_SYS_MmzAlloc(param_1,param_1 + 6,param_4 * uVar2 * 3);
    if (param_1[6] != 0 || param_1[7] != 0) {
      param_1[0xc] = uVar2;
      return 0;
    }
    return 0xffffffff;
  case 0xb:
    IVS_SYS_MmzAlloc(param_1,param_1 + 6,param_4 * uVar2 * 3);
    if (param_1[6] != 0 || param_1[7] != 0) {
      param_1[0xc] = uVar2;
      param_1[0xd] = uVar2;
      uVar3 = VectorShiftRight(CONCAT44(param_4 * uVar2,param_4 * uVar2),0x20);
      param_1[2] = (uint)uVar3 + *param_1;
      param_1[3] = (int)((ulonglong)uVar3 >> 0x20) + param_1[1] + (uint)CARRY4((uint)uVar3,*param_1)
      ;
      uVar3 = VectorShiftRight(CONCAT44(param_4 * uVar2,param_4 * uVar2),0x20);
      param_1[8] = (uint)uVar3 + param_1[6];
      param_1[9] = (int)((ulonglong)uVar3 >> 0x20) + param_1[7] +
                   (uint)CARRY4((uint)uVar3,param_1[6]);
      param_1[0xe] = uVar2;
      iVar1 = param_4 * uVar2 * 2;
      uVar3 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
      param_1[4] = (uint)uVar3 + *param_1;
      param_1[5] = (int)((ulonglong)uVar3 >> 0x20) + param_1[1] + (uint)CARRY4((uint)uVar3,*param_1)
      ;
      iVar1 = param_4 * uVar2 * 2;
      uVar3 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
      param_1[10] = (uint)uVar3 + param_1[6];
      param_1[0xb] = (int)((ulonglong)uVar3 >> 0x20) + param_1[7] +
                     (uint)CARRY4((uint)uVar3,param_1[6]);
      return 0;
    }
    return 0xffffffff;
  case 0xc:
    break;
  case 0xd:
    IVS_SYS_MmzAlloc(param_1,param_1 + 6,param_4 * uVar2 * 4);
    if (param_1[6] != 0 || param_1[7] != 0) {
      param_1[0xc] = uVar2;
      return 0;
    }
    return 0xffffffff;
  case 0xe:
    break;
  case 0xf:
    IVS_SYS_MmzAlloc(param_1,param_1 + 6,param_4 * uVar2 * 8);
    if (param_1[6] != 0 || param_1[7] != 0) {
      param_1[0xc] = uVar2;
      return 0;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}



/* ===== IVS_CreateIveMem @ 000144f4 size=124 ===== */

undefined4 IVS_CreateIveMem(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    IVS_SYS_MmzAlloc(param_1,param_1 + 8,param_2);
    if (*(int *)(param_1 + 8) == 0 && *(int *)(param_1 + 0xc) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = param_2;
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== IVS_CreateIveData @ 00014570 size=176 ===== */

undefined4 IVS_CreateIveData(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    *(int *)(param_1 + 0x18) = param_3;
    iVar1 = IVS_CalcStride(param_2,0x10);
    IVS_SYS_MmzAlloc(param_1,param_1 + 8,param_3 * iVar1);
    if (*(int *)(param_1 + 8) == 0 && *(int *)(param_1 + 0xc) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x10) = iVar1;
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== IVS_DestroyIveImage @ 00014620 size=100 ===== */

undefined4 IVS_DestroyIveImage(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0 || *(int *)(param_1 + 0x1c) != 0) {
      IVS_SYS_MmzFree(*(undefined4 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== IVS_DestroyIveMem @ 00014684 size=100 ===== */

undefined4 IVS_DestroyIveMem(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0 || *(int *)(param_1 + 0xc) != 0) {
      IVS_SYS_MmzFree(*(undefined4 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== IVS_DestroyIveData @ 000146e8 size=100 ===== */

undefined4 IVS_DestroyIveData(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0 || *(int *)(param_1 + 0xc) != 0) {
      IVS_SYS_MmzFree(*(undefined4 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== ivs_comp @ 0001474c size=68 ===== */

int ivs_comp(undefined4 *param_1,undefined4 *param_2)

{
  return (uint)*(byte *)*param_2 - (uint)*(byte *)*param_1;
}



/* ===== IVS_GetTickCount @ 00014790 size=136 ===== */

undefined8 IVS_GetTickCount(void)

{
  uint uVar1;
  timespec local_20;
  undefined8 local_18;
  
  local_18 = 0;
  clock_gettime(1,&local_20);
  uVar1 = (uint)((ulonglong)(uint)local_20.tv_sec * 1000000000);
  local_18 = CONCAT44((local_20.tv_sec >> 0x1f) * 1000000000 +
                      (int)((ulonglong)(uint)local_20.tv_sec * 1000000000 >> 0x20) +
                      (local_20.tv_nsec >> 0x1f) + (uint)CARRY4(uVar1,local_20.tv_nsec),
                      uVar1 + local_20.tv_nsec);
  return local_18;
}



/* ===== IVS_GetTickFrequency @ 00014818 size=72 ===== */

undefined4 IVS_GetTickFrequency(void)

{
  return SUB84(DAT_00014860 * 1000000000.0,0);
}



/* ===== IVS_GenRand @ 00014868 size=184 ===== */

int IVS_GenRand(int param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int local_c;
  
  if (param_2 < 0) {
    iVar1 = rand();
    FUN_000156f4(iVar1,(param_1 - param_2) + 1);
    local_c = extraout_r1_00;
    if (param_1 < extraout_r1_00) {
      local_c = param_1 - extraout_r1_00;
    }
  }
  else {
    iVar1 = rand();
    FUN_000156f4(iVar1,(param_1 - param_2) + 1);
    local_c = param_2 + extraout_r1;
  }
  return local_c;
}



/* ===== IVS_STRCPY @ 00014920 size=48 ===== */

void IVS_STRCPY(char *param_1,undefined4 param_2,char *param_3)

{
  strcpy(param_1,param_3);
  return;
}



/* ===== IVS_Memset @ 00014950 size=72 ===== */

undefined4 IVS_Memset(void *param_1,int param_2,size_t param_3)

{
  IVS_SYS_MmzFlush_Start(param_1);
  memset(param_1,param_2,param_3);
  IVS_SYS_MmzFlush_End(param_1);
  return 0;
}



/* ===== IVS_Memcpy @ 00014998 size=88 ===== */

undefined4 IVS_Memcpy(void *param_1,void *param_2,size_t param_3)

{
  IVS_SYS_MmzFlush_Start(param_2);
  IVS_SYS_MmzFlush_Start(param_1);
  memcpy(param_1,param_2,param_3);
  IVS_SYS_MmzFlush_End(param_1);
  IVS_SYS_MmzFlush_End(param_2);
  return 0;
}



/* ===== IVS_ReadFileSize @ 000149f0 size=172 ===== */

long IVS_ReadFileSize(char *param_1,undefined4 *param_2)

{
  FILE *__stream;
  undefined4 local_c;
  
  local_c = -1;
  __stream = fopen(param_1,(char *)(DAT_00014a9c + 0x14a24));
  if (__stream == (FILE *)0x0) {
    printf((char *)(DAT_00014aa0 + 0x14a4c),param_1);
  }
  else {
    fseek(__stream,0,2);
    local_c = ftell(__stream);
    fseek(__stream,0,0);
    *param_2 = __stream;
  }
  return local_c;
}



/* ===== IVS_ReadFile @ 00014aa4 size=1536 ===== */

undefined4 IVS_ReadFile(char *param_1,int param_2,int *param_3)

{
  int iVar1;
  size_t sVar2;
  FILE *local_1c;
  void *local_18;
  undefined4 local_14;
  ushort local_e;
  int local_c;
  
  local_1c = (FILE *)*param_3;
  if (param_2 == 0) {
    return 0xffffffff;
  }
  IVS_SYS_MmzFlush_Start(*(undefined4 *)(param_2 + 0x18));
  if (local_1c == (FILE *)0x0) {
    if (param_1 == (char *)0x0) {
      puts((char *)(DAT_000150a4 + 0x14b14));
      local_14 = 0xffffffff;
      goto LAB_00015080;
    }
    local_1c = fopen(param_1,(char *)(DAT_000150a8 + 0x14b30));
    if (local_1c == (FILE *)0x0) {
      printf((char *)(DAT_000150ac + 0x14b58),param_1);
    }
  }
  if (local_1c == (FILE *)0x0) {
    return 0xffffffff;
  }
  iVar1 = feof(local_1c);
  if (iVar1 != 0) {
    fseek(local_1c,0,0);
  }
  local_14 = 0;
  switch(*(undefined4 *)(param_2 + 0x44)) {
  case 0:
    local_18 = *(void **)(param_2 + 0x18);
    for (local_e = 0; (uint)local_e < *(uint *)(param_2 + 0x40); local_e = local_e + 1) {
      sVar2 = fread(local_18,*(size_t *)(param_2 + 0x3c),1,local_1c);
      if (sVar2 != 1) {
        local_14 = 0xffffffff;
        break;
      }
      local_18 = (void *)((int)local_18 + *(int *)(param_2 + 0x30));
    }
    break;
  case 1:
  default:
switchD_00014ba8_default:
    local_14 = 0xffffffff;
    break;
  case 2:
    local_18 = *(void **)(param_2 + 0x18);
    for (local_e = 0; (uint)local_e < *(uint *)(param_2 + 0x40); local_e = local_e + 1) {
      sVar2 = fread(local_18,*(size_t *)(param_2 + 0x3c),1,local_1c);
      if (sVar2 != 1) {
        local_14 = 0xffffffff;
        break;
      }
      local_18 = (void *)((int)local_18 + *(int *)(param_2 + 0x30));
    }
    local_18 = *(void **)(param_2 + 0x20);
    for (local_e = 0; (uint)local_e < *(uint *)(param_2 + 0x40) >> 1; local_e = local_e + 1) {
      sVar2 = fread(local_18,*(size_t *)(param_2 + 0x3c),1,local_1c);
      if (sVar2 != 1) {
        local_14 = 0xffffffff;
        break;
      }
      local_18 = (void *)((int)local_18 + *(int *)(param_2 + 0x34));
    }
    break;
  case 3:
    local_18 = *(void **)(param_2 + 0x18);
    for (local_e = 0; (uint)local_e < *(uint *)(param_2 + 0x40); local_e = local_e + 1) {
      sVar2 = fread(local_18,*(size_t *)(param_2 + 0x3c),1,local_1c);
      if (sVar2 != 1) {
        local_14 = 0xffffffff;
        break;
      }
      local_18 = (void *)((int)local_18 + *(int *)(param_2 + 0x30));
    }
    local_18 = *(void **)(param_2 + 0x20);
    for (local_e = 0; (uint)local_e < *(uint *)(param_2 + 0x40); local_e = local_e + 1) {
      sVar2 = fread(local_18,*(size_t *)(param_2 + 0x3c),1,local_1c);
      if (sVar2 != 1) {
        local_14 = 0xffffffff;
        break;
      }
      local_18 = (void *)((int)local_18 + *(int *)(param_2 + 0x34));
    }
    break;
  case 4:
    goto switchD_00014ba8_default;
  case 5:
    goto switchD_00014ba8_default;
  case 6:
    goto switchD_00014ba8_default;
  case 7:
    goto switchD_00014ba8_default;
  case 8:
    goto LAB_00014fdc;
  case 9:
LAB_00014fdc:
    local_18 = *(void **)(param_2 + 0x18);
    for (local_e = 0; (uint)local_e < *(uint *)(param_2 + 0x40); local_e = local_e + 1) {
      sVar2 = fread(local_18,*(size_t *)(param_2 + 0x3c),2,local_1c);
      if (sVar2 != 2) {
        local_14 = 0xffffffff;
        break;
      }
      local_18 = (void *)((int)local_18 + *(int *)(param_2 + 0x30) * 2);
    }
    break;
  case 10:
    local_18 = *(void **)(param_2 + 0x18);
    for (local_e = 0; (uint)local_e < *(uint *)(param_2 + 0x40); local_e = local_e + 1) {
      sVar2 = fread(local_18,*(int *)(param_2 + 0x3c) * 3,1,local_1c);
      if (sVar2 != 1) {
        local_14 = 0xffffffff;
        break;
      }
      local_18 = (void *)((int)local_18 + *(int *)(param_2 + 0x30) * 3);
    }
    break;
  case 0xb:
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      local_18 = *(void **)(param_2 + (local_c + 3) * 8);
      for (local_e = 0; (uint)local_e < *(uint *)(param_2 + 0x40); local_e = local_e + 1) {
        sVar2 = fread(local_18,*(size_t *)(param_2 + 0x3c),1,local_1c);
        if (sVar2 != 1) {
          local_14 = 0xffffffff;
          break;
        }
        local_18 = (void *)((int)local_18 + *(int *)(param_2 + (local_c + 0xc) * 4));
      }
    }
  }
  *param_3 = (int)local_1c;
LAB_00015080:
  IVS_SYS_MmzFlush_End(*(undefined4 *)(param_2 + 0x18));
  return local_14;
}



/* ===== IVS_WriteFile @ 000150b0 size=228 ===== */

undefined4 IVS_WriteFile(char *param_1,void *param_2,size_t param_3,int *param_4)

{
  FILE *local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_10 = (FILE *)*param_4;
  IVS_SYS_MmzFlush_Start(param_2);
  if (local_10 == (FILE *)0x0) {
    if (param_1 == (char *)0x0) {
      puts((char *)(DAT_00015194 + 0x1510c));
      local_c = 0xffffffff;
      goto LAB_0001517c;
    }
    local_10 = fopen(param_1,(char *)(DAT_00015198 + 0x15128));
    if (local_10 == (FILE *)0x0) {
      printf((char *)(DAT_0001519c + 0x15150),param_1);
      return 0xffffffff;
    }
  }
  fwrite(param_2,param_3,1,local_10);
  *param_4 = (int)local_10;
LAB_0001517c:
  IVS_SYS_MmzFlush_End(param_2);
  return local_c;
}



/* ===== IVS_MmzAlloc @ 000151a0 size=96 ===== */

undefined4 IVS_MmzAlloc(int *param_1,int *param_2,size_t param_3)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = malloc(param_3);
  *param_2 = (int)pvVar1;
  iVar2 = *param_2;
  *param_1 = iVar2;
  param_1[1] = iVar2 >> 0x1f;
  return 0;
}



/* ===== IVS_MmzFree @ 00015200 size=40 ===== */

undefined4 IVS_MmzFree(void *param_1)

{
  free(param_1);
  return 0;
}



/* ===== IVS_MmzAlloc_Cached @ 00015228 size=88 ===== */

undefined4 IVS_MmzAlloc_Cached(int *param_1,int *param_2,size_t param_3)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = malloc(param_3);
  *param_2 = (int)pvVar1;
  iVar2 = *param_2;
  *param_1 = iVar2;
  param_1[1] = iVar2 >> 0x1f;
  return 0;
}



/* ===== IVS_MmzFlush_Start @ 00015280 size=36 ===== */

undefined4 IVS_MmzFlush_Start(void)

{
  return 0;
}



/* ===== IVS_MmzFlush_End @ 000152a4 size=36 ===== */

undefined4 IVS_MmzFlush_End(void)

{
  return 0;
}



/* ===== IVS_SYS_MmzAlloc @ 000152c8 size=144 ===== */

undefined4 IVS_SYS_MmzAlloc(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0;
  local_c = RK_MPI_MMZ_Alloc(&local_10,param_3,0x11);
  if (local_c == 0) {
    iVar1 = RK_MPI_MB_Handle2PhysAddr(local_10);
    *param_1 = iVar1;
    param_1[1] = iVar1 >> 0x1f;
    uVar2 = RK_MPI_MB_Handle2VirAddr(local_10);
    *param_2 = uVar2;
  }
  return 0;
}



/* ===== IVS_SYS_MmzAlloc_Cached @ 00015358 size=144 ===== */

undefined4 IVS_SYS_MmzAlloc_Cached(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0;
  local_c = RK_MPI_MMZ_Alloc(&local_10,param_3,1);
  if (local_c == 0) {
    iVar1 = RK_MPI_MB_Handle2PhysAddr(local_10);
    *param_1 = iVar1;
    param_1[1] = iVar1 >> 0x1f;
    uVar2 = RK_MPI_MB_Handle2VirAddr(local_10);
    *param_2 = uVar2;
  }
  return 0;
}



/* ===== IVS_SYS_MmzFlush_Start @ 000153e8 size=152 ===== */

int IVS_SYS_MmzFlush_Start(undefined4 param_1)

{
  int iVar1;
  undefined8 local_20;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_c = RK_MPI_MB_VirAddr2Handle(param_1);
  local_10 = RK_MPI_MMZ_Handle2Fd(local_c);
  local_14 = RK_MPI_MMZ_GetSize(local_c);
  local_20 = 3;
  iVar1 = ioctl(local_10,0x40086200,&local_20);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== IVS_SYS_MmzFlush_End @ 00015480 size=152 ===== */

int IVS_SYS_MmzFlush_End(undefined4 param_1)

{
  int iVar1;
  undefined8 local_20;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_c = RK_MPI_MB_VirAddr2Handle(param_1);
  local_10 = RK_MPI_MMZ_Handle2Fd(local_c);
  local_14 = RK_MPI_MMZ_GetSize(local_c);
  local_20 = 7;
  iVar1 = ioctl(local_10,0x40086200,&local_20);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== IVS_SYS_MmzFree @ 00015518 size=56 ===== */

undefined4 IVS_SYS_MmzFree(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = RK_MPI_MB_VirAddr2Handle(param_1);
  RK_MPI_MMZ_Free(uVar1);
  return 0;
}



/* ===== FUN_00015550 @ 00015550 size=168 ===== */

ulonglong FUN_00015550(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}



/* ===== FUN_000155f8 @ 000155f8 size=32 ===== */

void FUN_000155f8(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00015550();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00015620 @ 00015620 size=196 ===== */

uint FUN_00015620(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool in_NG;
  bool bVar6;
  
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if (in_NG) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}



/* ===== FUN_000156f4 @ 000156f4 size=64 ===== */

void FUN_000156f4(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00015620();
    return;
  }
  raise(8);
  return;
}



/* ===== _fini @ 00015724 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00027000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00027004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00027008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002700c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Thresh @ 00027010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_Thresh(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00027014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00027018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002701c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 00027020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00027024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Free @ 00027028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Erode @ 0002702c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_Erode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__tls_get_addr @ 00027030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __tls_get_addr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Init @ 00027034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00027038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002703c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00027040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00027044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_CCL @ 00027048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_CCL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 0002704c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_GetSize @ 00027050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_GetSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_MagAndAng @ 00027054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_MagAndAng(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Dilate @ 00027058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_Dilate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2Fd @ 0002705c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Handle2Fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00027060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00027064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2PhysAddr @ 00027068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2PhysAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0002706c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00027070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Deinit @ 00027074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_Deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Sub @ 00027078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_Sub(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 0002707c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00027080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00027084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_GMM @ 00027088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_GMM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0002708c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00027090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_16BitTo8Bit @ 00027094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_16BitTo8Bit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00027098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_VirAddr2Handle @ 0002709c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_VirAddr2Handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 000270a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000270a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Add @ 000270a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_Add(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000270ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000270b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


