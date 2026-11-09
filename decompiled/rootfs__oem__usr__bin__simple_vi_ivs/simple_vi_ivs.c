// simple_vi_ivs — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001096c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00010990 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002200c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 0001099c size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00022010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000109a8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000109b4 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00022018)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 000109c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002201c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::putchar @ 000109cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00022020)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 000109d8 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00022024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 000109f0 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_0002202c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 000109fc size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00022030)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_DestroyChn @ 00010a08 size=12 ===== */

void RK_MPI_IVS_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_IVS_DestroyChn_00022034)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00010a14 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00022038)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00010a20 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0002203c)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00010a2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00022040)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_ReleaseResults @ 00010a38 size=12 ===== */

void RK_MPI_IVS_ReleaseResults(void)

{
  (*(code *)PTR_RK_MPI_IVS_ReleaseResults_00022044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00010a44 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_00022048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00010a50 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_0002204c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00010a5c size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_00022050)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010a68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022054)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetResults @ 00010a74 size=12 ===== */

void RK_MPI_IVS_GetResults(void)

{
  (*(code *)PTR_RK_MPI_IVS_GetResults_00022058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_CreateChn @ 00010a80 size=12 ===== */

void RK_MPI_IVS_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_IVS_CreateChn_0002205c)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010a8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022060)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010a98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00022064)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00010aa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00022068)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00010ab0 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_0002206c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00010abc size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00022070)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00010ac8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022074)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00010ad4 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_00022078)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010ae0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002207c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010aec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00022080)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010af8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022084)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010b04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00022088)(__th);
  return iVar1;
}



/* ===== FUN_00010b10 @ 00010b10 size=212 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00010b10(void)

{
  char *pcVar1;
  pthread_t local_24 [7];
  
  signal(2,DAT_00010be4);
  RK_MPI_SYS_Init();
  FUN_00010f20();
  FUN_0001100c(0,0x780,0x438);
  FUN_00010ebc();
  local_24[1] = 8;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = 0x14;
  local_24[5] = 0;
  local_24[6] = 0;
  RK_MPI_SYS_Bind(local_24 + 1,local_24 + 4);
  pthread_create(local_24,(pthread_attr_t *)0x0,DAT_00010be8,(void *)0x0);
  pcVar1 = DAT_00010bec;
  while (*pcVar1 == '\0') {
    usleep(5000);
  }
  pthread_join(local_24[0],(void **)0x0);
  RK_MPI_SYS_UnBind(local_24 + 1,local_24 + 4);
  RK_MPI_IVS_DestroyChn(0);
  RK_MPI_VI_DisableChn(0);
  RK_MPI_VI_DisableDev(0);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 00010bf0 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00022028)
            (DAT_00010c24,param_2,&stack0x00000004,DAT_00010c28,DAT_00010c20,param_1);
  return;
}



/* ===== FUN_00010c2c @ 00010c2c size=32 ===== */

void FUN_00010c2c(void)

{
  if (DAT_00010c50 == DAT_00010c4c) {
    return;
  }
  if (DAT_00010c54 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010c54)();
  return;
}



/* ===== _FINI_0 @ 00010c90 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010ccc;
  if (*DAT_00010ccc != '\0') {
    return;
  }
  FUN_00010c2c();
  if (DAT_00010cd0 != 0) {
    __deregister_frame_info(DAT_00010cd4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010cd8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010cfc != 0) {
    __register_frame_info(DAT_00010d04,DAT_00010d00);
  }
  if ((DAT_00010c88 - DAT_00010c84 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010c8c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010c8c)();
  return;
}



/* ===== FUN_00010d08 @ 00010d08 size=360 ===== */

undefined4 FUN_00010d08(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int __c;
  int extraout_r1;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 local_30;
  
  iVar4 = 0;
  printf(DAT_00010e74,DAT_00010e70);
  uVar2 = DAT_00010e78;
  while (*DAT_00010e7c == '\0') {
    local_30 = 0;
    iVar3 = RK_MPI_IVS_GetResults(0,&local_30,0xffffffff);
    if (iVar3 == 0) {
      FUN_00011234(iVar4,10);
      if (((extraout_r1 == 0) && ((int)local_30 == 1)) &&
         (*(int *)(Elf32_Ehdr_00010000.e_ident_pad + local_30._4_4_ + -1) != 0)) {
        uVar5 = *(uint *)(Elf32_Ehdr_00010000.e_ident_pad + local_30._4_4_ + 3);
        iVar3 = 0xf0;
        do {
          putchar(0x2d);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        putchar(10);
        iVar3 = 0;
        for (iVar6 = 0; iVar6 < (int)(uVar5 >> 6); iVar6 = iVar6 + 1) {
          iVar8 = 0;
          do {
            uVar7 = 0;
            do {
              uVar1 = uVar7 & 0xff;
              uVar7 = uVar7 + 1;
              if (((int)(uint)*(byte *)(*(int *)(Elf32_Ehdr_00010000.e_ident_pad +
                                                local_30._4_4_ + -1) + iVar8 + iVar3) >> uVar1 & 1U)
                  == 0) {
                __c = 0x30;
              }
              else {
                __c = 0x31;
              }
              putchar(__c);
            } while (uVar7 != 8);
            iVar8 = iVar8 + 1;
          } while (iVar8 != 0x1e);
          putchar(10);
          iVar3 = iVar3 + 0x40;
        }
        iVar3 = 0xf0;
        do {
          putchar(0x2d);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        putchar(10);
      }
      RK_MPI_IVS_ReleaseResults(0,&local_30);
    }
    else {
      RK_LOG(2,uVar2,DAT_00010e80,DAT_00010e84,0x4c,iVar3);
    }
    iVar4 = iVar4 + 1;
  }
  return 0;
}



/* ===== FUN_00010ebc @ 00010ebc size=100 ===== */

void FUN_00010ebc(void)

{
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 local_374;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  
  memset(&local_390,0,0x388);
  local_390 = 3;
  uStack_38c = 0x780;
  local_388 = 0x438;
  local_374 = 0x1e;
  local_368 = 1;
  local_364 = 1;
  local_358 = 1;
  local_354 = 1;
  local_350 = 7;
  RK_MPI_IVS_CreateChn(0,&local_390);
  return;
}



/* ===== FUN_00010f20 @ 00010f20 size=208 ===== */

undefined4 FUN_00010f20(void)

{
  int iVar1;
  char *__format;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  int local_48;
  
  puts(DAT_00010ff0);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_68 = 0;
  local_5c = 0;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  memset(&local_4c,0,0x44);
  iVar1 = RK_MPI_VI_GetDevAttr(0,&local_68);
  if (iVar1 == DAT_00010ff4) {
    iVar1 = RK_MPI_VI_SetDevAttr(0,&local_68);
    __format = DAT_00010ff8;
    if (iVar1 != 0) goto LAB_00010fc4;
  }
  else {
    puts(DAT_00011004);
  }
  iVar1 = RK_MPI_VI_GetDevIsEnable(0);
  if (iVar1 == 0) {
    puts(DAT_00011008);
    return 0;
  }
  iVar1 = RK_MPI_VI_EnableDev(0);
  __format = DAT_00010ffc;
  if ((iVar1 == 0) &&
     (local_4c = iVar1, local_48 = iVar1, iVar1 = RK_MPI_VI_SetDevBindPipe(0,&local_4c),
     __format = DAT_00011000, iVar1 == 0)) {
    return 0;
  }
LAB_00010fc4:
  printf(__format,iVar1);
  return 0xffffffff;
}



/* ===== FUN_0001100c @ 0001100c size=128 ===== */

uint FUN_0001100c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [24];
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_40;
  
  memset(auStack_74,0,100);
  local_40 = 4;
  local_4c = 2;
  local_5c = 2;
  local_7c = param_2;
  local_78 = param_3;
  uVar1 = RK_MPI_VI_SetChnAttr(0,param_1,&local_7c);
  uVar2 = RK_MPI_VI_EnableChn(0,param_1);
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    printf(DAT_0001108c,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00011160 @ 00011160 size=196 ===== */

uint FUN_00011160(uint param_1,uint param_2)

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



/* ===== FUN_00011234 @ 00011234 size=64 ===== */

void FUN_00011234(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00011160();
    return;
  }
  raise(8);
  return;
}



/* ===== _fini @ 00011264 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_DestroyChn @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetResults @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_GetResults(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_ReleaseResults @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_ReleaseResults(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_CreateChn @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


