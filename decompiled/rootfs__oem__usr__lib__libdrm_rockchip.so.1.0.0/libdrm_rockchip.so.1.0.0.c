// libdrm_rockchip.so.1.0.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010670 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::strerror @ 00010694 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002100c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::munmap @ 000106a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00021010)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000106ac size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021014)();
  return;
}



/* ===== <EXTERNAL>::drmIoctl @ 000106b8 size=12 ===== */

void drmIoctl(void)

{
  (*(code *)PTR_drmIoctl_00021018)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 000106c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002101c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000106d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00021020)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000106dc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021024)();
  return;
}



/* ===== <EXTERNAL>::mmap64 @ 000106e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_00021028)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000106f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002102c)();
  return piVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010700 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00021030)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001070c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021034)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010718 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00021038)(__ptr);
  return;
}



/* ===== entry @ 00010724 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00010770 + 0x1073c == DAT_0001076c + 0x10734) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010774 + 0x10744 + DAT_00010778);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000107e0 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010854 + 0x107fc;
  if (*(char *)(DAT_00010850 + 0x107f0) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010858) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_0001085c + 0x1081c));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00010860) != 0) {
    __deregister_frame_info(DAT_00010864 + 0x1083c);
  }
  *(undefined1 *)(DAT_00010868 + 0x1084c) = 1;
  return;
}



/* ===== _INIT_0 @ 0001086c size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000108a4 + 0x1087c + DAT_000108a8) != 0) {
    __register_frame_info(DAT_000108b0 + 0x1089c,DAT_000108ac + 0x10898);
  }
  if (((DAT_000107d4 + 0x10794) - (DAT_000107d0 + 0x1078c) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000107d8 + 0x1079c + DAT_000107dc);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== rockchip_device_create @ 000108b4 size=92 ===== */

undefined4 * rockchip_device_create(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  FILE *__stream;
  
  iVar4 = DAT_00010910 + 0x108d0;
  puVar1 = calloc(1,4);
  if (puVar1 == (undefined4 *)0x0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00010914);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream,(char *)(DAT_00010918 + 0x10908),pcVar3);
  }
  else {
    *puVar1 = param_1;
  }
  return puVar1;
}



/* ===== rockchip_device_destroy @ 0001091c size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rockchip_device_destroy(void *__ptr)

{
  (*(code *)PTR_free_00021038)(__ptr);
  return;
}



/* ===== rockchip_bo_create @ 00010920 size=268 ===== */

undefined4 * rockchip_bo_create(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *__ptr;
  int *piVar1;
  char *pcVar2;
  int iVar3;
  FILE *pFVar4;
  int iVar5;
  int local_30 [3];
  undefined4 local_24;
  
  iVar5 = DAT_00010a2c + 0x10940;
  local_24 = 0;
  local_30[1] = 0;
  local_30[0] = param_2;
  local_30[2] = param_3;
  if (param_2 == 0) {
    fputs((char *)(DAT_00010a34 + 0x10964),(FILE *)**(undefined4 **)(iVar5 + DAT_00010a30));
    __ptr = (undefined4 *)0x0;
  }
  else {
    __ptr = calloc(1,0x18);
    if (__ptr == (undefined4 *)0x0) {
      pFVar4 = (FILE *)**(undefined4 **)(iVar5 + DAT_00010a30);
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      fprintf(pFVar4,(char *)(DAT_00010a38 + 0x109bc),pcVar2);
    }
    else {
      *__ptr = param_1;
      iVar3 = drmIoctl(*param_1,DAT_00010a3c,local_30);
      if (iVar3 == 0) {
        __ptr[3] = param_2;
        __ptr[1] = local_24;
        __ptr[2] = param_3;
      }
      else {
        pFVar4 = (FILE *)**(undefined4 **)(iVar5 + DAT_00010a30);
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        fprintf(pFVar4,(char *)(DAT_00010a40 + 0x10a08),pcVar2);
        free(__ptr);
        __ptr = (undefined4 *)0x0;
      }
    }
  }
  return __ptr;
}



/* ===== rockchip_bo_from_handle @ 00010a44 size=156 ===== */

undefined4 *
rockchip_bo_from_handle(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  FILE *__stream;
  
  iVar4 = DAT_00010ae0 + 0x10a58;
  if (param_4 == 0) {
    fputs((char *)(DAT_00010ae8 + 0x10a70),(FILE *)**(undefined4 **)(iVar4 + DAT_00010ae4));
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = calloc(1,0x18);
    if (puVar1 == (undefined4 *)0x0) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00010ae4);
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      fprintf(__stream,(char *)(DAT_00010aec + 0x10ac8),pcVar3);
    }
    else {
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[3] = param_4;
      puVar1[2] = param_3;
    }
  }
  return puVar1;
}



/* ===== rockchip_bo_destroy @ 00010af0 size=100 ===== */

void rockchip_bo_destroy(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *local_10;
  undefined4 local_c;
  
  if (param_1 != (undefined4 *)0x0) {
    local_10 = param_1;
    local_c = param_2;
    if ((void *)param_1[4] != (void *)0x0) {
      munmap((void *)param_1[4],param_1[3]);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      local_c = 0;
      local_10 = (undefined4 *)param_1[1];
      drmIoctl(*(undefined4 *)*param_1,DAT_00010b54,&local_10);
    }
    free(param_1);
    return;
  }
  return;
}



/* ===== rockchip_bo_from_name @ 00010b58 size=220 ===== */

undefined4 * rockchip_bo_from_name(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *__ptr;
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  FILE *pFVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar4 = DAT_00010c34 + 0x10b7c;
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_28 = param_2;
  __ptr = calloc(1,0x18);
  if (__ptr == (undefined4 *)0x0) {
    pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00010c38);
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    fprintf(pFVar5,(char *)(DAT_00010c3c + 0x10bc0),pcVar2);
  }
  else {
    iVar3 = drmIoctl(*param_1,DAT_00010c40,&local_28);
    if (iVar3 == 0) {
      *__ptr = param_1;
      __ptr[5] = param_2;
      __ptr[1] = local_24;
    }
    else {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00010c38);
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      fprintf(pFVar5,(char *)(DAT_00010c44 + 0x10c10),pcVar2);
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
  }
  return __ptr;
}



/* ===== rockchip_bo_get_name @ 00010c48 size=152 ===== */

int rockchip_bo_get_name(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  FILE *__stream;
  int iVar4;
  undefined4 local_20;
  int local_1c;
  undefined4 uStack_18;
  
  local_1c = param_1[5];
  iVar4 = DAT_00010ce0 + 0x10c68;
  if (local_1c == 0) {
    local_20 = param_1[1];
    uStack_18 = param_3;
    iVar1 = drmIoctl(*(undefined4 *)*param_1,DAT_00010ce4,&local_20);
    if (iVar1 != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00010ce8);
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      fprintf(__stream,(char *)(DAT_00010cec + 0x10cc4),pcVar3);
      return iVar1;
    }
    param_1[5] = local_1c;
  }
  *param_2 = param_1[5];
  return 0;
}



/* ===== rockchip_bo_handle @ 00010cf0 size=8 ===== */

undefined4 rockchip_bo_handle(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ===== rockchip_bo_map @ 00010cf8 size=228 ===== */

undefined4 rockchip_bo_map(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  char *__format;
  FILE *__stream;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar5 = DAT_00010ddc + 0x10d18;
  if (param_1[4] == 0) {
    piVar6 = (int *)*param_1;
    local_28 = param_1[1];
    local_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    iVar1 = drmIoctl(*piVar6,DAT_00010de0,&local_28);
    if (iVar1 == 0) {
      pvVar3 = mmap64((void *)0x0,param_1[3],3,1,*piVar6,CONCAT44(uStack_1c,uStack_20));
      param_1[4] = pvVar3;
      if (pvVar3 != (void *)0xffffffff) goto LAB_00010dd4;
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00010de4);
      piVar6 = __errno_location();
      pcVar2 = strerror(*piVar6);
      __format = (char *)(DAT_00010dec + 0x10dd4);
    }
    else {
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00010de4);
      piVar6 = __errno_location();
      pcVar2 = strerror(*piVar6);
      __format = (char *)(DAT_00010de8 + 0x10d70);
    }
    fprintf(__stream,__format,pcVar2);
    uVar4 = 0;
  }
  else {
LAB_00010dd4:
    uVar4 = param_1[4];
  }
  return uVar4;
}



/* ===== _fini @ 00010df0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::strerror @ 00022000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 00022004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmIoctl @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmIoctl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00022030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00022034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00022038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


