// linear.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000105dc size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::getenv @ 00010600 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002200c)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fscanf @ 0001060c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_00022010)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 00010618 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00022014)(__s);
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010624 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00022018)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010630 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002201c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 0001063c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00022020)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010648 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022024)();
  return;
}



/* ===== <EXTERNAL>::fopen @ 00010654 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00022028)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010660 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002202c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 0001066c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_00022030)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010678 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00022034)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00010684 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00022038)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010690 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002203c)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001069c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022040)();
  return;
}



/* ===== <EXTERNAL>::raise @ 000106a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00022044)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000106b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022048)(__ptr);
  return;
}



/* ===== entry @ 000106c0 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_0001070c + 0x106d8 == DAT_00010708 + 0x106d0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010710 + 0x106e0 + DAT_00010714);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001077c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000107f0 + 0x10798;
  if (*(char *)(DAT_000107ec + 0x1078c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000107f4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000107f8 + 0x107b8));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000107fc) != 0) {
    __deregister_frame_info(DAT_00010800 + 0x107d8);
  }
  *(undefined1 *)(DAT_00010804 + 0x107e8) = 1;
  return;
}



/* ===== _INIT_0 @ 00010808 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010840 + 0x10818 + DAT_00010844) != 0) {
    __register_frame_info(DAT_0001084c + 0x10838,DAT_00010848 + 0x10834);
  }
  if (((DAT_00010770 + 0x10730) - (DAT_0001076c + 0x10728) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010774 + 0x10738 + DAT_00010778);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00010850 @ 00010850 size=520 ===== */

int FUN_00010850(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1[1] + 0xc))();
  if (0 < iVar1) {
    iVar3 = param_1[10];
    iVar17 = 0;
    iVar18 = param_1[0xe];
    iVar4 = param_1[8];
    iVar16 = param_1[0x11];
    iVar5 = *(int *)(*param_1 + 0x10);
    iVar6 = *(int *)(*param_1 + 0x14);
    iVar7 = param_1[9];
    iVar8 = param_1[0xd];
    iVar9 = param_1[0xb];
    iVar10 = param_1[0xc];
    iVar11 = param_1[5];
    iVar12 = param_1[6];
    iVar13 = param_1[7];
    iVar14 = param_1[4];
    do {
      iVar15 = *param_2;
      iVar19 = param_2[1];
      iVar2 = FUN_0001103c(iVar19 * iVar7 + iVar15 * iVar4 + iVar3,iVar18);
      *param_2 = iVar2;
      iVar15 = FUN_0001103c(iVar19 * iVar10 + iVar15 * iVar9 + iVar8,iVar18);
      param_2[1] = iVar15;
      if ((iVar5 != 0) && (param_1[0xf] != 0)) {
        iVar2 = FUN_00010f74(iVar5 * iVar2);
        *param_2 = iVar2;
      }
      if ((iVar6 != 0) && (param_1[0x10] != 0)) {
        iVar2 = FUN_00010f74(iVar6 * iVar15);
        param_2[1] = iVar2;
      }
      iVar2 = FUN_00010f74(iVar12 * (iVar11 + param_2[2]),iVar13);
      if (iVar14 != 0) {
        iVar15 = *param_2;
        *param_2 = param_2[1];
        param_2[1] = iVar15;
      }
      param_2[2] = iVar2;
      if (iVar16 == 2) {
        *param_2 = (param_1[0xf] + -1) - *param_2;
        param_2[1] = (param_1[0x10] + -1) - param_2[1];
      }
      else if (iVar16 == 3) {
        iVar15 = param_1[0x10];
        iVar2 = param_2[1];
        param_2[1] = *param_2;
        *param_2 = (iVar15 + -1) - iVar2;
      }
      else if (iVar16 == 1) {
        iVar2 = *param_2;
        *param_2 = param_2[1];
        param_2[1] = (param_1[0xf] + -1) - iVar2;
      }
      iVar17 = iVar17 + 1;
      param_2 = param_2 + 5;
    } while (iVar1 != iVar17);
  }
  return iVar1;
}



/* ===== FUN_00010c78 @ 00010c78 size=16 ===== */

undefined4 FUN_00010c78(void *param_1)

{
  free(param_1);
  return 0;
}



/* ===== linear_mod_init @ 00010c88 size=424 ===== */

void * linear_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  char *pcVar1;
  int iVar2;
  FILE *__stream;
  int iVar3;
  int iVar4;
  stat sStack_78;
  
  __ptr = malloc(0x48);
  iVar2 = DAT_00010e38;
  iVar4 = DAT_00010e30 + 0x10ca8;
  if (__ptr != (void *)0x0) {
    iVar3 = DAT_00010e34 + 0x10cc8;
    *(undefined4 *)((int)__ptr + 0x20) = 1;
    *(undefined4 *)((int)__ptr + 0x30) = 1;
    *(int *)((int)__ptr + 0xc) = iVar3;
    *(undefined4 *)((int)__ptr + 0x38) = 1;
    *(undefined4 *)((int)__ptr + 0x18) = 1;
    *(undefined4 *)((int)__ptr + 0x1c) = 1;
    *(undefined4 *)((int)__ptr + 0x24) = 0;
    *(undefined4 *)((int)__ptr + 0x28) = 0;
    *(undefined4 *)((int)__ptr + 0x2c) = 0;
    *(undefined4 *)((int)__ptr + 0x34) = 0;
    *(undefined4 *)((int)__ptr + 0x14) = 0;
    *(undefined4 *)((int)__ptr + 0x10) = 0;
    *(undefined4 *)((int)__ptr + 0x44) = 0;
    pcVar1 = getenv((char *)(iVar2 + 0x10cd4));
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)(DAT_00010e50 + 0x10de4);
    }
    iVar2 = stat(pcVar1,&sStack_78);
    if (iVar2 == 0) {
      __stream = fopen(pcVar1,(char *)(DAT_00010e3c + 0x10d2c));
      if (__stream == (FILE *)0x0) {
        free(__ptr);
        perror((char *)(DAT_00010e5c + 0x10e2c));
        return (void *)0x0;
      }
      pcVar1 = (char *)(DAT_00010e40 + 0x10d48);
      iVar2 = (int)__ptr + 0x20;
      do {
        iVar3 = iVar2 + 4;
        iVar2 = fscanf(__stream,pcVar1,iVar2);
        if (iVar2 != 1) break;
        iVar2 = iVar3;
      } while ((int)__ptr + 0x3c != iVar3);
      iVar2 = fscanf(__stream,(char *)(DAT_00010e44 + 0x10d80),(int)__ptr + 0x3c,(int)__ptr + 0x40);
      if (iVar2 == 0) {
        fwrite((void *)(DAT_00010e58 + 0x10e00),1,0x28,
               (FILE *)**(undefined4 **)(iVar4 + DAT_00010e54));
      }
      fscanf(__stream,(char *)(DAT_00010e48 + 0x10d9c),(int)__ptr + 0x44);
      fclose(__stream);
    }
    iVar2 = tslib_parse_vars(__ptr,DAT_00010e4c + 0x10dc8,5,param_2);
    if (iVar2 != 0) {
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00010f74 @ 00010f74 size=168 ===== */

uint FUN_00010f74(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 - 1 == 0) {
    return param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = 0xffffffff;
    }
    uVar2 = FUN_00011138(uVar1);
    return uVar2;
  }
  if (param_1 <= param_2) {
    return (uint)(param_1 == param_2);
  }
  if ((param_2 & param_2 - 1) == 0) {
    return param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff);
  }
  uVar3 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar2 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar4 = 0;
  while( true ) {
    if (uVar3 <= param_1) {
      param_1 = param_1 - uVar3;
      uVar4 = uVar4 | uVar2;
    }
    if (uVar3 >> 1 <= param_1) {
      param_1 = param_1 - (uVar3 >> 1);
      uVar4 = uVar4 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= param_1) {
      param_1 = param_1 - (uVar3 >> 2);
      uVar4 = uVar4 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= param_1) {
      param_1 = param_1 - (uVar3 >> 3);
      uVar4 = uVar4 | uVar2 >> 3;
    }
    bVar5 = param_1 == 0;
    if (!bVar5) {
      uVar2 = uVar2 >> 4;
      bVar5 = uVar2 == 0;
    }
    if (bVar5) break;
    uVar3 = uVar3 >> 4;
  }
  return uVar4;
}



/* ===== FUN_0001103c @ 0001103c size=220 ===== */

uint FUN_0001103c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    bVar6 = (int)param_1 < 0;
    if (0 < (int)param_1) {
      param_1 = 0x7fffffff;
    }
    if (bVar6) {
      param_1 = 0x80000000;
    }
    uVar2 = FUN_00011138(param_1);
    return uVar2;
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



/* ===== FUN_00011138 @ 00011138 size=16 ===== */

void FUN_00011138(void)

{
  raise(8);
  return;
}



/* ===== _fini @ 00011148 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::getenv @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

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



/* ===== <EXTERNAL>::strtoul @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_parse_vars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


