// rk_rve_sample_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010adc size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010b00 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002500c)();
  return;
}



/* ===== <EXTERNAL>::sqrt @ 00010b0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sqrt(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_sqrt_00025010)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::__errno_location @ 00010b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00025014)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00025018)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::usleep @ 00010b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002501c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00025020)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2Fd @ 00010b48 size=12 ===== */

void RK_MPI_MMZ_Handle2Fd(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Handle2Fd_00025024)();
  return;
}



/* ===== <EXTERNAL>::feof @ 00010b54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_00025028)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_GetSize @ 00010b60 size=12 ===== */

void RK_MPI_MMZ_GetSize(void)

{
  (*(code *)PTR_RK_MPI_MMZ_GetSize_0002502c)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010b78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00025034)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_DMA @ 00010b84 size=12 ===== */

void RK_MPI_IVE_DMA(void)

{
  (*(code *)PTR_RK_MPI_IVE_DMA_00025038)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00010b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002503c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Query @ 00010b9c size=12 ===== */

void RK_MPI_IVE_Query(void)

{
  (*(code *)PTR_RK_MPI_IVE_Query_00025040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_VirAddr2Handle @ 00010ba8 size=12 ===== */

void RK_MPI_MB_VirAddr2Handle(void)

{
  (*(code *)PTR_RK_MPI_MB_VirAddr2Handle_00025044)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00025048)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00010bc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002504c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc_Cached @ 00010bcc size=12 ===== */

void RK_MPI_SYS_MmzAlloc_Cached(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzAlloc_Cached_00025050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Free @ 00010bd8 size=12 ===== */

void RK_MPI_MMZ_Free(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Free_00025054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2PhysAddr @ 00010be4 size=12 ===== */

void RK_MPI_MB_Handle2PhysAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2PhysAddr_00025058)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010bf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002505c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Hist @ 00010bfc size=12 ===== */

void RK_MPI_IVE_Hist(void)

{
  (*(code *)PTR_RK_MPI_IVE_Hist_00025060)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_NCC @ 00010c08 size=12 ===== */

void RK_MPI_IVE_NCC(void)

{
  (*(code *)PTR_RK_MPI_IVE_NCC_00025064)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00010c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00025068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00010c20 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_0002506c)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00010c2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00025070)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010c38 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00025074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_STCandiCorner @ 00010c44 size=12 ===== */

void RK_MPI_IVE_STCandiCorner(void)

{
  (*(code *)PTR_RK_MPI_IVE_STCandiCorner_00025078)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00010c50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002507c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00025080)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_IVE_STCorner @ 00010c68 size=12 ===== */

void RK_MPI_IVE_STCorner(void)

{
  (*(code *)PTR_RK_MPI_IVE_STCorner_00025084)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010c74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00025088)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0002508c)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 00010c8c size=12 ===== */

void RK_MPI_MMZ_Alloc(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Alloc_00025090)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010c98 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00025094)();
  return;
}



/* ===== FUN_00010ca8 @ 00010ca8 size=152 ===== */

undefined4 FUN_00010ca8(int param_1,int param_2)

{
  signal(2,FUN_00010e58);
  signal(0xf,FUN_00010e58);
  DAT_000250bc = param_1;
  DAT_000250c0 = param_2;
  if (1 < param_1) {
    if (**(char **)(param_2 + 4) == '0') {
      puts("show histogram sample");
      FUN_000122cc();
      return 0;
    }
    if (**(char **)(param_2 + 4) == '1') {
      puts("show object tracking sample");
      FUN_00013b58();
      return 0;
    }
  }
  FUN_000122cc();
  return 0;
}



/* ===== entry @ 00010d40 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00025030)
            (DAT_00010d74,param_2,&stack0x00000004,DAT_00010d78,DAT_00010d70,param_1);
  return;
}



/* ===== FUN_00010d7c @ 00010d7c size=32 ===== */

void FUN_00010d7c(void)

{
  if (DAT_00010da0 == DAT_00010d9c) {
    return;
  }
  if (DAT_00010da4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010da4)();
  return;
}



/* ===== _FINI_0 @ 00010de0 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010e1c;
  if (*DAT_00010e1c != '\0') {
    return;
  }
  FUN_00010d7c();
  if (DAT_00010e20 != 0) {
    __deregister_frame_info(DAT_00010e24);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010e28 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010e4c != 0) {
    __register_frame_info(DAT_00010e54,DAT_00010e50);
  }
  if ((DAT_00010dd8 - DAT_00010dd4 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010ddc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010ddc)();
  return;
}



/* ===== FUN_00010e58 @ 00010e58 size=164 ===== */

void FUN_00010e58(int param_1)

{
  signal(2,(__sighandler_t)0x1);
  signal(0xf,(__sighandler_t)0x1);
  if (param_1 != 0xf && param_1 != 2) {
    return;
  }
  if (1 < DAT_000250bc) {
    if (**(char **)(DAT_000250c0 + 4) != '0') {
      if (**(char **)(DAT_000250c0 + 4) != '1') {
        return;
      }
      printf("SAMPLE_IVE_Object_Tracking_HandleSig");
      DAT_00025360 = 1;
      return;
    }
    printf("SAMPLE_IVE_TestHist_HandleSig");
  }
  FUN_00010f38();
  return;
}



/* ===== RK_MPI_SYS_Init @ 00010ee4 size=8 ===== */

undefined4 RK_MPI_SYS_Init(void)

{
  return 0;
}



/* ===== RK_MPI_SYS_Exit @ 00010eec size=8 ===== */

undefined4 RK_MPI_SYS_Exit(void)

{
  return 0;
}



/* ===== FUN_00010ef4 @ 00010ef4 size=40 ===== */

uint FUN_00010ef4(int param_1,int param_2)

{
  int extraout_r1;
  int extraout_r1_00;
  
  FUN_0001401c();
  FUN_0001401c(param_2 - extraout_r1,param_2);
  return extraout_r1_00 + param_1 & 0xffff;
}



/* ===== FUN_00010f1c @ 00010f1c size=28 ===== */

void FUN_00010f1c(void)

{
  if (DAT_000250c4 == '\0') {
    DAT_000250c4 = '\x01';
  }
  return;
}



/* ===== FUN_00010f38 @ 00010f38 size=24 ===== */

undefined4 FUN_00010f38(void)

{
  DAT_000250c4 = 0;
  return 0;
}



/* ===== FUN_00010f50 @ 00010f50 size=1060 ===== */

undefined4 FUN_00010f50(char *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  FILE *__stream;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  void *pvVar10;
  uint uVar11;
  int *piVar12;
  
  __stream = (FILE *)*param_3;
  if (__stream == (FILE *)0x0) {
    if (param_1 == (char *)0x0) {
      puts("filename is null");
      return 0xffffffff;
    }
    __stream = fopen64(param_1,"rb");
    if (__stream == (FILE *)0x0) {
      printf("failed to open(%s)\n",param_1);
      return 0xffffffff;
    }
  }
  iVar2 = feof(__stream);
  if (iVar2 != 0) {
    fseek(__stream,0,0);
  }
  uVar1 = *(ushort *)(param_2 + 0x40);
  uVar8 = (uint)uVar1;
  uVar7 = *(uint *)(param_2 + 0x3c);
  SYS_MmzFlush_Start(*(undefined4 *)(param_2 + 0x18));
  uVar11 = *(uint *)(param_2 + 0x44);
  switch(uVar11) {
  case 0:
    pvVar10 = *(void **)(param_2 + 0x18);
    if (uVar8 == 0) goto LAB_00010fd0;
    do {
      sVar3 = fread(pvVar10,uVar7 & 0xffff,1,__stream);
      uVar11 = uVar11 + 1;
      if (sVar3 != 1) {
        uVar4 = 0x77;
LAB_000110a8:
        printf("[%s]-%d: ","SAMPLE_COMM_IVE_ReadFile",uVar4);
        puts("Read file fail");
        return 0xffffffff;
      }
      pvVar10 = (void *)((int)pvVar10 + *(int *)(param_2 + 0x30));
    } while ((uVar11 & 0xffff) < uVar8);
    break;
  case 2:
    pvVar10 = *(void **)(param_2 + 0x18);
    if (uVar8 == 0) goto LAB_00010fd0;
    uVar11 = 0;
    do {
      sVar3 = fread(pvVar10,uVar7 & 0xffff,1,__stream);
      uVar11 = uVar11 + 1;
      if (sVar3 != 1) {
        uVar4 = 0x86;
        goto LAB_000110a8;
      }
      pvVar10 = (void *)((int)pvVar10 + *(int *)(param_2 + 0x30));
    } while ((uVar11 & 0xffff) < uVar8);
    uVar1 = uVar1 >> 1;
    pvVar10 = *(void **)(param_2 + 0x20);
    if (uVar1 != 0) {
      uVar9 = 0;
      do {
        sVar3 = fread(pvVar10,uVar7 & 0xffff,1,__stream);
        uVar9 = uVar9 + 1;
        if (sVar3 != 1) {
          uVar4 = 0x92;
          goto LAB_000110a8;
        }
        pvVar10 = (void *)((int)pvVar10 + *(int *)(param_2 + 0x34));
      } while (uVar9 < uVar1);
    }
    break;
  case 3:
    pvVar10 = *(void **)(param_2 + 0x18);
    if (uVar8 == 0) goto LAB_00010fd0;
    uVar11 = 0;
    do {
      sVar3 = fread(pvVar10,uVar7 & 0xffff,1,__stream);
      uVar11 = uVar11 + 1;
      if (sVar3 != 1) {
        uVar4 = 0xa0;
        goto LAB_000110a8;
      }
      pvVar10 = (void *)((int)pvVar10 + *(int *)(param_2 + 0x30));
    } while ((uVar11 & 0xffff) < uVar8);
    pvVar10 = *(void **)(param_2 + 0x20);
    uVar11 = 0;
    do {
      sVar3 = fread(pvVar10,uVar7 & 0xffff,1,__stream);
      uVar11 = uVar11 + 1;
      if (sVar3 != 1) {
        uVar4 = 0xac;
        goto LAB_000110a8;
      }
      pvVar10 = (void *)((int)pvVar10 + *(int *)(param_2 + 0x34));
    } while ((uVar11 & 0xffff) < uVar8);
    break;
  case 8:
  case 9:
    pvVar10 = *(void **)(param_2 + 0x18);
    if (uVar8 == 0) goto LAB_00010fd0;
    uVar11 = 0;
    do {
      sVar3 = fread(pvVar10,uVar7 & 0xffff,2,__stream);
      uVar11 = uVar11 + 1;
      if (sVar3 != 2) {
        uVar4 = 0xd9;
        goto LAB_000110a8;
      }
      pvVar10 = (void *)((int)pvVar10 + *(int *)(param_2 + 0x30) * 2);
    } while ((uVar11 & 0xffff) < uVar8);
    break;
  case 10:
    pvVar10 = *(void **)(param_2 + 0x18);
    if (uVar8 == 0) goto LAB_00010fd0;
    uVar11 = 0;
    do {
      sVar3 = fread(pvVar10,(uVar7 & 0xffff) * 3,1,__stream);
      uVar11 = uVar11 + 1;
      if (sVar3 != 1) {
        uVar4 = 0xb9;
        goto LAB_000110a8;
      }
      pvVar10 = (void *)((int)pvVar10 + *(int *)(param_2 + 0x30) * 3);
    } while ((uVar11 & 0xffff) < uVar8);
    break;
  case 0xb:
    piVar5 = (int *)(param_2 + 0x18);
    piVar12 = (int *)(param_2 + 0x30);
    do {
      piVar6 = piVar5 + 2;
      pvVar10 = (void *)*piVar5;
      if (uVar8 != 0) {
        uVar11 = 0;
        do {
          sVar3 = fread(pvVar10,uVar7 & 0xffff,1,__stream);
          uVar11 = uVar11 + 1;
          if (sVar3 != 1) {
            uVar4 = 0xc9;
            goto LAB_000110a8;
          }
          pvVar10 = (void *)((int)pvVar10 + *piVar12);
        } while ((uVar11 & 0xffff) < uVar8);
      }
      piVar12 = piVar12 + 1;
      piVar5 = piVar6;
    } while (piVar6 != (int *)(param_2 + 0x30));
    pvVar10 = *(void **)(param_2 + 0x18);
    goto LAB_00010fd0;
  }
  pvVar10 = *(void **)(param_2 + 0x18);
LAB_00010fd0:
  *param_3 = (int)__stream;
  SYS_MmzFlush_End(pvVar10);
  return 0;
}



/* ===== FUN_000113a4 @ 000113a4 size=860 ===== */

undefined4 FUN_000113a4(char *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  size_t sVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  FILE *__s;
  ushort uVar6;
  
  __s = (FILE *)*param_3;
  if (__s == (FILE *)0x0) {
    if (param_1 == (char *)0x0) {
      puts("filename is null");
      return 0xffffffff;
    }
    __s = fopen64(param_1,"wb");
    if (__s == (FILE *)0x0) {
      printf("failed to open(%s)\n",param_1);
      return 0xffffffff;
    }
  }
  uVar1 = *(ushort *)(param_2 + 0x40);
  uVar5 = *(uint *)(param_2 + 0x3c);
  SYS_MmzFlush_Start(*(undefined4 *)(param_2 + 0x18));
  switch(*(undefined4 *)(param_2 + 0x44)) {
  case 0:
  case 1:
    pvVar4 = *(void **)(param_2 + 0x18);
    if (uVar1 == 0) goto LAB_00011418;
    uVar6 = 0;
    do {
      sVar2 = fwrite(pvVar4,uVar5 & 0xffff,1,__s);
      uVar6 = uVar6 + 1;
      if (sVar2 != 1) {
        uVar3 = 0x110;
LAB_00011654:
        printf("[%s]-%d: ","SAMPLE_COMM_IVE_WriteFile",uVar3);
        puts("Write file fail");
        return 0xffffffff;
      }
      pvVar4 = (void *)((int)pvVar4 + *(int *)(param_2 + 0x30));
    } while (uVar6 < uVar1);
    break;
  case 2:
    pvVar4 = *(void **)(param_2 + 0x18);
    if (uVar1 == 0) goto LAB_00011418;
    uVar5 = uVar5 & 0xffff;
    uVar6 = 0;
    do {
      sVar2 = fwrite(pvVar4,1,uVar5,__s);
      uVar6 = uVar6 + 1;
      if (sVar2 != uVar5) {
        uVar3 = 0x11f;
        goto LAB_00011654;
      }
      pvVar4 = (void *)((int)pvVar4 + *(int *)(param_2 + 0x30));
    } while (uVar6 < uVar1);
    pvVar4 = *(void **)(param_2 + 0x20);
    if (uVar1 >> 1 != 0) {
      uVar6 = 0;
      do {
        sVar2 = fwrite(pvVar4,1,uVar5,__s);
        uVar6 = uVar6 + 1;
        if (sVar2 != uVar5) {
          uVar3 = 299;
          goto LAB_00011654;
        }
        pvVar4 = (void *)((int)pvVar4 + *(int *)(param_2 + 0x34));
      } while (uVar6 < uVar1 >> 1);
    }
    break;
  case 3:
    pvVar4 = *(void **)(param_2 + 0x18);
    if (uVar1 == 0) goto LAB_00011418;
    uVar5 = uVar5 & 0xffff;
    uVar6 = 0;
    do {
      sVar2 = fwrite(pvVar4,1,uVar5,__s);
      uVar6 = uVar6 + 1;
      if (sVar2 != uVar5) {
        uVar3 = 0x13a;
        goto LAB_00011654;
      }
      pvVar4 = (void *)((int)pvVar4 + *(int *)(param_2 + 0x30));
    } while (uVar6 < uVar1);
    pvVar4 = *(void **)(param_2 + 0x20);
    uVar6 = 0;
    do {
      sVar2 = fwrite(pvVar4,1,uVar5,__s);
      uVar6 = uVar6 + 1;
      if (sVar2 != uVar5) {
        uVar3 = 0x146;
        goto LAB_00011654;
      }
      pvVar4 = (void *)((int)pvVar4 + *(int *)(param_2 + 0x34));
    } while (uVar6 < uVar1);
    break;
  case 8:
  case 9:
    pvVar4 = *(void **)(param_2 + 0x18);
    if (uVar1 == 0) goto LAB_00011418;
    uVar6 = 0;
    do {
      sVar2 = fwrite(pvVar4,uVar5 & 0xffff,2,__s);
      uVar6 = uVar6 + 1;
      if (sVar2 != 2) {
        uVar3 = 0x156;
        goto LAB_00011654;
      }
      pvVar4 = (void *)((int)pvVar4 + *(int *)(param_2 + 0x30) * 2);
    } while (uVar6 < uVar1);
    break;
  case 0xd:
    pvVar4 = *(void **)(param_2 + 0x18);
    if (uVar1 == 0) goto LAB_00011418;
    uVar6 = 0;
    do {
      sVar2 = fwrite(pvVar4,4,uVar5 & 0xffff,__s);
      uVar6 = uVar6 + 1;
      if (sVar2 != (uVar5 & 0xffff)) {
        uVar3 = 0x166;
        goto LAB_00011654;
      }
      pvVar4 = (void *)((int)pvVar4 + *(int *)(param_2 + 0x30) * 4);
    } while (uVar6 < uVar1);
  }
  pvVar4 = *(void **)(param_2 + 0x18);
LAB_00011418:
  *param_3 = (int)__s;
  SYS_MmzFlush_End(pvVar4);
  return 0;
}



/* ===== FUN_00011a00 @ 00011a00 size=660 ===== */

int FUN_00011a00(undefined8 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 in_q9 [16];
  undefined1 auVar8 [16];
  
  if (param_1 == (undefined8 *)0x0) {
    printf("[%s]-%d: ","SAMPLE_COMM_IVE_CreateImage",0x1c8);
    puts("pstImg is null");
    return -1;
  }
  *(int *)((int)param_1 + 0x3c) = param_3;
  *(undefined4 *)((int)param_1 + 0x44) = param_2;
  *(int *)(param_1 + 8) = param_4;
  uVar3 = (-param_3 & 0xfU) + param_3 & 0xffff;
  *(uint *)(param_1 + 6) = uVar3;
  switch(param_2) {
  case 0:
  case 1:
    iVar2 = SYS_MmzAlloc(param_1,param_1 + 3,param_4 * uVar3);
    if (iVar2 != 0) {
      uVar4 = 0x1da;
      goto LAB_00011c54;
    }
    break;
  case 2:
    iVar2 = SYS_MmzAlloc(param_1,param_1 + 3,param_4 * uVar3 * 3 >> 1);
    if (iVar2 == 0) {
LAB_00011b78:
      *(int *)((int)param_1 + 0x34) = *(int *)(param_1 + 6);
      iVar2 = *(int *)(param_1 + 8) * *(int *)(param_1 + 6);
      uVar5 = VectorShiftRight(CONCAT44(iVar2,iVar2),0x20);
      uVar7 = VectorAdd(*param_1,uVar5,8);
      param_1[1] = uVar7;
      *(uint *)(param_1 + 4) = (uint)uVar5 + *(uint *)(param_1 + 3);
      *(uint *)((int)param_1 + 0x24) =
           (int)((ulonglong)uVar5 >> 0x20) + *(int *)((int)param_1 + 0x1c) +
           (uint)CARRY4((uint)uVar5,*(uint *)(param_1 + 3));
      return 0;
    }
    uVar4 = 0x1e5;
    goto LAB_00011c54;
  case 3:
    iVar2 = SYS_MmzAlloc(param_1,param_1 + 3,param_4 * uVar3 * 2);
    if (iVar2 == 0) goto LAB_00011b78;
    uVar4 = 500;
LAB_00011c54:
    printf("[%s]-%d: ","SAMPLE_COMM_IVE_CreateImage",uVar4);
    printf("Mmz Alloc fail,Error(%#x)\n",iVar2);
    return iVar2;
  default:
    break;
  case 8:
  case 9:
    iVar2 = SYS_MmzAlloc(param_1,param_1 + 3,param_4 * uVar3 * 2);
    if (iVar2 != 0) {
      uVar4 = 0x20d;
      goto LAB_00011c54;
    }
    break;
  case 10:
    iVar2 = SYS_MmzAlloc(param_1,param_1 + 3,param_4 * uVar3 * 3);
    if (iVar2 != 0) {
      uVar4 = 0x218;
      goto LAB_00011c54;
    }
    *(undefined4 *)((int)param_1 + 0x34) = *(undefined4 *)(param_1 + 6);
    VectorTableLookup(unaff_r6,0,2);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_1 + 6);
    VectorTableLookup(unaff_r7,0,2);
    VectorTableLookup(unaff_r6,param_1,2);
    VectorTableLookup(unaff_r7,param_1,2);
    auVar6._8_8_ = DAT_00011d00;
    auVar6._0_8_ = DAT_00011cf8;
    auVar8 = VectorAdd(in_q9,auVar6,8);
    auVar1._8_8_ = DAT_00011d00;
    auVar1._0_8_ = DAT_00011cf8;
    auVar6 = VectorAdd(*(undefined1 (*) [16])(param_1 + 2),auVar1,8);
    param_1[4] = auVar8._0_8_;
    param_1[5] = auVar8._8_8_;
    param_1[1] = auVar6._0_8_;
    param_1[2] = auVar6._8_8_;
    break;
  case 0xc:
  case 0xd:
    iVar2 = SYS_MmzAlloc(param_1,param_1 + 3,param_4 * uVar3 * 4);
    if (iVar2 != 0) {
      uVar4 = 0x22c;
      goto LAB_00011c54;
    }
    break;
  case 0xe:
  case 0xf:
    iVar2 = SYS_MmzAlloc(param_1,param_1 + 3,param_4 * uVar3 * 8);
    if (iVar2 != 0) {
      uVar4 = 0x239;
      goto LAB_00011c54;
    }
  }
  return 0;
}



/* ===== FUN_00011d08 @ 00011d08 size=136 ===== */

undefined4 FUN_00011d08(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
    printf("[%s]-%d: ","SAMPLE_COMM_IVE_CreateMemInfo",0x24e);
    puts("pstMemInfo is null");
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    iVar1 = SYS_MmzAlloc(param_1,param_1 + 8,param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      printf("[%s]-%d: ","SAMPLE_COMM_IVE_CreateMemInfo",0x255);
      printf("Mmz Alloc fail,Error(%#x)\n",iVar1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== SYS_MmzAlloc @ 00012108 size=108 ===== */

undefined4 SYS_MmzAlloc(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  iVar1 = RK_MPI_MMZ_Alloc(local_14,param_3,0x11);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = RK_MPI_MB_Handle2PhysAddr(local_14[0]);
  uVar3 = VectorShiftRight(CONCAT44(uVar2,uVar2),0x20);
  *param_1 = uVar3;
  uVar2 = RK_MPI_MB_Handle2VirAddr(local_14[0]);
  *param_2 = uVar2;
  return 0;
}



/* ===== SYS_MmzAlloc_Cached @ 00012174 size=92 ===== */

undefined4 SYS_MmzAlloc_Cached(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = RK_MPI_SYS_MmzAlloc_Cached(param_1,0,0,param_3);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = RK_MPI_MB_Handle2PhysAddr();
  uVar3 = VectorShiftRight(CONCAT44(uVar2,uVar2),0x20);
  *param_1 = uVar3;
  uVar2 = RK_MPI_MB_Handle2VirAddr(0);
  *param_2 = uVar2;
  RK_MPI_SYS_MmzFlushCache(0,0);
  return 0;
}



/* ===== SYS_MmzFlush_Start @ 000121d0 size=116 ===== */

int SYS_MmzFlush_Start(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = RK_MPI_MB_VirAddr2Handle();
  iVar2 = RK_MPI_MMZ_Handle2Fd();
  RK_MPI_MMZ_GetSize(uVar1);
  local_18 = 3;
  uStack_14 = 0;
  iVar2 = ioctl(iVar2,0x40086200,&local_18);
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = __errno_location();
  printf("sync start failed %d\n",*piVar3);
  return iVar2;
}



/* ===== SYS_MmzFlush_End @ 00012244 size=116 ===== */

int SYS_MmzFlush_End(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = RK_MPI_MB_VirAddr2Handle();
  iVar2 = RK_MPI_MMZ_Handle2Fd();
  RK_MPI_MMZ_GetSize(uVar1);
  local_18 = 7;
  uStack_14 = 0;
  iVar2 = ioctl(iVar2,0x40086200,&local_18);
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = __errno_location();
  printf("sync end failed %d\n",*piVar3);
  return iVar2;
}



/* ===== SYS_MmzFree @ 000122b8 size=20 ===== */

undefined4 SYS_MmzFree(void)

{
  RK_MPI_MB_VirAddr2Handle();
  RK_MPI_MMZ_Free();
  return 0;
}



/* ===== FUN_000122cc @ 000122cc size=840 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000122cc(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 local_25;
  undefined4 local_24 [2];
  
  memset(&DAT_000250c8,0,0x68);
  FUN_00010f1c();
  memset(&DAT_000250c8,0,0x68);
  uVar3 = FUN_00011a00(&DAT_000250c8,0,0x10);
  iVar1 = (int)uVar3;
  if (iVar1 != 0) {
    printf("[%s]-%d: ","SAMPLE_IVE_TestHist_Init",0x2c);
    printf("Error(%#x),Create src1 image failed!\n",iVar1);
LAB_000124e8:
    if (DAT_000250e0 != (void *)0x0 || DAT_000250e4 != 0) {
      SYS_MmzFree();
      _DAT_000250e0 = 0;
    }
    if (DAT_00025120 != (int *)0x0 || DAT_00025124 != 0) {
      SYS_MmzFree();
      _DAT_00025120 = 0;
    }
    printf("[%s]-%d: ","SAMPLE_IVE_TestHist",0x7b);
    printf("Error(%#x),SAMPLE_IVE_TestHist_Init failed!\n",iVar1);
    FUN_00010f38();
    return;
  }
  printf("stSrc, vir: %llx, phy: %llx\n",(int)((ulonglong)uVar3 >> 0x20),DAT_000250e0,DAT_000250e4,
         DAT_000250c8,DAT_000250cc);
  memset(DAT_000250e0,0,0x100);
  iVar1 = FUN_00011d08(&DAT_00025118,0x400);
  if (iVar1 != 0) {
    printf("[%s]-%d: ","SAMPLE_IVE_TestHist_Init",0x34);
    printf("Error(%#x),Create hist mem info failed!\n",iVar1);
    goto LAB_000124e8;
  }
  local_25 = 0;
  iVar1 = RK_MPI_IVE_Hist(local_24,&DAT_000250c8,&DAT_00025118,1);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_IVE_Query(local_24[0],&local_25,1);
    while (iVar1 == 0x41) {
      usleep(100);
      iVar1 = RK_MPI_IVE_Query(local_24[0],&local_25,1);
    }
    if (iVar1 != 0) {
      printf("[%s]-%d: ","SAMPLE_IVE_TestHistProc",0x58);
      printf("Error(%#x),IVE_Query failed!\n",iVar1);
      goto LAB_00012488;
    }
    piVar2 = DAT_00025120;
    if (*DAT_00025120 != DAT_00025108 * DAT_00025104) {
      printf("[%s]-%d: ","SAMPLE_IVE_TestHistProc",0x60);
      printf("Test hist error,pu32Hist[0] = %d\n",*piVar2);
      iVar1 = 1;
      do {
        piVar2 = piVar2 + 1;
        if (*piVar2 != 0) {
          printf("[%s]-%d: ","SAMPLE_IVE_TestHistProc",100);
          printf("Test mem error, pu32Hist[%d] = %d\n",iVar1,*piVar2);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x100);
      goto LAB_00012488;
    }
    printf("[%s]-%d: ","SAMPLE_IVE_TestHistProc",0x68);
    printf("Test HIST, pu32Hist[0] = %d\n",*piVar2);
    printf("[%s]-%d: ","SAMPLE_IVE_TestHist",0x7f);
    puts("Process success!");
    if (DAT_000250e0 != (void *)0x0 || DAT_000250e4 != 0) goto LAB_0001257c;
LAB_00012494:
    if (DAT_00025120 == (int *)0x0 && DAT_00025124 == 0) goto LAB_000124a0;
  }
  else {
    printf("[%s]-%d: ","SAMPLE_IVE_TestHistProc",0x50);
    printf("Error(%#x),IVE_Hist failed!\n",iVar1);
LAB_00012488:
    if (DAT_000250e0 == (void *)0x0 && DAT_000250e4 == 0) goto LAB_00012494;
LAB_0001257c:
    SYS_MmzFree();
    _DAT_000250e0 = 0;
    if (DAT_00025120 == (int *)0x0 && DAT_00025124 == 0) goto LAB_000124a0;
  }
  SYS_MmzFree();
LAB_000124a0:
  memset(&DAT_000250c8,0,0x68);
  FUN_00010f38();
  return;
}



/* ===== FUN_00012618 @ 00012618 size=300 ===== */

undefined4 FUN_00012618(int param_1)

{
  if (*(int *)(param_1 + 0x1d0) == 0 && *(int *)(param_1 + 0x1d4) == 0) {
    if (*(int *)(param_1 + 0x18) != 0 || *(int *)(param_1 + 0x1c) != 0) goto LAB_000126a8;
LAB_0001263c:
    if (*(int *)(param_1 + 0x68) != 0 || *(int *)(param_1 + 0x6c) != 0) goto LAB_000126c0;
LAB_00012648:
    if (*(int *)(param_1 + 0x150) != 0 || *(int *)(param_1 + 0x154) != 0) goto LAB_000126dc;
LAB_00012658:
    if (*(int *)(param_1 + 0x168) != 0 || *(int *)(param_1 + 0x16c) != 0) goto LAB_000126f8;
LAB_00012668:
    if (*(int *)(param_1 + 0x180) != 0 || *(int *)(param_1 + 0x184) != 0) {
LAB_00012714:
      SYS_MmzFree();
      *(undefined8 *)(param_1 + 0x180) = 0;
      if (*(int *)(param_1 + 0x198) == 0 && *(int *)(param_1 + 0x19c) == 0) {
        return 0;
      }
      goto LAB_00012730;
    }
  }
  else {
    SYS_MmzFree();
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) goto LAB_0001263c;
LAB_000126a8:
    SYS_MmzFree();
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0x6c) == 0) goto LAB_00012648;
LAB_000126c0:
    SYS_MmzFree();
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x150) == 0 && *(int *)(param_1 + 0x154) == 0) goto LAB_00012658;
LAB_000126dc:
    SYS_MmzFree();
    *(undefined8 *)(param_1 + 0x150) = 0;
    if (*(int *)(param_1 + 0x168) == 0 && *(int *)(param_1 + 0x16c) == 0) goto LAB_00012668;
LAB_000126f8:
    SYS_MmzFree();
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (*(int *)(param_1 + 0x180) != 0 || *(int *)(param_1 + 0x184) != 0) goto LAB_00012714;
  }
  if (*(int *)(param_1 + 0x198) == 0 && *(int *)(param_1 + 0x19c) == 0) {
    return 0;
  }
LAB_00012730:
  SYS_MmzFree();
  *(undefined8 *)(param_1 + 0x198) = 0;
  return 0;
}



/* ===== FUN_00012744 @ 00012744 size=1880 ===== */

undefined4 FUN_00012744(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ushort uVar6;
  float fVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  uint uVar20;
  ushort *puVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined *puVar27;
  int iVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined1 uVar31;
  double *pdVar32;
  longlong lVar34;
  double __x;
  double __x_00;
  float fVar35;
  float fVar36;
  float fVar37;
  double in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined *local_6e0;
  undefined4 local_6dc;
  uint local_6d4;
  int local_6d0;
  uint local_6cc;
  uint local_6c8;
  ushort *local_6c4;
  int local_6c0;
  uint local_6bc;
  uint local_6b8;
  uint local_6b4;
  ushort *local_6b0;
  int local_6ac;
  undefined2 local_6a0;
  undefined2 uStack_69e;
  undefined2 uStack_69c;
  undefined2 uStack_69a;
  undefined1 auStack_694 [4];
  double local_690 [200];
  undefined2 *puVar33;
  
  puVar27 = &DAT_00025130;
  ppuVar30 = &local_6e0;
  ppuVar29 = &local_6e0;
  memset(local_690,0,0x640);
  local_6e0 = (undefined *)0x1;
  iVar13 = RK_MPI_IVE_STCandiCorner(auStack_694,&DAT_000252e8,&DAT_000252a8,&DAT_00025338);
  if (iVar13 == -1) {
    printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Corner",0xae);
    printf("failed to run RK_MPI_IVE_STCandiCorner");
LAB_00012b68:
    FUN_00012618(&DAT_00025130);
  }
  else {
    local_6e0 = &DAT_00025340;
    local_6dc = 1;
    iVar13 = RK_MPI_IVE_STCorner(auStack_694,&DAT_000252e8,&DAT_000252a8,&DAT_00025278);
    if (iVar13 == -1) {
      printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Corner",0xb5);
      printf("failed to run RK_MPI_IVE_STCorner");
      goto LAB_00012b68;
    }
    if (iVar13 != 0) goto LAB_00012b68;
  }
  local_6e0 = (undefined *)0x1;
  local_6b0 = DAT_00025280;
  iVar13 = RK_MPI_IVE_STCandiCorner(auStack_694,DAT_00012b88 + -0x1b8,DAT_00012b88 + -0x90);
  if (iVar13 == -1) {
    printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Corner",0xae);
    printf("failed to run RK_MPI_IVE_STCandiCorner");
  }
  else {
    local_6dc = 1;
    local_6e0 = DAT_00012b8c;
    iVar13 = RK_MPI_IVE_STCorner(auStack_694,DAT_00012b8c + -0x1c0,DAT_00012b8c + -0x98,
                                 DAT_00012b8c + -0xb0);
    if (iVar13 == -1) {
      printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Corner",0xb5);
      printf("failed to run RK_MPI_IVE_STCorner");
    }
    else if (iVar13 == 0) goto LAB_00012818;
  }
  FUN_00012618(&DAT_00025130);
LAB_00012818:
  puVar21 = local_6b0;
  puVar8 = DAT_00025298;
  fVar37 = DAT_00012b78;
  printf("tracking obj corner num: %d\n",(uint)*local_6b0);
  printf("current frame corner num: %d\n",(uint)*puVar8);
  fVar7 = DAT_00012b7c;
  uVar15 = (uint)*puVar21;
  local_6cc = 0;
  local_6c8 = 0;
  local_6ac = 0;
  local_6d4 = 0;
  if (uVar15 == 0) goto LAB_00012a68;
  do {
    local_6b4 = 0;
    local_6c4 = local_6b0;
    local_6c0 = 0;
    do {
      iVar13 = DAT_00025318 * ((uint)local_6c4[2] - (DAT_00025210 >> 1)) +
               ((uint)local_6c4[1] - (DAT_0002520c >> 1));
      local_6b8 = (uint)local_6c4[2];
      local_6bc = (uint)local_6c4[1];
      DAT_000251e8 = iVar13 + DAT_00025300;
      DAT_000251d0 = iVar13 + DAT_000252e8;
      DAT_00025200 = DAT_00025318;
      DAT_000251ec = DAT_000251e8 >> 0x1f;
      DAT_000251d4 = DAT_000251d0 >> 0x1f;
      if (*puVar8 == 0) {
        local_6d4 = (uint)*puVar8;
      }
      else {
        iVar13 = 0;
        local_6d0 = 0;
        puVar21 = puVar8;
        fVar36 = DAT_00012b80;
        do {
          uVar5 = puVar21[2];
          uVar6 = puVar21[1];
          local_6e0 = (undefined *)0x1;
          iVar16 = DAT_000251b0 * ((uint)uVar5 - (DAT_00025260 >> 1)) +
                   ((uint)uVar6 - (DAT_0002525c >> 1));
          DAT_00025250 = DAT_000251b0;
          iVar28 = iVar16 + DAT_00025198;
          iVar16 = iVar16 + DAT_00025180;
          DAT_00025238 = VectorShiftRight(CONCAT44(iVar28,iVar28),0x20);
          DAT_00025220 = VectorShiftRight(CONCAT44(iVar16,iVar16),0x20);
          local_6d4 = RK_MPI_IVE_NCC(auStack_694,DAT_00012b90 + -0xf0);
          puVar9 = DAT_000252c8;
          puVar24 = DAT_000252c8 + 2;
          in_d16 = (double)FUN_00014484(*DAT_000252c8,DAT_000252c8[1]);
          __x = (double)FUN_00014484(*puVar24,puVar9[3]);
          if (__x < 0.0) {
            sqrt(__x);
          }
          __x_00 = (double)FUN_00014484(puVar9[4],puVar9[5]);
          if (__x_00 < 0.0) {
            sqrt(__x_00);
          }
          in_d16 = in_d16 / (SQRT(__x) * SQRT(__x_00));
          fVar35 = (float)in_d16;
          if ((fVar36 < fVar35) && (fVar36 = fVar35, fVar37 < fVar35)) {
            local_6cc = (uint)uVar5;
            local_6c8 = (uint)uVar6;
            local_6d0 = 1;
            if (fVar7 < fVar35) {
              uVar15 = (uint)*local_6b0;
              goto LAB_00012ac4;
            }
          }
          iVar13 = iVar13 + 1;
          puVar21 = puVar21 + 2;
        } while (iVar13 < (int)(uint)*puVar8);
        uVar15 = (uint)*local_6b0;
        if (local_6d0 != 0) {
LAB_00012ac4:
          uStack_69e = (short)local_6b8;
          uStack_69a = (short)local_6cc;
          uStack_69c = (short)local_6c8;
          local_6a0 = (short)local_6bc;
          in_d16 = (double)CONCAT26((short)local_6cc,
                                    CONCAT24((short)local_6c8,
                                             CONCAT22((short)local_6b8,(short)local_6bc)));
          local_690[local_6b4] = in_d16;
          local_6b4 = (int)(short)((short)local_6b4 + 1);
        }
      }
      local_6c0 = local_6c0 + 1;
      local_6c4 = local_6c4 + 2;
    } while (local_6c0 < (int)uVar15);
    if (1 < (int)local_6b4) {
      uVar15 = local_6b4;
      if ((int)local_6b4 < 1) {
        uVar15 = 1;
      }
      if ((int)local_6b4 < 8) {
        uVar14 = 0;
        uVar20 = uVar14;
        uVar22 = uVar14;
        uVar23 = uVar14;
        uVar25 = uVar14;
        goto LAB_00012c3c;
      }
      auVar39 = (undefined1  [16])0x0;
      pdVar18 = local_690;
      pdVar17 = pdVar18 + (uVar15 & 0xfffffff8);
      auVar41 = auVar39;
      auVar43 = auVar39;
      auVar45 = auVar39;
      do {
        pdVar19 = pdVar18 + 8;
        puVar1 = (undefined2 *)0x370;
        puVar2 = (undefined2 *)0x380;
        puVar3 = (undefined2 *)0x390;
        puVar4 = (undefined2 *)0x3a0;
        lVar34 = 4;
        pdVar32 = pdVar18;
        while( true ) {
          *puVar1 = *(undefined2 *)pdVar32;
          puVar33 = (undefined2 *)((int)pdVar32 + 2);
          *puVar2 = *puVar33;
          puVar33 = puVar33 + 1;
          *puVar3 = *puVar33;
          puVar33 = puVar33 + 1;
          *puVar4 = *puVar33;
          pdVar32 = (double *)(puVar33 + 1);
          lVar34 = lVar34 + -1;
          if (lVar34 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        pdVar32 = pdVar18 + 4;
        uVar31 = pdVar17 == pdVar19;
        puVar1 = (undefined2 *)0x378;
        puVar2 = (undefined2 *)0x388;
        puVar3 = (undefined2 *)0x398;
        puVar4 = (undefined2 *)0x3a8;
        lVar34 = 4;
        pdVar18 = pdVar19;
        while( true ) {
          *puVar1 = *(undefined2 *)pdVar32;
          puVar33 = (undefined2 *)((int)pdVar32 + 2);
          *puVar2 = *puVar33;
          puVar33 = puVar33 + 1;
          *puVar3 = *puVar33;
          puVar33 = puVar33 + 1;
          *puVar4 = *puVar33;
          pdVar32 = (double *)(puVar33 + 1);
          lVar34 = lVar34 + -1;
          if (lVar34 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        auVar41 = VectorAdd(auVar41,in_d16,2,0);
        auVar43 = VectorAdd(auVar43,in_d18,2,0);
        auVar45 = VectorAdd(auVar45,in_d20,2,0);
        auVar39 = VectorAdd(auVar39,in_d22,2,0);
        auVar41 = VectorAdd(auVar41,in_d17,2,0);
        auVar43 = VectorAdd(auVar43,in_d19,2,0);
        auVar45 = VectorAdd(auVar45,in_d21,2,0);
        auVar39 = VectorAdd(auVar39,in_d23,2,0);
      } while (!(bool)uVar31);
      uVar38 = VectorAdd(auVar39._0_8_,auVar39._8_8_,4);
      uVar44 = VectorAdd(auVar45._0_8_,auVar45._8_8_,4);
      uVar42 = VectorAdd(auVar43._0_8_,auVar43._8_8_,4);
      uVar40 = VectorAdd(auVar41._0_8_,auVar41._8_8_,4);
      uVar38 = VectorPairwiseAdd(uVar38,uVar38,4);
      uVar44 = VectorPairwiseAdd(uVar44,uVar44,4);
      uVar42 = VectorPairwiseAdd(uVar42,uVar42,4);
      uVar40 = VectorPairwiseAdd(uVar40,uVar40,4);
      uVar22 = (uint)uVar38;
      uVar14 = (uint)uVar44;
      uVar25 = (uint)uVar42;
      uVar23 = (uint)uVar40;
      uVar20 = uVar15 & 0xfffffff8;
      ppuVar30 = ppuVar29;
      if ((uVar15 & 0xfffffff8) != uVar15) {
LAB_00012c3c:
        iVar13 = uVar20 * 8;
        iVar16 = *(int *)((int)ppuVar30 + 0x2c);
        uVar23 = uVar23 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x50);
        uVar25 = uVar25 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x52);
        uVar14 = uVar14 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x54);
        uVar22 = uVar22 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x56);
        if ((int)(uVar20 + 1) < iVar16) {
          iVar13 = (uVar20 + 1) * 8;
          uVar23 = uVar23 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x50);
          uVar25 = uVar25 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x52);
          uVar14 = uVar14 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x54);
          uVar22 = uVar22 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x56);
          if ((int)(uVar20 + 2) < iVar16) {
            iVar13 = (uVar20 + 2) * 8;
            uVar23 = uVar23 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x50);
            uVar25 = uVar25 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x52);
            uVar14 = uVar14 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x54);
            uVar22 = uVar22 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x56);
            if ((int)(uVar20 + 3) < iVar16) {
              iVar13 = (uVar20 + 3) * 8;
              uVar23 = uVar23 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x50);
              uVar25 = uVar25 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x52);
              uVar14 = uVar14 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x54);
              uVar22 = uVar22 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x56);
              if ((int)(uVar20 + 4) < iVar16) {
                iVar13 = (uVar20 + 4) * 8;
                uVar23 = uVar23 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x50);
                uVar25 = uVar25 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x52);
                uVar14 = uVar14 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x54);
                uVar22 = uVar22 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x56);
                if ((int)(uVar20 + 5) < iVar16) {
                  iVar13 = (uVar20 + 5) * 8;
                  uVar23 = uVar23 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x50);
                  uVar25 = uVar25 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x52);
                  uVar14 = uVar14 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x54);
                  uVar22 = uVar22 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x56);
                  if ((int)(uVar20 + 6) < iVar16) {
                    iVar13 = (uVar20 + 6) * 8;
                    uVar23 = uVar23 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x50);
                    uVar25 = uVar25 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x52);
                    uVar14 = uVar14 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x54);
                    uVar22 = uVar22 + (int)*(short *)((int)ppuVar30 + iVar13 + 0x56);
                  }
                }
              }
            }
          }
        }
      }
      uVar26 = *(undefined4 *)((int)ppuVar30 + 0x2c);
      sVar10 = FUN_0001403c(uVar14,uVar26);
      sVar11 = FUN_0001403c(uVar23,uVar26);
      sVar12 = FUN_0001403c(uVar22,uVar26);
      iVar16 = (int)(short)(sVar10 - sVar11);
      sVar10 = FUN_0001403c(uVar25,uVar26);
      *(int *)((int)ppuVar30 + 0x38) = iVar16;
      uVar38 = *(undefined8 *)(puVar27 + 0x1a8);
      uVar26 = *(undefined4 *)((int)ppuVar30 + 0x34);
      iVar13 = (int)(short)(sVar12 - sVar10);
      *(int *)((int)ppuVar30 + 0x3c) = iVar13;
      uVar38 = VectorAdd(uVar38,*(undefined8 *)((int)ppuVar30 + 0x38),4);
      *(undefined8 *)(puVar27 + 0x1a8) = uVar38;
LAB_00012a84:
      printf("search times: %d, match_pattern_num: %d\n",uVar26,
             *(undefined4 *)((int)ppuVar30 + 0x2c));
      printf("motion vector: %d, %d\n",iVar16,iVar13);
      return *(undefined4 *)((int)ppuVar30 + 0xc);
    }
    while( true ) {
      if (local_6ac == 3) {
        iVar13 = 0;
        iVar16 = 0;
        uVar26 = 3;
        local_6ac = 3;
        ppuVar30 = &local_6e0;
        goto LAB_00012a84;
      }
      local_6ac = local_6ac + 1;
      fVar37 = fVar37 - DAT_00012b84;
      if (uVar15 != 0) break;
LAB_00012a68:
      local_6b4 = uVar15;
    }
  } while( true );
}



/* ===== FUN_00012eb8 @ 00012eb8 size=684 ===== */

int FUN_00012eb8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00011a00(param_1 + 0x1b8,0,*(undefined4 *)(param_1 + 0x1b0),
                       *(undefined4 *)(param_1 + 0x1b4));
  if (iVar1 == -1) {
    printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Init",0x3d);
    printf("failed to create image");
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00011a00(param_1,0,param_2,param_3);
    if (iVar1 == -1) {
      printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Init",0x40);
      printf("failed to create image");
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_00011a00(param_1 + 0x50,0,*(undefined4 *)(param_1 + 0x1b0),
                           *(undefined4 *)(param_1 + 0x1b4));
      if (iVar1 == -1) {
        printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Init",0x43);
        printf("failed to create image");
        iVar1 = -1;
      }
      else {
        *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_1 + 0x140);
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x140);
        *(undefined8 *)(param_1 + 300) = *(undefined8 *)(param_1 + 0x140);
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x140);
        *(int *)(param_1 + 0x188) = (*(int *)(param_1 + 0x1b4) * *(int *)(param_1 + 0x1b0) + 8) * 2;
        iVar1 = FUN_00011d08(param_1 + 0x178);
        if (iVar1 == -1) {
          printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Init",0x50);
          printf("failed to create image");
          iVar1 = -1;
        }
        else {
          *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x1b4) * *(int *)(param_1 + 0x1b0) + 0x1900
          ;
          iVar1 = FUN_00011d08(param_1 + 0x210);
          if (iVar1 == -1) {
            printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Init",0x54);
            printf("failed to create image");
            iVar1 = -1;
          }
          else {
            *(undefined4 *)(param_1 + 0x158) = 0x9c6;
            iVar1 = FUN_00011d08(param_1 + 0x148,0x9c6);
            if (iVar1 == -1) {
              printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Init",0x58);
              printf("failed to create image");
              iVar1 = -1;
            }
            else {
              *(undefined4 *)(param_1 + 0x170) = 0x9c6;
              iVar1 = FUN_00011d08(param_1 + 0x160,0x9c6);
              if (iVar1 == -1) {
                printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Init",0x5c);
                printf("failed to create image");
                iVar1 = -1;
              }
              else {
                *(undefined4 *)(param_1 + 0x1a0) = 0x20;
                iVar1 = FUN_00011d08(param_1 + 400);
                if (iVar1 == -1) {
                  printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Init",0x61);
                  printf("failed to create image");
                }
                else {
                  *(undefined1 *)(param_1 + 0x208) = 0x19;
                  *(undefined4 *)(param_1 + 0x228) = 0xa0014;
                  if (iVar1 == 0) {
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00012618(param_1);
  return iVar1;
}



/* ===== FUN_00013164 @ 00013164 size=192 ===== */

undefined4
FUN_00013164(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            size_t param_7,int param_8)

{
  size_t sVar1;
  int iVar2;
  void *__s;
  
  if (0 < param_8) {
    __s = (void *)(param_2 + param_3 * param_6 + param_5);
    iVar2 = 0;
    do {
      while (0 < (int)param_7) {
        if ((iVar2 != 0) && (param_8 + -1 != iVar2)) {
          sVar1 = 0;
          do {
            while ((sVar1 == 0 || (sVar1 == param_7 - 1))) {
              *(undefined1 *)((int)__s + sVar1) = 0xff;
              sVar1 = sVar1 + 1;
              if (param_7 == sVar1) goto LAB_000131e8;
            }
            sVar1 = sVar1 + 1;
          } while (param_7 != sVar1);
          break;
        }
        iVar2 = iVar2 + 1;
        memset(__s,0xff,param_7);
        __s = (void *)((int)__s + param_3);
        if (param_8 == iVar2) {
          return 0;
        }
      }
LAB_000131e8:
      iVar2 = iVar2 + 1;
      __s = (void *)((int)__s + param_3);
    } while (param_8 != iVar2);
  }
  return 0;
}



/* ===== FUN_000132b0 @ 000132b0 size=76 ===== */

undefined4 FUN_000132b0(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2[6];
  iVar1 = *param_2;
  iVar2 = param_2[0xc] * (param_4 - ((uint)param_1[0x10] >> 1)) +
          (param_3 - ((uint)param_1[0xf] >> 1));
  param_1[0xc] = param_2[0xc];
  iVar3 = iVar2 + iVar3;
  iVar2 = iVar2 + iVar1;
  param_1[6] = iVar3;
  param_1[7] = iVar3 >> 0x1f;
  *param_1 = iVar2;
  param_1[1] = iVar2 >> 0x1f;
  return 0;
}



/* ===== FUN_000132fc @ 000132fc size=220 ===== */

int FUN_000132fc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_24 [8];
  
  iVar1 = RK_MPI_IVE_STCandiCorner(auStack_24,param_2,param_1 + 0x178,param_1 + 0x208,1);
  if (iVar1 == -1) {
    printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Corner",0xae);
    printf("failed to run RK_MPI_IVE_STCandiCorner");
    iVar1 = -1;
  }
  else {
    iVar1 = RK_MPI_IVE_STCorner(auStack_24,param_2,param_1 + 0x178,param_3,param_1 + 0x210,1);
    if (iVar1 == -1) {
      printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Corner",0xb5);
      printf("failed to run RK_MPI_IVE_STCorner");
    }
    else if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_00012618(param_1);
  return iVar1;
}



/* ===== FUN_000133d8 @ 000133d8 size=1900 ===== */

undefined4 FUN_000133d8(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ushort uVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  double *pdVar16;
  double *pdVar17;
  undefined4 *puVar18;
  double *pdVar19;
  uint uVar20;
  int iVar21;
  ushort *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  ushort *puVar27;
  int *piVar28;
  int *piVar29;
  undefined1 uVar30;
  double *pdVar31;
  longlong lVar33;
  double __x;
  double __x_00;
  float fVar34;
  float fVar35;
  float fVar36;
  double in_d16;
  undefined8 uVar37;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined8 uVar43;
  undefined1 auVar44 [16];
  int local_6e8;
  undefined4 local_6e4;
  int local_6e0;
  int local_6dc;
  int local_6d8;
  uint local_6d4;
  int local_6d0;
  uint local_6cc;
  uint local_6c8;
  ushort *local_6c4;
  int local_6c0;
  uint local_6bc;
  uint local_6b8;
  uint local_6b4;
  ushort *local_6b0;
  int local_6ac;
  undefined2 local_6a0;
  undefined2 uStack_69e;
  undefined2 uStack_69c;
  undefined2 uStack_69a;
  undefined1 auStack_694 [4];
  double local_690 [200];
  undefined2 *puVar32;
  
  iVar21 = param_1 + 0x178;
  piVar29 = &local_6e8;
  piVar28 = &local_6e8;
  memset(local_690,0,0x640);
  local_6e8 = 1;
  iVar12 = RK_MPI_IVE_STCandiCorner(auStack_694,param_1 + 0x1b8,iVar21,param_1 + 0x208);
  if (iVar12 == -1) {
    printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Corner",0xae);
    printf("failed to run RK_MPI_IVE_STCandiCorner");
LAB_00013818:
    FUN_00012618(param_1);
  }
  else {
    local_6e8 = param_1 + 0x210;
    local_6e4 = 1;
    iVar12 = RK_MPI_IVE_STCorner(auStack_694,param_1 + 0x1b8,iVar21,param_1 + 0x148);
    if (iVar12 == -1) {
      printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Corner",0xb5);
      printf("failed to run RK_MPI_IVE_STCorner");
      goto LAB_00013818;
    }
    if (iVar12 != 0) goto LAB_00013818;
  }
  local_6e8 = 1;
  local_6b0 = *(ushort **)(param_1 + 0x150);
  iVar12 = RK_MPI_IVE_STCandiCorner(auStack_694,param_1 + 0x50,iVar21,param_1 + 0x208);
  if (iVar12 == -1) {
    printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Corner",0xae,param_1 + 0x160);
    printf("failed to run RK_MPI_IVE_STCandiCorner");
  }
  else {
    local_6e8 = param_1 + 0x210;
    local_6e4 = 1;
    iVar12 = RK_MPI_IVE_STCorner(auStack_694,param_1 + 0x50,iVar21);
    if (iVar12 == -1) {
      printf("[%s]-%d: ","SAMPLE_IVE_Object_Tracking_Corner",0xb5);
      printf("failed to run RK_MPI_IVE_STCorner");
    }
    else if (iVar12 == 0) goto LAB_000134bc;
  }
  FUN_00012618(param_1);
LAB_000134bc:
  puVar22 = local_6b0;
  fVar36 = DAT_00013824;
  puVar27 = *(ushort **)(param_1 + 0x168);
  printf("tracking obj corner num: %d\n",(uint)*local_6b0);
  local_6c8 = 0;
  printf("current frame corner num: %d\n",(uint)*puVar27);
  fVar8 = DAT_0001382c;
  fVar7 = DAT_00013828;
  uVar14 = (uint)*puVar22;
  local_6cc = 0;
  local_6ac = 0;
  local_6d4 = 0;
  if (uVar14 == 0) goto LAB_0001371c;
  do {
    local_6b4 = 0;
    local_6c0 = 0;
    local_6d8 = param_1 + 0xa0;
    local_6c4 = local_6b0;
    do {
      uVar5 = *puVar27;
      iVar12 = *(int *)(param_1 + 0x1e8) * ((uint)local_6c4[2] - (*(uint *)(param_1 + 0xe0) >> 1)) +
               ((uint)local_6c4[1] - (*(uint *)(param_1 + 0xdc) >> 1));
      local_6b8 = (uint)local_6c4[2];
      local_6bc = (uint)local_6c4[1];
      iVar21 = iVar12 + *(int *)(param_1 + 0x1d0);
      iVar12 = iVar12 + *(int *)(param_1 + 0x1b8);
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0x1e8);
      *(int *)(param_1 + 0xb8) = iVar21;
      *(int *)(param_1 + 0xbc) = iVar21 >> 0x1f;
      *(int *)(param_1 + 0xa0) = iVar12;
      *(int *)(param_1 + 0xa4) = iVar12 >> 0x1f;
      if (uVar5 == 0) {
        local_6d4 = (uint)uVar5;
      }
      else {
        local_6e0 = param_1 + 0xf0;
        iVar12 = 0;
        local_6d0 = 0;
        local_6dc = param_1 + 400;
        puVar22 = puVar27;
        fVar35 = DAT_00013830;
        do {
          uVar5 = puVar22[2];
          uVar6 = puVar22[1];
          local_6e8 = 1;
          iVar21 = *(int *)(param_1 + 0x80) * ((uint)uVar5 - (*(uint *)(param_1 + 0x130) >> 1)) +
                   ((uint)uVar6 - (*(uint *)(param_1 + 300) >> 1));
          *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x80);
          iVar15 = iVar21 + *(int *)(param_1 + 0x68);
          iVar21 = iVar21 + *(int *)(param_1 + 0x50);
          *(int *)(param_1 + 0xf0) = iVar21;
          *(int *)(param_1 + 0xf4) = iVar21 >> 0x1f;
          uVar37 = VectorShiftRight(CONCAT44(iVar15,iVar15),0x20);
          *(undefined8 *)(param_1 + 0x108) = uVar37;
          local_6d4 = RK_MPI_IVE_NCC(auStack_694,local_6d8,local_6e0,local_6dc);
          puVar18 = *(undefined4 **)(param_1 + 0x198);
          in_d16 = (double)FUN_00014484(*puVar18,puVar18[1]);
          __x = (double)FUN_00014484(puVar18[2],puVar18[3]);
          if (__x < 0.0) {
            sqrt(__x);
          }
          __x_00 = (double)FUN_00014484(puVar18[4],puVar18[5]);
          if (__x_00 < 0.0) {
            sqrt(__x_00);
          }
          in_d16 = in_d16 / (SQRT(__x) * SQRT(__x_00));
          fVar34 = (float)in_d16;
          if ((fVar35 < fVar34) && (fVar35 = fVar34, fVar36 < fVar34)) {
            local_6c8 = (uint)uVar5;
            local_6cc = (uint)uVar6;
            local_6d0 = 1;
            if (fVar7 < fVar34) {
              uVar14 = (uint)*local_6b0;
              goto LAB_00013778;
            }
          }
          iVar12 = iVar12 + 1;
          puVar22 = puVar22 + 2;
        } while (iVar12 < (int)(uint)*puVar27);
        uVar14 = (uint)*local_6b0;
        if (local_6d0 != 0) {
LAB_00013778:
          uStack_69e = (short)local_6b8;
          uStack_69a = (short)local_6c8;
          uStack_69c = (short)local_6cc;
          local_6a0 = (short)local_6bc;
          in_d16 = (double)CONCAT26((short)local_6c8,
                                    CONCAT24((short)local_6cc,
                                             CONCAT22((short)local_6b8,(short)local_6bc)));
          local_690[local_6b4] = in_d16;
          local_6b4 = (int)(short)((short)local_6b4 + 1);
        }
      }
      local_6c0 = local_6c0 + 1;
      local_6c4 = local_6c4 + 2;
    } while (local_6c0 < (int)uVar14);
    if (1 < (int)local_6b4) {
      uVar14 = local_6b4;
      if ((int)local_6b4 < 1) {
        uVar14 = 1;
      }
      if ((int)local_6b4 < 8) {
        uVar13 = 0;
        uVar20 = uVar13;
        uVar23 = uVar13;
        uVar24 = uVar13;
        uVar25 = uVar13;
        goto LAB_000138d8;
      }
      auVar38 = (undefined1  [16])0x0;
      pdVar17 = local_690;
      pdVar16 = pdVar17 + (uVar14 & 0xfffffff8);
      auVar40 = auVar38;
      auVar42 = auVar38;
      auVar44 = auVar38;
      do {
        pdVar19 = pdVar17 + 8;
        puVar1 = (undefined2 *)0x370;
        puVar2 = (undefined2 *)0x380;
        puVar3 = (undefined2 *)0x390;
        puVar4 = (undefined2 *)0x3a0;
        lVar33 = 4;
        pdVar31 = pdVar17;
        while( true ) {
          *puVar1 = *(undefined2 *)pdVar31;
          puVar32 = (undefined2 *)((int)pdVar31 + 2);
          *puVar2 = *puVar32;
          puVar32 = puVar32 + 1;
          *puVar3 = *puVar32;
          puVar32 = puVar32 + 1;
          *puVar4 = *puVar32;
          pdVar31 = (double *)(puVar32 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        pdVar31 = pdVar17 + 4;
        uVar30 = pdVar16 == pdVar19;
        puVar1 = (undefined2 *)0x378;
        puVar2 = (undefined2 *)0x388;
        puVar3 = (undefined2 *)0x398;
        puVar4 = (undefined2 *)0x3a8;
        lVar33 = 4;
        pdVar17 = pdVar19;
        while( true ) {
          *puVar1 = *(undefined2 *)pdVar31;
          puVar32 = (undefined2 *)((int)pdVar31 + 2);
          *puVar2 = *puVar32;
          puVar32 = puVar32 + 1;
          *puVar3 = *puVar32;
          puVar32 = puVar32 + 1;
          *puVar4 = *puVar32;
          pdVar31 = (double *)(puVar32 + 1);
          lVar33 = lVar33 + -1;
          if (lVar33 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        auVar40 = VectorAdd(auVar40,in_d16,2,0);
        auVar42 = VectorAdd(auVar42,in_d18,2,0);
        auVar44 = VectorAdd(auVar44,in_d20,2,0);
        auVar38 = VectorAdd(auVar38,in_d22,2,0);
        auVar40 = VectorAdd(auVar40,in_d17,2,0);
        auVar42 = VectorAdd(auVar42,in_d19,2,0);
        auVar44 = VectorAdd(auVar44,in_d21,2,0);
        auVar38 = VectorAdd(auVar38,in_d23,2,0);
      } while (!(bool)uVar30);
      uVar37 = VectorAdd(auVar38._0_8_,auVar38._8_8_,4);
      uVar43 = VectorAdd(auVar44._0_8_,auVar44._8_8_,4);
      uVar41 = VectorAdd(auVar42._0_8_,auVar42._8_8_,4);
      uVar39 = VectorAdd(auVar40._0_8_,auVar40._8_8_,4);
      uVar37 = VectorPairwiseAdd(uVar37,uVar37,4);
      uVar43 = VectorPairwiseAdd(uVar43,uVar43,4);
      uVar41 = VectorPairwiseAdd(uVar41,uVar41,4);
      uVar39 = VectorPairwiseAdd(uVar39,uVar39,4);
      uVar23 = (uint)uVar37;
      uVar13 = (uint)uVar43;
      uVar25 = (uint)uVar41;
      uVar24 = (uint)uVar39;
      uVar20 = uVar14 & 0xfffffff8;
      piVar29 = piVar28;
      if ((uVar14 & 0xfffffff8) != uVar14) {
LAB_000138d8:
        iVar12 = uVar20 * 8;
        iVar21 = *(int *)((int)piVar29 + 0x34);
        uVar24 = uVar24 + (int)*(short *)((int)piVar29 + iVar12 + 0x58);
        uVar25 = uVar25 + (int)*(short *)((int)piVar29 + iVar12 + 0x5a);
        uVar13 = uVar13 + (int)*(short *)((int)piVar29 + iVar12 + 0x5c);
        uVar23 = uVar23 + (int)*(short *)((int)piVar29 + iVar12 + 0x5e);
        if ((int)(uVar20 + 1) < iVar21) {
          iVar12 = (uVar20 + 1) * 8;
          uVar24 = uVar24 + (int)*(short *)((int)piVar29 + iVar12 + 0x58);
          uVar25 = uVar25 + (int)*(short *)((int)piVar29 + iVar12 + 0x5a);
          uVar13 = uVar13 + (int)*(short *)((int)piVar29 + iVar12 + 0x5c);
          uVar23 = uVar23 + (int)*(short *)((int)piVar29 + iVar12 + 0x5e);
          if ((int)(uVar20 + 2) < iVar21) {
            iVar12 = (uVar20 + 2) * 8;
            uVar24 = uVar24 + (int)*(short *)((int)piVar29 + iVar12 + 0x58);
            uVar25 = uVar25 + (int)*(short *)((int)piVar29 + iVar12 + 0x5a);
            uVar13 = uVar13 + (int)*(short *)((int)piVar29 + iVar12 + 0x5c);
            uVar23 = uVar23 + (int)*(short *)((int)piVar29 + iVar12 + 0x5e);
            if ((int)(uVar20 + 3) < iVar21) {
              iVar12 = (uVar20 + 3) * 8;
              uVar24 = uVar24 + (int)*(short *)((int)piVar29 + iVar12 + 0x58);
              uVar25 = uVar25 + (int)*(short *)((int)piVar29 + iVar12 + 0x5a);
              uVar13 = uVar13 + (int)*(short *)((int)piVar29 + iVar12 + 0x5c);
              uVar23 = uVar23 + (int)*(short *)((int)piVar29 + iVar12 + 0x5e);
              if ((int)(uVar20 + 4) < iVar21) {
                iVar12 = (uVar20 + 4) * 8;
                uVar24 = uVar24 + (int)*(short *)((int)piVar29 + iVar12 + 0x58);
                uVar25 = uVar25 + (int)*(short *)((int)piVar29 + iVar12 + 0x5a);
                uVar13 = uVar13 + (int)*(short *)((int)piVar29 + iVar12 + 0x5c);
                uVar23 = uVar23 + (int)*(short *)((int)piVar29 + iVar12 + 0x5e);
                if ((int)(uVar20 + 5) < iVar21) {
                  iVar12 = (uVar20 + 5) * 8;
                  uVar24 = uVar24 + (int)*(short *)((int)piVar29 + iVar12 + 0x58);
                  uVar25 = uVar25 + (int)*(short *)((int)piVar29 + iVar12 + 0x5a);
                  uVar13 = uVar13 + (int)*(short *)((int)piVar29 + iVar12 + 0x5c);
                  uVar23 = uVar23 + (int)*(short *)((int)piVar29 + iVar12 + 0x5e);
                  if ((int)(uVar20 + 6) < iVar21) {
                    iVar12 = (uVar20 + 6) * 8;
                    uVar24 = uVar24 + (int)*(short *)((int)piVar29 + iVar12 + 0x58);
                    uVar25 = uVar25 + (int)*(short *)((int)piVar29 + iVar12 + 0x5a);
                    uVar13 = uVar13 + (int)*(short *)((int)piVar29 + iVar12 + 0x5c);
                    uVar23 = uVar23 + (int)*(short *)((int)piVar29 + iVar12 + 0x5e);
                  }
                }
              }
            }
          }
        }
      }
      uVar26 = *(undefined4 *)((int)piVar29 + 0x34);
      sVar9 = FUN_0001403c(uVar13,uVar26);
      sVar10 = FUN_0001403c(uVar24,uVar26);
      sVar11 = FUN_0001403c(uVar23,uVar26);
      iVar21 = (int)(short)(sVar9 - sVar10);
      sVar9 = FUN_0001403c(uVar25,uVar26);
      *(int *)((int)piVar29 + 0x40) = iVar21;
      uVar37 = *(undefined8 *)(param_1 + 0x1a8);
      uVar26 = *(undefined4 *)((int)piVar29 + 0x3c);
      iVar12 = (int)(short)(sVar11 - sVar9);
      *(int *)((int)piVar29 + 0x44) = iVar12;
      uVar37 = VectorAdd(uVar37,*(undefined8 *)((int)piVar29 + 0x40),4);
      *(undefined8 *)(param_1 + 0x1a8) = uVar37;
LAB_00013738:
      printf("search times: %d, match_pattern_num: %d\n",uVar26,*(undefined4 *)((int)piVar29 + 0x34)
            );
      printf("motion vector: %d, %d\n",iVar21,iVar12);
      return *(undefined4 *)((int)piVar29 + 0x14);
    }
    while( true ) {
      if (local_6ac == 3) {
        iVar12 = 0;
        iVar21 = 0;
        uVar26 = 3;
        local_6ac = 3;
        piVar29 = &local_6e8;
        goto LAB_00013738;
      }
      fVar36 = fVar36 - fVar8;
      local_6ac = local_6ac + 1;
      if (uVar14 != 0) break;
LAB_0001371c:
      local_6b4 = uVar14;
    }
  } while( true );
}



/* ===== FUN_00013b58 @ 00013b58 size=1016 ===== */

void FUN_00013b58(void)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FILE *local_30;
  FILE *local_2c [2];
  
  DAT_00025274 = 0x20;
  uVar3 = 0;
  DAT_000252d8 = DAT_00013f50;
  DAT_000252e0 = DAT_00013f58;
  DAT_00025270 = 0x10;
  local_30 = (FILE *)0x0;
  local_2c[0] = (FILE *)0x0;
  FUN_00010f1c();
  FUN_00012eb8(&DAT_00025130,0x280,0x168);
  FUN_00010f50("/root/data/stream/rocker_640x360_f300.yuv",&DAT_00025130,&local_30);
  uVar6 = (DAT_00025170 + -1) - DAT_000252d8._4_4_;
  uVar7 = (DAT_0002516c + -1) - (int)DAT_000252d8;
  if (DAT_00025328 <= uVar6) {
    uVar6 = DAT_00025328;
  }
  if (DAT_00025324 <= uVar7) {
    uVar7 = DAT_00025324;
  }
  iVar8 = DAT_00025160 * DAT_000252d8._4_4_ + (int)DAT_000252d8;
  if (0 < (int)uVar6) {
    do {
      iVar4 = DAT_00025324 * uVar3;
      iVar10 = DAT_0002516c * uVar3;
      uVar3 = uVar3 + 1;
      memcpy((void *)(iVar4 + DAT_00025300),(void *)(iVar10 + iVar8 + DAT_00025148),uVar7);
    } while (uVar6 != uVar3);
  }
  iVar8 = DAT_000252e0._4_4_;
  sVar1 = (size_t)DAT_000252e0;
  if (0 < DAT_000252e0._4_4_) {
    pvVar5 = (void *)(DAT_000252d8._4_4_ * 0x280 + (int)DAT_000252d8 + DAT_00025148);
    iVar10 = DAT_000252e0._4_4_ + -1;
    iVar4 = 0;
    do {
      while ((int)sVar1 < 1) {
LAB_00013cbc:
        iVar4 = iVar4 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0x280);
        if (iVar8 == iVar4) goto LAB_00013ccc;
      }
      if ((iVar4 != 0) && (iVar10 != iVar4)) {
        sVar2 = 0;
        do {
          while ((sVar2 == 0 || (sVar1 - 1 == sVar2))) {
            *(undefined1 *)(sVar2 + (int)pvVar5) = 0xff;
            sVar2 = sVar2 + 1;
            if (sVar1 == sVar2) goto LAB_00013cbc;
          }
          sVar2 = sVar2 + 1;
        } while (sVar1 != sVar2);
        goto LAB_00013cbc;
      }
      iVar4 = iVar4 + 1;
      memset(pvVar5,0xff,sVar1);
      pvVar5 = (void *)((int)pvVar5 + 0x280);
    } while (iVar8 != iVar4);
  }
LAB_00013ccc:
  if (DAT_00025360 == '\0') {
    iVar8 = 0xf9;
    do {
      FUN_00010f50("/root/data/stream/rocker_640x360_f300.yuv",&DAT_00025130,&local_30);
      uVar6 = (DAT_00025170 + -1) - DAT_000252d8._4_4_;
      uVar7 = (DAT_0002516c + -1) - (int)DAT_000252d8;
      if (DAT_000251c0 <= uVar6) {
        uVar6 = DAT_000251c0;
      }
      if (DAT_000251bc <= uVar7) {
        uVar7 = DAT_000251bc;
      }
      iVar4 = DAT_00025160 * DAT_000252d8._4_4_ + (int)DAT_000252d8;
      if (0 < (int)uVar6) {
        uVar3 = 0;
        do {
          iVar10 = DAT_000251bc * uVar3;
          iVar9 = DAT_0002516c * uVar3;
          uVar3 = uVar3 + 1;
          memcpy((void *)(iVar10 + DAT_00025198),(void *)(iVar9 + iVar4 + DAT_00025148),uVar7);
        } while (uVar6 != uVar3);
      }
      iVar10 = FUN_00012744();
      iVar4 = DAT_000252e0._4_4_;
      sVar1 = (size_t)DAT_000252e0;
      if (0 < DAT_000252e0._4_4_) {
        pvVar5 = (void *)(DAT_000252d8._4_4_ * 0x280 + (int)DAT_000252d8 + DAT_00025148);
        iVar9 = DAT_000252e0._4_4_ + -1;
        iVar11 = 0;
        do {
          if (0 < (int)sVar1) {
            if ((iVar11 == 0) || (iVar9 == iVar11)) {
              pvVar5 = memset(pvVar5,0xff,sVar1);
            }
            else {
              sVar2 = 0;
              do {
                if ((sVar2 == 0) || (sVar1 - 1 == sVar2)) {
                  *(undefined1 *)(sVar2 + (int)pvVar5) = 0xff;
                }
                sVar2 = sVar2 + 1;
              } while (sVar1 != sVar2);
            }
          }
          iVar11 = iVar11 + 1;
          pvVar5 = (void *)((int)pvVar5 + 0x280);
        } while (iVar4 != iVar11);
      }
      FUN_000113a4("/root/output/ot_out_640x360_f300.yuv",&DAT_00025130,local_2c);
      if (iVar10 == 0) {
        uVar6 = (DAT_00025170 + -1) - DAT_000252d8._4_4_;
        uVar7 = (DAT_0002516c + -1) - (int)DAT_000252d8;
        if (DAT_00025328 <= uVar6) {
          uVar6 = DAT_00025328;
        }
        if (DAT_00025324 <= uVar7) {
          uVar7 = DAT_00025324;
        }
        iVar4 = DAT_00025160 * DAT_000252d8._4_4_ + (int)DAT_000252d8;
        uVar3 = 0;
        if (0 < (int)uVar6) {
          do {
            iVar10 = DAT_00025324 * uVar3;
            iVar9 = DAT_0002516c * uVar3;
            uVar3 = uVar3 + 1;
            memcpy((void *)(iVar10 + DAT_00025300),(void *)(iVar9 + iVar4 + DAT_00025148),uVar7);
          } while (uVar6 != uVar3);
        }
      }
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) goto LAB_00013e64;
    } while (DAT_00025360 == '\0');
  }
  puts("exit loop");
LAB_00013e64:
  if (local_30 != (FILE *)0x0) {
    fclose(local_30);
    local_30 = (FILE *)0x0;
  }
  if (local_2c[0] != (FILE *)0x0) {
    fclose(local_2c[0]);
    local_2c[0] = (FILE *)0x0;
  }
  FUN_00012618(&DAT_00025130);
  FUN_00010f38();
  return;
}



/* ===== FUN_00013f74 @ 00013f74 size=168 ===== */

ulonglong FUN_00013f74(uint param_1,uint param_2)

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



/* ===== FUN_0001401c @ 0001401c size=32 ===== */

void FUN_0001401c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00013f74();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0001403c @ 0001403c size=236 ===== */

ulonglong FUN_0001403c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
  }
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return CONCAT44(uVar2,param_1);
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
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
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
  return CONCAT44(uVar3,uVar1);
}



/* ===== FUN_00014484 @ 00014484 size=372 ===== */

ulonglong FUN_00014484(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar11 = 0x432;
  uVar10 = 0;
  if (param_2 >> 0x16 != 0) {
    iVar11 = 3;
    if (param_2 >> 0x19 != 0) {
      iVar11 = 6;
    }
    if (param_2 >> 0x1c != 0) {
      iVar11 = iVar11 + 3;
    }
    iVar11 = iVar11 - ((int)param_2 >> 0x1f);
    uVar10 = param_1 << (0x20U - iVar11 & 0xff);
    param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
    param_2 = param_2 >> iVar11;
    iVar11 = iVar11 + 0x432;
  }
  if (0xfffff < param_2) {
    if (0x1fffff < param_2) {
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
      iVar11 = iVar11 + 1;
      if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
        return 0x7ff0000000000000;
      }
    }
LAB_0001425c:
    bVar12 = 0x7fffffff < uVar10;
    if (uVar10 == 0x80000000) {
      bVar12 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
                    param_1 + bVar12);
  }
  bVar1 = (byte)(uVar10 >> 0x1f);
  uVar10 = uVar10 << 1;
  uVar3 = param_1 * 2;
  bVar12 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
  iVar11 = iVar11 + -1;
  if ((param_2 & 0x100000) != 0) goto LAB_0001425c;
  uVar3 = param_1;
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = param_1;
  }
  iVar8 = LZCOUNT(uVar4);
  if (param_2 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar13 = SBORROW4(uVar9,0x20);
  uVar5 = iVar8 - 0x2b;
  bVar12 = uVar5 == 0;
  uVar7 = uVar5;
  uVar6 = uVar5;
  if ((int)uVar9 < 0x20) {
    bVar13 = SCARRY4(uVar5,0xc);
    uVar6 = iVar8 - 0x1f;
    bVar12 = uVar6 == 0;
    uVar7 = uVar9;
    if (!bVar12 && -0xd < (int)uVar5) {
      uVar3 = uVar4 << (uVar9 & 0xff);
      uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
      goto LAB_000142dc;
    }
  }
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar10 = 0x20 - uVar7;
  }
  uVar4 = uVar4 << (uVar7 & 0xff);
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
    uVar3 = uVar3 << (uVar7 & 0xff);
  }
LAB_000142dc:
  if ((int)uVar9 <= iVar11) {
    return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
  }
  uVar10 = ~(iVar11 - uVar9);
  if (0x1e < (int)uVar10) {
    return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
  }
  if (uVar10 - 0x13 == 0 || (int)(uVar10 - 0x1f) < -0xc) {
    uVar10 = uVar10 + 1;
    return CONCAT44(uVar4 >> (uVar10 & 0xff),
                    uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
  }
  uVar10 = 0xc - (uVar10 - 0x13);
  return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
}



/* ===== _fini @ 00014508 size=16 ===== */

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



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002600c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2PhysAddr @ 00026014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2PhysAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_DMA @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_DMA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Hist @ 00026028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_Hist(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sqrt @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sqrt(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2Fd @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Handle2Fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_GetSize @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_GetSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_STCandiCorner @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_STCandiCorner(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_NCC @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_NCC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_Query @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_Query(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVE_STCorner @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVE_STCorner(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Free @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc_Cached @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzAlloc_Cached(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_VirAddr2Handle @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_VirAddr2Handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


