// simple_ao — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010a70 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010a94 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002200c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SendFrame @ 00010aa0 size=12 ===== */

void RK_MPI_AO_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_AO_SendFrame_00022010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010aac size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetTrackMode @ 00010ab8 size=12 ===== */

void RK_MPI_AO_GetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AO_GetTrackMode_00022018)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00010ac4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002201c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetChnParams @ 00010ad0 size=12 ===== */

void RK_MPI_AO_SetChnParams(void)

{
  (*(code *)PTR_RK_MPI_AO_SetChnParams_00022020)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableChn @ 00010adc size=12 ===== */

void RK_MPI_AO_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AO_EnableChn_00022024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableReSmp @ 00010ae8 size=12 ===== */

void RK_MPI_AO_EnableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AO_EnableReSmp_00022028)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00022030)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_WaitEos @ 00010b0c size=12 ===== */

void RK_MPI_AO_WaitEos(void)

{
  (*(code *)PTR_RK_MPI_AO_WaitEos_00022034)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_Disable @ 00010b18 size=12 ===== */

void RK_MPI_AO_Disable(void)

{
  (*(code *)PTR_RK_MPI_AO_Disable_00022038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010b24 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0002203c)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00022040)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00010b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00022044)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetTrackMode @ 00010b48 size=12 ===== */

void RK_MPI_AO_SetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AO_SetTrackMode_00022048)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010b54 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0002204c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetVolume @ 00010b60 size=12 ===== */

void RK_MPI_AO_SetVolume(void)

{
  (*(code *)PTR_RK_MPI_AO_SetVolume_00022050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableChn @ 00010b6c size=12 ===== */

void RK_MPI_AO_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AO_DisableChn_00022054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_Enable @ 00010b78 size=12 ===== */

void RK_MPI_AO_Enable(void)

{
  (*(code *)PTR_RK_MPI_AO_Enable_00022058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00010b84 size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_0002205c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableReSmp @ 00010b90 size=12 ===== */

void RK_MPI_AO_DisableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AO_DisableReSmp_00022060)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022064)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022068)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002206c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00010bc0 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_00022070)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 00010bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00022074)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022078)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010be4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002207c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetPubAttr @ 00010bf0 size=12 ===== */

void RK_MPI_AO_SetPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AO_SetPubAttr_00022080)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00010bfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022084)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetVolume @ 00010c08 size=12 ===== */

void RK_MPI_AO_GetVolume(void)

{
  (*(code *)PTR_RK_MPI_AO_GetVolume_00022088)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002208c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010c20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00022090)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00010c2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00022094)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010c38 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022098)();
  return;
}



/* ===== FUN_00010c44 @ 00010c44 size=704 ===== */

undefined4 FUN_00010c44(int param_1,char **param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  FILE *pFVar6;
  void *__s;
  size_t sVar7;
  char *__filename;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  uint local_68;
  int iStack_64;
  size_t local_5c;
  uint local_58;
  void *local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  void *local_2c;
  
  puVar1 = DAT_00010f0c;
  pcVar8 = DAT_00010f08;
  iVar9 = 16000;
  iVar11 = 16000;
  __filename = DAT_00010f04;
  while (iVar5 = getopt(param_1,param_2,pcVar8), iVar5 != -1) {
    if (iVar5 == 0x72) {
      iVar9 = atoi((char *)*puVar1);
    }
    else if (iVar5 == 0x73) {
      iVar11 = atoi((char *)*puVar1);
    }
    else {
      if (iVar5 != 0x69) {
        pcVar8 = *param_2;
        puts(DAT_00010f2c);
        printf(DAT_00010f30,pcVar8);
        puts(DAT_00010f34);
        puts(DAT_00010f38);
        puts(DAT_00010f3c);
        return 0;
      }
      __filename = (char *)*puVar1;
    }
  }
  printf(DAT_00010f10,iVar11);
  printf(DAT_00010f14,iVar9);
  printf(DAT_00010f18,0x400);
  printf(DAT_00010f1c,__filename);
  puVar1 = DAT_00010f20;
  if (__filename != (char *)0x0) {
    pFVar6 = fopen64(__filename,DAT_00010f24);
    *puVar1 = pFVar6;
    if (pFVar6 == (FILE *)0x0) {
      printf(DAT_00010f28,__filename);
      return 0;
    }
  }
  signal(2,DAT_00010f40);
  uVar2 = DAT_00010f44;
  RK_MPI_SYS_Init();
  FUN_0001116c(iVar9,iVar11,0x400);
  printf(DAT_00010f4c,DAT_00010f48);
  uVar3 = DAT_00010f50;
  __s = calloc(0x400,1);
  memset(__s,0,0x400);
  uVar12 = 0;
  iVar9 = 0;
  do {
    uVar10 = (uint)*DAT_00010f54;
    if (uVar10 != 0) goto LAB_00010eb4;
    sVar7 = fread(__s,1,0x400,(FILE *)*puVar1);
    uVar4 = DAT_00010f58;
    uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    bVar13 = 0xfffffffe < uVar12;
    local_74 = 1;
    local_4c = 0;
    local_3c = 0;
    uStack_38 = VectorShiftRight(CONCAT44(sVar7,sVar7),0x20);
    local_70 = uVar10;
    local_68 = uVar12;
    iStack_64 = iVar9;
    local_5c = sVar7;
    local_58 = uVar10;
    local_50 = __s;
    uStack_30 = uStack_48;
    local_2c = __s;
    RK_MPI_SYS_CreateMB(&local_78,&local_50);
    while (iVar11 = RK_MPI_AO_SendFrame(0,0,&local_78,0xffffffff), iVar11 < 0) {
      RK_LOG(2,uVar3,uVar4,uVar2,0xbb,iVar11,local_68,iStack_64,0xffffffff);
    }
    RK_MPI_MB_ReleaseMB(local_78);
    uVar12 = uVar12 + 1;
    iVar9 = iVar9 + (uint)bVar13;
  } while (0 < (int)sVar7);
  printf(DAT_00010f5c);
  RK_MPI_AO_WaitEos(0,0,0xffffffff);
LAB_00010eb4:
  if ((FILE *)*puVar1 != (FILE *)0x0) {
    fclose((FILE *)*puVar1);
    *puVar1 = 0;
  }
  free(__s);
  RK_MPI_AO_DisableReSmp(0);
  RK_MPI_AO_DisableChn(0);
  RK_MPI_AO_Disable(0);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 00010f60 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002202c)
            (DAT_00010f94,param_2,&stack0x00000004,DAT_00010f98,DAT_00010f90,param_1);
  return;
}



/* ===== FUN_00010f9c @ 00010f9c size=32 ===== */

void FUN_00010f9c(void)

{
  if (DAT_00010fc0 == DAT_00010fbc) {
    return;
  }
  if (DAT_00010fc4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010fc4)();
  return;
}



/* ===== _FINI_0 @ 00011000 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001103c;
  if (*DAT_0001103c != '\0') {
    return;
  }
  FUN_00010f9c();
  if (DAT_00011040 != 0) {
    __deregister_frame_info(DAT_00011044);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011048 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001106c != 0) {
    __register_frame_info(DAT_00011074,DAT_00011070);
  }
  if ((DAT_00010ff8 - DAT_00010ff4 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010ffc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010ffc)();
  return;
}



/* ===== FUN_000110ac @ 000110ac size=168 ===== */

undefined4 FUN_000110ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  printf(DAT_00011158,DAT_00011154,param_3,param_4,param_1,param_2);
  local_18 = 0;
  RK_MPI_AO_SetVolume(0,param_1);
  uVar1 = DAT_0001115c;
  RK_MPI_AO_GetVolume(0,&local_18);
  uVar2 = DAT_00011160;
  RK_LOG(4,DAT_00011160,DAT_00011164,uVar1,0x23,local_18);
  RK_MPI_AO_SetTrackMode(0,10);
  RK_MPI_AO_GetTrackMode(0,&local_14);
  RK_LOG(4,uVar2,DAT_00011168,uVar1,0x29,local_14);
  return 0;
}



/* ===== FUN_0001116c @ 0001116c size=372 ===== */

undefined4 FUN_0001116c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong local_88;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  printf(DAT_000112e4,DAT_000112e0);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_88 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  strcpy(local_58,DAT_000112e8);
  local_78 = 1;
  local_70 = 1;
  local_80 = 2;
  local_64 = 4;
  local_6c = 0;
  local_68 = 0;
  local_5c = 2;
  local_7c = param_2;
  local_74 = param_2;
  local_60 = param_3;
  RK_MPI_AO_SetPubAttr(0,&local_80);
  RK_MPI_AO_Enable(0);
  local_88 = local_88 & 0xffffffff;
  iVar1 = RK_MPI_AO_SetChnParams(0,0,&local_88);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AO_EnableChn(0,0);
    if (iVar1 == 0) {
      if (param_2 == param_1) {
LAB_000112d4:
        FUN_000110ac(100);
        return 0;
      }
      puts(DAT_000112fc);
      iVar2 = RK_MPI_AO_EnableReSmp(0,0,param_1);
      if (iVar2 == 0) goto LAB_000112d4;
      uVar4 = 0x60;
      uVar3 = DAT_00011300;
    }
    else {
      uVar4 = 0x56;
      iVar2 = 0;
      uVar3 = DAT_000112f8;
    }
    RK_LOG(2,DAT_000112f4,uVar3,DAT_000112ec,uVar4,iVar2,iVar1);
  }
  else {
    RK_LOG(2,DAT_000112f4,DAT_000112f0,DAT_000112ec,0x50,0);
  }
  return 0xffffffff;
}



/* ===== _fini @ 00011304 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetVolume @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_GetVolume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_WaitEos @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_WaitEos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetTrackMode @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetTrackMode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableChn @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetChnParams @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetChnParams(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableChn @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SendFrame @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetTrackMode @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_GetTrackMode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetPubAttr @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetPubAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetVolume @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetVolume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableReSmp @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_EnableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_Enable @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_Enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00023088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_Disable @ 0002308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_Disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableReSmp @ 00023090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_DisableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00023094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


