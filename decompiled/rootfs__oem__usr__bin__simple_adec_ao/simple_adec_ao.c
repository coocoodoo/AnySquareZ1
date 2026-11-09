// simple_adec_ao — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010ba4 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010bc8 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002200c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00010bd4 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00022010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010be0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetTrackMode @ 00010bec size=12 ===== */

void RK_MPI_AO_GetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AO_GetTrackMode_00022018)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00010bf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002201c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetChnParams @ 00010c04 size=12 ===== */

void RK_MPI_AO_SetChnParams(void)

{
  (*(code *)PTR_RK_MPI_AO_SetChnParams_00022020)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableChn @ 00010c10 size=12 ===== */

void RK_MPI_AO_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AO_EnableChn_00022024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableReSmp @ 00010c1c size=12 ===== */

void RK_MPI_AO_EnableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AO_EnableReSmp_00022028)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010c34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00022030)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendStream @ 00010c40 size=12 ===== */

void RK_MPI_ADEC_SendStream(void)

{
  (*(code *)PTR_RK_MPI_ADEC_SendStream_00022034)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_WaitEos @ 00010c4c size=12 ===== */

void RK_MPI_AO_WaitEos(void)

{
  (*(code *)PTR_RK_MPI_AO_WaitEos_00022038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00010c58 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0002203c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_Disable @ 00010c64 size=12 ===== */

void RK_MPI_AO_Disable(void)

{
  (*(code *)PTR_RK_MPI_AO_Disable_00022040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010c70 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00022044)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010c7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00022048)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00010c88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002204c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetTrackMode @ 00010c94 size=12 ===== */

void RK_MPI_AO_SetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AO_SetTrackMode_00022050)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010ca0 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00022054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetVolume @ 00010cac size=12 ===== */

void RK_MPI_AO_SetVolume(void)

{
  (*(code *)PTR_RK_MPI_AO_SetVolume_00022058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendEndOfStream @ 00010cb8 size=12 ===== */

void RK_MPI_ADEC_SendEndOfStream(void)

{
  (*(code *)PTR_RK_MPI_ADEC_SendEndOfStream_0002205c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_CreateChn @ 00010cc4 size=12 ===== */

void RK_MPI_ADEC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_ADEC_CreateChn_00022060)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableChn @ 00010cd0 size=12 ===== */

void RK_MPI_AO_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AO_DisableChn_00022064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_Enable @ 00010cdc size=12 ===== */

void RK_MPI_AO_Enable(void)

{
  (*(code *)PTR_RK_MPI_AO_Enable_00022068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00010ce8 size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_0002206c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableReSmp @ 00010cf4 size=12 ===== */

void RK_MPI_AO_DisableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AO_DisableReSmp_00022070)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010d00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022074)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010d0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022078)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_DestroyChn @ 00010d18 size=12 ===== */

void RK_MPI_ADEC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_ADEC_DestroyChn_0002207c)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00010d24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00022080)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00010d30 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_00022084)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010d3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00022088)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 00010d48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0002208c)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010d54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022090)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010d60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00022094)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetPubAttr @ 00010d6c size=12 ===== */

void RK_MPI_AO_SetPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AO_SetPubAttr_00022098)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00010d78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002209c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AO_GetVolume @ 00010d84 size=12 ===== */

void RK_MPI_AO_GetVolume(void)

{
  (*(code *)PTR_RK_MPI_AO_GetVolume_000220a0)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010d90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000220a4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010d9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000220a8)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00010da8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000220ac)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010db4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000220b0)();
  return;
}



/* ===== FUN_00010dc0 @ 00010dc0 size=952 ===== */

undefined4 FUN_00010dc0(int param_1,char **param_2)

{
  char *__shortopts;
  undefined4 *puVar1;
  char *__s2;
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
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  size_t local_64;
  uint local_60;
  int iStack_5c;
  int local_58;
  undefined4 local_54;
  void *local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  size_t local_38;
  int iStack_34;
  undefined4 local_30;
  void *local_2c;
  
  __s2 = DAT_00011188;
  puVar1 = DAT_00011184;
  __shortopts = DAT_00011180;
  iVar9 = 16000;
  __filename = DAT_0001117c;
  pcVar8 = DAT_00011178;
  while (iVar5 = getopt(param_1,param_2,__shortopts), iVar5 != -1) {
    if (iVar5 == 0x72) {
      iVar9 = atoi((char *)*puVar1);
    }
    else if (iVar5 == 0x74) {
      pcVar10 = (char *)*puVar1;
      iVar5 = strcmp(pcVar10,__s2);
      if (iVar5 == 0) {
        *DAT_000111a8 = 0x40000002;
        pcVar8 = __s2;
      }
      else {
        iVar5 = strcmp(pcVar10,DAT_000111ac);
        pcVar8 = DAT_000111ac;
        if (iVar5 == 0) {
          *DAT_000111a8 = 0x40000003;
        }
        else {
          iVar5 = strcmp(pcVar10,DAT_00011178);
          pcVar8 = DAT_00011178;
          pcVar10 = DAT_000111b0;
          if (iVar5 != 0) goto LAB_00010f18;
          *DAT_000111a8 = 0x40000008;
        }
      }
    }
    else {
      if (iVar5 != 0x69) {
        pcVar8 = *param_2;
        puts(DAT_000111b4);
        printf(DAT_000111b8,pcVar8);
        puts(DAT_000111bc);
        puts(DAT_000111c0);
        pcVar10 = DAT_000111c4;
LAB_00010f18:
        puts(pcVar10);
        return 0;
      }
      __filename = (char *)*puVar1;
    }
  }
  printf(DAT_0001118c,iVar9);
  printf(DAT_00011190,0x400);
  printf(DAT_00011194,pcVar8);
  printf(DAT_00011198,__filename);
  if (__filename != (char *)0x0) {
    pFVar6 = fopen64(__filename,DAT_0001119c);
    *DAT_000111a0 = pFVar6;
    if (pFVar6 == (FILE *)0x0) {
      printf(DAT_000111a4,__filename);
      return 0;
    }
  }
  signal(2,DAT_000111c8);
  RK_MPI_SYS_Init();
  FUN_0001141c(iVar9,0x400);
  FUN_00011598(iVar9);
  local_74 = 0xb;
  local_80 = 0xd;
  local_7c = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  iVar9 = RK_MPI_SYS_Bind(&local_80,&local_74);
  if (iVar9 != 0) {
    printf(DAT_000111cc);
    return 0xffffffff;
  }
  uVar11 = 0;
  iVar9 = 0;
  printf(DAT_000111d4,DAT_000111d0);
  uVar2 = DAT_000111d8;
  puVar1 = DAT_000111a0;
  do {
    pcVar8 = DAT_000111dc;
    pFVar6 = (FILE *)*puVar1;
    if (*DAT_000111dc != '\0') {
LAB_00011070:
      if ((FILE *)*puVar1 != (FILE *)0x0) {
        fclose((FILE *)*puVar1);
        *puVar1 = 0;
      }
      RK_MPI_SYS_UnBind(&local_80,&local_74);
      RK_MPI_AO_DisableReSmp(0);
      RK_MPI_AO_DisableChn(0);
      RK_MPI_AO_Disable(0);
      RK_MPI_ADEC_DestroyChn(0);
      RK_MPI_SYS_Exit();
      return 0;
    }
    __s = calloc(0x400,1);
    memset(__s,0,0x400);
    sVar7 = fread(__s,1,0x400,pFVar6);
    if (sVar7 == 0) {
      RK_LOG(4,DAT_000111d8,DAT_000111e0,DAT_000111e4,0xe8);
      RK_MPI_ADEC_SendEndOfStream(0,0);
      free(__s);
      if (*pcVar8 == '\0') {
        RK_MPI_AO_WaitEos(0,0,0xffffffff);
      }
      goto LAB_00011070;
    }
    uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_58 = uVar11 + 1;
    local_54 = 1;
    iStack_34 = (int)sVar7 >> 0x1f;
    local_4c = 0;
    local_40 = 0;
    local_30 = DAT_000111e8;
    local_64 = sVar7;
    local_60 = uVar11;
    iStack_5c = iVar9;
    local_50 = __s;
    uStack_3c = uStack_48;
    local_38 = sVar7;
    local_2c = __s;
    RK_MPI_SYS_CreateMB(&local_68,&local_50);
    uVar4 = DAT_000111ec;
    uVar3 = DAT_000111e4;
    while (iVar5 = RK_MPI_ADEC_SendStream(0,&local_68,1), iVar5 != 0) {
      RK_LOG(2,uVar2,uVar4,uVar3,0xff);
    }
    RK_MPI_MB_ReleaseMB(local_68);
    bVar12 = 0xfffffffe < uVar11;
    uVar11 = uVar11 + 1;
    iVar9 = iVar9 + (uint)bVar12;
  } while( true );
}



/* ===== entry @ 000111f0 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002202c)
            (DAT_00011224,param_2,&stack0x00000004,DAT_00011228,DAT_00011220,param_1);
  return;
}



/* ===== FUN_0001122c @ 0001122c size=32 ===== */

void FUN_0001122c(void)

{
  if (DAT_00011250 == DAT_0001124c) {
    return;
  }
  if (DAT_00011254 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011254)();
  return;
}



/* ===== _FINI_0 @ 00011290 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000112cc;
  if (*DAT_000112cc != '\0') {
    return;
  }
  FUN_0001122c();
  if (DAT_000112d0 != 0) {
    __deregister_frame_info(DAT_000112d4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000112d8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000112fc != 0) {
    __register_frame_info(DAT_00011304,DAT_00011300);
  }
  if ((DAT_00011288 - DAT_00011284 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001128c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001128c)();
  return;
}



/* ===== FUN_0001135c @ 0001135c size=168 ===== */

undefined4 FUN_0001135c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  printf(DAT_00011408,DAT_00011404,param_3,param_4,param_1,param_2);
  local_18 = 0;
  RK_MPI_AO_SetVolume(0,param_1);
  uVar1 = DAT_0001140c;
  RK_MPI_AO_GetVolume(0,&local_18);
  uVar2 = DAT_00011410;
  RK_LOG(4,DAT_00011410,DAT_00011414,uVar1,0x24,local_18);
  RK_MPI_AO_SetTrackMode(0,10);
  RK_MPI_AO_GetTrackMode(0,&local_14);
  RK_LOG(4,uVar2,DAT_00011418,uVar1,0x2a,local_14);
  return 0;
}



/* ===== FUN_0001141c @ 0001141c size=348 ===== */

undefined4 FUN_0001141c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
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
  
  printf(DAT_00011578,DAT_0001157c);
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
  strcpy(local_58,DAT_00011580);
  local_80 = 2;
  local_7c = 48000;
  uStack_78 = 1;
  local_70 = 1;
  local_64 = 4;
  local_6c = 0;
  local_68 = 0;
  local_5c = 2;
  local_74 = param_1;
  local_60 = param_2;
  RK_MPI_AO_SetPubAttr(0,&local_80);
  RK_MPI_AO_Enable(0);
  local_88 = local_88 & 0xffffffff;
  iVar1 = RK_MPI_AO_SetChnParams(0,0,&local_88);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AO_EnableChn(0,0);
    if (iVar1 == 0) {
      iVar2 = RK_MPI_AO_EnableReSmp(0,0,param_1);
      if (iVar2 == 0) {
        FUN_0001135c(100);
        return 0;
      }
      uVar4 = 0x5d;
      uVar3 = DAT_00011594;
    }
    else {
      uVar4 = 0x56;
      iVar2 = 0;
      uVar3 = DAT_00011590;
    }
    RK_LOG(2,DAT_0001158c,uVar3,DAT_00011584,uVar4,iVar2,iVar1);
  }
  else {
    RK_LOG(2,DAT_0001158c,DAT_00011588,DAT_00011584,0x50,0);
  }
  return 0xffffffff;
}



/* ===== FUN_00011598 @ 00011598 size=160 ===== */

undefined4 FUN_00011598(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  printf(DAT_0001163c,DAT_00011638);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_24 = 0;
  local_30 = 1;
  local_18 = 0;
  local_44 = *DAT_00011640;
  local_28 = 4;
  local_40 = 1;
  uStack_3c = 4;
  local_38 = 0xc800;
  local_34 = local_44;
  local_2c = param_1;
  uStack_14 = uStack_20;
  uStack_10 = uStack_1c;
  iVar1 = RK_MPI_ADEC_CreateChn(0,&local_44);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,DAT_0001164c,DAT_00011648,DAT_00011644,0x78,0,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== _fini @ 00011650 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetChnParams @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetChnParams(void)

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



/* ===== <EXTERNAL>::fread @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableChn @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

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



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendStream @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_SendStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_SetPubAttr @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetPubAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

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



/* ===== <EXTERNAL>::RK_MPI_AO_SetVolume @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_SetVolume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_CreateChn @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_DestroyChn @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00023088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_ADEC_SendEndOfStream @ 0002308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_ADEC_SendEndOfStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00023090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00023094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_EnableReSmp @ 00023098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_EnableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_Enable @ 0002309c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_Enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000230a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_Disable @ 000230a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_Disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AO_DisableReSmp @ 000230a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AO_DisableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000230ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


