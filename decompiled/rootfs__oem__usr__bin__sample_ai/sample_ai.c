// sample_ai — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000109b8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000109dc size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002200c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000109e8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022010)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 000109f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00022014)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::usleep @ 00010a00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00022018)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_ReleaseFrame @ 00010a0c size=12 ===== */

void RK_MPI_AI_ReleaseFrame(void)

{
  (*(code *)PTR_RK_MPI_AI_ReleaseFrame_0002201c)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010a18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00022020)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableChn @ 00010a24 size=12 ===== */

void RK_MPI_AI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableChn_00022024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetFrame @ 00010a30 size=12 ===== */

void RK_MPI_AI_GetFrame(void)

{
  (*(code *)PTR_RK_MPI_AI_GetFrame_00022028)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010a48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00022030)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010a54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00022034)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableChn @ 00010a60 size=12 ===== */

void RK_MPI_AI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableChn_00022038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010a6c size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0002203c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_Enable @ 00010a78 size=12 ===== */

void RK_MPI_AI_Enable(void)

{
  (*(code *)PTR_RK_MPI_AI_Enable_00022040)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010a84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00022044)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010a90 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00022048)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010a9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002204c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010aa8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00022050)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010ab4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022054)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableReSmp @ 00010ac0 size=12 ===== */

void RK_MPI_AI_EnableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableReSmp_00022058)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010acc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002205c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010ad8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00022060)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetPubAttr @ 00010ae4 size=12 ===== */

void RK_MPI_AI_SetPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_SetPubAttr_00022064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00010af0 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00022068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_Disable @ 00010afc size=12 ===== */

void RK_MPI_AI_Disable(void)

{
  (*(code *)PTR_RK_MPI_AI_Disable_0002206c)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010b08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00022070)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 00010b14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00022074)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::atoi @ 00010b20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00022078)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010b2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002207c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00010b38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00022080)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableReSmp @ 00010b44 size=12 ===== */

void RK_MPI_AI_DisableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableReSmp_00022084)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00010b50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00022088)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00010b5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002208c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010b68 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022090)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010b74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00022094)(__th);
  return iVar1;
}



/* ===== FUN_00010b80 @ 00010b80 size=712 ===== */

undefined4 FUN_00010b80(int param_1,char **param_2)

{
  undefined4 *puVar1;
  __useconds_t __useconds;
  void *__s;
  int iVar2;
  char *__s1;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int local_44;
  int local_40;
  int local_3c;
  pthread_t local_2c [2];
  
  puVar1 = DAT_00010e48;
  if (param_1 < 2) {
LAB_00010b98:
    FUN_00011160(*param_2);
  }
  else {
    __s = malloc(0xa8);
    uVar7 = 0;
    pcVar6 = (char *)0x0;
    iVar8 = 8000;
    uVar5 = 1;
    iVar4 = 2;
    memset(__s,0,0xa8);
    signal(2,DAT_00010e4c);
    local_40 = 2;
    local_44 = -1;
    local_3c = 16000;
    while (iVar2 = getopt(param_1,param_2,DAT_00010e50), iVar2 != -1) {
      if (iVar2 == 100) {
        pcVar6 = (char *)*puVar1;
      }
      else if (iVar2 < 0x65) {
        if (iVar2 == 0x52) {
          local_3c = atoi((char *)*puVar1);
        }
        else if (iVar2 == 99) {
          iVar4 = atoi((char *)*puVar1);
        }
        else {
          if (iVar2 != 0x43) goto LAB_00010b98;
          local_40 = atoi((char *)*puVar1);
        }
      }
      else if (iVar2 == 0x6f) {
        uVar7 = *puVar1;
      }
      else if (iVar2 < 0x70) {
        if (iVar2 != 0x6c) goto LAB_00010b98;
        local_44 = atoi((char *)*puVar1);
      }
      else if (iVar2 == 0x72) {
        iVar8 = atoi((char *)*puVar1);
      }
      else {
        if (iVar2 != 0x77) goto LAB_00010b98;
        __s1 = (char *)*puVar1;
        iVar2 = strcmp(__s1,DAT_00010e5c);
        if (iVar2 == 0) {
          uVar5 = 0;
        }
        else {
          iVar2 = strcmp(__s1,DAT_00010e60);
          if (iVar2 == 0) {
            uVar5 = 1;
          }
          else {
            iVar2 = strcmp(__s1,DAT_00010e64);
            if (iVar2 == 0) {
              uVar5 = 2;
            }
          }
        }
      }
    }
    if (iVar4 == 1) {
      uVar3 = 0;
    }
    else {
      if (iVar4 != 2) {
        printf(DAT_00010e58,DAT_00010e54,iVar4);
        return 0;
      }
      uVar3 = 1;
    }
    printf(DAT_00010e68,pcVar6);
    printf(DAT_00010e6c,iVar8);
    printf(DAT_00010e70,iVar4);
    printf(DAT_00010e74,local_44);
    printf(DAT_00010e78,uVar7);
    RK_MPI_SYS_Init();
    *(int *)((int)__s + 0x14) = local_40;
    *(undefined4 *)((int)__s + 8) = 0;
    *(undefined4 *)((int)__s + 0xc) = 0;
    *(int *)((int)__s + 0x18) = local_3c;
    *(undefined4 *)((int)__s + 0x1c) = uVar5;
    *(undefined4 *)((int)__s + 0x24) = uVar5;
    *(int *)((int)__s + 0x20) = iVar8;
    *(undefined4 *)((int)__s + 0x28) = uVar3;
    *(undefined4 *)((int)__s + 0x30) = 4;
    *(undefined4 *)((int)__s + 0x34) = 0x400;
    *(undefined4 *)((int)__s + 0x2c) = 0;
    *(int *)((int)__s + 0x38) = iVar4;
    *(undefined4 *)((int)__s + 4) = uVar7;
    if (pcVar6 != (char *)0x0) {
      strcpy((char *)((int)__s + 0x3c),pcVar6);
    }
    pcVar6 = DAT_00010e7c;
    FUN_000111e8(__s);
    __useconds = DAT_00010e84;
    pthread_create(local_2c,(pthread_attr_t *)0x0,DAT_00010e80,__s);
    printf(DAT_00010e88,DAT_00010e54);
    while (*pcVar6 == '\0') {
      usleep(__useconds);
    }
    printf(DAT_00010e8c,DAT_00010e54);
    pthread_join(local_2c[0],(void **)0x0);
    FUN_000112c4(__s);
    RK_MPI_SYS_Exit();
  }
  return 0;
}



/* ===== entry @ 00010e90 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002202c)
            (DAT_00010ec4,param_2,&stack0x00000004,DAT_00010ec8,DAT_00010ec0,param_1);
  return;
}



/* ===== FUN_00010ecc @ 00010ecc size=32 ===== */

void FUN_00010ecc(void)

{
  if (DAT_00010ef0 == DAT_00010eec) {
    return;
  }
  if (DAT_00010ef4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010ef4)();
  return;
}



/* ===== _FINI_0 @ 00010f30 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010f6c;
  if (*DAT_00010f6c != '\0') {
    return;
  }
  FUN_00010ecc();
  if (DAT_00010f70 != 0) {
    __deregister_frame_info(DAT_00010f74);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010f78 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010f9c != 0) {
    __register_frame_info(DAT_00010fa4,DAT_00010fa0);
  }
  if ((DAT_00010f28 - DAT_00010f24 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010f2c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f2c)();
  return;
}



/* ===== FUN_00010fa8 @ 00010fa8 size=360 ===== */

undefined4 FUN_00010fa8(int *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FILE *__s;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_124;
  char acStack_120 [256];
  
  memset(acStack_120,0,0x100);
  pcVar1 = DAT_00011110;
  local_124 = (void *)0x0;
  __s = (FILE *)0x0;
  if (param_1[1] != 0) {
    snprintf(acStack_120,0x100,DAT_00011114,param_1[1],param_1[3]);
    __s = fopen64(acStack_120,DAT_00011118);
    if (__s == (FILE *)0x0) {
      printf(DAT_0001111c,param_1[3],param_1[1]);
      *pcVar1 = '\x01';
      return 0;
    }
  }
  uVar4 = DAT_00011128;
  uVar3 = DAT_00011124;
  uVar2 = DAT_00011120;
  iVar7 = 0;
  do {
    if (*pcVar1 != '\0') {
LAB_000110e8:
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return 0;
    }
    iVar5 = FUN_0001134c(param_1,&local_124);
    iVar6 = iVar7;
    if (iVar5 == 0) {
      if (*param_1 <= iVar7 && 0 < *param_1) {
        FUN_000113c0(param_1);
        *pcVar1 = '\x01';
        goto LAB_000110e8;
      }
      if (__s != (FILE *)0x0) {
        fwrite(local_124,1,param_1[0x27],__s);
        fflush(__s);
      }
      iVar6 = iVar7 + 1;
      RK_LOG(2,uVar4,uVar3,uVar2,0x55,param_1[3],iVar7,param_1[0x27]);
      FUN_000113c0(param_1);
    }
    usleep(1000);
    iVar7 = iVar6;
  } while( true );
}



/* ===== FUN_00011160 @ 00011160 size=96 ===== */

void FUN_00011160(undefined4 param_1)

{
  puts(DAT_000111c0);
  printf(DAT_000111c4,param_1);
  puts(DAT_000111c8);
  puts(DAT_000111cc);
  puts(DAT_000111d0);
  puts(DAT_000111d4);
  puts(DAT_000111d8);
  puts(DAT_000111dc);
  puts(DAT_000111e0);
  puts(DAT_000111e4);
  return;
}



/* ===== FUN_000111e8 @ 000111e8 size=196 ===== */

undefined4 FUN_000111e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
        uVar2 = DAT_000112c0;
      }
      else {
        uVar3 = 0x30;
        uVar2 = DAT_000112bc;
      }
    }
    else {
      uVar3 = 0x2a;
      uVar2 = DAT_000112b8;
    }
  }
  else {
    uVar3 = 0x24;
    uVar2 = DAT_000112ac;
  }
  RK_LOG(2,DAT_000112b4,uVar2,DAT_000112b0,uVar3,iVar1);
  return 0xffffffff;
}



/* ===== FUN_000112c4 @ 000112c4 size=120 ===== */

undefined4 FUN_000112c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    uVar3 = DAT_00011348;
  }
  else {
    uVar4 = 0x44;
    uVar3 = DAT_0001133c;
  }
  RK_LOG(2,DAT_00011344,uVar3,DAT_00011340,uVar4,uVar1);
  return 0xffffffff;
}



/* ===== FUN_0001134c @ 0001134c size=104 ===== */

undefined4 FUN_0001134c(int param_1,undefined4 *param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_000113b8,DAT_000113b4,DAT_000113bc,0x5a,iVar1);
  }
  return 0;
}



/* ===== FUN_000113c0 @ 000113c0 size=72 ===== */

undefined4 FUN_000113c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AI_ReleaseFrame
                    (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_1 + 0x80,0,
                     param_1,param_2,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00011410,DAT_00011408,DAT_0001140c,0x65,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== _fini @ 00011414 size=16 ===== */

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



/* ===== <EXTERNAL>::malloc @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

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



/* ===== <EXTERNAL>::__uClibc_main @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_ReleaseFrame @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_ReleaseFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableChn @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableChn @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetFrame @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

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



/* ===== <EXTERNAL>::getopt @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_Enable @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_Enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableReSmp @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableReSmp @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00023088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00023090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


