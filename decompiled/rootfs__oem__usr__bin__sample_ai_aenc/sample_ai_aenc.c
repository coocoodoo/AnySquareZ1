// sample_ai_aenc — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010be0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010c04 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002300c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00010c10 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00023010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010c1c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023014)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010c28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023018)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::system @ 00010c34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0002301c)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::usleep @ 00010c40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00023020)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_ReleaseFrame @ 00010c4c size=12 ===== */

void RK_MPI_AI_ReleaseFrame(void)

{
  (*(code *)PTR_RK_MPI_AI_ReleaseFrame_00023024)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010c64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002302c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableChn @ 00010c70 size=12 ===== */

void RK_MPI_AI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableChn_00023030)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetFrame @ 00010c7c size=12 ===== */

void RK_MPI_AI_GetFrame(void)

{
  (*(code *)PTR_RK_MPI_AI_GetFrame_00023034)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010c94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002303c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010ca0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00023040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableChn @ 00010cac size=12 ===== */

void RK_MPI_AI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableChn_00023044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00010cb8 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00023048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_CreateChn @ 00010cc4 size=12 ===== */

void RK_MPI_AENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_AENC_CreateChn_0002304c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010cd0 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00023050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_Enable @ 00010cdc size=12 ===== */

void RK_MPI_AI_Enable(void)

{
  (*(code *)PTR_RK_MPI_AI_Enable_00023054)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010ce8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00023058)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00010cf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002305c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_GetStream @ 00010d00 size=12 ===== */

void RK_MPI_AENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_AENC_GetStream_00023060)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010d0c size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00023064)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010d18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00023068)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_DestroyChn @ 00010d24 size=12 ===== */

void RK_MPI_AENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_AENC_DestroyChn_0002306c)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00010d30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023070)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010d3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023074)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableReSmp @ 00010d48 size=12 ===== */

void RK_MPI_AI_EnableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableReSmp_00023078)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010d54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002307c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010d60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023080)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00010d78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00023088)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetPubAttr @ 00010d84 size=12 ===== */

void RK_MPI_AI_SetPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_SetPubAttr_0002308c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_ReleaseStream @ 00010d90 size=12 ===== */

void RK_MPI_AENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_AENC_ReleaseStream_00023090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010d9c size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00023094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_Disable @ 00010da8 size=12 ===== */

void RK_MPI_AI_Disable(void)

{
  (*(code *)PTR_RK_MPI_AI_Disable_00023098)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010db4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002309c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 00010dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_000230a0)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::atoi @ 00010dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000230a4)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000230a8)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00010de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000230ac)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableReSmp @ 00010df0 size=12 ===== */

void RK_MPI_AI_DisableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableReSmp_000230b0)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00010dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000230b4)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00010e08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000230b8)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010e14 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000230bc)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010e20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000230c0)(__th);
  return iVar1;
}



/* ===== FUN_00010e30 @ 00010e30 size=1068 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00010e30(int param_1,char **param_2)

{
  undefined4 *puVar1;
  __useconds_t __useconds;
  void *__s;
  int iVar2;
  void *__arg;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int local_5c;
  int local_54;
  int local_50;
  pthread_t local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar1 = DAT_0001125c;
  if (param_1 < 2) {
LAB_00010f00:
    FUN_0001163c(*param_2);
  }
  else {
    __s = malloc(0x100);
    uVar7 = 0;
    pcVar9 = (char *)0x0;
    iVar8 = 8000;
    uVar4 = 1;
    iVar3 = 2;
    memset(__s,0,0x100);
    signal(2,DAT_00011260);
    local_50 = 2;
    local_5c = -1;
    local_54 = 16000;
    while (iVar2 = getopt(param_1,param_2,DAT_00011264), iVar2 != -1) {
      if (iVar2 == 0x65) {
        pcVar6 = (char *)*puVar1;
        iVar2 = strcmp(pcVar6,DAT_0001127c);
        uVar5 = DAT_00011284;
        if (iVar2 == 0) goto LAB_00011014;
        iVar2 = strcmp(pcVar6,DAT_00011288);
        if (iVar2 == 0) {
          uVar5 = 0x4000001b;
          goto LAB_00011014;
        }
        iVar2 = strcmp(pcVar6,DAT_0001128c);
        if (iVar2 == 0) {
          uVar5 = 0x40000008;
          goto LAB_00011014;
        }
        iVar2 = strcmp(pcVar6,DAT_00011290);
        if (iVar2 == 0) {
          uVar5 = 0x40000002;
          goto LAB_00011014;
        }
        iVar2 = strcmp(pcVar6,DAT_00011294);
        if (iVar2 == 0) {
          uVar5 = 0x40000003;
LAB_00011014:
          *DAT_00011280 = uVar5;
        }
      }
      else if (iVar2 < 0x66) {
        if (iVar2 == 0x52) {
          local_54 = atoi((char *)*puVar1);
        }
        else if (iVar2 < 0x53) {
          if (iVar2 != 0x43) goto LAB_00010f00;
          local_50 = atoi((char *)*puVar1);
        }
        else if (iVar2 == 99) {
          iVar3 = atoi((char *)*puVar1);
        }
        else {
          if (iVar2 != 100) goto LAB_00010f00;
          pcVar9 = (char *)*puVar1;
        }
      }
      else if (iVar2 == 0x6f) {
        uVar7 = *puVar1;
      }
      else if (iVar2 < 0x70) {
        if (iVar2 != 0x6c) goto LAB_00010f00;
        local_5c = atoi((char *)*puVar1);
      }
      else if (iVar2 == 0x72) {
        iVar8 = atoi((char *)*puVar1);
      }
      else {
        if (iVar2 != 0x77) goto LAB_00010f00;
        pcVar6 = (char *)*puVar1;
        iVar2 = strcmp(pcVar6,DAT_00011270);
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        else {
          iVar2 = strcmp(pcVar6,DAT_00011274);
          if (iVar2 == 0) {
            uVar4 = 1;
          }
          else {
            iVar2 = strcmp(pcVar6,DAT_00011278);
            if (iVar2 == 0) {
              uVar4 = 2;
            }
          }
        }
      }
    }
    if (iVar3 == 1) {
      uVar5 = 0;
    }
    else {
      if (iVar3 != 2) {
        printf(DAT_0001126c,DAT_00011268,iVar3);
        return 0;
      }
      uVar5 = 1;
    }
    printf(DAT_00011298,pcVar9);
    printf(DAT_0001129c,iVar8);
    puVar1 = DAT_00011280;
    printf(DAT_000112a0,iVar3);
    printf(DAT_000112a4,local_5c);
    printf(DAT_000112a8,uVar7);
    printf(DAT_000112ac,*puVar1);
    RK_MPI_SYS_Init();
    *(int *)((int)__s + 0x14) = local_50;
    *(undefined4 *)((int)__s + 8) = 0;
    *(undefined4 *)((int)__s + 0xc) = 0;
    *(int *)((int)__s + 0x18) = local_54;
    *(undefined4 *)((int)__s + 0x1c) = uVar4;
    *(undefined4 *)((int)__s + 0x24) = uVar4;
    *(int *)((int)__s + 0x20) = iVar8;
    *(undefined4 *)((int)__s + 0x28) = uVar5;
    *(undefined4 *)((int)__s + 0x30) = 4;
    *(undefined4 *)((int)__s + 0x34) = 0x400;
    *(undefined4 *)((int)__s + 0x2c) = 0;
    *(int *)((int)__s + 0x38) = iVar3;
    if (pcVar9 != (char *)0x0) {
      strcpy((char *)((int)__s + 0x3c),pcVar9);
    }
    FUN_00011828(__s);
    *(int *)((int)__s + 0xe0) = iVar3;
    *(undefined4 *)((int)__s + 0xdc) = uVar4;
    *(int *)((int)__s + 0xa8) = local_5c;
    uVar4 = *puVar1;
    __arg = (void *)((int)__s + 0xa8);
    *(undefined4 *)((int)__s + 0xb0) = 0;
    *(int *)((int)__s + 0xe4) = iVar8;
    *(undefined4 *)((int)__s + 0xd0) = uVar4;
    *(undefined4 *)((int)__s + 0xac) = uVar7;
    *(undefined4 *)((int)__s + 0xd4) = 4;
    FUN_000116d0(__arg);
    __useconds = DAT_000112b4;
    pcVar9 = DAT_000112b0;
    local_44[1] = 10;
    local_44[2] = *(undefined4 *)((int)__s + 8);
    local_30 = 0;
    local_38 = *(undefined4 *)((int)__s + 0xc);
    local_34 = 0xc;
    local_2c = *(undefined4 *)((int)__s + 0xb0);
    FUN_00011c14(local_44 + 1,&local_34);
    pthread_create(local_44,(pthread_attr_t *)0x0,DAT_000112b8,__arg);
    printf(DAT_000112bc,DAT_00011268);
    while (*pcVar9 == '\0') {
      usleep(__useconds);
    }
    printf(DAT_000112c0,DAT_00011268);
    pthread_join(local_44[0],(void **)0x0);
    local_44[1] = 10;
    local_44[2] = *(undefined4 *)((int)__s + 8);
    local_34 = 0xc;
    local_30 = 0;
    local_38 = *(undefined4 *)((int)__s + 0xc);
    local_2c = *(undefined4 *)((int)__s + 0xb0);
    FUN_00011c5c(local_44 + 1,&local_34);
    FUN_000117dc(__arg);
    FUN_00011904(__s);
    RK_MPI_SYS_Exit();
  }
  return 0;
}



/* ===== entry @ 000112c4 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023038)
            (DAT_000112f8,param_2,&stack0x00000004,DAT_000112fc,DAT_000112f4,param_1);
  return;
}



/* ===== FUN_00011300 @ 00011300 size=32 ===== */

void FUN_00011300(void)

{
  if (DAT_00011324 == DAT_00011320) {
    return;
  }
  if (DAT_00011328 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001131c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011328)();
  return;
}



/* ===== _FINI_0 @ 00011364 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000113a0;
  if (*DAT_000113a0 != '\0') {
    return;
  }
  FUN_00011300();
  if (DAT_000113a4 != 0) {
    __deregister_frame_info(DAT_000113a8);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000113ac size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000113d0 != 0) {
    __register_frame_info(DAT_000113d8,DAT_000113d4);
  }
  if ((DAT_0001135c - DAT_00011358 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011360 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011360)();
  return;
}



/* ===== FUN_000113dc @ 000113dc size=520 ===== */

undefined4 FUN_000113dc(int *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  FILE *__s;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *local_12c;
  undefined2 local_128;
  char local_126;
  char local_125;
  undefined1 local_124;
  char local_123;
  undefined1 local_122;
  char acStack_120 [256];
  
  memset(acStack_120,0,0x100);
  pcVar1 = DAT_000115e4;
  local_12c = (void *)0x0;
  __s = (FILE *)0x0;
  if (param_1[1] != 0) {
    snprintf(acStack_120,0x100,DAT_000115e8,param_1[1],param_1[2]);
    __s = fopen64(acStack_120,DAT_000115ec);
    if (__s == (FILE *)0x0) {
      printf(DAT_000115f0,param_1[2],param_1[1]);
      *pcVar1 = '\x01';
      return 0;
    }
  }
  uVar4 = DAT_00011604;
  uVar3 = DAT_00011600;
  uVar2 = DAT_000115fc;
  iVar9 = 0;
  do {
    if (*pcVar1 != '\0') {
LAB_000115a8:
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return 0;
    }
    iVar6 = FUN_00011720(param_1,&local_12c);
    iVar8 = iVar9;
    if (iVar6 == 0) {
      if (*param_1 <= iVar9 && 0 < *param_1) {
        FUN_0001178c(param_1);
        *pcVar1 = '\x01';
        goto LAB_000115a8;
      }
      if (__s != (FILE *)0x0) {
        if (*DAT_000115f4 == 0x4000001b) {
          iVar8 = 0;
          do {
            if (param_1[0xf] == *(int *)(DAT_000115f8 + iVar8 * 8)) {
              cVar5 = *(char *)(DAT_000115f8 + iVar8 * 8 + 4);
              goto LAB_0001149c;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != 0xd);
          cVar5 = '\0';
LAB_0001149c:
          local_128 = 0xf1ff;
          uVar7 = param_1[5] + 7;
          local_126 = (*(byte *)(param_1 + 0xe) >> 2) + 0x40 + cVar5 * '\x04';
          local_125 = (char)(uVar7 >> 0xb) + *(byte *)(param_1 + 0xe) * '@';
          local_123 = (char)uVar7 * ' ' + '\x1f';
          local_124 = (undefined1)(uVar7 >> 3);
          local_122 = 0xfc;
          fwrite(&local_128,1,7,__s);
        }
        fwrite(local_12c,1,param_1[5],__s);
        fflush(__s);
      }
      iVar8 = iVar9 + 1;
      RK_LOG(2,uVar4,uVar3,uVar2,0x7e,param_1[2],iVar9,param_1[5]);
      FUN_0001178c(param_1);
    }
    usleep(1000);
    iVar9 = iVar8;
  } while( true );
}



/* ===== FUN_0001163c @ 0001163c size=104 ===== */

void FUN_0001163c(undefined4 param_1)

{
  puts(DAT_000116a4);
  printf(DAT_000116a8,param_1);
  puts(DAT_000116ac);
  puts(DAT_000116b0);
  puts(DAT_000116b4);
  puts(DAT_000116b8);
  puts(DAT_000116bc);
  puts(DAT_000116c0);
  puts(DAT_000116c4);
  puts(DAT_000116c8);
  puts(DAT_000116cc);
  return;
}



/* ===== FUN_000116d0 @ 000116d0 size=68 ===== */

int FUN_000116d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_AENC_CreateChn
                    (*(undefined4 *)(param_1 + 8),param_1 + 0x28,param_3,param_4,param_1,param_2);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_0001171c,DAT_00011718,DAT_00011714,0x24,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00011720 @ 00011720 size=96 ===== */

int FUN_00011720(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AENC_GetStream
                    (*(undefined4 *)(param_1 + 8),param_1 + 0x10,0xffffffff,param_4,param_1,param_2)
  ;
  if (iVar1 == 0) {
    uVar2 = RK_MPI_MB_Handle2VirAddr(*(undefined4 *)(param_1 + 0x10));
    *param_2 = uVar2;
  }
  else {
    RK_LOG(2,DAT_00011788,DAT_00011784,DAT_00011780,0x32,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001178c @ 0001178c size=68 ===== */

int FUN_0001178c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_AENC_ReleaseStream
                    (*(undefined4 *)(param_1 + 8),param_1 + 0x10,param_3,param_4,param_1,param_2);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000117d8,DAT_000117d4,DAT_000117d0,0x3d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000117dc @ 000117dc size=64 ===== */

undefined4 FUN_000117dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = RK_MPI_AENC_DestroyChn(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00011824,DAT_00011820,DAT_0001181c,0x48,iVar1,param_3);
  }
  return 0;
}



/* ===== FUN_00011828 @ 00011828 size=196 ===== */

undefined4 FUN_00011828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = RK_MPI_AI_SetPubAttr
                    (*(undefined4 *)(param_1 + 8),param_1 + 0x14,param_3,param_4,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AI_Enable(*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) {
      iVar1 = RK_MPI_AI_EnableChn(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      if (iVar1 == 0) {
        iVar1 = RK_MPI_AI_EnableReSmp
                          (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)(param_1 + 0x10));
        if (iVar1 == 0) {
          return 0;
        }
        uVar3 = 0x37;
        uVar2 = DAT_00011900;
      }
      else {
        uVar3 = 0x30;
        uVar2 = DAT_000118fc;
      }
    }
    else {
      uVar3 = 0x2a;
      uVar2 = DAT_000118f8;
    }
  }
  else {
    uVar3 = 0x24;
    uVar2 = DAT_000118ec;
  }
  RK_LOG(2,DAT_000118f4,uVar2,DAT_000118f0,uVar3,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00011904 @ 00011904 size=120 ===== */

undefined4 FUN_00011904(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = RK_MPI_AI_DisableReSmp
                    (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_3,param_4,
                     param_1,param_2,param_3);
  uVar2 = RK_MPI_AI_DisableChn(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar1 = uVar1 | uVar2;
  if (uVar1 == 0) {
    uVar1 = RK_MPI_AI_Disable(*(undefined4 *)(param_1 + 8));
    if (uVar1 == 0) {
      return 0;
    }
    uVar4 = 0x4a;
    uVar3 = DAT_00011988;
  }
  else {
    uVar4 = 0x44;
    uVar3 = DAT_0001197c;
  }
  RK_LOG(2,DAT_00011984,uVar3,DAT_00011980,uVar4,uVar1);
  return 0xffffffff;
}



/* ===== FUN_0001198c @ 0001198c size=104 ===== */

undefined4 FUN_0001198c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AI_GetFrame(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                             param_1 + 0x80,0,0xffffffff,param_2,param_3);
  if (iVar1 == 0) {
    uVar2 = RK_MPI_MB_Handle2VirAddr(*(undefined4 *)(param_1 + 0x80));
    *param_2 = uVar2;
  }
  else {
    RK_LOG(2,DAT_000119f8,DAT_000119f4,DAT_000119fc,0x5a,iVar1);
  }
  return 0;
}



/* ===== FUN_00011c14 @ 00011c14 size=60 ===== */

int FUN_00011c14(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_Bind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00011c58,DAT_00011c54,DAT_00011c50,0x4d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00011c5c @ 00011c5c size=60 ===== */

int FUN_00011c5c(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_UnBind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00011ca0,DAT_00011c9c,DAT_00011c98,0x59,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00011ca4 @ 00011ca4 size=312 ===== */

undefined4 FUN_00011ca4(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FILE *__stream;
  short local_46;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  
  *param_2 = 0x100;
  *param_3 = 0x100;
  if (param_1 == (char *)0x0) {
    RK_LOG(2,DAT_00011de4,DAT_00011ddc,DAT_00011de0,0x69);
  }
  else {
    __stream = fopen64(param_1,DAT_00011de8);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00011de4,DAT_00011dec,DAT_00011de0,0x6f,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_00011df4;
        uVar1 = DAT_00011de4;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_00011de0,0x7e,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_00011de4,DAT_00011df0,DAT_00011de0,0x75);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== _fini @ 00011f80 size=16 ===== */

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



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_Disable @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_Disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

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



/* ===== <EXTERNAL>::RK_MPI_AENC_ReleaseStream @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_GetStream @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_DestroyChn @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

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



/* ===== <EXTERNAL>::fread @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_ReleaseFrame @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_ReleaseFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableChn @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableChn @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetFrame @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetPubAttr @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetPubAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_Enable @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_Enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableReSmp @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_CreateChn @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableReSmp @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000240b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000240b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000240b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000240bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


