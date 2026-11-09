// simple_ai_aenc — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010a60 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010a84 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002200c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00010a90 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00022010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010a9c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022014)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010aa8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00022018)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetTrackMode @ 00010ab4 size=12 ===== */

void RK_MPI_AI_GetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AI_GetTrackMode_0002201c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableChn @ 00010ac0 size=12 ===== */

void RK_MPI_AI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableChn_00022020)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010ad8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00022028)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetVolume @ 00010ae4 size=12 ===== */

void RK_MPI_AI_SetVolume(void)

{
  (*(code *)PTR_RK_MPI_AI_SetVolume_0002202c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetChnParam @ 00010af0 size=12 ===== */

void RK_MPI_AI_SetChnParam(void)

{
  (*(code *)PTR_RK_MPI_AI_SetChnParam_00022030)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableChn @ 00010afc size=12 ===== */

void RK_MPI_AI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableChn_00022034)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00010b08 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00022038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_CreateChn @ 00010b14 size=12 ===== */

void RK_MPI_AENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_AENC_CreateChn_0002203c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010b20 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00022040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_Enable @ 00010b2c size=12 ===== */

void RK_MPI_AI_Enable(void)

{
  (*(code *)PTR_RK_MPI_AI_Enable_00022044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_GetStream @ 00010b38 size=12 ===== */

void RK_MPI_AENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_AENC_GetStream_00022048)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010b44 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0002204c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetTrackMode @ 00010b50 size=12 ===== */

void RK_MPI_AI_SetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AI_SetTrackMode_00022050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_DestroyChn @ 00010b5c size=12 ===== */

void RK_MPI_AENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_AENC_DestroyChn_00022054)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010b68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00022058)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableReSmp @ 00010b74 size=12 ===== */

void RK_MPI_AI_EnableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableReSmp_0002205c)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010b80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022060)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010b8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00022064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetPubAttr @ 00010b98 size=12 ===== */

void RK_MPI_AI_SetPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_SetPubAttr_00022068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_ReleaseStream @ 00010ba4 size=12 ===== */

void RK_MPI_AENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_AENC_ReleaseStream_0002206c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010bb0 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00022070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_Disable @ 00010bbc size=12 ===== */

void RK_MPI_AI_Disable(void)

{
  (*(code *)PTR_RK_MPI_AI_Disable_00022074)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010bc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00022078)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 00010bd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0002207c)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::atoi @ 00010be0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00022080)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010bec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022084)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00010bf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00022088)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010c04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0002208c)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00010c10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00022090)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010c1c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022094)();
  return;
}



/* ===== FUN_00010c28 @ 00010c28 size=808 ===== */

undefined4 FUN_00010c28(int param_1,char **param_2)

{
  char *__shortopts;
  undefined4 *puVar1;
  char *__s2;
  undefined4 uVar2;
  undefined4 uVar3;
  size_t __size;
  int iVar4;
  FILE *pFVar5;
  void *__ptr;
  int iVar6;
  char *pcVar7;
  char *__filename;
  char *pcVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  size_t local_3c;
  
  __s2 = DAT_00010f60;
  puVar1 = DAT_00010f5c;
  __shortopts = DAT_00010f58;
  iVar6 = 8000;
  __filename = DAT_00010f54;
  pcVar7 = DAT_00010f50;
  while (iVar4 = getopt(param_1,param_2,__shortopts), iVar4 != -1) {
    if (iVar4 == 0x72) {
      iVar6 = atoi((char *)*puVar1);
    }
    else if (iVar4 == 0x74) {
      pcVar8 = (char *)*puVar1;
      iVar4 = strcmp(pcVar8,__s2);
      if (iVar4 == 0) {
        *DAT_00010f80 = 0x40000002;
        pcVar7 = __s2;
      }
      else {
        iVar4 = strcmp(pcVar8,DAT_00010f84);
        pcVar7 = DAT_00010f84;
        if (iVar4 == 0) {
          *DAT_00010f80 = 0x40000003;
        }
        else {
          iVar4 = strcmp(pcVar8,DAT_00010f50);
          pcVar7 = DAT_00010f50;
          pcVar8 = DAT_00010f88;
          if (iVar4 != 0) goto LAB_00010d80;
          *DAT_00010f80 = 0x40000008;
        }
      }
    }
    else {
      if (iVar4 != 0x6f) {
        pcVar7 = *param_2;
        puts(DAT_00010f8c);
        printf(DAT_00010f90,pcVar7);
        puts(DAT_00010f94);
        puts(DAT_00010f98);
        pcVar8 = DAT_00010f9c;
LAB_00010d80:
        puts(pcVar8);
        return 0;
      }
      __filename = (char *)*puVar1;
    }
  }
  printf(DAT_00010f64,iVar6);
  printf(DAT_00010f68,0x400);
  printf(DAT_00010f6c,pcVar7);
  printf(DAT_00010f70,__filename);
  if (__filename != (char *)0x0) {
    pFVar5 = fopen64(__filename,DAT_00010f74);
    *DAT_00010f78 = pFVar5;
    if (pFVar5 == (FILE *)0x0) {
      printf(DAT_00010f7c,__filename);
      return 0;
    }
  }
  signal(2,DAT_00010fa0);
  RK_MPI_SYS_Init();
  FUN_00011190(iVar6,iVar6,0x400);
  FUN_0001137c(iVar6);
  local_4c = 0xc;
  local_58 = 10;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  iVar6 = RK_MPI_SYS_Bind(&local_58,&local_4c);
  if (iVar6 != 0) {
    printf(DAT_00010fa4);
    return 0xffffffff;
  }
  printf(DAT_00010fac,DAT_00010fa8);
  uVar3 = DAT_00010fb8;
  uVar2 = DAT_00010fb4;
  pcVar7 = DAT_00010fb0;
  do {
    while( true ) {
      if (*pcVar7 != '\0') goto LAB_00010f00;
      iVar6 = RK_MPI_AENC_GetStream(0,&local_40,0xffffffff);
      if (iVar6 == 0) break;
      RK_LOG(2,uVar3,DAT_00010fc4,uVar2,0x134);
    }
    __ptr = (void *)RK_MPI_MB_Handle2VirAddr(local_40);
    __size = local_3c;
    puVar1 = DAT_00010f78;
    if (__ptr != (void *)0x0) {
      RK_LOG(4,uVar3,DAT_00010fbc,uVar2,300,__ptr,local_3c);
      pFVar5 = (FILE *)*puVar1;
      if (pFVar5 != (FILE *)0x0) {
        fwrite(__ptr,__size,1,pFVar5);
        fflush((FILE *)*puVar1);
      }
      RK_MPI_AENC_ReleaseStream(0,&local_40);
    }
  } while (0 < (int)__size);
  RK_LOG(4,DAT_00010fb8,DAT_00010fc0,DAT_00010fb4,0x138);
LAB_00010f00:
  RK_MPI_SYS_UnBind(&local_58,&local_4c);
  RK_MPI_AI_DisableChn(0);
  RK_MPI_AI_Disable(0);
  RK_MPI_AENC_DestroyChn(0);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 00010fc8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00022024)
            (DAT_00010ffc,param_2,&stack0x00000004,DAT_00011000,DAT_00010ff8,param_1);
  return;
}



/* ===== FUN_00011004 @ 00011004 size=32 ===== */

void FUN_00011004(void)

{
  if (DAT_00011028 == DAT_00011024) {
    return;
  }
  if (DAT_0001102c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001102c)();
  return;
}



/* ===== _FINI_0 @ 00011068 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000110a4;
  if (*DAT_000110a4 != '\0') {
    return;
  }
  FUN_00011004();
  if (DAT_000110a8 != 0) {
    __deregister_frame_info(DAT_000110ac);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000110b0 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000110d4 != 0) {
    __register_frame_info(DAT_000110dc,DAT_000110d8);
  }
  if ((DAT_00011060 - DAT_0001105c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011064 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011064)();
  return;
}



/* ===== FUN_00011114 @ 00011114 size=104 ===== */

undefined4 FUN_00011114(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  
  local_c = param_4;
  printf(DAT_00011180,DAT_0001117c,param_3,param_4,param_1,param_2,param_3);
  RK_MPI_AI_SetVolume(0,param_1);
  RK_MPI_AI_SetTrackMode(0,8);
  RK_MPI_AI_GetTrackMode(0,&local_c);
  RK_LOG(4,DAT_00011188,DAT_00011184,DAT_0001118c,0x5c,local_c);
  return 0;
}



/* ===== FUN_00011190 @ 00011190 size=448 ===== */

undefined4 FUN_00011190(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  printf(DAT_00011350,DAT_00011354);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_60[0] = '\0';
  local_60[1] = '\0';
  local_60[2] = '\0';
  local_60[3] = '\0';
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_4c = uStack_5c;
  uStack_44 = uStack_5c;
  uStack_3c = uStack_5c;
  uStack_34 = uStack_5c;
  uStack_2c = uStack_5c;
  uStack_24 = uStack_5c;
  strcpy(local_60,DAT_00011358);
  local_88 = 2;
  local_80 = 1;
  local_78 = 1;
  local_74 = 0;
  local_6c = 4;
  local_70 = 0;
  local_64 = 2;
  local_84 = param_1;
  local_7c = param_2;
  local_68 = param_3;
  iVar1 = RK_MPI_AI_SetPubAttr(0,&local_88);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AI_Enable();
    if (iVar1 == 0) {
      local_90 = 1;
      local_8c = iVar1;
      iVar2 = RK_MPI_AI_SetChnParam(0,0,&local_90);
      if (iVar2 == 0) {
        iVar1 = RK_MPI_AI_EnableChn(0,0);
        if (iVar1 != 0) {
          uVar4 = 0x97;
          iVar2 = 0;
          uVar3 = DAT_00011370;
LAB_000112d8:
          RK_LOG(2,DAT_00011364,uVar3,DAT_00011360,uVar4,iVar2,iVar1);
          return 0xffffffff;
        }
        if (param_1 != param_2) {
          RK_LOG(4,DAT_00011364,DAT_00011374,DAT_00011360,0x9c,param_1,param_2);
          iVar2 = RK_MPI_AI_EnableReSmp(0,0,param_2);
          if (iVar2 != 0) {
            uVar4 = 0xa0;
            uVar3 = DAT_00011378;
            goto LAB_000112d8;
          }
        }
        FUN_00011114(100);
        return 0;
      }
      uVar4 = 0x8f;
      uVar3 = DAT_0001136c;
    }
    else {
      uVar4 = 0x86;
      uVar3 = DAT_00011368;
    }
  }
  else {
    uVar4 = 0x80;
    uVar3 = DAT_0001135c;
  }
  RK_LOG(2,DAT_00011364,uVar3,DAT_00011360,uVar4,iVar1);
  return 0xffffffff;
}



/* ===== FUN_0001137c @ 0001137c size=172 ===== */

int FUN_0001137c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  printf(DAT_0001142c,DAT_00011428);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar2 = *DAT_00011430;
  local_3c = 0;
  local_1c = 0;
  local_2c = 0;
  local_24 = 0;
  uStack_18 = 0;
  uStack_28 = uStack_38;
  uStack_20 = uStack_38;
  local_14 = uStack_38;
  printf(DAT_00011434,uVar2);
  local_2c = 1;
  local_30 = 1;
  local_14 = 0;
  uStack_38 = 4;
  local_3c = uVar2;
  local_34 = uVar2;
  uStack_28 = param_1;
  iVar1 = RK_MPI_AENC_CreateChn(0,&local_3c);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00011440,DAT_0001143c,DAT_00011438,0xc3,uVar2,iVar1);
  }
  return iVar1;
}



/* ===== _fini @ 00011444 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_AI_Disable @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_Disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_ReleaseStream @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_GetStream @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_GetStream(void)

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



/* ===== <EXTERNAL>::RK_MPI_AENC_DestroyChn @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetChnParam @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetChnParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetTrackMode @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetTrackMode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableChn @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableChn @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetPubAttr @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetPubAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetVolume @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetVolume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetTrackMode @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetTrackMode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_Enable @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_Enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_CreateChn @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableReSmp @ 00023088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00023090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


