// simple_ai — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010b68 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010b8c size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002200c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010b98 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022010)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010ba4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00022014)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::usleep @ 00010bb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00022018)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_ReleaseFrame @ 00010bbc size=12 ===== */

void RK_MPI_AI_ReleaseFrame(void)

{
  (*(code *)PTR_RK_MPI_AI_ReleaseFrame_0002201c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetTrackMode @ 00010bc8 size=12 ===== */

void RK_MPI_AI_GetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AI_GetTrackMode_00022020)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableChn @ 00010bd4 size=12 ===== */

void RK_MPI_AI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableChn_00022024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetFrame @ 00010be0 size=12 ===== */

void RK_MPI_AI_GetFrame(void)

{
  (*(code *)PTR_RK_MPI_AI_GetFrame_00022028)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010bf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00022030)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableVqe @ 00010c04 size=12 ===== */

void RK_MPI_AI_DisableVqe(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableVqe_00022034)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetVolume @ 00010c10 size=12 ===== */

void RK_MPI_AI_SetVolume(void)

{
  (*(code *)PTR_RK_MPI_AI_SetVolume_00022038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetChnParam @ 00010c1c size=12 ===== */

void RK_MPI_AI_SetChnParam(void)

{
  (*(code *)PTR_RK_MPI_AI_SetChnParam_0002203c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableChn @ 00010c28 size=12 ===== */

void RK_MPI_AI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableChn_00022040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetVqeAttr @ 00010c34 size=12 ===== */

void RK_MPI_AI_SetVqeAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_SetVqeAttr_00022044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010c40 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00022048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_Enable @ 00010c4c size=12 ===== */

void RK_MPI_AI_Enable(void)

{
  (*(code *)PTR_RK_MPI_AI_Enable_0002204c)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010c58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00022050)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AMIX_SetControl @ 00010c64 size=12 ===== */

void RK_MPI_AMIX_SetControl(void)

{
  (*(code *)PTR_RK_MPI_AMIX_SetControl_00022054)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010c70 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00022058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableVqe @ 00010c7c size=12 ===== */

void RK_MPI_AI_EnableVqe(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableVqe_0002205c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetTrackMode @ 00010c88 size=12 ===== */

void RK_MPI_AI_SetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AI_SetTrackMode_00022060)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010c94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00022064)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetVqeAttr @ 00010ca0 size=12 ===== */

void RK_MPI_AI_GetVqeAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_GetVqeAttr_00022068)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010cac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002206c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010cb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022070)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableReSmp @ 00010cc4 size=12 ===== */

void RK_MPI_AI_EnableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableReSmp_00022074)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010cd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022078)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010cdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002207c)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 00010ce8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00022080)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetPubAttr @ 00010cf4 size=12 ===== */

void RK_MPI_AI_SetPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_SetPubAttr_00022084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010d00 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00022088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_Disable @ 00010d0c size=12 ===== */

void RK_MPI_AI_Disable(void)

{
  (*(code *)PTR_RK_MPI_AI_Disable_0002208c)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 00010d18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00022090)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::atoi @ 00010d24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00022094)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010d30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022098)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00010d3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002209c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010d48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000220a0)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00010d54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000220a4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010d60 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000220a8)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010d6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000220ac)(__th);
  return iVar1;
}



/* ===== FUN_00010d78 @ 00010d78 size=448 ===== */

undefined4 FUN_00010d78(int param_1,char **param_2,undefined4 param_3,pthread_t param_4)

{
  undefined4 *puVar1;
  __useconds_t __useconds;
  int iVar2;
  FILE *pFVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *__filename;
  int iVar6;
  pthread_t local_24;
  
  puVar1 = DAT_00010f40;
  pcVar4 = DAT_00010f3c;
  iVar6 = 16000;
  __filename = DAT_00010f38;
  local_24 = param_4;
  while (iVar2 = getopt(param_1,param_2,pcVar4), iVar2 != -1) {
    if (iVar2 == 0x6f) {
      __filename = (char *)*puVar1;
    }
    else {
      if (iVar2 != 0x72) {
        pcVar4 = *param_2;
        puts(DAT_00010f5c);
        printf(DAT_00010f60,pcVar4);
        puts(DAT_00010f64);
        puts(DAT_00010f68);
        return 0;
      }
      iVar6 = atoi((char *)*puVar1);
    }
  }
  printf(DAT_00010f44,iVar6);
  printf(DAT_00010f48,0x400);
  printf(DAT_00010f4c,__filename);
  if (__filename != (char *)0x0) {
    pFVar3 = fopen64(__filename,DAT_00010f50);
    *DAT_00010f54 = pFVar3;
    if (pFVar3 == (FILE *)0x0) {
      printf(DAT_00010f58,__filename);
      return 0;
    }
  }
  signal(2,DAT_00010f6c);
  pcVar4 = DAT_00010f70;
  RK_MPI_SYS_Init();
  FUN_000113d8(iVar6,iVar6,0x400);
  __useconds = DAT_00010f78;
  pthread_create(&local_24,(pthread_attr_t *)0x0,DAT_00010f74,(void *)0x0);
  printf(DAT_00010f80,DAT_00010f7c);
  while (*pcVar4 == '\0') {
    usleep(__useconds);
  }
  pthread_join(local_24,(void **)0x0);
  RK_MPI_AI_DisableVqe(0);
  iVar6 = RK_MPI_AMIX_SetControl(0,DAT_00010f88,DAT_00010f84);
  if (iVar6 == 0) {
    RK_MPI_AI_DisableChn(0,0);
    RK_MPI_AI_Disable(0);
    RK_MPI_SYS_Exit();
    uVar5 = 0;
  }
  else {
    RK_LOG(2,DAT_00010f94,DAT_00010f90,DAT_00010f8c,0x11e,iVar6);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ===== entry @ 00010f98 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002202c)
            (DAT_00010fcc,param_2,&stack0x00000004,DAT_00010fd0,DAT_00010fc8,param_1);
  return;
}



/* ===== FUN_00010fd4 @ 00010fd4 size=32 ===== */

void FUN_00010fd4(void)

{
  if (DAT_00010ff8 == DAT_00010ff4) {
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



/* ===== _FINI_0 @ 00011038 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011074;
  if (*DAT_00011074 != '\0') {
    return;
  }
  FUN_00010fd4();
  if (DAT_00011078 != 0) {
    __deregister_frame_info(DAT_0001107c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011080 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000110a4 != 0) {
    __register_frame_info(DAT_000110ac,DAT_000110a8);
  }
  if ((DAT_00011030 - DAT_0001102c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011034 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011034)();
  return;
}



/* ===== FUN_000110b0 @ 000110b0 size=208 ===== */

undefined4 FUN_000110b0(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  size_t __size;
  int iVar5;
  void *__ptr;
  FILE *__s;
  undefined4 local_48 [7];
  size_t local_2c;
  
  uVar3 = DAT_00011188;
  uVar2 = DAT_00011184;
  pcVar1 = DAT_00011180;
  while (*pcVar1 == '\0') {
    iVar5 = RK_MPI_AI_GetFrame(0,0,local_48,0,0xffffffff);
    if (iVar5 == 0) {
      __ptr = (void *)RK_MPI_MB_Handle2VirAddr(local_48[0]);
      __size = local_2c;
      puVar4 = DAT_0001118c;
      RK_LOG(4,uVar3,DAT_00011190,uVar2,0x2c,__ptr,local_2c);
      __s = (FILE *)*puVar4;
      if (__s != (FILE *)0x0) {
        fwrite(__ptr,__size,1,__s);
        fflush((FILE *)*puVar4);
      }
      RK_MPI_AI_ReleaseFrame(0,0,local_48);
    }
  }
  if ((FILE *)*DAT_0001118c != (FILE *)0x0) {
    fclose((FILE *)*DAT_0001118c);
  }
  return 0;
}



/* ===== FUN_000111c8 @ 000111c8 size=376 ===== */

int FUN_000111c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_228;
  int local_224;
  int local_220;
  undefined4 local_21c [2];
  undefined1 auStack_214 [248];
  undefined1 auStack_11c [272];
  
  memset(&local_228,0,0x10c);
  local_228 = 2;
  puVar3 = local_21c;
  puVar5 = DAT_00011340;
  do {
    puVar6 = puVar5 + 2;
    uVar2 = puVar5[1];
    *puVar3 = *puVar5;
    puVar3[1] = uVar2;
    puVar3 = puVar3 + 2;
    puVar5 = puVar6;
  } while (puVar6 != DAT_00011340 + 10);
  *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
  local_220 = (int)((longlong)(param_1 << 4) * (longlong)DAT_00011344 >> 0x26) -
              ((param_1 << 4) >> 0x1f);
  local_224 = param_1;
  iVar1 = RK_MPI_AI_SetVqeAttr(0,0,0,0,&local_228);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AI_GetVqeAttr(0,0,auStack_11c);
    if (iVar1 == 0) {
      iVar1 = memcmp(&local_228,auStack_11c,0x10c);
      if (iVar1 != 0) {
        RK_LOG(2,DAT_00011350,DAT_00011354,DAT_00011348,0x62,DAT_00011348,iVar1);
        return iVar1;
      }
      iVar1 = RK_MPI_AI_EnableVqe(0,0);
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = 0x69;
      uVar2 = DAT_00011358;
    }
    else {
      uVar4 = 0x5c;
      uVar2 = DAT_0001134c;
    }
  }
  else {
    uVar4 = 0x55;
    uVar2 = DAT_0001134c;
  }
  RK_LOG(2,DAT_00011350,uVar2,DAT_00011348,uVar4,DAT_00011348,0,0,iVar1);
  return iVar1;
}



/* ===== FUN_0001135c @ 0001135c size=104 ===== */

undefined4 FUN_0001135c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  
  local_c = param_4;
  printf(DAT_000113c8,DAT_000113c4,param_3,param_4,param_1,param_2,param_3);
  RK_MPI_AI_SetVolume(0,param_1);
  RK_MPI_AI_SetTrackMode(0);
  RK_MPI_AI_GetTrackMode(0,&local_c);
  RK_LOG(4,DAT_000113d0,DAT_000113cc,DAT_000113d4,0x7a,local_c);
  return 0;
}



/* ===== FUN_000113d8 @ 000113d8 size=592 ===== */

undefined4 FUN_000113d8(int param_1,int param_2,undefined4 param_3)

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
  
  printf(DAT_00011628,DAT_0001162c);
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
  strcpy(local_60,DAT_00011630);
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
    iVar1 = RK_MPI_AMIX_SetControl(0,DAT_00011644,DAT_00011640);
    if (iVar1 == 0) {
      iVar1 = RK_MPI_AMIX_SetControl(0,DAT_00011650,DAT_0001164c);
      if (iVar1 == 0) {
        iVar1 = RK_MPI_AMIX_SetControl(0,DAT_00011658,DAT_0001164c);
        if (iVar1 == 0) {
          iVar1 = RK_MPI_AI_Enable();
          if (iVar1 == 0) {
            local_90 = 4;
            local_8c = iVar1;
            iVar2 = RK_MPI_AI_SetChnParam(0,0,&local_90);
            if (iVar2 == 0) {
              FUN_000111c8(param_2);
              iVar1 = RK_MPI_AI_EnableChn(0,0);
              if (iVar1 != 0) {
                uVar4 = 0xc9;
                iVar2 = 0;
                uVar3 = DAT_00011668;
LAB_000115b0:
                RK_LOG(2,DAT_0001163c,uVar3,DAT_00011638,uVar4,iVar2,iVar1);
                return 0xffffffff;
              }
              if (param_1 != param_2) {
                RK_LOG(4,DAT_0001163c,DAT_0001166c,DAT_00011638,0xcf,param_1,param_2);
                iVar2 = RK_MPI_AI_EnableReSmp(0,0,param_2);
                if (iVar2 != 0) {
                  uVar4 = 0xd3;
                  uVar3 = DAT_00011670;
                  goto LAB_000115b0;
                }
              }
              FUN_0001135c(100);
              return 0;
            }
            uVar4 = 0xc0;
            uVar3 = DAT_00011664;
          }
          else {
            uVar4 = 0xb7;
            uVar3 = DAT_00011660;
          }
        }
        else {
          uVar4 = 0xb1;
          uVar3 = DAT_0001165c;
        }
      }
      else {
        uVar4 = 0xab;
        uVar3 = DAT_00011654;
      }
    }
    else {
      uVar4 = 0xa5;
      uVar3 = DAT_00011648;
    }
  }
  else {
    uVar4 = 0x9e;
    uVar3 = DAT_00011634;
  }
  RK_LOG(2,DAT_0001163c,uVar3,DAT_00011638,uVar4,iVar1);
  return 0xffffffff;
}



/* ===== _fini @ 00011674 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_AI_SetVqeAttr @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetVqeAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_Disable @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_Disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

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



/* ===== <EXTERNAL>::RK_MPI_AI_GetVqeAttr @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetVqeAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AMIX_SetControl @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AMIX_SetControl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetChnParam @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetChnParam(void)

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



/* ===== <EXTERNAL>::RK_MPI_AI_ReleaseFrame @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_ReleaseFrame(void)

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



/* ===== <EXTERNAL>::RK_MPI_AI_EnableChn @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableVqe @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableVqe(void)

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



/* ===== <EXTERNAL>::usleep @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableChn @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableVqe @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableVqe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetFrame @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetPubAttr @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetPubAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetVolume @ 00023088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetVolume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0002308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00023090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetTrackMode @ 00023094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetTrackMode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_Enable @ 00023098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_Enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableReSmp @ 0002309c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000230a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000230a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000230a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


